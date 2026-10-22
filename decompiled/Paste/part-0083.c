/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f4f78 | FUN_1000f4f78 */

byte FUN_1000f4f78(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_2[2] < param_1[2];
  if (param_2[1] != param_1[1]) {
    bVar1 = param_2[1] < param_1[1];
  }
  bVar2 = *param_2 < *param_1;
  if (*param_2 == *param_1) {
    bVar2 = bVar1;
  }
  return bVar2 ^ 1;
}



/* Address: 0x1000f4fb4 | FUN_1000f4fb4 */

byte FUN_1000f4fb4(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_1[2] < param_2[2];
  if (param_1[1] != param_2[1]) {
    bVar1 = param_1[1] < param_2[1];
  }
  bVar2 = *param_1 < *param_2;
  if (*param_1 == *param_2) {
    bVar2 = bVar1;
  }
  return bVar2 ^ 1;
}



/* Address: 0x1000f4ff0 | FUN_1000f4ff0 */

bool FUN_1000f4ff0(long *param_1,long *param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = param_2[2] < param_1[2];
  if (param_2[1] != param_1[1]) {
    bVar1 = param_2[1] < param_1[1];
  }
  bVar2 = *param_2 < *param_1;
  if (*param_2 == *param_1) {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Address: 0x1000f5028 | FUN_1000f5028 */

void FUN_1000f5028(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_1000f6020();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = param_4;
  }
  return;
}



/* Address: 0x1000f5054 | FUN_1000f5054 */

void FUN_1000f5054(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000f4c24(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x1000f5070 | FUN_1000f5070 */

void FUN_1000f5070(void)

{
  undefined8 *unaff_x20;
  
  FUN_1000f4a7c(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x1000f507c | FUN_1000f507c */

bool FUN_1000f507c(long *param_1,long *param_2)

{
  if (*param_1 != *param_2 || param_1[1] != param_2[1]) {
    return false;
  }
  return param_1[2] == param_2[2];
}



/* Address: 0x1000f50ac | FUN_1000f50ac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f50ac(void)

{
  undefined *puVar1;
  ID IVar2;
  Dictionary<undefined,undefined> DVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ID unaff_x20;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  uVar5 = 0;
  IVar2 = objc_stub::infoDictionary(unaff_x20);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (IVar2 == 0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    DVar3 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    if (*(long *)(DVar3.unknown + 0x10) != 0) {
      _swift_bridgeObjectRetain(DVar3.unknown);
      uVar6 = 0;
      lVar4 = -0x2fffffffffffffe6;
      FUN_100071370(0xd00000000000001a);
      if ((uVar6 & 1) != 0) {
        FUN_10000cbfc(*(long *)(DVar3.unknown + 0x38) + lVar4 * 0x20,&local_50);
        _swift_bridgeObjectRelease_n(DVar3.unknown,2);
        if (local_38 != 0) {
          _swift_dynamicCast(&local_60,&local_50,puVar1 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          if ((uVar5 & 1) == 0) {
            return;
          }
          FUN_1000f5cf4(local_60,uStack_58);
          return;
        }
        goto LAB_1000f51a8;
      }
      _swift_bridgeObjectRelease(DVar3.unknown);
    }
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
    _swift_bridgeObjectRelease(DVar3.unknown);
  }
LAB_1000f51a8:
  FUN_1000f3ccc(&local_50);
  return;
}



/* Address: 0x1000f51d4 | FUN_1000f51d4 */

undefined * FUN_1000f51d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f52dc);
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
    puVar3 = &DAT_100fae268;
    FUN_1000037f0(&DAT_100fae268,&DAT_100c2db18);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1000f52dc | FUN_1000f52dc */

UnsafeMutablePointer
FUN_1000f52dc(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f5660);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1000f5364:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_1000f5420;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1000f55ac;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1000f51d4(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1000f51d4(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1000f55c0:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_1000f5420:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f56c8);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1000f51d4(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1000f51d4(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1000f55ac;
  goto LAB_1000f5364;
LAB_1000f55ac:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1000f51d4(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1000f51d4(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000f5684);
    (*pcVar2)();
  }
  goto LAB_1000f55c0;
}



/* Address: 0x1000f56c8 | FUN_1000f56c8 */

/* WARNING: Removing unreachable block (ram,0x0001000f57c8) */

undefined1  [16]
FUN_1000f56c8(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1000f64f8();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1000f57d4();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1000f57d4 | FUN_1000f57d4 */

undefined1  [16]
FUN_1000f57d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1000f5824();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1000f5824 | FUN_1000f5824 */

String FUN_1000f5824(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

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
      FUN_1000f5968(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5924);
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
      goto LAB_1000f585c;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1000f585c:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1000f5968 | FUN_1000f5968 */

undefined * FUN_1000f5968(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fae220;
    FUN_1000037f0(&DAT_100fae220,&DAT_100c2d8a8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1000f59d8 | FUN_1000f59d8 */

undefined1  [16]
FUN_1000f59d8(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5)

{
  code *pcVar1;
  Index IVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  byte *pbVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined1 auVar11 [16];
  
  uVar5 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar10 = 4L << uVar5;
  IVar2.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1000f5a80;
LAB_1000f5a20:
    uVar9 = (ulong)IVar2.cmsgPointer.unknown >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1000f5a20;
LAB_1000f5a80:
    uVar9 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar9 = param_5 >> 0x38 & 0xf;
    }
    if (uVar9 < (ulong)IVar2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5cf4);
      (*pcVar1)();
    }
    uVar9 = Swift::String::UTF8View::_foreignDistance((Index)0xf,IVar2,param_4);
  }
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.cmsgPointer.unknown & 0xc) == uVar10) {
    FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_1000f5b38;
LAB_1000f5a3c:
    lVar6 = ((ulong)param_3.cmsgPointer.unknown >> 0x10) -
            ((ulong)param_2.cmsgPointer.unknown >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_1000f5a3c;
LAB_1000f5b38:
    uVar10 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar10 = param_5 >> 0x38 & 0xf;
    }
    if (uVar10 < (ulong)param_2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5ce4);
      (*pcVar1)();
    }
    if (uVar10 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5ce8);
      (*pcVar1)();
    }
    lVar6 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  uVar10 = uVar9 + lVar6;
  if (SCARRY8(uVar9,lVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5cdc);
    (*pcVar1)();
  }
  if ((long)uVar10 < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5ce0);
    (*pcVar1)();
  }
  pbVar7 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar7 = (byte *)(uVar9 + param_1);
  }
  if (*pbVar7 == 0x2b) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5cf0);
      (*pcVar1)();
    }
    if (uVar10 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = lVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 + uVar10, SCARRY8(lVar8,uVar10)))
        goto LAB_1000f5cb0;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_1000f5cb8;
    }
  }
  else if (*pbVar7 == 0x2d) {
    if (uVar10 == uVar9) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f5cec);
      (*pcVar1)();
    }
    if (uVar10 - uVar9 != 1) {
      lVar3 = 0;
      lVar6 = lVar6 + -1;
      do {
        pbVar7 = pbVar7 + 1;
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 - uVar10, SBORROW8(lVar8,uVar10)))
        goto LAB_1000f5cb0;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      goto LAB_1000f5cb8;
    }
  }
  else if (uVar10 != uVar9) {
    lVar3 = 0;
    if (pbVar7 == (byte *)0x0) {
      uVar4 = 0;
    }
    else {
      do {
        if (((9 < *pbVar7 - 0x30) ||
            (lVar8 = lVar3 * 10, SUB168(SEXT816(lVar3) * SEXT816(10),8) != lVar8 >> 0x3f)) ||
           (uVar10 = (ulong)(byte)(*pbVar7 - 0x30), lVar3 = lVar8 + uVar10, SCARRY8(lVar8,uVar10)))
        goto LAB_1000f5cb0;
        uVar4 = 0;
        lVar6 = lVar6 + -1;
        pbVar7 = pbVar7 + 1;
      } while (lVar6 != 0);
    }
    goto LAB_1000f5cb8;
  }
