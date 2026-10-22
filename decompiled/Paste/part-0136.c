/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10019d200 | FUN_10019d200 */

void FUN_10019d200(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = *param_1;
  uVar3 = *param_2;
  pTVar1 = &TargetProtocolConformanceDescriptor_100c31fc8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c31fc8,param_3);
  (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix(uVar2,uVar3,param_3,pTVar1);
  return;
}



/* Address: 0x10019d24c | FUN_10019d24c */

void FUN_10019d24c(void)

{
  FUN_10019d294(&DAT_100fb3f88,&TargetProtocolConformanceDescriptor_100c31ff4);
  return;
}



/* Address: 0x10019d270 | FUN_10019d270 */

void FUN_10019d270(void)

{
  FUN_10019d294(&DAT_100fb3f90,&TargetProtocolConformanceDescriptor_100c31f9c);
  return;
}



/* Address: 0x10019d294 | FUN_10019d294 */

void FUN_10019d294(long *param_1,long param_2)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    FUN_10019d110(0xff);
    _swift_getWitnessTable(param_2,uVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10019d2d4 | FUN_10019d2d4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_10019d2d4(int ****param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int ****ppppiVar5;
  int ****ppppiVar6;
  int ****ppppiVar7;
  code *pcVar8;
  undefined8 uVar9;
  int ****ppppiVar10;
  String SVar11;
  undefined1 auVar12 [16];
  long local_e0;
  int ***local_d8;
  int ***pppiStack_d0;
  undefined8 local_c0;
  long lStack_b8;
  long local_b0 [9];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fb3fa0;
  FUN_1000037f0(&DAT_100fb3fa0,&DAT_100c32120);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__kSecMatchLimit_100eaa4f8;
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  uVar9 = *(undefined8 *)PTR__kSecReturnData_100eaa510;
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)PTR__kSecMatchLimitOne_100eaa500;
  *(undefined8 *)(puVar2 + 0x30) = uVar9;
  if (*(long *)PTR__kCFBooleanTrue_100ea9b20 == 0) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10019d690);
    (*pcVar8)();
  }
  *(long *)(puVar2 + 0x38) = *(long *)PTR__kCFBooleanTrue_100ea9b20;
  puVar3 = puVar2;
  FUN_10019e45c(puVar2);
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fb3fa8;
  FUN_1000037f0(&DAT_100fb3fa8,&DAT_100c32128);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  ppppiVar5 = param_1;
  FUN_10019e654(param_1,param_2,param_3,param_4,puVar3);
  _swift_bridgeObjectRelease(puVar3);
  local_b0[0] = 0;
  ppppiVar10 = ppppiVar5;
  _SecItemCopyMatching(ppppiVar5,local_b0);
  iVar1 = (int)ppppiVar10;
  if (iVar1 == -0x62d4) {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10019e45c(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_10019e654(param_1,param_2,param_3,param_4,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    ppppiVar10 = param_1;
    _SecItemCopyMatching(param_1,0);
    if ((int)ppppiVar10 == 0) {
      SVar11.bridgeObject = (void *)0x8000000100d97a80;
      SVar11.str = (char *)0xd00000000000002e;
      ppppiVar10 = (int ****)0xffff9d24;
    }
    else {
      if ((int)ppppiVar10 == -0x62d4) {
        param_1 = (int ****)0xf000000000000000;
        ppppiVar5 = (int ****)0x0;
        goto LAB_10019d51c;
      }
      ppppiVar6 = ppppiVar10;
      _SecCopyErrorMessageString(ppppiVar10,0);
      if (ppppiVar6 == (int ****)0x0) {
        SVar11 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
    }
    ppppiVar6 = (int ****)0x0;
    FUN_10019dd18();
  }
  else {
    if (iVar1 == 0) {
      if (local_b0[0] == 0) {
        param_1 = (int ****)0xf000000000000000;
        ppppiVar5 = (int ****)0x0;
      }
      else {
        local_e0 = local_b0[0];
        _swift_unknownObjectRetain();
        ppppiVar10 = &local_d8;
        _swift_dynamicCast(ppppiVar10,&local_e0,
                           PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                           PTR___type_metadata_for_Foundation_Data_100ea7300,6);
        param_1 = (int ****)pppiStack_d0;
        ppppiVar5 = (int ****)local_d8;
        if ((int)ppppiVar10 == 0) {
          ppppiVar5 = (int ****)0x0;
          param_1 = (int ****)0xf000000000000000;
        }
      }
LAB_10019d51c:
      _swift_unknownObjectRelease(local_b0[0]);
      goto LAB_10019d648;
    }
    ppppiVar6 = ppppiVar10;
    _SecCopyErrorMessageString(ppppiVar10,0);
    if (ppppiVar6 == (int ****)0x0) {
      SVar11 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    else {
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
    FUN_1000da768(&local_d8);
    param_1 = &local_d8;
    FUN_100004640(param_1,local_c0);
    ppppiVar6 = param_1;
    FUN_10019dd18();
    puVar2 = &DAT_100ebd858;
    ppppiVar7 = ppppiVar6;
    _swift_allocError(&DAT_100ebd858,ppppiVar6,0,0);
    *(int *)ppppiVar7 = iVar1;
    *(String *)(ppppiVar7 + 1) = SVar11;
    pcVar8 = *(code **)(lStack_b8 + 0x20);
    _swift_bridgeObjectRetain(SVar11.bridgeObject);
    (*pcVar8)(puVar2,local_c0,lStack_b8);
    _swift_errorRelease(puVar2);
    FUN_100004594(&local_d8);
  }
  _swift_allocError(&DAT_100ebd858,ppppiVar6,0,0);
  *(int *)ppppiVar6 = (int)ppppiVar10;
  *(String *)(ppppiVar6 + 1) = SVar11;
  _swift_willThrow();
  _swift_unknownObjectRelease(local_b0[0]);
LAB_10019d648:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    auVar12._8_8_ = param_1;
    auVar12._0_8_ = ppppiVar5;
    return auVar12;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10019d694 | FUN_10019d694 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10019d694(Data param_1,ulong param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  NSData *pNVar5;
  undefined *puVar6;
  int *piVar7;
  int *piVar8;
  long unaff_x21;
  code *pcVar9;
  String SVar10;
  void *local_d8;
  int aiStack_88 [6];
  undefined8 local_70;
  long lStack_68;
  
  if (param_2 >> 0x3c < 0xf) {
    FUN_10011da54();
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10019e45c(PTR___swiftEmptyArrayStorage_100eae0d8);
    lVar3 = param_3;
    FUN_10019e654(param_3,param_4,param_5,param_6,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    lVar4 = lVar3;
    _SecItemCopyMatching(lVar3,0);
    iVar1 = (int)lVar4;
    if (iVar1 == -0x62d4) {
      puVar2 = &DAT_100fb3fa0;
      FUN_1000037f0(&DAT_100fb3fa0,&DAT_100c32120);
      _swift_initStackObject();
      *(undefined8 *)(puVar2 + 0x18) = 2;
      *(undefined8 *)(puVar2 + 0x10) = 1;
      *(undefined8 *)(puVar2 + 0x20) = *(undefined8 *)PTR__kSecValueData_100eaa518;
      pNVar5 = Foundation::Data::_bridgeToObjectiveC(param_1);
      *(NSData **)(puVar2 + 0x28) = pNVar5;
      puVar6 = puVar2;
      FUN_10019e45c(puVar2);
      _swift_setDeallocating(puVar2);
      FUN_100005808(puVar2 + 0x20,&DAT_100fb3fa8,&DAT_100c32128);
      FUN_10019f2cc(param_3,param_4,param_5,param_6,puVar6);
      _swift_bridgeObjectRelease(puVar6);
      _SecItemAdd(param_3,0);
      iVar1 = (int)param_3;
      if (iVar1 == 0) {
        FUN_10003bf18(param_1.unknown,param_2);
        return;
      }
      if (iVar1 == -0x62d3) {
        FUN_10019ef2c(param_1.unknown,param_2,lVar3,param_7);
        if (unaff_x21 == 0) {
          FUN_10003bf18(param_1.unknown,param_2);
          return;
        }
      }
      else {
        _SecCopyErrorMessageString();
        if (param_3 == 0) {
          SVar10 = (String)(ZEXT816(0xe000000000000000) << 0x40);
        }
        else {
          SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        }
        local_d8 = SVar10.bridgeObject;
        FUN_1000da768(aiStack_88);
        piVar7 = aiStack_88;
        FUN_100004640(piVar7,local_70);
        FUN_10019dd18();
        puVar2 = &DAT_100ebd858;
        piVar8 = piVar7;
        _swift_allocError(&DAT_100ebd858,piVar7,0,0);
        *piVar8 = iVar1;
        *(String *)(piVar8 + 2) = SVar10;
        pcVar9 = *(code **)(lStack_68 + 0x20);
        _swift_bridgeObjectRetain(local_d8);
        (*pcVar9)(puVar2,local_70,lStack_68);
        _swift_errorRelease(puVar2);
        FUN_100004594(aiStack_88);
        _swift_allocError(&DAT_100ebd858,piVar7,0,0);
        *piVar7 = iVar1;
        *(String *)(piVar7 + 2) = SVar10;
        _swift_willThrow();
      }
    }
    else if (iVar1 == 0) {
      FUN_10019ef2c(param_1.unknown,param_2,lVar3,param_7);
      if (unaff_x21 == 0) {
        FUN_10003bf18(param_1.unknown,param_2);
        return;
      }
    }
    else {
      _SecCopyErrorMessageString();
      if (lVar4 == 0) {
        SVar10 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      FUN_1000da768(aiStack_88);
      piVar7 = aiStack_88;
      FUN_100004640(piVar7,local_70);
      FUN_10019dd18();
      puVar2 = &DAT_100ebd858;
      piVar8 = piVar7;
      _swift_allocError(&DAT_100ebd858,piVar7,0,0);
      *piVar8 = iVar1;
      *(String *)(piVar8 + 2) = SVar10;
      pcVar9 = *(code **)(lStack_68 + 0x20);
      _swift_bridgeObjectRetain(SVar10.bridgeObject);
      (*pcVar9)(puVar2,local_70,lStack_68);
      _swift_errorRelease(puVar2);
      FUN_100004594(aiStack_88);
      _swift_allocError(&DAT_100ebd858,piVar7,0,0);
      *piVar7 = iVar1;
      *(String *)(piVar7 + 2) = SVar10;
      _swift_willThrow();
    }
    FUN_10003bf18(param_1.unknown,param_2);
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10019e45c(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_10019e654(param_3,param_4,param_5,param_6,puVar2);
    _swift_bridgeObjectRelease(puVar2);
    _SecItemDelete();
    iVar1 = (int)param_3;
    if ((iVar1 != -0x62d4) && (iVar1 != 0)) {
      _SecCopyErrorMessageString();
      if (param_3 == 0) {
        SVar10 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      FUN_1000da768(aiStack_88);
      piVar7 = aiStack_88;
      FUN_100004640(piVar7,local_70);
      FUN_10019dd18();
      puVar2 = &DAT_100ebd858;
      piVar8 = piVar7;
      _swift_allocError(&DAT_100ebd858,piVar7,0,0);
      *piVar8 = iVar1;
      *(String *)(piVar8 + 2) = SVar10;
      pcVar9 = *(code **)(lStack_68 + 0x20);
      _swift_bridgeObjectRetain(SVar10.bridgeObject);
      (*pcVar9)(puVar2,local_70,lStack_68);
      _swift_errorRelease(puVar2);
      FUN_100004594(aiStack_88);
      _swift_allocError(&DAT_100ebd858,piVar7,0,0);
      *piVar7 = iVar1;
      *(String *)(piVar7 + 2) = SVar10;
      _swift_willThrow();
    }
  }
  return;
}



/* Address: 0x10019dbec | FUN_10019dbec */

void FUN_10019dbec(void)

{
  FUN_10019d2d4();
  return;
}



/* Address: 0x10019dc04 | FUN_10019dc04 */

void FUN_10019dc04(void)

{
  FUN_10019d694();
  return;
}



/* Address: 0x10019dc1c | FUN_10019dc1c */

undefined1  [16] FUN_10019dc1c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  
  _swift_bridgeObjectRetain(param_3);
  auVar1._8_8_ = param_3;
  auVar1._0_8_ = param_2;
  return auVar1;
}



/* Address: 0x10019dc4c | FUN_10019dc4c */

undefined1  [16] FUN_10019dc4c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  pcVar2 = param_3;
  Swift::_StringGuts::grow(0x15,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = param_4;
  SVar5.str = pcVar2;
  Swift::String::append(SVar3,SVar5);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  SVar3.bridgeObject = &SUB_e200000000000000;
  SVar3.str = (char *)0x203a;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar2;
  Swift::String::append(SVar3,SVar6);
  SVar4.bridgeObject = param_3;
  SVar4.str = param_2.unknown;
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar2;
  Swift::String::append(SVar4,SVar7);
  auVar1._8_8_ = 0xef20726f72726520;
  auVar1._0_8_ = 0x6e6961686379654b;
  return auVar1;
}



/* Address: 0x10019dd14 | thunk_FUN_10019dd18 */

void thunk_FUN_10019dd18(void)

{
  FUN_10019dd18();
  return;
}



/* Address: 0x10019dd18 | FUN_10019dd18 */

void FUN_10019dd18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb3f98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c320a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c320a0,&DAT_100ebd858);
  DAT_100fb3f98 = pTVar1;
  return;
}



/* Address: 0x10019dd58 | FUN_10019dd58 */

void FUN_10019dd58(void)

{
  undefined4 *unaff_x20;
  
  FUN_10019dc4c(*unaff_x20,*(undefined8 *)(unaff_x20 + 2),*(undefined8 *)(unaff_x20 + 4));
  return;
}



/* Address: 0x10019dd64 | thunk_FUN_10019dd68 */

undefined4 * thunk_FUN_10019dd68(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10019dd68 | FUN_10019dd68 */

undefined4 * FUN_10019dd68(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10019dd9c | FUN_10019dd9c */

undefined4 * FUN_10019dd9c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  uVar1 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10019dde4 | FUN_10019dde4 */

void FUN_10019dde4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x10019ddf8 | FUN_10019ddf8 */

undefined4 * FUN_10019ddf8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 4);
  uVar2 = *(undefined8 *)(param_1 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x10019de30 | FUN_10019de30 */

undefined1  [16] FUN_10019de30(void)

{
  return ZEXT816(0x100ebd858);
}



/* Address: 0x10019de40 | FUN_10019de40 */

undefined1  [16] FUN_10019de40(void)

{
  return ZEXT816(0x100ebd880);
}



/* Address: 0x10019de50 | FUN_10019de50 */

void FUN_10019de50(undefined8 param_1)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  FUN_10019d110(0);
  FUN_10019d294(&DAT_100fb3fd8,&TargetProtocolConformanceDescriptor_100c31fc8);
  into.unknown = auStack_78;
  (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_10019ded0(param_1,_Var1);
  return;
}



/* Address: 0x10019ded0 | FUN_10019ded0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10019ded0(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar5 = 0;
  }
  else {
    uVar2 = 0;
    FUN_10019d110(0);
    puVar3 = &DAT_100fb3fd8;
    FUN_10019d294(&DAT_100fb3fd8,&TargetProtocolConformanceDescriptor_100c31fc8);
    do {
      bVar1 = (extension_CoreFoundation)::CoreFoundation::_CFObject::___infix
                        (*(undefined8 *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8),param_1,uVar2,
                         puVar3);
      uVar5 = (ulong)bVar1;
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar6._8_8_ = uVar5;
  auVar6._0_8_ = param_2;
  return auVar6;
}



/* Address: 0x10019dfb4 | FUN_10019dfb4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10019dfb4(long param_1,bool param_2)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var3;
  Hasher into;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined1 auStack_c8 [72];
  undefined1 auStack_80 [32];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fb3fe0;
  FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
  p_Var3 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_10019e248:
    _swift_release(original);
LAB_10019e250:
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var10 = original + 0x40;
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var10;
  lVar6 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10019e278);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar13) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_10019e250;
          }
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var10 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var10,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_10019e248;
        }
        uVar11 = *(ulong *)(p_Var10 + lVar13 * 8);
        lVar6 = lVar6 + 1;
      } while (uVar11 == 0);
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar5 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar6;
    }
    uVar5 = LZCOUNT(uVar5) | lVar13 << 6;
    uVar12 = *(undefined8 *)(*(long *)(original + 0x30) + uVar5 * 8);
    if ((param_2 & 1U) == 0) {
      FUN_10000cbfc(*(long *)(original + 0x38) + uVar5 * 0x20,auStack_80);
    }
    else {
      FUN_100011080();
    }
    Swift::Hasher::init(*(__int64 *)(p_Var3 + 0x28));
    FUN_10019d110(0);
    FUN_10019d294(&DAT_100fb3fd8,&TargetProtocolConformanceDescriptor_100c31fc8);
    into.unknown = auStack_c8;
    (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
    uVar4 = Swift::Hasher::_finalize(into);
    uVar9 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
    uVar7 = uVar4 >> 6;
    uVar5 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar5 == 0) {
      bVar1 = false;
      uVar5 = 0x3f - uVar9 >> 6;
      do {
        uVar4 = uVar7 + 1;
        if ((uVar4 == uVar5) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10019e27c);
          (*pcVar2)();
        }
        uVar7 = 0;
        if (uVar4 != uVar5) {
          uVar7 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar5 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar7 * 8 + 0x40) == 0xffffffffffffffff);
      uVar5 = ~*(ulong *)(p_Var3 + uVar7 * 8 + 0x40);
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar7 << 6;
    }
    else {
      uVar5 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
      uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
      uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
      uVar5 = LZCOUNT(uVar5 >> 0x20 | uVar5 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar7 + 0x40) = 1L << (uVar5 & 0x3f) | *(ulong *)(p_Var3 + uVar7 + 0x40);
    *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar5 * 8) = uVar12;
    FUN_100011080(auStack_80,*(long *)(p_Var3 + 0x38) + uVar5 * 0x20);
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar6 = lVar13;
  } while( true );
}



/* Address: 0x10019e27c | FUN_10019e27c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

Bucket FUN_10019e27c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Bucket BVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  Bucket BVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1.offset + 1U & (uVar7 ^ 0xffffffffffffffff);
  BVar9.offset = param_1.offset;
  if ((*(ulong *)(_Var1.unknown + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar10 = BVar5.offset + 1U & uVar7;
    do {
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      FUN_10019d110(0);
      FUN_10019d294(&DAT_100fb3fd8,&TargetProtocolConformanceDescriptor_100c31fc8);
      into.unknown = auStack_a8;
      (extension_CoreFoundation)::CoreFoundation::_CFObject::hash(into);
      uVar6 = Swift::Hasher::_finalize(into);
      param_1.offset = 0;
      uVar6 = uVar6 & uVar7;
      if (BVar9.offset < (long)uVar10) {
        if (uVar6 < uVar10) {
LAB_10019e398:
          if (BVar9.offset < (long)uVar6) goto LAB_10019e2f8;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + BVar9.offset * 8);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 8);
        if (((BVar9.offset < (long)uVar8) || (puVar3 + 1 <= puVar2)) || (BVar9.offset != uVar8)) {
          *puVar2 = *puVar3;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + BVar9.offset * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x20);
        if (((BVar9.offset < (long)uVar8) || (puVar3 + 4 <= puVar2)) || (BVar9.offset != uVar8)) {
          uVar11 = *puVar3;
          uVar13 = puVar3[3];
          uVar12 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar11;
          puVar2[3] = uVar13;
          puVar2[2] = uVar12;
          BVar9.offset = uVar8;
        }
      }
      else if (uVar10 <= uVar6) goto LAB_10019e398;
LAB_10019e2f8:
      uVar8 = uVar8 + 1 & uVar7;
    } while ((*(ulong *)(_Var1.unknown + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
  }
  uVar7 = (ulong)BVar9.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar7) =
       *(ulong *)(_Var1.unknown + uVar7) & (-1L << (BVar9.offset & 0x3fU)) - 1U;
  if (SBORROW8(*(long *)(param_2 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10019e45c);
    (*pcVar4)();
  }
  *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
  *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
  return (Bucket)param_1.offset;
}



/* Address: 0x10019e45c | FUN_10019e45c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10019e45c(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  undefined8 *puVar8;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb3ff0;
    uVar6 = 0;
    FUN_1000037f0();
    puVar4 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar8 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar8[-1];
      uVar2 = *puVar8;
      _swift_unknownObjectRetain(uVar2);
      uVar5 = uVar1;
      FUN_10019de50();
      if ((uVar6 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019e54c);
        (*pcVar3)();
      }
      uVar7 = uVar5 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar4 + uVar7 + 0x40) = *(ulong *)(puVar4 + uVar7 + 0x40) | 1L << (uVar5 & 0x3f);
      *(ulong *)(*(long *)(puVar4 + 0x30) + uVar5 * 8) = uVar1;
      *(undefined8 *)(*(long *)(puVar4 + 0x38) + uVar5 * 8) = uVar2;
      if (SCARRY8(*(long *)(puVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019e550);
        (*pcVar3)();
      }
      puVar8 = puVar8 + 2;
      *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar4);
  }
  return puVar4;
}



/* Address: 0x10019e550 | FUN_10019e550 */

undefined * FUN_10019e550(long param_1)

{
  code *pcVar1;
  _DictionaryStorage *this;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *capacity;
  ulong local_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar2 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb3fe0;
    FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
    puVar2 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      uVar4 = 0;
      FUN_10019fb14(param_1);
      uVar3 = local_78;
      FUN_10019de50();
      if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e650);
        (*pcVar1)();
      }
      uVar4 = uVar3 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar2 + uVar4 + 0x40) = *(ulong *)(puVar2 + uVar4 + 0x40) | 1L << (uVar3 & 0x3f);
      *(ulong *)(*(long *)(puVar2 + 0x30) + uVar3 * 8) = local_78;
      FUN_100011080(auStack_70,*(long *)(puVar2 + 0x38) + uVar3 * 0x20);
      if (SCARRY8(*(long *)(puVar2 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10019e654);
        (*pcVar1)();
      }
      *(long *)(puVar2 + 0x10) = *(long *)(puVar2 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar2);
  }
  return puVar2;
}



/* Address: 0x10019e654 | FUN_10019e654 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

NSDictionary *
FUN_10019e654(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *******param_5)

{
  long lVar1;
  __CocoaDictionary _Var2;
  code *pcVar3;
  __RawDictionaryStorage *p_Var4;
  undefined8 uVar5;
  __RawDictionaryStorage *p_Var6;
  undefined *puVar7;
  Iterator *pIVar8;
  __RawDictionaryStorage *p_Var9;
  _DictionaryStorage *p_Var10;
  NSDictionary *pNVar11;
  uint uVar12;
  undefined *puVar13;
  undefined8 ******ppppppuVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 *******pppppppuVar22;
  undefined8 *******pppppppuVar23;
  undefined8 ******ppppppuVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong local_1b0;
  ulong local_1a8;
  undefined *local_180 [3];
  undefined *local_168;
  undefined8 *******local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  ulong local_138;
  undefined *local_130;
  
  p_Var4 = (__RawDictionaryStorage *)&DAT_100fb3fb0;
  FUN_1000037f0(&DAT_100fb3fb0,&DAT_100c32130);
  _swift_initStackObject();
  *(undefined8 *)(p_Var4 + 0x18) = 8;
  *(undefined8 *)(p_Var4 + 0x10) = 4;
  *(undefined8 *)(p_Var4 + 0x20) = *(undefined8 *)PTR__kSecClass_100eaa4d0;
  uVar25 = *(undefined8 *)PTR__kSecClassGenericPassword_100eaa4d8;
  uVar5 = 0;
  FUN_10019d110();
  *(undefined8 *)(p_Var4 + 0x28) = uVar25;
  uVar25 = *(undefined8 *)PTR__kSecAttrSynchronizable_100eaa4c0;
  *(undefined8 *)(p_Var4 + 0x40) = uVar5;
  *(undefined8 *)(p_Var4 + 0x48) = uVar25;
  *(undefined8 *)(p_Var4 + 0x50) = *(undefined8 *)PTR__kSecAttrSynchronizableAny_100eaa4c8;
  uVar25 = *(undefined8 *)PTR__kSecAttrService_100eaa4b8;
  *(undefined8 *)(p_Var4 + 0x68) = uVar5;
  *(undefined8 *)(p_Var4 + 0x70) = uVar25;
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(p_Var4 + 0x78) = param_3;
  *(undefined8 *)(p_Var4 + 0x80) = param_4;
  uVar25 = *(undefined8 *)PTR__kSecAttrAccount_100eaa488;
  *(undefined **)(p_Var4 + 0x90) = puVar7;
  *(undefined8 *)(p_Var4 + 0x98) = uVar25;
  *(undefined **)(p_Var4 + 0xb8) = puVar7;
  *(undefined8 *)(p_Var4 + 0xa0) = param_1;
  *(undefined8 *)(p_Var4 + 0xa8) = param_2;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  p_Var6 = p_Var4;
  FUN_10019e550();
  _swift_setDeallocating(p_Var4);
  puVar7 = &DAT_100fb3fb8;
  FUN_1000037f0(&DAT_100fb3fb8,&DAT_100c32138);
  puVar13 = (undefined *)0x4;
  _swift_arrayDestroy(p_Var4 + 0x20,4,puVar7);
  if (((ulong)param_5 & 0xc000000000000001) == 0) {
    uVar15 = -1L << ((ulong)*(byte *)(param_5 + 4) & 0x3f);
    uVar19 = ~uVar15;
    pppppppuVar22 = param_5 + 8;
    uVar15 = -uVar15;
    uVar26 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar26 = ~(-1L << (uVar15 & 0x3f));
    }
    ppppppuVar24 = (undefined8 ******)(uVar26 & (ulong)*pppppppuVar22);
    pppppppuVar23 = param_5;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
    if ((undefined8 *******)0x7fffffffffffffff < param_5) {
      _Var2.unknown = (undefined *)param_5;
    }
    pIVar8 = Swift::__CocoaDictionary::makeIterator(_Var2);
    pppppppuVar22 = (undefined8 *******)0x0;
    uVar19 = 0;
    ppppppuVar24 = (undefined8 ******)0x0;
    pppppppuVar23 = (undefined8 *******)((ulong)pIVar8 | 0x8000000000000000);
  }
  _swift_bridgeObjectRetain();
  lVar20 = 0;
  p_Var4 = p_Var6;
  do {
    lVar21 = lVar20;
    ppppppuVar14 = ppppppuVar24;
    if ((long)pppppppuVar23 < 0) {
      Swift::__CocoaDictionary::Iterator::_next
                ((Iterator *)((ulong)pppppppuVar23 & 0x7fffffffffffffff));
      if (param_5 == (undefined8 *******)0x0) {
LAB_10019ed94:
        local_138 = 0;
        local_130 = (undefined *)0x0;
        goto LAB_10019ed98;
      }
      local_160 = param_5;
      _swift_dynamicCast(&local_138,&local_160,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8
                         ,uVar5,7);
      local_130 = puVar13;
      uVar26 = local_138;
    }
    else {
      while (ppppppuVar14 == (undefined8 ******)0x0) {
        lVar1 = lVar21 + 1;
        if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee14);
          (*pcVar3)();
        }
        if ((long)(uVar19 + 0x40 >> 6) <= lVar1) {
          ppppppuVar24 = (undefined8 ******)0x0;
          goto LAB_10019ed94;
        }
        lVar21 = lVar1;
        ppppppuVar14 = pppppppuVar22[lVar1];
      }
      uVar26 = ((ulong)ppppppuVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)ppppppuVar14 & 0x5555555555555555) << 1;
      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      ppppppuVar14 = (undefined8 ******)((long)ppppppuVar14 - 1U & (ulong)ppppppuVar14);
      uVar15 = lVar21 << 9 | LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) << 3;
      uVar26 = *(ulong *)((long)pppppppuVar23[6] + uVar15);
      puVar13 = *(undefined **)((long)pppppppuVar23[7] + uVar15);
      local_138 = uVar26;
      local_130 = puVar13;
      _swift_unknownObjectRetain(puVar13);
    }
    if (uVar26 == 0) {
LAB_10019ed98:
      FUN_10000c650(pppppppuVar23,pppppppuVar22,uVar19,lVar20,ppppppuVar24);
      FUN_10019d294(&DAT_100fb3f88,&TargetProtocolConformanceDescriptor_100c31ff4);
      pNVar11 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(p_Var6);
      return pNVar11;
    }
    puVar7 = puVar13;
    _swift_getObjectType();
    lVar20 = lVar21;
    ppppppuVar24 = ppppppuVar14;
    local_180[0] = puVar13;
    local_168 = puVar7;
    if (puVar7 == (undefined *)0x0) {
      uVar15 = 0;
      FUN_100005808(local_180,&DAT_100fb3fe8,&DAT_100c32160);
      _swift_bridgeObjectRetain(p_Var6);
      FUN_10019de50();
      _swift_bridgeObjectRelease(p_Var6);
      if ((uVar15 & 1) == 0) {
        uStack_158 = 0;
        local_160 = (undefined8 *******)0x0;
        uStack_148 = 0;
        uStack_150 = 0;
      }
      else {
        p_Var9 = p_Var4;
        _swift_isUniquelyReferenced_nonNull_native();
        p_Var6 = p_Var4;
        if (((ulong)p_Var9 & 1) == 0) {
          p_Var10 = (_DictionaryStorage *)&DAT_100fb3fe0;
          FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
          Swift::_DictionaryStorage::_copy(p_Var10,p_Var4);
          if (*(long *)(p_Var4 + 0x10) != 0) {
            p_Var9 = p_Var4 + 0x40;
            uVar15 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
            if ((p_Var6 != p_Var4) || (p_Var9 + uVar15 * 8 <= p_Var6 + 0x40)) {
              _memmove(p_Var6 + 0x40,p_Var9,uVar15 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(p_Var4 + 0x10);
            uVar15 = 1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
            local_1a8 = 0xffffffffffffffff;
            if (((byte)p_Var4[0x20] & 0x3f) < 6) {
              local_1a8 = ~(-1L << (uVar15 & 0x3f));
            }
            local_1a8 = local_1a8 & *(ulong *)(p_Var4 + 0x40);
            if (local_1a8 == 0) goto LAB_10019ecfc;
            do {
              uVar17 = (local_1a8 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_1a8 & 0x5555555555555555) << 1
              ;
              uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
              uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
              uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
              uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
              local_1a8 = local_1a8 - 1 & local_1a8;
              while( true ) {
                uVar17 = LZCOUNT(uVar17) | lVar21 << 6;
                uVar25 = *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar17 * 8);
                FUN_10000cbfc(*(long *)(p_Var4 + 0x38) + uVar17 * 0x20,&local_160);
                *(undefined8 *)(*(long *)(p_Var6 + 0x30) + uVar17 * 8) = uVar25;
                FUN_100011080(&local_160,*(long *)(p_Var6 + 0x38) + uVar17 * 0x20);
                if (local_1a8 != 0) break;
LAB_10019ecfc:
                do {
                  lVar1 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee24);
                    (*pcVar3)();
                  }
                  if ((long)(uVar15 + 0x3f >> 6) <= lVar1) goto LAB_10019ed80;
                  local_1a8 = *(ulong *)(p_Var9 + lVar1 * 8);
                  lVar21 = lVar21 + 1;
                } while (local_1a8 == 0);
                uVar17 = (local_1a8 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (local_1a8 & 0x5555555555555555) << 1;
                uVar17 = (uVar17 & 0xcccccccccccccccc) >> 2 | (uVar17 & 0x3333333333333333) << 2;
                uVar17 = (uVar17 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar17 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar17 = (uVar17 & 0xff00ff00ff00ff00) >> 8 | (uVar17 & 0xff00ff00ff00ff) << 8;
                uVar17 = (uVar17 & 0xffff0000ffff0000) >> 0x10 | (uVar17 & 0xffff0000ffff) << 0x10;
                uVar17 = uVar17 >> 0x20 | uVar17 << 0x20;
                local_1a8 = local_1a8 - 1 & local_1a8;
                lVar21 = lVar1;
              }
            } while( true );
          }
LAB_10019ed80:
          _swift_bridgeObjectRelease(p_Var4);
        }
        FUN_100011080(*(long *)(p_Var6 + 0x38) + uVar26 * 0x20,&local_160);
        FUN_10019e27c(uVar26,p_Var6);
        p_Var4 = p_Var6;
      }
      param_5 = &local_160;
      puVar13 = &DAT_100fb3fe8;
      FUN_100005808(param_5,&DAT_100fb3fe8,&DAT_100c32160);
    }
    else {
      uVar15 = 0;
      FUN_100011080(local_180);
      p_Var9 = p_Var4;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = (uint)p_Var9;
      uVar17 = uVar26;
      FUN_10019de50();
      uVar18 = (ulong)~(uint)uVar15 & 1;
      if (SCARRY8(*(long *)(p_Var4 + 0x10),uVar18)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee18);
        (*pcVar3)();
      }
      if (*(long *)(p_Var4 + 0x18) < (long)(*(long *)(p_Var4 + 0x10) + uVar18)) {
        FUN_10019dfb4();
        uVar17 = uVar26;
        FUN_10019de50();
        p_Var6 = p_Var4;
        if (((uint)uVar15 & 1) != (uVar12 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee30);
          (*pcVar3)();
        }
      }
      else {
        p_Var6 = p_Var4;
        if (((ulong)p_Var9 & 1) == 0) {
          p_Var10 = (_DictionaryStorage *)&DAT_100fb3fe0;
          FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
          Swift::_DictionaryStorage::_copy(p_Var10,p_Var4);
          if (*(long *)(p_Var4 + 0x10) != 0) {
            p_Var9 = p_Var4 + 0x40;
            uVar18 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
            if ((p_Var6 != p_Var4) || (p_Var9 + uVar18 * 8 <= p_Var6 + 0x40)) {
              _memmove(p_Var6 + 0x40,p_Var9,uVar18 << 3);
            }
            lVar21 = 0;
            *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(p_Var4 + 0x10);
            uVar18 = 1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
            local_1b0 = 0xffffffffffffffff;
            if (((byte)p_Var4[0x20] & 0x3f) < 6) {
              local_1b0 = ~(-1L << (uVar18 & 0x3f));
            }
            local_1b0 = local_1b0 & *(ulong *)(p_Var4 + 0x40);
            if (local_1b0 == 0) goto LAB_10019eb90;
            do {
              uVar16 = (local_1b0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_1b0 & 0x5555555555555555) << 1
              ;
              uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
              uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
              uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
              uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
              local_1b0 = local_1b0 - 1 & local_1b0;
              while( true ) {
                uVar16 = LZCOUNT(uVar16) | lVar21 << 6;
                uVar25 = *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar16 * 8);
                FUN_10000cbfc(*(long *)(p_Var4 + 0x38) + uVar16 * 0x20,local_180);
                *(undefined8 *)(*(long *)(p_Var6 + 0x30) + uVar16 * 8) = uVar25;
                FUN_100011080(local_180,*(long *)(p_Var6 + 0x38) + uVar16 * 0x20);
                if (local_1b0 != 0) break;
LAB_10019eb90:
                do {
                  lVar1 = lVar21 + 1;
                  if (SCARRY8(lVar21,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee20);
                    (*pcVar3)();
                  }
                  if ((long)(uVar18 + 0x3f >> 6) <= lVar1) goto LAB_10019ec20;
                  local_1b0 = *(ulong *)(p_Var9 + lVar1 * 8);
                  lVar21 = lVar21 + 1;
                } while (local_1b0 == 0);
                uVar16 = (local_1b0 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (local_1b0 & 0x5555555555555555) << 1;
                uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
                uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
                uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
                uVar16 = uVar16 >> 0x20 | uVar16 << 0x20;
                local_1b0 = local_1b0 - 1 & local_1b0;
                lVar21 = lVar1;
              }
            } while( true );
          }
LAB_10019ec20:
          _swift_bridgeObjectRelease(p_Var4);
        }
      }
      p_Var4 = p_Var6;
      if ((uVar15 & 1) == 0) {
        *(ulong *)(p_Var6 + (uVar17 >> 6) * 8 + 0x40) =
             *(ulong *)(p_Var6 + (uVar17 >> 6) * 8 + 0x40) | 1L << (uVar17 & 0x3f);
        *(ulong *)(*(long *)(p_Var6 + 0x30) + uVar17 * 8) = uVar26;
        puVar13 = (undefined *)(*(long *)(p_Var6 + 0x38) + uVar17 * 0x20);
        param_5 = &local_160;
        FUN_100011080();
        if (SCARRY8(*(long *)(p_Var6 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10019ee1c);
          (*pcVar3)();
        }
        *(long *)(p_Var6 + 0x10) = *(long *)(p_Var6 + 0x10) + 1;
      }
      else {
        puVar13 = (undefined *)(*(long *)(p_Var6 + 0x38) + uVar17 * 0x20);
        FUN_100004594(puVar13);
        FUN_100011080(&local_160);
        param_5 = (undefined8 *******)0x0;
      }
    }
  } while( true );
}



/* Address: 0x10019ee30 | FUN_10019ee30 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10019ee30(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *capacity;
  ulong uVar8;
  ulong *puVar9;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fb3fd0;
    FUN_1000037f0(&DAT_100fb3fd0,&DAT_100c32150);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (ulong *)(param_1 + 0x30);
    do {
      uVar2 = puVar9[-2];
      uVar3 = puVar9[-1];
      uVar8 = *puVar9;
      uVar7 = uVar8;
      FUN_1001037b4(uVar3);
      uVar6 = uVar2;
      FUN_10019de50();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019ef28);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      *(ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 8) = uVar2;
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar8;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10019ef2c);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      capacity = capacity + -1;
      puVar9 = puVar9 + 3;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x10019ef2c | FUN_10019ef2c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019ef2c(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  NSDictionary *pNVar4;
  long lVar5;
  int *piVar6;
  int *piVar7;
  undefined8 in_x6;
  undefined8 in_x7;
  int iVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  int aiStack_100 [6];
  undefined8 local_e8;
  long lStack_e0;
  
  puVar1 = &DAT_100fb3fb0;
  FUN_1000037f0(&DAT_100fb3fb0,&DAT_100c32130);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  uVar9 = *(undefined8 *)PTR__kSecValueData_100eaa518;
  *(undefined8 *)(puVar1 + 0x20) = uVar9;
  puVar3 = PTR___type_metadata_for_Foundation_Data_100ea7300;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  uVar11 = *(undefined8 *)PTR__kSecAttrAccessible_100eaa478;
  *(undefined **)(puVar1 + 0x40) = puVar3;
  *(undefined8 *)(puVar1 + 0x48) = uVar11;
  uVar12 = *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlock_100eaa480;
  uVar11 = 0;
  FUN_10019d110();
  *(undefined8 *)(puVar1 + 0x68) = uVar11;
  *(undefined8 *)(puVar1 + 0x50) = uVar12;
  FUN_1001037b4(param_1,param_2);
  puVar2 = puVar1;
  FUN_10019e550(puVar1);
  _swift_setDeallocating(puVar1);
  puVar3 = &DAT_100fb3fb8;
  FUN_1000037f0(&DAT_100fb3fb8,&DAT_100c32138);
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar3);
  FUN_10019d294(&DAT_100fb3f88,&TargetProtocolConformanceDescriptor_100c31ff4);
  pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(puVar2);
  lVar5 = param_3;
  _SecItemUpdate(param_3,pNVar4);
  if ((int)lVar5 != 0) {
    FUN_1000da768(aiStack_100);
    lVar5 = lStack_e0;
    uVar11 = local_e8;
    FUN_100004640(aiStack_100,local_e8);
    (**(code **)(lVar5 + 0x30))
              (0x6e6961686379656b,&DAT_e800000000000000,0xd000000000000035,0x8000000100d97a40,uVar11
               ,lVar5,in_x6,in_x7,pNVar4);
    FUN_100004594(aiStack_100);
    puVar1 = &DAT_100fb3fc0;
    FUN_1000037f0(&DAT_100fb3fc0,&DAT_100c32140);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    *(undefined8 *)(puVar1 + 0x20) = uVar9;
    *(undefined8 *)(puVar1 + 0x28) = param_1;
    *(undefined8 *)(puVar1 + 0x30) = param_2;
    FUN_1001037b4(param_1,param_2);
    puVar3 = puVar1;
    FUN_10019ee30(puVar1);
    _swift_setDeallocating(puVar1);
    FUN_100005808(puVar1 + 0x20,&DAT_100fb3fc8,&DAT_100c32148);
    pNVar4 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(puVar3);
    _SecItemUpdate(param_3,pNVar4);
    iVar8 = (int)param_3;
    if (iVar8 != 0) {
      _SecCopyErrorMessageString(param_3,0);
      if (param_3 == 0) {
        SVar13 = (String)(ZEXT816(0xe000000000000000) << 0x40);
      }
      else {
        SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      }
      FUN_1000da768(aiStack_100);
      piVar6 = aiStack_100;
      FUN_100004640(piVar6,local_e8);
      FUN_10019dd18();
      puVar1 = &DAT_100ebd858;
      piVar7 = piVar6;
      _swift_allocError(&DAT_100ebd858,piVar6,0,0);
      *piVar7 = iVar8;
      *(String *)(piVar7 + 2) = SVar13;
      pcVar10 = *(code **)(lStack_e0 + 0x20);
      _swift_bridgeObjectRetain(SVar13.bridgeObject);
      (*pcVar10)(puVar1,local_e8,lStack_e0);
      _swift_errorRelease(puVar1);
      FUN_100004594(aiStack_100);
      _swift_allocError(&DAT_100ebd858,piVar6,0,0);
      *piVar6 = iVar8;
      *(String *)(piVar6 + 2) = SVar13;
      _swift_willThrow();
    }
  }
  return 0;
}



/* Address: 0x10019f2cc | FUN_10019f2cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

NSDictionary *
FUN_10019f2cc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 *****param_5)

{
  long lVar1;
  __CocoaDictionary _Var2;
  code *pcVar3;
  __RawDictionaryStorage *p_Var4;
  undefined8 uVar5;
  __RawDictionaryStorage *original;
  undefined *puVar6;
  Iterator *pIVar7;
  __RawDictionaryStorage *p_Var8;
  _DictionaryStorage *p_Var9;
  NSDictionary *pNVar10;
  uint uVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  undefined8 *****pppppuVar18;
  undefined8 ****ppppuVar19;
  long lVar20;
  undefined8 *****pppppuVar21;
  undefined8 ****ppppuVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  ulong uVar26;
  ulong local_1d0;
  undefined *local_1a0 [3];
  undefined *local_188;
  undefined8 ****local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  ulong local_160;
  undefined *local_158;
  
  p_Var4 = (__RawDictionaryStorage *)&DAT_100fb3fb0;
  FUN_1000037f0(&DAT_100fb3fb0,&DAT_100c32130);
  _swift_initStackObject();
  *(undefined8 *)(p_Var4 + 0x18) = 10;
  *(undefined8 *)(p_Var4 + 0x10) = 5;
  *(undefined8 *)(p_Var4 + 0x20) = *(undefined8 *)PTR__kSecClass_100eaa4d0;
  uVar25 = *(undefined8 *)PTR__kSecClassGenericPassword_100eaa4d8;
  uVar5 = 0;
  FUN_10019d110();
  *(undefined8 *)(p_Var4 + 0x28) = uVar25;
  uVar25 = *(undefined8 *)PTR__kSecAttrSynchronizable_100eaa4c0;
  *(undefined8 *)(p_Var4 + 0x40) = uVar5;
  *(undefined8 *)(p_Var4 + 0x48) = uVar25;
  lVar23 = *(long *)PTR__kCFBooleanTrue_100ea9b20;
  if (lVar23 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10019fb08);
    (*pcVar3)();
  }
  uVar25 = 0;
  FUN_10019d0fc();
  *(long *)(p_Var4 + 0x50) = lVar23;
  uVar24 = *(undefined8 *)PTR__kSecAttrAccessible_100eaa478;
  *(undefined8 *)(p_Var4 + 0x68) = uVar25;
  *(undefined8 *)(p_Var4 + 0x70) = uVar24;
  *(undefined8 *)(p_Var4 + 0x78) = *(undefined8 *)PTR__kSecAttrAccessibleAfterFirstUnlock_100eaa480;
  uVar25 = *(undefined8 *)PTR__kSecAttrService_100eaa4b8;
  *(undefined8 *)(p_Var4 + 0x90) = uVar5;
  *(undefined8 *)(p_Var4 + 0x98) = uVar25;
  puVar6 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(p_Var4 + 0xa0) = param_3;
  *(undefined8 *)(p_Var4 + 0xa8) = param_4;
  uVar25 = *(undefined8 *)PTR__kSecAttrAccount_100eaa488;
  *(undefined **)(p_Var4 + 0xb8) = puVar6;
  *(undefined8 *)(p_Var4 + 0xc0) = uVar25;
  *(undefined **)(p_Var4 + 0xe0) = puVar6;
  *(undefined8 *)(p_Var4 + 200) = param_1;
  *(undefined8 *)(p_Var4 + 0xd0) = param_2;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  original = p_Var4;
  FUN_10019e550();
  _swift_setDeallocating(p_Var4);
  puVar6 = &DAT_100fb3fb8;
  FUN_1000037f0(&DAT_100fb3fb8,&DAT_100c32138);
  puVar12 = (undefined *)0x5;
  _swift_arrayDestroy(p_Var4 + 0x20,5,puVar6);
  if (((ulong)param_5 & 0xc000000000000001) == 0) {
    uVar13 = -1L << ((ulong)*(byte *)(param_5 + 4) & 0x3f);
    uVar17 = ~uVar13;
    pppppuVar21 = param_5 + 8;
    uVar13 = -uVar13;
    uVar26 = 0xffffffffffffffff;
    if (uVar13 < 0x40) {
      uVar26 = ~(-1L << (uVar13 & 0x3f));
    }
    ppppuVar22 = (undefined8 ****)(uVar26 & (ulong)*pppppuVar21);
    pppppuVar18 = param_5;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_5 & 0xffffffffffffff8);
    if ((undefined8 *****)0x7fffffffffffffff < param_5) {
      _Var2.unknown = (undefined *)param_5;
    }
    pIVar7 = Swift::__CocoaDictionary::makeIterator(_Var2);
    pppppuVar21 = (undefined8 *****)0x0;
    uVar17 = 0;
    ppppuVar22 = (undefined8 ****)0x0;
    pppppuVar18 = (undefined8 *****)((ulong)pIVar7 | 0x8000000000000000);
  }
  _swift_bridgeObjectRetain();
  lVar23 = 0;
  p_Var4 = original;
LAB_10019f540:
  do {
    lVar20 = lVar23;
    ppppuVar19 = ppppuVar22;
    if ((long)pppppuVar18 < 0) {
      Swift::__CocoaDictionary::Iterator::_next
                ((Iterator *)((ulong)pppppuVar18 & 0x7fffffffffffffff));
      if (param_5 == (undefined8 *****)0x0) {
LAB_10019fa78:
        local_160 = 0;
        local_158 = (undefined *)0x0;
        goto LAB_10019fa7c;
      }
      local_180 = param_5;
      _swift_dynamicCast(&local_160,&local_180,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8
                         ,uVar5,7);
      local_158 = puVar12;
      uVar26 = local_160;
    }
    else {
      while (ppppuVar19 == (undefined8 ****)0x0) {
        lVar1 = lVar20 + 1;
        if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10019faf4);
          (*pcVar3)();
        }
        if ((long)(uVar17 + 0x40 >> 6) <= lVar1) {
          ppppuVar22 = (undefined8 ****)0x0;
          goto LAB_10019fa78;
        }
        lVar20 = lVar1;
        ppppuVar19 = pppppuVar21[lVar1];
      }
      uVar26 = ((ulong)ppppuVar19 & 0xaaaaaaaaaaaaaaaa) >> 1 |
               ((ulong)ppppuVar19 & 0x5555555555555555) << 1;
      uVar26 = (uVar26 & 0xcccccccccccccccc) >> 2 | (uVar26 & 0x3333333333333333) << 2;
      uVar26 = (uVar26 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar26 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar26 = (uVar26 & 0xff00ff00ff00ff00) >> 8 | (uVar26 & 0xff00ff00ff00ff) << 8;
      uVar26 = (uVar26 & 0xffff0000ffff0000) >> 0x10 | (uVar26 & 0xffff0000ffff) << 0x10;
      ppppuVar19 = (undefined8 ****)((long)ppppuVar19 - 1U & (ulong)ppppuVar19);
      uVar13 = lVar20 << 9 | LZCOUNT(uVar26 >> 0x20 | uVar26 << 0x20) << 3;
      uVar26 = *(ulong *)((long)pppppuVar18[6] + uVar13);
      puVar12 = *(undefined **)((long)pppppuVar18[7] + uVar13);
      local_160 = uVar26;
      local_158 = puVar12;
      _swift_unknownObjectRetain(puVar12);
    }
    if (uVar26 == 0) {
LAB_10019fa7c:
      FUN_10000c650(pppppuVar18,pppppuVar21,uVar17,lVar23,ppppuVar22);
      FUN_10019d294(&DAT_100fb3f88,&TargetProtocolConformanceDescriptor_100c31ff4);
      pNVar10 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(p_Var4);
      return pNVar10;
    }
    puVar6 = puVar12;
    _swift_getObjectType();
    lVar23 = lVar20;
    ppppuVar22 = ppppuVar19;
    local_1a0[0] = puVar12;
    local_188 = puVar6;
    if (puVar6 == (undefined *)0x0) {
      uVar13 = 0;
      FUN_100005808(local_1a0,&DAT_100fb3fe8,&DAT_100c32160);
      _swift_bridgeObjectRetain(p_Var4);
      FUN_10019de50();
      _swift_bridgeObjectRelease(p_Var4);
      if ((uVar13 & 1) == 0) {
        uStack_178 = 0;
        local_180 = (undefined8 *****)0x0;
        uStack_168 = 0;
        uStack_170 = 0;
      }
      else {
        p_Var8 = original;
        _swift_isUniquelyReferenced_nonNull_native();
        p_Var4 = original;
        if (((ulong)p_Var8 & 1) == 0) {
          p_Var9 = (_DictionaryStorage *)&DAT_100fb3fe0;
          FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
          Swift::_DictionaryStorage::_copy(p_Var9,original);
          if (*(long *)(original + 0x10) != 0) {
            p_Var8 = original + 0x40;
            uVar13 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
            if ((p_Var4 != original) || (p_Var8 + uVar13 * 8 <= p_Var4 + 0x40)) {
              _memmove(p_Var4 + 0x40,p_Var8,uVar13 << 3);
            }
            lVar20 = 0;
            *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
            uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            local_1d0 = 0xffffffffffffffff;
            if (((byte)original[0x20] & 0x3f) < 6) {
              local_1d0 = ~(-1L << (uVar13 & 0x3f));
            }
            local_1d0 = local_1d0 & *(ulong *)(original + 0x40);
            if (local_1d0 == 0) goto LAB_10019f9dc;
            do {
              uVar15 = (local_1d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_1d0 & 0x5555555555555555) << 1
              ;
              uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
              uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
              uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
              uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
              local_1d0 = local_1d0 - 1 & local_1d0;
              while( true ) {
                uVar15 = LZCOUNT(uVar15) | lVar20 << 6;
                uVar25 = *(undefined8 *)(*(long *)(original + 0x30) + uVar15 * 8);
                FUN_10000cbfc(*(long *)(original + 0x38) + uVar15 * 0x20,&local_180);
                *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar15 * 8) = uVar25;
                FUN_100011080(&local_180,*(long *)(p_Var4 + 0x38) + uVar15 * 0x20);
                if (local_1d0 != 0) break;
LAB_10019f9dc:
                do {
                  lVar1 = lVar20 + 1;
                  if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
                    pcVar3 = (code *)SoftwareBreakpoint(1,0x10019fb04);
                    (*pcVar3)();
                  }
                  if ((long)(uVar13 + 0x3f >> 6) <= lVar1) goto LAB_10019fa64;
                  local_1d0 = *(ulong *)(p_Var8 + lVar1 * 8);
                  lVar20 = lVar20 + 1;
                } while (local_1d0 == 0);
                uVar15 = (local_1d0 & 0xaaaaaaaaaaaaaaaa) >> 1 |
                         (local_1d0 & 0x5555555555555555) << 1;
                uVar15 = (uVar15 & 0xcccccccccccccccc) >> 2 | (uVar15 & 0x3333333333333333) << 2;
                uVar15 = (uVar15 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar15 & 0xf0f0f0f0f0f0f0f) << 4;
                uVar15 = (uVar15 & 0xff00ff00ff00ff00) >> 8 | (uVar15 & 0xff00ff00ff00ff) << 8;
                uVar15 = (uVar15 & 0xffff0000ffff0000) >> 0x10 | (uVar15 & 0xffff0000ffff) << 0x10;
                uVar15 = uVar15 >> 0x20 | uVar15 << 0x20;
                local_1d0 = local_1d0 - 1 & local_1d0;
                lVar20 = lVar1;
              }
            } while( true );
          }
LAB_10019fa64:
          _swift_bridgeObjectRelease(original);
        }
        FUN_100011080(*(long *)(p_Var4 + 0x38) + uVar26 * 0x20,&local_180);
        FUN_10019e27c(uVar26,p_Var4);
        original = p_Var4;
      }
      param_5 = &local_180;
      puVar12 = &DAT_100fb3fe8;
      FUN_100005808(param_5,&DAT_100fb3fe8,&DAT_100c32160);
      goto LAB_10019f540;
    }
    uVar13 = 0;
    FUN_100011080(local_1a0);
    p_Var4 = original;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = (uint)p_Var4;
    uVar15 = uVar26;
    FUN_10019de50();
    uVar16 = (ulong)~(uint)uVar13 & 1;
    if (SCARRY8(*(long *)(original + 0x10),uVar16)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10019faf8);
      (*pcVar3)();
    }
    if (*(long *)(original + 0x18) < (long)(*(long *)(original + 0x10) + uVar16)) {
      FUN_10019dfb4();
      uVar15 = uVar26;
      FUN_10019de50();
      if (((uint)uVar13 & 1) != (uVar11 & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019fb14);
        (*pcVar3)();
      }
LAB_10019f694:
      if ((uVar13 & 1) == 0) goto LAB_10019f730;
LAB_10019f50c:
      puVar12 = (undefined *)(*(long *)(original + 0x38) + uVar15 * 0x20);
      FUN_100004594(puVar12);
      FUN_100011080(&local_180);
      param_5 = (undefined8 *****)0x0;
      p_Var4 = original;
    }
    else {
      if (((ulong)p_Var4 & 1) == 0) {
        p_Var9 = (_DictionaryStorage *)&DAT_100fb3fe0;
        FUN_1000037f0(&DAT_100fb3fe0,&DAT_100c32158);
        p_Var4 = original;
        Swift::_DictionaryStorage::_copy(p_Var9,original);
        if (*(long *)(original + 0x10) != 0) {
          p_Var8 = original + 0x40;
          uVar16 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
          if ((p_Var4 != original) || (p_Var8 + uVar16 * 8 <= p_Var4 + 0x40)) {
            _memmove(p_Var4 + 0x40,p_Var8,uVar16 << 3);
          }
          lVar20 = 0;
          *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
          uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          local_1d0 = 0xffffffffffffffff;
          if (((byte)original[0x20] & 0x3f) < 6) {
            local_1d0 = ~(-1L << (uVar16 & 0x3f));
          }
          local_1d0 = local_1d0 & *(ulong *)(original + 0x40);
          if (local_1d0 == 0) goto LAB_10019f87c;
          do {
            uVar14 = (local_1d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_1d0 & 0x5555555555555555) << 1;
            uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
            uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
            uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
            uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
            uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
            local_1d0 = local_1d0 - 1 & local_1d0;
            while( true ) {
              uVar14 = LZCOUNT(uVar14) | lVar20 << 6;
              uVar25 = *(undefined8 *)(*(long *)(original + 0x30) + uVar14 * 8);
              FUN_10000cbfc(*(long *)(original + 0x38) + uVar14 * 0x20,local_1a0);
              *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar14 * 8) = uVar25;
              FUN_100011080(local_1a0,*(long *)(p_Var4 + 0x38) + uVar14 * 0x20);
              if (local_1d0 != 0) break;
LAB_10019f87c:
              do {
                lVar1 = lVar20 + 1;
                if (SCARRY8(lVar20,1)) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x10019fb00);
                  (*pcVar3)();
                }
                if ((long)(uVar16 + 0x3f >> 6) <= lVar1) goto LAB_10019f900;
                local_1d0 = *(ulong *)(p_Var8 + lVar1 * 8);
                lVar20 = lVar20 + 1;
              } while (local_1d0 == 0);
              uVar14 = (local_1d0 & 0xaaaaaaaaaaaaaaaa) >> 1 | (local_1d0 & 0x5555555555555555) << 1
              ;
              uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
              uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
              uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
              uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
              uVar14 = uVar14 >> 0x20 | uVar14 << 0x20;
              local_1d0 = local_1d0 - 1 & local_1d0;
              lVar20 = lVar1;
            }
          } while( true );
        }
LAB_10019f900:
        _swift_bridgeObjectRelease(original);
        original = p_Var4;
        goto LAB_10019f694;
      }
      if ((uVar13 & 1) != 0) goto LAB_10019f50c;
LAB_10019f730:
      *(ulong *)(original + (uVar15 >> 6) * 8 + 0x40) =
           *(ulong *)(original + (uVar15 >> 6) * 8 + 0x40) | 1L << (uVar15 & 0x3f);
      *(ulong *)(*(long *)(original + 0x30) + uVar15 * 8) = uVar26;
      puVar12 = (undefined *)(*(long *)(original + 0x38) + uVar15 * 0x20);
      param_5 = &local_180;
      FUN_100011080();
      if (SCARRY8(*(long *)(original + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10019fafc);
        (*pcVar3)();
      }
      *(long *)(original + 0x10) = *(long *)(original + 0x10) + 1;
      p_Var4 = original;
    }
  } while( true );
}



/* Address: 0x10019fb14 | FUN_10019fb14 */

undefined8 FUN_10019fb14(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3fb8;
  FUN_1000037f0(&DAT_100fb3fb8,&DAT_100c32138);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10019fb64 | thunk_FUN_10019dd68 */

void thunk_FUN_10019dd68(void)

{
  thunk_FUN_10019dd68();
  return;
}



/* Address: 0x10019fb68 | FUN_10019fb68 */

void FUN_10019fb68(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4010;
  FUN_1000037f0(&DAT_100fb4010,&DAT_100c321e0);
  _swift_allocObject();
  FUN_1000db2a8();
  DAT_101057390 = puVar1;
  return;
}



/* Address: 0x10019fbb0 | FUN_10019fbb0 */

undefined8 * FUN_10019fbb0(void)

{
  if (DAT_100fb3ff8 != -1) {
    _swift_once(&DAT_100fb3ff8,FUN_10019fb68);
  }
  return &DAT_101057390;
}



/* Address: 0x10019fbf0 | FUN_10019fbf0 */

void FUN_10019fbf0(void)

{
  FUN_10019fcf4(FUN_1001a1b7c,&PTR_PTR_100ebdaf8,0xb,FUN_10019fc10);
  return;
}



/* Address: 0x10019fc10 | FUN_10019fc10 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019fc10(undefined8 *param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40 [8];
  undefined8 local_38;
  
  if (DAT_100fb3ff8 != -1) {
    _swift_once(&DAT_100fb3ff8,FUN_10019fb68);
  }
  pcVar2 = *(code **)(*DAT_101057390 + 0x78);
  (*pcVar2)(local_40);
  (*pcVar2)(&local_50,0);
  _swift_bridgeObjectRelease(uStack_48);
  FUN_1001a1b7c(0);
  _swift_allocObject();
  uVar1 = local_38;
  FUN_1001a4c5c(local_38,local_50);
  _swift_bridgeObjectRelease(local_38);
  *param_1 = uVar1;
  return 0;
}



/* Address: 0x10019fcd4 | FUN_10019fcd4 */

void FUN_10019fcd4(void)

{
  FUN_10019fcf4(FUN_1001a6de0,&PTR_PTR_100ebdcb0,0x14,FUN_10019fd5c);
  return;
}



/* Address: 0x10019fcf4 | FUN_10019fcf4 */

void FUN_10019fcf4(long param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  (*param_2)();
  *(undefined8 *)(param_1 + 0x18) = uVar1;
  *(undefined8 *)(param_1 + 0x20) = param_3;
  FUN_1000d80e0(param_1,"PasteLicensing/DI+PasteLicensing.swift",0x26,2,param_4,0x13,param_5,0,uVar1
               );
  return;
}



/* Address: 0x10019fd5c | FUN_10019fd5c */

void FUN_10019fd5c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001a6de0();
  _swift_allocObject();
  FUN_1001a67e4();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10019fd98 | FUN_10019fd98 */

undefined1  [16] FUN_10019fd98(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100d97ae0;
  auVar1._0_8_ = 0xd000000000000011;
  return auVar1;
}



/* Address: 0x10019fdb4 | FUN_10019fdb4 */

void FUN_10019fdb4(void)

{
  FUN_10019fdec();
  return;
}



/* Address: 0x10019fdd0 | FUN_10019fdd0 */

void FUN_10019fdd0(void)

{
  FUN_10019fdec();
  return;
}



/* Address: 0x10019fdec | FUN_10019fdec */

void FUN_10019fdec(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  
  _swift_getKeyPath(in_x3);
  FUN_1000037f0(in_x4,in_x5);
  _swift_allocObject();
  FUN_1000da6e0(in_x3);
  return;
}



/* Address: 0x10019fe44 | FUN_10019fe44 */

void FUN_10019fe44(void)

{
  FUN_1000d4ca4(0);
  _swift_allocObject();
  FUN_1000d4624(0x6143657275636553,0xeb00000000656863);
  return;
}



/* Address: 0x10019fe94 | thunk_FUN_10019d088 */

void thunk_FUN_10019d088(void)

{
  thunk_FUN_10019d088();
  return;
}



/* Address: 0x10019fe98 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10019fe9c | FUN_10019fe9c */

void FUN_10019fe9c(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10019fee0();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x18),param_1,&DAT_100fb4018,&DAT_100c321e8);
  return;
}



/* Address: 0x10019fee0 | FUN_10019fee0 */

void FUN_10019fee0(undefined8 param_1)

{
  if (DAT_100fb40b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca6a14);
  return;
}



/* Address: 0x10019ff18 | FUN_10019ff18 */

void FUN_10019ff18(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_10019fee0();
  FUN_100011090(unaff_x20 + *(int *)(lVar1 + 0x1c),param_1,&DAT_100fb4020,&DAT_100c32600);
  return;
}



/* Address: 0x10019ff5c | FUN_10019ff5c */

void FUN_10019ff5c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  lVar1 = 0;
  FUN_10019fee0();
  FUN_10019ffdc(param_6,(long)param_1 + (long)*(int *)(lVar1 + 0x18),&DAT_100fb4018,&DAT_100c321e8);
  FUN_10019ffdc(param_7,(long)param_1 + (long)*(int *)(lVar1 + 0x1c),&DAT_100fb4020,&DAT_100c32600);
  return;
}



/* Address: 0x10019ffdc | FUN_10019ffdc */

undefined8 FUN_10019ffdc(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000037f0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x20))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x1001a0024 | FUN_1001a0024 */

undefined1  [16] FUN_1001a0024(void)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auVar6 [16];
  
  bVar4 = *unaff_x20;
  puVar3 = (undefined1 *)0xee00657461446e6f;
  puVar5 = (undefined1 *)0x6974617269707865;
  if (bVar4 != 2) {
    puVar3 = (undefined1 *)0xed00004c5255746e;
    puVar5 = (undefined1 *)0x656d6567616e616d;
  }
  puVar1 = &SUB_00006469;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0x4e79616c70736964;
  }
  puVar2 = &SUB_e200000000000000;
  if (bVar4 != 0) {
    puVar2 = (undefined1 *)0xeb00000000656d61;
  }
  if (bVar4 < 2) {
    puVar3 = puVar2;
    puVar5 = puVar1;
  }
  auVar6._8_8_ = puVar3;
  auVar6._0_8_ = puVar5;
  return auVar6;
}



