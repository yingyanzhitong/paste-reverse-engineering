/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100accd78 | FUN_100accd78 */

void FUN_100accd78(void)

{
  uint uVar1;
  undefined8 uVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  int iVar6;
  undefined8 *puVar7;
  RangeReference *pRVar8;
  __DataStorage *p_Var9;
  undefined8 **ppuVar10;
  undefined1 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  undefined4 *unaff_x20;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 local_d0;
  undefined1 local_c8;
  undefined1 uStack_c7;
  undefined1 uStack_c6;
  undefined1 uStack_c5;
  undefined1 local_c4;
  undefined1 uStack_c3;
  undefined1 local_c2;
  undefined1 uStack_c1;
  int local_c0;
  undefined2 uStack_bc;
  undefined2 uStack_ba;
  undefined6 local_b8;
  undefined2 uStack_b2;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined1 auStack_90 [4];
  undefined1 local_8c [8];
  undefined1 local_84 [4];
  undefined8 local_80;
  undefined1 auStack_78 [4];
  undefined4 local_74;
  undefined8 *local_70;
  undefined8 **ppuStack_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_74 = *unaff_x20;
  uVar14 = *(undefined8 *)(unaff_x20 + 2);
  local_84._2_2_ = *(undefined2 *)(unaff_x20 + 4);
  local_84._0_2_ = *(undefined2 *)((long)unaff_x20 + 0x12);
  local_8c._4_4_ = unaff_x20[5];
  local_8c._0_4_ = unaff_x20[6];
  local_98 = *(undefined8 *)(unaff_x20 + 8);
  local_a0 = *(undefined8 *)(unaff_x20 + 10);
  local_a8 = *(undefined8 *)(unaff_x20 + 0xc);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xe);
  ppuStack_68 = (undefined8 **)0xc000000000000000;
  local_70 = (undefined8 *)0x0;
  puVar7 = (undefined8 *)&local_74;
  ppuVar10 = &local_70;
  local_b0 = uVar2;
  local_80 = uVar14;
  FUN_100ad8ff4();
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)ppuVar10 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = ppuVar10;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(ppuVar10,0);
      uStack_c7 = (undefined1)((ulong)ppuVar10 >> 8);
      uStack_c6 = (undefined1)((ulong)ppuVar10 >> 0x10);
      uStack_c5 = (undefined1)((ulong)ppuVar10 >> 0x18);
      local_c4 = (undefined1)((ulong)ppuVar10 >> 0x20);
      uVar15 = (ulong)ppuVar10 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)ppuVar10 >> 0x28);
      if (uVar15 < 7) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined8 *)((long)&local_d0 + uVar15) = uVar14;
        uVar1 = (int)uVar15 + 8;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf00);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar11 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100accfc0:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_80,(InlineSlice)auStack_78);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)ppuVar10 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdedc);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffff7) goto LAB_100accfc0;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_80,(LargeSlice)auStack_78)
      ;
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar11 = (undefined1 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)ppuVar10 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)ppuVar10 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_80,(LargeSlice)auStack_78);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = &local_80;
    puVar11 = auStack_78;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar11 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar11,0);
      uStack_c7 = (undefined1)((ulong)puVar11 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar11 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar11 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar11 >> 0x20);
      uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar11 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined2 *)((long)&local_d0 + uVar15) = local_84._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf04);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar12 = (undefined8 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acd198:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_84 + 2),(InlineSlice)&local_80);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar11 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdee0);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acd198;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_84 + 2),(LargeSlice)&local_80);
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar12 = (undefined8 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar11 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_84 + 2),(LargeSlice)&local_80);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = (undefined8 *)(local_84 + 2);
    puVar12 = &local_80;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar12,0);
      uStack_c7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined2 *)((long)&local_d0 + uVar15) = local_84._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf08);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar11 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acd370:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_84,(InlineSlice)(local_84 + 2));
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdee4);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acd370;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_84,(LargeSlice)(local_84 + 2));
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar11 = (undefined1 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_84,(LargeSlice)(local_84 + 2));
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = (undefined8 *)local_84;
    puVar11 = local_84 + 2;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar11 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar11,0);
      uStack_c7 = (undefined1)((ulong)puVar11 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar11 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar11 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar11 >> 0x20);
      uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar11 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined4 *)((long)&local_d0 + uVar15) = local_8c._4_4_;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf0c);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar11 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acd548:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_8c + 4),(InlineSlice)local_84);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar11 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdee8);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100acd548;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_8c + 4),(LargeSlice)local_84);
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar11 = (undefined1 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar11 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_8c + 4),(LargeSlice)local_84);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = (undefined8 *)(local_8c + 4);
    puVar11 = local_84;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar11 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar11,0);
      uStack_c7 = (undefined1)((ulong)puVar11 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar11 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar11 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar11 >> 0x20);
      uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar11 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined4 *)((long)&local_d0 + uVar15) = local_8c._0_4_;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf10);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar11 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acd720:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_8c,(InlineSlice)(local_8c + 4));
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar11 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdeec);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100acd720;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_8c,(LargeSlice)(local_8c + 4));
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar11 = (undefined1 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar11 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_8c,(LargeSlice)(local_8c + 4));
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = (undefined8 *)local_8c;
    puVar11 = local_8c + 4;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar11 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar11,0);
      uStack_c7 = (undefined1)((ulong)puVar11 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar11 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar11 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar11 >> 0x20);
      uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar11 >> 0x28);
      if (uVar15 < 7) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined8 *)((long)&local_d0 + uVar15) = local_98;
        uVar1 = (int)uVar15 + 8;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf14);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar11 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acd8f4:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_98,(InlineSlice)auStack_90);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar11 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdef0);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffff7) goto LAB_100acd8f4;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_98,(LargeSlice)auStack_90)
      ;
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar11 = (undefined1 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar11 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_98,(LargeSlice)auStack_90);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar11 = (undefined1 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = &local_98;
    puVar11 = auStack_90;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar11 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar11,0);
      uStack_c7 = (undefined1)((ulong)puVar11 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar11 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar11 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar11 >> 0x20);
      uVar15 = (ulong)puVar11 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar11 >> 0x28);
      if (uVar15 < 7) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined8 *)((long)&local_d0 + uVar15) = local_a0;
        uVar1 = (int)uVar15 + 8;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf18);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar12 = (undefined8 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acdac8:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_a0,(InlineSlice)&local_98);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar11 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdef4);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffff7) goto LAB_100acdac8;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_a0,(LargeSlice)&local_98);
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar12 = (undefined8 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar11 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_a0,(LargeSlice)&local_98);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = &local_a0;
    puVar12 = &local_98;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar12,0);
      uStack_c7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 7) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined8 *)((long)&local_d0 + uVar15) = local_a8;
        uVar1 = (int)uVar15 + 8;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf1c);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        puVar7 = (undefined8 *)
                 CONCAT17(local_d0._7_1_,
                          CONCAT16(local_d0._6_1_,
                                   CONCAT15(local_d0._5_1_,
                                            CONCAT14(local_d0._4_1_,
                                                     CONCAT13(local_d0._3_1_,
                                                              CONCAT12(local_d0._2_1_,
                                                                       CONCAT11(local_d0._1_1_,
                                                                                (undefined1)local_d0
                                                                               )))))));
        puVar12 = (undefined8 *)
                  CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))));
      }
      else {
        local_b8 = (undefined6)
                   (CONCAT17(uStack_c3,
                             CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                        CONCAT14(uStack_c6,
                                                                 CONCAT13(uStack_c7,
                                                                          CONCAT12(local_c8,
                                                  uStack_ba)))))) >> 0x10);
        local_c0 = iVar6;
        p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
        p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
        local_c0 = 0;
        uStack_bc = (undefined2)uVar15;
        uStack_ba = 0;
        local_b8 = SUB86(p_Var9,0);
        uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
LAB_100acdca0:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_a8,(InlineSlice)&local_a0);
        puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
        puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdef8);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffff7) goto LAB_100acdca0;
      pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar8,0x20,7);
      *(long *)(pRVar8 + 0x10) = (long)iVar6;
      *(long *)(pRVar8 + 0x18) = lVar16;
      local_d0._0_1_ = SUB81(pRVar8,0);
      local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
      local_c8 = (undefined1)uVar15;
      uStack_c7 = (undefined1)(uVar15 >> 8);
      uStack_c6 = (undefined1)(uVar15 >> 0x10);
      uStack_c5 = (undefined1)(uVar15 >> 0x18);
      local_c4 = (undefined1)(uVar15 >> 0x20);
      uStack_c3 = (undefined1)(uVar15 >> 0x28);
      local_c2 = (undefined1)(uVar15 >> 0x30);
      uStack_c1 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_a8,(LargeSlice)&local_a0);
      puVar7 = (undefined8 *)
               CONCAT17(local_d0._7_1_,
                        CONCAT16(local_d0._6_1_,
                                 CONCAT15(local_d0._5_1_,
                                          CONCAT14(local_d0._4_1_,
                                                   CONCAT13(local_d0._3_1_,
                                                            CONCAT12(local_d0._2_1_,
                                                                     CONCAT11(local_d0._1_1_,
                                                                              (undefined1)local_d0))
                                                           )))));
      puVar12 = (undefined8 *)
                (CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8))))))) | 0x8000000000000000);
    }
  }
  else if (uVar13 == 2) {
    local_b8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_a8,(LargeSlice)&local_a0);
    puVar7 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    puVar12 = (undefined8 *)(CONCAT26(uStack_b2,local_b8) | 0x8000000000000000);
  }
  else {
    puVar7 = &local_a8;
    puVar12 = &local_a0;
    uStack_bc = uVar3;
    uStack_ba = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_ba;
  uVar3 = uStack_bc;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar13 = uVar1 >> 0x1e;
  iVar6 = (int)puVar7;
  uStack_bc = (undefined2)((ulong)puVar7 >> 0x20);
  uStack_ba = (undefined2)((ulong)puVar7 >> 0x30);
  local_70 = puVar7;
  ppuStack_68 = (undefined8 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar13 == 0) {
      local_d0._0_1_ = SUB81(puVar7,0);
      local_d0._1_1_ = (undefined1)((ulong)puVar7 >> 8);
      local_d0._2_1_ = (undefined1)((ulong)puVar7 >> 0x10);
      local_d0._3_1_ = (undefined1)((ulong)puVar7 >> 0x18);
      local_d0._4_1_ = (undefined1)((ulong)puVar7 >> 0x20);
      local_d0._5_1_ = (undefined1)((ulong)puVar7 >> 0x28);
      local_d0._6_1_ = (undefined1)((ulong)puVar7 >> 0x30);
      local_d0._7_1_ = (undefined1)((ulong)puVar7 >> 0x38);
      local_c8 = SUB81(puVar12,0);
      uStack_c7 = (undefined1)((ulong)puVar12 >> 8);
      uStack_c6 = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_c5 = (undefined1)((ulong)puVar12 >> 0x18);
      local_c4 = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_c3 = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 7) {
        uStack_bc = uVar3;
        uStack_ba = uVar4;
        *(undefined8 *)((long)&local_d0 + uVar15) = uVar2;
        uVar1 = (int)uVar15 + 8;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdf20);
          (*pcVar5)();
        }
        local_c2 = (undefined1)uVar1;
        local_70 = (undefined8 *)
                   CONCAT17(local_d0._7_1_,
                            CONCAT16(local_d0._6_1_,
                                     CONCAT15(local_d0._5_1_,
                                              CONCAT14(local_d0._4_1_,
                                                       CONCAT13(local_d0._3_1_,
                                                                CONCAT12(local_d0._2_1_,
                                                                         CONCAT11(local_d0._1_1_,
                                                                                  (undefined1)
                                                                                  local_d0)))))));
        ppuStack_68 = (undefined8 **)
                      CONCAT44((uint)CONCAT11(uStack_c3,local_c4) | (uVar1 & 0xff) << 0x10,
                               CONCAT13(uStack_c5,CONCAT12(uStack_c6,CONCAT11(uStack_c7,local_c8))))
        ;
        goto LAB_100acde94;
      }
      local_b8 = (undefined6)
                 (CONCAT17(uStack_c3,
                           CONCAT16(local_c4,CONCAT15(uStack_c5,
                                                      CONCAT14(uStack_c6,
                                                               CONCAT13(uStack_c7,
                                                                        CONCAT12(local_c8,uStack_ba)
                                                                       ))))) >> 0x10);
      local_c0 = iVar6;
      p_Var9 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var9,*(undefined4 *)(p_Var9 + 0x30),*(undefined2 *)(p_Var9 + 0x34));
      p_Var9 = Foundation::__DataStorage::_init(p_Var9,(__int64)&local_c0);
      local_c0 = 0;
      uStack_bc = (undefined2)uVar15;
      uStack_ba = 0;
      local_b8 = SUB86(p_Var9,0);
      uStack_b2 = (undefined2)((ulong)p_Var9 >> 0x30);
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_b8 = (undefined6)uVar15;
      uStack_b2 = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar7 >> 0x20;
      if (lVar16 < iVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100acdefc);
        local_c0 = iVar6;
        (*pcVar5)();
      }
      ppuStack_68 = (undefined8 **)0xc000000000000000;
      local_70 = (undefined8 *)0x0;
      local_c0 = iVar6;
      FUN_10003bf2c(0,0xc000000000000000);
      if (0x7ffffff6 < lVar16) {
        pRVar8 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar8,0x20,7);
        *(long *)(pRVar8 + 0x10) = (long)iVar6;
        *(long *)(pRVar8 + 0x18) = lVar16;
        local_d0._0_1_ = SUB81(pRVar8,0);
        local_d0._1_1_ = (undefined1)((ulong)pRVar8 >> 8);
        local_d0._2_1_ = (undefined1)((ulong)pRVar8 >> 0x10);
        local_d0._3_1_ = (undefined1)((ulong)pRVar8 >> 0x18);
        local_d0._4_1_ = (undefined1)((ulong)pRVar8 >> 0x20);
        local_d0._5_1_ = (undefined1)((ulong)pRVar8 >> 0x28);
        local_d0._6_1_ = (undefined1)((ulong)pRVar8 >> 0x30);
        local_d0._7_1_ = (undefined1)((ulong)pRVar8 >> 0x38);
        local_c8 = (undefined1)uVar15;
        uStack_c7 = (undefined1)(uVar15 >> 8);
        uStack_c6 = (undefined1)(uVar15 >> 0x10);
        uStack_c5 = (undefined1)(uVar15 >> 0x18);
        local_c4 = (undefined1)(uVar15 >> 0x20);
        uStack_c3 = (undefined1)(uVar15 >> 0x28);
        local_c2 = (undefined1)(uVar15 >> 0x30);
        uStack_c1 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)&local_b0,(LargeSlice)&local_a8);
        local_70 = (undefined8 *)
                   CONCAT17(local_d0._7_1_,
                            CONCAT16(local_d0._6_1_,
                                     CONCAT15(local_d0._5_1_,
                                              CONCAT14(local_d0._4_1_,
                                                       CONCAT13(local_d0._3_1_,
                                                                CONCAT12(local_d0._2_1_,
                                                                         CONCAT11(local_d0._1_1_,
                                                                                  (undefined1)
                                                                                  local_d0)))))));
        uVar15 = CONCAT17(uStack_c1,
                          CONCAT16(local_c2,CONCAT15(uStack_c3,
                                                     CONCAT14(local_c4,CONCAT13(uStack_c5,
                                                                                CONCAT12(uStack_c6,
                                                                                         CONCAT11(
                                                  uStack_c7,local_c8)))))));
        goto LAB_100acde20;
      }
    }
    Foundation::Data::InlineSlice::append((UnsafeRawBufferPointer)&local_b0,(InlineSlice)&local_a8);
    local_70 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    ppuStack_68 = (undefined8 **)(CONCAT26(uStack_b2,local_b8) | 0x4000000000000000);
  }
  else {
    if (uVar13 != 2) {
      puVar7 = &local_b0;
      puVar12 = &local_a8;
      uStack_bc = uVar3;
      uStack_ba = uVar4;
      FUN_100ad8ff4();
      local_70 = puVar7;
      ppuStack_68 = (undefined8 **)puVar12;
      goto LAB_100acde94;
    }
    local_b8 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_b2 = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined8 **)0xc000000000000000;
    local_70 = (undefined8 *)0x0;
    local_c0 = iVar6;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_b0,(LargeSlice)&local_a8);
    local_70 = (undefined8 *)CONCAT26(uStack_ba,CONCAT24(uStack_bc,local_c0));
    uVar15 = CONCAT26(uStack_b2,local_b8);
LAB_100acde20:
    ppuStack_68 = (undefined8 **)(uVar15 | 0x8000000000000000);
  }
LAB_100acde94:
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 0x10),(Data)*(undefined **)(unaff_x20 + 0x12));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70,ppuStack_68);
  }
  return;
}



