/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10012c140 | FUN_10012c140 */

undefined1 FUN_10012c140(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  undefined1 local_90;
  undefined7 uStack_8f;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  iVar3 = (int)&local_90;
  uVar4 = 0;
  local_60 = *param_1;
  uVar1 = param_1[1];
  uStack_58 = uVar1;
  FUN_10000cbfc(param_2,auStack_50);
  FUN_10000cbfc(auStack_50,auStack_80);
  _swift_bridgeObjectRetain(uVar1);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  _swift_dynamicCast(&local_90,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,
                     PTR___type_metadata_for_Swift_Bool_100eac570,6);
  if (iVar3 == 0) {
    FUN_10000cbfc(auStack_50,auStack_80);
    FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
    _swift_dynamicCast(&local_90,auStack_80,puVar2 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if ((uVar4 & 1) == 0) {
      local_90 = 0;
    }
    else {
      _swift_bridgeObjectRelease(uStack_88);
      uVar4 = CONCAT71(uStack_8f,local_90) & 0xffffffffffff;
      if ((uStack_88 & 0x2000000000000000) != 0) {
        uVar4 = uStack_88 >> 0x38 & 0xf;
      }
      local_90 = uVar4 != 0;
    }
  }
  else {
    FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
  }
  return local_90;
}



/* Address: 0x10012c258 | FUN_10012c258 */

bool FUN_10012c258(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ulong uVar3;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  long local_98;
  long local_90;
  ulong local_88;
  undefined1 auStack_80 [32];
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 auStack_50 [32];
  
  local_60 = *param_1;
  uVar1 = param_1[1];
  uStack_58 = uVar1;
  FUN_10000cbfc(param_2,auStack_50);
  FUN_1000f8cac(&local_60,&local_90,&DAT_100fae908,&DAT_100c2eec0);
  if (*(long *)(param_3 + 0x10) == 0) {
    uStack_a8 = 0;
    local_b0 = 0;
    local_98 = 0;
    uStack_a0 = 0;
    _swift_bridgeObjectRetain(uVar1);
  }
  else {
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRetain(param_3);
    uVar3 = local_88;
    FUN_100071370(local_90);
    if ((uVar3 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      uStack_a8 = 0;
      local_b0 = 0;
      local_98 = 0;
      uStack_a0 = 0;
    }
    else {
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + local_90 * 0x20,&local_b0);
      _swift_bridgeObjectRelease(param_3);
    }
  }
  FUN_1000fb4c4(&local_60,&DAT_100fae908,&DAT_100c2eec0);
  _swift_bridgeObjectRelease(local_88);
  bVar2 = local_98 != 0;
  FUN_1000fb4c4(&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  FUN_100004594(auStack_80);
  return bVar2;
}



/* Address: 0x10012c388 | FUN_10012c388 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012c388(void)

{
  byte bVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  DispatchQoS DVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  undefined *unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_b0 [8];
  undefined *local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar11 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  IVar4 = *(ID *)(unaff_x20 + 0x108);
  objc_stub::lock(IVar4);
  puVar5 = &DAT_100c2eec8;
  _swift_getKeyPath();
  puVar6 = puVar5;
  FUN_10012fef0();
  _swift_release(puVar5);
  if (puVar6 != (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar6);
    unaff_x20[0x129] = 1;
  }
  objc_stub::unlock(IVar4);
  if ((*(byte *)(*(long *)(unaff_x20 + 0x20) + PostHogConfig::disableRemoteConfigForTesting) & 1) ==
      0) {
    IVar4 = *(ID *)(unaff_x20 + 0x108);
    objc_stub::lock(IVar4);
    if (*(long *)(unaff_x20 + 0x120) == 0) {
      objc_stub::unlock(IVar4);
    }
    else {
      bVar1 = unaff_x20[0x128];
      objc_stub::unlock(IVar4);
      if ((bVar1 & 1) != 0) {
        return;
      }
    }
    local_a0 = *(undefined8 *)(unaff_x20 + 0x1b0);
    local_70 = FUN_100134440;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100eb8690;
    aBlock = __Block_copy(&local_90);
    DVar7.unknown = unaff_x20;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar7);
    local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar8 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar5 = &DAT_100fafdf8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar9 = &DAT_100fafe00;
    local_a8 = DVar3.unknown;
    FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(puVar10,&local_98,puVar5,puVar9,DVar2.unknown,puVar8);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar12 + 8))(puVar10,DVar2.unknown);
    (**(code **)(lVar11 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),local_a8);
    _swift_release(unaff_x20);
  }
  return;
}



/* Address: 0x10012c620 | FUN_10012c620 */

void FUN_10012c620(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ID self;
  
  puVar1 = &DAT_100eb86c8;
  _swift_allocObject(&DAT_100eb86c8,0x18,7);
  _swift_weakInit(puVar1 + 0x10,param_1);
  self = *(ID *)(param_1 + 0x110);
  _swift_retain(puVar1);
  objc_stub::lock(self);
  if ((*(byte *)(param_1 + 0x118) & 1) == 0) {
    *(undefined1 *)(param_1 + 0x118) = 1;
  }
  objc_stub::unlock(self);
  puVar2 = &DAT_100eb86f0;
  _swift_allocObject(&DAT_100eb86f0,0x28,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = FUN_10013446c;
  *(undefined **)(puVar2 + 0x20) = puVar1;
  _swift_retain(param_1);
  _swift_retain(puVar1);
  FUN_10011c74c(FUN_1001344a8,puVar2);
  _swift_release_n(puVar1,2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10012c6f0 | FUN_10012c6f0 */

void FUN_10012c6f0(long param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  ID self;
  String SVar8;
  String SVar9;
  String separator;
  String separator_00;
  byte local_79;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    if (param_1 == 0) {
      if (DAT_101057340 == '\x01') {
        pcVar5 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar5[0x18] = '\x02';
        pcVar5[0x19] = '\0';
        pcVar5[0x1a] = '\0';
        pcVar5[0x1b] = '\0';
        pcVar5[0x1c] = '\0';
        pcVar5[0x1d] = '\0';
        pcVar5[0x1e] = '\0';
        pcVar5[0x1f] = '\0';
        pcVar5[0x10] = '\x01';
        pcVar5[0x11] = '\0';
        pcVar5[0x12] = '\0';
        pcVar5[0x13] = '\0';
        pcVar5[0x14] = '\0';
        pcVar5[0x15] = '\0';
        pcVar5[0x16] = '\0';
        pcVar5[0x17] = '\0';
        *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar5[0x20] = 'C';
        pcVar5[0x21] = '\0';
        pcVar5[0x22] = '\0';
        pcVar5[0x23] = '\0';
        pcVar5[0x24] = '\0';
        pcVar5[0x25] = '\0';
        pcVar5[0x26] = '\0';
        pcVar5[0x27] = -0x30;
        pcVar5[0x28] = -0x50;
        pcVar5[0x29] = ')';
        pcVar5[0x2a] = -0x27;
        pcVar5[0x2b] = '\0';
        pcVar5[0x2c] = '\x01';
        pcVar5[0x2d] = '\0';
        pcVar5[0x2e] = '\0';
        pcVar5[0x2f] = -0x80;
        SVar9.bridgeObject = (void *)0x20;
        SVar9.str = pcVar5;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar9,separator_00);
        _swift_release(pcVar5);
      }
      FUN_10012f538(0);
    }
    else {
      if (*(long *)(param_1 + 0x10) != 0) {
        lVar1 = *(long *)(param_2 + 0x10);
        uVar6 = *(ulong *)(param_2 + 0x18);
        _swift_bridgeObjectRetain(param_1);
        FUN_100071370(lVar1);
        if ((uVar6 & 1) == 0) {
          _swift_bridgeObjectRelease(param_1);
        }
        else {
          FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar1 * 0x20,auStack_78);
          _swift_bridgeObjectRelease(param_1);
          pbVar2 = &local_79;
          _swift_dynamicCast(pbVar2,auStack_78,PTR___type_metadata_for_Any_100eae0c0 + 8,
                             PTR___type_metadata_for_Swift_Bool_100eac570,6);
          if ((((ulong)pbVar2 & 1) != 0) && ((local_79 & 1) == 0)) {
            if (DAT_101057340 == '\x01') {
              pcVar5 = &DAT_100fae660;
              FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
              _swift_allocObject();
              pcVar5[0x18] = '\x02';
              pcVar5[0x19] = '\0';
              pcVar5[0x1a] = '\0';
              pcVar5[0x1b] = '\0';
              pcVar5[0x1c] = '\0';
              pcVar5[0x1d] = '\0';
              pcVar5[0x1e] = '\0';
              pcVar5[0x1f] = '\0';
              pcVar5[0x10] = '\x01';
              pcVar5[0x11] = '\0';
              pcVar5[0x12] = '\0';
              pcVar5[0x13] = '\0';
              pcVar5[0x14] = '\0';
              pcVar5[0x15] = '\0';
              pcVar5[0x16] = '\0';
              pcVar5[0x17] = '\0';
              *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
              pcVar5[0x20] = 'M';
              pcVar5[0x21] = '\0';
              pcVar5[0x22] = '\0';
              pcVar5[0x23] = '\0';
              pcVar5[0x24] = '\0';
              pcVar5[0x25] = '\0';
              pcVar5[0x26] = '\0';
              pcVar5[0x27] = -0x30;
              pcVar5[0x28] = '\0';
              pcVar5[0x29] = '*';
              pcVar5[0x2a] = -0x27;
              pcVar5[0x2b] = '\0';
              pcVar5[0x2c] = '\x01';
              pcVar5[0x2d] = '\0';
              pcVar5[0x2e] = '\0';
              pcVar5[0x2f] = -0x80;
              SVar8.bridgeObject = (void *)0x20;
              SVar8.str = pcVar5;
              separator.bridgeObject = (void *)0xa;
              separator.str = (char *)0xe100000000000000;
              Swift::_print(SVar8,separator);
              _swift_release(pcVar5);
            }
            FUN_100130e14();
            FUN_10012fc3c();
            self = *(ID *)(param_2 + 0x60);
            objc_stub::lock(self);
            puVar3 = &DAT_100c2ee30;
            _swift_getKeyPath(&DAT_100c2ee30);
            puVar4 = puVar3;
            FUN_10012fef0();
            _swift_release(puVar3);
            objc_stub::unlock(self);
            FUN_10012f538(puVar4);
            _swift_release(param_2);
            _swift_bridgeObjectRelease(puVar4);
            return;
          }
        }
      }
      lVar1 = PostHogConfig::preloadFeatureFlags;
      lVar7 = *(long *)(param_2 + 0x20);
      _swift_beginAccess(lVar7 + PostHogConfig::preloadFeatureFlags,auStack_78,0,0);
      if (*(char *)(lVar7 + lVar1) == '\x01') {
        FUN_10012c980();
      }
    }
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x10012c980 | FUN_10012c980 */

void FUN_10012c980(void)

{
  long lVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  DispatchQoS DVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined *unaff_x20;
  long lVar9;
  long lVar10;
  DispatchWorkItemFlags qos;
  ID self;
  long lVar11;
  long lVar12;
  undefined *local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined1 auStack_78 [24];
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar12 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  qos.unknown = (undefined *)(lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  puVar4 = &DAT_100c2ee30;
  _swift_getKeyPath(&DAT_100c2ee30);
  puVar5 = puVar4;
  FUN_10012fef0();
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(puVar5);
  objc_stub::unlock(self);
  lVar1 = PostHogConfig::preloadFeatureFlags;
  lVar11 = *(long *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar11 + PostHogConfig::preloadFeatureFlags,auStack_78,0,0);
  if (*(char *)(lVar11 + lVar1) == '\x01') {
    local_b8 = *(undefined8 *)(unaff_x20 + 0x1b0);
    local_88 = FUN_100134434;
    local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_a0 = 0x42000000;
    local_98 = FUN_100030410;
    puStack_90 = &DAT_100eb8668;
    aBlock = __Block_copy(&local_a8);
    DVar6.unknown = unaff_x20;
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(DVar6);
    local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar7 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar4 = &DAT_100fafdf8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar8 = &DAT_100fafe00;
    local_c0 = DVar3.unknown;
    FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(lVar9,&local_b0,puVar4,puVar8,DVar2.unknown,puVar7);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    __Block_release(aBlock);
    (**(code **)(lVar12 + 8))(lVar9,DVar2.unknown);
    (**(code **)(lVar10 + 8))(qos.unknown,local_c0);
    _swift_release(unaff_x20);
  }
  return;
}



/* Address: 0x10012cbd4 | FUN_10012cbd4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012cbd4(undefined *param_1,undefined8 param_2,long param_3,code *param_4,
                  undefined8 param_5)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  undefined *puVar4;
  OS_dispatch_queue *pOVar5;
  void *aBlock;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar8;
  ID IVar9;
  undefined8 uVar10;
  DispatchWorkItemFlags qos;
  long lVar11;
  long local_c0;
  OS_dispatch_queue *local_b8;
  long local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *local_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar8 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  lVar11 = (long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar2.unknown + -8) + 0x40));
  qos.unknown = (undefined *)(lVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  if (param_1 != (undefined *)0x0) {
    IVar9 = *(ID *)(param_3 + 0x108);
    local_b0 = extraout_x12;
    local_a8 = DVar2.unknown;
    local_a0 = param_5;
    _swift_bridgeObjectRetain(param_1);
    local_98 = param_4;
    objc_stub::lock(IVar9);
    uVar10 = *(undefined8 *)(param_3 + 0x120);
    *(undefined **)(param_3 + 0x120) = param_1;
    _swift_bridgeObjectRetain_n(param_1,2);
    _swift_bridgeObjectRelease(uVar10);
    puVar3 = param_1;
    FUN_100137da0();
    puVar4 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    local_90 = puVar3;
    local_78 = puVar4;
    FUN_10015ab00(0x12,&local_90);
    FUN_100004594(&local_90);
    objc_stub::unlock(IVar9);
    FUN_10012ef5c(param_1);
    _swift_bridgeObjectRelease(param_1);
    pOVar5 = (OS_dispatch_queue *)0x0;
    FUN_1000f8a74();
    local_b8 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar5);
    puVar4 = &DAT_100eb8718;
    _swift_allocObject(&DAT_100eb8718,0x20,7);
    *(long *)(puVar4 + 0x10) = param_3;
    *(undefined **)(puVar4 + 0x18) = param_1;
    local_70 = FUN_1001344e0;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    local_78 = &DAT_100eb8730;
    local_68 = puVar4;
    aBlock = __Block_copy(&local_90);
    DVar2.unknown = local_68;
    _swift_retain(param_3);
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar2);
    local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar6 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar4 = &DAT_100fafdf8;
    local_c0 = lVar8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar7 = &DAT_100fafe00;
    FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                  PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
    Swift::SetAlgebra::_init(lVar11,&local_90,puVar4,puVar7,DVar1.unknown,puVar6);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
    param_4 = local_98;
    __Block_release(aBlock);
    (**(code **)(local_c0 + 8))(lVar11,DVar1.unknown);
    (**(code **)(local_b0 + 8))(qos.unknown,local_a8);
  }
  IVar9 = *(ID *)(param_3 + 0x108);
  objc_stub::lock(IVar9);
  *(undefined1 *)(param_3 + 0x128) = 1;
  objc_stub::unlock(IVar9);
  IVar9 = *(ID *)(param_3 + 0x110);
  objc_stub::lock(IVar9);
  *(undefined1 *)(param_3 + 0x118) = 0;
  objc_stub::unlock(IVar9);
  if (param_4 != (code *)0x0) {
    (*param_4)(param_1);
  }
  return;
}



/* Address: 0x10012cef4 | FUN_10012cef4 */

void FUN_10012cef4(code *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined **ppuVar2;
  char *pcVar3;
  ID IVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 extraout_x1;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  ID IVar12;
  undefined *puVar13;
  long lVar14;
  code *pcVar15;
  ID IVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  String SVar20;
  String separator;
  undefined8 local_210;
  long local_208;
  ulong local_1f8;
  undefined *local_1e0;
  long local_1d8;
  undefined1 auStack_1d0 [72];
  undefined8 local_188;
  long lStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  long local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  long lStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  lVar11 = PostHogConfig::storageManager;
  if (*(char *)(unaff_x20 + 400) != '\x01') {
    return;
  }
  lVar14 = *(long *)(unaff_x20 + 0x20);
  _swift_beginAccess(lVar14 + PostHogConfig::storageManager,auStack_88,0,0);
  lVar11 = *(long *)(lVar14 + lVar11);
  if (lVar11 == 0) {
    if (DAT_101057340 == '\x01') {
      pcVar3 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar3[0x18] = '\x02';
      pcVar3[0x19] = '\0';
      pcVar3[0x1a] = '\0';
      pcVar3[0x1b] = '\0';
      pcVar3[0x1c] = '\0';
      pcVar3[0x1d] = '\0';
      pcVar3[0x1e] = '\0';
      pcVar3[0x1f] = '\0';
      pcVar3[0x10] = '\x01';
      pcVar3[0x11] = '\0';
      pcVar3[0x12] = '\0';
      pcVar3[0x13] = '\0';
      pcVar3[0x14] = '\0';
      pcVar3[0x15] = '\0';
      pcVar3[0x16] = '\0';
      pcVar3[0x17] = '\0';
      *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar3[0x20] = 'R';
      pcVar3[0x21] = '\0';
      pcVar3[0x22] = '\0';
      pcVar3[0x23] = '\0';
      pcVar3[0x24] = '\0';
      pcVar3[0x25] = '\0';
      pcVar3[0x26] = '\0';
      pcVar3[0x27] = -0x30;
      pcVar3[0x28] = 'P';
      pcVar3[0x29] = '*';
      pcVar3[0x2a] = -0x27;
      pcVar3[0x2b] = '\0';
      pcVar3[0x2c] = '\x01';
      pcVar3[0x2d] = '\0';
      pcVar3[0x2e] = '\0';
      pcVar3[0x2f] = -0x80;
      SVar20.bridgeObject = (void *)0x20;
      SVar20.str = pcVar3;
      separator.bridgeObject = (void *)0xa;
      separator.str = (char *)0xe100000000000000;
      Swift::_print(SVar20,separator);
      _swift_release(pcVar3);
    }
    if (param_1 == (code *)0x0) {
      return;
    }
    (*param_1)(0);
    return;
  }
  IVar16 = *(ID *)(unaff_x20 + 0x60);
  _swift_retain(lVar11);
  objc_stub::lock(IVar16);
  FUN_10015a838(&local_f0,0xc);
  if (local_d8 == 0) {
    FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar13 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    ppuVar2 = &local_140;
    _swift_dynamicCast(ppuVar2,&local_f0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar13,6);
    if (((ulong)ppuVar2 & 1) != 0) {
      local_1e0 = local_140;
      FUN_100138efc();
      _swift_bridgeObjectRelease(local_140);
      if (local_1e0 != (undefined *)0x0) goto LAB_10012d0a0;
    }
  }
  local_1e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8280();
LAB_10012d0a0:
  IVar4 = objc_stub::unlock(IVar16);
  uVar9 = extraout_x1;
  FUN_10015cd34();
  lVar19 = PostHogConfig::reuseAnonymousId;
  _swift_beginAccess(lVar14 + PostHogConfig::reuseAnonymousId,auStack_a0,0,0);
  uVar17 = 0;
  local_1d8 = 0;
  if ((*(byte *)(lVar14 + lVar19) & 1) == 0) {
    IVar12 = *(ID *)(lVar11 + 0x18);
    objc_stub::lock(IVar12);
    FUN_10015c958(lVar11);
    objc_stub::unlock(IVar12);
    local_1d8 = *(long *)(lVar11 + 0x70);
    if (local_1d8 == 0) {
      uVar17 = 0;
      local_1d8 = -0x2000000000000000;
    }
    else {
      uVar17 = *(undefined8 *)(lVar11 + 0x68);
    }
    _swift_bridgeObjectRetain();
  }
  IVar12 = *(ID *)(lVar11 + 0x28);
  objc_stub::lock(IVar12);
  FUN_10015cc1c(lVar11);
  objc_stub::unlock(IVar12);
  uVar5 = *(ulong *)(lVar11 + 0x80);
  if (uVar5 == 0) {
    local_1f8 = 0;
    uVar5 = 0xe000000000000000;
  }
  else {
    local_1f8 = *(ulong *)(lVar11 + 0x78);
  }
  uVar1 = local_1f8 & 0xffffffffffff;
  if ((uVar5 & 0x2000000000000000) != 0) {
    uVar1 = uVar5 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain();
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease(uVar5);
    uVar5 = 0;
    local_1f8 = 0;
  }
  if (param_1 == (code *)0x0) {
    puVar13 = (undefined *)0x0;
    pcVar15 = FUN_100004520;
  }
  else {
    puVar13 = &DAT_100eb8808;
    _swift_allocObject(&DAT_100eb8808,0x20,7);
    *(code **)(puVar13 + 0x10) = param_1;
    *(undefined8 *)(puVar13 + 0x18) = param_2;
    pcVar15 = thunk_FUN_100134360;
  }
  puVar6 = &DAT_100eb8768;
  _swift_allocObject(&DAT_100eb8768,0x20,7);
  *(code **)(puVar6 + 0x10) = pcVar15;
  *(undefined **)(puVar6 + 0x18) = puVar13;
  IVar12 = *(ID *)(unaff_x20 + 0x58);
  FUN_100011128(param_1,param_2);
  objc_stub::lock(IVar12);
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    uVar10 = *(undefined8 *)(unaff_x20 + 0xb0);
    lVar14 = *(long *)(unaff_x20 + 0x78);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x70);
    local_d8 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_e0 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x98);
    local_d0 = *(undefined8 *)(unaff_x20 + 0x90);
    lVar19 = *(long *)(unaff_x20 + 0xa8);
    uStack_c0 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_f0 = uVar18;
    lStack_e8 = lVar14;
    local_b8 = lVar19;
    uStack_b0 = uVar10;
    if (lVar14 == 0) {
      local_210 = 0;
      local_208 = 0;
    }
    else {
      _swift_retain();
      local_210 = uVar10;
      local_208 = lVar19;
    }
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x88);
    local_178 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_160 = *(undefined8 *)(unaff_x20 + 0x98);
    local_168 = *(undefined8 *)(unaff_x20 + 0x90);
    local_158 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_188 = uVar18;
    lStack_180 = lVar14;
    local_150 = lVar19;
    uStack_148 = uVar10;
    FUN_1000f8cac(&local_f0,auStack_1d0,&DAT_100fb09e0,&DAT_100c2ee80);
    FUN_1000fb4c4(&local_188,&DAT_100fb09e0,&DAT_100c2ee80);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x98);
    local_120 = *(undefined8 *)(unaff_x20 + 0x90);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0xa8);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0xa0);
    local_100 = *(undefined8 *)(unaff_x20 + 0xb0);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x78);
    local_140 = *(undefined **)(unaff_x20 + 0x70);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x80);
    *(ID *)(unaff_x20 + 0x70) = IVar4;
    *(undefined8 *)(unaff_x20 + 0x78) = uVar9;
    *(undefined8 *)(unaff_x20 + 0x80) = uVar17;
    *(long *)(unaff_x20 + 0x88) = local_1d8;
    *(ulong *)(unaff_x20 + 0x90) = local_1f8;
    *(ulong *)(unaff_x20 + 0x98) = uVar5;
    *(undefined **)(unaff_x20 + 0xa0) = local_1e0;
    *(code **)(unaff_x20 + 0xa8) = thunk_FUN_100134330;
    *(undefined **)(unaff_x20 + 0xb0) = puVar6;
    _swift_bridgeObjectRetain(uVar5);
    _swift_bridgeObjectRetain(uVar9);
    _swift_bridgeObjectRetain(local_1e0);
    _swift_retain(puVar6);
    _swift_bridgeObjectRetain(local_1d8);
    FUN_1000fb4c4(&local_140,&DAT_100fb09e0,&DAT_100c2ee80);
    if (local_208 == 0) {
      objc_stub::unlock(IVar12);
      puVar13 = (undefined *)0x0;
      pcVar15 = (code *)0x0;
    }
    else {
      puVar7 = &DAT_100eb87e0;
      _swift_allocObject(&DAT_100eb87e0,0x20,7);
      *(long *)(puVar7 + 0x10) = local_208;
      *(undefined8 *)(puVar7 + 0x18) = local_210;
      objc_stub::unlock(IVar12);
      puVar13 = &DAT_100eb87b8;
      _swift_allocObject(&DAT_100eb87b8,0x20,7);
      *(code **)(puVar13 + 0x10) = thunk_FUN_100134360;
      *(undefined **)(puVar13 + 0x18) = puVar7;
      pcVar15 = thunk_FUN_100134330;
    }
    objc_stub::lock(IVar16);
    puVar7 = &DAT_100c2ee30;
    _swift_getKeyPath(&DAT_100c2ee30);
    puVar8 = puVar7;
    FUN_10012fef0();
    _swift_release(puVar7);
    objc_stub::unlock(IVar16);
    if (local_208 == 0) {
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(local_1d8);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(local_1e0);
      _swift_release(lVar11);
      _swift_release(puVar6);
    }
    else {
      _swift_retain(puVar13);
      (*pcVar15)(puVar8);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(local_1d8);
      _swift_bridgeObjectRelease(uVar5);
      _swift_bridgeObjectRelease(local_1e0);
      _swift_release(lVar11);
      _swift_release(puVar6);
      FUN_100004550(pcVar15,puVar13);
      FUN_100004550(pcVar15,puVar13);
    }
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x68) = 1;
    objc_stub::unlock(IVar12);
    IVar16 = *(ID *)(unaff_x20 + 0x170);
    objc_stub::lock(IVar16);
    FUN_100130518(&local_f0);
    objc_stub::unlock(IVar16);
    IVar16 = *(ID *)(unaff_x20 + 0x180);
    objc_stub::lock(IVar16);
    _swift_beginAccess(unaff_x20 + 0x188,&local_f0,0,0);
    lVar14 = *(long *)(unaff_x20 + 0x188);
    _swift_bridgeObjectRetain(lVar14);
    objc_stub::unlock(IVar16);
    if (*(long *)(lVar14 + 0x10) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      lVar14 = 0;
    }
    puVar13 = &DAT_100eb8790;
    _swift_allocObject(&DAT_100eb8790,0x28,7);
    *(long *)(puVar13 + 0x10) = unaff_x20;
    *(code **)(puVar13 + 0x18) = thunk_FUN_100134330;
    *(undefined **)(puVar13 + 0x20) = puVar6;
    _swift_retain(puVar6);
    _swift_retain();
    FUN_100119fc0(IVar4,uVar9,uVar17,local_1d8,local_1f8,uVar5,local_1e0,local_f0,lVar14,
                  thunk_FUN_100134324,puVar13);
    _swift_bridgeObjectRelease(local_f0);
    _swift_release(puVar13);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(local_1e0);
    _swift_release(lVar11);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(uVar5);
    _swift_bridgeObjectRelease(local_1d8);
    _swift_bridgeObjectRelease(lVar14);
    FUN_100004550(0,0);
  }
  return;
}



