/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10089e964 | FUN_10089e964 */

code * FUN_10089e964(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*unaff_x20 + 0x30);
  return FUN_10089e984;
}



/* Address: 0x10089e984 | FUN_10089e984 */

void FUN_10089e984(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong *puVar11;
  
  puVar11 = (ulong *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar6 = *(undefined2 *)(param_1 + 1);
    uVar7 = *(undefined2 *)((long)param_1 + 10);
    uVar8 = *puVar11;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = *puVar11;
    uVar9 = uVar10;
    if ((uVar8 & 1) == 0) {
      uVar1 = *(undefined8 *)(uVar10 + 0x10);
      uVar3 = *(undefined8 *)(uVar10 + 0x18);
      uVar2 = *(undefined8 *)(uVar10 + 0x20);
      uVar4 = *(undefined8 *)(uVar10 + 0x28);
      uVar5 = *(undefined4 *)(uVar10 + 0x30);
      uVar9 = 0;
      FUN_10089bc80();
      _swift_allocObject();
      *(undefined8 *)(uVar9 + 0x10) = uVar1;
      *(undefined8 *)(uVar9 + 0x18) = uVar3;
      *(undefined8 *)(uVar9 + 0x20) = uVar2;
      *(undefined8 *)(uVar9 + 0x28) = uVar4;
      *(undefined4 *)(uVar9 + 0x30) = uVar5;
      FUN_100881fec(uVar1,uVar3);
      _swift_bridgeObjectRetain(uVar4);
      _swift_release(uVar10);
      *puVar11 = uVar9;
    }
    *(undefined2 *)(uVar9 + 0x30) = uVar6;
    *(undefined2 *)(uVar9 + 0x32) = uVar7;
  }
  else {
    FUN_10089e8c0(*(undefined4 *)(param_1 + 1));
  }
  return;
}



/* Address: 0x10089ea48 | FUN_10089ea48 */

void FUN_10089ea48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10089bc80();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(short *)(lVar1 + 0x30) = (short)param_1;
  *(short *)(lVar1 + 0x32) = (short)((ulong)param_1 >> 0x10);
  return;
}



/* Address: 0x10089eab8 | thunk_FUN_1008a26cc */

void thunk_FUN_1008a26cc(void)

{
  FUN_1008a26cc();
  return;
}



/* Address: 0x10089eabc | thunk_FUN_1008a2348 */

void thunk_FUN_1008a2348(void)

{
  FUN_1008a2348();
  return;
}



/* Address: 0x10089eac0 | FUN_10089eac0 */

void FUN_10089eac0(void)

{
  FUN_10089f564();
  return;
}



/* Address: 0x10089eacc | FUN_10089eacc */

bool FUN_10089eacc(undefined8 param_1,undefined8 param_2,long param_3,long param_4,ulong param_5,
                  undefined8 param_6)

{
  ulong *puVar1;
  long lVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong *puVar11;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  ulong local_e0 [4];
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  long lStack_78;
  ulong local_70;
  undefined8 uStack_68;
  
  local_b8 = *(long *)(param_4 + -8);
  local_e0[1] = *(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_e0[2] = (long)local_e0 - local_e0[1];
  local_e0[1] = local_e0[2] - local_e0[1];
  local_a8 = *(long *)(param_3 + -8);
  uVar8 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_b0 = local_e0[1] - uVar8;
  uVar8 = local_b0 - uVar8;
  lVar4 = 0;
  local_e0[0] = param_5;
  local_e0[3] = param_6;
  local_c0 = param_4;
  local_90 = param_1;
  local_88 = param_2;
  local_80 = param_3;
  lStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_1008a3bc4(0,&local_80);
  lVar12 = *(long *)(lVar4 + -8);
  uVar9 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar11 = (ulong *)(uVar8 - uVar9);
  lVar14 = (long)puVar11 - uVar9;
  lVar15 = lVar14 - uVar9;
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar4,lVar4,0,0);
  local_98 = *(long *)(lVar5 + -8);
  lVar10 = lVar15 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (ulong *)(lVar10 + *(int *)(lVar5 + 0x30));
  pcVar13 = *(code **)(lVar12 + 0x10);
  local_a0 = lVar12;
  (*pcVar13)(lVar10,local_90,lVar4);
  (*pcVar13)(puVar1,local_88,lVar4);
  lVar6 = lVar10;
  _swift_getEnumCaseMultiPayload(lVar10,lVar4);
  lVar2 = local_a8;
  lVar12 = local_b0;
  if ((int)lVar6 == 0) {
    (*pcVar13)(lVar15,lVar10,lVar4);
    puVar11 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar4);
    if ((int)puVar11 == 0) {
      pcVar13 = *(code **)(lVar2 + 0x20);
      (*pcVar13)(uVar8,lVar15,param_3);
      (*pcVar13)(lVar12,puVar1,param_3);
      bVar3 = Swift::Equatable::___infix(uVar8,lVar12,param_3,local_e0[0]);
      pcVar13 = *(code **)(lVar2 + 8);
      (*pcVar13)(lVar12,param_3);
LAB_10089edfc:
      (*pcVar13)(uVar8,param_3);
      lVar12 = local_a0;
      goto LAB_10089ee20;
    }
    (**(code **)(lVar2 + 8))(lVar15,param_3);
  }
  else if ((int)lVar6 == 1) {
    (*pcVar13)(lVar14,lVar10,lVar4);
    puVar11 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar4);
    lVar12 = local_b8;
    param_3 = local_c0;
    uVar8 = local_e0[1];
    if ((int)puVar11 == 1) {
      pcVar13 = *(code **)(local_b8 + 0x20);
      (*pcVar13)(local_e0[1],lVar14,local_c0);
      uVar9 = local_e0[2];
      (*pcVar13)(local_e0[2],puVar1,param_3);
      bVar3 = Swift::Equatable::___infix(uVar8,uVar9,param_3,local_e0[3]);
      pcVar13 = *(code **)(lVar12 + 8);
      (*pcVar13)(uVar9,param_3);
      goto LAB_10089edfc;
    }
    (**(code **)(local_b8 + 8))(lVar14,local_c0);
  }
  else {
    (*pcVar13)(puVar11,lVar10,lVar4);
    uVar8 = *puVar11;
    puVar11 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,lVar4);
    if ((int)puVar11 == 2) {
      uVar9 = *puVar1;
      if (uVar8 == 0) {
        uVar8 = uVar9;
        if (uVar9 == 0) {
LAB_10089ee08:
          bVar3 = true;
          lVar12 = local_a0;
          goto LAB_10089ee20;
        }
LAB_10089ee14:
        _swift_bridgeObjectRelease(uVar8);
      }
      else {
        if (uVar9 == 0) goto LAB_10089ee14;
        _swift_bridgeObjectRetain();
        uVar7 = uVar8;
        _swift_bridgeObjectRetain();
        FUN_1008a2348();
        _swift_bridgeObjectRelease_n(uVar8,2);
        _swift_bridgeObjectRelease_n(uVar9,2);
        if ((uVar7 & 1) != 0) goto LAB_10089ee08;
      }
      bVar3 = false;
      lVar12 = local_a0;
      goto LAB_10089ee20;
    }
    _swift_bridgeObjectRelease(uVar8);
  }
  bVar3 = false;
  lVar12 = local_98;
  lVar4 = lVar5;
LAB_10089ee20:
  (**(code **)(lVar12 + 8))(lVar10,lVar4);
  return bVar3;
}



/* Address: 0x10089ee54 | FUN_10089ee54 */

void FUN_10089ee54(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10089eacc(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x28));
  return;
}



/* Address: 0x10089ee64 | FUN_10089ee64 */

void FUN_10089ee64(long param_1)

{
  FUN_10089ee6c(*(undefined4 *)(param_1 + 0x30));
  return;
}



/* Address: 0x10089ee6c | FUN_10089ee6c */

bool FUN_10089ee6c(uint param_1,undefined8 param_2,char param_3)

