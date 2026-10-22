/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100bb016c | FUN_100bb016c */

void FUN_100bb016c(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100bb01a8 | FUN_100bb01a8 */

void FUN_100bb01a8(void)

{
  long unaff_x20;
  
  FUN_100be9678(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100bb01bc | thunk_FUN_100b6c9e8 */

void thunk_FUN_100b6c9e8(void)

{
  FUN_100b6c9e8();
  return;
}



/* Address: 0x100bb01c0 | FUN_100bb01c0 */

void FUN_100bb01c0(void)

{
  return;
}



/* Address: 0x100bb01e4 | FUN_100bb01e4 */

void FUN_100bb01e4(undefined8 param_1,SEL param_2)

{
  ID unaff_x22;
  
  _objc_msgSend(unaff_x22,param_2);
  return;
}



/* Address: 0x100bb01ec | FUN_100bb01ec */

void FUN_100bb01ec(void)

{
  undefined8 *unaff_x20;
  
  _swift_isUniquelyReferenced_nonNull_native(*unaff_x20);
  return;
}



/* Address: 0x100bb01fc | FUN_100bb01fc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb01fc(void)

{
  return 0;
}



/* Address: 0x100bb020c | FUN_100bb020c */

undefined8 FUN_100bb020c(void)

{
  return 3;
}



/* Address: 0x100bb0224 | FUN_100bb0224 */

void FUN_100bb0224(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100be58dc();
  FUN_100bb0384();
  DAT_101046930 = uVar1;
  return;
}



/* Address: 0x100bb0248 | FUN_100bb0248 */

void FUN_100bb0248(void)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100be58dc();
  FUN_100bb0384();
  DAT_101046938 = uVar1;
  return;
}



/* Address: 0x100bb026c | FUN_100bb026c */

void FUN_100bb026c(void)

{
  long unaff_x20;
  
  _objc_msgSend(*(ID *)(unaff_x20 + DAT_101046940),"disable");
  return;
}



/* Address: 0x100bb0284 | FUN_100bb0284 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb0284(undefined8 param_1)

{
  FUN_100bb026c(param_1);
  return 0;
}



/* Address: 0x100bb02ac | FUN_100bb02ac */

void FUN_100bb02ac(undefined8 param_1,code *param_2,undefined8 param_3,ID param_4)

{
  _objc_msgSend(param_4,"urlSessionTaskResume:",param_1);
  (*param_2)();
  return;
}



/* Address: 0x100bb02e4 | FUN_100bb02e4 */

void FUN_100bb02e4(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,ID param_5
                  )

{
  _objc_msgSend(param_5,"urlSessionTask:setState:",param_1,param_2);
  (*param_3)(param_2);
  return;
}



/* Address: 0x100bb0330 | FUN_100bb0330 */

void FUN_100bb0330(void)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("Sentry.SentryNetworkTrackingIntegration",0x27,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100bb035c);
  (*pcVar1)();
}



/* Address: 0x100bb035c | FUN_100bb035c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb035c(void)

{
  FUN_100bb0330();
  return 0;
}



/* Address: 0x100bb0368 | FUN_100bb0368 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100bb0368(void)

{
  return 0;
}



/* Address: 0x100bb0378 | FUN_100bb0378 */

void FUN_100bb0378(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100bb0384 | FUN_100bb0384 */

void FUN_100bb0384(undefined8 param_1)

{
  _swift_allocObject(param_1,0x10,7);
  return;
}



/* Address: 0x100bb0390 | FUN_100bb0390 */

void FUN_100bb0390(undefined8 param_1)

{
  FUN_100b69e08();
  FUN_100bb04d0(param_1);
  return;
}



/* Address: 0x100bb03bc | FUN_100bb03bc */

void FUN_100bb03bc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100bb059c(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bb03f0 | FUN_100bb03f0 */

void FUN_100bb03f0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b69e08();
  FUN_100bb0500(param_1,param_2);
  FUN_100b56e60();
  return;
}



/* Address: 0x100bb0424 | FUN_100bb0424 */

void FUN_100bb0424(undefined8 param_1)

{
  FUN_100b69e08();
  FUN_100bb067c(param_1);
  return;
}



/* Address: 0x100bb0450 | FUN_100bb0450 */

void FUN_100bb0450(void)

{
  class_t *self;
  
  self = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  _objc_allocWithZone();
  FUN_10021b704();
  _objc_msgSend((ID)self,"init");
  FUN_100bb0f50(_TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100bb06f4();
  FUN_100b69e10();
  FUN_100b69e90();
  return;
}



/* Address: 0x100bb04b0 | _TtC6Sentry26SentryDispatchQueueWrapper::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::init(ID param_1,SEL param_2)

{
  FUN_100bb0450();
  return param_1;
}



/* Address: 0x100bb04d0 | FUN_100bb04d0 */

void FUN_100bb04d0(undefined8 param_1)

{
  FUN_100bb0688(param_1,&PTR_s_initWithName__100f87d68);
  return;
}



/* Address: 0x100bb04dc | _TtC6Sentry26SentryDispatchQueueWrapper::initWithName: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::initWithName_
             (ID param_1,SEL param_2,const_char__ param_3)

{
  FUN_100bb04d0();
  return (ID)param_3;
}



/* Address: 0x100bb0500 | FUN_100bb0500 */

void FUN_100bb0500(undefined8 param_1,undefined8 param_2)

{
  class_t *self;
  
  self = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  _objc_allocWithZone();
  FUN_10021b704();
  _objc_msgSend((ID)self,"initWithName:relativePriority:",param_1,param_2);
  FUN_100bb0f50(_TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100bb06f4();
  FUN_100b69e10();
  FUN_100b69e90();
  return;
}



/* Address: 0x100bb0574 | _TtC6Sentry26SentryDispatchQueueWrapper::initWithName:relativePriority: */

/* Function Stack Size: 0x1c bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::initWithName_relativePriority_
             (ID param_1,SEL param_2,const_char__ param_3,int param_4)

{
  FUN_100bb0500(param_3,param_4);
  return (ID)param_3;
}



/* Address: 0x100bb059c | FUN_100bb059c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100bb059c(undefined8 param_1,undefined8 param_2)

{
  class_t *self;
  ID IVar1;
  
  self = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  _objc_allocWithZone();
  FUN_10021b704();
  IVar1 = _objc_msgSend((ID)self,"initWithName:attributes:",param_1,param_2);
  FUN_100bb0f50(_TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100bb06f4();
  FUN_100b69e10();
  return IVar1;
}



/* Address: 0x100bb0638 | _TtC6Sentry26SentryDispatchQueueWrapper::initWithName:attributes: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::initWithName_attributes_
             (ID param_1,SEL param_2,const_char__ param_3,ID param_4)

{
  FUN_100bb059c(param_3,param_4);
  return (ID)param_3;
}



/* Address: 0x100bb067c | FUN_100bb067c */

void FUN_100bb067c(undefined8 param_1)

{
  FUN_100bb0688(param_1,&PTR_s_initHighPriorityWithName__100f85db0);
  return;
}



/* Address: 0x100bb0688 | FUN_100bb0688 */

void FUN_100bb0688(undefined8 param_1,undefined8 *param_2)

{
  class_t *self;
  
  self = &objc::class_t::_SentryDispatchQueueWrapperInternal;
  _objc_allocWithZone();
  FUN_10021b704();
  _objc_msgSend((ID)self,(SEL)*param_2,param_1);
  FUN_100bb0f50(_TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100bb06f4();
  FUN_100b69e10();
  FUN_100b69e90();
  return;
}



/* Address: 0x100bb06f4 | FUN_100bb06f4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100bb06f4(void)

{
  return ZEXT816(0x100fa2758);
}



/* Address: 0x100bb0714 | _TtC6Sentry26SentryDispatchQueueWrapper::initWithHighPriority: */

/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::initWithHighPriority_
             (ID param_1,SEL param_2,const_char__ param_3)

{
  FUN_100bb067c();
  return (ID)param_3;
}



/* Address: 0x100bb0738 | _TtC6Sentry26SentryDispatchQueueWrapper::queue */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry26SentryDispatchQueueWrapper::queue(ID param_1,SEL param_2)

{
  FUN_100bb076c();
  return param_1;
}



/* Address: 0x100bb076c | FUN_100bb076c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100bb076c(void)

{
  ID IVar1;
  long unaff_x20;
  
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper
                               ),"queue");
  return IVar1;
}



/* Address: 0x100bb0798 | FUN_100bb0798 */

void FUN_100bb0798(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb08d8(param_1,param_2,&DAT_100f39e90,&PTR_s_dispatchAsyncWithBlock__100f870f0);
  return;
}



/* Address: 0x100bb07ac | FUN_100bb07ac */

void FUN_100bb07ac(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100bb07bc | FUN_100bb07bc */

void FUN_100bb07bc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100bb07c4 | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAsyncWithBlock: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAsyncWithBlock_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_100bb0810();
  return;
}



/* Address: 0x100bb07e0 | FUN_100bb07e0 */

void FUN_100bb07e0(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb08d8(param_1,param_2,&DAT_100f39fc8,&PTR_s_dispatchSync__100f85da0);
  return;
}



/* Address: 0x100bb07f4 | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSync: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSync_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_100bb0810();
  return;
}



/* Address: 0x100bb0810 | FUN_100bb0810 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bb0810(undefined8 param_1,undefined8 param_2,void *param_3,long param_4,
                  undefined8 param_5,code *param_6)

{
  void *pvVar1;
  
  pvVar1 = __Block_copy(param_3);
  _swift_allocObject(param_4,0x18,7);
  *(void **)(param_4 + 0x10) = pvVar1;
  (*param_6)(param_5,param_4);
  _swift_release(param_4);
  return;
}



/* Address: 0x100bb0894 | FUN_100bb0894 */

void FUN_100bb0894(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb08d8(param_1,param_2,&DAT_100f39eb8,&PTR_s_dispatchAsyncOnMainQueueIfNotMai_100f870e8);
  return;
}



/* Address: 0x100bb08a8 | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAsyncOnMainQueueIfNotMainThread: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAsyncOnMainQueueIfNotMainThread_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_100bb0810();
  return;
}



/* Address: 0x100bb08c4 | FUN_100bb08c4 */

void FUN_100bb08c4(undefined8 param_1,undefined8 param_2)

{
  FUN_100bb08d8(param_1,param_2,&DAT_100f39ee0,&PTR_s_dispatchSyncOnMainQueue__100f87128);
  return;
}



/* Address: 0x100bb08d8 | FUN_100bb08d8 */

void FUN_100bb08d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  void *aBlock;
  long unaff_x20;
  ID self;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 local_48;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100030410;
  uStack_58 = param_3;
  local_50 = param_1;
  local_48 = param_2;
  aBlock = __Block_copy(&local_70);
  uVar1 = local_48;
  _swift_retain(param_2);
  _swift_release(uVar1);
  _objc_msgSend(self,(SEL)*param_4,aBlock);
  __Block_release(aBlock);
  FUN_100bad7ec();
  return;
}



/* Address: 0x100bb096c | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSyncOnMainQueue: */

/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSyncOnMainQueue_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  FUN_100bb0810();
  return;
}



/* Address: 0x100bb0988 | FUN_100bb0988 */

void FUN_100bb0988(undefined8 param_1)

{
  long unaff_x20;
  ID self;
  void *unaff_x21;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100b97e5c(FUN_100030410);
  FUN_100bb0f70();
  _swift_release();
  _objc_msgSend(self,"dispatchSyncOnMainQueue:timeout:",param_1);
  __Block_release(unaff_x21);
  FUN_100bb0f5c();
  return;
}



/* Address: 0x100bb0a18 | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSyncOnMainQueue:timeout: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchSyncOnMainQueue_timeout_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4,double param_5)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_3);
  puVar2 = &DAT_100f3a050;
  _swift_allocObject(&DAT_100f3a050,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bb0988(param_5,thunk_FUN_100155a18,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bb0a9c | FUN_100bb0a9c */

void FUN_100bb0a9c(undefined8 param_1)

{
  long unaff_x20;
  ID self;
  void *unaff_x21;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  FUN_100b97e5c(FUN_100030410);
  FUN_100bb0f70();
  _swift_release();
  _objc_msgSend(self,"dispatchAfter:block:",param_1);
  __Block_release(unaff_x21);
  FUN_100bb0f5c();
  return;
}



/* Address: 0x100bb0b2c | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAfter:block: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchAfter_block_
               (ID param_1,SEL param_2,double param_3,ID param_4,undefined4 param_5)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_4);
  puVar2 = &DAT_100f3a028;
  _swift_allocObject(&DAT_100f3a028,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bb0a9c(param_3,thunk_FUN_100155a18,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bb0bb0 | FUN_100bb0bb0 */

void FUN_100bb0bb0(void *param_1,undefined8 param_2,undefined8 param_3)

{
  void *aBlock;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper);
  aBlock = param_1;
  FUN_100b97e5c(FUN_100030410);
  _swift_retain(param_3);
  _swift_release(param_3);
  _objc_msgSend(self,"dispatchOnce:block:",param_1,aBlock);
  __Block_release(aBlock);
  FUN_100bad7ec();
  return;
}



/* Address: 0x100bb0c4c | _TtC6Sentry26SentryDispatchQueueWrapper::dispatchOnce:block: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::dispatchOnce_block_
               (ID param_1,SEL param_2,long_long *param_3,ID param_4,undefined4 param_5)

{
  void *pvVar1;
  undefined *puVar2;
  
  pvVar1 = __Block_copy((void *)param_4);
  puVar2 = &DAT_100f3a000;
  _swift_allocObject(&DAT_100f3a000,0x18,7);
  *(void **)(puVar2 + 0x10) = pvVar1;
  FUN_100bb0bb0(param_3,FUN_100155a18,puVar2);
  _swift_release(puVar2);
  return;
}



/* Address: 0x100bb0cc8 | FUN_100bb0cc8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100bb0cc8(double param_1,DispatchWorkItem *param_2)

{
  DispatchTime DVar1;
  DispatchTime DVar2;
  ulong uVar3;
  long unaff_x20;
  DispatchTime DVar4;
  long lVar5;
  code *pcVar6;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  uVar3 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  DVar4.unknown = &stack0xffffffffffffffb0 + -uVar3;
  DVar2.unknown =
       (undefined *)
       _objc_msgSend(*(ID *)(unaff_x20 + _TtC6Sentry26SentryDispatchQueueWrapper::internalWrapper),
                     "queue");
  Dispatch::DispatchTime::now(DVar2);
  Dispatch::__infix(DVar4,param_1);
  pcVar6 = *(code **)(lVar5 + 8);
  (*pcVar6)(DVar4.unknown,DVar1.unknown);
  (extension_Dispatch)::__C::OS_dispatch_queue::asyncAfter
            ((DispatchTime)(DVar4.unknown + -uVar3),param_2);
  (*pcVar6)(DVar4.unknown + -uVar3,DVar1.unknown);
  return;
}



/* Address: 0x100bb0da4 | _TtC6Sentry26SentryDispatchQueueWrapper::shouldDispatchCancel */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDispatchQueueWrapper::shouldDispatchCancel(ID param_1,SEL param_2)

{
  return 1;
}



/* Address: 0x100bb0dac | _TtC6Sentry26SentryDispatchQueueWrapper::shouldCreateDispatchBlock */

/* Function Stack Size: 0x10 bytes */

bool _TtC6Sentry26SentryDispatchQueueWrapper::shouldCreateDispatchBlock(ID param_1,SEL param_2)

{
  return 1;
}



/* Address: 0x100bb0db4 | FUN_100bb0db4 */

void FUN_100bb0db4(void)

{
  FUN_100bb06f4();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100bb0de4 | _TtC6Sentry26SentryDispatchQueueWrapper::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry26SentryDispatchQueueWrapper::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100bb0df4 | FUN_100bb0df4 */

void FUN_100bb0df4(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cceeb4);
  return;
}



/* Address: 0x100bb0e00 | FUN_100bb0e00 */

void FUN_100bb0e00(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bb0e18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x78))();
  return;
}



/* Address: 0x100bb0e1c | FUN_100bb0e1c */

void FUN_100bb0e1c(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bb0e34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x80))();
  return;
}



/* Address: 0x100bb0e38 | FUN_100bb0e38 */

void FUN_100bb0e38(void)

{
  ulong *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x000100bb0e50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *unaff_x20) + 0x90))();
  return;
}


