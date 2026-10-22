/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100155df4 | thunk_FUN_100155a44 */

void thunk_FUN_100155a44(void)

{
  long unaff_x20;
  
  objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100155df8 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155dfc | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e00 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e04 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e08 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e0c | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e10 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e14 | thunk_FUN_100155a60 */

void thunk_FUN_100155a60(void)

{
  FUN_100155a60();
  return;
}



/* Address: 0x100155e18 | thunk_FUN_100155b68 */

void thunk_FUN_100155b68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100134e3c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100155e1c | thunk_FUN_10015371c */

long thunk_FUN_10015371c(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  puVar7 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar9 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar9 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar9 = uVar9 & *puVar7;
  if (param_2 == (undefined8 *)0x0) {
    lVar11 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar11 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10015386c);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar10 = 0;
    uVar12 = 0x3f - uVar8 >> 6;
    lVar11 = lVar6;
    while( true ) {
      while (uVar9 == 0) {
        bVar5 = SCARRY8(lVar11,1);
        lVar11 = lVar11 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100153868);
          (*pcVar4)();
        }
        if ((long)uVar12 <= lVar11) {
          uVar9 = 0;
          if ((long)uVar12 <= lVar6 + 1) {
            uVar12 = lVar6 + 1;
          }
          lVar11 = uVar12 - 1;
          param_3 = lVar10;
          goto LAB_10015382c;
        }
        uVar9 = puVar7[lVar11];
      }
      lVar10 = lVar10 + 1;
      uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_4 + 0x30) + LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 0x10 +
               lVar11 * 0x400);
      uVar2 = puVar1[1];
      uVar9 = uVar9 - 1 & uVar9;
      *param_2 = *puVar1;
      param_2[1] = uVar2;
      if (lVar10 == param_3) break;
      _swift_bridgeObjectRetain();
      lVar6 = lVar11;
      param_2 = param_2 + 2;
    }
    _swift_bridgeObjectRetain();
  }
LAB_10015382c:
  *param_1 = param_4;
  param_1[1] = (long)puVar7;
  param_1[2] = ~uVar8;
  param_1[3] = lVar11;
  param_1[4] = uVar9;
  return param_3;
}



/* Address: 0x100155e20 | thunk_FUN_100153aec */

void thunk_FUN_100153aec(void)

{
  FUN_100136574();
  return;
}



/* Address: 0x100155e24 | thunk_FUN_100153abc */

void thunk_FUN_100153abc(void)

{
  FUN_100136574();
  return;
}



/* Address: 0x100155e28 | thunk_FUN_100155b4c */

void thunk_FUN_100155b4c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100137620(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100155e2c | thunk_FUN_1000e8174 */

void thunk_FUN_1000e8174(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000da5cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100155e30 | thunk_FUN_100155ae4 */

void thunk_FUN_100155ae4(void)

{
  FUN_100155ae4();
  return;
}



/* Address: 0x100155e34 | thunk_FUN_100155ae4 */

void thunk_FUN_100155ae4(void)

{
  FUN_100155ae4();
  return;
}



/* Address: 0x100155e38 | thunk_FUN_100155d98 */

void thunk_FUN_100155d98(void)

{
  FUN_100154dcc();
  return;
}



/* Address: 0x100155e3c | thunk_FUN_100155b84 */

void thunk_FUN_100155b84(void)

{
  thunk_FUN_100155b84();
  return;
}



/* Address: 0x100155e40 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  thunk_FUN_1001344b4();
  return;
}



/* Address: 0x100155e44 | thunk_FUN_100155bec */

void thunk_FUN_100155bec(void)

{
  thunk_FUN_100155bec();
  return;
}



/* Address: 0x100155e48 | FUN_100155e48 */

void FUN_100155e48(__int64 param_1,byte param_2)

{
  undefined *puVar1;
  char *pcVar2;
  char *pcVar3;
  Hasher HVar4;
  char *pcVar5;
  String SVar6;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  if (param_2 < 3) {
    puVar1 = (undefined *)0xef64657472617473;
    if (param_2 != 1) {
      puVar1 = (undefined *)0xed00006465646e65;
    }
    pcVar5 = (char *)0xd000000000000014;
    HVar4.unknown = (undefined *)0x8000000100d93b00;
    if (param_2 != 0) {
      pcVar5 = (char *)0x206e6f6973736553;
      HVar4.unknown = puVar1;
    }
  }
  else {
    pcVar5 = (char *)0xd00000000000001b;
    pcVar2 = "Custom session set";
    if (param_2 != 5) {
      pcVar5 = (char *)0xd000000000000012;
      pcVar2 = "New session id created ";
    }
    pcVar3 = "Session timed out";
    if (param_2 != 3) {
      pcVar3 = "Session past maximum length";
    }
    if (param_2 < 5) {
      pcVar5 = (char *)0xd000000000000011;
      pcVar2 = pcVar3;
    }
    HVar4.unknown = (undefined *)((ulong)pcVar2 | 0x8000000000000000);
  }
  SVar6.bridgeObject = HVar4.unknown;
  SVar6.str = pcVar5;
  Swift::String::hash((Hasher)auStack_68,SVar6);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100155f7c | FUN_100155f7c */

bool FUN_100155f7c(ulong param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  return param_2 == 0 || uVar1 == 0;
}



/* Address: 0x100155fa4 | FUN_100155fa4 */

void FUN_100155fa4(void)

{
  undefined1 *unaff_x20;
  
  FUN_100155e48(0,*unaff_x20);
  return;
}



/* Address: 0x100155fb0 | FUN_100155fb0 */

void FUN_100155fb0(Hasher param_1)

{
  void *pvVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  byte *unaff_x20;
  String SVar7;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 3) {
    pvVar1 = (void *)0xef64657472617473;
    if (bVar2 != 1) {
      pvVar1 = (void *)0xed00006465646e65;
    }
    pcVar5 = (char *)0xd000000000000014;
    pvVar6 = (void *)0x8000000100d93b00;
    if (bVar2 != 0) {
      pcVar5 = (char *)0x206e6f6973736553;
      pvVar6 = pvVar1;
    }
  }
  else {
    pcVar5 = (char *)0xd00000000000001b;
    pcVar3 = "Custom session set";
    if (bVar2 != 5) {
      pcVar5 = (char *)0xd000000000000012;
      pcVar3 = "New session id created ";
    }
    pcVar4 = "Session timed out";
    if (bVar2 != 3) {
      pcVar4 = "Session past maximum length";
    }
    if (bVar2 < 5) {
      pcVar5 = (char *)0xd000000000000011;
      pcVar3 = pcVar4;
    }
    pvVar6 = (void *)((ulong)pcVar3 | 0x8000000000000000);
  }
  SVar7.bridgeObject = pvVar6;
  SVar7.str = pcVar5;
  Swift::String::hash(param_1,SVar7);
  _swift_bridgeObjectRelease(pvVar6);
  return;
}



/* Address: 0x1001560c0 | FUN_1001560c0 */

void FUN_1001560c0(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100155e48(param_1,*unaff_x20);
  return;
}



/* Address: 0x1001560c8 | FUN_1001560c8 */

void FUN_1001560c8(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100157d44(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1001560f4 | FUN_1001560f4 */

void FUN_1001560f4(undefined8 *param_1)

{
  undefined8 uVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 3) {
    uVar6 = 0xef64657472617473;
    if (bVar2 != 1) {
      uVar6 = 0xed00006465646e65;
    }
    uVar1 = 0x8000000100d93b00;
    uVar5 = 0xd000000000000014;
    if (bVar2 != 0) {
      uVar1 = uVar6;
      uVar5 = 0x206e6f6973736553;
    }
    *param_1 = uVar5;
    param_1[1] = uVar1;
    return;
  }
  uVar6 = 0xd00000000000001b;
  pcVar3 = "Custom session set";
  if (bVar2 != 5) {
    uVar6 = 0xd000000000000012;
    pcVar3 = "New session id created ";
  }
  pcVar4 = "Session timed out";
  if (bVar2 != 3) {
    pcVar4 = "Session past maximum length";
  }
  if (bVar2 < 5) {
    uVar6 = 0xd000000000000011;
    pcVar3 = pcVar4;
  }
  *param_1 = uVar6;
  param_1[1] = (ulong)pcVar3 | 0x8000000000000000;
  return;
}



/* Address: 0x1001561ec | _TtC7PostHog21PostHogSessionManager::shared */

/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog21PostHogSessionManager::shared(ID param_1,SEL param_2)

{
  if (DAT_100fb0a08 != -1) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  return *(ID *)(DAT_101057308 + _TtC7PostHog10PostHogSDK::sessionManager);
}



/* Address: 0x100156240 | FUN_100156240 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100156240(void)

{
  if (DAT_100fb0a08 != -1) {
    _swift_once(&DAT_100fb0a08,FUN_100139658);
  }
  return *(undefined8 *)(DAT_101057308 + _TtC7PostHog10PostHogSDK::sessionManager);
}



/* Address: 0x100156294 | FUN_100156294 */

void FUN_100156294(void)

{
  undefined8 *puVar1;
  AutoreleaseFrequency AVar2;
  QoSClass QVar3;
  undefined7 extraout_var;
  Attributes AVar4;
  DispatchQoS DVar5;
  undefined7 extraout_var_00;
  OS_dispatch_queue *this;
  undefined *puVar7;
  OS_dispatch_queue *pOVar8;
  undefined *puVar9;
  ID IVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x20;
  long lVar12;
  long lVar13;
  Attributes attributes;
  String label;
  OS_dispatch_queue *local_a0;
  char *local_98;
  long local_90;
  long local_88;
  long lStack_80;
  undefined *local_68;
  long lVar6;
  
  AVar2 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  lStack_80 = CONCAT71(extraout_var,AVar2.value);
  local_88 = *(long *)(lStack_80 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar13 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  AVar4 = Attributes::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(AVar4.unknown + -8) + 0x40));
  attributes.unknown = (undefined *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  DVar5 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(DVar5.unknown + -8) + 0x40));
  QVar3 = Dispatch::DispatchQoS::QoSClass::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var_00,QVar3.value);
  lVar12 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  DVar5.unknown =
       attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0) +
       -(extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::config) = 0;
  local_90 = _TtC7PostHog21PostHogSessionManager::queue;
  this = (OS_dispatch_queue *)0x0;
  FUN_1000f8a74();
  local_98 = "com.posthog.unknown";
  (**(code **)(lVar12 + 0x68))
            (DVar5.unknown,
             *(undefined4 *)
              PTR___enum_case_for_Dispatch_DispatchQoS_QoSClass_utility_Dispatch_DispatchQoS_QoSClass_Type___>_Dispatch_DispatchQoS_QoSClass_100eae698
             ,lVar6);
  local_a0 = (extension_Dispatch)::__C::OS_dispatch_queue::global((QoSClass)(__int8)DVar5.unknown);
  (**(code **)(lVar12 + 8))(DVar5.unknown,lVar6);
  DVar5 = Dispatch::DispatchQoS::get_unspecified(DVar5);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100157b60();
  puVar9 = &DAT_100fae2f8;
  FUN_1000f7830(&DAT_100fae2f8,&DAT_100c2db90);
  puVar7 = puVar9;
  FUN_1000f8ab8();
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar9,puVar7,AVar4.unknown,DVar5.unknown);
  (**(code **)(local_88 + 0x68))
            (lVar13,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,lStack_80);
  label.bridgeObject = (void *)((ulong)local_98 | 0x8000000000000000);
  label.str = (char *)0xd000000000000021;
  pOVar8 = (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                     (this,label,
                      (DispatchQoS)
                      (attributes.unknown + -(extraout_x8_01 + 0xfU & 0xfffffffffffffff0)),
                      attributes,(AutoreleaseFrequency)(__int8)lVar13);
  *(OS_dispatch_queue **)(unaff_x20 + local_90) = pOVar8;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionId);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionStartTimestamp);
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityTimestamp)
  ;
  *puVar1 = 0;
  *(undefined1 *)(puVar1 + 1) = 1;
  lVar6 = _TtC7PostHog21PostHogSessionManager::sessionLock;
  puVar9 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar9);
  *(ID *)(unaff_x20 + lVar6) = IVar10;
  *(undefined1 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::isAppInBackground) = 1;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityThreshold) =
       0x409c200000000000;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionMaxLengthThreshold) =
       0x40f5180000000000;
  lVar6 = _TtC7PostHog21PostHogSessionManager::onSessionIdChanged;
  puVar9 = &DAT_100fae308;
  FUN_1000f7830(&DAT_100fae308,&DAT_100c2e060);
  _swift_allocObject();
  FUN_1000f8140();
  *(undefined **)(puVar9 + 0x10) = puVar11;
  puVar11 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar10 = objc_stub::init((ID)puVar11);
  *(undefined8 *)(puVar9 + 0x20) = 0;
  *(undefined8 *)(puVar9 + 0x28) = 0;
  *(ID *)(puVar9 + 0x18) = IVar10;
  *(undefined **)(unaff_x20 + lVar6) = puVar9;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken) = 0;
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::applicationEventToken) = 0;
  FUN_100157a4c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"init");
  return;
}



