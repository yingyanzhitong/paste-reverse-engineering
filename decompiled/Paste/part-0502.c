/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005cd240 | FUN_1005cd240 */

void FUN_1005cd240(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x90));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_1005cd2b0,*(undefined8 *)(lVar1 + 0x80),*(undefined8 *)(lVar1 + 0x88));
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001005cd2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1005cd2b0 | FUN_1005cd2b0 */

void FUN_1005cd2b0(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001005cd2e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005cd2ec | FUN_1005cd2ec */

void FUN_1005cd2ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  byte bVar1;
  TaskLocal *pTVar2;
  long *plVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar1 & 1) != 0) {
    pTVar2 = (TaskLocal *)(ulong)*(uint *)(PTR__withValueImpl_100eaf020 + 4);
    _swift_task_alloc();
    *(TaskLocal **)(unaff_x22 + 0x18) = pTVar2;
    *(long *)pTVar2 = unaff_x22;
    *(code **)(pTVar2 + 8) = FUN_1005cd444;
    Swift::TaskLocal::_withValueImpl
              (pTVar2,unaff_x20,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_1005cd488(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005cd444 | FUN_1005cd444 */

void FUN_1005cd444(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001005cd484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x1005cd488 | FUN_1005cd488 */

void FUN_1005cd488(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  ulong uVar1;
  UnownedSerialExecutor UVar2;
  long lVar3;
  long *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(long **)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar3 = *(long *)(*unaff_x20 +
                   *(long *)PTR___class_metadata_base_offset_for_Swift_TaskLocal_100eaf050);
  *(long *)(unaff_x22 + 0x38) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  uVar1 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar1;
  if (param_5 == 0) {
    UVar2.unknown = (undefined *)0x0;
    param_6 = 0;
  }
  else {
    _swift_getObjectType(param_5);
    UVar2 = Swift::Actor::get_unownedExecutor();
  }
  *(undefined **)(unaff_x22 + 0x50) = UVar2.unknown;
  *(undefined8 *)(unaff_x22 + 0x58) = param_6;
  _swift_task_switch(FUN_1005cd540,UVar2.unknown);
  return;
}



/* Address: 0x1005cd540 | FUN_1005cd540 */

void FUN_1005cd540(void)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int *piVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x38);
  piVar5 = *(int **)(unaff_x22 + 0x20);
  (**(code **)(*(long *)(unaff_x22 + 0x40) + 0x20))(uVar3,*(undefined8 *)(unaff_x22 + 0x18),uVar4);
  _swift_task_localValuePush(uVar2,uVar3,uVar4);
  iVar1 = *piVar5;
  plVar6 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005cd5dc;
                    /* WARNING: Could not recover jumptable at 0x0001005cd5d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))(plVar6,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x1005cd5dc | FUN_1005cd5dc */

void FUN_1005cd5dc(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x60));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005cd680;
  }
  else {
    pcVar1 = FUN_1005cd63c;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  return;
}



/* Address: 0x1005cd63c | FUN_1005cd63c */

void FUN_1005cd63c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_localValuePop();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005cd67c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005cd680 | FUN_1005cd680 */

void FUN_1005cd680(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_task_localValuePop();
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005cd6c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005cd6c4 | FUN_1005cd6c4 */

void FUN_1005cd6c4(long param_1,uint param_2,long *param_3)

{
  ulong *puVar1;
  ulong uVar2;
  code *pcVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  _StringGuts _Var7;
  char *pcVar8;
  undefined *puVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined1 local_100 [16];
  StaticString local_f0;
  __uint64 _Stack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined1 uStack_c8;
  undefined7 local_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  undefined8 uStack_77;
  undefined *local_58;
  
  uVar19 = *(ulong *)(param_1 + 0x10);
  if (uVar19 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    FUN_1000f8cac(param_1 + 0x20,&local_a8,&DAT_100fd4190,&DAT_100c647d0);
    uVar17 = uStack_a0;
    uVar2 = local_a8;
    uStack_d8 = uStack_90;
    local_e0 = local_98;
    uStack_c8 = uStack_80;
    uStack_d0 = local_88;
    uStack_bf = uStack_77;
    local_c7 = uStack_7f;
    uStack_c0 = uStack_78;
    lVar15 = *param_3;
    uVar14 = local_a8;
    uVar6 = uStack_a0;
    thunk_FUN_1005be370();
    lVar10 = *(long *)(lVar15 + 0x10);
    uVar11 = (ulong)~(uint)uVar6 & 1;
    lVar18 = lVar10 + uVar11;
    if (SCARRY8(lVar10,uVar11)) {
LAB_1005cda00:
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cda04);
      (*pcVar3)();
    }
    if (*(long *)(lVar15 + 0x18) < lVar18) {
      FUN_1005be624(lVar18,param_2 & 1);
      uVar14 = uVar2;
      uVar11 = uVar17;
      thunk_FUN_1005be370();
      if (((uint)uVar6 & 1) != ((uint)uVar11 & 1)) {
LAB_1005cd798:
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cd7a8);
        (*pcVar3)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_1005be474();
    }
    if ((uVar6 & 1) == 0) {
      lVar10 = *param_3;
      lVar18 = lVar10 + (uVar14 >> 6) * 8;
      *(ulong *)(lVar18 + 0x40) = *(ulong *)(lVar18 + 0x40) | 1L << (uVar14 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar10 + 0x30) + uVar14 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar17;
      puVar12 = (undefined8 *)(*(long *)(lVar10 + 0x38) + uVar14 * 0x30);
      *(undefined8 *)((long)puVar12 + 0x21) = uStack_bf;
      *(ulong *)((long)puVar12 + 0x19) = CONCAT17(uStack_c0,local_c7);
      puVar12[1] = uStack_d8;
      *puVar12 = local_e0;
      puVar12[3] = CONCAT71(local_c7,uStack_c8);
      puVar12[2] = uStack_d0;
      if (SCARRY8(*(long *)(lVar10 + 0x10),1)) {
LAB_1005cda04:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cda08);
        (*pcVar3)();
      }
      *(long *)(lVar10 + 0x10) = *(long *)(lVar10 + 0x10) + 1;
      if (uVar19 != 1) {
        lVar18 = param_1 + 0x60;
        uVar14 = 1;
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cda0c);
            (*pcVar3)();
          }
          FUN_1000f8cac(lVar18,&local_a8,&DAT_100fd4190,&DAT_100c647d0);
          uVar17 = uStack_a0;
          uVar2 = local_a8;
          uStack_d8 = uStack_90;
          local_e0 = local_98;
          uStack_c8 = uStack_80;
          uStack_d0 = local_88;
          uStack_bf = uStack_77;
          local_c7 = uStack_7f;
          uStack_c0 = uStack_78;
          lVar16 = *param_3;
          uVar6 = local_a8;
          uVar11 = uStack_a0;
          thunk_FUN_1005be370();
          lVar15 = *(long *)(lVar16 + 0x10);
          uVar13 = (ulong)~(uint)uVar11 & 1;
          lVar10 = lVar15 + uVar13;
          if (SCARRY8(lVar15,uVar13)) goto LAB_1005cda00;
          if (*(long *)(lVar16 + 0x18) < lVar10) {
            FUN_1005be624(lVar10,1);
            uVar6 = uVar2;
            uVar13 = uVar17;
            thunk_FUN_1005be370();
            if (((uint)uVar11 & 1) != ((uint)uVar13 & 1)) goto LAB_1005cd798;
          }
          if ((uVar11 & 1) != 0) goto LAB_1005cd7bc;
          lVar15 = *param_3;
          lVar10 = lVar15 + (uVar6 >> 6) * 8;
          *(ulong *)(lVar10 + 0x40) = *(ulong *)(lVar10 + 0x40) | 1L << (uVar6 & 0x3f);
          puVar1 = (ulong *)(*(long *)(lVar15 + 0x30) + uVar6 * 0x10);
          *puVar1 = uVar2;
          puVar1[1] = uVar17;
          puVar12 = (undefined8 *)(*(long *)(lVar15 + 0x38) + uVar6 * 0x30);
          *(undefined8 *)((long)puVar12 + 0x21) = uStack_bf;
          *(ulong *)((long)puVar12 + 0x19) = CONCAT17(uStack_c0,local_c7);
          puVar12[1] = uStack_d8;
          *puVar12 = local_e0;
          puVar12[3] = CONCAT71(local_c7,uStack_c8);
          puVar12[2] = uStack_d0;
          if (SCARRY8(*(long *)(lVar15 + 0x10),1)) goto LAB_1005cda04;
          uVar14 = uVar14 + 1;
          *(long *)(lVar15 + 0x10) = *(long *)(lVar15 + 0x10) + 1;
          lVar18 = lVar18 + 0x40;
        } while (uVar19 != uVar14);
      }
      _swift_bridgeObjectRelease(param_1);
    }
    else {
LAB_1005cd7bc:
      puVar9 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      puVar4 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      _swift_allocError(PTR___type_metadata_for_Swift__MergeError_100eacdf0,
                        PTR___protocol_witness_table_for_Swift__MergeError___Swift_Error_in_Swift_100eacdf8
                        ,0,0);
      _swift_willThrow();
      _swift_bridgeObjectRelease(param_1);
      local_58 = puVar4;
      _swift_errorRetain(puVar4);
      pcVar5 = &DAT_100fd4370;
      FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
      _Var7.unknown = (undefined *)&local_58;
      pcVar8 = pcVar5;
      _swift_dynamicCast();
      if (((ulong)pcVar5 & 1) != 0) {
        local_f0.unknown = (undefined *)0x0;
        _Stack_e8 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x1e,_Var7);
        SVar20.bridgeObject = (void *)0x8000000100da6c70;
        SVar20.str = (char *)0xd00000000000001b;
        SVar23.bridgeObject = puVar9;
        SVar23.str = pcVar8;
        Swift::String::append(SVar20,SVar23);
        pcVar5 = PTR___type_metadata_for_Swift_String_100eac208;
        puVar9 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
        Swift::__print_unlocked
                  (local_100,&local_f0,PTR___type_metadata_for_Swift_String_100eac208,
                   PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                   PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                  );
        SVar21.bridgeObject = (void *)0xe100000000000000;
        SVar21.str = (char *)0x27;
        SVar24.bridgeObject = puVar9;
        SVar24.str = pcVar5;
        Swift::String::append(SVar21,SVar24);
        SVar22.bridgeObject = (void *)0x2;
        SVar22.str = (char *)0xb;
        Swift::_assertionFailure((StaticString)0x100d8deb0,SVar22,local_f0,_Stack_e8,0xda6c60);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cdab8);
        (*pcVar3)();
      }
      FUN_1005bee8c(&local_e0);
      _swift_bridgeObjectRelease(uVar17);
      _swift_errorRelease(local_58);
    }
  }
  return;
}



