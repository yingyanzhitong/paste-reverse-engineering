/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b6ede8 | FUN_100b6ede8 */

void FUN_100b6ede8(void)

{
  FUN_100b6edfc();
  return;
}



/* Address: 0x100b6edfc | FUN_100b6edfc */

void FUN_100b6edfc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  code *pcVar2;
  char in_NG;
  char in_OV;
  undefined8 extraout_x8;
  long unaff_x19;
  uint unaff_w21;
  undefined8 unaff_x22;
  undefined *unaff_x23;
  
  FUN_100b6fc34();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6ee8c);
      (*pcVar2)();
    }
    FUN_100b69e18();
  }
  FUN_100b6fc24();
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (unaff_x23 != (undefined *)0x0) {
    FUN_100b6fa60();
    FUN_100b69f18((long)unaff_x23 << 4);
    FUN_100b6fcdc();
    FUN_100b69f58();
    *(undefined8 *)(unaff_x23 + 0x10) = unaff_x22;
    *(undefined8 *)(unaff_x23 + 0x18) = extraout_x8;
    puVar1 = unaff_x23;
  }
  if ((unaff_w21 & 1) == 0) {
    FUN_100b6fcc4();
  }
  else {
    FUN_100b6f888();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar1);
  return;
}



/* Address: 0x100b6ee8c | FUN_100b6ee8c */

void FUN_100b6ee8c(void)

{
  FUN_100b6eea8();
  return;
}



/* Address: 0x100b6eea8 | FUN_100b6eea8 */

void FUN_100b6eea8(undefined *param_1,long param_2,uint param_3)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  uint unaff_w22;
  long lVar3;
  
  FUN_100b6fe04();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6ef4c);
      (*pcVar1)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (param_2 <= lVar3) {
    param_2 = lVar3;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_100b6fa60();
    FUN_100b69f18(param_2 << 5);
    puVar2 = param_1;
    _malloc_size();
    *(long *)(param_1 + 0x10) = lVar3;
    *(long *)(param_1 + 0x18) = (long)(puVar2 + -0x20) / 0x20 << 1;
    puVar2 = param_1;
  }
  if ((unaff_w22 & 1) == 0) {
    FUN_100b6fa80();
  }
  else {
    FUN_100b6fb68();
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar2);
  return;
}



/* Address: 0x100b6ef4c | FUN_100b6ef4c */

void FUN_100b6ef4c(ulong param_1,ulong param_2,ulong param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6f004);
        (*pcVar1)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  lVar5 = *(long *)(param_4 + 0x10);
  lVar2 = lVar5;
  FUN_100b6ddd0(lVar5,uVar4,&DAT_101044a48);
  if ((param_1 & 1) == 0) {
    puVar3 = &DAT_101044a40;
    FUN_100b6730c(&DAT_101044a40);
    _swift_arrayInitWithCopy(lVar2 + 0x20,param_4 + 0x20,lVar5,puVar3);
  }
  else {
    FUN_100b69414(param_4 + 0x20,lVar5,lVar2 + 0x20);
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b56e60(lVar2);
  return;
}



/* Address: 0x100b6f004 | FUN_100b6f004 */

void FUN_100b6f004(undefined8 param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  undefined *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  FUN_100b6fdf8();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6f0bc);
      (*pcVar1)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  if (param_2 <= lVar3) {
    param_2 = lVar3;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_101044a00;
    FUN_100b6730c(&DAT_101044a00);
    FUN_100b6f90c();
    _malloc_size();
    FUN_100b6fdb0();
  }
  if ((unaff_w20 & 1) == 0) {
    FUN_100b6fb3c();
  }
  else {
    FUN_100b69520(unaff_x19 + 0x20,lVar3,puVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b5e408(puVar2);
  return;
}



/* Address: 0x100b6f0bc | FUN_100b6f0bc */

void FUN_100b6f0bc(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  char in_NG;
  char in_OV;
  long lVar2;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long unaff_x19;
  uint unaff_w20;
  long lVar3;
  
  FUN_100b6fdf8();
  if (((param_3 & 1) != 0) && (FUN_100b69e28(), param_2 = extraout_x8, in_NG != in_OV)) {
    FUN_100b69f24();
    if ((bool)in_NG) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6f14c);
      (*pcVar1)();
    }
    FUN_100b69e18();
    param_2 = extraout_x8_00;
  }
  lVar3 = *(long *)(unaff_x19 + 0x10);
  lVar2 = lVar3;
  FUN_100b6de78(lVar3,param_2,&DAT_1010449f0);
  if ((unaff_w20 & 1) == 0) {
    _memcpy((void *)(lVar2 + 0x20),(void *)(unaff_x19 + 0x20),lVar3 << 3);
  }
  else {
    thunk_FUN_100b693f4(unaff_x19 + 0x20,lVar3,lVar2 + 0x20);
    *(undefined8 *)(unaff_x19 + 0x10) = 0;
  }
  FUN_100b6f838();
  FUN_100b56e60(lVar2);
  return;
}



