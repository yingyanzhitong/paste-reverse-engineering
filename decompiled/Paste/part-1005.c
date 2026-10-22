/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ad3a88 | FUN_100ad3a88 */

int FUN_100ad3a88(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[10] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100ad3adc | FUN_100ad3adc */

void FUN_100ad3adc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = 0;
      param_1[4] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x100ad3b34 | FUN_100ad3b34 */

undefined1  [16] FUN_100ad3b34(void)

{
  return ZEXT816(0x100f31238);
}



/* Address: 0x100ad3b44 | FUN_100ad3b44 */

void FUN_100ad3b44(undefined8 *param_1)

{
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[4] = 0xf000000000000000;
  param_1[6] = 0;
  param_1[5] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  param_1[9] = 0;
  param_1[0xc] = 0;
  param_1[0xb] = 0;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  *(undefined4 *)(param_1 + 0x11) = 0;
  return;
}



/* Address: 0x100ad3b74 | FUN_100ad3b74 */

void FUN_100ad3b74(undefined8 *param_1)

{
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[0xc] = 1;
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  param_1[0x10] = 0;
  param_1[0xf] = 0;
  param_1[0x12] = 0;
  param_1[0x11] = 0;
  param_1[0x14] = 0;
  param_1[0x13] = 0;
  param_1[0x16] = 0;
  param_1[0x15] = 0;
  param_1[0x18] = 0;
  param_1[0x17] = 0;
  param_1[0x1a] = 0;
  param_1[0x19] = 0;
  param_1[0x1c] = 0;
  param_1[0x1b] = 0;
  param_1[0x1e] = 0;
  param_1[0x1d] = 0;
  return;
}



/* Address: 0x100ad3bb4 | FUN_100ad3bb4 */

void FUN_100ad3bb4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ad5d50(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100ad3bcc | FUN_100ad3bcc */

void FUN_100ad3bcc(void)

{
  FUN_100ad3bb4();
  return;
}



/* Address: 0x100ad3be0 | FUN_100ad3be0 */

void FUN_100ad3be0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100ad4034(1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x100ad3c14 | FUN_100ad3c14 */

undefined4 FUN_100ad3c14(char param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != '\0') {
    uVar1 = 8;
  }
  return uVar1;
}



/* Address: 0x100ad3c24 | FUN_100ad3c24 */

void FUN_100ad3c24(__DataStorage *param_1,long param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  __DataStorage *p_Var4;
  long lVar5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  undefined1 *puVar8;
  uint uVar9;
  long lVar10;
  undefined4 local_74;
  undefined1 local_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar9 != 0) {
      lVar10 = (long)(int)param_2;
      lVar5 = (param_2 >> 0x20) - lVar10;
      if (param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad3e38);
        (*pcVar3)();
      }
      p_Var6 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      if (p_Var6 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        p_Var7 = (__DataStorage *)0x0;
        p_Var4 = (__DataStorage *)0x0;
      }
      else {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar10,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad3e44);
          (*pcVar3)();
        }
        p_Var6 = p_Var6 + (lVar10 - (long)p_Var7);
        lVar10 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (lVar5 <= lVar10) {
          lVar10 = lVar5;
        }
        p_Var7 = (__DataStorage *)0x0;
        if (p_Var6 != (__DataStorage *)0x0) {
          p_Var7 = p_Var6;
        }
        p_Var4 = (__DataStorage *)0x0;
        if (p_Var6 != (__DataStorage *)0x0) {
          p_Var4 = p_Var6 + lVar10;
        }
      }
LAB_100ad3de8:
      FUN_100ad3f98(local_70,p_Var7,p_Var4,param_2,param_3,param_1);
      local_74 = CONCAT13(local_70[3],CONCAT12(local_70[2],CONCAT11(local_70[1],local_70[0])));
      goto LAB_100ad3e00;
    }
    local_70[0] = (undefined1)param_2;
    local_70[1] = (undefined1)((ulong)param_2 >> 8);
    local_70[2] = (undefined1)((ulong)param_2 >> 0x10);
    local_70[3] = (undefined1)((ulong)param_2 >> 0x18);
    local_70[4] = (undefined1)((ulong)param_2 >> 0x20);
    local_70[5] = (undefined1)((ulong)param_2 >> 0x28);
    local_70[6] = (undefined1)((ulong)param_2 >> 0x30);
    local_70[7] = (undefined1)((ulong)param_2 >> 0x38);
    local_70[8] = (undefined1)param_3;
    local_70[9] = (undefined1)(param_3 >> 8);
    local_70[10] = (undefined1)(param_3 >> 0x10);
    local_70[0xb] = (undefined1)(param_3 >> 0x18);
    local_70[0xc] = (undefined1)(param_3 >> 0x20);
    local_70[0xd] = (undefined1)(param_3 >> 0x28);
    puVar8 = local_70 + (param_3 >> 0x30 & 0xff);
  }
  else {
    if (uVar9 == 2) {
      lVar5 = *(long *)(param_2 + 0x10);
      lVar10 = *(long *)(param_2 + 0x18);
      p_Var7 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_1);
      p_Var4 = (__DataStorage *)0x0;
      if (p_Var7 != (__DataStorage *)0x0) {
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar5,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad3e40);
          (*pcVar3)();
        }
        p_Var7 = p_Var7 + (lVar5 - (long)p_Var4);
      }
      lVar1 = lVar10 - lVar5;
      if (SBORROW8(lVar10,lVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad3e3c);
        (*pcVar3)();
      }
      lVar5 = Foundation::__DataStorage::get__length
                        ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
      if (lVar1 <= lVar5) {
        lVar5 = lVar1;
      }
      p_Var4 = (__DataStorage *)0x0;
      if (p_Var7 != (__DataStorage *)0x0) {
        p_Var4 = p_Var7 + lVar5;
      }
      goto LAB_100ad3de8;
    }
    local_70[8] = 0;
    local_70[9] = 0;
    local_70[10] = 0;
    local_70[0xb] = 0;
    local_70[0xc] = 0;
    local_70[0xd] = 0;
    local_70[0] = 0;
    local_70[1] = 0;
    local_70[2] = 0;
    local_70[3] = 0;
    local_70[4] = 0;
    local_70[5] = 0;
    local_70[6] = 0;
    local_70[7] = 0;
    puVar8 = local_70;
  }
  FUN_100ad3f98(&local_74,local_70,puVar8,param_2,param_3,param_1);
LAB_100ad3e00:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_74);
  }
  return;
}



/* Address: 0x100ad3e48 | FUN_100ad3e48 */

void FUN_100ad3e48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100ad4034(0,param_1,param_2,0,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x100ad3e7c | FUN_100ad3e7c */

undefined4 FUN_100ad3e7c(short param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 1;
  if (param_1 != 8) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x100ad3e98 | FUN_100ad3e98 */

void FUN_100ad3e98(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  uint uVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = 8;
  }
  HVar2.unknown = (undefined *)(ulong)uVar3;
  Swift::Hasher::_combine((__uint16)uVar3,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100ad3ee4 | FUN_100ad3ee4 */

void FUN_100ad3ee4(undefined8 param_1,Hasher param_2)

{
  __uint16 _Var1;
  char *unaff_x20;
  
  _Var1 = 0;
  if (*unaff_x20 != '\0') {
    _Var1 = 8;
  }
  Swift::Hasher::_combine(_Var1,param_2);
  return;
}



/* Address: 0x100ad3f18 | FUN_100ad3f18 */

void FUN_100ad3f18(__int64 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  uint uVar3;
  char *unaff_x20;
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  uVar3 = 0;
  if (cVar1 != '\0') {
    uVar3 = 8;
  }
  HVar2.unknown = (undefined *)(ulong)uVar3;
  Swift::Hasher::_combine((__uint16)uVar3,param_2);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100ad3f60 | FUN_100ad3f60 */

void FUN_100ad3f60(undefined1 *param_1,short *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  
  uVar2 = 1;
  if (*param_2 != 8) {
    uVar2 = 2;
  }
  uVar1 = 0;
  if (*param_2 != 0) {
    uVar1 = uVar2;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ad3f80 | FUN_100ad3f80 */

void FUN_100ad3f80(undefined2 *param_1)

{
  undefined2 uVar1;
  char *unaff_x20;
  
  uVar1 = 0;
  if (*unaff_x20 != '\0') {
    uVar1 = 8;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100ad3f98 | FUN_100ad3f98 */

void FUN_100ad3f98(undefined4 *param_1,Bytef *param_2,undefined8 param_3,long param_4,ulong param_5,
                  uint param_6)

{
  uint uVar1;
  code *pcVar2;
  uLong uVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  
  uVar1 = (uint)(param_5 >> 0x20);
  uVar5 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar5 == 0) {
      uVar4 = param_5 >> 0x30 & 0xff;
      goto LAB_100ad4004;
    }
    iVar6 = (int)((ulong)param_4 >> 0x20);
    if (SBORROW4(iVar6,(int)param_4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4034);
      (*pcVar2)();
    }
    uVar4 = (ulong)(iVar6 - (int)param_4);
  }
  else {
    if (uVar5 != 2) {
      uVar4 = 0;
      goto LAB_100ad4004;
    }
    uVar4 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
    if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad3fe0);
      (*pcVar2)();
    }
  }
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad402c);
    (*pcVar2)();
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4000);
    (*pcVar2)();
  }
LAB_100ad4004:
  uVar3 = _crc32((ulong)param_6,param_2,(uInt)uVar4);
  if (uVar3 >> 0x20 == 0) {
    *param_1 = (int)uVar3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4030);
  (*pcVar2)();
}



/* Address: 0x100ad4034 | FUN_100ad4034 */

/* WARNING: Removing unreachable block (ram,0x000100ad4be0) */

void FUN_100ad4034(undefined8 param_1,long param_2,ulong param_3,uint param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  uInt uVar1;
  code *pcVar2;
  bool bVar3;
  Deallocator DVar4;
  undefined7 extraout_var;
  ulong bytes;
  ulong *puVar5;
  __DataStorage *buf;
  uLong uVar6;
  code *pcVar7;
  __DataStorage *p_Var8;
  __DataStorage *p_Var9;
  __DataStorage *p_Var10;
  ulong *puVar11;
  __DataStorage *p_Var12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  int iVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long unaff_x21;
  __DataStorage *p_Var20;
  long lVar21;
  ulong uVar22;
  uint uVar23;
  uint uVar24;
  undefined1 auStack_160 [8];
  ulong *local_158;
  uint local_14c;
  ulong local_148;
  code *local_140;
  undefined8 local_138;
  long local_130;
  ulong local_128;
  uLong local_120;
  uint local_118;
  uint local_114;
  code *local_110;
  undefined8 uStack_108;
  ulong local_100;
  long local_f8;
  __DataStorage *local_f0;
  code *local_e8;
  long lStack_e0;
  int local_d4;
  ulong local_d0;
  ulong local_c8;
  __DataStorage local_b8 [32];
  ulong local_98;
  ulong uStack_90;
  __DataStorage *local_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_140 = param_5;
  local_138 = param_6;
  local_130 = param_2;
  local_118 = param_4;
  local_110 = param_7;
  uStack_108 = param_8;
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar21 = *(long *)(CONCAT71(extraout_var,DVar4.value) + -8);
  lVar17 = *(long *)(lVar21 + 0x40);
  bytes = param_3;
  _swift_slowAlloc(param_3,0xffffffffffffffff);
  puVar5 = (ulong *)0x28;
  _swift_slowAlloc(0x28,0xffffffffffffffff);
  uStack_90 = puVar5[1];
  local_98 = *puVar5;
  local_88 = (__DataStorage *)puVar5[2];
  uStack_78 = puVar5[4];
  local_80 = puVar5[3];
  p_Var8 = (__DataStorage *)&local_98;
  local_d4 = (int)param_1;
  _compression_stream_init(p_Var8,param_1,0x205);
  if ((int)p_Var8 == -1) {
    FUN_100ad5bbc();
    _swift_allocError(&DAT_100f31478,p_Var8,0,0);
    *p_Var8 = (__DataStorage)0x0;
    _swift_willThrow();
  }
  else {
    local_120 = 0;
    p_Var20 = (__DataStorage *)0x0;
    local_f0 = (__DataStorage *)0x0;
    local_80 = 0;
    local_14c = (uint)(0 < (long)param_3);
    local_114 = *(uint *)
                 PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
    ;
    uVar19 = 0xf000000000000000;
    local_158 = puVar5;
    local_148 = bytes;
    local_100 = param_3;
    local_f8 = CONCAT71(extraout_var,DVar4.value);
    local_e8 = (code *)(auStack_160 + -(lVar17 + 0xfU & 0xfffffffffffffff0));
    lStack_e0 = lVar21;
LAB_100ad418c:
    uVar14 = local_80;
    local_98 = bytes;
    uStack_90 = param_3;
    if (SBORROW8(local_130,(long)p_Var20)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4cec);
      (*pcVar2)();
    }
    if (local_130 - (long)p_Var20 <= (long)param_3) {
      param_3 = local_130 - (long)p_Var20;
    }
    p_Var9 = p_Var20;
    (*local_140)();
    if (unaff_x21 == 0) {
      FUN_10003bf18(local_f0,uVar19);
      uVar13 = (uint)(param_3 >> 0x20);
      uVar24 = uVar13 >> 0x1e;
      uVar23 = uVar13 >> 0x1e;
      if (uVar13 >> 0x1e < 2) {
        if (uVar23 == 0) {
          uVar19 = param_3 >> 0x30 & 0xff;
          uVar22 = uVar19;
        }
        else {
          iVar15 = (int)((ulong)p_Var9 >> 0x20);
          if (SBORROW4(iVar15,(int)p_Var9)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d10);
            (*pcVar2)();
          }
          uVar19 = (ulong)(iVar15 - (int)p_Var9);
          uVar22 = uVar19;
        }
      }
      else if (uVar23 == 2) {
        uVar22 = *(long *)(p_Var9 + 0x18) - *(long *)(p_Var9 + 0x10);
        if (SBORROW8(*(long *)(p_Var9 + 0x18),*(long *)(p_Var9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d14);
          (*pcVar2)();
        }
        uVar19 = *(long *)(p_Var9 + 0x18) - *(long *)(p_Var9 + 0x10);
        if (SBORROW8(*(long *)(p_Var9 + 0x18),*(long *)(p_Var9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d18);
          local_80 = uVar22;
          (*pcVar2)();
        }
      }
      else {
        uVar19 = 0;
        uVar22 = uVar19;
      }
      bVar3 = SCARRY8((long)p_Var20,uVar19);
      p_Var20 = p_Var20 + uVar19;
      local_80 = uVar22;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4cf0);
        (*pcVar2)();
      }
      p_Var10 = p_Var9;
      FUN_1001037b4(p_Var9,param_3);
      uVar19 = param_3;
      if (1 < uVar23) goto LAB_100ad4214;
LAB_100ad4318:
      iVar15 = (int)p_Var9;
      if (uVar24 == 0) {
        local_b8[0] = SUB81(p_Var9,0);
        local_b8[1] = SUB81((ulong)p_Var9 >> 8,0);
        local_b8[2] = SUB81((ulong)p_Var9 >> 0x10,0);
        local_b8[3] = SUB81((ulong)p_Var9 >> 0x18,0);
        local_b8[4] = SUB81((ulong)p_Var9 >> 0x20,0);
        local_b8[5] = SUB81((ulong)p_Var9 >> 0x28,0);
        local_b8[6] = SUB81((ulong)p_Var9 >> 0x30,0);
        local_b8[7] = SUB81((ulong)p_Var9 >> 0x38,0);
        local_b8[8] = SUB81(uVar19,0);
        local_b8[9] = SUB81(uVar19 >> 8,0);
        local_b8[10] = SUB81(uVar19 >> 0x10,0);
        local_b8[0xb] = SUB81(uVar19 >> 0x18,0);
        local_b8[0xc] = SUB81(uVar19 >> 0x20,0);
        uVar18 = uVar19 >> 0x30 & 0xff;
        local_b8[0xd] = SUB81(uVar19 >> 0x28,0);
        if (!SBORROW8(uVar18,uVar22)) {
          local_88 = local_b8 + (uVar18 - uVar22);
          goto LAB_100ad4398;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d00);
        (*pcVar2)();
      }
      lVar17 = (long)iVar15;
      if ((long)p_Var9 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4cfc);
        (*pcVar2)();
      }
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var10)
      ;
      if (p_Var10 != (__DataStorage *)0x0) {
        p_Var12 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d0c);
          (*pcVar2)();
        }
        buf = (__DataStorage *)
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var12);
        bytes = local_148;
        if (p_Var10 + (lVar17 - (long)p_Var12) == (__DataStorage *)0x0) goto LAB_100ad4438;
        iVar16 = (int)((ulong)p_Var9 >> 0x20);
        if (!SBORROW4(iVar16,iVar15)) {
          lVar21 = (long)(iVar16 - iVar15);
          if (!SBORROW8(lVar21,local_80)) {
            local_88 = p_Var10 + (lVar17 - (long)p_Var12) + (lVar21 - local_80);
            bVar3 = lVar21 < (long)local_100;
            goto LAB_100ad442c;
          }
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d28);
          (*pcVar2)();
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d24);
        (*pcVar2)();
      }
LAB_100ad44fc:
      buf = (__DataStorage *)
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),(__DataStorage *)0x0);
      bytes = local_148;
      if (local_d4 == 0) goto LAB_100ad4440;
LAB_100ad451c:
      do {
        p_Var10 = p_Var9;
        FUN_10003bf2c(p_Var9,uVar19);
        param_3 = local_100;
        lVar17 = local_f8;
LAB_100ad4530:
        do {
          local_f0 = p_Var9;
          lVar21 = lStack_e0;
          pcVar2 = local_e8;
          if (1 < (uint)p_Var8) {
            FUN_100ad5bbc();
            _swift_allocError(&DAT_100f31478,p_Var10,0,0);
            *p_Var10 = (__DataStorage)0x1;
            goto LAB_100ad4c64;
          }
          puVar5 = (ulong *)(param_3 - uStack_90);
          if (SBORROW8(param_3,uStack_90)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4ce8);
            (*pcVar2)();
          }
          local_c8 = CONCAT44(local_c8._4_4_,(uint)p_Var8);
          uVar14 = (ulong)local_114;
          pcVar7 = local_e8;
          local_d0 = uVar19;
          (**(code **)(lStack_e0 + 0x68))(local_e8,uVar14,lVar17);
          Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar7);
          if (puVar5 == (ulong *)0x0) {
            uVar19 = uVar14;
            Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar7);
            (*pcVar7)(bytes,0);
            _swift_release(uVar14);
            _swift_release(uVar19);
            (**(code **)(lVar21 + 8))(pcVar2,lVar17);
            p_Var10 = (__DataStorage *)0x0;
            uVar14 = 0xc000000000000000;