/* Address: 0x1005cdab8 | FUN_1005cdab8 */

undefined * FUN_1005cdab8(code *param_1,undefined8 param_2,UTF8View param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index position;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  long unaff_x21;
  Index before;
  ulong uVar6;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_3.unknown & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_3.unknown >> 0x3b) & 1;
    if ((param_4 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar6 = 7;
    if (uVar5 == 0) {
      uVar6 = 0xb;
    }
    before.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar6 | uVar1 << 0x10);
    do {
      if (((ulong)before.cmsgPointer.unknown & 0xc) == 4L << uVar5) {
        FUN_1000740a8(before.cmsgPointer.unknown,param_3.unknown,param_4);
        if ((ulong)before.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cdc78);
          (*pcVar2)();
        }
        if ((param_4 >> 0x3c & 1) != 0) goto LAB_1005cdb7c;
LAB_1005cdb4c:
        before.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)before.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
      }
      else {
        if ((param_4 >> 0x3c & 1) == 0) goto LAB_1005cdb4c;
LAB_1005cdb7c:
        if (uVar1 < (ulong)before.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cdc80);
          (*pcVar2)();
        }
        before = Swift::String::UTF8View::_foreignIndex(before,param_3);
      }
      position.cmsgPointer.unknown = before.cmsgPointer.unknown;
      if (((ulong)before.cmsgPointer.unknown & 0xc) == 4L << uVar5) {
        FUN_1000740a8(before.cmsgPointer.unknown,param_3.unknown,param_4);
      }
      uVar6 = (ulong)position.cmsgPointer.unknown >> 0x10;
      if (uVar1 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cdc7c);
        (*pcVar2)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
          _Var3 = UVar4.unknown[uVar6];
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          _Var3 = *(__uint8 *)((long)&local_70 + uVar6);
        }
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_3);
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,_Var3);
      uVar6 = 0;
      (*param_1)();
      if (unaff_x21 != 0) {
        return (undefined *)before.cmsgPointer.unknown;
      }
      if ((uVar6 & 1) != 0) {
        return (undefined *)before.cmsgPointer.unknown;
      }
    } while ((undefined *)0x3fff < (ulong)before.cmsgPointer.unknown);
  }
  return (undefined *)0x0;
}



