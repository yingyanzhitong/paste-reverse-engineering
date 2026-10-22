/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100ab8ea0 | FUN_100ab8ea0 */

undefined8 FUN_100ab8ea0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ab8ef0 | FUN_100ab8ef0 */

undefined8 FUN_100ab8ef0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100ab8f38 | FUN_100ab8f38 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100ab8f38(undefined8 *param_1,undefined1 *param_2,uint param_3,ID param_4,long param_5,
                  FILE *param_6)

{
  bool bVar1;
  undefined1 *puVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  Deallocator DVar6;
  int iVar7;
  undefined7 extraout_var;
  undefined1 *puVar8;
  size_t sVar9;
  code *pcVar10;
  __DataStorage *p_Var11;
  ID IVar12;
  __DataStorage *buf;
  uLong uVar13;
  __DataStorage *p_Var14;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  ulong *puVar15;
  undefined1 uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  uint uVar19;
  FILE *pFVar20;
  long unaff_x21;
  ulong *puVar21;
  ulong uVar22;
  long lVar23;
  int iVar24;
  undefined8 uVar25;
  undefined1 auStack_1d0 [8];
  ID local_1c8;
  int local_1bc;
  undefined1 *local_1b8;
  undefined1 *local_1b0;
  uint local_1a4;
  uLong local_1a0;
  uint local_194;
  long local_190;
  FILE *local_188;
  long local_180;
  ulong local_178;
  code *local_170;
  undefined1 *local_168;
  long local_160;
  ulong *local_158;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 auStack_130 [36];
  char local_10c;
  undefined1 auStack_108 [8];
  undefined1 *local_100;
  char local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_1a4 = param_3;
  local_188 = param_6;
  local_180 = param_5;
  DVar6 = Foundation::Data::Deallocator::typeMetadataAccessor();
  local_158 = (ulong *)CONCAT71(extraout_var,DVar6.value);
  uVar22 = local_158[-1];
  uVar17 = *(long *)(uVar22 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_170 = (code *)(auStack_1d0 + -uVar17 + -uVar17);
  uStack_98 = param_1[9];
  local_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  local_80 = param_1[0xc];
  uStack_d8 = param_1[1];
  uVar25 = *param_1;
  local_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  local_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  local_e0._6_1_ = (byte)((ulong)uVar25 >> 0x30);
  bVar1 = local_e0._6_1_ < 0x2d;
  local_e0 = uVar25;
  if ((((bVar1) && (FUN_100adaf98(auStack_130), local_10c == '\x01')) ||
      (FUN_100adaf98(auStack_108), local_e4 == '\x01')) || (local_100 == (undefined1 *)0x0)) {
    local_100 = (undefined1 *)(local_c8 & 0xffffffff);
    if ((int)local_c8 == 0) {
      if (param_4 == 0) {
        iVar7 = _ferror(local_188);
        puVar18 = (undefined1 *)CONCAT44(extraout_var_00,iVar7);
        if (0 < iVar7) {
LAB_100ab96dc:
          FUN_100abcb78();
          _swift_allocError(&DAT_100f31588,puVar18,0,0);
          uVar16 = 1;
LAB_100ab9700:
          *puVar18 = uVar16;
LAB_100ab9704:
          _swift_willThrow();
          uVar13 = 0;
          goto LAB_100ab9738;
        }
      }
      else {
        puVar18 = (undefined1 *)objc_stub::isCancelled(param_4);
        if (((ulong)puVar18 & 1) != 0) {
          FUN_100ab8c74();
          _swift_allocError(&DAT_100f31130,puVar18,0,0);
          uVar16 = 5;
          goto LAB_100ab9700;
        }
        iVar7 = _ferror(local_188);
        puVar18 = (undefined1 *)CONCAT44(extraout_var_01,iVar7);
        if (0 < iVar7) goto LAB_100ab96dc;
        IVar12 = objc_stub::completedUnitCount(param_4);
        objc_stub::setCompletedUnitCount_(param_4,IVar12);
      }
      local_1a0 = 0;
      uVar13 = local_1a0;
      goto LAB_100ab9738;
    }
  }
  else if ((long)local_100 < 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab903c);
    (*pcVar5)();
  }
  pcVar5 = local_170;
  local_1a0 = 0;
  puVar18 = (undefined1 *)0x0;
  puVar8 = local_100;
  if ((long)param_2 <= (long)local_100) {
    puVar8 = param_2;
  }
  local_190 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_194 = *(uint *)
               PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
  ;
  local_1bc = *(int *)
               PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
  ;
  puVar21 = local_158;
  local_1c8 = param_4;
  local_1b8 = auStack_1d0 + -uVar17;
  local_1b0 = local_100;
  local_178 = uVar22;
  do {
    if (SBORROW8((long)local_1b0,(long)puVar18)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9778);
      (*pcVar5)();
    }
    puVar2 = local_1b0 + -(long)puVar18;
    if ((long)puVar8 <= (long)(local_1b0 + -(long)puVar18)) {
      puVar2 = puVar8;
    }
    pFVar20 = *(FILE **)(local_180 + local_190);
    puVar8 = puVar2;
    local_168 = puVar18;
    _swift_slowAlloc(puVar2,0xffffffffffffffff);
    sVar9 = _fread(puVar8,1,(size_t)puVar2,pFVar20);
    iVar7 = _ferror(pFVar20);
    if (0 < iVar7) {
      _swift_slowDealloc(puVar8,0xffffffffffffffff,0xffffffffffffffff);
      FUN_100abcb78();
      _swift_allocError(&DAT_100f31588,puVar8,0,0);
      *puVar8 = 0;
      goto LAB_100ab9704;
    }
    local_160 = unaff_x21;
    *(code **)pcVar5 = FUN_10094a398;
    *(undefined8 *)(pcVar5 + 8) = 0;
    uVar17 = (ulong)local_194;
    pcVar10 = pcVar5;
    (**(code **)(uVar22 + 0x68))(pcVar5,uVar17,puVar21);
    Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar10);
    if (sVar9 == 0) {
      uVar22 = uVar17;
      Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar10);
      (*pcVar10)(puVar8,0);
      _swift_release(uVar17);
      _swift_release(uVar22);
      p_Var11 = (__DataStorage *)0x0;
      sVar9 = 0xc000000000000000;
      pcVar10 = pcVar5;
    }
    else {
      p_Var11 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var11,*(undefined4 *)(p_Var11 + 0x30),*(undefined2 *)(p_Var11 + 0x34));
      _swift_retain(uVar17);
      p_Var11 = Foundation::__DataStorage::_init(p_Var11,(__int64)puVar8,SUB81(sVar9,0),0);
      puVar18 = local_1b8;
      (**(code **)(uVar22 + 0x10))(local_1b8,pcVar5,puVar21);
      puVar8 = puVar18;
      puVar15 = puVar21;
      (**(code **)(uVar22 + 0x58))();
      if ((int)puVar8 == local_1bc) {
        pcVar10 = (code *)&local_150;
        Foundation::__DataStorage::modify__capacity(p_Var11,(__int64)pcVar10);
        *puVar15 = *puVar15 | 0x8000000000000000;
        (*pcVar10)(&local_150,0);
      }
      else {
        (**(code **)(uVar22 + 8))(puVar18,puVar21);
      }
      FUN_100abcce8();
      _swift_release(uVar17);
      pcVar10 = local_170;
    }
    puVar21 = local_158;
    uVar22 = local_178;
    (**(code **)(local_178 + 8))(pcVar10,local_158);
    uVar4 = (uint)(sVar9 >> 0x20);
    uVar19 = uVar4 >> 0x1e;
    iVar24 = (int)p_Var11;
    iVar7 = (int)((ulong)p_Var11 >> 0x20);
    if (param_4 != 0) {
      puVar18 = (undefined1 *)objc_stub::isCancelled(param_4);
      if ((int)puVar18 == 0) {
        FUN_100abe2bc(p_Var11,sVar9,local_188);
        if (local_160 == 0) {
          if (uVar4 >> 0x1e < 2) {
            if (uVar19 == 0) {
              uVar17 = sVar9 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar7,iVar24)) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9784);
                (*pcVar5)();
              }
              uVar17 = (ulong)(iVar7 - iVar24);
            }
          }
          else if (uVar19 == 2) {
            uVar17 = *(long *)(p_Var11 + 0x18) - *(long *)(p_Var11 + 0x10);
            if (SBORROW8(*(long *)(p_Var11 + 0x18),*(long *)(p_Var11 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9788);
              (*pcVar5)();
            }
          }
          else {
            uVar17 = 0;
          }
          IVar12 = objc_stub::completedUnitCount(param_4);
          if (SCARRY8(IVar12,uVar17)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9780);
            (*pcVar5)();
          }
          buf = (__DataStorage *)objc_stub::setCompletedUnitCount_(param_4,IVar12 + uVar17);
          puVar21 = local_158;
          goto LAB_100ab935c;
        }
      }
      else {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar18,0,0);
        *puVar18 = 5;
        _swift_willThrow();
      }
LAB_100ab969c:
      FUN_10003bf2c(p_Var11,sVar9);
      uVar13 = 0;
      break;
    }
    buf = p_Var11;
    FUN_100abe2bc(p_Var11,sVar9,local_188);
    if (local_160 != 0) goto LAB_100ab969c;
LAB_100ab935c:
    if ((local_1a4 & 1) == 0) {
      if (uVar19 < 2) {
        if (uVar19 == 0) {
          local_150 = SUB81(p_Var11,0);
          uStack_14f = (undefined1)((ulong)p_Var11 >> 8);
          uStack_14e = (undefined1)((ulong)p_Var11 >> 0x10);
          uStack_14d = (undefined1)((ulong)p_Var11 >> 0x18);
          uStack_14c = (undefined1)((ulong)p_Var11 >> 0x20);
          uStack_14b = (undefined1)((ulong)p_Var11 >> 0x28);
          uStack_14a = (undefined1)((ulong)p_Var11 >> 0x30);
          uStack_149 = (undefined1)((ulong)p_Var11 >> 0x38);
          uStack_148 = (undefined1)sVar9;
          uStack_147 = (undefined1)(sVar9 >> 8);
          uStack_146 = (undefined1)(sVar9 >> 0x10);
          uStack_145 = (undefined1)(sVar9 >> 0x18);
          uStack_144 = (undefined1)(sVar9 >> 0x20);
          uStack_143 = (undefined1)(sVar9 >> 0x28);
          uVar13 = _crc32(local_1a0,&local_150,(ushort)(sVar9 >> 0x30) & 0xff);
          FUN_10003bf2c(p_Var11,sVar9);
          if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9790);
            local_1a0 = uVar13;
            (*pcVar5)();
          }
        }
        else {
          lVar23 = (long)iVar24;
          if ((long)p_Var11 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab978c);
            (*pcVar5)();
          }
          Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar9 & 0x3fffffffffffffff),buf);
          p_Var14 = (__DataStorage *)0x0;
          if (buf != (__DataStorage *)0x0) {
            p_Var14 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar9 & 0x3fffffffffffffff),buf);
            if (SBORROW8(lVar23,(long)p_Var14)) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97b8);
              (*pcVar5)();
            }
            buf = buf + (lVar23 - (long)p_Var14);
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(sVar9 & 0x3fffffffffffffff),p_Var14);
          uVar22 = local_178;
          param_4 = local_1c8;
          if (SBORROW4(iVar7,iVar24)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab979c);
            (*pcVar5)();
          }
          if (iVar7 - iVar24 < 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97a4);
            (*pcVar5)();
          }
          uVar13 = _crc32(local_1a0,(Bytef *)buf,iVar7 - iVar24);
          FUN_10003bf2c(p_Var11,sVar9);
          puVar21 = local_158;
          if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97a8);
            (*pcVar5)();
          }
        }
      }
      else if (uVar19 == 2) {
        lVar23 = *(long *)(p_Var11 + 0x10);
        lVar3 = *(long *)(p_Var11 + 0x18);
        Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar9 & 0x3fffffffffffffff),buf);
        p_Var14 = (__DataStorage *)0x0;
        if (buf != (__DataStorage *)0x0) {
          p_Var14 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar9 & 0x3fffffffffffffff),buf);
          if (SBORROW8(lVar23,(long)p_Var14)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97b4);
            (*pcVar5)();
          }
          buf = buf + (lVar23 - (long)p_Var14);
        }
        if (SBORROW8(lVar3,lVar23)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9794);
          (*pcVar5)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(sVar9 & 0x3fffffffffffffff),p_Var14);
        uVar22 = *(long *)(p_Var11 + 0x18) - *(long *)(p_Var11 + 0x10);
        if (SBORROW8(*(long *)(p_Var11 + 0x18),*(long *)(p_Var11 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab9798);
          (*pcVar5)();
        }
        if ((long)uVar22 < 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97a0);
          (*pcVar5)();
        }
        if (uVar22 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97ac);
          (*pcVar5)();
        }
        uVar13 = _crc32(local_1a0,(Bytef *)buf,(uInt)uVar22);
        FUN_10003bf2c(p_Var11,sVar9);
        puVar21 = local_158;
        param_4 = local_1c8;
        uVar22 = local_178;
        if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab97b0);
          (*pcVar5)();
        }
      }
      else {
        uStack_148 = 0;
        uStack_147 = 0;
        uStack_146 = 0;
        uStack_145 = 0;
        uStack_144 = 0;
        uStack_143 = 0;
        local_150 = (code)0x0;
        uStack_14f = 0;
        uStack_14e = 0;
        uStack_14d = 0;
        uStack_14c = 0;
        uStack_14b = 0;
        uStack_14a = 0;
        uStack_149 = 0;
        uVar13 = _crc32(local_1a0,&local_150,0);
        FUN_10003bf2c(p_Var11,sVar9);
        if (uVar13 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab95fc);
          local_1a0 = uVar13;
          (*pcVar5)();
        }
      }
    }
    else {
      FUN_10003bf2c(p_Var11,sVar9);
      uVar13 = local_1a0;
    }
    local_1a0 = uVar13;
    puVar18 = local_168 + (long)puVar2;
    if (SCARRY8((long)local_168,(long)puVar2)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100ab977c);
      (*pcVar5)();
    }
    uVar13 = local_1a0;
    unaff_x21 = local_160;
    puVar8 = puVar2;
  } while ((long)puVar18 < (long)local_1b0);
LAB_100ab9738:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar13);
  }
  return;
}



/* Address: 0x100ab97bc | FUN_100ab97bc */

/* WARNING: Type propagation algorithm not settling */

void FUN_100ab97bc(undefined8 *param_1,undefined1 *param_2,uint param_3,ID param_4,code *param_5,
                  undefined8 param_6)

{
  undefined1 *puVar1;
  long lVar2;
  uint uVar3;
  bool bVar4;
  Deallocator DVar5;
  int iVar6;
  undefined7 extraout_var;
  size_t sVar8;
  code *pcVar9;
  __DataStorage *p_Var10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  ID IVar13;
  __DataStorage *buf;
  uLong uVar14;
  __DataStorage *p_Var15;
  ulong *puVar16;
  ulong uVar17;
  ulong uVar18;
  undefined1 *puVar19;
  long unaff_x20;
  FILE *pFVar20;
  long unaff_x21;
  uint uVar21;
  code *pcVar22;
  ulong uVar23;
  long lVar24;
  int iVar25;
  undefined8 uVar26;
  undefined1 auStack_1d0 [8];
  undefined1 auStack_1c8 [4];
  int local_1c4;
  undefined1 *local_1c0;
  ulong local_1b8;
  ID local_1b0;
  undefined1 *local_1a8;
  uint local_19c;
  uLong local_198;
  uint local_18c;
  long local_188;
  undefined8 local_180;
  code *local_178;
  undefined1 local_150;
  undefined1 uStack_14f;
  undefined1 uStack_14e;
  undefined1 uStack_14d;
  undefined1 uStack_14c;
  undefined1 uStack_14b;
  undefined1 uStack_14a;
  undefined1 uStack_149;
  undefined1 uStack_148;
  undefined1 uStack_147;
  undefined1 uStack_146;
  undefined1 uStack_145;
  undefined1 uStack_144;
  undefined1 uStack_143;
  undefined1 auStack_130 [36];
  char local_10c;
  undefined1 auStack_108 [8];
  undefined1 *local_100;
  char local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_70;
  ulong *puVar7;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_19c = param_3;
  local_180 = param_6;
  local_178 = param_5;
  DVar5 = Foundation::Data::Deallocator::typeMetadataAccessor();
  puVar7 = (ulong *)CONCAT71(extraout_var,DVar5.value);
  uVar23 = puVar7[-1];
  uVar18 = *(long *)(uVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
  pcVar22 = (code *)(auStack_1d0 + -uVar18 + -uVar18);
  uStack_98 = param_1[9];
  local_a0 = param_1[8];
  uStack_88 = param_1[0xb];
  uStack_90 = param_1[10];
  local_80 = param_1[0xc];
  uStack_d8 = param_1[1];
  uVar26 = *param_1;
  local_c8 = param_1[3];
  uStack_d0 = param_1[2];
  uStack_b8 = param_1[5];
  local_c0 = param_1[4];
  uStack_a8 = param_1[7];
  uStack_b0 = param_1[6];
  local_e0._6_1_ = (byte)((ulong)uVar26 >> 0x30);
  bVar4 = local_e0._6_1_ < 0x2d;
  local_e0 = uVar26;
  if ((((bVar4) && (FUN_100adaf98(auStack_130), local_10c == '\x01')) ||
      (FUN_100adaf98(auStack_108), local_e4 == '\x01')) || (local_100 == (undefined1 *)0x0)) {
    local_100 = (undefined1 *)(local_c8 & 0xffffffff);
    if ((int)local_c8 == 0) {
      if (param_4 == 0) {
        (*local_178)(0,0xc000000000000000);
        if (unaff_x21 != 0) {
LAB_100ab9f48:
          uVar14 = 0;
          goto LAB_100ab9fc8;
        }
      }
      else {
        puVar19 = (undefined1 *)objc_stub::isCancelled(param_4);
        if ((int)puVar19 != 0) {
          FUN_100ab8c74();
          _swift_allocError(&DAT_100f31130,puVar19,0,0);
          *puVar19 = 5;
LAB_100ab9efc:
          _swift_willThrow();
          uVar14 = 0;
          goto LAB_100ab9fc8;
        }
        (*local_178)(0,0xc000000000000000);
        if (unaff_x21 != 0) goto LAB_100ab9f48;
        IVar13 = objc_stub::completedUnitCount(param_4);
        objc_stub::setCompletedUnitCount_(param_4,IVar13);
      }
      local_198 = 0;
      uVar14 = local_198;
      goto LAB_100ab9fc8;
    }
  }
  else if ((long)local_100 < 0) {
                    /* WARNING: Does not return */
    pcVar22 = (code *)SoftwareBreakpoint(1,0x100ab98bc);
    (*pcVar22)();
  }
  local_198 = 0;
  puVar19 = (undefined1 *)0x0;
  puVar12 = local_100;
  if ((long)param_2 <= (long)local_100) {
    puVar12 = param_2;
  }
  local_188 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_18c = *(uint *)
               PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
  ;
  local_1c4 = *(int *)
               PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
  ;
  local_1c0 = auStack_1d0 + -uVar18;
  local_1b8 = uVar23;
  local_1b0 = param_4;
  local_1a8 = local_100;
  do {
    if (SBORROW8((long)local_1a8,(long)puVar19)) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba008);
      (*pcVar22)();
    }
    puVar1 = local_1a8 + -(long)puVar19;
    if ((long)puVar12 <= (long)(local_1a8 + -(long)puVar19)) {
      puVar1 = puVar12;
    }
    pFVar20 = *(FILE **)(unaff_x20 + local_188);
    puVar12 = puVar1;
    _swift_slowAlloc(puVar1,0xffffffffffffffff);
    sVar8 = _fread(puVar12,1,(size_t)puVar1,pFVar20);
    iVar6 = _ferror(pFVar20);
    if (0 < iVar6) {
      _swift_slowDealloc(puVar12,0xffffffffffffffff,0xffffffffffffffff);
      FUN_100abcb78();
      _swift_allocError(&DAT_100f31588,puVar12,0,0);
      *puVar12 = 0;
      goto LAB_100ab9efc;
    }
    *(code **)pcVar22 = FUN_10094a398;
    *(undefined8 *)(pcVar22 + 8) = 0;
    uVar18 = (ulong)local_18c;
    pcVar9 = pcVar22;
    (**(code **)(uVar23 + 0x68))(pcVar22,uVar18,puVar7);
    Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar9);
    if (sVar8 == 0) {
      uVar17 = uVar18;
      Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar9);
      (*pcVar9)(puVar12,0);
      _swift_release(uVar18);
      _swift_release(uVar17);
      p_Var10 = (__DataStorage *)0x0;
      sVar8 = 0xc000000000000000;
    }
    else {
      p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
      _swift_retain(uVar18);
      p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)puVar12,SUB81(sVar8,0),0);
      puVar12 = local_1c0;
      (**(code **)(uVar23 + 0x10))(local_1c0,pcVar22,puVar7);
      puVar11 = puVar12;
      puVar16 = puVar7;
      (**(code **)(uVar23 + 0x58))();
      if ((int)puVar11 == local_1c4) {
        pcVar9 = (code *)&local_150;
        Foundation::__DataStorage::modify__capacity(p_Var10,(__int64)pcVar9);
        *puVar16 = *puVar16 | 0x8000000000000000;
        (*pcVar9)(&local_150,0);
      }
      else {
        (**(code **)(uVar23 + 8))(puVar12,puVar7);
      }
      FUN_100abcce8();
      _swift_release(uVar18);
      param_4 = local_1b0;
      uVar23 = local_1b8;
    }
    (**(code **)(uVar23 + 8))(pcVar22,puVar7);
    uVar3 = (uint)(sVar8 >> 0x20);
    uVar21 = uVar3 >> 0x1e;
    iVar25 = (int)p_Var10;
    iVar6 = (int)((ulong)p_Var10 >> 0x20);
    if (param_4 != 0) {
      puVar12 = (undefined1 *)objc_stub::isCancelled(param_4);
      if (((ulong)puVar12 & 1) == 0) {
        (*local_178)(p_Var10,sVar8);
        if (unaff_x21 == 0) {
          if (uVar3 >> 0x1e < 2) {
            if (uVar21 == 0) {
              uVar18 = sVar8 >> 0x30 & 0xff;
            }
            else {
              if (SBORROW4(iVar6,iVar25)) {
                    /* WARNING: Does not return */
                pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba014);
                (*pcVar22)();
              }
              uVar18 = (ulong)(iVar6 - iVar25);
            }
          }
          else if (uVar21 == 2) {
            uVar18 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
            if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba018);
              (*pcVar22)();
            }
          }
          else {
            uVar18 = 0;
          }
          IVar13 = objc_stub::completedUnitCount(param_4);
          if (SCARRY8(IVar13,uVar18)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba010);
            (*pcVar22)();
          }
          buf = (__DataStorage *)objc_stub::setCompletedUnitCount_(param_4,IVar13 + uVar18);
          goto LAB_100ab9bfc;
        }
      }
      else {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar12,0,0);
        *puVar12 = 5;
        _swift_willThrow();
      }
LAB_100ab9f3c:
      FUN_10003bf2c(p_Var10,sVar8);
      goto LAB_100ab9f48;
    }
    buf = p_Var10;
    (*local_178)(p_Var10,sVar8);
    if (unaff_x21 != 0) goto LAB_100ab9f3c;
