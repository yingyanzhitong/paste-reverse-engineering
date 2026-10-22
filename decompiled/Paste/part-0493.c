/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005b9c9c | FUN_1005b9c9c */

void FUN_1005b9c9c(void)

{
  FUN_1005bc240();
  (extension_Swift)::Swift::RawRepresentable::_encode();
  return;
}



/* Address: 0x1005b9ce8 | thunk_FUN_1005b9cec */

void thunk_FUN_1005b9cec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63fa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63fa0,&DAT_100ee5d00);
  DAT_100fd3fc0 = pTVar1;
  return;
}



/* Address: 0x1005b9cec | FUN_1005b9cec */

void FUN_1005b9cec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c63fa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c63fa0,&DAT_100ee5d00);
  DAT_100fd3fc0 = pTVar1;
  return;
}



/* Address: 0x1005b9d2c | FUN_1005b9d2c */

undefined1  [16] FUN_1005b9d2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dae540;
  auVar1._0_8_ = 0xd000000000000015;
  return auVar1;
}



/* Address: 0x1005b9d48 | FUN_1005b9d48 */

void FUN_1005b9d48(byte *param_1,long param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  
  if ((param_2 == -0x2fffffffffffffeb) && (param_3 == -0x7ffffffeff251ac0)) {
    _swift_bridgeObjectRelease(0x8000000100dae540);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000015,(_StringGuts)0x8000000100dae540,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1005b9dd8 | FUN_1005b9dd8 */

String FUN_1005b9dd8(void)

{
  String SVar1;
  
  FUN_1005bb1a4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005b9e00 | FUN_1005b9e00 */

String FUN_1005b9e00(void)

{
  String SVar1;
  
  FUN_1005bb1a4();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005b9e28 | FUN_1005b9e28 */

void FUN_1005b9e28(undefined1 param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong *unaff_x20;
  ulong uVar3;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9e8c);
    (*pcVar1)();
  }
  uVar3 = *unaff_x20;
  if (param_2 < *(ulong *)(uVar3 + 0x10)) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1005bbc0c();
    }
    if (param_2 < *(ulong *)(uVar3 + 0x10)) {
      *(undefined1 *)(uVar3 + param_2 + 0x20) = param_1;
      *unaff_x20 = uVar3;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9ea4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9e90);
  (*pcVar1)();
}



/* Address: 0x1005b9ea4 | FUN_1005b9ea4 */

undefined1  [16] FUN_1005b9ea4(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = *(ulong *)(param_4 + 0x10);
  if (uVar2 <= param_1 || uVar2 <= param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9f08);
    (*pcVar1)();
  }
  param_3 = param_3 - param_1;
  if ((long)param_2 < 1) {
    if (((long)param_3 < 1) && ((long)param_2 < (long)param_3)) goto LAB_1005b9ee0;
  }
  else if ((-1 < (long)param_3) && (param_3 < param_2)) {
LAB_1005b9ee0:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9f0c);
    (*pcVar1)();
  }
  if (param_1 + param_2 < uVar2) {
    auVar3._8_8_ = 0;
    auVar3._0_8_ = param_1 + param_2;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9f10);
  (*pcVar1)();
}



/* Address: 0x1005b9f10 | FUN_1005b9f10 */

void FUN_1005b9f10(undefined1 *param_1,undefined8 *param_2)

{
  FUN_1005b9e28(*param_1,*param_2);
  return;
}



/* Address: 0x1005b9f1c | FUN_1005b9f1c */

undefined1  [16] FUN_1005b9f1c(undefined8 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  uVar2 = *param_2;
  *param_1 = unaff_x20;
  param_1[1] = uVar2;
  lVar3 = *unaff_x20;
  param_1[2] = lVar3;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9f60);
    (*pcVar1)();
  }
  if (uVar2 < *(ulong *)(lVar3 + 0x10)) {
    *(undefined1 *)(param_1 + 3) = *(undefined1 *)(lVar3 + uVar2 + 0x20);
    auVar4._8_8_ = param_1 + 3;
    auVar4._0_8_ = FUN_1005b9f64;
    return auVar4;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005b9f64);
  (*pcVar1)();
}