/* Address: 0x1005cdc80 | FUN_1005cdc80 */

void FUN_1005cdc80(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  
  uVar3 = (uint)(param_3 >> 0x3b) & 1;
  if ((param_4 & 0x1000000000000000) == 0) {
    uVar3 = 1;
  }
  if ((param_2 & 0xc) == 4L << (ulong)uVar3) {
    FUN_1000740a8(param_2,param_3,param_4);
  }
  if ((param_1 & 0xc) == 4L << (ulong)uVar3) {
    FUN_1000740a8(param_1,param_3,param_4);
  }
  uVar1 = param_3 & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  if ((param_2 >> 0xe <= uVar1 * 4) && (param_1 >> 0xe <= param_2 >> 0xe)) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cdd50);
  (*pcVar2)();
}



/* Address: 0x1005cdd50 | FUN_1005cdd50 */

uint FUN_1005cdd50(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  uint uVar3;
  String SVar4;
  String SVar5;
  undefined1 auStack_120 [24];
  undefined8 local_108;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  _StringGuts local_d0;
  _StringGuts local_c8;
  undefined1 auStack_a0 [40];
  byte local_78;
  undefined *local_70;
  undefined *puStack_68;
  char local_48;
  
  FUN_1005bee50(param_1,auStack_a0);
  FUN_1005bee50(param_2,&local_70);
  if (local_78 < 2) {
    if (local_78 == 0) {
      FUN_1005bee50(auStack_a0,&local_d0);
      if (local_48 != '\0') goto LAB_1005cdeb0;
      if ((local_d0.unknown == local_70) && (local_c8.unknown == puStack_68)) {
        uVar3 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          (local_d0,local_c8,(_StringComparisonResult)(__int8)local_70);
        uVar3 = (uint)bVar1;
      }
      _swift_bridgeObjectRelease(local_c8.unknown);
      local_70 = puStack_68;
LAB_1005cdf58:
      _swift_bridgeObjectRelease(local_70);
    }
    else {
      FUN_1005bee50(auStack_a0,&local_d0);
      if (local_48 != '\x01') {
        FUN_100004594(&local_d0);
        goto LAB_1005cdebc;
      }
      FUN_100076508(&local_d0,auStack_f8);
      FUN_100076508(&local_70,auStack_120);
      FUN_100004640(auStack_f8,local_e0);
      SVar4 = Swift::CustomStringConvertible::get_description();
      FUN_100004640(auStack_120,local_108);
      SVar5 = Swift::CustomStringConvertible::get_description();
      if (SVar4 == SVar5) {
        uVar3 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar4.str,(_StringGuts)SVar4.bridgeObject,
                           (_StringComparisonResult)(__int8)SVar5.str);
        uVar3 = (uint)bVar1;
      }
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
      _swift_bridgeObjectRelease(SVar5.bridgeObject);
      FUN_100004594(auStack_120);
      FUN_100004594(auStack_f8);
    }
    FUN_1005bee8c(auStack_a0);
  }
  else {
    if (local_78 == 2) {
      FUN_1005bee50(auStack_a0,&local_d0);
      local_c8.unknown = local_d0.unknown;
      if (local_48 == '\x02') {
        _Var2.unknown = local_d0.unknown;
        FUN_1005cc390(local_d0.unknown,local_70);
        uVar3 = (uint)_Var2.unknown;
LAB_1005cde98:
        _swift_bridgeObjectRelease(local_d0.unknown);
        goto LAB_1005cdf58;
      }
    }
    else {
      FUN_1005bee50(auStack_a0,&local_d0);
      local_c8.unknown = local_d0.unknown;
      if (local_48 == '\x03') {
        _Var2.unknown = local_d0.unknown;
        FUN_1005cc2dc(local_d0.unknown,local_70);
        uVar3 = (uint)_Var2.unknown;
        goto LAB_1005cde98;
      }
    }
LAB_1005cdeb0:
    _swift_bridgeObjectRelease(local_c8.unknown);
LAB_1005cdebc:
    FUN_1000fb4c4(auStack_a0,&DAT_100fd44c0,&DAT_100c65130);
    uVar3 = 0;
  }
  return uVar3 & 1;
}