/* Address: 0x100b6f14c | FUN_100b6f14c */

void FUN_100b6f14c(void)

{
  FUN_100b6e9c4();
  return;
}



/* Address: 0x100b6f168 | FUN_100b6f168 */

void FUN_100b6f168(void)

{
  FUN_100b6f184();
  return;
}



/* Address: 0x100b6f184 | FUN_100b6f184 */

void FUN_100b6f184(long param_1)

{
  code *pcVar1;
  ulong unaff_x19;
  long unaff_x20;
  uint unaff_w23;
  long unaff_x25;
  long lVar2;
  uint unaff_w26;
  
  FUN_100b6fe5c();
  FUN_100b6f93c();
  if ((((unaff_w26 & 1) != 0) && (param_1 < unaff_x25)) && (param_1 + 0x4000000000000000 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6f22c);
    (*pcVar1)();
  }
  if (unaff_x19 >> 0x3e == 0) {
    lVar2 = *(long *)((unaff_x19 & 0xffffffffffffff8) + 0x10);
  }
  else {
    FUN_100b6f8d0();
    lVar2 = param_1;
  }
  FUN_100b6fae4();
  FUN_100b6dec0();
  if ((unaff_w23 & 1) == 0) {
    if (lVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100b6f228);
      (*pcVar1)();
    }
    FUN_100b6fc64();
    FUN_100b6f254();
  }
  else {
    FUN_100b6fac4();
    *(undefined8 *)(unaff_x20 + 0x10) = 0;
    FUN_100b6f838();
  }
  FUN_100b69e70(param_1);
  return;
}



/* Address: 0x100b6f22c | FUN_100b6f22c */

ulong FUN_100b6f22c(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  ulong uVar2;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    return *(ulong *)(((ulong)param_1 & 0xffffffffffffff8) + 0x18) >> 1;
  }
  _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((long)param_1 < 0) {
    _Var1.unknown = param_1;
  }
  uVar2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  return uVar2;
}



/* Address: 0x100b6f254 | FUN_100b6f254 */

void FUN_100b6f254(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long lVar3;
  long unaff_x19;
  _ArrayBuffer unaff_x20;
  code *unaff_x21;
  long unaff_x22;
  long unaff_x23;
  
  FUN_100b6fe5c();
  FUN_100b6fb88();
  if (!(bool)in_ZR) {
    if (unaff_x23 < unaff_x22) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f2f8);
      (*pcVar2)();
    }
    if (unaff_x22 != unaff_x23) {
      if (unaff_x23 <= unaff_x22) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f2fc);
        (*pcVar2)();
      }
      (*unaff_x21)(0);
      lVar3 = unaff_x22;
      do {
        lVar1 = lVar3 + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath(lVar3,unaff_x20);
        lVar3 = lVar1;
      } while (unaff_x23 != lVar1);
    }
  }
  if ((ulong)unaff_x20.unknown >> 0x3e == 0) {
    if (!SBORROW8(unaff_x23,unaff_x22)) {
      (*unaff_x21)((ulong)unaff_x20.unknown & 0xffffffffffffff8,0);
      FUN_100b6fa94();
      FUN_100b6f860();
      FUN_100b69e70(unaff_x19 + (unaff_x23 - unaff_x22) * 8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f2f4);
    (*pcVar2)();
  }
  FUN_100b6fb4c();
  FUN_100b6f818();
  return;
}



/* Address: 0x100b6f2fc | FUN_100b6f2fc */

void FUN_100b6f2fc(long param_1,long param_2,long param_3,_ArrayBuffer param_4)

