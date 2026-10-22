/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005dcb1c | FUN_1005dcb1c */

void FUN_1005dcb1c(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x68) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dcb88;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dcbc4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dcb88 | FUN_1005dcb88 */

void FUN_1005dcb88(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001005dcbc0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dcbc4 | FUN_1005dcbc4 */

void FUN_1005dcbc4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001005dcbfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dcc00 | FUN_1005dcc00 */

void FUN_1005dcc00(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_1005dcc1c,0,0);
  return;
}



/* Address: 0x1005dcc1c | FUN_1005dcc1c */

void FUN_1005dcc1c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_10062642c(uVar1,*(undefined8 *)(unaff_x22 + 0x60));
  pcVar2 = thunk_FUN_1005dd070;
  FUN_1005dea5c(thunk_FUN_1005dd070,0);
  *(code **)(unaff_x22 + 0x70) = pcVar2;
  _swift_release(uVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dccac;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005dab28();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dccac | FUN_1005dccac */

void FUN_1005dccac(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = thunk_FUN_1005dcff4;
  }
  else {
    _swift_willThrow();
    pcVar1 = thunk_FUN_1005dd034;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dcd20 | FUN_1005dcd20 */

void FUN_1005dcd20(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_1005dcd3c,0,0);
  return;
}



/* Address: 0x1005dcd3c | FUN_1005dcd3c */

void FUN_1005dcd3c(void)

{
  long lVar1;
  bool bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  long unaff_x22;
  long lVar9;
  code *pcVar10;
  
  puVar3 = *(undefined **)(*(long *)(unaff_x22 + 0x68) + 0x30);
  lVar1 = *(long *)(*(long *)(unaff_x22 + 0x68) + 0x38);
  _swift_getObjectType();
  uVar4 = 0;
  FUN_100631530(0);
  puVar5 = puVar3;
  FUN_1006422fc(puVar3,uVar4,lVar1);
  puVar8 = puVar3;
  (**(code **)(lVar1 + 0x10))(puVar3,lVar1);
  lVar9 = *(long *)(unaff_x22 + 0x68);
  if (((ulong)puVar8 & 1) == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x60);
    puVar8 = &DAT_100ee81f0;
    _swift_allocObject(&DAT_100ee81f0,0x30,7);
    *(undefined **)(puVar8 + 0x10) = puVar5;
    *(long *)(puVar8 + 0x18) = lVar9;
    *(undefined8 *)(puVar8 + 0x20) = uVar4;
    *(undefined8 *)(puVar8 + 0x28) = uVar7;
    pcVar10 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar5);
    _swift_retain(lVar9);
    _swift_bridgeObjectRetain(uVar7);
    (*pcVar10)(FUN_1005dfd8c,puVar8,puVar3,lVar1);
    _swift_release(puVar8);
  }
  else {
    if (*(long *)(lVar9 + 0x10) == 0) {
      puVar3 = puVar5;
      _swift_retain();
    }
    else {
      puVar8 = *(undefined **)(*(long *)(lVar9 + 0x10) + 0x10);
      _swift_retain(puVar5);
      puVar3 = puVar8;
      _swift_retain();
      while (puVar6 = puVar8, puVar6 != (undefined *)0x0) {
        if (puVar6 == *(undefined **)(lVar9 + 0x18)) {
          _swift_release();
          puVar3 = puVar6;
          break;
        }
        puVar8 = *(undefined **)(unaff_x22 + 0x58);
                    /* WARNING: Load size is inaccurate */
        if ((puVar6[0x28] == puVar8 && puVar6[0x30] == *(undefined **)(unaff_x22 + 0x60)) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)puVar6[0x28],(_StringGuts)puVar6[0x30],
                               (_StringComparisonResult)(__int8)puVar8), bVar2)) {
          uVar4 = 0;
          goto LAB_1005dcec0;
        }
        puVar8 = *(undefined **)(puVar6 + 0x10);
        _swift_retain(puVar8);
        _swift_release();
        puVar3 = puVar6;
      }
    }
    FUN_1005dfcfc();
    puVar6 = &DAT_100eed960;
    puVar8 = (undefined *)0x0;
    _swift_allocError(&DAT_100eed960,puVar3,0,0);
    uVar4 = 1;
    *puVar3 = 1;
LAB_1005dcec0:
    puVar3 = puVar6;
    uVar7 = uVar4;
    thunk_FUN_1006303e8(puVar6,uVar4);
    _swift_release(puVar5);
    FUN_1006486f8(puVar3,uVar7,puVar8);
    FUN_100004550(puVar3,uVar7);
    _swift_bridgeObjectRelease(puVar8);
    FUN_1005dff14(puVar6,uVar4);
  }
  pcVar10 = thunk_FUN_1005dd070;
  FUN_1005dea5c(thunk_FUN_1005dd070,0);
  *(code **)(unaff_x22 + 0x70) = pcVar10;
  _swift_release(puVar5);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dcf80;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005dab28();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dcf80 | FUN_1005dcf80 */

