/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b7689c | FUN_100b7689c */

void FUN_100b7689c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::objcRuntimeWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b768c8 | FUN_100b768c8 */

undefined8 FUN_100b768c8(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uStack_60;
  undefined1 auStack_58 [24];
  long local_40;
  
  if (DAT_101042e10 != -1) {
    _swift_once(&DAT_101042e10,FUN_100bb46d0);
  }
  FUN_100b78bc0(&DAT_101058468,auStack_58);
  puVar1 = auStack_58;
  FUN_10007d048(puVar1,local_40);
  puVar3 = (undefined8 *)
           ((long)&uStack_60 -
           (*(long *)(*(long *)(local_40 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  (**(code **)(*(long *)(local_40 + -8) + 0x10))(puVar3,puVar1,local_40);
  uVar2 = *puVar3;
  FUN_100b78674(uVar2);
  FUN_100004594(auStack_58);
  return uVar2;
}



/* Address: 0x100b76988 | _TtC6Sentry25SentryDependencyContainer::extraContextProvider */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::extraContextProvider(ID param_1,SEL param_2)

{
  FUN_100b769bc();
  return param_1;
}



/* Address: 0x100b769bc | FUN_100b769bc */

void FUN_100b769bc(void)

{
  FUN_100b77518(&_TtC6Sentry25SentryDependencyContainer::___lazy_storage___extraContextProvider,
                &DAT_100c99180,FUN_100b779b4,FUN_100bb5e80);
  return;
}



/* Address: 0x100b769e0 | _TtC6Sentry25SentryDependencyContainer::setExtraContextProvider: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setExtraContextProvider_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76a24(param_3);
  return;
}



/* Address: 0x100b76a24 | FUN_100b76a24 */

void FUN_100b76a24(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b76a30 | FUN_100b76a30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b76a30(undefined8 *param_1)

{
  FUN_100b76a24(*param_1);
  return;
}



/* Address: 0x100b76a58 | FUN_100b76a58 */

void FUN_100b76a58(undefined8 *param_1,undefined8 param_2,code *param_3,code *param_4,code *param_5)

{
  undefined8 uVar1;
  
  (*param_3)();
  if (DAT_101042e08 != -1) {
    _swift_once(&DAT_101042e08,FUN_100bb4658);
  }
  uVar1 = DAT_101046d40;
  (*param_4)(0);
  _objc_allocWithZone();
  _swift_unknownObjectRetain(uVar1);
  (*param_5)(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Address: 0x100b76af4 | FUN_100b76af4 */

void FUN_100b76af4(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b769bc();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b76b20);
  return;
}



/* Address: 0x100b76b20 | FUN_100b76b20 */

void FUN_100b76b20(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b76a24);
  return;
}



/* Address: 0x100b76b2c | _TtC6Sentry25SentryDependencyContainer::eventContextEnricher */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::eventContextEnricher(ID param_1,SEL param_2)

{
  FUN_100b76b60();
  return param_1;
}



/* Address: 0x100b76b60 | FUN_100b76b60 */

void FUN_100b76b60(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  
  FUN_100b78da0(_TtC6Sentry25SentryDependencyContainer::paramLock);
  FUN_100b78ce8();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::_eventContextEnricher;
  lVar2 = *(long *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::_eventContextEnricher);
  lVar3 = lVar2;
  if (lVar2 == 0) {
    FUN_100ba672c();
    FUN_100b6f90c();
    *(long *)(unaff_x20 + lVar1) = lVar2;
    _swift_retain();
    lVar3 = 0;
  }
  _swift_unknownObjectRetain(lVar3);
  FUN_100b78ce8();
  FUN_100b6f868();
  FUN_100b56e60(lVar2);
  return;
}



/* Address: 0x100b76be4 | FUN_100b76be4 */

void FUN_100b76be4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_getKeyPath(&DAT_100c99a48);
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  FUN_10021b704();
  FUN_100b78d58();
  FUN_100b78d80();
  FUN_100bb5e94();
  FUN_100b78cdc();
  FUN_100b56ee0(uVar1);
  return;
}



/* Address: 0x100b76c48 | FUN_100b76c48 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b76c48(long *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_100b76d10();
  if (param_2 == 0) {
    FUN_100b84dac();
    FUN_100b84df8(5,0xd00000000000001d,0x8000000100dc7710,0xd00000000000005a,0x8000000100dc9e90,
                  0x14b);
    lVar1 = 0;
  }
  else {
    lVar1 = param_2;
    FUN_100b75d24();
    FUN_100bbccb4(0);
    _objc_allocWithZone();
    FUN_100bbcbc0(lVar1,param_2,param_3);
  }
  *param_1 = lVar1;
  return;
}



/* Address: 0x100b76d10 | FUN_100b76d10 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100b76d10(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::___lazy_storage___fileManager;
  lVar3 = *(long *)(unaff_x20 +
                   _TtC6Sentry25SentryDependencyContainer::___lazy_storage___fileManager);
  lVar5 = lVar3;
  if (lVar3 == 1) {
    FUN_10021b704();
    FUN_100b78d60();
    lVar2 = _TtC6Sentry25SentryDependencyContainer::_fileManager;
    FUN_100b78ca0(param_1 + _TtC6Sentry25SentryDependencyContainer::_fileManager,auStack_80);
    lVar6 = *(long *)(param_1 + lVar2);
    lVar5 = lVar6;
    if (lVar6 == 0) {
      FUN_100b76eec(&local_68);
      _swift_beginAccess(param_1 + lVar2,auStack_98,0x21,0);
      FUN_100b78d98();
      FUN_100b78d30();
      FUN_100b779e4(param_1 + lVar2);
      *(long *)(param_1 + lVar2) = local_68;
      _swift_endAccess(auStack_98);
      lVar6 = 0;
      lVar5 = local_68;
    }
    FUN_100b78d60(lVar6,"unlock");
    uVar4 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar5;
    FUN_10001486c(uVar4);
  }
  FUN_10001487c(lVar3);
  return lVar5;
}



/* Address: 0x100b76e3c | _TtC6Sentry25SentryDependencyContainer::fileManager */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::fileManager(ID param_1,SEL param_2)

{
  FUN_100b76d10();
  return param_1;
}



/* Address: 0x100b76e70 | _TtC6Sentry25SentryDependencyContainer::setFileManager: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setFileManager_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b76eb0(param_3);
  return;
}



/* Address: 0x100b76eb0 | FUN_100b76eb0 */

void FUN_100b76eb0(void)

{
  FUN_100b78d68();
  return;
}



/* Address: 0x100b76ebc | FUN_100b76ebc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b76ebc(undefined8 *param_1)

{
  FUN_100b76eb0(*param_1);
  return;
}



/* Address: 0x100b76eec | FUN_100b76eec */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b76f64) */

void FUN_100b76eec(undefined8 *param_1)

{
  undefined8 uVar1;
  
  FUN_100b9f83c(0);
  if (DAT_101042e40 != -1) {
    _swift_once(&DAT_101042e40,FUN_100bb48fc);
  }
  uVar1 = DAT_101046d70;
  if (DAT_101042e18 != -1) {
    _swift_once(&DAT_101042e18,FUN_100bb473c);
  }
  FUN_100b9c77c();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b77070 | FUN_100b77070 */

void FUN_100b77070(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b76d10();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b7709c);
  return;
}



/* Address: 0x100b7709c | FUN_100b7709c */

void FUN_100b7709c(undefined8 param_1,undefined8 param_2)

{
  FUN_100b772a4(param_1,param_2,FUN_100b76eb0);
  return;
}



/* Address: 0x100b770a8 | _TtC6Sentry25SentryDependencyContainer::scopePersistentStore */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::scopePersistentStore(ID param_1,SEL param_2)

{
  FUN_100b770dc();
  return param_1;
}



/* Address: 0x100b770dc | FUN_100b770dc */

void FUN_100b770dc(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  undefined1 auStack_80 [16];
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::___lazy_storage___scopePersistentStore;
  lVar4 = *(long *)(unaff_x20 +
                   _TtC6Sentry25SentryDependencyContainer::___lazy_storage___scopePersistentStore);
  lVar6 = lVar4;
  if (lVar4 == 1) {
    puVar2 = &DAT_100c991a0;
    _swift_getKeyPath(&DAT_100c991a0);
    lVar6 = *(long *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
    puVar3 = puVar2;
    FUN_10021b704();
    FUN_100b78d58();
    FUN_100bb5b50(lVar6,puVar3,puVar2,FUN_100b77a24,auStack_80);
    _swift_release(puVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(long *)(unaff_x20 + lVar1) = lVar6;
    FUN_100b78d04();
    FUN_10001486c(uVar5);
  }
  FUN_10001487c(lVar4);
  FUN_100b69e70(lVar6);
  return;
}



/* Address: 0x100b771a8 | _TtC6Sentry25SentryDependencyContainer::setScopePersistentStore: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setScopePersistentStore_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100b771e8(param_3);
  return;
}



/* Address: 0x100b771e8 | FUN_100b771e8 */

void FUN_100b771e8(void)

{
  FUN_100b78d68();
  return;
}



/* Address: 0x100b771f4 | FUN_100b771f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b771f4(undefined8 *param_1)

{
  FUN_100b771e8(*param_1);
  return;
}



/* Address: 0x100b77224 | FUN_100b77224 */

void FUN_100b77224(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100b76d10();
  uVar1 = 0;
  FUN_100b7ba08(0);
  _objc_allocWithZone();
  FUN_100b7a850(param_2,uVar1);
  *param_1 = param_2;
  return;
}



/* Address: 0x100b7726c | FUN_100b7726c */

void FUN_100b7726c(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b770dc();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b77298);
  return;
}



/* Address: 0x100b77298 | FUN_100b77298 */

void FUN_100b77298(undefined8 param_1,undefined8 param_2)

{
  FUN_100b772a4(param_1,param_2,FUN_100b771e8);
  return;
}



/* Address: 0x100b772a4 | FUN_100b772a4 */

void FUN_100b772a4(undefined8 *param_1,uint param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    FUN_100b78d04();
    (*param_3)(uVar1);
    FUN_100b78d38(param_1);
    return;
  }
  (*param_3)(uVar1);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b772ec | _TtC6Sentry25SentryDependencyContainer::globalEventProcessor */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::globalEventProcessor(ID param_1,SEL param_2)

{
  FUN_100b77320();
  return param_1;
}



/* Address: 0x100b77320 | FUN_100b77320 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b77320(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  long unaff_x20;
  ID IVar6;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::___lazy_storage___globalEventProcessor;
  lVar3 = *(long *)(unaff_x20 +
                   _TtC6Sentry25SentryDependencyContainer::___lazy_storage___globalEventProcessor);
  if (lVar3 == 0) {
    lVar5 = *(long *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
    FUN_10021b704();
    FUN_100b78ce8();
    lVar2 = _TtC6Sentry25SentryDependencyContainer::_globalEventProcessor;
    IVar6 = *(ID *)(lVar3 + _TtC6Sentry25SentryDependencyContainer::_globalEventProcessor);
    IVar4 = IVar6;
    if (IVar6 == 0) {
      IVar4 = 0;
      FUN_100bb3fa0();
      _objc_allocWithZone();
      IVar4 = _objc_msgSend(IVar4,"init");
      *(ID *)(lVar3 + lVar2) = IVar4;
      FUN_100b78d04();
      FUN_100b78d30();
      IVar6 = 0;
    }
    FUN_100b78ce8(IVar6,"unlock");
    *(ID *)(unaff_x20 + lVar1) = IVar4;
    FUN_100b78d98(0);
    FUN_100b6f82c();
    lVar3 = lVar5;
  }
  FUN_100b69e70(lVar3);
  return;
}



/* Address: 0x100b77410 | _TtC6Sentry25SentryDependencyContainer::setGlobalEventProcessor: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setGlobalEventProcessor_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100b77454(param_3);
  return;
}



/* Address: 0x100b77454 | FUN_100b77454 */

void FUN_100b77454(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b77460 | FUN_100b77460 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b77460(undefined8 *param_1)

{
  FUN_100b77454(*param_1);
  return;
}



/* Address: 0x100b77488 | FUN_100b77488 */

void FUN_100b77488(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b77320();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b774b4);
  return;
}



/* Address: 0x100b774b4 | FUN_100b774b4 */

void FUN_100b774b4(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b77454);
  return;
}



/* Address: 0x100b774c0 | _TtC6Sentry25SentryDependencyContainer::appStateManager */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::appStateManager(ID param_1,SEL param_2)

{
  FUN_100b774f4();
  return param_1;
}



/* Address: 0x100b774f4 | FUN_100b774f4 */

void FUN_100b774f4(void)

{
  FUN_100b77518(&_TtC6Sentry25SentryDependencyContainer::___lazy_storage___appStateManager,
                &DAT_100c991c0,FUN_100b77a2c,FUN_100bb5e80);
  return;
}



/* Address: 0x100b77518 | FUN_100b77518 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

code * FUN_100b77518(long *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  
  lVar4 = *param_1;
  pcVar1 = *(code **)(unaff_x20 + lVar4);
  if (pcVar1 == (code *)0x0) {
    _swift_getKeyPath(param_2);
    uVar3 = *(undefined8 *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
    uVar2 = param_2;
    FUN_10021b704();
    FUN_100b78d58();
    (*param_4)(uVar3,uVar2,param_2,param_3,auStack_90);
    FUN_100b78cdc();
    *(code **)(unaff_x20 + lVar4) = param_4;
    FUN_100b78d78();
    FUN_100b6f82c();
    pcVar1 = param_4;
  }
  return pcVar1;
}



/* Address: 0x100b775ec | _TtC6Sentry25SentryDependencyContainer::setAppStateManager: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setAppStateManager_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b77630(param_3);
  return;
}



/* Address: 0x100b77630 | FUN_100b77630 */

void FUN_100b77630(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b7763c | FUN_100b7763c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7763c(undefined8 *param_1)

{
  FUN_100b77630(*param_1);
  return;
}



/* Address: 0x100b77664 | FUN_100b77664 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b77664(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ID self;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  self = *(ID *)(param_2 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  _objc_msgSend(self,"lock");
  lVar6 = *(long *)(param_2 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _objc_msgSend(self,"unlock");
  if (lVar6 == 0) {
    uVar5 = 0;
    uVar7 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar6 + SentryOptions::releaseName);
    _swift_beginAccess(puVar1,auStack_68,0,0);
    uVar5 = *puVar1;
    uVar7 = puVar1[1];
    _swift_bridgeObjectRetain(uVar7);
  }
  uVar2 = 0;
  FUN_100b75d24(0);
  uVar3 = uVar2;
  FUN_100b76d10();
  lVar6 = _TtC6Sentry25SentryDependencyContainer::sysctlWrapper;
  _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::sysctlWrapper,auStack_80,0,0)
  ;
  uVar4 = *(undefined8 *)(param_2 + lVar6);
  FUN_100bb45a4(0);
  _objc_allocWithZone();
  FUN_100bb4460(uVar5,uVar7,uVar2,uVar3,uVar4);
  *param_1 = uVar5;
  return;
}



/* Address: 0x100b777a0 | FUN_100b777a0 */

void FUN_100b777a0(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b774f4();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b777cc);
  return;
}



/* Address: 0x100b777cc | FUN_100b777cc */

void FUN_100b777cc(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b77630);
  return;
}



/* Address: 0x100b777d8 | _TtC6Sentry25SentryDependencyContainer::crashReporter */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::crashReporter(ID param_1,SEL param_2)

{
  FUN_100b75f7c();
  return param_1;
}



/* Address: 0x100b7780c | _TtC6Sentry25SentryDependencyContainer::setCrashReporter: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setCrashReporter_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b77850(param_3);
  return;
}



/* Address: 0x100b77850 | FUN_100b77850 */

void FUN_100b77850(void)

{
  FUN_100b78cac();
  return;
}



/* Address: 0x100b7785c | FUN_100b7785c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7785c(undefined8 *param_1)

{
  FUN_100b77850(*param_1);
  return;
}



/* Address: 0x100b77884 | FUN_100b77884 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b77884(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  ID self;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined1 auStack_58 [24];
  
  self = *(ID *)(param_2 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  _objc_msgSend(self,"lock");
  lVar4 = *(long *)(param_2 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _objc_msgSend(self,"unlock");
  if (lVar4 == 0) {
    uVar2 = 0;
    uVar3 = 0;
  }
  else {
    puVar1 = (undefined8 *)(lVar4 + SentryOptions::cacheDirectoryPath);
    _swift_beginAccess(puVar1,auStack_58,0,0);
    uVar2 = *puVar1;
    uVar3 = puVar1[1];
    _swift_bridgeObjectRetain(uVar3);
  }
  FUN_100bc74d4(0);
  _objc_allocWithZone();
  FUN_100bc6730(uVar2,uVar3);
  *param_1 = uVar2;
  return;
}



/* Address: 0x100b77974 | FUN_100b77974 */

void FUN_100b77974(void)

{
  long unaff_x20;
  
  FUN_100b77884(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b7797c | FUN_100b7797c */

void FUN_100b7797c(void)

{
  long unaff_x20;
  
  FUN_100b76a58(*(undefined8 *)(unaff_x20 + 0x10),FUN_100b762a4,FUN_100b97d28,FUN_100b96124);
  return;
}



/* Address: 0x100b779ac | FUN_100b779ac */

void FUN_100b779ac(void)

{
  long unaff_x20;
  
  FUN_100b763ac(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b779b4 | FUN_100b779b4 */

void FUN_100b779b4(void)

{
  long unaff_x20;
  
  FUN_100b76a58(*(undefined8 *)(unaff_x20 + 0x10),FUN_100b75d24,FUN_100b82208,FUN_100b81c10);
  return;
}



/* Address: 0x100b779e4 | FUN_100b779e4 */

undefined8 FUN_100b779e4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_101044e00;
  FUN_100b6730c();
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100b77a24 | FUN_100b77a24 */

void FUN_100b77a24(void)

{
  long unaff_x20;
  
  FUN_100b77224(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b77a2c | FUN_100b77a2c */

void FUN_100b77a2c(void)

{
  long unaff_x20;
  
  FUN_100b77664(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b77a34 | FUN_100b77a34 */

void FUN_100b77a34(undefined8 param_1)

{
  undefined8 *unaff_x19;
  
  FUN_100b78d18();
  FUN_100b75f7c();
  *unaff_x19 = param_1;
  FUN_100b56e88(FUN_100b77a60);
  return;
}



/* Address: 0x100b77a60 | FUN_100b77a60 */

void FUN_100b77a60(undefined8 param_1,undefined8 param_2)

{
  FUN_100b77a6c(param_1,param_2,FUN_100b77850);
  return;
}



/* Address: 0x100b77a6c | FUN_100b77a6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b77a6c(undefined8 *param_1,uint param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    (*param_3)();
    FUN_100b78d38(uVar1);
    return;
  }
  (*param_3)();
  FUN_100b56e60();
  return;
}



/* Address: 0x100b77ab4 | FUN_100b77ab4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b77ab4(undefined8 param_1)

{
  long lVar1;
  ID IVar2;
  class_t *self;
  ID IVar3;
  undefined8 uVar4;
  long unaff_x20;
  
  FUN_100b78da0(_TtC6Sentry25SentryDependencyContainer::paramLock);
  FUN_100b78ce8();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::anrTracker;
  IVar2 = *(ID *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::anrTracker);
  IVar3 = IVar2;
  if (IVar2 == 0) {
    self = &objc::class_t::SentryANRTrackerV1;
    _objc_allocWithZone();
    IVar3 = _objc_msgSend((ID)self,"initWithTimeoutInterval:",param_1);
    uVar4 = 0;
    FUN_100b9b6a8(0);
    _objc_allocWithZone();
    FUN_100b78754(IVar3,uVar4);
    *(ID *)(unaff_x20 + lVar1) = IVar3;
    FUN_10021b704();
    FUN_100b78d04();
    IVar2 = 0;
  }
  FUN_100b78ce8(IVar2,"unlock");
  FUN_100b6f868();
  return IVar3;
}



/* Address: 0x100b77ba0 | _TtC6Sentry25SentryDependencyContainer::getANRTracker: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC6Sentry25SentryDependencyContainer::getANRTracker_(ID param_1,SEL param_2,double param_3)

{
  FUN_100b77ab4(param_3);
  return param_1;
}


