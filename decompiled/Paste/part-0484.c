/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005ac040 | FUN_1005ac040 */

undefined1  [16]
FUN_1005ac040(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined1 auVar2 [16];
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined8 local_48;
  unkuint9 local_40;
  
  puVar1 = &DAT_100fd3090;
  local_50 = param_3;
  local_48 = param_1;
  FUN_1000f7830(&DAT_100fd3090,&DAT_100c62030);
  FUN_1005bc3f4(&local_40,FUN_1005ac204,auStack_60,param_4,puVar1,param_5);
  auVar2._9_7_ = 0;
  auVar2._0_9_ = local_40;
  return auVar2;
}



/* Address: 0x1005ac0c0 | FUN_1005ac0c0 */

void FUN_1005ac0c0(ulong *param_1,long param_2,long param_3,int param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  ssize_t sVar4;
  undefined1 uVar5;
  long lVar6;
  size_t sVar7;
  void *pvVar8;
  ulong uVar9;
  
  lVar6 = 0;
  uVar9 = param_3 - param_2;
  do {
    if (param_2 == 0) {
      if (-1 < lVar6) {
        uVar9 = 0;
        uVar5 = 0;
        goto LAB_1005ac168;
      }
      if (SCARRY8(param_5,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ac1ac);
        (*pcVar1)();
      }
      pvVar8 = (void *)0x0;
      sVar7 = 0;
    }
    else {
      sVar7 = uVar9 - lVar6;
      if (sVar7 == 0 || (long)uVar9 < lVar6) {
        uVar5 = 0;
LAB_1005ac168:
        *param_1 = uVar9;
        *(undefined1 *)(param_1 + 1) = uVar5;
        return;
      }
      if (SCARRY8(param_5,lVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ac1a8);
        (*pcVar1)();
      }
      pvVar8 = (void *)(param_2 + lVar6);
    }
    while (sVar4 = _pwrite(param_4,pvVar8,sVar7,param_5 + lVar6), sVar4 == -1) {
      uVar3 = Darwin::get_errno();
      if (uVar3 != 4) {
        uVar9 = (ulong)uVar3;
        uVar5 = 1;
        goto LAB_1005ac168;
      }
    }
    bVar2 = SCARRY8(lVar6,sVar4);
    lVar6 = lVar6 + sVar4;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ac160);
      (*pcVar1)();
    }
  } while( true );
}



/* Address: 0x1005ac1ac | FUN_1005ac1ac */

void FUN_1005ac1ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3088 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c61428;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c61428,&DAT_100ee42f8);
  DAT_100fd3088 = pTVar1;
  return;
}



/* Address: 0x1005ac1ec | FUN_1005ac1ec */