LAB_100ad4778:
            p_Var8 = (__DataStorage *)(local_c8 & 0xffffffff);
          }
          else {
            p_Var8 = Foundation::__DataStorage::typeMetadataAccessor();
            _swift_allocObject(p_Var8,*(undefined4 *)(p_Var8 + 0x30),*(undefined2 *)(p_Var8 + 0x34))
            ;
            _swift_retain(uVar14);
            puVar11 = puVar5;
            p_Var9 = Foundation::__DataStorage::_init(p_Var8,bytes,SUB81(puVar5,0),0);
            p_Var10 = local_b8;
            Foundation::__DataStorage::modify__capacity(p_Var9,(__int64)p_Var10);
            *puVar11 = *puVar11 | 0x8000000000000000;
            p_Var8 = local_b8;
            (*(code *)p_Var10)(p_Var8,0);
            if ((long)puVar5 < 0xf) {
              if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4cf4);
                (*pcVar2)();
              }
              Foundation::__DataStorage::_get__bytes(p_Var9,p_Var8);
              if (p_Var8 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length(p_Var9,(__DataStorage *)0x0);
                p_Var8 = (__DataStorage *)0x0;
LAB_100ad46d4:
                puVar11 = (ulong *)0x0;
                p_Var10 = (__DataStorage *)0x0;
                bVar3 = true;
              }
              else {
                p_Var10 = (__DataStorage *)Foundation::__DataStorage::get__offset(p_Var9,p_Var8);
                if (SBORROW8(0,(long)p_Var10)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4cf8);
                  (*pcVar2)();
                }
                p_Var8 = p_Var8 + -(long)p_Var10;
                puVar11 = (ulong *)Foundation::__DataStorage::get__length(p_Var9,p_Var10);
                if (p_Var8 == (__DataStorage *)0x0) goto LAB_100ad46d4;
                bVar3 = false;
                if ((long)puVar5 <= (long)puVar11) {
                  puVar11 = puVar5;
                }
                p_Var10 = (__DataStorage *)((long)puVar11 + (long)p_Var8);
              }
              uVar19 = local_128;
              local_b8[8] = (__DataStorage)0x0;
              local_b8[9] = (__DataStorage)0x0;
              local_b8[10] = (__DataStorage)0x0;
              local_b8[0xb] = (__DataStorage)0x0;
              local_b8[0xc] = (__DataStorage)0x0;
              local_b8[0xd] = (__DataStorage)0x0;
              local_b8[0] = (__DataStorage)0x0;
              local_b8[1] = (__DataStorage)0x0;
              local_b8[2] = (__DataStorage)0x0;
              local_b8[3] = (__DataStorage)0x0;
              local_b8[4] = (__DataStorage)0x0;
              local_b8[5] = (__DataStorage)0x0;
              local_b8[6] = (__DataStorage)0x0;
              local_b8[7] = (__DataStorage)0x0;
              local_b8[0xe] = SUB81(puVar11,0);
              if ((bVar3) || (p_Var10 == p_Var8)) {
                (**(code **)(lStack_e0 + 8))(local_e8,local_f8);
                _swift_release(uVar14);
                _swift_release(p_Var9);
              }
              else {
                _memcpy(local_b8,p_Var8,(size_t)puVar11);
                _swift_release(uVar14);
                _swift_release(p_Var9);
                (**(code **)(lStack_e0 + 8))(local_e8,local_f8);
              }
              p_Var10 = (__DataStorage *)
                        CONCAT17(local_b8[7],
                                 CONCAT16(local_b8[6],
                                          CONCAT15(local_b8[5],
                                                   CONCAT14(local_b8[4],
                                                            CONCAT13(local_b8[3],
                                                                     CONCAT12(local_b8[2],
                                                                              CONCAT11(local_b8[1],
                                                                                       local_b8[0]))
                                                                    )))));
              uVar14 = uVar19 & 0xf00000000000000 |
                       (ulong)CONCAT16(local_b8[0xe],
                                       CONCAT15(local_b8[0xd],
                                                CONCAT14(local_b8[0xc],
                                                         CONCAT13(local_b8[0xb],
                                                                  CONCAT12(local_b8[10],
                                                                           CONCAT11(local_b8[9],
                                                                                    local_b8[8])))))
                                      );
              local_128 = uVar14;
              goto LAB_100ad4778;
            }
            (**(code **)(lStack_e0 + 8))(local_e8,lVar17);
            _swift_release(uVar14);
            p_Var8 = (__DataStorage *)(local_c8 & 0xffffffff);
            if (puVar5 < (ulong *)0x7fffffff) {
              p_Var10 = (__DataStorage *)((long)puVar5 << 0x20);
              uVar14 = (ulong)p_Var9 | 0x4000000000000000;
            }
            else {
              p_Var10 = (__DataStorage *)Foundation::Data::RangeReference::typeMetadataAccessor();
              _swift_allocObject(p_Var10,0x20,7);
              *(undefined8 *)(p_Var10 + 0x10) = 0;
              *(ulong **)(p_Var10 + 0x18) = puVar5;
              uVar14 = (ulong)p_Var9 | 0x8000000000000000;
            }
          }
          p_Var9 = p_Var10;
          (*local_110)(p_Var10,uVar14);
          uVar19 = local_d0;
          if (local_d4 == 1) {
            if ((local_118 & 1) == 0) {
              uVar13 = (uint)(uVar14 >> 0x20);
              uVar23 = uVar13 >> 0x1e;
              if (uVar13 >> 0x1e < 2) {
                iVar15 = (int)p_Var10;
                if (uVar23 == 0) {
                  local_b8[0] = SUB81(p_Var10,0);
                  local_b8[1] = SUB81((ulong)p_Var10 >> 8,0);
                  local_b8[2] = SUB81((ulong)p_Var10 >> 0x10,0);
                  local_b8[3] = SUB81((ulong)p_Var10 >> 0x18,0);
                  local_b8[4] = SUB81((ulong)p_Var10 >> 0x20,0);
                  local_b8[5] = SUB81((ulong)p_Var10 >> 0x28,0);
                  local_b8[6] = SUB81((ulong)p_Var10 >> 0x30,0);
                  local_b8[7] = SUB81((ulong)p_Var10 >> 0x38,0);
                  local_b8[8] = SUB81(uVar14,0);
                  local_b8[9] = SUB81(uVar14 >> 8,0);
                  local_b8[10] = SUB81(uVar14 >> 0x10,0);
                  local_b8[0xb] = SUB81(uVar14 >> 0x18,0);
                  local_b8[0xc] = SUB81(uVar14 >> 0x20,0);
                  local_b8[0xd] = SUB81(uVar14 >> 0x28,0);
                  uVar6 = _crc32(local_120,(Bytef *)local_b8,(ushort)(uVar14 >> 0x30) & 0xff);
                  FUN_10003bf2c(p_Var10,uVar14);
                  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d34);
                    local_120 = uVar6;
                    (*pcVar2)();
                  }
                }
                else {
                  lVar17 = (long)iVar15;
                  if ((long)p_Var10 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d30);
                    (*pcVar2)();
                  }
                  Foundation::__DataStorage::_get__bytes
                            ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var9);
                  p_Var8 = (__DataStorage *)0x0;
                  if (p_Var9 != (__DataStorage *)0x0) {
                    p_Var8 = (__DataStorage *)
                             Foundation::__DataStorage::get__offset
                                       ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var9);
                    if (SBORROW8(lVar17,(long)p_Var8)) {
                    /* WARNING: Does not return */
                      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d5c);
                      (*pcVar2)();
                    }
                    p_Var9 = p_Var9 + (lVar17 - (long)p_Var8);
                  }
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var8);
                  bytes = local_148;
                  p_Var8 = (__DataStorage *)(local_c8 & 0xffffffff);
                  iVar16 = (int)((ulong)p_Var10 >> 0x20);
                  uVar1 = iVar16 - iVar15;
                  if (SBORROW4(iVar16,iVar15)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d40);
                    (*pcVar2)();
                  }
                  if ((int)uVar1 < 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d48);
                    (*pcVar2)();
                  }
                  uVar6 = _crc32(local_120,(Bytef *)p_Var9,uVar1);
                  FUN_10003bf2c(p_Var10,uVar14);
                  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d4c);
                    local_120 = uVar6;
                    (*pcVar2)();
                  }
                }
              }
              else if (uVar23 == 2) {
                lVar17 = *(long *)(p_Var10 + 0x10);
                local_c8 = *(ulong *)(p_Var10 + 0x18);
                Foundation::__DataStorage::_get__bytes
                          ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var9);
                p_Var12 = (__DataStorage *)0x0;
                if (p_Var9 != (__DataStorage *)0x0) {
                  p_Var12 = (__DataStorage *)
                            Foundation::__DataStorage::get__offset
                                      ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var9);
                  if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d58);
                    (*pcVar2)();
                  }
                  p_Var9 = p_Var9 + (lVar17 - (long)p_Var12);
                }
                if (SBORROW8(local_c8,lVar17)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d38);
                  (*pcVar2)();
                }
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar14 & 0x3fffffffffffffff),p_Var12);
                uVar22 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
                if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d3c);
                  (*pcVar2)();
                }
                if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d44);
                  (*pcVar2)();
                }
                if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d50);
                  (*pcVar2)();
                }
                uVar6 = _crc32(local_120,(Bytef *)p_Var9,(uInt)uVar22);
                FUN_10003bf2c(p_Var10,uVar14);
                param_3 = local_100;
                if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d54);
                  (*pcVar2)();
                }
              }
              else {
                local_b8[8] = (__DataStorage)0x0;
                local_b8[9] = (__DataStorage)0x0;
                local_b8[10] = (__DataStorage)0x0;
                local_b8[0xb] = (__DataStorage)0x0;
                local_b8[0xc] = (__DataStorage)0x0;
                local_b8[0xd] = (__DataStorage)0x0;
                local_b8[0] = (__DataStorage)0x0;
                local_b8[1] = (__DataStorage)0x0;
                local_b8[2] = (__DataStorage)0x0;
                local_b8[3] = (__DataStorage)0x0;
                local_b8[4] = (__DataStorage)0x0;
                local_b8[5] = (__DataStorage)0x0;
                local_b8[6] = (__DataStorage)0x0;
                local_b8[7] = (__DataStorage)0x0;
                uVar6 = _crc32(local_120,(Bytef *)local_b8,0);
                FUN_10003bf2c(p_Var10,uVar14);
                if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d2c);
                  local_120 = uVar6;
                  (*pcVar2)();
                }
              }
            }
            else {
              FUN_10003bf2c(p_Var10,uVar14);
              uVar19 = local_d0;
              uVar6 = local_120;
            }
          }
          else {
            FUN_10003bf2c(p_Var10,uVar14);
            uVar19 = local_d0;
            uVar6 = local_120;
          }
          local_120 = uVar6;
          uVar22 = local_80;
          p_Var9 = local_f0;
          local_98 = bytes;
          uStack_90 = param_3;
          if ((int)p_Var8 != 0) {
            FUN_10003bf18(local_f0,uVar19);
            _compression_stream_destroy(&local_98);
            _swift_slowDealloc(local_158,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(bytes,0xffffffffffffffff,0xffffffffffffffff);
            uVar6 = local_120;
            goto LAB_100ad4cac;
          }
          if (local_80 == 0) goto LAB_100ad418c;
          lVar17 = local_f8;
        } while (0xe < uVar19 >> 0x3c);
        p_Var10 = local_f0;
        FUN_1001037b4(local_f0,uVar19);
        uVar13 = (uint)(uVar19 >> 0x20);
        uVar24 = uVar13 >> 0x1e;
        uVar14 = uVar22;
        if (uVar13 >> 0x1e < 2) goto LAB_100ad4318;
LAB_100ad4214:
        if (uVar24 == 2) {
          lVar17 = *(long *)(p_Var9 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var10);
          if (p_Var10 == (__DataStorage *)0x0) goto LAB_100ad44fc;
          p_Var12 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var10);
          if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d08);
            (*pcVar2)();
          }
          buf = (__DataStorage *)
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var12);
          bytes = local_148;
          if (p_Var10 + (lVar17 - (long)p_Var12) != (__DataStorage *)0x0) {
            uVar18 = *(long *)(p_Var9 + 0x18) - *(long *)(p_Var9 + 0x10);
            if (SBORROW8(*(long *)(p_Var9 + 0x18),*(long *)(p_Var9 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d1c);
              (*pcVar2)();
            }
            if (SBORROW8(uVar18,local_80)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d20);
              (*pcVar2)();
            }
            local_88 = p_Var10 + (lVar17 - (long)p_Var12) + (uVar18 - local_80);
LAB_100ad4398:
            bVar3 = (long)uVar18 < (long)local_100;
LAB_100ad442c:
            uVar13 = (uint)bVar3;
            goto LAB_100ad4430;
          }
        }
        else {
          local_b8[8] = (__DataStorage)0x0;
          local_b8[9] = (__DataStorage)0x0;
          local_b8[10] = (__DataStorage)0x0;
          local_b8[0xb] = (__DataStorage)0x0;
          local_b8[0xc] = (__DataStorage)0x0;
          local_b8[0xd] = (__DataStorage)0x0;
          local_b8[0] = (__DataStorage)0x0;
          local_b8[1] = (__DataStorage)0x0;
          local_b8[2] = (__DataStorage)0x0;
          local_b8[3] = (__DataStorage)0x0;
          local_b8[4] = (__DataStorage)0x0;
          local_b8[5] = (__DataStorage)0x0;
          local_b8[6] = (__DataStorage)0x0;
          local_b8[7] = (__DataStorage)0x0;
          if (SBORROW8(0,uVar22)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d04);
            (*pcVar2)();
          }
          local_88 = local_b8 + -uVar22;
          uVar13 = local_14c;
LAB_100ad4430:
          buf = (__DataStorage *)&local_98;
          _compression_stream_process(buf,uVar13);
          p_Var8 = buf;
        }
LAB_100ad4438:
      } while (local_d4 != 0);
LAB_100ad4440:
      if ((uVar14 != 0) || ((local_118 & 1) != 0)) goto LAB_100ad451c;
      p_Var10 = p_Var9;
      if (uVar24 < 2) {
        iVar15 = (int)p_Var9;
        if (uVar24 == 0) {
          local_b8[0] = SUB81(p_Var9,0);
          local_b8[1] = SUB81((ulong)p_Var9 >> 8,0);
          local_b8[2] = SUB81((ulong)p_Var9 >> 0x10,0);
          local_b8[3] = SUB81((ulong)p_Var9 >> 0x18,0);
          local_b8[4] = SUB81((ulong)p_Var9 >> 0x20,0);
          local_b8[5] = SUB81((ulong)p_Var9 >> 0x28,0);
          local_b8[6] = SUB81((ulong)p_Var9 >> 0x30,0);
          local_b8[7] = SUB81((ulong)p_Var9 >> 0x38,0);
          local_b8[8] = SUB81(uVar19,0);
          local_b8[9] = SUB81(uVar19 >> 8,0);
          local_b8[10] = SUB81(uVar19 >> 0x10,0);
          local_b8[0xb] = SUB81(uVar19 >> 0x18,0);
          local_b8[0xc] = SUB81(uVar19 >> 0x20,0);
          local_b8[0xd] = SUB81(uVar19 >> 0x28,0);
          uVar6 = _crc32(local_120,(Bytef *)local_b8,(ushort)(uVar19 >> 0x30) & 0xff);
          FUN_10003bf2c(p_Var9,uVar19);
          param_3 = local_100;
          lVar17 = local_f8;
          local_120 = uVar6;
          if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d64);
            (*pcVar2)();
          }
        }
        else {
          lVar17 = (long)iVar15;
          local_c8 = (ulong)p_Var9 >> 0x20;
          if ((long)p_Var9 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d60);
            (*pcVar2)();
          }
          Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar19 & 0x3fffffffffffffff),buf)
          ;
          p_Var12 = (__DataStorage *)0x0;
          if (buf != (__DataStorage *)0x0) {
            p_Var12 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),buf);
            if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d90);
              (*pcVar2)();
            }
            buf = buf + (lVar17 - (long)p_Var12);
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var12);
          lVar17 = local_f8;
          param_3 = local_100;
          bytes = local_148;
          uVar1 = (int)local_c8 - iVar15;
          if (SBORROW4((int)local_c8,iVar15)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d70);
            (*pcVar2)();
          }
          if ((int)uVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d78);
            (*pcVar2)();
          }
          uVar6 = _crc32(local_120,(Bytef *)buf,uVar1);
          FUN_10003bf2c(p_Var9,uVar19);
          local_120 = uVar6;
          if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d80);
            (*pcVar2)();
          }
        }
      }
      else if (uVar24 == 2) {
        lVar17 = *(long *)(p_Var9 + 0x10);
        lVar21 = *(long *)(p_Var9 + 0x18);
        Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar19 & 0x3fffffffffffffff),buf);
        p_Var12 = (__DataStorage *)0x0;
        if (buf != (__DataStorage *)0x0) {
          p_Var12 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),buf);
          if (SBORROW8(lVar17,(long)p_Var12)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d8c);
            (*pcVar2)();
          }
          buf = buf + (lVar17 - (long)p_Var12);
        }
        if (SBORROW8(lVar21,lVar17)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d6c);
          (*pcVar2)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(uVar19 & 0x3fffffffffffffff),p_Var12);
        lVar17 = local_f8;
        param_3 = local_100;
        uVar14 = *(long *)(p_Var9 + 0x18) - *(long *)(p_Var9 + 0x10);
        if (SBORROW8(*(long *)(p_Var9 + 0x18),*(long *)(p_Var9 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d74);
          (*pcVar2)();
        }
        if ((long)uVar14 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d7c);
          (*pcVar2)();
        }
        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d84);
          (*pcVar2)();
        }
        uVar6 = _crc32(local_120,(Bytef *)buf,(uInt)uVar14);
        FUN_10003bf2c(p_Var9,uVar19);
        local_120 = uVar6;
        if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d88);
          (*pcVar2)();
        }
      }
      else {
        local_b8[8] = (__DataStorage)0x0;
        local_b8[9] = (__DataStorage)0x0;
        local_b8[10] = (__DataStorage)0x0;
        local_b8[0xb] = (__DataStorage)0x0;
        local_b8[0xc] = (__DataStorage)0x0;
        local_b8[0xd] = (__DataStorage)0x0;
        local_b8[0] = (__DataStorage)0x0;
        local_b8[1] = (__DataStorage)0x0;
        local_b8[2] = (__DataStorage)0x0;
        local_b8[3] = (__DataStorage)0x0;
        local_b8[4] = (__DataStorage)0x0;
        local_b8[5] = (__DataStorage)0x0;
        local_b8[6] = (__DataStorage)0x0;
        local_b8[7] = (__DataStorage)0x0;
        uVar6 = _crc32(local_120,(Bytef *)local_b8,0);
        FUN_10003bf2c(p_Var9,uVar19);
        param_3 = local_100;
        lVar17 = local_f8;
        local_120 = uVar6;
        if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad4d68);
          (*pcVar2)();
        }
      }
      goto LAB_100ad4530;
    }
LAB_100ad4c64:
    _swift_willThrow();
    FUN_10003bf18(local_f0,uVar19);
    _compression_stream_destroy(&local_98);
    puVar5 = local_158;
  }
  _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  _swift_slowDealloc(bytes,0xffffffffffffffff,0xffffffffffffffff);
  uVar6 = 0;
LAB_100ad4cac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6);
  }
  return;
}



/* Address: 0x100ad4d94 | thunk_FUN_100ad4d98 */

void thunk_FUN_100ad4d98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94700;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94700,&DAT_100f313e8);
  DAT_100ff85e0 = pTVar1;
  return;
}



/* Address: 0x100ad4d98 | FUN_100ad4d98 */

void FUN_100ad4d98(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94700;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94700,&DAT_100f313e8);
  DAT_100ff85e0 = pTVar1;
  return;
}



/* Address: 0x100ad4dd8 | FUN_100ad4dd8 */

undefined1  [16] FUN_100ad4dd8(void)

{
  return ZEXT816(0x100f313e8);
}



/* Address: 0x100ad4de8 | FUN_100ad4de8 */

void FUN_100ad4de8(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100ad4e30();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad4e30 | FUN_100ad4e30 */

void FUN_100ad4e30(undefined8 param_1,long param_2,ulong param_3,uint param_4,code *param_5,
                  undefined8 param_6,code *param_7,undefined8 param_8)

{
  uInt uVar1;
  code *pcVar2;
  bool bVar3;
  Deallocator DVar4;
  undefined7 extraout_var;
  ulong *puVar5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  __DataStorage *buf;
  uLong uVar8;
  code *pcVar9;
  __DataStorage *p_Var10;
  __DataStorage *p_Var11;
  ulong *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  long lVar16;
  long unaff_x21;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  __DataStorage *p_Var20;
  long lVar21;
  ulong uVar22;
  ulong uVar23;
  ulong *local_150;
  uint local_144;
  code *local_140;
  undefined8 local_138;
  long local_130;
  ulong local_128;
  uLong local_120;
  uint local_118;
  uint local_114;
  code *local_110;
  undefined8 uStack_108;
  long local_100;
  __DataStorage *local_f8;
  code *local_f0;
  long lStack_e8;
  int local_dc;
  long local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  __DataStorage local_b8 [32];
  ulong local_98;
  ulong uStack_90;
  __DataStorage *local_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_140 = param_7;
  local_138 = param_8;
  local_130 = param_2;
  local_118 = param_4;
  local_110 = param_5;
  uStack_108 = param_6;
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar21 = *(long *)(CONCAT71(extraout_var,DVar4.value) + -8);
  lVar16 = *(long *)(lVar21 + 0x40);
  uVar17 = param_3;
  _swift_slowAlloc(param_3,0xffffffffffffffff);
  puVar5 = (ulong *)0x28;
  local_c0 = uVar17;
  _swift_slowAlloc(0x28,0xffffffffffffffff);
  uStack_90 = puVar5[1];
  local_98 = *puVar5;
  local_88 = (__DataStorage *)puVar5[2];
  uStack_78 = puVar5[4];
  local_80 = puVar5[3];
  p_Var6 = (__DataStorage *)&local_98;
  local_dc = (int)param_1;
  _compression_stream_init(p_Var6,param_1,0x205);
  if ((int)p_Var6 == -1) {
    FUN_100ad5bbc();
    _swift_allocError(&DAT_100f31478,p_Var6,0,0);
    *p_Var6 = (__DataStorage)0x0;
    _swift_willThrow();
  }
  else {
    local_120 = 0;
    p_Var20 = (__DataStorage *)0x0;
    local_f8 = (__DataStorage *)0x0;
    local_80 = 0;
    local_144 = (uint)(0 < (long)param_3);
    local_114 = *(uint *)
                 PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
    ;
    uVar17 = 0xf000000000000000;
    local_150 = puVar5;
    local_100 = CONCAT71(extraout_var,DVar4.value);
    local_f0 = (code *)((long)&local_150 - (lVar16 + 0xfU & 0xfffffffffffffff0));
    lStack_e8 = lVar21;
    local_c8 = param_3;
LAB_100ad5058:
    uVar23 = local_80;
    local_98 = local_c0;
    uStack_90 = param_3;
    if (SBORROW8(local_130,(long)p_Var20)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b14);
      (*pcVar2)();
    }
    if (local_130 - (long)p_Var20 <= (long)param_3) {
      param_3 = local_130 - (long)p_Var20;
    }
    p_Var10 = p_Var20;
    (*local_140)();
    if (unaff_x21 == 0) {
      FUN_10003bf18(local_f8,uVar17);
      uVar19 = param_3 >> 0x3e;
      uVar13 = (uint)(param_3 >> 0x20);
      uVar18 = uVar13 >> 0x1e;
      if (uVar13 >> 0x1e < 2) {
        if (uVar18 == 0) {
          uVar17 = param_3 >> 0x30 & 0xff;
          uVar22 = uVar17;
        }
        else {
          iVar14 = (int)((ulong)p_Var10 >> 0x20);
          if (SBORROW4(iVar14,(int)p_Var10)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b38);
            (*pcVar2)();
          }
          uVar17 = (ulong)(iVar14 - (int)p_Var10);
          uVar22 = uVar17;
        }
      }
      else if (uVar18 == 2) {
        uVar22 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
        if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b3c);
          (*pcVar2)();
        }
        uVar17 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
        if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b40);
          local_80 = uVar22;
          (*pcVar2)();
        }
      }
      else {
        uVar17 = 0;
        uVar22 = uVar17;
      }
      bVar3 = SCARRY8((long)p_Var20,uVar17);
      p_Var20 = p_Var20 + uVar17;
      local_80 = uVar22;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b18);
        (*pcVar2)();
      }
      p_Var11 = p_Var10;
      FUN_1001037b4(p_Var10,param_3);
      if (1 < uVar18) goto LAB_100ad4f9c;
LAB_100ad5128:
      iVar14 = (int)p_Var10;
      if ((int)uVar19 == 0) {
        local_b8[0] = SUB81(p_Var10,0);
        local_b8[1] = SUB81((ulong)p_Var10 >> 8,0);
        local_b8[2] = SUB81((ulong)p_Var10 >> 0x10,0);
        local_b8[3] = SUB81((ulong)p_Var10 >> 0x18,0);
        local_b8[4] = SUB81((ulong)p_Var10 >> 0x20,0);
        local_b8[5] = SUB81((ulong)p_Var10 >> 0x28,0);
        local_b8[6] = SUB81((ulong)p_Var10 >> 0x30,0);
        local_b8[7] = SUB81((ulong)p_Var10 >> 0x38,0);
        local_b8[8] = SUB81(param_3,0);
        local_b8[9] = SUB81(param_3 >> 8,0);
        local_b8[10] = SUB81(param_3 >> 0x10,0);
        local_b8[0xb] = SUB81(param_3 >> 0x18,0);
        local_b8[0xc] = SUB81(param_3 >> 0x20,0);
        uVar17 = param_3 >> 0x30 & 0xff;
        local_b8[0xd] = SUB81(param_3 >> 0x28,0);
        if (SBORROW8(uVar17,uVar22)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b28);
          (*pcVar2)();
        }
        local_88 = local_b8 + (uVar17 - uVar22);
        goto LAB_100ad51a8;
      }
      lVar16 = (long)iVar14;
      local_d0 = uVar19;
      if ((long)p_Var10 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b24);
        (*pcVar2)();
      }
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
      if (p_Var11 != (__DataStorage *)0x0) {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b34);
          (*pcVar2)();
        }
        buf = (__DataStorage *)
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        uVar19 = local_d0;
        if (p_Var11 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad5264;
        iVar15 = (int)((ulong)p_Var10 >> 0x20);
        if (SBORROW4(iVar15,iVar14)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b4c);
          (*pcVar2)();
        }
        lVar21 = (long)(iVar15 - iVar14);
        if (SBORROW8(lVar21,local_80)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b50);
          (*pcVar2)();
        }
        local_88 = p_Var11 + (lVar16 - (long)p_Var7) + (lVar21 - local_80);
        bVar3 = lVar21 < (long)local_c8;
        goto LAB_100ad5258;
      }
      buf = (__DataStorage *)
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad5334:
      uVar17 = param_3;
      uVar19 = local_d0;
      if (local_dc == 0) goto LAB_100ad526c;
