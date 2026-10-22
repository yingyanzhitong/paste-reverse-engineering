/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100937e3c | FUN_100937e3c */

undefined8 FUN_100937e3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  
  uVar1 = 0;
  FUN_10093977c(0);
  _swift_allocObject();
  _swift_retain(param_3);
  uVar2 = param_2;
  _swift_retain();
  FUN_1009389bc();
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + 0x180) = uVar2;
    FUN_1006648f0(&local_78,0x40,0x800,0x10000);
    puVar3 = &DAT_100f192b0;
    _swift_allocObject(&DAT_100f192b0,0x38,7);
    *(undefined8 *)(puVar3 + 0x18) = uStack_70;
    *(undefined8 *)(puVar3 + 0x10) = local_78;
    *(undefined8 *)(puVar3 + 0x28) = uStack_60;
    *(undefined8 *)(puVar3 + 0x20) = local_68;
    puVar3[0x30] = local_58;
    _swift_retain(uVar2);
    FUN_100937b14();
    _swift_release(param_2);
    _swift_release(param_3);
  }
  else {
    _swift_release(param_1);
    _swift_release(param_2);
    _swift_release(param_3);
    _swift_deallocPartialClassInstance();
    uVar2 = uVar1;
  }
  return uVar2;
}



/* Address: 0x100937f9c | FUN_100937f9c */

uint FUN_100937f9c(uint param_1)

{
  FUN_100937fb4();
  return param_1 & 1;
}



/* Address: 0x100937fb4 | FUN_100937fb4 */

undefined8 FUN_100937fb4(void)

{
  undefined8 uVar1;
  
  if (DAT_100fec610 != -1) {
    _swift_once(&DAT_100fec610,FUN_100901fcc);
  }
  uVar1 = DAT_1010581f0;
  _swift_willThrow();
  _swift_errorRetain(uVar1);
  return 0;
}



/* Address: 0x100938014 | FUN_100938014 */

void FUN_100938014(void)

{
  undefined8 uVar1;
  
  if (DAT_100fec5f8 != -1) {
    _swift_once(&DAT_100fec5f8,FUN_100901f9c);
  }
  uVar1 = DAT_101058190;
  _swift_willThrow();
  _swift_errorRetain(uVar1);
  return;
}



/* Address: 0x100938070 | FUN_100938070 */

void FUN_100938070(undefined8 param_1,uint param_2)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x180);
  lVar1 = *(long *)(lVar2 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    _swift_retain();
    FUN_10094a464(lVar1,param_2 & 0x25,param_1);
    _swift_release(lVar1);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar1 = *(long *)(lVar2 + 0x18);
  if (lVar1 != 0) {
    _swift_retain();
    _swift_retain(lVar1);
    FUN_10094a6b0();
    _swift_release(lVar1);
  }
  return;
}



/* Address: 0x100938124 | FUN_100938124 */

void FUN_100938124(undefined8 param_1,uint param_2)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x180);
  lVar1 = *(long *)(lVar2 + 0x10);
  if (((lVar1 != 0) && ((param_2 & 0xff) - 1 < 2)) && (-1 < *(int *)(lVar1 + 0x10))) {
    _swift_retain(lVar1);
    FUN_1009516e8();
    _swift_release(lVar1);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar1 = *(long *)(lVar2 + 0x18);
  if ((lVar1 != 0 && (param_2 & 0xfd) == 0) && (-1 < *(int *)(lVar1 + 0x10))) {
    _swift_retain(lVar1);
    FUN_1009516e8();
    _swift_release(lVar1);
  }
  return;
}



/* Address: 0x1009381d4 | FUN_1009381d4 */

void FUN_1009381d4(void)

{
  long unaff_x20;
  long unaff_x21;
  long lVar1;
  long lVar2;
  
  lVar2 = *(long *)(unaff_x20 + 0x180);
  lVar1 = *(long *)(lVar2 + 0x10);
  if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 0x10))) {
    _swift_retain(lVar1);
    FUN_100951310();
    _swift_release(lVar1);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar1 = *(long *)(lVar2 + 0x18);
  if ((lVar1 != 0) && (-1 < *(int *)(lVar1 + 0x10))) {
    _swift_retain(lVar1);
    FUN_100951310();
    _swift_release(lVar1);
  }
  return;
}



/* Address: 0x10093827c | FUN_10093827c */

/* WARNING: Removing unreachable block (ram,0x0001009383bc) */
/* WARNING: Removing unreachable block (ram,0x0001009383c4) */

