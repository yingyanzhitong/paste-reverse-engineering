/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100417db4 | FUN_100417db4 */

void FUN_100417db4(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined8 *puVar6;
  Date DVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  long local_38;
  
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_100417ee0;
  _swift_bridgeObjectRetain();
  lVar2 = 0x74706965636572;
  uVar8 = 0;
  FUN_100071370();
  if ((uVar8 & 1) != 0) {
    uVar9 = *(undefined8 *)(*(long *)(param_2 + 0x38) + lVar2 * 8);
    _swift_unknownObjectRetain(uVar9);
    _swift_bridgeObjectRelease(param_2);
    puVar3 = &DAT_100fc58e8;
    local_48 = uVar9;
    FUN_1000f7830(&DAT_100fc58e8,&DAT_100c49178);
    puVar1 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
    plVar4 = &local_38;
    _swift_dynamicCast(plVar4,&local_48,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,puVar3
                       ,6);
    lVar2 = local_38;
    if (((ulong)plVar4 & 1) == 0) goto LAB_100417ee0;
    param_2 = local_38;
    if (*(long *)(local_38 + 0x10) != 0) {
      _swift_bridgeObjectRetain(local_38);
      lVar5 = 0x5f74736575716572;
      uVar8 = 0;
      FUN_100071370();
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar2,2);
      }
      else {
        lVar5 = *(long *)(*(long *)(lVar2 + 0x38) + lVar5 * 8);
        _swift_unknownObjectRetain(lVar5);
        _swift_bridgeObjectRelease_n(lVar2,2);
        puVar6 = &local_48;
        local_38 = lVar5;
        _swift_dynamicCast(puVar6,&local_38,puVar1 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (((ulong)puVar6 & 1) != 0) {
          FUN_100415fe4(param_1,local_48,uStack_40);
          return;
        }
      }
      goto LAB_100417ee0;
    }
  }
  _swift_bridgeObjectRelease(param_2);
LAB_100417ee0:
  DVar7 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar7.unknown + -8) + 0x38))(param_1,1,1,DVar7.unknown);
  return;
}



/* Address: 0x100417f28 | FUN_100417f28 */

void FUN_100417f28(undefined8 param_1)

{
  Hasher HVar1;
  __int64 _Var2;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar1.unknown = auStack_78;
  FUN_10041f94c(HVar1.unknown,param_1);
  _Var2 = Swift::Hasher::_finalize(HVar1);
  FUN_100417f80(param_1,_Var2);
  return;
}



/* Address: 0x100417f80 | FUN_100417f80 */

