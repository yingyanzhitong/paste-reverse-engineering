/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100992324 | FUN_100992324 */

undefined1  [16] FUN_100992324(void)

{
  return ZEXT816(0x100f21af0);
}



/* Address: 0x100992334 | FUN_100992334 */

undefined1  [16] FUN_100992334(void)

{
  return ZEXT816(0x100f21b18);
}



/* Address: 0x100992344 | FUN_100992344 */

undefined1  [16] FUN_100992344(void)

{
  return ZEXT816(0x100f21b38);
}



/* Address: 0x100992354 | FUN_100992354 */

undefined1  [16] FUN_100992354(void)

{
  return ZEXT816(0x100f21b58);
}



/* Address: 0x100992364 | FUN_100992364 */

undefined1  [16] FUN_100992364(void)

{
  return ZEXT816(0x100f21b80);
}



/* Address: 0x100992374 | FUN_100992374 */

undefined1  [16] FUN_100992374(void)

{
  return ZEXT816(0x100f21ba0);
}



/* Address: 0x100992384 | FUN_100992384 */

undefined1  [16] FUN_100992384(void)

{
  return ZEXT816(0x100f21bc8);
}



/* Address: 0x100992394 | FUN_100992394 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

OS_dispatch_queue * FUN_100992394(char *param_1,void *param_2,undefined8 param_3)

{
  Attributes attributes;
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  undefined *puVar2;
  DispatchQoS DVar3;
  long lVar4;
  OS_dispatch_queue *pOVar5;
  undefined *puVar6;
  OS_dispatch_queue *pOVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  long lVar13;
  DispatchQoS qos;
  String label;
  OS_dispatch_queue *local_a0;
  undefined *local_98;
  Attributes AStack_90;
  long local_88;
  long local_80;
  long local_78;
  char *local_70;
  undefined *local_68;
  
  local_70 = param_1;
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  local_78 = CONCAT71(extraout_var,AVar1.value);
  local_88 = *(long *)(local_78 + -8);
  lVar4 = (long)&local_a0 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar4;
  local_98 = (undefined *)Attributes::_typeMetadataAccessor();
  puVar8 = (undefined *)
           (lVar4 - (*(long *)(*(long *)(local_98 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100ff0820;
  AStack_90.unknown = puVar8;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  lVar10 = (long)puVar8 - (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  qos.unknown = (undefined *)(lVar10 - uVar9);
  lVar13 = (long)qos.unknown - uVar9;
  FUN_1000f8cac(param_3,lVar10,&DAT_100ff0820,&DAT_100c89460);
  pcVar11 = *(code **)(lVar12 + 0x30);
  lVar4 = lVar10;
  (*pcVar11)(lVar10,1,DVar3.unknown);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar12 + 0x10))
              (lVar13,unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS,
               DVar3.unknown);
    lVar4 = lVar10;
    (*pcVar11)(lVar10,1,DVar3.unknown);
    if ((int)lVar4 != 1) {
      FUN_1000fb4c4(lVar10,&DAT_100ff0820,&DAT_100c89460);
    }
  }
  else {
    (**(code **)(lVar12 + 0x20))(lVar13,lVar10,DVar3.unknown);
  }
  pOVar5 = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100ff1ca0,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  local_a0 = pOVar5;
  (**(code **)(lVar12 + 0x10))(qos.unknown,lVar13,DVar3.unknown);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ff1cb8;
  FUN_100003a00(&DAT_100ff1cb8,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  _swift_bridgeObjectRetain(param_2);
  puVar8 = &DAT_100ff1cc0;
  FUN_1000f7830(&DAT_100ff1cc0,&DAT_100c8adf0);
  puVar6 = &DAT_100ff1cc8;
  FUN_100155c48(&DAT_100ff1cc8,&DAT_100ff1cc0,&DAT_100c8adf0);
  attributes.unknown = AStack_90.unknown;
  Swift::SetAlgebra::_init(AStack_90.unknown,&local_68,puVar8,puVar6,local_98,puVar2);
  lVar4 = local_80;
  (**(code **)(local_88 + 0x68))
            (local_80,*(undefined4 *)
                       PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,local_78);
  label.bridgeObject = param_2;
  label.str = local_70;
  pOVar7 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (local_a0,label,qos,attributes,(AutoreleaseFrequency)(__int8)lVar4);
  (**(code **)(lVar12 + 8))(lVar13,DVar3.unknown);
  return pOVar7;
}



/* Address: 0x100992654 | FUN_100992654 */

void FUN_100992654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_100993584(param_1,unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS,param_2,
                param_3,param_4);
  return;
}



/* Address: 0x100992670 | FUN_100992670 */