void FUN_10093827c(void)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  undefined8 *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x180);
  lVar4 = *(long *)(lVar6 + 0x18);
  if ((lVar4 == 0) || (uVar1 = *(uint *)(lVar4 + 0x10), (int)uVar1 < 0)) {
    return;
  }
  if (*(char *)(*(long *)(unaff_x20 + 0x30) + 0x70) == '\0') {
    puVar5 = *(undefined8 **)(*(long *)(unaff_x20 + 0x30) + 0x10);
    _swift_retain(lVar4);
    FUN_100938124(puVar5,0);
    uVar1 = *(uint *)(lVar4 + 0x10);
    if ((int)uVar1 < 0) {
      FUN_1008d5300();
      puVar3 = &DAT_100ef11e8;
      _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
      *puVar5 = 0xd00000000000002e;
      puVar5[1] = 0x8000000100db4d00;
      *(undefined4 *)(puVar5 + 2) = 9;
      _swift_willThrow();
      _swift_unexpectedError(puVar3,"NIOPosix/PipeChannel.swift",0x1a,1,0x7e);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100938450);
      (*pcVar2)();
    }
  }
  else {
    _swift_retain(lVar4);
  }
  puVar5 = (undefined8 *)(ulong)uVar1;
  *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
  FUN_10095d958();
  lVar6 = *(long *)(lVar6 + 0x10);
  if ((lVar6 != 0) && (-1 < *(int *)(lVar6 + 0x10))) {
    _swift_release(lVar4);
    return;
  }
  FUN_1008d5300();
  puVar3 = &DAT_100ef11e8;
  _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
  *puVar5 = 0x70206e656b6f7242;
  puVar5[1] = 0xeb00000000657069;
  *(undefined4 *)(puVar5 + 2) = 0x20;
  FUN_10094fd38();
  _swift_release(lVar4);
  _swift_errorRelease(puVar3);
  return;
}



/* Address: 0x100938450 | FUN_100938450 */

void FUN_100938450(ulong param_1)

{
  code *pcVar1;
  long unaff_x20;
  long unaff_x21;
  
  if ((param_1 & 0xff) == 0) {
    if ((*(char *)(*(long *)(unaff_x20 + 0x30) + 0x70) == '\0') &&
       (FUN_100938124(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10),0), unaff_x21 != 0)) {
      _swift_unexpectedError();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10093850c);
      (*pcVar1)();
    }
  }
  else if (((((uint)param_1 & 0xff) == 1) && (*(char *)(*(long *)(unaff_x20 + 0x30) + 0x70) == '\0')
           ) && (FUN_100938124(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x10),1),
                unaff_x21 != 0)) {
    _swift_unexpectedError();
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009384b4);
    (*pcVar1)();
  }
  FUN_10094fba0(param_1);
  return;
}



/* Address: 0x10093850c | FUN_10093850c */

void FUN_10093850c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x180));
  return;
}



/* Address: 0x100938514 | FUN_100938514 */

void FUN_100938514(long param_1)

{
  thunk_FUN_10094d8e8();
  FUN_100622430(*(undefined8 *)(param_1 + 0x158),*(undefined8 *)(param_1 + 0x160),
                *(undefined8 *)(param_1 + 0x168));
  _swift_release(*(undefined8 *)(param_1 + 0x178));
  _swift_release(*(undefined8 *)(param_1 + 0x180));
  _swift_deallocClassInstance(param_1,0x188,7);
  return;
}



/* Address: 0x10093855c | FUN_10093855c */

void FUN_10093855c(undefined8 param_1)

{
  if (DAT_100fed0b0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc5454);
  return;
}



/* Address: 0x100938594 | FUN_100938594 */

void FUN_100938594(long param_1)

{
  undefined *local_18;
  
  local_18 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  _swift_initClassMetadata2(param_1,0x100,1,&local_18,param_1 + 0x420);
  return;
}



/* Address: 0x1009385d8 | FUN_1009385d8 */

