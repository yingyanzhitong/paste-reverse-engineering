/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b74eb0 | FUN_100b74eb0 */

void FUN_100b74eb0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b74ebc | FUN_100b74ebc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b74ebc(void)

{
  return 0;
}



/* Address: 0x100b74ee4 | FUN_100b74ee4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_100b74ee4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100b74f28 | FUN_100b74f28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100b74f28(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  param_1[2] = uVar1;
  return param_1;
}



/* Address: 0x100b74f94 | FUN_100b74f94 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100b74f94(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  return param_1;
}



/* Address: 0x100b74fe0 | FUN_100b74fe0 */

int FUN_100b74fe0(ulong *param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    iVar1 = -1;
  }
  else if ((param_2 < 0x7fffffff) || (*(char *)((long)param_1 + 0x19) == '\0')) {
    uVar2 = *param_1;
    if (0xfffffffe < uVar2) {
      uVar2 = 0xffffffff;
    }
    iVar1 = (int)uVar2 + -1;
    if (iVar1 < 0) {
      iVar1 = -1;
    }
  }
  else {
    iVar1 = (int)*param_1 + 0x7ffffffe;
  }
  return iVar1 + 1;
}



/* Address: 0x100b75034 | FUN_100b75034 */

void FUN_100b75034(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x100b7508c | FUN_100b7508c */

void FUN_100b7508c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100b75098 | FUN_100b75098 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_100b75098(void)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend((ID)&_OBJC_CLASS___NSApplication,"sharedApplication");
  return IVar1;
}



/* Address: 0x100b750c4 | FUN_100b750c4 */

void FUN_100b750c4(void)

{
  FUN_100b750e4();
  return;
}



/* Address: 0x100b750e4 | FUN_100b750e4 */

void FUN_100b750e4(undefined8 param_1)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"addListener:",param_1);
  return;
}



/* Address: 0x100b750f8 | FUN_100b750f8 */

void FUN_100b750f8(void)

{
  FUN_100b75118();
  return;
}



/* Address: 0x100b75118 | FUN_100b75118 */

void FUN_100b75118(undefined8 param_1)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"removeListener:",param_1);
  return;
}



/* Address: 0x100b7512c | FUN_100b7512c */

void FUN_100b7512c(void)

{
  FUN_100b7514c();
  return;
}



/* Address: 0x100b7514c | FUN_100b7514c */

void FUN_100b7514c(void)

{
  ID unaff_x20;
  
  _objc_msgSend(unaff_x20,"clear");
  return;
}



/* Address: 0x100b7515c | FUN_100b7515c */

void FUN_100b7515c(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  DAT_101044d08 = _objc_msgSend((ID)self,"init");
  return;
}



/* Address: 0x100b7518c | FUN_100b7518c */

void FUN_100b7518c(ID param_1)

{
  FUN_100b78b14();
  _objc_allocWithZone();
  DAT_101044d10 = _objc_msgSend(param_1,"init");
  return;
}



/* Address: 0x100b751b8 | _TtC6Sentry25SentryDependencyContainer::startOptions */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::startOptions(ID param_1,SEL param_2)

{
  FUN_100b751ec();
  return param_1;
}



/* Address: 0x100b751ec | FUN_100b751ec */

void FUN_100b751ec(void)

{
  long unaff_x20;
  undefined8 uVar1;
  
  FUN_100b78da0(_TtC6Sentry25SentryDependencyContainer::paramLock);
  FUN_100b78ce8();
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  FUN_100b78d04();
  FUN_100b78ce8();
  FUN_100b6f868();
  FUN_100b56e60(uVar1);
  return;
}



/* Address: 0x100b75248 | _TtC6Sentry25SentryDependencyContainer::setStartOptions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setStartOptions_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b75288(param_3);
  return;
}



/* Address: 0x100b75288 | FUN_100b75288 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b75288(long param_1)

{
  long lVar1;
  long unaff_x20;
  ID self;
  
  self = *(ID *)(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::paramLock);
  lVar1 = param_1;
  FUN_10021b704();
  _objc_msgSend(self,"lock");
  *(long *)(lVar1 + _TtC6Sentry25SentryDependencyContainer::_startOptions) = param_1;
  FUN_100b78d30();
  FUN_100b78d60(0,"unlock");
  FUN_100b6faa8();
  FUN_100b6faa8();
  return 0;
}



/* Address: 0x100b7531c | FUN_100b7531c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b7531c(undefined8 *param_1)

{
  FUN_100b75288(*param_1);
  return;
}



/* Address: 0x100b7534c | FUN_100b7534c */

code * FUN_100b7534c(long param_1)

