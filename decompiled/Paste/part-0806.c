/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008d5300 | FUN_1008d5300 */

void FUN_1008d5300(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febaf8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b000;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b000,&DAT_100ef11e8);
  DAT_100febaf8 = pTVar1;
  return;
}



/* Address: 0x1008d5340 | FUN_1008d5340 */

void FUN_1008d5340(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febb00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8333c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8333c,&DAT_100f0f248);
  DAT_100febb00 = pTVar1;
  return;
}



/* Address: 0x1008d5380 | FUN_1008d5380 */

void FUN_1008d5380(undefined8 *param_1)

{
  byte bVar1;
  byte *unaff_x20;
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
  undefined2 uStack_38;
  undefined6 local_36;
  undefined2 uStack_30;
  undefined8 uStack_2e;
  
  bVar1 = unaff_x20[1];
  if (bVar1 == 1) {
    uStack_48 = *(undefined8 *)(unaff_x20 + 0x48);
    local_50 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_40 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_38 = (undefined2)*(undefined8 *)(unaff_x20 + 0x58);
    uStack_2e = *(undefined8 *)(unaff_x20 + 0x62);
    local_36 = (undefined6)*(undefined8 *)(unaff_x20 + 0x5a);
    uStack_30 = (undefined2)((ulong)*(undefined8 *)(unaff_x20 + 0x5a) >> 0x30);
    uStack_88 = *(undefined8 *)(unaff_x20 + 8);
    local_90 = *(undefined8 *)unaff_x20;
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_80 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x28);
    local_70 = *(undefined8 *)(unaff_x20 + 0x20);
    uStack_58 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_60 = *(undefined8 *)(unaff_x20 + 0x30);
    FUN_1006662c0(&local_90);
  }
  else if (bVar1 == 0x1e) {
    thunk_FUN_100668e40((ulong)*unaff_x20 | (ulong)*(ushort *)(unaff_x20 + 2) << 0x10 |
                        (ulong)*(uint *)(unaff_x20 + 4) << 0x20 | 0x1e00,
                        *(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10),
                        *(undefined4 *)(unaff_x20 + 0x18));
  }
  else if (bVar1 == 2) {
    thunk_FUN_100668d24((ulong)*unaff_x20 | (ulong)*(ushort *)(unaff_x20 + 2) << 0x10 |
                        (ulong)*(uint *)(unaff_x20 + 4) << 0x20 | 0x200,
                        *(undefined8 *)(unaff_x20 + 8));
  }
  else {
    FUN_1008d5ed0();
    _swift_allocError(&DAT_100ef2820,param_1,0,0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1008d5474 | FUN_1008d5474 */

void FUN_1008d5474(long param_1,code *param_2)

{
  undefined8 *puVar1;
  long unaff_x21;
  undefined4 local_144;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_d8 = 0;
  local_e0 = 0;
  uStack_c8 = 0;
  uStack_d0 = 0;
  uStack_f8 = 0;
  local_100 = 0;
  uStack_e8 = 0;
  uStack_f0 = 0;
  uStack_118 = 0;
  local_120 = 0;
  uStack_108 = 0;
  uStack_110 = 0;
  uStack_138 = 0;
  local_140 = 0;
  uStack_128 = 0;
  uStack_130 = 0;
  local_144 = 0x80;
  puVar1 = (undefined8 *)(ulong)*(uint *)(param_1 + 0x10);
  if ((int)*(uint *)(param_1 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    (*param_2)(puVar1,&local_140,&local_144);
    if (unaff_x21 == 0) {
      uStack_78 = uStack_f8;
      local_80 = local_100;
      uStack_68 = uStack_e8;
      uStack_70 = uStack_f0;
      uStack_58 = uStack_d8;
      local_60 = local_e0;
      uStack_48 = uStack_c8;
      uStack_50 = uStack_d0;
      uStack_b8 = uStack_138;
      local_c0 = local_140;
      uStack_a8 = uStack_128;
      uStack_b0 = uStack_130;
      uStack_98 = uStack_118;
      local_a0 = local_120;
      uStack_88 = uStack_108;
      uStack_90 = uStack_110;
      FUN_1008d5380();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1008d5584 | FUN_1008d5584 */

void FUN_1008d5584(code *param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
  if ((int)*(uint *)(unaff_x20 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    (*param_1)();
  }
  return;
}



/* Address: 0x1008d5604 | FUN_1008d5604 */

/* WARNING: Removing unreachable block (ram,0x0001008d569c) */

void FUN_1008d5604(undefined8 *param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_60;
  undefined8 uStack_58;
  int local_50;
  
  iVar2 = (int)&local_60;
  if ((int)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d574c);
    (*pcVar1)();
  }
  *(int *)(unaff_x20 + 0x10) = (int)param_1;
  FUN_10095e9d0(param_1,0x49,1);
  if (unaff_x21 != 0) {
    _swift_errorRetain();
    puVar3 = &DAT_100febaf0;
    FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
    _swift_dynamicCast(&local_60,&stack0xffffffffffffffb8,puVar3,&DAT_100ef11e8,0);
    if (iVar2 != 0) {
      _swift_errorRelease();
      FUN_10095d958();
      if (local_50 == 0x16) {
        _swift_bridgeObjectRelease(uStack_58);
        FUN_1008d5f10();
        _swift_allocError(&DAT_100f1bbc8,uStack_58,0,0);
      }
      else {
        FUN_1008d5300();
        _swift_allocError(&DAT_100ef11e8,param_1,0,0);
        *param_1 = local_60;
        param_1[1] = uStack_58;
        *(int *)(param_1 + 2) = local_50;
      }
      _swift_willThrow();
    }
    _swift_errorRelease(unaff_x21);
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    _swift_willThrow();
    _swift_release();
  }
  return;
}



/* Address: 0x1008d574c | FUN_1008d574c */

void FUN_1008d574c(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008d575c | FUN_1008d575c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1008d575c(void)

{
  return ZEXT816(0x100febb48);
}



/* Address: 0x1008d577c | FUN_1008d577c */

void FUN_1008d577c(int param_1,int param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long unaff_x21;
  undefined4 local_168 [2];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if ((param_1 == 6) && (param_2 == 1)) {
    uStack_d8 = 0;
    local_e0 = 0;
    local_168[0] = 0x80;
    uVar3 = (ulong)*(uint *)(unaff_x20 + 0x10);
    if ((int)*(uint *)(unaff_x20 + 0x10) < 0) goto LAB_1008d58c8;
    FUN_10095dc2c(uVar3,&local_e0,local_168);
    if (unaff_x21 != 0) {
      _swift_errorRelease();
      goto LAB_1008d58c8;
    }
    uStack_118 = 0;
    local_120 = 0;
    uStack_108 = 0;
    uStack_110 = 0;
    uStack_f8 = 0;
    local_100 = 0;
    uStack_e8 = 0;
    uStack_f0 = 0;
    uStack_158 = uStack_d8;
    local_160 = local_e0;
    uStack_148 = 0;
    uStack_150 = 0;
    uStack_138 = 0;
    local_140 = 0;
    uStack_128 = 0;
    uStack_130 = 0;
    FUN_1008d5380();
    _swift_release(uVar3 & 0x3fffffffffffffff);
    if ((long)uVar3 < 0) goto LAB_1008d58c8;
  }
  puVar1 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  FUN_1006167fc(param_3,FUN_1008d5fc8,&local_e0,param_4,puVar1,
                PTR___type_metadata_for____100eae0c8 + 8,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_168);
LAB_1008d58c8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008d5900 | FUN_1008d5900 */

void FUN_1008d5900(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5,
                  undefined8 *param_6)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *unaff_x21;
  
  puVar2 = (undefined8 *)(ulong)*(uint *)(param_3 + 0x10);
  if ((int)*(uint *)(param_3 + 0x10) < 0) {
    FUN_1008d5300();
    unaff_x21 = &DAT_100ef11e8;
    _swift_allocError(&DAT_100ef11e8,puVar2,0,0);
    *puVar2 = 0xd00000000000001f;
    puVar2[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar2 + 2) = 9;
    _swift_willThrow();
  }
  else {
    if (param_1 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d59bc);
      (*pcVar1)();
    }
    if ((ulong)(param_2 - param_1) >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d59b8);
      (*pcVar1)();
    }
    FUN_10095e2f8(puVar2,param_4,param_5,param_1,param_2 - param_1);
    if (unaff_x21 == (undefined *)0x0) {
      return;
    }
  }
  *param_6 = unaff_x21;
  return;
}



/* Address: 0x1008d59bc | FUN_1008d59bc */

void FUN_1008d59bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
  if ((int)*(uint *)(unaff_x20 + 0x10) < 0) {
    FUN_1008d5300(puVar1,param_1,param_2,param_3);
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_1008d5a40();
  }
  return;
}



/* Address: 0x1008d5a40 | FUN_1008d5a40 */

void FUN_1008d5a40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  code *pcVar2;
  void *start;
  UnsafeMutableBufferPointer<undefined> UVar3;
  ulong uVar4;
  long unaff_x21;
  void *pvVar5;
  long lVar6;
  undefined4 local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar6 = *(long *)(param_5 + -8);
  uVar4 = *(ulong *)(lVar6 + 0x40);
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d5b6c);
    (*pcVar2)();
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d5b70);
    (*pcVar2)();
  }
  local_6c = (undefined4)uVar4;
  uVar1 = 0;
  if (0xf < *(byte *)(lVar6 + 0x50)) {
    uVar1 = *(byte *)(lVar6 + 0x50) + 1;
  }
  pvVar5 = *(void **)(lVar6 + 0x48);
  start = pvVar5;
  _swift_slowAlloc(pvVar5,(ulong)uVar1 - 1);
  if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d5b74);
    (*pcVar2)();
  }
  _bzero(start,(size_t)pvVar5);
  UVar3 = Swift::UnsafeMutableBufferPointer::_init((__int64)start);
  if (UVar3.unknown == (undefined *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008d5b78);
    (*pcVar2)();
  }
  FUN_10095dcec(param_2,param_3,param_4,UVar3.unknown,&local_6c);
  if (unaff_x21 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1,UVar3.unknown,param_5);
  }
  FUN_1008d5f84(UVar3.unknown,start,param_5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1008d5b7c | FUN_1008d5b7c */

void FUN_1008d5b7c(undefined8 *param_1)

{
  long unaff_x20;
  undefined1 auStack_40 [16];
  int local_30;
  
  local_30 = *(int *)(unaff_x20 + 0x10);
  if (local_30 < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,param_1,0,0);
    *param_1 = 0xd00000000000001f;
    param_1[1] = 0x8000000100db4780;
    *(undefined4 *)(param_1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    FUN_100667428(FUN_1008d5f50,auStack_40,param_1,PTR___type_metadata_for____100eae0c8 + 8);
  }
  return;
}



/* Address: 0x1008d5c1c | FUN_1008d5c1c */

void FUN_1008d5c1c(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d5c50);
    (*pcVar1)();
  }
  if (param_2 >> 0x20 == 0) {
    FUN_10095d884(param_3,param_1,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d5c54);
  (*pcVar1)();
}



