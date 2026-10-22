/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008354e0 | FUN_1008354e0 */

void FUN_1008354e0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100835a98();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10083551c | FUN_10083551c */

void FUN_10083551c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100835730();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100835538 | FUN_100835538 */

void FUN_100835538(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100835860();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100835554 | FUN_100835554 */

void FUN_100835554(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100835950();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100835570 | FUN_100835570 */

void FUN_100835570(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100836cb0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008355a4 | FUN_1008355a4 */

void FUN_1008355a4(void)

{
  FUN_100835a98();
  return;
}



/* Address: 0x1008355c8 | FUN_1008355c8 */

undefined * FUN_1008355c8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10083570c);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe75a0;
    FUN_1000f7830(&DAT_100fe75a0,&DAT_100c7c6c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe71b8;
    FUN_1000f7830(&DAT_100fe71b8,&DAT_100c7c6d0);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x10083570c | FUN_10083570c */

void FUN_10083570c(void)

{
  FUN_100835a98();
  return;
}



/* Address: 0x100835730 | FUN_100835730 */

undefined * FUN_100835730(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100835860);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe74f0;
    FUN_1000f7830(&DAT_100fe74f0,&DAT_100c7c628);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe6f28;
    FUN_1000f7830(&DAT_100fe6f28,&USHORT_100c7ae10);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100835860 | FUN_100835860 */

undefined * FUN_100835860(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100835950);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe74e8;
    FUN_1000f7830(&DAT_100fe74e8,&DAT_100c7c620);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100835950 | FUN_100835950 */

undefined * FUN_100835950(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100835a50);
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
    puVar3 = &DAT_100fe74e0;
    FUN_1000f7830(&DAT_100fe74e0,&DAT_100c7c618);
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



/* Address: 0x100835a50 | FUN_100835a50 */

void FUN_100835a50(void)

{
  FUN_100835a98();
  return;
}



/* Address: 0x100835a74 | FUN_100835a74 */

void FUN_100835a74(void)

{
  FUN_100835a98();
  return;
}



/* Address: 0x100835a98 | FUN_100835a98 */

undefined *
FUN_100835a98(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100835bd8);
        (*pcVar3)();
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
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar4 = param_5;
    _malloc_size();
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    puVar4 = param_5;
  }
  puVar1 = puVar4 + 0x20;
  puVar2 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    FUN_1000f7830(param_7,param_8);
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar6,param_7);
  }
  else {
    if (puVar4 != param_4 || puVar2 + uVar6 * 0x28 <= puVar1) {
      _memmove(puVar1,puVar2,uVar6 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar4;
}



/* Address: 0x100835bd8 | FUN_100835bd8 */

void FUN_100835bd8(undefined8 param_1,undefined8 param_2)

{
  FUN_100835c14(param_1,param_2,&DAT_100fe75c0,&DAT_100c7c6f0);
  return;
}



/* Address: 0x100835bec | FUN_100835bec */

void FUN_100835bec(undefined8 param_1,undefined8 param_2)

{
  FUN_100835c14(param_1,param_2,&DAT_100fe7530,&DAT_100c7c658);
  return;
}



/* Address: 0x100835c00 | FUN_100835c00 */

void FUN_100835c00(undefined8 param_1,undefined8 param_2)

{
  FUN_100835c14(param_1,param_2,&DAT_100fe7520,&DAT_100c7c648);
  return;
}



/* Address: 0x100835c14 | FUN_100835c14 */

undefined * FUN_100835c14(long param_1,long param_2,undefined *param_3,undefined8 param_4)

{
  undefined *puVar1;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    FUN_1000f7830(param_3,param_4);
    _swift_allocObject();
    puVar1 = param_3;
    _malloc_size();
    *(long *)(param_3 + 0x10) = param_1;
    *(long *)(param_3 + 0x18) = ((long)(puVar1 + -0x20) / 0x28) * 2;
    puVar1 = param_3;
  }
  return puVar1;
}



/* Address: 0x100835c98 | FUN_100835c98 */

void FUN_100835c98(ulong *param_1)

{
  __int64 _Var1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  ulong uVar4;
  ulong minimumCapacity;
  ulong uVar5;
  undefined *local_68;
  ulong uStack_60;
  undefined1 auStack_58 [8];
  long local_50;
  ulong uStack_48;
  
  uVar4 = *param_1;
  uVar5 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar5 & 1) == 0) {
    FUN_100847460();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fe7548;
      FUN_1000f7830(&DAT_100fe7548,&DAT_100c7c670);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_100835da4(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_1008361f4(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x100835da4 | FUN_100835da4 */

void FUN_100835da4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  _StringGuts _Var4;
  undefined8 uVar5;
  undefined1 uVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  undefined8 *puVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  long *plVar23;
  long lVar24;
  long unaff_x21;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  undefined8 uVar29;
  long lVar30;
  undefined8 uVar31;
  long lVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar27 = param_3[1];
  if (0 < lVar27) {
    lVar16 = 0;
    do {
      lVar24 = lVar16 + 1;
      if (lVar24 < lVar27) {
        lVar25 = *param_3;
        puVar14 = (undefined8 *)(lVar25 + lVar24 * 0x28);
        _Var13.unknown = (undefined *)*puVar14;
        _Var4.unknown = (undefined *)puVar14[1];
        puVar14 = (undefined8 *)(lVar25 + lVar16 * 0x28);
        puVar12 = (undefined *)*puVar14;
        if (_Var13.unknown == puVar12 && _Var4.unknown == (undefined *)puVar14[1]) {
          bVar8 = false;
        }
        else {
          bVar8 = Swift::_stringCompareWithSmolCheck
                            (_Var13,_Var4,(_StringComparisonResult)(__int8)puVar12);
        }
        lVar19 = lVar16 + 2;
        lVar24 = lVar19;
        if (lVar19 < lVar27) {
          plVar22 = (long *)(lVar25 + lVar16 * 0x28 + 0x30);
          do {
            _Var13.unknown = (undefined *)plVar22[5];
            if ((undefined *)plVar22[4] == (undefined *)plVar22[-1] &&
                _Var13.unknown == (undefined *)*plVar22) {
              if (bVar8 != false) goto LAB_100835ea8;
            }
            else {
              bVar9 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar22[4],_Var13,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar22[-1]);
              lVar24 = lVar19;
              if (bVar8 != bVar9) break;
            }
            lVar19 = lVar19 + 1;
            plVar22 = plVar22 + 5;
            lVar24 = lVar27;
          } while (lVar27 != lVar19);
        }
        lVar19 = lVar24;
        if (bVar8 != false) {
LAB_100835ea8:
          if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361c8);
            (*pcVar7)();
          }
          lVar24 = lVar19;
          if (lVar16 < lVar19) {
            lVar15 = lVar19 * 0x28;
            lVar17 = lVar16 * 0x28;
            lVar27 = lVar16;
            do {
              lVar19 = lVar19 + -1;
              if (lVar27 != lVar19) {
                if (lVar25 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361e8);
                  (*pcVar7)();
                }
                puVar14 = (undefined8 *)(lVar25 + lVar17);
                uVar31 = puVar14[1];
                uVar29 = *puVar14;
                lVar1 = lVar25 + lVar15;
                uVar3 = puVar14[2];
                uVar5 = puVar14[3];
                uVar6 = *(undefined1 *)(puVar14 + 4);
                uVar21 = *(undefined8 *)(lVar1 + -8);
                uVar34 = *(undefined8 *)(lVar1 + -0x10);
                uVar33 = *(undefined8 *)(lVar1 + -0x18);
                uVar35 = *(undefined8 *)(lVar1 + -0x28);
                puVar14[1] = *(undefined8 *)(lVar1 + -0x20);
                *puVar14 = uVar35;
                puVar14[3] = uVar34;
                puVar14[2] = uVar33;
                puVar14[4] = uVar21;
                *(undefined8 *)(lVar1 + -0x20) = uVar31;
                *(undefined8 *)(lVar1 + -0x28) = uVar29;
                *(undefined8 *)(lVar1 + -0x18) = uVar3;
                *(undefined8 *)(lVar1 + -0x10) = uVar5;
                *(undefined1 *)(lVar1 + -8) = uVar6;
              }
              lVar27 = lVar27 + 1;
              lVar15 = lVar15 + -0x28;
              lVar17 = lVar17 + 0x28;
            } while (lVar27 < lVar19);
          }
        }
      }
      lVar27 = param_3[1];
      lVar25 = lVar24;
      if (lVar24 < lVar27) {
        if (SBORROW8(lVar24,lVar16)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361c4);
          (*pcVar7)();
        }
        if (lVar24 - lVar16 < param_4) {
          if (SCARRY8(lVar16,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361cc);
            (*pcVar7)();
          }
          lVar19 = lVar16 + param_4;
          if (lVar27 <= lVar16 + param_4) {
            lVar19 = lVar27;
          }
          if (lVar19 < lVar16) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361d0);
            (*pcVar7)();
          }
          if (lVar24 != lVar19) {
            lVar15 = *param_3;
            plVar22 = (long *)(lVar15 + lVar24 * 0x28 + -0x28);
            lVar27 = lVar16 - lVar24;
            lVar17 = lVar27;
            plVar23 = plVar22;
LAB_100835fa8:
            do {
              _Var13.unknown = (undefined *)plVar22[5];
              if ((_Var13.unknown != (undefined *)*plVar22 ||
                   (undefined *)plVar22[6] != (undefined *)plVar22[1]) &&
                 (bVar8 = Swift::_stringCompareWithSmolCheck
                                    (_Var13,(undefined *)plVar22[6],
                                     (_StringComparisonResult)(__int8)(undefined *)*plVar22), bVar8)
                 ) {
                if (lVar15 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361d4);
                  (*pcVar7)();
                }
                lVar32 = plVar22[6];
                lVar30 = plVar22[5];
                lVar25 = plVar22[7];
                lVar1 = plVar22[8];
                plVar22[6] = plVar22[1];
                plVar22[5] = *plVar22;
                plVar22[8] = plVar22[3];
                plVar22[7] = plVar22[2];
                lVar20 = plVar22[4];
                plVar22[1] = lVar32;
                *plVar22 = lVar30;
                plVar22[2] = lVar25;
                plVar22[3] = lVar1;
                *(char *)(plVar22 + 4) = (char)plVar22[9];
                plVar22[9] = lVar20;
                bVar8 = lVar27 != -1;
                lVar27 = lVar27 + 1;
                plVar22 = plVar22 + -5;
                if (bVar8) goto LAB_100835fa8;
              }
              lVar24 = lVar24 + 1;
              plVar22 = plVar23 + 5;
              lVar27 = lVar17 + -1;
              lVar25 = lVar19;
              lVar17 = lVar27;
              plVar23 = plVar22;
            } while (lVar24 != lVar19);
          }
        }
      }
      puVar12 = local_58;
      if (lVar25 < lVar16) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361b4);
        (*pcVar7)();
      }
      puVar10 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar11 = puVar12;
      if (((ulong)puVar10 & 1) == 0) {
        puVar11 = (undefined *)0x0;
        FUN_1008441e8(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar28 = *(ulong *)(puVar11 + 0x10);
      puVar12 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar28) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
        FUN_1008441e8(puVar12,uVar28 + 1,1,puVar11);
      }
      *(ulong *)(puVar12 + 0x10) = uVar28 + 1;
      *(long *)(puVar12 + uVar28 * 0x10 + 0x20) = lVar16;
      *(long *)(puVar12 + uVar28 * 0x10 + 0x28) = lVar25;
      local_58 = puVar12;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361ec);
        (*pcVar7)();
      }
      FUN_1007ff1f0(&local_58,*param_1,param_3);
      puVar12 = local_58;
      if (unaff_x21 != 0) goto LAB_100836184;
      lVar27 = param_3[1];
      lVar16 = lVar25;
    } while (lVar25 < lVar27);
  }
  puVar12 = local_58;
  lVar27 = *param_1;
  if (lVar27 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361f4);
    (*pcVar7)();
  }
  puVar10 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar10 & 1) == 0) {
    FUN_100844370();
  }
  puVar26 = (ulong *)(puVar12 + 0x10);
  uVar28 = *puVar26;
  while (1 < uVar28) {
    lVar16 = *param_3;
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361f0);
      (*pcVar7)();
    }
    plVar22 = (long *)(puVar12 + uVar28 * 0x10);
    lVar24 = *plVar22;
    puVar2 = puVar26 + uVar28 * 2;
    uVar18 = puVar2[1];
    FUN_1007ff460(lVar16 + lVar24 * 0x28,lVar16 + *puVar2 * 0x28,lVar16 + uVar18 * 0x28,lVar27);
    if (unaff_x21 != 0) break;
    if ((long)uVar18 < lVar24) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361b8);
      (*pcVar7)();
    }
    if (*puVar26 <= uVar28 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361bc);
      (*pcVar7)();
    }
    *plVar22 = lVar24;
    plVar22[1] = uVar18;
    uVar18 = *puVar26;
    lVar16 = uVar18 - uVar28;
    if (uVar18 < uVar28) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008361c0);
      (*pcVar7)();
    }
    uVar28 = uVar18 - 1;
    _memmove(puVar2,puVar2 + 2,lVar16 * 0x10);
    *puVar26 = uVar28;
  }
