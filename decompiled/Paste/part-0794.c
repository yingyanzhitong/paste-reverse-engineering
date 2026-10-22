/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008be2b4 | FUN_1008be2b4 */

void FUN_1008be2b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *unaff_x20;
  
  FUN_1008be154(param_1,param_2,*unaff_x20,param_3,param_4);
  return;
}



/* Address: 0x1008be2d4 | FUN_1008be2d4 */

void FUN_1008be2d4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1008be204(param_1,*unaff_x20,param_2,param_3);
  return;
}



/* Address: 0x1008be2f4 | FUN_1008be2f4 */

void FUN_1008be2f4(undefined8 *param_1)

{
  undefined8 unaff_x20;
  
  param_1[3] = &DAT_100f0d0f0;
  param_1[4] = &PTR_PTR_100f0cdb0;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1008be314 | FUN_1008be314 */

void FUN_1008be314(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008be350 | FUN_1008be350 */

void FUN_1008be350(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008be394 | thunk_FUN_1008b83dc */

void thunk_FUN_1008b83dc(void)

{
  FUN_1008b83dc();
  return;
}



/* Address: 0x1008be398 | thunk_FUN_1008b86e4 */

void thunk_FUN_1008b86e4(void)

{
  FUN_1008b86e4();
  return;
}



/* Address: 0x1008be39c | thunk_FUN_1008bc500 */

void thunk_FUN_1008bc500(void)

{
  FUN_1008bc500();
  return;
}



/* Address: 0x1008be3a0 | thunk_FUN_1008bc994 */

void thunk_FUN_1008bc994(void)

{
  FUN_1008bc994();
  return;
}



/* Address: 0x1008be3a4 | FUN_1008be3a4 */

void FUN_1008be3a4(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f0cdc8);
  return;
}



/* Address: 0x1008be3cc | FUN_1008be3cc */

void FUN_1008be3cc(void)

{
  FUN_1008bd6ac();
  return;
}



/* Address: 0x1008be3ec | FUN_1008be3ec */

void FUN_1008be3ec(void)

{
  FUN_1008bdbd8();
  return;
}



/* Address: 0x1008be40c | FUN_1008be40c */

void FUN_1008be40c(void)

{
  FUN_1008be430();
  return;
}



/* Address: 0x1008be418 | FUN_1008be418 */

void FUN_1008be418(undefined8 param_1,undefined8 param_2)

{
  FUN_1008be490(param_1,param_2,FUN_10062714c);
  return;
}



/* Address: 0x1008be424 | FUN_1008be424 */

void FUN_1008be424(void)

{
  FUN_1008be430();
  return;
}



/* Address: 0x1008be430 | FUN_1008be430 */

void FUN_1008be430(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    (*param_5)(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be484);
  (*pcVar1)();
}



/* Address: 0x1008be484 | FUN_1008be484 */

void FUN_1008be484(undefined8 param_1,undefined8 param_2)

{
  FUN_1008be490(param_1,param_2,FUN_100627440);
  return;
}



/* Address: 0x1008be490 | FUN_1008be490 */

void FUN_1008be490(undefined8 param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    (*param_3)();
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be4cc);
  (*pcVar1)();
}



/* Address: 0x1008be4cc | FUN_1008be4cc */

void FUN_1008be4cc(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x1008be4f4 | FUN_1008be4f4 */

void FUN_1008be4f4(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_1006276a0(param_1,param_2);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be544);
  (*pcVar1)();
}



/* Address: 0x1008be544 | FUN_1008be544 */

void FUN_1008be544(void)

{
  long *unaff_x20;
  
  _swift_retain(*(undefined8 *)(*unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008be574 | FUN_1008be574 */

void FUN_1008be574(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb120;
  FUN_1000f7830(&DAT_100feb120,&DAT_100c826f0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1008be5a8 | FUN_1008be5a8 */

long FUN_1008be5a8(void)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = 0;
  FUN_1008c5870();
  _swift_allocObject();
  puVar4 = &DAT_100feb128;
  FUN_1000f7830(&DAT_100feb128,&DAT_100c82940);
  _swift_allocObject();
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar4 + 0x10),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008be664);
    (*pcVar1)();
  }
  *(undefined **)(lVar3 + 0x10) = puVar4;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1008c0aa8();
  *(undefined **)(lVar3 + 0x18) = puVar4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return lVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008be668 | FUN_1008be668 */

void FUN_1008be668(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  Attributes attributes;
  long lVar9;
  String label;
  undefined1 auStack_80 [8];
  OS_dispatch_queue *local_78;
  long local_70;
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  local_70 = CONCAT71(extraout_var,AVar1.value);
  lVar9 = *(long *)(local_70 + -8);
  puVar8 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar5 = PTR__typeMetadataAccessor_100eae788;
  attributes.unknown =
       puVar8 + -(*(long *)(*(long *)(AVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(*(long *)(DVar3.unknown + -8) + 0x40);
  DVar3.unknown = (undefined *)0x0;
  FUN_1008c1058();
  local_78 = (OS_dispatch_queue *)DVar3.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100feb130;
  FUN_100003a00(&DAT_100feb130,puVar5,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar5 = &DAT_100feb138;
  FUN_1000f7830(&DAT_100feb138,&DAT_100c82700);
  puVar6 = &DAT_100feb140;
  FUN_100155c48(&DAT_100feb140,&DAT_100feb138,&DAT_100c82700);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,puVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,local_70);
  label.bridgeObject = (void *)0x8000000100db4520;
  label.str = (char *)0xd000000000000022;
  (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
            (local_78,label,(DispatchQoS)(attributes.unknown + -(lVar7 + 0xfU & 0xfffffffffffffff0))
             ,attributes,(AutoreleaseFrequency)(__int8)puVar8);
  return;
}



/* Address: 0x1008be7fc | FUN_1008be7fc */

void FUN_1008be7fc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb148;
  FUN_1000f7830(&DAT_100feb148,&DAT_100c82950);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = 0;
  return;
}



/* Address: 0x1008be830 | FUN_1008be830 */

void FUN_1008be830(undefined8 param_1,long param_2,undefined8 param_3,DispatchQoS param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  DispatchWorkItemFlags qos;
  long lVar10;
  ulong uVar11;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = param_3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_b8 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = &DAT_100feb0d8;
  FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
  lVar10 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lVar6 = (long)qos.unknown - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar6,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f0d378;
  _swift_allocObject(&DAT_100f0d378,uVar9 + 0x10,uVar5 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar11,lVar6,puVar2);
  *(undefined8 *)(puVar3 + uVar9) = local_c0;
  *(undefined **)((long)(puVar3 + uVar9) + 8) = param_4.unknown;
  local_70 = FUN_1008c26c4;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0d390;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100feb250;
  FUN_100003a00(&DAT_100feb250,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar4 = &DAT_100feb260;
  FUN_100155c48(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008bea94 | FUN_1008bea94 */

void FUN_1008bea94(undefined8 param_1,long param_2,undefined8 param_3,DispatchQoS param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  DispatchWorkItemFlags qos;
  long lVar10;
  ulong uVar11;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = param_3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_b8 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = &DAT_100feb0e0;
  FUN_1000f7830(&DAT_100feb0e0,&DAT_100c82678);
  lVar10 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lVar6 = (long)qos.unknown - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar6,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f0d328;
  _swift_allocObject(&DAT_100f0d328,uVar9 + 0x10,uVar5 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar11,lVar6,puVar2);
  *(undefined8 *)(puVar3 + uVar9) = local_c0;
  *(undefined **)((long)(puVar3 + uVar9) + 8) = param_4.unknown;
  local_70 = FUN_1008c2628;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0d340;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100feb250;
  FUN_100003a00(&DAT_100feb250,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar4 = &DAT_100feb260;
  FUN_100155c48(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008becf8 | FUN_1008becf8 */

void FUN_1008becf8(undefined8 param_1,long param_2,undefined8 param_3,DispatchQoS param_4)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  DispatchWorkItemFlags qos;
  long lVar10;
  ulong uVar11;
  undefined8 local_c0;
  undefined8 local_b8;
  long local_b0;
  undefined *puStack_a8;
  long local_a0;
  undefined *local_98;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  local_c0 = param_3;
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_a0 = *(long *)(DVar1.unknown + -8);
  lVar7 = (long)&local_c0 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  qos.unknown = (undefined *)(lVar7 - (*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_b8 = *(undefined8 *)(param_2 + 0x38);
  puVar2 = &DAT_100feb248;
  FUN_1000f7830(&DAT_100feb248,&DAT_100c828b8);
  lVar10 = *(long *)(puVar2 + -8);
  lVar8 = *(long *)(lVar10 + 0x40);
  lVar6 = (long)qos.unknown - (lVar8 + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar10 + 0x10))(lVar6,param_1,puVar2);
  uVar5 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar11 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar11 + 7 & 0xfffffffffffffff8;
  puVar3 = &DAT_100f0d1e8;
  _swift_allocObject(&DAT_100f0d1e8,uVar9 + 0x10,uVar5 | 7);
  (**(code **)(lVar10 + 0x20))(puVar3 + uVar11,lVar6,puVar2);
  *(undefined8 *)(puVar3 + uVar9) = local_c0;
  *(undefined **)((long)(puVar3 + uVar9) + 8) = param_4.unknown;
  local_70 = FUN_1008c2308;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_100030410;
  puStack_78 = &DAT_100f0d200;
  local_68 = puVar3;
  aBlock = __Block_copy(&local_90);
  _swift_retain();
  Dispatch::DispatchQoS::get_unspecified(param_4);
  local_98 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = &DAT_100feb250;
  FUN_100003a00(&DAT_100feb250,PTR_typeMetadataAccessor_100eae670,
                PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
  puVar3 = &DAT_100feb258;
  FUN_1000f7830(&DAT_100feb258,&DAT_100c828c0);
  puVar4 = &DAT_100feb260;
  FUN_100155c48(&DAT_100feb260,&DAT_100feb258,&DAT_100c828c0);
  Swift::SetAlgebra::_init(lVar7,&local_98,puVar3,puVar4,DVar1.unknown,puVar2);
  (extension_Dispatch)::__C::OS_dispatch_queue::_async((DispatchQoS)0x0,qos);
  __Block_release(aBlock);
  (**(code **)(local_a0 + 8))(lVar7,DVar1.unknown);
  (**(code **)(local_b0 + 8))(qos.unknown,puStack_a8);
  _swift_release(local_68);
  return;
}



/* Address: 0x1008bef5c | FUN_1008bef5c */

/* WARNING: Removing unreachable block (ram,0x0001008bef84) */

void FUN_1008bef5c(undefined8 param_1,code *param_2)

{
  (*param_2)();
  FUN_1000f7830(&DAT_100feb0d8,&DAT_100c82670);
  Swift::CheckedContinuation::resume();
  return;
}



/* Address: 0x1008befe4 | FUN_1008befe4 */

/* WARNING: Removing unreachable block (ram,0x0001008bf010) */

void FUN_1008befe4(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  undefined1 local_68 [56];
  
  (*param_2)(local_68);
  puVar1 = &DAT_100feb0e0;
  FUN_1000f7830(&DAT_100feb0e0,&DAT_100c82678);
  Swift::CheckedContinuation::resume(local_68,puVar1);
  return;
}



/* Address: 0x1008bf074 | FUN_1008bf074 */

/* WARNING: Removing unreachable block (ram,0x0001008bf0a0) */

void FUN_1008bf074(undefined8 param_1,code *param_2)

{
  undefined *puVar1;
  undefined1 local_48 [24];
  
  (*param_2)(local_48);
  puVar1 = &DAT_100feb248;
  FUN_1000f7830(&DAT_100feb248,&DAT_100c828b8);
  Swift::CheckedContinuation::resume(local_48,puVar1);
  return;
}



/* Address: 0x1008bf104 | FUN_1008bf104 */

undefined * FUN_1008bf104(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
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



/* Address: 0x1008bf16c | FUN_1008bf16c */

void FUN_1008bf16c(void)

{
  FUN_1008c0aa8(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1008bf178 | FUN_1008bf178 */

undefined1  [16] FUN_1008bf178(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100db4550;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x1008bf194 | _pthread_self */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

pthread_t _pthread_self(void)

{
  pthread_t p_Var1;
  
  p_Var1 = _pthread_self();
  return p_Var1;
}



/* Address: 0x1008bf198 | FUN_1008bf198 */

void FUN_1008bf198(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb150;
  FUN_1000f7830(&DAT_100feb150,&DAT_100c82710);
  _swift_allocObject();
  puVar1[0x10] = 0;
  return;
}



/* Address: 0x1008bf1cc | FUN_1008bf1cc */

void FUN_1008bf1cc(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100feb150;
  FUN_1000f7830(&DAT_100feb150,&DAT_100c82710);
  _swift_allocObject();
  puVar1[0x10] = 1;
  return;
}



/* Address: 0x1008bf204 | FUN_1008bf204 */

void FUN_1008bf204(undefined8 *param_1)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
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
  
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  local_50 = 0;
  uStack_48 = 1;
  CVar1.unknown = &DAT_100feb100;
  FUN_1000f7830(&DAT_100feb100,&DAT_100c826d0);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x20,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x70,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0xc0,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x110,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x160,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x1b0,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x200,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x250,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x2a0,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x2f0,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x340,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x390,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x3e0,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x430,&DAT_100feb100,&DAT_100c826d0);
  FUN_1000f8cac(&local_90,_Var2.unknown + 0x480,&DAT_100feb100,&DAT_100c826d0);
  *(undefined8 *)(_Var2.unknown + 0x4e8) = uStack_78;
  *(undefined8 *)(_Var2.unknown + 0x4e0) = uStack_80;
  *(undefined8 *)(_Var2.unknown + 0x4f8) = uStack_68;
  *(undefined8 *)(_Var2.unknown + 0x4f0) = local_70;
  *(undefined8 *)(_Var2.unknown + 0x508) = uStack_58;
  *(undefined8 *)(_Var2.unknown + 0x500) = uStack_60;
  *(undefined8 *)(_Var2.unknown + 0x518) = uStack_48;
  *(undefined8 *)(_Var2.unknown + 0x510) = local_50;
  *(undefined8 *)(_Var2.unknown + 0x4d8) = uStack_88;
  *(undefined8 *)(_Var2.unknown + 0x4d0) = local_90;
  *param_1 = _Var2.unknown;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x1008bf3d8 | thunk_FUN_1008bf3dc */

undefined * thunk_FUN_1008bf3dc(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 uStack_40;
  
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  uStack_40 = 0xff00;
  CVar1.unknown = &DAT_100feb158;
  FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x20,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x68,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0xb0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0xf8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x140,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x188,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x1d0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x218,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x260,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x2a8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x2f0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x338,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x380,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x3c8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&uStack_80,_Var2.unknown + 0x410,&DAT_100feb158,&DAT_100c82c40);
  *(undefined8 *)(_Var2.unknown + 0x480) = uStack_58;
  *(undefined8 *)(_Var2.unknown + 0x478) = uStack_60;
  *(undefined8 *)(_Var2.unknown + 0x490) = uStack_48;
  *(undefined8 *)(_Var2.unknown + 0x488) = uStack_50;
  *(undefined2 *)(_Var2.unknown + 0x498) = uStack_40;
  *(undefined8 *)(_Var2.unknown + 0x460) = uStack_78;
  *(undefined8 *)(_Var2.unknown + 0x458) = uStack_80;
  *(undefined8 *)(_Var2.unknown + 0x470) = uStack_68;
  *(undefined8 *)(_Var2.unknown + 0x468) = uStack_70;
  return _Var2.unknown;
}



/* Address: 0x1008bf3dc | FUN_1008bf3dc */

undefined * FUN_1008bf3dc(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined2 local_40;
  
  uStack_58 = 0;
  local_60 = 0;
  uStack_48 = 0;
  uStack_50 = 0;
  uStack_78 = 0;
  local_80 = 0;
  uStack_68 = 0;
  uStack_70 = 0;
  local_40 = 0xff00;
  CVar1.unknown = &DAT_100feb158;
  FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x20,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x68,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0xb0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0xf8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x140,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x188,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x1d0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x218,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x260,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x2a8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x2f0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x338,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x380,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x3c8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_80,_Var2.unknown + 0x410,&DAT_100feb158,&DAT_100c82c40);
  *(undefined8 *)(_Var2.unknown + 0x480) = uStack_58;
  *(undefined8 *)(_Var2.unknown + 0x478) = local_60;
  *(undefined8 *)(_Var2.unknown + 0x490) = uStack_48;
  *(undefined8 *)(_Var2.unknown + 0x488) = uStack_50;
  *(undefined2 *)(_Var2.unknown + 0x498) = local_40;
  *(undefined8 *)(_Var2.unknown + 0x460) = uStack_78;
  *(undefined8 *)(_Var2.unknown + 0x458) = local_80;
  *(undefined8 *)(_Var2.unknown + 0x470) = uStack_68;
  *(undefined8 *)(_Var2.unknown + 0x468) = uStack_70;
  return _Var2.unknown;
}



/* Address: 0x1008bf5a0 | FUN_1008bf5a0 */

void FUN_1008bf5a0(undefined8 *param_1)

{
  FUN_1006883ac();
  _swift_retain(*param_1);
  return;
}



/* Address: 0x1008bf5b8 | FUN_1008bf5b8 */

undefined * FUN_1008bf5b8(void)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  pthread_mutexattr_t local_38;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100feb160;
  FUN_1000f7830(&DAT_100feb160,&DAT_100c82720);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0xf000000000000007;
  *(undefined8 *)(puVar3 + 0x10) = 0xf000000000000007;
  local_38.__sig = 0;
  local_38.__opaque[0] = '\0';
  local_38.__opaque[1] = '\0';
  local_38.__opaque[2] = '\0';
  local_38.__opaque[3] = '\0';
  local_38.__opaque[4] = '\0';
  local_38.__opaque[5] = '\0';
  local_38.__opaque[6] = '\0';
  local_38.__opaque[7] = '\0';
  _pthread_mutexattr_init(&local_38);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_38);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008bf654);
    (*pcVar1)();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008bf658 | thunk_FUN_100611728 */

void thunk_FUN_100611728(void)

{
  FUN_100611728();
  return;
}



/* Address: 0x1008bf65c | FUN_1008bf65c */

void FUN_1008bf65c(void)

{
  FUN_1008d41fc(0);
  _swift_allocObject();
  FUN_1008c90d8();
  return;
}



/* Address: 0x1008bf690 | FUN_1008bf690 */

/* WARNING: Removing unreachable block (ram,0x0001008bf6c4) */
/* WARNING: Removing unreachable block (ram,0x0001008bf768) */
/* WARNING: Removing unreachable block (ram,0x0001008bf6e4) */

void FUN_1008bf690(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  (*param_2)();
  uVar1 = 0;
  uVar2 = 0;
  FUN_1008d06a0(0,0);
  FUN_1006486f8();
  FUN_100004550(uVar1,uVar2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1008bf7dc | FUN_1008bf7dc */

/* WARNING: Removing unreachable block (ram,0x0001008bf814) */
/* WARNING: Removing unreachable block (ram,0x0001008bf834) */
/* WARNING: Removing unreachable block (ram,0x0001008bf914) */

void FUN_1008bf7dc(undefined8 param_1,code *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 local_58;
  undefined1 local_57;
  
  (*param_2)(&local_b0);
  uStack_78 = uStack_a8;
  local_80 = local_b0;
  local_70 = local_a0;
  uStack_68 = uStack_98;
  local_60 = local_90;
  local_58 = local_88;
  local_57 = 0;
  puVar1 = &local_80;
  FUN_1008d0748(puVar1);
  FUN_1006486f8();
  FUN_100004550(puVar1,param_2);
  _swift_unknownObjectRelease(local_b0);
  _swift_bridgeObjectRelease(param_3);
  FUN_100662830(local_a0,uStack_98,local_90,local_88);
  return;
}



/* Address: 0x1008bf988 | FUN_1008bf988 */

void FUN_1008bf988(long param_1,undefined8 param_2)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar3 = &DAT_100f0d3c8;
  _swift_allocObject(&DAT_100f0d3c8,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar4 = &DAT_100f0d3f0;
  _swift_allocObject(&DAT_100f0d3f0,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1008c2740;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = param_1;
  uVar5 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  pcVar10 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(param_1,2);
  uVar6 = uVar5;
  (*pcVar10)(uVar5,lVar1);
  if ((uVar6 & 1) != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    cVar2 = *(char *)(param_1 + 0x18);
    if (cVar2 == '\x01') {
      puVar7 = &DAT_100feb0c8;
      FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
      puVar8 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
      ;
      _swift_allocError();
      *puVar8 = uVar9;
      FUN_1005dfeb4(uVar9,1);
      _swift_continuation_throwingResumeWithError(param_2,puVar7);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar4);
      _swift_endAccess(auStack_80);
    }
    else {
      _swift_continuation_throwingResume(param_2);
      FUN_100308538(uVar9,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_1);
    _swift_release_n(puVar3,2);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
    return;
  }
  puVar7 = &DAT_100f0d418;
  _swift_allocObject(&DAT_100f0d418,0x28,7);
  *(long *)(puVar7 + 0x10) = param_1;
  *(code **)(puVar7 + 0x18) = FUN_1006225d4;
  *(undefined **)(puVar7 + 0x20) = puVar4;
  pcVar10 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_retain(puVar4);
  (*pcVar10)(thunk_FUN_1008c1400,puVar7,uVar5,lVar1);
  _swift_release(puVar7);
  _swift_release(param_1);
  _swift_release_n(puVar3,2);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008bfbd8 | FUN_1008bfbd8 */

void FUN_1008bfbd8(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = param_1 + 0x10;
  puVar3 = auStack_48;
  uVar1 = 0;
  _swift_beginAccess(lVar2,puVar3,0,0);
  if (*(char *)(param_1 + 0x39) == -1) {
    _swift_beginAccess(param_1 + 0x50,auStack_60,0x21,0);
    FUN_10064967c(param_2,param_3);
    _swift_endAccess(auStack_60);
    lVar2 = 0;
    puVar3 = (undefined1 *)0x0;
    uVar1 = 0;
  }
  else {
    (*param_2)();
  }
  FUN_1006486f8(lVar2,puVar3,uVar1);
  FUN_100004550(lVar2,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008bfca0 | FUN_1008bfca0 */

void FUN_1008bfca0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 uStack_b9;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  char local_8f;
  ulong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if ((undefined **)PTR___type_metadata_for_Any_100eae0c0 == &PTR_PTR_100eeaaa0) {
    FUN_100877858();
    if (local_8f == '\0') {
      if (-1 < (long)local_d0) {
        local_80 = local_d0;
        uStack_78 = uStack_c8;
        local_70._0_6_ = CONCAT24(local_bc,local_c0);
        local_70._0_7_ = CONCAT16(local_ba,(undefined6)local_70);
        puVar3 = &DAT_100eeaaa8;
        goto LAB_1008bfe80;
      }
LAB_1008bfdb8:
      FUN_10000c650();
      goto LAB_1008bfe4c;
    }
  }
  else if ((undefined **)PTR___type_metadata_for_Any_100eae0c0 == &PTR_PTR_100ef1118) {
    FUN_100877858();
    if (local_8f == '\0') {
      if ((long)local_d0 < 0) {
        local_80 = local_d0 & 0x7fffffffffffffff;
        uStack_78 = uStack_c8;
        local_70._0_6_ = CONCAT24(local_bc,local_c0);
        local_70._0_7_ = CONCAT16(local_ba,(undefined6)local_70);
        puVar3 = &DAT_100ef1120;
        goto LAB_1008bfe80;
      }
      goto LAB_1008bfdb8;
    }
  }
  else {
    puVar3 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    if (puVar3 == &DAT_100ef13d8) {
      FUN_100877858();
      if (local_8f == '\0') {
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        local_70._0_6_ = CONCAT24(local_bc,local_c0);
        local_70._0_7_ = CONCAT16(local_ba,(undefined6)local_70);
        puVar3 = &DAT_100ef13d8;
        goto LAB_1008bfe80;
      }
    }
    else {
      puVar2 = &DAT_100feb288;
      FUN_1000f7830(&DAT_100feb288,&DAT_100c828e8);
      if (puVar2 != puVar3) {
        FUN_1008bfea4(param_1);
        return;
      }
      FUN_100877858();
      if (local_8f == '\x01') {
        uStack_58 = uStack_a8;
        local_60 = local_b0;
        uStack_48 = uStack_98;
        uStack_50 = uStack_a0;
        local_40 = local_90;
        local_70 = CONCAT17(uStack_b9,CONCAT16(local_ba,CONCAT24(local_bc,local_c0)));
        uStack_78 = uStack_c8;
        local_80 = local_d0;
        uStack_68 = uStack_b8;
        puVar3 = puVar1 + 8;
LAB_1008bfe80:
        _swift_dynamicCast(param_1,&local_80,puVar3,puVar1 + 8,7);
        return;
      }
    }
  }
  FUN_1008b78fc(&local_d0);
LAB_1008bfe4c:
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x1008bfea4 | FUN_1008bfea4 */

void FUN_1008bfea4(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 uStack_59;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  char local_2f;
  
  FUN_100877858();
  if (local_2f == '\0') {
    uStack_b8 = uStack_68;
    local_c0 = local_70;
    local_b0 = CONCAT44(CONCAT22(CONCAT11(local_b0._7_1_,local_5a),local_5c),local_60);
    puVar1 = &DAT_100ef13d8;
  }
  else {
    if (local_2f != '\x01') {
      FUN_100011080(&local_70,param_1);
      return;
    }
    uStack_98 = uStack_48;
    local_a0 = local_50;
    uStack_88 = uStack_38;
    uStack_90 = uStack_40;
    local_80 = local_30;
    local_b0 = CONCAT17(uStack_59,CONCAT16(local_5a,CONCAT24(local_5c,local_60)));
    uStack_b8 = uStack_68;
    local_c0 = local_70;
    uStack_a8 = uStack_58;
    puVar1 = &DAT_100feb288;
    FUN_1000f7830(&DAT_100feb288,&DAT_100c828e8);
  }
  puVar2 = param_1;
  _swift_dynamicCast(param_1,&local_c0,puVar1,PTR___type_metadata_for_Any_100eae0c0 + 8,6);
  if (((ulong)puVar2 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  return;
}



/* Address: 0x1008bff88 | FUN_1008bff88 */

undefined * FUN_1008bff88(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c0040);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    CVar2.unknown = &DAT_100feb100;
    FUN_1000f7830(&DAT_100feb100,&DAT_100c826d0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_2,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_2;
    puVar4 = _Var3.unknown + 0x20;
    do {
      FUN_1000f8cac(param_1,puVar4,&DAT_100feb100,&DAT_100c826d0);
      puVar4 = puVar4 + 0x50;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_1000fb4c4(param_1,&DAT_100feb100,&DAT_100c826d0);
  return _Var3.unknown;
}



/* Address: 0x1008c0040 | FUN_1008c0040 */

void FUN_1008c0040(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar5 = *unaff_x20;
  plVar6 = (long *)(lVar5 + 0x10);
  lVar7 = *plVar6;
  if (lVar7 < param_2) {
    puVar2 = &DAT_100feb270;
    FUN_1000f7830(&DAT_100feb270,&DAT_100c828d0);
    FUN_1006841c8(param_2,param_3 & 1,lVar5,puVar2);
    if ((param_1 & 1) == 0) {
      puVar2 = &DAT_100feb278;
      FUN_1000f7830(&DAT_100feb278,&DAT_100c83010);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x19;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      lVar7 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 4;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1008c0380(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
      }
    }
    else {
      lVar7 = *(long *)(lVar5 + 0x18);
      puVar2 = &DAT_100feb278;
      FUN_1000f7830(&DAT_100feb278,&DAT_100c83010);
      _swift_allocObject();
      puVar3 = puVar2;
      _malloc_size();
      puVar1 = puVar3 + -0x19;
      if (0x27 < (long)puVar3) {
        puVar1 = puVar3 + -0x28;
      }
      *(long *)(puVar2 + 0x10) = (long)puVar1 >> 4;
      *(long *)(puVar2 + 0x18) = lVar7;
      *(undefined8 *)(puVar2 + 0x20) = 0;
      if (0 < lVar7) {
        FUN_1008c0278(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar2 = &DAT_100feb278;
    FUN_1000f7830(&DAT_100feb278,&DAT_100c83010);
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar5 + 0x20);
    uVar8 = *(undefined8 *)(lVar5 + 0x18);
    lVar4 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar2 + 0x10) = lVar7;
    *(undefined8 *)(puVar2 + 0x20) = uVar9;
    *(undefined8 *)(puVar2 + 0x18) = uVar8;
    if (0 < lVar4) {
      FUN_1008d3380(puVar2 + 0x10,puVar2 + 0x28,plVar6,lVar5 + 0x28);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar2;
  return;
}



/* Address: 0x1008c0204 | FUN_1008c0204 */

void FUN_1008c0204(long *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = param_1[1];
  lVar4 = param_1[2] + lVar5;
  if (SCARRY8(param_1[2],lVar5)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0270);
    (*pcVar2)();
  }
  if (lVar5 < 0) {
    if ((lVar4 < 0) && (bVar3 = SCARRY8(lVar4,*param_1), lVar4 = lVar4 + *param_1, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0278);
      (*pcVar2)();
    }
  }
  else {
    lVar5 = *param_1;
    bVar3 = SBORROW8(lVar4,lVar5);
    if ((lVar5 <= lVar4) && (lVar4 = lVar4 - lVar5, bVar3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c022c);
      (*pcVar2)();
    }
  }
  puVar1 = (undefined8 *)(param_2 + lVar4 * 0x10);
  *puVar1 = param_3;
  puVar1[1] = param_4;
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    _swift_retain(param_4);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0274);
  (*pcVar2)();
}



/* Address: 0x1008c0278 | FUN_1008c0278 */

void FUN_1008c0278(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0374);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0378);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c037c);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x10);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x10) <= param_2) {
      _memmove(param_2,param_4,lVar7 << 4);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008c0380);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x10);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x10) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 << 4);
      return;
    }
  }
  return;
}



/* Address: 0x1008c0380 | FUN_1008c0380 */

void FUN_1008c0380(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c047c);
    (*pcVar3)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar6 = lVar8 - lVar1;
    lVar7 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c0480);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar7 = lVar8;
    lVar2 = 0;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c0484);
      (*pcVar3)();
    }
    puVar4 = &DAT_100feb280;
    FUN_1000f7830(&DAT_100feb280,&DAT_100c828e0);
    _swift_arrayInitWithCopy(param_2,param_4 + lVar5 * 0x10,lVar7,puVar4);
  }
  if (lVar1 < lVar8 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008c0488);
      (*pcVar3)();
    }
    puVar4 = &DAT_100feb280;
    FUN_1000f7830(&DAT_100feb280,&DAT_100c828e0);
    _swift_arrayInitWithCopy(param_2 + lVar7 * 0x10,lVar2,lVar6,puVar4);
  }
  return;
}



/* Address: 0x1008c0488 | FUN_1008c0488 */

void FUN_1008c0488(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar3 = *param_1;
    puVar1 = &DAT_100feb0c8;
    FUN_1000f7830(&DAT_100feb0c8,&DAT_100c82c50);
    puVar2 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar2 = uVar3;
    _swift_errorRetain(uVar3);
    _swift_continuation_throwingResumeWithError(param_2,puVar1);
  }
  else {
    _swift_continuation_throwingResume(param_2);
  }
  return;
}



/* Address: 0x1008c050c | FUN_1008c050c */

void FUN_1008c050c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008c0530 | FUN_1008c0530 */

void FUN_1008c0530(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008b8f7c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008c0548 | FUN_1008c0548 */

void FUN_1008c0548(void)

{
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == *(long *)PTR____stack_chk_guard_100ea82f0) {
    FUN_1008c0594();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008c0594 | FUN_1008c0594 */

long FUN_1008c0594(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  ContiguousArray CVar5;
  _ContiguousArrayBuffer<undefined> _Var6;
  pthread_mutexattr_t *ppVar7;
  pthread_mutexattr_t *ppVar8;
  long lVar9;
  pthread_mutexattr_t local_c0;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar3 = &DAT_100feb150;
  FUN_1000f7830(&DAT_100feb150,&DAT_100c82710);
  puVar4 = puVar3;
  _swift_allocObject();
  puVar4[0x10] = 1;
  *(undefined **)(param_3 + 0x10) = puVar4;
  puVar4 = puVar3;
  _swift_allocObject(puVar3,0x11,7);
  puVar4[0x10] = 0;
  *(undefined **)(param_3 + 0x18) = puVar4;
  puVar4 = puVar3;
  _swift_allocObject(puVar3,0x11,7);
  puVar4[0x10] = 0;
  *(undefined **)(param_3 + 0x20) = puVar4;
  _swift_allocObject(puVar3,0x11,7);
  puVar3[0x10] = 1;
  *(undefined **)(param_3 + 0x28) = puVar3;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_c0.__opaque[0] = '\0';
  local_c0.__opaque[1] = '\0';
  local_c0.__opaque[2] = '\0';
  local_c0.__opaque[3] = '\0';
  local_c0.__opaque[4] = '\0';
  local_c0.__opaque[5] = '\0';
  local_c0.__opaque[6] = '\0';
  local_c0.__opaque[7] = '\0';
  local_c0.__sig = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_80 = CONCAT62(local_80._2_6_,0xff00);
  CVar5.unknown = &DAT_100feb158;
  FUN_1000f7830(&DAT_100feb158,&DAT_100c82c40);
  _Var6 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar5);
  *(undefined8 *)(_Var6.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x20,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x68,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0xb0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0xf8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x140,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x188,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x1d0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x218,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x260,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x2a8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x2f0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x338,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x380,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x3c8,&DAT_100feb158,&DAT_100c82c40);
  ppVar7 = &local_c0;
  FUN_1000f8cac(ppVar7,_Var6.unknown + 0x410,&DAT_100feb158,&DAT_100c82c40);
  *(undefined8 *)(_Var6.unknown + 0x480) = uStack_98;
  *(undefined8 *)(_Var6.unknown + 0x478) = local_a0;
  *(undefined8 *)(_Var6.unknown + 0x490) = uStack_88;
  *(undefined8 *)(_Var6.unknown + 0x488) = uStack_90;
  *(undefined2 *)(_Var6.unknown + 0x498) = (undefined2)local_80;
  *(char (*) [8])(_Var6.unknown + 0x460) = local_c0.__opaque;
  *(long *)(_Var6.unknown + 0x458) = local_c0.__sig;
  *(undefined8 *)(_Var6.unknown + 0x470) = uStack_a8;
  *(undefined8 *)(_Var6.unknown + 0x468) = uStack_b0;
  *(undefined8 *)(param_3 + 0x60) = 0;
  *(undefined8 *)(param_3 + 0x68) = 0;
  *(undefined **)(param_3 + 0x58) = _Var6.unknown;
  FUN_1006883ac();
  *(long *)(param_3 + 0x70) = ppVar7->__sig;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_c0.__opaque[0] = '\0';
  local_c0.__opaque[1] = '\0';
  local_c0.__opaque[2] = '\0';
  local_c0.__opaque[3] = '\0';
  local_c0.__opaque[4] = '\0';
  local_c0.__opaque[5] = '\0';
  local_c0.__opaque[6] = '\0';
  local_c0.__opaque[7] = '\0';
  local_c0.__sig = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_80 = 0;
  uStack_78 = 1;
  _swift_retain();
  ppVar8 = &local_c0;
  FUN_1008bff88(ppVar8,0x10);
  *(pthread_mutexattr_t **)(param_3 + 0x78) = ppVar8;
  *(undefined8 *)(param_3 + 0x80) = 0;
  *(undefined8 *)(param_3 + 0x88) = 0;
  *(undefined8 *)(param_3 + 0x90) = 0;
  *(undefined1 *)(param_3 + 0x98) = 1;
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  local_c0.__opaque[0] = '\0';
  local_c0.__opaque[1] = '\0';
  local_c0.__opaque[2] = '\0';
  local_c0.__opaque[3] = '\0';
  local_c0.__opaque[4] = '\0';
  local_c0.__opaque[5] = '\0';
  local_c0.__opaque[6] = '\0';
  local_c0.__opaque[7] = '\0';
  local_c0.__sig = 0;
  uStack_a8 = 0;
  uStack_b0 = 0;
  local_80 = CONCAT62(local_80._2_6_,0xff00);
  _Var6 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar5);
  *(undefined8 *)(_Var6.unknown + 0x10) = 0x10;
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x20,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x68,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0xb0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0xf8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x140,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x188,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x1d0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x218,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x260,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x2a8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x2f0,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x338,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x380,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x3c8,&DAT_100feb158,&DAT_100c82c40);
  FUN_1000f8cac(&local_c0,_Var6.unknown + 0x410,&DAT_100feb158,&DAT_100c82c40);
  *(undefined8 *)(_Var6.unknown + 0x480) = uStack_98;
  *(undefined8 *)(_Var6.unknown + 0x478) = local_a0;
  *(undefined8 *)(_Var6.unknown + 0x490) = uStack_88;
  *(undefined8 *)(_Var6.unknown + 0x488) = uStack_90;
  *(undefined2 *)(_Var6.unknown + 0x498) = (undefined2)local_80;
  *(char (*) [8])(_Var6.unknown + 0x460) = local_c0.__opaque;
  *(long *)(_Var6.unknown + 0x458) = local_c0.__sig;
  *(undefined8 *)(_Var6.unknown + 0x470) = uStack_a8;
  *(undefined8 *)(_Var6.unknown + 0x468) = uStack_b0;
  *(undefined8 *)(param_3 + 0xa8) = 0;
  *(undefined8 *)(param_3 + 0xb0) = 0;
  *(undefined **)(param_3 + 0xa0) = _Var6.unknown;
  lVar9 = ppVar7->__sig;
  *(long *)(param_3 + 0xb8) = lVar9;
  puVar3 = &DAT_100feb160;
  FUN_1000f7830(&DAT_100feb160,&DAT_100c82720);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 0xf000000000000007;
  *(undefined8 *)(puVar3 + 0x10) = 0xf000000000000007;
  local_c0.__sig = 0;
  local_c0.__opaque[0] = '\0';
  local_c0.__opaque[1] = '\0';
  local_c0.__opaque[2] = '\0';
  local_c0.__opaque[3] = '\0';
  local_c0.__opaque[4] = '\0';
  local_c0.__opaque[5] = '\0';
  local_c0.__opaque[6] = '\0';
  local_c0.__opaque[7] = '\0';
  _swift_retain(lVar9);
  _pthread_mutexattr_init(&local_c0);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar3 + 0x20),&local_c0);
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008c0aa4);
    (*pcVar1)();
  }
  *(undefined **)(param_3 + 0xc0) = puVar3;
  _swift_getObjectType(param_2);
  FUN_1000f4a44();
  puVar3 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(param_3 + 0x48) = 0;
  *(undefined8 *)(param_3 + 0x50) = param_1;
  *(undefined8 *)(param_3 + 0x30) = param_2;
  *(undefined8 *)(param_3 + 0x38) = param_4;
  *(undefined **)(param_3 + 0x40) = puVar3;
  _swift_retain(param_2);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008c0aa8 | FUN_1008c0aa8 */

