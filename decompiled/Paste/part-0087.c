/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000fb548 | FUN_1000fb548 */

undefined1 FUN_1000fb548(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogRageClickConfig::enabled;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::enabled,auStack_38,0,0);
  return *(undefined1 *)(unaff_x20 + lVar1);
}



/* Address: 0x1000fb588 | PostHogRageClickConfig::setEnabled: */

/* Function Stack Size: 0x14 bytes */

void PostHogRageClickConfig::setEnabled_(ID param_1,SEL param_2,bool param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = enabled;
  _swift_beginAccess(param_1 + enabled,auStack_48,1,0);
  *(char *)(param_1 + lVar1) = (char)param_3;
  return;
}



/* Address: 0x1000fb5d8 | FUN_1000fb5d8 */

void FUN_1000fb5d8(undefined1 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogRageClickConfig::enabled;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::enabled,auStack_48,1,0);
  *(undefined1 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1000fb624 | FUN_1000fb624 */

undefined1  [16] FUN_1000fb624(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogRageClickConfig::enabled;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::enabled,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1000fb664 | PostHogRageClickConfig::thresholdPoints */

/* Function Stack Size: 0x10 bytes */

double PostHogRageClickConfig::thresholdPoints(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = thresholdPoints;
  _swift_beginAccess(param_1 + thresholdPoints,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}



/* Address: 0x1000fb6a8 | FUN_1000fb6a8 */

undefined8 FUN_1000fb6a8(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogRageClickConfig::thresholdPoints;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::thresholdPoints,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1000fb6e8 | PostHogRageClickConfig::setThresholdPoints: */

/* Function Stack Size: 0x18 bytes */

void PostHogRageClickConfig::setThresholdPoints_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = thresholdPoints;
  _swift_beginAccess(param_1 + thresholdPoints,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x1000fb738 | FUN_1000fb738 */

void FUN_1000fb738(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogRageClickConfig::thresholdPoints;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::thresholdPoints,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1000fb784 | FUN_1000fb784 */

undefined1  [16] FUN_1000fb784(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogRageClickConfig::thresholdPoints;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::thresholdPoints,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1000fb7c4 | PostHogRageClickConfig::timeoutInterval */

/* Function Stack Size: 0x10 bytes */

double PostHogRageClickConfig::timeoutInterval(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = timeoutInterval;
  _swift_beginAccess(param_1 + timeoutInterval,auStack_38,0,0);
  return *(double *)(param_1 + lVar1);
}



/* Address: 0x1000fb808 | FUN_1000fb808 */

undefined8 FUN_1000fb808(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogRageClickConfig::timeoutInterval;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::timeoutInterval,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1000fb848 | PostHogRageClickConfig::setTimeoutInterval: */

/* Function Stack Size: 0x18 bytes */

void PostHogRageClickConfig::setTimeoutInterval_(ID param_1,SEL param_2,double param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = timeoutInterval;
  _swift_beginAccess(param_1 + timeoutInterval,auStack_48,1,0);
  *(double *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x1000fb898 | FUN_1000fb898 */

void FUN_1000fb898(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogRageClickConfig::timeoutInterval;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::timeoutInterval,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1000fb8e4 | FUN_1000fb8e4 */

undefined1  [16] FUN_1000fb8e4(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogRageClickConfig::timeoutInterval;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::timeoutInterval,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1000fb924 | PostHogRageClickConfig::minimumTapCount */

/* Function Stack Size: 0x10 bytes */

long_long PostHogRageClickConfig::minimumTapCount(ID param_1,SEL param_2)

{
  long lVar1;
  undefined1 auStack_38 [24];
  
  lVar1 = minimumTapCount;
  _swift_beginAccess(param_1 + minimumTapCount,auStack_38,0,0);
  return *(long_long *)(param_1 + lVar1);
}



/* Address: 0x1000fb968 | FUN_1000fb968 */

undefined8 FUN_1000fb968(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = PostHogRageClickConfig::minimumTapCount;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::minimumTapCount,auStack_38,0,0);
  return *(undefined8 *)(unaff_x20 + lVar1);
}



/* Address: 0x1000fb9a8 | PostHogRageClickConfig::setMinimumTapCount: */

/* Function Stack Size: 0x18 bytes */

void PostHogRageClickConfig::setMinimumTapCount_(ID param_1,SEL param_2,long_long param_3)

{
  long lVar1;
  undefined1 auStack_48 [24];
  
  lVar1 = minimumTapCount;
  _swift_beginAccess(param_1 + minimumTapCount,auStack_48,1,0);
  *(long_long *)(param_1 + lVar1) = param_3;
  return;
}



/* Address: 0x1000fb9f8 | FUN_1000fb9f8 */

void FUN_1000fb9f8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar1 = PostHogRageClickConfig::minimumTapCount;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::minimumTapCount,auStack_48,1,0);
  *(undefined8 *)(unaff_x20 + lVar1) = param_1;
  return;
}



/* Address: 0x1000fba44 | FUN_1000fba44 */

undefined1  [16] FUN_1000fba44(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  lVar1 = PostHogRageClickConfig::minimumTapCount;
  _swift_beginAccess(unaff_x20 + PostHogRageClickConfig::minimumTapCount,param_1,0x21,0);
  auVar2._8_8_ = unaff_x20 + lVar1;
  auVar2._0_8_ = _swift_endAccess;
  return auVar2;
}



/* Address: 0x1000fba84 | FUN_1000fba84 */

void FUN_1000fba84(void)

{
  ID unaff_x20;
  
  _objc_allocWithZone();
  objc_stub::init(unaff_x20);
  return;
}



/* Address: 0x1000fba9c | FUN_1000fba9c */

void FUN_1000fba9c(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + PostHogRageClickConfig::enabled) = 1;
  *(undefined8 *)(unaff_x20 + PostHogRageClickConfig::thresholdPoints) = 0x403e000000000000;
  *(undefined8 *)(unaff_x20 + PostHogRageClickConfig::timeoutInterval) = 0x3ff0000000000000;
  *(undefined8 *)(unaff_x20 + PostHogRageClickConfig::minimumTapCount) = 3;
  FUN_1000fbb0c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"init");
  return;
}



/* Address: 0x1000fbb0c | FUN_1000fbb0c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000fbb0c(void)

{
  return ZEXT816(0x100f92e58);
}



/* Address: 0x1000fbb2c | PostHogRageClickConfig::init */

/* Function Stack Size: 0x10 bytes */

ID PostHogRageClickConfig::init(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_30;
  
  *(undefined1 *)(param_1 + enabled) = 1;
  *(undefined8 *)(param_1 + thresholdPoints) = 0x403e000000000000;
  *(undefined8 *)(param_1 + timeoutInterval) = 0x3ff0000000000000;
  *(undefined8 *)(param_1 + minimumTapCount) = 3;
  pcVar1 = (class_t *)param_1;
  FUN_1000fbb0c();
  local_30.receiver = param_1;
  local_30.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_30,"init");
  return IVar2;
}



/* Address: 0x1000fbba8 | FUN_1000fbba8 */

void FUN_1000fbba8(void)

{
  FUN_1000fbb0c();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x1000fbbd8 | FUN_1000fbbd8 */

void FUN_1000fbbd8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000fbbfc | FUN_1000fbbfc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000fbbfc(void)

{
  return ZEXT816(0x100fae708);
}



/* Address: 0x1000fbc1c | FUN_1000fbc1c */

void FUN_1000fbc1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000fbc30 | FUN_1000fbc30 */

undefined1  [16] FUN_1000fbc30(void)

{
  return ZEXT816(0x100eb7950);
}



/* Address: 0x1000fbc40 | FUN_1000fbc40 */

undefined1  [16] FUN_1000fbc40(void)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 == 0) {
    if (DAT_100fae578 == -1) {
      uVar4 = 0;
    }
    else {
      _swift_once(&DAT_100fae578,FUN_1000f8d94);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    }
    lVar3 = DAT_101057188;
    ppuVar2 = &PTR_PTR_100eb7518;
    *(long *)(unaff_x20 + 0x10) = DAT_101057188;
    *(undefined ***)(unaff_x20 + 0x18) = &PTR_PTR_100eb7518;
    _swift_retain_n(lVar3,2);
    _swift_unknownObjectRelease(uVar4);
    lVar1 = 0;
  }
  else {
    ppuVar2 = *(undefined ***)(unaff_x20 + 0x18);
    lVar3 = lVar1;
  }
  _swift_unknownObjectRetain(lVar1);
  auVar5._8_8_ = ppuVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1000fbcdc | FUN_1000fbcdc */

void FUN_1000fbcdc(long param_1)

{
  FUN_1000fbe7c();
  _swift_allocObject();
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined8 *)(param_1 + 0x20) = 0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x30) = 0;
  DAT_101057190 = param_1;
  return;
}



/* Address: 0x1000fbd10 | FUN_1000fbd10 */

undefined1  [16] FUN_1000fbd10(void)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x20);
  if (lVar1 == 0) {
    if (DAT_100fb2420 == -1) {
      uVar4 = 0;
    }
    else {
      _swift_once(&DAT_100fb2420,FUN_100168530);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    }
    lVar3 = DAT_101057320;
    ppuVar2 = &PTR_PTR_100eb96e0;
    *(long *)(unaff_x20 + 0x20) = DAT_101057320;
    *(undefined ***)(unaff_x20 + 0x28) = &PTR_PTR_100eb96e0;
    _swift_retain_n(lVar3,2);
    _swift_unknownObjectRelease(uVar4);
    lVar1 = 0;
  }
  else {
    ppuVar2 = *(undefined ***)(unaff_x20 + 0x28);
    lVar3 = lVar1;
  }
  _swift_unknownObjectRetain(lVar1);
  auVar5._8_8_ = ppuVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1000fbdac | FUN_1000fbdac */

undefined1  [16] FUN_1000fbdac(void)

{
  long lVar1;
  undefined **ppuVar2;
  long unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x30);
  if (lVar1 == 0) {
    if (DAT_100fb1998 == -1) {
      uVar4 = 0;
    }
    else {
      _swift_once(&DAT_100fb1998,FUN_1001640c8);
      uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    }
    lVar3 = DAT_101057318;
    ppuVar2 = &PTR_PTR_100eb95a8;
    *(long *)(unaff_x20 + 0x30) = DAT_101057318;
    *(undefined ***)(unaff_x20 + 0x38) = &PTR_PTR_100eb95a8;
    _swift_retain_n(lVar3,2);
    _swift_unknownObjectRelease(uVar4);
    lVar1 = 0;
  }
  else {
    ppuVar2 = *(undefined ***)(unaff_x20 + 0x38);
    lVar3 = lVar1;
  }
  _swift_unknownObjectRetain(lVar1);
  auVar5._8_8_ = ppuVar2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}



/* Address: 0x1000fbe48 | FUN_1000fbe48 */

void FUN_1000fbe48(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000fbe7c | FUN_1000fbe7c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000fbe7c(void)

{
  return ZEXT816(0x100fae7e8);
}



/* Address: 0x1000fbe9c | FUN_1000fbe9c */

char * FUN_1000fbe9c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  void *pvVar9;
  long lVar10;
  String SVar11;
  String local_1a0;
  undefined *local_188;
  undefined1 auStack_180 [256];
  undefined8 local_80;
  undefined8 uStack_78;
  
  pcVar4 = &DAT_100fae678;
  FUN_1000f7830(&DAT_100fae678,&DAT_100c2e190);
  _swift_initStackObject();
  pcVar4[0x18] = '\b';
  pcVar4[0x19] = '\0';
  pcVar4[0x1a] = '\0';
  pcVar4[0x1b] = '\0';
  pcVar4[0x1c] = '\0';
  pcVar4[0x1d] = '\0';
  pcVar4[0x1e] = '\0';
  pcVar4[0x1f] = '\0';
  pcVar4[0x10] = '\x04';
  pcVar4[0x11] = '\0';
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  pcVar4[0x14] = '\0';
  pcVar4[0x15] = '\0';
  pcVar4[0x16] = '\0';
  pcVar4[0x17] = '\0';
  *(undefined1 **)(pcVar4 + 0x20) = &DAT_65707974;
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(pcVar4 + 0x28) = &DAT_e400000000000000;
  pcVar4[0x30] = 'm';
  pcVar4[0x31] = 'a';
  pcVar4[0x32] = 'c';
  pcVar4[0x33] = 'h';
  pcVar4[0x34] = 'o';
  pcVar4[0x35] = '\0';
  pcVar4[0x36] = '\0';
  pcVar4[0x37] = '\0';
  *(undefined1 **)(pcVar4 + 0x38) = &DAT_e500000000000000;
  *(undefined **)(pcVar4 + 0x48) = puVar1;
  pcVar4[0x50] = 'c';
  pcVar4[0x51] = 'o';
  pcVar4[0x52] = 'd';
  pcVar4[0x53] = 'e';
  pcVar4[0x54] = '_';
  pcVar4[0x55] = 'f';
  pcVar4[0x56] = 'i';
  pcVar4[0x57] = 'l';
  pcVar4[0x58] = 'e';
  pcVar4[0x59] = '\0';
  pcVar4[0x5a] = '\0';
  pcVar4[0x5b] = '\0';
  pcVar4[0x5c] = '\0';
  pcVar4[0x5d] = '\0';
  pcVar4[0x5e] = '\0';
  pcVar4[0x5f] = -0x17;
  uStack_78 = unaff_x20[1];
  local_80 = *unaff_x20;
  *(undefined8 *)(pcVar4 + 0x68) = uStack_78;
  *(undefined8 *)(pcVar4 + 0x60) = local_80;
  *(undefined **)(pcVar4 + 0x78) = puVar1;
  pcVar4[0x80] = 'i';
  pcVar4[0x81] = 'm';
  pcVar4[0x82] = 'a';
  pcVar4[0x83] = 'g';
  pcVar4[0x84] = 'e';
  pcVar4[0x85] = '_';
  pcVar4[0x86] = 'a';
  pcVar4[0x87] = 'd';
  pcVar4[0x88] = 'd';
  pcVar4[0x89] = 'r';
  pcVar4[0x8a] = '\0';
  pcVar4[0x8b] = '\0';
  pcVar4[0x8c] = '\0';
  pcVar4[0x8d] = '\0';
  pcVar4[0x8e] = '\0';
  pcVar4[0x8f] = -0x16;
  puVar5 = &DAT_100fae860;
  FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
  puVar6 = puVar5;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar3 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
  puVar2 = PTR___type_metadata_for_Swift_UInt64_100eade90;
  uVar8 = unaff_x20[6];
  *(undefined **)(puVar6 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
  *(undefined **)(puVar6 + 0x40) = puVar3;
  *(undefined8 *)(puVar6 + 0x20) = uVar8;
  FUN_10000ca28(&local_80,auStack_180);
  SVar11 = (extension_Foundation)::Swift::String::_init();
  *(String *)(pcVar4 + 0x90) = SVar11;
  *(undefined **)(pcVar4 + 0xa8) = puVar1;
  pcVar4[0xb0] = 'i';
  pcVar4[0xb1] = 'm';
  pcVar4[0xb2] = 'a';
  pcVar4[0xb3] = 'g';
  pcVar4[0xb4] = 'e';
  pcVar4[0xb5] = '_';
  pcVar4[0xb6] = 's';
  pcVar4[0xb7] = 'i';
  uVar8 = unaff_x20[7];
  *(undefined **)(pcVar4 + 0xd8) = puVar2;
  pcVar4[0xb8] = 'z';
  pcVar4[0xb9] = 'e';
  pcVar4[0xba] = '\0';
  pcVar4[0xbb] = '\0';
  pcVar4[0xbc] = '\0';
  pcVar4[0xbd] = '\0';
  pcVar4[0xbe] = '\0';
  pcVar4[0xbf] = -0x16;
  *(undefined8 *)(pcVar4 + 0xc0) = uVar8;
  pcVar7 = pcVar4;
  FUN_1000f8154();
  _swift_setDeallocating(pcVar4);
  puVar6 = &DAT_100fae490;
  FUN_1000f7830(&DAT_100fae490,&DAT_100c2de60);
  _swift_arrayDestroy(pcVar4 + 0x20,4,puVar6);
  pvVar9 = (void *)unaff_x20[3];
  if (pvVar9 != (void *)0x0) {
    local_1a0.str = (char *)unaff_x20[2];
    local_188 = puVar1;
    local_1a0.bridgeObject = pvVar9;
    FUN_100011080(&local_1a0,auStack_180);
    _swift_bridgeObjectRetain(pvVar9);
    pcVar4 = pcVar7;
    _swift_isUniquelyReferenced_nonNull_native(pcVar7);
    local_1a0.str = pcVar7;
    FUN_10016fe74(auStack_180,&DAT_64695f6775626564,&DAT_e800000000000000,pcVar4);
    pcVar7 = local_1a0.str;
  }
  if ((*(char *)(unaff_x20 + 5) != '\x01') && (lVar10 = unaff_x20[4], lVar10 != 0)) {
    _swift_allocObject(puVar5,0x48,7);
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined **)(puVar5 + 0x38) = puVar2;
    *(undefined **)(puVar5 + 0x40) = puVar3;
    *(long *)(puVar5 + 0x20) = lVar10;
    local_1a0 = (extension_Foundation)::Swift::String::_init();
    local_188 = puVar1;
    FUN_100011080(&local_1a0,auStack_180);
    pcVar4 = pcVar7;
    _swift_isUniquelyReferenced_nonNull_native(pcVar7);
    local_1a0.str = pcVar7;
    FUN_10016fe74(auStack_180,0x6d765f6567616d69,0xec00000072646461,pcVar4);
    pcVar7 = local_1a0.str;
  }
  pvVar9 = (void *)unaff_x20[9];
  local_1a0.str = pcVar7;
  if (pvVar9 != (void *)0x0) {
    local_1a0.str = (char *)unaff_x20[8];
    local_188 = puVar1;
    local_1a0.bridgeObject = pvVar9;
    FUN_100011080(&local_1a0,auStack_180);
    _swift_bridgeObjectRetain(pvVar9);
    pcVar4 = pcVar7;
    _swift_isUniquelyReferenced_nonNull_native(pcVar7);
    local_1a0.str = pcVar7;
    FUN_10016fe74(auStack_180,0x68637261,&DAT_e400000000000000,pcVar4);
  }
  return local_1a0.str;
}



/* Address: 0x1000fc1c0 | FUN_1000fc1c0 */

void FUN_1000fc1c0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x1000fc1f0 | FUN_1000fc1f0 */

undefined8 * FUN_1000fc1f0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1000fc25c | FUN_1000fc25c */

undefined8 * FUN_1000fc25c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1000fc308 | FUN_1000fc308 */

void FUN_1000fc308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x1000fc324 | FUN_1000fc324 */

undefined8 * FUN_1000fc324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[3];
  uVar1 = param_1[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[4] = param_2[4];
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  uVar2 = param_2[9];
  uVar1 = param_1[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1000fc390 | FUN_1000fc390 */

undefined1  [16] FUN_1000fc390(void)

{
  return ZEXT816(0x100eb79d8);
}



/* Address: 0x1000fc3a0 | FUN_1000fc3a0 */

char * FUN_1000fc3a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *unaff_x20;
  void *pvVar9;
  String local_90;
  undefined *local_78;
  undefined1 auStack_70 [32];
  
  pcVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000f8154();
  puVar4 = &DAT_100fae860;
  FUN_1000f7830(&DAT_100fae860,&DAT_100c2e1c0);
  puVar5 = puVar4;
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar2 = PTR___protocol_witness_table_for_Swift_UInt64___Swift_CVarArg_in_Swift_100eadec8;
  puVar1 = PTR___type_metadata_for_Swift_UInt64_100eade90;
  uVar8 = *unaff_x20;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_UInt64_100eade90;
  *(undefined **)(puVar5 + 0x40) = puVar2;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  local_90 = (extension_Foundation)::Swift::String::_init();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  local_78 = PTR___type_metadata_for_Swift_String_100eac208;
  FUN_100011080(&local_90,auStack_70);
  pcVar6 = pcVar3;
  _swift_isUniquelyReferenced_nonNull_native(pcVar3);
  local_90.str = pcVar3;
  FUN_10016fe74(auStack_70,0xd000000000000010,0x8000000100d90b50,pcVar6);
  pcVar3 = local_90.str;
  local_90.str = (char *)0x656c707061;
  local_90.bridgeObject = &DAT_e500000000000000;
  local_78 = puVar5;
  FUN_100011080(&local_90,auStack_70);
  pcVar6 = pcVar3;
  _swift_isUniquelyReferenced_nonNull_native(pcVar3);
  local_90 = (String)CONCAT88(local_90.bridgeObject,pcVar3);
  FUN_10016fe74(auStack_70,0x6d726f6674616c70,&DAT_e800000000000000,pcVar6);
  pcVar3 = local_90.str;
  local_90.str._0_1_ = *(undefined1 *)((long)unaff_x20 + 0x31);
  local_78 = PTR___type_metadata_for_Swift_Bool_100eac570;
  FUN_100011080(&local_90,auStack_70);
  pcVar6 = pcVar3;
  _swift_isUniquelyReferenced_nonNull_native(pcVar3);
  local_90.str = pcVar3;
  FUN_10016fe74(auStack_70,0x7070615f6e69,&DAT_e600000000000000,pcVar6);
  pcVar3 = local_90.str;
  pvVar9 = (void *)unaff_x20[2];
  if (pvVar9 != (void *)0x0) {
    local_90.str = (char *)unaff_x20[1];
    local_78 = puVar5;
    local_90.bridgeObject = pvVar9;
    FUN_100011080(&local_90,auStack_70);
    _swift_bridgeObjectRetain(pvVar9);
    pcVar6 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_90.str = pcVar3;
    FUN_10016fe74(auStack_70,0x656c75646f6d,&DAT_e600000000000000,pcVar6);
  }
  pcVar3 = local_90.str;
  pvVar9 = (void *)unaff_x20[4];
  if (pvVar9 != (void *)0x0) {
    local_90.str = (char *)unaff_x20[3];
    local_78 = puVar5;
    local_90.bridgeObject = pvVar9;
    FUN_100011080(&local_90,auStack_70);
    _swift_bridgeObjectRetain(pvVar9);
    pcVar6 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_90.str = pcVar3;
    FUN_10016fe74(auStack_70,0x6567616b636170,&DAT_e700000000000000,pcVar6);
  }
  pcVar3 = local_90.str;
  if (*(char *)(unaff_x20 + 6) != '\x01') {
    uVar8 = unaff_x20[5];
    puVar7 = puVar4;
    _swift_allocObject(puVar4,0x48,7);
    *(undefined8 *)(puVar7 + 0x18) = 2;
    *(undefined8 *)(puVar7 + 0x10) = 1;
    *(undefined **)(puVar7 + 0x38) = puVar1;
    *(undefined **)(puVar7 + 0x40) = puVar2;
    *(undefined8 *)(puVar7 + 0x20) = uVar8;
    local_90 = (extension_Foundation)::Swift::String::_init();
    local_78 = puVar5;
    FUN_100011080(&local_90,auStack_70);
    pcVar6 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_90.str = pcVar3;
    FUN_10016fe74(auStack_70,0x64615f6567616d69,0xea00000000007264,pcVar6);
  }
  pcVar3 = local_90.str;
  pvVar9 = (void *)unaff_x20[8];
  if (pvVar9 != (void *)0x0) {
    local_90.str = (char *)unaff_x20[7];
    local_78 = puVar5;
    local_90.bridgeObject = pvVar9;
    FUN_100011080(&local_90,auStack_70);
    _swift_bridgeObjectRetain(pvVar9);
    pcVar6 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_90.str = pcVar3;
    FUN_10016fe74(auStack_70,0x6e6f6974636e7566,&DAT_e800000000000000,pcVar6);
  }
  pcVar3 = local_90.str;
  if (*(char *)(unaff_x20 + 10) != '\x01') {
    uVar8 = unaff_x20[9];
    _swift_allocObject(puVar4,0x48,7);
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined **)(puVar4 + 0x38) = puVar1;
    *(undefined **)(puVar4 + 0x40) = puVar2;
    *(undefined8 *)(puVar4 + 0x20) = uVar8;
    local_90 = (extension_Foundation)::Swift::String::_init();
    local_78 = puVar5;
    FUN_100011080(&local_90,auStack_70);
    pcVar6 = pcVar3;
    _swift_isUniquelyReferenced_nonNull_native(pcVar3);
    local_90 = (String)CONCAT88(local_90.bridgeObject,pcVar3);
    FUN_10016fe74(auStack_70,&DAT_615f6c6f626d7973,0xeb00000000726464,pcVar6);
  }
  return local_90.str;
}



/* Address: 0x1000fc794 | FUN_1000fc794 */

void FUN_1000fc794(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  return;
}



/* Address: 0x1000fc7c4 | FUN_1000fc7c4 */

undefined8 * FUN_1000fc7c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar3 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar3;
  uVar3 = param_2[4];
  uVar1 = param_2[5];
  param_1[4] = uVar3;
  param_1[5] = uVar1;
  *(undefined2 *)(param_1 + 6) = *(undefined2 *)(param_2 + 6);
  uVar1 = param_2[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  uVar2 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1000fc838 | FUN_1000fc838 */

undefined8 * FUN_1000fc838(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  param_1[5] = uVar1;
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  param_1[7] = param_2[7];
  uVar1 = param_1[8];
  param_1[8] = param_2[8];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[9] = uVar1;
  return param_1;
}



/* Address: 0x1000fc8f4 | FUN_1000fc8f4 */

void FUN_1000fc8f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar6 = param_2[9];
  uVar5 = param_2[8];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  param_1[9] = uVar6;
  param_1[8] = uVar5;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  return;
}



/* Address: 0x1000fc918 | FUN_1000fc918 */

undefined8 * FUN_1000fc918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[4];
  uVar2 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[5] = param_2[5];
  *(undefined1 *)(param_1 + 6) = *(undefined1 *)(param_2 + 6);
  *(undefined1 *)((long)param_1 + 0x31) = *(undefined1 *)((long)param_2 + 0x31);
  uVar1 = param_2[8];
  uVar2 = param_1[8];
  param_1[7] = param_2[7];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[9] = param_2[9];
  *(undefined1 *)(param_1 + 10) = *(undefined1 *)(param_2 + 10);
  return param_1;
}



/* Address: 0x1000fc99c | FUN_1000fc99c */

int FUN_1000fc99c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && (*(char *)((long)param_1 + 0x51) != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1000fc9f8 | FUN_1000fc9f8 */

void FUN_1000fc9f8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x51) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 10) = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)((long)param_1 + 0x51) = 1;
    }
  }
  return;
}