/* Address: 0x1001565dc | _TtC7PostHog21PostHogSessionManager::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC7PostHog21PostHogSessionManager::init(ID param_1,SEL param_2)

{
  FUN_100156294();
  return param_1;
}



/* Address: 0x1001565fc | FUN_1001565fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001565fc(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  ID self;
  
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::config) = param_1;
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken);
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken);
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken) = 0;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::applicationEventToken);
  *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::applicationEventToken) = 0;
  _swift_release(uVar1);
  if (DAT_100fae858 != -1) {
    _swift_once(&DAT_100fae858,FUN_1000fbcdc);
  }
  uVar1 = DAT_101057190;
  uVar2 = DAT_101057190;
  _swift_retain(DAT_101057190);
  FUN_1000fbc40();
  _swift_release(uVar1);
  _swift_unknownObjectRelease(uVar2);
  self = *(ID *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionLock);
  objc_stub::lock(self);
  *(undefined1 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::isAppInBackground) = 0;
  objc_stub::unlock(self);
  FUN_100157714();
  return;
}



/* Address: 0x1001566f0 | FUN_1001566f0 */

void FUN_1001566f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  Date DVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  Foundation::Date::init();
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))(puVar3,0,1,DVar2.unknown);
  FUN_100157428(param_1,param_2,puVar3,6);
  FUN_10012bcb8(puVar3);
  return;
}



