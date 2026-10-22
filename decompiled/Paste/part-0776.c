/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10088928c | FUN_10088928c */

void FUN_10088928c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe99a8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c80568;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c80568,&DAT_100f09890);
  DAT_100fe99a8 = pTVar1;
  return;
}



/* Address: 0x1008892cc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008892d0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008892d4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008892d8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1008892dc | FUN_1008892dc */

undefined1 * FUN_1008892dc(_StringObject param_1,ulong param_2)

{
  byte bVar1;
  undefined **ppuVar2;
  UnsafeBufferPointer<__int8> UVar3;
  ulong uVar4;
  undefined *local_20;
  ulong uStack_18;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    FUN_1008893a4(param_1.unknown);
    return param_1.unknown;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      UVar3 = Swift::_StringObject::get_sharedUTF8(param_1);
      if (UVar3.unknown == (undefined *)0x0) goto LAB_100889390;
    }
    else {
      UVar3.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
      param_2 = (ulong)param_1.unknown & 0xffffffffffff;
    }
    for (; param_2 != 0; param_2 = param_2 - 1) {
      bVar1 = *UVar3.unknown;
      if (bVar1 != 9) {
        if (bVar1 < 0x20) {
          return (undefined1 *)0x0;
        }
        if (bVar1 == 0x7f) {
          return (undefined1 *)0x0;
        }
      }
      UVar3.unknown = UVar3.unknown + 1;
    }
  }
  else {
    local_20 = param_1.unknown;
    uStack_18 = param_2 & 0xffffffffffffff;
    ppuVar2 = &local_20;
    for (uVar4 = param_2 >> 0x38 & 0xf; uVar4 != 0; uVar4 = uVar4 - 1) {
      bVar1 = *(byte *)ppuVar2;
      if (bVar1 != 9) {
        if (bVar1 < 0x20) {
          return (undefined1 *)0x0;
        }
        if (bVar1 == 0x7f) {
          return (undefined1 *)0x0;
        }
      }
      ppuVar2 = (undefined **)((long)ppuVar2 + 1);
    }
  }
LAB_100889390:
  return &DAT_00000001;
}



/* Address: 0x1008893a4 | FUN_1008893a4 */

uint FUN_1008893a4(uint param_1)

{
  FUN_100889774();
  return (param_1 ^ 0xffffffff) & 1;
}



/* Address: 0x1008893d4 | FUN_1008893d4 */

/* WARNING: Removing unreachable block (ram,0x0001008894c8) */

undefined1 * FUN_1008893d4(_StringObject param_1,ulong param_2)

{
  byte bVar1;
  UnsafeBufferPointer<__int8> UVar2;
  uint uVar3;
  byte local_31;
  undefined *local_30;
  ulong uStack_28;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    FUN_10088954c(param_1.unknown);
    return param_1.unknown;
  }
  if ((param_2 >> 0x3d & 1) != 0) {
    uStack_28 = param_2 & 0xffffffffffffff;
    local_30 = param_1.unknown;
    FUN_1008894d4(&local_31,&local_30,param_2 >> 0x38 & 0xf);
    return (undefined1 *)(ulong)local_31;
  }
  if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
    UVar2 = Swift::_StringObject::get_sharedUTF8(param_1);
    if (UVar2.unknown == (undefined *)0x0) goto LAB_1008894b4;
  }
  else {
    UVar2.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
    param_2 = (ulong)param_1.unknown & 0xffffffffffff;
  }
  for (; param_2 != 0; param_2 = param_2 - 1) {
    bVar1 = *UVar2.unknown;
    if ((((9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
         (uVar3 = (uint)bVar1,
         0x3f < uVar3 - 0x21 || (1L << ((ulong)(uVar3 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0))
        && (uVar3 != 0x7e)) && (uVar3 != 0x7c)) {
      return (undefined1 *)0x0;
    }
    UVar2.unknown = UVar2.unknown + 1;
  }
LAB_1008894b4:
  return &DAT_00000001;
}



/* Address: 0x1008894d4 | FUN_1008894d4 */

void FUN_1008894d4(undefined1 *param_1,byte *param_2,long param_3)

{
  byte bVar1;
  uint uVar2;
  
  if (param_2 != (byte *)0x0) {
    for (; param_3 != 0; param_3 = param_3 + -1) {
      bVar1 = *param_2;
      if ((((9 < bVar1 - 0x30 && 0x19 < (bVar1 & 0xffffffdf) - 0x41) &&
           (uVar2 = (uint)bVar1,
           0x3f < uVar2 - 0x21 || (1L << ((ulong)(uVar2 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)
           ) && (uVar2 != 0x7e)) && (uVar2 != 0x7c)) {
        *param_1 = 0;
        return;
      }
      param_2 = param_2 + 1;
    }
  }
  *param_1 = 1;
  return;
}



/* Address: 0x10088954c | FUN_10088954c */

uint FUN_10088954c(uint param_1)

{
  FUN_10088957c();
  return (param_1 ^ 0xffffffff) & 1;
}



/* Address: 0x10088957c | FUN_10088957c */

undefined8 FUN_10088957c(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100889770);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
        }
        else {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        uVar5 = (uint)*(byte *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10))
        ;
        if (uVar6 != uVar7) goto LAB_100889664;
LAB_1008896bc:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1008896cc;
LAB_100889668:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        uVar5 = (uint)_Var3;
        if (uVar6 == uVar7) goto LAB_1008896bc;
LAB_100889664:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100889668;
LAB_1008896cc:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100889774);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      if ((((9 < (uVar5 - 0x30 & 0xff)) && (0x19 < (uVar5 - 0x61 & 0xff))) &&
          (0x19 < (uVar5 - 0x41 & 0xff))) &&
         (((0x3f < uVar5 - 0x21 ||
           ((1L << ((ulong)(uVar5 - 0x21) & 0x3f) & 0xe00000000000367dU) == 0)) &&
          ((uVar5 != 0x7e && (uVar5 != 0x7c)))))) {
        return 1;
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x100889774 | FUN_100889774 */

undefined8 FUN_100889774(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar5 = 1;
    }
    uVar7 = 4L << uVar5;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      uVar6 = (ulong)after.cmsgPointer.unknown & 0xc;
      position.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar6 == uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100889910);
        (*pcVar2)();
      }
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
        }
        else {
          local_70 = param_1.unknown;
          uStack_68 = param_2 & 0xffffffffffffff;
          UVar4.unknown = (undefined *)&local_70;
        }
        _Var3 = *(__uint8 *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
        if (uVar6 != uVar7) goto LAB_100889840;
LAB_100889898:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) != 0) goto LAB_1008898a8;
LAB_100889844:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
        if (uVar6 == uVar7) goto LAB_100889898;
LAB_100889840:
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_100889844;
LAB_1008898a8:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100889914);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
      }
      if (_Var3 != 9) {
        if (_Var3 < 0x20) {
          return 1;
        }
        if (_Var3 == 0x7f) {
          return 1;
        }
      }
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  return 0;
}



/* Address: 0x100889914 | FUN_100889914 */

void FUN_100889914(void)

{
  FUN_100889924();
  return;
}



/* Address: 0x10088991c | FUN_10088991c */

void FUN_10088991c(void)

{
  FUN_100889924();
  return;
}



/* Address: 0x100889924 | FUN_100889924 */

void FUN_100889924(undefined1 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 *puVar3;
  undefined1 auStack_78 [24];
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = (undefined8 *)(unaff_x20 + 0x10);
  *puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x40) = 2;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined2 *)(unaff_x20 + 0x73) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x57) = 0;
  _swift_beginAccess(puVar3,auStack_78,0x21,0);
  *puVar3 = puVar1;
  uVar2 = 0;
  thunk_FUN_100880a88(0,0x10,0,puVar1);
  *puVar3 = uVar2;
  _swift_endAccess(auStack_78);
  *(char *)(unaff_x20 + 0x72) = (char)param_6;
  uVar2 = 0;
  FUN_100880830(0);
  _swift_allocObject();
  FUN_10087b74c(param_6,param_3,param_4,param_5,uVar2);
  *(undefined8 *)(unaff_x20 + 0x68) = param_6;
  *(undefined1 *)(unaff_x20 + 0x70) = param_1;
  *(undefined1 *)(unaff_x20 + 0x71) = param_2;
  return;
}



/* Address: 0x100889a38 | FUN_100889a38 */

void FUN_100889a38(void)

{
  FUN_100889af4();
  return;
}



/* Address: 0x100889a78 | FUN_100889a78 */

void FUN_100889a78(void)

{
  FUN_100889af4();
  return;
}



/* Address: 0x100889ab8 | FUN_100889ab8 */

void FUN_100889ab8(void)

{
  FUN_100889af4();
  return;
}



/* Address: 0x100889af4 | FUN_100889af4 */

/* WARNING: Removing unreachable block (ram,0x00010088a190) */
/* WARNING: Removing unreachable block (ram,0x00010088a1b4) */

code * FUN_100889af4(undefined8 param_1,undefined8 param_2,uint param_3,byte param_4,byte param_5,
                    undefined8 param_6,undefined8 param_7,undefined8 param_8,long param_9,
                    undefined8 param_10,undefined8 param_11)