/* Address: 0x10012d5e0 | FUN_10012d5e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012d5e0(void)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  long unaff_x20;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68 [5];
  
  IVar1 = *(ID *)(unaff_x20 + 0x108);
  objc_stub::lock(IVar1);
  FUN_10012d7c0(local_68);
  objc_stub::unlock(IVar1);
  IVar1 = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(IVar1);
  puVar2 = &DAT_100c2ee30;
  _swift_getKeyPath();
  puVar3 = puVar2;
  FUN_10012fef0();
  _swift_release(puVar2);
  objc_stub::unlock(IVar1);
  if (local_68[0] == 0) {
    _swift_bridgeObjectRelease(puVar3);
    return;
  }
  if (*(long *)(local_68[0] + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_68[0]);
    lVar4 = 0x746e696f70646e65;
    uVar8 = 0;
    FUN_100071370(0x746e696f70646e65);
    lVar6 = local_68[0];
    if ((uVar8 & 1) != 0) {
      FUN_10000cbfc(*(long *)(local_68[0] + 0x38) + lVar4 * 0x20,local_68);
      _swift_bridgeObjectRelease(local_68[0]);
      puVar5 = &local_78;
      _swift_dynamicCast(puVar5,local_68,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if (((ulong)puVar5 & 1) == 0) goto LAB_10012d73c;
      puVar5 = (undefined8 *)(*(long *)(unaff_x20 + 0x20) + PostHogConfig::snapshotEndpoint);
      _swift_beginAccess(puVar5,local_68,1,0);
      lVar6 = puVar5[1];
      *puVar5 = local_78;
      puVar5[1] = uStack_70;
    }
    _swift_bridgeObjectRelease(lVar6);
  }
LAB_10012d73c:
  IVar1 = *(ID *)(unaff_x20 + 0xb8);
  objc_stub::lock(IVar1);
  puVar2 = puVar3;
  if (puVar3 == (undefined *)0x0) {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  _swift_bridgeObjectRetain(puVar3);
  puVar7 = puVar2;
  FUN_10012d8f0(puVar2,local_68[0]);
  _swift_bridgeObjectRelease(puVar2);
  *(byte *)(unaff_x20 + 0xc0) = (byte)puVar7 & 1;
  objc_stub::unlock(IVar1);
  _swift_bridgeObjectRelease(local_68[0]);
  _swift_bridgeObjectRelease(puVar3);
  return;
}



/* Address: 0x10012d7c0 | FUN_10012d7c0 */

void FUN_10012d7c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = &DAT_100c2eec8;
  _swift_getKeyPath();
  puVar2 = puVar1;
  FUN_10012fef0();
  _swift_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    if (*(long *)(puVar2 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar2);
      uVar5 = 0;
      lVar3 = -0x2ffffffffffffff0;
      FUN_100071370(0xd000000000000010);
      if ((uVar5 & 1) != 0) {
        FUN_10000cbfc(*(long *)(puVar2 + 0x38) + lVar3 * 0x20,&local_50);
        _swift_bridgeObjectRelease_n(puVar2,2);
        if (local_38 != 0) {
          puVar1 = &DAT_100fae898;
          FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
          puVar4 = param_1;
          _swift_dynamicCast(param_1,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
          if (((ulong)puVar4 & 1) != 0) {
            return;
          }
          goto LAB_10012d8d4;
        }
        goto LAB_10012d8bc;
      }
      _swift_bridgeObjectRelease(puVar2);
    }
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
    _swift_bridgeObjectRelease(puVar2);
  }
LAB_10012d8bc:
  FUN_1000fb4c4(&local_50,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10012d8d4:
  *param_1 = 0;
  return;
}



/* Address: 0x10012d8f0 | FUN_10012d8f0 */

byte FUN_10012d8f0(undefined *param_1,long param_2)

{
  undefined *puVar1;
  _StringGuts _Var2;
  byte bVar3;
  _StringGuts *p_Var4;
  _StringGuts _Var5;
  undefined *puVar6;
  long lVar7;
  byte *pbVar8;
  undefined *puVar9;
  _StringGuts _Var10;
  ulong uVar11;
  undefined *puVar12;
  long unaff_x20;
  _StringGuts _Var13;
  long lVar14;
  _StringGuts _Var15;
  _StringGuts _Var16;
  code *pcVar17;
  _StringGuts _Var18;
  byte local_d8 [8];
  undefined8 local_d0;
  _StringGuts local_c0;
  _StringGuts _Stack_b8;
  undefined8 uStack_b0;
  long local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  long local_88;
  _StringGuts local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  
  puStack_78 = (undefined *)0x0;
  local_80.unknown = (undefined *)0x0;
  puStack_68 = (undefined *)0x0;
  local_70 = 0;
  if (*(long *)(param_2 + 0x10) == 0) goto LAB_10012dad0;
  lVar14 = 0x6c4664656b6e696c;
  _swift_bridgeObjectRetain(param_2);
  uVar11 = 0xea00000000006761;
  lVar7 = lVar14;
  FUN_100071370(0x6c4664656b6e696c);
  if ((uVar11 & 1) == 0) {
    _swift_bridgeObjectRelease(param_2);
LAB_10012d9e4:
    if (*(long *)(param_2 + 0x10) != 0) {
      _swift_bridgeObjectRetain(param_2);
      uVar11 = 0xea00000000006761;
      FUN_100071370(0x6c4664656b6e696c);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
      }
      else {
        FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar14 * 0x20,&local_a0);
        _swift_bridgeObjectRelease(param_2);
        puVar6 = &DAT_100fae898;
        FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
        puVar1 = PTR___type_metadata_for_Any_100eae0c0;
        p_Var4 = &local_c0;
        _swift_dynamicCast(p_Var4,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
        _Var5.unknown = local_c0.unknown;
        if (((ulong)p_Var4 & 1) != 0) {
          if (*(long *)(local_c0.unknown + 0x10) == 0) {
LAB_10012dd38:
            _Var15.unknown = (undefined *)0x0;
            _Var16.unknown = (undefined *)0x0;
          }
          else {
            _swift_bridgeObjectRetain(local_c0.unknown);
            lVar7 = 0x67616c66;
            uVar11 = 0;
            FUN_100071370(0x67616c66);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(_Var5.unknown);
              goto LAB_10012dd38;
            }
            FUN_10000cbfc(*(long *)(_Var5.unknown + 0x38) + lVar7 * 0x20,&local_a0);
            _swift_bridgeObjectRelease(_Var5.unknown);
            p_Var4 = &local_c0;
            _swift_dynamicCast(p_Var4,&local_a0,puVar1 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            _Var15.unknown = _Stack_b8.unknown;
            _Var16.unknown = local_c0.unknown;
            if ((int)p_Var4 == 0) {
              _Var16.unknown = (undefined *)0x0;
              _Var15.unknown = (undefined *)0x0;
            }
          }
          if (*(long *)(_Var5.unknown + 0x10) == 0) {
LAB_10012dd90:
            puStack_98 = (undefined *)0x0;
            local_a0 = (undefined *)0x0;
            local_88 = 0;
            uStack_90 = 0;
          }
          else {
            _swift_bridgeObjectRetain(_Var5.unknown);
            lVar7 = 0x746e6169726176;
            uVar11 = 0;
            FUN_100071370(0x746e6169726176);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(_Var5.unknown);
              goto LAB_10012dd90;
            }
            FUN_10000cbfc(*(long *)(_Var5.unknown + 0x38) + lVar7 * 0x20,&local_a0);
            _swift_bridgeObjectRelease(_Var5.unknown);
          }
          _swift_bridgeObjectRelease(_Var5.unknown);
          puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
          if (local_88 == 0) {
            FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
            puVar9 = _Var15.unknown;
            if (_Var15.unknown == (undefined *)0x0) {
              puVar9 = (undefined *)0x0;
            }
          }
          else {
            p_Var4 = &local_c0;
            _swift_dynamicCast(p_Var4,&local_a0,puVar1 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            _Var2.unknown = _Stack_b8.unknown;
            _Var10.unknown = _Stack_b8.unknown;
            _Var5.unknown = local_c0.unknown;
            if ((int)p_Var4 == 0) {
              _Var5.unknown = (undefined *)0x0;
              _Var10.unknown = (undefined *)0x0;
            }
            puVar9 = _Var10.unknown;
            if ((_Var15.unknown != (undefined *)0x0) &&
               (puVar9 = _Var15.unknown, _Var10.unknown != (undefined *)0x0)) {
              if (*(long *)(param_1 + 0x10) == 0) {
LAB_10012deb4:
                _swift_bridgeObjectRelease(_Var10.unknown);
                bVar3 = false;
                _Var18.unknown = (undefined *)0x0;
                _Var13.unknown = (undefined *)0x0;
              }
              else {
                _swift_bridgeObjectRetain(param_1);
                puVar9 = _Var16.unknown;
                puVar12 = _Var15.unknown;
                FUN_100071370(_Var16.unknown);
                if (((ulong)puVar12 & 1) == 0) {
                  _swift_bridgeObjectRelease(_Var10.unknown);
                  _Var10.unknown = param_1;
                  goto LAB_10012deb4;
                }
                FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)puVar9 * 0x20,&local_a0);
                _swift_bridgeObjectRelease(param_1);
                p_Var4 = &local_c0;
                _swift_dynamicCast(p_Var4,&local_a0,puVar1 + 8,
                                   PTR___type_metadata_for_Swift_String_100eac208,6);
                _Var13.unknown = _Stack_b8.unknown;
                _Var18.unknown = local_c0.unknown;
                if (((ulong)p_Var4 & 1) == 0) goto LAB_10012deb4;
                if ((local_c0.unknown == _Var5.unknown) && (_Var10.unknown == _Stack_b8.unknown)) {
                  _swift_bridgeObjectRelease(_Var10.unknown);
                  bVar3 = true;
                  _Var13.unknown = _Var2.unknown;
                  _Var18.unknown = _Var5.unknown;
                }
                else {
                  bVar3 = Swift::_stringCompareWithSmolCheck
                                    (local_c0,_Stack_b8,
                                     (_StringComparisonResult)(__int8)_Var5.unknown);
                  _swift_bridgeObjectRelease(_Var10.unknown);
                }
              }
              FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
              local_80.unknown = (undefined *)0x0;
              if (_Var13.unknown != (undefined *)0x0) {
                local_80.unknown = _Var18.unknown;
              }
              puStack_68 = (undefined *)0x0;
              if (_Var13.unknown != (undefined *)0x0) {
                puStack_68 = puVar6;
              }
              local_70 = 0;
              puStack_78 = _Var13.unknown;
              goto LAB_10012dc24;
            }
          }
          _swift_bridgeObjectRelease(puVar9);
          bVar3 = 0;
          goto LAB_10012dad4;
        }
      }
    }
