/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006cad5c | FUN_1006cad5c */

ulong FUN_1006cad5c(byte *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  
  iVar6 = (int)param_3;
  if (*param_1 == 0x2b) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006cafc4);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar6 + 0x30;
      uVar2 = 0x61;
      if (10 < (long)param_3) {
        uVar2 = iVar6 + 0x57;
      }
      uVar4 = 0x41;
      if (10 < (long)param_3) {
        uVar1 = 0x3a;
        uVar4 = iVar6 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar4 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_1006cafb0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = uVar10 * (param_3 & 0xffffffff);
        if (((uVar10 & 0xffffffff00000000) != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar8 = (uint)uVar10,
           uVar10 = (ulong)(uVar8 + uVar11), CARRY4(uVar8,uVar11))) goto LAB_1006caf9c;
        param_2 = param_2 + -1;
        uVar7 = uVar10;
      } while (param_2 != 0);
LAB_1006caedc:
      uVar9 = 0;
      goto LAB_1006cafb0;
    }
  }
  else if (*param_1 == 0x2d) {
    if (param_2 < 1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006cafc0);
      (*pcVar5)();
    }
    param_2 = param_2 + -1;
    if (param_2 != 0) {
      uVar10 = 0;
      uVar1 = iVar6 + 0x30;
      uVar2 = 0x61;
      if (10 < (long)param_3) {
        uVar2 = iVar6 + 0x57;
      }
      uVar4 = 0x41;
      if (10 < (long)param_3) {
        uVar1 = 0x3a;
        uVar4 = iVar6 + 0x37;
      }
      do {
        param_1 = param_1 + 1;
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar4 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_1006cafb0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = uVar10 * (param_3 & 0xffffffff);
        if (((uVar10 & 0xffffffff00000000) != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar8 = (uint)uVar10,
           uVar10 = (ulong)(uVar8 - uVar11), uVar8 < uVar11)) goto LAB_1006caf9c;
        param_2 = param_2 + -1;
        uVar7 = uVar10;
      } while (param_2 != 0);
      goto LAB_1006caedc;
    }
  }
  else if (param_2 != 0) {
    uVar1 = iVar6 + 0x30;
    uVar2 = 0x61;
    if (10 < (long)param_3) {
      uVar2 = iVar6 + 0x57;
    }
    uVar4 = 0x41;
    if (10 < (long)param_3) {
      uVar1 = 0x3a;
      uVar4 = iVar6 + 0x37;
    }
    if (param_1 == (byte *)0x0) {
      uVar7 = 0;
      uVar9 = 0;
    }
    else {
      uVar10 = 0;
      do {
        bVar3 = *param_1;
        if ((bVar3 < 0x30) || ((uVar1 & 0xff) <= (uint)bVar3)) {
          uVar11 = (uint)bVar3;
          if ((uVar11 < 0x41) || ((uVar4 & 0xff) <= uVar11)) {
            uVar7 = 0;
            uVar9 = 0x100000000;
            if ((uVar11 < 0x61) || ((uVar2 & 0xff) <= uVar11)) goto LAB_1006cafb0;
            iVar6 = 0xa9;
          }
          else {
            iVar6 = 0xc9;
          }
        }
        else {
          iVar6 = 0xd0;
        }
        uVar10 = uVar10 * (param_3 & 0xffffffff);
        if (((uVar10 & 0xffffffff00000000) != 0) ||
           (uVar11 = (uint)bVar3 + iVar6 & 0xff, uVar8 = (uint)uVar10,
           uVar7 = (ulong)(uVar8 + uVar11), CARRY4(uVar8,uVar11))) goto LAB_1006caf9c;
        param_1 = param_1 + 1;
        param_2 = param_2 + -1;
        uVar10 = uVar7;
      } while (param_2 != 0);
      uVar9 = 0;
    }
    goto LAB_1006cafb0;
  }
LAB_1006caf9c:
  uVar7 = 0;
  uVar9 = 0x100000000;
LAB_1006cafb0:
  return uVar9 | uVar7;
}



/* Address: 0x1006cafc4 | FUN_1006cafc4 */

void FUN_1006cafc4(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Bucket BVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar9 = param_1.offset + 1U & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar8 = BVar5.offset + 1U & uVar7;
    do {
      uVar10 = *(undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x20 + 0x18);
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(uVar10);
      into.unknown = auStack_a8;
      Swift::Hashable::hash(into);
      uVar6 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(uVar10);
      uVar6 = uVar6 & uVar7;
      if (param_1.offset < (long)uVar8) {
        if (uVar6 < uVar8) {
LAB_1006cb0e0:
          if (param_1.offset < (long)uVar6) goto LAB_1006cb050;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x20);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar9 * 0x20);
        if ((param_1.offset < (long)uVar9) || (puVar3 + 4 <= puVar2 || param_1.offset != uVar9)) {
          uVar10 = *puVar3;
          uVar12 = puVar3[3];
          uVar11 = puVar3[2];
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
          puVar2[3] = uVar12;
          puVar2[2] = uVar11;
        }
        puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x10);
        puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar9 * 0x10);
        if (((param_1.offset < (long)uVar9) || (puVar3 + 2 <= puVar2)) || (param_1.offset != uVar9))
        {
          uVar10 = *puVar3;
          puVar2[1] = puVar3[1];
          *puVar2 = uVar10;
          param_1.offset = uVar9;
        }
      }
      else if (uVar8 <= uVar6) goto LAB_1006cb0e0;
LAB_1006cb050:
      uVar9 = uVar9 + 1 & uVar7;
    } while ((*(ulong *)(_Var1.unknown + (uVar9 >> 6) * 8) >> (uVar9 & 0x3f) & 1) != 0);
  }
  uVar7 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar7) =
       *(ulong *)(_Var1.unknown + uVar7) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1006cb1a0);
  (*pcVar4)();
}



/* Address: 0x1006cb1a0 | FUN_1006cb1a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006cb1dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006cb1a0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (2 < uVar1) {
    uVar1 = 3;
  }
  return uVar1;
}



/* Address: 0x1006cb204 | FUN_1006cb204 */

undefined8 FUN_1006cb204(undefined8 param_1)