/* Address: 0x1008d5c54 | FUN_1008d5c54 */

void FUN_1008d5c54(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  
  puVar1 = (undefined8 *)(ulong)*(uint *)(unaff_x20 + 0x10);
  if ((int)*(uint *)(unaff_x20 + 0x10) < 0) {
    FUN_1008d5300();
    _swift_allocError(&DAT_100ef11e8,puVar1,0,0);
    *puVar1 = 0xd00000000000001f;
    puVar1[1] = 0x8000000100db4780;
    *(undefined4 *)(puVar1 + 2) = 9;
    _swift_willThrow();
  }
  else {
    *(undefined4 *)(unaff_x20 + 0x10) = 0xffffffff;
    FUN_10095d958();
  }
  return;
}



/* Address: 0x1008d5cd4 | FUN_1008d5cd4 */

void FUN_1008d5cd4(void)

{
  undefined8 *unaff_x20;
  
  (**(code **)(*(long *)*unaff_x20 + 0xb8))();
  return;
}



/* Address: 0x1008d5cfc | FUN_1008d5cfc */

void FUN_1008d5cfc(void)

{
  FUN_1008d5b7c();
  return;
}



/* Address: 0x1008d5d1c | FUN_1008d5d1c */

void FUN_1008d5d1c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008d5474(*unaff_x20,FUN_10095dc2c);
  return;
}