LAB_10012dad0:
    bVar3 = 1;
  }
  else {
    FUN_10000cbfc(*(long *)(param_2 + 0x38) + lVar7 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(param_2);
    puVar6 = PTR___type_metadata_for_Any_100eae0c0;
    p_Var4 = &local_c0;
    _swift_dynamicCast(p_Var4,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    _Var15.unknown = _Stack_b8.unknown;
    _Var16.unknown = local_c0.unknown;
    if (((ulong)p_Var4 & 1) == 0) goto LAB_10012d9e4;
    if (*(long *)(param_1 + 0x10) == 0) {
LAB_10012db18:
      puStack_98 = (undefined *)0x0;
      local_a0 = (undefined *)0x0;
      local_88 = 0;
      uStack_90 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_1);
      _Var5.unknown = _Var16.unknown;
      _Var10.unknown = _Var15.unknown;
      FUN_100071370(_Var16.unknown);
      if (((ulong)_Var10.unknown & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        goto LAB_10012db18;
      }
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)_Var5.unknown * 0x20,&local_a0);
      _swift_bridgeObjectRelease(param_1);
    }
    FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_1000f8cac(&local_a0,&local_80,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_1000f8cac(&local_a0,&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    if (local_a8 == 0) {
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10012dbc8:
      _Stack_b8.unknown = puStack_98;
      local_c0.unknown = local_a0;
      local_a8 = local_88;
      uStack_b0 = uStack_90;
      if (local_88 == 0) {
        FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        pbVar8 = local_d8;
        _swift_dynamicCast(pbVar8,&local_c0,puVar6 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (((ulong)pbVar8 & 1) != 0) {
          _swift_bridgeObjectRelease(local_d0);
          bVar3 = 1;
          goto LAB_10012dc24;
        }
      }
      bVar3 = 0;
    }
    else {
      pbVar8 = local_d8;
      _swift_dynamicCast(pbVar8,&local_c0,puVar6 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6)
      ;
      if (((ulong)pbVar8 & 1) == 0) goto LAB_10012dbc8;
      FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
      bVar3 = local_d8[0];
    }
LAB_10012dc24:
    FUN_1000f8cac(&local_80,&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
    if (local_a8 == 0) {
      _swift_bridgeObjectRelease(_Var15.unknown);
      FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
      p_Var4 = &local_c0;
      goto LAB_10012dae8;
    }
    FUN_100011080(&local_c0,&local_a0);
    lVar7 = PostHogConfig::sendFeatureFlagEvent;
    lVar14 = *(long *)(unaff_x20 + 0x20);
    _swift_beginAccess(lVar14 + PostHogConfig::sendFeatureFlagEvent,local_d8,0,0);
    if ((*(char *)(lVar14 + lVar7) == '\x01') &&
       (pcVar17 = *(code **)(unaff_x20 + 0x48), pcVar17 != (code *)0x0)) {
      FUN_10000cbfc(&local_a0,&local_c0);
      (*pcVar17)(_Var16.unknown,_Var15.unknown,&local_c0);
      _swift_bridgeObjectRelease(_Var15.unknown);
      FUN_1000fb4c4(&local_c0,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_100004594(&local_a0);
      p_Var4 = &local_80;
      goto LAB_10012dae8;
    }
    _swift_bridgeObjectRelease(_Var15.unknown);
    FUN_100004594(&local_a0);
  }
LAB_10012dad4:
  p_Var4 = &local_80;
LAB_10012dae8:
  FUN_1000fb4c4(p_Var4,&DAT_100fae668,&DAT_100c2e4a0);
  return bVar3 & 1;
}



/* Address: 0x10012df20 | FUN_10012df20 */

void FUN_10012df20(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  DispatchQoS param_5)

{
  undefined *puVar1;
  DispatchWorkItemFlags DVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  void *aBlock;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar7 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar8 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  local_a8 = *(undefined8 *)(param_3 + 0x1b0);
  puVar4 = &DAT_100eb85d8;
  _swift_allocObject(&DAT_100eb85d8,0x30,7);
  *(undefined8 *)(puVar4 + 0x10) = param_1;
  *(long *)(puVar4 + 0x18) = param_3;
  *(undefined8 *)(puVar4 + 0x20) = param_4;
  *(undefined **)(puVar4 + 0x28) = param_5.unknown;
  local_70 = FUN_1001343b8;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb85f0;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_3);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_5);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = &DAT_100fafdf0;
  FUN_100003a00(&DAT_100fafdf0,puVar1,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar6 = &DAT_100fafe00;
  FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(puVar7,&local_98,puVar4,puVar6,DVar2.unknown,puVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,
             (DispatchWorkItemFlags)(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(puVar7,DVar2.unknown);
  (**(code **)(lVar8 + 8))(puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x10012e144 | FUN_10012e144 */

/* WARNING: Removing unreachable block (ram,0x00010012eee4) */
/* WARNING: Removing unreachable block (ram,0x00010012eed8) */
/* WARNING: Removing unreachable block (ram,0x00010012eedc) */

void FUN_10012e144(undefined *param_1,long param_2,code *param_3)

{
  URL UVar1;
  long lVar2;
  undefined *puVar3;
  byte *pbVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ulong uVar11;
  URL UVar12;
  long extraout_x8;
  undefined8 uVar13;
  ID self;
  undefined *puVar14;
  long lVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String separator;
  String separator_00;
  String separator_01;
  undefined1 auStack_f0 [8];
  undefined8 local_e8;
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined *local_b8;
  long local_b0;
  undefined *local_a8;
  byte local_a0;
  undefined7 uStack_9f;
  long lStack_98;
  undefined *local_88;
  undefined *local_80;
  long lStack_78;
  undefined *local_68;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar15 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  if (param_1 == (undefined *)0x0) {
    if (DAT_101057340 == '\x01') {
      pcVar5 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      _swift_allocObject();
      pcVar5[0x18] = '\x02';
      pcVar5[0x19] = '\0';
      pcVar5[0x1a] = '\0';
      pcVar5[0x1b] = '\0';
      pcVar5[0x1c] = '\0';
      pcVar5[0x1d] = '\0';
      pcVar5[0x1e] = '\0';
      pcVar5[0x1f] = '\0';
      pcVar5[0x10] = '\x01';
      pcVar5[0x11] = '\0';
      pcVar5[0x12] = '\0';
      pcVar5[0x13] = '\0';
      pcVar5[0x14] = '\0';
      pcVar5[0x15] = '\0';
      pcVar5[0x16] = '\0';
      pcVar5[0x17] = '\0';
      *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      pcVar5[0x20] = '+';
      pcVar5[0x21] = '\0';
      pcVar5[0x22] = '\0';
      pcVar5[0x23] = '\0';
      pcVar5[0x24] = '\0';
      pcVar5[0x25] = '\0';
      pcVar5[0x26] = '\0';
      pcVar5[0x27] = -0x30;
      pcVar5[0x28] = -0x10;
      pcVar5[0x29] = '\'';
      pcVar5[0x2a] = -0x27;
      pcVar5[0x2b] = '\0';
      pcVar5[0x2c] = '\x01';
      pcVar5[0x2d] = '\0';
      pcVar5[0x2e] = '\0';
      pcVar5[0x2f] = -0x80;
      SVar17.bridgeObject = (void *)0x20;
      SVar17.str = pcVar5;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar17,separator_00);
      _swift_release(pcVar5);
    }
    FUN_10012f7e4(0);
    (*param_3)(0);
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x6d694c61746f7571;
    uVar11 = 0xec00000064657469;
    FUN_100071370(0x6d694c61746f7571);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar2 * 0x20,&local_80);
      _swift_bridgeObjectRelease(param_1);
      puVar3 = &DAT_100faf898;
      FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
      pbVar4 = &local_a0;
      _swift_dynamicCast(pbVar4,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
      if (((ulong)pbVar4 & 1) != 0) {
        uVar13 = CONCAT71(uStack_9f,local_a0);
        uVar11 = 0;
        FUN_10012eef0(0x5f65727574616566,0xed00007367616c66,uVar13);
        _swift_bridgeObjectRelease(uVar13);
        if ((uVar11 & 1) != 0) {
          if (DAT_101057340 == '\x01') {
            pcVar5 = &DAT_100fae660;
            FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
            _swift_allocObject();
            pcVar5[0x18] = '\x02';
            pcVar5[0x19] = '\0';
            pcVar5[0x1a] = '\0';
            pcVar5[0x1b] = '\0';
            pcVar5[0x1c] = '\0';
            pcVar5[0x1d] = '\0';
            pcVar5[0x1e] = '\0';
            pcVar5[0x1f] = '\0';
            pcVar5[0x10] = '\x01';
            pcVar5[0x11] = '\0';
            pcVar5[0x12] = '\0';
            pcVar5[0x13] = '\0';
            pcVar5[0x14] = '\0';
            pcVar5[0x15] = '\0';
            pcVar5[0x16] = '\0';
            pcVar5[0x17] = '\0';
            *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
            pcVar5[0x20] = -0x65;
            pcVar5[0x21] = '\0';
            pcVar5[0x22] = '\0';
            pcVar5[0x23] = '\0';
            pcVar5[0x24] = '\0';
            pcVar5[0x25] = '\0';
            pcVar5[0x26] = '\0';
            pcVar5[0x27] = -0x30;
            pcVar5[0x28] = -0x30;
            pcVar5[0x29] = '(';
            pcVar5[0x2a] = -0x27;
            pcVar5[0x2b] = '\0';
            pcVar5[0x2c] = '\x01';
            pcVar5[0x2d] = '\0';
            pcVar5[0x2e] = '\0';
            pcVar5[0x2f] = -0x80;
            SVar16.bridgeObject = (void *)0x20;
            SVar16.str = pcVar5;
            separator.bridgeObject = (void *)0xa;
            separator.str = (char *)0xe100000000000000;
            Swift::_print(SVar16,separator);
            _swift_release(pcVar5);
          }
          self = *(ID *)(param_2 + 0x60);
          objc_stub::lock(self);
          puVar3 = &DAT_100c2ee30;
          _swift_getKeyPath();
          puVar10 = puVar3;
          FUN_10012fef0();
          _swift_release(puVar3);
          if (puVar10 == (undefined *)0x0) {
            puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
            FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
          }
          objc_stub::unlock(self);
          FUN_10012ef5c(0);
          _swift_bridgeObjectRetain(puVar10);
          FUN_10012f7e4();
          _swift_bridgeObjectRelease(puVar10);
          (*param_3)(puVar10);
          goto LAB_10012e738;
        }
      }
    }
  }
  local_88 = param_1;
  _swift_bridgeObjectRetain(param_1);
  FUN_1001330fc(&local_88);
  puVar3 = local_88;
  if (*(long *)(local_88 + 0x10) == 0) {
LAB_10012e4dc:
    puVar14 = (undefined *)0x0;
    lVar2 = *(long *)(puVar3 + 0x10);
  }
  else {
    _swift_bridgeObjectRetain(local_88);
    lVar2 = 0x7367616c66;
    uVar11 = 0;
    FUN_100071370(0x7367616c66);
    if ((uVar11 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar3);
      goto LAB_10012e4dc;
    }
    FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
    _swift_bridgeObjectRelease(puVar3);
    puVar14 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    pbVar4 = &local_a0;
    _swift_dynamicCast(pbVar4,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar14,6);
    puVar14 = (undefined *)CONCAT71(uStack_9f,local_a0);
    if ((int)pbVar4 == 0) {
      puVar14 = (undefined *)0x0;
    }
    lVar2 = *(long *)(puVar3 + 0x10);
  }
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(puVar3);
    lVar2 = 0x4665727574616566;
    uVar11 = 0;
    FUN_100071370(0x4665727574616566);
    local_a8 = puVar3;
    if ((uVar11 & 1) == 0) goto LAB_10012e688;
    FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
    _swift_bridgeObjectRelease(puVar3);
    puVar6 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    pbVar4 = &local_a0;
    _swift_dynamicCast(pbVar4,&local_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
    if (((ulong)pbVar4 & 1) == 0) goto LAB_10012e68c;
    local_a8 = (undefined *)CONCAT71(uStack_9f,local_a0);
    if (*(long *)(puVar3 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar3);
      uVar11 = 0;
      lVar2 = -0x2fffffffffffffed;
      FUN_100071370(0xd000000000000013);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(local_a8);
        local_a8 = puVar3;
      }
      else {
        FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
        _swift_bridgeObjectRelease(puVar3);
        pbVar4 = &local_a0;
        UVar12.unknown = PTR___type_metadata_for_Any_100eae0c0 + 8;
        _swift_dynamicCast(pbVar4,&local_80,UVar12.unknown,puVar6,6);
        if (((ulong)pbVar4 & 1) != 0) {
          puVar6 = (undefined *)CONCAT71(uStack_9f,local_a0);
          FUN_10012ef5c(0);
          if (*(long *)(puVar3 + 0x10) == 0) {
            local_d8 = (undefined *)0x0;
            lStack_98 = 0;
          }
          else {
            _swift_bridgeObjectRetain(puVar3);
            lVar2 = 0x4974736575716572;
            uVar11 = 0;
            FUN_100071370(0x4974736575716572);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar3);
              local_d8 = (undefined *)0x0;
              lStack_98 = 0;
            }
            else {
              FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
              _swift_bridgeObjectRelease(puVar3);
              pbVar4 = &local_a0;
              UVar12.unknown = PTR___type_metadata_for_Any_100eae0c0 + 8;
              _swift_dynamicCast(pbVar4,&local_80,UVar12.unknown,
                                 PTR___type_metadata_for_Swift_String_100eac208,6);
              local_d8 = (undefined *)CONCAT71(uStack_9f,local_a0);
              if ((int)pbVar4 == 0) {
                local_d8 = (undefined *)0x0;
                lStack_98 = 0;
              }
            }
          }
          local_b8 = puVar6;
          local_b0 = lStack_98;
          if (*(long *)(puVar3 + 0x10) == 0) {
LAB_10012e814:
            local_e0 = (undefined *)0x0;
            local_c8 = (ulong)local_c8._4_4_ << 0x20;
          }
          else {
            _swift_bridgeObjectRetain(puVar3);
            lVar2 = 0x657461756c617665;
            uVar11 = 0;
            FUN_100071370(0x657461756c617665);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar3);
              goto LAB_10012e814;
            }
            FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
            _swift_bridgeObjectRelease(puVar3);
            pbVar4 = &local_a0;
            UVar12.unknown = PTR___type_metadata_for_Any_100eae0c0 + 8;
            _swift_dynamicCast(pbVar4,&local_80,UVar12.unknown,
                               PTR___type_metadata_for_Swift_Int_100eac6f8,6);
            local_e0 = (undefined *)CONCAT71(uStack_9f,local_a0);
            local_c8 = CONCAT44(local_c8._4_4_,(int)pbVar4);
            if ((int)pbVar4 == 0) {
              local_e0 = (undefined *)0x0;
            }
          }
          if (*(long *)(puVar3 + 0x10) == 0) {
LAB_10012e8a8:
            local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
          }
          else {
            _swift_bridgeObjectRetain(puVar3);
            lVar2 = -0x2fffffffffffffe7;
            uVar11 = 0;
            FUN_100071370(0xd000000000000019);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar3);
              goto LAB_10012e8a8;
            }
            FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
            _swift_bridgeObjectRelease(puVar3);
            pbVar4 = &local_a0;
            UVar12.unknown = PTR___type_metadata_for_Any_100eae0c0 + 8;
            _swift_dynamicCast(pbVar4,&local_80,UVar12.unknown,
                               PTR___type_metadata_for_Swift_Bool_100eac570,6);
            if (((ulong)pbVar4 & 1) == 0) goto LAB_10012e8a8;
            local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(uint)local_a0);
          }
          local_c0 = *(ID *)(param_2 + 0x60);
          objc_stub::lock(local_c0);
          lVar2 = local_b0;
          puVar6 = local_d8;
          if (local_b0 == 0) {
            _swift_bridgeObjectRetain(puVar14);
          }
          else {
            local_e8 = *(undefined8 *)(param_2 + 0x140);
            *(undefined **)(param_2 + 0x138) = local_d8;
            *(long *)(param_2 + 0x140) = local_b0;
            _swift_bridgeObjectRetain_n(local_b0,2);
            _swift_bridgeObjectRetain(puVar14);
            _swift_bridgeObjectRelease(lVar2);
            _swift_bridgeObjectRelease(local_e8);
            local_e8 = *(undefined8 *)(param_2 + 0x28);
            local_68 = PTR___type_metadata_for_Swift_String_100eac208;
            local_80 = puVar6;
            lStack_78 = lVar2;
            _swift_bridgeObjectRetain(lVar2);
            FUN_10015ab00(0x15,&local_80);
            FUN_100004594(&local_80);
          }
          if ((int)local_c8 != 0) {
            *(undefined **)(param_2 + 0x148) = local_e0;
            *(undefined1 *)(param_2 + 0x150) = 0;
            local_68 = PTR___type_metadata_for_Swift_Int_100eac6f8;
            local_80 = local_e0;
            FUN_10015ab00(0x16,&local_80);
            FUN_100004594(&local_80);
          }
          puVar6 = local_b8;
          if (*(long *)(puVar3 + 0x10) == 0) {
LAB_10012ea30:
            *(undefined1 *)(param_2 + 0x151) = 2;
            local_c8 = *(undefined8 *)(param_2 + 0x28);
            SVar19.bridgeObject = (void *)0x8000000100d927b0;
            SVar19.str = (char *)0xd00000000000001f;
            Foundation::URL::appendingPathComponent(SVar19,UVar12);
            FUN_1001723c8(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
            (**(code **)(lVar15 + 8))
                      (auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
          }
          else {
            _swift_bridgeObjectRetain(puVar3);
            lVar2 = -0x2fffffffffffffe9;
            uVar11 = 0;
            FUN_100071370(0xd000000000000017);
            if ((uVar11 & 1) == 0) {
              _swift_bridgeObjectRelease(puVar3);
              goto LAB_10012ea30;
            }
            FUN_10000cbfc(*(long *)(puVar3 + 0x38) + lVar2 * 0x20,&local_80);
            _swift_bridgeObjectRelease(puVar3);
            puVar10 = PTR___type_metadata_for_Swift_Bool_100eac570;
            pbVar4 = &local_a0;
            UVar12.unknown = PTR___type_metadata_for_Any_100eae0c0 + 8;
            _swift_dynamicCast(pbVar4,&local_80,UVar12.unknown,
                               PTR___type_metadata_for_Swift_Bool_100eac570,6);
            if (((ulong)pbVar4 & 1) == 0) goto LAB_10012ea30;
            *(byte *)(param_2 + 0x151) = local_a0;
            local_c8 = *(undefined8 *)(param_2 + 0x28);
            local_68 = puVar10;
            local_80 = (undefined *)CONCAT71(local_80._1_7_,local_a0);
            FUN_10015ab00(0x17,&local_80);
            FUN_100004594(&local_80);
          }
          puVar10 = local_a8;
          if ((int)local_d0 == 0) {
            if (puVar14 == (undefined *)0x0) {
              _swift_bridgeObjectRetain_n(local_a8,2);
            }
            else {
              uVar13 = *(undefined8 *)(param_2 + 0xf8);
              *(undefined **)(param_2 + 0xf8) = puVar14;
              _swift_bridgeObjectRetain_n(local_a8,2);
              _swift_bridgeObjectRetain(puVar14);
              _swift_retain(param_2);
              _swift_release();
              _swift_bridgeObjectRelease(puVar14);
              _swift_bridgeObjectRelease(uVar13);
              puVar7 = puVar14;
              FUN_100137da0();
              puVar8 = &DAT_100fb09d8;
              FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
              local_80 = puVar7;
              local_68 = puVar8;
              FUN_10015ab00(0xb,&local_80);
              FUN_100004594(&local_80);
            }
            uVar13 = *(undefined8 *)(param_2 + 0x100);
            *(undefined **)(param_2 + 0x100) = puVar10;
            _swift_bridgeObjectRelease(uVar13);
            FUN_100137da0();
            puVar10 = &DAT_100fb09d8;
            FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
            local_68 = puVar10;
            FUN_10015ab00(9,&local_80);
            FUN_100004594(&local_80);
            uVar13 = *(undefined8 *)(param_2 + 0x130);
            *(undefined **)(param_2 + 0x130) = puVar6;
            _swift_bridgeObjectRetain(puVar6);
            _swift_bridgeObjectRelease(uVar13);
            puVar8 = puVar6;
            FUN_100137da0();
            local_80 = puVar8;
            local_68 = puVar10;
            FUN_10015ab00(10,&local_80);
            FUN_100004594(&local_80);
            puVar10 = local_a8;
          }
          else {
            _swift_bridgeObjectRelease(puVar14);
            puVar10 = &DAT_100c2ee88;
            _swift_getKeyPath();
            puVar8 = puVar10;
            FUN_10012fef0();
            _swift_release(puVar10);
            if (puVar8 == (undefined *)0x0) {
              puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
              FUN_1000f8154();
            }
            local_d0 = puVar8;
            puVar10 = &DAT_100c2ee30;
            _swift_getKeyPath();
            puVar8 = puVar10;
            FUN_10012fef0();
            _swift_release(puVar10);
            if (puVar8 == (undefined *)0x0) {
              puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
              FUN_1000f8154();
            }
            puVar10 = &DAT_100c2ee58;
            _swift_getKeyPath();
            puVar7 = puVar10;
            FUN_10012fef0();
            _swift_release(puVar10);
            if (puVar7 == (undefined *)0x0) {
              puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
              FUN_1000f8154();
            }
            puVar10 = local_a8;
            _swift_bridgeObjectRetain(local_a8);
            puVar9 = puVar8;
            _swift_isUniquelyReferenced_nonNull_native(puVar8);
            local_80 = puVar8;
            FUN_100103e2c(puVar10,FUN_100152dbc,0,puVar9,&local_80);
            _swift_bridgeObjectRelease(puVar10);
            puVar10 = local_80;
            _swift_bridgeObjectRetain(puVar6);
            puVar8 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native(puVar7);
            local_80 = puVar7;
            FUN_100103e2c(puVar6,FUN_100152dbc,0,puVar8,&local_80);
            _swift_bridgeObjectRelease(puVar6);
            local_d8 = local_80;
            if (puVar14 == (undefined *)0x0) {
              _swift_retain(puVar10);
              _swift_bridgeObjectRelease(local_d0);
            }
            else {
              _swift_bridgeObjectRetain(puVar14);
              _swift_retain(puVar10);
              puVar6 = local_d0;
              puVar8 = local_d0;
              _swift_isUniquelyReferenced_nonNull_native(local_d0);
              local_80 = puVar6;
              FUN_100103e2c(puVar14,FUN_100152dbc,0,puVar8,&local_80);
              _swift_bridgeObjectRelease(puVar14);
              puVar8 = local_80;
              uVar13 = *(undefined8 *)(param_2 + 0xf8);
              *(undefined **)(param_2 + 0xf8) = local_80;
              _swift_retain(local_80);
              _swift_bridgeObjectRelease(uVar13);
              puVar7 = puVar8;
              FUN_100137da0();
              puVar6 = &DAT_100fb09d8;
              FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
              local_80 = puVar7;
              local_68 = puVar6;
              FUN_10015ab00(0xb,&local_80);
              _swift_release(puVar8);
              FUN_100004594(&local_80);
            }
            uVar13 = *(undefined8 *)(param_2 + 0x100);
            *(undefined **)(param_2 + 0x100) = puVar10;
            _swift_retain(puVar10);
            _swift_bridgeObjectRelease(uVar13);
            puVar8 = puVar10;
            FUN_100137da0();
            puVar6 = &DAT_100fb09d8;
            FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
            local_80 = puVar8;
            local_68 = puVar6;
            FUN_10015ab00(9,&local_80);
            _swift_release(puVar10);
            FUN_100004594(&local_80);
            puVar8 = local_d8;
            uVar13 = *(undefined8 *)(param_2 + 0x130);
            *(undefined **)(param_2 + 0x130) = local_d8;
            _swift_retain(local_d8);
            _swift_bridgeObjectRelease(uVar13);
            puVar7 = puVar8;
            FUN_100137da0();
            local_80 = puVar7;
            local_68 = puVar6;
            FUN_10015ab00(10,&local_80);
            _swift_release(puVar8);
            FUN_100004594(&local_80);
            puVar6 = local_b8;
          }
          *(undefined1 *)(param_2 + 0x168) = 1;
          objc_stub::unlock(local_c0);
          _swift_bridgeObjectRelease(puVar14);
          _swift_bridgeObjectRelease(puVar6);
          _swift_bridgeObjectRelease(local_a8);
          _swift_bridgeObjectRelease(local_b0);
          FUN_10012f7e4(puVar10);
          (*param_3)(puVar10);
          _swift_bridgeObjectRelease(puVar3);
          goto LAB_10012e738;
        }
      }
    }
LAB_10012e688:
    _swift_bridgeObjectRelease(local_a8);
  }
LAB_10012e68c:
  _swift_bridgeObjectRelease(puVar14);
  if (DAT_101057340 == '\x01') {
    pcVar5 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    _swift_allocObject();
    pcVar5[0x18] = '\x02';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar5[0x20] = 'C';
    pcVar5[0x21] = '\0';
    pcVar5[0x22] = '\0';
    pcVar5[0x23] = '\0';
    pcVar5[0x24] = '\0';
    pcVar5[0x25] = '\0';
    pcVar5[0x26] = '\0';
    pcVar5[0x27] = -0x30;
    pcVar5[0x28] = ' ';
    pcVar5[0x29] = '(';
    pcVar5[0x2a] = -0x27;
    pcVar5[0x2b] = '\0';
    pcVar5[0x2c] = '\x01';
    pcVar5[0x2d] = '\0';
    pcVar5[0x2e] = '\0';
    pcVar5[0x2f] = -0x80;
    SVar18.bridgeObject = (void *)0x20;
    SVar18.str = pcVar5;
    separator_01.bridgeObject = (void *)0xa;
    separator_01.str = (char *)0xe100000000000000;
    Swift::_print(SVar18,separator_01);
    _swift_release(pcVar5);
  }
  FUN_10012f7e4(0);
  (*param_3)(0);
  puVar10 = puVar3;
LAB_10012e738:
  _swift_bridgeObjectRelease(puVar10);
  return;
}



/* Address: 0x10012eef0 | FUN_10012eef0 */