{
  (**(code **)(PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 8))
            (param_1,&DAT_100ef8db8);
  return param_1;
}



/* Address: 0x1006cb23c | FUN_1006cb23c */

uint FUN_1006cb23c(UTF8View param_1,ulong param_2,code *param_3)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index position;
  UnsafeBufferPointer<__int8> UVar4;
  uint uVar5;
  uint extraout_w8;
  long unaff_x21;
  Index after;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(param_2);
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar8 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar7 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar7 == uVar8) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      uVar6 = (ulong)position.cmsgPointer.unknown >> 0x10;
      if (uVar1 <= uVar6) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006cb440);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) != 0) {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          _Var3 = *(__uint8 *)((long)&local_70 + uVar6);
          goto joined_r0x0001006cb35c;
        }
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
        }
        _Var3 = UVar4.unknown[uVar6];
        if (uVar7 == uVar8) goto LAB_1006cb360;
LAB_1006cb30c:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_1006cb310;
LAB_1006cb380:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006cb444);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_1);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,param_1);
joined_r0x0001006cb35c:
        if (uVar7 != uVar8) goto LAB_1006cb30c;
LAB_1006cb360:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1006cb380;
LAB_1006cb310:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      local_70 = (undefined *)CONCAT71(local_70._1_7_,_Var3);
      uVar7 = 0;
      (*param_3)();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_2);
        uVar5 = extraout_w8;
        goto LAB_1006cb414;
      }
      if ((uVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(param_2);
        uVar5 = 1;
        goto LAB_1006cb414;
      }
    } while (uVar1 << 2 != (ulong)after.cmsgPointer.unknown >> 0xe);
  }
  _swift_bridgeObjectRelease(param_2);
  uVar5 = 0;
LAB_1006cb414:
  return uVar5 & 1;
}



/* Address: 0x1006cb444 | FUN_1006cb444 */

uint FUN_1006cb444(ulong param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  uint uVar3;
  undefined1 auStack_50 [16];
  undefined *local_40;
  
  puVar2 = &DAT_100fdcbb8;
  FUN_1000f7830(&DAT_100fdcbb8,&DAT_100c73d10);
  _swift_initStaticObject();
  FUN_100704c40();
  uVar1 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    _swift_bridgeObjectRelease();
    uVar3 = 0;
  }
  else {
    local_40 = puVar2;
    FUN_1006cb23c(param_1,param_2,FUN_1006cc4c4,auStack_50);
    _swift_bridgeObjectRelease(puVar2);
    uVar3 = (uint)param_1 ^ 1;
  }
  return uVar3 & 1;
}



/* Address: 0x1006cb4f0 | FUN_1006cb4f0 */

void FUN_1006cb4f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdcb98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71500;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71500,&DAT_100ef8d00);
  DAT_100fdcb98 = pTVar1;
  return;
}



/* Address: 0x1006cb530 | FUN_1006cb530 */

undefined8 FUN_1006cb530(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbf88;
  FUN_1000f7830(&DAT_100fdbf88,&DAT_100c6f990);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1006cb580 | FUN_1006cb580 */

void FUN_1006cb580(void)

{
  undefined *puVar1;
  
  if (DAT_100fdcba0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fdcba0 = puVar1;
  return;
}



/* Address: 0x1006cb5c0 | thunk_FUN_1006cb5c4 */

void thunk_FUN_1006cb5c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdcba8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71540,&DAT_100ef8d98);
  DAT_100fdcba8 = pTVar1;
  return;
}



/* Address: 0x1006cb5c4 | FUN_1006cb5c4 */

void FUN_1006cb5c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdcba8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c71540;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c71540,&DAT_100ef8d98);
  DAT_100fdcba8 = pTVar1;
  return;
}



/* Address: 0x1006cb604 | FUN_1006cb604 */

undefined8 * FUN_1006cb604(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1006cb688 | FUN_1006cb688 */

undefined1  [16] FUN_1006cb688(void)

{
  return ZEXT816(0x100ef8c78);
}



/* Address: 0x1006cb698 | FUN_1006cb698 */

undefined1  [16] FUN_1006cb698(void)

{
  return ZEXT816(0x100ef8d00);
}



/* Address: 0x1006cb6a8 | FUN_1006cb6a8 */

undefined1  [16] FUN_1006cb6a8(void)

{
  return ZEXT816(0x100ef8d98);
}



/* Address: 0x1006cb6b8 | FUN_1006cb6b8 */

undefined1  [16] FUN_1006cb6b8(void)

{
  return ZEXT816(0x100ef8db8);
}



/* Address: 0x1006cb6c8 | FUN_1006cb6c8 */

undefined1  [16] FUN_1006cb6c8(void)

{
  return ZEXT816(0x100ef8e50);
}



/* Address: 0x1006cb6d8 | thunk_FUN_1006cb6dc */

void thunk_FUN_1006cb6dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdcbb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7168c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7168c,&DAT_100ef8e50);
  DAT_100fdcbb0 = pTVar1;
  return;
}



/* Address: 0x1006cb6dc | FUN_1006cb6dc */

void FUN_1006cb6dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdcbb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7168c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7168c,&DAT_100ef8e50);
  DAT_100fdcbb0 = pTVar1;
  return;
}



/* Address: 0x1006cb71c | FUN_1006cb71c */