LAB_100ab9bfc:
    if ((local_19c & 1) == 0) {
      if (uVar21 < 2) {
        if (uVar21 == 0) {
          local_150 = SUB81(p_Var10,0);
          uStack_14f = (undefined1)((ulong)p_Var10 >> 8);
          uStack_14e = (undefined1)((ulong)p_Var10 >> 0x10);
          uStack_14d = (undefined1)((ulong)p_Var10 >> 0x18);
          uStack_14c = (undefined1)((ulong)p_Var10 >> 0x20);
          uStack_14b = (undefined1)((ulong)p_Var10 >> 0x28);
          uStack_14a = (undefined1)((ulong)p_Var10 >> 0x30);
          uStack_149 = (undefined1)((ulong)p_Var10 >> 0x38);
          uStack_148 = (undefined1)sVar8;
          uStack_147 = (undefined1)(sVar8 >> 8);
          uStack_146 = (undefined1)(sVar8 >> 0x10);
          uStack_145 = (undefined1)(sVar8 >> 0x18);
          uStack_144 = (undefined1)(sVar8 >> 0x20);
          uStack_143 = (undefined1)(sVar8 >> 0x28);
          uVar14 = _crc32(local_198,&local_150,(ushort)(sVar8 >> 0x30) & 0xff);
          FUN_10003bf2c(p_Var10,sVar8);
          if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba020);
            local_198 = uVar14;
            (*pcVar22)();
          }
        }
        else {
          lVar24 = (long)iVar25;
          if ((long)p_Var10 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba01c);
            (*pcVar22)();
          }
          Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar8 & 0x3fffffffffffffff),buf);
          p_Var15 = (__DataStorage *)0x0;
          if (buf != (__DataStorage *)0x0) {
            p_Var15 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar8 & 0x3fffffffffffffff),buf);
            if (SBORROW8(lVar24,(long)p_Var15)) {
                    /* WARNING: Does not return */
              pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba048);
              (*pcVar22)();
            }
            buf = buf + (lVar24 - (long)p_Var15);
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(sVar8 & 0x3fffffffffffffff),p_Var15);
          param_4 = local_1b0;
          uVar23 = local_1b8;
          if (SBORROW4(iVar6,iVar25)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba02c);
            (*pcVar22)();
          }
          if (iVar6 - iVar25 < 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba034);
            (*pcVar22)();
          }
          uVar14 = _crc32(local_198,(Bytef *)buf,iVar6 - iVar25);
          FUN_10003bf2c(p_Var10,sVar8);
          if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba038);
            local_198 = uVar14;
            (*pcVar22)();
          }
        }
      }
      else if (uVar21 == 2) {
        lVar24 = *(long *)(p_Var10 + 0x10);
        lVar2 = *(long *)(p_Var10 + 0x18);
        Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar8 & 0x3fffffffffffffff),buf);
        p_Var15 = (__DataStorage *)0x0;
        if (buf != (__DataStorage *)0x0) {
          p_Var15 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar8 & 0x3fffffffffffffff),buf);
          if (SBORROW8(lVar24,(long)p_Var15)) {
                    /* WARNING: Does not return */
            pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba044);
            (*pcVar22)();
          }
          buf = buf + (lVar24 - (long)p_Var15);
        }
        if (SBORROW8(lVar2,lVar24)) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba024);
          (*pcVar22)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(sVar8 & 0x3fffffffffffffff),p_Var15);
        uVar23 = *(long *)(p_Var10 + 0x18) - *(long *)(p_Var10 + 0x10);
        if (SBORROW8(*(long *)(p_Var10 + 0x18),*(long *)(p_Var10 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba028);
          (*pcVar22)();
        }
        if ((long)uVar23 < 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba030);
          (*pcVar22)();
        }
        if (uVar23 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba03c);
          (*pcVar22)();
        }
        uVar14 = _crc32(local_198,(Bytef *)buf,(uInt)uVar23);
        FUN_10003bf2c(p_Var10,sVar8);
        param_4 = local_1b0;
        uVar23 = local_1b8;
        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba040);
          (*pcVar22)();
        }
      }
      else {
        uStack_148 = 0;
        uStack_147 = 0;
        uStack_146 = 0;
        uStack_145 = 0;
        uStack_144 = 0;
        uStack_143 = 0;
        local_150 = (code)0x0;
        uStack_14f = 0;
        uStack_14e = 0;
        uStack_14d = 0;
        uStack_14c = 0;
        uStack_14b = 0;
        uStack_14a = 0;
        uStack_149 = 0;
        uVar14 = _crc32(local_198,&local_150,0);
        FUN_10003bf2c(p_Var10,sVar8);
        if (uVar14 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar22 = (code *)SoftwareBreakpoint(1,0x100ab9e8c);
          local_198 = uVar14;
          (*pcVar22)();
        }
      }
    }
    else {
      FUN_10003bf2c(p_Var10,sVar8);
      uVar14 = local_198;
    }
    local_198 = uVar14;
    bVar4 = SCARRY8((long)puVar19,(long)puVar1);
    puVar19 = puVar19 + (long)puVar1;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar22 = (code *)SoftwareBreakpoint(1,0x100aba00c);
      (*pcVar22)();
    }
    uVar14 = local_198;
    puVar12 = puVar1;
  } while ((long)puVar19 < (long)local_1a8);
LAB_100ab9fc8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar14);
  }
  return;
}



/* Address: 0x100aba04c | FUN_100aba04c */

void FUN_100aba04c(undefined8 param_1,undefined1 *param_2,long param_3)

{
  long lVar1;
  Deallocator DVar2;
  int iVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  size_t sVar5;
  undefined8 *puVar6;
  FILE *pFVar7;
  long lVar8;
  undefined8 uStack_48;
  
  DVar2 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar8 = *(long *)(CONCAT71(extraout_var,DVar2.value) + -8);
  lVar1 = -(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = (undefined8 *)(&stack0xffffffffffffffb0 + lVar1);
  pFVar7 = *(FILE **)(param_3 + _TtC13ZIPFoundation7Archive::archiveFile);
  puVar4 = param_2;
  _swift_slowAlloc(param_2,0xffffffffffffffff);
  sVar5 = _fread(puVar4,1,(size_t)param_2,pFVar7);
  iVar3 = _ferror(pFVar7);
  if (iVar3 < 1) {
    *puVar6 = FUN_10094a398;
    *(undefined8 *)((long)&uStack_48 + lVar1) = 0;
    (**(code **)(lVar8 + 0x68))
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



/* Address: 0x100aba174 | FUN_100aba174 */

void FUN_100aba174(long param_1,ulong param_2,ID param_3,code *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ID IVar4;
  uint uVar5;
  int iVar6;
  long unaff_x21;
  ulong uVar7;
  
  if (param_3 == 0) {
    (*param_4)(param_1,param_2);
  }
  else {
    puVar3 = (undefined1 *)objc_stub::isCancelled(param_3);
    if ((int)puVar3 == 0) {
      (*param_4)(param_1,param_2);
      if (unaff_x21 == 0) {
        uVar1 = (uint)(param_2 >> 0x20);
        uVar5 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar5 == 0) {
            uVar7 = param_2 >> 0x30 & 0xff;
          }
          else {
            iVar6 = (int)((ulong)param_1 >> 0x20);
            if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100aba2a0);
              (*pcVar2)();
            }
            uVar7 = (ulong)(iVar6 - (int)param_1);
          }
        }
        else if (uVar5 == 2) {
          uVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100aba29c);
            (*pcVar2)();
          }
        }
        else {
          uVar7 = 0;
        }
        IVar4 = objc_stub::completedUnitCount(param_3);
        if (SCARRY8(IVar4,uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100aba298);
          (*pcVar2)();
        }
        objc_stub::setCompletedUnitCount_(param_3,IVar4 + uVar7);
      }
    }
    else {
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,puVar3,0,0);
      *puVar3 = 5;
      _swift_willThrow();
    }
  }
  return;
}



/* Address: 0x100aba2a0 | FUN_100aba2a0 */

long FUN_100aba2a0(long param_1,long param_2,ID param_3,long param_4,undefined1 *param_5,
                  FILE *param_6)

{
  uint uVar1;
  int iVar2;
  code cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  undefined1 uVar14;
  undefined1 uVar15;
  uint uVar16;
  undefined1 uVar17;
  long lVar18;
  code *pcVar19;
  bool bVar20;
  Deallocator DVar21;
  int iVar22;
  undefined7 extraout_var;
  undefined1 *puVar24;
  size_t sVar25;
  __DataStorage *p_Var26;
  size_t sVar27;
  undefined4 extraout_var_00;
  __DataStorage *p_Var28;
  long lVar29;
  long lVar30;
  ulong *puVar31;
  ulong uVar32;
  uint uVar33;
  ulong uVar34;
  FILE *pFVar35;
  long lVar36;
  long lVar37;
  int iVar38;
  __DataStorage *p_Var39;
  long lVar40;
  ulong uVar41;
  long lVar42;
  size_t local_150;
  __DataStorage *local_a0;
  __DataStorage *local_98;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  long local_70;
  ulong *puVar23;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar21 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar18 = _TtC13ZIPFoundation7Archive::archiveFile;
  puVar23 = (ulong *)CONCAT71(extraout_var,DVar21.value);
  uVar41 = puVar23[-1];
  uVar34 = *(long *)(uVar41 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar37 = (long)&local_150 - uVar34;
  p_Var39 = (__DataStorage *)(lVar37 - uVar34);
  if (param_1 < 1) {
    lVar40 = 0;
  }
  else {
    lVar42 = 0;
    local_a0 = (__DataStorage *)0x0;
    lVar40 = 0;
    uVar1 = *(uint *)
             PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
    ;
    iVar2 = *(int *)
             PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
    ;
    do {
      if ((param_3 != 0) &&
         (puVar24 = (undefined1 *)objc_stub::isCancelled(param_3), (int)puVar24 != 0)) {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar24,0,0);
        *puVar24 = 5;
LAB_100abaab0:
        _swift_willThrow();
        break;
      }
      puVar24 = param_5;
      _swift_slowAlloc(param_5,0xffffffffffffffff);
      sVar25 = _fread(puVar24,1,(size_t)param_5,param_6);
      iVar22 = _ferror(param_6);
      if (0 < iVar22) {
        _swift_slowDealloc(puVar24,0xffffffffffffffff,0xffffffffffffffff);
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,puVar24,0,0);
        *puVar24 = 0;
        goto LAB_100abaab0;
      }
      *(code **)p_Var39 = FUN_10094a398;
      *(undefined8 *)(p_Var39 + 8) = 0;
      uVar34 = (ulong)uVar1;
      p_Var26 = p_Var39;
      (**(code **)(uVar41 + 0x68))(p_Var39,uVar34,puVar23);
      Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)p_Var26);
      if (sVar25 == 0) {
        uVar32 = uVar34;
        Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)p_Var26);
        (*(code *)p_Var26)(puVar24,0);
        _swift_release(uVar34);
        _swift_release(uVar32);
        (**(code **)(uVar41 + 8))(p_Var39,puVar23);
        local_98 = (__DataStorage *)0x0;
        sVar25 = 0xc000000000000000;
LAB_100aba704:
        uStack_88 = 0;
        uStack_87 = 0;
        uStack_86 = 0;
        uStack_85 = 0;
        uStack_84 = 0;
        uStack_83 = 0;
        local_90 = (code)0x0;
        uStack_8f = 0;
        uStack_8e = 0;
        uStack_8d = 0;
        uStack_8c = 0;
        uStack_8b = 0;
        uStack_8a = 0;
        uStack_89 = 0;
        local_a0 = (__DataStorage *)_crc32((ulong)local_a0 & 0xffffffff,&local_90,0);
        if ((ulong)local_a0 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab04);
          (*pcVar19)();
        }
        sVar27 = 0;
        pFVar35 = *(FILE **)(param_4 + lVar18);
      }
      else {
        p_Var26 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var26,*(undefined4 *)(p_Var26 + 0x30),*(undefined2 *)(p_Var26 + 0x34));
        _swift_retain(uVar34);
        local_98 = Foundation::__DataStorage::_init(p_Var26,(__int64)puVar24,SUB81(sVar25,0),0);
        (**(code **)(uVar41 + 0x10))(lVar37,p_Var39,puVar23);
        lVar30 = lVar37;
        puVar31 = puVar23;
        (**(code **)(uVar41 + 0x58))();
        if ((int)lVar30 == iVar2) {
          pcVar19 = (code *)&local_90;
          Foundation::__DataStorage::modify__capacity(local_98,(__int64)pcVar19);
          *puVar31 = *puVar31 | 0x8000000000000000;
          (*pcVar19)(&local_90,0);
        }
        else {
          (**(code **)(uVar41 + 8))(lVar37,puVar23);
        }
        FUN_100abcce8();
        _swift_release(uVar34);
        p_Var26 = p_Var39;
        (**(code **)(uVar41 + 8))(p_Var39,puVar23);
        uVar16 = (uint)(sVar25 >> 0x20);
        uVar33 = uVar16 >> 0x1e;
        if (uVar16 >> 0x1e < 2) {
          iVar22 = (int)local_98;
          if (uVar33 == 0) {
            cVar3 = SUB81(local_98,0);
            uVar4 = (undefined1)((ulong)local_98 >> 8);
            uVar5 = (undefined1)((ulong)local_98 >> 0x10);
            uVar6 = (undefined1)((ulong)local_98 >> 0x18);
            uVar7 = (undefined1)((ulong)local_98 >> 0x20);
            uVar8 = (undefined1)((ulong)local_98 >> 0x28);
            uVar9 = (undefined1)((ulong)local_98 >> 0x30);
            uVar17 = (undefined1)((ulong)local_98 >> 0x38);
            uVar10 = (undefined1)sVar25;
            uVar11 = (undefined1)(sVar25 >> 8);
            uVar12 = (undefined1)(sVar25 >> 0x10);
            uVar13 = (undefined1)(sVar25 >> 0x18);
            local_150 = sVar25 >> 0x30 & 0xff;
            uVar14 = (undefined1)(sVar25 >> 0x20);
            uVar15 = (undefined1)(sVar25 >> 0x28);
            local_90 = cVar3;
            uStack_8f = uVar4;
            uStack_8e = uVar5;
            uStack_8d = uVar6;
            uStack_8c = uVar7;
            uStack_8b = uVar8;
            uStack_8a = uVar9;
            uStack_89 = uVar17;
            uStack_88 = uVar10;
            uStack_87 = uVar11;
            uStack_86 = uVar12;
            uStack_85 = uVar13;
            uStack_84 = uVar14;
            uStack_83 = uVar15;
            local_a0 = (__DataStorage *)
                       _crc32((ulong)local_a0 & 0xffffffff,&local_90,(uInt)local_150);
            if ((ulong)local_a0 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab08);
              (*pcVar19)();
            }
            pFVar35 = *(FILE **)(param_4 + lVar18);
            if ((sVar25 & 0xff000000000000) == 0) {
              sVar27 = 0;
              local_90 = cVar3;
              uStack_8f = uVar4;
              uStack_8e = uVar5;
              uStack_8d = uVar6;
              uStack_8c = uVar7;
              uStack_8b = uVar8;
              uStack_8a = uVar9;
              uStack_89 = uVar17;
              uStack_88 = uVar10;
              uStack_87 = uVar11;
              uStack_86 = uVar12;
              uStack_85 = uVar13;
              uStack_84 = uVar14;
              uStack_83 = uVar15;
            }
            else {
              local_90 = cVar3;
              uStack_8f = uVar4;
              uStack_8e = uVar5;
              uStack_8d = uVar6;
              uStack_8c = uVar7;
              uStack_8b = uVar8;
              uStack_8a = uVar9;
              uStack_89 = uVar17;
              uStack_88 = uVar10;
              uStack_87 = uVar11;
              uStack_86 = uVar12;
              uStack_85 = uVar13;
              uStack_84 = uVar14;
              uStack_83 = uVar15;
              sVar27 = _fwrite(&local_90,1,local_150,pFVar35);
            }
          }
          else {
            lVar36 = (long)iVar22;
            lVar30 = ((long)local_98 >> 0x20) - lVar36;
            if ((long)local_98 >> 0x20 < lVar36) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab0c);
              (*pcVar19)();
            }
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
            p_Var28 = (__DataStorage *)0x0;
            if (p_Var26 != (__DataStorage *)0x0) {
              p_Var28 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
              if (SBORROW8(lVar36,(long)p_Var28)) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab38);
                (*pcVar19)();
              }
              p_Var26 = p_Var26 + (lVar36 - (long)p_Var28);
            }
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var28);
            iVar38 = (int)((ulong)local_98 >> 0x20);
            uVar16 = iVar38 - iVar22;
            if (SBORROW4(iVar38,iVar22)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab18);
              (*pcVar19)();
            }
            if ((int)uVar16 < 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab20);
              (*pcVar19)();
            }
            local_a0 = (__DataStorage *)_crc32((ulong)local_a0 & 0xffffffff,(Bytef *)p_Var26,uVar16)
            ;
            if ((ulong)local_a0 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab28);
              (*pcVar19)();
            }
            pFVar35 = *(FILE **)(param_4 + lVar18);
            p_Var26 = local_a0;
            Foundation::__DataStorage::_get__bytes
                      ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),local_a0);
            if (p_Var26 == (__DataStorage *)0x0) {
              Foundation::__DataStorage::get__length
                        ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            }
            else {
              p_Var28 = (__DataStorage *)
                        Foundation::__DataStorage::get__offset
                                  ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
              if (SBORROW8(lVar36,(long)p_Var28)) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab3c);
                (*pcVar19)();
              }
              lVar29 = Foundation::__DataStorage::get__length
                                 ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var28);
              if (p_Var26 + (lVar36 - (long)p_Var28) != (__DataStorage *)0x0) {
                if (lVar30 <= lVar29) {
                  lVar29 = lVar30;
                }
                if (lVar29 == 0) {
                  sVar27 = 0;
                }
                else {
                  sVar27 = _fwrite(p_Var26 + (lVar36 - (long)p_Var28),1,(ulong)uVar16,pFVar35);
                }
                goto LAB_100aba73c;
              }
            }
            sVar27 = 0;
          }
        }
        else {
          if (uVar33 != 2) goto LAB_100aba704;
          lVar30 = *(long *)(local_98 + 0x10);
          lVar36 = *(long *)(local_98 + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
          if (p_Var26 == (__DataStorage *)0x0) {
            p_Var26 = (__DataStorage *)0x0;
            p_Var28 = (__DataStorage *)0x0;
          }
          else {
            p_Var28 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
            if (SBORROW8(lVar30,(long)p_Var28)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab34);
              (*pcVar19)();
            }
            p_Var26 = p_Var26 + (lVar30 - (long)p_Var28);
          }
          if (SBORROW8(lVar36,lVar30)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab10);
            (*pcVar19)();
          }
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var28);
          uVar34 = *(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10);
          if (SBORROW8(*(long *)(local_98 + 0x18),*(long *)(local_98 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab14);
            (*pcVar19)();
          }
          if ((long)uVar34 < 0) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab1c);
            (*pcVar19)();
          }
          if (uVar34 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab24);
            (*pcVar19)();
          }
          local_a0 = (__DataStorage *)
                     _crc32((ulong)local_a0 & 0xffffffff,(Bytef *)p_Var26,(uInt)uVar34);
          if ((ulong)local_a0 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab2c);
            (*pcVar19)();
          }
          pFVar35 = *(FILE **)(param_4 + lVar18);
          lVar30 = *(long *)(local_98 + 0x10);
          lVar36 = *(long *)(local_98 + 0x18);
          p_Var26 = local_a0;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),local_a0);
          if (p_Var26 == (__DataStorage *)0x0) {
            p_Var26 = (__DataStorage *)0x0;
            p_Var28 = (__DataStorage *)0x0;
          }
          else {
            p_Var28 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var26);
            if (SBORROW8(lVar30,(long)p_Var28)) {
                    /* WARNING: Does not return */
              pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab40);
              (*pcVar19)();
            }
            p_Var26 = p_Var26 + (lVar30 - (long)p_Var28);
          }
          if (SBORROW8(lVar36,lVar30)) {
                    /* WARNING: Does not return */
            pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab30);
            (*pcVar19)();
          }
          lVar36 = lVar36 - lVar30;
          lVar30 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(sVar25 & 0x3fffffffffffffff),p_Var28);
          if (p_Var26 == (__DataStorage *)0x0) {
            sVar27 = 0;
          }
          else {
            if (lVar36 <= lVar30) {
              lVar30 = lVar36;
            }
            if (lVar30 == 0) {
              sVar27 = 0;
            }
            else {
              if (SBORROW8(*(long *)(local_98 + 0x18),*(long *)(local_98 + 0x10))) {
                    /* WARNING: Does not return */
                pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab44);
                (*pcVar19)();
              }
              sVar27 = _fwrite(p_Var26,1,*(long *)(local_98 + 0x18) - *(long *)(local_98 + 0x10),
                               pFVar35);
            }
          }
        }
      }