{
  _StringObject _Var1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  char cVar5;
  long lVar6;
  ulong uVar7;
  UnsafeBufferPointer<__int8> UVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong *puVar12;
  ulong uVar13;
  undefined *local_a8;
  ulong uStack_a0;
  undefined1 auStack_90 [16];
  undefined8 *local_80;
  undefined8 local_70;
  undefined1 *local_68;
  
  if (param_3 == '\0') {
    return true;
  }
  if (param_3 == '\x01') {
    return false;
  }
  lVar6 = 0x697463656e6e6f63;
  FUN_10089dad4(0x697463656e6e6f63,0xea00000000006e6f,param_2);
  uVar13 = *(ulong *)(lVar6 + 0x10);
  if (uVar13 != 0) {
    uVar9 = 0;
    uVar11 = 2;
    cVar5 = '\x02';
LAB_10089eef0:
    puVar12 = (ulong *)(lVar6 + 0x38 + uVar9 * 0x20);
    uVar10 = uVar9;
    do {
      if (*(ulong *)(lVar6 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10089f1e4);
        (*pcVar4)();
      }
      uVar9 = puVar12[-3];
      uVar2 = puVar12[-2];
      _Var1.unknown = (undefined *)puVar12[-1];
      uVar3 = *puVar12;
      local_70 = 0x65736f6c63;
      local_68 = &DAT_e500000000000000;
      local_80 = &local_70;
      if ((uVar3 >> 0x3c & 1) == 0) {
        if ((uVar3 >> 0x3d & 1) == 0) {
          if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
            UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
          }
          else {
            UVar8.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
          }
          _swift_bridgeObjectRetain_n(uVar3,3);
        }
        else {
          uStack_a0 = uVar3 & 0xffffffffffffff;
          local_a8 = _Var1.unknown;
          _swift_bridgeObjectRetain_n(uVar3,3);
          UVar8.unknown = (undefined *)&local_a8;
        }
        FUN_1008a3c60(UVar8.unknown,uVar9,uVar2,_Var1.unknown,uVar3,FUN_1008a6308,auStack_90);
        _swift_bridgeObjectRelease(uVar3);
        if (((uint)UVar8.unknown & 0xfe) == 2) goto LAB_10089efac;
        _swift_bridgeObjectRelease(uVar3);
        if (((ulong)UVar8.unknown & 1) == 0) {
          if ((uVar3 & 0x2000000000000000) != 0) goto LAB_10089f070;
LAB_10089f014:
          local_80 = &local_70;
          local_68 = (undefined1 *)0xea00000000006576;
          local_70 = 0x696c612d7065656b;
          if (((ulong)_Var1.unknown >> 0x3c & 1) == 0) {
            UVar8 = Swift::_StringObject::get_sharedUTF8(_Var1);
          }
          else {
            UVar8.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
          }
          _swift_bridgeObjectRetain(uVar3);
          goto LAB_10089f088;
        }
LAB_10089f144:
        _swift_bridgeObjectRelease(uVar3);
        uVar11 = 1;
        cVar5 = true;
        goto LAB_10089f164;
      }
      _swift_bridgeObjectRetain_n(uVar3,2);
LAB_10089efac:
      uVar7 = 0x65736f6c63;
      FUN_10089b8f8(0x65736f6c63,&DAT_e500000000000000,uVar9,uVar2,_Var1.unknown,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      if ((uVar7 & 1) != 0) goto LAB_10089f144;
      local_70 = 0x696c612d7065656b;
      local_68 = (undefined1 *)0xea00000000006576;
      local_80 = &local_70;
      if ((uVar3 >> 0x3c & 1) == 0) {
        if ((uVar3 & 0x2000000000000000) == 0) goto LAB_10089f014;
LAB_10089f070:
        local_80 = &local_70;
        local_68 = (undefined1 *)0xea00000000006576;
        local_70 = 0x696c612d7065656b;
        uStack_a0 = uVar3 & 0xffffffffffffff;
        local_a8 = _Var1.unknown;
        _swift_bridgeObjectRetain(uVar3);
        UVar8.unknown = (undefined *)&local_a8;
LAB_10089f088:
        FUN_1008a3c60(UVar8.unknown,uVar9,uVar2,_Var1.unknown,uVar3,FUN_1008a6348,auStack_90);
        _swift_bridgeObjectRelease(uVar3);
        if (((uint)UVar8.unknown & 0xfe) == 2) goto LAB_10089f0bc;
      }
      else {
LAB_10089f0bc:
        UVar8.unknown = (undefined *)0x696c612d7065656b;
        FUN_10089b8f8(0x696c612d7065656b,0xea00000000006576,uVar9,uVar2,_Var1.unknown,uVar3);
      }
      _swift_bridgeObjectRelease(uVar3);
      if (((ulong)UVar8.unknown & 1) != 0) goto LAB_10089f154;
      uVar10 = uVar10 + 1;
      puVar12 = puVar12 + 4;
      if (uVar13 == uVar10) goto LAB_10089f17c;
    } while( true );
  }
  _swift_bridgeObjectRelease(lVar6);
LAB_10089f1a8:
  return (param_1 & 0xffff0000) == 0x10000 && (param_1 & 0xffff) != 0;
LAB_10089f154:
  cVar5 = uVar11 != 2;
  uVar11 = (uint)(byte)cVar5;
LAB_10089f164:
  uVar9 = uVar10 + 1;
  if (uVar13 - 1 == uVar10) goto LAB_10089f17c;
  goto LAB_10089eef0;
LAB_10089f17c:
  _swift_bridgeObjectRelease(lVar6);
  if (cVar5 == '\0') {
    return true;
  }
  if (cVar5 == '\x01') {
    return false;
  }
  goto LAB_10089f1a8;
}



/* Address: 0x10089f1e4 | FUN_10089f1e4 */

void FUN_10089f1e4(void)

{
  long unaff_x20;
  
  FUN_10087b2d4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10089f20c | FUN_10089f20c */

void FUN_10089f20c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar4 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar7 = *unaff_x20;
  uVar1 = *(undefined8 *)(uVar7 + 0x10);
  uVar2 = *(undefined8 *)(uVar7 + 0x18);
  uVar6 = *(undefined8 *)(uVar7 + 0x20);
  uVar5 = uVar7;
  if ((uVar4 & 1) == 0) {
    uVar3 = *(undefined4 *)(uVar7 + 0x28);
    uVar5 = 0;
    FUN_1008a3ae8();
    _swift_allocObject();
    *(undefined8 *)(uVar5 + 0x10) = uVar1;
    *(undefined8 *)(uVar5 + 0x18) = uVar2;
    *(undefined8 *)(uVar5 + 0x20) = uVar6;
    *(undefined4 *)(uVar5 + 0x28) = uVar3;
    FUN_100888110(uVar1,uVar2,uVar6);
    _swift_release(uVar7);
    *unaff_x20 = uVar5;
  }
  *(undefined8 *)(uVar5 + 0x10) = param_1;
  *(undefined8 *)(uVar5 + 0x18) = param_2;
  *(undefined8 *)(uVar5 + 0x20) = param_3;
  FUN_10087b2d4(uVar1,uVar2,uVar6);
  return;
}



/* Address: 0x10089f2c4 | FUN_10089f2c4 */

undefined1  [16] FUN_10089f2c4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *unaff_x20;
  undefined1 auVar4 [16];
  
  param_1[3] = unaff_x20;
  lVar3 = *unaff_x20;
  uVar1 = *(undefined8 *)(lVar3 + 0x18);
  uVar2 = *(undefined8 *)(lVar3 + 0x20);
  *param_1 = *(undefined8 *)(lVar3 + 0x10);
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  FUN_100888110();
  auVar4._8_8_ = param_1;
  auVar4._0_8_ = FUN_10089f308;
  return auVar4;
}



/* Address: 0x10089f308 | FUN_10089f308 */

void FUN_10089f308(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  puVar4 = (ulong *)param_1[3];
  if ((param_2 & 1) == 0) {
    uVar6 = *puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = *puVar4;
    uVar10 = *(undefined8 *)(uVar11 + 0x10);
    uVar9 = *(undefined8 *)(uVar11 + 0x18);
    uVar8 = *(undefined8 *)(uVar11 + 0x20);
    uVar7 = uVar11;
    if ((uVar6 & 1) == 0) {
      uVar5 = *(undefined4 *)(uVar11 + 0x28);
      uVar7 = 0;
      FUN_1008a3ae8();
      _swift_allocObject();
      *(undefined8 *)(uVar7 + 0x10) = uVar10;
      *(undefined8 *)(uVar7 + 0x18) = uVar9;
      *(undefined8 *)(uVar7 + 0x20) = uVar8;
      *(undefined4 *)(uVar7 + 0x28) = uVar5;
      FUN_100888110(uVar10,uVar9,uVar8);
      _swift_release(uVar11);
      *puVar4 = uVar7;
    }
    *(undefined8 *)(uVar7 + 0x10) = uVar1;
    *(undefined8 *)(uVar7 + 0x18) = uVar3;
    *(undefined8 *)(uVar7 + 0x20) = uVar2;
  }
  else {
    FUN_100888110(uVar1,uVar3,uVar2);
    FUN_10089f20c(uVar1,uVar3,uVar2);
    uVar8 = uVar2;
    uVar9 = uVar3;
    uVar10 = uVar1;
  }
  FUN_10087b2d4(uVar10,uVar9,uVar8);
  return;
}



