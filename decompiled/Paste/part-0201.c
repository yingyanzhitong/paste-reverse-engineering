/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10024dfcc | FUN_10024dfcc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10024dfcc(void)

{
  return ZEXT816(0x100fb8478);
}



/* Address: 0x10024dfec | FUN_10024dfec */

undefined8 FUN_10024dfec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb7f78;
  FUN_1000037f0(&DAT_100fb7f78,&DAT_100c37ab0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10024e03c | FUN_10024e03c */

undefined2 * FUN_10024e03c(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x10024e088 | FUN_10024e088 */

undefined1 * FUN_10024e088(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Address: 0x10024e10c | FUN_10024e10c */

void FUN_10024e10c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
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
  return;
}



/* Address: 0x10024e120 | FUN_10024e120 */

undefined2 * FUN_10024e120(undefined2 *param_1,undefined2 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 8) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x14) = *(undefined8 *)(param_2 + 0x14);
  return param_1;
}



/* Address: 0x10024e174 | FUN_10024e174 */

int FUN_10024e174(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10024e1bc | FUN_10024e1bc */

void FUN_10024e1bc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10024e208 | FUN_10024e208 */

undefined1  [16] FUN_10024e208(void)

{
  return ZEXT816(0x100ec3e78);
}



/* Address: 0x10024e218 | FUN_10024e218 */

int FUN_10024e218(byte *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (param_2 == 0) {
    return 0;
  }
  if (0xfd < param_2) {
    param_2 = param_2 + 2;
    uVar4 = 2;
    if (0xfffeff < param_2) {
      uVar4 = 4;
    }
    if (param_2 >> 8 < 0xff) {
      uVar4 = 1;
    }
    uVar1 = 0;
    if (0xff < param_2) {
      uVar1 = uVar4;
    }
    if (uVar1 < 2) {
      if ((uVar1 != 0) && (uVar4 = (uint)param_1[1], param_1[1] != 0)) goto LAB_10024e280;
    }
    else if (uVar1 == 2) {
      uVar4 = (uint)*(ushort *)(param_1 + 1);
      if (*(ushort *)(param_1 + 1) != 0) {
LAB_10024e280:
        return ((uint)*param_1 | uVar4 << 8) - 2;
      }
    }
    else {
      uVar4 = *(uint *)(param_1 + 1);
      if (uVar4 != 0) goto LAB_10024e280;
    }
  }
  iVar3 = *param_1 - 2;
  if (*param_1 < 2) {
    iVar3 = -1;
  }
  iVar2 = 0;
  if (1 < iVar3 + 1U) {
    iVar2 = iVar3;
  }
  return iVar2;
}



/* Address: 0x10024e2b4 | FUN_10024e2b4 */

void FUN_10024e2b4(char *param_1,uint param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar1 = param_3 + 2;
  uVar4 = 2;
  if (0xfffeff < uVar1) {
    uVar4 = 4;
  }
  if (uVar1 >> 8 < 0xff) {
    uVar4 = 1;
  }
  uVar3 = 0;
  if (0xff < uVar1) {
    uVar3 = uVar4;
  }
  uVar1 = 0;
  if (0xfd < param_3) {
    uVar1 = uVar3;
  }
  if (param_2 < 0xfe) {
    if (uVar1 < 2) {
      if (uVar1 != 0) {
        param_1[1] = '\0';
        if (param_2 == 0) {
          return;
        }
        goto LAB_10024e33c;
      }
    }
    else if (uVar1 == 2) {
      param_1[1] = '\0';
      param_1[2] = '\0';
    }
    else {
      param_1[1] = '\0';
      param_1[2] = '\0';
      param_1[3] = '\0';
      param_1[4] = '\0';
    }
    if (param_2 != 0) {
LAB_10024e33c:
      *param_1 = (char)param_2 + '\x02';
      return;
    }
  }
  else {
    iVar2 = (param_2 - 0xfe >> 8) + 1;
    *param_1 = (char)(param_2 - 0xfe);
    if (1 < uVar1) {
      if (uVar1 != 2) {
        *(int *)(param_1 + 1) = iVar2;
        return;
      }
      *(short *)(param_1 + 1) = (short)iVar2;
      return;
    }
    if (uVar1 != 0) {
      param_1[1] = (char)iVar2;
      return;
    }
  }
  return;
}



/* Address: 0x10024e36c | FUN_10024e36c */

int FUN_10024e36c(byte *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *param_1) {
    iVar1 = *param_1 - 1;
  }
  return iVar1;
}



/* Address: 0x10024e380 | FUN_10024e380 */

void FUN_10024e380(char *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (char)param_2 + '\x01';
  }
  return;
}



/* Address: 0x10024e390 | FUN_10024e390 */

undefined1  [16] FUN_10024e390(void)

{
  return ZEXT816(0x100ec3f20);
}



/* Address: 0x10024e3a0 | FUN_10024e3a0 */

bool FUN_10024e3a0(char *param_1,char *param_2)

{
  char cVar1;
  
  cVar1 = *param_2;
  if (*param_1 == '\x02') {
    if (cVar1 == '\x02') {
      return true;
    }
  }
  else if (cVar1 != '\x02') {
    return *param_1 == cVar1;
  }
  return false;
}



/* Address: 0x10024e3dc | FUN_10024e3dc */

uint FUN_10024e3dc(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  uStack_48 = param_1[5];
  local_50 = param_1[4];
  uStack_38 = param_2[1];
  uStack_40 = *param_2;
  uStack_28 = param_2[3];
  local_30 = param_2[2];
  uStack_18 = param_2[5];
  uStack_20 = param_2[4];
  FUN_10024e420(&local_70,&uStack_40);
  return uVar1 & 1;
}



/* Address: 0x10024e420 | FUN_10024e420 */

bool FUN_10024e420(char *param_1,char *param_2)

{
  bool bVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  
  if (*param_1 != *param_2) {
    return false;
  }
  if (param_1[1] != param_2[1]) {
    return false;
  }
  _Var3.unknown = *(undefined **)(param_1 + 0x10);
  puVar2 = *(undefined **)(param_2 + 0x10);
  if (_Var3.unknown == (undefined *)0x0) {
    if (puVar2 != (undefined *)0x0) {
      return false;
    }
  }
  else {
    if (puVar2 == (undefined *)0x0) {
      return false;
    }
    if (((*(undefined **)(param_1 + 8) != *(undefined **)(param_2 + 8)) || (_Var3.unknown != puVar2)
        ) && (bVar1 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)*(undefined **)(param_1 + 8),_Var3,
                                 (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 8)),
             !bVar1)) {
      return false;
    }
  }
  if (((*(undefined **)(param_1 + 0x18) != *(undefined **)(param_2 + 0x18)) ||
      (*(undefined **)(param_1 + 0x20) != *(undefined **)(param_2 + 0x20))) &&
     (bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(param_1 + 0x18),
                         (_StringGuts)*(undefined **)(param_1 + 0x20),
                         (_StringComparisonResult)(__int8)*(undefined **)(param_2 + 0x18)), !bVar1))
  {
    return false;
  }
  return *(long *)(param_1 + 0x28) == *(long *)(param_2 + 0x28);
}