void FUN_1006cb71c(String *param_1,Substring param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  Index IVar5;
  Index after;
  Substring SVar6;
  Index IVar7;
  char *pcVar8;
  Index IVar9;
  Index after_00;
  Substring SVar10;
  _StringGuts _Var11;
  Index IVar12;
  Substring SVar13;
  Substring SVar14;
  ulong uVar15;
  ulong uVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  Character CVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  void *local_1f8;
  void *local_1f0;
  Range<Index> local_190;
  ulong local_188;
  ulong local_178;
  undefined *local_138;
  undefined *puStack_130;
  undefined *local_128;
  ulong uStack_120;
  undefined *local_118;
  UnsafeMutablePointer local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined *local_e0;
  ulong uStack_d8;
  undefined *local_d0;
  UnsafeMutablePointer local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined *local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  UnsafeMutablePointer local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  String SVar24;
  
  local_78 = 0x3b;
  uStack_70 = 0xe100000000000000;
  uVar16 = param_3 >> 0xe;
  local_a8 = param_2.unknown;
  uStack_a0 = param_3;
  local_98 = param_4;
  uStack_90 = param_5;
  local_88 = param_3;
  _swift_bridgeObjectRetain(param_5);
  for (IVar5.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_2.unknown;
      local_80 = IVar5.cmsgPointer.unknown, (ulong)IVar5.cmsgPointer.unknown >> 0xe < uVar16;
      IVar5 = Swift::Substring::index(IVar5,param_2)) {
    CVar20 = Swift::Substring::get_subscript(IVar5,param_2);
    _Var11.unknown = CVar20.bridgeObject;
    if ((CVar20.str == (undefined *)0x3b) && (_Var11.unknown == (undefined *)0xe100000000000000)) {
      _swift_bridgeObjectRelease(0xe100000000000000);
    }
    else {
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3b);
      _swift_bridgeObjectRelease(_Var11.unknown);
      if (!bVar2) {
        _swift_bridgeObjectRelease(param_5);
        after.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
        goto joined_r0x0001006cb898;
      }
    }
  }
  _swift_bridgeObjectRelease(param_5);
  goto LAB_1006cb820;
joined_r0x0001006cb898:
  if (uVar16 <= (ulong)after.cmsgPointer.unknown >> 0xe) goto joined_r0x0001006cba14;
  CVar20 = Swift::Substring::get_subscript(after,param_2);
  _Var11.unknown = CVar20.bridgeObject;
  if ((CVar20.str == (undefined *)0x3b) && (_Var11.unknown == (undefined *)0xe100000000000000)) {
    _swift_bridgeObjectRelease(0xe100000000000000);
    goto joined_r0x0001006cba14;
  }
  bVar2 = Swift::_stringCompareWithSmolCheck
                    ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3b);
  _swift_bridgeObjectRelease(_Var11.unknown);
  if (bVar2) goto joined_r0x0001006cba14;
  after = Swift::Substring::index(after,param_2);
  goto joined_r0x0001006cb898;
joined_r0x0001006cbe60:
  do {
    if ((ulong)after.cmsgPointer.unknown >> 0xe < uVar16) {
      CVar20 = Swift::Substring::get_subscript(after,param_2);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3b) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3b);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar2) {
          after = Swift::Substring::index(after,param_2);
          local_80 = after.cmsgPointer.unknown;
          goto joined_r0x0001006cbe60;
        }
      }
    }
    if ((ulong)after.cmsgPointer.unknown >> 0xe < local_188) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc4bc);
      (*pcVar1)();
    }
    IVar5.cmsgPointer.unknown = after.cmsgPointer.unknown;
    SVar13.unknown = param_2.unknown;
    uVar15 = param_3;
    SVar6 = Swift::Substring::get_subscript(local_190,(Substring)after.cmsgPointer.unknown);
    local_188 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (local_188 < uVar16) {
      do {
        CVar20 = Swift::Substring::get_subscript(after,param_2);
        _Var11.unknown = CVar20.bridgeObject;
        if ((CVar20.str == (undefined *)0x3b) && (_Var11.unknown == (undefined *)0xe100000000000000)
           ) {
          _swift_bridgeObjectRelease(0xe100000000000000);
        }
        else {
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3b);
          _swift_bridgeObjectRelease(_Var11.unknown);
          if (!bVar2) {
            bVar2 = true;
            goto LAB_1006cc008;
          }
        }
        after = Swift::Substring::index(after,param_2);
        local_188 = (ulong)after.cmsgPointer.unknown >> 0xe;
        local_80 = after.cmsgPointer.unknown;
      } while (local_188 < uVar16);
      bVar2 = false;
    }
    else {
      bVar2 = false;
    }
LAB_1006cc008:
    local_1f0 = SVar21.bridgeObject;
    local_1f8 = SVar22.bridgeObject;
    uVar18 = (ulong)IVar5.cmsgPointer.unknown >> 0xe;
    local_100 = 0x3d;
    uStack_f8 = 0xe100000000000000;
    local_138 = SVar6.unknown;
    puStack_130 = (undefined *)IVar5.cmsgPointer.unknown;
    local_128 = SVar13.unknown;
    uStack_120 = uVar15;
    local_118 = (undefined *)IVar5.cmsgPointer.unknown;
    _swift_bridgeObjectRetain();
    for (IVar9.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar6;
        (ulong)IVar9.cmsgPointer.unknown >> 0xe < uVar18;
        IVar9 = Swift::Substring::index(IVar9,SVar6)) {
      CVar20 = Swift::Substring::get_subscript(IVar9,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar3) {
          bVar3 = true;
          goto LAB_1006cc0d0;
        }
      }
    }
    bVar3 = false;
LAB_1006cc0d0:
    _swift_bridgeObjectRelease(0xe100000000000000);
    _swift_bridgeObjectRelease(uVar15);
    local_108 = 2;
    if (!bVar3) {
      local_110 = IVar9.cmsgPointer.unknown;
      _swift_bridgeObjectRelease(pcVar17);
      _swift_bridgeObjectRelease(local_1f0);
      _swift_bridgeObjectRelease(local_1f8);
      FUN_1000fb4c4(&local_138,&DAT_100fdcbc8,&DAT_100c716c0);
      FUN_1000fb4c4(&local_f0,&DAT_100fdcbc8,&DAT_100c716c0);
      FUN_1000fb4c4(&local_a8,&DAT_100fdcbc0,&DAT_100c716b8);
      SVar21 = (String)ZEXT816(0);
      SVar22 = (String)ZEXT816(0);
      pcVar17 = (char *)0x0;
      goto LAB_1006cb84c;
    }
    local_108 = 1;
    for (IVar7.cmsgPointer.unknown = IVar9.cmsgPointer.unknown;
        local_110 = IVar7.cmsgPointer.unknown, (ulong)IVar7.cmsgPointer.unknown >> 0xe < uVar18;
        IVar7 = Swift::Substring::index(IVar7,SVar6)) {
      CVar20 = Swift::Substring::get_subscript(IVar7,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
        break;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
      _swift_bridgeObjectRelease(_Var11.unknown);
      if (bVar3) break;
    }
    if ((ulong)IVar7.cmsgPointer.unknown >> 0xe < (ulong)IVar9.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc4c0);
      (*pcVar1)();
    }
    IVar12.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
    SVar13.unknown = (undefined *)IVar5.cmsgPointer.unknown;
    IVar9.cmsgPointer.unknown =
         (UnsafeMutablePointer)
         Swift::Substring::get_subscript
                   ((Range<Index>)IVar9.cmsgPointer.unknown,(Substring)IVar7.cmsgPointer.unknown);
    while ((ulong)IVar7.cmsgPointer.unknown >> 0xe < uVar18) {
      CVar20 = Swift::Substring::get_subscript(IVar7,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar3) {
          bVar3 = true;
          goto LAB_1006cc200;
        }
      }
      IVar7 = Swift::Substring::index(IVar7,SVar6);
      local_110 = IVar7.cmsgPointer.unknown;
    }
    bVar3 = false;
