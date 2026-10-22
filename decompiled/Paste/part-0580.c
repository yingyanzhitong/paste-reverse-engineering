/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10066987c | thunk_FUN_100669494 */

void thunk_FUN_100669494(void)

{
  FUN_100669494();
  return;
}



/* Address: 0x100669880 | thunk_FUN_10061423c */

void thunk_FUN_10061423c(void)

{
  thunk_FUN_10061423c();
  return;
}



/* Address: 0x100669884 | thunk_FUN_10066703c */

void thunk_FUN_10066703c(void)

{
  FUN_10066703c();
  return;
}



/* Address: 0x100669888 | FUN_100669888 */

void FUN_100669888(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_38;
  
  pcVar2 = *(code **)(param_3 + 0x20);
  uVar1 = 0;
  local_38 = param_1;
  FUN_1005da1e0(0);
  (*pcVar2)(0xffff,0x80,&local_38,uVar1,param_2,param_3);
  return;
}



/* Address: 0x1006698e4 | FUN_1006698e4 */

void FUN_1006698e4(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x30);
  uVar1 = 0;
  FUN_1005da1e0(0);
                    /* WARNING: Could not recover jumptable at 0x000100669938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0xffff,0x80,uVar1,param_1,param_2);
  return;
}



/* Address: 0x10066993c | FUN_10066993c */

void FUN_10066993c(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined4 local_34;
  
  pcVar2 = *(code **)(param_3 + 0x20);
  uVar1 = 0;
  local_34 = param_1;
  FUN_1005da2a0(0);
  (*pcVar2)(0,9,&local_34,uVar1,param_2,param_3);
  return;
}



/* Address: 0x100669998 | FUN_100669998 */

void FUN_100669998(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x30);
  uVar1 = 0;
  FUN_1005da2a0(0);
                    /* WARNING: Could not recover jumptable at 0x0001006699ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(0,9,uVar1,param_1,param_2);
  return;
}



/* Address: 0x1006699f0 | FUN_1006699f0 */

void FUN_1006699f0(undefined1 param_1,undefined8 param_2,long param_3)

{
  undefined1 local_11;
  
  local_11 = param_1;
  (**(code **)(param_3 + 0x20))
            (0,10,&local_11,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_2,param_3);
  return;
}



/* Address: 0x100669a30 | FUN_100669a30 */

void FUN_100669a30(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100669a4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))(0,10,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_1,param_2);
  return;
}



/* Address: 0x100669a50 | FUN_100669a50 */

void FUN_100669a50(undefined1 param_1,undefined8 param_2,long param_3)

{
  undefined1 local_11;
  
  local_11 = param_1;
  (**(code **)(param_3 + 0x20))
            (0,0xb,&local_11,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_2,param_3);
  return;
}



/* Address: 0x100669a90 | FUN_100669a90 */

void FUN_100669a90(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100669aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))(0,0xb,PTR___type_metadata_for_Swift_UInt8_100eadcd0,param_1,param_2)
  ;
  return;
}



/* Address: 0x100669ab0 | FUN_100669ab0 */

void FUN_100669ab0(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_14;
  
  local_14 = param_1;
  (**(code **)(param_3 + 0x20))
            (0x29,9,&local_14,PTR___type_metadata_for_Swift_UInt32_100eade50,param_2,param_3);
  return;
}



/* Address: 0x100669af0 | FUN_100669af0 */

void FUN_100669af0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100669b0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))
            (0x29,9,PTR___type_metadata_for_Swift_UInt32_100eade50,param_1,param_2);
  return;
}



/* Address: 0x100669b10 | FUN_100669b10 */

void FUN_100669b10(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_14;
  
  local_14 = param_1;
  (**(code **)(param_3 + 0x20))
            (0x29,10,&local_14,PTR___type_metadata_for_Swift_Int32_100eadbd0,param_2,param_3);
  return;
}



/* Address: 0x100669b50 | FUN_100669b50 */

void FUN_100669b50(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100669b6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))
            (0x29,10,PTR___type_metadata_for_Swift_Int32_100eadbd0,param_1,param_2);
  return;
}



/* Address: 0x100669b70 | FUN_100669b70 */

void FUN_100669b70(undefined4 param_1,undefined8 param_2,long param_3)

