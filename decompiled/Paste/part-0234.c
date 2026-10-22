/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002d2b54 | ObjCExceptionCatcher::catchExceptionIn: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID ObjCExceptionCatcher::catchExceptionIn_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  (**(code **)(param_3 + 0x10))(param_3,param_2,param_3,param_4);
  return 0;
}



/* Address: 0x1002d2ba8 | thunk_FUN_1002d2d64 */

void thunk_FUN_1002d2d64(void)

{
  FUN_1002d2d64();
  return;
}



/* Address: 0x1002d2bac | thunk_FUN_1002d30d4 */

void thunk_FUN_1002d30d4(void)

{
  FUN_1002d30d4();
  return;
}



/* Address: 0x1002d2bb0 | FUN_1002d2bb0 */

undefined8 FUN_1002d2bb0(void)

{
  return 0x400;
}



/* Address: 0x1002d2bb8 | FUN_1002d2bb8 */

void FUN_1002d2bb8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d898,param_1);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::get_hashValue();
  return;
}



/* Address: 0x1002d2bf4 | FUN_1002d2bf4 */

void FUN_1002d2bf4(Hasher param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d898);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(param_1);
  return;
}



/* Address: 0x1002d2c3c | FUN_1002d2c3c */

void FUN_1002d2c3c(__int64 param_1,undefined8 param_2)

{
  Hasher into;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d898,param_2);
  into.unknown = auStack_68;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1002d2c94 | FUN_1002d2c94 */

void FUN_1002d2c94(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3d898;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d898,param_3);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix(uVar2,uVar3,param_3,pTVar1);
  return;
}



/* Address: 0x1002d2ce0 | FUN_1002d2ce0 */

void FUN_1002d2ce0(void)

{
  FUN_100003a00(&DAT_100fbcd88,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d908);
  FUN_100003a00(&DAT_100fbcdf0,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d7b0);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002d2d64 | FUN_1002d2d64 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

bool FUN_1002d2d64(undefined8 param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  bool bVar3;
  IndexSet IVar4;
  undefined *puVar5;
  ID IVar6;
  undefined *self;
  NSDictionary *pNVar7;
  ID IVar8;
  NSArray *pNVar9;
  _ArrayBuffer _Var10;
  long lVar11;
  IndexSet IVar12;
  undefined8 uVar13;
  long extraout_x8;
  long lVar14;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar4 = Foundation::IndexSet::typeMetadataAccessor();
  lVar14 = *(long *)(IVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar5 = &_OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest;
  _objc_allocWithZone();
  IVar6 = objc_stub::init((ID)puVar5);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002d5524(PTR___swiftEmptyArrayStorage_100eae0d8);
  self = &_OBJC_CLASS___VNImageRequestHandler;
  _objc_allocWithZone();
  FUN_1002d35b0(0);
  FUN_100003a00(&DAT_100fbcd88,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d908);
  pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar5);
  IVar8 = objc_stub::initWithCGImage_orientation_options_((ID)self,param_1,param_2,pNVar7);
  puVar5 = &DAT_100fbcd90;
  FUN_1000037f0(&DAT_100fbcd90,&DAT_100c3d6f0);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 3;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  *(ID *)(puVar5 + 0x20) = IVar6;
  FUN_10000ec2c(0,&DAT_100fbcd98,&PTR__OBJC_CLASS___VNRequest_100f8da90);
  pNVar9 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar5);
  local_70 = 0;
  IVar8 = objc_stub::performRequests_error_(IVar8,pNVar9,&local_70);
  if ((int)IVar8 == 0) {
    uVar13 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar13);
  }
  else {
    _Var10.unknown = (undefined *)objc_stub::results(IVar6);
    if (_Var10.unknown != (undefined *)0x0) {
      FUN_10000ec2c(0,&DAT_100fbcda0,&PTR__OBJC_CLASS___VNInstanceMaskObservation_100f8da98);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var10.unknown >> 0x3e == 0) {
        lVar11 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
          _Var1.unknown = _Var10.unknown;
        }
        lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar11 != 0) {
        if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d30d0);
            (*pcVar2)();
          }
          IVar6 = *(ID *)(_Var10.unknown + 0x20);
        }
        else {
          IVar6 = 0;
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
        }
        _swift_bridgeObjectRelease(_Var10.unknown);
        IVar12.unknown = (undefined *)objc_stub::allInstances(IVar6);
        Foundation::IndexSet::__unconditionallyBridgeFromObjectiveC(IVar12);
        bVar3 = Foundation::IndexSet::get_isEmpty((IndexSet)0x0);
        (**(code **)(lVar14 + 8))
                  (auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar4.unknown);
        bVar3 = !bVar3;
        goto LAB_1002d3080;
      }
      _swift_bridgeObjectRelease(_Var10.unknown);
    }
  }
  bVar3 = false;