LAB_100836184:
  _swift_bridgeObjectRelease(puVar12);
  return;
}



/* Address: 0x1008361f4 | FUN_1008361f4 */

void FUN_1008361f4(long param_1,long param_2,long param_3,long *param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  _StringGuts _Var5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_3 != param_2) {
    lVar7 = *param_4;
    plVar8 = (long *)(lVar7 + param_3 * 0x28 + -0x28);
    param_1 = param_1 - param_3;
    lVar10 = param_1;
    plVar9 = plVar8;
LAB_100836278:
    do {
      _Var5.unknown = (undefined *)plVar8[5];
      if ((_Var5.unknown != (undefined *)*plVar8 || (undefined *)plVar8[6] != (undefined *)plVar8[1]
          ) && (bVar4 = Swift::_stringCompareWithSmolCheck
                                  (_Var5,(undefined *)plVar8[6],
                                   (_StringComparisonResult)(__int8)(undefined *)*plVar8), bVar4)) {
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008362e0);
          (*pcVar3)();
        }
        lVar12 = plVar8[6];
        lVar11 = plVar8[5];
        lVar1 = plVar8[7];
        lVar2 = plVar8[8];
        plVar8[6] = plVar8[1];
        plVar8[5] = *plVar8;
        plVar8[8] = plVar8[3];
        plVar8[7] = plVar8[2];
        lVar6 = plVar8[4];
        plVar8[1] = lVar12;
        *plVar8 = lVar11;
        plVar8[2] = lVar1;
        plVar8[3] = lVar2;
        *(char *)(plVar8 + 4) = (char)plVar8[9];
        plVar8[9] = lVar6;
        bVar4 = param_1 != -1;
        param_1 = param_1 + 1;
        plVar8 = plVar8 + -5;
        if (bVar4) goto LAB_100836278;
      }
      param_3 = param_3 + 1;
      plVar8 = plVar9 + 5;
      param_1 = lVar10 + -1;
      lVar10 = param_1;
      plVar9 = plVar8;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1008362e0 | FUN_1008362e0 */