{
  undefined8 *unaff_x19;
  undefined8 uVar1;
  
  FUN_100b78d18();
  FUN_10021b704();
  FUN_100b78d60();
  uVar1 = *(undefined8 *)(param_1 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  FUN_100b78d30();
  FUN_100b78d60();
  FUN_100b6f868();
  *unaff_x19 = uVar1;
  return FUN_100b753c0;
}



/* Address: 0x100b753c0 | FUN_100b753c0 */

void FUN_100b753c0(undefined8 *param_1,uint param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  if ((param_2 & 1) != 0) {
    FUN_100b78d78();
    FUN_100b75288(uVar1);
    FUN_100b78d38(param_1);
    return;
  }
  FUN_100b75288(uVar1);
  FUN_100b56e60();
  return;
}



/* Address: 0x100b75404 | FUN_100b75404 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100b75404(void)

{
  undefined8 uVar1;
  
  if (DAT_101042da8 != -1) {
    _swift_once(&DAT_101042da8,FUN_100b7515c);
  }
  _objc_msgSend(DAT_101044d08,"lock");
  if (DAT_101042db0 != -1) {
    _swift_once(&DAT_101042db0,FUN_100b7518c);
  }
  uVar1 = DAT_101044d10;
  FUN_100b78ce8(DAT_101044d10,"unlock");
  FUN_100b6faa8();
  FUN_100b56e88(uVar1);
  return;
}



/* Address: 0x100b754a8 | _TtC6Sentry25SentryDependencyContainer::sharedInstance */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::sharedInstance(ID param_1,SEL param_2)

{
  FUN_100b75404();
  return param_1;
}



/* Address: 0x100b754bc | FUN_100b754bc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b754bc(void)

{
  if (DAT_101042da8 != -1) {
    _swift_once(&DAT_101042da8,FUN_100b7515c);
  }
  _objc_msgSend(DAT_101044d08,"lock");
  FUN_100b75544();
  FUN_100b78ce8();
  return 0;
}



/* Address: 0x100b75544 | FUN_100b75544 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b75544(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  
  if (DAT_101042db0 != -1) {
    _swift_once(&DAT_101042db0,FUN_100b7518c);
  }
  lVar2 = _TtC6Sentry25SentryDependencyContainer::reachability;
  lVar1 = DAT_101044d10;
  uVar3 = *(undefined8 *)(DAT_101044d10 + _TtC6Sentry25SentryDependencyContainer::_startOptions);
  _swift_beginAccess(DAT_101044d10 + _TtC6Sentry25SentryDependencyContainer::reachability,auStack_68
                     ,0,0);
  FUN_100bed950(*(undefined8 *)(lVar1 + lVar2));
  _objc_allocWithZone();
  DAT_101044d10 = _objc_msgSend(param_1,"init");
  *(undefined8 *)(DAT_101044d10 + _TtC6Sentry25SentryDependencyContainer::_startOptions) = uVar3;
  return 0;
}



/* Address: 0x100b7563c | _TtC6Sentry25SentryDependencyContainer::reset */

/* Function Stack Size: 0x10 bytes */

void _TtC6Sentry25SentryDependencyContainer::reset(ID param_1,SEL param_2)

{
  _swift_getObjCClassMetadata();
  FUN_100b754bc();
  return;
}



/* Address: 0x100b75660 | _TtC6Sentry25SentryDependencyContainer::application */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::application(ID param_1,SEL param_2)

{
  FUN_100b75098();
  return param_1;
}



/* Address: 0x100b75694 | FUN_100b75694 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

char * FUN_100b75694(void)

{
  long lVar1;
  char *pcVar2;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::___lazy_storage___sessionDispatchQueue;
  pcVar2 = *(char **)(unaff_x20 +
                     _TtC6Sentry25SentryDependencyContainer::___lazy_storage___sessionDispatchQueue)
  ;
  if (pcVar2 == (char *)0x0) {
    FUN_100bb06f4();
    _objc_allocWithZone();
    pcVar2 = "io.sentry.session-tracker";
    FUN_100bb04d0();
    *(char **)(unaff_x20 + lVar1) = pcVar2;
  }
  return pcVar2;
}



/* Address: 0x100b7570c | FUN_100b7570c */

void FUN_100b7570c(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  FUN_100b78ca0(unaff_x20 + _TtC6Sentry25SentryDependencyContainer::dateProvider,auStack_48);
  lVar1 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  uVar5 = *(undefined8 *)(unaff_x20 + lVar2);
  lVar2 = unaff_x20 + _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  FUN_100b78ca0(lVar2,auStack_60);
  uVar6 = *(undefined8 *)(unaff_x20 + lVar1);
  FUN_100b78d78();
  _swift_unknownObjectRetain(uVar5);
  uVar3 = uVar6;
  _swift_unknownObjectRetain(uVar6);
  FUN_100b75694();
  uVar4 = 0;
  FUN_100b80b30(0);
  FUN_100b6f90c();
  FUN_100b7fb34(lVar2,FUN_100b75098,0,uVar5,uVar6,uVar3,uVar4);
  FUN_100b56ee0();
  return;
}



/* Address: 0x100b757b4 | _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper(ID param_1,SEL param_2)

{
  FUN_100b757d4();
  return param_1;
}



/* Address: 0x100b757d4 | FUN_100b757d4 */

void FUN_100b757d4(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b757fc | _TtC6Sentry25SentryDependencyContainer::setDispatchQueueWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setDispatchQueueWrapper_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100b75840(param_3);
  return;
}



/* Address: 0x100b75840 | FUN_100b75840 */

void FUN_100b75840(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b7586c | FUN_100b7586c */

void FUN_100b7586c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dispatchQueueWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75898 | _TtC6Sentry25SentryDependencyContainer::random */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

long _TtC6Sentry25SentryDependencyContainer::random(void)

{
  long in_x0;
  
  FUN_100b758b8();
  return in_x0;
}



/* Address: 0x100b758b8 | FUN_100b758b8 */

void FUN_100b758b8(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::random);
  return;
}



/* Address: 0x100b758c4 | _TtC6Sentry25SentryDependencyContainer::setRandom: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setRandom_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b75904(param_3);
  return;
}



/* Address: 0x100b75904 | FUN_100b75904 */

void FUN_100b75904(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::random);
  return;
}



