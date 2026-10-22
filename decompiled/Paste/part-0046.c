/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100089840 | FUN_100089840 */

void FUN_100089840(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000898ec);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000898f0);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000898f4);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_100088754();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100089770(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1000898fc);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000898f8);
  (*pcVar2)();
}



/* Address: 0x1000898fc | FUN_1000898fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000898fc(long param_1,long param_2,long param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  _CocoaArrayWrapper _Var4;
  long lVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined *puVar10;
  undefined *puVar11;
  
  lVar9 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000899f4);
    (*pcVar6)();
  }
  puVar11 = (undefined *)*unaff_x20;
  puVar10 = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
  puVar1 = (undefined8 *)(puVar10 + param_1 * 8 + 0x20);
  uVar7 = 0;
  FUN_1003214a8(0);
  _swift_arrayDestroy(puVar1,lVar9,uVar7);
  lVar5 = param_3 - lVar9;
  if (SBORROW8(param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1000899f8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if ((ulong)puVar11 >> 0x3e == 0) {
      lVar8 = *(long *)(puVar10 + 0x10);
      lVar9 = lVar8 - param_2;
    }
    else {
      _Var4.unknown = puVar10;
      if (((ulong)puVar11 & 0x8000000000000000) != 0) {
        _Var4.unknown = puVar11;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
      lVar9 = lVar8 - param_2;
    }
    if (SBORROW8(lVar8,param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100089a10);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3;
    puVar3 = (undefined8 *)(puVar10 + param_2 * 8 + 0x20);
    if (puVar2 != puVar3 || puVar3 + lVar9 <= puVar2) {
      _memmove(puVar2,puVar3,lVar9 << 3);
    }
    if ((ulong)puVar11 >> 0x3e == 0) {
      lVar9 = *(long *)(puVar10 + 0x10);
    }
    else {
      _Var4.unknown = puVar10;
      if (((ulong)puVar11 & 0x8000000000000000) != 0) {
        _Var4.unknown = puVar11;
      }
      lVar9 = Swift::_CocoaArrayWrapper::get_endIndex(_Var4);
    }
    if (SCARRY8(lVar9,lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100089a14);
      (*pcVar6)();
    }
    *(long *)(puVar10 + 0x10) = lVar9 + lVar5;
  }
  if ((0 < param_3) && (*puVar1 = param_4, param_3 != 1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100089a18);
    (*pcVar6)();
  }
  return;
}



/* Address: 0x100089a18 | FUN_100089a18 */

void FUN_100089a18(long param_1,long param_2,undefined8 param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089acc);
    (*pcVar2)();
  }
  puVar5 = (undefined *)*unaff_x20;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar3 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089ae4);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089ae8);
    (*pcVar2)();
  }
  lVar3 = 1 - (param_2 - param_1);
  if (SBORROW8(1,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089aec);
    (*pcVar2)();
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089af0);
    (*pcVar2)();
  }
  thunk_FUN_10008c054(lVar4 + lVar3,1);
  FUN_1000898fc(param_1,param_2,1,param_3);
  return;
}



/* Address: 0x100089af0 | FUN_100089af0 */

void FUN_100089af0(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  _CocoaArrayWrapper _Var3;
  long lVar4;
  code *pcVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x20;
  undefined *puVar9;
  undefined *puVar10;
  
  lVar8 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100089bc8);
    (*pcVar5)();
  }
  puVar10 = (undefined *)*unaff_x20;
  puVar9 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
  uVar6 = 0;
  FUN_1003214a8(0);
  _swift_arrayDestroy(puVar9 + param_1 * 8 + 0x20,lVar8,uVar6);
  lVar4 = param_3 - lVar8;
  if (SBORROW8(param_3,lVar8)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100089bcc);
    (*pcVar5)();
  }
  if (lVar4 != 0) {
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar7 = *(long *)(puVar9 + 0x10);
      lVar8 = lVar7 - param_2;
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
      lVar8 = lVar7 - param_2;
    }
    if (SBORROW8(lVar7,param_2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100089be4);
      (*pcVar5)();
    }
    puVar1 = puVar9 + param_1 * 8 + 0x20 + param_3 * 8;
    puVar2 = puVar9 + param_2 * 8 + 0x20;
    if (puVar1 != puVar2 || puVar2 + lVar8 * 8 <= puVar1) {
      _memmove(puVar1,puVar2,lVar8 << 3);
    }
    if ((ulong)puVar10 >> 0x3e == 0) {
      lVar8 = *(long *)(puVar9 + 0x10);
    }
    else {
      _Var3.unknown = puVar9;
      if (((ulong)puVar10 & 0x8000000000000000) != 0) {
        _Var3.unknown = puVar10;
      }
      lVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var3);
    }
    if (SCARRY8(lVar8,lVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100089be8);
      (*pcVar5)();
    }
    *(long *)(puVar9 + 0x10) = lVar8 + lVar4;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100089bec);
    (*pcVar5)();
  }
  return;
}



/* Address: 0x100089bec | FUN_100089bec */

void FUN_100089bec(long param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089c8c);
    (*pcVar2)();
  }
  puVar5 = (undefined *)*unaff_x20;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar3 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089ca4);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089ca8);
    (*pcVar2)();
  }
  lVar3 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089cac);
    (*pcVar2)();
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100089cb0);
    (*pcVar2)();
  }
  thunk_FUN_10008c054(lVar4 + lVar3,1);
  FUN_100089af0(param_1,param_2,0);
  return;
}



/* Address: 0x100089cb0 | thunk_FUN_1000884a8 */

void thunk_FUN_1000884a8(void)

{
  FUN_1000884a8();
  return;
}



/* Address: 0x100089cb4 | FUN_100089cb4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100089cb4(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_90 [3];
  undefined8 local_78;
  undefined **ppuStack_70;
  undefined *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10007176c(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100089e8c);
      (*pcVar2)();
    }
    puVar7 = local_68;
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      puVar9 = (ulong *)(param_1.unknown + 0x20);
      do {
        uVar5 = *puVar9;
        uVar8 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
          FUN_10007176c(1 < *(ulong *)(puVar7 + 0x18),uVar8 + 1,1);
        }
        puVar7 = local_68;
        uVar4 = 0;
        FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
        ppuStack_70 = &PTR_PTR_100ec00a8;
        *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
        local_90[0] = uVar5;
        local_78 = uVar4;
        FUN_100076508(local_90,puVar7 + uVar8 * 0x28 + 0x20);
        uVar6 = uVar6 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
        uVar5 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar5) {
          FUN_10007176c(1 < *(ulong *)(puVar7 + 0x18),uVar5 + 1,1);
        }
        puVar7 = local_68;
        uVar8 = uVar8 + 1;
        uVar4 = 0;
        FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
        ppuStack_70 = &PTR_PTR_100ec00a8;
        *(ulong *)(puVar7 + 0x10) = uVar5 + 1;
        local_90[0] = uVar3;
        local_78 = uVar4;
        FUN_100076508(local_90,puVar7 + uVar5 * 0x28 + 0x20);
      } while (uVar6 != uVar8);
    }
  }
  return puVar7;
}



/* Address: 0x100089e8c | FUN_100089e8c */

