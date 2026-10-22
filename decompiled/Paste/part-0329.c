/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100412acc | FUN_100412acc */

void FUN_100412acc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x100412ad4 | FUN_100412ad4 */

undefined1  [16] FUN_100412ad4(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x58);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x60));
  return auVar1;
}



/* Address: 0x100412b00 | FUN_100412b00 */

void FUN_100412b00(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Address: 0x100412b48 | FUN_100412b48 */

undefined8 * FUN_100412b48(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar4 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar4;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  param_1[3] = uVar1;
  uVar2 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  uVar3 = param_2[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar3;
  uVar4 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar4;
  uVar4 = param_2[10];
  uVar5 = param_2[0xb];
  param_1[10] = uVar4;
  param_1[0xb] = uVar5;
  uVar5 = param_2[0xc];
  param_1[0xc] = uVar5;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  return param_1;
}



/* Address: 0x100412be4 | FUN_100412be4 */

undefined8 * FUN_100412be4(undefined8 *param_1,undefined8 *param_2)

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
  param_1[4] = param_2[4];
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[6] = param_2[6];
  uVar1 = param_1[7];
  param_1[7] = param_2[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  param_1[8] = uVar1;
  uVar1 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0xb] = param_2[0xb];
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100412cd8 | FUN_100412cd8 */

void FUN_100412cd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x100412d04 | FUN_100412d04 */

undefined8 * FUN_100412d04(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[8] = param_2[8];
  *(undefined1 *)(param_1 + 9) = *(undefined1 *)(param_2 + 9);
  uVar2 = param_1[10];
  param_1[10] = param_2[10];
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_2[0xc];
  uVar1 = param_1[0xc];
  param_1[0xb] = param_2[0xb];
  param_1[0xc] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100412d98 | FUN_100412d98 */

int FUN_100412d98(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x1a] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100412de0 | FUN_100412de0 */

void FUN_100412de0(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xd) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0xd) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100412e38 | FUN_100412e38 */

undefined1  [16] FUN_100412e38(void)

{
  return ZEXT816(0x100ed2f00);
}



/* Address: 0x100412e48 | FUN_100412e48 */

void FUN_100412e48(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100412e60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x28))(FUN_1000d1c18,0,param_1,param_2);
  return;
}



/* Address: 0x100412e64 | FUN_100412e64 */

void FUN_100412e64(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100412e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))(FUN_1000d1c18,0,param_1,param_2);
  return;
}



/* Address: 0x100412e80 | FUN_100412e80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100412e80(void)

{
  return ZEXT816(0x100fc56c0);
}



/* Address: 0x100412ea0 | FUN_100412ea0 */

void FUN_100412ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar3;
  ID self;
  long unaff_x22;
  long lVar4;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  puVar1 = &DAT_100fc52f0;
  FUN_1000037f0(&DAT_100fc52f0,&DAT_100c484e0);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  FUN_1000da768(unaff_x22 + 0x100);
  self = *(ID *)(unaff_x22 + 0x100);
  *(ID *)(unaff_x22 + 0x120) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100413008;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined **)(unaff_x22 + 0xf0) = puVar1;
  lVar3 = unaff_x22 + 0xd8;
  FUN_10000cbb0(lVar3);
  FUN_1000037f0(&DAT_100fc52f8,&DAT_100c48d20);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar4 + 0x20))(lVar3,uVar2,puVar1);
  *(undefined **)(unaff_x22 + 0xb8) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0x42000000;
  *(code **)(unaff_x22 + 200) = FUN_10040c5b8;
  *(undefined **)(unaff_x22 + 0xd0) = &DAT_100ed3028;
  objc_stub::getPendingNotificationRequestsWithCompletionHandler_(self);
  (**(code **)(lVar4 + 8))(lVar3,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100413008 | FUN_100413008 */

void FUN_100413008(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x110);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_100413058,uVar1,uVar2);
  return;
}



