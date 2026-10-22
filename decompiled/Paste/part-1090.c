/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b8e400 | FUN_100b8e400 */

void FUN_100b8e400(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::maxBreadcrumbs;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e428 | SentryOptions::setMaxBreadcrumbs: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setMaxBreadcrumbs_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100b8e44c(param_3);
  return;
}



/* Address: 0x100b8e44c | FUN_100b8e44c */

void FUN_100b8e44c(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::maxBreadcrumbs;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e478 | FUN_100b8e478 */

void FUN_100b8e478(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::maxBreadcrumbs;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e4a4 | SentryOptions::enableNetworkBreadcrumbs */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableNetworkBreadcrumbs(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8e4c8();
  return uVar1 & 1;
}



/* Address: 0x100b8e4c8 | FUN_100b8e4c8 */

void FUN_100b8e4c8(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableNetworkBreadcrumbs;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e4f0 | SentryOptions::setEnableNetworkBreadcrumbs: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableNetworkBreadcrumbs_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8e514(param_3);
  return;
}



/* Address: 0x100b8e514 | FUN_100b8e514 */

void FUN_100b8e514(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableNetworkBreadcrumbs;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e540 | FUN_100b8e540 */

void FUN_100b8e540(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableNetworkBreadcrumbs;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e56c | SentryOptions::maxCacheItems */

/* Function Stack Size: 0x10 bytes */

unsigned_long_long SentryOptions::maxCacheItems(ID param_1,SEL param_2)

{
  FUN_100b8e58c();
  return param_1;
}



/* Address: 0x100b8e58c | FUN_100b8e58c */

void FUN_100b8e58c(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::maxCacheItems;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined8 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8e5b4 | SentryOptions::setMaxCacheItems: */

/* Function Stack Size: 0x18 bytes */

void SentryOptions::setMaxCacheItems_(ID param_1,SEL param_2,unsigned_long_long param_3)

{
  FUN_100b8e5d8(param_3);
  return;
}



/* Address: 0x100b8e5d8 | FUN_100b8e5d8 */

void FUN_100b8e5d8(void)

{
  long lVar1;
  undefined8 unaff_x19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::maxCacheItems;
  FUN_100b78c6c();
  *(undefined8 *)(unaff_x20 + lVar1) = unaff_x19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8e604 | FUN_100b8e604 */

void FUN_100b8e604(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::maxCacheItems;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e630 | SentryOptions::beforeSend */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeSend(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8e64c,thunk_FUN_100b90b48,&DAT_100f38668);
  return param_1;
}



/* Address: 0x100b8e64c | FUN_100b8e64c */

void FUN_100b8e64c(void)

{
  FUN_100b9336c(&SentryOptions::beforeSend,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8e660 | SentryOptions::setBeforeSend: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeSend_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38650;
    _swift_allocObject(&DAT_100f38650,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b93d10;
  }
  FUN_100b8e6e0(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8e6e0 | FUN_100b8e6e0 */

void FUN_100b8e6e0(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeSend,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8e6f4 | FUN_100b8e6f4 */

void FUN_100b8e6f4(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeSend);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f389e8;
    _swift_allocObject(&DAT_100f389e8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = FUN_100b93e90;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8e788 | FUN_100b8e788 */

void FUN_100b8e788(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f389c0;
    _swift_allocObject(&DAT_100f389c0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93d94;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeSend);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8e840 | FUN_100b8e840 */

void FUN_100b8e840(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeSend;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8e86c | SentryOptions::beforeSendSpan */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeSendSpan(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8e900,FUN_100b8e914,&DAT_100f38618);
  return param_1;
}



/* Address: 0x100b8e888 | FUN_100b8e888 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

void * FUN_100b8e888(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  void *pvVar1;
  undefined *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  long local_40;
  undefined8 local_38;
  
  FUN_100b94100();
  if (param_1 == 0) {
    pvVar1 = (void *)0x0;
  }
  else {
    local_60 = PTR___NSConcreteStackBlock_100ea82a0;
    local_58 = 0x42000000;
    local_50 = param_4;
    uStack_48 = param_5;
    local_40 = param_1;
    local_38 = param_2;
    pvVar1 = __Block_copy(&local_60);
    _swift_release(local_38);
  }
  return pvVar1;
}



/* Address: 0x100b8e900 | FUN_100b8e900 */

void FUN_100b8e900(void)

{
  FUN_100b9336c(&SentryOptions::beforeSendSpan,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8e914 | FUN_100b8e914 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b8e914(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  uVar3 = param_2;
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
  _swift_unknownObjectRelease(param_2);
  return uVar3;
}



/* Address: 0x100b8e968 | SentryOptions::setBeforeSendSpan: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeSendSpan_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38600;
    _swift_allocObject(&DAT_100f38600,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_100b93d10;
  }
  FUN_100b8e9e8(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8e9e8 | FUN_100b8e9e8 */

void FUN_100b8e9e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeSendSpan,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8e9fc | FUN_100b8e9fc */

void FUN_100b8e9fc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeSendSpan);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f38998;
    _swift_allocObject(&DAT_100f38998,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93db4;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8ea90 | FUN_100b8ea90 */

void FUN_100b8ea90(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f38970;
    _swift_allocObject(&DAT_100f38970,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = FUN_100b93d94;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeSendSpan);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8eb48 | FUN_100b8eb48 */

void FUN_100b8eb48(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeSendSpan;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8eb74 | SentryOptions::enableLogs */

/* Function Stack Size: 0x10 bytes */

bool SentryOptions::enableLogs(ID param_1,SEL param_2)

{
  uint uVar1;
  
  uVar1 = (uint)param_1;
  FUN_100b8eb98();
  return uVar1 & 1;
}



/* Address: 0x100b8eb98 | FUN_100b8eb98 */

void FUN_100b8eb98(void)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = SentryOptions::enableLogs;
  FUN_100b78c58();
  FUN_100b6f9fc(*(undefined1 *)(unaff_x20 + lVar1));
  return;
}



/* Address: 0x100b8ebc0 | SentryOptions::setEnableLogs: */

/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableLogs_(ID param_1,SEL param_2,bool param_3)

{
  FUN_100b8ebe4(param_3);
  return;
}



/* Address: 0x100b8ebe4 | FUN_100b8ebe4 */

void FUN_100b8ebe4(void)

{
  long lVar1;
  undefined1 unaff_w19;
  long unaff_x20;
  
  FUN_100b78d24();
  lVar1 = SentryOptions::enableLogs;
  FUN_100b78c6c();
  *(undefined1 *)(unaff_x20 + lVar1) = unaff_w19;
  FUN_100b78c90();
  return;
}



/* Address: 0x100b8ec10 | FUN_100b8ec10 */

void FUN_100b8ec10(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::enableLogs;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8ec3c | SentryOptions::beforeSendLog */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeSendLog(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8ec58,thunk_FUN_100b90b48,&DAT_100f385c8);
  return param_1;
}



/* Address: 0x100b8ec58 | FUN_100b8ec58 */

void FUN_100b8ec58(void)

{
  FUN_100b9336c(&SentryOptions::beforeSendLog,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8ec6c | thunk_FUN_100b90b48 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_100b90b48(undefined8 param_1)

{
  code *unaff_x21;
  
  FUN_100b940b0();
  FUN_100b78d78();
  (*unaff_x21)();
  _swift_release();
  FUN_100b6faa8();
  return param_1;
}



/* Address: 0x100b8ec70 | SentryOptions::setBeforeSendLog: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeSendLog_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f385b0;
    _swift_allocObject(&DAT_100f385b0,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b93d10;
  }
  FUN_100b8ed18(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8ecf0 | FUN_100b8ecf0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100b8ecf0(undefined8 param_1,long param_2)

{
  (**(code **)(param_2 + 0x10))(param_2,param_1);
  return;
}



/* Address: 0x100b8ed18 | FUN_100b8ed18 */

void FUN_100b8ed18(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeSendLog,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8ed2c | FUN_100b8ed2c */

void FUN_100b8ed2c(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeSendLog);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f38948;
    _swift_allocObject(&DAT_100f38948,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = FUN_100b93db4;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8edc0 | FUN_100b8edc0 */

void FUN_100b8edc0(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f38920;
    _swift_allocObject(&DAT_100f38920,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93d94;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeSendLog);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8ee78 | FUN_100b8ee78 */

void FUN_100b8ee78(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeSendLog;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8eea4 | SentryOptions::beforeBreadcrumb */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeBreadcrumb(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8eec0,thunk_FUN_100b90b48,&DAT_100f38578);
  return param_1;
}



/* Address: 0x100b8eec0 | FUN_100b8eec0 */

void FUN_100b8eec0(void)

{
  FUN_100b9336c(&SentryOptions::beforeBreadcrumb,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8eed4 | SentryOptions::setBeforeBreadcrumb: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeBreadcrumb_(ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38560;
    _swift_allocObject(&DAT_100f38560,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_100b93d10;
  }
  FUN_100b8ef54(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8ef54 | FUN_100b8ef54 */

void FUN_100b8ef54(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeBreadcrumb,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8ef68 | FUN_100b8ef68 */

void FUN_100b8ef68(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeBreadcrumb);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f388f8;
    _swift_allocObject(&DAT_100f388f8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93db4;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8effc | FUN_100b8effc */

void FUN_100b8effc(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f388d0;
    _swift_allocObject(&DAT_100f388d0,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93d94;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeBreadcrumb);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8f0b4 | FUN_100b8f0b4 */

void FUN_100b8f0b4(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeBreadcrumb;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8f0e0 | SentryOptions::beforeCaptureScreenshot */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeCaptureScreenshot(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8f0fc,FUN_100b8f110,&DAT_100f38528);
  return param_1;
}



/* Address: 0x100b8f0fc | FUN_100b8f0fc */

void FUN_100b8f0fc(void)

{
  FUN_100b9336c(&SentryOptions::beforeCaptureScreenshot,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8f110 | FUN_100b8f110 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100b8f110(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  (*pcVar1)(param_2);
  _swift_release(uVar2);
  return (uint)param_2 & 1;
}



/* Address: 0x100b8f168 | SentryOptions::setBeforeCaptureScreenshot: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeCaptureScreenshot_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f38510;
    _swift_allocObject(&DAT_100f38510,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = thunk_FUN_100b93d2c;
  }
  FUN_100b8f1e8(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8f1e8 | FUN_100b8f1e8 */

void FUN_100b8f1e8(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeCaptureScreenshot,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8f1fc | FUN_100b8f1fc */

void FUN_100b8f1fc(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeCaptureScreenshot);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f388a8;
    _swift_allocObject(&DAT_100f388a8,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93e60;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}



/* Address: 0x100b8f290 | FUN_100b8f290 */

void FUN_100b8f290(long *param_1,long *param_2)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined1 auStack_68 [24];
  
  lVar2 = *param_1;
  lVar4 = param_1[1];
  if (lVar2 == 0) {
    pcVar7 = (code *)0x0;
    puVar6 = (undefined *)0x0;
  }
  else {
    puVar6 = &DAT_100f38880;
    _swift_allocObject(&DAT_100f38880,0x20,7);
    *(long *)(puVar6 + 0x10) = lVar2;
    *(long *)(puVar6 + 0x18) = lVar4;
    pcVar7 = thunk_FUN_100b93e28;
  }
  puVar1 = (undefined8 *)(*param_2 + SentryOptions::beforeCaptureScreenshot);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar3 = *puVar1;
  uVar5 = puVar1[1];
  *puVar1 = pcVar7;
  puVar1[1] = puVar6;
  FUN_100011128(lVar2,lVar4);
  FUN_100004550(uVar3,uVar5);
  return;
}



/* Address: 0x100b8f348 | FUN_100b8f348 */

void FUN_100b8f348(void)

{
  long lVar1;
  long unaff_x20;
  
  FUN_100b78cf0();
  lVar1 = SentryOptions::beforeCaptureScreenshot;
  FUN_100b78c80();
  FUN_100b56e88(_swift_endAccess,unaff_x20 + lVar1);
  return;
}



/* Address: 0x100b8f374 | SentryOptions::beforeCaptureViewHierarchy */

/* Function Stack Size: 0x10 bytes */

ID SentryOptions::beforeCaptureViewHierarchy(ID param_1,SEL param_2)

{
  FUN_100b8e888(param_1,param_2,FUN_100b8f390,FUN_100b8f110,&DAT_100f384d8);
  return param_1;
}



/* Address: 0x100b8f390 | FUN_100b8f390 */

void FUN_100b8f390(void)

{
  FUN_100b9336c(&SentryOptions::beforeCaptureViewHierarchy,thunk_FUN_100011128);
  return;
}



/* Address: 0x100b8f3a4 | SentryOptions::setBeforeCaptureViewHierarchy: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryOptions::setBeforeCaptureViewHierarchy_
               (ID param_1,SEL param_2,ID param_3,undefined4 param_4)

{
  void *pvVar1;
  undefined *puVar2;
  code *pcVar3;
  
  pvVar1 = __Block_copy((void *)param_3);
  if (pvVar1 == (void *)0x0) {
    puVar2 = (undefined *)0x0;
    pcVar3 = (code *)0x0;
  }
  else {
    puVar2 = &DAT_100f384c0;
    _swift_allocObject(&DAT_100f384c0,0x18,7);
    *(void **)(puVar2 + 0x10) = pvVar1;
    pcVar3 = FUN_100b93d2c;
  }
  FUN_100b8f424(pcVar3,puVar2);
  return;
}



/* Address: 0x100b8f424 | FUN_100b8f424 */

void FUN_100b8f424(undefined8 param_1,undefined8 param_2)

{
  FUN_100b933d0(param_1,param_2,&SentryOptions::beforeCaptureViewHierarchy,thunk_FUN_100004550);
  return;
}



/* Address: 0x100b8f438 | FUN_100b8f438 */

void FUN_100b8f438(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined1 auStack_48 [24];
  
  plVar1 = (long *)(*param_2 + SentryOptions::beforeCaptureViewHierarchy);
  _swift_beginAccess(plVar1,auStack_48,0,0);
  lVar2 = *plVar1;
  lVar3 = plVar1[1];
  if (lVar2 == 0) {
    pcVar5 = (code *)0x0;
    puVar4 = (undefined *)0x0;
  }
  else {
    puVar4 = &DAT_100f38858;
    _swift_allocObject(&DAT_100f38858,0x20,7);
    *(long *)(puVar4 + 0x10) = lVar2;
    *(long *)(puVar4 + 0x18) = lVar3;
    pcVar5 = thunk_FUN_100b93e60;
  }
  *param_1 = pcVar5;
  param_1[1] = puVar4;
  FUN_100011128(lVar2,lVar3);
  return;
}