/* Address: 0x10024e508 | FUN_10024e508 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_10024e508(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *self;
  ID self_00;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar7;
  undefined8 uVar6;
  ulong uVar8;
  double extraout_d0;
  double dVar9;
  undefined1 auVar10 [16];
  undefined4 local_84;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined2 local_76;
  undefined2 local_74;
  undefined2 local_72;
  
  uVar4 = param_2;
  uVar6 = param_3;
  ___extension_in_Foundation____C_NSDecimal_init_integerLiteral__Swift_Int___>___C_NSDecimal(0);
  bVar2 = static_(extension_in_Foundation):__C.NSDecimal.<_infix(__C.NSDecimal,__C.NSDecimal)_->_Swift.Bool
          ::_<_infix();
  if (bVar2) {
    uVar3 = 0;
    ___extension_in_Foundation____C_NSDecimal_init_integerLiteral__Swift_Int___>___C_NSDecimal(0);
    bVar2 = static_(extension_in_Foundation):__C.NSDecimal.<_infix(__C.NSDecimal,__C.NSDecimal)_->_Swift.Bool
            ::_<_infix(param_4,param_5,param_6,uVar3,uVar4,uVar6);
    if ((!bVar2) &&
       (bVar2 = static_(extension_in_Foundation):__C.NSDecimal.<_infix(__C.NSDecimal,__C.NSDecimal)_->_Swift.Bool
                ::_<_infix(param_4,param_5,param_6,param_1,param_2,param_3), bVar2)) {
      static_(extension_in_Foundation):__C.NSDecimal.-_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal
      ::___infix();
      uVar7 = (undefined4)((ulong)param_3 >> 0x10);
      static_(extension_in_Foundation):__C.NSDecimal./_infix(__C.NSDecimal,__C.NSDecimal)_->___C.NSDecimal
      ::___infix();
      self = &_OBJC_CLASS___NSDecimalNumber;
      _objc_allocWithZone();
      local_84 = (undefined4)param_1;
      local_80 = (undefined2)((ulong)param_1 >> 0x20);
      local_7e = (undefined2)((ulong)param_1 >> 0x30);
      local_7c = (undefined2)param_2;
      local_7a = (undefined2)((ulong)param_2 >> 0x10);
      local_78 = (undefined2)((ulong)param_2 >> 0x20);
      local_76 = (undefined2)((ulong)param_2 >> 0x30);
      local_74 = (undefined2)uVar7;
      local_72 = (short)((uint)uVar7 >> 0x10);
      self_00 = objc_stub::initWithDecimal_((ID)self,&local_84);
      objc_stub::doubleValue(self_00);
      dVar9 = (double)(long)(extraout_d0 * 100.0);
      if (0x7fefffffffffffff < (ulong)ABS(dVar9)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10024e6d0);
        (*pcVar1)();
      }
      if (dVar9 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10024e6d4);
        (*pcVar1)();
      }
      if (9.223372036854776e+18 <= dVar9) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10024e6d8);
        (*pcVar1)();
      }
      uVar8 = (ulong)dVar9;
      uVar5 = (ulong)((long)uVar8 < 1);
      uVar8 = uVar8 & ((long)uVar8 >> 0x3f ^ 0xffffffffffffffffU);
      goto LAB_10024e6a8;
    }
  }
  uVar8 = 0;
  uVar5 = 1;
LAB_10024e6a8:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar8;
  return auVar10;
}



/* Address: 0x10024e6d8 | FUN_10024e6d8 */

void FUN_10024e6d8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  TaskPriority TVar6;
  TaskPriority TVar7;
  AnyCancellable *this;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 *puVar8;
  undefined8 uVar9;
  Set<AnyCancellable> in;
  long lVar10;
  undefined1 auStack_b0 [8];
  undefined1 *local_a8;
  long local_a0;
  undefined *local_98;
  undefined8 local_88 [3];
  undefined8 local_70;
  long lStack_68;
  
  puVar3 = &DAT_100fb85d0;
  FUN_1000037f0(&DAT_100fb85d0,&DAT_100c38058);
  local_a0 = *(long *)(puVar3 + -8);
  local_98 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100fb81c8;
  local_a8 = auStack_b0 + -extraout_x8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(auStack_b0 + -extraout_x8) - extraout_x8_00;
  puVar3 = &DAT_100c38068;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb7d00;
  FUN_1000037f0(&DAT_100fb7d00,&DAT_100c375b8);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  puVar3 = &DAT_100c380a0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb7d08;
  FUN_1000037f0(&DAT_100fb7d08,&DAT_100c375f0);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + 0x18) = puVar3;
  puVar3 = &DAT_100c380d8;
  _swift_getKeyPath();
  puVar4 = &DAT_100fb81f0;
  FUN_1000037f0(&DAT_100fb81f0,&DAT_100c37580);
  puVar5 = puVar4;
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + 0x20) = puVar3;
  puVar3 = &DAT_100c38108;
  _swift_getKeyPath();
  puVar5 = &DAT_100fb7d10;
  FUN_1000037f0(&DAT_100fb7d10,&DAT_100c37620);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  in.unknown = (undefined *)(unaff_x20 + 0x60);
  *(undefined **)in.unknown = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined1 *)(unaff_x20 + 0x58) = 0;
  *(undefined **)(unaff_x20 + 0x28) = puVar3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined8 *)(unaff_x20 + 0x38) = param_3;
  *(undefined8 *)(unaff_x20 + 0x40) = param_4;
  *(undefined8 *)(unaff_x20 + 0x48) = param_5;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  puVar8 = *(undefined8 **)(unaff_x20 + 0x10);
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_retain(puVar8);
  FUN_1000da768(local_88);
  _swift_release();
  FUN_1003fcb28();
  uVar9 = *puVar8;
  uVar1 = puVar8[1];
  _swift_bridgeObjectRetain(uVar1);
  FUN_1003feee0(uVar9,uVar1);
  _swift_release(local_88[0]);
  _swift_bridgeObjectRelease(uVar1);
  if ((param_1 & 1) != 0) {
    puVar3 = &DAT_100c380d8;
    _swift_getKeyPath();
    _swift_allocObject(puVar4,0x30,7);
    FUN_1000da6e0(puVar3,puVar4);
    TVar6.unknown = &DAT_100c38138;
    _swift_getKeyPath();
    puVar4 = &DAT_100fb85d8;
    FUN_1000037f0(&DAT_100fb85d8,&DAT_100c38ac0);
    _swift_allocObject();
    FUN_1000da6e0(TVar6.unknown,puVar4);
    Swift::TaskPriority::get_utility(TVar6);
    TVar7 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))(lVar10,0,1,TVar7.unknown);
    puVar4 = &DAT_100ec3f50;
    _swift_allocObject(&DAT_100ec3f50,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    puVar5 = &DAT_100ec3f78;
    _swift_allocObject(&DAT_100ec3f78,0x38,7);
    *(undefined8 *)(puVar5 + 0x10) = 0;
    *(undefined8 *)(puVar5 + 0x18) = 0;
    *(undefined **)(puVar5 + 0x20) = puVar3;
    *(undefined **)(puVar5 + 0x28) = TVar6.unknown;
    *(undefined **)(puVar5 + 0x30) = puVar4;
    _swift_retain();
    _swift_retain(puVar3);
    _swift_retain(TVar6.unknown);
    FUN_1002b5eb0(0,0,lVar10,&DAT_100c38178,puVar5);
    _swift_release();
    FUN_100005808(lVar10,&DAT_100fb81c8,&DAT_100c38060);
    uVar9 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_retain(uVar9);
    FUN_1000da768(local_88);
    _swift_release(uVar9);
    FUN_100004640(local_88,local_70);
    uVar9 = local_70;
    (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
    FUN_1000037f0(&DAT_100fb85e0,&DAT_100c38180);
    FUN_100016eac(&DAT_100fb85e8,&DAT_100fb85e0,&DAT_100c38180,
                  PTR_Combine__Combine__AnyPublisher<undefined,undefined>_>Combine__Publisher_100ea9758
                 );
    puVar2 = local_a8;
    (extension_Combine)::Combine::Publisher::dropFirst(1);
    _swift_release(uVar9);
    FUN_100004594(local_88);
    puVar4 = &DAT_100ec3f50;
    _swift_allocObject(&DAT_100ec3f50,0x18,7);
    _swift_weakInit(puVar4 + 0x10);
    _swift_release();
    FUN_100016eac(&DAT_100fb85f0,&DAT_100fb85d0,&DAT_100c38058,
                  PTR_Combine__Combine__Publishers__Drop<undefined>_>Combine__Publisher_100ea96a8);
    puVar5 = local_98;
    this = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar4);
    (**(code **)(local_a0 + 8))(puVar2,puVar5);
    _swift_beginAccess(in.unknown,local_88,0x21,0);
    Combine::AnyCancellable::store(this,in);
    _swift_endAccess(local_88);
    _swift_release(puVar3);
    _swift_release(TVar6.unknown);
    _swift_release(this);
  }
  _swift_release(param_3);
  _swift_release(param_5);
  return;
}