{
  undefined4 local_14;
  
  local_14 = param_1;
  (**(code **)(param_3 + 0x20))
            (0x29,0xb,&local_14,PTR___type_metadata_for_Swift_UInt32_100eade50,param_2,param_3);
  return;
}



/* Address: 0x100669bb0 | FUN_100669bb0 */

void FUN_100669bb0(undefined8 param_1,long param_2)

{
                    /* WARNING: Could not recover jumptable at 0x000100669bcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2 + 0x30))
            (0x29,0xb,PTR___type_metadata_for_Swift_UInt32_100eade50,param_1,param_2);
  return;
}



/* Address: 0x100669bd0 | FUN_100669bd0 */

void FUN_100669bd0(undefined8 param_1,long param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  
  UNRECOVERED_JUMPTABLE = *(code **)(param_2 + 0x30);
  uVar1 = 0;
  FUN_1005da280(0);
                    /* WARNING: Could not recover jumptable at 0x000100669c24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(6,0x106,uVar1,param_1,param_2);
  return;
}



/* Address: 0x100669c28 | FUN_100669c28 */

bool FUN_100669c28(int param_1)

{
  return param_1 == 0xe || param_1 == 9;
}



/* Address: 0x100669c38 | FUN_100669c38 */

void FUN_100669c38(int param_1)

{
  code *pcVar1;
  UnsafePointer<__int8> cString;
  
  if ((param_1 != 0xe) && (param_1 != 9)) {
    return;
  }
  cString.unknown = _strerror(param_1);
  if (cString.unknown != (undefined *)0x0) {
    Swift::String::init(cString);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669c64);
  (*pcVar1)();
}



/* Address: 0x100669c64 | FUN_100669c64 */

int FUN_100669c64(int param_1)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  UnsafePointer<__int8> cString;
  undefined8 *puVar4;
  
  do {
    iVar2 = _dup(param_1);
    if (iVar2 != -1) {
      return iVar2;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_10060a840();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000010;
    puVar4[1] = 0x8000000100dafa00;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return -1;
  }
  cString.unknown = _strerror(_Var3);
  if (cString.unknown != (undefined *)0x0) {
    Swift::String::init(cString);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669d20);
  (*pcVar1)();
}



/* Address: 0x100669d20 | FUN_100669d20 */

void FUN_100669d20(int param_1)

{
  code *pcVar1;
  __int32 _Var2;
  undefined4 extraout_var;
  UnsafePointer<__int8> cString;
  undefined8 *puVar3;
  
  _close();
  if (param_1 == -1) {
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
    if (_Var2 != 4) {
      if ((_Var2 == 0xe) || (_Var2 == 9)) {
        cString.unknown = _strerror(_Var2);
        if (cString.unknown != (undefined *)0x0) {
          Swift::String::init(cString);
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100669dc0);
        (*pcVar1)();
      }
      FUN_10060a840();
      _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
      *puVar3 = 0x65736f6c63;
      puVar3[1] = &DAT_e500000000000000;
      *(__int32 *)(puVar3 + 2) = _Var2;
      _swift_willThrow();
    }
  }
  return;
}



/* Address: 0x100669dc0 | FUN_100669dc0 */

__int32 FUN_100669dc0(UnsafePointer<__int8> param_1,__int32 param_2,__uint16 param_3)

{
  code *pcVar1;
  __int32 _Var2;
  undefined8 *puVar3;
  UnsafePointer<__int8> cString;
  undefined4 extraout_var;
  
  do {
    _Var2 = Darwin::open(param_1,param_2,param_3);
    if (_Var2 != -1) {
      return _Var2;
    }
    _Var2 = Darwin::get_errno();
    puVar3 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_10060a840();
    _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
    *puVar3 = 0xd000000000000016;
    puVar3[1] = 0x8000000100daf9e0;
    *(__int32 *)(puVar3 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
  cString.unknown = _strerror(_Var2);
  if (cString.unknown != (undefined *)0x0) {
    Swift::String::init(cString);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669e94);
  (*pcVar1)();
}



/* Address: 0x100669e94 | FUN_100669e94 */

off_t FUN_100669e94(int param_1,off_t param_2,int param_3)

{
  code *pcVar1;
  __int32 _Var2;
  off_t oVar3;
  undefined4 extraout_var;
  UnsafePointer<__int8> cString;
  undefined8 *puVar4;
  
  do {
    oVar3 = _lseek(param_1,param_2,param_3);
    if (oVar3 != -1) {
      return oVar3;
    }
    _Var2 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var2);
  } while (_Var2 == 4);
  if ((_Var2 != 9) && (_Var2 != 0xe)) {
    FUN_10060a840();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0xd000000000000020;
    puVar4[1] = 0x8000000100daf9b0;
    *(__int32 *)(puVar4 + 2) = _Var2;
    _swift_willThrow();
    return -1;
  }
  cString.unknown = _strerror(_Var2);
  if (cString.unknown != (undefined *)0x0) {
    Swift::String::init(cString);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669f68);
  (*pcVar1)();
}



/* Address: 0x100669f68 | FUN_100669f68 */

void FUN_100669f68(char *param_1)

{
  code *pcVar1;
  
  if (param_1 != (char *)0x0) {
    _if_nametoindex(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100669f94);
  (*pcVar1)();
}



/* Address: 0x100669f94 | FUN_100669f94 */

void FUN_100669f94(ifaddrs **param_1)

{
  code *pcVar1;
  int iVar2;
  __int32 _Var3;
  undefined4 extraout_var;
  UnsafePointer<__int8> cString;
  undefined8 *puVar4;
  
  do {
    iVar2 = _getifaddrs(param_1);
    if (iVar2 != -1) {
      return;
    }
    _Var3 = Darwin::get_errno();
    puVar4 = (undefined8 *)CONCAT44(extraout_var,_Var3);
  } while (_Var3 == 4);
  if ((_Var3 != 9) && (_Var3 != 0xe)) {
    FUN_10060a840();
    _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
    *puVar4 = 0x6464616669746567;
    puVar4[1] = 0xee00293a5f287372;
    *(__int32 *)(puVar4 + 2) = _Var3;
    _swift_willThrow();
    return;
  }
  cString.unknown = _strerror(_Var3);
  if (cString.unknown != (undefined *)0x0) {
    Swift::String::init(cString);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10066a048);
  (*pcVar1)();
}



/* Address: 0x10066a048 | FUN_10066a048 */

long FUN_10066a048(Duration param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  tuple2_conflict14 tVar4;
  
  tVar4 = Swift::Duration::get_components(param_1);
  lVar3 = tVar4.seconds * 1000000000;
  lVar2 = tVar4.attoseconds / 1000000000;
  lVar1 = 0x7fffffffffffffff;
  if (!SCARRY8(lVar3,lVar2) &&
      SUB168(SEXT816(tVar4.seconds) * SEXT816(1000000000),8) == lVar3 >> 0x3f) {
    lVar1 = lVar3 + lVar2;
  }
  return lVar1;
}



/* Address: 0x10066a0a4 | FUN_10066a0a4 */

undefined1  [16] FUN_10066a0a4(ulong param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = param_1;
  auVar2._8_8_ = ((long)param_1 >> 0x3f & 0xffffffffc4653600U) +
                 SUB168(auVar1 * ZEXT816(1000000000),8);
  auVar2._0_8_ = param_1 * 1000000000;
  return auVar2;
}



/* Address: 0x10066a0cc | FUN_10066a0cc */

void FUN_10066a0cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a0e4(param_1,*unaff_x20);
  return;
}



/* Address: 0x10066a0e4 | FUN_10066a0e4 */

void FUN_10066a0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb98e8,&TargetProtocolRequirement_100cb9900);
  FUN_10065af64(param_1);
  return;
}



/* Address: 0x10066a130 | FUN_10066a130 */

void FUN_10066a130(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a148(param_1,*unaff_x20);
  return;
}



/* Address: 0x10066a148 | FUN_10066a148 */

void FUN_10066a148(void)

{
  FUN_10066a8f8();
  return;
}



/* Address: 0x10066a158 | FUN_10066a158 */

void FUN_10066a158(void)

{
  FUN_10066a16c();
  return;
}



/* Address: 0x10066a16c | FUN_10066a16c */

void FUN_10066a16c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb98a8,&TargetProtocolRequirement_100cb98b0);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  FUN_10065b2f8(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Address: 0x10066a1fc | FUN_10066a1fc */

void FUN_10066a1fc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a214(param_1,*unaff_x20);
  return;
}