/* Address: 0x1008d5d3c | FUN_1008d5d3c */

void FUN_1008d5d3c(void)

{
  undefined8 *unaff_x20;
  
  FUN_1008d5474(*unaff_x20,FUN_10095db6c);
  return;
}



/* Address: 0x1008d5d5c | FUN_1008d5d5c */

void FUN_1008d5d5c(void)

{
  FUN_1008d577c();
  return;
}



/* Address: 0x1008d5d7c | FUN_1008d5d7c */

void FUN_1008d5d7c(void)

{
  FUN_1008d59bc();
  return;
}



/* Address: 0x1008d5d9c | FUN_1008d5d9c */

undefined1  [16] FUN_1008d5d9c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x14,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar2,SVar3);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = &SUB_e200000000000000;
  SVar2.str = (char *)0x7d20;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  auVar1._8_8_ = 0x8000000100db47a0;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x1008d5e40 | FUN_1008d5e40 */

void FUN_1008d5e40(void)

{
  FUN_1008d5d9c();
  return;
}



/* Address: 0x1008d5e60 | FUN_1008d5e60 */

undefined ** FUN_1008d5e60(void)

{
  return &PTR_PTR_100f0f2d8;
}



/* Address: 0x1008d5e6c | FUN_1008d5e6c */

