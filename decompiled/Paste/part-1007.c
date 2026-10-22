/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100adf278 | FUN_100adf278 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100adf85c) */
/* WARNING: Removing unreachable block (ram,0x000100adf490) */
/* WARNING: Removing unreachable block (ram,0x000100adf740) */
/* WARNING: Removing unreachable block (ram,0x000100adfe30) */
/* WARNING: Removing unreachable block (ram,0x000100adf914) */
/* WARNING: Removing unreachable block (ram,0x000100adfa98) */
/* WARNING: Removing unreachable block (ram,0x000100adff54) */
/* WARNING: Removing unreachable block (ram,0x000100adff98) */

void FUN_100adf278(char *param_1,undefined8 param_2,uint param_3,uint param_4,ID param_5)

{
  char *pcVar1;
  void *pvVar2;
  String SVar3;
  bool bVar4;
  Code CVar5;
  CocoaError CVar6;
  URL UVar7;
  undefined *puVar8;
  URL UVar9;
  undefined7 extraout_var;
  Code CVar10;
  CocoaError CVar11;
  Encoding EVar12;
  String *pSVar13;
  ID IVar14;
  URL UVar15;
  long lVar16;
  long lVar17;
  char *pcVar18;
  long lVar19;
  ulong uVar20;
  NSString *pNVar21;
  char *pcVar22;
  ID unaff_x20;
  code *pcVar23;
  undefined *unaff_x21;
  NSString *pNVar24;
  code *pcVar25;
  long lVar26;
  String *pSVar27;
  URL UVar28;
  ID self;
  void **ppvVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  long local_1c0;
  NSString *local_1b8;
  NSString *local_1b0;
  long local_1a8;
  long local_1a0;
  long local_198;
  ID local_190;
  uint local_188;
  uint local_184;
  char *local_180;
  void *local_160;
  void *pvVar41;
  String local_120 [11];
  long local_70;
  undefined7 extraout_var_00;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_190 = param_5;
  local_188 = param_3;
  local_184 = param_4;
  CVar5 = Foundation::CocoaError::Code::typeMetadataAccessor();
  CVar11.unknown =
       (undefined *)
       ((long)&local_1c0 -
       (*(long *)(*(long *)(CVar5.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  CVar6 = Foundation::CocoaError::typeMetadataAccessor();
  lVar16 = *(long *)(CVar6.unknown + -8);
  lVar17 = (long)CVar11.unknown - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  pcVar18 = (char *)(lVar17 - (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
                    );
  local_180 = pcVar18;
  UVar7 = Foundation::URL::typeMetadataAccessor();
  lVar19 = *(long *)(UVar7.unknown + -8);
  uVar20 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar26 = (long)pcVar18 - uVar20;
  lVar30 = lVar26 - uVar20;
  pNVar21 = (NSString *)(lVar30 - uVar20);
  pNVar24 = pNVar21 + -uVar20;
  lVar33 = (long)pNVar24 - uVar20;
  lVar32 = lVar33 - uVar20;
  lVar31 = lVar32 - uVar20;
  puVar8 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  UVar9.unknown = (undefined *)objc_stub::init(puVar8);
  CVar5.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar9);
  CVar5.unknown._1_7_ = extraout_var;
  if (unaff_x21 == (undefined *)0x0) {
    local_1c0 = lVar30;
    local_1b8 = pNVar21;
    local_1b0 = pNVar24;
    local_1a8 = lVar33;
    local_1a0 = lVar32;
    local_198 = lVar31 - uVar20;
    if (!CVar5.unknown._0_1_) goto LAB_100adf4bc;
    CVar10.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable((URL)CVar5.unknown);
    UVar9.unknown = local_180;
    lVar30 = local_198;
    CVar10.unknown._1_7_ = extraout_var_00;
    if (!CVar10.unknown._0_1_) {
      pcVar25 = *(code **)(lVar19 + 0x10);
      (*pcVar25)(local_198,param_2,UVar7.unknown);
      EVar12 = Encoding::_typeMetadataAccessor();
      (**(code **)(*(long *)(EVar12.unknown + -8) + 0x38))(UVar9.unknown,1,1,EVar12.unknown);
      FUN_100ad37bc();
      _swift_allocObject();
      FUN_100ad0300(lVar30,0);
      UVar15.unknown = param_1;
      FUN_100ae123c();
      lVar16 = local_1c0;
      if (((uint)UVar15.unknown & 0xff) == 1) {
        SVar34 = Foundation::URL::get_path(UVar15);
        UVar9.unknown = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar34.bridgeObject);
        local_120[0].str = (char *)0x0;
        pSVar27 = local_120;
        pSVar13 = (String *)objc_stub::FUN_100c0fc20(unaff_x20);
        if (pSVar13 == (String *)0x0) {
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_release(lVar30);
        }
        else {
          (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
          UVar15.unknown = (undefined *)0x0;
          IVar14 = local_190;
          if ((local_188 & 1) != 0) {
            UVar15.unknown = (undefined *)pSVar13;
            _swift_isUniquelyReferenced_nonNull_native();
            IVar14 = local_190;
            if (((ulong)UVar15.unknown & 1) == 0) {
              UVar15.unknown = (undefined *)0x0;
              UVar9.unknown = &DAT_00000001;
              FUN_100ae0b0c(0,pSVar13[1].str + 1);
              pSVar27 = pSVar13;
              pSVar13 = (String *)UVar15.unknown;
            }
            pcVar18 = pSVar13[1].str;
            if ((char *)((ulong)pSVar13[1].bridgeObject >> 1) <= pcVar18) {
              UVar15.unknown = (undefined *)(ulong)((void *)0x1 < pSVar13[1].bridgeObject);
              UVar9.unknown = &DAT_00000001;
              FUN_100ae0b0c(UVar15.unknown,pcVar18 + 1);
              pSVar27 = pSVar13;
              pSVar13 = (String *)UVar15.unknown;
            }
            pSVar13[1].str = pcVar18 + 1;
            pSVar13[(long)(pcVar18 + 2)].str = (char *)0x0;
            pSVar13[(long)(pcVar18 + 2)].bridgeObject = (void *)0xe000000000000000;
          }
          UVar28.unknown = UVar9.unknown;
          self = 0;
          if (IVar14 != 0) {
            pcVar22 = pSVar13[1].str;
            UVar28.unknown = (NSString *)0x0;
            ppvVar29 = &pSVar13[2].bridgeObject;
            pcVar18 = (char *)0xffffffffffffffff;
            while ((long)pcVar18 - (long)pcVar22 != -1) {
              pcVar18 = pcVar18 + 1;
              if (pSVar13[1].str <= pcVar18) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x100adffc4);
                (*pcVar25)();
              }
              pcVar1 = ((String *)(ppvVar29 + -1))->str;
              pvVar2 = *ppvVar29;
              _swift_bridgeObjectRetain(pvVar2);
              SVar34.bridgeObject = pvVar2;
              SVar34.str = pcVar1;
              Foundation::URL::appendingPathComponent(SVar34,UVar9);
              lVar16 = lVar31;
              FUN_100ae123c();
              if (((uint)lVar16 & 0xff) == 1) {
                _swift_bridgeObjectRelease(pvVar2);
                (**(code **)(lVar19 + 8))(lVar31,UVar7.unknown);
                lVar16 = 1;
              }
              else {
                lVar16 = lVar31;
                FUN_100ae14f0();
                _swift_bridgeObjectRelease(pvVar2);
                (**(code **)(lVar19 + 8))(lVar31,UVar7.unknown);
              }
              ppvVar29 = ppvVar29 + 2;
              bVar4 = SCARRY8((long)UVar28.unknown,lVar16);
              UVar28.unknown = UVar28.unknown + lVar16;
              if (bVar4) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x100adffc8);
                (*pcVar25)();
              }
            }
            objc_stub::setTotalUnitCount_(IVar14);
            UVar15.unknown = (undefined *)0x0;
            self = local_190;
          }
          lVar16 = local_1a0;
          SVar35 = Foundation::URL::get_lastPathComponent(UVar15);
          pcVar18 = pSVar13[1].str;
          if (pcVar18 != (char *)0x0) {
            pcVar22 = (char *)0x0;
            ppvVar29 = &pSVar13[2].bridgeObject;
            do {
              local_160 = SVar35.bridgeObject;
              local_180 = SVar35.str;
              if (pSVar13[1].str <= pcVar22) {
                    /* WARNING: Does not return */
                pcVar25 = (code *)SoftwareBreakpoint(1,0x100adffcc);
                (*pcVar25)();
              }
              pcVar1 = ((String *)(ppvVar29 + -1))->str;
              pvVar2 = *ppvVar29;
              SVar3.bridgeObject = pvVar2;
              SVar3.str = pcVar1;
              if ((local_188 & 1) == 0) {
                _swift_bridgeObjectRetain_n(pvVar2,2);
                UVar28 = UVar7;
                (*pcVar25)(lVar16,param_1);
              }
              else {
                local_120[0] = SVar35;
                _swift_bridgeObjectRetain(pvVar2);
                _swift_bridgeObjectRetain(local_160);
                SVar36.bridgeObject = (void *)0xe100000000000000;
                SVar36.str = (char *)0x2f;
                SVar39.bridgeObject = pSVar27;
                SVar39.str = UVar28.unknown;
                Swift::String::append(SVar36,SVar39);
                UVar9.unknown = local_120[0].bridgeObject;
                _swift_bridgeObjectRetain(local_120[0].bridgeObject);
                SVar37.bridgeObject = pvVar2;
                SVar37.str = pcVar1;
                SVar40.bridgeObject = pSVar27;
                SVar40.str = UVar28.unknown;
                Swift::String::append(SVar37,SVar40);
                _swift_bridgeObjectRelease();
                SVar3 = local_120[0];
                Foundation::URL::deletingLastPathComponent(UVar9);
              }
              lVar16 = local_1a8;
              pvVar41 = SVar3.bridgeObject;
              if (self == 0) {
                _swift_bridgeObjectRelease(pvVar2);
                pNVar21 = local_1b8;
                Foundation::URL::appendingPathComponent(SVar3,UVar28);
                pSVar27 = (String *)(ulong)local_184;
                UVar28.unknown = pNVar21;
                FUN_100ac0ec4(SVar3.str,pvVar41,pNVar21,pSVar27,0x4000,0);
                _swift_bridgeObjectRelease(pvVar41);
                pcVar23 = *(code **)(lVar19 + 8);
                (*pcVar23)(pNVar21,UVar7.unknown);
              }
              else {
                SVar38.bridgeObject = pvVar2;
                SVar38.str = pcVar1;
                Foundation::URL::appendingPathComponent(SVar38,UVar28);
                _swift_bridgeObjectRelease(pvVar2);
                lVar17 = lVar16;
                FUN_100ae123c();
                if (((uint)lVar17 & 0xff) == 1) {
                  lVar16 = 1;
                }
                else {
                  FUN_100ae14f0(lVar16);
                }
                puVar8 = (undefined *)objc_stub::FUN_100c08440((ID)&_OBJC_CLASS___NSProgress,lVar16)
                ;
                IVar14 = objc_stub::FUN_100c108c0((ID)puVar8);
                UVar9.unknown = puVar8;
                objc_stub::FUN_100bfd4e0(self,puVar8,IVar14);
                pNVar21 = local_1b0;
                Foundation::URL::appendingPathComponent(SVar3,UVar9);
                pSVar27 = (String *)(ulong)local_184;
                UVar28.unknown = pNVar21;
                FUN_100ac0ec4(SVar3.str,pvVar41,pNVar21,pSVar27,0x4000,puVar8);
                _swift_bridgeObjectRelease(pvVar41);
                pcVar23 = *(code **)(lVar19 + 8);
                (*pcVar23)(pNVar21,UVar7.unknown);
                (*pcVar23)(local_1a8,UVar7.unknown);
                self = local_190;
              }
              lVar16 = local_1a0;
              pcVar22 = pcVar22 + 1;
              (*pcVar23)(local_1a0,UVar7.unknown);
              SVar35.bridgeObject = local_160;
              SVar35.str = local_180;
              ppvVar29 = ppvVar29 + 2;
            } while (pcVar18 != pcVar22);
          }
          local_160 = SVar35.bridgeObject;
          local_180 = SVar35.str;
          _swift_bridgeObjectRelease(pSVar13);
          _swift_bridgeObjectRelease(local_160);
          _swift_release(lVar30);
        }
      }
      else {
        IVar14 = local_190;
        if (local_190 != 0) {
          pcVar18 = param_1;
          FUN_100ae123c();
          if (((uint)pcVar18 & 0xff) == 1) {
            param_1 = &DAT_00000001;
          }
          else {
            FUN_100ae14f0();
          }
          IVar14 = local_190;
          UVar15.unknown = (undefined *)objc_stub::setTotalUnitCount_(local_190);
          UVar9.unknown = param_1;
        }
        UVar15 = Foundation::URL::deletingLastPathComponent(UVar15);
        SVar34 = Foundation::URL::get_lastPathComponent(UVar15);
        Foundation::URL::appendingPathComponent(SVar34,UVar9);
        FUN_100ac0ec4(SVar34.str,SVar34.bridgeObject,lVar26,local_184,0x4000,IVar14);
        _swift_bridgeObjectRelease(SVar34.bridgeObject);
        _swift_release(lVar30);
        pcVar25 = *(code **)(lVar19 + 8);
        (*pcVar25)(lVar26,UVar7.unknown);
        (*pcVar25)(lVar16,UVar7.unknown);
      }
      goto LAB_100adf5dc;
    }
    Foundation::CocoaError::Code::get_fileWriteFileExists(CVar10);
    puVar8 = &DAT_100ff8438;
    FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    UVar7.unknown = SVar34.str;
    pSVar27 = (String *)(puVar8 + 0x20);
    *pSVar27 = SVar34;
  }
  else {
    _swift_errorRelease();
    CVar5.unknown = unaff_x21;
LAB_100adf4bc:
    Foundation::CocoaError::Code::get_fileReadNoSuchFile(CVar5);
    puVar8 = &DAT_100ff8438;
    FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
    _swift_initStackObject();
    *(undefined8 *)(puVar8 + 0x18) = 2;
    *(undefined8 *)(puVar8 + 0x10) = 1;
    SVar34 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    UVar7.unknown = SVar34.str;
    pSVar27 = (String *)(puVar8 + 0x20);
    *pSVar27 = SVar34;
  }
  SVar34 = Foundation::URL::get_path(UVar7);
  *(undefined **)(puVar8 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar8 + 0x30) = SVar34;
  FUN_100abfbb8(puVar8);
  _swift_setDeallocating(puVar8);
  FUN_1000fb4c4(pSVar27,&DAT_100ff8440,&DAT_100c94328);
  FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958)
  ;
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
            ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
              )CVar11.unknown);
  Foundation::CocoaError::get__nsError(CVar11);
  _swift_willThrow();
  (**(code **)(lVar16 + 8))(lVar17,CVar6.unknown);
LAB_100adf5dc:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ae0010 | FUN_100ae0010 */

void FUN_100ae0010(void)

{
  FUN_100ae1b80();
  return;
}