/* Address: 0x100acdf24 | FUN_100acdf24 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100acdf24(undefined8 param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  RangeReference *pRVar6;
  undefined8 *puVar7;
  __DataStorage *p_Var8;
  long *plVar9;
  uint uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long lVar18;
  undefined8 uVar19;
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined8 local_80;
  byte local_78;
  byte bStack_77;
  undefined1 uStack_76;
  undefined1 uStack_75;
  undefined1 uStack_74;
  undefined1 uStack_73;
  char local_72;
  undefined1 uStack_71;
  uint local_70;
  undefined2 uStack_6c;
  undefined2 uStack_6a;
  undefined6 local_68;
  undefined2 uStack_62;
  undefined4 local_5c;
  undefined8 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar16 = (undefined4)((ulong)param_1 >> 0x20);
  uStack_4c = (undefined4)param_1;
  puVar5 = &uStack_4c;
  plVar9 = &local_48;
  local_5c = param_3;
  local_58 = param_2;
  local_50 = uVar16;
  FUN_100ad8ff4();
  uVar3 = uStack_6a;
  uVar2 = uStack_6c;
  uVar1 = (uint)((ulong)plVar9 >> 0x20);
  uVar10 = uVar1 >> 0x1e;
  uVar14 = (uint)puVar5;
  uStack_6c = (undefined2)((ulong)puVar5 >> 0x20);
  uStack_6a = (undefined2)((ulong)puVar5 >> 0x30);
  if (uVar1 >> 0x1e < 2) {
    if (uVar10 != 0) {
      uVar15 = (ulong)plVar9 & 0x3fffffffffffffff;
      local_68 = (undefined6)uVar15;
      uStack_62 = (undefined2)(uVar15 >> 0x30);
      lVar18 = (long)puVar5 >> 0x20;
      if (lVar18 < (int)uVar14) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ace540);
        local_70 = uVar14;
        (*pcVar4)();
      }
      local_70 = uVar14;
      if (0x7ffffffa < lVar18) {
        pRVar6 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar6,0x20,7);
        *(long *)(pRVar6 + 0x10) = (long)(int)uVar14;
        *(long *)(pRVar6 + 0x18) = lVar18;
        local_80._0_1_ = SUB81(pRVar6,0);
        local_80._1_1_ = (undefined1)((ulong)pRVar6 >> 8);
        local_80._2_1_ = (undefined1)((ulong)pRVar6 >> 0x10);
        local_80._3_1_ = (undefined1)((ulong)pRVar6 >> 0x18);
        local_80._4_1_ = (undefined1)((ulong)pRVar6 >> 0x20);
        local_80._5_1_ = (undefined1)((ulong)pRVar6 >> 0x28);
        local_80._6_1_ = (undefined1)((ulong)pRVar6 >> 0x30);
        local_80._7_1_ = (undefined1)((ulong)pRVar6 >> 0x38);
        local_78 = (byte)uVar15;
        bStack_77 = (byte)(uVar15 >> 8);
        uStack_76 = (undefined1)(uVar15 >> 0x10);
        uStack_75 = (undefined1)(uVar15 >> 0x18);
        uStack_74 = (undefined1)(uVar15 >> 0x20);
        uStack_73 = (undefined1)(uVar15 >> 0x28);
        local_72 = (char)(uVar15 >> 0x30);
        uStack_71 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)&local_50,(LargeSlice)&uStack_4c);
        puVar5 = (undefined4 *)
                 CONCAT17(local_80._7_1_,
                          CONCAT16(local_80._6_1_,
                                   CONCAT15(local_80._5_1_,
                                            CONCAT14(local_80._4_1_,
                                                     CONCAT13(local_80._3_1_,
                                                              CONCAT12(local_80._2_1_,
                                                                       CONCAT11(local_80._1_1_,
                                                                                (undefined1)local_80
                                                                               )))))));
        uVar15 = CONCAT17(uStack_71,
                          CONCAT16(local_72,CONCAT15(uStack_73,
                                                     CONCAT14(uStack_74,
                                                              CONCAT13(uStack_75,
                                                                       CONCAT12(uStack_76,
                                                                                CONCAT11(bStack_77,
                                                                                         local_78)))
                                                             ))));
        goto LAB_100ace0b8;
      }
LAB_100ace248:
      Foundation::Data::InlineSlice::append
                ((UnsafeRawBufferPointer)&local_50,(InlineSlice)&uStack_4c);
      puVar5 = (undefined4 *)(ulong)local_70;
      iVar11 = CONCAT22(uStack_6a,uStack_6c);
      uVar15 = CONCAT26(uStack_62,local_68);
LAB_100ace2d8:
      local_70 = (uint)puVar5;
      uStack_6c = (undefined2)iVar11;
      uStack_6a = (undefined2)((uint)iVar11 >> 0x10);
      local_68 = (undefined6)uVar15;
      uStack_62 = (undefined2)(uVar15 >> 0x30);
      if (iVar11 < (int)local_70) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ace538);
        (*pcVar4)();
      }
      if (0x7ffffff6 < iVar11) {
        lVar18 = (long)(int)local_70;
        pRVar6 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar6,0x20,7);
        *(long *)(pRVar6 + 0x10) = lVar18;
        *(long *)(pRVar6 + 0x18) = (long)iVar11;
        local_80._0_1_ = SUB81(pRVar6,0);
        local_80._1_1_ = (undefined1)((ulong)pRVar6 >> 8);
        local_80._2_1_ = (undefined1)((ulong)pRVar6 >> 0x10);
        local_80._3_1_ = (undefined1)((ulong)pRVar6 >> 0x18);
        local_80._4_1_ = (undefined1)((ulong)pRVar6 >> 0x20);
        local_80._5_1_ = (undefined1)((ulong)pRVar6 >> 0x28);
        local_80._6_1_ = (undefined1)((ulong)pRVar6 >> 0x30);
        local_80._7_1_ = (undefined1)((ulong)pRVar6 >> 0x38);
        local_78 = (byte)uVar15;
        bStack_77 = (byte)(uVar15 >> 8);
        uStack_76 = (undefined1)(uVar15 >> 0x10);
        uStack_75 = (undefined1)(uVar15 >> 0x18);
        uStack_74 = (undefined1)(uVar15 >> 0x20);
        uStack_73 = (undefined1)(uVar15 >> 0x28);
        local_72 = (char)(uVar15 >> 0x30);
        uStack_71 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append
                  ((UnsafeRawBufferPointer)&local_58,(LargeSlice)&local_50);
        puVar7 = (undefined8 *)
                 CONCAT17(local_80._7_1_,
                          CONCAT16(local_80._6_1_,
                                   CONCAT15(local_80._5_1_,
                                            CONCAT14(local_80._4_1_,
                                                     CONCAT13(local_80._3_1_,
                                                              CONCAT12(local_80._2_1_,
                                                                       CONCAT11(local_80._1_1_,
                                                                                (undefined1)local_80
                                                                               )))))));
        uVar15 = CONCAT17(uStack_71,
                          CONCAT16(local_72,CONCAT15(uStack_73,
                                                     CONCAT14(uStack_74,
                                                              CONCAT13(uStack_75,
                                                                       CONCAT12(uStack_76,
                                                                                CONCAT11(bStack_77,
                                                                                         local_78)))
                                                             ))));
        goto LAB_100ace38c;
      }
LAB_100ace304:
      Foundation::Data::InlineSlice::append
                ((UnsafeRawBufferPointer)&local_58,(InlineSlice)&local_50);
      puVar7 = (undefined8 *)(ulong)local_70;
      iVar11 = CONCAT22(uStack_6a,uStack_6c);
      uVar15 = CONCAT26(uStack_62,local_68);
      goto LAB_100ace318;
    }
    local_80._0_1_ = SUB81(puVar5,0);
    local_80._1_1_ = (undefined1)((ulong)puVar5 >> 8);
    local_80._2_1_ = (undefined1)((ulong)puVar5 >> 0x10);
    local_80._3_1_ = (undefined1)((ulong)puVar5 >> 0x18);
    local_80._4_1_ = (undefined1)((ulong)puVar5 >> 0x20);
    local_80._5_1_ = (undefined1)((ulong)puVar5 >> 0x28);
    local_80._6_1_ = (undefined1)((ulong)puVar5 >> 0x30);
    local_80._7_1_ = (undefined1)((ulong)puVar5 >> 0x38);
    local_78 = (byte)plVar9;
    bStack_77 = (byte)((ulong)plVar9 >> 8);
    uStack_76 = (undefined1)((ulong)plVar9 >> 0x10);
    uStack_75 = (undefined1)((ulong)plVar9 >> 0x18);
    uStack_74 = (undefined1)((ulong)plVar9 >> 0x20);
    uVar15 = (ulong)plVar9 >> 0x30 & 0xff;
    uStack_73 = (undefined1)((ulong)plVar9 >> 0x28);
    if (10 < uVar15) {
      local_68 = (undefined6)
                 (CONCAT17(uStack_73,
                           CONCAT16(uStack_74,
                                    CONCAT15(uStack_75,
                                             CONCAT14(uStack_76,
                                                      CONCAT13(bStack_77,
                                                               CONCAT12(local_78,uStack_6a)))))) >>
                 0x10);
      local_70 = uVar14;
      p_Var8 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var8,*(undefined4 *)(p_Var8 + 0x30),*(undefined2 *)(p_Var8 + 0x34));
      p_Var8 = Foundation::__DataStorage::_init(p_Var8,(__int64)&local_70);
      local_70 = 0;
      uStack_6c = (undefined2)uVar15;
      uStack_6a = 0;
      local_68 = SUB86(p_Var8,0);
      uStack_62 = (undefined2)((ulong)p_Var8 >> 0x30);
      goto LAB_100ace248;
    }
    uStack_6c = uVar2;
    uStack_6a = uVar3;
    *(undefined4 *)((long)&local_80 + uVar15) = uVar16;
    uVar1 = (int)uVar15 + 4;
    uVar15 = (ulong)uVar1;
    if ((uVar1 & 0xffffff00) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ace544);
      (*pcVar4)();
    }
    uVar19 = CONCAT17(local_80._7_1_,
                      CONCAT16(local_80._6_1_,
                               CONCAT15(local_80._5_1_,
                                        CONCAT14(local_80._4_1_,
                                                 CONCAT13(local_80._3_1_,
                                                          CONCAT12(local_80._2_1_,
                                                                   CONCAT11(local_80._1_1_,
                                                                            (undefined1)local_80))))
                                       )));
    puVar12 = (undefined4 *)(ulong)local_78;
    auVar21 = ZEXT716(CONCAT16(uStack_74,
                               (uint6)CONCAT14(uStack_75,(uint)CONCAT12(uStack_76,(ushort)bStack_77)
                                              )));
LAB_100ace16c:
    local_80._0_1_ = (undefined1)uVar19;
    local_80._1_1_ = (undefined1)((ulong)uVar19 >> 8);
    local_80._2_1_ = (undefined1)((ulong)uVar19 >> 0x10);
    local_80._3_1_ = (undefined1)((ulong)uVar19 >> 0x18);
    local_80._4_1_ = (undefined1)((ulong)uVar19 >> 0x20);
    local_80._5_1_ = (undefined1)((ulong)uVar19 >> 0x28);
    local_80._6_1_ = (undefined1)((ulong)uVar19 >> 0x30);
    local_80._7_1_ = (undefined1)((ulong)uVar19 >> 0x38);
    local_78 = (byte)puVar12;
    bStack_77 = auVar21[0];
    uStack_76 = auVar21[2];
    uStack_75 = auVar21[4];
    uStack_74 = auVar21[6];
    uVar17 = uVar15 & 0xff;
    if (6 < ((uint)uVar15 & 0xff)) {
      local_70 = (uint)uVar19;
      uStack_6c = (undefined2)((ulong)uVar19 >> 0x20);
      uStack_6a = (undefined2)((ulong)uVar19 >> 0x30);
      local_68 = (undefined6)
                 (CONCAT17(uStack_73,
                           CONCAT16(uStack_74,
                                    CONCAT15(uStack_75,
                                             CONCAT14(uStack_76,
                                                      CONCAT13(bStack_77,
                                                               CONCAT12(local_78,uStack_6a)))))) >>
                 0x10);
      p_Var8 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var8,*(undefined4 *)(p_Var8 + 0x30),*(undefined2 *)(p_Var8 + 0x34));
      p_Var8 = Foundation::__DataStorage::_init(p_Var8,(__int64)&local_70);
      local_70 = 0;
      uStack_6c = (undefined2)uVar17;
      uStack_6a = 0;
      local_68 = SUB86(p_Var8,0);
      uStack_62 = (undefined2)((ulong)p_Var8 >> 0x30);
      goto LAB_100ace304;
    }
    *(undefined8 *)((long)&local_80 + uVar17) = local_58;
    uVar15 = (ulong)((uint)uVar17 | 8);
    uVar19 = CONCAT17(local_80._7_1_,
                      CONCAT16(local_80._6_1_,
                               CONCAT15(local_80._5_1_,
                                        CONCAT14(local_80._4_1_,
                                                 CONCAT13(local_80._3_1_,
                                                          CONCAT12(local_80._2_1_,
                                                                   CONCAT11(local_80._1_1_,
                                                                            (undefined1)local_80))))
                                       )));
    puVar13 = (undefined4 *)(ulong)local_78;
    uVar17 = (ulong)CONCAT16(uStack_74,
                             (uint6)CONCAT14(uStack_75,(uint)CONCAT12(uStack_76,(ushort)bStack_77)))
    ;
LAB_100ace1bc:
    local_80._0_1_ = (undefined1)uVar19;
    local_80._1_1_ = (undefined1)((ulong)uVar19 >> 8);
    local_80._2_1_ = (undefined1)((ulong)uVar19 >> 0x10);
    local_80._3_1_ = (undefined1)((ulong)uVar19 >> 0x18);
    local_80._4_1_ = (undefined1)((ulong)uVar19 >> 0x20);
    local_80._5_1_ = (undefined1)((ulong)uVar19 >> 0x28);
    local_80._6_1_ = (undefined1)((ulong)uVar19 >> 0x30);
    local_80._7_1_ = (undefined1)((ulong)uVar19 >> 0x38);
    local_78 = (byte)puVar13;
    bStack_77 = (byte)uVar17;
    uStack_76 = (undefined1)(uVar17 >> 0x10);
    uStack_75 = (undefined1)(uVar17 >> 0x20);
    uStack_74 = (undefined1)(uVar17 >> 0x30);
    if (((uint)uVar15 & 0xff) < 0xb) {
      *(undefined4 *)((long)&local_80 + (uVar15 & 0xff)) = local_5c;
      local_72 = (char)uVar15 + '\x04';
      goto LAB_100ace4d8;
    }
    local_70 = (uint)uVar19;
    uStack_6c = (undefined2)((ulong)uVar19 >> 0x20);
    uStack_6a = (undefined2)((ulong)uVar19 >> 0x30);
    local_68 = (undefined6)
               (CONCAT17(uStack_73,
                         CONCAT16(uStack_74,
                                  CONCAT15(uStack_75,
                                           CONCAT14(uStack_76,
                                                    CONCAT13(bStack_77,CONCAT12(local_78,uStack_6a))
                                                   )))) >> 0x10);
    p_Var8 = Foundation::__DataStorage::typeMetadataAccessor();
    _swift_allocObject(p_Var8,*(undefined4 *)(p_Var8 + 0x30),*(undefined2 *)(p_Var8 + 0x34));
    p_Var8 = Foundation::__DataStorage::_init(p_Var8,(__int64)&local_70);
    local_70 = 0;
    uStack_6c = (undefined2)(uVar15 & 0xff);
    uStack_6a = 0;
    local_68 = SUB86(p_Var8,0);
    uStack_62 = (undefined2)((ulong)p_Var8 >> 0x30);
  }
  else {
    if (uVar10 == 2) {
      local_68 = (undefined6)((ulong)plVar9 & 0x3fffffffffffffff);
      uStack_62 = (undefined2)(((ulong)plVar9 & 0x3fffffffffffffff) >> 0x30);
      local_70 = uVar14;
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_50,(LargeSlice)&uStack_4c)
      ;
      puVar5 = (undefined4 *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
      uVar15 = CONCAT26(uStack_62,local_68);
LAB_100ace0b8:
      local_70 = (uint)puVar5;
      uStack_6c = (undefined2)((ulong)puVar5 >> 0x20);
      uStack_6a = (undefined2)((ulong)puVar5 >> 0x30);
      local_68 = (undefined6)uVar15;
      uStack_62 = (undefined2)(uVar15 >> 0x30);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_58,(LargeSlice)&local_50);
      puVar7 = (undefined8 *)CONCAT26(uStack_6a,CONCAT24(uStack_6c,local_70));
      uVar15 = CONCAT26(uStack_62,local_68);
LAB_100ace38c:
      local_70 = (uint)puVar7;
      uStack_6c = (undefined2)((ulong)puVar7 >> 0x20);
      uStack_6a = (undefined2)((ulong)puVar7 >> 0x30);
      local_68 = (undefined6)uVar15;
      uStack_62 = (undefined2)(uVar15 >> 0x30);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_5c,(LargeSlice)&local_58);
      goto LAB_100ace4d8;
    }
    puVar5 = &local_50;
    puVar12 = &uStack_4c;
    uStack_6c = uVar2;
    uStack_6a = uVar3;
    FUN_100ad8ff4();
    puVar13 = &local_50;
    uVar1 = (uint)((ulong)puVar12 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar14 == 0) {
        auVar20._8_8_ = puVar5;
        auVar20._0_8_ = puVar5;
        auVar21 = NEON_ushl(auVar20,_DAT_100c8b870,8);
        auVar23 = NEON_ushl(auVar20,_DAT_100c94cd0,8);
        auVar20 = NEON_ushl(auVar20,_DAT_100c8b860,8);
        auVar24._8_8_ = puVar12;
        auVar24._0_8_ = puVar12;
        uVar19 = CONCAT17(auVar23[8],
                          CONCAT16(auVar23[0],
                                   CONCAT15(auVar20[8],
                                            CONCAT14(auVar20[0],
                                                     CONCAT13(auVar21[8],
                                                              CONCAT12(auVar21[0],(short)puVar5)))))
                         );
        auVar23 = NEON_ushl(auVar24,_DAT_100c50110,8);
        auVar20 = NEON_ushl(auVar24,_DAT_100c8b880,8);
        auVar21._0_2_ = auVar20._0_2_;
        auVar21._2_2_ = auVar20._8_2_;
        auVar21._4_2_ = auVar23._0_2_;
        auVar21._6_2_ = auVar23._8_2_;
        auVar21._8_8_ = 0;
        uStack_73 = (undefined1)((ulong)puVar12 >> 0x28);
        uVar15 = (ulong)puVar12 >> 0x30;
        goto LAB_100ace16c;
      }
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      iVar11 = (int)((ulong)puVar5 >> 0x20);
      goto LAB_100ace2d8;
    }
    if (uVar14 == 2) {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      goto LAB_100ace0b8;
    }
    puVar7 = &local_58;
    FUN_100ad8ff4();
    uVar1 = (uint)((ulong)puVar13 >> 0x20);
    uVar14 = uVar1 >> 0x1e;
    if (1 < uVar1 >> 0x1e) {
      if (uVar14 != 2) {
        FUN_100ad8ff4(&local_5c);
        goto LAB_100ace4d8;
      }
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      goto LAB_100ace38c;
    }
    if (uVar14 == 0) {
      auVar23._8_8_ = puVar7;
      auVar23._0_8_ = puVar7;
      auVar21 = NEON_ushl(auVar23,_DAT_100c8b870,8);
      auVar24 = NEON_ushl(auVar23,_DAT_100c94cd0,8);
      auVar20 = NEON_ushl(auVar23,_DAT_100c8b860,8);
      auVar22._8_8_ = puVar13;
      auVar22._0_8_ = puVar13;
      uVar19 = CONCAT17(auVar24[8],
                        CONCAT16(auVar24[0],
                                 CONCAT15(auVar20[8],
                                          CONCAT14(auVar20[0],
                                                   CONCAT13(auVar21[8],
                                                            CONCAT12(auVar21[0],(short)puVar7))))));
      auVar21 = NEON_ushl(auVar22,_DAT_100c50110,8);
      auVar20 = NEON_ushl(auVar22,_DAT_100c8b880,8);
      uVar17 = CONCAT26(auVar21._8_2_,CONCAT24(auVar21._0_2_,CONCAT22(auVar20._8_2_,auVar20._0_2_)))
      ;
      uStack_73 = (undefined1)((ulong)puVar13 >> 0x28);
      uVar15 = (ulong)puVar13 >> 0x30;
      goto LAB_100ace1bc;
    }
    uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
    iVar11 = (int)((ulong)puVar7 >> 0x20);
LAB_100ace318:
    local_70 = (uint)puVar7;
    uStack_6c = (undefined2)iVar11;
    uStack_6a = (undefined2)((uint)iVar11 >> 0x10);
    local_68 = (undefined6)uVar15;
    uStack_62 = (undefined2)(uVar15 >> 0x30);
    if (iVar11 < (int)local_70) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100ace53c);
      (*pcVar4)();
    }
    if (0x7ffffffa < iVar11) {
      lVar18 = (long)(int)local_70;
      pRVar6 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar6,0x20,7);
      *(long *)(pRVar6 + 0x10) = lVar18;
      *(long *)(pRVar6 + 0x18) = (long)iVar11;
      local_80._0_1_ = SUB81(pRVar6,0);
      local_80._1_1_ = (undefined1)((ulong)pRVar6 >> 8);
      local_80._2_1_ = (undefined1)((ulong)pRVar6 >> 0x10);
      local_80._3_1_ = (undefined1)((ulong)pRVar6 >> 0x18);
      local_80._4_1_ = (undefined1)((ulong)pRVar6 >> 0x20);
      local_80._5_1_ = (undefined1)((ulong)pRVar6 >> 0x28);
      local_80._6_1_ = (undefined1)((ulong)pRVar6 >> 0x30);
      local_80._7_1_ = (undefined1)((ulong)pRVar6 >> 0x38);
      local_78 = (byte)uVar15;
      bStack_77 = (byte)(uVar15 >> 8);
      uStack_76 = (undefined1)(uVar15 >> 0x10);
      uStack_75 = (undefined1)(uVar15 >> 0x18);
      uStack_74 = (undefined1)(uVar15 >> 0x20);
      uStack_73 = (undefined1)(uVar15 >> 0x28);
      local_72 = (char)(uVar15 >> 0x30);
      uStack_71 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_5c,(LargeSlice)&local_58);
      goto LAB_100ace4d8;
    }
  }
  Foundation::Data::InlineSlice::append((UnsafeRawBufferPointer)&local_5c,(InlineSlice)&local_58);
LAB_100ace4d8:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ace548 | FUN_100ace548 */

void FUN_100ace548(__DataStorage *param_1,ulong param_2)

{
  code *pcVar1;
  int iVar2;
  __DataStorage *p_Var3;
  __DataStorage *p_Var4;
  __DataStorage *p_Var5;
  ulong uVar6;
  ulong uVar7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar11 = (uint)(param_2 >> 0x20);
  iVar2 = (int)param_1;
  if (uVar11 >> 0x1e < 2) {
    if (uVar11 >> 0x1e == 0) {
      uVar10 = param_2 >> 0x30 & 0xff;
joined_r0x000100ace5ac:
      if (uVar10 != 0x14) goto LAB_100ace730;
    }
    else {
      iVar8 = (int)((ulong)param_1 >> 0x20);
      if (SBORROW4(iVar8,iVar2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace844);
        (*pcVar1)();
      }
      if (iVar8 - iVar2 != 0x14) goto LAB_100ace730;
    }
    uVar11 = uVar11 >> 0x1e;
    if (uVar11 == 2) {
      lVar12 = *(long *)(param_1 + 0x10);
      p_Var4 = param_1;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
      if (p_Var4 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace878:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace87c);
        (*pcVar1)();
      }
      p_Var3 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
      if (SBORROW8(lVar12,(long)p_Var3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace84c);
        (*pcVar1)();
      }
      p_Var4 = p_Var4 + (lVar12 - (long)p_Var3);
      Foundation::__DataStorage::get__length((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3)
      ;
      if (p_Var4 == (__DataStorage *)0x0) goto LAB_100ace878;
LAB_100ace658:
      p_Var4 = (__DataStorage *)(ulong)*(uint *)p_Var4;
    }
    else {
      p_Var4 = param_1;
      if (uVar11 == 1) {
        lVar12 = (long)iVar2;
        if ((long)param_1 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace848);
          (*pcVar1)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
        if (p_Var4 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace888);
          (*pcVar1)();
        }
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (SBORROW8(lVar12,(long)p_Var3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace850);
          (*pcVar1)();
        }
        p_Var4 = p_Var4 + (lVar12 - (long)p_Var3);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
        if (p_Var4 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace620);
          (*pcVar1)();
        }
        goto LAB_100ace658;
      }
    }
    if ((int)p_Var4 == 0x7064b50) {
      if (uVar11 == 2) {
        lVar12 = *(long *)(param_1 + 0x10);
        p_Var4 = param_1;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
        if (p_Var4 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace890:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace894);
          (*pcVar1)();
        }
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (SBORROW8(lVar12,(long)p_Var3)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace858);
          (*pcVar1)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
        if (p_Var4 + (lVar12 - (long)p_Var3) == (__DataStorage *)0x0) goto LAB_100ace890;
        uVar11 = *(uint *)(p_Var4 + (lVar12 - (long)p_Var3) + 4);
        lVar12 = *(long *)(param_1 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace8a8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace8ac);
          (*pcVar1)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace860);
          (*pcVar1)();
        }
        p_Var3 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (p_Var5 + (lVar12 - (long)p_Var4) == (__DataStorage *)0x0) goto LAB_100ace8a8;
        uVar10 = *(ulong *)(p_Var5 + (lVar12 - (long)p_Var4) + 8);
        lVar12 = *(long *)(param_1 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
        if (p_Var3 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace8c0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace8c4);
          (*pcVar1)();
        }
        p_Var4 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
        if (SBORROW8(lVar12,(long)p_Var4)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace868);
          (*pcVar1)();
        }
        p_Var3 = p_Var3 + (lVar12 - (long)p_Var4);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
        if (p_Var3 == (__DataStorage *)0x0) goto LAB_100ace8c0;