void FUN_1008d5e6c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_1008d5e90();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x1008d5e90 | FUN_1008d5e90 */

void FUN_1008d5e90(void)

{
  long lVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100febc60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  lVar1 = (long)DAT_100febc60;
  FUN_1008d575c();
  pTVar2 = &TargetProtocolConformanceDescriptor_100c8345c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8345c,lVar1);
  DAT_100febc60 = pTVar2;
  return;
}



/* Address: 0x1008d5ed0 | FUN_1008d5ed0 */

void FUN_1008d5ed0(void)

{
  undefined8 uVar1;
  
  if (DAT_100febc68 != 0) {
    return;
  }
  uVar1 = 0x100c6c140;
  _swift_getWitnessTable(0x100c6c140,&DAT_100ef2820);
  DAT_100febc68 = uVar1;
  return;
}



/* Address: 0x1008d5f10 | FUN_1008d5f10 */

void FUN_1008d5f10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100febc70 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c861d4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c861d4,&DAT_100f1bbc8);
  DAT_100febc70 = pTVar1;
  return;
}



/* Address: 0x1008d5f50 | FUN_1008d5f50 */

void FUN_1008d5f50(undefined8 param_1,ulong param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d5f80);
    (*pcVar1)();
  }
  if (param_2 >> 0x20 == 0) {
    FUN_10095d884(*(undefined4 *)(unaff_x20 + 0x10),param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008d5f84);
  (*pcVar1)();
}



/* Address: 0x1008d5f60 | FUN_1008d5f60 */

void FUN_1008d5f60(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10095d884(*(undefined4 *)(unaff_x20 + 0x10),param_1);
  return;
}



/* Address: 0x1008d5f84 | FUN_1008d5f84 */

void FUN_1008d5f84(UnsafeMutablePointer param_1,long param_2)

{
  Swift::UnsafeMutablePointer::deinitialize(1,param_1);
  if (param_2 != 0) {
    _swift_slowDealloc(param_2,0xffffffffffffffff,0xffffffffffffffff);
    return;
  }
  return;
}



/* Address: 0x1008d5fc8 | FUN_1008d5fc8 */

void FUN_1008d5fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_1008d5900(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18),
                *(undefined4 *)(unaff_x20 + 0x1c),param_3);
  return;
}



