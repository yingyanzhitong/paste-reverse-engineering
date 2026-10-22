/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100abff6c | FUN_100abff6c */

void FUN_100abff6c(void)

{
  FUN_100abfed0();
  return;
}



/* Address: 0x100abff80 | FUN_100abff80 */

void FUN_100abff80(void)

{
  FUN_100abfee8();
  return;
}



/* Address: 0x100abff94 | FUN_100abff94 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_100abff94(undefined *param_1,undefined *param_2,uint param_3,uint param_4,undefined8 param_5)

{
  POSIXError PVar1;
  Code CVar2;
  URL UVar3;
  undefined *puVar4;
  URL UVar5;
  undefined7 extraout_var;
  Code CVar6;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  DVar7;
  char *pcVar8;
  FILE *pFVar9;
  undefined *puVar10;
  undefined *puVar11;
  NSString *pNVar12;
  ID IVar13;
  undefined4 extraout_var_01;
  undefined1 *puVar14;
  undefined1 *puVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  URL UVar19;
  undefined8 unaff_x20;
  ulong uVar20;
  ulong uVar21;
  long unaff_x21;
  long lVar22;
  ulong uVar23;
  undefined *self;
  long lVar24;
  String SVar25;
  undefined1 auStack_180 [8];
  ulong local_178;
  undefined *local_170;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  local_168;
  undefined1 *local_160;
  long local_158;
  undefined *local_150;
  undefined *local_148;
  uint local_13c;
  undefined8 local_138;
  undefined *local_118 [21];
  long local_70;
  undefined7 extraout_var_00;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_13c = param_4;
  local_138 = param_5;
  PVar1 = Foundation::POSIXError::typeMetadataAccessor();
  lVar24 = *(long *)(PVar1.unknown + -8);
  puVar14 = auStack_180 + -(*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0);
  CVar2 = Foundation::CocoaError::Code::typeMetadataAccessor();
  puVar15 = puVar14 + -(*(long *)(*(long *)(CVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  local_168.unknown = puVar15;
  local_150 = (undefined *)Foundation::CocoaError::typeMetadataAccessor();
  local_158 = *(long *)(local_150 + -8);
  lVar16 = *(long *)(local_158 + 0x40);
  local_160 = puVar15 + -(lVar16 + 0xfU & 0xfffffffffffffff0);
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Load size is inaccurate */
  UVar19.unknown = UVar3.unknown[-8];
  lVar22 = *(long *)(UVar19.unknown + 0x40);
  lVar16 = (long)(puVar15 + -(lVar16 + 0xfU & 0xfffffffffffffff0)) -
           (lVar22 + 0xfU & 0xfffffffffffffff0);
  if (param_3 == 0) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,UVar3.unknown,0,0);
    *UVar3.unknown = 6;
    _swift_willThrow();
    goto LAB_100ac0788;
  }
  local_178 = (ulong)param_3;
  puVar4 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  UVar5.unknown = (undefined *)objc_stub::init(puVar4);
  local_170 = param_1;
  local_148 = UVar5.unknown;
  FUN_100adc5e0();
  if (((ulong)UVar5.unknown & 0xff) == 0) {
    CVar2.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar5);
    DVar7.unknown = local_168.unknown;
    CVar2.unknown._1_7_ = extraout_var;
    if (unaff_x21 == 0) {
      if (!CVar2.unknown._0_1_) goto LAB_100ac0340;
      Foundation::CocoaError::Code::get_fileWriteFileExists(CVar2);
      puVar4 = &DAT_100ff8438;
      FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
      _swift_initStackObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      *(String *)(puVar4 + 0x20) = SVar25;
      SVar25 = Foundation::URL::get_path((URL)SVar25.str);
      *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
      *(String *)(puVar4 + 0x30) = SVar25;
      FUN_100abfbb8(puVar4);
      _swift_setDeallocating(puVar4);
      FUN_100ac0850((String *)(puVar4 + 0x20));
      FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                    PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                   );
      PVar1.unknown = local_150;
      puVar14 = local_160;
      (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar7);
      Foundation::CocoaError::get__nsError((CocoaError)DVar7.unknown);
      _swift_willThrow();
LAB_100ac04fc:
      pcVar18 = *(code **)(local_158 + 8);
      UVar19.unknown = PVar1.unknown;
    }
    else {
      _swift_errorRelease(unaff_x21);
LAB_100ac0340:
      self = local_148;
      UVar19.unknown = param_2;
      FUN_100adecf8();
      SVar25 = Foundation::URL::get_path(UVar19);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      puVar4 = self;
      _objc_retainAutorelease();
      pcVar8 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)puVar4,pNVar12);
      pFVar9 = _fopen(pcVar8,"wb+");
      puVar4 = local_170;
      if (pFVar9 != (FILE *)0x0) {
        puVar10 = local_170;
        FUN_100abe4ec(local_170,local_178,local_13c & 1,local_138,unaff_x20,pFVar9);
        _fclose(pFVar9);
        goto LAB_100ac05f8;
      }
      UVar19.unknown._0_4_ = Darwin::get_errno();
      UVar19.unknown._4_4_ = extraout_var_01;
      SVar25 = Foundation::URL::get_path(UVar19);
      UVar3.unknown = UVar19.unknown;
      FUN_100adebd4(puVar14,UVar19.unknown,SVar25.str,SVar25.bridgeObject);
      Foundation::POSIXError::get__nsError((POSIXError)UVar3.unknown);
      _swift_willThrow();
      pcVar18 = *(code **)(lVar24 + 8);
    }
    (*pcVar18)(puVar14,PVar1.unknown);
  }
  else {
    if (((uint)UVar5.unknown & 0xff) == 1) {
      (**(code **)(UVar19.unknown + 0x10))(lVar16,param_2,UVar3.unknown);
      uVar17 = (ulong)(byte)UVar19.unknown[0x50];
      uVar20 = uVar17 + 0x18 & (uVar17 ^ 0xffffffffffffffff);
      puVar11 = &DAT_100f30d08;
      _swift_allocObject(&DAT_100f30d08,uVar20 + lVar22,uVar17 | 7);
      self = local_148;
      *(undefined **)(puVar11 + 0x10) = local_148;
      (**(code **)(UVar19.unknown + 0x20))(puVar11 + uVar20,lVar16,UVar3.unknown);
      pcVar18 = FUN_100abfe74;
    }
    else {
      CVar6.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar5);
      DVar7.unknown = local_168.unknown;
      CVar6.unknown._1_7_ = extraout_var_00;
      if (unaff_x21 == 0) {
        if (CVar6.unknown._0_1_) {
          Foundation::CocoaError::Code::get_fileWriteFileExists(CVar6);
          puVar4 = &DAT_100ff8438;
          FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
          _swift_initStackObject();
          *(undefined8 *)(puVar4 + 0x18) = 2;
          *(undefined8 *)(puVar4 + 0x10) = 1;
          SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar4 + 0x20) = SVar25;
          SVar25 = Foundation::URL::get_path((URL)SVar25.str);
          *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(String *)(puVar4 + 0x30) = SVar25;
          FUN_100abfbb8(puVar4);
          _swift_setDeallocating(puVar4);
          FUN_100ac0850((String *)(puVar4 + 0x20));
          FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                        PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                       );
          PVar1.unknown = local_150;
          puVar14 = local_160;
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar7);
          Foundation::CocoaError::get__nsError((CocoaError)DVar7.unknown);
          _swift_willThrow();
          goto LAB_100ac04fc;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = 0;
      }
      (**(code **)(UVar19.unknown + 0x10))(lVar16,param_2,UVar3.unknown);
      uVar20 = (ulong)(byte)UVar19.unknown[0x50];
      uVar21 = uVar20 + 0x10 & (uVar20 ^ 0xffffffffffffffff);
      uVar17 = uVar21 + lVar22;
      uVar23 = uVar17 & 0xfffffffffffffff8;
      puVar11 = &DAT_100f30ce0;
      _swift_allocObject(&DAT_100f30ce0,uVar23 + 0x10,uVar20 | 7);
      (**(code **)(UVar19.unknown + 0x20))(puVar11 + uVar21,lVar16,UVar3.unknown);
      puVar11[uVar17] = 0;
      *(undefined **)(puVar11 + uVar23 + 8) = local_148;
      pcVar18 = FUN_100abf9a0;
      self = local_148;
    }
    puVar4 = local_170;
    puVar10 = local_170;
    FUN_100abec90(local_170,local_178,local_13c & 1,local_138,pcVar18,puVar11);
    if (unaff_x21 != 0) {
      _swift_release(puVar11);
      goto LAB_100ac0788;
    }
    _swift_release(puVar11);
LAB_100ac05f8:
    FUN_100ae18b8();
    puVar11 = puVar4;
    FUN_100adc5e0();
    if (((uint)puVar11 & 0xff) < 2) {
      FUN_100ab7db0(0);
      FUN_100003a00(&DAT_100ff82a0,FUN_100ab7db0,&TargetProtocolConformanceDescriptor_100c94198);
      UVar19.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      SVar25 = Foundation::URL::get_path(UVar19);
      pNVar12 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar25.bridgeObject);
      local_118[0] = (undefined *)0x0;
      IVar13 = objc_stub::setAttributes_ofItemAtPath_error_
                         ((ID)self,UVar19.unknown,pNVar12,local_118);
      UVar19.unknown = local_118[0];
      if ((IVar13 & 1) == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_bridgeObjectRelease(puVar4);
        goto LAB_100ac0788;
      }
    }
    else {
      FUN_100ae0024(puVar4,param_2,0);
    }
    _swift_bridgeObjectRelease(puVar4);
    UVar19.unknown = puVar10;
  }
LAB_100ac0788:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return UVar19.unknown;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ac07cc | FUN_100ac07cc */

void FUN_100ac07cc(undefined8 param_1,undefined4 param_2)

{
  FUN_100abec90(param_1,param_2);
  return;
}



/* Address: 0x100ac07e4 | FUN_100ac07e4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ac07e4(void)

{
  URL UVar1;
  ulong uVar2;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ac0850 | FUN_100ac0850 */

undefined8 FUN_100ac0850(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff8440;
  FUN_1000f7830(&DAT_100ff8440,&DAT_100c94328);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ac0898 | FUN_100ac0898 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ac0898(void)

{
  URL UVar1;
  long unaff_x20;
  ulong uVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ac0904 | FUN_100ac0904 */

/* WARNING: Removing unreachable block (ram,0x000100ac0de4) */
/* WARNING: Type propagation algorithm not settling */

undefined1  [16] FUN_100ac0904(UTF8View param_1,undefined *param_2)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  __uint8 _Var3;
  Range<__int64> RVar4;
  undefined **ppuVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  undefined *puVar7;
  UnsafeBufferPointer<__int8> UVar8;
  undefined *puVar9;
  undefined6 *puVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  undefined6 local_f0;
  undefined2 uStack_ea;
  undefined6 uStack_e8;
  undefined2 uStack_e2;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined6 local_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined **local_90;
  undefined8 local_88;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_f0 = SUB86(param_1.unknown,0);
  uStack_ea = (undefined2)((ulong)param_1.unknown >> 0x30);
  uStack_e8 = SUB86(param_2,0);
  uStack_e2 = (undefined2)((ulong)param_2 >> 0x30);
  local_e0 = param_1.unknown;
  puStack_d8 = param_2;
  _swift_bridgeObjectRetain(param_2);
  RVar4.unknown = &DAT_100ff8498;
  FUN_1000f7830(&DAT_100ff8498,&DAT_100c94358);
  ppuVar5 = &local_d0;
  _swift_dynamicCast(ppuVar5,&local_f0,PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0,
                     RVar4.unknown,6);
  if ((int)ppuVar5 != 0) {
    FUN_100076508(&local_d0,&local_a0);
    FUN_100004640(&local_a0,local_88);
    Foundation::ContiguousBytes::_withUnsafeBytes();
    FUN_100004594(&local_a0);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
    goto LAB_100ac0d40;
  }
  local_b0 = 0;
  puStack_c8 = (undefined *)0x0;
  local_d0 = (undefined *)0x0;
  uStack_b8 = 0;
  uStack_c0 = 0;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)&DAT_100c94360;
  FUN_1000fb4c4(&local_d0,&DAT_100ff84a0);
  if (((ulong)param_2 >> 0x3c & 1) == 0) {
    if (((ulong)param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        puVar9 = param_2;
        UVar8 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      else {
        UVar8.unknown = (undefined *)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
        puVar9 = param_1.unknown & 0xffffffffffff;
      }
      puVar15 = (undefined *)0x0;
      if (UVar8.unknown != (undefined *)0x0) {
        puVar15 = puVar9 + UVar8.unknown;
      }
      FUN_100ad8ff4();
      puVar9 = puVar15;
    }
    else {
      puVar15 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
      puStack_c8 = (undefined *)((ulong)param_2 & 0xffffffffffffff);
      local_d0 = param_1.unknown;
      FUN_100aca094(&local_a0,&local_d0);
      UVar8.unknown = (undefined *)CONCAT26(uStack_9a,local_a0);
      puVar9 = (undefined *)CONCAT26(uStack_92,uStack_98);
    }
    if ((ulong)puVar9 >> 0x3c < 0xf) goto LAB_100ac0d40;
    puVar7 = param_1.unknown & 0xffffffffffff;
    if (((ulong)param_2 & 0x2000000000000000) != 0) {
      puVar7 = (undefined *)((ulong)param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar15 = param_2;
    puVar7 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    UVar8.unknown = (undefined *)0x0;
    puVar9 = (undefined *)0xf000000000000000;
  }
  FUN_10046be70();
  local_90 = &local_e0;
  pcVar2 = FUN_10046c3e0;
  puVar10 = &local_a0;
  local_d0 = puVar7;
  puStack_c8 = puVar15;
  FUN_100464ed8();
  uVar12 = (uint)((ulong)puStack_c8 >> 0x20);
  uVar13 = uVar12 >> 0x1e;
  if (uVar12 >> 0x1e < 2) {
    if (uVar13 == 0) {
      puVar15 = (undefined *)((ulong)puStack_c8 >> 0x30 & 0xff);
    }
    else {
      iVar14 = (int)((ulong)local_d0 >> 0x20);
      if (SBORROW4(iVar14,(int)local_d0)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0de0);
        (*pcVar2)();
      }
      puVar15 = (undefined *)(long)(iVar14 - (int)local_d0);
    }
    if (RVar4.unknown == puVar15) goto LAB_100ac0b28;
LAB_100ac0b04:
    if (uVar13 == 2) {
      uVar11 = *(ulong *)(local_d0 + 0x18);
    }
    else if (uVar13 == 1) {
      uVar11 = (long)local_d0 >> 0x20;
    }
    else {
      uVar11 = (ulong)puStack_c8 >> 0x30 & 0xff;
    }
LAB_100ac0d1c:
    if ((long)uVar11 < (long)RVar4.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0dd8);
      (*pcVar2)();
    }
    Foundation::Data::_Representation::_replaceSubrange(RVar4,uVar11,(_Representation)0x0,0);
LAB_100ac0d38:
    _swift_bridgeObjectRelease(puVar10);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
  else {
    if (uVar13 == 2) {
      if (SBORROW8(*(long *)(local_d0 + 0x18),*(long *)(local_d0 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0ddc);
        (*pcVar2)();
      }
      if (RVar4.unknown != (undefined *)(*(long *)(local_d0 + 0x18) - *(long *)(local_d0 + 0x10)))
      goto LAB_100ac0b04;
    }
    else if (RVar4.unknown != (undefined *)0x0) {
      uVar11 = 0;
      goto LAB_100ac0d1c;
    }
LAB_100ac0b28:
    uVar11 = (ulong)pcVar2 & 0xffffffffffff;
    if (((ulong)puVar10 & 0x2000000000000000) != 0) {
      uVar11 = (ulong)puVar10 >> 0x38 & 0xf;
    }
    uStack_e8 = 0;
    local_f0 = 0;
    uStack_ea = 0;
    if (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0) {
      uVar19 = 0;
      uVar12 = (uint)((ulong)pcVar2 >> 0x3b) & 1;
      if (((ulong)puVar10 & 0x1000000000000000) == 0) {
        uVar12 = 1;
      }
      uVar17 = 4L << uVar12;
      do {
        uVar18 = (ulong)after.cmsgPointer.unknown & 0xc;
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (uVar18 == uVar17) {
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
        }
        uVar16 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar11 <= uVar16) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0da4);
          (*pcVar2)();
        }
        if (((ulong)puVar10 >> 0x3c & 1) == 0) {
          if (((ulong)puVar10 >> 0x3d & 1) != 0) {
            local_a0 = SUB86(pcVar2,0);
            uStack_9a = (undefined2)((ulong)pcVar2 >> 0x30);
            uStack_98 = (undefined6)((ulong)puVar10 & 0xffffffffffffff);
            uStack_92 = (undefined2)(((ulong)puVar10 & 0xffffffffffffff) >> 0x30);
            _Var3 = *(__uint8 *)((long)&local_a0 + uVar16);
            goto joined_r0x000100ac0c1c;
          }
          UVar6.unknown = (undefined *)(((ulong)puVar10 & 0xfffffffffffffff) + 0x20);
          if (((ulong)pcVar2 >> 0x3c & 1) == 0) {
            UVar6 = Swift::_StringObject::get_sharedUTF8((_StringObject)pcVar2);
          }
          _Var3 = UVar6.unknown[uVar16];
          if (uVar18 != uVar17) goto LAB_100ac0bdc;
LAB_100ac0c20:
          FUN_1000740a8(after.cmsgPointer.unknown,pcVar2,puVar10);
          if (((ulong)puVar10 >> 0x3c & 1) != 0) goto LAB_100ac0c38;
LAB_100ac0be0:
          after.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)pcVar2);
joined_r0x000100ac0c1c:
          if (uVar18 == uVar17) goto LAB_100ac0c20;
LAB_100ac0bdc:
          if (((ulong)puVar10 >> 0x3c & 1) == 0) goto LAB_100ac0be0;
LAB_100ac0c38:
          if (uVar11 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0dac);
            (*pcVar2)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)pcVar2);
        }
        *(__uint8 *)((long)&local_f0 + (uVar19 & 0xff)) = _Var3;
        uVar12 = ((uint)uVar19 & 0xff) + 1;
        uVar19 = (ulong)uVar12;
        if ((uVar12 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac0da8);
          (*pcVar2)();
        }
        if ((uVar12 & 0xff) == 0xe) {
          local_a0 = local_f0;
          uStack_9a = uStack_ea;
          uStack_98 = uStack_e8;
          Foundation::Data::_Representation::append
                    ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 0xe));
          uVar19 = 0;
        }
      } while (uVar11 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
      if ((uVar19 & 0xff) != 0) {
        local_a0 = local_f0;
        uStack_9a = uStack_ea;
        uStack_98 = uStack_e8;
        Foundation::Data::_Representation::append
                  ((UnsafeRawBufferPointer)&local_a0,
                   (_Representation)((char)&local_a0 + (char)uVar19));
        FUN_10003bf18(UVar8.unknown,puVar9);
        goto LAB_100ac0d38;
      }
    }
    _swift_bridgeObjectRelease(puVar10);
    FUN_10003bf18(UVar8.unknown,puVar9);
    UVar8.unknown = local_d0;
    puVar9 = puStack_c8;
  }
LAB_100ac0d40:
  puStack_c8 = puVar9;
  local_d0 = UVar8.unknown;
  auVar1._8_8_ = puStack_c8;
  auVar1._0_8_ = local_d0;
  FUN_1001037b4(local_d0,puStack_c8);
  _swift_bridgeObjectRelease(param_2);
  FUN_10003bf2c(local_d0,puStack_c8);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return auVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ac0df0 | FUN_100ac0df0 */

void FUN_100ac0df0(char *param_1,void *param_2,URL param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6)