{
  ulong uVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  long lVar10;
  ContiguousArray CVar11;
  _ContiguousArrayBuffer<undefined> _Var12;
  undefined *puVar13;
  code *pcVar14;
  long unaff_x20;
  ulong uVar15;
  long lVar16;
  undefined8 local_150;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  
  uVar15 = *(ulong *)(unaff_x20 + 0x30);
  lVar16 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar7 = uVar15;
  (**(code **)(lVar16 + 0x10))();
  if ((uVar7 & 1) == 0) {
    puVar3 = &DAT_100f09960;
    _swift_allocObject(&DAT_100f09960,0x60,7);
    *(undefined8 *)(puVar3 + 0x10) = param_1;
    *(undefined8 *)(puVar3 + 0x18) = param_2;
    *(long *)(puVar3 + 0x20) = unaff_x20;
    puVar3[0x28] = (char)param_3;
    puVar3[0x29] = param_4 & 1;
    puVar3[0x2a] = param_5 & 1;
    *(undefined8 *)(puVar3 + 0x30) = param_6;
    *(undefined8 *)(puVar3 + 0x38) = param_7;
    *(undefined8 *)(puVar3 + 0x40) = param_8;
    *(long *)(puVar3 + 0x48) = param_9;
    *(undefined8 *)(puVar3 + 0x50) = param_10;
    *(undefined8 *)(puVar3 + 0x58) = param_11;
    pcVar14 = *(code **)(lVar16 + 0x20);
    FUN_1005dfcb0(param_1,param_2);
    FUN_10088f9d8(param_9,param_10,param_11);
    _swift_retain();
    pcVar2 = FUN_10088af8c;
    (*pcVar14)(FUN_10088af8c,puVar3,PTR___type_metadata_for____100eae0c8 + 8,uVar15,lVar16);
    _swift_release(puVar3);
    return pcVar2;
  }
  local_150 = param_10;
  FUN_1005dfcb0(param_1,param_2);
  FUN_100627fb8();
  if (param_9 == 0) {
    if ((param_4 & 1) != 0) {
      lVar4 = 0;
      FUN_100887fb0();
      _swift_allocObject();
      *(undefined1 *)(lVar4 + 0x10) = 0;
      *(byte *)(lVar4 + 0x11) = param_5 & 1;
      FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
      _swift_allocObject();
      uVar7 = (ulong)param_3;
      FUN_100889924(uVar7,0,param_6,param_7,param_8,1);
      uVar8 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar3 = &DAT_100fe99b8;
      FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 6;
      *(undefined8 *)(puVar3 + 0x10) = 3;
      *(long *)(puVar3 + 0x20) = lVar4;
      *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f091a8;
      local_c0 = uVar7;
      FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
      _swift_allocObject();
      _swift_retain(lVar4);
      _swift_retain(uVar7);
      puVar5 = &local_c0;
      FUN_1006381a4(puVar5,0,1);
      *(ulong **)(puVar3 + 0x30) = puVar5;
      *(undefined ***)(puVar3 + 0x38) = &PTR_PTR_100eee528;
      *(undefined8 *)(puVar3 + 0x40) = uVar8;
      *(undefined ***)(puVar3 + 0x48) = &PTR_PTR_100f09778;
      _swift_retain(uVar8);
      FUN_100632174(puVar3,param_1,param_2,unaff_x20);
      _swift_release(lVar4);
      _swift_release(uVar8);
      _swift_release(uVar7);
      _swift_setDeallocating(puVar3);
      uVar8 = *(undefined8 *)(puVar3 + 0x10);
      puVar9 = &DAT_100fe99c0;
      FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
      _swift_arrayDestroy(puVar3 + 0x20,uVar8,puVar9);
      goto LAB_10088a1e0;
    }
    lVar4 = 0;
    local_150 = 0;
    param_11 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_9);
    _swift_retain(param_11);
    lVar4 = param_9;
    FUN_10088a2c0();
    _swift_bridgeObjectRelease(param_9);
  }
  lVar6 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(lVar6 + 0x10) = 0;
  *(byte *)(lVar6 + 0x11) = param_5 & 1;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  uVar7 = (ulong)param_3;
  FUN_100889924(uVar7,0,param_6,param_7,param_8,1);
  puVar3 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(long *)(puVar3 + 0x20) = lVar6;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f09140;
  local_c0 = uVar7;
  FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
  _swift_allocObject();
  _swift_retain(lVar6);
  _swift_retain(uVar7);
  puVar5 = &local_c0;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar3 + 0x30) = puVar5;
  *(undefined ***)(puVar3 + 0x38) = &PTR_PTR_100eee590;
  puVar9 = puVar3;
  if ((param_4 & 1) != 0) {
    uVar8 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar9 = (undefined *)0x1;
    FUN_100880850(1,3,1,puVar3);
    *(undefined8 *)(puVar9 + 0x10) = 3;
    *(undefined8 *)(puVar9 + 0x40) = uVar8;
    *(undefined ***)(puVar9 + 0x48) = &PTR_PTR_100f09710;
  }
  if (lVar4 != 0) {
    lVar10 = 0;
    FUN_1008a8750();
    _swift_allocObject();
    *(undefined1 *)(lVar10 + 0x30) = 0;
    *(undefined8 *)(lVar10 + 0x38) = 0;
    *(undefined8 *)(lVar10 + 0x40) = 0;
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    uStack_90 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    uStack_a8 = 0;
    uStack_b0 = 0;
    local_80 = 0xff00;
    FUN_10088f9d8(lVar4,local_150,param_11);
    _swift_bridgeObjectRetain(lVar4);
    _swift_bridgeObjectRetain(puVar9);
    _swift_retain(param_11);
    CVar11.unknown = &DAT_100fe90d8;
    FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
    _Var12 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar11);
    *(undefined8 *)(_Var12.unknown + 0x10) = 0x10;
    FUN_10087b514(&local_c0,_Var12.unknown + 0x20);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x68);
    FUN_10087b514(&local_c0,_Var12.unknown + 0xb0);
    FUN_10087b514(&local_c0,_Var12.unknown + 0xf8);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x140);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x188);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x1d0);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x218);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x260);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x2a8);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x2f0);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x338);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x380);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x3c8);
    FUN_10087b514(&local_c0,_Var12.unknown + 0x410);
    *(undefined8 *)(_Var12.unknown + 0x480) = uStack_98;
    *(undefined8 *)(_Var12.unknown + 0x478) = local_a0;
    *(undefined8 *)(_Var12.unknown + 0x490) = uStack_88;
    *(undefined8 *)(_Var12.unknown + 0x488) = uStack_90;
    *(undefined2 *)(_Var12.unknown + 0x498) = local_80;
    *(ulong *)(_Var12.unknown + 0x460) = uStack_b8;
    *(ulong *)(_Var12.unknown + 0x458) = local_c0;
    *(undefined8 *)(_Var12.unknown + 0x470) = uStack_a8;
    *(undefined8 *)(_Var12.unknown + 0x468) = uStack_b0;
    *(undefined8 *)(lVar10 + 0x50) = 0;
    *(undefined8 *)(lVar10 + 0x58) = 0;
    *(undefined **)(lVar10 + 0x48) = _Var12.unknown;
    if (*(long *)(lVar4 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10088a248);
      (*pcVar2)();
    }
    *(long *)(lVar10 + 0x10) = lVar4;
    *(undefined **)(lVar10 + 0x18) = puVar9;
    *(undefined8 *)(lVar10 + 0x20) = local_150;
    *(undefined8 *)(lVar10 + 0x28) = param_11;
    _swift_retain(lVar10);
    puVar3 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar13 = puVar9;
    if (((ulong)puVar3 & 1) == 0) {
      puVar13 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar13 + 0x10);
    puVar9 = puVar13;
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_100880850(puVar9,uVar1 + 1,1,puVar13);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar10;
    *(undefined ***)(puVar9 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
    _swift_release(param_11);
    _swift_bridgeObjectRelease(lVar4);
    _swift_release(lVar10);
  }
  puVar3 = puVar9;
  FUN_10088a400(puVar9);
  FUN_100632174();
  FUN_10088fa04(lVar4,local_150,param_11);
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(puVar3);
  _swift_release(uVar7);
  _swift_release(lVar6);
LAB_10088a1e0:
  local_c0 = 0;
  uStack_b8 = uStack_b8 & 0xffffffffffffff00;
  pcVar2 = (code *)&local_c0;
  FUN_10063db28(pcVar2,uVar15,PTR___type_metadata_for____100eae0c8 + 8,lVar16);
  FUN_1005dfc80(param_1,param_2);
  FUN_1002ec258(0,0);
  return pcVar2;
}



/* Address: 0x10088a288 | FUN_10088a288 */

void FUN_10088a288(void)

{
  FUN_100889af4();
  return;
}



/* Address: 0x10088a2c0 | FUN_10088a2c0 */