/* Address: 0x1000fca64 | FUN_1000fca64 */

undefined1  [16] FUN_1000fca64(void)

{
  return ZEXT816(0x100eb7a68);
}



/* Address: 0x1000fca74 | FUN_1000fca74 */

undefined * FUN_1000fca74(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  String SVar3;
  char *pcVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  Hasher into;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  undefined *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  long lStack_130;
  char *local_100;
  void *pvStack_f8;
  undefined1 auStack_f0 [32];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  long lStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_98 [32];
  undefined *local_78;
  
  puVar14 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  local_78 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar13 = (ulong *)(param_1 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar17 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar13;
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  lVar16 = lVar15;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar9 * 0x10);
      local_a8 = *puVar1;
      uVar2 = puVar1[1];
      uStack_a0 = uVar2;
      FUN_1000f8cac(*(long *)(param_1 + 0x38) + uVar9 * 0x20,auStack_98,&DAT_100fae8f8,
                    &DAT_100c2e228);
      FUN_1000f8cac(auStack_98,&local_148,&DAT_100fae8f8,&DAT_100c2e228);
      if (lStack_130 == 1) {
        _swift_bridgeObjectRetain(uVar2);
        FUN_1000fb4c4(&local_148,&DAT_100fae8f8,&DAT_100c2e228);
      }
      else {
        uStack_c8 = uStack_140;
        local_d0 = local_148;
        lStack_b8 = lStack_130;
        local_c0 = local_138;
        FUN_1000f8cac(&local_a8,&local_100,&DAT_100fae900,&DAT_100c2e230);
        pvVar5 = pvStack_f8;
        pcVar4 = local_100;
        SVar3.bridgeObject = pvStack_f8;
        SVar3.str = local_100;
        uVar9 = *(ulong *)(puVar14 + 0x10);
        if (uVar9 < *(ulong *)(puVar14 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          FUN_100171374(uVar9 + 1,1);
          puVar14 = local_78;
        }
        Swift::Hasher::init(*(__int64 *)(puVar14 + 0x28));
        into.unknown = (undefined *)&local_148;
        Swift::String::hash(into,SVar3);
        uVar8 = Swift::Hasher::_finalize(into);
        uVar12 = -1L << ((ulong)(byte)puVar14[0x20] & 0x3f);
        uVar8 = uVar8 & (uVar12 ^ 0xffffffffffffffff);
        uVar10 = uVar8 >> 6;
        uVar9 = -1L << (uVar8 & 0x3f) &
                (*(ulong *)(puVar14 + uVar10 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar9 == 0) {
          bVar7 = false;
          uVar9 = 0x3f - uVar12 >> 6;
          do {
            uVar8 = uVar10 + 1;
            if ((uVar8 == uVar9) && (bVar7)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fcd90);
              (*pcVar6)();
            }
            uVar10 = 0;
            if (uVar8 != uVar9) {
              uVar10 = uVar8;
            }
            bVar7 = (bool)(uVar8 == uVar9 | bVar7);
          } while (*(ulong *)(puVar14 + uVar10 * 8 + 0x40) == 0xffffffffffffffff);
          uVar9 = ~*(ulong *)(puVar14 + uVar10 * 8 + 0x40);
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar10 << 6;
        }
        else {
          uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
          uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
          uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
          uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
        }
        uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar14 + uVar10 + 0x40) =
             1L << (uVar9 & 0x3f) | *(ulong *)(puVar14 + uVar10 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x30) + uVar9 * 0x10);
        *puVar1 = pcVar4;
        puVar1[1] = pvVar5;
        puVar1 = (undefined8 *)(*(long *)(puVar14 + 0x38) + uVar9 * 0x20);
        puVar1[1] = uStack_c8;
        *puVar1 = local_d0;
        puVar1[3] = lStack_b8;
        puVar1[2] = local_c0;
        *(long *)(puVar14 + 0x10) = *(long *)(puVar14 + 0x10) + 1;
        FUN_1000fb4c4(auStack_f0,&DAT_100fae8f8,&DAT_100c2e228);
      }
      FUN_1000fb4c4(&local_a8,&DAT_100fae900,&DAT_100c2e230);
      lVar16 = lVar15;
    }
    bVar7 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fcd8c);
      (*pcVar6)();
    }
    if ((long)(0x3f - uVar11 >> 6) <= lVar15) break;
    uVar17 = puVar13[lVar15];
  }
  FUN_10000c650(param_1,puVar13,~uVar11,lVar16,0);
  return puVar14;
}