void FUN_1005dcf80(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x80) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1005dcff4;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dd034;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dcff4 | FUN_1005dcff4 */

void FUN_1005dcff4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001005dd030. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x80));
  return;
}



/* Address: 0x1005dd034 | FUN_1005dd034 */

void FUN_1005dd034(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001005dd06c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dd070 | FUN_1005dd070 */

void FUN_1005dd070(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _swift_retain();
  return;
}



/* Address: 0x1005dd07c | FUN_1005dd07c */

void FUN_1005dd07c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x70) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  _swift_task_switch(FUN_1005dd098,0,0);
  return;
}



/* Address: 0x1005dd098 | FUN_1005dd098 */

void FUN_1005dd098(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  FUN_100626780(uVar1,*(undefined8 *)(unaff_x22 + 0x60),*(undefined8 *)(unaff_x22 + 0x68));
  pcVar2 = thunk_FUN_1005dd070;
  FUN_1005ded08(thunk_FUN_1005dd070,0);
  *(code **)(unaff_x22 + 0x78) = pcVar2;
  _swift_release(uVar1);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x50;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dd128;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005dad80();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dd128 | FUN_1005dd128 */

void FUN_1005dd128(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined8 *)(lVar2 + 0x88) = *(undefined8 *)(lVar2 + 0x50);
    pcVar1 = FUN_1005dd19c;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dbcd8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dd19c | FUN_1005dd19c */

void FUN_1005dd19c(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
                    /* WARNING: Could not recover jumptable at 0x0001005dd1d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x88));
  return;
}



/* Address: 0x1005dd1dc | FUN_1005dd1dc */

void FUN_1005dd1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_1005dd1f8,0,0);
  return;
}



/* Address: 0x1005dd1f8 | FUN_1005dd1f8 */