LAB_1000f5cb0:
  lVar3 = 0;
  uVar4 = 1;
LAB_1000f5cb8:
  auVar11._8_8_ = uVar4;
  auVar11._0_8_ = lVar3;
  return auVar11;
}



/* Address: 0x1000f5cf4 | FUN_1000f5cf4 */

undefined ** FUN_1000f5cf4(undefined8 param_1,undefined8 param_2)

{
  _StringObject _Var1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined **ppuVar5;
  UnsafeBufferPointer<__int8> UVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *local_80;
  ulong uStack_78;
  undefined8 *local_70;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0x2e;
  uStack_58 = 0xe100000000000000;
  local_70 = &local_60;
  uVar4 = 2;
  FUN_1000f52dc(2,0,FUN_1000f64a4,&local_80,param_1,param_2);
  uVar10 = uVar4;
  if (*(long *)(uVar4 + 0x10) != 0) {
    ppuVar5 = *(undefined ***)(uVar4 + 0x20);
    uVar11 = *(ulong *)(uVar4 + 0x28);
    if (0x3fff < (uVar11 ^ (ulong)ppuVar5)) {
      _Var1.unknown = *(undefined **)(uVar4 + 0x30);
      uVar8 = *(ulong *)(uVar4 + 0x38);
      if ((uVar8 >> 0x3c & 1) == 0) {
        if ((uVar8 >> 0x3d & 1) == 0) {
          if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8(_Var1);
          }
          else {
            UVar6.unknown = (undefined *)((uVar8 & 0xfffffffffffffff) + 0x20);
          }
        }
        else {
          uStack_78 = uVar8 & 0xffffffffffffff;
          UVar6.unknown = (undefined *)&local_80;
          local_80 = _Var1.unknown;
        }
        FUN_1000f59d8(UVar6.unknown,ppuVar5,uVar11,_Var1.unknown,uVar8);
        uVar7 = (uint)ppuVar5;
        ppuVar5 = (undefined **)UVar6.unknown;
      }
      else {
        _swift_bridgeObjectRetain(uVar8);
        FUN_1000f56c8(ppuVar5,uVar11,_Var1.unknown,uVar8,10);
        _swift_bridgeObjectRelease(uVar8);
        uVar7 = (uint)uVar11;
      }
      if ((uVar7 & 0xff) != 1) {
        uVar11 = *(ulong *)(uVar4 + 0x10);
        if (uVar11 < 2) {
LAB_1000f5e14:
          _swift_bridgeObjectRelease(uVar4);
          return ppuVar5;
        }
        uVar8 = *(ulong *)(uVar4 + 0x40);
        uVar9 = *(ulong *)(uVar4 + 0x48);
        if (0x3fff < (uVar9 ^ uVar8)) {
          _Var1.unknown = *(undefined **)(uVar4 + 0x50);
          uVar2 = *(ulong *)(uVar4 + 0x58);
          if ((uVar2 >> 0x3c & 1) == 0) {
            if ((uVar2 >> 0x3d & 1) == 0) {
              if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
                UVar6 = Swift::_StringObject::get_sharedUTF8(_Var1);
              }
              else {
                UVar6.unknown = (undefined *)((uVar2 & 0xfffffffffffffff) + 0x20);
              }
            }
            else {
              uStack_78 = uVar2 & 0xffffffffffffff;
              UVar6.unknown = (undefined *)&local_80;
              local_80 = _Var1.unknown;
            }
            FUN_1000f59d8(UVar6.unknown,uVar8,uVar9,_Var1.unknown,uVar2);
            uVar7 = (uint)uVar8;
          }
          else {
            _swift_bridgeObjectRetain(uVar2);
            FUN_1000f56c8(uVar8,uVar9,_Var1.unknown,uVar2,10);
            _swift_bridgeObjectRelease(uVar2);
            uVar7 = (uint)uVar9;
          }
          if ((uVar7 & 0xff) != 1) {
            if (uVar11 == 2) goto LAB_1000f5e14;
            if (*(ulong *)(uVar4 + 0x10) < 3) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1000f5fec);
              (*pcVar3)();
            }
            uVar11 = *(ulong *)(uVar4 + 0x60);
            uVar8 = *(ulong *)(uVar4 + 0x68);
            _Var1.unknown = *(undefined **)(uVar4 + 0x70);
            uVar10 = *(ulong *)(uVar4 + 0x78);
            _swift_bridgeObjectRetain(uVar10);
            _swift_bridgeObjectRelease(uVar4);
            if (0x3fff < (uVar8 ^ uVar11)) {
              if ((uVar10 >> 0x3c & 1) == 0) {
                if ((uVar10 >> 0x3d & 1) == 0) {
                  if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
                    UVar6 = Swift::_StringObject::get_sharedUTF8(_Var1);
                  }
                  else {
                    UVar6.unknown = (undefined *)((uVar10 & 0xfffffffffffffff) + 0x20);
                  }
                }
                else {
                  uStack_78 = uVar10 & 0xffffffffffffff;
                  UVar6.unknown = (undefined *)&local_80;
                  local_80 = _Var1.unknown;
                }
                FUN_1000f59d8(UVar6.unknown,uVar11,uVar8,_Var1.unknown,uVar10);
                uVar7 = (uint)uVar11;
              }
              else {
                FUN_1000f56c8(uVar11,uVar8,_Var1.unknown,uVar10,10);
                uVar7 = (uint)uVar8;
              }
              _swift_bridgeObjectRelease(uVar10);
              if ((uVar7 & 0xff) == 1) {
                return (undefined **)0x0;
              }
              return ppuVar5;
            }
          }
        }
      }
    }
  }
  _swift_bridgeObjectRelease(uVar10);
  return (undefined **)0x0;
}



