/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10021a5c0 | FUN_10021a5c0 */

void FUN_10021a5c0(void)

{
  AnalysisTypes AVar1;
  ImageAnalyzer *pIVar2;
  AnalysisTypes AVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  CGImagePropertyOrientation orientation;
  long *plVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  AVar1.unknown = *(undefined **)(unaff_x22 + 0x38);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
  pIVar2 = VisionKit::ImageAnalyzer::typeMetadataAccessor();
  _swift_allocObject(pIVar2,*(undefined4 *)(pIVar2 + 0x30),*(undefined2 *)(pIVar2 + 0x34));
  pIVar2 = VisionKit::ImageAnalyzer::init(pIVar2);
  *(ImageAnalyzer **)(unaff_x22 + 0x70) = pIVar2;
  AVar3.unknown = &DAT_100fb71e0;
  FUN_1000037f0(&DAT_100fb71e0,&DAT_100c36990);
  _swift_allocObject();
  *(undefined8 *)(AVar3.unknown + 0x18) = 2;
  *(undefined8 *)(AVar3.unknown + 0x10) = 1;
  VisionKit::ImageAnalyzer::AnalysisTypes::get_text(AVar3);
  *(undefined8 *)(unaff_x22 + 0x10) = AVar3.unknown;
  puVar4 = &DAT_100fb71e8;
  FUN_100003a00(&DAT_100fb71e8,PTR_typeMetadataAccessor_100eabc08,
                PTR_VisionKit__VisionKit__ImageAnalyzer__AnalysisTypes_>Swift__SetAlgebra_100eabc18)
  ;
  puVar5 = &DAT_100fb71f0;
  FUN_1000037f0(&DAT_100fb71f0,&DAT_100c36998);
  puVar6 = puVar5;
  FUN_10021ad30();
  Swift::SetAlgebra::_init
            (AVar1.unknown,(undefined8 *)(unaff_x22 + 0x10),puVar5,puVar6,uVar8,puVar4);
  orientation.unknown = (undefined *)VisionKit::ImageAnalyzer::Configuration::init(AVar1);
  FUN_10021a8a8();
  plVar7 = (long *)(ulong)*(uint *)(PTR__analyze_100eabc38 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_10021a72c;
  VisionKit::ImageAnalyzer::_analyze
            (pIVar2,*(NSImage **)(unaff_x22 + 0x18),orientation,
             (Configuration)*(undefined **)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x10021a72c | FUN_10021a72c */

void FUN_10021a72c(undefined8 param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x78));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar4 + 0x80) = param_1;
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_10021a79c;
  }
  else {
    _swift_errorRelease();
    uVar2 = *(undefined8 *)(lVar4 + 0x60);
    uVar3 = *(undefined8 *)(lVar4 + 0x68);
    pcVar1 = FUN_10021a828;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x10021a79c | FUN_10021a79c */

void FUN_10021a79c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  VisionKit::ImageAnalysisOverlayView::_set_analysis
            (*(ImageAnalysisOverlayView **)(unaff_x22 + 0x20));
  _swift_release(uVar5);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010021a824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10021a828 | FUN_10021a828 */

void FUN_10021a828(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x58));
  uVar5 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar1 = *(long *)(unaff_x22 + 0x48);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x40);
  VisionKit::ImageAnalysisOverlayView::_set_analysis
            (*(ImageAnalysisOverlayView **)(unaff_x22 + 0x20));
  _swift_release(uVar5);
  (**(code **)(lVar1 + 8))(uVar3,uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010021a8a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10021a8a8 | FUN_10021a8a8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined4 FUN_10021a8a8(void)

{
  undefined *puVar1;
  long lVar2;
  Data DVar3;
  NSDictionary *pNVar4;
  undefined4 *puVar5;
  undefined8 extraout_x1;
  undefined8 uVar6;
  ulong uVar7;
  ID unaff_x20;
  long lVar8;
  undefined4 local_74;
  long local_70 [4];
  
  DVar3.unknown = (undefined *)objc_stub::TIFFRepresentation(unaff_x20);
  if (DVar3.unknown == (undefined *)0x0) {
    return 1;
  }
  uVar6 = extraout_x1;
  DVar3 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar3);
  pNVar4 = (NSDictionary *)Foundation::Data::_bridgeToObjectiveC(DVar3);
  _CGImageSourceCreateWithData(pNVar4,0);
  if (pNVar4 == (NSDictionary *)0x0) {
    FUN_10003bf2c(DVar3.unknown,uVar6);
    return 1;
  }
  _CGImageSourceCopyPropertiesAtIndex(pNVar4,0,0);
  if ((pNVar4 == (NSDictionary *)0x0) ||
     (_swift_dynamicCastObjCClass(pNVar4,&_OBJC_CLASS___NSDictionary), pNVar4 == (NSDictionary *)0x0
     )) {
LAB_10021aa50:
    FUN_10003bf2c(DVar3.unknown,uVar6);
    return 1;
  }
  local_70[0] = 0;
  FUN_1001f40f0(0);
  FUN_100003a00(&DAT_100fb5f38,FUN_1001f40f0,&TargetProtocolConformanceDescriptor_100c34c70);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  uVar7 = 0;
  (extension_Foundation)::Swift::Dictionary::__conditionallyBridgeFromObjectiveC(pNVar4);
  lVar2 = local_70[0];
  if (local_70[0] == 0) goto LAB_10021aa50;
  if (*(long *)(local_70[0] + 0x10) != 0) {
    lVar8 = *(long *)PTR__kCGImagePropertyOrientation_100ea9e40;
    _swift_bridgeObjectRetain(local_70[0]);
    FUN_1001f54e0(lVar8);
    if ((uVar7 & 1) != 0) {
      FUN_10000cbfc(*(long *)(lVar2 + 0x38) + lVar8 * 0x20,local_70);
      _swift_bridgeObjectRelease(lVar2);
      FUN_10003bf2c(DVar3.unknown,uVar6);
      _swift_bridgeObjectRelease(lVar2);
      if (local_70[3] != 0) {
        puVar5 = &local_74;
        _swift_dynamicCast(puVar5,local_70,puVar1 + 8,PTR___type_metadata_for_Swift_UInt32_100eade50
                           ,6);
        if (((ulong)puVar5 & 1) == 0) {
          return 1;
        }
        return local_74;
      }
      goto LAB_10021aa94;
    }
    _swift_bridgeObjectRelease(lVar2);
  }
  local_70[1] = 0;
  local_70[0] = 0;
  local_70[3] = 0;
  local_70[2] = 0;
  FUN_10003bf2c(DVar3.unknown,uVar6);
  _swift_bridgeObjectRelease(lVar2);
LAB_10021aa94:
  FUN_100201adc(local_70);
  return 1;
}