LAB_100ace814:
        uVar6 = (ulong)uVar11;
        p_Var4 = (__DataStorage *)(ulong)*(uint *)(p_Var3 + 0x10);
      }
      else {
        if (uVar11 == 1) {
          lVar12 = (long)iVar2;
          if ((long)param_1 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace854);
            (*pcVar1)();
          }
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
          if (param_1 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace89c:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace8a0);
            (*pcVar1)();
          }
          p_Var4 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),param_1);
          if (SBORROW8(lVar12,(long)p_Var4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace85c);
            (*pcVar1)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
          if (param_1 + (lVar12 - (long)p_Var4) == (__DataStorage *)0x0) goto LAB_100ace89c;
          uVar11 = *(uint *)(param_1 + (lVar12 - (long)p_Var4) + 4);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ace8b4:
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace8b8);
            (*pcVar1)();
          }
          p_Var4 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar12,(long)p_Var4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace864);
            (*pcVar1)();
          }
          p_Var3 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
          if (p_Var5 + (lVar12 - (long)p_Var4) == (__DataStorage *)0x0) goto LAB_100ace8b4;
          uVar10 = *(ulong *)(p_Var5 + (lVar12 - (long)p_Var4) + 8);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
          if (p_Var3 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_2 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace8d0);
            (*pcVar1)();
          }
          p_Var4 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var3);
          if (SBORROW8(lVar12,(long)p_Var4)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace86c);
            (*pcVar1)();
          }
          p_Var3 = p_Var3 + (lVar12 - (long)p_Var4);
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_2 & 0x3fffffffffffffff),p_Var4);
          if (p_Var3 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace730);
            (*pcVar1)();
          }
          goto LAB_100ace814;
        }
        uVar6 = (ulong)param_1 >> 0x20;
        uVar10 = param_2 & 0xffffffffffff;
      }
      uVar6 = uVar6 << 0x20 | 0x7064b50;
      uVar7 = (ulong)p_Var4 & 0xffffffff;
      goto LAB_100ace73c;
    }
  }
  else if (uVar11 >> 0x1e == 2) {
    uVar10 = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 0x10);
    if (SBORROW8(*(long *)(param_1 + 0x18),*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ace840);
      (*pcVar1)();
    }
    goto joined_r0x000100ace5ac;
  }
LAB_100ace730:
  uVar6 = 0;
  uVar10 = 0;
  uVar7 = 0x100000000;
LAB_100ace73c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar9) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar6,uVar10,uVar7);
  }
  return;
}



/* Address: 0x100ace8d0 | FUN_100ace8d0 */

void FUN_100ace8d0(undefined8 *param_1,__DataStorage *param_2,ulong param_3)

{
  ushort uVar1;
  ushort uVar2;
  code *pcVar3;
  int iVar4;
  __DataStorage *p_Var5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  int iVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  uint uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  ulong local_78;
  uint local_70;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar19 = (uint)(param_3 >> 0x20);
  iVar4 = (int)param_2;
  if (uVar19 >> 0x1e < 2) {
    if (uVar19 >> 0x1e == 0) {
      uVar10 = param_3 >> 0x30 & 0xff;
joined_r0x000100ace940:
      if (uVar10 != 0x38) goto LAB_100acecf0;
    }
    else {
      iVar8 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar8,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100aceefc);
        (*pcVar3)();
      }
      if (iVar8 - iVar4 != 0x38) goto LAB_100acecf0;
    }
    uVar19 = uVar19 >> 0x1e;
    lVar17 = (long)param_2 >> 0x20;
    if (uVar19 == 2) {
      lVar16 = *(long *)(param_2 + 0x10);
      p_Var7 = param_2;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
      if (p_Var7 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acef64:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef68);
        (*pcVar3)();
      }
      p_Var5 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
      if (SBORROW8(lVar16,(long)p_Var5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef04);
        (*pcVar3)();
      }
      p_Var7 = p_Var7 + (lVar16 - (long)p_Var5);
      Foundation::__DataStorage::get__length((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5)
      ;
      if (p_Var7 == (__DataStorage *)0x0) goto LAB_100acef64;
LAB_100ace9ec:
      p_Var7 = (__DataStorage *)(ulong)*(uint *)p_Var7;
    }
    else {
      p_Var7 = param_2;
      if (uVar19 == 1) {
        lVar16 = (long)iVar4;
        if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef00);
          (*pcVar3)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef74);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar16,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef08);
          (*pcVar3)();
        }
        p_Var7 = p_Var7 + (lVar16 - (long)p_Var5);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var7 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ace9b4);
          (*pcVar3)();
        }
        goto LAB_100ace9ec;
      }
    }
    if (((int)p_Var7 == 0x6064b50) && (uVar19 != 0)) {
      if (uVar19 == 2) {
        lVar16 = *(long *)(param_2 + 0x10);
        p_Var7 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acef7c:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef80);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar16,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef10);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var7 + (lVar16 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100acef7c;
        uVar15 = *(undefined8 *)(p_Var7 + (lVar16 - (long)p_Var5) + 4);
        lVar16 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acef94:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef98);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef18);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acef94;
        uVar1 = *(ushort *)(p_Var6 + (lVar16 - (long)p_Var7) + 0xc);
        lVar16 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefac:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefb0);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef20);
          (*pcVar3)();
        }
        p_Var5 = p_Var5 + (lVar16 - (long)p_Var7);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 == (__DataStorage *)0x0) goto LAB_100acefac;
      }
      else {
        lVar16 = (long)iVar4;
        if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef0c);
          (*pcVar3)();
        }
        p_Var7 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acef88:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef8c);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar16,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef14);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var7 + (lVar16 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100acef88;
        uVar15 = *(undefined8 *)(p_Var7 + (lVar16 - (long)p_Var5) + 4);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefa0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefa4);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef1c);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acefa0;
        uVar1 = *(ushort *)(p_Var6 + (lVar16 - (long)p_Var7) + 0xc);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefbc);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef24);
          (*pcVar3)();
        }
        p_Var5 = p_Var5 + (lVar16 - (long)p_Var7);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefc0);
          (*pcVar3)();
        }
      }
      uVar2 = *(ushort *)(p_Var5 + 0xe);
      if (0x2c < (ulong)uVar2) {
        if (param_3 >> 0x3e == 2) {
          lVar17 = *(long *)(param_2 + 0x10);
          p_Var7 = param_2;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
          if (p_Var7 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefc8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefcc);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (SBORROW8(lVar17,(long)p_Var5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef2c);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var7 + (lVar17 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100acefc8;
          uVar19 = *(uint *)(p_Var7 + (lVar17 - (long)p_Var5) + 0x10);
          lVar17 = *(long *)(param_2 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefe0:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefe4);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar17,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef34);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar17 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acefe0;
          local_70 = *(uint *)(p_Var6 + (lVar17 - (long)p_Var7) + 0x14);
          lVar17 = *(long *)(param_2 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100aceff8:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100aceffc);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar17,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef3c);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar17 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100aceff8;
          uVar20 = *(undefined8 *)(p_Var5 + (lVar17 - (long)p_Var7) + 0x18);
          lVar17 = *(long *)(param_2 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf010:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf014);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar17,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef44);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar17 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acf010;
          uVar21 = *(undefined8 *)(p_Var6 + (lVar17 - (long)p_Var7) + 0x20);
          lVar17 = *(long *)(param_2 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf028:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf02c);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar17,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef4c);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar17 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acf028;
          uVar18 = *(undefined8 *)(p_Var5 + (lVar17 - (long)p_Var7) + 0x28);
          lVar17 = *(long *)(param_2 + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf040:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf044);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar17,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef54);
            (*pcVar3)();
          }
          p_Var6 = p_Var6 + (lVar17 - (long)p_Var7);
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 == (__DataStorage *)0x0) goto LAB_100acf040;
        }
        else {
          lVar16 = (long)iVar4;
          if (lVar17 < lVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef28);
            (*pcVar3)();
          }
          p_Var7 = param_2;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
          if (p_Var7 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefd4:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acefd8);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (SBORROW8(lVar16,(long)p_Var5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef30);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var7 + (lVar16 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100acefd4;
          uVar19 = *(uint *)(p_Var7 + (lVar16 - (long)p_Var5) + 0x10);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acefec:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100aceff0);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef38);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acefec;
          local_70 = *(uint *)(p_Var6 + (lVar16 - (long)p_Var7) + 0x14);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf004:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf008);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef40);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acf004;
          uVar20 = *(undefined8 *)(p_Var5 + (lVar16 - (long)p_Var7) + 0x18);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf01c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf020);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef48);
            (*pcVar3)();
          }
          p_Var5 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acf01c;
          uVar21 = *(undefined8 *)(p_Var6 + (lVar16 - (long)p_Var7) + 0x20);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (p_Var5 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf034:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf038);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef50);
            (*pcVar3)();
          }
          p_Var6 = (__DataStorage *)
                   Foundation::__DataStorage::get__length
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var5 + (lVar16 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100acf034;
          uVar18 = *(undefined8 *)(p_Var5 + (lVar16 - (long)p_Var7) + 0x28);
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (p_Var6 == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100acf04c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acf050);
            (*pcVar3)();
          }
          p_Var7 = (__DataStorage *)
                   Foundation::__DataStorage::get__offset
                             ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
          if (SBORROW8(lVar16,(long)p_Var7)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100acef58);
            (*pcVar3)();
          }
          p_Var6 = p_Var6 + (lVar16 - (long)p_Var7);
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
          if (p_Var6 == (__DataStorage *)0x0) goto LAB_100acf04c;
        }
        local_78 = (ulong)uVar19;
        uVar14 = *(undefined8 *)(p_Var6 + 0x30);
        FUN_10003bf2c(param_2,param_3);
        uVar12 = (ulong)uVar2 << 0x10 | local_78 << 0x20 | (ulong)uVar1;
        uVar10 = (ulong)local_70;
        uVar11 = 0xc000000000000000;
        uVar13 = 0x6064b50;
        goto LAB_100aced1c;
      }
    }
  }
  else if (uVar19 >> 0x1e == 2) {
    uVar10 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
    if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100aceef8);
      (*pcVar3)();
    }
    goto joined_r0x000100ace940;
  }
LAB_100acecf0:
  FUN_10003bf2c(param_2,param_3);
  uVar15 = 0;
  uVar20 = 0;
  uVar21 = 0;
  uVar18 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0xf000000000000000;
LAB_100aced1c:
  *param_1 = uVar13;
  param_1[1] = uVar15;
  param_1[2] = uVar12;
  param_1[3] = uVar10;
  param_1[4] = uVar20;
  param_1[5] = uVar21;
  param_1[6] = uVar18;
  param_1[7] = uVar14;
  param_1[8] = 0;
  param_1[9] = uVar11;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar9) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100acf050 | FUN_100acf050 */

void FUN_100acf050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100acf064 | FUN_100acf064 */

undefined1  [16] FUN_100acf064(void)

{
  return ZEXT816(0x100f30f48);
}



/* Address: 0x100acf074 | FUN_100acf074 */

undefined4 * FUN_100acf074(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar2;
  return param_1;
}



/* Address: 0x100acf0d8 | FUN_100acf0d8 */

undefined4 * FUN_100acf0d8(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined2 *)(param_1 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined2 *)((long)param_1 + 0x12) = *(undefined2 *)((long)param_2 + 0x12);
  param_1[5] = param_2[5];
  param_1[6] = param_2[6];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 0x12);
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar4 = *(undefined8 *)(param_1 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar1;
  *(undefined8 *)(param_1 + 0x12) = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100acf16c | FUN_100acf16c */

void FUN_100acf16c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x100acf188 | FUN_100acf188 */

undefined4 * FUN_100acf188(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  param_1[4] = param_2[4];
  *(undefined8 *)(param_1 + 5) = *(undefined8 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 8);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x12);
  uVar3 = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
  *(undefined8 *)(param_1 + 0x10) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}



/* Address: 0x100acf1e8 | FUN_100acf1e8 */

int FUN_100acf1e8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xc < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0xd;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0x12) >> 0x20);
  uVar1 = (uVar1 >> 0x1e | (uVar1 >> 0x1c & 3) << 2) ^ 0xf;
  if (0xb < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x100acf23c | FUN_100acf23c */

void FUN_100acf23c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xd) {
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[8] = 0;
      param_1[9] = (ulong)((-param_2 >> 2 & 3) + param_2 * -4) << 0x3c;
      return;
    }
  }
  else {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 0xd);
    if (0xc < param_3) {
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  return;
}



/* Address: 0x100acf2a0 | FUN_100acf2a0 */

undefined1  [16] FUN_100acf2a0(void)

{
  return ZEXT816(0x100f30fd0);
}



/* Address: 0x100acf2b0 | thunk_FUN_100acc830 */

void thunk_FUN_100acc830(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x40),*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x100acf2b4 | FUN_100acf2b4 */

void FUN_100acf2b4(void)

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
  undefined4 local_a8;
  undefined1 uStack_a4;
  undefined1 uStack_a3;
  undefined1 uStack_a2;
  undefined1 uStack_a1;
  undefined1 local_a0;
  undefined1 uStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 local_9c;
  undefined1 uStack_9b;
  undefined1 local_9a;
  undefined1 uStack_99;
  int local_98;
  undefined2 uStack_94;
  undefined2 uStack_92;
  undefined6 local_90;
  undefined2 uStack_8a;
  undefined1 local_86 [2];
  undefined4 local_84;
  undefined4 local_80;
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
  local_80 = unaff_x20[3];
  local_84 = unaff_x20[4];
  uVar3 = *(undefined2 *)(unaff_x20 + 5);
  ppuStack_68 = (undefined4 **)0xc000000000000000;
  local_70 = (undefined4 *)0x0;
  puVar8 = &local_74;
  ppuVar11 = &local_70;
  local_86 = (undefined1  [2])uVar3;
  local_78._2_2_ = uVar2;
  FUN_100ad8ff4();
  uVar5 = uStack_92;
  uVar4 = uStack_94;
  uVar1 = (uint)((ulong)ppuVar11 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = ppuVar11;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(ppuVar11,0);
      uStack_9f = (undefined1)((ulong)ppuVar11 >> 8);
      uStack_9e = (undefined1)((ulong)ppuVar11 >> 0x10);
      uStack_9d = (undefined1)((ulong)ppuVar11 >> 0x18);
      local_9c = (undefined1)((ulong)ppuVar11 >> 0x20);
      uVar15 = (ulong)ppuVar11 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)ppuVar11 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_94 = uVar4;
        uStack_92 = uVar5;
        *(undefined2 *)((long)&local_a8 + uVar15) = uVar2;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0084);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acf4fc:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_78 + 2),(InlineSlice)&local_74);
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar12 = (undefined4 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)ppuVar11 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0068);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acf4fc;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_78 + 2),(LargeSlice)&local_74);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)ppuVar11 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)ppuVar11 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_78 + 2),(LargeSlice)&local_74);
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar12 = (undefined4 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_78 + 2);
    puVar12 = &local_74;
    uStack_94 = uVar4;
    uStack_92 = uVar5;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar12,0);
      uStack_9f = (undefined1)((ulong)puVar12 >> 8);
      uStack_9e = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar12 >> 0x18);
      local_9c = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined2 *)((long)&local_a8 + uVar15) = local_78._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0088);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acf6d0:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_78,(InlineSlice)(local_78 + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad006c);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acf6d0;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_78,(LargeSlice)(local_78 + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_78,(LargeSlice)(local_78 + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_78;
    puVar13 = local_78 + 2;
    uStack_94 = uVar2;
    uStack_92 = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar13,0);
      uStack_9f = (undefined1)((ulong)puVar13 >> 8);
      uStack_9e = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar13 >> 0x18);
      local_9c = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined2 *)((long)&local_a8 + uVar15) = local_7c._2_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad008c);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acf8a4:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)(local_7c + 2),(InlineSlice)local_78);
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0070);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acf8a4;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)(local_7c + 2),(LargeSlice)local_78);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)(local_7c + 2),(LargeSlice)local_78);
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)(local_7c + 2);
    puVar13 = local_78;
    uStack_94 = uVar2;
    uStack_92 = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar13,0);
      uStack_9f = (undefined1)((ulong)puVar13 >> 8);
      uStack_9e = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar13 >> 0x18);
      local_9c = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined2 *)((long)&local_a8 + uVar15) = local_7c._0_2_;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0090);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acfa78:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)local_7c,(InlineSlice)(local_7c + 2));
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0074);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffd) goto LAB_100acfa78;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append
                ((UnsafeRawBufferPointer)local_7c,(LargeSlice)(local_7c + 2));
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append
              ((UnsafeRawBufferPointer)local_7c,(LargeSlice)(local_7c + 2));
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = (undefined4 *)local_7c;
    puVar13 = local_7c + 2;
    uStack_94 = uVar2;
    uStack_92 = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar13,0);
      uStack_9f = (undefined1)((ulong)puVar13 >> 8);
      uStack_9e = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar13 >> 0x18);
      local_9c = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined4 *)((long)&local_a8 + uVar15) = local_80;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0094);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar13 = (undefined1 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acfc50:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_80,(InlineSlice)local_7c);
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0078);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100acfc50;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_80,(LargeSlice)local_7c);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar13 = (undefined1 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_80,(LargeSlice)local_7c);
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar13 = (undefined1 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_80;
    puVar13 = local_7c;
    uStack_94 = uVar2;
    uStack_92 = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar13 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar13;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar13,0);
      uStack_9f = (undefined1)((ulong)puVar13 >> 8);
      uStack_9e = (undefined1)((ulong)puVar13 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar13 >> 0x18);
      local_9c = (undefined1)((ulong)puVar13 >> 0x20);
      uVar15 = (ulong)puVar13 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar13 >> 0x28);
      if (uVar15 < 0xb) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined4 *)((long)&local_a8 + uVar15) = local_84;
        uVar1 = (int)uVar15 + 4;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0098);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        puVar8 = (undefined4 *)
                 CONCAT17(uStack_a1,
                          CONCAT16(uStack_a2,
                                   CONCAT15(uStack_a3,
                                            CONCAT14(uStack_a4,
                                                     CONCAT13(local_a8._3_1_,
                                                              CONCAT12(local_a8._2_1_,
                                                                       CONCAT11(local_a8._1_1_,
                                                                                (undefined1)local_a8
                                                                               )))))));
        puVar12 = (undefined4 *)
                  CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                           CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))));
      }
      else {
        local_90 = (undefined6)
                   (CONCAT17(uStack_9b,
                             CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                        CONCAT14(uStack_9e,
                                                                 CONCAT13(uStack_9f,
                                                                          CONCAT12(local_a0,
                                                  uStack_92)))))) >> 0x10);
        local_98 = iVar7;
        p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
        _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
        p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
        local_98 = 0;
        uStack_94 = (undefined2)uVar15;
        uStack_92 = 0;
        local_90 = SUB86(p_Var10,0);
        uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