bool FUN_10012eef0(undefined *param_1,undefined *param_2,long param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  undefined8 *puVar4;
  long lVar5;
  
  puVar4 = (undefined8 *)(param_3 + 0x28);
  lVar5 = *(long *)(param_3 + 0x10) + 1;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) break;
    puVar1 = puVar4 + -1;
    _Var2.unknown = (undefined *)*puVar4;
    if ((undefined *)*puVar1 == param_1 && _Var2.unknown == param_2) break;
    puVar4 = puVar4 + 2;
    bVar3 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*puVar1,_Var2,(_StringComparisonResult)(__int8)param_1);
  } while (!bVar3);
  return lVar5 != 0;
}



/* Address: 0x10012ef5c | FUN_10012ef5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012ef5c(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x20;
  ID IVar10;
  undefined1 uVar11;
  long local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_50 [4];
  
  uVar5 = 0;
  uVar6 = 0;
  iVar1 = (int)&local_90;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_10012efd8:
    uStack_68 = 0;
    local_70 = 0;
    local_58 = 0;
    uStack_60 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar2 = 0x617254726f727265;
    uVar9 = 0xed0000676e696b63;
    FUN_100071370(0x617254726f727265);
    if ((uVar9 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_10012efd8;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar2 * 0x20,&local_70);
    _swift_bridgeObjectRelease(param_1);
  }
  uStack_88 = uStack_68;
  local_90 = local_70;
  local_78 = local_58;
  uStack_80 = uStack_60;
  if (local_58 == 0) {
    IVar10 = *(ID *)(unaff_x20 + 0x108);
    objc_stub::lock(IVar10);
    puVar3 = &DAT_100c2eec8;
    _swift_getKeyPath();
    puVar4 = puVar3;
    FUN_10012fef0();
    _swift_release(puVar3);
    if (puVar4 == (undefined *)0x0) {
      local_50[1] = 0;
      local_50[0] = 0;
      local_50[3] = 0;
      local_50[2] = 0;
    }
    else {
      if (*(long *)(puVar4 + 0x10) != 0) {
        _swift_bridgeObjectRetain(puVar4);
        lVar2 = 0x617254726f727265;
        uVar9 = 0xed0000676e696b63;
        FUN_100071370(0x617254726f727265);
        if ((uVar9 & 1) != 0) {
          FUN_10000cbfc(*(long *)(puVar4 + 0x38) + lVar2 * 0x20,local_50);
          _swift_bridgeObjectRelease_n(puVar4,2);
          goto LAB_10012f0b8;
        }
        _swift_bridgeObjectRelease(puVar4);
      }
      local_50[1] = 0;
      local_50[0] = 0;
      local_50[3] = 0;
      local_50[2] = 0;
      _swift_bridgeObjectRelease(puVar4);
    }
LAB_10012f0b8:
    objc_stub::unlock(IVar10);
    if (local_78 != 0) {
      FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
    }
  }
  else {
    FUN_100011080(&local_90,local_50);
  }
  FUN_1000f8cac(local_50,&local_70,&DAT_100fae668,&DAT_100c2e4a0);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_58 == 0) {
    FUN_1000fb4c4(&local_70,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10012f154:
    FUN_1000f8cac(local_50,&local_70,&DAT_100fae668,&DAT_100c2e4a0);
    if (local_58 == 0) {
      FUN_1000fb4c4(local_50,&DAT_100fae668,&DAT_100c2e4a0);
      plVar8 = &local_70;
      goto LAB_10012f2b4;
    }
    puVar4 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    _swift_dynamicCast(&local_90,&local_70,puVar3 + 8,puVar4,6);
    lVar2 = local_90;
    if ((uVar6 & 1) != 0) {
      if (*(long *)(local_90 + 0x10) == 0) {
LAB_10012f230:
        uStack_68 = 0;
        local_70 = 0;
        local_58 = 0;
        uStack_60 = 0;
      }
      else {
        _swift_bridgeObjectRetain(local_90);
        uVar5 = 0;
        lVar7 = -0x2fffffffffffffeb;
        FUN_100071370(0xd000000000000015);
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar2);
          goto LAB_10012f230;
        }
        FUN_10000cbfc(*(long *)(lVar2 + 0x38) + lVar7 * 0x20,&local_70);
        _swift_bridgeObjectRelease(lVar2);
      }
      _swift_bridgeObjectRelease(lVar2);
      if (local_58 == 0) {
        FUN_1000fb4c4(&local_70,&DAT_100fae668,&DAT_100c2e4a0);
      }
      else {
        _swift_dynamicCast(&local_90,&local_70,puVar3 + 8,
                           PTR___type_metadata_for_Swift_Bool_100eac570,6);
        if (iVar1 != 0) goto LAB_10012f134;
      }
      uVar11 = 0;
      goto LAB_10012f288;
    }
  }
  else {
    _swift_dynamicCast(&local_90,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_Bool_100eac570,6);
    if ((uVar5 & 1) == 0) goto LAB_10012f154;
LAB_10012f134:
    uVar11 = (undefined1)local_90;
LAB_10012f288:
    IVar10 = *(ID *)(unaff_x20 + 0xe8);
    objc_stub::lock(IVar10);
    *(undefined1 *)(unaff_x20 + 0xf0) = uVar11;
    objc_stub::unlock(IVar10);
  }
  plVar8 = local_50;
LAB_10012f2b4:
  FUN_1000fb4c4(plVar8,&DAT_100fae668,&DAT_100c2e4a0);
  return;
}



/* Address: 0x10012f2cc | FUN_10012f2cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10012f2cc(void)

{
  long lVar1;
  ID IVar2;
  long lVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long unaff_x20;
  undefined1 local_61;
  long local_60 [6];
  
  IVar2 = *(ID *)(unaff_x20 + 0x108);
  objc_stub::lock(IVar2);
  FUN_10012f400(local_60);
  objc_stub::unlock(IVar2);
  lVar1 = local_60[0];
  if (local_60[0] == 0) {
    return 0;
  }
  if (*(long *)(local_60[0] + 0x10) == 0) {
LAB_10012f3a8:
    local_60[1] = 0;
    local_60[0] = 0;
    local_60[3] = 0;
    local_60[2] = 0;
    _swift_bridgeObjectRelease(lVar1);
LAB_10012f3b8:
    FUN_1000fb4c4(local_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    _swift_bridgeObjectRetain(local_60[0]);
    uVar5 = 0;
    lVar3 = -0x2fffffffffffffeb;
    FUN_100071370(0xd000000000000015);
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar1);
      goto LAB_10012f3a8;
    }
    FUN_10000cbfc(*(long *)(lVar1 + 0x38) + lVar3 * 0x20,local_60);
    _swift_bridgeObjectRelease_n(lVar1,2);
    if (local_60[3] == 0) goto LAB_10012f3b8;
    puVar4 = &local_61;
    _swift_dynamicCast(puVar4,local_60,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_Bool_100eac570,6);
    if ((int)puVar4 != 0) goto LAB_10012f3d4;
  }
  local_61 = 0;
LAB_10012f3d4:
  IVar2 = *(ID *)(unaff_x20 + 0xe8);
  objc_stub::lock(IVar2);
  *(undefined1 *)(unaff_x20 + 0xf0) = local_61;
  IVar2 = objc_stub::unlock(IVar2);
  return IVar2;
}



/* Address: 0x10012f400 | FUN_10012f400 */

void FUN_10012f400(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  long local_38;
  
  puVar1 = &DAT_100c2eec8;
  _swift_getKeyPath();
  puVar2 = puVar1;
  FUN_10012fef0();
  _swift_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
  }
  else {
    if (*(long *)(puVar2 + 0x10) != 0) {
      _swift_bridgeObjectRetain(puVar2);
      lVar3 = 0x617254726f727265;
      uVar5 = 0xed0000676e696b63;
      FUN_100071370(0x617254726f727265);
      if ((uVar5 & 1) != 0) {
        FUN_10000cbfc(*(long *)(puVar2 + 0x38) + lVar3 * 0x20,&local_50);
        _swift_bridgeObjectRelease_n(puVar2,2);
        if (local_38 != 0) {
          puVar1 = &DAT_100fae898;
          FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
          puVar4 = param_1;
          _swift_dynamicCast(param_1,&local_50,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
          if (((ulong)puVar4 & 1) != 0) {
            return;
          }
          goto LAB_10012f51c;
        }
        goto LAB_10012f504;
      }
      _swift_bridgeObjectRelease(puVar2);
    }
    uStack_48 = 0;
    local_50 = 0;
    local_38 = 0;
    uStack_40 = 0;
    _swift_bridgeObjectRelease(puVar2);
  }
LAB_10012f504:
  FUN_1000fb4c4(&local_50,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10012f51c:
  *param_1 = 0;
  return;
}



/* Address: 0x10012f538 | FUN_10012f538 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10012f538(undefined8 param_1)

{
  undefined *puVar1;
  DispatchWorkItemFlags DVar2;
  OS_dispatch_queue *pOVar3;
  undefined *puVar4;
  void *aBlock;
  DispatchQoS DVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 unaff_x20;
  long lVar8;
  long lVar9;
  DispatchWorkItemFlags qos;
  undefined *local_a0;
  long local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eae670;
  local_98 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  lVar8 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar9 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  qos.unknown = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_1000f8a74();
  (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  puVar4 = &DAT_100eb8628;
  _swift_allocObject(&DAT_100eb8628,0x20,7);
  *(undefined8 *)(puVar4 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  local_70 = FUN_1001343ec;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100eb8640;
  local_68 = puVar4;
  aBlock = __Block_copy(&local_90);
  DVar5.unknown = local_68;
  _swift_bridgeObjectRetain(param_1);
  _swift_retain();
  _swift_release();
  Dispatch::DispatchQoS::get_unspecified(DVar5);
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = &DAT_100fafdf0;
  FUN_100003a00(&DAT_100fafdf0,puVar1,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100fafdf8;
  FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
  puVar7 = &DAT_100fafe00;
  FUN_100134584(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(lVar8,&local_90,puVar4,puVar7,DVar2.unknown,puVar6);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_98 + 8))(lVar8,DVar2.unknown);
  (**(code **)(lVar9 + 8))(qos.unknown,local_a0);
  return;
}



/* Address: 0x10012f760 | FUN_10012f760 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10012f760(undefined8 param_1,undefined8 param_2)

{
  ID self;
  
  FUN_1001348cc(param_2);
  self = NSNotificationCenter::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  if (DAT_100fb00e0 != -1) {
    _swift_once(&DAT_100fb00e0,FUN_1001269dc);
  }
  NSNotificationCenter::postNotificationName_object_(self,DAT_1010572f0,0);
  return 0;
}



/* Address: 0x10012f7e4 | FUN_10012f7e4 */

void FUN_10012f7e4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined *puVar13;
  long unaff_x20;
  ID IVar14;
  code *pcVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 local_278;
  undefined1 auStack_240 [72];
  undefined8 local_1f8;
  long lStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  long local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 local_160;
  long lStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  long local_128;
  undefined8 uStack_120;
  undefined8 local_110;
  long lStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  FUN_10012f538();
  IVar14 = *(ID *)(unaff_x20 + 0x58);
  objc_stub::lock(IVar14);
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x98);
  local_f0 = *(undefined8 *)(unaff_x20 + 0x90);
  uStack_d8 = *(undefined8 *)(unaff_x20 + 0xa8);
  local_e0 = *(undefined8 *)(unaff_x20 + 0xa0);
  local_d0 = *(undefined8 *)(unaff_x20 + 0xb0);
  lStack_108 = *(long *)(unaff_x20 + 0x78);
  local_110 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_f8 = *(undefined8 *)(unaff_x20 + 0x88);
  local_100 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  local_c0 = local_110;
  lStack_b8 = lStack_108;
  uStack_b0 = local_100;
  uStack_a8 = uStack_f8;
  local_a0 = local_f0;
  uStack_98 = uStack_e8;
  uStack_90 = local_e0;
  uStack_88 = uStack_d8;
  local_80 = local_d0;
  FUN_1000f8cac(&local_110,&local_160,&DAT_100fb09e0,&DAT_100c2ee80);
  FUN_1000fb4c4(&local_c0,&DAT_100fb09e0,&DAT_100c2ee80);
  objc_stub::unlock(IVar14);
  uVar9 = local_d0;
  uVar8 = uStack_d8;
  uVar7 = local_e0;
  uVar6 = uStack_e8;
  uVar5 = local_f0;
  uVar4 = uStack_f8;
  uVar3 = local_100;
  lVar2 = lStack_108;
  uVar1 = local_110;
  if (lStack_108 != 0) {
    objc_stub::lock(IVar14);
    if (*(char *)(unaff_x20 + 0x68) == '\x01') {
      uVar12 = *(undefined8 *)(unaff_x20 + 0xb0);
      lVar17 = *(long *)(unaff_x20 + 0x78);
      uVar18 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_148 = *(undefined8 *)(unaff_x20 + 0x88);
      uStack_150 = *(undefined8 *)(unaff_x20 + 0x80);
      uStack_138 = *(undefined8 *)(unaff_x20 + 0x98);
      local_140 = *(undefined8 *)(unaff_x20 + 0x90);
      lVar19 = *(long *)(unaff_x20 + 0xa8);
      uStack_130 = *(undefined8 *)(unaff_x20 + 0xa0);
      local_160 = uVar18;
      lStack_158 = lVar17;
      local_128 = lVar19;
      uStack_120 = uVar12;
      if (lVar17 == 0) {
        lVar16 = 0;
        local_278 = 0;
      }
      else {
        _swift_retain();
        lVar16 = lVar19;
        local_278 = uVar12;
      }
      uStack_1e0 = *(undefined8 *)(unaff_x20 + 0x88);
      local_1e8 = *(undefined8 *)(unaff_x20 + 0x80);
      uStack_1d0 = *(undefined8 *)(unaff_x20 + 0x98);
      local_1d8 = *(undefined8 *)(unaff_x20 + 0x90);
      local_1c8 = *(undefined8 *)(unaff_x20 + 0xa0);
      local_1f8 = uVar18;
      lStack_1f0 = lVar17;
      local_1c0 = lVar19;
      uStack_1b8 = uVar12;
      FUN_1000f8cac(&local_160,auStack_240,&DAT_100fb09e0,&DAT_100c2ee80);
      FUN_1000fb4c4(&local_1f8,&DAT_100fb09e0,&DAT_100c2ee80);
      uStack_188 = *(undefined8 *)(unaff_x20 + 0x98);
      local_190 = *(undefined8 *)(unaff_x20 + 0x90);
      uStack_178 = *(undefined8 *)(unaff_x20 + 0xa8);
      uStack_180 = *(undefined8 *)(unaff_x20 + 0xa0);
      local_170 = *(undefined8 *)(unaff_x20 + 0xb0);
      uStack_1a8 = *(undefined8 *)(unaff_x20 + 0x78);
      local_1b0 = *(undefined8 *)(unaff_x20 + 0x70);
      uStack_198 = *(undefined8 *)(unaff_x20 + 0x88);
      uStack_1a0 = *(undefined8 *)(unaff_x20 + 0x80);
      *(undefined8 *)(unaff_x20 + 0x70) = uVar1;
      *(long *)(unaff_x20 + 0x78) = lVar2;
      *(undefined8 *)(unaff_x20 + 0x80) = uVar3;
      *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
      *(undefined8 *)(unaff_x20 + 0x90) = uVar5;
      *(undefined8 *)(unaff_x20 + 0x98) = uVar6;
      *(undefined8 *)(unaff_x20 + 0xa8) = uVar8;
      *(undefined8 *)(unaff_x20 + 0xa0) = uVar7;
      *(undefined8 *)(unaff_x20 + 0xb0) = uVar9;
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(lVar2);
      _swift_bridgeObjectRetain(uVar7);
      _swift_retain(uVar9);
      _swift_bridgeObjectRetain(uVar4);
      FUN_1000fb4c4(&local_1b0,&DAT_100fb09e0,&DAT_100c2ee80);
      if (lVar16 == 0) {
        objc_stub::unlock(IVar14);
        puVar13 = (undefined *)0x0;
        pcVar15 = (code *)0x0;
      }
      else {
        puVar10 = &DAT_100eb85b0;
        _swift_allocObject(&DAT_100eb85b0,0x20,7);
        *(long *)(puVar10 + 0x10) = lVar16;
        *(undefined8 *)(puVar10 + 0x18) = local_278;
        objc_stub::unlock(IVar14);
        puVar13 = &DAT_100eb8588;
        _swift_allocObject(&DAT_100eb8588,0x20,7);
        *(code **)(puVar13 + 0x10) = FUN_100134360;
        *(undefined **)(puVar13 + 0x18) = puVar10;
        pcVar15 = FUN_100134330;
      }
      IVar14 = *(ID *)(unaff_x20 + 0x60);
      objc_stub::lock(IVar14);
      puVar10 = &DAT_100c2ee30;
      _swift_getKeyPath(&DAT_100c2ee30);
      puVar11 = puVar10;
      FUN_10012fef0();
      _swift_release(puVar10);
      objc_stub::unlock(IVar14);
      if (lVar16 == 0) {
        FUN_1000fb4c4(&local_110,&DAT_100fb09e0,&DAT_100c2ee80);
      }
      else {
        _swift_retain(puVar13);
        (*pcVar15)(puVar11);
        FUN_1000fb4c4(&local_110,&DAT_100fb09e0,&DAT_100c2ee80);
        FUN_100004550(pcVar15,puVar13);
        FUN_100004550(pcVar15,puVar13);
      }
      _swift_bridgeObjectRelease(puVar11);
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x68) = 1;
      objc_stub::unlock(IVar14);
      IVar14 = *(ID *)(unaff_x20 + 0x170);
      objc_stub::lock(IVar14);
      FUN_100130518(&local_160);
      objc_stub::unlock(IVar14);
      IVar14 = *(ID *)(unaff_x20 + 0x180);
      objc_stub::lock(IVar14);
      _swift_beginAccess(unaff_x20 + 0x188,&local_160,0,0);
      lVar17 = *(long *)(unaff_x20 + 0x188);
      _swift_bridgeObjectRetain(lVar17);
      objc_stub::unlock(IVar14);
      if (*(long *)(lVar17 + 0x10) == 0) {
        _swift_bridgeObjectRelease(lVar17);
        lVar17 = 0;
      }
      puVar13 = &DAT_100eb8560;
      _swift_allocObject(&DAT_100eb8560,0x28,7);
      *(long *)(puVar13 + 0x10) = unaff_x20;
      *(undefined8 *)(puVar13 + 0x20) = uVar9;
      *(undefined8 *)(puVar13 + 0x18) = uVar8;
      _swift_retain(uVar9);
      _swift_retain();
      FUN_100119fc0(uVar1,lVar2,uVar3,uVar4,uVar5,uVar6,uVar7,local_160,lVar17,FUN_100134324,puVar13
                   );
      FUN_1000fb4c4(&local_110,&DAT_100fb09e0,&DAT_100c2ee80);
      _swift_bridgeObjectRelease(local_160);
      _swift_release(puVar13);
      _swift_bridgeObjectRelease(lVar17);
      FUN_100004550(0,0);
    }
  }
  return;
}



/* Address: 0x10012fc3c | FUN_10012fc3c */

bool FUN_10012fc3c(void)

{
  undefined *puVar1;
  ID self;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long local_70 [3];
  undefined *local_58;
  
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  lVar2 = *(long *)(unaff_x20 + 0x158);
  lVar5 = *(long *)(lVar2 + 0x10);
  if (lVar5 != 0) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x100);
    *(long *)(unaff_x20 + 0x100) = lVar2;
    _swift_bridgeObjectRetain_n(lVar2,3);
    _swift_bridgeObjectRelease(lVar2);
    _swift_bridgeObjectRelease(uVar4);
    lVar3 = lVar2;
    FUN_100137da0();
    puVar1 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    local_70[0] = lVar3;
    local_58 = puVar1;
    FUN_10015ab00(9,local_70);
    _swift_bridgeObjectRelease(lVar2);
    FUN_100004594(local_70);
    lVar3 = *(long *)(unaff_x20 + 0x160);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x130);
    *(long *)(unaff_x20 + 0x130) = lVar3;
    _swift_bridgeObjectRetain_n(lVar3,2);
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = lVar3;
    FUN_100137da0();
    local_70[0] = lVar2;
    local_58 = puVar1;
    FUN_10015ab00(10,local_70);
    _swift_bridgeObjectRelease(lVar3);
    FUN_100004594(local_70);
  }
  objc_stub::unlock(self);
  return lVar5 != 0;
}



/* Address: 0x10012fd68 | FUN_10012fd68 */

void FUN_10012fd68(undefined8 *param_1,long param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  undefined1 auStack_60 [32];
  
  lVar3 = *(long *)(param_2 + 0x158);
  if (*(long *)(lVar3 + 0x10) == 0) {
    uStack_78 = 0;
    local_80 = 0;
    local_68 = 0;
    uStack_70 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar3);
    lVar1 = param_3;
    uVar2 = param_4;
    FUN_100071370(param_3);
    if ((uVar2 & 1) == 0) {
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
      _swift_bridgeObjectRelease(lVar3);
    }
    else {
      FUN_10000cbfc(*(long *)(lVar3 + 0x38) + lVar1 * 0x20,&local_80);
      _swift_bridgeObjectRelease(lVar3);
      if (local_68 != 0) {
        FUN_100011080(&local_80,auStack_60);
        FUN_10000cbfc(auStack_60,param_1);
        lVar3 = *(long *)(param_2 + 0x160);
        if (*(long *)(lVar3 + 0x10) == 0) {
          param_1[5] = 0;
          param_1[4] = 0;
          param_1[7] = 0;
          param_1[6] = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar3);
          FUN_100071370(param_3);
          if ((param_4 & 1) == 0) {
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[7] = 0;
            param_1[6] = 0;
          }
          else {
            FUN_10000cbfc(*(long *)(lVar3 + 0x38) + param_3 * 0x20,param_1 + 4);
          }
          _swift_bridgeObjectRelease(lVar3);
        }
        FUN_100004594(auStack_60);
        *(byte *)(param_1 + 8) = (*(byte *)(param_2 + 0x168) ^ 0xff) & 1;
        return;
      }
    }
  }
  FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x10012fec0 | FUN_10012fec0 */

