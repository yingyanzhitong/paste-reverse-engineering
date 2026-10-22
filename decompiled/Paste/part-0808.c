/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008da914 | FUN_1008da914 */

byte FUN_1008da914(void)

{
  long *unaff_x20;
  
  return *(byte *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) >> 3 & 1;
}



/* Address: 0x1008da928 | FUN_1008da928 */

void FUN_1008da928(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long unaff_x21;
  long lVar4;
  
  lVar4 = *unaff_x20;
  uVar2 = param_1;
  (**(code **)(lVar4 + 0x248))();
  if ((uVar2 & 1) == 0) {
    if (DAT_100fec600 != -1) {
      _swift_once(&DAT_100fec600,FUN_100901fbc);
    }
    _swift_errorRetain(DAT_101058180);
  }
  else {
    *(char *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0xe0)) = (char)param_1;
    uVar3 = 0;
    FUN_1008d732c(0,*(undefined8 *)(lVar4 + 0x50),*(undefined8 *)(lVar4 + 0x58));
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c836a0,uVar3);
    FUN_10093d9b8();
    if (unaff_x21 == 0) {
      return;
    }
    lVar4 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 200));
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008daa54);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_10062cce4();
    _swift_release(lVar4);
    (**(code **)(*unaff_x20 + 0x300))();
  }
  _swift_willThrow();
  return;
}



/* Address: 0x1008daa54 | FUN_1008daa54 */

void FUN_1008daa54(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x65766f207473756d,0xed00006564697272,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008daab4);
  (*pcVar1)();
}



/* Address: 0x1008daab4 | FUN_1008daab4 */

void FUN_1008daab4(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x65766f207473756d,0xed00006564697272,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008dab14);
  (*pcVar1)();
}



/* Address: 0x1008dab14 | FUN_1008dab14 */

void FUN_1008dab14(void)

{
  code *pcVar1;
  String SVar2;
  
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0x65766f207473756d,0xed00006564697272,
             0xdb47e0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008dab74);
  (*pcVar1)();
}



/* Address: 0x1008dab74 | FUN_1008dab74 */

undefined8 * FUN_1008dab74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  uVar1 = param_2[2];
  param_1[2] = uVar1;
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined2 *)((long)param_1 + 0x19) = *(undefined2 *)((long)param_2 + 0x19);
  _swift_unknownObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1008dabc4 | FUN_1008dabc4 */

undefined8 * FUN_1008dabc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  param_1[1] = uVar2;
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  return param_1;
}



/* Address: 0x1008dac3c | FUN_1008dac3c */

void FUN_1008dac3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = *(undefined8 *)((long)param_2 + 0xb);
  *(undefined8 *)((long)param_1 + 0x13) = *(undefined8 *)((long)param_2 + 0x13);
  *(undefined8 *)((long)param_1 + 0xb) = uVar3;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008dac50 | FUN_1008dac50 */

undefined8 * FUN_1008dac50(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 3) = *(undefined1 *)(param_2 + 3);
  *(undefined1 *)((long)param_1 + 0x19) = *(undefined1 *)((long)param_2 + 0x19);
  *(undefined1 *)((long)param_1 + 0x1a) = *(undefined1 *)((long)param_2 + 0x1a);
  return param_1;
}



/* Address: 0x1008dacac | FUN_1008dacac */

int FUN_1008dacac(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x1b) != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008dacf4 | FUN_1008dacf4 */

void FUN_1008dacf4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *(undefined1 *)((long)param_1 + 0x1a) = 0;
    *(undefined2 *)(param_1 + 3) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x1b) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x1b) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008dad3c | FUN_1008dad3c */

undefined1  [16] FUN_1008dad3c(void)

{
  return ZEXT816(0x100f0f4e8);
}



/* Address: 0x1008dad4c | FUN_1008dad4c */

void FUN_1008dad4c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008dad58 | thunk_FUN_1008d6cec */

void thunk_FUN_1008d6cec(void)

{
  FUN_1008d6cec();
  return;
}



/* Address: 0x1008dad5c | FUN_1008dad5c */

void FUN_1008dad5c(void)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0x360))();
  return;
}



/* Address: 0x1008dad78 | FUN_1008dad78 */

void FUN_1008dad78(void)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0x368))();
  return;
}



/* Address: 0x1008dad94 | FUN_1008dad94 */

void FUN_1008dad94(void)

{
  long *unaff_x20;
  
  (**(code **)(*unaff_x20 + 0x370))();
  return;
}