/* Address: 0x10089f3f0 | FUN_10089f3f0 */

void FUN_10089f3f0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  ulong uVar6;
  undefined8 uVar7;
  
  uVar4 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar6 = *unaff_x20;
  uVar5 = uVar6;
  if ((uVar4 & 1) == 0) {
    uVar1 = *(undefined8 *)(uVar6 + 0x10);
    uVar2 = *(undefined8 *)(uVar6 + 0x18);
    uVar7 = *(undefined8 *)(uVar6 + 0x20);
    uVar3 = *(undefined4 *)(uVar6 + 0x28);
    uVar5 = 0;
    FUN_1008a3ae8();
    _swift_allocObject();
    *(undefined8 *)(uVar5 + 0x10) = uVar1;
    *(undefined8 *)(uVar5 + 0x18) = uVar2;
    *(undefined8 *)(uVar5 + 0x20) = uVar7;
    *(undefined4 *)(uVar5 + 0x28) = uVar3;
    FUN_100888110(uVar1,uVar2,uVar7);
    _swift_release(uVar6);
    *unaff_x20 = uVar5;
  }
  *(undefined4 *)(uVar5 + 0x28) = param_1;
  return;
}



/* Address: 0x10089f488 | FUN_10089f488 */

code * FUN_10089f488(undefined8 *param_1)

{
  long *unaff_x20;
  
  *param_1 = unaff_x20;
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(*unaff_x20 + 0x28);
  return FUN_10089f4a8;
}



/* Address: 0x10089f4a8 | FUN_10089f4a8 */

void FUN_10089f4a8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  
  puVar10 = (ulong *)*param_1;
  uVar4 = *(undefined2 *)((long)param_1 + 10);
  uVar5 = *(undefined2 *)(param_1 + 1);
  uVar6 = *puVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = *puVar10;
  uVar7 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(uVar8 + 0x10);
    uVar2 = *(undefined8 *)(uVar8 + 0x18);
    uVar9 = *(undefined8 *)(uVar8 + 0x20);
    uVar3 = *(undefined4 *)(uVar8 + 0x28);
    uVar7 = 0;
    FUN_1008a3ae8();
    _swift_allocObject();
    *(undefined8 *)(uVar7 + 0x10) = uVar1;
    *(undefined8 *)(uVar7 + 0x18) = uVar2;
    *(undefined8 *)(uVar7 + 0x20) = uVar9;
    *(undefined4 *)(uVar7 + 0x28) = uVar3;
    FUN_100888110(uVar1,uVar2,uVar9);
    _swift_release(uVar8);
    *puVar10 = uVar7;
  }
  *(undefined2 *)(uVar7 + 0x28) = uVar5;
  *(undefined2 *)(uVar7 + 0x2a) = uVar4;
  return;
}



/* Address: 0x10089f554 | thunk_FUN_1008a2c9c */

void thunk_FUN_1008a2c9c(void)

{
  FUN_1008a2c9c();
  return;
}



/* Address: 0x10089f558 | FUN_10089f558 */

void FUN_10089f558(void)

{
  FUN_10089f564();
  return;
}



/* Address: 0x10089f564 | FUN_10089f564 */

void FUN_10089f564(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  code *UNRECOVERED_JUMPTABLE)

{
                    /* WARNING: Could not recover jumptable at 0x00010089f580. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
             *(undefined1 *)(param_2 + 2));
  return;
}



/* Address: 0x10089f584 | FUN_10089f584 */

String FUN_10089f584(undefined8 param_1)

{
  String SVar1;
  
  _swift_bridgeObjectRetain();
  FUN_1000f7830(&DAT_100fe9fa0,&BYTE_100c80f20);
  FUN_1008a3bd0();
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x203b;
  SVar1 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar1);
  _swift_bridgeObjectRelease(param_1);
  return SVar1;
}



/* Address: 0x10089f610 | FUN_10089f610 */

void FUN_10089f610(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  SVar3 = *(String *)(param_2 + 2);
  _swift_bridgeObjectRetain(uVar2);
  SVar4.bridgeObject = &SUB_e200000000000000;
  SVar4.str = (char *)0x203a;
  SVar5.bridgeObject = param_5;
  SVar5.str = param_4;
  Swift::String::append(SVar4,SVar5);
  SVar6.bridgeObject = param_5;
  SVar6.str = param_4;
  Swift::String::append(SVar3,SVar6);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  return;
}



/* Address: 0x10089f678 | FUN_10089f678 */

undefined * FUN_10089f678(long param_1)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 *puVar7;
  
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 != 0) {
    FUN_100892608(0,lVar6,0);
    puVar7 = (undefined8 *)(param_1 + 0x28);
    do {
      uVar1 = puVar7[-1];
      uVar3 = *puVar7;
      uVar2 = *(ulong *)(puVar5 + 0x10);
      uVar4 = *(ulong *)(puVar5 + 0x18);
      _swift_bridgeObjectRetain(uVar3);
      if (uVar4 >> 1 <= uVar2) {
        FUN_100892608(1 < uVar4,uVar2 + 1,1);
      }
      puVar7 = puVar7 + 4;
      *(ulong *)(puVar5 + 0x10) = uVar2 + 1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(puVar5 + uVar2 * 0x10 + 0x28) = uVar3;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  return puVar5;
}



/* Address: 0x10089f744 | FUN_10089f744 */

void FUN_10089f744(void)

{
  return;
}



/* Address: 0x10089f74c | FUN_10089f74c */

void FUN_10089f74c(_StringObject param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  code *pcVar2;
  _StringObject _Var3;
  ulong uVar4;
  ulong uVar5;
  UnsafeBufferPointer<__int8> UVar6;
  ulong *unaff_x20;
  ulong uVar7;
  
  _Var3.unknown = param_1.unknown;
  FUN_100858afc();
  if (((ulong)_Var3.unknown & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10089f980);
    (*pcVar2)();
  }
  uVar7 = *unaff_x20;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  uVar5 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = uVar7;
  if ((uVar5 & 1) == 0) {
    uVar4 = 0;
    thunk_FUN_100880a88(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  uVar7 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar5) {
    uVar7 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    thunk_FUN_100880a88(uVar7,uVar5 + 1,1,uVar4);
  }
  *(ulong *)(uVar7 + 0x10) = uVar5 + 1;
  lVar1 = uVar7 + uVar5 * 0x20;
  *(undefined **)(lVar1 + 0x20) = param_1.unknown;
  *(ulong *)(lVar1 + 0x28) = param_2;
  *(undefined8 *)(lVar1 + 0x30) = param_3;
  *(undefined8 *)(lVar1 + 0x38) = param_4;
  *unaff_x20 = uVar7;
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        UVar6 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      else {
        UVar6.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        param_2 = (ulong)param_1.unknown & 0xffffffffffff;
      }
      if (param_2 != 10) {
        return;
      }
      if ((*UVar6.unknown & 0xdf) != 0x43) {
        return;
      }
      if ((UVar6.unknown[1] & 0xdf) != 0x4f) {
        return;
      }
      if ((UVar6.unknown[2] & 0xdf) != 0x4e) {
        return;
      }
      if ((UVar6.unknown[3] & 0xdf) != 0x4e) {
        return;
      }
      if ((UVar6.unknown[4] & 0xdf) != 0x45) {
        return;
      }
      if ((UVar6.unknown[5] & 0xdf) != 0x43) {
        return;
      }
      if ((UVar6.unknown[6] & 0xdf) != 0x54) {
        return;
      }
      if ((UVar6.unknown[7] & 0xdf) != 0x49) {
        return;
      }
      if ((UVar6.unknown[8] & 0xdf) != 0x4f) {
        return;
      }
      if ((UVar6.unknown[9] & 0xdf) != 0x4e) {
        return;
      }
    }
    else {
      if ((param_2 & 0xf00000000000000) != 0xa00000000000000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf) != 0x43) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf00) != 0x4f00) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf0000) != 0x4e0000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf000000) != 0x4e000000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf00000000) != 0x4500000000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf0000000000) != 0x430000000000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf000000000000) != 0x54000000000000) {
        return;
      }
      if (((ulong)param_1.unknown & 0xdf00000000000000) != 0x4900000000000000) {
        return;
      }
      if ((param_2 & 0xdf) != 0x4f) {
        return;
      }
      if ((param_2 & 0xdf00) != 0x4e00) {
        return;
      }
    }
  }
  else {
    uVar5 = 0x697463656e6e6f63;
    FUN_10089b5c0(0x697463656e6e6f63,0xea00000000006e6f,param_1.unknown,param_2);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  *(undefined1 *)(unaff_x20 + 1) = 2;
  return;
}