/* Address: 0x1001a00b4 | FUN_1001a00b4 */

void FUN_1001a00b4(undefined1 *param_1,undefined1 param_2)

{
  FUN_1001a1458();
  *param_1 = param_2;
  return;
}



/* Address: 0x1001a00d8 | FUN_1001a00d8 */

String FUN_1001a00d8(void)

{
  String SVar1;
  
  FUN_1001a0330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1001a0100 | FUN_1001a0100 */

String FUN_1001a0100(void)

{
  String SVar1;
  
  FUN_1001a0330();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1001a0128 | FUN_1001a0128 */

/* WARNING: Removing unreachable block (ram,0x0001001a0290) */

void FUN_1001a0128(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  URL UVar6;
  long extraout_x8;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fb4028;
  FUN_1000037f0(&DAT_100fb4028,&DAT_100c321f0);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1001a0330();
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(*unaff_x20,unaff_x20[1],&local_51,puVar2);
  if (unaff_x21 == 0) {
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode(unaff_x20[2],unaff_x20[3],&local_52,puVar2);
    lVar3 = 0;
    FUN_10019fee0();
    iVar1 = *(int *)(lVar3 + 0x18);
    local_53 = 2;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    puVar5 = &DAT_100fb4038;
    FUN_100003a00(&DAT_100fb4038,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_53,puVar2,DVar4.unknown,puVar5);
    iVar1 = *(int *)(lVar3 + 0x1c);
    local_54 = 3;
    UVar6 = Foundation::URL::typeMetadataAccessor();
    puVar5 = &DAT_100fb4040;
    FUN_100003a00(&DAT_100fb4040,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Encodable_100ea71b8);
    Swift::KeyedEncodingContainer::_encodeIfPresent
              ((long)unaff_x20 + (long)iVar1,&local_54,puVar2,UVar6.unknown,puVar5);
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  else {
    (**(code **)(lVar7 + 8))(auStack_60 + -extraout_x8,puVar2);
  }
  return;
}



/* Address: 0x1001a0330 | FUN_1001a0330 */

void FUN_1001a0330(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4030 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32384;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32384,&DAT_100ebda18);
  DAT_100fb4030 = pTVar1;
  return;
}



/* Address: 0x1001a0370 | FUN_1001a0370 */

/* WARNING: Removing unreachable block (ram,0x0001001a0568) */
/* WARNING: Removing unreachable block (ram,0x0001001a0680) */
/* WARNING: Removing unreachable block (ram,0x0001001a0504) */
/* WARNING: Removing unreachable block (ram,0x0001001a05e8) */
/* WARNING: Removing unreachable block (ram,0x0001001a06b0) */
/* WARNING: Removing unreachable block (ram,0x0001001a06b8) */
/* WARNING: Removing unreachable block (ram,0x0001001a06bc) */

void FUN_1001a0370(void *param_1,long param_2)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  undefined *puVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x8_00;
  long lVar7;
  long extraout_x8_01;
  long extraout_x8_02;
  long unaff_x21;
  String *pSVar8;
  long lVar9;
  String SVar10;
  String SVar11;
  String local_90;
  String local_80;
  undefined *local_70;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar2 = &DAT_100fb4020;
  local_90.bridgeObject = param_1;
  FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fb4018;
  local_80.str = (char *)((long)&local_90 - extraout_x8);
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = ((long)&local_90 - extraout_x8) - extraout_x8_00;
  puVar2 = &DAT_100fb4048;
  local_80.bridgeObject = (void *)lVar7;
  FUN_1000037f0(&DAT_100fb4048,&DAT_100c321f8);
  lVar9 = *(long *)(puVar2 + -8);
  local_70 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = lVar7 - extraout_x8_01;
  lVar3 = 0;
  FUN_10019fee0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  pSVar8 = (String *)(lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1001a0330();
  Swift::Decoder::_container();
  puVar2 = local_70;
  if (unaff_x21 == 0) {
    local_51 = 0;
    SVar10 = Swift::KeyedDecodingContainer::_decode(&local_51,local_70);
    *pSVar8 = SVar10;
    local_52 = 1;
    SVar11 = Swift::KeyedDecodingContainer::_decode(&local_52,puVar2);
    pSVar8[1] = SVar11;
    DVar4 = Foundation::Date::typeMetadataAccessor();
    local_53 = 2;
    puVar5 = &DAT_100fb4050;
    FUN_100003a00(&DAT_100fb4050,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_80.bridgeObject,DVar4.unknown,&local_53,puVar2,DVar4.unknown,puVar5);
    local_90.str = SVar10.bridgeObject;
    FUN_10019ffdc(local_80.bridgeObject,(long)&pSVar8->str + (long)*(int *)(lVar3 + 0x18),
                  &DAT_100fb4018,&DAT_100c321e8);
    UVar6 = Foundation::URL::typeMetadataAccessor();
    local_54 = 3;
    puVar5 = &DAT_100fb4058;
    FUN_100003a00(&DAT_100fb4058,PTR_typeMetadataAccessor_100ea71a8,
                  PTR_Foundation__Foundation__URL_>Swift__Decodable_100ea71d0);
    pcVar1 = local_80.str;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_80.str,UVar6.unknown,&local_54,puVar2,UVar6.unknown,puVar5);
    (**(code **)(lVar9 + 8))(lVar7,puVar2);
    FUN_10019ffdc(pcVar1,(long)&pSVar8->str + (long)*(int *)(lVar3 + 0x1c),&DAT_100fb4020,
                  &DAT_100c32600);
    FUN_1001a0764(pSVar8,local_90.bridgeObject);
    FUN_100004594(param_2);
    FUN_10001835c(pSVar8);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1001a071c | FUN_1001a071c */

undefined8 FUN_1001a071c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4018;
  FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1001a0764 | FUN_1001a0764 */

undefined8 FUN_1001a0764(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10019fee0();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1001a07a8 | FUN_1001a07a8 */

void FUN_1001a07a8(void)

{
  FUN_1001a0370();
  return;
}



/* Address: 0x1001a07bc | FUN_1001a07bc */

void FUN_1001a07bc(void)

{
  FUN_1001a0128();
  return;
}



/* Address: 0x1001a07d0 | FUN_1001a07d0 */

long * FUN_1001a07d0(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  undefined *puVar3;
  long lVar4;
  URL UVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    lVar4 = param_2[1];
    *param_1 = *param_2;
    param_1[1] = lVar4;
    lVar7 = param_2[3];
    param_1[2] = param_2[2];
    param_1[3] = lVar7;
    lVar8 = (long)*(int *)(param_3 + 0x18);
    DVar2 = Foundation::Date::typeMetadataAccessor();
    lVar9 = *(long *)(DVar2.unknown + -8);
    pcVar10 = *(code **)(lVar9 + 0x30);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(lVar7);
    lVar4 = (long)param_2 + lVar8;
    (*pcVar10)(lVar4,1,DVar2.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar9 + 0x10))((long)param_1 + lVar8,(long)param_2 + lVar8,DVar2.unknown);
      (**(code **)(lVar9 + 0x38))((long)param_1 + lVar8,0,1,DVar2.unknown);
    }
    else {
      puVar3 = &DAT_100fb4018;
      FUN_1000037f0(&DAT_100fb4018,&DAT_100c321e8);
      _memcpy((void *)((long)param_1 + lVar8),(void *)((long)param_2 + lVar8),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
    lVar7 = (long)*(int *)(param_3 + 0x1c);
    UVar5 = Foundation::URL::typeMetadataAccessor();
    lVar8 = *(long *)(UVar5.unknown + -8);
    lVar4 = (long)param_2 + lVar7;
    (**(code **)(lVar8 + 0x30))(lVar4,1,UVar5.unknown);
    if ((int)lVar4 == 0) {
      (**(code **)(lVar8 + 0x10))((long)param_1 + lVar7,(long)param_2 + lVar7,UVar5.unknown);
      (**(code **)(lVar8 + 0x38))((long)param_1 + lVar7,0,1,UVar5.unknown);
    }
    else {
      puVar3 = &DAT_100fb4020;
      FUN_1000037f0(&DAT_100fb4020,&DAT_100c32600);
      _memcpy((void *)((long)param_1 + lVar7),(void *)((long)param_2 + lVar7),
              *(size_t *)(*(long *)(puVar3 + -8) + 0x40));
    }
  }
  else {
    lVar4 = *param_2;
    *param_1 = lVar4;
    uVar6 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar4 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1001a096c | FUN_1001a096c */

void FUN_1001a096c(long param_1,long param_2)

{
  int iVar1;
  Date DVar2;
  long lVar3;
  URL UVar4;
  long lVar5;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  iVar1 = *(int *)(param_2 + 0x18);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,DVar2.unknown);
  if ((int)lVar3 == 0) {
    (**(code **)(lVar5 + 8))(param_1 + iVar1,DVar2.unknown);
  }
  iVar1 = *(int *)(param_2 + 0x1c);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar4.unknown + -8);
  lVar3 = param_1 + iVar1;
  (**(code **)(lVar5 + 0x30))(lVar3,1,UVar4.unknown);
  if ((int)lVar3 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001001a0a30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))(param_1 + iVar1,UVar4.unknown);
  return;
}