/* Address: 0x1008d5fe8 | FUN_1008d5fe8 */

void FUN_1008d5fe8(void)

{
  FUN_1008d5584();
  return;
}



/* Address: 0x1008d6008 | FUN_1008d6008 */

void FUN_1008d6008(code *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  lVar2 = *(long *)(unaff_x20 + 0x20);
  if (*(long *)(lVar2 + 0x10) == 0) {
    uVar1 = 0xffffffff;
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  else {
    uVar1 = (ulong)*(uint *)(*(long *)(lVar2 + 0x10) + 0x10);
    lVar2 = *(long *)(lVar2 + 0x18);
  }
  if (lVar2 == 0) {
    uVar3 = 0xffffffff00000000;
  }
  else {
    uVar3 = (ulong)*(uint *)(lVar2 + 0x10) << 0x20;
  }
  (*param_1)(uVar3 | uVar1);
  return;
}



/* Address: 0x1008d6064 | FUN_1008d6064 */

void FUN_1008d6064(void)

{
  FUN_1008d609c();
  return;
}



/* Address: 0x1008d6080 | FUN_1008d6080 */

void FUN_1008d6080(void)

{
  FUN_1008d609c();
  return;
}



/* Address: 0x1008d609c | FUN_1008d609c */

void FUN_1008d609c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_30 = param_3;
  uStack_28 = param_1;
  local_20 = param_2;
  FUN_1008d5fe8(param_6,auStack_40);
  return;
}



/* Address: 0x1008d60c8 | FUN_1008d60c8 */

void FUN_1008d60c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  local_30 = param_3;
  uStack_28 = param_1;
  local_20 = param_2;
  FUN_1008d6008(FUN_1008d6120,auStack_40);
  return;
}



/* Address: 0x1008d60f8 | FUN_1008d60f8 */

void FUN_1008d60f8(undefined4 param_1)

{
  long unaff_x20;
  undefined4 local_14;
  
  local_14 = param_1;
  (**(code **)(unaff_x20 + 0x18))(&local_14);
  return;
}



/* Address: 0x1008d6120 | FUN_1008d6120 */

void FUN_1008d6120(undefined8 param_1)

{
  long unaff_x20;
  undefined8 local_18;
  
  local_18 = param_1;
  (**(code **)(unaff_x20 + 0x18))(&local_18);
  return;
}



/* Address: 0x1008d6148 | FUN_1008d6148 */

void FUN_1008d6148(void)

{
  FUN_1008d60f8();
  return;
}



/* Address: 0x1008d615c | thunk_FUN_1008d6160 */

/* WARNING: Removing unreachable block (ram,0x0001008d6250) */
/* WARNING: Removing unreachable block (ram,0x0001008d626c) */
/* WARNING: Removing unreachable block (ram,0x0001008d637c) */