/* Address: 0x1005b9f64 | FUN_1005b9f64 */

void FUN_1005b9f64(undefined8 *param_1,uint param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *puVar6;
  
  uVar2 = *(undefined1 *)(param_1 + 3);
  uVar1 = param_1[1];
  uVar5 = param_1[2];
  if ((param_2 & 1) == 0) {
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9ff4);
      (*pcVar3)();
    }
    uVar4 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_1005bbc0c();
    }
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005ba018);
      (*pcVar3)();
    }
  }
  else {
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9ff0);
      (*pcVar3)();
    }
    uVar4 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar4 & 1) == 0) {
      FUN_1005bbc0c();
    }
    if (*(ulong *)(uVar5 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005b9fb0);
      (*pcVar3)();
    }
  }
  puVar6 = (ulong *)*param_1;
  *(undefined1 *)(uVar5 + uVar1 + 0x20) = uVar2;
  *puVar6 = uVar5;
  return;
}



/* Address: 0x1005ba018 | FUN_1005ba018 */

void FUN_1005ba018(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_1005bb784();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1005ba050 | FUN_1005ba050 */

code * FUN_1005ba050(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)0x28;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x28);
  }
  else {
    _swift_coroFrameAlloc(0x28,0x3346);
  }
  *param_1 = pvVar1;
  pvVar2 = pvVar1;
  FUN_1005ba0b4();
  *(void **)((long)pvVar1 + 0x20) = pvVar2;
  return FUN_10026c674;
}



/* Address: 0x1005ba0b4 | FUN_1005ba0b4 */

undefined1  [16] FUN_1005ba0b4(undefined8 *param_1,long param_2,long param_3)

{
  code *pcVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  undefined1 auVar5 [16];
  
  plVar2 = (long *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    plVar2 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xfc91);
  }
  *param_1 = plVar2;
  plVar2[4] = param_3;
  plVar2[5] = (long)unaff_x20;
  plVar2[3] = param_2;
  lVar3 = *unaff_x20;
  lVar4 = *(long *)(lVar3 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba150);
    (*pcVar1)();
  }
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba154);
    (*pcVar1)();
  }
  if (param_3 < lVar4) {
    *plVar2 = param_2;
    plVar2[1] = param_3;
    plVar2[2] = lVar3;
    _swift_bridgeObjectRetain();
    auVar5._8_8_ = plVar2;
    auVar5._0_8_ = FUN_1005ba158;
    return auVar5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba158);
  (*pcVar1)();
}



/* Address: 0x1005ba158 | FUN_1005ba158 */

void FUN_1005ba158(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  param_1 = (undefined8 *)*param_1;
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[4];
  uVar4 = param_1[5];
  uVar6 = param_1[2];
  uVar5 = param_1[3];
  if ((param_2 & 1) == 0) {
    FUN_1005bb784(uVar4,uVar5,uVar2,uVar1,uVar3,uVar6);
  }
  else {
    _swift_bridgeObjectRetain(uVar6);
    FUN_1005bb784(uVar4,uVar5,uVar2,uVar1,uVar3,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_1[2];
  }
  _swift_bridgeObjectRelease(uVar6);
  _free(param_1);
  return;
}



/* Address: 0x1005ba1f8 | FUN_1005ba1f8 */

void FUN_1005ba1f8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1005ba220();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1005ba220 | FUN_1005ba220 */

ulong FUN_1005ba220(code *param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  ulong uVar3;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  
  uVar4 = *unaff_x20;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_1005bbc0c();
  }
  uVar5 = 0;
  if (1 < *(ulong *)(uVar4 + 0x10)) {
    lVar6 = *(ulong *)(uVar4 + 0x10) - 1;
    do {
      uVar3 = 0xffffffffffffffbf;
      (*param_1)();
      if (unaff_x21 != 0) {
        *unaff_x20 = uVar4;
        return uVar5;
      }
      if ((uVar3 & 1) != 0) {
        do {
          lVar6 = lVar6 + -1;
          if (lVar6 <= (long)uVar5) goto LAB_1005ba2e8;
          uVar3 = 0;
          (*param_1)();
        } while ((uVar3 & 1) != 0);
        uVar1 = *(undefined1 *)(uVar4 + uVar5 + 0x20);
        *(undefined1 *)(uVar4 + uVar5 + 0x20) = *(undefined1 *)(uVar4 + lVar6 + 0x20);
        *(undefined1 *)(uVar4 + lVar6 + 0x20) = uVar1;
      }
      uVar5 = uVar5 + 1;
    } while ((long)uVar5 < lVar6);
  }
LAB_1005ba2e8:
  *unaff_x20 = uVar4;
  if (uVar5 < *(ulong *)(uVar4 + 0x10)) {
    return uVar5;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba2fc);
  (*pcVar2)();
}