LAB_1006cc200:
    uVar15 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
    local_178 = (ulong)IVar9.cmsgPointer.unknown >> 0xe;
    _swift_bridgeObjectRetain(SVar13.unknown);
    after_00.cmsgPointer.unknown = IVar9.cmsgPointer.unknown;
    if (local_178 != uVar15) {
      CVar20 = Swift::Substring::get_subscript(IVar9,(Substring)IVar9.cmsgPointer.unknown);
      bVar4 = Swift::Character::get_isWhitespace(CVar20);
      _swift_bridgeObjectRelease(CVar20.bridgeObject);
      if (bVar4) {
        do {
          after_00 = Swift::Substring::index(after_00,(Substring)IVar9.cmsgPointer.unknown);
          local_178 = (ulong)after_00.cmsgPointer.unknown >> 0xe;
          if (local_178 == uVar15) goto LAB_1006cc388;
          CVar20 = Swift::Substring::get_subscript(after_00,(Substring)IVar9.cmsgPointer.unknown);
          bVar4 = Swift::Character::get_isWhitespace(CVar20);
          _swift_bridgeObjectRelease(CVar20.bridgeObject);
        } while (bVar4);
      }
      if (uVar15 < local_178) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc4b8);
        (*pcVar1)();
      }
    }
LAB_1006cc388:
    SVar6.unknown = (undefined *)IVar12.cmsgPointer.unknown;
    SVar10 = Swift::Substring::get_subscript
                       ((Range<Index>)after_00.cmsgPointer.unknown,
                        (Substring)IVar12.cmsgPointer.unknown);
    _swift_bridgeObjectRelease_n(SVar13.unknown,2);
    pcVar8 = pcVar17;
    if (bVar3) {
      local_108 = 0;
      SVar13.unknown = (undefined *)IVar5.cmsgPointer.unknown;
      SVar14.unknown = (undefined *)IVar5.cmsgPointer.unknown;
      SVar24.str = Swift::Substring::get_subscript
                             ((Range<Index>)IVar7.cmsgPointer.unknown,
                              (Substring)IVar5.cmsgPointer.unknown);
      SVar24.bridgeObject = SVar13.unknown;
      local_110 = IVar5.cmsgPointer.unknown;
      SVar23 = Swift::String::__fromSubstring(SVar24);
      _swift_bridgeObjectRelease(SVar14.unknown);
      _swift_isUniquelyReferenced_nonNull_native(pcVar17);
    }
    else {
      _swift_isUniquelyReferenced_nonNull_native(pcVar17);
      SVar23 = (String)(ZEXT816(0xe000000000000000) << 0x40);
    }
    FUN_1006b9db4(SVar23.str,SVar23.bridgeObject,SVar10.unknown,IVar12.cmsgPointer.unknown,
                  IVar9.cmsgPointer.unknown,SVar6.unknown,pcVar8);
    _swift_bridgeObjectRelease(SVar6.unknown);
    FUN_1000fb4c4(&local_138,&DAT_100fdcbc8,&DAT_100c716c0);
    local_190.unknown = (undefined *)after.cmsgPointer.unknown;
  } while (bVar2);
LAB_1006cc3fc:
  FUN_1000fb4c4(&local_f0,&DAT_100fdcbc8,&DAT_100c716c0);
  FUN_1000fb4c4(&local_a8,&DAT_100fdcbc0,&DAT_100c716b8);
  goto LAB_1006cb84c;
joined_r0x0001006cba14:
  if ((ulong)after.cmsgPointer.unknown >> 0xe < (ulong)IVar5.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cba1c);
    (*pcVar1)();
  }
  IVar9.cmsgPointer.unknown = after.cmsgPointer.unknown;
  SVar13.unknown = param_2.unknown;
  uVar15 = param_3;
  SVar6 = Swift::Substring::get_subscript
                    ((Range<Index>)IVar5.cmsgPointer.unknown,(Substring)after.cmsgPointer.unknown);
  local_188 = (ulong)after.cmsgPointer.unknown >> 0xe;
  if (local_188 < uVar16) {
    do {
      CVar20 = Swift::Substring::get_subscript(after,param_2);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3b) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3b);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar2) {
          bVar2 = true;
          goto LAB_1006cba2c;
        }
      }
      after = Swift::Substring::index(after,param_2);
      local_188 = (ulong)after.cmsgPointer.unknown >> 0xe;
    } while (local_188 < uVar16);
    bVar2 = false;
  }
  else {
    bVar2 = false;
  }
LAB_1006cba2c:
  local_b8 = 0x3d;
  uStack_b0 = 0xe100000000000000;
  uVar18 = (ulong)IVar9.cmsgPointer.unknown >> 0xe;
  uVar19 = (ulong)SVar6.unknown >> 0xe;
  local_f0 = SVar6.unknown;
  puStack_e8 = (undefined *)IVar9.cmsgPointer.unknown;
  local_e0 = SVar13.unknown;
  uStack_d8 = uVar15;
  local_d0 = (undefined *)IVar9.cmsgPointer.unknown;
  local_80 = after.cmsgPointer.unknown;
  _swift_bridgeObjectRetain(uVar15);
  IVar5.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)SVar6;
  if (uVar19 < uVar18) {
    do {
      CVar20 = Swift::Substring::get_subscript(IVar5,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar3) {
          bVar3 = true;
          goto LAB_1006cbb28;
        }
      }
      IVar5 = Swift::Substring::index(IVar5,SVar6);
      uVar19 = (ulong)IVar5.cmsgPointer.unknown >> 0xe;
    } while (uVar19 < uVar18);
    bVar3 = false;
  }
  else {
    bVar3 = false;
  }