LAB_100aba73c:
      iVar22 = _ferror(pFVar35);
      puVar24 = (undefined1 *)CONCAT44(extraout_var_00,iVar22);
      if (0 < iVar22) {
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,puVar24,0,0);
        *puVar24 = 1;
        _swift_willThrow();
        FUN_10003bf2c(local_98,sVar25);
        break;
      }
      bVar20 = SCARRY8(lVar40,sVar27);
      lVar40 = lVar40 + sVar27;
      if (bVar20) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100abaafc);
        (*pcVar19)();
      }
      lVar30 = lVar42 + param_2;
      if (SCARRY8(lVar42,param_2)) {
                    /* WARNING: Does not return */
        pcVar19 = (code *)SoftwareBreakpoint(1,0x100abab00);
        (*pcVar19)();
      }
      objc_stub::setCompletedUnitCount_(param_3,lVar40);
      FUN_10003bf2c(local_98,sVar25);
      lVar42 = lVar42 + param_2;
    } while (lVar30 < param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return lVar40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abab48 | FUN_100abab48 */

long FUN_100abab48(long param_1,ulong param_2,ID param_3,long param_4,code *param_5)

{
  Bytef BVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  code *pcVar17;
  bool bVar18;
  int iVar19;
  undefined1 *puVar20;
  __DataStorage *p_Var21;
  size_t sVar22;
  __DataStorage *p_Var23;
  long lVar24;
  long lVar25;
  undefined4 extraout_var;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  long unaff_x21;
  long lVar30;
  __DataStorage *p_Var31;
  __DataStorage *p_Var32;
  long lVar33;
  FILE *local_c0;
  __DataStorage *local_80;
  Bytef local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  long local_68;
  
  lVar16 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 < 1) {
    lVar33 = 0;
  }
  else {
    p_Var31 = (__DataStorage *)0x0;
    local_80 = (__DataStorage *)0x0;
    lVar33 = 0;
    do {
      if ((param_3 != 0) &&
         (puVar20 = (undefined1 *)objc_stub::isCancelled(param_3), (int)puVar20 != 0)) {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar20,0,0);
        *puVar20 = 5;
        _swift_willThrow();
        break;
      }
      if (SBORROW8(param_1,(long)p_Var31)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb100);
        (*pcVar17)();
      }
      uVar26 = param_1 - (long)p_Var31;
      if ((long)param_2 <= param_1 - (long)p_Var31) {
        uVar26 = param_2;
      }
      p_Var21 = p_Var31;
      (*param_5)();
      if (unaff_x21 != 0) break;
      uVar14 = (uint)(uVar26 >> 0x20);
      uVar28 = uVar14 >> 0x1e;
      if (uVar14 >> 0x1e < 2) {
        iVar19 = (int)p_Var21;
        if (uVar28 != 0) {
          lVar30 = (long)iVar19;
          lVar25 = ((long)p_Var21 >> 0x20) - lVar30;
          if ((long)p_Var21 >> 0x20 < lVar30) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb10c);
            (*pcVar17)();
          }
          p_Var32 = p_Var21;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var21);
          if (p_Var32 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            p_Var32 = (__DataStorage *)0x0;
          }
          else {
            p_Var23 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
            if (SBORROW8(lVar30,(long)p_Var23)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb140);
              (*pcVar17)();
            }
            p_Var32 = p_Var32 + (lVar30 - (long)p_Var23);
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
          }
          iVar29 = (int)((ulong)p_Var21 >> 0x20);
          uVar14 = iVar29 - iVar19;
          if (SBORROW4(iVar29,iVar19)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb120);
            (*pcVar17)();
          }
          if ((int)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb124);
            (*pcVar17)();
          }
          local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,(Bytef *)p_Var32,uVar14);
          if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb130);
            (*pcVar17)();
          }
          local_c0 = *(FILE **)(param_4 + lVar16);
          p_Var32 = local_80;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),local_80);
          if (p_Var32 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          }
          else {
            p_Var23 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
            if (SBORROW8(lVar30,(long)p_Var23)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb144);
              (*pcVar17)();
            }
            lVar24 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
            if (p_Var32 + (lVar30 - (long)p_Var23) != (__DataStorage *)0x0) {
              if (lVar25 <= lVar24) {
                lVar24 = lVar25;
              }
              if (lVar24 != 0) {
                sVar22 = _fwrite(p_Var32 + (lVar30 - (long)p_Var23),1,(ulong)uVar14,local_c0);
                goto LAB_100abaff0;
              }
            }
          }
          goto LAB_100abafec;
        }
        BVar1 = (Bytef)p_Var21;
        uVar2 = (undefined1)((ulong)p_Var21 >> 8);
        uVar3 = (undefined1)((ulong)p_Var21 >> 0x10);
        uVar4 = (undefined1)((ulong)p_Var21 >> 0x18);
        uVar5 = (undefined1)((ulong)p_Var21 >> 0x20);
        uVar6 = (undefined1)((ulong)p_Var21 >> 0x28);
        uVar7 = (undefined1)((ulong)p_Var21 >> 0x30);
        uVar15 = (undefined1)((ulong)p_Var21 >> 0x38);
        uVar8 = (undefined1)uVar26;
        uVar9 = (undefined1)(uVar26 >> 8);
        uVar10 = (undefined1)(uVar26 >> 0x10);
        uVar11 = (undefined1)(uVar26 >> 0x18);
        uVar27 = uVar26 >> 0x30 & 0xff;
        uVar12 = (undefined1)(uVar26 >> 0x20);
        uVar13 = (undefined1)(uVar26 >> 0x28);
        local_78 = BVar1;
        uStack_77 = uVar2;
        uStack_76 = uVar3;
        uStack_75 = uVar4;
        uStack_74 = uVar5;
        uStack_73 = uVar6;
        uStack_72 = uVar7;
        uStack_71 = uVar15;
        uStack_70 = uVar8;
        uStack_6f = uVar9;
        uStack_6e = uVar10;
        uStack_6d = uVar11;
        uStack_6c = uVar12;
        uStack_6b = uVar13;
        local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,&local_78,(uInt)uVar27);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb110);
          (*pcVar17)();
        }
        local_c0 = *(FILE **)(param_4 + lVar16);
        if ((uVar26 & 0xff000000000000) == 0) {
          sVar22 = 0;
          local_78 = BVar1;
          uStack_77 = uVar2;
          uStack_76 = uVar3;
          uStack_75 = uVar4;
          uStack_74 = uVar5;
          uStack_73 = uVar6;
          uStack_72 = uVar7;
          uStack_71 = uVar15;
          uStack_70 = uVar8;
          uStack_6f = uVar9;
          uStack_6e = uVar10;
          uStack_6d = uVar11;
          uStack_6c = uVar12;
          uStack_6b = uVar13;
        }
        else {
          local_78 = BVar1;
          uStack_77 = uVar2;
          uStack_76 = uVar3;
          uStack_75 = uVar4;
          uStack_74 = uVar5;
          uStack_73 = uVar6;
          uStack_72 = uVar7;
          uStack_71 = uVar15;
          uStack_70 = uVar8;
          uStack_6f = uVar9;
          uStack_6e = uVar10;
          uStack_6d = uVar11;
          uStack_6c = uVar12;
          uStack_6b = uVar13;
          sVar22 = _fwrite(&local_78,1,uVar27,local_c0);
        }
      }
      else if (uVar28 == 2) {
        lVar25 = *(long *)(p_Var21 + 0x10);
        lVar30 = *(long *)(p_Var21 + 0x18);
        p_Var32 = p_Var21;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var21);
        if (p_Var32 == (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)0x0;
          p_Var23 = (__DataStorage *)0x0;
        }
        else {
          p_Var23 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
          if (SBORROW8(lVar25,(long)p_Var23)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb13c);
            (*pcVar17)();
          }
          p_Var32 = p_Var32 + (lVar25 - (long)p_Var23);
        }
        if (SBORROW8(lVar30,lVar25)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb118);
          (*pcVar17)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
        uVar27 = *(long *)(p_Var21 + 0x18) - *(long *)(p_Var21 + 0x10);
        if (SBORROW8(*(long *)(p_Var21 + 0x18),*(long *)(p_Var21 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb11c);
          (*pcVar17)();
        }
        if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb128);
          (*pcVar17)();
        }
        if (uVar27 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb12c);
          (*pcVar17)();
        }
        local_80 = (__DataStorage *)
                   _crc32((ulong)local_80 & 0xffffffff,(Bytef *)p_Var32,(uInt)uVar27);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb134);
          (*pcVar17)();
        }
        local_c0 = *(FILE **)(param_4 + lVar16);
        lVar25 = *(long *)(p_Var21 + 0x10);
        lVar30 = *(long *)(p_Var21 + 0x18);
        p_Var32 = local_80;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),local_80);
        if (p_Var32 == (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)0x0;
          p_Var23 = (__DataStorage *)0x0;
        }
        else {
          p_Var23 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
          if (SBORROW8(lVar25,(long)p_Var23)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb148);
            (*pcVar17)();
          }
          p_Var32 = p_Var32 + (lVar25 - (long)p_Var23);
        }
        if (SBORROW8(lVar30,lVar25)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb138);
          (*pcVar17)();
        }
        lVar30 = lVar30 - lVar25;
        lVar25 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
        if (p_Var32 != (__DataStorage *)0x0) {
          if (lVar30 <= lVar25) {
            lVar25 = lVar30;
          }
          if (lVar25 != 0) {
            if (SBORROW8(*(long *)(p_Var21 + 0x18),*(long *)(p_Var21 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb14c);
              (*pcVar17)();
            }
            sVar22 = _fwrite(p_Var32,1,*(long *)(p_Var21 + 0x18) - *(long *)(p_Var21 + 0x10),
                             local_c0);
            goto LAB_100abaff0;
          }
        }
LAB_100abafec:
        sVar22 = 0;
      }
      else {
        uStack_70 = 0;
        uStack_6f = 0;
        uStack_6e = 0;
        uStack_6d = 0;
        uStack_6c = 0;
        uStack_6b = 0;
        local_78 = '\0';
        uStack_77 = 0;
        uStack_76 = 0;
        uStack_75 = 0;
        uStack_74 = 0;
        uStack_73 = 0;
        uStack_72 = 0;
        uStack_71 = 0;
        local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,&local_78,0);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb114);
          (*pcVar17)();
        }
        sVar22 = 0;
        local_c0 = *(FILE **)(param_4 + lVar16);
      }
LAB_100abaff0:
      iVar19 = _ferror(local_c0);
      puVar20 = (undefined1 *)CONCAT44(extraout_var,iVar19);
      if (0 < iVar19) {
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,puVar20,0,0);
        *puVar20 = 1;
        _swift_willThrow();
        FUN_10003bf2c(p_Var21,uVar26);
        break;
      }
      bVar18 = SCARRY8(lVar33,sVar22);
      lVar33 = lVar33 + sVar22;
      if (bVar18) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb104);
        (*pcVar17)();
      }
      p_Var32 = p_Var31 + param_2;
      if (SCARRY8((long)p_Var31,param_2)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb108);
        (*pcVar17)();
      }
      objc_stub::setCompletedUnitCount_(param_3,lVar33);
      FUN_10003bf2c(p_Var21,uVar26);
      p_Var31 = p_Var31 + param_2;
    } while ((long)p_Var32 < param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return lVar33;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abb150 | FUN_100abb150 */

long FUN_100abb150(long param_1,ulong param_2,ID param_3,code *param_4)

{
  Bytef BVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined1 uVar13;
  uint uVar14;
  undefined1 uVar15;
  long lVar16;
  code *pcVar17;
  bool bVar18;
  int iVar19;
  undefined1 *puVar20;
  __DataStorage *p_Var21;
  size_t sVar22;
  __DataStorage *p_Var23;
  long lVar24;
  long lVar25;
  undefined4 extraout_var;
  ulong uVar26;
  ulong uVar27;
  uint uVar28;
  int iVar29;
  long unaff_x20;
  long unaff_x21;
  __DataStorage *p_Var30;
  long lVar31;
  __DataStorage *p_Var32;
  long lVar33;
  FILE *local_c0;
  __DataStorage *local_80;
  Bytef local_78;
  undefined1 uStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  undefined1 uStack_72;
  undefined1 uStack_71;
  undefined1 uStack_70;
  undefined1 uStack_6f;
  undefined1 uStack_6e;
  undefined1 uStack_6d;
  undefined1 uStack_6c;
  undefined1 uStack_6b;
  long local_68;
  
  lVar16 = _TtC13ZIPFoundation7Archive::archiveFile;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (param_1 < 1) {
    lVar33 = 0;
  }
  else {
    p_Var30 = (__DataStorage *)0x0;
    local_80 = (__DataStorage *)0x0;
    lVar33 = 0;
    do {
      if ((param_3 != 0) &&
         (puVar20 = (undefined1 *)objc_stub::isCancelled(param_3), (int)puVar20 != 0)) {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar20,0,0);
        *puVar20 = 5;
        _swift_willThrow();
        break;
      }
      if (SBORROW8(param_1,(long)p_Var30)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb708);
        (*pcVar17)();
      }
      uVar26 = param_1 - (long)p_Var30;
      if ((long)param_2 <= param_1 - (long)p_Var30) {
        uVar26 = param_2;
      }
      p_Var21 = p_Var30;
      (*param_4)();
      if (unaff_x21 != 0) break;
      uVar14 = (uint)(uVar26 >> 0x20);
      uVar28 = uVar14 >> 0x1e;
      if (uVar14 >> 0x1e < 2) {
        iVar19 = (int)p_Var21;
        if (uVar28 != 0) {
          lVar31 = (long)iVar19;
          lVar25 = ((long)p_Var21 >> 0x20) - lVar31;
          if ((long)p_Var21 >> 0x20 < lVar31) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb714);
            (*pcVar17)();
          }
          p_Var32 = p_Var21;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var21);
          if (p_Var32 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            p_Var32 = (__DataStorage *)0x0;
          }
          else {
            p_Var23 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
            if (SBORROW8(lVar31,(long)p_Var23)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb748);
              (*pcVar17)();
            }
            p_Var32 = p_Var32 + (lVar31 - (long)p_Var23);
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
          }
          iVar29 = (int)((ulong)p_Var21 >> 0x20);
          uVar14 = iVar29 - iVar19;
          if (SBORROW4(iVar29,iVar19)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb728);
            (*pcVar17)();
          }
          if ((int)uVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb730);
            (*pcVar17)();
          }
          local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,(Bytef *)p_Var32,uVar14);
          if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb738);
            (*pcVar17)();
          }
          local_c0 = *(FILE **)(unaff_x20 + lVar16);
          p_Var32 = local_80;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),local_80);
          if (p_Var32 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),(__DataStorage *)0x0);
          }
          else {
            p_Var23 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
            if (SBORROW8(lVar31,(long)p_Var23)) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb74c);
              (*pcVar17)();
            }
            lVar24 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
            if (p_Var32 + (lVar31 - (long)p_Var23) != (__DataStorage *)0x0) {
              if (lVar25 <= lVar24) {
                lVar24 = lVar25;
              }
              if (lVar24 != 0) {
                sVar22 = _fwrite(p_Var32 + (lVar31 - (long)p_Var23),1,(ulong)uVar14,local_c0);
                goto LAB_100abb5fc;
              }
            }
          }
          goto LAB_100abb5f8;
        }
        BVar1 = (Bytef)p_Var21;
        uVar2 = (undefined1)((ulong)p_Var21 >> 8);
        uVar3 = (undefined1)((ulong)p_Var21 >> 0x10);
        uVar4 = (undefined1)((ulong)p_Var21 >> 0x18);
        uVar5 = (undefined1)((ulong)p_Var21 >> 0x20);
        uVar6 = (undefined1)((ulong)p_Var21 >> 0x28);
        uVar7 = (undefined1)((ulong)p_Var21 >> 0x30);
        uVar15 = (undefined1)((ulong)p_Var21 >> 0x38);
        uVar8 = (undefined1)uVar26;
        uVar9 = (undefined1)(uVar26 >> 8);
        uVar10 = (undefined1)(uVar26 >> 0x10);
        uVar11 = (undefined1)(uVar26 >> 0x18);
        uVar27 = uVar26 >> 0x30 & 0xff;
        uVar12 = (undefined1)(uVar26 >> 0x20);
        uVar13 = (undefined1)(uVar26 >> 0x28);
        local_78 = BVar1;
        uStack_77 = uVar2;
        uStack_76 = uVar3;
        uStack_75 = uVar4;
        uStack_74 = uVar5;
        uStack_73 = uVar6;
        uStack_72 = uVar7;
        uStack_71 = uVar15;
        uStack_70 = uVar8;
        uStack_6f = uVar9;
        uStack_6e = uVar10;
        uStack_6d = uVar11;
        uStack_6c = uVar12;
        uStack_6b = uVar13;
        local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,&local_78,(uInt)uVar27);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb718);
          (*pcVar17)();
        }
        local_c0 = *(FILE **)(unaff_x20 + lVar16);
        if ((uVar26 & 0xff000000000000) == 0) {
          sVar22 = 0;
          local_78 = BVar1;
          uStack_77 = uVar2;
          uStack_76 = uVar3;
          uStack_75 = uVar4;
          uStack_74 = uVar5;
          uStack_73 = uVar6;
          uStack_72 = uVar7;
          uStack_71 = uVar15;
          uStack_70 = uVar8;
          uStack_6f = uVar9;
          uStack_6e = uVar10;
          uStack_6d = uVar11;
          uStack_6c = uVar12;
          uStack_6b = uVar13;
        }
        else {
          local_78 = BVar1;
          uStack_77 = uVar2;
          uStack_76 = uVar3;
          uStack_75 = uVar4;
          uStack_74 = uVar5;
          uStack_73 = uVar6;
          uStack_72 = uVar7;
          uStack_71 = uVar15;
          uStack_70 = uVar8;
          uStack_6f = uVar9;
          uStack_6e = uVar10;
          uStack_6d = uVar11;
          uStack_6c = uVar12;
          uStack_6b = uVar13;
          sVar22 = _fwrite(&local_78,1,uVar27,local_c0);
        }
      }
      else if (uVar28 == 2) {
        lVar25 = *(long *)(p_Var21 + 0x10);
        lVar31 = *(long *)(p_Var21 + 0x18);
        p_Var32 = p_Var21;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var21);
        if (p_Var32 == (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)0x0;
          p_Var23 = (__DataStorage *)0x0;
        }
        else {
          p_Var23 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
          if (SBORROW8(lVar25,(long)p_Var23)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb744);
            (*pcVar17)();
          }
          p_Var32 = p_Var32 + (lVar25 - (long)p_Var23);
        }
        if (SBORROW8(lVar31,lVar25)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb720);
          (*pcVar17)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
        uVar27 = *(long *)(p_Var21 + 0x18) - *(long *)(p_Var21 + 0x10);
        if (SBORROW8(*(long *)(p_Var21 + 0x18),*(long *)(p_Var21 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb724);
          (*pcVar17)();
        }
        if ((long)uVar27 < 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb72c);
          (*pcVar17)();
        }
        if (uVar27 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb734);
          (*pcVar17)();
        }
        local_80 = (__DataStorage *)
                   _crc32((ulong)local_80 & 0xffffffff,(Bytef *)p_Var32,(uInt)uVar27);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb73c);
          (*pcVar17)();
        }
        local_c0 = *(FILE **)(unaff_x20 + lVar16);
        lVar25 = *(long *)(p_Var21 + 0x10);
        lVar31 = *(long *)(p_Var21 + 0x18);
        p_Var32 = local_80;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),local_80);
        if (p_Var32 == (__DataStorage *)0x0) {
          p_Var32 = (__DataStorage *)0x0;
          p_Var23 = (__DataStorage *)0x0;
        }
        else {
          p_Var23 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var32);
          if (SBORROW8(lVar25,(long)p_Var23)) {
                    /* WARNING: Does not return */
            pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb750);
            (*pcVar17)();
          }
          p_Var32 = p_Var32 + (lVar25 - (long)p_Var23);
        }
        if (SBORROW8(lVar31,lVar25)) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb740);
          (*pcVar17)();
        }
        lVar31 = lVar31 - lVar25;
        lVar25 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar26 & 0x3fffffffffffffff),p_Var23);
        if (p_Var32 != (__DataStorage *)0x0) {
          if (lVar31 <= lVar25) {
            lVar25 = lVar31;
          }
          if (lVar25 != 0) {
            if (SBORROW8(*(long *)(p_Var21 + 0x18),*(long *)(p_Var21 + 0x10))) {
                    /* WARNING: Does not return */
              pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb754);
              (*pcVar17)();
            }
            sVar22 = _fwrite(p_Var32,1,*(long *)(p_Var21 + 0x18) - *(long *)(p_Var21 + 0x10),
                             local_c0);
            goto LAB_100abb5fc;
          }
        }
LAB_100abb5f8:
        sVar22 = 0;
      }
      else {
        uStack_70 = 0;
        uStack_6f = 0;
        uStack_6e = 0;
        uStack_6d = 0;
        uStack_6c = 0;
        uStack_6b = 0;
        local_78 = '\0';
        uStack_77 = 0;
        uStack_76 = 0;
        uStack_75 = 0;
        uStack_74 = 0;
        uStack_73 = 0;
        uStack_72 = 0;
        uStack_71 = 0;
        local_80 = (__DataStorage *)_crc32((ulong)local_80 & 0xffffffff,&local_78,0);
        if ((ulong)local_80 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb71c);
          (*pcVar17)();
        }
        sVar22 = 0;
        local_c0 = *(FILE **)(unaff_x20 + lVar16);
      }
LAB_100abb5fc:
      iVar19 = _ferror(local_c0);
      puVar20 = (undefined1 *)CONCAT44(extraout_var,iVar19);
      if (0 < iVar19) {
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,puVar20,0,0);
        *puVar20 = 1;
        _swift_willThrow();
        FUN_10003bf2c(p_Var21,uVar26);
        break;
      }
      bVar18 = SCARRY8(lVar33,sVar22);
      lVar33 = lVar33 + sVar22;
      if (bVar18) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb70c);
        (*pcVar17)();
      }
      p_Var32 = p_Var30 + param_2;
      if (SCARRY8((long)p_Var30,param_2)) {
                    /* WARNING: Does not return */
        pcVar17 = (code *)SoftwareBreakpoint(1,0x100abb710);
        (*pcVar17)();
      }
      objc_stub::setCompletedUnitCount_(param_3,lVar33);
      FUN_10003bf2c(p_Var21,uVar26);
      p_Var30 = p_Var30 + param_2;
    } while ((long)p_Var32 < param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return lVar33;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abb758 | FUN_100abb758 */

void FUN_100abb758(undefined4 *param_1,long param_2,ulong param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  ulong uVar3;
  int iVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  long lVar7;
  uint uVar8;
  code *pcVar9;
  int iVar10;
  undefined8 *puVar11;
  __DataStorage *p_Var12;
  __DataStorage *p_Var13;
  long lVar14;
  __DataStorage *p_Var15;
  undefined4 extraout_var;
  undefined *puVar17;
  undefined *puVar18;
  __DataStorage *p_Var19;
  size_t sVar20;
  uint uVar21;
  int iVar22;
  long lVar23;
  long unaff_x20;
  ulong uVar24;
  FILE *pFVar25;
  ushort uVar26;
  ulong uVar27;
  undefined4 uVar28;
  undefined *puVar29;
  undefined8 uVar30;
  __DataStorage local_2a8;
  undefined1 local_2a7;
  undefined1 local_2a6;
  undefined1 local_2a5;
  undefined1 local_2a4;
  undefined1 local_2a3;
  undefined1 local_2a2;
  undefined1 local_2a1;
  undefined1 local_2a0;
  undefined1 local_29f;
  undefined1 local_29e;
  undefined1 local_29d;
  undefined1 local_29c;
  undefined1 local_29b;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined4 local_228;
  undefined2 local_224;
  undefined8 local_222;
  undefined2 local_21a;
  undefined4 local_218;
  undefined4 local_214;
  int local_210;
  undefined2 local_20c;
  ushort local_20a;
  undefined4 local_208;
  undefined2 local_204;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined *local_1e8;
  ulong uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined1 auStack_1b0 [8];
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  char local_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined4 local_168;
  char local_164;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined4 local_150;
  undefined2 local_14c;
  undefined8 local_14a;
  undefined2 local_142;
  undefined4 local_140;
  undefined4 local_13c;
  int local_138;
  undefined2 local_134;
  ushort local_132;
  undefined4 local_130;
  undefined2 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  ulong local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined4 local_e8;
  undefined2 local_e4;
  undefined8 local_e2;
  undefined2 local_da;
  undefined4 local_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined2 local_cc;
  ushort local_ca;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined1 *puVar16;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  iVar4 = *(int *)(param_2 + 0x18);
  if ((iVar4 == -1) || (uVar27 = param_3, *(int *)(param_2 + 0x14) == -1)) {
    uVar30 = *(undefined8 *)(param_2 + 0x30);
    uVar27 = *(ulong *)(param_2 + 0x38);
    puVar18 = &DAT_100ff8318;
    FUN_1000f7830(&DAT_100ff8318,&DAT_100c94218);
    _swift_initStaticObject();
    FUN_100adbd6c(auStack_1b0,uVar30,uVar27,puVar18);
    if (local_18c == '\x01') goto LAB_100abb800;
    uVar27 = param_3;
    if (0xfffffffe < param_3) {
      uVar27 = 0xffffffff;
    }
    uVar28 = (undefined4)uVar27;
    puVar29 = (undefined *)0x0;
    uVar27 = 1;
    FUN_100ae0a0c(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar3 = *(ulong *)(puVar29 + 0x10);
    uVar24 = uVar3 + 1;
    puVar18 = puVar29;
    if (*(ulong *)(puVar29 + 0x18) >> 1 <= uVar3) {
      puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar29 + 0x18));
      uVar27 = uVar24;
      FUN_100ae0a0c(puVar18,uVar24,1,puVar29);
    }
    *(ulong *)(puVar18 + 0x10) = uVar24;
    *(undefined8 *)(puVar18 + uVar3 * 8 + 0x20) = local_1a8;
    puVar29 = puVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar17 = puVar18;
    if (((ulong)puVar29 & 1) == 0) {
      uVar27 = *(long *)(puVar18 + 0x10) + 1;
      puVar17 = (undefined *)0x0;
      FUN_100ae0a0c(0,uVar27,1,puVar18);
    }
    uVar3 = *(ulong *)(puVar17 + 0x10);
    uVar24 = uVar3 + 1;
    puVar18 = puVar17;
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar3) {
      puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
      uVar27 = uVar24;
      FUN_100ae0a0c(puVar18,uVar24,1,puVar17);
    }
    *(ulong *)(puVar18 + 0x10) = uVar24;
    *(undefined8 *)(puVar18 + uVar3 * 8 + 0x20) = uStack_1a0;
    if (0xfffffffe < param_3) goto LAB_100abb8c8;
LAB_100abb824:
    uVar24 = *(ulong *)(puVar18 + 0x10);
    _swift_bridgeObjectRelease();
    if (uVar24 != 0) goto LAB_100abb8f8;
    uVar26 = 0;
    uVar27 = 0xc000000000000000;
    puVar18 = (undefined *)0x0;
  }
  else {
LAB_100abb800:
    uVar28 = (undefined4)param_3;
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (param_3 < 0xffffffff) goto LAB_100abb824;
    uVar28 = 0xffffffff;
LAB_100abb8c8:
    puVar29 = puVar18;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar17 = puVar18;
    if (((ulong)puVar29 & 1) == 0) {
      uVar27 = *(long *)(puVar18 + 0x10) + 1;
      puVar17 = (undefined *)0x0;
      FUN_100ae0a0c(0,uVar27,1,puVar18);
    }
    uVar3 = *(ulong *)(puVar17 + 0x10);
    uVar24 = uVar3 + 1;
    puVar18 = puVar17;
    if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar3) {
      puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
      uVar27 = uVar24;
      FUN_100ae0a0c(puVar18,uVar24,1,puVar17);
    }
    *(ulong *)(puVar18 + 0x10) = uVar24;
    *(ulong *)(puVar18 + uVar3 * 8 + 0x20) = param_3;
    _swift_bridgeObjectRelease();