/* Address: 0x1005cdf80 | FUN_1005cdf80 */

String FUN_1005cdf80(UTF8View param_1,ulong param_2)

{
  String SVar1;
  code *pcVar2;
  undefined8 uVar3;
  Index IVar4;
  undefined1 *puVar5;
  code *pcVar6;
  ulong uVar7;
  uint uVar8;
  String SVar9;
  String SVar10;
  undefined1 auStack_50 [16];
  undefined1 *local_40;
  undefined1 local_31;
  
  local_31 = 0x2f;
  local_40 = &local_31;
  _swift_bridgeObjectRetain(param_2);
  pcVar2 = FUN_1005ce868;
  puVar5 = auStack_50;
  FUN_1005cdab8(FUN_1005ce868,puVar5,param_1.unknown,param_2);
  if (((uint)puVar5 & 0xff) != 1) {
    uVar3 = 0xf;
    pcVar6 = pcVar2;
    FUN_1005cdc80(0xf,pcVar2,param_1.unknown,param_2);
    IVar4.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x2f;
    FUN_1005cc5b0(0x2f,uVar3,pcVar6,param_1.unknown,param_2);
    if (((uint)uVar3 & 0xff) != 1) {
      uVar8 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
      if ((param_2 & 0x1000000000000000) == 0) {
        uVar8 = 1;
      }
      if (((ulong)IVar4.cmsgPointer.unknown & 0xc) == 4L << uVar8) {
        FUN_1000740a8();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        IVar4.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)IVar4.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        uVar7 = (ulong)param_1.unknown & 0xffffffffffff;
        if ((param_2 & 0x2000000000000000) != 0) {
          uVar7 = param_2 >> 0x38 & 0xf;
        }
        if (uVar7 <= (ulong)IVar4.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ce100);
          (*pcVar2)();
        }
        IVar4 = Swift::String::UTF8View::_foreignIndex(IVar4,param_1);
      }
      if ((ulong)IVar4.cmsgPointer.unknown >> 0xe <= (ulong)pcVar2 >> 0xe) {
        SVar10.bridgeObject = param_1.unknown;
        SVar10.str = (char *)pcVar2;
        uVar7 = param_2;
        SVar9.str = Swift::String::get_subscript((Range<Index>)IVar4.cmsgPointer.unknown,SVar10);
        SVar9.bridgeObject = pcVar2;
        SVar9 = Swift::String::__fromSubstring(SVar9);
        _swift_bridgeObjectRelease(param_2);
        _swift_bridgeObjectRelease(uVar7);
        return SVar9;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ce0fc);
      (*pcVar2)();
    }
  }
  _swift_bridgeObjectRelease(param_2);
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x612f6e;
  return SVar1;
}



/* Address: 0x1005ce100 | FUN_1005ce100 */

void FUN_1005ce100(void)