{
  URL UVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  undefined1 auStack_70 [8];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  Foundation::URL::appendingPathComponent(SVar4,param_3);
  FUN_100ac0ec4(param_1,param_2,auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_4,param_5,
                param_6);
  (**(code **)(lVar3 + 8))(auStack_70 + -(lVar2 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x100ac0ec4 | FUN_100ac0ec4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100ac1280) */

void FUN_100ac0ec4(char *param_1,void *param_2,undefined *param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined4 uVar1;
  undefined8 uVar2;
  mode_t mVar3;
  bool bVar4;
  uint uVar5;
  Code CVar6;
  CocoaError CVar7;
  URL UVar8;
  POSIXError PVar9;
  Date DVar10;
  undefined *puVar11;
  URL self;
  undefined7 extraout_var;
  URL UVar12;
  NSString *pNVar13;
  ID IVar14;
  CocoaError CVar15;
  undefined *puVar16;
  URL self_00;
  char *pcVar17;
  FILE *pFVar18;
  POSIXError PVar19;
  char *pcVar20;
  long lVar22;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  undefined8 unaff_x20;
  ulong uVar26;
  undefined *unaff_x21;
  long lVar27;
  String *pSVar28;
  long lVar29;
  void *pvVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  undefined8 auStack_270 [4];
  undefined *local_250;
  long local_248;
  long local_240;
  long local_238;
  undefined *local_230;
  long local_228;
  long local_220;
  long local_218;
  char *local_210;
  undefined8 local_208;
  undefined4 local_1fc;
  undefined8 local_1f8;
  void *local_1f0;
  undefined8 local_1a0;
  void *pvStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  __darwin_time_t _Stack_180;
  long lStack_178;
  __darwin_time_t local_170;
  long lStack_168;
  __darwin_time_t _Stack_160;
  long lStack_158;
  __darwin_time_t local_150;
  long lStack_148;
  off_t oStack_140;
  blkcnt_t bStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  __int64_t _Stack_120;
  __int64_t _Stack_118;
  long local_70;
  undefined4 extraout_var_00;
  void *pvVar21;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_210 = param_1;
  local_208 = param_6;
  local_1fc = param_4;
  local_1f8 = param_5;
  local_1f0 = param_2;
  CVar6 = Foundation::CocoaError::Code::typeMetadataAccessor();
  CVar15.unknown =
       (undefined *)
       ((long)&local_250 -
       (*(long *)(*(long *)(CVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  CVar7 = Foundation::CocoaError::typeMetadataAccessor();
  lVar22 = *(long *)(CVar7.unknown + -8);
  lVar23 = (long)CVar15.unknown - (*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar8 = Foundation::URL::typeMetadataAccessor();
  local_218 = *(long *)(UVar8.unknown + -8);
  local_220 = *(long *)(local_218 + 0x40);
  lVar31 = lVar23 - (local_220 + 0xfU & 0xfffffffffffffff0);
  PVar9 = Foundation::POSIXError::typeMetadataAccessor();
  lVar33 = *(long *)(PVar9.unknown + -8);
  lVar29 = lVar31 - (*(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar32 = *(long *)(DVar10.unknown + -8);
  lVar27 = lVar29 - (*(long *)(lVar32 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self.unknown = (undefined *)objc_stub::init(puVar11);
  bVar4 = Foundation::URL::_checkResourceIsReachable(self);
  CVar6.unknown = (undefined *)CONCAT71(extraout_var,bVar4);
  if (unaff_x21 == (undefined *)0x0) {
    local_248 = lVar29;
    local_240 = lVar33;
    local_238 = lVar31;
    local_230 = DVar10.unknown;
    local_228 = lVar32;
    if (!bVar4) goto LAB_100ac10c0;
    UVar12.unknown = param_3;
    FUN_100ae123c();
    uVar5 = (uint)UVar12.unknown;
    if ((uVar5 & 0xff) != 2) {
      SVar34 = Foundation::URL::get_path(UVar12);
      pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      local_250 = unaff_x21;
      _swift_bridgeObjectRelease(SVar34.bridgeObject);
      IVar14 = objc_stub::FUN_100c05be0((ID)self.unknown,pNVar13);
      unaff_x21 = local_250;
      if ((int)IVar14 != 0) goto LAB_100ac108c;
      Foundation::CocoaError::Code::get_fileReadNoPermission((Code)0x0);
      puVar11 = &DAT_100ff8438;
      FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
      _swift_initStackObject();
      *(undefined8 *)(puVar11 + 0x18) = 2;
      *(undefined8 *)(puVar11 + 0x10) = 1;
      SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      UVar8.unknown = SVar34.str;
      pSVar28 = (String *)(puVar11 + 0x20);
      *pSVar28 = SVar34;
      goto LAB_100ac1118;
    }
LAB_100ac108c:
    FUN_100aca348(0);
    FUN_100adefd8(lVar27,param_3);
    if (unaff_x21 != (undefined *)0x0) goto LAB_100ac11ac;
    if ((uVar5 & 0xff) == 1) {
      puVar11 = (undefined *)0x0;
    }
    else {
      puVar11 = param_3;
      FUN_100ae14f0();
    }
    puVar16 = &_OBJC_CLASS___NSFileManager;
    _objc_allocWithZone();
    self_00.unknown = (undefined *)objc_stub::init(puVar16);
    SVar34 = Foundation::URL::get_path(self_00);
    pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    _objc_retainAutorelease();
    pcVar17 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self_00.unknown,pNVar13);
    uStack_128._0_4_ = 0;
    uStack_128._4_4_ = 0;
    local_130._0_4_ = 0;
    local_130._4_4_ = 0;
    _Stack_118 = 0;
    _Stack_120 = 0;
    lStack_148 = 0;
    local_150 = 0;
    bStack_138 = 0;
    oStack_140 = 0;
    lStack_168 = 0;
    local_170 = 0;
    lStack_158 = 0;
    _Stack_160 = 0;
    uStack_188._0_4_ = 0;
    uStack_188._4_4_ = 0;
    local_190._0_4_ = 0;
    local_190._4_4_ = 0;
    lStack_178 = 0;
    _Stack_180 = 0;
    pvStack_198 = (void *)0x0;
    local_1a0 = (char *)0x0;
    _lstat(pcVar17,(stat *)&local_1a0);
    pvVar30 = local_1f0;
    pcVar17 = local_210;
    lVar23 = local_218;
    lVar22 = local_238;
    mVar3 = local_1a0._4_2_;
    if (((ulong)UVar12.unknown & 0xff) != 0) {
      if ((uVar5 & 0xff) == 1) {
        SVar34.bridgeObject = (void *)0xe100000000000000;
        SVar34.str = (char *)0x2f;
        SVar36.bridgeObject = local_1f0;
        SVar36.str = local_210;
        pcVar20 = local_210;
        pvVar21 = local_1f0;
        bVar4 = Swift::String::hasSuffix(SVar34,SVar36);
        if (bVar4) {
          _swift_bridgeObjectRetain(pvVar30);
        }
        else {
          local_1a0 = pcVar17;
          pvStack_198 = pvVar30;
          _swift_bridgeObjectRetain(pvVar30);
          SVar35.bridgeObject = (void *)0xe100000000000000;
          SVar35.str = (char *)0x2f;
          SVar37.bridgeObject = pvVar21;
          SVar37.str = pcVar20;
          Swift::String::append(SVar35,SVar37);
          pcVar17 = local_1a0;
          pvVar30 = pvStack_198;
        }
        uVar2 = local_1f8;
        uVar1 = local_1fc;
        puVar16 = local_230;
        *(undefined8 *)(lVar27 + -0x10) = local_208;
        *(undefined8 *)(lVar27 + -8) = unaff_x20;
        FUN_100ac35f8(pcVar17,pvVar30,1,puVar11,lVar27,mVar3,uVar1,uVar2);
        (**(code **)(local_228 + 8))(lVar27,puVar16);
        _swift_bridgeObjectRelease(pvVar30);
      }
      else {
        (**(code **)(local_218 + 0x10))(local_238,param_3,UVar8.unknown);
        uVar25 = (ulong)*(byte *)(lVar23 + 0x50);
        uVar26 = uVar25 + 0x18 & (uVar25 ^ 0xffffffffffffffff);
        puVar16 = &DAT_100f30d30;
        _swift_allocObject(&DAT_100f30d30,uVar26 + local_220,uVar25 | 7);
        *(undefined **)(puVar16 + 0x10) = self.unknown;
        (**(code **)(lVar23 + 0x20))(puVar16 + uVar26,lVar22,UVar8.unknown);
        *(code **)(lVar27 + -0x18) = FUN_100aca3f8;
        *(undefined **)(lVar27 + -0x10) = puVar16;
        *(undefined8 *)(lVar27 + -0x20) = local_208;
        FUN_100ac52c4(local_210,local_1f0,2,puVar11,lVar27,mVar3,local_1fc,local_1f8);
        (**(code **)(local_228 + 8))(lVar27,local_230);
        _swift_release(puVar16);
      }
      goto LAB_100ac11ac;
    }
    SVar34 = Foundation::URL::get_path((URL)0x0);
    pNVar13 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    _objc_retainAutorelease();
    pcVar17 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self.unknown,pNVar13);
    pFVar18 = _fopen(pcVar17,"rb");
    pvVar30 = local_1f0;
    if (pFVar18 == (FILE *)0x0) {
      PVar19.unknown._0_4_ = Darwin::get_errno();
      PVar19.unknown._4_4_ = extraout_var_00;
      SVar34 = Foundation::URL::get_path((URL)PVar19.unknown);
      lVar22 = local_248;
      FUN_100adebd4(local_248,PVar19.unknown,SVar34.str,SVar34.bridgeObject);
      Foundation::POSIXError::get__nsError(PVar19);
      _swift_willThrow();
      (**(code **)(local_240 + 8))(lVar22,PVar9.unknown);
    }
    else {
      *(FILE **)(lVar27 + -8) = pFVar18;
      *(undefined8 *)(lVar27 + -0x10) = local_1f8;
      *(undefined8 *)(lVar27 + -0x18) = unaff_x20;
      *(undefined8 *)(lVar27 + -0x20) = local_208;
      FUN_100ac1614(local_210,pvVar30,0,puVar11,lVar27,mVar3,local_1fc);
      _fclose(pFVar18);
    }
    pcVar24 = *(code **)(local_228 + 8);
    CVar7.unknown = local_230;
  }
  else {
    _swift_errorRelease();
    CVar6.unknown = unaff_x21;
LAB_100ac10c0:
    Foundation::CocoaError::Code::get_fileReadNoSuchFile(CVar6);
    puVar11 = &DAT_100ff8438;
    FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
    _swift_initStackObject();
    *(undefined8 *)(puVar11 + 0x18) = 2;
    *(undefined8 *)(puVar11 + 0x10) = 1;
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    UVar8.unknown = SVar34.str;
    pSVar28 = (String *)(puVar11 + 0x20);
    *pSVar28 = SVar34;
LAB_100ac1118:
    SVar34 = Foundation::URL::get_path(UVar8);
    *(undefined **)(puVar11 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(String *)(puVar11 + 0x30) = SVar34;
    FUN_100abfbb8(puVar11);
    _swift_setDeallocating(puVar11);
    FUN_1000fb4c4(pSVar28,&DAT_100ff8440,&DAT_100c94328);
    FUN_100aca1ec();
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )CVar15.unknown);
    Foundation::CocoaError::get__nsError(CVar15);
    _swift_willThrow();
    pcVar24 = *(code **)(lVar22 + 8);
    lVar27 = lVar23;
  }
  (*pcVar24)(lVar27,CVar7.unknown);
LAB_100ac11ac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ac1614 | FUN_100ac1614 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100ac33a4) */
/* WARNING: Removing unreachable block (ram,0x000100ac35dc) */
/* WARNING: Removing unreachable block (ram,0x000100ac35e8) */

void FUN_100ac1614(__DataStorage *param_1,undefined1 *param_2,uint param_3,ulong param_4,
                  undefined8 param_5,uint param_6,char param_7,size_t param_8,ID param_9,
                  long param_10,__DataStorage *param_11,ulong param_12)

{
  long *plVar1;
  undefined8 *puVar2;
  size_t sVar3;
  undefined1 uVar4;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  bool bVar19;
  Deallocator DVar20;
  __uint16 _Var21;
  int iVar22;
  undefined4 uVar23;
  undefined7 extraout_var;
  undefined *puVar24;
  size_t sVar25;
  __DataStorage *p_Var26;
  __DataStorage *p_Var27;
  char *pcVar28;
  undefined4 extraout_var_00;
  ID IVar29;
  undefined *puVar30;
  undefined *puVar31;
  __DataStorage *p_Var32;
  long lVar33;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  off_t oVar34;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined1 *puVar35;
  size_t sVar36;
  __DataStorage _Var37;
  uint uVar38;
  int iVar39;
  long lVar40;
  ulong uVar41;
  uint uVar42;
  undefined4 uVar43;
  ulong uVar44;
  undefined *unaff_x21;
  FILE *pFVar45;
  undefined1 *puVar46;
  ulong uVar47;
  ulong uVar48;
  long lVar49;
  undefined2 uVar50;
  undefined8 *puVar51;
  undefined2 uVar52;
  ulong uVar53;
  undefined1 uVar54;
  uint uVar55;
  ID IVar56;
  undefined8 uVar57;
  undefined8 uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  size_t local_590;
  ulong local_588 [4];
  undefined4 local_564;
  __DataStorage *local_560;
  undefined4 local_558;
  undefined4 local_554;
  undefined1 *local_550;
  undefined1 *local_548;
  long *local_540;
  undefined8 *local_538;
  uint local_52c;
  ID local_528;
  uint local_51c;
  ulong local_518;
  undefined1 *local_510;
  __DataStorage *local_508;
  ulong local_500;
  undefined8 uStack_4f8;
  undefined8 local_480;
  undefined8 local_478;
  char local_469;
  undefined2 local_468;
  undefined2 local_466;
  ulong local_460;
  ulong uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined2 local_440;
  undefined2 local_43e;
  ulong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined1 auStack_418 [24];
  undefined *local_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long local_3e0;
  __DataStorage local_3d0 [14];
  undefined2 uStack_3c2;
  undefined4 uStack_3c0;
  undefined2 uStack_3bc;
  undefined2 uStack_3ba;
  code *local_3b8;
  undefined *local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  ulong local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  __DataStorage local_340 [5];
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined2 local_324;
  undefined2 local_322;
  __DataStorage *local_320;
  undefined1 *puStack_318;
  __DataStorage *local_310;
  undefined1 *local_308;
  undefined8 local_300;
  undefined4 local_2d8;
  undefined2 uStack_2d4;
  undefined2 uStack_2d2;
  undefined2 uStack_2d0;
  undefined2 uStack_2ce;
  undefined2 uStack_2cc;
  undefined2 uStack_2ca;
  undefined4 local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined2 local_2ba;
  __DataStorage *local_2b8;
  undefined1 *puStack_2b0;
  __DataStorage *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 auStack_228 [104];
  long local_1c0;
  long lStack_1b8;
  ulong local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  code *pcStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  __DataStorage *local_100;
  undefined1 *puStack_f8;
  __DataStorage *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  __DataStorage *local_b0;
  undefined1 *puStack_a8;
  __DataStorage *p_Stack_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long local_88;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  local_88 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar20 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar40 = *(long *)(CONCAT71(extraout_var,DVar20.value) + -8);
  lVar49 = -(*(long *)(lVar40 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar51 = (undefined8 *)((long)&local_590 + lVar49);
  puVar24 = &DAT_100f30df8;
  _swift_allocObject(&DAT_100f30df8,0x20,7);
  local_508 = param_11;
  local_500 = param_12;
  *(__DataStorage **)(puVar24 + 0x10) = param_11;
  *(ulong *)(puVar24 + 0x18) = param_12;
  if (*(char *)(param_10 + _TtC13ZIPFoundation7Archive::accessMode) == '\x01') {
    puVar30 = puVar24;
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar30,0,0);
    *puVar30 = 1;
    _swift_willThrow();
    goto LAB_100ac32ac;
  }
  local_510 = param_2;
  if (param_9 != 0) {
    uVar53 = param_4;
    if ((param_3 & 0xff) == 1) {
      uVar53 = 1;
    }
    objc_stub::setTotalUnitCount_(param_9,uVar53);
  }
  lVar17 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_528 = param_9;
  plVar1 = (long *)(param_10 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
  lStack_1b8 = plVar1[1];
  local_1c0 = *plVar1;
  lStack_1a8 = plVar1[3];
  local_1b0 = plVar1[2];
  local_1a0 = plVar1[4];
  uVar53 = local_1b0 & 0xffffffff;
  puVar2 = (undefined8 *)(param_10 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  uStack_248 = puVar2[9];
  local_250 = puVar2[8];
  uStack_238 = puVar2[0xb];
  uStack_240 = puVar2[10];
  local_230 = *(undefined4 *)(puVar2 + 0xc);
  uStack_288 = puVar2[1];
  local_290 = *puVar2;
  pcStack_278 = (code *)puVar2[3];
  uStack_280 = puVar2[2];
  uStack_268 = puVar2[5];
  local_270 = (undefined *)puVar2[4];
  uStack_258 = puVar2[7];
  uStack_260 = puVar2[6];
  local_51c = param_3;
  local_518 = param_4;
  if (((ulong)puVar2[9] >> 0x3c < 0xf) && (uVar53 = puVar2[7], (long)uVar53 < 0)) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac33c0);
    (*pcVar18)();
  }
  pFVar45 = *(FILE **)(param_10 + _TtC13ZIPFoundation7Archive::archiveFile);
  local_52c = param_6;
  FUN_100abcbb8(&local_1c0,local_3d0);
  FUN_1000f8cac(&local_290,local_3d0,&DAT_100ff82d0,&DAT_100c94208);
  _fseeko(pFVar45,uVar53,0);
  if ((ulong)puVar2[9] >> 0x3c < 0xf) {
    puVar46 = (undefined1 *)puVar2[6];
    if ((long)puVar46 < 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac33c4);
      (*pcVar18)();
    }
  }
  else {
    puVar46 = (undefined1 *)(ulong)*(uint *)((long)plVar1 + 0xc);
  }
  pFVar45 = *(FILE **)(param_10 + lVar17);
  puVar35 = puVar46;
  local_540 = plVar1;
  local_538 = puVar2;
  _swift_slowAlloc(puVar46,0xffffffffffffffff);
  sVar25 = _fread(puVar35,1,(size_t)puVar46,pFVar45);
  iVar22 = _ferror(pFVar45);
  if (0 < iVar22) {
    _swift_slowDealloc(puVar35,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar35,0,0);
    *puVar35 = 0;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
    goto LAB_100ac32ac;
  }
  local_548 = puVar46;
  *puVar51 = FUN_10094a398;
  *(undefined8 *)((long)local_588 + lVar49) = 0;
  (**(code **)(lVar40 + 0x68))
            (puVar51,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
             ,CONCAT71(extraout_var,DVar20.value));
  FUN_100abfa10(puVar35,sVar25,puVar51);
  _fseeko(*(FILE **)(param_10 + lVar17),uVar53,0);
  p_Var26 = (__DataStorage *)_ftello(*(FILE **)(param_10 + lVar17));
  if ((long)p_Var26 < 0) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,p_Var26,0,0);
    *p_Var26 = (__DataStorage)0x1;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
LAB_100ac19f8:
    FUN_10003bf2c(puVar35,sVar25);
    goto LAB_100ac32ac;
  }
  p_Var27 = p_Var26;
  FUN_100ad5fe0();
  uVar23 = SUB84(p_Var27,0);
  local_554 = uVar23;
  FUN_100ad610c();
  puVar46 = local_510;
  uVar53 = local_518;
  local_558 = uVar23;
  if ((long)local_518 < 0) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3524);
    (*pcVar18)();
  }
  local_560 = p_Var26;
  local_550 = puVar35;
  _swift_bridgeObjectRetain_n(local_510,2);
  p_Var26 = param_1;
  FUN_100ac0904();
  uVar47 = 0xffffffff;
  if (uVar53 < 0xffffffff) {
    uVar52 = 0;
    uVar55 = 0;
    uVar23 = 0;
    uVar50 = 0x14;
    uVar41 = 0;
    uVar47 = uVar53;
  }
  else {
    uVar50 = 0x2d;
    uVar52 = 0x14;
    uVar55 = 0xffffffff;
    uVar23 = 0x100001;
    uVar41 = uVar53;
  }
  uVar38 = (uint)((ulong)puVar46 >> 0x20);
  uVar42 = uVar38 >> 0x1e;
  if (uVar38 >> 0x1e < 2) {
    if (uVar42 == 0) {
      uVar53 = (ulong)puVar46 >> 0x30 & 0xff;
    }
    else {
      iVar22 = (int)((ulong)p_Var26 >> 0x20);
      if (SBORROW4(iVar22,(int)p_Var26)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3550);
        (*pcVar18)();
      }
      uVar53 = (ulong)(iVar22 - (int)p_Var26);
LAB_100ac1a60:
      if ((long)uVar53 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3528);
        (*pcVar18)();
      }
      if (uVar53 >> 0x10 != 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac1a70);
        (*pcVar18)();
      }
    }
  }
  else {
    if (uVar42 == 2) {
      uVar53 = *(long *)(p_Var26 + 0x18) - *(long *)(p_Var26 + 0x10);
      if (SBORROW8(*(long *)(p_Var26 + 0x18),*(long *)(p_Var26 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac1a50);
        (*pcVar18)();
      }
      goto LAB_100ac1a60;
    }
    uVar53 = 0;
  }
  if (local_518 < 0xffffffff) {
    p_Var27 = (__DataStorage *)0x0;
    puVar35 = (undefined1 *)0xc000000000000000;
  }
  else {
    local_440 = (undefined2)uVar23;
    local_43e = (undefined2)((uint)uVar23 >> 0x10);
    local_430 = 0;
    uStack_428 = 0;
    local_420 = 0;
    p_Var27 = p_Var26;
    puVar35 = puVar46;
    local_438 = uVar41;
    FUN_100adacb4();
  }
  local_2d8 = 0x4034b50;
  uStack_2d2 = 0x800;
  local_564 = 0;
  if (param_7 != '\0' && (local_51c & 0xff) == 0) {
    local_564 = 8;
  }
  uStack_2d0 = (undefined2)local_564;
  uStack_2ce = (undefined2)local_558;
  uStack_2cc = (undefined2)local_554;
  local_2c8 = 0;
  local_2c0 = (undefined4)uVar47;
  local_2bc = (undefined2)uVar53;
  local_298 = 0;
  local_90 = 0;
  uStack_c8 = CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,CONCAT22(uStack_2ce,uStack_2d0)));
  local_d0 = CONCAT26(0x800,CONCAT24(uVar50,0x4034b50));
  uStack_b8 = CONCAT26(uVar52,CONCAT24(local_2bc,local_2c0));
  lStack_c0 = (ulong)uVar55 << 0x20;
  uStack_2d4 = uVar50;
  local_2c4 = uVar55;
  local_2ba = uVar52;
  local_2b8 = p_Var26;
  puStack_2b0 = puVar46;
  local_2a8 = p_Var27;
  local_2a0 = puVar35;
  local_b0 = p_Var26;
  puStack_a8 = puVar46;
  p_Stack_a0 = p_Var27;
  puStack_98 = puVar35;
  FUN_100ad63a8();
  puVar46 = local_510;
  IVar56 = local_528;
  pFVar45 = *(FILE **)(param_10 + lVar17);
  uVar55 = (uint)((ulong)puVar35 >> 0x20);
  uVar38 = uVar55 >> 0x1e;
  if (uVar55 >> 0x1e < 2) {
    if (uVar38 == 0) {
      local_3d0[0] = SUB81(p_Var27,0);
      local_3d0[1] = SUB81((ulong)p_Var27 >> 8,0);
      local_3d0[2] = SUB81((ulong)p_Var27 >> 0x10,0);
      local_3d0[3] = SUB81((ulong)p_Var27 >> 0x18,0);
      local_3d0[4] = SUB81((ulong)p_Var27 >> 0x20,0);
      local_3d0[5] = SUB81((ulong)p_Var27 >> 0x28,0);
      local_3d0[6] = SUB81((ulong)p_Var27 >> 0x30,0);
      local_3d0[7] = SUB81((ulong)p_Var27 >> 0x38,0);
      local_3d0[8] = SUB81(puVar35,0);
      local_3d0[9] = SUB81((ulong)puVar35 >> 8,0);
      local_3d0[10] = SUB81((ulong)puVar35 >> 0x10,0);
      local_3d0[0xb] = SUB81((ulong)puVar35 >> 0x18,0);
      local_3d0[0xc] = SUB81((ulong)puVar35 >> 0x20,0);
      local_3d0[0xd] = SUB81((ulong)puVar35 >> 0x28,0);
      if (((ulong)puVar35 & 0xff000000000000) != 0) {
        _fwrite(local_3d0,1,(ulong)puVar35 >> 0x30 & 0xff,pFVar45);
      }
    }
    else {
      iVar22 = (int)p_Var27;
      lVar40 = (long)iVar22;
      lVar49 = ((long)p_Var27 >> 0x20) - lVar40;
      if ((long)p_Var27 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3554);
        (*pcVar18)();
      }
      p_Var26 = p_Var27;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var27);
      if (p_Var26 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        puVar46 = local_510;
        IVar56 = local_528;
      }
      else {
        p_Var32 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var26);
        if (SBORROW8(lVar40,(long)p_Var32)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3560);
          (*pcVar18)();
        }
        p_Var26 = p_Var26 + (lVar40 - (long)p_Var32);
        lVar40 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var32);
        puVar46 = local_510;
        IVar56 = local_528;
        if (p_Var26 != (__DataStorage *)0x0) {
          if (lVar49 <= lVar40) {
            lVar40 = lVar49;
          }
          if (lVar40 != 0) {
            iVar39 = (int)((ulong)p_Var27 >> 0x20);
            if (SBORROW4(iVar39,iVar22)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3578);
              (*pcVar18)();
            }
            sVar36 = (size_t)(iVar39 - iVar22);
            goto LAB_100ac1cf8;
          }
        }
      }
    }
  }
  else if (uVar38 == 2) {
    lVar49 = *(long *)(p_Var27 + 0x10);
    lVar40 = *(long *)(p_Var27 + 0x18);
    p_Var26 = p_Var27;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var27);
    if (p_Var26 == (__DataStorage *)0x0) {
      p_Var26 = (__DataStorage *)0x0;
      p_Var32 = (__DataStorage *)0x0;
    }
    else {
      p_Var32 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var26);
      if (SBORROW8(lVar49,(long)p_Var32)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac355c);
        (*pcVar18)();
      }
      p_Var26 = p_Var26 + (lVar49 - (long)p_Var32);
    }
    lVar33 = lVar40 - lVar49;
    if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3558);
      (*pcVar18)();
    }
    lVar49 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var32);
    puVar46 = local_510;
    IVar56 = local_528;
    if (p_Var26 != (__DataStorage *)0x0) {
      if (lVar33 <= lVar49) {
        lVar49 = lVar33;
      }
      if (lVar49 != 0) {
        sVar36 = *(long *)(p_Var27 + 0x18) - *(long *)(p_Var27 + 0x10);
        if (SBORROW8(*(long *)(p_Var27 + 0x18),*(long *)(p_Var27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3564);
          (*pcVar18)();
        }
LAB_100ac1cf8:
        puVar46 = local_510;
        IVar56 = local_528;
        _fwrite(p_Var26,1,sVar36,pFVar45);
      }
    }
  }
  iVar22 = _ferror(pFVar45);
  uVar4 = (undefined1)sVar25;
  uVar5 = (undefined1)(sVar25 >> 8);
  uVar6 = (undefined1)(sVar25 >> 0x10);
  uVar7 = (undefined1)(sVar25 >> 0x18);
  uVar8 = (undefined1)(sVar25 >> 0x20);
  uVar9 = (undefined1)(sVar25 >> 0x28);
  uVar55 = (uint)(sVar25 >> 0x20);
  if (0 < iVar22) {
    _swift_bridgeObjectRelease();
    FUN_100abcb78();
    unaff_x21 = &DAT_100f31588;
    _swift_allocError(&DAT_100f31588,puVar46,0,0);
    *puVar46 = 1;
    _swift_willThrow();
    FUN_100aca454(&local_2d8);
    FUN_10003bf2c(p_Var27,puVar35);
    goto LAB_100ac1d88;
  }
  FUN_10003bf2c(p_Var27,puVar35);
  uVar53 = local_518;
  if ((local_51c & 0xff) == 0) {
    if (param_7 == '\x01') {
      puVar30 = &DAT_100f30d58;
      _swift_allocObject(&DAT_100f30d58,0x18,7);
      *(undefined8 *)(puVar30 + 0x10) = 0;
      puVar31 = &DAT_100f30e20;
      _swift_allocObject(&DAT_100f30e20,0x20,7);
      *(undefined **)(puVar31 + 0x10) = puVar30;
      *(long *)(puVar31 + 0x18) = param_10;
      uStack_3c0 = (undefined4)IVar56;
      uStack_3bc = (undefined2)(IVar56 >> 0x20);
      uStack_3ba = (undefined2)(IVar56 >> 0x30);
      local_3b8 = FUN_100acc688;
      local_3b0 = puVar24;
      _swift_retain(puVar30);
      _swift_retain(param_10);
      uVar23 = 0;
      FUN_100ad4034(0,uVar53,param_8,0,FUN_100acc6b4,local_3d0,FUN_100acc6a0,puVar31);
      if (unaff_x21 != (undefined *)0x0) {
        _swift_bridgeObjectRelease(local_510);
        FUN_100aca454(&local_2d8);
        _swift_release(puVar30);
        _swift_release(puVar31);
        goto LAB_100ac1d88;
      }
      _swift_beginAccess(puVar30 + 0x10,auStack_418,0,0);
      uVar53 = *(ulong *)(puVar30 + 0x10);
      _swift_release(puVar30);
      _swift_release(puVar31);
    }
    else {
      sVar36 = param_8;
      FUN_100aba2a0(local_518,param_8,IVar56,param_10,local_508,local_500);
      if (unaff_x21 != (undefined *)0x0) goto LAB_100ac2140;
      uVar23 = (undefined4)sVar36;
    }
LAB_100ac2a4c:
    oVar34 = _ftello(*(FILE **)(param_10 + lVar17));
    if (oVar34 < 0) {
      puVar46 = local_510;
      _swift_bridgeObjectRelease();
      FUN_100ab8c74();
      unaff_x21 = &DAT_100f31130;
      _swift_allocError(&DAT_100f31130,puVar46,0,0);
      *puVar46 = 1;
      _swift_willThrow();
      p_Var26 = (__DataStorage *)&local_2d8;
    }
    else {
      _fseeko(*(FILE **)(param_10 + lVar17),(off_t)local_560,0);
      if ((long)uVar53 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3568);
        (*pcVar18)();
      }
      puVar46 = local_510;
      FUN_100ac0904();
      uVar47 = 0xffffffff;
      bVar19 = 0xfffffffe < local_518 || 0xfffffffe < uVar53;
      if (bVar19) {
        uVar54 = 0x2d;
        uVar50 = 0x14;
        uVar48 = 0xffffffff;
        uVar43 = 0x100001;
        uVar41 = local_518;
        uVar44 = uVar53;
      }
      else {
        uVar50 = 0;
        uVar43 = 0;
        uVar54 = 0x14;
        uVar41 = 0;
        uVar44 = 0;
        uVar48 = uVar53;
        uVar47 = local_518;
      }
      uVar38 = (uint)((ulong)puVar46 >> 0x20);
      uVar42 = uVar38 >> 0x1e;
      if (uVar38 >> 0x1e < 2) {
        if (uVar42 == 0) {
          uVar53 = (ulong)puVar46 >> 0x30 & 0xff;
        }
        else {
          iVar22 = (int)((ulong)param_1 >> 0x20);
          if (SBORROW4(iVar22,(int)param_1)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac358c);
            (*pcVar18)();
          }
          uVar53 = (ulong)(iVar22 - (int)param_1);
LAB_100ac2b5c:
          if ((long)uVar53 < 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac356c);
            (*pcVar18)();
          }
          if (uVar53 >> 0x10 != 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac2b6c);
            (*pcVar18)();
          }
        }
      }
      else {
        if (uVar42 == 2) {
          uVar53 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac2b4c);
            (*pcVar18)();
          }
          goto LAB_100ac2b5c;
        }
        uVar53 = 0;
      }
      if (bVar19) {
        local_468 = (undefined2)uVar43;
        local_466 = (undefined2)((uint)uVar43 >> 0x10);
        local_450 = 0;
        local_448 = 0;
        p_Var26 = param_1;
        puVar35 = puVar46;
        local_460 = uVar41;
        uStack_458 = uVar44;
        FUN_100adacb4();
      }
      else {
        p_Var26 = (__DataStorage *)0x0;
        puVar35 = (undefined1 *)0xc000000000000000;
      }
      local_340[0] = (__DataStorage)0x50;
      local_340[1] = (__DataStorage)0x4b;
      local_340[2] = (__DataStorage)0x3;
      local_340[3] = (__DataStorage)0x4;
      uStack_33b = 0;
      uStack_33a = 0;
      uStack_339 = 8;
      uStack_338 = (undefined1)local_564;
      uStack_337 = (undefined1)((uint)local_564 >> 8);
      uStack_336 = (undefined1)local_558;
      uStack_335 = (undefined1)((uint)local_558 >> 8);
      uStack_334 = (undefined1)local_554;
      uStack_333 = (undefined1)((uint)local_554 >> 8);
      local_32c = (undefined4)uVar48;
      local_328 = (undefined4)uVar47;
      local_324 = (undefined2)uVar53;
      local_300 = 0;
      uStack_118 = CONCAT26(uStack_332,
                            CONCAT15(uStack_333,
                                     CONCAT14(uStack_334,
                                              CONCAT13(uStack_335,
                                                       CONCAT12(uStack_336,(short)local_564)))));
      local_120 = CONCAT17(8,(uint7)CONCAT14(uVar54,0x4034b50));
      uStack_108 = CONCAT26(uVar50,CONCAT24(local_324,local_328));
      local_110 = CONCAT44(local_32c,uVar23);
      local_e0 = 0;
      local_340[4] = (__DataStorage)uVar54;
      local_330 = uVar23;
      local_322 = uVar50;
      local_320 = param_1;
      puStack_318 = puVar46;
      local_310 = p_Var26;
      local_308 = puVar35;
      local_100 = param_1;
      puStack_f8 = puVar46;
      local_f0 = p_Var26;
      puStack_e8 = puVar35;
      FUN_100ad63a8();
      pFVar45 = *(FILE **)(param_10 + lVar17);
      uVar38 = (uint)((ulong)puVar35 >> 0x20);
      uVar42 = uVar38 >> 0x1e;
      if (uVar38 >> 0x1e < 2) {
        if (uVar42 == 0) {
          local_3d0[0] = SUB81(p_Var26,0);
          local_3d0[1] = SUB81((ulong)p_Var26 >> 8,0);
          local_3d0[2] = SUB81((ulong)p_Var26 >> 0x10,0);
          local_3d0[3] = SUB81((ulong)p_Var26 >> 0x18,0);
          local_3d0[4] = SUB81((ulong)p_Var26 >> 0x20,0);
          local_3d0[5] = SUB81((ulong)p_Var26 >> 0x28,0);
          local_3d0[6] = SUB81((ulong)p_Var26 >> 0x30,0);
          local_3d0[7] = SUB81((ulong)p_Var26 >> 0x38,0);
          local_3d0[8] = SUB81(puVar35,0);
          local_3d0[9] = SUB81((ulong)puVar35 >> 8,0);
          local_3d0[10] = SUB81((ulong)puVar35 >> 0x10,0);
          local_3d0[0xb] = SUB81((ulong)puVar35 >> 0x18,0);
          local_3d0[0xc] = SUB81((ulong)puVar35 >> 0x20,0);
          local_3d0[0xd] = SUB81((ulong)puVar35 >> 0x28,0);
          if (((ulong)puVar35 & 0xff000000000000) != 0) {
            sVar36 = (ulong)puVar35 >> 0x30 & 0xff;
            p_Var27 = local_3d0;
LAB_100ac2d8c:
            _fwrite(p_Var27,1,sVar36,pFVar45);
          }
        }
        else {
          iVar22 = (int)p_Var26;
          lVar40 = (long)iVar22;
          lVar49 = ((long)p_Var26 >> 0x20) - lVar40;
          if ((long)p_Var26 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3590);
            (*pcVar18)();
          }
          p_Var27 = p_Var26;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var26);
          if (p_Var27 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          }
          else {
            p_Var32 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var27);
            if (SBORROW8(lVar40,(long)p_Var32)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35b4);
              (*pcVar18)();
            }
            p_Var27 = p_Var27 + (lVar40 - (long)p_Var32);
            lVar40 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var32);
            if (p_Var27 != (__DataStorage *)0x0) {
              if (lVar49 <= lVar40) {
                lVar40 = lVar49;
              }
              if (lVar40 != 0) {
                iVar39 = (int)((ulong)p_Var26 >> 0x20);
                if (SBORROW4(iVar39,iVar22)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35d8);
                  (*pcVar18)();
                }
                sVar36 = (size_t)(iVar39 - iVar22);
                goto LAB_100ac2d8c;
              }
            }
          }
        }
      }
      else if (uVar42 == 2) {
        lVar49 = *(long *)(p_Var26 + 0x10);
        lVar40 = *(long *)(p_Var26 + 0x18);
        p_Var27 = p_Var26;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var26);
        p_Var32 = (__DataStorage *)0x0;
        if (p_Var27 != (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar49,(long)p_Var32)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35b0);
            (*pcVar18)();
          }
          p_Var27 = p_Var27 + (lVar49 - (long)p_Var32);
        }
        lVar33 = lVar40 - lVar49;
        if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3594);
          (*pcVar18)();
        }
        lVar49 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)puVar35 & 0x3fffffffffffffff),p_Var32);
        if (p_Var27 != (__DataStorage *)0x0) {
          if (lVar33 <= lVar49) {
            lVar49 = lVar33;
          }
          if (lVar49 != 0) {
            sVar36 = *(long *)(p_Var26 + 0x18) - *(long *)(p_Var26 + 0x10);
            if (SBORROW8(*(long *)(p_Var26 + 0x18),*(long *)(p_Var26 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac2d28);
              (*pcVar18)();
            }
            goto LAB_100ac2d8c;
          }
        }
      }
      iVar22 = _ferror(pFVar45);
      puVar46 = (undefined1 *)CONCAT44(extraout_var_03,iVar22);
      if (0 < iVar22) {
        FUN_100abcb78();
        unaff_x21 = &DAT_100f31588;
        _swift_allocError(&DAT_100f31588,puVar46,0,0);
        *puVar46 = 1;
        _swift_willThrow();
        FUN_100aca454(&local_2d8);
        FUN_100aca454(local_340);
        FUN_10003bf2c(p_Var26,puVar35);
        goto LAB_100ac1d88;
      }
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var26,puVar35);
      _fseeko(*(FILE **)(param_10 + lVar17),oVar34,0);
      uVar38 = local_51c;
      pFVar45 = *(FILE **)(param_10 + lVar17);
      local_400 = (undefined *)0x0;
      if (uVar55 >> 0x1e < 2) {
        if (uVar55 >> 0x1e != 0) {
          lVar49 = (long)(int)local_550;
          lVar40 = (long)local_550 >> 0x20;
          if (lVar40 < lVar49) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35c8);
            (*pcVar18)();
          }
          goto LAB_100ac2f10;
        }
        local_3d0[0] = SUB81(local_550,0);
        local_3d0[1] = SUB81((ulong)local_550 >> 8,0);
        local_3d0[2] = SUB81((ulong)local_550 >> 0x10,0);
        local_3d0[3] = SUB81((ulong)local_550 >> 0x18,0);
        local_3d0[4] = SUB81((ulong)local_550 >> 0x20,0);
        local_3d0[5] = SUB81((ulong)local_550 >> 0x28,0);
        local_3d0[6] = SUB81((ulong)local_550 >> 0x30,0);
        local_3d0[7] = SUB81((ulong)local_550 >> 0x38,0);
        p_Var26 = local_3d0 + (sVar25 >> 0x30 & 0xff);
        local_3d0[8] = (__DataStorage)uVar4;
        local_3d0[9] = (__DataStorage)uVar5;
        local_3d0[10] = (__DataStorage)uVar6;
        local_3d0[0xb] = (__DataStorage)uVar7;
        local_3d0[0xc] = (__DataStorage)uVar8;
        local_3d0[0xd] = (__DataStorage)uVar9;
LAB_100ac2f40:
        FUN_100ad5e08(local_3d0,p_Var26,&local_400,local_548,param_8,pFVar45);
      }
      else {
        if (uVar55 >> 0x1e != 2) {
          local_3d0[8] = (__DataStorage)0x0;
          local_3d0[9] = (__DataStorage)0x0;
          local_3d0[10] = (__DataStorage)0x0;
          local_3d0[0xb] = (__DataStorage)0x0;
          local_3d0[0xc] = (__DataStorage)0x0;
          local_3d0[0xd] = (__DataStorage)0x0;
          local_3d0[0] = (__DataStorage)0x0;
          local_3d0[1] = (__DataStorage)0x0;
          local_3d0[2] = (__DataStorage)0x0;
          local_3d0[3] = (__DataStorage)0x0;
          local_3d0[4] = (__DataStorage)0x0;
          local_3d0[5] = (__DataStorage)0x0;
          local_3d0[6] = (__DataStorage)0x0;
          local_3d0[7] = (__DataStorage)0x0;
          p_Var26 = local_3d0;
          goto LAB_100ac2f40;
        }
        lVar49 = *(long *)(local_550 + 0x10);
        lVar40 = *(long *)(local_550 + 0x18);
LAB_100ac2f10:
        FUN_100ac9f90(lVar49,lVar40,sVar25 & 0x3fffffffffffffff,&local_400,local_548,param_8,pFVar45
                     );
      }
      iVar22 = _ferror(pFVar45);
      puVar46 = (undefined1 *)CONCAT44(extraout_var_04,iVar22);
      if (iVar22 < 1) {
        uVar38 = uVar38 & 0xff;
        uVar42 = 0x1ed;
        if (uVar38 != 1) {
          uVar42 = 0x1a4;
        }
        if ((local_52c & 0xff0000) != 0x10000) {
          uVar42 = local_52c;
        }
        if (uVar38 == 0) {
          _Var21 = Darwin::get_S_IFREG();
          uVar38 = (uint)_Var21;
        }
        else if (uVar38 == 1) {
          _Var21 = Darwin::get_S_IFDIR();
          uVar38 = (uint)_Var21;
        }
        else {
          _Var21 = Darwin::get_S_IFLNK();
          uVar38 = (uint)_Var21;
        }
        FUN_100abb758(auStack_228,&local_120,local_560,(uVar38 | uVar42) << 0x10);
        if (unaff_x21 == (undefined *)0x0) {
          puVar46 = (undefined1 *)_ftello(*(FILE **)(param_10 + lVar17));
          if (-1 < (long)puVar46) {
            FUN_100abbee8(local_3d0,auStack_228,oVar34,puVar46,1);
            puVar30 = local_3b0;
            pcVar18 = local_3b8;
            uVar50 = uStack_3bc;
            uVar23 = CONCAT13(local_3d0[3],
                              CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
            uVar57 = CONCAT17(local_3d0[0xb],
                              CONCAT16(local_3d0[10],
                                       CONCAT15(local_3d0[9],
                                                CONCAT14(local_3d0[8],
                                                         CONCAT13(local_3d0[7],
                                                                  CONCAT12(local_3d0[6],
                                                                           CONCAT11(local_3d0[5],
                                                                                    local_3d0[4]))))
                                               )));
            uVar58 = CONCAT44(uStack_3c0,
                              CONCAT22(uStack_3c2,CONCAT11(local_3d0[0xd],local_3d0[0xc])));
            uVar16 = CONCAT44(uStack_36c,uStack_370);
            uStack_4f8 = uStack_360;
            local_500 = local_368;
            FUN_100abce14(auStack_228);
            FUN_100aca454(local_340);
            lStack_3f8 = local_540[1];
            local_400 = (undefined *)*local_540;
            lStack_3e8 = local_540[3];
            lStack_3f0 = local_540[2];
            local_3e0 = local_540[4];
            *(undefined4 *)local_540 = uVar23;
            *(undefined8 *)((long)local_540 + 4) = uVar57;
            *(undefined8 *)((long)local_540 + 0xc) = uVar58;
            *(undefined2 *)((long)local_540 + 0x14) = uVar50;
            local_540[3] = (long)pcVar18;
            local_540[4] = (long)puVar30;
            FUN_100abcbf4(&local_400);
            uVar53 = local_538[9];
            uVar57 = local_538[8];
            uVar62 = local_538[0xb];
            uVar60 = local_538[10];
            uStack_370 = *(undefined4 *)(local_538 + 0xc);
            uVar59 = local_538[1];
            uVar58 = *local_538;
            local_3b8 = (code *)local_538[3];
            uVar61 = local_538[2];
            local_3d0[8] = SUB81(uVar59,0);
            local_3d0[9] = SUB81((ulong)uVar59 >> 8,0);
            local_3d0[10] = SUB81((ulong)uVar59 >> 0x10,0);
            local_3d0[0xb] = SUB81((ulong)uVar59 >> 0x18,0);
            local_3d0[0xc] = SUB81((ulong)uVar59 >> 0x20,0);
            local_3d0[0xd] = SUB81((ulong)uVar59 >> 0x28,0);
            uStack_3c2 = (undefined2)((ulong)uVar59 >> 0x30);
            local_3d0[0] = SUB81(uVar58,0);
            local_3d0[1] = SUB81((ulong)uVar58 >> 8,0);
            local_3d0[2] = SUB81((ulong)uVar58 >> 0x10,0);
            local_3d0[3] = SUB81((ulong)uVar58 >> 0x18,0);
            local_3d0[4] = SUB81((ulong)uVar58 >> 0x20,0);
            local_3d0[5] = SUB81((ulong)uVar58 >> 0x28,0);
            local_3d0[6] = SUB81((ulong)uVar58 >> 0x30,0);
            local_3d0[7] = SUB81((ulong)uVar58 >> 0x38,0);
            uStack_3c0 = (undefined4)uVar61;
            uStack_3bc = (undefined2)((ulong)uVar61 >> 0x20);
            uStack_3ba = (undefined2)((ulong)uVar61 >> 0x30);
            uVar61 = local_538[5];
            local_3b0 = (undefined *)local_538[4];
            uVar59 = local_538[7];
            uVar58 = local_538[6];
            local_538[1] = uStack_3a0;
            *local_538 = uStack_3a8;
            local_538[3] = local_390;
            local_538[2] = uStack_398;
            local_538[5] = uStack_380;
            local_538[4] = uStack_388;
            local_538[7] = uVar16;
            local_538[6] = local_378;
            local_538[9] = uStack_4f8;
            local_538[8] = local_500;
            local_538[0xb] = uStack_350;
            local_538[10] = local_358;
            *(undefined4 *)(local_538 + 0xc) = local_348;
            uStack_3a8 = uVar61;
            uStack_3a0 = uVar58;
            uStack_398 = uVar59;
            local_390 = uVar57;
            uStack_388 = uVar53;
            uStack_380 = uVar60;
            local_378 = uVar62;
            FUN_1000fb4c4(local_3d0,&DAT_100ff82d0,&DAT_100c94208);
            _fflush(*(FILE **)(param_10 + lVar17));
            FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
            FUN_100abcbf4(&local_1c0);
            puVar35 = local_550;
            goto LAB_100ac19f8;
          }
          FUN_100ab8c74();
          unaff_x21 = &DAT_100f31130;
          _swift_allocError(&DAT_100f31130,puVar46,0,0);
          *puVar46 = 1;
          _swift_willThrow();
          FUN_100abce14(auStack_228);
        }
      }
      else {
        FUN_100abcb78();
        unaff_x21 = &DAT_100f31588;
        _swift_allocError(&DAT_100f31588,puVar46,0,0);
        *puVar46 = 1;
        _swift_willThrow();
      }
      p_Var26 = local_340;
    }
    FUN_100aca454(p_Var26);
  }
  else if ((local_51c & 0xff) == 1) {
    FUN_100aca230(local_508,local_500);
    if (unaff_x21 == (undefined *)0x0) {
      FUN_10003bf2c();
      IVar56 = local_528;
      if (local_528 != 0) {
        IVar29 = objc_stub::FUN_100c108c0(local_528);
        objc_stub::setCompletedUnitCount_(IVar56,IVar29);
      }
      uVar23 = 0;
      uVar53 = 0;
      goto LAB_100ac2a4c;
    }
LAB_100ac2140:
    _swift_bridgeObjectRelease(local_510);
    FUN_100aca454(&local_2d8);
  }
  else {
    p_Var26 = local_508;
    uVar47 = local_500;
    FUN_100aca230();
    if (unaff_x21 == (undefined *)0x0) {
      uVar38 = (uint)(uVar47 >> 0x20);
      uVar42 = uVar38 >> 0x1e;
      if (uVar38 >> 0x1e < 2) {
        iVar22 = (int)p_Var26;
        if (uVar42 == 0) {
          _Var37 = SUB81(p_Var26,0);
          uVar54 = (undefined1)((ulong)p_Var26 >> 8);
          uVar10 = (undefined1)((ulong)p_Var26 >> 0x10);
          local_500 = (ulong)p_Var26 >> 0x18;
          local_3d0[3] = SUB81((ulong)p_Var26 >> 0x18,0);
          local_508 = (__DataStorage *)((ulong)p_Var26 >> 0x20);
          local_3d0[4] = SUB81((ulong)p_Var26 >> 0x20,0);
          local_588[3] = (ulong)p_Var26 >> 0x28;
          local_3d0[5] = SUB81((ulong)p_Var26 >> 0x28,0);
          local_588[2] = (ulong)p_Var26 >> 0x30;
          local_3d0[6] = SUB81((ulong)p_Var26 >> 0x30,0);
          local_588[1] = (ulong)p_Var26 >> 0x38;
          local_3d0[7] = SUB81((ulong)p_Var26 >> 0x38,0);
          local_588[0] = uVar47 >> 8;
          uVar11 = (undefined1)uVar47;
          local_3d0[9] = SUB81(uVar47 >> 8,0);
          uVar12 = (undefined1)(uVar47 >> 0x10);
          uVar13 = (undefined1)(uVar47 >> 0x18);
          uVar14 = (undefined1)(uVar47 >> 0x20);
          local_590 = uVar47 >> 0x30 & 0xff;
          uVar15 = (undefined1)(uVar47 >> 0x28);
          local_3d0[0] = _Var37;
          local_3d0[1] = (__DataStorage)uVar54;
          local_3d0[2] = (__DataStorage)uVar10;
          local_3d0[8] = (__DataStorage)uVar11;
          local_3d0[10] = (__DataStorage)uVar12;
          local_3d0[0xb] = (__DataStorage)uVar13;
          local_3d0[0xc] = (__DataStorage)uVar14;
          local_3d0[0xd] = (__DataStorage)uVar15;
          FUN_100ad3f98(local_340,local_3d0,local_3d0 + local_590,p_Var26,uVar47,0);
          uVar23 = CONCAT13(local_340[3],CONCAT12(local_340[2],CONCAT11(local_340[1],local_340[0])))
          ;
          pFVar45 = *(FILE **)(param_10 + lVar17);
          local_3d0[3] = SUB81(local_500,0);
          local_3d0[4] = SUB81(local_508,0);
          local_3d0[5] = SUB81(local_588[3],0);
          local_3d0[6] = SUB81(local_588[2],0);
          local_3d0[7] = SUB81(local_588[1],0);
          local_3d0[9] = SUB81(local_588[0],0);
          if ((uVar47 & 0xff000000000000) == 0) {
            uVar53 = 0;
            local_3d0[0] = _Var37;
            local_3d0[1] = (__DataStorage)uVar54;
            local_3d0[2] = (__DataStorage)uVar10;
            local_3d0[8] = (__DataStorage)uVar11;
            local_3d0[10] = (__DataStorage)uVar12;
            local_3d0[0xb] = (__DataStorage)uVar13;
            local_3d0[0xc] = (__DataStorage)uVar14;
            local_3d0[0xd] = (__DataStorage)uVar15;
          }
          else {
            local_3d0[0] = _Var37;
            local_3d0[1] = (__DataStorage)uVar54;
            local_3d0[2] = (__DataStorage)uVar10;
            local_3d0[8] = (__DataStorage)uVar11;
            local_3d0[10] = (__DataStorage)uVar12;
            local_3d0[0xb] = (__DataStorage)uVar13;
            local_3d0[0xc] = (__DataStorage)uVar14;
            local_3d0[0xd] = (__DataStorage)uVar15;
            uVar53 = _fwrite(local_3d0,1,local_590,pFVar45);
          }
        }
        else {
          lVar40 = (long)iVar22;
          lVar49 = ((long)p_Var26 >> 0x20) - lVar40;
          if ((long)p_Var26 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35a4);
            (*pcVar18)();
          }
          p_Var27 = p_Var26;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var26);
          if (p_Var27 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            p_Var27 = (__DataStorage *)0x0;
LAB_100ac285c:
            p_Var32 = (__DataStorage *)0x0;
          }
          else {
            p_Var32 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
            if (SBORROW8(lVar40,(long)p_Var32)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35bc);
              (*pcVar18)();
            }
            p_Var27 = p_Var27 + (lVar40 - (long)p_Var32);
            lVar33 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var32);
            if (p_Var27 == (__DataStorage *)0x0) goto LAB_100ac285c;
            if (lVar49 <= lVar33) {
              lVar33 = lVar49;
            }
            p_Var32 = p_Var27 + lVar33;
          }
          FUN_100ad3f98(local_3d0,p_Var27,p_Var32,p_Var26,uVar47,0);
          uVar23 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])))
          ;
          pFVar45 = *(FILE **)(param_10 + lVar17);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
          if (p_Var27 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          }
          else {
            p_Var32 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
            if (SBORROW8(lVar40,(long)p_Var32)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35c0);
              (*pcVar18)();
            }
            p_Var27 = p_Var27 + (lVar40 - (long)p_Var32);
            lVar40 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var32);
            if (p_Var27 != (__DataStorage *)0x0) {
              if (lVar49 <= lVar40) {
                lVar40 = lVar49;
              }
              if (lVar40 != 0) {
                iVar39 = (int)((ulong)p_Var26 >> 0x20);
                if (SBORROW4(iVar39,iVar22)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35dc);
                  (*pcVar18)();
                }
                sVar36 = (size_t)(iVar39 - iVar22);
                goto LAB_100ac2978;
              }
            }
          }
          uVar53 = 0;
        }
      }
      else {
        if (uVar42 != 2) {
          local_3d0[8] = (__DataStorage)0x0;
          local_3d0[9] = (__DataStorage)0x0;
          local_3d0[10] = (__DataStorage)0x0;
          local_3d0[0xb] = (__DataStorage)0x0;
          local_3d0[0xc] = (__DataStorage)0x0;
          local_3d0[0xd] = (__DataStorage)0x0;
          local_3d0[0] = (__DataStorage)0x0;
          local_3d0[1] = (__DataStorage)0x0;
          local_3d0[2] = (__DataStorage)0x0;
          local_3d0[3] = (__DataStorage)0x0;
          local_3d0[4] = (__DataStorage)0x0;
          local_3d0[5] = (__DataStorage)0x0;
          local_3d0[6] = (__DataStorage)0x0;
          local_3d0[7] = (__DataStorage)0x0;
          FUN_100ad3f98(local_340,local_3d0,local_3d0,p_Var26,uVar47,0);
          uVar53 = 0;
          uVar23 = CONCAT13(local_340[3],CONCAT12(local_340[2],CONCAT11(local_340[1],local_340[0])))
          ;
          pFVar45 = *(FILE **)(param_10 + lVar17);
          goto LAB_100ac29b0;
        }
        lVar49 = *(long *)(p_Var26 + 0x10);
        lVar40 = *(long *)(p_Var26 + 0x18);
        p_Var27 = p_Var26;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var26);
        p_Var32 = (__DataStorage *)0x0;
        if (p_Var27 != (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar49,(long)p_Var32)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35b8);
            (*pcVar18)();
          }
          p_Var27 = p_Var27 + (lVar49 - (long)p_Var32);
        }
        lVar33 = lVar40 - lVar49;
        if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35a8);
          (*pcVar18)();
        }
        lVar49 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var32);
        if (p_Var27 == (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)0x0;
        }
        else {
          if (lVar33 <= lVar49) {
            lVar49 = lVar33;
          }
          p_Var32 = p_Var27 + lVar49;
        }
        FUN_100ad3f98(local_3d0,p_Var27,p_Var32,p_Var26,uVar47,0);
        uVar23 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
        pFVar45 = *(FILE **)(param_10 + lVar17);
        lVar49 = *(long *)(p_Var26 + 0x10);
        lVar40 = *(long *)(p_Var26 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
        p_Var32 = (__DataStorage *)0x0;
        if (p_Var27 != (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar49,(long)p_Var32)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35c4);
            (*pcVar18)();
          }
          p_Var27 = p_Var27 + (lVar49 - (long)p_Var32);
        }
        lVar33 = lVar40 - lVar49;
        if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35ac);
          (*pcVar18)();
        }
        lVar49 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar47 & 0x3fffffffffffffff),p_Var32);
        if (p_Var27 == (__DataStorage *)0x0) {
LAB_100ac2990:
          uVar53 = 0;
          goto LAB_100ac29b0;
        }
        if (lVar33 <= lVar49) {
          lVar49 = lVar33;
        }
        if (lVar49 == 0) goto LAB_100ac2990;
        sVar36 = *(long *)(p_Var26 + 0x18) - *(long *)(p_Var26 + 0x10);
        if (SBORROW8(*(long *)(p_Var26 + 0x18),*(long *)(p_Var26 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35d0);
          (*pcVar18)();
        }
LAB_100ac2978:
        uVar53 = _fwrite(p_Var27,1,sVar36,pFVar45);
      }