undefined * FUN_100089e8c(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *local_128 [3];
  undefined *local_110;
  undefined **ppuStack_108;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined *local_78;
  
  lVar3 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar3 != 0) {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000717fc(0,lVar3,0);
    puVar5 = (undefined8 *)(param_1 + 0x20);
    puVar4 = local_78;
    do {
      uStack_a8 = puVar5[5];
      local_b0 = puVar5[4];
      uStack_98 = puVar5[7];
      local_a0 = puVar5[6];
      uStack_88 = puVar5[9];
      uStack_90 = puVar5[8];
      local_80 = puVar5[10];
      uStack_c8 = puVar5[1];
      local_d0 = *puVar5;
      uStack_b8 = puVar5[3];
      local_c0 = puVar5[2];
      FUN_100054220(&local_d0,local_128);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_78 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1000717fc(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_78;
      local_110 = &DAT_100ed0bd0;
      ppuStack_108 = &PTR_PTR_100ed0af8;
      puVar2 = &DAT_100eb3560;
      _swift_allocObject(&DAT_100eb3560,0x68,7);
      *(undefined8 *)(puVar2 + 0x38) = uStack_a8;
      *(undefined8 *)(puVar2 + 0x30) = local_b0;
      *(undefined8 *)(puVar2 + 0x48) = uStack_98;
      *(undefined8 *)(puVar2 + 0x40) = local_a0;
      *(undefined8 *)(puVar2 + 0x58) = uStack_88;
      *(undefined8 *)(puVar2 + 0x50) = uStack_90;
      *(undefined8 *)(puVar2 + 0x60) = local_80;
      *(undefined8 *)(puVar2 + 0x18) = uStack_c8;
      *(undefined8 *)(puVar2 + 0x10) = local_d0;
      *(undefined8 *)(puVar2 + 0x28) = uStack_b8;
      *(undefined8 *)(puVar2 + 0x20) = local_c0;
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      local_128[0] = puVar2;
      FUN_100076508(local_128,puVar4 + uVar1 * 0x28 + 0x20);
      puVar5 = puVar5 + 0xb;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return puVar4;
}



/* Address: 0x100089fe0 | FUN_100089fe0 */

undefined * FUN_100089fe0(long param_1)

{
  ulong uVar1;
  long lVar2;
  undefined1 *puVar3;
  long extraout_x8;
  undefined *puVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_90 [24];
  long local_78;
  undefined **ppuStack_70;
  undefined *local_68;
  
  lVar2 = 0;
  FUN_1003efa8c();
  lVar7 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  puVar5 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar6 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000717fc(0,lVar6,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar7 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar7 + 0x50) ^ 0xffffffffffffffff));
    lVar7 = *(long *)(lVar7 + 0x48);
    puVar4 = local_68;
    do {
      FUN_10008c240(param_1,puVar5);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1000717fc(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      ppuStack_70 = &PTR_PTR_100ed0b20;
      puVar3 = auStack_90;
      local_78 = lVar2;
      FUN_10000cbb0(puVar3);
      FUN_10008c240(puVar5,puVar3);
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      FUN_100076508(auStack_90,puVar4 + uVar1 * 0x28 + 0x20);
      FUN_10008c284(puVar5);
      param_1 = param_1 + lVar7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar4;
}



/* Address: 0x10008a130 | FUN_10008a130 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10008a130(_ArrayBuffer param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong local_98;
  undefined1 auStack_90 [40];
  undefined *local_68;
  
  if ((ulong)param_1.unknown >> 0x3e == 0) {
    uVar6 = *(ulong *)(((ulong)param_1.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = param_1.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < param_1.unknown) {
      _Var1.unknown = param_1.unknown;
    }
    uVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100071870(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    puVar7 = local_68;
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10008a330);
      (*pcVar2)();
    }
    if (((ulong)param_1.unknown & 0xc000000000000001) == 0) {
      uVar4 = 0;
      FUN_1003f9ac8(0);
      puVar9 = (ulong *)(param_1.unknown + 0x20);
      do {
        local_98 = *puVar9;
        puVar5 = &DAT_100fa9868;
        FUN_1000037f0(&DAT_100fa9868,&DAT_100c26e40);
        _swift_dynamicCast(auStack_90,&local_98,uVar4,puVar5,7);
        uVar8 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar8) {
          FUN_100071870(1 < *(ulong *)(puVar7 + 0x18),uVar8 + 1,1);
        }
        puVar7 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar8 + 1;
        FUN_100076508(auStack_90,local_68 + uVar8 * 0x28 + 0x20);
        uVar6 = uVar6 - 1;
        puVar9 = puVar9 + 1;
      } while (uVar6 != 0);
    }
    else {
      uVar8 = 0;
      do {
        uVar3 = uVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar8,param_1);
        uVar4 = 0;
        local_98 = uVar3;
        FUN_1003f9ac8(0);
        puVar5 = &DAT_100fa9868;
        FUN_1000037f0(&DAT_100fa9868,&DAT_100c26e40);
        _swift_dynamicCast(auStack_90,&local_98,uVar4,puVar5,7);
        uVar3 = *(ulong *)(puVar7 + 0x10);
        local_68 = puVar7;
        if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar3) {
          FUN_100071870(1 < *(ulong *)(puVar7 + 0x18),uVar3 + 1,1);
        }
        puVar7 = local_68;
        uVar8 = uVar8 + 1;
        *(ulong *)(local_68 + 0x10) = uVar3 + 1;
        FUN_100076508(auStack_90,local_68 + uVar3 * 0x28 + 0x20);
      } while (uVar6 != uVar8);
    }
  }
  return puVar7;
}



/* Address: 0x10008a330 | FUN_10008a330 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10008a330(void)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  String SVar9;
  String SVar10;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = _TtC5Paste14CreateItemView::___lazy_storage___cancelButton;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3.unknown = &stack0xffffffffffffffb0 + lVar1;
  lVar4 = *(long *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___cancelButton);
  if (lVar4 == 0) {
    FUN_1001c0788(LVar3.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
    pcVar5 = SVar9.str;
    FUN_1001e95f0();
    uVar8 = *(undefined8 *)pcVar5;
    FUN_1001be988(LVar3.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
    puVar6 = &DAT_100eb3538;
    _swift_allocObject(&DAT_100eb3538,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar1) = FUN_10008c13c;
    *(undefined **)((long)auStack_60 + lVar1 + 8) = puVar6;
    auStack_68[lVar1] = 0;
    *(void **)((long)&uStack_70 + lVar1) = SVar10.bridgeObject;
    lVar4 = 0;
    FUN_10023e034(uVar7,0,0,SVar9.str,SVar9.bridgeObject,uVar8,0,0,SVar10.str);
    *(long *)(unaff_x20 + lVar2) = lVar4;
  }
  return lVar4;
}



/* Address: 0x10008a488 | FUN_10008a488 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008a488(long param_1)

{
  undefined8 uVar1;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    uVar1 = *(undefined8 *)(param_1 + _TtC5Paste14CreateItemView::viewModel);
    _swift_retain(uVar1);
    FUN_1003b7ff0(0);
    _swift_release(uVar1);
    return;
  }
  return;
}



/* Address: 0x10008a4e0 | FUN_10008a4e0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10008a4e0(void)

{
  long lVar1;
  long lVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long extraout_x8;
  long unaff_x20;
  String SVar8;
  String SVar9;
  undefined8 uStack_70;
  undefined1 auStack_68 [8];
  undefined8 auStack_60 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  lVar2 = _TtC5Paste14CreateItemView::___lazy_storage___createButton;
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  LVar3.unknown = &stack0xffffffffffffffb0 + lVar1;
  lVar4 = *(long *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___createButton);
  if (lVar4 == 0) {
    FUN_1001bd788(LVar3.unknown);
    SVar8 = (extension_Foundation)::Swift::String::init(LVar3);
    uVar5 = 0x73;
    FUN_1001e94d4(0x73,0xe100000000000000);
    FUN_1001bd908(LVar3.unknown);
    SVar9 = (extension_Foundation)::Swift::String::init(LVar3);
    puVar6 = &DAT_100eb3538;
    _swift_allocObject(&DAT_100eb3538,0x18,7);
    _swift_unknownObjectWeakInit(puVar6 + 0x10);
    uVar7 = 0;
    FUN_100240298(0);
    _objc_allocWithZone();
    *(code **)((long)auStack_60 + lVar1) = FUN_10008c12c;
    *(undefined **)((long)auStack_60 + lVar1 + 8) = puVar6;
    auStack_68[lVar1] = 0;
    *(void **)((long)&uStack_70 + lVar1) = SVar9.bridgeObject;
    lVar4 = 0;
    FUN_10023e034(uVar7,0,0,SVar8.str,SVar8.bridgeObject,uVar5,0x100000,0,SVar9.str);
    FUN_10023da08(1);
    *(long *)(unaff_x20 + lVar2) = lVar4;
  }
  return lVar4;
}



/* Address: 0x10008a650 | FUN_10008a650 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10008a650(long param_1)

{
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    FUN_10008a68c();
    return 0;
  }
  return 0;
}



/* Address: 0x10008a68c | FUN_10008a68c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10008a68c(void)

{
  URL UVar1;
  ID self;
  NSURL *pNVar2;
  long extraout_x8;
  long unaff_x20;
  URL UVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar1.unknown + -8);
  UVar3 = UVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  lVar4 = *(long *)(unaff_x20 + _TtC5Paste14CreateItemView::viewModel);
  FUN_10008a930();
  FUN_100212ccc();
  FUN_1003b73b8(UVar3.unknown);
  FUN_1003b7ff0(0);
  UVar3.unknown = *(undefined **)(lVar4 + 0x18);
  if (UVar3.unknown != (undefined *)0x0) {
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(UVar3.unknown);
    self = NSWorkspace::sharedWorkspace((ID)&_OBJC_CLASS___NSWorkspace);
    FUN_1001ac4c4(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar5,
                  UVar3.unknown);
    _swift_bridgeObjectRelease();
    pNVar2 = Foundation::URL::_bridgeToObjectiveC(UVar3);
    (**(code **)(lVar6 + 8))
              (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
    NSWorkspace::openURL_(self,pNVar2);
  }
  return;
}



/* Address: 0x10008a7b4 | FUN_10008a7b4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

code * FUN_10008a7b4(void)

{
  long lVar1;
  undefined *puVar2;
  code *pcVar3;
  code *pcVar4;
  long unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___writingToolsButton;
  pcVar4 = *(code **)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___writingToolsButton);
  pcVar3 = pcVar4;
  if (pcVar4 == (code *)0x1) {
    puVar2 = &DAT_100eb3538;
    _swift_allocObject(&DAT_100eb3538,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    _swift_retain(puVar2);
    pcVar3 = FUN_10008c134;
    FUN_10021662c(FUN_10008c134,puVar2);
    _swift_release_n(puVar2,2);
    uVar5 = *(undefined8 *)(unaff_x20 + lVar1);
    *(code **)(unaff_x20 + lVar1) = pcVar3;
    FUN_10001486c(uVar5);
  }
  FUN_10001487c(pcVar4);
  return pcVar3;
}



/* Address: 0x10008a864 | FUN_10008a864 */

void FUN_10008a864(long param_1)

{
  long lVar1;
  long local_40 [3];
  long local_28;
  
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    lVar1 = param_1;
    FUN_10008bd30();
    local_40[0] = param_1;
    local_28 = lVar1;
    FUN_1002160fc(local_40);
    FUN_100013954(local_40);
  }
  return;
}



/* Address: 0x10008a8b0 | FUN_10008a8b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008a8b0(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  ID unaff_x20;
  
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSLayoutGuide;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    objc_stub::addLayoutGuide_(unaff_x20,IVar2);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10008a930 | FUN_10008a930 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008a930(void)

{
  long lVar1;
  ID self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___textEditor;
  self = *(ID *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor);
  if (self == 0) {
    FUN_100215e84();
    _swift_getObjCClassFromMetadata();
    _objc_allocWithZone();
    self = objc_stub::init(self);
    FUN_10008a9ac();
    *(ID *)(unaff_x20 + lVar1) = self;
  }
  return self;
}



/* Address: 0x10008a9ac | FUN_10008a9ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008a9ac(ID param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ID IVar5;
  ID IVar6;
  undefined1 auStack_68 [24];
  
  puVar4 = &DAT_100eb3538;
  _swift_allocObject(&DAT_100eb3538,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10,param_2);
  puVar1 = (undefined8 *)(param_1 + _TtC7PasteUI10TextEditor::onAttributedTextChange);
  _swift_beginAccess(puVar1,auStack_68,1,0);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = FUN_10008c124;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar2,uVar3);
  _swift_release(puVar4);
  FUN_10000ec2c(0,&DAT_100fa8670,&PTR__OBJC_CLASS___NSColor_100f8d680);
  IVar5 = NSColor::blackColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fb999999999999a,IVar5);
  IVar6 = NSColor::whiteColor((ID)&_OBJC_CLASS___NSColor);
  FUN_1002067b8(0x3fb999999999999a,IVar6);
  FUN_1002066dc(IVar5,IVar6);
  objc_stub::setBorderColor_(param_1,IVar5);
  objc_stub::setBorderWidth_(param_1,0x3fe0000000000000);
  objc_stub::setCornerRadius_curve_
            (param_1,0x4014000000000000,*(undefined8 *)PTR__kCACornerCurveCircular_100eaa398);
  FUN_1002131bc(1);
  return;
}



/* Address: 0x10008ab50 | FUN_10008ab50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10008ab50(undefined8 param_1,long param_2)

{
  long lVar1;
  ID self;
  undefined8 uVar2;
  
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    lVar1 = param_2;
    FUN_10008a4e0();
    FUN_10008a930();
    FUN_100212ccc();
    FUN_1003b7f8c(lVar1);
    FUN_10023dd84((uint)lVar1 & 1);
    FUN_10008ace8(0);
    FUN_100201ce4();
    self = *(ID *)(param_2 + _TtC5Paste14CreateItemView::___lazy_storage___footer);
    uVar2 = *(undefined8 *)(param_2 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor);
    FUN_100211dec(uVar2);
    objc_stub::addArrangedSubview_(self,uVar2);
    return 0;
  }
  return 0;
}



/* Address: 0x10008ac6c | FUN_10008ac6c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_10008ac6c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___textEditorControls;
  lVar2 = *(long *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditorControls);
  if (lVar2 == 0) {
    FUN_10008a930();
    thunk_FUN_10021359c();
    *(long *)(unaff_x20 + lVar1) = lVar2;
  }
  return lVar2;
}



/* Address: 0x10008ace8 | FUN_10008ace8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008ace8(void)

{
  long lVar1;
  ID IVar2;
  undefined *self;
  long unaff_x20;
  
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___footer;
  IVar2 = *(ID *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___footer);
  if (IVar2 == 0) {
    self = &_OBJC_CLASS___NSStackView;
    _objc_allocWithZone();
    IVar2 = objc_stub::init((ID)self);
    *(ID *)(unaff_x20 + lVar1) = IVar2;
  }
  return IVar2;
}



/* Address: 0x10008ad54 | FUN_10008ad54 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008ad54(undefined8 param_1)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  ID IVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  undefined *puVar12;
  undefined *puVar13;
  ID IVar14;
  ulong uVar15;
  long unaff_x20;
  undefined8 uVar16;
  MainActor *pMVar17;
  undefined *local_100 [2];
  ID local_f0;
  ID local_90 [3];
  
  _swift_getObjectType();
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___cancelButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___createButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___writingToolsButton) = 1;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditorControls) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___footer) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::viewModel) = param_1;
  _swift_retain(param_1);
  IVar7 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff88,"initWithFrame:",0,0,0,0);
  IVar14 = IVar7;
  FUN_10008a330();
  local_90[0] = IVar14;
  FUN_10008a7b4();
  local_90[1] = IVar14;
  FUN_10008a4e0();
  uVar15 = 0;
  local_90[2] = IVar14;
  local_100[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    puVar5 = local_100[0];
    uVar1 = uVar15;
    if (uVar15 < 4) {
      uVar1 = 3;
    }
    do {
      if (uVar15 == 3) {
        puVar12 = &DAT_100faa5e0;
        FUN_1000037f0(&DAT_100faa5e0,&DAT_100c27dd8);
        _swift_arrayDestroy(local_90,3,puVar12);
        puVar12 = &DAT_100fa6b80;
        FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
        _swift_initStackObject();
        *(undefined8 *)(puVar12 + 0x18) = 7;
        *(undefined8 *)(puVar12 + 0x10) = 3;
        puVar13 = puVar12;
        FUN_10008a930();
        *(undefined **)(puVar12 + 0x20) = puVar13;
        FUN_10008ac6c();
        *(undefined **)(puVar12 + 0x28) = puVar13;
        FUN_10008ace8();
        *(undefined **)(puVar12 + 0x30) = puVar13;
        local_100[0] = puVar5;
        FUN_10008bd5c(puVar12,FUN_1000744c0);
        puVar5 = local_100[0];
        puVar12 = local_100[0];
        local_f0 = IVar7;
        FUN_1001fa150(local_100[0],FUN_10008be4c,local_100);
        _swift_bridgeObjectRelease(puVar5);
        _swift_bridgeObjectRelease(puVar12);
        lVar3 = _TtC5Paste14CreateItemView::___lazy_storage___textEditor;
        uVar16 = *(undefined8 *)(IVar7 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor);
        FUN_100212ccc(uVar16);
        FUN_1003b7f8c(uVar16);
        FUN_10023dd84((uint)uVar16 & 1);
        lVar4 = _TtC5Paste14CreateItemView::___lazy_storage___footer;
        FUN_100201ce4(*(undefined8 *)(IVar7 + _TtC5Paste14CreateItemView::___lazy_storage___footer))
        ;
        IVar14 = *(ID *)(IVar7 + lVar4);
        uVar16 = *(undefined8 *)(IVar7 + lVar3);
        FUN_100211dec(uVar16);
        objc_stub::addArrangedSubview_(IVar14,uVar16);
        _swift_release(param_1);
        return IVar7;
      }
      if (uVar1 == uVar15) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x10008b128);
        (*pcVar6)();
      }
      pMVar17 = (MainActor *)local_90[uVar15];
      pMVar8 = Swift::MainActor::typeMetadataAccessor();
      pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar17);
      pMVar8 = pMVar9;
      FUN_1000081a8();
      UVar10 = Swift::Actor::get_unownedExecutor();
      UVar11 = UVar10;
      _swift_task_isCurrentExecutor();
      if (((ulong)UVar11.unknown & 1) == 0) {
        _swift_task_reportUnexpectedExecutor
                  ("Paste/CreateItemView.swift",0x1a,1,0x39,UVar10.unknown,pMVar8);
      }
      _swift_release(pMVar9);
      uVar15 = uVar15 + 1;
    } while (pMVar17 == (MainActor *)0x0);
    Swift::Array<undefined>::__makeUniqueAndReserveCapacityIfNotUnique();
    uVar1 = *(ulong *)(((ulong)local_100[0] & 0xffffffffffffff8) + 0x10);
    uVar2 = *(ulong *)(((ulong)local_100[0] & 0xffffffffffffff8) + 0x18);
    if (uVar2 >> 1 <= uVar1) {
      Swift::Array<undefined>::__createNewBuffer(1 < uVar2,uVar1 + 1,1);
    }
    Swift::Array<undefined>::__appendElementAssumeUniqueAndCapacity(uVar1,pMVar17);
  } while( true );
}



/* Address: 0x10008b128 | FUN_10008b128 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined * FUN_10008b128(ID param_1)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ID *pIVar4;
  ID IVar5;
  ID IVar6;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  undefined *puVar10;
  undefined *puVar11;
  ID IVar12;
  undefined *puVar13;
  undefined8 uVar14;
  undefined *puVar15;
  ID *pIVar16;
  ID *pIVar17;
  ID IVar18;
  ID IVar19;
  ID *pIVar20;
  ID IVar21;
  undefined *local_398;
  ID local_98 [3];
  ID local_80;
  undefined **local_78;
  ID *local_70;
  
  IVar21 = param_1;
  _swift_getObjectType();
  IVar5 = IVar21;
  FUN_10008a8b0();
  local_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = IVar21;
  local_70 = (ID *)IVar5;
  FUN_10000ec2c(0,&DAT_100faa5e8,&PTR__OBJC_CLASS___NSLayoutGuide_100f8d7f8);
  pIVar4 = local_98;
  FUN_1001f9b74(0x4020000000000000,pIVar4,uVar3,&PTR_PTR_100ec0130);
  FUN_100004594(local_98);
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide;
  IVar5 = objc_stub::topAnchor
                    (*(ID *)(param_1 +
                            _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide));
  IVar6 = objc_stub::topAnchor(param_1);
  IVar6 = objc_stub::constraintEqualToAnchor_(IVar5,IVar6);
  IVar5 = objc_stub::heightAnchor(*(ID *)(param_1 + lVar1));
  IVar7 = objc_stub::constraintEqualToConstant_(IVar5,0x4043000000000000);
  IVar5 = IVar7;
  FUN_10008a330();
  IVar5 = objc_stub::leadingAnchor(IVar5);
  IVar8 = objc_stub::leadingAnchor(*(ID *)(param_1 + lVar1));
  IVar5 = objc_stub::constraintEqualToAnchor_(IVar5,IVar8);
  IVar8 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 + _TtC5Paste14CreateItemView::___lazy_storage___cancelButton));
  IVar9 = objc_stub::centerYAnchor(*(ID *)(param_1 + lVar1));
  puVar10 = (undefined *)objc_stub::constraintEqualToAnchor_(IVar8,IVar9);
  puVar11 = puVar10;
  FUN_10008a7b4();
  if (puVar11 == (undefined *)0x0) {
    FUN_1001f8d74();
    local_398 = puVar11;
  }
  else {
    IVar9 = objc_stub::trailingAnchor((ID)puVar11);
    IVar8 = IVar9;
    FUN_10008a4e0();
    IVar8 = objc_stub::leadingAnchor(IVar8);
    IVar8 = objc_stub::constraintEqualToAnchor_constant_(IVar9,0xc020000000000000,IVar8);
    IVar9 = objc_stub::centerYAnchor((ID)puVar11);
    IVar12 = objc_stub::centerYAnchor(*(ID *)(param_1 + lVar1));
    IVar9 = objc_stub::constraintEqualToAnchor_(IVar9,IVar12);
    puVar13 = &DAT_100fa8830;
    FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
    _swift_initStackObject();
    *(undefined8 *)(puVar13 + 0x18) = 4;
    *(undefined8 *)(puVar13 + 0x10) = 2;
    uVar14 = 0;
    FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
    *(undefined8 *)(puVar13 + 0x38) = uVar14;
    *(undefined ***)(puVar13 + 0x40) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar13 + 0x20) = IVar8;
    *(undefined8 *)(puVar13 + 0x60) = uVar14;
    *(undefined ***)(puVar13 + 0x68) = &PTR_PTR_100ec00a8;
    *(ID *)(puVar13 + 0x48) = IVar9;
    puVar11 = puVar13;
    FUN_1001f8d60();
    _swift_setDeallocating(puVar13);
    uVar14 = *(undefined8 *)(puVar13 + 0x10);
    puVar15 = &DAT_100fa6bc0;
    FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
    _swift_arrayDestroy(puVar13 + 0x20,uVar14,puVar15);
    puVar13 = puVar11;
    FUN_100089cb4();
    local_398 = puVar13;
    FUN_1001f8d74();
    _swift_bridgeObjectRelease(puVar13);
    _swift_bridgeObjectRelease();
  }
  FUN_10008a4e0();
  IVar8 = objc_stub::trailingAnchor((ID)puVar11);
  IVar9 = objc_stub::trailingAnchor(*(ID *)(param_1 + lVar1));
  IVar9 = objc_stub::constraintEqualToAnchor_(IVar8,IVar9);
  IVar8 = objc_stub::centerYAnchor
                    (*(ID *)(param_1 + _TtC5Paste14CreateItemView::___lazy_storage___createButton));
  IVar12 = objc_stub::centerYAnchor(*(ID *)(param_1 + lVar1));
  IVar12 = objc_stub::constraintEqualToAnchor_(IVar8,IVar12);
  IVar8 = IVar12;
  FUN_10008ac6c();
  local_98[0] = *(ID *)(param_1 + lVar1);
  local_78 = &PTR_PTR_100ec0130;
  uVar14 = 0;
  local_80 = uVar3;
  local_70 = (ID *)IVar8;
  FUN_10000ec2c(0,&DAT_100fa6b90,&PTR__OBJC_CLASS___NSView_100f8d628);
  pIVar16 = local_98;
  FUN_1001f9a0c(0,0,pIVar16,uVar14,&PTR_PTR_100ec00e8);
  pIVar17 = local_98;
  FUN_100004594();
  FUN_10008a930();
  local_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = IVar21;
  local_70 = pIVar17;
  FUN_100215e84(0);
  pIVar17 = local_98;
  FUN_1001f9b74(0x4014000000000000,pIVar17,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  lVar2 = _TtC5Paste14CreateItemView::___lazy_storage___textEditor;
  IVar8 = objc_stub::topAnchor
                    (*(ID *)(param_1 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor));
  IVar18 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar18 = objc_stub::constraintEqualToAnchor_(IVar8,IVar18);
  IVar19 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar2));
  IVar8 = IVar19;
  FUN_10008ace8();
  IVar8 = objc_stub::topAnchor(IVar8);
  IVar8 = objc_stub::constraintEqualToAnchor_constant_(IVar19,0xc026000000000000,IVar8);
  lVar1 = _TtC5Paste14CreateItemView::___lazy_storage___footer;
  local_70 = *(ID **)(param_1 + _TtC5Paste14CreateItemView::___lazy_storage___footer);
  local_78 = &PTR_PTR_100ec00e8;
  uVar3 = 0;
  local_98[0] = param_1;
  local_80 = IVar21;
  FUN_10000ec2c(0,&DAT_100fa6c68,&PTR__OBJC_CLASS___NSStackView_100f8d698);
  pIVar20 = local_98;
  FUN_1001f9b74(0x4028000000000000,pIVar20,uVar3,&PTR_PTR_100ec00e8);
  FUN_100004594(local_98);
  IVar21 = objc_stub::bottomAnchor(*(ID *)(param_1 + lVar1));
  IVar19 = objc_stub::bottomAnchor(param_1);
  IVar21 = objc_stub::constraintEqualToAnchor_constant_(IVar21,0xc026000000000000,IVar19);
  puVar11 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar11 + 0x18) = 0x1c;
  *(undefined8 *)(puVar11 + 0x10) = 0xe;
  puVar13 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar11 + 0x38) = puVar13;
  *(undefined ***)(puVar11 + 0x40) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x20) = pIVar4;
  uVar3 = 0;
  FUN_10000ec2c(0,&DAT_100fa86a0,&PTR__OBJC_CLASS___NSLayoutConstraint_100f8d660);
  *(undefined8 *)(puVar11 + 0x60) = uVar3;
  *(ID *)(puVar11 + 0x48) = IVar6;
  *(undefined8 *)(puVar11 + 0x88) = uVar3;
  *(undefined ***)(puVar11 + 0x90) = &PTR_PTR_100ec00a8;
  *(undefined ***)(puVar11 + 0x68) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x70) = IVar7;
  *(undefined8 *)(puVar11 + 0xb0) = uVar3;
  *(undefined ***)(puVar11 + 0xb8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x98) = IVar5;
  *(undefined8 *)(puVar11 + 0xd8) = uVar3;
  *(undefined ***)(puVar11 + 0xe0) = &PTR_PTR_100ec00a8;
  *(undefined **)(puVar11 + 0xc0) = puVar10;
  *(undefined **)(puVar11 + 0x100) = puVar13;
  *(undefined ***)(puVar11 + 0x108) = &PTR_PTR_100ec00b8;
  *(undefined **)(puVar11 + 0xe8) = local_398;
  *(undefined8 *)(puVar11 + 0x128) = uVar3;
  *(undefined ***)(puVar11 + 0x130) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x110) = IVar9;
  *(undefined8 *)(puVar11 + 0x150) = uVar3;
  *(undefined ***)(puVar11 + 0x158) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x138) = IVar12;
  *(undefined **)(puVar11 + 0x178) = puVar13;
  *(undefined ***)(puVar11 + 0x180) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x160) = pIVar16;
  *(undefined **)(puVar11 + 0x1a0) = puVar13;
  *(undefined ***)(puVar11 + 0x1a8) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x188) = pIVar17;
  *(undefined8 *)(puVar11 + 0x1c8) = uVar3;
  *(undefined ***)(puVar11 + 0x1d0) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x1b0) = IVar18;
  *(undefined8 *)(puVar11 + 0x1f0) = uVar3;
  *(undefined ***)(puVar11 + 0x1f8) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x1d8) = IVar8;
  *(undefined **)(puVar11 + 0x218) = puVar13;
  *(undefined ***)(puVar11 + 0x220) = &PTR_PTR_100ec00b8;
  *(ID **)(puVar11 + 0x200) = pIVar20;
  *(undefined8 *)(puVar11 + 0x240) = uVar3;
  *(undefined ***)(puVar11 + 0x248) = &PTR_PTR_100ec00a8;
  *(ID *)(puVar11 + 0x228) = IVar21;
  _swift_bridgeObjectRetain(pIVar16);
  _swift_bridgeObjectRetain(pIVar17);
  puVar13 = puVar11;
  FUN_1001f8d60(puVar11);
  _swift_bridgeObjectRelease(pIVar16);
  _swift_bridgeObjectRelease(pIVar17);
  _swift_setDeallocating(puVar11);
  uVar3 = *(undefined8 *)(puVar11 + 0x10);
  puVar10 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar11 + 0x20,uVar3,puVar10);
  return puVar13;
}



/* Address: 0x10008ba24 | _TtC5Paste14CreateItemView::initWithCoder: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste14CreateItemView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/CreateItemView.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemView.swift",0x1a,1,0x58,UVar3.unknown,pMVar1);
  }
  FUN_10008c144();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10008bad0 | _TtC5Paste14CreateItemView::performKeyEquivalent: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool _TtC5Paste14CreateItemView::performKeyEquivalent_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  class_t *pcVar2;
  MainActor *pMVar3;
  MainActor *pMVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  ID *pIVar7;
  ID *pIVar8;
  ID IVar9;
  MainActor *pMVar10;
  objc_super local_50;
  
  pcVar2 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar4 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  pMVar3 = pMVar4;
  FUN_1000081a8();
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  pMVar10 = pMVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    pMVar10 = (MainActor *)0x1a;
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemView.swift",0x1a,1,0x5c,UVar5.unknown,pMVar3);
  }
  pIVar7 = (ID *)param_1;
  FUN_1001e7d18();
  pIVar8 = pIVar7;
  FUN_1001e95f0();
  if (((ID *)*pIVar8 == pIVar7) && (pMVar10 == (MainActor *)0x0)) {
    FUN_1003b7ff0();
    _swift_release(pMVar4);
    bVar1 = 1;
  }
  else {
    local_50.receiver = param_1;
    local_50.super_class = pcVar2;
    IVar9 = _objc_msgSendSuper2(&local_50,"performKeyEquivalent:",param_3);
    bVar1 = (bool)IVar9;
    _swift_release(pMVar4);
  }
  return bVar1;
}



/* Address: 0x10008bc10 | _TtC5Paste14CreateItemView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste14CreateItemView::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/CreateItemView.swift",0x1a,1,10,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.CreateItemView",0x14,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008bc98);
  (*pcVar1)();
}



/* Address: 0x10008bc98 | _TtC5Paste14CreateItemView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste14CreateItemView::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_10001486c(*(undefined8 *)(param_1 + ___lazy_storage___writingToolsButton));
  _swift_release(*(undefined8 *)(param_1 + viewModel));
  return;
}



/* Address: 0x10008bd30 | FUN_10008bd30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10008bd30(void)

{
  return ZEXT816(0x100f920a0);
}



/* Address: 0x10008bd50 | FUN_10008bd50 */

void FUN_10008bd50(undefined8 param_1)

{
  FUN_10008bd5c(param_1,FUN_1000744ac);
  return;
}



/* Address: 0x10008bd5c | FUN_10008bd5c */

void FUN_10008bd5c(undefined *param_1,code *param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong *unaff_x20;
  __int64 _Var5;
  ulong uVar6;
  ulong uVar7;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var5 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar4 = (undefined *)*unaff_x20;
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (!SCARRY8(lVar3,_Var5)) {
    FUN_10008c054(lVar3 + _Var5,1);
    uVar6 = *unaff_x20;
    uVar7 = uVar6 & 0xffffffffffffff8;
    (*param_2)(uVar7 + *(long *)(uVar7 + 0x10) * 8 + 0x20,
               (*(ulong *)(uVar7 + 0x18) >> 1) - *(long *)(uVar7 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < _Var5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10008be48);
      (*pcVar2)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar7 + 0x10),(long)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10008be4c);
        (*pcVar2)();
      }
      *(undefined **)(uVar7 + 0x10) = param_1 + *(long *)(uVar7 + 0x10);
    }
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10008be44);
  (*pcVar2)();
}