/* Address: 0x100b75910 | FUN_100b75910 */

void FUN_100b75910(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::random;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b7593c | _TtC6Sentry25SentryDependencyContainer::threadWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::threadWrapper(ID param_1,SEL param_2)

{
  FUN_100b7595c();
  return param_1;
}



/* Address: 0x100b7595c | FUN_100b7595c */

void FUN_100b7595c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::threadWrapper;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b75984 | _TtC6Sentry25SentryDependencyContainer::setThreadWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setThreadWrapper_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b759c8(param_3);
  return;
}



/* Address: 0x100b759c8 | FUN_100b759c8 */

void FUN_100b759c8(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b759f4 | FUN_100b759f4 */

void FUN_100b759f4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::threadWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75a20 | _TtC6Sentry25SentryDependencyContainer::binaryImageCache */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::binaryImageCache(ID param_1,SEL param_2)

{
  FUN_100b75a40();
  return param_1;
}



/* Address: 0x100b75a40 | FUN_100b75a40 */

void FUN_100b75a40(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = _TtC6Sentry25SentryDependencyContainer::binaryImageCache;
  FUN_100b78c58();
  FUN_100b78cc8(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b75a68 | _TtC6Sentry25SentryDependencyContainer::setBinaryImageCache: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setBinaryImageCache_(ID param_1,SEL param_2,ID param_3)

{
  FUN_100b75aac(param_3);
  return;
}



/* Address: 0x100b75aac | FUN_100b75aac */

void FUN_100b75aac(void)

{
  FUN_100b78d24();
  FUN_100b78c6c();
  FUN_100b78cbc();
  FUN_100b78c90();
  return;
}



/* Address: 0x100b75ad8 | FUN_100b75ad8 */

void FUN_100b75ad8(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::binaryImageCache;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75b04 | _TtC6Sentry25SentryDependencyContainer::dateProvider */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::dateProvider(ID param_1,SEL param_2)

{
  FUN_100b75b24();
  return param_1;
}



/* Address: 0x100b75b24 | FUN_100b75b24 */

void FUN_100b75b24(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::dateProvider);
  return;
}



/* Address: 0x100b75b30 | _TtC6Sentry25SentryDependencyContainer::setDateProvider: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setDateProvider_(ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b75b70(param_3);
  return;
}



/* Address: 0x100b75b70 | FUN_100b75b70 */

void FUN_100b75b70(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::dateProvider);
  return;
}



/* Address: 0x100b75b7c | FUN_100b75b7c */

void FUN_100b75b7c(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::dateProvider;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75ba8 | _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper(ID param_1,SEL param_2)

{
  FUN_100b75bc8();
  return param_1;
}



/* Address: 0x100b75bc8 | FUN_100b75bc8 */

void FUN_100b75bc8(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper);
  return;
}



/* Address: 0x100b75bd4 | _TtC6Sentry25SentryDependencyContainer::setNotificationCenterWrapper: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC6Sentry25SentryDependencyContainer::setNotificationCenterWrapper_
               (ID param_1,SEL param_2,ID param_3)

{
  _swift_unknownObjectRetain(param_3);
  FUN_100b75c14(param_3);
  return;
}



/* Address: 0x100b75c14 | FUN_100b75c14 */

void FUN_100b75c14(undefined8 param_1)

{
  FUN_100b7686c(param_1,&_TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper);
  return;
}



/* Address: 0x100b75c20 | FUN_100b75c20 */

void FUN_100b75c20(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = _TtC6Sentry25SentryDependencyContainer::notificationCenterWrapper;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b75c4c | _TtC6Sentry25SentryDependencyContainer::processInfoWrapper */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID _TtC6Sentry25SentryDependencyContainer::processInfoWrapper(ID param_1,SEL param_2)

{
  FUN_100b75c6c();
  return param_1;
}



/* Address: 0x100b75c6c | FUN_100b75c6c */

void FUN_100b75c6c(void)

{
  FUN_100b767f0(&_TtC6Sentry25SentryDependencyContainer::processInfoWrapper);
  return;
}