{
  long unaff_x20;
  
  FUN_1005cd04c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1005ce120 | FUN_1005ce120 */

void FUN_1005ce120(undefined8 param_1)

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
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_1005ccd7c(plVar5,param_1,uVar4,uVar6,uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1005ce1bc | FUN_1005ce1bc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005ce1f8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1005ce1bc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fd4598,&DAT_100c65138);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x1005ce220 | FUN_1005ce220 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1005ce220(void)

{
  return ZEXT816(0x100fd4450);
}



/* Address: 0x1005ce240 | thunk_FUN_1005ce244 */

void thunk_FUN_1005ce244(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64c58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64c58,&DAT_100ee6e50);
  DAT_100fd43c8 = pTVar1;
  return;
}



/* Address: 0x1005ce244 | FUN_1005ce244 */

void FUN_1005ce244(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64c58;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64c58,&DAT_100ee6e50);
  DAT_100fd43c8 = pTVar1;
  return;
}



/* Address: 0x1005ce284 | thunk_FUN_1005ce288 */

void thunk_FUN_1005ce288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd43d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd43d8;
  FUN_1000f8b08(&DAT_100fd43d8,&DAT_100c64d48);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fd43d0 = puVar2;
  return;
}



/* Address: 0x1005ce288 | FUN_1005ce288 */

void FUN_1005ce288(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd43d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd43d8;
  FUN_1000f8b08(&DAT_100fd43d8,&DAT_100c64d48);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Collection_100eac548,puVar1);
  DAT_100fd43d0 = puVar2;
  return;
}



/* Address: 0x1005ce2d8 | thunk_FUN_1005ce2dc */

void thunk_FUN_1005ce2dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64dd0,&DAT_100ee6e50);
  DAT_100fd43e0 = pTVar1;
  return;
}



/* Address: 0x1005ce2dc | FUN_1005ce2dc */

void FUN_1005ce2dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64dd0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64dd0,&DAT_100ee6e50);
  DAT_100fd43e0 = pTVar1;
  return;
}



/* Address: 0x1005ce31c | thunk_FUN_1005ce320 */

void thunk_FUN_1005ce320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f20,&DAT_100ee6ec8);
  DAT_100fd43e8 = pTVar1;
  return;
}



/* Address: 0x1005ce320 | FUN_1005ce320 */

void FUN_1005ce320(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f20;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f20,&DAT_100ee6ec8);
  DAT_100fd43e8 = pTVar1;
  return;
}



/* Address: 0x1005ce360 | thunk_FUN_1005ce364 */

void thunk_FUN_1005ce364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64e50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64e50,&DAT_100ee6ec8);
  DAT_100fd43f0 = pTVar1;
  return;
}



/* Address: 0x1005ce364 | FUN_1005ce364 */

void FUN_1005ce364(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64e50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64e50,&DAT_100ee6ec8);
  DAT_100fd43f0 = pTVar1;
  return;
}



/* Address: 0x1005ce3a4 | thunk_FUN_1005ce3a8 */

void thunk_FUN_1005ce3a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f60,&DAT_100ee6ec8);
  DAT_100fd43f8 = pTVar1;
  return;
}



/* Address: 0x1005ce3a8 | FUN_1005ce3a8 */

void FUN_1005ce3a8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd43f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f60,&DAT_100ee6ec8);
  DAT_100fd43f8 = pTVar1;
  return;
}



/* Address: 0x1005ce3e8 | thunk_FUN_1005ce3ec */

void thunk_FUN_1005ce3ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64fd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64fd8,&DAT_100ee6dc0);
  DAT_100fd4400 = pTVar1;
  return;
}



/* Address: 0x1005ce3ec | FUN_1005ce3ec */

void FUN_1005ce3ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4400 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64fd8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64fd8,&DAT_100ee6dc0);
  DAT_100fd4400 = pTVar1;
  return;
}



/* Address: 0x1005ce42c | thunk_FUN_1005ce430 */

void thunk_FUN_1005ce430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65018,&DAT_100ee6dc0);
  DAT_100fd4408 = pTVar1;
  return;
}



/* Address: 0x1005ce430 | FUN_1005ce430 */

void FUN_1005ce430(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c65018;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65018,&DAT_100ee6dc0);
  DAT_100fd4408 = pTVar1;
  return;
}



/* Address: 0x1005ce470 | FUN_1005ce470 */

undefined1  [16] FUN_1005ce470(void)

{
  return ZEXT816(0x100ee6d28);
}



/* Address: 0x1005ce480 | FUN_1005ce480 */

void FUN_1005ce480(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (3 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 4;
  }
  if ((int)uVar1 < 2) {
    if (uVar1 == 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      return;
    }
    FUN_100004594();
    return;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)param_1);
  return;
}



/* Address: 0x1005ce4b8 | FUN_1005ce4b8 */