/* Address: 0x1005ba32c | FUN_1005ba32c */

void FUN_1005ba32c(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005b992c(*param_1,*param_2);
  return;
}



/* Address: 0x1005ba338 | FUN_1005ba338 */

void FUN_1005ba338(void)

{
  (extension_Swift)::Swift::MutableCollection::__withUnsafeMutableBufferPointerIfSupported();
  return;
}



/* Address: 0x1005ba358 | FUN_1005ba358 */

void FUN_1005ba358(void)

{
  FUN_1005ba36c();
  return;
}



/* Address: 0x1005ba36c | FUN_1005ba36c */

void FUN_1005ba36c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  
  puVar1 = &DAT_100fd4078;
  local_50 = param_4;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1000f7830(&DAT_100fd4078,&DAT_100c645c8);
  Swift::Array<undefined>::_withContiguousMutableStorageIfAvailable
            (param_1,FUN_1005bb294,auStack_60,puVar1,param_4);
  return;
}



/* Address: 0x1005ba3dc | FUN_1005ba3dc */

void FUN_1005ba3dc(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long *unaff_x20;
  
  lVar1 = *param_2 + -1;
  if (SBORROW8(*param_2,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba40c);
    (*pcVar2)();
  }
  if ((-1 < lVar1) && (lVar1 < *(long *)(*unaff_x20 + 0x10) + -1)) {
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba410);
  (*pcVar2)();
}



/* Address: 0x1005ba410 | FUN_1005ba410 */

void FUN_1005ba410(long *param_1)

{
  long lVar1;
  code *pcVar2;
  long *unaff_x20;
  
  lVar1 = *param_1 + -1;
  if (SBORROW8(*param_1,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba440);
    (*pcVar2)();
  }
  if ((-1 < lVar1) && (lVar1 < *(long *)(*unaff_x20 + 0x10) + -1)) {
    *param_1 = lVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba444);
  (*pcVar2)();
}



/* Address: 0x1005ba444 | thunk_FUN_1005ba52c */

void thunk_FUN_1005ba52c(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  
  uVar1 = *param_2 + param_3;
  if (SCARRY8(*param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba554);
    (*pcVar2)();
  }
  if (uVar1 < *(ulong *)(*unaff_x20 + 0x10)) {
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba558);
  (*pcVar2)();
}



/* Address: 0x1005ba448 | FUN_1005ba448 */

void FUN_1005ba448(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1005b9ea4(uVar1,param_3,*param_4,*unaff_x20);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x1005ba47c | thunk_FUN_1005ba558 */

long thunk_FUN_1005ba558(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*param_1 < *(ulong *)(*unaff_x20 + 0x10) && *param_2 < *(ulong *)(*unaff_x20 + 0x10)) {
    return *param_2 - *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba580);
  (*pcVar1)();
}



/* Address: 0x1005ba480 | FUN_1005ba480 */

undefined1  [16] FUN_1005ba480(undefined1 *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar2 = *param_2;
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba4bc);
    (*pcVar1)();
  }
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x10)) {
    *param_1 = *(undefined1 *)(*unaff_x20 + uVar2 + 0x20);
    auVar3._8_8_ = param_1;
    auVar3._0_8_ = FUN_100004520;
    return auVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba4c0);
  (*pcVar1)();
}



