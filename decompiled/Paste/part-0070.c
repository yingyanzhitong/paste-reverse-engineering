/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d4d70 | thunk_FUN_1000d4a94 */

void thunk_FUN_1000d4a94(void)

{
  FUN_1000d4a94();
  return;
}



/* Address: 0x1000d4d74 | thunk_FUN_1000d4c5c */

void thunk_FUN_1000d4c5c(void)

{
  thunk_FUN_1000d4c5c();
  return;
}



/* Address: 0x1000d4d78 | thunk_FUN_1000d528c */

void thunk_FUN_1000d528c(void)

{
  FUN_1000d528c();
  return;
}



/* Address: 0x1000d4d7c | FUN_1000d4d7c */

undefined1 FUN_1000d4d7c(undefined1 param_1)

{
  return param_1;
}



/* Address: 0x1000d4d84 | FUN_1000d4d84 */

void FUN_1000d4d84(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1000d528c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000d4dac | FUN_1000d4dac */

void FUN_1000d4dac(ulong *param_1)

{
  byte *unaff_x20;
  
  *param_1 = (ulong)*unaff_x20;
  return;
}



/* Address: 0x1000d4db8 | FUN_1000d4db8 */

void FUN_1000d4db8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d4dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))(0,param_1,param_2,param_3);
  return;
}



/* Address: 0x1000d4dd4 | FUN_1000d4dd4 */

void FUN_1000d4dd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d4dec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))(1,param_1,param_2,param_3);
  return;
}



/* Address: 0x1000d4df0 | FUN_1000d4df0 */

void FUN_1000d4df0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d4e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))(2,param_1,param_2,param_3);
  return;
}



/* Address: 0x1000d4e0c | FUN_1000d4e0c */

void FUN_1000d4e0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
                    /* WARNING: Could not recover jumptable at 0x0001000d4e24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_4 + 8))(3,param_1,param_2,param_3);
  return;
}



/* Address: 0x1000d4e28 | FUN_1000d4e28 */

void FUN_1000d4e28(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  Attributes attributes;
  long lVar8;
  String label;
  undefined1 auStack_70 [8];
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar8 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar7 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar2.unknown + -8) + 0x40));
  attributes.unknown = puVar7 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar3.unknown + -8) + 0x40));
  DVar3.unknown = (undefined *)0x0;
  FUN_1000d54c4();
  DVar4 = Dispatch::DispatchQoS::get_utility(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000d5508();
  puVar5 = &DAT_100fac9e8;
  FUN_1000037f0(&DAT_100fac9e8,&DAT_100c2ba38);
  puVar6 = puVar5;
  FUN_1000d554c();
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,DVar4.unknown);
  (**(code **)(lVar8 + 0x68))
            (puVar7,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,CONCAT71(extraout_var,AVar1.value));
  label.bridgeObject = (void *)0x8000000100d8fa30;
  label.str = (char *)0xd000000000000018;
  DAT_100fac9d0 =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 ((OS_dispatch_queue *)DVar3.unknown,label,
                  (DispatchQoS)(attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                  attributes,(AutoreleaseFrequency)(__int8)puVar7);
  return;
}



/* Address: 0x1000d4fc0 | FUN_1000d4fc0 */

void FUN_1000d4fc0(uint param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  uVar3 = (uint)*(undefined8 *)(unaff_x20 + 0x20);
  lVar7 = *(long *)(unaff_x20 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar7 + 8))();
  if ((uVar3 & 0xff) <= (param_1 & 0xff)) {
    if (DAT_100fac9c8 != -1) {
      _swift_once(&DAT_100fac9c8,FUN_1000d4e28);
    }
    uVar1 = DAT_100fac9d0;
    puVar4 = &DAT_100eb59c0;
    _swift_allocObject(&DAT_100eb59c0,0x30,7);
    *(long *)(puVar4 + 0x10) = unaff_x20;
    puVar4[0x18] = (char)param_1;
    *(undefined8 *)(puVar4 + 0x20) = param_2;
    *(undefined8 *)(puVar4 + 0x28) = param_3;
    puVar5 = &DAT_100eb59e8;
    _swift_allocObject(&DAT_100eb59e8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1000d5488;
    *(undefined **)(puVar5 + 0x18) = puVar4;
    local_60 = FUN_1000386a0;
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_1000d5218;
    puStack_68 = &DAT_100eb5a00;
    local_58 = puVar5;
    aBlock = __Block_copy(&local_80);
    puVar6 = local_58;
    _swift_retain();
    _swift_bridgeObjectRetain(param_3);
    _swift_retain(puVar5);
    _swift_release(puVar6);
    _dispatch_sync(uVar1,aBlock);
    __Block_release(aBlock);
    puVar6 = puVar5;
    _swift_isEscapingClosureAtFileLocation(puVar5,"",0x6e,0x33,0x19,1);
    _swift_release(puVar5);
    _swift_release(puVar4);
    if (((ulong)puVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d5160);
      (*pcVar2)();
    }
  }
  return;
}