void FUN_1005dd1f8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1006268dc(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  pcVar2 = FUN_100004520;
  FUN_1005defb4(FUN_100004520,0);
  *(code **)(unaff_x22 + 0x70) = pcVar2;
  _swift_release(uVar1);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dc0d8;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005dafd8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dd278 | FUN_1005dd278 */

void FUN_1005dd278(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_3;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  _swift_task_switch(FUN_1005dd294,0,0);
  return;
}



/* Address: 0x1005dd294 | FUN_1005dd294 */

void FUN_1005dd294(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  FUN_1006268dc(uVar1,*(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
  pcVar2 = FUN_100004520;
  FUN_1005defb4(FUN_100004520,0);
  *(code **)(unaff_x22 + 0x70) = pcVar2;
  _swift_release(uVar1);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005dd314;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_1005dafd8();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005dd314 | FUN_1005dd314 */

void FUN_1005dd314(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *(long *)(*unaff_x22 + 0x30);
  *(long *)(*unaff_x22 + 0x78) = lVar2;
  if (lVar2 == 0) {
    pcVar1 = FUN_1005dd380;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_1005dd034;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dd380 | FUN_1005dd380 */

void FUN_1005dd380(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x0001005dd3b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dd3bc | FUN_1005dd3bc */

void FUN_1005dd3bc(undefined8 param_1,undefined1 param_2)

{
  undefined8 *unaff_x20;
  
  *unaff_x20 = param_1;
  *(undefined1 *)(unaff_x20 + 1) = param_2;
  return;
}



/* Address: 0x1005dd3c8 | FUN_1005dd3c8 */

void FUN_1005dd3c8(void)

{
  return;
}



/* Address: 0x1005dd3d0 | FUN_1005dd3d0 */

void FUN_1005dd3d0(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine(7,param_2);
  return;
}



/* Address: 0x1005dd3f4 | FUN_1005dd3f4 */

void FUN_1005dd3f4(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)0x7;
  Swift::Hasher::_combine(7,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005dd434 | FUN_1005dd434 */

void FUN_1005dd434(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = (undefined *)0x7;
  Swift::Hasher::_combine(7,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005dd470 | FUN_1005dd470 */

void FUN_1005dd470(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  Optional OVar2;
  long lVar3;
  ulong uVar4;
  undefined7 extraout_var;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(long *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_Element_100eaead8);
  *(long *)(unaff_x22 + 0x40) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar4;
  OVar2 = Swift::Optional::typeMetadataAccessor();
  uVar4 = *(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar4;
  lVar3 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar4;
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,puVar1,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  _swift_task_switch(FUN_1005dd588,0,0);
  return;
}



/* Address: 0x1005dd588 | FUN_1005dd588 */

void FUN_1005dd588(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x10)) {
    (**(code **)(*(long *)(unaff_x22 + 0x60) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x38),
               *(undefined8 *)(unaff_x22 + 0x20));
    Swift::AsyncSequence::_makeAsyncIterator();
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    _swift_getAssociatedConformanceWitness
              (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
               *(undefined8 *)(unaff_x22 + 0x70),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x90) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005dd658;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005dd658);
  (*pcVar1)();
}



/* Address: 0x1005dd658 | FUN_1005dd658 */

void FUN_1005dd658(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x98) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005dd6bc;
  }
  else {
    pcVar1 = FUN_1005dd8d8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005dd6bc | FUN_1005dd6bc */

void FUN_1005dd6bc(void)

{
  undefined8 uVar1;
  long lVar2;
  code *UNRECOVERED_JUMPTABLE;
  long *plVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  lVar2 = *(long *)(unaff_x22 + 0x48);
  uVar6 = uVar4;
  (**(code **)(lVar2 + 0x30))(uVar4,1,uVar1);
  if ((int)uVar6 == 1) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x50);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar6,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x88);
    lVar8 = *(long *)(unaff_x22 + 0x30);
    (**(code **)(lVar2 + 0x20))(*(undefined8 *)(unaff_x22 + 0x50),uVar4,uVar1);
    lVar8 = *(long *)(*(long *)(lVar8 + 8) + 8);
    plVar3 = (long *)Swift::Collection::get_count();
    lVar2 = lVar7 + (long)plVar3;
    if (SCARRY8(lVar7,(long)plVar3)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005dd8d8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar9 = *(long *)(unaff_x22 + 0x10);
    lVar7 = *(long *)(unaff_x22 + 0x48);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
    if (lVar2 <= lVar9) {
      FUN_10060a884(uVar1,uVar6,*(undefined8 *)(lVar8 + 8));
      (**(code **)(lVar7 + 8))(uVar1,uVar6);
      *(long *)(unaff_x22 + 0x88) = lVar2;
      _swift_getAssociatedConformanceWitness
                (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x20),
                 *(undefined8 *)(unaff_x22 + 0x70),
                 PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                 PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                );
      plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x90) = plVar3;
      *plVar3 = unaff_x22;
      plVar3[1] = (long)FUN_1005dd658;
      Swift::AsyncIteratorProtocol::_next();
      return;
    }
    FUN_1005dfd98();
    _swift_allocError(&DAT_100ee8270,plVar3,0,0);
    *plVar3 = lVar9;
    *(undefined1 *)(plVar3 + 1) = 0;
    _swift_willThrow();
    (**(code **)(lVar7 + 8))(uVar1,uVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x58);
    (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar4,*(undefined8 *)(unaff_x22 + 0x70));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar1);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005dd834. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005dd8d8 | FUN_1005dd8d8 */

void FUN_1005dd8d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x0001005dd950. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005dd954 | FUN_1005dd954 */

void FUN_1005dd954(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  _swift_task_switch(FUN_1005dd97c,0,0);
  return;
}



/* Address: 0x1005dd97c | FUN_1005dd97c */

void FUN_1005dd97c(void)

{
  code *pcVar1;
  long *plVar2;
  ulong uVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  long unaff_x22;
  undefined1 uVar6;
  undefined8 uVar7;
  
  uVar3 = *(ulong *)(unaff_x22 + 0x40);
  if (-1 < (long)uVar3) {
    if (uVar3 == 0) {
      if (DAT_100fd6f38 != -1) {
        _swift_once(&DAT_100fd6f38,FUN_100611c84);
      }
      uVar6 = DAT_101057be6;
      uVar4 = DAT_101057be4;
      uVar5 = DAT_101057be0;
      uVar7 = DAT_101057bd8;
      uVar3 = DAT_101057bd0;
      _swift_retain(DAT_101057bd0);
    }
    else {
      if (0x3ff < uVar3) {
        uVar3 = 0x400;
      }
      FUN_100613fa8(uVar3,*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                    *(undefined8 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x60));
      _swift_beginAccess(uVar3 + 0x10,unaff_x22 + 0x10,0,0);
      uVar4 = 0;
      uVar6 = 0;
      uVar5 = *(undefined4 *)(uVar3 + 0x10);
      uVar7 = 0;
    }
    *(ulong *)(unaff_x22 + 0x28) = uVar3;
    *(undefined8 *)(unaff_x22 + 0x30) = uVar7;
    *(undefined4 *)(unaff_x22 + 0x38) = uVar5;
    *(undefined2 *)(unaff_x22 + 0x3c) = uVar4;
    *(undefined1 *)(unaff_x22 + 0x3e) = uVar6;
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x88) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005ddaa8;
    FUN_1005dd470(*(undefined8 *)(unaff_x22 + 0x40),unaff_x22 + 0x28,
                  *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                  *(undefined8 *)(unaff_x22 + 0x78));
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005dda90);
  (*pcVar1)();
}



/* Address: 0x1005ddaa8 | FUN_1005ddaa8 */

void FUN_1005ddaa8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x88));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ddb0c;
  }
  else {
    pcVar1 = FUN_1005ddb30;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ddb0c | FUN_1005ddb0c */

void FUN_1005ddb0c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001005ddb2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))
            (*(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
             (ulong)*(uint7 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1005ddb30 | FUN_1005ddb30 */

void FUN_1005ddb30(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x28));
                    /* WARNING: Could not recover jumptable at 0x0001005ddb68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005ddb6c | FUN_1005ddb6c */

void FUN_1005ddb6c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x78) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(long *)(unaff_x22 + 0x68) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  lVar2 = *(long *)(param_3 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar1;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x90) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar1;
  _swift_task_switch(FUN_1005ddc20,0,0);
  return;
}



/* Address: 0x1005ddc20 | FUN_1005ddc20 */

void FUN_1005ddc20(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x58)) {
    (**(code **)(*(long *)(unaff_x22 + 0x80) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x88),*(undefined8 *)(unaff_x22 + 0x78),
               *(undefined8 *)(unaff_x22 + 0x68));
    Swift::AsyncSequence::_makeAsyncIterator();
    *(undefined8 *)(unaff_x22 + 0xa8) = 0;
    _swift_getAssociatedConformanceWitness
              (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),
               *(undefined8 *)(unaff_x22 + 0x90),
               PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
               PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
              );
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005ddcf0;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ddcf0);
  (*pcVar1)();
}