undefined8 * FUN_1005ce4b8(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar3 = (uint)*(byte *)(param_2 + 10);
  if (3 < *(byte *)(param_2 + 10)) {
    uVar3 = *param_2 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 != 0) {
      lVar4 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar4;
      (*(code *)**(undefined8 **)(lVar4 + -8))(param_1);
      *(undefined1 *)(param_1 + 5) = 1;
      return param_1;
    }
    uVar1 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  else {
    if (uVar3 == 2) {
      *param_1 = *(undefined8 *)param_2;
      uVar2 = 2;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar2 = 3;
    }
    *(undefined1 *)(param_1 + 5) = uVar2;
  }
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005ce558 | FUN_1005ce558 */

int * FUN_1005ce558(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar4 = (uint)*(byte *)(param_1 + 10);
  if (3 < *(byte *)(param_1 + 10)) {
    uVar4 = *param_1 + 4;
  }
  if ((int)uVar4 < 2) {
    if (uVar4 != 0) {
      FUN_100004594(param_1);
      goto LAB_1005ce5b4;
    }
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  else {
    uVar1 = *(undefined8 *)param_1;
  }
  _swift_bridgeObjectRelease(uVar1);
LAB_1005ce5b4:
  uVar4 = (uint)*(byte *)(param_2 + 10);
  if (3 < *(byte *)(param_2 + 10)) {
    uVar4 = *param_2 + 4;
  }
  if ((int)uVar4 < 2) {
    if (uVar4 != 0) {
      lVar2 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 10) = 1;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined1 *)(param_1 + 10) = 0;
  }
  else {
    if (uVar4 == 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar3 = 2;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar3 = 3;
    }
    *(undefined1 *)(param_1 + 10) = uVar3;
  }
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005ce654 | FUN_1005ce654 */

void FUN_1005ce654(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_2) {
    return;
  }
  uVar3 = (uint)*(byte *)(param_1 + 10);
  if (3 < *(byte *)(param_1 + 10)) {
    uVar3 = *param_1 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 != 0) {
      FUN_100004594();
      goto LAB_1005ce6b0;
    }
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  else {
    uVar1 = *(undefined8 *)param_1;
  }
  _swift_bridgeObjectRelease(uVar1);
LAB_1005ce6b0:
  uVar3 = (uint)*(byte *)(param_2 + 10);
  if (3 < *(byte *)(param_2 + 10)) {
    uVar3 = *param_2 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
      uVar2 = 0;
    }
    else {
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar2 = 1;
    }
  }
  else if (uVar3 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar2 = 2;
  }
  else {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 10) = uVar2;
  return;
}



/* Address: 0x1005ce72c | FUN_1005ce72c */

int FUN_1005ce72c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfd;
  }
  iVar1 = 0;
  if (3 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1005ce768 | FUN_1005ce768 */

void FUN_1005ce768(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 10) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x21) = 0;
    *(undefined8 *)((long)param_1 + 0x19) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfd;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x1005ce7b4 | FUN_1005ce7b4 */

uint FUN_1005ce7b4(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (3 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 4;
  }
  return uVar1;
}



/* Address: 0x1005ce7d0 | FUN_1005ce7d0 */

void FUN_1005ce7d0(int *param_1,uint param_2)

{
  if (3 < param_2) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 4;
    param_2 = 4;
  }
  *(char *)(param_1 + 10) = (char)param_2;
  return;
}



/* Address: 0x1005ce7f8 | FUN_1005ce7f8 */

undefined1  [16] FUN_1005ce7f8(void)

{
  return ZEXT816(0x100ee6dc0);
}



/* Address: 0x1005ce808 | FUN_1005ce808 */

undefined1  [16] FUN_1005ce808(void)

{
  return ZEXT816(0x100ee6e50);
}



/* Address: 0x1005ce818 | FUN_1005ce818 */

undefined1  [16] FUN_1005ce818(void)

{
  return ZEXT816(0x100ee6ec8);
}



/* Address: 0x1005ce828 | FUN_1005ce828 */

void FUN_1005ce828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd44b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64cc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64cc0,&DAT_100ee6e50);
  DAT_100fd44b8 = pTVar1;
  return;
}



/* Address: 0x1005ce868 | FUN_1005ce868 */

bool FUN_1005ce868(char *param_1)

{
  long unaff_x20;
  
  return *param_1 == **(char **)(unaff_x20 + 0x10);
}



/* Address: 0x1005ce880 | thunk_FUN_1005cd444 */

void thunk_FUN_1005cd444(void)

{
  FUN_1005cd444();
  return;
}



/* Address: 0x1005ce884 | thunk_FUN_1005c8e4c */

void thunk_FUN_1005c8e4c(void)

{
  thunk_FUN_1005c8e4c();
  return;
}



/* Address: 0x1005ce888 | thunk_FUN_1005cc0c4 */

void thunk_FUN_1005cc0c4(void)

{
  FUN_1005cc0c4();
  return;
}



/* Address: 0x1005ce88c | thunk_FUN_1005cc770 */

void thunk_FUN_1005cc770(void)

{
  FUN_1005cc770();
  return;
}



/* Address: 0x1005ce890 | thunk_FUN_1005ce244 */

void thunk_FUN_1005ce244(void)

{
  thunk_FUN_1005ce244();
  return;
}



/* Address: 0x1005ce894 | FUN_1005ce894 */

undefined1  [16] FUN_1005ce894(void)