/* Address: 0x1008dadb0 | FUN_1008dadb0 */

void FUN_1008dadb0(void)

{
  FUN_1008d7338();
  return;
}



/* Address: 0x1008dadc4 | FUN_1008dadc4 */

void FUN_1008dadc4(void)

{
  FUN_1008d73d4();
  return;
}



/* Address: 0x1008dadd8 | thunk_FUN_1008d96e8 */

void thunk_FUN_1008d96e8(void)

{
  FUN_1008d96e8();
  return;
}



/* Address: 0x1008daddc | thunk_FUN_1008d9a6c */

void thunk_FUN_1008d9a6c(void)

{
  FUN_1008d9a6c();
  return;
}



/* Address: 0x1008dade0 | FUN_1008dade0 */

void FUN_1008dade0(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dade8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x2e0))();
  return;
}



/* Address: 0x1008dadec | thunk_FUN_1008da908 */

void thunk_FUN_1008da908(void)

{
  FUN_1008da908();
  return;
}



/* Address: 0x1008dadf0 | thunk_FUN_1008d89e0 */

void thunk_FUN_1008d89e0(void)

{
  FUN_1008d89e0();
  return;
}



/* Address: 0x1008dadf4 | thunk_FUN_1008d8c84 */

void thunk_FUN_1008d8c84(void)

{
  FUN_1008d8c84();
  return;
}



/* Address: 0x1008dadf8 | FUN_1008dadf8 */

void FUN_1008dadf8(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dae00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x2f8))();
  return;
}



/* Address: 0x1008dae04 | FUN_1008dae04 */

void FUN_1008dae04(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dae0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x300))();
  return;
}



/* Address: 0x1008dae10 | FUN_1008dae10 */

void FUN_1008dae10(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dae18. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x308))();
  return;
}



/* Address: 0x1008dae1c | FUN_1008dae1c */

void FUN_1008dae1c(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dae24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x340))();
  return;
}



/* Address: 0x1008dae28 | thunk_FUN_1008d6b4c */

void thunk_FUN_1008d6b4c(void)

{
  thunk_FUN_1008d6b4c();
  return;
}



/* Address: 0x1008dae2c | FUN_1008dae2c */

void FUN_1008dae2c(void)

{
  FUN_1008db320();
  _swift_retain();
  return;
}



/* Address: 0x1008dae40 | FUN_1008dae40 */

void FUN_1008dae40(void)

{
  FUN_1008db330();
  _swift_retain();
  return;
}



/* Address: 0x1008dae54 | thunk_FUN_1008d6de0 */

void thunk_FUN_1008d6de0(void)

{
  FUN_1008d6de0();
  return;
}



/* Address: 0x1008dae58 | thunk_FUN_1008d6e0c */

void thunk_FUN_1008d6e0c(void)

{
  FUN_1008d6e0c();
  return;
}



/* Address: 0x1008dae5c | thunk_FUN_1008d773c */

void thunk_FUN_1008d773c(void)

{
  FUN_1008d773c();
  return;
}



/* Address: 0x1008dae60 | thunk_FUN_1008d7f54 */

void thunk_FUN_1008d7f54(void)

{
  FUN_1008d7f54();
  return;
}



/* Address: 0x1008dae64 | FUN_1008dae64 */

void FUN_1008dae64(void)

{
  long *unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008dae6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*unaff_x20 + 0x260))();
  return;
}



/* Address: 0x1008dae70 | thunk_FUN_1008d6e70 */

void thunk_FUN_1008d6e70(void)

{
  FUN_1008d6e70();
  return;
}



/* Address: 0x1008dae74 | FUN_1008dae74 */

void FUN_1008dae74(void)

{
  FUN_1008db310();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008dae9c | thunk_FUN_1008daea0 */

void thunk_FUN_1008daea0(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = 0;
  FUN_1008db3b8(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  param_1[3] = uVar1;
  param_1[4] = &PTR_PTR_100f0fb48;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1008daea0 | FUN_1008daea0 */

void FUN_1008daea0(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  
  uVar1 = 0;
  FUN_1008db3b8(0,*(undefined8 *)(*unaff_x20 + 0x50),*(undefined8 *)(*unaff_x20 + 0x58));
  param_1[3] = uVar1;
  param_1[4] = &PTR_PTR_100f0fb48;
  *param_1 = unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1008daee0 | FUN_1008daee0 */

void FUN_1008daee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10061d750(param_1,param_3,param_2);
  return;
}



/* Address: 0x1008daef0 | FUN_1008daef0 */

void FUN_1008daef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10061d278(param_1,param_2,param_4,param_3);
  return;
}



/* Address: 0x1008daf00 | FUN_1008daf00 */

void FUN_1008daf00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10061d814(param_1,param_3,param_2);
  return;
}



/* Address: 0x1008daf10 | FUN_1008daf10 */

void FUN_1008daf10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_10061d2f4(param_1,param_2,param_4,param_3);
  return;
}



