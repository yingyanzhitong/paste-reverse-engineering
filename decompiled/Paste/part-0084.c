/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000f6ef8 | FUN_1000f6ef8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

ID FUN_1000f6ef8(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID IVar5;
  undefined *self;
  NSString *pNVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextView+UIKit.swift",0x24,1,7,UVar3.unknown,pMVar1);
  }
  IVar5 = objc_stub::textStorage(param_1);
  if (IVar5 == 0) {
    self = &_OBJC_CLASS___NSTextStorage;
    _objc_allocWithZone();
    pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar5 = objc_stub::initWithString_((ID)self,pNVar6);
    _swift_release(pMVar2);
  }
  else {
    _swift_release(pMVar2);
  }
  return IVar5;
}



/* Address: 0x1000f6fec | FUN_1000f6fec */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000f6fec(void)

{
  ID IVar1;
  undefined *self;
  NSString *pNVar2;
  ID unaff_x20;
  
  IVar1 = objc_stub::textStorage(unaff_x20);
  if (IVar1 == 0) {
    self = &_OBJC_CLASS___NSTextStorage;
    _objc_allocWithZone();
    pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar1 = objc_stub::initWithString_((ID)self,pNVar2);
  }
  return IVar1;
}



/* Address: 0x1000f7054 | FUN_1000f7054 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f7054(ID param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  ID self;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextView+UIKit.swift",0x24,1,8,UVar3.unknown,pMVar1);
  }
  self = objc_stub::textStorage(param_1);
  if (self == 0) {
    _swift_release(pMVar2);
  }
  else {
    objc_stub::setAttributedString_(self,param_3);
    _swift_release(pMVar2);
  }
  return 0;
}



/* Address: 0x1000f7138 | FUN_1000f7138 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f7138(undefined8 param_1)

{
  ID self;
  ID unaff_x20;
  
  self = objc_stub::textStorage(unaff_x20);
  if (self != 0) {
    objc_stub::setAttributedString_(self,param_1);
  }
  return 0;
}



/* Address: 0x1000f7180 | FUN_1000f7180 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_1000f7180(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  NSString *pNVar5;
  String SVar6;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextView+UIKit.swift",0x24,1,0xd,UVar3.unknown,pMVar1);
  }
  pNVar5 = (NSString *)objc_stub::string(param_1);
  if (pNVar5 == (NSString *)0x0) {
    SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_release(pMVar2);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
  }
  else {
    _swift_release(pMVar2);
  }
  return pNVar5;
}



/* Address: 0x1000f7254 | FUN_1000f7254 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000f7254(void)

{
  ID unaff_x20;
  String SVar1;
  
  objc_stub::string(unaff_x20);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  return SVar1;
}



/* Address: 0x1000f72a4 | FUN_1000f72a4 */