/* Address: 0x1001567a0 | _TtC7PostHog21PostHogSessionManager::setSessionId: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC7PostHog21PostHogSessionManager::setSessionId_(ID param_1,SEL param_2,ID param_3)

{
  undefined *puVar1;
  Date DVar2;
  long extraout_x8;
  undefined1 *puVar3;
  String SVar4;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &stack0xffffffffffffffd0 + -extraout_x8;
  SVar4 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Foundation::Date::init();
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))(puVar3,0,1,DVar2.unknown);
  FUN_100157428(SVar4.str,SVar4.bridgeObject,puVar3,6);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  FUN_10012bcb8(puVar3);
  return;
}



/* Address: 0x10015687c | FUN_10015687c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_10015687c(void *param_1,uint param_2)

{
  String *pSVar1;
  ulong uVar2;
  char cVar3;
  char cVar4;
  byte bVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  UUID UVar13;
  UUID UVar14;
  Date DVar15;
  char *pcVar16;
  undefined8 uVar17;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID self;
  long lVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  String SVar23;
  String SVar24;
  void *local_b0;
  long local_a8;
  uint local_9c;
  undefined1 auStack_98 [24];
  
  puVar12 = &DAT_100faf508;
  local_9c = param_2;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar12 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a8 = (long)&local_b0 - extraout_x8;
  UVar13 = Foundation::UUID::typeMetadataAccessor();
  lVar19 = *(long *)(UVar13.unknown + -8);
  UVar14 = UVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar19 + 0x40));
  lVar18 = ((long)&local_b0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_b0 = param_1;
  dVar20 = Foundation::Date::get_timeIntervalSince1970((Date)UVar14.unknown);
  self = *(ID *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionLock);
  objc_stub::lock(self);
  pSVar1 = (String *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionId);
  pcVar16 = pSVar1->str;
  UVar14.unknown = pSVar1->bridgeObject;
  SVar8 = *pSVar1;
  SVar7 = *pSVar1;
  SVar6 = *pSVar1;
  SVar24 = *pSVar1;
  SVar23 = *pSVar1;
  dVar22 = *(double *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityTimestamp);
  cVar3 = *(char *)((double *)
                    (unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityTimestamp) + 1)
  ;
  dVar21 = *(double *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionStartTimestamp);
  cVar4 = *(char *)((double *)
                    (unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionStartTimestamp) + 1);
  bVar5 = *(byte *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::isAppInBackground);
  _swift_bridgeObjectRetain(UVar14.unknown);
  objc_stub::unlock(self);
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_98,0,0);
  if ((s_posthog_ios_100fb15a8._0_8_ == -0x2fffffffffffffec) &&
     (ram0x000100fb15b0 == (undefined *)0x8000000100d92b80)) {
    return SVar23;
  }
  bVar11 = Swift::_stringCompareWithSmolCheck
                     ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                      (_StringComparisonResult)0x14);
  if (bVar11) {
    return SVar24;
  }
  if ((local_9c & 1) != 0) {
    return SVar6;
  }
  if ((undefined8 *)UVar14.unknown == (undefined8 *)0x0) {
    if ((bVar5 & 1) == 0) goto LAB_100156ae8;
  }
  else {
    uVar2 = (ulong)pcVar16 & 0xffffffffffff;
    if (((ulong)UVar14.unknown & 0x2000000000000000) != 0) {
      uVar2 = (ulong)UVar14.unknown >> 0x38 & 0xf;
    }
    if (uVar2 == 0 && (bVar5 & 1) == 0) {
LAB_100156ae8:
      _swift_bridgeObjectRelease();
      if (DAT_100fb3060 != -1) {
        UVar14.unknown = (undefined *)&DAT_100fb3060;
        _swift_once(&DAT_100fb3060,FUN_100173f28);
      }
      FUN_100173f94(lVar18);
      SVar23 = Foundation::UUID::get_uuidString(UVar14);
      SVar24 = Swift::String::lowercased(SVar23);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      (**(code **)(lVar19 + 8))(lVar18,UVar13.unknown);
      DVar15 = Foundation::Date::typeMetadataAccessor();
      lVar18 = local_a8;
      lVar19 = *(long *)(DVar15.unknown + -8);
      (**(code **)(lVar19 + 0x10))(local_a8,local_b0,DVar15.unknown);
      (**(code **)(lVar19 + 0x38))(lVar18,0,1,DVar15.unknown);
      FUN_100157428(SVar24.str,SVar24.bridgeObject,lVar18,0);
      FUN_10012bcb8(lVar18);
      return SVar24;
    }
  }
  if (cVar3 != '\x01') {
    dVar22 = dVar20 - dVar22;
    bVar11 = false;
    bVar9 = true;
    bVar10 = false;
    if (0.0 < dVar22) {
      bVar11 = false;
      bVar9 = false;
      bVar10 = true;
      if (!NAN(dVar22)) {
        bVar11 = dVar22 < 1800.0;
        bVar9 = dVar22 == 1800.0;
        bVar10 = false;
      }
    }
    if (!bVar9 && bVar11 == bVar10) {
      _swift_bridgeObjectRelease(UVar14.unknown);
      if (bVar5 == 0) {
        uVar17 = 4;
        goto LAB_100156c1c;
      }
      DVar15 = Foundation::Date::typeMetadataAccessor();
      lVar18 = local_a8;
      (**(code **)(*(long *)(DVar15.unknown + -8) + 0x38))(local_a8,1,1,DVar15.unknown);
      uVar17 = 4;
      goto LAB_100156be4;
    }
  }
  if (cVar4 == '\x01') {
    return SVar7;
  }
  dVar20 = dVar20 - dVar21;
  bVar11 = false;
  bVar9 = true;
  bVar10 = false;
  if (0.0 < dVar20) {
    bVar11 = false;
    bVar9 = false;
    bVar10 = true;
    if (!NAN(dVar20)) {
      bVar11 = dVar20 < 86400.0;
      bVar9 = dVar20 == 86400.0;
      bVar10 = false;
    }
  }
  if (bVar9 || bVar11 != bVar10) {
    return SVar8;
  }
  _swift_bridgeObjectRelease(UVar14.unknown);
  if (bVar5 == 0) {
    uVar17 = 5;
LAB_100156c1c:
    pcVar16 = (char *)0x0;
    FUN_100157244(0,local_b0,uVar17);
    SVar23.bridgeObject = local_b0;
    SVar23.str = pcVar16;
    return SVar23;
  }
  DVar15 = Foundation::Date::typeMetadataAccessor();
  lVar18 = local_a8;
  (**(code **)(*(long *)(DVar15.unknown + -8) + 0x38))(local_a8,1,1,DVar15.unknown);
  uVar17 = 5;
LAB_100156be4:
  FUN_100157428(0,0,lVar18,uVar17);
  FUN_10012bcb8(lVar18);
  return (String)ZEXT816(0);
}



/* Address: 0x100156c48 | FUN_100156c48 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100156c48(code *param_1)

{
  bool bVar1;
  undefined *puVar2;
  UUID UVar3;
  Date DVar4;
  UUID UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_78 + (-0x18 - extraout_x8);
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar10 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_78,0,0);
  if ((s_posthog_ios_100fb15a8._0_8_ != -0x2fffffffffffffec ||
       ram0x000100fb15b0 != (undefined *)0x8000000100d92b80) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                         (_StringComparisonResult)0x14), !bVar1)) {
    UVar5.unknown = (undefined *)Foundation::Date::init();
    if (DAT_100fb3060 != -1) {
      UVar5.unknown = (undefined *)&DAT_100fb3060;
      _swift_once(&DAT_100fb3060,FUN_100173f28);
    }
    FUN_100173f94(lVar10);
    SVar11 = Foundation::UUID::get_uuidString(UVar5);
    SVar12 = Swift::String::lowercased(SVar11);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    (**(code **)(lVar6 + 8))(lVar10,UVar3.unknown);
    (**(code **)(lVar7 + 0x10))(puVar8,lVar9,DVar4.unknown);
    (**(code **)(lVar7 + 0x38))(puVar8,0,1,DVar4.unknown);
    FUN_100157428(SVar12.str,SVar12.bridgeObject,puVar8,1);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    FUN_10012bcb8(puVar8);
    (**(code **)(lVar7 + 8))(lVar9,DVar4.unknown);
    if (param_1 != (code *)0x0) {
      (*param_1)();
    }
  }
  return;
}



/* Address: 0x100156e78 | FUN_100156e78 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100156e78(void)

{
  bool bVar1;
  undefined *puVar2;
  UUID UVar3;
  Date DVar4;
  UUID UVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_78 [24];
  
  puVar2 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffff80 + -extraout_x8;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  lVar9 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar10 = *(long *)(DVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_78,0,0);
  if ((s_posthog_ios_100fb15a8._0_8_ != -0x2fffffffffffffec ||
       ram0x000100fb15b0 != (undefined *)0x8000000100d92b80) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                         (_StringComparisonResult)0x14), !bVar1)) {
    UVar5.unknown = (undefined *)Foundation::Date::init();
    if (DAT_100fb3060 != -1) {
      UVar5.unknown = (undefined *)&DAT_100fb3060;
      _swift_once(&DAT_100fb3060,FUN_100173f28);
    }
    FUN_100173f94(lVar8);
    SVar11 = Foundation::UUID::get_uuidString(UVar5);
    SVar12 = Swift::String::lowercased(SVar11);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    (**(code **)(lVar9 + 8))(lVar8,UVar3.unknown);
    (**(code **)(lVar10 + 0x10))(puVar6,lVar7,DVar4.unknown);
    (**(code **)(lVar10 + 0x38))(puVar6,0,1,DVar4.unknown);
    FUN_100157428(SVar12.str,SVar12.bridgeObject,puVar6,3);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    FUN_10012bcb8(puVar6);
    (**(code **)(lVar10 + 8))(lVar7,DVar4.unknown);
  }
  return;
}



/* Address: 0x100157094 | FUN_100157094 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100157094(void)

{
  double *pdVar1;
  char cVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  Date DVar6;
  Date DVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long unaff_x20;
  undefined1 *puVar9;
  ID self;
  long lVar10;
  long lVar11;
  double dVar12;
  double dVar13;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [24];
  
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar11 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar9 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(s_posthog_ios_100fb15a8,auStack_88,0,0);
  if (s_posthog_ios_100fb15a8._0_8_ == -0x2fffffffffffffec &&
      ram0x000100fb15b0 == (undefined *)0x8000000100d92b80) {
    return;
  }
  bVar5 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)s_posthog_ios_100fb15a8._0_8_,ram0x000100fb15b0,
                     (_StringComparisonResult)0x14);
  if (bVar5) {
    return;
  }
  self = *(ID *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionLock);
  objc_stub::lock(self);
  lVar10 = *(long *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionId + 8);
  pdVar1 = (double *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityTimestamp);
  dVar13 = *pdVar1;
  cVar2 = *(char *)(pdVar1 + 1);
  _swift_bridgeObjectRetain(lVar10);
  objc_stub::unlock(self);
  if (lVar10 == 0) {
    return;
  }
  _swift_bridgeObjectRelease(lVar10);
  DVar7 = Foundation::Date::init();
  dVar12 = Foundation::Date::get_timeIntervalSince1970(DVar7);
  if (cVar2 != '\x01') {
    dVar13 = dVar12 - dVar13;
    bVar5 = false;
    bVar3 = true;
    bVar4 = false;
    if (0.0 < dVar13) {
      bVar5 = false;
      bVar3 = false;
      bVar4 = true;
      if (!NAN(dVar13)) {
        bVar5 = dVar13 < 1800.0;
        bVar3 = dVar13 == 1800.0;
        bVar4 = false;
      }
    }
    if (!bVar3 && bVar5 == bVar4) {
      puVar8 = puVar9;
      FUN_100157244(0,puVar9,4);
      _swift_bridgeObjectRelease(puVar8);
      goto LAB_100157210;
    }
  }
  objc_stub::lock(self);
  *pdVar1 = dVar12;
  *(undefined1 *)(pdVar1 + 1) = 0;
  objc_stub::unlock(self);
LAB_100157210:
  (**(code **)(lVar11 + 8))(puVar9,DVar6.unknown);
  return;
}



/* Address: 0x100157244 | FUN_100157244 */

String FUN_100157244(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  String *pSVar1;
  ulong uVar2;
  char *pcVar3;
  undefined *puVar4;
  UUID UVar5;
  UUID UVar6;
  Date DVar7;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  ID self;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  
  puVar4 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = &stack0xffffffffffffffa0 + -extraout_x8;
  UVar5 = Foundation::UUID::typeMetadataAccessor();
  lVar10 = *(long *)(UVar5.unknown + -8);
  UVar6 = UVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  if ((param_1 & 1) == 0) {
    self = *(ID *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionLock);
    objc_stub::lock(self);
    pSVar1 = (String *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionId);
    pcVar3 = pSVar1->str;
    UVar6.unknown = pSVar1->bridgeObject;
    SVar12 = *pSVar1;
    SVar11 = *pSVar1;
    _swift_bridgeObjectRetain(UVar6.unknown);
    objc_stub::unlock(self);
    if ((undefined8 *)UVar6.unknown == (undefined8 *)0x0) {
      return SVar11;
    }
    uVar2 = (ulong)pcVar3 & 0xffffffffffff;
    if (((ulong)UVar6.unknown & 0x2000000000000000) != 0) {
      uVar2 = (ulong)UVar6.unknown >> 0x38 & 0xf;
    }
    if (uVar2 == 0) {
      return SVar12;
    }
    _swift_bridgeObjectRelease();
  }
  if (DAT_100fb3060 != -1) {
    UVar6.unknown = (undefined *)&DAT_100fb3060;
    _swift_once(&DAT_100fb3060,FUN_100173f28);
  }
  FUN_100173f94(lVar9);
  SVar11 = Foundation::UUID::get_uuidString(UVar6);
  SVar12 = Swift::String::lowercased(SVar11);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  (**(code **)(lVar10 + 8))(lVar9,UVar5.unknown);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar7.unknown + -8);
  (**(code **)(lVar9 + 0x10))(puVar8,param_2,DVar7.unknown);
  (**(code **)(lVar9 + 0x38))(puVar8,0,1,DVar7.unknown);
  FUN_100157428(SVar12.str,SVar12.bridgeObject,puVar8,param_3);
  FUN_10012bcb8(puVar8);
  return SVar12;
}



/* Address: 0x100157428 | FUN_100157428 */

void FUN_100157428(char *param_1,void *param_2,undefined8 param_3,void *param_4)