/* Address: 0x10024ec0c | FUN_10024ec0c */

void FUN_10024ec0c(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = in_x4;
  *(undefined8 *)(unaff_x22 + 0x50) = in_x5;
  *(undefined8 *)(unaff_x22 + 0x40) = in_x3;
  puVar1 = &DAT_100fb85f8;
  FUN_1000037f0(&DAT_100fb85f8,&DAT_100c381b0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  puVar1 = &DAT_100fb8600;
  FUN_1000037f0(&DAT_100fb8600,&DAT_100c381b8);
  *(undefined **)(unaff_x22 + 0x60) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x68) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar2;
  puVar1 = &DAT_100fb8608;
  FUN_1000037f0(&DAT_100fb8608,&DAT_100c381c0);
  *(undefined **)(unaff_x22 + 0x78) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x80) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar2;
  puVar1 = &DAT_100fb8610;
  FUN_1000037f0(&DAT_100fb8610,&DAT_100c381c8);
  *(undefined **)(unaff_x22 + 0x90) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  *(undefined **)(unaff_x22 + 0xa8) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0xb0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xb8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_10024ed50,0,0);
  return;
}



/* Address: 0x10024ed50 | FUN_10024ed50 */

void FUN_10024ed50(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  AsyncStream AVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  long *plVar10;
  long unaff_x22;
  undefined8 uVar11;
  
  uVar11 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa8);
  lVar1 = *(long *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x70);
  AVar6.unknown = *(undefined **)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  lVar7 = *(long *)(unaff_x22 + 0x68);
  lVar8 = 0;
  FUN_1002b5a40();
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))(uVar11,1,1,lVar8);
  FUN_1000da768(unaff_x22 + 0x38);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x38);
  *puVar2 = 1;
  (**(code **)(lVar7 + 0x68))
            (puVar2,*(undefined4 *)
                     PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_bufferingNewest<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>__Swift_Int___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec70
             ,uVar3);
  puVar9 = &DAT_100ec3fc8;
  _swift_allocObject(&DAT_100ec3fc8,0x18,7);
  _swift_weakInit(puVar9 + 0x10,uVar11);
  Swift::AsyncStream::_init((BufferingPolicy)(__int8)uVar4);
  _swift_release(uVar11);
  _swift_release(puVar9);
  Swift::AsyncStream::_makeAsyncIterator(AVar6);
  (**(code **)(lVar1 + 8))(uVar5,AVar6.unknown);
  *(undefined1 *)(unaff_x22 + 0xe0) = 0;
  plVar10 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar10;
  *plVar10 = unaff_x22;
  plVar10[1] = (long)FUN_10024eeb4;
  Swift::AsyncStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10024eeb4 | FUN_10024eeb4 */

void FUN_10024eeb4(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 200));
  _swift_task_switch(FUN_10024eefc,0,0);
  return;
}



/* Address: 0x10024eefc | FUN_10024eefc */

void FUN_10024eefc(void)

{
  long lVar1;
  char cVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar4 = uVar9;
  (**(code **)(*(long *)(unaff_x22 + 0xb0) + 0x30))(uVar9,1,*(undefined8 *)(unaff_x22 + 0xa8));
  uVar8 = *(undefined8 *)(unaff_x22 + 0xb8);
  if ((int)uVar4 == 1) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x70);
    (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar11,*(undefined8 *)(unaff_x22 + 0x90));
    FUN_100005808(uVar10,&DAT_100fb8220,&DAT_100c37df0);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar8);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x00010024efc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  cVar2 = *(char *)(unaff_x22 + 0xe0);
  FUN_100251400(uVar9,uVar8);
  if (cVar2 == '\x01') {
    lVar5 = *(long *)(unaff_x22 + 0xc0);
    FUN_100243174(lVar5,*(undefined8 *)(unaff_x22 + 0xb8));
    uVar7 = *(ulong *)(lVar5 + 0x10);
    if (uVar7 != 0) {
      uVar14 = 0;
      puVar13 = (undefined8 *)(lVar5 + 0x30);
      do {
        if (*(ulong *)(lVar5 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10024f180);
          (*pcVar3)();
        }
        uVar14 = uVar14 + 1;
        uVar4 = puVar13[-1];
        uVar9 = *puVar13;
        uVar11 = puVar13[-2];
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar9);
        FUN_1000da768(unaff_x22 + 0x10);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x28);
        lVar1 = *(long *)(unaff_x22 + 0x30);
        FUN_100004640(unaff_x22 + 0x10,uVar8);
        (**(code **)(lVar1 + 0x18))(uVar11,uVar4,uVar9,uVar8,lVar1);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar9);
        FUN_100004594(unaff_x22 + 0x10);
        puVar13 = puVar13 + 3;
      } while (uVar7 != uVar14);
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  lVar5 = *(long *)(unaff_x22 + 0x50) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  if (lVar5 != 0) {
    plVar6 = (long *)0x90;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xd8) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10024f180;
    FUN_10024f258(*(undefined8 *)(unaff_x22 + 0xb8));
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_100005808(uVar8,&DAT_100fb8220,&DAT_100c37df0);
  FUN_100251400(uVar4,uVar8);
  *(undefined1 *)(unaff_x22 + 0xe0) = 1;
  plVar6 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10024eeb4;
  Swift::AsyncStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10024f180 | FUN_10024f180 */