code * thunk_FUN_1008d6160(code *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  code *pcStack_80;
  undefined8 uStack_78;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  
  uStack_70 = SUB84(param_1,0);
  uStack_6c = (undefined4)param_2;
  lVar5 = *unaff_x20;
  lVar10 = *(long *)(param_4 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  lVar3 = (long)&pcStack_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  uStack_78 = param_3;
  FUN_1008db22c();
  pcVar6 = param_1;
  _swift_getObjectType();
  pcVar8 = *(code **)(param_2 + 0x10);
  _swift_unknownObjectRetain(param_1);
  (*pcVar8)();
  _swift_unknownObjectRelease();
  FUN_1008db22c();
  pcVar8 = param_1;
  _swift_getObjectType();
  if (((ulong)pcVar6 & 1) == 0) {
    pcStack_80 = pcVar8;
    (**(code **)(lVar10 + 0x10))(lVar3,uStack_78,param_4);
    uVar2 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
    pcVar8 = (code *)&DAT_100f0f380;
    _swift_allocObject(&DAT_100f0f380,uVar9 + lVar7,uVar2 | 7);
    *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(lVar5 + 0x50);
    *(long *)(pcVar8 + 0x18) = param_4;
    *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(lVar5 + 0x58);
    *(long **)(pcVar8 + 0x28) = unaff_x20;
    *(undefined4 *)(pcVar8 + 0x30) = uStack_70;
    *(undefined4 *)(pcVar8 + 0x34) = uStack_6c;
    (**(code **)(lVar10 + 0x20))(pcVar8 + uVar9,lVar3,param_4);
    pcVar4 = *(code **)(param_2 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _swift_retain();
    pcVar6 = FUN_1008d6710;
    (*pcVar4)(FUN_1008d6710,pcVar8,PTR___type_metadata_for____100eae0c8 + 8,pcStack_80,param_2);
    _swift_unknownObjectRelease(param_1);
  }
  else {
    FUN_1008f68cc();
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
    lVar3 = *(long *)(*unaff_x20 + 0x58);
    pcVar6 = *(code **)(lVar3 + 0x48);
    _swift_retain();
    (*pcVar6)(uStack_70,uStack_6c,uStack_78,param_4,uVar1,lVar3);
    FUN_10090d0b8(0,0,pcVar8);
    pcVar6 = pcVar8;
  }
  _swift_release(pcVar8);
  return pcVar6;
}



/* Address: 0x1008d6160 | FUN_1008d6160 */

/* WARNING: Removing unreachable block (ram,0x0001008d6250) */
/* WARNING: Removing unreachable block (ram,0x0001008d626c) */
/* WARNING: Removing unreachable block (ram,0x0001008d637c) */

code * FUN_1008d6160(code *param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  long lVar10;
  code *local_80;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  
  local_70 = SUB84(param_1,0);
  uStack_6c = (undefined4)param_2;
  lVar5 = *unaff_x20;
  lVar10 = *(long *)(param_4 + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  lVar3 = (long)&local_80 - (lVar7 + 0xfU & 0xfffffffffffffff0);
  local_78 = param_3;
  FUN_1008db22c();
  pcVar6 = param_1;
  _swift_getObjectType();
  pcVar8 = *(code **)(param_2 + 0x10);
  _swift_unknownObjectRetain(param_1);
  (*pcVar8)();
  _swift_unknownObjectRelease();
  FUN_1008db22c();
  pcVar8 = param_1;
  _swift_getObjectType();
  if (((ulong)pcVar6 & 1) == 0) {
    local_80 = pcVar8;
    (**(code **)(lVar10 + 0x10))(lVar3,local_78,param_4);
    uVar2 = (ulong)*(byte *)(lVar10 + 0x50);
    uVar9 = uVar2 + 0x38 & (uVar2 ^ 0xffffffffffffffff);
    pcVar8 = (code *)&DAT_100f0f380;
    _swift_allocObject(&DAT_100f0f380,uVar9 + lVar7,uVar2 | 7);
    *(undefined8 *)(pcVar8 + 0x10) = *(undefined8 *)(lVar5 + 0x50);
    *(long *)(pcVar8 + 0x18) = param_4;
    *(undefined8 *)(pcVar8 + 0x20) = *(undefined8 *)(lVar5 + 0x58);
    *(long **)(pcVar8 + 0x28) = unaff_x20;
    *(undefined4 *)(pcVar8 + 0x30) = local_70;
    *(undefined4 *)(pcVar8 + 0x34) = uStack_6c;
    (**(code **)(lVar10 + 0x20))(pcVar8 + uVar9,lVar3,param_4);
    pcVar4 = *(code **)(param_2 + 0x20);
    _swift_unknownObjectRetain(param_1);
    _swift_retain();
    pcVar6 = FUN_1008d6710;
    (*pcVar4)(FUN_1008d6710,pcVar8,PTR___type_metadata_for____100eae0c8 + 8,local_80,param_2);
    _swift_unknownObjectRelease(param_1);
  }
  else {
    FUN_1008f68cc();
    uVar1 = *(undefined8 *)(*unaff_x20 + 0x50);
    lVar3 = *(long *)(*unaff_x20 + 0x58);
    pcVar6 = *(code **)(lVar3 + 0x48);
    _swift_retain();
    (*pcVar6)(local_70,uStack_6c,local_78,param_4,uVar1,lVar3);
    FUN_10090d0b8(0,0,pcVar8);
    pcVar6 = pcVar8;
  }
  _swift_release(pcVar8);
  return pcVar6;
}



/* Address: 0x1008d6410 | FUN_1008d6410 */

void FUN_1008d6410(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*unaff_x20 + 0x58) + 0x48))();
  return;
}