/* Address: 0x10021aabc | FUN_10021aabc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021aabc(void)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _ArrayBuffer _Var4;
  ulong self;
  MainActor *pMVar5;
  undefined8 *puVar6;
  UnownedSerialExecutor UVar7;
  UnownedSerialExecutor UVar8;
  ImageAnalysisOverlayView *pIVar9;
  ulong uVar10;
  ID unaff_x20;
  long lVar11;
  ulong uVar12;
  
  _Var4.unknown = (undefined *)objc_stub::subviews(unaff_x20);
  FUN_10000ec2c(0,&DAT_100fb64d8,&PTR__OBJC_CLASS___NSView_100f8d628);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar11 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var2.unknown = _Var4.unknown;
    }
    lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if (lVar11 != 0) {
    uVar12 = 0;
    do {
      if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10021ac38);
          (*pcVar3)();
        }
        self = *(ulong *)(_Var4.unknown + uVar12 * 8 + 0x20);
      }
      else {
        self = uVar12;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar12,_Var4);
      }
      lVar1 = uVar12 + 1;
      if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10021ac34);
        (*pcVar3)();
      }
      pMVar5 = Swift::MainActor::typeMetadataAccessor();
      pMVar5 = Swift::MainActor::get_shared(pMVar5,pMVar5);
      puVar6 = &DAT_100fb6f30;
      FUN_100003a00(&DAT_100fb6f30,PTR_typeMetadataAccessor_100eaec10,
                    PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
      UVar7 = Swift::Actor::get_unownedExecutor();
      UVar8 = UVar7;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar8.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/NSImageView+Extensions.swift",0x24,1,0x1e,UVar7.unknown,puVar6);
      }
      pIVar9 = VisionKit::ImageAnalysisOverlayView::typeMetadataAccessor();
      uVar10 = self;
      _swift_dynamicCastClass(self,pIVar9);
      if (uVar10 != 0) {
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_release(pMVar5);
        goto LAB_10021ac5c;
      }
      _swift_release(pMVar5);
      uVar12 = uVar12 + 1;
    } while (lVar1 != lVar11);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  self = 0;
LAB_10021ac5c:
  objc_stub::removeFromSuperview(self);
  return 0;
}



/* Address: 0x10021ac84 | FUN_10021ac84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021ac84(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021acb8 | FUN_10021acb8 */

void FUN_10021acb8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100008284;
  FUN_10021a4e0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4);
  return;
}



/* Address: 0x10021ad30 | FUN_10021ad30 */

void FUN_10021ad30(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb71f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb71f0;
  FUN_100005c24(&DAT_100fb71f0,&DAT_100c36998);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fb71f8 = puVar2;
  return;
}