/* Address: 0x1005ddcf0 | FUN_1005ddcf0 */

void FUN_1005ddcf0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005ddd54;
  }
  else {
    pcVar1 = FUN_1005de01c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005ddd54 | FUN_1005ddd54 */

void FUN_1005ddd54(long *param_1)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  uint7 uVar8;
  long lVar9;
  uint uVar10;
  code *UNRECOVERED_JUMPTABLE;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long *plVar15;
  uint uVar16;
  long lVar17;
  size_t sVar18;
  long unaff_x22;
  long lVar19;
  long lVar20;
  
  lVar19 = *(long *)(unaff_x22 + 0x40);
  if (lVar19 == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar13,*(undefined8 *)(unaff_x22 + 0x90));
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar11 = *(ulong *)(unaff_x22 + 0x48);
    uVar12 = (ulong)(uint)((int)(uVar11 >> 0x20) - (int)uVar11);
    lVar1 = *(long *)(unaff_x22 + 0xa8) + uVar12;
    if (SCARRY8(*(long *)(unaff_x22 + 0xa8),uVar12)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005de014);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar17 = *(long *)(unaff_x22 + 0x58);
    if (lVar1 <= lVar17) {
      uVar8 = *(uint7 *)(unaff_x22 + 0x50);
      uVar4 = *(uint *)(*(long *)(unaff_x22 + 0x60) + 0xc);
      _swift_beginAccess(lVar19 + 0x18,unaff_x22 + 0x10,0,0);
      sVar18 = (uVar11 >> 0x20) - (uVar11 & 0xffffffff);
      uVar16 = (uint)sVar18;
      if (CARRY4(uVar4,uVar16)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005de018);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar17 = *(long *)(lVar19 + 0x18);
      uVar12 = **(ulong **)(unaff_x22 + 0x60);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar10 = (uint)uVar12;
      if ((uVar12 & 1) == 0) {
        uVar5 = *(uint *)(*(long *)(unaff_x22 + 0x60) + 0x10);
        iVar2 = 0;
        if (uVar5 <= uVar4 + uVar16) {
          iVar2 = (uVar4 + uVar16) - uVar5;
        }
        FUN_1000d2130();
        FUN_100612358(iVar2,uVar10 & 1);
      }
      plVar15 = *(long **)(unaff_x22 + 0x60);
      FUN_100612380(sVar18,uVar4);
      lVar20 = *plVar15;
      lVar9 = plVar15[2];
      uVar7 = *(undefined2 *)((long)plVar15 + 0x14);
      uVar6 = *(undefined1 *)((long)plVar15 + 0x16);
      _swift_beginAccess(lVar20 + 0x18,unaff_x22 + 0x28,0,0);
      uVar5 = (uint)CONCAT21(uVar7,uVar6);
      uVar10 = (int)lVar9 - uVar5;
      if (uVar4 <= uVar10) {
        uVar10 = uVar4;
      }
      uVar3 = 0;
      if (uVar4 != 0) {
        uVar3 = uVar10;
      }
      _memmove((void *)(*(long *)(lVar20 + 0x18) + (ulong)uVar5 + (ulong)uVar3),
               (void *)(lVar17 + (((ulong)uVar8 & 0xffff00000000) >> 0x18 | (ulong)(uVar8 >> 0x30))
                       + (uVar11 & 0xffffffff)),sVar18);
      _swift_release(lVar19);
      if (!CARRY4(*(uint *)((long)plVar15 + 0xc),uVar16)) {
        *(uint *)(*(long *)(unaff_x22 + 0x60) + 0xc) = *(uint *)((long)plVar15 + 0xc) + uVar16;
        *(long *)(unaff_x22 + 0xa8) = lVar1;
        _swift_getAssociatedConformanceWitness
                  (*(undefined8 *)(unaff_x22 + 0x70),*(undefined8 *)(unaff_x22 + 0x68),
                   *(undefined8 *)(unaff_x22 + 0x90),
                   PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
                   PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
                  );
        plVar15 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xb0) = plVar15;
        *plVar15 = unaff_x22;
        plVar15[1] = (long)FUN_1005ddcf0;
        Swift::AsyncIteratorProtocol::_next();
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1005de01c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar1 = *(long *)(unaff_x22 + 0x98);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
    FUN_1005dfd98();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = lVar17;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    _swift_release(lVar19);
    (**(code **)(lVar1 + 8))(uVar14,uVar13);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x88);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
    _swift_task_dealloc(uVar14);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005dde68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005de01c | FUN_1005de01c */

void FUN_1005de01c(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa0),*(undefined8 *)(unaff_x22 + 0x90));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa0));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005de070. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005de074 | FUN_1005de074 */