undefined * FUN_1008c0aa8(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *capacity;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100feb238;
    uVar8 = 0;
    FUN_1000f7830();
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    puVar10 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar2 = puVar10[-4];
      uVar3 = puVar10[-3];
      uVar11 = puVar10[-2];
      uVar4 = *(undefined1 *)(puVar10 + -1);
      uVar12 = *puVar10;
      uVar7 = uVar2;
      FUN_1001e9180();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008c0b98);
        (*pcVar5)();
      }
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar9 + 0x40) = *(ulong *)(puVar6 + uVar9 + 0x40) | 1L << (uVar7 & 0x3f);
      *(ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 8) = uVar2;
      puVar1 = (undefined8 *)(*(long *)(puVar6 + 0x38) + uVar7 * 0x20);
      *puVar1 = uVar3;
      puVar1[1] = uVar11;
      *(undefined1 *)(puVar1 + 2) = uVar4;
      puVar1[3] = uVar12;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008c0b9c);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      puVar10 = puVar10 + 5;
    } while (capacity != (undefined *)0x0);
  }
  return puVar6;
}



/* Address: 0x1008c0b9c | FUN_1008c0b9c */

void FUN_1008c0b9c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_1008c0bb8,0,0);
  return;
}



/* Address: 0x1008c0bb8 | FUN_1008c0bb8 */