/* Address: 0x10008be4c | FUN_10008be4c */

void FUN_10008be4c(void)

{
  long unaff_x20;
  
  FUN_10008b128(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10008be54 | FUN_10008be54 */

void FUN_10008be54(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008bf38);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_10008914c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10008bf3c);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10008bf40);
      (*pcVar1)();
    }
    _memcpy((void *)(lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20),(void *)(param_1 + 0x20),
            uVar5 << 4);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10008bf44);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x10008bf44 | FUN_10008bf44 */

void FUN_10008bf44(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c044);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_10008924c();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c048);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c04c);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fa9868;
    FUN_1000037f0(&DAT_100fa9868,&DAT_100c26e40);
    _swift_arrayInitWithCopy(lVar5 + lVar7 * 0x28 + 0x20,param_1 + 0x20,uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c050);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x10008c050 | thunk_FUN_10008c054 */

undefined1 * thunk_FUN_10008c054(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*unaff_x20;
  puVar2 = puVar3;
  _swift_isUniquelyReferenced_nonNull_bridgeObject();
  *unaff_x20 = puVar3;
  if ((((int)puVar2 != 0) && (puVar2 = (undefined1 *)0x0, -1 < (long)puVar3)) &&
     (((ulong)puVar3 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return puVar2;
    }
    puVar2 = &DAT_00000001;
  }
  if ((ulong)puVar3 >> 0x3e != 0) {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  Swift::Array<undefined>::__createNewBuffer();
  return puVar2;
}



/* Address: 0x10008c054 | FUN_10008c054 */

undefined1 * FUN_10008c054(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined1 *puVar3;
  
  puVar3 = (undefined1 *)*unaff_x20;
  puVar2 = puVar3;
  _swift_isUniquelyReferenced_nonNull_bridgeObject();
  *unaff_x20 = puVar3;
  if ((((int)puVar2 != 0) && (puVar2 = (undefined1 *)0x0, -1 < (long)puVar3)) &&
     (((ulong)puVar3 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return puVar2;
    }
    puVar2 = &DAT_00000001;
  }
  if ((ulong)puVar3 >> 0x3e != 0) {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  Swift::Array<undefined>::__createNewBuffer();
  return puVar2;
}



/* Address: 0x10008c100 | FUN_10008c100 */

void FUN_10008c100(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10008c124 | FUN_10008c124 */

void FUN_10008c124(void)

{
  FUN_10008ab50();
  return;
}



/* Address: 0x10008c12c | FUN_10008c12c */

void FUN_10008c12c(void)

{
  FUN_10008a650();
  return;
}



/* Address: 0x10008c134 | FUN_10008c134 */

void FUN_10008c134(void)

{
  FUN_10008a864();
  return;
}



/* Address: 0x10008c13c | FUN_10008c13c */

void FUN_10008c13c(void)

{
  FUN_10008a488();
  return;
}



/* Address: 0x10008c144 | FUN_10008c144 */

void FUN_10008c144(void)

{
  code *pcVar1;
  long unaff_x20;
  String SVar2;
  
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___cancelButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___createButton) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___writingToolsButton) = 1;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___headerLayoutGuide) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditor) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___textEditorControls) = 0;
  *(undefined8 *)(unaff_x20 + _TtC5Paste14CreateItemView::___lazy_storage___footer) = 0;
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8efc0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008c1f4);
  (*pcVar1)();
}