void FUN_10024f180(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0xd0);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd8));
  _swift_release(uVar1);
  _swift_task_switch(FUN_10024f1d0,0,0);
  return;
}



/* Address: 0x10024f1d0 | FUN_10024f1d0 */

void FUN_10024f1d0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  FUN_100005808(uVar2,&DAT_100fb8220,&DAT_100c37df0);
  FUN_100251400(uVar1,uVar2);
  *(undefined1 *)(unaff_x22 + 0xe0) = 1;
  plVar3 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10024eeb4;
  Swift::AsyncStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10024f258 | FUN_10024f258 */

void FUN_10024f258(undefined8 param_1)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x60) = pMVar2;
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x68) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x70) = puVar3;
  _swift_task_switch(FUN_10024f2e8,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10024f2e8 | FUN_10024f2e8 */

void FUN_10024f2e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x22;
  
  puVar3 = *(undefined8 **)(unaff_x22 + 0x50);
  FUN_100250114();
  if (((uint)puVar3 & 0xff) == 2) {
    FUN_1002508fc();
    FUN_1000da768(unaff_x22 + 0x10);
    uVar5 = *(ulong *)(unaff_x22 + 0x28);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    lVar4 = unaff_x22 + 0x10;
    FUN_100004640(lVar4,uVar5);
    FUN_1001a15c4(uVar5,uVar1,lVar4);
    puVar3 = (undefined8 *)(unaff_x22 + 0x10);
    FUN_100004594();
    if ((uVar5 & 1) != 0) {
      FUN_1000da768(unaff_x22 + 0x38);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x38);
      FUN_1003fcb28();
      uVar1 = *puVar3;
      uVar2 = puVar3[1];
      _swift_bridgeObjectRetain(uVar2);
      FUN_1003feee0(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_release(uVar8);
    }
    plVar6 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_10024f514;
    FUN_1002509a0();
    return;
  }
  puVar7 = puVar3;
  FUN_1000da768(unaff_x22 + 0x40);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x40);
  FUN_1003fcaf8();
  uVar1 = *puVar7;
  uVar2 = puVar7[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1003feee0(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release();
  FUN_1000da768(unaff_x22 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  FUN_1003fcb28();
  uVar1 = *puVar9;
  uVar2 = puVar9[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1003feee0(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  _swift_release(uVar8);
  plVar6 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10024f4a0;
  FUN_100250d08(puVar3,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x10024f4a0 | FUN_10024f4a0 */

void FUN_10024f4a0(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x78));
  _swift_task_switch(FUN_10024f4e4,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70));
  return;
}



/* Address: 0x10024f4e4 | FUN_10024f4e4 */

void FUN_10024f4e4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x00010024f510. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024f514 | FUN_10024f514 */

void FUN_10024f514(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x80));
  _swift_task_switch(thunk_FUN_10024f4e4,*(undefined8 *)(lVar1 + 0x68),*(undefined8 *)(lVar1 + 0x70)
                    );
  return;
}



/* Address: 0x10024f558 | FUN_10024f558 */

void FUN_10024f558(undefined8 param_1,long param_2)

{
  undefined *puVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  UnownedSerialExecutor UVar6;
  TaskPriority TVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long extraout_x8;
  
  puVar1 = &DAT_100fb81c8;
  FUN_1000037f0(&DAT_100fb81c8,&DAT_100c38060);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  puVar11 = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  UVar6 = UVar5;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar6.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("PasteLicensingAppStore/OfferManager.swift",0x29,1,0x3b,UVar5.unknown,puVar11);
  }
  TVar7 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar7.unknown + -8) + 0x38))
            (&stack0xffffffffffffffb0 + -extraout_x8,1,1,TVar7.unknown);
  pMVar8 = (MainActor *)&DAT_100ec3f50;
  _swift_allocObject(&DAT_100ec3f50,0x18,7);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong(param_2);
  _swift_weakInit(pMVar8 + 0x10,param_2);
  _swift_release(param_2);
  pMVar9 = pMVar8;
  _swift_retain();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar9);
  puVar1 = &DAT_100ec3fa0;
  _swift_allocObject(&DAT_100ec3fa0,0x28,7);
  *(MainActor **)(puVar1 + 0x10) = pMVar2;
  *(undefined8 **)(puVar1 + 0x18) = puVar4;
  *(MainActor **)(puVar1 + 0x20) = pMVar8;
  _swift_release(pMVar8);
  uVar10 = 0;
  FUN_10024cc3c(0,0,&stack0xffffffffffffffb0 + -extraout_x8,&DAT_100c38190,puVar1);
  _swift_release(pMVar3);
  _swift_release(uVar10);
  return;
}



/* Address: 0x10024f710 | FUN_10024f710 */

void FUN_10024f710(void)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 in_x3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = in_x3;
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar3;
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar5 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x48) = UVar5.unknown;
  *(undefined8 **)(unaff_x22 + 0x50) = puVar4;
  _swift_task_switch(FUN_10024f7cc,UVar5.unknown,puVar4);
  return;
}



/* Address: 0x10024f7cc | FUN_10024f7cc */

void FUN_10024f7cc(void)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  ID self;
  
  lVar1 = *(long *)(unaff_x22 + 0x30) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x58) = lVar1;
  if (lVar1 != 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar3 = *(undefined8 *)(lVar1 + 0x20);
    _swift_retain(uVar3);
    FUN_1000da768(unaff_x22 + 0x28);
    _swift_release(uVar3);
    lVar4 = *(long *)(unaff_x22 + 0x28);
    self = *(ID *)(lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
    objc_stub::lock(self);
    lVar1 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
    _swift_beginAccess(lVar4 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                       unaff_x22 + 0x10,0,0);
    FUN_1002435dc(lVar4 + lVar1,uVar5);
    objc_stub::unlock(self);
    _swift_release(lVar4);
    plVar2 = (long *)0x90;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10024f8e0;
    FUN_10024f258(*(undefined8 *)(unaff_x22 + 0x38));
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010024f8dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024f8e0 | FUN_10024f8e0 */

void FUN_10024f8e0(void)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x60));
  FUN_100005808(uVar2,&DAT_100fb8220,&DAT_100c37df0);
  _swift_task_switch(FUN_10024f940,*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50));
  return;
}