LAB_100ac29b0:
      iVar22 = _ferror(pFVar45);
      if (iVar22 < 1) {
        FUN_10003bf2c(p_Var26,uVar47);
        IVar56 = local_528;
        if (local_528 != 0) {
          IVar29 = objc_stub::FUN_100c108c0(local_528);
          objc_stub::setCompletedUnitCount_(IVar56,IVar29);
        }
        goto LAB_100ac2a4c;
      }
      puVar46 = local_510;
      _swift_bridgeObjectRelease();
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,puVar46,0,0);
      *puVar46 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var26,uVar47);
    }
    else {
      _swift_bridgeObjectRelease(local_510);
      FUN_100aca454(&local_2d8);
    }
  }
LAB_100ac1d88:
  local_400 = unaff_x21;
  _swift_errorRetain(unaff_x21);
  puVar30 = &DAT_100ff8480;
  FUN_1000f7830(&DAT_100ff8480,&DAT_100c94348);
  pcVar28 = &local_469;
  _swift_dynamicCast(pcVar28,&local_400,puVar30,&DAT_100f31130,0);
  if (((int)pcVar28 != 0) && (local_469 == '\x05')) {
    _swift_errorRelease(unaff_x21);
    _fflush(*(FILE **)(param_10 + lVar17));
    iVar22 = _fileno(*(FILE **)(param_10 + lVar17));
    p_Var26 = local_560;
    _ftruncate(iVar22,(off_t)local_560);
    iVar22 = _fseeko(*(FILE **)(param_10 + lVar17),(off_t)p_Var26,0);
    p_Var27 = (__DataStorage *)CONCAT44(extraout_var_00,iVar22);
    pFVar45 = *(FILE **)(param_10 + lVar17);
    uVar38 = uVar55 >> 0x1e;
    if (uVar55 >> 0x1e < 2) {
      if (uVar38 == 0) {
        local_3d0[0] = SUB81(local_550,0);
        local_3d0[1] = SUB81((ulong)local_550 >> 8,0);
        local_3d0[2] = SUB81((ulong)local_550 >> 0x10,0);
        local_3d0[3] = SUB81((ulong)local_550 >> 0x18,0);
        local_3d0[4] = SUB81((ulong)local_550 >> 0x20,0);
        local_3d0[5] = SUB81((ulong)local_550 >> 0x28,0);
        local_3d0[6] = SUB81((ulong)local_550 >> 0x30,0);
        local_3d0[7] = SUB81((ulong)local_550 >> 0x38,0);
        local_3d0[8] = (__DataStorage)uVar4;
        local_3d0[9] = (__DataStorage)uVar5;
        local_3d0[10] = (__DataStorage)uVar6;
        local_3d0[0xb] = (__DataStorage)uVar7;
        local_3d0[0xc] = (__DataStorage)uVar8;
        local_3d0[0xd] = (__DataStorage)uVar9;
        if ((local_548 != (undefined1 *)0x0) && ((sVar25 & 0xff000000000000) != 0)) {
          puVar46 = (undefined1 *)0x0;
          do {
            sVar36 = (long)local_548 - (long)puVar46;
            if (local_548 < puVar46) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac352c);
              (*pcVar18)();
            }
            if ((long)sVar36 < 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3530);
              (*pcVar18)();
            }
            sVar3 = param_8;
            if ((long)sVar36 <= (long)param_8) {
              sVar3 = sVar36;
            }
            p_Var26 = (__DataStorage *)&DAT_00000001;
            _fwrite(local_3d0 + (long)puVar46,1,sVar3,pFVar45);
            if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3534);
              (*pcVar18)();
            }
            puVar46 = puVar46 + sVar3;
          } while (puVar46 < local_548);
        }
      }
      else {
        lVar40 = (long)(int)local_550;
        lVar49 = ((long)local_550 >> 0x20) - lVar40;
        if ((long)local_550 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3570);
          (*pcVar18)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
        if (p_Var27 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var32 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar40,(long)p_Var32)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3580);
            (*pcVar18)();
          }
          lVar33 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var32);
          if (p_Var27 + (lVar40 - (long)p_Var32) != (__DataStorage *)0x0) {
            if (lVar49 <= lVar33) {
              lVar33 = lVar49;
            }
            if ((local_548 != (undefined1 *)0x0) && (lVar33 != 0)) {
              puVar46 = (undefined1 *)0x0;
              do {
                sVar36 = (long)local_548 - (long)puVar46;
                if (local_548 < puVar46) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3544);
                  (*pcVar18)();
                }
                if ((long)sVar36 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3548);
                  (*pcVar18)();
                }
                sVar3 = param_8;
                if ((long)sVar36 <= (long)param_8) {
                  sVar3 = sVar36;
                }
                p_Var26 = (__DataStorage *)&DAT_00000001;
                _fwrite(p_Var27 + (lVar40 - (long)p_Var32) + (long)puVar46,1,sVar3,pFVar45);
                if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac354c);
                  (*pcVar18)();
                }
                puVar46 = puVar46 + sVar3;
              } while (puVar46 < local_548);
            }
          }
        }
      }
    }
    else if (uVar38 == 2) {
      lVar49 = *(long *)(local_550 + 0x10);
      lVar40 = *(long *)(local_550 + 0x18);
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27)
      ;
      p_Var32 = (__DataStorage *)0x0;
      if (p_Var27 != (__DataStorage *)0x0) {
        p_Var32 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
        if (SBORROW8(lVar49,(long)p_Var32)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac357c);
          (*pcVar18)();
        }
        p_Var27 = p_Var27 + (lVar49 - (long)p_Var32);
      }
      lVar33 = lVar40 - lVar49;
      if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3574);
        (*pcVar18)();
      }
      lVar49 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var32);
      if (p_Var27 != (__DataStorage *)0x0) {
        if (lVar33 <= lVar49) {
          lVar49 = lVar33;
        }
        if ((local_548 != (undefined1 *)0x0) && (lVar49 != 0)) {
          puVar46 = (undefined1 *)0x0;
          do {
            sVar36 = (long)local_548 - (long)puVar46;
            if (local_548 < puVar46) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3538);
              (*pcVar18)();
            }
            if ((long)sVar36 < 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac353c);
              (*pcVar18)();
            }
            sVar3 = param_8;
            if ((long)sVar36 <= (long)param_8) {
              sVar3 = sVar36;
            }
            p_Var26 = (__DataStorage *)&DAT_00000001;
            _fwrite(p_Var27 + (long)puVar46,1,sVar3,pFVar45);
            if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3540);
              (*pcVar18)();
            }
            puVar46 = puVar46 + sVar3;
          } while (puVar46 < local_548);
        }
      }
    }
    iVar22 = _ferror(pFVar45);
    p_Var27 = (__DataStorage *)CONCAT44(extraout_var_01,iVar22);
    if (iVar22 < 1) {
      pFVar45 = *(FILE **)(param_10 + lVar17);
      local_478 = 0;
      if (uVar38 < 2) {
        if (uVar38 == 0) {
          local_3d0[0] = SUB81(local_550,0);
          local_3d0[1] = SUB81((ulong)local_550 >> 8,0);
          local_3d0[2] = SUB81((ulong)local_550 >> 0x10,0);
          local_3d0[3] = SUB81((ulong)local_550 >> 0x18,0);
          local_3d0[4] = SUB81((ulong)local_550 >> 0x20,0);
          local_3d0[5] = SUB81((ulong)local_550 >> 0x28,0);
          local_3d0[6] = SUB81((ulong)local_550 >> 0x30,0);
          local_3d0[7] = SUB81((ulong)local_550 >> 0x38,0);
          local_3d0[8] = (__DataStorage)uVar4;
          local_3d0[9] = (__DataStorage)uVar5;
          local_3d0[10] = (__DataStorage)uVar6;
          local_3d0[0xb] = (__DataStorage)uVar7;
          local_3d0[0xc] = (__DataStorage)uVar8;
          local_3d0[0xd] = (__DataStorage)uVar9;
          if ((sVar25 & 0xff000000000000) != 0) {
            p_Var26 = (__DataStorage *)&DAT_00000001;
            _fwrite(local_3d0,1,sVar25 >> 0x30 & 0xff,pFVar45);
          }
        }
        else {
          lVar40 = (long)(int)local_550;
          lVar49 = ((long)local_550 >> 0x20) - lVar40;
          if ((long)local_550 >> 0x20 < lVar40) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3584);
            (*pcVar18)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
          if (p_Var27 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            p_Var27 = (__DataStorage *)0x0;
            p_Var26 = (__DataStorage *)0x0;
          }
          else {
            p_Var26 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
            if (SBORROW8(lVar40,(long)p_Var26)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35a0);
              (*pcVar18)();
            }
            p_Var32 = p_Var27 + (lVar40 - (long)p_Var26);
            lVar40 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
            if (lVar49 <= lVar40) {
              lVar40 = lVar49;
            }
            p_Var27 = (__DataStorage *)0x0;
            if (p_Var32 != (__DataStorage *)0x0) {
              p_Var27 = p_Var32;
            }
            p_Var26 = (__DataStorage *)0x0;
            if (p_Var32 != (__DataStorage *)0x0) {
              p_Var26 = p_Var32 + lVar40;
            }
          }
LAB_100ac2690:
          FUN_100ad5d64(p_Var27,p_Var26,&local_478,local_550,sVar25,pFVar45);
        }
      }
      else if (uVar38 == 2) {
        lVar49 = *(long *)(local_550 + 0x10);
        lVar40 = *(long *)(local_550 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
        p_Var26 = (__DataStorage *)0x0;
        if (p_Var27 != (__DataStorage *)0x0) {
          p_Var26 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar49,(long)p_Var26)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac359c);
            (*pcVar18)();
          }
          p_Var27 = p_Var27 + (lVar49 - (long)p_Var26);
        }
        lVar33 = lVar40 - lVar49;
        if (SBORROW8(lVar40,lVar49)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac3588);
          (*pcVar18)();
        }
        lVar49 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
        if (lVar33 <= lVar49) {
          lVar49 = lVar33;
        }
        p_Var26 = (__DataStorage *)0x0;
        if (p_Var27 != (__DataStorage *)0x0) {
          p_Var26 = p_Var27 + lVar49;
        }
        goto LAB_100ac2690;
      }
      iVar22 = _ferror(pFVar45);
      p_Var27 = (__DataStorage *)CONCAT44(extraout_var_02,iVar22);
      if (iVar22 < 1) {
        if (uStack_248 >> 0x3c < 0xf) {
          uStack_148 = uStack_248;
          local_150 = local_250;
          uStack_138 = uStack_238;
          local_140 = uStack_240;
          local_130 = local_230;
          uStack_188 = uStack_288;
          local_190 = local_290;
          pcStack_178 = pcStack_278;
          local_180 = uStack_280;
          uStack_158 = uStack_258;
          local_160 = uStack_260;
          uStack_168 = uStack_268;
          local_170 = local_270;
          local_3d0[8] = SUB81(uStack_288,0);
          local_3d0[9] = SUB81((ulong)uStack_288 >> 8,0);
          local_3d0[10] = SUB81((ulong)uStack_288 >> 0x10,0);
          local_3d0[0xb] = SUB81((ulong)uStack_288 >> 0x18,0);
          local_3d0[0xc] = SUB81((ulong)uStack_288 >> 0x20,0);
          local_3d0[0xd] = SUB81((ulong)uStack_288 >> 0x28,0);
          uStack_3c2 = (undefined2)((ulong)uStack_288 >> 0x30);
          local_3d0[0] = SUB81(local_290,0);
          local_3d0[1] = SUB81((ulong)local_290 >> 8,0);
          local_3d0[2] = SUB81((ulong)local_290 >> 0x10,0);
          local_3d0[3] = SUB81((ulong)local_290 >> 0x18,0);
          local_3d0[4] = SUB81((ulong)local_290 >> 0x20,0);
          local_3d0[5] = SUB81((ulong)local_290 >> 0x28,0);
          local_3d0[6] = SUB81((ulong)local_290 >> 0x30,0);
          local_3d0[7] = SUB81((ulong)local_290 >> 0x38,0);
          local_3b8 = pcStack_278;
          uStack_3c0 = (undefined4)uStack_280;
          uStack_3bc = (undefined2)((ulong)uStack_280 >> 0x20);
          uStack_3ba = (undefined2)((ulong)uStack_280 >> 0x30);
          uStack_370 = local_230;
          uStack_3a8 = uStack_268;
          local_3b0 = local_270;
          uStack_398 = uStack_258;
          uStack_3a0 = uStack_260;
          uStack_388 = uStack_248;
          local_390 = local_250;
          local_378 = uStack_238;
          uStack_380 = uStack_240;
          p_Var27 = local_3d0;
          p_Var26 = local_340;
          FUN_100aca488();
          FUN_100accae0();
          pFVar45 = *(FILE **)(param_10 + lVar17);
          local_480 = 0;
          uVar55 = (uint)((ulong)p_Var26 >> 0x20);
          uVar38 = uVar55 >> 0x1e;
          if (uVar55 >> 0x1e < 2) {
            if (uVar38 != 0) {
              lVar49 = (long)(int)p_Var27;
              lVar40 = (long)p_Var27 >> 0x20;
              if (lVar40 < lVar49) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35d4);
                (*pcVar18)();
              }
              goto LAB_100ac2fe8;
            }
            local_340[0] = SUB81(p_Var27,0);
            local_340[1] = SUB81((ulong)p_Var27 >> 8,0);
            local_340[2] = SUB81((ulong)p_Var27 >> 0x10,0);
            local_340[3] = SUB81((ulong)p_Var27 >> 0x18,0);
            local_340[4] = SUB81((ulong)p_Var27 >> 0x20,0);
            uStack_33b = (undefined1)((ulong)p_Var27 >> 0x28);
            uStack_33a = (undefined1)((ulong)p_Var27 >> 0x30);
            uStack_339 = (undefined1)((ulong)p_Var27 >> 0x38);
            uStack_338 = SUB81(p_Var26,0);
            uStack_337 = (undefined1)((ulong)p_Var26 >> 8);
            uStack_336 = (undefined1)((ulong)p_Var26 >> 0x10);
            uStack_335 = (undefined1)((ulong)p_Var26 >> 0x18);
            uStack_334 = (undefined1)((ulong)p_Var26 >> 0x20);
            uStack_333 = (undefined1)((ulong)p_Var26 >> 0x28);
            FUN_100ad5d64(local_340,local_340 + ((ulong)p_Var26 >> 0x30 & 0xff),&local_480,p_Var27,
                          p_Var26,pFVar45);
LAB_100ac2820:
            FUN_10003bf2c(p_Var27,p_Var26);
            FUN_10003bf2c(p_Var27,p_Var26);
          }
          else {
            if (uVar38 != 2) goto LAB_100ac2820;
            lVar49 = *(long *)(p_Var27 + 0x10);
            lVar40 = *(long *)(p_Var27 + 0x18);
LAB_100ac2fe8:
            FUN_1001037b4(p_Var27,p_Var26);
            FUN_1001037b4(p_Var27,p_Var26);
            FUN_100ac9e88(lVar49,lVar40,(ulong)p_Var26 & 0x3fffffffffffffff,&local_480,p_Var27,
                          p_Var26,pFVar45);
            FUN_10003bf2c(p_Var27,p_Var26);
          }
          iVar22 = _ferror(pFVar45);
          puVar46 = (undefined1 *)CONCAT44(extraout_var_05,iVar22);
          if (iVar22 < 1) {
            FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
            FUN_10003bf2c();
            goto LAB_100ac30bc;
          }
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,puVar46,0,0);
          *puVar46 = 1;
          _swift_willThrow();
          FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
        }
        else {
LAB_100ac30bc:
          FUN_100acf2b4();
          pFVar45 = *(FILE **)(param_10 + lVar17);
          uVar55 = (uint)((ulong)p_Var26 >> 0x20);
          uVar38 = uVar55 >> 0x1e;
          if (uVar55 >> 0x1e < 2) {
            if (uVar38 != 0) {
              lVar49 = (long)(int)p_Var27;
              lVar40 = (long)p_Var27 >> 0x20;
              if (lVar40 < lVar49) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac35cc);
                (*pcVar18)();
              }
              goto LAB_100ac3180;
            }
            local_3d0[0] = SUB81(p_Var27,0);
            local_3d0[1] = SUB81((ulong)p_Var27 >> 8,0);
            local_3d0[2] = SUB81((ulong)p_Var27 >> 0x10,0);
            local_3d0[3] = SUB81((ulong)p_Var27 >> 0x18,0);
            local_3d0[4] = SUB81((ulong)p_Var27 >> 0x20,0);
            local_3d0[5] = SUB81((ulong)p_Var27 >> 0x28,0);
            local_3d0[6] = SUB81((ulong)p_Var27 >> 0x30,0);
            local_3d0[7] = SUB81((ulong)p_Var27 >> 0x38,0);
            local_3d0[8] = SUB81(p_Var26,0);
            local_3d0[9] = SUB81((ulong)p_Var26 >> 8,0);
            local_3d0[10] = SUB81((ulong)p_Var26 >> 0x10,0);
            local_3d0[0xb] = SUB81((ulong)p_Var26 >> 0x18,0);
            local_3d0[0xc] = SUB81((ulong)p_Var26 >> 0x20,0);
            local_3d0[0xd] = SUB81((ulong)p_Var26 >> 0x28,0);
            p_Var32 = local_3d0 + ((ulong)p_Var26 >> 0x30 & 0xff);
LAB_100ac31e8:
            FUN_100ad5d64(local_3d0,p_Var32,local_340,p_Var27,p_Var26,pFVar45);
            FUN_10003bf2c(p_Var27,p_Var26);
            FUN_10003bf2c(p_Var27,p_Var26);
          }
          else {
            if (uVar38 != 2) {
              local_3d0[8] = (__DataStorage)0x0;
              local_3d0[9] = (__DataStorage)0x0;
              local_3d0[10] = (__DataStorage)0x0;
              local_3d0[0xb] = (__DataStorage)0x0;
              local_3d0[0xc] = (__DataStorage)0x0;
              local_3d0[0xd] = (__DataStorage)0x0;
              local_3d0[0] = (__DataStorage)0x0;
              local_3d0[1] = (__DataStorage)0x0;
              local_3d0[2] = (__DataStorage)0x0;
              local_3d0[3] = (__DataStorage)0x0;
              local_3d0[4] = (__DataStorage)0x0;
              local_3d0[5] = (__DataStorage)0x0;
              local_3d0[6] = (__DataStorage)0x0;
              local_3d0[7] = (__DataStorage)0x0;
              p_Var32 = local_3d0;
              goto LAB_100ac31e8;
            }
            lVar49 = *(long *)(p_Var27 + 0x10);
            lVar40 = *(long *)(p_Var27 + 0x18);
LAB_100ac3180:
            FUN_1001037b4(p_Var27,p_Var26);
            FUN_1001037b4(p_Var27,p_Var26);
            FUN_100ac9e88(lVar49,lVar40,(ulong)p_Var26 & 0x3fffffffffffffff,local_340,p_Var27,
                          p_Var26,pFVar45);
            FUN_10003bf2c(p_Var27,p_Var26);
          }
          iVar22 = _ferror(pFVar45);
          puVar46 = (undefined1 *)CONCAT44(extraout_var_06,iVar22);
          if (iVar22 < 1) {
            FUN_10003bf2c(p_Var27,p_Var26);
            FUN_100ab8c74();
            _swift_allocError(&DAT_100f31130,p_Var27,0,0);
            _Var37 = (__DataStorage)0x5;
            goto LAB_100ac26e0;
          }
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,puVar46,0,0);
          *puVar46 = 1;
          _swift_willThrow();
        }
        FUN_10003bf2c(p_Var27,p_Var26);
      }
      else {
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,p_Var27,0,0);
        _Var37 = (__DataStorage)0x1;
LAB_100ac26e0:
        *p_Var27 = _Var37;
        _swift_willThrow();
      }
    }
    else {
      FUN_100abcb78();
      _swift_allocError(&DAT_100f31588,p_Var27,0,0);
      *p_Var27 = (__DataStorage)0x1;
      _swift_willThrow();
    }
  }
  _swift_errorRelease(local_400);
  _fflush(*(FILE **)(param_10 + lVar17));
  FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
  FUN_100abcbf4(&local_1c0);
  FUN_10003bf2c(local_550,sVar25);
LAB_100ac32ac:
  _swift_release(puVar24);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ac52c4 | FUN_100ac52c4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100ac6ec4) */
/* WARNING: Removing unreachable block (ram,0x000100ac7054) */
/* WARNING: Removing unreachable block (ram,0x000100ac7284) */
/* WARNING: Removing unreachable block (ram,0x000100ac7290) */

void FUN_100ac52c4(__DataStorage *param_1,undefined1 *param_2,char param_3,ulong param_4,
                  undefined8 param_5,uint param_6,char param_7,size_t param_8,ID param_9,
                  code *param_10,long param_11)