LAB_100abb8f8:
    if (uVar24 - 0x2000 < 0xffffffffffffe001) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbe30);
      (*pcVar9)();
    }
    uVar26 = (ushort)((int)uVar24 << 3) | 4;
    FUN_100adacb4();
  }
  uVar30 = *(undefined8 *)(param_2 + 4);
  uVar5 = *(undefined2 *)(param_2 + 0xc);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  uVar2 = *(undefined4 *)(param_2 + 0x14);
  uVar6 = *(undefined2 *)(param_2 + 0x1c);
  uStack_1b8 = *(undefined8 *)(param_2 + 0x28);
  local_1c0 = *(undefined8 *)(param_2 + 0x20);
  local_e8 = 0x2014b50;
  local_e4 = 0x315;
  local_c8 = 0;
  local_c4 = 0;
  uStack_b0 = *(undefined8 *)(param_2 + 0x28);
  local_b8 = *(undefined8 *)(param_2 + 0x20);
  uStack_90 = 0xc000000000000000;
  local_98 = 0;
  local_88 = 0;
  puVar11 = &local_160;
  local_160 = local_1c0;
  uStack_158 = uStack_1b8;
  local_e2 = uVar30;
  local_da = uVar5;
  local_d8 = uVar1;
  uStack_d4 = uVar2;
  local_d0 = iVar4;
  local_cc = uVar6;
  local_ca = uVar26;
  local_c0 = param_4;
  uStack_bc = uVar28;
  local_a8 = puVar18;
  uStack_a0 = uVar27;
  FUN_100abccac(puVar11,&local_228);
  FUN_100adb280();
  FUN_100adbd6c(&local_188,puVar18,uVar27,puVar11);
  _swift_bridgeObjectRelease(puVar11);
  puVar29 = (undefined *)0x0;
  if (local_164 != '\x01') {
    local_80 = local_88;
    puVar29 = &DAT_100ff82d8;
    FUN_1000f7830(&DAT_100ff82d8,&DAT_100c94c80);
    _swift_allocObject();
    *(undefined8 *)(puVar29 + 0x18) = 2;
    *(undefined8 *)(puVar29 + 0x10) = 1;
    *(undefined **)(puVar29 + 0x38) = &DAT_100f317a8;
    *(undefined ***)(puVar29 + 0x40) = &PTR_PTR_100f317d0;
    puVar17 = &DAT_100f30b48;
    _swift_allocObject(&DAT_100f30b48,0x38,7);
    *(undefined **)(puVar29 + 0x20) = puVar17;
    *(undefined8 *)(puVar17 + 0x18) = uStack_180;
    *(undefined8 *)(puVar17 + 0x10) = local_188;
    *(undefined8 *)(puVar17 + 0x28) = uStack_170;
    *(undefined8 *)(puVar17 + 0x20) = uStack_178;
    *(undefined4 *)(puVar17 + 0x30) = local_168;
    FUN_1000fb4c4(&local_80,&DAT_100ff82e0,&DAT_100c94210);
  }
  local_150 = 0x2014b50;
  local_14c = 0x315;
  local_130 = 0;
  local_12c = 0;
  uStack_118 = *(undefined8 *)(param_2 + 0x28);
  local_120 = *(undefined8 *)(param_2 + 0x20);
  uStack_f8 = 0xc000000000000000;
  local_100 = 0;
  uStack_238 = *(undefined8 *)(param_2 + 0x28);
  local_240 = *(undefined8 *)(param_2 + 0x20);
  local_228 = 0x2014b50;
  local_224 = 0x315;
  local_208 = 0;
  local_204 = 0;
  uStack_1f0 = uStack_1b8;
  local_1f8 = local_1c0;
  uStack_1d0 = 0xc000000000000000;
  local_1d8 = 0;
  p_Var19 = &local_2a8;
  local_222 = uVar30;
  local_21a = uVar5;
  local_218 = uVar1;
  local_214 = uVar2;
  local_210 = iVar4;
  local_20c = uVar6;
  local_20a = uVar26;
  local_200 = param_4;
  local_1fc = uVar28;
  local_1e8 = puVar18;
  uStack_1e0 = uVar27;
  local_1c8 = puVar29;
  local_14a = uVar30;
  local_142 = uVar5;
  local_140 = uVar1;
  local_13c = uVar2;
  local_138 = iVar4;
  local_134 = uVar6;
  local_132 = uVar26;
  local_128 = param_4;
  local_124 = uVar28;
  local_110 = puVar18;
  local_108 = uVar27;
  local_f0 = puVar29;
  FUN_100abcdd8(&local_150);
  p_Var12 = (__DataStorage *)&local_228;
  FUN_100abce14();
  FUN_100ad7750();
  pFVar25 = *(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile);
  uVar8 = (uint)((ulong)p_Var19 >> 0x20);
  uVar21 = uVar8 >> 0x1e;
  if (uVar8 >> 0x1e < 2) {
    if (uVar21 == 0) {
      local_2a8 = SUB81(p_Var12,0);
      local_2a7 = (undefined1)((ulong)p_Var12 >> 8);
      local_2a6 = (undefined1)((ulong)p_Var12 >> 0x10);
      local_2a5 = (undefined1)((ulong)p_Var12 >> 0x18);
      local_2a4 = (undefined1)((ulong)p_Var12 >> 0x20);
      local_2a3 = (undefined1)((ulong)p_Var12 >> 0x28);
      local_2a2 = (undefined1)((ulong)p_Var12 >> 0x30);
      local_2a1 = (undefined1)((ulong)p_Var12 >> 0x38);
      local_2a0 = SUB81(p_Var19,0);
      local_29f = (undefined1)((ulong)p_Var19 >> 8);
      local_29e = (undefined1)((ulong)p_Var19 >> 0x10);
      local_29d = (undefined1)((ulong)p_Var19 >> 0x18);
      local_29c = (undefined1)((ulong)p_Var19 >> 0x20);
      local_29b = (undefined1)((ulong)p_Var19 >> 0x28);
      if (((ulong)p_Var19 & 0xff000000000000) == 0) goto LAB_100abbd18;
      sVar20 = (ulong)p_Var19 >> 0x30 & 0xff;
      p_Var13 = &local_2a8;
    }
    else {
      iVar10 = (int)p_Var12;
      lVar23 = (long)iVar10;
      lVar14 = ((long)p_Var12 >> 0x20) - lVar23;
      if ((long)p_Var12 >> 0x20 < lVar23) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbed4);
        (*pcVar9)();
      }
      p_Var13 = p_Var12;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var12);
      if (p_Var13 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        goto LAB_100abbd18;
      }
      p_Var15 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var13);
      if (SBORROW8(lVar23,(long)p_Var15)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbee0);
        (*pcVar9)();
      }
      p_Var13 = p_Var13 + (lVar23 - (long)p_Var15);
      lVar23 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var15);
      if (p_Var13 == (__DataStorage *)0x0) goto LAB_100abbd18;
      if (lVar14 <= lVar23) {
        lVar23 = lVar14;
      }
      if (lVar23 == 0) goto LAB_100abbd18;
      iVar22 = (int)((ulong)p_Var12 >> 0x20);
      if (SBORROW4(iVar22,iVar10)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbee4);
        (*pcVar9)();
      }
      sVar20 = (size_t)(iVar22 - iVar10);
    }
  }
  else {
    if (uVar21 != 2) goto LAB_100abbd18;
    lVar14 = *(long *)(p_Var12 + 0x10);
    lVar23 = *(long *)(p_Var12 + 0x18);
    p_Var13 = p_Var12;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var12);
    p_Var15 = (__DataStorage *)0x0;
    if (p_Var13 != (__DataStorage *)0x0) {
      p_Var15 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var13);
      if (SBORROW8(lVar14,(long)p_Var15)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbedc);
        (*pcVar9)();
      }
      p_Var13 = p_Var13 + (lVar14 - (long)p_Var15);
    }
    lVar7 = lVar23 - lVar14;
    if (SBORROW8(lVar23,lVar14)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbed8);
      (*pcVar9)();
    }
    lVar14 = Foundation::__DataStorage::get__length
                       ((__DataStorage *)((ulong)p_Var19 & 0x3fffffffffffffff),p_Var15);
    if (p_Var13 == (__DataStorage *)0x0) goto LAB_100abbd18;
    if (lVar7 <= lVar14) {
      lVar14 = lVar7;
    }
    if (lVar14 == 0) goto LAB_100abbd18;
    sVar20 = *(long *)(p_Var12 + 0x18) - *(long *)(p_Var12 + 0x10);
    if (SBORROW8(*(long *)(p_Var12 + 0x18),*(long *)(p_Var12 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100abbc8c);
      (*pcVar9)();
    }
  }
  _fwrite(p_Var13,1,sVar20,pFVar25);
LAB_100abbd18:
  iVar10 = _ferror(pFVar25);
  puVar16 = (undefined1 *)CONCAT44(extraout_var,iVar10);
  if (iVar10 < 1) {
    FUN_10003bf2c(p_Var12,p_Var19);
    *param_1 = 0x2014b50;
    *(undefined2 *)(param_1 + 1) = 0x315;
    *(undefined8 *)((long)param_1 + 6) = uVar30;
    *(undefined2 *)((long)param_1 + 0xe) = uVar5;
    param_1[4] = uVar1;
    param_1[5] = uVar2;
    param_1[6] = iVar4;
    *(undefined2 *)(param_1 + 7) = uVar6;
    *(ushort *)((long)param_1 + 0x1e) = uVar26;
    param_1[8] = 0;
    *(undefined2 *)(param_1 + 9) = 0;
    param_1[10] = param_4;
    param_1[0xb] = uVar28;
    *(undefined8 *)(param_1 + 0xe) = uStack_238;
    *(undefined8 *)(param_1 + 0xc) = local_240;
    *(undefined **)(param_1 + 0x10) = puVar18;
    *(ulong *)(param_1 + 0x12) = uVar27;
    *(undefined8 *)(param_1 + 0x16) = 0xc000000000000000;
    *(undefined8 *)(param_1 + 0x14) = 0;
    *(undefined **)(param_1 + 0x18) = puVar29;
  }
  else {
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar16,0,0);
    *puVar16 = 1;
    _swift_willThrow();
    FUN_100abce14(&local_150);
    FUN_10003bf2c(p_Var12,p_Var19);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abbee8 | FUN_100abbee8 */

void FUN_100abbee8(undefined4 *param_1,undefined1 *param_2,ulong param_3,undefined8 param_4,
                  char param_5)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined2 uVar3;
  long lVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  bool bVar11;
  int iVar12;
  __DataStorage *p_Var13;
  __DataStorage *p_Var14;
  undefined4 extraout_var;
  long lVar16;
  __DataStorage *p_Var17;
  undefined4 extraout_var_00;
  __DataStorage *p_Var18;
  size_t sVar19;
  undefined1 uVar20;
  uint uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  long lVar28;
  long unaff_x20;
  ulong uVar29;
  FILE *pFVar30;
  ulong uVar31;
  undefined8 uVar32;
  ulong local_338;
  uint local_32c;
  __DataStorage local_318;
  undefined1 local_317;
  undefined1 local_316;
  undefined1 local_315;
  undefined1 local_314;
  undefined1 local_313;
  undefined1 local_312;
  undefined1 local_311;
  undefined1 local_310;
  undefined1 local_30f;
  undefined1 local_30e;
  undefined1 local_30d;
  undefined1 local_30c;
  undefined1 local_30b;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 uStack_2a8;
  undefined2 local_2a0;
  undefined2 local_29e;
  undefined4 local_29c;
  undefined4 uStack_298;
  undefined4 uStack_294;
  ulong local_290;
  ulong uStack_288;
  ulong local_280;
  ulong uStack_278;
  undefined8 local_270;
  ulong uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  ulong local_240;
  ulong uStack_238;
  ulong uStack_230;
  ulong uStack_228;
  undefined8 local_220;
  ulong uStack_218;
  __DataStorage *local_210;
  undefined8 uStack_208;
  undefined2 local_200;
  undefined2 local_1fe;
  undefined4 local_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  ulong uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined4 local_1b0;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong uStack_170;
  ulong uStack_168;
  undefined8 local_160;
  ulong uStack_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined4 local_140;
  undefined4 local_138;
  undefined2 local_134;
  undefined2 local_132;
  undefined2 local_130;
  undefined2 local_12e;
  undefined4 local_12c;
  undefined4 local_128;
  undefined2 local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  undefined8 uStack_d0;
  ulong uStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  long local_78;
  undefined1 *puVar15;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
  uStack_98 = puVar2[1];
  local_a0 = *puVar2;
  local_88 = puVar2[3];
  uStack_90 = puVar2[2];
  local_80 = puVar2[4];
  puVar2 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  if ((ulong)puVar2[9] >> 0x3c < 0xf) {
    uVar23 = puVar2[5];
    uVar31 = puVar2[6];
  }
  else {
    uVar31 = uStack_98 >> 0x20;
    uVar23 = uStack_98 >> 0x10 & 0xffff;
  }
  if ((uint)*(ushort *)(param_2 + 0x1e) + (uint)*(ushort *)(param_2 + 0x1c) >> 0x10 != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc76c);
    (*pcVar10)();
  }
  uVar25 = (uint)*(ushort *)(param_2 + 0x20) +
           ((uint)*(ushort *)(param_2 + 0x1e) + (uint)*(ushort *)(param_2 + 0x1c) & 0xffff);
  if ((uVar25 & 0xffff0000) != 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc770);
    (*pcVar10)();
  }
  uVar1 = ((ulong)uVar25 & 0xffff) + 0x2e;
  if (param_5 != '\0') {
    if (CARRY8(uVar31,uVar1)) {
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,param_2,0,0);
      uVar20 = 0xb;
    }
    else {
      if (uVar23 != 0xffffffffffffffff) {
        if (CARRY8(uVar31,uVar1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc778);
          (*pcVar10)();
        }
        uVar29 = uVar23 + 1;
        goto LAB_100abc000;
      }
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,param_2,0,0);
      uVar20 = 0xc;
    }
    *param_2 = uVar20;
    _swift_willThrow();
    goto LAB_100abc6a4;
  }
  bVar11 = uVar31 < uVar1;
  uVar1 = -uVar1;
  if (bVar11) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc774);
    (*pcVar10)();
  }
  uVar29 = uVar23 - 1;
  if (uVar23 == 0) {
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x100abbfec);
    (*pcVar10)();
  }