undefined * FUN_10088a2c0(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10089265c(0,lVar4,0);
    param_1 = param_1 + 0x20;
    puVar5 = local_68;
    do {
      FUN_100076688(param_1,auStack_b8);
      FUN_100076508(auStack_b8,auStack_e0);
      puVar2 = &DAT_100fe99f0;
      FUN_1000f7830(&DAT_100fe99f0,&DAT_100c805b0);
      puVar3 = &DAT_100fe99f8;
      FUN_1000f7830(&DAT_100fe99f8,&DAT_100c80cd0);
      _swift_dynamicCast(auStack_90,auStack_e0,puVar2,puVar3,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_10089265c(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_100076508(auStack_90,local_68 + uVar1 * 0x28 + 0x20);
      param_1 = param_1 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Address: 0x10088a400 | FUN_10088a400 */

undefined * FUN_10088a400(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_68;
  
  lVar7 = *(long *)(param_1 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    FUN_100892678(0,lVar7,0);
    puVar8 = (undefined8 *)(param_1 + 0x20);
    do {
      puVar4 = local_68;
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      _swift_unknownObjectRetain(local_90);
      puVar5 = &DAT_100fe9590;
      FUN_1000f7830(&DAT_100fe9590,&DAT_100c7fd08);
      puVar6 = &DAT_100fe99c0;
      FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
      _swift_dynamicCast(&local_80,&local_90,puVar5,puVar6,7);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_100892678(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x28) = uVar3;
      *(undefined8 *)(local_68 + uVar1 * 0x10 + 0x20) = uVar2;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 2;
    } while (lVar7 != 0);
  }
  return local_68;
}



/* Address: 0x10088a534 | FUN_10088a534 */

undefined * FUN_10088a534(long param_1)

{
  ulong uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 auStack_e0 [40];
  undefined1 auStack_b8 [40];
  undefined1 auStack_90 [40];
  undefined *local_68;
  
  lVar4 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar4 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100892694(0,lVar4,0);
    param_1 = param_1 + 0x20;
    puVar5 = local_68;
    do {
      FUN_100076688(param_1,auStack_b8);
      FUN_100076508(auStack_b8,auStack_e0);
      puVar2 = &DAT_100fe99e0;
      FUN_1000f7830(&DAT_100fe99e0,&DAT_100c805a8);
      puVar3 = &DAT_100fe99e8;
      FUN_1000f7830(&DAT_100fe99e8,&DAT_100c80cc0);
      _swift_dynamicCast(auStack_90,auStack_e0,puVar2,puVar3,7);
      uVar1 = *(ulong *)(puVar5 + 0x10);
      local_68 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        FUN_100892694(1 < *(ulong *)(puVar5 + 0x18),uVar1 + 1,1);
      }
      puVar5 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_100076508(auStack_90,local_68 + uVar1 * 0x28 + 0x20);
      param_1 = param_1 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return puVar5;
}



/* Address: 0x10088a674 | FUN_10088a674 */

void FUN_10088a674(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_58;
  
  lVar2 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x11) = param_5;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_3,0,param_6,param_7,param_8,1);
  local_58 = param_3;
  if ((param_9 == 0) && ((param_4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar4 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f091a8;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar4 + 0x40) = uVar3;
    *(undefined ***)(puVar4 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar4,param_1,param_2,param_12);
    _swift_release(lVar2);
    _swift_release(uVar3);
    _swift_release(param_3);
    _swift_setDeallocating(puVar4);
    uVar3 = *(undefined8 *)(puVar4 + 0x10);
    puVar6 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar4 + 0x20,uVar3,puVar6);
  }
  else {
    puVar4 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f09140;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee590;
    puVar6 = puVar4;
    if ((param_4 & 1) != 0) {
      uVar3 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar6 = (undefined *)0x1;
      FUN_100880850(1,3,1,puVar4);
      *(undefined8 *)(puVar6 + 0x10) = 3;
      *(undefined8 *)(puVar6 + 0x40) = uVar3;
      *(undefined ***)(puVar6 + 0x48) = &PTR_PTR_100f09710;
    }
    if (param_9 != 0) {
      FUN_10088f9d8(param_9,param_10,param_11);
      _swift_bridgeObjectRetain(param_9);
      _swift_bridgeObjectRetain(puVar6);
      _swift_retain(param_11);
      lVar7 = param_9;
      FUN_1008a8480(param_9,puVar6,param_10,param_11);
      _swift_retain();
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar6 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100880850(puVar6,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar7;
      *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
      _swift_release(param_11);
      _swift_bridgeObjectRelease(param_9);
      _swift_release(lVar7);
    }
    puVar4 = puVar6;
    FUN_10088a400(puVar6);
    FUN_100632174();
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088aa64 | FUN_10088aa64 */

void FUN_10088aa64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,byte param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10,undefined8 param_11,undefined8 param_12)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 local_c0;
  undefined8 local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8();
  if (param_10 == 0) {
    if ((param_5 & 1) != 0) {
      lVar2 = 0;
      FUN_100887fb0();
      _swift_allocObject();
      *(undefined1 *)(lVar2 + 0x10) = 0;
      *(byte *)(lVar2 + 0x11) = param_6 & 1;
      FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
      _swift_allocObject();
      FUN_100889924(param_4,0,param_7,param_8,param_9,1);
      uVar6 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar3 = &DAT_100fe99b8;
      FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
      _swift_initStackObject();
      *(undefined8 *)(puVar3 + 0x18) = 6;
      *(undefined8 *)(puVar3 + 0x10) = 3;
      *(long *)(puVar3 + 0x20) = lVar2;
      *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f091a8;
      local_58 = param_4;
      FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
      _swift_allocObject();
      _swift_retain(lVar2);
      _swift_retain(param_4);
      puVar4 = &local_58;
      FUN_1006381a4(puVar4,0,1);
      *(undefined8 **)(puVar3 + 0x30) = puVar4;
      *(undefined ***)(puVar3 + 0x38) = &PTR_PTR_100eee528;
      *(undefined8 *)(puVar3 + 0x40) = uVar6;
      *(undefined ***)(puVar3 + 0x48) = &PTR_PTR_100f09778;
      _swift_retain(uVar6);
      FUN_100632174(puVar3,param_1,param_2,param_3);
      _swift_release(lVar2);
      _swift_release(uVar6);
      _swift_release(param_4);
      FUN_1005dfc80(param_1,param_2);
      _swift_setDeallocating(puVar3);
      uVar6 = *(undefined8 *)(puVar3 + 0x10);
      puVar7 = &DAT_100fe99c0;
      FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
      _swift_arrayDestroy(puVar3 + 0x20,uVar6,puVar7);
      return;
    }
    lVar2 = 0;
    local_c0 = 0;
    param_12 = 0;
  }
  else {
    local_c0 = param_11;
    _swift_bridgeObjectRetain(param_10);
    _swift_retain(param_12);
    lVar2 = param_10;
    FUN_10088a2c0();
    _swift_bridgeObjectRelease(param_10);
  }
  lVar5 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(lVar5 + 0x10) = 0;
  *(byte *)(lVar5 + 0x11) = param_6 & 1;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_4,0,param_7,param_8,param_9,1);
  puVar3 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(long *)(puVar3 + 0x20) = lVar5;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f09140;
  local_58 = param_4;
  FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
  _swift_allocObject();
  _swift_retain(lVar5);
  _swift_retain(param_4);
  puVar4 = &local_58;
  FUN_1006381a4(puVar4,0,1);
  *(undefined8 **)(puVar3 + 0x30) = puVar4;
  *(undefined ***)(puVar3 + 0x38) = &PTR_PTR_100eee590;
  puVar7 = puVar3;
  if ((param_5 & 1) != 0) {
    uVar6 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar7 = (undefined *)0x1;
    FUN_100880850(1,3,1,puVar3);
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(undefined8 *)(puVar7 + 0x40) = uVar6;
    *(undefined ***)(puVar7 + 0x48) = &PTR_PTR_100f09710;
  }
  if (lVar2 != 0) {
    FUN_10088f9d8(lVar2,local_c0,param_12);
    _swift_bridgeObjectRetain(lVar2);
    _swift_bridgeObjectRetain(puVar7);
    _swift_retain(param_12);
    lVar8 = lVar2;
    FUN_1008a8480(lVar2,puVar7,local_c0,param_12);
    _swift_retain();
    puVar3 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar9 = puVar7;
    if (((ulong)puVar3 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar1 = *(ulong *)(puVar9 + 0x10);
    puVar7 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_100880850(puVar7,uVar1 + 1,1,puVar9);
    }
    *(ulong *)(puVar7 + 0x10) = uVar1 + 1;
    *(long *)(puVar7 + uVar1 * 0x10 + 0x20) = lVar8;
    *(undefined ***)(puVar7 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
    _swift_release(param_12);
    _swift_bridgeObjectRelease(lVar2);
    _swift_release(lVar8);
  }
  puVar3 = puVar7;
  FUN_10088a400(puVar7);
  FUN_100632174();
  FUN_1005dfc80(param_1,param_2);
  FUN_10088fa04(lVar2,local_c0,param_12);
  _swift_bridgeObjectRelease(puVar7);
  _swift_bridgeObjectRelease(puVar3);
  _swift_release(param_4);
  _swift_release(lVar5);
  return;
}



/* Address: 0x10088af4c | FUN_10088af4c */

void FUN_10088af4c(void)

{
  long unaff_x20;
  
  FUN_1005dfc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    _swift_bridgeObjectRelease();
    _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10088af8c | FUN_10088af8c */

void FUN_10088af8c(void)

{
  long unaff_x20;
  
  FUN_10088aa64(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x29),*(undefined1 *)(unaff_x20 + 0x2a),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x10088afd0 | FUN_10088afd0 */

void FUN_10088afd0(void)

{
  FUN_10088b00c();
  return;
}



/* Address: 0x10088b00c | FUN_10088b00c */

/* WARNING: Removing unreachable block (ram,0x00010088b8d8) */

code * FUN_10088b00c(undefined8 param_1,undefined8 param_2,byte param_3,long param_4,
                    undefined8 param_5,undefined8 param_6,byte param_7,byte param_8,byte param_9,
                    undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  ContiguousArray CVar7;
  _ContiguousArrayBuffer<undefined> _Var8;
  char *pcVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *pvVar13;
  uint uVar15;
  code *pcVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long lVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  undefined *local_1d8;
  undefined8 local_180;
  undefined8 local_178;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  long local_158;
  undefined8 local_150;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined *local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  long lStack_f8;
  undefined8 local_f0;
  undefined1 auStack_e8 [24];
  char *local_d0;
  void *pvStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined2 local_80;
  void *pvVar14;
  
  uVar18 = *(ulong *)(unaff_x20 + 0x30);
  lVar20 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar18;
  (**(code **)(lVar20 + 0x10))();
  if ((uVar3 & 1) == 0) {
    puVar12 = &DAT_100f09988;
    _swift_allocObject(&DAT_100f09988,0x68,7);
    *(undefined8 *)(puVar12 + 0x10) = param_1;
    *(undefined8 *)(puVar12 + 0x18) = param_2;
    *(long *)(puVar12 + 0x20) = unaff_x20;
    puVar12[0x28] = param_3 & 1;
    *(long *)(puVar12 + 0x30) = param_4;
    *(undefined8 *)(puVar12 + 0x38) = param_5;
    *(undefined8 *)(puVar12 + 0x40) = param_6;
    puVar12[0x48] = param_7 & 1;
    puVar12[0x49] = param_8 & 1;
    puVar12[0x4a] = param_9 & 1;
    *(undefined8 *)(puVar12 + 0x50) = param_11;
    *(undefined8 *)(puVar12 + 0x58) = param_12;
    *(undefined8 *)(puVar12 + 0x60) = param_13;
    pcVar16 = *(code **)(lVar20 + 0x20);
    FUN_1005dfcb0(param_1,param_2);
    FUN_10088f9d8(param_4,param_5,param_6);
    _swift_retain();
    pcVar1 = FUN_10088f984;
    (*pcVar16)(FUN_10088f984,puVar12,PTR___type_metadata_for____100eae0c8 + 8,uVar18,lVar20);
    _swift_release(puVar12);
  }
  else {
    FUN_1005dfcb0(param_1,param_2);
    FUN_100627fb8();
    if (param_4 == 0) {
      lVar24 = 0;
      local_180 = 0;
      local_178 = 0;
    }
    else {
      _swift_bridgeObjectRetain(param_4);
      _swift_retain(param_6);
      lVar24 = param_4;
      FUN_10088a534();
      _swift_bridgeObjectRelease(param_4);
      local_180 = param_5;
      local_178 = param_6;
    }
    lVar2 = 0;
    FUN_100887fe4();
    _swift_allocObject();
    *(undefined2 *)(lVar2 + 0x10) = 0;
    *(undefined8 *)(lVar2 + 0x20) = 0x22;
    *(undefined8 *)(lVar2 + 0x18) = 0;
    *(undefined8 *)(lVar2 + 0x30) = 0;
    *(undefined8 *)(lVar2 + 0x38) = 0;
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(byte *)(lVar2 + 0x40) = param_9 & 1;
    FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
    _swift_allocObject();
    _swift_retain(lVar2);
    uVar15 = 2;
    if (lVar24 != 0) {
      uVar15 = 0;
    }
    uVar3 = (ulong)uVar15;
    FUN_100889924(uVar3,0,param_11,param_12,param_13,0);
    uVar4 = *(undefined8 *)(uVar3 + 0x78);
    *(long *)(uVar3 + 0x78) = lVar2;
    _swift_release(uVar4);
    puVar12 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar12 + 0x18) = 4;
    *(undefined8 *)(puVar12 + 0x10) = 2;
    *(long *)(puVar12 + 0x20) = lVar2;
    *(undefined ***)(puVar12 + 0x28) = &PTR_PTR_100f091c0;
    local_c0 = uVar3;
    FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(uVar3);
    puVar5 = &local_c0;
    FUN_1006381a4(puVar5,0,1);
    *(ulong **)(puVar12 + 0x30) = puVar5;
    *(undefined ***)(puVar12 + 0x38) = &PTR_PTR_100eee590;
    if ((param_3 & 1) != 0) {
      uVar4 = 0;
      FUN_1008945ec();
      _swift_allocObject();
      FUN_10088fb7c();
      uVar21 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_100880850(puVar12,uVar21 + 1,1);
      }
      *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
      *(undefined8 *)(puVar12 + uVar21 * 0x10 + 0x20) = uVar4;
      *(undefined ***)(puVar12 + uVar21 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    }
    if ((param_8 & 1) != 0) {
      lVar6 = 0;
      FUN_100889258();
      _swift_allocObject();
      *(undefined1 *)(lVar6 + 0x10) = 0;
      uVar21 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_100880850(puVar12,uVar21 + 1,1);
      }
      *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
      *(long *)(puVar12 + uVar21 * 0x10 + 0x20) = lVar6;
      *(undefined ***)(puVar12 + uVar21 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    }
    if ((param_7 & 1) != 0) {
      lVar6 = 0;
      FUN_1008952c8();
      _swift_allocObject();
      *(undefined1 *)(lVar6 + 0x10) = 0;
      uVar21 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_100880850(puVar12,uVar21 + 1,1);
      }
      *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
      *(long *)(puVar12 + uVar21 * 0x10 + 0x20) = lVar6;
      *(undefined ***)(puVar12 + uVar21 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    }
    if (lVar24 != 0) {
      local_1d8 = puVar12;
      if (*(long *)(puVar12 + 0x10) == 0) {
        FUN_10088f9d8(lVar24,local_180,local_178);
        _swift_bridgeObjectRetain(puVar12);
      }
      else {
        FUN_10088f9d8(lVar24,local_180,local_178);
        _swift_bridgeObjectRetain();
        FUN_10088f85c();
        _swift_bridgeObjectRelease(puVar12);
      }
      lVar6 = 0;
      FUN_100899698();
      _swift_allocObject();
      *(undefined1 *)(lVar6 + 0x38) = 0;
      *(undefined8 *)(lVar6 + 0x40) = 0;
      *(undefined8 *)(lVar6 + 0x48) = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      uStack_b8 = 0;
      local_c0 = 0;
      uStack_a8 = 0;
      uStack_b0 = 0;
      local_80 = 0xff00;
      _swift_retain(lVar2);
      _swift_retain(local_178);
      CVar7.unknown = &DAT_100fe90d8;
      FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
      _Var8 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar7);
      *(undefined8 *)(_Var8.unknown + 0x10) = 0x10;
      FUN_10087b514(&local_c0,_Var8.unknown + 0x20);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x68);
      FUN_10087b514(&local_c0,_Var8.unknown + 0xb0);
      FUN_10087b514(&local_c0,_Var8.unknown + 0xf8);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x140);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x188);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x1d0);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x218);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x260);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x2a8);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x2f0);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x338);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x380);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x3c8);
      FUN_10087b514(&local_c0,_Var8.unknown + 0x410);
      *(undefined8 *)(_Var8.unknown + 0x480) = uStack_98;
      *(undefined8 *)(_Var8.unknown + 0x478) = local_a0;
      *(undefined8 *)(_Var8.unknown + 0x490) = uStack_88;
      *(undefined8 *)(_Var8.unknown + 0x488) = uStack_90;
      *(undefined2 *)(_Var8.unknown + 0x498) = local_80;
      *(ulong *)(_Var8.unknown + 0x460) = uStack_b8;
      *(ulong *)(_Var8.unknown + 0x458) = local_c0;
      *(undefined8 *)(_Var8.unknown + 0x470) = uStack_a8;
      *(undefined8 *)(_Var8.unknown + 0x468) = uStack_b0;
      *(undefined8 *)(lVar6 + 0x58) = 0;
      *(undefined8 *)(lVar6 + 0x60) = 0;
      *(undefined **)(lVar6 + 0x50) = _Var8.unknown;
      uVar21 = *(ulong *)(lVar24 + 0x10);
      puVar11 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      if (uVar21 != 0) {
        uVar22 = 0;
        lVar23 = lVar24 + 0x20;
        do {
          if (*(ulong *)(lVar24 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10088b994);
            (*pcVar1)();
          }
          FUN_100076688(lVar23,&local_c0);
          FUN_100076508(&local_c0,auStack_e8);
          pvVar13 = pvStack_c8;
          pcVar9 = local_d0;
          FUN_100004640(auStack_e8,local_d0);
          (**(code **)((long)pvVar13 + 8))();
          SVar25.bridgeObject = pvVar13;
          SVar25.str = pcVar9;
          SVar25 = Swift::String::lowercased(SVar25);
          pvVar14 = SVar25.bridgeObject;
          _swift_bridgeObjectRelease(pvVar13);
          FUN_100076688(auStack_e8,&local_110);
          uStack_168 = uStack_108;
          local_170 = local_110;
          local_158 = lStack_f8;
          uStack_160 = uStack_100;
          local_150 = local_f0;
          if (lStack_f8 == 0) {
            FUN_10088fa30(&local_170);
            _swift_bridgeObjectRetain(puVar11);
            FUN_100071370();
            pcVar9 = SVar25.str;
            _swift_bridgeObjectRelease(puVar11);
            if (((ulong)SVar25.bridgeObject & 1) == 0) {
              _swift_bridgeObjectRelease(pvVar14);
              local_120 = 0;
              uStack_138 = 0;
              local_140 = 0;
              uStack_128 = 0;
              uStack_130 = 0;
            }
            else {
              puVar10 = puVar11;
              _swift_isUniquelyReferenced_nonNull_native();
              local_170 = puVar11;
              if ((int)puVar10 == 0) {
                FUN_1008987a0();
              }
              puVar11 = local_170;
              _swift_bridgeObjectRelease
                        (*(undefined8 *)(*(long *)(local_170 + 0x30) + (long)pcVar9 * 0x10 + 8));
              FUN_100076508(*(long *)(puVar11 + 0x38) + (long)pcVar9 * 0x28,&local_140);
              FUN_1001977c8(pcVar9,puVar11);
              _swift_bridgeObjectRelease(pvVar14);
            }
            FUN_10088fa30(&local_140);
          }
          else {
            FUN_100076508(&local_170,&local_140);
            puVar10 = puVar11;
            _swift_isUniquelyReferenced_nonNull_native();
            SVar26 = SVar25;
            local_170 = puVar11;
            FUN_100071370();
            pcVar9 = SVar26.str;
            uVar17 = (ulong)~(uint)SVar26.bridgeObject & 1;
            lVar19 = *(long *)(puVar11 + 0x10) + uVar17;
            if (SCARRY8(*(long *)(puVar11 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10088b998);
              (*pcVar1)();
            }
            if (*(long *)(puVar11 + 0x18) < lVar19) {
              FUN_100898948(lVar19,puVar10);
              SVar27 = SVar25;
              FUN_100071370();
              pcVar9 = SVar27.str;
              if (((uint)SVar26.bridgeObject & 1) != ((uint)SVar27.bridgeObject & 1)) {
                Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10088baa4);
                (*pcVar1)();
              }
            }
            else if (((ulong)puVar10 & 1) == 0) {
              FUN_1008987a0();
            }
            puVar11 = local_170;
            if (((ulong)SVar26.bridgeObject & 1) == 0) {
              *(ulong *)(local_170 + ((ulong)pcVar9 >> 6) * 8 + 0x40) =
                   *(ulong *)(local_170 + ((ulong)pcVar9 >> 6) * 8 + 0x40) |
                   1L << ((ulong)pcVar9 & 0x3f);
              *(String *)(*(long *)(local_170 + 0x30) + (long)pcVar9 * 0x10) = SVar25;
              FUN_100076508(&local_140,*(long *)(local_170 + 0x38) + (long)pcVar9 * 0x28);
              if (SCARRY8(*(long *)(puVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x10088b99c);
                (*pcVar1)();
              }
              *(long *)(puVar11 + 0x10) = *(long *)(puVar11 + 0x10) + 1;
            }
            else {
              lVar19 = *(long *)(local_170 + 0x38) + (long)pcVar9 * 0x28;
              FUN_100004594(lVar19);
              FUN_100076508(&local_140,lVar19);
              _swift_bridgeObjectRelease(pvVar14);
            }
          }
          uVar22 = uVar22 + 1;
          FUN_100004594(auStack_e8);
          lVar23 = lVar23 + 0x28;
        } while (uVar21 != uVar22);
      }
      _swift_bridgeObjectRelease(lVar24);
      *(undefined **)(lVar6 + 0x10) = puVar11;
      *(undefined8 *)(lVar6 + 0x18) = local_180;
      *(undefined8 *)(lVar6 + 0x20) = local_178;
      *(long *)(lVar6 + 0x28) = lVar2;
      *(undefined **)(lVar6 + 0x30) = local_1d8;
      _swift_retain();
      puVar11 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar11 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
        puVar12 = puVar11;
      }
      uVar21 = *(ulong *)(puVar12 + 0x10);
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar21) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_100880850(puVar12,uVar21 + 1,1);
      }
      *(ulong *)(puVar12 + 0x10) = uVar21 + 1;
      *(long *)(puVar12 + uVar21 * 0x10 + 0x20) = lVar6;
      *(undefined ***)(puVar12 + uVar21 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
      _swift_release(local_178);
      _swift_release(lVar6);
    }
    puVar11 = puVar12;
    FUN_10088a400(puVar12);
    FUN_100632174();
    FUN_10088fa04(lVar24,local_180,local_178);
    _swift_bridgeObjectRelease(puVar12);
    _swift_bridgeObjectRelease(puVar11);
    _swift_release(uVar3);
    _swift_release(lVar2);
    local_c0 = 0;
    uStack_b8 = uStack_b8 & 0xffffffffffffff00;
    pcVar1 = (code *)&local_c0;
    FUN_10063db28(pcVar1,uVar18,PTR___type_metadata_for____100eae0c8 + 8,lVar20);
    FUN_1005dfc80(param_1,param_2);
    FUN_1002ec258(0,0);
  }
  return pcVar1;
}