LAB_100acfe2c:
        Foundation::Data::InlineSlice::append
                  ((UnsafeRawBufferPointer)&local_84,(InlineSlice)&local_80);
        puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
        puVar12 = (undefined4 *)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
      }
    }
    else {
      uVar15 = (ulong)puVar13 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad007c);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (lVar16 < 0x7ffffffb) goto LAB_100acfe2c;
      pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
      _swift_allocObject(pRVar9,0x20,7);
      *(long *)(pRVar9 + 0x10) = (long)iVar7;
      *(long *)(pRVar9 + 0x18) = lVar16;
      local_a8._0_1_ = SUB81(pRVar9,0);
      local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
      uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
      uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
      uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
      uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
      local_a0 = (undefined1)uVar15;
      uStack_9f = (undefined1)(uVar15 >> 8);
      uStack_9e = (undefined1)(uVar15 >> 0x10);
      uStack_9d = (undefined1)(uVar15 >> 0x18);
      local_9c = (undefined1)(uVar15 >> 0x20);
      uStack_9b = (undefined1)(uVar15 >> 0x28);
      local_9a = (undefined1)(uVar15 >> 0x30);
      uStack_99 = (undefined1)(uVar15 >> 0x38);
      Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)&local_80);
      puVar8 = (undefined4 *)
               CONCAT17(uStack_a1,
                        CONCAT16(uStack_a2,
                                 CONCAT15(uStack_a3,
                                          CONCAT14(uStack_a4,
                                                   CONCAT13(local_a8._3_1_,
                                                            CONCAT12(local_a8._2_1_,
                                                                     CONCAT11(local_a8._1_1_,
                                                                              (undefined1)local_a8))
                                                           )))));
      puVar12 = (undefined4 *)
                (CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0))))))) | 0x8000000000000000);
    }
  }
  else if (uVar14 == 2) {
    local_90 = (undefined6)((ulong)puVar13 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar13 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)&local_84,(LargeSlice)&local_80);
    puVar8 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    puVar12 = (undefined4 *)(CONCAT26(uStack_8a,local_90) | 0x8000000000000000);
  }
  else {
    puVar8 = &local_84;
    puVar12 = &local_80;
    uStack_94 = uVar2;
    uStack_92 = uVar4;
    FUN_100ad8ff4();
  }
  uVar4 = uStack_92;
  uVar2 = uStack_94;
  uVar1 = (uint)((ulong)puVar12 >> 0x20);
  uVar14 = uVar1 >> 0x1e;
  iVar7 = (int)puVar8;
  uStack_94 = (undefined2)((ulong)puVar8 >> 0x20);
  uStack_92 = (undefined2)((ulong)puVar8 >> 0x30);
  local_70 = puVar8;
  ppuStack_68 = (undefined4 **)puVar12;
  if (uVar1 >> 0x1e < 2) {
    if (uVar14 == 0) {
      local_a8._0_1_ = SUB81(puVar8,0);
      local_a8._1_1_ = (undefined1)((ulong)puVar8 >> 8);
      local_a8._2_1_ = (undefined1)((ulong)puVar8 >> 0x10);
      local_a8._3_1_ = (undefined1)((ulong)puVar8 >> 0x18);
      uStack_a4 = (undefined1)((ulong)puVar8 >> 0x20);
      uStack_a3 = (undefined1)((ulong)puVar8 >> 0x28);
      uStack_a2 = (undefined1)((ulong)puVar8 >> 0x30);
      uStack_a1 = (undefined1)((ulong)puVar8 >> 0x38);
      local_a0 = SUB81(puVar12,0);
      uStack_9f = (undefined1)((ulong)puVar12 >> 8);
      uStack_9e = (undefined1)((ulong)puVar12 >> 0x10);
      uStack_9d = (undefined1)((ulong)puVar12 >> 0x18);
      local_9c = (undefined1)((ulong)puVar12 >> 0x20);
      uVar15 = (ulong)puVar12 >> 0x30 & 0xff;
      uStack_9b = (undefined1)((ulong)puVar12 >> 0x28);
      if (uVar15 < 0xd) {
        uStack_94 = uVar2;
        uStack_92 = uVar4;
        *(undefined2 *)((long)&local_a8 + uVar15) = uVar3;
        uVar1 = (int)uVar15 + 2;
        if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad009c);
          (*pcVar6)();
        }
        local_9a = (undefined1)uVar1;
        local_70 = (undefined4 *)
                   CONCAT17(uStack_a1,
                            CONCAT16(uStack_a2,
                                     CONCAT15(uStack_a3,
                                              CONCAT14(uStack_a4,
                                                       CONCAT13(local_a8._3_1_,
                                                                CONCAT12(local_a8._2_1_,
                                                                         CONCAT11(local_a8._1_1_,
                                                                                  (undefined1)
                                                                                  local_a8)))))));
        ppuStack_68 = (undefined4 **)
                      CONCAT44((uint)CONCAT11(uStack_9b,local_9c) | (uVar1 & 0xff) << 0x10,
                               CONCAT13(uStack_9d,CONCAT12(uStack_9e,CONCAT11(uStack_9f,local_a0))))
        ;
        goto LAB_100ad0020;
      }
      local_90 = (undefined6)
                 (CONCAT17(uStack_9b,
                           CONCAT16(local_9c,CONCAT15(uStack_9d,
                                                      CONCAT14(uStack_9e,
                                                               CONCAT13(uStack_9f,
                                                                        CONCAT12(local_a0,uStack_92)
                                                                       ))))) >> 0x10);
      local_98 = iVar7;
      p_Var10 = Foundation::__DataStorage::typeMetadataAccessor();
      _swift_allocObject(p_Var10,*(undefined4 *)(p_Var10 + 0x30),*(undefined2 *)(p_Var10 + 0x34));
      p_Var10 = Foundation::__DataStorage::_init(p_Var10,(__int64)&local_98);
      local_98 = 0;
      uStack_94 = (undefined2)uVar15;
      uStack_92 = 0;
      local_90 = SUB86(p_Var10,0);
      uStack_8a = (undefined2)((ulong)p_Var10 >> 0x30);
    }
    else {
      uVar15 = (ulong)puVar12 & 0x3fffffffffffffff;
      local_90 = (undefined6)uVar15;
      uStack_8a = (undefined2)(uVar15 >> 0x30);
      lVar16 = (long)puVar8 >> 0x20;
      if (lVar16 < iVar7) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad0080);
        local_98 = iVar7;
        (*pcVar6)();
      }
      ppuStack_68 = (undefined4 **)0xc000000000000000;
      local_70 = (undefined4 *)0x0;
      local_98 = iVar7;
      FUN_10003bf2c(0,0xc000000000000000);
      if (0x7ffffffc < lVar16) {
        pRVar9 = Foundation::Data::RangeReference::typeMetadataAccessor();
        _swift_allocObject(pRVar9,0x20,7);
        *(long *)(pRVar9 + 0x10) = (long)iVar7;
        *(long *)(pRVar9 + 0x18) = lVar16;
        local_a8._0_1_ = SUB81(pRVar9,0);
        local_a8._1_1_ = (undefined1)((ulong)pRVar9 >> 8);
        local_a8._2_1_ = (undefined1)((ulong)pRVar9 >> 0x10);
        local_a8._3_1_ = (undefined1)((ulong)pRVar9 >> 0x18);
        uStack_a4 = (undefined1)((ulong)pRVar9 >> 0x20);
        uStack_a3 = (undefined1)((ulong)pRVar9 >> 0x28);
        uStack_a2 = (undefined1)((ulong)pRVar9 >> 0x30);
        uStack_a1 = (undefined1)((ulong)pRVar9 >> 0x38);
        local_a0 = (undefined1)uVar15;
        uStack_9f = (undefined1)(uVar15 >> 8);
        uStack_9e = (undefined1)(uVar15 >> 0x10);
        uStack_9d = (undefined1)(uVar15 >> 0x18);
        local_9c = (undefined1)(uVar15 >> 0x20);
        uStack_9b = (undefined1)(uVar15 >> 0x28);
        local_9a = (undefined1)(uVar15 >> 0x30);
        uStack_99 = (undefined1)(uVar15 >> 0x38);
        Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_86,(LargeSlice)&local_84)
        ;
        local_70 = (undefined4 *)
                   CONCAT17(uStack_a1,
                            CONCAT16(uStack_a2,
                                     CONCAT15(uStack_a3,
                                              CONCAT14(uStack_a4,
                                                       CONCAT13(local_a8._3_1_,
                                                                CONCAT12(local_a8._2_1_,
                                                                         CONCAT11(local_a8._1_1_,
                                                                                  (undefined1)
                                                                                  local_a8)))))));
        uVar15 = CONCAT17(uStack_99,
                          CONCAT16(local_9a,CONCAT15(uStack_9b,
                                                     CONCAT14(local_9c,CONCAT13(uStack_9d,
                                                                                CONCAT12(uStack_9e,
                                                                                         CONCAT11(
                                                  uStack_9f,local_a0)))))));
        goto LAB_100acffac;
      }
    }
    Foundation::Data::InlineSlice::append((UnsafeRawBufferPointer)local_86,(InlineSlice)&local_84);
    local_70 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    ppuStack_68 = (undefined4 **)(CONCAT26(uStack_8a,local_90) | 0x4000000000000000);
  }
  else {
    if (uVar14 != 2) {
      puVar8 = (undefined4 *)local_86;
      puVar12 = &local_84;
      uStack_94 = uVar2;
      uStack_92 = uVar4;
      FUN_100ad8ff4();
      local_70 = puVar8;
      ppuStack_68 = (undefined4 **)puVar12;
      goto LAB_100ad0020;
    }
    local_90 = (undefined6)((ulong)puVar12 & 0x3fffffffffffffff);
    uStack_8a = (undefined2)(((ulong)puVar12 & 0x3fffffffffffffff) >> 0x30);
    ppuStack_68 = (undefined4 **)0xc000000000000000;
    local_70 = (undefined4 *)0x0;
    local_98 = iVar7;
    FUN_10003bf2c(0,0xc000000000000000);
    Foundation::Data::LargeSlice::append((UnsafeRawBufferPointer)local_86,(LargeSlice)&local_84);
    local_70 = (undefined4 *)CONCAT26(uStack_92,CONCAT24(uStack_94,local_98));
    uVar15 = CONCAT26(uStack_8a,local_90);
LAB_100acffac:
    ppuStack_68 = (undefined4 **)(uVar15 | 0x8000000000000000);
  }
LAB_100ad0020:
  Foundation::Data::append
            ((Data)*(undefined **)(unaff_x20 + 6),(Data)*(undefined **)(unaff_x20 + 8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(local_70,ppuStack_68);
  }
  return;
}



/* Address: 0x100ad00a0 | FUN_100ad00a0 */

undefined * FUN_100ad00a0(void)

{
  return &DAT_100c94410;
}



/* Address: 0x100ad00ac | FUN_100ad00ac */

undefined * FUN_100ad00ac(void)

{
  return &DAT_100c94418;
}



/* Address: 0x100ad00b8 | FUN_100ad00b8 */

undefined * FUN_100ad00b8(void)

{
  return &DAT_100c94422;
}



/* Address: 0x100ad00c4 | FUN_100ad00c4 */

undefined * FUN_100ad00c4(void)

{
  return &DAT_100c94420;
}



/* Address: 0x100ad00d0 | FUN_100ad00d0 */

undefined * FUN_100ad00d0(void)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  
  lVar1 = unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory;
  if (*(ulong *)(lVar1 + 0x48) >> 0x3c < 0xf) {
    uVar6 = *(ulong *)(lVar1 + 0x28);
    uVar5 = *(ulong *)(lVar1 + 0x38);
  }
  else {
    uVar6 = (ulong)*(ushort *)
                    (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord + 10);
    uVar5 = (ulong)*(uint *)(unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord +
                            0x10);
  }
  puVar3 = &DAT_100f31070;
  puVar2 = puVar3;
  _swift_allocObject(&DAT_100f31070,0x18,7);
  *(ulong *)(puVar2 + 0x10) = uVar5;
  _swift_allocObject(&DAT_100f31070,0x18,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar4 = &DAT_100f31098;
  _swift_allocObject(&DAT_100f31098,0x30,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(ulong *)(puVar4 + 0x18) = uVar6;
  *(long *)(puVar4 + 0x20) = unaff_x20;
  *(undefined **)(puVar4 + 0x28) = puVar2;
  puVar3 = &DAT_100ff84a8;
  FUN_1000f7830(&DAT_100ff84a8,&DAT_100c94428);
  _swift_allocObject();
  *(code **)(puVar3 + 0x10) = FUN_100ad1448;
  *(undefined **)(puVar3 + 0x18) = puVar4;
  _swift_retain();
  return puVar3;
}



/* Address: 0x100ad01c8 | FUN_100ad01c8 */

void FUN_100ad01c8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100ad01d8 | FUN_100ad01d8 */

undefined8
FUN_100ad01d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100ad0610(param_1,param_2,param_3,param_4);
  return unaff_x20;
}



/* Address: 0x100ad0244 | FUN_100ad0244 */

undefined8 FUN_100ad0244(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100ad0300(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x100ad02a8 | FUN_100ad02a8 */

void FUN_100ad02a8(undefined8 param_1)

{
  long lVar1;
  URL UVar2;
  long unaff_x20;
  
  lVar1 = _TtC13ZIPFoundation7Archive::url;
  UVar2 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100ad02ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar2.unknown + -8) + 0x10))(param_1,unaff_x20 + lVar1,UVar2.unknown);
  return;
}



/* Address: 0x100ad02f0 | FUN_100ad02f0 */

undefined1 FUN_100ad02f0(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::accessMode);
}



/* Address: 0x100ad0300 | FUN_100ad0300 */

void FUN_100ad0300(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  Encoding EVar4;
  URL UVar5;
  long unaff_x20;
  long unaff_x21;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_288 [104];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0xf000000000000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  lVar3 = _TtC13ZIPFoundation7Archive::pathEncoding;
  EVar4 = Encoding::_typeMetadataAccessor();
  (**(code **)(*(long *)(EVar4.unknown + -8) + 0x38))(unaff_x20 + lVar3,1,1,EVar4.unknown);
  *(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile) = 0;
  lVar2 = _TtC13ZIPFoundation7Archive::url;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar5.unknown + -8);
  (**(code **)(lVar6 + 0x10))(unaff_x20 + lVar2,param_1,UVar5.unknown);
  *(char *)(unaff_x20 + _TtC13ZIPFoundation7Archive::accessMode) = (char)param_2;
  _swift_beginAccess(unaff_x20 + lVar3,&local_1b0,0x21,0);
  FUN_100ad1454(param_3,unaff_x20 + lVar3);
  _swift_endAccess(&local_1b0);
  FUN_100ab84bc(&local_1b0,param_1,param_2);
  lVar3 = _TtC13ZIPFoundation7Archive::archiveFile;
  if (unaff_x21 == 0) {
    *(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile) = local_1b0;
    uStack_98 = uStack_1a0;
    local_a0 = local_1a8;
    uStack_88 = uStack_190;
    uStack_90 = local_198;
    puVar1 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
    puVar1[1] = uStack_1a0;
    *puVar1 = local_1a8;
    puVar1[3] = uStack_190;
    puVar1[2] = local_198;
    puVar1[4] = local_188;
    uStack_108 = uStack_178;
    local_110 = local_180;
    uStack_f8 = uStack_168;
    uStack_100 = uStack_170;
    uStack_c8 = uStack_138;
    local_d0 = local_140;
    uStack_b8 = uStack_128;
    uStack_c0 = local_130;
    uStack_e8 = uStack_158;
    local_f0 = local_160;
    uStack_d8 = uStack_148;
    uStack_e0 = local_150;
    puVar1 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
    uStack_218 = puVar1[1];
    local_220 = *puVar1;
    uStack_208 = puVar1[3];
    uStack_210 = puVar1[2];
    uStack_1d8 = puVar1[9];
    local_1e0 = puVar1[8];
    uStack_1c8 = puVar1[0xb];
    uStack_1d0 = puVar1[10];
    uStack_1f8 = puVar1[5];
    local_200 = puVar1[4];
    uStack_1e8 = puVar1[7];
    uStack_1f0 = puVar1[6];
    local_80 = local_188;
    local_b0 = local_120;
    local_1c0 = *(undefined4 *)(puVar1 + 0xc);
    puVar1[1] = uStack_178;
    *puVar1 = local_180;
    puVar1[3] = uStack_168;
    puVar1[2] = uStack_170;
    *(undefined4 *)(puVar1 + 0xc) = local_120;
    puVar1[9] = uStack_138;
    puVar1[8] = local_140;
    puVar1[0xb] = uStack_128;
    puVar1[10] = local_130;
    puVar1[5] = uStack_158;
    puVar1[4] = local_160;
    puVar1[7] = uStack_148;
    puVar1[6] = local_150;
    FUN_100abcbb8(&local_a0,auStack_288);
    FUN_1000f8cac(&local_110,auStack_288,&DAT_100ff82d0,&DAT_100c94208);
    FUN_1000fb4c4(&local_220,&DAT_100ff82d0,&DAT_100c94208);
    _setvbuf(*(FILE **)(unaff_x20 + lVar3),(char *)0x0,0,0x4000);
    FUN_100acc644(&local_1b0);
    FUN_1000fb4c4(param_3,&DAT_100ff82c0,&DAT_100c94430);
    (**(code **)(lVar6 + 8))(param_1,UVar5.unknown);
  }
  else {
    FUN_1000fb4c4(param_3,&DAT_100ff82c0,&DAT_100c94430);
    pcVar7 = *(code **)(lVar6 + 8);
    (*pcVar7)(param_1,UVar5.unknown);
    (*pcVar7)(unaff_x20 + lVar2,UVar5.unknown);
    FUN_1000fb4c4(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory,&DAT_100ff82d0
                  ,&DAT_100c94208);
    FUN_1000fb4c4(unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,&DAT_100ff82c0,
                  &DAT_100c94430);
    _swift_release(*(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile));
    _swift_deallocPartialClassInstance();
  }
  return;
}



/* Address: 0x100ad0610 | FUN_100ad0610 */

void FUN_100ad0610(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  URL UVar4;
  Encoding EVar5;
  long lVar6;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  long lVar11;
  undefined8 local_2a0;
  undefined1 auStack_288 [104];
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined4 local_1c0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  
  local_2a0 = *unaff_x20;
  puVar3 = &DAT_100ff8468;
  FUN_1000f7830(&DAT_100ff8468,&DAT_100c94440);
  lVar7 = (long)&local_2a0 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar4.unknown + -8);
  lVar11 = lVar7 - (*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar1 = (undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory)
  ;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  puVar1[5] = 0;
  puVar1[4] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0xf000000000000000;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  *(undefined4 *)(puVar1 + 0xc) = 0;
  lVar2 = _TtC13ZIPFoundation7Archive::pathEncoding;
  EVar5 = Encoding::_typeMetadataAccessor();
  (**(code **)(*(long *)(EVar5.unknown + -8) + 0x38))((long)unaff_x20 + lVar2,1,1,EVar5.unknown);
  *(undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile) = 0;
  Foundation::URL::_init();
  lVar6 = lVar7;
  (**(code **)(lVar9 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar9 + 0x20))(lVar11,lVar7,UVar4.unknown);
    lVar6 = _TtC13ZIPFoundation7Archive::url;
    (**(code **)(lVar9 + 0x10))
              ((long)unaff_x20 + _TtC13ZIPFoundation7Archive::url,lVar11,UVar4.unknown);
    *(char *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::accessMode) = (char)param_3;
    _swift_beginAccess((long)unaff_x20 + lVar2,&local_1b0,0x21,0);
    FUN_100ad1454(param_4,(long)unaff_x20 + lVar2);
    _swift_endAccess(&local_1b0);
    FUN_100ab8828(&local_1b0,param_1,param_2,param_3);
    if (unaff_x21 == 0) {
      FUN_10003bf2c(param_1,param_2);
      FUN_1000fb4c4(param_4,&DAT_100ff82c0,&DAT_100c94430);
      (**(code **)(lVar9 + 8))(lVar11,UVar4.unknown);
      *(undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile) = local_1b0;
      local_78[0] = local_118;
      uVar8 = *(undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile);
      *(undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile) = local_118;
      FUN_1000f8cac(local_78,&local_110,&DAT_100ff84b0,&DAT_100c94448);
      _swift_release(uVar8);
      uStack_98 = uStack_1a0;
      local_a0 = local_1a8;
      uStack_88 = uStack_190;
      uStack_90 = local_198;
      puVar1 = (undefined8 *)
               ((long)unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord);
      puVar1[1] = uStack_1a0;
      *puVar1 = local_1a8;
      puVar1[3] = uStack_190;
      puVar1[2] = local_198;
      puVar1[4] = local_188;
      uStack_c8 = uStack_138;
      local_d0 = local_140;
      uStack_b8 = uStack_128;
      uStack_c0 = local_130;
      uStack_108 = uStack_178;
      local_110 = local_180;
      uStack_f8 = uStack_168;
      uStack_100 = uStack_170;
      uStack_e8 = uStack_158;
      local_f0 = local_160;
      uStack_d8 = uStack_148;
      uStack_e0 = local_150;
      puVar1 = (undefined8 *)
               ((long)unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
      uStack_218 = puVar1[1];
      local_220 = *puVar1;
      uStack_208 = puVar1[3];
      uStack_210 = puVar1[2];
      uStack_1d8 = puVar1[9];
      local_1e0 = puVar1[8];
      uStack_1c8 = puVar1[0xb];
      uStack_1d0 = puVar1[10];
      uStack_1f8 = puVar1[5];
      local_200 = puVar1[4];
      uStack_1e8 = puVar1[7];
      uStack_1f0 = puVar1[6];
      local_80 = local_188;
      local_b0 = local_120;
      local_1c0 = *(undefined4 *)(puVar1 + 0xc);
      puVar1[1] = uStack_178;
      *puVar1 = local_180;
      puVar1[3] = uStack_168;
      puVar1[2] = uStack_170;
      *(undefined4 *)(puVar1 + 0xc) = local_120;
      puVar1[9] = uStack_138;
      puVar1[8] = local_140;
      puVar1[0xb] = uStack_128;
      puVar1[10] = local_130;
      puVar1[5] = uStack_158;
      puVar1[4] = local_160;
      puVar1[7] = uStack_148;
      puVar1[6] = local_150;
      FUN_100abcbb8(&local_a0,auStack_288);
      FUN_1000f8cac(&local_110,auStack_288,&DAT_100ff82d0,&DAT_100c94208);
      FUN_1000fb4c4(&local_220,&DAT_100ff82d0,&DAT_100c94208);
      FUN_100acc644(&local_1b0);
    }
    else {
      FUN_10003bf2c(param_1,param_2);
      FUN_1000fb4c4(param_4,&DAT_100ff82c0,&DAT_100c94430);
      pcVar10 = *(code **)(lVar9 + 8);
      (*pcVar10)(lVar11,UVar4.unknown);
      (*pcVar10)((long)unaff_x20 + lVar6,UVar4.unknown);
      FUN_1000fb4c4((long)unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory,
                    &DAT_100ff82d0,&DAT_100c94208);
      FUN_1000fb4c4((long)unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,&DAT_100ff82c0,
                    &DAT_100c94430);
      _swift_release(*(undefined8 *)((long)unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile));
      _swift_deallocPartialClassInstance();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100ad0a08);
  (*pcVar10)();
}



/* Address: 0x100ad0a08 | FUN_100ad0a08 */

void FUN_100ad0a08(void)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  _fclose(*(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile));
  lVar2 = _TtC13ZIPFoundation7Archive::url;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(unaff_x20 + lVar2,UVar3.unknown);
  FUN_10003bf2c(*(undefined8 *)
                 (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord + 0x18),
                *(undefined8 *)
                 (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord + 0x20));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  FUN_100ad36bc(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],puVar1[9],puVar1[10],puVar1[0xb],*(undefined4 *)(puVar1 + 0xc));
  FUN_1000fb4c4(unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,&DAT_100ff82c0,&DAT_100c94430)
  ;
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile));
  return;
}



/* Address: 0x100ad0adc | FUN_100ad0adc */

void FUN_100ad0adc(void)

{
  undefined8 *puVar1;
  long lVar2;
  URL UVar3;
  long unaff_x20;
  
  _fclose(*(FILE **)(unaff_x20 + _TtC13ZIPFoundation7Archive::archiveFile));
  lVar2 = _TtC13ZIPFoundation7Archive::url;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(unaff_x20 + lVar2,UVar3.unknown);
  FUN_10003bf2c(*(undefined8 *)
                 (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord + 0x18),
                *(undefined8 *)
                 (unaff_x20 + _TtC13ZIPFoundation7Archive::endOfCentralDirectoryRecord + 0x20));
  puVar1 = (undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::zip64EndOfCentralDirectory);
  FUN_100ad36bc(*puVar1,puVar1[1],puVar1[2],puVar1[3],puVar1[4],puVar1[5],puVar1[6],puVar1[7],
                puVar1[8],puVar1[9],puVar1[10],puVar1[0xb],*(undefined4 *)(puVar1 + 0xc));
  FUN_1000fb4c4(unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,&DAT_100ff82c0,&DAT_100c94430)
  ;
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC13ZIPFoundation7Archive::memoryFile));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100ad0bbc | FUN_100ad0bbc */