UnsafeMutablePointer
FUN_1008362e0(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100836664);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100836368:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_100836424;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1008365b0;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1008366cc(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1008366cc(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1008365c4:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_100836424:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008366cc);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1008366cc(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1008366cc(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1008365b0;
  goto LAB_100836368;
LAB_1008365b0:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1008366cc(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1008366cc(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100836688);
    (*pcVar2)();
  }
  goto LAB_1008365c4;
}



/* Address: 0x1008366cc | FUN_1008366cc */

undefined * FUN_1008366cc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008367d4);
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
    puVar3 = &DAT_100fe74f8;
    FUN_1000f7830(&DAT_100fe74f8,&DAT_100c7c638);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008367d4 | FUN_1008367d4 */

void FUN_1008367d4(void)

{
  FUN_1008367e0();
  return;
}



/* Address: 0x1008367e0 | FUN_1008367e0 */

undefined *
FUN_1008367e0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008368f4);
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
    puVar3 = &DAT_100fe7540;
    FUN_1000f7830(&DAT_100fe7540,&DAT_100c7c668);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x1008368f4 | FUN_1008368f4 */

void FUN_1008368f4(void)

{
  FUN_100836900();
  return;
}



/* Address: 0x100836900 | FUN_100836900 */

undefined *
FUN_100836900(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100836a2c);
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
    puVar3 = &DAT_100fe75a8;
    FUN_1000f7830(&DAT_100fe75a8,&DAT_100c7c6d8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f040c0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x100836a2c | FUN_100836a2c */

void FUN_100836a2c(void)

{
  FUN_1006a2bb8();
  return;
}



/* Address: 0x100836a50 | FUN_100836a50 */

void FUN_100836a50(void)

{
  FUN_1006a2bb8();
  return;
}



/* Address: 0x100836a74 | FUN_100836a74 */

undefined * FUN_100836a74(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100836ba4);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = &DAT_100fe7570;
    FUN_1000f7830(&DAT_100fe7570,&DAT_100c7c690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe7578;
    FUN_1000f7830(&DAT_100fe7578,&DAT_100c7c698);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100836ba4 | FUN_100836ba4 */

undefined * FUN_100836ba4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100836c94);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fe74d0;
    FUN_1000f7830(&DAT_100fe74d0,&DAT_100c7c608);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x100836c94 | FUN_100836c94 */

void FUN_100836c94(void)

{
  FUN_100836cb0();
  return;
}



/* Address: 0x100836cb0 | FUN_100836cb0 */

undefined *
FUN_100836cb0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  
  uVar4 = param_2;
  if ((param_3 & 1) != 0) {
    uVar4 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar4 < (long)param_2) {
      if ((long)(uVar4 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100836db4);
        (*pcVar2)();
      }
      uVar4 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar4 <= (long)param_2) {
        uVar4 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar4 <= (long)uVar6) {
    uVar4 = uVar6;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar4 != 0) {
    FUN_1000f7830(param_5,param_6);
    _swift_allocObject();
    puVar3 = param_5;
    _malloc_size();
    puVar5 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar5 = puVar3 + -0x20;
    }
    *(ulong *)(param_5 + 0x10) = uVar6;
    *(long *)(param_5 + 0x18) = ((long)puVar5 >> 3) << 1;
    puVar5 = param_5;
  }
  puVar3 = puVar5 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar3,puVar1,uVar6 << 3);
  }
  else {
    if (puVar5 != param_4 || puVar1 + uVar6 * 8 <= puVar3) {
      _memmove(puVar3,puVar1,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_7)(param_4);
  return puVar5;
}



/* Address: 0x100836db4 | FUN_100836db4 */

void FUN_100836db4(long param_1,uint param_2,long *param_3)

{
  long lVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined *puVar6;
  char *pcVar7;
  ulong uVar8;
  _StringGuts _Var9;
  char *pcVar10;
  undefined *puVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  ulong local_80;
  ulong uStack_78;
  StaticString local_70;
  __uint64 _Stack_68;
  undefined *local_58;
  
  uVar12 = *(ulong *)(param_1 + 0x10);
  if (uVar12 != 0) {
    uVar19 = *(ulong *)(param_1 + 0x20);
    uVar18 = *(ulong *)(param_1 + 0x28);
    uVar3 = *(undefined8 *)(param_1 + 0x30);
    uVar21 = *(undefined8 *)(param_1 + 0x38);
    uVar4 = *(undefined1 *)(param_1 + 0x40);
    lVar17 = *param_3;
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar21);
    uVar20 = uVar19;
    uVar8 = uVar18;
    FUN_100071370();
    lVar13 = *(long *)(lVar17 + 0x10);
    uVar14 = (ulong)~(uint)uVar8 & 1;
    lVar1 = lVar13 + uVar14;
    if (SCARRY8(lVar13,uVar14)) {
LAB_1008370bc:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008370c0);
      (*pcVar5)();
    }
    if (*(long *)(lVar17 + 0x18) < lVar1) {
      FUN_100845b38(lVar1,param_2 & 1);
      uVar20 = uVar19;
      uVar14 = uVar18;
      FUN_100071370();
      if (((uint)uVar8 & 1) != ((uint)uVar14 & 1)) {
LAB_100836e6c:
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100836e7c);
        (*pcVar5)();
      }
    }
    else if ((param_2 & 1) == 0) {
      FUN_100844ba0();
    }
    if ((uVar8 & 1) != 0) {
LAB_100836e84:
      puVar11 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      puVar6 = PTR___type_metadata_for_Swift__MergeError_100eacdf0;
      _swift_allocError(PTR___type_metadata_for_Swift__MergeError_100eacdf0,
                        PTR___protocol_witness_table_for_Swift__MergeError___Swift_Error_in_Swift_100eacdf8
                        ,0,0);
      _swift_willThrow();
      local_58 = puVar6;
      _swift_errorRetain(puVar6);
      pcVar7 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _Var9.unknown = (undefined *)&local_58;
      pcVar10 = pcVar7;
      _swift_dynamicCast();
      if (((ulong)pcVar7 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
        _swift_bridgeObjectRelease(uVar18);
        _swift_bridgeObjectRelease(uVar21);
        _swift_errorRelease(local_58);
        return;
      }
      local_70.unknown = (undefined *)0x0;
      _Stack_68 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1e,_Var9);
      SVar23.bridgeObject = (void *)0x8000000100da6c70;
      SVar23.str = (char *)0xd00000000000001b;
      SVar26.bridgeObject = puVar11;
      SVar26.str = pcVar10;
      Swift::String::append(SVar23,SVar26);
      pcVar7 = PTR___type_metadata_for_Swift_String_100eac208;
      puVar11 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
      local_80 = uVar19;
      uStack_78 = uVar18;
      Swift::__print_unlocked
                (&local_80,&local_70,PTR___type_metadata_for_Swift_String_100eac208,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      SVar24.bridgeObject = (void *)0xe100000000000000;
      SVar24.str = (char *)0x27;
      SVar27.bridgeObject = puVar11;
      SVar27.str = pcVar7;
      Swift::String::append(SVar24,SVar27);
      SVar25.bridgeObject = (void *)0x2;
      SVar25.str = (char *)0xb;
      Swift::_assertionFailure((StaticString)0x100d8deb0,SVar25,local_70,_Stack_68,0xda6c60);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100837174);
      (*pcVar5)();
    }
    lVar13 = *param_3;
    lVar1 = lVar13 + (uVar20 >> 6) * 8;
    *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar20 & 0x3f);
    puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar20 * 0x10);
    *puVar2 = uVar19;
    puVar2[1] = uVar18;
    puVar15 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar20 * 0x18);
    *puVar15 = uVar3;
    puVar15[1] = uVar21;
    *(undefined1 *)(puVar15 + 2) = uVar4;
    if (SCARRY8(*(long *)(lVar13 + 0x10),1)) {
LAB_1008370c0:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008370c4);
      (*pcVar5)();
    }
    *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
    if (uVar12 != 1) {
      puVar22 = (undefined1 *)(param_1 + 0x68);
      uVar20 = 1;
      do {
        if (*(ulong *)(param_1 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1008370c8);
          (*pcVar5)();
        }
        uVar19 = *(ulong *)(puVar22 + -0x20);
        uVar18 = *(ulong *)(puVar22 + -0x18);
        uVar3 = *(undefined8 *)(puVar22 + -0x10);
        uVar21 = *(undefined8 *)(puVar22 + -8);
        uVar4 = *puVar22;
        lVar17 = *param_3;
        _swift_bridgeObjectRetain(uVar18);
        _swift_bridgeObjectRetain(uVar21);
        uVar8 = uVar19;
        uVar14 = uVar18;
        FUN_100071370();
        lVar13 = *(long *)(lVar17 + 0x10);
        uVar16 = (ulong)~(uint)uVar14 & 1;
        lVar1 = lVar13 + uVar16;
        if (SCARRY8(lVar13,uVar16)) goto LAB_1008370bc;
        if (*(long *)(lVar17 + 0x18) < lVar1) {
          FUN_100845b38(lVar1,1);
          uVar8 = uVar19;
          uVar16 = uVar18;
          FUN_100071370();
          if (((uint)uVar14 & 1) != ((uint)uVar16 & 1)) goto LAB_100836e6c;
        }
        if ((uVar14 & 1) != 0) goto LAB_100836e84;
        lVar13 = *param_3;
        lVar1 = lVar13 + (uVar8 >> 6) * 8;
        *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (uVar8 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar13 + 0x30) + uVar8 * 0x10);
        *puVar2 = uVar19;
        puVar2[1] = uVar18;
        puVar15 = (undefined8 *)(*(long *)(lVar13 + 0x38) + uVar8 * 0x18);
        *puVar15 = uVar3;
        puVar15[1] = uVar21;
        *(undefined1 *)(puVar15 + 2) = uVar4;
        if (SCARRY8(*(long *)(lVar13 + 0x10),1)) goto LAB_1008370c0;
        uVar20 = uVar20 + 1;
        *(long *)(lVar13 + 0x10) = *(long *)(lVar13 + 0x10) + 1;
        puVar22 = puVar22 + 0x28;
      } while (uVar12 != uVar20);
    }
  }
  _swift_bridgeObjectRelease(param_1);
  return;
}