LAB_100ad5350:
      do {
        p_Var11 = p_Var10;
        FUN_10003bf2c(p_Var10,uVar17);
        param_3 = local_c8;
        lVar16 = local_100;
LAB_100ad5368:
        do {
          local_f8 = p_Var10;
          uVar23 = local_c0;
          lVar21 = lStack_e8;
          pcVar2 = local_f0;
          if (1 < (uint)p_Var6) {
            FUN_100ad5bbc();
            _swift_allocError(&DAT_100f31478,p_Var11,0,0);
            *p_Var11 = (__DataStorage)0x1;
            goto LAB_100ad5a8c;
          }
          puVar5 = (ulong *)(param_3 - uStack_90);
          if (SBORROW8(param_3,uStack_90)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b10);
            (*pcVar2)();
          }
          uVar19 = (ulong)local_114;
          pcVar9 = local_f0;
          local_d8 = unaff_x21;
          local_d0 = uVar17;
          (**(code **)(lStack_e8 + 0x68))(local_f0,uVar19,lVar16);
          Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar9);
          if (puVar5 == (ulong *)0x0) {
            uVar17 = uVar19;
            Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar9);
            (*pcVar9)(uVar23,0);
            _swift_release(uVar19);
            _swift_release(uVar17);
            (**(code **)(lVar21 + 8))(pcVar2,lVar16);
            p_Var11 = (__DataStorage *)0x0;
            uVar23 = 0xc000000000000000;
            unaff_x21 = local_d8;
            uVar17 = local_d0;
            param_3 = local_c8;
          }
          else {
            p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
            _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),
                               *(undefined2 *)(p_Var10 + 0x34));
            _swift_retain(uVar19);
            puVar12 = puVar5;
            p_Var7 = Foundation::__DataStorage::_init(p_Var10,uVar23,SUB81(puVar5,0),0);
            p_Var11 = local_b8;
            Foundation::__DataStorage::modify__capacity(p_Var7,(__int64)p_Var11);
            *puVar12 = *puVar12 | 0x8000000000000000;
            p_Var10 = local_b8;
            (*(code *)p_Var11)(p_Var10,0);
            if ((long)puVar5 < 0xf) {
              if ((long)puVar5 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b1c);
                (*pcVar2)();
              }
              Foundation::__DataStorage::_get__bytes(p_Var7,p_Var10);
              if (p_Var10 == (__DataStorage *)0x0) {
                Foundation::__DataStorage::get__length(p_Var7,(__DataStorage *)0x0);
                puVar12 = (ulong *)0x0;
                p_Var11 = (__DataStorage *)0x0;
                bVar3 = true;
                p_Var10 = (__DataStorage *)0x0;
                unaff_x21 = local_d8;
                param_3 = local_c8;
              }
              else {
                p_Var11 = (__DataStorage *)Foundation::__DataStorage::get__offset(p_Var7,p_Var10);
                param_3 = local_c8;
                if (SBORROW8(0,(long)p_Var11)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b20);
                  (*pcVar2)();
                }
                p_Var10 = p_Var10 + -(long)p_Var11;
                puVar12 = (ulong *)Foundation::__DataStorage::get__length(p_Var7,p_Var11);
                unaff_x21 = local_d8;
                if (p_Var10 == (__DataStorage *)0x0) {
                  puVar12 = (ulong *)0x0;
                  p_Var11 = (__DataStorage *)0x0;
                  bVar3 = true;
                }
                else {
                  bVar3 = false;
                  if ((long)puVar5 <= (long)puVar12) {
                    puVar12 = puVar5;
                  }
                  p_Var11 = (__DataStorage *)((long)puVar12 + (long)p_Var10);
                }
              }
              uVar17 = local_128;
              local_b8[8] = (__DataStorage)0x0;
              local_b8[9] = (__DataStorage)0x0;
              local_b8[10] = (__DataStorage)0x0;
              local_b8[0xb] = (__DataStorage)0x0;
              local_b8[0xc] = (__DataStorage)0x0;
              local_b8[0xd] = (__DataStorage)0x0;
              local_b8[0] = (__DataStorage)0x0;
              local_b8[1] = (__DataStorage)0x0;
              local_b8[2] = (__DataStorage)0x0;
              local_b8[3] = (__DataStorage)0x0;
              local_b8[4] = (__DataStorage)0x0;
              local_b8[5] = (__DataStorage)0x0;
              local_b8[6] = (__DataStorage)0x0;
              local_b8[7] = (__DataStorage)0x0;
              local_b8[0xe] = SUB81(puVar12,0);
              if ((bVar3) || (p_Var11 == p_Var10)) {
                (**(code **)(lStack_e8 + 8))(local_f0,local_100);
                _swift_release(uVar19);
                _swift_release(p_Var7);
              }
              else {
                _memcpy(local_b8,p_Var10,(size_t)puVar12);
                _swift_release(uVar19);
                _swift_release(p_Var7);
                (**(code **)(lStack_e8 + 8))(local_f0,local_100);
              }
              p_Var11 = (__DataStorage *)
                        CONCAT17(local_b8[7],
                                 CONCAT16(local_b8[6],
                                          CONCAT15(local_b8[5],
                                                   CONCAT14(local_b8[4],
                                                            CONCAT13(local_b8[3],
                                                                     CONCAT12(local_b8[2],
                                                                              CONCAT11(local_b8[1],
                                                                                       local_b8[0]))
                                                                    )))));
              uVar23 = uVar17 & 0xf00000000000000 |
                       (ulong)CONCAT16(local_b8[0xe],
                                       CONCAT15(local_b8[0xd],
                                                CONCAT14(local_b8[0xc],
                                                         CONCAT13(local_b8[0xb],
                                                                  CONCAT12(local_b8[10],
                                                                           CONCAT11(local_b8[9],
                                                                                    local_b8[8])))))
                                      );
              uVar17 = local_d0;
              local_128 = uVar23;
            }
            else {
              (**(code **)(lStack_e8 + 8))(local_f0,lVar16);
              _swift_release(uVar19);
              uVar17 = local_d0;
              if (puVar5 < (ulong *)0x7fffffff) {
                p_Var11 = (__DataStorage *)((long)puVar5 << 0x20);
                uVar23 = (ulong)p_Var7 | 0x4000000000000000;
                unaff_x21 = local_d8;
                param_3 = local_c8;
              }
              else {
                p_Var11 = (__DataStorage *)Foundation::Data::RangeReference::typeMetadataAccessor();
                _swift_allocObject(p_Var11,0x20,7);
                *(undefined8 *)(p_Var11 + 0x10) = 0;
                *(ulong **)(p_Var11 + 0x18) = puVar5;
                uVar23 = (ulong)p_Var7 | 0x8000000000000000;
                unaff_x21 = local_d8;
                param_3 = local_c8;
              }
            }
          }
          p_Var10 = p_Var11;
          (*local_110)(p_Var11,uVar23);
          if (unaff_x21 != 0) {
            FUN_10003bf18(local_f8,uVar17);
            FUN_10003bf2c(p_Var11,uVar23);
            goto LAB_100ad5a9c;
          }
          if ((local_dc == 1) && ((local_118 & 1) == 0)) {
            uVar13 = (uint)(uVar23 >> 0x20);
            uVar18 = uVar13 >> 0x1e;
            if (uVar13 >> 0x1e < 2) {
              iVar14 = (int)p_Var11;
              if (uVar18 == 0) {
                local_b8[0] = SUB81(p_Var11,0);
                local_b8[1] = SUB81((ulong)p_Var11 >> 8,0);
                local_b8[2] = SUB81((ulong)p_Var11 >> 0x10,0);
                local_b8[3] = SUB81((ulong)p_Var11 >> 0x18,0);
                local_b8[4] = SUB81((ulong)p_Var11 >> 0x20,0);
                local_b8[5] = SUB81((ulong)p_Var11 >> 0x28,0);
                local_b8[6] = SUB81((ulong)p_Var11 >> 0x30,0);
                local_b8[7] = SUB81((ulong)p_Var11 >> 0x38,0);
                local_b8[8] = SUB81(uVar23,0);
                local_b8[9] = SUB81(uVar23 >> 8,0);
                local_b8[10] = SUB81(uVar23 >> 0x10,0);
                local_b8[0xb] = SUB81(uVar23 >> 0x18,0);
                local_b8[0xc] = SUB81(uVar23 >> 0x20,0);
                local_b8[0xd] = SUB81(uVar23 >> 0x28,0);
                uVar8 = _crc32(local_120,(Bytef *)local_b8,(ushort)(uVar23 >> 0x30) & 0xff);
                FUN_10003bf2c(p_Var11,uVar23);
                if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b5c);
                  local_120 = uVar8;
                  (*pcVar2)();
                }
              }
              else {
                lVar16 = (long)iVar14;
                if ((long)p_Var11 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b58);
                  (*pcVar2)();
                }
                Foundation::__DataStorage::_get__bytes
                          ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var10);
                p_Var7 = (__DataStorage *)0x0;
                if (p_Var10 != (__DataStorage *)0x0) {
                  p_Var7 = (__DataStorage *)
                           Foundation::__DataStorage::get__offset
                                     ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var10);
                  if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
                    pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b84);
                    (*pcVar2)();
                  }
                  p_Var10 = p_Var10 + (lVar16 - (long)p_Var7);
                }
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var7);
                uVar17 = local_d0;
                iVar15 = (int)((ulong)p_Var11 >> 0x20);
                uVar1 = iVar15 - iVar14;
                if (SBORROW4(iVar15,iVar14)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b68);
                  (*pcVar2)();
                }
                if ((int)uVar1 < 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b70);
                  (*pcVar2)();
                }
                uVar8 = _crc32(local_120,(Bytef *)p_Var10,uVar1);
                FUN_10003bf2c(p_Var11,uVar23);
                if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b74);
                  local_120 = uVar8;
                  (*pcVar2)();
                }
              }
            }
            else if (uVar18 == 2) {
              lVar16 = *(long *)(p_Var11 + 0x10);
              local_d0 = *(ulong *)(p_Var11 + 0x18);
              Foundation::__DataStorage::_get__bytes
                        ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var10);
              p_Var7 = (__DataStorage *)0x0;
              if (p_Var10 != (__DataStorage *)0x0) {
                p_Var7 = (__DataStorage *)
                         Foundation::__DataStorage::get__offset
                                   ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var10);
                if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
                  pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b80);
                  (*pcVar2)();
                }
                p_Var10 = p_Var10 + (lVar16 - (long)p_Var7);
              }
              if (SBORROW8(local_d0,lVar16)) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b60);
                (*pcVar2)();
              }
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(uVar23 & 0x3fffffffffffffff),p_Var7);
              uVar19 = *(long *)(p_Var11 + 0x18) - *(long *)(p_Var11 + 0x10);
              if (SBORROW8(*(long *)(p_Var11 + 0x18),*(long *)(p_Var11 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b64);
                (*pcVar2)();
              }
              if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b6c);
                (*pcVar2)();
              }
              if (uVar19 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b78);
                (*pcVar2)();
              }
              uVar8 = _crc32(local_120,(Bytef *)p_Var10,(uInt)uVar19);
              FUN_10003bf2c(p_Var11,uVar23);
              param_3 = local_c8;
              if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b7c);
                (*pcVar2)();
              }
            }
            else {
              local_b8[8] = (__DataStorage)0x0;
              local_b8[9] = (__DataStorage)0x0;
              local_b8[10] = (__DataStorage)0x0;
              local_b8[0xb] = (__DataStorage)0x0;
              local_b8[0xc] = (__DataStorage)0x0;
              local_b8[0xd] = (__DataStorage)0x0;
              local_b8[0] = (__DataStorage)0x0;
              local_b8[1] = (__DataStorage)0x0;
              local_b8[2] = (__DataStorage)0x0;
              local_b8[3] = (__DataStorage)0x0;
              local_b8[4] = (__DataStorage)0x0;
              local_b8[5] = (__DataStorage)0x0;
              local_b8[6] = (__DataStorage)0x0;
              local_b8[7] = (__DataStorage)0x0;
              uVar8 = _crc32(local_120,(Bytef *)local_b8,0);
              FUN_10003bf2c(p_Var11,uVar23);
              if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b54);
                local_120 = uVar8;
                (*pcVar2)();
              }
            }
          }
          else {
            FUN_10003bf2c(p_Var11,uVar23);
            uVar8 = local_120;
          }
          local_120 = uVar8;
          uVar22 = local_80;
          p_Var10 = local_f8;
          local_98 = local_c0;
          uStack_90 = param_3;
          if ((uint)p_Var6 != 0) {
            FUN_10003bf18(local_f8,uVar17);
            _compression_stream_destroy(&local_98);
            _swift_slowDealloc(local_150,0xffffffffffffffff,0xffffffffffffffff);
            _swift_slowDealloc(local_c0,0xffffffffffffffff,0xffffffffffffffff);
            uVar8 = local_120;
            goto LAB_100ad5ad0;
          }
          if (local_80 == 0) goto LAB_100ad5058;
          lVar16 = local_100;
        } while (0xe < uVar17 >> 0x3c);
        p_Var11 = local_f8;
        FUN_1001037b4(local_f8,uVar17);
        uVar19 = uVar17 >> 0x3e;
        param_3 = uVar17;
        uVar23 = uVar22;
        if ((uint)(uVar17 >> 0x3e) < 2) goto LAB_100ad5128;
LAB_100ad4f9c:
        if ((int)uVar19 == 2) {
          lVar16 = *(long *)(p_Var10 + 0x10);
          local_d0 = uVar19;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
          if (p_Var11 == (__DataStorage *)0x0) {
            buf = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            goto LAB_100ad5334;
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b30);
            (*pcVar2)();
          }
          buf = (__DataStorage *)
                Foundation::__DataStorage::get__length
                          ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          uVar19 = local_d0;
          if (p_Var11 + (lVar16 - (long)p_Var7) != (__DataStorage *)0x0) {
            uVar17 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
            if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b44);
              (*pcVar2)();
            }
            if (SBORROW8(uVar17,local_80)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b48);
              (*pcVar2)();
            }
            local_88 = p_Var11 + (lVar16 - (long)p_Var7) + (uVar17 - local_80);
LAB_100ad51a8:
            bVar3 = (long)uVar17 < (long)local_c8;
LAB_100ad5258:
            uVar13 = (uint)bVar3;
            goto LAB_100ad525c;
          }
        }
        else {
          local_b8[8] = (__DataStorage)0x0;
          local_b8[9] = (__DataStorage)0x0;
          local_b8[10] = (__DataStorage)0x0;
          local_b8[0xb] = (__DataStorage)0x0;
          local_b8[0xc] = (__DataStorage)0x0;
          local_b8[0xd] = (__DataStorage)0x0;
          local_b8[0] = (__DataStorage)0x0;
          local_b8[1] = (__DataStorage)0x0;
          local_b8[2] = (__DataStorage)0x0;
          local_b8[3] = (__DataStorage)0x0;
          local_b8[4] = (__DataStorage)0x0;
          local_b8[5] = (__DataStorage)0x0;
          local_b8[6] = (__DataStorage)0x0;
          local_b8[7] = (__DataStorage)0x0;
          if (SBORROW8(0,uVar22)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b2c);
            (*pcVar2)();
          }
          local_88 = local_b8 + -uVar22;
          uVar13 = local_144;
LAB_100ad525c:
          buf = (__DataStorage *)&local_98;
          _compression_stream_process(buf,uVar13);
          p_Var6 = buf;
        }
LAB_100ad5264:
        uVar17 = param_3;
      } while (local_dc != 0);
LAB_100ad526c:
      if ((uVar23 != 0) || ((local_118 & 1) != 0)) goto LAB_100ad5350;
      iVar14 = (int)uVar19;
      p_Var11 = p_Var10;
      if (iVar14 < 2) {
        iVar15 = (int)p_Var10;
        if (iVar14 == 0) {
          local_b8[0] = SUB81(p_Var10,0);
          local_b8[1] = SUB81((ulong)p_Var10 >> 8,0);
          local_b8[2] = SUB81((ulong)p_Var10 >> 0x10,0);
          local_b8[3] = SUB81((ulong)p_Var10 >> 0x18,0);
          local_b8[4] = SUB81((ulong)p_Var10 >> 0x20,0);
          local_b8[5] = SUB81((ulong)p_Var10 >> 0x28,0);
          local_b8[6] = SUB81((ulong)p_Var10 >> 0x30,0);
          local_b8[7] = SUB81((ulong)p_Var10 >> 0x38,0);
          local_b8[8] = SUB81(uVar17,0);
          local_b8[9] = SUB81(uVar17 >> 8,0);
          local_b8[10] = SUB81(uVar17 >> 0x10,0);
          local_b8[0xb] = SUB81(uVar17 >> 0x18,0);
          local_b8[0xc] = SUB81(uVar17 >> 0x20,0);
          local_b8[0xd] = SUB81(uVar17 >> 0x28,0);
          uVar8 = _crc32(local_120,(Bytef *)local_b8,(ushort)(uVar17 >> 0x30) & 0xff);
          FUN_10003bf2c(p_Var10,uVar17);
          param_3 = local_c8;
          lVar16 = local_100;
          local_120 = uVar8;
          if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b8c);
            (*pcVar2)();
          }
        }
        else {
          lVar16 = (long)iVar15;
          if ((long)p_Var10 >> 0x20 < lVar16) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b88);
            (*pcVar2)();
          }
          Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar17 & 0x3fffffffffffffff),buf)
          ;
          p_Var7 = (__DataStorage *)0x0;
          if (buf != (__DataStorage *)0x0) {
            p_Var7 = (__DataStorage *)
                     Foundation::__DataStorage::get__offset
                               ((__DataStorage *)(uVar17 & 0x3fffffffffffffff),buf);
            if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5bb8);
              (*pcVar2)();
            }
            buf = buf + (lVar16 - (long)p_Var7);
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(uVar17 & 0x3fffffffffffffff),p_Var7);
          param_3 = local_c8;
          lVar16 = local_100;
          iVar14 = (int)((ulong)p_Var10 >> 0x20);
          uVar1 = iVar14 - iVar15;
          if (SBORROW4(iVar14,iVar15)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b98);
            (*pcVar2)();
          }
          if ((int)uVar1 < 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5ba0);
            (*pcVar2)();
          }
          uVar8 = _crc32(local_120,(Bytef *)buf,uVar1);
          FUN_10003bf2c(p_Var10,uVar17);
          local_120 = uVar8;
          if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5ba8);
            (*pcVar2)();
          }
        }
      }
      else if (iVar14 == 2) {
        lVar16 = *(long *)(p_Var10 + 0x10);
        lVar21 = *(long *)(p_Var10 + 0x18);
        Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar17 & 0x3fffffffffffffff),buf);
        p_Var7 = (__DataStorage *)0x0;
        if (buf != (__DataStorage *)0x0) {
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(uVar17 & 0x3fffffffffffffff),buf);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5bb4);
            (*pcVar2)();
          }
          buf = buf + (lVar16 - (long)p_Var7);
        }
        if (SBORROW8(lVar21,lVar16)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b94);
          (*pcVar2)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(uVar17 & 0x3fffffffffffffff),p_Var7);
        param_3 = local_c8;
        lVar16 = local_100;
        uVar23 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
        if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b9c);
          (*pcVar2)();
        }
        if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5ba4);
          (*pcVar2)();
        }
        if (uVar23 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5bac);
          (*pcVar2)();
        }
        uVar8 = _crc32(local_120,(Bytef *)buf,(uInt)uVar23);
        FUN_10003bf2c(p_Var10,uVar17);
        local_120 = uVar8;
        if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5bb0);
          (*pcVar2)();
        }
      }
      else {
        local_b8[8] = (__DataStorage)0x0;
        local_b8[9] = (__DataStorage)0x0;
        local_b8[10] = (__DataStorage)0x0;
        local_b8[0xb] = (__DataStorage)0x0;
        local_b8[0xc] = (__DataStorage)0x0;
        local_b8[0xd] = (__DataStorage)0x0;
        local_b8[0] = (__DataStorage)0x0;
        local_b8[1] = (__DataStorage)0x0;
        local_b8[2] = (__DataStorage)0x0;
        local_b8[3] = (__DataStorage)0x0;
        local_b8[4] = (__DataStorage)0x0;
        local_b8[5] = (__DataStorage)0x0;
        local_b8[6] = (__DataStorage)0x0;
        local_b8[7] = (__DataStorage)0x0;
        uVar8 = _crc32(local_120,(Bytef *)local_b8,0);
        FUN_10003bf2c(p_Var10,uVar17);
        param_3 = local_c8;
        lVar16 = local_100;
        local_120 = uVar8;
        if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5b90);
          (*pcVar2)();
        }
      }
      goto LAB_100ad5368;
    }
LAB_100ad5a8c:
    _swift_willThrow();
    FUN_10003bf18(local_f8,uVar17);
LAB_100ad5a9c:
    _compression_stream_destroy(&local_98);
    puVar5 = local_150;
  }
  _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  _swift_slowDealloc(local_c0,0xffffffffffffffff,0xffffffffffffffff);
  uVar8 = 0;
LAB_100ad5ad0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar8);
}



/* Address: 0x100ad5bbc | FUN_100ad5bbc */

void FUN_100ad5bbc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9484c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9484c,&DAT_100f31478);
  DAT_100ff85e8 = pTVar1;
  return;
}



/* Address: 0x100ad5bfc | FUN_100ad5bfc */

undefined1  [16] FUN_100ad5bfc(void)

{
  return ZEXT816(0x100f31478);
}



/* Address: 0x100ad5c0c | thunk_FUN_100ad5c10 */

void thunk_FUN_100ad5c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94824;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94824,&DAT_100f31478);
  DAT_100ff85f0 = pTVar1;
  return;
}



/* Address: 0x100ad5c10 | FUN_100ad5c10 */