void FUN_1005ac1ec(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005abf7c(param_1,param_2,*(undefined4 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005ac204 | FUN_1005ac204 */

void FUN_1005ac204(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005ac0c0(param_1,param_2,*(undefined4 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x1005ac220 | FUN_1005ac220 */

void FUN_1005ac220(void)

{
  FUN_1005ac3b4();
  return;
}



/* Address: 0x1005ac22c | FUN_1005ac22c */

void FUN_1005ac22c(void)

{
  FUN_1005ac43c();
  return;
}



/* Address: 0x1005ac238 | FUN_1005ac238 */

ulong FUN_1005ac238(UnsafePointer<__int8> param_1,uint param_2,uint param_3,uint param_4,
                   ulong param_5)

{
  code *pcVar1;
  uint uVar2;
  ulong uVar3;
  String SVar4;
  
  while( true ) {
    if ((param_4 & 0xff0000) == 0x10000) {
      if ((param_3 >> 9 & 1) != 0) {
        SVar4.bridgeObject = (void *)0x2;
        SVar4.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar4,(StaticString)0xd000000000000054,
                   0x8000000100dae1a0,0xdae190);
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ac32c);
        (*pcVar1)();
      }
      uVar2 = Darwin::open(param_1,param_3 | param_2);
    }
    else {
      uVar2 = Darwin::open(param_1,param_3 | param_2,(__uint16)param_4);
    }
    if (uVar2 != 0xffffffff) break;
    uVar2 = Darwin::get_errno();
    uVar3 = 0x100000000;
    if (((param_5 & 1) == 0) || (uVar2 != 4)) goto LAB_1005ac2c0;
  }
  uVar3 = 0;
LAB_1005ac2c0:
  return uVar3 | uVar2;
}



/* Address: 0x1005ac32c | FUN_1005ac32c */

ulong FUN_1005ac32c(int param_1)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  
  _close();
  if (param_1 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
  }
  return uVar3 | uVar2;
}



/* Address: 0x1005ac364 | FUN_1005ac364 */

undefined1  [16] FUN_1005ac364(off_t param_1,int param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._0_8_ = _lseek(param_3,param_1,param_2);
  if (auVar1._0_8_ != 0xffffffffffffffff) {
    auVar1._8_8_ = 0;
    return auVar1;
  }
  auVar2._0_4_ = Darwin::get_errno();
  auVar2._4_4_ = 0;
  auVar2._8_8_ = 1;
  return auVar2;
}



/* Address: 0x1005ac3a8 | FUN_1005ac3a8 */

void FUN_1005ac3a8(void)

{
  FUN_1005ac3b4();
  return;
}



/* Address: 0x1005ac3b4 | FUN_1005ac3b4 */

void FUN_1005ac3b4(long param_1,long param_2,ulong param_3,long param_4,code *param_5)

{
  long lVar1;
  __int32 _Var2;
  long lVar3;
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  while( true ) {
    lVar3 = param_4;
    (*param_5)(param_4,param_1,lVar1);
    if (lVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    if ((param_3 & 1) == 0) break;
    if (_Var2 != 4) {
      return;
    }
  }
  return;
}



/* Address: 0x1005ac430 | FUN_1005ac430 */

void FUN_1005ac430(void)

{
  FUN_1005ac43c();
  return;
}



/* Address: 0x1005ac43c | FUN_1005ac43c */

void FUN_1005ac43c(undefined8 param_1,long param_2,long param_3,ulong param_4,long param_5,
                  code *param_6)

{
  long lVar1;
  __int32 _Var2;
  long lVar3;
  
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = param_3 - param_2;
  }
  while( true ) {
    lVar3 = param_5;
    (*param_6)(param_5,param_2,lVar1,param_1);
    if (lVar3 != -1) {
      return;
    }
    _Var2 = Darwin::get_errno();
    if ((param_4 & 1) == 0) break;
    if (_Var2 != 4) {
      return;
    }
  }
  return;
}



/* Address: 0x1005ac4c0 | FUN_1005ac4c0 */

ulong FUN_1005ac4c0(ulong param_1,ulong param_2,int param_3)

{
  uint uVar1;
  ulong uVar2;
  
  while( true ) {
    if ((param_1 & 0xff00000000) == 0x100000000) {
      uVar1 = _dup(param_3);
    }
    else {
      uVar1 = _dup2(param_3,(int)param_1);
    }
    if (uVar1 != 0xffffffff) break;
    uVar1 = Darwin::get_errno();
    uVar2 = 0x100000000;
    if (((param_2 & 1) == 0) || (uVar1 != 4)) goto LAB_1005ac530;
  }
  uVar2 = 0;
LAB_1005ac530:
  return uVar2 | uVar1;
}



/* Address: 0x1005ac54c | FUN_1005ac54c */

ulong FUN_1005ac54c(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar3;
  ulong uVar2;
  
  while (uVar2 = param_4, FUN_1005bc6c4(param_4,param_1,param_2), (int)uVar2 == -1) {
    uVar1 = Darwin::get_errno();
    uVar2 = (ulong)uVar1;
    uVar3 = 0x100000000;
    if (((param_3 & 1) == 0) || (uVar1 != 4)) goto LAB_1005ac5a0;
  }
  uVar3 = 0;
LAB_1005ac5a0:
  return uVar3 | uVar2 & 0xffffffff;
}



/* Address: 0x1005ac5b8 | FUN_1005ac5b8 */

void FUN_1005ac5b8(void)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_20 = 0xffffffffffffffff;
  iVar1 = _pipe((int)&local_20);
  uVar3 = local_20;
  if (iVar1 == -1) {
    uVar2 = Darwin::get_errno();
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3,iVar1 == -1);
  }
  return;
}



/* Address: 0x1005ac62c | FUN_1005ac62c */

void FUN_1005ac62c(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong local_20;
  long local_18;
  
  iVar1 = (int)&local_20;
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_20 = 0xffffffffffffffff;
  FUN_1005bc6a4(&local_20,param_1);
  uVar3 = local_20;
  if (iVar1 == -1) {
    uVar2 = Darwin::get_errno();
    uVar3 = (ulong)uVar2;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_18) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar3,iVar1 == -1);
  }
  return;
}