/* Address: 0x10089fa04 | FUN_10089fa04 */

void FUN_10089fa04(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  __int64 _Var4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_90 [8];
  long local_88;
  undefined8 local_80;
  long local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar10 = *(long *)(param_2 + -8);
  lVar6 = *(long *)(lVar10 + 0x40);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,
             PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
             PTR___associated_type_descriptor_for_Swift_Sequence_Iterator_100eabd18);
  local_88 = *(long *)(lVar3 + -8);
  lVar7 = *(long *)(local_88 + 0x40);
  lVar8 = *unaff_x20;
  lVar9 = *(long *)(lVar8 + 0x10);
  _Var4 = Swift::Sequence::get_underestimatedCount();
  if (!SCARRY8(lVar9,_Var4)) {
    lVar5 = lVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar5 == 0) || ((long)(*(ulong *)(lVar8 + 0x18) >> 1) < lVar9 + _Var4)) {
      thunk_FUN_100880a88();
      lVar8 = lVar5;
    }
    lVar9 = local_88;
    *unaff_x20 = lVar8;
    (**(code **)(lVar10 + 0x10))(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
    Swift::Sequence::_makeIterator();
    _swift_getAssociatedConformanceWitness
              (param_3,param_2,lVar3,
               PTR___protocol_requirements_base_descriptor_for_Swift_Sequence_100eac2e0,
               PTR___associated_conformance_descriptor_for_Swift_Sequence_Swift_Sequence_Iterator__Swift_IteratorProtocol_100eac2d8
              );
    Swift::IteratorProtocol::_next();
    lVar8 = local_78;
    uVar1 = uStack_68;
    while (lVar8 != 0) {
      local_78 = lVar8;
      uStack_68 = uVar1;
      FUN_10089f74c(local_80,lVar8,local_70,uVar1);
      _swift_bridgeObjectRelease(lVar8);
      _swift_bridgeObjectRelease(uVar1);
      Swift::IteratorProtocol::_next();
      lVar8 = local_78;
      uVar1 = uStack_68;
    }
    (**(code **)(lVar9 + 8))
              ((long)(auStack_90 + -(lVar6 + 0xfU & 0xfffffffffffffff0)) -
               (lVar7 + 0xfU & 0xfffffffffffffff0),lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10089fbd0);
  (*pcVar2)();
}



/* Address: 0x10089fbd0 | FUN_10089fbd0 */

void FUN_10089fbd0(undefined8 param_1,char param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRetain();
  FUN_10089fcfc();
  if (param_2 == '\x02') {
    *(undefined1 *)(unaff_x20 + 8) = 2;
  }
  return;
}



/* Address: 0x10089fc04 | FUN_10089fc04 */

void FUN_10089fc04(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fcf0);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_100880724();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fcf4);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fcf8);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fcfc);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x10089fcfc | FUN_10089fcfc */

void FUN_10089fcfc(long param_1)

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
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fdf8);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    thunk_FUN_100880a88();
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fdfc);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fe00);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fe9540;
    FUN_1000f7830(&DAT_100fe9540,&DAT_100c7fcb0);
    _swift_arrayInitWithCopy(lVar5 + lVar7 * 0x20 + 0x20,param_1 + 0x20,uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10089fe04);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x10089fe04 | FUN_10089fe04 */

String FUN_10089fe04(void)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  String SVar2;
  
  uVar1 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar1);
  FUN_1000f7830(&DAT_100fe9fa0,&BYTE_100c80f20);
  FUN_1008a3bd0();
  SVar2.bridgeObject = &SUB_e200000000000000;
  SVar2.str = (char *)0x203b;
  SVar2 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar2);
  _swift_bridgeObjectRelease(uVar1);
  return SVar2;
}



/* Address: 0x10089fe94 | FUN_10089fe94 */

void FUN_10089fe94(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)(param_1 + 1) = 2;
  return;
}



/* Address: 0x10089fea4 | FUN_10089fea4 */

ulong FUN_10089fea4(long param_1)

{
  return *(ulong *)(param_1 + 0x18) >> 1;
}



/* Address: 0x10089feb0 | FUN_10089feb0 */

void FUN_10089feb0(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar1 = lVar2;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar1 == 0) || ((long)(*(ulong *)(lVar2 + 0x18) >> 1) < param_1)) {
    thunk_FUN_100880a88();
    lVar2 = lVar1;
  }
  *unaff_x20 = lVar2;
  return;
}



/* Address: 0x10089ff10 | FUN_10089ff10 */

undefined8 FUN_10089ff10(ulong param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10089ff70);
    (*pcVar3)();
  }
  if (param_1 < *(ulong *)(param_2 + 0x10)) {
    param_2 = param_2 + param_1 * 0x20;
    uVar1 = *(undefined8 *)(param_2 + 0x20);
    uVar2 = *(undefined8 *)(param_2 + 0x38);
    _swift_bridgeObjectRetain(*(undefined8 *)(param_2 + 0x28));
    _swift_bridgeObjectRetain(uVar2);
    return uVar1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10089ff74);
  (*pcVar3)();
}



/* Address: 0x10089ff74 | FUN_10089ff74 */

void FUN_10089ff74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1008a4104();
  *param_1 = uVar1;
  return;
}



/* Address: 0x10089ff9c | FUN_10089ff9c */

void FUN_10089ff9c(undefined8 *param_1,undefined8 *param_2,undefined4 param_3,undefined8 *param_4)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1008a4138(uVar1,param_3,*param_4);
  *param_1 = uVar1;
  *(char *)(param_1 + 1) = (char)param_3;
  return;
}



/* Address: 0x10089ffcc | FUN_10089ffcc */

void FUN_10089ffcc(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1008a2d38(*param_1,*param_2);
  return;
}



/* Address: 0x10089ffd8 | FUN_10089ffd8 */

undefined1  [16] FUN_10089ffd8(undefined8 *param_1,ulong *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  long *unaff_x20;
  undefined1 auVar7 [16];
  
  uVar6 = *param_2;
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008a0048);
    (*pcVar5)();
  }
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x10)) {
    lVar1 = *unaff_x20 + uVar6 * 0x20;
    uVar3 = *(undefined8 *)(lVar1 + 0x28);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    uVar4 = *(undefined8 *)(lVar1 + 0x38);
    *param_1 = *(undefined8 *)(lVar1 + 0x20);
    param_1[1] = uVar3;
    param_1[2] = uVar2;
    param_1[3] = uVar4;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
    auVar7._8_8_ = param_1;
    auVar7._0_8_ = FUN_1008a004c;
    return auVar7;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1008a004c);
  (*pcVar5)();
}



/* Address: 0x1008a004c | FUN_1008a004c */

