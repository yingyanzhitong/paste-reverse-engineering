/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004d341c | FUN_1004d341c */

String FUN_1004d341c(char *param_1,undefined *param_2)

{
  CharacterSet CVar1;
  __int64 _Var2;
  __int64 _Var3;
  Index IVar4;
  CharacterSet CVar5;
  long extraout_x8;
  CharacterSet in;
  long lVar6;
  String SVar7;
  String SVar8;
  String SVar10;
  String SVar11;
  String local_60;
  String SVar9;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar6 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  in.unknown = (undefined *)((long)&local_60 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar10.bridgeObject = param_2;
  SVar10.str = param_1;
  _Var2 = Swift::String::get_count(SVar10);
  SVar8.bridgeObject = &DAT_e600000000000000;
  SVar8.str = (char *)0x726572616542;
  _Var3 = Swift::String::get_count(SVar8);
  if (_Var3 < _Var2) {
    SVar7.bridgeObject = &DAT_e600000000000000;
    SVar7.str = (char *)0x726572616542;
    _Var2 = Swift::String::get_count(SVar7);
    SVar11.bridgeObject = param_2;
    SVar11.str = param_1;
    CVar5.unknown = param_2;
    IVar4 = Swift::String::index((Index)0xf,_Var2,SVar11);
    FUN_1000102ac(IVar4.cmsgPointer.unknown,param_1,param_2);
    SVar9.bridgeObject = param_1;
    SVar9.str = (char *)IVar4.cmsgPointer.unknown;
    SVar8 = Swift::String::__fromSubstring(SVar9);
    _swift_bridgeObjectRelease();
    local_60 = SVar8;
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
    FUN_1004b8f18();
    SVar10 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar6 + 8))(in.unknown,CVar1.unknown);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
  }
  else {
    SVar10 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  return SVar10;
}



/* Address: 0x1004d3564 | FUN_1004d3564 */

bool FUN_1004d3564(char *param_1,CharacterSet param_2)

{
  ulong uVar1;
  bool bVar2;
  CharacterSet CVar3;
  char *pcVar4;
  CharacterSet CVar5;
  Iterator IVar6;
  undefined *puVar8;
  uint uVar10;
  long extraout_x8;
  Index after;
  CharacterSet in;
  code *pcVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  Character CVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  undefined *local_90;
  long local_88;
  String local_80;
  undefined8 local_70;
  ulong uStack_68;
  undefined *puVar7;
  void *pvVar9;
  
  CVar3 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar12 = *(long *)(CVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  in.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  pcVar4 = param_1;
  FUN_1004d32d0(param_1,param_2.unknown);
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = (char *)0x3d;
    uVar10 = 0;
    FUN_10051c750(0x3d,0xe100000000000000,param_1,param_2.unknown);
    if ((uVar10 & 0xff) != 1) {
      SVar14.bridgeObject = param_1;
      SVar14.str = pcVar4;
      CVar5.unknown = param_2.unknown;
      SVar13.str = Swift::String::get_subscript((Range<Index>)0xf,SVar14);
      SVar13.bridgeObject = pcVar4;
      SVar13 = Swift::String::__fromSubstring(SVar13);
      _swift_bridgeObjectRelease();
      local_80 = SVar13;
      CVar5 = Foundation::CharacterSet::get_whitespacesAndNewlines(CVar5);
      FUN_1004b8f18();
      local_90 = CVar5.unknown;
      SVar14 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
      puVar7 = SVar14.bridgeObject;
      pcVar11 = *(code **)(lVar12 + 8);
      CVar5 = CVar3;
      local_88 = lVar12;
      (*pcVar11)(in.unknown);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      uVar1 = (ulong)SVar14.str & 0xffffffffffff;
      if (((ulong)puVar7 & 0x2000000000000000) != 0) {
        uVar1 = (ulong)puVar7 >> 0x38 & 0xf;
      }
      if (uVar1 != 0) {
        local_70 = 0;
        IVar6.unknown = puVar7;
        local_80 = SVar14;
        uStack_68 = uVar1;
        _swift_bridgeObjectRetain();
        do {
          Swift::String::Iterator::_next(IVar6);
          if (CVar5.unknown == (undefined *)0x0) {
            _swift_bridgeObjectRelease();
            CVar5.unknown = local_80.bridgeObject;
            local_80 = SVar14;
            Foundation::CharacterSet::get_inverted(CVar5);
            uVar10 = 0;
            (extension_Foundation)::Swift::StringProtocol::_rangeOfCharacter
                      (in,(NSStringCompareOptions)0x0);
            (*pcVar11)(in.unknown,CVar3.unknown);
            _swift_bridgeObjectRelease(puVar7);
            lVar12 = local_88;
            if ((uVar10 & 0xff) == 1) goto LAB_1004d38a8;
            goto LAB_1004d36ec;
          }
          CVar15.bridgeObject = CVar5.unknown;
          CVar15.str = IVar6.unknown;
          puVar8 = CVar5.unknown;
          bVar2 = Swift::Character::get_isWhitespace(CVar15);
          _swift_bridgeObjectRelease();
          IVar6.unknown = CVar5.unknown;
          CVar5.unknown = puVar8;
        } while (!bVar2);
        pvVar9 = local_80.bridgeObject;
        _swift_bridgeObjectRelease(puVar7);
        puVar7 = pvVar9;
      }
      _swift_bridgeObjectRelease(puVar7);
      lVar12 = local_88;
    }
LAB_1004d36ec:
    uVar1 = (ulong)param_1 & 0xffffffffffff;
    if (((ulong)param_2.unknown & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_2.unknown >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
LAB_1004d38a8:
      bVar2 = false;
    }
    else {
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      do {
        SVar17.bridgeObject = param_2.unknown;
        SVar17.str = param_1;
        CVar15 = Swift::String::get_subscript(after,SVar17);
        bVar2 = Swift::Character::get_isWhitespace(CVar15);
        _swift_bridgeObjectRelease(CVar15.bridgeObject);
        if (bVar2) {
          SVar19.bridgeObject = param_1;
          SVar19.str = (char *)after.cmsgPointer.unknown;
          SVar16.str = Swift::String::get_subscript((Range<Index>)0xf,SVar19);
          SVar16.bridgeObject = (void *)after.cmsgPointer.unknown;
          SVar13 = Swift::String::__fromSubstring(SVar16);
          pvVar9 = SVar13.bridgeObject;
          _swift_bridgeObjectRelease();
          uVar1 = (ulong)SVar13.str & 0xffffffffffff;
          if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
            uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
          }
          if (uVar1 == 0) {
            _swift_bridgeObjectRelease(pvVar9);
            return false;
          }
          local_80 = SVar13;
          Foundation::CharacterSet::get_inverted(param_2);
          FUN_1004b8f18();
          uVar10 = 0;
          (extension_Foundation)::Swift::StringProtocol::_rangeOfCharacter
                    (in,(NSStringCompareOptions)0x0);
          (**(code **)(lVar12 + 8))(in.unknown,CVar3.unknown);
          _swift_bridgeObjectRelease(pvVar9);
          goto LAB_1004d3838;
        }
        SVar18.bridgeObject = param_2.unknown;
        SVar18.str = param_1;
        after = Swift::String::index(after,SVar18);
      } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
      local_80.bridgeObject = param_2.unknown;
      local_80.str = param_1;
      Foundation::CharacterSet::get_inverted((CharacterSet)after.cmsgPointer.unknown);
      FUN_1004b8f18();
      uVar10 = 0;
      (extension_Foundation)::Swift::StringProtocol::_rangeOfCharacter
                (in,(NSStringCompareOptions)0x0);
      (**(code **)(lVar12 + 8))(in.unknown,CVar3.unknown);
LAB_1004d3838:
      bVar2 = (uVar10 & 0xff) == 1;
    }
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}



/* Address: 0x1004d38dc | thunk_FUN_1004d21f8 */

void thunk_FUN_1004d21f8(void)

{
  FUN_1004d21f8();
  return;
}



/* Address: 0x1004d38e0 | FUN_1004d38e0 */

void FUN_1004d38e0(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004d3918. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(CVar1.unknown + -8))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004d391c | FUN_1004d391c */

void FUN_1004d391c(undefined8 param_1)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004d394c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 8))(param_1,CVar1.unknown);
  return;
}