/* Address: 0x10088baa4 | FUN_10088baa4 */

void FUN_10088baa4(void)

{
  FUN_10088b00c();
  return;
}



/* Address: 0x10088badc | FUN_10088badc */

void FUN_10088badc(void)

{
  FUN_10088b00c();
  return;
}



/* Address: 0x10088bb14 | thunk_FUN_10088b00c */

void thunk_FUN_10088b00c(void)

{
  FUN_10088b00c();
  return;
}



/* Address: 0x10088bb18 | FUN_10088bb18 */

void FUN_10088bb18(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,uint param_7,ulong param_8,
                  undefined1 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  ulong *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint uVar10;
  ulong local_58;
  
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = param_9;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar10 = 2;
  if (param_4 != 0) {
    uVar10 = 0;
  }
  uVar3 = (ulong)uVar10;
  FUN_100889924(uVar3,0,param_11,param_12,param_13,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar5 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  *(long *)(puVar5 + 0x20) = lVar2;
  *(undefined ***)(puVar5 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar6 = &local_58;
  FUN_1006381a4(puVar6,0,1);
  *(ulong **)(puVar5 + 0x30) = puVar6;
  *(undefined ***)(puVar5 + 0x38) = &PTR_PTR_100eee590;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar9 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100880850(puVar9,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar9 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar9 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    puVar5 = puVar9;
  }
  if ((param_8 & 1) != 0) {
    lVar7 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar7 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar5 + 0x10);
    puVar9 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100880850(puVar9,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar7;
    *(undefined ***)(puVar9 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    puVar5 = puVar9;
  }
  puVar9 = puVar5;
  if ((param_7 & 1) != 0) {
    lVar7 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar7 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      FUN_100880850(puVar9,uVar1 + 1,1,puVar5);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar7;
    *(undefined ***)(puVar9 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
  }
  if (param_4 != 0) {
    puVar5 = puVar9;
    if (*(long *)(puVar9 + 0x10) == 0) {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar9);
    }
    else {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar9);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar9);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar7 = param_4;
    FUN_100899024(param_4,lVar2,puVar5,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar7);
    puVar5 = puVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar8 = puVar9;
    if (((ulong)puVar5 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
    }
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar9 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar9,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
    *(long *)(puVar9 + uVar1 * 0x10 + 0x20) = lVar7;
    *(undefined ***)(puVar9 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar7);
  }
  puVar5 = puVar9;
  FUN_10088a400(puVar9);
  FUN_100632174();
  _swift_bridgeObjectRelease(puVar9);
  _swift_bridgeObjectRelease(puVar5);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088bf90 | FUN_10088bf90 */

void FUN_10088bf90(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,uint param_8,uint param_9,
                  undefined4 param_10,undefined8 param_11,undefined8 param_12,undefined8 param_13)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  long lVar11;
  undefined8 local_70;
  undefined8 local_68;
  ulong local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8();
  if (param_5 == 0) {
    lVar11 = 0;
    local_70 = 0;
    local_68 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_5);
    _swift_retain(param_7);
    lVar11 = param_5;
    FUN_10088a534();
    _swift_bridgeObjectRelease(param_5);
    local_70 = param_6;
    local_68 = param_7;
  }
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(byte *)(lVar2 + 0x40) = param_9._1_1_ & 1;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar9 = 2;
  if (lVar11 != 0) {
    uVar9 = 0;
  }
  uVar3 = (ulong)uVar9;
  FUN_100889924(uVar3,0,param_11,param_12,param_13,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar10 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  *(long *)(puVar10 + 0x20) = lVar2;
  *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar10 + 0x30) = puVar5;
  *(undefined ***)(puVar10 + 0x38) = &PTR_PTR_100eee590;
  puVar8 = puVar10;
  if ((param_4 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar10 + 0x10);
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar10);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
  }
  puVar10 = puVar8;
  if ((param_9 & 1) != 0) {
    lVar6 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
  }
  puVar8 = puVar10;
  if ((param_8 & 1) != 0) {
    lVar6 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar10 + 0x10);
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar10);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
  }
  if (lVar11 != 0) {
    puVar10 = puVar8;
    if (*(long *)(puVar8 + 0x10) == 0) {
      FUN_10088f9d8(lVar11,local_70,local_68);
      _swift_bridgeObjectRetain(puVar8);
    }
    else {
      FUN_10088f9d8(lVar11,local_70,local_68);
      _swift_bridgeObjectRetain(puVar8);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar8);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(local_68);
    lVar6 = lVar11;
    FUN_100899024(lVar11,lVar2,puVar10,local_70,local_68);
    _swift_bridgeObjectRelease(lVar11);
    _swift_retain(lVar6);
    puVar10 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(local_68);
    _swift_release(lVar6);
  }
  puVar10 = puVar8;
  FUN_10088a400(puVar8);
  FUN_100632174();
  FUN_1005dfc80(param_1,param_2);
  FUN_10088fa04(lVar11,local_70,local_68);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088c474 | FUN_10088c474 */