void FUN_1005de074(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_3;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(long *)(unaff_x22 + 0x48) = param_2;
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18;
  lVar2 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_AsyncSequence_100eaee18,
             PTR___associated_type_descriptor_for_Swift_AsyncSequence_AsyncIterator_100eaeac8);
  *(long *)(unaff_x22 + 0x60) = lVar2;
  _swift_getAssociatedConformanceWitness
            (param_3,param_2,lVar2,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_AsyncSequence_Swift_AsyncSequence_AsyncIterator__Swift_AsyncIteratorProtocol_100eaee00
            );
  *(undefined8 *)(unaff_x22 + 0x68) = param_3;
  lVar3 = 0;
  FUN_1005dfdd8(0,lVar2,param_3);
  *(long *)(unaff_x22 + 0x70) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0x78) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x80) = uVar4;
  lVar3 = *(long *)(param_2 + -8);
  *(long *)(unaff_x22 + 0x88) = lVar3;
  uVar4 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x90) = uVar4;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar2;
  uVar4 = *(long *)(lVar2 + 0x40) + 0xf;
  uVar5 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar5;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar4;
  _swift_task_switch(FUN_1005de188,0,0);
  return;
}



/* Address: 0x1005de188 | FUN_1005de188 */

void FUN_1005de188(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x40)) {
    (**(code **)(*(long *)(unaff_x22 + 0x88) + 0x10))
              (*(undefined8 *)(unaff_x22 + 0x90),*(undefined8 *)(unaff_x22 + 0x58),
               *(undefined8 *)(unaff_x22 + 0x48));
    Swift::AsyncSequence::_makeAsyncIterator();
    plVar2 = (long *)(ulong)*(uint *)(PTR__next_100eaeba0 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xb0) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1005de230;
    Swift::AsyncIteratorProtocol::_next();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005de230);
  (*pcVar1)();
}



/* Address: 0x1005de230 | FUN_1005de230 */