/* Address: 0x1005ba4c0 | FUN_1005ba4c0 */

void FUN_1005ba4c0(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar4 = *(long *)(lVar2 + 0x10);
  if (lVar4 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba4f4);
    (*pcVar1)();
  }
  if (-1 < *param_2) {
    lVar3 = param_2[1];
    if (lVar3 < lVar4) {
      *param_1 = *param_2;
      param_1[1] = lVar3;
      param_1[2] = lVar2;
      _swift_bridgeObjectRetain();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba4fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba4f8);
  (*pcVar1)();
}



/* Address: 0x1005ba4fc | FUN_1005ba4fc */

void FUN_1005ba4fc(undefined8 *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  if (lVar2 != 0) {
    *param_1 = 0;
    param_1[1] = lVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba518);
  (*pcVar1)();
}



/* Address: 0x1005ba518 | FUN_1005ba518 */

bool FUN_1005ba518(void)

{
  long *unaff_x20;
  
  return *(long *)(*unaff_x20 + 0x10) == 1;
}



/* Address: 0x1005ba52c | FUN_1005ba52c */

void FUN_1005ba52c(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  
  uVar1 = *param_2 + param_3;
  if (SCARRY8(*param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba554);
    (*pcVar2)();
  }
  if (uVar1 < *(ulong *)(*unaff_x20 + 0x10)) {
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005ba558);
  (*pcVar2)();
}



/* Address: 0x1005ba558 | FUN_1005ba558 */

long FUN_1005ba558(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*param_1 < *(ulong *)(*unaff_x20 + 0x10) && *param_2 < *(ulong *)(*unaff_x20 + 0x10)) {
    return *param_2 - *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba580);
  (*pcVar1)();
}



/* Address: 0x1005ba580 | FUN_1005ba580 */

void FUN_1005ba580(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *param_2;
  if ((-1 < lVar2) && (lVar2 < *(long *)(*unaff_x20 + 0x10) + -1)) {
    *param_1 = lVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba5ac);
  (*pcVar1)();
}



/* Address: 0x1005ba5ac | FUN_1005ba5ac */

void FUN_1005ba5ac(long *param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *param_1;
  if ((-1 < lVar2) && (lVar2 < *(long *)(*unaff_x20 + 0x10) + -1)) {
    *param_1 = lVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba5d8);
  (*pcVar1)();
}



/* Address: 0x1005ba5d8 | FUN_1005ba5d8 */

void FUN_1005ba5d8(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  param_1[1] = 0;
  return;
}



/* Address: 0x1005ba5e4 | FUN_1005ba5e4 */

long FUN_1005ba5e4(void)

{
  code *pcVar1;
  long *unaff_x20;
  
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    return *(long *)(*unaff_x20 + 0x10) + -1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba5fc);
  (*pcVar1)();
}



/* Address: 0x1005ba5fc | FUN_1005ba5fc */

undefined8 FUN_1005ba5fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_1005bb988(uVar2);
  _swift_bridgeObjectRelease(uVar2);
  return uVar1;
}



/* Address: 0x1005ba630 | FUN_1005ba630 */

void FUN_1005ba630(void)

{
  FUN_1005bbb20();
  return;
}



/* Address: 0x1005ba638 | FUN_1005ba638 */

void FUN_1005ba638(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1005ba654(param_1,param_2,*unaff_x20,param_3);
  return;
}



/* Address: 0x1005ba654 | FUN_1005ba654 */

void FUN_1005ba654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_30 = param_4;
  uStack_28 = param_1;
  local_20 = param_2;
  Swift::Array<undefined>::_withContiguousStorageIfAvailable
            (FUN_1005bbc20,auStack_40,param_3,&DAT_100ee5d00,param_4);
  return;
}



/* Address: 0x1005ba690 | FUN_1005ba690 */

void FUN_1005ba690(undefined8 *param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  *param_1 = puVar1;
  return;
}