/* Address: 0x1005ac6a4 | FUN_1005ac6a4 */

ulong FUN_1005ac6a4(off_t param_1,ulong param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  
  do {
    iVar1 = _ftruncate(param_3,param_1);
    if (iVar1 != -1) {
      uVar3 = 0;
      uVar4 = 0;
      goto LAB_1005ac6f8;
    }
    uVar2 = Darwin::get_errno();
  } while (((param_2 & 1) != 0) && (uVar2 == 4));
  uVar3 = (ulong)uVar2;
  uVar4 = 0x100000000;
LAB_1005ac6f8:
  return uVar4 | uVar3;
}



/* Address: 0x1005ac70c | FUN_1005ac70c */

void FUN_1005ac70c(void)

{
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  return;
}



/* Address: 0x1005ac738 | FUN_1005ac738 */

undefined1  [16] FUN_1005ac738(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e800000000000000;
  auVar1._0_8_ = 0x656761726f74735f;
  return auVar1;
}



/* Address: 0x1005ac750 | FUN_1005ac750 */

void FUN_1005ac750(byte *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  byte bVar2;
  
  if (param_2 == 0x656761726f74735f && param_3 == &DAT_e800000000000000) {
    _swift_bridgeObjectRelease(param_3);
    bVar2 = 0;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x656761726f74735f,(_StringGuts)0xe800000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    _swift_bridgeObjectRelease(param_3);
    bVar2 = (bVar1 ^ 0xffU) & 1;
  }
  *param_1 = bVar2;
  return;
}



/* Address: 0x1005ac7d4 | FUN_1005ac7d4 */

String FUN_1005ac7d4(void)