/* Address: 0x100837174 | FUN_100837174 */

/* WARNING: Removing unreachable block (ram,0x000100837274) */

uint FUN_100837174(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  uint uVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  void *pvVar6;
  void *pvVar7;
  String SVar8;
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_100838618();
  _swift_bridgeObjectRetain(param_4);
  SVar8 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar6 = SVar8.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar6 >> 0x3c & 1) != 0) {
    FUN_1008373f4();
    _swift_bridgeObjectRelease(pvVar6);
    puVar1 = local_50;
    pvVar6 = SVar8.bridgeObject;
  }
  local_50 = SVar8.str;
  pvVar7 = SVar8.bridgeObject;
  if (((ulong)pvVar6 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar5 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar5.unknown = (undefined *)(((ulong)pvVar7 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    FUN_1005272ec(UVar5.unknown);
    uVar3 = (uint)UVar5.unknown;
  }
  else {
    uStack_48 = (ulong)pvVar7 & 0xffffffffffffff;
    ppuVar4 = &local_50;
    FUN_1005272ec(ppuVar4,(ulong)pvVar7 >> 0x38 & 0xf,param_5);
    uVar3 = (uint)ppuVar4;
  }
  _swift_bridgeObjectRelease(pvVar7);
  return uVar3 & 0xff | (uVar3 >> 8 & 0xff) << 8;
}



/* Address: 0x100837280 | FUN_100837280 */

/* WARNING: Removing unreachable block (ram,0x000100837374) */

undefined1  [16] FUN_100837280(undefined *param_1,ulong param_2,undefined8 param_3)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_40;
  ulong uStack_38;
  
  local_40 = param_1;
  uStack_38 = param_2;
  _swift_bridgeObjectRetain(param_2);
  SVar6 = Swift::String::_init
                    (&local_40,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                     ,
                     PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                    );
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_40;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1008373f4();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_40;
    pvVar4 = SVar6.bridgeObject;
  }
  local_40 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_40;
      local_40 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_40 & 0xffffffffffff);
      local_40 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_38 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_40;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_3);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x100837380 | FUN_100837380 */