/* Address: 0x100ae0024 | FUN_100ae0024 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ae0024(undefined8 *param_1,ulong param_2,ulong param_3)

{
  undefined *puVar1;
  Date DVar2;
  URL UVar3;
  NSString *pNVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  ID unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  undefined8 local_88 [4];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar1 = &DAT_100ff8708;
  uVar9 = 0;
  FUN_1000f7830();
  puVar8 = (undefined1 *)
           ((long)&local_a0 - (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0)
           );
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  lVar11 = (long)puVar8 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((param_3 & 1) == 0) {
    if (param_1[2] != 0) {
      lVar10 = *(long *)PTR__NSFilePosixPermissions_100ea7bc0;
      local_98 = DVar2.unknown;
      _swift_bridgeObjectRetain(param_1);
      FUN_1000712c0(lVar10);
      if ((uVar9 & 1) == 0) {
        _swift_bridgeObjectRelease();
        DVar2.unknown = (undefined *)param_1;
      }
      else {
        FUN_10000cbfc(param_1[7] + lVar10 * 0x20,local_88);
        _swift_bridgeObjectRelease(param_1);
        uVar6 = 0;
        FUN_100ae409c(0);
        DVar2.unknown = (undefined *)&local_90;
        _swift_dynamicCast(DVar2.unknown,local_88,PTR___type_metadata_for_Any_100eae0c0 + 8,uVar6,6)
        ;
        if (((ulong)DVar2.unknown & 1) != 0) {
          uVar9 = param_2;
          FUN_100ae03f4(local_90);
          if (unaff_x21 != 0) goto LAB_100ae025c;
          local_a0 = local_90;
          if (param_1[2] == 0) {
LAB_100ae0384:
            (**(code **)(lVar12 + 0x38))(puVar8,1,1,local_98);
          }
          else {
            lVar10 = *(long *)PTR__NSFileModificationDate_100ea7ba8;
            _swift_bridgeObjectRetain(param_1);
            FUN_1000712c0(lVar10);
            if ((uVar9 & 1) == 0) {
              _swift_bridgeObjectRelease(param_1);
              goto LAB_100ae0384;
            }
            FUN_10000cbfc(param_1[7] + lVar10 * 0x20,local_88);
            _swift_bridgeObjectRelease(param_1);
            puVar1 = local_98;
            puVar7 = puVar8;
            _swift_dynamicCast(puVar8,local_88,PTR___type_metadata_for_Any_100eae0c0 + 8,local_98,6)
            ;
            (**(code **)(lVar12 + 0x38))(puVar8,(uint)puVar7 ^ 1,1,puVar1);
            puVar7 = puVar8;
            (**(code **)(lVar12 + 0x30))(puVar8,1,puVar1);
            puVar1 = local_98;
            if ((int)puVar7 != 1) {
              (**(code **)(lVar12 + 0x20))(lVar11,puVar8,local_98);
              FUN_100ae0504(lVar11,param_2);
              (**(code **)(lVar12 + 8))(lVar11,puVar1);
              goto LAB_100ae025c;
            }
          }
          FUN_1000fb4c4(puVar8,&DAT_100ff8708,&DAT_100c94cb8);
          FUN_100ae40e0();
          _swift_allocError(&DAT_100f316a0,puVar8,0,0);
          *puVar8 = 1;
          _swift_willThrow();
          goto LAB_100ae025c;
        }
      }
    }
    FUN_100ae40e0();
    _swift_allocError(&DAT_100f316a0,DVar2.unknown,0,0);
    *DVar2.unknown = 0;
  }
  else {
    FUN_100ab7db0(0);
    FUN_100003a00(&DAT_100ff82a0,FUN_100ab7db0,&TargetProtocolConformanceDescriptor_100c94198);
    UVar3.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    SVar13 = Foundation::URL::get_path(UVar3);
    pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    local_88[0] = 0;
    IVar5 = objc_stub::setAttributes_ofItemAtPath_error_(unaff_x20,UVar3.unknown,pNVar4,local_88);
    if ((int)IVar5 != 0) goto LAB_100ae025c;
    Foundation::__convertNSErrorToError();
  }
  _swift_willThrow();
LAB_100ae025c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ae03f4 | FUN_100ae03f4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae03f4(ID param_1)

{
  int iVar1;
  POSIXError PVar2;
  NSString *pNVar3;
  char *pcVar4;
  ID IVar5;
  POSIXError PVar6;
  long lVar7;
  ID unaff_x20;
  long lVar8;
  String SVar9;
  undefined4 extraout_var;
  
  PVar2 = Foundation::POSIXError::typeMetadataAccessor();
  lVar8 = *(long *)(PVar2.unknown + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  SVar9 = Foundation::URL::get_path((URL)PVar2.unknown);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  _objc_retainAutorelease();
  pcVar4 = (char *)objc_stub::fileSystemRepresentationWithPath_(unaff_x20,pNVar3);
  IVar5 = objc_stub::FUN_100c10ee0(param_1);
  iVar1 = _lchmod(pcVar4,(mode_t)IVar5);
  if (iVar1 != 0) {
    PVar6.unknown._0_4_ = Darwin::get_errno();
    PVar6.unknown._4_4_ = extraout_var;
    SVar9 = Foundation::URL::get_path((URL)PVar6.unknown);
    FUN_100adebd4(&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),PVar6.unknown,
                  SVar9.str,SVar9.bridgeObject);
    Foundation::POSIXError::get__nsError(PVar6);
    _swift_willThrow();
    (**(code **)(lVar8 + 8))
              (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),PVar2.unknown);
  }
  return;
}



/* Address: 0x100ae0504 | FUN_100ae0504 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae0504(void)

{
  int iVar1;
  POSIXError PVar2;
  Date DVar3;
  NSString *pNVar4;
  char *pcVar5;
  undefined4 extraout_var;
  POSIXError PVar6;
  __darwin_suseconds_t _Var7;
  stat *psVar8;
  code *pcVar9;
  long lVar10;
  ID unaff_x20;
  undefined1 *puVar11;
  undefined1 *puVar12;
  long lVar13;
  double dVar14;
  double dVar15;
  String SVar16;
  undefined1 auStack_180 [8];
  long local_178;
  undefined *local_170;
  stat local_150;
  timeval local_a0;
  undefined *local_90;
  __darwin_suseconds_t local_88;
  long local_80;
  undefined4 extraout_var_00;
  
  local_80 = *(long *)PTR____stack_chk_guard_100ea82f0;
  PVar2 = Foundation::POSIXError::typeMetadataAccessor();
  lVar13 = *(long *)(PVar2.unknown + -8);
  puVar11 = auStack_180 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  puVar12 = puVar11 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  SVar16 = Foundation::URL::get_path((URL)DVar3.unknown);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  _objc_retainAutorelease();
  pcVar5 = (char *)objc_stub::fileSystemRepresentationWithPath_(unaff_x20,pNVar4);
  local_150.st_gen = 0;
  local_150.st_lspare = 0;
  local_150.st_blksize = 0;
  local_150.st_flags = 0;
  local_150.st_qspare[1] = 0;
  local_150.st_qspare[0] = 0;
  local_150.st_birthtimespec.tv_nsec = 0;
  local_150.st_birthtimespec.tv_sec = 0;
  local_150.st_blocks = 0;
  local_150.st_size = 0;
  local_150.st_ctimespec.tv_nsec = 0;
  local_150.st_ctimespec.tv_sec = 0;
  local_150.st_mtimespec.tv_nsec = 0;
  local_150.st_mtimespec.tv_sec = 0;
  local_150.st_atimespec.tv_nsec = 0;
  local_150.st_atimespec.tv_sec = 0;
  local_150.st_rdev = 0;
  local_150._28_4_ = 0;
  local_150.st_uid = 0;
  local_150.st_gid = 0;
  local_150.st_ino = 0;
  local_150.st_dev = 0;
  local_150.st_mode = 0;
  local_150.st_nlink = 0;
  psVar8 = &local_150;
  iVar1 = _lstat(pcVar5,psVar8);
  _Var7 = (__darwin_suseconds_t)psVar8;
  if (iVar1 == 0) {
    dVar14 = (double)local_150.st_atimespec.tv_nsec;
    dVar15 = (double)local_150.st_atimespec.tv_sec;
    local_178 = lVar10;
    local_170 = DVar3.unknown;
    if (DAT_100ff8608 != -1) {
      _Var7 = 0xad62b0;
      _swift_once(&DAT_100ff8608);
    }
    DVar3 = Foundation::Date::init(dVar14 * 1e-09 + (dVar15 - DAT_100ff8600));
    Foundation::Date::get_timeIntervalSince1970(DVar3);
    FUN_100ad62c8();
    local_a0.tv_sec = (__darwin_time_t)DVar3.unknown;
    local_a0.tv_usec = _Var7;
    Foundation::Date::get_timeIntervalSince1970(DVar3);
    FUN_100ad62c8();
    local_90 = DVar3.unknown;
    local_88 = _Var7;
    iVar1 = _lutimes(pcVar5,&local_a0);
    if (iVar1 == 0) {
      (**(code **)(local_178 + 8))(puVar12,local_170);
      goto LAB_100ae078c;
    }
    PVar6.unknown._0_4_ = Darwin::get_errno();
    PVar6.unknown._4_4_ = extraout_var_00;
    SVar16 = Foundation::URL::get_path((URL)PVar6.unknown);
    FUN_100adebd4(puVar11,PVar6.unknown,SVar16.str,SVar16.bridgeObject);
    Foundation::POSIXError::get__nsError(PVar6);
    _swift_willThrow();
    (**(code **)(lVar13 + 8))(puVar11,PVar2.unknown);
    pcVar9 = *(code **)(local_178 + 8);
    lVar10 = -0x60;
  }
  else {
    PVar2.unknown._0_4_ = Darwin::get_errno();
    PVar2.unknown._4_4_ = extraout_var;
    SVar16 = Foundation::URL::get_path((URL)PVar2.unknown);
    FUN_100adebd4(puVar11,PVar2.unknown,SVar16.str,SVar16.bridgeObject);
    Foundation::POSIXError::get__nsError(PVar2);
    _swift_willThrow();
    pcVar9 = *(code **)(lVar13 + 8);
    lVar10 = -0x48;
    puVar12 = puVar11;
  }
  (*pcVar9)(puVar12,*(undefined8 *)((long)local_150.st_qspare + lVar10 + -0x40));
LAB_100ae078c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_80) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ae0810 | FUN_100ae0810 */