void FUN_10012fec0(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x130);
  *(undefined8 *)(*param_2 + 0x130) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x10012fef0 | FUN_10012fef0 */

long FUN_10012fef0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long local_40;
  long local_38;
  
  _swift_retain();
  _swift_getAtKeyPath(&local_38,&stack0xffffffffffffffa8,param_1);
  _swift_release();
  if (local_38 != 0) {
    _swift_bridgeObjectRelease();
    goto LAB_10012fff4;
  }
  FUN_10015a838(&stack0xffffffffffffffa8,param_2);
  if (local_40 == 0) {
    FUN_1000fb4c4(&stack0xffffffffffffffa8,&DAT_100fae668,&DAT_100c2e4a0);
LAB_10012ffc8:
    lVar3 = 0;
  }
  else {
    puVar1 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    plVar2 = &local_38;
    _swift_dynamicCast(plVar2,&stack0xffffffffffffffa8,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       puVar1,6);
    if (((ulong)plVar2 & 1) == 0) goto LAB_10012ffc8;
    lVar3 = local_38;
    FUN_1001389ac();
    _swift_bridgeObjectRelease(local_38);
  }
  local_38 = lVar3;
  _swift_retain();
  _swift_setAtReferenceWritableKeyPath(&stack0xffffffffffffffa8,param_1,&local_38);
  _swift_release();
LAB_10012fff4:
  _swift_retain();
  _swift_getAtKeyPath(&local_38,&stack0xffffffffffffffa8,param_1);
  _swift_release();
  return local_38;
}



/* Address: 0x100130030 | FUN_100130030 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100130030(byte *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined *puVar2;
  NSDictionary *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 local_88 [3];
  undefined *local_70;
  undefined1 auStack_68 [24];
  undefined8 local_48;
  
  _swift_beginAccess(param_2 + 0x178,auStack_68,0,0);
  uVar6 = *(undefined8 *)(param_2 + 0x178);
  _swift_beginAccess(param_2 + 0x178,local_88,0x21,0);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(param_3);
  uVar1 = *(undefined8 *)(param_2 + 0x178);
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  local_48 = *(undefined8 *)(param_2 + 0x178);
  *(undefined8 *)(param_2 + 0x178) = 0x8000000000000000;
  FUN_100103e2c(param_3,FUN_100152dbc,0,uVar1,&local_48);
  _swift_bridgeObjectRelease(param_3);
  uVar1 = local_48;
  *(undefined8 *)(param_2 + 0x178) = local_48;
  _swift_endAccess(local_88);
  uVar5 = uVar1;
  _swift_retain();
  FUN_100137da0();
  _swift_release(uVar1);
  puVar2 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_88[0] = uVar5;
  local_70 = puVar2;
  FUN_10015ab00(0x18,local_88);
  FUN_100004594(local_88);
  uVar5 = *(undefined8 *)(param_2 + 0x178);
  uVar1 = uVar5;
  _swift_bridgeObjectRetain(uVar5);
  FUN_100137da0();
  _swift_bridgeObjectRelease(uVar5);
  puVar2 = &_OBJC_CLASS___NSDictionary;
  _objc_allocWithZone();
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar1);
  IVar4 = objc_stub::initWithDictionary_((ID)puVar2,pNVar3);
  pNVar3 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(uVar6);
  IVar4 = objc_stub::isEqualTo_(IVar4,pNVar3);
  *param_1 = (byte)IVar4 ^ 1;
  return 0;
}



/* Address: 0x10013021c | FUN_10013021c */

void FUN_10013021c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long unaff_x20;
  ID self;
  long lVar3;
  undefined *local_78 [3];
  undefined *local_60;
  undefined1 auStack_58 [24];
  
  self = *(ID *)(unaff_x20 + 0x170);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x178,auStack_58,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  lVar3 = *(long *)(*(long *)(unaff_x20 + 0x178) + 0x10);
  *(undefined **)(unaff_x20 + 0x178) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease();
  FUN_100137da0();
  puVar2 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_78[0] = puVar1;
  local_60 = puVar2;
  FUN_10015ab00(0x18,local_78);
  FUN_100004594(local_78);
  objc_stub::unlock(self);
  if (lVar3 != 0) {
    FUN_1001347d0();
  }
  return;
}



/* Address: 0x1001302dc | FUN_1001302dc */

void FUN_1001302dc(long param_1,long param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long unaff_x21;
  long lVar9;
  long local_80 [3];
  undefined *local_68;
  long local_58;
  
  _swift_beginAccess(param_1 + 0x188,local_80,0x21,0);
  uVar2 = *(ulong *)(param_1 + 0x188);
  _swift_isUniquelyReferenced_nonNull_native();
  lVar9 = *(long *)(param_1 + 0x188);
  *(undefined8 *)(param_1 + 0x188) = 0x8000000000000000;
  lVar3 = param_2;
  uVar6 = param_3;
  local_58 = lVar9;
  FUN_100071370();
  uVar7 = (ulong)~(uint)uVar6 & 1;
  lVar8 = *(long *)(lVar9 + 0x10) + uVar7;
  if (SCARRY8(*(long *)(lVar9 + 0x10),uVar7)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001304dc);
    (*pcVar1)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar8) {
    FUN_10017134c(lVar8,uVar2);
    lVar9 = local_58;
    lVar3 = param_2;
    uVar2 = param_3;
    FUN_100071370();
    if (((uint)uVar6 & 1) != ((uint)uVar2 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100130518);
      (*pcVar1)();
    }
  }
  else if ((uVar2 & 1) == 0) {
    FUN_100170898();
    lVar9 = local_58;
  }
  *(long *)(param_1 + 0x188) = lVar9;
  _swift_retain(lVar9);
  if ((uVar6 & 1) == 0) {
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_10016fc7c(lVar3,param_2,param_3,puVar4,lVar9);
    _swift_bridgeObjectRetain(param_3);
  }
  lVar8 = *(long *)(lVar9 + 0x38);
  _swift_release(lVar9);
  _swift_bridgeObjectRetain(param_4);
  uVar5 = *(undefined8 *)(lVar8 + lVar3 * 8);
  _swift_isUniquelyReferenced_nonNull_native(uVar5);
  local_58 = *(long *)(lVar8 + lVar3 * 8);
  *(undefined8 *)(lVar8 + lVar3 * 8) = 0x8000000000000000;
  FUN_100103e2c(param_4,FUN_100152dbc,0,uVar5,&local_58);
  if (unaff_x21 != 0) {
    _swift_bridgeObjectRelease(param_4);
    uVar5 = *(undefined8 *)(lVar8 + lVar3 * 8);
    *(long *)(lVar8 + lVar3 * 8) = local_58;
    _swift_bridgeObjectRelease(uVar5);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100130508);
    (*pcVar1)();
  }
  _swift_bridgeObjectRelease(param_4);
  uVar5 = *(undefined8 *)(lVar8 + lVar3 * 8);
  *(long *)(lVar8 + lVar3 * 8) = local_58;
  _swift_bridgeObjectRelease(uVar5);
  _swift_endAccess(local_80);
  lVar8 = lVar9;
  _swift_retain();
  FUN_10013804c();
  _swift_release(lVar9);
  puVar4 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_80[0] = lVar8;
  local_68 = puVar4;
  FUN_10015ab00(0x19,local_80);
  FUN_100004594(local_80);
  return;
}



/* Address: 0x100130518 | FUN_100130518 */

void FUN_100130518(undefined8 *param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x21;
  undefined8 uVar5;
  long lVar6;
  undefined8 local_78;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x178,auStack_58,0,0);
  uVar5 = *(undefined8 *)(param_2 + 0x178);
  *param_1 = uVar5;
  lVar1 = PostHogConfig::setDefaultPersonProperties;
  lVar6 = *(long *)(param_2 + 0x20);
  _swift_beginAccess(lVar6 + PostHogConfig::setDefaultPersonProperties,auStack_70,0,0);
  if (*(char *)(lVar6 + lVar1) == '\x01') {
    pcVar2 = *(code **)(param_2 + 0x38);
    uVar3 = uVar5;
    _swift_bridgeObjectRetain();
    (*pcVar2)();
    uVar4 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    local_78 = uVar3;
    FUN_100103e2c(uVar5,FUN_100152dbc,0,uVar4,&local_78);
    if (unaff_x21 != 0) {
      _swift_bridgeObjectRelease(uVar5);
      _swift_release(local_78);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100130618);
      (*pcVar2)();
    }
    _swift_bridgeObjectRelease(uVar5);
    *param_1 = local_78;
  }
  else {
    _swift_bridgeObjectRetain(uVar5);
  }
  return;
}



/* Address: 0x100130618 | FUN_100130618 */

void FUN_100130618(void)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x20;
  ID IVar7;
  long local_80 [3];
  long local_68;
  undefined1 auStack_60 [24];
  long local_48;
  
  uVar3 = 0;
  IVar7 = *(ID *)(unaff_x20 + 0x170);
  objc_stub::lock(IVar7);
  FUN_10015a838(auStack_60,0x18);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_48 == 0) {
    FUN_1000fb4c4(auStack_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar2 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    _swift_dynamicCast(local_80,auStack_60,puVar1 + 8,puVar2,6);
    if ((uVar3 & 1) != 0) {
      lVar4 = local_80[0];
      FUN_1001389ac();
      _swift_bridgeObjectRelease(local_80[0]);
      if (lVar4 != 0) {
        _swift_beginAccess(unaff_x20 + 0x178,local_80,1,0);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x178);
        *(long *)(unaff_x20 + 0x178) = lVar4;
        _swift_bridgeObjectRelease(uVar5);
      }
    }
  }
  objc_stub::unlock(IVar7);
  IVar7 = *(ID *)(unaff_x20 + 0x180);
  objc_stub::lock(IVar7);
  FUN_10015a838(auStack_60,0x19);
  if (local_48 == 0) {
    FUN_1000fb4c4(auStack_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar2 = &DAT_100fb09d8;
    FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
    plVar6 = &local_68;
    _swift_dynamicCast(plVar6,auStack_60,puVar1 + 8,puVar2,6);
    if (((ulong)plVar6 & 1) != 0) {
      lVar4 = local_68;
      FUN_100138c48();
      _swift_bridgeObjectRelease(local_68);
      if (lVar4 != 0) {
        _swift_beginAccess(unaff_x20 + 0x188,auStack_60,1,0);
        uVar5 = *(undefined8 *)(unaff_x20 + 0x188);
        *(long *)(unaff_x20 + 0x188) = lVar4;
        _swift_bridgeObjectRelease(uVar5);
      }
    }
  }
  objc_stub::unlock(IVar7);
  return;
}



/* Address: 0x1001307b8 | FUN_1001307b8 */

long FUN_1001307b8(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  ulong uVar4;
  long unaff_x20;
  ID self;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long lStack_48;
  
  uStack_58 = 0;
  local_60 = 0;
  lStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  lStack_68 = 0;
  uStack_70 = 0;
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  puVar1 = &DAT_100c2ee30;
  _swift_getKeyPath();
  puVar2 = puVar1;
  FUN_10012fef0();
  _swift_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
  }
  else {
    if (*(long *)(puVar2 + 0x10) == 0) {
LAB_100130888:
      uStack_98 = 0;
      local_a0 = 0;
      local_88 = 0;
      uStack_90 = 0;
      _swift_bridgeObjectRelease(puVar2);
    }
    else {
      _swift_bridgeObjectRetain(puVar2);
      lVar3 = param_1;
      uVar4 = param_2;
      FUN_100071370(param_1);
      if ((uVar4 & 1) == 0) {
        _swift_bridgeObjectRelease(puVar2);
        goto LAB_100130888;
      }
      FUN_10000cbfc(*(long *)(puVar2 + 0x38) + lVar3 * 0x20,&local_a0);
      _swift_bridgeObjectRelease_n(puVar2,2);
    }
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  uStack_58 = uStack_98;
  local_60 = local_a0;
  lStack_48 = local_88;
  uStack_50 = uStack_90;
  puVar1 = &DAT_100c2ee58;
  _swift_getKeyPath();
  puVar2 = puVar1;
  FUN_10012fef0();
  _swift_release(puVar1);
  if (puVar2 == (undefined *)0x0) {
    FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
    goto LAB_100130974;
  }
  if (*(long *)(puVar2 + 0x10) == 0) {
LAB_10013094c:
    uStack_98 = 0;
    local_a0 = 0;
    local_88 = 0;
    uStack_90 = 0;
  }
  else {
    _swift_bridgeObjectRetain(puVar2);
    lVar3 = param_1;
    uVar4 = param_2;
    FUN_100071370(param_1);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(puVar2);
      goto LAB_10013094c;
    }
    FUN_10000cbfc(*(long *)(puVar2 + 0x38) + lVar3 * 0x20,&local_a0);
    _swift_bridgeObjectRelease(puVar2);
  }
  _swift_bridgeObjectRelease(puVar2);
  FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
LAB_100130974:
  uStack_78 = uStack_98;
  local_80 = local_a0;
  lStack_68 = local_88;
  uStack_70 = uStack_90;
  objc_stub::unlock(self);
  FUN_1000f8cac(&local_60,&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_88 == 0) {
    FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
    param_1 = 0;
  }
  else {
    FUN_1000fb4c4(&local_a0,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_100133db0(param_1,param_2,&local_60,&local_80);
    FUN_1000fb4c4(&local_80,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_1000fb4c4(&local_60,&DAT_100fae668,&DAT_100c2e4a0);
  }
  return param_1;
}



/* Address: 0x100130a64 | FUN_100130a64 */

undefined * FUN_100130a64(void)

{
  _HashTable _Var1;
  long *plVar2;
  int iVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  Bucket BVar7;
  long lVar8;
  ulong uVar9;
  ulong *puVar10;
  long unaff_x20;
  ulong uVar11;
  ID self;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [32];
  long local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [48];
  undefined1 auStack_90 [32];
  undefined *local_70;
  
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  puVar14 = &DAT_100c2ee30;
  _swift_getKeyPath();
  puVar5 = puVar14;
  FUN_10012fef0();
  _swift_release(puVar14);
  puVar14 = &DAT_100c2ee58;
  _swift_getKeyPath();
  puVar6 = puVar14;
  FUN_10012fef0();
  _swift_release(puVar14);
  objc_stub::unlock(self);
  if (puVar5 == (undefined *)0x0) {
    _swift_bridgeObjectRelease(puVar6);
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar12 = *(long *)(puVar5 + 0x10);
    if (lVar12 == 0) {
      _swift_bridgeObjectRelease(puVar5);
      _swift_bridgeObjectRelease(puVar6);
      puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_70 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10010fad4(0,lVar12,0);
      puVar14 = local_70;
      _Var1.unknown = puVar5 + 0x40;
      BVar7 = Swift::_HashTable::get_startBucket(_Var1);
      lVar17 = 0;
      iVar3 = *(int *)(puVar5 + 0x24);
      do {
        if ((ulong)BVar7.offset >> ((ulong)(byte)puVar5[0x20] & 0x3f) != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e00);
          (*pcVar4)();
        }
        uVar15 = (ulong)BVar7.offset >> 6;
        uVar16 = 1L << (BVar7.offset & 0x3fU);
        if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e04);
          (*pcVar4)();
        }
        if (iVar3 != *(int *)(puVar5 + 0x24)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e08);
          (*pcVar4)();
        }
        plVar2 = (long *)(*(long *)(puVar5 + 0x30) + BVar7.offset * 0x10);
        lVar13 = *plVar2;
        uVar11 = plVar2[1];
        FUN_10000cbfc(*(long *)(puVar5 + 0x38) + BVar7.offset * 0x20,auStack_90);
        local_d0 = lVar13;
        uStack_c8 = uVar11;
        FUN_100011080(auStack_90,auStack_c0);
        FUN_10000cbfc(auStack_c0,auStack_f0);
        if ((puVar6 == (undefined *)0x0) || (*(long *)(puVar6 + 0x10) == 0)) {
          uStack_108 = 0;
          local_110 = 0;
          uStack_f8 = 0;
          uStack_100 = 0;
          _swift_bridgeObjectRetain(uVar11);
        }
        else {
          _swift_bridgeObjectRetain(uVar11);
          _swift_bridgeObjectRetain(puVar6);
          lVar8 = lVar13;
          uVar9 = uVar11;
          FUN_100071370(lVar13);
          if ((uVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar6);
            uStack_108 = 0;
            local_110 = 0;
            uStack_f8 = 0;
            uStack_100 = 0;
          }
          else {
            FUN_10000cbfc(*(long *)(puVar6 + 0x38) + lVar8 * 0x20,&local_110);
            _swift_bridgeObjectRelease(puVar6);
          }
        }
        FUN_100133db0(lVar13,uVar11,auStack_f0,&local_110);
        FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_1000fb4c4(auStack_f0,&DAT_100fae668,&DAT_100c2e4a0);
        FUN_1000fb4c4(&local_d0,&DAT_100fae908,&DAT_100c2eec0);
        uVar11 = *(ulong *)(puVar14 + 0x10);
        local_70 = puVar14;
        if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar11) {
          FUN_10010fad4(1 < *(ulong *)(puVar14 + 0x18),uVar11 + 1,1);
        }
        puVar14 = local_70;
        *(ulong *)(local_70 + 0x10) = uVar11 + 1;
        *(long *)(local_70 + uVar11 * 8 + 0x20) = lVar13;
        uVar11 = 1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
        if (uVar11 <= (ulong)BVar7.offset) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e0c);
          (*pcVar4)();
        }
        if ((*(ulong *)(_Var1.unknown + uVar15 * 8) & uVar16) == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e10);
          (*pcVar4)();
        }
        if (iVar3 != *(int *)(puVar5 + 0x24)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100130e14);
          (*pcVar4)();
        }
        uVar16 = *(ulong *)(_Var1.unknown + uVar15 * 8) & -2L << (BVar7.offset & 0x3fU);
        if (uVar16 == 0) {
          lVar13 = uVar15 << 6;
          puVar10 = (ulong *)(puVar5 + uVar15 * 8 + 0x48);
          do {
            uVar15 = uVar15 + 1;
            if (uVar11 + 0x3f >> 6 <= uVar15) {
              FUN_10000cae0(BVar7.offset,iVar3,0);
              goto LAB_100130b5c;
            }
            uVar16 = *puVar10;
            lVar13 = lVar13 + 0x40;
            puVar10 = puVar10 + 1;
          } while (uVar16 == 0);
          FUN_10000cae0(BVar7.offset,iVar3,0);
          uVar15 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) + lVar13;
        }
        else {
          uVar15 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
          uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
          uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
          uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar15 >> 0x20 | uVar15 << 0x20) | BVar7.offset & 0x7fffffffffffffc0U;
        }
LAB_100130b5c:
        lVar17 = lVar17 + 1;
        BVar7.offset = uVar11;
      } while (lVar17 != lVar12);
      _swift_bridgeObjectRelease(puVar6);
      _swift_bridgeObjectRelease(puVar5);
    }
  }
  return puVar14;
}



/* Address: 0x100130e14 | FUN_100130e14 */

void FUN_100130e14(undefined8 param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  ID self;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined *local_80 [3];
  undefined *local_68;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar7 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  self = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(self);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined **)(unaff_x20 + 0xf8) = puVar2;
  _swift_bridgeObjectRetain_n();
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = puVar2;
  FUN_100137da0();
  puVar4 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_80[0] = puVar3;
  local_68 = puVar4;
  FUN_10015ab00(0xb,local_80);
  _swift_bridgeObjectRelease(puVar2);
  FUN_100004594(local_80);
  puVar2 = puVar5;
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined **)(unaff_x20 + 0x100) = puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = puVar2;
  FUN_100137da0();
  local_80[0] = puVar3;
  local_68 = puVar4;
  FUN_10015ab00(9,local_80);
  _swift_bridgeObjectRelease(puVar2);
  FUN_100004594(local_80);
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined **)(unaff_x20 + 0x130) = puVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar2 = puVar5;
  FUN_100137da0();
  local_80[0] = puVar2;
  local_68 = puVar4;
  FUN_10015ab00(10,local_80);
  _swift_bridgeObjectRelease(puVar5);
  FUN_100004594(local_80);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  _swift_bridgeObjectRelease(uVar6);
  SVar10.bridgeObject = (void *)0x8000000100d92770;
  SVar10.str = (char *)0xd000000000000011;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  FUN_1001723c8(lVar7);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(lVar7,UVar1.unknown);
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined1 *)(unaff_x20 + 0x150) = 1;
  SVar11.bridgeObject = (void *)0x8000000100d92790;
  SVar11.str = (char *)0xd000000000000013;
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  FUN_1001723c8(lVar7);
  (*pcVar8)(lVar7,UVar1.unknown);
  *(undefined1 *)(unaff_x20 + 0x151) = 2;
  SVar12.bridgeObject = (void *)0x8000000100d927b0;
  SVar12.str = (char *)0xd00000000000001f;
  Foundation::URL::appendingPathComponent(SVar12,param_3);
  FUN_1001723c8(lVar7);
  (*pcVar8)(lVar7,UVar1.unknown);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1001310a0 | FUN_1001310a0 */