LAB_1002d3080:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1002d30d4 | FUN_1002d30d4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1002d30d4(undefined8 param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  bool bVar2;
  IndexSet IVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *self;
  NSDictionary *pNVar6;
  ID IVar7;
  NSArray *pNVar8;
  ID IVar9;
  _ArrayBuffer _Var10;
  long lVar11;
  IndexSet IVar12;
  undefined8 uVar13;
  NSIndexSet *pNVar14;
  long extraout_x8;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  IVar3 = Foundation::IndexSet::typeMetadataAccessor();
  lVar16 = *(long *)(IVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  puVar4 = &_OBJC_CLASS___VNGenerateForegroundInstanceMaskRequest;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar4);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002d5524(PTR___swiftEmptyArrayStorage_100eae0d8);
  self = &_OBJC_CLASS___VNImageRequestHandler;
  _objc_allocWithZone();
  FUN_1002d35b0(0);
  FUN_100003a00(&DAT_100fbcd88,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d908);
  pNVar6 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar4);
  IVar7 = objc_stub::initWithCGImage_orientation_options_((ID)self,param_1,param_2,pNVar6);
  puVar4 = &DAT_100fbcd90;
  FUN_1000037f0(&DAT_100fbcd90,&DAT_100c3d6f0);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 3;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(ID *)(puVar4 + 0x20) = IVar5;
  FUN_10000ec2c(0,&DAT_100fbcd98,&PTR__OBJC_CLASS___VNRequest_100f8da90);
  pNVar8 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  _swift_release(puVar4);
  local_70 = 0;
  IVar9 = objc_stub::performRequests_error_(IVar7,pNVar8,&local_70);
  if ((int)IVar9 == 0) {
    uVar13 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar13);
  }
  else {
    _Var10.unknown = (undefined *)objc_stub::results(IVar5);
    if (_Var10.unknown != (undefined *)0x0) {
      FUN_10000ec2c(0,&DAT_100fbcda0,&PTR__OBJC_CLASS___VNInstanceMaskObservation_100f8da98);
      (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
      if ((ulong)_Var10.unknown >> 0x3e == 0) {
        lVar11 = *(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10);
      }
      else {
        _Var1.unknown = _Var10.unknown & 0xffffffffffffff8;
        if ((undefined *)0x7fffffffffffffff < _Var10.unknown) {
          _Var1.unknown = _Var10.unknown;
        }
        lVar11 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      }
      if (lVar11 == 0) {
        _swift_bridgeObjectRelease(_Var10.unknown);
      }
      else {
        if (((ulong)_Var10.unknown & 0xc000000000000001) == 0) {
          if (*(long *)(((ulong)_Var10.unknown & 0xffffffffffffff8) + 0x10) == 0) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1002d3578);
            (*pcVar15)();
          }
          IVar5 = *(ID *)(_Var10.unknown + 0x20);
        }
        else {
          IVar5 = 0;
          Swift::_ArrayBuffer::__getElementSlowPath(0,_Var10);
        }
        _swift_bridgeObjectRelease(_Var10.unknown);
        IVar12.unknown = (undefined *)objc_stub::allInstances(IVar5);
        Foundation::IndexSet::__unconditionallyBridgeFromObjectiveC(IVar12);
        bVar2 = Foundation::IndexSet::get_isEmpty((IndexSet)0x0);
        pcVar15 = *(code **)(lVar16 + 8);
        (*pcVar15)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
        if (!bVar2) {
          IVar12.unknown = (undefined *)objc_stub::allInstances(IVar5);
          Foundation::IndexSet::__unconditionallyBridgeFromObjectiveC(IVar12);
          pNVar14 = Foundation::IndexSet::_bridgeToObjectiveC((IndexSet)0x0);
          (*pcVar15)(auStack_80 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),IVar3.unknown);
          local_70 = 0;
          IVar5 = objc_stub::
                  generateMaskedImageOfInstances_fromRequestHandler_croppedToInstancesExtent_error_
                            (IVar5,pNVar14,IVar7,0,&local_70);
          if (IVar5 != 0) {
            puVar4 = &_OBJC_CLASS___CIImage;
            _objc_allocWithZone();
            IVar5 = objc_stub::initWithCVPixelBuffer_((ID)puVar4,IVar5);
            puVar4 = &_OBJC_CLASS___CIContext;
            _objc_allocWithZone();
            IVar7 = objc_stub::init((ID)puVar4);
            objc_stub::extent(IVar5);
            IVar5 = objc_stub::createCGImage_fromRect_(IVar7,IVar5);
            goto LAB_1002d352c;
          }
          uVar13 = local_70;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          _swift_errorRelease(uVar13);
        }
      }
    }
  }
  IVar5 = 0;