undefined * FUN_100ae0810(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  size_t sVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae091c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100ff8718;
    FUN_1000f7830(&DAT_100ff8718,&DAT_100c94cc0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  sVar5 = uVar7 * 0x28;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar5 <= puVar4) {
      _memmove(puVar4,puVar1,sVar5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100ae091c | FUN_100ae091c */

undefined * FUN_100ae091c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae0a0c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff8318;
    FUN_1000f7830(&DAT_100ff8318,&DAT_100c94218);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100ae0a0c | FUN_100ae0a0c */

undefined * FUN_100ae0a0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae0b0c);
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
    puVar3 = &DAT_100ff8610;
    FUN_1000f7830(&DAT_100ff8610,&DAT_100c94978);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100ae0b0c | FUN_100ae0b0c */

undefined * FUN_100ae0b0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae0c14);
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
    puVar3 = &DAT_100ff86e0;
    FUN_1000f7830(&DAT_100ff86e0,&DAT_100c94ca0);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
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



/* Address: 0x100ae0c14 | FUN_100ae0c14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae0c14(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar2);
  FUN_1000712c0();
  _swift_bridgeObjectRelease(lVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar2 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100ae0de0();
    }
    FUN_100011080(*(long *)(lVar2 + 0x38) + param_2 * 0x20,param_1);
    FUN_1001f5f1c(param_2,lVar2);
    *unaff_x20 = lVar2;
  }
  return;
}



/* Address: 0x100ae0cd8 | FUN_100ae0cd8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_100ae0cd8(ulong param_1,ulong param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  uVar2 = param_2;
  uVar3 = param_2;
  FUN_1000712c0(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae0da4);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    param_3 = param_3 & 1;
    FUN_100ae0f64(lVar4);
    uVar2 = param_2;
    FUN_1000712c0(param_2);
    if (((uint)uVar3 & 1) != (param_3 & 1)) {
      FUN_100ab7db0(0);
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae0d68);
      (*pcVar1)();
    }
  }
  else if ((param_3 & 1) == 0) {
    FUN_100ae0de0();
    lVar4 = *unaff_x20;
    goto joined_r0x000100ae0db8;
  }
  lVar4 = *unaff_x20;
joined_r0x000100ae0db8:
  if ((uVar3 & 1) != 0) {
    lVar4 = *(long *)(lVar4 + 0x38) + uVar2 * 0x20;
    FUN_100004594(lVar4);
    FUN_100011080(param_1,lVar4);
    return param_1;
  }
  FUN_100202d34();
  return param_2;
}



/* Address: 0x100ae0de0 | FUN_100ae0de0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ae0de0(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100ff8458;
  FUN_1000f7830(&DAT_100ff8458,&DAT_100c94338);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_100ae0ec4;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        uVar8 = *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
        FUN_10000cbfc(*(long *)(original + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) = uVar8;
        FUN_100011080(auStack_80,*(long *)(p_Var4 + 0x38) + uVar7 * 0x20);
        if (uVar5 != 0) break;
LAB_100ae0ec4:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ae0f64);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_100ae0f34;
          uVar5 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_100ae0f34:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x100ae0f64 | FUN_100ae0f64 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100ae0f64(long param_1,bool param_2)

{
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  Hasher into;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __int64 _Var10;
  ulong uVar11;
  __RawDictionaryStorage *p_Var12;
  __RawDictionaryStorage *original;
  undefined8 uVar13;
  long lVar14;
  String SVar15;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  _Var10 = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    _Var10 = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100ff8458;
  FUN_1000f7830(&DAT_100ff8458,&DAT_100c94338);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,_Var10,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100ae1208:
    _swift_release(original);
LAB_100ae1210:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var12 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar6 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae1238);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar14) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100ae1210;
          }
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100ae1208;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar14 << 6;
    uVar13 = *(undefined8 *)(*(long *)(original + 0x30) + uVar5 * 8);
    lVar6 = *(long *)(original + 0x38) + uVar5 * 0x20;
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(lVar6,auStack_80);
    }
    else {
      FUN_100011080(lVar6,auStack_80);
    }
    _Var10 = *(__int64 *)(p_Var3 + 0x28);
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    Swift::Hasher::init(_Var10);
    into.unknown = auStack_c8;
    Swift::String::hash(into,SVar15);
    uVar4 = Swift::Hasher::_finalize(into);
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ae123c);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x40);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x40);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar13;
    FUN_100011080(auStack_80,*(long *)(p_Var3 + 0x38) + uVar5 * 0x20);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar14;
  } while( true );
}



/* Address: 0x100ae123c | FUN_100ae123c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae123c(void)

{
  mode_t mVar1;
  __uint16 _Var2;
  __uint16 _Var3;
  Code CVar4;
  CocoaError CVar5;
  undefined *puVar6;
  URL self;
  URL UVar7;
  undefined7 extraout_var_00;
  NSString *pNVar8;
  char *pcVar9;
  CocoaError CVar10;
  undefined *unaff_x21;
  long lVar11;
  long lVar12;
  String SVar13;
  stat local_150;
  long local_68;
  undefined7 extraout_var;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  CVar4 = Foundation::CocoaError::Code::typeMetadataAccessor();
  CVar10.unknown =
       (undefined *)
       ((long)&local_150 -
       (*(long *)(*(long *)(CVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  CVar5 = Foundation::CocoaError::typeMetadataAccessor();
  lVar12 = *(long *)(CVar5.unknown + -8);
  lVar11 = (long)CVar10.unknown - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  self.unknown = (undefined *)objc_stub::init(puVar6);
  UVar7.unknown._0_1_ = Foundation::URL::get_isFileURL(self);
  UVar7.unknown._1_7_ = extraout_var;
  if (UVar7.unknown._0_1_) {
    UVar7.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar7);
    UVar7.unknown._1_7_ = extraout_var_00;
    if (unaff_x21 == (undefined *)0x0) {
      if (UVar7.unknown._0_1_) {
        SVar13 = Foundation::URL::get_path(UVar7);
        pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
        _objc_retainAutorelease();
        pcVar9 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self.unknown,pNVar8);
        local_150.st_gen = 0;
        local_150.st_lspare = 0;
        local_150.st_blksize = 0;
        local_150.st_flags = 0;
        local_150.st_qspare[1] = 0;
        local_150.st_qspare[0] = 0;
        local_150.st_birthtimespec.tv_nsec = 0;
        local_150.st_birthtimespec.tv_sec = 0;
        local_150.st_blocks = 0;
        local_150.st_size = 0;
        local_150.st_ctimespec.tv_nsec = 0;
        local_150.st_ctimespec.tv_sec = 0;
        local_150.st_mtimespec.tv_nsec = 0;
        local_150.st_mtimespec.tv_sec = 0;
        local_150.st_atimespec.tv_nsec = 0;
        local_150.st_atimespec.tv_sec = 0;
        local_150.st_rdev = 0;
        local_150._28_4_ = 0;
        local_150.st_uid = 0;
        local_150.st_gid = 0;
        local_150.st_ino = 0;
        local_150.st_dev = 0;
        local_150.st_mode = 0;
        local_150.st_nlink = 0;
        _lstat(pcVar9,&local_150);
        mVar1 = local_150.st_mode;
        _Var2 = Darwin::get_S_IFMT();
        _Var3 = Darwin::get_S_IFDIR();
        if (_Var3 != (_Var2 & mVar1)) {
          Darwin::get_S_IFLNK();
        }
        goto LAB_100ae1490;
      }
    }
    else {
      _swift_errorRelease();
      UVar7.unknown = unaff_x21;
    }
  }
  Foundation::CocoaError::Code::get_fileReadNoSuchFile((Code)UVar7.unknown);
  puVar6 = &DAT_100ff8438;
  FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar6 + 0x20) = SVar13;
  SVar13 = Foundation::URL::get_path((URL)SVar13.str);
  *(undefined **)(puVar6 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar6 + 0x30) = SVar13;
  FUN_100abfbb8(puVar6);
  _swift_setDeallocating(puVar6);
  FUN_1000fb4c4((String *)(puVar6 + 0x20),&DAT_100ff8440,&DAT_100c94328);
  FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958)
  ;
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
            ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
              )CVar10.unknown);
  Foundation::CocoaError::get__nsError(CVar10);
  _swift_willThrow();
  (**(code **)(lVar12 + 8))(lVar11,CVar5.unknown);
LAB_100ae1490:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ae14f0 | FUN_100ae14f0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String * FUN_100ae14f0(void)

{
  Code CVar1;
  CocoaError CVar2;
  undefined *puVar3;
  URL UVar4;
  undefined7 extraout_var;
  NSString *pNVar5;
  URL self;
  char *pcVar6;
  Code CVar7;
  CocoaError CVar8;
  code *pcVar9;
  undefined *unaff_x21;
  long lVar10;
  long lVar11;
  String *pSVar12;
  String SVar13;
  long local_1b0;
  undefined *local_1a8;
  stat local_1a0 [2];
  long local_70;
  undefined4 extraout_var_00;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  CVar1 = Foundation::CocoaError::Code::typeMetadataAccessor();
  CVar8.unknown =
       (undefined *)
       ((long)&local_1b0 -
       (*(long *)(*(long *)(CVar1.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  CVar2 = Foundation::CocoaError::typeMetadataAccessor();
  lVar11 = *(long *)(CVar2.unknown + -8);
  lVar10 = (long)CVar8.unknown - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  UVar4.unknown = (undefined *)objc_stub::init(puVar3);
  CVar1.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar4);
  CVar1.unknown._1_7_ = extraout_var;
  if (unaff_x21 == (undefined *)0x0) {
    if (!CVar1.unknown._0_1_) goto LAB_100ae1620;
    local_1b0 = lVar11;
    SVar13 = Foundation::URL::get_path((URL)CVar1.unknown);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar13.bridgeObject);
    self.unknown = UVar4.unknown;
    _objc_retainAutorelease();
    local_1a8 = UVar4.unknown;
    pcVar6 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)self.unknown,pNVar5);
    local_1a0[0].st_gen = 0;
    local_1a0[0].st_lspare = 0;
    local_1a0[0].st_blksize = 0;
    local_1a0[0].st_flags = 0;
    local_1a0[0].st_qspare[1] = 0;
    local_1a0[0].st_qspare[0] = 0;
    local_1a0[0].st_birthtimespec.tv_nsec = 0;
    local_1a0[0].st_birthtimespec.tv_sec = 0;
    local_1a0[0].st_blocks = 0;
    local_1a0[0].st_size = 0;
    local_1a0[0].st_mtimespec.tv_nsec = 0;
    local_1a0[0].st_mtimespec.tv_sec = 0;
    local_1a0[0].st_ctimespec.tv_nsec = 0;
    local_1a0[0].st_ctimespec.tv_sec = 0;
    local_1a0[0].st_rdev = 0;
    local_1a0[0]._28_4_ = 0;
    local_1a0[0].st_uid = 0;
    local_1a0[0].st_gid = 0;
    local_1a0[0].st_atimespec.tv_nsec = 0;
    local_1a0[0].st_atimespec.tv_sec = 0;
    local_1a0[0].st_ino = 0;
    local_1a0[0].st_dev = 0;
    local_1a0[0].st_mode = 0;
    local_1a0[0].st_nlink = 0;
    CVar7.unknown._0_4_ = _lstat(pcVar6,local_1a0);
    CVar7.unknown._4_4_ = extraout_var_00;
    pSVar12 = (String *)local_1a0[0].st_size;
    if (-1 < local_1a0[0].st_size) goto LAB_100ae1714;
    Foundation::CocoaError::Code::get_fileReadTooLarge(CVar7);
    puVar3 = &DAT_100ff8438;
    FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pSVar12 = (String *)(puVar3 + 0x20);
    *pSVar12 = SVar13;
    SVar13 = Foundation::URL::get_path((URL)SVar13.str);
    *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(String *)(puVar3 + 0x30) = SVar13;
    FUN_100abfbb8(puVar3);
    _swift_setDeallocating(puVar3);
    FUN_1000fb4c4(pSVar12,&DAT_100ff8440,&DAT_100c94328);
    FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                  PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                 );
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )CVar8.unknown);
    Foundation::CocoaError::get__nsError(CVar8);
    _swift_willThrow();
    pcVar9 = *(code **)(local_1b0 + 8);
  }
  else {
    _swift_errorRelease();
    CVar1.unknown = unaff_x21;
LAB_100ae1620:
    Foundation::CocoaError::Code::get_fileReadNoSuchFile(CVar1);
    puVar3 = &DAT_100ff8438;
    FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pSVar12 = (String *)(puVar3 + 0x20);
    *pSVar12 = SVar13;
    SVar13 = Foundation::URL::get_path((URL)SVar13.str);
    *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
    *(String *)(puVar3 + 0x30) = SVar13;
    FUN_100abfbb8(puVar3);
    _swift_setDeallocating(puVar3);
    FUN_1000fb4c4(pSVar12,&DAT_100ff8440,&DAT_100c94328);
    FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                  PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                 );
    (extension_Foundation)::Foundation::_BridgedStoredNSError::_init
              ((Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
                )CVar8.unknown);
    Foundation::CocoaError::get__nsError(CVar8);
    _swift_willThrow();
    pcVar9 = *(code **)(lVar11 + 8);
  }
  (*pcVar9)(lVar10,CVar2.unknown);
LAB_100ae1714:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pSVar12;
}



/* Address: 0x100ae1848 | FUN_100ae1848 */

uint FUN_100ae1848(undefined8 param_1,uint param_2,char param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  __uint16 _Var4;
  
  if ((param_2 & 0xff) - 1 < 2) {
    _Var4 = Darwin::get_S_IFMT();
    uVar1 = (uint)((ulong)param_1 >> 0x10) & 0xffff & (_Var4 ^ 0xffffffff);
    uVar2 = 0x1ed;
    if (uVar1 != 0) {
      uVar2 = uVar1;
    }
    uVar3 = 0x1a4;
    if (uVar1 != 0) {
      uVar3 = uVar1;
    }
    if (param_3 != '\x01') {
      uVar2 = uVar3;
    }
  }
  else {
    uVar2 = 0x1ed;
    if (param_3 != '\x01') {
      uVar2 = 0x1a4;
    }
  }
  return uVar2;
}



/* Address: 0x100ae18b8 | FUN_100ae18b8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_100ae18b8(long param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined2 uVar11;
  undefined8 uVar12;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined *local_f0 [3];
  long local_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined *local_68;
  
  uVar1 = *(ushort *)(param_1 + 4);
  uVar4 = *(uint *)(param_1 + 0x28);
  uVar2 = *(undefined2 *)(param_1 + 0xe);
  uVar3 = *(undefined2 *)(param_1 + 0xc);
  FUN_100adc5e0();
  uVar11 = 0x1ed;
  if (((uint)param_1 & 0xff) != 1) {
    uVar11 = 0x1a4;
  }
  puVar9 = &DAT_100ff86f0;
  FUN_1000f7830(&DAT_100ff86f0,&DAT_100c94ca8);
  _swift_initStackObject();
  *(undefined8 *)(puVar9 + 0x18) = 2;
  *(undefined8 *)(puVar9 + 0x10) = 1;
  uVar5 = *(undefined8 *)PTR__NSFilePosixPermissions_100ea7bc0;
  *(undefined8 *)(puVar9 + 0x20) = uVar5;
  *(undefined **)(puVar9 + 0x40) = PTR___type_metadata_for_Swift_UInt16_100eade18;
  *(undefined2 *)(puVar9 + 0x28) = uVar11;
  puVar6 = puVar9;
  FUN_100abfce4();
  _swift_setDeallocating(puVar9);
  FUN_1000fb4c4(puVar9 + 0x20,&DAT_100ff8460,&DAT_100c94340);
  uVar12 = *(undefined8 *)PTR__NSFileModificationDate_100ea7ba8;
  local_68 = puVar6;
  local_b8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  ppuVar7 = &local_d0;
  FUN_10000cbb0(ppuVar7);
  FUN_100ad6214(ppuVar7,uVar2,uVar3);
  uStack_108 = uStack_c8;
  local_110 = local_d0;
  local_f8 = local_b8;
  uStack_100 = uStack_c0;
  if (local_b8 == (undefined *)0x0) {
    FUN_1000fb4c4(&local_110,&DAT_100ff86f8,&DAT_100c94cb0);
    FUN_100ae0c14(local_f0,uVar12);
    FUN_1000fb4c4(local_f0,&DAT_100ff86f8,&DAT_100c94cb0);
  }
  else {
    FUN_100011080(&local_110,local_f0);
    puVar9 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    local_110 = puVar6;
    FUN_100ae0cd8(local_f0,uVar12,puVar9);
    local_68 = local_110;
  }
  uVar8 = (ulong)(uVar1 >> 8);
  FUN_100add01c();
  if (((uint)uVar8 & 0xff) != 4) {
    FUN_100ae1848(uVar4,uVar8,param_1);
    puVar9 = &_OBJC_CLASS___NSNumber;
    _objc_allocWithZone();
    puVar9 = (undefined *)objc_stub::FUN_100c05180((ID)puVar9,(ulong)(uVar4 & 0xffff));
    lVar10 = 0;
    FUN_100ae409c();
    local_f0[0] = puVar9;
    local_d8 = lVar10;
    if (lVar10 == 0) {
      FUN_1000fb4c4(local_f0,&DAT_100ff86f8,&DAT_100c94cb0);
      FUN_100ae0c14(&local_d0,uVar5);
      FUN_1000fb4c4(&local_d0,&DAT_100ff86f8,&DAT_100c94cb0);
    }
    else {
      FUN_100011080(local_f0,&local_d0);
      puVar9 = local_68;
      puVar6 = local_68;
      _swift_isUniquelyReferenced_nonNull_native(local_68);
      local_f0[0] = puVar9;
      FUN_100ae0cd8(&local_d0,uVar5,puVar6);
      local_68 = local_f0[0];
    }
  }
  return local_68;
}



/* Address: 0x100ae1b80 | FUN_100ae1b80 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100ae373c) */
/* WARNING: Removing unreachable block (ram,0x000100ae39f0) */
/* WARNING: Removing unreachable block (ram,0x000100ae1e40) */
/* WARNING: Type propagation algorithm not settling */

void FUN_100ae1b80(undefined *param_1,undefined8 param_2,uint param_3,undefined4 param_4,
                  undefined1 *param_5,undefined8 param_6)

{
  ushort uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  _AnyIteratorBoxBase *p_Var4;
  undefined8 uVar5;
  undefined8 uVar6;
  bool bVar7;
  __uint16 _Var8;
  Code CVar9;
  Encoding EVar10;
  URL UVar11;
  URL UVar12;
  undefined7 extraout_var;
  Encoding EVar13;
  URL UVar14;
  ID IVar15;
  ID IVar16;
  undefined7 extraout_var_00;
  Code CVar17;
  Code CVar18;
  Code CVar19;
  char *pcVar20;
  FILE *pFVar21;
  NSString *pNVar22;
  code **ppcVar23;
  code **ppcVar24;
  undefined1 *puVar25;
  Encoding data;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  DVar26;
  POSIXError PVar27;
  POSIXError PVar28;
  void *pvVar29;
  int iVar30;
  undefined *puVar31;
  long lVar32;
  long lVar33;
  ulong uVar34;
  ulong uVar35;
  undefined *puVar36;
  undefined1 *puVar37;
  ulong uVar38;
  undefined *unaff_x21;
  int iVar39;
  undefined *puVar40;
  undefined *puVar41;
  code *pcVar42;
  _AnyIteratorBoxBase *p_Var43;
  undefined4 uVar44;
  long lVar45;
  code *pcVar46;
  uint uVar47;
  undefined *puVar48;
  undefined *puVar49;
  ulong uVar50;
  long lVar51;
  _AnyIteratorBoxBase *p_Var52;
  _AnyIteratorBoxBase *p_Var53;
  String SVar54;
  String SVar55;
  String SVar56;
  _AnyIteratorBoxBase a_Stack_6b0 [8];
  _AnyIteratorBoxBase a_Stack_6a8 [8];
  _AnyIteratorBoxBase a_Stack_6a0 [8];
  _AnyIteratorBoxBase a_Stack_698 [8];
  undefined1 *local_690;
  undefined1 *local_688;
  code *local_680;
  _AnyIteratorBoxBase *local_678;
  undefined8 local_670;
  ID local_668;
  ID local_660;
  long local_658;
  undefined *local_650;
  undefined *local_648;
  _AnyIteratorBoxBase *local_640;
  _AnyIteratorBoxBase *local_638;
  ulong local_630;
  undefined *local_628;
  long local_620;
  long local_618;
  undefined *puStack_610;
  long local_608;
  long local_600;
  long local_5f8;
  long local_5f0;
  long local_5e8;
  undefined8 local_5e0;
  long local_5d8;
  undefined *local_5d0;
  undefined1 *local_5c8;
  undefined *local_5c0;
  long local_5b8;
  Encoding local_5b0;
  uint local_5a4;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  local_5a0;
  long local_598;
  undefined *local_590;
  undefined *puStack_588;
  undefined8 local_580;
  undefined *local_578;
  undefined8 local_538;
  undefined8 local_530;
  undefined8 local_528;
  undefined1 *local_520;
  undefined4 local_518;
  undefined2 local_514;
  String local_510;
  ulong uStack_500;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 uStack_4e8;
  undefined *local_4e0;
  undefined *puStack_4d8;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  undefined8 local_490;
  undefined8 uStack_488;
  undefined8 uStack_480;
  undefined8 uStack_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  ID local_458;
  undefined8 local_450;
  ID IStack_448;
  undefined8 uStack_440;
  ulong local_438;
  long local_430;
  undefined8 uStack_428;
  _AnyIteratorBoxBase *local_420;
  code *local_410;
  ushort uStack_408;
  undefined4 uStack_406;
  undefined2 uStack_402;
  undefined2 uStack_400;
  undefined2 uStack_3fe;
  undefined4 uStack_3fc;
  uint uStack_3f8;
  undefined4 local_3f4;
  undefined4 uStack_3f0;
  undefined4 uStack_3ec;
  undefined8 uStack_3e8;
  Encoding local_3e0;
  undefined *local_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 local_360;
  ID local_358;
  undefined8 local_350;
  ID IStack_348;
  undefined8 uStack_340;
  ulong local_338;
  long local_330;
  undefined8 uStack_328;
  _AnyIteratorBoxBase *local_320;
  undefined8 local_310;
  _AnyIteratorBoxBase *p_Stack_308;
  ID IStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined4 uStack_268;
  undefined4 uStack_264;
  undefined4 uStack_260;
  undefined8 uStack_25c;
  undefined1 auStack_250 [36];
  char local_22c;
  undefined1 auStack_228 [36];
  char local_204;
  undefined1 auStack_200 [8];
  _AnyIteratorBoxBase *local_1f8;
  char local_1dc;
  undefined4 local_1d8;
  ushort local_1d4;
  ushort local_1d2;
  ushort local_1d0;
  undefined6 uStack_1c6;
  uint local_1c0;
  undefined4 local_1b4;
  undefined8 local_1b0;
  undefined *local_1a8;
  undefined *local_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 local_178;
  code *local_170;
  ushort local_168;
  undefined4 local_166;
  undefined2 local_162;
  undefined4 local_160;
  undefined8 local_15c;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined8 uStack_148;
  undefined *local_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ID local_b8;
  undefined8 local_b0;
  ID local_a8;
  undefined8 uStack_a0;
  ulong local_98;
  long local_90;
  undefined8 local_88;
  _AnyIteratorBoxBase *p_Stack_80;
  long local_78;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  undefined7 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  
  local_5b0.unknown._0_4_ = param_4;
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_5e0 = param_2;
  local_5c8 = param_5;
  local_5a4 = param_3;
  local_580 = param_6;
  puStack_610 = (undefined *)Foundation::POSIXError::typeMetadataAccessor();
  local_618 = *(long *)(puStack_610 + -8);
  lVar32 = (long)&local_690 - (*(long *)(local_618 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_620 = lVar32;
  CVar9 = Foundation::CocoaError::Code::typeMetadataAccessor();
  puVar31 = (undefined *)
            (lVar32 - (*(long *)(*(long *)(CVar9.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_5a0.unknown = puVar31;
  puStack_588 = (undefined *)Foundation::CocoaError::typeMetadataAccessor();
  local_598 = *(long *)(puStack_588 + -8);
  puVar31 = puVar31 + -(*(long *)(local_598 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar48 = &DAT_100ff86d0;
  local_590 = puVar31;
  FUN_1000f7830(&DAT_100ff86d0,&DAT_100c94c98);
  lVar32 = *(long *)(*(long *)(puVar48 + -8) + 0x40);
  local_5d0 = puVar48;
  local_5c0 = puVar31 + -(lVar32 + 0xfU & 0xfffffffffffffff0);
  EVar10 = Encoding::_typeMetadataAccessor();
  lVar33 = *(long *)(EVar10.unknown + -8);
  uVar34 = *(long *)(lVar33 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_600 = (long)(puVar31 + -(lVar32 + 0xfU & 0xfffffffffffffff0)) - uVar34;
  puVar36 = (undefined *)(local_600 - uVar34);
  puVar48 = &DAT_100ff82c0;
  local_608 = (long)puVar36 - uVar34;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  uVar35 = *(long *)(*(long *)(puVar48 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_5f8 = ((long)puVar36 - uVar34) - uVar35;
  local_5d8 = local_5f8 - uVar35;
  local_5b8 = local_5d8 - uVar35;
  lVar32 = local_5b8 - uVar35;
  local_5e8 = lVar32;
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar45 = *(long *)(UVar11.unknown + -8);
  lVar51 = *(long *)(lVar45 + 0x40);
  uVar34 = lVar51 + 0xfU & 0xfffffffffffffff0;
  puVar40 = (undefined *)(lVar32 - uVar34);
  puVar49 = puVar40 + -uVar34;
  puVar41 = puVar49 + -uVar34;
  puVar48 = puVar41 + -uVar34;
  p_Var53 = (_AnyIteratorBoxBase *)(puVar48 + -uVar34);
  puVar31 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  UVar12.unknown = (undefined *)objc_stub::init(puVar31);
  local_578 = param_1;
  bVar7 = Foundation::URL::_checkResourceIsReachable(UVar12);
  lVar32 = local_5e8;
  CVar9.unknown = (undefined *)CONCAT71(extraout_var,bVar7);
  if (unaff_x21 == (undefined *)0x0) {
    local_658 = lVar51;
    local_650 = puVar49;
    local_648 = puVar40;
    local_628 = puVar41;
    local_5f0 = lVar45;
    if (bVar7) {
      pcVar42 = *(code **)(lVar45 + 0x10);
      (*pcVar42)(p_Var53,local_578,UVar11.unknown);
      FUN_100ab8ea0(local_580,lVar32);
      FUN_100ad37bc();
      _swift_allocObject();
      p_Var52 = p_Var53;
      FUN_100ad0300(p_Var53,1,lVar32);
      puVar25 = local_5c8;
      uVar44 = local_5b0.unknown._0_4_;
      local_680 = pcVar42;
      local_678 = p_Var52;
      local_578 = unaff_x21;
      if (local_5c8 != (undefined1 *)0x0) {
        FUN_100ad00d0();
        local_688 = puVar25;
        local_670 = p_Var52;
        Swift::_AnyIteratorBoxBase::_next(p_Var52);
        EVar13.unknown = (undefined *)&local_410;
        FUN_100aca508();
        lVar32 = local_608;
        if ((int)EVar13.unknown == 1) {
          p_Var43 = (_AnyIteratorBoxBase *)0x0;
        }
        else {
          p_Var52 = (_AnyIteratorBoxBase *)0x0;
          do {
            puVar31 = local_3d8;
            data.unknown = local_3e0.unknown;
            IStack_448 = IStack_348;
            local_450 = local_350;
            local_438 = local_338;
            uStack_440 = uStack_340;
            uStack_428 = uStack_328;
            local_430 = local_330;
            local_420 = local_320;
            uStack_488 = uStack_388;
            local_490 = local_390;
            uStack_478 = uStack_378;
            uStack_480 = uStack_380;
            uStack_468 = uStack_368;
            local_470 = local_370;
            local_458 = local_358;
            uStack_460 = local_360;
            uStack_4c8 = uStack_3c8;
            local_4d0 = local_3d0;
            uStack_4b8 = uStack_3b8;
            uStack_4c0 = uStack_3c0;
            uStack_4a8 = uStack_3a8;
            local_4b0 = local_3b0;
            uStack_498 = uStack_398;
            uStack_4a0 = uStack_3a0;
            local_510.bridgeObject._2_4_ = uStack_406;
            local_510.bridgeObject._0_2_ = uStack_408;
            local_510.bridgeObject._6_2_ = uStack_402;
            local_4f8 = CONCAT44(local_3f4,uStack_3f8);
            uStack_500 = CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,uStack_400));
            local_510.str = (char *)local_410;
            SVar54 = local_510;
            local_4f0 = CONCAT44(uStack_3ec,uStack_3f0);
            uStack_4e8 = uStack_3e8;
            uVar5 = uStack_4e8;
            puStack_4d8 = local_3d8;
            local_4e0 = local_3e0.unknown;
            local_510.str._0_4_ = SUB84(local_410,0);
            local_510.str._4_2_ = (ushort)((ulong)local_410 >> 0x20);
            local_510.str._6_2_ = (ushort)((ulong)local_410 >> 0x30);
            uStack_1c6 = (undefined6)(CONCAT44(uStack_3fc,CONCAT22(uStack_3fe,uStack_400)) >> 0x10);
            local_638 = (_AnyIteratorBoxBase *)(ulong)uStack_3f8;
            local_1b4 = uStack_3ec;
            local_660 = local_358;
            local_668 = IStack_348;
            local_630 = local_338;
            local_640 = local_320;
            local_1d8 = local_510.str._0_4_;
            local_1d4 = local_510.str._4_2_;
            local_608 = CONCAT44(local_608._4_4_,(uint)local_510.str._6_2_);
            local_1d2 = local_510.str._6_2_;
            local_1d0 = uStack_408;
            local_1c0 = uStack_3f8;
            uStack_4e8._0_4_ = (undefined4)uStack_3e8;
            local_5e8 = CONCAT44(local_5e8._4_4_,(undefined4)uStack_4e8);
            local_1b0 = uStack_3e8;
            local_1a8 = local_3e0.unknown;
            local_1a0 = local_3d8;
            uStack_190 = uStack_3c8;
            local_198 = local_3d0;
            uStack_180 = uStack_3b8;
            uStack_188 = uStack_3c0;
            uVar1 = local_510.str._4_2_ >> 8;
            uVar47 = (uint)uVar1;
            local_178 = local_3b0;
            local_510 = SVar54;
            uStack_4e8 = uVar5;
            if (uVar1 == 0) {
joined_r0x000100ae2fcc:
              if ((uStack_408 >> 0xb & 1) != 0) goto LAB_100ae2fb0;
LAB_100ae2fd0:
              if (DAT_100ff8630 != -1) {
                _swift_once(&DAT_100ff8630,FUN_100adcca4);
              }
              EVar13 = EVar10;
              FUN_1000cd990(EVar10.unknown,&DAT_101058310);
              pcVar42 = *(code **)(lVar33 + 0x10);
              (*pcVar42)(lVar32,EVar13.unknown,EVar10.unknown);
            }
            else {
              if (uVar1 == 0x13) {
                uVar47 = 2;
                goto joined_r0x000100ae2fcc;
              }
              if (uVar1 == 3) {
                uVar47 = 1;
                goto joined_r0x000100ae2fcc;
              }
              uVar47 = 3;
              if ((uStack_408 >> 0xb & 1) == 0) goto LAB_100ae2fd0;
LAB_100ae2fb0:
              Encoding::_get_utf8(EVar13);
              pcVar42 = *(code **)(lVar33 + 0x10);
            }
            (*pcVar42)(puVar36,lVar32,EVar10.unknown);
            (extension_Foundation)::Swift::String::_init(data);
            pcVar20 = (char *)0x0;
            if (puVar31 != (undefined *)0x0) {
              pcVar20 = data.unknown;
            }
            puVar40 = (undefined *)0xe000000000000000;
            if (puVar31 != (undefined *)0x0) {
              puVar40 = puVar31;
            }
            (**(code **)(lVar33 + 8))(lVar32,EVar10.unknown);
            SVar54.bridgeObject = (void *)0xe100000000000000;
            SVar54.str = (char *)0x2f;
            SVar56.bridgeObject = puVar40;
            SVar56.str = pcVar20;
            bVar7 = Swift::String::hasSuffix(SVar54,SVar56);
            _swift_bridgeObjectRelease(puVar40);
            if (uVar47 - 1 < 2) {
              _Var8 = Darwin::get_S_IFMT();
              uVar47 = (uint)_Var8 & (uint)local_5e8 >> 0x10;
              _Var8 = Darwin::get_S_IFREG();
              if ((uVar47 == _Var8) ||
                 ((_Var8 = Darwin::get_S_IFDIR(), uVar47 != _Var8 &&
                  (_Var8 = Darwin::get_S_IFLNK(), uVar47 == _Var8 || !bVar7)))) goto LAB_100ae30f0;
LAB_100ae31b0:
              FUN_1000fb4c4(&local_510,&DAT_100ff8490,&DAT_100c94450);
              p_Var43 = p_Var52 + 1;
              uVar44 = local_5b0.unknown._0_4_;
              if (SCARRY8((long)p_Var52,1)) {
LAB_100ae3f80:
                    /* WARNING: Does not return */
                pcVar42 = (code *)SoftwareBreakpoint(1,0x100ae3f84);
                (*pcVar42)();
              }
            }
            else {
              if (uVar47 != 0) {
                if (!bVar7) goto LAB_100ae30f0;
                goto LAB_100ae31b0;
              }
              if (bVar7 || ((uint)local_5e8 & 0xfffffff0) == 0x10) goto LAB_100ae31b0;
LAB_100ae30f0:
              if (((uint)local_608 & 0xff) < 0x2d) {
                FUN_100adaf98(auStack_250);
                uVar44 = local_5b0.unknown._0_4_;
                if (local_22c == '\x01') {
                  uVar47 = (uint)local_638;
                  if (local_660 >> 0x3c < 0xf) {
                    uVar47 = (uint)(local_668 >> 0x20);
                  }
                  FUN_1000fb4c4(&local_510,&DAT_100ff8490,&DAT_100c94450);
                  p_Var4 = (_AnyIteratorBoxBase *)(ulong)uVar47;
                }
                else {
                  if (local_630 >> 0x3c < 0xf) goto LAB_100ae323c;
                  FUN_100adaf98(auStack_228);
                  if (local_204 != '\x01') goto LAB_100ae3114;
                  FUN_1000fb4c4(&local_510,&DAT_100ff8490,&DAT_100c94450);
                  p_Var4 = local_638;
                }
              }
              else {
                uVar44 = local_5b0.unknown._0_4_;
                if (local_630 >> 0x3c < 0xf) {
LAB_100ae323c:
                  FUN_1000fb4c4(&local_510,&DAT_100ff8490,&DAT_100c94450);
                  p_Var43 = local_640;
                }
                else {
LAB_100ae3114:
                  FUN_100adaf98(auStack_200);
                  FUN_1000fb4c4(&local_510,&DAT_100ff8490,&DAT_100c94450);
                  p_Var4 = local_638;
                  if ((local_1dc == '\x01') ||
                     (p_Var43 = local_1f8, local_1f8 == (_AnyIteratorBoxBase *)0x0))
                  goto joined_r0x000100ae3234;
                }
                p_Var4 = p_Var43;
                if ((long)p_Var43 < 0) {
                    /* WARNING: Does not return */
                  pcVar42 = (code *)SoftwareBreakpoint(1,0x100ae3f88);
                  (*pcVar42)();
                }
              }
joined_r0x000100ae3234:
              p_Var43 = p_Var52 + (long)p_Var4;
              if (SCARRY8((long)p_Var52,(long)p_Var4)) goto LAB_100ae3f80;
            }
            Swift::_AnyIteratorBoxBase::_next(local_670);
            EVar13.unknown = (undefined *)&local_410;
            FUN_100aca508();
            p_Var52 = p_Var43;
          } while ((int)EVar13.unknown != 1);
        }
        _swift_release(local_670);
        objc_stub::setTotalUnitCount_((ID)local_688,p_Var43);
      }
      p_Var52 = local_678;
      FUN_100ad00d0();
      local_670 = (_AnyIteratorBoxBase *)(CONCAT44(local_670._4_4_,uVar44) & 0xffffffff00000001);
      local_640 = p_Var52;
      while( true ) {
        Swift::_AnyIteratorBoxBase::_next(local_640);
        lVar45 = local_430;
        uVar34 = local_438;
        uVar6 = local_450;
        IVar15 = local_458;
        puVar40 = puStack_4d8;
        puVar31 = local_4e0;
        IStack_348 = IStack_448;
        local_350 = local_450;
        local_338 = local_438;
        uStack_340 = uStack_440;
        uStack_328 = uStack_428;
        local_330 = local_430;
        local_320 = local_420;
        uStack_388 = uStack_488;
        local_390 = local_490;
        uStack_378 = uStack_478;
        uStack_380 = uStack_480;
        uStack_368 = uStack_468;
        local_370 = local_470;
        local_358 = local_458;
        local_360 = uStack_460;
        uStack_3c8 = uStack_4c8;
        local_3d0 = local_4d0;
        uStack_3b8 = uStack_4b8;
        uStack_3c0 = uStack_4c0;
        uStack_3a8 = uStack_4a8;
        local_3b0 = local_4b0;
        uStack_398 = uStack_498;
        uStack_3a0 = uStack_4a0;
        uStack_408 = (ushort)local_510.bridgeObject;
        uVar1 = uStack_408;
        uStack_406 = local_510.bridgeObject._2_4_;
        uStack_402 = local_510.bridgeObject._6_2_;
        local_410 = (code *)local_510.str;
        uStack_3f8 = (uint)local_4f8;
        local_3f4 = (undefined4)((ulong)local_4f8 >> 0x20);
        uStack_400 = (undefined2)uStack_500;
        uStack_3fe = (undefined2)(uStack_500 >> 0x10);
        uStack_3fc = (undefined4)(uStack_500 >> 0x20);
        uStack_3e8 = uStack_4e8;
        uStack_3f0 = (undefined4)local_4f0;
        uStack_3ec = (undefined4)((ulong)local_4f0 >> 0x20);
        local_3d8 = puStack_4d8;
        local_3e0.unknown = local_4e0;
        local_5b0.unknown = local_510.str;
        local_518 = uStack_406;
        local_514 = uStack_402;
        uVar44 = (undefined4)uStack_500;
        p_Var52 = (_AnyIteratorBoxBase *)(uStack_500 & 0xffffffff);
        local_270 = CONCAT44(uStack_3f8,uStack_3fc);
        uStack_268 = local_3f4;
        uStack_25c = uStack_4e8;
        uStack_2c8 = uStack_4a8;
        local_2d0 = local_4b0;
        uStack_2b8 = uStack_498;
        uStack_2c0 = uStack_4a0;
        uStack_2e8 = uStack_4c8;
        local_2f0 = local_4d0;
        uStack_2d8 = uStack_4b8;
        uStack_2e0 = uStack_4c0;
        local_280 = uStack_460;
        uStack_298 = uStack_478;
        local_2a0 = uStack_480;
        uStack_288 = uStack_468;
        local_290 = local_470;
        uStack_2a8 = uStack_488;
        local_2b0 = local_490;
        p_Stack_308 = local_420;
        local_310 = uStack_428;
        uStack_2f8 = uStack_440;
        IStack_300 = IStack_448;
        iVar39 = (int)&local_410;
        uStack_264 = uStack_3f0;
        uStack_260 = uStack_3ec;
        FUN_100aca508();
        uVar5 = local_580;
        lVar32 = local_5b8;
        if (iVar39 == 1) break;
        local_170 = (code *)local_5b0.unknown;
        local_5e8 = CONCAT44(local_5e8._4_4_,(uint)uVar1);
        local_168 = uVar1;
        local_166 = local_518;
        local_162 = local_514;
        uStack_154 = uStack_268;
        local_15c = local_270;
        uStack_148 = uStack_25c;
        uStack_150 = uStack_264;
        uStack_14c = uStack_260;
        local_5b0.unknown = puVar31;
        local_140 = puVar31;
        local_138 = puVar40;
        uStack_108 = uStack_2c8;
        local_110 = local_2d0;
        uStack_f8 = uStack_2b8;
        uStack_100 = uStack_2c0;
        uStack_128 = uStack_2e8;
        local_130 = local_2f0;
        uStack_118 = uStack_2d8;
        uStack_120 = uStack_2e0;
        local_c0 = local_280;
        uStack_d8 = uStack_298;
        local_e0 = local_2a0;
        uStack_c8 = uStack_288;
        uStack_d0 = local_290;
        uStack_e8 = uStack_2a8;
        local_f0 = local_2b0;
        local_b8 = IVar15;
        local_b0 = uVar6;
        uStack_a0 = uStack_2f8;
        local_a8 = IStack_300;
        local_630 = uVar34;
        local_98 = uVar34;
        local_608 = lVar45;
        local_90 = lVar45;
        p_Stack_80 = p_Stack_308;
        local_88 = local_310;
        local_638 = p_Var52;
        local_160 = uVar44;
        (**(code **)(lVar33 + 0x38))(local_5b8,1,1,EVar10.unknown);
        EVar13.unknown = local_5c0;
        iVar39 = *(int *)(local_5d0 + 0x30);
        FUN_100ab8ea0(uVar5,local_5c0);
        FUN_100ab8ea0(lVar32,EVar13.unknown + iVar39);
        pcVar42 = *(code **)(lVar33 + 0x30);
        puVar31 = EVar13.unknown;
        (*pcVar42)(EVar13.unknown,1,EVar10.unknown);
        lVar45 = local_5d8;
        local_668 = IVar15;
        if ((int)puVar31 == 1) {
          FUN_1000fb4c4(lVar32,&DAT_100ff82c0,&DAT_100c94430);
          puVar31 = EVar13.unknown + iVar39;
          (*pcVar42)(puVar31,1,EVar10.unknown);
          if ((int)puVar31 != 1) {
LAB_100ae22fc:
            FUN_1000fb4c4(EVar13.unknown,&DAT_100ff86d0,&DAT_100c94c98);
            goto LAB_100ae2318;
          }
          FUN_1000fb4c4(EVar13.unknown,&DAT_100ff82c0,&DAT_100c94430);
LAB_100ae2418:
          lVar32 = local_600;
          if (((uint)local_5e8 >> 0xb & 1) == 0) {
            if (DAT_100ff8630 != -1) {
              _swift_once(&DAT_100ff8630,FUN_100adcca4);
            }
            EVar13 = EVar10;
            FUN_1000cd990(EVar10.unknown,&DAT_101058310);
            pcVar42 = *(code **)(lVar33 + 0x10);
            (*pcVar42)(lVar32,EVar13.unknown,EVar10.unknown);
          }
          else {
            Encoding::_get_utf8(EVar13);
            pcVar42 = *(code **)(lVar33 + 0x10);
          }
          (*pcVar42)(puVar36,lVar32,EVar10.unknown);
        }
        else {
          FUN_100ab8ea0(EVar13.unknown,local_5d8);
          puVar31 = EVar13.unknown + iVar39;
          (*pcVar42)(puVar31,1,EVar10.unknown);
          if ((int)puVar31 == 1) {
            FUN_1000fb4c4(local_5b8,&DAT_100ff82c0,&DAT_100c94430);
            (**(code **)(lVar33 + 8))(lVar45,EVar10.unknown);
            goto LAB_100ae22fc;
          }
          (**(code **)(lVar33 + 0x20))(puVar36,EVar13.unknown + iVar39,EVar10.unknown);
          puVar31 = &DAT_100ff86d8;
          FUN_100003a00(&DAT_100ff86d8,PTR__typeMetadataAccessor_100ea7840,
                        PTR__Foundation__Encoding_>Swift__Equatable_100ea7850);
          bVar7 = Swift::Equatable::___infix(local_5d8,puVar36,EVar10.unknown,puVar31);
          pcVar46 = *(code **)(lVar33 + 8);
          (*pcVar46)(puVar36,EVar10.unknown);
          FUN_1000fb4c4(local_5b8,&DAT_100ff82c0,&DAT_100c94430);
          (*pcVar46)(local_5d8,EVar10.unknown);
          EVar13.unknown = local_5c0;
          FUN_1000fb4c4(local_5c0,&DAT_100ff82c0,&DAT_100c94430);
          if (bVar7) goto LAB_100ae2418;
LAB_100ae2318:
          lVar32 = local_5f8;
          FUN_100ab8ea0(local_580,local_5f8);
          lVar45 = lVar32;
          (*pcVar42)(lVar32,1,EVar10.unknown);
          if ((int)lVar45 == 1) {
                    /* WARNING: Does not return */
            pcVar42 = (code *)SoftwareBreakpoint(1,0x100ae3f94);
            (*pcVar42)();
          }
          (**(code **)(lVar33 + 0x10))(puVar36,lVar32,EVar10.unknown);
        }
        EVar13.unknown = local_5b0.unknown;
        UVar12.unknown = puVar36;
        (extension_Foundation)::Swift::String::_init(local_5b0);
        pcVar20 = (char *)0x0;
        if (puVar40 != (undefined *)0x0) {
          pcVar20 = EVar13.unknown;
        }
        UVar14.unknown = (undefined *)0xe000000000000000;
        if (puVar40 != (undefined *)0x0) {
          UVar14.unknown = puVar40;
        }
        (**(code **)(lVar33 + 8))(lVar32,EVar10.unknown);
        SVar55.bridgeObject = UVar14.unknown;
        SVar55.str = pcVar20;
        Foundation::URL::appendingPathComponent(SVar55,UVar12);
        _swift_bridgeObjectRelease();
        SVar54 = Foundation::URL::get_path(UVar14);
        puVar31 = local_650;
        UVar12.unknown = SVar54.bridgeObject;
        Foundation::URL::_init(SVar54.str._0_1_);
        _swift_bridgeObjectRelease();
        puVar40 = local_628;
        Foundation::URL::get_standardized(UVar12);
        pcVar42 = *(code **)(local_5f0 + 8);
        UVar12.unknown = puVar31;
        (*pcVar42)(puVar31,UVar11.unknown);
        local_510 = Foundation::URL::get_path(UVar12);
        pvVar29 = local_510.bridgeObject;
        pcVar20 = local_510.str;
        local_528 = 0x2f2f;
        local_520 = &SUB_e200000000000000;
        local_538 = 0x2f;
        local_530 = 0xe100000000000000;
        FUN_100abff2c();
        *(char **)(p_Var53 + -0x10) = pcVar20;
        *(char **)(p_Var53 + -8) = pcVar20;
        *(char **)(p_Var53 + -0x18) = pcVar20;
        *(undefined **)(p_Var53 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
        SVar54 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                           (&local_528,&local_538,0,0,0,1,
                            PTR___type_metadata_for_Swift_String_100eac208,
                            PTR___type_metadata_for_Swift_String_100eac208);
        UVar14.unknown = SVar54.bridgeObject;
        _swift_bridgeObjectRelease(pvVar29);
        Foundation::URL::_init();
        _swift_bridgeObjectRelease();
        UVar12.unknown = local_648;
        UVar14 = Foundation::URL::get_standardized(UVar14);
        SVar54 = Foundation::URL::get_absoluteString(UVar14);
        (*pcVar42)(UVar12.unknown,UVar11.unknown);
        SVar56 = Foundation::URL::get_absoluteString(UVar12);
        bVar7 = Swift::String::hasPrefix(SVar56,SVar54);
        _swift_bridgeObjectRelease(SVar54.bridgeObject);
        _swift_bridgeObjectRelease(SVar56.bridgeObject);
        (*pcVar42)(puVar31,UVar11.unknown);
        CVar9.unknown = puVar40;
        (*pcVar42)(puVar40,UVar11.unknown);
        DVar26.unknown = local_5a0.unknown;
        puVar25 = local_5c8;
        if (!bVar7) {
          Foundation::CocoaError::Code::get_fileReadInvalidFileName(CVar9);
          puVar31 = &DAT_100ff8438;
          FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
          _swift_allocObject();
          *(undefined8 *)(puVar31 + 0x18) = 2;
          *(undefined8 *)(puVar31 + 0x10) = 1;
          SVar54 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar31 + 0x20) = SVar54;
          SVar54 = Foundation::URL::get_path((URL)SVar54.str);
          *(undefined **)(puVar31 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(String *)(puVar31 + 0x30) = SVar54;
          FUN_100abfbb8(puVar31);
          _swift_setDeallocating(puVar31);
          FUN_1000fb4c4((String *)(puVar31 + 0x20),&DAT_100ff8440,&DAT_100c94328);
          _swift_deallocClassInstance(puVar31,0x20,7);
          FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                        PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                       );
          puVar36 = puStack_588;
          puVar31 = local_590;
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
          Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
          _swift_willThrow();
          _swift_release(local_678);
          FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
LAB_100ae33e4:
          _swift_release(local_640);
          (**(code **)(local_598 + 8))(puVar31,puVar36);
LAB_100ae3408:
          (*pcVar42)(puVar48,UVar11.unknown);
          goto LAB_100ae1f64;
        }
        local_5b0.unknown = pcVar42;
        if (local_5c8 == (undefined1 *)0x0) {
          puVar31 = &_OBJC_CLASS___NSFileManager;
          _objc_allocWithZone();
          puVar41 = (undefined *)objc_stub::init((ID)puVar31);
          UVar12.unknown = puVar41;
          FUN_100adc5e0();
          puVar31 = local_578;
          lVar45 = local_5f0;
          lVar32 = local_658;
          if (((ulong)UVar12.unknown & 0xff) == 0) {
            CVar18.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar12);
            DVar26.unknown = local_5a0.unknown;
            CVar18.unknown._1_7_ = extraout_var_02;
            if (puVar31 == (undefined *)0x0) {
              if (CVar18.unknown._0_1_) {
                Foundation::CocoaError::Code::get_fileWriteFileExists(CVar18);
                puVar31 = &DAT_100ff8438;
                FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
                _swift_allocObject();
                *(undefined8 *)(puVar31 + 0x18) = 2;
                *(undefined8 *)(puVar31 + 0x10) = 1;
                SVar54 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                *(String *)(puVar31 + 0x20) = SVar54;
                SVar54 = Foundation::URL::get_path((URL)SVar54.str);
                *(undefined **)(puVar31 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
                *(String *)(puVar31 + 0x30) = SVar54;
                FUN_100abfbb8(puVar31);
                _swift_setDeallocating(puVar31);
                FUN_1000fb4c4((String *)(puVar31 + 0x20),&DAT_100ff8440,&DAT_100c94328);
                _swift_deallocClassInstance(puVar31,0x20,7);
                FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                              PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                             );
                puVar36 = puStack_588;
                puVar31 = local_590;
                (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
                Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
                _swift_willThrow();
                _swift_release(local_678);
                FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
                goto LAB_100ae33e4;
              }
            }
            else {
              _swift_errorRelease(puVar31);
              puVar31 = (undefined *)0x0;
            }
            UVar12.unknown = puVar48;
            FUN_100adecf8();
            if (puVar31 != (undefined *)0x0) {
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              (*pcVar42)(puVar48,UVar11.unknown);
              goto LAB_100ae1f64;
            }
            SVar54 = Foundation::URL::get_path(UVar12);
            pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar54.bridgeObject);
            puVar40 = puVar41;
            _objc_retainAutorelease();
            pcVar20 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)puVar40,pNVar22);
            pFVar21 = _fopen(pcVar20,"wb+");
            if (pFVar21 == (FILE *)0x0) {
              PVar28.unknown._0_4_ = Darwin::get_errno();
              PVar28.unknown._4_4_ = extraout_var_05;
              SVar54 = Foundation::URL::get_path((URL)PVar28.unknown);
              lVar32 = local_620;
              FUN_100adebd4(local_620,PVar28.unknown,SVar54.str,SVar54.bridgeObject);
              Foundation::POSIXError::get__nsError(PVar28);
              _swift_willThrow();
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              _swift_release(local_640);
              (**(code **)(local_618 + 8))(lVar32,puStack_610);
              goto LAB_100ae3408;
            }
            ppcVar23 = &local_170;
            FUN_100abe4ec(ppcVar23,0x4000,local_5a4 & 1,0,local_678,pFVar21);
            iVar39 = (int)ppcVar23;
            local_578 = puVar31;
            _fclose(pFVar21);
          }
          else {
            if (((uint)UVar12.unknown & 0xff) == 1) {
              (*local_680)(puVar40,puVar48,UVar11.unknown);
              uVar34 = (ulong)*(byte *)(lVar45 + 0x50);
              uVar35 = uVar34 + 0x18 & (uVar34 ^ 0xffffffffffffffff);
              p_Var52 = (_AnyIteratorBoxBase *)&DAT_100f31c68;
              _swift_allocObject(&DAT_100f31c68,uVar35 + lVar32,uVar34 | 7);
              *(undefined **)(p_Var52 + 0x10) = puVar41;
              (**(code **)(lVar45 + 0x20))(p_Var52 + uVar35,puVar40,UVar11.unknown);
              puVar31 = local_578;
              ppcVar23 = &local_170;
              FUN_100abec90(ppcVar23,0x4000,local_5a4 & 1,0,FUN_100ae3fb0,p_Var52);
              iVar39 = (int)ppcVar23;
              local_578 = puVar31;
              if (puVar31 != (undefined *)0x0) {
                _swift_release(local_640);
                _swift_release(local_678);
                FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
LAB_100ae393c:
                (*(code *)local_5b0.unknown)(puVar48,UVar11.unknown);
                goto LAB_100ae3948;
              }
            }
            else {
              CVar19.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar12);
              DVar26.unknown = local_5a0.unknown;
              CVar19.unknown._1_7_ = extraout_var_03;
              if (puVar31 == (undefined *)0x0) {
                if (CVar19.unknown._0_1_) {
                  Foundation::CocoaError::Code::get_fileWriteFileExists(CVar19);
                  puVar31 = &DAT_100ff8438;
                  FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
                  _swift_allocObject();
                  *(undefined8 *)(puVar31 + 0x18) = 2;
                  *(undefined8 *)(puVar31 + 0x10) = 1;
                  SVar54 = (extension_Foundation)::Swift::String::
                           __unconditionallyBridgeFromObjectiveC();
                  *(String *)(puVar31 + 0x20) = SVar54;
                  SVar54 = Foundation::URL::get_path((URL)SVar54.str);
                  *(undefined **)(puVar31 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
                  *(String *)(puVar31 + 0x30) = SVar54;
                  FUN_100abfbb8(puVar31);
                  _swift_setDeallocating(puVar31);
                  FUN_1000fb4c4((String *)(puVar31 + 0x20),&DAT_100ff8440,&DAT_100c94328);
                  _swift_deallocClassInstance(puVar31,0x20,7);
                  FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                                PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                               );
                  puVar36 = puStack_588;
                  puVar31 = local_590;
                  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
                  Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
                  _swift_willThrow();
                  _swift_release(local_678);
                  FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
                  goto LAB_100ae3e18;
                }
              }
              else {
                _swift_errorRelease(puVar31);
                puVar31 = (undefined *)0x0;
              }
              (*local_680)(puVar40,puVar48,UVar11.unknown);
              lVar45 = local_5f0;
              uVar35 = (ulong)*(byte *)(local_5f0 + 0x50);
              uVar38 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
              uVar34 = uVar38 + lVar32;
              uVar50 = uVar34 & 0xfffffffffffffff8;
              p_Var52 = (_AnyIteratorBoxBase *)&DAT_100f31c40;
              _swift_allocObject(&DAT_100f31c40,uVar50 + 0x10,uVar35 | 7);
              (**(code **)(lVar45 + 0x20))(p_Var52 + uVar38,puVar40,UVar11.unknown);
              p_Var52[uVar34] = SUB81(local_670,0);
              *(undefined **)(p_Var52 + uVar50 + 8) = puVar41;
              ppcVar23 = &local_170;
              FUN_100abec90(ppcVar23,0x4000,local_5a4 & 1,0,FUN_100ae3f98,p_Var52);
              iVar39 = (int)ppcVar23;
              local_578 = puVar31;
              if (puVar31 != (undefined *)0x0) {
                _swift_release(local_640);
                _swift_release(local_678);
                FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
                goto LAB_100ae393c;
              }
            }
            _swift_release(p_Var52);
          }
          ppcVar23 = &local_170;
          FUN_100ae18b8();
          ppcVar24 = ppcVar23;
          FUN_100adc5e0();
          puVar31 = local_578;
          if (((uint)ppcVar24 & 0xff) < 2) {
            FUN_100ab7db0(0);
            FUN_100003a00(&DAT_100ff82a0,FUN_100ab7db0,
                          &TargetProtocolConformanceDescriptor_100c94198);
            UVar12.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
            SVar54 = Foundation::URL::get_path(UVar12);
            pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar54.bridgeObject);
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_510.bridgeObject;
            local_510 = (String)(auVar3 << 0x40);
            IVar15 = objc_stub::setAttributes_ofItemAtPath_error_
                               ((ID)puVar41,UVar12.unknown,pNVar22,&local_510);
            if ((int)IVar15 == 0) {
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_bridgeObjectRelease(ppcVar23);
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              EVar10.unknown = local_5b0.unknown;
              goto LAB_100ae1f60;
            }
            _swift_bridgeObjectRelease(ppcVar23);
          }
          else {
            FUN_100ae0024(ppcVar23,puVar48,0);
            local_578 = puVar31;
            if (puVar31 != (undefined *)0x0) {
              _swift_bridgeObjectRelease(ppcVar23);
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
LAB_100ae3854:
              (*(code *)local_5b0.unknown)(puVar48,UVar11.unknown);
              goto LAB_100ae1f64;
            }
            _swift_bridgeObjectRelease(ppcVar23);
          }
        }
        else {
          puVar37 = local_5c8;
          FUN_100adc5e0();
          lVar32 = local_658;
          if (((uint)puVar37 & 0xff) == 1) {
            puVar37 = &DAT_00000001;
          }
          else {
            FUN_100adc7dc();
            if ((long)puVar37 < 0) {
                    /* WARNING: Does not return */
              pcVar42 = (code *)SoftwareBreakpoint(1,0x100ae3f8c);
              (*pcVar42)();
            }
          }
          IVar15 = objc_stub::FUN_100c08440((ID)&_OBJC_CLASS___NSProgress,puVar37);
          IVar16 = objc_stub::FUN_100c108c0(IVar15);
          objc_stub::FUN_100bfd4e0((ID)puVar25,IVar15,IVar16);
          puVar31 = &_OBJC_CLASS___NSFileManager;
          _objc_allocWithZone();
          local_660 = IVar15;
          puVar37 = (undefined1 *)objc_stub::init((ID)puVar31);
          UVar12.unknown = puVar37;
          FUN_100adc5e0();
          puVar40 = local_578;
          puVar31 = local_628;
          if (((ulong)UVar12.unknown & 0xff) == 0) {
            CVar9.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar12);
            DVar26.unknown = local_5a0.unknown;
            CVar9.unknown._1_7_ = extraout_var_00;
            if (puVar40 == (undefined *)0x0) {
              if (CVar9.unknown._0_1_) {
                Foundation::CocoaError::Code::get_fileWriteFileExists(CVar9);
                puVar31 = &DAT_100ff8438;
                FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
                _swift_allocObject();
                *(undefined8 *)(puVar31 + 0x18) = 2;
                *(undefined8 *)(puVar31 + 0x10) = 1;
                SVar54 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                *(String *)(puVar31 + 0x20) = SVar54;
                SVar54 = Foundation::URL::get_path((URL)SVar54.str);
                *(undefined **)(puVar31 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
                *(String *)(puVar31 + 0x30) = SVar54;
                FUN_100abfbb8(puVar31);
                _swift_setDeallocating(puVar31);
                FUN_1000fb4c4((String *)(puVar31 + 0x20),&DAT_100ff8440,&DAT_100c94328);
                _swift_deallocClassInstance(puVar31,0x20,7);
                FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                              PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                             );
                puVar36 = puStack_588;
                puVar31 = local_590;
                (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
                Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
                _swift_willThrow();
                _swift_release(local_678);
                FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
LAB_100ae3e18:
                _swift_release(local_640);
                (**(code **)(local_598 + 8))(puVar31,puVar36);
                EVar10.unknown = local_5b0.unknown;
                goto LAB_100ae1f60;
              }
            }
            else {
              _swift_errorRelease(puVar40);
              puVar40 = (undefined *)0x0;
            }
            UVar12.unknown = puVar48;
            FUN_100adecf8();
            if (puVar40 != (undefined *)0x0) {
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              (*(code *)local_5b0.unknown)(puVar48,UVar11.unknown);
              goto LAB_100ae1f64;
            }
            SVar54 = Foundation::URL::get_path(UVar12);
            pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar54.bridgeObject);
            puVar25 = puVar37;
            _objc_retainAutorelease();
            pcVar20 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)puVar25,pNVar22);
            pFVar21 = _fopen(pcVar20,"wb+");
            if (pFVar21 == (FILE *)0x0) {
              PVar27.unknown._0_4_ = Darwin::get_errno();
              PVar27.unknown._4_4_ = extraout_var_04;
              SVar54 = Foundation::URL::get_path((URL)PVar27.unknown);
              lVar32 = local_620;
              FUN_100adebd4(local_620,PVar27.unknown,SVar54.str,SVar54.bridgeObject);
              Foundation::POSIXError::get__nsError(PVar27);
              _swift_willThrow();
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              _swift_release(local_640);
              (**(code **)(local_618 + 8))(lVar32,puStack_610);
              EVar10.unknown = local_5b0.unknown;
              goto LAB_100ae1f60;
            }
            ppcVar23 = &local_170;
            FUN_100abe4ec(ppcVar23,0x4000,local_5a4 & 1,IVar15,local_678,pFVar21);
            iVar39 = (int)ppcVar23;
            local_578 = puVar40;
            _fclose(pFVar21);
          }
          else if (((uint)UVar12.unknown & 0xff) == 1) {
            (*local_680)(local_628,puVar48,UVar11.unknown);
            lVar45 = local_5f0;
            uVar34 = (ulong)*(byte *)(local_5f0 + 0x50);
            uVar35 = uVar34 + 0x18 & (uVar34 ^ 0xffffffffffffffff);
            p_Var52 = (_AnyIteratorBoxBase *)&DAT_100f31cb8;
            _swift_allocObject(&DAT_100f31cb8,uVar35 + lVar32,uVar34 | 7);
            *(undefined1 **)(p_Var52 + 0x10) = puVar37;
            (**(code **)(lVar45 + 0x20))(p_Var52 + uVar35,puVar31,UVar11.unknown);
            puVar31 = local_578;
            ppcVar23 = &local_170;
            FUN_100abec90(ppcVar23,0x4000,local_5a4 & 1,IVar15,FUN_100ae4134,p_Var52);
            iVar39 = (int)ppcVar23;
            local_578 = puVar31;
            if (puVar31 != (undefined *)0x0) {
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              goto LAB_100ae393c;
            }
            _swift_release(p_Var52);
          }
          else {
            CVar17.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar12);
            DVar26.unknown = local_5a0.unknown;
            CVar17.unknown._1_7_ = extraout_var_01;
            local_688 = puVar37;
            if (puVar40 == (undefined *)0x0) {
              if (CVar17.unknown._0_1_) {
                Foundation::CocoaError::Code::get_fileWriteFileExists(CVar17);
                puVar31 = &DAT_100ff8438;
                FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
                _swift_allocObject();
                *(undefined8 *)(puVar31 + 0x18) = 2;
                *(undefined8 *)(puVar31 + 0x10) = 1;
                SVar54 = (extension_Foundation)::Swift::String::
                         __unconditionallyBridgeFromObjectiveC();
                *(String *)(puVar31 + 0x20) = SVar54;
                SVar54 = Foundation::URL::get_path((URL)SVar54.str);
                *(undefined **)(puVar31 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
                *(String *)(puVar31 + 0x30) = SVar54;
                FUN_100abfbb8(puVar31);
                _swift_setDeallocating(puVar31);
                FUN_1000fb4c4((String *)(puVar31 + 0x20),&DAT_100ff8440,&DAT_100c94328);
                _swift_deallocClassInstance(puVar31,0x20,7);
                FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                              PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                             );
                puVar36 = puStack_588;
                puVar31 = local_590;
                (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
                Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
                _swift_willThrow();
                _swift_release(local_678);
                FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
                goto LAB_100ae3e18;
              }
            }
            else {
              _swift_errorRelease(puVar40);
              puVar40 = (undefined *)0x0;
            }
            puVar31 = local_628;
            local_690 = puVar25;
            local_578 = puVar40;
            (*local_680)(local_628,puVar48,UVar11.unknown);
            lVar45 = local_5f0;
            uVar35 = (ulong)*(byte *)(local_5f0 + 0x50);
            uVar38 = uVar35 + 0x10 & (uVar35 ^ 0xffffffffffffffff);
            uVar34 = uVar38 + lVar32;
            uVar50 = uVar34 & 0xfffffffffffffff8;
            p_Var52 = (_AnyIteratorBoxBase *)&DAT_100f31c90;
            _swift_allocObject(&DAT_100f31c90,uVar50 + 0x10,uVar35 | 7);
            (**(code **)(lVar45 + 0x20))(p_Var52 + uVar38,puVar31,UVar11.unknown);
            puVar31 = local_578;
            puVar37 = local_688;
            p_Var52[uVar34] = SUB81(local_670,0);
            *(undefined1 **)(p_Var52 + uVar50 + 8) = local_688;
            ppcVar23 = &local_170;
            FUN_100abec90(ppcVar23,0x4000,local_5a4 & 1,IVar15,FUN_100ae4120,p_Var52);
            iVar39 = (int)ppcVar23;
            local_578 = puVar31;
            if (puVar31 != (undefined *)0x0) {
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              goto LAB_100ae393c;
            }
            _swift_release(p_Var52);
          }
          ppcVar23 = &local_170;
          FUN_100ae18b8();
          ppcVar24 = ppcVar23;
          FUN_100adc5e0();
          puVar31 = local_578;
          if (((uint)ppcVar24 & 0xff) < 2) {
            FUN_100ab7db0(0);
            FUN_100003a00(&DAT_100ff82a0,FUN_100ab7db0,
                          &TargetProtocolConformanceDescriptor_100c94198);
            UVar12.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
            SVar54 = Foundation::URL::get_path(UVar12);
            pNVar22 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar54.bridgeObject);
            auVar2._8_8_ = 0;
            auVar2._0_8_ = local_510.bridgeObject;
            local_510 = (String)(auVar2 << 0x40);
            IVar15 = objc_stub::setAttributes_ofItemAtPath_error_
                               ((ID)puVar37,UVar12.unknown,pNVar22,&local_510);
            if ((int)IVar15 == 0) {
              Foundation::__convertNSErrorToError();
              _swift_willThrow(0);
              _swift_bridgeObjectRelease(ppcVar23);
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              EVar10.unknown = local_5b0.unknown;
              goto LAB_100ae1f60;
            }
            _swift_bridgeObjectRelease(ppcVar23);
          }
          else {
            FUN_100ae0024(ppcVar23,puVar48,0);
            local_578 = puVar31;
            if (puVar31 != (undefined *)0x0) {
              _swift_bridgeObjectRelease(ppcVar23);
              _swift_release(local_640);
              _swift_release(local_678);
              FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
              goto LAB_100ae3854;
            }
            _swift_bridgeObjectRelease(ppcVar23);
          }
        }
        EVar13.unknown = local_5b0.unknown;
        puVar25 = (undefined1 *)0x0;
        if ((local_5a4 & 1) == 0) {
          iVar30 = (int)local_638;
          if (((uint)local_5e8 >> 3 & 1) == 0) {
LAB_100ae2034:
            if (iVar39 == iVar30) goto LAB_100ae203c;
          }
          else {
            if (local_630 >> 0x3c < 0xf) {
              iVar30 = (int)((ulong)local_608 >> 0x20);
              goto LAB_100ae2034;
            }
            if (local_668 >> 0x3c < 0xf) {
              iVar30 = (int)((ulong)uVar6 >> 0x20);
              goto LAB_100ae2034;
            }
            if (iVar39 == 0) goto LAB_100ae203c;
          }
          FUN_100ab8c74();
          _swift_allocError(&DAT_100f31130,puVar25,0,0);
          *puVar25 = 4;
          _swift_willThrow();
          _swift_release(local_678);
          FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
          _swift_release(local_640);
          (*(code *)EVar13.unknown)(puVar48,UVar11.unknown);
          goto LAB_100ae1f64;
        }
LAB_100ae203c:
        FUN_1000fb4c4(&local_410,&DAT_100ff8490,&DAT_100c94450);
        (*(code *)EVar13.unknown)(puVar48,UVar11.unknown);
      }
      _swift_release(local_640);
      p_Var52 = local_678;
LAB_100ae3948:
      _swift_release(p_Var52);
      goto LAB_100ae1f64;
    }
  }
  else {
    _swift_errorRelease();
    CVar9.unknown = unaff_x21;
  }
  DVar26.unknown = local_5a0.unknown;
  Foundation::CocoaError::Code::get_fileReadNoSuchFile(CVar9);
  puVar48 = &DAT_100ff8438;
  FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
  _swift_allocObject();
  *(undefined8 *)(puVar48 + 0x18) = 2;
  *(undefined8 *)(puVar48 + 0x10) = 1;
  SVar54 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar48 + 0x20) = SVar54;
  SVar54 = Foundation::URL::get_path((URL)SVar54.str);
  *(undefined **)(puVar48 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(String *)(puVar48 + 0x30) = SVar54;
  FUN_100abfbb8(puVar48);
  _swift_setDeallocating(puVar48);
  FUN_1000fb4c4((String *)(puVar48 + 0x20),&DAT_100ff8440,&DAT_100c94328);
  _swift_deallocClassInstance(puVar48,0x20,7);
  FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958)
  ;
  UVar11.unknown = puStack_588;
  puVar48 = local_590;
  (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar26);
  Foundation::CocoaError::get__nsError((CocoaError)DVar26.unknown);
  _swift_willThrow();
  EVar10.unknown = *(code **)(local_598 + 8);
LAB_100ae1f60:
  (*(code *)EVar10.unknown)(puVar48,UVar11.unknown);
LAB_100ae1f64:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ae3f94 | thunk_FUN_100ae3fc4 */

void thunk_FUN_100ae3fc4(void)

{
  FUN_100ae3fc4();
  return;
}



/* Address: 0x100ae3f98 | FUN_100ae3f98 */

void FUN_100ae3f98(void)

{
  FUN_100abf9a0();
  return;
}



/* Address: 0x100ae3fac | thunk_FUN_100ae4030 */

void thunk_FUN_100ae4030(void)

{
  FUN_100ae4030();
  return;
}



/* Address: 0x100ae3fb0 | FUN_100ae3fb0 */

void FUN_100ae3fb0(void)

{
  FUN_100abfe74();
  return;
}



/* Address: 0x100ae3fc4 | FUN_100ae3fc4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae3fc4(void)

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



/* Address: 0x100ae4030 | FUN_100ae4030 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100ae4030(void)

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



/* Address: 0x100ae409c | FUN_100ae409c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100ae409c(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8700 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSNumber;
  _swift_getObjCClassMetadata();
  DAT_100ff8700 = puVar1;
  return;
}



/* Address: 0x100ae40e0 | FUN_100ae40e0 */

void FUN_100ae40e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8710 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94a8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94a8c,&DAT_100f316a0);
  DAT_100ff8710 = pTVar1;
  return;
}