/* Address: 0x10024f940 | FUN_10024f940 */

void FUN_10024f940(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x00010024f980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024f984 | FUN_10024f984 */

void FUN_10024f984(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x50) = pMVar2;
  puVar3 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  *(undefined **)(unaff_x22 + 0x58) = UVar4.unknown;
  *(undefined8 **)(unaff_x22 + 0x60) = puVar3;
  _swift_task_switch(FUN_10024fa14,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10024fa14 | FUN_10024fa14 */

void FUN_10024fa14(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  uVar5 = *(ulong *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar4 = unaff_x22 + 0x10;
  FUN_100004640(lVar4,uVar5);
  FUN_1001a15c4(uVar5,uVar10,lVar4);
  FUN_100004594(unaff_x22 + 0x10);
  if ((uVar5 & 1) == 0) {
    lVar8 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x50);
    lVar4 = lVar8 + 1;
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10024fb6c);
      (*pcVar3)();
    }
    *(long *)(*(long *)(unaff_x22 + 0x48) + 0x50) = lVar4;
    if (2 < lVar4) {
      plVar7 = (long *)0xb0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x68) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_10024fb6c;
      FUN_10024fbf0();
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x50);
  }
  else {
    puVar6 = *(undefined8 **)(unaff_x22 + 0x50);
    _swift_release();
    FUN_1000da768(unaff_x22 + 0x38);
    puVar9 = *(undefined8 **)(unaff_x22 + 0x38);
    FUN_1003fcb28();
    uVar10 = *puVar6;
    uVar1 = puVar6[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1003feee0(uVar10,uVar1);
    _swift_bridgeObjectRelease(uVar1);
    _swift_release();
    FUN_1000da768(unaff_x22 + 0x40);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_1003fcaf8();
    uVar1 = *puVar9;
    uVar2 = puVar9[1];
    _swift_bridgeObjectRetain(uVar2);
    FUN_1003feee0(uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
  }
  _swift_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010024fb64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024fb6c | FUN_10024fb6c */

void FUN_10024fb6c(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x68));
  _swift_task_switch(FUN_10024fbb0,*(undefined8 *)(lVar1 + 0x58),*(undefined8 *)(lVar1 + 0x60));
  return;
}



/* Address: 0x10024fbb0 | FUN_10024fbb0 */

void FUN_10024fbb0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x00010024fbdc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024fbe0 | FUN_10024fbe0 */

bool FUN_10024fbe0(void)

{
  long unaff_x20;
  
  return 2 < *(long *)(unaff_x20 + 0x50);
}



/* Address: 0x10024fbf0 | FUN_10024fbf0 */

void FUN_10024fbf0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  lVar2 = 0;
  FUN_1003efa8c();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x88) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x90) = pMVar4;
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x98) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10024fca4,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x10024fca4 | FUN_10024fca4 */

void FUN_10024fca4(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x80);
  FUN_1003fcb28();
  uVar6 = *param_1;
  uVar3 = param_1[1];
  *(undefined8 *)(unaff_x22 + 0xa0) = *(undefined8 *)(lVar8 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  FUN_1000da768(unaff_x22 + 0x68);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003fc824(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_1003ff7e0();
  _swift_release(param_2);
  _swift_release(uVar9);
  FUN_1000386a0();
  _swift_release(puVar5);
  FUN_10012eef0(uVar6,uVar3,uVar9);
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar3);
  if (((uVar6 & 1) == 0) &&
     (lVar8 = *(long *)(unaff_x22 + 0x80), (*(byte *)(lVar8 + 0x58) & 1) == 0)) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x90);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x98);
    *(undefined1 *)(lVar8 + 0x58) = 1;
    piVar2 = *(int **)(lVar8 + 0x30);
    iVar1 = *piVar2;
    plVar7 = (long *)(ulong)(uint)piVar2[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa8) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10024fdec;
                    /* WARNING: Could not recover jumptable at 0x00010024fde8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(plVar7,unaff_x22 + 0x10,uVar9,uVar4,2);
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010024fd80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10024fdec | FUN_10024fdec */

void FUN_10024fdec(void)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar4 = *(undefined8 *)(lVar8 + 0x90);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0xa8));
  _swift_release(uVar4);
  if (*(long *)(lVar8 + 0x30) == 0) {
    *(undefined1 *)(*(long *)(lVar8 + 0x80) + 0x58) = 0;
  }
  else {
    uVar3 = *(undefined8 *)(lVar8 + 0x38);
    FUN_1000da768(lVar8 + 0x40);
    uVar1 = *(ulong *)(lVar8 + 0x58);
    uVar4 = *(undefined8 *)(lVar8 + 0x60);
    lVar5 = lVar8 + 0x40;
    FUN_100004640(lVar5,uVar1);
    FUN_1001a15c4(uVar1,uVar4,lVar5);
    FUN_100004594(lVar8 + 0x40);
    if ((uVar1 & 1) == 0) {
      lVar5 = *(long *)(lVar8 + 0x80);
      puVar2 = *(undefined8 **)(lVar8 + 0x88);
      FUN_1000da768(lVar8 + 0x70);
      uVar4 = *(undefined8 *)(lVar8 + 0x70);
      FUN_1003fcd2c(puVar2,uVar3);
      FUN_100005808(lVar8 + 0x10,&DAT_100fb85c0,&DAT_100c388a0);
      FUN_1003fea8c(puVar2);
      _swift_release(uVar4);
      FUN_10005241c(puVar2,FUN_1003efa8c);
      FUN_1000da768(lVar8 + 0x78);
      uVar6 = *(undefined8 *)(lVar8 + 0x78);
      FUN_1003fcaf8();
      uVar4 = *puVar2;
      uVar3 = puVar2[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1003feee0(uVar4,uVar3);
      _swift_bridgeObjectRelease(uVar3);
      _swift_release(uVar6);
      *(undefined1 *)(lVar5 + 0x58) = 0;
    }
    else {
      lVar5 = *(long *)(lVar8 + 0x80);
      FUN_100005808(lVar8 + 0x10,&DAT_100fb85c0,&DAT_100c388a0);
      *(undefined1 *)(lVar5 + 0x58) = 0;
    }
  }
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0x88));
                    /* WARNING: Could not recover jumptable at 0x00010024ff64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar7 + 8))();
  return;
}



/* Address: 0x10024ff68 | FUN_10024ff68 */