void FUN_100ad0bbc(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Deallocator DVar4;
  int iVar5;
  undefined7 extraout_var;
  void *pvVar7;
  size_t sVar8;
  uint uVar9;
  undefined8 uVar10;
  FILE *pFVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  ulong uVar19;
  undefined8 uStack_630;
  long local_628 [3];
  uint local_610;
  undefined4 local_60c;
  code *local_608;
  long local_600;
  code *local_5f8;
  code *local_5f0;
  undefined8 uStack_5e8;
  FILE *local_5e0;
  ulong uStack_5d8;
  undefined8 local_5d0;
  ulong uStack_5c8;
  undefined8 uStack_5c0;
  undefined8 uStack_5b8;
  undefined8 local_5b0;
  undefined8 uStack_5a8;
  undefined8 uStack_5a0;
  undefined8 uStack_598;
  long local_590;
  undefined8 uStack_588;
  undefined8 uStack_580;
  undefined8 uStack_578;
  undefined4 local_570;
  undefined2 uStack_56c;
  undefined2 uStack_56a;
  undefined8 uStack_568;
  undefined8 uStack_560;
  undefined8 local_558;
  undefined8 uStack_550;
  long local_548;
  code *pcStack_540;
  undefined8 local_538;
  ulong local_530;
  ulong uStack_528;
  code *pcStack_520;
  undefined8 local_518;
  ulong local_510;
  ulong uStack_508;
  undefined8 local_500;
  code *local_4f0;
  undefined8 uStack_4e8;
  ulong uStack_4e0;
  ulong uStack_4d8;
  undefined8 local_4d0;
  ulong uStack_4c8;
  undefined8 uStack_4c0;
  undefined8 uStack_4b8;
  undefined8 local_4b0;
  undefined8 uStack_4a8;
  undefined8 uStack_4a0;
  undefined8 uStack_498;
  long local_490;
  code *local_480;
  undefined8 uStack_478;
  ulong uStack_470;
  ulong uStack_468;
  undefined8 local_460;
  ulong uStack_458;
  undefined8 uStack_450;
  undefined8 uStack_448;
  undefined8 local_440;
  undefined8 uStack_438;
  undefined8 uStack_430;
  undefined8 uStack_428;
  long local_420;
  undefined8 uStack_418;
  undefined4 uStack_404;
  undefined4 uStack_400;
  code *local_3f0;
  undefined8 uStack_3e8;
  ulong uStack_3e0;
  ulong uStack_3d8;
  undefined8 local_3d0;
  ulong uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  long local_390;
  undefined1 auStack_388 [24];
  code *local_370;
  undefined8 uStack_368;
  ulong local_360;
  ulong local_358;
  undefined8 local_350;
  ulong uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  long local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  long lStack_2c8;
  code *pcStack_2c0;
  undefined8 uStack_2b8;
  ulong local_2b0;
  ulong uStack_2a8;
  code *pcStack_2a0;
  undefined8 uStack_298;
  ulong local_290;
  ulong uStack_288;
  undefined8 local_280;
  undefined1 auStack_270 [24];
  code *local_258;
  undefined8 uStack_250;
  ulong uStack_248;
  ulong uStack_240;
  undefined8 local_238;
  ulong uStack_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  long local_1f8;
  undefined1 auStack_1f0 [36];
  char local_1cc;
  undefined1 auStack_1c8 [24];
  ulong local_1b0;
  char local_1a4;
  undefined8 local_1a0;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined8 uStack_18c;
  ushort local_184;
  ushort local_182;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  long local_160;
  undefined1 auStack_158 [36];
  char local_134;
  undefined1 auStack_130 [8];
  ulong local_128;
  ulong local_120;
  char local_10c;
  undefined1 auStack_108 [36];
  char local_e4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong uStack_d0;
  ulong local_c8;
  undefined8 local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  long local_80;
  long lVar6;
  
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,DVar4.value);
  lVar12 = *(long *)(lVar6 + -8);
  lVar2 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar14 = (undefined8 *)((long)&uStack_630 + lVar2);
  _swift_beginAccess(param_2 + 0x10,auStack_270,0,0);
  lVar1 = _TtC13ZIPFoundation7Archive::archiveFile;
  if (((long)*(ulong *)(param_2 + 0x10) < 0) || (*(ulong *)(param_2 + 0x10) < param_3)) {
    pFVar11 = *(FILE **)(param_4 + _TtC13ZIPFoundation7Archive::archiveFile);
    _swift_beginAccess(param_5 + 0x10,auStack_388,0,0);
    if (*(off_t *)(param_5 + 0x10) < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1408);
      (*pcVar3)();
    }
    local_5f8 = (code *)lVar1;
    local_600 = param_5;
    _fseeko(pFVar11,*(off_t *)(param_5 + 0x10),0);
    pvVar7 = (void *)0x2e;
    _swift_slowAlloc(0x2e,0xffffffffffffffff);
    sVar8 = _fread(pvVar7,1,0x2e,pFVar11);
    iVar5 = _ferror(pFVar11);
    if (iVar5 < 1) {
      *puVar14 = FUN_10094a398;
      *(undefined8 *)((long)local_628 + lVar2) = 0;
      local_60c = *(undefined4 *)
                   PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
      ;
      local_608 = *(code **)(lVar12 + 0x68);
      (*local_608)(puVar14,local_60c,lVar6);
      FUN_100abfa10(pvVar7,sVar8,puVar14);
      FUN_100ad9058(&local_258);
      uStack_3a8 = uStack_210;
      local_3b0 = local_218;
      uStack_398 = uStack_200;
      uStack_3a0 = uStack_208;
      local_390 = local_1f8;
      uStack_3e8 = uStack_250;
      local_3f0 = local_258;
      uStack_3d8 = uStack_240;
      uStack_3e0 = uStack_248;
      uStack_3c8 = uStack_230;
      local_3d0 = local_238;
      uStack_3b8 = uStack_220;
      uStack_3c0 = uStack_228;
      if (local_1f8 != 1) {
        uStack_b8 = uStack_230;
        local_c0 = local_238;
        uStack_a8 = uStack_220;
        uStack_b0 = uStack_228;
        uStack_98 = uStack_210;
        local_a0 = local_218;
        uStack_88 = uStack_200;
        uStack_90 = uStack_208;
        uStack_d8 = uStack_250;
        local_e0 = local_258;
        pcVar3 = local_e0;
        local_c8 = uStack_240;
        uStack_d0 = uStack_248;
        local_80 = local_1f8;
        local_e0._6_2_ = (ushort)((ulong)local_258 >> 0x30);
        local_610 = (uint)local_e0._6_2_;
        local_e0 = pcVar3;
        if (((((local_610 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_1f0), local_1cc == '\x01')) ||
            (FUN_100adaf98(auStack_1c8), local_1a4 == '\x01')) || (local_1b0 == 0)) {
          uVar13 = uStack_b8 >> 0x20;
        }
        else {
          uVar13 = local_1b0;
          if ((long)local_1b0 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad0db0);
            (*pcVar3)();
          }
        }
        pFVar11 = *(FILE **)(param_4 + (long)local_5f8);
        _fseeko(pFVar11,uVar13,0);
        pvVar7 = (void *)0x1e;
        _swift_slowAlloc(0x1e,0xffffffffffffffff);
        sVar8 = _fread(pvVar7,1,0x1e,pFVar11);
        iVar5 = _ferror(pFVar11);
        if (iVar5 < 1) {
          *puVar14 = FUN_10094a398;
          *(undefined8 *)((long)local_628 + lVar2) = 0;
          (*local_608)(puVar14,local_60c,lVar6);
          FUN_100abfa10(pvVar7,sVar8,puVar14);
          FUN_100ada084(&local_1a0);
          if (local_160 != 1) {
            uVar19 = (ulong)local_184;
            uVar17 = (ulong)local_182;
            uVar9 = (uint)(ushort)uStack_d8;
            local_628[1] = uVar17;
            local_628[2] = uVar19;
            if (((ushort)uStack_d8 >> 3 & 1) == 0) {
              local_5f8 = (code *)0x0;
              uVar13 = 0;
              uVar17 = 0;
              uVar18 = 0;
              pcVar3 = (code *)0x0;
              uVar19 = 0;
              uVar15 = 0;
              uVar16 = 0xf000000000000000;
              uVar10 = 0xf000000000000000;
              uVar9 = (uint)(ushort)uStack_d8;
            }
            else {
              local_628[0] = local_160;
              uStack_630._4_4_ = uVar9;
              if (uStack_d8._2_2_ == 0) {
                if ((((local_610 & 0xff) < 0x2d) &&
                    (FUN_100adaf98(auStack_158), local_134 == '\x01')) ||
                   ((FUN_100adaf98(auStack_130), local_10c == '\x01' ||
                    (local_120 = local_128, local_128 == 0)))) {
                  local_120 = local_c8 & 0xffffffff;
                }
              }
              else if ((((local_610 & 0xff) < 0x2d) &&
                       (FUN_100adaf98(auStack_158), local_134 == '\x01')) ||
                      ((FUN_100adaf98(auStack_130), local_10c == '\x01' || (local_120 == 0)))) {
                local_120 = uStack_d0 >> 0x20;
              }
              uVar13 = uVar13 + uVar19 + uVar17 + 0x1e;
              lVar1 = uVar13 + local_120;
              if (CARRY8(uVar13,local_120)) {
                    /* WARNING: Does not return */
                pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad140c);
                (*pcVar3)();
              }
              if (((local_610 & 0xff) < 0x2d) && (FUN_100adaf98(auStack_108), local_e4 == '\x01')) {
                if (lVar1 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1414);
                  (*pcVar3)();
                }
                pFVar11 = *(FILE **)(param_4 + (long)local_5f8);
                _fseeko(pFVar11,lVar1,0);
                pvVar7 = (void *)0x10;
                _swift_slowAlloc(0x10,0xffffffffffffffff);
                sVar8 = _fread(pvVar7,1,0x10,pFVar11);
                iVar5 = _ferror(pFVar11);
                if (iVar5 < 1) {
                  *puVar14 = FUN_10094a398;
                  *(undefined8 *)((long)local_628 + lVar2) = 0;
                  (*local_608)(puVar14,local_60c,lVar6);
                  FUN_100abfa10(pvVar7,sVar8,puVar14);
                  local_5e0 = pFVar11;
                  FUN_100ad1fe8(&local_370);
                  uVar10 = uStack_368;
                  uVar19 = local_360;
                  uVar15 = local_358;
                  pcVar3 = local_370;
                }
                else {
                  _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
                  uVar10 = 0xf000000000000000;
                  uVar19 = 0;
                  uVar15 = 0;
                  pcVar3 = (code *)0x0;
                }
                local_5f8 = (code *)0x0;
                uVar13 = 0;
                uVar17 = 0;
                uVar18 = 0;
                uVar16 = 0xf000000000000000;
                local_160 = local_628[0];
                uVar9 = uStack_630._4_4_;
              }
              else {
                if (lVar1 < 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1410);
                  (*pcVar3)();
                }
                pFVar11 = *(FILE **)(param_4 + (long)local_5f8);
                _fseeko(pFVar11,lVar1,0);
                pvVar7 = (void *)0x18;
                _swift_slowAlloc(0x18,0xffffffffffffffff);
                sVar8 = _fread(pvVar7,1,0x18,pFVar11);
                iVar5 = _ferror(pFVar11);
                if (iVar5 < 1) {
                  *puVar14 = FUN_10094a398;
                  *(undefined8 *)((long)local_628 + lVar2) = 0;
                  (*local_608)(puVar14,local_60c,lVar6);
                  FUN_100abfa10(pvVar7,sVar8,puVar14);
                  local_5e0 = pFVar11;
                  FUN_100ad23d0(&local_370);
                  local_5f8 = local_370;
                  uVar13 = local_360;
                  uVar16 = uStack_368;
                  uVar17 = local_358;
                  uVar18 = local_350;
                }
                else {
                  _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
                  local_5f8 = (code *)0x0;
                  uVar13 = 0;
                  uVar16 = 0xf000000000000000;
                  uVar17 = 0;
                  uVar18 = 0;
                }
                pcVar3 = (code *)0x0;
                uVar19 = 0;
                uVar15 = 0;
                uVar10 = 0xf000000000000000;
                local_160 = local_628[0];
                uVar9 = uStack_630._4_4_;
              }
            }
            if ((uVar9 & 1) == 0) {
              uStack_438 = uStack_98;
              local_440 = local_a0;
              uStack_428 = uStack_88;
              uStack_430 = uStack_90;
              local_420 = local_80;
              uStack_478 = uStack_d8;
              local_480 = local_e0;
              uStack_468 = local_c8;
              uStack_470 = uStack_d0;
              uStack_458 = uStack_b8;
              local_460 = local_c0;
              uStack_448 = uStack_a8;
              uStack_450 = uStack_b0;
              uStack_404 = (undefined4)uStack_18c;
              uStack_400 = (undefined4)((ulong)uStack_18c >> 0x20);
              uStack_418 = local_1a0;
              uStack_550 = uStack_168;
              local_558 = uStack_170;
              uStack_560 = uStack_178;
              uStack_568 = local_180;
              uStack_5c8 = uStack_b8;
              local_5d0 = local_c0;
              uStack_5b8 = uStack_a8;
              uStack_5c0 = uStack_b0;
              uStack_5e8 = uStack_d8;
              local_5f0 = local_e0;
              uStack_5d8 = local_c8;
              local_5e0 = (FILE *)uStack_d0;
              uStack_5a8 = uStack_98;
              local_5b0 = local_a0;
              uStack_598 = uStack_88;
              uStack_5a0 = uStack_90;
              local_570 = uStack_400;
              uStack_578 = CONCAT44(uStack_404,uStack_190);
              uStack_580 = CONCAT44(uStack_194,uStack_198);
              uStack_588 = local_1a0;
              local_590 = local_80;
              uStack_56c = (undefined2)local_628[2];
              uStack_56a = (undefined2)local_628[1];
              pcStack_520 = local_5f8;
              local_548 = local_160;
              pcStack_540 = pcVar3;
              local_538 = uVar10;
              local_530 = uVar19;
              uStack_528 = uVar15;
              local_518 = uVar16;
              local_510 = uVar13;
              uStack_508 = uVar17;
              local_500 = uVar18;
              FUN_100004520(&local_5f0);
              uStack_4a8 = uStack_3a8;
              local_4b0 = local_3b0;
              uStack_498 = uStack_398;
              uStack_4a0 = uStack_3a0;
              local_490 = local_390;
              uStack_4e8 = uStack_3e8;
              local_4f0 = local_3f0;
              uStack_4d8 = uStack_3d8;
              uStack_4e0 = uStack_3e0;
              uStack_4c8 = uStack_3c8;
              local_4d0 = local_3d0;
              uStack_4b8 = uStack_3b8;
              uStack_4c0 = uStack_3c0;
              FUN_100abcdd8(&local_4f0,&local_370);
              uStack_2a8 = uStack_528;
              local_2b0 = local_530;
              uStack_298 = local_518;
              pcStack_2a0 = pcStack_520;
              uStack_288 = uStack_508;
              local_290 = local_510;
              local_280 = local_500;
              local_2f0 = CONCAT26(uStack_56a,CONCAT24(uStack_56c,local_570));
              uStack_2e8 = uStack_568;
              uStack_2d8 = local_558;
              uStack_2e0 = uStack_560;
              lStack_2c8 = local_548;
              local_2d0 = uStack_550;
              uStack_2b8 = local_538;
              pcStack_2c0 = pcStack_540;
              uStack_328 = uStack_5a8;
              local_330 = local_5b0;
              uStack_318 = uStack_598;
              uStack_320 = uStack_5a0;
              uStack_308 = uStack_588;
              local_310 = local_590;
              uStack_2f8 = uStack_578;
              uStack_300 = uStack_580;
              uStack_368 = uStack_5e8;
              local_370 = local_5f0;
              local_358 = uStack_5d8;
              local_360 = (ulong)local_5e0;
              uStack_348 = uStack_5c8;
              local_350 = local_5d0;
              uStack_338 = uStack_5b8;
              uStack_340 = uStack_5c0;
            }
            else {
              uStack_5a8 = uStack_3a8;
              local_5b0 = local_3b0;
              uStack_598 = uStack_398;
              uStack_5a0 = uStack_3a0;
              local_590 = local_390;
              uStack_5e8 = uStack_3e8;
              local_5f0 = local_3f0;
              uStack_5d8 = uStack_3d8;
              local_5e0 = (FILE *)uStack_3e0;
              uStack_5c8 = uStack_3c8;
              local_5d0 = local_3d0;
              uStack_5b8 = uStack_3b8;
              uStack_5c0 = uStack_3c0;
              local_608 = pcVar3;
              FUN_100abcdd8(&local_5f0,&local_370);
              FUN_10003bf18(local_5f8,uVar16,uVar13,uVar17,uVar18);
              FUN_10003bf18(local_608,uVar10,uVar19,uVar15);
              FUN_1000fb4c4(&local_1a0,&DAT_100ff85d8,&DAT_100c946f0);
              FUN_1000fb4c4(&local_258,&DAT_100ff85d0,&DAT_100c946e8);
              FUN_100ad3b74(&local_370);
            }
            param_1[0x19] = uStack_2a8;
            param_1[0x18] = local_2b0;
            param_1[0x1b] = uStack_298;
            param_1[0x1a] = pcStack_2a0;
            param_1[0x1d] = uStack_288;
            param_1[0x1c] = local_290;
            param_1[0x1e] = local_280;
            param_1[0x11] = uStack_2e8;
            param_1[0x10] = local_2f0;
            param_1[0x13] = uStack_2d8;
            param_1[0x12] = uStack_2e0;
            param_1[0x15] = lStack_2c8;
            param_1[0x14] = local_2d0;
            param_1[0x17] = uStack_2b8;
            param_1[0x16] = pcStack_2c0;
            param_1[9] = uStack_328;
            param_1[8] = local_330;
            param_1[0xb] = uStack_318;
            param_1[10] = uStack_320;
            param_1[0xd] = uStack_308;
            param_1[0xc] = local_310;
            param_1[0xf] = uStack_2f8;
            param_1[0xe] = uStack_300;
            param_1[1] = uStack_368;
            *param_1 = local_370;
            param_1[3] = local_358;
            param_1[2] = local_360;
            param_1[5] = uStack_348;
            param_1[4] = local_350;
            param_1[7] = uStack_338;
            param_1[6] = uStack_340;
            FUN_100ad14a4(local_600 + 0x10,&local_e0,param_2 + 0x10);
            FUN_1000fb4c4(&local_258,&DAT_100ff85d0,&DAT_100c946e8);
            return;
          }
        }
        else {
          _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
        }
        FUN_1000fb4c4(&local_258,&DAT_100ff85d0,&DAT_100c946e8);
      }
    }
    else {
      _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
    }
  }
  FUN_100ad3b74(&local_370);
  param_1[0x19] = uStack_2a8;
  param_1[0x18] = local_2b0;
  param_1[0x1b] = uStack_298;
  param_1[0x1a] = pcStack_2a0;
  param_1[0x1d] = uStack_288;
  param_1[0x1c] = local_290;
  param_1[0x1e] = local_280;
  param_1[0x11] = uStack_2e8;
  param_1[0x10] = local_2f0;
  param_1[0x13] = uStack_2d8;
  param_1[0x12] = uStack_2e0;
  param_1[0x15] = lStack_2c8;
  param_1[0x14] = local_2d0;
  param_1[0x17] = uStack_2b8;
  param_1[0x16] = pcStack_2c0;
  param_1[9] = uStack_328;
  param_1[8] = local_330;
  param_1[0xb] = uStack_318;
  param_1[10] = uStack_320;
  param_1[0xd] = uStack_308;
  param_1[0xc] = local_310;
  param_1[0xf] = uStack_2f8;
  param_1[0xe] = uStack_300;
  param_1[1] = uStack_368;
  *param_1 = local_370;
  param_1[3] = local_358;
  param_1[2] = local_360;
  param_1[5] = uStack_348;
  param_1[4] = local_350;
  param_1[7] = uStack_338;
  param_1[6] = uStack_340;
  return;
}



/* Address: 0x100ad1414 | FUN_100ad1414 */

void FUN_100ad1414(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100ad1448 | FUN_100ad1448 */

void FUN_100ad1448(void)

{
  long unaff_x20;
  
  FUN_100ad0bbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100ad1454 | FUN_100ad1454 */

undefined8 FUN_100ad1454(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff82c0;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  (**(code **)(*(long *)(puVar1 + -8) + 0x18))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100ad14a4 | FUN_100ad14a4 */

void FUN_100ad14a4(ulong *param_1,long param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1,auStack_48,1,0);
  uVar1 = *param_1 + 0x2e;
  if (0xffffffffffffffd1 < *param_1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1544);
    (*pcVar3)();
  }
  uVar2 = uVar1 + *(ushort *)(param_2 + 0x1c);
  if (CARRY8(uVar1,(ulong)*(ushort *)(param_2 + 0x1c))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1548);
    (*pcVar3)();
  }
  uVar1 = uVar2 + *(ushort *)(param_2 + 0x1e);
  if (CARRY8(uVar2,(ulong)*(ushort *)(param_2 + 0x1e))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad154c);
    (*pcVar3)();
  }
  if (!CARRY8(uVar1,(ulong)*(ushort *)(param_2 + 0x20))) {
    *param_1 = uVar1 + *(ushort *)(param_2 + 0x20);
    _swift_beginAccess(param_3,auStack_60,1,0);
    if (!SCARRY8(*param_3,1)) {
      *param_3 = *param_3 + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1554);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad1550);
  (*pcVar3)();
}



/* Address: 0x100ad1554 | FUN_100ad1554 */