/* Address: 0x100413058 | FUN_100413058 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100413058(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  _ArrayBuffer _Var7;
  ulong uVar8;
  long unaff_x22;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  _Var7.unknown = *(undefined **)(unaff_x22 + 0xf8);
  puVar10 = _Var7.unknown & 0xffffffffffffff8;
  if ((ulong)_Var7.unknown >> 0x3e == 0) {
    uVar8 = *(ulong *)(puVar10 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = puVar10;
    if ((undefined *)0x7fffffffffffffff < _Var7.unknown) {
      _Var1.unknown = _Var7.unknown;
    }
    uVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar5;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        if (((ulong)_Var7.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100413204);
            (*pcVar2)();
          }
        }
        else {
          Swift::_ArrayBuffer::__getElementSlowPath(uVar9,_Var7);
        }
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100413200);
          (*pcVar2)();
        }
        uVar11 = uVar9 + 1;
        FUN_10041325c(unaff_x22 + 0x50);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar12 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar21 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar18 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar6 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x80);
        if (*(long *)(unaff_x22 + 0x58) == 0) break;
        puVar3 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = puVar5;
        if (((ulong)puVar3 & 1) == 0) {
          puVar4 = (undefined *)0x0;
          FUN_1004106dc(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar9 = *(ulong *)(puVar4 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar9) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          FUN_1004106dc(puVar5,uVar9 + 1,1,puVar4);
        }
        *(ulong *)(puVar5 + 0x10) = uVar9 + 1;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x38) = uVar22;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x30) = uVar19;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x48) = uVar23;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x40) = uVar20;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x80) = uVar6;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x68) = uVar15;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x60) = uVar12;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x78) = uVar21;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x70) = uVar18;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x58) = uVar17;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x50) = uVar14;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x28) = uVar16;
        *(undefined8 *)(puVar5 + uVar9 * 0x68 + 0x20) = uVar13;
        uVar9 = uVar11;
        if (uVar11 == uVar8) goto LAB_100413220;
      }
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar8);
  }
LAB_100413220:
  uVar6 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_bridgeObjectRelease(_Var7.unknown);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x000100413258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar5);
  return;
}



/* Address: 0x10041325c | FUN_10041325c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041325c(String *param_1)

{
  ulong uVar1;
  ID IVar2;
  char *pcVar3;
  Dictionary<undefined,undefined> DVar4;
  void *pvVar5;
  ID unaff_x20;
  void *pvVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  
  IVar2 = objc_stub::trigger(unaff_x20);
  if ((IVar2 == 0) ||
     (_swift_dynamicCastObjCClass(IVar2,&_OBJC_CLASS___UNPushNotificationTrigger), IVar2 == 0)) {
    DVar4.unknown = (char *)0x0;
    pcVar3 = (char *)0x0;
    SVar9 = (String)ZEXT816(0);
    SVar8 = (String)ZEXT816(0);
    SVar7 = (String)ZEXT816(0);
    SVar10 = (String)ZEXT816(0);
    SVar11 = (String)ZEXT816(0);
    pvVar6 = (void *)0x0;
  }
  else {
    objc_stub::identifier(unaff_x20);
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar2 = objc_stub::content(unaff_x20);
    objc_stub::title(IVar2);
    SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar2 = objc_stub::content(unaff_x20);
    objc_stub::subtitle(IVar2);
    SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar2 = objc_stub::content(unaff_x20);
    objc_stub::body(IVar2);
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    IVar2 = objc_stub::content(unaff_x20);
    IVar2 = objc_stub::FUN_100bfe3c0(IVar2);
    if (IVar2 == 0) {
      pcVar3 = (char *)0x0;
    }
    else {
      pcVar3 = (char *)objc_stub::unsignedIntegerValue(IVar2);
    }
    pvVar6 = (void *)(ulong)(IVar2 == 0);
    IVar2 = objc_stub::content(unaff_x20);
    objc_stub::userInfo(IVar2);
    DVar4 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
    IVar2 = objc_stub::content(unaff_x20);
    objc_stub::FUN_100bff100(IVar2);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar5 = SVar11.bridgeObject;
    _swift_bridgeObjectRelease(pvVar5);
    uVar1 = (ulong)SVar11.str & 0xffffffffffff;
    if (((ulong)pvVar5 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar5 >> 0x38 & 0xf;
    }
    if (uVar1 == 0) {
      SVar11 = (String)ZEXT816(0);
    }
    else {
      IVar2 = objc_stub::content(unaff_x20);
      objc_stub::FUN_100bff100(IVar2);
      SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    }
  }
  *param_1 = SVar7;
  param_1[1] = SVar8;
  param_1[2] = SVar9;
  param_1[3] = SVar10;
  param_1[4].str = pcVar3;
  param_1[4].bridgeObject = pvVar6;
  param_1[5].str = DVar4.unknown;
  *(String *)&param_1[5].bridgeObject = SVar11;
  return;
}



/* Address: 0x1004135b0 | FUN_1004135b0 */