/* Address: 0x100ae4120 | FUN_100ae4120 */

void FUN_100ae4120(void)

{
  FUN_100ae3f98();
  return;
}



/* Address: 0x100ae4134 | FUN_100ae4134 */

void FUN_100ae4134(void)

{
  FUN_100ae3fb0();
  return;
}



/* Address: 0x100ae4148 | thunk_FUN_100ae3fc4 */

void thunk_FUN_100ae3fc4(void)

{
  thunk_FUN_100ae3fc4();
  return;
}



/* Address: 0x100ae414c | thunk_FUN_100ae4030 */

void thunk_FUN_100ae4030(void)

{
  thunk_FUN_100ae4030();
  return;
}



/* Address: 0x100ae4150 | FUN_100ae4150 */

void FUN_100ae4150(void)

{
  FUN_100ae1b80();
  return;
}



/* Address: 0x100ae4170 | FUN_100ae4170 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100ae4170(undefined8 param_1,undefined8 param_2,undefined8 param_3,URL param_4)

{
  bool bVar1;
  URL UVar2;
  undefined *self;
  URL UVar3;
  NSURL *pNVar4;
  undefined8 uVar5;
  ID self_00;
  ulong uVar6;
  code *pcVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar10 = *(long *)(UVar2.unknown + -8);
  uVar6 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = (long)(auStack_80 + -uVar6) - uVar6;
  lVar8 = lVar9 - uVar6;
  bVar1 = Foundation::URL::get_isFileURL(UVar2);
  if (bVar1) {
    self = &_OBJC_CLASS___NSFileManager;
    _objc_allocWithZone();
    UVar3.unknown = (undefined *)objc_stub::init(self);
    pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
    local_70 = 0;
    param_4.unknown = (undefined *)0x63;
    UVar3.unknown =
         (undefined *)
         objc_stub::URLForDirectory_inDomain_appropriateForURL_create_error_
                   ((ID)UVar3.unknown,99,1,pNVar4,1,&local_70);
    if (UVar3.unknown != (undefined *)0x0) {
      Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar3);
      pcVar7 = *(code **)(lVar10 + 0x20);
      (*pcVar7)(lVar8,lVar9,UVar2.unknown);
      (*pcVar7)(param_1,lVar8,UVar2.unknown);
      goto LAB_100ae438c;
    }
    uVar5 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar5);
  }
  _NSTemporaryDirectory();
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  self_00 = objc_stub::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
  objc_stub::FUN_100c030e0(self_00);
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::URL::appendingPathComponent(SVar11,param_4);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  (**(code **)(lVar10 + 8))(auStack_80 + -uVar6,UVar2.unknown);
LAB_100ae438c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ae43c8 | FUN_100ae43c8 */