void FUN_100ad1554(undefined8 *param_1,undefined *param_2,undefined *param_3)

{
  _StringGuts _Var1;
  _StringGuts _Var2;
  long lVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  undefined *puVar7;
  Encoding EVar8;
  _AnyIteratorBoxBase *p_Var9;
  _AnyIteratorBoxBase *this;
  Encoding data;
  Encoding EVar10;
  undefined *puVar11;
  ulong uVar12;
  long unaff_x20;
  long lVar13;
  code *pcVar14;
  _AnyIteratorBoxBase *this_00;
  long lVar15;
  long lVar16;
  _AnyIteratorBoxBase a_Stack_4a0 [8];
  long local_498;
  undefined *local_490;
  undefined8 *local_488;
  _AnyIteratorBoxBase *local_480;
  undefined *local_478;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined *puStack_440;
  undefined *puStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 local_380;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined *puStack_240;
  undefined *puStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  Encoding local_148;
  undefined *puStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined1 auStack_80 [32];
  
  puVar7 = &DAT_100ff82c0;
  local_490 = param_2;
  local_488 = param_1;
  local_478 = param_3;
  FUN_1000f7830(&DAT_100ff82c0,&DAT_100c94430);
  this = a_Stack_4a0 + -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  EVar8 = Encoding::_typeMetadataAccessor();
  lVar3 = _TtC13ZIPFoundation7Archive::pathEncoding;
  lVar13 = *(long *)(EVar8.unknown + -8);
  uVar12 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)this - uVar12;
  lVar15 = lVar16 - uVar12;
  this_00 = (_AnyIteratorBoxBase *)(lVar15 - uVar12);
  _swift_beginAccess(unaff_x20 + _TtC13ZIPFoundation7Archive::pathEncoding,auStack_80,0,0);
  FUN_1000f8cac(unaff_x20 + lVar3,this,&DAT_100ff82c0,&DAT_100c94430);
  p_Var9 = this;
  (**(code **)(lVar13 + 0x30))(this,1,EVar8.unknown);
  if ((int)p_Var9 == 1) {
    FUN_1000fb4c4(this,&DAT_100ff82c0,&DAT_100c94430);
    FUN_100ad00d0();
    Swift::_AnyIteratorBoxBase::_next(this);
    uStack_1a8 = uStack_b0;
    local_1b0 = local_b8;
    uStack_198 = uStack_a0;
    uStack_1a0 = local_a8;
    uStack_188 = uStack_90;
    local_190 = local_98;
    local_180 = local_88;
    uStack_1e8 = uStack_f0;
    local_1f0 = local_f8;
    uStack_1d8 = uStack_e0;
    uStack_1e0 = local_e8;
    uStack_1c8 = uStack_d0;
    local_1d0 = local_d8;
    uStack_1b8 = uStack_c0;
    uStack_1c0 = local_c8;
    uStack_228 = uStack_130;
    local_230 = local_138;
    uStack_218 = uStack_120;
    uStack_220 = local_128;
    uStack_208 = uStack_110;
    local_210 = local_118;
    uStack_1f8 = uStack_100;
    uStack_200 = local_108;
    uStack_268 = uStack_170;
    local_270 = local_178;
    uStack_258 = uStack_160;
    uStack_260 = local_168;
    uStack_248 = uStack_150;
    local_250 = local_158;
    puStack_238 = puStack_140;
    puStack_240 = local_148.unknown;
    EVar10.unknown = (undefined *)&local_270;
    FUN_100aca508();
    puVar4 = local_490;
    iVar6 = (int)EVar10.unknown;
    local_370 = local_178;
    uStack_368 = uStack_170;
    uStack_360 = local_168;
    uStack_358 = uStack_160;
    local_350 = local_158;
    uStack_348 = uStack_150;
    data.unknown = local_148.unknown;
    puVar7 = puStack_140;
    local_330 = local_138;
    uStack_328 = uStack_130;
    uStack_320 = local_128;
    uStack_318 = uStack_120;
    local_310 = local_118;
    uStack_308 = uStack_110;
    uStack_300 = local_108;
    uStack_2f8 = uStack_100;
    local_2f0 = local_f8;
    uStack_2e8 = uStack_f0;
    uStack_2e0 = local_e8;
    uStack_2d8 = uStack_e0;
    local_2d0 = local_d8;
    uStack_2c8 = uStack_d0;
    uStack_2c0 = local_c8;
    uStack_2b8 = uStack_c0;
    local_2b0 = local_b8;
    uStack_2a8 = uStack_b0;
    uStack_2a0 = local_a8;
    uStack_298 = uStack_a0;
    local_290 = local_98;
    uStack_288 = uStack_90;
    local_280 = local_88;
    while (iVar6 != 1) {
      local_340 = data.unknown;
      puStack_338 = puVar7;
      local_178 = local_370;
      uStack_170 = uStack_368;
      local_168 = uStack_360;
      uStack_160 = uStack_358;
      local_158 = local_350;
      uStack_150 = uStack_348;
      local_148.unknown = data.unknown;
      puStack_140 = puVar7;
      local_138 = local_330;
      uStack_130 = uStack_328;
      local_128 = uStack_320;
      uStack_120 = uStack_318;
      local_118 = local_310;
      uStack_110 = uStack_308;
      local_108 = uStack_300;
      uStack_100 = uStack_2f8;
      local_f8 = local_2f0;
      uStack_f0 = uStack_2e8;
      local_e8 = uStack_2e0;
      uStack_e0 = uStack_2d8;
      local_d8 = local_2d0;
      uStack_d0 = uStack_2c8;
      local_c8 = uStack_2c0;
      uStack_c0 = uStack_2b8;
      local_b8 = local_2b0;
      uStack_b0 = uStack_2a8;
      local_a8 = uStack_2a0;
      uStack_a0 = uStack_298;
      local_98 = local_290;
      uStack_90 = uStack_288;
      local_88 = local_280;
      if (((ushort)uStack_368 >> 0xb & 1) == 0) {
        if (DAT_100ff8630 != -1) {
          _swift_once(&DAT_100ff8630,FUN_100adcca4);
        }
        EVar10 = EVar8;
        FUN_1000cd990(EVar8.unknown,&DAT_101058310);
        pcVar14 = *(code **)(lVar13 + 0x10);
        (*pcVar14)(lVar16,EVar10.unknown,EVar8.unknown);
      }
      else {
        Encoding::_get_utf8(EVar10);
        pcVar14 = *(code **)(lVar13 + 0x10);
      }
      (*pcVar14)(lVar15,lVar16,EVar8.unknown);
      (extension_Foundation)::Swift::String::_init(data);
      _Var1.unknown = (undefined *)0x0;
      if (puVar7 != (undefined *)0x0) {
        _Var1.unknown = data.unknown;
      }
      _Var2.unknown = (undefined *)0xe000000000000000;
      if (puVar7 != (undefined *)0x0) {
        _Var2.unknown = puVar7;
      }
      (**(code **)(lVar13 + 8))(lVar16,EVar8.unknown);
      if ((_Var1.unknown == puVar4) && (_Var2.unknown == local_478)) {
        _swift_release(this);
        _swift_bridgeObjectRelease(_Var2.unknown);
LAB_100ad1d60:
        uStack_3a8 = uStack_2a8;
        local_3b0 = local_2b0;
        uStack_398 = uStack_298;
        uStack_3a0 = uStack_2a0;
        uStack_388 = uStack_288;
        local_390 = local_290;
        local_380 = local_280;
        uStack_3e8 = uStack_2e8;
        local_3f0 = local_2f0;
        uStack_3d8 = uStack_2d8;
        uStack_3e0 = uStack_2e0;
        uStack_3c8 = uStack_2c8;
        local_3d0 = local_2d0;
        uStack_3b8 = uStack_2b8;
        uStack_3c0 = uStack_2c0;
        uStack_428 = uStack_328;
        local_430 = local_330;
        uStack_418 = uStack_318;
        uStack_420 = uStack_320;
        uStack_408 = uStack_308;
        local_410 = local_310;
        uStack_3f8 = uStack_2f8;
        uStack_400 = uStack_300;
        uStack_468 = uStack_368;
        local_470 = local_370;
        uStack_458 = uStack_358;
        uStack_460 = uStack_360;
        local_450 = local_350;
        uStack_448 = uStack_348;
        puStack_440 = local_340;
        puStack_438 = puStack_338;
        goto LAB_100ad1da8;
      }
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar4);
      _swift_bridgeObjectRelease(_Var2.unknown);
      if (bVar5) {
        _swift_release(this);
        goto LAB_100ad1d60;
      }
      FUN_1000fb4c4(&local_370,&DAT_100ff8490,&DAT_100c94450);
      Swift::_AnyIteratorBoxBase::_next(this);
      uStack_1a8 = uStack_b0;
      local_1b0 = local_b8;
      uStack_198 = uStack_a0;
      uStack_1a0 = local_a8;
      uStack_188 = uStack_90;
      local_190 = local_98;
      local_180 = local_88;
      uStack_1e8 = uStack_f0;
      local_1f0 = local_f8;
      uStack_1d8 = uStack_e0;
      uStack_1e0 = local_e8;
      uStack_1c8 = uStack_d0;
      local_1d0 = local_d8;
      uStack_1b8 = uStack_c0;
      uStack_1c0 = local_c8;
      uStack_228 = uStack_130;
      local_230 = local_138;
      uStack_218 = uStack_120;
      uStack_220 = local_128;
      uStack_208 = uStack_110;
      local_210 = local_118;
      uStack_1f8 = uStack_100;
      uStack_200 = local_108;
      uStack_268 = uStack_170;
      local_270 = local_178;
      uStack_258 = uStack_160;
      uStack_260 = local_168;
      uStack_248 = uStack_150;
      local_250 = local_158;
      puStack_238 = puStack_140;
      puStack_240 = local_148.unknown;
      EVar10.unknown = (undefined *)&local_270;
      FUN_100aca508();
      local_370 = local_178;
      uStack_368 = uStack_170;
      uStack_360 = local_168;
      uStack_358 = uStack_160;
      local_350 = local_158;
      uStack_348 = uStack_150;
      data.unknown = local_148.unknown;
      puVar7 = puStack_140;
      local_330 = local_138;
      uStack_328 = uStack_130;
      uStack_320 = local_128;
      uStack_318 = uStack_120;
      local_310 = local_118;
      uStack_308 = uStack_110;
      uStack_300 = local_108;
      uStack_2f8 = uStack_100;
      local_2f0 = local_f8;
      uStack_2e8 = uStack_f0;
      uStack_2e0 = local_e8;
      uStack_2d8 = uStack_e0;
      local_2d0 = local_d8;
      uStack_2c8 = uStack_d0;
      uStack_2c0 = local_c8;
      uStack_2b8 = uStack_c0;
      local_2b0 = local_b8;
      uStack_2a8 = uStack_b0;
      uStack_2a0 = local_a8;
      uStack_298 = uStack_a0;
      local_290 = local_98;
      uStack_288 = uStack_90;
      local_280 = local_88;
      iVar6 = (int)EVar10.unknown;
    }
    _swift_release(this);
    uStack_3a8 = uStack_1a8;
    local_3b0 = local_1b0;
    uStack_398 = uStack_198;
    uStack_3a0 = uStack_1a0;
    uStack_388 = uStack_188;
    local_390 = local_190;
    local_380 = local_180;
    uStack_3e8 = uStack_1e8;
    local_3f0 = local_1f0;
    uStack_3d8 = uStack_1d8;
    uStack_3e0 = uStack_1e0;
    uStack_3c8 = uStack_1c8;
    local_3d0 = local_1d0;
    uStack_3b8 = uStack_1b8;
    uStack_3c0 = uStack_1c0;
    uStack_428 = uStack_228;
    local_430 = local_230;
    uStack_418 = uStack_218;
    uStack_420 = uStack_220;
    uStack_408 = uStack_208;
    local_410 = local_210;
    uStack_3f8 = uStack_1f8;
    uStack_400 = uStack_200;
    uStack_468 = uStack_268;
    local_470 = local_270;
    uStack_458 = uStack_258;
    uStack_460 = uStack_260;
    local_450 = local_250;
    uStack_448 = uStack_248;
    puStack_440 = puStack_240;
    puStack_438 = puStack_238;
  }
  else {
    local_498 = lVar13;
    local_480 = this_00;
    (**(code **)(lVar13 + 0x20))(this_00,this,EVar8.unknown);
    FUN_100ad00d0();
    Swift::_AnyIteratorBoxBase::_next(this_00);
    uStack_1a8 = uStack_b0;
    local_1b0 = local_b8;
    uStack_198 = uStack_a0;
    uStack_1a0 = local_a8;
    uStack_188 = uStack_90;
    local_190 = local_98;
    local_180 = local_88;
    uStack_1e8 = uStack_f0;
    local_1f0 = local_f8;
    uStack_1d8 = uStack_e0;
    uStack_1e0 = local_e8;
    uStack_1c8 = uStack_d0;
    local_1d0 = local_d8;
    uStack_1b8 = uStack_c0;
    uStack_1c0 = local_c8;
    uStack_228 = uStack_130;
    local_230 = local_138;
    uStack_218 = uStack_120;
    uStack_220 = local_128;
    uStack_208 = uStack_110;
    local_210 = local_118;
    uStack_1f8 = uStack_100;
    uStack_200 = local_108;
    uStack_268 = uStack_170;
    local_270 = local_178;
    uStack_258 = uStack_160;
    uStack_260 = local_168;
    uStack_248 = uStack_150;
    local_250 = local_158;
    puStack_238 = puStack_140;
    puStack_240 = local_148.unknown;
    iVar6 = (int)&local_270;
    FUN_100aca508();
    puVar4 = local_478;
    puVar7 = local_490;
    if (iVar6 != 1) {
      pcVar14 = *(code **)(local_498 + 0x10);
      do {
        puVar11 = puStack_140;
        EVar10.unknown = local_148.unknown;
        uStack_2a8 = uStack_b0;
        local_2b0 = local_b8;
        uStack_298 = uStack_a0;
        uStack_2a0 = local_a8;
        uStack_288 = uStack_90;
        local_290 = local_98;
        local_280 = local_88;
        uStack_2e8 = uStack_f0;
        local_2f0 = local_f8;
        uStack_2d8 = uStack_e0;
        uStack_2e0 = local_e8;
        uStack_2c8 = uStack_d0;
        local_2d0 = local_d8;
        uStack_2b8 = uStack_c0;
        uStack_2c0 = local_c8;
        uStack_328 = uStack_130;
        local_330 = local_138;
        uStack_318 = uStack_120;
        uStack_320 = local_128;
        uStack_308 = uStack_110;
        local_310 = local_118;
        uStack_2f8 = uStack_100;
        uStack_300 = local_108;
        uStack_368 = uStack_170;
        local_370 = local_178;
        uStack_358 = uStack_160;
        uStack_360 = local_168;
        uStack_348 = uStack_150;
        local_350 = local_158;
        puStack_338 = puStack_140;
        local_340 = local_148.unknown;
        (*pcVar14)(lVar15,local_480,EVar8.unknown);
        (extension_Foundation)::Swift::String::_init(EVar10);
        _Var1.unknown = (undefined *)0x0;
        if (puVar11 != (undefined *)0x0) {
          _Var1.unknown = EVar10.unknown;
        }
        _Var2.unknown = (undefined *)0xe000000000000000;
        if (puVar11 != (undefined *)0x0) {
          _Var2.unknown = puVar11;
        }
        if ((_Var1.unknown == puVar7) && (_Var2.unknown == puVar4)) {
          _swift_bridgeObjectRelease(_Var2.unknown);
LAB_100ad1cf0:
          uStack_3a8 = uStack_2a8;
          local_3b0 = local_2b0;
          uStack_398 = uStack_298;
          uStack_3a0 = uStack_2a0;
          uStack_388 = uStack_288;
          local_390 = local_290;
          local_380 = local_280;
          uStack_3e8 = uStack_2e8;
          local_3f0 = local_2f0;
          uStack_3d8 = uStack_2d8;
          uStack_3e0 = uStack_2e0;
          uStack_3c8 = uStack_2c8;
          local_3d0 = local_2d0;
          uStack_3b8 = uStack_2b8;
          uStack_3c0 = uStack_2c0;
          uStack_428 = uStack_328;
          local_430 = local_330;
          uStack_418 = uStack_318;
          uStack_420 = uStack_320;
          uStack_408 = uStack_308;
          local_410 = local_310;
          uStack_3f8 = uStack_2f8;
          uStack_400 = uStack_300;
          uStack_468 = uStack_368;
          local_470 = local_370;
          uStack_458 = uStack_358;
          uStack_460 = uStack_360;
          local_450 = local_350;
          uStack_448 = uStack_348;
          puStack_440 = local_340;
          puStack_438 = puStack_338;
          goto LAB_100ad1d34;
        }
        bVar5 = Swift::_stringCompareWithSmolCheck
                          (_Var1,_Var2,(_StringComparisonResult)(__int8)puVar7);
        _swift_bridgeObjectRelease(_Var2.unknown);
        if (bVar5) goto LAB_100ad1cf0;
        FUN_1000fb4c4(&local_370,&DAT_100ff8490,&DAT_100c94450);
        Swift::_AnyIteratorBoxBase::_next(this_00);
        uStack_1a8 = uStack_b0;
        local_1b0 = local_b8;
        uStack_198 = uStack_a0;
        uStack_1a0 = local_a8;
        uStack_188 = uStack_90;
        local_190 = local_98;
        local_180 = local_88;
        uStack_1e8 = uStack_f0;
        local_1f0 = local_f8;
        uStack_1d8 = uStack_e0;
        uStack_1e0 = local_e8;
        uStack_1c8 = uStack_d0;
        local_1d0 = local_d8;
        uStack_1b8 = uStack_c0;
        uStack_1c0 = local_c8;
        uStack_228 = uStack_130;
        local_230 = local_138;
        uStack_218 = uStack_120;
        uStack_220 = local_128;
        uStack_208 = uStack_110;
        local_210 = local_118;
        uStack_1f8 = uStack_100;
        uStack_200 = local_108;
        uStack_268 = uStack_170;
        local_270 = local_178;
        uStack_258 = uStack_160;
        uStack_260 = local_168;
        uStack_248 = uStack_150;
        local_250 = local_158;
        puStack_238 = puStack_140;
        puStack_240 = local_148.unknown;
        iVar6 = (int)&local_270;
        FUN_100aca508();
      } while (iVar6 != 1);
    }
    uStack_3a8 = uStack_1a8;
    local_3b0 = local_1b0;
    uStack_398 = uStack_198;
    uStack_3a0 = uStack_1a0;
    uStack_388 = uStack_188;
    local_390 = local_190;
    local_380 = local_180;
    uStack_3e8 = uStack_1e8;
    local_3f0 = local_1f0;
    uStack_3d8 = uStack_1d8;
    uStack_3e0 = uStack_1e0;
    uStack_3c8 = uStack_1c8;
    local_3d0 = local_1d0;
    uStack_3b8 = uStack_1b8;
    uStack_3c0 = uStack_1c0;
    uStack_428 = uStack_228;
    local_430 = local_230;
    uStack_418 = uStack_218;
    uStack_420 = uStack_220;
    uStack_408 = uStack_208;
    local_410 = local_210;
    uStack_3f8 = uStack_1f8;
    uStack_400 = uStack_200;
    uStack_468 = uStack_268;
    local_470 = local_270;
    uStack_458 = uStack_258;
    uStack_460 = uStack_260;
    local_450 = local_250;
    uStack_448 = uStack_248;
    puStack_440 = puStack_240;
    puStack_438 = puStack_238;
LAB_100ad1d34:
    (**(code **)(local_498 + 8))(local_480,EVar8.unknown);
    _swift_release(this_00);
  }
LAB_100ad1da8:
  local_488[0x19] = uStack_3a8;
  local_488[0x18] = local_3b0;
  local_488[0x1b] = uStack_398;
  local_488[0x1a] = uStack_3a0;
  local_488[0x1d] = uStack_388;
  local_488[0x1c] = local_390;
  local_488[0x1e] = local_380;
  local_488[0x11] = uStack_3e8;
  local_488[0x10] = local_3f0;
  local_488[0x13] = uStack_3d8;
  local_488[0x12] = uStack_3e0;
  local_488[0x15] = uStack_3c8;
  local_488[0x14] = local_3d0;
  local_488[0x17] = uStack_3b8;
  local_488[0x16] = uStack_3c0;
  local_488[9] = uStack_428;
  local_488[8] = local_430;
  local_488[0xb] = uStack_418;
  local_488[10] = uStack_420;
  local_488[0xd] = uStack_408;
  local_488[0xc] = local_410;
  local_488[0xf] = uStack_3f8;
  local_488[0xe] = uStack_400;
  local_488[1] = uStack_468;
  *local_488 = local_470;
  local_488[3] = uStack_458;
  local_488[2] = uStack_460;
  local_488[5] = uStack_448;
  local_488[4] = local_450;
  local_488[7] = puStack_438;
  local_488[6] = puStack_440;
  return;
}



/* Address: 0x100ad1e14 | FUN_100ad1e14 */

void FUN_100ad1e14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  FUN_100ad00d0();
  _swift_release(uVar1);
  *param_1 = param_2;
  return;
}



/* Address: 0x100ad1e50 | FUN_100ad1e50 */