void FUN_1001310a0(undefined8 param_1,undefined8 param_2,URL param_3)

{
  URL UVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined *local_80 [3];
  undefined *local_68;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = (long)local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined **)(unaff_x20 + 0xf8) = puVar2;
  _swift_bridgeObjectRetain_n();
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = puVar2;
  FUN_100137da0();
  puVar4 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_80[0] = puVar3;
  local_68 = puVar4;
  FUN_10015ab00(0xb,local_80);
  FUN_100004594(local_80);
  _swift_bridgeObjectRelease(puVar2);
  puVar2 = puVar5;
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x100);
  *(undefined **)(unaff_x20 + 0x100) = puVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar3 = puVar2;
  FUN_100137da0();
  local_80[0] = puVar3;
  local_68 = puVar4;
  FUN_10015ab00(9,local_80);
  FUN_100004594(local_80);
  _swift_bridgeObjectRelease(puVar2);
  FUN_1000f8154();
  uVar6 = *(undefined8 *)(unaff_x20 + 0x130);
  *(undefined **)(unaff_x20 + 0x130) = puVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar6);
  puVar2 = puVar5;
  FUN_100137da0();
  local_80[0] = puVar2;
  local_68 = puVar4;
  FUN_10015ab00(10,local_80);
  FUN_100004594(local_80);
  _swift_bridgeObjectRelease(puVar5);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x140);
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  _swift_bridgeObjectRelease(uVar6);
  SVar10.bridgeObject = (void *)0x8000000100d92770;
  SVar10.str = (char *)0xd000000000000011;
  Foundation::URL::appendingPathComponent(SVar10,param_3);
  FUN_1001723c8(lVar7);
  pcVar8 = *(code **)(lVar9 + 8);
  (*pcVar8)(lVar7,UVar1.unknown);
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined1 *)(unaff_x20 + 0x150) = 1;
  SVar11.bridgeObject = (void *)0x8000000100d92790;
  SVar11.str = (char *)0xd000000000000013;
  Foundation::URL::appendingPathComponent(SVar11,param_3);
  FUN_1001723c8(lVar7);
  (*pcVar8)(lVar7,UVar1.unknown);
  *(undefined1 *)(unaff_x20 + 0x151) = 2;
  SVar12.bridgeObject = (void *)0x8000000100d927b0;
  SVar12.str = (char *)0xd00000000000001f;
  Foundation::URL::appendingPathComponent(SVar12,param_3);
  FUN_1001723c8(lVar7);
  (*pcVar8)(lVar7,UVar1.unknown);
  return;
}



/* Address: 0x100131318 | FUN_100131318 */

void FUN_100131318(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ID IVar4;
  long unaff_x20;
  undefined *local_68 [3];
  undefined *local_50;
  undefined1 auStack_48 [24];
  
  IVar4 = *(ID *)(unaff_x20 + 0x60);
  objc_stub::lock(IVar4);
  FUN_1001310a0();
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x158);
  *(undefined **)(unaff_x20 + 0x158) = puVar1;
  _swift_bridgeObjectRelease(uVar3);
  FUN_1000f8154();
  uVar3 = *(undefined8 *)(unaff_x20 + 0x160);
  *(undefined **)(unaff_x20 + 0x160) = puVar2;
  _swift_bridgeObjectRelease(uVar3);
  *(undefined1 *)(unaff_x20 + 0x168) = 0;
  objc_stub::unlock(IVar4);
  IVar4 = *(ID *)(unaff_x20 + 0xb8);
  objc_stub::lock(IVar4);
  *(undefined1 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  objc_stub::unlock(IVar4);
  IVar4 = *(ID *)(unaff_x20 + 0xe8);
  objc_stub::lock(IVar4);
  *(undefined1 *)(unaff_x20 + 0xf0) = 0;
  objc_stub::unlock(IVar4);
  FUN_10013021c();
  IVar4 = *(ID *)(unaff_x20 + 0x180);
  objc_stub::lock(IVar4);
  _swift_beginAccess(unaff_x20 + 0x188,auStack_48,1,0);
  puVar1 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x188);
  *(undefined **)(unaff_x20 + 0x188) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  _swift_bridgeObjectRelease(uVar3);
  FUN_10013804c();
  puVar2 = &DAT_100fb09d8;
  FUN_1000f7830(&DAT_100fb09d8,&DAT_100c2ee28);
  local_68[0] = puVar1;
  local_50 = puVar2;
  FUN_10015ab00(0x19,local_68);
  FUN_100004594(local_68);
  objc_stub::unlock(IVar4);
  return;
}



/* Address: 0x100131450 | FUN_100131450 */

void FUN_100131450(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x120);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100131460 | FUN_100131460 */

void FUN_100131460(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x120);
  *(undefined8 *)(*param_2 + 0x120) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100131490 | FUN_100131490 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100131490(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  FUN_100134504(*(undefined8 *)(unaff_x20 + 0x70),*(undefined8 *)(unaff_x20 + 0x78),
                *(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90),*(undefined8 *)(unaff_x20 + 0x98),
                *(undefined8 *)(unaff_x20 + 0xa0),*(undefined8 *)(unaff_x20 + 0xa8),
                *(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x100));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x120));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x130));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x140));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x158));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x160));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x178));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x188));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x198));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1a0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1a8));
  return;
}



/* Address: 0x1001315a0 | FUN_1001315a0 */

void FUN_1001315a0(void)

{
  FUN_100131490();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001315c0 | FUN_1001315c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001315c0(void)

{
  return ZEXT816(0x100fb0458);
}



/* Address: 0x1001315e0 | FUN_1001315e0 */

void FUN_1001315e0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  _swift_release(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Address: 0x100131620 | FUN_100131620 */

undefined8 * FUN_100131620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  uVar2 = param_2[6];
  uVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar4;
  uVar3 = param_2[8];
  uVar5 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x1001316ac | FUN_1001316ac */

undefined8 * FUN_1001316ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[8];
  uVar1 = param_2[8];
  uVar3 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10013176c | FUN_10013176c */

void FUN_10013176c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  param_1[8] = param_2[8];
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100131790 | FUN_100131790 */

undefined8 * FUN_100131790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(param_1[5]);
  uVar2 = param_1[6];
  uVar1 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[8];
  uVar1 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar1;
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100131804 | FUN_100131804 */

int FUN_100131804(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10013184c | FUN_10013184c */

void FUN_10013184c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10013189c | FUN_10013189c */

undefined1  [16] FUN_10013189c(void)

{
  return ZEXT816(0x100eb8528);
}



/* Address: 0x1001318ac | FUN_1001318ac */

void * FUN_1001318ac(long param_1,code *param_2,undefined8 param_3)

{
  void *pvVar1;
  byte bVar2;
  void *pvVar3;
  undefined *puVar4;
  size_t sVar5;
  void *unaff_x21;
  ulong uVar6;
  size_t sVar7;
  void *local_70;
  void *local_68 [2];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar6 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar7 = uVar6 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar2 & 1) == 0) ||
       (sVar5 = sVar7, _swift_stdlib_isStackAllocationSafe(sVar7,8), (sVar5 & 1) == 0)) {
      _swift_slowAlloc(sVar7,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_1001539bc(local_68,sVar7,uVar6,param_1,param_3,0,&local_70);
      pvVar3 = local_68[0];
      if (unaff_x21 != (void *)0x0) {
        pvVar3 = local_70;
      }
      _swift_slowDealloc(sVar7,0xffffffffffffffff,0xffffffffffffffff);
      pvVar1 = pvVar3;
      goto joined_r0x000100131a84;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar3 = (void *)((long)local_68 + (-8 - (sVar7 + 0xf & 0x3ffffffffffffff0)));
  _bzero(pvVar3,sVar7);
  (*param_2)(pvVar3,uVar6,param_1);
  pvVar1 = unaff_x21;
joined_r0x000100131a84:
  if (unaff_x21 == (void *)0x0) {
    _swift_release(param_1);
  }
  else {
    bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar2 & 1) != 0) {
      puVar4 = &DAT_100faf510;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      _swift_willThrowTypedImpl
                (&local_70,puVar4,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
    pvVar3 = pvVar1;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return pvVar3;
}



/* Address: 0x100131ad0 | FUN_100131ad0 */

void FUN_100131ad0(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  bool bVar7;
  byte bVar8;
  byte *pbVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  byte local_e8;
  undefined7 uStack_e7;
  ulong uStack_e0;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  long local_58;
  
  local_58 = 0;
  uVar12 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(param_3 + 0x40);
  lVar11 = 0;
LAB_100131b50:
  do {
    if (uVar15 == 0) {
      do {
        lVar13 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100131d18);
          (*pcVar6)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar13) {
          FUN_1001533ac(param_1,param_2,local_58,param_3);
          return;
        }
        uVar15 = ((ulong *)(param_3 + 0x40))[lVar13];
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar13 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10);
    uVar14 = uVar10 | lVar13 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar14 * 0x10);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar14 * 0x20,auStack_88);
    local_b8 = uVar3;
    uStack_b0 = uVar4;
    FUN_10000cbfc(auStack_88,auStack_a8);
    FUN_10000cbfc(auStack_a8,auStack_d8);
    _swift_bridgeObjectRetain_n(uVar4,2);
    puVar5 = PTR___type_metadata_for_Any_100eae0c0;
    pbVar9 = &local_e8;
    _swift_dynamicCast(pbVar9,auStack_d8,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_Bool_100eac570,6);
    lVar11 = lVar13;
    if ((int)pbVar9 == 0) {
      FUN_10000cbfc(auStack_a8,auStack_d8);
      FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
      pbVar9 = &local_e8;
      _swift_dynamicCast(pbVar9,auStack_d8,puVar5 + 8,PTR___type_metadata_for_Swift_String_100eac208
                         ,6);
      uVar14 = uStack_e0;
      if (((ulong)pbVar9 & 1) == 0) {
        FUN_100004594(auStack_88);
        _swift_bridgeObjectRelease(uVar4);
        goto LAB_100131b50;
      }
      uVar2 = CONCAT71(uStack_e7,local_e8);
      _swift_bridgeObjectRelease(uStack_e0);
      uVar2 = uVar2 & 0xffffffffffff;
      if ((uVar14 & 0x2000000000000000) != 0) {
        uVar2 = uVar14 >> 0x38 & 0xf;
      }
      bVar8 = uVar2 != 0;
    }
    else {
      FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
      bVar8 = local_e8;
    }
    FUN_100004594(auStack_88);
    _swift_bridgeObjectRelease(uVar4);
    if ((bVar8 & 1) != 0) {
      uVar14 = (uVar10 & 0xffffffffffffffc0 | lVar13 << 6) >> 3;
      *(ulong *)(param_1 + uVar14) = *(ulong *)(param_1 + uVar14) | 1L << (uVar10 & 0x3f);
      bVar7 = SCARRY8(local_58,1);
      local_58 = local_58 + 1;
      if (bVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100131cdc);
        (*pcVar6)();
      }
    }
  } while( true );
}



/* Address: 0x100131d18 | FUN_100131d18 */

void FUN_100131d18(long param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 *puVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  long local_108;
  undefined1 auStack_f8 [8];
  undefined8 local_f0;
  undefined1 auStack_e8 [8];
  undefined8 local_e0;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  ulong local_58;
  
  local_108 = 0;
  uVar10 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  local_58 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    local_58 = ~(-1L << (uVar10 & 0x3f));
  }
  local_58 = local_58 & *(ulong *)(param_3 + 0x40);
  lVar9 = 0;
  do {
    while( true ) {
      if (local_58 == 0) {
        do {
          lVar11 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100131f64);
            (*pcVar5)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar11) {
            FUN_1001533ac(param_1,param_2,local_108,param_3);
            return;
          }
          local_58 = ((ulong *)(param_3 + 0x40))[lVar11];
          lVar9 = lVar9 + 1;
        } while (local_58 == 0);
        uVar8 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        local_58 = local_58 - 1 & local_58;
      }
      else {
        uVar8 = (local_58 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_58 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        local_58 = local_58 - 1 & local_58;
        lVar11 = lVar9;
      }
      uVar8 = LZCOUNT(uVar8);
      uVar12 = uVar8 | lVar11 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar12 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar12 * 0x20,auStack_88);
      local_b8 = uVar2;
      uStack_b0 = uVar3;
      FUN_10000cbfc(auStack_88,auStack_a8);
      FUN_1000f8cac(&local_b8,auStack_e8,&DAT_100fae908,&DAT_100c2eec0);
      uVar2 = local_e0;
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRelease(uVar2);
      puVar4 = PTR___type_metadata_for_Any_100eae0c0;
      puVar7 = auStack_f8;
      _swift_dynamicCast(puVar7,auStack_d8,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_Bool_100eac570,6);
      lVar9 = lVar11;
      if ((int)puVar7 == 0) break;
LAB_100131d98:
      FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
      FUN_100004594(auStack_88);
      _swift_bridgeObjectRelease(uVar3);
    }
    FUN_1000f8cac(&local_b8,auStack_e8,&DAT_100fae908,&DAT_100c2eec0);
    _swift_bridgeObjectRelease(local_e0);
    puVar7 = auStack_f8;
    _swift_dynamicCast(puVar7,auStack_d8,puVar4 + 8,PTR___type_metadata_for_Swift_String_100eac208,6
                      );
    if ((int)puVar7 != 0) {
      _swift_bridgeObjectRelease(local_f0);
      goto LAB_100131d98;
    }
    FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
    FUN_100004594(auStack_88);
    _swift_bridgeObjectRelease(uVar3);
    uVar12 = (uVar8 & 0xffffffffffffffc0 | lVar11 << 6) >> 3;
    *(ulong *)(param_1 + uVar12) = *(ulong *)(param_1 + uVar12) | 1L << (uVar8 & 0x3f);
    bVar6 = SCARRY8(local_108,1);
    local_108 = local_108 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100131f2c);
      (*pcVar5)();
    }
  } while( true );
}



/* Address: 0x100131f64 | FUN_100131f64 */

void FUN_100131f64(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar3 = *unaff_x20;
  lVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  lVar1 = lVar10;
  if (uVar11 == 0) {
    uVar9 = lVar4 + 0x40U >> 6;
    uVar11 = uVar9;
    if ((long)uVar9 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar8 = uVar11 - 1;
    do {
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1001320ec);
        (*pcVar7)();
      }
      if ((long)uVar9 <= lVar1) {
        uVar11 = 0;
        uStack_68 = 0;
        local_70 = 0;
        uStack_58 = 0;
        uStack_60 = 0;
        uStack_78 = 0;
        local_80 = 0;
        goto LAB_100132010;
      }
      uVar11 = *(ulong *)(lVar5 + lVar1 * 8);
      lVar10 = lVar10 + 1;
    } while (uVar11 == 0);
  }
  lVar8 = lVar1;
  uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar8 << 6;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x10);
  local_80 = *puVar2;
  uVar6 = puVar2[1];
  uStack_78 = uVar6;
  FUN_10000cbfc(*(long *)(lVar3 + 0x38) + uVar9 * 0x20,&local_70);
  _swift_bridgeObjectRetain(uVar6);
LAB_100132010:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar4;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = uVar11;
  pcVar7 = (code *)unaff_x20[5];
  FUN_1000f8cac(&local_80,&local_b0,&DAT_100fb09e8,&DAT_100c2eeb8);
  if (lStack_a8 == 0) {
    FUN_1000fb4c4(&local_80,&DAT_100fb09e8,&DAT_100c2eeb8);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
  }
  else {
    lStack_d8 = lStack_a8;
    local_e0 = local_b0;
    uStack_c8 = uStack_98;
    uStack_d0 = uStack_a0;
    uStack_b8 = uStack_88;
    local_c0 = local_90;
    (*pcVar7)(param_1,&local_e0);
    FUN_1000fb4c4(&local_e0,&DAT_100fae908,&DAT_100c2eec0);
    FUN_1000fb4c4(&local_80,&DAT_100fb09e8,&DAT_100c2eeb8);
  }
  return;
}



/* Address: 0x1001320ec | thunk_FUN_10013892c */

void thunk_FUN_10013892c(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x100);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1001320f0 | thunk_FUN_10013893c */

void thunk_FUN_10013893c(void)

{
  FUN_10013893c();
  return;
}



/* Address: 0x1001320f4 | FUN_1001320f4 */

void FUN_1001320f4(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x130);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100132104 | FUN_100132104 */

void FUN_100132104(long param_1,undefined8 param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  long local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long local_f8;
  long local_e8;
  ulong local_e0;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [40];
  
  local_118 = 0;
  uVar11 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar11 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(param_3 + 0x40);
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100132348);
          (*pcVar5)();
        }
        if ((long)(uVar11 + 0x3f >> 6) <= lVar12) {
          FUN_1001533ac(param_1,param_2,local_118,param_3);
          return;
        }
        uVar13 = ((ulong *)(param_3 + 0x40))[lVar12];
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar9 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar7;
    }
    uVar10 = LZCOUNT(uVar9);
    uVar9 = uVar10 | lVar12 << 6;
    puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar9 * 0x10);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    FUN_10000cbfc(*(long *)(param_3 + 0x38) + uVar9 * 0x20,auStack_88);
    local_b8 = uVar2;
    uStack_b0 = uVar3;
    FUN_10000cbfc(auStack_88,auStack_a8);
    FUN_1000f8cac(&local_b8,&local_e8,&DAT_100fae908,&DAT_100c2eec0);
    uVar9 = local_e0;
    lVar7 = local_e8;
    if (*(long *)(param_4 + 0x10) == 0) {
      uStack_108 = 0;
      local_110 = 0;
      local_f8 = 0;
      uStack_100 = 0;
      _swift_bridgeObjectRetain_n(uVar3,2);
    }
    else {
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRetain(param_4);
      uVar8 = uVar9;
      FUN_100071370(lVar7);
      if ((uVar8 & 1) == 0) {
        _swift_bridgeObjectRelease(param_4);
        uStack_108 = 0;
        local_110 = 0;
        local_f8 = 0;
        uStack_100 = 0;
      }
      else {
        FUN_10000cbfc(*(long *)(param_4 + 0x38) + lVar7 * 0x20,&local_110);
        _swift_bridgeObjectRelease(param_4);
      }
    }
    FUN_1000fb4c4(&local_b8,&DAT_100fae908,&DAT_100c2eec0);
    _swift_bridgeObjectRelease(uVar9);
    lVar4 = local_f8;
    FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
    FUN_100004594(auStack_d8);
    FUN_100004594(auStack_88);
    _swift_bridgeObjectRelease(uVar3);
    lVar7 = lVar12;
    if (lVar4 != 0) {
      uVar9 = (uVar10 & 0xffffffffffffffc0 | lVar12 << 6) >> 3;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar10 & 0x3f);
      bVar6 = SCARRY8(local_118,1);
      local_118 = local_118 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100132310);
        (*pcVar5)();
      }
    }
  } while( true );
}



/* Address: 0x100132348 | FUN_100132348 */

