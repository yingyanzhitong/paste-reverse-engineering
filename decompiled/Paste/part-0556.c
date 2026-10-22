/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10063d57c | FUN_10063d57c */

void FUN_10063d57c(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  FUN_10063dc68(param_1,in_x5,in_x6,in_x7);
  return;
}



/* Address: 0x10063d58c | FUN_10063d58c */

void FUN_10063d58c(ExecutorJob param_1,undefined8 param_2,long param_3)

{
  UnownedJob UVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 unaff_x20;
  code *pcVar4;
  
  UVar1 = Swift::UnownedJob::init(param_1);
  puVar2 = &DAT_100eef178;
  _swift_allocObject(&DAT_100eef178,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = UVar1.unknown;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x20;
  lVar3 = *(long *)(param_3 + 8);
  pcVar4 = *(code **)(lVar3 + 0x18);
  _swift_unknownObjectRetain();
  (*pcVar4)(FUN_10063d634,puVar2,param_2,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10063d610 | FUN_10063d610 */

void FUN_10063d610(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10063d634 | FUN_10063d634 */

void FUN_10063d634(void)

{
  undefined8 uVar1;
  UnownedSerialExecutor UVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  UVar2 = Swift::SerialExecutor::asUnownedSerialExecutor();
  _swift_job_run(uVar1,UVar2.unknown,uVar3);
  return;
}



/* Address: 0x10063d674 | FUN_10063d674 */

void FUN_10063d674(void)

{
  Swift::UnownedSerialExecutor::_init();
  return;
}



/* Address: 0x10063d698 | FUN_10063d698 */

void FUN_10063d698(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10063d6c0 | FUN_10063d6c0 */

bool FUN_10063d6c0(long param_1)

{
  long unaff_x20;
  
  return param_1 == unaff_x20;
}



/* Address: 0x10063d6cc | FUN_10063d6cc */

void FUN_10063d6cc(undefined8 param_1,long param_2)

{
  FUN_100642338(param_1,*(undefined8 *)(param_2 + 8));
  return;
}



/* Address: 0x10063d6d4 | FUN_10063d6d4 */

void FUN_10063d6d4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10063d6f8 | FUN_10063d6f8 */

void FUN_10063d6f8(UnownedJob param_1)

{
  FUN_10063d860();
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10063d734 | FUN_10063d734 */

void FUN_10063d734(Job param_1)

{
  FUN_10063d860();
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10063d770 | FUN_10063d770 */

void FUN_10063d770(void)

{
  return;
}



/* Address: 0x10063d77c | FUN_10063d77c */

bool FUN_10063d77c(long param_1)

{
  long unaff_x20;
  
  return *(long *)(unaff_x20 + 0x10) == *(long *)(param_1 + 0x10);
}



/* Address: 0x10063d790 | FUN_10063d790 */

void FUN_10063d790(void)

{
  (extension_Swift)::Swift::SerialExecutor::checkIsolated();
  return;
}



/* Address: 0x10063d7a8 | FUN_10063d7a8 */

void FUN_10063d7a8(void)

{
  (extension_Swift)::Swift::SerialExecutor::_isIsolatingCurrentContext();
  return;
}



/* Address: 0x10063d7c0 | FUN_10063d7c0 */

void FUN_10063d7c0(UnownedJob param_1)

{
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10063d7d8 | FUN_10063d7d8 */

void FUN_10063d7d8(Job param_1)

{
  (extension_Swift)::Swift::Executor::enqueue(param_1);
  return;
}



/* Address: 0x10063d7f0 | thunk_FUN_10063d7f4 */

void thunk_FUN_10063d7f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar1 + 0x60))(param_1,uVar2,lVar1);
  return;
}



/* Address: 0x10063d7f4 | FUN_10063d7f4 */

void FUN_10063d7f4(undefined8 param_1)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar1 + 0x60))(param_1,uVar2,lVar1);
  return;
}



/* Address: 0x10063d83c | FUN_10063d83c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10063d83c(void)

{
  return ZEXT816(0x100fd82c0);
}



/* Address: 0x10063d85c | thunk_FUN_10063d860 */

void thunk_FUN_10063d860(void)

{
  FUN_10063d860();
  return;
}



/* Address: 0x10063d860 | FUN_10063d860 */

void FUN_10063d860(void)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fd8320 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100fd8320;
  FUN_10063d83c();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c6a4c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a4c4,lVar1);
  DAT_100fd8320 = pTVar2;
  return;
}



/* Address: 0x10063d8a0 | thunk_FUN_10063d7f4 */

void thunk_FUN_10063d7f4(void)