void FUN_10088c474(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 local_58;
  
  if (param_4 == 0) {
    lVar6 = 0;
    FUN_100887fb0();
    _swift_allocObject();
    *(undefined2 *)(lVar6 + 0x10) = 0x100;
    FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
    _swift_allocObject();
    FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar7 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(long *)(puVar7 + 0x20) = lVar6;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f091a8;
    local_58 = param_3;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar6);
    _swift_retain(param_3);
    puVar8 = &local_58;
    FUN_1006381a4(puVar8,0,1);
    *(undefined8 **)(puVar7 + 0x30) = puVar8;
    *(undefined ***)(puVar7 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar7 + 0x40) = uVar3;
    *(undefined ***)(puVar7 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar7,param_1,param_2,param_7);
    _swift_release(lVar6);
    _swift_release(uVar3);
    _swift_release(param_3);
    _swift_setDeallocating(puVar7);
    uVar3 = *(undefined8 *)(puVar7 + 0x10);
    puVar9 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar7 + 0x20,uVar3,puVar9);
  }
  else {
    lVar2 = 0;
    FUN_100887fb0();
    _swift_allocObject();
    *(undefined2 *)(lVar2 + 0x10) = 0x100;
    FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
    _swift_allocObject();
    FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
    puVar7 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(long *)(puVar7 + 0x20) = lVar2;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f09140;
    local_58 = param_3;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar8 = &local_58;
    FUN_1006381a4(puVar8,0,1);
    *(undefined8 **)(puVar7 + 0x30) = puVar8;
    *(undefined ***)(puVar7 + 0x38) = &PTR_PTR_100eee590;
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    uVar4 = 1;
    FUN_100880850(1,3,1,puVar7);
    *(undefined8 *)(uVar4 + 0x10) = 3;
    *(undefined8 *)(uVar4 + 0x40) = uVar3;
    *(undefined ***)(uVar4 + 0x48) = &PTR_PTR_100f09710;
    FUN_10088f9d8(param_4,param_5,param_6);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(uVar4);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_1008a8480(param_4,uVar4,param_5,param_6);
    _swift_retain();
    uVar5 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
      FUN_100880850(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar5 = *(ulong *)(uVar10 + 0x10);
    uVar4 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_100880850(uVar4,uVar5 + 1,1,uVar10);
    }
    *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
    lVar1 = uVar4 + uVar5 * 0x10;
    *(long *)(lVar1 + 0x20) = lVar6;
    *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100f0b118;
    _swift_release(param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(lVar6);
    uVar5 = uVar4;
    FUN_10088a400(uVar4);
    FUN_100632174();
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar5);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088c8d0 | FUN_10088c8d0 */

void FUN_10088c8d0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined8 local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8();
  if (param_4 == 0) {
    lVar6 = 0;
    FUN_100887fb0();
    _swift_allocObject();
    *(undefined2 *)(lVar6 + 0x10) = 0x100;
    FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
    _swift_allocObject();
    FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar7 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar7 + 0x18) = 6;
    *(undefined8 *)(puVar7 + 0x10) = 3;
    *(long *)(puVar7 + 0x20) = lVar6;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f091a8;
    local_58 = param_3;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar6);
    _swift_retain(param_3);
    puVar8 = &local_58;
    FUN_1006381a4(puVar8,0,1);
    *(undefined8 **)(puVar7 + 0x30) = puVar8;
    *(undefined ***)(puVar7 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar7 + 0x40) = uVar3;
    *(undefined ***)(puVar7 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar7,param_1,param_2,param_7);
    _swift_release(lVar6);
    _swift_release(uVar3);
    _swift_release(param_3);
    FUN_1005dfc80(param_1,param_2);
    _swift_setDeallocating(puVar7);
    uVar3 = *(undefined8 *)(puVar7 + 0x10);
    puVar9 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar7 + 0x20,uVar3,puVar9);
  }
  else {
    lVar2 = 0;
    FUN_100887fb0();
    _swift_allocObject();
    *(undefined2 *)(lVar2 + 0x10) = 0x100;
    FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
    _swift_allocObject();
    FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
    puVar7 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar7 + 0x18) = 4;
    *(undefined8 *)(puVar7 + 0x10) = 2;
    *(long *)(puVar7 + 0x20) = lVar2;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f09140;
    local_58 = param_3;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar8 = &local_58;
    FUN_1006381a4(puVar8,0,1);
    *(undefined8 **)(puVar7 + 0x30) = puVar8;
    *(undefined ***)(puVar7 + 0x38) = &PTR_PTR_100eee590;
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    uVar4 = 1;
    FUN_100880850(1,3,1,puVar7);
    *(undefined8 *)(uVar4 + 0x10) = 3;
    *(undefined8 *)(uVar4 + 0x40) = uVar3;
    *(undefined ***)(uVar4 + 0x48) = &PTR_PTR_100f09710;
    FUN_10088f9d8(param_4,param_5,param_6);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRetain(uVar4);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_1008a8480(param_4,uVar4,param_5,param_6);
    _swift_retain();
    uVar5 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = uVar4;
    if ((uVar5 & 1) == 0) {
      uVar10 = 0;
      FUN_100880850(0,*(long *)(uVar4 + 0x10) + 1,1,uVar4);
    }
    uVar5 = *(ulong *)(uVar10 + 0x10);
    uVar4 = uVar10;
    if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar5) {
      uVar4 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
      FUN_100880850(uVar4,uVar5 + 1,1,uVar10);
    }
    *(ulong *)(uVar4 + 0x10) = uVar5 + 1;
    lVar1 = uVar4 + uVar5 * 0x10;
    *(long *)(lVar1 + 0x20) = lVar6;
    *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100f0b118;
    _swift_release(param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(lVar6);
    uVar5 = uVar4;
    FUN_10088a400(uVar4);
    FUN_100632174();
    FUN_1005dfc80(param_1,param_2);
    _swift_bridgeObjectRelease(uVar4);
    _swift_bridgeObjectRelease(uVar5);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088cd68 | FUN_10088cd68 */

void FUN_10088cd68(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_58;
  
  lVar2 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0x100;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
  local_58 = param_3;
  if ((param_5 == 0) && ((param_4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar4 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f091a8;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar4 + 0x40) = uVar3;
    *(undefined ***)(puVar4 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar4,param_1,param_2,param_8);
    _swift_release(lVar2);
    _swift_release(uVar3);
    _swift_release(param_3);
    _swift_setDeallocating(puVar4);
    uVar3 = *(undefined8 *)(puVar4 + 0x10);
    puVar6 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar4 + 0x20,uVar3,puVar6);
  }
  else {
    puVar4 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f09140;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee590;
    puVar6 = puVar4;
    if ((param_4 & 1) != 0) {
      uVar3 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar6 = (undefined *)0x1;
      FUN_100880850(1,3,1,puVar4);
      *(undefined8 *)(puVar6 + 0x10) = 3;
      *(undefined8 *)(puVar6 + 0x40) = uVar3;
      *(undefined ***)(puVar6 + 0x48) = &PTR_PTR_100f09710;
    }
    if (param_5 != 0) {
      FUN_10088f9d8(param_5,param_6,param_7);
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRetain(puVar6);
      _swift_retain(param_7);
      lVar7 = param_5;
      FUN_1008a8480(param_5,puVar6,param_6,param_7);
      _swift_retain();
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar6 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100880850(puVar6,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar7;
      *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
      _swift_release(param_7);
      _swift_bridgeObjectRelease(param_5);
      _swift_release(lVar7);
    }
    puVar4 = puVar6;
    FUN_10088a400(puVar6);
    FUN_100632174();
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088d150 | FUN_10088d150 */

void FUN_10088d150(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  long param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8(param_1);
  lVar2 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0x100;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
  local_58 = param_3;
  if ((param_5 == 0) && ((param_4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar4 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f091a8;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar4 + 0x40) = uVar3;
    *(undefined ***)(puVar4 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar4,param_1,param_2,param_8);
    _swift_release(lVar2);
    _swift_release(uVar3);
    _swift_release(param_3);
    FUN_1005dfc80(param_1,param_2);
    _swift_setDeallocating(puVar4);
    uVar3 = *(undefined8 *)(puVar4 + 0x10);
    puVar6 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar4 + 0x20,uVar3,puVar6);
  }
  else {
    puVar4 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f09140;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee590;
    puVar6 = puVar4;
    if ((param_4 & 1) != 0) {
      uVar3 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar6 = (undefined *)0x1;
      FUN_100880850(1,3,1,puVar4);
      *(undefined8 *)(puVar6 + 0x10) = 3;
      *(undefined8 *)(puVar6 + 0x40) = uVar3;
      *(undefined ***)(puVar6 + 0x48) = &PTR_PTR_100f09710;
    }
    if (param_5 != 0) {
      FUN_10088f9d8(param_5,param_6,param_7);
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRetain(puVar6);
      _swift_retain(param_7);
      lVar7 = param_5;
      FUN_1008a8480(param_5,puVar6,param_6,param_7);
      _swift_retain();
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar6 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100880850(puVar6,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar7;
      *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
      _swift_release(param_7);
      _swift_bridgeObjectRelease(param_5);
      _swift_release(lVar7);
    }
    puVar4 = puVar6;
    FUN_10088a400(puVar6);
    FUN_100632174();
    FUN_1005dfc80(param_1,param_2);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088d570 | FUN_10088d570 */

void FUN_10088d570(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_58;
  
  lVar2 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x11) = param_5;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
  local_58 = param_3;
  if ((param_6 == 0) && ((param_4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar4 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f091a8;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar4 + 0x40) = uVar3;
    *(undefined ***)(puVar4 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar4,param_1,param_2,param_9);
    _swift_release(lVar2);
    _swift_release(uVar3);
    _swift_release(param_3);
    _swift_setDeallocating(puVar4);
    uVar3 = *(undefined8 *)(puVar4 + 0x10);
    puVar6 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar4 + 0x20,uVar3,puVar6);
  }
  else {
    puVar4 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f09140;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee590;
    puVar6 = puVar4;
    if ((param_4 & 1) != 0) {
      uVar3 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar6 = (undefined *)0x1;
      FUN_100880850(1,3,1,puVar4);
      *(undefined8 *)(puVar6 + 0x10) = 3;
      *(undefined8 *)(puVar6 + 0x40) = uVar3;
      *(undefined ***)(puVar6 + 0x48) = &PTR_PTR_100f09710;
    }
    if (param_6 != 0) {
      FUN_10088f9d8(param_6,param_7,param_8);
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(puVar6);
      _swift_retain(param_8);
      lVar7 = param_6;
      FUN_1008a8480(param_6,puVar6,param_7,param_8);
      _swift_retain();
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar6 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100880850(puVar6,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar7;
      *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
      _swift_release(param_8);
      _swift_bridgeObjectRelease(param_6);
      _swift_release(lVar7);
    }
    puVar4 = puVar6;
    FUN_10088a400(puVar6);
    FUN_100632174();
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088d95c | FUN_10088d95c */

void FUN_10088d95c(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined1 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8(param_1);
  lVar2 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(lVar2 + 0x10) = 0;
  *(undefined1 *)(lVar2 + 0x11) = param_5;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889924(param_3,0,0x14000,0x14000,0xfffe,1);
  local_58 = param_3;
  if ((param_6 == 0) && ((param_4 & 1) != 0)) {
    uVar3 = 0;
    FUN_100889238();
    _swift_allocObject();
    puVar4 = &DAT_100fe99b8;
    FUN_1000f7830(&DAT_100fe99b8,&DAT_100c80598);
    _swift_initStackObject();
    *(undefined8 *)(puVar4 + 0x18) = 6;
    *(undefined8 *)(puVar4 + 0x10) = 3;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f091a8;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee528;
    *(undefined8 *)(puVar4 + 0x40) = uVar3;
    *(undefined ***)(puVar4 + 0x48) = &PTR_PTR_100f09778;
    _swift_retain(uVar3);
    FUN_100632174(puVar4,param_1,param_2,param_9);
    _swift_release(lVar2);
    _swift_release(uVar3);
    _swift_release(param_3);
    FUN_1005dfc80(param_1,param_2);
    _swift_setDeallocating(puVar4);
    uVar3 = *(undefined8 *)(puVar4 + 0x10);
    puVar6 = &DAT_100fe99c0;
    FUN_1000f7830(&DAT_100fe99c0,&DAT_100c80ce0);
    _swift_arrayDestroy(puVar4 + 0x20,uVar3,puVar6);
  }
  else {
    puVar4 = &DAT_100fe9588;
    FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x18) = 4;
    *(undefined8 *)(puVar4 + 0x10) = 2;
    *(long *)(puVar4 + 0x20) = lVar2;
    *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f09140;
    FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_3);
    puVar5 = &local_58;
    FUN_1006381a4(puVar5,0,1);
    *(undefined8 **)(puVar4 + 0x30) = puVar5;
    *(undefined ***)(puVar4 + 0x38) = &PTR_PTR_100eee590;
    puVar6 = puVar4;
    if ((param_4 & 1) != 0) {
      uVar3 = 0;
      FUN_100889238();
      _swift_allocObject();
      puVar6 = (undefined *)0x1;
      FUN_100880850(1,3,1,puVar4);
      *(undefined8 *)(puVar6 + 0x10) = 3;
      *(undefined8 *)(puVar6 + 0x40) = uVar3;
      *(undefined ***)(puVar6 + 0x48) = &PTR_PTR_100f09710;
    }
    if (param_6 != 0) {
      FUN_10088f9d8(param_6,param_7,param_8);
      _swift_bridgeObjectRetain(param_6);
      _swift_bridgeObjectRetain(puVar6);
      _swift_retain(param_8);
      lVar7 = param_6;
      FUN_1008a8480(param_6,puVar6,param_7,param_8);
      _swift_retain();
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100880850(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      puVar6 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100880850(puVar6,uVar1 + 1,1,puVar8);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(long *)(puVar6 + uVar1 * 0x10 + 0x20) = lVar7;
      *(undefined ***)(puVar6 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0b118;
      _swift_release(param_8);
      _swift_bridgeObjectRelease(param_6);
      _swift_release(lVar7);
    }
    puVar4 = puVar6;
    FUN_10088a400(puVar6);
    FUN_100632174();
    FUN_1005dfc80(param_1,param_2);
    _swift_bridgeObjectRelease(puVar6);
    _swift_bridgeObjectRelease(puVar4);
    _swift_release(param_3);
    _swift_release(lVar2);
  }
  return;
}



/* Address: 0x10088dd88 | FUN_10088dd88 */

void FUN_10088dd88(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  ulong local_58;
  
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = 1;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar11 = 2;
  if (param_4 != 0) {
    uVar11 = 0;
  }
  uVar3 = (ulong)uVar11;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar10 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  *(long *)(puVar10 + 0x20) = lVar2;
  *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar10 + 0x30) = puVar5;
  *(undefined ***)(puVar10 + 0x38) = &PTR_PTR_100eee590;
  puVar12 = puVar10;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar10 + 0x10);
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar12,uVar1 + 1,1,puVar10);
    }
    *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar12 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
  }
  lVar6 = 0;
  FUN_100889258();
  _swift_allocObject();
  *(undefined1 *)(lVar6 + 0x10) = 0;
  uVar1 = *(ulong *)(puVar12 + 0x10);
  lVar8 = uVar1 + 1;
  puVar10 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_100880850(puVar10,lVar8,1,puVar12);
  }
  *(long *)(puVar10 + 0x10) = lVar8;
  *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
  *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
  if ((param_7 & 1) != 0) {
    lVar7 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar7 + 0x10) = 0;
    lVar6 = uVar1 + 2;
    puVar12 = puVar10;
    if ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < lVar6) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar12,lVar6,1,puVar10);
    }
    *(long *)(puVar12 + 0x10) = lVar6;
    *(long *)(puVar12 + lVar8 * 0x10 + 0x20) = lVar7;
    *(undefined ***)(puVar12 + lVar8 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar10 = puVar12;
  }
  if (param_4 != 0) {
    FUN_10088f9d8(param_4,param_5,param_6);
    puVar12 = puVar10;
    _swift_bridgeObjectRetain(puVar10);
    FUN_10088f85c();
    _swift_bridgeObjectRelease(puVar10);
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar8 = param_4;
    FUN_100899024(param_4,lVar2,puVar12,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar8);
    puVar12 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar9 = puVar10;
    if (((ulong)puVar12 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
    }
    uVar1 = *(ulong *)(puVar9 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar9);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar8;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar8);
  }
  puVar12 = puVar10;
  FUN_10088a400(puVar10);
  FUN_100632174();
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(puVar12);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088e1bc | FUN_10088e1bc */

void FUN_10088e1bc(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined *puVar10;
  uint uVar11;
  undefined *puVar12;
  ulong local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8(param_1);
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = 1;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar11 = 2;
  if (param_4 != 0) {
    uVar11 = 0;
  }
  uVar3 = (ulong)uVar11;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar10 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar10 + 0x18) = 4;
  *(undefined8 *)(puVar10 + 0x10) = 2;
  *(long *)(puVar10 + 0x20) = lVar2;
  *(undefined ***)(puVar10 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar10 + 0x30) = puVar5;
  *(undefined ***)(puVar10 + 0x38) = &PTR_PTR_100eee590;
  puVar12 = puVar10;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar10 + 0x10);
    if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar1) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar12,uVar1 + 1,1,puVar10);
    }
    *(ulong *)(puVar12 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar12 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar12 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
  }
  lVar6 = 0;
  FUN_100889258();
  _swift_allocObject();
  *(undefined1 *)(lVar6 + 0x10) = 0;
  uVar1 = *(ulong *)(puVar12 + 0x10);
  lVar8 = uVar1 + 1;
  puVar10 = puVar12;
  if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar1) {
    puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
    FUN_100880850(puVar10,lVar8,1,puVar12);
  }
  *(long *)(puVar10 + 0x10) = lVar8;
  *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
  *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
  if ((param_7 & 1) != 0) {
    lVar7 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar7 + 0x10) = 0;
    lVar6 = uVar1 + 2;
    puVar12 = puVar10;
    if ((long)(*(ulong *)(puVar10 + 0x18) >> 1) < lVar6) {
      puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
      FUN_100880850(puVar12,lVar6,1,puVar10);
    }
    *(long *)(puVar12 + 0x10) = lVar6;
    *(long *)(puVar12 + lVar8 * 0x10 + 0x20) = lVar7;
    *(undefined ***)(puVar12 + lVar8 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar10 = puVar12;
  }
  if (param_4 != 0) {
    FUN_10088f9d8(param_4,param_5,param_6);
    puVar12 = puVar10;
    _swift_bridgeObjectRetain(puVar10);
    FUN_10088f85c();
    _swift_bridgeObjectRelease(puVar10);
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar8 = param_4;
    FUN_100899024(param_4,lVar2,puVar12,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar8);
    puVar12 = puVar10;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar9 = puVar10;
    if (((ulong)puVar12 & 1) == 0) {
      puVar9 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
    }
    uVar1 = *(ulong *)(puVar9 + 0x10);
    puVar10 = puVar9;
    if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar9);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar8;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar8);
  }
  puVar12 = puVar10;
  FUN_10088a400(puVar10);
  FUN_100632174();
  FUN_1005dfc80(param_1,param_2);
  _swift_bridgeObjectRelease(puVar10);
  _swift_bridgeObjectRelease(puVar12);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088e624 | FUN_10088e624 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10088e624(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  ulong local_58;
  
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = 1;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar9 = 2;
  if (param_4 != 0) {
    uVar9 = 0;
  }
  uVar3 = (ulong)uVar9;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar8 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(long *)(puVar8 + 0x20) = lVar2;
  *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar8 + 0x30) = puVar5;
  *(undefined ***)(puVar8 + 0x38) = &PTR_PTR_100eee590;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    puVar8 = puVar10;
  }
  if ((param_8 & 1) != 0) {
    lVar6 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    puVar8 = puVar10;
  }
  if ((param_7 & 1) != 0) {
    lVar6 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar8 = puVar10;
  }
  if (param_4 != 0) {
    puVar10 = puVar8;
    if (*(long *)(puVar8 + 0x10) == 0) {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
    }
    else {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar8);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_100899024(param_4,lVar2,puVar10,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar6);
    puVar10 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar6);
  }
  puVar10 = puVar8;
  FUN_10088a400(puVar8);
  FUN_100632174();
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088ea9c | FUN_10088ea9c */