/* Address: 0x10021ad80 | FUN_10021ad80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021ad80(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  _ArrayBuffer _Var4;
  ulong uVar5;
  _ArrayBuffer _Var6;
  NSArray *pNVar7;
  long lVar8;
  ulong uVar9;
  ID unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  _CocoaArrayWrapper _Var14;
  undefined *local_68;
  
  _Var4.unknown = (undefined *)objc_stub::itemArray(unaff_x20);
  FUN_10021b0e0(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  _Var14.unknown = _Var4.unknown & 0xffffffffffffff8;
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    uVar11 = *(ulong *)(_Var14.unknown + 0x10);
  }
  else {
    _Var1.unknown = _Var14.unknown;
    if (((ulong)_Var4.unknown & 0x8000000000000000) != 0) {
      _Var1.unknown = _Var4.unknown;
    }
    uVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar10 = 0;
  while( true ) {
    local_68 = _Var4.unknown;
    if (uVar11 == uVar10) {
      if ((ulong)_Var4.unknown >> 0x3e == 0) {
        uVar10 = *(ulong *)(_Var14.unknown + 0x10);
      }
      else {
        if (((ulong)_Var4.unknown & 0x8000000000000000) != 0) {
          _Var14.unknown = _Var4.unknown;
        }
        uVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
      }
      goto LAB_10021b014;
    }
    if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(_Var14.unknown + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b088);
        (*pcVar2)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var4);
    }
    uVar5 = 0;
    FUN_10021b124();
    bVar3 = SCARRY8(uVar10,1);
    if ((uVar5 & 1) != 0) break;
    uVar10 = uVar10 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b08c);
      (*pcVar2)();
    }
  }
  uVar11 = uVar10;
  if (bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021ae78);
    (*pcVar2)();
  }
  while( true ) {
    uVar11 = uVar11 + 1;
    if ((ulong)_Var4.unknown >> 0x3e == 0) {
      uVar5 = *(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var14.unknown = _Var4.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
        _Var14.unknown = _Var4.unknown;
      }
      uVar5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
    }
    if (uVar11 == uVar5) break;
    if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b090);
        (*pcVar2)();
      }
      if (*(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b094);
        (*pcVar2)();
      }
    }
    else {
      Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var4);
    }
    uVar5 = 0;
    FUN_10021b124();
    if ((uVar5 & 1) == 0) {
      if (uVar10 != uVar11) {
        if (((ulong)_Var4.unknown & 0xc000000000000001) == 0) {
          if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b0a4);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
          if (uVar5 <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b0a8);
            (*pcVar2)();
          }
          if (uVar5 <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b0ac);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(_Var4.unknown + uVar10 * 8 + 0x20);
          uVar12 = *(ulong *)(_Var4.unknown + uVar11 * 8 + 0x20);
        }
        else {
          uVar5 = uVar10;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var4);
          uVar12 = uVar11;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var4);
        }
        _Var6.unknown = _Var4.unknown;
        _swift_isUniquelyReferenced_nonNull_bridgeObject();
        if ((((int)_Var6.unknown == 0) || ((long)_Var4.unknown < 0)) ||
           (((ulong)_Var4.unknown >> 0x3e & 1) != 0)) {
          FUN_100089720();
          uVar13 = (uint)((ulong)_Var4.unknown >> 0x3e) & 1;
        }
        else {
          uVar13 = 0;
        }
        uVar9 = (ulong)_Var4.unknown & 0xffffffffffffff8;
        *(ulong *)(uVar9 + uVar10 * 8 + 0x20) = uVar12;
        if (((long)_Var4.unknown < 0) || (uVar13 != 0)) {
          FUN_100089720();
          uVar9 = (ulong)_Var4.unknown & 0xffffffffffffff8;
        }
        if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b004);
          (*pcVar2)();
        }
        if (*(ulong *)(uVar9 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b0a0);
          (*pcVar2)();
        }
        *(ulong *)(uVar9 + uVar11 * 8 + 0x20) = uVar5;
        local_68 = _Var4.unknown;
      }
      bVar3 = SCARRY8(uVar10,1);
      uVar10 = uVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b09c);
        (*pcVar2)();
      }
    }
    if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b098);
      (*pcVar2)();
    }
  }
LAB_10021b014:
  if ((ulong)_Var4.unknown >> 0x3e == 0) {
    lVar8 = *(long *)(((ulong)_Var4.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var14.unknown = _Var4.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var4.unknown) {
      _Var14.unknown = _Var4.unknown;
    }
    lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var14);
  }
  if ((long)uVar10 <= lVar8) {
    FUN_10021bf44(uVar10);
    pNVar7 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(local_68);
    objc_stub::setItemArray_(unaff_x20,pNVar7);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b0e0);
  (*pcVar2)();
}



/* Address: 0x10021b0e0 | FUN_10021b0e0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10021b0e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fb7200 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSMenuItem;
  _swift_getObjCClassMetadata();
  DAT_100fb7200 = puVar1;
  return;
}



/* Address: 0x10021b124 | FUN_10021b124 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8
FUN_10021b124(ID *param_1,undefined8 param_2,UnsafeMutablePointer param_3,__int64 param_4,
             UnsafeMutablePointer param_5,__int64 param_6)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ID IVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  ID IVar9;
  long lVar10;
  ulong uVar11;
  Selector SVar12;
  Selector SVar13;
  Selector SVar14;
  Selector SVar15;
  Selector SVar16;
  Selector SVar18;
  Selector SVar19;
  Selector SVar20;
  Selector SVar21;
  Selector SVar22;
  Selector SVar23;
  Selector SVar24;
  Selector SVar25;
  Selector SVar26;
  Selector SVar27;
  Selector SVar28;
  Selector SVar29;
  Selector SVar30;
  String SVar17;
  
  IVar9 = *param_1;
  SVar16.events.unknown = (undefined *)objc_stub::action(IVar9);
  if ((SVar16.events.unknown == (undefined *)0x0) ||
     (SVar16.eventsCapacity = (__int64)"changeLayoutOrientation:", SVar19.eventsCapacity = param_4,
     SVar19.events.unknown = param_3.unknown, SVar25.eventsCapacity = param_6,
     SVar25.events.unknown = param_5.unknown,
     bVar4 = ObjectiveC::Selector::___infix(SVar16,SVar19,SVar25), !bVar4)) {
    IVar6 = objc_stub::submenu(IVar9);
    if (IVar6 != 0) {
      _Var7.unknown = (undefined *)objc_stub::itemArray(IVar6);
      FUN_10021b0e0(0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var7.unknown >> 0x3e == 0) {
        lVar10 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var7.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
          _Var2.unknown = _Var7.unknown;
        }
        lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar10 != 0) {
        uVar11 = 0;
        do {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b26c);
              (*pcVar3)();
            }
            uVar8 = *(ulong *)(_Var7.unknown + uVar11 * 8 + 0x20);
          }
          else {
            uVar8 = uVar11;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var7);
          }
          lVar1 = uVar11 + 1;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b268);
            (*pcVar3)();
          }
          SVar12.events.unknown = (undefined *)objc_stub::action(uVar8);
          if ((SVar12.events.unknown != (undefined *)0x0) &&
             (SVar12.eventsCapacity = (__int64)"changeLayoutOrientation:",
             SVar20.eventsCapacity = param_4, SVar20.events.unknown = param_3.unknown,
             SVar26.eventsCapacity = param_6, SVar26.events.unknown = param_5.unknown,
             bVar4 = ObjectiveC::Selector::___infix(SVar12,SVar20,SVar26), bVar4))
          goto LAB_10021b514;
          uVar11 = uVar11 + 1;
        } while (lVar1 != lVar10);
      }
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    IVar6 = objc_stub::submenu(IVar9);
    if (IVar6 != 0) {
      _Var7.unknown = (undefined *)objc_stub::itemArray(IVar6);
      FUN_10021b0e0(0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var7.unknown >> 0x3e == 0) {
        lVar10 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var7.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
          _Var2.unknown = _Var7.unknown;
        }
        lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar10 != 0) {
        uVar11 = 0;
        do {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b38c);
              (*pcVar3)();
            }
            uVar8 = *(ulong *)(_Var7.unknown + uVar11 * 8 + 0x20);
          }
          else {
            uVar8 = uVar11;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var7);
          }
          lVar1 = uVar11 + 1;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b388);
            (*pcVar3)();
          }
          SVar13.events.unknown = (undefined *)objc_stub::action(uVar8);
          if ((SVar13.events.unknown != (undefined *)0x0) &&
             (SVar13.eventsCapacity = (__int64)"highlight:", SVar21.eventsCapacity = param_4,
             SVar21.events.unknown = param_3.unknown, SVar27.eventsCapacity = param_6,
             SVar27.events.unknown = param_5.unknown,
             bVar4 = ObjectiveC::Selector::___infix(SVar13,SVar21,SVar27), bVar4))
          goto LAB_10021b514;
          uVar11 = uVar11 + 1;
        } while (lVar1 != lVar10);
      }
      _swift_bridgeObjectRelease(_Var7.unknown);
    }
    IVar9 = objc_stub::submenu(IVar9);
    uVar5 = 0;
    if (IVar9 != 0) {
      _Var7.unknown = (undefined *)objc_stub::itemArray(IVar9);
      FUN_10021b0e0(0);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var7.unknown >> 0x3e == 0) {
        lVar10 = *(long *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var2.unknown = _Var7.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
          _Var2.unknown = _Var7.unknown;
        }
        lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      }
      if (lVar10 != 0) {
        uVar11 = 0;
        do {
          if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
            if (*(ulong *)(((ulong)_Var7.unknown & 0xffffffffffffff8) + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b528);
              (*pcVar3)();
            }
            uVar8 = *(ulong *)(_Var7.unknown + uVar11 * 8 + 0x20);
          }
          else {
            uVar8 = uVar11;
            Swift::_ArrayBuffer::__getElementSlowPath(uVar11,_Var7);
          }
          lVar1 = uVar11 + 1;
          if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10021b524);
            (*pcVar3)();
          }
          SVar14.events.unknown = (undefined *)objc_stub::action(uVar8);
          if (((SVar14.events.unknown != (undefined *)0x0) &&
              (SVar14.eventsCapacity = (__int64)"changeFont:", SVar22.eventsCapacity = param_4,
              SVar22.events.unknown = param_3.unknown, SVar28.eventsCapacity = param_6,
              SVar28.events.unknown = param_5.unknown,
              bVar4 = ObjectiveC::Selector::___infix(SVar14,SVar22,SVar28), bVar4)) ||
             ((SVar15.events.unknown = (undefined *)objc_stub::action(uVar8),
              SVar15.events.unknown != (undefined *)0x0 &&
              (SVar15.eventsCapacity = (__int64)"orderFrontFontPanel:",
              SVar23.eventsCapacity = param_4, SVar23.events.unknown = param_3.unknown,
              SVar29.eventsCapacity = param_6, SVar29.events.unknown = param_5.unknown,
              bVar4 = ObjectiveC::Selector::___infix(SVar15,SVar23,SVar29), bVar4)))) {
            _swift_bridgeObjectRelease(_Var7.unknown);
            return 1;
          }
          SVar18.events.unknown = (undefined *)objc_stub::action(uVar8);
          SVar17.bridgeObject = (void *)0xea00000000003a73;
          SVar17.str = (char *)0x746e6f46776f6873;
          SVar16 = ObjectiveC::Selector::init(SVar17);
          if ((SVar18.events.unknown != (undefined *)0x0) &&
             (SVar18.eventsCapacity = (__int64)SVar16.events.unknown.unknown,
             SVar24.eventsCapacity = param_4, SVar24.events.unknown = param_3.unknown,
             SVar30.eventsCapacity = param_6, SVar30.events.unknown = param_5.unknown,
             bVar4 = ObjectiveC::Selector::___infix(SVar18,SVar24,SVar30), bVar4)) {
LAB_10021b514:
            _swift_bridgeObjectRelease(_Var7.unknown);
            return 1;
          }
          uVar11 = uVar11 + 1;
        } while (lVar1 != lVar10);
      }
      _swift_bridgeObjectRelease(_Var7.unknown);
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}



/* Address: 0x10021b56c | FUN_10021b56c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021b56c(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  NSArray *pNVar6;
  long lVar7;
  ID unaff_x20;
  undefined *local_88 [9];
  
  FUN_10021ad80();
  puVar4 = &DAT_100fb7208;
  FUN_1000037f0(&DAT_100fb7208,&DAT_100c369a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 8;
  *(undefined8 *)(puVar4 + 0x10) = 4;
  *(char **)(puVar4 + 0x20) = "cut:";
  *(char **)(puVar4 + 0x28) = "copy:";
  *(char **)(puVar4 + 0x30) = "paste:";
  *(char **)(puVar4 + 0x38) = "selectAll:";
  puVar3 = puVar4;
  FUN_10021c008();
  _swift_setDeallocating(puVar4);
  _swift_bridgeObjectRetain(puVar3);
  puVar4 = (undefined *)objc_stub::itemArray(unaff_x20);
  FUN_10021b0e0(0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  ppuVar5 = local_88;
  local_88[0] = puVar4;
  FUN_10021c304(ppuVar5,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  if ((ulong)local_88[0] >> 0x3e == 0) {
    lVar7 = *(long *)(((ulong)local_88[0] & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)local_88[0] & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < local_88[0]) {
      _Var1.unknown = local_88[0];
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if ((long)ppuVar5 <= lVar7) {
    FUN_10021bf44(ppuVar5);
    puVar4 = local_88[0];
    pNVar6 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar4);
    objc_stub::setItemArray_(unaff_x20,pNVar6);
    _swift_bridgeObjectRelease(puVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10021b6e8);
  (*pcVar2)();
}



/* Address: 0x10021b6e8 | FUN_10021b6e8 */