LAB_1002d352c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(IVar5);
}



/* Address: 0x1002d357c | FUN_1002d357c */

undefined1  [16] FUN_1002d357c(void)

{
  return ZEXT816(0x100ec77c8);
}



/* Address: 0x1002d358c | FUN_1002d358c */

void FUN_1002d358c(void)

{
  return;
}



/* Address: 0x1002d3590 | FUN_1002d3590 */

void FUN_1002d3590(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1002d359c | FUN_1002d359c */

void FUN_1002d359c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcd80,&DAT_100ec7840);
  return;
}



/* Address: 0x1002d35b0 | FUN_1002d35b0 */

void FUN_1002d35b0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcdb0,&DAT_100ec7898);
  return;
}



/* Address: 0x1002d35c4 | FUN_1002d35c4 */

void FUN_1002d35c4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcda8,&DAT_100ec7868);
  return;
}



/* Address: 0x1002d35d8 | FUN_1002d35d8 */

void FUN_1002d35d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002d35e4 | FUN_1002d35e4 */

void FUN_1002d35e4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcdb8,&DAT_100ec7918);
  return;
}



/* Address: 0x1002d35f8 | FUN_1002d35f8 */

void FUN_1002d35f8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcdc0,&DAT_100ec7998);
  return;
}



/* Address: 0x1002d360c | FUN_1002d360c */

void FUN_1002d360c(void)

{
  FUN_100003a00(&DAT_100fbcdc8,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d774);
  return;
}



/* Address: 0x1002d3638 | FUN_1002d3638 */

void FUN_1002d3638(void)

{
  FUN_100003a00(&DAT_100fbcdd0,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d748);
  return;
}



/* Address: 0x1002d3664 | FUN_1002d3664 */

void FUN_1002d3664(void)

{
  FUN_100003a00(&DAT_100fbcdd8,FUN_1002d35c4,&TargetProtocolConformanceDescriptor_100c3d8c4);
  return;
}



/* Address: 0x1002d3690 | FUN_1002d3690 */

void FUN_1002d3690(void)

{
  FUN_100003a00(&DAT_100fbcde0,FUN_1002d35c4,&TargetProtocolConformanceDescriptor_100c3d86c);
  return;
}



/* Address: 0x1002d36bc | FUN_1002d36bc */

void FUN_1002d36bc(void)

{
  FUN_100003a00(&DAT_100fbcde8,FUN_1002d35b0,&TargetProtocolConformanceDescriptor_100c3d7e4);
  return;
}



/* Address: 0x1002d36e8 | FUN_1002d36e8 */

void FUN_1002d36e8(undefined8 *param_1)

{
  param_1[3] = &DAT_100ec7d10;
  param_1[4] = &PTR_PTR_100ec7cf0;
  *param_1 = 0x400;
  return;
}



/* Address: 0x1002d3708 | FUN_1002d3708 */

void FUN_1002d3708(long param_1)

{
  *(undefined **)(param_1 + 0x18) = &DAT_100ec77c8;
  *(undefined ***)(param_1 + 0x20) = &PTR_PTR_100ec77a0;
  return;
}



/* Address: 0x1002d3720 | FUN_1002d3720 */

undefined1  [16] FUN_1002d3720(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x7364726f77;
  return auVar1;
}



/* Address: 0x1002d3734 | FUN_1002d3734 */