void FUN_1005de230(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xb8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xb0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005de294;
  }
  else {
    pcVar1 = FUN_1005de630;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005de294 | FUN_1005de294 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1005de294(ulong *param_1)

{
  uint7 uVar1;
  long *plVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar6 = *(long *)(unaff_x22 + 0x28);
  if (lVar6 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar8 = DAT_101057bd8;
    uVar5 = DAT_101057bd0;
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x60);
    uVar1 = CONCAT16(DAT_101057be6,_DAT_101057be0);
    pcVar10 = *(code **)(*(long *)(unaff_x22 + 0x98) + 8);
    _swift_retain(DAT_101057bd0);
    (*pcVar10)(uVar12,uVar9);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x0001005de44c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar5,uVar8,(ulong)uVar1);
    return;
  }
  uVar7 = *(ulong *)(unaff_x22 + 0x40);
  *(long *)(unaff_x22 + 0x10) = lVar6;
  *(int *)(unaff_x22 + 0x18) = *(int *)(unaff_x22 + 0x30);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x34);
  *(undefined4 *)(unaff_x22 + 0x20) = *(undefined4 *)(unaff_x22 + 0x38);
  *(undefined2 *)(unaff_x22 + 0x24) = *(undefined2 *)(unaff_x22 + 0x3c);
  *(undefined1 *)(unaff_x22 + 0x26) = *(undefined1 *)(unaff_x22 + 0x3e);
  uVar4 = (ulong)(uint)(*(int *)(unaff_x22 + 0x34) - *(int *)(unaff_x22 + 0x30));
  uVar9 = *(undefined8 *)(unaff_x22 + 0xa8);
  if (uVar7 < uVar4) {
    lVar11 = *(long *)(unaff_x22 + 0x98);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_1005dfd98();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = uVar7;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    (**(code **)(lVar11 + 8))(uVar9,uVar5);
    _swift_release(lVar6);
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001005de3a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar6 = *(long *)(unaff_x22 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(lVar6 + 0x10))(uVar5,uVar9,uVar13);
  (**(code **)(lVar6 + 0x20))(uVar8,uVar5,uVar13);
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xc0) = plVar2;
  pTVar3 = &TargetProtocolConformanceDescriptor_100c65ef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65ef0,uVar12);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005de50c;
  FUN_1005ddb6c(uVar7 - uVar4,unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x70),pTVar3);
  return;
}



/* Address: 0x1005de50c | FUN_1005de50c */

void FUN_1005de50c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 200) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1005de570;
  }
  else {
    pcVar1 = FUN_1005de6a8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1005de570 | FUN_1005de570 */

void FUN_1005de570(void)

{
  undefined8 uVar1;
  uint7 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar5 = *(long *)(unaff_x22 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar5 + 8))(uVar4,uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(uint7 *)(unaff_x22 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001005de62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar3,uVar1,(ulong)uVar2);
  return;
}



/* Address: 0x1005de630 | FUN_1005de630 */

void FUN_1005de630(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))
            (*(undefined8 *)(unaff_x22 + 0xa8),*(undefined8 *)(unaff_x22 + 0x60));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001005de6a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005de6a8 | FUN_1005de6a8 */

void FUN_1005de6a8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar3 = *(long *)(unaff_x22 + 0x98);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x78) + 8))
            (*(undefined8 *)(unaff_x22 + 0x80),*(undefined8 *)(unaff_x22 + 0x70));
  (**(code **)(lVar3 + 8))(uVar2,uVar1);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x90);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x80);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xa8));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
                    /* WARNING: Could not recover jumptable at 0x0001005de73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005de740 | FUN_1005de740 */

void FUN_1005de740(long param_1)

{
  FUN_1001f6390();
                    /* WARNING: Could not recover jumptable at 0x0001005de76c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_1 + -8) + 8))();
  return;
}



/* Address: 0x1005de770 | FUN_1005de770 */

undefined8
FUN_1005de770(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  FUN_1006422fc(param_3,param_4,param_5);
  FUN_1005db844(param_1,param_2,param_3,param_4);
  _swift_release();
  return param_3;
}



/* Address: 0x1005de7cc | FUN_1005de7cc */

void FUN_1005de7cc(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de83c);
    (*pcVar6)();
  }
  lVar1 = unaff_x20[3];
  lVar2 = unaff_x20[4];
  if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de840);
    (*pcVar6)();
  }
  if ((param_2 == 0) || (lVar7 = lVar2, param_2 <= (ulong)(lVar2 - lVar1))) {
    lVar7 = lVar1 + param_2;
    if (SCARRY8(lVar1,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de850);
      (*pcVar6)();
    }
    if (lVar2 < lVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de84c);
      (*pcVar6)();
    }
  }
  if (lVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de844);
    (*pcVar6)();
  }
  iVar3 = *(int *)(unaff_x20 + 2);
  uVar5 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar4 = *(undefined1 *)((long)unaff_x20 + 0x16);
  if (lVar2 <= (long)(ulong)(iVar3 - (uint)CONCAT21(uVar5,uVar4))) {
    uVar8 = *unaff_x20;
    param_1[1] = unaff_x20[1];
    *param_1 = uVar8;
    *(int *)(param_1 + 2) = iVar3;
    *(undefined2 *)((long)param_1 + 0x14) = uVar5;
    *(undefined1 *)((long)param_1 + 0x16) = uVar4;
    param_1[3] = lVar7;
    param_1[4] = lVar2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005de848);
  (*pcVar6)();
}