{
  long *plVar1;
  undefined8 *puVar2;
  __DataStorage _Var3;
  __DataStorage _Var10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  long lVar17;
  code *pcVar18;
  bool bVar19;
  Deallocator DVar20;
  __uint16 _Var21;
  int iVar22;
  undefined4 uVar23;
  undefined7 extraout_var;
  undefined1 *puVar24;
  undefined1 *puVar25;
  size_t sVar26;
  __DataStorage *p_Var27;
  __DataStorage *p_Var28;
  ID IVar29;
  undefined *puVar30;
  undefined *puVar31;
  char *pcVar32;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  long lVar33;
  __DataStorage *p_Var34;
  long lVar35;
  __DataStorage *p_Var36;
  undefined4 extraout_var_02;
  off_t oVar37;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined1 *puVar38;
  size_t sVar39;
  uint uVar40;
  int iVar41;
  uint uVar42;
  uint uVar43;
  undefined2 uVar44;
  undefined4 uVar45;
  long unaff_x20;
  long lVar46;
  undefined *unaff_x21;
  FILE *pFVar47;
  ulong uVar48;
  ulong uVar49;
  int iVar50;
  ulong uVar51;
  undefined1 *puVar52;
  undefined2 uVar53;
  long lVar54;
  ulong uVar55;
  undefined1 uVar56;
  undefined8 *puVar57;
  ulong uVar58;
  undefined8 uVar59;
  undefined8 uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  size_t asStack_5b0 [2];
  ulong local_5a0;
  ulong local_598;
  ulong local_590;
  ulong local_588;
  ulong local_580;
  ulong local_578;
  ulong local_570;
  FILE *local_568;
  undefined4 local_55c;
  __DataStorage *local_558;
  undefined4 local_54c;
  size_t local_548;
  undefined8 local_480;
  undefined8 local_478;
  char local_469;
  undefined2 local_468;
  undefined2 local_466;
  ulong local_460;
  ulong uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined2 local_440;
  undefined2 local_43e;
  ulong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined1 auStack_418 [24];
  undefined *local_400;
  long lStack_3f8;
  long lStack_3f0;
  long lStack_3e8;
  long local_3e0;
  __DataStorage local_3d0 [14];
  undefined2 uStack_3c2;
  undefined4 uStack_3c0;
  undefined2 uStack_3bc;
  undefined2 uStack_3ba;
  code *local_3b8;
  long local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  __DataStorage local_340 [5];
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined2 local_324;
  undefined2 local_322;
  __DataStorage *local_320;
  undefined1 *puStack_318;
  __DataStorage *local_310;
  undefined1 *local_308;
  undefined8 local_300;
  undefined4 local_2d8;
  undefined2 uStack_2d4;
  undefined2 uStack_2d2;
  undefined2 uStack_2d0;
  undefined2 uStack_2ce;
  undefined2 uStack_2cc;
  undefined2 uStack_2ca;
  undefined4 local_2c8;
  uint local_2c4;
  undefined4 local_2c0;
  undefined2 local_2bc;
  undefined2 local_2ba;
  __DataStorage *local_2b8;
  undefined1 *puStack_2b0;
  __DataStorage *local_2a8;
  undefined1 *local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  long local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 auStack_228 [104];
  long local_1c0;
  long lStack_1b8;
  ulong local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  code *pcStack_178;
  long local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  __DataStorage *local_100;
  undefined1 *puStack_f8;
  __DataStorage *local_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  __DataStorage *local_b0;
  undefined1 *puStack_a8;
  __DataStorage *p_Stack_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long local_88;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  local_88 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar20 = Foundation::Data::Deallocator::typeMetadataAccessor();
  puVar52 = (undefined1 *)CONCAT71(extraout_var,DVar20.value);
  lVar54 = *(long *)(puVar52 + -8);
  lVar46 = -(*(long *)(lVar54 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar57 = (undefined8 *)((long)asStack_5b0 + lVar46);
  if (*(char *)(unaff_x20 + _TtC13ZIPFoundation7Archive::accessMode) == '\x01') {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar52,0,0);
    *puVar52 = 1;
    _swift_willThrow();
    goto LAB_100ac6370;
  }
  if (param_9 != 0) {
    uVar51 = param_4;
    if (param_3 == '\x01') {
      uVar51 = 1;
    }
    objc_stub::setTotalUnitCount_(param_9,uVar51);
  }
  lVar17 = _TtC13ZIPFoundation7Archive::archiveFile;
  plVar1 = (long *)(unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
  lStack_1b8 = plVar1[1];
  local_1c0 = *plVar1;
  lStack_1a8 = plVar1[3];
  local_1b0 = plVar1[2];
  local_1a0 = plVar1[4];
  uVar51 = local_1b0 & 0xffffffff;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  uStack_248 = puVar2[9];
  local_250 = puVar2[8];
  uStack_238 = puVar2[0xb];
  uStack_240 = puVar2[10];
  local_230 = *(undefined4 *)(puVar2 + 0xc);
  uStack_288 = puVar2[1];
  local_290 = *puVar2;
  pcStack_278 = (code *)puVar2[3];
  uStack_280 = puVar2[2];
  uStack_268 = puVar2[5];
  local_270 = puVar2[4];
  uStack_258 = puVar2[7];
  uStack_260 = puVar2[6];
  if (((ulong)puVar2[9] >> 0x3c < 0xf) && (uVar51 = puVar2[7], (long)uVar51 < 0)) {
                    /* WARNING: Does not return */
    pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac706c);
    (*pcVar18)();
  }
  pFVar47 = *(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile);
  FUN_100abcbb8(&local_1c0,local_3d0);
  FUN_1000f8cac(&local_290,local_3d0,&DAT_100ff82d0,&DAT_100c94208);
  _fseeko(pFVar47,uVar51,0);
  if ((ulong)puVar2[9] >> 0x3c < 0xf) {
    puVar24 = (undefined1 *)puVar2[6];
    if ((long)puVar24 < 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7070);
      (*pcVar18)();
    }
  }
  else {
    puVar24 = (undefined1 *)(ulong)*(uint *)((long)plVar1 + 0xc);
  }
  pFVar47 = *(FILE **)(unaff_x20 + lVar17);
  puVar25 = puVar24;
  _swift_slowAlloc(puVar24,0xffffffffffffffff);
  sVar26 = _fread(puVar25,1,(size_t)puVar24,pFVar47);
  iVar22 = _ferror(pFVar47);
  if (0 < iVar22) {
    _swift_slowDealloc(puVar25,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar25,0,0);
    *puVar25 = 0;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
    goto LAB_100ac6370;
  }
  *puVar57 = FUN_10094a398;
  *(undefined8 *)((long)asStack_5b0 + lVar46 + 8) = 0;
  (**(code **)(lVar54 + 0x68))
            (puVar57,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
             ,puVar52);
  FUN_100abfa10(puVar25,sVar26,puVar57);
  _fseeko(*(FILE **)(unaff_x20 + lVar17),uVar51,0);
  p_Var27 = (__DataStorage *)_ftello(*(FILE **)(unaff_x20 + lVar17));
  if ((long)p_Var27 < 0) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,p_Var27,0,0);
    *p_Var27 = (__DataStorage)0x1;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
  }
  else {
    p_Var36 = p_Var27;
    FUN_100ad5fe0();
    uVar23 = SUB84(p_Var36,0);
    FUN_100ad610c();
    local_54c = uVar23;
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71d0);
      (*pcVar18)();
    }
    local_558 = p_Var27;
    _swift_bridgeObjectRetain_n(param_2,2);
    p_Var27 = param_1;
    puVar52 = param_2;
    FUN_100ac0904();
    uVar51 = 0xffffffff;
    if (param_4 < 0xffffffff) {
      uVar44 = 0;
      uVar43 = 0;
      uVar23 = 0;
      uVar53 = 0x14;
      uVar48 = 0;
      uVar51 = param_4;
    }
    else {
      uVar53 = 0x2d;
      uVar44 = 0x14;
      uVar43 = 0xffffffff;
      uVar23 = 0x100001;
      uVar48 = param_4;
    }
    uVar40 = (uint)((ulong)puVar52 >> 0x20);
    uVar42 = uVar40 >> 0x1e;
    local_548 = sVar26;
    if (uVar40 >> 0x1e < 2) {
      if (uVar42 == 0) {
        uVar58 = (ulong)puVar52 >> 0x30 & 0xff;
      }
      else {
        iVar22 = (int)((ulong)p_Var27 >> 0x20);
        if (SBORROW4(iVar22,(int)p_Var27)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71fc);
          (*pcVar18)();
        }
        uVar58 = (ulong)(iVar22 - (int)p_Var27);
LAB_100ac56cc:
        if ((long)uVar58 < 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71d4);
          (*pcVar18)();
        }
        if (uVar58 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac56dc);
          (*pcVar18)();
        }
      }
    }
    else {
      if (uVar42 == 2) {
        uVar58 = *(long *)(p_Var27 + 0x18) - *(long *)(p_Var27 + 0x10);
        if (SBORROW8(*(long *)(p_Var27 + 0x18),*(long *)(p_Var27 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac56bc);
          (*pcVar18)();
        }
        goto LAB_100ac56cc;
      }
      uVar58 = 0;
    }
    if (param_4 < 0xffffffff) {
      p_Var28 = (__DataStorage *)0x0;
      puVar38 = (undefined1 *)0xc000000000000000;
    }
    else {
      local_440 = (undefined2)uVar23;
      local_43e = (undefined2)((uint)uVar23 >> 0x10);
      local_430 = 0;
      uStack_428 = 0;
      local_420 = 0;
      p_Var28 = p_Var27;
      puVar38 = puVar52;
      local_438 = uVar48;
      FUN_100adacb4();
    }
    local_2d8 = 0x4034b50;
    uStack_2d2 = 0x800;
    local_55c = 0;
    if (param_7 != '\0' && param_3 == '\0') {
      local_55c = 8;
    }
    uStack_2d0 = (undefined2)local_55c;
    uStack_2ce = (undefined2)local_54c;
    uStack_2cc = SUB82(p_Var36,0);
    local_2c8 = 0;
    local_2bc = (undefined2)uVar58;
    local_298 = 0;
    local_90 = 0;
    uStack_c8 = CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,CONCAT22(uStack_2ce,uStack_2d0)));
    local_d0 = CONCAT26(0x800,CONCAT24(uVar53,0x4034b50));
    uStack_b8 = CONCAT26(uVar44,CONCAT24(local_2bc,(int)uVar51));
    lStack_c0 = (ulong)uVar43 << 0x20;
    uStack_2d4 = uVar53;
    local_2c4 = uVar43;
    local_2c0 = (int)uVar51;
    local_2ba = uVar44;
    local_2b8 = p_Var27;
    puStack_2b0 = puVar52;
    local_2a8 = p_Var28;
    local_2a0 = puVar38;
    local_b0 = p_Var27;
    puStack_a8 = puVar52;
    p_Stack_a0 = p_Var28;
    puStack_98 = puVar38;
    FUN_100ad63a8();
    pFVar47 = *(FILE **)(unaff_x20 + lVar17);
    uVar43 = (uint)((ulong)puVar38 >> 0x20);
    uVar40 = uVar43 >> 0x1e;
    if (uVar43 >> 0x1e < 2) {
      if (uVar40 == 0) {
        local_3d0[0] = SUB81(p_Var28,0);
        local_3d0[1] = SUB81((ulong)p_Var28 >> 8,0);
        local_3d0[2] = SUB81((ulong)p_Var28 >> 0x10,0);
        local_3d0[3] = SUB81((ulong)p_Var28 >> 0x18,0);
        local_3d0[4] = SUB81((ulong)p_Var28 >> 0x20,0);
        local_3d0[5] = SUB81((ulong)p_Var28 >> 0x28,0);
        local_3d0[6] = SUB81((ulong)p_Var28 >> 0x30,0);
        local_3d0[7] = SUB81((ulong)p_Var28 >> 0x38,0);
        local_3d0[8] = SUB81(puVar38,0);
        local_3d0[9] = SUB81((ulong)puVar38 >> 8,0);
        local_3d0[10] = SUB81((ulong)puVar38 >> 0x10,0);
        local_3d0[0xb] = SUB81((ulong)puVar38 >> 0x18,0);
        local_3d0[0xc] = SUB81((ulong)puVar38 >> 0x20,0);
        local_3d0[0xd] = SUB81((ulong)puVar38 >> 0x28,0);
        if (((ulong)puVar38 & 0xff000000000000) != 0) {
          sVar26 = (ulong)puVar38 >> 0x30 & 0xff;
          p_Var27 = local_3d0;
LAB_100ac5928:
          _fwrite(p_Var27,1,sVar26,pFVar47);
        }
      }
      else {
        iVar22 = (int)p_Var28;
        lVar54 = (long)iVar22;
        lVar46 = ((long)p_Var28 >> 0x20) - lVar54;
        if ((long)p_Var28 >> 0x20 < lVar54) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7200);
          (*pcVar18)();
        }
        p_Var27 = p_Var28;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var28);
        if (p_Var27 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var34 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var27);
          if (SBORROW8(lVar54,(long)p_Var34)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac720c);
            (*pcVar18)();
          }
          p_Var27 = p_Var27 + (lVar54 - (long)p_Var34);
          lVar54 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var34);
          if (p_Var27 != (__DataStorage *)0x0) {
            if (lVar46 <= lVar54) {
              lVar54 = lVar46;
            }
            if (lVar54 != 0) {
              iVar50 = (int)((ulong)p_Var28 >> 0x20);
              if (SBORROW4(iVar50,iVar22)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7220);
                (*pcVar18)();
              }
              sVar26 = (size_t)(iVar50 - iVar22);
              goto LAB_100ac5928;
            }
          }
        }
      }
    }
    else if (uVar40 == 2) {
      lVar46 = *(long *)(p_Var28 + 0x10);
      lVar54 = *(long *)(p_Var28 + 0x18);
      p_Var27 = p_Var28;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var28);
      p_Var34 = (__DataStorage *)0x0;
      if (p_Var27 != (__DataStorage *)0x0) {
        p_Var34 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var27);
        if (SBORROW8(lVar46,(long)p_Var34)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7208);
          (*pcVar18)();
        }
        p_Var27 = p_Var27 + (lVar46 - (long)p_Var34);
      }
      lVar33 = lVar54 - lVar46;
      if (SBORROW8(lVar54,lVar46)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7204);
        (*pcVar18)();
      }
      lVar46 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)puVar38 & 0x3fffffffffffffff),p_Var34);
      if (p_Var27 != (__DataStorage *)0x0) {
        if (lVar33 <= lVar46) {
          lVar46 = lVar33;
        }
        if (lVar46 != 0) {
          sVar26 = *(long *)(p_Var28 + 0x18) - *(long *)(p_Var28 + 0x10);
          if (SBORROW8(*(long *)(p_Var28 + 0x18),*(long *)(p_Var28 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac58c8);
            (*pcVar18)();
          }
          goto LAB_100ac5928;
        }
      }
    }
    iVar22 = _ferror(pFVar47);
    lVar46 = (long)puVar25 >> 0x20;
    _Var3 = SUB81(puVar25,0);
    uVar4 = (undefined1)((ulong)puVar25 >> 8);
    uVar5 = (undefined1)((ulong)puVar25 >> 0x10);
    uVar6 = (undefined1)((ulong)puVar25 >> 0x18);
    uVar7 = (undefined1)((ulong)puVar25 >> 0x20);
    uVar8 = (undefined1)((ulong)puVar25 >> 0x28);
    uVar9 = (undefined1)((ulong)puVar25 >> 0x30);
    uVar15 = (undefined1)((ulong)puVar25 >> 0x38);
    iVar50 = (int)puVar25;
    if (0 < iVar22) {
      _swift_bridgeObjectRelease();
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,param_2,0,0);
      *param_2 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var28,puVar38);
      sVar26 = local_548;
      goto LAB_100ac5b2c;
    }
    FUN_10003bf2c(p_Var28,puVar38);
    if (param_3 == '\0') {
      if (param_7 != '\x01') {
        uVar48 = param_4;
        sVar26 = param_8;
        FUN_100abb150(param_4,param_8,param_9,param_10,param_11);
        if (unaff_x21 == (undefined *)0x0) {
          uVar23 = (undefined4)sVar26;
          sVar26 = local_548;
          goto LAB_100ac6730;
        }
        _swift_bridgeObjectRelease(param_2);
        FUN_100aca454(&local_2d8);
        sVar26 = local_548;
        goto LAB_100ac5b2c;
      }
      puVar30 = &DAT_100f30d58;
      _swift_allocObject(&DAT_100f30d58,0x18,7);
      *(undefined8 *)(puVar30 + 0x10) = 0;
      puVar31 = &DAT_100f30d80;
      _swift_allocObject(&DAT_100f30d80,0x20,7);
      *(undefined **)(puVar31 + 0x10) = puVar30;
      *(long *)(puVar31 + 0x18) = unaff_x20;
      uStack_3c0 = (undefined4)param_9;
      uStack_3bc = (undefined2)(param_9 >> 0x20);
      uStack_3ba = (undefined2)(param_9 >> 0x30);
      local_3b8 = param_10;
      local_3b0 = param_11;
      _swift_retain(puVar30);
      _swift_retain(unaff_x20);
      uVar23 = 0;
      FUN_100ad4034(0,param_4,param_8,0,FUN_100aca4ec,local_3d0,FUN_100aca4d4,puVar31);
      if (unaff_x21 != (undefined *)0x0) {
        _swift_bridgeObjectRelease(param_2);
        FUN_100aca454(&local_2d8);
        _swift_release(puVar30);
        _swift_release(puVar31);
        sVar26 = local_548;
        goto LAB_100ac5b2c;
      }
      _swift_beginAccess(puVar30 + 0x10,auStack_418,0,0);
      uVar48 = *(ulong *)(puVar30 + 0x10);
      _swift_release(puVar30);
      _swift_release(puVar31);
      sVar26 = local_548;
LAB_100ac6730:
      oVar37 = _ftello(*(FILE **)(unaff_x20 + lVar17));
      if (oVar37 < 0) {
        _swift_bridgeObjectRelease();
        FUN_100ab8c74();
        unaff_x21 = &DAT_100f31130;
        _swift_allocError(&DAT_100f31130,param_2,0,0);
        *param_2 = 1;
        _swift_willThrow();
        FUN_100aca454(&local_2d8);
        goto LAB_100ac5b2c;
      }
      _fseeko(*(FILE **)(unaff_x20 + lVar17),(off_t)local_558,0);
      if ((long)uVar48 < 0) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7210);
        (*pcVar18)();
      }
      FUN_100ac0904();
      uVar51 = 0xffffffff;
      bVar19 = 0xfffffffe < param_4 || 0xfffffffe < uVar48;
      if (bVar19) {
        uVar56 = 0x2d;
        uVar44 = 0x14;
        uVar55 = 0xffffffff;
        uVar45 = 0x100001;
        uVar58 = param_4;
        uVar49 = uVar48;
      }
      else {
        uVar44 = 0;
        uVar45 = 0;
        uVar56 = 0x14;
        uVar58 = 0;
        uVar49 = 0;
        uVar55 = uVar48;
        uVar51 = param_4;
      }
      uVar43 = (uint)((ulong)param_2 >> 0x20);
      uVar40 = uVar43 >> 0x1e;
      if (uVar43 >> 0x1e < 2) {
        if (uVar40 == 0) {
          uVar48 = (ulong)param_2 >> 0x30 & 0xff;
        }
        else {
          iVar22 = (int)((ulong)param_1 >> 0x20);
          if (SBORROW4(iVar22,(int)param_1)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7234);
            (*pcVar18)();
          }
          uVar48 = (ulong)(iVar22 - (int)param_1);
LAB_100ac6844:
          if ((long)uVar48 < 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7214);
            (*pcVar18)();
          }
          if (uVar48 >> 0x10 != 0) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac6854);
            (*pcVar18)();
          }
        }
      }
      else {
        if (uVar40 == 2) {
          uVar48 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac6834);
            (*pcVar18)();
          }
          goto LAB_100ac6844;
        }
        uVar48 = 0;
      }
      if (bVar19) {
        local_468 = (undefined2)uVar45;
        local_466 = (undefined2)((uint)uVar45 >> 0x10);
        local_450 = 0;
        local_448 = 0;
        p_Var27 = param_1;
        puVar52 = param_2;
        local_460 = uVar58;
        uStack_458 = uVar49;
        FUN_100adacb4();
      }
      else {
        p_Var27 = (__DataStorage *)0x0;
        puVar52 = (undefined1 *)0xc000000000000000;
      }
      local_340[0] = (__DataStorage)0x50;
      local_340[1] = (__DataStorage)0x4b;
      local_340[2] = (__DataStorage)0x3;
      local_340[3] = (__DataStorage)0x4;
      uStack_33b = 0;
      uStack_33a = 0;
      uStack_339 = 8;
      uStack_338 = (undefined1)local_55c;
      uStack_337 = (undefined1)((uint)local_55c >> 8);
      uStack_336 = (undefined1)local_54c;
      uStack_335 = (undefined1)((uint)local_54c >> 8);
      uStack_334 = SUB81(p_Var36,0);
      uStack_333 = (undefined1)((ulong)p_Var36 >> 8);
      local_32c = (undefined4)uVar55;
      local_328 = (undefined4)uVar51;
      local_324 = (undefined2)uVar48;
      local_300 = 0;
      uStack_118 = CONCAT26(uStack_332,
                            CONCAT15(uStack_333,
                                     CONCAT14(uStack_334,
                                              CONCAT13(uStack_335,
                                                       CONCAT12(uStack_336,(short)local_55c)))));
      local_120 = CONCAT17(8,(uint7)CONCAT14(uVar56,0x4034b50));
      uStack_108 = CONCAT26(uVar44,CONCAT24(local_324,local_328));
      local_110 = CONCAT44(local_32c,uVar23);
      local_e0 = 0;
      local_340[4] = (__DataStorage)uVar56;
      local_330 = uVar23;
      local_322 = uVar44;
      local_320 = param_1;
      puStack_318 = param_2;
      local_310 = p_Var27;
      local_308 = puVar52;
      local_100 = param_1;
      puStack_f8 = param_2;
      local_f0 = p_Var27;
      puStack_e8 = puVar52;
      FUN_100ad63a8();
      pFVar47 = *(FILE **)(unaff_x20 + lVar17);
      uVar43 = (uint)((ulong)puVar52 >> 0x20);
      uVar40 = uVar43 >> 0x1e;
      sVar26 = local_548;
      if (uVar43 >> 0x1e < 2) {
        if (uVar40 == 0) {
          local_3d0[0] = SUB81(p_Var27,0);
          local_3d0[1] = SUB81((ulong)p_Var27 >> 8,0);
          local_3d0[2] = SUB81((ulong)p_Var27 >> 0x10,0);
          local_3d0[3] = SUB81((ulong)p_Var27 >> 0x18,0);
          local_3d0[4] = SUB81((ulong)p_Var27 >> 0x20,0);
          local_3d0[5] = SUB81((ulong)p_Var27 >> 0x28,0);
          local_3d0[6] = SUB81((ulong)p_Var27 >> 0x30,0);
          local_3d0[7] = SUB81((ulong)p_Var27 >> 0x38,0);
          local_3d0[8] = SUB81(puVar52,0);
          local_3d0[9] = SUB81((ulong)puVar52 >> 8,0);
          local_3d0[10] = SUB81((ulong)puVar52 >> 0x10,0);
          local_3d0[0xb] = SUB81((ulong)puVar52 >> 0x18,0);
          local_3d0[0xc] = SUB81((ulong)puVar52 >> 0x20,0);
          local_3d0[0xd] = SUB81((ulong)puVar52 >> 0x28,0);
          if (((ulong)puVar52 & 0xff000000000000) != 0) {
            sVar39 = (ulong)puVar52 >> 0x30 & 0xff;
            p_Var36 = local_3d0;
LAB_100ac6a88:
            sVar26 = local_548;
            _fwrite(p_Var36,1,sVar39,pFVar47);
          }
        }
        else {
          iVar22 = (int)p_Var27;
          lVar33 = (long)iVar22;
          lVar54 = ((long)p_Var27 >> 0x20) - lVar33;
          if ((long)p_Var27 >> 0x20 < lVar33) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7238);
            (*pcVar18)();
          }
          p_Var36 = p_Var27;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var27);
          if (p_Var36 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            sVar26 = local_548;
          }
          else {
            p_Var28 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var36);
            if (SBORROW8(lVar33,(long)p_Var28)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac725c);
              (*pcVar18)();
            }
            p_Var36 = p_Var36 + (lVar33 - (long)p_Var28);
            lVar33 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var28);
            sVar26 = local_548;
            if (p_Var36 != (__DataStorage *)0x0) {
              if (lVar54 <= lVar33) {
                lVar33 = lVar54;
              }
              if (lVar33 != 0) {
                iVar41 = (int)((ulong)p_Var27 >> 0x20);
                if (SBORROW4(iVar41,iVar22)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7280);
                  (*pcVar18)();
                }
                sVar39 = (size_t)(iVar41 - iVar22);
                goto LAB_100ac6a88;
              }
            }
          }
        }
      }
      else if (uVar40 == 2) {
        lVar54 = *(long *)(p_Var27 + 0x10);
        lVar33 = *(long *)(p_Var27 + 0x18);
        p_Var36 = p_Var27;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var27);
        p_Var28 = (__DataStorage *)0x0;
        if (p_Var36 != (__DataStorage *)0x0) {
          p_Var28 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var36);
          if (SBORROW8(lVar54,(long)p_Var28)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7258);
            (*pcVar18)();
          }
          p_Var36 = p_Var36 + (lVar54 - (long)p_Var28);
        }
        lVar35 = lVar33 - lVar54;
        if (SBORROW8(lVar33,lVar54)) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac723c);
          (*pcVar18)();
        }
        lVar54 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)puVar52 & 0x3fffffffffffffff),p_Var28);
        sVar26 = local_548;
        if (p_Var36 != (__DataStorage *)0x0) {
          if (lVar35 <= lVar54) {
            lVar54 = lVar35;
          }
          if (lVar54 != 0) {
            sVar39 = *(long *)(p_Var27 + 0x18) - *(long *)(p_Var27 + 0x10);
            if (SBORROW8(*(long *)(p_Var27 + 0x18),*(long *)(p_Var27 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac6a24);
              (*pcVar18)();
            }
            goto LAB_100ac6a88;
          }
        }
      }
      iVar22 = _ferror(pFVar47);
      puVar38 = (undefined1 *)CONCAT44(extraout_var_03,iVar22);
      if (0 < iVar22) {
        FUN_100abcb78();
        unaff_x21 = &DAT_100f31588;
        _swift_allocError(&DAT_100f31588,puVar38,0,0);
        *puVar38 = 1;
        _swift_willThrow();
        FUN_100aca454(&local_2d8);
        FUN_100aca454(local_340);
        FUN_10003bf2c(p_Var27,puVar52);
        goto LAB_100ac5b2c;
      }
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var27,puVar52);
      _fseeko(*(FILE **)(unaff_x20 + lVar17),oVar37,0);
      pFVar47 = *(FILE **)(unaff_x20 + lVar17);
      local_400 = (undefined *)0x0;
      uVar43 = (uint)(sVar26 >> 0x20);
      uVar40 = uVar43 >> 0x1e;
      if (uVar43 >> 0x1e < 2) {
        if (uVar40 != 0) {
          lVar54 = (long)iVar50;
          lVar33 = lVar46;
          if (lVar46 < lVar54) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7270);
            (*pcVar18)();
          }
          goto LAB_100ac6c08;
        }
        local_3d0[8] = SUB81(sVar26,0);
        local_3d0[9] = SUB81(sVar26 >> 8,0);
        local_3d0[10] = SUB81(sVar26 >> 0x10,0);
        local_3d0[0xb] = SUB81(sVar26 >> 0x18,0);
        local_3d0[0xc] = SUB81(sVar26 >> 0x20,0);
        local_3d0[0xd] = SUB81(sVar26 >> 0x28,0);
        p_Var27 = local_3d0 + (sVar26 >> 0x30 & 0xff);
        local_3d0[0] = _Var3;
        local_3d0[1] = (__DataStorage)uVar4;
        local_3d0[2] = (__DataStorage)uVar5;
        local_3d0[3] = (__DataStorage)uVar6;
        local_3d0[4] = (__DataStorage)uVar7;
        local_3d0[5] = (__DataStorage)uVar8;
        local_3d0[6] = (__DataStorage)uVar9;
        local_3d0[7] = (__DataStorage)uVar15;
LAB_100ac6c3c:
        FUN_100ad5e08(local_3d0,p_Var27,&local_400,puVar24,param_8,pFVar47);
      }
      else {
        if (uVar40 != 2) {
          local_3d0[8] = (__DataStorage)0x0;
          local_3d0[9] = (__DataStorage)0x0;
          local_3d0[10] = (__DataStorage)0x0;
          local_3d0[0xb] = (__DataStorage)0x0;
          local_3d0[0xc] = (__DataStorage)0x0;
          local_3d0[0xd] = (__DataStorage)0x0;
          local_3d0[0] = (__DataStorage)0x0;
          local_3d0[1] = (__DataStorage)0x0;
          local_3d0[2] = (__DataStorage)0x0;
          local_3d0[3] = (__DataStorage)0x0;
          local_3d0[4] = (__DataStorage)0x0;
          local_3d0[5] = (__DataStorage)0x0;
          local_3d0[6] = (__DataStorage)0x0;
          local_3d0[7] = (__DataStorage)0x0;
          p_Var27 = local_3d0;
          goto LAB_100ac6c3c;
        }
        lVar54 = *(long *)(puVar25 + 0x10);
        lVar33 = *(long *)(puVar25 + 0x18);
LAB_100ac6c08:
        FUN_100ac9f90(lVar54,lVar33,sVar26 & 0x3fffffffffffffff,&local_400,puVar24,param_8,pFVar47);
      }
      iVar22 = _ferror(pFVar47);
      puVar52 = (undefined1 *)CONCAT44(extraout_var_04,iVar22);
      if (0 < iVar22) {
        FUN_100abcb78();
        unaff_x21 = &DAT_100f31588;
        _swift_allocError(&DAT_100f31588,puVar52,0,0);
        *puVar52 = 1;
        _swift_willThrow();
LAB_100ac7014:
        p_Var27 = local_340;
        goto LAB_100ac5b20;
      }
      uVar43 = 0x1ed;
      if (param_3 != '\x01') {
        uVar43 = 0x1a4;
      }
      if ((param_6 & 0xff0000) != 0x10000) {
        uVar43 = param_6;
      }
      if (param_3 == '\0') {
        _Var21 = Darwin::get_S_IFREG();
        uVar40 = (uint)_Var21;
      }
      else if (param_3 == '\x01') {
        _Var21 = Darwin::get_S_IFDIR();
        uVar40 = (uint)_Var21;
      }
      else {
        _Var21 = Darwin::get_S_IFLNK();
        uVar40 = (uint)_Var21;
      }
      FUN_100abb758(auStack_228,&local_120,local_558,(uVar40 | uVar43) << 0x10);
      if (unaff_x21 != (undefined *)0x0) goto LAB_100ac7014;
      puVar52 = (undefined1 *)_ftello(*(FILE **)(unaff_x20 + lVar17));
      if ((long)puVar52 < 0) {
        FUN_100ab8c74();
        unaff_x21 = &DAT_100f31130;
        _swift_allocError(&DAT_100f31130,puVar52,0,0);
        *puVar52 = 1;
        _swift_willThrow();
        FUN_100abce14(auStack_228);
        FUN_100aca454(local_340);
        goto LAB_100ac5b2c;
      }
      FUN_100abbee8(local_3d0,auStack_228,oVar37,puVar52,1);
      lVar46 = local_3b0;
      pcVar18 = local_3b8;
      uVar44 = uStack_3bc;
      uVar23 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
      uVar59 = CONCAT17(local_3d0[0xb],
                        CONCAT16(local_3d0[10],
                                 CONCAT15(local_3d0[9],
                                          CONCAT14(local_3d0[8],
                                                   CONCAT13(local_3d0[7],
                                                            CONCAT12(local_3d0[6],
                                                                     CONCAT11(local_3d0[5],
                                                                              local_3d0[4])))))));
      uVar60 = CONCAT44(uStack_3c0,CONCAT22(uStack_3c2,CONCAT11(local_3d0[0xd],local_3d0[0xc])));
      uVar16 = CONCAT44(uStack_36c,uStack_370);
      FUN_100abce14(auStack_228);
      FUN_100aca454(local_340);
      lStack_3f8 = plVar1[1];
      local_400 = (undefined *)*plVar1;
      lStack_3e8 = plVar1[3];
      lStack_3f0 = plVar1[2];
      local_3e0 = plVar1[4];
      *(undefined4 *)plVar1 = uVar23;
      *(undefined8 *)((long)plVar1 + 4) = uVar59;
      *(undefined8 *)((long)plVar1 + 0xc) = uVar60;
      *(undefined2 *)((long)plVar1 + 0x14) = uVar44;
      plVar1[3] = (long)pcVar18;
      plVar1[4] = lVar46;
      FUN_100abcbf4(&local_400);
      uVar51 = puVar2[9];
      uVar59 = puVar2[8];
      uVar64 = puVar2[0xb];
      uVar62 = puVar2[10];
      uStack_370 = *(undefined4 *)(puVar2 + 0xc);
      uVar61 = puVar2[1];
      uVar60 = *puVar2;
      local_3b8 = (code *)puVar2[3];
      uVar63 = puVar2[2];
      local_3d0[8] = SUB81(uVar61,0);
      local_3d0[9] = SUB81((ulong)uVar61 >> 8,0);
      local_3d0[10] = SUB81((ulong)uVar61 >> 0x10,0);
      local_3d0[0xb] = SUB81((ulong)uVar61 >> 0x18,0);
      local_3d0[0xc] = SUB81((ulong)uVar61 >> 0x20,0);
      local_3d0[0xd] = SUB81((ulong)uVar61 >> 0x28,0);
      uStack_3c2 = (undefined2)((ulong)uVar61 >> 0x30);
      local_3d0[0] = SUB81(uVar60,0);
      local_3d0[1] = SUB81((ulong)uVar60 >> 8,0);
      local_3d0[2] = SUB81((ulong)uVar60 >> 0x10,0);
      local_3d0[3] = SUB81((ulong)uVar60 >> 0x18,0);
      local_3d0[4] = SUB81((ulong)uVar60 >> 0x20,0);
      local_3d0[5] = SUB81((ulong)uVar60 >> 0x28,0);
      local_3d0[6] = SUB81((ulong)uVar60 >> 0x30,0);
      local_3d0[7] = SUB81((ulong)uVar60 >> 0x38,0);
      uStack_3c0 = (undefined4)uVar63;
      uStack_3bc = (undefined2)((ulong)uVar63 >> 0x20);
      uStack_3ba = (undefined2)((ulong)uVar63 >> 0x30);
      uVar63 = puVar2[5];
      local_3b0 = puVar2[4];
      uVar61 = puVar2[7];
      uVar60 = puVar2[6];
      puVar2[1] = uStack_3a0;
      *puVar2 = uStack_3a8;
      puVar2[3] = local_390;
      puVar2[2] = uStack_398;
      puVar2[5] = uStack_380;
      puVar2[4] = uStack_388;
      puVar2[7] = uVar16;
      puVar2[6] = local_378;
      puVar2[9] = uStack_360;
      puVar2[8] = local_368;
      puVar2[0xb] = uStack_350;
      puVar2[10] = local_358;
      *(undefined4 *)(puVar2 + 0xc) = local_348;
      uStack_3a8 = uVar63;
      uStack_3a0 = uVar60;
      uStack_398 = uVar61;
      local_390 = uVar59;
      uStack_388 = uVar51;
      uStack_380 = uVar62;
      local_378 = uVar64;
      FUN_1000fb4c4(local_3d0,&DAT_100ff82d0,&DAT_100c94208);
      _fflush(*(FILE **)(unaff_x20 + lVar17));
    }
    else {
      p_Var27 = (__DataStorage *)0x0;
      if (param_3 == '\x01') {
        (*param_10)(0,0);
        sVar26 = local_548;
        if (unaff_x21 == (undefined *)0x0) {
          FUN_10003bf2c();
          if (param_9 != 0) {
            IVar29 = objc_stub::FUN_100c108c0(param_9);
            objc_stub::setCompletedUnitCount_(param_9,IVar29);
          }
          uVar23 = 0;
          uVar48 = 0;
          goto LAB_100ac6730;
        }
      }
      else {
        uVar51 = param_4;
        (*param_10)();
        sVar26 = local_548;
        if (unaff_x21 == (undefined *)0x0) {
          uVar43 = (uint)(uVar51 >> 0x20);
          uVar40 = uVar43 >> 0x1e;
          if (uVar43 >> 0x1e < 2) {
            iVar22 = (int)p_Var27;
            if (uVar40 != 0) {
              lVar33 = (long)iVar22;
              lVar54 = ((long)p_Var27 >> 0x20) - lVar33;
              if ((long)p_Var27 >> 0x20 < lVar33) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac724c);
                (*pcVar18)();
              }
              p_Var28 = p_Var27;
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var27);
              if (p_Var28 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var28 = (__DataStorage *)0x0;
LAB_100ac6524:
                p_Var34 = (__DataStorage *)0x0;
              }
              else {
                p_Var34 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
                if (SBORROW8(lVar33,(long)p_Var34)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7264);
                  (*pcVar18)();
                }
                p_Var28 = p_Var28 + (lVar33 - (long)p_Var34);
                lVar35 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var34);
                if (p_Var28 == (__DataStorage *)0x0) goto LAB_100ac6524;
                if (lVar54 <= lVar35) {
                  lVar35 = lVar54;
                }
                p_Var34 = p_Var28 + lVar35;
              }
              FUN_100ad3f98(local_3d0,p_Var28,p_Var34,p_Var27,uVar51,0);
              uVar23 = CONCAT13(local_3d0[3],
                                CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
              local_568 = *(FILE **)(unaff_x20 + lVar17);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
              if (p_Var28 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),(__DataStorage *)0x0);
              }
              else {
                p_Var34 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
                if (SBORROW8(lVar33,(long)p_Var34)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7268);
                  (*pcVar18)();
                }
                p_Var28 = p_Var28 + (lVar33 - (long)p_Var34);
                lVar33 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var34);
                if (p_Var28 != (__DataStorage *)0x0) {
                  if (lVar54 <= lVar33) {
                    lVar33 = lVar54;
                  }
                  if (lVar33 != 0) {
                    iVar41 = (int)((ulong)p_Var27 >> 0x20);
                    if (SBORROW4(iVar41,iVar22)) {
                    /* WARNING: Does not return */
                      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7284);
                      (*pcVar18)();
                    }
                    sVar39 = (size_t)(iVar41 - iVar22);
                    goto LAB_100ac665c;
                  }
                }
              }
              goto LAB_100ac6694;
            }
            _Var10 = SUB81(p_Var27,0);
            local_568 = (FILE *)((ulong)p_Var27 >> 8);
            local_3d0[1] = SUB81((ulong)p_Var27 >> 8,0);
            local_570 = (ulong)p_Var27 >> 0x10;
            local_3d0[2] = SUB81((ulong)p_Var27 >> 0x10,0);
            local_578 = (ulong)p_Var27 >> 0x18;
            local_3d0[3] = SUB81((ulong)p_Var27 >> 0x18,0);
            local_580 = (ulong)p_Var27 >> 0x20;
            local_3d0[4] = SUB81((ulong)p_Var27 >> 0x20,0);
            local_588 = (ulong)p_Var27 >> 0x28;
            local_3d0[5] = SUB81((ulong)p_Var27 >> 0x28,0);
            local_590 = (ulong)p_Var27 >> 0x30;
            local_3d0[6] = SUB81((ulong)p_Var27 >> 0x30,0);
            local_598 = (ulong)p_Var27 >> 0x38;
            local_3d0[7] = SUB81((ulong)p_Var27 >> 0x38,0);
            local_5a0 = uVar51 >> 8;
            uVar56 = (undefined1)uVar51;
            local_3d0[9] = SUB81(uVar51 >> 8,0);
            uVar11 = (undefined1)(uVar51 >> 0x10);
            uVar12 = (undefined1)(uVar51 >> 0x18);
            uVar13 = (undefined1)(uVar51 >> 0x20);
            asStack_5b0[1] = uVar51 >> 0x30 & 0xff;
            uVar14 = (undefined1)(uVar51 >> 0x28);
            local_3d0[0] = _Var10;
            local_3d0[8] = (__DataStorage)uVar56;
            local_3d0[10] = (__DataStorage)uVar11;
            local_3d0[0xb] = (__DataStorage)uVar12;
            local_3d0[0xc] = (__DataStorage)uVar13;
            local_3d0[0xd] = (__DataStorage)uVar14;
            FUN_100ad3f98(local_340,local_3d0,local_3d0 + asStack_5b0[1],p_Var27,uVar51,0);
            uVar23 = CONCAT13(local_340[3],
                              CONCAT12(local_340[2],CONCAT11(local_340[1],local_340[0])));
            pFVar47 = *(FILE **)(unaff_x20 + lVar17);
            local_3d0[1] = SUB81(local_568,0);
            local_3d0[2] = SUB81(local_570,0);
            local_3d0[3] = SUB81(local_578,0);
            local_3d0[4] = SUB81(local_580,0);
            local_3d0[5] = SUB81(local_588,0);
            local_3d0[6] = SUB81(local_590,0);
            local_3d0[7] = SUB81(local_598,0);
            local_3d0[9] = SUB81(local_5a0,0);
            if ((uVar51 & 0xff000000000000) == 0) {
              uVar48 = 0;
              sVar26 = local_548;
              local_3d0[0] = _Var10;
              local_3d0[8] = (__DataStorage)uVar56;
              local_3d0[10] = (__DataStorage)uVar11;
              local_3d0[0xb] = (__DataStorage)uVar12;
              local_3d0[0xc] = (__DataStorage)uVar13;
              local_3d0[0xd] = (__DataStorage)uVar14;
            }
            else {
              local_3d0[0] = _Var10;
              local_3d0[8] = (__DataStorage)uVar56;
              local_3d0[10] = (__DataStorage)uVar11;
              local_3d0[0xb] = (__DataStorage)uVar12;
              local_3d0[0xc] = (__DataStorage)uVar13;
              local_3d0[0xd] = (__DataStorage)uVar14;
              uVar48 = _fwrite(local_3d0,1,asStack_5b0[1],pFVar47);
              sVar26 = local_548;
            }
          }
          else {
            if (uVar40 != 2) {
              local_3d0[8] = (__DataStorage)0x0;
              local_3d0[9] = (__DataStorage)0x0;
              local_3d0[10] = (__DataStorage)0x0;
              local_3d0[0xb] = (__DataStorage)0x0;
              local_3d0[0xc] = (__DataStorage)0x0;
              local_3d0[0xd] = (__DataStorage)0x0;
              local_3d0[0] = (__DataStorage)0x0;
              local_3d0[1] = (__DataStorage)0x0;
              local_3d0[2] = (__DataStorage)0x0;
              local_3d0[3] = (__DataStorage)0x0;
              local_3d0[4] = (__DataStorage)0x0;
              local_3d0[5] = (__DataStorage)0x0;
              local_3d0[6] = (__DataStorage)0x0;
              local_3d0[7] = (__DataStorage)0x0;
              FUN_100ad3f98(local_340,local_3d0,local_3d0,p_Var27,uVar51,0);
              uVar48 = 0;
              uVar23 = CONCAT13(local_340[3],
                                CONCAT12(local_340[2],CONCAT11(local_340[1],local_340[0])));
              pFVar47 = *(FILE **)(unaff_x20 + lVar17);
              goto LAB_100ac6698;
            }
            lVar54 = *(long *)(p_Var27 + 0x10);
            lVar33 = *(long *)(p_Var27 + 0x18);
            p_Var28 = p_Var27;
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var27);
            p_Var34 = (__DataStorage *)0x0;
            if (p_Var28 != (__DataStorage *)0x0) {
              p_Var34 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
              if (SBORROW8(lVar54,(long)p_Var34)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7260);
                (*pcVar18)();
              }
              p_Var28 = p_Var28 + (lVar54 - (long)p_Var34);
            }
            lVar35 = lVar33 - lVar54;
            if (SBORROW8(lVar33,lVar54)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7250);
              (*pcVar18)();
            }
            lVar54 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var34);
            if (p_Var28 == (__DataStorage *)0x0) {
              p_Var34 = (__DataStorage *)0x0;
            }
            else {
              if (lVar35 <= lVar54) {
                lVar54 = lVar35;
              }
              p_Var34 = p_Var28 + lVar54;
            }
            FUN_100ad3f98(local_3d0,p_Var28,p_Var34,p_Var27,uVar51,0);
            uVar23 = CONCAT13(local_3d0[3],
                              CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
            local_568 = *(FILE **)(unaff_x20 + lVar17);
            lVar54 = *(long *)(p_Var27 + 0x10);
            lVar33 = *(long *)(p_Var27 + 0x18);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
            p_Var34 = (__DataStorage *)0x0;
            if (p_Var28 != (__DataStorage *)0x0) {
              p_Var34 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var28);
              if (SBORROW8(lVar54,(long)p_Var34)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac726c);
                (*pcVar18)();
              }
              p_Var28 = p_Var28 + (lVar54 - (long)p_Var34);
            }
            lVar35 = lVar33 - lVar54;
            if (SBORROW8(lVar33,lVar54)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7254);
              (*pcVar18)();
            }
            lVar54 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar51 & 0x3fffffffffffffff),p_Var34);
            if (p_Var28 != (__DataStorage *)0x0) {
              if (lVar35 <= lVar54) {
                lVar54 = lVar35;
              }
              if (lVar54 != 0) {
                sVar39 = *(long *)(p_Var27 + 0x18) - *(long *)(p_Var27 + 0x10);
                if (SBORROW8(*(long *)(p_Var27 + 0x18),*(long *)(p_Var27 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7278);
                  (*pcVar18)();
                }
LAB_100ac665c:
                pFVar47 = local_568;
                uVar48 = _fwrite(p_Var28,1,sVar39,local_568);
                goto LAB_100ac6698;
              }
            }
LAB_100ac6694:
            uVar48 = 0;
            pFVar47 = local_568;
          }