void FUN_1008a004c(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1008a0078 | FUN_1008a0078 */

void FUN_1008a0078(long *param_1,long *param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  if (-1 < *param_2) {
    lVar4 = param_2[1];
    lVar3 = *unaff_x20;
    if (lVar4 <= *(long *)(lVar3 + 0x10)) {
      lVar1 = unaff_x20[1];
      *param_1 = *param_2;
      param_1[1] = lVar4;
      param_1[2] = lVar3;
      *(char *)(param_1 + 3) = (char)lVar1;
      _swift_bridgeObjectRetain();
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008a00ac);
  (*pcVar2)();
}



/* Address: 0x1008a00ac | FUN_1008a00ac */

void FUN_1008a00ac(long *param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar1 = unaff_x20[1];
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  *param_1 = *unaff_x20;
  *(char *)(param_1 + 1) = (char)lVar1;
  param_1[2] = 0;
  param_1[3] = lVar2;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1008a00c8 | FUN_1008a00c8 */

void FUN_1008a00c8(undefined8 *param_1)

{
  undefined1 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  *param_1 = *unaff_x20;
  *(undefined1 *)(param_1 + 1) = uVar1;
  param_1[2] = 0;
  return;
}



/* Address: 0x1008a00e0 | FUN_1008a00e0 */

void FUN_1008a00e0(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008a00ec(*unaff_x20,*(undefined1 *)(unaff_x20 + 1));
  return;
}



/* Address: 0x1008a00ec | FUN_1008a00ec */

undefined8 * FUN_1008a00ec(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_48 [3];
  
  puVar4 = *(undefined8 **)(param_1 + 0x10);
  if (puVar4 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(param_1);
    puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    puVar2 = puVar4;
    FUN_1008a16a4(puVar4,0,&DAT_100fea230,&DAT_100c81690);
    puVar3 = local_48;
    FUN_1008a0194(puVar3,puVar2 + 4,puVar4,param_1,param_2);
    _swift_bridgeObjectRelease(local_48[0]);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0160);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Address: 0x1008a0188 | FUN_1008a0188 */

void FUN_1008a0188(void)

{
  FUN_1008a0194();
  return;
}



/* Address: 0x1008a0194 | FUN_1008a0194 */

ulong FUN_1008a0194(long *param_1,undefined8 *param_2,ulong param_3,long param_4,undefined1 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  
  if (param_2 != (undefined8 *)0x0) {
    uVar6 = param_3;
    if (param_3 == 0) goto LAB_1008a0244;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a0278);
      (*pcVar4)();
    }
    uVar5 = *(ulong *)(param_4 + 0x10);
    if (uVar5 != 0) {
      uVar6 = 0;
      puVar7 = (undefined8 *)(param_4 + 0x38);
      do {
        if (uVar5 <= uVar6) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008a0274);
          (*pcVar4)();
        }
        uVar1 = puVar7[-1];
        uVar2 = *puVar7;
        uVar3 = puVar7[-2];
        *param_2 = puVar7[-3];
        param_2[1] = uVar3;
        param_2[2] = uVar1;
        param_2[3] = uVar2;
        if (param_3 - 1 == uVar6) {
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar2);
          uVar6 = param_3;
          break;
        }
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar2);
        uVar5 = *(ulong *)(param_4 + 0x10);
        uVar6 = uVar6 + 1;
        puVar7 = puVar7 + 4;
        param_2 = param_2 + 4;
      } while (uVar6 != uVar5);
      goto LAB_1008a0244;
    }
  }
  uVar6 = 0;
LAB_1008a0244:
  *param_1 = param_4;
  *(undefined1 *)(param_1 + 1) = param_5;
  param_1[2] = uVar6;
  return uVar6;
}



/* Address: 0x1008a0278 | FUN_1008a0278 */

void FUN_1008a0278(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1008a2348(*param_1,*(undefined1 *)(param_1 + 1),*param_2,*(undefined1 *)(param_2 + 1));
  return;
}



/* Address: 0x1008a0290 | FUN_1008a0290 */

bool FUN_1008a0290(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  
  _Var2.unknown = (undefined *)*param_1;
  _Var4.unknown = (undefined *)param_1[1];
  puVar3 = (undefined *)*param_2;
  puVar5 = (undefined *)param_2[1];
  FUN_1008a1014();
  FUN_1008a1014();
  if (_Var2.unknown == puVar3 && _Var4.unknown == puVar5) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var4,(_StringComparisonResult)(__int8)puVar3);
  }
  _swift_bridgeObjectRelease(_Var4.unknown);
  _swift_bridgeObjectRelease(puVar5);
  return bVar1;
}



/* Address: 0x1008a0320 | FUN_1008a0320 */

void FUN_1008a0320(undefined2 param_1)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 2) = param_1;
  return;
}



/* Address: 0x1008a0328 | FUN_1008a0328 */

void FUN_1008a0328(ulong param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0340);
    (*pcVar1)();
  }
  if (param_1 >> 0x10 == 0) {
    *(short *)(unaff_x20 + 2) = (short)param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0344);
  (*pcVar1)();
}



/* Address: 0x1008a0344 | FUN_1008a0344 */

undefined1  [16] FUN_1008a0344(ulong *param_1)

{
  ulong unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = (ulong)*(ushort *)(unaff_x20 + 2);
  param_1[1] = unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1008a035c;
  return auVar1;
}



/* Address: 0x1008a035c | FUN_1008a035c */

void FUN_1008a035c(ulong *param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0394);
      (*pcVar1)();
    }
    if (uVar2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0398);
      (*pcVar1)();
    }
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0390);
      (*pcVar1)();
    }
    if (uVar2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0374);
      (*pcVar1)();
    }
  }
  *(short *)(param_1[1] + 2) = (short)uVar2;
  return;
}



/* Address: 0x1008a0398 | FUN_1008a0398 */

void FUN_1008a0398(ulong param_1)

{
  code *pcVar1;
  undefined2 *unaff_x20;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a03b0);
    (*pcVar1)();
  }
  if (param_1 >> 0x10 == 0) {
    *unaff_x20 = (short)param_1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a03b4);
  (*pcVar1)();
}



/* Address: 0x1008a03b4 | FUN_1008a03b4 */

undefined1  [16] FUN_1008a03b4(ulong *param_1)

{
  ushort *unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = (ulong)*unaff_x20;
  param_1[1] = (ulong)unaff_x20;
  auVar1._8_8_ = param_1;
  auVar1._0_8_ = FUN_1008a03cc;
  return auVar1;
}



/* Address: 0x1008a03cc | FUN_1008a03cc */

void FUN_1008a03cc(ulong *param_1,uint param_2)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = *param_1;
  if ((param_2 & 1) == 0) {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0404);
      (*pcVar1)();
    }
    if (uVar2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0408);
      (*pcVar1)();
    }
  }
  else {
    if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a0400);
      (*pcVar1)();
    }
    if (uVar2 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a03e4);
      (*pcVar1)();
    }
  }
  *(short *)param_1[1] = (short)uVar2;
  return;
}



/* Address: 0x1008a0408 | FUN_1008a0408 */

undefined8 FUN_1008a0408(void)

{
  return 0x30000;
}



/* Address: 0x1008a0410 | FUN_1008a0410 */

undefined8 FUN_1008a0410(void)

{
  return 0x20000;
}



/* Address: 0x1008a0418 | FUN_1008a0418 */

bool FUN_1008a0418(int param_1,int param_2)

{
  return param_1 == param_2;
}