/* Address: 0x1005de850 | FUN_1005de850 */

ulong FUN_1005de850(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005de8f0);
    (*pcVar2)();
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3 - param_2;
  }
  uVar3 = 0;
  FUN_10060f464(0,uVar1,param_2,param_3);
  if (param_1 == 0) {
    if (param_2 == 0) {
      return 0;
    }
  }
  else {
    if (uVar3 < param_1) {
      return uVar1;
    }
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005de8ac);
      (*pcVar2)();
    }
  }
  if (param_1 <= (ulong)(param_3 - param_2)) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005de8c4);
  (*pcVar2)();
}



/* Address: 0x1005de8f0 | thunk_FUN_1005de8f4 */

undefined8 thunk_FUN_1005de8f4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x1005de8f4 | FUN_1005de8f4 */

undefined8 FUN_1005de8f4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x18) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined1 *)(unaff_x20 + 0x18) = 1;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x1005de998 | thunk_FUN_1005de99c */

void thunk_FUN_1005de99c(void)

{
  FUN_1005de99c();
  return;
}



/* Address: 0x1005de99c | FUN_1005de99c */

void FUN_1005de99c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined1 *)(param_1 + 0x18) = 1;
    _swift_beginAccess(param_1 + 0x30,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x30);
    uVar3 = *(undefined8 *)(param_1 + 0x38);
    uVar2 = *(undefined8 *)(param_1 + 0x40);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1005dea5c | FUN_1005dea5c */