/* Address: 0x1000f6020 | FUN_1000f6020 */

/* WARNING: Removing unreachable block (ram,0x0001000f6140) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001000f60e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

__int64 FUN_1000f6020(long param_1)

{
  undefined *puVar1;
  __int64 _Var2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 *local_68;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fae258;
  FUN_1000037f0(&DAT_100fae258,&DAT_100c2db10);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _Var2 = *(__int64 *)(param_1 + 0x18);
  FUN_100004640(param_1,_Var2);
  FUN_1000f61cc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    _Var2 = Swift::KeyedDecodingContainer::_decode(puVar1,puVar1);
    local_52 = 1;
    puVar3 = &local_52;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_53 = 2;
    local_68 = puVar3;
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_53);
    (**(code **)(lVar4 + 8))(auStack_70 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return _Var2;
}



/* Address: 0x1000f61cc | FUN_1000f61cc */

void FUN_1000f61cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2dac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2dac0,&DAT_100eb7008);
  DAT_100fae230 = pTVar1;
  return;
}



/* Address: 0x1000f620c | thunk_FUN_1000f6210 */

void thunk_FUN_1000f6210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d9b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d9b8,&DAT_100eb6f68);
  DAT_100fae238 = pTVar1;
  return;
}



/* Address: 0x1000f6210 | FUN_1000f6210 */