undefined8 FUN_100ad1e50(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_100ad27f0(uVar2);
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x100ad1e84 | FUN_100ad1e84 */

void FUN_100ad1e84(void)

{
  FUN_100ad1ea4();
  return;
}



/* Address: 0x100ad1ea4 | FUN_100ad1ea4 */

long FUN_100ad1ea4(_AnyIteratorBoxBase *param_1,undefined8 *param_2,long param_3)

{
  code *pcVar1;
  int iVar2;
  _AnyIteratorBoxBase *this;
  long lVar3;
  long lVar4;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  this = param_1;
  FUN_100ad00d0();
  _swift_release();
  lVar3 = 0;
  if ((param_2 != (undefined8 *)0x0) && (param_3 != 0)) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100ad1fe8);
      (*pcVar1)();
    }
    Swift::_AnyIteratorBoxBase::_next(this);
    iVar2 = (int)&local_148;
    FUN_100aca508();
    if (iVar2 == 1) {
      lVar4 = 0;
    }
    else {
      lVar4 = 0;
      do {
        param_2[5] = uStack_120;
        param_2[4] = local_128;
        param_2[7] = uStack_110;
        param_2[6] = local_118;
        param_2[1] = uStack_140;
        *param_2 = local_148;
        param_2[3] = uStack_130;
        param_2[2] = local_138;
        param_2[0xd] = uStack_e0;
        param_2[0xc] = local_e8;
        param_2[0xf] = uStack_d0;
        param_2[0xe] = local_d8;
        param_2[9] = uStack_100;
        param_2[8] = local_108;
        param_2[0xb] = uStack_f0;
        param_2[10] = local_f8;
        param_2[0x15] = uStack_a0;
        param_2[0x14] = local_a8;
        param_2[0x17] = uStack_90;
        param_2[0x16] = local_98;
        param_2[0x11] = uStack_c0;
        param_2[0x10] = local_c8;
        param_2[0x13] = uStack_b0;
        param_2[0x12] = local_b8;
        param_2[0x1e] = local_58;
        param_2[0x1b] = uStack_70;
        param_2[0x1a] = local_78;
        param_2[0x1d] = uStack_60;
        param_2[0x1c] = local_68;
        param_2[0x19] = uStack_80;
        param_2[0x18] = local_88;
        lVar3 = param_3;
        if (param_3 + -1 == lVar4) goto LAB_100ad1fc4;
        param_2 = param_2 + 0x1f;
        Swift::_AnyIteratorBoxBase::_next(this);
        iVar2 = (int)&local_148;
        FUN_100aca508();
        lVar4 = lVar4 + 1;
      } while (iVar2 != 1);
    }
    FUN_1000fb4c4(&local_148,&DAT_100ff8490,&DAT_100c94450);
    lVar3 = lVar4;
  }
LAB_100ad1fc4:
  *(_AnyIteratorBoxBase **)param_1 = this;
  return lVar3;
}



/* Address: 0x100ad1fe8 | FUN_100ad1fe8 */

void FUN_100ad1fe8(undefined8 *param_1,__DataStorage *param_2,ulong param_3)

{
  long lVar1;
  int *piVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  __DataStorage *p_Var8;
  uint uVar9;
  int iVar10;
  ulong uVar11;
  long lVar12;
  int iVar13;
  int local_78 [2];
  undefined1 local_70;
  undefined1 local_6f;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = (uint)(param_3 >> 0x20);
  uVar9 = uVar3 >> 0x1e;
  iVar5 = (int)param_2;
  iVar10 = (int)((ulong)param_2 >> 0x20);
  if (uVar3 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar11 = param_3 >> 0x30 & 0xff;
joined_r0x000100ad2058:
      if (uVar11 != 0x10) goto LAB_100ad2180;
    }
    else {
      if (SBORROW4(iVar10,iVar5)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2348);
        (*pcVar4)();
      }
      if (iVar10 - iVar5 != 0x10) goto LAB_100ad2180;
    }
    if (uVar9 == 0) {
      iVar13 = (int)param_3;
      if (iVar5 != 0x8074b50) {
        iVar13 = iVar10;
        iVar10 = iVar5;
      }
      local_78[0] = (int)param_3;
      local_70 = (char)(param_3 >> 0x20);
      local_6f = (char)(param_3 >> 0x28);
      piVar2 = (int *)&local_70;
      if (iVar5 != 0x8074b50) {
        piVar2 = local_78;
      }
      iVar5 = *piVar2;
    }
    else {
      if (uVar9 == 2) {
        lVar12 = *(long *)(param_2 + 0x10);
        p_Var8 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad2378:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad237c);
          (*pcVar4)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar12,(long)p_Var6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2350);
          (*pcVar4)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var8 + (lVar12 - (long)p_Var6) == (__DataStorage *)0x0) goto LAB_100ad2378;
        lVar1 = 4;
        if (*(int *)(p_Var8 + (lVar12 - (long)p_Var6)) != 0x8074b50) {
          lVar1 = 0;
        }
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad2390:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2394);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2358);
          (*pcVar4)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad2390;
        iVar10 = *(int *)(p_Var7 + (lVar12 - (long)p_Var8) + lVar1);
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad23a8:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad23ac);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2360);
          (*pcVar4)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var6 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad23a8;
        iVar13 = *(int *)(p_Var6 + (lVar12 - (long)p_Var8) + lVar1 + 4);
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad23c0:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad23c4);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2368);
          (*pcVar4)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad23c0;
        p_Var8 = p_Var7 + (lVar12 - (long)p_Var8) + lVar1;
      }
      else {
        lVar12 = (long)iVar5;
        if ((long)param_2 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad234c);
          (*pcVar4)();
        }
        p_Var8 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var8 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad2384:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2388);
          (*pcVar4)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (SBORROW8(lVar12,(long)p_Var6)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2354);
          (*pcVar4)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var8 + (lVar12 - (long)p_Var6) == (__DataStorage *)0x0) goto LAB_100ad2384;
        lVar1 = 4;
        if (*(int *)(p_Var8 + (lVar12 - (long)p_Var6)) != 0x8074b50) {
          lVar1 = 0;
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad239c:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad23a0);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad235c);
          (*pcVar4)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad239c;
        iVar10 = *(int *)(p_Var7 + (lVar12 - (long)p_Var8) + lVar1);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad23b4:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad23b8);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2364);
          (*pcVar4)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var6 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad23b4;
        iVar13 = *(int *)(p_Var6 + (lVar12 - (long)p_Var8) + lVar1 + 4);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad23cc:
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad23d0);
          (*pcVar4)();
        }
        p_Var8 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad236c);
          (*pcVar4)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var8);
        if (p_Var7 + (lVar12 - (long)p_Var8) == (__DataStorage *)0x0) goto LAB_100ad23cc;
        p_Var8 = p_Var7 + (lVar12 - (long)p_Var8) + lVar1;
      }
      iVar5 = *(int *)(p_Var8 + 8);
    }
    FUN_10003bf2c(param_2,param_3);
    param_1[1] = 0xc000000000000000;
    *param_1 = 0;
    param_1[2] = CONCAT44(iVar10,0x4b50) | 0x8070000;
    param_1[3] = CONCAT44(iVar5,iVar13);
  }
  else {
    if (uVar9 == 2) {
      uVar11 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100ad2344);
        (*pcVar4)();
      }
      goto joined_r0x000100ad2058;
    }
LAB_100ad2180:
    FUN_10003bf2c(param_2,param_3);
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100ad23d0 | FUN_100ad23d0 */

void FUN_100ad23d0(undefined8 *param_1,__DataStorage *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  __DataStorage *p_Var5;
  __DataStorage *p_Var6;
  __DataStorage *p_Var7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined1 local_78;
  undefined1 local_77;
  undefined1 local_76;
  undefined1 local_75;
  undefined1 local_74;
  undefined1 local_73;
  undefined1 local_72;
  undefined1 local_71;
  undefined1 local_70;
  undefined1 local_6f;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)(param_3 >> 0x20);
  uVar8 = uVar2 >> 0x1e;
  iVar4 = (int)param_2;
  iVar9 = (int)((ulong)param_2 >> 0x20);
  if (uVar2 >> 0x1e < 2) {
    if (uVar8 == 0) {
      uVar10 = param_3 >> 0x30 & 0xff;
joined_r0x000100ad2440:
      if (uVar10 != 0x18) goto LAB_100ad2568;
    }
    else {
      if (SBORROW4(iVar9,iVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2768);
        (*pcVar3)();
      }
      if (iVar9 - iVar4 != 0x18) goto LAB_100ad2568;
    }
    if (uVar8 == 0) {
      if (iVar4 != 0x8074b50) {
        iVar9 = iVar4;
      }
      local_78 = (undefined1)((ulong)param_2 >> 0x20);
      local_77 = (undefined1)((ulong)param_2 >> 0x28);
      local_76 = (undefined1)((ulong)param_2 >> 0x30);
      local_75 = (undefined1)((ulong)param_2 >> 0x38);
      local_74 = (undefined1)param_3;
      local_73 = (undefined1)(param_3 >> 8);
      local_72 = (undefined1)(param_3 >> 0x10);
      local_71 = (undefined1)(param_3 >> 0x18);
      local_70 = (undefined1)(param_3 >> 0x20);
      local_6f = (undefined1)(param_3 >> 0x28);
      uVar10 = 4;
      if (iVar4 != 0x8074b50) {
        uVar10 = 0;
      }
      uVar11 = param_3 >> 0x20 & 0xffff;
      uVar13 = *(undefined8 *)((ulong)&local_78 | uVar10);
    }
    else {
      if (uVar8 == 2) {
        lVar12 = *(long *)(param_2 + 0x10);
        p_Var7 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad2798:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad279c);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2770);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var7 + (lVar12 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100ad2798;
        lVar1 = 4;
        if (*(int *)(p_Var7 + (lVar12 - (long)p_Var5)) != 0x8074b50) {
          lVar1 = 0;
        }
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27b0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27b4);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2778);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27b0;
        iVar9 = *(int *)(p_Var6 + (lVar12 - (long)p_Var7) + lVar1);
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27c8:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27cc);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2780);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27c8;
        uVar13 = *(undefined8 *)(p_Var5 + (lVar12 - (long)p_Var7) + lVar1 + 4);
        lVar12 = *(long *)(param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27e0:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27e4);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2788);
          (*pcVar3)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27e0;
        p_Var7 = p_Var6 + (lVar12 - (long)p_Var7) + lVar1;
      }
      else {
        lVar12 = (long)iVar4;
        if ((long)param_2 >> 0x20 < lVar12) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad276c);
          (*pcVar3)();
        }
        p_Var7 = param_2;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),param_2);
        if (p_Var7 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27a4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27a8);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (SBORROW8(lVar12,(long)p_Var5)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2774);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var7 + (lVar12 - (long)p_Var5) == (__DataStorage *)0x0) goto LAB_100ad27a4;
        lVar1 = 4;
        if (*(int *)(p_Var7 + (lVar12 - (long)p_Var5)) != 0x8074b50) {
          lVar1 = 0;
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27bc:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27c0);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad277c);
          (*pcVar3)();
        }
        p_Var5 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27bc;
        iVar9 = *(int *)(p_Var6 + (lVar12 - (long)p_Var7) + lVar1);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (p_Var5 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27d4:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27d8);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var5);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2784);
          (*pcVar3)();
        }
        p_Var6 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var5 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27d4;
        uVar13 = *(undefined8 *)(p_Var5 + (lVar12 - (long)p_Var7) + lVar1 + 4);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (p_Var6 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad27ec:
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad27f0);
          (*pcVar3)();
        }
        p_Var7 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(lVar12,(long)p_Var7)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad278c);
          (*pcVar3)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var7);
        if (p_Var6 + (lVar12 - (long)p_Var7) == (__DataStorage *)0x0) goto LAB_100ad27ec;
        p_Var7 = p_Var6 + (lVar12 - (long)p_Var7) + lVar1;
      }
      uVar11 = *(ulong *)(p_Var7 + 0xc);
    }
    FUN_10003bf2c(param_2,param_3);
    param_1[1] = 0xc000000000000000;
    *param_1 = 0;
    param_1[2] = CONCAT44(iVar9,0x4b50) | 0x8070000;
    param_1[3] = uVar13;
    param_1[4] = uVar11;
  }
  else {
    if (uVar8 == 2) {
      uVar10 = *(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10);
      if (SBORROW8(*(long *)(param_2 + 0x18),*(long *)(param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad2764);
        (*pcVar3)();
      }
      goto joined_r0x000100ad2440;
    }
LAB_100ad2568:
    FUN_10003bf2c(param_2,param_3);
    param_1[1] = 0xf000000000000000;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[2] = 0;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ad27f0 | FUN_100ad27f0 */

undefined * FUN_100ad27f0(_AnyIteratorBoxBase *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
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
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  code *pcVar33;
  bool bVar34;
  int iVar35;
  undefined *puVar36;
  undefined *puVar37;
  ulong uVar38;
  ulong uVar39;
  undefined *puVar40;
  undefined8 *puVar41;
  long lVar42;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  FUN_100ad00d0();
  Swift::_AnyIteratorBoxBase::_next(param_1);
  iVar35 = (int)&local_168;
  FUN_100aca508();
  if (iVar35 == 1) {
    lVar42 = 0;
    puVar36 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar42 = 0;
    puVar40 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar41 = (undefined8 *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      uVar32 = local_78;
      uVar31 = uStack_80;
      uVar30 = local_88;
      uVar29 = uStack_90;
      uVar28 = uStack_98;
      uVar27 = uStack_a0;
      uVar26 = local_a8;
      uVar25 = uStack_b0;
      uVar24 = uStack_b8;
      uVar23 = uStack_c0;
      uVar22 = local_c8;
      uVar21 = uStack_d0;
      uVar20 = uStack_d8;
      uVar19 = uStack_e0;
      uVar18 = local_e8;
      uVar17 = uStack_f0;
      uVar16 = uStack_f8;
      uVar15 = uStack_100;
      uVar14 = local_108;
      uVar13 = uStack_110;
      uVar12 = uStack_118;
      uVar11 = uStack_120;
      uVar10 = local_128;
      uVar9 = uStack_130;
      uVar8 = uStack_138;
      uVar7 = uStack_140;
      uVar6 = local_148;
      uVar5 = uStack_150;
      uVar4 = uStack_158;
      uVar3 = uStack_160;
      uVar2 = local_168;
      puVar36 = puVar40;
      if (lVar42 == 0) {
        uVar38 = *(ulong *)(puVar40 + 0x18);
        if ((long)((uVar38 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar33 = (code *)SoftwareBreakpoint(1,0x100ad2a3c);
          (*pcVar33)();
        }
        uVar39 = uVar38 & 0xfffffffffffffffe;
        if ((long)uVar38 < 2) {
          uVar39 = 1;
        }
        puVar36 = &DAT_100ff85c8;
        FUN_1000f7830(&DAT_100ff85c8,&DAT_100c946e0);
        _swift_allocObject();
        puVar37 = puVar36;
        _malloc_size();
        *(ulong *)(puVar36 + 0x10) = uVar39;
        *(long *)(puVar36 + 0x18) = ((long)(puVar37 + -0x20) / 0xf8) * 2;
        puVar1 = puVar36 + 0x20;
        uVar38 = *(ulong *)(puVar40 + 0x18) >> 1;
        if (*(long *)(puVar40 + 0x10) != 0) {
          if ((puVar36 != puVar40) || (puVar40 + 0x20 + uVar38 * 0xf8 <= puVar1)) {
            _memmove(puVar1,puVar40 + 0x20,uVar38 * 0xf8);
          }
          *(undefined8 *)(puVar40 + 0x10) = 0;
        }
        puVar41 = (undefined8 *)(puVar1 + uVar38 * 0xf8);
        lVar42 = ((long)(puVar37 + -0x20) / 0xf8 & 0x7fffffffffffffffU) - uVar38;
        _swift_release(puVar40);
      }
      bVar34 = SBORROW8(lVar42,1);
      lVar42 = lVar42 + -1;
      if (bVar34) {
                    /* WARNING: Does not return */
        pcVar33 = (code *)SoftwareBreakpoint(1,0x100ad2a38);
        (*pcVar33)();
      }
      puVar41[0x1e] = uVar32;
      puVar41[0x1b] = uVar29;
      puVar41[0x1a] = uVar28;
      puVar41[0x1d] = uVar31;
      puVar41[0x1c] = uVar30;
      puVar41[0x17] = uVar25;
      puVar41[0x16] = uVar24;
      puVar41[0x19] = uVar27;
      puVar41[0x18] = uVar26;
      puVar41[0x13] = uVar21;
      puVar41[0x12] = uVar20;
      puVar41[0x15] = uVar23;
      puVar41[0x14] = uVar22;
      puVar41[0xf] = uVar17;
      puVar41[0xe] = uVar16;
      puVar41[0x11] = uVar19;
      puVar41[0x10] = uVar18;
      puVar41[0xb] = uVar13;
      puVar41[10] = uVar12;
      puVar41[0xd] = uVar15;
      puVar41[0xc] = uVar14;
      puVar41[7] = uVar9;
      puVar41[6] = uVar8;
      puVar41[9] = uVar11;
      puVar41[8] = uVar10;
      puVar41[3] = uVar5;
      puVar41[2] = uVar4;
      puVar41[5] = uVar7;
      puVar41[4] = uVar6;
      puVar41[1] = uVar3;
      *puVar41 = uVar2;
      Swift::_AnyIteratorBoxBase::_next(param_1);
      iVar35 = (int)&local_168;
      FUN_100aca508();
      puVar40 = puVar36;
      puVar41 = puVar41 + 0x1f;
    } while (iVar35 != 1);
  }
  _swift_release(param_1);
  FUN_1000fb4c4(&local_168,&DAT_100ff8490,&DAT_100c94450);
  if (1 < *(ulong *)(puVar36 + 0x18)) {
    uVar38 = *(ulong *)(puVar36 + 0x18) >> 1;
    if (SBORROW8(uVar38,lVar42)) {
                    /* WARNING: Does not return */
      pcVar33 = (code *)SoftwareBreakpoint(1,0x100ad2a40);
      (*pcVar33)();
    }
    *(ulong *)(puVar36 + 0x10) = uVar38 - lVar42;
  }
  return puVar36;
}



/* Address: 0x100ad2a40 | FUN_100ad2a40 */

void FUN_100ad2a40(ulong *param_1,void *param_2,ulong param_3,FILE *param_4)

{
  undefined4 uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  FILE *pFVar5;
  code *pcVar6;
  Deallocator DVar7;
  int iVar8;
  undefined7 extraout_var;
  __DataStorage *p_Var9;
  __DataStorage *p_Var10;
  __DataStorage *p_Var11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  void *pvVar15;
  void *pvVar16;
  void *pvVar17;
  undefined8 *puVar18;
  ulong uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  ulong local_a0 [4];
  __DataStorage *p_Stack_80;
  FILE *local_78;
  undefined8 *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar7 = Foundation::Data::Deallocator::typeMetadataAccessor();
  p_Var11 = (__DataStorage *)CONCAT71(extraout_var,DVar7.value);
  lVar24 = *(long *)(p_Var11 + -8);
  puVar18 = (undefined8 *)((long)local_a0 - (*(long *)(lVar24 + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar20 = (uint)(param_3 >> 0x20);
  iVar8 = (int)param_2;
  if (uVar20 >> 0x1e < 2) {
    if (uVar20 >> 0x1e == 0) {
      uVar14 = param_3 >> 0x30 & 0xff;
joined_r0x000100ad2adc:
      pvVar17 = param_2;
      uVar19 = param_3;
      if (uVar14 != 0x16) goto LAB_100ad2f98;
    }
    else {
      iVar12 = (int)((ulong)param_2 >> 0x20);
      if (SBORROW4(iVar12,iVar8)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30bc);
        (*pcVar6)();
      }
      pvVar17 = param_2;
      uVar19 = param_3;
      if (iVar12 - iVar8 != 0x16) goto LAB_100ad2f98;
    }
    uVar20 = uVar20 >> 0x1e;
    if (uVar20 == 2) {
      lVar22 = *(long *)((long)param_2 + 0x10);
      p_Var10 = p_Var11;
      local_70 = puVar18;
      Foundation::__DataStorage::_get__bytes
                ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
      if (p_Var10 == (__DataStorage *)0x0) {
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3118);
        (*pcVar6)();
      }
      p_Var9 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
      if (SBORROW8(lVar22,(long)p_Var9)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30c4);
        (*pcVar6)();
      }
      p_Var10 = p_Var10 + (lVar22 - (long)p_Var9);
      Foundation::__DataStorage::get__length((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9)
      ;
      if (p_Var10 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3128);
        (*pcVar6)();
      }
LAB_100ad2b98:
      pvVar15 = (void *)(ulong)*(uint *)p_Var10;
      puVar18 = local_70;
    }
    else {
      pvVar15 = param_2;
      if (uVar20 == 1) {
        lVar22 = (long)iVar8;
        if ((long)param_2 >> 0x20 < lVar22) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30c0);
          local_70 = puVar18;
          (*pcVar6)();
        }
        p_Var10 = p_Var11;
        local_70 = puVar18;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3120:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3124);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__offset
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar22,(long)p_Var9)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30c8);
          (*pcVar6)();
        }
        p_Var10 = p_Var10 + (lVar22 - (long)p_Var9);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var10 == (__DataStorage *)0x0) goto LAB_100ad3120;
        goto LAB_100ad2b98;
      }
    }
    pvVar17 = param_2;
    uVar19 = param_3;
    if ((int)pvVar15 == 0x6054b50) {
      local_a0[3] = lVar24;
      p_Stack_80 = p_Var11;
      local_78 = param_4;
      if (uVar20 == 2) {
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var11 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3130:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3134);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(lVar24,(long)p_Var10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30d0);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var11 + (lVar24 - (long)p_Var10) == (__DataStorage *)0x0) goto LAB_100ad3130;
        uVar2 = *(ushort *)(p_Var11 + (lVar24 - (long)p_Var10) + 4);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3148:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad314c);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30d8);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3148;
        uVar3 = *(ushort *)(p_Var9 + (lVar24 - (long)p_Var11) + 6);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3160:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3164);
          (*pcVar6)();
        }
        local_a0[2] = (ulong)uVar3;
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30e0);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3160;
        uVar3 = *(ushort *)(p_Var10 + (lVar24 - (long)p_Var11) + 8);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3178:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad317c);
          (*pcVar6)();
        }
        local_a0[1] = (ulong)uVar3;
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30e8);
          (*pcVar6)();
        }
        local_a0[0] = (ulong)uVar2;
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3178;
        uVar2 = *(ushort *)(p_Var9 + (lVar24 - (long)p_Var11) + 10);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3190:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3194);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30f0);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3190;
        uVar20 = *(uint *)(p_Var10 + (lVar24 - (long)p_Var11) + 0xc);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad31a8:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad31ac);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30f8);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad31a8;
        uVar1 = *(undefined4 *)(p_Var9 + (lVar24 - (long)p_Var11) + 0x10);
        lVar24 = *(long *)((long)param_2 + 0x10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad31c0:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad31c4);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3100);
          (*pcVar6)();
        }
        local_70 = (undefined8 *)CONCAT44(local_70._4_4_,uVar1);
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad31c0;
        uVar14 = local_a0[0] << 0x20 | local_a0[2] << 0x30;
        pvVar15 = (void *)(ulong)*(ushort *)(p_Var10 + (lVar24 - (long)p_Var11) + 0x14);
        uVar23 = local_a0[1] | (ulong)uVar2 << 0x10 | (ulong)uVar20 << 0x20;
      }
      else if (uVar20 == 1) {
        lVar24 = (long)iVar8;
        if ((long)param_2 >> 0x20 < lVar24) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30cc);
          (*pcVar6)();
        }
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var11 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad313c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3140);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (SBORROW8(lVar24,(long)p_Var10)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30d4);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var11 + (lVar24 - (long)p_Var10) == (__DataStorage *)0x0) goto LAB_100ad313c;
        uVar2 = *(ushort *)(p_Var11 + (lVar24 - (long)p_Var10) + 4);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3154:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3158);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30dc);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3154;
        uVar3 = *(ushort *)(p_Var9 + (lVar24 - (long)p_Var11) + 6);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad316c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3170);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30e4);
          (*pcVar6)();
        }
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad316c;
        uVar4 = *(ushort *)(p_Var10 + (lVar24 - (long)p_Var11) + 8);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad3184:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3188);
          (*pcVar6)();
        }
        local_a0[2] = (ulong)uVar4;
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30ec);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad3184;
        uVar4 = *(ushort *)(p_Var9 + (lVar24 - (long)p_Var11) + 10);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad319c:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad31a0);
          (*pcVar6)();
        }
        local_a0[1] = (ulong)uVar4;
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30f4);
          (*pcVar6)();
        }
        local_a0[0] = (ulong)uVar3;
        p_Var9 = (__DataStorage *)
                 Foundation::__DataStorage::get__length
                           ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad319c;
        uVar20 = *(uint *)(p_Var10 + (lVar24 - (long)p_Var11) + 0xc);
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (p_Var9 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad31b4:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad31b8);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var9);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30fc);
          (*pcVar6)();
        }
        p_Var10 = (__DataStorage *)
                  Foundation::__DataStorage::get__length
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var9 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad31b4;
        local_70 = (undefined8 *)
                   CONCAT44(local_70._4_4_,*(undefined4 *)(p_Var9 + (lVar24 - (long)p_Var11) + 0x10)
                           );
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (p_Var10 == (__DataStorage *)0x0) {
          Foundation::__DataStorage::get__length
                    ((__DataStorage *)(param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_100ad31cc:
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad31d0);
          (*pcVar6)();
        }
        p_Var11 = (__DataStorage *)
                  Foundation::__DataStorage::get__offset
                            ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var10);
        if (SBORROW8(lVar24,(long)p_Var11)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3104);
          (*pcVar6)();
        }
        Foundation::__DataStorage::get__length
                  ((__DataStorage *)(param_3 & 0x3fffffffffffffff),p_Var11);
        if (p_Var10 + (lVar24 - (long)p_Var11) == (__DataStorage *)0x0) goto LAB_100ad31cc;
        uVar14 = (ulong)uVar2 << 0x20 | local_a0[0] << 0x30;
        pvVar15 = (void *)(ulong)*(ushort *)(p_Var10 + (lVar24 - (long)p_Var11) + 0x14);
        uVar23 = local_a0[2] | local_a0[1] << 0x10 | (ulong)uVar20 << 0x20;
      }
      else {
        local_70 = (undefined8 *)((ulong)local_70 & 0xffffffff00000000);
        pvVar15 = (void *)0x0;
        uVar14 = (ulong)param_2 & 0xffffffff00000000;
        uVar23 = param_3 & 0xffffffffffff;
      }
      pvVar17 = pvVar15;
      _swift_slowAlloc(pvVar15,0xffffffffffffffff);
      pFVar5 = local_78;
      uVar19 = _fread(pvVar17,1,(size_t)pvVar15,local_78);
      iVar8 = _ferror(pFVar5);
      if (iVar8 < 1) {
        uVar14 = uVar14 | 0x6054b50;
        uVar21 = (ulong)local_70 & 0xffffffff | (long)pvVar15 << 0x20;
        *puVar18 = FUN_10094a398;
        puVar18[1] = 0;
        (**(code **)(local_a0[3] + 0x68))
                  (puVar18,*(undefined4 *)
                            PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
                   ,p_Stack_80);
        FUN_100abfa10(pvVar17,uVar19,puVar18);
        FUN_10003bf2c(param_2,param_3);
        uVar20 = (uint)(uVar19 >> 0x20);
        uVar13 = uVar20 >> 0x1e;
        if (uVar20 >> 0x1e < 2) {
          if (uVar13 == 0) {
            pvVar16 = (void *)(uVar19 >> 0x30 & 0xff);
          }
          else {
            iVar8 = (int)((ulong)pvVar17 >> 0x20);
            if (SBORROW4(iVar8,(int)pvVar17)) {
                    /* WARNING: Does not return */
              pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3108);
              (*pcVar6)();
            }
            pvVar16 = (void *)(long)(iVar8 - (int)pvVar17);
          }
        }
        else {
          if (uVar13 != 2) {
            if ((int)pvVar15 == 0) goto LAB_100ad2fb0;
            goto LAB_100ad2f98;
          }
          pvVar16 = (void *)(*(long *)((long)pvVar17 + 0x18) - *(long *)((long)pvVar17 + 0x10));
          if (SBORROW8(*(long *)((long)pvVar17 + 0x18),*(long *)((long)pvVar17 + 0x10))) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad3088);
            (*pcVar6)();
          }
        }
        if (pvVar16 == pvVar15) goto LAB_100ad2fb0;
      }
      else {
        _swift_slowDealloc(pvVar17,0xffffffffffffffff,0xffffffffffffffff);
        pvVar17 = param_2;
        uVar19 = param_3;
      }
    }
  }
  else {
    pvVar17 = param_2;
    uVar19 = param_3;
    if (uVar20 >> 0x1e == 2) {
      uVar14 = *(long *)((long)param_2 + 0x18) - *(long *)((long)param_2 + 0x10);
      if (SBORROW8(*(long *)((long)param_2 + 0x18),*(long *)((long)param_2 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100ad30b8);
        (*pcVar6)();
      }
      goto joined_r0x000100ad2adc;
    }
  }
LAB_100ad2f98:
  FUN_10003bf2c(pvVar17,uVar19);
  uVar14 = 0;
  uVar23 = 0;
  uVar21 = 0;
  pvVar17 = (void *)0x0;
  uVar19 = 0xf000000000000000;
LAB_100ad2fb0:
  *param_1 = uVar14;
  param_1[1] = uVar23;
  param_1[2] = uVar21;
  param_1[3] = (ulong)pvVar17;
  param_1[4] = uVar19;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ad31d0 | FUN_100ad31d0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100ad31d0(undefined8 *param_1,FILE *param_2,ulong param_3)

{
  undefined4 uVar1;
  long lVar2;
  Deallocator DVar3;
  int iVar4;
  undefined7 extraout_var;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  size_t sVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  long lVar12;
  code *pcVar13;
  code *pcVar14;
  code *local_c0 [5];
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  ulong local_68;
  long lVar5;
  
  DVar3 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,DVar3.value);
  lVar12 = *(long *)(lVar5 + -8);
  lVar2 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)local_c0 + lVar2);
  pcVar13 = (code *)0x0;
  pcVar14 = (code *)0x0;
  if ((param_3 < 0x15) || (uVar7 = param_3 - 0x14, uVar7 < 0x39)) {
    local_70 = 0;
    sVar9 = 0;
    puVar10 = (undefined8 *)0x0;
    uVar8 = 0;
    uVar7 = 0;
    local_c0[4] = (code *)0x0;
    uStack_98 = 0;
    local_90 = 0;
    uStack_88 = 0;
    local_68 = 0xf000000000000000;
    uStack_80 = 0;
    uStack_78 = 0;
    goto LAB_100ad3358;
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100ad3448);
    (*pcVar13)();
  }
  _fseeko(param_2,uVar7,0);
  pcVar13 = (code *)0x14;
  _swift_slowAlloc(0x14,0xffffffffffffffff);
  sVar6 = _fread(pcVar13,1,0x14,param_2);
  iVar4 = _ferror(param_2);
  if (iVar4 < 1) {
    *puVar11 = FUN_10094a398;
    *(undefined8 *)((long)local_c0 + lVar2 + 8) = 0;
    uVar1 = *(undefined4 *)
             PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
    ;
    local_c0[1] = *(code **)(lVar12 + 0x68);
    (*local_c0[1])(puVar11,uVar1,lVar5);
    puVar10 = puVar11;
    FUN_100abfa10();
    pcVar14 = pcVar13;
    sVar9 = sVar6;
    FUN_100ace548();
    local_c0[0] = pcVar14;
    FUN_10003bf2c(pcVar13,sVar6);
    if (((ulong)puVar10 & 0xff00000000) != 0x100000000) {
      if ((long)(param_3 - 0x4c) < 0) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100ad344c);
        (*pcVar13)();
      }
      _fseeko(param_2,param_3 - 0x4c,0);
      pcVar13 = (code *)&DAT_00000038;
      _swift_slowAlloc(0x38,0xffffffffffffffff);
      sVar6 = _fread(pcVar13,1,0x38,param_2);
      iVar4 = _ferror(param_2);
      if (0 < iVar4) goto LAB_100ad3284;
      *puVar11 = FUN_10094a398;
      *(undefined8 *)((long)local_c0 + lVar2 + 8) = 0;
      (*local_c0[1])(puVar11,uVar1,lVar5);
      FUN_100abfa10(pcVar13,sVar6,puVar11);
      FUN_100ace8d0(local_c0 + 2);
      if (local_68 >> 0x3c < 0xf) {
        uVar7 = (ulong)local_c0[0] & 0xffffffff00000000;
        uVar8 = (ulong)local_c0[0] & 0xffffffff;
        pcVar13 = local_c0[2];
        pcVar14 = local_c0[3];
        goto LAB_100ad3358;
      }
    }
  }
  else {
LAB_100ad3284:
    _swift_slowDealloc(pcVar13,0xffffffffffffffff,0xffffffffffffffff);
  }
  local_70 = 0;
  sVar9 = 0;
  puVar10 = (undefined8 *)0x0;
  uVar8 = 0;
  uVar7 = 0;
  local_c0[4] = (code *)0x0;
  uStack_98 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_68 = 0xf000000000000000;
  uStack_80 = 0;
  uStack_78 = 0;
  pcVar13 = (code *)0;
  pcVar14 = (code *)0;