void FUN_10021b6e8(void)

{
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  objc_stub::init(unaff_x20);
  return;
}



/* Address: 0x10021b704 | FUN_10021b704 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10021b704(void)

{
  return;
}



/* Address: 0x10021b70c | _objc_retain */

/* WARNING: This is an inlined function */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 _objc_retain(undefined8 param_1)

{
  return param_1;
}



/* Address: 0x10021b710 | FUN_10021b710 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021b710(undefined8 param_1,ID param_2)

{
  objc_stub::addItem_(param_2,param_1);
  return param_2;
}



/* Address: 0x10021b73c | FUN_10021b73c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021b73c(ID param_1,ID param_2)

{
  undefined *self;
  ID self_00;
  
  objc_stub::setTranslatesAutoresizingMaskIntoConstraints_(param_1,0);
  objc_stub::layoutSubtreeIfNeeded(param_1);
  self = &_OBJC_CLASS___NSMenuItem;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setView_(self_00,param_1);
  objc_stub::addItem_(param_2,self_00);
  return param_2;
}



/* Address: 0x10021b7b4 | FUN_10021b7b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021b7b4(ID param_1)

{
  ID IVar1;
  
  IVar1 = NSMenuItem::separatorItem((ID)&_OBJC_CLASS___NSMenuItem);
  objc_stub::addItem_(param_1,IVar1);
  return param_1;
}



/* Address: 0x10021b810 | FUN_10021b810 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021b810(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
                undefined8 param_5,ID param_6)

{
  undefined *puVar1;
  ID IVar2;
  undefined8 uVar3;
  NSString *pNVar4;
  NSString *pNVar5;
  ID self;
  
  puVar1 = &_OBJC_CLASS___NSMenu;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  (*param_4)();
  uVar3 = 0;
  FUN_10021c870(0);
  _swift_initStaticObject();
  puVar1 = &_OBJC_CLASS___NSMenuItem;
  _objc_allocWithZone();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::initWithTitle_action_keyEquivalent_
                   ((ID)puVar1,pNVar4,"performActionFor:",pNVar5);
  objc_stub::setImage_(self,param_3);
  objc_stub::setTag_(self,0);
  objc_stub::setState_(self,0);
  objc_stub::setTarget_(self,uVar3);
  objc_stub::setKeyEquivalentModifierMask_(self,0);
  objc_stub::setRepresentedObject_(self,0);
  objc_stub::setState_(self,0);
  objc_stub::addItem_(param_6,self);
  objc_stub::setSubmenu_forItem_(param_6,IVar2,self);
  return param_6;
}



/* Address: 0x10021b998 | FUN_10021b998 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021b998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                ID param_5)

{
  undefined8 uVar1;
  undefined *self;
  NSString *pNVar2;
  NSString *pNVar3;
  ID self_00;
  
  uVar1 = 0;
  FUN_10021c870(0);
  _swift_initStaticObject();
  self = &_OBJC_CLASS___NSMenuItem;
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self_00 = objc_stub::initWithTitle_action_keyEquivalent_
                      ((ID)self,pNVar2,"performActionFor:",pNVar3);
  objc_stub::setImage_(self_00,param_3);
  objc_stub::setTag_(self_00,0);
  objc_stub::setState_(self_00,0);
  objc_stub::setTarget_(self_00,uVar1);
  objc_stub::setKeyEquivalentModifierMask_(self_00,0);
  objc_stub::setRepresentedObject_(self_00,0);
  objc_stub::setState_(self_00,0);
  objc_stub::addItem_(param_5,self_00);
  objc_stub::setSubmenu_forItem_(param_5,param_4,self_00);
  return param_5;
}



/* Address: 0x10021bafc | FUN_10021bafc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021bafc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,ID param_11)

{
  undefined8 uVar1;
  undefined *puVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  ID self;
  code **ppcVar5;
  code *local_70;
  undefined *puStack_68;
  
  uVar1 = 0;
  FUN_10021c870(0);
  _swift_initStaticObject();
  puVar2 = &_OBJC_CLASS___NSMenuItem;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self = objc_stub::initWithTitle_action_keyEquivalent_
                   ((ID)puVar2,pNVar3,"performActionFor:",pNVar4);
  objc_stub::setImage_(self,param_3);
  objc_stub::setTag_(self,param_4);
  objc_stub::setState_(self,0);
  objc_stub::setTarget_(self,uVar1);
  objc_stub::setKeyEquivalentModifierMask_(self,param_7);
  puVar2 = &DAT_100ec22a0;
  _swift_allocObject(&DAT_100ec22a0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  *(undefined8 *)(puVar2 + 0x18) = param_10;
  local_70 = FUN_100209b34;
  puStack_68 = puVar2;
  _swift_retain(param_10);
  puVar2 = &DAT_100fb7228;
  FUN_1000037f0(&DAT_100fb7228,&DAT_100c369a8);
  ppcVar5 = &local_70;
  Swift::__bridgeAnythingNonVerbatimToObjectiveC(ppcVar5,puVar2);
  objc_stub::setRepresentedObject_(self,ppcVar5);
  _swift_unknownObjectRelease(ppcVar5);
  objc_stub::setState_(self,param_8);
  objc_stub::addItem_(param_11,self);
  return param_11;
}



/* Address: 0x10021bce0 | FUN_10021bce0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021bce0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10,ID param_11)

{
  undefined *self;
  NSString *pNVar1;
  NSString *pNVar2;
  ID self_00;
  
  self = &_OBJC_CLASS___NSMenuItem;
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  self_00 = objc_stub::initWithTitle_action_keyEquivalent_((ID)self,pNVar1,param_10,pNVar2);
  objc_stub::setImage_(self_00,param_3);
  objc_stub::setTag_(self_00,param_4);
  objc_stub::setState_(self_00,param_8);
  objc_stub::setTarget_(self_00,param_9);
  objc_stub::setKeyEquivalentModifierMask_(self_00,param_7);
  objc_stub::addItem_(param_11,self_00);
  return param_11;
}



/* Address: 0x10021be0c | FUN_10021be0c */