void FUN_1000f6210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d9b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d9b8,&DAT_100eb6f68);
  DAT_100fae238 = pTVar1;
  return;
}



/* Address: 0x1000f6250 | FUN_1000f6250 */

void FUN_1000f6250(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000f6264 | FUN_1000f6264 */

int FUN_1000f6264(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[6] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1000f6284 | FUN_1000f6284 */

void FUN_1000f6284(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 3) = uVar1;
  return;
}



/* Address: 0x1000f62b0 | FUN_1000f62b0 */

undefined1  [16] FUN_1000f62b0(void)

{
  return ZEXT816(0x100eb6f68);
}



/* Address: 0x1000f62c0 | FUN_1000f62c0 */

undefined1  [16] FUN_1000f62c0(void)

{
  return ZEXT816(0x100eb7008);
}



/* Address: 0x1000f62d0 | thunk_FUN_1000f62d4 */

void thunk_FUN_1000f62d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da98,&DAT_100eb7008);
  DAT_100fae240 = pTVar1;
  return;
}



/* Address: 0x1000f62d4 | FUN_1000f62d4 */

void FUN_1000f62d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae240 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da98,&DAT_100eb7008);
  DAT_100fae240 = pTVar1;
  return;
}



/* Address: 0x1000f6314 | thunk_FUN_1000f6318 */

void thunk_FUN_1000f6318(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da30,&DAT_100eb7008);
  DAT_100fae248 = pTVar1;
  return;
}



/* Address: 0x1000f6318 | FUN_1000f6318 */

void FUN_1000f6318(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae248 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da30;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da30,&DAT_100eb7008);
  DAT_100fae248 = pTVar1;
  return;
}



/* Address: 0x1000f6358 | thunk_FUN_1000f635c */

void thunk_FUN_1000f635c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da08,&DAT_100eb7008);
  DAT_100fae250 = pTVar1;
  return;
}



/* Address: 0x1000f635c | FUN_1000f635c */

void FUN_1000f635c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae250 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2da08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2da08,&DAT_100eb7008);
  DAT_100fae250 = pTVar1;
  return;
}



/* Address: 0x1000f639c | FUN_1000f639c */