undefined1  [16] FUN_1009385d8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  bool bVar3;
  Optional OVar4;
  byte *pbVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  Swift::_StringGuts::grow(0x46,param_2);
  SVar11.bridgeObject = (void *)0xee00207b206c656e;
  SVar11.str = (char *)0x6e61684365706950;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 0x48),SVar15);
  pbVar5 = (byte *)0x657669746361202c;
  SVar8.bridgeObject = (void *)0xeb00000000203d20;
  SVar8.str = (char *)0x657669746361202c;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar8,SVar16);
  (**(code **)(**(long **)(unaff_x20 + 0x40) + 0x88))();
  bVar3 = (*pbVar5 & 1) != 0;
  pcVar1 = (char *)0x65736c6166;
  if (bVar3) {
    pcVar1 = (char *)0x65757274;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  SVar9.bridgeObject = puVar2;
  SVar9.str = pcVar1;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar9,SVar17);
  _swift_bridgeObjectRelease(puVar2);
  uVar7 = 0x8000000100db4ca0;
  uVar6 = 0xd000000000000011;
  SVar10.bridgeObject = (void *)0x8000000100db4ca0;
  SVar10.str = (char *)0xd000000000000011;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar10,SVar18);
  FUN_100937a78();
  FUN_1005d8534(uVar7);
  OVar4.value = 8;
  FUN_1000f7830(&DAT_100fed508,&DAT_100c860e0);
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar11,SVar19);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  uVar6 = 0x8000000100db4cc0;
  SVar12.bridgeObject = (void *)0x8000000100db4cc0;
  SVar12.str = (char *)0xd000000000000012;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar12,SVar20);
  FUN_100937a78();
  FUN_1005d8534();
  SVar11 = Swift::Optional::get_debugDescription(OVar4);
  FUN_1005d8534(uVar6);
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar11,SVar21);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar13.bridgeObject = &SUB_e200000000000000;
  SVar13.str = (char *)0x7d20;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar13,SVar22);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1009387d8 | FUN_1009387d8 */

void FUN_1009387d8(void)

{
  FUN_1009385d8();
  return;
}



/* Address: 0x1009387f8 | FUN_1009387f8 */

void FUN_1009387f8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100938808 | FUN_100938808 */

undefined1  [16] FUN_100938808(void)

{
  return ZEXT816(0x100f19348);
}



/* Address: 0x100938818 | thunk_FUN_10093881c */

void thunk_FUN_10093881c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8537c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8537c,&DAT_100f19348);
  DAT_100fed510 = pTVar1;
  return;
}



/* Address: 0x10093881c | FUN_10093881c */

void FUN_10093881c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed510 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8537c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8537c,&DAT_100f19348);
  DAT_100fed510 = pTVar1;
  return;
}



/* Address: 0x10093885c | FUN_10093885c */

uint FUN_10093885c(uint param_1)

{
  FUN_100937f9c();
  return param_1 & 1;
}



/* Address: 0x100938874 | thunk_FUN_100937a78 */

undefined1  [16] thunk_FUN_100937a78(void)

{
  code *pcVar1;
  int iVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auVar7 [16];
  
  ppuVar3 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + 0x40));
  if (*ppuVar3 == extraout_x8) {
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
  }
  else {
    lVar6 = *(long *)(unaff_x20 + 0x38);
    iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b10);
      (*pcVar1)();
    }
    uVar4 = *(undefined8 *)(unaff_x20 + 0xe0);
    uVar5 = *(undefined8 *)(unaff_x20 + 0xe8);
    FUN_1005d84e8(uVar4);
    FUN_1005d84e8(uVar5);
    iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
    if (iVar2 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100937b14);
      (*pcVar1)();
    }
  }
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = uVar4;
  return auVar7;
}



/* Address: 0x100938878 | FUN_100938878 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100938878(void)

{
  return ZEXT816(0x100fed558);
}



/* Address: 0x100938898 | FUN_100938898 */

undefined1  [16] FUN_100938898(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  long unaff_x20;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  Swift::_StringGuts::grow(0x28,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar1 = (char *)0x65757274;
  if (0x7fffffff < *(uint *)(unaff_x20 + 0x10)) {
    pcVar1 = (char *)0x65736c6166;
  }
  puVar2 = &DAT_e400000000000000;
  if (0x7fffffff < *(uint *)(unaff_x20 + 0x10)) {
    puVar2 = &DAT_e500000000000000;
  }
  SVar5.bridgeObject = puVar2;
  SVar5.str = pcVar1;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  _swift_bridgeObjectRelease(puVar2);
  SVar4.bridgeObject = &DAT_e600000000000000;
  SVar4.str = (char *)0x203a6466202c;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  SVar5 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar6.bridgeObject = (void *)0xe100000000000000;
  SVar6.str = (char *)0x29;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar6,SVar10);
  auVar3._8_8_ = 0x8000000100db4d30;
  auVar3._0_8_ = 0xd00000000000001d;
  return auVar3;
}



/* Address: 0x10093899c | FUN_10093899c */

void FUN_10093899c(void)

{
  FUN_100938898();
  return;
}



/* Address: 0x1009389bc | FUN_1009389bc */