void FUN_1004135b0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  long lVar3;
  ID self;
  long unaff_x22;
  long lVar4;
  String function;
  
  *(undefined8 *)(unaff_x22 + 0x108) = param_1;
  *(undefined8 *)(unaff_x22 + 0x110) = param_2;
  puVar1 = &DAT_100fc52d8;
  FUN_1000037f0(&DAT_100fc52d8,&DAT_100c48d00);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x118) = uVar2;
  FUN_1000da768(unaff_x22 + 0x100);
  self = *(ID *)(unaff_x22 + 0x100);
  *(ID *)(unaff_x22 + 0x120) = self;
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xf8;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100413718;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  *(undefined **)(unaff_x22 + 0xf0) = puVar1;
  lVar3 = unaff_x22 + 0xd8;
  FUN_10000cbb0(lVar3);
  FUN_1000037f0(&DAT_100fc52e0,&DAT_100c484d0);
  function.bridgeObject = (void *)0x8000000100d8dcc0;
  function.str = (char *)0xd00000000000001e;
  Swift::CheckedContinuation::init(continuation,function);
  (**(code **)(lVar4 + 0x20))(lVar3,uVar2,puVar1);
  *(undefined **)(unaff_x22 + 0xb8) = PTR___NSConcreteStackBlock_100ea82a0;
  *(undefined8 *)(unaff_x22 + 0xc0) = 0x42000000;
  *(code **)(unaff_x22 + 200) = FUN_10040cd28;
  *(undefined **)(unaff_x22 + 0xd0) = &DAT_100ed3000;
  objc_stub::getDeliveredNotificationsWithCompletionHandler_(self);
  (**(code **)(lVar4 + 8))(lVar3,puVar1);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100413718 | FUN_100413718 */

void FUN_100413718(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x108);
  uVar2 = *(undefined8 *)(*unaff_x22 + 0x110);
  FUN_1000da368(uVar1,uVar2);
  _swift_task_switch(FUN_100413768,uVar1,uVar2);
  return;
}