void FUN_1002d3734(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x7364726f77 && param_3 == &DAT_e500000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x7364726f77,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1002d37b4 | FUN_1002d37b4 */

String FUN_1002d37b4(void)

{
  String SVar1;
  
  FUN_1002d392c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1002d37dc | FUN_1002d37dc */

String FUN_1002d37dc(void)

{
  String SVar1;
  
  FUN_1002d392c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1002d3804 | FUN_1002d3804 */

void FUN_1002d3804(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long extraout_x8;
  long lVar2;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100fbcdf8;
  FUN_1000037f0(&DAT_100fbcdf8,&DAT_100c3d950);
  lVar2 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1002d392c();
  Swift::Encoder::_container();
  local_58 = param_2;
  FUN_1000037f0(&DAT_100fbce08,&DAT_100c3d958);
  FUN_1002d4688(&DAT_100fbce10,FUN_1002d396c,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(&local_58);
  (**(code **)(lVar2 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1002d392c | FUN_1002d392c */

void FUN_1002d392c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbce00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3dbec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3dbec,&DAT_100ec7c30);
  DAT_100fbce00 = pTVar1;
  return;
}



/* Address: 0x1002d396c | FUN_1002d396c */

void FUN_1002d396c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbce18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3d9e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d9e0,&DAT_100ec7b00);
  DAT_100fbce18 = pTVar1;
  return;
}



/* Address: 0x1002d397c | FUN_1002d397c */

void FUN_1002d397c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3d9e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3d9e0,&DAT_100ec7b00);
  DAT_100fbce18 = pTVar1;
  return;
}



/* Address: 0x1002d39ac | FUN_1002d39ac */

void FUN_1002d39ac(void)

{
  FUN_1002d3d3c();
  return;
}



/* Address: 0x1002d39c0 | FUN_1002d39c0 */

void FUN_1002d39c0(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1002d3d3c();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1002d39e8 | FUN_1002d39e8 */

void FUN_1002d39e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1002d3804(param_1,*unaff_x20);
  return;
}



/* Address: 0x1002d3a00 | FUN_1002d3a00 */

undefined4 FUN_1002d3a00(void)

{
  long unaff_x20;
  
  return *(undefined4 *)(unaff_x20 + 0x10);
}



/* Address: 0x1002d3a08 | FUN_1002d3a08 */

void FUN_1002d3a08(undefined8 *param_1)

{
  undefined1 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x20);
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Address: 0x1002d3a20 | FUN_1002d3a20 */

void FUN_1002d3a20(undefined8 *param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  uVar2 = param_5[3];
  uStack_1c = (undefined4)param_5[1];
  uStack_18 = (undefined4)((ulong)param_5[1] >> 0x20);
  local_24 = (undefined4)*param_5;
  uStack_20 = (undefined4)((ulong)*param_5 >> 0x20);
  uStack_c = (undefined4)uVar2;
  local_14 = (undefined4)param_5[2];
  uStack_10 = (undefined4)((ulong)param_5[2] >> 0x20);
  uVar1 = *(undefined1 *)(param_5 + 4);
  *param_1 = param_3;
  param_1[1] = param_4;
  *(undefined4 *)(param_1 + 2) = param_2;
  *(ulong *)((long)param_1 + 0x1c) = CONCAT44(uStack_1c,uStack_20);
  *(ulong *)((long)param_1 + 0x14) = CONCAT44(local_24,uStack_28);
  *(ulong *)((long)param_1 + 0x2c) = CONCAT44(uStack_c,uStack_10);
  *(ulong *)((long)param_1 + 0x24) = CONCAT44(local_14,uStack_18);
  *(ulong *)((long)param_1 + 0x31) = CONCAT17(uVar1,(int7)((ulong)uVar2 >> 8));
  return;
}



/* Address: 0x1002d3a60 | FUN_1002d3a60 */

undefined1  [16] FUN_1002d3a60(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  cVar4 = *unaff_x20;
  puVar1 = (undefined1 *)0xea00000000006563;
  puVar3 = (undefined1 *)0x6e656469666e6f63;
  if (cVar4 != '\x01') {
    puVar1 = (undefined1 *)0xeb00000000786f42;
    puVar3 = (undefined1 *)0x676e69646e756f62;
  }
  puVar2 = &DAT_676e69727473;
  if (cVar4 != '\0') {
    puVar2 = puVar3;
  }
  puVar3 = &DAT_e600000000000000;
  if (cVar4 != '\0') {
    puVar3 = puVar1;
  }
  auVar5._8_8_ = puVar3;
  auVar5._0_8_ = puVar2;
  return auVar5;
}



/* Address: 0x1002d3ac4 | FUN_1002d3ac4 */

void FUN_1002d3ac4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1002d3ecc();
  *param_1 = param_2;
  return;
}