void FUN_100ad5c10(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94824;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94824,&DAT_100f31478);
  DAT_100ff85f0 = pTVar1;
  return;
}



/* Address: 0x100ad5c50 | FUN_100ad5c50 */

void FUN_100ad5c50(void)

{
  long lVar1;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_100ad4de8();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad5c98 | FUN_100ad5c98 */

void FUN_100ad5c98(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_100ad5c50(0,param_1,param_2,0,param_5,param_6,param_3,param_4);
  return;
}



/* Address: 0x100ad5cc4 | FUN_100ad5cc4 */

void FUN_100ad5cc4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  FUN_100ad5c50(1,param_1,param_2,param_3,param_6,param_7,param_4,param_5);
  return;
}



/* Address: 0x100ad5cfc | thunk_FUN_100ad5d00 */

void thunk_FUN_100ad5d00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94890,&DAT_100f31588);
  DAT_100ff85f8 = pTVar1;
  return;
}



/* Address: 0x100ad5d00 | FUN_100ad5d00 */

void FUN_100ad5d00(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff85f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94890;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94890,&DAT_100f31588);
  DAT_100ff85f8 = pTVar1;
  return;
}



/* Address: 0x100ad5d40 | FUN_100ad5d40 */

undefined1  [16] FUN_100ad5d40(void)

{
  return ZEXT816(0x100f31588);
}



/* Address: 0x100ad5d50 | FUN_100ad5d50 */

void FUN_100ad5d50(void)

{
  FUN_100ad5ec8();
  return;
}



/* Address: 0x100ad5d64 | FUN_100ad5d64 */

void FUN_100ad5d64(void *param_1,void *param_2,size_t *param_3,long param_4,ulong param_5,
                  FILE *param_6)

{
  uint uVar1;
  code *pcVar2;
  size_t sVar3;
  uint uVar4;
  int iVar5;
  
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    uVar1 = (uint)(param_5 >> 0x20);
    uVar4 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar4 == 0) {
        sVar3 = param_5 >> 0x30 & 0xff;
      }
      else {
        iVar5 = (int)((ulong)param_4 >> 0x20);
        if (SBORROW4(iVar5,(int)param_4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5e08);
          (*pcVar2)();
        }
        sVar3 = (size_t)(iVar5 - (int)param_4);
      }
    }
    else if (uVar4 == 2) {
      sVar3 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad5e04);
        (*pcVar2)();
      }
    }
    else {
      sVar3 = 0;
    }
    sVar3 = _fwrite(param_1,1,sVar3,param_6);
    *param_3 = sVar3;
  }
  return;
}



/* Address: 0x100ad5e08 | FUN_100ad5e08 */

void FUN_100ad5e08(long param_1,long param_2,ulong *param_3,ulong param_4,ulong param_5,
                  FILE *param_6)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  
  if ((param_1 != 0) && (param_2 != param_1)) {
    uVar4 = *param_3;
    while (uVar4 < param_4) {
      uVar2 = param_4 - uVar4;
      if (param_4 < uVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad5eb8);
        (*pcVar3)();
      }
      if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad5ebc);
        (*pcVar3)();
      }
      uVar1 = param_5;
      if ((long)uVar2 <= (long)param_5) {
        uVar1 = uVar2;
      }
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad5ec0);
        (*pcVar3)();
      }
      _fwrite((void *)(param_1 + uVar4),1,uVar1,param_6);
      if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad5ec4);
        (*pcVar3)();
      }
      uVar4 = *param_3 + uVar1;
      if (CARRY8(*param_3,uVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad5ec8);
        (*pcVar3)();
      }
      *param_3 = uVar4;
    }
  }
  return;
}



/* Address: 0x100ad5ec8 | FUN_100ad5ec8 */

void FUN_100ad5ec8(undefined1 *param_1,FILE *param_2)

{
  long lVar1;
  Deallocator DVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  long lVar7;
  undefined8 uStack_48;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  lVar1 = -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  puVar4 = param_1;
  _swift_slowAlloc(param_1,0xffffffffffffffff);
  sVar5 = _fread(puVar4,1,(size_t)param_1,param_2);
  iVar3 = _ferror(param_2);
  if (iVar3 < 1) {
    *puVar6 = FUN_10094a398;
    *(undefined8 *)((long)&uStack_48 + lVar1) = 0;
    (**(code **)(lVar7 + 0x68))
              (puVar6,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
               ,CONCAT71(extraout_var,DVar2.value));
    FUN_100abfa10(puVar4,sVar5,puVar6);
  }
  else {
    _swift_slowDealloc(puVar4,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100ad5fe0 | FUN_100ad5fe0 */

void FUN_100ad5fe0(Date param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  tm *ptVar6;
  double dVar7;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  dVar7 = Foundation::Date::get_timeIntervalSince1970(param_1);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60e4);
    (*pcVar5)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60e8);
    (*pcVar5)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60ec);
    (*pcVar5)();
  }
  local_20 = (long)dVar7;
  ptVar6 = _gmtime(&local_20);
  if (ptVar6 != (tm *)0x0) {
    iVar1 = ptVar6->tm_year + 0x76c;
    if (SCARRY4(ptVar6->tm_year,0x76c)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60f0);
      (*pcVar5)();
    }
    if (iVar1 < 0x7bd) {
      iVar1 = 0x7bc;
    }
    if (0x832 < iVar1) {
      iVar1 = 0x833;
    }
    iVar4 = ptVar6->tm_mon;
    if (SCARRY4(iVar4,1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60f4);
      (*pcVar5)();
    }
    if (iVar4 + 0xfc000001U >> 0x1b < 0x1f) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60f8);
      (*pcVar5)();
    }
    iVar4 = (iVar4 + 1) * 0x20;
    iVar2 = ptVar6->tm_mday + iVar4;
    if (SCARRY4(ptVar6->tm_mday,iVar4)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad60fc);
      (*pcVar5)();
    }
    iVar1 = iVar1 * 0x200 + -0xf7800;
    uVar3 = iVar2 + iVar1;
    if (SCARRY4(iVar2,iVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6100);
      (*pcVar5)();
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6104);
      (*pcVar5)();
    }
    if (uVar3 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6108);
      (*pcVar5)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad610c | FUN_100ad610c */

void FUN_100ad610c(Date param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  tm *ptVar6;
  double dVar7;
  long local_20;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_100ea82f0;
  dVar7 = Foundation::Date::get_timeIntervalSince1970(param_1);
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad61f0);
    (*pcVar5)();
  }
  if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad61f4);
    (*pcVar5)();
  }
  if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad61f8);
    (*pcVar5)();
  }
  local_20 = (long)dVar7;
  ptVar6 = _gmtime(&local_20);
  if (ptVar6 != (tm *)0x0) {
    if (ptVar6->tm_min + 0xfc000000U >> 0x1b < 0x1f) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad61fc);
      (*pcVar5)();
    }
    iVar4 = ptVar6->tm_sec / 2;
    iVar1 = ptVar6->tm_min * 0x20;
    iVar2 = iVar4 + iVar1;
    if (SCARRY4(iVar4,iVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6200);
      (*pcVar5)();
    }
    if (ptVar6->tm_hour - 0x100000U < 0xffe00000) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6204);
      (*pcVar5)();
    }
    iVar1 = ptVar6->tm_hour * 0x800;
    uVar3 = iVar2 + iVar1;
    if (SCARRY4(iVar2,iVar1)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6208);
      (*pcVar5)();
    }
    if ((int)uVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad620c);
      (*pcVar5)();
    }
    if (uVar3 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ad6210);
      (*pcVar5)();
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad6214 | FUN_100ad6214 */

void FUN_100ad6214(uint param_1,uint param_2)

{
  time_t tVar1;
  tm local_60;
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_60.tm_zone = (char *)0x0;
  local_60.tm_gmtoff = 0;
  local_60.tm_isdst = 0;
  local_60._36_4_ = 0;
  local_60.tm_wday = 0;
  local_60.tm_yday = 0;
  local_60.tm_sec = (param_2 & 0x1f) << 1;
  local_60.tm_min = param_2 >> 5 & 0x3f;
  local_60.tm_hour = param_2 >> 0xb & 0x1f;
  local_60.tm_mday = param_1 & 0x1f;
  local_60.tm_mon = (param_1 >> 5 & 0xf) - 1;
  local_60.tm_year = (param_1 >> 9 & 0x7f) + 0x50;
  tVar1 = _timegm(&local_60);
  Foundation::Date::init((double)tVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad62b0 | FUN_100ad62b0 */

void FUN_100ad62b0(void)

{
  DAT_100ff8600 = *(undefined8 *)PTR__kCFAbsoluteTimeIntervalSince1970_100ea9b10;
  return;
}



/* Address: 0x100ad62c8 | FUN_100ad62c8 */

long FUN_100ad62c8(double param_1)

{
  code *pcVar1;
  double dVar2;
  double dVar3;
  
  dVar3 = (double)(long)param_1;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
    dVar3 = param_1 + 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad6394);
    (*pcVar1)();
  }
  if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad6398);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad639c);
    (*pcVar1)();
  }
  dVar2 = (param_1 - (double)(long)param_1) * 1000000.0;
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
    dVar2 = 0.0;
  }
  if (0x7fefffffffffffff < (ulong)ABS(dVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad63a0);
    (*pcVar1)();
  }
  if (dVar2 <= -2147483649.0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad63a4);
    (*pcVar1)();
  }
  if (dVar2 < 2147483648.0) {
    return (long)dVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad63a8);
  (*pcVar1)();
}



/* Address: 0x100ad63a8 | FUN_100ad63a8 */

void FUN_100ad63a8(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  RangeReference *pRVar9;
  __DataStorage *p_Var10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined4 local_b0;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 local_a4;
  undefined1 uStack_a3;
  undefined1 local_a2;
  undefined1 uStack_a1;
  int local_a0;
  undefined2 uStack_9c;
  undefined2 uStack_9a;
  undefined6 local_98;
  undefined2 uStack_92;
  undefined1 local_90 [4];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 auStack_80 [2];
  undefined1 local_7e [4];
  undefined1 local_7a [4];
  undefined1 local_76 [2];
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 **ppuStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_74 = *unaff_x20;
  uVar2 = *(undefined2 *)(unaff_x20 + 1);
  local_7a._2_2_ = *(undefined2 *)((long)unaff_x20 + 6);
  local_7a._0_2_ = *(undefined2 *)(unaff_x20 + 2);
  local_7e._2_2_ = *(undefined2 *)((long)unaff_x20 + 10);
  local_7e._0_2_ = *(undefined2 *)(unaff_x20 + 3);
  local_84 = unaff_x20[4];
  local_88 = unaff_x20[5];
  local_8c = unaff_x20[6];
  local_90._2_2_ = *(undefined2 *)(unaff_x20 + 7);
  uVar3 = *(undefined2 *)((long)unaff_x20 + 0x1e);
  ppuStack_68 = (undefined4 **)0xc000000000000000;
  local_70 = (undefined4 *)0x0;
  puVar8 = &local_74;
  ppuVar11 = &local_70;
  local_90._0_2_ = uVar3;
  local_76 = (undefined1  [2])uVar2;
  FUN_100ad8ff4();
  uVar5 = uStack_9a;
  uVar4 = uStack_9c;
  uVar1 = (uint)((ulong)ppuVar11 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = ppuVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(ppuVar11,0);
      uStack_a7 = (undefined1)((ulong)ppuVar11 >> 8);
      uStack_a6 = (undefined1)((ulong)ppuVar11 >> 0x10);
      uStack_a5 = (undefined1)((ulong)ppuVar11 >> 0x18);
      local_a4 = (undefined1)((ulong)ppuVar11 >> 0x20);
      uVar15 = (ulong)ppuVar11 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)ppuVar11 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar4;
        uStack_9a = uVar5;
        *(undefined2 *)((long)&local_b0 + uVar15) = uVar2;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7728);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad6608:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_76,(InlineSlice)&local_74);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)ppuVar11 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7700);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad6608;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_76,(LargeSlice)&local_74);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)ppuVar11 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)ppuVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_76,(LargeSlice)&local_74);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_76;
    puVar12 = &local_74;
    uStack_9c = uVar4;
    uStack_9a = uVar5;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar12,0);
      uStack_a7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = local_7a._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad772c);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad67dc:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_7a + 2),(InlineSlice)local_76);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7704);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad67dc;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_7a + 2),(LargeSlice)local_76);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_7a + 2),(LargeSlice)local_76);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_7a + 2);
    puVar13 = local_76;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar13,0);
      uStack_a7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = local_7a._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7730);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad69b0:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_7a,(InlineSlice)(local_7a + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7708);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad69b0;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_7a,(LargeSlice)(local_7a + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_7a,(LargeSlice)(local_7a + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_7a;
    puVar13 = local_7a + 2;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar13,0);
      uStack_a7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = local_7e._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7734);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad6b84:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_7e + 2),(InlineSlice)local_7a);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad770c);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad6b84;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_7e + 2),(LargeSlice)local_7a);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_7e + 2),(LargeSlice)local_7a);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_7e + 2);
    puVar13 = local_7a;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar13,0);
      uStack_a7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = local_7e._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7738);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad6d58:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_7e,(InlineSlice)(local_7e + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7710);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad6d58;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_7e,(LargeSlice)(local_7e + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_7e,(LargeSlice)(local_7e + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_7e;
    puVar13 = local_7e + 2;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar13,0);
      uStack_a7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined4 *)((long)&local_b0 + uVar15) = local_84;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad773c);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad6f30:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_84,(InlineSlice)auStack_80);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7714);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad6f30;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)auStack_80)
      ;
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)auStack_80);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_84;
    puVar13 = auStack_80;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar13,0);
      uStack_a7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined4 *)((long)&local_b0 + uVar15) = local_88;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7740);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad7108:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_88,(InlineSlice)&local_84);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7718);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad7108;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_88,(LargeSlice)&local_84);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_88,(LargeSlice)&local_84);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_88;
    puVar12 = &local_84;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar12,0);
      uStack_a7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined4 *)((long)&local_b0 + uVar15) = local_8c;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7744);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad72e0:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_8c,(InlineSlice)&local_88);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad771c);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad72e0;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_8c,(LargeSlice)&local_88);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_8c,(LargeSlice)&local_88);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_8c;
    puVar12 = &local_88;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar12,0);
      uStack_a7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = local_90._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7748);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a9,
                          CONCAT16(uStack_aa,
                                   CONCAT15(uStack_ab,
                                            CONCAT14(uStack_ac,
                                                     CONCAT13(local_b0._3_1_,
                                                              CONCAT12(local_b0._2_1_,
                                                                       CONCAT11(local_b0._1_1_,
                                                                                (undefined1)local_b0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
      }
      else {
        local_98 = (undefined6)
                   (CONCAT17(uStack_a3,
                             CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                        CONCAT14(uStack_a6,
                                                                 CONCAT13(uStack_a7,
                                                                          CONCAT12(local_a8,
                                                  uStack_9a)))))) >> 0x10);
        local_a0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
        local_a0 = 0;
        uStack_9c = (undefined2)uVar15;
        uStack_9a = 0;
        local_98 = SUB86(p_Var10,0);
        uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad74b8:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_90 + 2),(InlineSlice)&local_8c);
        puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7720);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad74b8;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_b0._0_1_ = SUB81(pRVar9,0);
      local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a8 = (undefined1)uVar15;
      uStack_a7 = (undefined1)(uVar15 >> 8);
      uStack_a6 = (undefined1)(uVar15 >> 0x10);
      uStack_a5 = (undefined1)(uVar15 >> 0x18);
      local_a4 = (undefined1)(uVar15 >> 0x20);
      uStack_a3 = (undefined1)(uVar15 >> 0x28);
      local_a2 = (undefined1)(uVar15 >> 0x30);
      uStack_a1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_90 + 2),(LargeSlice)&local_8c);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a9,
                        CONCAT16(uStack_aa,
                                 CONCAT15(uStack_ab,
                                          CONCAT14(uStack_ac,
                                                   CONCAT13(local_b0._3_1_,
                                                            CONCAT12(local_b0._2_1_,
                                                                     CONCAT11(local_b0._1_1_,
                                                                              (undefined1)local_b0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_98 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_90 + 2),(LargeSlice)&local_8c);
    puVar8 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_92,local_98) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_90 + 2);
    puVar12 = &local_8c;
    uStack_9c = uVar2;
    uStack_9a = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_9a;
  uVar2 = uStack_9c;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_9c = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_9a = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_b0._0_1_ = SUB81(puVar8,0);
      local_b0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_b0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_b0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a8 = SUB81(puVar12,0);
      uStack_a7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_9c = uVar2;
        uStack_9a = uVar4;
        *(undefined2 *)((long)&local_b0 + uVar15) = uVar3;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad774c);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        local_70 = (undefined4 *)
                   CONCAT17(uStack_a9,
                            CONCAT16(uStack_aa,
                                     CONCAT15(uStack_ab,
                                              CONCAT14(uStack_ac,
                                                       CONCAT13(local_b0._3_1_,
                                                                CONCAT12(local_b0._2_1_,
                                                                         CONCAT11(local_b0._1_1_,
                                                                                  (undefined1)
                                                                                  local_b0)))))));
        ppuStack_68 = (undefined4 **)
                      CONCAT44((uint)CONCAT11(uStack_a3,local_a4) | (uVar1 & 0xff) << 0x10,
                               CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))))
        ;
        goto LAB_100ad76ac;
      }
      local_98 = (undefined6)
                 (CONCAT17(uStack_a3,
                           CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                      CONCAT14(uStack_a6,
                                                               CONCAT13(uStack_a7,
                                                                        CONCAT12(local_a8,uStack_9a)
                                                                       ))))) >> 0x10);
      local_a0 = iVar7;
      p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
      p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_a0);
      local_a0 = 0;
      uStack_9c = (undefined2)uVar15;
      uStack_9a = 0;
      local_98 = SUB86(p_Var10,0);
      uStack_92 = (undefined2)((ulong)p_Var10 >> 0x30);
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_98 = (undefined6)uVar15;
      uStack_92 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad7724);
        local_a0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_a0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (0x7ffffffc < lVar16) {
        pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar9,0x20,7);
        *(long *)(pRVar9 + 0x10) = (long)iVar7;
        *(long *)(pRVar9 + 0x18) = lVar16;
        local_b0._0_1_ = SUB81(pRVar9,0);
        local_b0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
        local_b0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
        local_b0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
        uStack_ac = (undefined1)((ulong)pRVar9 >> 0x20);
        uStack_ab = (undefined1)((ulong)pRVar9 >> 0x28);
        uStack_aa = (undefined1)((ulong)pRVar9 >> 0x30);
        uStack_a9 = (undefined1)((ulong)pRVar9 >> 0x38);
        local_a8 = (undefined1)uVar15;
        uStack_a7 = (undefined1)(uVar15 >> 8);
        uStack_a6 = (undefined1)(uVar15 >> 0x10);
        uStack_a5 = (undefined1)(uVar15 >> 0x18);
        local_a4 = (undefined1)(uVar15 >> 0x20);
        uStack_a3 = (undefined1)(uVar15 >> 0x28);
        local_a2 = (undefined1)(uVar15 >> 0x30);
        uStack_a1 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)local_90,(LargeSlice)(local_90 + 2));
        local_70 = (undefined4 *)
                   CONCAT17(uStack_a9,
                            CONCAT16(uStack_aa,
                                     CONCAT15(uStack_ab,
                                              CONCAT14(uStack_ac,
                                                       CONCAT13(local_b0._3_1_,
                                                                CONCAT12(local_b0._2_1_,
                                                                         CONCAT11(local_b0._1_1_,
                                                                                  (undefined1)
                                                                                  local_b0)))))));
        uVar15 = CONCAT17(uStack_a1,
                          CONCAT16(local_a2,CONCAT15(uStack_a3,
                                                     CONCAT14(local_a4,CONCAT13(uStack_a5,
                                                                                CONCAT12(uStack_a6,
                                                                                         CONCAT11(
                                                  uStack_a7,local_a8)))))));
        goto LAB_100ad7638;
      }
    }
    Foundation::Data::InlineSlice::append
              ((UnsafeRawBufferPointer)local_90,(InlineSlice)(local_90 + 2));
    local_70 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    ppuStack_68 = (undefined4 **)(CONCAT26(uStack_92,local_98) | 0x4000000000000000);
  }
  else {
    if (uVar14 != 2) {
      puVar8 = (undefined4 *)local_90;
      puVar13 = local_90 + 2;
      uStack_9c = uVar2;
      uStack_9a = uVar4;
      FUN_100ad8ff4();
      local_70 = puVar8;
      ppuStack_68 = (undefined4 **)puVar13;
      goto LAB_100ad76ac;
    }
    local_98 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_92 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_a0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_90,(LargeSlice)(local_90 + 2));
    local_70 = (undefined4 *)CONCAT26(uStack_9a,CONCAT24(uStack_9c,local_a0));
    uVar15 = CONCAT26(uStack_92,local_98);
LAB_100ad7638:
    ppuStack_68 = (undefined4 **)(uVar15 | 0x8000000000000000);
  }
LAB_100ad76ac:
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 8),(Data)*(undefined **)(unaff_x20 + 10));
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 0xc),(Data)*(undefined **)(unaff_x20 + 0xe));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70,ppuStack_68);
  }
  return;
}



/* Address: 0x100ad7750 | FUN_100ad7750 */