void FUN_100ae43c8(undefined8 param_1)

{
  FUN_100ae43e4();
  DAT_101058328 = param_1;
  return;
}



/* Address: 0x100ae43e4 | FUN_100ae43e4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100ae43e4(void)

{
  undefined1 *puVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  URL UVar7;
  undefined8 uVar8;
  NSURL *pNVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar10;
  long lVar11;
  char *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar4 = &DAT_100ff87b8;
  local_98 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (lVar17 - extraout_x12_02) - extraout_x12_03;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100ae492c();
  puVar4 = &DAT_100ff87c0;
  local_b8 = puVar5;
  FUN_1000037f0(&DAT_100ff87c0,&DAT_100c94d10);
  local_80 = *(long *)(lVar11 + 0x48);
  pcVar12 = (char *)((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  local_90 = &_OBJC_CLASS___NSBundle;
  local_70 = puVar4;
  IVar6 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  local_78 = *(code **)(lVar18 + 0x38);
  (*local_78)(lVar10,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  puVar4 = local_70 + (long)pcVar12;
  FUN_100ae4bc4(lVar10,puVar4);
  uVar8 = 0;
  FUN_100ae4ba4(0);
  _swift_getObjCClassFromMetadata();
  IVar6 = objc_stub::bundleForClass_((ID)local_90,uVar8);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  lVar11 = local_80;
  local_b0 = pcVar12;
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  pcVar13 = local_78;
  (*local_78)(puVar4 + lVar11,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  IVar6 = objc_stub::mainBundle((ID)local_90);
  UVar7.unknown = (undefined *)objc_stub::bundleURL(IVar6);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  (*pcVar13)(puVar4 + lVar11 * 2,0,1,UVar3.unknown);
  local_68 = local_b8;
  FUN_100ae4c14(local_70);
  local_70 = local_68;
  local_90 = *(undefined **)(local_68 + 0x10);
  if (local_90 != (undefined *)0x0) {
    uVar19 = 0;
    puVar4 = local_68 + (long)local_b0;
    local_b0 = "PasteboardAccess";
    local_a8 = lVar17;
    local_a0 = UVar3.unknown;
    do {
      lVar11 = local_88;
      if (*(ulong *)(local_70 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100ae48d4);
        (*pcVar13)();
      }
      FUN_100ae4d38(puVar4,local_88);
      FUN_100ae4bc4(lVar11,lVar17);
      FUN_100ae4d38(lVar17,lVar15);
      pcVar13 = *(code **)(lVar18 + 0x30);
      lVar11 = lVar15;
      UVar7.unknown = UVar3.unknown;
      (*pcVar13)(lVar15,1);
      bVar2 = (int)lVar11 != 1;
      if (bVar2) {
        SVar20.bridgeObject = (void *)((ulong)local_b0 | 0x8000000000000000);
        SVar20.str = (char *)0xd00000000000002b;
        Foundation::URL::appendingPathComponent(SVar20,UVar7);
        (**(code **)(lVar18 + 8))(lVar15,UVar3.unknown);
      }
      else {
        FUN_100ae4d88(lVar15);
      }
      (*local_78)(lVar16,!bVar2,1,UVar3.unknown);
      FUN_100ae4d38(lVar16,lVar14);
      lVar11 = lVar14;
      (*pcVar13)(lVar14,1,UVar3.unknown);
      puVar1 = local_98;
      if ((int)lVar11 == 1) {
        FUN_100ae4d88(lVar16);
        FUN_100ae4d88(lVar17);
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_98,lVar14,UVar3.unknown);
        UVar3.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar3);
        IVar6 = objc_stub::initWithURL_((ID)UVar3.unknown,pNVar9);
        UVar3.unknown = local_a0;
        lVar17 = local_a8;
        (**(code **)(lVar18 + 8))(puVar1,local_a0);
        FUN_100ae4d88(lVar16);
        FUN_100ae4d88(lVar17);
        if (IVar6 != 0) {
          _swift_bridgeObjectRelease(local_70);
          return IVar6;
        }
      }
      uVar19 = uVar19 + 1;
      puVar4 = puVar4 + local_80;
    } while (local_90 != (undefined *)uVar19);
  }
  *(undefined4 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd000000000000040,0x8000000100dbb5c0,
             0xdbb5a0);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100ae492c);
  (*pcVar13)();
}



/* Address: 0x100ae492c | FUN_100ae492c */