void FUN_1000f72a4(ID param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSTextView+UIKit.swift",0x24,1,0xe,UVar3.unknown,pMVar1);
  }
  objc_stub::setString_(param_1,param_3);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f733c | FUN_1000f733c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f733c(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID unaff_x20;
  
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  objc_stub::setString_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x1000f7380 | FUN_1000f7380 */

void FUN_1000f7380(void)

{
  ID unaff_x20;
  
  objc_stub::setNeedsLayout_(unaff_x20,1);
  return;
}



/* Address: 0x1000f738c | FUN_1000f738c */

void FUN_1000f738c(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSView+UIKit.swift",0x20,1,6,UVar3.unknown,pMVar1);
  }
  objc_stub::setNeedsLayout_(param_1,1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f7418 | FUN_1000f7418 */

void FUN_1000f7418(void)

{
  ID unaff_x20;
  
  objc_stub::setNeedsDisplay_(unaff_x20,1);
  return;
}



/* Address: 0x1000f7424 | FUN_1000f7424 */

void FUN_1000f7424(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSView+UIKit.swift",0x20,1,0xb,UVar3.unknown,pMVar1);
  }
  objc_stub::setNeedsDisplay_(param_1,1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f74b0 | FUN_1000f74b0 */

void FUN_1000f74b0(void)

{
  ID unaff_x20;
  
  objc_stub::layoutSubtreeIfNeeded(unaff_x20);
  return;
}



/* Address: 0x1000f74b8 | FUN_1000f74b8 */

void FUN_1000f74b8(ID param_1)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSView+UIKit.swift",0x20,1,0x10,UVar3.unknown,pMVar1);
  }
  objc_stub::layoutSubtreeIfNeeded(param_1);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f7540 | FUN_1000f7540 */

void FUN_1000f7540(void)

{
  ID unaff_x20;
  
  objc_stub::alphaValue(unaff_x20);
  return;
}



/* Address: 0x1000f7548 | FUN_1000f7548 */

void FUN_1000f7548(void)

{
  ID unaff_x20;
  
  objc_stub::setAlphaValue_(unaff_x20);
  return;
}



/* Address: 0x1000f7550 | FUN_1000f7550 */

undefined1  [16] FUN_1000f7550(undefined8 *param_1)

{
  ID unaff_x20;
  undefined8 extraout_d0;
  undefined1 auVar1 [16];
  
  param_1[1] = unaff_x20;
  objc_stub::alphaValue(unaff_x20);
  *param_1 = extraout_d0;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1000f7588;
  return auVar1;
}



/* Address: 0x1000f7588 | FUN_1000f7588 */

void FUN_1000f7588(undefined8 *param_1)

{
  objc_stub::setAlphaValue_(param_1[1],*param_1);
  return;
}



/* Address: 0x1000f7598 | FUN_1000f7598 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1000f7598(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  undefined *puVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar2 = &DAT_100eb7108;
  _swift_allocObject(&DAT_100eb7108,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &DAT_100eb7130;
  _swift_allocObject(&DAT_100eb7130,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_1000f7780;
  *(undefined **)(puVar3 + 0x18) = puVar2;
  local_50 = FUN_1000386a0;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_1000f7788;
  puStack_58 = &DAT_100eb7148;
  local_48 = puVar3;
  aBlock = __Block_copy(&local_70);
  puVar4 = local_48;
  _swift_retain(puVar3);
  _swift_release(puVar4);
  NSAnimationContext::runAnimationGroup_((ID)&_OBJC_CLASS___NSAnimationContext,aBlock);
  __Block_release(aBlock);
  puVar4 = puVar3;
  _swift_isEscapingClosureAtFileLocation(puVar3,"",0x88,0x1d,0x2e,1);
  _swift_release(puVar2);
  _swift_release(puVar3);
  if (((ulong)puVar4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1000f76c8);
  (*pcVar1)();
}



/* Address: 0x1000f76c8 | FUN_1000f76c8 */

void FUN_1000f76c8(ID param_1,code *param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000f6eb4();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PastePlatform/NSView+UIKit.swift",0x20,1,0x1d,UVar3.unknown,pMVar1);
  }
  objc_stub::setDuration_(param_1,0);
  (*param_2)();
  _swift_release(pMVar2);
  return;
}



/* Address: 0x1000f7770 | FUN_1000f7770 */

void FUN_1000f7770(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1000f7780 | FUN_1000f7780 */

void FUN_1000f7780(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000f76c8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000f7788 | FUN_1000f7788 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1000f7788(long param_1,undefined8 param_2)

{
  (**(code **)(param_1 + 0x20))(param_2);
  return 0;
}



/* Address: 0x1000f77c0 | FUN_1000f77c0 */

void FUN_1000f77c0(long param_1,long param_2)

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



/* Address: 0x1000f77d4 | FUN_1000f77d4 */

void FUN_1000f77d4(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1000f77dc | thunk_FUN_1000f7770 */

void thunk_FUN_1000f7770(void)

{
  FUN_1000f7770();
  return;
}



/* Address: 0x1000f77e0 | FUN_1000f77e0 */

undefined8 FUN_1000f77e0(void)

{
  return 0x403e000000000000;
}



/* Address: 0x1000f77e8 | FUN_1000f77e8 */

undefined8 FUN_1000f77e8(void)

{
  return 0x3ff0000000000000;
}



/* Address: 0x1000f77f0 | FUN_1000f77f0 */

undefined8 FUN_1000f77f0(void)

{
  return 3;
}



/* Address: 0x1000f77f8 | FUN_1000f77f8 */

void FUN_1000f77f8(void)

{
  FUN_1000f7a78(FUN_100104fa0);
  return;
}



/* Address: 0x1000f7804 | FUN_1000f7804 */

void FUN_1000f7804(void)

{
  FUN_1000f7830(&DAT_100fae2b8,&DAT_100c2db60);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1000f7830 | FUN_1000f7830 */

void FUN_1000f7830(ulong *param_1,long *param_2)

{
  ulong uVar1;
  
  if (*param_1 == 0 || (*param_1 & 1) != 0) {
    uVar1 = (long)param_2 + (long)(int)*param_2;
    _swift_getTypeByMangledNameInContext(uVar1,*param_2 >> 0x20,0,0);
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x1000f7880 | FUN_1000f7880 */

undefined8 FUN_1000f7880(void)

{
  return 0x8000;
}



/* Address: 0x1000f7888 | FUN_1000f7888 */

undefined8 FUN_1000f7888(void)

{
  return 1000;
}



/* Address: 0x1000f7890 | FUN_1000f7890 */

undefined8 FUN_1000f7890(void)

{
  return 0x14;
}



/* Address: 0x1000f7898 | FUN_1000f7898 */

undefined8 FUN_1000f7898(void)

{
  return 0x32;
}



/* Address: 0x1000f78a0 | FUN_1000f78a0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

String FUN_1000f78a0(void)

{
  ID IVar1;
  String SVar2;
  
  IVar1 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar1 = NSBundle::bundleIdentifier(IVar1);
  if (IVar1 == 0) {
    SVar2.bridgeObject = (void *)0x8000000100d90820;
    SVar2.str = (char *)0xd000000000000013;
  }
  else {
    SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  return SVar2;
}



/* Address: 0x1000f7934 | FUN_1000f7934 */

undefined1  [16] FUN_1000f7934(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  
  FUN_10016c244();
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_1;
  }
  lVar2 = -0x2000000000000000;
  if (param_2 != 0) {
    lVar2 = param_2;
  }
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1000f7958 | FUN_1000f7958 */

void FUN_1000f7958(void)

{
  FUN_1000f8154(PTR___swiftEmptyArrayStorage_100eae0d8);
  return;
}



/* Address: 0x1000f7964 | FUN_1000f7964 */

undefined8 FUN_1000f7964(void)

{
  return 500;
}



/* Address: 0x1000f796c | FUN_1000f796c */

undefined8 FUN_1000f796c(void)

{
  return 0x4024000000000000;
}



/* Address: 0x1000f7974 | FUN_1000f7974 */

void FUN_1000f7974(void)

{
  FUN_1000f79e0(&DAT_100fae2c0,&DAT_100c2e610,FUN_1000f8134);
  return;
}



/* Address: 0x1000f7990 | FUN_1000f7990 */

undefined1  [16] FUN_1000f7990(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x2f732f;
  return auVar1;
}



/* Address: 0x1000f79a0 | FUN_1000f79a0 */

void FUN_1000f79a0(void)

{
  FUN_1000f7a78(FUN_100104fc0);
  return;
}



/* Address: 0x1000f79ac | FUN_1000f79ac */

void FUN_1000f79ac(void)

{
  FUN_1000f7a78(FUN_100110400);
  return;
}



/* Address: 0x1000f79b8 | FUN_1000f79b8 */

void FUN_1000f79b8(void)

{
  FUN_1000f7a78(FUN_10016aa88);
  return;
}



/* Address: 0x1000f79c4 | FUN_1000f79c4 */

void FUN_1000f79c4(void)

{
  FUN_1000f79e0(&DAT_100fae2c8,&DAT_100c2db70,FUN_1000f8134);
  return;
}



/* Address: 0x1000f79e0 | FUN_1000f79e0 */

long FUN_1000f79e0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *self;
  ID IVar1;
  
  FUN_1000f7830();
  _swift_allocObject();
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar1 = objc_stub::init((ID)self);
  *(ID *)(param_1 + 0x10) = IVar1;
  *(undefined8 *)(param_1 + 0x18) = param_3;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return param_1;
}



/* Address: 0x1000f7a2c | FUN_1000f7a2c */

void FUN_1000f7a2c(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSRecursiveLock;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1000f7a48 | FUN_1000f7a48 */

void FUN_1000f7a48(void)

{
  FUN_1000f7d4c(&DAT_100fae2d0,&DAT_100c2db78,&DAT_100fae480,&DAT_100c2de50);
  return;
}



/* Address: 0x1000f7a6c | FUN_1000f7a6c */

void FUN_1000f7a6c(void)

{
  FUN_1000f7a78(FUN_100157a4c);
  return;
}



/* Address: 0x1000f7a78 | FUN_1000f7a78 */

void FUN_1000f7a78(code *param_1)

{
  ID self;
  
  self = 0;
  (*param_1)();
  _objc_allocWithZone();
  objc_stub::init(self);
  return;
}



/* Address: 0x1000f7a98 | FUN_1000f7a98 */

void FUN_1000f7a98(void)

{
  FUN_1000f7d4c(&DAT_100fae2d8,&DAT_100c2db80,&DAT_100fae478,&DAT_100c2de48);
  return;
}



/* Address: 0x1000f7abc | FUN_1000f7abc */

void FUN_1000f7abc(void)

{
  FUN_1000f7d4c(&DAT_100fae2e0,&DAT_100c2db88,&DAT_100fae470,&DAT_100c2de40);
  return;
}



/* Address: 0x1000f7ae0 | FUN_1000f7ae0 */

void FUN_1000f7ae0(void)

{
  AutoreleaseFrequency AVar1;
  QoSClass QVar2;
  undefined7 extraout_var;
  Attributes AVar3;
  DispatchQoS DVar4;
  undefined7 extraout_var_00;
  OS_dispatch_queue *this;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long lVar10;
  Attributes attributes;
  String label;
  char *local_80;
  long local_78;
  long lStack_70;
  undefined *local_68;
  long lVar5;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_70 = CONCAT71(extraout_var,AVar1.value);
  local_78 = *(long *)(lStack_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_78 + 0x40));
  lVar10 = (long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar3 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar3.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar4.unknown + -8) + 0x40));
  QVar2 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,QVar2.value);
  lVar9 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  DVar4.unknown =
       attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  this = (OS_dispatch_queue *)0x0;
  FUN_1000f8a74();
  local_80 = "com.posthog.unknown";
  (**(code **)(lVar9 + 0x68))
            (DVar4.unknown,
             *(undefined4 *)
              PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
             ,lVar5);
  (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar4.unknown);
  (**(code **)(lVar9 + 8))(DVar4.unknown,lVar5);
  Dispatch::DispatchQoS::get_unspecified(DVar4);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar6 = &DAT_100fae2f0;
  FUN_100003a00(&DAT_100fae2f0,PTR__typeMetadataAccessor_100eae788,
                PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar7 = &DAT_100fae2f8;
  FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
  puVar8 = puVar7;
  FUN_1000f8ab8();
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar7,puVar8,AVar3.unknown,puVar6);
  (**(code **)(local_78 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,lStack_70);
  label.bridgeObject = (void *)((ulong)local_80 | 0x8000000000000000);
  label.str = (char *)0xd000000000000021;
  (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
            (this,label,
             (DispatchQoS)(attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
             attributes,(AutoreleaseFrequency)(__int8)lVar10);
  return;
}



/* Address: 0x1000f7d08 | FUN_1000f7d08 */

undefined8 FUN_1000f7d08(void)

{
  return 0x409c200000000000;
}



/* Address: 0x1000f7d18 | FUN_1000f7d18 */

undefined8 FUN_1000f7d18(void)

{
  return 0x40f5180000000000;
}



/* Address: 0x1000f7d28 | FUN_1000f7d28 */

void FUN_1000f7d28(void)

{
  FUN_1000f7d4c(&DAT_100fae308,&DAT_100c2e060,&DAT_100fae430,&DAT_100c2de00);
  return;
}



/* Address: 0x1000f7d4c | FUN_1000f7d4c */

long FUN_1000f7d4c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ID IVar2;
  
  FUN_1000f7830();
  _swift_allocObject();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f83a4(PTR___swiftEmptyArrayStorage_100eae0d8,param_3,param_4);
  *(undefined **)(param_1 + 0x10) = puVar1;
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)puVar1);
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(ID *)(param_1 + 0x18) = IVar2;
  return param_1;
}



/* Address: 0x1000f7dbc | FUN_1000f7dbc */

void FUN_1000f7dbc(void)

{
  FUN_10016ab8c(0);
  _swift_allocObject();
  return;
}



/* Address: 0x1000f7ddc | FUN_1000f7ddc */

bool FUN_1000f7ddc(int *param_1,int *param_2)

{
  return *param_1 == *param_2;
}



/* Address: 0x1000f7df0 | FUN_1000f7df0 */

void FUN_1000f7df0(undefined4 *param_1,undefined4 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1000f7dfc | FUN_1000f7dfc */

void FUN_1000f7dfc(undefined4 *param_1)

{
  *param_1 = 0;
  return;
}



/* Address: 0x1000f7e04 | FUN_1000f7e04 */

void FUN_1000f7e04(uint *param_1,uint *param_2)

{
  uint *unaff_x20;
  
  *param_1 = *unaff_x20 | *param_2;
  return;
}