bool FUN_100992670(void)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  UUID UVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long local_70;
  long local_68;
  
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar4.unknown + -8);
  lVar9 = (long)&local_70 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100ff1c90;
  local_70 = lVar9;
  FUN_1000f7830(&DAT_100ff1c90,&DAT_100c8add0);
  lVar9 = lVar9 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &DAT_100ff1c98;
  FUN_1000f7830(&DAT_100ff1c98,&DAT_100c8add8);
  uVar8 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_68 = lVar9 - uVar8;
  lVar13 = local_68 - uVar8;
  lVar12 = lVar13 - uVar8;
  FUN_10000ec2c(0,&DAT_100ff1ca0,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  (extension_Dispatch)::__C::OS_dispatch_queue::_getSpecific();
  (**(code **)(lVar10 + 0x10))
            (lVar13,unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::loopID,UVar4.unknown);
  (**(code **)(lVar10 + 0x38))(lVar13,0,1,UVar4.unknown);
  lVar14 = (long)*(int *)(puVar5 + 0x30);
  FUN_1000f8cac(lVar12,lVar9,&DAT_100ff1c98,&DAT_100c8add8);
  FUN_1000f8cac(lVar13,lVar9 + lVar14,&DAT_100ff1c98,&DAT_100c8add8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  lVar7 = lVar9;
  (*pcVar11)(lVar9,1,UVar4.unknown);
  lVar2 = local_68;
  if ((int)lVar7 == 1) {
    FUN_1000fb4c4(lVar13,&DAT_100ff1c98,&DAT_100c8add8);
    FUN_1000fb4c4(lVar12,&DAT_100ff1c98,&DAT_100c8add8);
    lVar14 = lVar9 + lVar14;
    (*pcVar11)(lVar14,1,UVar4.unknown);
    if ((int)lVar14 == 1) {
      FUN_1000fb4c4(lVar9,&DAT_100ff1c98,&DAT_100c8add8);
      return true;
    }
  }
  else {
    FUN_1000f8cac(lVar9,local_68,&DAT_100ff1c98,&DAT_100c8add8);
    lVar7 = lVar9 + lVar14;
    (*pcVar11)(lVar7,1,UVar4.unknown);
    lVar1 = local_70;
    if ((int)lVar7 != 1) {
      (**(code **)(lVar10 + 0x20))(local_70,lVar9 + lVar14,UVar4.unknown);
      puVar5 = &DAT_100ff1ca8;
      FUN_100003a00(&DAT_100ff1ca8,PTR_typeMetadataAccessor_100ea7500,
                    PTR_Foundation__Foundation__UUID_>Swift__Equatable_100ea7520);
      bVar3 = Swift::Equatable::___infix(lVar2,lVar1,UVar4.unknown,puVar5);
      pcVar11 = *(code **)(lVar10 + 8);
      (*pcVar11)(lVar1,UVar4.unknown);
      FUN_1000fb4c4(lVar13,&DAT_100ff1c98,&DAT_100c8add8);
      FUN_1000fb4c4(lVar12,&DAT_100ff1c98,&DAT_100c8add8);
      (*pcVar11)(lVar2,UVar4.unknown);
      FUN_1000fb4c4(lVar9,&DAT_100ff1c98,&DAT_100c8add8);
      return bVar3;
    }
    FUN_1000fb4c4(lVar13,&DAT_100ff1c98,&DAT_100c8add8);
    FUN_1000fb4c4(lVar12,&DAT_100ff1c98,&DAT_100c8add8);
    (**(code **)(lVar10 + 8))(lVar2,UVar4.unknown);
  }
  FUN_1000fb4c4(lVar9,&DAT_100ff1c90,&DAT_100c8add0);
  return false;
}



/* Address: 0x1009929bc | FUN_1009929bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1009929bc(undefined8 param_1,undefined4 param_2)

{
  Attributes attributes;
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  AutoreleaseFrequency AVar4;
  undefined7 extraout_var;
  DispatchQoS DVar6;
  undefined *puVar7;
  OS_dispatch_queue *this;
  undefined *puVar8;
  OS_dispatch_queue *pOVar9;
  DispatchSpecificKey *this_00;
  long lVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  long lVar13;
  DispatchQoS qos;
  long lVar14;
  String label;
  String label_00;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  OS_dispatch_queue *local_e0;
  char *local_d8;
  code *local_d0;
  long local_c8;
  Attributes local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined8 local_a8;
  code *local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *puStack_80;
  undefined1 *local_78;
  undefined4 local_6c;
  undefined *local_68;
  long lVar5;
  
  puVar11 = &DAT_100ff1c98;
  local_a8 = param_1;
  local_6c = param_2;
  FUN_1000f7830(&DAT_100ff1c98,&DAT_100c8add8);
  lVar10 = *(long *)(*(long *)(puVar11 + -8) + 0x40);
  local_78 = auStack_f0 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  puStack_80 = (undefined *)Foundation::UUID::typeMetadataAccessor();
  local_88 = *(long *)(puStack_80 + -8);
  lVar10 = (long)(auStack_f0 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar10;
  puStack_b8 = (undefined *)Attributes::_typeMetadataAccessor();
  puVar11 = (undefined *)
            (lVar10 - (*(long *)(*(long *)(puStack_b8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_c0.unknown = puVar11;
  AVar4 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lVar5 = CONCAT71(extraout_var,AVar4.value);
  lVar13 = *(long *)(lVar5 + -8);
  lVar12 = (long)puVar11 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c8 = lVar5;
  DVar6 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar10 = _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels;
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar14 = *(long *)(DVar6.unknown + -8);
  qos.unknown = (undefined *)(lVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_b0 = DVar6.unknown;
  local_90 = lVar14;
  FUN_100997c38();
  *(undefined **)(unaff_x20 + lVar10) = puVar7;
  *(undefined1 *)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::state) = 0;
  this = (OS_dispatch_queue *)0x0;
  FUN_10000ec2c(0,&DAT_100ff1ca0,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  local_d8 = "tionChannel.swift";
  local_a0 = *(code **)(lVar14 + 0x10);
  local_e0 = this;
  (*local_a0)(qos.unknown,param_1,DVar6.unknown);
  local_d0 = *(code **)(lVar13 + 0x68);
  (*local_d0)(lVar12,*(undefined4 *)
                      PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_workItem__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d8
              ,lVar5);
  local_68 = puVar11;
  puVar11 = &DAT_100ff1cb8;
  FUN_100003a00(&DAT_100ff1cb8,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar7 = &DAT_100ff1cc0;
  local_e8 = puVar11;
  FUN_1000f7830(&DAT_100ff1cc0,&DAT_100c8adf0);
  puVar8 = &DAT_100ff1cc8;
  FUN_100155c48(&DAT_100ff1cc8,&DAT_100ff1cc0,&DAT_100c8adf0);
  puVar1 = puStack_b8;
  attributes.unknown = local_c0.unknown;
  Swift::SetAlgebra::_init(local_c0.unknown,&local_68,puVar7,puVar8,puStack_b8,puVar11);
  label.bridgeObject = (void *)((ulong)local_d8 | 0x8000000000000000);
  label.str = (char *)0xd000000000000024;
  DVar6.unknown =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (this,label,qos,attributes,(AutoreleaseFrequency)(__int8)lVar12);
  *(undefined **)(unaff_x20 + 0x10) = DVar6.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar6);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar7,puVar8,puVar1,local_e8);
  (*local_d0)(lVar12,*(undefined4 *)
                      PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
              ,local_c8);
  label_00.bridgeObject = (void *)0x8000000100db6ff0;
  label_00.str = (char *)0xd000000000000029;
  pOVar9 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (local_e0,label_00,qos,attributes,(AutoreleaseFrequency)(__int8)lVar12);
  lVar10 = local_98;
  *(OS_dispatch_queue **)(unaff_x20 + 0x18) = pOVar9;
  Foundation::UUID::init();
  puVar7 = puStack_80;
  lVar5 = local_88;
  (**(code **)(local_88 + 0x20))
            (unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::loopID,lVar10,puStack_80);
  this_00 = (DispatchSpecificKey *)&DAT_100ff1cd0;
  FUN_1000f7830(&DAT_100ff1cd0,&DAT_100c8adf8);
  _swift_allocObject();
  Dispatch::DispatchSpecificKey::_init(this_00);
  uVar2 = local_a8;
  puVar11 = local_b0;
  *(DispatchSpecificKey **)(unaff_x20 + 0x20) = this_00;
  (*local_a0)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS,local_a8,local_b0);
  puVar3 = local_78;
  *(char *)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::canBeShutDownIndividually) =
       (char)local_6c;
  (**(code **)(lVar5 + 0x10))
            (local_78,unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::loopID,puVar7);
  (**(code **)(lVar5 + 0x38))(puVar3,0,1,puVar7);
  (extension_Dispatch)::__C::OS_dispatch_queue::_setSpecific();
  (**(code **)(local_90 + 8))(uVar2,puVar11);
  FUN_1000fb4c4(puVar3,&DAT_100ff1c98,&DAT_100c8add8);
  return;
}



/* Address: 0x100992db8 | FUN_100992db8 */

void FUN_100992db8(DispatchWorkItemFlags param_1,undefined8 param_2,undefined8 param_3)

{
  DispatchWorkItemFlags DVar1;
  void *aBlock;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined8 local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar3 = PTR_typeMetadataAccessor_100eae670;
  lVar6 = *(long *)(DVar1.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100030410;
  puStack_78 = &DAT_100f21e30;
  local_70 = param_2;
  local_68 = param_3;
  aBlock = __Block_copy(&local_90);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100ff1c50;
  FUN_100003a00(&DAT_100ff1c50,puVar3,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  _swift_retain(param_3);
  puVar3 = &DAT_100ff1c58;
  FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
  puVar4 = &DAT_100ff1c60;
  FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
  Swift::SetAlgebra::_init
            (auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),&local_98,puVar3,puVar4,DVar1.unknown
             ,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,param_1);
  __Block_release(aBlock);
  (**(code **)(lVar6 + 8))(auStack_a0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x100992f30 | FUN_100992f30 */

void FUN_100992f30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_100992f4c(param_1,unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS,param_2,
                param_3,param_4);
  return;
}



/* Address: 0x100992f4c | FUN_100992f4c */

void FUN_100992f4c(__uint64 param_1,DispatchQoS param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  DispatchTimeInterval DVar2;
  DispatchWorkItemFlags DVar3;
  undefined7 extraout_var;
  TimerFlags TVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  TimerFlags TVar8;
  DispatchTime deadline;
  void *aBlock;
  long lVar9;
  DispatchWorkItemFlags flags;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  undefined8 *unaff_x20;
  code *pcVar13;
  undefined8 uVar14;
  TimerFlags flags_00;
  undefined8 *puVar15;
  DispatchTime aDStack_120 [2];
  long local_110;
  undefined *puStack_108;
  long local_100;
  long local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  long lVar4;
  
  uVar14 = *unaff_x20;
  local_f0 = param_3;
  DVar3 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar9 = *(long *)(DVar3.unknown + -8);
  flags.unknown =
       (undefined *)((long)aDStack_120 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0));
  DVar2 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  local_f8 = *(long *)(lVar4 + -8);
  uVar10 = *(long *)(local_f8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar15 = (undefined8 *)(flags.unknown + -uVar10);
  lVar11 = (long)puVar15 - uVar10;
  local_100 = lVar11;
  puStack_108 = (undefined *)Dispatch::DispatchTime::typeMetadataAccessor();
  local_110 = *(long *)(puStack_108 + -8);
  puVar12 = (undefined *)(lVar11 - (*(long *)(local_110 + 0x40) + 0xfU & 0xfffffffffffffff0));
  aDStack_120[1].unknown = puVar12;
  TVar5 = TimerFlags::_typeMetadataAccessor();
  lVar11 = *(long *)(TVar5.unknown + -8);
  flags_00.unknown = puVar12 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f4a44(uVar14,param_5,&PTR_PTR_100f21d18);
  FUN_100988f00(uVar14,param_5,&PTR_PTR_100f21d18);
  local_e8 = uVar14;
  FUN_10000ec2c(0,&DAT_100ff1c68,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = &DAT_100ff1c70;
  FUN_100003a00(&DAT_100ff1c70,PTR__typeMetadataAccessor_100eae810,
                PTR__Dispatch__TimerFlags_>Swift__SetAlgebra_100eae820);
  puVar12 = &DAT_100ff1c78;
  FUN_1000f7830(&DAT_100ff1c78,&DAT_100c8adc0);
  puVar7 = &DAT_100ff1c80;
  FUN_100155c48(&DAT_100ff1c80,&DAT_100ff1c78,&DAT_100c8adc0);
  Swift::SetAlgebra::_init(flags_00.unknown,&local_98,puVar12,puVar7,TVar5.unknown,puVar6);
  TVar8.unknown = flags_00.unknown;
  (extension_Dispatch)::__C::OS_dispatch_source::_makeTimerSource(flags_00);
  (**(code **)(lVar11 + 8))(flags_00.unknown,TVar5.unknown);
  if (-1 < (long)param_1) {
    _swift_getObjectType(TVar8.unknown);
    deadline.unknown = aDStack_120[1].unknown;
    Dispatch::DispatchTime::init(param_1);
    lVar1 = local_f8;
    lVar11 = local_100;
    pcVar13 = *(code **)(local_f8 + 0x68);
    (*pcVar13)(local_100,
               *(undefined4 *)
                PTR___enum_case_for_Dispatch_DispatchTimeInterval_never_Dispatch_DispatchTimeInterval_Type___>_Dispatch_DispatchTimeInterval_100eae648
               ,lVar4);
    *puVar15 = 0;
    (*pcVar13)(puVar15,*(undefined4 *)
                        PTR___enum_case_for_Dispatch_DispatchTimeInterval_nanoseconds_Dispatch_DispatchTimeInterval_Type___>__Swift_Int___>_Dispatch_DispatchTimeInterval_100eae630
               ,lVar4);
    (extension_Dispatch)::__C::OS_dispatch_source_timer::schedule
              (deadline,(DispatchTimeInterval)(__int8)lVar11,(DispatchTimeInterval)(__int8)puVar15);
    pcVar13 = *(code **)(lVar1 + 8);
    (*pcVar13)(puVar15,lVar4);
    (*pcVar13)(lVar11,lVar4);
    (**(code **)(local_110 + 8))(deadline.unknown,puStack_108);
    Dispatch::DispatchWorkItemFlags::get_enforceQoS((DispatchWorkItemFlags)deadline.unknown);
    puVar12 = &DAT_100f21eb8;
    _swift_allocObject(&DAT_100f21eb8,0x38,7);
    uVar14 = local_e8;
    *(undefined8 *)(puVar12 + 0x10) = param_5;
    *(undefined8 **)(puVar12 + 0x18) = unaff_x20;
    *(undefined8 *)(puVar12 + 0x20) = local_e8;
    *(undefined8 *)(puVar12 + 0x28) = local_f0;
    *(undefined8 *)(puVar12 + 0x30) = param_4;
    local_78 = FUN_100997ad8;
    local_98 = PTR___NSConcreteStackBlock_100ea82a0;
    local_90 = 0x42000000;
    local_88 = thunk_FUN_100030410;
    puStack_80 = &DAT_100f21ed0;
    local_70 = puVar12;
    aBlock = __Block_copy(&local_98);
    _swift_retain(unaff_x20);
    _swift_retain(uVar14);
    _swift_retain(param_4);
    (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(param_2,flags);
    __Block_release(aBlock);
    (**(code **)(lVar9 + 8))(flags.unknown,DVar3.unknown);
    _swift_release(local_70);
    (extension_Dispatch)::__C::OS_dispatch_source::resume();
    puVar12 = &DAT_100f21f08;
    _swift_allocObject(&DAT_100f21f08,0x20,7);
    *(undefined8 *)(puVar12 + 0x10) = param_5;
    *(undefined **)(puVar12 + 0x18) = TVar8.unknown;
    _swift_retain(uVar14);
    _swift_unknownObjectRetain(TVar8.unknown);
    FUN_100646e1c(FUN_100997b0c,puVar12);
    _swift_release(uVar14);
    _swift_release(puVar12);
    puVar12 = &DAT_100f21f30;
    _swift_allocObject(&DAT_100f21f30,0x18,7);
    *(undefined **)(puVar12 + 0x10) = TVar8.unknown;
    FUN_100004520(uVar14,FUN_100997b58,puVar12,param_5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100993360);
  (*pcVar13)();
}



/* Address: 0x100993360 | FUN_100993360 */

void FUN_100993360(undefined8 param_1)

{
  undefined4 uVar1;
  DispatchTimeInterval DVar2;
  undefined7 extraout_var;
  
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchTimeInterval_never_Dispatch_DispatchTimeInterval_Type___>_Dispatch_DispatchTimeInterval_100eae648
  ;
  DVar2 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001009933a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var,DVar2.value));
  return;
}



/* Address: 0x1009933a4 | FUN_1009933a4 */

void FUN_1009933a4(undefined8 *param_1)

{
  undefined4 uVar1;
  DispatchTimeInterval DVar2;
  undefined7 extraout_var;
  
  *param_1 = 0;
  uVar1 = *(undefined4 *)
           PTR___enum_case_for_Dispatch_DispatchTimeInterval_nanoseconds_Dispatch_DispatchTimeInterval_Type___>__Swift_Int___>_Dispatch_DispatchTimeInterval_100eae630
  ;
  DVar2 = Dispatch::DispatchTimeInterval::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001009933e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,DVar2.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var,DVar2.value));
  return;
}



/* Address: 0x1009933ec | FUN_1009933ec */

void FUN_1009933ec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  Result RVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  undefined1 *puVar4;
  long lVar5;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 *puVar3;
  
  puVar2 = &DAT_100ff1318;
  FUN_1000f8b08(&DAT_100ff1318,&DAT_100c8b710);
  RVar1 = Swift::Result::typeMetadataAccessor();
  puVar3 = (undefined1 *)CONCAT71(extraout_var,RVar1.value);
  lVar5 = *(long *)(puVar3 + -8);
  puVar4 = auStack_90 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (*(char *)(param_1 + _TtC20NIOTransportServices14NIOTSEventLoop::state) == '\x02') {
    FUN_100997b80();
    puVar2 = &DAT_100eef640;
    _swift_allocError(&DAT_100eef640,puVar3,0,0);
    *puVar3 = 2;
    FUN_100646f54();
    _swift_errorRelease(puVar2);
    return;
  }
  FUN_100645c18(param_2,param_5);
  local_80 = param_5;
  uStack_78 = param_3;
  local_70 = param_4;
  FUN_1006414f4(puVar4,FUN_100645d48,auStack_90,param_5,puVar2,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  FUN_100642f8c(puVar4,param_2,param_5);
  _swift_release(param_2);
  (**(code **)(lVar5 + 8))(puVar4,puVar3);
  return;
}



/* Address: 0x100993560 | FUN_100993560 */

void FUN_100993560(void)

{
  _swift_getObjectType();
  (extension_Dispatch)::__C::OS_dispatch_source::cancel();
  return;
}



/* Address: 0x100993584 | FUN_100993584 */

void FUN_100993584(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  ulong uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  long lVar5;
  long lVar6;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar6 + 8))
            (&stack0xffffffffffffffa0 + -(lVar5 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  uVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(_Var4,param_1)) {
    uVar1 = _Var4 + param_1 & ((long)(_Var4 + param_1) >> 0x3f ^ 0xffffffffffffffffU);
  }
  FUN_100992f4c(uVar1,param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x100993650 | FUN_100993650 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100993650(undefined8 param_1,undefined *param_2,DispatchQoS param_3)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  ulong uVar7;
  char cVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined *puVar15;
  code *pcVar16;
  undefined1 auStack_f0 [8];
  ulong local_e8;
  undefined *local_e0;
  code *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined1 auStack_c0 [24];
  undefined *local_a8 [3];
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar15 = *(undefined **)(DVar1.unknown + -8);
  puVar13 = auStack_f0 + -(*(long *)(puVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar14 = *(long *)(DVar2.unknown + -8);
  lVar9 = *(long *)(lVar14 + 0x40);
  if (*(char *)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::canBeShutDownIndividually)
      != '\x01') {
    puVar5 = &DAT_100f21f58;
    local_c8 = DVar2.unknown;
    _swift_allocObject(&DAT_100f21f58,0x20,7);
    *(undefined **)(puVar5 + 0x10) = param_2;
    *(undefined **)(puVar5 + 0x18) = param_3.unknown;
    local_70 = FUN_100997bc0;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = thunk_FUN_100030410;
    puStack_78 = &DAT_100f21f70;
    local_68 = puVar5;
    aBlock = __Block_copy(&local_90);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_3);
    local_a8[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = &DAT_100ff1c50;
    FUN_100003a00(&DAT_100ff1c50,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar6 = &DAT_100ff1c58;
    local_d0 = puVar15;
    FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
    puVar15 = &DAT_100ff1c60;
    FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
    Swift::SetAlgebra::_init(puVar13,local_a8,puVar6,puVar15,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar13 + -(lVar9 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(local_d0 + 8))(puVar13,DVar1.unknown);
    (**(code **)(lVar14 + 8))(puVar13 + -(lVar9 + 0xfU & 0xfffffffffffffff0),local_c8);
    puVar15 = local_68;
    goto LAB_100993ce8;
  }
  FUN_100993d60();
  puVar15 = &DAT_100f21fa8;
  _swift_allocObject(&DAT_100f21fa8,0x28,7);
  *(undefined8 *)(puVar15 + 0x10) = param_1;
  *(undefined **)(puVar15 + 0x18) = param_2;
  *(undefined **)(puVar15 + 0x20) = param_3.unknown;
  puVar5 = &DAT_100f21fd0;
  local_c8 = param_2;
  _swift_allocObject(&DAT_100f21fd0,0x20,7);
  *(code **)(puVar5 + 0x10) = FUN_100997bcc;
  *(undefined **)(puVar5 + 0x18) = puVar15;
  puVar6 = &DAT_100f21ff8;
  _swift_allocObject(&DAT_100f21ff8,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  puVar3 = &DAT_100f22020;
  _swift_allocObject(&DAT_100f22020,0x28,7);
  *(undefined **)(puVar3 + 0x10) = DVar2.unknown;
  *(code **)(puVar3 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar6;
  uVar4 = *(ulong *)(DVar2.unknown + 0x20);
  lVar9 = *(long *)(DVar2.unknown + 0x28);
  _swift_getObjectType();
  local_d8 = *(code **)(lVar9 + 0x10);
  local_d0 = param_3.unknown;
  _swift_retain_n(param_3.unknown,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(DVar2.unknown,2);
  _swift_retain_n(puVar6,2);
  local_e0 = puVar15;
  _swift_retain(puVar15);
  local_e8 = uVar4;
  (*local_d8)(uVar4,lVar9);
  if ((uVar4 & 1) == 0) {
    _swift_release(puVar5);
    puVar15 = &DAT_100f22048;
    _swift_allocObject(&DAT_100f22048,0x28,7);
    *(undefined **)(puVar15 + 0x10) = DVar2.unknown;
    *(code **)(puVar15 + 0x18) = FUN_1008a8990;
    *(undefined **)(puVar15 + 0x20) = puVar3;
    pcVar16 = *(code **)(lVar9 + 0x18);
    _swift_retain(DVar2.unknown);
    _swift_retain(puVar3);
    (*pcVar16)(FUN_1008db360,puVar15,local_e8,lVar9);
    _swift_release(puVar5);
    _swift_release(puVar15);
    _swift_release_n(puVar6,2);
    _swift_release(DVar2.unknown);
    _swift_release(puVar3);
    puVar10 = local_c8;
    puVar12 = local_e0;
    puVar15 = local_d0;
  }
  else {
    _swift_beginAccess(DVar2.unknown + 0x10,auStack_c0,0,0);
    puVar10 = local_c8;
    puVar15 = local_d0;
    if (DVar2.unknown[0x18] == '\x01') {
      _swift_release(puVar5);
      puVar10 = local_c8;
      puVar15 = local_d0;
    }
    else if (DVar2.unknown[0x18] == -1) {
      _swift_release(puVar5);
      _swift_beginAccess(DVar2.unknown + 0x30,&local_90,0x21,0);
      FUN_10064967c(FUN_1008a8990,puVar3);
      _swift_endAccess(&local_90);
    }
    else {
      FUN_100993f90(param_1,local_c8,local_d0);
      _swift_release(puVar5);
    }
    puVar12 = local_e0;
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(puVar5);
    _swift_release_n(puVar6,2);
    _swift_release(DVar2.unknown);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(puVar15);
  _swift_release(puVar12);
  puVar5 = &DAT_100f22070;
  _swift_allocObject(&DAT_100f22070,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar10;
  *(undefined **)(puVar5 + 0x20) = puVar15;
  puVar6 = &DAT_100f22098;
  _swift_allocObject(&DAT_100f22098,0x28,7);
  *(undefined **)(puVar6 + 0x10) = DVar2.unknown;
  *(code **)(puVar6 + 0x18) = FUN_100997bd8;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  uVar4 = *(ulong *)(DVar2.unknown + 0x20);
  lVar9 = *(long *)(DVar2.unknown + 0x28);
  _swift_getObjectType();
  pcVar16 = *(code **)(lVar9 + 0x10);
  _swift_retain_n(puVar15,2);
  _swift_retain_n(DVar2.unknown,2);
  _swift_retain_n(puVar5,2);
  uVar7 = uVar4;
  (*pcVar16)(uVar4,lVar9);
  if ((uVar7 & 1) == 0) {
    puVar3 = &DAT_100f220c0;
    _swift_allocObject(&DAT_100f220c0,0x28,7);
    *(undefined **)(puVar3 + 0x10) = DVar2.unknown;
    *(code **)(puVar3 + 0x18) = FUN_1008db354;
    *(undefined **)(puVar3 + 0x20) = puVar6;
    pcVar16 = *(code **)(lVar9 + 0x18);
    _swift_retain(DVar2.unknown);
    _swift_retain(puVar6);
    (*pcVar16)(thunk_FUN_1008db360,puVar3,uVar4,lVar9);
    _swift_release(puVar3);
    _swift_release_n(puVar5,2);
    _swift_release(DVar2.unknown);
    _swift_release(puVar6);
  }
  else {
    _swift_beginAccess(DVar2.unknown + 0x10,&local_90,0,0);
    uVar11 = *(undefined8 *)(DVar2.unknown + 0x10);
    cVar8 = DVar2.unknown[0x18];
    if (cVar8 == '\x01') {
      _swift_errorRetain(uVar11);
      FUN_10099416c(uVar11,param_1,local_c8,puVar15);
      cVar8 = '\x01';
LAB_100993c90:
      FUN_100308538(uVar11,cVar8);
    }
    else {
      if (cVar8 != -1) goto LAB_100993c90;
      _swift_beginAccess(DVar2.unknown + 0x30,local_a8,0x21,0);
      FUN_10064967c(FUN_1008db354,puVar6);
      _swift_endAccess(local_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(puVar5,2);
    _swift_release(DVar2.unknown);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(DVar2.unknown);
LAB_100993ce8:
  _swift_release(puVar15);
  return;
}



/* Address: 0x100993d0c | FUN_100993d0c */

void FUN_100993d0c(code *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  
  pcVar1 = param_1;
  FUN_100997b80();
  puVar2 = &DAT_100eef640;
  _swift_allocError(&DAT_100eef640,pcVar1,0,0);
  *pcVar1 = (code)0x0;
  (*param_1)();
  _swift_errorRelease(puVar2);
  return;
}



/* Address: 0x100993d60 | FUN_100993d60 */

undefined * FUN_100993d60(void)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  DispatchWorkItemFlags qos;
  long lVar8;
  undefined8 local_b0;
  undefined *local_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eae670;
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_b0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar8 = *(long *)(local_a8 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar2 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(long *)(puVar2 + 0x20) = unaff_x20;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  local_b0 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &DAT_100f225c0;
  _swift_allocObject(&DAT_100f225c0,0x20,7);
  *(long *)(puVar3 + 0x10) = unaff_x20;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_70 = FUN_100997e74;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100030410;
  puStack_78 = &DAT_100f225d8;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain_n();
  DVar4.unknown = puVar2;
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100ff1c50;
  FUN_100003a00(&DAT_100ff1c50,puVar5,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar5 = &DAT_100ff1c58;
  FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
  puVar6 = &DAT_100ff1c60;
  FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar5,puVar6,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(lVar8 + 8))(qos.unknown,local_a8);
  _swift_release(local_68);
  return puVar2;
}



/* Address: 0x100993f90 | FUN_100993f90 */

void FUN_100993f90(undefined8 param_1,undefined8 param_2,DispatchQoS param_3)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_a0 = param_1;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eae670;
  local_a8 = *(long *)(DVar1.unknown + -8);
  puVar8 = auStack_b0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  puVar3 = &DAT_100f22138;
  _swift_allocObject(&DAT_100f22138,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined **)(puVar3 + 0x18) = param_3.unknown;
  local_70 = FUN_1008c8730;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100030410;
  puStack_78 = &DAT_100f22150;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_3);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100ff1c50;
  FUN_100003a00(&DAT_100ff1c50,puVar4,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100ff1c58;
  FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
  puVar5 = &DAT_100ff1c60;
  FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
  Swift::SetAlgebra::_init(puVar8,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(puVar8,DVar1.unknown);
  (**(code **)(lVar7 + 8))(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x10099416c | FUN_10099416c */

void FUN_10099416c(DispatchQoS param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  DispatchWorkItemFlags DVar1;
  DispatchQoS DVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  undefined1 auStack_b0 [8];
  long local_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_a0 = param_2;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  puVar4 = PTR_typeMetadataAccessor_100eae670;
  local_a8 = *(long *)(DVar1.unknown + -8);
  puVar8 = auStack_b0 + -(*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(DVar2.unknown + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  puVar3 = &DAT_100f220e8;
  _swift_allocObject(&DAT_100f220e8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined **)(puVar3 + 0x20) = param_1.unknown;
  local_70 = FUN_100653c20;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = thunk_FUN_100030410;
  puStack_78 = &DAT_100f22100;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain(param_4);
  _swift_errorRetain();
  Dispatch::DispatchQoS::get_unspecified(param_1);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100ff1c50;
  FUN_100003a00(&DAT_100ff1c50,puVar4,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar4 = &DAT_100ff1c58;
  FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
  puVar5 = &DAT_100ff1c60;
  FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
  Swift::SetAlgebra::_init(puVar8,&local_98,puVar4,puVar5,DVar1.unknown,puVar3);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async
            ((DispatchQoS)0x0,(DispatchWorkItemFlags)(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0))
            );
  __Block_release(aBlock);
  (**(code **)(local_a8 + 8))(puVar8,DVar1.unknown);
  (**(code **)(lVar7 + 8))(puVar8 + -(lVar6 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  _swift_release(local_68);
  return;
}



/* Address: 0x100994358 | FUN_100994358 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100994358(void)

{
  long lVar1;
  UUID UVar2;
  DispatchQoS DVar3;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::loopID;
  UVar2 = Foundation::UUID::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar2.unknown + -8) + 8))(unaff_x20 + lVar1,UVar2.unknown);
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 8))(unaff_x20 + lVar1,DVar3.unknown);
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009943f0 | FUN_1009943f0 */

void FUN_1009943f0(void)

{
  FUN_1009943f8(0);
  return;
}



/* Address: 0x1009943f8 | FUN_1009943f8 */

void FUN_1009943f8(undefined8 param_1)

{
  if (DAT_100ff1b78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc7a58);
  return;
}



/* Address: 0x100994430 | FUN_100994430 */

undefined1  [16] FUN_100994430(undefined *param_1,ulong param_2)

{
  UUID UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_60 = PTR___value_witness_table_for_Builtin_UnknownObject_100eabd30 + 0x40;
  local_50 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_58 = local_60;
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_48 = *(long *)(UVar1.unknown + -8) + 0x40;
    UVar1.unknown = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
    if (param_2 < 0x40) {
      local_40 = *(long *)(UVar1.unknown + -8) + 0x40;
      puStack_38 = &DAT_100c8ac10;
      local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      puStack_28 = &DAT_100c8ac28;
      uVar2 = 0x100;
      _swift_updateClassMetadata2(param_1,0x100,8,&local_60,param_1 + 0x50);
      if (param_1 == (undefined *)0x0) {
        param_1 = (undefined *)0x0;
        uVar2 = 0;
      }
      goto LAB_1009944e8;
    }
  }
  param_1 = UVar1.unknown;
  uVar2 = 0x3f;
LAB_1009944e8:
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x1009944f8 | FUN_1009944f8 */

undefined1  [16] FUN_1009944f8(void)

{
  return ZEXT816(0x100f21c90);
}



/* Address: 0x100994508 | thunk_FUN_10099450c */

void thunk_FUN_10099450c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1c38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8ac90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ac90,&DAT_100f21c90);
  DAT_100ff1c38 = pTVar1;
  return;
}



/* Address: 0x10099450c | FUN_10099450c */

void FUN_10099450c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1c38 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8ac90;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ac90,&DAT_100f21c90);
  DAT_100ff1c38 = pTVar1;
  return;
}



/* Address: 0x10099454c | thunk_FUN_100992db8 */

void thunk_FUN_100992db8(void)

{
  FUN_100992db8();
  return;
}



/* Address: 0x100994550 | thunk_FUN_100993584 */

void thunk_FUN_100993584(void)

{
  FUN_100993584();
  return;
}



/* Address: 0x100994554 | thunk_FUN_100992670 */

void thunk_FUN_100992670(void)

{
  FUN_100992670();
  return;
}



/* Address: 0x100994558 | FUN_100994558 */

void FUN_100994558(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100992db8(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS,param_1,param_2);
  return;
}



/* Address: 0x100994570 | thunk_FUN_100992f30 */

void thunk_FUN_100992f30(void)

{
  FUN_100992f30();
  return;
}



/* Address: 0x100994574 | thunk_FUN_100992654 */

void thunk_FUN_100992654(void)

{
  FUN_100992654();
  return;
}



/* Address: 0x100994578 | FUN_100994578 */

void FUN_100994578(void)

{
  FUN_100994650();
  return;
}



/* Address: 0x100994584 | FUN_100994584 */

void FUN_100994584(void)

{
  FUN_100994650();
  return;
}



/* Address: 0x100994590 | FUN_100994590 */

undefined * FUN_100994590(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  _swift_retain();
  return puVar1;
}



/* Address: 0x1009945f8 | FUN_1009945f8 */

void FUN_1009945f8(void)

{
  FUN_100003a00(&DAT_100ff1c48,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acf0);
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10099463c | FUN_10099463c */

void FUN_10099463c(void)

{
  FUN_1009954d0();
  return;
}



/* Address: 0x100994650 | FUN_100994650 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100994650(void)

{
  code *pcVar1;
  DispatchPredicate DVar2;
  bool bVar3;
  undefined7 extraout_var;
  undefined4 *in_x6;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  long lVar4;
  
  DVar2 = Dispatch::DispatchPredicate::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,DVar2.value);
  lVar6 = *(long *)(lVar4 + -8);
  puVar5 = (undefined8 *)
           (&stack0xffffffffffffffc0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0));
  *puVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  (**(code **)(lVar6 + 0x68))(puVar5,*in_x6,lVar4);
  bVar3 = Dispatch::_dispatchPreconditionTest((DispatchPredicate)(__int8)puVar5);
  (**(code **)(lVar6 + 8))(puVar5,lVar4);
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009946f0);
  (*pcVar1)();
}



/* Address: 0x1009946f0 | FUN_1009946f0 */

void FUN_1009946f0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  
  if (*(char *)(param_1 + 0x28) != '\x01') {
    uVar1 = *(undefined8 *)(param_1 + 0x18);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    uVar4 = *(undefined8 *)(param_1 + 0x10);
    _swift_retain(uVar4);
    _swift_retain(uVar2);
    FUN_100995a00(uVar4,uVar1,uVar2);
    _swift_release(uVar2);
    _swift_release(uVar4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100994754);
  (*pcVar3)();
}



/* Address: 0x100994754 | FUN_100994754 */

void FUN_100994754(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = &DAT_100f21df0;
  _swift_allocObject(&DAT_100f21df0,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &DAT_100f21e18;
  _swift_allocObject(&DAT_100f21e18,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_retain(param_2);
  _swift_retain(puVar2);
  FUN_100992db8(unaff_x20 + lVar1,FUN_1000386a0,puVar3);
  _swift_release(puVar2);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1009947fc | FUN_1009947fc */

void FUN_1009947fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_10063f108(param_1,param_2,*unaff_x20,param_3);
  return;
}



/* Address: 0x100994808 | FUN_100994808 */

void FUN_100994808(void)

{
  FUN_10063f1ec();
  return;
}



/* Address: 0x100994814 | FUN_100994814 */

void FUN_100994814(void)

{
  FUN_10063f2f0();
  return;
}



/* Address: 0x100994820 | FUN_100994820 */

void FUN_100994820(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10099484c | thunk_FUN_100993650 */

void thunk_FUN_100993650(void)

{
  FUN_100993650();
  return;
}



/* Address: 0x100994850 | FUN_100994850 */

void FUN_100994850(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006419c8(*unaff_x20,&PTR_PTR_100f21d18);
  return;
}



/* Address: 0x100994860 | FUN_100994860 */

void FUN_100994860(undefined *param_1,undefined *param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  code *pcVar14;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::state;
  if (param_1[_TtC20NIOTransportServices14NIOTSEventLoop::state] == '\0') {
    param_1[_TtC20NIOTransportServices14NIOTSEventLoop::state] = 1;
    lVar8 = _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels;
    _swift_beginAccess(param_1 + _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,
                       auStack_78,0,0);
    uVar11 = *(undefined8 *)(param_1 + lVar8);
    uVar9 = uVar11;
    _swift_bridgeObjectRetain();
    FUN_100994e64();
    _swift_bridgeObjectRelease(uVar11);
    puVar3 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(undefined **)(puVar3 + 0x20) = param_1;
    *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
    puVar13 = (undefined8 *)(puVar3 + 0x10);
    *puVar13 = 0;
    puVar3[0x18] = 0xff;
    puVar10 = (undefined8 *)(puVar3 + 0x30);
    *puVar10 = 0;
    *(undefined8 *)(puVar3 + 0x38) = 0;
    *(undefined8 *)(puVar3 + 0x40) = 0;
    puVar4 = param_1;
    _swift_retain();
    FUN_100992670();
    if (((ulong)puVar4 & 1) == 0) {
      puVar4 = &DAT_100f22200;
      _swift_allocObject(&DAT_100f22200,0x30,7);
      *(undefined **)(puVar4 + 0x10) = puVar3;
      *(undefined8 *)(puVar4 + 0x18) = uVar9;
      *(undefined **)(puVar4 + 0x20) = param_1;
      *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f21d18;
      lVar8 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
      _swift_retain(param_1);
      _swift_retain(puVar3);
      _swift_bridgeObjectRetain(uVar9);
      FUN_100992db8(param_1 + lVar8,FUN_100997d80,puVar4);
      _swift_bridgeObjectRelease(uVar9);
      _swift_release(puVar4);
    }
    else {
      FUN_1009962a4(puVar3,uVar9,param_1);
      _swift_bridgeObjectRelease(uVar9);
    }
    puVar4 = &DAT_100f22228;
    _swift_allocObject(&DAT_100f22228,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_1009805f0;
    *(undefined **)(puVar4 + 0x18) = param_2;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    uVar5 = *(ulong *)(puVar3 + 0x20);
    lVar8 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar14 = *(code **)(lVar8 + 0x10);
    _swift_retain_n(puVar3,2);
    _swift_retain_n(param_2,4);
    uVar6 = uVar5;
    (*pcVar14)(uVar5,lVar8);
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f22250;
      _swift_allocObject(&DAT_100f22250,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(code **)(puVar7 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      pcVar14 = *(code **)(lVar8 + 0x18);
      _swift_retain(puVar3);
      _swift_retain(puVar4);
      (*pcVar14)(thunk_FUN_1008db360,puVar7,uVar5,lVar8);
      _swift_release(puVar7);
      puVar7 = puVar3;
      puVar12 = param_2;
    }
    else {
      _swift_beginAccess(puVar13,auStack_c8,0,0);
      cVar2 = puVar3[0x18];
      puVar7 = param_2;
      puVar12 = puVar4;
      if (cVar2 == -1) {
        _swift_beginAccess(puVar10,auStack_98,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_98);
        puVar4 = puVar3;
      }
      else {
        uVar9 = *puVar13;
        FUN_100308524(uVar9,cVar2);
        FUN_100988948(uVar9,cVar2,param_2);
        FUN_100308538(uVar9,cVar2);
        puVar4 = puVar3;
      }
    }
    _swift_release(puVar7);
    _swift_release(puVar12);
    _swift_release_n(param_2,2);
    _swift_release(puVar4);
    puVar4 = &DAT_100f22278;
    _swift_allocObject(&DAT_100f22278,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_100997dc4;
    *(undefined **)(puVar4 + 0x18) = param_1;
    *(undefined **)(puVar4 + 0x20) = puVar3;
    uVar5 = *(ulong *)(puVar3 + 0x20);
    lVar8 = *(long *)(puVar3 + 0x28);
    _swift_getObjectType();
    pcVar14 = *(code **)(lVar8 + 0x10);
    _swift_retain_n(param_1,4);
    _swift_retain_n(puVar3,2);
    uVar6 = uVar5;
    (*pcVar14)(uVar5,lVar8);
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100f222a0;
      _swift_allocObject(&DAT_100f222a0,0x28,7);
      *(undefined **)(puVar7 + 0x10) = puVar3;
      *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      pcVar14 = *(code **)(lVar8 + 0x18);
      _swift_retain(puVar3);
      _swift_retain(puVar4);
      (*pcVar14)(thunk_FUN_1008db360,puVar7,uVar5,lVar8);
      _swift_release(puVar7);
      puVar7 = puVar3;
      puVar12 = param_1;
    }
    else {
      _swift_beginAccess(puVar13,auStack_98,0,0);
      puVar7 = param_1;
      puVar12 = puVar4;
      if (puVar3[0x18] == -1) {
        _swift_beginAccess(puVar10,auStack_b0,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_b0);
        puVar4 = puVar3;
      }
      else {
        param_1[lVar1] = 2;
        puVar4 = puVar3;
      }
    }
    _swift_release(puVar7);
    _swift_release(puVar12);
    _swift_release_n(param_1,2);
    _swift_release(puVar4);
    _swift_release(puVar3);
    return;
  }
  FUN_100997b80();
  puVar3 = &DAT_100eef640;
  uVar9 = 0;
  _swift_allocError(&DAT_100eef640,param_1,0,0);
  *param_1 = 2;
  uVar5 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar6 = uVar5;
  lVar8 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar6 & 1) == 0) {
    puVar4 = &DAT_100f221d8;
    _swift_allocObject(&DAT_100f221d8,0x20,7);
    *(undefined **)(puVar4 + 0x10) = param_2;
    *(undefined **)(puVar4 + 0x18) = puVar3;
    pcVar14 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(puVar3);
    (*pcVar14)(FUN_1008d678c,puVar4,uVar5,lVar1);
    _swift_release(puVar4);
  }
  else {
    puVar4 = puVar3;
    thunk_FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    FUN_100004550(puVar4,lVar8);
    _swift_bridgeObjectRelease(uVar9);
  }
  _swift_errorRelease(puVar3);
  return;
}



/* Address: 0x100994dac | FUN_100994dac */

void FUN_100994dac(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  ulong local_50;
  undefined1 local_48;
  undefined8 uStack_38;
  
  uVar2 = 0;
  uStack_38 = param_1;
  _swift_errorRetain();
  puVar1 = &DAT_100ff1318;
  FUN_1000f7830(&DAT_100ff1318,&DAT_100c8b710);
  _swift_dynamicCast(&local_50,&uStack_38,puVar1,&DAT_100eeb710,6);
  if ((uVar2 & 1) != 0) {
    uVar2 = local_50;
    thunk_FUN_10061dfe8(local_50,local_48,3,3);
    FUN_10061e298(local_50,local_48);
    if ((uVar2 & 1) != 0) {
      return;
    }
  }
  _swift_willThrow();
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x100994e64 | FUN_100994e64 */

undefined * FUN_100994e64(long param_1)

{
  _HashTable _Var1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  Bucket BVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  code *pcVar17;
  undefined *puVar18;
  long lVar19;
  ulong uVar20;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    FUN_1009b4fa4(0,lVar14,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar5 = Swift::_HashTable::get_startBucket(_Var1);
    lVar10 = 0;
    iVar3 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar5.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952c8);
        (*pcVar17)();
      }
      uVar11 = (ulong)BVar5.offset >> 6;
      uVar13 = 1L << (BVar5.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar11 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952cc);
        (*pcVar17)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952d0);
        (*pcVar17)();
      }
      plVar2 = (long *)(*(long *)(param_1 + 0x38) + BVar5.offset * 0x10);
      lVar16 = *plVar2;
      lVar19 = plVar2[1];
      lVar6 = lVar16;
      _swift_getObjectType();
      _swift_unknownObjectRetain(lVar16);
      FUN_10061cf14(2,0,lVar6,lVar19);
      (**(code **)(lVar19 + 0x20))(lVar6,lVar19);
      puVar7 = &DAT_100ff07b8;
      FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
      _swift_allocObject();
      lVar19 = *(long *)(lVar6 + 0x28);
      uVar20 = *(ulong *)(lVar6 + 0x20);
      *(undefined8 *)(puVar7 + 0x28) = *(undefined8 *)(lVar6 + 0x28);
      *(ulong *)(puVar7 + 0x20) = uVar20;
      *(undefined8 *)(puVar7 + 0x10) = 0;
      puVar7[0x18] = 0xff;
      *(undefined8 *)(puVar7 + 0x38) = 0;
      *(undefined8 *)(puVar7 + 0x40) = 0;
      *(undefined8 *)(puVar7 + 0x30) = 0;
      puVar8 = &DAT_100f22570;
      _swift_allocObject(&DAT_100f22570,0x30,7);
      *(long *)(puVar8 + 0x10) = lVar6;
      *(undefined **)(puVar8 + 0x18) = puVar7;
      *(code **)(puVar8 + 0x20) = FUN_100994dac;
      *(undefined8 *)(puVar8 + 0x28) = 0;
      uVar15 = uVar20;
      _swift_getObjectType();
      pcVar17 = *(code **)(lVar19 + 0x10);
      _swift_retain_n(lVar6,2);
      _swift_retain_n(puVar7,2);
      _swift_unknownObjectRetain(uVar20);
      uVar20 = uVar15;
      (*pcVar17)(uVar15,lVar19);
      if ((uVar20 & 1) == 0) {
        puVar18 = &DAT_100f22598;
        _swift_allocObject(&DAT_100f22598,0x28,7);
        *(long *)(puVar18 + 0x10) = lVar6;
        *(code **)(puVar18 + 0x18) = FUN_100997e5c;
        *(undefined **)(puVar18 + 0x20) = puVar8;
        pcVar17 = *(code **)(lVar19 + 0x18);
        _swift_retain(lVar6);
        _swift_retain(puVar8);
        (*pcVar17)(thunk_FUN_1008db360,puVar18,uVar15,lVar19);
        _swift_unknownObjectRelease(lVar16);
        _swift_release(puVar18);
        _swift_release(puVar7);
        _swift_release_n(lVar6,2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = 0;
        _swift_beginAccess(lVar6 + 0x10,auStack_78,0,0);
        if (*(char *)(lVar6 + 0x18) == -1) {
          _swift_beginAccess(lVar6 + 0x30,auStack_90,0x21,0);
          FUN_10064967c(FUN_100997e5c,puVar8);
          _swift_endAccess(auStack_90);
          lVar19 = 0;
          puVar18 = (undefined *)0x0;
          uVar9 = 0;
        }
        else {
          lVar19 = lVar6;
          puVar18 = puVar7;
          FUN_100995728(lVar6,puVar7);
        }
        FUN_1006486f8(lVar19,puVar18,uVar9);
        FUN_100004550(lVar19,puVar18);
        _swift_unknownObjectRelease(lVar16);
        _swift_release(puVar7);
        _swift_release_n(lVar6,2);
        _swift_release(puVar8);
        _swift_bridgeObjectRelease(uVar9);
      }
      uVar15 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar15) {
        FUN_1009b4fa4(1 < *(ulong *)(puVar4 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar15 + 1;
      *(undefined **)(puVar4 + uVar15 * 8 + 0x20) = puVar7;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= (ulong)BVar5.offset) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952d4);
        (*pcVar17)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar11 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952d8);
        (*pcVar17)();
      }
      if (iVar3 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x1009952dc);
        (*pcVar17)();
      }
      uVar13 = *(ulong *)(_Var1.unknown + uVar11 * 8) & -2L << (BVar5.offset & 0x3fU);
      if (uVar13 == 0) {
        lVar16 = uVar11 << 6;
        puVar12 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar11) {
            FUN_10000cae0(BVar5.offset,iVar3,0);
            goto LAB_100994f08;
          }
          uVar13 = *puVar12;
          lVar16 = lVar16 + 0x40;
          puVar12 = puVar12 + 1;
        } while (uVar13 == 0);
        FUN_10000cae0(BVar5.offset,iVar3,0);
        uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar16;
      }
      else {
        uVar11 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar15 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | BVar5.offset & 0x7fffffffffffffc0U;
      }
LAB_100994f08:
      lVar10 = lVar10 + 1;
      BVar5.offset = uVar15;
    } while (lVar10 != lVar14);
  }
  return puVar4;
}



/* Address: 0x1009952dc | FUN_1009952dc */

void FUN_1009952dc(undefined1 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 *local_58 [3];
  
  if (*(char *)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::state) == '\0') {
    _swift_getObjectType();
    local_58[0] = param_1;
    (**(code **)(*(long *)(param_2 + 8) + 0x50))();
    _swift_unknownObjectRelease();
    lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels;
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,
                       local_58,0x21,0);
    _swift_unknownObjectRetain(param_1);
    uVar2 = *(undefined8 *)(unaff_x20 + lVar1);
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + lVar1);
    *(undefined8 *)(unaff_x20 + lVar1) = 0x8000000000000000;
    FUN_100995e68(param_1,param_2,param_1,uVar2);
    *(undefined8 *)(unaff_x20 + lVar1) = uVar3;
    _swift_endAccess(local_58);
  }
  else {
    FUN_100997b80();
    _swift_allocError(&DAT_100eef640,param_1,0,0);
    *param_1 = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1009953e4 | FUN_1009953e4 */

void FUN_1009953e4(UnownedJob param_1)

{
  FUN_100003a00(&DAT_100ff1c40,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acb8);
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x100995438 | FUN_100995438 */

void FUN_100995438(Job param_1)

{
  FUN_100003a00(&DAT_100ff1c40,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acb8);
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10099548c | FUN_10099548c */

void FUN_10099548c(void)

{
  FUN_1009954d0();
  return;
}



/* Address: 0x1009954a0 | FUN_1009954a0 */

void FUN_1009954a0(uint param_1)

{
  code *pcVar1;
  
  FUN_100992670();
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009954bc);
  (*pcVar1)();
}



/* Address: 0x1009954bc | FUN_1009954bc */

void FUN_1009954bc(void)

{
  FUN_1009954d0();
  return;
}



/* Address: 0x1009954d0 | FUN_1009954d0 */

void FUN_1009954d0(ExecutorJob param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  UnownedJob UVar2;
  long unaff_x20;
  
  UVar2 = Swift::UnownedJob::init(param_1);
  _swift_allocObject(param_4,0x20,7);
  *(undefined **)(param_4 + 0x10) = UVar2.unknown;
  *(long *)(param_4 + 0x18) = unaff_x20;
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_retain();
  FUN_100992db8(unaff_x20 + lVar1,param_5,param_4);
  _swift_release(param_4);
  return;
}



/* Address: 0x10099553c | FUN_10099553c */

void FUN_10099553c(void)

{
  FUN_100003a00(&DAT_100ff1c40,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acb8);
  return;
}



/* Address: 0x100995568 | FUN_100995568 */

void FUN_100995568(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff1c48;
  FUN_100003a00(&DAT_100ff1c48,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acf0);
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Address: 0x1009955a4 | FUN_1009955a4 */

/* WARNING: Removing unreachable block (ram,0x000100995684) */

undefined8 FUN_1009955a4(long param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 == '\x01') {
    FUN_1008fde58(uVar1,uVar2,1);
    (*param_3)(&local_88,uVar1);
    uVar5 = local_88;
    FUN_100999868(local_88,uStack_80,0);
    FUN_1009082bc(uVar1,uVar2,1);
    _swift_unknownObjectRelease(local_88);
  }
  else {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100995728);
      (*pcVar4)();
    }
    _swift_beginAccess(param_2 + 0x10,&local_88,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar3;
      _swift_beginAccess(param_2 + 0x38,auStack_a0,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(uVar1);
    }
  }
  return uVar5;
}