{
  _ArrayBuffer _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  FUN_100b6fe5c();
  lVar4 = param_1;
  if (((ulong)param_4.unknown & 0xc000000000000001) != 0) {
    if (param_2 < param_1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f3d4);
      (*pcVar2)();
    }
    if (param_1 != param_2) {
      if (param_2 <= param_1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f3d8);
        (*pcVar2)();
      }
      FUN_100b6f898();
      lVar3 = param_1;
      do {
        lVar4 = lVar3 + 1;
        Swift::_ArrayBuffer::_typeCheckSlowPath(lVar3,param_4);
        lVar3 = lVar4;
      } while (param_2 != lVar4);
    }
  }
  if ((ulong)param_4.unknown >> 0x3e == 0) {
    if (!SBORROW8(param_2,param_1)) {
      FUN_100b6f898();
      _swift_arrayInitWithCopy
                (param_3,((ulong)param_4.unknown & 0xffffffffffffff8) + param_1 * 8 + 0x20,
                 param_2 - param_1,lVar4);
      FUN_100b6f860();
      FUN_100b69e70(param_3 + (param_2 - param_1) * 8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f3d0);
    (*pcVar2)();
  }
  _Var1.unknown = param_4.unknown & 0xffffffffffffff8;
  if ((long)param_4.unknown < 0) {
    _Var1.unknown = param_4.unknown;
  }
  FUN_100b6f818(param_1,param_2,param_3,_Var1.unknown);
  return;
}



/* Address: 0x100b6f3d8 | FUN_100b6f3d8 */

void FUN_100b6f3d8(void)

{
  long lVar1;
  code *pcVar2;
  undefined1 in_ZR;
  long unaff_x19;
  _ArrayBuffer unaff_x20;
  long unaff_x22;
  long unaff_x23;
  long lVar3;
  
  FUN_100b6fe5c();
  FUN_100b6fb88();
  if (!(bool)in_ZR) {
    if (unaff_x23 < unaff_x22) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f47c);
      (*pcVar2)();
    }
    if (unaff_x22 != unaff_x23) {
      lVar3 = unaff_x22;
      if (unaff_x23 <= unaff_x22) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f480);
        (*pcVar2)();
      }
      do {
        lVar1 = lVar3 + 1;
        FUN_100b6730c();
        Swift::_ArrayBuffer::_typeCheckSlowPath(lVar3,unaff_x20);
        lVar3 = lVar1;
      } while (unaff_x23 != lVar1);
    }
  }
  if ((ulong)unaff_x20.unknown >> 0x3e != 0) {
    FUN_100b6fb4c();
    FUN_100b6f818();
    return;
  }
  if (SBORROW8(unaff_x23,unaff_x22)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100b6f478);
    (*pcVar2)();
  }
  FUN_100b6730c((ulong)unaff_x20.unknown & 0xffffffffffffff8);
  FUN_100b6fa94();
  FUN_100b6f860();
  FUN_100b69e70(unaff_x19 + (unaff_x23 - unaff_x22) * 8);
  return;
}



/* Address: 0x100b6f480 | FUN_100b6f480 */

void FUN_100b6f480(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  FUN_100b6df24();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  return;
}



/* Address: 0x100b6f4b4 | FUN_100b6f4b4 */

void FUN_100b6f4b4(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = *param_4;
  uVar2 = param_4[1];
  FUN_100b6e5c8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    param_1[1] = param_3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
  }
  return;
}



/* Address: 0x100b6f4f0 | FUN_100b6f4f0 */

void FUN_100b6f4f0(void)

{
  Iterator IVar1;
  ulong unaff_x19;
  
  FUN_100b6fe5c();
  FUN_100b6fe18();
  IVar1 = Foundation::Data::Iterator::typeMetadataAccessor();
  FUN_100b6f9e0(*(undefined8 *)(*(long *)(IVar1.unknown + -8) + 0x40));
                    /* WARNING: Could not recover jumptable at 0x000100b6f540. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)*(int *)(&DAT_100b6f5ec + (unaff_x19 >> 0x3e) * 4) + 0x100b6f534))();
  return;
}



/* Address: 0x100b6f5fc | FUN_100b6f5fc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b6f5fc(void)

{
  return ZEXT816(0x100f9f550);
}



/* Address: 0x100b6f61c | FUN_100b6f61c */

undefined8 FUN_100b6f61c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100be55f4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100b6f660 | FUN_100b6f660 */

undefined8 FUN_100b6f660(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100be55f4();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100b6f69c | FUN_100b6f69c */

void FUN_100b6f69c(undefined8 param_1,long param_2)

{
  FUN_100b6730c();
  (**(code **)(*(long *)(param_2 + -8) + 8))(param_1,param_2);
  FUN_100b56e88(param_1);
  return;
}



/* Address: 0x100b6f6d4 | FUN_100b6f6d4 */

void FUN_100b6f6d4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b6f480(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b6f6ec | FUN_100b6f6ec */

void FUN_100b6f6ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_100b6f4b4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),param_3);
  return;
}