/* WARNING: Type propagation algorithm not settling */

void FUN_10088ea9c(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  ulong local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8();
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = 1;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar9 = 2;
  if (param_4 != 0) {
    uVar9 = 0;
  }
  uVar3 = (ulong)uVar9;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar8 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(long *)(puVar8 + 0x20) = lVar2;
  *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar8 + 0x30) = puVar5;
  *(undefined ***)(puVar8 + 0x38) = &PTR_PTR_100eee590;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    puVar8 = puVar10;
  }
  if ((param_8 & 1) != 0) {
    lVar6 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    puVar8 = puVar10;
  }
  if ((param_7 & 1) != 0) {
    lVar6 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar8 = puVar10;
  }
  if (param_4 != 0) {
    puVar10 = puVar8;
    if (*(long *)(puVar8 + 0x10) == 0) {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
    }
    else {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar8);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_100899024(param_4,lVar2,puVar10,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar6);
    puVar10 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar6);
  }
  puVar10 = puVar8;
  FUN_10088a400(puVar8);
  FUN_100632174();
  FUN_1005dfc80(param_1,param_2);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088ef40 | FUN_10088ef40 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10088ef40(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  ulong local_58;
  
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = param_9;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar9 = 2;
  if (param_4 != 0) {
    uVar9 = 0;
  }
  uVar3 = (ulong)uVar9;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar8 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(long *)(puVar8 + 0x20) = lVar2;
  *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar8 + 0x30) = puVar5;
  *(undefined ***)(puVar8 + 0x38) = &PTR_PTR_100eee590;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    puVar8 = puVar10;
  }
  if ((param_8 & 1) != 0) {
    lVar6 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    puVar8 = puVar10;
  }
  if ((param_7 & 1) != 0) {
    lVar6 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar8 = puVar10;
  }
  if (param_4 != 0) {
    puVar10 = puVar8;
    if (*(long *)(puVar8 + 0x10) == 0) {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
    }
    else {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar8);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_100899024(param_4,lVar2,puVar10,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar6);
    puVar10 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar6);
  }
  puVar10 = puVar8;
  FUN_10088a400(puVar8);
  FUN_100632174();
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088f3b8 | FUN_10088f3b8 */