LAB_100abc000:
  uVar31 = uVar31 + uVar1;
  local_32c = (uint)uVar29;
  uVar25 = (uint)param_3;
  if (uVar31 < 0xffffffff) {
    uVar24 = (uint)uVar31;
    if (0xfffe < uVar29) {
      if (param_3 < 0xffffffff) goto LAB_100abc0e4;
      local_32c = 0xffff;
LAB_100abc0a4:
      uVar25 = 0xffffffff;
      local_338 = uVar31 & 0xffffffff;
      goto LAB_100abc0f4;
    }
    if (0xfffffffe < param_3) goto LAB_100abc0a4;
    p_Var14 = (__DataStorage *)&local_a0;
    p_Var18 = (__DataStorage *)&local_210;
    FUN_100abcbb8();
    uStack_198 = 0;
    local_1a0 = 0;
    uStack_188 = 0;
    uStack_190 = 0;
    uStack_178 = 0;
    local_180 = 0;
    uStack_168 = 0;
    uStack_170 = 0;
    local_160 = 0;
    uStack_158 = 0xf000000000000000;
    local_148 = 0;
    local_150 = 0;
    local_140 = 0;
LAB_100abc458:
    uVar9 = local_80;
    uVar8 = local_88;
    uVar27 = local_140;
    uVar32 = local_148;
    uVar5 = local_a0._4_2_;
    uVar6 = local_a0._6_2_;
    uVar7 = uStack_90._4_2_;
    local_138 = 0x6054b50;
    local_134 = local_a0._4_2_;
    local_132 = local_a0._6_2_;
    uVar3 = (undefined2)uVar29;
    local_124 = uStack_90._4_2_;
    local_120 = local_88;
    local_118 = local_80;
    local_130 = uVar3;
    local_12e = uVar3;
    local_12c = (int)uVar31;
    local_128 = (int)param_3;
    FUN_100acf2b4();
    pFVar30 = *(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile);
    uVar25 = (uint)((ulong)p_Var18 >> 0x20);
    uVar24 = uVar25 >> 0x1e;
    if (uVar25 >> 0x1e < 2) {
      if (uVar24 == 0) {
        uStack_208._0_6_ = SUB86(p_Var18,0);
        local_210 = p_Var14;
        if (((ulong)p_Var18 & 0xff000000000000) != 0) {
          sVar19 = (ulong)p_Var18 >> 0x30 & 0xff;
          p_Var13 = (__DataStorage *)&local_210;
LAB_100abc620:
          _fwrite(p_Var13,1,sVar19,pFVar30);
        }
      }
      else {
        iVar12 = (int)p_Var14;
        lVar28 = (long)iVar12;
        lVar16 = ((long)p_Var14 >> 0x20) - lVar28;
        if ((long)p_Var14 >> 0x20 < lVar28) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc78c);
          (*pcVar10)();
        }
        p_Var13 = p_Var14;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var14);
        if (p_Var13 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var13);
          if (SBORROW8(lVar28,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc798);
            (*pcVar10)();
          }
          p_Var13 = p_Var13 + (lVar28 - (long)p_Var17);
          lVar28 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var17);
          if (p_Var13 != (__DataStorage *)0x0) {
            if (lVar16 <= lVar28) {
              lVar28 = lVar16;
            }
            if (lVar28 != 0) {
              iVar22 = (int)((ulong)p_Var14 >> 0x20);
              if (SBORROW4(iVar22,iVar12)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc7a0);
                (*pcVar10)();
              }
              sVar19 = (size_t)(iVar22 - iVar12);
              goto LAB_100abc620;
            }
          }
        }
      }
    }
    else if (uVar24 == 2) {
      lVar16 = *(long *)(p_Var14 + 0x10);
      lVar28 = *(long *)(p_Var14 + 0x18);
      p_Var13 = p_Var14;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var14);
      p_Var17 = (__DataStorage *)0x0;
      if (p_Var13 != (__DataStorage *)0x0) {
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var13);
        if (SBORROW8(lVar16,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc794);
          (*pcVar10)();
        }
        p_Var13 = p_Var13 + (lVar16 - (long)p_Var17);
      }
      lVar4 = lVar28 - lVar16;
      if (SBORROW8(lVar28,lVar16)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc790);
        (*pcVar10)();
      }
      lVar16 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var17);
      if (p_Var13 != (__DataStorage *)0x0) {
        if (lVar4 <= lVar16) {
          lVar16 = lVar4;
        }
        if (lVar16 != 0) {
          sVar19 = *(long *)(p_Var14 + 0x18) - *(long *)(p_Var14 + 0x10);
          if (SBORROW8(*(long *)(p_Var14 + 0x18),*(long *)(p_Var14 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc5b8);
            (*pcVar10)();
          }
          goto LAB_100abc620;
        }
      }
    }
    iVar12 = _ferror(pFVar30);
    puVar15 = (undefined1 *)CONCAT44(extraout_var_00,iVar12);
    if (iVar12 < 1) {
      FUN_10003bf2c(p_Var14,p_Var18);
      *param_1 = 0x6054b50;
      *(undefined2 *)(param_1 + 1) = uVar5;
      *(undefined2 *)((long)param_1 + 6) = uVar6;
      *(undefined2 *)(param_1 + 2) = uVar3;
      *(undefined2 *)((long)param_1 + 10) = uVar3;
      param_1[3] = (int)uVar31;
      param_1[4] = (int)param_3;
      *(undefined2 *)(param_1 + 5) = uVar7;
      *(undefined8 *)(param_1 + 6) = uVar8;
      *(undefined8 *)(param_1 + 8) = uVar9;
      *(undefined8 *)(param_1 + 0xc) = uStack_198;
      *(undefined8 *)(param_1 + 10) = local_1a0;
      *(undefined8 *)(param_1 + 0x10) = uStack_188;
      *(undefined8 *)(param_1 + 0xe) = uStack_190;
      *(ulong *)(param_1 + 0x14) = uStack_178;
      *(ulong *)(param_1 + 0x12) = local_180;
      *(ulong *)(param_1 + 0x18) = uStack_168;
      *(ulong *)(param_1 + 0x16) = uStack_170;
      *(ulong *)(param_1 + 0x1c) = uStack_158;
      *(undefined8 *)(param_1 + 0x1a) = local_160;
      *(undefined8 *)(param_1 + 0x1e) = local_150;
      *(undefined8 *)(param_1 + 0x20) = uVar32;
      param_1[0x22] = uVar27;
      goto LAB_100abc6a4;
    }
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar15,0,0);
    *puVar15 = 1;
    _swift_willThrow();
    FUN_1000fb4c4(&local_1a0,&DAT_100ff82d0,&DAT_100c94208);
    FUN_100abcbf4(&local_138);
  }
  else {
    if (uVar29 < 0xffff) {
      if (0xfffffffe < param_3) {
        uVar25 = 0xffffffff;
      }
      local_338 = 0xffffffff;
    }
    else {
      uVar24 = 0xffffffff;
      if (param_3 < 0xffffffff) {
LAB_100abc0e4:
        local_338 = (ulong)uVar24;
        local_32c = 0xffff;
      }
      else {
        local_32c = 0xffff;
        local_338 = 0xffffffff;
        uVar25 = uVar24;
      }
    }
LAB_100abc0f4:
    uStack_1c8 = puVar2[9];
    local_1d0 = puVar2[8];
    uStack_1b8 = puVar2[0xb];
    local_1b0 = *(undefined4 *)(puVar2 + 0xc);
    uStack_208 = puVar2[1];
    local_210 = (__DataStorage *)*puVar2;
    uVar32 = puVar2[2];
    uStack_1f8 = (undefined4)puVar2[3];
    uStack_1f4 = (undefined4)((ulong)puVar2[3] >> 0x20);
    local_200 = (undefined2)uVar32;
    local_1fe = (undefined2)((ulong)uVar32 >> 0x10);
    local_1fc = (undefined4)((ulong)uVar32 >> 0x20);
    uStack_1e8 = puVar2[5];
    local_1f0 = puVar2[4];
    uStack_1d8 = puVar2[7];
    uStack_1e0 = puVar2[6];
    if (uStack_1c8 >> 0x3c < 0xf) {
      uStack_1c0._4_4_ = (undefined4)((ulong)puVar2[10] >> 0x20);
      local_270 = local_1d0;
      uStack_268 = uStack_1c8;
      uStack_2a8 = uStack_208;
      local_2a0 = local_200;
      local_29e = local_1fe;
      uVar27 = uStack_1c0._4_4_;
      uVar26 = local_1b0;
      local_29c = local_1fc;
      uStack_298 = uStack_1f8;
    }
    else {
      local_29c = 0;
      uStack_298 = 0;
      local_270 = 0;
      uStack_268 = 0xc000000000000000;
      uStack_2a8 = 0x2c;
      local_2a0 = 0x315;
      local_29e = 0x2d;
      uVar27 = 0;
      uVar26 = 1;
    }
    local_2b0 = 0x6064b50;
    local_260 = CONCAT44(uStack_2ac,0x6064b50);
    uStack_248 = CONCAT44(uStack_294,uStack_298);
    uStack_250 = CONCAT44(local_29c,CONCAT22(local_29e,local_2a0));
    local_110 = CONCAT44(uStack_2ac,0x6064b50);
    local_c0 = 0x7064b50;
    local_290 = uVar29;
    uStack_288 = uVar29;
    local_280 = uVar31;
    uStack_278 = param_3;
    uStack_258 = uStack_2a8;
    local_240 = uVar29;
    uStack_238 = uVar29;
    uStack_230 = uVar31;
    uStack_228 = param_3;
    local_220 = local_270;
    uStack_218 = uStack_268;
    uStack_1c0 = puVar2[10];
    uStack_108 = uStack_2a8;
    local_100 = uStack_250;
    uStack_f8 = uStack_248;
    uStack_f0 = uVar29;
    uStack_e8 = uVar29;
    local_e0 = uVar31;
    uStack_d8 = param_3;
    uStack_d0 = local_270;
    uStack_c8 = uStack_268;
    uStack_bc = uVar27;
    local_b8 = param_4;
    local_b0 = uVar26;
    FUN_100abcbb8(&local_a0,&local_318);
    p_Var14 = (__DataStorage *)&local_210;
    p_Var18 = &local_318;
    FUN_100abcc28();
    FUN_100accae0();
    pFVar30 = *(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile);
    uVar24 = (uint)((ulong)p_Var18 >> 0x20);
    uVar21 = uVar24 >> 0x1e;
    if (uVar24 >> 0x1e < 2) {
      if (uVar21 == 0) {
        local_318 = SUB81(p_Var14,0);
        local_317 = (undefined1)((ulong)p_Var14 >> 8);
        local_316 = (undefined1)((ulong)p_Var14 >> 0x10);
        local_315 = (undefined1)((ulong)p_Var14 >> 0x18);
        local_314 = (undefined1)((ulong)p_Var14 >> 0x20);
        local_313 = (undefined1)((ulong)p_Var14 >> 0x28);
        local_312 = (undefined1)((ulong)p_Var14 >> 0x30);
        local_311 = (undefined1)((ulong)p_Var14 >> 0x38);
        local_310 = SUB81(p_Var18,0);
        local_30f = (undefined1)((ulong)p_Var18 >> 8);
        local_30e = (undefined1)((ulong)p_Var18 >> 0x10);
        local_30d = (undefined1)((ulong)p_Var18 >> 0x18);
        local_30c = (undefined1)((ulong)p_Var18 >> 0x20);
        local_30b = (undefined1)((ulong)p_Var18 >> 0x28);
        if (((ulong)p_Var18 & 0xff000000000000) != 0) {
          sVar19 = (ulong)p_Var18 >> 0x30 & 0xff;
          p_Var13 = &local_318;
LAB_100abc350:
          _fwrite(p_Var13,1,sVar19,pFVar30);
        }
      }
      else {
        iVar12 = (int)p_Var14;
        lVar28 = (long)iVar12;
        lVar16 = ((long)p_Var14 >> 0x20) - lVar28;
        if ((long)p_Var14 >> 0x20 < lVar28) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc77c);
          (*pcVar10)();
        }
        p_Var13 = p_Var14;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var14);
        if (p_Var13 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        }
        else {
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var13);
          if (SBORROW8(lVar28,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc788);
            (*pcVar10)();
          }
          p_Var13 = p_Var13 + (lVar28 - (long)p_Var17);
          lVar28 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var17);
          if (p_Var13 != (__DataStorage *)0x0) {
            if (lVar16 <= lVar28) {
              lVar28 = lVar16;
            }
            if (lVar28 != 0) {
              iVar22 = (int)((ulong)p_Var14 >> 0x20);
              if (SBORROW4(iVar22,iVar12)) {
                    /* WARNING: Does not return */
                pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc79c);
                (*pcVar10)();
              }
              sVar19 = (size_t)(iVar22 - iVar12);
              goto LAB_100abc350;
            }
          }
        }
      }
    }
    else if (uVar21 == 2) {
      lVar16 = *(long *)(p_Var14 + 0x10);
      lVar28 = *(long *)(p_Var14 + 0x18);
      p_Var13 = p_Var14;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var14);
      p_Var17 = (__DataStorage *)0x0;
      if (p_Var13 != (__DataStorage *)0x0) {
        p_Var17 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var13);
        if (SBORROW8(lVar16,(long)p_Var17)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc784);
          (*pcVar10)();
        }
        p_Var13 = p_Var13 + (lVar16 - (long)p_Var17);
      }
      lVar4 = lVar28 - lVar16;
      if (SBORROW8(lVar28,lVar16)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc780);
        (*pcVar10)();
      }
      lVar16 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)((ulong)p_Var18 & 0x3fffffffffffffff),p_Var17);
      if (p_Var13 != (__DataStorage *)0x0) {
        if (lVar4 <= lVar16) {
          lVar16 = lVar4;
        }
        if (lVar16 != 0) {
          sVar19 = *(long *)(p_Var14 + 0x18) - *(long *)(p_Var14 + 0x10);
          if (SBORROW8(*(long *)(p_Var14 + 0x18),*(long *)(p_Var14 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100abc2f0);
            (*pcVar10)();
          }
          goto LAB_100abc350;
        }
      }
    }
    iVar12 = _ferror(pFVar30);
    puVar15 = (undefined1 *)CONCAT44(extraout_var,iVar12);
    if (iVar12 < 1) {
      FUN_10003bf2c();
      uStack_178 = uStack_238;
      local_180 = local_240;
      uStack_168 = uStack_228;
      uStack_170 = uStack_230;
      uStack_158 = uStack_218;
      local_160 = local_220;
      uStack_198 = uStack_258;
      local_1a0 = local_260;
      uStack_188 = uStack_248;
      uStack_190 = uStack_250;
      local_150 = CONCAT44(uVar27,0x7064b50);
      uVar29 = (ulong)local_32c;
      param_3 = (ulong)uVar25;
      uVar31 = local_338;
      local_148 = param_4;
      local_140 = uVar26;
      goto LAB_100abc458;
    }
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar15,0,0);
    *puVar15 = 1;
    _swift_willThrow();
    FUN_100abcbf4(&local_a0);
    FUN_100abcc78(&local_2b0);
  }
  FUN_10003bf2c(p_Var14,p_Var18);
LAB_100abc6a4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100abc7a4 | FUN_100abc7a4 */

void FUN_100abc7a4(__DataStorage *param_1,ulong param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  __DataStorage *p_Var5;
  long lVar6;
  __DataStorage *p_Var7;
  undefined4 extraout_var;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  FILE *pFVar12;
  long lVar13;
  __DataStorage local_80;
  undefined1 local_7f;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined1 local_7c;
  undefined1 local_7b;
  undefined1 local_7a;
  undefined1 local_79;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  long local_68;
  undefined1 *puVar8;
  
  p_Var5 = &local_80;
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pFVar12 = *(FILE **)(param_4 + _TtC13ZIPFoundation7Archive::archiveFile);
  uVar2 = (uint)(param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    iVar4 = (int)param_1;
    if (uVar10 == 0) {
      local_80 = SUB81(param_1,0);
      local_7f = (undefined1)((ulong)param_1 >> 8);
      local_7e = (undefined1)((ulong)param_1 >> 0x10);
      local_7d = (undefined1)((ulong)param_1 >> 0x18);
      local_7c = (undefined1)((ulong)param_1 >> 0x20);
      local_7b = (undefined1)((ulong)param_1 >> 0x28);
      local_7a = (undefined1)((ulong)param_1 >> 0x30);
      local_79 = (undefined1)((ulong)param_1 >> 0x38);
      local_78 = (undefined1)param_2;
      local_77 = (undefined1)(param_2 >> 8);
      local_76 = (undefined1)(param_2 >> 0x10);
      local_75 = (undefined1)(param_2 >> 0x18);
      local_74 = (undefined1)(param_2 >> 0x20);
      local_73 = (undefined1)(param_2 >> 0x28);
      if ((param_2 & 0xff000000000000) != 0) {
        sVar9 = param_2 >> 0x30 & 0xff;
LAB_100abc944:
        sVar9 = _fwrite(p_Var5,1,sVar9,pFVar12);
        goto LAB_100abc964;
      }
    }
    else {
      lVar13 = (long)iVar4;
      lVar6 = ((long)param_1 >> 0x20) - lVar13;
      if ((long)param_1 >> 0x20 < lVar13) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca10);
        (*pcVar3)();
      }
      p_Var5 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
      if (p_Var5 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
      }
      else {
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar13,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca1c);
          (*pcVar3)();
        }
        p_Var5 = p_Var5 + (lVar13 - (long)p_Var7);
        lVar13 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 != (__DataStorage *)0x0) {
          if (lVar6 <= lVar13) {
            lVar13 = lVar6;
          }
          if (lVar13 != 0) {
            iVar11 = (int)((ulong)param_1 >> 0x20);
            if (SBORROW4(iVar11,iVar4)) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca20);
              (*pcVar3)();
            }
            sVar9 = (size_t)(iVar11 - iVar4);
            goto LAB_100abc944;
          }
        }
      }
    }
  }
  else if (uVar10 == 2) {
    lVar6 = *(long *)(param_1 + 0x10);
    lVar13 = *(long *)(param_1 + 0x18);
    p_Var5 = param_1;
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
    p_Var7 = (__DataStorage *)0x0;
    if (p_Var5 != (__DataStorage *)0x0) {
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
      if (SBORROW8(lVar6,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca18);
        (*pcVar3)();
      }
      p_Var5 = p_Var5 + (lVar6 - (long)p_Var7);
    }
    lVar1 = lVar13 - lVar6;
    if (SBORROW8(lVar13,lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca14);
      (*pcVar3)();
    }
    lVar6 = Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
    if (p_Var5 != (__DataStorage *)0x0) {
      if (lVar1 <= lVar6) {
        lVar6 = lVar1;
      }
      if (lVar6 != 0) {
        sVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
        if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100abc8e0);
          (*pcVar3)();
        }
        goto LAB_100abc944;
      }
    }
  }
  sVar9 = 0;
LAB_100abc964:
  iVar4 = _ferror(pFVar12);
  puVar8 = (undefined1 *)CONCAT44(extraout_var,iVar4);
  if (iVar4 < 1) {
    _swift_beginAccess(param_3 + 0x10,&local_80,1,0);
    if (SCARRY8(*(long *)(param_3 + 0x10),sVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100abca0c);
      (*pcVar3)();
    }
    *(size_t *)(param_3 + 0x10) = *(long *)(param_3 + 0x10) + sVar9;
  }
  else {
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar8,0,0);
    *puVar8 = 1;
    _swift_willThrow();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100abca24 | FUN_100abca24 */

void FUN_100abca24(long param_1,ulong param_2,ID param_3,code *param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  ID IVar4;
  uint uVar5;
  int iVar6;
  long unaff_x21;
  ulong uVar7;
  
  if (param_3 == 0) {
    (*param_4)();
  }
  else {
    puVar3 = (undefined1 *)objc_stub::isCancelled(param_3);
    if ((int)puVar3 == 0) {
      (*param_4)();
      if (unaff_x21 == 0) {
        uVar1 = (uint)(param_2 >> 0x20);
        uVar5 = uVar1 >> 0x1e;
        if (uVar1 >> 0x1e < 2) {
          if (uVar5 == 0) {
            uVar7 = param_2 >> 0x30 & 0xff;
          }
          else {
            iVar6 = (int)((ulong)param_1 >> 0x20);
            if (SBORROW4(iVar6,(int)param_1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcb78);
              (*pcVar2)();
            }
            uVar7 = (ulong)(iVar6 - (int)param_1);
          }
        }
        else if (uVar5 == 2) {
          uVar7 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
          if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcb74);
            (*pcVar2)();
          }
        }
        else {
          uVar7 = 0;
        }
        IVar4 = objc_stub::completedUnitCount(param_3);
        if (SCARRY8(IVar4,uVar7)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcb70);
          (*pcVar2)();
        }
        objc_stub::setCompletedUnitCount_(param_3,IVar4 + uVar7);
      }
    }
    else {
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,puVar3,0,0);
      *puVar3 = 5;
      _swift_willThrow();
    }
  }
  return;
}



/* Address: 0x100abcb78 | FUN_100abcb78 */

void FUN_100abcb78(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff82c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c948f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c948f8,&DAT_100f31588);
  DAT_100ff82c8 = pTVar1;
  return;
}



/* Address: 0x100abcbb8 | FUN_100abcbb8 */

undefined8 FUN_100abcbb8(undefined8 param_1,undefined8 param_2)

{
  FUN_100ad393c(param_2,param_1);
  return param_2;
}



/* Address: 0x100abcbf4 | FUN_100abcbf4 */

undefined8 FUN_100abcbf4(undefined8 param_1)

{
  FUN_100ad3930();
  return param_1;
}



/* Address: 0x100abcc28 | FUN_100abcc28 */

undefined8 FUN_100abcc28(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff82d0;
  FUN_1000f7830(&DAT_100ff82d0,&DAT_100c94208);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100abcc78 | FUN_100abcc78 */

undefined8 FUN_100abcc78(undefined8 param_1)

{
  thunk_FUN_100acc830();
  return param_1;
}



/* Address: 0x100abccac | FUN_100abccac */

undefined8 FUN_100abccac(undefined8 param_1,undefined8 param_2)

{
  (**(code **)(*(long *)(PTR___type_metadata_for_Foundation_Data_100ea7300 + -8) + 0x10))
            (param_2,param_1);
  return param_2;
}



/* Address: 0x100abcce8 | FUN_100abcce8 */

void FUN_100abcce8(__DataStorage *param_1,ulong param_2)

{
  long lVar1;
  code *pcVar2;
  __DataStorage *p_Var3;
  ulong uVar4;
  RangeReference *pRVar5;
  long lVar6;
  long lVar7;
  __DataStorage *this;
  
  if (param_2 == 0) {
    _swift_release(param_1);
  }
  else if ((long)param_2 < 0xf) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcdd4);
      (*pcVar2)();
    }
    this = param_1;
    Foundation::__DataStorage::_get__bytes(param_1,param_1);
    if (param_1 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length(this,(__DataStorage *)0x0);
      lVar6 = 0;
      lVar7 = 0;
    }
    else {
      p_Var3 = (__DataStorage *)Foundation::__DataStorage::get__offset(this,param_1);
      if (SBORROW8(0,(long)p_Var3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcdd8);
        (*pcVar2)();
      }
      lVar1 = (long)param_1 - (long)p_Var3;
      uVar4 = Foundation::__DataStorage::get__length(this,p_Var3);
      if ((long)param_2 <= (long)uVar4) {
        uVar4 = param_2;
      }
      lVar6 = 0;
      if (lVar1 != 0) {
        lVar6 = lVar1;
      }
      lVar7 = 0;
      if (lVar1 != 0) {
        lVar7 = uVar4 + lVar1;
      }
    }
    FUN_100ad8f38(lVar6,lVar7);
    _swift_release(this);
  }
  else if (0x7ffffffe < param_2) {
    pRVar5 = Foundation::Data::RangeReference::typeMetadataAccessor();
    _swift_allocObject(pRVar5,0x20,7);
    *(undefined8 *)(pRVar5 + 0x10) = 0;
    *(ulong *)(pRVar5 + 0x18) = param_2;
  }
  return;
}



/* Address: 0x100abcdd8 | FUN_100abcdd8 */

undefined8 FUN_100abcdd8(undefined8 param_1,undefined8 param_2)

{
  FUN_100ade260(param_2,param_1);
  return param_2;
}



/* Address: 0x100abce14 | FUN_100abce14 */

undefined8 FUN_100abce14(undefined8 param_1)

{
  FUN_100ade224();
  return param_1;
}



/* Address: 0x100abce48 | FUN_100abce48 */

void FUN_100abce48(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100abce58 | FUN_100abce58 */

FILE * FUN_100abce58(char param_1)

{
  code *pcVar1;
  FILE *pFVar2;
  FILE *pFVar3;
  void *unaff_x20;
  
  _swift_retain();
  pcVar1 = (code *)0x0;
  if (param_1 != '\x01') {
    pcVar1 = FUN_100abcef0;
  }
  pFVar2 = _funopen(unaff_x20,(int *)FUN_100abcee4,(int *)pcVar1,(fpos_t *)thunk_FUN_100abcf84,
                    (int *)FUN_100abd074);
  if (pFVar2 == (FILE *)0x0) {
    pFVar3 = pFVar2;
    FUN_100abd828();
    _swift_allocError(&DAT_100f30be0,pFVar3,0,0);
    _swift_willThrow();
  }
  return pFVar2;
}



/* Address: 0x100abcee4 | FUN_100abcee4 */

void FUN_100abcee4(void)

{
  FUN_100abcefc();
  return;
}



/* Address: 0x100abcef0 | FUN_100abcef0 */

void FUN_100abcef0(void)

{
  FUN_100abcefc();
  return;
}



/* Address: 0x100abcefc | FUN_100abcefc */

long FUN_100abcefc(long param_1,long param_2,ulong param_3,code *param_4)

{
  code *pcVar1;
  long lVar2;
  
  lVar2 = 0;
  if ((param_1 != 0) && (param_2 != 0)) {
    _swift_retain();
    (*param_4)(param_2,param_2 + (param_3 & 0xffffffff));
    _swift_release(param_1);
    if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100abcf7c);
      (*pcVar1)();
    }
    lVar2 = param_2;
    if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100abcf80);
      (*pcVar1)();
    }
  }
  return lVar2;
}



/* Address: 0x100abcf80 | thunk_FUN_100abcf84 */

long thunk_FUN_100abcf84(long param_1,long param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    _swift_retain();
    if (param_3 == 2) {
      _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar1 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x20);
      uVar5 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar5 == 0) {
          uVar4 = *(ulong *)(param_1 + 0x18) >> 0x30 & 0xff;
        }
        else {
          iVar3 = (int)((ulong)lVar6 >> 0x20);
          if (SBORROW4(iVar3,(int)lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd074);
            (*pcVar2)();
          }
          uVar4 = (ulong)(iVar3 - (int)lVar6);
        }
      }
      else {
        uVar4 = 0;
        if ((uVar5 == 2) &&
           (uVar4 = *(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10),
           SBORROW8(*(long *)(lVar6 + 0x18),*(long *)(lVar6 + 0x10)))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd030);
          (*pcVar2)();
        }
      }
      lVar6 = uVar4 + param_2;
      if (SCARRY8(uVar4,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd070);
        (*pcVar2)();
      }
    }
    else if (param_3 == 1) {
      lVar6 = *(long *)(param_1 + 0x20) + param_2;
      if (SCARRY8(*(long *)(param_1 + 0x20),param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcfe4);
        (*pcVar2)();
      }
    }
    else {
      lVar6 = -1;
      if (param_3 == 0) {
        lVar6 = param_2;
      }
    }
    *(long *)(param_1 + 0x20) = lVar6;
    _swift_release(param_1);
  }
  return lVar6;
}



/* Address: 0x100abcf84 | FUN_100abcf84 */

long FUN_100abcf84(long param_1,long param_2,int param_3)

{
  uint uVar1;
  code *pcVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  undefined1 auStack_48 [24];
  
  if (param_1 == 0) {
    lVar6 = 0;
  }
  else {
    _swift_retain();
    if (param_3 == 2) {
      _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
      lVar6 = *(long *)(param_1 + 0x10);
      uVar1 = (uint)(*(ulong *)(param_1 + 0x18) >> 0x20);
      uVar5 = uVar1 >> 0x1e;
      if (uVar1 >> 0x1e < 2) {
        if (uVar5 == 0) {
          uVar4 = *(ulong *)(param_1 + 0x18) >> 0x30 & 0xff;
        }
        else {
          iVar3 = (int)((ulong)lVar6 >> 0x20);
          if (SBORROW4(iVar3,(int)lVar6)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd074);
            (*pcVar2)();
          }
          uVar4 = (ulong)(iVar3 - (int)lVar6);
        }
      }
      else {
        uVar4 = 0;
        if ((uVar5 == 2) &&
           (uVar4 = *(long *)(lVar6 + 0x18) - *(long *)(lVar6 + 0x10),
           SBORROW8(*(long *)(lVar6 + 0x18),*(long *)(lVar6 + 0x10)))) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd030);
          (*pcVar2)();
        }
      }
      lVar6 = uVar4 + param_2;
      if (SCARRY8(uVar4,param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abd070);
        (*pcVar2)();
      }
    }
    else if (param_3 == 1) {
      lVar6 = *(long *)(param_1 + 0x20) + param_2;
      if (SCARRY8(*(long *)(param_1 + 0x20),param_2)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abcfe4);
        (*pcVar2)();
      }
    }
    else {
      lVar6 = -1;
      if (param_3 == 0) {
        lVar6 = param_2;
      }
    }
    *(long *)(param_1 + 0x20) = lVar6;
    _swift_release(param_1);
  }
  return lVar6;
}



/* Address: 0x100abd074 | FUN_100abd074 */

undefined8 FUN_100abd074(long param_1)

{
  if (param_1 != 0) {
    _swift_release();
  }
  return 0;
}



/* Address: 0x100abd078 | FUN_100abd078 */

undefined8 FUN_100abd078(void)

{
  _swift_release();
  return 0;
}



/* Address: 0x100abd090 | FUN_100abd090 */

void FUN_100abd090(void)