/* WARNING: Removing unreachable block (ram,0x000100938c5c) */
/* WARNING: Removing unreachable block (ram,0x000100938ce4) */
/* WARNING: Removing unreachable block (ram,0x000100938ca0) */
/* WARNING: Removing unreachable block (ram,0x000100938cec) */
/* WARNING: Removing unreachable block (ram,0x000100938cbc) */
/* WARNING: Removing unreachable block (ram,0x000100938d14) */
/* WARNING: Removing unreachable block (ram,0x000100938d24) */
/* WARNING: Removing unreachable block (ram,0x000100938c38) */

void FUN_1009389bc(long param_1,undefined8 param_2)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined *puVar10;
  long unaff_x20;
  long unaff_x21;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 *puVar14;
  long local_60 [2];
  
  *(long *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  _swift_retain(param_2);
  _swift_retain(param_1);
  FUN_100938dac();
  if (unaff_x21 == 0) {
    local_60[0] = param_1;
    local_60[1] = param_2;
    _swift_retain(param_1);
    _swift_retain(param_2);
    lVar13 = 0;
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (lVar13 != 2) {
      lVar11 = local_60[lVar13];
      lVar13 = lVar13 + 1;
      if (lVar11 != 0) {
        _swift_retain(lVar11);
        puVar7 = puVar10;
        _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
        if ((((int)puVar7 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
          if ((ulong)puVar10 >> 0x3e == 0) {
            lVar6 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
          }
          else {
            _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
            if ((undefined *)0x7fffffffffffffff < puVar10) {
              _Var1.unknown = puVar10;
            }
            lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
          }
          puVar7 = (undefined *)0x0;
          FUN_1009030f0(0,lVar6 + 1,1,puVar10);
          puVar10 = puVar7;
        }
        uVar9 = (ulong)puVar10 & 0xffffffffffffff8;
        uVar2 = *(ulong *)(uVar9 + 0x10);
        if (*(ulong *)(uVar9 + 0x18) >> 1 <= uVar2) {
          puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar9 + 0x18));
          FUN_1009030f0(puVar7,uVar2 + 1,1,puVar10);
          uVar9 = (ulong)puVar7 & 0xffffffffffffff8;
          puVar10 = puVar7;
        }
        *(ulong *)(uVar9 + 0x10) = uVar2 + 1;
        *(long *)(uVar9 + uVar2 * 8 + 0x20) = lVar11;
      }
    }
    puVar7 = &DAT_100fed6c8;
    FUN_1000f7830(&DAT_100fed6c8,&DAT_100c85498);
    _swift_arrayDestroy(local_60,2,puVar7);
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar13 = *(long *)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
      if ((undefined *)0x7fffffffffffffff < puVar10) {
        _Var1.unknown = puVar10;
      }
      lVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    }
    if (lVar13 != 0) {
      puVar14 = (undefined8 *)0x0;
      do {
        if (((ulong)puVar10 & 0xc000000000000001) == 0) {
          if (*(undefined8 **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10) <= puVar14) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100938d58);
            (*pcVar4)();
          }
          puVar12 = *(undefined8 **)(puVar10 + (long)puVar14 * 8 + 0x20);
          puVar8 = puVar12;
          _swift_retain();
        }
        else {
          puVar12 = puVar14;
          FUN_100942fb8(puVar14,puVar10);
          puVar8 = puVar12;
        }
        if (SCARRY8((long)puVar14,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100938be8);
          (*pcVar4)();
        }
        lVar11 = (long)puVar14 + 1;
        uVar3 = *(uint *)(puVar12 + 2);
        if ((int)uVar3 < 0) {
          FUN_1008d5300();
          _swift_allocError(&DAT_100ef11e8,puVar8,0,0);
          *puVar8 = 0xd00000000000002c;
          puVar8[1] = 0x8000000100db4dc0;
          *(undefined4 *)(puVar8 + 2) = 9;
          _swift_willThrow();
          _swift_release(param_1);
          _swift_release(param_2);
          _swift_release(puVar12);
          goto LAB_100938d7c;
        }
        uVar5 = uVar3;
        FUN_10095e9d0(uVar3,3,0);
        FUN_10095e9d0(uVar3,4,uVar5 | 4);
        _swift_release(puVar12);
        puVar14 = (undefined8 *)((long)puVar14 + 1);
      } while (lVar11 != lVar13);
    }
    _swift_release(param_1);
LAB_100938d7c:
    _swift_release();
    _swift_bridgeObjectRelease(puVar10);
  }
  else {
    _swift_release(param_1);
    _swift_release(param_2);
    _swift_release();
  }
  return;
}



/* Address: 0x100938dac | FUN_100938dac */

/* WARNING: Removing unreachable block (ram,0x000100939030) */