void FUN_10024ff68(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x10024ffb4 | FUN_10024ffb4 */

void FUN_10024ffb4(void)

{
  FUN_10024ff68();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10024ffd4 | FUN_10024ffd4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10024ffd4(void)

{
  return ZEXT816(0x100fb8518);
}



/* Address: 0x10024fff4 | FUN_10024fff4 */

void FUN_10024fff4(void)

{
  FUN_10024fffc(0);
  return;
}



/* Address: 0x10024fffc | FUN_10024fffc */

void FUN_10024fffc(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *local_18;
  
  if (DAT_100fb85b8 != 0) {
    return;
  }
  puVar1 = &DAT_100fb85c0;
  FUN_100005c24(&DAT_100fb85c0,&DAT_100c388a0);
  local_18 = &DAT_100ec3f20;
  uVar2 = 0xa4000001;
  FUN_100250080(0xa4000001,0,&local_18,0,puVar1,0,4,0);
  DAT_100fb85b8 = uVar2;
  return;
}



/* Address: 0x100250080 | FUN_100250080 */

void FUN_100250080(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  if (PTR__swift_getExtendedFunctionTypeMetadata_100eae268 != (undefined *)0x0) {
    _swift_getExtendedFunctionTypeMetadata();
    return;
  }
  _swift_getFunctionTypeMetadata(param_1,param_3,param_4,param_5);
  return;
}



/* Address: 0x1002500b0 | FUN_1002500b0 */

void FUN_1002500b0(void)

{
  FUN_1002500b8(0);
  return;
}



/* Address: 0x1002500b8 | FUN_1002500b8 */

void FUN_1002500b8(void)

{
  undefined8 uVar1;
  
  if (DAT_100fb85c8 != 0) {
    return;
  }
  uVar1 = 0xa4000000;
  FUN_100250080(0xa4000000,0,0,0,PTR___type_metadata_for_Swift_Bool_100eac570,0,4,0);
  DAT_100fb85c8 = uVar1;
  return;
}



/* Address: 0x100250114 | FUN_100250114 */

byte FUN_100250114(undefined8 param_1)

{
  _StringGuts _Var1;
  byte bVar2;
  bool bVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  ulong *puVar8;
  ulong uVar9;
  byte *pbVar10;
  _StringGuts _Var11;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  char *pcVar12;
  byte *pbVar13;
  byte *pbVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  byte abStack_90 [8];
  ulong auStack_88 [3];
  ulong local_70;
  long lStack_68;
  
  puVar4 = &DAT_100fb81c0;
  FUN_1000037f0(&DAT_100fb81c0,&DAT_100c37cc0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar14 = abStack_90 + -extraout_x8;
  lVar5 = 0;
  FUN_10019fee0();
  lVar16 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  pbVar13 = pbVar14 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = (long)pbVar13 - extraout_x8_01;
  lVar6 = 0;
  FUN_1002b5a40();
  lVar17 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar17 + 0x40));
  pcVar12 = (char *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  FUN_1002435dc(param_1,lVar15);
  lVar7 = lVar15;
  (**(code **)(lVar17 + 0x30))(lVar15,1,lVar6);
  if ((int)lVar7 == 1) {
    FUN_100005808(lVar15,&DAT_100fb8220,&DAT_100c37df0);
LAB_10025029c:
    bVar2 = 2;
  }
  else {
    FUN_1000523d8(lVar15,pcVar12,FUN_1002b5a40);
    if (((pcVar12[1] & 1U) != 0) || (*pcVar12 == '\x05')) goto LAB_10025028c;
    FUN_1000da768(auStack_88);
    lVar7 = lStack_68;
    uVar9 = local_70;
    puVar8 = auStack_88;
    FUN_100004640(puVar8,local_70);
    FUN_1001a15c4(uVar9,lVar7,puVar8);
    FUN_100004594(auStack_88);
    if ((uVar9 & 1) != 0) {
      FUN_1000da768(auStack_88);
      FUN_100004640(auStack_88,local_70);
      (**(code **)(lStack_68 + 8))(pbVar14,local_70,lStack_68);
      pbVar10 = pbVar14;
      (**(code **)(lVar16 + 0x30))(pbVar14,1,lVar5);
      if ((int)pbVar10 != 1) {
        FUN_1000523d8(pbVar14,pbVar13,FUN_10019fee0);
        FUN_100004594(auStack_88);
        _Var11.unknown = *(undefined **)pbVar13;
        _Var1.unknown = *(undefined **)(pbVar13 + 8);
        if (((_Var11.unknown == (undefined *)0xd00000000000002d) &&
            (_Var1.unknown == (undefined *)0x8000000100d8f1e0)) ||
           (bVar3 = Swift::_stringCompareWithSmolCheck(_Var11,_Var1,(_StringComparisonResult)0x2d),
           bVar3)) {
          FUN_10005241c(pbVar13,FUN_10019fee0);
        }
        else {
          _swift_bridgeObjectRetain(_Var1.unknown);
          FUN_1002abb30(_Var11.unknown,_Var1.unknown);
          FUN_10005241c(pbVar13,FUN_10019fee0);
          if (((uint)_Var11.unknown & 0xff) != 6) goto LAB_100250374;
        }
LAB_10025028c:
        FUN_10005241c(pcVar12,FUN_1002b5a40);
        goto LAB_10025029c;
      }
      FUN_100005808(pbVar14,&DAT_100fb81c0,&DAT_100c37cc0);
      FUN_100004594(auStack_88);
    }
LAB_100250374:
    bVar2 = pcVar12[*(int *)(lVar6 + 0x1c)];
    FUN_10005241c(pcVar12,FUN_1002b5a40);
    bVar2 = (bVar2 ^ 0xff) & 1;
  }
  return bVar2;
}



/* Address: 0x100250444 | FUN_100250444 */

void FUN_100250444(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  MainActor *pMVar3;
  undefined8 *puVar4;
  UnownedSerialExecutor UVar5;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = unaff_x20;
  puVar1 = &DAT_100fb8220;
  FUN_1000037f0(&DAT_100fb8220,&DAT_100c37df0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd0) = uVar2;
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  *(MainActor **)(unaff_x22 + 0xd8) = pMVar3;
  puVar4 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0xe0) = puVar4;
  UVar5 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100250504,UVar5.unknown,puVar4);
  return;
}



/* Address: 0x100250504 | FUN_100250504 */