{
  long unaff_x20;
  
  FUN_10003bf2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100abd0b4 | FUN_100abd0b4 */

undefined1  [16] FUN_100abd0b4(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined1 auStack_38 [24];
  
  lVar2 = *(long *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile);
  if (lVar2 == 0) {
    uVar1 = 0;
    uVar3 = 0xf000000000000000;
  }
  else {
    _swift_beginAccess(lVar2 + 0x10,auStack_38,0,0);
    uVar1 = *(undefined8 *)(lVar2 + 0x10);
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    FUN_1001037b4(uVar1,uVar3);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = uVar1;
  return auVar4;
}



/* Address: 0x100abd120 | thunk_FUN_100abd124 */

void thunk_FUN_100abd124(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8320 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94220,&DAT_100f30be0);
  DAT_100ff8320 = pTVar1;
  return;
}



/* Address: 0x100abd124 | FUN_100abd124 */

void FUN_100abd124(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8320 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94220;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94220,&DAT_100f30be0);
  DAT_100ff8320 = pTVar1;
  return;
}



/* Address: 0x100abd164 | FUN_100abd164 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100abd164(void)

{
  return ZEXT816(0x100ff8368);
}



/* Address: 0x100abd184 | FUN_100abd184 */

void FUN_100abd184(void)

{
  return;
}



/* Address: 0x100abd188 | FUN_100abd188 */

undefined1  [16] FUN_100abd188(void)

{
  return ZEXT816(0x100f30be0);
}



/* Address: 0x100abd198 | FUN_100abd198 */

long FUN_100abd198(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x20;
  long local_88;
  long lStack_80;
  long local_78;
  ulong uStack_70;
  undefined1 auStack_68 [24];
  
  lVar1 = 0;
  if (param_1 != 0) {
    lVar1 = param_2 - param_1;
  }
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  local_78 = *(long *)(unaff_x20 + 0x10);
  uStack_70 = *(ulong *)(unaff_x20 + 0x18);
  uVar3 = (uint)(uStack_70 >> 0x20);
  uVar9 = uVar3 >> 0x1e;
  iVar5 = (int)local_78;
  if (uVar3 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar12 = uStack_70 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)local_78 >> 0x20);
      if (SBORROW4(iVar10,iVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd350);
        (*pcVar4)();
      }
      uVar12 = (ulong)(iVar10 - iVar5);
    }
  }
  else {
    uVar12 = 0;
    if ((uVar9 == 2) &&
       (uVar12 = *(long *)(local_78 + 0x18) - *(long *)(local_78 + 0x10),
       SBORROW8(*(long *)(local_78 + 0x18),*(long *)(local_78 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd214);
      (*pcVar4)();
    }
  }
  lVar11 = *(long *)(unaff_x20 + 0x20);
  if (SBORROW8(uVar12,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd33c);
    (*pcVar4)();
  }
  lVar2 = uVar12 - lVar11;
  if (lVar1 <= (long)(uVar12 - lVar11)) {
    lVar2 = lVar1;
  }
  if (uVar9 < 2) {
    lVar13 = 0;
    if (uVar9 != 0) {
      lVar13 = (long)iVar5;
    }
  }
  else {
    lVar13 = 0;
    if (uVar9 == 2) {
      lVar13 = *(long *)(local_78 + 0x10);
    }
  }
  local_88 = lVar13 + lVar11;
  if (SCARRY8(lVar13,lVar11)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd340);
    (*pcVar4)();
  }
  lStack_80 = local_88 + lVar2;
  if (SCARRY8(local_88,lVar2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd344);
    (*pcVar4)();
  }
  if (lStack_80 < local_88) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd348);
    (*pcVar4)();
  }
  FUN_1001037b4();
  puVar6 = &DAT_100ff8420;
  FUN_1000f7830(&DAT_100ff8420,&DAT_100c94318);
  puVar7 = puVar6;
  FUN_100abd904();
  puVar8 = &DAT_100ff8430;
  FUN_100134584(&DAT_100ff8430,&DAT_100ff8420,&DAT_100c94318,
                PTR_Swift__Swift__Range<undefined>_>Swift__RangeExpression_100eac950);
  (extension_Foundation)::Foundation::DataProtocol::_copyBytes
            (param_1,lVar1,&local_88,PTR___type_metadata_for_Foundation_Data_100ea7300,
             PTR___type_metadata_for_Swift_UInt8_100eadcd0,puVar6,
             PTR___protocol_witness_table_for_Foundation_Data___Foundation_ContiguousBytes_in_Foundation_100ea72f0
             ,puVar7,puVar8);
  FUN_10003bf2c(local_78,uStack_70);
  if (SCARRY8(*(long *)(unaff_x20 + 0x20),lVar2)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100abd34c);
    (*pcVar4)();
  }
  *(long *)(unaff_x20 + 0x20) = *(long *)(unaff_x20 + 0x20) + lVar2;
  return lVar2;
}



/* Address: 0x100abd350 | FUN_100abd350 */

long FUN_100abd350(UnsafeRawBufferPointer param_1,undefined *param_2)

{
  Range<__int64> RVar1;
  long lVar2;
  ulong *puVar3;
  uint uVar4;
  code *pcVar5;
  Data DVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  Data DVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  int iVar17;
  long lVar18;
  ulong uVar19;
  long unaff_x20;
  undefined *local_b8;
  long lStack_b0;
  undefined *local_a0;
  undefined *local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  uint uVar16;
  
  DVar9.unknown = auStack_78;
  _swift_beginAccess(unaff_x20 + 0x10,DVar9.unknown,0,0);
  lVar14 = *(long *)(unaff_x20 + 0x10);
  uVar12 = *(ulong *)(unaff_x20 + 0x18);
  uVar4 = (uint)(uVar12 >> 0x20);
  uVar15 = uVar4 >> 0x1e;
  uVar16 = uVar4 >> 0x1e;
  iVar13 = (int)lVar14;
  iVar17 = (int)((ulong)lVar14 >> 0x20);
  if (uVar4 >> 0x1e < 2) {
    if (uVar15 != 0) {
      lVar18 = (long)iVar13;
      lVar11 = *(long *)(unaff_x20 + 0x20);
LAB_100abd3ec:
      if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7f8);
        (*pcVar5)();
      }
      uVar19 = (ulong)(iVar17 - iVar13);
      goto LAB_100abd424;
    }
LAB_100abd3cc:
    lVar11 = *(long *)(unaff_x20 + 0x20);
    if (uVar16 < 2) {
      lVar18 = 0;
      if (uVar15 == 0) {
        uVar19 = uVar12 >> 0x30 & 0xff;
        goto LAB_100abd424;
      }
      goto LAB_100abd3ec;
    }
    if (uVar15 != 3) {
      lVar18 = 0;
      goto LAB_100abd418;
    }
    if (lVar11 < 0) {
      lVar18 = 0;
      goto LAB_100abd42c;
    }
LAB_100abd544:
    if (0 < lVar11) {
      uVar12 = 0;
LAB_100abd568:
      DVar6.unknown = (undefined *)(lVar11 - uVar12);
      if (SBORROW8(lVar11,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7f4);
        (*pcVar5)();
      }
      FUN_100abd868();
      _swift_beginAccess(unaff_x20 + 0x10,&local_b8,0x21,0);
      Foundation::Data::append(DVar6,DVar9);
      _swift_endAccess(&local_b8);
      FUN_10003bf2c(DVar6.unknown,DVar9.unknown);
    }
  }
  else {
    if (uVar15 != 2) goto LAB_100abd3cc;
    lVar18 = *(long *)(lVar14 + 0x10);
    lVar11 = *(long *)(unaff_x20 + 0x20);
LAB_100abd418:
    uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
    if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7fc);
      (*pcVar5)();
    }
LAB_100abd424:
    if (lVar11 < (long)uVar19) {
LAB_100abd42c:
      lVar2 = 0;
      if (param_1.unknown != (undefined *)0x0) {
        lVar2 = (long)param_2 - (long)param_1.unknown;
      }
      if (SCARRY8(lVar11,lVar2)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7f0);
        (*pcVar5)();
      }
      if (uVar16 < 2) {
        if (uVar16 == 0) {
          uVar19 = uVar12 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd820);
            (*pcVar5)();
          }
          uVar19 = (ulong)(iVar17 - iVar13);
        }
joined_r0x000100abd490:
        if (lVar11 + lVar2 <= (long)uVar19) goto LAB_100abd494;
      }
      else {
        if (uVar16 == 2) {
          uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
          if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd81c);
            (*pcVar5)();
          }
          goto joined_r0x000100abd490;
        }
        if (lVar11 + lVar2 < 1) goto LAB_100abd544;
      }
      if (SCARRY8(lVar18,lVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd800);
        (*pcVar5)();
      }
      if (uVar16 < 2) {
        if (uVar16 == 0) {
          uVar12 = uVar12 >> 0x30 & 0xff;
        }
        else {
          if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd828);
            (*pcVar5)();
          }
          uVar12 = (ulong)(iVar17 - iVar13);
        }
      }
      else if (uVar16 == 2) {
        uVar12 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
        if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd544);
          (*pcVar5)();
        }
      }
      else {
        uVar12 = 0;
      }
      if (SCARRY8(lVar18,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd804);
        (*pcVar5)();
      }
      if ((long)(lVar18 + uVar12) < lVar18 + lVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd808);
        (*pcVar5)();
      }
      _swift_beginAccess(unaff_x20 + 0x10,&local_b8,0x21,0);
      Foundation::Data::_Representation::_replaceSubrange
                ((undefined *)(lVar18 + lVar11),lVar18 + uVar12,(_Representation)0x0,0);
      _swift_endAccess(&local_b8);
    }
    else {
LAB_100abd494:
      if (uVar16 == 2) {
        uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
        if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd818);
          (*pcVar5)();
        }
      }
      else if (uVar16 == 1) {
        if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd814);
          (*pcVar5)();
        }
        uVar19 = (ulong)(iVar17 - iVar13);
      }
      else {
        uVar19 = uVar12 >> 0x30 & 0xff;
      }
      if ((long)uVar19 < lVar11) {
        if (uVar15 == 2) {
          uVar12 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
          if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd564);
            (*pcVar5)();
          }
        }
        else if (uVar15 == 1) {
          if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd824);
            (*pcVar5)();
          }
          uVar12 = (ulong)(iVar17 - iVar13);
        }
        else {
          uVar12 = uVar12 >> 0x30 & 0xff;
        }
        goto LAB_100abd568;
      }
    }
  }
  puVar3 = (ulong *)(unaff_x20 + 0x20);
  uVar12 = *puVar3;
  lVar14 = *(long *)(unaff_x20 + 0x10);
  uVar4 = (uint)(*(ulong *)(unaff_x20 + 0x18) >> 0x20);
  iVar13 = (int)lVar14;
  if (uVar4 >> 0x1e < 2) {
    if (uVar4 >> 0x1e == 0) {
      uVar19 = *(ulong *)(unaff_x20 + 0x18) >> 0x30 & 0xff;
    }
    else {
      iVar17 = (int)((ulong)lVar14 >> 0x20);
      if (SBORROW4(iVar17,iVar13)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd810);
        (*pcVar5)();
      }
      uVar19 = (ulong)(iVar17 - iVar13);
    }
joined_r0x000100abd670:
    if (uVar12 != uVar19) {
      if (uVar4 >> 0x1e == 0) {
        lVar14 = 0;
      }
      else if (uVar4 >> 0x1e == 2) {
        lVar14 = *(long *)(lVar14 + 0x10);
      }
      else {
        lVar14 = (long)iVar13;
      }
LAB_100abd6e8:
      RVar1.unknown = (undefined *)(lVar14 + uVar12);
      if (SCARRY8(lVar14,uVar12)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7e4);
        (*pcVar5)();
      }
      lVar14 = 0;
      if (param_1.unknown != (undefined *)0x0) {
        lVar14 = (long)param_2 - (long)param_1.unknown;
      }
      if (SCARRY8((long)RVar1.unknown,lVar14)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7e8);
        (*pcVar5)();
      }
      if ((long)(RVar1.unknown + lVar14) < (long)RVar1.unknown) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7ec);
        (*pcVar5)();
      }
      _swift_beginAccess(unaff_x20 + 0x10,auStack_90,0x21,0);
      puVar10 = &DAT_100ff8410;
      FUN_1000f7830(&DAT_100ff8410,&DAT_100c94310);
      puVar7 = &DAT_100ff8418;
      local_a0 = puVar10;
      FUN_100134584(&DAT_100ff8418,&DAT_100ff8410,&DAT_100c94310,
                    PTR__Foundation__Swift__UnsafeBufferPointer<undefined>_>Foundation__ContiguousBytes_100ea7778
                   );
      ppuVar8 = &local_b8;
      local_b8 = param_1.unknown;
      lStack_b0 = lVar14;
      local_98 = puVar7;
      FUN_100004640(ppuVar8,puVar10);
      if (*ppuVar8 == (undefined *)0x0) {
        puVar10 = (undefined *)0x0;
      }
      else {
        puVar10 = ppuVar8[1];
      }
      Foundation::Data::_Representation::_replaceSubrange
                (RVar1,(__int64)(RVar1.unknown + lVar14),(_Representation)(__int8)*ppuVar8,puVar10);
      FUN_100004594(&local_b8);
      _swift_endAccess(auStack_90);
      goto LAB_100abd7a8;
    }
  }
  else {
    if (uVar4 >> 0x1e == 2) {
      uVar19 = *(long *)(lVar14 + 0x18) - *(long *)(lVar14 + 0x10);
      if (SBORROW8(*(long *)(lVar14 + 0x18),*(long *)(lVar14 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd80c);
        (*pcVar5)();
      }
      goto joined_r0x000100abd670;
    }
    if (uVar12 != 0) {
      lVar14 = 0;
      goto LAB_100abd6e8;
    }
  }
  _swift_beginAccess(unaff_x20 + 0x10,&local_b8,0x21,0);
  if ((param_1.unknown != (undefined *)0x0) && (param_2 != param_1.unknown)) {
    Foundation::Data::_Representation::append(param_1,(_Representation)(__int8)param_2);
  }
  _swift_endAccess(&local_b8);
  lVar14 = 0;
  if (param_1.unknown != (undefined *)0x0) {
    lVar14 = (long)param_2 - (long)param_1.unknown;
  }
LAB_100abd7a8:
  if (SCARRY8(*puVar3,lVar14)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100abd7e0);
    (*pcVar5)();
  }
  *puVar3 = *puVar3 + lVar14;
  return lVar14;
}



/* Address: 0x100abd828 | FUN_100abd828 */

void FUN_100abd828(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff8408 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94288;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94288,&DAT_100f30be0);
  DAT_100ff8408 = pTVar1;
  return;
}



/* Address: 0x100abd868 | FUN_100abd868 */

void FUN_100abd868(ulong param_1)

{
  code *pcVar1;
  __DataStorage *this;
  RangeReference *pRVar2;
  
  if (param_1 != 0) {
    if ((long)param_1 < 0xf) {
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100abd904);
        (*pcVar1)();
      }
    }
    else {
      this = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
      Foundation::__DataStorage::init(this,param_1);
      if (0x7ffffffe < param_1) {
        pRVar2 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar2,0x20,7);
        *(undefined8 *)(pRVar2 + 0x10) = 0;
        *(ulong *)(pRVar2 + 0x18) = param_1;
      }
    }
  }
  return;
}



/* Address: 0x100abd904 | FUN_100abd904 */

void FUN_100abd904(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8428 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100ea72e8;
  _swift_getWitnessTable
            (PTR_Foundation__Foundation__Data_>Foundation__DataProtocol_100ea72e8,
             PTR___type_metadata_for_Foundation_Data_100ea7300);
  DAT_100ff8428 = puVar1;
  return;
}



/* Address: 0x100abd944 | FUN_100abd944 */

void FUN_100abd944(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  
  if (*(ulong *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory + 0x48) >> 0x3c
      < 0xf) {
    uVar2 = *(ulong *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory + 0x38);
  }
  else {
    uVar2 = (ulong)*(uint *)(unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord +
                            0x10);
  }
  FUN_100adc4fc();
  if (param_1 <= uVar2) {
    if (-1 < (long)(uVar2 - param_1)) {
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100abd9b4);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100abd9b0);
  (*pcVar1)();
}



/* Address: 0x100abd9b4 | FUN_100abd9b4 */

void FUN_100abd9b4(long param_1)

{
  code *pcVar1;
  
  FUN_100adc5e0();
  if ((((uint)param_1 & 0xff) != 1) && (FUN_100adc7dc(), param_1 < 0)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100abd9f4);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100abd9f4 | FUN_100abd9f4 */

/* WARNING: Removing unreachable block (ram,0x000100abda18) */

void FUN_100abd9f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_100ae123c();
  if (((uint)uVar1 & 0xff) != 1) {
    FUN_100ae14f0(param_1);
  }
  return;
}



/* Address: 0x100abda5c | FUN_100abda5c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined *
FUN_100abda5c(undefined *param_1,undefined *param_2,long param_3,uint param_4,undefined4 param_5,
             undefined8 param_6)

{
  URL UVar1;
  Code CVar2;
  POSIXError PVar3;
  undefined *puVar4;
  URL UVar5;
  undefined7 extraout_var;
  Code CVar6;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  DVar7;
  char *pcVar8;
  FILE *pFVar9;
  undefined *puVar10;
  NSString *pNVar11;
  ID IVar12;
  POSIXError PVar13;
  code *pcVar14;
  undefined *puVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined8 unaff_x20;
  ulong uVar19;
  undefined *unaff_x21;
  long lVar20;
  long lVar21;
  long lVar22;
  undefined *self;
  long lVar23;
  ulong uVar24;
  String SVar25;
  Dictionary<String,(extension_in_Foundation):Foundation__BridgedStoredNSError_init(_:_A_Code,userInfo:_[Swift_String_:_Any])__>_A>
  local_180;
  long local_178;
  long local_170;
  undefined *local_168;
  undefined4 local_15c;
  undefined *local_158;
  undefined *local_150;
  uint local_144;
  long local_140;
  undefined8 local_138;
  undefined *local_118 [21];
  long local_70;
  undefined7 extraout_var_00;
  undefined4 extraout_var_01;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_15c = param_5;
  local_144 = param_4;
  local_138 = param_6;
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar22 = *(long *)(UVar1.unknown + -8);
  lVar21 = *(long *)(lVar22 + 0x40);
  lVar20 = (long)&local_180 - (lVar21 + 0xfU & 0xfffffffffffffff0);
  CVar2 = Foundation::CocoaError::Code::typeMetadataAccessor();
  puVar15 = (undefined *)
            (lVar20 - (*(long *)(*(long *)(CVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0))
  ;
  local_180.unknown = puVar15;
  local_168 = (undefined *)Foundation::CocoaError::typeMetadataAccessor();
  local_170 = *(long *)(local_168 + -8);
  lVar16 = (long)puVar15 - (*(long *)(local_170 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_178 = lVar16;
  PVar3 = Foundation::POSIXError::typeMetadataAccessor();
  lVar23 = *(long *)(PVar3.unknown + -8);
  puVar15 = (undefined *)(lVar16 - (*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_140 = param_3;
  if (param_3 < 1) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,PVar3.unknown,0,0);
    *PVar3.unknown = 6;
    _swift_willThrow();
    goto LAB_100abe21c;
  }
  puVar4 = &_OBJC_CLASS___NSFileManager;
  _objc_allocWithZone();
  UVar5.unknown = (undefined *)objc_stub::init(puVar4);
  local_158 = param_1;
  local_150 = UVar5.unknown;
  FUN_100adc5e0();
  if (((ulong)UVar5.unknown & 0xff) == 0) {
    CVar2.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar5);
    DVar7.unknown = local_180.unknown;
    CVar2.unknown._1_7_ = extraout_var;
    if (unaff_x21 == (undefined *)0x0) {
      if (CVar2.unknown._0_1_) {
        Foundation::CocoaError::Code::get_fileWriteFileExists(CVar2);
        puVar15 = &DAT_100ff8438;
        FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
        _swift_initStackObject();
        *(undefined8 *)(puVar15 + 0x18) = 2;
        *(undefined8 *)(puVar15 + 0x10) = 1;
        SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        *(String *)(puVar15 + 0x20) = SVar25;
        SVar25 = Foundation::URL::get_path((URL)SVar25.str);
        *(undefined **)(puVar15 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
        *(String *)(puVar15 + 0x30) = SVar25;
        FUN_100abfbb8(puVar15);
        _swift_setDeallocating(puVar15);
        FUN_1000fb4c4((String *)(puVar15 + 0x20),&DAT_100ff8440,&DAT_100c94328);
        FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                      PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                     );
        puVar15 = local_168;
        lVar16 = local_178;
        (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar7);
        Foundation::CocoaError::get__nsError((CocoaError)DVar7.unknown);
        _swift_willThrow();
LAB_100abdfd4:
        (**(code **)(local_170 + 8))(lVar16,puVar15);
        goto LAB_100abe21c;
      }
    }
    else {
      _swift_errorRelease(unaff_x21);
    }
    self = local_150;
    UVar1.unknown = param_2;
    FUN_100adecf8();
    SVar25 = Foundation::URL::get_path(UVar1);
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    puVar4 = self;
    _objc_retainAutorelease();
    pcVar8 = (char *)objc_stub::fileSystemRepresentationWithPath_((ID)puVar4,pNVar11);
    pFVar9 = _fopen(pcVar8,"wb+");
    puVar4 = local_158;
    if (pFVar9 == (FILE *)0x0) {
      PVar13.unknown._0_4_ = Darwin::get_errno();
      PVar13.unknown._4_4_ = extraout_var_01;
      SVar25 = Foundation::URL::get_path((URL)PVar13.unknown);
      FUN_100adebd4(puVar15,PVar13.unknown,SVar25.str,SVar25.bridgeObject);
      Foundation::POSIXError::get__nsError(PVar13);
      _swift_willThrow();
      (**(code **)(lVar23 + 8))(puVar15,PVar3.unknown);
      goto LAB_100abe21c;
    }
    puVar10 = local_158;
    FUN_100abe4ec(local_158,local_140,local_144 & 1,local_138,unaff_x20,pFVar9);
    _fclose(pFVar9);
  }
  else {
    if (((uint)UVar5.unknown & 0xff) == 1) {
      (**(code **)(lVar22 + 0x10))(lVar20,param_2,UVar1.unknown);
      uVar17 = (ulong)*(byte *)(lVar22 + 0x50);
      puVar15 = (undefined *)(uVar17 + 0x18 & (uVar17 ^ 0xffffffffffffffff));
      puVar4 = &DAT_100f30c90;
      _swift_allocObject(&DAT_100f30c90,puVar15 + lVar21,uVar17 | 7);
      self = local_150;
      *(undefined **)(puVar4 + 0x10) = local_150;
      (**(code **)(lVar22 + 0x20))(puVar15 + (long)puVar4,lVar20,UVar1.unknown);
      pcVar14 = FUN_100abfe74;
    }
    else {
      CVar6.unknown._0_1_ = Foundation::URL::_checkResourceIsReachable(UVar5);
      DVar7.unknown = local_180.unknown;
      CVar6.unknown._1_7_ = extraout_var_00;
      if (unaff_x21 == (undefined *)0x0) {
        if (CVar6.unknown._0_1_) {
          Foundation::CocoaError::Code::get_fileWriteFileExists(CVar6);
          puVar15 = &DAT_100ff8438;
          FUN_1000f7830(&DAT_100ff8438,&DAT_100c94320);
          _swift_initStackObject();
          *(undefined8 *)(puVar15 + 0x18) = 2;
          *(undefined8 *)(puVar15 + 0x10) = 1;
          SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar15 + 0x20) = SVar25;
          SVar25 = Foundation::URL::get_path((URL)SVar25.str);
          *(undefined **)(puVar15 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
          *(String *)(puVar15 + 0x30) = SVar25;
          FUN_100abfbb8(puVar15);
          _swift_setDeallocating(puVar15);
          FUN_1000fb4c4((String *)(puVar15 + 0x20),&DAT_100ff8440,&DAT_100c94328);
          FUN_100003a00(&DAT_100ff8448,PTR_typeMetadataAccessor_100ea6960,
                        PTR_Foundation__Foundation__CocoaError_>Foundation___BridgedStoredNSError_100ea6958
                       );
          puVar15 = local_168;
          lVar16 = local_178;
          (extension_Foundation)::Foundation::_BridgedStoredNSError::_init(DVar7);
          Foundation::CocoaError::get__nsError((CocoaError)DVar7.unknown);
          _swift_willThrow();
          goto LAB_100abdfd4;
        }
      }
      else {
        _swift_errorRelease(unaff_x21);
        unaff_x21 = (undefined *)0x0;
      }
      (**(code **)(lVar22 + 0x10))(lVar20,param_2,UVar1.unknown);
      uVar18 = (ulong)*(byte *)(lVar22 + 0x50);
      uVar19 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
      uVar17 = uVar19 + lVar21;
      uVar24 = uVar17 & 0xfffffffffffffff8;
      puVar4 = &DAT_100f30c68;
      _swift_allocObject(&DAT_100f30c68,uVar24 + 0x10,uVar18 | 7);
      (**(code **)(lVar22 + 0x20))(puVar4 + uVar19,lVar20,UVar1.unknown);
      puVar4[uVar17] = (byte)local_15c & 1;
      *(undefined **)(puVar4 + uVar24 + 8) = local_150;
      pcVar14 = FUN_100abf9a0;
      puVar15 = unaff_x21;
      self = local_150;
    }
    puVar10 = local_158;
    FUN_100abec90(local_158,local_140,local_144 & 1,local_138,pcVar14,puVar4);
    if (unaff_x21 != (undefined *)0x0) {
      _swift_release(puVar4);
      goto LAB_100abe21c;
    }
    _swift_release(puVar4);
    puVar4 = local_158;
  }
  FUN_100ae18b8();
  puVar15 = puVar4;
  FUN_100adc5e0();
  if (((uint)puVar15 & 0xff) < 2) {
    FUN_100ab7db0(0);
    FUN_100003a00(&DAT_100ff82a0,FUN_100ab7db0,&TargetProtocolConformanceDescriptor_100c94198);
    UVar1.unknown = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
    SVar25 = Foundation::URL::get_path(UVar1);
    pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    local_118[0] = (undefined *)0x0;
    IVar12 = objc_stub::setAttributes_ofItemAtPath_error_((ID)self,UVar1.unknown,pNVar11,local_118);
    puVar15 = local_118[0];
    if ((IVar12 & 1) == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      _swift_bridgeObjectRelease(puVar4);
      goto LAB_100abe21c;
    }
  }
  else {
    FUN_100ae0024(puVar4,param_2,0);
  }
  _swift_bridgeObjectRelease(puVar4);
  puVar15 = puVar10;
LAB_100abe21c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return puVar15;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abe2bc | FUN_100abe2bc */