void FUN_100938dac(void)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long unaff_x20;
  long lVar9;
  undefined8 *puVar10;
  long unaff_x21;
  undefined8 *puVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 local_a8;
  undefined8 uStack_a0;
  int local_98;
  long local_70 [2];
  
  lVar12 = *(long *)(unaff_x20 + 0x10);
  local_70[1] = *(undefined8 *)(unaff_x20 + 0x18);
  local_70[0] = lVar12;
  _swift_retain();
  _swift_retain(lVar12);
  lVar12 = 0;
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  while (lVar12 != 2) {
    lVar9 = local_70[lVar12];
    lVar12 = lVar12 + 1;
    if (lVar9 != 0) {
      _swift_retain(lVar9);
      puVar5 = puVar6;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar5 == 0) || ((long)puVar6 < 0)) ||
         (puVar5 = puVar6, ((ulong)puVar6 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar6 >> 0x3e == 0) {
          lVar4 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
        }
        else {
          _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
          if ((undefined *)0x7fffffffffffffff < puVar6) {
            _Var1.unknown = puVar6;
          }
          lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        }
        puVar5 = (undefined *)0x0;
        FUN_1009030f0(0,lVar4 + 1,1,puVar6);
      }
      uVar8 = (ulong)puVar5 & 0xffffffffffffff8;
      uVar2 = *(ulong *)(uVar8 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar2) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_1009030f0(puVar6,uVar2 + 1,1,puVar5);
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
      }
      *(ulong *)(uVar8 + 0x10) = uVar2 + 1;
      *(long *)(uVar8 + uVar2 * 8 + 0x20) = lVar9;
    }
  }
  puVar5 = &DAT_100fed6c8;
  FUN_1000f7830(&DAT_100fed6c8,&DAT_100c85498);
  _swift_arrayDestroy(local_70,2,puVar5);
  if ((ulong)puVar6 >> 0x3e == 0) {
    lVar12 = *(long *)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar6 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar6) {
      _Var1.unknown = puVar6;
    }
    lVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar12 != 0) {
    puVar11 = (undefined8 *)0x0;
    do {
      if (((ulong)puVar6 & 0xc000000000000001) == 0) {
        if (*(undefined8 **)(((ulong)puVar6 & 0xffffffffffffff8) + 0x10) <= puVar11) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009390dc);
          (*pcVar3)();
        }
        puVar10 = *(undefined8 **)(puVar6 + (long)puVar11 * 8 + 0x20);
        puVar7 = puVar10;
        _swift_retain();
      }
      else {
        puVar10 = puVar11;
        FUN_100942fb8(puVar11,puVar6);
        puVar7 = puVar10;
      }
      if (SCARRY8((long)puVar11,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100938f70);
        (*pcVar3)();
      }
      lVar9 = (long)puVar11 + 1;
      puVar13 = (undefined8 *)(ulong)*(uint *)(puVar10 + 2);
      if ((int)*(uint *)(puVar10 + 2) < 0) {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,puVar7,0,0);
        *puVar7 = 0xd00000000000002c;
        puVar7[1] = 0x8000000100db4dc0;
        *(undefined4 *)(puVar7 + 2) = 9;
        _swift_willThrow();
        _swift_release(puVar10);
        break;
      }
      FUN_10095e9d0(puVar13,0x49,1);
      if (unaff_x21 != 0) {
        _swift_errorRetain(unaff_x21);
        puVar5 = &DAT_100febaf0;
        FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
        puVar11 = &local_a8;
        _swift_dynamicCast(puVar11,&stack0xffffffffffffffa8,puVar5,&DAT_100ef11e8,0);
        if ((int)puVar11 != 0) {
          _swift_errorRelease(unaff_x21);
          FUN_10095d958();
          if (local_98 == 0x16) {
            _swift_bridgeObjectRelease(uStack_a0);
            FUN_1008d5f10();
            _swift_allocError(&DAT_100f1bbc8,uStack_a0,0,0);
          }
          else {
            FUN_1008d5300();
            _swift_allocError(&DAT_100ef11e8,puVar13,0,0);
            *puVar13 = local_a8;
            puVar13[1] = uStack_a0;
            *(int *)(puVar13 + 2) = local_98;
          }
          _swift_willThrow();
        }
        _swift_release(puVar10);
        _swift_bridgeObjectRelease(puVar6);
        _swift_errorRelease(unaff_x21);
        return;
      }
      _swift_release(puVar10);
      puVar11 = (undefined8 *)((long)puVar11 + 1);
    } while (lVar9 != lVar12);
  }
  _swift_bridgeObjectRelease(puVar6);
  return;
}



/* Address: 0x1009390f8 | FUN_1009390f8 */