{
  thunk_FUN_10063d7f4();
  return;
}



/* Address: 0x10063d8a4 | FUN_10063d8a4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10063d8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  QoSClass QVar1;
  undefined7 extraout_var;
  OS_dispatch_queue *pOVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar2;
  
  QVar1 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,QVar1.value);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10063d988(0);
  (**(code **)(lVar5 + 0x68))
            (puVar4,*(undefined4 *)
                     PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_default_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae690
             ,lVar2);
  pOVar3 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)puVar4);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  (**(code **)(param_4 + 0x20))(pOVar3,param_1,param_2,param_3,param_4);
  return 0;
}



/* Address: 0x10063d988 | FUN_10063d988 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10063d988(void)

{
  undefined *puVar1;
  
  if (DAT_100fd8328 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fd8328 = puVar1;
  return;
}



/* Address: 0x10063d9cc | FUN_10063d9cc */

void FUN_10063d9cc(void)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  
  FUN_1006422fc(in_x5,in_x6,in_x7);
  return;
}



/* Address: 0x10063d9dc | FUN_10063d9dc */

void FUN_10063d9dc(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_100642338(in_x4,in_x5);
  return;
}



/* Address: 0x10063d9e8 | FUN_10063d9e8 */

ulong FUN_10063d9e8(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(1000000000),8) == param_1 * 1000000000 >> 0x3f) {
    uVar1 = param_1 * 1000000000;
  }
  return uVar1;
}



/* Address: 0x10063da0c | FUN_10063da0c */

__uint64 FUN_10063da0c(void)

{
  DispatchTime DVar1;
  DispatchTime DVar2;
  __uint64 _Var3;
  long lVar4;
  long lVar5;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2 = Dispatch::DispatchTime::now(DVar1);
  _Var3 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  if (0x7ffffffffffffffe < _Var3) {
    _Var3 = 0x7fffffffffffffff;
  }
  return _Var3;
}



/* Address: 0x10063da84 | FUN_10063da84 */

ulong FUN_10063da84(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (-1 < param_1) {
    uVar1 = 0x7fffffffffffffff;
    if (!SCARRY8(param_1,param_2)) {
      uVar1 = param_1 + param_2 & (param_1 + param_2 >> 0x3f ^ 0xffffffffffffffffU);
    }
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10063daa0);
  (*pcVar2)();
}



/* Address: 0x10063daa0 | FUN_10063daa0 */

void FUN_10063daa0(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  if (DAT_100fd8330 != -1) {
    _swift_once(&DAT_100fd8330,FUN_100641c94);
  }
  FUN_100646f54(DAT_101057c18,param_1,param_4);
  (*param_2)();
  return;
}



/* Address: 0x10063db10 | FUN_10063db10 */

long FUN_10063db10(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063db24);
    (*pcVar1)();
  }
  if (-1 < param_2) {
    return param_1 - param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063db28);
  (*pcVar1)();
}



/* Address: 0x10063db28 | FUN_10063db28 */

undefined1 * FUN_10063db28(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined8 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar2;
  
  lVar7 = *(long *)(param_3 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  puVar6 = (undefined8 *)
           (puVar5 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar6,param_1,lVar2);
  puVar3 = puVar6;
  _swift_getEnumCaseMultiPayload(puVar6,lVar2);
  if ((int)puVar3 == 1) {
    puVar5 = (undefined1 *)*puVar6;
    puVar4 = puVar5;
    FUN_10063dd74(puVar5);
    _swift_errorRelease(puVar5);
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar5,puVar6,param_3);
    puVar4 = puVar5;
    FUN_10063dc68(puVar5,param_2,param_3,param_4);
    (**(code **)(lVar7 + 8))(puVar5,param_3);
  }
  return puVar4;
}



/* Address: 0x10063dc68 | FUN_10063dc68 */