LAB_100ac6698:
          iVar22 = _ferror(pFVar47);
          if (iVar22 < 1) {
            FUN_10003bf2c(p_Var27,uVar51);
            if (param_9 != 0) {
              IVar29 = objc_stub::FUN_100c108c0(param_9);
              objc_stub::setCompletedUnitCount_(param_9,IVar29);
            }
            goto LAB_100ac6730;
          }
          _swift_bridgeObjectRelease();
          FUN_100abcb78();
          unaff_x21 = &DAT_100f31588;
          _swift_allocError(&DAT_100f31588,param_2,0,0);
          *param_2 = 1;
          _swift_willThrow();
          FUN_100aca454(&local_2d8);
          FUN_10003bf2c(p_Var27,uVar51);
          goto LAB_100ac5b2c;
        }
      }
      sVar26 = local_548;
      _swift_bridgeObjectRelease(param_2);
      p_Var27 = (__DataStorage *)&local_2d8;
LAB_100ac5b20:
      FUN_100aca454(p_Var27);
LAB_100ac5b2c:
      local_400 = unaff_x21;
      _swift_errorRetain(unaff_x21);
      puVar30 = &DAT_100ff8480;
      FUN_1000f7830(&DAT_100ff8480,&DAT_100c94348);
      pcVar32 = &local_469;
      _swift_dynamicCast(pcVar32,&local_400,puVar30,&DAT_100f31130,0);
      if (((int)pcVar32 != 0) && (local_469 == '\x05')) {
        _swift_errorRelease(unaff_x21);
        _fflush(*(FILE **)(unaff_x20 + lVar17));
        iVar22 = _fileno(*(FILE **)(unaff_x20 + lVar17));
        p_Var27 = local_558;
        _ftruncate(iVar22,(off_t)local_558);
        iVar22 = _fseeko(*(FILE **)(unaff_x20 + lVar17),(off_t)p_Var27,0);
        p_Var36 = (__DataStorage *)CONCAT44(extraout_var_00,iVar22);
        pFVar47 = *(FILE **)(unaff_x20 + lVar17);
        uVar43 = (uint)(sVar26 >> 0x20);
        uVar40 = uVar43 >> 0x1e;
        if (uVar43 >> 0x1e < 2) {
          if (uVar40 == 0) {
            local_3d0[8] = SUB81(sVar26,0);
            local_3d0[9] = SUB81(sVar26 >> 8,0);
            local_3d0[10] = SUB81(sVar26 >> 0x10,0);
            local_3d0[0xb] = SUB81(sVar26 >> 0x18,0);
            local_3d0[0xc] = SUB81(sVar26 >> 0x20,0);
            local_3d0[0xd] = SUB81(sVar26 >> 0x28,0);
            local_3d0[0] = _Var3;
            local_3d0[1] = (__DataStorage)uVar4;
            local_3d0[2] = (__DataStorage)uVar5;
            local_3d0[3] = (__DataStorage)uVar6;
            local_3d0[4] = (__DataStorage)uVar7;
            local_3d0[5] = (__DataStorage)uVar8;
            local_3d0[6] = (__DataStorage)uVar9;
            local_3d0[7] = (__DataStorage)uVar15;
            if ((puVar24 != (undefined1 *)0x0) && ((sVar26 & 0xff000000000000) != 0)) {
              puVar52 = (undefined1 *)0x0;
              do {
                sVar26 = (long)puVar24 - (long)puVar52;
                if (puVar24 < puVar52) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71d8);
                  (*pcVar18)();
                }
                if ((long)sVar26 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71dc);
                  (*pcVar18)();
                }
                sVar39 = param_8;
                if ((long)sVar26 <= (long)param_8) {
                  sVar39 = sVar26;
                }
                p_Var27 = (__DataStorage *)&DAT_00000001;
                _fwrite(local_3d0 + (long)puVar52,1,sVar39,pFVar47);
                if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71e0);
                  (*pcVar18)();
                }
                puVar52 = puVar52 + sVar39;
              } while (puVar52 < puVar24);
            }
          }
          else {
            lVar54 = (long)iVar50;
            if (lVar46 < lVar54) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7218);
              (*pcVar18)();
            }
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
            if (p_Var36 == (__DataStorage *)0x0) {
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            }
            else {
              p_Var28 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
              if (SBORROW8(lVar54,(long)p_Var28)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7228);
                (*pcVar18)();
              }
              lVar33 = Foundation::__DataStorage::get__length
                                 ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var28);
              if (p_Var36 + (lVar54 - (long)p_Var28) != (__DataStorage *)0x0) {
                if (lVar46 - lVar54 <= lVar33) {
                  lVar33 = lVar46 - lVar54;
                }
                if ((puVar24 != (undefined1 *)0x0) && (lVar33 != 0)) {
                  puVar52 = (undefined1 *)0x0;
                  do {
                    sVar26 = (long)puVar24 - (long)puVar52;
                    if (puVar24 < puVar52) {
                    /* WARNING: Does not return */
                      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71f0);
                      (*pcVar18)();
                    }
                    if ((long)sVar26 < 0) {
                    /* WARNING: Does not return */
                      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71f4);
                      (*pcVar18)();
                    }
                    sVar39 = param_8;
                    if ((long)sVar26 <= (long)param_8) {
                      sVar39 = sVar26;
                    }
                    p_Var27 = (__DataStorage *)&DAT_00000001;
                    _fwrite(p_Var36 + (lVar54 - (long)p_Var28) + (long)puVar52,1,sVar39,pFVar47);
                    if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                      pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71f8);
                      (*pcVar18)();
                    }
                    puVar52 = puVar52 + sVar39;
                  } while (puVar52 < puVar24);
                }
              }
            }
          }
        }
        else if (uVar40 == 2) {
          lVar54 = *(long *)(puVar25 + 0x10);
          lVar33 = *(long *)(puVar25 + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
          p_Var28 = (__DataStorage *)0x0;
          if (p_Var36 != (__DataStorage *)0x0) {
            p_Var28 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
            if (SBORROW8(lVar54,(long)p_Var28)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7224);
              (*pcVar18)();
            }
            p_Var36 = p_Var36 + (lVar54 - (long)p_Var28);
          }
          lVar35 = lVar33 - lVar54;
          if (SBORROW8(lVar33,lVar54)) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac721c);
            (*pcVar18)();
          }
          lVar54 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var28);
          if (p_Var36 != (__DataStorage *)0x0) {
            if (lVar35 <= lVar54) {
              lVar54 = lVar35;
            }
            if ((puVar24 != (undefined1 *)0x0) && (lVar54 != 0)) {
              puVar52 = (undefined1 *)0x0;
              do {
                sVar26 = (long)puVar24 - (long)puVar52;
                if (puVar24 < puVar52) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71e4);
                  (*pcVar18)();
                }
                if ((long)sVar26 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71e8);
                  (*pcVar18)();
                }
                sVar39 = param_8;
                if ((long)sVar26 <= (long)param_8) {
                  sVar39 = sVar26;
                }
                p_Var27 = (__DataStorage *)&DAT_00000001;
                _fwrite(p_Var36 + (long)puVar52,1,sVar39,pFVar47);
                if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac71ec);
                  (*pcVar18)();
                }
                puVar52 = puVar52 + sVar39;
              } while (puVar52 < puVar24);
            }
          }
        }
        iVar22 = _ferror(pFVar47);
        sVar26 = local_548;
        p_Var36 = (__DataStorage *)CONCAT44(extraout_var_01,iVar22);
        if (iVar22 < 1) {
          pFVar47 = *(FILE **)(unaff_x20 + lVar17);
          local_478 = 0;
          if (uVar40 < 2) {
            if (uVar40 == 0) {
              local_3d0[8] = SUB81(local_548,0);
              local_3d0[9] = SUB81(local_548 >> 8,0);
              local_3d0[10] = SUB81(local_548 >> 0x10,0);
              local_3d0[0xb] = SUB81(local_548 >> 0x18,0);
              local_3d0[0xc] = SUB81(local_548 >> 0x20,0);
              local_3d0[0xd] = SUB81(local_548 >> 0x28,0);
              local_3d0[0] = _Var3;
              local_3d0[1] = (__DataStorage)uVar4;
              local_3d0[2] = (__DataStorage)uVar5;
              local_3d0[3] = (__DataStorage)uVar6;
              local_3d0[4] = (__DataStorage)uVar7;
              local_3d0[5] = (__DataStorage)uVar8;
              local_3d0[6] = (__DataStorage)uVar9;
              local_3d0[7] = (__DataStorage)uVar15;
              if ((local_548 & 0xff000000000000) != 0) {
                p_Var27 = (__DataStorage *)&DAT_00000001;
                _fwrite(local_3d0,1,local_548 >> 0x30 & 0xff,pFVar47);
              }
            }
            else {
              lVar54 = (long)iVar50;
              if (lVar46 < lVar54) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac722c);
                (*pcVar18)();
              }
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(local_548 & 0x3fffffffffffffff),p_Var36);
              if (p_Var36 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                p_Var36 = (__DataStorage *)0x0;
                p_Var27 = (__DataStorage *)0x0;
              }
              else {
                p_Var27 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
                if (SBORROW8(lVar54,(long)p_Var27)) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7248);
                  (*pcVar18)();
                }
                p_Var28 = p_Var36 + (lVar54 - (long)p_Var27);
                lVar33 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var27);
                if (lVar46 - lVar54 <= lVar33) {
                  lVar33 = lVar46 - lVar54;
                }
                p_Var36 = (__DataStorage *)0x0;
                if (p_Var28 != (__DataStorage *)0x0) {
                  p_Var36 = p_Var28;
                }
                p_Var27 = (__DataStorage *)0x0;
                if (p_Var28 != (__DataStorage *)0x0) {
                  p_Var27 = p_Var28 + lVar33;
                }
              }
LAB_100ac62e4:
              FUN_100ad5d64(p_Var36,p_Var27,&local_478,puVar25,sVar26,pFVar47);
            }
          }
          else if (uVar40 == 2) {
            lVar46 = *(long *)(puVar25 + 0x10);
            lVar54 = *(long *)(puVar25 + 0x18);
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(local_548 & 0x3fffffffffffffff),p_Var36);
            p_Var27 = (__DataStorage *)0x0;
            if (p_Var36 != (__DataStorage *)0x0) {
              p_Var27 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var36);
              if (SBORROW8(lVar46,(long)p_Var27)) {
                    /* WARNING: Does not return */
                pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7244);
                (*pcVar18)();
              }
              p_Var36 = p_Var36 + (lVar46 - (long)p_Var27);
            }
            lVar33 = lVar54 - lVar46;
            if (SBORROW8(lVar54,lVar46)) {
                    /* WARNING: Does not return */
              pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7230);
              (*pcVar18)();
            }
            lVar46 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(sVar26 & 0x3fffffffffffffff),p_Var27);
            if (lVar33 <= lVar46) {
              lVar46 = lVar33;
            }
            p_Var27 = (__DataStorage *)0x0;
            if (p_Var36 != (__DataStorage *)0x0) {
              p_Var27 = p_Var36 + lVar46;
            }
            goto LAB_100ac62e4;
          }
          iVar22 = _ferror(pFVar47);
          p_Var36 = (__DataStorage *)CONCAT44(extraout_var_02,iVar22);
          if (0 < iVar22) goto LAB_100ac6300;
          sVar26 = local_548;
          if (uStack_248 >> 0x3c < 0xf) {
            uStack_148 = uStack_248;
            local_150 = local_250;
            uStack_138 = uStack_238;
            local_140 = uStack_240;
            local_130 = local_230;
            uStack_188 = uStack_288;
            local_190 = local_290;
            pcStack_178 = pcStack_278;
            local_180 = uStack_280;
            uStack_158 = uStack_258;
            local_160 = uStack_260;
            uStack_168 = uStack_268;
            local_170 = local_270;
            local_3d0[8] = SUB81(uStack_288,0);
            local_3d0[9] = SUB81((ulong)uStack_288 >> 8,0);
            local_3d0[10] = SUB81((ulong)uStack_288 >> 0x10,0);
            local_3d0[0xb] = SUB81((ulong)uStack_288 >> 0x18,0);
            local_3d0[0xc] = SUB81((ulong)uStack_288 >> 0x20,0);
            local_3d0[0xd] = SUB81((ulong)uStack_288 >> 0x28,0);
            uStack_3c2 = (undefined2)((ulong)uStack_288 >> 0x30);
            local_3d0[0] = SUB81(local_290,0);
            local_3d0[1] = SUB81((ulong)local_290 >> 8,0);
            local_3d0[2] = SUB81((ulong)local_290 >> 0x10,0);
            local_3d0[3] = SUB81((ulong)local_290 >> 0x18,0);
            local_3d0[4] = SUB81((ulong)local_290 >> 0x20,0);
            local_3d0[5] = SUB81((ulong)local_290 >> 0x28,0);
            local_3d0[6] = SUB81((ulong)local_290 >> 0x30,0);
            local_3d0[7] = SUB81((ulong)local_290 >> 0x38,0);
            local_3b8 = pcStack_278;
            uStack_3c0 = (undefined4)uStack_280;
            uStack_3bc = (undefined2)((ulong)uStack_280 >> 0x20);
            uStack_3ba = (undefined2)((ulong)uStack_280 >> 0x30);
            uStack_370 = local_230;
            uStack_3a8 = uStack_268;
            local_3b0 = local_270;
            uStack_398 = uStack_258;
            uStack_3a0 = uStack_260;
            uStack_388 = uStack_248;
            local_390 = local_250;
            local_378 = uStack_238;
            uStack_380 = uStack_240;
            p_Var36 = local_3d0;
            p_Var27 = local_340;
            FUN_100aca488();
            FUN_100accae0();
            sVar26 = local_548;
            pFVar47 = *(FILE **)(unaff_x20 + lVar17);
            local_480 = 0;
            uVar43 = (uint)((ulong)p_Var27 >> 0x20);
            uVar40 = uVar43 >> 0x1e;
            if (uVar43 >> 0x1e < 2) {
              if (uVar40 != 0) {
                lVar46 = (long)(int)p_Var36;
                lVar54 = (long)p_Var36 >> 0x20;
                if (lVar54 < lVar46) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac727c);
                  (*pcVar18)();
                }
                goto LAB_100ac6ce4;
              }
              local_340[0] = SUB81(p_Var36,0);
              local_340[1] = SUB81((ulong)p_Var36 >> 8,0);
              local_340[2] = SUB81((ulong)p_Var36 >> 0x10,0);
              local_340[3] = SUB81((ulong)p_Var36 >> 0x18,0);
              local_340[4] = SUB81((ulong)p_Var36 >> 0x20,0);
              uStack_33b = (undefined1)((ulong)p_Var36 >> 0x28);
              uStack_33a = (undefined1)((ulong)p_Var36 >> 0x30);
              uStack_339 = (undefined1)((ulong)p_Var36 >> 0x38);
              uStack_338 = SUB81(p_Var27,0);
              uStack_337 = (undefined1)((ulong)p_Var27 >> 8);
              uStack_336 = (undefined1)((ulong)p_Var27 >> 0x10);
              uStack_335 = (undefined1)((ulong)p_Var27 >> 0x18);
              uStack_334 = (undefined1)((ulong)p_Var27 >> 0x20);
              uStack_333 = (undefined1)((ulong)p_Var27 >> 0x28);
              FUN_100ad5d64(local_340,local_340 + ((ulong)p_Var27 >> 0x30 & 0xff),&local_480,p_Var36
                            ,p_Var27,pFVar47);
LAB_100ac64f0:
              FUN_10003bf2c(p_Var36,p_Var27);
            }
            else {
              if (uVar40 != 2) goto LAB_100ac64f0;
              lVar46 = *(long *)(p_Var36 + 0x10);
              lVar54 = *(long *)(p_Var36 + 0x18);
LAB_100ac6ce4:
              FUN_1001037b4(p_Var36,p_Var27);
              FUN_1001037b4(p_Var36,p_Var27);
              FUN_100ac9e88(lVar46,lVar54,(ulong)p_Var27 & 0x3fffffffffffffff,&local_480,p_Var36,
                            p_Var27,pFVar47);
            }
            FUN_10003bf2c(p_Var36,p_Var27);
            iVar22 = _ferror(pFVar47);
            puVar52 = (undefined1 *)CONCAT44(extraout_var_05,iVar22);
            if (iVar22 < 1) {
              FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
              FUN_10003bf2c();
              goto LAB_100ac6db4;
            }
            FUN_100abcb78();
            _swift_allocError(&DAT_100f31588,puVar52,0,0);
            *puVar52 = 1;
            _swift_willThrow();
            FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
          }
          else {
LAB_100ac6db4:
            FUN_100acf2b4();
            pFVar47 = *(FILE **)(unaff_x20 + lVar17);
            uVar43 = (uint)((ulong)p_Var27 >> 0x20);
            uVar40 = uVar43 >> 0x1e;
            if (uVar43 >> 0x1e < 2) {
              if (uVar40 != 0) {
                lVar46 = (long)(int)p_Var36;
                lVar54 = (long)p_Var36 >> 0x20;
                if (lVar54 < lVar46) {
                    /* WARNING: Does not return */
                  pcVar18 = (code *)SoftwareBreakpoint(1,0x100ac7274);
                  (*pcVar18)();
                }
                goto LAB_100ac6e84;
              }
              local_3d0[0] = SUB81(p_Var36,0);
              local_3d0[1] = SUB81((ulong)p_Var36 >> 8,0);
              local_3d0[2] = SUB81((ulong)p_Var36 >> 0x10,0);
              local_3d0[3] = SUB81((ulong)p_Var36 >> 0x18,0);
              local_3d0[4] = SUB81((ulong)p_Var36 >> 0x20,0);
              local_3d0[5] = SUB81((ulong)p_Var36 >> 0x28,0);
              local_3d0[6] = SUB81((ulong)p_Var36 >> 0x30,0);
              local_3d0[7] = SUB81((ulong)p_Var36 >> 0x38,0);
              local_3d0[8] = SUB81(p_Var27,0);
              local_3d0[9] = SUB81((ulong)p_Var27 >> 8,0);
              local_3d0[10] = SUB81((ulong)p_Var27 >> 0x10,0);
              local_3d0[0xb] = SUB81((ulong)p_Var27 >> 0x18,0);
              local_3d0[0xc] = SUB81((ulong)p_Var27 >> 0x20,0);
              local_3d0[0xd] = SUB81((ulong)p_Var27 >> 0x28,0);
              p_Var28 = local_3d0 + ((ulong)p_Var27 >> 0x30 & 0xff);
LAB_100ac6edc:
              FUN_100ad5d64(local_3d0,p_Var28,local_340,p_Var36,p_Var27,pFVar47);
              FUN_10003bf2c(p_Var36,p_Var27);
            }
            else {
              if (uVar40 != 2) {
                local_3d0[8] = (__DataStorage)0x0;
                local_3d0[9] = (__DataStorage)0x0;
                local_3d0[10] = (__DataStorage)0x0;
                local_3d0[0xb] = (__DataStorage)0x0;
                local_3d0[0xc] = (__DataStorage)0x0;
                local_3d0[0xd] = (__DataStorage)0x0;
                local_3d0[0] = (__DataStorage)0x0;
                local_3d0[1] = (__DataStorage)0x0;
                local_3d0[2] = (__DataStorage)0x0;
                local_3d0[3] = (__DataStorage)0x0;
                local_3d0[4] = (__DataStorage)0x0;
                local_3d0[5] = (__DataStorage)0x0;
                local_3d0[6] = (__DataStorage)0x0;
                local_3d0[7] = (__DataStorage)0x0;
                p_Var28 = local_3d0;
                goto LAB_100ac6edc;
              }
              lVar46 = *(long *)(p_Var36 + 0x10);
              lVar54 = *(long *)(p_Var36 + 0x18);
LAB_100ac6e84:
              FUN_1001037b4(p_Var36,p_Var27);
              FUN_1001037b4(p_Var36,p_Var27);
              FUN_100ac9e88(lVar46,lVar54,(ulong)p_Var27 & 0x3fffffffffffffff,local_340,p_Var36,
                            p_Var27,pFVar47);
            }
            FUN_10003bf2c(p_Var36,p_Var27);
            iVar22 = _ferror(pFVar47);
            puVar52 = (undefined1 *)CONCAT44(extraout_var_06,iVar22);
            if (iVar22 < 1) {
              FUN_10003bf2c(p_Var36,p_Var27);
              FUN_100ab8c74();
              _swift_allocError(&DAT_100f31130,p_Var36,0,0);
              *p_Var36 = (__DataStorage)0x5;
              _swift_willThrow();
              _swift_errorRelease(local_400);
              _fflush(*(FILE **)(unaff_x20 + lVar17));
              FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
              FUN_100abcbf4(&local_1c0);
              goto LAB_100ac636c;
            }
            FUN_100abcb78();
            _swift_allocError(&DAT_100f31588,puVar52,0,0);
            *puVar52 = 1;
            _swift_willThrow();
          }
          FUN_10003bf2c(p_Var36,p_Var27);
        }
        else {
LAB_100ac6300:
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,p_Var36,0,0);
          *p_Var36 = (__DataStorage)0x1;
          _swift_willThrow();
        }
        _swift_errorRelease(local_400);
        _fflush(*(FILE **)(unaff_x20 + lVar17));
        FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
        FUN_100abcbf4(&local_1c0);
        sVar26 = local_548;
        goto LAB_100ac636c;
      }
      _swift_errorRelease(local_400);
      _fflush(*(FILE **)(unaff_x20 + lVar17));
    }
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
  }
LAB_100ac636c:
  FUN_10003bf2c(puVar25,sVar26);
LAB_100ac6370:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ac72a0 | FUN_100ac72a0 */

undefined1  [16] FUN_100ac72a0(void)

{
  return ZEXT816(0xc000000000000000) << 0x40;
}



/* Address: 0x100ac72ac | FUN_100ac72ac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ac72ac(URL param_1,undefined8 param_2,ID param_3)

{
  NSString *pNVar1;
  ID IVar2;
  char *pcVar3;
  size_t sVar4;
  String SVar5;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  SVar5 = Foundation::URL::get_path(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  local_40 = 0;
  IVar2 = objc_stub::FUN_100c01140(param_3,pNVar1,&local_40);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  else {
    _objc_retainAutorelease();
    pcVar3 = (char *)objc_stub::fileSystemRepresentationWithPath_(param_3,IVar2);
    sVar4 = _strlen(pcVar3);
    FUN_100ac73b8(pcVar3,sVar4);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ac73b8 | FUN_100ac73b8 */

void FUN_100ac73b8(long param_1,ulong param_2)

{
  __DataStorage *this;
  RangeReference *pRVar1;
  
  if (param_1 == 0) {
    return;
  }
  if (param_2 != 0) {
    if (param_2 < 0xf) {
      FUN_100ad8f38(param_1,param_2 + param_1);
    }
    else {
      this = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
      Foundation::__DataStorage::_init(this,param_1);
      if (0x7ffffffe < param_2) {
        pRVar1 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar1,0x20,7);
        *(undefined8 *)(pRVar1 + 0x10) = 0;
        *(ulong *)(pRVar1 + 0x18) = param_2;
      }
    }
  }
  return;
}



/* Address: 0x100ac9000 | FUN_100ac9000 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ac9000(_StringGuts param_1)

{
  undefined1 *puVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  ID self;
  Encoding EVar5;
  _StringGuts _Var6;
  URL UVar7;
  ulong uVar8;
  long *unaff_x20;
  code *pcVar9;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  undefined1 auStack_a0 [8];
  code *local_98;
  undefined1 *local_90;
  long local_88;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  local_88 = *unaff_x20;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  uVar8 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_90 = auStack_a0 + -uVar8;
  lVar12 = (long)local_90 - uVar8;
  lVar10 = lVar12 - uVar8;
  puVar4 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  uVar8 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = lVar10 - uVar8;
  lVar13 = lVar14 - uVar8;
  local_98 = *(code **)(lVar11 + 0x38);
  _Var6.unknown = &DAT_00000001;
  UVar7.unknown = &DAT_00000001;
  local_80 = param_1.unknown;
  (*local_98)();
  Foundation::URL::_get_scheme((URL)param_1.unknown);
  if (_Var6.unknown == (undefined *)0x0) {
LAB_100ac9128:
    puVar4 = &_OBJC_CLASS___NSFileManager;
    _objc_allocWithZone();
    objc_stub::init((ID)puVar4);
    FUN_100ae4170(lVar10);
    self = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
    objc_stub::FUN_100c030e0(self);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Foundation::URL::appendingPathComponent(SVar15,UVar7);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    FUN_100adecf8(lVar12);
    puVar1 = local_90;
    if (unaff_x21 == 0) {
      (**(code **)(lVar11 + 0x10))(local_90,lVar12,UVar3.unknown);
      EVar5 = Encoding::_typeMetadataAccessor();
      (**(code **)(*(long *)(EVar5.unknown + -8) + 0x38))(lVar14,1,1,EVar5.unknown);
      _swift_allocObject(local_88,*(undefined4 *)(local_88 + 0x30),*(undefined2 *)(local_88 + 0x34))
      ;
      FUN_100ad0300(puVar1,0,lVar14);
      (**(code **)(lVar11 + 8))(lVar12,UVar3.unknown);
      puVar4 = local_80;
      FUN_1000fb4c4(local_80,&DAT_100ff8468,&DAT_100c94440);
      (**(code **)(lVar11 + 0x20))(puVar4,lVar10,UVar3.unknown);
      (*local_98)(puVar4,0,1,UVar3.unknown);
      return;
    }
    pcVar9 = *(code **)(lVar11 + 8);
    (*pcVar9)(lVar12,UVar3.unknown);
    (*pcVar9)(lVar10,UVar3.unknown);
  }
  else {
    UVar7.unknown = (undefined1 *)0x79726f6d656d;
    if (param_1.unknown == (undefined *)0x79726f6d656d && _Var6.unknown == &DAT_e600000000000000) {
      _swift_bridgeObjectRelease(_Var6.unknown);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck(param_1,_Var6,(_StringComparisonResult)0x6d);
      _swift_bridgeObjectRelease(_Var6.unknown);
      if (!bVar2) goto LAB_100ac9128;
    }
    lVar10 = _TtC13ZIPFoundation7Archive::pathEncoding;
    _swift_beginAccess((long)unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,auStack_78,0,0);
    FUN_1000f8cac((long)unaff_x20 + lVar10,lVar13,&DAT_100ff82c0,&DAT_100c94430);
    _swift_allocObject(local_88,*(undefined4 *)(local_88 + 0x30),*(undefined2 *)(local_88 + 0x34));
    FUN_100ad0610(0,0xc000000000000000,0,lVar13);
    if (unaff_x21 == 0) {
      return;
    }
  }
  FUN_1000fb4c4(local_80,&DAT_100ff8468,&DAT_100c94440);
  return;
}



/* Address: 0x100ac9380 | FUN_100ac9380 */

void FUN_100ac9380(undefined8 param_1)

{
  URL UVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_60 [15];
  undefined1 uStack_51;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  puVar4 = auStack_60 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100ff8468;
  FUN_1000f7830(&DAT_100ff8468,&DAT_100c94440);
  lVar5 = (long)puVar4 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,lVar5,&DAT_100ff8468,&DAT_100c94440);
  lVar3 = lVar5;
  (**(code **)(lVar6 + 0x30))(lVar5,1,UVar1.unknown);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar6 + 0x20))(puVar4,lVar5,UVar1.unknown);
    FUN_100ac9d84(&uStack_51,puVar4);
    (**(code **)(lVar6 + 8))(puVar4,UVar1.unknown);
  }
  return;
}



/* Address: 0x100ac9480 | FUN_100ac9480 */