/* Address: 0x1002d3ae8 | FUN_1002d3ae8 */

String FUN_1002d3ae8(void)

{
  String SVar1;
  
  FUN_1002d3e8c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1002d3b10 | FUN_1002d3b10 */

String FUN_1002d3b10(void)

{
  String SVar1;
  
  FUN_1002d3e8c();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1002d3b38 | FUN_1002d3b38 */

/* WARNING: Removing unreachable block (ram,0x0001002d3c38) */

void FUN_1002d3b38(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_90 [15];
  undefined1 local_81;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined1 local_60;
  
  puVar1 = &DAT_100fbce20;
  FUN_1000037f0(&DAT_100fbce20,&DAT_100c3d960);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1002d3e8c();
  Swift::Encoder::_container();
  local_80 = local_80 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_80,puVar1);
  if (unaff_x21 == 0) {
    local_80 = CONCAT71(local_80._1_7_,1);
    Swift::KeyedEncodingContainer::_encode(*(undefined4 *)(unaff_x20 + 2),&local_80,puVar1);
    uStack_78 = unaff_x20[4];
    local_80 = unaff_x20[3];
    uStack_68 = unaff_x20[6];
    uStack_70 = unaff_x20[5];
    local_60 = *(undefined1 *)(unaff_x20 + 7);
    local_81 = 2;
    uVar2 = 0;
    FUN_1002d359c(0);
    puVar3 = &DAT_100fbce30;
    FUN_1002d45d0(&DAT_100fbce30,PTR_CoreGraphics____C__CGRect_>Swift__Encodable_100eaf278);
    Swift::KeyedEncodingContainer::_encodeIfPresent(&local_80,&local_81,puVar1,uVar2,puVar3);
    (**(code **)(lVar4 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  else {
    (**(code **)(lVar4 + 8))(auStack_90 + -extraout_x8,puVar1);
  }
  return;
}



/* Address: 0x1002d3ce0 | FUN_1002d3ce0 */

void FUN_1002d3ce0(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 uStack_38;
  undefined7 uStack_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_1002d3fe8(&local_60);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_58;
    *param_1 = local_60;
    param_1[3] = uStack_48;
    param_1[2] = uStack_50;
    param_1[5] = CONCAT71(uStack_37,uStack_38);
    param_1[4] = local_40;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_2f;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_30,uStack_37);
  }
  return;
}



/* Address: 0x1002d3d28 | FUN_1002d3d28 */

void FUN_1002d3d28(void)

{
  FUN_1002d3b38();
  return;
}



/* Address: 0x1002d3d3c | FUN_1002d3d3c */

long FUN_1002d3d3c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  puVar1 = &DAT_100fbce78;
  FUN_1000037f0(&DAT_100fbce78,&DAT_100c3dc48);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1002d392c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    puVar3 = &DAT_100fbce08;
    FUN_1000037f0(&DAT_100fbce08,&DAT_100c3d958);
    FUN_1002d4688(&DAT_100fbce80,FUN_1002d46f8,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(&local_58,puVar3);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
    local_58 = lVar2;
  }
  return local_58;
}



/* Address: 0x1002d3e8c | FUN_1002d3e8c */

void FUN_1002d3e8c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbce28 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c3db9c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3db9c,&DAT_100ec7ba0);
  DAT_100fbce28 = pTVar1;
  return;
}



/* Address: 0x1002d3ecc | FUN_1002d3ecc */