/* Address: 0x1000d5160 | FUN_1000d5160 */

void FUN_1000d5160(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  
  lVar6 = *(long *)(*(long *)(param_1 + 0x30) + 0x10);
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    lVar5 = *(long *)(param_1 + 0x30) + 0x20;
    do {
      FUN_100076688(lVar5,auStack_88);
      lVar4 = lStack_68;
      uVar3 = local_70;
      FUN_100004640(auStack_88,local_70);
      (**(code **)(lVar4 + 8))(param_2,uVar1,uVar2,param_3,param_4,uVar3,lVar4);
      FUN_100004594(auStack_88);
      lVar5 = lVar5 + 0x28;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return;
}



/* Address: 0x1000d5218 | FUN_1000d5218 */

void FUN_1000d5218(long param_1)

{
  (**(code **)(param_1 + 0x20))();
  return;
}



/* Address: 0x1000d5238 | FUN_1000d5238 */

void FUN_1000d5238(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d526c | FUN_1000d526c */

void FUN_1000d526c(void)

{
  FUN_1000d4fc0();
  return;
}



/* Address: 0x1000d528c | FUN_1000d528c */

ulong FUN_1000d528c(ulong param_1)

{
  if (3 < param_1) {
    param_1 = 4;
  }
  return param_1;
}



/* Address: 0x1000d529c | thunk_FUN_1000d52a0 */

void thunk_FUN_1000d52a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac910 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b938;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b938,&DAT_100eb5990);
  DAT_100fac910 = pTVar1;
  return;
}



/* Address: 0x1000d52a0 | FUN_1000d52a0 */

void FUN_1000d52a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fac910 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2b938;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2b938,&DAT_100eb5990);
  DAT_100fac910 = pTVar1;
  return;
}



/* Address: 0x1000d52e0 | FUN_1000d52e0 */

void FUN_1000d52e0(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000d52ec | FUN_1000d52ec */

int FUN_1000d52ec(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfc < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 3) {
      iVar2 = 4;
    }
    if (param_2 + 3 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_1000d5368;
        goto LAB_1000d534c;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_1000d534c:
      return ((uint)*param_1 | uVar1 << 8) - 3;
    }
  }
LAB_1000d5368:
  iVar2 = *param_1 - 4;
  if (*param_1 < 4) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x1000d537c | FUN_1000d537c */

void FUN_1000d537c(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 3) {
    uVar3 = 4;
  }
  if (param_3 + 3 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xfc < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfd) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_1000d53fc;
      }
    }
    else if (uVar2 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_1000d53fc:
      *param_1 = (char)param_2 + '\x03';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfd >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfd);
    if (1 < uVar2) {
      if (uVar2 != 2) {
        *(int *)(param_1 + 1) = iVar1;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar1;
      return;
    }
    if (uVar2 != 0) {
      param_1[1] = (char)iVar1;
      return;
    }
  }
  return;
}



/* Address: 0x1000d542c | FUN_1000d542c */

undefined1  [16] FUN_1000d542c(void)

{
  return ZEXT816(0x100eb5990);
}



/* Address: 0x1000d543c | FUN_1000d543c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d543c(void)

{
  return ZEXT816(0x100fac958);
}



/* Address: 0x1000d545c | FUN_1000d545c */

void FUN_1000d545c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000d5488 | FUN_1000d5488 */

void FUN_1000d5488(void)