undefined1  [16] FUN_1009390f8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  long unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  
  local_40 = 0;
  local_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1a,param_2);
  _swift_bridgeObjectRelease(local_38);
  local_40 = 0x7269615065706950;
  local_38 = 0xee003d6e69207b20;
  local_48 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_retain();
  puVar2 = &DAT_100fed6c8;
  FUN_1000f7830(&DAT_100fed6c8,&DAT_100c85498);
  SVar3 = Swift::String::_init(&local_48,puVar2);
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar3.bridgeObject = &DAT_e600000000000000;
  SVar3.str = (char *)0x3d74756f202c;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar3,SVar6);
  local_48 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_retain();
  SVar3 = Swift::String::_init(&local_48,puVar2);
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x7d20;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100939200 | FUN_100939200 */

void FUN_100939200(undefined8 *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    SVar3.bridgeObject = (void *)0x2;
    SVar3.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd00000000000004f,0x8000000100db4e50,
               0xdb4d70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009392f0);
    (*pcVar2)();
  }
  iVar1 = *(int *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  if (iVar1 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000002c;
    param_1[1] = 0x8000000100db4dc0;
    *(undefined4 *)(param_1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009392a0);
      (*pcVar2)();
    }
    FUN_10095e118(iVar1,param_1,param_2 - (long)param_1);
  }
  return;
}



/* Address: 0x1009392f0 | FUN_1009392f0 */

void FUN_1009392f0(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  long unaff_x20;
  String SVar4;
  
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    SVar4.bridgeObject = (void *)0x2;
    SVar4.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000050,0x8000000100db4df0,
               0xdb4d70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009393d4);
    (*pcVar2)();
  }
  uVar1 = *(uint *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  puVar3 = (undefined8 *)(ulong)uVar1;
  if ((int)uVar1 < 0) {
    FUN_1008d5300(puVar3,param_1,param_2);
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd00000000000002c;
    puVar3[1] = 0x8000000100db4dc0;
    *(undefined4 *)(puVar3 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_10095e1f4();
  }
  return;
}



/* Address: 0x1009393d4 | FUN_1009393d4 */

void FUN_1009393d4(undefined8 *param_1,long param_2)

{
  int iVar1;
  code *pcVar2;
  long unaff_x20;
  String SVar3;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    SVar3.bridgeObject = (void *)0x2;
    SVar3.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar3,(StaticString)0xd00000000000004d,0x8000000100db4d70,
               0xdb4d70);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009394c4);
    (*pcVar2)();
  }
  iVar1 = *(int *)(*(long *)(unaff_x20 + 0x10) + 0x10);
  if (iVar1 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000002c;
    param_1[1] = 0x8000000100db4dc0;
    *(undefined4 *)(param_1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100939474);
      (*pcVar2)();
    }
    FUN_10095de74(iVar1,param_1,param_2 - (long)param_1);
  }
  return;
}



/* Address: 0x1009394c4 | FUN_1009394c4 */

void FUN_1009394c4(char param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x20;
  
  if (param_1 == '\0') {
    lVar2 = *(long *)(unaff_x20 + 0x10);
  }
  else {
    if (param_1 != '\x01') {
      FUN_100939570();
      return;
    }
    lVar2 = *(long *)(unaff_x20 + 0x18);
  }
  if (lVar2 != 0) {
    puVar1 = (undefined8 *)(ulong)*(uint *)(lVar2 + 0x10);
    if ((int)*(uint *)(lVar2 + 0x10) < 0) {
      FUN_1008d5300();
      _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
      *puVar1 = 0xd00000000000002e;
      puVar1[1] = 0x8000000100db4d00;
      *(undefined4 *)(puVar1 + 2) = 9;
      _swift_willThrow();
    }
    else {
      *(undefined4 *)(lVar2 + 0x10) = 0xffffffff;
      FUN_10095d958();
    }
  }
  return;
}



/* Address: 0x100939570 | FUN_100939570 */

void FUN_100939570(void)