/* Address: 0x1008daf20 | FUN_1008daf20 */

void FUN_1008daf20(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008daf48 | FUN_1008daf48 */

void FUN_1008daf48(void)

{
  FUN_10061d040();
  return;
}



/* Address: 0x1008daf70 | FUN_1008daf70 */

void FUN_1008daf70(void)

{
  FUN_10061d154();
  return;
}



/* Address: 0x1008daf98 | FUN_1008daf98 */

void FUN_1008daf98(void)

{
  FUN_10061d26c();
  return;
}



/* Address: 0x1008dafc0 | FUN_1008dafc0 */

void FUN_1008dafc0(undefined8 param_1)

{
  FUN_10061d284(param_1,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008dafe8 | FUN_1008dafe8 */

void FUN_1008dafe8(void)

{
  FUN_10061d298();
  return;
}



/* Address: 0x1008db010 | FUN_1008db010 */

void FUN_1008db010(undefined8 param_1)

{
  FUN_10061d360(param_1,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008db038 | FUN_1008db038 */

void FUN_1008db038(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x1008db060 | FUN_1008db060 */

void FUN_1008db060(void)

{
  FUN_10061d704();
  return;
}



/* Address: 0x1008db088 | FUN_1008db088 */

void FUN_1008db088(undefined8 param_1,long param_2)

{
  _swift_getAssociatedConformanceWitness
            (*(undefined8 *)(param_2 + 0x58),*(undefined8 *)(param_2 + 0x50),param_1,0x100cc60fc,
             &TargetProtocolRequirement_100cc610c);
  return;
}



/* Address: 0x1008db0a4 | FUN_1008db0a4 */

void FUN_1008db0a4(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  (**(code **)(*param_3 + 0x2c0))(param_1,param_2,param_5,param_7);
  return;
}



/* Address: 0x1008db0d4 | FUN_1008db0d4 */

void FUN_1008db0d4(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  (**(code **)(*param_2 + 0x2d0))(param_1,param_4,param_6);
  return;
}



/* Address: 0x1008db104 | FUN_1008db104 */

void FUN_1008db104(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *unaff_x20;
  
  FUN_1008db0a4(param_1,param_2,*unaff_x20,param_4,param_3,param_6,param_4);
  return;
}



/* Address: 0x1008db124 | FUN_1008db124 */

void FUN_1008db124(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *unaff_x20;
  
  FUN_1008db0d4(param_1,*unaff_x20,param_3,param_2,param_5,param_3);
  return;
}



/* Address: 0x1008db144 | FUN_1008db144 */

void FUN_1008db144(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f0f848;
  _swift_allocObject(&DAT_100f0f848,0x20,7);
  *(long *)(puVar4 + 0x10) = param_2;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar6)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008db22c | FUN_1008db22c */

undefined1  [16] FUN_1008db22c(void)

{
  long *unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  auVar1._8_8_ = &PTR_PTR_100f19fa8;
  return auVar1;
}



/* Address: 0x1008db244 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008db248 | FUN_1008db248 */

/* WARNING: Removing unreachable block (ram,0x0001008db30c) */

void FUN_1008db248(void)

{
  code *pcVar1;
  int iVar2;
  ulong uVar3;
  long *unaff_x20;
  ulong uVar4;
  long lVar5;
  
  uVar4 = *(ulong *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  uVar3 = uVar4;
  _swift_getObjectType();
  _swift_unknownObjectRetain(uVar4);
  FUN_1009416b4();
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008db304);
    (*pcVar1)();
  }
  _swift_unknownObjectRelease(uVar4);
  lVar5 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x80));
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar5 + 0x10));
  if (iVar2 == 0) {
    FUN_1008d6aec();
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar5 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008db30c);
      (*pcVar1)();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008db308);
  (*pcVar1)();
}



/* Address: 0x1008db310 | FUN_1008db310 */

void FUN_1008db310(void)

{
  return;
}