void FUN_100ad7750(void)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  code *pcVar6;
  int iVar7;
  undefined4 *puVar8;
  RangeReference *pRVar9;
  __DataStorage *p_Var10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined1 *puVar13;
  uint uVar14;
  undefined4 *unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined4 local_c0;
  undefined1 uStack_bc;
  undefined1 uStack_bb;
  undefined1 uStack_ba;
  undefined1 uStack_b9;
  undefined1 local_b8;
  undefined1 uStack_b7;
  undefined1 uStack_b6;
  undefined1 uStack_b5;
  undefined1 local_b4;
  undefined1 uStack_b3;
  undefined1 local_b2;
  undefined1 uStack_b1;
  int local_b0;
  undefined2 uStack_ac;
  undefined2 uStack_aa;
  undefined6 local_a8;
  undefined2 uStack_a2;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined2 local_96;
  undefined2 local_94;
  undefined1 local_92 [4];
  undefined1 local_8e [2];
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined1 local_80 [4];
  undefined1 local_7c [4];
  undefined1 local_78 [4];
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 **ppuStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_74 = *unaff_x20;
  uVar2 = *(undefined2 *)(unaff_x20 + 1);
  local_78._0_2_ = *(undefined2 *)((long)unaff_x20 + 6);
  local_7c._2_2_ = *(undefined2 *)(unaff_x20 + 2);
  local_7c._0_2_ = *(undefined2 *)((long)unaff_x20 + 10);
  local_80._2_2_ = *(undefined2 *)(unaff_x20 + 3);
  local_80._0_2_ = *(undefined2 *)((long)unaff_x20 + 0xe);
  local_84 = unaff_x20[4];
  local_88 = unaff_x20[5];
  local_8c = unaff_x20[6];
  local_8e = *(undefined1 (*) [2])(unaff_x20 + 7);
  local_92._2_2_ = *(undefined2 *)((long)unaff_x20 + 0x1e);
  local_94 = *(undefined2 *)((long)unaff_x20 + 0x22);
  local_96 = *(undefined2 *)(unaff_x20 + 9);
  uStack_9c = unaff_x20[10];
  local_a0 = unaff_x20[0xb];
  uVar3 = *(undefined2 *)(unaff_x20 + 8);
  ppuStack_68 = (undefined4 **)0xc000000000000000;
  local_70 = (undefined4 *)0x0;
  puVar8 = &local_74;
  ppuVar11 = &local_70;
  local_92._0_2_ = uVar3;
  local_78._2_2_ = uVar2;
  FUN_100ad8ff4();
  uVar5 = uStack_aa;
  uVar4 = uStack_ac;
  uVar1 = (uint)((ulong)ppuVar11 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = ppuVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(ppuVar11,0);
      uStack_b7 = (undefined1)((ulong)ppuVar11 >> 8);
      uStack_b6 = (undefined1)((ulong)ppuVar11 >> 0x10);
      uStack_b5 = (undefined1)((ulong)ppuVar11 >> 0x18);
      local_b4 = (undefined1)((ulong)ppuVar11 >> 0x20);
      uVar15 = (ulong)ppuVar11 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)ppuVar11 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar4;
        uStack_aa = uVar5;
        *(undefined2 *)((long)&local_c0 + uVar15) = uVar2;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f08);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad79d8:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_78 + 2),(InlineSlice)&local_74);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)ppuVar11 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ed8);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad79d8;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_78 + 2),(LargeSlice)&local_74);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)ppuVar11 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)ppuVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_78 + 2),(LargeSlice)&local_74);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_78 + 2);
    puVar12 = &local_74;
    uStack_ac = uVar4;
    uStack_aa = uVar5;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar12,0);
      uStack_b7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_78._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f0c);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad7bac:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_78,(InlineSlice)(local_78 + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8edc);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad7bac;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_78,(LargeSlice)(local_78 + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_78,(LargeSlice)(local_78 + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_78;
    puVar13 = local_78 + 2;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_7c._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f10);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad7d80:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_7c + 2),(InlineSlice)local_78);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ee0);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad7d80;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_7c + 2),(LargeSlice)local_78);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_7c + 2),(LargeSlice)local_78);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_7c + 2);
    puVar13 = local_78;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_7c._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f14);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad7f54:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_7c,(InlineSlice)(local_7c + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ee4);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad7f54;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_7c,(LargeSlice)(local_7c + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_7c,(LargeSlice)(local_7c + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_7c;
    puVar13 = local_7c + 2;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_80._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f18);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad8128:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_80 + 2),(InlineSlice)local_7c);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ee8);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad8128;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_80 + 2),(LargeSlice)local_7c);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_80 + 2),(LargeSlice)local_7c);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_80 + 2);
    puVar13 = local_7c;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_80._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f1c);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad82fc:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_80,(InlineSlice)(local_80 + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8eec);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad82fc;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_80,(LargeSlice)(local_80 + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_80,(LargeSlice)(local_80 + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_80;
    puVar13 = local_80 + 2;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined4 *)((long)&local_c0 + uVar15) = local_84;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f20);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad84d4:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_84,(InlineSlice)local_80);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ef0);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad84d4;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)local_80);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)local_80);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_84;
    puVar13 = local_80;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined4 *)((long)&local_c0 + uVar15) = local_88;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f24);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad86ac:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_88,(InlineSlice)&local_84);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ef4);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad86ac;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_88,(LargeSlice)&local_84);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_88,(LargeSlice)&local_84);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_88;
    puVar12 = &local_84;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar12,0);
      uStack_b7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined4 *)((long)&local_c0 + uVar15) = local_8c;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f28);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad8884:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_8c,(InlineSlice)&local_88);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8ef8);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100ad8884;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_8c,(LargeSlice)&local_88);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_8c,(LargeSlice)&local_88);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_8c;
    puVar12 = &local_88;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar12,0);
      uStack_b7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined1 (*) [2])((long)&local_c0 + uVar15) = local_8e;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f2c);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad8a5c:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_8e,(InlineSlice)&local_8c);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8efc);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad8a5c;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_8e,(LargeSlice)&local_8c);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_8e,(LargeSlice)&local_8c);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar12 = (undefined4 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_8e;
    puVar12 = &local_8c;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar12,0);
      uStack_b7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = local_92._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f30);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_b9,
                          CONCAT16(uStack_ba,
                                   CONCAT15(uStack_bb,
                                            CONCAT14(uStack_bc,
                                                     CONCAT13(local_c0._3_1_,
                                                              CONCAT12(local_c0._2_1_,
                                                                       CONCAT11(local_c0._1_1_,
                                                                                (undefined1)local_c0
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))));
      }
      else {
        local_a8 = (undefined6)
                   (CONCAT17(uStack_b3,
                             CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                        CONCAT14(uStack_b6,
                                                                 CONCAT13(uStack_b7,
                                                                          CONCAT12(local_b8,
                                                  uStack_aa)))))) >> 0x10);
        local_b0 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
        local_b0 = 0;
        uStack_ac = (undefined2)uVar15;
        uStack_aa = 0;
        local_a8 = SUB86(p_Var10,0);
        uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100ad8c34:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_92 + 2),(InlineSlice)local_8e);
        puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
        puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f00);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100ad8c34;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_c0._0_1_ = SUB81(pRVar9,0);
      local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_b8 = (undefined1)uVar15;
      uStack_b7 = (undefined1)(uVar15 >> 8);
      uStack_b6 = (undefined1)(uVar15 >> 0x10);
      uStack_b5 = (undefined1)(uVar15 >> 0x18);
      local_b4 = (undefined1)(uVar15 >> 0x20);
      uStack_b3 = (undefined1)(uVar15 >> 0x28);
      local_b2 = (undefined1)(uVar15 >> 0x30);
      uStack_b1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_92 + 2),(LargeSlice)local_8e);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_b9,
                        CONCAT16(uStack_ba,
                                 CONCAT15(uStack_bb,
                                          CONCAT14(uStack_bc,
                                                   CONCAT13(local_c0._3_1_,
                                                            CONCAT12(local_c0._2_1_,
                                                                     CONCAT11(local_c0._1_1_,
                                                                              (undefined1)local_c0))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_a8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_92 + 2),(LargeSlice)local_8e);
    puVar8 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    puVar13 = (undefined1 *)(CONCAT26(uStack_a2,local_a8) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_92 + 2);
    puVar13 = local_8e;
    uStack_ac = uVar2;
    uStack_aa = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_aa;
  uVar2 = uStack_ac;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_ac = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_aa = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_c0._0_1_ = SUB81(puVar8,0);
      local_c0._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_c0._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_c0._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_bc = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_bb = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_ba = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_b9 = (undefined1)((ulong)puVar8 >> 0x38);
      local_b8 = SUB81(puVar13,0);
      uStack_b7 = (undefined1)((ulong)puVar13 >> 8);
      uStack_b6 = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_b5 = (undefined1)((ulong)puVar13 >> 0x18);
      local_b4 = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_b3 = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_ac = uVar2;
        uStack_aa = uVar4;
        *(undefined2 *)((long)&local_c0 + uVar15) = uVar3;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f34);
          (*pcVar6)();
        }
        local_b2 = (undefined1)uVar1;
        local_70 = (undefined4 *)
                   CONCAT17(uStack_b9,
                            CONCAT16(uStack_ba,
                                     CONCAT15(uStack_bb,
                                              CONCAT14(uStack_bc,
                                                       CONCAT13(local_c0._3_1_,
                                                                CONCAT12(local_c0._2_1_,
                                                                         CONCAT11(local_c0._1_1_,
                                                                                  (undefined1)
                                                                                  local_c0)))))));
        ppuStack_68 = (undefined4 **)
                      CONCAT44((uint)CONCAT11(uStack_b3,local_b4) | (uVar1 & 0xff) << 0x10,
                               CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))))
        ;
        goto LAB_100ad8e28;
      }
      local_a8 = (undefined6)
                 (CONCAT17(uStack_b3,
                           CONCAT16(local_b4,CONCAT15(uStack_b5,
                                                      CONCAT14(uStack_b6,
                                                               CONCAT13(uStack_b7,
                                                                        CONCAT12(local_b8,uStack_aa)
                                                                       ))))) >> 0x10);
      local_b0 = iVar7;
      p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
      p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_b0);
      local_b0 = 0;
      uStack_ac = (undefined2)uVar15;
      uStack_aa = 0;
      local_a8 = SUB86(p_Var10,0);
      uStack_a2 = (undefined2)((ulong)p_Var10 >> 0x30);
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_a8 = (undefined6)uVar15;
      uStack_a2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad8f04);
        local_b0 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_b0 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (0x7ffffffc < lVar16) {
        pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar9,0x20,7);
        *(long *)(pRVar9 + 0x10) = (long)iVar7;
        *(long *)(pRVar9 + 0x18) = lVar16;
        local_c0._0_1_ = SUB81(pRVar9,0);
        local_c0._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
        local_c0._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
        local_c0._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
        uStack_bc = (undefined1)((ulong)pRVar9 >> 0x20);
        uStack_bb = (undefined1)((ulong)pRVar9 >> 0x28);
        uStack_ba = (undefined1)((ulong)pRVar9 >> 0x30);
        uStack_b9 = (undefined1)((ulong)pRVar9 >> 0x38);
        local_b8 = (undefined1)uVar15;
        uStack_b7 = (undefined1)(uVar15 >> 8);
        uStack_b6 = (undefined1)(uVar15 >> 0x10);
        uStack_b5 = (undefined1)(uVar15 >> 0x18);
        local_b4 = (undefined1)(uVar15 >> 0x20);
        uStack_b3 = (undefined1)(uVar15 >> 0x28);
        local_b2 = (undefined1)(uVar15 >> 0x30);
        uStack_b1 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)local_92,(LargeSlice)(local_92 + 2));
        local_70 = (undefined4 *)
                   CONCAT17(uStack_b9,
                            CONCAT16(uStack_ba,
                                     CONCAT15(uStack_bb,
                                              CONCAT14(uStack_bc,
                                                       CONCAT13(local_c0._3_1_,
                                                                CONCAT12(local_c0._2_1_,
                                                                         CONCAT11(local_c0._1_1_,
                                                                                  (undefined1)
                                                                                  local_c0)))))));
        uVar15 = CONCAT17(uStack_b1,
                          CONCAT16(local_b2,CONCAT15(uStack_b3,
                                                     CONCAT14(local_b4,CONCAT13(uStack_b5,
                                                                                CONCAT12(uStack_b6,
                                                                                         CONCAT11(
                                                  uStack_b7,local_b8)))))));
        goto LAB_100ad8db4;
      }
    }
    Foundation::Data::InlineSlice::append
              ((UnsafeRawBufferPointer)local_92,(InlineSlice)(local_92 + 2));
    local_70 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    ppuStack_68 = (undefined4 **)(CONCAT26(uStack_a2,local_a8) | 0x4000000000000000);
  }
  else {
    if (uVar14 != 2) {
      puVar8 = (undefined4 *)local_92;
      puVar13 = local_92 + 2;
      uStack_ac = uVar2;
      uStack_aa = uVar4;
      FUN_100ad8ff4();
      local_70 = puVar8;
      ppuStack_68 = (undefined4 **)puVar13;
      goto LAB_100ad8e28;
    }
    local_a8 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_a2 = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_b0 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_92,(LargeSlice)(local_92 + 2));
    local_70 = (undefined4 *)CONCAT26(uStack_aa,CONCAT24(uStack_ac,local_b0));
    uVar15 = CONCAT26(uStack_a2,local_a8);
LAB_100ad8db4:
    ppuStack_68 = (undefined4 **)(uVar15 | 0x8000000000000000);
  }
LAB_100ad8e28:
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&local_94,(_Representation)((char)&local_94 + 2));
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&local_96,(_Representation)((char)&local_96 + 2));
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&uStack_9c,(_Representation)((char)&uStack_9c + 4));
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&local_a0,(_Representation)((char)&local_a0 + 4));
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 0xc),(Data)*(undefined **)(unaff_x20 + 0xe));
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 0x10),(Data)*(undefined **)(unaff_x20 + 0x12));
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 0x14),(Data)*(undefined **)(unaff_x20 + 0x16));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70,ppuStack_68);
  }
  return;
}



/* Address: 0x100ad8f38 | FUN_100ad8f38 */

void FUN_100ad8f38(void *param_1,void *param_2)

{
  size_t sVar1;
  void *pvVar2;
  size_t local_48;
  undefined4 local_40;
  undefined2 local_3c;
  undefined1 local_3a;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  sVar1 = 0;
  if (param_1 != (void *)0x0) {
    sVar1 = (long)param_2 - (long)param_1;
  }
  pvVar2 = param_2;
  FUN_100488120();
  local_40 = SUB84(pvVar2,0);
  local_3a = (undefined1)((ulong)pvVar2 >> 0x30);
  local_3c = (undefined2)((ulong)pvVar2 >> 0x20);
  local_48 = sVar1;
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    _memcpy(&local_48,param_1,(long)param_2 - (long)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad8ff4 | FUN_100ad8ff4 */

undefined1  [16] FUN_100ad8ff4(ulong param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  
  if ((param_1 == 0) || (param_2 == param_1)) {
    return ZEXT816(0xc000000000000000) << 0x40;
  }
  if (param_2 - param_1 < 0xf) {
    FUN_100ad8f38();
    auVar1._8_8_ = param_2 & 0xffffffffffffff;
    auVar1._0_8_ = param_1;
    return auVar1;
  }
  if (0x7ffffffe < param_2 - param_1) {
    FUN_1004419dc();
    auVar3._8_8_ = param_2 | 0x8000000000000000;
    auVar3._0_8_ = param_1;
    return auVar3;
  }
  FUN_100441978();
  auVar2._8_8_ = param_2 | 0x4000000000000000;
  auVar2._0_8_ = param_1;
  return auVar2;
}



/* Address: 0x100ad9058 | FUN_100ad9058 */

void FUN_100ad9058(ulong *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  ushort uVar1;
  Range<__int64> in;
  code *pcVar2;
  Deallocator DVar3;
  int iVar4;
  undefined7 extraout_var;
  __DataStorage *p_Var5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  Data DVar8;
  Data DVar9;
  undefined *puVar10;
  size_t sVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  uint unaff_w20;
  __DataStorage *this;
  undefined *puVar16;
  Data DVar17;
  Data DVar18;
  uint uVar19;
  Data DVar20;
  ulong uVar21;
  long lVar22;
  Range<__int64> RVar23;
  Data DVar24;
  ulong uVar25;
  ulong uVar26;
  ulong uVar27;
  Data aDStack_300 [2];
  Range<__int64> local_2f0;
  undefined4 local_2e8;
  undefined4 local_2e4;
  uint local_2e0;
  uint local_2dc;
  uint local_2d8;
  undefined4 local_2d4;
  undefined4 local_2d0;
  undefined4 local_2cc;
  ulong local_2c8;
  ulong local_2c0;
  uint local_2b4;
  ulong local_2b0;
  ulong local_2a8;
  size_t local_2a0;
  ulong local_298;
  uint local_28c;
  ulong local_288;
  ulong local_280;
  ulong uStack_278;
  FILE *local_268;
  undefined8 *local_260;
  ulong uStack_258;
  __DataStorage *local_248;
  undefined1 auStack_240 [104];
  undefined4 local_1d8;
  undefined2 uStack_1d4;
  undefined2 uStack_1d2;
  undefined2 uStack_1d0;
  undefined2 uStack_1ce;
  undefined2 uStack_1cc;
  undefined2 uStack_1ca;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined2 uStack_1bc;
  undefined2 uStack_1ba;
  undefined2 local_1b8;
  undefined2 uStack_1b6;
  undefined2 uStack_1b4;
  undefined2 uStack_1b2;
  undefined4 local_1b0;
  undefined4 local_1ac;
  __DataStorage *local_1a8;
  undefined *puStack_1a0;
  undefined *local_198;
  undefined *puStack_190;
  undefined *local_188;
  undefined *puStack_180;
  undefined *local_178;
  undefined4 local_170;
  undefined2 local_16c;
  undefined2 local_16a;
  undefined2 local_168;
  undefined2 local_166;
  undefined2 local_164;
  undefined2 local_162;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined2 local_154;
  undefined2 local_152;
  undefined2 local_150;
  undefined2 local_14e;
  undefined2 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  __DataStorage *local_140;
  undefined *puStack_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  char local_e4;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined2 local_da;
  undefined2 local_d8;
  undefined2 local_d6;
  undefined2 local_d4;
  undefined2 local_d2;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined2 local_c2;
  undefined2 local_c0;
  undefined2 local_be;
  undefined2 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar3 = Foundation::Data::Deallocator::typeMetadataAccessor();
  p_Var7 = (__DataStorage *)CONCAT71(extraout_var,DVar3.value);
  uVar21 = *(ulong *)(p_Var7 + -8);
  puVar15 = (undefined8 *)
            ((long)aDStack_300 - (*(long *)(uVar21 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar19 = (uint)(param_3 >> 0x20);
  iVar4 = (int)param_2;
  if (uVar19 >> 0x1e < 2) {
    if (uVar19 >> 0x1e == 0) {
      uVar14 = param_3 >> 0x30 & 0xff;
joined_r0x000100ad90f8:
      if (uVar14 != 0x2e) goto LAB_100ad9c10;
    }
    else {
      iVar12 = (int)(param_2 >> 0x20);
      if (SBORROW4(iVar12,iVar4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e50);
        (*pcVar2)();
      }
      if (iVar12 - iVar4 != 0x2e) goto LAB_100ad9c10;
    }
    uVar19 = uVar19 >> 0x1e;
    if (uVar19 == 2) {
      lVar22 = *(long *)(param_2 + 0x10);
      local_268 = param_4;
      local_248 = p_Var7;
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7)
      ;
      if (p_Var7 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9ef0:
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ef4);
        (*pcVar2)();
      }
      p_Var6 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
      if (SBORROW8(lVar22,(long)p_Var6)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e58);
        (*pcVar2)();
      }
      p_Var5 = p_Var7 + (lVar22 - (long)p_Var6);
      p_Var7 = (__DataStorage *)(param_3 & 0x3fffffffffffffff);
      Foundation::__DataStorage::get__length(p_Var7,p_Var6);
      unaff_w20 = (uint)p_Var7;
      if (p_Var5 == (__DataStorage *)0x0) goto LAB_100ad9ef0;
      p_Var7 = local_248;
      uVar14 = (ulong)*(uint *)p_Var5;
      param_4 = local_268;
    }
    else {
      uVar14 = param_2;
      if (uVar19 == 1) {
        lVar22 = (long)iVar4;
        local_260 = puVar15;
        if ((long)param_2 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e54);
          local_268 = param_4;
          (*pcVar2)();
        }
        p_Var6 = p_Var7;
        local_268 = param_4;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9efc:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f00);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e5c);
          (*pcVar2)();
        }
        this = (__DataStorage *)(param_3 & 0x3fffffffffffffff);
        Foundation::__DataStorage::get__length(this,p_Var5);
        unaff_w20 = (uint)this;
        if (p_Var6 + (lVar22 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100ad9efc;
        uVar14 = (ulong)*(uint *)(p_Var6 + (lVar22 - (long)p_Var5));
        puVar15 = local_260;
        param_4 = local_268;
      }
    }
    if ((int)uVar14 == 0x2014b50) {
      local_298 = uVar21;
      local_280 = param_2;
      local_260 = puVar15;
      local_248 = p_Var7;
      if (uVar19 == 2) {
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f08:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f0c);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar22,(long)p_Var6)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e64);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var7 + (lVar22 - (long)p_Var6) == (__DataStorage *)0x0) goto LAB_100ad9f08;
        local_2a8 = (ulong)*(ushort *)(p_Var7 + (lVar22 - (long)p_Var6) + 4);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f20:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f24);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e6c);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f20;
        local_2b0 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 6);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f38:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f3c);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e74);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f38;
        local_2b4 = (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 8);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f50:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f54);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e7c);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f50;
        local_2c0 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 10);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f68:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f6c);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e84);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f68;
        local_2c8 = (ulong)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0xc);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f80:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f84);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e8c);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f80;
        uVar1 = *(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0xe);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f98:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f9c);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e94);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f98;
        local_2cc = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x10);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fb0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fb4);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e9c);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fb0;
        local_2d0 = *(undefined4 *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x14);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fc8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fcc);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ea4);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fc8;
        local_2d4 = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x18);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fe0:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fe4);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9eac);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fe0;
        local_288 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x1c);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9ff8:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ffc);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9eb4);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9ff8;
        local_268 = (FILE *)CONCAT44(local_268._4_4_,
                                     (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x1e));
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada010:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada014);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ebc);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada010;
        local_28c = (uint)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x20);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada028:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada02c);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ec4);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada028;
        local_2d8 = (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x22);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada040:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada044);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ecc);
          (*pcVar2)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada040;
        local_2dc = (uint)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x24);
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada058:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada05c);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ed4);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada058;
        local_2e4 = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x26);
        local_2e0 = (uint)uVar1;
        lVar22 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada074);
          (*pcVar2)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9edc);
          (*pcVar2)();
        }
        p_Var5 = p_Var5 + (lVar22 - (long)p_Var7);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada084);
          (*pcVar2)();
        }