/* Address: 0x1005ba6d0 | FUN_1005ba6d0 */

void FUN_1005ba6d0(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1005b95c0(*param_1,param_1[1],param_2,param_3,param_4);
                    /* WARNING: Could not recover jumptable at 0x0001005ba71c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_3 + -8) + 8))(param_2,param_3);
  return;
}



/* Address: 0x1005ba720 | FUN_1005ba720 */

void FUN_1005ba720(ulong *param_1,byte *param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)*param_2;
  FUN_1005bbe90();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ba748 | FUN_1005ba748 */

void FUN_1005ba748(undefined1 *param_1)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10) + -1;
  FUN_1005af87c(lVar1,lVar1,*param_1);
  return;
}



/* Address: 0x1005ba760 | FUN_1005ba760 */

void FUN_1005ba760(undefined1 *param_1,undefined8 *param_2)

{
  FUN_1005af87c(*param_2,*param_2,*param_1);
  return;
}



/* Address: 0x1005ba770 | FUN_1005ba770 */

void FUN_1005ba770(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = (undefined1)*param_2;
  FUN_1005aead0();
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005ba798 | FUN_1005ba798 */

void FUN_1005ba798(undefined8 *param_1)

{
  FUN_1005afca4(*param_1,param_1[1]);
  return;
}



/* Address: 0x1005ba7a4 | FUN_1005ba7a4 */

void FUN_1005ba7a4(undefined2 *param_1)

{
  *param_1 = 0x100;
  return;
}



/* Address: 0x1005ba7b0 | FUN_1005ba7b0 */

void FUN_1005ba7b0(undefined1 *param_1,undefined1 param_2)

{
  FUN_1005b9768();
  *param_1 = param_2;
  return;
}



/* Address: 0x1005ba7d4 | FUN_1005ba7d4 */

void FUN_1005ba7d4(long param_1)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  if (param_1 == 0) {
    return;
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba82c);
    (*pcVar1)();
  }
  lVar2 = 0;
  FUN_1005b9ea4(0,param_1,*(long *)(*unaff_x20 + 0x10) + -1);
  if (((uint)param_1 & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba834);
    (*pcVar1)();
  }
  if (-1 < lVar2) {
    FUN_1005afca4(0,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba830);
  (*pcVar1)();
}



/* Address: 0x1005ba834 | FUN_1005ba834 */

void FUN_1005ba834(ulong param_1)