/* Address: 0x1000fcd90 | FUN_1000fcd90 */

undefined * FUN_1000fcd90(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  String SVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  undefined1 *puVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong *puVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_130 [24];
  long local_118;
  char *local_e8;
  void *pvStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar15 = (ulong *)(param_1 + 0x40);
  uVar13 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar13 < 0x40) {
    uVar18 = ~(-1L << (-uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *puVar15;
  _swift_bridgeObjectRetain();
  lVar16 = 0;
  lVar17 = lVar16;
  while( true ) {
    for (; uVar18 != 0; uVar18 = uVar18 - 1 & uVar18) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11 * 0x10);
      local_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      FUN_1000f8cac(*(long *)(param_1 + 0x38) + uVar11 * 0x20,auStack_88,&DAT_100fae668,
                    &DAT_100c2e4a0);
      FUN_1000f8cac(auStack_88,auStack_130,&DAT_100fae668,&DAT_100c2e4a0);
      if (local_118 == 0) {
        _swift_bridgeObjectRetain(uVar2);
        puVar9 = auStack_130;
      }
      else {
        FUN_100011080(auStack_130,auStack_b8);
        FUN_1000f8cac(&local_98,&local_e8,&DAT_100fae918,&DAT_100c2e238);
        pvVar6 = pvStack_e0;
        pcVar5 = local_e8;
        SVar3.bridgeObject = pvStack_e0;
        SVar3.str = local_e8;
        uVar11 = *(ulong *)(puVar4 + 0x10);
        if (uVar11 < *(ulong *)(puVar4 + 0x18)) {
          _swift_bridgeObjectRetain(uVar2);
        }
        else {
          _swift_bridgeObjectRetain(uVar2);
          FUN_100170ddc(uVar11 + 1,1);
        }
        Swift::Hasher::init(*(__int64 *)(puVar4 + 0x28));
        into.unknown = auStack_130;
        Swift::String::hash(into,SVar3);
        uVar10 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
        uVar12 = uVar10 >> 6;
        uVar11 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar4 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar11 == 0) {
          bVar8 = false;
          uVar11 = 0x3f - uVar14 >> 6;
          do {
            uVar10 = uVar12 + 1;
            if ((uVar10 == uVar11) && (bVar8)) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1000fd098);
              (*pcVar7)();
            }
            uVar12 = 0;
            if (uVar10 != uVar11) {
              uVar12 = uVar10;
            }
            bVar8 = (bool)(uVar10 == uVar11 | bVar8);
          } while (*(ulong *)(puVar4 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
          uVar11 = ~*(ulong *)(puVar4 + uVar12 * 8 + 0x40);
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar12 << 6;
        }
        else {
          uVar11 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
          uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
          uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
          uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
          uVar11 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar12 = uVar11 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar4 + uVar12 + 0x40) =
             1L << (uVar11 & 0x3f) | *(ulong *)(puVar4 + uVar12 + 0x40);
        puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x30) + uVar11 * 0x10);
        *puVar1 = pcVar5;
        puVar1[1] = pvVar6;
        FUN_100011080(auStack_b8,*(long *)(puVar4 + 0x38) + uVar11 * 0x20);
        *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
        puVar9 = auStack_d8;
      }
      FUN_1000fb4c4(puVar9,&DAT_100fae668,&DAT_100c2e4a0);
      FUN_1000fb4c4(&local_98,&DAT_100fae918,&DAT_100c2e238);
      lVar17 = lVar16;
    }
    bVar8 = SCARRY8(lVar16,1);
    lVar16 = lVar16 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000fd094);
      (*pcVar7)();
    }
    if ((long)(0x3f - uVar13 >> 6) <= lVar16) break;
    uVar18 = puVar15[lVar16];
  }
  FUN_10000c650(param_1,puVar15,~uVar13,lVar17,0);
  return puVar4;
}