/* Address: 0x100b6f708 | thunk_FUN_100b6cd50 */

__int64 thunk_FUN_100b6cd50(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  __int64 _Var2;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    return *(__int64 *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((long)param_1 < 0) {
    _Var1.unknown = param_1;
  }
  _Var2 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  return _Var2;
}



/* Address: 0x100b6f70c | FUN_100b6f70c */

undefined1  [16] FUN_100b6f70c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb0000000020646e;
  auVar1._0_8_ = 0x756f662074756220;
  return auVar1;
}



/* Address: 0x100b6f72c | FUN_100b6f72c */

undefined8 FUN_100b6f72c(void)

{
  return 4;
}



/* Address: 0x100b6f744 | FUN_100b6f744 */

void FUN_100b6f744(StaticString param_1,undefined8 param_2,undefined8 param_3,__uint32 param_4)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0x2;
  SVar1.str = (char *)0xb;
  Swift::_assertionFailure(param_1,SVar1,param_4);
  return;
}



/* Address: 0x100b6f754 | FUN_100b6f754 */

void FUN_100b6f754(__int64 param_1,undefined *param_2)

{
  _CocoaArrayWrapper _Var1;
  
  _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
  if ((long)param_2 < 0) {
    _Var1.unknown = param_2;
  }
  Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var1);
  return;
}



/* Address: 0x100b6f764 | FUN_100b6f764 */

void FUN_100b6f764(long param_1)

{
  long unaff_x20;
  long unaff_x29;
  
  FUN_10000cbfc(*(long *)(unaff_x20 + 0x38) + param_1 * 0x20,unaff_x29 + -0xd0);
  return;
}



/* Address: 0x100b6f774 | FUN_100b6f774 */

void FUN_100b6f774(undefined8 param_1,_StringGuts param_2)

{
  undefined8 uStack0000000000000008;
  undefined8 uStack0000000000000010;
  
  uStack0000000000000008 = 0;
  uStack0000000000000010 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x52,param_2);
  return;
}



/* Address: 0x100b6f788 | FUN_100b6f788 */

void FUN_100b6f788(undefined8 param_1,_StringGuts param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x55,param_2);
  return;
}



/* Address: 0x100b6f79c | FUN_100b6f79c */

void FUN_100b6f79c(undefined8 param_1,_StringGuts param_2)

{
  undefined8 uStack0000000000000000;
  undefined8 uStack0000000000000008;
  
  uStack0000000000000000 = 0;
  uStack0000000000000008 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x52,param_2);
  return;
}



/* Address: 0x100b6f7b0 | FUN_100b6f7b0 */

void FUN_100b6f7b0(long param_1,long param_2)

{
  long unaff_x29;
  
  FUN_10000cbfc(param_1 + param_2 * 0x20,unaff_x29 + -0xd0);
  return;
}



/* Address: 0x100b6f7bc | FUN_100b6f7bc */

String FUN_100b6f7bc(void)

{
  bool unaff_w20;
  String SVar1;
  
  SVar1 = Swift::__typeName(unaff_w20);
  return SVar1;
}



/* Address: 0x100b6f7c8 | FUN_100b6f7c8 */

void FUN_100b6f7c8(void)

{
  _swift_unknownObjectRelease();
  return;
}



/* Address: 0x100b6f7d4 | FUN_100b6f7d4 */

undefined8 FUN_100b6f7d4(void)

{
  return 4;
}



/* Address: 0x100b6f7ec | FUN_100b6f7ec */

void FUN_100b6f7ec(void)

{
  return;
}



/* Address: 0x100b6f7fc | FUN_100b6f7fc */

void FUN_100b6f7fc(void)

{
  return;
}



/* Address: 0x100b6f80c | FUN_100b6f80c */

void FUN_100b6f80c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  _swift_dynamicCast(param_2,param_3,param_1 + 8,param_5,6);
  return;
}



/* Address: 0x100b6f818 | FUN_100b6f818 */

void FUN_100b6f818(Range<__int64> param_1,
                  UnsafeMutablePointer<Swift__CocoaArrayWrapper__copyContents(subRange:_Swift_Range<Swift_Int>,initializing:_Swift_UnsafeMutablePointer<Swift_AnyObject>)__>_Swift_UnsafeMutablePointer<Swift_AnyObject>>
                  param_2,_CocoaArrayWrapper param_3)