{
  long unaff_x20;
  
  FUN_1000d5160(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1000d5498 | FUN_1000d5498 */

void FUN_1000d5498(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000d54a8 | FUN_1000d54a8 */

void FUN_1000d54a8(long param_1,long param_2)

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



/* Address: 0x1000d54bc | FUN_1000d54bc */

void FUN_1000d54bc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000d54c4 | FUN_1000d54c4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000d54c4(void)

{
  undefined *puVar1;
  
  if (DAT_100fac9d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fac9d8 = puVar1;
  return;
}



/* Address: 0x1000d5508 | FUN_1000d5508 */

void FUN_1000d5508(void)

{
  Attributes AVar1;
  undefined *puVar2;
  
  if (DAT_100fac9e0 != (undefined *)0x0) {
    return;
  }
  AVar1 = Attributes::_typeMetadataAccessor();
  puVar2 = PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798;
  _swift_getWitnessTable(PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798,AVar1.unknown);
  DAT_100fac9e0 = puVar2;
  return;
}



/* Address: 0x1000d554c | FUN_1000d554c */

void FUN_1000d554c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fac9f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fac9e8;
  FUN_100005c24(&DAT_100fac9e8,&DAT_100c2ba38);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fac9f0 = puVar2;
  return;
}



/* Address: 0x1000d559c | FUN_1000d559c */

void FUN_1000d559c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d55ac | FUN_1000d55ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000d55ac(void)

{
  return ZEXT816(0x100faca38);
}



/* Address: 0x1000d55cc | FUN_1000d55cc */

undefined1 FUN_1000d55cc(void)

{
  long unaff_x20;
  undefined1 auStack_28 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_28,0,0);
  return *(undefined1 *)(unaff_x20 + 0x10);
}



/* Address: 0x1000d55fc | FUN_1000d55fc */

void FUN_1000d55fc(undefined1 param_1)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_38,1,0);
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x1000d5638 | FUN_1000d5638 */

undefined1  [16] FUN_1000d5638(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1000d5668 | _swift_endAccess */

void _swift_endAccess(void)

{
  _swift_endAccess();
  return;
}



/* Address: 0x1000d566c | FUN_1000d566c */

undefined1  [16] FUN_1000d566c(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  _swift_beginAccess(unaff_x20 + 0x10,param_1,0x21,0);
  auVar1._8_8_ = unaff_x20 + 0x10;
  auVar1._0_8_ = _swift_endAccess;
  return auVar1;
}



/* Address: 0x1000d569c | FUN_1000d569c */

void FUN_1000d569c(void)

{
  FUN_1000d57f0(&_TtC12PasteLogging13FileLogOutput::directoryURL);
  return;
}



/* Address: 0x1000d56a8 | FUN_1000d56a8 */

undefined8 FUN_1000d56a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faca98;
  FUN_1000037f0(&DAT_100faca98,&DAT_100c2ba90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000d56f8 | FUN_1000d56f8 */

void FUN_1000d56f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC12PasteLogging13FileLogOutput::directoryURL;
  _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::directoryURL,auStack_48,0x21,0);
  FUN_1000d5754(param_1,unaff_x20 + lVar1);
  _swift_endAccess(auStack_48);
  return;
}



/* Address: 0x1000d5754 | FUN_1000d5754 */

undefined8 FUN_1000d5754(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faca98;
  FUN_1000037f0(&DAT_100faca98,&DAT_100c2ba90);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000d57a4 | FUN_1000d57a4 */

undefined1  [16] FUN_1000d57a4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = _TtC12PasteLogging13FileLogOutput::directoryURL;
  _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::directoryURL,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1000d57e4 | FUN_1000d57e4 */

void FUN_1000d57e4(void)

{
  FUN_1000d57f0(&_TtC12PasteLogging13FileLogOutput::fileURL);
  return;
}



/* Address: 0x1000d57f0 | FUN_1000d57f0 */

void FUN_1000d57f0(undefined8 param_1,long *param_2)

{
  long unaff_x20;
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = *param_2;
  _swift_beginAccess(unaff_x20 + lVar1,auStack_48,0,0);
  FUN_1000d56a8(unaff_x20 + lVar1,param_1);
  return;
}



/* Address: 0x1000d5840 | FUN_1000d5840 */

void FUN_1000d5840(void)

{
  TimeZone timeZone;
  long lVar1;
  code *pcVar2;
  TimeZoneSeparator TVar3;
  TimeSeparator TVar4;
  DateTimeSeparator DVar5;
  DateSeparator DVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined7 extraout_var_01;
  undefined7 extraout_var_02;
  ISO8601FormatStyle IVar7;
  long extraout_x8;
  long extraout_x8_00;
  undefined *puVar8;
  long extraout_x8_01;
  long lVar9;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  TimeZone local_a0;
  long local_98;
  long local_90;
  undefined *local_88;
  long local_80;
  long local_78;
  long lStack_70;
  long local_68;
  
  puVar8 = &DAT_100facbb0;
  FUN_1000037f0(&DAT_100facbb0,&DAT_100c2bb08);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_68 = (long)&local_a0 - extraout_x8;
  local_88 = (undefined *)Foundation::TimeZone::typeMetadataAccessor();
  local_80 = *(long *)(local_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  puVar8 = (undefined *)
           (((long)&local_a0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_a0.unknown = puVar8;
  TVar3 = Foundation::Date::ISO8601FormatStyle::TimeZoneSeparator::typeMetadataAccessor();
  lStack_70 = CONCAT71(extraout_var,TVar3.value);
  local_78 = *(long *)(lStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_90 = lVar9;
  TVar4 = Foundation::Date::ISO8601FormatStyle::TimeSeparator::typeMetadataAccessor();
  local_98 = CONCAT71(extraout_var_00,TVar4.value);
  lVar11 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar9 = lVar9 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Foundation::Date::ISO8601FormatStyle::DateTimeSeparator::typeMetadataAccessor();
  lVar10 = *(long *)(CONCAT71(extraout_var_01,DVar5.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar13 = lVar9 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar6 = Foundation::Date::ISO8601FormatStyle::DateSeparator::typeMetadataAccessor();
  lVar12 = *(long *)(CONCAT71(extraout_var_02,DVar6.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar14 = lVar13 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  IVar7 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  FUN_1000ce204(IVar7.unknown,&DAT_100facaa8);
  puVar8 = local_88;
  FUN_1000cd990(IVar7.unknown,&DAT_100facaa8);
  lVar1 = local_80;
  (**(code **)(lVar12 + 0x68))
            (lVar14,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_DateSeparator_dash_Foundation_Date_ISO8601FormatStyle_DateSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_DateSeparator_100ea7368
             ,CONCAT71(extraout_var_02,DVar6.value));
  lVar12 = local_68;
  (**(code **)(lVar10 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_DateTimeSeparator_standard_Foundation_Date_ISO8601FormatStyle_DateTimeSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_DateTimeSeparator_100ea7358
             ,CONCAT71(extraout_var_01,DVar5.value));
  lVar10 = local_90;
  (**(code **)(lVar11 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_TimeSeparator_colon_Foundation_Date_ISO8601FormatStyle_TimeSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_TimeSeparator_100ea7378
             ,local_98);
  (**(code **)(local_78 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_omitted_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_Type___>_Foundation_Date_ISO8601FormatStyle_TimeZoneSeparator_100ea7398
             ,lStack_70);
  Foundation::TimeZone::_init(0);
  lVar11 = lVar12;
  (**(code **)(lVar1 + 0x30))(lVar12,1,puVar8);
  timeZone.unknown = local_a0.unknown;
  if ((int)lVar11 != 1) {
    (**(code **)(lVar1 + 0x20))(local_a0.unknown,lVar12,puVar8);
    Foundation::Date::ISO8601FormatStyle::init
              ((DateSeparator)(__int8)lVar14,(DateTimeSeparator)(__int8)lVar13,
               (TimeSeparator)(__int8)lVar9,(TimeZoneSeparator)(__int8)lVar10,true,timeZone);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000d5aec);
  (*pcVar2)();
}



/* Address: 0x1000d5aec | FUN_1000d5aec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000d63dc) */
/* WARNING: Removing unreachable block (ram,0x0001000d6128) */

void FUN_1000d5aec(byte param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined1 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  void *pvVar7;
  Encoding EVar8;
  ISO8601FormatStyle IVar9;
  Date DVar10;
  URL UVar11;
  long lVar12;
  ISO8601FormatStyle IVar13;
  char *pcVar14;
  Encoding EVar15;
  ID IVar16;
  undefined *self;
  NSString *pNVar17;
  ID IVar18;
  Date DVar19;
  URL UVar20;
  NSData *pNVar21;
  ulong uVar22;
  _StringGuts extraout_x1;
  void *pvVar23;
  long lVar24;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar25;
  long extraout_x8_02;
  long extraout_x8_03;
  undefined *puVar26;
  code *pcVar27;
  undefined8 uVar28;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  long lVar33;
  long lVar34;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long extraout_x12_04;
  long unaff_x20;
  long lVar35;
  Encoding using;
  long lVar36;
  long lVar37;
  char *pcVar38;
  code *pcVar39;
  long lVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String SVar45;
  String SVar46;
  String SVar47;
  String SVar48;
  String SVar49;
  String SVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  code *local_190;
  char *local_f0;
  void *local_e8;
  undefined4 local_cc;
  undefined1 auStack_c8 [24];
  char *local_b0;
  void *local_a8;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  EVar8 = Encoding::_typeMetadataAccessor();
  lVar24 = *(long *)(EVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar24 + 0x40));
  using.unknown = (undefined *)((long)&local_190 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  IVar9 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  lVar36 = *(long *)(IVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar36 + 0x40));
  pcVar38 = using.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar10 = Foundation::Date::typeMetadataAccessor();
  lVar40 = *(long *)(DVar10.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar40 + 0x40));
  lVar25 = (long)pcVar38 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar26 = &DAT_100faca98;
  FUN_1000037f0(&DAT_100faca98,&DAT_100c2ba90);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar26 + -8) + 0x40));
  lVar29 = lVar25 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar30 = lVar29 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar35 = lVar30 - extraout_x12_00;
  UVar11 = Foundation::URL::typeMetadataAccessor();
  lVar37 = *(long *)(UVar11.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar37 + 0x40));
  lVar31 = lVar35 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar32 = lVar31 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar33 = lVar32 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar34 = lVar33 - extraout_x12_03;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar26 = (undefined *)(lVar34 - extraout_x12_04);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  lVar12 = _TtC12PasteLogging13FileLogOutput::directoryURL;
  if (*(char *)(unaff_x20 + 0x10) != '\x01') {
    return;
  }
  pvVar23 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::directoryURL,auStack_98,0);
  FUN_1000d56a8(unaff_x20 + lVar12,lVar35);
  pcVar27 = *(code **)(lVar37 + 0x30);
  lVar12 = lVar35;
  (*pcVar27)(lVar35,1,UVar11.unknown);
  if ((int)lVar12 == 1) {
    FUN_1000d6600(lVar35);
    return;
  }
  local_190 = *(code **)(lVar37 + 0x20);
  DVar19.unknown = puVar26;
  (*local_190)(puVar26,lVar35,UVar11.unknown);
  Foundation::Date::get_now(DVar19);
  if (DAT_100facaa0 != -1) {
    _swift_once(&DAT_100facaa0,FUN_1000d5840);
  }
  IVar13 = IVar9;
  FUN_1000cd990(IVar9.unknown,&DAT_100facaa8);
  pcVar14 = pcVar38;
  (**(code **)(lVar36 + 0x10))(pcVar38,IVar13.unknown,IVar9.unknown);
  FUN_1000d6648();
  Foundation::Date::_formatted(&local_b0,pcVar38,IVar9.unknown);
  (**(code **)(lVar36 + 8))(pcVar38,IVar9.unknown);
  pcVar39 = *(code **)(lVar40 + 8);
  DVar19 = DVar10;
  (*pcVar39)(lVar25);
  pvVar7 = local_a8;
  SVar46.bridgeObject = local_a8;
  SVar46.str = local_b0;
  local_b0 = (char *)0x0;
  local_a8 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x12,(_StringGuts)DVar19.unknown);
  _swift_bridgeObjectRelease(local_a8);
  local_b0 = (char *)0x5b;
  local_a8 = (void *)0xe100000000000000;
  SVar49.bridgeObject = pvVar23;
  SVar49.str = pcVar14;
  Swift::String::append(SVar46,SVar49);
  _swift_bridgeObjectRelease(pvVar7);
  SVar41.bridgeObject = (void *)0xe300000000000000;
  SVar41.str = (char *)0x5b205d;
  SVar50.bridgeObject = pvVar23;
  SVar50.str = pcVar14;
  Swift::String::append(SVar41,SVar50);
  pcVar38 = (char *)0x4e524157;
  if (param_1 != 2) {
    pcVar38 = (char *)0x524f525245;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_1 != 2) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar2 = (char *)0x4755424544;
  if (param_1 != 0) {
    pcVar2 = (char *)0x4f464e49;
  }
  puVar3 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar3 = &DAT_e400000000000000;
  }
  if (param_1 < 2) {
    puVar1 = puVar3;
    pcVar38 = pcVar2;
  }
  SVar42.bridgeObject = puVar1;
  SVar42.str = pcVar38;
  SVar51.bridgeObject = pvVar23;
  SVar51.str = pcVar14;
  Swift::String::append(SVar42,SVar51);
  _swift_bridgeObjectRelease(puVar1);
  SVar43.bridgeObject = (void *)0xe300000000000000;
  SVar43.str = (char *)0x5b205d;
  SVar52.bridgeObject = pvVar23;
  SVar52.str = pcVar14;
  Swift::String::append(SVar43,SVar52);
  SVar4.bridgeObject = param_3;
  SVar4.str = param_2;
  SVar53.bridgeObject = pvVar23;
  SVar53.str = pcVar14;
  Swift::String::append(SVar4,SVar53);
  SVar44.bridgeObject = &SUB_e200000000000000;
  SVar44.str = (char *)0x205d;
  SVar54.bridgeObject = pvVar23;
  SVar54.str = pcVar14;
  Swift::String::append(SVar44,SVar54);
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  SVar55.bridgeObject = pvVar23;
  SVar55.str = pcVar14;
  Swift::String::append(SVar5,SVar55);
  SVar45.bridgeObject = (void *)0xe100000000000000;
  SVar45.str = (char *)0xa;
  EVar15.unknown = (undefined *)0xa;
  SVar56.bridgeObject = pvVar23;
  SVar56.str = pcVar14;
  Swift::String::append(SVar45,SVar56);
  pvVar23 = local_a8;
  Encoding::_get_utf8(EVar15);
  FUN_1000d668c();
  uVar22 = 0;
  EVar15.unknown = using.unknown;
  (extension_Foundation)::Swift::StringProtocol::_data(using,false);
  (**(code **)(lVar24 + 8))(using.unknown,EVar8.unknown);
  _swift_bridgeObjectRelease(pvVar23);
  lVar12 = _TtC12PasteLogging13FileLogOutput::fileHandle;
  if (0xe < uVar22 >> 0x3c) goto LAB_1000d6508;
  _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::fileHandle,&local_b0,1,0);
  lVar24 = _TtC12PasteLogging13FileLogOutput::fileURL;
  IVar16 = *(ID *)(unaff_x20 + lVar12);
  if (IVar16 == 0) {
    pvVar23 = (void *)0x0;
    _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::fileURL,auStack_c8,0);
    FUN_1000d56a8(unaff_x20 + lVar24,lVar30);
    lVar35 = lVar30;
    (*pcVar27)(lVar30,1,UVar11.unknown);
    if ((int)lVar35 == 1) {
      FUN_1000d6600(lVar30);
LAB_1000d61ac:
      self = &_OBJC_CLASS___NSDateFormatter;
      _objc_allocWithZone();
      IVar16 = objc_stub::init((ID)self);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      objc_stub::setDateFormat_(IVar16,pNVar17);
      IVar18 = NSProcessInfo::processInfo((ID)&_OBJC_CLASS___NSProcessInfo);
      IVar18 = NSProcessInfo::processIdentifier(IVar18);
      local_f0 = (char *)0x0;
      local_e8 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x1b,extraout_x1);
      _swift_bridgeObjectRelease(local_e8);
      local_f0 = (char *)0xd000000000000012;
      local_e8 = (void *)0x8000000100d8fa70;
      DVar19 = Foundation::Date::init();
      UVar20.unknown = Foundation::Date::_bridgeToObjectiveC(DVar19);
      (*pcVar39)(lVar25,DVar10.unknown);
      objc_stub::stringFromDate_(IVar16);
      SVar46 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar57.bridgeObject = pvVar23;
      SVar57.str = UVar20.unknown;
      Swift::String::append(SVar46,SVar57);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      SVar47.bridgeObject = (void *)0xe100000000000000;
      SVar47.str = (char *)0x2d;
      SVar58.bridgeObject = pvVar23;
      SVar58.str = UVar20.unknown;
      Swift::String::append(SVar47,SVar58);
      local_cc = (undefined4)IVar18;
      SVar46 = Swift::CustomStringConvertible::get_description();
      SVar59.bridgeObject = pvVar23;
      SVar59.str = UVar20.unknown;
      Swift::String::append(SVar46,SVar59);
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      SVar48.bridgeObject = &DAT_e400000000000000;
      SVar48.str = (char *)0x676f6c2e;
      SVar60.bridgeObject = pvVar23;
      SVar60.str = UVar20.unknown;
      Swift::String::append(SVar48,SVar60);
      pvVar23 = local_e8;
      SVar6.bridgeObject = local_e8;
      SVar6.str = local_f0;
      Foundation::URL::appendingPathComponent(SVar6,UVar20);
      _swift_bridgeObjectRelease(pvVar23);
      UVar20.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar46 = Foundation::URL::get_path(UVar20);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      NSFileManager::createFileAtPath_contents_attributes_((ID)UVar20.unknown,pNVar17,0,0);
      FUN_1000d66cc(0);
      (**(code **)(lVar37 + 0x10))(lVar31,lVar32,UVar11.unknown);
      FUN_1000d6710();
      *(long *)(unaff_x20 + lVar12) = lVar31;
      (*local_190)(lVar29,lVar32,UVar11.unknown);
      (**(code **)(lVar37 + 0x38))(lVar29,0,1,UVar11.unknown);
      _swift_beginAccess(unaff_x20 + lVar24,&local_f0,0x21,0);
      FUN_1000d5754(lVar29,unaff_x20 + lVar24);
      _swift_endAccess(&local_f0);
      IVar16 = *(ID *)(unaff_x20 + lVar12);
    }
    else {
      (*local_190)(lVar34,lVar30,UVar11.unknown);
      UVar20.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
      SVar46 = Foundation::URL::get_path(UVar20);
      pNVar17 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar46.bridgeObject);
      IVar16 = NSFileManager::fileExistsAtPath_((ID)UVar20.unknown,pNVar17);
      if ((int)IVar16 == 0) {
        (**(code **)(lVar37 + 8))(lVar34,UVar11.unknown);
        goto LAB_1000d61ac;
      }
      FUN_1000d66cc(0);
      (**(code **)(lVar37 + 0x10))(lVar33,lVar34,UVar11.unknown);
      FUN_1000d6710();
      uVar28 = *(undefined8 *)(unaff_x20 + lVar12);
      *(long *)(unaff_x20 + lVar12) = lVar33;
      _swift_beginAccess(uVar28,unaff_x20 + lVar12,&local_f0,0x20,0);
      IVar16 = *(ID *)(unaff_x20 + lVar12);
      if (IVar16 == 0) {
        (**(code **)(lVar37 + 8))(lVar34,UVar11.unknown);
        _swift_endAccess(&local_f0);
        IVar16 = *(ID *)(unaff_x20 + lVar12);
      }
      else {
        _swift_endAccess(&local_f0);
        objc_stub::seekToEndOfFile(IVar16);
        (**(code **)(lVar37 + 8))(lVar34,UVar11.unknown);
        IVar16 = *(ID *)(unaff_x20 + lVar12);
      }
    }
    if (IVar16 != 0) goto LAB_1000d6484;
  }
  else {
LAB_1000d6484:
    pNVar21 = Foundation::Data::_bridgeToObjectiveC((Data)EVar15.unknown);
    objc_stub::writeData_(IVar16,pNVar21);
  }
  _swift_beginAccess(unaff_x20 + lVar12,&local_f0,0x20,0);
  IVar16 = *(ID *)(unaff_x20 + lVar12);
  if (IVar16 == 0) {
    (**(code **)(lVar37 + 8))(puVar26,UVar11.unknown);
    _swift_endAccess(&local_f0);
    FUN_10003bf18(EVar15.unknown,uVar22);
    return;
  }
  _swift_endAccess(&local_f0);
  objc_stub::synchronizeFile(IVar16);
  FUN_10003bf18(EVar15.unknown,uVar22);
LAB_1000d6508:
  (**(code **)(lVar37 + 8))(puVar26,UVar11.unknown);
  return;
}