void FUN_100abe2bc(__DataStorage *param_1,ulong param_2,FILE *param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  __DataStorage *p_Var5;
  long lVar6;
  __DataStorage *p_Var7;
  undefined4 extraout_var;
  size_t sVar9;
  uint uVar10;
  int iVar11;
  long lVar12;
  __DataStorage local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined1 local_60;
  undefined1 local_5f;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined1 local_5c;
  undefined1 local_5b;
  undefined1 local_5a;
  undefined1 local_59;
  long local_58;
  undefined1 *puVar8;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)(param_2 >> 0x20);
  uVar10 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar10 == 0) {
      local_66 = SUB81(param_1,0);
      local_65 = (undefined1)((ulong)param_1 >> 8);
      local_64 = (undefined1)((ulong)param_1 >> 0x10);
      local_63 = (undefined1)((ulong)param_1 >> 0x18);
      local_62 = (undefined1)((ulong)param_1 >> 0x20);
      local_61 = (undefined1)((ulong)param_1 >> 0x28);
      local_60 = (undefined1)((ulong)param_1 >> 0x30);
      local_5f = (undefined1)((ulong)param_1 >> 0x38);
      local_5e = (undefined1)param_2;
      local_5d = (undefined1)(param_2 >> 8);
      local_5c = (undefined1)(param_2 >> 0x10);
      local_5b = (undefined1)(param_2 >> 0x18);
      local_5a = (undefined1)(param_2 >> 0x20);
      local_59 = (undefined1)(param_2 >> 0x28);
      if ((param_2 & 0xff000000000000) == 0) goto LAB_100abe45c;
      sVar9 = param_2 >> 0x30 & 0xff;
      p_Var5 = &local_66;
    }
    else {
      iVar4 = (int)param_1;
      lVar12 = (long)iVar4;
      lVar6 = ((long)param_1 >> 0x20) - lVar12;
      if ((long)param_1 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe4d8);
        (*pcVar3)();
      }
      p_Var5 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
      if (p_Var5 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
        goto LAB_100abe45c;
      }
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
      if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe4e4);
        (*pcVar3)();
      }
      p_Var5 = p_Var5 + (lVar12 - (long)p_Var7);
      lVar12 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
      if (p_Var5 == (__DataStorage *)0x0) goto LAB_100abe45c;
      if (lVar6 <= lVar12) {
        lVar12 = lVar6;
      }
      if (lVar12 == 0) goto LAB_100abe45c;
      iVar11 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar11,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe4e8);
        (*pcVar3)();
      }
      sVar9 = (size_t)(iVar11 - iVar4);
    }
  }
  else {
    if (uVar10 != 2) goto LAB_100abe45c;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar12 = *(long *)(param_1 + 0x18);
    p_Var5 = param_1;
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
    p_Var7 = (__DataStorage *)0x0;
    if (p_Var5 != (__DataStorage *)0x0) {
      p_Var7 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
      if (SBORROW8(lVar6,(long)p_Var7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe4e0);
        (*pcVar3)();
      }
      p_Var5 = p_Var5 + (lVar6 - (long)p_Var7);
    }
    lVar1 = lVar12 - lVar6;
    if (SBORROW8(lVar12,lVar6)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe4dc);
      (*pcVar3)();
    }
    lVar6 = Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var7);
    if (p_Var5 == (__DataStorage *)0x0) goto LAB_100abe45c;
    if (lVar1 <= lVar6) {
      lVar6 = lVar1;
    }
    if (lVar6 == 0) goto LAB_100abe45c;
    sVar9 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100abe3e4);
      (*pcVar3)();
    }
  }
  _fwrite(p_Var5,1,sVar9,param_3);
LAB_100abe45c:
  iVar4 = _ferror(param_3);
  puVar8 = (undefined1 *)CONCAT44(extraout_var,iVar4);
  if (0 < iVar4) {
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,puVar8,0,0);
    *puVar8 = 1;
    _swift_willThrow();
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100abe4ec | FUN_100abe4ec */

undefined8 *
FUN_100abe4ec(undefined8 *param_1,undefined8 *param_2,uint param_3,ID param_4,long param_5,
             FILE *param_6)

{
  undefined1 *puVar1;
  ushort uVar2;
  long lVar3;
  uint uVar4;
  ushort uVar5;
  code *pcVar6;
  Deallocator DVar7;
  int iVar8;
  undefined7 extraout_var;
  undefined8 *puVar9;
  undefined4 extraout_var_00;
  undefined8 *puVar10;
  undefined4 extraout_var_01;
  __DataStorage *p_Var11;
  size_t sVar12;
  __DataStorage *p_Var13;
  long lVar14;
  __DataStorage *p_Var15;
  undefined1 *puVar16;
  __DataStorage *p_Var17;
  uint uVar18;
  long lVar19;
  long unaff_x21;
  FILE *pFVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  undefined8 *apuStack_270 [2];
  long lStack_260;
  uint local_254;
  undefined8 *local_250;
  uint local_244;
  __DataStorage *local_240;
  FILE *local_238;
  uint local_204;
  undefined1 local_200 [16];
  ID local_1f0;
  code *pcStack_1e8;
  undefined8 *local_1e0;
  undefined1 auStack_1d0 [36];
  char local_1ac;
  undefined1 auStack_1a8 [24];
  ulong local_190;
  char local_184;
  undefined1 auStack_180 [36];
  char local_15c;
  undefined1 auStack_158 [24];
  ulong local_140;
  char local_134;
  undefined1 auStack_130 [36];
  char local_10c;
  undefined1 auStack_108 [16];
  ulong local_f8;
  char local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar7 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar14 = CONCAT71(extraout_var,DVar7.value);
  lVar19 = *(long *)(lVar14 + -8);
  puVar10 = (undefined8 *)
            ((long)apuStack_270 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0));
  puVar9 = (undefined8 *)&DAT_100f30cb8;
  _swift_allocObject(&DAT_100f30cb8,0x18,7);
  puVar9[2] = param_6;
  if ((long)param_2 < 1) {
    puVar10 = puVar9;
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar10,0,0);
    *(undefined1 *)puVar10 = 6;
    _swift_willThrow();
    param_1 = param_2;
  }
  else {
    uStack_d8 = param_1[1];
    uVar23 = *param_1;
    uStack_c8 = param_1[3];
    local_d0 = param_1[2];
    uStack_b8 = param_1[5];
    local_c0 = param_1[4];
    uStack_a8 = param_1[7];
    local_b0 = param_1[6];
    uStack_98 = param_1[9];
    local_a0 = param_1[8];
    uStack_88 = param_1[0xb];
    local_90 = param_1[10];
    local_244 = (uint)*(ushort *)(param_1 + 0xe);
    local_240 = (__DataStorage *)(ulong)*(uint *)((long)param_1 + 0x7c);
    puVar21 = (undefined8 *)(ulong)*(ushort *)((long)param_1 + 0x84);
    uVar22 = (ulong)*(ushort *)((long)param_1 + 0x86);
    local_80 = param_1[0xc];
    local_e0._6_2_ = (ushort)((ulong)uVar23 >> 0x30);
    uVar5 = local_e0._6_2_;
    uVar2 = local_e0._6_2_ & 0xff;
    apuStack_270[1] = puVar10;
    lStack_260 = lVar14;
    local_254 = param_3;
    local_250 = param_2;
    local_e0 = uVar23;
    if ((((uVar2 < 0x2d) && (FUN_100adaf98(auStack_1d0), local_1ac == '\x01')) ||
        (FUN_100adaf98(auStack_1a8), local_184 == '\x01')) || (local_190 == 0)) {
      local_190 = uStack_b8 >> 0x20;
    }
    lVar14 = _TtC13ZIPFoundation7Archive::archiveFile;
    if (0xffffffffffffffe1 < local_190) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec58);
      (*pcVar6)();
    }
    if (CARRY8(local_190 + 0x1e,(ulong)puVar21)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec5c);
      (*pcVar6)();
    }
    if (CARRY8((ulong)(local_190 + 0x1e + (long)puVar21),uVar22)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec60);
      (*pcVar6)();
    }
    pFVar20 = *(FILE **)(param_5 + _TtC13ZIPFoundation7Archive::archiveFile);
    local_238 = param_6;
    if ((((uVar5 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_180), local_15c == '\x01')) ||
       ((FUN_100adaf98(auStack_158), local_134 == '\x01' || (local_140 == 0)))) {
      local_140 = uStack_b8 >> 0x20;
    }
    if (0xffffffffffffffe1 < local_140) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec64);
      (*pcVar6)();
    }
    puVar16 = (undefined1 *)(local_140 + 0x1e + (long)puVar21);
    if (CARRY8(local_140 + 0x1e,(ulong)puVar21)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec68);
      (*pcVar6)();
    }
    puVar1 = puVar16 + uVar22;
    if (CARRY8((ulong)puVar16,uVar22)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec6c);
      (*pcVar6)();
    }
    if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec70);
      (*pcVar6)();
    }
    iVar8 = _fseeko(pFVar20,(off_t)puVar1,0);
    puVar16 = (undefined1 *)CONCAT44(extraout_var_00,iVar8);
    if (param_4 != 0) {
      FUN_100adc5e0();
      if (((uint)puVar16 & 0xff) == 1) {
        puVar16 = &DAT_00000001;
      }
      else {
        FUN_100adc7dc();
        if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec74);
          (*pcVar6)();
        }
      }
      puVar16 = (undefined1 *)objc_stub::setTotalUnitCount_(param_4,puVar16);
    }
    FUN_100adc5e0();
    p_Var17 = local_240;
    if (((ulong)puVar16 & 0xff) == 0) {
      if (local_244 == 0) {
        FUN_100ab8f38(param_1,local_250,local_254 & 1,param_4,param_5,local_238);
        _swift_release(puVar9);
        goto LAB_100abe9e0;
      }
      if (local_244 == 8) {
        if ((((uVar5 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_130), local_10c == '\x01')) ||
           ((FUN_100adaf98(auStack_108), local_e4 == '\x01' || (local_f8 == 0)))) {
          local_f8 = local_d0 >> 0x20;
        }
        else if ((long)local_f8 < 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100abe800);
          (*pcVar6)();
        }
        pcStack_1e8 = FUN_100abff14;
        param_1 = (undefined8 *)&DAT_00000001;
        local_1f0 = param_4;
        local_1e0 = puVar9;
        FUN_100ad4034(1,local_f8,local_250,local_254 & 1,FUN_100abff6c,param_5,FUN_100abff80,
                      local_200);
        _swift_release(puVar9);
        goto LAB_100abe9e0;
      }
      FUN_100ab8c74();
      _swift_allocError(&DAT_100f31130,puVar16,0,0);
      *puVar16 = 3;
LAB_100abe9d0:
      _swift_willThrow();
      param_1 = puVar21;
    }
    else if (((uint)puVar16 & 0xff) == 1) {
      iVar8 = _ferror(local_238);
      puVar16 = (undefined1 *)CONCAT44(extraout_var_01,iVar8);
      if (iVar8 < 1) {
        if (param_4 == 0) {
          _swift_release(puVar9);
          param_1 = (undefined8 *)0x0;
        }
        else {
          FUN_100adc5e0();
          if (((uint)puVar16 & 0xff) == 1) {
            puVar16 = &DAT_00000001;
          }
          else {
            FUN_100adc7dc();
            if ((long)puVar16 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec78);
              (*pcVar6)();
            }
          }
          objc_stub::setCompletedUnitCount_(param_4,puVar16);
          _swift_release(puVar9);
          param_1 = (undefined8 *)0x0;
        }
        goto LAB_100abe9e0;
      }
      FUN_100abcb78();
      _swift_allocError(&DAT_100f31588,puVar16,0,0);
      *puVar16 = 1;
      _swift_willThrow();
      param_1 = puVar9;
    }
    else {
      pFVar20 = *(FILE **)(param_5 + lVar14);
      p_Var11 = local_240;
      _swift_slowAlloc(local_240,0xffffffffffffffff);
      sVar12 = _fread(p_Var11,1,(size_t)p_Var17,pFVar20);
      iVar8 = _ferror(pFVar20);
      lVar14 = lStack_260;
      puVar10 = apuStack_270[1];
      if (0 < iVar8) {
        _swift_slowDealloc(p_Var11,0xffffffffffffffff,0xffffffffffffffff);
        FUN_100abcb78();
        _swift_allocError(&DAT_100f31588,p_Var11,0,0);
        *p_Var11 = (__DataStorage)0x0;
        goto LAB_100abe9d0;
      }
      *apuStack_270[1] = FUN_10094a398;
      puVar10[1] = 0;
      (**(code **)(lVar19 + 0x68))
                (puVar10,*(undefined4 *)
                          PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
                 ,lVar14);
      FUN_100abfa10(p_Var11,sVar12,puVar10);
      uVar4 = (uint)(sVar12 >> 0x20);
      uVar18 = uVar4 >> 0x1e;
      if (uVar4 >> 0x1e < 2) {
        if (uVar18 != 0) {
          lVar19 = (long)(int)p_Var11;
          lVar14 = ((long)p_Var11 >> 0x20) - lVar19;
          if ((long)p_Var11 >> 0x20 < lVar19) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec7c);
            (*pcVar6)();
          }
          p_Var15 = p_Var11;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var11);
          if (p_Var15 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),(__DataStorage *)0x0);
            p_Var17 = (__DataStorage *)0x0;
            p_Var13 = (__DataStorage *)0x0;
          }
          else {
            p_Var17 = (__DataStorage *)
                      Foundation::__DataStorage::get__offset
                                ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var15);
            if (SBORROW8(lVar19,(long)p_Var17)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec88);
              (*pcVar6)();
            }
            p_Var15 = p_Var15 + (lVar19 - (long)p_Var17);
            lVar19 = Foundation::__DataStorage::get__length
                               ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var17);
            if (lVar14 <= lVar19) {
              lVar19 = lVar14;
            }
            p_Var17 = (__DataStorage *)0x0;
            if (p_Var15 != (__DataStorage *)0x0) {
              p_Var17 = p_Var15;
            }
            p_Var13 = (__DataStorage *)0x0;
            if (p_Var15 != (__DataStorage *)0x0) {
              p_Var13 = p_Var15 + lVar19;
            }
          }
          goto LAB_100abebc8;
        }
        local_200[0] = SUB81(p_Var11,0);
        local_200[1] = (undefined1)((ulong)p_Var11 >> 8);
        local_200[2] = (undefined1)((ulong)p_Var11 >> 0x10);
        local_200[3] = (undefined1)((ulong)p_Var11 >> 0x18);
        local_200[4] = (undefined1)((ulong)p_Var11 >> 0x20);
        local_200[5] = (undefined1)((ulong)p_Var11 >> 0x28);
        local_200[6] = (undefined1)((ulong)p_Var11 >> 0x30);
        local_200[7] = (undefined1)((ulong)p_Var11 >> 0x38);
        local_200[8] = (undefined1)sVar12;
        local_200[9] = (undefined1)(sVar12 >> 8);
        local_200[10] = (undefined1)(sVar12 >> 0x10);
        local_200[0xb] = (undefined1)(sVar12 >> 0x18);
        local_200[0xc] = (undefined1)(sVar12 >> 0x20);
        local_200[0xd] = (undefined1)(sVar12 >> 0x28);
        puVar16 = local_200 + (sVar12 >> 0x30 & 0xff);
LAB_100abeb80:
        FUN_100ad3f98(&local_204,local_200,puVar16,p_Var11,sVar12,0);
        pFVar20 = local_238;
      }
      else {
        if (uVar18 != 2) {
          local_200[8] = 0;
          local_200[9] = 0;
          local_200[10] = 0;
          local_200[0xb] = 0;
          local_200[0xc] = 0;
          local_200[0xd] = 0;
          local_200[0] = 0;
          local_200[1] = 0;
          local_200[2] = 0;
          local_200[3] = 0;
          local_200[4] = 0;
          local_200[5] = 0;
          local_200[6] = 0;
          local_200[7] = 0;
          puVar16 = local_200;
          goto LAB_100abeb80;
        }
        lVar14 = *(long *)(p_Var11 + 0x10);
        lVar19 = *(long *)(p_Var11 + 0x18);
        p_Var17 = p_Var11;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var11);
        p_Var13 = (__DataStorage *)0x0;
        if (p_Var17 != (__DataStorage *)0x0) {
          p_Var13 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var17);
          if (SBORROW8(lVar14,(long)p_Var13)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec84);
            (*pcVar6)();
          }
          p_Var17 = p_Var17 + (lVar14 - (long)p_Var13);
        }
        lVar3 = lVar19 - lVar14;
        if (SBORROW8(lVar19,lVar14)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec80);
          (*pcVar6)();
        }
        lVar14 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(sVar12 & 0x3fffffffffffffff),p_Var13);
        if (p_Var17 == (__DataStorage *)0x0) {
          p_Var13 = (__DataStorage *)0x0;
        }
        else {
          if (lVar3 <= lVar14) {
            lVar14 = lVar3;
          }
          p_Var13 = p_Var17 + lVar14;
        }
LAB_100abebc8:
        pFVar20 = local_238;
        FUN_100ad3f98(local_200,p_Var17,p_Var13,p_Var11,sVar12,0);
        local_204 = CONCAT13(local_200[3],CONCAT12(local_200[2],CONCAT11(local_200[1],local_200[0]))
                            );
      }
      param_1 = (undefined8 *)(ulong)local_204;
      p_Var17 = p_Var11;
      FUN_100abe2bc(p_Var11,sVar12,pFVar20);
      if (unaff_x21 == 0) {
        if (param_4 != 0) {
          FUN_100adc5e0();
          if (((uint)p_Var17 & 0xff) == 1) {
            p_Var17 = (__DataStorage *)&DAT_00000001;
          }
          else {
            FUN_100adc7dc();
            if ((long)p_Var17 < 0) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100abec8c);
              (*pcVar6)();
            }
          }
          objc_stub::setCompletedUnitCount_(param_4,p_Var17);
        }
        FUN_10003bf2c(p_Var11,sVar12);
        _swift_release(puVar9);
        goto LAB_100abe9e0;
      }
      FUN_10003bf2c(p_Var11,sVar12);
    }
  }
  _swift_release(puVar9);
LAB_100abe9e0:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}



/* Address: 0x100abec90 | FUN_100abec90 */

__DataStorage *
FUN_100abec90(__DataStorage *param_1,long param_2,uint param_3,ID param_4,__DataStorage *param_5,
             undefined8 param_6)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  long lVar5;
  ushort uVar6;
  code *pcVar7;
  Deallocator DVar8;
  int iVar9;
  undefined7 extraout_var;
  undefined4 extraout_var_00;
  __DataStorage *p_Var10;
  size_t sVar11;
  __DataStorage *p_Var12;
  undefined1 *puVar13;
  __DataStorage *p_Var14;
  undefined1 uVar15;
  uint uVar16;
  undefined8 *puVar17;
  long lVar18;
  long unaff_x20;
  long unaff_x21;
  __DataStorage *p_Var19;
  FILE *pFVar20;
  long lVar21;
  ulong uVar22;
  undefined8 uVar23;
  long alStack_270 [2];
  undefined8 *local_260;
  undefined1 *local_258;
  uint local_24c;
  long local_248;
  uint local_23c;
  __DataStorage *local_238;
  uint local_204;
  undefined1 local_200 [16];
  ID local_1f0;
  __DataStorage *p_Stack_1e8;
  undefined8 local_1e0;
  undefined1 auStack_1d0 [36];
  char local_1ac;
  undefined1 auStack_1a8 [24];
  ulong local_190;
  char local_184;
  undefined1 auStack_180 [36];
  char local_15c;
  undefined1 auStack_158 [24];
  ulong local_140;
  char local_134;
  undefined1 auStack_130 [36];
  char local_10c;
  undefined1 auStack_108 [16];
  ulong local_f8;
  char local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar8 = Foundation::Data::Deallocator::typeMetadataAccessor();
  puVar13 = (undefined1 *)CONCAT71(extraout_var,DVar8.value);
  lVar18 = *(long *)(puVar13 + -8);
  puVar17 = (undefined8 *)
            ((long)alStack_270 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0));
  if (param_2 < 1) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,puVar13,0,0);
    uVar15 = 6;
    p_Var14 = param_5;