/* Address: 0x1004d3950 | FUN_1004d3950 */

undefined8 FUN_1004d3950(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004d3994 | FUN_1004d3994 */

undefined8 FUN_1004d3994(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x18))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004d39d8 | FUN_1004d39d8 */

undefined8 FUN_1004d39d8(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004d3a1c | FUN_1004d3a1c */

undefined8 FUN_1004d3a1c(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x28))(param_1,param_2,CVar1.unknown);
  return param_1;
}



/* Address: 0x1004d3a60 | FUN_1004d3a60 */

void FUN_1004d3a60(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004d3a6c | FUN_1004d3a6c */

void FUN_1004d3a6c(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004d3aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x30))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004d3aa8 | FUN_1004d3aa8 */

void FUN_1004d3aa8(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1004d3ab4 | FUN_1004d3ab4 */

void FUN_1004d3ab4(undefined8 param_1,undefined8 param_2)

{
  CharacterSet CVar1;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001004d3af0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1004d3af4 | FUN_1004d3af4 */

void FUN_1004d3af4(undefined8 param_1)

{
  if (DAT_100fcc218 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cb23dc);
  return;
}



/* Address: 0x1004d3b2c | FUN_1004d3b2c */

undefined1  [16] FUN_1004d3b2c(long param_1,ulong param_2)

{
  CharacterSet CVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_28;
  
  CVar1 = Foundation::CharacterSet::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_28 = *(long *)(CVar1.unknown + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
    CVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = CVar1.unknown;
  return auVar3;
}



/* Address: 0x1004d3b94 | FUN_1004d3b94 */

void FUN_1004d3b94(void)

{
  undefined *puVar1;
  
  if (DAT_100fcc250 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fcc250 = puVar1;
  return;
}



/* Address: 0x1004d3bd4 | thunk_FUN_1004d4108 */

void thunk_FUN_1004d4108(void)

{
  FUN_1004d4108();
  return;
}



/* Address: 0x1004d3bd8 | FUN_1004d3bd8 */

void FUN_1004d3bd8(void)

{
  FUN_1004d429c();
  return;
}



/* Address: 0x1004d3bec | FUN_1004d3bec */

void FUN_1004d3bec(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  long lVar4;
  undefined1 local_48;
  undefined1 uStack_47;
  undefined1 uStack_46;
  undefined1 uStack_45;
  undefined1 uStack_44;
  undefined1 uStack_43;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 local_40;
  undefined1 local_3f;
  undefined1 local_3e;
  undefined1 local_3d;
  undefined1 local_3c;
  undefined1 local_3b;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)(param_2 >> 0x20);
  uVar3 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar3 == 0) {
      local_48 = (undefined1)param_1;
      uStack_47 = (undefined1)((ulong)param_1 >> 8);
      uStack_46 = (undefined1)((ulong)param_1 >> 0x10);
      uStack_45 = (undefined1)((ulong)param_1 >> 0x18);
      uStack_44 = (undefined1)((ulong)param_1 >> 0x20);
      uStack_43 = (undefined1)((ulong)param_1 >> 0x28);
      uStack_42 = (undefined1)((ulong)param_1 >> 0x30);
      uStack_41 = (undefined1)((ulong)param_1 >> 0x38);
      local_40 = (undefined1)param_2;
      local_3f = (undefined1)(param_2 >> 8);
      local_3e = (undefined1)(param_2 >> 0x10);
      local_3d = (undefined1)(param_2 >> 0x18);
      local_3c = (undefined1)(param_2 >> 0x20);
      local_3b = (undefined1)(param_2 >> 0x28);
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fcc258,PTR_typeMetadataAccessor_100ea9d50,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_1004d3d64;
    }
    lVar4 = (long)(int)param_1;
    param_1 = param_1 >> 0x20;
    if (param_1 < lVar4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d3d94);
      (*pcVar2)();
    }
  }
  else {
    if (uVar3 != 2) {
      CryptoKit::SHA256::typeMetadataAccessor();
      FUN_100003a00(&DAT_100fcc258,PTR_typeMetadataAccessor_100ea9d50,
                    PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
      local_48 = 0;
      uStack_47 = 0;
      uStack_46 = 0;
      uStack_45 = 0;
      uStack_44 = 0;
      uStack_43 = 0;
      uStack_42 = 0;
      uStack_41 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      CryptoKit::HashFunction::update((UnsafeRawBufferPointer)&local_48);
      goto LAB_1004d3d64;
    }
    lVar4 = *(long *)(param_1 + 0x10);
    param_1 = *(long *)(param_1 + 0x18);
  }
  FUN_1004d3d98(lVar4,param_1,param_2 & 0x3fffffffffffffff,param_3);
LAB_1004d3d64:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004d3d98 | FUN_1004d3d98 */

void FUN_1004d3d98(__DataStorage *param_1,long param_2,__DataStorage *param_3)

{
  code *pcVar1;
  UnsafeRawBufferPointer bufferPointer;
  __DataStorage *p_Var2;
  
  bufferPointer.unknown = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var2 = (__DataStorage *)0x0;
  if ((__DataStorage *)bufferPointer.unknown != (__DataStorage *)0x0) {
    p_Var2 = (__DataStorage *)
             Foundation::__DataStorage::get__offset(param_3,(__DataStorage *)bufferPointer.unknown);
    if (SBORROW8((long)param_1,(long)p_Var2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1004d3e5c);
      (*pcVar1)();
    }
    bufferPointer.unknown = bufferPointer.unknown + ((long)param_1 - (long)p_Var2);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    Foundation::__DataStorage::get__length(param_3,p_Var2);
    CryptoKit::SHA256::typeMetadataAccessor();
    FUN_100003a00(&DAT_100fcc258,PTR_typeMetadataAccessor_100ea9d50,
                  PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
    CryptoKit::HashFunction::update(bufferPointer);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004d3e58);
  (*pcVar1)();
}



/* Address: 0x1004d3e5c | FUN_1004d3e5c */

long FUN_1004d3e5c(Iterator param_1,undefined8 *param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  Iterator IVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  uVar1 = param_4 & 0xffffffffffff;
  if ((param_5 & 0x2000000000000000) != 0) {
    uVar1 = param_5 >> 0x38 & 0xf;
  }
  if (param_2 == (undefined8 *)0x0) {
    lVar5 = 0;
  }
  else {
    lVar5 = param_3;
    if (param_3 != 0) {
      if (param_3 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d3f20);
        (*pcVar2)();
      }
      IVar3.unknown = param_1.unknown;
      puVar4 = param_2;
      Swift::String::Iterator::_next(param_1);
      lVar5 = 0;
      if (puVar4 != (undefined8 *)0x0) {
        lVar6 = lVar5;
        do {
          *param_2 = IVar3.unknown;
          param_2[1] = puVar4;
          lVar5 = param_3;
          if (param_3 + -1 == lVar6) break;
          Swift::String::Iterator::_next(IVar3);
          lVar5 = lVar6 + 1;
          param_2 = param_2 + 2;
          lVar6 = lVar5;
        } while (puVar4 != (undefined8 *)0x0);
      }
    }
  }
  *(ulong *)param_1.unknown = param_4;
  *(ulong *)(param_1.unknown + 8) = param_5;
  *(ulong *)(param_1.unknown + 0x18) = uVar1;
  *(undefined8 *)(param_1.unknown + 0x10) = 0;
  return lVar5;
}



/* Address: 0x1004d3f20 | FUN_1004d3f20 */

undefined * FUN_1004d3f20(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fcc268;
    FUN_1000f7830(&DAT_100fcc268,&DAT_100c51958);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x1004d3fa0 | FUN_1004d3fa0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004d4058 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1004d3fa0(long param_1)

{
  undefined *puVar1;
  code *pcVar2;
  long *plVar3;
  NSComparisonResult NVar4;
  long *plVar5;
  undefined1 uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;
  
  plVar3 = (long *)0x0;
  FUN_1004ce850();
  plVar9 = *(long **)(param_1 + (int)plVar3[4]);
  if ((plVar9 == (long *)0x0) || (lVar8 = plVar9[2], lVar8 == 0)) {
    FUN_1004a3fb4();
    _swift_allocError(&DAT_100ed9e90,plVar3,0,0);
    uVar6 = 0xe;
    plVar9 = (long *)0x9;
LAB_1004d40cc:
    *plVar3 = (long)plVar9;
    plVar3[1] = 0;
    plVar3[2] = 0;
    plVar3[3] = 0;
    *(undefined1 *)(plVar3 + 4) = uVar6;
    _swift_willThrow();
  }
  else {
    plVar3 = plVar9;
    _swift_bridgeObjectRetain();
    puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
    uVar10 = 0xffffffffffffffff;
    plVar7 = plVar9 + 5;
    do {
      if (uVar10 - lVar8 == -1) {
        FUN_1004a3fb4();
        _swift_allocError(&DAT_100ed9e90,plVar3,0,0);
        uVar6 = 0xc;
        goto LAB_1004d40cc;
      }
      uVar10 = uVar10 + 1;
      if ((ulong)plVar9[2] <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004d4108);
        (*pcVar2)();
      }
      plVar5 = (long *)*plVar7;
      FUN_1004b8f18();
      _swift_bridgeObjectRetain(plVar5);
      NVar4 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                        (plVar3,puVar1,puVar1,plVar3,plVar3);
      _swift_bridgeObjectRelease();
      plVar3 = plVar5;
      plVar7 = plVar7 + 2;
    } while (NVar4.unknown != (undefined *)0x0);
    _swift_bridgeObjectRelease(plVar9);
  }
  return;
}



/* Address: 0x1004d4108 | FUN_1004d4108 */

undefined1  [16] FUN_1004d4108(__int64 param_1,undefined8 param_2,char **param_3,void *param_4)

{
  uint uVar1;
  int iVar2;
  Character CVar3;
  String SVar4;
  code *pcVar5;
  char **ppcVar6;
  char **ppcVar7;
  char **ppcVar8;
  __int64 _Var9;
  char **ppcVar10;
  char *pcVar11;
  void *pvVar12;
  uint uVar13;
  char *pcVar14;
  String SVar15;
  String SVar16;
  undefined1 auVar17 [16];
  String SVar18;
  String SVar19;
  undefined8 local_78;
  char *local_70;
  void *local_68;
  
  ppcVar10 = (char **)0x8000000100dab060;
  SVar15.bridgeObject = (void *)0x8000000100dab060;
  SVar15.str = (char *)0xd000000000000042;
  ppcVar6 = (char **)Swift::String::get_count(SVar15);
  if (ppcVar6 == (char **)0x0) {
    pcVar14 = *(char **)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
    ppcVar7 = (char **)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    ppcVar7 = ppcVar6;
    FUN_1004d3f20(ppcVar6,0);
    ppcVar8 = &local_70;
    ppcVar10 = ppcVar7 + 4;
    param_4 = (void *)0xd000000000000042;
    param_3 = ppcVar6;
    FUN_1004d3e5c();
    _swift_bridgeObjectRelease(local_68);
    if (ppcVar8 != ppcVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d429c);
      (*pcVar5)();
    }
    pcVar14 = ppcVar7[2];
  }
  if (pcVar14 == (char *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d4290);
    (*pcVar5)();
  }
  local_70 = (char *)0x0;
  local_68 = (void *)0xe000000000000000;
  SVar18.bridgeObject = param_3;
  SVar18.str = (char *)ppcVar10;
  Swift::String::reserveCapacity(param_1,SVar18);
  pvVar12 = local_68;
  pcVar11 = local_70;
  SVar4.bridgeObject = local_68;
  SVar4.str = local_70;
  _Var9 = Swift::String::get_count(SVar4);
  if (_Var9 < param_1) {
    iVar2 = 0;
    if (pcVar14 != (char *)0x0) {
      iVar2 = (int)(0xff / (ulong)pcVar14);
    }
    uVar13 = (uint)pcVar14;
    do {
      local_78 = 0;
      _swift_stdlib_random(&local_78,8);
      if ((uint)(byte)local_78 <= (0xff - iVar2 * uVar13 ^ 0xff)) {
        if ((char *)0xff < pcVar14) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d4294);
          (*pcVar5)();
        }
        uVar1 = 0;
        if (uVar13 != 0) {
          uVar1 = (byte)local_78 / uVar13;
        }
        pcVar11 = (char *)(ulong)((uint)(byte)local_78 - uVar1 * uVar13);
        if (ppcVar7[2] <= pcVar11) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1004d4298);
          (*pcVar5)();
        }
        pvVar12 = ((Character *)(ppcVar7 + (long)pcVar11 * 2 + 4))->bridgeObject;
        CVar3 = *(Character *)(ppcVar7 + (long)pcVar11 * 2 + 4);
        _swift_bridgeObjectRetain(pvVar12);
        SVar19.bridgeObject = param_4;
        SVar19.str = (char *)param_3;
        Swift::String::append(CVar3,SVar19);
        _swift_bridgeObjectRelease(pvVar12);
        pcVar11 = local_70;
        pvVar12 = local_68;
      }
      SVar16.bridgeObject = pvVar12;
      SVar16.str = pcVar11;
      _Var9 = Swift::String::get_count(SVar16);
    } while (_Var9 < param_1);
  }
  _swift_release(ppcVar7);
  auVar17._8_8_ = pvVar12;
  auVar17._0_8_ = pcVar11;
  return auVar17;
}