/* Address: 0x1000d659c | FUN_1000d659c */

undefined1  [16] FUN_1000d659c(byte param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auVar5 [16];
  
  uVar1 = 0x4e524157;
  if (param_1 != 2) {
    uVar1 = 0x524f525245;
  }
  puVar2 = &DAT_e400000000000000;
  if (param_1 != 2) {
    puVar2 = &DAT_e500000000000000;
  }
  uVar3 = 0x4755424544;
  if (param_1 != 0) {
    uVar3 = 0x4f464e49;
  }
  puVar4 = &DAT_e500000000000000;
  if (param_1 != 0) {
    puVar4 = &DAT_e400000000000000;
  }
  if (param_1 < 2) {
    puVar2 = puVar4;
    uVar1 = uVar3;
  }
  auVar5._8_8_ = puVar2;
  auVar5._0_8_ = uVar1;
  return auVar5;
}



/* Address: 0x1000d6600 | FUN_1000d6600 */

undefined8 FUN_1000d6600(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faca98;
  FUN_1000037f0(&DAT_100faca98,&DAT_100c2ba90);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000d6648 | FUN_1000d6648 */

void FUN_1000d6648(void)

{
  ISO8601FormatStyle IVar1;
  undefined *puVar2;
  
  if (DAT_100facac0 != (undefined *)0x0) {
    return;
  }
  IVar1 = Foundation::Date::ISO8601FormatStyle::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Date__ISO8601FormatStyle_>Foundation__FormatStyle_100ea73e0
             ,IVar1.unknown);
  DAT_100facac0 = puVar2;
  return;
}