undefined * FUN_100ae492c(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  local_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100ae4dd0(0,lVar7,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar6 + 0x48);
    local_88 = *(code **)(lVar6 + 0x10);
    puVar4 = local_68;
    do {
      (*local_88)(lVar5,param_1,UVar3.unknown);
      puVar2 = local_70;
      (**(code **)(lVar6 + 0x20))(local_70,lVar5,UVar3.unknown);
      _swift_dynamicCast(lVar5 - extraout_x8_00,puVar2,UVar3.unknown,local_78,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100ae4dd0(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_100ae4bc4(lVar5 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar8 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Address: 0x100ae4b0c | FUN_100ae4b0c */

void FUN_100ae4b0c(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0xd000000000000014,0x8000000100dbb510);
  return;
}



/* Address: 0x100ae4b58 | FUN_100ae4b58 */

void FUN_100ae4b58(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0xd000000000000010,0x8000000100dbb530);
  return;
}



/* Address: 0x100ae4ba4 | FUN_100ae4ba4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ae4ba4(void)

{
  return ZEXT816(0x100ff8760);
}



/* Address: 0x100ae4bc4 | FUN_100ae4bc4 */

undefined8 FUN_100ae4bc4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ae4c14 | FUN_100ae4c14 */

void FUN_100ae4c14(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae4d2c);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_100ae4df4();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae4d30);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae4d34);
      (*pcVar1)();
    }
    puVar3 = &DAT_100ff87b8;
    FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ae4d38);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x100ae4d38 | FUN_100ae4d38 */