LAB_100ad996c:
        local_2e8 = *(undefined4 *)(p_Var5 + 0x2a);
        param_2 = (ulong)local_268 & 0xffffffff;
        uVar21 = local_288;
        unaff_w20 = local_28c;
      }
      else {
        if (uVar19 == 1) {
          lVar22 = (long)iVar4;
          if ((long)param_2 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e60);
            (*pcVar2)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var7 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f14:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f18);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (SBORROW8(lVar22,(long)p_Var6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e68);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var7 + (lVar22 - (long)p_Var6) == (__DataStorage *)0x0) goto LAB_100ad9f14;
          local_2a8 = (ulong)*(ushort *)(p_Var7 + (lVar22 - (long)p_Var6) + 4);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f2c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f30);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e70);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f2c;
          local_2b0 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 6);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f44:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f48);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e78);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f44;
          local_2b4 = (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 8);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f5c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f60);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e80);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f5c;
          local_2c0 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f74:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f78);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e88);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f74;
          local_2c8 = (ulong)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0xc);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9f8c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9f90);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e90);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9f8c;
          uVar1 = *(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0xe);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fa4:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fa8);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e98);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fa4;
          local_2cc = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fbc:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fc0);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ea0);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fbc;
          local_2d0 = *(undefined4 *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x14);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fd4:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9fd8);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ea8);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fd4;
          local_2d4 = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad9fec:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ff0);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9eb0);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad9fec;
          local_288 = (ulong)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x1c);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada004:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada008);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9eb8);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada004;
          local_268 = (FILE *)CONCAT44(local_268._4_4_,
                                       (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x1e));
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada01c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada020);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ec0);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada01c;
          local_28c = (uint)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x20);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada034:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada038);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ec8);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada034;
          local_2d8 = (uint)*(ushort *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x22);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada04c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada050);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ed0);
            (*pcVar2)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada04c;
          local_2dc = (uint)*(ushort *)(p_Var5 + (lVar22 - (long)p_Var7) + 0x24);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada064:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada068);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ed8);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar22 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ada064;
          local_2e4 = *(undefined4 *)(p_Var6 + (lVar22 - (long)p_Var7) + 0x26);
          local_2e0 = (uint)uVar1;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ada07c:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ada080);
            (*pcVar2)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar22,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ee0);
            (*pcVar2)();
          }
          p_Var5 = p_Var5 + (lVar22 - (long)p_Var7);
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 == (__DataStorage *)0x0) goto LAB_100ada07c;
          goto LAB_100ad996c;
        }
        local_2a8 = param_2 >> 0x20;
        local_2b0 = param_2 >> 0x30;
        local_2c0 = param_3 >> 0x10;
        local_2b4 = (uint)param_3;
        local_2c8 = param_3 >> 0x20;
      }
      local_268 = (FILE *)CONCAT44(local_268._4_4_,(int)param_2);
      puVar16 = (undefined *)(uVar21 & 0xffff) + (param_2 & 0xffff);
      DVar17.unknown = puVar16 + (ushort)unaff_w20;
      DVar8.unknown = DVar17.unknown;
      _swift_slowAlloc(DVar17.unknown,0xffffffffffffffff);
      local_2a0 = _fread(DVar8.unknown,1,(size_t)DVar17.unknown,param_4);
      iVar4 = _ferror(param_4);
      puVar15 = local_260;
      if (iVar4 < 1) {
        aDStack_300[1].unknown = (undefined *)(uVar21 & 0xffff);
        local_2f0.unknown = puVar16;
        local_28c = unaff_w20;
        local_288 = uVar21;
        *local_260 = FUN_10094a398;
        puVar15[1] = 0;
        (**(code **)(local_298 + 0x68))
                  (puVar15,*(undefined4 *)
                            PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
                   ,local_248);
        sVar11 = local_2a0;
        FUN_100abfa10(DVar8.unknown,local_2a0,puVar15);
        param_2 = local_280;
        in.unknown = local_2f0.unknown;
        DVar20.unknown = aDStack_300[1].unknown;
        uVar19 = (uint)(sVar11 >> 0x20);
        uVar13 = uVar19 >> 0x1e;
        if (uVar19 >> 0x1e < 2) {
          if (uVar13 == 0) {
            puVar16 = (undefined *)(sVar11 >> 0x30 & 0xff);
          }
          else {
            iVar4 = (int)((ulong)DVar8.unknown >> 0x20);
            if (SBORROW4(iVar4,(int)DVar8.unknown)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9ee4);
              (*pcVar2)();
            }
            puVar16 = (undefined *)(long)(iVar4 - (int)DVar8.unknown);
          }
LAB_100ad9ab8:
          if (puVar16 != DVar17.unknown) {
LAB_100ad9c08:
            FUN_10003bf2c();
            goto LAB_100ad9c10;
          }
        }
        else {
          if (uVar13 == 2) {
            puVar16 = (undefined *)
                      (*(long *)(DVar8.unknown + 0x18) - *(long *)(DVar8.unknown + 0x10));
            if (SBORROW8(*(long *)(DVar8.unknown + 0x18),*(long *)(DVar8.unknown + 0x10))) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9aa4);
              (*pcVar2)();
            }
            goto LAB_100ad9ab8;
          }
          if (DVar17.unknown != (undefined *)0x0) goto LAB_100ad9c08;
        }
        DVar18.unknown = aDStack_300[1].unknown;
        DVar9 = Foundation::Data::subdata((Range<__int64>)0x0,aDStack_300[1]);
        RVar23.unknown = in.unknown;
        DVar20 = Foundation::Data::subdata(DVar20.unknown,in.unknown);
        local_260 = (undefined8 *)DVar8.unknown;
        DVar24 = Foundation::Data::subdata(in,DVar17);
        local_e0 = 0x2014b50;
        local_dc = (undefined2)local_2a8;
        local_da = (undefined2)local_2b0;
        local_d8 = (undefined2)local_2b4;
        local_d6 = (undefined2)local_2c0;
        local_d4 = (undefined2)local_2c8;
        local_d2 = (undefined2)local_2e0;
        local_d0 = local_2cc;
        uStack_cc = local_2d0;
        local_c8 = local_2d4;
        local_c4 = (undefined2)local_288;
        local_c2 = SUB82(local_268,0);
        local_c0 = (undefined2)local_28c;
        local_be = (undefined2)local_2d8;
        local_bc = (undefined2)local_2dc;
        local_b8 = local_2e4;
        uStack_b4 = local_2e8;
        local_80 = 0;
        DVar8 = DVar24;
        local_248 = (__DataStorage *)DVar9;
        local_b0 = DVar9.unknown;
        puStack_a8 = DVar18.unknown;
        local_a0 = DVar20.unknown;
        puStack_98 = RVar23.unknown;
        local_90 = DVar24.unknown;
        puStack_88 = DVar17.unknown;
        FUN_100adb280();
        FUN_100adbd6c(&local_108,DVar20.unknown,RVar23.unknown,DVar8.unknown);
        _swift_bridgeObjectRelease(DVar8.unknown);
        if (local_e4 == '\x01') {
          FUN_10003bf2c(local_260,sVar11);
          FUN_10003bf2c(local_280,param_3);
          puVar16 = (undefined *)0x0;
        }
        else {
          local_78 = local_80;
          puVar16 = &DAT_100ff82d8;
          FUN_1000f7830(&DAT_100ff82d8,&DAT_100c94c80);
          _swift_allocObject();
          *(undefined8 *)(puVar16 + 0x18) = 2;
          *(undefined8 *)(puVar16 + 0x10) = 1;
          *(undefined **)(puVar16 + 0x38) = &DAT_100f317a8;
          *(undefined ***)(puVar16 + 0x40) = &PTR_PTR_100f317d0;
          puVar10 = &DAT_100f31608;
          _swift_allocObject(&DAT_100f31608,0x38,7);
          *(undefined **)(puVar16 + 0x20) = puVar10;
          *(undefined8 *)(puVar10 + 0x18) = uStack_100;
          *(undefined8 *)(puVar10 + 0x10) = local_108;
          *(undefined8 *)(puVar10 + 0x28) = uStack_f0;
          *(undefined8 *)(puVar10 + 0x20) = uStack_f8;
          *(undefined4 *)(puVar10 + 0x30) = local_e8;
          FUN_10003bf2c(local_260,sVar11);
          FUN_10003bf2c(local_280,param_3);
          FUN_100adac6c(&local_78);
        }
        local_1d8 = 0x2014b50;
        uStack_1d4 = (undefined2)local_2a8;
        uStack_1d2 = (undefined2)local_2b0;
        uStack_1d0 = (undefined2)local_2b4;
        uStack_1ce = (undefined2)local_2c0;
        uStack_1cc = (undefined2)local_2c8;
        uStack_1ca = (undefined2)local_2e0;
        local_1c8 = local_2cc;
        uStack_1c4 = local_2d0;
        uStack_1c0 = local_2d4;
        uStack_1bc = (undefined2)local_288;
        uStack_1ba = SUB82(local_268,0);
        local_1b8 = (undefined2)local_28c;
        uStack_1b6 = (undefined2)local_2d8;
        uStack_1b4 = (undefined2)local_2dc;
        local_1b0 = local_2e4;
        local_1ac = local_2e8;
        local_1a8 = local_248;
        uStack_258 = CONCAT26(uStack_1ba,CONCAT24(uStack_1bc,local_2d4));
        local_260 = (undefined8 *)CONCAT44(local_2d0,local_2cc);
        uStack_278 = CONCAT26(uStack_1ca,CONCAT24(uStack_1cc,CONCAT22(uStack_1ce,uStack_1d0)));
        local_280 = CONCAT26(uStack_1d2,CONCAT24(uStack_1d4,0x2014b50));
        uVar21 = CONCAT26(uStack_1b2,CONCAT24(uStack_1b4,CONCAT22(uStack_1b6,local_1b8)));
        uVar14 = CONCAT44(local_2e8,local_2e4);
        local_170 = 0x2014b50;
        local_160 = local_2cc;
        local_15c = local_2d0;
        local_158 = local_2d4;
        local_148 = local_2e4;
        local_144 = local_2e8;
        local_140 = local_248;
        puStack_1a0 = DVar18.unknown;
        local_198 = DVar20.unknown;
        puStack_190 = RVar23.unknown;
        local_188 = DVar24.unknown;
        puStack_180 = DVar17.unknown;
        local_178 = puVar16;
        local_16c = uStack_1d4;
        local_16a = uStack_1d2;
        local_168 = uStack_1d0;
        local_166 = uStack_1ce;
        local_164 = uStack_1cc;
        local_162 = uStack_1ca;
        local_154 = uStack_1bc;
        local_152 = uStack_1ba;
        local_150 = local_1b8;
        local_14e = uStack_1b6;
        local_14c = uStack_1b4;
        puStack_138 = DVar18.unknown;
        local_130 = DVar20.unknown;
        puStack_128 = RVar23.unknown;
        local_120 = DVar24.unknown;
        puStack_118 = DVar17.unknown;
        local_110 = puVar16;
        FUN_100abcdd8(&local_1d8,auStack_240);
        FUN_100abce14(&local_170);
        p_Var7 = local_248;
        uVar25 = local_280;
        uVar26 = uStack_278;
        puVar15 = local_260;
        uVar27 = uStack_258;
        goto LAB_100ad9c44;
      }
      _swift_slowDealloc(DVar8.unknown,0xffffffffffffffff,0xffffffffffffffff);
      param_2 = local_280;
    }
  }
  else if (uVar19 >> 0x1e == 2) {
    uVar14 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100ad9e4c);
      (*pcVar2)();
    }
    goto joined_r0x000100ad90f8;
  }
LAB_100ad9c10:
  FUN_10003bf2c(param_2,param_3);
  uVar21 = 0;
  uVar14 = 0;
  DVar18.unknown = (undefined *)0x0;
  DVar20.unknown = (undefined *)0x0;
  RVar23.unknown = (undefined *)0x0;
  DVar24.unknown = (undefined *)0x0;
  DVar17.unknown = (undefined *)0x0;
  puVar16 = (undefined *)0x1;
  p_Var7 = (__DataStorage *)0x0;
  uVar25 = 0;
  uVar26 = 0;
  puVar15 = (undefined8 *)0x0;
  uVar27 = 0;
LAB_100ad9c44:
  param_1[1] = uVar26;
  *param_1 = uVar25;
  param_1[3] = uVar27;
  param_1[2] = (ulong)puVar15;
  param_1[4] = uVar21;
  param_1[5] = uVar14;
  param_1[6] = (ulong)p_Var7;
  param_1[7] = (ulong)DVar18.unknown;
  param_1[8] = (ulong)DVar20.unknown;
  param_1[9] = (ulong)RVar23.unknown;
  param_1[10] = (ulong)DVar24.unknown;
  param_1[0xb] = (ulong)DVar17.unknown;
  param_1[0xc] = (ulong)puVar16;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ada084 | FUN_100ada084 */

void FUN_100ada084(ulong *param_1,ulong param_2,ulong param_3,FILE *param_4)

{
  ushort uVar1;
  FILE *pFVar2;
  code *pcVar3;
  Deallocator DVar4;
  int iVar5;
  undefined7 extraout_var;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  Data DVar9;
  size_t sVar10;
  Data DVar11;
  undefined *puVar12;
  int iVar13;
  ulong uVar14;
  undefined *puVar15;
  Range<__int64> in;
  Data DVar16;
  uint uVar17;
  Range<__int64> RVar18;
  Data DVar19;
  uint uVar20;
  Data DVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  ulong uVar26;
  __DataStorage a_Stack_240 [8];
  uint local_238;
  undefined4 local_234;
  undefined4 local_230;
  undefined4 local_22c;
  ulong local_228;
  ulong local_220;
  uint local_214;
  ulong local_210;
  ulong local_208;
  __DataStorage *local_200;
  long lStack_1f8;
  ulong local_1f0;
  ulong uStack_1e8;
  __DataStorage *local_1e0;
  ulong uStack_1d8;
  FILE *local_1c8;
  undefined1 auStack_1c0 [72];
  undefined4 local_178;
  undefined2 uStack_174;
  undefined2 uStack_172;
  undefined2 uStack_170;
  undefined2 uStack_16e;
  undefined2 uStack_16c;
  undefined2 uStack_16a;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined2 uStack_15c;
  undefined2 uStack_15a;
  undefined *local_158;
  undefined *puStack_150;
  undefined *local_148;
  undefined *puStack_140;
  undefined *local_138;
  undefined4 local_130;
  undefined2 local_12c;
  undefined2 local_12a;
  undefined2 local_128;
  undefined2 local_126;
  undefined2 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined2 local_114;
  undefined2 local_112;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  char local_c4;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined2 local_ba;
  undefined2 local_b8;
  undefined2 local_b6;
  undefined2 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined2 local_a2;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined8 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  p_Var8 = (__DataStorage *)CONCAT71(extraout_var,DVar4.value);
  lVar23 = *(long *)(p_Var8 + -8);
  p_Var7 = a_Stack_240 + -(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar20 = (uint)(param_3 >> 0x20);
  iVar5 = (int)param_2;
  if (uVar20 >> 0x1e < 2) {
    if (uVar20 >> 0x1e == 0) {
      uVar14 = param_3 >> 0x30 & 0xff;
joined_r0x000100ada124:
      if (uVar14 != 0x1e) goto LAB_100ada454;
    }
    else {
      iVar13 = (int)(param_2 >> 0x20);
      if (SBORROW4(iVar13,iVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaa4);
        (*pcVar3)();
      }
      if (iVar13 - iVar5 != 0x1e) goto LAB_100ada454;
    }
    uVar20 = uVar20 >> 0x1e;
    local_1e0 = p_Var7;
    local_1c8 = param_4;
    if (uVar20 == 2) {
      lVar24 = *(long *)(param_2 + 0x10);
      p_Var7 = p_Var8;
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8)
      ;
      if (p_Var7 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab1c);
        (*pcVar3)();
      }
      p_Var6 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
      if (SBORROW8(lVar24,(long)p_Var6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaac);
        (*pcVar3)();
      }
      p_Var7 = p_Var7 + (lVar24 - (long)p_Var6);
      param_4 = (FILE *)(param_3 & 0x3fffffffffffffff);
      Foundation::__DataStorage::get__length((__DataStorage *)param_4,p_Var6);
      if (p_Var7 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab2c);
        (*pcVar3)();
      }
LAB_100ada1e0:
      uVar14 = (ulong)*(uint *)p_Var7;
      p_Var7 = p_Var8;
    }
    else {
      uVar14 = param_2;
      if (uVar20 == 1) {
        lVar24 = (long)iVar5;
        if ((long)param_2 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaa8);
          (*pcVar3)();
        }
        p_Var7 = p_Var8;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab24:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab28);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar24,(long)p_Var6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaab0);
          (*pcVar3)();
        }
        p_Var7 = p_Var7 + (lVar24 - (long)p_Var6);
        param_4 = (FILE *)(param_3 & 0x3fffffffffffffff);
        Foundation::__DataStorage::get__length((__DataStorage *)param_4,p_Var6);
        if (p_Var7 == (__DataStorage *)0x0) goto LAB_100adab24;
        goto LAB_100ada1e0;
      }
    }
    uVar17 = (uint)p_Var7;
    if ((int)uVar14 == 0x4034b50) {
      local_200 = p_Var8;
      lStack_1f8 = lVar23;
      local_1f0 = param_2;
      if (uVar20 == 2) {
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab34:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab38);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaab8);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab34;
        local_208 = (ulong)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 4);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab4c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab50);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaac0);
          (*pcVar3)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab4c;
        local_210 = (ulong)*(ushort *)(p_Var6 + (lVar23 - (long)p_Var7) + 6);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab64:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab68);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaac8);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab64;
        local_214 = (uint)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 8);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab7c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab80);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaad0);
          (*pcVar3)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab7c;
        local_220 = (ulong)*(ushort *)(p_Var6 + (lVar23 - (long)p_Var7) + 10);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab94:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab98);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaad8);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab94;
        local_228 = (ulong)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 0xc);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabac:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabb0);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaae0);
          (*pcVar3)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabac;
        local_22c = *(undefined4 *)(p_Var6 + (lVar23 - (long)p_Var7) + 0xe);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabc4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabc8);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaae8);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabc4;
        local_230 = *(undefined4 *)(p_Var8 + (lVar23 - (long)p_Var7) + 0x12);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabdc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabe0);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaf0);
          (*pcVar3)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabdc;
        local_234 = *(undefined4 *)(p_Var6 + (lVar23 - (long)p_Var7) + 0x16);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabf4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabf8);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaf8);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabf4;
        uVar1 = *(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 0x1a);
        lVar23 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adac10);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab00);
          (*pcVar3)();
        }
        p_Var6 = p_Var6 + (lVar23 - (long)p_Var7);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adac20);
          (*pcVar3)();
        }