/* Address: 0x1000d668c | FUN_1000d668c */

void FUN_1000d668c(void)

{
  undefined *puVar1;
  
  if (DAT_100facac8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100facac8 = puVar1;
  return;
}



/* Address: 0x1000d66cc | FUN_1000d66cc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000d66cc(void)

{
  undefined *puVar1;
  
  if (DAT_100facad8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSFileHandle;
  _swift_getObjCClassMetadata();
  DAT_100facad8 = puVar1;
  return;
}



/* Address: 0x1000d6710 | FUN_1000d6710 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000d6710(URL param_1)

{
  NSURL *pNVar1;
  ID IVar2;
  URL UVar3;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(param_1);
  _swift_getObjCClassFromMetadata();
  local_50 = 0;
  IVar2 = objc_stub::fileHandleForWritingToURL_error_(unaff_x20,pNVar1,&local_50);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1.unknown,UVar3.unknown);
  }
  else {
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1.unknown,UVar3.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return IVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1000d682c | FUN_1000d682c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d682c(void)

{
  long lVar1;
  ID IVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 local_58;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar1 = _TtC12PasteLogging13FileLogOutput::fileHandle;
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_beginAccess(unaff_x20 + _TtC12PasteLogging13FileLogOutput::fileHandle,auStack_50,1,0);
  IVar2 = *(ID *)(unaff_x20 + lVar1);
  if (IVar2 != 0) {
    local_58 = 0;
    IVar2 = objc_stub::closeAndReturnError_(IVar2,&local_58);
    if ((int)IVar2 == 0) {
      uVar3 = local_58;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease(uVar3);
    }
  }
  *(undefined8 *)(unaff_x20 + lVar1) = 0;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}



/* Address: 0x1000d6900 | FUN_1000d6900 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d6900(void)

{
  long unaff_x20;
  
  FUN_1000d6600(unaff_x20 + _TtC12PasteLogging13FileLogOutput::directoryURL);
  FUN_1000d6600(unaff_x20 + _TtC12PasteLogging13FileLogOutput::fileURL);
  return;
}



/* Address: 0x1000d6944 | FUN_1000d6944 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d6944(void)

{
  long unaff_x20;
  
  FUN_1000d6600(unaff_x20 + _TtC12PasteLogging13FileLogOutput::directoryURL);
  FUN_1000d6600(unaff_x20 + _TtC12PasteLogging13FileLogOutput::fileURL);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000d6994 | FUN_1000d6994 */

void FUN_1000d6994(void)

{
  FUN_1000d5aec();
  return;
}



/* Address: 0x1000d69b4 | FUN_1000d69b4 */

void FUN_1000d69b4(void)

{
  FUN_1000d69bc(0);
  return;
}



/* Address: 0x1000d69bc | FUN_1000d69bc */

void FUN_1000d69bc(undefined8 param_1)

{
  if (DAT_100facb08 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ca2848);
  return;
}



/* Address: 0x1000d69f4 | FUN_1000d69f4 */

void FUN_1000d69f4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_40;
  long local_38;
  long lStack_30;
  undefined *local_28;
  
  local_40 = &DAT_100c2bad8;
  lVar1 = 0x13f;
  FUN_1000d6a78();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    local_28 = &DAT_100c2baf0;
    lStack_30 = local_38;
    _swift_updateClassMetadata2(param_1,0x100,4,&local_40,param_1 + 0x50);
  }
  return;
}