undefined8 FUN_100ae4d38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ae4d88 | FUN_100ae4d88 */

undefined8 FUN_100ae4d88(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ae4dd0 | FUN_100ae4dd0 */

void FUN_100ae4dd0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100ae4df4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100ae4df4 | FUN_100ae4df4 */

undefined *
FUN_100ae4df4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ae4f8c);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100ff87c0;
    FUN_1000037f0(&DAT_100ff87c0,&DAT_100c94d10);
    puVar6 = &DAT_100ff87b8;
    FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ae4f84);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ae4f88);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100ff87b8;
  FUN_1000037f0(&DAT_100ff87b8,&DAT_100c954e0);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar5;
}



/* Address: 0x100ae4f8c | FUN_100ae4f8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae50bc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_100ae4f8c(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  undefined *puVar3;
  ID IVar4;
  ulong *self;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  ObservedObject<undefined> OVar10;
  undefined *puVar11;
  undefined1 local_78 [24];
  
  puVar3 = &DAT_100f31d58;
  _swift_allocObject(&DAT_100f31d58,0x11,7);
  puVar11 = puVar3 + 0x10;
  *puVar11 = 2;
  IVar4 = 0;
  FUN_1002177a4();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = (ulong *)objc_stub::init(IVar4);
  puVar5 = &DAT_100f31d80;
  _swift_allocObject(&DAT_100f31d80,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10,self);
  puVar6 = &DAT_100f31da8;
  _swift_allocObject(&DAT_100f31da8,0x20,7);
  *(undefined **)(puVar6 + 0x10) = puVar3;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  lVar7 = 0;
  FUN_100af2584();
  lVar8 = lVar7;
  _swift_allocObject();
  puVar9 = &DAT_100c94d20;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100ff87d0,&DAT_100c94d50);
  _swift_allocObject();
  _swift_retain(puVar3);
  _swift_retain(puVar5);
  FUN_1000da6e0();
  *(undefined **)(lVar8 + 0x10) = puVar9;
  local_78[0] = 0;
  Combine::Published::init
            (lVar8 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::_doNotAskAgain,puVar9,
             PTR___type_metadata_for_Swift_Bool_100eac570);
  puVar1 = (undefined8 *)
           (lVar8 + _TtC22PasteSystemPermissions25PasteToOtherAppsViewModel::completion);
  *puVar1 = thunk_FUN_100ae5d50;
  puVar1[1] = puVar6;
  _swift_release(puVar5);
  puVar5 = &DAT_100ff87d8;
  FUN_100003a00(&DAT_100ff87d8,FUN_100af2584,&TargetProtocolConformanceDescriptor_100c95c7c);
  _swift_retain(lVar8);
  OVar10 = SwiftUI::ObservedObject::init(puVar5,lVar7,puVar5);
  IVar4 = 0;
  FUN_10000ec2c(0,&DAT_100ff87e0,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  FUN_10021d72c();
  FUN_1000037f0(&DAT_100ff87e8,&DAT_100c94d58);
  _objc_allocWithZone();
  _swift_retain(lVar7);
  FUN_100ae5684(OVar10.unknown,lVar7);
  objc_stub::setContentView_(IVar4,OVar10.unknown);
  objc_stub::setWindow_((ID)self,IVar4);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self) + 0xd8))();
  _swift_release(lVar7);
  _swift_release(lVar8);
  _swift_beginAccess(puVar11,local_78,0,0);
  uVar2 = *puVar11;
  _swift_release(puVar3);
  return uVar2;
}



/* Address: 0x100ae5214 | FUN_100ae5214 */