undefined1  [16] FUN_100417f80(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  long unaff_x20;
  uint uVar3;
  ulong uVar4;
  undefined1 auVar5 [16];
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar3 = 0;
  }
  else {
    do {
      uVar4 = *(ulong *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      uVar1 = uVar4;
      _swift_bridgeObjectRetain();
      FUN_10037b278();
      uVar3 = (uint)uVar1;
      _swift_bridgeObjectRelease(uVar4);
      if ((uVar1 & 1) != 0) break;
      param_2 = param_2 + 1 & ~uVar2;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar5._8_4_ = uVar3 & 1;
  auVar5._0_8_ = param_2;
  auVar5._12_4_ = 0;
  return auVar5;
}



/* Address: 0x10041802c | FUN_10041802c */

/* WARNING: Removing unreachable block (ram,0x000100418120) */

undefined1  [16] FUN_10041802c(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_100418230();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x10041812c | FUN_10041812c */

undefined8 FUN_10041812c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10041817c | FUN_10041817c */

undefined8 FUN_10041817c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100424764();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004181c0 | FUN_1004181c0 */

undefined8 FUN_1004181c0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100424764();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1004181fc | FUN_1004181fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004181fc(void)

{
  return ZEXT816(0x100fc5a78);
}



/* Address: 0x10041821c | FUN_10041821c */

void FUN_10041821c(void)

{
  FUN_10016e660();
  return;
}



/* Address: 0x100418230 | FUN_100418230 */

undefined1  [16]
FUN_100418230(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_100418280();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100418280 | FUN_100418280 */

String FUN_100418280(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_1004183c4(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100418380);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_1004182b8;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1004182b8:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1004183c4 | FUN_1004183c4 */

undefined * FUN_1004183c4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fc5b50;
    FUN_1000f7830(&DAT_100fc5b50,&DAT_100c492e0);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x100418434 | FUN_100418434 */

void FUN_100418434(ulong *param_1)

{
  ContiguousArray CVar1;
  __int64 _Var2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong minimumCapacity;
  ulong uVar7;
  undefined *local_78;
  ulong uStack_70;
  undefined1 auStack_68 [8];
  long local_60;
  ulong uStack_58;
  
  CVar1.unknown = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  lVar5 = *(long *)(CVar1.unknown + -8);
  uVar4 = *param_1;
  uVar6 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar6 & 1) == 0) {
    FUN_100419728();
  }
  uVar6 = *(ulong *)(uVar4 + 0x10);
  uVar7 = (ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  local_60 = uVar4 + uVar7;
  uStack_58 = uVar6;
  _Var2 = Swift::_minimumMergeRunLength(uVar6);
  if (_Var2 < (long)uVar6) {
    minimumCapacity = uVar6 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar6) {
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar1);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_78 = _Var3.unknown + uVar7;
    uStack_70 = minimumCapacity;
    FUN_10041855c(&local_78,auStack_68,&local_60,_Var2);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar6 != 0) {
    FUN_100418bcc(0,uVar6,1,&local_60);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x10041855c | FUN_10041855c */

void FUN_10041855c(long *param_1,undefined8 param_2,ulong *param_3,long param_4)

{
  Date DVar1;
  code *pcVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Date DVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x21;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  Date DVar19;
  long local_e0;
  ulong *local_d8;
  long *local_d0;
  long local_c8;
  long local_c0;
  ulong local_b8;
  long local_b0;
  long local_a8;
  ulong uStack_a0;
  long local_98;
  long lStack_90;
  ulong local_88;
  ulong local_80;
  long local_78;
  undefined *local_70;
  Date local_68;
  undefined *local_58;
  
  puVar6 = &DAT_100fc5b28;
  local_d0 = param_1;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  local_c8 = *(long *)(puVar6 + -8);
  uVar8 = *(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_78 = (long)&local_e0 - uVar8;
  local_b0 = local_78 - uVar8;
  local_68.unknown = (undefined *)(local_b0 - uVar8);
  DVar19.unknown = local_68.unknown + -uVar8;
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar8 = param_3[1];
  local_70 = puVar6;
  if (0 < (long)uVar8) {
    uVar13 = 0;
    local_c0 = unaff_x21;
    local_e0 = param_4;
    local_d8 = param_3;
    do {
      uVar12 = uVar13 + 1;
      local_b8 = uVar13;
      if ((long)uVar12 < (long)uVar8) {
        uVar9 = *param_3;
        uVar18 = *(ulong *)(local_c8 + 0x48);
        lVar11 = uVar9 + uVar18 * uVar12;
        DVar7.unknown = &DAT_100fc5b28;
        FUN_1000f8cac(lVar11,DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        DVar1.unknown = local_68.unknown;
        FUN_1000f8cac(uVar9 + uVar18 * uVar13,local_68.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        bVar3 = Foundation::Date::>_infix(DVar19,DVar1,DVar7);
        local_88 = CONCAT44(local_88._4_4_,(int)CONCAT71(extraout_var,bVar3));
        FUN_1000fb4c4(DVar1.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        FUN_1000fb4c4(DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        lVar10 = uVar9 + uVar18 * (uVar13 + 2);
        uVar13 = uVar13 + 2;
        local_80 = uVar18;
        do {
          uVar12 = uVar8;
          if (uVar8 == uVar13) break;
          DVar7.unknown = &DAT_100fc5b28;
          FUN_1000f8cac(lVar10,DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          DVar1.unknown = local_68.unknown;
          FUN_1000f8cac(lVar11,local_68.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          bVar3 = Foundation::Date::>_infix(DVar19,DVar1,DVar7);
          FUN_1000fb4c4(DVar1.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          FUN_1000fb4c4(DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          lVar10 = lVar10 + local_80;
          lVar11 = lVar11 + local_80;
          uVar12 = uVar13;
          uVar13 = uVar13 + 1;
        } while (((uint)local_88 & 1) == (uint)bVar3);
        param_3 = local_d8;
        if ((local_88 & 1) != 0) {
          if ((long)uVar12 < (long)local_b8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ba0);
            (*pcVar2)();
          }
          if ((long)local_b8 < (long)uVar12) {
            lVar11 = 0;
            uVar13 = *local_d8;
            lVar16 = local_80 * (uVar12 - 1);
            lVar14 = uVar12 * local_80;
            lVar10 = local_b8 * local_80;
            uVar8 = local_b8;
            local_88 = uVar13;
            do {
              if (uVar8 != (uVar12 + lVar11) - 1) {
                if (uVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100418bc0);
                  (*pcVar2)();
                }
                uVar13 = uVar13 + lVar10;
                FUN_10011532c(uVar13,local_b0,&DAT_100fc5b28,&DAT_100c496b0);
                if ((lVar10 < lVar16) || (local_88 + lVar14 <= uVar13)) {
                  _swift_arrayInitWithTakeFrontToBack(uVar13,local_88 + lVar16,1,local_70);
                }
                else if (local_80 != 0) {
                  _swift_arrayInitWithTakeBackToFront(uVar13,local_88 + lVar16,1,local_70);
                }
                FUN_10011532c(local_b0,local_88 + lVar16,&DAT_100fc5b28,&DAT_100c496b0);
                uVar13 = local_88;
              }
              uVar8 = uVar8 + 1;
              lVar11 = lVar11 + -1;
              lVar16 = lVar16 - local_80;
              lVar14 = lVar14 - local_80;
              lVar10 = lVar10 + local_80;
              param_3 = local_d8;
            } while ((long)uVar8 < (long)(uVar12 + lVar11));
          }
        }
      }
      uVar8 = param_3[1];
      uVar13 = uVar12;
      lVar10 = local_c0;
      if ((long)uVar12 < (long)uVar8) {
        if (SBORROW8(uVar12,local_b8)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100418b9c);
          (*pcVar2)();
        }
        if ((long)(uVar12 - local_b8) < local_e0) {
          if (SCARRY8(local_b8,local_e0)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ba4);
            (*pcVar2)();
          }
          uVar9 = local_b8 + local_e0;
          if ((long)uVar8 <= (long)(local_b8 + local_e0)) {
            uVar9 = uVar8;
          }
          if ((long)uVar9 < (long)local_b8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ba8);
            (*pcVar2)();
          }
          if (uVar12 != uVar9) {
            uVar18 = *param_3;
            local_a8 = *(long *)(local_c8 + 0x48);
            uVar8 = uVar18 + local_a8 * (uVar12 - 1);
            lVar17 = -local_a8;
            lVar11 = local_b8 - uVar12;
            lVar14 = uVar18 + uVar12 * local_a8;
            uStack_a0 = uVar9;
            lVar16 = lVar14;
            lVar15 = lVar11;
            uVar9 = uVar8;
LAB_1004188f8:
            do {
              local_80 = uVar12;
              local_88 = uVar9;
              lStack_90 = lVar15;
              local_98 = lVar16;
              FUN_1000f8cac(lVar14,DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
              DVar1.unknown = local_68.unknown;
              DVar7.unknown = &DAT_100fc5b28;
              FUN_1000f8cac(uVar8,local_68.unknown,&DAT_100fc5b28,&DAT_100c496b0);
              bVar3 = Foundation::Date::>_infix(DVar19,DVar1,DVar7);
              FUN_1000fb4c4(DVar1.unknown,&DAT_100fc5b28,&DAT_100c496b0);
              FUN_1000fb4c4(DVar19.unknown,&DAT_100fc5b28,&DAT_100c496b0);
              lVar10 = local_78;
              if (bVar3) {
                if (uVar18 == 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100418bac);
                  (*pcVar2)();
                }
                FUN_10011532c(lVar14,local_78,&DAT_100fc5b28,&DAT_100c496b0);
                _swift_arrayInitWithTakeFrontToBack(lVar14,uVar8,1,local_70);
                FUN_10011532c(lVar10,uVar8,&DAT_100fc5b28,&DAT_100c496b0);
                uVar8 = uVar8 + lVar17;
                lVar14 = lVar14 + lVar17;
                bVar3 = lVar11 != -1;
                lVar11 = lVar11 + 1;
                lVar16 = local_98;
                lVar15 = lStack_90;
                uVar9 = local_88;
                uVar12 = local_80;
                if (bVar3) goto LAB_1004188f8;
              }
              uVar8 = local_88 + local_a8;
              lVar11 = lStack_90 + -1;
              lVar14 = local_98 + local_a8;
              uVar13 = uStack_a0;
              param_3 = local_d8;
              lVar10 = local_c0;
              lVar16 = lVar14;
              lVar15 = lVar11;
              uVar9 = uVar8;
              uVar12 = local_80 + 1;
            } while (local_80 + 1 != uStack_a0);
          }
        }
      }
      puVar6 = local_58;
      if ((long)uVar13 < (long)local_b8) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100418b90);
        (*pcVar2)();
      }
      puVar4 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_10041902c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar8 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar8) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_10041902c(puVar6,uVar8 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar8 + 1;
      *(ulong *)(puVar6 + uVar8 * 0x10 + 0x20) = local_b8;
      *(ulong *)(puVar6 + uVar8 * 0x10 + 0x28) = uVar13;
      local_58 = puVar6;
      if (*local_d0 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100418bc4);
        (*pcVar2)();
      }
      FUN_100418da0(&local_58,*local_d0,param_3);
      puVar6 = local_58;
      if (lVar10 != 0) goto LAB_100418b60;
      uVar8 = param_3[1];
      local_c0 = lVar10;
    } while ((long)uVar13 < (long)uVar8);
    unaff_x21 = 0;
  }
  puVar6 = local_58;
  lVar10 = *local_d0;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100418bcc);
    (*pcVar2)();
  }
  puVar4 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar4 & 1) == 0) {
    FUN_100419714();
  }
  uVar8 = *(ulong *)(puVar6 + 0x10);
  while (local_58 = puVar6, 1 < uVar8) {
    uVar13 = *param_3;
    if (uVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100418bc8);
      (*pcVar2)();
    }
    lVar16 = uVar8 - 1;
    lVar15 = *(long *)(puVar6 + uVar8 * 0x10);
    lVar11 = *(long *)(puVar6 + lVar16 * 0x10 + 0x28);
    lVar14 = *(long *)(local_c8 + 0x48);
    FUN_10041912c(uVar13 + lVar14 * lVar15,
                  uVar13 + lVar14 * *(long *)(puVar6 + lVar16 * 0x10 + 0x20),
                  uVar13 + lVar14 * lVar11,lVar10);
    if (unaff_x21 != 0) break;
    if (lVar11 < lVar15) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100418b94);
      (*pcVar2)();
    }
    puVar4 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar4 & 1) == 0) {
      FUN_100419714();
    }
    if (*(ulong *)(puVar6 + 0x10) <= uVar8 - 2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100418b98);
      (*pcVar2)();
    }
    *(long *)(puVar6 + uVar8 * 0x10) = lVar15;
    *(long *)((long)(puVar6 + uVar8 * 0x10) + 8) = lVar11;
    local_58 = puVar6;
    FUN_1004195d0(lVar16);
    puVar6 = local_58;
    uVar8 = *(ulong *)(local_58 + 0x10);
  }