/* Address: 0x1000d6a78 | FUN_1000d6a78 */

void FUN_1000d6a78(void)

{
  Optional OVar1;
  URL UVar2;
  undefined7 extraout_var;
  
  if (DAT_100facb18 == 0) {
    UVar2 = Foundation::URL::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (UVar2.unknown == (undefined *)0x0) {
      DAT_100facb18 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x1000d6acc | _swift_endAccess */

void _swift_endAccess(void)

{
  _swift_endAccess();
  return;
}



/* Address: 0x1000d6ad0 | FUN_1000d6ad0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d6ad0(byte param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  uint uVar1;
  Logger LVar2;
  Logger LVar3;
  OS_os_log *pOVar4;
  OS_os_log *pOVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long lVar8;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  LVar2 = os::Logger::typeMetadataAccessor();
  lVar8 = *(long *)(LVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  FUN_1000d6c8c(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  LVar3.unknown = param_5;
  _swift_bridgeObjectRetain();
  pOVar4 = os::Logger::get_logObject(LVar3);
  if (param_1 < 2) {
    if (param_1 == 0) {
      pOVar5 = pOVar4;
      static_(extension_in_os):__C.os_log_type_t.debug.getter_:___C.os_log_type_t::_get_debug();
      uVar1 = (uint)pOVar5;
    }
    else {
      pOVar5 = pOVar4;
      static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
      uVar1 = (uint)pOVar5;
    }
  }
  else if (param_1 == 2) {
    pOVar5 = pOVar4;
    static_(extension_in_os):__C.os_log_type_t.error.getter_:___C.os_log_type_t::_get_error();
    uVar1 = (uint)pOVar5;
  }
  else {
    pOVar5 = pOVar4;
    static_(extension_in_os):__C.os_log_type_t.fault.getter_:___C.os_log_type_t::_get_fault();
    uVar1 = (uint)pOVar5;
  }
  pOVar5 = pOVar4;
  _os_log_type_enabled(pOVar4,uVar1 & 0xff);
  if ((int)pOVar5 == 0) {
    _swift_bridgeObjectRelease(param_5);
  }
  else {
    puVar6 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    uVar7 = 0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar6 = 0x8220102;
    local_68 = uVar7;
    FUN_1000d7074(param_4,param_5,&local_68);
    *(undefined8 *)(puVar6 + 1) = param_4;
    _swift_bridgeObjectRelease(param_5);
    __os_log_impl(0x100000000,pOVar4,uVar1 & 0xff,"%{public}s",puVar6,0xc);
    FUN_100004594(uVar7);
    _swift_slowDealloc(uVar7,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar6,0xffffffffffffffff,0xffffffffffffffff);
  }
  (**(code **)(lVar8 + 8))(auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),LVar2.unknown);
  return;
}