void FUN_100ac9480(__DataStorage *param_1,ulong param_2,ID param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  __DataStorage *p_Var5;
  long lVar6;
  __DataStorage *p_Var7;
  undefined4 extraout_var;
  ID IVar8;
  size_t sVar9;
  __DataStorage _Var10;
  int iVar11;
  ulong uVar12;
  int iVar13;
  FILE *pFVar14;
  uint uVar15;
  long lVar16;
  __DataStorage local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined1 local_6c;
  undefined1 local_6b;
  undefined1 local_6a;
  undefined1 local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  p_Var5 = param_1;
  if ((param_3 == 0) ||
     (p_Var5 = (__DataStorage *)objc_stub::isCancelled(param_3), (int)p_Var5 == 0)) {
    pFVar14 = *(FILE **)(param_4 + _TtC13ZIPFoundation7Archive::archiveFile);
    uVar2 = (uint)(param_2 >> 0x20);
    uVar15 = uVar2 >> 0x1e;
    iVar13 = (int)param_1;
    iVar11 = (int)((ulong)param_1 >> 0x20);
    if (uVar2 >> 0x1e < 2) {
      if (uVar15 == 0) {
        local_76 = SUB81(param_1,0);
        local_75 = (undefined1)((ulong)param_1 >> 8);
        local_74 = (undefined1)((ulong)param_1 >> 0x10);
        local_73 = (undefined1)((ulong)param_1 >> 0x18);
        local_72 = (undefined1)((ulong)param_1 >> 0x20);
        local_71 = (undefined1)((ulong)param_1 >> 0x28);
        local_70 = (undefined1)((ulong)param_1 >> 0x30);
        local_6f = (undefined1)((ulong)param_1 >> 0x38);
        local_6e = (undefined1)param_2;
        local_6d = (undefined1)(param_2 >> 8);
        local_6c = (undefined1)(param_2 >> 0x10);
        local_6b = (undefined1)(param_2 >> 0x18);
        local_6a = (undefined1)(param_2 >> 0x20);
        local_69 = (undefined1)(param_2 >> 0x28);
        if ((param_2 & 0xff000000000000) != 0) {
          sVar9 = param_2 >> 0x30 & 0xff;
          p_Var5 = &local_76;
LAB_100ac9668:
          _fwrite(p_Var5,1,sVar9,pFVar14);
        }
      }
      else {
        lVar16 = (long)iVar13;
        lVar6 = ((long)param_1 >> 0x20) - lVar16;
        if ((long)param_1 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9764);
          (*pcVar3)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9774);
            (*pcVar3)();
          }
          p_Var5 = p_Var5 + (lVar16 - (long)p_Var7);
          lVar16 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 != (__DataStorage *)0x0) {
            if (lVar6 <= lVar16) {
              lVar16 = lVar6;
            }
            if (lVar16 != 0) {
              if (SBORROW4(iVar11,iVar13)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9778);
                (*pcVar3)();
              }
              sVar9 = (size_t)(iVar11 - iVar13);
              goto LAB_100ac9668;
            }
          }
        }
      }
    }
    else if (uVar15 == 2) {
      lVar6 = *(long *)(param_1 + 0x10);
      lVar16 = *(long *)(param_1 + 0x18);
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5)
      ;
      p_Var7 = (__DataStorage *)0x0;
      if (p_Var5 != (__DataStorage *)0x0) {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar6,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9770);
          (*pcVar3)();
        }
        p_Var5 = p_Var5 + (lVar6 - (long)p_Var7);
      }
      lVar1 = lVar16 - lVar6;
      if (SBORROW8(lVar16,lVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9768);
        (*pcVar3)();
      }
      lVar6 = Foundation::__DataStorage::get__length
                        ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
      if (p_Var5 != (__DataStorage *)0x0) {
        if (lVar1 <= lVar6) {
          lVar6 = lVar1;
        }
        if (lVar6 != 0) {
          sVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac9600);
            (*pcVar3)();
          }
          goto LAB_100ac9668;
        }
      }
    }
    iVar4 = _ferror(pFVar14);
    p_Var5 = (__DataStorage *)CONCAT44(extraout_var,iVar4);
    if (iVar4 < 1) {
      if (param_3 != 0) {
        if (uVar15 < 2) {
          if (uVar15 == 0) {
            uVar12 = param_2 >> 0x30 & 0xff;
          }
          else {
            if (SBORROW4(iVar11,iVar13)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac977c);
              (*pcVar3)();
            }
            uVar12 = (ulong)(iVar11 - iVar13);
          }
        }
        else if (uVar15 == 2) {
          uVar12 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac972c);
            (*pcVar3)();
          }
        }
        else {
          uVar12 = 0;
        }
        IVar8 = objc_stub::completedUnitCount(param_3);
        if (SCARRY8(IVar8,uVar12)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ac976c);
          (*pcVar3)();
        }
        objc_stub::setCompletedUnitCount_(param_3,IVar8 + uVar12);
      }
      goto LAB_100ac96c0;
    }
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,p_Var5,0,0);
    _Var10 = (__DataStorage)0x1;
  }
  else {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,p_Var5,0,0);
    _Var10 = (__DataStorage)0x5;
  }
  *p_Var5 = _Var10;
  _swift_willThrow();
LAB_100ac96c0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ac9780 | FUN_100ac9780 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ac9780(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  bool bVar3;
  _StringGuts _Var4;
  undefined *self;
  ID self_00;
  URL UVar5;
  NSURL *pNVar6;
  ID IVar7;
  URL UVar8;
  _StringGuts _Var9;
  undefined8 *puVar10;
  NSString *pNVar11;
  char *pcVar12;
  FILE *pFVar13;
  long unaff_x20;
  long lVar14;
  undefined *unaff_x21;
  undefined8 uVar15;
  String SVar16;
  undefined auStack_400 [8];
  undefined1 auStack_3f8 [104];
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined4 uStack_318;
  undefined4 local_314;
  undefined4 uStack_310;
  undefined4 uStack_30c;
  undefined4 uStack_308;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined8 uStack_2f0;
  undefined8 uStack_2e8;
  undefined8 local_2e0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_278;
  undefined4 local_270;
  URL local_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1d8;
  undefined4 local_1d0;
  long local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined1 auStack_120 [24];
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined8 uStack_84;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var4.unknown = &DAT_100ff8468;
  _Var9.unknown = &DAT_100c94440;
  FUN_1000f7830();
  lVar14 = _TtC13ZIPFoundation7Archive::url;
  UVar8.unknown =
       auStack_400 + -(*(long *)(*(long *)(_Var4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URL::_get_scheme((URL)_Var4.unknown);
  if (_Var9.unknown != (undefined *)0x0) {
    if (_Var4.unknown == (undefined *)0x79726f6d656d && _Var9.unknown == &DAT_e600000000000000) {
      _swift_bridgeObjectRelease();
    }
    else {
      bVar3 = Swift::_stringCompareWithSmolCheck(_Var4,_Var9,(_StringComparisonResult)0x6d);
      _swift_bridgeObjectRelease();
      if (!bVar3) goto LAB_100ac9844;
    }
    lVar14 = *(long *)(param_1 + _TtC13ZIPFoundation7Archive::memoryFile);
    if (lVar14 == 0) {
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,_Var9.unknown,0,0);
      *_Var9.unknown = 1;
      _swift_willThrow();
    }
    else {
      _swift_beginAccess(lVar14 + 0x10,auStack_120,0,0);
      uVar15 = *(undefined8 *)(lVar14 + 0x10);
      uVar1 = *(undefined8 *)(lVar14 + 0x18);
      lVar14 = 0;
      FUN_100abd164();
      _swift_allocObject();
      *(undefined8 *)(lVar14 + 0x18) = uVar1;
      *(undefined8 *)(lVar14 + 0x20) = 0;
      *(undefined8 *)(lVar14 + 0x10) = uVar15;
      FUN_1001037b4(uVar15,uVar1);
      FUN_1001037b4(uVar15,uVar1);
      pFVar13 = (FILE *)0x2;
      FUN_100abce58();
      if (unaff_x21 == (undefined *)0x0) {
        FUN_100ad344c(&local_108);
        puVar10 = &local_108;
        FUN_100ab8c4c();
        if ((int)puVar10 != 1) {
          uStack_328 = uStack_a0;
          local_330 = local_a8;
          uStack_318 = uStack_90;
          uStack_320 = local_98;
          uStack_30c = (undefined4)uStack_84;
          uStack_308 = (undefined4)((ulong)uStack_84 >> 0x20);
          local_314 = uStack_8c;
          uStack_310 = uStack_88;
          uStack_368 = uStack_e0;
          local_370 = local_e8;
          uStack_358 = uStack_d0;
          uStack_360 = local_d8;
          uStack_348 = uStack_c0;
          local_350 = local_c8;
          uStack_338 = uStack_b0;
          uStack_340 = local_b8;
          uStack_388 = uStack_100;
          local_390 = local_108;
          uStack_378 = uStack_f0;
          uStack_380 = local_f8;
          _fseeko(pFVar13,0,0);
          lVar2 = _TtC13ZIPFoundation7Archive::archiveFile;
          local_2e0 = local_370;
          local_270 = uStack_308;
          uStack_2f8 = uStack_388;
          local_300 = local_390;
          uStack_2e8 = uStack_378;
          uStack_2f0 = uStack_380;
          uStack_278 = CONCAT44(uStack_30c,uStack_310);
          uStack_288 = uStack_320;
          local_290 = uStack_328;
          uStack_2c8 = uStack_360;
          local_2d0 = uStack_368;
          uStack_2b8 = local_350;
          uStack_2c0 = uStack_358;
          uStack_2a8 = uStack_340;
          local_2b0 = uStack_348;
          uStack_298 = local_330;
          uStack_2a0 = uStack_338;
          local_238 = local_370;
          uStack_240 = uStack_378;
          local_248 = uStack_380;
          uStack_250 = uStack_388;
          local_258 = local_390;
          uStack_228 = uStack_360;
          local_230 = uStack_368;
          uStack_218 = local_350;
          uStack_220 = uStack_358;
          local_1d0 = uStack_308;
          uStack_1d8 = CONCAT44(uStack_30c,uStack_310);
          uStack_1e8 = uStack_320;
          local_1f0 = uStack_328;
          uStack_208 = uStack_340;
          local_210 = uStack_348;
          uStack_1f8 = local_330;
          uStack_200 = uStack_338;
          local_260.unknown = (undefined *)pFVar13;
          local_1c8 = lVar14;
          _fclose(*(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile));
          FUN_10003bf2c(uVar15,uVar1);
          *(FILE **)(unaff_x20 + lVar2) = pFVar13;
          uVar15 = *(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile);
          *(long *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile) = lVar14;
          _swift_retain(lVar14);
          _swift_release(uVar15);
          puVar10 = (undefined8 *)
                    (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
          uStack_1b8 = puVar10[1];
          local_1c0 = *puVar10;
          uStack_1a8 = puVar10[3];
          uStack_1b0 = puVar10[2];
          local_1a0 = puVar10[4];
          puVar10[1] = uStack_388;
          *puVar10 = local_390;
          puVar10[3] = uStack_378;
          puVar10[2] = uStack_380;
          puVar10[4] = local_370;
          FUN_100abcbb8(&local_300,&local_190);
          FUN_100abcbf4(&local_1c0);
          puVar10 = (undefined8 *)
                    (unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
          uStack_148 = puVar10[9];
          local_150 = puVar10[8];
          uStack_138 = puVar10[0xb];
          uStack_140 = puVar10[10];
          local_130 = *(undefined4 *)(puVar10 + 0xc);
          uStack_188 = puVar10[1];
          local_190 = *puVar10;
          uStack_178 = puVar10[3];
          uStack_180 = puVar10[2];
          uStack_168 = puVar10[5];
          local_170 = puVar10[4];
          uStack_158 = puVar10[7];
          uStack_160 = puVar10[6];
          puVar10[1] = uStack_360;
          *puVar10 = uStack_368;
          puVar10[3] = local_350;
          puVar10[2] = uStack_358;
          *(undefined4 *)(puVar10 + 0xc) = uStack_308;
          puVar10[9] = uStack_320;
          puVar10[8] = uStack_328;
          puVar10[0xb] = CONCAT44(uStack_30c,uStack_310);
          puVar10[10] = CONCAT44(local_314,uStack_318);
          puVar10[5] = uStack_340;
          puVar10[4] = uStack_348;
          puVar10[7] = local_330;
          puVar10[6] = uStack_338;
          FUN_1000f8cac(&local_2d0,auStack_3f8,&DAT_100ff82d0,&DAT_100c94208);
          FUN_1000fb4c4(&local_190,&DAT_100ff82d0,&DAT_100c94208);
          FUN_100acc644(&local_260);
          goto LAB_100ac9d44;
        }
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar10,0,0);
        *(undefined1 *)puVar10 = 0xd;
        _swift_willThrow();
      }
      _swift_release(lVar14);
      FUN_10003bf2c(uVar15,uVar1);
    }
    goto LAB_100ac9d44;
  }
LAB_100ac9844:
  self = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  UVar5.unknown = (undefined *)(unaff_x20 + lVar14);
  (extension_Foundation)::__C::NSFileManager::_replaceItemAt
            (UVar5,(undefined *)(param_1 + _TtC13ZIPFoundation7Archive::url),
             (NSFileManagerItemReplacementOptions)0x0);
  if (unaff_x21 == (undefined *)0x0) {
    FUN_1000fb4c4(UVar8.unknown,&DAT_100ff8468,&DAT_100c94440);
LAB_100ac9a64:
    SVar16 = Foundation::URL::get_path(UVar8);
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    _objc_retainAutorelease();
    pcVar12 = (char *)objc_stub::fileSystemRepresentationWithPath_(self_00,pNVar11);
    pFVar13 = _fopen(pcVar12,"rb+");
    lVar14 = _TtC13ZIPFoundation7Archive::archiveFile;
    if (pFVar13 == (FILE *)0x0) {
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,pFVar13,0,0);
      *(undefined1 *)&pFVar13->_p = 0;
      _swift_willThrow();
    }
    else {
      _fclose(*(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile));
      *(FILE **)(unaff_x20 + lVar14) = pFVar13;
    }
  }
  else {
    pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar5);
    local_260.unknown = (undefined *)0x0;
    IVar7 = objc_stub::removeItemAtURL_error_(self_00,pNVar6,&local_260);
    if ((int)IVar7 != 0) {
      UVar8.unknown = Foundation::URL::_bridgeToObjectiveC(local_260);
      pNVar6 = Foundation::URL::_bridgeToObjectiveC(UVar8);
      local_260.unknown = (undefined *)0x0;
      IVar7 = objc_stub::moveItemAtURL_toURL_error_(self_00,UVar8.unknown,pNVar6,&local_260);
      if ((int)IVar7 != 0) {
        _swift_errorRelease();
        UVar8.unknown = unaff_x21;
        goto LAB_100ac9a64;
      }
    }
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease();
  }
LAB_100ac9d44:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ac9d84 | FUN_100ac9d84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ac9d84(undefined8 param_1)

{
  bool bVar1;
  undefined *self;
  URL self_00;
  NSURL *pNVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self_00.unknown = (undefined *)objc_stub::init(self);
  pNVar2 = Foundation::URL::_bridgeToObjectiveC(self_00);
  local_50 = 0;
  IVar3 = objc_stub::removeItemAtURL_error_((ID)self_00.unknown,pNVar2,&local_50);
  bVar1 = (int)IVar3 == 0;
  if (bVar1) {
    uVar4 = local_50;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar4);
  }
  *(bool *)param_1 = bVar1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ac9e88 | FUN_100ac9e88 */

void FUN_100ac9e88(__DataStorage *param_1,long param_2,__DataStorage *param_3,size_t *param_4,
                  long param_5,ulong param_6,FILE *param_7)

{
  uint uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  __DataStorage *p_Var4;
  long lVar5;
  size_t sVar6;
  uint uVar7;
  int iVar8;
  
  p_Var3 = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var4 = (__DataStorage *)0x0;
  if (p_Var3 != (__DataStorage *)0x0) {
    p_Var4 = (__DataStorage *)Foundation::__DataStorage::get__offset(param_3,p_Var3);
    if (SBORROW8((long)param_1,(long)p_Var4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac9f8c);
      (*pcVar2)();
    }
    p_Var3 = p_Var3 + ((long)param_1 - (long)p_Var4);
  }
  if (!SBORROW8(param_2,(long)param_1)) {
    lVar5 = Foundation::__DataStorage::get__length(param_3,p_Var4);
    if (p_Var3 != (__DataStorage *)0x0) {
      if (param_2 - (long)param_1 <= lVar5) {
        lVar5 = param_2 - (long)param_1;
      }
      if (lVar5 != 0) {
        uVar1 = (uint)(param_6 >> 0x20);
        uVar7 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar7 == 0) {
            sVar6 = param_6 >> 0x30 & 0xff;
          }
          else {
            iVar8 = (int)((ulong)param_5 >> 0x20);
            if (SBORROW4(iVar8,(int)param_5)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac9f90);
              (*pcVar2)();
            }
            sVar6 = (size_t)(iVar8 - (int)param_5);
          }
        }
        else if (uVar7 == 2) {
          sVar6 = *(long *)(param_5 + 0x18) - *(long *)(param_5 + 0x10);
          if (SBORROW8(*(long *)(param_5 + 0x18),*(long *)(param_5 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac9f2c);
            (*pcVar2)();
          }
        }
        else {
          sVar6 = 0;
        }
        sVar6 = _fwrite(p_Var3,1,sVar6,param_7);
        *param_4 = sVar6;
      }
    }
    FUN_10003bf2c(param_5,param_6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ac9f88);
  (*pcVar2)();
}



/* Address: 0x100ac9f90 | FUN_100ac9f90 */

void FUN_100ac9f90(__DataStorage *param_1,long param_2,__DataStorage *param_3,ulong *param_4,
                  ulong param_5,ulong param_6,FILE *param_7)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  __DataStorage *p_Var4;
  __DataStorage *p_Var5;
  long lVar6;
  ulong uVar7;
  
  p_Var4 = param_1;
  Foundation::__DataStorage::_get__bytes(param_3,param_1);
  p_Var5 = (__DataStorage *)0x0;
  if (p_Var4 != (__DataStorage *)0x0) {
    p_Var5 = (__DataStorage *)Foundation::__DataStorage::get__offset(param_3,p_Var4);
    if (SBORROW8((long)param_1,(long)p_Var5)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca094);
      (*pcVar3)();
    }
    p_Var4 = p_Var4 + ((long)param_1 - (long)p_Var5);
  }
  if (SBORROW8(param_2,(long)param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca090);
    (*pcVar3)();
  }
  lVar6 = Foundation::__DataStorage::get__length(param_3,p_Var5);
  if (p_Var4 != (__DataStorage *)0x0) {
    if (param_2 - (long)param_1 <= lVar6) {
      lVar6 = param_2 - (long)param_1;
    }
    if (lVar6 != 0) {
      uVar7 = *param_4;
      while (uVar7 < param_5) {
        uVar2 = param_5 - uVar7;
        if (param_5 < uVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca07c);
          (*pcVar3)();
        }
        if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca080);
          (*pcVar3)();
        }
        uVar1 = param_6;
        if ((long)uVar2 <= (long)param_6) {
          uVar1 = uVar2;
        }
        if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca084);
          (*pcVar3)();
        }
        _fwrite(p_Var4 + uVar7,1,uVar1,param_7);
        if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca088);
          (*pcVar3)();
        }
        uVar7 = *param_4 + uVar1;
        if (CARRY8(*param_4,uVar1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100aca08c);
          (*pcVar3)();
        }
        *param_4 = uVar7;
      }
    }
  }
  return;
}



/* Address: 0x100aca094 | FUN_100aca094 */

void FUN_100aca094(long *param_1,RangeReference *param_2,ulong param_3)

{
  __DataStorage *p_Var1;
  RangeReference *pRVar2;
  ulong uVar3;
  
  if (param_2 != (RangeReference *)0x0) {
    if (param_3 != 0) {
      if (param_3 < 0xf) {
        pRVar2 = param_2 + param_3;
        FUN_100ad8f38();
        uVar3 = (ulong)pRVar2 & 0xffffffffffffff;
      }
      else {
        p_Var1 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var1,*(undefined4 *)(p_Var1 + 0x30),*(undefined2 *)(p_Var1 + 0x34));
        p_Var1 = Foundation::__DataStorage::_init(p_Var1,(__int64)param_2);
        if (param_3 < 0x7fffffff) {
          param_2 = (RangeReference *)(param_3 << 0x20);
          uVar3 = (ulong)p_Var1 | 0x4000000000000000;
        }
        else {
          param_2 = Foundation::Data::RangeReference::typeMetadataAccessor();
          _swift_allocObject(param_2,0x20,7);
          *(undefined8 *)(param_2 + 0x10) = 0;
          *(ulong *)(param_2 + 0x18) = param_3;
          uVar3 = (ulong)p_Var1 | 0x8000000000000000;
        }
      }
      goto LAB_100aca0dc;
    }
    param_2 = (RangeReference *)0x0;
  }
  uVar3 = 0xc000000000000000;
LAB_100aca0dc:
  *param_1 = (long)param_2;
  param_1[1] = uVar3;
  return;
}



/* Address: 0x100aca160 | FUN_100aca160 */

void FUN_100aca160(ulong *param_1,ulong param_2,ulong param_3)

{
  if ((param_2 != 0) && (param_3 != param_2)) {
    if (param_3 - param_2 < 0xf) {
      FUN_100ad8f38();
      param_3 = param_3 & 0xffffffffffffff;
    }
    else if (param_3 - param_2 < 0x7fffffff) {
      FUN_100441978();
      param_3 = param_3 | 0x4000000000000000;
    }
    else {
      FUN_1004419dc();
      param_3 = param_3 | 0x8000000000000000;
    }
    *param_1 = param_2;
    param_1[1] = param_3;
    return;
  }
  *param_1 = 0;
  param_1[1] = 0xc000000000000000;
  return;
}



/* Address: 0x100aca17c | FUN_100aca17c */

void FUN_100aca17c(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong in_x9;
  
  if (in_x9 < 0xf) {
    FUN_100ad8f38();
    param_3 = param_3 & 0xffffffffffffff;
  }
  else if (in_x9 < 0x7fffffff) {
    FUN_100441978();
    param_3 = param_3 | 0x4000000000000000;
  }
  else {
    FUN_1004419dc();
    param_3 = param_3 | 0x8000000000000000;
  }
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100aca1ec | FUN_100aca1ec */

void FUN_100aca1ec(void)

{
  CocoaError CVar1;
  undefined *puVar2;
  
  if (DAT_100ff8448 != (undefined *)0x0) {
    return;
  }
  CVar1 = Foundation::CocoaError::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958,
             CVar1.unknown);
  DAT_100ff8448 = puVar2;
  return;
}



/* Address: 0x100aca230 | FUN_100aca230 */

void FUN_100aca230(undefined1 *param_1,FILE *param_2)