LAB_100418b60:
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x100418bcc | FUN_100418bcc */

void FUN_100418bcc(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  Date DVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  Date DVar14;
  Date DVar15;
  undefined1 auStack_b0 [8];
  
  puVar3 = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_b0 + -uVar5;
  DVar14.unknown = puVar7 + -uVar5;
  DVar15.unknown = DVar14.unknown + -uVar5;
  if (param_3 != param_2) {
    lVar6 = *param_4;
    lVar8 = *(long *)(*(long *)(puVar3 + -8) + 0x48);
    lVar11 = lVar6 + lVar8 * (param_3 + -1);
    param_1 = param_1 - param_3;
    lVar9 = lVar6 + lVar8 * param_3;
    lVar13 = param_1;
    lVar12 = lVar11;
    lVar10 = lVar9;
LAB_100418ce4:
    do {
      FUN_1000f8cac(lVar9,DVar15.unknown,&DAT_100fc5b28,&DAT_100c496b0);
      DVar4.unknown = &DAT_100fc5b28;
      FUN_1000f8cac(lVar11,DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
      bVar2 = Foundation::Date::>_infix(DVar15,DVar14,DVar4);
      FUN_1000fb4c4(DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
      FUN_1000fb4c4(DVar15.unknown,&DAT_100fc5b28,&DAT_100c496b0);
      if (bVar2) {
        if (lVar6 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100418da0);
          (*pcVar1)();
        }
        FUN_10011532c(lVar9,puVar7,&DAT_100fc5b28,&DAT_100c496b0);
        _swift_arrayInitWithTakeFrontToBack(lVar9,lVar11,1,puVar3);
        FUN_10011532c(puVar7,lVar11,&DAT_100fc5b28,&DAT_100c496b0);
        lVar11 = lVar11 + -lVar8;
        lVar9 = lVar9 + -lVar8;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        if (bVar2) goto LAB_100418ce4;
      }
      param_3 = param_3 + 1;
      lVar11 = lVar12 + lVar8;
      param_1 = lVar13 + -1;
      lVar9 = lVar10 + lVar8;
      lVar13 = param_1;
      lVar12 = lVar11;
      lVar10 = lVar9;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x100418da0 | FUN_100418da0 */

undefined8 FUN_100418da0(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x21;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  
  uVar9 = *param_1;
  if (1 < *(ulong *)(uVar9 + 0x10)) {
    uVar5 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100419714();
    }
    *param_1 = uVar9;
    uVar5 = *(ulong *)(uVar9 + 0x10);
    do {
      lVar11 = uVar5 - 1;
      if (uVar5 < 4) {
        if (uVar5 == 3) {
          bVar3 = SBORROW8(*(long *)(uVar9 + 0x28),*(long *)(uVar9 + 0x20));
          lVar7 = *(long *)(uVar9 + 0x28) - *(long *)(uVar9 + 0x20);
          goto LAB_100418e74;
        }
        if (uVar5 < 2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100419014);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar7 = *plVar1;
        lVar8 = plVar1[1];
        bVar3 = SBORROW8(lVar8,lVar7);
        lVar8 = lVar8 - lVar7;
LAB_100418ed8:
        if (bVar3) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100419004);
          (*pcVar2)();
        }
        lVar7 = uVar9 + lVar11 * 0x10;
        lVar6 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10041900c);
          (*pcVar2)();
        }
        lVar12 = lVar11;
        if (lVar7 - lVar6 < lVar8) {
          return 1;
        }
      }
      else {
        lVar8 = uVar9 + 0x20 + uVar5 * 0x10;
        if (SBORROW8(*(long *)(lVar8 + -0x38),*(long *)(lVar8 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100418fec);
          (*pcVar2)();
        }
        lVar7 = *(long *)(lVar8 + -0x28) - *(long *)(lVar8 + -0x30);
        if (SBORROW8(*(long *)(lVar8 + -0x28),*(long *)(lVar8 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ff0);
          (*pcVar2)();
        }
        plVar1 = (long *)(uVar9 + uVar5 * 0x10);
        lVar6 = *plVar1;
        lVar12 = plVar1[1];
        lVar10 = lVar12 - lVar6;
        if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ff8);
          (*pcVar2)();
        }
        if (SCARRY8(lVar7,lVar10)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100419000);
          (*pcVar2)();
        }
        bVar3 = false;
        if (lVar7 + lVar10 < *(long *)(lVar8 + -0x38) - *(long *)(lVar8 + -0x40)) {
LAB_100418e74:
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ff4);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + uVar5 * 0x10);
          lVar6 = *plVar1;
          lVar12 = plVar1[1];
          lVar8 = lVar12 - lVar6;
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100418ffc);
            (*pcVar2)();
          }
          plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
          lVar6 = *plVar1;
          lVar12 = plVar1[1];
          lVar10 = lVar12 - lVar6;
          if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100419008);
            (*pcVar2)();
          }
          if (SCARRY8(lVar8,lVar10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100419010);
            (*pcVar2)();
          }
          bVar3 = false;
          if (lVar8 + lVar10 < lVar7) goto LAB_100418ed8;
          lVar12 = uVar5 - 2;
          if (lVar10 <= lVar7) {
            lVar12 = lVar11;
          }
        }
        else {
          plVar1 = (long *)(uVar9 + 0x20 + lVar11 * 0x10);
          lVar8 = *plVar1;
          lVar6 = plVar1[1];
          if (SBORROW8(lVar6,lVar8)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100419018);
            (*pcVar2)();
          }
          lVar12 = uVar5 - 2;
          if (lVar6 - lVar8 <= lVar7) {
            lVar12 = lVar11;
          }
        }
      }
      uVar13 = lVar12 - 1;
      if (uVar5 <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100418fe0);
        (*pcVar2)();
      }
      lVar11 = *param_3;
      if (lVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041902c);
        (*pcVar2)();
      }
      lVar10 = *(long *)(uVar9 + 0x20 + uVar13 * 0x10);
      plVar1 = (long *)(uVar9 + 0x20 + lVar12 * 0x10);
      lVar7 = *plVar1;
      lVar8 = plVar1[1];
      puVar4 = &DAT_100fc5b28;
      FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
      lVar6 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
      FUN_10041912c(lVar11 + lVar6 * lVar10,lVar11 + lVar6 * lVar7,lVar11 + lVar6 * lVar8,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar8 < lVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100418fe4);
        (*pcVar2)();
      }
      uVar5 = uVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar5 & 1) == 0) {
        FUN_100419714();
      }
      if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100418fe8);
        (*pcVar2)();
      }
      lVar11 = uVar9 + uVar13 * 0x10;
      *(long *)(lVar11 + 0x20) = lVar10;
      *(long *)(lVar11 + 0x28) = lVar8;
      *param_1 = uVar9;
      FUN_1004195d0(lVar12);
      uVar9 = *param_1;
      uVar5 = *(ulong *)(uVar9 + 0x10);
    } while (1 < uVar5);
  }
  return 1;
}