LAB_100ada70c:
        param_4 = (FILE *)(ulong)uVar1;
        uVar17 = (uint)*(ushort *)(p_Var6 + 0x1c);
      }
      else {
        if (uVar20 == 1) {
          lVar23 = (long)iVar5;
          if ((long)param_2 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaab4);
            (*pcVar3)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (p_Var8 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab40:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab44);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaabc);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab40;
          local_208 = (ulong)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 4);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab58:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab5c);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaac4);
            (*pcVar3)();
          }
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab58;
          local_210 = (ulong)*(ushort *)(p_Var6 + (lVar23 - (long)p_Var7) + 6);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (p_Var8 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab70:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab74);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaacc);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab70;
          local_214 = (uint)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 8);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adab88:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab8c);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaad4);
            (*pcVar3)();
          }
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adab88;
          local_220 = (ulong)*(ushort *)(p_Var6 + (lVar23 - (long)p_Var7) + 10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (p_Var8 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adaba0:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaba4);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaadc);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adaba0;
          local_228 = (ulong)*(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 0xc);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabb8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabbc);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaae4);
            (*pcVar3)();
          }
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabb8;
          local_22c = *(undefined4 *)(p_Var6 + (lVar23 - (long)p_Var7) + 0xe);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (p_Var8 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabd0:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabd4);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaec);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabd0;
          local_230 = *(undefined4 *)(p_Var8 + (lVar23 - (long)p_Var7) + 0x12);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adabe8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adabec);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaf4);
            (*pcVar3)();
          }
          p_Var8 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adabe8;
          local_234 = *(undefined4 *)(p_Var6 + (lVar23 - (long)p_Var7) + 0x16);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (p_Var8 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adac00:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adac04);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaafc);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var8 + (lVar23 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100adac00;
          uVar1 = *(ushort *)(p_Var8 + (lVar23 - (long)p_Var7) + 0x1a);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adac18:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adac1c);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar23,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab04);
            (*pcVar3)();
          }
          p_Var6 = p_Var6 + (lVar23 - (long)p_Var7);
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 == (__DataStorage *)0x0) goto LAB_100adac18;
          goto LAB_100ada70c;
        }
        local_208 = param_2 >> 0x20;
        local_210 = param_2 >> 0x30;
        local_220 = param_3 >> 0x10;
        local_214 = (uint)param_3;
        local_228 = param_3 >> 0x20;
      }
      in.unknown = (undefined *)((ulong)param_4 & 0xffff);
      DVar21.unknown = in.unknown + (ushort)uVar17;
      DVar9.unknown = DVar21.unknown;
      _swift_slowAlloc(DVar21.unknown,0xffffffffffffffff);
      pFVar2 = local_1c8;
      sVar10 = _fread(DVar9.unknown,1,(size_t)DVar21.unknown,local_1c8);
      iVar5 = _ferror(pFVar2);
      p_Var7 = local_1e0;
      if (iVar5 < 1) {
        local_238 = uVar17;
        local_1c8 = param_4;
        *(code **)local_1e0 = FUN_10094a398;
        *(undefined8 *)(p_Var7 + 8) = 0;
        (**(code **)(lStack_1f8 + 0x68))
                  (p_Var7,*(undefined4 *)
                           PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
                   ,local_200);
        FUN_100abfa10(DVar9.unknown,sVar10,p_Var7);
        param_2 = local_1f0;
        uVar22 = local_22c;
        uVar20 = (uint)(sVar10 >> 0x20);
        uVar17 = uVar20 >> 0x1e;
        if (uVar20 >> 0x1e < 2) {
          if (uVar17 == 0) {
            puVar15 = (undefined *)(sVar10 >> 0x30 & 0xff);
          }
          else {
            iVar5 = (int)((ulong)DVar9.unknown >> 0x20);
            if (SBORROW4(iVar5,(int)DVar9.unknown)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab0c);
              (*pcVar3)();
            }
            puVar15 = (undefined *)(long)(iVar5 - (int)DVar9.unknown);
          }
LAB_100ada82c:
          if (puVar15 != DVar21.unknown) {
LAB_100ada93c:
            FUN_10003bf2c();
            goto LAB_100ada454;
          }
        }
        else {
          if (uVar17 == 2) {
            puVar15 = (undefined *)
                      (*(long *)(DVar9.unknown + 0x18) - *(long *)(DVar9.unknown + 0x10));
            if (SBORROW8(*(long *)(DVar9.unknown + 0x18),*(long *)(DVar9.unknown + 0x10))) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100adab08);
              (*pcVar3)();
            }
            goto LAB_100ada82c;
          }
          if (DVar21.unknown != (undefined *)0x0) goto LAB_100ada93c;
        }
        RVar18.unknown = in.unknown;
        local_1e0 = (__DataStorage *)sVar10;
        DVar16 = Foundation::Data::subdata((Range<__int64>)0x0,(Data)in.unknown);
        DVar19 = Foundation::Data::subdata(in,DVar21);
        local_c0 = 0x4034b50;
        local_bc = (undefined2)local_208;
        local_ba = (undefined2)local_210;
        local_b8 = (undefined2)local_214;
        local_b6 = (undefined2)local_220;
        local_b4 = (undefined2)local_228;
        local_b0 = uVar22;
        uStack_ac = local_230;
        local_a8 = local_234;
        local_a4 = SUB82(local_1c8,0);
        local_a2 = (undefined2)local_238;
        local_80 = 0;
        DVar11 = DVar19;
        local_a0 = DVar16.unknown;
        puStack_98 = RVar18.unknown;
        local_90 = DVar19.unknown;
        puStack_88 = DVar21.unknown;
        FUN_100adb17c();
        FUN_100adbd6c(&local_e8,DVar19.unknown,DVar21.unknown,DVar11.unknown);
        _swift_bridgeObjectRelease(DVar11.unknown);
        if (local_c4 == '\x01') {
          FUN_10003bf2c(DVar9.unknown,local_1e0);
          FUN_10003bf2c(local_1f0,param_3);
          puVar15 = (undefined *)0x0;
        }
        else {
          local_78 = local_80;
          puVar15 = &DAT_100ff82d8;
          FUN_1000f7830(&DAT_100ff82d8,&DAT_100c94c80);
          _swift_allocObject();
          *(undefined8 *)(puVar15 + 0x18) = 2;
          *(undefined8 *)(puVar15 + 0x10) = 1;
          *(undefined **)(puVar15 + 0x38) = &DAT_100f317a8;
          *(undefined ***)(puVar15 + 0x40) = &PTR_PTR_100f317d0;
          puVar12 = &DAT_100f31608;
          _swift_allocObject(&DAT_100f31608,0x38,7);
          *(undefined **)(puVar15 + 0x20) = puVar12;
          FUN_10003bf2c(DVar9.unknown,local_1e0);
          FUN_10003bf2c(local_1f0,param_3);
          uVar22 = local_22c;
          *(undefined8 *)(puVar12 + 0x18) = uStack_e0;
          *(undefined8 *)(puVar12 + 0x10) = local_e8;
          *(undefined8 *)(puVar12 + 0x28) = uStack_d0;
          *(undefined8 *)(puVar12 + 0x20) = uStack_d8;
          *(undefined4 *)(puVar12 + 0x30) = local_c8;
          FUN_100adac6c(&local_78);
        }
        local_178 = 0x4034b50;
        uStack_174 = (undefined2)local_208;
        uStack_172 = (undefined2)local_210;
        uStack_170 = (undefined2)local_214;
        uStack_16e = (undefined2)local_220;
        uStack_16c = (undefined2)local_228;
        uStack_164 = local_230;
        uStack_160 = local_234;
        uStack_15c = SUB82(local_1c8,0);
        uStack_15a = (undefined2)local_238;
        uStack_1d8 = CONCAT26(uStack_15a,CONCAT24(uStack_15c,local_234));
        local_1e0 = (__DataStorage *)CONCAT44(local_230,uVar22);
        uStack_1e8 = CONCAT26(uStack_16a,CONCAT24(uStack_16c,CONCAT22(uStack_16e,uStack_170)));
        local_1f0 = CONCAT26(uStack_172,CONCAT24(uStack_174,0x4034b50));
        local_130 = 0x4034b50;
        local_11c = local_230;
        local_118 = local_234;
        local_168 = uVar22;
        local_158 = DVar16.unknown;
        puStack_150 = RVar18.unknown;
        local_148 = DVar19.unknown;
        puStack_140 = DVar21.unknown;
        local_138 = puVar15;
        local_12c = uStack_174;
        local_12a = uStack_172;
        local_128 = uStack_170;
        local_126 = uStack_16e;
        local_124 = uStack_16c;
        local_120 = uVar22;
        local_114 = uStack_15c;
        local_112 = uStack_15a;
        local_110 = DVar16.unknown;
        puStack_108 = RVar18.unknown;
        local_100 = DVar19.unknown;
        puStack_f8 = DVar21.unknown;
        local_f0 = puVar15;
        FUN_100adac20(&local_178,auStack_1c0);
        FUN_100aca454(&local_130);
        uVar14 = local_1f0;
        uVar25 = uStack_1e8;
        p_Var7 = local_1e0;
        uVar26 = uStack_1d8;
        goto LAB_100ada478;
      }
      _swift_slowDealloc(DVar9.unknown,0xffffffffffffffff,0xffffffffffffffff);
      param_2 = local_1f0;
    }
  }
  else if (uVar20 >> 0x1e == 2) {
    uVar14 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100adaaa0);
      (*pcVar3)();
    }
    goto joined_r0x000100ada124;
  }
LAB_100ada454:
  FUN_10003bf2c(param_2,param_3);
  DVar16.unknown = (undefined *)0x0;
  RVar18.unknown = (undefined *)0x0;
  DVar19.unknown = (undefined *)0x0;
  DVar21.unknown = (undefined *)0x0;
  puVar15 = (undefined *)0x1;
  uVar14 = 0;
  uVar25 = 0;
  p_Var7 = (__DataStorage *)0x0;
  uVar26 = 0;
LAB_100ada478:
  param_1[1] = uVar25;
  *param_1 = uVar14;
  param_1[3] = uVar26;
  param_1[2] = (ulong)p_Var7;
  param_1[4] = (ulong)DVar16.unknown;
  param_1[5] = (ulong)RVar18.unknown;
  param_1[6] = (ulong)DVar19.unknown;
  param_1[7] = (ulong)DVar21.unknown;
  param_1[8] = (ulong)puVar15;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100adac20 | FUN_100adac20 */

undefined8 FUN_100adac20(undefined8 param_1,undefined8 param_2)

{
  FUN_100ade614(param_2,param_1);
  return param_2;
}



/* Address: 0x100adac5c | FUN_100adac5c */

void FUN_100adac5c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100adac6c | FUN_100adac6c */

undefined8 FUN_100adac6c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff82e0;
  FUN_1000f7830(&DAT_100ff82e0,&DAT_100c94210);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100adacb4 | FUN_100adacb4 */

void FUN_100adacb4(void)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  undefined2 uVar5;
  code *pcVar6;
  undefined2 *puVar7;
  RangeReference *pRVar8;
  __DataStorage *p_Var9;
  undefined6 *puVar10;
  undefined2 *puVar11;
  uint uVar12;
  ulong uVar13;
  undefined2 *unaff_x20;
  long lVar14;
  long lVar15;
  undefined1 local_b0;
  undefined1 uStack_af;
  undefined1 uStack_ae;
  undefined1 uStack_ad;
  undefined1 uStack_ac;
  undefined1 uStack_ab;
  undefined1 uStack_aa;
  undefined1 uStack_a9;
  undefined1 local_a8;
  undefined1 uStack_a7;
  undefined1 uStack_a6;
  undefined1 uStack_a5;
  undefined1 local_a4;
  undefined1 uStack_a3;
  undefined1 local_a2;
  undefined2 *local_a0;
  __DataStorage *local_98;
  int local_8c;
  long local_88;
  long local_80;
  long lStack_78;
  undefined2 local_6c;
  undefined2 local_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined6 uStack_60;
  ushort uStack_5a;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_6a = *unaff_x20;
  uVar5 = unaff_x20[1];
  lVar2 = *(long *)(unaff_x20 + 4);
  lVar3 = *(long *)(unaff_x20 + 8);
  lVar14 = *(long *)(unaff_x20 + 0xc);
  iVar4 = *(int *)(unaff_x20 + 0x10);
  puVar7 = &local_6a;
  puVar10 = &local_68;
  local_8c = iVar4;
  local_88 = lVar14;
  local_80 = lVar3;
  lStack_78 = lVar2;
  local_6c = uVar5;
  FUN_100ad8ff4();
  uVar1 = (uint)((ulong)puVar10 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      local_b0 = SUB81(puVar7,0);
      uStack_af = (undefined1)((ulong)puVar7 >> 8);
      uStack_ae = (undefined1)((ulong)puVar7 >> 0x10);
      uStack_ad = (undefined1)((ulong)puVar7 >> 0x18);
      uStack_ac = (undefined1)((ulong)puVar7 >> 0x20);
      uStack_ab = (undefined1)((ulong)puVar7 >> 0x28);
      uStack_aa = (undefined1)((ulong)puVar7 >> 0x30);
      uStack_a9 = (undefined1)((ulong)puVar7 >> 0x38);
      local_a8 = SUB81(puVar10,0);
      uStack_a7 = (undefined1)((ulong)puVar10 >> 8);
      uStack_a6 = (undefined1)((ulong)puVar10 >> 0x10);
      uStack_a5 = (undefined1)((ulong)puVar10 >> 0x18);
      local_a4 = (undefined1)((ulong)puVar10 >> 0x20);
      uVar13 = (ulong)puVar10 >> 0x30 & 0xff;
      uStack_a3 = (undefined1)((ulong)puVar10 >> 0x28);
      if (uVar13 < 0xd) {
        *(undefined2 *)(&local_b0 + uVar13) = uVar5;
        uVar1 = (int)uVar13 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100adaf94);
          (*pcVar6)();
        }
        local_a2 = (undefined1)uVar1;
        local_68 = CONCAT15(uStack_ab,
                            CONCAT14(uStack_ac,
                                     CONCAT13(uStack_ad,
                                              CONCAT12(uStack_ae,CONCAT11(uStack_af,local_b0)))));
        uStack_5a = (ushort)uVar1 & 0xff;
        uStack_60 = CONCAT24(CONCAT11(uStack_a3,local_a4),
                             CONCAT13(uStack_a5,CONCAT12(uStack_a6,CONCAT11(uStack_a7,local_a8))));
        uStack_62 = (undefined2)(CONCAT17(uStack_a9,CONCAT16(uStack_aa,local_68)) >> 0x30);
        if (lVar2 == 0 && lVar3 == 0) goto LAB_100adaf24;
        goto LAB_100adaefc;
      }
      local_68 = SUB86(puVar7,0);
      uStack_62 = (undefined2)((ulong)puVar7 >> 0x30);
      uStack_60 = (undefined6)
                  (CONCAT17(uStack_a3,
                            CONCAT16(local_a4,CONCAT15(uStack_a5,
                                                       CONCAT14(uStack_a6,
                                                                CONCAT13(uStack_a7,
                                                                         CONCAT12(local_a8,uStack_62
                                                                                 )))))) >> 0x10);
      p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
      local_98 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_68);
      local_a0 = (undefined2 *)(uVar13 << 0x20);
    }
    else {
      p_Var9 = (__DataStorage *)((ulong)puVar10 & 0x3fffffffffffffff);
      lVar15 = (long)puVar7 >> 0x20;
      local_98 = p_Var9;
      if (lVar15 < (int)puVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100adaf90);
        local_a0 = puVar7;
        (*pcVar6)();
      }
      local_a0 = puVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (0x7ffffffc < lVar15) {
        pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar8,0x20,7);
        *(long *)(pRVar8 + 0x10) = (long)(int)puVar7;
        *(long *)(pRVar8 + 0x18) = lVar15;
        local_68 = SUB86(pRVar8,0);
        uStack_62 = (undefined2)((ulong)pRVar8 >> 0x30);
        uStack_60 = SUB86(p_Var9,0);
        uStack_5a = (ushort)((ulong)p_Var9 >> 0x30);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)&local_6c,(LargeSlice)&local_6a);
        puVar7 = (undefined2 *)CONCAT26(uStack_62,local_68);
        p_Var9 = (__DataStorage *)CONCAT26(uStack_5a,uStack_60);
        goto LAB_100adae78;
      }
    }
    Foundation::Data::InlineSlice::append((UnsafeRawBufferPointer)&local_6c,(InlineSlice)&local_6a);
    uVar13 = (ulong)local_98 | 0x4000000000000000;
    puVar7 = local_a0;
LAB_100adaef0:
    local_68 = SUB86(puVar7,0);
    uStack_62 = (undefined2)((ulong)puVar7 >> 0x30);
    uStack_60 = (undefined6)uVar13;
    uStack_5a = (ushort)(uVar13 >> 0x30);
    if (lVar2 == 0 && lVar3 == 0) goto LAB_100adaf24;
  }
  else {
    if (uVar12 == 2) {
      local_98 = (__DataStorage *)((ulong)puVar10 & 0x3fffffffffffffff);
      local_a0 = puVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_6c,(LargeSlice)&local_6a);
      puVar7 = local_a0;
      p_Var9 = local_98;
LAB_100adae78:
      uVar13 = (ulong)p_Var9 | 0x8000000000000000;
      goto LAB_100adaef0;
    }
    puVar7 = &local_6c;
    puVar11 = &local_6a;
    FUN_100ad8ff4();
    local_68 = SUB86(puVar7,0);
    uStack_62 = (undefined2)((ulong)puVar7 >> 0x30);
    uStack_60 = SUB86(puVar11,0);
    uStack_5a = (ushort)((ulong)puVar11 >> 0x30);
    if (lVar2 == 0 && lVar3 == 0) goto LAB_100adaf24;
  }
LAB_100adaefc:
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&lStack_78,(_Representation)((char)&lStack_78 + 8));
  Foundation::Data::_Representation::append
            ((UnsafeRawBufferPointer)&local_80,(_Representation)((char)&local_80 + 8));
LAB_100adaf24:
  if (lVar14 != 0) {
    Foundation::Data::_Representation::append
              ((UnsafeRawBufferPointer)&local_88,(_Representation)((char)&local_88 + 8));
  }
  if (iVar4 != 0) {
    Foundation::Data::_Representation::append
              ((UnsafeRawBufferPointer)&local_8c,(_Representation)((char)&local_8c + 4));
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(CONCAT26(uStack_62,local_68),CONCAT26(uStack_5a,uStack_60));
  }
  return;
}



/* Address: 0x100adaf98 | FUN_100adaf98 */

void FUN_100adaf98(ulong *param_1)

{
  undefined1 auVar1 [8];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  long unaff_x20;
  ulong uVar10;
  ulong uVar11;
  bool bVar12;
  ulong uVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  undefined1 auStack_d8 [40];
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined1 auStack_88 [40];
  
  lVar9 = *(long *)(unaff_x20 + 0x60);
  if (lVar9 == 0) {
    uVar10 = 0;
    uVar11 = 0;
    uVar13 = 0;
    uVar14 = 0;
    uVar15 = 0;
    bVar12 = true;
  }
  else {
    lVar16 = *(long *)(lVar9 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (lVar16 != 0) {
      lVar9 = lVar9 + 0x20;
      do {
        puVar5 = &DAT_100ff8618;
        FUN_100076688(lVar9,auStack_88);
        FUN_100076508(auStack_88,auStack_d8);
        FUN_1000f7830(&DAT_100ff8618,&DAT_100c94980);
        puVar6 = local_b0;
        _swift_dynamicCast(puVar6,auStack_d8,puVar5,&DAT_100f317a8,6);
        uVar15 = local_90;
        uVar4 = uStack_98;
        uVar3 = local_a0;
        uVar2 = uStack_a8;
        auVar1 = local_b0;
        if ((int)puVar6 != 0) {
          puVar5 = puVar7;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar7;
          if (((ulong)puVar5 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_100ae0810(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
          }
          uVar11 = *(ulong *)(puVar8 + 0x10);
          puVar7 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar11) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_100ae0810(puVar7,uVar11 + 1,1,puVar8);
          }
          *(ulong *)(puVar7 + 0x10) = uVar11 + 1;
          *(short *)(puVar7 + uVar11 * 0x28 + 0x20) = auVar1._0_2_;
          *(short *)(puVar7 + uVar11 * 0x28 + 0x22) = auVar1._2_2_;
          *(undefined8 *)(puVar7 + uVar11 * 0x28 + 0x28) = uVar2;
          *(undefined8 *)(puVar7 + uVar11 * 0x28 + 0x30) = uVar3;
          *(undefined8 *)(puVar7 + uVar11 * 0x28 + 0x38) = uVar4;
          *(undefined4 *)(puVar7 + uVar11 * 0x28 + 0x40) = uVar15;
        }
        lVar9 = lVar9 + 0x28;
        lVar16 = lVar16 + -1;
      } while (lVar16 != 0);
    }
    bVar12 = *(long *)(puVar7 + 0x10) == 0;
    if (bVar12) {
      uVar10 = 0;
      uVar11 = 0;
      uVar13 = 0;
      uVar14 = 0;
      uVar15 = 0;
    }
    else {
      uVar10 = (ulong)*(uint *)(puVar7 + 0x20);
      uVar11 = *(ulong *)(puVar7 + 0x28);
      uVar13 = *(ulong *)(puVar7 + 0x30);
      uVar14 = *(ulong *)(puVar7 + 0x38);
      uVar15 = *(undefined4 *)(puVar7 + 0x40);
    }
    _swift_bridgeObjectRelease(puVar7);
  }
  *param_1 = uVar10;
  param_1[1] = uVar11;
  param_1[2] = uVar13;
  param_1[3] = uVar14;
  *(undefined4 *)(param_1 + 4) = uVar15;
  *(bool *)((long)param_1 + 0x24) = bVar12;
  return;
}



/* Address: 0x100adb17c | FUN_100adb17c */

void FUN_100adb17c(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(int *)(unaff_x20 + 0x18) == -1) {
    puVar3 = (undefined *)0x0;
    FUN_100ae091c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar2 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar2 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_100ae091c(puVar2,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar2 + 0x10) = uVar1 + 1;
    puVar2[uVar1 + 0x20] = 0;
  }
  if (*(int *)(unaff_x20 + 0x14) == -1) {
    puVar3 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar3 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      FUN_100ae091c(0,*(long *)(puVar2 + 0x10) + 1,1,puVar2);
      puVar2 = puVar3;
    }
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar3 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar3 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_100ae091c(puVar3,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar3 + 0x10) = uVar1 + 1;
    puVar3[uVar1 + 0x20] = 1;
  }
  return;
}



/* Address: 0x100adb280 | FUN_100adb280 */

undefined * FUN_100adb280(void)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(int *)(unaff_x20 + 0x18) == -1) {
    puVar2 = (undefined *)0x0;
    FUN_100ae091c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar1 = *(ulong *)(puVar2 + 0x10);
    puVar4 = puVar2;
    if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar2 + 0x18));
      FUN_100ae091c(puVar4,uVar1 + 1,1,puVar2);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    puVar4[uVar1 + 0x20] = 0;
  }
  if (*(int *)(unaff_x20 + 0x14) == -1) {
    puVar2 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      FUN_100ae091c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
    }
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar4 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_100ae091c(puVar4,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    puVar4[uVar1 + 0x20] = 1;
  }
  if (*(int *)(unaff_x20 + 0x2c) == -1) {
    puVar2 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      FUN_100ae091c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
    }
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar4 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_100ae091c(puVar4,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    puVar4[uVar1 + 0x20] = 2;
  }
  if (*(short *)(unaff_x20 + 0x22) == -1) {
    puVar2 = puVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar3 = puVar4;
    if (((ulong)puVar2 & 1) == 0) {
      puVar3 = (undefined *)0x0;
      FUN_100ae091c(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
    }
    uVar1 = *(ulong *)(puVar3 + 0x10);
    puVar4 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
      puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_100ae091c(puVar4,uVar1 + 1,1,puVar3);
    }
    *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
    puVar4[uVar1 + 0x20] = 3;
  }
  return puVar4;
}



/* Address: 0x100adb47c | FUN_100adb47c */

void FUN_100adb47c(__DataStorage *param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  __DataStorage *p_Var4;
  undefined8 uVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  int iVar9;
  byte *pbVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_60;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  long local_48;
  
  uVar7 = (uint)(param_5 >> 0x20);
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)param_1 & 0xff;
  lVar8 = *(long *)(param_2 + 0x10);
  pbVar10 = (byte *)(param_2 + 0x20);
  do {
    if (lVar8 == 0) goto LAB_100adb598;
    bVar2 = *pbVar10;
    lVar8 = lVar8 + -1;
    pbVar10 = pbVar10 + 1;
  } while (bVar2 != uVar1);
  lVar12 = *param_3;
  lVar8 = 8;
  if (2 < uVar1) {
    lVar8 = 4;
  }
  if (SCARRY8(lVar12,lVar8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6cc);
    (*pcVar3)();
  }
  uVar1 = uVar7 >> 0x1e;
  iVar6 = (int)param_4;
  iVar9 = (int)((ulong)param_4 >> 0x20);
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar11 = (ulong)(uVar7 >> 0x10) & 0xff;
    }
    else {
      if (SBORROW4(iVar9,iVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6d8);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar9 - iVar6);
    }
joined_r0x000100adb534:
    if (lVar12 + lVar8 <= (long)uVar11) {
      if (uVar1 == 2) {
        lVar8 = *(long *)(param_4 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_5 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adb6f0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6f4);
          (*pcVar3)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(lVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6e0);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar8 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var4);
        if (param_1 == (__DataStorage *)0x0) goto LAB_100adb6f0;
      }
      else {
        if (uVar1 != 1) {
          local_60._0_1_ = (char)param_4;
          local_60._1_1_ = (char)((ulong)param_4 >> 8);
          local_60._2_1_ = (char)((ulong)param_4 >> 0x10);
          local_60._3_1_ = (char)((ulong)param_4 >> 0x18);
          local_60._4_1_ = (char)((ulong)param_4 >> 0x20);
          local_60._5_1_ = (char)((ulong)param_4 >> 0x28);
          local_60._6_1_ = (char)((ulong)param_4 >> 0x30);
          local_60._7_1_ = (char)((ulong)param_4 >> 0x38);
          uStack_58 = (char)param_5;
          uStack_57 = (char)(param_5 >> 8);
          uStack_56 = (char)(param_5 >> 0x10);
          uStack_55 = (char)(param_5 >> 0x18);
          uStack_54 = (char)(param_5 >> 0x20);
          uStack_53 = (char)(param_5 >> 0x28);
          uVar5 = *(undefined8 *)((long)&local_60 + lVar12);
          goto LAB_100adb66c;
        }
        lVar8 = (long)iVar6;
        if (param_4 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6dc);
          (*pcVar3)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_5 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb700);
          (*pcVar3)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(lVar8,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6e4);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar8 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var4);
        if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb590);
          (*pcVar3)();
        }
      }
      uVar5 = *(undefined8 *)(param_1 + lVar12);