LAB_1006cbb28:
  _swift_bridgeObjectRelease(0xe100000000000000);
  _swift_bridgeObjectRelease(uVar15);
  local_c0 = 2;
  local_c8 = IVar5.cmsgPointer.unknown;
  if (bVar3) {
    local_c0 = 1;
    for (IVar7.cmsgPointer.unknown = IVar5.cmsgPointer.unknown;
        (ulong)IVar7.cmsgPointer.unknown >> 0xe < uVar18;
        IVar7 = Swift::Substring::index(IVar7,SVar6)) {
      CVar20 = Swift::Substring::get_subscript(IVar7,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
        break;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
      _swift_bridgeObjectRelease(_Var11.unknown);
      if (bVar3) break;
    }
    if ((ulong)IVar7.cmsgPointer.unknown >> 0xe < uVar19) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc4c4);
      (*pcVar1)();
    }
    IVar12.cmsgPointer.unknown = IVar7.cmsgPointer.unknown;
    SVar13.unknown = (undefined *)IVar9.cmsgPointer.unknown;
    SVar22.str = Swift::Substring::get_subscript
                           ((Range<Index>)IVar5.cmsgPointer.unknown,
                            (Substring)IVar7.cmsgPointer.unknown);
    for (; (ulong)IVar7.cmsgPointer.unknown >> 0xe < uVar18;
        IVar7 = Swift::Substring::index(IVar7,SVar6)) {
      CVar20 = Swift::Substring::get_subscript(IVar7,SVar6);
      _Var11.unknown = CVar20.bridgeObject;
      if ((CVar20.str == (undefined *)0x3d) && (_Var11.unknown == (undefined *)0xe100000000000000))
      {
        _swift_bridgeObjectRelease(0xe100000000000000);
      }
      else {
        bVar3 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar20.str,_Var11,(_StringComparisonResult)0x3d);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar3) {
          local_c0 = 0;
          SVar6.unknown = (undefined *)IVar9.cmsgPointer.unknown;
          SVar10.unknown = (undefined *)IVar9.cmsgPointer.unknown;
          SVar23.str = Swift::Substring::get_subscript
                                 ((Range<Index>)IVar7.cmsgPointer.unknown,
                                  (Substring)IVar9.cmsgPointer.unknown);
          SVar22.bridgeObject = (void *)IVar12.cmsgPointer.unknown;
          local_c8 = IVar9.cmsgPointer.unknown;
          SVar21 = Swift::String::__fromSubstring(SVar22);
          _swift_bridgeObjectRelease(SVar13.unknown);
          SVar23.bridgeObject = SVar6.unknown;
          SVar22 = Swift::String::__fromSubstring(SVar23);
          _swift_bridgeObjectRelease(SVar10.unknown);
          pcVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_1006c2ab8();
          local_190.unknown = (undefined *)after.cmsgPointer.unknown;
          if (!bVar2) goto LAB_1006cc3fc;
          goto joined_r0x0001006cbe60;
        }
      }
    }
    local_c8 = IVar7.cmsgPointer.unknown;
    _swift_bridgeObjectRelease(SVar13.unknown);
  }
  FUN_1000fb4c4(&local_f0,&DAT_100fdcbc8,&DAT_100c716c0);
LAB_1006cb820:
  FUN_1000fb4c4(&local_a8,&DAT_100fdcbc0,&DAT_100c716b8);
  SVar21 = (String)ZEXT816(0);
  SVar22 = (String)ZEXT816(0);
  pcVar17 = (char *)0x0;
LAB_1006cb84c:
  *param_1 = SVar21;
  param_1[1] = SVar22;
  param_1[2].str = pcVar17;
  return;
}



/* Address: 0x1006cc4c4 | FUN_1006cc4c4 */

uint FUN_1006cc4c4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1006c7c2c(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1006cc4e0 | FUN_1006cc4e0 */

void FUN_1006cc4e0(void)

{
  undefined *puVar1;
  
  if (DAT_100fdcc10 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fdcc10 = puVar1;
  return;
}



/* Address: 0x1006cc520 | thunk_FUN_1006c9d88 */

void thunk_FUN_1006c9d88(void)

{
  FUN_1006c9ec4();
  return;
}



/* Address: 0x1006cc524 | thunk_FUN_1006c9fd0 */

void thunk_FUN_1006c9fd0(void)

{
  FUN_1006c9ec4();
  return;
}



/* Address: 0x1006cc528 | FUN_1006cc528 */

undefined * FUN_1006cc528(Range<Index> param_1,ulong param_2)

{
  code *pcVar1;
  bool bVar2;
  Index after;
  Substring SVar3;
  _StringGuts _Var4;
  ulong uVar5;
  Character CVar6;
  
  uVar5 = (ulong)param_1.unknown >> 0xe;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_1.unknown;
  while( true ) {
    if (uVar5 == param_2 >> 0xe) {
      return (undefined *)0x0;
    }
    CVar6 = Swift::Substring::get_subscript(after,(Substring)param_1.unknown);
    _Var4.unknown = CVar6.bridgeObject;
    if ((CVar6.str == (undefined *)0x3d) && (_Var4.unknown == (undefined *)0xe100000000000000))
    break;
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)CVar6.str,_Var4,(_StringComparisonResult)0x3d);
    _swift_bridgeObjectRelease(_Var4.unknown);
    if (bVar2) goto LAB_1006cc604;
    after = Swift::Substring::index(after,(Substring)param_1.unknown);
    uVar5 = (ulong)after.cmsgPointer.unknown >> 0xe;
  }
  _swift_bridgeObjectRelease(0xe100000000000000);
LAB_1006cc604:
  if ((ulong)param_1.unknown >> 0xe <= uVar5) {
    SVar3 = Swift::Substring::get_subscript(param_1,(Substring)after.cmsgPointer.unknown);
    return SVar3.unknown;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006cc648);
  (*pcVar1)();
}