{
  bool bVar1;
  byte bVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  long unaff_x21;
  long unaff_x22;
  long local_28;
  
  lVar4 = *(long *)(unaff_x20 + 0x10);
  lVar6 = unaff_x21;
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) < 0)) {
    if ((*(long *)(unaff_x20 + 0x18) == 0) || (*(int *)(*(long *)(unaff_x20 + 0x18) + 0x10) < 0)) {
      if (DAT_100fec5e8 != -1) {
        _swift_once(&DAT_100fec5e8,FUN_100901f4c);
      }
      uVar5 = DAT_101058198;
      _swift_willThrow();
      _swift_errorRetain(uVar5);
      return;
    }
    if (lVar4 != 0) goto LAB_1009395a4;
LAB_100939608:
    bVar1 = false;
    lVar4 = *(long *)(unaff_x20 + 0x18);
  }
  else {
LAB_1009395a4:
    if (*(int *)(lVar4 + 0x10) < 0) goto LAB_100939608;
    *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
    FUN_10095d958();
    bVar1 = unaff_x21 != 0;
    unaff_x22 = 1;
    if (bVar1) {
      lVar6 = 0;
      unaff_x22 = unaff_x21;
    }
    lVar4 = *(long *)(unaff_x20 + 0x18);
  }
  if ((lVar4 != 0) && (-1 < *(int *)(lVar4 + 0x10))) {
    *(undefined4 *)(lVar4 + 0x10) = 0xffffffff;
    FUN_10095d958();
    if (lVar6 != 0) {
      if (!bVar1) {
        local_28 = lVar6;
        bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar2 & 1) != 0) {
          puVar3 = &DAT_100febaf0;
          FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
          _swift_willThrowTypedImpl
                    (&local_28,puVar3,
                     PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
          return;
        }
        return;
      }
      uVar5 = 1;
      goto LAB_100939644;
    }
  }
  if (!bVar1) {
    return;
  }
  uVar5 = 0;
  lVar6 = unaff_x20;
LAB_100939644:
  local_28 = unaff_x22;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    puVar3 = &DAT_100febaf0;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    _swift_willThrowTypedImpl
              (&local_28,puVar3,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  FUN_1002ec258(lVar6,uVar5);
  return;
}



/* Address: 0x100939720 | FUN_100939720 */

void FUN_100939720(void)

{
  undefined8 uVar1;
  
  if (DAT_100fec610 != -1) {
    _swift_once(&DAT_100fec610,FUN_100901fcc);
  }
  uVar1 = DAT_1010581f0;
  _swift_willThrow();
  _swift_errorRetain(uVar1);
  return;
}



/* Address: 0x10093977c | FUN_10093977c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10093977c(void)

{
  return ZEXT816(0x100fed5f8);
}



/* Address: 0x10093979c | FUN_10093979c */

void FUN_10093979c(void)

{
  FUN_100939200();
  return;
}



/* Address: 0x1009397bc | FUN_1009397bc */

void FUN_1009397bc(void)

{
  FUN_1009392f0();
  return;
}



/* Address: 0x1009397dc | FUN_1009397dc */

void FUN_1009397dc(void)

{
  FUN_1009393d4();
  return;
}



/* Address: 0x1009397fc | FUN_1009397fc */

void FUN_1009397fc(void)

{
  FUN_1009394c4();
  return;
}



/* Address: 0x10093981c | FUN_10093981c */

void FUN_10093981c(void)

{
  FUN_100939570();
  return;
}



/* Address: 0x10093983c | FUN_10093983c */

void FUN_10093983c(void)

{
  FUN_100939720();
  return;
}



/* Address: 0x100939850 | FUN_100939850 */

void FUN_100939850(void)

{
  FUN_1009390f8();
  return;
}



/* Address: 0x100939870 | FUN_100939870 */

undefined ** FUN_100939870(void)

{
  return &PTR_PTR_100f19470;
}



/* Address: 0x10093987c | FUN_10093987c */

void FUN_10093987c(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fed6b8;
  FUN_1009398e4(&DAT_100fed6b8,&TargetProtocolConformanceDescriptor_100c853f4);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x1009398b0 | FUN_1009398b0 */

void FUN_1009398b0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fed6c0;
  FUN_1009398e4(&DAT_100fed6c0,&TargetProtocolConformanceDescriptor_100c8541c);
  *(undefined **)(param_1 + 8) = puVar1;
  return;
}



/* Address: 0x1009398e4 | FUN_1009398e4 */