undefined1 * FUN_100132348(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  size_t sVar6;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80 [2];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar6 = uVar5 * 8;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
    if (((bVar1 & 1) == 0) ||
       (sVar4 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar4 & 1) == 0)) {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_1001539bc(local_80,sVar6,uVar5,param_1,FUN_1001345c8,auStack_70,&local_88);
      puVar2 = local_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = local_88;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x000100132550;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = auStack_90 + -(sVar6 + 0xf & 0x3ffffffffffffff0);
  _bzero(puVar2,sVar6);
  _swift_bridgeObjectRetain(param_2);
  FUN_100132104(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_bridgeObjectRelease(param_2);
joined_r0x000100132550:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_1);
  }
  else {
    local_88 = puVar2;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100faf510;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      _swift_willThrowTypedImpl
                (&local_88,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}



/* Address: 0x1001325a4 | FUN_1001325a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100132ed8) */
/* WARNING: Removing unreachable block (ram,0x000100132ecc) */
/* WARNING: Removing unreachable block (ram,0x000100132fe0) */
/* WARNING: Removing unreachable block (ram,0x000100132eb4) */
/* WARNING: Removing unreachable block (ram,0x000100132ee8) */
/* WARNING: Removing unreachable block (ram,0x0001001330ec) */

long FUN_1001325a4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  char ***pppcVar1;
  code *pcVar2;
  AutoreleaseFrequency AVar3;
  QoSClass QVar4;
  undefined7 extraout_var;
  Attributes AVar5;
  DispatchQoS DVar6;
  undefined7 extraout_var_00;
  undefined *puVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  OS_dispatch_queue *this;
  undefined8 *puVar12;
  undefined8 *puVar13;
  OS_dispatch_queue *pOVar14;
  char ****ppppcVar15;
  char ****ppppcVar16;
  char *pcVar17;
  code *pcVar18;
  char *pcVar19;
  void *pvVar20;
  long lVar21;
  long extraout_x8;
  undefined1 *puVar22;
  long extraout_x8_00;
  Attributes attributes;
  long extraout_x8_01;
  long extraout_x8_02;
  char ****ppppcVar23;
  long unaff_x20;
  undefined *puVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String separator_00;
  char ***local_c8;
  code *local_c0;
  code *local_b8;
  void *pvStack_b0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  long lVar7;
  String separator;
  
  AVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar21 = *(long *)(CONCAT71(extraout_var,AVar3.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  puVar22 = &stack0xfffffffffffffec0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar5 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar5.unknown + -8) + 0x40));
  attributes.unknown = puVar22 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar6.unknown + -8) + 0x40));
  QVar4 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,QVar4.value);
  lVar25 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  DVar6.unknown =
       attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + 0x10) = 0x7574616546736168;
  *(undefined8 *)(unaff_x20 + 0x18) = 0xef7367616c466572;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0x58) = IVar9;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(ID *)(unaff_x20 + 0x60) = IVar9;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0xb8) = IVar9;
  *(undefined1 *)(unaff_x20 + 0xc0) = 0;
  *(undefined8 *)(unaff_x20 + 200) = 0;
  *(undefined1 *)(unaff_x20 + 0xd0) = 1;
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined1 *)(unaff_x20 + 0xe0) = 1;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0xe8) = IVar9;
  *(undefined1 *)(unaff_x20 + 0xf0) = 0;
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  *(undefined8 *)(unaff_x20 + 0x100) = 0;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0x108) = IVar9;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0x110) = IVar9;
  *(undefined1 *)(unaff_x20 + 0x118) = 0;
  *(undefined8 *)(unaff_x20 + 0x120) = 0;
  *(undefined2 *)(unaff_x20 + 0x128) = 0;
  *(undefined8 *)(unaff_x20 + 0x138) = 0;
  *(undefined8 *)(unaff_x20 + 0x130) = 0;
  *(undefined8 *)(unaff_x20 + 0x148) = 0;
  *(undefined8 *)(unaff_x20 + 0x140) = 0;
  *(undefined2 *)(unaff_x20 + 0x150) = 0x201;
  *(undefined1 *)(unaff_x20 + 0x168) = 0;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0x170) = IVar9;
  puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  *(undefined **)(unaff_x20 + 0x178) = puVar8;
  puVar8 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  *(ID *)(unaff_x20 + 0x180) = IVar9;
  puVar8 = puVar24;
  FUN_1000f891c();
  *(undefined **)(unaff_x20 + 0x188) = puVar8;
  *(undefined1 *)(unaff_x20 + 400) = 1;
  puVar8 = &DAT_100fb09f0;
  FUN_1000f7830(&DAT_100fb09f0,&DAT_100c2eef0);
  puVar11 = puVar8;
  _swift_allocObject();
  puVar10 = puVar24;
  FUN_1000f8a24();
  *(undefined **)(puVar11 + 0x10) = puVar10;
  puVar10 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar10);
  *(undefined8 *)(puVar11 + 0x20) = 0;
  *(undefined8 *)(puVar11 + 0x28) = 0;
  *(ID *)(puVar11 + 0x18) = IVar9;
  *(undefined **)(unaff_x20 + 0x198) = puVar11;
  _swift_allocObject(puVar8,0x30,7);
  puVar11 = puVar24;
  FUN_1000f8a24();
  *(undefined **)(puVar8 + 0x10) = puVar11;
  puVar11 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar11);
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(ID *)(puVar8 + 0x18) = IVar9;
  *(undefined **)(unaff_x20 + 0x1a0) = puVar8;
  puVar8 = &DAT_100fae308;
  FUN_1000f7830(&DAT_100fae308,&DAT_100c2e060);
  _swift_allocObject();
  puVar11 = puVar24;
  FUN_1000f8140();
  *(undefined **)(puVar8 + 0x10) = puVar11;
  puVar11 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar11);
  *(undefined8 *)(puVar8 + 0x20) = 0;
  *(undefined8 *)(puVar8 + 0x28) = 0;
  *(ID *)(puVar8 + 0x18) = IVar9;
  *(undefined **)(unaff_x20 + 0x1a8) = puVar8;
  this = (OS_dispatch_queue *)0x0;
  FUN_1000f8a74();
  (**(code **)(lVar25 + 0x68))
            (DVar6.unknown,
             *(undefined4 *)
              PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
             ,lVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar6.unknown);
  (**(code **)(lVar25 + 8))(DVar6.unknown,lVar7);
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_c8 = (char ***)puVar24;
  puVar12 = &DAT_100fae2f0;
  FUN_100003a00(&DAT_100fae2f0,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar8 = &DAT_100fae2f8;
  FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
  puVar13 = &DAT_100fae300;
  FUN_100134584(&DAT_100fae300,&DAT_100fae2f8,&DAT_100c2db90,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(attributes.unknown,&local_c8,puVar8,puVar13,AVar5.unknown,puVar12);
  (**(code **)(lVar21 + 0x68))
            (puVar22,*(undefined4 *)
                      PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar3.value));
  SVar27.bridgeObject = (void *)0x8000000100d92ab0;
  SVar27.str = (char *)0xd000000000000018;
  pOVar14 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                      (this,SVar27,
                       (DispatchQoS)
                       (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                       attributes,(AutoreleaseFrequency)(__int8)puVar22);
  *(OS_dispatch_queue **)(unaff_x20 + 0x1b0) = pOVar14;
  *(long *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x30) = param_3;
  *(undefined8 *)(unaff_x20 + 0x38) = param_4;
  *(undefined8 *)(unaff_x20 + 0x40) = param_5;
  *(undefined8 *)(unaff_x20 + 0x48) = param_6;
  *(undefined8 *)(unaff_x20 + 0x50) = param_7;
  lVar21 = PostHogConfig::bootstrap;
  pvVar20 = (void *)0x0;
  _swift_beginAccess(param_1 + PostHogConfig::bootstrap,auStack_80,0);
  lVar7 = PostHogBootstrapConfig::featureFlags;
  lVar25 = *(long *)(param_1 + lVar21);
  puVar8 = (undefined *)0x0;
  if (lVar25 != 0) {
    pvVar20 = (void *)0x0;
    _swift_beginAccess(lVar25 + PostHogBootstrapConfig::featureFlags,auStack_98,0);
    puVar8 = *(undefined **)(lVar25 + lVar7);
    _swift_bridgeObjectRetain(puVar8);
  }
  _swift_retain(param_2);
  _swift_retain(param_3);
  _swift_retain(param_5);
  FUN_100011128(param_6,param_7);
  puVar24 = puVar8;
  FUN_10016ead0();
  _swift_bridgeObjectRelease(puVar8);
  if (puVar24 == (undefined *)0x0) {
    puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  puVar8 = puVar24;
  _swift_bridgeObjectRetain();
  pcVar2 = FUN_100131d18;
  pcVar18 = FUN_10012c008;
  FUN_1001318ac();
  _swift_bridgeObjectRelease(puVar24);
  ppppcVar23 = *(char *****)(puVar8 + 0x10);
  ppppcVar15 = (char ****)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (ppppcVar23 != (char ****)0x0) {
    _swift_retain(puVar8);
    ppppcVar15 = ppppcVar23;
    FUN_10010f6fc(ppppcVar23,0);
    ppppcVar16 = &local_c8;
    thunk_FUN_10015371c(ppppcVar16,ppppcVar15 + 4,ppppcVar23,puVar8);
    pcVar2 = local_c0;
    FUN_10000c650(local_c8);
    pcVar18 = local_b8;
    pvVar20 = pvStack_b0;
    if (ppppcVar16 != ppppcVar23) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100132b78);
      (*pcVar2)();
    }
  }
  local_c8 = (char ***)ppppcVar15;
  FUN_1001124b0(&local_c8);
  _swift_release(puVar8);
  pppcVar1 = local_c8;
  if ((char ***)local_c8[2] == (char ***)0x0) {
    _swift_release(local_c8);
  }
  else {
    local_c8 = (char ***)0x0;
    local_c0 = (code *)0xe000000000000000;
    Swift::_StringGuts::grow(0x36,(_StringGuts)pcVar2);
    SVar26.bridgeObject = (void *)0x8000000100d92ad0;
    SVar26.str = (char *)0xd000000000000023;
    SVar32.bridgeObject = pvVar20;
    SVar32.str = (char *)pcVar18;
    Swift::String::append(SVar26,SVar32);
    pcVar17 = &DAT_100faf898;
    FUN_1000f7830(&DAT_100faf898,&DAT_100c2eeb0);
    puVar8 = &DAT_100fb09f8;
    FUN_100134584(&DAT_100fb09f8,&DAT_100faf898,&DAT_100c2eeb0,
                  PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar27 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_release(pppcVar1);
    SVar33.bridgeObject = puVar8;
    SVar33.str = pcVar17;
    Swift::String::append(SVar27,SVar33);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    SVar28.bridgeObject = (void *)0x8000000100d92b00;
    SVar28.str = (char *)0xd000000000000011;
    SVar34.bridgeObject = puVar8;
    SVar34.str = pcVar17;
    Swift::String::append(SVar28,SVar34);
    pcVar2 = local_c0;
    _swift_bridgeObjectRetain(local_c0);
    SVar29.bridgeObject = (void *)0x8000000100d92b20;
    SVar29.str = (char *)0xd00000000000005c;
    SVar35.bridgeObject = puVar8;
    SVar35.str = pcVar17;
    Swift::String::append(SVar29,SVar35);
    _swift_bridgeObjectRelease(pcVar2);
    pcVar2 = local_c0;
    pppcVar1 = local_c8;
    if (DAT_101057340 == '\x01') {
      pcVar17 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar19 = (char *)0x7;
      _swift_allocObject();
      pcVar17[0x18] = '\x02';
      pcVar17[0x19] = '\0';
      pcVar17[0x1a] = '\0';
      pcVar17[0x1b] = '\0';
      pcVar17[0x1c] = '\0';
      pcVar17[0x1d] = '\0';
      pcVar17[0x1e] = '\0';
      pcVar17[0x1f] = '\0';
      pcVar17[0x10] = '\x01';
      pcVar17[0x11] = '\0';
      pcVar17[0x12] = '\0';
      pcVar17[0x13] = '\0';
      pcVar17[0x14] = '\0';
      pcVar17[0x15] = '\0';
      pcVar17[0x16] = '\0';
      pcVar17[0x17] = '\0';
      local_c8 = (char ***)0x676f4874736f505b;
      local_c0 = (code *)0xea0000000000205d;
      SVar30.bridgeObject = pcVar2;
      SVar30.str = (char *)pppcVar1;
      SVar36.bridgeObject = puVar8;
      SVar36.str = pcVar19;
      Swift::String::append(SVar30,SVar36);
      *(undefined **)(pcVar17 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char ****)(pcVar17 + 0x20) = local_c8;
      *(code **)(pcVar17 + 0x28) = local_c0;
      SVar31.bridgeObject = (void *)0x20;
      SVar31.str = pcVar17;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar31,separator_00);
      _swift_release(pcVar17);
    }
    _swift_bridgeObjectRelease(pcVar2);
  }
  puVar8 = puVar24;
  FUN_1001318ac(puVar24,FUN_100131ad0,FUN_10012c140);
  _swift_bridgeObjectRelease(puVar24);
  lVar7 = PostHogBootstrapConfig::featureFlagPayloads;
  lVar21 = *(long *)(param_1 + lVar21);
  if (lVar21 == 0) {
    puVar24 = (undefined *)0x0;
  }
  else {
    _swift_beginAccess(lVar21 + PostHogBootstrapConfig::featureFlagPayloads,&local_c8,0,0);
    puVar24 = *(undefined **)(lVar21 + lVar7);
    _swift_bridgeObjectRetain(puVar24);
  }
  puVar11 = puVar24;
  FUN_10016ead0();
  _swift_bridgeObjectRelease(puVar24);
  if (puVar11 == (undefined *)0x0) {
    puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000f8154();
  }
  *(undefined **)(unaff_x20 + 0x158) = puVar8;
  _swift_retain(puVar8);
  puVar24 = puVar11;
  FUN_100132348(puVar11,puVar8);
  _swift_bridgeObjectRelease(puVar11);
  _swift_release();
  *(undefined **)(unaff_x20 + 0x160) = puVar24;
  FUN_100130618();
  FUN_10012fc3c();
  if (((ulong)puVar8 & 1) != 0) {
    IVar9 = *(ID *)(unaff_x20 + 0x60);
    objc_stub::lock(IVar9);
    puVar8 = &DAT_100c2ee30;
    _swift_getKeyPath(&DAT_100c2ee30);
    puVar24 = puVar8;
    FUN_10012fef0();
    _swift_release(puVar8);
    objc_stub::unlock(IVar9);
    FUN_10012f538(puVar24);
    _swift_bridgeObjectRelease(puVar24);
  }
  FUN_10012d5e0();
  FUN_10012f2cc();
  FUN_10012c388();
  return unaff_x20;
}



/* Address: 0x1001330fc | FUN_1001330fc */