{
  undefined1 (*pauVar1) [16];
  undefined1 auVar2 [16];
  long lVar3;
  code *pcVar4;
  int iVar5;
  pthread_rwlock_t *ppVar6;
  
  if (DAT_100fd45a8 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar3 = DAT_100fd45b0;
  ppVar6 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar5 = _pthread_rwlock_rdlock(ppVar6);
  if (iVar5 == 0) {
    pauVar1 = (undefined1 (*) [16])(lVar3 + 0x20);
    auVar2 = *pauVar1;
    FUN_100011128(*(undefined8 *)*pauVar1,*(undefined8 *)(lVar3 + 0x28));
    iVar5 = _pthread_rwlock_unlock(ppVar6);
    if (iVar5 == 0) {
      return auVar2;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1005ce924);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005ce920);
  (*pcVar4)();
}



/* Address: 0x1005ce924 | FUN_1005ce924 */

void FUN_1005ce924(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  pthread_rwlock_t *ppVar5;
  
  lVar3 = 0;
  FUN_1000c9144(0,&DAT_100fd4648,FUN_1005cefcc,FUN_1005cefc0);
  _swift_allocObject();
  lVar4 = 0;
  FUN_1005c33b8();
  _swift_allocObject();
  ppVar5 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar4 + 0x10) = ppVar5;
  iVar2 = _pthread_rwlock_init(ppVar5,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    *(long *)(lVar3 + 0x10) = lVar4;
    *(undefined1 *)(lVar3 + 0x18) = 0;
    *(code **)(lVar3 + 0x20) = FUN_1005ce9dc;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0xd000000000000038;
    *(undefined8 *)(lVar3 + 0x38) = 0x8000000100dae5b0;
    DAT_100fd45c0 = lVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ce9dc);
  (*pcVar1)();
}



/* Address: 0x1005ce9dc | FUN_1005ce9dc */

void FUN_1005ce9dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  int iVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  undefined8 *puVar12;
  pthread_rwlock_t *ppVar13;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  param_1[3] = &DAT_100ee66a0;
  param_1[4] = &PTR_PTR_100ee65a8;
  puVar10 = (undefined8 *)&DAT_100ee71d8;
  _swift_allocObject(&DAT_100ee71d8,0x78,7);
  *param_1 = puVar10;
  puVar12 = puVar10;
  if (DAT_100fd41d8 != -1) {
    puVar12 = &DAT_100fd41d8;
    _swift_once(&DAT_100fd41d8,FUN_1005c09fc);
  }
  uVar6 = DAT_101057b80;
  puVar10[5] = &DAT_100ee6730;
  FUN_1005c0b74();
  puVar10[6] = puVar12;
  puVar11 = &DAT_100ee7200;
  _swift_allocObject(&DAT_100ee7200,0x38,7);
  puVar10[2] = puVar11;
  puVar11[0x10] = uVar6;
  uVar4 = DAT_101057b90;
  uVar2 = DAT_101057b88;
  *(undefined8 *)(puVar11 + 0x20) = DAT_101057b90;
  *(undefined8 *)(puVar11 + 0x18) = uVar2;
  uVar7 = DAT_101057ba0;
  uVar2 = DAT_101057b98;
  *(undefined8 *)(puVar11 + 0x30) = DAT_101057ba0;
  *(undefined8 *)(puVar11 + 0x28) = uVar2;
  lVar5 = DAT_100fd45a8;
  _swift_retain(uVar4);
  _swift_retain(uVar7);
  if (lVar5 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar5 = DAT_100fd45b0;
  ppVar13 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar9 = _pthread_rwlock_rdlock(ppVar13);
  if (iVar9 == 0) {
    uVar2 = *(undefined8 *)(lVar5 + 0x20);
    uVar4 = *(undefined8 *)(lVar5 + 0x28);
    FUN_100011128(uVar2,uVar4);
    iVar9 = _pthread_rwlock_unlock(ppVar13);
    if (iVar9 == 0) {
      *(undefined1 *)(puVar10 + 9) = 2;
      puVar10[0xc] = 0;
      puVar10[0xd] = 0;
      puVar10[0xe] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      puVar10[7] = uVar1;
      puVar10[8] = uVar3;
      puVar10[10] = uVar2;
      puVar10[0xb] = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x1005ceb54);
    (*pcVar8)();
  }
                    /* WARNING: Does not return */
  pcVar8 = (code *)SoftwareBreakpoint(1,0x1005ceb50);
  (*pcVar8)();
}



/* Address: 0x1005ceb54 | FUN_1005ceb54 */