void FUN_1009398e4(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 == 0) {
    FUN_10093977c();
    _swift_getWitnessTable(param_2,lVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100939920 | FUN_100939920 */

void FUN_100939920(void)

{
  FUN_10093983c();
  return;
}



/* Address: 0x100939934 | FUN_100939934 */

void FUN_100939934(long param_1)

{
  undefined *local_20;
  undefined *puStack_18;
  
  local_20 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_18 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  _swift_initClassMetadata2(param_1,0,2,&local_20,param_1 + 0x60);
  return;
}



/* Address: 0x100939984 | FUN_100939984 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001009399fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100939984(undefined8 param_1)

{
  long lVar1;
  __int64 _Var2;
  ulong uVar3;
  long *unaff_x20;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar9 = *unaff_x20;
  lVar5 = *(long *)(lVar9 + 0x50);
  lVar10 = *(long *)(lVar5 + -8);
  uVar3 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar4 = auStack_80 + -uVar3;
  lVar6 = (long)puVar4 - uVar3;
  _swift_beginAccess(unaff_x20 + 3,auStack_78,0,0);
  lVar7 = unaff_x20[3];
  _swift_bridgeObjectRetain(lVar7);
  _Var2 = Swift::Array<undefined>::get_endIndex(param_1,lVar5);
  if (_Var2 != 0) {
    lVar8 = 0;
    lVar9 = *(long *)(lVar9 + 0x58);
    pcVar11 = *(code **)(lVar9 + 0x10);
    do {
      Swift::Array<undefined>::get_subscript(lVar6,lVar8,lVar7,lVar5);
      lVar1 = lVar8 + 1;
      if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100939aac);
        (*pcVar11)();
      }
      (**(code **)(lVar10 + 0x20))(puVar4,lVar6,lVar5);
      (*pcVar11)(lVar5,lVar9);
      (**(code **)(lVar10 + 8))(puVar4,lVar5);
      _Var2 = Swift::Array<undefined>::get_endIndex(_Var2,lVar5);
      lVar8 = lVar8 + 1;
    } while (lVar1 != _Var2);
  }
  _swift_bridgeObjectRelease(lVar7);
  _swift_bridgeObjectRelease(unaff_x20[3]);
  return;
}



/* Address: 0x100939aac | FUN_100939aac */

void FUN_100939aac(void)

{
  FUN_100939984();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100939acc | FUN_100939acc */

void FUN_100939acc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100939ad8 | FUN_100939ad8 */

void FUN_100939ad8(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fed760,&TargetClassDescriptor_100cc5660);
  return;
}



/* Address: 0x100939aec | FUN_100939aec */

void FUN_100939aec(void)

{
  FUN_100939b64();
  return;
}



/* Address: 0x100939af8 | FUN_100939af8 */

void FUN_100939af8(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if (SCARRY8(*(long *)(lVar2 + 0x18),*(long *)(lVar2 + 0x20))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100939b28);
    (*pcVar1)();
  }
  if (*(int *)(lVar2 + *(long *)(lVar2 + 0x18) + *(long *)(lVar2 + 0x20) + 0x28) == -0x21524111) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100939b2c);
  (*pcVar1)();
}



/* Address: 0x100939b2c | FUN_100939b2c */

void FUN_100939b2c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100939b3c | FUN_100939b3c */

void FUN_100939b3c(void)

{
  FUN_100939ad8(0);
  return;
}



/* Address: 0x100939b44 | FUN_100939b44 */

void FUN_100939b44(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fed7c0,&TargetClassDescriptor_100cc56a8);
  return;
}



/* Address: 0x100939b58 | FUN_100939b58 */

void FUN_100939b58(void)

{
  FUN_100939b64();
  return;
}



/* Address: 0x100939b64 | FUN_100939b64 */

void FUN_100939b64(long param_1,undefined8 param_2,undefined8 param_3,long *param_4)

{
  undefined1 auStack_18 [8];
  
  _swift_initClassMetadata2(param_1,0,0,auStack_18,param_1 + *param_4);
  return;
}



/* Address: 0x100939b9c | FUN_100939b9c */

void FUN_100939b9c(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar1 = *(long *)(param_1 + 8) + *(long *)(param_1 + 0x10);
  if (SCARRY8(*(long *)(param_1 + 8),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939c1c);
    (*pcVar2)();
  }
  lVar4 = *(long *)(param_1 + 0x18);
  if (SCARRY8(lVar1,lVar4)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939c20);
    (*pcVar2)();
  }
  lVar3 = 4;
  FUN_100673550();
  if (lVar3 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939c24);
    (*pcVar2)();
  }
  if (lVar3 * 4 <= lVar4) {
    if (*(int *)(param_2 + lVar1 + lVar4) == -0x21524111) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100939c2c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100939c28);
  (*pcVar2)();
}



/* Address: 0x100939c2c | FUN_100939c2c */

void FUN_100939c2c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100939c3c | FUN_100939c3c */

void FUN_100939c3c(void)

{
  FUN_100939b44(0);
  return;
}



/* Address: 0x100939c44 | FUN_100939c44 */

undefined1  [16] FUN_100939c44(void)

{
  return ZEXT816(0x100f195c8);
}



/* Address: 0x100939c54 | FUN_100939c54 */

undefined1  [16] FUN_100939c54(void)

{
  return ZEXT816(0x100f19650);
}



/* Address: 0x100939c64 | FUN_100939c64 */

undefined1  [16] FUN_100939c64(void)

{
  return ZEXT816(0x100f19680);
}