LAB_100ad3358:
  param_1[1] = pcVar14;
  *param_1 = pcVar13;
  param_1[3] = uStack_98;
  param_1[2] = local_c0[4];
  param_1[5] = uStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = uStack_80;
  param_1[8] = local_70;
  param_1[9] = local_68;
  param_1[10] = uVar7 | uVar8;
  param_1[0xb] = sVar9;
  *(int *)(param_1 + 0xc) = (int)puVar10;
  return;
}



/* Address: 0x100ad344c | FUN_100ad344c */

void FUN_100ad344c(undefined8 *param_1,FILE *param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Deallocator DVar4;
  int iVar5;
  undefined7 extraout_var;
  ulong uVar6;
  void *pvVar7;
  size_t sVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  long local_1e0;
  int local_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  undefined8 uStack_14c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  ulong local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  ulong local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined8 uStack_8c;
  long local_78;
  
  local_78 = *(long *)PTR____stack_chk_guard_100ea82f0;
  DVar4 = Foundation::Data::Deallocator::typeMetadataAccessor();
  lVar10 = CONCAT71(extraout_var,DVar4.value);
  lVar11 = *(long *)(lVar10 + -8);
  lVar2 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)&local_1e0 + lVar2);
  _fseeko(param_2,0,2);
  uVar6 = _ftello(param_2);
  if ((-1 < (long)uVar6) && (local_1e0 = lVar10, 0x15 < uVar6)) {
    lVar10 = 0x16;
    do {
      lVar1 = uVar6 - lVar10;
      if (SBORROW8(uVar6,lVar10)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad36b4);
        (*pcVar3)();
      }
      _fseeko(param_2,lVar1,0);
      local_1d4 = 0;
      _fread(&local_1d4,1,4,param_2);
      if (local_1d4 == 0x6054b50) {
        if (lVar1 < 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100ad36b8);
          (*pcVar3)();
        }
        _fseeko(param_2,lVar1,0);
        pvVar7 = (void *)0x16;
        _swift_slowAlloc(0x16,0xffffffffffffffff);
        sVar8 = _fread(pvVar7,1,0x16,param_2);
        iVar5 = _ferror(param_2);
        if (iVar5 < 1) {
          *puVar9 = FUN_10094a398;
          *(undefined8 *)(&stack0xfffffffffffffe28 + lVar2) = 0;
          (**(code **)(lVar11 + 0x68))
                    (puVar9,*(undefined4 *)
                             PTR___enum_case_for_Foundation_Data_Deallocator_custom_Foundation_Data_Deallocator_Type___>___Swift_UnsafeMutableRawPointer_Swift_Int___>______>_Foundation_Data_Deallocator_100ea7208
                     ,local_1e0);
          FUN_100abfa10(pvVar7,sVar8,puVar9);
          FUN_100ad2a40(&local_138);
          if (local_118 >> 0x3c < 0xf) {
            uStack_1c8 = uStack_130;
            local_1d0 = local_138;
            uStack_1b8 = uStack_120;
            uStack_1c0 = local_128;
            FUN_100ad31d0(&uStack_1a8,param_2,lVar1);
            local_1b0 = local_118;
            FUN_100004520(&local_1d0);
            uStack_a8 = uStack_168;
            local_b0 = local_170;
            uStack_a0 = uStack_160;
            uStack_c8 = uStack_188;
            local_d0 = local_190;
            uStack_b8 = uStack_178;
            local_c0 = uStack_180;
            uStack_98 = uStack_158;
            uStack_8c = uStack_14c;
            local_94 = local_154;
            uStack_90 = uStack_150;
            uStack_e8 = uStack_1a8;
            local_f0 = local_1b0;
            uStack_d8 = uStack_198;
            uStack_e0 = uStack_1a0;
            uStack_108 = uStack_1c8;
            local_110 = local_1d0;
            uStack_f8 = uStack_1b8;
            uStack_100 = uStack_1c0;
            goto LAB_100ad35f4;
          }
        }
        else {
          _swift_slowDealloc(pvVar7,0xffffffffffffffff,0xffffffffffffffff);
        }
        break;
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 <= (long)uVar6);
  }
  FUN_100ad3b44(&local_110);
LAB_100ad35f4:
  param_1[0xd] = uStack_a8;
  param_1[0xc] = local_b0;
  param_1[0xf] = CONCAT44(local_94,uStack_98);
  param_1[0xe] = uStack_a0;
  *(undefined8 *)((long)param_1 + 0x84) = uStack_8c;
  *(ulong *)((long)param_1 + 0x7c) = CONCAT44(uStack_90,local_94);
  param_1[5] = uStack_e8;
  param_1[4] = local_f0;
  param_1[7] = uStack_d8;
  param_1[6] = uStack_e0;
  param_1[9] = uStack_c8;
  param_1[8] = local_d0;
  param_1[0xb] = uStack_b8;
  param_1[10] = local_c0;
  param_1[1] = uStack_108;
  *param_1 = local_110;
  param_1[3] = uStack_f8;
  param_1[2] = uStack_100;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_78) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x100ad36bc | FUN_100ad36bc */

void FUN_100ad36bc(void)

{
  undefined8 in_stack_00000000;
  ulong in_stack_00000008;
  
  if (0xe < in_stack_00000008 >> 0x3c) {
    return;
  }
  FUN_10003bf2c(in_stack_00000000);
  return;
}



/* Address: 0x100ad36d8 | thunk_FUN_100ad36dc */

void thunk_FUN_100ad36dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff84b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94458;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94458,&DAT_100f31130);
  DAT_100ff84b8 = pTVar1;
  return;
}



/* Address: 0x100ad36dc | FUN_100ad36dc */

void FUN_100ad36dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff84b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94458;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94458,&DAT_100f31130);
  DAT_100ff84b8 = pTVar1;
  return;
}



/* Address: 0x100ad371c | thunk_FUN_100ad3720 */

void thunk_FUN_100ad3720(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff84c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94500,&DAT_100f311c0);
  DAT_100ff84c0 = pTVar1;
  return;
}



/* Address: 0x100ad3720 | FUN_100ad3720 */

void FUN_100ad3720(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff84c0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c94500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c94500,&DAT_100f311c0);
  DAT_100ff84c0 = pTVar1;
  return;
}



/* Address: 0x100ad3760 | thunk_FUN_100ad3764 */

void thunk_FUN_100ad3764(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff84c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff84d0;
  FUN_1000f8b08(&DAT_100ff84d0,&DAT_100c945a0);
  puVar2 = PTR_Swift__Swift__AnyIterator<undefined>_>Swift__IteratorProtocol_100eacdd0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AnyIterator<undefined>_>Swift__IteratorProtocol_100eacdd0,puVar1);
  DAT_100ff84c8 = puVar2;
  return;
}



/* Address: 0x100ad3764 | FUN_100ad3764 */

void FUN_100ad3764(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff84c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff84d0;
  FUN_1000f8b08(&DAT_100ff84d0,&DAT_100c945a0);
  puVar2 = PTR_Swift__Swift__AnyIterator<undefined>_>Swift__IteratorProtocol_100eacdd0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AnyIterator<undefined>_>Swift__IteratorProtocol_100eacdd0,puVar1);
  DAT_100ff84c8 = puVar2;
  return;
}



/* Address: 0x100ad37b4 | FUN_100ad37b4 */

void FUN_100ad37b4(void)

{
  FUN_100ad37bc(0);
  return;
}



/* Address: 0x100ad37bc | FUN_100ad37bc */

void FUN_100ad37bc(undefined8 param_1)

{
  if (DAT_100ff8500 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100ccbb20);
  return;
}



/* Address: 0x100ad37f4 | FUN_100ad37f4 */

void FUN_100ad37f4(long param_1,ulong param_2)

{
  URL UVar1;
  long lVar2;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_58 = *(long *)(UVar1.unknown + -8) + 0x40;
    puStack_50 = &DAT_100c94630;
    local_48 = PTR___value_witness_table_for_Builtin_RawPointer_100eabd60 + 0x40;
    puStack_40 = &DAT_100c94648;
    local_38 = &DAT_100c94660;
    lVar2 = 0x13f;
    FUN_100ad38b0();
    if (param_2 < 0x40) {
      local_30 = *(long *)(lVar2 + -8) + 0x40;
      puStack_28 = &DAT_100c94678;
      _swift_updateClassMetadata2(param_1,0x100,7,&local_58,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x100ad38b0 | FUN_100ad38b0 */

void FUN_100ad38b0(void)

{
  Optional OVar1;
  Encoding EVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff8510 == 0) {
    EVar2 = Encoding::_typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (EVar2.unknown == (undefined *)0x0) {
      DAT_100ff8510 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100ad3904 | FUN_100ad3904 */

void FUN_100ad3904(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100ad3910 | FUN_100ad3910 */

undefined1  [16] FUN_100ad3910(void)

{
  return ZEXT816(0x100f31130);
}



/* Address: 0x100ad3920 | FUN_100ad3920 */

undefined1  [16] FUN_100ad3920(void)

{
  return ZEXT816(0x100f311c0);
}



/* Address: 0x100ad3930 | FUN_100ad3930 */

void FUN_100ad3930(long param_1)

{
  FUN_10003bf2c(*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x100ad393c | FUN_100ad393c */

undefined4 * FUN_100ad393c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar2 = *(undefined8 *)(param_2 + 8);
  FUN_1001037b4(uVar1,uVar2);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar2;
  return param_1;
}



/* Address: 0x100ad3998 | FUN_100ad3998 */

undefined4 * FUN_100ad3998(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((long)param_1 + 6) = *(undefined2 *)((long)param_2 + 6);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((long)param_1 + 10) = *(undefined2 *)((long)param_2 + 10);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 8);
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *(undefined8 *)(param_1 + 6);
  uVar4 = *(undefined8 *)(param_1 + 8);
  *(undefined8 *)(param_1 + 6) = uVar1;
  *(undefined8 *)(param_1 + 8) = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  return param_1;
}



/* Address: 0x100ad3a1c | FUN_100ad3a1c */

void FUN_100ad3a1c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100ad3a30 | FUN_100ad3a30 */

undefined4 * FUN_100ad3a30(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 1) = *(undefined8 *)(param_2 + 1);
  *(undefined8 *)(param_1 + 3) = *(undefined8 *)(param_2 + 3);
  *(undefined2 *)(param_1 + 5) = *(undefined2 *)(param_2 + 5);
  uVar1 = *(undefined8 *)(param_1 + 6);
  uVar2 = *(undefined8 *)(param_1 + 8);
  uVar3 = *(undefined8 *)(param_2 + 6);
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 6) = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  return param_1;
}