LAB_100abee98:
    *puVar13 = uVar15;
LAB_100abefc0:
    _swift_willThrow();
    p_Var19 = p_Var14;
    goto LAB_100abefc8;
  }
  uStack_d8 = *(undefined8 *)(param_1 + 8);
  uVar23 = *(undefined8 *)param_1;
  uStack_c8 = *(undefined8 *)(param_1 + 0x18);
  local_d0 = *(ulong *)(param_1 + 0x10);
  uStack_b8 = *(ulong *)(param_1 + 0x28);
  local_c0 = *(undefined8 *)(param_1 + 0x20);
  uStack_a8 = *(undefined8 *)(param_1 + 0x38);
  local_b0 = *(undefined8 *)(param_1 + 0x30);
  uStack_98 = *(undefined8 *)(param_1 + 0x48);
  local_a0 = *(undefined8 *)(param_1 + 0x40);
  uStack_88 = *(undefined8 *)(param_1 + 0x58);
  local_90 = *(undefined8 *)(param_1 + 0x50);
  uVar4 = *(ushort *)(param_1 + 0x70);
  uVar3 = *(uint *)(param_1 + 0x7c);
  uVar22 = (ulong)*(ushort *)(param_1 + 0x84);
  p_Var19 = (__DataStorage *)(ulong)*(ushort *)(param_1 + 0x86);
  local_80 = *(undefined8 *)(param_1 + 0x60);
  local_e0._6_2_ = (ushort)((ulong)uVar23 >> 0x30);
  uVar6 = local_e0._6_2_;
  uVar2 = local_e0._6_2_ & 0xff;
  alStack_270[1] = lVar18;
  local_260 = puVar17;
  local_258 = puVar13;
  local_24c = param_3;
  local_248 = param_2;
  local_e0 = uVar23;
  if ((((uVar2 < 0x2d) && (FUN_100adaf98(auStack_1d0), local_1ac == '\x01')) ||
      (FUN_100adaf98(auStack_1a8), local_184 == '\x01')) || (local_190 == 0)) {
    local_190 = uStack_b8 >> 0x20;
  }
  lVar18 = _TtC13ZIPFoundation7Archive::archiveFile;
  if (0xffffffffffffffe1 < local_190) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf358);
    (*pcVar7)();
  }
  if (CARRY8(local_190 + 0x1e,uVar22)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf35c);
    (*pcVar7)();
  }
  if (CARRY8(local_190 + 0x1e + uVar22,(ulong)p_Var19)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf360);
    (*pcVar7)();
  }
  local_23c = (uint)uVar4;
  pFVar20 = *(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile);
  local_238 = (__DataStorage *)(ulong)uVar3;
  if ((((uVar6 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_180), local_15c == '\x01')) ||
     ((FUN_100adaf98(auStack_158), local_134 == '\x01' || (local_140 == 0)))) {
    local_140 = uStack_b8 >> 0x20;
  }
  if (0xffffffffffffffe1 < local_140) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf364);
    (*pcVar7)();
  }
  uVar1 = local_140 + 0x1e + uVar22;
  if (CARRY8(local_140 + 0x1e,uVar22)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf368);
    (*pcVar7)();
  }
  if (CARRY8(uVar1,(ulong)p_Var19)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf36c);
    (*pcVar7)();
  }
  if ((long)(p_Var19 + uVar1) < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf370);
    (*pcVar7)();
  }
  iVar9 = _fseeko(pFVar20,(off_t)(p_Var19 + uVar1),0);
  puVar13 = (undefined1 *)CONCAT44(extraout_var_00,iVar9);
  if (param_4 != 0) {
    FUN_100adc5e0();
    if (((uint)puVar13 & 0xff) == 1) {
      puVar13 = &DAT_00000001;
    }
    else {
      FUN_100adc7dc();
      if ((long)puVar13 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf374);
        (*pcVar7)();
      }
    }
    puVar13 = (undefined1 *)objc_stub::setTotalUnitCount_(param_4,puVar13);
  }
  FUN_100adc5e0();
  p_Var14 = local_238;
  if (((ulong)puVar13 & 0xff) == 0) {
    if (local_23c == 8) {
      if ((((uVar6 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_130), local_10c == '\x01')) ||
         ((FUN_100adaf98(auStack_108), local_e4 == '\x01' || (local_f8 == 0)))) {
        local_f8 = local_d0 >> 0x20;
      }
      else if ((long)local_f8 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf128);
        (*pcVar7)();
      }
      param_1 = (__DataStorage *)&DAT_00000001;
      local_1f0 = param_4;
      p_Stack_1e8 = param_5;
      local_1e0 = param_6;
      FUN_100ad4034(1,local_f8,local_248,local_24c & 1,FUN_100abfed0,unaff_x20,FUN_100abfee8,
                    local_200);
    }
    else {
      if (local_23c != 0) {
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,puVar13,0,0);
        uVar15 = 3;
        p_Var14 = p_Var19;
        goto LAB_100abee98;
      }
      FUN_100ab97bc(param_1,local_248,local_24c & 1,param_4,param_5,param_6);
    }
    if (unaff_x21 == 0) {
      p_Var19 = param_1;
    }
    goto LAB_100abefc8;
  }
  if (((uint)puVar13 & 0xff) == 1) {
    lVar18 = 0;
    (*(code *)param_5)(0,0xc000000000000000);
    if (unaff_x21 == 0) {
      if (param_4 == 0) {
        p_Var19 = (__DataStorage *)0x0;
      }
      else {
        FUN_100adc5e0();
        if (((uint)lVar18 & 0xff) == 1) {
          lVar18 = 1;
        }
        else {
          FUN_100adc7dc();
          if (lVar18 < 0) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf378);
            (*pcVar7)();
          }
        }
        objc_stub::setCompletedUnitCount_(param_4,lVar18);
        p_Var19 = (__DataStorage *)0x0;
      }
    }
    goto LAB_100abefc8;
  }
  pFVar20 = *(FILE **)(unaff_x20 + lVar18);
  p_Var10 = local_238;
  _swift_slowAlloc(local_238,0xffffffffffffffff);
  sVar11 = _fread(p_Var10,1,(size_t)p_Var14,pFVar20);
  iVar9 = _ferror(pFVar20);
  puVar13 = local_258;
  puVar17 = local_260;
  if (0 < iVar9) {
    _swift_slowDealloc(p_Var10,0xffffffffffffffff,0xffffffffffffffff);
    FUN_100abcb78();
    _swift_allocError(&DAT_100f31588,p_Var10,0,0);
    *p_Var10 = (__DataStorage)0x0;
    goto LAB_100abefc0;
  }
  *local_260 = FUN_10094a398;
  puVar17[1] = 0;
  (**(code **)(alStack_270[1] + 0x68))
            (puVar17,*(undefined4 *)
                      PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
             ,puVar13);
  FUN_100abfa10(p_Var10,sVar11,puVar17);
  uVar3 = (uint)(sVar11 >> 0x20);
  uVar16 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar16 == 0) {
      local_200[0] = SUB81(p_Var10,0);
      local_200[1] = (undefined1)((ulong)p_Var10 >> 8);
      local_200[2] = (undefined1)((ulong)p_Var10 >> 0x10);
      local_200[3] = (undefined1)((ulong)p_Var10 >> 0x18);
      local_200[4] = (undefined1)((ulong)p_Var10 >> 0x20);
      local_200[5] = (undefined1)((ulong)p_Var10 >> 0x28);
      local_200[6] = (undefined1)((ulong)p_Var10 >> 0x30);
      local_200[7] = (undefined1)((ulong)p_Var10 >> 0x38);
      local_200[8] = (undefined1)sVar11;
      local_200[9] = (undefined1)(sVar11 >> 8);
      local_200[10] = (undefined1)(sVar11 >> 0x10);
      local_200[0xb] = (undefined1)(sVar11 >> 0x18);
      local_200[0xc] = (undefined1)(sVar11 >> 0x20);
      local_200[0xd] = (undefined1)(sVar11 >> 0x28);
      puVar13 = local_200 + (sVar11 >> 0x30 & 0xff);
      goto LAB_100abf28c;
    }
    lVar21 = (long)(int)p_Var10;
    lVar18 = ((long)p_Var10 >> 0x20) - lVar21;
    if ((long)p_Var10 >> 0x20 < lVar21) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf37c);
      (*pcVar7)();
    }
    p_Var12 = p_Var10;
    Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var10);
    if (p_Var12 == (__DataStorage *)0x0) {
      Foundation::__DataStorage::get__length
                ((__DataStorage *)(sVar11 & 0x3fffffffffffffff),(__DataStorage *)0x0);
      p_Var14 = (__DataStorage *)0x0;
      p_Var19 = (__DataStorage *)0x0;
    }
    else {
      p_Var14 = (__DataStorage *)
                Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var12);
      if (SBORROW8(lVar21,(long)p_Var14)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf388);
        (*pcVar7)();
      }
      p_Var12 = p_Var12 + (lVar21 - (long)p_Var14);
      lVar21 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var14);
      if (lVar18 <= lVar21) {
        lVar21 = lVar18;
      }
      p_Var14 = (__DataStorage *)0x0;
      if (p_Var12 != (__DataStorage *)0x0) {
        p_Var14 = p_Var12;
      }
      p_Var19 = (__DataStorage *)0x0;
      if (p_Var12 != (__DataStorage *)0x0) {
        p_Var19 = p_Var12 + lVar21;
      }
    }
LAB_100abf2cc:
    FUN_100ad3f98(local_200,p_Var14,p_Var19,p_Var10,sVar11,0);
    local_204 = CONCAT13(local_200[3],CONCAT12(local_200[2],CONCAT11(local_200[1],local_200[0])));
  }
  else {
    if (uVar16 == 2) {
      lVar18 = *(long *)(p_Var10 + 0x10);
      lVar21 = *(long *)(p_Var10 + 0x18);
      p_Var14 = p_Var10;
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var10)
      ;
      p_Var19 = (__DataStorage *)0x0;
      if (p_Var14 != (__DataStorage *)0x0) {
        p_Var19 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var14);
        if (SBORROW8(lVar18,(long)p_Var19)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf384);
          (*pcVar7)();
        }
        p_Var14 = p_Var14 + (lVar18 - (long)p_Var19);
      }
      lVar5 = lVar21 - lVar18;
      if (SBORROW8(lVar21,lVar18)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf380);
        (*pcVar7)();
      }
      lVar18 = Foundation::__DataStorage::get__length
                         ((__DataStorage *)(sVar11 & 0x3fffffffffffffff),p_Var19);
      if (p_Var14 == (__DataStorage *)0x0) {
        p_Var19 = (__DataStorage *)0x0;
      }
      else {
        if (lVar5 <= lVar18) {
          lVar18 = lVar5;
        }
        p_Var19 = p_Var14 + lVar18;
      }
      goto LAB_100abf2cc;
    }
    local_200[8] = 0;
    local_200[9] = 0;
    local_200[10] = 0;
    local_200[0xb] = 0;
    local_200[0xc] = 0;
    local_200[0xd] = 0;
    local_200[0] = 0;
    local_200[1] = 0;
    local_200[2] = 0;
    local_200[3] = 0;
    local_200[4] = 0;
    local_200[5] = 0;
    local_200[6] = 0;
    local_200[7] = 0;
    puVar13 = local_200;
LAB_100abf28c:
    FUN_100ad3f98(&local_204,local_200,puVar13,p_Var10,sVar11,0);
  }
  p_Var14 = p_Var10;
  (*(code *)param_5)(p_Var10,sVar11);
  p_Var19 = (__DataStorage *)(ulong)local_204;
  if (unaff_x21 == 0) {
    if (param_4 != 0) {
      FUN_100adc5e0();
      if (((uint)p_Var14 & 0xff) == 1) {
        p_Var14 = (__DataStorage *)&DAT_00000001;
      }
      else {
        FUN_100adc7dc();
        if ((long)p_Var14 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100abf38c);
          (*pcVar7)();
        }
      }
      objc_stub::setCompletedUnitCount_(param_4,p_Var14);
    }
    FUN_10003bf2c(p_Var10,sVar11);
  }
  else {
    FUN_10003bf2c(p_Var10,sVar11);
  }
LAB_100abefc8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_78) {
    return p_Var19;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100abf390 | FUN_100abf390 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100abf390(URL param_1,undefined8 param_2,ID param_3)

{
  NSURL *pNVar1;
  ID IVar2;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(param_1);
  local_40 = 0;
  IVar2 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    (param_3,pNVar1,1,0,&local_40);
  if ((int)IVar2 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100abf45c | FUN_100abf45c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100abf45c(URL param_1,undefined1 *param_2,undefined *param_3,uint param_4,ID param_5)

{
  undefined1 auVar1 [16];
  bool bVar2;
  URL UVar3;
  Encoding EVar4;
  NSString *pNVar5;
  ID IVar6;
  char *pcVar7;
  URL UVar8;
  NSString *pNVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long unaff_x21;
  long lVar14;
  code *pcVar15;
  long lVar16;
  URL UVar17;
  undefined *puVar18;
  String SVar19;
  String SVar20;
  undefined8 auStack_100 [4];
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 *puStack_80;
  String local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar18 = &DAT_100ff8468;
  FUN_1000f7830(&DAT_100ff8468,&DAT_100c94440);
  UVar8.unknown =
       (undefined *)
       ((long)&local_e0 - (*(long *)(*(long *)(puVar18 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar3.unknown + -8);
  uVar12 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  UVar17.unknown = UVar8.unknown + -uVar12;
  puVar18 = UVar17.unknown + -uVar12;
  lVar13 = ((long)puVar18 - uVar12) - uVar12;
  lVar14 = lVar13 - uVar12;
  EVar4 = Encoding::_typeMetadataAccessor();
  lVar16 = lVar14 - (*(long *)(*(long *)(EVar4.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  Encoding::_get_utf8(EVar4);
  (extension_Foundation)::Swift::String::_init((Encoding)param_1.unknown);
  if (param_2 == (undefined1 *)0x0) {
    FUN_100ab8c74();
    _swift_allocError(&DAT_100f31130,param_1.unknown,0,0);
    *param_1.unknown = 2;
    _swift_willThrow();
  }
  else {
    local_e0 = param_3;
    Foundation::URL::deletingLastPathComponent(param_1);
    local_d8 = param_1.unknown;
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    IVar6 = objc_stub::FUN_100c05600((ID)pNVar5);
    bVar2 = (IVar6 & 1) == 0;
    if (bVar2) {
      (**(code **)(lVar11 + 0x10))(UVar8.unknown,lVar14,UVar3.unknown);
    }
    (**(code **)(lVar11 + 0x38))(UVar8.unknown,!bVar2,1,UVar3.unknown);
    Foundation::URL::_init();
    FUN_1000fb4c4(UVar8.unknown,&DAT_100ff8468,&DAT_100c94440);
    if ((param_4 & 1) == 0) {
      SVar19 = Foundation::URL::get_path(UVar8);
      UVar8.unknown = SVar19.bridgeObject;
      Foundation::URL::_init(SVar19.str._0_1_);
      _swift_bridgeObjectRelease();
      Foundation::URL::get_standardized(UVar8);
      pcVar15 = *(code **)(lVar11 + 8);
      UVar8.unknown = puVar18;
      (*pcVar15)(puVar18,UVar3.unknown);
      local_78 = Foundation::URL::get_path(UVar8);
      pvVar10 = local_78.bridgeObject;
      pcVar7 = local_78.str;
      local_88 = 0x2f2f;
      puStack_80 = &SUB_e200000000000000;
      local_98 = 0x2f;
      uStack_90 = 0xe100000000000000;
      FUN_100abff2c();
      *(char **)(lVar16 + -0x10) = pcVar7;
      *(char **)(lVar16 + -8) = pcVar7;
      *(undefined **)(lVar16 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
      *(char **)(lVar16 + -0x18) = pcVar7;
      SVar19 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                         (&local_88,&local_98,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208
                          ,PTR___type_metadata_for_Swift_String_100eac208);
      UVar8.unknown = SVar19.bridgeObject;
      _swift_bridgeObjectRelease(pvVar10);
      Foundation::URL::_init();
      _swift_bridgeObjectRelease();
      UVar8 = Foundation::URL::get_standardized(UVar8);
      SVar19 = Foundation::URL::get_absoluteString(UVar8);
      (*pcVar15)(UVar17.unknown,UVar3.unknown);
      SVar20 = Foundation::URL::get_absoluteString(UVar17);
      bVar2 = Swift::String::hasPrefix(SVar20,SVar19);
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      (*pcVar15)(puVar18,UVar3.unknown);
      (*pcVar15)((long)puVar18 - uVar12,UVar3.unknown);
      if (!bVar2) {
        _swift_bridgeObjectRelease();
        FUN_100ab8c74();
        _swift_allocError(&DAT_100f31130,param_2,0,0);
        *param_2 = 0xe;
        _swift_willThrow();
        (*pcVar15)(lVar13,UVar3.unknown);
        (*pcVar15)(lVar14,UVar3.unknown);
        goto LAB_100abf8f4;
      }
    }
    UVar8.unknown = local_e0;
    FUN_100adecf8();
    if (unaff_x21 == 0) {
      SVar19 = Foundation::URL::get_path(UVar8);
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      pNVar9 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(param_2);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_78.bridgeObject;
      local_78 = (String)(auVar1 << 0x40);
      IVar6 = objc_stub::FUN_100c00540(param_5,pNVar5,pNVar9,&local_78);
      if ((IVar6 & 1) == 0) {
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        pcVar15 = *(code **)(lVar11 + 8);
      }
      else {
        pcVar15 = *(code **)(lVar11 + 8);
      }
      (*pcVar15)(lVar13,UVar3.unknown);
    }
    else {
      _swift_bridgeObjectRelease(param_2);
      pcVar15 = *(code **)(lVar11 + 8);
      (*pcVar15)(lVar13,UVar3.unknown);
    }
    (*pcVar15)(lVar14,UVar3.unknown);
  }
LAB_100abf8f4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100abf934 | FUN_100abf934 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100abf934(void)

{
  URL UVar1;
  ulong uVar2;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100abf9a0 | FUN_100abf9a0 */

void FUN_100abf9a0(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  uVar3 = uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff);
  uVar2 = uVar3 + *(long *)(*(long *)(UVar1.unknown + -8) + 0x40);
  FUN_100abf45c(param_1,param_2,unaff_x20 + uVar3,*(undefined1 *)(unaff_x20 + uVar2),
                *(undefined8 *)(unaff_x20 + (uVar2 & 0xfffffffffffffff8) + 8));
  return;
}



/* Address: 0x100abfa10 | FUN_100abfa10 */

undefined1  [16] FUN_100abfa10(__int64 param_1,long param_2,undefined8 param_3)

{
  Deallocator DVar1;
  undefined7 extraout_var;
  code *pcVar3;
  __DataStorage *p_Var4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_80 [32];
  code *pcVar2;
  
  lVar7 = param_2;
  DVar1 = Foundation::Data::Deallocator::typeMetadataAccessor();
  pcVar2 = (code *)CONCAT71(extraout_var,DVar1.value);
  lVar10 = *(long *)(pcVar2 + -8);
  puVar9 = auStack_80 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar3 = pcVar2;
  Foundation::Data::Deallocator::_get__deallocator(DVar1);
  if (param_2 == 0) {
    lVar8 = lVar7;
    Foundation::Data::Deallocator::_get__deallocator((Deallocator)(__int8)pcVar3);
    (*pcVar3)(param_1,0);
    _swift_release(lVar7);
    _swift_release(lVar8);
    p_Var4 = (__DataStorage *)0x0;
    param_2 = -0x4000000000000000;
  }
  else {
    p_Var4 = Foundation::__DataStorage::typeMetadataAccessor();
    _swift_allocObject(p_Var4,*(undefined4 *)(p_Var4 + 0x30),*(undefined2 *)(p_Var4 + 0x34));
    _swift_retain(lVar7);
    p_Var4 = Foundation::__DataStorage::_init(p_Var4,param_1,SUB81(param_2,0),0);
    (**(code **)(lVar10 + 0x10))(puVar9,param_3,pcVar2);
    puVar5 = puVar9;
    pcVar3 = pcVar2;
    (**(code **)(lVar10 + 0x58))();
    if ((int)puVar5 ==
        *(int *)
         PTR___enum_case_for_Foundation_Data_Deallocator_none_Foundation_Data_Deallocator_Type___>_Foundation_Data_Deallocator_100ea7200
       ) {
      pcVar6 = (code *)auStack_80;
      Foundation::__DataStorage::modify__capacity(p_Var4,(__int64)pcVar6);
      *(ulong *)pcVar3 = *(ulong *)pcVar3 | 0x8000000000000000;
      (*pcVar6)(auStack_80,0);
    }
    else {
      (**(code **)(lVar10 + 8))(puVar9,pcVar2);
    }
    FUN_100abcce8(p_Var4,param_2);
    _swift_release(lVar7);
  }
  (**(code **)(lVar10 + 8))(param_3,pcVar2);
  auVar11._8_8_ = param_2;
  auVar11._0_8_ = p_Var4;
  return auVar11;
}



/* Address: 0x100abfbb8 | FUN_100abfbb8 */

undefined * FUN_100abfbb8(long param_1)

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
  ulong local_90;
  ulong uStack_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff8450;
    FUN_1000f7830(&DAT_100ff8450,&DAT_100c94330);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_90,&DAT_100ff8440,&DAT_100c94328);
      uVar3 = uStack_88;
      uVar2 = local_90;
      uVar6 = local_90;
      uVar7 = uStack_88;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100abfce0);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_80,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100abfce4);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x30;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x100abfce4 | FUN_100abfce4 */

undefined * FUN_100abfce4(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong *puVar5;
  ulong uVar6;
  undefined *capacity;
  ulong local_88;
  undefined1 auStack_80 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff8458;
    FUN_1000f7830(&DAT_100ff8458,&DAT_100c94338);
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      puVar5 = &local_88;
      FUN_1000f8cac(param_1,puVar5,&DAT_100ff8460,&DAT_100c94340);
      uVar1 = local_88;
      uVar4 = local_88;
      FUN_1000712c0();
      if (((ulong)puVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abfe04);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar1;
      FUN_100011080(auStack_80,*(long *)(puVar3 + 0x38) + uVar4 * 0x20);
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100abfe08);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      param_1 = param_1 + 0x28;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x100abfe08 | FUN_100abfe08 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100abfe08(void)

{
  URL UVar1;
  long unaff_x20;
  ulong uVar2;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50);
  (**(code **)(*(long *)(UVar1.unknown + -8) + 8))
            (unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),UVar1.unknown);
  _swift_deallocObject();
  return;
}



/* Address: 0x100abfe74 | FUN_100abfe74 */

void FUN_100abfe74(undefined8 param_1,undefined8 param_2)

{
  URL UVar1;
  long unaff_x20;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_100abf390(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(UVar1.unknown + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100abfed0 | FUN_100abfed0 */

void FUN_100abfed0(void)

{
  FUN_100aba04c();
  return;
}



/* Address: 0x100abfee8 | FUN_100abfee8 */

void FUN_100abfee8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100aba174(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100abff04 | FUN_100abff04 */

void FUN_100abff04(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100abff14 | FUN_100abff14 */

void FUN_100abff14(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100abe2bc(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100abff2c | FUN_100abff2c */

void FUN_100abff2c(void)

{
  undefined *puVar1;
  
  if (DAT_100ff8470 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100ff8470 = puVar1;
  return;
}