void FUN_100250504(void)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  long unaff_x22;
  ID self;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_1000da768(unaff_x22 + 0xb0);
  lVar8 = *(long *)(unaff_x22 + 0xb0);
  self = *(ID *)(lVar8 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::lock);
  objc_stub::lock(self);
  lVar5 = _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest;
  _swift_beginAccess(lVar8 + _TtC22PasteLicensingAppStore25SubscriptionStatusMonitor::latest,
                     unaff_x22 + 0x98,0,0);
  FUN_1002435dc(lVar8 + lVar5,uVar3);
  objc_stub::unlock(self);
  _swift_release(lVar8);
  uVar4 = uVar3;
  FUN_100250114();
  *(char *)(unaff_x22 + 0x108) = (char)uVar4;
  FUN_100005808(uVar3,&DAT_100fb8220,&DAT_100c37df0);
  if (((uint)uVar4 & 0xff) != 2) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
    FUN_1000da768(unaff_x22 + 0xb8);
    *(long *)(unaff_x22 + 0xe8) = *(long *)(unaff_x22 + 0xb8);
    piVar2 = *(int **)(*(long *)(unaff_x22 + 0xb8) + 0x10);
    iVar1 = *piVar2;
    plVar7 = (long *)(ulong)(uint)piVar2[1];
    _swift_retain(uVar3);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xf0) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_10025071c;
                    /* WARNING: Could not recover jumptable at 0x0001002506b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)iVar1 + (long)piVar2))(uVar3,uVar4);
    return;
  }
  if (2 < *(long *)(*(long *)(unaff_x22 + 200) + 0x50)) {
    FUN_1000da768(unaff_x22 + 0x70);
    uVar6 = *(ulong *)(unaff_x22 + 0x88);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x90);
    lVar5 = unaff_x22 + 0x70;
    FUN_100004640(lVar5,uVar6);
    FUN_1001a15c4(uVar6,uVar3,lVar5);
    FUN_100004594(unaff_x22 + 0x70);
    if ((uVar6 & 1) == 0) {
      uVar3 = *(undefined8 *)(unaff_x22 + 0xd8);
      uVar4 = *(undefined8 *)(unaff_x22 + 0xe0);
      piVar2 = *(int **)(*(long *)(unaff_x22 + 200) + 0x30);
      iVar1 = *piVar2;
      plVar7 = (long *)(ulong)(uint)piVar2[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x100) = plVar7;
      *plVar7 = unaff_x22;
      plVar7[1] = (long)FUN_100250880;
                    /* WARNING: Could not recover jumptable at 0x000100250718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar2))(plVar7,unaff_x22 + 0x10,uVar3,uVar4,2);
      return;
    }
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0xd8));
  puVar9 = *(undefined8 **)(unaff_x22 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  puVar9[3] = 0;
  puVar9[2] = 0;
  puVar9[5] = 0;
  puVar9[4] = 0;
  puVar9[1] = 0;
  *puVar9 = 0;
                    /* WARNING: Could not recover jumptable at 0x00010025063c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10025071c | FUN_10025071c */

void FUN_10025071c(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long *unaff_x22;
  long lVar7;
  long lVar8;
  
  lVar8 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar8 + 0xe8);
  uVar6 = *(undefined8 *)(lVar8 + 0xd8);
  lVar7 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar8 + 0xf0));
  _swift_release(uVar6);
  _swift_release(uVar2);
  if ((param_1 & 1) != 0) {
    _swift_release(*(undefined8 *)(lVar8 + 0xd8));
    puVar5 = *(undefined8 **)(lVar8 + 0xc0);
    _swift_task_dealloc(*(undefined8 *)(lVar8 + 0xd0));
    puVar5[3] = 0;
    puVar5[2] = 0;
    puVar5[5] = 0;
    puVar5[4] = 0;
    puVar5[1] = 0;
    *puVar5 = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002507a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar7 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(lVar8 + 0xd8);
  uVar6 = *(undefined8 *)(lVar8 + 0xe0);
  piVar3 = *(int **)(*(long *)(lVar8 + 200) + 0x30);
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar8 + 0xf8) = plVar4;
  *plVar4 = lVar7;
  plVar4[1] = (long)FUN_100250804;
                    /* WARNING: Could not recover jumptable at 0x000100250800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar4,lVar8 + 0x40,uVar2,uVar6,*(undefined1 *)(lVar8 + 0x108));
  return;
}



/* Address: 0x100250804 | FUN_100250804 */

void FUN_100250804(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0xd8);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xf8));
  uVar10 = *(undefined8 *)(lVar1 + 0x48);
  uVar9 = *(undefined8 *)(lVar1 + 0x40);
  uVar7 = *(undefined8 *)(lVar1 + 0x58);
  uVar5 = *(undefined8 *)(lVar1 + 0x50);
  uVar8 = *(undefined8 *)(lVar1 + 0x68);
  uVar6 = *(undefined8 *)(lVar1 + 0x60);
  _swift_release(uVar2);
  puVar3 = *(undefined8 **)(lVar1 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
  puVar3[3] = uVar7;
  puVar3[2] = uVar5;
  puVar3[5] = uVar8;
  puVar3[4] = uVar6;
  puVar3[1] = uVar10;
  *puVar3 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010025087c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100250880 | FUN_100250880 */

void FUN_100250880(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long *unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar1 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar1 + 0xd8);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x100));
  uVar10 = *(undefined8 *)(lVar1 + 0x18);
  uVar9 = *(undefined8 *)(lVar1 + 0x10);
  uVar7 = *(undefined8 *)(lVar1 + 0x28);
  uVar5 = *(undefined8 *)(lVar1 + 0x20);
  uVar8 = *(undefined8 *)(lVar1 + 0x38);
  uVar6 = *(undefined8 *)(lVar1 + 0x30);
  _swift_release(uVar2);
  puVar3 = *(undefined8 **)(lVar1 + 0xc0);
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0xd0));
  puVar3[3] = uVar7;
  puVar3[2] = uVar5;
  puVar3[5] = uVar8;
  puVar3[4] = uVar6;
  puVar3[1] = uVar10;
  *puVar3 = uVar9;
                    /* WARNING: Could not recover jumptable at 0x0001002508f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x1002508fc | FUN_1002508fc */

void FUN_1002508fc(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 local_38;
  
  FUN_1000da768(&local_38);
  uVar2 = local_38;
  FUN_1003fcb50();
  uVar1 = *param_1;
  puVar3 = (undefined8 *)param_1[1];
  _swift_bridgeObjectRetain(puVar3);
  FUN_1003feee0(uVar1,puVar3);
  _swift_release(uVar2);
  _swift_bridgeObjectRelease();
  FUN_1000da768(&local_38);
  FUN_1003fcb80();
  uVar1 = *puVar3;
  uVar2 = puVar3[1];
  _swift_bridgeObjectRetain(uVar2);
  FUN_1003feee0(uVar1,uVar2);
  _swift_release(local_38);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x1002509a0 | FUN_1002509a0 */

void FUN_1002509a0(void)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  lVar2 = 0;
  FUN_1003efa8c();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x40) = pMVar4;
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x48) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100250a54,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x100250a54 | FUN_100250a54 */