/* Address: 0x1008a0424 | FUN_1008a0424 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16] FUN_1008a0424(ulong param_1,undefined8 param_2,char *param_3,undefined1 *param_4)

{
  undefined1 in_ZR;
  undefined1 in_CY;
  char *pcVar1;
  Hasher HVar2;
  char *pcVar3;
  byte *UNRECOVERED_JUMPTABLE;
  Hasher unaff_x20;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  String SVar28;
  
  pcVar1 = (char *)0x2064696c61766e69;
  HVar2.unknown = (byte *)0xeb000000004c5255;
  pcVar3 = (char *)(param_1 & 0xff);
  UNRECOVERED_JUMPTABLE = &switchD_1008a045c::switchdataD_100c80e68;
  switch(pcVar3) {
  default:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0xd8:
  case (char *)0xe6:
    pcVar3 = pcVar3 + 0x300;
switchD_1008a045c_caseD_4a:
switchD_1008a045c_caseD_77:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_46:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_4b:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_95:
    pcVar1 = pcVar3 + 0x12;
switchD_1008a045c_caseD_e0:
    auVar17._8_8_ = HVar2.unknown;
    auVar17._0_8_ = pcVar1;
    return auVar17;
  case (char *)0x1:
  case (char *)0xb0:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x41:
  case (char *)0x5b:
    pcVar3 = pcVar3 + 0x2c0;
switchD_1008a045c_caseD_2c:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_81:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_1d:
    pcVar1 = (char *)((ulong)pcVar3 | 0xd000000000000002);
switchD_1008a045c_caseD_2d:
    auVar11._8_8_ = HVar2.unknown;
    auVar11._0_8_ = pcVar1;
    return auVar11;
  case (char *)0x2:
  case (char *)0x49:
  case (char *)0x5d:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0xcd:
    pcVar3 = pcVar3 + 0x2b0;
switchD_1008a045c_caseD_1c:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_98:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_40:
    pcVar3 = (char *)0xd000000000000014;
switchD_1008a045c_caseD_24:
    pcVar1 = pcVar3 + 0xe;
switchD_1008a045c_caseD_86:
    auVar8._8_8_ = HVar2.unknown;
    auVar8._0_8_ = pcVar1;
    return auVar8;
  case (char *)0x3:
  case (char *)0xa2:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x30:
    pcVar3 = pcVar3 + 0x260;
switchD_1008a045c_caseD_1a:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_84:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_27:
    pcVar1 = (char *)(((ulong)pcVar3 | 0xd000000000000000) + 0x19);
switchD_1008a045c_caseD_1b:
    auVar9._8_8_ = HVar2.unknown;
    auVar9._0_8_ = pcVar1;
    return auVar9;
  case (char *)0x4:
  case (char *)0x33:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0xa5:
  case (char *)0xbc:
    pcVar3 = pcVar3 + 0x240;
switchD_1008a045c_caseD_3a:
    HVar2.unknown = (undefined *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
switchD_1008a045c_caseD_28:
    pcVar3 = (char *)0x23;
switchD_1008a045c_caseD_ae:
    UNRECOVERED_JUMPTABLE = (byte *)0x14;
switchD_1008a045c_caseD_44:
    pcVar1 = (char *)((ulong)UNRECOVERED_JUMPTABLE | 0xd000000000000000 | (ulong)pcVar3);
switchD_1008a045c_caseD_26:
    auVar6._8_8_ = HVar2.unknown;
    auVar6._0_8_ = pcVar1;
    return auVar6;
  case (char *)0x5:
  case (char *)0x36:
    pcVar1 = (char *)0x14;
  case (char *)0x82:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffffffff | 0xd000000000000000);
switchD_1008a045c_caseD_38:
    pcVar3 = "invalid HTTP version";
switchD_1008a045c_caseD_45:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_7f:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_2e:
    auVar13._8_8_ = HVar2.unknown;
    auVar13._0_8_ = pcVar1;
    return auVar13;
  case (char *)0x6:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x3e:
    pcVar3 = pcVar3 + 0x200;
switchD_1008a045c_caseD_79:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_32:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_5e:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_4e:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_7d:
    pcVar1 = pcVar3 + 4;
switchD_1008a045c_caseD_4f:
    auVar16._8_8_ = HVar2.unknown;
    auVar16._0_8_ = pcVar1;
    return auVar16;
  case (char *)0x7:
  case (char *)0x63:
  case (char *)0x97:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x1f:
    pcVar3 = pcVar3 + 0x1c0;
switchD_1008a045c_caseD_19:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_a6:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_37:
    pcVar1 = (char *)(((ulong)pcVar3 | 0xd000000000000000) - 1);
switchD_1008a045c_caseD_29:
    auVar10._8_8_ = HVar2.unknown;
    auVar10._0_8_ = pcVar1;
    return auVar10;
  case (char *)0x8:
    goto switchD_1008a045c_caseD_8;
  case (char *)0x9:
  case (char *)0x52:
    HVar2.unknown = (byte *)0x74736f68;
  case (char *)0x23:
    HVar2.unknown = (undefined *)((ulong)HVar2.unknown & 0xffffffffffff | 0xec00000000000000);
switchD_1008a045c_caseD_91:
    auVar7._8_8_ = HVar2.unknown;
    auVar7._0_8_ = 0x2064696c61766e69;
    return auVar7;
  case (char *)0xa:
    HVar2.unknown = (byte *)0x74726f70;
  case (char *)0x87:
    auVar18._8_8_ = (ulong)HVar2.unknown & 0xffffffffffff | 0xec00000000000000;
    auVar18._0_8_ = 0x2064696c61766e69;
    return auVar18;
  case (char *)0xb:
  case (char *)0x3b:
  case (char *)0x62:
    HVar2.unknown = (byte *)0x6170;
  case (char *)0xab:
    HVar2.unknown = (undefined *)((ulong)HVar2.unknown & 0xffffffff0000ffff | 0x68740000);
switchD_1008a045c_caseD_3c:
    HVar2.unknown = (undefined *)((ulong)HVar2.unknown & 0xffffffffffff | 0xec00000000000000);
switchD_1008a045c_caseD_75:
    auVar5._8_8_ = HVar2.unknown;
    auVar5._0_8_ = 0x2064696c61766e69;
    return auVar5;
  case (char *)0xc:
  case (char *)0x58:
  case (char *)0x99:
    pcVar1 = (char *)0x14;
  case (char *)0x39:
    pcVar1 = (char *)((ulong)pcVar1 & 0xffffffffffff | 0xd000000000000000);
    pcVar3 = "unknown (http_parser error)";
switchD_1008a045c_caseD_48:
    pcVar3 = pcVar3 + 0x1c0;
switchD_1008a045c_caseD_60:
    goto switchD_1008a045c_caseD_45;
  case (char *)0xd:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x53:
    pcVar3 = pcVar3 + 0x1a0;
switchD_1008a045c_caseD_78:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_2f:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_34:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_85:
    pcVar1 = pcVar3 + -4;
switchD_1008a045c_caseD_35:
    auVar15._8_8_ = HVar2.unknown;
    auVar15._0_8_ = pcVar1;
    return auVar15;
  case (char *)0xe:
  case (char *)0x9b:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x50:
    pcVar3 = pcVar3 + 0x180;
switchD_1008a045c_caseD_8f:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_2b:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_51:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_61:
    pcVar1 = (char *)((ulong)pcVar3 | 1);
switchD_1008a045c_caseD_42:
    auVar14._8_8_ = HVar2.unknown;
    auVar14._0_8_ = pcVar1;
    return auVar14;
  case (char *)0xf:
  case (char *)0x21:
    pcVar3 = "invalid character in header";
  case (char *)0x31:
  case (char *)0x6c:
  case (char *)0x83:
switchD_1008a045c_caseD_83:
    pcVar3 = pcVar3 + -0x20;
switchD_1008a045c_caseD_6b:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
    pcVar3 = (char *)0xd000000000000014;
switchD_1008a045c_caseD_7c:
    pcVar1 = pcVar3 + 7;
switchD_1008a045c_caseD_8:
    auVar21._8_8_ = HVar2.unknown;
    auVar21._0_8_ = pcVar1;
    return auVar21;
  case (char *)0x10:
  case (char *)0x6f:
  case (char *)0xa8:
  case (char *)0xd6:
  case (char *)0xfe:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x43:
  case (char *)0xce:
  case (char *)0xf6:
    pcVar3 = pcVar3 + 0x110;
switchD_1008a045c_caseD_3d:
    HVar2.unknown = (undefined *)((ulong)pcVar3 | 0x8000000000000000);
switchD_1008a045c_caseD_a1:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_4d:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_64:
    pcVar1 = pcVar3 + 0x16;
switchD_1008a045c_caseD_47:
    auVar4._8_8_ = HVar2.unknown;
    auVar4._0_8_ = pcVar1;
    return auVar4;
  case (char *)0x11:
  case (char *)0xa7:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x25:
    pcVar3 = pcVar3 + 0x100;
  case (char *)0x9f:
switchD_1008a045c_caseD_9f:
    HVar2.unknown = (undefined *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_c0:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_8a:
    auVar19._8_8_ = HVar2.unknown;
    auVar19._0_8_ = pcVar3 + 0xc;
    return auVar19;
  case (char *)0x12:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x4c:
  case (char *)0x5c:
    pcVar3 = pcVar3 + 0xd0;
    goto switchD_1008a045c_caseD_77;
  case (char *)0x13:
  case (char *)0x6a:
    pcVar3 = "invalid constant string";
  case (char *)0x7b:
    HVar2.unknown = (undefined *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_67:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_8b:
    auVar20._0_8_ = (ulong)pcVar3 | 3;
    auVar20._8_8_ = HVar2.unknown;
    return auVar20;
  case (char *)0x14:
  case (char *)0x1e:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x7a:
    pcVar3 = pcVar3 + 0x70;
switchD_1008a045c_caseD_2a:
    HVar2.unknown = (undefined *)((ulong)(pcVar3 + -0x20) | 0x8000000000000000);
switchD_1008a045c_caseD_22:
    pcVar3 = (char *)0x14;
switchD_1008a045c_caseD_9e:
    pcVar3 = (char *)((ulong)pcVar3 | 0xd000000000000000);
switchD_1008a045c_caseD_20:
    pcVar1 = pcVar3 + 0x1c;
switchD_1008a045c_caseD_68:
    auVar12._8_8_ = HVar2.unknown;
    auVar12._0_8_ = pcVar1;
    return auVar12;
  case (char *)0x15:
    pcVar3 = "unknown (http_parser error)";
  case (char *)0x3f:
  case (char *)0x69:
    pcVar3 = pcVar3 + 0x50;
    goto switchD_1008a045c_caseD_8f;
  case (char *)0x16:
  case (char *)0x74:
    pcVar3 = "paused (swift-http-parser error)";
    goto switchD_1008a045c_caseD_9f;
  case (char *)0x17:
    pcVar3 = "unknown (http_parser error)";
    goto switchD_1008a045c_caseD_83;
  case (char *)0x19:
    goto switchD_1008a045c_caseD_19;
  case (char *)0x1a:
    goto switchD_1008a045c_caseD_1a;
  case (char *)0x1b:
    goto switchD_1008a045c_caseD_1b;
  case (char *)0x1c:
  case (char *)0xf5:
    goto switchD_1008a045c_caseD_1c;
  case (char *)0x1d:
  case (char *)0x73:
  case (char *)0xee:
    goto switchD_1008a045c_caseD_1d;
  case (char *)0x20:
    goto switchD_1008a045c_caseD_20;
  case (char *)0x22:
    goto switchD_1008a045c_caseD_22;
  case (char *)0x24:
    goto switchD_1008a045c_caseD_24;
  case (char *)0x26:
    goto switchD_1008a045c_caseD_26;
  case (char *)0x27:
  case (char *)0x56:
    goto switchD_1008a045c_caseD_27;
  case (char *)0x28:
  case (char *)0x5f:
    goto switchD_1008a045c_caseD_28;
  case (char *)0x29:
    goto switchD_1008a045c_caseD_29;
  case (char *)0x2a:
  case (char *)0x65:
    goto switchD_1008a045c_caseD_2a;
  case (char *)0x2b:
    goto switchD_1008a045c_caseD_2b;
  case (char *)0x2c:
    goto switchD_1008a045c_caseD_2c;
  case (char *)0x2d:
    goto switchD_1008a045c_caseD_2d;
  case (char *)0x2e:
    goto switchD_1008a045c_caseD_2e;
  case (char *)0x2f:
  case (char *)0x5a:
    goto switchD_1008a045c_caseD_2f;
  case (char *)0x32:
    goto switchD_1008a045c_caseD_32;
  case (char *)0x34:
    goto switchD_1008a045c_caseD_34;
  case (char *)0x35:
  case (char *)0x66:
    goto switchD_1008a045c_caseD_35;
  case (char *)0x37:
  case (char *)0x57:
    goto switchD_1008a045c_caseD_37;
  case (char *)0x38:
    goto switchD_1008a045c_caseD_38;
  case (char *)0x3a:
    goto switchD_1008a045c_caseD_3a;
  case (char *)0x3c:
    goto switchD_1008a045c_caseD_3c;
  case (char *)0x3d:
    goto switchD_1008a045c_caseD_3d;
  case (char *)0x40:
  case (char *)0x6d:
  case (char *)0xca:
  case (char *)0xde:
  case (char *)0xf2:
    goto switchD_1008a045c_caseD_40;
  case (char *)0x42:
    goto switchD_1008a045c_caseD_42;
  case (char *)0x44:
    goto switchD_1008a045c_caseD_44;
  case (char *)0x45:
  case (char *)0x59:
    goto switchD_1008a045c_caseD_45;
  case (char *)0x46:
    goto switchD_1008a045c_caseD_46;
  case (char *)0x47:
  case (char *)0xc4:
    goto switchD_1008a045c_caseD_47;
  case (char *)0x48:
    goto switchD_1008a045c_caseD_48;
  case (char *)0x4a:
    goto switchD_1008a045c_caseD_4a;
  case (char *)0x4b:
  case (char *)0x72:
    goto switchD_1008a045c_caseD_4b;
  case (char *)0x4d:
  case (char *)0xba:
  case (char *)0xc2:
    goto switchD_1008a045c_caseD_4d;
  case (char *)0x4e:
    goto switchD_1008a045c_caseD_4e;
  case (char *)0x4f:
    goto switchD_1008a045c_caseD_4f;
  case (char *)0x51:
    goto switchD_1008a045c_caseD_51;
  case (char *)0x54:
    goto switchD_1008a045c_caseD_54;
  case (char *)0x5e:
    goto switchD_1008a045c_caseD_5e;
  case (char *)0x60:
  case (char *)0x9a:
    goto switchD_1008a045c_caseD_60;
  case (char *)0x61:
  case (char *)0x8e:
    goto switchD_1008a045c_caseD_61;
  case (char *)0x64:
    goto switchD_1008a045c_caseD_64;
  case (char *)0x67:
    goto switchD_1008a045c_caseD_67;
  case (char *)0x68:
    goto switchD_1008a045c_caseD_68;
  case (char *)0x6b:
    goto switchD_1008a045c_caseD_6b;
  case (char *)0x6e:
    goto switchD_1008a045c_caseD_6e;
  case (char *)0x70:
    FUN_1008a0424();
    auVar22._8_8_ = HVar2.unknown;
    auVar22._0_8_ = pcVar1;
    return auVar22;
  case (char *)0x71:
  case (char *)0xc9:
  case (char *)0xdd:
  case (char *)0xf1:
    goto switchD_1008a045c_caseD_71;
  case (char *)0x75:
    goto switchD_1008a045c_caseD_75;
  case (char *)0x77:
    goto switchD_1008a045c_caseD_77;
  case (char *)0x78:
    goto switchD_1008a045c_caseD_78;
  case (char *)0x79:
    goto switchD_1008a045c_caseD_79;
  case (char *)0x7c:
    goto switchD_1008a045c_caseD_7c;
  case (char *)0x7d:
    goto switchD_1008a045c_caseD_7d;
  case (char *)0x7e:
  case (char *)0x94:
    in_CY = &DAT_0000003a < param_4;
    in_ZR = param_4 == (undefined1 *)0x3b;
    unaff_x20.unknown = pcVar1;
switchD_1008a045c_caseD_6e:
    if ((bool)in_CY && !(bool)in_ZR) {
      Swift::Hasher::_combine(0,(Hasher)0xeb000000004c5255);
      Swift::Hasher::_combine(0xeb000000004c5255,HVar2);
      SVar28.bridgeObject = param_4;
      SVar28.str = param_3;
      Swift::String::hash(unaff_x20,SVar28);
      auVar27._8_8_ = param_3;
      auVar27._0_8_ = unaff_x20.unknown;
      return auVar27;
    }
    pcVar3 = "";
switchD_1008a045c_caseD_96:
    UNRECOVERED_JUMPTABLE = (byte *)((ulong)(byte)(pcVar3 + 0xe80)[(long)param_4] * 4 + 0x1008a0710)
    ;
switchD_1008a070c_switchD:
                    /* WARNING: Could not recover jumptable at 0x0001008a070c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)UNRECOVERED_JUMPTABLE)();
    auVar25._8_8_ = HVar2.unknown;
    auVar25._0_8_ = pcVar1;
    return auVar25;
  case (char *)0x7f:
    goto switchD_1008a045c_caseD_7f;
  case (char *)0x80:
    pcVar1 = pcVar3;
    HVar2.unknown = UNRECOVERED_JUMPTABLE;
switchD_1008a045c_caseD_71:
    FUN_1008a2878(pcVar1,HVar2.unknown);
    auVar24._8_8_ = HVar2.unknown;
    auVar24._0_8_ = pcVar1;
    return auVar24;
  case (char *)0x81:
    goto switchD_1008a045c_caseD_81;
  case (char *)0x84:
    goto switchD_1008a045c_caseD_84;
  case (char *)0x85:
    goto switchD_1008a045c_caseD_85;
  case (char *)0x86:
    goto switchD_1008a045c_caseD_86;
  case (char *)0x88:
    FUN_1008a2878();
    auVar23._8_8_ = HVar2.unknown;
    auVar23._0_8_ = pcVar1;
    return auVar23;
  case (char *)0x89:
    goto switchD_1008a045c_caseD_89;
  case (char *)0x8a:
    goto switchD_1008a045c_caseD_8a;
  case (char *)0x8b:
    goto switchD_1008a045c_caseD_8b;
  case (char *)0x8c:
    break;
  case (char *)0x8d:
    break;
  case (char *)0x8f:
    goto switchD_1008a045c_caseD_8f;
  case (char *)0x90:
    break;
  case (char *)0x91:
    goto switchD_1008a045c_caseD_91;
  case (char *)0x92:
    break;
  case (char *)0x93:
    break;
  case (char *)0x95:
    goto switchD_1008a045c_caseD_95;
  case (char *)0x96:
    goto switchD_1008a045c_caseD_96;
  case (char *)0x98:
    goto switchD_1008a045c_caseD_98;
  case (char *)0x9c:
    break;
  case (char *)0x9d:
    break;
  case (char *)0x9e:
    goto switchD_1008a045c_caseD_9e;
  case (char *)0xa0:
    break;
  case (char *)0xa1:
    goto switchD_1008a045c_caseD_a1;
  case (char *)0xa3:
    goto switchD_1008a070c_switchD;
  case (char *)0xa4:
    break;
  case (char *)0xa6:
    goto switchD_1008a045c_caseD_a6;
  case (char *)0xa9:
    break;
  case (char *)0xaa:
    break;
  case (char *)0xac:
  case (char *)0xe1:
    break;
  case (char *)0xad:
    break;
  case (char *)0xae:
    goto switchD_1008a045c_caseD_ae;
  case (char *)0xaf:
    break;
  case (char *)0xb1:
    break;
  case (char *)0xb8:
    pcVar1 = (char *)0xb;
    break;
  case (char *)0xb9:
    break;
  case (char *)0xc0:
    goto switchD_1008a045c_caseD_c0;
  case (char *)0xc1:
  case (char *)0xed:
    pcVar1 = &DAT_00000030;
switchD_1008a045c_caseD_89:
    break;
  case (char *)0xc8:
    break;
  case (char *)0xcc:
    pcVar1 = (char *)0x22;
    break;
  case (char *)0xdc:
    break;
  case (char *)0xe0:
    goto switchD_1008a045c_caseD_e0;
  case (char *)0xe2:
  case (char *)0xf0:
    break;
  case (char *)0xe3:
    break;
  case (char *)0xec:
    pcVar1 = &DAT_00000001;
switchD_1008a045c_caseD_54:
  }
  Swift::Hasher::_combine((__uint64)pcVar1,(Hasher)0xeb000000004c5255);
  auVar26._8_8_ = HVar2.unknown;
  auVar26._0_8_ = pcVar1;
  return auVar26;
}



/* Address: 0x1008a06b4 | FUN_1008a06b4 */