/* Address: 0x100413768 | FUN_100413768 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_100413768(void)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ID IVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  _ArrayBuffer _Var8;
  ulong uVar9;
  long unaff_x22;
  ulong uVar10;
  undefined *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  
  _Var8.unknown = *(undefined **)(unaff_x22 + 0xf8);
  puVar11 = _Var8.unknown & 0xffffffffffffff8;
  if ((ulong)_Var8.unknown >> 0x3e == 0) {
    uVar9 = *(ulong *)(puVar11 + 0x10);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var1.unknown = puVar11;
    if ((undefined *)0x7fffffffffffffff < _Var8.unknown) {
      _Var1.unknown = _Var8.unknown;
    }
    uVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar6;
  if (uVar9 != 0) {
    uVar10 = 0;
    do {
      while( true ) {
        if (((ulong)_Var8.unknown & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar11 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10041392c);
            (*pcVar2)();
          }
          IVar3 = *(ID *)(_Var8.unknown + uVar10 * 8 + 0x20);
        }
        else {
          IVar3 = uVar10;
          Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var8);
        }
        if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100413928);
          (*pcVar2)();
        }
        uVar12 = uVar10 + 1;
        IVar3 = objc_stub::request(IVar3);
        FUN_10041325c(unaff_x22 + 0x50,IVar3);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x90);
        uVar22 = *(undefined8 *)(unaff_x22 + 0xa8);
        uVar19 = *(undefined8 *)(unaff_x22 + 0xa0);
        uVar7 = *(undefined8 *)(unaff_x22 + 0xb0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x58);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x50);
        uVar23 = *(undefined8 *)(unaff_x22 + 0x68);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x60);
        uVar24 = *(undefined8 *)(unaff_x22 + 0x78);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x70);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x88);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x80);
        if (*(long *)(unaff_x22 + 0x58) == 0) break;
        puVar4 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar5 = puVar6;
        if (((ulong)puVar4 & 1) == 0) {
          puVar5 = (undefined *)0x0;
          FUN_1004106dc(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
        }
        uVar10 = *(ulong *)(puVar5 + 0x10);
        puVar6 = puVar5;
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar10) {
          puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
          FUN_1004106dc(puVar6,uVar10 + 1,1,puVar5);
        }
        *(ulong *)(puVar6 + 0x10) = uVar10 + 1;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x38) = uVar23;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x30) = uVar20;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x48) = uVar24;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x40) = uVar21;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x80) = uVar7;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x68) = uVar16;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x60) = uVar13;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x78) = uVar22;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x70) = uVar19;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x58) = uVar18;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x50) = uVar15;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x28) = uVar17;
        *(undefined8 *)(puVar6 + uVar10 * 0x68 + 0x20) = uVar14;
        uVar10 = uVar12;
        if (uVar12 == uVar9) goto LAB_100413948;
      }
      uVar10 = uVar10 + 1;
    } while (uVar12 != uVar9);
  }
LAB_100413948:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  _swift_bridgeObjectRelease(_Var8.unknown);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100413980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(puVar6);
  return;
}



/* Address: 0x100413984 | FUN_100413984 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100413984(undefined8 param_1,undefined8 param_2)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc5738;
  FUN_1000037f0(&DAT_100fc5738,&DAT_100c48cf0);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_68);
  puVar3 = &DAT_100ed2fe8;
  _swift_allocObject(&DAT_100ed2fe8,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar4 = &DAT_100ed2fc0;
  _swift_allocObject(&DAT_100ed2fc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,local_68);
  local_90 = thunk_FUN_100413c5c;
  uStack_88 = 0;
  local_80 = thunk_FUN_100413ddc;
  BVar1.value = 0x78;
  puStack_78 = puVar3;
  local_70 = puVar4;
  FUN_1000037f0(&DAT_100fc5378,&DAT_100c48560);
  (**(code **)(lVar5 + 0x68))
            (auStack_a0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  _swift_retain(param_2);
  Swift::AsyncStream::_init(BVar1);
  _swift_release(puVar4);
  _swift_release(puVar3);
  return 0;
}



/* Address: 0x100413af0 | FUN_100413af0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100413af0(undefined8 param_1,undefined8 param_2)

{
  BufferingPolicy BVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long lVar5;
  undefined1 auStack_a0 [16];
  code *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined8 local_68;
  
  puVar2 = &DAT_100fc5730;
  FUN_1000037f0(&DAT_100fc5730,&DAT_100c48ce0);
  lVar5 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_68);
  puVar3 = &DAT_100ed2f98;
  _swift_allocObject(&DAT_100ed2f98,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  puVar4 = &DAT_100ed2fc0;
  _swift_allocObject(&DAT_100ed2fc0,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,local_68);
  local_90 = thunk_FUN_100413c5c;
  uStack_88 = 0;
  local_80 = FUN_100413ddc;
  BVar1.value = 0x58;
  puStack_78 = puVar3;
  local_70 = puVar4;
  FUN_1000037f0(&DAT_100fc5358,&DAT_100c48540);
  (**(code **)(lVar5 + 0x68))
            (auStack_a0 + -extraout_x8,
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,puVar2);
  _swift_retain(param_2);
  Swift::AsyncStream::_init(BVar1);
  _swift_release(puVar4);
  _swift_release(puVar3);
  return 0;
}



/* Address: 0x100413c5c | FUN_100413c5c */

void FUN_100413c5c(undefined8 *param_1)

{
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_10041325c(&local_88);
  param_1[9] = uStack_40;
  param_1[8] = local_48;
  param_1[0xb] = uStack_30;
  param_1[10] = local_38;
  param_1[0xc] = local_28;
  param_1[1] = uStack_80;
  *param_1 = local_88;
  param_1[3] = uStack_70;
  param_1[2] = local_78;
  param_1[5] = uStack_60;
  param_1[4] = local_68;
  param_1[7] = uStack_50;
  param_1[6] = local_58;
  return;
}



/* Address: 0x100413cb8 | FUN_100413cb8 */