/* Address: 0x1000fd098 | FUN_1000fd098 */

undefined * FUN_1000fd098(long param_1,code *param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  bool bVar9;
  Hasher into;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  undefined1 auStack_a8 [72];
  
  puVar7 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar16 = (ulong *)(param_1 + 0x40);
  uVar18 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar18 < 0x40) {
    uVar15 = ~(-1L << (-uVar18 & 0x3f));
  }
  uVar15 = uVar15 & *puVar16;
  _swift_bridgeObjectRetain();
  lVar11 = 0;
  lVar6 = lVar11;
  while( true ) {
    while (uVar15 != 0) {
      uVar12 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | lVar11 << 6;
      lVar17 = *(long *)(*(long *)(param_1 + 0x38) + uVar12 * 8);
      lVar6 = lVar11;
      if (lVar17 != 0) {
        pSVar1 = (String *)(*(long *)(param_1 + 0x30) + uVar12 * 0x10);
        pcVar3 = pSVar1->str;
        pvVar4 = pSVar1->bridgeObject;
        SVar5 = *pSVar1;
        uVar12 = *(ulong *)(puVar7 + 0x10);
        if (uVar12 < *(ulong *)(puVar7 + 0x18)) {
          _swift_bridgeObjectRetain_n(lVar17,2);
          _swift_bridgeObjectRetain_n(pvVar4,2);
        }
        else {
          _swift_bridgeObjectRetain_n(lVar17,2);
          _swift_bridgeObjectRetain_n(pvVar4,2);
          (*param_2)(uVar12 + 1,1);
        }
        Swift::Hasher::init(*(__int64 *)(puVar7 + 0x28));
        into.unknown = auStack_a8;
        Swift::String::hash(into,SVar5);
        uVar10 = Swift::Hasher::_finalize(into);
        uVar14 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
        uVar10 = uVar10 & (uVar14 ^ 0xffffffffffffffff);
        uVar13 = uVar10 >> 6;
        uVar12 = -1L << (uVar10 & 0x3f) &
                 (*(ulong *)(puVar7 + uVar13 * 8 + 0x40) ^ 0xffffffffffffffff);
        if (uVar12 == 0) {
          bVar9 = false;
          uVar12 = 0x3f - uVar14 >> 6;
          do {
            uVar10 = uVar13 + 1;
            if ((uVar10 == uVar12) && (bVar9)) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x1000fd324);
              (*pcVar8)();
            }
            uVar13 = 0;
            if (uVar10 != uVar12) {
              uVar13 = uVar10;
            }
            bVar9 = (bool)(uVar10 == uVar12 | bVar9);
          } while (*(ulong *)(puVar7 + uVar13 * 8 + 0x40) == 0xffffffffffffffff);
          uVar12 = ~*(ulong *)(puVar7 + uVar13 * 8 + 0x40);
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar13 << 6;
        }
        else {
          uVar12 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
          uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
          uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
          uVar12 = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | uVar10 & 0x7fffffffffffffc0;
        }
        uVar13 = uVar12 >> 3 & 0x1ffffffffffffff8;
        *(ulong *)(puVar7 + uVar13 + 0x40) =
             1L << (uVar12 & 0x3f) | *(ulong *)(puVar7 + uVar13 + 0x40);
        puVar2 = (undefined8 *)(*(long *)(puVar7 + 0x30) + uVar12 * 0x10);
        *puVar2 = pcVar3;
        puVar2[1] = pvVar4;
        *(long *)(*(long *)(puVar7 + 0x38) + uVar12 * 8) = lVar17;
        *(long *)(puVar7 + 0x10) = *(long *)(puVar7 + 0x10) + 1;
        _swift_bridgeObjectRelease(lVar17);
        _swift_bridgeObjectRelease(pvVar4);
      }
    }
    bVar9 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1000fd320);
      (*pcVar8)();
    }
    if ((long)(0x3f - uVar18 >> 6) <= lVar11) break;
    uVar15 = puVar16[lVar11];
  }
  FUN_10000c650(param_1,puVar16,~uVar18,lVar6,0);
  return puVar7;
}