/* Address: 0x1006cc648 | FUN_1006cc648 */

undefined8 FUN_1006cc648(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1006cc780();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1006cc678 | FUN_1006cc678 */

void FUN_1006cc678(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar8 = *(long *)(param_4 + 0x10);
  uVar9 = 0;
  uVar10 = 0;
  if (lVar8 == 0) {
    local_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
  }
  else {
    plVar7 = (long *)(param_4 + 0x38);
    do {
      uVar1 = plVar7[-3];
      lVar3 = plVar7[-2];
      lVar2 = plVar7[-1];
      lVar4 = *plVar7;
      _swift_bridgeObjectRetain(lVar4);
      uVar5 = uVar1;
      lVar6 = lVar4;
      FUN_1006cc528(uVar1,lVar3,lVar2);
      if (lVar6 != 0) {
        FUN_1006ccb40();
        _swift_bridgeObjectRelease(lVar6);
        if ((uVar5 & 1) != 0) {
          FUN_1006cb71c(&local_90,uVar1,lVar3,lVar2,lVar4);
          uVar9 = local_90;
          uVar10 = uStack_88;
          goto LAB_1006cc758;
        }
      }
      plVar7 = plVar7 + 4;
      _swift_bridgeObjectRelease(lVar4);
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
    local_70 = 0;
    uStack_80 = 0;
    uStack_78 = 0;
    uVar9 = 0;
    uVar10 = 0;
  }
LAB_1006cc758:
  param_1[1] = uVar10;
  *param_1 = uVar9;
  param_1[3] = uStack_78;
  param_1[2] = uStack_80;
  param_1[4] = local_70;
  return;
}



/* Address: 0x1006cc780 | FUN_1006cc780 */

undefined * FUN_1006cc780(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  void *pvVar7;
  code *pcVar8;
  bool bVar9;
  Index IVar10;
  Index IVar11;
  Index after;
  Substring SVar12;
  Index IVar14;
  void *pvVar15;
  Substring SVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  Character CVar22;
  Character CVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  char *local_a0;
  void *pvStack_98;
  ulong local_90;
  undefined *puStack_88;
  char *local_80;
  void *pvStack_78;
  char *local_70;
  void *pvStack_68;
  _StringGuts _Var13;
  
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar17 = *(long *)(param_1 + 0x10);
  if (lVar17 != 0) {
    lVar18 = 0;
    do {
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar1 = (undefined8 *)(param_1 + 0x20 + lVar18 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(uVar3);
      FUN_1006bf860(0,0,0);
      _swift_bridgeObjectRetain(uVar3);
      thunk_FUN_1006f78f0(&local_a0,uVar2,uVar3,0x3b,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar3);
      pvVar7 = pvStack_98;
      pcVar6 = local_a0;
      uVar20 = local_90 >> 0xe;
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puStack_88;
      local_70 = local_80;
      pvStack_68 = pvStack_78;
      while (uVar19 = (ulong)after.cmsgPointer.unknown >> 0xe,
            IVar10.cmsgPointer.unknown = after.cmsgPointer.unknown, uVar19 < uVar20) {
        for (; uVar21 = (ulong)IVar10.cmsgPointer.unknown >> 0xe, uVar21 < uVar20;
            IVar10 = Swift::String::index(IVar10,SVar25)) {
          SVar24.bridgeObject = pvVar7;
          SVar24.str = pcVar6;
          CVar22 = Swift::String::get_subscript(IVar10,SVar24);
          CVar23.bridgeObject = pvStack_68;
          CVar23.str = local_70;
          _Var13.unknown = CVar22.bridgeObject;
          if (CVar22 == CVar23) {
            _swift_bridgeObjectRelease(_Var13.unknown);
            if (uVar19 <= uVar21) goto LAB_1006cc90c;
            goto LAB_1006ccb3c;
          }
          bVar9 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)CVar22.str,_Var13,
                             (_StringComparisonResult)(__int8)local_70);
          _swift_bridgeObjectRelease(_Var13.unknown);
          if (bVar9) break;
          SVar25.bridgeObject = pvVar7;
          SVar25.str = pcVar6;
        }
        if (uVar21 < uVar19) {
LAB_1006ccb3c:
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1006ccb40);
          (*pcVar8)();
        }
LAB_1006cc90c:
        SVar26.bridgeObject = pcVar6;
        SVar26.str = (char *)IVar10.cmsgPointer.unknown;
        IVar14.cmsgPointer.unknown = IVar10.cmsgPointer.unknown;
        pvVar15 = pvVar7;
        IVar11.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             Swift::String::get_subscript((Range<Index>)after.cmsgPointer.unknown,SVar26);
        for (after.cmsgPointer.unknown = IVar10.cmsgPointer.unknown;
            (ulong)after.cmsgPointer.unknown >> 0xe < uVar20;
            after = Swift::String::index(after,SVar27)) {
          SVar28.bridgeObject = pvVar7;
          SVar28.str = pcVar6;
          CVar23 = Swift::String::get_subscript(after,SVar28);
          CVar22.bridgeObject = pvStack_68;
          CVar22.str = local_70;
          _Var13.unknown = CVar23.bridgeObject;
          if (CVar23 == CVar22) {
            _swift_bridgeObjectRelease(_Var13.unknown);
          }
          else {
            bVar9 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar23.str,_Var13,
                               (_StringComparisonResult)(__int8)local_70);
            _swift_bridgeObjectRelease(_Var13.unknown);
            if (!bVar9) break;
          }
          SVar27.bridgeObject = pvVar7;
          SVar27.str = pcVar6;
        }
        uVar19 = (ulong)IVar14.cmsgPointer.unknown >> 0xe;
        uVar21 = (ulong)IVar11.cmsgPointer.unknown >> 0xe;
        _swift_bridgeObjectRetain(pvVar15);
        IVar10.cmsgPointer.unknown = IVar11.cmsgPointer.unknown;
        if (uVar21 != uVar19) {
          CVar23 = Swift::Substring::get_subscript(IVar11,(Substring)IVar11.cmsgPointer.unknown);
          bVar9 = Swift::Character::get_isWhitespace(CVar23);
          _swift_bridgeObjectRelease(CVar23.bridgeObject);
          if (bVar9) {
            do {
              IVar10 = Swift::Substring::index(IVar10,(Substring)IVar11.cmsgPointer.unknown);
              uVar21 = (ulong)IVar10.cmsgPointer.unknown >> 0xe;
              if (uVar21 == uVar19) goto LAB_1006cca7c;
              CVar23 = Swift::Substring::get_subscript(IVar10,(Substring)IVar11.cmsgPointer.unknown)
              ;
              bVar9 = Swift::Character::get_isWhitespace(CVar23);
              _swift_bridgeObjectRelease(CVar23.bridgeObject);
            } while (bVar9);
          }
          if (uVar19 < uVar21) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x1006ccb3c);
            (*pcVar8)();
          }
        }
LAB_1006cca7c:
        SVar16.unknown = (undefined *)IVar14.cmsgPointer.unknown;
        SVar12 = Swift::Substring::get_subscript
                           ((Range<Index>)IVar10.cmsgPointer.unknown,
                            (Substring)IVar14.cmsgPointer.unknown);
        _swift_bridgeObjectRelease_n(pvVar15,2);
        uVar19 = *(ulong *)(puVar5 + 0x10);
        if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar19) {
          FUN_1006bf860(1 < *(ulong *)(puVar5 + 0x18),uVar19 + 1,1);
        }
        *(ulong *)(puVar5 + 0x10) = uVar19 + 1;
        *(undefined **)(puVar5 + uVar19 * 0x20 + 0x20) = SVar12.unknown;
        *(UnsafeMutablePointer *)(puVar5 + uVar19 * 0x20 + 0x28) = IVar14.cmsgPointer.unknown;
        *(UnsafeMutablePointer *)(puVar5 + uVar19 * 0x20 + 0x30) = IVar11.cmsgPointer.unknown;
        *(undefined **)(puVar5 + uVar19 * 0x20 + 0x38) = SVar16.unknown;
      }
      lVar18 = lVar18 + 1;
      _swift_bridgeObjectRelease(pvVar7);
      FUN_1006b790c(&local_70);
      _swift_bridgeObjectRelease(uVar3);
      FUN_1006a1b6c(puVar5);
    } while (lVar18 != lVar17);
  }
  return puVar4;
}