LAB_100adb66c:
      _swift_beginAccess(param_3,&local_60,1,0);
      if (SCARRY8(*param_3,8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6d0);
        (*pcVar3)();
      }
      *param_3 = *param_3 + 8;
      goto LAB_100adb698;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar11 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb6d4);
        (*pcVar3)();
      }
      goto joined_r0x000100adb534;
    }
    if (lVar12 + lVar8 < 1) {
      uStack_58 = 0;
      uStack_57 = 0;
      uStack_56 = 0;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      local_60._0_1_ = 0;
      local_60._1_1_ = 0;
      local_60._2_1_ = 0;
      local_60._3_1_ = 0;
      local_60._4_1_ = 0;
      local_60._5_1_ = 0;
      local_60._6_1_ = 0;
      local_60._7_1_ = 0;
      uVar5 = *(undefined8 *)((long)&local_60 + lVar12);
      goto LAB_100adb66c;
    }
  }
LAB_100adb598:
  uVar5 = 0;
LAB_100adb698:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar5);
}



/* Address: 0x100adb700 | FUN_100adb700 */

void FUN_100adb700(__DataStorage *param_1,long param_2,long *param_3,long param_4,ulong param_5)

{
  uint uVar1;
  byte bVar2;
  code *pcVar3;
  __DataStorage *p_Var4;
  int iVar5;
  uint uVar6;
  long lVar7;
  int iVar8;
  byte *pbVar9;
  ulong uVar10;
  undefined4 uVar11;
  long lVar12;
  undefined4 local_60;
  undefined1 uStack_5c;
  undefined1 uStack_5b;
  undefined1 uStack_5a;
  undefined1 uStack_59;
  undefined1 uStack_58;
  undefined1 uStack_57;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined1 uStack_54;
  undefined1 uStack_53;
  long local_48;
  
  uVar6 = (uint)(param_5 >> 0x20);
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = (uint)param_1 & 0xff;
  lVar7 = *(long *)(param_2 + 0x10);
  pbVar9 = (byte *)(param_2 + 0x20);
  do {
    if (lVar7 == 0) goto LAB_100adb81c;
    bVar2 = *pbVar9;
    lVar7 = lVar7 + -1;
    pbVar9 = pbVar9 + 1;
  } while (bVar2 != uVar1);
  lVar12 = *param_3;
  lVar7 = 8;
  if (2 < uVar1) {
    lVar7 = 4;
  }
  if (SCARRY8(lVar12,lVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb950);
    (*pcVar3)();
  }
  uVar1 = uVar6 >> 0x1e;
  iVar5 = (int)param_4;
  iVar8 = (int)((ulong)param_4 >> 0x20);
  if (uVar1 < 2) {
    if (uVar1 == 0) {
      uVar10 = (ulong)(uVar6 >> 0x10) & 0xff;
    }
    else {
      if (SBORROW4(iVar8,iVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb95c);
        (*pcVar3)();
      }
      uVar10 = (ulong)(iVar8 - iVar5);
    }
joined_r0x000100adb7b8:
    if (lVar12 + lVar7 <= (long)uVar10) {
      if (uVar1 == 2) {
        lVar7 = *(long *)(param_4 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_5 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adb974:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb978);
          (*pcVar3)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(lVar7,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb964);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar7 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var4);
        if (param_1 == (__DataStorage *)0x0) goto LAB_100adb974;
      }
      else {
        if (uVar1 != 1) {
          local_60._0_1_ = (char)param_4;
          local_60._1_1_ = (char)((ulong)param_4 >> 8);
          local_60._2_1_ = (char)((ulong)param_4 >> 0x10);
          local_60._3_1_ = (char)((ulong)param_4 >> 0x18);
          uStack_5c = (char)((ulong)param_4 >> 0x20);
          uStack_5b = (char)((ulong)param_4 >> 0x28);
          uStack_5a = (char)((ulong)param_4 >> 0x30);
          uStack_59 = (char)((ulong)param_4 >> 0x38);
          uStack_58 = (char)param_5;
          uStack_57 = (char)(param_5 >> 8);
          uStack_56 = (char)(param_5 >> 0x10);
          uStack_55 = (char)(param_5 >> 0x18);
          uStack_54 = (char)(param_5 >> 0x20);
          uStack_53 = (char)(param_5 >> 0x28);
          uVar11 = *(undefined4 *)((long)&local_60 + lVar12);
          goto LAB_100adb8f0;
        }
        lVar7 = (long)iVar5;
        if (param_4 >> 0x20 < lVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb960);
          (*pcVar3)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (param_1 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_5 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb984);
          (*pcVar3)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_5 & 0x3fffffffffffffff),param_1);
        if (SBORROW8(lVar7,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb968);
          (*pcVar3)();
        }
        param_1 = param_1 + (lVar7 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_5 & 0x3fffffffffffffff),p_Var4);
        if (param_1 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb814);
          (*pcVar3)();
        }
      }
      uVar11 = *(undefined4 *)(param_1 + lVar12);
LAB_100adb8f0:
      _swift_beginAccess(param_3,&local_60,1,0);
      if (SCARRY8(*param_3,4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb954);
        (*pcVar3)();
      }
      *param_3 = *param_3 + 4;
      goto LAB_100adb91c;
    }
  }
  else {
    if (uVar1 == 2) {
      uVar10 = *(long *)(param_4 + 0x18) - *(long *)(param_4 + 0x10);
      if (SBORROW8(*(long *)(param_4 + 0x18),*(long *)(param_4 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100adb958);
        (*pcVar3)();
      }
      goto joined_r0x000100adb7b8;
    }
    if (lVar12 + lVar7 < 1) {
      uStack_58 = 0;
      uStack_57 = 0;
      uStack_56 = 0;
      uStack_55 = 0;
      uStack_54 = 0;
      uStack_53 = 0;
      local_60._0_1_ = 0;
      local_60._1_1_ = 0;
      local_60._2_1_ = 0;
      local_60._3_1_ = 0;
      uStack_5c = 0;
      uStack_5b = 0;
      uStack_5a = 0;
      uStack_59 = 0;
      uVar11 = *(undefined4 *)((long)&local_60 + lVar12);
      goto LAB_100adb8f0;
    }
  }
LAB_100adb81c:
  uVar11 = 0;
LAB_100adb91c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar11);
}



/* Address: 0x100adb984 | FUN_100adb984 */

void FUN_100adb984(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100adb9a0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100adb9a0 | FUN_100adb9a0 */

undefined * FUN_100adb9a0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbaa0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff8610;
    FUN_1000f7830(&DAT_100ff8610,&DAT_100c94978);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100adbaa0 | FUN_100adbaa0 */

void FUN_100adbaa0(ulong *param_1,__DataStorage *param_2,ulong param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  __DataStorage *p_Var4;
  __DataStorage *p_Var5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  undefined1 uVar9;
  long lVar10;
  int iVar11;
  byte *pbVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  ulong uVar16;
  undefined4 uVar17;
  uint uVar18;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar10 = *(long *)(param_4 + 0x10);
  if (lVar10 == 0) {
    uVar14 = 4;
  }
  else {
    lVar7 = 0;
    pbVar12 = (byte *)(param_4 + 0x20);
    do {
      lVar1 = 8;
      if (2 < *pbVar12) {
        lVar1 = 4;
      }
      bVar3 = SCARRY8(lVar7,lVar1);
      lVar7 = lVar7 + lVar1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd3c);
        (*pcVar2)();
      }
      lVar10 = lVar10 + -1;
      pbVar12 = pbVar12 + 1;
    } while (lVar10 != 0);
    uVar14 = lVar7 + 4;
    if (SCARRY8(lVar7,4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbb6c);
      (*pcVar2)();
    }
  }
  uVar18 = (uint)(param_3 >> 0x20);
  uVar6 = uVar18 >> 0x1e;
  iVar15 = (int)param_2;
  if (uVar18 >> 0x1e < 2) {
    if (uVar6 == 0) {
      uVar13 = param_3 >> 0x30 & 0xff;
    }
    else {
      iVar11 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar11,iVar15)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd44);
        (*pcVar2)();
      }
      uVar13 = (ulong)(iVar11 - iVar15);
    }
joined_r0x000100adbb80:
    if (uVar14 == uVar13) {
      local_70 = 4;
      if (uVar6 == 2) {
        lVar10 = *(long *)(param_2 + 0x10);
        p_Var5 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adbd5c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd60);
          (*pcVar2)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar10,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd4c);
          (*pcVar2)();
        }
        p_Var5 = p_Var5 + (lVar10 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
        if (p_Var5 == (__DataStorage *)0x0) goto LAB_100adbd5c;
      }
      else {
        if (uVar6 != 1) {
          uVar18 = (uint)((ulong)param_2 >> 0x10);
          goto LAB_100adbc60;
        }
        lVar10 = (long)iVar15;
        if ((long)param_2 >> 0x20 < lVar10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd48);
          (*pcVar2)();
        }
        p_Var5 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd6c);
          (*pcVar2)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar10,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd50);
          (*pcVar2)();
        }
        p_Var5 = p_Var5 + (lVar10 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbbdc);
          (*pcVar2)();
        }
      }
      uVar18 = (uint)*(ushort *)(p_Var5 + 2);
LAB_100adbc60:
      uVar14 = 0;
      FUN_100adb47c(0,param_4,&local_70,param_2,param_3);
      uVar13 = 1;
      FUN_100adb47c(1,param_4,&local_70,param_2,param_3);
      uVar16 = 2;
      FUN_100adb47c(2,param_4,&local_70,param_2,param_3);
      uVar17 = 3;
      FUN_100adb700(3,param_4,&local_70,param_2,param_3);
      _swift_bridgeObjectRelease(param_4);
      FUN_10003bf2c(param_2,param_3);
      uVar9 = 0;
      uVar8 = (ulong)(uVar18 << 0x10) | 1;
      goto LAB_100adbcf0;
    }
  }
  else {
    if (uVar6 == 2) {
      uVar13 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbd40);
        (*pcVar2)();
      }
      goto joined_r0x000100adbb80;
    }
    if (uVar14 == 0) {
      uVar18 = 0;
      local_70 = 4;
      goto LAB_100adbc60;
    }
  }
  _swift_bridgeObjectRelease(param_4);
  FUN_10003bf2c(param_2,param_3);
  uVar8 = 0;
  uVar14 = 0;
  uVar13 = 0;
  uVar16 = 0;
  uVar17 = 0;
  uVar9 = 1;
LAB_100adbcf0:
  *param_1 = uVar8;
  param_1[1] = uVar14;
  param_1[2] = uVar13;
  param_1[3] = uVar16;
  *(undefined4 *)(param_1 + 4) = uVar17;
  *(undefined1 *)((long)param_1 + 0x24) = uVar9;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100adbd6c | FUN_100adbd6c */

void FUN_100adbd6c(undefined8 *param_1,__DataStorage *param_2,ulong param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  __DataStorage *p_Var4;
  __DataStorage *p_Var5;
  Data DVar6;
  Range<__int64> in;
  Data DVar7;
  long lVar8;
  ulong uVar9;
  int iVar10;
  short sVar11;
  long lVar12;
  ulong uVar13;
  int iVar14;
  uint uVar15;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined2 local_a0;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 uStack_99;
  undefined1 uStack_98;
  undefined1 uStack_97;
  undefined1 uStack_96;
  undefined1 uStack_95;
  undefined1 uStack_94;
  undefined1 uStack_93;
  undefined2 uStack_92;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined1 local_7c;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_b8 = 0;
  local_c0 = 0;
  uVar1 = (uint)(param_3 >> 0x20);
  iVar14 = (int)param_2;
  if (uVar1 >> 0x1e < 2) {
    if (uVar1 >> 0x1e == 0) {
      if ((param_3 & 0xff000000000000) != 0) {
        uVar13 = param_3 >> 0x30 & 0xff;
        goto LAB_100adbe24;
      }
    }
    else if ((long)iVar14 != (long)param_2 >> 0x20) goto LAB_100adbde0;
  }
  else if ((uVar1 >> 0x1e == 2) && (*(long *)(param_2 + 0x10) != *(long *)(param_2 + 0x18))) {
LAB_100adbde0:
    if (param_3 >> 0x3e == 2) {
      uVar13 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adbdf8);
        (*pcVar2)();
      }
    }
    else {
      iVar10 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar10,iVar14)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc184);
        (*pcVar2)();
      }
      uVar13 = (ulong)(iVar10 - iVar14);
    }
LAB_100adbe24:
    if (SBORROW8(uVar13,4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc17c);
      (*pcVar2)();
    }
    lVar8 = (long)iVar14;
    p_Var5 = param_2;
    DVar7.unknown = (undefined *)0x0;
    do {
      in.unknown = DVar7.unknown;
      if ((long)(uVar13 - 4) <= (long)in.unknown) {
LAB_100adc0f4:
        local_80 = 0;
        local_7c = 1;
        uStack_90 = 0;
        uStack_88 = 0;
        goto LAB_100adc104;
      }
      uVar15 = uVar1 >> 0x1e;
      if (uVar15 < 2) {
        if (uVar15 == 0) {
          local_a0._0_1_ = SUB81(param_2,0);
          local_a0._1_1_ = (undefined1)((ulong)param_2 >> 8);
          uStack_9e = (undefined1)((ulong)param_2 >> 0x10);
          uStack_9d = (undefined1)((ulong)param_2 >> 0x18);
          uStack_9c = (undefined1)((ulong)param_2 >> 0x20);
          uStack_9b = (undefined1)((ulong)param_2 >> 0x28);
          uStack_9a = (undefined1)((ulong)param_2 >> 0x30);
          uStack_99 = (undefined1)((ulong)param_2 >> 0x38);
          uStack_98 = (undefined1)param_3;
          uStack_97 = (undefined1)(param_3 >> 8);
          uStack_96 = (undefined1)(param_3 >> 0x10);
          uStack_95 = (undefined1)(param_3 >> 0x18);
          uStack_94 = (undefined1)(param_3 >> 0x20);
          uStack_93 = (undefined1)(param_3 >> 0x28);
          if (SCARRY8((long)in.unknown,2)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc160);
            (*pcVar2)();
          }
          sVar11 = *(short *)((long)&local_a0 + (long)in.unknown);
LAB_100adc07c:
          uVar9 = (ulong)*(ushort *)(in.unknown + -0x9e + (long)&stack0x00000000);
        }
        else {
          if ((long)param_2 >> 0x20 < lVar8) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc15c);
            (*pcVar2)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adc198:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc19c);
            (*pcVar2)();
          }
          p_Var3 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar8,(long)p_Var3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc168);
            (*pcVar2)();
          }
          p_Var4 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
          if (p_Var5 + (lVar8 - (long)p_Var3) == (__DataStorage *)0x0) goto LAB_100adc198;
          if (SCARRY8((long)in.unknown,2)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc170);
            (*pcVar2)();
          }
          sVar11 = *(short *)(p_Var5 + (lVar8 - (long)p_Var3) + (long)in.unknown);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
          if (p_Var4 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adc1b0:
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc1b4);
            (*pcVar2)();
          }
          p_Var3 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
          if (SBORROW8(lVar8,(long)p_Var3)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc178);
            (*pcVar2)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
          if (p_Var4 + (lVar8 - (long)p_Var3) == (__DataStorage *)0x0) goto LAB_100adc1b0;
          uVar9 = (ulong)*(ushort *)(p_Var4 + (lVar8 - (long)p_Var3) + (long)(in.unknown + 2));
        }
      }
      else {
        if (uVar15 != 2) {
          uStack_98 = 0;
          uStack_97 = 0;
          uStack_96 = 0;
          uStack_95 = 0;
          uStack_94 = 0;
          uStack_93 = 0;
          local_a0._0_1_ = 0;
          local_a0._1_1_ = 0;
          uStack_9e = 0;
          uStack_9d = 0;
          uStack_9c = 0;
          uStack_9b = 0;
          uStack_9a = 0;
          uStack_99 = 0;
          if (SCARRY8((long)in.unknown,2)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc158);
            (*pcVar2)();
          }
          sVar11 = *(short *)((long)&local_a0 + (long)in.unknown);
          uStack_98 = 0;
          uStack_97 = 0;
          uStack_96 = 0;
          uStack_95 = 0;
          uStack_94 = 0;
          uStack_93 = 0;
          local_a0._0_1_ = 0;
          local_a0._1_1_ = 0;
          uStack_9e = 0;
          uStack_9d = 0;
          uStack_9c = 0;
          uStack_9b = 0;
          uStack_9a = 0;
          uStack_99 = 0;
          goto LAB_100adc07c;
        }
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adc18c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc190);
          (*pcVar2)();
        }
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,(long)p_Var3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc164);
          (*pcVar2)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
        if (p_Var5 + (lVar12 - (long)p_Var3) == (__DataStorage *)0x0) goto LAB_100adc18c;
        if (SCARRY8((long)in.unknown,2)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc16c);
          (*pcVar2)();
        }
        sVar11 = *(short *)(p_Var5 + (lVar12 - (long)p_Var3) + (long)in.unknown);
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
        if (p_Var4 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100adc1a4:
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc1a8);
          (*pcVar2)();
        }
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var4);
        if (SBORROW8(lVar12,(long)p_Var3)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc174);
          (*pcVar2)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var3);
        if (p_Var4 + (lVar12 - (long)p_Var3) == (__DataStorage *)0x0) goto LAB_100adc1a4;
        uVar9 = (ulong)*(ushort *)(p_Var4 + (lVar12 - (long)p_Var3) + (long)(in.unknown + 2));
      }
      if (SCARRY8((long)in.unknown,4)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc150);
        (*pcVar2)();
      }
      DVar7.unknown = in.unknown + 4 + uVar9;
      if (SCARRY8((long)(in.unknown + 4),uVar9)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc154);
        (*pcVar2)();
      }
      if ((long)uVar13 < (long)DVar7.unknown) goto LAB_100adc0f4;
    } while (sVar11 != 1);
    if ((long)DVar7.unknown < (long)in.unknown) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc180);
      (*pcVar2)();
    }
    DVar6 = Foundation::Data::subdata(in,DVar7);
    _swift_bridgeObjectRetain(param_4);
    FUN_100adbaa0(&local_a0,DVar6.unknown,DVar7.unknown,param_4);
    uStack_b8 = CONCAT26(uStack_92,
                         CONCAT15(uStack_93,
                                  CONCAT14(uStack_94,
                                           CONCAT13(uStack_95,
                                                    CONCAT12(uStack_96,CONCAT11(uStack_97,uStack_98)
                                                            )))));
    local_c0 = CONCAT17(uStack_99,
                        CONCAT16(uStack_9a,
                                 CONCAT15(uStack_9b,
                                          CONCAT14(uStack_9c,
                                                   CONCAT13(uStack_9d,
                                                            CONCAT12(uStack_9e,
                                                                     CONCAT11(local_a0._1_1_,
                                                                              (undefined1)local_a0))
                                                           )))));
    goto LAB_100adc104;
  }
  local_80 = 0;
  local_7c = 1;
  uStack_90 = 0;
  uStack_88 = 0;
LAB_100adc104:
  param_1[1] = uStack_b8;
  *param_1 = local_c0;
  param_1[3] = uStack_88;
  param_1[2] = uStack_90;
  *(undefined4 *)(param_1 + 4) = local_80;
  *(undefined1 *)((long)param_1 + 0x24) = local_7c;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100adc1b8 | FUN_100adc1b8 */

void FUN_100adc1b8(ulong *param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  undefined1 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  int iVar11;
  ulong uVar12;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(char *)(param_2 + 0x24) != '\x01') {
    uVar9 = *(ulong *)(param_2 + 8);
    uVar10 = *(ulong *)(param_2 + 0x10);
    iVar11 = *(int *)(param_2 + 0x20);
    uVar12 = 0;
    if (0xfffffffe < param_3) {
      FUN_100adb984(0,1,1);
      uVar12 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar12) {
        FUN_100adb984(1 < *(ulong *)(puVar1 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar1 + uVar12 * 8 + 0x20) = param_3;
      uVar12 = param_3;
    }
    if (uVar9 != 0) {
      puVar3 = puVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_100adb984(0,*(long *)(puVar1 + 0x10) + 1,1);
      }
      uVar5 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
        FUN_100adb984(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar5 + 1;
      *(ulong *)(puVar1 + uVar5 * 8 + 0x20) = uVar9;
    }
    if (uVar10 == 0) {
      lVar8 = *(long *)(puVar1 + 0x10);
      _swift_release(puVar1);
      if (lVar8 != 0) goto LAB_100adc2f4;
      uVar4 = 0;
    }
    else {
      puVar3 = puVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar3 & 1) == 0) {
        FUN_100adb984(0,*(long *)(puVar1 + 0x10) + 1,1);
      }
      uVar5 = *(ulong *)(puVar1 + 0x10);
      lVar8 = uVar5 + 1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
        FUN_100adb984(1 < *(ulong *)(puVar1 + 0x18),lVar8,1);
      }
      *(long *)(puVar1 + 0x10) = lVar8;
      *(ulong *)(puVar1 + uVar5 * 8 + 0x20) = uVar10;
      _swift_release(puVar1);
LAB_100adc2f4:
      if (lVar8 - 0x2000U < 0xffffffffffffe001) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100adc37c);
        (*pcVar2)();
      }
      uVar4 = (int)lVar8 << 3;
    }
    uVar7 = 0;
    if (iVar11 != 0) {
      uVar7 = 4;
    }
    if ((uVar4 & 0xffff) != 0 || uVar7 != 0) {
      uVar6 = 0;
      uVar5 = (ulong)((uVar4 | uVar7) << 0x10) | 1;
      goto LAB_100adc344;
    }
  }
  uVar5 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar12 = 0;
  iVar11 = 0;
  uVar6 = 1;
LAB_100adc344:
  *param_1 = uVar5;
  param_1[1] = uVar9;
  param_1[2] = uVar10;
  param_1[3] = uVar12;
  *(int *)(param_1 + 4) = iVar11;
  *(undefined1 *)((long)param_1 + 0x24) = uVar6;
  return;
}



/* Address: 0x100adc3e0 | FUN_100adc3e0 */

undefined1  [16] FUN_100adc3e0(void)

{
  return ZEXT816(0x100f316a0);
}