{
  Swift::_CocoaArrayWrapper::__copyContents(param_1,param_2,param_3);
  return;
}



/* Address: 0x100b6f82c | FUN_100b6f82c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6f82c(void)

{
  return 0;
}



/* Address: 0x100b6f838 | FUN_100b6f838 */

void FUN_100b6f838(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6f840 | FUN_100b6f840 */

void FUN_100b6f840(void)

{
  return;
}



/* Address: 0x100b6f850 | FUN_100b6f850 */

long FUN_100b6f850(void)

{
  long unaff_x29;
  
  return unaff_x29 + -0x128;
}



/* Address: 0x100b6f860 | FUN_100b6f860 */

void FUN_100b6f860(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6f868 | FUN_100b6f868 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6f868(void)

{
  return 0;
}



/* Address: 0x100b6f870 | FUN_100b6f870 */

void FUN_100b6f870(void)

{
  FUN_100b84dac(0);
  return;
}



/* Address: 0x100b6f878 | FUN_100b6f878 */

void FUN_100b6f878(void)

{
  _swift_dynamicCast();
  return;
}



/* Address: 0x100b6f880 | FUN_100b6f880 */

void FUN_100b6f880(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6f888 | FUN_100b6f888 */

void FUN_100b6f888(void)

{
  long unaff_x19;
  code *UNRECOVERED_JUMPTABLE;
  
                    /* WARNING: Could not recover jumptable at 0x000100b6f894. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(unaff_x19 + 0x20);
  return;
}



/* Address: 0x100b6f898 | FUN_100b6f898 */

void FUN_100b6f898(void)

{
  FUN_100b673ec(0);
  return;
}



/* Address: 0x100b6f8a8 | FUN_100b6f8a8 */

void FUN_100b6f8a8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uStack0000000000000000;
  
  uStack0000000000000000 = param_1;
  _swift_dynamicCastObjCProtocolConditional(param_2,1);
  return;
}



/* Address: 0x100b6f8b8 | FUN_100b6f8b8 */

void FUN_100b6f8b8(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100b6f8c4 | FUN_100b6f8c4 */

void FUN_100b6f8c4(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6f8d0 | FUN_100b6f8d0 */

void FUN_100b6f8d0(void)

{
  _CocoaArrayWrapper _Var1;
  undefined *unaff_x19;
  
  _Var1.unknown = (undefined *)((ulong)unaff_x19 & 0xffffffffffffff8);
  if ((long)unaff_x19 < 0) {
    _Var1.unknown = unaff_x19;
  }
  Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  return;
}



/* Address: 0x100b6f8e0 | FUN_100b6f8e0 */

void FUN_100b6f8e0(void)

{
  long unaff_x29;
  
  *(undefined8 *)(unaff_x29 + -200) = 0;
  *(undefined8 *)(unaff_x29 + -0xd0) = 0;
  *(undefined8 *)(unaff_x29 + -0xb8) = 0;
  *(undefined8 *)(unaff_x29 + -0xc0) = 0;
  return;
}



/* Address: 0x100b6f8ec | FUN_100b6f8ec */

void FUN_100b6f8ec(void)

{
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x100b6f8f4 | FUN_100b6f8f4 */

undefined1  [16] FUN_100b6f8f4(void)

{
  long unaff_x29;
  undefined1 auVar1 [16];
  
  auVar1._0_8_ = *(undefined8 *)(unaff_x29 + -0x160);
  auVar1._8_8_ = *(undefined8 *)(unaff_x29 + -0x168);
  return auVar1;
}



/* Address: 0x100b6f90c | FUN_100b6f90c */

void FUN_100b6f90c(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject(param_1,param_2,7);
  return;
}



/* Address: 0x100b6f914 | FUN_100b6f914 */

void FUN_100b6f914(char *param_1,void *param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  return;
}



/* Address: 0x100b6f91c | FUN_100b6f91c */

void FUN_100b6f91c(void)

{
  return;
}



/* Address: 0x100b6f934 | FUN_100b6f934 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b6f934(void)

{
  return 0;
}



/* Address: 0x100b6f93c | FUN_100b6f93c */

void FUN_100b6f93c(void)

{
  undefined8 in_x3;
  
  FUN_100b6f22c(in_x3);
  return;
}



/* Address: 0x100b6f960 | FUN_100b6f960 */

void FUN_100b6f960(void)

{
  _swift_getObjectType();
  return;
}