undefined4 FUN_1000f639c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x726f6a616d || param_2 != &DAT_e500000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x726f6a616d,(_StringGuts)0xe500000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != 0x726f6e696d) || (param_2 != &DAT_e500000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x726f6e696d,(_StringGuts)0xe500000000000000,expecting),
         !bVar1)) {
        if ((param_1 == 0x6863746170) && (param_2 == &DAT_e500000000000000)) {
          _swift_bridgeObjectRelease(&DAT_e500000000000000);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6863746170,(_StringGuts)0xe500000000000000,expecting);
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1000f64a4 | FUN_1000f64a4 */

bool FUN_1000f64a4(undefined8 *param_1)

{
  undefined *puVar1;
  bool bVar2;
  long unaff_x20;
  
  puVar1 = (undefined *)**(long **)(unaff_x20 + 0x10);
  if ((undefined *)*param_1 == puVar1 &&
      (undefined *)param_1[1] == (undefined *)(*(long **)(unaff_x20 + 0x10))[1]) {
    bVar2 = true;
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)puVar1);
  }
  return bVar2;
}



/* Address: 0x1000f64f8 | FUN_1000f64f8 */

void FUN_1000f64f8(void)

{
  undefined *puVar1;
  
  if (DAT_100fae260 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fae260 = puVar1;
  return;
}



/* Address: 0x1000f6538 | thunk_FUN_1000f6210 */

void thunk_FUN_1000f6210(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fae238 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2d9b8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2d9b8,&DAT_100eb6f68);
  DAT_100fae238 = pTVar1;
  return;
}



/* Address: 0x1000f653c | FUN_1000f653c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f653c(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  IVar2 = objc_stub::imageWithSystemSymbolName_accessibilityDescription_(unaff_x20,pNVar1,0);
  return IVar2;
}



/* Address: 0x1000f65b0 | FUN_1000f65b0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1000f65b0(undefined8 param_1)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::imageWithSymbolConfiguration_(unaff_x20,param_1);
  return IVar1;
}



/* Address: 0x1000f65d0 | FUN_1000f65d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1000f65d0(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::contentTintColor(unaff_x20);
  return IVar1;
}



/* Address: 0x1000f65ec | FUN_1000f65ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f65ec(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::setContentTintColor_(unaff_x20,param_1);
  return 0;
}



/* Address: 0x1000f6618 | FUN_1000f6618 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1000f6618(ID *param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  IVar1 = objc_stub::contentTintColor(unaff_x20);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1000f6658;
  return auVar2;
}



/* Address: 0x1000f6658 | FUN_1000f6658 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f6658(undefined8 *param_1)

{
  objc_stub::setContentTintColor_(param_1[1],*param_1);
  return 0;
}



/* Address: 0x1000f6684 | FUN_1000f6684 */

void FUN_1000f6684(void)

{
  ID unaff_x20;
  
  objc_stub::orientation(unaff_x20);
  return;
}



/* Address: 0x1000f668c | FUN_1000f668c */

void FUN_1000f668c(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::setOrientation_(unaff_x20,param_1);
  return;
}



/* Address: 0x1000f6698 | FUN_1000f6698 */

undefined1  [16] FUN_1000f6698(ID *param_1)

{
  ID IVar1;
  ID unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[1] = unaff_x20;
  IVar1 = objc_stub::orientation(unaff_x20);
  *param_1 = IVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1000f66d0;
  return auVar2;
}



/* Address: 0x1000f66d0 | FUN_1000f66d0 */

void FUN_1000f66d0(undefined8 *param_1)

{
  objc_stub::setOrientation_(param_1[1],*param_1);
  return;
}