void FUN_100837380(undefined1 *param_1,byte *param_2)

{
  bool bVar1;
  
  if (*param_2 < 0x21 && (1L << ((ulong)*param_2 & 0x3f) & 0x100003e01U) != 0) {
    *param_1 = 0;
    return;
  }
  __swift_stdlib_strtod_clocale();
  if (param_2 == (byte *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = *param_2 == 0;
  }
  *param_1 = bVar1;
  return;
}



/* Address: 0x1008373f4 | FUN_1008373f4 */

undefined1  [16]
FUN_1008373f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_100837444();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x100837444 | FUN_100837444 */

String FUN_100837444(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_100837588(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100837544);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_10083747c;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_10083747c:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x100837588 | FUN_100837588 */

undefined * FUN_100837588(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fe74d0;
    FUN_1000f7830(&DAT_100fe74d0,&DAT_100c7c608);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1008375f8 | FUN_1008375f8 */

long FUN_1008375f8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  ulong *puVar14;
  long lVar15;
  ulong uVar16;
  
  puVar14 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar16 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar16 = uVar16 & *puVar14;
  if (param_2 == (undefined8 *)0x0) {
    lVar15 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008377a4);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar13 = 0;
    uVar12 = 0x3f - uVar11 >> 6;
    lVar15 = lVar8;
    while( true ) {
      while (uVar16 == 0) {
        bVar7 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1008377a0);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar15) {
          uVar16 = 0;
          if ((long)uVar12 <= lVar8 + 1) {
            uVar12 = lVar8 + 1;
          }
          lVar15 = uVar12 - 1;
          param_3 = lVar13;
          goto LAB_100837744;
        }
        uVar16 = puVar14[lVar15];
      }
      lVar13 = lVar13 + 1;
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar16 = uVar16 - 1 & uVar16;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
      uVar3 = puVar1[1];
      puVar10 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9 * 0x18);
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = *(undefined1 *)(puVar10 + 2);
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      *(undefined1 *)(param_2 + 4) = uVar5;
      if (lVar13 == param_3) break;
      param_2 = param_2 + 5;
      _swift_bridgeObjectRetain();
      FUN_1004a7398(uVar2,uVar4,uVar5);
      lVar8 = lVar15;
    }
    _swift_bridgeObjectRetain();
    FUN_1004a7398(uVar2,uVar4,uVar5);
  }