void FUN_1008a06b4(void)

{
  undefined1 *unaff_x20;
  
  FUN_1008a0424(*unaff_x20);
  return;
}



/* Address: 0x1008a06bc | switchD_1008a045c::caseD_88 */

void switchD_1008a045c::caseD_88(void)

{
  FUN_1008a2878();
  return;
}



/* Address: 0x1008a06c0 | FUN_1008a06c0 */

void FUN_1008a06c0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1008a2878(*param_1,param_1[1],param_1[2],*param_2,param_2[1],param_2[2]);
  return;
}



/* Address: 0x1008a06dc | switchD_1008a045c::caseD_7e */

void switchD_1008a045c::caseD_7e(Hasher param_1,Hasher param_2,char *param_3,void *param_4)

{
  __uint64 _Var1;
  Hasher HVar2;
  String SVar3;
  
  switch(param_4) {
  case (void *)0x0:
    _Var1 = 1;
    break;
  case (void *)0x1:
    _Var1 = 2;
    break;
  case (void *)0x2:
    _Var1 = 3;
    break;
  case (void *)0x3:
    _Var1 = 4;
    break;
  case (void *)0x4:
    _Var1 = 5;
    break;
  case (void *)0x5:
    _Var1 = 6;
    break;
  case (void *)0x6:
    _Var1 = 7;
    break;
  case (void *)0x7:
    _Var1 = 8;
    break;
  case (void *)0x8:
    _Var1 = 9;
    break;
  case (void *)0x9:
    _Var1 = 10;
    break;
  case (void *)0xa:
    _Var1 = 0xb;
    break;
  case (void *)0xb:
    _Var1 = 0xc;
    break;
  case (void *)0xc:
    _Var1 = 0xd;
    break;
  case (void *)0xd:
    _Var1 = 0xe;
    break;
  case (void *)0xe:
    _Var1 = 0xf;
    break;
  case (void *)0xf:
    _Var1 = 0x10;
    break;
  case (void *)0x10:
    _Var1 = 0x11;
    break;
  case (void *)0x11:
    _Var1 = 0x12;
    break;
  case (void *)0x12:
    _Var1 = 0x13;
    break;
  case (void *)0x13:
    _Var1 = 0x14;
    break;
  case (void *)0x14:
    _Var1 = 0x15;
    break;
  case (void *)0x15:
    _Var1 = 0x16;
    break;
  case (void *)0x16:
    _Var1 = 0x17;
    break;
  case (void *)0x17:
    _Var1 = 0x18;
    break;
  case (void *)0x18:
    _Var1 = 0x19;
    break;
  case (void *)0x19:
    _Var1 = 0x1a;
    break;
  case (void *)0x1a:
    _Var1 = 0x1b;
    break;
  case (void *)0x1b:
    _Var1 = 0x1c;
    break;
  case (void *)0x1c:
    _Var1 = 0x1d;
    break;
  case (void *)0x1d:
    _Var1 = 0x1e;
    break;
  case (void *)0x1e:
    _Var1 = 0x1f;
    break;
  case (void *)0x1f:
    _Var1 = 0x20;
    break;
  case (void *)0x20:
    _Var1 = 0x21;
    break;
  case (void *)0x21:
    _Var1 = 0x22;
    break;
  case (void *)0x22:
    _Var1 = 0x23;
    break;
  case (void *)0x23:
    _Var1 = 0x24;
    break;
  case (void *)0x24:
    _Var1 = 0x25;
    break;
  case (void *)0x25:
    _Var1 = 0x26;
    break;
  case (void *)0x26:
    _Var1 = 0x27;
    break;
  case (void *)0x27:
    _Var1 = 0x28;
    break;
  case (void *)0x28:
    _Var1 = 0x29;
    break;
  case (void *)0x29:
    _Var1 = 0x2a;
    break;
  case (void *)0x2a:
    _Var1 = 0x2b;
    break;
  case (void *)0x2b:
    _Var1 = 0x2c;
    break;
  case (void *)0x2c:
    _Var1 = 0x2d;
    break;
  case (void *)0x2d:
    _Var1 = 0x2e;
    break;
  case (void *)0x2e:
    _Var1 = 0x2f;
    break;
  case (void *)0x2f:
    _Var1 = 0x30;
    break;
  case (void *)0x30:
    _Var1 = 0x31;
    break;
  case (void *)0x31:
    _Var1 = 0x32;
    break;
  case (void *)0x32:
    _Var1 = 0x33;
    break;
  case (void *)0x33:
    _Var1 = 0x34;
    break;
  case (void *)0x34:
    _Var1 = 0x35;
    break;
  case (void *)0x35:
    _Var1 = 0x36;
    break;
  case (void *)0x36:
    _Var1 = 0x37;
    break;
  case (void *)0x37:
    _Var1 = 0x38;
    break;
  case (void *)0x38:
    _Var1 = 0x39;
    break;
  case (void *)0x39:
    _Var1 = 0x3a;
    break;
  case (void *)0x3a:
    _Var1 = 0x3b;
    break;
  case (void *)0x3b:
    _Var1 = 0x3c;
    break;
  default:
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(0,param_2);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar2);
    SVar3.bridgeObject = param_4;
    SVar3.str = param_3;
    Swift::String::hash(param_1,SVar3);
    return;
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x1008a0938 | FUN_1008a0938 */

void FUN_1008a0938(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  switchD_1008a045c::caseD_7e(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}