void FUN_1001330fc(undefined8 *param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  bool bVar6;
  long lVar7;
  undefined *puVar8;
  undefined **ppuVar9;
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined *puVar16;
  ulong uVar17;
  ulong uVar18;
  long lVar19;
  ulong *puVar20;
  ulong uVar21;
  uint uVar22;
  undefined *local_178;
  undefined *local_160;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined *local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined *local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  local_160 = (undefined *)*param_1;
  if (*(long *)(local_160 + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_160);
    lVar7 = 0x7367616c66;
    uVar21 = 0;
    FUN_100071370(0x7367616c66);
    if ((uVar21 & 1) == 0) {
LAB_100133d58:
      _swift_bridgeObjectRelease(local_160);
    }
    else {
      FUN_10000cbfc(*(long *)(local_160 + 0x38) + lVar7 * 0x20,&local_a0);
      _swift_bridgeObjectRelease(local_160);
      puVar8 = &DAT_100fae898;
      FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
      puVar12 = PTR___type_metadata_for_Any_100eae0c0;
      ppuVar9 = &local_d0;
      _swift_dynamicCast(ppuVar9,&local_a0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar8,6);
      puVar3 = local_d0;
      if (((ulong)ppuVar9 & 1) != 0) {
        puVar20 = (ulong *)(local_d0 + 0x40);
        uVar18 = 1L << ((ulong)(byte)local_d0[0x20] & 0x3f);
        uVar21 = 0xffffffffffffffff;
        if ((local_d0[0x20] & 0x3f) < 6) {
          uVar21 = ~(-1L << (uVar18 & 0x3f));
        }
        uVar21 = uVar21 & *puVar20;
        uVar18 = uVar18 + 0x3f >> 6;
        local_178 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
        local_160 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
        lVar7 = 0;
        do {
          if (uVar21 == 0) {
            uVar21 = uVar18;
            if ((long)uVar18 <= lVar7 + 1) {
              uVar21 = lVar7 + 1;
            }
            lVar19 = uVar21 - 1;
            lVar10 = lVar7;
            do {
              lVar7 = lVar10 + 1;
              if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d80);
                (*pcVar5)();
              }
              if ((long)uVar18 <= lVar7) {
                uVar21 = 0;
                puStack_b8 = (undefined *)0x0;
                local_c0 = 0;
                uStack_a8 = 0;
                local_b0 = 0;
                puStack_c8 = (undefined *)0x0;
                local_d0 = (undefined *)0x0;
                goto LAB_100133288;
              }
              uVar21 = puVar20[lVar7];
              lVar10 = lVar10 + 1;
            } while (uVar21 == 0);
          }
          uVar17 = (uVar21 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar21 & 0x5555555555555555) << 1;
          uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
          uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
          uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
          uVar21 = uVar21 - 1 & uVar21;
          uVar17 = LZCOUNT(uVar17 >> 0x20 | uVar17 << 0x20) | lVar7 << 6;
          puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x30) + uVar17 * 0x10);
          local_d0 = (undefined *)*puVar1;
          puVar11 = (undefined *)puVar1[1];
          puStack_c8 = puVar11;
          FUN_10000cbfc(*(long *)(puVar3 + 0x38) + uVar17 * 0x20,&local_c0);
          _swift_bridgeObjectRetain(puVar11);
          lVar19 = lVar7;
LAB_100133288:
          puVar4 = puStack_c8;
          puVar11 = local_d0;
          puStack_98 = puStack_c8;
          local_a0 = local_d0;
          local_88 = puStack_b8;
          uStack_90 = local_c0;
          uStack_78 = uStack_a8;
          local_80 = local_b0;
          if (puStack_c8 == (undefined *)0x0) {
            _swift_release(puVar3);
            local_a0 = local_160;
            local_88 = puVar8;
            _swift_bridgeObjectRetain(local_160);
            FUN_10016e6ec(&local_a0,0x4665727574616566,0xec0000007367616c);
            local_a0 = local_178;
            local_88 = puVar8;
            FUN_10016e6ec(&local_a0,0xd000000000000013,0x8000000100d92870);
            goto LAB_100133d58;
          }
          FUN_100011080(&uStack_90,&local_d0);
          FUN_10000cbfc(&local_d0,&local_f0);
          ppuVar9 = &local_110;
          _swift_dynamicCast(ppuVar9,&local_f0,puVar12 + 8,puVar8,6);
          puVar14 = local_110;
          puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
          lVar7 = lVar19;
          if (((ulong)ppuVar9 & 1) == 0) {
            FUN_100004594(&local_d0);
            _swift_bridgeObjectRelease(puVar4);
          }
          else {
            puVar15 = puVar11;
            if (*(long *)(local_110 + 0x10) == 0) {
LAB_100133400:
              if (*(long *)(puVar14 + 0x10) == 0) {
LAB_100133478:
                uVar22 = 2;
              }
              else {
                _swift_bridgeObjectRetain(puVar14);
                lVar10 = 0x64656c62616e65;
                uVar17 = 0;
                FUN_100071370(0x64656c62616e65);
                if ((uVar17 & 1) == 0) {
                  _swift_bridgeObjectRelease(puVar14);
                  goto LAB_100133478;
                }
                FUN_10000cbfc(*(long *)(puVar14 + 0x38) + lVar10 * 0x20,&local_f0);
                _swift_bridgeObjectRelease(puVar14);
                ppuVar9 = &local_110;
                _swift_dynamicCast(ppuVar9,&local_f0,puVar12 + 8,
                                   PTR___type_metadata_for_Swift_Bool_100eac570,6);
                if (((ulong)ppuVar9 & 1) == 0) goto LAB_100133478;
                uVar22 = (uint)(byte)local_110;
              }
              bVar6 = uVar22 != 2;
              uVar2 = 0;
              if (bVar6) {
                uVar2 = uVar22;
              }
              local_110 = (undefined *)(ulong)uVar2;
              local_f8 = (undefined *)0x0;
              if (bVar6) {
                local_f8 = PTR___type_metadata_for_Swift_Bool_100eac570;
              }
              uStack_108 = 0;
              uStack_100 = 0;
              if (!bVar6) {
                FUN_1000fb4c4(&local_110,&DAT_100fae668,&DAT_100c2e4a0);
                _swift_bridgeObjectRetain(local_160);
                puVar12 = puVar4;
                FUN_100071370();
                _swift_bridgeObjectRelease(local_160);
                if (((ulong)puVar12 & 1) == 0) {
                  uStack_e8 = 0;
                  local_f0 = 0;
                  uStack_d8 = 0;
                  uStack_e0 = 0;
                }
                else {
                  puVar12 = local_160;
                  _swift_isUniquelyReferenced_nonNull_native();
                  local_110 = local_160;
                  if ((int)puVar12 == 0) {
                    FUN_10017057c();
                  }
                  local_160 = local_110;
                  _swift_bridgeObjectRelease
                            (*(undefined8 *)(*(long *)(local_110 + 0x30) + (long)puVar11 * 0x10 + 8)
                            );
                  FUN_100011080(*(long *)(local_160 + 0x38) + (long)puVar11 * 0x20,&local_f0);
                  FUN_1000d9d9c(puVar11,local_160);
                }
                puVar12 = PTR___type_metadata_for_Any_100eae0c0;
                FUN_1000fb4c4(&local_f0,&DAT_100fae668,&DAT_100c2e4a0);
                FUN_100004594(&local_d0);
                _swift_bridgeObjectRelease(puVar4);
                goto LAB_1001335f4;
              }
              FUN_100011080(&local_110,&local_f0);
              puVar12 = local_160;
              _swift_isUniquelyReferenced_nonNull_native();
              local_110 = local_160;
              puVar13 = puVar11;
              puVar16 = puVar4;
              FUN_100071370();
              uVar17 = (ulong)~(uint)puVar16 & 1;
              lVar10 = *(long *)(local_160 + 0x10) + uVar17;
              if (SCARRY8(*(long *)(local_160 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d84);
                (*pcVar5)();
              }
              if (*(long *)(local_160 + 0x18) < lVar10) {
                FUN_100170ddc(lVar10,puVar12);
                puVar13 = puVar11;
                puVar12 = puVar4;
                FUN_100071370();
                if (((uint)puVar16 & 1) != ((uint)puVar12 & 1)) goto LAB_100133da0;
              }
              else if (((ulong)puVar12 & 1) == 0) {
                FUN_10017057c();
              }
              puVar12 = local_110;
              local_160 = local_110;
              if (((ulong)puVar16 & 1) == 0) {
                *(ulong *)(local_110 + ((ulong)puVar13 >> 6) * 8 + 0x40) =
                     *(ulong *)(local_110 + ((ulong)puVar13 >> 6) * 8 + 0x40) |
                     1L << ((ulong)puVar13 & 0x3f);
                puVar1 = (undefined8 *)(*(long *)(local_110 + 0x30) + (long)puVar13 * 0x10);
                *puVar1 = puVar11;
                puVar1[1] = puVar4;
                FUN_100011080(&local_f0,*(long *)(local_110 + 0x38) + (long)puVar13 * 0x20);
                lVar10 = *(long *)(puVar12 + 0x10);
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d88);
                  (*pcVar5)();
                }
                *(long *)(puVar12 + 0x10) = lVar10 + 1;
                _swift_bridgeObjectRetain(puVar4);
              }
              else {
                lVar10 = *(long *)(local_110 + 0x38) + (long)puVar13 * 0x20;
                FUN_100004594(lVar10);
                FUN_100011080(&local_f0,lVar10);
              }
              puVar12 = PTR___type_metadata_for_Any_100eae0c0;
              if ((uVar22 & 1) == 0) {
                FUN_100004594(&local_d0);
                _swift_bridgeObjectRelease(puVar4);
                _swift_bridgeObjectRelease(puVar14);
              }
              else {
                if (*(long *)(puVar14 + 0x10) != 0) {
                  lVar10 = 0x617461646174656d;
                  uVar17 = 0;
                  FUN_100071370(0x617461646174656d);
                  if ((uVar17 & 1) != 0) {
                    FUN_10000cbfc(*(long *)(puVar14 + 0x38) + lVar10 * 0x20,&local_f0);
                    _swift_bridgeObjectRelease(puVar14);
                    ppuVar9 = &local_110;
                    _swift_dynamicCast(ppuVar9,&local_f0,puVar12 + 8,puVar8,6);
                    puVar13 = local_110;
                    if (((ulong)ppuVar9 & 1) != 0) {
                      if (*(long *)(local_110 + 0x10) != 0) {
                        lVar10 = 0x64616f6c796170;
                        uVar17 = 0;
                        FUN_100071370(0x64616f6c796170);
                        if ((uVar17 & 1) != 0) {
                          FUN_10000cbfc(*(long *)(puVar13 + 0x38) + lVar10 * 0x20,&local_110);
                          _swift_bridgeObjectRelease(puVar13);
                          FUN_100011080(&local_110,&local_f0);
                          FUN_10000cbfc(&local_f0,&local_110);
                          uStack_148 = uStack_108;
                          local_150 = local_110;
                          local_138 = local_f8;
                          uStack_140 = uStack_100;
                          if (local_f8 == (undefined *)0x0) goto LAB_100133a50;
                          FUN_100011080(&local_150,&local_130);
                          puVar12 = local_178;
                          _swift_isUniquelyReferenced_nonNull_native();
                          local_150 = local_178;
                          puVar13 = puVar4;
                          FUN_100071370();
                          uVar17 = (ulong)~(uint)puVar13 & 1;
                          lVar10 = *(long *)(local_178 + 0x10) + uVar17;
                          if (SCARRY8(*(long *)(local_178 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                            pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d94);
                            (*pcVar5)();
                          }
                          if (*(long *)(local_178 + 0x18) < lVar10) {
                            FUN_100170ddc(lVar10,puVar12);
                            puVar15 = puVar11;
                            puVar12 = puVar4;
                            FUN_100071370();
                            if (((uint)puVar13 & 1) != ((uint)puVar12 & 1)) {
LAB_100133da0:
                              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x100133db0);
                              (*pcVar5)();
                            }
                          }
                          else if (((ulong)puVar12 & 1) == 0) {
                            FUN_10017057c();
                          }
                          local_178 = local_150;
                          if (((ulong)puVar13 & 1) == 0) {
                            *(ulong *)(local_150 + ((ulong)puVar15 >> 6) * 8 + 0x40) =
                                 *(ulong *)(local_150 + ((ulong)puVar15 >> 6) * 8 + 0x40) |
                                 1L << ((ulong)puVar15 & 0x3f);
                            puVar1 = (undefined8 *)
                                     (*(long *)(local_150 + 0x30) + (long)puVar15 * 0x10);
                            *puVar1 = puVar11;
                            puVar1[1] = puVar4;
                            FUN_100011080(&local_130,
                                          *(long *)(local_150 + 0x38) + (long)puVar15 * 0x20);
                            FUN_100004594(&local_f0);
                            FUN_100004594(&local_d0);
                            lVar10 = *(long *)(local_178 + 0x10);
                            if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                              pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d9c);
                              (*pcVar5)();
                            }
                            goto LAB_100133c64;
                          }
                          goto LAB_100133bc0;
                        }
                      }
                      goto LAB_100133a34;
                    }
                    goto LAB_100133a24;
                  }
                }
                _swift_bridgeObjectRelease(puVar14);
                _swift_bridgeObjectRelease(puVar4);
                FUN_100004594(&local_d0);
              }
            }
            else {
              _swift_bridgeObjectRetain(local_110);
              lVar10 = 0x746e6169726176;
              uVar17 = 0;
              FUN_100071370(0x746e6169726176);
              if ((uVar17 & 1) == 0) {
                _swift_bridgeObjectRelease(puVar14);
                goto LAB_100133400;
              }
              FUN_10000cbfc(*(long *)(puVar14 + 0x38) + lVar10 * 0x20,&local_f0);
              _swift_bridgeObjectRelease(puVar14);
              ppuVar9 = &local_110;
              _swift_dynamicCast(ppuVar9,&local_f0,puVar12 + 8,puVar13,6);
              if (((ulong)ppuVar9 & 1) == 0) goto LAB_100133400;
              local_f8 = puVar13;
              FUN_100011080(&local_110,&local_f0);
              puVar12 = local_160;
              _swift_isUniquelyReferenced_nonNull_native();
              local_110 = local_160;
              puVar13 = puVar11;
              puVar16 = puVar4;
              FUN_100071370();
              uVar17 = (ulong)~(uint)puVar16 & 1;
              lVar10 = *(long *)(local_160 + 0x10) + uVar17;
              if (SCARRY8(*(long *)(local_160 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d8c);
                (*pcVar5)();
              }
              if (*(long *)(local_160 + 0x18) < lVar10) {
                FUN_100170ddc(lVar10,puVar12);
                puVar13 = puVar11;
                puVar12 = puVar4;
                FUN_100071370();
                if (((uint)puVar16 & 1) != ((uint)puVar12 & 1)) goto LAB_100133da0;
              }
              else if (((ulong)puVar12 & 1) == 0) {
                FUN_10017057c();
              }
              puVar12 = local_110;
              local_160 = local_110;
              if (((ulong)puVar16 & 1) == 0) {
                *(ulong *)(local_110 + ((ulong)puVar13 >> 6) * 8 + 0x40) =
                     *(ulong *)(local_110 + ((ulong)puVar13 >> 6) * 8 + 0x40) |
                     1L << ((ulong)puVar13 & 0x3f);
                puVar1 = (undefined8 *)(*(long *)(local_110 + 0x30) + (long)puVar13 * 0x10);
                *puVar1 = puVar11;
                puVar1[1] = puVar4;
                FUN_100011080(&local_f0,*(long *)(local_110 + 0x38) + (long)puVar13 * 0x20);
                lVar10 = *(long *)(puVar12 + 0x10);
                if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d90);
                  (*pcVar5)();
                }
                *(long *)(puVar12 + 0x10) = lVar10 + 1;
                _swift_bridgeObjectRetain(puVar4);
              }
              else {
                lVar10 = *(long *)(local_110 + 0x38) + (long)puVar13 * 0x20;
                FUN_100004594(lVar10);
                FUN_100011080(&local_f0,lVar10);
              }
              puVar12 = PTR___type_metadata_for_Any_100eae0c0;
              if (*(long *)(puVar14 + 0x10) == 0) {
LAB_100133a04:
                _swift_bridgeObjectRelease(puVar14);
                _swift_bridgeObjectRelease(puVar4);
                FUN_100004594(&local_d0);
              }
              else {
                lVar10 = 0x617461646174656d;
                uVar17 = 0;
                FUN_100071370(0x617461646174656d);
                if ((uVar17 & 1) == 0) goto LAB_100133a04;
                FUN_10000cbfc(*(long *)(puVar14 + 0x38) + lVar10 * 0x20,&local_f0);
                _swift_bridgeObjectRelease(puVar14);
                ppuVar9 = &local_110;
                _swift_dynamicCast(ppuVar9,&local_f0,puVar12 + 8,puVar8,6);
                puVar13 = local_110;
                if (((ulong)ppuVar9 & 1) == 0) {
LAB_100133a24:
                  FUN_100004594(&local_d0);
                  puVar14 = puVar4;
LAB_1001335f4:
                  _swift_bridgeObjectRelease(puVar14);
                }
                else if (*(long *)(local_110 + 0x10) == 0) {
LAB_100133a34:
                  _swift_bridgeObjectRelease(puVar13);
                  _swift_bridgeObjectRelease(puVar4);
                  FUN_100004594(&local_d0);
                }
                else {
                  lVar10 = 0x64616f6c796170;
                  uVar17 = 0;
                  FUN_100071370(0x64616f6c796170);
                  if ((uVar17 & 1) == 0) goto LAB_100133a34;
                  FUN_10000cbfc(*(long *)(puVar13 + 0x38) + lVar10 * 0x20,&local_110);
                  _swift_bridgeObjectRelease(puVar13);
                  FUN_100011080(&local_110,&local_f0);
                  FUN_10000cbfc(&local_f0,&local_110);
                  uStack_148 = uStack_108;
                  local_150 = local_110;
                  local_138 = local_f8;
                  uStack_140 = uStack_100;
                  if (local_f8 == (undefined *)0x0) {
LAB_100133a50:
                    local_150 = local_110;
                    uStack_148 = uStack_108;
                    uStack_140 = uStack_100;
                    local_138 = local_f8;
                    FUN_1000fb4c4(&local_150,&DAT_100fae668,&DAT_100c2e4a0);
                    _swift_bridgeObjectRetain(local_178);
                    puVar12 = puVar4;
                    FUN_100071370();
                    _swift_bridgeObjectRelease(local_178);
                    if (((ulong)puVar12 & 1) == 0) {
                      _swift_bridgeObjectRelease(puVar4);
                      FUN_100004594(&local_f0);
                      FUN_100004594(&local_d0);
                      uStack_128 = 0;
                      local_130 = 0;
                      uStack_118 = 0;
                      uStack_120 = 0;
                    }
                    else {
                      puVar12 = local_178;
                      _swift_isUniquelyReferenced_nonNull_native();
                      local_150 = local_178;
                      if ((int)puVar12 == 0) {
                        FUN_10017057c();
                      }
                      local_178 = local_150;
                      _swift_bridgeObjectRelease
                                (*(undefined8 *)
                                  (*(long *)(local_150 + 0x30) + (long)puVar11 * 0x10 + 8));
                      FUN_100011080(*(long *)(local_178 + 0x38) + (long)puVar11 * 0x20,&local_130);
                      FUN_1000d9d9c(puVar11,local_178);
                      _swift_bridgeObjectRelease(puVar4);
                      FUN_100004594(&local_f0);
                      FUN_100004594(&local_d0);
                    }
                    puVar12 = PTR___type_metadata_for_Any_100eae0c0;
                    FUN_1000fb4c4(&local_130,&DAT_100fae668,&DAT_100c2e4a0);
                  }
                  else {
                    FUN_100011080(&local_150,&local_130);
                    puVar12 = local_178;
                    _swift_isUniquelyReferenced_nonNull_native();
                    local_150 = local_178;
                    puVar13 = puVar4;
                    FUN_100071370();
                    uVar17 = (ulong)~(uint)puVar13 & 1;
                    lVar10 = *(long *)(local_178 + 0x10) + uVar17;
                    if (SCARRY8(*(long *)(local_178 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x100133d98);
                      (*pcVar5)();
                    }
                    if (*(long *)(local_178 + 0x18) < lVar10) {
                      FUN_100170ddc(lVar10,puVar12);
                      puVar15 = puVar11;
                      puVar12 = puVar4;
                      FUN_100071370();
                      if (((uint)puVar13 & 1) != ((uint)puVar12 & 1)) goto LAB_100133da0;
                    }
                    else if (((ulong)puVar12 & 1) == 0) {
                      FUN_10017057c();
                    }
                    local_178 = local_150;
                    if (((ulong)puVar13 & 1) == 0) {
                      *(ulong *)(local_150 + ((ulong)puVar15 >> 6) * 8 + 0x40) =
                           *(ulong *)(local_150 + ((ulong)puVar15 >> 6) * 8 + 0x40) |
                           1L << ((ulong)puVar15 & 0x3f);
                      puVar1 = (undefined8 *)(*(long *)(local_150 + 0x30) + (long)puVar15 * 0x10);
                      *puVar1 = puVar11;
                      puVar1[1] = puVar4;
                      FUN_100011080(&local_130,*(long *)(local_150 + 0x38) + (long)puVar15 * 0x20);
                      FUN_100004594(&local_f0);
                      FUN_100004594(&local_d0);
                      lVar10 = *(long *)(local_178 + 0x10);
                      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
                        pcVar5 = (code *)SoftwareBreakpoint(1,0x100133da0);
                        (*pcVar5)();
                      }
LAB_100133c64:
                      *(long *)(local_178 + 0x10) = lVar10 + 1;
                      puVar12 = PTR___type_metadata_for_Any_100eae0c0;
                    }
                    else {
LAB_100133bc0:
                      local_178 = local_150;
                      lVar10 = *(long *)(local_150 + 0x38) + (long)puVar15 * 0x20;
                      FUN_100004594(lVar10);
                      FUN_100011080(&local_130,lVar10);
                      _swift_bridgeObjectRelease(puVar4);
                      FUN_100004594(&local_f0);
                      FUN_100004594(&local_d0);
                      puVar12 = PTR___type_metadata_for_Any_100eae0c0;
                    }
                  }
                }
              }
            }
          }
        } while( true );
      }
    }
  }
  return;
}



/* Address: 0x100133db0 | FUN_100133db0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100133db0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  Encoding EVar3;
  Encoding EVar4;
  NSData *pNVar5;
  ID IVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined1 *puVar11;
  class_t *pcVar12;
  class_t *pcVar13;
  ulong uVar14;
  undefined *extraout_x1;
  _StringGuts _Var15;
  char *pcVar16;
  void *pvVar17;
  undefined *puVar18;
  long extraout_x8;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  long lVar22;
  Encoding using;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String separator;
  undefined1 auStack_e0 [16];
  undefined1 local_d0;
  undefined7 uStack_cf;
  undefined8 uStack_c8;
  objc_super local_c0;
  char *local_b0;
  void *pvStack_a8;
  undefined8 uStack_a0;
  long local_98;
  char *local_90;
  void *pvStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  EVar3 = Encoding::_typeMetadataAccessor();
  lVar22 = *(long *)(EVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar22 + 0x40));
  using.unknown = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_4,&local_90,&DAT_100fae668,&DAT_100c2e4a0);
  puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_78 == 0) {
    FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
LAB_100134130:
    FUN_1000f8cac(param_4,&local_90,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    EVar4.unknown = (undefined *)&local_b0;
    _swift_dynamicCast(EVar4.unknown,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    pvVar17 = pvStack_a8;
    if (((ulong)EVar4.unknown & 1) == 0) goto LAB_100134130;
    local_90 = local_b0;
    pvStack_88 = pvStack_a8;
    Encoding::_get_utf8(EVar4);
    FUN_1001013b8();
    uVar14 = 0;
    EVar4.unknown = using.unknown;
    (extension_Foundation)::Swift::StringProtocol::_data(using,false);
    (**(code **)(lVar22 + 8))(using.unknown,EVar3.unknown);
    _swift_bridgeObjectRelease(pvVar17);
    if (0xe < uVar14 >> 0x3c) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100134320);
      (*pcVar2)();
    }
    pNVar5 = Foundation::Data::_bridgeToObjectiveC((Data)EVar4.unknown);
    FUN_10003bf18(EVar4.unknown,uVar14);
    local_90 = (char *)0x0;
    pvVar17 = (void *)0x4;
    IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar5,4,&local_90);
    if (IVar6 == 0) {
      pcVar7 = local_90;
      _Var15.unknown = extraout_x1;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      local_90 = (char *)0x0;
      pvStack_88 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1f,_Var15);
      local_b0 = local_90;
      pvStack_a8 = pvStack_88;
      SVar23.bridgeObject = (void *)0x8000000100d927d0;
      SVar23.str = (char *)0xd000000000000019;
      SVar27.bridgeObject = pvVar17;
      SVar27.str = (char *)pNVar5;
      Swift::String::append(SVar23,SVar27);
      pcVar8 = &DAT_100fae668;
      puVar9 = &DAT_100c2e4a0;
      pcVar10 = pcVar8;
      FUN_1000f8cac(param_4,&local_90);
      FUN_1000f7830(&DAT_100fae668,&DAT_100c2e4a0);
      SVar23 = Swift::String::_init(&local_90,pcVar8);
      SVar28.bridgeObject = puVar9;
      SVar28.str = pcVar10;
      Swift::String::append(SVar23,SVar28);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      SVar24.bridgeObject = &SUB_e200000000000000;
      SVar24.str = (char *)0x203a;
      SVar29.bridgeObject = puVar9;
      SVar29.str = pcVar10;
      Swift::String::append(SVar24,SVar29);
      puVar9 = &DAT_100faf510;
      local_90 = pcVar7;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      puVar18 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      Swift::__print_unlocked
                (&local_90,&local_b0,puVar9,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      pvVar17 = pvStack_a8;
      pcVar8 = local_b0;
      if (DAT_101057340 == '\x01') {
        pcVar10 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar16 = (char *)0x7;
        _swift_allocObject();
        pcVar10[0x18] = '\x02';
        pcVar10[0x19] = '\0';
        pcVar10[0x1a] = '\0';
        pcVar10[0x1b] = '\0';
        pcVar10[0x1c] = '\0';
        pcVar10[0x1d] = '\0';
        pcVar10[0x1e] = '\0';
        pcVar10[0x1f] = '\0';
        pcVar10[0x10] = '\x01';
        pcVar10[0x11] = '\0';
        pcVar10[0x12] = '\0';
        pcVar10[0x13] = '\0';
        pcVar10[0x14] = '\0';
        pcVar10[0x15] = '\0';
        pcVar10[0x16] = '\0';
        pcVar10[0x17] = '\0';
        local_90 = (char *)0x676f4874736f505b;
        pvStack_88 = (void *)0xea0000000000205d;
        SVar25.bridgeObject = pvVar17;
        SVar25.str = pcVar8;
        SVar30.bridgeObject = puVar18;
        SVar30.str = pcVar16;
        Swift::String::append(SVar25,SVar30);
        *(undefined **)(pcVar10 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar10 + 0x20) = local_90;
        *(void **)(pcVar10 + 0x28) = pvStack_88;
        SVar26.bridgeObject = (void *)0x20;
        SVar26.str = pcVar10;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar26,separator);
        _swift_errorRelease(pcVar7);
        _swift_release(pcVar10);
      }
      else {
        _swift_errorRelease(pcVar7);
      }
      puVar9 = PTR___type_metadata_for_Any_100eae0c0;
      _swift_bridgeObjectRelease(pvVar17);
      goto LAB_100134130;
    }
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar6);
    pvStack_88 = pvStack_a8;
    local_90 = local_b0;
    local_78 = local_98;
    uStack_80 = uStack_a0;
    puVar9 = PTR___type_metadata_for_Any_100eae0c0;
  }
  FUN_1000f8cac(param_3,&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_98 == 0) {
    FUN_1000fb4c4(&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar11 = &local_d0;
    _swift_dynamicCast(puVar11,&local_b0,puVar9 + 8,PTR___type_metadata_for_Swift_String_100eac208,6
                      );
    if (((ulong)puVar11 & 1) != 0) {
      uVar19 = CONCAT71(uStack_cf,local_d0);
      uVar20 = uStack_c8;
      uVar21 = 1;
      goto LAB_10013422c;
    }
  }
  FUN_1000f8cac(param_3,&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_98 == 0) {
    FUN_1000fb4c4(&local_b0,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar11 = &local_d0;
    _swift_dynamicCast(puVar11,&local_b0,puVar9 + 8,PTR___type_metadata_for_Swift_Bool_100eac570,6);
    if (((ulong)puVar11 & 1) != 0) {
      uVar19 = 0;
      uVar20 = 0;
      uVar21 = local_d0;
      goto LAB_10013422c;
    }
  }
  uVar19 = 0;
  uVar20 = 0;
  uVar21 = 0;
LAB_10013422c:
  pcVar12 = (class_t *)0x0;
  FUN_10011597c();
  pcVar13 = pcVar12;
  _objc_allocWithZone();
  puVar1 = (undefined8 *)((long)&pcVar13->isa + PostHogFeatureFlagResult::key);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  *(undefined1 *)((long)&pcVar13->isa + PostHogFeatureFlagResult::enabled) = uVar21;
  puVar1 = (undefined8 *)((long)&pcVar13->isa + PostHogFeatureFlagResult::variant);
  *puVar1 = uVar19;
  puVar1[1] = uVar20;
  FUN_1000f8cac(&local_90,(long)&pcVar13->isa + PostHogFeatureFlagResult::payload,&DAT_100fae668,
                &DAT_100c2e4a0);
  local_c0.receiver = (ID)pcVar13;
  local_c0.super_class = pcVar12;
  _swift_bridgeObjectRetain(param_2);
  IVar6 = _objc_msgSendSuper2(&local_c0,"init");
  FUN_1000fb4c4(&local_90,&DAT_100fae668,&DAT_100c2e4a0);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return IVar6;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100134320 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100134324 | FUN_100134324 */

void FUN_100134324(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10012df20(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100134330 | FUN_100134330 */

void FUN_100134330(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_28;
  
  local_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&local_28);
  return;
}



/* Address: 0x100134360 | FUN_100134360 */

void FUN_100134360(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Address: 0x100134384 | FUN_100134384 */

void FUN_100134384(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}