/* Address: 0x1000fd324 | FUN_1000fd324 */

undefined * FUN_1000fd324(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  String SVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  code *pcVar7;
  bool bVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong *puVar14;
  long lVar15;
  long lVar16;
  ulong uVar17;
  undefined1 auStack_130 [72];
  char *local_e8;
  void *pvStack_e0;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [40];
  
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  puVar14 = (ulong *)(param_1 + 0x40);
  uVar12 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar17 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar17 = uVar17 & *puVar14;
  _swift_bridgeObjectRetain();
  lVar15 = 0;
  lVar16 = lVar15;
  while( true ) {
    for (; uVar17 != 0; uVar17 = uVar17 - 1 & uVar17) {
      uVar10 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
      local_98 = *puVar1;
      uVar2 = puVar1[1];
      uStack_90 = uVar2;
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + uVar10 * 0x20,auStack_88);
      FUN_10000cbfc(auStack_88,auStack_b8);
      FUN_1000f8cac(&local_98,&local_e8,&DAT_100fae908,&DAT_100c2eec0);
      pvVar6 = pvStack_e0;
      pcVar5 = local_e8;
      SVar3.bridgeObject = pvStack_e0;
      SVar3.str = local_e8;
      uVar10 = *(ulong *)(puVar4 + 0x10);
      if (uVar10 < *(ulong *)(puVar4 + 0x18)) {
        _swift_bridgeObjectRetain(uVar2);
      }
      else {
        _swift_bridgeObjectRetain(uVar2);
        FUN_100170ddc(uVar10 + 1,1);
      }
      Swift::Hasher::init(*(__int64 *)(puVar4 + 0x28));
      into.unknown = auStack_130;
      Swift::String::hash(into,SVar3);
      uVar9 = Swift::Hasher::_finalize(into);
      uVar13 = -1L << ((ulong)(byte)puVar4[0x20] & 0x3f);
      uVar9 = uVar9 & (uVar13 ^ 0xffffffffffffffff);
      uVar11 = uVar9 >> 6;
      uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(puVar4 + uVar11 * 8 + 0x40) ^ 0xffffffffffffffff)
      ;
      if (uVar10 == 0) {
        bVar8 = false;
        uVar10 = 0x3f - uVar13 >> 6;
        do {
          uVar9 = uVar11 + 1;
          if ((uVar9 == uVar10) && (bVar8)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1000fd5c8);
            (*pcVar7)();
          }
          uVar11 = 0;
          if (uVar9 != uVar10) {
            uVar11 = uVar9;
          }
          bVar8 = (bool)(uVar9 == uVar10 | bVar8);
        } while (*(ulong *)(puVar4 + uVar11 * 8 + 0x40) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar4 + uVar11 * 8 + 0x40);
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar11 << 6;
      }
      else {
        uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
      }
      uVar11 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar11 + 0x40) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar4 + uVar11 + 0x40);
      puVar1 = (undefined8 *)(*(long *)(puVar4 + 0x30) + uVar10 * 0x10);
      *puVar1 = pcVar5;
      puVar1[1] = pvVar6;
      FUN_100011080(auStack_b8,*(long *)(puVar4 + 0x38) + uVar10 * 0x20);
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      FUN_100004594(auStack_d8);
      FUN_1000fb4c4(&local_98,&DAT_100fae908,&DAT_100c2eec0);
      lVar16 = lVar15;
    }
    bVar8 = SCARRY8(lVar15,1);
    lVar15 = lVar15 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1000fd5c4);
      (*pcVar7)();
    }
    if ((long)(0x3f - uVar12 >> 6) <= lVar15) break;
    uVar17 = puVar14[lVar15];
  }
  FUN_10000c650(param_1,puVar14,~uVar12,lVar16,0);
  return puVar4;
}