void FUN_1005ceb54(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  pthread_rwlock_t *ppVar5;
  
  puVar3 = &DAT_100fd4668;
  FUN_1000f7830(&DAT_100fd4668,&DAT_100c651e0);
  _swift_allocObject();
  lVar4 = 0;
  FUN_1005c33b8();
  _swift_allocObject();
  ppVar5 = (pthread_rwlock_t *)0xc8;
  _swift_slowAlloc(200,0xffffffffffffffff);
  *(pthread_rwlock_t **)(lVar4 + 0x10) = ppVar5;
  iVar2 = _pthread_rwlock_init(ppVar5,(pthread_rwlockattr_t *)0x0);
  if (iVar2 == 0) {
    *(long *)(puVar3 + 0x10) = lVar4;
    puVar3[0x18] = 0;
    *(undefined8 *)(puVar3 + 0x20) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0;
    *(undefined8 *)(puVar3 + 0x30) = 0xd000000000000038;
    *(undefined8 *)(puVar3 + 0x38) = 0x8000000100dae5b0;
    DAT_100fd45b0 = puVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005cebf8);
  (*pcVar1)();
}



/* Address: 0x1005cebf8 | FUN_1005cebf8 */

void FUN_1005cebf8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  int iVar3;
  undefined *puVar4;
  undefined8 uVar5;
  pthread_rwlock_t *ppVar6;
  
  if (DAT_100fd45b8 != -1) {
    _swift_once(&DAT_100fd45b8,FUN_1005ce924);
  }
  lVar1 = DAT_100fd45c0;
  puVar4 = &DAT_100ee70b0;
  _swift_allocObject(&DAT_100ee70b0,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(undefined8 *)(puVar4 + 0x18) = param_2;
  ppVar6 = *(pthread_rwlock_t **)(*(long *)(lVar1 + 0x10) + 0x10);
  _swift_retain(param_2);
  iVar3 = _pthread_rwlock_wrlock(ppVar6);
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cecd4);
    (*pcVar2)();
  }
  if ((*(byte *)(lVar1 + 0x18) & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cecd8);
    (*pcVar2)();
  }
  uVar5 = *(undefined8 *)(lVar1 + 0x28);
  *(code **)(lVar1 + 0x20) = FUN_1005ced00;
  *(undefined **)(lVar1 + 0x28) = puVar4;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  _swift_retain(puVar4);
  _swift_release(uVar5);
  iVar3 = _pthread_rwlock_unlock(ppVar6);
  _swift_release(puVar4);
  if (iVar3 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005cecdc);
  (*pcVar2)();
}



/* Address: 0x1005cecdc | FUN_1005cecdc */

void FUN_1005cecdc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005ced00 | FUN_1005ced00 */

void FUN_1005ced00(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1]);
  return;
}



/* Address: 0x1005ced28 | FUN_1005ced28 */

void FUN_1005ced28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined8 uVar6;
  pthread_rwlock_t *ppVar7;
  
  if (DAT_100fd45a8 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar2 = DAT_100fd45b0;
  ppVar7 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar4 = _pthread_rwlock_wrlock(ppVar7);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cee84);
    (*pcVar3)();
  }
  if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cee88);
    (*pcVar3)();
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x20);
  uVar1 = *(undefined8 *)(lVar2 + 0x28);
  *(undefined8 *)(lVar2 + 0x20) = param_3;
  *(undefined8 *)(lVar2 + 0x28) = param_4;
  FUN_100011128(param_3,param_4);
  *(undefined1 *)(lVar2 + 0x18) = 1;
  FUN_100004550(uVar6,uVar1);
  iVar4 = _pthread_rwlock_unlock(ppVar7);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005cee8c);
    (*pcVar3)();
  }
  if (DAT_100fd45b8 != -1) {
    _swift_once(&DAT_100fd45b8,FUN_1005ce924);
  }
  lVar2 = DAT_100fd45c0;
  puVar5 = &DAT_100ee70d8;
  _swift_allocObject(&DAT_100ee70d8,0x20,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined8 *)(puVar5 + 0x18) = param_2;
  ppVar7 = *(pthread_rwlock_t **)(*(long *)(lVar2 + 0x10) + 0x10);
  _swift_retain(param_2);
  iVar4 = _pthread_rwlock_wrlock(ppVar7);
  if (iVar4 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ceea8);
    (*pcVar3)();
  }
  if ((*(byte *)(lVar2 + 0x18) & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ceeac);
    (*pcVar3)();
  }
  uVar6 = *(undefined8 *)(lVar2 + 0x28);
  *(code **)(lVar2 + 0x20) = FUN_1005ceeb0;
  *(undefined **)(lVar2 + 0x28) = puVar5;
  *(undefined1 *)(lVar2 + 0x18) = 1;
  _swift_retain(puVar5);
  _swift_release(uVar6);
  iVar4 = _pthread_rwlock_unlock(ppVar7);
  _swift_release(puVar5);
  if (iVar4 == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ceeb0);
  (*pcVar3)();
}



/* Address: 0x1005ceeb0 | FUN_1005ceeb0 */

void FUN_1005ceeb0(undefined8 *param_1,undefined8 *param_2)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Address: 0x1005ceee0 | FUN_1005ceee0 */

undefined1  [16] FUN_1005ceee0(void)

{
  return ZEXT816(0x100ee7100);
}



/* Address: 0x1005ceef0 | FUN_1005ceef0 */

void FUN_1005ceef0(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_30;
  long local_28;
  
  local_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initClassMetadata2(param_1,0,2,&local_30,param_1 + 0x58);
  }
  return;
}