undefined4 FUN_1002d3ecc(undefined1 *param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != &DAT_676e69727473 || param_2 != &DAT_e600000000000000) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x676e69727473,(_StringGuts)0xe600000000000000,expecting);
    if (!bVar1) {
      if (((param_1 != (undefined1 *)0x6e656469666e6f63) ||
          (param_2 != (undefined1 *)0xea00000000006563)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x6e656469666e6f63,(_StringGuts)0xea00000000006563,
                             expecting), !bVar1)) {
        if ((param_1 == (undefined1 *)0x676e69646e756f62) &&
           (param_2 == (undefined1 *)0xeb00000000786f42)) {
          _swift_bridgeObjectRelease(0xeb00000000786f42);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x676e69646e756f62,(_StringGuts)0xeb00000000786f42,expecting
                          );
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



/* Address: 0x1002d3fe8 | FUN_1002d3fe8 */

/* WARNING: Removing unreachable block (ram,0x0001002d4180) */
/* WARNING: Removing unreachable block (ram,0x0001002d40bc) */

void FUN_1002d3fe8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_160 [64];
  char *local_120;
  void *pvStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 uStack_f8;
  undefined7 local_f7;
  undefined1 uStack_f0;
  undefined8 uStack_ef;
  undefined1 local_e1;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  String local_b0;
  float local_a0;
  undefined4 uStack_9c;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 local_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  undefined1 local_78;
  
  puVar1 = &DAT_100fbce68;
  FUN_1000037f0(&DAT_100fbce68,&DAT_100c3dc40);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1002d3e8c();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_120 = (char *)((ulong)local_120 & 0xffffffffffffff00);
    local_b0 = Swift::KeyedDecodingContainer::_decode(&local_120,puVar1);
    local_120 = (char *)CONCAT71(local_120._1_7_,1);
    local_a0 = Swift::KeyedDecodingContainer::_decode(&local_120,puVar1);
    uVar2 = 0;
    FUN_1002d359c(0);
    local_e1 = 2;
    puVar3 = &DAT_100fbce70;
    FUN_1002d45d0(&DAT_100fbce70,PTR_CoreGraphics____C__CGRect_>Swift__Decodable_100eaf280);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_e0,uVar2,&local_e1,puVar1,uVar2,puVar3);
    (**(code **)(lVar4 + 8))(auStack_160 + -extraout_x8,puVar1);
    uStack_90 = uStack_d8;
    local_98 = local_e0;
    uStack_80 = (undefined1)uStack_c8;
    uStack_7f = (undefined7)((ulong)uStack_c8 >> 8);
    local_88 = (undefined1)uStack_d0;
    uStack_87 = (undefined7)((ulong)uStack_d0 >> 8);
    local_78 = local_c0;
    local_110 = CONCAT44(uStack_9c,local_a0);
    pvStack_118 = local_b0.bridgeObject;
    local_120 = local_b0.str;
    uStack_108 = local_e0;
    uStack_100 = uStack_d8;
    uStack_ef = CONCAT17(local_c0,uStack_7f);
    local_f7 = uStack_87;
    uStack_f0 = uStack_80;
    uStack_f8 = local_88;
    FUN_1002d4610(&local_120,auStack_160);
    FUN_100004594(param_2);
    FUN_1002d4660(&local_b0);
    param_1[1] = pvStack_118;
    *param_1 = local_120;
    param_1[3] = uStack_108;
    param_1[2] = local_110;
    param_1[5] = CONCAT71(local_f7,uStack_f8);
    param_1[4] = uStack_100;
    *(undefined8 *)((long)param_1 + 0x31) = uStack_ef;
    *(ulong *)((long)param_1 + 0x29) = CONCAT17(uStack_f0,local_f7);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1002d4228 | FUN_1002d4228 */

undefined1  [16] FUN_1002d4228(void)

{
  return ZEXT816(0x100ec7a80);
}



/* Address: 0x1002d4238 | FUN_1002d4238 */

undefined8 * FUN_1002d4238(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1002d4284 | FUN_1002d4284 */

undefined8 * FUN_1002d4284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = param_2[4];
  uVar1 = param_2[3];
  uVar4 = param_2[6];
  uVar3 = param_2[5];
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  param_1[6] = uVar4;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x1002d42f0 | FUN_1002d42f0 */

void FUN_1002d42f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002d430c | FUN_1002d430c */

undefined8 * FUN_1002d430c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1002d4360 | FUN_1002d4360 */

int FUN_1002d4360(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1002d43a8 | FUN_1002d43a8 */

void FUN_1002d43a8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1002d43f8 | FUN_1002d43f8 */

undefined1  [16] FUN_1002d43f8(void)

{
  return ZEXT816(0x100ec7b00);
}



/* Address: 0x1002d4408 | FUN_1002d4408 */

void FUN_1002d4408(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1002d4414 | FUN_1002d4414 */

undefined1  [16] FUN_1002d4414(void)

{
  return ZEXT816(0x100ec7ba0);
}



/* Address: 0x1002d4424 | FUN_1002d4424 */

void FUN_1002d4424(void)

{
  return;
}



/* Address: 0x1002d4428 | FUN_1002d4428 */

undefined1  [16] FUN_1002d4428(void)

{
  return ZEXT816(0x100ec7c30);
}