/* Address: 0x1000fd5c8 | FUN_1000fd5c8 */

undefined * FUN_1000fd5c8(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_b0;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined *local_68;
  
  lVar5 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  (*param_2)(0,lVar5,0);
  puVar2 = PTR___type_metadata_for_Any_100eae0c0;
  puVar1 = local_68;
  while( true ) {
    if (lVar5 == 0) {
      return puVar1;
    }
    param_1 = param_1 + 0x20;
    local_68 = puVar1;
    FUN_10000cbfc(param_1,auStack_88);
    FUN_100011080(auStack_88,auStack_a8);
    uVar3 = 0;
    FUN_10000ec2c(0,param_3,param_4);
    uVar4 = 0;
    _swift_dynamicCast(&local_b0,auStack_a8,puVar2 + 8,uVar3,6);
    uVar3 = local_b0;
    if ((uVar4 & 1) == 0) break;
    uVar4 = *(ulong *)(puVar1 + 0x10);
    local_68 = puVar1;
    if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar4) {
      (*param_2)(1 < *(ulong *)(puVar1 + 0x18),uVar4 + 1,1);
    }
    *(ulong *)(local_68 + 0x10) = uVar4 + 1;
    *(undefined8 *)(local_68 + uVar4 * 8 + 0x20) = uVar3;
    lVar5 = lVar5 + -1;
    puVar1 = local_68;
  }
  _swift_release(puVar1);
  return (undefined *)0x0;
}