LAB_100837744:
  *param_1 = param_4;
  param_1[1] = (long)puVar14;
  param_1[2] = ~uVar11;
  param_1[3] = lVar15;
  param_1[4] = uVar16;
  return param_3;
}



/* Address: 0x1008377a4 | FUN_1008377a4 */

long FUN_1008377a4(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  
  puVar12 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar14 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar14 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar14 = uVar14 & *puVar12;
  if (param_2 == (undefined8 *)0x0) {
    lVar16 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar16 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100837934);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar15 = 0;
    uVar13 = 0x3f - uVar11 >> 6;
    lVar16 = lVar8;
    while( true ) {
      while (uVar14 == 0) {
        bVar7 = SCARRY8(lVar16,1);
        lVar16 = lVar16 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100837930);
          (*pcVar6)();
        }
        if ((long)uVar13 <= lVar16) {
          uVar14 = 0;
          if ((long)uVar13 <= lVar8 + 1) {
            uVar13 = lVar8 + 1;
          }
          lVar16 = uVar13 - 1;
          param_3 = lVar15;
          goto LAB_1008378e4;
        }
        uVar14 = puVar12[lVar16];
      }
      lVar15 = lVar15 + 1;
      uVar9 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar14 = uVar14 - 1 & uVar14;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar16 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
      uVar3 = puVar1[1];
      puVar10 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9 * 0x18);
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = *(undefined1 *)(puVar10 + 2);
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      *(undefined1 *)(param_2 + 4) = uVar5;
      if (lVar15 == param_3) break;
      param_2 = param_2 + 5;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar4);
      lVar8 = lVar16;
    }
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar4);
  }
LAB_1008378e4:
  *param_1 = param_4;
  param_1[1] = (long)puVar12;
  param_1[2] = ~uVar11;
  param_1[3] = lVar16;
  param_1[4] = uVar14;
  return param_3;
}



/* Address: 0x100837934 | FUN_100837934 */

long FUN_100837934(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  ulong *puVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  
  puVar13 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar15 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar15 = uVar15 & *puVar13;
  if (param_2 == (undefined8 *)0x0) {
    lVar14 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar14 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100837ad8);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar16 = 0;
    uVar12 = 0x3f - uVar11 >> 6;
    lVar14 = lVar8;
    while( true ) {
      while (uVar15 == 0) {
        bVar7 = SCARRY8(lVar14,1);
        lVar14 = lVar14 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100837ad4);
          (*pcVar6)();
        }
        if ((long)uVar12 <= lVar14) {
          uVar15 = 0;
          if ((long)uVar12 <= lVar8 + 1) {
            uVar12 = lVar8 + 1;
          }
          lVar14 = uVar12 - 1;
          param_3 = lVar16;
          goto LAB_100837a7c;
        }
        uVar15 = puVar13[lVar14];
      }
      lVar16 = lVar16 + 1;
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar15 = uVar15 - 1 & uVar15;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar14 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
      uVar3 = puVar1[1];
      puVar10 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9 * 0x18);
      uVar2 = *puVar10;
      uVar4 = puVar10[1];
      uVar5 = *(undefined1 *)(puVar10 + 2);
      *param_2 = *puVar1;
      param_2[1] = uVar3;
      param_2[2] = uVar2;
      param_2[3] = uVar4;
      *(undefined1 *)(param_2 + 4) = uVar5;
      if (lVar16 == param_3) break;
      param_2 = param_2 + 5;
      _swift_bridgeObjectRetain();
      FUN_1001037b4(uVar2,uVar4);
      lVar8 = lVar14;
    }
    _swift_bridgeObjectRetain();
    FUN_1001037b4(uVar2,uVar4);
  }
LAB_100837a7c:
  *param_1 = param_4;
  param_1[1] = (long)puVar13;
  param_1[2] = ~uVar11;
  param_1[3] = lVar14;
  param_1[4] = uVar15;
  return param_3;
}



/* Address: 0x100837ad8 | FUN_100837ad8 */

long FUN_100837ad8(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  code *pcVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong *puVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  puVar12 = (ulong *)(param_4 + 0x40);
  uVar11 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if (-uVar11 < 0x40) {
    uVar17 = ~(-1L << (-uVar11 & 0x3f));
  }
  uVar17 = uVar17 & *puVar12;
  if (param_2 == (undefined8 *)0x0) {
    lVar15 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar15 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100837ca8);
      (*pcVar6)();
    }
    lVar8 = 0;
    lVar14 = 0;
    uVar13 = 0x3f - uVar11 >> 6;
    lVar15 = lVar8;
    while( true ) {
      while (uVar17 == 0) {
        bVar7 = SCARRY8(lVar15,1);
        lVar15 = lVar15 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100837ca4);
          (*pcVar6)();
        }
        if ((long)uVar13 <= lVar15) {
          uVar17 = 0;
          if ((long)uVar13 <= lVar8 + 1) {
            uVar13 = lVar8 + 1;
          }
          lVar15 = uVar13 - 1;
          param_3 = lVar14;
          goto LAB_100837c3c;
        }
        uVar17 = puVar12[lVar15];
      }
      lVar14 = lVar14 + 1;
      uVar9 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar15 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar9 * 0x10);
      puVar10 = (undefined8 *)(*(long *)(param_4 + 0x38) + uVar9 * 0x18);
      uVar2 = *puVar10;
      uVar3 = puVar10[1];
      uVar4 = *(undefined1 *)(puVar10 + 2);
      uVar5 = *(undefined1 *)((long)puVar10 + 0x11);
      uVar16 = puVar1[1];
      uVar18 = *puVar1;
      param_2[1] = puVar1[1];
      *param_2 = uVar18;
      param_2[2] = uVar2;
      param_2[3] = uVar3;
      *(undefined1 *)(param_2 + 4) = uVar4;
      *(undefined1 *)((long)param_2 + 0x21) = uVar5;
      if (lVar14 == param_3) break;
      param_2 = param_2 + 5;
      _swift_bridgeObjectRetain(uVar18);
      _swift_bridgeObjectRetain(uVar16);
      FUN_1007fb2a0(uVar2,uVar3,uVar4);
      lVar8 = lVar15;
    }
    _swift_bridgeObjectRetain(uVar18);
    _swift_bridgeObjectRetain(uVar16);
    FUN_1007fb2a0(uVar2,uVar3,uVar4);
  }