/* Address: 0x1004d429c | FUN_1004d429c */

String FUN_1004d429c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  Data DVar2;
  undefined8 uVar3;
  SHA256 SVar4;
  undefined *puVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  undefined8 auStack_e0 [4];
  undefined *local_c0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  String local_98;
  undefined *local_80;
  undefined *local_78;
  Data local_70;
  undefined8 uStack_68;
  
  SVar4 = CryptoKit::SHA256::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100ea9d50;
  lVar9 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar10 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_c0 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar8 = *(long *)(local_c0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_2);
  FUN_1004bac0c(param_1,param_2);
  FUN_100003a00(&DAT_100fcc258,puVar5,
                PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
  CryptoKit::HashFunction::init();
  FUN_1001037b4(param_1,param_2);
  FUN_1004d3bec(param_1,param_2,lVar10);
  FUN_10003bf2c(param_1,param_2);
  CryptoKit::HashFunction::_finalize();
  FUN_10003bf2c(param_1,param_2);
  (**(code **)(lVar9 + 8))(lVar10,SVar4.unknown);
  puVar1 = local_c0;
  local_80 = local_c0;
  puVar5 = &DAT_100fcc260;
  FUN_100003a00(&DAT_100fcc260,PTR_typeMetadataAccessor_100ea9d08,
                PTR_CryptoKit__CryptoKit__SHA256Digest_>Foundation__ContiguousBytes_100ea9d00);
  local_78 = puVar5;
  FUN_10000cbb0(&local_98);
  (**(code **)(lVar8 + 0x10))();
  FUN_100004640(&local_98,local_80);
  Foundation::ContiguousBytes::_withUnsafeBytes();
  FUN_100004594(&local_98);
  uVar3 = uStack_68;
  DVar2.unknown = local_70.unknown;
  FUN_1001037b4(local_70.unknown,uStack_68);
  FUN_10003bf2c(local_70.unknown,uStack_68);
  local_98 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,local_70);
  pvVar7 = local_98.bridgeObject;
  pcVar6 = local_98.str;
  local_70.unknown = (undefined *)0x2b;
  uStack_68 = 0xe100000000000000;
  local_a8 = 0x2d;
  uStack_a0 = 0xe100000000000000;
  FUN_1004b8f18();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar11 + -0x10) = pcVar6;
  *(char **)(lVar11 + -8) = pcVar6;
  *(undefined **)(lVar11 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar11 + -0x18) = pcVar6;
  SVar12 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_70,&local_a8,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208);
  _swift_bridgeObjectRelease(pvVar7);
  local_70.unknown = (undefined *)0x2f;
  uStack_68 = 0xe100000000000000;
  local_a8 = 0x5f;
  uStack_a0 = 0xe100000000000000;
  local_98 = SVar12;
  *(char **)(lVar11 + -0x10) = pcVar6;
  *(char **)(lVar11 + -8) = pcVar6;
  *(undefined **)(lVar11 + -0x20) = puVar5;
  *(char **)(lVar11 + -0x18) = pcVar6;
  SVar13 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_70,&local_a8,0,0,0,1,puVar5,puVar5);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  local_70.unknown = (undefined *)0x3d;
  uStack_68 = 0xe100000000000000;
  local_a8 = 0;
  uStack_a0 = 0xe000000000000000;
  local_98 = SVar13;
  *(char **)(lVar11 + -0x10) = pcVar6;
  *(char **)(lVar11 + -8) = pcVar6;
  *(undefined **)(lVar11 + -0x20) = puVar5;
  *(char **)(lVar11 + -0x18) = pcVar6;
  SVar12 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_70,&local_a8,0,0,0,1,puVar5,puVar5);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  FUN_10003bf2c(DVar2.unknown,uVar3);
  (**(code **)(lVar8 + 8))(lVar11,puVar1);
  return SVar12;
}