/* Address: 0x10041902c | FUN_10041902c */

undefined * FUN_10041902c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041912c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fc5b38;
    FUN_1000f7830(&DAT_100fc5b38,&DAT_100c492d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x10041912c | FUN_10041912c */

undefined8 FUN_10041912c(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  Date DVar5;
  long lVar6;
  ulong uVar7;
  Date DVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  Date DVar14;
  ulong local_b0;
  ulong local_a8;
  ulong local_70;
  ulong local_68;
  ulong local_58;
  
  puVar4 = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  lVar6 = *(long *)(*(long *)(puVar4 + -8) + 0x48);
  uVar7 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  DVar8.unknown = (undefined *)((long)&local_b0 - uVar7);
  DVar14.unknown = DVar8.unknown + -uVar7;
  if (lVar6 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004195c8);
    (*pcVar2)();
  }
  if ((param_2 - param_1 == -0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004195cc);
    (*pcVar2)();
  }
  if ((param_3 - param_2 == -0x8000000000000000) && (lVar6 == -1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004195d0);
    (*pcVar2)();
  }
  lVar11 = 0;
  if (lVar6 != 0) {
    lVar11 = (long)(param_2 - param_1) / lVar6;
  }
  lVar9 = 0;
  if (lVar6 != 0) {
    lVar9 = (long)(param_3 - param_2) / lVar6;
  }
  local_58 = param_1;
  local_68 = param_4;
  if (lVar11 < lVar9) {
    lVar9 = lVar11 * lVar6;
    if ((param_4 < param_1) || (param_1 + lVar9 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_1,lVar11,puVar4);
    }
    else if (param_4 != param_1) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_1,lVar11,puVar4);
    }
    uVar7 = param_4 + lVar9;
    local_70 = uVar7;
    if (0 < lVar9 && param_2 < param_3) {
      do {
        FUN_1000f8cac(param_2,DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        DVar5.unknown = &DAT_100fc5b28;
        FUN_1000f8cac(param_4,DVar8.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        bVar3 = Foundation::Date::>_infix(DVar14,DVar8,DVar5);
        FUN_1000fb4c4(DVar8.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        FUN_1000fb4c4(DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
        if (bVar3) {
          uVar13 = param_2 + lVar6;
          uVar12 = param_4;
          if ((param_1 < param_2) || (uVar13 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_2,1,puVar4);
            uVar1 = local_68;
          }
          else {
            uVar1 = local_68;
            if (param_1 != param_2) {
              _swift_arrayInitWithTakeBackToFront(param_1,param_2,1,puVar4);
              uVar1 = local_68;
            }
          }
        }
        else {
          uVar12 = param_4 + lVar6;
          uVar13 = param_2;
          uVar1 = uVar12;
          if ((param_1 < param_4) || (uVar12 <= param_1)) {
            _swift_arrayInitWithTakeFrontToBack(param_1,param_4,1,puVar4);
          }
          else if (param_1 != param_4) {
            _swift_arrayInitWithTakeBackToFront(param_1,param_4,1,puVar4);
          }
        }
        local_68 = uVar1;
        param_1 = param_1 + lVar6;
        local_58 = param_1;
      } while ((uVar12 < uVar7) &&
              (param_4 = uVar12, param_2 = uVar13, local_58 = param_1, uVar13 < param_3));
    }
  }
  else {
    lVar11 = lVar9 * lVar6;
    if ((param_4 < param_2) || (param_2 + lVar11 <= param_4)) {
      _swift_arrayInitWithTakeFrontToBack(param_4,param_2,lVar9,puVar4);
    }
    else if (param_4 != param_2) {
      _swift_arrayInitWithTakeBackToFront(param_4,param_2,lVar9,puVar4);
    }
    uVar7 = param_4 + lVar11;
    local_70 = uVar7;
    local_58 = param_2;
    if (0 < lVar11 && param_1 < param_2) {
      lVar6 = -lVar6;
      local_58 = param_2;
      local_b0 = param_1;
      do {
        uVar13 = local_58 + lVar6;
        uVar12 = param_3;
        local_a8 = local_58;
        while( true ) {
          param_3 = uVar12 + lVar6;
          uVar1 = uVar7 + lVar6;
          DVar5.unknown = &DAT_100fc5b28;
          FUN_1000f8cac(uVar1,DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          FUN_1000f8cac(uVar13,DVar8.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          bVar3 = Foundation::Date::>_infix(DVar14,DVar8,DVar5);
          FUN_1000fb4c4(DVar8.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          FUN_1000fb4c4(DVar14.unknown,&DAT_100fc5b28,&DAT_100c496b0);
          uVar10 = local_b0;
          if (bVar3) break;
          local_70 = uVar1;
          if ((uVar12 < uVar7) || (uVar7 <= param_3)) {
            _swift_arrayInitWithTakeFrontToBack(param_3,uVar1,1,puVar4);
          }
          else if (uVar12 != uVar7) {
            _swift_arrayInitWithTakeBackToFront(param_3,uVar1,1,puVar4);
          }
          uVar7 = uVar1;
          uVar12 = param_3;
          if (uVar1 <= param_4) goto LAB_100419400;
        }
        if ((uVar12 < local_a8) || (local_a8 <= param_3)) {
          _swift_arrayInitWithTakeFrontToBack(param_3,uVar13,1,puVar4);
          uVar10 = local_b0;
        }
        else if (uVar12 != local_a8) {
          _swift_arrayInitWithTakeBackToFront(param_3,uVar13,1,puVar4);
        }
        local_58 = uVar13;
      } while ((param_4 < uVar7) && (uVar10 < uVar13));
    }
  }
LAB_100419400:
  FUN_100419658(&local_58,&local_68,&local_70);
  return 1;
}



/* Address: 0x1004195d0 | FUN_1004195d0 */

undefined1  [16] FUN_1004195d0(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100419714();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100419658);
  (*pcVar3)();
}



/* Address: 0x100419658 | FUN_100419658 */

void FUN_100419658(ulong *param_1,ulong *param_2,long *param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *param_1;
  uVar5 = *param_2;
  lVar7 = *param_3;
  puVar3 = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  lVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x48);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100419710);
    (*pcVar2)();
  }
  if (lVar7 - uVar5 != -0x8000000000000000 || lVar4 != -1) {
    lVar1 = 0;
    if (lVar4 != 0) {
      lVar1 = (long)(lVar7 - uVar5) / lVar4;
    }
    if ((uVar5 <= uVar6) && (uVar6 < uVar5 + lVar1 * lVar4)) {
      if (uVar6 != uVar5) {
        _swift_arrayInitWithTakeBackToFront(uVar6,uVar5);
        return;
      }
      return;
    }
    _swift_arrayInitWithTakeFrontToBack(uVar6,uVar5,lVar1,puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100419714);
  (*pcVar2)();
}



/* Address: 0x100419714 | FUN_100419714 */

void FUN_100419714(long param_1)

{
  FUN_10041902c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100419728 | FUN_100419728 */

void FUN_100419728(long param_1)

{
  FUN_10041dfa0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10041973c | FUN_10041973c */

long FUN_10041973c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    return 0;
  }
  uVar5 = 0;
  iVar2 = (int)&local_40;
  _swift_bridgeObjectRetain();
  lVar3 = 0x74706965636572;
  uVar7 = 0;
  FUN_100071370();
  if ((uVar7 & 1) != 0) {
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x38) + lVar3 * 8);
    _swift_unknownObjectRetain(uVar8);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = &DAT_100fc58e8;
    local_38 = uVar8;
    FUN_1000f7830(&DAT_100fc58e8,&DAT_100c49178);
    puVar1 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
    _swift_dynamicCast(&local_40,&local_38,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       puVar4,6);
    lVar3 = local_40;
    if ((uVar5 & 1) == 0) {
      return 0;
    }
    param_1 = local_40;
    if (*(long *)(local_40 + 0x10) != 0) {
      _swift_bridgeObjectRetain(local_40);
      lVar6 = 0x7070615f6e69;
      uVar7 = 0;
      FUN_100071370();
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease_n(lVar3,2);
        return 0;
      }
      uVar8 = *(undefined8 *)(*(long *)(lVar3 + 0x38) + lVar6 * 8);
      _swift_unknownObjectRetain(uVar8);
      _swift_bridgeObjectRelease_n(lVar3,2);
      puVar4 = &DAT_100fc5b20;
      local_38 = uVar8;
      FUN_1000f7830(&DAT_100fc5b20,&DAT_100c492c0);
      _swift_dynamicCast(&local_40,&local_38,puVar1 + 8,puVar4,6);
      if (iVar2 == 0) {
        return 0;
      }
      return local_40;
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return 0;
}



/* Address: 0x100419890 | FUN_100419890 */

undefined * FUN_100419890(long param_1,long param_2)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  ulong uVar3;
  _StringGuts _Var4;
  char *pcVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  char **ppcVar10;
  Hasher into;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined8 uVar15;
  long lVar16;
  undefined *puVar17;
  ulong uVar18;
  ulong uVar19;
  String SVar20;
  char *local_b8;
  undefined *local_b0;
  undefined8 local_70;
  undefined *local_68;
  
  puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((param_1 != 0) && (uVar18 = *(ulong *)(param_1 + 0x10), uVar18 != 0)) {
    uVar19 = 0;
    puVar11 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
LAB_1004198f8:
    puVar17 = PTR___type_metadata_for_Swift_String_100eac208;
    uVar3 = uVar19;
    if (uVar19 <= uVar18) {
      uVar3 = uVar18;
    }
    do {
      lVar9 = 0x5f746375646f7270;
      if (uVar19 == uVar3) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100419b60);
        (*pcVar7)();
      }
      lVar16 = *(long *)(param_1 + 0x20 + uVar19 * 8);
      uVar19 = uVar19 + 1;
      if (*(long *)(lVar16 + 0x10) != 0) {
        _swift_bridgeObjectRetain_n(lVar16,2);
        uVar12 = 0xea00000000006469;
        FUN_100071370();
        if ((uVar12 & 1) == 0) {
          _swift_bridgeObjectRelease_n(lVar16,2);
        }
        else {
          uVar15 = *(undefined8 *)(*(long *)(lVar16 + 0x38) + lVar9 * 8);
          _swift_unknownObjectRetain(uVar15);
          _swift_bridgeObjectRelease(lVar16);
          ppcVar10 = &local_b8;
          local_70 = uVar15;
          _swift_dynamicCast(ppcVar10,&local_70,puVar11 + 8,puVar17,6);
          puVar6 = local_b0;
          pcVar5 = local_b8;
          if (((ulong)ppcVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar16);
          }
          else if (*(long *)(param_2 + 0x10) == 0) {
            _swift_bridgeObjectRelease(local_b0);
            _swift_bridgeObjectRelease(lVar16);
            puVar17 = PTR___type_metadata_for_Swift_String_100eac208;
          }
          else {
            Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
            into.unknown = (undefined *)&local_b8;
            SVar20.bridgeObject = puVar6;
            SVar20.str = pcVar5;
            Swift::String::hash(into,SVar20);
            uVar12 = Swift::Hasher::_finalize(into);
            uVar13 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
            uVar12 = uVar12 & (uVar13 ^ 0xffffffffffffffff);
            if ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0) {
              do {
                puVar1 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar12 * 0x10);
                _Var2.unknown = (undefined *)*puVar1;
                _Var4.unknown = (undefined *)puVar1[1];
                if ((_Var2.unknown == pcVar5 && _Var4.unknown == puVar6) ||
                   (bVar8 = Swift::_stringCompareWithSmolCheck
                                      (_Var2,_Var4,(_StringComparisonResult)(__int8)pcVar5), bVar8))
                {
                  _swift_bridgeObjectRelease(puVar6);
                  puVar11 = puVar14;
                  _swift_isUniquelyReferenced_nonNull_native();
                  local_68 = puVar14;
                  if (((ulong)puVar11 & 1) == 0) {
                    FUN_10041dde4(0,*(long *)(puVar14 + 0x10) + 1,1);
                  }
                  puVar11 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
                  uVar3 = *(ulong *)(local_68 + 0x10);
                  if (*(ulong *)(local_68 + 0x18) >> 1 <= uVar3) {
                    FUN_10041dde4(1 < *(ulong *)(local_68 + 0x18),uVar3 + 1,1);
                  }
                  *(ulong *)(local_68 + 0x10) = uVar3 + 1;
                  *(long *)(local_68 + uVar3 * 8 + 0x20) = lVar16;
                  puVar14 = local_68;
                  if (uVar19 == uVar18) {
                    return local_68;
                  }
                  goto LAB_1004198f8;
                }
                uVar12 = uVar12 + 1 & ~uVar13;
              } while ((*(ulong *)(param_2 + 0x38 + (uVar12 >> 6) * 8) >> (uVar12 & 0x3f) & 1) != 0)
              ;
            }
            _swift_bridgeObjectRelease(lVar16);
            _swift_bridgeObjectRelease(puVar6);
            puVar17 = PTR___type_metadata_for_Swift_String_100eac208;
            puVar11 = PTR___type_metadata_for_Swift_AnyObject_100eae0b8;
          }
        }
      }
    } while (uVar19 != uVar18);
  }
  return puVar14;
}