{
  undefined8 *puVar1;
  double *pdVar2;
  bool bVar3;
  undefined *puVar4;
  Date DVar5;
  Date DVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *extraout_x1;
  _StringGuts _Var9;
  undefined1 *puVar10;
  Date DVar11;
  char *pcVar12;
  void *pvVar13;
  long extraout_x8;
  long unaff_x20;
  ID self;
  undefined8 uVar14;
  long lVar15;
  double dVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String separator;
  undefined auStack_80 [15];
  undefined1 local_71;
  char *local_70;
  void *local_68;
  
  puVar4 = &DAT_100faf508;
  pvVar13 = param_4;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = auStack_80 + -extraout_x8;
  FUN_100104164(param_3,puVar4);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  DVar6.unknown = puVar4;
  DVar11 = DVar5;
  (**(code **)(lVar15 + 0x30))(puVar4,1);
  bVar3 = (int)DVar6.unknown != 1;
  if (bVar3) {
    dVar16 = Foundation::Date::get_timeIntervalSince1970(DVar6);
    (**(code **)(lVar15 + 8))(puVar4,DVar5.unknown);
  }
  else {
    FUN_10012bcb8(puVar4);
    dVar16 = 0.0;
  }
  bVar3 = !bVar3;
  self = *(ID *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionLock);
  objc_stub::lock(self);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionId);
  uVar14 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(uVar14);
  pdVar2 = (double *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionStartTimestamp);
  *pdVar2 = dVar16;
  *(bool *)(pdVar2 + 1) = bVar3;
  pdVar2 = (double *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::sessionActivityTimestamp);
  *pdVar2 = dVar16;
  *(bool *)(pdVar2 + 1) = bVar3;
  objc_stub::unlock(self);
  uVar14 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::onSessionIdChanged);
  _Var9.unknown = extraout_x1;
  _swift_retain(uVar14);
  FUN_1001347d0();
  _swift_release(uVar14);
  if (param_2 == (void *)0x0) {
    local_70 = (char *)0x0;
    local_68 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x21,_Var9);
    pcVar7 = (char *)0xd00000000000001e;
    puVar10 = (undefined1 *)0x8000000100d93a40;
  }
  else {
    local_70 = (char *)0x0;
    local_68 = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x1e,_Var9);
    SVar17.bridgeObject = (void *)0x8000000100d93a60;
    SVar17.str = (char *)0xd000000000000017;
    SVar23.bridgeObject = pvVar13;
    SVar23.str = DVar11.unknown;
    Swift::String::append(SVar17,SVar23);
    SVar18.bridgeObject = param_2;
    SVar18.str = param_1;
    SVar24.bridgeObject = pvVar13;
    SVar24.str = DVar11.unknown;
    Swift::String::append(SVar18,SVar24);
    pcVar7 = (char *)0x2820;
    puVar10 = &SUB_e200000000000000;
  }
  SVar19.bridgeObject = puVar10;
  SVar19.str = pcVar7;
  SVar25.bridgeObject = pvVar13;
  SVar25.str = DVar11.unknown;
  Swift::String::append(SVar19,SVar25);
  local_71 = SUB81(param_4,0);
  pcVar7 = "\x01\x02";
  puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_71,&local_70,&DAT_100eb8de8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar20.bridgeObject = (void *)0xe100000000000000;
  SVar20.str = (char *)0x29;
  SVar26.bridgeObject = puVar4;
  SVar26.str = pcVar7;
  Swift::String::append(SVar20,SVar26);
  pvVar13 = local_68;
  pcVar7 = local_70;
  if (DAT_101057340 == '\x01') {
    pcVar8 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    pcVar8[0x18] = '\x02';
    pcVar8[0x19] = '\0';
    pcVar8[0x1a] = '\0';
    pcVar8[0x1b] = '\0';
    pcVar8[0x1c] = '\0';
    pcVar8[0x1d] = '\0';
    pcVar8[0x1e] = '\0';
    pcVar8[0x1f] = '\0';
    pcVar8[0x10] = '\x01';
    pcVar8[0x11] = '\0';
    pcVar8[0x12] = '\0';
    pcVar8[0x13] = '\0';
    pcVar8[0x14] = '\0';
    pcVar8[0x15] = '\0';
    pcVar8[0x16] = '\0';
    pcVar8[0x17] = '\0';
    local_70 = (char *)0x676f4874736f505b;
    local_68 = (void *)0xea0000000000205d;
    SVar21.bridgeObject = pvVar13;
    SVar21.str = pcVar7;
    SVar27.bridgeObject = puVar4;
    SVar27.str = pcVar12;
    Swift::String::append(SVar21,SVar27);
    *(undefined **)(pcVar8 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(char **)(pcVar8 + 0x20) = local_70;
    *(void **)(pcVar8 + 0x28) = local_68;
    SVar22.bridgeObject = (void *)0x20;
    SVar22.str = pcVar8;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar22,separator);
    _swift_release(pcVar8);
  }
  _swift_bridgeObjectRelease(pvVar13);
  return;
}



/* Address: 0x100157714 | FUN_100157714 */

void FUN_100157714(void)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  
  if (DAT_100fae858 != -1) {
    _swift_once(&DAT_100fae858,FUN_1000fbcdc);
  }
  lVar1 = DAT_101057190;
  lVar2 = DAT_101057190;
  _swift_retain();
  FUN_1000fbc40();
  _swift_release(lVar1);
  uVar7 = *(undefined8 *)(lVar2 + 0x10);
  puVar6 = &DAT_100eb8d00;
  puVar3 = puVar6;
  _swift_allocObject(&DAT_100eb8d00,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  puVar4 = &DAT_100eb8d28;
  _swift_allocObject(&DAT_100eb8d28,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100157b2c;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  _swift_retain(uVar7);
  pcVar5 = FUN_1000e8174;
  FUN_1000f9b3c(FUN_1000e8174,puVar4);
  _swift_release(uVar7);
  _swift_release(puVar4);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken);
  *(code **)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didBecomeActiveToken) = pcVar5;
  _swift_release(uVar7);
  uVar7 = *(undefined8 *)(lVar2 + 0x18);
  _swift_allocObject(&DAT_100eb8d00,0x18,7);
  _swift_unknownObjectWeakInit(puVar6 + 0x10);
  puVar4 = &DAT_100eb8d50;
  _swift_allocObject(&DAT_100eb8d50,0x20,7);
  *(code **)(puVar4 + 0x10) = FUN_100157b58;
  *(undefined **)(puVar4 + 0x18) = puVar6;
  _swift_retain(uVar7);
  pcVar5 = thunk_FUN_1000e8174;
  FUN_1000f9b3c(thunk_FUN_1000e8174,puVar4);
  _swift_release(uVar7);
  _swift_release(puVar4);
  _swift_unknownObjectRelease(lVar2);
  uVar7 = *(undefined8 *)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken);
  *(code **)(unaff_x20 + _TtC7PostHog21PostHogSessionManager::didEnterBackgroundToken) = pcVar5;
  _swift_release(uVar7);
  return;
}



/* Address: 0x1001578a4 | FUN_1001578a4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001578a4(long param_1)

{
  char cVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _TtC7PostHog21PostHogSessionManager::sessionLock;
  if (param_1 != 0) {
    IVar4 = *(ID *)(param_1 + _TtC7PostHog21PostHogSessionManager::sessionLock);
    objc_stub::lock(IVar4);
    lVar3 = _TtC7PostHog21PostHogSessionManager::isAppInBackground;
    cVar1 = *(char *)(param_1 + _TtC7PostHog21PostHogSessionManager::isAppInBackground);
    objc_stub::unlock(IVar4);
    if (cVar1 == '\x01') {
      FUN_100157094();
      IVar4 = *(ID *)(param_1 + lVar2);
      objc_stub::lock(IVar4);
      *(undefined1 *)(param_1 + lVar3) = 0;
      objc_stub::unlock(IVar4);
    }
  }
  return;
}



/* Address: 0x100157960 | FUN_100157960 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157960(long param_1)

{
  byte bVar1;
  long lVar2;
  long lVar3;
  ID IVar4;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  lVar2 = _TtC7PostHog21PostHogSessionManager::sessionLock;
  if (param_1 != 0) {
    IVar4 = *(ID *)(param_1 + _TtC7PostHog21PostHogSessionManager::sessionLock);
    objc_stub::lock(IVar4);
    lVar3 = _TtC7PostHog21PostHogSessionManager::isAppInBackground;
    bVar1 = *(byte *)(param_1 + _TtC7PostHog21PostHogSessionManager::isAppInBackground);
    objc_stub::unlock(IVar4);
    if ((bVar1 & 1) == 0) {
      FUN_100157094();
      IVar4 = *(ID *)(param_1 + lVar2);
      objc_stub::lock(IVar4);
      *(undefined1 *)(param_1 + lVar3) = 1;
      objc_stub::unlock(IVar4);
    }
  }
  return;
}



/* Address: 0x100157a1c | FUN_100157a1c */

void FUN_100157a1c(void)