/* Address: 0x1006ccb40 | FUN_1006ccb40 */

bool FUN_1006ccb40(ulong param_1,ulong param_2,_StringGuts param_3,Range<__int64> param_4,
                  undefined *param_5,undefined *param_6)

{
  undefined *puVar1;
  bool bVar2;
  
  puVar1 = (undefined *)((ulong)param_5 & 0xffffffffffff);
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    puVar1 = (undefined *)((ulong)param_6 >> 0x38 & 0xf);
  }
  if ((((param_3.unknown == param_5) && (param_4.unknown == param_6)) &&
      ((undefined *)(param_1 >> 0x10) == (undefined *)0x0)) &&
     ((undefined *)(param_2 >> 0x10) == puVar1)) {
    return true;
  }
  bVar2 = Swift::_stringCompareInternal
                    (param_3,param_4,(undefined *)(param_1 >> 0x10),(undefined *)(param_2 >> 0x10),
                     (_StringComparisonResult)(__int8)param_5);
  return bVar2;
}



/* Address: 0x1006ccbb4 | FUN_1006ccbb4 */

undefined1  [16] FUN_1006ccbb4(void)

{
  return ZEXT816(0x100ef8f00);
}



/* Address: 0x1006ccbc4 | FUN_1006ccbc4 */

String FUN_1006ccbc4(undefined8 param_1,long param_2,long param_3)

{
  long extraout_x8;
  long lVar1;
  String SVar2;
  String SVar3;
  
  lVar1 = *(long *)(param_2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar1 + 0x40));
  (**(code **)(lVar1 + 0x10))
            (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_1,param_2);
  SVar2 = Swift::String::_init
                    (&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),param_2,
                     *(undefined8 *)(param_3 + 0x28),
                     *(undefined8 *)(*(long *)(*(long *)(param_3 + 8) + 8) + 8));
  SVar3 = Swift::String::lowercased(SVar2);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  (**(code **)(lVar1 + 8))(param_1,param_2);
  return SVar3;
}



/* Address: 0x1006ccc88 | FUN_1006ccc88 */

String FUN_1006ccc88(char *param_1,void *param_2)

{
  String SVar1;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  SVar1 = Swift::String::lowercased(SVar1);
  _swift_bridgeObjectRelease(param_2);
  return SVar1;
}



/* Address: 0x1006cccc8 | FUN_1006cccc8 */

void FUN_1006cccc8(String *param_1,String *param_2)

{
  void *pvVar1;
  String SVar2;
  
  pvVar1 = param_2->bridgeObject;
  SVar2 = Swift::String::lowercased(*param_2);
  _swift_bridgeObjectRelease(pvVar1);
  *param_1 = SVar2;
  return;
}



/* Address: 0x1006ccd10 | thunk_FUN_1006cccc8 */

void thunk_FUN_1006cccc8(void)

{
  FUN_1006cccc8();
  return;
}



/* Address: 0x1006ccd14 | FUN_1006ccd14 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccd14(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x636161;
  _DAT_101057c60 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006ccd40 | FUN_1006ccd40 */

undefined8 * FUN_1006ccd40(void)

{
  if (DAT_100fdcc18 != -1) {
    _swift_once(&DAT_100fdcc18,FUN_1006ccd14);
  }
  return &DAT_101057c60;
}



/* Address: 0x1006ccd80 | FUN_1006ccd80 */

void FUN_1006ccd80(void)

{
  FUN_1006cf61c(&DAT_100fdcc18,&DAT_101057c60,&DAT_101057c68,FUN_1006ccd14);
  return;
}



/* Address: 0x1006ccda0 | FUN_1006ccda0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccda0(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x776261;
  _DAT_101057c70 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006ccdcc | FUN_1006ccdcc */