/* Address: 0x100419b60 | FUN_100419b60 */

void FUN_100419b60(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined1 local_30 [8];
  undefined8 local_28;
  
  if (param_2 == '\x01') {
    if (*(long *)(param_3 + 0x10) != 0) {
      _swift_bridgeObjectRetain(param_3);
      uVar3 = 0;
      lVar1 = -0x2fffffffffffffed;
      FUN_100071370();
      if ((uVar3 & 1) == 0) {
        _swift_bridgeObjectRelease(param_3);
      }
      else {
        uVar4 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar1 * 8);
        _swift_unknownObjectRetain(uVar4);
        _swift_bridgeObjectRelease(param_3);
        puVar2 = &DAT_100fc5b20;
        local_28 = uVar4;
        FUN_1000f7830(&DAT_100fc5b20,&DAT_100c492c0);
        _swift_dynamicCast(local_30,&local_28,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                           puVar2,6);
      }
    }
  }
  else {
    FUN_10041973c(param_3);
  }
  return;
}



/* Address: 0x100419c50 | FUN_100419c50 */

undefined * FUN_100419c50(long param_1,double param_2,char param_3)

{
  int iVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  Date DVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  undefined1 *puVar16;
  double dVar17;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  undefined1 *local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined *local_78;
  
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  lVar7 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  local_a0 = auStack_d0 + -(lVar7 + 0xfU & 0xfffffffffffffff0);
  local_88 = (undefined *)Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(local_88 + -8);
  lVar8 = (long)(auStack_d0 + -(lVar7 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_a8 = lVar8;
  FUN_100424764();
  lVar12 = *(long *)(lVar7 + -8);
  lVar8 = lVar8 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fc5b28;
  FUN_1000f7830(&DAT_100fc5b28,&DAT_100c496b0);
  lVar11 = *(long *)(puVar2 + -8);
  uVar9 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = lVar8 - uVar9;
  local_90 = local_b0 - uVar9;
  lVar15 = local_90 - uVar9;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_80 = puVar2;
  if (param_3 == '\x01') {
    lVar15 = *(long *)(param_1 + 0x10);
    if (lVar15 != 0) {
      lVar7 = (long)*(int *)(lVar7 + 0x2c);
      param_1 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
      local_98 = *(long *)(lVar12 + 0x48);
      puVar16 = local_a0;
      local_c8 = lVar7;
      local_c0 = lVar11;
      local_b8 = lVar13;
      do {
        FUN_10041817c(param_1,lVar8);
        FUN_1000f8cac(lVar8 + lVar7,puVar16,&DAT_100fc5a30,&DAT_100c49370);
        puVar3 = puVar16;
        (**(code **)(lVar13 + 0x30))(puVar16,1,local_88);
        puVar2 = local_88;
        lVar11 = local_a8;
        if ((int)puVar3 == 1) {
          FUN_1004181c0(lVar8);
          FUN_1000fb4c4(puVar16,&DAT_100fc5a30,&DAT_100c49370);
        }
        else {
          pcVar14 = *(code **)(lVar13 + 0x20);
          (*pcVar14)(local_a8,puVar16,local_88);
          lVar7 = local_90;
          lVar13 = local_b0;
          iVar1 = *(int *)(local_80 + 0x30);
          (*pcVar14)(local_b0,lVar11,puVar2);
          FUN_10041a2dc(lVar8,lVar13 + iVar1);
          FUN_10011532c(lVar13,lVar7,&DAT_100fc5b28,&DAT_100c496b0);
          puVar2 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar4 = puVar5;
          if (((ulong)puVar2 & 1) == 0) {
            puVar4 = (undefined *)0x0;
            FUN_100420980(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
          }
          lVar13 = local_c0;
          lVar7 = local_c8;
          uVar9 = *(ulong *)(puVar4 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            FUN_100420980(puVar5,uVar9 + 1,1,puVar4);
          }
          *(ulong *)(puVar5 + 0x10) = uVar9 + 1;
          uVar10 = (ulong)*(byte *)(lVar13 + 0x50);
          FUN_10011532c(local_90,puVar5 + *(long *)(lVar13 + 0x48) * uVar9 +
                                          (uVar10 + 0x20 & (uVar10 ^ 0xffffffffffffffff)),
                        &DAT_100fc5b28,&DAT_100c496b0);
          lVar13 = local_b8;
          puVar16 = local_a0;
        }
        param_1 = param_1 + local_98;
        lVar15 = lVar15 + -1;
      } while (lVar15 != 0);
    }
  }
  else {
    lVar13 = *(long *)(param_1 + 0x10);
    if (lVar13 != 0) {
      local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10041de00(0,lVar13,0);
      puVar2 = (undefined *)
               (param_1 +
               ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
               ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff)));
      lVar7 = *(long *)(lVar12 + 0x48);
      puVar5 = local_78;
      do {
        DVar6.unknown = puVar2;
        FUN_10041817c(puVar2,lVar15 + *(int *)(local_80 + 0x30));
        dVar17 = Foundation::Date::get_timeIntervalSince1970(DVar6);
        Foundation::Date::init(dVar17 + param_2);
        uVar9 = *(ulong *)(puVar5 + 0x10);
        local_78 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar9) {
          FUN_10041de00(1 < *(ulong *)(puVar5 + 0x18),uVar9 + 1,1);
        }
        puVar5 = local_78;
        *(ulong *)(local_78 + 0x10) = uVar9 + 1;
        FUN_10011532c(lVar15,local_78 +
                             *(long *)(lVar11 + 0x48) * uVar9 +
                             ((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff)),&DAT_100fc5b28,
                      &DAT_100c496b0);
        puVar2 = puVar2 + lVar7;
        lVar13 = lVar13 + -1;
      } while (lVar13 != 0);
    }
  }
  return puVar5;
}