void FUN_100413cb8(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1001a7a2c;
  FUN_100412ea0(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x100413d18 | FUN_100413d18 */

void FUN_100413d18(undefined8 param_1,ulong param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1001a7a2c;
  FUN_1004135b0(param_1,param_2 & 0xcfffffffffffffff);
  return;
}



/* Address: 0x100413d78 | FUN_100413d78 */

void FUN_100413d78(void)

{
  FUN_100413984();
  return;
}



/* Address: 0x100413d98 | FUN_100413d98 */

void FUN_100413d98(void)

{
  FUN_100413af0();
  return;
}



/* Address: 0x100413db8 | FUN_100413db8 */

void FUN_100413db8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100413ddc | FUN_100413ddc */

uint FUN_100413ddc(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  
  uVar1 = 0;
  uStack_48 = param_1[9];
  local_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  local_30 = param_1[0xc];
  uStack_88 = param_1[1];
  local_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  local_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  (**(code **)(unaff_x20 + 0x10))(&local_90);
  return uVar1 & 1;
}



/* Address: 0x100413e2c | FUN_100413e2c */

void FUN_100413e2c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100413e50 | FUN_100413e50 */

void FUN_100413e50(undefined8 param_1)

{
  FUN_10040dcf4(param_1,FUN_10040b338);
  return;
}



/* Address: 0x100413e5c | FUN_100413e5c */

void FUN_100413e5c(undefined8 param_1)

{
  FUN_10040dcf4(param_1,FUN_10040b7d8);
  return;
}



/* Address: 0x100413e68 | FUN_100413e68 */

void FUN_100413e68(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x100413e78 | FUN_100413e78 */

void FUN_100413e78(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x100413e80 | thunk_FUN_100413db8 */

void thunk_FUN_100413db8(void)

{
  FUN_100413db8();
  return;
}



/* Address: 0x100413e84 | thunk_FUN_100413ddc */

uint thunk_FUN_100413ddc(undefined8 *param_1)

{
  uint uVar1;
  long unaff_x20;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  
  uVar1 = 0;
  uStack_48 = param_1[9];
  uStack_50 = param_1[8];
  uStack_38 = param_1[0xb];
  uStack_40 = param_1[10];
  uStack_30 = param_1[0xc];
  uStack_88 = param_1[1];
  uStack_90 = *param_1;
  uStack_78 = param_1[3];
  uStack_80 = param_1[2];
  uStack_68 = param_1[5];
  uStack_70 = param_1[4];
  uStack_58 = param_1[7];
  uStack_60 = param_1[6];
  (**(code **)(unaff_x20 + 0x10))(&uStack_90);
  return uVar1 & 1;
}



/* Address: 0x100413e88 | thunk_FUN_100413e78 */

void thunk_FUN_100413e78(long param_1)

{
  FUN_100004594(param_1 + 0x20);
  return;
}



/* Address: 0x100413e8c | thunk_FUN_100413c5c */

void thunk_FUN_100413c5c(undefined8 *param_1)

{
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  FUN_10041325c(&uStack_88);
  param_1[9] = uStack_40;
  param_1[8] = uStack_48;
  param_1[0xb] = uStack_30;
  param_1[10] = uStack_38;
  param_1[0xc] = uStack_28;
  param_1[1] = uStack_80;
  *param_1 = uStack_88;
  param_1[3] = uStack_70;
  param_1[2] = uStack_78;
  param_1[5] = uStack_60;
  param_1[4] = uStack_68;
  param_1[7] = uStack_50;
  param_1[6] = uStack_58;
  return;
}



/* Address: 0x100413e90 | thunk_FUN_100413e68 */

void thunk_FUN_100413e68(long param_1,long param_2)

{
  FUN_10000cbfc(param_2 + 0x20,param_1 + 0x20);
  return;
}



/* Address: 0x100413e94 | FUN_100413e94 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100413ed0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100413e94(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_1000f7830(&DAT_100fc5798,&DAT_100c48d50);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100413f00 | FUN_100413f00 */

undefined1  [16] FUN_100413f00(char param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  uVar2 = 0xd00000000000002e;
  pcVar1 = "es.apple.com/verifyReceipt";
  if (param_1 != '\x01') {
    uVar2 = 0xd00000000000002a;
    pcVar1 = "localNotificationKey";
  }
  auVar3._8_8_ = (ulong)pcVar1 | 0x8000000000000000;
  auVar3._0_8_ = uVar2;
  return auVar3;
}



/* Address: 0x100413f3c | FUN_100413f3c */

void FUN_100413f3c(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *pcVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar4 = (char *)0xd00000000000002e;
  pcVar1 = "es.apple.com/verifyReceipt";
  if (cVar2 != '\x01') {
    pcVar4 = (char *)0xd00000000000002a;
    pcVar1 = "localNotificationKey";
  }
  SVar5.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
  SVar5.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  HVar3.unknown = (undefined *)((ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100413fb8 | FUN_100413fb8 */

void FUN_100413fb8(Hasher param_1)

{
  char *pcVar1;
  char *pcVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar2 = (char *)0xd00000000000002e;
  pcVar1 = "es.apple.com/verifyReceipt";
  if (*unaff_x20 != '\x01') {
    pcVar2 = (char *)0xd00000000000002a;
    pcVar1 = "localNotificationKey";
  }
  SVar3.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
  SVar3.str = pcVar2;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  return;
}



/* Address: 0x100414010 | FUN_100414010 */

void FUN_100414010(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *pcVar4;
  char *unaff_x20;
  String SVar5;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar4 = (char *)0xd00000000000002e;
  pcVar1 = "es.apple.com/verifyReceipt";
  if (cVar2 != '\x01') {
    pcVar4 = (char *)0xd00000000000002a;
    pcVar1 = "localNotificationKey";
  }
  SVar5.bridgeObject = (void *)((ulong)pcVar1 | 0x8000000000000000);
  SVar5.str = pcVar4;
  Swift::String::hash((Hasher)auStack_68,SVar5);
  HVar3.unknown = (undefined *)((ulong)pcVar1 | 0x8000000000000000);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100414088 | FUN_100414088 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004140c8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100414088(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fc5798,&DAT_100c48d50);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100414100 | FUN_100414100 */

void FUN_100414100(undefined8 *param_1)

{
  char *pcVar1;
  undefined8 uVar2;
  char *unaff_x20;
  
  uVar2 = 0xd00000000000002e;
  pcVar1 = "es.apple.com/verifyReceipt";
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xd00000000000002a;
    pcVar1 = "localNotificationKey";
  }
  *param_1 = uVar2;
  param_1[1] = (ulong)pcVar1 | 0x8000000000000000;
  return;
}



/* Address: 0x100414140 | FUN_100414140 */

void FUN_100414140(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x100414184 | FUN_100414184 */

void FUN_100414184(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x100414194 | FUN_100414194 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100414194(Data param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  char *pcVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  URL UVar5;
  undefined1 *puVar6;
  URL self;
  NSURL *pNVar7;
  ID IVar8;
  NSString *pNVar9;
  NSDictionary *pNVar10;
  NSDictionary *self_00;
  NSString *pNVar11;
  Data DVar12;
  NSData *pNVar13;
  ID self_01;
  void *aBlock;
  undefined8 extraout_x1;
  undefined8 uVar14;
  long unaff_x20;
  undefined1 *puVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  undefined1 auStack_f0 [8];
  undefined *local_b8;
  undefined8 local_b0;
  code *local_a8;
  undefined *puStack_a0;
  code *local_98;
  undefined *local_90;
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar4 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  puVar15 = auStack_f0 + -(*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar17 = *(long *)(UVar5.unknown + -8);
  lVar16 = (long)puVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_80,0,0);
  pcVar1 = "es.apple.com/verifyReceipt";
  if (*(char *)(unaff_x20 + 0x10) != '\x01') {
    pcVar1 = "localNotificationKey";
  }
  Foundation::URL::_init();
  _swift_bridgeObjectRelease((ulong)pcVar1 | 0x8000000000000000);
  puVar6 = puVar15;
  (**(code **)(lVar17 + 0x30))(puVar15,1,UVar5.unknown);
  if ((int)puVar6 == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100414654);
    (*pcVar3)();
  }
  (**(code **)(lVar17 + 0x20))(lVar16,puVar15,UVar5.unknown);
  self.unknown = &_OBJC_CLASS___NSMutableURLRequest;
  _objc_allocWithZone();
  pNVar7 = Foundation::URL::_bridgeToObjectiveC(self);
  IVar8 = objc_stub::initWithURL_((ID)self.unknown,pNVar7);
  pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c0bf20(IVar8,pNVar9);
  SVar18 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,param_1);
  puVar4 = &DAT_100fc57a8;
  FUN_1000f7830(&DAT_100fc57a8,&DAT_100c48d60);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar4 + 0x20) = 0x2d74706965636572;
  *(undefined8 *)(puVar4 + 0x28) = 0xec00000061746164;
  *(undefined **)(puVar4 + 0x58) = puVar2;
  *(undefined **)(puVar4 + 0x38) = puVar2;
  *(String *)(puVar4 + 0x40) = SVar18;
  pNVar10 = (NSDictionary *)0x0;
  FUN_100414a90(0);
  self_00 = (extension_Foundation)::__C::NSDictionary::___allocating_init(pNVar10);
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setValue_forKey_((ID)self_00,pNVar9,pNVar11);
  }
  local_b8 = (undefined *)0x0;
  DVar12.unknown =
       (undefined *)
       objc_stub::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,self_00,0,&local_b8);
  if (DVar12.unknown == (undefined *)0x0) {
    puVar4 = local_b8;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRetain(puVar4);
    (*param_3)(puVar4,0,0x80);
    _swift_errorRelease(puVar4);
    _swift_errorRelease(puVar4);
  }
  else {
    uVar14 = extraout_x1;
    DVar12 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar12);
    pNVar13 = Foundation::Data::_bridgeToObjectiveC(DVar12);
    FUN_10003bf2c(DVar12.unknown,uVar14);
    objc_stub::FUN_100c0bf00(IVar8,pNVar13);
    self_01 = objc_stub::sharedSession((ID)&_OBJC_CLASS___NSURLSession);
    puVar4 = &DAT_100ed30e8;
    _swift_allocObject(&DAT_100ed30e8,0x38,7);
    *(code **)(puVar4 + 0x10) = param_3;
    *(undefined8 *)(puVar4 + 0x18) = param_4;
    *(long *)(puVar4 + 0x20) = unaff_x20;
    *(undefined **)(puVar4 + 0x28) = param_1.unknown;
    *(undefined8 *)(puVar4 + 0x30) = param_2;
    local_98 = FUN_100414b08;
    local_b8 = PTR___NSConcreteStackBlock_100ea82a0;
    local_b0 = 0x42000000;
    local_a8 = FUN_100117b7c;
    puStack_a0 = &DAT_100ed3100;
    local_90 = puVar4;
    aBlock = __Block_copy(&local_b8);
    puVar4 = local_90;
    _swift_retain(param_4);
    _swift_retain(unaff_x20);
    FUN_1001037b4(param_1.unknown,param_2);
    _swift_release(puVar4);
    IVar8 = objc_stub::dataTaskWithRequest_completionHandler_(self_01,IVar8,aBlock);
    __Block_release(aBlock);
    objc_stub::resume(IVar8);
  }
  (**(code **)(lVar17 + 8))(lVar16,UVar5.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100414658 | FUN_100414658 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100414658(Data param_1,ulong param_2,undefined8 param_3,long param_4,code *param_5,
                  undefined8 param_6,long param_7,undefined8 param_8,undefined8 param_9)

{
  uint uVar1;
  NSData *pNVar2;
  ID IVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  Encoding EVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined *local_98 [2];
  undefined *local_88 [4];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  Encoding::_typeMetadataAccessor();
  if (param_4 != 0) {
    _swift_errorRetain(param_4);
    (*param_5)(param_4,0,0x81);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
      _swift_errorRelease(param_4);
      return;
    }
    goto LAB_1004149ec;
  }
  if (param_2 >> 0x3c < 0xf) {
    FUN_1001037b4(param_1.unknown,param_2);
    pNVar2 = Foundation::Data::_bridgeToObjectiveC(param_1);
    local_88[0] = (undefined *)0x0;
    IVar3 = objc_stub::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar2,2,local_88);
    if (IVar3 == 0) {
      EVar6.unknown = local_88[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_errorRelease();
      Encoding::_get_utf8(EVar6);
      uVar8 = param_2;
      (extension_Foundation)::Swift::String::_init((Encoding)param_1.unknown);
      (*param_5)();
      _swift_bridgeObjectRelease(uVar8);
LAB_10041486c:
      FUN_10003bf18(param_1.unknown,param_2);
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar3);
      puVar4 = &DAT_100fc58e8;
      FUN_1000f7830(&DAT_100fc58e8,&DAT_100c49178);
      ppuVar5 = local_98;
      _swift_dynamicCast(ppuVar5,local_88,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
      if ((int)ppuVar5 == 0) {
        puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10042c8f4();
        if (*(long *)(puVar4 + 0x10) != 0) goto LAB_100414894;
LAB_100414968:
        uVar8 = 1;
LAB_100414970:
        uVar9 = 0x83;
      }
      else {
        puVar4 = local_98[0];
        if (*(long *)(local_98[0] + 0x10) == 0) goto LAB_100414968;
LAB_100414894:
        _swift_bridgeObjectRetain(puVar4);
        lVar7 = 0x737574617473;
        uVar8 = 0;
        FUN_100071370();
        if ((uVar8 & 1) == 0) {
          _swift_bridgeObjectRelease(puVar4);
          goto LAB_100414968;
        }
        puVar10 = *(undefined **)(*(long *)(puVar4 + 0x38) + lVar7 * 8);
        _swift_unknownObjectRetain(puVar10);
        _swift_bridgeObjectRelease(puVar4);
        ppuVar5 = local_98;
        local_88[0] = puVar10;
        _swift_dynamicCast(ppuVar5,local_88,PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8,
                           PTR___type_metadata_for_Swift_Int_100eac6f8,6);
        if (((ulong)ppuVar5 & 1) == 0) goto LAB_100414968;
        FUN_100424624();
        uVar1 = (uint)local_98[0] & 0xff;
        if (uVar1 != 2) {
          if (uVar1 == 0xb) {
            uVar8 = 0;
          }
          else {
            if (uVar1 == 9) {
              _swift_bridgeObjectRelease(puVar4);
              _swift_beginAccess(param_7 + 0x10,local_88,1,0);
              *(undefined1 *)(param_7 + 0x10) = 1;
              FUN_100414194(param_8,param_9,param_5,param_6);
              goto LAB_10041486c;
            }
            uVar8 = (ulong)local_98[0] & 0xff;
          }
          goto LAB_100414970;
        }
        uVar8 = 0;
        uVar9 = 0;
      }
      (*param_5)(puVar4,uVar8,uVar9);
      FUN_10003bf18(param_1.unknown,param_2);
      _swift_bridgeObjectRelease(puVar4);
    }
  }
  else {
    (*param_5)(1,0,0x84);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
LAB_1004149ec:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004149f0 | FUN_1004149f0 */

void FUN_1004149f0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100414a0c | FUN_100414a0c */

void FUN_100414a0c(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100414a30 | FUN_100414a30 */

void FUN_100414a30(void)

{
  FUN_100414194();
  return;
}



/* Address: 0x100414a50 | thunk_FUN_100414a54 */

void thunk_FUN_100414a54(undefined8 param_1)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100414a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x100414a54 | FUN_100414a54 */

void FUN_100414a54(undefined8 param_1)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100414a8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,1,1,DVar1.unknown);
  return;
}



/* Address: 0x100414a90 | FUN_100414a90 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100414a90(void)

{
  undefined *puVar1;
  
  if (DAT_100fc57b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSMutableDictionary;
  _swift_getObjCClassMetadata();
  DAT_100fc57b0 = puVar1;
  return;
}



/* Address: 0x100414ad4 | FUN_100414ad4 */

void FUN_100414ad4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100414b08 | FUN_100414b08 */

void FUN_100414b08(void)

{
  FUN_100414658();
  return;
}



/* Address: 0x100414b34 | FUN_100414b34 */

void FUN_100414b34(long param_1,long param_2)

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



/* Address: 0x100414b48 | FUN_100414b48 */

void FUN_100414b48(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100414b50 | thunk_FUN_100414b54 */

void thunk_FUN_100414b54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc57b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48d68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48d68,&DAT_100ed31b8);
  DAT_100fc57b8 = pTVar1;
  return;
}



/* Address: 0x100414b54 | FUN_100414b54 */

void FUN_100414b54(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc57b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c48d68;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c48d68,&DAT_100ed31b8);
  DAT_100fc57b8 = pTVar1;
  return;
}



/* Address: 0x100414b94 | FUN_100414b94 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100414b94(void)

{
  return ZEXT816(0x100fc5800);
}



/* Address: 0x100414bb4 | FUN_100414bb4 */

void FUN_100414bb4(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}