void FUN_10021be0c(long param_1)

{
  FUN_1002006e4(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10021be20 | FUN_10021be20 */

void FUN_10021be20(long param_1)

{
  FUN_100200d9c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10021be34 | FUN_10021be34 */

void FUN_10021be34(long param_1)

{
  FUN_100200a4c(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x10021be48 | FUN_10021be48 */

void FUN_10021be48(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10021bf20);
    (*pcVar5)();
  }
  puVar10 = (undefined *)*unaff_x20;
  puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  uVar6 = 0;
  FUN_10021b0e0(0);
  _swift_arrayDestroy(puVar9 + param_1 * 8 + 0x20,lVar8,uVar6);
  lVar4 = param_3 - lVar8;
  if (SBORROW8(param_3,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10021bf24);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar7 = *(long *)(puVar9 + 0x10);
      lVar8 = lVar7 - param_2;
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      lVar8 = lVar7 - param_2;
    }
    if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10021bf3c);
      (*pcVar5)();
    }
    puVar1 = puVar9 + param_1 * 8 + 0x20 + param_3 * 8;
    puVar2 = puVar9 + param_2 * 8 + 0x20;
    if (puVar1 != puVar2 || puVar2 + lVar8 * 8 <= puVar1) {
      _memmove(puVar1,puVar2,lVar8 << 3);
    }
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar8 = *(long *)(puVar9 + 0x10);
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (SCARRY8(lVar8,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10021bf40);
      (*pcVar5)();
    }
    *(long *)(puVar9 + 0x10) = lVar8 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10021bf44);
    (*pcVar5)();
  }
  return;
}



/* Address: 0x10021bf44 | FUN_10021bf44 */

void FUN_10021bf44(long param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021bfe4);
    (*pcVar2)();
  }
  puVar5 = (undefined *)*unaff_x20;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar3 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021bffc);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c000);
    (*pcVar2)();
  }
  lVar3 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c004);
    (*pcVar2)();
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c008);
    (*pcVar2)();
  }
  FUN_10008c054(lVar4 + lVar3,1);
  FUN_10021be48(param_1,param_2,0);
  return;
}



/* Address: 0x10021c008 | FUN_10021c008 */

undefined *
FUN_10021c008(long param_1,undefined8 param_2,UnsafeMutablePointer param_3,__int64 param_4,
             UnsafeMutablePointer param_5,__int64 param_6)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  Hasher into;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  UnsafeMutablePointer UVar9;
  undefined *puVar10;
  Selector SVar11;
  Selector SVar12;
  Selector SVar13;
  Selector SVar14;
  undefined1 auStack_a8 [72];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (capacity != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fb7230;
    FUN_1000037f0(&DAT_100fb7230,&DAT_100c369c0);
    puVar3 = capacity;
    Swift::_SetStorage::_allocate(this,(__int64)capacity);
    puVar10 = (undefined *)0x0;
    do {
      UVar9.unknown = *(undefined **)(param_1 + 0x20 + (long)puVar10 * 8);
      Swift::Hasher::init(*(__int64 *)(puVar3 + 0x28));
      into.unknown = auStack_a8;
      SVar12.eventsCapacity = (__int64)param_3.unknown;
      SVar12.events.unknown = UVar9.unknown;
      ObjectiveC::Selector::hash(into,SVar12);
      uVar4 = Swift::Hasher::_finalize(into);
      uVar8 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
      uVar5 = uVar4 >> 6;
      uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
      uVar7 = 1L << (uVar4 & 0x3f);
      if ((uVar7 & uVar6) != 0) {
        do {
          SVar11.events.unknown = *(undefined **)(*(long *)(puVar3 + 0x30) + uVar4 * 8);
          SVar11.eventsCapacity = (__int64)UVar9.unknown;
          SVar13.eventsCapacity = param_4;
          SVar13.events.unknown = param_3.unknown;
          SVar14.eventsCapacity = param_6;
          SVar14.events.unknown = param_5.unknown;
          bVar2 = ObjectiveC::Selector::___infix(SVar11,SVar13,SVar14);
          if (bVar2) goto LAB_10021c090;
          uVar4 = uVar4 + 1 & ~uVar8;
          uVar5 = uVar4 >> 6;
          uVar6 = *(ulong *)(puVar3 + uVar5 * 8 + 0x38);
          uVar7 = 1L << (uVar4 & 0x3f);
        } while ((uVar7 & uVar6) != 0);
      }
      *(ulong *)(puVar3 + uVar5 * 8 + 0x38) = uVar7 | uVar6;
      *(undefined **)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = UVar9.unknown;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10021c148);
        (*pcVar1)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
LAB_10021c090:
      puVar10 = puVar10 + 1;
    } while (puVar10 != capacity);
  }
  return puVar3;
}