/* Address: 0x10066a214 | FUN_10066a214 */

void FUN_10066a214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb9948,&TargetProtocolRequirement_100cb9960);
  FUN_10065af64(param_1);
  return;
}



/* Address: 0x10066a260 | FUN_10066a260 */

void FUN_10066a260(void)

{
  FUN_10066a8f8();
  return;
}



/* Address: 0x10066a270 | FUN_10066a270 */

void FUN_10066a270(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_10066ad00();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x10066a298 | FUN_10066a298 */

void FUN_10066a298(long param_1)

{
  *(undefined **)(param_1 + 0x18) = PTR___type_metadata_for_Swift_Never_100eadc38;
  *(undefined1 *)(param_1 + 0x41) = 2;
  return;
}



/* Address: 0x10066a2b0 | FUN_10066a2b0 */

void FUN_10066a2b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar3 = (undefined4)param_4;
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  FUN_10065b5f8();
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = uVar1;
  *(undefined4 *)((long)param_1 + 0xc) = uVar2;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(short *)((long)param_1 + 0x14) = (short)uVar4;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar4 >> 0x10);
  return;
}



/* Address: 0x10066a2f4 | FUN_10066a2f4 */

void FUN_10066a2f4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined4 *)(param_2 + 2);
  uVar5 = *(undefined2 *)((long)param_2 + 0x14);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(undefined2 *)((long)param_1 + 0x14) = uVar5;
  *(undefined4 *)(param_1 + 2) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 0;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x10066a320 | FUN_10066a320 */