{
  FUN_100157a4c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100157a4c | FUN_100157a4c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100157a4c(void)

{
  return ZEXT816(0x100f946e8);
}



/* Address: 0x100157a6c | _TtC7PostHog21PostHogSessionManager::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC7PostHog21PostHogSessionManager::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + sessionId + 8));
  _swift_release(*(undefined8 *)(param_1 + onSessionIdChanged));
  _swift_release(*(undefined8 *)(param_1 + didBecomeActiveToken));
  _swift_release(*(undefined8 *)(param_1 + didEnterBackgroundToken));
  _swift_release(*(undefined8 *)(param_1 + applicationEventToken));
  return;
}



/* Address: 0x100157b08 | FUN_100157b08 */

void FUN_100157b08(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100157b2c | FUN_100157b2c */

void FUN_100157b2c(void)

{
  FUN_1001578a4();
  return;
}



/* Address: 0x100157b34 | FUN_100157b34 */

void FUN_100157b34(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100157b58 | FUN_100157b58 */

void FUN_100157b58(void)

{
  FUN_100157960();
  return;
}



/* Address: 0x100157b60 | FUN_100157b60 */

void FUN_100157b60(void)

{
  Attributes AVar1;
  undefined *puVar2;
  
  if (DAT_100fae2f0 != (undefined *)0x0) {
    return;
  }
  AVar1 = Attributes::_typeMetadataAccessor();
  puVar2 = PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798;
  _swift_getWitnessTable(PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798,AVar1.unknown);
  DAT_100fae2f0 = puVar2;
  return;
}



/* Address: 0x100157ba4 | FUN_100157ba4 */

void FUN_100157ba4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100157bb0 | FUN_100157bb0 */

int FUN_100157bb0(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xf9 < param_2) {
    iVar2 = 2;
    if (0xfffeff < param_2 + 6) {
      iVar2 = 4;
    }
    if (param_2 + 6 >> 8 < 0xff) {
      iVar2 = 1;
    }
    if (iVar2 == 4) {
      uVar1 = *(uint *)(param_1 + 1);
    }
    else {
      if (iVar2 == 2) {
        uVar1 = (uint)*(ushort *)(param_1 + 1);
        if (*(ushort *)(param_1 + 1) == 0) goto LAB_100157c2c;
        goto LAB_100157c10;
      }
      uVar1 = (uint)param_1[1];
    }
    if (uVar1 != 0) {
LAB_100157c10:
      return ((uint)*param_1 | uVar1 << 8) - 6;
    }
  }
LAB_100157c2c:
  iVar2 = *param_1 - 7;
  if (*param_1 < 7) {
    iVar2 = -1;
  }
  return iVar2 + 1;
}



/* Address: 0x100157c40 | FUN_100157c40 */

void FUN_100157c40(char *param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = 2;
  if (0xfffeff < param_3 + 6) {
    uVar3 = 4;
  }
  if (param_3 + 6 >> 8 < 0xff) {
    uVar3 = 1;
  }
  uVar2 = 0;
  if (0xf9 < param_3) {
    uVar2 = uVar3;
  }
  if (param_2 < 0xfa) {
    if (uVar2 < 2) {
      if (uVar2 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_100157cc0;
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
LAB_100157cc0:
      *param_1 = (char)param_2 + '\x06';
      return;
    }
  }
  else {
    iVar1 = (param_2 - 0xfa >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfa);
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



/* Address: 0x100157cf0 | FUN_100157cf0 */

undefined1  [16] FUN_100157cf0(void)

{
  return ZEXT816(0x100eb8de8);
}



/* Address: 0x100157d00 | thunk_FUN_100157d04 */

void thunk_FUN_100157d04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb0de8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f090,&DAT_100eb8de8);
  DAT_100fb0de8 = pTVar1;
  return;
}



/* Address: 0x100157d04 | FUN_100157d04 */

void FUN_100157d04(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb0de8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2f090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2f090,&DAT_100eb8de8);
  DAT_100fb0de8 = pTVar1;
  return;
}



/* Address: 0x100157d44 | FUN_100157d44 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100157d80 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100157d44(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fafc18,&DAT_100c2e750);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x100157da8 | thunk_FUN_100157b34 */

void thunk_FUN_100157b34(void)

{
  FUN_100157b34();
  return;
}



/* Address: 0x100157dac | FUN_100157dac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157dac(void)

{
  code *pcVar1;
  URL UVar2;
  ID IVar3;
  URL UVar4;
  long extraout_x8;
  long lVar5;
  String SVar6;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  IVar3 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  IVar3 = NSFileManager::URLsForDirectory_inDomains_(IVar3,0xe,1);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  if (*(long *)(IVar3 + 0x10) != 0) {
    UVar4 = UVar2;
    (**(code **)(lVar5 + 0x10))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               IVar3 + ((ulong)*(byte *)(lVar5 + 0x50) + 0x20 &
                       ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff)));
    _swift_bridgeObjectRelease(IVar3);
    IVar3 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    IVar3 = NSBundle::bundleIdentifier(IVar3);
    if (IVar3 == 0) {
      SVar6.bridgeObject = (void *)0x8000000100d90820;
      SVar6.str = (char *)0xd000000000000013;
    }
    else {
      SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    Foundation::URL::appendingPathComponent(SVar6,UVar4);
    _swift_bridgeObjectRelease(SVar6.bridgeObject);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
    return;
  }
  _swift_bridgeObjectRelease(IVar3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100157f44);
  (*pcVar1)();
}



/* Address: 0x100157f44 | FUN_100157f44 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100157f44(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  bool bVar3;
  URL UVar4;
  undefined *puVar5;
  ID IVar6;
  NSString *pNVar7;
  URL UVar8;
  undefined8 uVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  char *pcVar16;
  code *pcVar17;
  void *pvVar18;
  code *pcVar19;
  long lVar20;
  String SVar21;
  String SVar22;
  char *local_b0;
  undefined *local_a8;
  long local_a0;
  undefined8 local_98;
  long local_90;
  byte local_81;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar14 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar20 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar20 - extraout_x12;
  puVar5 = &DAT_100fae670;
  local_90 = lVar10;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar5 + -8) + 0x40));
  lVar10 = lVar10 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar12 = lVar10 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar12 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar11 - extraout_x12_02;
  puVar1 = (undefined8 *)(param_2 + PostHogConfig::appGroupIdentifier);
  _swift_beginAccess(puVar1,auStack_80,0,0);
  pvVar18 = (void *)puVar1[1];
  if (pvVar18 == (void *)0x0) {
    (**(code **)(lVar14 + 0x38))(param_1,1,1,UVar4.unknown);
    goto LAB_100158370;
  }
  pcVar16 = (char *)*puVar1;
  local_a0 = lVar20;
  local_98 = param_1;
  _swift_bridgeObjectRetain(pvVar18);
  local_a8 = &_OBJC_CLASS___NSFileManager;
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  local_b0 = pcVar16;
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar8.unknown =
       (undefined *)NSFileManager::containerURLForSecurityApplicationGroupIdentifier_(IVar6,pNVar7);
  if (UVar8.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  }
  pcVar17 = *(code **)(lVar14 + 0x38);
  (*pcVar17)(lVar12,UVar8.unknown == (undefined *)0x0,1,UVar4.unknown);
  FUN_100123b94(lVar12,lVar11);
  pcVar13 = *(code **)(lVar14 + 0x30);
  lVar12 = lVar11;
  UVar8 = UVar4;
  (*pcVar13)(lVar11,1);
  uVar2 = local_98;
  bVar3 = (int)lVar12 != 1;
  if (bVar3) {
    SVar22.bridgeObject = (void *)0x8000000100d93f10;
    SVar22.str = (char *)0xd00000000000001c;
    Foundation::URL::appendingPathComponent(SVar22,UVar8);
    (**(code **)(lVar14 + 8))(lVar11,UVar4.unknown);
  }
  else {
    FUN_1000fb4c4(lVar11,&DAT_100fae670,&DAT_100c2e0e8);
  }
  (*pcVar17)(lVar15,!bVar3,1,UVar4.unknown);
  FUN_1000f8cac(lVar15,lVar10,&DAT_100fae670,&DAT_100c2e0e8);
  lVar12 = lVar10;
  UVar8 = UVar4;
  (*pcVar13)(lVar10,1);
  lVar11 = local_a0;
  if ((int)lVar12 == 1) {
    FUN_1000fb4c4(lVar15,&DAT_100fae670,&DAT_100c2e0e8);
    _swift_bridgeObjectRelease(pvVar18);
    FUN_1000fb4c4(lVar10,&DAT_100fae670,&DAT_100c2e0e8);
LAB_10015835c:
    uVar9 = 1;
  }
  else {
    SVar21.bridgeObject = pvVar18;
    SVar21.str = local_b0;
    Foundation::URL::appendingPathComponent(SVar21,UVar8);
    _swift_bridgeObjectRelease(pvVar18);
    pcVar19 = *(code **)(lVar14 + 8);
    (*pcVar19)(lVar10,UVar4.unknown);
    lVar10 = local_90;
    pcVar13 = *(code **)(lVar14 + 0x20);
    (*pcVar13)(local_90,lVar11,UVar4.unknown);
    FUN_1001726a0(lVar10);
    FUN_1001583ac(lVar15,lVar10);
    local_81 = 0;
    UVar8.unknown = (undefined *)objc_stub::defaultManager(local_a8);
    SVar22 = Foundation::URL::get_path(UVar8);
    pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    IVar6 = objc_stub::fileExistsAtPath_isDirectory_((ID)UVar8.unknown,pNVar7,&local_81);
    FUN_1000fb4c4(lVar15,&DAT_100fae670,&DAT_100c2e0e8);
    if (((int)IVar6 == 0) || ((local_81 & 1) == 0)) {
      (*pcVar19)(lVar10,UVar4.unknown);
      goto LAB_10015835c;
    }
    (*pcVar13)(uVar2,lVar10,UVar4.unknown);
    uVar9 = 0;
  }
  (*pcVar17)(uVar2,uVar9,1,UVar4.unknown);
LAB_100158370:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1001583ac | FUN_1001583ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001583ac(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  undefined *puVar2;
  URL UVar3;
  ID IVar4;
  undefined1 *puVar5;
  URL UVar6;
  NSString *pNVar7;
  ulong uVar8;
  char *pcVar9;
  void *pvVar10;
  _StringGuts _Var11;
  char *pcVar12;
  char *pcVar13;
  char *pcVar14;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar16;
  ulong uVar17;
  long lVar18;
  long lVar19;
  code *pcVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
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
  String separator;
  String SVar36;
  String SVar37;
  String SVar38;
  String separator_00;
  undefined1 auStack_90 [8];
  undefined *local_88;
  undefined8 local_80;
  char *local_78;
  void *local_70;
  long local_68;
  void *pvVar15;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fae670;
  local_88 = param_2;
  FUN_1000f7830(&DAT_100fae670,&DAT_100c2e0e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar16 = auStack_90 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar19 = (long)puVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  uVar17 = lVar19 - extraout_x12;
  IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  IVar4 = NSBundle::bundleIdentifier(IVar4);
  if (IVar4 == 0) {
    SVar21.bridgeObject = (void *)0x8000000100d90820;
    SVar21.str = (char *)0xd000000000000013;
  }
  else {
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  }
  FUN_1000f8cac(param_1,puVar16,&DAT_100fae670,&DAT_100c2e0e8);
  puVar5 = puVar16;
  UVar6 = UVar3;
  (**(code **)(lVar18 + 0x30))(puVar16,1);
  if ((int)puVar5 == 1) {
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    FUN_1000fb4c4(puVar16,&DAT_100fae670,&DAT_100c2e0e8);
    goto LAB_100158a64;
  }
  Foundation::URL::appendingPathComponent(SVar21,UVar6);
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  pcVar20 = *(code **)(lVar18 + 8);
  (*pcVar20)(puVar16,UVar3.unknown);
  (**(code **)(lVar18 + 0x20))(uVar17,lVar19,UVar3.unknown);
  local_78 = (char *)((ulong)local_78 & 0xffffffffffffff00);
  UVar6.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  SVar21 = Foundation::URL::get_path(UVar6);
  pNVar7 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  IVar4 = NSFileManager::fileExistsAtPath_isDirectory_((ID)UVar6.unknown,pNVar7,&local_78);
  if (((int)IVar4 != 0) && (((ulong)local_78 & 1) != 0)) {
    IVar4 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
    NSBundle::bundlePath(IVar4);
    SVar21 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar10 = SVar21.bridgeObject;
    SVar23.bridgeObject = &DAT_e600000000000000;
    SVar23.str = (char *)0x78657070612e;
    _Var11.unknown = &DAT_e600000000000000;
    bVar1 = Swift::String::hasSuffix(SVar23,SVar21);
    _swift_bridgeObjectRelease(pvVar10);
    if (bVar1) {
      pcVar13 = &DAT_100fb0d00;
      FUN_1000f7830(&DAT_100fb0d00,&DAT_100c2efa8);
      _Var11.unknown = &DAT_100fb1040;
      _swift_initStaticObject();
      local_78 = (char *)0x0;
      local_70 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x50,_Var11);
      SVar22.bridgeObject = (void *)0x8000000100d93f30;
      SVar22.str = (char *)0xd000000000000017;
      Swift::String::append(SVar22,SVar21);
      FUN_100129b64();
      SVar23 = Swift::CustomStringConvertible::get_description();
      Swift::String::append(SVar23,SVar21);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      SVar24.bridgeObject = (void *)0x8000000100d93fc0;
      SVar24.str = (char *)0xd000000000000026;
      Swift::String::append(SVar24,SVar21);
      local_80 = 7;
      SVar23 = Swift::CustomStringConvertible::get_description();
      Swift::String::append(SVar23,SVar21);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      pvVar15 = SVar21.bridgeObject;
      SVar25.bridgeObject = (void *)0xef297379656b2079;
      SVar25.str = (char *)0x7469746e65646920;
      Swift::String::append(SVar25,SVar21);
      pvVar10 = local_70;
      pcVar9 = local_78;
      if (DAT_101057340 == '\x01') {
        pcVar14 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar12 = (char *)0x7;
        _swift_allocObject();
        pcVar14[0x18] = '\x02';
        pcVar14[0x19] = '\0';
        pcVar14[0x1a] = '\0';
        pcVar14[0x1b] = '\0';
        pcVar14[0x1c] = '\0';
        pcVar14[0x1d] = '\0';
        pcVar14[0x1e] = '\0';
        pcVar14[0x1f] = '\0';
        pcVar14[0x10] = '\x01';
        pcVar14[0x11] = '\0';
        pcVar14[0x12] = '\0';
        pcVar14[0x13] = '\0';
        pcVar14[0x14] = '\0';
        pcVar14[0x15] = '\0';
        pcVar14[0x16] = '\0';
        pcVar14[0x17] = '\0';
        local_78 = (char *)0x676f4874736f505b;
        local_70 = (void *)0xea0000000000205d;
        SVar26.bridgeObject = pvVar10;
        SVar26.str = pcVar9;
        SVar34.bridgeObject = pvVar15;
        SVar34.str = pcVar12;
        Swift::String::append(SVar26,SVar34);
        *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar14 + 0x20) = local_78;
LAB_1001588e8:
        *(void **)(pcVar14 + 0x28) = local_70;
        SVar30.bridgeObject = (void *)0x20;
        SVar30.str = pcVar14;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        pvVar15 = (void *)0xa;
        Swift::_print(SVar30,separator);
        _swift_release(pcVar14);
      }
    }
    else {
      local_78 = (char *)0x0;
      local_70 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var11);
      SVar27.bridgeObject = (void *)0x8000000100d93f30;
      SVar27.str = (char *)0xd000000000000017;
      Swift::String::append(SVar27,SVar21);
      FUN_100129b64();
      SVar23 = Swift::CustomStringConvertible::get_description();
      Swift::String::append(SVar23,SVar21);
      _swift_bridgeObjectRelease(SVar23.bridgeObject);
      pvVar15 = SVar21.bridgeObject;
      SVar28.bridgeObject = (void *)0x8000000100d93f50;
      SVar28.str = (char *)0xd00000000000002f;
      Swift::String::append(SVar28,SVar21);
      pvVar10 = local_70;
      pcVar9 = local_78;
      pcVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (DAT_101057340 == '\x01') {
        pcVar14 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar13 = (char *)0x7;
        _swift_allocObject();
        pcVar14[0x18] = '\x02';
        pcVar14[0x19] = '\0';
        pcVar14[0x1a] = '\0';
        pcVar14[0x1b] = '\0';
        pcVar14[0x1c] = '\0';
        pcVar14[0x1d] = '\0';
        pcVar14[0x1e] = '\0';
        pcVar14[0x1f] = '\0';
        pcVar14[0x10] = '\x01';
        pcVar14[0x11] = '\0';
        pcVar14[0x12] = '\0';
        pcVar14[0x13] = '\0';
        pcVar14[0x14] = '\0';
        pcVar14[0x15] = '\0';
        pcVar14[0x16] = '\0';
        pcVar14[0x17] = '\0';
        local_78 = (char *)0x676f4874736f505b;
        local_70 = (void *)0xea0000000000205d;
        SVar29.bridgeObject = pvVar10;
        SVar29.str = pcVar9;
        SVar35.bridgeObject = pvVar15;
        SVar35.str = pcVar13;
        Swift::String::append(SVar29,SVar35);
        *(undefined **)(pcVar14 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar14 + 0x20) = local_78;
        pcVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        goto LAB_1001588e8;
      }
    }
    _swift_bridgeObjectRelease(pvVar10);
    _Var11.unknown = local_88;
    pcVar9 = pcVar13;
    FUN_100158aa0(uVar17);
    _swift_bridgeObjectRelease(pcVar13);
    uVar8 = uVar17;
    FUN_100159718();
    if ((uVar8 & 1) != 0) {
      local_78 = (char *)0x0;
      local_70 = (void *)0xe000000000000000;
      Swift::_StringGuts::grow(0x35,_Var11);
      SVar31.bridgeObject = (void *)0x8000000100d93f80;
      SVar31.str = (char *)0xd000000000000033;
      SVar36.bridgeObject = pvVar15;
      SVar36.str = pcVar9;
      Swift::String::append(SVar31,SVar36);
      FUN_100129b64();
      SVar21 = Swift::CustomStringConvertible::get_description();
      SVar37.bridgeObject = pvVar15;
      SVar37.str = pcVar9;
      Swift::String::append(SVar21,SVar37);
      _swift_bridgeObjectRelease(SVar21.bridgeObject);
      pvVar10 = local_70;
      pcVar13 = local_78;
      if (DAT_101057340 == '\x01') {
        pcVar9 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        pcVar14 = (char *)0x7;
        _swift_allocObject();
        pcVar9[0x18] = '\x02';
        pcVar9[0x19] = '\0';
        pcVar9[0x1a] = '\0';
        pcVar9[0x1b] = '\0';
        pcVar9[0x1c] = '\0';
        pcVar9[0x1d] = '\0';
        pcVar9[0x1e] = '\0';
        pcVar9[0x1f] = '\0';
        pcVar9[0x10] = '\x01';
        pcVar9[0x11] = '\0';
        pcVar9[0x12] = '\0';
        pcVar9[0x13] = '\0';
        pcVar9[0x14] = '\0';
        pcVar9[0x15] = '\0';
        pcVar9[0x16] = '\0';
        pcVar9[0x17] = '\0';
        local_78 = (char *)0x676f4874736f505b;
        local_70 = (void *)0xea0000000000205d;
        SVar32.bridgeObject = pvVar10;
        SVar32.str = pcVar13;
        SVar38.bridgeObject = pvVar15;
        SVar38.str = pcVar14;
        Swift::String::append(SVar32,SVar38);
        *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        *(char **)(pcVar9 + 0x20) = local_78;
        *(void **)(pcVar9 + 0x28) = local_70;
        SVar33.bridgeObject = (void *)0x20;
        SVar33.str = pcVar9;
        separator_00.bridgeObject = (void *)0xa;
        separator_00.str = (char *)0xe100000000000000;
        Swift::_print(SVar33,separator_00);
        _swift_bridgeObjectRelease(pvVar10);
        _swift_release(pcVar9);
      }
      else {
        _swift_bridgeObjectRelease(local_70);
      }
    }
  }
  (*pcVar20)(uVar17,UVar3.unknown);
LAB_100158a64:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100158aa0 | FUN_100158aa0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100158aa0(undefined8 param_1,undefined8 param_2,long param_3)

{
  bool bVar1;
  URL UVar2;
  URL UVar3;
  NSURL *pNVar4;
  char *pcVar5;
  NSString *pNVar6;
  ID IVar7;
  _StringGuts _Var8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined *extraout_x1;
  char *pcVar12;
  URL UVar13;
  char *pcVar14;
  char *pcVar15;
  void *pvVar16;
  undefined *puVar17;
  long extraout_x8;
  long lVar18;
  char **ppcVar19;
  long extraout_x12;
  long extraout_x12_00;
  code *pcVar20;
  ulong uVar21;
  _StringGuts _Var22;
  char *pcVar23;
  undefined *puVar24;
  char *pcVar25;
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
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String separator;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  String separator_00;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  char *local_1d0 [29];
  char *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  char *local_d0;
  char *local_c8;
  char *local_c0;
  char *local_b8;
  char *local_b0;
  char *local_a8;
  char *local_a0;
  undefined8 uStack_98;
  char *local_90;
  char *local_88;
  char *local_80;
  char *pcStack_78;
  char *local_70;
  char *pcStack_68;
  
  local_70 = *(char **)PTR____stack_chk_guard_100ea82f0;
  UVar2 = Foundation::URL::typeMetadataAccessor();
  local_d0 = *(char **)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_d0 + 0x40));
  puVar10 = (undefined *)((long)&local_1e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar24 = puVar10 + -extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_a0 = puVar24 + -extraout_x12_00;
  local_e0 = param_2;
  FUN_1001726a0(param_2);
  local_a8 = &_OBJC_CLASS___NSFileManager;
  UVar3.unknown = (undefined *)NSFileManager::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar4 = Foundation::URL::_bridgeToObjectiveC(UVar3);
  local_88 = (char *)0x0;
  pvVar16 = (void *)0x0;
  pcVar5 = (char *)NSFileManager::contentsOfDirectoryAtURL_includingPropertiesForKeys_options_error_
                             ((ID)UVar3.unknown,pNVar4,0,0,&local_88);
  if (pcVar5 == (char *)0x0) {
    pcVar12 = local_88;
    _Var8.unknown = extraout_x1;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    local_88 = (char *)0x0;
    local_80 = (char *)0xe000000000000000;
    Swift::_StringGuts::grow(0x2a,_Var8);
    UVar2.unknown = (undefined *)0xd000000000000024;
    SVar26.bridgeObject = (void *)0x8000000100d94020;
    SVar26.str = (char *)0xd000000000000024;
    SVar41.bridgeObject = pvVar16;
    SVar41.str = (char *)pNVar4;
    Swift::String::append(SVar26,SVar41);
    SVar26 = Foundation::URL::get_path(UVar2);
    SVar42.bridgeObject = pvVar16;
    SVar42.str = (char *)pNVar4;
    Swift::String::append(SVar26,SVar42);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    SVar32.bridgeObject = &SUB_e200000000000000;
    SVar32.str = (char *)0x203a;
    SVar43.bridgeObject = pvVar16;
    SVar43.str = (char *)pNVar4;
    Swift::String::append(SVar32,SVar43);
    puVar10 = &DAT_100faf510;
    local_90 = pcVar12;
    FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
    puVar24 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_90,&local_88,puVar10,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pcVar23 = local_80;
    pcVar5 = local_88;
    if (DAT_101057340 == '\x01') {
      pcVar11 = &DAT_100fae660;
      FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
      pcVar15 = (char *)0x7;
      _swift_allocObject();
      pcVar11[0x18] = '\x02';
      pcVar11[0x19] = '\0';
      pcVar11[0x1a] = '\0';
      pcVar11[0x1b] = '\0';
      pcVar11[0x1c] = '\0';
      pcVar11[0x1d] = '\0';
      pcVar11[0x1e] = '\0';
      pcVar11[0x1f] = '\0';
      pcVar11[0x10] = '\x01';
      pcVar11[0x11] = '\0';
      pcVar11[0x12] = '\0';
      pcVar11[0x13] = '\0';
      pcVar11[0x14] = '\0';
      pcVar11[0x15] = '\0';
      pcVar11[0x16] = '\0';
      pcVar11[0x17] = '\0';
      local_88 = (char *)0x676f4874736f505b;
      local_80 = (char *)0xea0000000000205d;
      SVar33.bridgeObject = pcVar23;
      SVar33.str = pcVar5;
      SVar44.bridgeObject = puVar24;
      SVar44.str = pcVar15;
      Swift::String::append(SVar33,SVar44);
      *(undefined **)(pcVar11 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(pcVar11 + 0x20) = local_88;
      *(char **)(pcVar11 + 0x28) = local_80;
      SVar34.bridgeObject = (void *)0x20;
      SVar34.str = pcVar11;
      separator_00.bridgeObject = (void *)0xa;
      separator_00.str = (char *)0xe100000000000000;
      Swift::_print(SVar34,separator_00);
      _swift_bridgeObjectRelease(pcVar23);
      _swift_errorRelease(pcVar12);
      _swift_release(pcVar11);
    }
    else {
      _swift_bridgeObjectRelease(local_80);
      _swift_errorRelease(pcVar12);
    }
  }
  else {
    (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
    local_b0 = *(char **)(pcVar5 + 0x10);
    if (local_b0 != (char *)0x0) {
      pcVar23 = (char *)0x0;
      local_c0 = pcVar5 + ((ulong)(byte)local_d0[0x50] + 0x20 &
                          ((ulong)(byte)local_d0[0x50] ^ 0xffffffffffffffff));
      local_c8 = (char *)0x0;
      local_1d0[0x1a] = (char *)0x8000000100d93bc0;
      local_1d0[0x1b] = (char *)0x8000000100d93ba0;
      local_1d0[0x18] = (char *)0x8000000100d93c00;
      local_1d0[0x19] = (char *)0x8000000100d93be0;
      local_1d0[0x17] = (char *)0x8000000100d93c20;
      local_1d0[0x16] = (char *)0x8000000100d93c40;
      local_1d0[0x15] = (char *)0x8000000100d93c60;
      local_1d0[0x14] = (char *)0x8000000100d927b0;
      local_1d0[0x13] = (char *)0x8000000100d92790;
      local_1d0[0x12] = (char *)0x8000000100d92770;
      local_1d0[0x11] = (char *)0x8000000100d93c90;
      local_1d0[0x10] = (char *)0x8000000100d93cb0;
      local_1d0[0xf] = (char *)0x8000000100d93cd0;
      local_1d0[0xe] = (char *)0x8000000100d93cf0;
      local_1d0[0xd] = (char *)0x8000000100d93d10;
      local_1d0[0xc] = (char *)0x8000000100d93d30;
      local_1d0[0xb] = (char *)0x8000000100d93d50;
      local_1d0[10] = (char *)0x8000000100d93d70;
      local_1d0[9] = (char *)0x8000000100d93da0;
      local_1d0[8] = (char *)0x8000000100d93dc0;
      local_1d0[7] = (char *)0x8000000100d93880;
      local_1d0[6] = (char *)0x8000000100d93de0;
      local_1d0[5] = (char *)0x8000000100d93e00;
      local_1d0[4] = (char *)0x8000000100d93e20;
      local_1d0[3] = (char *)0x8000000100d93e40;
      local_1d0[2] = (char *)0x8000000100d93e60;
      uStack_1d8 = 2;
      local_1e0 = 1;
      local_1d0[1] = (char *)0x8000000100d93e80;
      local_1d0[0] = (char *)0x8000000100d93ea0;
      local_1d0[0x1c] = (char *)(param_3 + 0x20);
      local_e8 = "rectory contents at ";
      pcVar12 = local_d0;
      local_d8 = puVar10;
      local_b8 = pcVar5;
      do {
        pcVar5 = local_a0;
        if (*(char **)(local_b8 + 0x10) <= pcVar23) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100159698);
          (*pcVar20)();
        }
        (**(code **)(pcVar12 + 0x10))
                  (local_a0,local_c0 + *(long *)(pcVar12 + 0x48) * (long)pcVar23,UVar2.unknown);
        UVar3.unknown = puVar24;
        UVar13 = UVar2;
        (**(code **)(pcVar12 + 0x20))(puVar24,pcVar5);
        SVar26 = Foundation::URL::get_lastPathComponent(UVar3);
        Foundation::URL::appendingPathComponent(SVar26,UVar13);
        _swift_bridgeObjectRelease(SVar26.bridgeObject);
        uStack_98._7_1_ = '\0';
        UVar3.unknown = (undefined *)objc_stub::defaultManager((ID)local_a8);
        SVar26 = Foundation::URL::get_path(UVar3);
        pNVar6 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar26.bridgeObject);
        pcVar5 = (char *)((long)&uStack_98 + 7);
        IVar7 = objc_stub::fileExistsAtPath_isDirectory_((ID)UVar3.unknown,pNVar6);
        if ((int)IVar7 != 0) {
          if (uStack_98._7_1_ == '\x01') {
            FUN_100158aa0(puVar24,puVar10,param_3);
            FUN_100159718(puVar24);
          }
          else {
            SVar26 = Foundation::URL::get_lastPathComponent((URL)0x0);
            pcVar12 = SVar26.bridgeObject;
            pcVar15 = SVar26.str;
            lVar18 = *(long *)(param_3 + 0x10);
            pcVar11 = local_1d0[0x1c];
            if (lVar18 != 0) {
              do {
                lVar18 = lVar18 + -1;
                _Var8.unknown = &DAT_2e676f6874736f70;
                _Var22.unknown = (char *)0xed00007367616c66;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*pcVar11) {
                case '\0':
                  _Var8.unknown = (char *)0xd000000000000012;
                  ppcVar19 = &local_d0;
                  break;
                case '\x01':
                  _Var8.unknown = (char *)0xd000000000000013;
                  ppcVar19 = &local_c8;
                  break;
                case '\x02':
                  _Var8.unknown = (char *)0xd000000000000018;
                  ppcVar19 = &local_c0;
                  break;
                case '\x03':
                  _Var8.unknown = (char *)0xd000000000000013;
                  ppcVar19 = &local_b8;
                  break;
                case '\x04':
                  _Var8.unknown = (char *)0xd000000000000013;
                  ppcVar19 = &local_b0;
                  break;
                case '\x05':
                  _Var8.unknown = (char *)0xd000000000000019;
                  ppcVar19 = &local_a8;
                  break;
                case '\x06':
                  _Var8.unknown = (char *)0xd000000000000014;
                  ppcVar19 = &local_a0;
                  break;
                case '\a':
                  _Var8.unknown = (char *)0xd00000000000001a;
                  ppcVar19 = (char **)&uStack_98;
                  break;
                case '\b':
                  _Var8.unknown = (char *)0xd000000000000012;
                  ppcVar19 = &local_90;
                  break;
                case '\t':
                  _Var8.unknown = (char *)0xd00000000000001b;
                  ppcVar19 = &local_88;
                  break;
                case '\n':
                  _Var8.unknown = (char *)0xd000000000000022;
                  ppcVar19 = &local_80;
                  break;
                case '\v':
                  goto switchD_100159040_caseD_b;
                case '\f':
                  uVar21 = 0x7370756f7267;
                  goto LAB_1001590c8;
                case '\r':
                  _Var8.unknown = (char *)0xd00000000000001a;
                  ppcVar19 = &pcStack_78;
                  break;
                case '\x0e':
                  uVar21 = 0x74754f74706f;
LAB_1001590c8:
                  _Var22.unknown = (undefined *)(uVar21 | 0xee00000000000000);
                  _Var8.unknown = &DAT_2e676f6874736f70;
                  goto joined_r0x0001001590d0;
                case '\x0f':
                  _Var8.unknown = (char *)0xd000000000000015;
                  ppcVar19 = &local_70;
                  break;
                case '\x10':
                  _Var8.unknown = (char *)0xd000000000000014;
                  ppcVar19 = &pcStack_68;
                  break;
                case '\x11':
                  _Var8.unknown = (char *)0xd00000000000001f;
                  ppcVar19 = (char **)&stack0xffffffffffffffa0;
                  break;
                case '\x12':
                  _Var8.unknown = (char *)0xd000000000000014;
                  ppcVar19 = (char **)&stack0xffffffffffffffa8;
                  break;
                case '\x13':
                  _Var8.unknown = (char *)0xd000000000000012;
                  ppcVar19 = (char **)&stack0xffffffffffffffb0;
                  break;
                case '\x14':
                  _Var8.unknown = (char *)0xd00000000000001a;
                  ppcVar19 = (char **)&stack0xffffffffffffffb8;
                  break;
                case '\x15':
                  _Var8.unknown = (char *)0xd000000000000011;
                  ppcVar19 = (char **)&stack0xffffffffffffffc0;
                  break;
                case '\x16':
                  _Var8.unknown = (char *)0xd000000000000013;
                  ppcVar19 = (char **)&stack0xffffffffffffffc8;
                  break;
                case '\x17':
                  _Var8.unknown = (char *)0xd00000000000001f;
                  ppcVar19 = (char **)&stack0xffffffffffffffd0;
                  break;
                case '\x18':
                  _Var8.unknown = (char *)0xd000000000000020;
                  ppcVar19 = (char **)&stack0xffffffffffffffd8;
                  break;
                case '\x19':
                  _Var8.unknown = (char *)0xd00000000000001f;
                  ppcVar19 = (char **)&stack0xffffffffffffffe0;
                  break;
                case '\x1a':
                  _Var8.unknown = (char *)0xd000000000000015;
                  ppcVar19 = (char **)&stack0xffffffffffffffe8;
                  break;
                case '\x1b':
                  _Var8.unknown = (char *)0xd00000000000001a;
                  _Var22.unknown = local_1d0[0x18];
                  if (pcVar15 != (char *)0xd00000000000001a) goto LAB_1001592c0;
                  goto LAB_1001592b8;
                case '\x1c':
                  _Var8.unknown = (char *)0xd000000000000010;
                  _Var22.unknown = local_1d0[0x19];
                  if (pcVar15 == (char *)0xd000000000000010) goto LAB_1001592b8;
                  goto LAB_1001592c0;
                case '\x1d':
                  _Var8.unknown = (char *)0xd000000000000018;
                  _Var22.unknown = local_1d0[0x1a];
                  goto switchD_100159040_caseD_b;
                case '\x1e':
                  _Var8.unknown = (char *)0xd00000000000001d;
                  _Var22.unknown = local_1d0[0x1b];
                  if (pcVar15 == (char *)0xd00000000000001d) goto LAB_1001592b8;
                  goto LAB_1001592c0;
                }
                _Var22.unknown = ppcVar19[-0x20];
                if (_Var8.unknown == pcVar15) {
LAB_1001592b8:
                  if (_Var22.unknown == pcVar12) {
                    _swift_bridgeObjectRelease(pcVar12);
                    pcVar25 = &DAT_00000001;
                    pcVar12 = _Var22.unknown;
                    goto LAB_100159310;
                  }
                }
LAB_1001592c0:
                pcVar5 = pcVar12;
                bVar1 = Swift::_stringCompareWithSmolCheck
                                  (_Var8,_Var22,(_StringComparisonResult)(__int8)SVar26.str);
                pcVar25 = (char *)(ulong)bVar1;
                _swift_bridgeObjectRelease(_Var22.unknown);
                if ((bVar1) || (pcVar11 = pcVar11 + 1, lVar18 == 0)) goto LAB_100159310;
              } while( true );
            }
            pcVar25 = (char *)0x0;
LAB_100159310:
            _swift_bridgeObjectRelease(pcVar12);
            pcVar11 = local_c8;
            puVar10 = local_d8;
            _Var8.unknown = local_d8;
            FUN_100159a44(puVar24);
            pcVar12 = local_d0;
            local_c8 = pcVar11;
            if (pcVar11 != (char *)0x0) {
              local_c8 = (char *)0x0;
              local_88 = (char *)0x0;
              local_80 = (char *)0xe000000000000000;
              Swift::_StringGuts::grow(0x28,_Var8);
              UVar3.unknown = (undefined *)0xd00000000000001c;
              SVar27.bridgeObject = (void *)((ulong)local_e8 | 0x8000000000000000);
              SVar27.str = (char *)0xd00000000000001c;
              SVar35.bridgeObject = pcVar5;
              SVar35.str = pcVar25;
              Swift::String::append(SVar27,SVar35);
              SVar26 = Foundation::URL::get_path(UVar3);
              SVar36.bridgeObject = pcVar5;
              SVar36.str = pcVar25;
              Swift::String::append(SVar26,SVar36);
              _swift_bridgeObjectRelease(SVar26.bridgeObject);
              UVar3.unknown = (undefined *)0x206f7420;
              SVar28.bridgeObject = &DAT_e400000000000000;
              SVar28.str = (char *)0x206f7420;
              SVar37.bridgeObject = pcVar5;
              SVar37.str = pcVar25;
              Swift::String::append(SVar28,SVar37);
              SVar26 = Foundation::URL::get_path(UVar3);
              SVar38.bridgeObject = pcVar5;
              SVar38.str = pcVar25;
              Swift::String::append(SVar26,SVar38);
              _swift_bridgeObjectRelease(SVar26.bridgeObject);
              SVar29.bridgeObject = &SUB_e200000000000000;
              SVar29.str = (char *)0x203a;
              SVar39.bridgeObject = pcVar5;
              SVar39.str = pcVar25;
              Swift::String::append(SVar29,SVar39);
              local_90 = pcVar11;
              puVar9 = &DAT_100faf510;
              FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
              puVar17 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
              Swift::__print_unlocked
                        (&local_90,&local_88,puVar9,
                         PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                         PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                        );
              pcVar15 = local_80;
              pcVar5 = local_88;
              if (DAT_101057340 == '\x01') {
                pcVar25 = &DAT_100fae660;
                FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
                pcVar14 = (char *)0x7;
                _swift_allocObject();
                puVar10 = local_d8;
                *(undefined8 *)(pcVar25 + 0x18) = uStack_1d8;
                *(undefined8 *)(pcVar25 + 0x10) = local_1e0;
                local_88 = (char *)0x676f4874736f505b;
                local_80 = (char *)0xea0000000000205d;
                SVar30.bridgeObject = pcVar15;
                SVar30.str = pcVar5;
                SVar40.bridgeObject = puVar17;
                SVar40.str = pcVar14;
                Swift::String::append(SVar30,SVar40);
                *(undefined **)(pcVar25 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
                *(char **)(pcVar25 + 0x20) = local_88;
                *(char **)(pcVar25 + 0x28) = local_80;
                SVar31.bridgeObject = (void *)0x20;
                SVar31.str = pcVar25;
                separator.bridgeObject = (void *)0xa;
                separator.str = (char *)0xe100000000000000;
                Swift::_print(SVar31,separator);
                _swift_release(pcVar25);
              }
              _swift_errorRelease(pcVar11);
              _swift_bridgeObjectRelease(pcVar15);
            }
          }
        }
        pcVar23 = pcVar23 + 1;
        pcVar20 = *(code **)(pcVar12 + 8);
        (*pcVar20)(puVar10,UVar2.unknown);
        (*pcVar20)(puVar24,UVar2.unknown);
      } while (pcVar23 != local_b0);
    }
    _swift_bridgeObjectRelease();
  }
  if (*(char **)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
switchD_100159040_caseD_b:
joined_r0x0001001590d0:
  if (pcVar15 != _Var8.unknown) goto LAB_1001592c0;
  goto LAB_1001592b8;
}