LAB_100837c3c:
  *param_1 = param_4;
  param_1[1] = (long)puVar12;
  param_1[2] = ~uVar11;
  param_1[3] = lVar15;
  param_1[4] = uVar17;
  return param_3;
}



/* Address: 0x100837ca8 | FUN_100837ca8 */

undefined * FUN_100837ca8(long param_1,code *param_2)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  code *pcVar12;
  Bucket BVar13;
  long lVar14;
  ulong *puVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar16 = *(long *)(param_1 + 0x10);
  if (lVar16 != 0) {
    FUN_1008354e0(0,lVar16,0);
    _Var1.unknown = (undefined *)(param_1 + 0x40);
    BVar13 = Swift::_HashTable::get_startBucket(_Var1);
    lVar14 = 0;
    iVar7 = *(int *)(param_1 + 0x24);
    do {
      if ((ulong)BVar13.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f3c);
        (*pcVar12)();
      }
      uVar19 = (ulong)BVar13.offset >> 6;
      uVar20 = 1L << (BVar13.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar19 * 8) & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f40);
        (*pcVar12)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f44);
        (*pcVar12)();
      }
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + BVar13.offset * 0x10);
      uVar3 = *puVar2;
      uVar5 = puVar2[1];
      puVar2 = (undefined8 *)(*(long *)(param_1 + 0x38) + BVar13.offset * 0x10);
      uVar4 = *puVar2;
      uVar6 = puVar2[1];
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      (*param_2)(&local_88,uVar3,uVar5,uVar4,uVar6);
      uVar11 = local_68;
      uVar10 = uStack_70;
      uVar9 = local_78;
      uVar4 = uStack_80;
      uVar3 = local_88;
      _swift_bridgeObjectRelease(uVar6);
      _swift_bridgeObjectRelease(uVar5);
      uVar17 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar17) {
        FUN_1008354e0(1 < *(ulong *)(puVar8 + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar17 + 1;
      *(undefined8 *)(puVar8 + uVar17 * 0x28 + 0x20) = uVar3;
      *(undefined8 *)(puVar8 + uVar17 * 0x28 + 0x28) = uVar4;
      *(undefined8 *)(puVar8 + uVar17 * 0x28 + 0x30) = uVar9;
      *(undefined8 *)(puVar8 + uVar17 * 0x28 + 0x38) = uVar10;
      puVar8[uVar17 * 0x28 + 0x40] = uVar11;
      uVar17 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar17 <= (ulong)BVar13.offset) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f48);
        (*pcVar12)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar19 * 8) & uVar20) == 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f4c);
        (*pcVar12)();
      }
      if (iVar7 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x100837f50);
        (*pcVar12)();
      }
      uVar20 = *(ulong *)(_Var1.unknown + uVar19 * 8) & -2L << (BVar13.offset & 0x3fU);
      if (uVar20 == 0) {
        lVar18 = uVar19 << 6;
        puVar15 = (ulong *)(param_1 + 0x48 + uVar19 * 8);
        do {
          uVar19 = uVar19 + 1;
          if (uVar17 + 0x3f >> 6 <= uVar19) {
            FUN_10000cae0(BVar13.offset,iVar7,0);
            goto LAB_100837d4c;
          }
          uVar20 = *puVar15;
          lVar18 = lVar18 + 0x40;
          puVar15 = puVar15 + 1;
        } while (uVar20 == 0);
        FUN_10000cae0(BVar13.offset,iVar7,0);
        uVar19 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) + lVar18;
      }
      else {
        uVar19 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
        uVar19 = (uVar19 & 0xcccccccccccccccc) >> 2 | (uVar19 & 0x3333333333333333) << 2;
        uVar19 = (uVar19 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar19 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar19 = (uVar19 & 0xff00ff00ff00ff00) >> 8 | (uVar19 & 0xff00ff00ff00ff) << 8;
        uVar19 = (uVar19 & 0xffff0000ffff0000) >> 0x10 | (uVar19 & 0xffff0000ffff) << 0x10;
        uVar17 = LZCOUNT(uVar19 >> 0x20 | uVar19 << 0x20) | BVar13.offset & 0x7fffffffffffffc0U;
      }
LAB_100837d4c:
      lVar14 = lVar14 + 1;
      BVar13.offset = uVar17;
    } while (lVar14 != lVar16);
  }
  return puVar8;
}



/* Address: 0x100837f50 | FUN_100837f50 */

void FUN_100837f50(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_release(param_2);
    return;
  }
  if (param_3 == '\0') {
    _swift_bridgeObjectRelease();
    return;
  }
  return;
}



/* Address: 0x100837f70 | FUN_100837f70 */