void FUN_10066a320(void)

{
  FUN_10066a4e0(&DAT_100ef1a40);
  return;
}



/* Address: 0x10066a348 | FUN_10066a348 */

void FUN_10066a348(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  param_1[3] = &DAT_100ef1a40;
  puVar1 = &DAT_100ef2af0;
  _swift_allocObject(&DAT_100ef2af0,0x52,7);
  *param_1 = puVar1;
  FUN_1005e650c(param_2,puVar1 + 0x10);
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  return;
}



/* Address: 0x10066a3a0 | FUN_10066a3a0 */

undefined1  [16] FUN_10066a3a0(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined1 local_b0;
  undefined1 auStack_a0 [32];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 uStack_69;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined1 local_40;
  char local_3f;
  undefined8 local_30;
  undefined8 uStack_28;
  
  puVar4 = &local_f0;
  FUN_10065c850();
  if (local_3f == '\0') {
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    local_e0 = CONCAT44(CONCAT22(CONCAT11(local_e0._7_1_,local_6a),local_6c),local_70);
    puVar2 = &DAT_100fd4ff0;
    FUN_1000f7830(&DAT_100fd4ff0,&DAT_100c693f0);
    puVar5 = &DAT_100ef13d8;
  }
  else if (local_3f == '\x01') {
    uStack_c8 = uStack_58;
    local_d0 = local_60;
    uStack_b8 = uStack_48;
    uStack_c0 = uStack_50;
    local_b0 = local_40;
    local_e0 = CONCAT17(uStack_69,CONCAT16(local_6a,CONCAT24(local_6c,local_70)));
    uStack_e8 = uStack_78;
    local_f0 = local_80;
    uStack_d8 = uStack_68;
    puVar5 = &DAT_100fd8ad0;
    FUN_1000f7830(&DAT_100fd8ad0,&DAT_100c6b970);
    puVar2 = &DAT_100fd4ff0;
    FUN_1000f7830(&DAT_100fd4ff0,&DAT_100c693f0);
    puVar4 = &local_f0;
  }
  else {
    FUN_100011080(&local_80,&local_f0);
    FUN_100011080(&local_f0,auStack_a0);
    puVar2 = &DAT_100fd4ff0;
    FUN_1000f7830(&DAT_100fd4ff0,&DAT_100c693f0);
    puVar4 = (undefined8 *)auStack_a0;
    puVar5 = PTR___type_metadata_for_Any_100eae0c0 + 8;
  }
  puVar3 = &local_30;
  _swift_dynamicCast(puVar3,puVar4,puVar5,puVar2,6);
  if (((ulong)puVar3 & 1) == 0) {
    local_30 = 0;
    uStack_28 = 0;
  }
  auVar1._8_8_ = uStack_28;
  auVar1._0_8_ = local_30;
  return auVar1;
}



/* Address: 0x10066a4e0 | FUN_10066a4e0 */