{
  String SVar1;
  
  FUN_1005accbc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005ac7fc | FUN_1005ac7fc */

String FUN_1005ac7fc(void)

{
  String SVar1;
  
  FUN_1005accbc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005ac824 | FUN_1005ac824 */

long FUN_1005ac824(long param_1)

{
  return *(long *)(param_1 + 0x10) + -1;
}



/* Address: 0x1005ac830 | FUN_1005ac830 */

void FUN_1005ac830(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  __uint8 *p_Var3;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    p_Var3 = param_2.unknown + 0x20;
    do {
      Swift::Hasher::_combine(*p_Var3,HVar1);
      _Var2 = _Var2 - 1;
      p_Var3 = p_Var3 + 1;
    } while (_Var2 != 0);
  }
  return;
}



/* Address: 0x1005ac87c | FUN_1005ac87c */

void FUN_1005ac87c(long param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined *puVar2;
  byte *pbVar3;
  
  Swift::Hasher::init(0);
  puVar2 = *(undefined **)(param_1 + 0x10);
  HVar1.unknown = puVar2;
  Swift::Hasher::_combine((__uint64)puVar2,param_2);
  if (puVar2 != (undefined *)0x0) {
    pbVar3 = (byte *)(param_1 + 0x20);
    do {
      HVar1.unknown = (undefined *)(ulong)*pbVar3;
      Swift::Hasher::_combine(*pbVar3,param_2);
      puVar2 = puVar2 + -1;
      pbVar3 = pbVar3 + 1;
    } while (puVar2 != (undefined *)0x0);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005ac8e8 | FUN_1005ac8e8 */

void FUN_1005ac8e8(void)

{
  undefined8 *unaff_x20;
  
  FUN_1005ac87c(*unaff_x20);
  return;
}



/* Address: 0x1005ac8f0 | FUN_1005ac8f0 */

void FUN_1005ac8f0(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  long *unaff_x20;
  long lVar2;
  __uint8 *p_Var3;
  
  lVar2 = *unaff_x20;
  _Var1 = *(__uint64 *)(lVar2 + 0x10);
  Swift::Hasher::_combine(_Var1,param_2);
  if (_Var1 != 0) {
    p_Var3 = (__uint8 *)(lVar2 + 0x20);
    do {
      Swift::Hasher::_combine(*p_Var3,param_2);
      _Var1 = _Var1 - 1;
      p_Var3 = p_Var3 + 1;
    } while (_Var1 != 0);
  }
  return;
}



/* Address: 0x1005ac940 | FUN_1005ac940 */

void FUN_1005ac940(__int64 param_1,Hasher param_2)

{
  Hasher HVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  byte *pbVar4;
  
  lVar3 = *unaff_x20;
  Swift::Hasher::init(param_1);
  puVar2 = *(undefined **)(lVar3 + 0x10);
  HVar1.unknown = puVar2;
  Swift::Hasher::_combine((__uint64)puVar2,param_2);
  if (puVar2 != (undefined *)0x0) {
    pbVar4 = (byte *)(lVar3 + 0x20);
    do {
      HVar1.unknown = (undefined *)(ulong)*pbVar4;
      Swift::Hasher::_combine(*pbVar4,param_2);
      puVar2 = puVar2 + -1;
      pbVar4 = pbVar4 + 1;
    } while (puVar2 != (undefined *)0x0);
  }
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005ac9a8 | FUN_1005ac9a8 */

void FUN_1005ac9a8(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100556d68(*param_1,*param_2);
  return;
}



/* Address: 0x1005ac9b4 | FUN_1005ac9b4 */

void FUN_1005ac9b4(void)

{
  FUN_1005acaf8();
  return;
}



/* Address: 0x1005ac9c8 | FUN_1005ac9c8 */

void FUN_1005ac9c8(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  
  puVar1 = &DAT_100fd30d0;
  FUN_1000f7830(&DAT_100fd30d0,&DAT_100c62048);
  lVar3 = *(long *)(puVar1 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005accbc();
  Swift::Encoder::_container();
  local_58 = param_2;
  FUN_1005accfc();
  Swift::KeyedEncodingContainer::_encode(&local_58);
  (**(code **)(lVar3 + 8))(auStack_60 + -(lVar2 + 0xfU & 0xfffffffffffffff0),puVar1);
  return;
}



/* Address: 0x1005acab8 | FUN_1005acab8 */

void FUN_1005acab8(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1005acaf8();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1005acae0 | FUN_1005acae0 */

void FUN_1005acae0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1005ac9c8(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005acaf8 | FUN_1005acaf8 */

/* WARNING: Removing unreachable block (ram,0x0001005acbc4) */

ulong FUN_1005acaf8(ulong param_1)

{
  DecodingError DVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x21;
  long lVar6;
  undefined1 auStack_60 [8];
  ulong local_58;
  
  puVar2 = &DAT_100fd3108;
  FUN_1000f7830(&DAT_100fd3108,&DAT_100c62238);
  lVar6 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar6 + 0x40);
  uVar3 = param_1;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005accbc();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    FUN_1005ace70();
    Swift::KeyedDecodingContainer::_decode(&local_58);
    uVar3 = local_58;
    _swift_bridgeObjectRetain();
    FUN_1005b295c();
    _swift_bridgeObjectRelease(local_58);
    if ((uVar3 & 1) == 0) {
      DVar1 = Swift::DecodingError::typeMetadataAccessor();
      puVar4 = PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
      ;
      _swift_allocError(DVar1.value,
                        PTR___protocol_witness_table_for_Swift_DecodingError___Swift_Error_in_Swift_100eacf80
                        ,0,0);
      FUN_1005aceb0();
      Swift::DecodingError::_dataCorruptedError(puVar4);
      _swift_willThrow();
      (**(code **)(lVar6 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
      FUN_100004594(param_1);
      _swift_bridgeObjectRelease(local_58);
    }
    else {
      (**(code **)(lVar6 + 8))(auStack_60 + -(lVar5 + 0xfU & 0xfffffffffffffff0),puVar2);
      FUN_100004594(param_1);
    }
  }
  else {
    FUN_100004594(param_1);
    local_58 = uVar3;
  }
  return local_58;
}



/* Address: 0x1005accbc | FUN_1005accbc */

void FUN_1005accbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c621e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c621e8,&DAT_100ee4828);
  DAT_100fd30d8 = pTVar1;
  return;
}



/* Address: 0x1005accfc | FUN_1005accfc */

void FUN_1005accfc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64598;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64598,&DAT_100ee5cd8);
  DAT_100fd30e0 = pTVar1;
  return;
}



/* Address: 0x1005acd3c | thunk_FUN_1005acd40 */

void thunk_FUN_1005acd40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62090,&DAT_100ee4790);
  DAT_100fd30e8 = pTVar1;
  return;
}



/* Address: 0x1005acd40 | FUN_1005acd40 */

void FUN_1005acd40(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62090,&DAT_100ee4790);
  DAT_100fd30e8 = pTVar1;
  return;
}