undefined8 FUN_100837f70(char *param_1,void *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  _StringComparisonResult expecting;
  undefined8 uVar4;
  String SVar5;
  _StringGuts _Var3;
  
  SVar5.bridgeObject = param_2;
  SVar5.str = param_1;
  SVar5 = Swift::String::lowercased(SVar5);
  _Var3.unknown = SVar5.bridgeObject;
  _Var2.unknown = SVar5.str;
  if ((_Var2.unknown != (undefined *)0x736579) || (_Var3.unknown != (undefined *)0xe300000000000000)
     ) {
    expecting.value = SVar5.str._0_1_;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x736579,(_StringGuts)0xe300000000000000,expecting);
    if ((!bVar1) &&
       (((_Var2.unknown != (undefined *)0x31 || (_Var3.unknown != (undefined *)0xe100000000000000))
        && (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x31,(_StringGuts)0xe100000000000000,expecting), !bVar1)
        ))) {
      if (((((_Var2.unknown != (undefined *)0x6f6e) || (_Var3.unknown != &SUB_e200000000000000)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6f6e,(_StringGuts)0xe200000000000000,expecting),
           !bVar1)) &&
          ((_Var2.unknown != &DAT_00000030 || (_Var3.unknown != (undefined *)0xe100000000000000))))
         && (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x30,(_StringGuts)0xe100000000000000,expecting), !bVar1
            )) {
        if (((_Var2.unknown == (undefined *)0x65757274) && (_Var3.unknown == &DAT_e400000000000000))
           || (bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x74)
              , bVar1)) {
          uVar4 = 1;
        }
        else {
          if ((_Var2.unknown != (undefined *)0x65736c6166) ||
             (_Var3.unknown != &DAT_e500000000000000)) {
            bVar1 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x66);
            _swift_bridgeObjectRelease(_Var3.unknown);
            if (bVar1) {
              return 0;
            }
            return 2;
          }
          uVar4 = 0;
        }
        _swift_bridgeObjectRelease(_Var3.unknown);
        return uVar4;
      }
      _swift_bridgeObjectRelease(_Var3.unknown);
      return 0;
    }
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  return 1;
}



/* Address: 0x100838130 | FUN_100838130 */

void FUN_100838130(long *param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x21;
  ulong uVar6;
  
  FUN_1008319dc();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar2 = param_2;
    uVar6 = param_3;
    FUN_100071370();
    if ((uVar6 & 1) != 0) {
      puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x18);
      uVar3 = (ushort)*puVar4;
      uVar1 = puVar4[1];
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(lVar5);
      lVar5 = param_2;
      uVar6 = param_3;
      FUN_1008339d8();
      if (unaff_x21 != 0) {
        _swift_bridgeObjectRelease(param_3);
        _swift_bridgeObjectRelease(uVar1);
        return;
      }
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = uVar3 & 0x1ff;
      goto LAB_100838208;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar3 = 0x200;
LAB_100838208:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = lVar5;
  param_1[3] = uVar6;
  *(ushort *)(param_1 + 4) = uVar3;
  return;
}



/* Address: 0x100838250 | FUN_100838250 */

/* WARNING: Removing unreachable block (ram,0x00010083831c) */

void FUN_100838250(long *param_1,ulong param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  long lVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long unaff_x20;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  FUN_1008319dc();
  lVar5 = *(long *)(unaff_x20 + 0x10);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar2 = param_4;
    uVar6 = param_2;
    FUN_100071370();
    if ((uVar6 & 1) != 0) {
      puVar4 = (undefined8 *)(*(long *)(lVar5 + 0x38) + lVar2 * 0x18);
      uVar3 = (ushort)*puVar4;
      uVar1 = puVar4[1];
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRelease(lVar5);
      lVar5 = param_4;
      uVar6 = param_2;
      FUN_1008339d8();
      _swift_bridgeObjectRelease(uVar1);
      uVar3 = uVar3 & 0x1ff;
      goto LAB_100838344;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  lVar5 = 0;
  uVar6 = 0;
  uVar3 = 0x200;
LAB_100838344:
  *param_1 = param_4;
  param_1[1] = param_2;
  param_1[2] = lVar5;
  param_1[3] = uVar6;
  *(ushort *)(param_1 + 4) = uVar3;
                    /* WARNING: Could not recover jumptable at 0x000100838374. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100838380 | FUN_100838380 */

void FUN_100838380(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_100004594(unaff_x20 + 0x28);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008383bc | FUN_1008383bc */

undefined8 FUN_1008383bc(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_10083845c(param_2,param_1,&DAT_100f05868);
  return param_2;
}



/* Address: 0x1008383f0 | FUN_1008383f0 */

void FUN_1008383f0(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x10083840c | FUN_10083840c */

undefined1  [16] FUN_10083840c(void)

{
  return ZEXT816(0x100f057e8);
}



/* Address: 0x10083841c | thunk_FUN_100838420 */

void thunk_FUN_100838420(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  FUN_100004594(param_1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x100838420 | FUN_100838420 */

void FUN_100838420(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  FUN_100004594(param_1 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x100838458 | thunk_FUN_10083845c */

undefined8 * thunk_FUN_10083845c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  lVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar4;
  pcVar2 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar2)(param_1 + 3,param_2 + 3,lVar4);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x10083845c | FUN_10083845c */

undefined8 * FUN_10083845c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = *param_2;
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  lVar4 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = lVar4;
  pcVar2 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  (*pcVar2)(param_1 + 3,param_2 + 3,lVar4);
  uVar1 = param_2[9];
  param_1[8] = param_2[8];
  param_1[9] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1008384e4 | thunk_FUN_1008384e8 */

undefined8 * thunk_FUN_1008384e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 3,param_2 + 3);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008384e8 | FUN_1008384e8 */

undefined8 * FUN_1008384e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 3,param_2 + 3);
  param_1[8] = param_2[8];
  uVar1 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100838578 | thunk_FUN_10083857c */

undefined8 * thunk_FUN_10083857c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  FUN_100004594(param_1 + 3);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x10083857c | FUN_10083857c */

undefined8 * FUN_10083857c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  FUN_100004594(param_1 + 3);
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1008385f0 | thunk_FUN_1000623d8 */

int thunk_FUN_1000623d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008385f4 | thunk_FUN_100062420 */

void thunk_FUN_100062420(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008385f8 | FUN_1008385f8 */

undefined1  [16] FUN_1008385f8(void)

{
  return ZEXT816(0x100f05868);
}