undefined8 * FUN_1006ccdcc(void)

{
  if (DAT_100fdcc20 != -1) {
    _swift_once(&DAT_100fdcc20,FUN_1006ccda0);
  }
  return &DAT_101057c70;
}



/* Address: 0x1006cce0c | FUN_1006cce0c */

void FUN_1006cce0c(void)

{
  FUN_1006cf61c(&DAT_100fdcc20,&DAT_101057c70,&DAT_101057c78,FUN_1006ccda0);
  return;
}



/* Address: 0x1006cce2c | FUN_1006cce2c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cce2c(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x637261;
  _DAT_101057c80 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cce58 | FUN_1006cce58 */

undefined8 * FUN_1006cce58(void)

{
  if (DAT_100fdcc28 != -1) {
    _swift_once(&DAT_100fdcc28,FUN_1006cce2c);
  }
  return &DAT_101057c80;
}



/* Address: 0x1006cce98 | FUN_1006cce98 */

void FUN_1006cce98(void)

{
  FUN_1006cf61c(&DAT_100fdcc28,&DAT_101057c80,&DAT_101057c88,FUN_1006cce2c);
  return;
}



/* Address: 0x1006cceb8 | FUN_1006cceb8 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cceb8(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x777a61;
  _DAT_101057c90 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006ccee4 | FUN_1006ccee4 */

undefined8 * FUN_1006ccee4(void)

{
  if (DAT_100fdcc30 != -1) {
    _swift_once(&DAT_100fdcc30,FUN_1006cceb8);
  }
  return &DAT_101057c90;
}



/* Address: 0x1006ccf24 | FUN_1006ccf24 */

void FUN_1006ccf24(void)

{
  FUN_1006cf61c(&DAT_100fdcc30,&DAT_101057c90,&DAT_101057c98,FUN_1006cceb8);
  return;
}



/* Address: 0x1006ccf44 | FUN_1006ccf44 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccf44(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x6e6962;
  _DAT_101057ca0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006ccf70 | FUN_1006ccf70 */

undefined8 * FUN_1006ccf70(void)

{
  if (DAT_100fdcc38 != -1) {
    _swift_once(&DAT_100fdcc38,FUN_1006ccf44);
  }
  return &DAT_101057ca0;
}



/* Address: 0x1006ccfb0 | FUN_1006ccfb0 */

void FUN_1006ccfb0(void)

{
  FUN_1006cf61c(&DAT_100fdcc38,&DAT_101057ca0,&DAT_101057ca8,FUN_1006ccf44);
  return;
}



/* Address: 0x1006ccfd0 | FUN_1006ccfd0 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006ccfd0(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x706d62;
  _DAT_101057cb0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006ccffc | FUN_1006ccffc */

undefined8 * FUN_1006ccffc(void)

{
  if (DAT_100fdcc40 != -1) {
    _swift_once(&DAT_100fdcc40,FUN_1006ccfd0);
  }
  return &DAT_101057cb0;
}



/* Address: 0x1006cd03c | FUN_1006cd03c */

void FUN_1006cd03c(void)

{
  FUN_1006cf61c(&DAT_100fdcc40,&DAT_101057cb0,&DAT_101057cb8,FUN_1006ccfd0);
  return;
}



/* Address: 0x1006cd05c | FUN_1006cd05c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd05c(void)

{
  String SVar1;
  
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x7a62;
  _DAT_101057cc0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cd084 | FUN_1006cd084 */

undefined8 * FUN_1006cd084(void)

{
  if (DAT_100fdcc48 != -1) {
    _swift_once(&DAT_100fdcc48,FUN_1006cd05c);
  }
  return &DAT_101057cc0;
}



/* Address: 0x1006cd0c4 | FUN_1006cd0c4 */

void FUN_1006cd0c4(void)

{
  FUN_1006cf61c(&DAT_100fdcc48,&DAT_101057cc0,&DAT_101057cc8,FUN_1006cd05c);
  return;
}



/* Address: 0x1006cd0e4 | FUN_1006cd0e4 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd0e4(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x327a62;
  _DAT_101057cd0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cd110 | FUN_1006cd110 */

undefined8 * FUN_1006cd110(void)

{
  if (DAT_100fdcc50 != -1) {
    _swift_once(&DAT_100fdcc50,FUN_1006cd0e4);
  }
  return &DAT_101057cd0;
}



/* Address: 0x1006cd150 | FUN_1006cd150 */

void FUN_1006cd150(void)

{
  FUN_1006cf61c(&DAT_100fdcc50,&DAT_101057cd0,&DAT_101057cd8,FUN_1006cd0e4);
  return;
}



/* Address: 0x1006cd170 | FUN_1006cd170 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd170(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x687363;
  _DAT_101057ce0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cd19c | FUN_1006cd19c */

undefined8 * FUN_1006cd19c(void)

{
  if (DAT_100fdcc58 != -1) {
    _swift_once(&DAT_100fdcc58,FUN_1006cd170);
  }
  return &DAT_101057ce0;
}



/* Address: 0x1006cd1dc | FUN_1006cd1dc */

void FUN_1006cd1dc(void)

{
  FUN_1006cf61c(&DAT_100fdcc58,&DAT_101057ce0,&DAT_101057ce8,FUN_1006cd170);
  return;
}



/* Address: 0x1006cd1fc | FUN_1006cd1fc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1006cd1fc(void)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xe300000000000000;
  SVar1.str = (char *)0x737363;
  _DAT_101057cf0 = Swift::String::lowercased(SVar1);
  return;
}



/* Address: 0x1006cd228 | FUN_1006cd228 */

undefined8 * FUN_1006cd228(void)

{
  if (DAT_100fdcc60 != -1) {
    _swift_once(&DAT_100fdcc60,FUN_1006cd1fc);
  }
  return &DAT_101057cf0;
}



/* Address: 0x1006cd268 | FUN_1006cd268 */

void FUN_1006cd268(void)

{
  FUN_1006cf61c(&DAT_100fdcc60,&DAT_101057cf0,&DAT_101057cf8,FUN_1006cd1fc);
  return;
}