void FUN_10066a4e0(undefined8 *param_1,bool param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  undefined8 uVar1;
  StaticString file;
  undefined1 *line;
  code *pcVar2;
  bool bVar3;
  Mirror MVar4;
  undefined *puVar5;
  Mirror MVar6;
  AnyCollection<tuple2> AVar7;
  char *pcVar8;
  ObjectIdentifier OVar9;
  ObjectIdentifier OVar10;
  _StringGuts _Var11;
  char *pcVar12;
  void *pvVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_170;
  undefined4 auStack_168 [2];
  char *local_160;
  code *local_158;
  void *local_150;
  undefined1 auStack_148 [32];
  undefined1 auStack_128 [32];
  StaticString local_108;
  undefined1 *puStack_100;
  undefined4 local_f8;
  undefined3 local_f4;
  undefined8 local_e8;
  undefined1 *puStack_e0;
  char *local_d8;
  undefined *puStack_d0;
  char local_c7;
  undefined *local_c0;
  __uint64 _Stack_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  MVar4 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar4.unknown + -8);
  uVar14 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)&local_160 - uVar14;
  lVar15 = lVar16 - uVar14;
  FUN_10065c850();
  if (local_c7 == '\x02') {
    FUN_100011080(&local_108,auStack_128);
    FUN_100011080(auStack_128,auStack_148);
    param_5 = &DAT_100ef1a40;
    uVar14 = 0;
    _Var11.unknown = auStack_148;
    pcVar12 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    if ((uVar14 & 1) != 0) {
      if (local_80._1_1_ != -1) {
        param_1[5] = uStack_98;
        param_1[4] = local_a0;
        param_1[7] = uStack_88;
        param_1[6] = uStack_90;
        *(undefined2 *)(param_1 + 8) = local_80;
        param_1[1] = _Stack_b8;
        *param_1 = local_c0;
        param_1[3] = local_a8;
        param_1[2] = uStack_b0;
        return;
      }
      goto LAB_10066a670;
    }
  }
  else if (local_c7 == '\0') {
    pcVar12 = (char *)(ulong)CONCAT34(local_f4,local_f8);
    FUN_10000c650(local_108.unknown);
    _Var11.unknown = puStack_100;
  }
  else {
    local_150 = (void *)local_e8;
    local_158 = (code *)puStack_e0;
    local_160 = local_d8;
    _swift_release(puStack_100);
    _swift_release((ulong)local_108.unknown & 0x3fffffffffffffff);
    _Var11.unknown = local_158;
    pcVar12 = local_160;
    FUN_1005d8fac(local_150);
    param_5 = puStack_d0;
  }
  uStack_98 = 0;
  local_a0 = 0;
  uStack_88 = 0;
  uStack_90 = 0;
  _Stack_b8 = 0;
  local_c0 = (undefined *)0x0;
  local_a8 = (undefined *)0x0;
  uStack_b0 = 0;
  local_80 = 0xff00;
LAB_10066a670:
  FUN_1005da18c(&local_c0);
  local_c0 = (undefined *)0x0;
  _Stack_b8 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,_Var11);
  local_108.unknown = local_c0;
  puStack_100 = (undefined1 *)_Stack_b8;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_5;
  SVar22.str = pcVar12;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_2);
  SVar23.bridgeObject = param_5;
  SVar23.str = pcVar12;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_5;
  SVar24.str = pcVar12;
  Swift::String::append(SVar19,SVar24);
  local_a8 = &DAT_100ef1ad8;
  puVar5 = &DAT_100ef2ac8;
  _swift_allocObject(&DAT_100ef2ac8,0x52,7);
  local_c0 = puVar5;
  FUN_10065c850();
  MVar6 = Swift::Mirror::_init();
  AVar7 = Swift::Mirror::_get_children(MVar6);
  local_158 = *(code **)(lVar17 + 8);
  (*local_158)(lVar16,MVar4.unknown);
  pcVar12 = *(char **)(AVar7.unknown + 0x10);
  pvVar13 = *(void **)(AVar7.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar7.unknown + 0x20);
  pcVar8 = pcVar12;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar12);
  _swift_unknownObjectRetain(uVar1);
  local_150 = pvVar13;
  OVar9 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  if (OVar9.unknown != OVar10.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066a7f0);
    (*pcVar2)();
  }
  pvVar13 = local_150;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar12);
    _swift_release(AVar7.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066a7ec);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar12);
  _swift_release(AVar7.unknown);
  _swift_bridgeObjectRelease(_Stack_b8);
  MVar6 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar6);
  (*local_158)(lVar15,MVar4.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar6.unknown,0));
  SVar25.bridgeObject = pvVar13;
  SVar25.str = pcVar8;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar13;
  SVar26.str = pcVar8;
  Swift::String::append(SVar20,SVar26);
  Swift::__print_unlocked();
  line = puStack_100;
  file.unknown = local_108.unknown;
  *(undefined4 *)(lVar15 + -8) = 0;
  *(undefined8 *)(lVar15 + -0x10) = 0xd0;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,(__uint64)line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10066a8f8);
  (*pcVar2)();
}