/* Address: 0x1000fd6f8 | FUN_1000fd6f8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fd6f8(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  this = (_DictionaryStorage *)&DAT_100faf068;
  uVar6 = 0;
  FUN_1000f7830();
  lVar3 = 0xd;
  Swift::_DictionaryStorage::_allocate(this,0xd);
  puVar11 = ram0x000100faef40;
  puVar9 = (undefined *)s_EXC_BAD_ACCESS_100faef38._0_8_;
  puVar5 = DAT_100faef30;
  puVar4 = DAT_100faef30;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) == 0) {
    lVar10 = 0xd;
    ppuVar7 = &PTR_s_EXC_ARM_PAC_FAIL_100faef58;
    do {
      uVar8 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar3 + 0x40 + uVar8) =
           *(ulong *)(lVar3 + 0x40 + uVar8) | 1L << ((ulong)puVar4 & 0x3f);
      *(undefined **)(*(long *)(lVar3 + 0x30) + (long)puVar4 * 8) = puVar5;
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + (long)puVar4 * 0x10);
      *puVar1 = puVar9;
      puVar1[1] = puVar11;
      if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000fd82c);
        (*pcVar2)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        _swift_bridgeObjectRetain();
        puVar5 = &DAT_100faf070;
        FUN_1000f7830(&DAT_100faf070,&DAT_100c2e260);
        _swift_arrayDestroy(&DAT_100faef30,0xd,puVar5);
        DAT_100faef00 = lVar3;
        return;
      }
      puVar5 = ppuVar7[-2];
      puVar9 = ppuVar7[-1];
      puVar11 = *ppuVar7;
      _swift_bridgeObjectRetain();
      puVar4 = puVar5;
      thunk_FUN_10016f9fc();
      ppuVar7 = ppuVar7 + 3;
    } while ((uVar6 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000fd7dc);
  (*pcVar2)();
}



/* Address: 0x1000fd82c | FUN_1000fd82c */

void FUN_1000fd82c(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  
  this = (_DictionaryStorage *)&DAT_100fae978;
  uVar6 = 0;
  FUN_1000f7830();
  lVar4 = 1;
  Swift::_DictionaryStorage::_allocate(this,1);
  uVar5 = 1;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fd8d8);
    (*pcVar3)();
  }
  lVar1 = lVar4 + (uVar5 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 1;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0xd000000000000012;
  puVar2[1] = 0x8000000100d90c60;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    DAT_100fae968 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fd8dc);
  (*pcVar3)();
}



/* Address: 0x1000fd8dc | FUN_1000fd8dc */

void FUN_1000fd8dc(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  this = (_DictionaryStorage *)&DAT_100fae978;
  uVar7 = 0;
  FUN_1000f7830();
  lVar4 = 2;
  Swift::_DictionaryStorage::_allocate(this,2);
  uVar5 = 1;
  thunk_FUN_10016f9fc();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fd9f8);
    (*pcVar3)();
  }
  lVar1 = lVar4 + 0x40;
  uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 1;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0xd000000000000011;
  puVar2[1] = 0x8000000100d90ca0;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fd9fc);
    (*pcVar3)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar5 = 2;
  thunk_FUN_10016f9fc();
  if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fda00);
    (*pcVar3)();
  }
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 2;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0xd000000000000016;
  puVar2[1] = 0x8000000100d90cc0;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    DAT_100fae948 = lVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fda04);
  (*pcVar3)();
}



/* Address: 0x1000fda04 | FUN_1000fda04 */

void FUN_1000fda04(void)

{
  long lVar1;
  undefined8 *puVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  this = (_DictionaryStorage *)&DAT_100fae978;
  uVar6 = 0;
  FUN_1000f7830();
  lVar4 = 7;
  Swift::_DictionaryStorage::_allocate(this,7);
  uVar5 = 0;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd08);
    (*pcVar3)();
  }
  lVar1 = lVar4 + 0x40;
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 0;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0xd000000000000014;
  puVar2[1] = 0x8000000100d90c80;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd0c);
    (*pcVar3)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar5 = 1;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd10);
    (*pcVar3)();
  }
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 1;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0x5f4d52415f435845;
  puVar2[1] = 0xed00004f495f5046;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd14);
    (*pcVar3)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar5 = 2;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd18);
    (*pcVar3)();
  }
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 2;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0x5f4d52415f435845;
  puVar2[1] = 0xed00005a445f5046;
  if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd1c);
    (*pcVar3)();
  }
  *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
  uVar5 = 3;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd20);
    (*pcVar3)();
  }
  uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
  *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 3;
  puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
  *puVar2 = 0x5f4d52415f435845;
  puVar2[1] = 0xed0000464f5f5046;
  if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    uVar5 = 4;
    thunk_FUN_10016f9fc();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd28);
      (*pcVar3)();
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 4;
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
    *puVar2 = 0x5f4d52415f435845;
    puVar2[1] = 0xed000046555f5046;
    if (SCARRY8(*(long *)(lVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd2c);
      (*pcVar3)();
    }
    *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
    uVar5 = 5;
    thunk_FUN_10016f9fc();
    if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd30);
      (*pcVar3)();
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar7) = *(ulong *)(lVar1 + uVar7) | 1L << (uVar5 & 0x3f);
    *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 5;
    puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
    *puVar2 = 0x5f4d52415f435845;
    puVar2[1] = 0xed000058495f5046;
    if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
      uVar5 = 6;
      thunk_FUN_10016f9fc();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd38);
        (*pcVar3)();
      }
      uVar6 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar1 + uVar6) = *(ulong *)(lVar1 + uVar6) | 1L << (uVar5 & 0x3f);
      *(undefined8 *)(*(long *)(lVar4 + 0x30) + uVar5 * 8) = 6;
      puVar2 = (undefined8 *)(*(long *)(lVar4 + 0x38) + uVar5 * 0x10);
      *puVar2 = 0x5f4d52415f435845;
      puVar2[1] = 0xed000044495f5046;
      if (!SCARRY8(*(long *)(lVar4 + 0x10),1)) {
        *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + 1;
        DAT_100fae958 = lVar4;
        return;
      }
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd3c);
      (*pcVar3)();
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd34);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000fdd24);
  (*pcVar3)();
}