/* Address: 0x1004d4624 | FUN_1004d4624 */

undefined1  [16] FUN_1004d4624(void)

{
  return ZEXT816(0x100eda890);
}



/* Address: 0x1004d4634 | FUN_1004d4634 */

long FUN_1004d4634(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  _swift_allocObject();
  lVar1 = _TtC3MCP20InMemoryTokenStorage::token;
  lVar2 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  return unaff_x20;
}



/* Address: 0x1004d4690 | FUN_1004d4690 */

void FUN_1004d4690(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP20InMemoryTokenStorage::token;
  lVar2 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,lVar2);
  return;
}



/* Address: 0x1004d46d8 | FUN_1004d46d8 */

void FUN_1004d46d8(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar3;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_50 + -extraout_x8;
  FUN_1004d47a0(param_1,puVar3);
  lVar2 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(puVar3,0,1,lVar2);
  lVar2 = _TtC3MCP20InMemoryTokenStorage::token;
  _swift_beginAccess(unaff_x20 + _TtC3MCP20InMemoryTokenStorage::token,auStack_48,0x21,0);
  FUN_1004d47e4(puVar3,unaff_x20 + lVar2);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1004d47a0 | FUN_1004d47a0 */

undefined8 FUN_1004d47a0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004d47e4 | FUN_1004d47e4 */

undefined8 FUN_1004d47e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004d4834 | FUN_1004d4834 */

void FUN_1004d4834(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC3MCP20InMemoryTokenStorage::token;
  _swift_beginAccess(unaff_x20 + _TtC3MCP20InMemoryTokenStorage::token,auStack_48,0,0);
  FUN_1004d4888(unaff_x20 + lVar1,param_1);
  return;
}



/* Address: 0x1004d4888 | FUN_1004d4888 */

undefined8 FUN_1004d4888(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1004d48d8 | FUN_1004d48d8 */

void FUN_1004d48d8(void)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [24];
  
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1004c78dc();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(auStack_50 + -extraout_x8,1,1,lVar2);
  lVar2 = _TtC3MCP20InMemoryTokenStorage::token;
  _swift_beginAccess(unaff_x20 + _TtC3MCP20InMemoryTokenStorage::token,auStack_48,0x21,0);
  FUN_1004d47e4(auStack_50 + -extraout_x8,unaff_x20 + lVar2);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1004d4990 | FUN_1004d4990 */

void FUN_1004d4990(void)

{
  long unaff_x20;
  
  FUN_1004d49b4(unaff_x20 + _TtC3MCP20InMemoryTokenStorage::token);
  return;
}



/* Address: 0x1004d49b4 | FUN_1004d49b4 */

undefined8 FUN_1004d49b4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcb558;
  FUN_1000f7830(&DAT_100fcb558,&DAT_100c51960);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1004d49fc | FUN_1004d49fc */

void FUN_1004d49fc(void)

{
  long unaff_x20;
  
  FUN_1004d49b4(unaff_x20 + _TtC3MCP20InMemoryTokenStorage::token);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1004d4a2c | FUN_1004d4a2c */

void FUN_1004d4a2c(void)

{
  FUN_1004d4a34(0);
  return;
}



/* Address: 0x1004d4a34 | FUN_1004d4a34 */

void FUN_1004d4a34(undefined8 param_1)

{
  if (DAT_100fcc2a0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb245c);
  return;
}



/* Address: 0x1004d4a6c | FUN_1004d4a6c */

void FUN_1004d4a6c(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_1004d4ad8();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,1,&local_28,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1004d4ad8 | FUN_1004d4ad8 */

void FUN_1004d4ad8(void)

{
  Optional OVar1;
  long lVar2;
  undefined7 extraout_var;
  
  if (DAT_100fcc2b0 == 0) {
    lVar2 = 0xff;
    FUN_1004c78dc();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (lVar2 == 0) {
      DAT_100fcc2b0 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1004d4b2c | FUN_1004d4b2c */

void FUN_1004d4b2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  *(undefined8 *)(unaff_x20 + 0x38) = param_2;
  return;
}



/* Address: 0x1004d4b60 | FUN_1004d4b60 */

void FUN_1004d4b60(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  param_1[6] = param_8;
  param_1[7] = param_9;
  return;
}



/* Address: 0x1004d4b74 | FUN_1004d4b74 */

undefined1  [16] FUN_1004d4b74(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  byte bVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar5 = *unaff_x20;
  uVar1 = 0x6c7275;
  if (bVar5 != 2) {
    uVar1 = 0x6567617373656d;
  }
  puVar2 = (undefined1 *)0xe300000000000000;
  if (bVar5 != 2) {
    puVar2 = &DAT_e700000000000000;
  }
  uVar3 = 0x65646f6d;
  if (bVar5 != 0) {
    uVar3 = 0x7461746963696c65;
  }
  puVar4 = &DAT_e400000000000000;
  if (bVar5 != 0) {
    puVar4 = (undefined1 *)0xed000064496e6f69;
  }
  if (bVar5 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = uVar1;
  return auVar6;
}



/* Address: 0x1004d4bec | FUN_1004d4bec */

void FUN_1004d4bec(undefined1 *param_1,undefined1 param_2)

{
  FUN_1004d9a20();
  *param_1 = param_2;
  return;
}



/* Address: 0x1004d4c10 | FUN_1004d4c10 */

String FUN_1004d4c10(void)

{
  String SVar1;
  
  FUN_1004d9784();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1004d4c38 | FUN_1004d4c38 */

String FUN_1004d4c38(void)

{
  String SVar1;
  
  FUN_1004d9784();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1004d4c60 | thunk_FUN_1004d96c8 */

void thunk_FUN_1004d96c8(void)

{
  FUN_1004d96c8();
  return;
}



/* Address: 0x1004d4c64 | FUN_1004d4c64 */

void FUN_1004d4c64(long param_1)

{
  undefined *puVar1;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fcc330;
  FUN_1000f7830(&DAT_100fcc330,&DAT_100c519b0);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1004d9784();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar1);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[4],unaff_x20[5],&local_53,puVar1);
    local_54 = 3;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[6],unaff_x20[7],&local_54,puVar1);
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1004d4dd0 | FUN_1004d4dd0 */

void FUN_1004d4dd0(Hasher param_1)

{
  String *unaff_x20;
  
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,unaff_x20[1]);
  Swift::String::hash(param_1,unaff_x20[2]);
  Swift::String::hash(param_1,unaff_x20[3]);
  return;
}



/* Address: 0x1004d4e14 | FUN_1004d4e14 */

void FUN_1004d4e14(void)

{
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_68,*unaff_x20);
  Swift::String::hash((Hasher)auStack_68,unaff_x20[1]);
  Swift::String::hash((Hasher)auStack_68,unaff_x20[2]);
  into.unknown = auStack_68;
  Swift::String::hash(into,unaff_x20[3]);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004d4e78 | FUN_1004d4e78 */

void FUN_1004d4e78(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_1004d9b88(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = uStack_38;
    param_1[4] = local_40;
    param_1[7] = uStack_28;
    param_1[6] = uStack_30;
  }
  return;
}



/* Address: 0x1004d4eb8 | FUN_1004d4eb8 */

void FUN_1004d4eb8(void)

{
  FUN_1004d4c64();
  return;
}



/* Address: 0x1004d4ecc | FUN_1004d4ecc */

void FUN_1004d4ecc(void)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  SVar3 = unaff_x20[2];
  SVar4 = unaff_x20[3];
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_98,SVar1);
  Swift::String::hash((Hasher)auStack_98,SVar2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  into.unknown = auStack_98;
  Swift::String::hash(into,SVar4);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004d4f68 | FUN_1004d4f68 */

void FUN_1004d4f68(Hasher param_1)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String *unaff_x20;
  
  SVar1 = unaff_x20[1];
  SVar2 = unaff_x20[2];
  SVar3 = unaff_x20[3];
  Swift::String::hash(param_1,*unaff_x20);
  Swift::String::hash(param_1,SVar1);
  Swift::String::hash(param_1,SVar2);
  Swift::String::hash(param_1,SVar3);
  return;
}



/* Address: 0x1004d4fdc | FUN_1004d4fdc */

void FUN_1004d4fdc(__int64 param_1)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_98 [72];
  
  SVar1 = *unaff_x20;
  SVar2 = unaff_x20[1];
  SVar3 = unaff_x20[2];
  SVar4 = unaff_x20[3];
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_98,SVar1);
  Swift::String::hash((Hasher)auStack_98,SVar2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  into.unknown = auStack_98;
  Swift::String::hash(into,SVar4);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1004d5074 | FUN_1004d5074 */

uint FUN_1004d5074(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  uStack_48 = param_2[1];
  local_50 = *param_2;
  uStack_38 = param_2[3];
  uStack_40 = param_2[2];
  uStack_28 = param_2[5];
  local_30 = param_2[4];
  uStack_18 = param_2[7];
  uStack_20 = param_2[6];
  FUN_1004d96c8(&local_90,&local_50);
  return uVar1 & 1;
}



/* Address: 0x1004d50bc | FUN_1004d50bc */

undefined8 FUN_1004d50bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = 0xffffffffffff82ff;
  if (param_4 != 7) {
    uVar1 = 0xffffffffffff8300;
  }
  uVar3 = 0xffffffffffff82d6;
  if (param_4 != 6) {
    uVar3 = uVar1;
  }
  uVar1 = 0xffffffffffff80a5;
  if (param_4 != 4) {
    uVar1 = param_1;
  }
  if (param_4 < 6) {
    uVar3 = uVar1;
  }
  uVar1 = 0xffffffffffff80a7;
  if (param_4 != 2) {
    uVar1 = 0xffffffffffff80a6;
  }
  uVar2 = 0xffffffffffff8044;
  if (param_4 != 0) {
    uVar2 = 0xffffffffffff80a8;
  }
  if (param_4 < 2) {
    uVar1 = uVar2;
  }
  if (param_4 < 4) {
    uVar3 = uVar1;
  }
  return uVar3;
}



/* Address: 0x1004d5124 | FUN_1004d5124 */

undefined8 FUN_1004d5124(undefined8 param_1)

{
  undefined *puVar1;
  int *piVar2;
  undefined8 uVar3;
  int local_1c;
  undefined8 local_18;
  
  local_18 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  piVar2 = &local_1c;
  _swift_dynamicCast(piVar2,&local_18,puVar1,PTR___type_metadata_for_System_Errno_100eae9c8,6);
  if ((((ulong)piVar2 & 1) == 0) || (local_1c != 0x23)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



/* Address: 0x1004d5190 | FUN_1004d5190 */

undefined1  [16]
FUN_1004d5190(_StringGuts param_1,_StringGuts param_2,_StringGuts param_3,void *param_4)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar5;
  undefined8 uVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 auVar15 [16];
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  char local_60 [24];
  undefined1 auStack_48 [8];
  char *local_40;
  undefined1 *local_38;
  undefined1 *puVar4;
  
  pcVar5 = local_60;
  uVar2 = (uint)param_4 & 0xff;
  if (uVar2 < 4) {
    if (uVar2 == 1 || ((ulong)param_4 & 0xff) == 0) {
      if (((ulong)param_4 & 0xff) != 0) {
        if (param_2.unknown == (undefined *)0x0) {
          local_40 = (char *)0x0;
          local_38 = (undefined1 *)0xe000000000000000;
        }
        else {
          local_40 = (char *)0x203a;
          local_38 = &SUB_e200000000000000;
          SVar12.bridgeObject = param_2.unknown;
          SVar12.str = param_1.unknown;
          SVar19.bridgeObject = param_4;
          SVar19.str = param_3.unknown;
          Swift::String::append(SVar12,SVar19);
        }
        pcVar3 = local_40;
        pcVar5 = param_3.unknown;
        puVar4 = local_38;
        local_40 = (char *)0x2064696c61766e49;
        local_38 = (undefined1 *)0xef74736575716552;
        goto LAB_1004d547c;
      }
      if (param_2.unknown == (undefined *)0x0) {
        local_40 = (char *)0x0;
        local_38 = (undefined1 *)0xe000000000000000;
      }
      else {
        local_40 = (char *)0x203a;
        local_38 = &SUB_e200000000000000;
        SVar9.bridgeObject = param_2.unknown;
        SVar9.str = param_1.unknown;
        SVar16.bridgeObject = param_4;
        SVar16.str = param_3.unknown;
        Swift::String::append(SVar9,SVar16);
      }
      pcVar1 = "Parse error: Invalid JSON";
      uVar6 = 0xd000000000000019;
    }
    else {
      if (uVar2 != 2) {
        if (param_2.unknown == (undefined *)0x0) {
          local_40 = (char *)0x0;
          local_38 = (undefined1 *)0xe000000000000000;
        }
        else {
          local_40 = (char *)0x203a;
          local_38 = &SUB_e200000000000000;
          SVar13.bridgeObject = param_2.unknown;
          SVar13.str = param_1.unknown;
          SVar20.bridgeObject = param_4;
          SVar20.str = param_3.unknown;
          Swift::String::append(SVar13,SVar20);
        }
        uVar6 = 0x2064696c61766e49;
        uVar7 = 0x736d61726170;
        goto LAB_1004d5474;
      }
      if (param_2.unknown == (undefined *)0x0) {
        local_40 = (char *)0x0;
        local_38 = (undefined1 *)0xe000000000000000;
      }
      else {
        local_40 = (char *)0x203a;
        local_38 = &SUB_e200000000000000;
        SVar10.bridgeObject = param_2.unknown;
        SVar10.str = param_1.unknown;
        SVar17.bridgeObject = param_4;
        SVar17.str = param_3.unknown;
        Swift::String::append(SVar10,SVar17);
      }
      pcVar1 = "Method not found";
      uVar6 = 0xd000000000000010;
    }
    pcVar3 = local_40;
    pcVar5 = param_3.unknown;
    puVar4 = local_38;
    local_40 = (char *)uVar6;
    local_38 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
LAB_1004d547c:
    SVar8.bridgeObject = puVar4;
    SVar8.str = pcVar3;
LAB_1004d5484:
    SVar22.bridgeObject = param_4;
    SVar22.str = pcVar5;
    Swift::String::append(SVar8,SVar22);
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (uVar2 < 6) {
      if (uVar2 == 4) {
        if (param_2.unknown == (undefined *)0x0) {
          local_40 = (char *)0x0;
          local_38 = (undefined1 *)0xe000000000000000;
        }
        else {
          local_40 = (char *)0x203a;
          local_38 = &SUB_e200000000000000;
          SVar11.bridgeObject = param_2.unknown;
          SVar11.str = param_1.unknown;
          SVar18.bridgeObject = param_4;
          SVar18.str = param_3.unknown;
          Swift::String::append(SVar11,SVar18);
        }
        uVar6 = 0x6c616e7265746e49;
        uVar7 = 0x726f72726520;
LAB_1004d5474:
        pcVar3 = local_40;
        pcVar5 = param_3.unknown;
        puVar4 = local_38;
        local_40 = (char *)uVar6;
        local_38 = (undefined1 *)(uVar7 | 0xee00000000000000);
        goto LAB_1004d547c;
      }
      local_40 = (char *)0x0;
      local_38 = (undefined1 *)0xe000000000000000;
      pcVar5 = param_3.unknown;
      Swift::_StringGuts::grow(0x10,param_2);
      _swift_bridgeObjectRelease(local_38);
      local_40 = (char *)0x6520726576726553;
      local_38 = (undefined1 *)0xee00203a726f7272;
      param_1.unknown = param_2.unknown;
    }
    else {
      if (uVar2 != 6) {
        if (uVar2 != 7) {
          local_40 = (char *)0xd000000000000011;
          local_38 = (undefined1 *)0x8000000100dab0d0;
          goto LAB_1004d5494;
        }
        local_40 = (char *)0x0;
        local_38 = (undefined1 *)0xe000000000000000;
        Swift::_StringGuts::grow(0x13,param_2);
        _swift_bridgeObjectRelease(local_38);
        local_40 = (char *)0xd000000000000011;
        local_38 = (undefined1 *)0x8000000100dab0b0;
        _swift_getErrorValue(param_1.unknown,auStack_48);
        SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
        puVar4 = SVar8.bridgeObject;
        goto LAB_1004d5484;
      }
      local_40 = (char *)0x0;
      local_38 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1c,param_2);
      _swift_bridgeObjectRelease(local_38);
      local_40 = (char *)0xd00000000000001a;
      local_38 = (undefined1 *)0x8000000100dab0f0;
      pcVar5 = param_3.unknown;
      param_3.unknown = param_2.unknown;
    }
    SVar14.bridgeObject = param_3.unknown;
    SVar14.str = param_1.unknown;
    SVar21.bridgeObject = param_4;
    SVar21.str = pcVar5;
    Swift::String::append(SVar14,SVar21);
  }
LAB_1004d5494:
  auVar15._8_8_ = local_38;
  auVar15._0_8_ = local_40;
  return auVar15;
}



/* Address: 0x1004d54a8 | FUN_1004d54a8 */

String FUN_1004d54a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  String SVar1;
  char *pcVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  void *pvVar7;
  char *pcVar8;
  char *pcVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  undefined1 local_88 [24];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  char *local_48;
  void *local_40;
  
  if (param_4 < 4) {
    pcVar8 = (char *)0xd00000000000002d;
    pcVar2 = "Invalid method parameter(s)";
    if (param_4 != 2) {
      pcVar8 = (char *)0xd00000000000001b;
      pcVar2 = "Internal JSON-RPC error";
    }
    pcVar9 = (char *)0xd000000000000039;
    pcVar3 = "The JSON sent is not a valid Request object";
    if (param_4 != 0) {
      pcVar9 = (char *)0xd00000000000002b;
      pcVar3 = "The method does not exist or is not available";
    }
    if (param_4 < 2) {
      pcVar2 = pcVar3 + 0x10;
      pcVar8 = pcVar9;
    }
    SVar13.bridgeObject = (void *)((ulong)pcVar2 | 0x8000000000000000);
    SVar13.str = pcVar8;
    return SVar13;
  }
  if (param_4 < 6) {
    pcVar8 = (char *)0xd000000000000017;
    pcVar2 = "Server-defined error occurred";
    if (param_4 != 4) {
      pcVar8 = (char *)0xd00000000000001d;
      pcVar2 = " via external URL";
    }
    SVar10.bridgeObject = (void *)((ulong)pcVar2 | 0x8000000000000000);
    SVar10.str = pcVar8;
    return SVar10;
  }
  if (param_4 == 6) {
    SVar11.bridgeObject = (void *)0x8000000100dab180;
    SVar11.str = (char *)0xd000000000000041;
    return SVar11;
  }
  if (param_4 == 7) {
    local_68 = param_1;
    _swift_errorRetain();
    puVar4 = &DAT_100fcb578;
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    puVar5 = &DAT_100fcc340;
    FUN_1000f7830(&DAT_100fcc340,&DAT_100c519c0);
    puVar6 = &local_60;
    _swift_dynamicCast(puVar6,&local_68,puVar4,puVar5,0xe);
    pvVar7 = local_40;
    pcVar8 = local_48;
    if (((ulong)puVar6 & 1) == 0) {
      local_40 = (void *)0x0;
      uStack_58 = 0;
      local_60 = 0;
      local_48 = (char *)0x0;
      uStack_50 = 0;
      FUN_1000fb4c4(&local_60,&DAT_100fcc348,&DAT_100c519c8);
    }
    else {
      FUN_100004640(&local_60,local_48);
      Foundation::LocalizedError::_get_failureReason();
      FUN_100004594(&local_60);
      if (pvVar7 != (void *)0x0) {
        SVar1.bridgeObject = pvVar7;
        SVar1.str = pcVar8;
        return SVar1;
      }
    }
    _swift_getErrorValue(param_1,auStack_70,local_88);
    SVar13 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    return SVar13;
  }
  SVar12.bridgeObject = (void *)0x8000000100dab150;
  SVar12.str = (char *)0xd000000000000027;
  return SVar12;
}



/* Address: 0x1004d56c8 | FUN_1004d56c8 */

undefined1  [16] FUN_1004d56c8(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  String SVar9;
  String SVar10;
  undefined1 auVar11 [16];
  String SVar12;
  String SVar13;
  String SVar14;
  
  uVar1 = (uint)param_4 & 0xff;
  if (uVar1 < 3) {
    uVar5 = 0x8000000100dab3a0;
    uVar4 = 0xd00000000000003e;
    if (uVar1 != 2) {
      uVar4 = 0;
      uVar5 = 0;
    }
    uVar2 = 0x8000000100dab3e0;
    uVar3 = 0xd000000000000040;
    if (uVar1 != 1) {
      uVar2 = uVar5;
      uVar3 = uVar4;
    }
    uVar4 = 0x8000000100dab430;
    uVar5 = 0xd000000000000038;
    if (((ulong)param_4 & 0xff) != 0) {
      uVar4 = uVar2;
      uVar5 = uVar3;
    }
    auVar6._8_8_ = uVar4;
    auVar6._0_8_ = uVar5;
    return auVar6;
  }
  if (uVar1 == 3) {
    auVar8._8_8_ = 0x8000000100dab360;
    auVar8._0_8_ = 0xd00000000000003c;
    return auVar8;
  }
  if (uVar1 != 6) {
    uVar5 = 0x8000000100dab2d0;
    uVar4 = 0xd00000000000001e;
    if ((param_2.unknown != (undefined *)0x0 || param_1 != 0) || param_3 != (char *)0x0) {
      uVar4 = 0;
      uVar5 = 0;
    }
    uVar2 = 0;
    if (uVar1 == 8) {
      uVar2 = uVar4;
    }
    uVar4 = 0;
    if (uVar1 == 8) {
      uVar4 = uVar5;
    }
    auVar7._8_8_ = uVar4;
    auVar7._0_8_ = uVar2;
    return auVar7;
  }
  if (*(long *)(param_3 + 0x10) == 0) {
    auVar11._8_8_ = 0x8000000100dab330;
    auVar11._0_8_ = 0xd00000000000002b;
    return auVar11;
  }
  uVar4 = *(undefined8 *)(param_3 + 0x48);
  SVar10 = *(String *)(param_3 + 0x40);
  _swift_bridgeObjectRetain(uVar4);
  Swift::_StringGuts::grow(0x39,param_2);
  SVar9.bridgeObject = &DAT_e600000000000000;
  SVar9.str = (char *)0x207469736956;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar10,SVar13);
  _swift_bridgeObjectRelease(uVar4);
  SVar10.bridgeObject = (void *)0x8000000100dab2f0;
  SVar10.str = (char *)0xd000000000000031;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar10,SVar14);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1004d587c | FUN_1004d587c */

void FUN_1004d587c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1004d5190(*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined1 *)(unaff_x20 + 3));
  return;
}



/* Address: 0x1004d588c | FUN_1004d588c */

void FUN_1004d588c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1004d54a8(*unaff_x20,param_2,param_3,*(undefined1 *)(unaff_x20 + 3));
  return;
}