/* WARNING: Type propagation algorithm not settling */

void FUN_10088f3b8(undefined8 param_1,undefined8 param_2,ulong param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7,ulong param_8,
                  undefined1 param_9)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  ulong local_58;
  
  FUN_1005dfcb0();
  FUN_100627fb8();
  lVar2 = 0;
  FUN_100887fe4();
  _swift_allocObject();
  *(undefined2 *)(lVar2 + 0x10) = 0;
  *(undefined8 *)(lVar2 + 0x20) = 0x22;
  *(undefined8 *)(lVar2 + 0x18) = 0;
  *(undefined8 *)(lVar2 + 0x30) = 0;
  *(undefined8 *)(lVar2 + 0x38) = 0;
  *(undefined8 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x40) = param_9;
  FUN_1000f7830(&DAT_100fe99c8,&DAT_100c80cf0);
  _swift_allocObject();
  _swift_retain(lVar2);
  uVar9 = 2;
  if (param_4 != 0) {
    uVar9 = 0;
  }
  uVar3 = (ulong)uVar9;
  FUN_100889924(uVar3,0,0x14000,0x14000,0xfffe,0);
  uVar4 = *(undefined8 *)(uVar3 + 0x78);
  *(long *)(uVar3 + 0x78) = lVar2;
  _swift_release(uVar4);
  puVar8 = &DAT_100fe9588;
  FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
  _swift_allocObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(long *)(puVar8 + 0x20) = lVar2;
  *(undefined ***)(puVar8 + 0x28) = &PTR_PTR_100f091c0;
  local_58 = uVar3;
  FUN_1000f7830(&DAT_100fe99d0,&DAT_100c805a0);
  _swift_allocObject();
  _swift_retain(lVar2);
  _swift_retain(uVar3);
  puVar5 = &local_58;
  FUN_1006381a4(puVar5,0,1);
  *(ulong **)(puVar8 + 0x30) = puVar5;
  *(undefined ***)(puVar8 + 0x38) = &PTR_PTR_100eee590;
  if ((param_3 & 1) != 0) {
    uVar4 = 0;
    FUN_1008945ec();
    _swift_allocObject();
    FUN_10088fb7c();
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(undefined8 *)(puVar10 + uVar1 * 0x10 + 0x20) = uVar4;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09a18;
    puVar8 = puVar10;
  }
  if ((param_8 & 1) != 0) {
    lVar6 = 0;
    FUN_100889258();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f09790;
    puVar8 = puVar10;
  }
  if ((param_7 & 1) != 0) {
    lVar6 = 0;
    FUN_1008952c8();
    _swift_allocObject();
    *(undefined1 *)(lVar6 + 0x10) = 0;
    uVar1 = *(ulong *)(puVar8 + 0x10);
    puVar10 = puVar8;
    if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
      puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
      FUN_100880850(puVar10,uVar1 + 1,1,puVar8);
    }
    *(ulong *)(puVar10 + 0x10) = uVar1 + 1;
    *(long *)(puVar10 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar10 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a0f8;
    puVar8 = puVar10;
  }
  if (param_4 != 0) {
    puVar10 = puVar8;
    if (*(long *)(puVar8 + 0x10) == 0) {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
    }
    else {
      FUN_10088f9d8(param_4,param_5,param_6);
      _swift_bridgeObjectRetain(puVar8);
      FUN_10088f85c();
      _swift_bridgeObjectRelease(puVar8);
    }
    FUN_100899698(0);
    _swift_allocObject();
    _swift_retain(lVar2);
    _swift_retain(param_6);
    lVar6 = param_4;
    FUN_100899024(param_4,lVar2,puVar10,param_5,param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_retain(lVar6);
    puVar10 = puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar7 = puVar8;
    if (((ulong)puVar10 & 1) == 0) {
      puVar7 = (undefined *)0x0;
      FUN_100880850(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
    }
    uVar1 = *(ulong *)(puVar7 + 0x10);
    puVar8 = puVar7;
    if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
      FUN_100880850(puVar8,uVar1 + 1,1,puVar7);
    }
    *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
    *(long *)(puVar8 + uVar1 * 0x10 + 0x20) = lVar6;
    *(undefined ***)(puVar8 + uVar1 * 0x10 + 0x28) = &PTR_PTR_100f0a288;
    _swift_release(param_6);
    _swift_release(lVar6);
  }
  puVar10 = puVar8;
  FUN_10088a400(puVar8);
  FUN_100632174();
  FUN_1005dfc80(param_1,param_2);
  _swift_bridgeObjectRelease(puVar8);
  _swift_bridgeObjectRelease(puVar10);
  _swift_release(uVar3);
  _swift_release(lVar2);
  return;
}