/* Address: 0x1000fdd3c | FUN_1000fdd3c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000fdd3c(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined **ppuVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined *puVar11;
  
  this = (_DictionaryStorage *)&DAT_100fae978;
  uVar6 = 0;
  FUN_1000f7830();
  lVar3 = 0x38;
  Swift::_DictionaryStorage::_allocate(this,0x38);
  puVar11 = ram0x000100fae9b8;
  puVar9 = (undefined *)s_KERN_SUCCESS_100fae9b0._0_8_;
  puVar5 = DAT_100fae9a8;
  puVar4 = DAT_100fae9a8;
  thunk_FUN_10016f9fc();
  if ((uVar6 & 1) == 0) {
    lVar10 = 0x38;
    ppuVar7 = &PTR_s_EXC_ARM_SME_DISALLOWED_100fae9d0;
    do {
      uVar8 = (ulong)puVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(lVar3 + 0x40 + uVar8) =
           *(ulong *)(lVar3 + 0x40 + uVar8) | 1L << ((ulong)puVar4 & 0x3f);
      *(undefined **)(*(long *)(lVar3 + 0x30) + (long)puVar4 * 8) = puVar5;
      puVar1 = (undefined8 *)(*(long *)(lVar3 + 0x38) + (long)puVar4 * 0x10);
      *puVar1 = puVar9;
      puVar1[1] = puVar11;
      if (SCARRY8(*(long *)(lVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000fde70);
        (*pcVar2)();
      }
      *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
      lVar10 = lVar10 + -1;
      if (lVar10 == 0) {
        _swift_bridgeObjectRetain();
        puVar5 = &DAT_100faeee8;
        FUN_1000f7830(&DAT_100faeee8,&DAT_100c2e250);
        _swift_arrayDestroy(&DAT_100fae9a8,0x38,puVar5);
        DAT_100fae938 = lVar3;
        return;
      }
      puVar5 = ppuVar7[-2];
      puVar9 = ppuVar7[-1];
      puVar11 = *ppuVar7;
      _swift_bridgeObjectRetain();
      puVar4 = puVar5;
      thunk_FUN_10016f9fc();
      ppuVar7 = ppuVar7 + 3;
    } while ((uVar6 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000fde20);
  (*pcVar2)();
}



/* Address: 0x1000fde70 | FUN_1000fde70 */

void FUN_1000fde70(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  if (DAT_100fae930 != -1) {
    _swift_once(&DAT_100fae930,FUN_1000fdd3c);
  }
  lVar7 = DAT_100fae940;
  uVar2 = DAT_100fae938;
  _swift_bridgeObjectRetain(DAT_100fae938);
  if (lVar7 != -1) {
    _swift_once(&DAT_100fae940,FUN_1000fd8dc);
  }
  lVar7 = DAT_100fae950;
  uVar3 = DAT_100fae948;
  _swift_bridgeObjectRetain(DAT_100fae948);
  if (lVar7 != -1) {
    _swift_once(&DAT_100fae950,FUN_1000fda04);
  }
  lVar7 = DAT_100fae960;
  uVar4 = DAT_100fae958;
  _swift_bridgeObjectRetain(DAT_100fae958);
  if (lVar7 != -1) {
    _swift_once(&DAT_100fae960,FUN_1000fd82c);
  }
  uVar5 = DAT_100fae968;
  this = (_DictionaryStorage *)&DAT_100fae970;
  uVar10 = 0;
  FUN_1000f7830();
  lVar7 = 4;
  Swift::_DictionaryStorage::_allocate(this,4);
  uVar8 = 1;
  thunk_FUN_10016f9fc();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0d8);
    (*pcVar6)();
  }
  lVar1 = lVar7 + 0x40;
  uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar8 & 0x3f);
  *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = 1;
  *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 8) = uVar2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0dc);
    (*pcVar6)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  uVar8 = 2;
  thunk_FUN_10016f9fc();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0e0);
    (*pcVar6)();
  }
  uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar8 & 0x3f);
  *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = 2;
  *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 8) = uVar3;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0e4);
    (*pcVar6)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  uVar8 = 3;
  thunk_FUN_10016f9fc();
  if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0e8);
    (*pcVar6)();
  }
  uVar9 = uVar8 >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(lVar1 + uVar9) = *(ulong *)(lVar1 + uVar9) | 1L << (uVar8 & 0x3f);
  *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = 3;
  *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 8) = uVar4;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0ec);
    (*pcVar6)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  uVar8 = 6;
  thunk_FUN_10016f9fc();
  if ((uVar10 & 1) == 0) {
    uVar10 = uVar8 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(lVar1 + uVar10) = *(ulong *)(lVar1 + uVar10) | 1L << (uVar8 & 0x3f);
    *(undefined8 *)(*(long *)(lVar7 + 0x30) + uVar8 * 8) = 6;
    *(undefined8 *)(*(long *)(lVar7 + 0x38) + uVar8 * 8) = uVar5;
    _swift_bridgeObjectRetain(uVar5);
    if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
      *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
      DAT_100fae928 = lVar7;
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0f4);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1000fe0f0);
  (*pcVar6)();
}



/* Address: 0x1000fe0f4 | FUN_1000fe0f4 */

/* WARNING: Removing unreachable block (ram,0x0001000fe140) */

void FUN_1000fe0f4(void)

{
  undefined8 uVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  uVar1 = 0xd000000000000050;
  FUN_1000fe1dc(0xd000000000000050,0x8000000100d90c00,1);
  DAT_100fae8c8 = uVar1;
  return;
}



/* Address: 0x1000fe168 | FUN_1000fe168 */

/* WARNING: Removing unreachable block (ram,0x0001000fe1b4) */

void FUN_1000fe168(void)

{
  undefined8 uVar1;
  
  _objc_allocWithZone(&_OBJC_CLASS___NSRegularExpression);
  uVar1 = 0xd000000000000047;
  FUN_1000fe1dc(0xd000000000000047,0x8000000100d90bb0,1);
  DAT_100fae8f0 = uVar1;
  return;
}



/* Address: 0x1000fe1dc | FUN_1000fe1dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1000fe1dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NSString *pNVar1;
  ID IVar2;
  ID unaff_x20;
  undefined8 local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  local_50 = 0;
  IVar2 = objc_stub::initWithPattern_options_error_(unaff_x20,pNVar1,param_3,&local_50);
  if (IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return IVar2;
}