undefined8 FUN_10063dc68(undefined8 param_1,undefined8 param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(param_3 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  puVar1 = PTR___type_metadata_for____100eae0c8 + 8;
  if (param_3 != puVar1) {
    FUN_1006529e0(0,param_3);
    (**(code **)(lVar4 + 0x10))
              (&stack0xffffffffffffffb0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
    FUN_100648424();
    _swift_unknownObjectRetain();
    return unaff_x20;
  }
  (**(code **)(param_4 + 0x50))(param_2,param_4);
  uVar2 = 0;
  FUN_1006529e0(0,puVar1);
  _swift_dynamicCastClassUnconditional(param_2,uVar2,0,0,0);
  return param_2;
}



/* Address: 0x10063dd74 | FUN_10063dd74 */

undefined8 FUN_10063dd74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  FUN_1006529e0(0,param_3);
  FUN_100648460();
  _swift_errorRetain(param_1);
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x10063dddc | FUN_10063dddc */

undefined1  [16] FUN_10063dddc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  _swift_retain(param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x10063de0c | FUN_10063de0c */

undefined8 * FUN_10063de0c(void)

{
  if (DAT_100fd8330 != -1) {
    _swift_once(&DAT_100fd8330,FUN_100641c94);
  }
  return &DAT_101057c18;
}



/* Address: 0x10063de4c | FUN_10063de4c */

void FUN_10063de4c(void)

{
  FUN_100004520();
  _swift_retain();
  return;
}



/* Address: 0x10063de60 | FUN_10063de60 */

void FUN_10063de60(long param_1)

{
  long lVar1;
  long lVar2;
  char cVar3;
  char cVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  long unaff_x20;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(unaff_x20 + 0x48);
  if (lVar12 != 0) {
    lVar9 = *(long *)(unaff_x20 + 0x18);
    lVar1 = *(long *)(unaff_x20 + 0x20);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar9);
    puVar5 = &DAT_100eef740;
    _swift_allocObject(&DAT_100eef740,0x28,7);
    *(long *)(puVar5 + 0x10) = lVar12;
    *(undefined8 *)(puVar5 + 0x18) = uVar13;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    pcVar16 = *(code **)(lVar1 + 0x38);
    FUN_100011128(lVar12,uVar13);
    FUN_100011128(lVar12,uVar13);
    _swift_retain();
    FUN_1000f7830(&DAT_100fd4fc8,&DAT_100c65f90);
    pcVar14 = FUN_100642b28;
    puVar11 = puVar5;
    (*pcVar16)();
    _swift_release(puVar5);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x30) = param_1;
    *(code **)(unaff_x20 + 0x38) = pcVar14;
    *(undefined **)(unaff_x20 + 0x40) = puVar11;
    _swift_retain(param_1);
    _swift_retain(puVar11);
    FUN_100622430(uVar15,uVar18,uVar17);
    puVar5 = &DAT_100eef768;
    _swift_allocObject(&DAT_100eef768,0x28,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(code **)(puVar5 + 0x18) = FUN_100642b68;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar2 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    pcVar14 = *(code **)(lVar2 + 0x10);
    _swift_retain_n(param_1,3);
    _swift_retain_n();
    uVar7 = uVar6;
    (*pcVar14)(uVar6,lVar2);
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100eef790;
      _swift_allocObject(&DAT_100eef790,0x28,7);
      *(long *)(puVar8 + 0x10) = param_1;
      *(code **)(puVar8 + 0x18) = FUN_100642b74;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      pcVar14 = *(code **)(lVar2 + 0x18);
      _swift_retain(param_1);
      _swift_retain(puVar5);
      (*pcVar14)(FUN_1005dfe64,puVar8,uVar6,lVar2);
      _swift_release(puVar8);
      _swift_release_n();
      _swift_release(param_1);
      _swift_release(puVar5);
    }
    else {
      _swift_beginAccess(param_1 + 0x10,auStack_a8,0,0);
      cVar3 = *(char *)(param_1 + 0x18);
      if (cVar3 != '\x01') {
        if (cVar3 == -1) {
          _swift_beginAccess(param_1 + 0x30,auStack_78,0x21,0);
          FUN_10064967c(FUN_100642b74,puVar5);
          _swift_endAccess(auStack_78);
        }
        else {
          uVar15 = *(undefined8 *)(param_1 + 0x10);
          FUN_1005dff00(uVar15);
          FUN_10061fb30(lVar9,lVar1);
          puVar8 = &DAT_100eef808;
          _swift_allocObject(&DAT_100eef808,0x28,7);
          *(code **)(puVar8 + 0x10) = thunk_FUN_10063e8d0;
          *(long *)(puVar8 + 0x18) = unaff_x20;
          *(long *)(puVar8 + 0x20) = lVar9;
          uVar6 = *(ulong *)(lVar9 + 0x20);
          lVar1 = *(long *)(lVar9 + 0x28);
          _swift_getObjectType();
          pcVar14 = *(code **)(lVar1 + 0x10);
          _swift_retain_n();
          _swift_retain_n(lVar9,2);
          uVar7 = uVar6;
          (*pcVar14)(uVar6,lVar1);
          if ((uVar7 & 1) == 0) {
            puVar10 = &DAT_100eef830;
            _swift_allocObject(&DAT_100eef830,0x28,7);
            *(long *)(puVar10 + 0x10) = lVar9;
            *(code **)(puVar10 + 0x18) = FUN_1005dffb0;
            *(undefined **)(puVar10 + 0x20) = puVar8;
            pcVar14 = *(code **)(lVar1 + 0x18);
            _swift_retain(lVar9);
            _swift_retain(puVar8);
            (*pcVar14)(FUN_1005dfe64,puVar10,uVar6,lVar1);
            _swift_release(puVar10);
            _swift_release(lVar9);
            _swift_release_n();
            _swift_release(puVar8);
          }
          else {
            _swift_beginAccess(lVar9 + 0x10,auStack_c0,0,0);
            cVar4 = *(char *)(lVar9 + 0x18);
            if (cVar4 == -1) {
              _swift_beginAccess(lVar9 + 0x30,auStack_78,0x21,0);
              FUN_10064967c(FUN_1005dffb0,puVar8);
              _swift_endAccess(auStack_78);
            }
            else {
              uVar18 = *(undefined8 *)(lVar9 + 0x10);
              FUN_100308524(uVar18,cVar4);
              FUN_10063e8d0();
              FUN_100308538(uVar18,cVar4);
            }
            FUN_1006486f8(0,0,0);
            FUN_100004550(0,0);
            _swift_release(lVar9);
            _swift_release_n();
            _swift_release(puVar8);
            _swift_bridgeObjectRelease(0);
          }
          _swift_release(lVar9);
          FUN_100642b94(uVar15,cVar3);
        }
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n();
      _swift_release(param_1);
      _swift_release(puVar5);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(param_1);
    puVar5 = &DAT_100eef7b8;
    _swift_allocObject(&DAT_100eef7b8,0x28,7);
    *(long *)(puVar5 + 0x10) = param_1;
    *(code **)(puVar5 + 0x18) = FUN_100642b80;
    *(long *)(puVar5 + 0x20) = unaff_x20;
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar9 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    pcVar14 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_1,3);
    _swift_retain_n();
    uVar7 = uVar6;
    (*pcVar14)(uVar6,lVar9);
    if ((uVar7 & 1) == 0) {
      puVar8 = &DAT_100eef7e0;
      _swift_allocObject(&DAT_100eef7e0,0x28,7);
      *(long *)(puVar8 + 0x10) = param_1;
      *(code **)(puVar8 + 0x18) = FUN_100642b88;
      *(undefined **)(puVar8 + 0x20) = puVar5;
      pcVar14 = *(code **)(lVar9 + 0x18);
      _swift_retain(param_1);
      _swift_retain(puVar5);
      (*pcVar14)(thunk_FUN_1005dfe64,puVar8,uVar6,lVar9);
      _swift_release(puVar8);
      _swift_release();
      _swift_release(param_1);
      _swift_release(puVar5);
    }
    else {
      _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
      if (*(char *)(param_1 + 0x18) == '\x01') {
        uVar15 = *(undefined8 *)(param_1 + 0x10);
        FUN_1005dff00(uVar15,1);
        FUN_10063e578(0);
        FUN_100642b94(uVar15,1);
      }
      else if (*(char *)(param_1 + 0x18) == -1) {
        _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(FUN_100642b88,puVar5);
        _swift_endAccess(auStack_90);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release(param_1);
      _swift_release(puVar5);
      _swift_bridgeObjectRelease(0);
    }
    FUN_100004550(lVar12,uVar13);
    _swift_release_n();
    _swift_release(puVar11);
    _swift_release_n(param_1,2);
  }
  return;
}



/* Address: 0x10063e4b4 | FUN_10063e4b4 */

void FUN_10063e4b4(undefined8 param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  code *pcVar5;
  
  uVar4 = *(ulong *)(unaff_x20 + 0x18);
  lVar3 = *(long *)(unaff_x20 + 0x20);
  _swift_getObjectType();
  uVar1 = uVar4;
  (**(code **)(lVar3 + 0x10))();
  if ((uVar1 & 1) != 0) {
    FUN_10063e578(param_1);
    return;
  }
  puVar2 = &DAT_100eef210;
  _swift_allocObject(&DAT_100eef210,0x20,7);
  *(long *)(puVar2 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  pcVar5 = *(code **)(lVar3 + 0x18);
  _swift_retain(param_1);
  _swift_retain();
  (*pcVar5)(FUN_10064235c,puVar2,uVar4,lVar3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10063e578 | FUN_10063e578 */

void FUN_10063e578(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  
  lVar7 = *(long *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    _swift_retain(lVar7);
    _swift_retain(uVar2);
    FUN_1006202c4(lVar7,uVar4,uVar2);
    _swift_release(uVar2);
    _swift_release(lVar7);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  }
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
  *(long *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  FUN_100622430(uVar4,uVar2,uVar3);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  FUN_100004550(uVar4,uVar2);
  if (*(long *)(unaff_x20 + 0x28) == 0 && param_1 == 0) {
    return;
  }
  _swift_getObjectType(uVar5);
  puVar6 = &DAT_100eef9e8;
  _swift_allocObject(&DAT_100eef9e8,0x20,7);
  *(long *)(puVar6 + 0x10) = unaff_x20;
  *(long *)(puVar6 + 0x18) = param_1;
  pcVar8 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_retain();
  (*pcVar8)(FUN_100642d28,puVar6,uVar5,lVar1);
  _swift_release(puVar6);
  return;
}



/* Address: 0x10063e698 | FUN_10063e698 */

void FUN_10063e698(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x28) != 0) {
    FUN_100649994(0,0);
  }
  if (param_2 != 0) {
    FUN_100649994(0,0,param_2);
    return;
  }
  return;
}



/* Address: 0x10063e6e4 | FUN_10063e6e4 */

void FUN_10063e6e4(undefined8 param_1,long param_2)

{
  long lVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = *(long *)(param_2 + 0x18);
  FUN_10061fb30(lVar3,*(undefined8 *)(param_2 + 0x20));
  puVar4 = &DAT_100eef8f8;
  _swift_allocObject(&DAT_100eef8f8,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_10063e8d0;
  *(long *)(puVar4 + 0x18) = param_2;
  *(long *)(puVar4 + 0x20) = lVar3;
  uVar5 = *(ulong *)(lVar3 + 0x20);
  lVar1 = *(long *)(lVar3 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_2,4);
  _swift_retain_n(lVar3,2);
  uVar6 = uVar5;
  (*pcVar9)(uVar5,lVar1);
  if ((uVar6 & 1) == 0) {
    puVar7 = &DAT_100eef920;
    _swift_allocObject(&DAT_100eef920,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1005dffb0;
    *(undefined **)(puVar7 + 0x20) = puVar4;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(lVar3);
    _swift_retain(puVar4);
    (*pcVar9)(thunk_FUN_1005dfe64,puVar7,uVar5,lVar1);
    _swift_release(puVar7);
    _swift_release(lVar3);
    _swift_release_n(param_2,3);
    _swift_release(puVar4);
  }
  else {
    _swift_beginAccess(lVar3 + 0x10,auStack_68,0,0);
    cVar2 = *(char *)(lVar3 + 0x18);
    if (cVar2 == -1) {
      _swift_beginAccess(lVar3 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(thunk_FUN_1005dffb0,puVar4);
      _swift_endAccess(auStack_80);
    }
    else {
      uVar8 = *(undefined8 *)(lVar3 + 0x10);
      FUN_100308524(uVar8,cVar2);
      FUN_10063e8d0();
      FUN_100308538(uVar8,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(lVar3);
    _swift_release_n(param_2,3);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(lVar3);
  return;
}



/* Address: 0x10063e8d0 | FUN_10063e8d0 */

void FUN_10063e8d0(void)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    lVar1 = *(long *)(unaff_x20 + 0x20);
    _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
    lVar9 = *(long *)(unaff_x20 + 0x10);
    pcVar10 = *(code **)(lVar1 + 0x38);
    _swift_retain();
    FUN_1000f7830(&DAT_100fd4fc8,&DAT_100c65f90);
    pcVar13 = FUN_100642bac;
    lVar8 = unaff_x20;
    (*pcVar10)();
    _swift_release();
    uVar11 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x40);
    *(long *)(unaff_x20 + 0x30) = lVar9;
    *(code **)(unaff_x20 + 0x38) = pcVar13;
    *(long *)(unaff_x20 + 0x40) = lVar8;
    _swift_retain(lVar9);
    _swift_retain(lVar8);
    FUN_100622430(uVar11,uVar2,uVar12);
    puVar4 = &DAT_100eef858;
    _swift_allocObject(&DAT_100eef858,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar9;
    *(code **)(puVar4 + 0x18) = thunk_FUN_100642b68;
    *(long *)(puVar4 + 0x20) = unaff_x20;
    uVar5 = *(ulong *)(lVar9 + 0x20);
    lVar1 = *(long *)(lVar9 + 0x28);
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(lVar9,3);
    _swift_retain_n();
    uVar6 = uVar5;
    (*pcVar13)(uVar5,lVar1);
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100eef880;
      _swift_allocObject(&DAT_100eef880,0x28,7);
      *(long *)(puVar7 + 0x10) = lVar9;
      *(code **)(puVar7 + 0x18) = thunk_FUN_100642b74;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      pcVar13 = *(code **)(lVar1 + 0x18);
      _swift_retain(lVar9);
      _swift_retain(puVar4);
      (*pcVar13)(thunk_FUN_1005dfe64,puVar7,uVar5,lVar1);
      _swift_release(puVar7);
      _swift_release_n();
      _swift_release(lVar9);
      _swift_release(puVar4);
    }
    else {
      _swift_beginAccess(lVar9 + 0x10,auStack_a8,0,0);
      cVar3 = *(char *)(lVar9 + 0x18);
      if (cVar3 == -1) {
        _swift_beginAccess(lVar9 + 0x30,local_78,0x21,0);
        FUN_10064967c(thunk_FUN_100642b74,puVar4);
        _swift_endAccess(local_78);
      }
      else if (cVar3 != '\x01') {
        uVar11 = *(undefined8 *)(lVar9 + 0x10);
        local_78[0] = uVar11;
        _swift_retain(uVar11);
        FUN_10063e6e4(local_78);
        FUN_100642b94(uVar11,cVar3);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n();
      _swift_release(lVar9);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(lVar9);
    puVar4 = &DAT_100eef8a8;
    _swift_allocObject(&DAT_100eef8a8,0x28,7);
    *(long *)(puVar4 + 0x10) = lVar9;
    *(code **)(puVar4 + 0x18) = thunk_FUN_100642b80;
    *(long *)(puVar4 + 0x20) = unaff_x20;
    uVar5 = *(ulong *)(lVar9 + 0x20);
    lVar1 = *(long *)(lVar9 + 0x28);
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar1 + 0x10);
    _swift_retain_n(lVar9,3);
    _swift_retain_n();
    uVar6 = uVar5;
    (*pcVar13)(uVar5,lVar1);
    if ((uVar6 & 1) == 0) {
      puVar7 = &DAT_100eef8d0;
      _swift_allocObject(&DAT_100eef8d0,0x28,7);
      *(long *)(puVar7 + 0x10) = lVar9;
      *(code **)(puVar7 + 0x18) = thunk_FUN_100642b88;
      *(undefined **)(puVar7 + 0x20) = puVar4;
      pcVar13 = *(code **)(lVar1 + 0x18);
      _swift_retain(lVar9);
      _swift_retain(puVar4);
      (*pcVar13)(thunk_FUN_1005dfe64,puVar7,uVar5,lVar1);
      _swift_release(puVar7);
      _swift_release_n();
      _swift_release(lVar9);
      _swift_release(puVar4);
    }
    else {
      _swift_beginAccess(lVar9 + 0x10,local_78,0,0);
      if (*(char *)(lVar9 + 0x18) == '\x01') {
        uVar11 = *(undefined8 *)(lVar9 + 0x10);
        FUN_1005dff00(uVar11,1);
        FUN_10063e578(0);
        FUN_100642b94(uVar11,1);
      }
      else if (*(char *)(lVar9 + 0x18) == -1) {
        _swift_beginAccess(lVar9 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(thunk_FUN_100642b88,puVar4);
        _swift_endAccess(auStack_90);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n();
      _swift_release(lVar9);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(lVar8);
    _swift_release_n(lVar9,2);
  }
  return;
}



/* Address: 0x10063ed18 | FUN_10063ed18 */

void FUN_10063ed18(long *param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_2 + 0x48);
  if (pcVar1 == (code *)0x0) {
    param_2 = *(long *)(param_2 + 0x18);
    _swift_getObjectType();
    FUN_10063dc68();
  }
  else {
    uVar2 = *(undefined8 *)(param_2 + 0x50);
    _swift_retain(uVar2);
    (*pcVar1)();
    FUN_100004550(pcVar1,uVar2);
  }
  *param_1 = param_2;
  return;
}



/* Address: 0x10063edb0 | FUN_10063edb0 */

void FUN_10063edb0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x10063ede8 | FUN_10063ede8 */

void FUN_10063ede8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10063ee28 | FUN_10063ee28 */

void FUN_10063ee28(void)

{
  return;
}



/* Address: 0x10063ee30 | FUN_10063ee30 */

void FUN_10063ee30(void)

{
  undefined8 uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  long *unaff_x20;
  
  uVar2 = unaff_x20[1];
  uVar4 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 != uVar4) {
    if (uVar4 <= uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10063ee84);
      (*pcVar3)();
    }
    uVar1 = *(undefined8 *)(*unaff_x20 + uVar2 * 0x10 + 0x20);
    unaff_x20[1] = uVar2 + 1;
    _swift_unknownObjectRetain(uVar1);
  }
  return;
}



/* Address: 0x10063ee84 | FUN_10063ee84 */

void FUN_10063ee84(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = unaff_x20[1];
  *param_1 = *unaff_x20;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x10063ee90 | FUN_10063ee90 */

undefined8 FUN_10063ee90(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  uVar2 = uVar1;
  FUN_100641da0(uVar1,unaff_x20[1]);
  _swift_bridgeObjectRelease(uVar1);
  return uVar2;
}



/* Address: 0x10063eec4 | FUN_10063eec4 */

void FUN_10063eec4(void)

{
  FUN_10063eecc();
  return;
}



/* Address: 0x10063eecc | FUN_10063eecc */

long FUN_10063eecc(long *param_1,long param_2,long param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  
  if (param_2 != 0) {
    if (param_3 == 0) goto LAB_10063ef84;
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10063efa8);
      (*pcVar4)();
    }
    uVar6 = *(ulong *)(param_4 + 0x10);
    if (param_5 != uVar6) {
      lVar1 = 0;
      do {
        lVar5 = lVar1;
        if (uVar6 <= param_5 + lVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10063efa4);
          (*pcVar4)();
        }
        puVar2 = (undefined8 *)(param_4 + param_5 * 0x10 + 0x20 + lVar5 * 0x10);
        uVar7 = *puVar2;
        puVar3 = (undefined8 *)(param_2 + lVar5 * 0x10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar7;
        if (param_3 + -1 == lVar5) {
          _swift_unknownObjectRetain(uVar7);
          param_5 = param_5 + lVar5 + 1;
          goto LAB_10063ef84;
        }
        _swift_unknownObjectRetain(uVar7);
        uVar6 = *(ulong *)(param_4 + 0x10);
        lVar1 = lVar5 + 1;
      } while (param_5 + lVar1 != uVar6);
      param_5 = param_5 + lVar5 + 1;
      param_3 = lVar1;
      goto LAB_10063ef84;
    }
  }
  param_3 = 0;
LAB_10063ef84:
  *param_1 = param_4;
  param_1[1] = param_5;
  return param_3;
}



/* Address: 0x10063efa8 | FUN_10063efa8 */

void FUN_10063efa8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10063ee30();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10063efcc | FUN_10063efcc */

undefined * FUN_10063efcc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100fd4fc8;
  FUN_1000f7830(&DAT_100fd4fc8,&DAT_100c65f90);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  puVar1[0x18] = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x30) = 0;
  _swift_unknownObjectRetain();
  return puVar1;
}



/* Address: 0x10063f034 | FUN_10063f034 */

void FUN_10063f034(void)

{
  long in_x5;
  
                    /* WARNING: Could not recover jumptable at 0x00010063f038. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(in_x5 + 0x48))();
  return;
}



/* Address: 0x10063f03c | FUN_10063f03c */

void FUN_10063f03c(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x10063f050 | FUN_10063f050 */

void FUN_10063f050(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  
  puVar1 = &DAT_100eef238;
  _swift_allocObject(&DAT_100eef238,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  puVar2 = &DAT_100eef260;
  _swift_allocObject(&DAT_100eef260,0x20,7);
  *(code **)(puVar2 + 0x10) = FUN_1000386a0;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  pcVar3 = *(code **)(param_4 + 0x18);
  _swift_retain(param_2);
  _swift_retain(puVar1);
  (*pcVar3)(FUN_1000386a0,puVar2,param_3,param_4);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10063f108 | FUN_10063f108 */

code * FUN_10063f108(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  uVar1 = 0x5000000;
  local_70 = param_1;
  uStack_68 = param_2;
  _swift_getFunctionTypeMetadata0(0x5000000,param_4);
  FUN_1005cfcb0(&local_60,&local_70,uVar1);
  puVar2 = &DAT_100eef288;
  _swift_allocObject(&DAT_100eef288,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(undefined8 *)(puVar2 + 0x18) = param_4;
  *(long *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x30) = uStack_58;
  *(undefined8 *)(puVar2 + 0x28) = local_60;
  pcVar4 = *(code **)(param_5 + 0x20);
  _swift_retain(param_2);
  _swift_retain(uStack_58);
  pcVar3 = FUN_1006423a4;
  (*pcVar4)(FUN_1006423a4,puVar2,param_4,param_3,param_5);
  _swift_release(uStack_58);
  _swift_release(puVar2);
  return pcVar3;
}



/* Address: 0x10063f1ec | FUN_10063f1ec */

undefined8
FUN_10063f1ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = 0x5000000;
  local_80 = param_2;
  uStack_78 = param_3;
  _swift_getFunctionTypeMetadata0(0x5000000,param_5);
  FUN_1005cfcb0(&local_70,&local_80,uVar1);
  puVar2 = &DAT_100eef2b0;
  _swift_allocObject(&DAT_100eef2b0,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(long *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = uStack_68;
  *(undefined8 *)(puVar2 + 0x28) = local_70;
  pcVar3 = *(code **)(param_6 + 0x30);
  _swift_retain(param_3);
  _swift_retain(uStack_68);
  (*pcVar3)(param_1,FUN_100642d98,puVar2,param_5,param_4,param_6);
  _swift_release(uStack_68);
  _swift_release(puVar2);
  return param_1;
}



/* Address: 0x10063f2f0 | FUN_10063f2f0 */

undefined8
FUN_10063f2f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = 0x5000000;
  local_80 = param_2;
  uStack_78 = param_3;
  _swift_getFunctionTypeMetadata0(0x5000000,param_5);
  FUN_1005cfcb0(&local_70,&local_80,uVar1);
  puVar2 = &DAT_100eef2d8;
  _swift_allocObject(&DAT_100eef2d8,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_4;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(long *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = uStack_68;
  *(undefined8 *)(puVar2 + 0x28) = local_70;
  pcVar3 = *(code **)(param_6 + 0x38);
  _swift_retain(param_3);
  _swift_retain(uStack_68);
  (*pcVar3)(param_1,FUN_100642d98,puVar2,param_5,param_4,param_6);
  _swift_release(uStack_68);
  _swift_release(puVar2);
  return param_1;
}



/* Address: 0x10063f3f4 | FUN_10063f3f4 */

void FUN_10063f3f4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar4 = *(long *)(param_5 + -8);
  puVar3 = auStack_b0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_2;
  FUN_100663554(0,param_5,param_7);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = (long)puVar3 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar3,local_a0,param_5);
  _swift_unknownObjectRetain();
  uVar1 = local_98;
  FUN_10066268c(lVar6,puVar3);
  (**(code **)(param_6 + 0x80))(&local_80,local_90,lVar6,lVar2,&PTR_PTR_100ef1fc0,uVar1,param_6);
  (**(code **)(lVar5 + 8))(lVar6,lVar2);
  if (unaff_x21 == 0) {
    local_a8[1] = uStack_78;
    *local_a8 = local_80;
    local_a8[3] = CONCAT71(local_67,uStack_68);
    local_a8[2] = uStack_70;
    *(undefined8 *)((long)local_a8 + 0x21) = uStack_5f;
    *(ulong *)((long)local_a8 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}



/* Address: 0x10063f528 | FUN_10063f528 */

void FUN_10063f528(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 param_7)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  long unaff_x21;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_b0 [8];
  undefined8 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined1 uStack_68;
  undefined7 local_67;
  undefined1 uStack_60;
  undefined8 uStack_5f;
  
  lVar4 = *(long *)(param_5 + -8);
  puVar3 = auStack_b0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  local_a8 = param_1;
  local_a0 = param_3;
  local_98 = param_4;
  local_90 = param_2;
  FUN_100663554(0,param_5,param_7);
  lVar5 = *(long *)(lVar2 + -8);
  lVar6 = (long)puVar3 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar4 + 0x10))(puVar3,local_a0,param_5);
  _swift_unknownObjectRetain();
  uVar1 = local_98;
  FUN_10066268c(lVar6,puVar3);
  (**(code **)(param_6 + 0x88))(&local_80,local_90,lVar6,lVar2,&PTR_PTR_100ef1fc0,uVar1,param_6);
  (**(code **)(lVar5 + 8))(lVar6,lVar2);
  if (unaff_x21 == 0) {
    local_a8[1] = uStack_78;
    *local_a8 = local_80;
    local_a8[3] = CONCAT71(local_67,uStack_68);
    local_a8[2] = uStack_70;
    *(undefined8 *)((long)local_a8 + 0x21) = uStack_5f;
    *(ulong *)((long)local_a8 + 0x19) = CONCAT17(uStack_60,local_67);
  }
  return;
}



/* Address: 0x10063f65c | FUN_10063f65c */

undefined1  [16] FUN_10063f65c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined8 unaff_x20;
  undefined1 auVar3 [16];
  
  lVar1 = 0;
  FUN_10063d83c();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = unaff_x20;
  *(undefined8 *)(lVar1 + 0x18) = param_2;
  lVar2 = lVar1;
  FUN_1006423c4();
  _swift_unknownObjectRetain();
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}