/* Address: 0x1005acd80 | FUN_1005acd80 */

undefined1  [16] FUN_1005acd80(void)

{
  return ZEXT816(0x100ee4790);
}



/* Address: 0x1005acd90 | FUN_1005acd90 */

void FUN_1005acd90(void)

{
  return;
}



/* Address: 0x1005acd94 | FUN_1005acd94 */

undefined1  [16] FUN_1005acd94(void)

{
  return ZEXT816(0x100ee4828);
}



/* Address: 0x1005acda4 | thunk_FUN_1005acda8 */

void thunk_FUN_1005acda8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c621c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c621c0,&DAT_100ee4828);
  DAT_100fd30f0 = pTVar1;
  return;
}



/* Address: 0x1005acda8 | FUN_1005acda8 */

void FUN_1005acda8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c621c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c621c0,&DAT_100ee4828);
  DAT_100fd30f0 = pTVar1;
  return;
}



/* Address: 0x1005acde8 | thunk_FUN_1005acdec */

void thunk_FUN_1005acdec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62158;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62158,&DAT_100ee4828);
  DAT_100fd30f8 = pTVar1;
  return;
}



/* Address: 0x1005acdec | FUN_1005acdec */

void FUN_1005acdec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd30f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62158;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62158,&DAT_100ee4828);
  DAT_100fd30f8 = pTVar1;
  return;
}



/* Address: 0x1005ace2c | thunk_FUN_1005ace30 */

void thunk_FUN_1005ace30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62130,&DAT_100ee4828);
  DAT_100fd3100 = pTVar1;
  return;
}



/* Address: 0x1005ace30 | FUN_1005ace30 */

void FUN_1005ace30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3100 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c62130;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c62130,&DAT_100ee4828);
  DAT_100fd3100 = pTVar1;
  return;
}



/* Address: 0x1005ace70 | FUN_1005ace70 */

void FUN_1005ace70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd3110 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64208;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64208,&DAT_100ee5cd8);
  DAT_100fd3110 = pTVar1;
  return;
}



/* Address: 0x1005aceb0 | FUN_1005aceb0 */

void FUN_1005aceb0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd3118 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd3108;
  FUN_1000f8b08(&DAT_100fd3108,&DAT_100c62238);
  puVar2 = 
  PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
  ;
  _swift_getWitnessTable
            (PTR_Swift__Swift__KeyedDecodingContainer<undefined>_>Swift__KeyedDecodingContainerProtocol_100ead598
             ,puVar1);
  DAT_100fd3118 = puVar2;
  return;
}



/* Address: 0x1005acf00 | FUN_1005acf00 */

undefined1  [16] FUN_1005acf00(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x74726174735f;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x687461705f;
  }
  puVar2 = &DAT_e600000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1005acf34 | FUN_1005acf34 */

void FUN_1005acf34(undefined1 *param_1,long param_2,undefined1 *param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x687461705f || param_3 != &DAT_e500000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x687461705f,(_StringGuts)0xe500000000000000,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x74726174735f) && (param_3 == &DAT_e600000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e600000000000000);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x74726174735f,(_StringGuts)0xe600000000000000,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_1005acf90;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1005acf90:
  *param_1 = uVar2;
  return;
}



/* Address: 0x1005ad004 | FUN_1005ad004 */

String FUN_1005ad004(void)

{
  String SVar1;
  
  FUN_1005b04e0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1005ad02c | FUN_1005ad02c */

String FUN_1005ad02c(void)

{
  String SVar1;
  
  FUN_1005b04e0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005ad054 | FUN_1005ad054 */

void FUN_1005ad054(long param_1)

{
  code *pcVar1;
  
  if (*(long *)(param_1 + 0x10) == 1) {
    return;
  }
  if (*(long *)(param_1 + 0x10) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad080);
  (*pcVar1)();
}



/* Address: 0x1005ad080 | FUN_1005ad080 */

undefined1  [16] FUN_1005ad080(long *param_1)

{
  code *pcVar1;
  undefined *puVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  
  param_1[2] = (long)unaff_x20;
  lVar4 = *unaff_x20;
  if (*(long *)(lVar4 + 0x10) != 1) {
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad174);
      (*pcVar1)();
    }
    if (*(char *)(lVar4 + 0x20) == '/') {
      _swift_bridgeObjectRetain(lVar4);
      puVar2 = (undefined *)0x0;
      FUN_1005afd60(0,1,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1005ad104;
    }
  }
  puVar2 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
LAB_1005ad104:
  param_1[3] = (long)puVar2;
  if (*(long *)(lVar4 + 0x10) == 1) {
    uVar3 = 0;
  }
  else {
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad178);
      (*pcVar1)();
    }
    uVar3 = (ulong)(*(char *)(lVar4 + 0x20) == '/');
  }
  *param_1 = lVar4;
  param_1[1] = uVar3;
  puVar2 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
  *unaff_x20 = (long)puVar2;
  auVar5._8_8_ = param_1;
  auVar5._0_8_ = FUN_1005ad178;
  return auVar5;
}