undefined * FUN_1005dea5c(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 local_98;
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fd4fd8;
  FUN_1000f7830(&DAT_100fd4fd8,&DAT_100c65fa0);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100ee8548;
  _swift_allocObject(&DAT_100ee8548,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100ee8570;
    _swift_allocObject(&DAT_100ee8570,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1005dff80;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(FUN_1005dfe64,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  uVar6 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_1005dff00(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,local_90,0x21,0);
      FUN_10064967c(FUN_1005dff80,puVar3);
      _swift_endAccess(local_90);
      uVar10 = 0;
      uVar12 = 0;
      uVar6 = 0;
      goto LAB_1005deca0;
    }
    local_90[0] = uVar9;
    FUN_1005dfee0(uVar9,cVar1);
    (*param_1)(&local_98,local_90);
    FUN_1005dfe70(uVar9,cVar1);
    uVar7 = 0;
    uVar9 = local_98;
  }
  uVar10 = uVar9;
  uVar12 = uVar7;
  thunk_FUN_1006303e8(uVar9,uVar7);
  FUN_1005dff14(uVar9,uVar7);
LAB_1005deca0:
  FUN_1006486f8(uVar10,uVar12,uVar6);
  FUN_100004550(uVar10,uVar12);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1005ded08 | FUN_1005ded08 */

undefined * FUN_1005ded08(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 local_98;
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fd4fd8;
  FUN_1000f7830(&DAT_100fd4fd8,&DAT_100c65fa0);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100ee8480;
  _swift_allocObject(&DAT_100ee8480,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100ee84a8;
    _swift_allocObject(&DAT_100ee84a8,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = thunk_FUN_1005dff80;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(thunk_FUN_1005dfe64,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  uVar6 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar7 = 1;
    FUN_1005dff00(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,local_90,0x21,0);
      FUN_10064967c(thunk_FUN_1005dff80,puVar3);
      _swift_endAccess(local_90);
      uVar10 = 0;
      uVar12 = 0;
      uVar6 = 0;
      goto LAB_1005def4c;
    }
    local_90[0] = uVar9;
    FUN_1005dfee0(uVar9,cVar1);
    (*param_1)(&local_98,local_90);
    FUN_1005dfe70(uVar9,cVar1);
    uVar7 = 0;
    uVar9 = local_98;
  }
  uVar10 = uVar9;
  uVar12 = uVar7;
  thunk_FUN_1006303e8(uVar9,uVar7);
  FUN_1005dff14(uVar9,uVar7);
LAB_1005def4c:
  FUN_1006486f8(uVar10,uVar12,uVar6);
  FUN_100004550(uVar10,uVar12);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1005defb4 | FUN_1005defb4 */

undefined * FUN_1005defb4(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fd4fd0;
  FUN_1000f7830(&DAT_100fd4fd0,&DAT_100c65f98);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100ee83b8;
  _swift_allocObject(&DAT_100ee83b8,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100ee83e0;
    _swift_allocObject(&DAT_100ee83e0,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1005dfec8;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(FUN_1005dfe64,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  uVar6 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar12 = 1;
    FUN_100308524(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1005dfec8,puVar3);
      _swift_endAccess(auStack_90);
      uVar7 = 0;
      uVar10 = 0;
      uVar6 = 0;
      goto LAB_1005df1e0;
    }
    (*param_1)();
    FUN_100308538(uVar9,cVar1);
    uVar9 = 0;
    uVar12 = 0;
  }
  uVar7 = uVar9;
  uVar10 = uVar12;
  FUN_1006303f4(uVar9,uVar12);
  FUN_1002ec258(uVar9,uVar12);
LAB_1005df1e0:
  FUN_1006486f8(uVar7,uVar10,uVar6);
  FUN_100004550(uVar7,uVar10);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1005df248 | FUN_1005df248 */

undefined * FUN_1005df248(code *param_1,undefined8 param_2)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  code *pcVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 local_90 [3];
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100fd4fc8;
  FUN_1000f7830(&DAT_100fd4fc8,&DAT_100c65f90);
  _swift_allocObject();
  lVar8 = *(long *)(unaff_x20 + 0x28);
  uVar13 = *(ulong *)(unaff_x20 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x20 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar13;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100ee82f0;
  _swift_allocObject(&DAT_100ee82f0,0x30,7);
  *(undefined **)(puVar3 + 0x10) = puVar2;
  *(long *)(puVar3 + 0x18) = unaff_x20;
  *(code **)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  uVar4 = uVar13;
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar8 + 0x10);
  _swift_retain_n(puVar2,2);
  _swift_retain_n();
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar4;
  (*pcVar11)(uVar4,lVar8);
  if ((uVar13 & 1) == 0) {
    puVar5 = &DAT_100ee8318;
    _swift_allocObject(&DAT_100ee8318,0x28,7);
    *(long *)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1005dfe58;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    pcVar11 = *(code **)(lVar8 + 0x18);
    _swift_retain();
    _swift_retain(puVar3);
    (*pcVar11)(FUN_1005dfe64,puVar5,uVar4,lVar8);
    _swift_release(puVar5);
    _swift_release(param_2);
    _swift_release();
    _swift_release(puVar2);
    _swift_release(puVar3);
    return puVar2;
  }
  uVar6 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x10);
  cVar1 = *(char *)(unaff_x20 + 0x18);
  if (cVar1 == '\x01') {
    uVar12 = 1;
    FUN_1005dff00(uVar9,1);
  }
  else {
    if (cVar1 == -1) {
      _swift_beginAccess(unaff_x20 + 0x30,local_90,0x21,0);
      FUN_10064967c(FUN_1005dfe58,puVar3);
      _swift_endAccess(local_90);
      uVar7 = 0;
      uVar10 = 0;
      uVar6 = 0;
      goto LAB_1005df488;
    }
    local_90[0] = uVar9;
    FUN_1005dfee0(uVar9,cVar1);
    (*param_1)(local_90);
    FUN_1005dfe70(uVar9,cVar1);
    uVar9 = 0;
    uVar12 = 0;
  }
  uVar7 = uVar9;
  uVar10 = uVar12;
  thunk_FUN_100630328(uVar9,uVar12);
  FUN_1002ec258(uVar9,uVar12);
LAB_1005df488:
  FUN_1006486f8(uVar7,uVar10,uVar6);
  FUN_100004550(uVar7,uVar10);
  _swift_release(param_2);
  _swift_release();
  _swift_release(puVar2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(uVar6);
  return puVar2;
}



/* Address: 0x1005df4f0 | FUN_1005df4f0 */

undefined8 FUN_1005df4f0(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined8 local_88 [3];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_1005dff00(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005df60c);
      (*pcVar2)();
    }
    local_70[0] = uVar4;
    FUN_1005dfee0(uVar4,cVar1);
    (*param_3)(local_88,local_70);
    FUN_1005dfe70(uVar4,cVar1);
    uVar3 = 0;
    uVar4 = local_88[0];
  }
  _swift_beginAccess(param_1 + 0x10,local_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,local_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1005dff14(uVar4,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x1005df60c | FUN_1005df60c */

undefined8 FUN_1005df60c(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_100308524(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1005df710);
      (*pcVar2)();
    }
    (*param_3)();
    FUN_100308538(uVar4,cVar1);
    uVar4 = 0;
    uVar3 = 0;
  }
  _swift_beginAccess(param_1 + 0x10,auStack_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,auStack_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1002ec258(uVar4,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}