/* Address: 0x10021c148 | FUN_10021c148 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_10021c148(_ArrayBuffer param_1,long param_2,UnsafeMutablePointer param_3,__int64 param_4,
             UnsafeMutablePointer param_5,__int64 param_6)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  ID IVar5;
  UnsafeMutablePointer UVar6;
  Hasher into;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  Selector SVar11;
  undefined1 auVar12 [16];
  Selector SVar13;
  Selector SVar14;
  Selector SVar15;
  undefined1 auStack_a8 [72];
  ulong local_58;
  
  puVar10 = param_1.unknown & 0xffffffffffffff8;
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    local_58 = *(ulong *)(puVar10 + 0x10);
  }
  else {
    _Var1.unknown = puVar10;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    local_58 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  uVar9 = 0;
  while( true ) {
    if (uVar9 == local_58) {
      uVar9 = 0;
      uVar7 = 1;
      goto LAB_10021c2c0;
    }
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      if (*(ulong *)(puVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c2ec);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_1.unknown + uVar9 * 8 + 0x20);
    }
    else {
      uVar4 = uVar9;
      Swift::_ArrayBuffer::__getElementSlowPath(uVar9,param_1);
    }
    IVar5 = objc_stub::isSeparatorItem(uVar4);
    if ((IVar5 & 1) == 0) break;
LAB_10021c1a0:
    bVar3 = SCARRY8(uVar9,1);
    uVar9 = uVar9 + 1;
    if (bVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c2f0);
      (*pcVar2)();
    }
  }
  IVar5 = objc_stub::submenu(uVar4);
  if (((IVar5 == 0) &&
      (UVar6.unknown = (undefined *)objc_stub::action(uVar4), UVar6.unknown != (undefined *)0x0)) &&
     (*(long *)(param_2 + 0x10) != 0)) {
    Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
    into.unknown = auStack_a8;
    SVar13.eventsCapacity = (__int64)param_3.unknown;
    SVar13.events.unknown = UVar6.unknown;
    ObjectiveC::Selector::hash(into,SVar13);
    uVar4 = Swift::Hasher::_finalize(into);
    uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar4 = uVar4 & (uVar8 ^ 0xffffffffffffffff);
    if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) != 0) {
      while (SVar11.events.unknown = *(undefined **)(*(long *)(param_2 + 0x30) + uVar4 * 8),
            SVar11.eventsCapacity = (__int64)UVar6.unknown, SVar14.eventsCapacity = param_4,
            SVar14.events.unknown = param_3.unknown, SVar15.eventsCapacity = param_6,
            SVar15.events.unknown = param_5.unknown,
            bVar3 = ObjectiveC::Selector::___infix(SVar11,SVar14,SVar15), !bVar3) {
        uVar4 = uVar4 + 1 & ~uVar8;
        if ((*(ulong *)(param_2 + 0x38 + (uVar4 >> 6) * 8) >> (uVar4 & 0x3f) & 1) == 0)
        goto LAB_10021c2b4;
      }
      goto LAB_10021c1a0;
    }
  }
LAB_10021c2b4:
  uVar7 = 0;
LAB_10021c2c0:
  auVar12._8_8_ = uVar7;
  auVar12._0_8_ = uVar9;
  return auVar12;
}



/* Address: 0x10021c304 | FUN_10021c304 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined *
FUN_10021c304(ulong *param_1,long param_2,UnsafeMutablePointer param_3,__int64 param_4,
             UnsafeMutablePointer param_5,__int64 param_6)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  undefined *puVar4;
  ID IVar5;
  UnsafeMutablePointer UVar6;
  Hasher into;
  _ArrayBuffer _Var7;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  long unaff_x21;
  _ArrayBuffer _Var11;
  undefined *puVar12;
  ulong uVar13;
  undefined *puVar14;
  undefined *puVar15;
  Selector SVar16;
  Selector SVar17;
  Selector SVar18;
  Selector SVar19;
  undefined1 auStack_a8 [72];
  
  _Var11.unknown = (undefined *)*param_1;
  puVar12 = _Var11.unknown;
  lVar8 = param_2;
  FUN_10021c148();
  if (unaff_x21 == 0) {
    if (((uint)lVar8 & 0xff) != 1) {
      puVar14 = puVar12 + 1;
      if (SCARRY8((long)puVar12,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c630);
        (*pcVar2)();
      }
      do {
        while( true ) {
          if ((ulong)_Var11.unknown >> 0x3e == 0) {
            puVar4 = *(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = _Var11.unknown & 0xffffffffffffff8;
            if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
              _Var1.unknown = _Var11.unknown;
            }
            puVar4 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          if (puVar14 == puVar4) {
            return puVar12;
          }
          if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
            if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c5f4);
              (*pcVar2)();
            }
            if (*(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c5f8);
              (*pcVar2)();
            }
            puVar4 = *(undefined **)(_Var11.unknown + (long)puVar14 * 8 + 0x20);
          }
          else {
            puVar4 = puVar14;
            Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar14,_Var11);
          }
          IVar5 = objc_stub::isSeparatorItem((ID)puVar4);
          if ((IVar5 & 1) == 0) break;
LAB_10021c3ec:
          if (puVar12 != puVar14) {
            if (((ulong)_Var11.unknown & 0xc000000000000001) == 0) {
              if ((long)puVar12 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c608);
                (*pcVar2)();
              }
              puVar4 = *(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
              if (puVar4 <= puVar12) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c60c);
                (*pcVar2)();
              }
              if (puVar4 <= puVar14) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c610);
                (*pcVar2)();
              }
              puVar4 = *(undefined **)(_Var11.unknown + (long)puVar12 * 8 + 0x20);
              puVar15 = *(undefined **)(_Var11.unknown + (long)puVar14 * 8 + 0x20);
            }
            else {
              puVar4 = puVar12;
              Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar12,_Var11);
              puVar15 = puVar14;
              Swift::_ArrayBuffer::__getElementSlowPath((__int64)puVar14,_Var11);
            }
            _Var7.unknown = _Var11.unknown;
            _swift_isUniquelyReferenced_nonNull_bridgeObject();
            if ((((int)_Var7.unknown == 0) || ((long)_Var11.unknown < 0)) ||
               (((ulong)_Var11.unknown >> 0x3e & 1) != 0)) {
              FUN_100089720();
              uVar10 = (uint)((ulong)_Var11.unknown >> 0x3e) & 1;
            }
            else {
              uVar10 = 0;
            }
            uVar13 = (ulong)_Var11.unknown & 0xffffffffffffff8;
            *(undefined **)(uVar13 + (long)puVar12 * 8 + 0x20) = puVar15;
            if (((long)_Var11.unknown < 0) || (uVar10 != 0)) {
              FUN_100089720();
              uVar13 = (ulong)_Var11.unknown & 0xffffffffffffff8;
            }
            if ((long)puVar14 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c5c8);
              (*pcVar2)();
            }
            if (*(undefined **)(uVar13 + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c604);
              (*pcVar2)();
            }
            *(undefined **)(uVar13 + (long)puVar14 * 8 + 0x20) = puVar4;
            *param_1 = (ulong)_Var11.unknown;
          }
          bVar3 = SCARRY8((long)puVar12,1);
          puVar12 = puVar12 + 1;
          if (bVar3) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c600);
            (*pcVar2)();
          }
          bVar3 = SCARRY8((long)puVar14,1);
          puVar14 = puVar14 + 1;
          if (bVar3) goto LAB_10021c5f8;
        }
        IVar5 = objc_stub::submenu((ID)puVar4);
        if (((IVar5 == 0) &&
            (UVar6.unknown = (undefined *)objc_stub::action(puVar4),
            UVar6.unknown != (undefined *)0x0)) && (*(long *)(param_2 + 0x10) != 0)) {
          Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
          into.unknown = auStack_a8;
          SVar17.eventsCapacity = (__int64)param_3.unknown;
          SVar17.events.unknown = UVar6.unknown;
          ObjectiveC::Selector::hash(into,SVar17);
          uVar13 = Swift::Hasher::_finalize(into);
          uVar9 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
          uVar13 = uVar13 & (uVar9 ^ 0xffffffffffffffff);
          if ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
            do {
              SVar16.events.unknown = *(undefined **)(*(long *)(param_2 + 0x30) + uVar13 * 8);
              SVar16.eventsCapacity = (__int64)UVar6.unknown;
              SVar18.eventsCapacity = param_4;
              SVar18.events.unknown = param_3.unknown;
              SVar19.eventsCapacity = param_6;
              SVar19.events.unknown = param_5.unknown;
              bVar3 = ObjectiveC::Selector::___infix(SVar16,SVar18,SVar19);
              if (bVar3) goto LAB_10021c3ec;
              uVar13 = uVar13 + 1 & ~uVar9;
            } while ((*(ulong *)(param_2 + 0x38 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
          }
        }
        bVar3 = SCARRY8((long)puVar14,1);
        puVar14 = puVar14 + 1;
      } while (!bVar3);
LAB_10021c5f8:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021c5fc);
      (*pcVar2)();
    }
    if ((ulong)_Var11.unknown >> 0x3e == 0) {
      puVar12 = *(undefined **)(((ulong)_Var11.unknown & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)_Var11.unknown & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < _Var11.unknown) {
        _Var1.unknown = _Var11.unknown;
      }
      puVar12 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
  }
  return puVar12;
}



/* Address: 0x10021c630 | FUN_10021c630 */