{
  code *pcVar1;
  undefined *puVar2;
  long *unaff_x20;
  
  if ((param_1 & 1) == 0) {
    _swift_bridgeObjectRelease();
    puVar2 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
    *unaff_x20 = (long)puVar2;
    return;
  }
  if (*(long *)(*unaff_x20 + 0x10) != 0) {
    FUN_1005afca4(0,*(long *)(*unaff_x20 + 0x10) + -1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba894);
  (*pcVar1)();
}



/* Address: 0x1005ba894 | FUN_1005ba894 */

void FUN_1005ba894(long param_1)

{
  code *pcVar1;
  long *unaff_x20;
  long unaff_x21;
  
  FUN_1005bbc50();
  if (unaff_x21 == 0) {
    if (*(long *)(*unaff_x20 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ba8d8);
      (*pcVar1)();
    }
    FUN_1005afca4();
  }
  return;
}



/* Address: 0x1005ba8d8 | FUN_1005ba8d8 */

void FUN_1005ba8d8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100fd4068;
  FUN_1000f7830(&DAT_100fd4068,&DAT_100c645c0);
  lVar3 = *(long *)(puVar1 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005bb1a4();
  Swift::Encoder::_container();
  local_58 = param_2;
  FUN_1000f7830(&DAT_100fd4078,&DAT_100c645c8);
  FUN_1005bb1e4(&DAT_100fd4080,FUN_1005bb254,
                PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
  Swift::KeyedEncodingContainer::_encode(&local_58);
  (**(code **)(lVar3 + 8))(auStack_60 + -(lVar2 + 0xfU & 0xfffffffffffffff0),puVar1);
  return;
}



/* Address: 0x1005ba9f4 | FUN_1005ba9f4 */

void FUN_1005ba9f4(undefined8 param_1,Hasher param_2)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  __uint8 *p_Var3;
  
  lVar2 = *unaff_x20;
  Swift::Hasher::_combine(*(__uint64 *)(lVar2 + 0x10),param_2);
  lVar1 = *(long *)(lVar2 + 0x10);
  if (lVar1 != 0) {
    p_Var3 = (__uint8 *)(lVar2 + 0x20);
    do {
      Swift::Hasher::_combine(*p_Var3,param_2);
      lVar1 = lVar1 + -1;
      p_Var3 = p_Var3 + 1;
    } while (lVar1 != 0);
  }
  return;
}



/* Address: 0x1005baa44 | FUN_1005baa44 */

void FUN_1005baa44(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  HVar1.unknown = *(undefined **)(lVar3 + 0x10);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  lVar2 = *(long *)(lVar3 + 0x10);
  if (lVar2 != 0) {
    pbVar4 = (byte *)(lVar3 + 0x20);
    do {
      HVar1.unknown = (undefined *)(ulong)*pbVar4;
      Swift::Hasher::_combine(*pbVar4,param_2);
      lVar2 = lVar2 + -1;
      pbVar4 = pbVar4 + 1;
    } while (lVar2 != 0);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005baaac | FUN_1005baaac */

void FUN_1005baaac(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1005bbfd4();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1005baad4 | FUN_1005baad4 */

void FUN_1005baad4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005ba8d8(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005baaec | FUN_1005baaec */

void FUN_1005baaec(size_t *param_1,char *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  size_t sVar3;
  undefined *puVar4;
  
  sVar3 = _strlen(param_2);
  puVar1 = (undefined *)(sVar3 + 1);
  if (SCARRY8(sVar3,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1005bab68);
    (*pcVar2)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar1 != (undefined *)0x0) {
    puVar4 = puVar1;
    FUN_1005bba24(puVar1,0);
    _memcpy(puVar4 + 0x20,param_2,(size_t)puVar1);
  }
  *param_1 = (size_t)puVar4;
  return;
}



/* Address: 0x1005bab68 | thunk_FUN_1005bab6c */

void thunk_FUN_1005bab6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  FUN_1005b9ae8(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005bab6c | FUN_1005bab6c */

void FUN_1005bab6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = param_2[1];
  FUN_1005b9ae8(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005babbc | FUN_1005babbc */

void FUN_1005babbc(undefined8 *param_1,UnsafeBufferPointer<__int8> param_2,char *param_3,
                  void *param_4)

{
  char *pcVar1;
  String SVar2;
  tuple2_conflict1 tVar3;
  
  pcVar1 = (char *)0x0;
  if (param_2.unknown != (undefined *)0x0) {
    pcVar1 = param_3;
  }
  SVar2.bridgeObject = param_4;
  SVar2.str = pcVar1;
  tVar3 = Swift::String::_fromUTF8Repairing(param_2,SVar2);
  *param_1 = tVar3.result.str;
  param_1[1] = tVar3.result.bridgeObject;
  return;
}



/* Address: 0x1005babf0 | FUN_1005babf0 */

undefined1  [16] FUN_1005babf0(void)

{
  long *unaff_x20;
  undefined1 local_30 [16];
  
  FUN_1005babbc(local_30,*unaff_x20 + 0x20,*(long *)(*unaff_x20 + 0x10) + -1);
  return local_30;
}



/* Address: 0x1005bac30 | FUN_1005bac30 */

String FUN_1005bac30(void)

{
  long *unaff_x20;
  String SVar1;
  char *local_40;
  void *pvStack_38;
  
  FUN_1005babbc(&local_40,*unaff_x20 + 0x20,*(long *)(*unaff_x20 + 0x10) + -1);
  SVar1.bridgeObject = pvStack_38;
  SVar1.str = local_40;
  SVar1 = Swift::String::get_debugDescription(SVar1);
  _swift_bridgeObjectRelease(pvStack_38);
  return SVar1;
}