/* Address: 0x10008c1f4 | FUN_10008c1f4 */

void FUN_10008c1f4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x10008c240 | FUN_10008c240 */

undefined8 FUN_10008c240(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efa8c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10008c284 | FUN_10008c284 */

undefined8 FUN_10008c284(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003efa8c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x10008c2c0 | FUN_10008c2c0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10008c2c0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  undefined8 uVar4;
  NSString *pNVar5;
  long unaff_x20;
  
  lVar2 = _TtC5Paste15TabBarCellLabel::textField;
  IVar3 = objc_stub::isEditable(*(ID *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::textField));
  if ((int)IVar3 != 0) {
    puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::originalString);
    uVar4 = puVar1[1];
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_bridgeObjectRelease(uVar4);
    return uVar4;
  }
  IVar3 = *(ID *)(unaff_x20 + lVar2);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  objc_stub::setStringValue_(IVar3,pNVar5);
  return 0;
}



/* Address: 0x10008c35c | FUN_10008c35c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

code * FUN_10008c35c(void)

{
  String *pSVar1;
  long lVar2;
  ID self;
  code *pcVar3;
  long unaff_x20;
  undefined8 uVar4;
  String SVar5;
  
  lVar2 = _TtC5Paste15TabBarCellLabel::textField;
  objc_stub::stringValue(*(ID *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::textField));
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar1 = (String *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::originalString);
  *pSVar1 = SVar5;
  _swift_bridgeObjectRelease(pSVar1->bridgeObject);
  objc_stub::setEditable_(*(ID *)(unaff_x20 + lVar2),1);
  self = objc_stub::window(*(ID *)(unaff_x20 + lVar2));
  if (self != 0) {
    objc_stub::makeFirstResponder_(self,*(undefined8 *)(unaff_x20 + lVar2));
  }
  pcVar3 = *(code **)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onBeginEditing);
  if (pcVar3 != (code *)0x0) {
    uVar4 = ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onBeginEditing))[1];
    _swift_retain(uVar4);
    (*pcVar3)();
    FUN_100004550(pcVar3,uVar4);
    return pcVar3;
  }
  return (code *)0x0;
}



/* Address: 0x10008c440 | FUN_10008c440 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008c440(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long lVar2;
  ID IVar3;
  NSString *pNVar4;
  undefined8 uVar5;
  long unaff_x20;
  ID self;
  undefined1 auStack_70 [16];
  ID local_60;
  
  _swift_getObjectType();
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onBeginEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCancelEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCommitEditing);
  *puVar1 = 0;
  puVar1[1] = 0;
  lVar2 = _TtC5Paste15TabBarCellLabel::textField;
  IVar3 = 0;
  FUN_10008d6b8();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x20 + lVar2) = IVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::originalString);
  *puVar1 = 0;
  puVar1[1] = 0xe000000000000000;
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"initWithFrame:",0,0,0,0);
  lVar2 = _TtC5Paste15TabBarCellLabel::textField;
  self = *(ID *)(IVar3 + _TtC5Paste15TabBarCellLabel::textField);
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  objc_stub::setStringValue_(self,pNVar4);
  objc_stub::setEditable_(*(ID *)(IVar3 + lVar2),0);
  objc_stub::setDelegate_(*(ID *)(IVar3 + lVar2),IVar3);
  uVar5 = *(undefined8 *)(IVar3 + lVar2);
  local_60 = IVar3;
  FUN_1001fa09c(uVar5,FUN_10008d71c,auStack_70);
  _swift_bridgeObjectRelease(uVar5);
  return IVar3;
}



/* Address: 0x10008c5d0 | FUN_10008c5d0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10008c5d0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 local_58;
  
  puVar1 = param_1;
  _swift_getObjectType();
  local_58 = *(undefined8 *)((long)param_1 + _TtC5Paste15TabBarCellLabel::textField);
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_1;
  local_68 = puVar1;
  FUN_1001f9774();
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = 0;
  FUN_10008d6b8(0);
  ppuVar3 = local_80;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar2,puVar5);
  return puVar6;
}



/* Address: 0x10008c724 | _TtC5Paste15TabBarCellLabel::mouseDown: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste15TabBarCellLabel::mouseDown_(ID param_1,SEL param_2,ID param_3)

{
  class_t *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  objc_super local_50;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x2b,UVar4.unknown,pMVar2);
  }
  IVar6 = objc_stub::clickCount(param_3);
  if ((IVar6 == 2) &&
     (IVar6 = objc_stub::isEditable(*(ID *)(param_1 + textField)), (IVar6 & 1) == 0)) {
    FUN_10008c35c();
  }
  else {
    local_50.receiver = param_1;
    local_50.super_class = pcVar1;
    _objc_msgSendSuper2(&local_50,"mouseDown:",param_3);
  }
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10008c834 | FUN_10008c834 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_10008c834(void)

{
  long lVar1;
  ID IVar2;
  NSString *pNVar3;
  ID self;
  code *pcVar4;
  ID unaff_x20;
  undefined8 uVar5;
  
  lVar1 = _TtC5Paste15TabBarCellLabel::textField;
  IVar2 = objc_stub::isEditable(*(ID *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::textField));
  if ((int)IVar2 != 0) {
    objc_stub::setEditable_(*(ID *)(unaff_x20 + lVar1),0);
    IVar2 = *(ID *)(unaff_x20 + lVar1);
    uVar5 = *(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::originalString + 8);
    _swift_bridgeObjectRetain(uVar5);
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(uVar5);
    objc_stub::setStringValue_(IVar2,pNVar3);
    objc_stub::abortEditing(*(ID *)(unaff_x20 + lVar1));
    pcVar4 = *(code **)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCancelEditing);
    if (pcVar4 != (code *)0x0) {
      uVar5 = ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCancelEditing))[1];
      _swift_retain(uVar5);
      (*pcVar4)();
      FUN_100004550(pcVar4,uVar5);
    }
    self = objc_stub::window(unaff_x20);
    IVar2 = 0;
    if (self != 0) {
      IVar2 = objc_stub::window(unaff_x20);
      if (IVar2 == 0) {
        IVar2 = 0;
      }
      else {
        IVar2 = objc_stub::initialFirstResponder(IVar2);
      }
      objc_stub::makeFirstResponder_(self,IVar2);
      return 0;
    }
  }
  return IVar2;
}



/* Address: 0x10008c994 | _TtC5Paste15TabBarCellLabel::cancelOperation: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste15TabBarCellLabel::cancelOperation_(ID param_1,SEL param_2,ID param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x33,UVar3.unknown,pMVar1);
  }
  if (param_3 == 0) {
    uStack_58 = 0;
    local_60 = 0;
    uStack_48 = 0;
    uStack_50 = 0;
  }
  else {
    _swift_unknownObjectRetain(param_3);
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(param_3);
  }
  FUN_10008c834();
  FUN_100013954(&local_60);
  _swift_release(pMVar2);
  return;
}



/* Address: 0x10008ca80 | FUN_10008ca80 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008ca80(void)

{
  long lVar1;
  ID IVar2;
  ID self;
  code *pcVar3;
  ID unaff_x20;
  undefined8 uVar4;
  String SVar5;
  
  lVar1 = _TtC5Paste15TabBarCellLabel::textField;
  IVar2 = objc_stub::isEditable(*(ID *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::textField));
  if ((int)IVar2 != 0) {
    objc_stub::setEditable_(*(ID *)(unaff_x20 + lVar1),0);
    pcVar3 = *(code **)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCommitEditing);
    if (pcVar3 != (code *)0x0) {
      uVar4 = ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCommitEditing))[1];
      IVar2 = *(ID *)(unaff_x20 + lVar1);
      _swift_retain(uVar4);
      objc_stub::stringValue(IVar2);
      SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      (*pcVar3)(SVar5.str,SVar5.bridgeObject);
      _swift_bridgeObjectRelease(SVar5.bridgeObject);
      FUN_100004550(pcVar3,uVar4);
    }
    self = objc_stub::window(unaff_x20);
    IVar2 = 0;
    if (self != 0) {
      IVar2 = objc_stub::window(unaff_x20);
      if (IVar2 == 0) {
        IVar2 = 0;
      }
      else {
        IVar2 = objc_stub::initialFirstResponder(IVar2);
      }
      objc_stub::makeFirstResponder_(self,IVar2);
      return 0;
    }
  }
  return IVar2;
}



/* Address: 0x10008cbbc | _TtC5Paste15TabBarCellLabel::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC5Paste15TabBarCellLabel::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,4,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.TabBarCellLabel",0x15,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10008cc44);
  (*pcVar1)();
}



/* Address: 0x10008cc44 | _TtC5Paste15TabBarCellLabel::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtC5Paste15TabBarCellLabel::initWithFrame_(ID param_1,SEL param_2,CGRect param_3)

{
  FUN_10008d5ec(param_1,param_2,4,"Paste.TabBarCellLabel",0x15,param_3.field1_0x10.field1_0x8);
  return param_1;
}



/* Address: 0x10008cc58 | FUN_10008cc58 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10008cc58(void)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onBeginEditing),
                ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onBeginEditing))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCancelEditing),
                ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCancelEditing))[1]);
  FUN_100004550(*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCommitEditing),
                ((undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::onCommitEditing))[1]);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC5Paste15TabBarCellLabel::originalString + 8));
  return;
}



/* Address: 0x10008ccc4 | _TtC5Paste15TabBarCellLabel::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste15TabBarCellLabel::_cxx_destruct(ID param_1,SEL param_2)

{
  FUN_100004550(*(undefined8 *)(param_1 + onBeginEditing),
                ((undefined8 *)(param_1 + onBeginEditing))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCancelEditing),
                ((undefined8 *)(param_1 + onCancelEditing))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + onCommitEditing),
                ((undefined8 *)(param_1 + onCommitEditing))[1]);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + originalString + 8));
  return;
}



/* Address: 0x10008cd3c | FUN_10008cd3c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10008cd3c(void)

{
  return ZEXT816(0x100f92198);
}



/* Address: 0x10008cd5c | _TtC5Paste15TabBarCellLabel::controlTextDidEndEditing: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC5Paste15TabBarCellLabel::controlTextDidEndEditing_(ID param_1,SEL param_2,ID param_3)

{
  char *pcVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  char *pcVar5;
  void *pvVar6;
  long extraout_x8;
  long lVar7;
  Notification NVar8;
  
  NVar8 = Foundation::Notification::typeMetadataAccessor();
  pvVar6 = NVar8.syncInProgress.bridgeObject;
  pcVar5 = NVar8.syncInProgress.str;
  pcVar1 = NVar8.pastePaused.str;
  lVar7 = *(long *)(pcVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(undefined8 *)(lVar7 + 0x40),pcVar1,NVar8.pastePaused.bridgeObject);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    pMVar2 = (MainActor *)0x1b;
    pcVar5 = &DAT_00000001;
    pvVar6 = (void *)0x57;
    _swift_task_reportUnexpectedExecutor("Paste/TabBarCellLabel.swift");
  }
  NVar8.pastePaused.bridgeObject = pMVar2;
  NVar8.pastePaused.str = (char *)param_3;
  NVar8.syncInProgress.bridgeObject = pvVar6;
  NVar8.syncInProgress.str = pcVar5;
  NVar8 = Foundation::Notification::__unconditionallyBridgeFromObjectiveC(NVar8);
  FUN_10008ca80(param_1,NVar8.pastePaused.bridgeObject,NVar8.syncInProgress.str,
                NVar8.syncInProgress.bridgeObject);
  (**(code **)(lVar7 + 8))
            (&stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),pcVar1);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10008ce68 | FUN_10008ce68 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10008ce68(void)

{
  undefined8 *puVar1;
  ID self;
  ID IVar2;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::
           focusRingBounds);
  FUN_10008d6b8();
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  self = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffd0,"initWithFrame:",0,0,0,0);
  objc_stub::setAlignment_(self,4);
  FUN_10008d6d8(0);
  IVar2 = self;
  FUN_1001ff928();
  objc_stub::setFont_(self,IVar2);
  objc_stub::setBordered_(self,0);
  objc_stub::setDrawsBackground_(self,0);
  objc_stub::setUsesSingleLineMode_(self,1);
  objc_stub::setLineBreakMode_(self,4);
  objc_stub::setMaximumNumberOfLines_(self,1);
  return self;
}



/* Address: 0x10008cf6c | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::init
             (ID param_1,SEL param_2)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/TabBarCellLabel.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x60,UVar3.unknown,pMVar1);
  }
  FUN_10008ce68();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x10008d004 | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::initWithCoder_
             (ID param_1,SEL param_2,ID param_3)

{
  undefined8 *puVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  String SVar6;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x6d,UVar4.unknown,pMVar3);
  }
  puVar1 = (undefined8 *)(param_1 + focusRingBounds);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8f000);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10008d0d4);
  (*pcVar2)();
}



/* Address: 0x10008d0d4 | _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::focusRingMaskBounds */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

CGRect _TtCC5Paste15TabBarCellLabelP33_0F41DE770CBB3D48BD1AF75457DFD7ED9TextField::
       focusRingMaskBounds(ID param_1,SEL param_2)

{
  undefined8 *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  ID IVar6;
  double extraout_d0;
  undefined8 uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  CGRect CVar11;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/TabBarCellLabel.swift",0x1b,1,0x71,UVar4.unknown,pMVar2);
  }
  puVar1 = (undefined8 *)(param_1 + focusRingBounds);
  uVar7 = *puVar1;
  dVar8 = (double)puVar1[1];
  dVar9 = (double)puVar1[2];
  dVar10 = (double)puVar1[3];
  IVar6 = objc_stub::superview(param_1);
  objc_stub::convertRect_fromView_(param_1,uVar7,IVar6);
  _swift_release(pMVar3);
  CVar11.field0_0x0.field1_0x8 = dVar8;
  CVar11.field0_0x0.field0_0x0 = extraout_d0;
  CVar11.field1_0x10.field1_0x8 = dVar10;
  CVar11.field1_0x10.field0_0x0 = dVar9;
  return CVar11;
}