/* Address: 0x1008d6440 | thunk_FUN_1008d6444 */

code * thunk_FUN_1008d6444(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  code *pcVar5;
  code *pcVar6;
  
  pcVar1 = param_1;
  lVar4 = param_2;
  FUN_1008db22c();
  pcVar2 = pcVar1;
  _swift_getObjectType();
  pcVar6 = *(code **)(lVar4 + 0x10);
  _swift_unknownObjectRetain(pcVar1);
  (*pcVar6)();
  _swift_unknownObjectRelease(pcVar1);
  FUN_1008db22c();
  pcVar6 = pcVar1;
  _swift_getObjectType();
  if (((ulong)pcVar2 & 1) == 0) {
    puVar3 = &DAT_100f0f358;
    _swift_allocObject(&DAT_100f0f358,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    *(int *)(puVar3 + 0x20) = (int)param_1;
    *(int *)(puVar3 + 0x24) = (int)param_2;
    pcVar5 = *(code **)(lVar4 + 0x20);
    _swift_unknownObjectRetain(pcVar1);
    _swift_retain();
    pcVar2 = FUN_1008d6794;
    (*pcVar5)(FUN_1008d6794,puVar3,param_3,pcVar6,lVar4);
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(puVar3);
  }
  else {
    FUN_1008f68cc();
    _swift_retain();
    FUN_1008d689c();
    _swift_release(pcVar6);
    pcVar2 = pcVar6;
  }
  return pcVar2;
}



/* Address: 0x1008d6444 | FUN_1008d6444 */

code * FUN_1008d6444(code *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 unaff_x20;
  code *pcVar5;
  code *pcVar6;
  
  pcVar1 = param_1;
  lVar4 = param_2;
  FUN_1008db22c();
  pcVar2 = pcVar1;
  _swift_getObjectType();
  pcVar6 = *(code **)(lVar4 + 0x10);
  _swift_unknownObjectRetain(pcVar1);
  (*pcVar6)();
  _swift_unknownObjectRelease(pcVar1);
  FUN_1008db22c();
  pcVar6 = pcVar1;
  _swift_getObjectType();
  if (((ulong)pcVar2 & 1) == 0) {
    puVar3 = &DAT_100f0f358;
    _swift_allocObject(&DAT_100f0f358,0x28,7);
    *(undefined8 *)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = unaff_x20;
    *(int *)(puVar3 + 0x20) = (int)param_1;
    *(int *)(puVar3 + 0x24) = (int)param_2;
    pcVar5 = *(code **)(lVar4 + 0x20);
    _swift_unknownObjectRetain(pcVar1);
    _swift_retain();
    pcVar2 = FUN_1008d6794;
    (*pcVar5)(FUN_1008d6794,puVar3,param_3,pcVar6,lVar4);
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(puVar3);
  }
  else {
    FUN_1008f68cc();
    _swift_retain();
    FUN_1008d689c();
    _swift_release(pcVar6);
    pcVar2 = pcVar6;
  }
  return pcVar2;
}



/* Address: 0x1008d658c | FUN_1008d658c */

void FUN_1008d658c(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*unaff_x20 + 0x58) + 0x50))();
  return;
}



/* Address: 0x1008d65bc | FUN_1008d65bc */

void FUN_1008d65bc(void)

{
  thunk_FUN_1008d6160();
  return;
}



/* Address: 0x1008d65dc | FUN_1008d65dc */

void FUN_1008d65dc(void)

{
  FUN_1008d6160();
  return;
}



/* Address: 0x1008d65fc | FUN_1008d65fc */

void FUN_1008d65fc(void)