/* Address: 0x10041a03c | FUN_10041a03c */

void FUN_10041a03c(undefined8 param_1,char param_2,undefined *param_3)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  long local_90 [4];
  undefined *local_70;
  undefined8 local_68;
  
  puVar5 = &DAT_100fc5b18;
  FUN_1000f7830(&DAT_100fc5b18,&DAT_100c492b8);
  lVar2 = -(*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)local_90 + lVar2);
  if (param_2 == '\x01') {
    if (*(long *)(param_3 + 0x10) == 0) {
      return;
    }
    _swift_bridgeObjectRetain(param_3);
    uVar14 = 0;
    lVar6 = -0x2fffffffffffffed;
    FUN_100071370();
    if ((uVar14 & 1) == 0) goto LAB_10041a2b0;
    uVar12 = *(undefined8 *)(*(long *)(param_3 + 0x38) + lVar6 * 8);
    _swift_unknownObjectRetain(uVar12);
    _swift_bridgeObjectRelease(param_3);
    puVar5 = &DAT_100fc5b20;
    local_68 = uVar12;
    FUN_1000f7830(&DAT_100fc5b20,&DAT_100c492c0);
    ppuVar7 = &local_70;
    _swift_dynamicCast(ppuVar7,&local_68,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                       puVar5,6);
    if (((ulong)ppuVar7 & 1) == 0) {
      return;
    }
    uVar14 = *(ulong *)(local_70 + 0x10);
    puVar5 = local_70;
    param_3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_10041973c();
    if (param_3 == (undefined *)0x0) {
      return;
    }
    uVar14 = *(ulong *)(param_3 + 0x10);
    puVar5 = param_3;
    param_3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = param_3;
  if (uVar14 != 0) {
    uVar15 = 0;
    uVar13 = uVar14 - 1;
    do {
      while( true ) {
        if (*(ulong *)(puVar5 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10041a2dc);
          (*pcVar3)();
        }
        uVar1 = uVar15 + 1;
        _swift_bridgeObjectRetain(*(undefined8 *)(puVar5 + uVar15 * 8 + 0x20));
        FUN_10041616c(puVar11);
        lVar6 = 0;
        FUN_100424764();
        puVar8 = puVar11;
        (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar11,1,lVar6);
        if ((int)puVar8 != 1) break;
        FUN_1000fb4c4(puVar11,&DAT_100fc5b18,&DAT_100c492b8);
        uVar15 = uVar1;
        if (uVar14 == uVar1) goto LAB_10041a134;
      }
      local_90[1] = *puVar11;
      local_90[2] = *(undefined8 *)((long)local_90 + lVar2 + 8);
      _swift_bridgeObjectRetain();
      FUN_1004181c0(puVar11);
      puVar9 = param_3;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = param_3;
      local_90[3] = uVar13;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_100420b14(0,*(long *)(param_3 + 0x10) + 1,1,param_3);
      }
      uVar13 = *(ulong *)(puVar10 + 0x10);
      lVar6 = uVar13 + 1;
      param_3 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar13) {
        param_3 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        local_90[0] = lVar6;
        FUN_100420b14(param_3,lVar6,1,puVar10);
        lVar6 = local_90[0];
      }
      *(long *)(param_3 + 0x10) = lVar6;
      *(long *)(param_3 + uVar13 * 0x10 + 0x20) = local_90[1];
      *(long *)(param_3 + uVar13 * 0x10 + 0x28) = local_90[2];
      bVar4 = local_90[3] != uVar15;
      uVar15 = uVar1;
      uVar13 = local_90[3];
    } while (bVar4);
  }