/* Address: 0x1005ad178 | FUN_1005ad178 */

void FUN_1005ad178(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1[3];
  FUN_1005ad1b0(param_1[2],param_1,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(*param_1);
  return;
}



/* Address: 0x1005ad1b0 | FUN_1005ad1b0 */

void FUN_1005ad1b0(long *param_1,long *param_2,ulong param_3)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  
  lVar4 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(lVar4);
  lVar4 = *(long *)(*param_1 + 0x10);
  if (lVar4 != 1) {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad2c4);
      (*pcVar1)();
    }
    if (*(char *)(*param_1 + 0x20) == '/') {
      param_2 = (long *)0x0;
      uVar3 = param_3;
      FUN_1005af6a4(param_3,0,1);
      if ((uVar3 & 1) != 0) {
        return;
      }
    }
  }
  _swift_bridgeObjectRetain();
  FUN_1005b1ec8();
  if (param_3 == 0) {
    lVar4 = *(long *)(*param_1 + 0x10);
    if (lVar4 == 1) {
      bVar2 = false;
    }
    else {
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad2cc);
        (*pcVar1)();
      }
      bVar2 = *(char *)(*param_1 + 0x20) == '/';
    }
    FUN_1005afca4(0,bVar2);
    return;
  }
  lVar4 = *(long *)(*param_1 + 0x10);
  if (lVar4 == 1) {
    bVar2 = false;
  }
  else {
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad2c8);
      (*pcVar1)();
    }
    bVar2 = *(char *)(*param_1 + 0x20) == '/';
  }
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad2c0);
    (*pcVar1)();
  }
  FUN_1005aff2c(0,bVar2,0,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x1005ad2cc | FUN_1005ad2cc */

void FUN_1005ad2cc(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  
  lVar4 = *unaff_x20;
  if (*(long *)(lVar4 + 0x10) != 1) {
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad3cc);
      (*pcVar1)();
    }
    if (*(char *)(lVar4 + 0x20) == '/') {
      _swift_bridgeObjectRetain(lVar4);
      puVar2 = (undefined *)0x0;
      FUN_1005afd60(0,1,lVar4);
      _swift_bridgeObjectRelease(lVar4);
      goto LAB_1005ad358;
    }
  }
  puVar2 = &DAT_100fd30c8;
  FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
  _swift_initStaticObject();
LAB_1005ad358:
  if (*(long *)(lVar4 + 0x10) != 0) {
    puVar3 = &DAT_100fd30c8;
    FUN_1000f7830(&DAT_100fd30c8,&DAT_100c62040);
    _swift_initStaticObject();
    _swift_bridgeObjectRelease(lVar4);
    *unaff_x20 = (long)puVar3;
    FUN_1005ad1b0();
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ad3d0);
  (*pcVar1)();
}



/* Address: 0x1005ad3d0 | FUN_1005ad3d0 */

bool FUN_1005ad3d0(long param_1,long param_2)

{
  return param_1 < param_2;
}



/* Address: 0x1005ad3dc | FUN_1005ad3dc */

void FUN_1005ad3dc(undefined8 param_1,__uint64 param_2)

{
  Swift::Hasher::_combine(param_2,(Hasher)param_2);
  return;
}



/* Address: 0x1005ad400 | FUN_1005ad400 */

void FUN_1005ad400(Hasher param_1,Hasher param_2)

{
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x1005ad444 | FUN_1005ad444 */

bool FUN_1005ad444(long *param_1,long *param_2)

{
  return *param_1 < *param_2;
}