void FUN_100250a54(ulong *param_1,undefined8 param_2)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  
  FUN_100251154();
  if (((ulong)param_1 & 1) == 0) {
    puVar8 = *(undefined8 **)(unaff_x22 + 0x40);
    _swift_release();
    FUN_1000da768(unaff_x22 + 0x10);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x10);
    FUN_1003fcaf8();
    uVar11 = *puVar8;
    uVar4 = puVar8[1];
    _swift_bridgeObjectRetain(uVar4);
    FUN_1003feee0(uVar11,uVar4);
    _swift_bridgeObjectRelease(uVar4);
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x30);
    FUN_1003fcaf8();
    *(ulong **)(unaff_x22 + 0x50) = param_1;
    uVar6 = *param_1;
    uVar3 = param_1[1];
    *(undefined8 *)(unaff_x22 + 0x58) = *(undefined8 *)(lVar10 + 0x10);
    _swift_bridgeObjectRetain(uVar3);
    FUN_1000da768(unaff_x22 + 0x18);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003fc824(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1003ff7e0();
    _swift_release(param_2);
    _swift_release(uVar11);
    FUN_1000386a0();
    _swift_release(puVar5);
    FUN_10012eef0(uVar6,uVar3,uVar11);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(uVar3);
    if ((uVar6 & 1) == 0) {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
      piVar2 = *(int **)(*(long *)(unaff_x22 + 0x30) + 0x40);
      iVar1 = *piVar2;
      plVar9 = (long *)(ulong)(uint)piVar2[1];
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x60) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_100250bd8;
                    /* WARNING: Could not recover jumptable at 0x000100250bd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar2))(uVar11,uVar4);
      return;
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  }
  _swift_release(uVar7);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100250b7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100250bd8 | FUN_100250bd8 */

void FUN_100250bd8(ulong param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar3 = *(ulong *)(lVar7 + 0x40);
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x60));
  _swift_release();
  if (((param_1 & 1) != 0) && (FUN_100251154(), (uVar3 & 1) != 0)) {
    uVar3 = **(ulong **)(lVar7 + 0x50);
    uVar1 = (*(ulong **)(lVar7 + 0x50))[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1000da768(lVar7 + 0x20);
    uVar4 = *(undefined8 *)(lVar7 + 0x20);
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1003fc824(PTR___swiftEmptyArrayStorage_100eae0d8);
    FUN_1003ff7e0();
    _swift_release(param_2);
    _swift_release(uVar4);
    FUN_1000386a0();
    _swift_release(puVar2);
    FUN_10012eef0(uVar3,uVar1,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar3 & 1) == 0) {
      uVar4 = *(undefined8 *)(lVar7 + 0x38);
      FUN_1000da768(lVar7 + 0x28);
      uVar5 = *(undefined8 *)(lVar7 + 0x28);
      FUN_1003fcbb0(uVar4);
      FUN_1003fea8c(uVar4);
      _swift_release(uVar5);
      FUN_10005241c(uVar4,FUN_1003efa8c);
    }
  }
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100250d04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))();
  return;
}



/* Address: 0x100250d08 | FUN_100250d08 */

void FUN_100250d08(undefined1 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  MainActor *pMVar4;
  undefined8 *puVar5;
  UnownedSerialExecutor UVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xa8) = param_1;
  lVar2 = 0;
  FUN_1003efa8c();
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar4 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  *(MainActor **)(unaff_x22 + 0x78) = pMVar4;
  puVar5 = &DAT_100fb7f60;
  FUN_100003a00(&DAT_100fb7f60,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x80) = puVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100250dc0,UVar6.unknown,puVar5);
  return;
}



/* Address: 0x100250dc0 | FUN_100250dc0 */

void FUN_100250dc0(ulong *param_1)

{
  int iVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  
  if (*(char *)(unaff_x22 + 0xa8) == '\0') {
    FUN_1003fcb50();
    uVar6 = *param_1;
    puVar9 = (undefined8 *)param_1[1];
    puVar4 = puVar9;
    _swift_bridgeObjectRetain();
    FUN_1003fcb80();
  }
  else {
    FUN_1003fcb80();
    uVar6 = *param_1;
    puVar9 = (undefined8 *)param_1[1];
    puVar4 = puVar9;
    _swift_bridgeObjectRetain();
    FUN_1003fcb50();
  }
  lVar10 = *(long *)(unaff_x22 + 0x68);
  uVar12 = *puVar4;
  uVar3 = puVar4[1];
  _swift_bridgeObjectRetain(uVar3);
  *(undefined8 *)(unaff_x22 + 0x88) = *(undefined8 *)(lVar10 + 0x10);
  FUN_1000da768(unaff_x22 + 0x40);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = uVar3;
  FUN_1003feee0(uVar12,uVar3);
  _swift_release(uVar11);
  _swift_bridgeObjectRelease(uVar3);
  FUN_1000da768(unaff_x22 + 0x48);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1003fc824(PTR___swiftEmptyArrayStorage_100eae0d8);
  FUN_1003ff7e0();
  _swift_release(uVar8);
  _swift_release(uVar12);
  FUN_1000386a0();
  _swift_release(puVar5);
  FUN_10012eef0(uVar6,puVar9,uVar12);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(puVar9);
  if ((uVar6 & 1) != 0) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x78));
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100250ef8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x80);
  FUN_1000da768(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x90) = *(long *)(unaff_x22 + 0x50);
  piVar2 = *(int **)(*(long *)(unaff_x22 + 0x50) + 0x10);
  iVar1 = *piVar2;
  plVar7 = (long *)(ulong)(uint)piVar2[1];
  _swift_retain(uVar12);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100250f74;
                    /* WARNING: Could not recover jumptable at 0x000100250f70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(uVar12,uVar3);
  return;
}



/* Address: 0x100250f74 | FUN_100250f74 */

void FUN_100250f74(ulong param_1)

{
  int iVar1;
  undefined8 uVar2;
  int *piVar3;
  long *plVar4;
  undefined8 uVar5;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  
  lVar7 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar7 + 0x90);
  uVar5 = *(undefined8 *)(lVar7 + 0x78);
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x98));
  _swift_release(uVar5);
  _swift_release(uVar2);
  if ((param_1 & 1) != 0) {
    _swift_release(*(undefined8 *)(lVar7 + 0x78));
    _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100250fe8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar6 + 8))();
    return;
  }
  uVar2 = *(undefined8 *)(lVar7 + 0x78);
  uVar5 = *(undefined8 *)(lVar7 + 0x80);
  piVar3 = *(int **)(*(long *)(lVar7 + 0x68) + 0x30);
  iVar1 = *piVar3;
  plVar4 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(lVar7 + 0xa0) = plVar4;
  *plVar4 = lVar6;
  plVar4[1] = (long)FUN_10025104c;
                    /* WARNING: Could not recover jumptable at 0x000100251048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (plVar4,lVar7 + 0x10,uVar2,uVar5,*(undefined1 *)(lVar7 + 0xa8));
  return;
}