/* Address: 0x10066a8f8 | FUN_10066a8f8 */

void FUN_10066a8f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,param_4,param_3);
  lVar2 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_2,lVar1);
  FUN_10065b2f8(param_1,&stack0xffffffffffffffd0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),lVar1);
  return;
}



/* Address: 0x10066a97c | thunk_FUN_10066a980 */

void thunk_FUN_10066a980(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10066a980 | FUN_10066a980 */

void FUN_10066a980(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10066aa18 | FUN_10066aa18 */

void FUN_10066aa18(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  code *local_b0;
  void *local_a8;
  undefined *local_a0;
  __uint64 local_98;
  undefined *local_88;
  StaticString local_70;
  __uint64 _Stack_68;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&local_b0 - uVar13;
  lVar14 = lVar15 - uVar13;
  MVar7 = MVar5;
  FUN_10066a3a0();
  if (MVar7.unknown != (undefined *)0x0) {
    return;
  }
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,param_2);
  local_70.unknown = local_a0;
  _Stack_68 = local_98;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = &DAT_e700000000000000;
  SVar17.str = (char *)0x6c656e6e616843;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar18,SVar24);
  local_88 = &DAT_100ef1ad8;
  puVar6 = &DAT_100ef2ac8;
  _swift_allocObject(&DAT_100ef2ac8,0x52,7);
  local_a0 = puVar6;
  FUN_10065c850();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_b0 = *(code **)(lVar16 + 8);
  (*local_b0)(lVar15,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar12 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_a8 = pvVar12;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar12 = local_a8;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10066abfc);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_98);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_b0)(lVar14,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar12;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar12;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_68;
    file.unknown = local_70.unknown;
    *(undefined4 *)(lVar14 + -8) = 0;
    *(undefined8 *)(lVar14 + -0x10) = 0xd0;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10066ad00);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10066ac00);
  (*pcVar3)();
}



/* Address: 0x10066ad00 | FUN_10066ad00 */

undefined1  [16] FUN_10066ad00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *local_88;
  undefined *puStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar2 = &DAT_100fd4ff0;
  puVar3 = &DAT_100c693f0;
  FUN_1000f7830();
  if (puVar2 == &DAT_100eeaaa8) {
    FUN_10065b5f8();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100eeaaa8;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else if (puVar2 == &DAT_100ef1120) {
    FUN_10065bcfc();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100ef1120;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else if (puVar2 == &DAT_100ef13d8) {
    FUN_10065b97c();
    local_78 = (undefined4)param_3;
    local_72 = (undefined1)((ulong)param_3 >> 0x30);
    local_74 = (undefined2)((ulong)param_3 >> 0x20);
    puVar4 = &DAT_100ef13d8;
    puVar5 = puVar4;
    local_88 = puVar2;
    puStack_80 = puVar3;
  }
  else {
    puVar4 = &DAT_100fd8ad0;
    puVar3 = &DAT_100c6b970;
    FUN_1000f7830();
    if (puVar2 != puVar4) {
      FUN_10066aa18();
      local_40 = puVar4;
      puStack_38 = puVar3;
      goto LAB_10066ae10;
    }
    FUN_10065c09c(&local_88);
    puVar5 = puVar2;
  }
  _swift_dynamicCast(&local_40,&local_88,puVar4,puVar5,7);
LAB_10066ae10:
  auVar1._8_8_ = puStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x10066ae48 | thunk_FUN_10066a1fc */

void thunk_FUN_10066a1fc(void)

{
  FUN_10066a1fc();
  return;
}



/* Address: 0x10066ae4c | thunk_FUN_10066a298 */

void thunk_FUN_10066a298(long param_1)

{
  *(undefined **)(param_1 + 0x18) = PTR___type_metadata_for_Swift_Never_100eadc38;
  *(undefined1 *)(param_1 + 0x41) = 2;
  return;
}



/* Address: 0x10066ae50 | thunk_FUN_10066a320 */

void thunk_FUN_10066a320(void)

{
  FUN_10066a320();
  return;
}



/* Address: 0x10066ae54 | thunk_FUN_10066a148 */

void thunk_FUN_10066a148(void)

{
  FUN_10066a148();
  return;
}



/* Address: 0x10066ae58 | thunk_FUN_10066a0e4 */

void thunk_FUN_10066a0e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb98e8,&TargetProtocolRequirement_100cb9900);
  FUN_10065af64(param_1);
  return;
}