LAB_10041a134:
  _swift_bridgeObjectRelease(puVar5);
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_10042cd58(param_3);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
LAB_10041a2b0:
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10041a2dc | FUN_10041a2dc */

undefined8 FUN_10041a2dc(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100424764();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10041a320 | FUN_10041a320 */

void FUN_10041a320(void)

{
  FUN_10041821c();
  return;
}



/* Address: 0x10041a334 | FUN_10041a334 */

void FUN_10041a334(void)

{
  long unaff_x20;
  
  objc_stub::setDelegate_
            (*(ID *)(unaff_x20 +
                    _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest),0);
  FUN_10041a684();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10041a378 | _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::dealloc(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  objc_super local_30;
  
  pcVar1 = (class_t *)objc_stub::setDelegate_(*(ID *)(param_1 + refreshReceiptRequest),0);
  FUN_10041a684();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  _objc_msgSendSuper2(&local_30,"dealloc");
  return;
}



/* Address: 0x10041a3d0 | _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + callback + 8));
  return;
}



/* Address: 0x10041a40c | _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::requestDidFinish: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::requestDidFinish_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_10041a48c(0);
  return;
}



/* Address: 0x10041a438 | _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::request:didFailWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::request_didFailWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10041a48c(param_4);
  return;
}



/* Address: 0x10041a48c | FUN_10041a48c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041a48c(undefined8 param_1)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 unaff_x20;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_a0 [8];
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  puVar8 = auStack_a0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar9 + 0x40);
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10041a6e0();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar4 = &DAT_100ed3540;
  _swift_allocObject(&DAT_100ed3540,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  local_70 = FUN_10041a750;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ed3558;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  DVar5.unknown = local_68;
  _swift_errorRetain(param_1);
  _swift_release();
  DVar5 = Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100415e00();
  puVar4 = &DAT_100fc5a18;
  FUN_1000f7830(&DAT_100fc5a18,&DAT_100c49290);
  puVar6 = puVar4;
  FUN_100415e44();
  Swift::SetAlgebra::_init(puVar8,&local_90,puVar4,puVar6,DVar1.unknown,DVar5.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar8 + -(lVar7 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(puVar8,DVar1.unknown);
  (**(code **)(lVar9 + 8))(puVar8 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  return;
}



/* Address: 0x10041a658 | _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SwiftyStoreKit.InAppReceiptRefreshRequest",0x29,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10041a684);
  (*pcVar1)();
}



/* Address: 0x10041a684 | FUN_10041a684 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041a684(void)

{
  return ZEXT816(0x100f9c0a0);
}



/* Address: 0x10041a6a4 | FUN_10041a6a4 */

void FUN_10041a6a4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10041a6b0 | FUN_10041a6b0 */

undefined1  [16] FUN_10041a6b0(void)

{
  return ZEXT816(0x100ed3508);
}



/* Address: 0x10041a6c0 | FUN_10041a6c0 */

void FUN_10041a6c0(void)

{
  long unaff_x20;
  
  objc_stub::start(*(ID *)(unaff_x20 +
                          _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest));
  return;
}



/* Address: 0x10041a6d0 | FUN_10041a6d0 */

void FUN_10041a6d0(void)

{
  long unaff_x20;
  
  objc_stub::cancel(*(ID *)(unaff_x20 +
                           _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::refreshReceiptRequest))
  ;
  return;
}



/* Address: 0x10041a6e0 | FUN_10041a6e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10041a6e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fc5a08 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fc5a08 = puVar1;
  return;
}



/* Address: 0x10041a724 | FUN_10041a724 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041a724(void)

{
  long unaff_x20;
  
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10041a750 | FUN_10041a750 */

void FUN_10041a750(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(unaff_x20 + 0x10) +
              _TtC14SwiftyStoreKit26InAppReceiptRefreshRequest::callback))
            (*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10041a780 | FUN_10041a780 */

void FUN_10041a780(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10041a794 | FUN_10041a794 */

void FUN_10041a794(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10041a79c | FUN_10041a79c */

void FUN_10041a79c(undefined8 param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  long param_5,code *param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  
  if ((param_3 >> 7 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_5 + 0x18);
    lVar2 = *(long *)(param_5 + 0x20);
    FUN_100004640(param_5,uVar1);
    puVar3 = &DAT_100ed35e8;
    _swift_allocObject(&DAT_100ed35e8,0x20,7);
    *(code **)(puVar3 + 0x10) = param_6;
    *(undefined8 *)(puVar3 + 0x18) = param_7;
    pcVar4 = *(code **)(lVar2 + 8);
    _swift_retain(param_7);
    (*pcVar4)(param_1,param_2,FUN_10041af58,puVar3,uVar1,lVar2);
    _swift_release(puVar3);
    return;
  }
  (*param_6)();
  return;
}



/* Address: 0x10041a860 | FUN_10041a860 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010041a970) */

void FUN_10041a860(long param_1,long param_2,code *param_3)

{
  undefined *puVar1;
  URL UVar2;
  undefined1 *puVar3;
  Data DVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  NSDataReadingOptions contentsOf;
  long lVar7;
  undefined1 auStack_60 [16];
  
  puVar1 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  puVar6 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar2.unknown + -8);
  contentsOf.unknown = puVar6 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(param_2 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::receiptRefreshRequest) =
       0;
  if (param_1 == 0) {
    FUN_10041aee4(param_2 + _TtC14SwiftyStoreKit23InAppReceiptVerificator::appStoreReceiptURL,puVar6
                 );
    puVar3 = puVar6;
    (**(code **)(lVar7 + 0x30))(puVar6,1,UVar2.unknown);
    if ((int)puVar3 != 1) {
      (**(code **)(lVar7 + 0x20))(contentsOf.unknown,puVar6,UVar2.unknown);
      uVar5 = 0;
      DVar4 = Foundation::Data::_init(contentsOf);
      (**(code **)(lVar7 + 8))(contentsOf.unknown,UVar2.unknown);
      FUN_1001037b4(DVar4.unknown,uVar5);
      (*param_3)(DVar4.unknown,uVar5,0);
      FUN_10003bf2c(DVar4.unknown,uVar5);
      FUN_10003bf2c(DVar4.unknown,uVar5);
      return;
    }
    FUN_10041ad8c(puVar6);
    param_1 = 0;
    uVar5 = 0x84;
  }
  else {
    uVar5 = 0x81;
  }
  (*param_3)(param_1,0,uVar5);
  return;
}



/* Address: 0x10041aa04 | FUN_10041aa04 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041aa04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  DispatchWorkItemFlags DVar1;
  OS_dispatch_queue *pOVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_98 = *(long *)(DVar1.unknown + -8);
  puVar7 = auStack_b0 + -(*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_a8 = *(long *)(puStack_a0 + -8);
  lVar6 = *(long *)(local_a8 + 0x40);
  pOVar2 = (OS_dispatch_queue *)0x0;
  FUN_10041a6e0();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar2);
  puVar3 = &DAT_100ed3598;
  _swift_allocObject(&DAT_100ed3598,0x31,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  puVar3[0x30] = (char)param_3;
  local_70 = FUN_10041ae50;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100ed35b0;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  DVar4.unknown = local_68;
  _swift_retain(param_5);
  FUN_10041ae98(param_1,param_2,param_3);
  _swift_release();
  DVar4 = Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100415e00();
  puVar3 = &DAT_100fc5a18;
  FUN_1000f7830(&DAT_100fc5a18,&DAT_100c49290);
  puVar5 = puVar3;
  FUN_100415e44();
  Swift::SetAlgebra::_init(puVar7,&local_90,puVar3,puVar5,DVar1.unknown,DVar4.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(puVar7,DVar1.unknown);
  (**(code **)(local_a8 + 8))(puVar7 + -(lVar6 + 0xfU & 0xfffffffffffffff0),puStack_a0);
  return;
}



/* Address: 0x10041abec | _TtC14SwiftyStoreKit23InAppReceiptVerificator::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC14SwiftyStoreKit23InAppReceiptVerificator::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SwiftyStoreKit.InAppReceiptVerificator",0x26,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10041ac18);
  (*pcVar1)();
}



/* Address: 0x10041ac18 | FUN_10041ac18 */

void FUN_10041ac18(void)

{
  FUN_10041ac8c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x10041ac4c | _TtC14SwiftyStoreKit23InAppReceiptVerificator::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit23InAppReceiptVerificator::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_10041ad8c(param_1 + appStoreReceiptURL);
  return;
}



/* Address: 0x10041ac84 | FUN_10041ac84 */

void FUN_10041ac84(void)

{
  FUN_10041ac8c(0);
  return;
}



/* Address: 0x10041ac8c | FUN_10041ac8c */

void FUN_10041ac8c(undefined8 param_1)

{
  if (DAT_100fc5bc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cafa58);
  return;
}



/* Address: 0x10041acc4 | FUN_10041acc4 */

void FUN_10041acc4(long param_1,ulong param_2)

{
  long lVar1;
  long local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_10041ad38();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_100c49348;
    _swift_updateClassMetadata2(param_1,0x100,2,&local_30,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10041ad38 | FUN_10041ad38 */

void FUN_10041ad38(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_100fc5bd0 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_100fc5bd0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x10041ad8c | FUN_10041ad8c */

undefined8 FUN_10041ad8c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10041add4 | FUN_10041add4 */

void FUN_10041add4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10041ae04(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10041ae04 | FUN_10041ae04 */

void FUN_10041ae04(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 >> 7 & 1) == 0) {
    _swift_bridgeObjectRelease();
    return;
  }
  FUN_10041ae14(param_1,param_2,param_3 & 0x7f);
  return;
}



/* Address: 0x10041ae14 | FUN_10041ae14 */

void FUN_10041ae14(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
    if ((param_3 == 0) || (param_3 == 1)) {
      _swift_errorRelease();
      return;
    }
  }
  else {
    if (param_3 == 2) {
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    if (param_3 == 3) {
      _swift_bridgeObjectRelease();
      return;
    }
  }
  return;
}



/* Address: 0x10041ae50 | FUN_10041ae50 */

void FUN_10041ae50(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x10041ae7c | FUN_10041ae7c */

void FUN_10041ae7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10041ae90 | FUN_10041ae90 */

void FUN_10041ae90(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10041ae98 | FUN_10041ae98 */

void FUN_10041ae98(undefined8 param_1,undefined8 param_2,uint param_3)

{
  if ((param_3 >> 7 & 1) == 0) {
    _swift_bridgeObjectRetain();
    return;
  }
  FUN_10041aea8(param_1,param_2,param_3 & 0x7f);
  return;
}