{
  long lVar1;
  Deallocator DVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_48;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  puVar4 = param_1;
  _swift_slowAlloc(param_1,0xffffffffffffffff);
  sVar5 = _fread(puVar4,1,(size_t)param_1,param_2);
  iVar3 = _ferror(param_2);
  if (iVar3 < 1) {
    *puVar6 = FUN_10094a398;
    *(undefined8 *)((long)&uStack_48 + lVar1) = 0;
    (**(code **)(lVar7 + 0x68))
              (puVar6,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
               ,CONCAT71(extraout_var,DVar2.value));
    FUN_100abfa10(puVar4,sVar5,puVar6);
  }
  else {
    _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100aca348 | FUN_100aca348 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100aca348(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8478 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSFileManager;
  _swift_getObjCClassMetadata();
  DAT_100ff8478 = puVar1;
  return;
}



/* Address: 0x100aca38c | FUN_100aca38c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100aca38c(void)

{
  URL UVar1;
  long unaff_x20;
  ulong uVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100aca3f8 | FUN_100aca3f8 */

void FUN_100aca3f8(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_100ac72ac(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100aca454 | FUN_100aca454 */

undefined8 FUN_100aca454(undefined8 param_1)

{
  FUN_100ade5e0();
  return param_1;
}



/* Address: 0x100aca488 | FUN_100aca488 */

undefined8 FUN_100aca488(undefined8 param_1,undefined8 param_2)

{
  FUN_100acc83c(param_2,param_1);
  return param_2;
}



/* Address: 0x100aca4c4 | FUN_100aca4c4 */

void FUN_100aca4c4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100aca4d4 | FUN_100aca4d4 */

void FUN_100aca4d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100abc7a4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100aca4ec | FUN_100aca4ec */

void FUN_100aca4ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100abca24(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100aca508 | FUN_100aca508 */

int FUN_100aca508(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 0x60);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100aca52c | FUN_100aca52c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100acc0f0) */

void FUN_100aca52c(__DataStorage *param_1,undefined1 *param_2,uint param_3,ulong param_4,
                  undefined8 param_5,uint param_6,char param_7,size_t param_8,ID param_9,
                  long param_10,code *param_11,ulong param_12)

{
  long *plVar1;
  undefined8 *puVar2;
  __DataStorage _Var3;
  __DataStorage _Var10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  undefined1 uVar17;
  undefined8 uVar18;
  long lVar19;
  ID IVar20;
  code *pcVar21;
  bool bVar22;
  Deallocator DVar23;
  __uint16 _Var24;
  int iVar25;
  undefined4 uVar26;
  undefined7 extraout_var;
  undefined *puVar27;
  undefined1 *puVar28;
  size_t sVar29;
  __DataStorage *p_Var30;
  __DataStorage *p_Var31;
  char *pcVar32;
  undefined4 extraout_var_00;
  ID IVar33;
  undefined *puVar34;
  undefined *puVar35;
  __DataStorage *p_Var36;
  undefined4 extraout_var_01;
  long lVar37;
  undefined4 extraout_var_02;
  long lVar38;
  off_t oVar39;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  __DataStorage *p_Var40;
  long lVar41;
  undefined1 *puVar42;
  size_t sVar43;
  int iVar44;
  int iVar45;
  long lVar46;
  uint uVar47;
  uint uVar48;
  undefined4 uVar49;
  undefined *unaff_x21;
  undefined1 uVar50;
  undefined2 uVar51;
  FILE *pFVar52;
  undefined1 *puVar53;
  ulong uVar54;
  ulong uVar55;
  undefined8 *puVar56;
  uint uVar57;
  ulong uVar58;
  undefined2 uVar59;
  ulong uVar60;
  undefined8 uVar61;
  undefined8 uVar62;
  undefined8 uVar63;
  undefined8 uVar64;
  undefined8 uVar65;
  undefined8 uVar66;
  size_t local_590;
  ulong local_588 [4];
  undefined4 local_564;
  __DataStorage *local_560;
  undefined4 local_558;
  undefined4 local_554;
  size_t local_550;
  undefined1 *local_548;
  long *local_540;
  undefined8 *local_538;
  uint local_52c;
  ID local_528;
  uint local_51c;
  undefined1 *local_518;
  ulong local_510;
  code *local_508;
  ulong local_4e0;
  undefined8 local_478;
  char local_469;
  undefined2 local_468;
  undefined2 local_466;
  ulong local_460;
  ulong uStack_458;
  undefined8 local_450;
  undefined4 local_448;
  undefined2 local_440;
  undefined2 local_43e;
  ulong local_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined4 local_420;
  undefined1 auStack_418 [24];
  undefined *local_400;
  long lStack_3f8;
  long local_3f0;
  long lStack_3e8;
  long local_3e0;
  __DataStorage local_3d0 [14];
  undefined2 uStack_3c2;
  undefined4 uStack_3c0;
  undefined2 uStack_3bc;
  undefined2 uStack_3ba;
  code *local_3b8;
  undefined *local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  ulong uStack_388;
  undefined8 uStack_380;
  undefined8 local_378;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined8 local_368;
  undefined8 uStack_360;
  undefined8 local_358;
  undefined8 uStack_350;
  undefined4 local_348;
  __DataStorage local_340;
  undefined1 uStack_33f;
  undefined1 uStack_33e;
  undefined1 uStack_33d;
  undefined1 uStack_33c;
  undefined1 uStack_33b;
  undefined1 uStack_33a;
  undefined1 uStack_339;
  undefined1 uStack_338;
  undefined1 uStack_337;
  undefined1 uStack_336;
  undefined1 uStack_335;
  undefined1 uStack_334;
  undefined1 uStack_333;
  undefined2 uStack_332;
  undefined4 local_330;
  undefined4 local_32c;
  undefined4 local_328;
  undefined2 local_324;
  undefined2 local_322;
  __DataStorage *local_320;
  undefined1 *puStack_318;
  __DataStorage *local_310;
  undefined1 *local_308;
  undefined8 local_300;
  undefined4 local_2d8;
  undefined2 uStack_2d4;
  undefined2 uStack_2d2;
  undefined2 uStack_2d0;
  undefined2 uStack_2ce;
  undefined2 uStack_2cc;
  undefined2 uStack_2ca;
  undefined4 local_2c8;
  uint uStack_2c4;
  undefined4 uStack_2c0;
  undefined2 uStack_2bc;
  undefined2 uStack_2ba;
  __DataStorage *local_2b8;
  undefined1 *puStack_2b0;
  __DataStorage *local_2a8;
  undefined1 *puStack_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  code *pcStack_278;
  undefined *local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  ulong uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined4 local_230;
  undefined1 auStack_228 [104];
  long local_1c0;
  long lStack_1b8;
  ulong local_1b0;
  long lStack_1a8;
  long local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  code *pcStack_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  ulong uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined4 local_130;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  __DataStorage *local_100;
  undefined1 *puStack_f8;
  __DataStorage *p_Stack_f0;
  undefined1 *puStack_e8;
  undefined8 local_e0;
  undefined8 local_d0;
  undefined8 uStack_c8;
  long lStack_c0;
  undefined8 uStack_b8;
  __DataStorage *local_b0;
  undefined1 *puStack_a8;
  __DataStorage *p_Stack_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long local_88;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  
  local_88 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar23 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar46 = *(long *)(CONCAT71(extraout_var,DVar23.value) + -8);
  lVar38 = -(*(long *)(lVar46 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar56 = (undefined8 *)((long)&local_590 + lVar38);
  puVar27 = &DAT_100f30da8;
  _swift_allocObject(&DAT_100f30da8,0x20,7);
  local_510 = param_12;
  local_508 = param_11;
  *(code **)(puVar27 + 0x10) = param_11;
  *(ulong *)(puVar27 + 0x18) = param_12;
  if (*(char *)(param_10 + _TtC13ZIPFoundation7Archive::accessMode) == '\x01') {
    puVar34 = puVar27;
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar34,0,0);
    *puVar34 = 1;
    _swift_willThrow();
    goto LAB_100acae64;
  }
  local_518 = param_2;
  if (param_9 != 0) {
    uVar58 = param_4;
    if ((param_3 & 0xff) == 1) {
      uVar58 = 1;
    }
    objc_stub::setTotalUnitCount_(param_9,uVar58);
  }
  lVar19 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_528 = param_9;
  plVar1 = (long *)(param_10 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
  lStack_1b8 = plVar1[1];
  local_1c0 = *plVar1;
  lStack_1a8 = plVar1[3];
  local_1b0 = plVar1[2];
  local_1a0 = plVar1[4];
  uVar58 = local_1b0 & 0xffffffff;
  puVar2 = (undefined8 *)(param_10 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  uStack_248 = puVar2[9];
  local_250 = puVar2[8];
  uStack_238 = puVar2[0xb];
  uStack_240 = puVar2[10];
  local_230 = *(undefined4 *)(puVar2 + 0xc);
  uStack_288 = puVar2[1];
  local_290 = *puVar2;
  pcStack_278 = (code *)puVar2[3];
  uStack_280 = puVar2[2];
  uStack_268 = puVar2[5];
  local_270 = (undefined *)puVar2[4];
  uStack_258 = puVar2[7];
  uStack_260 = puVar2[6];
  local_51c = param_3;
  if (((ulong)puVar2[9] >> 0x3c < 0xf) && (uVar58 = puVar2[7], (long)uVar58 < 0)) {
                    /* WARNING: Does not return */
    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc10c);
    (*pcVar21)();
  }
  pFVar52 = *(FILE **)(param_10 + _TtC13ZIPFoundation7Archive::archiveFile);
  local_52c = param_6;
  FUN_100abcbb8(&local_1c0,local_3d0);
  FUN_1000f8cac(&local_290,local_3d0,&DAT_100ff82d0,&DAT_100c94208);
  _fseeko(pFVar52,uVar58,0);
  if ((ulong)puVar2[9] >> 0x3c < 0xf) {
    puVar53 = (undefined1 *)puVar2[6];
    if ((long)puVar53 < 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc110);
      (*pcVar21)();
    }
  }
  else {
    puVar53 = (undefined1 *)(ulong)*(uint *)((long)plVar1 + 0xc);
  }
  pFVar52 = *(FILE **)(param_10 + lVar19);
  puVar28 = puVar53;
  local_540 = plVar1;
  local_538 = puVar2;
  _swift_slowAlloc(puVar53,0xffffffffffffffff);
  sVar29 = _fread(puVar28,1,(size_t)puVar53,pFVar52);
  iVar25 = _ferror(pFVar52);
  if (0 < iVar25) {
    _swift_slowDealloc(puVar28,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar28,0,0);
    *puVar28 = 0;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
    goto LAB_100acae64;
  }
  local_548 = puVar53;
  *puVar56 = FUN_10094a398;
  *(undefined8 *)((long)local_588 + lVar38) = 0;
  (**(code **)(lVar46 + 0x68))
            (puVar56,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
             ,CONCAT71(extraout_var,DVar23.value));
  FUN_100abfa10(puVar28,sVar29,puVar56);
  _fseeko(*(FILE **)(param_10 + lVar19),uVar58,0);
  p_Var30 = (__DataStorage *)_ftello(*(FILE **)(param_10 + lVar19));
  if ((long)p_Var30 < 0) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,p_Var30,0,0);
    *p_Var30 = (__DataStorage)0x1;
    _swift_willThrow();
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
  }
  else {
    p_Var31 = p_Var30;
    FUN_100ad5fe0();
    uVar26 = SUB84(p_Var31,0);
    local_554 = uVar26;
    FUN_100ad610c();
    puVar53 = local_518;
    local_558 = uVar26;
    if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc558);
      (*pcVar21)();
    }
    local_560 = p_Var30;
    local_550 = sVar29;
    _swift_bridgeObjectRetain_n(local_518,2);
    p_Var30 = param_1;
    FUN_100ac0904();
    uVar58 = 0xffffffff;
    if (param_4 < 0xffffffff) {
      uVar51 = 0;
      uVar57 = 0;
      uVar26 = 0;
      uVar59 = 0x14;
      uVar55 = 0;
      uVar58 = param_4;
    }
    else {
      uVar59 = 0x2d;
      uVar51 = 0x14;
      uVar57 = 0xffffffff;
      uVar26 = 0x100001;
      uVar55 = param_4;
    }
    uVar48 = (uint)((ulong)puVar53 >> 0x20);
    uVar47 = uVar48 >> 0x1e;
    if (uVar48 >> 0x1e < 2) {
      if (uVar47 == 0) {
        uVar60 = (ulong)puVar53 >> 0x30 & 0xff;
      }
      else {
        iVar25 = (int)((ulong)p_Var30 >> 0x20);
        if (SBORROW4(iVar25,(int)p_Var30)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc584);
          (*pcVar21)();
        }
        uVar60 = (ulong)(iVar25 - (int)p_Var30);
LAB_100aca988:
        if ((long)uVar60 < 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc55c);
          (*pcVar21)();
        }
        if (uVar60 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100aca998);
          (*pcVar21)();
        }
      }
    }
    else {
      if (uVar47 == 2) {
        uVar60 = *(long *)(p_Var30 + 0x18) - *(long *)(p_Var30 + 0x10);
        if (SBORROW8(*(long *)(p_Var30 + 0x18),*(long *)(p_Var30 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100aca978);
          (*pcVar21)();
        }
        goto LAB_100aca988;
      }
      uVar60 = 0;
    }
    if (param_4 < 0xffffffff) {
      p_Var31 = (__DataStorage *)0x0;
      puVar42 = (undefined1 *)0xc000000000000000;
    }
    else {
      local_440 = (undefined2)uVar26;
      local_43e = (undefined2)((uint)uVar26 >> 0x10);
      local_430 = 0;
      uStack_428 = 0;
      local_420 = 0;
      p_Var31 = p_Var30;
      puVar42 = puVar53;
      local_438 = uVar55;
      FUN_100adacb4();
    }
    local_2d8 = 0x4034b50;
    uStack_2d2 = 0x800;
    local_564 = 0;
    if (param_7 != '\0' && (local_51c & 0xff) == 0) {
      local_564 = 8;
    }
    uStack_2d0 = (undefined2)local_564;
    uStack_2ce = (undefined2)local_558;
    uStack_2cc = (undefined2)local_554;
    local_2c8 = 0;
    uStack_2c0 = (undefined4)uVar58;
    uStack_2bc = (undefined2)uVar60;
    local_298 = 0;
    local_90 = 0;
    uStack_b8 = CONCAT26(uVar51,CONCAT24(uStack_2bc,uStack_2c0));
    lStack_c0 = (ulong)uVar57 << 0x20;
    uStack_c8 = CONCAT26(uStack_2ca,CONCAT24(uStack_2cc,CONCAT22(uStack_2ce,uStack_2d0)));
    local_d0 = CONCAT26(0x800,CONCAT24(uVar59,0x4034b50));
    uStack_2d4 = uVar59;
    uStack_2c4 = uVar57;
    uStack_2ba = uVar51;
    local_2b8 = p_Var30;
    puStack_2b0 = puVar53;
    local_2a8 = p_Var31;
    puStack_2a0 = puVar42;
    local_b0 = p_Var30;
    puStack_a8 = puVar53;
    p_Stack_a0 = p_Var31;
    puStack_98 = puVar42;
    FUN_100ad63a8();
    puVar53 = local_518;
    pFVar52 = *(FILE **)(param_10 + lVar19);
    uVar57 = (uint)((ulong)puVar42 >> 0x20);
    uVar48 = uVar57 >> 0x1e;
    if (uVar57 >> 0x1e < 2) {
      if (uVar48 == 0) {
        local_3d0[0] = SUB81(p_Var31,0);
        local_3d0[1] = SUB81((ulong)p_Var31 >> 8,0);
        local_3d0[2] = SUB81((ulong)p_Var31 >> 0x10,0);
        local_3d0[3] = SUB81((ulong)p_Var31 >> 0x18,0);
        local_3d0[4] = SUB81((ulong)p_Var31 >> 0x20,0);
        local_3d0[5] = SUB81((ulong)p_Var31 >> 0x28,0);
        local_3d0[6] = SUB81((ulong)p_Var31 >> 0x30,0);
        local_3d0[7] = SUB81((ulong)p_Var31 >> 0x38,0);
        local_3d0[8] = SUB81(puVar42,0);
        local_3d0[9] = SUB81((ulong)puVar42 >> 8,0);
        local_3d0[10] = SUB81((ulong)puVar42 >> 0x10,0);
        local_3d0[0xb] = SUB81((ulong)puVar42 >> 0x18,0);
        local_3d0[0xc] = SUB81((ulong)puVar42 >> 0x20,0);
        local_3d0[0xd] = SUB81((ulong)puVar42 >> 0x28,0);
        if (((ulong)puVar42 & 0xff000000000000) != 0) {
          _fwrite(local_3d0,1,(ulong)puVar42 >> 0x30 & 0xff,pFVar52);
        }
      }
      else {
        iVar25 = (int)p_Var31;
        lVar46 = (long)iVar25;
        lVar38 = ((long)p_Var31 >> 0x20) - lVar46;
        if ((long)p_Var31 >> 0x20 < lVar46) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc588);
          (*pcVar21)();
        }
        p_Var30 = p_Var31;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var31);
        if (p_Var30 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          puVar53 = local_518;
        }
        else {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var30);
          if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc594);
            (*pcVar21)();
          }
          p_Var30 = p_Var30 + (lVar46 - (long)p_Var36);
          lVar46 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var36);
          puVar53 = local_518;
          if (p_Var30 != (__DataStorage *)0x0) {
            if (lVar38 <= lVar46) {
              lVar46 = lVar38;
            }
            if (lVar46 != 0) {
              iVar45 = (int)((ulong)p_Var31 >> 0x20);
              if (SBORROW4(iVar45,iVar25)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5ac);
                (*pcVar21)();
              }
              sVar29 = (size_t)(iVar45 - iVar25);
              goto LAB_100acac28;
            }
          }
        }
      }
    }
    else if (uVar48 == 2) {
      lVar38 = *(long *)(p_Var31 + 0x10);
      lVar46 = *(long *)(p_Var31 + 0x18);
      p_Var30 = p_Var31;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var31);
      if (p_Var30 == (__DataStorage *)0x0) {
        p_Var30 = (__DataStorage *)0x0;
        p_Var36 = (__DataStorage *)0x0;
      }
      else {
        p_Var36 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var30);
        if (SBORROW8(lVar38,(long)p_Var36)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc590);
          (*pcVar21)();
        }
        p_Var30 = p_Var30 + (lVar38 - (long)p_Var36);
      }
      lVar41 = lVar46 - lVar38;
      if (SBORROW8(lVar46,lVar38)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc58c);
        (*pcVar21)();
      }
      lVar38 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var36);
      puVar53 = local_518;
      if (p_Var30 != (__DataStorage *)0x0) {
        if (lVar41 <= lVar38) {
          lVar38 = lVar41;
        }
        if (lVar38 != 0) {
          sVar29 = *(long *)(p_Var31 + 0x18) - *(long *)(p_Var31 + 0x10);
          if (SBORROW8(*(long *)(p_Var31 + 0x18),*(long *)(p_Var31 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc598);
            (*pcVar21)();
          }
LAB_100acac28:
          puVar53 = local_518;
          _fwrite(p_Var30,1,sVar29,pFVar52);
        }
      }
    }
    iVar25 = _ferror(pFVar52);
    _Var3 = SUB81(puVar28,0);
    uVar4 = (undefined1)((ulong)puVar28 >> 8);
    uVar5 = (undefined1)((ulong)puVar28 >> 0x10);
    uVar6 = (undefined1)((ulong)puVar28 >> 0x18);
    uVar7 = (undefined1)((ulong)puVar28 >> 0x20);
    uVar8 = (undefined1)((ulong)puVar28 >> 0x28);
    uVar9 = (undefined1)((ulong)puVar28 >> 0x30);
    uVar17 = (undefined1)((ulong)puVar28 >> 0x38);
    iVar45 = (int)puVar28;
    lVar38 = (long)puVar28 >> 0x20;
    if (0 < iVar25) {
      _swift_bridgeObjectRelease();
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var31,puVar42);
      sVar29 = local_550;
      goto LAB_100acacb8;
    }
    FUN_10003bf2c(p_Var31,puVar42);
    IVar20 = local_528;
    sVar29 = local_550;
    if ((local_51c & 0xff) == 0) {
      if (param_7 == '\x01') {
        puVar34 = &DAT_100f30d58;
        _swift_allocObject(&DAT_100f30d58,0x18,7);
        *(undefined8 *)(puVar34 + 0x10) = 0;
        puVar35 = &DAT_100f30dd0;
        _swift_allocObject(&DAT_100f30dd0,0x20,7);
        *(undefined **)(puVar35 + 0x10) = puVar34;
        *(long *)(puVar35 + 0x18) = param_10;
        uStack_3c0 = (undefined4)IVar20;
        uStack_3bc = (undefined2)(IVar20 >> 0x20);
        uStack_3ba = (undefined2)(IVar20 >> 0x30);
        local_3b8 = FUN_100acc628;
        local_3b0 = puVar27;
        _swift_retain(puVar34);
        _swift_retain(param_10);
        uVar26 = 0;
        FUN_100ad4034(0,param_4,param_8,0,FUN_100acc6b4,local_3d0,FUN_100acc6a0,puVar35);
        if (unaff_x21 == (undefined *)0x0) {
          _swift_beginAccess(puVar34 + 0x10,auStack_418,0,0);
          uVar58 = *(ulong *)(puVar34 + 0x10);
          _swift_release(puVar34);
          _swift_release(puVar35);
          goto LAB_100acba64;
        }
        _swift_bridgeObjectRelease(local_518);
        FUN_100aca454(&local_2d8);
        _swift_release(puVar34);
        _swift_release(puVar35);
      }
      else {
        uVar58 = param_4;
        sVar43 = param_8;
        FUN_100abab48(param_4,param_8,local_528,param_10,local_508,local_510);
        uVar26 = (undefined4)sVar43;
        if (unaff_x21 == (undefined *)0x0) goto LAB_100acba64;
LAB_100acb110:
        _swift_bridgeObjectRelease(local_518);
        FUN_100aca454(&local_2d8);
      }
LAB_100acacb8:
      local_400 = unaff_x21;
      _swift_errorRetain(unaff_x21);
      puVar34 = &DAT_100ff8480;
      FUN_1000f7830(&DAT_100ff8480,&DAT_100c94348);
      pcVar32 = &local_469;
      _swift_dynamicCast(pcVar32,&local_400,puVar34,&DAT_100f31130,0);
      if (((int)pcVar32 == 0) || (local_469 != '\x05')) {
        _swift_errorRelease(local_400);
        _fflush(*(FILE **)(param_10 + lVar19));
        FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
        FUN_100abcbf4(&local_1c0);
        FUN_10003bf2c(puVar28,sVar29);
        goto LAB_100acae64;
      }
      _swift_errorRelease(unaff_x21);
      _fflush(*(FILE **)(param_10 + lVar19));
      iVar25 = _fileno(*(FILE **)(param_10 + lVar19));
      p_Var30 = local_560;
      _ftruncate(iVar25,(off_t)local_560);
      iVar25 = _fseeko(*(FILE **)(param_10 + lVar19),(off_t)p_Var30,0);
      sVar43 = local_550;
      p_Var31 = (__DataStorage *)CONCAT44(extraout_var_00,iVar25);
      pFVar52 = *(FILE **)(param_10 + lVar19);
      uVar57 = (uint)(sVar29 >> 0x20);
      uVar48 = uVar57 >> 0x1e;
      if (uVar57 >> 0x1e < 2) {
        if (uVar48 == 0) {
          local_3d0[8] = SUB81(sVar29,0);
          local_3d0[9] = SUB81(sVar29 >> 8,0);
          local_3d0[10] = SUB81(sVar29 >> 0x10,0);
          local_3d0[0xb] = SUB81(sVar29 >> 0x18,0);
          local_3d0[0xc] = SUB81(sVar29 >> 0x20,0);
          local_3d0[0xd] = SUB81(sVar29 >> 0x28,0);
          local_3d0[0] = _Var3;
          local_3d0[1] = (__DataStorage)uVar4;
          local_3d0[2] = (__DataStorage)uVar5;
          local_3d0[3] = (__DataStorage)uVar6;
          local_3d0[4] = (__DataStorage)uVar7;
          local_3d0[5] = (__DataStorage)uVar8;
          local_3d0[6] = (__DataStorage)uVar9;
          local_3d0[7] = (__DataStorage)uVar17;
          if ((local_548 != (undefined1 *)0x0) && ((sVar29 & 0xff000000000000) != 0)) {
            puVar53 = (undefined1 *)0x0;
            do {
              sVar29 = (long)local_548 - (long)puVar53;
              if (local_548 < puVar53) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc560);
                (*pcVar21)();
              }
              if ((long)sVar29 < 0) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc564);
                (*pcVar21)();
              }
              sVar43 = param_8;
              if ((long)sVar29 <= (long)param_8) {
                sVar43 = sVar29;
              }
              p_Var30 = (__DataStorage *)&DAT_00000001;
              _fwrite(local_3d0 + (long)puVar53,1,sVar43,pFVar52);
              if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc568);
                (*pcVar21)();
              }
              puVar53 = puVar53 + sVar43;
            } while (puVar53 < local_548);
          }
        }
        else {
          lVar46 = (long)iVar45;
          if (lVar38 < lVar46) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5a4);
            (*pcVar21)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var31);
          if (p_Var31 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(sVar43 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          }
          else {
            p_Var36 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar43 & 0x3fffffffffffffff),p_Var31);
            if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5b4);
              (*pcVar21)();
            }
            lVar41 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(sVar43 & 0x3fffffffffffffff),p_Var36);
            if (p_Var31 + (lVar46 - (long)p_Var36) != (__DataStorage *)0x0) {
              if (lVar38 - lVar46 <= lVar41) {
                lVar41 = lVar38 - lVar46;
              }
              if ((local_548 != (undefined1 *)0x0) && (lVar41 != 0)) {
                puVar53 = (undefined1 *)0x0;
                do {
                  sVar29 = (long)local_548 - (long)puVar53;
                  if (local_548 < puVar53) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc578);
                    (*pcVar21)();
                  }
                  if ((long)sVar29 < 0) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc57c);
                    (*pcVar21)();
                  }
                  sVar43 = param_8;
                  if ((long)sVar29 <= (long)param_8) {
                    sVar43 = sVar29;
                  }
                  p_Var30 = (__DataStorage *)&DAT_00000001;
                  _fwrite(p_Var31 + (lVar46 - (long)p_Var36) + (long)puVar53,1,sVar43,pFVar52);
                  if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc580);
                    (*pcVar21)();
                  }
                  puVar53 = puVar53 + sVar43;
                } while (puVar53 < local_548);
              }
            }
          }
        }
      }
      else if (uVar48 == 2) {
        lVar46 = *(long *)(puVar28 + 0x10);
        lVar41 = *(long *)(puVar28 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var31);
        p_Var36 = (__DataStorage *)0x0;
        if (p_Var31 != (__DataStorage *)0x0) {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar43 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5b0);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar46 - (long)p_Var36);
        }
        lVar37 = lVar41 - lVar46;
        if (SBORROW8(lVar41,lVar46)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5a8);
          (*pcVar21)();
        }
        lVar46 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var36);
        if (p_Var31 != (__DataStorage *)0x0) {
          if (lVar37 <= lVar46) {
            lVar46 = lVar37;
          }
          if ((local_548 != (undefined1 *)0x0) && (lVar46 != 0)) {
            puVar53 = (undefined1 *)0x0;
            do {
              sVar29 = (long)local_548 - (long)puVar53;
              if (local_548 < puVar53) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc56c);
                (*pcVar21)();
              }
              if ((long)sVar29 < 0) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc570);
                (*pcVar21)();
              }
              sVar43 = param_8;
              if ((long)sVar29 <= (long)param_8) {
                sVar43 = sVar29;
              }
              p_Var30 = (__DataStorage *)&DAT_00000001;
              _fwrite(p_Var31 + (long)puVar53,1,sVar43,pFVar52);
              if ((long)param_8 < 0) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc574);
                (*pcVar21)();
              }
              puVar53 = puVar53 + sVar43;
            } while (puVar53 < local_548);
          }
        }
      }
      iVar25 = _ferror(pFVar52);
      sVar29 = local_550;
      p_Var31 = (__DataStorage *)CONCAT44(extraout_var_01,iVar25);
      if (iVar25 < 1) {
        pFVar52 = *(FILE **)(param_10 + lVar19);
        local_478 = 0;
        if (uVar48 < 2) {
          if (uVar48 == 0) {
            local_3d0[8] = SUB81(local_550,0);
            local_3d0[9] = SUB81(local_550 >> 8,0);
            local_3d0[10] = SUB81(local_550 >> 0x10,0);
            local_3d0[0xb] = SUB81(local_550 >> 0x18,0);
            local_3d0[0xc] = SUB81(local_550 >> 0x20,0);
            local_3d0[0xd] = SUB81(local_550 >> 0x28,0);
            local_3d0[0] = _Var3;
            local_3d0[1] = (__DataStorage)uVar4;
            local_3d0[2] = (__DataStorage)uVar5;
            local_3d0[3] = (__DataStorage)uVar6;
            local_3d0[4] = (__DataStorage)uVar7;
            local_3d0[5] = (__DataStorage)uVar8;
            local_3d0[6] = (__DataStorage)uVar9;
            local_3d0[7] = (__DataStorage)uVar17;
            if ((local_550 & 0xff000000000000) != 0) {
              p_Var30 = (__DataStorage *)&DAT_00000001;
              _fwrite(local_3d0,1,local_550 >> 0x30 & 0xff,pFVar52);
            }
          }
          else {
            lVar46 = (long)iVar45;
            if (lVar38 < lVar46) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5b8);
              (*pcVar21)();
            }
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var31);
            if (p_Var31 == (__DataStorage *)0x0) {
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(sVar29 & 0x3fffffffffffffff),(__DataStorage *)0x0);
              p_Var31 = (__DataStorage *)0x0;
              p_Var30 = (__DataStorage *)0x0;
            }
            else {
              p_Var30 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(sVar29 & 0x3fffffffffffffff),p_Var31);
              if (SBORROW8(lVar46,(long)p_Var30)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5d4);
                (*pcVar21)();
              }
              p_Var36 = p_Var31 + (lVar46 - (long)p_Var30);
              lVar41 = Foundation::__DataStorage::get__length
                                 ((__DataStorage *)(sVar29 & 0x3fffffffffffffff),p_Var30);
              if (lVar38 - lVar46 <= lVar41) {
                lVar41 = lVar38 - lVar46;
              }
              p_Var31 = (__DataStorage *)0x0;
              if (p_Var36 != (__DataStorage *)0x0) {
                p_Var31 = p_Var36;
              }
              p_Var30 = (__DataStorage *)0x0;
              if (p_Var36 != (__DataStorage *)0x0) {
                p_Var30 = p_Var36 + lVar41;
              }
            }
LAB_100acb654:
            FUN_100ad5d64(p_Var31,p_Var30,&local_478,puVar28,sVar29,pFVar52);
          }
        }
        else if (uVar48 == 2) {
          lVar38 = *(long *)(puVar28 + 0x10);
          lVar46 = *(long *)(puVar28 + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var31);
          p_Var30 = (__DataStorage *)0x0;
          if (p_Var31 != (__DataStorage *)0x0) {
            p_Var30 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar29 & 0x3fffffffffffffff),p_Var31);
            if (SBORROW8(lVar38,(long)p_Var30)) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5d0);
              (*pcVar21)();
            }
            p_Var31 = p_Var31 + (lVar38 - (long)p_Var30);
          }
          sVar29 = local_550;
          lVar41 = lVar46 - lVar38;
          if (SBORROW8(lVar46,lVar38)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5bc);
            (*pcVar21)();
          }
          lVar38 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(local_550 & 0x3fffffffffffffff),p_Var30);
          if (lVar41 <= lVar38) {
            lVar38 = lVar41;
          }
          p_Var30 = (__DataStorage *)0x0;
          if (p_Var31 != (__DataStorage *)0x0) {
            p_Var30 = p_Var31 + lVar38;
          }
          goto LAB_100acb654;
        }
        iVar25 = _ferror(pFVar52);
        p_Var31 = (__DataStorage *)CONCAT44(extraout_var_02,iVar25);
        if (iVar25 < 1) {
          if (uStack_248 >> 0x3c < 0xf) {
            uStack_148 = uStack_248;
            local_150 = local_250;
            uStack_138 = uStack_238;
            uStack_140 = uStack_240;
            local_130 = local_230;
            uStack_188 = uStack_288;
            local_190 = local_290;
            pcStack_178 = pcStack_278;
            uStack_180 = uStack_280;
            uStack_168 = uStack_268;
            local_170 = local_270;
            uStack_158 = uStack_258;
            uStack_160 = uStack_260;
            local_3d0[8] = SUB81(uStack_288,0);
            local_3d0[9] = SUB81((ulong)uStack_288 >> 8,0);
            local_3d0[10] = SUB81((ulong)uStack_288 >> 0x10,0);
            local_3d0[0xb] = SUB81((ulong)uStack_288 >> 0x18,0);
            local_3d0[0xc] = SUB81((ulong)uStack_288 >> 0x20,0);
            local_3d0[0xd] = SUB81((ulong)uStack_288 >> 0x28,0);
            uStack_3c2 = (undefined2)((ulong)uStack_288 >> 0x30);
            local_3d0[0] = SUB81(local_290,0);
            local_3d0[1] = SUB81((ulong)local_290 >> 8,0);
            local_3d0[2] = SUB81((ulong)local_290 >> 0x10,0);
            local_3d0[3] = SUB81((ulong)local_290 >> 0x18,0);
            local_3d0[4] = SUB81((ulong)local_290 >> 0x20,0);
            local_3d0[5] = SUB81((ulong)local_290 >> 0x28,0);
            local_3d0[6] = SUB81((ulong)local_290 >> 0x30,0);
            local_3d0[7] = SUB81((ulong)local_290 >> 0x38,0);
            local_3b8 = pcStack_278;
            uStack_3c0 = (undefined4)uStack_280;
            uStack_3bc = (undefined2)((ulong)uStack_280 >> 0x20);
            uStack_3ba = (undefined2)((ulong)uStack_280 >> 0x30);
            uStack_370 = local_230;
            uStack_3a8 = uStack_268;
            local_3b0 = local_270;
            uStack_398 = uStack_258;
            uStack_3a0 = uStack_260;
            uStack_388 = uStack_248;
            local_390 = local_250;
            local_378 = uStack_238;
            uStack_380 = uStack_240;
            p_Var31 = local_3d0;
            p_Var30 = &local_340;
            FUN_100aca488();
            FUN_100accae0();
            pFVar52 = *(FILE **)(param_10 + lVar19);
            uVar57 = (uint)((ulong)p_Var30 >> 0x20);
            uVar48 = uVar57 >> 0x1e;
            if (uVar57 >> 0x1e < 2) {
              if (uVar48 == 0) {
                local_340 = SUB81(p_Var31,0);
                uStack_33f = (undefined1)((ulong)p_Var31 >> 8);
                uStack_33e = (undefined1)((ulong)p_Var31 >> 0x10);
                uStack_33d = (undefined1)((ulong)p_Var31 >> 0x18);
                uStack_33c = (undefined1)((ulong)p_Var31 >> 0x20);
                uStack_33b = (undefined1)((ulong)p_Var31 >> 0x28);
                uStack_33a = (undefined1)((ulong)p_Var31 >> 0x30);
                uStack_339 = (undefined1)((ulong)p_Var31 >> 0x38);
                uStack_338 = SUB81(p_Var30,0);
                uStack_337 = (undefined1)((ulong)p_Var30 >> 8);
                uStack_336 = (undefined1)((ulong)p_Var30 >> 0x10);
                uStack_335 = (undefined1)((ulong)p_Var30 >> 0x18);
                uStack_334 = (undefined1)((ulong)p_Var30 >> 0x20);
                uStack_333 = (undefined1)((ulong)p_Var30 >> 0x28);
                if (((ulong)p_Var30 & 0xff000000000000) != 0) {
                  _fwrite(&local_340,1,(ulong)p_Var30 >> 0x30 & 0xff,pFVar52);
                }
LAB_100acb854:
                FUN_10003bf2c(p_Var31,p_Var30);
                FUN_10003bf2c(p_Var31,p_Var30);
              }
              else {
                iVar25 = (int)p_Var31;
                lVar46 = (long)iVar25;
                lVar38 = ((long)p_Var31 >> 0x20) - lVar46;
                if ((long)p_Var31 >> 0x20 < lVar46) {
                    /* WARNING: Does not return */
                  pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc608);
                  (*pcVar21)();
                }
                p_Var36 = p_Var31;
                Foundation::__DataStorage::_get__bytes
                          ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var31);
                if (p_Var36 == (__DataStorage *)0x0) {
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                             (__DataStorage *)0x0);
                }
                else {
                  p_Var40 = (__DataStorage *)
                            Foundation::__DataStorage::get__offset
                                      ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                                       p_Var36);
                  if (SBORROW8(lVar46,(long)p_Var40)) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc620);
                    (*pcVar21)();
                  }
                  p_Var36 = p_Var36 + (lVar46 - (long)p_Var40);
                  lVar46 = Foundation::__DataStorage::get__length
                                     ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var40
                                     );
                  if (p_Var36 != (__DataStorage *)0x0) {
                    if (lVar38 <= lVar46) {
                      lVar46 = lVar38;
                    }
                    if (lVar46 != 0) {
                      iVar45 = (int)((ulong)p_Var31 >> 0x20);
                      if (SBORROW4(iVar45,iVar25)) {
                    /* WARNING: Does not return */
                        pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc628);
                        (*pcVar21)();
                      }
                      sVar29 = (size_t)(iVar45 - iVar25);
                      goto LAB_100acc060;
                    }
                  }
                }
              }
            }
            else {
              if (uVar48 != 2) goto LAB_100acb854;
              lVar38 = *(long *)(p_Var31 + 0x10);
              lVar46 = *(long *)(p_Var31 + 0x18);
              p_Var36 = p_Var31;
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var31);
              p_Var40 = (__DataStorage *)0x0;
              if (p_Var36 != (__DataStorage *)0x0) {
                p_Var40 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var36)
                ;
                if (SBORROW8(lVar38,(long)p_Var40)) {
                    /* WARNING: Does not return */
                  pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc61c);
                  (*pcVar21)();
                }
                p_Var36 = p_Var36 + (lVar38 - (long)p_Var40);
              }
              lVar41 = lVar46 - lVar38;
              if (SBORROW8(lVar46,lVar38)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc60c);
                (*pcVar21)();
              }
              lVar38 = Foundation::__DataStorage::get__length
                                 ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var40);
              if (p_Var36 != (__DataStorage *)0x0) {
                if (lVar41 <= lVar38) {
                  lVar38 = lVar41;
                }
                if (lVar38 != 0) {
                  sVar29 = *(long *)(p_Var31 + 0x18) - *(long *)(p_Var31 + 0x10);
                  if (SBORROW8(*(long *)(p_Var31 + 0x18),*(long *)(p_Var31 + 0x10))) {
                    /* WARNING: Does not return */
                    pcVar21 = (code *)SoftwareBreakpoint(1,0x100acb854);
                    (*pcVar21)();
                  }
LAB_100acc060:
                  _fwrite(p_Var36,1,sVar29,pFVar52);
                }
              }
            }
            iVar25 = _ferror(pFVar52);
            puVar53 = (undefined1 *)CONCAT44(extraout_var_05,iVar25);
            if (0 < iVar25) {
              FUN_100abcb78();
              _swift_allocError(&DAT_100f31588,puVar53,0,0);
              *puVar53 = 1;
              _swift_willThrow();
              FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
              FUN_10003bf2c(p_Var31,p_Var30);
              sVar29 = local_550;
              goto LAB_100acb6b0;
            }
            FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
            FUN_10003bf2c();
          }
          FUN_100acf2b4();
          pFVar52 = *(FILE **)(param_10 + lVar19);
          uVar57 = (uint)((ulong)p_Var30 >> 0x20);
          uVar48 = uVar57 >> 0x1e;
          if (uVar57 >> 0x1e < 2) {
            if (uVar48 == 0) {
              local_3d0[0] = SUB81(p_Var31,0);
              local_3d0[1] = SUB81((ulong)p_Var31 >> 8,0);
              local_3d0[2] = SUB81((ulong)p_Var31 >> 0x10,0);
              local_3d0[3] = SUB81((ulong)p_Var31 >> 0x18,0);
              local_3d0[4] = SUB81((ulong)p_Var31 >> 0x20,0);
              local_3d0[5] = SUB81((ulong)p_Var31 >> 0x28,0);
              local_3d0[6] = SUB81((ulong)p_Var31 >> 0x30,0);
              local_3d0[7] = SUB81((ulong)p_Var31 >> 0x38,0);
              local_3d0[8] = SUB81(p_Var30,0);
              local_3d0[9] = SUB81((ulong)p_Var30 >> 8,0);
              local_3d0[10] = SUB81((ulong)p_Var30 >> 0x10,0);
              local_3d0[0xb] = SUB81((ulong)p_Var30 >> 0x18,0);
              local_3d0[0xc] = SUB81((ulong)p_Var30 >> 0x20,0);
              local_3d0[0xd] = SUB81((ulong)p_Var30 >> 0x28,0);
              if (((ulong)p_Var30 & 0xff000000000000) != 0) {
                _fwrite(local_3d0,1,(ulong)p_Var30 >> 0x30 & 0xff,pFVar52);
              }
LAB_100acc2a0:
              FUN_10003bf2c(p_Var31,p_Var30);
              FUN_10003bf2c(p_Var31,p_Var30);
            }
            else {
              iVar25 = (int)p_Var31;
              lVar46 = (long)iVar25;
              lVar38 = ((long)p_Var31 >> 0x20) - lVar46;
              if ((long)p_Var31 >> 0x20 < lVar46) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc600);
                (*pcVar21)();
              }
              p_Var36 = p_Var31;
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var31);
              if (p_Var36 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),
                           (__DataStorage *)0x0);
              }
              else {
                p_Var40 = (__DataStorage *)
                          Foundation::__DataStorage::get__offset
                                    ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var36)
                ;
                if (SBORROW8(lVar46,(long)p_Var40)) {
                    /* WARNING: Does not return */
                  pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc614);
                  (*pcVar21)();
                }
                lVar41 = Foundation::__DataStorage::get__length
                                   ((__DataStorage *)((ulong)p_Var30 & 0x3fffffffffffffff),p_Var40);
                if (p_Var36 + (lVar46 - (long)p_Var40) != (__DataStorage *)0x0) {
                  if (lVar38 <= lVar41) {
                    lVar41 = lVar38;
                  }
                  if (lVar41 != 0) {
                    iVar45 = (int)((ulong)p_Var31 >> 0x20);
                    if (SBORROW4(iVar45,iVar25)) {
                    /* WARNING: Does not return */
                      pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc624);
                      (*pcVar21)();
                    }
                    _fwrite(p_Var36 + (lVar46 - (long)p_Var40),1,(long)(iVar45 - iVar25),pFVar52);
                  }
                }
              }
            }
          }
          else {
            if (uVar48 != 2) goto LAB_100acc2a0;
            uVar61 = *(undefined8 *)(p_Var31 + 0x10);
            uVar62 = *(undefined8 *)(p_Var31 + 0x18);
            FUN_1001037b4(p_Var31,p_Var30);
            FUN_100ac9e88(uVar61,uVar62,(ulong)p_Var30 & 0x3fffffffffffffff,&local_340,p_Var31,
                          p_Var30,pFVar52);
          }
          iVar25 = _ferror(pFVar52);
          puVar53 = (undefined1 *)CONCAT44(extraout_var_06,iVar25);
          if (iVar25 < 1) {
            FUN_10003bf2c(p_Var31,p_Var30);
            FUN_100ab8c74();
            _swift_allocError(&DAT_100f31130,p_Var31,0,0);
            *p_Var31 = (__DataStorage)0x5;
            _swift_willThrow();
            _swift_errorRelease(local_400);
            _fflush(*(FILE **)(param_10 + lVar19));
            goto LAB_100acc36c;
          }
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,puVar53,0,0);
          *puVar53 = 1;
          _swift_willThrow();
          FUN_10003bf2c(p_Var31,p_Var30);
          sVar29 = local_550;
        }
        else {
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,p_Var31,0,0);
          *p_Var31 = (__DataStorage)0x1;
          _swift_willThrow();
        }
      }
      else {
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,p_Var31,0,0);
        *p_Var31 = (__DataStorage)0x1;
        _swift_willThrow();
        sVar29 = local_550;
      }
LAB_100acb6b0:
      _swift_errorRelease(local_400);
      _fflush(*(FILE **)(param_10 + lVar19));
      FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
      FUN_100abcbf4(&local_1c0);
      FUN_10003bf2c(puVar28,sVar29);
      goto LAB_100acae64;
    }
    if ((local_51c & 0xff) == 1) {
      (*local_508)(0,0);
      if (unaff_x21 != (undefined *)0x0) goto LAB_100acb110;
      FUN_10003bf2c();
      IVar20 = local_528;
      if (local_528 != 0) {
        IVar33 = objc_stub::FUN_100c108c0(local_528);
        objc_stub::setCompletedUnitCount_(IVar20,IVar33);
      }
      uVar26 = 0;
      uVar58 = 0;
      goto LAB_100acba64;
    }
    p_Var30 = (__DataStorage *)0x0;
    uVar55 = param_4;
    (*local_508)();
    if (unaff_x21 != (undefined *)0x0) {
      _swift_bridgeObjectRelease(local_518);
      FUN_100aca454(&local_2d8);
      sVar29 = local_550;
      goto LAB_100acacb8;
    }
    uVar57 = (uint)(uVar55 >> 0x20);
    uVar48 = uVar57 >> 0x1e;
    if (uVar57 >> 0x1e < 2) {
      iVar25 = (int)p_Var30;
      if (uVar48 == 0) {
        _Var10 = SUB81(p_Var30,0);
        uVar50 = (undefined1)((ulong)p_Var30 >> 8);
        uVar11 = (undefined1)((ulong)p_Var30 >> 0x10);
        local_508 = (code *)((ulong)p_Var30 >> 0x18);
        local_3d0[3] = SUB81((ulong)p_Var30 >> 0x18,0);
        local_510 = (ulong)p_Var30 >> 0x20;
        local_3d0[4] = SUB81((ulong)p_Var30 >> 0x20,0);
        local_588[3] = (ulong)p_Var30 >> 0x28;
        local_3d0[5] = SUB81((ulong)p_Var30 >> 0x28,0);
        local_588[2] = (ulong)p_Var30 >> 0x30;
        local_3d0[6] = SUB81((ulong)p_Var30 >> 0x30,0);
        local_588[1] = (ulong)p_Var30 >> 0x38;
        local_3d0[7] = SUB81((ulong)p_Var30 >> 0x38,0);
        local_588[0] = uVar55 >> 8;
        uVar12 = (undefined1)uVar55;
        local_3d0[9] = SUB81(uVar55 >> 8,0);
        uVar13 = (undefined1)(uVar55 >> 0x10);
        uVar14 = (undefined1)(uVar55 >> 0x18);
        uVar15 = (undefined1)(uVar55 >> 0x20);
        local_590 = uVar55 >> 0x30 & 0xff;
        uVar16 = (undefined1)(uVar55 >> 0x28);
        local_3d0[0] = _Var10;
        local_3d0[1] = (__DataStorage)uVar50;
        local_3d0[2] = (__DataStorage)uVar11;
        local_3d0[8] = (__DataStorage)uVar12;
        local_3d0[10] = (__DataStorage)uVar13;
        local_3d0[0xb] = (__DataStorage)uVar14;
        local_3d0[0xc] = (__DataStorage)uVar15;
        local_3d0[0xd] = (__DataStorage)uVar16;
        FUN_100ad3f98(&local_340,local_3d0,local_3d0 + local_590,p_Var30,uVar55,0);
        uVar26 = CONCAT13(uStack_33d,CONCAT12(uStack_33e,CONCAT11(uStack_33f,local_340)));
        pFVar52 = *(FILE **)(param_10 + lVar19);
        local_3d0[3] = SUB81(local_508,0);
        local_3d0[4] = SUB81(local_510,0);
        local_3d0[5] = SUB81(local_588[3],0);
        local_3d0[6] = SUB81(local_588[2],0);
        local_3d0[7] = SUB81(local_588[1],0);
        local_3d0[9] = SUB81(local_588[0],0);
        if ((uVar55 & 0xff000000000000) == 0) {
          uVar58 = 0;
          local_3d0[0] = _Var10;
          local_3d0[1] = (__DataStorage)uVar50;
          local_3d0[2] = (__DataStorage)uVar11;
          local_3d0[8] = (__DataStorage)uVar12;
          local_3d0[10] = (__DataStorage)uVar13;
          local_3d0[0xb] = (__DataStorage)uVar14;
          local_3d0[0xc] = (__DataStorage)uVar15;
          local_3d0[0xd] = (__DataStorage)uVar16;
          goto LAB_100acb9c8;
        }
        p_Var31 = local_3d0;
        sVar29 = local_590;
        local_3d0[0] = _Var10;
        local_3d0[1] = (__DataStorage)uVar50;
        local_3d0[2] = (__DataStorage)uVar11;
        local_3d0[8] = (__DataStorage)uVar12;
        local_3d0[10] = (__DataStorage)uVar13;
        local_3d0[0xb] = (__DataStorage)uVar14;
        local_3d0[0xc] = (__DataStorage)uVar15;
        local_3d0[0xd] = (__DataStorage)uVar16;
LAB_100acb9ac:
        uVar58 = _fwrite(p_Var31,1,sVar29,pFVar52);
      }
      else {
        lVar41 = (long)iVar25;
        lVar46 = ((long)p_Var30 >> 0x20) - lVar41;
        if ((long)p_Var30 >> 0x20 < lVar41) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5d8);
          (*pcVar21)();
        }
        p_Var31 = p_Var30;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var30);
        if (p_Var31 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          p_Var31 = (__DataStorage *)0x0;
LAB_100acb88c:
          p_Var36 = (__DataStorage *)0x0;
        }
        else {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar41,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5f0);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar41 - (long)p_Var36);
          lVar37 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var36);
          if (p_Var31 == (__DataStorage *)0x0) goto LAB_100acb88c;
          if (lVar46 <= lVar37) {
            lVar37 = lVar46;
          }
          p_Var36 = p_Var31 + lVar37;
        }
        FUN_100ad3f98(local_3d0,p_Var31,p_Var36,p_Var30,uVar55,0);
        uVar26 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
        pFVar52 = *(FILE **)(param_10 + lVar19);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
        if (p_Var31 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar41,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5f4);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar41 - (long)p_Var36);
          lVar41 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var36);
          if (p_Var31 != (__DataStorage *)0x0) {
            if (lVar46 <= lVar41) {
              lVar41 = lVar46;
            }
            if (lVar41 != 0) {
              iVar44 = (int)((ulong)p_Var30 >> 0x20);
              if (SBORROW4(iVar44,iVar25)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc618);
                (*pcVar21)();
              }
              sVar29 = (size_t)(iVar44 - iVar25);
              goto LAB_100acb9ac;
            }
          }
        }