/* Address: 0x1000f66dc | FUN_1000f66dc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f66dc(undefined8 param_1)

{
  NSArray *pNVar1;
  ID IVar2;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  FUN_1000f6750(0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_1);
  IVar2 = objc_stub::stackViewWithViews_(unaff_x20,pNVar1);
  return IVar2;
}



/* Address: 0x1000f6750 | FUN_1000f6750 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000f6750(void)

{
  undefined *puVar1;
  
  if (DAT_100fae270 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSView;
  _swift_getObjCClassMetadata();
  DAT_100fae270 = puVar1;
  return;
}



/* Address: 0x1000f6794 | FUN_1000f6794 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_1000f6794(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  NSString *pNVar5;
  String SVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,7,UVar3.unknown,pMVar1);
  }
  objc_stub::stringValue(param_1);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_release(pMVar2);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  return pNVar5;
}



/* Address: 0x1000f6874 | FUN_1000f6874 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000f6874(void)

{
  ID unaff_x20;
  String SVar1;
  
  objc_stub::stringValue(unaff_x20);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x1000f68c4 | FUN_1000f68c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f68c4(ID param_1,undefined8 param_2,long param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  NSString *pNVar5;
  void *pvVar6;
  String SVar7;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,8,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    pvVar6 = (void *)0xe000000000000000;
  }
  else {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar6 = SVar7.bridgeObject;
  }
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(pvVar6);
  objc_stub::setStringValue_(param_1,pNVar5);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1000f69b0 | FUN_1000f69b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f69b0(undefined8 param_1,long param_2)

{
  long lVar1;
  NSString *pNVar2;
  ID unaff_x20;
  
  lVar1 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar1 = param_2;
  }
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar1);
  objc_stub::setStringValue_(unaff_x20,pNVar2);
  return 0;
}



/* Address: 0x1000f6a04 | FUN_1000f6a04 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1000f6a04(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0xd,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::attributedStringValue(param_1);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x1000f6aa0 | FUN_1000f6aa0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1000f6aa0(void)

{
  ID IVar1;
  ID unaff_x20;
  
  IVar1 = objc_stub::attributedStringValue(unaff_x20);
  return IVar1;
}



/* Address: 0x1000f6abc | FUN_1000f6abc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f6abc(ID param_1,undefined8 param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *self;
  NSString *pNVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0xe,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    self = &_OBJC_CLASS___NSAttributedString;
    _objc_allocWithZone();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    param_3 = objc_stub::initWithString_((ID)self,pNVar5);
  }
  objc_stub::setAttributedStringValue_(param_1,param_3);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x1000f6bc0 | FUN_1000f6bc0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f6bc0(ID param_1)

{
  undefined *self;
  NSString *pNVar1;
  ID unaff_x20;
  
  if (param_1 == 0) {
    self = &_OBJC_CLASS___NSAttributedString;
    _objc_allocWithZone();
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    param_1 = objc_stub::initWithString_((ID)self,pNVar1);
  }
  objc_stub::setAttributedStringValue_(unaff_x20,param_1);
  return 0;
}



/* Address: 0x1000f6c34 | FUN_1000f6c34 */

ID FUN_1000f6c34(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0x13,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::alignment(param_1);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x1000f6cc8 | FUN_1000f6cc8 */

void FUN_1000f6cc8(void)

{
  ID unaff_x20;
  
  objc_stub::alignment(unaff_x20);
  return;
}



/* Address: 0x1000f6cd0 | FUN_1000f6cd0 */

void FUN_1000f6cd0(ID param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0x14,UVar3.unknown,pMVar1);
  }
  objc_stub::setAlignment_(param_1,param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f6d68 | FUN_1000f6d68 */

void FUN_1000f6d68(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::setAlignment_(unaff_x20,param_1);
  return;
}



/* Address: 0x1000f6d74 | FUN_1000f6d74 */

ID FUN_1000f6d74(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0x19,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::maximumNumberOfLines(param_1);
  _swift_release(pMVar2);
  return IVar5;
}



/* Address: 0x1000f6e08 | FUN_1000f6e08 */

void FUN_1000f6e08(void)

{
  ID unaff_x20;
  
  objc_stub::maximumNumberOfLines(unaff_x20);
  return;
}



/* Address: 0x1000f6e10 | FUN_1000f6e10 */

void FUN_1000f6e10(ID param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextField+UIKit.swift",0x25,1,0x1a,UVar3.unknown,pMVar1);
  }
  objc_stub::setMaximumNumberOfLines_(param_1,param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f6ea8 | FUN_1000f6ea8 */

void FUN_1000f6ea8(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::setMaximumNumberOfLines_(unaff_x20,param_1);
  return;
}



/* Address: 0x1000f6eb4 | FUN_1000f6eb4 */

void FUN_1000f6eb4(void)

{
  MainActor *pMVar1;
  undefined *puVar2;
  
  if (DAT_100fae278 != (undefined *)0x0) {
    return;
  }
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18;
  _swift_getWitnessTable(PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18,pMVar1);
  DAT_100fae278 = puVar2;
  return;
}