/* Address: 0x10088f85c | FUN_10088f85c */

undefined * FUN_10088f85c(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088f944);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = &DAT_100fe9588;
      FUN_1000f7830(&DAT_100fe9588,&DAT_100c7fd00);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      puVar5 = puVar4 + -0x11;
      if (0x1f < (long)puVar4) {
        puVar5 = puVar4 + -0x20;
      }
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)puVar5 >> 4) << 1;
    }
    if (param_3 == param_4) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10088f940);
      (*pcVar2)();
    }
    puVar5 = &DAT_100fe9590;
    FUN_1000f7830(&DAT_100fe9590,&DAT_100c7fd08);
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_2 + param_3 * 0x10,lVar1,puVar5);
  }
  return puVar3;
}



/* Address: 0x10088f944 | FUN_10088f944 */

void FUN_10088f944(void)

{
  long unaff_x20;
  
  FUN_1005dfc80(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_bridgeObjectRelease();
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x10088f984 | FUN_10088f984 */

void FUN_10088f984(void)

{
  long unaff_x20;
  
  FUN_10088bf90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x49));
  return;
}



/* Address: 0x10088f9d8 | FUN_10088f9d8 */

void FUN_10088f9d8(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRetain();
    _swift_retain(param_3);
    return;
  }
  return;
}



/* Address: 0x10088fa04 | FUN_10088fa04 */

void FUN_10088fa04(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_release(param_3);
    return;
  }
  return;
}



/* Address: 0x10088fa30 | FUN_10088fa30 */

undefined8 FUN_10088fa30(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe99d8;
  FUN_1000f7830(&DAT_100fe99d8,&DAT_100c80c80);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10088fa78 | FUN_10088fa78 */

void FUN_10088fa78(undefined8 *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined2 uStack_78;
  char cStack_76;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined4 uStack_31;
  
  uVar1 = unaff_x20[1];
  if (uVar1 == unaff_x20[2]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088fb38);
    (*pcVar2)();
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088fb3c);
    (*pcVar2)();
  }
  if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088fb40);
    (*pcVar2)();
  }
  if (uVar1 < *(ulong *)(*unaff_x20 + 0x10)) {
    FUN_1000f8cac(*unaff_x20 + uVar1 * 0x48 + 0x20,&local_b8,&DAT_100fe90d0,&DAT_100c7f500);
    if (cStack_76 != -1) {
      uStack_48 = uStack_90;
      local_50 = local_98;
      uStack_31 = CONCAT31((int3)(CONCAT13(cStack_76,CONCAT21(uStack_78,uStack_79)) >> 8),uStack_79)
      ;
      local_40 = local_88;
      uStack_68 = uStack_b0;
      local_70 = local_b8;
      uStack_58 = uStack_a0;
      uStack_60 = local_a8;
      param_1[5] = uStack_90;
      param_1[4] = local_98;
      param_1[7] = CONCAT17(uStack_79,uStack_80);
      param_1[6] = local_88;
      *(undefined4 *)((long)param_1 + 0x3f) = uStack_31;
      param_1[1] = uStack_b0;
      *param_1 = local_b8;
      param_1[3] = uStack_a0;
      param_1[2] = local_a8;
      FUN_1008929a0(1);
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10088fb48);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10088fb44);
  (*pcVar2)();
}



/* Address: 0x10088fb48 | FUN_10088fb48 */

undefined8 FUN_10088fb48(void)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10088fb7c();
  return unaff_x20;
}



/* Address: 0x10088fb7c | FUN_10088fb7c */

void FUN_10088fb7c(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = 0x201;
  *(undefined1 *)(unaff_x20 + 0x12) = 0;
  CVar1.unknown = &DAT_100fe90d0;
  FUN_1000f7830(&DAT_100fe90d0,&DAT_100c7f500);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(1,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 1;
  *(undefined8 *)(_Var2.unknown + 0x28) = 0;
  *(undefined8 *)(_Var2.unknown + 0x20) = 0;
  *(undefined8 *)(_Var2.unknown + 0x38) = 0;
  *(undefined8 *)(_Var2.unknown + 0x30) = 0;
  *(undefined8 *)(_Var2.unknown + 0x48) = 0;
  *(undefined8 *)(_Var2.unknown + 0x40) = 0;
  *(undefined8 *)(_Var2.unknown + 0x58) = 0;
  *(undefined8 *)(_Var2.unknown + 0x50) = 0;
  _Var2.unknown[0x62] = 0xff;
  *(undefined2 *)(_Var2.unknown + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined **)(unaff_x20 + 0x18) = _Var2.unknown;
  *(undefined2 *)(unaff_x20 + 0x31) = 0x202;
  return;
}



/* Address: 0x10088fbf8 | FUN_10088fbf8 */

void FUN_10088fbf8(undefined8 param_1,Hasher param_2)

{
  String SVar1;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(0,param_2);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10088fc54 | FUN_10088fc54 */

void FUN_10088fc54(Hasher param_1,Hasher param_2)

{
  String SVar1;
  String *unaff_x20;
  
  SVar1 = *unaff_x20;
  Swift::Hasher::_combine(0,param_2);
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10088fc94 | FUN_10088fc94 */

void FUN_10088fc94(__int64 param_1,Hasher param_2)

{
  String SVar1;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  SVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(0,param_2);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10088fcec | FUN_10088fcec */

undefined1  [16] FUN_10088fcec(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  String SVar1;
  undefined1 auVar2 [16];
  String *unaff_x20;
  String SVar3;
  
  SVar1 = *unaff_x20;
  Swift::_StringGuts::grow(0x18,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  auVar2._8_8_ = 0x8000000100db3dd0;
  auVar2._0_8_ = 0xd000000000000016;
  return auVar2;
}



/* Address: 0x10088fd64 | FUN_10088fd64 */

void FUN_10088fd64(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  _swift_bridgeObjectRetain(param_5);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x10088fd98 | FUN_10088fd98 */

undefined1  [16] FUN_10088fd98(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String *unaff_x20;
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  
  Swift::_StringGuts::grow(0x12,param_2);
  SVar3 = *unaff_x20;
  Swift::_StringGuts::grow(0x18,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar3.bridgeObject = &DAT_e600000000000000;
  SVar3.str = (char *)0x20656c696620;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar3,SVar5);
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(unaff_x20[1],SVar6);
  SVar2.bridgeObject = &DAT_e600000000000000;
  SVar2.str = (char *)0x20656e696c20;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar2,SVar7);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar3,SVar8);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  auVar1._8_8_ = 0x8000000100db3dd0;
  auVar1._0_8_ = 0xd000000000000016;
  return auVar1;
}



/* Address: 0x10088feb0 | FUN_10088feb0 */

void FUN_10088feb0(undefined8 param_1,Hasher param_2)

{
  String SVar1;
  Hasher into;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  SVar1 = *unaff_x20;
  Swift::Hasher::_combine(0,param_2);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10088ff0c | thunk_FUN_10088fd98 */

void thunk_FUN_10088fd98(void)

{
  FUN_10088fd98();
  return;
}



/* Address: 0x10088ff10 | FUN_10088ff10 */

undefined1  [16] FUN_10088ff10(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  byte bVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auVar3 [16];
  String SVar4;
  byte local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar1 = *unaff_x20;
  if ((1 << (ulong)(bVar1 & 0x1f) & 0x3bU) == 0) {
    local_40 = 0;
    uStack_38 = 0;
    if (bVar1 == 2) {
      local_40 = 0;
      uStack_38 = 1;
      *unaff_x20 = 1;
    }
  }
  else {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x21,param_2);
    SVar2.bridgeObject = (void *)0x8000000100db3ec0;
    SVar2.str = (char *)0xd00000000000001f;
    SVar4.bridgeObject = param_4;
    SVar4.str = param_3;
    Swift::String::append(SVar2,SVar4);
    local_41 = bVar1;
    Swift::__print_unlocked
              (&local_41,&local_40,&DAT_100f09da8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    *unaff_x20 = 6;
  }
  auVar3._8_8_ = uStack_38;
  auVar3._0_8_ = local_40;
  return auVar3;
}