LAB_100acb9c0:
        uVar58 = 0;
      }
    }
    else {
      if (uVar48 == 2) {
        lVar46 = *(long *)(p_Var30 + 0x10);
        lVar41 = *(long *)(p_Var30 + 0x18);
        p_Var31 = p_Var30;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var30);
        p_Var36 = (__DataStorage *)0x0;
        if (p_Var31 != (__DataStorage *)0x0) {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5ec);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar46 - (long)p_Var36);
        }
        lVar37 = lVar41 - lVar46;
        if (SBORROW8(lVar41,lVar46)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5dc);
          (*pcVar21)();
        }
        lVar46 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var36);
        if (p_Var31 == (__DataStorage *)0x0) {
          p_Var36 = (__DataStorage *)0x0;
        }
        else {
          if (lVar37 <= lVar46) {
            lVar46 = lVar37;
          }
          p_Var36 = p_Var31 + lVar46;
        }
        FUN_100ad3f98(local_3d0,p_Var31,p_Var36,p_Var30,uVar55,0);
        uVar26 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
        pFVar52 = *(FILE **)(param_10 + lVar19);
        lVar46 = *(long *)(p_Var30 + 0x10);
        lVar41 = *(long *)(p_Var30 + 0x18);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
        p_Var36 = (__DataStorage *)0x0;
        if (p_Var31 != (__DataStorage *)0x0) {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5f8);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar46 - (long)p_Var36);
        }
        lVar37 = lVar41 - lVar46;
        if (SBORROW8(lVar41,lVar46)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5e0);
          (*pcVar21)();
        }
        lVar46 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar55 & 0x3fffffffffffffff),p_Var36);
        if (p_Var31 != (__DataStorage *)0x0) {
          if (lVar37 <= lVar46) {
            lVar46 = lVar37;
          }
          if (lVar46 != 0) {
            sVar29 = *(long *)(p_Var30 + 0x18) - *(long *)(p_Var30 + 0x10);
            if (SBORROW8(*(long *)(p_Var30 + 0x18),*(long *)(p_Var30 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc604);
              (*pcVar21)();
            }
            goto LAB_100acb9ac;
          }
        }
        goto LAB_100acb9c0;
      }
      local_3d0[8] = (__DataStorage)0x0;
      local_3d0[9] = (__DataStorage)0x0;
      local_3d0[10] = (__DataStorage)0x0;
      local_3d0[0xb] = (__DataStorage)0x0;
      local_3d0[0xc] = (__DataStorage)0x0;
      local_3d0[0xd] = (__DataStorage)0x0;
      local_3d0[0] = (__DataStorage)0x0;
      local_3d0[1] = (__DataStorage)0x0;
      local_3d0[2] = (__DataStorage)0x0;
      local_3d0[3] = (__DataStorage)0x0;
      local_3d0[4] = (__DataStorage)0x0;
      local_3d0[5] = (__DataStorage)0x0;
      local_3d0[6] = (__DataStorage)0x0;
      local_3d0[7] = (__DataStorage)0x0;
      FUN_100ad3f98(&local_340,local_3d0,local_3d0,p_Var30,uVar55,0);
      uVar58 = 0;
      uVar26 = CONCAT13(uStack_33d,CONCAT12(uStack_33e,CONCAT11(uStack_33f,local_340)));
      pFVar52 = *(FILE **)(param_10 + lVar19);
    }
LAB_100acb9c8:
    iVar25 = _ferror(pFVar52);
    if (0 < iVar25) {
      puVar53 = local_518;
      _swift_bridgeObjectRelease();
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      FUN_10003bf2c(p_Var30,uVar55);
      sVar29 = local_550;
      goto LAB_100acacb8;
    }
    FUN_10003bf2c(p_Var30,uVar55);
    IVar20 = local_528;
    sVar29 = local_550;
    if (local_528 != 0) {
      IVar33 = objc_stub::FUN_100c108c0(local_528);
      objc_stub::setCompletedUnitCount_(IVar20,IVar33);
      sVar29 = local_550;
    }
LAB_100acba64:
    oVar39 = _ftello(*(FILE **)(param_10 + lVar19));
    if (oVar39 < 0) {
      puVar53 = local_518;
      _swift_bridgeObjectRelease();
      FUN_100ab8c74();
      unaff_x21 = &DAT_100f31130;
      _swift_allocError(&DAT_100f31130,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      goto LAB_100acacb8;
    }
    _fseeko(*(FILE **)(param_10 + lVar19),(off_t)local_560,0);
    if ((long)uVar58 < 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc59c);
      (*pcVar21)();
    }
    puVar53 = local_518;
    FUN_100ac0904();
    uVar55 = 0xffffffff;
    bVar22 = 0xfffffffe < param_4 || 0xfffffffe < uVar58;
    if (bVar22) {
      uVar50 = 0x2d;
      uVar51 = 0x14;
      uVar54 = 0xffffffff;
      uVar49 = 0x100001;
      uVar60 = uVar58;
      local_4e0 = param_4;
    }
    else {
      uVar51 = 0;
      uVar49 = 0;
      uVar50 = 0x14;
      local_4e0 = 0;
      uVar60 = 0;
      uVar54 = uVar58;
      uVar55 = param_4;
    }
    uVar57 = (uint)((ulong)puVar53 >> 0x20);
    uVar48 = uVar57 >> 0x1e;
    if (uVar57 >> 0x1e < 2) {
      if (uVar48 == 0) {
        uVar58 = (ulong)puVar53 >> 0x30 & 0xff;
      }
      else {
        iVar25 = (int)((ulong)param_1 >> 0x20);
        if (SBORROW4(iVar25,(int)param_1)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5c0);
          (*pcVar21)();
        }
        uVar58 = (ulong)(iVar25 - (int)param_1);
LAB_100acbb7c:
        if ((long)uVar58 < 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5a0);
          (*pcVar21)();
        }
        if (uVar58 >> 0x10 != 0) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acbb8c);
          (*pcVar21)();
        }
      }
    }
    else {
      if (uVar48 == 2) {
        uVar58 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acbb6c);
          (*pcVar21)();
        }
        goto LAB_100acbb7c;
      }
      uVar58 = 0;
    }
    if (bVar22) {
      local_468 = (undefined2)uVar49;
      local_466 = (undefined2)((uint)uVar49 >> 0x10);
      local_460 = local_4e0;
      local_450 = 0;
      local_448 = 0;
      p_Var30 = param_1;
      puVar42 = puVar53;
      uStack_458 = uVar60;
      FUN_100adacb4();
    }
    else {
      p_Var30 = (__DataStorage *)0x0;
      puVar42 = (undefined1 *)0xc000000000000000;
    }
    local_340 = (__DataStorage)0x50;
    uStack_33f = 0x4b;
    uStack_33e = 3;
    uStack_33d = 4;
    uStack_33b = 0;
    uStack_33a = 0;
    uStack_339 = 8;
    uStack_338 = (undefined1)local_564;
    uStack_337 = (undefined1)((uint)local_564 >> 8);
    uStack_336 = (undefined1)local_558;
    uStack_335 = (undefined1)((uint)local_558 >> 8);
    uStack_334 = (undefined1)local_554;
    uStack_333 = (undefined1)((uint)local_554 >> 8);
    local_32c = (undefined4)uVar54;
    local_328 = (undefined4)uVar55;
    local_324 = (undefined2)uVar58;
    local_300 = 0;
    uStack_118 = CONCAT26(uStack_332,
                          CONCAT15(uStack_333,
                                   CONCAT14(uStack_334,
                                            CONCAT13(uStack_335,
                                                     CONCAT12(uStack_336,(short)local_564)))));
    local_120 = CONCAT17(8,(uint7)CONCAT14(uVar50,0x4034b50));
    uStack_108 = CONCAT26(uVar51,CONCAT24(local_324,local_328));
    uStack_110 = CONCAT44(local_32c,uVar26);
    local_e0 = 0;
    uStack_33c = uVar50;
    local_330 = uVar26;
    local_322 = uVar51;
    local_320 = param_1;
    puStack_318 = puVar53;
    local_310 = p_Var30;
    local_308 = puVar42;
    local_100 = param_1;
    puStack_f8 = puVar53;
    p_Stack_f0 = p_Var30;
    puStack_e8 = puVar42;
    FUN_100ad63a8();
    pFVar52 = *(FILE **)(param_10 + lVar19);
    uVar57 = (uint)((ulong)puVar42 >> 0x20);
    uVar48 = uVar57 >> 0x1e;
    if (uVar57 >> 0x1e < 2) {
      if (uVar48 == 0) {
        local_3d0[0] = SUB81(p_Var30,0);
        local_3d0[1] = SUB81((ulong)p_Var30 >> 8,0);
        local_3d0[2] = SUB81((ulong)p_Var30 >> 0x10,0);
        local_3d0[3] = SUB81((ulong)p_Var30 >> 0x18,0);
        local_3d0[4] = SUB81((ulong)p_Var30 >> 0x20,0);
        local_3d0[5] = SUB81((ulong)p_Var30 >> 0x28,0);
        local_3d0[6] = SUB81((ulong)p_Var30 >> 0x30,0);
        local_3d0[7] = SUB81((ulong)p_Var30 >> 0x38,0);
        local_3d0[8] = SUB81(puVar42,0);
        local_3d0[9] = SUB81((ulong)puVar42 >> 8,0);
        local_3d0[10] = SUB81((ulong)puVar42 >> 0x10,0);
        local_3d0[0xb] = SUB81((ulong)puVar42 >> 0x18,0);
        local_3d0[0xc] = SUB81((ulong)puVar42 >> 0x20,0);
        local_3d0[0xd] = SUB81((ulong)puVar42 >> 0x28,0);
        if (((ulong)puVar42 & 0xff000000000000) != 0) {
          sVar29 = (ulong)puVar42 >> 0x30 & 0xff;
          p_Var31 = local_3d0;
LAB_100acbdb8:
          _fwrite(p_Var31,1,sVar29,pFVar52);
        }
      }
      else {
        iVar25 = (int)p_Var30;
        lVar41 = (long)iVar25;
        lVar46 = ((long)p_Var30 >> 0x20) - lVar41;
        if ((long)p_Var30 >> 0x20 < lVar41) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5c4);
          (*pcVar21)();
        }
        p_Var31 = p_Var30;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var30);
        if (p_Var31 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var36 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var31);
          if (SBORROW8(lVar41,(long)p_Var36)) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5e8);
            (*pcVar21)();
          }
          p_Var31 = p_Var31 + (lVar41 - (long)p_Var36);
          lVar41 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var36);
          if (p_Var31 != (__DataStorage *)0x0) {
            if (lVar46 <= lVar41) {
              lVar41 = lVar46;
            }
            if (lVar41 != 0) {
              iVar44 = (int)((ulong)p_Var30 >> 0x20);
              if (SBORROW4(iVar44,iVar25)) {
                    /* WARNING: Does not return */
                pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc610);
                (*pcVar21)();
              }
              sVar29 = (size_t)(iVar44 - iVar25);
              goto LAB_100acbdb8;
            }
          }
        }
      }
    }
    else if (uVar48 == 2) {
      lVar46 = *(long *)(p_Var30 + 0x10);
      lVar41 = *(long *)(p_Var30 + 0x18);
      p_Var31 = p_Var30;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var30);
      p_Var36 = (__DataStorage *)0x0;
      if (p_Var31 != (__DataStorage *)0x0) {
        p_Var36 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var31);
        if (SBORROW8(lVar46,(long)p_Var36)) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5e4);
          (*pcVar21)();
        }
        p_Var31 = p_Var31 + (lVar46 - (long)p_Var36);
      }
      lVar37 = lVar41 - lVar46;
      if (SBORROW8(lVar41,lVar46)) {
                    /* WARNING: Does not return */
        pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5c8);
        (*pcVar21)();
      }
      lVar46 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)puVar42 & 0x3fffffffffffffff),p_Var36);
      if (p_Var31 != (__DataStorage *)0x0) {
        if (lVar37 <= lVar46) {
          lVar46 = lVar37;
        }
        if (lVar46 != 0) {
          sVar29 = *(long *)(p_Var30 + 0x18) - *(long *)(p_Var30 + 0x10);
          if (SBORROW8(*(long *)(p_Var30 + 0x18),*(long *)(p_Var30 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar21 = (code *)SoftwareBreakpoint(1,0x100acbd54);
            (*pcVar21)();
          }
          goto LAB_100acbdb8;
        }
      }
    }
    iVar25 = _ferror(pFVar52);
    puVar53 = (undefined1 *)CONCAT44(extraout_var_03,iVar25);
    if (0 < iVar25) {
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
      FUN_100aca454(&local_2d8);
      FUN_100aca454(&local_340);
      FUN_10003bf2c(p_Var30,puVar42);
      sVar29 = local_550;
      goto LAB_100acacb8;
    }
    FUN_100aca454(&local_2d8);
    FUN_10003bf2c(p_Var30,puVar42);
    _fseeko(*(FILE **)(param_10 + lVar19),oVar39,0);
    uVar57 = local_51c;
    sVar29 = local_550;
    pFVar52 = *(FILE **)(param_10 + lVar19);
    local_400 = (undefined *)0x0;
    uVar48 = (uint)(local_550 >> 0x20);
    uVar47 = uVar48 >> 0x1e;
    if (uVar48 >> 0x1e < 2) {
      if (uVar47 != 0) {
        lVar46 = (long)iVar45;
        lVar41 = lVar38;
        if (lVar38 < lVar46) {
                    /* WARNING: Does not return */
          pcVar21 = (code *)SoftwareBreakpoint(1,0x100acc5fc);
          (*pcVar21)();
        }
        goto LAB_100acbf40;
      }
      local_3d0[8] = SUB81(local_550,0);
      local_3d0[9] = SUB81(local_550 >> 8,0);
      local_3d0[10] = SUB81(local_550 >> 0x10,0);
      local_3d0[0xb] = SUB81(local_550 >> 0x18,0);
      local_3d0[0xc] = SUB81(local_550 >> 0x20,0);
      local_3d0[0xd] = SUB81(local_550 >> 0x28,0);
      p_Var30 = local_3d0 + (local_550 >> 0x30 & 0xff);
      local_3d0[0] = _Var3;
      local_3d0[1] = (__DataStorage)uVar4;
      local_3d0[2] = (__DataStorage)uVar5;
      local_3d0[3] = (__DataStorage)uVar6;
      local_3d0[4] = (__DataStorage)uVar7;
      local_3d0[5] = (__DataStorage)uVar8;
      local_3d0[6] = (__DataStorage)uVar9;
      local_3d0[7] = (__DataStorage)uVar17;
LAB_100acbf70:
      FUN_100ad5e08(local_3d0,p_Var30,&local_400,local_548,param_8,pFVar52);
    }
    else {
      if (uVar47 != 2) {
        local_3d0[8] = (__DataStorage)0x0;
        local_3d0[9] = (__DataStorage)0x0;
        local_3d0[10] = (__DataStorage)0x0;
        local_3d0[0xb] = (__DataStorage)0x0;
        local_3d0[0xc] = (__DataStorage)0x0;
        local_3d0[0xd] = (__DataStorage)0x0;
        local_3d0[0] = (__DataStorage)0x0;
        local_3d0[1] = (__DataStorage)0x0;
        local_3d0[2] = (__DataStorage)0x0;
        local_3d0[3] = (__DataStorage)0x0;
        local_3d0[4] = (__DataStorage)0x0;
        local_3d0[5] = (__DataStorage)0x0;
        local_3d0[6] = (__DataStorage)0x0;
        local_3d0[7] = (__DataStorage)0x0;
        p_Var30 = local_3d0;
        goto LAB_100acbf70;
      }
      lVar46 = *(long *)(puVar28 + 0x10);
      lVar41 = *(long *)(puVar28 + 0x18);
LAB_100acbf40:
      FUN_100ac9f90(lVar46,lVar41,local_550 & 0x3fffffffffffffff,&local_400,local_548,param_8,
                    pFVar52);
    }
    iVar25 = _ferror(pFVar52);
    puVar53 = (undefined1 *)CONCAT44(extraout_var_04,iVar25);
    if (0 < iVar25) {
      FUN_100abcb78();
      unaff_x21 = &DAT_100f31588;
      _swift_allocError(&DAT_100f31588,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
LAB_100acc0a8:
      FUN_100aca454(&local_340);
      goto LAB_100acacb8;
    }
    uVar57 = uVar57 & 0xff;
    uVar48 = 0x1ed;
    if (uVar57 != 1) {
      uVar48 = 0x1a4;
    }
    if ((local_52c & 0xff0000) != 0x10000) {
      uVar48 = local_52c;
    }
    if (uVar57 == 0) {
      _Var24 = Darwin::get_S_IFREG();
      uVar57 = (uint)_Var24;
    }
    else if (uVar57 == 1) {
      _Var24 = Darwin::get_S_IFDIR();
      uVar57 = (uint)_Var24;
    }
    else {
      _Var24 = Darwin::get_S_IFLNK();
      uVar57 = (uint)_Var24;
    }
    FUN_100abb758(auStack_228,&local_120,local_560,(uVar57 | uVar48) << 0x10);
    if (unaff_x21 != (undefined *)0x0) goto LAB_100acc0a8;
    puVar53 = (undefined1 *)_ftello(*(FILE **)(param_10 + lVar19));
    if ((long)puVar53 < 0) {
      FUN_100ab8c74();
      unaff_x21 = &DAT_100f31130;
      _swift_allocError(&DAT_100f31130,puVar53,0,0);
      *puVar53 = 1;
      _swift_willThrow();
      FUN_100abce14(auStack_228);
      goto LAB_100acc0a8;
    }
    FUN_100abbee8(local_3d0,auStack_228,oVar39,puVar53,1);
    puVar34 = local_3b0;
    pcVar21 = local_3b8;
    uVar51 = uStack_3bc;
    uVar26 = CONCAT13(local_3d0[3],CONCAT12(local_3d0[2],CONCAT11(local_3d0[1],local_3d0[0])));
    uVar61 = CONCAT17(local_3d0[0xb],
                      CONCAT16(local_3d0[10],
                               CONCAT15(local_3d0[9],
                                        CONCAT14(local_3d0[8],
                                                 CONCAT13(local_3d0[7],
                                                          CONCAT12(local_3d0[6],
                                                                   CONCAT11(local_3d0[5],
                                                                            local_3d0[4])))))));
    uVar62 = CONCAT44(uStack_3c0,CONCAT22(uStack_3c2,CONCAT11(local_3d0[0xd],local_3d0[0xc])));
    uVar18 = CONCAT44(uStack_36c,uStack_370);
    FUN_100abce14(auStack_228);
    FUN_100aca454(&local_340);
    lStack_3f8 = local_540[1];
    local_400 = (undefined *)*local_540;
    lStack_3e8 = local_540[3];
    local_3f0 = local_540[2];
    local_3e0 = local_540[4];
    *(undefined4 *)local_540 = uVar26;
    *(undefined8 *)((long)local_540 + 4) = uVar61;
    *(undefined8 *)((long)local_540 + 0xc) = uVar62;
    *(undefined2 *)((long)local_540 + 0x14) = uVar51;
    local_540[3] = (long)pcVar21;
    local_540[4] = (long)puVar34;
    FUN_100abcbf4(&local_400);
    uVar58 = local_538[9];
    uVar61 = local_538[8];
    uVar66 = local_538[0xb];
    uVar64 = local_538[10];
    uStack_370 = *(undefined4 *)(local_538 + 0xc);
    uVar63 = local_538[1];
    uVar62 = *local_538;
    local_3b8 = (code *)local_538[3];
    uVar65 = local_538[2];
    local_3d0[8] = SUB81(uVar63,0);
    local_3d0[9] = SUB81((ulong)uVar63 >> 8,0);
    local_3d0[10] = SUB81((ulong)uVar63 >> 0x10,0);
    local_3d0[0xb] = SUB81((ulong)uVar63 >> 0x18,0);
    local_3d0[0xc] = SUB81((ulong)uVar63 >> 0x20,0);
    local_3d0[0xd] = SUB81((ulong)uVar63 >> 0x28,0);
    uStack_3c2 = (undefined2)((ulong)uVar63 >> 0x30);
    local_3d0[0] = SUB81(uVar62,0);
    local_3d0[1] = SUB81((ulong)uVar62 >> 8,0);
    local_3d0[2] = SUB81((ulong)uVar62 >> 0x10,0);
    local_3d0[3] = SUB81((ulong)uVar62 >> 0x18,0);
    local_3d0[4] = SUB81((ulong)uVar62 >> 0x20,0);
    local_3d0[5] = SUB81((ulong)uVar62 >> 0x28,0);
    local_3d0[6] = SUB81((ulong)uVar62 >> 0x30,0);
    local_3d0[7] = SUB81((ulong)uVar62 >> 0x38,0);
    uStack_3c0 = (undefined4)uVar65;
    uStack_3bc = (undefined2)((ulong)uVar65 >> 0x20);
    uStack_3ba = (undefined2)((ulong)uVar65 >> 0x30);
    uVar65 = local_538[5];
    local_3b0 = (undefined *)local_538[4];
    uVar63 = local_538[7];
    uVar62 = local_538[6];
    local_538[1] = uStack_3a0;
    *local_538 = uStack_3a8;
    local_538[3] = local_390;
    local_538[2] = uStack_398;
    local_538[5] = uStack_380;
    local_538[4] = uStack_388;
    local_538[7] = uVar18;
    local_538[6] = local_378;
    local_538[9] = uStack_360;
    local_538[8] = local_368;
    local_538[0xb] = uStack_350;
    local_538[10] = local_358;
    *(undefined4 *)(local_538 + 0xc) = local_348;
    uStack_3a8 = uVar65;
    uStack_3a0 = uVar62;
    uStack_398 = uVar63;
    local_390 = uVar61;
    uStack_388 = uVar58;
    uStack_380 = uVar64;
    local_378 = uVar66;
    FUN_1000fb4c4(local_3d0,&DAT_100ff82d0,&DAT_100c94208);
    _fflush(*(FILE **)(param_10 + lVar19));
LAB_100acc36c:
    FUN_1000fb4c4(&local_290,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_1c0);
    sVar29 = local_550;
  }
  FUN_10003bf2c(puVar28,sVar29);
LAB_100acae64:
  _swift_release(puVar27);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_88) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100acc628 | FUN_100acc628 */

void FUN_100acc628(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100acc7f8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100acc640 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100acc644 | FUN_100acc644 */

undefined8 FUN_100acc644(undefined8 param_1)

{
  FUN_100ab7efc();
  return param_1;
}



/* Address: 0x100acc678 | FUN_100acc678 */

void FUN_100acc678(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100acc688 | FUN_100acc688 */

void FUN_100acc688(void)

{
  long unaff_x20;
  
  FUN_100aca230(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100acc6a0 | FUN_100acc6a0 */

void FUN_100acc6a0(void)

{
  FUN_100aca4d4();
  return;
}



/* Address: 0x100acc6b4 | FUN_100acc6b4 */

void FUN_100acc6b4(void)

{
  FUN_100aca4ec();
  return;
}



/* Address: 0x100acc6c8 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x100acc6cc | thunk_FUN_100acc678 */

void thunk_FUN_100acc678(void)

{
  FUN_100acc678();
  return;
}



/* Address: 0x100acc6d0 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x100acc6d4 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x100acc6d8 | FUN_100acc6d8 */

void FUN_100acc6d8(char *param_1,void *param_2,URL param_3,undefined8 param_4,undefined4 param_5,
                  undefined8 param_6)

{
  URL UVar1;
  long lVar2;
  long lVar3;
  String SVar4;
  undefined8 local_70;
  
  local_70 = param_6;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar3 = *(long *)(UVar1.unknown + -8);
  lVar2 = (long)&local_70 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar4.bridgeObject = param_2;
  SVar4.str = param_1;
  Foundation::URL::appendingPathComponent(SVar4,param_3);
  FUN_100ac0ec4(param_1,param_2,lVar2,param_4,param_5,local_70);
  (**(code **)(lVar3 + 8))(lVar2,UVar1.unknown);
  return;
}



/* Address: 0x100acc7ac | FUN_100acc7ac */

void FUN_100acc7ac(void)

{
  FUN_100ac0ec4();
  return;
}



/* Address: 0x100acc7c4 | FUN_100acc7c4 */

void FUN_100acc7c4(void)

{
  FUN_100aca52c();
  return;
}



/* Address: 0x100acc7f8 | FUN_100acc7f8 */

void FUN_100acc7f8(undefined8 param_1,undefined8 param_2,code *param_3)

{
  (*param_3)();
  return;
}



/* Address: 0x100acc818 | FUN_100acc818 */

void FUN_100acc818(undefined8 param_1,undefined4 param_2)

{
  FUN_100ac746c(param_1,param_2);
  return;
}



/* Address: 0x100acc830 | FUN_100acc830 */

void FUN_100acc830(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x100acc83c | FUN_100acc83c */

undefined4 * FUN_100acc83c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  *(undefined8 *)(param_1 + 0x14) = uVar1;
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Address: 0x100acc8b4 | FUN_100acc8b4 */

undefined4 * FUN_100acc8b4(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  param_1[0x14] = param_2[0x14];
  param_1[0x15] = param_2[0x15];
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Address: 0x100acc96c | FUN_100acc96c */

void FUN_100acc96c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  *(undefined4 *)(param_1 + 0xc) = *(undefined4 *)(param_2 + 0xc);
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100acc998 | FUN_100acc998 */

undefined4 * FUN_100acc998(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  *(undefined8 *)(param_1 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_1[0x18] = param_2[0x18];
  return param_1;
}



/* Address: 0x100acca10 | FUN_100acca10 */

int FUN_100acca10(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x19] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100acca64 | FUN_100acca64 */

void FUN_100acca64(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)((long)param_1 + 100) = 0;
    }
    if (param_2 != 0) {
      param_1[8] = 0;
      param_1[9] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)((long)param_1 + 100) = 1;
    }
  }
  return;
}



/* Address: 0x100accad0 | FUN_100accad0 */

undefined1  [16] FUN_100accad0(void)

{
  return ZEXT816(0x100f30ec8);
}



/* Address: 0x100accae0 | FUN_100accae0 */

void FUN_100accae0(undefined8 param_1,undefined8 param_2)

{
  __DataStorage *p_Var1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  __DataStorage *p_Var5;
  __DataStorage **pp_Var6;
  __DataStorage *p_Var7;
  long lVar8;
  __DataStorage *p_Var9;
  UnsafeRawBufferPointer contentsOf;
  _Representation _Var10;
  undefined8 uVar11;
  uint uVar12;
  long unaff_x20;
  long lVar13;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 uStack_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  __DataStorage *local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100accd78();
  p_Var5 = *(__DataStorage **)(unaff_x20 + 0x50);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  FUN_100acdf24(p_Var5,uVar11,*(undefined4 *)(unaff_x20 + 0x60));
  local_88 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  puStack_80 = 
  PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
  ;
  pp_Var6 = &local_a0;
  local_a0 = p_Var5;
  uStack_98 = uVar11;
  local_78 = param_1;
  uStack_70 = param_2;
  FUN_100004640();
  p_Var7 = *pp_Var6;
  p_Var1 = pp_Var6[1];
  uVar3 = (uint)((ulong)p_Var1 >> 0x20);
  uVar12 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar12 != 0) {
      lVar13 = (long)(int)p_Var7;
      lVar8 = ((long)p_Var7 >> 0x20) - lVar13;
      if ((long)p_Var7 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100accd68);
        (*pcVar4)();
      }
      FUN_1001037b4(param_1,param_2);
      p_Var7 = p_Var5;
      FUN_1001037b4(p_Var5,uVar11);
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),p_Var7);
      if (p_Var7 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        contentsOf.unknown = (__DataStorage *)0x0;
      }
      else {
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar13,(long)p_Var9)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100accd74);
          (*pcVar4)();
        }
        contentsOf.unknown = p_Var7 + (lVar13 - (long)p_Var9);
        lVar13 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),p_Var9);
        if ((__DataStorage *)contentsOf.unknown != (__DataStorage *)0x0) {
          if (lVar8 <= lVar13) {
            lVar13 = lVar8;
          }
          _Var10.value = (char)lVar13 + (char)contentsOf.unknown;
          goto LAB_100accd04;
        }
      }
      _Var10.value = 0;
LAB_100accd04:
      Foundation::Data::_Representation::append(contentsOf,_Var10);
      FUN_10003bf2c(p_Var5,uVar11);
      FUN_10003bf2c(param_1,param_2);
      goto LAB_100accd20;
    }
    local_b0 = SUB81(p_Var7,0);
    uStack_af = (undefined1)((ulong)p_Var7 >> 8);
    uStack_ae = (undefined1)((ulong)p_Var7 >> 0x10);
    uStack_ad = (undefined1)((ulong)p_Var7 >> 0x18);
    uStack_ac = (undefined1)((ulong)p_Var7 >> 0x20);
    uStack_ab = (undefined1)((ulong)p_Var7 >> 0x28);
    uStack_aa = (undefined1)((ulong)p_Var7 >> 0x30);
    uStack_a9 = (undefined1)((ulong)p_Var7 >> 0x38);
    uStack_a8 = SUB81(p_Var1,0);
    uStack_a7 = (undefined1)((ulong)p_Var1 >> 8);
    uStack_a6 = (undefined1)((ulong)p_Var1 >> 0x10);
    uStack_a5 = (undefined1)((ulong)p_Var1 >> 0x18);
    uStack_a4 = (undefined1)((ulong)p_Var1 >> 0x20);
    uStack_a3 = (undefined1)((ulong)p_Var1 >> 0x28);
    _Var10.value = (char)&local_b0 + (char)((ulong)p_Var1 >> 0x30);
  }
  else {
    if (uVar12 == 2) {
      lVar8 = *(long *)(p_Var7 + 0x10);
      lVar13 = *(long *)(p_Var7 + 0x18);
      FUN_1001037b4(param_1,param_2);
      contentsOf.unknown = p_Var5;
      FUN_1001037b4(p_Var5,uVar11);
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),
                 (__DataStorage *)contentsOf.unknown);
      p_Var7 = (__DataStorage *)0x0;
      if ((__DataStorage *)contentsOf.unknown != (__DataStorage *)0x0) {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),
                            (__DataStorage *)contentsOf.unknown);
        if (SBORROW8(lVar8,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100accd70);
          (*pcVar4)();
        }
        contentsOf.unknown = contentsOf.unknown + (lVar8 - (long)p_Var7);
      }
      lVar2 = lVar13 - lVar8;
      if (SBORROW8(lVar13,lVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100accd6c);
        (*pcVar4)();
      }
      lVar8 = Foundation::__DataStorage::get__length
                        ((__DataStorage *)((ulong)p_Var1 & 0x3fffffffffffffff),p_Var7);
      if ((__DataStorage *)contentsOf.unknown == (__DataStorage *)0x0) {
        _Var10.value = 0;
      }
      else {
        if (lVar2 <= lVar8) {
          lVar8 = lVar2;
        }
        _Var10.value = (char)lVar8 + (char)contentsOf.unknown;
      }
      goto LAB_100accd04;
    }
    uStack_a8 = 0;
    uStack_a7 = 0;
    uStack_a6 = 0;
    uStack_a5 = 0;
    uStack_a4 = 0;
    uStack_a3 = 0;
    local_b0 = 0;
    uStack_af = 0;
    uStack_ae = 0;
    uStack_ad = 0;
    uStack_ac = 0;
    uStack_ab = 0;
    uStack_aa = 0;
    uStack_a9 = 0;
    _Var10.value = (__int8)&local_b0;
  }
  Foundation::Data::_Representation::append((UnsafeRawBufferPointer)&local_b0,_Var10);
LAB_100accd20:
  FUN_100004594(&local_a0);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_78,uStack_70);
  }
  return;
}