void FUN_10021c630(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021c654 | FUN_10021c654 */

undefined1  [16] FUN_10021c654(void)

{
  return ZEXT816(0x100ec22c8);
}



/* Address: 0x10021c664 | FUN_10021c664 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10021c664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  ID self;
  undefined *puVar4;
  ID unaff_x20;
  code **ppcVar5;
  code *local_70;
  undefined *puStack_68;
  
  uVar1 = 0;
  FUN_10021c870(0);
  _swift_initStaticObject();
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_6);
  self = objc_stub::initWithTitle_action_keyEquivalent_(unaff_x20,pNVar2,"performActionFor:",pNVar3)
  ;
  objc_stub::setImage_(self,param_3);
  objc_stub::setTag_(self,param_4);
  objc_stub::setState_(self,0);
  objc_stub::setTarget_(self,uVar1);
  objc_stub::setKeyEquivalentModifierMask_(self,param_7);
  if (param_9 == 0) {
    ppcVar5 = (code **)0x0;
  }
  else {
    puVar4 = &DAT_100ec22f0;
    _swift_allocObject(&DAT_100ec22f0,0x20,7);
    *(long *)(puVar4 + 0x10) = param_9;
    *(undefined8 *)(puVar4 + 0x18) = param_10;
    local_70 = FUN_1000386a0;
    puStack_68 = puVar4;
    FUN_100011128(param_9,param_10);
    puVar4 = &DAT_100fb7228;
    FUN_1000037f0(&DAT_100fb7228,&DAT_100c369a8);
    ppcVar5 = &local_70;
    Swift::__bridgeAnythingNonVerbatimToObjectiveC(ppcVar5,puVar4);
  }
  objc_stub::setRepresentedObject_(self,ppcVar5);
  _swift_unknownObjectRelease(ppcVar5);
  objc_stub::setState_(self,param_8);
  FUN_100004550(param_9,param_10);
  return self;
}



/* Address: 0x10021c870 | FUN_10021c870 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10021c870(void)

{
  return ZEXT816(0x100fb7278);
}



/* Address: 0x10021c890 | FUN_10021c890 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_10021c890(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                undefined8 param_9,undefined8 param_10)

{
  NSString *pNVar1;
  NSString *pNVar2;
  ID self;
  ID unaff_x20;
  
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_6);
  self = objc_stub::initWithTitle_action_keyEquivalent_(unaff_x20,pNVar1,param_10,pNVar2);
  objc_stub::setImage_(self,param_3);
  objc_stub::setTag_(self,param_4);
  objc_stub::setState_(self,param_8);
  objc_stub::setTarget_(self,param_9);
  objc_stub::setKeyEquivalentModifierMask_(self,param_7);
  _swift_unknownObjectRelease(param_9);
  return self;
}



/* Address: 0x10021c9c0 | FUN_10021c9c0 */

void FUN_10021c9c0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10021c9e4 | _TtCE7PasteUICSo10NSMenuItemP33_2D4AA38BCD8D208D51A4533AED19B2F715ActionPerformer::performActionFor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtCE7PasteUICSo10NSMenuItemP33_2D4AA38BCD8D208D51A4533AED19B2F715ActionPerformer::
     performActionFor_(ID param_1,SEL param_2,ID param_3)

{
  _swift_retain(param_1);
  FUN_10021ca28(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x10021ca28 | FUN_10021ca28 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10021ca28(ID param_1)

{
  int iVar1;
  ID IVar2;
  undefined *puVar3;
  code *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  iVar1 = (int)&local_70;
  IVar2 = objc_stub::representedObject(param_1);
  if (IVar2 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    lStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
  }
  uStack_38 = uStack_58;
  local_40 = local_60;
  local_28 = lStack_48;
  uStack_30 = uStack_50;
  if (lStack_48 == 0) {
    FUN_100201adc(&local_40);
  }
  else {
    puVar3 = &DAT_100fb7228;
    FUN_1000037f0(&DAT_100fb7228,&DAT_100c369a8);
    _swift_dynamicCast(&local_70,&local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
    if (iVar1 != 0) {
      (*local_70)();
      _swift_release(uStack_68);
    }
  }
  return;
}



/* Address: 0x10021cadc | FUN_10021cadc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10021cadc(undefined8 param_1,undefined1 param_2,undefined8 param_3,ulong param_4,
                  code *param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  void *aBlock_00;
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *puStack_88;
  code *local_80;
  undefined *local_78;
  
  if ((param_4 & 1) == 0) {
    (*param_5)();
    if (param_7 != (code *)0x0) {
      (*param_7)();
    }
  }
  else {
    puVar3 = &DAT_100ec2318;
    _swift_allocObject(&DAT_100ec2318,0x38,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    puVar3[0x18] = param_2;
    *(undefined8 *)(puVar3 + 0x20) = param_3;
    *(code **)(puVar3 + 0x28) = param_5;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    puVar4 = &DAT_100ec2340;
    _swift_allocObject(&DAT_100ec2340,0x20,7);
    *(code **)(puVar4 + 0x10) = FUN_100208b84;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    puVar1 = PTR___NSConcreteStackBlock_100ea82a0;
    local_80 = FUN_1000e8174;
    local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
    local_98 = 0x42000000;
    local_90 = FUN_1000f7788;
    puStack_88 = &DAT_100ec2358;
    local_78 = puVar4;
    aBlock = __Block_copy(&local_a0);
    puVar5 = local_78;
    _swift_retain(puVar4);
    _swift_release(puVar5);
    puVar5 = &DAT_100ec2390;
    _swift_allocObject(&DAT_100ec2390,0x20,7);
    *(code **)(puVar5 + 0x10) = param_7;
    *(undefined8 *)(puVar5 + 0x18) = param_8;
    local_80 = FUN_10021ce98;
    local_a0 = puVar1;
    local_98 = 0x42000000;
    local_90 = FUN_100030410;
    puStack_88 = &DAT_100ec23a8;
    local_78 = puVar5;
    aBlock_00 = __Block_copy(&local_a0);
    puVar5 = local_78;
    FUN_100011128(param_7,param_8);
    _swift_release(puVar5);
    NSAnimationContext::runAnimationGroup_completionHandler_
              ((ID)&_OBJC_CLASS___NSAnimationContext,aBlock,aBlock_00);
    __Block_release(aBlock_00);
    __Block_release(aBlock);
    puVar5 = puVar4;
    _swift_isEscapingClosureAtFileLocation(puVar4,"",0x84,0x1c,0x2e,1);
    _swift_release(puVar4);
    _swift_release(puVar3);
    if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10021cc9c);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x10021ccd4 | FUN_10021ccd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10021ccd4(void)

{
  ID IVar1;
  
  IVar1 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseOut_100eaa3c0);
  return IVar1;
}



/* Address: 0x10021cd10 | FUN_10021cd10 */

void FUN_10021cd10(ID param_1,undefined8 param_2,char param_3,undefined8 param_4,code *param_5)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Animation.swift",0x1e,1,0x1c,UVar3.unknown,pMVar1);
  }
  if (param_3 != '\x01') {
    objc_stub::setDuration_(param_1,param_2);
  }
  objc_stub::setTimingFunction_(param_1,param_4);
  objc_stub::setAllowsImplicitAnimation_(param_1,1);
  (*param_5)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10021cdf8 | FUN_10021cdf8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021cdf8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10021ce1c | FUN_10021ce1c */

void FUN_10021ce1c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x10021ce2c | FUN_10021ce2c */

void FUN_10021ce2c(long param_1,long param_2)

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



/* Address: 0x10021ce40 | FUN_10021ce40 */

void FUN_10021ce40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10021ce48 | FUN_10021ce48 */

void FUN_10021ce48(code *param_1)

{
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Address: 0x10021ce6c | FUN_10021ce6c */

void FUN_10021ce6c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10021ce98 | FUN_10021ce98 */

void FUN_10021ce98(void)

{
  long unaff_x20;
  
  if (*(code **)(unaff_x20 + 0x10) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x10))();
  }
  return;
}



/* Address: 0x10021cec0 | FUN_10021cec0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10021cec0(void)

{
  ID IVar1;
  
  IVar1 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionLinear_100eaa3c8);
  return IVar1;
}



/* Address: 0x10021cefc | FUN_10021cefc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10021cefc(void)

{
  ID IVar1;
  
  IVar1 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseIn_100eaa3b0);
  return IVar1;
}



/* Address: 0x10021cf38 | FUN_10021cf38 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10021cf38(void)

{
  ID IVar1;
  
  IVar1 = CAMediaTimingFunction::functionWithName_
                    ((ID)&_OBJC_CLASS___CAMediaTimingFunction,
                     *(undefined8 *)PTR__kCAMediaTimingFunctionEaseInEaseOut_100eaa3b8);
  return IVar1;
}



/* Address: 0x10021cf74 | thunk_FUN_10021ce2c */

void thunk_FUN_10021ce2c(void)

{
  FUN_10021ce2c();
  return;
}



/* Address: 0x10021cf78 | thunk_FUN_10021ce40 */

void thunk_FUN_10021ce40(void)

{
  FUN_10021ce40();
  return;
}



/* Address: 0x10021cf7c | FUN_10021cf7c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_10021cf7c(undefined8 param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Extensions.swift",0x1f,1,7,UVar3.unknown,pMVar1);
  }
  FUN_10021d024(param_1);
  _swift_release(pMVar2);
  return param_1;
}



/* Address: 0x10021d024 | FUN_10021d024 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

ID FUN_10021d024(void)

{
  ID self;
  MainActor *pMVar1;
  ID IVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID unaff_x20;
  
  self = objc_stub::layer(unaff_x20);
  IVar2 = 0;
  if (self != 0) {
    pMVar1 = (MainActor *)objc_stub::borderColor(self);
    IVar2 = 0;
    if (pMVar1 != (MainActor *)0x0) {
      pMVar3 = Swift::MainActor::typeMetadataAccessor();
      pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar1);
      pMVar3 = pMVar4;
      FUN_1001f7290();
      UVar5 = Swift::Actor::get_unownedExecutor();
      UVar6 = UVar5;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar6.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("PasteUI/NSView+Extensions.swift",0x1f,1,7,UVar5.unknown,pMVar3);
      }
      IVar2 = NSColor::colorWithCGColor_((ID)&_OBJC_CLASS___NSColor,pMVar1);
      _swift_release(pMVar4);
    }
  }
  return IVar2;
}



/* Address: 0x10021d118 | FUN_10021d118 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d118(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Extensions.swift",0x1f,1,8,UVar3.unknown,pMVar1);
  }
  FUN_10021d1cc(param_3);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10021d1cc | FUN_10021d1cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d1cc(ID param_1)

{
  ID self;
  ID IVar1;
  ID unaff_x20;
  
  objc_stub::setWantsLayer_(unaff_x20,1);
  self = objc_stub::layer(unaff_x20);
  if (self != 0) {
    if (param_1 == 0) {
      IVar1 = 0;
    }
    else {
      IVar1 = objc_stub::CGColor(param_1);
    }
    objc_stub::setBorderColor_(self,IVar1);
  }
  return 0;
}



/* Address: 0x10021d254 | FUN_10021d254 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d254(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Extensions.swift",0x1f,1,0x10,UVar3.unknown,pMVar1);
  }
  self = objc_stub::layer(param_1);
  if (self == 0) {
    _swift_release(pMVar2);
  }
  else {
    objc_stub::borderWidth(self);
    _swift_release(pMVar2);
  }
  return 0;
}



/* Address: 0x10021d32c | FUN_10021d32c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d32c(void)

{
  ID self;
  ID unaff_x20;
  
  self = objc_stub::layer(unaff_x20);
  if (self != 0) {
    objc_stub::borderWidth(self);
  }
  return 0;
}



/* Address: 0x10021d380 | FUN_10021d380 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d380(undefined8 param_1,ID param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Extensions.swift",0x1f,1,0x11,UVar3.unknown,pMVar1);
  }
  objc_stub::setWantsLayer_(param_2,1);
  self = objc_stub::layer(param_2);
  objc_stub::setBorderWidth_(self,param_1);
  _swift_release(pMVar2);
  return 0;
}



/* Address: 0x10021d44c | FUN_10021d44c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d44c(undefined8 param_1)

{
  ID self;
  ID unaff_x20;
  
  objc_stub::setWantsLayer_(unaff_x20,1);
  self = objc_stub::layer(unaff_x20);
  objc_stub::setBorderWidth_(self,param_1);
  return 0;
}



/* Address: 0x10021d49c | FUN_10021d49c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d49c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  ID unaff_x20;
  
  objc_stub::setWantsLayer_(unaff_x20,1);
  objc_stub::setClipsToBounds_(unaff_x20,1);
  IVar1 = objc_stub::layer(unaff_x20);
  objc_stub::setCornerRadius_(IVar1,param_1);
  IVar1 = objc_stub::layer(unaff_x20);
  objc_stub::setCornerCurve_(IVar1,param_2);
  return 0;
}



/* Address: 0x10021d528 | FUN_10021d528 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10021d528(undefined8 param_1,ID param_2,undefined8 param_3,undefined8 param_4)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1001f7290();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteUI/NSView+Extensions.swift",0x1f,1,0x18,UVar3.unknown,pMVar1);
  }
  objc_stub::setWantsLayer_(param_2,1);
  objc_stub::setClipsToBounds_(param_2,1);
  IVar5 = objc_stub::layer(param_2);
  objc_stub::setCornerRadius_(IVar5,param_1);
  IVar5 = objc_stub::layer(param_2);
  objc_stub::setCornerCurve_(IVar5,param_4);
  _swift_release(pMVar2);
  return 0;
}