void FUN_100ae5214(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae5224 | FUN_100ae5224 */

void FUN_100ae5224(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100ae5248 | FUN_100ae5248 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100ae5394 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1 FUN_100ae5248(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  ID IVar3;
  ulong *self;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ID IVar8;
  ObservedObject<undefined> OVar9;
  NSHostingView *pNVar10;
  undefined **ppuVar11;
  undefined *local_70;
  undefined8 uStack_68;
  undefined1 *local_60;
  ID IStack_58;
  
  ppuVar11 = &local_70;
  puVar2 = &DAT_100f31d58;
  _swift_allocObject(&DAT_100f31d58,0x11,7);
  puVar2[0x10] = 1;
  IVar3 = 0;
  FUN_1002177a4();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  self = (ulong *)objc_stub::init(IVar3);
  puVar4 = &DAT_100f31d80;
  _swift_allocObject(&DAT_100f31d80,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,self);
  puVar5 = &DAT_100f31dd0;
  _swift_allocObject(&DAT_100f31dd0,0x20,7);
  *(undefined **)(puVar5 + 0x10) = puVar2;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  uVar6 = 0;
  FUN_100aec044();
  _swift_allocObject();
  _swift_retain(puVar2);
  uVar7 = 1;
  FUN_100aec53c(1,FUN_100ae5d50,puVar5);
  _swift_release(puVar5);
  FUN_10000ec2c(0,&DAT_100ff87e0,&PTR__OBJC_CLASS___NSWindow_100f8d6c8);
  IVar3 = 1;
  FUN_10021d6dc(1,3);
  IVar8 = objc_stub::contentView(IVar3);
  if (IVar8 != 0) {
    puVar4 = &DAT_100ff87f0;
    FUN_100003a00(&DAT_100ff87f0,FUN_100aec044,&TargetProtocolConformanceDescriptor_100c95300);
    _swift_retain(uVar7);
    OVar9 = SwiftUI::ObservedObject::init(puVar4,uVar6,puVar4);
    pNVar10 = (NSHostingView *)&DAT_100ff87f8;
    FUN_1000037f0(&DAT_100ff87f8,&DAT_100c94d60);
    _objc_allocWithZone();
    local_70 = OVar9.unknown;
    uStack_68 = uVar6;
    SwiftUI::NSHostingView::_init(pNVar10);
    local_60 = (undefined1 *)ppuVar11;
    IStack_58 = IVar8;
    FUN_1001fa09c();
    _swift_bridgeObjectRelease(ppuVar11);
  }
  objc_stub::setWindow_((ID)self,IVar3);
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *self) + 0xd8))();
  _swift_release(uVar7);
  _swift_beginAccess(puVar2 + 0x10,&local_70,0,0);
  uVar1 = puVar2[0x10];
  _swift_release(puVar2);
  return uVar1;
}



/* Address: 0x100ae5488 | FUN_100ae5488 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ae5488(undefined1 param_1,long param_2,long param_3)

{
  ID self;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,1,0);
  *(undefined1 *)(param_2 + 0x10) = param_1;
  self = param_3 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  objc_stub::close(self);
  return 0;
}



/* Address: 0x100ae54ec | FUN_100ae54ec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ae54ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined8 *local_68;
  
  uVar1 = 0;
  local_68 = param_1;
  FUN_10000ec2c(0,&DAT_100ff8928,&PTR__OBJC_CLASS___NSView_100f8d628);
  ppuStack_70 = &PTR_PTR_100ec00e8;
  local_90[0] = param_2;
  local_78 = uVar1;
  FUN_1001f9774();
  uVar1 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  puVar2 = &DAT_100ff87f8;
  FUN_1000037f0(&DAT_100ff87f8,&DAT_100c94d60);
  ppuVar3 = local_90;
  FUN_1001f97b4(uVar1,uVar6,uVar7,uVar8,ppuVar3,puVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_90);
  local_90[0] = param_1;
  FUN_1001f9e3c(0x4081000000000000,0x4085400000000000,puVar2,&PTR_PTR_100ec00e8);
  puVar4 = &DAT_100ff8930;
  FUN_1000037f0(&DAT_100ff8930,&DAT_100c94dd0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 4;
  *(undefined8 *)(puVar4 + 0x10) = 2;
  puVar5 = &DAT_100ff8938;
  FUN_1000037f0(&DAT_100ff8938,&DAT_100c94e90);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  *(undefined **)(puVar4 + 0x60) = puVar5;
  *(undefined ***)(puVar4 + 0x68) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar4 + 0x48) = puVar2;
  puVar5 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar1 = *(undefined8 *)(puVar4 + 0x10);
  puVar2 = &DAT_100ff8940;
  FUN_1000037f0(&DAT_100ff8940,&DAT_100c94de0);
  _swift_arrayDestroy(puVar4 + 0x20,uVar1,puVar2);
  return puVar5;
}



/* Address: 0x100ae5684 | FUN_100ae5684 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100ae5684(undefined8 param_1,undefined8 param_2)

{
  NSHostingView *pNVar1;
  undefined8 *puVar2;
  ID IVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  ID local_60;
  
  puVar2 = &local_70;
  _swift_getObjectType();
  pNVar1 = (NSHostingView *)&DAT_100ff8948;
  FUN_1000037f0(&DAT_100ff8948,&DAT_100c94de8);
  _objc_allocWithZone();
  local_70 = param_1;
  uStack_68 = param_2;
  _swift_retain(param_2);
  SwiftUI::NSHostingView::_init(pNVar1);
  *(undefined8 **)(unaff_x20 + DAT_100ff8898) = puVar2;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  uVar4 = *(undefined8 *)(IVar3 + DAT_100ff8898);
  local_60 = IVar3;
  FUN_1001fa09c(uVar4,FUN_100ae5e64,&local_70);
  _swift_bridgeObjectRelease(uVar4);
  FUN_100ae58d8();
  _swift_release(param_2);
  return IVar3;
}



/* Address: 0x100ae5794 | FUN_100ae5794 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100ae5794(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 *local_78 [3];
  undefined8 *local_60;
  undefined **ppuStack_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  ppuStack_58 = &PTR_PTR_100ec00e8;
  local_78[0] = param_1;
  local_60 = puVar1;
  FUN_1001f9774();
  uVar6 = *param_1;
  uVar7 = param_1[1];
  uVar8 = param_1[2];
  uVar9 = param_1[3];
  puVar2 = &DAT_100ff8948;
  FUN_1000037f0(&DAT_100ff8948,&DAT_100c94de8);
  ppuVar3 = local_78;
  FUN_1001f97b4(uVar6,uVar7,uVar8,uVar9,ppuVar3,puVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_78);
  puVar2 = &DAT_100ff8930;
  FUN_1000037f0(&DAT_100ff8930,&DAT_100c94dd0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar4 = &DAT_100ff8938;
  FUN_1000037f0(&DAT_100ff8938,&DAT_100c94e90);
  *(undefined **)(puVar2 + 0x38) = puVar4;
  *(undefined ***)(puVar2 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar2 + 0x20) = ppuVar3;
  puVar5 = puVar2;
  FUN_1001f8d60(puVar2);
  _swift_setDeallocating(puVar2);
  uVar6 = *(undefined8 *)(puVar2 + 0x10);
  puVar4 = &DAT_100ff8940;
  FUN_1000037f0(&DAT_100ff8940,&DAT_100c94de0);
  _swift_arrayDestroy(puVar2 + 0x20,uVar6,puVar4);
  return puVar5;
}



/* Address: 0x100ae58d8 | FUN_100ae58d8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_100ae58d8(void)

{
  bool bVar1;
  ID IVar2;
  ID IVar3;
  _StringGuts _Var4;
  undefined8 *puVar5;
  ID unaff_x20;
  String SVar6;
  String SVar7;
  
  IVar2 = objc_stub::effectiveAppearance(unaff_x20);
  objc_stub::name(IVar2);
  SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  _Var4.unknown = SVar6.bridgeObject;
  SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar6 == SVar7) {
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
LAB_100ae599c:
    IVar2 = *(ID *)(unaff_x20 + DAT_100ff8898);
    puVar5 = (undefined8 *)PTR__NSAppearanceNameVibrantDark_100ea8fc8;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar6.str,_Var4,(_StringComparisonResult)(__int8)SVar7.str);
    _swift_bridgeObjectRelease(_Var4.unknown);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    if (bVar1) goto LAB_100ae599c;
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    _Var4.unknown = SVar6.bridgeObject;
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    if (SVar6 == SVar7) {
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
    }
    else {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar6.str,_Var4,(_StringComparisonResult)(__int8)SVar7.str);
      _swift_bridgeObjectRelease(_Var4.unknown);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      if (!bVar1) {
        IVar2 = *(ID *)(unaff_x20 + DAT_100ff8898);
        IVar3 = objc_stub::effectiveAppearance(unaff_x20);
        goto LAB_100ae59c8;
      }
    }
    IVar2 = *(ID *)(unaff_x20 + DAT_100ff8898);
    puVar5 = (undefined8 *)PTR__NSAppearanceNameVibrantLight_100ea8fd0;
  }
  IVar3 = objc_stub::appearanceNamed_((ID)&_OBJC_CLASS___NSAppearance,*puVar5);
LAB_100ae59c8:
  objc_stub::setAppearance_(IVar2,IVar3);
  return 0;
}



/* Address: 0x100ae5aa4 | FUN_100ae5aa4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100ae5aa4(ulong *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_1;
  uVar8 = *(ulong *)PTR__swift_isaMask_100eae3b0;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/AccessibilityAccessPresenter.swift",0x39,1,0x46,UVar4.unknown
               ,puVar3);
  }
  uVar6 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  FUN_100ae5de0(uVar6,*(undefined8 *)((uVar8 & uVar7) + 0x58));
  _swift_release(pMVar2);
  return uVar6;
}



/* Address: 0x100ae5b78 | FUN_100ae5b78 */

void FUN_100ae5b78(void)

{
  _swift_getObjectType();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"viewDidChangeEffectiveAppearance");
  FUN_100ae58d8();
  return;
}



/* Address: 0x100ae5bb0 | FUN_100ae5bb0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ae5bb0(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/AccessibilityAccessPresenter.swift",0x39,1,0x4a,UVar4.unknown
               ,puVar3);
  }
  FUN_100ae5b78(param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x100ae5c70 | FUN_100ae5c70 */

undefined8 FUN_100ae5c70(ulong *param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar7 = *param_1;
  uVar8 = *(ulong *)PTR__swift_isaMask_100eae3b0;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar3 = &DAT_100ff8920;
  FUN_100003a00(&DAT_100ff8920,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteSystemPermissions/AccessibilityAccessPresenter.swift",0x39,1,0x3a,UVar4.unknown
               ,puVar3);
  }
  uVar6 = *(undefined8 *)((uVar8 & uVar7) + 0x50);
  FUN_100ae5e38(uVar6,*(undefined8 *)((uVar8 & uVar7) + 0x58));
  _swift_release(pMVar2);
  return uVar6;
}



/* Address: 0x100ae5d38 | FUN_100ae5d38 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100ae5d38(void)

{
  return 0;
}



/* Address: 0x100ae5d48 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  FUN_1001965a8();
  return;
}



/* Address: 0x100ae5d4c | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  FUN_100220288();
  return;
}



/* Address: 0x100ae5d50 | FUN_100ae5d50 */

void FUN_100ae5d50(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ae5488(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ae5d68 | FUN_100ae5d68 */

void FUN_100ae5d68(void)

{
  long unaff_x20;
  
  FUN_100ae54ec(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100ae5d70 | FUN_100ae5d70 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100ae5d70(void)

{
  return ZEXT816(0x100ff8840);
}



/* Address: 0x100ae5d90 | FUN_100ae5d90 */

void FUN_100ae5d90(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  _swift_initClassMetadata2(param_1,0,1,&local_18,param_1 + 0x60);
  return;
}