void FUN_1008c0bb8(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_1008c1490();
  *(undefined8 *)(unaff_x22 + 0x70) = param_1;
  _swift_allocObject();
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  _swift_retain(uVar5);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1008b8a74();
  puVar1 = &DAT_100f0d440;
  _swift_allocObject(&DAT_100f0d440,0x28,7);
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x20) = param_1;
  puVar2 = &DAT_100feb0f8;
  FUN_1000f7830(&DAT_100feb0f8,&DAT_100c82be0);
  _swift_allocObject();
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f0d740;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f0d468;
  _swift_allocObject(&DAT_100f0d468,0x28,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(code **)(puVar3 + 0x18) = FUN_1008c2750;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  _swift_retain(uVar5);
  _swift_retain(param_1);
  _swift_retain(uVar6);
  _swift_retain(puVar2);
  _swift_retain(puVar1);
  FUN_1008c2bb8(thunk_FUN_1008c1340,puVar3);
  _swift_release(puVar1);
  _swift_release(puVar3);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1008c0d3c;
  lVar4 = unaff_x22 + 0x10;
  _swift_continuation_init(lVar4,1);
  FUN_1008bf988(puVar2,lVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008c0d3c | FUN_1008c0d3c */

void FUN_1008c0d3c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x88) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1008c0da8;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1008c0e90;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}