{
  thunk_FUN_1008d6444();
  return;
}



/* Address: 0x1008d661c | FUN_1008d661c */

void FUN_1008d661c(void)

{
  FUN_1008d6444();
  return;
}



/* Address: 0x1008d663c | FUN_1008d663c */

void FUN_1008d663c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d6660 | FUN_1008d6660 */

void FUN_1008d6660(void)

{
  FUN_1008d6674();
  return;
}



/* Address: 0x1008d6674 | FUN_1008d6674 */

void FUN_1008d6674(void)

{
  long unaff_x20;
  
  (**(code **)(*(long *)(**(long **)(unaff_x20 + 0x18) + 0x58) + 0x50))
            (*(undefined4 *)(unaff_x20 + 0x20),*(undefined4 *)(unaff_x20 + 0x24),
             *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(**(long **)(unaff_x20 + 0x18) + 0x50)
            );
  return;
}



/* Address: 0x1008d66ac | FUN_1008d66ac */

void FUN_1008d66ac(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d6710 | FUN_1008d6710 */

void FUN_1008d6710(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  (**(code **)(*(long *)(**(long **)(unaff_x20 + 0x28) + 0x58) + 0x48))
            (*(undefined4 *)(unaff_x20 + 0x30),*(undefined4 *)(unaff_x20 + 0x34),
             unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),*(long *)(unaff_x20 + 0x18),
             *(undefined8 *)(**(long **)(unaff_x20 + 0x28) + 0x50));
  return;
}



/* Address: 0x1008d6760 | FUN_1008d6760 */

void FUN_1008d6760(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008d678c | FUN_1008d678c */

void FUN_1008d678c(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008d6794 | FUN_1008d6794 */

void FUN_1008d6794(void)

{
  FUN_1008d6660();
  return;
}



/* Address: 0x1008d67a8 | FUN_1008d67a8 */

void FUN_1008d67a8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_b8;
  long local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_b8 = &DAT_100c83528;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_b0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_a8 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    puStack_88 = &DAT_100c83540;
    local_80 = &DAT_100c83558;
    puStack_78 = &DAT_100c83570;
    puStack_68 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_70 = &DAT_100c83588;
    local_60 = &DAT_100c83558;
    puStack_58 = &DAT_100c83558;
    local_50 = &DAT_100c83570;
    puStack_48 = &DAT_100c835a0;
    puStack_38 = PTR___value_witness_table_for_Builtin_Int8_100eabd50 + 0x40;
    local_40 = &DAT_100c835b8;
    local_30 = &DAT_100c835d0;
    puStack_28 = &DAT_100c835b8;
    local_a0 = puStack_a8;
    puStack_98 = puStack_a8;
    local_90 = puStack_a8;
    _swift_initClassMetadata2(param_1,0,0x13,&local_b8,param_1 + 0x60);
  }
  return;
}



/* Address: 0x1008d689c | FUN_1008d689c */

/* WARNING: Removing unreachable block (ram,0x0001008d68ec) */
/* WARNING: Removing unreachable block (ram,0x0001008d68f0) */
/* WARNING: Removing unreachable block (ram,0x0001008d6900) */

void FUN_1008d689c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_50 [16];
  
  lVar2 = *(long *)(param_4 + -8);
  puVar1 = auStack_50 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_2)(puVar1);
  if (param_1 != 0) {
    FUN_100646e88(puVar1,param_1,param_4);
  }
  (**(code **)(lVar2 + 8))(puVar1,param_4);
  return;
}



/* Address: 0x1008d6948 | FUN_1008d6948 */

void FUN_1008d6948(void)

{
  FUN_1008db22c();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x1008d6974 | FUN_1008d6974 */

void FUN_1008d6974(long param_1)

{
  if (param_1 != 0) {
    FUN_10090d0b8(0,0,param_1);
    return;
  }
  return;
}



/* Address: 0x1008d698c | FUN_1008d698c */

void FUN_1008d698c(undefined8 param_1,undefined8 param_2)

{
  FUN_10062cc28(param_2);
  return;
}