/* Address: 0x10066ae5c | thunk_FUN_10066a214 */

void thunk_FUN_10066a214(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        )

{
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,0x100cb9948,&TargetProtocolRequirement_100cb9960);
  FUN_10065af64(param_1);
  return;
}



/* Address: 0x10066ae60 | thunk_FUN_10066a270 */

void thunk_FUN_10066a270(void)

{
  FUN_10066a270();
  return;
}



/* Address: 0x10066ae64 | thunk_FUN_10066a980 */

void thunk_FUN_10066a980(void)

{
  thunk_FUN_10066a980();
  return;
}



/* Address: 0x10066ae68 | FUN_10066ae68 */

void FUN_10066ae68(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_100004640();
  pcVar4 = *(code **)(lVar3 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = uVar5;
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  lVar1 = param_1;
  FUN_10000cbb0(param_1);
  (*pcVar4)(lVar1,param_2,param_3,param_4,param_5,uVar2,lVar3);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(unaff_x20 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar5;
  _swift_retain(uVar2);
  return;
}



/* Address: 0x10066af24 | FUN_10066af24 */

void FUN_10066af24(void)

{
  FUN_100076688();
  return;
}



/* Address: 0x10066af30 | FUN_10066af30 */

void FUN_10066af30(long param_1,undefined8 param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  
  lVar4 = *(long *)(param_5 + -8);
  lVar6 = *(long *)(lVar4 + 0x40);
  *(long *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  FUN_10000cbb0(param_1);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))();
  pcVar3 = *(code **)(lVar4 + 0x20);
  (*pcVar3)(&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_3,param_5);
  uVar2 = (ulong)*(byte *)(lVar4 + 0x50);
  uVar5 = uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff);
  puVar1 = &DAT_100ef2b28;
  _swift_allocObject(&DAT_100ef2b28,uVar5 + lVar6,uVar2 | 7);
  *(long *)(puVar1 + 0x10) = param_4;
  *(long *)(puVar1 + 0x18) = param_5;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  (*pcVar3)(puVar1 + uVar5,&stack0xffffffffffffffa0 + -(lVar6 + 0xfU & 0xfffffffffffffff0),param_5);
  *(code **)(param_1 + 0x28) = FUN_10066b150;
  *(undefined **)(param_1 + 0x30) = puVar1;
  return;
}



/* Address: 0x10066b020 | FUN_10066b020 */

void FUN_10066b020(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  code *pcVar4;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [40];
  
  lVar3 = *(long *)(param_4 + -8);
  puVar2 = auStack_90 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100076688(param_2,auStack_88);
  puVar1 = &DAT_100fd9290;
  FUN_1000f7830(&DAT_100fd9290,&DAT_100c6c668);
  _swift_dynamicCast(puVar2,auStack_88,puVar1,param_4,7);
  pcVar4 = *(code **)(param_7 + 0x10);
  *(long *)(param_1 + 0x18) = param_4;
  *(undefined8 *)(param_1 + 0x20) = param_6;
  FUN_10000cbb0(param_1);
  (*pcVar4)(param_1,puVar2,param_5,param_7);
  (**(code **)(lVar3 + 8))(puVar2,param_4);
  return;
}



/* Address: 0x10066b100 | FUN_10066b100 */

void FUN_10066b100(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x18) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x30 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10066b150 | FUN_10066b150 */

void FUN_10066b150(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_10066b020(param_1,unaff_x20 + (uVar1 + 0x30 & (uVar1 ^ 0xffffffffffffffff)),
                *(undefined8 *)(unaff_x20 + 0x10),*(long *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


