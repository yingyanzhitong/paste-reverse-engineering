/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005c0884 | FUN_1005c0884 */

undefined1  [16] FUN_1005c0884(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x78;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0x1894);
  }
  *param_1 = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x68) = param_3;
  *(undefined8 *)((long)pvVar1 + 0x70) = unaff_x20;
  *(undefined8 *)((long)pvVar1 + 0x60) = param_2;
  FUN_1005bffac(pvVar1,param_2,param_3);
  auVar2._8_8_ = pvVar1;
  auVar2._0_8_ = FUN_1005c0258;
  return auVar2;
}



/* Address: 0x1005c0904 | FUN_1005c0904 */

void FUN_1005c0904(undefined *param_1,ulong param_2)

{
  code *pcVar1;
  UnsafeBufferPointer<__int8> UVar2;
  ulong uVar3;
  char *unaff_x20;
  undefined *local_40;
  ulong uStack_38;
  
  _swift_bridgeObjectRetain(param_2);
  local_40 = param_1;
  if ((param_2 >> 0x3c & 1) != 0) {
    uVar3 = param_2;
    FUN_1005c0dbc();
    _swift_bridgeObjectRelease(param_2);
    local_40 = param_1;
    param_2 = uVar3;
  }
  if ((param_2 >> 0x3c & 1) != 0) {
    _swift_bridgeObjectRelease(param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c09ec);
    (*pcVar1)();
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)local_40 >> 0x3c & 1) == 0) {
      UVar2 = Swift::_StringObject::get_sharedUTF8(local_40);
    }
    else {
      UVar2.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    (**(code **)(unaff_x20 + 8))(UVar2.unknown);
    if (*unaff_x20 != '\0') {
      (**(code **)(unaff_x20 + 0x18))();
    }
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  uStack_38 = param_2 & 0xffffffffffffff;
  (**(code **)(unaff_x20 + 8))(&local_40,param_2 >> 0x38 & 0xf);
  if (*unaff_x20 != '\0') {
    (**(code **)(unaff_x20 + 0x18))();
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1005c09fc | FUN_1005c09fc */

void FUN_1005c09fc(void)

{
  UnsafeMutablePointer<__sFILE> UVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  UVar1 = Darwin::get_stderr();
  puVar2 = &DAT_100ee6760;
  _swift_allocObject(&DAT_100ee6760,0x48,7);
  *(code **)(puVar2 + 0x10) = FUN_1005c0aa8;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined **)(puVar2 + 0x20) = UVar1.unknown;
  *(code **)(puVar2 + 0x28) = FUN_1005c0ab0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(code **)(puVar2 + 0x38) = FUN_1005c0ab8;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar3 = &DAT_100ee6788;
  _swift_allocObject(&DAT_100ee6788,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1005c0ac0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = UVar1.unknown;
  DAT_101057b80 = 1;
  DAT_101057b88 = thunk_FUN_1005c2db4;
  DAT_101057b90 = puVar2;
  DAT_101057b98 = FUN_1005c2d44;
  DAT_101057ba0 = puVar3;
  return;
}



/* Address: 0x1005c0aa8 | FUN_1005c0aa8 */

void FUN_1005c0aa8(undefined8 *param_1)

{
  _flockfile((FILE *)*param_1);
  return;
}



/* Address: 0x1005c0ab0 | FUN_1005c0ab0 */

void FUN_1005c0ab0(undefined8 *param_1)

{
  _funlockfile((FILE *)*param_1);
  return;
}



/* Address: 0x1005c0ab8 | FUN_1005c0ab8 */

void FUN_1005c0ab8(void *param_1,size_t param_2,size_t param_3,undefined8 *param_4)

{
  _fwrite(param_1,param_2,param_3,(FILE *)*param_4);
  return;
}



/* Address: 0x1005c0ac0 | FUN_1005c0ac0 */

void FUN_1005c0ac0(undefined8 *param_1)

{
  _fflush((FILE *)*param_1);
  return;
}



/* Address: 0x1005c0ac8 | FUN_1005c0ac8 */

void FUN_1005c0ac8(void)

{
  UnsafeMutablePointer<__sFILE> UVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  UVar1 = Darwin::get_stdout();
  puVar2 = &DAT_100ee67b0;
  _swift_allocObject(&DAT_100ee67b0,0x48,7);
  *(code **)(puVar2 + 0x10) = FUN_1005c0aa8;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  *(undefined **)(puVar2 + 0x20) = UVar1.unknown;
  *(code **)(puVar2 + 0x28) = FUN_1005c0ab0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  *(code **)(puVar2 + 0x38) = FUN_1005c0ab8;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  puVar3 = &DAT_100ee67d8;
  _swift_allocObject(&DAT_100ee67d8,0x28,7);
  *(code **)(puVar3 + 0x10) = FUN_1005c0ac0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = UVar1.unknown;
  DAT_101057b58 = 1;
  DAT_101057b60 = thunk_FUN_1005c2db4;
  DAT_101057b68 = puVar2;
  DAT_101057b70 = thunk_FUN_1005c2d44;
  DAT_101057b78 = puVar3;
  return;
}



/* Address: 0x1005c0b74 | FUN_1005c0b74 */

void FUN_1005c0b74(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd41d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64874;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64874,&DAT_100ee6730);
  DAT_100fd41d0 = pTVar1;
  return;
}



/* Address: 0x1005c0bb4 | FUN_1005c0bb4 */

void FUN_1005c0bb4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005c0be0 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_lock */

void (extension_Swift)::Swift::TextOutputStream::_lock(void)

{
  _lock();
  return;
}



/* Address: 0x1005c0be4 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_unlock */

void (extension_Swift)::Swift::TextOutputStream::_unlock(void)

{
  _unlock();
  return;
}



/* Address: 0x1005c0be8 | FUN_1005c0be8 */

void FUN_1005c0be8(void)

{
  FUN_1005c0904();
  return;
}



/* Address: 0x1005c0c20 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::TextOutputStream::_writeASCII */

void (extension_Swift)::Swift::TextOutputStream::_writeASCII(UnsafeBufferPointer<__int8> param_1)

{
  _writeASCII(param_1);
  return;
}



/* Address: 0x1005c0c24 | FUN_1005c0c24 */

undefined1  [16] FUN_1005c0c24(__uint8 param_1,_StringObject param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  undefined8 uVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    uVar6 = (uint)((ulong)param_2.unknown >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      while( true ) {
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar6) {
          FUN_1000740a8(after.cmsgPointer.unknown,param_2.unknown,param_3);
        }
        if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005c0db8);
          (*pcVar2)();
        }
        if ((param_3 >> 0x3c & 1) == 0) {
          if ((param_3 >> 0x3d & 1) == 0) {
            UVar4.unknown = (undefined *)((param_3 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_2.unknown >> 0x3c & 1) == 0) {
              UVar4 = Swift::_StringObject::get_sharedUTF8(param_2);
            }
          }
          else {
            local_70 = param_2.unknown;
            uStack_68 = param_3 & 0xffffffffffffff;
            UVar4.unknown = (undefined *)&local_70;
          }
          _Var3 = *(__uint8 *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
        }
        else {
          _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_2.unknown);
        }
        if (_Var3 == param_1) {
          uVar5 = 0;
          goto LAB_1005c0d94;
        }
        if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar6) break;
        if ((param_3 >> 0x3c & 1) == 0) goto LAB_1005c0c90;
LAB_1005c0d14:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1005c0dbc);
          (*pcVar2)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_2.unknown);
        if (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) == 0) goto LAB_1005c0d84;
      }
      FUN_1000740a8(after.cmsgPointer.unknown,param_2.unknown,param_3);
      if ((param_3 >> 0x3c & 1) != 0) goto LAB_1005c0d14;
LAB_1005c0c90:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
LAB_1005c0d84:
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x0;
  uVar5 = 1;
LAB_1005c0d94:
  auVar7._8_8_ = uVar5;
  auVar7._0_8_ = after.cmsgPointer.unknown;
  return auVar7;
}



/* Address: 0x1005c0dbc | FUN_1005c0dbc */

undefined1  [16]
FUN_1005c0dbc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1005c0e0c();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1005c0e0c | FUN_1005c0e0c */

String FUN_1005c0e0c(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

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
      FUN_1005c0f50(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c0f0c);
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
      goto LAB_1005c0e44;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1005c0e44:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1005c0f50 | FUN_1005c0f50 */

undefined * FUN_1005c0f50(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fd41e0;
    FUN_1000f7830(&DAT_100fd41e0,&DAT_100c648b8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1005c0fc0 | FUN_1005c0fc0 */

undefined * FUN_1005c0fc0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fd4198;
    FUN_1000f7830(&DAT_100fd4198,&DAT_100c647e0);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + 0x1f;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  return puVar2;
}



/* Address: 0x1005c1040 | FUN_1005c1040 */

void FUN_1005c1040(ulong *param_1)

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
    FUN_1005c2234();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fd4158;
      FUN_1000f7830(&DAT_100fd4158,&DAT_100c64718);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1005c114c(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_1005c1594(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x1005c114c | FUN_1005c114c */

void FUN_1005c114c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  _StringGuts _Var2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  _StringGuts _Var9;
  long lVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined8 *puVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  long unaff_x21;
  long lVar18;
  long lVar19;
  long lVar20;
  ulong *puVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar19 = param_3[1];
  if (0 < lVar19) {
    lVar11 = 0;
    do {
      lVar22 = lVar11 + 1;
      if (lVar22 < lVar19) {
        puVar14 = (undefined8 *)(*param_3 + lVar22 * 0x40);
        puVar23 = (undefined8 *)(*param_3 + lVar11 * 0x40);
        _Var9.unknown = (undefined *)*puVar14;
        _Var2.unknown = (undefined *)puVar14[1];
        if (_Var9.unknown == (undefined *)*puVar23 && _Var2.unknown == (undefined *)puVar23[1]) {
          bVar4 = false;
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck
                            (_Var9,_Var2,(_StringComparisonResult)(__int8)(undefined *)*puVar23);
        }
        lVar15 = lVar11 + 2;
        lVar22 = lVar15;
        if (lVar15 < lVar19) {
          plVar16 = puVar23 + 9;
          do {
            _Var9.unknown = (undefined *)plVar16[8];
            if ((undefined *)plVar16[7] == (undefined *)plVar16[-1] &&
                _Var9.unknown == (undefined *)*plVar16) {
              if (bVar4 != false) goto LAB_1005c1240;
            }
            else {
              bVar5 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)plVar16[7],_Var9,
                                 (_StringComparisonResult)(__int8)(undefined *)plVar16[-1]);
              lVar22 = lVar15;
              if (bVar4 != bVar5) break;
            }
            lVar15 = lVar15 + 1;
            plVar16 = plVar16 + 8;
            lVar22 = lVar19;
          } while (lVar19 != lVar15);
        }
        lVar15 = lVar22;
        if (bVar4 != false) {
LAB_1005c1240:
          if (lVar15 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1568);
            (*pcVar3)();
          }
          lVar22 = lVar15;
          if (lVar11 < lVar15) {
            lVar10 = *param_3;
            puVar14 = (undefined8 *)(lVar10 + lVar11 * 0x40);
            lVar19 = lVar11;
            puVar23 = (undefined8 *)(lVar10 + lVar15 * 0x40);
            do {
              puVar12 = puVar23 + -8;
              lVar15 = lVar15 + -1;
              if (lVar19 != lVar15) {
                if (lVar10 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1588);
                  (*pcVar3)();
                }
                uVar24 = puVar14[4];
                uStack_78 = (undefined1)puVar14[5];
                uVar27 = *(undefined8 *)((long)puVar14 + 0x31);
                uVar25 = *(undefined8 *)((long)puVar14 + 0x29);
                uStack_77 = (undefined7)uVar25;
                uVar30 = puVar14[1];
                uVar29 = *puVar14;
                uVar28 = puVar14[3];
                uVar26 = puVar14[2];
                uVar31 = puVar23[-4];
                uVar33 = puVar23[-1];
                uVar32 = puVar23[-2];
                uVar37 = puVar23[-7];
                uVar36 = *puVar12;
                uVar35 = puVar23[-5];
                uVar34 = puVar23[-6];
                puVar14[5] = puVar23[-3];
                puVar14[4] = uVar31;
                puVar14[7] = uVar33;
                puVar14[6] = uVar32;
                puVar14[1] = uVar37;
                *puVar14 = uVar36;
                puVar14[3] = uVar35;
                puVar14[2] = uVar34;
                puVar23[-7] = uVar30;
                *puVar12 = uVar29;
                puVar23[-5] = uVar28;
                puVar23[-6] = uVar26;
                puVar23[-3] = CONCAT71(uStack_77,uStack_78);
                puVar23[-4] = uVar24;
                *(undefined8 *)((long)puVar23 + -0xf) = uVar27;
                *(undefined8 *)((long)puVar23 + -0x17) = uVar25;
              }
              lVar19 = lVar19 + 1;
              puVar14 = puVar14 + 8;
              puVar23 = puVar12;
            } while (lVar19 < lVar15);
          }
        }
      }
      lVar19 = param_3[1];
      lVar15 = lVar22;
      if (lVar22 < lVar19) {
        if (SBORROW8(lVar22,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1564);
          (*pcVar3)();
        }
        if (lVar22 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c156c);
            (*pcVar3)();
          }
          lVar10 = lVar11 + param_4;
          if (lVar19 <= lVar11 + param_4) {
            lVar10 = lVar19;
          }
          if (lVar10 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1570);
            (*pcVar3)();
          }
          if (lVar22 != lVar10) {
            lVar20 = *param_3;
            puVar14 = (undefined8 *)(lVar20 + lVar22 * 0x40);
            lVar19 = lVar11 - lVar22;
            puVar23 = puVar14;
            lVar18 = lVar19;
LAB_1005c133c:
            do {
              puVar12 = puVar14 + -8;
              if (((undefined *)*puVar14 != (undefined *)*puVar12 ||
                   (undefined *)puVar14[1] != (undefined *)puVar14[-7]) &&
                 (bVar4 = Swift::_stringCompareWithSmolCheck
                                    ((undefined *)*puVar14,(undefined *)puVar14[1],
                                     (_StringComparisonResult)(__int8)(undefined *)*puVar12), bVar4)
                 ) {
                if (lVar20 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1574);
                  (*pcVar3)();
                }
                uVar28 = puVar14[3];
                uVar27 = puVar14[2];
                uVar24 = puVar14[4];
                uStack_78 = (undefined1)puVar14[5];
                uStack_77 = (undefined7)*(undefined8 *)((long)puVar14 + 0x29);
                uVar26 = puVar14[1];
                uVar25 = *puVar14;
                puVar14[1] = puVar14[-7];
                *puVar14 = *puVar12;
                puVar14[3] = puVar14[-5];
                puVar14[2] = puVar14[-6];
                puVar14[5] = puVar14[-3];
                puVar14[4] = puVar14[-4];
                puVar14[7] = puVar14[-1];
                puVar14[6] = puVar14[-2];
                *(undefined8 *)((long)puVar14 + -0xf) = *(undefined8 *)((long)puVar14 + 0x31);
                *(undefined8 *)((long)puVar14 + -0x17) = *(undefined8 *)((long)puVar14 + 0x29);
                puVar14[-5] = uVar28;
                puVar14[-6] = uVar27;
                puVar14[-3] = CONCAT71(uStack_77,uStack_78);
                puVar14[-4] = uVar24;
                puVar14[-7] = uVar26;
                *puVar12 = uVar25;
                bVar4 = lVar19 != -1;
                lVar19 = lVar19 + 1;
                puVar14 = puVar12;
                if (bVar4) goto LAB_1005c133c;
              }
              lVar22 = lVar22 + 1;
              puVar14 = puVar23 + 8;
              lVar19 = lVar18 + -1;
              lVar15 = lVar10;
              puVar23 = puVar14;
              lVar18 = lVar19;
            } while (lVar22 != lVar10);
          }
        }
      }
      puVar8 = local_58;
      if (lVar15 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1554);
        (*pcVar3)();
      }
      puVar6 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar6 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_1005c18fc(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar17 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar17) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_1005c18fc(puVar8,uVar17 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar17 + 1;
      *(long *)(puVar8 + uVar17 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar8 + uVar17 * 0x10 + 0x28) = lVar15;
      local_58 = puVar8;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c158c);
        (*pcVar3)();
      }
      FUN_1005c1694(&local_58,*param_1,param_3);
      puVar8 = local_58;
      if (unaff_x21 != 0) goto LAB_1005c1524;
      lVar19 = param_3[1];
      lVar11 = lVar15;
    } while (lVar15 < lVar19);
  }
  puVar8 = local_58;
  lVar19 = *param_1;
  if (lVar19 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1594);
    (*pcVar3)();
  }
  puVar6 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    FUN_1005c1cb0();
  }
  puVar21 = (ulong *)(puVar8 + 0x10);
  uVar17 = *puVar21;
  while (1 < uVar17) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1590);
      (*pcVar3)();
    }
    plVar16 = (long *)(puVar8 + uVar17 * 0x10);
    lVar22 = *plVar16;
    puVar1 = puVar21 + uVar17 * 2;
    uVar13 = puVar1[1];
    FUN_1005c19fc(lVar11 + lVar22 * 0x40,lVar11 + *puVar1 * 0x40,lVar11 + uVar13 * 0x40,lVar19);
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar22) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1558);
      (*pcVar3)();
    }
    if (*puVar21 <= uVar17 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c155c);
      (*pcVar3)();
    }
    *plVar16 = lVar22;
    plVar16[1] = uVar13;
    uVar13 = *puVar21;
    lVar11 = uVar13 - uVar17;
    if (uVar13 < uVar17) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1560);
      (*pcVar3)();
    }
    uVar17 = uVar13 - 1;
    _memmove(puVar1,puVar1 + 2,lVar11 * 0x10);
    *puVar21 = uVar17;
  }
LAB_1005c1524:
  _swift_bridgeObjectRelease(puVar8);
  return;
}



/* Address: 0x1005c1594 | FUN_1005c1594 */

void FUN_1005c1594(long param_1,long param_2,long param_3,long *param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined8 *puVar7;
  
  if (param_3 != param_2) {
    lVar3 = *param_4;
    puVar6 = (undefined8 *)(lVar3 + param_3 * 0x40);
    param_1 = param_1 - param_3;
    lVar5 = param_1;
    puVar4 = puVar6;
LAB_1005c161c:
    do {
      puVar7 = puVar6 + -8;
      if (((undefined *)*puVar6 != (undefined *)*puVar7 ||
           (undefined *)puVar6[1] != (undefined *)puVar6[-7]) &&
         (bVar2 = Swift::_stringCompareWithSmolCheck
                            ((undefined *)*puVar6,(undefined *)puVar6[1],
                             (_StringComparisonResult)(__int8)(undefined *)*puVar7), bVar2)) {
        if (lVar3 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c1694);
          (*pcVar1)();
        }
        uVar12 = puVar6[3];
        uVar11 = puVar6[2];
        uVar8 = puVar6[4];
        uStack_78 = (undefined1)puVar6[5];
        local_77 = (undefined7)*(undefined8 *)((long)puVar6 + 0x29);
        uVar10 = puVar6[1];
        uVar9 = *puVar6;
        puVar6[1] = puVar6[-7];
        *puVar6 = *puVar7;
        puVar6[3] = puVar6[-5];
        puVar6[2] = puVar6[-6];
        puVar6[5] = puVar6[-3];
        puVar6[4] = puVar6[-4];
        puVar6[7] = puVar6[-1];
        puVar6[6] = puVar6[-2];
        *(undefined8 *)((long)puVar6 + -0xf) = *(undefined8 *)((long)puVar6 + 0x31);
        *(undefined8 *)((long)puVar6 + -0x17) = *(undefined8 *)((long)puVar6 + 0x29);
        puVar6[-5] = uVar12;
        puVar6[-6] = uVar11;
        puVar6[-3] = CONCAT71(local_77,uStack_78);
        puVar6[-4] = uVar8;
        puVar6[-7] = uVar10;
        *puVar7 = uVar9;
        bVar2 = param_1 != -1;
        param_1 = param_1 + 1;
        puVar6 = puVar7;
        if (bVar2) goto LAB_1005c161c;
      }
      param_3 = param_3 + 1;
      puVar6 = puVar4 + 8;
      param_1 = lVar5 + -1;
      lVar5 = param_1;
      puVar4 = puVar6;
    } while (param_3 != param_2);
  }
  return;
}



/* Address: 0x1005c1694 | FUN_1005c1694 */

undefined8 FUN_1005c1694(ulong *param_1,undefined8 param_2,long *param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x21;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  
  uVar8 = *param_1;
  if (1 < *(ulong *)(uVar8 + 0x10)) {
    uVar6 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar6 & 1) == 0) {
      FUN_1005c1cb0();
    }
    *param_1 = uVar8;
    uVar6 = *(ulong *)(uVar8 + 0x10);
    do {
      lVar9 = uVar6 - 1;
      if (uVar6 < 4) {
        if (uVar6 == 3) {
          bVar5 = SBORROW8(*(long *)(uVar8 + 0x28),*(long *)(uVar8 + 0x20));
          lVar7 = *(long *)(uVar8 + 0x28) - *(long *)(uVar8 + 0x20);
          goto LAB_1005c1768;
        }
        if (uVar6 < 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18e4);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar7 = *plVar1;
        lVar12 = plVar1[1];
        bVar5 = SBORROW8(lVar12,lVar7);
        lVar12 = lVar12 - lVar7;
LAB_1005c17cc:
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18d4);
          (*pcVar4)();
        }
        lVar7 = uVar8 + lVar9 * 0x10;
        lVar2 = *(long *)(lVar7 + 0x20);
        lVar7 = *(long *)(lVar7 + 0x28);
        if (SBORROW8(lVar7,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18dc);
          (*pcVar4)();
        }
        lVar10 = lVar9;
        if (lVar7 - lVar2 < lVar12) {
          return 1;
        }
      }
      else {
        lVar12 = uVar8 + 0x20 + uVar6 * 0x10;
        if (SBORROW8(*(long *)(lVar12 + -0x38),*(long *)(lVar12 + -0x40))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18bc);
          (*pcVar4)();
        }
        lVar7 = *(long *)(lVar12 + -0x28) - *(long *)(lVar12 + -0x30);
        if (SBORROW8(*(long *)(lVar12 + -0x28),*(long *)(lVar12 + -0x30))) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18c0);
          (*pcVar4)();
        }
        plVar1 = (long *)(uVar8 + uVar6 * 0x10);
        lVar2 = *plVar1;
        lVar10 = plVar1[1];
        lVar3 = lVar10 - lVar2;
        if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18c8);
          (*pcVar4)();
        }
        if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18d0);
          (*pcVar4)();
        }
        bVar5 = false;
        if (lVar7 + lVar3 < *(long *)(lVar12 + -0x38) - *(long *)(lVar12 + -0x40)) {
LAB_1005c1768:
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18c4);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + uVar6 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar12 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18cc);
            (*pcVar4)();
          }
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar2 = *plVar1;
          lVar10 = plVar1[1];
          lVar3 = lVar10 - lVar2;
          if (SBORROW8(lVar10,lVar2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18d8);
            (*pcVar4)();
          }
          if (SCARRY8(lVar12,lVar3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18e0);
            (*pcVar4)();
          }
          bVar5 = false;
          if (lVar12 + lVar3 < lVar7) goto LAB_1005c17cc;
          lVar10 = uVar6 - 2;
          if (lVar3 <= lVar7) {
            lVar10 = lVar9;
          }
        }
        else {
          plVar1 = (long *)(uVar8 + 0x20 + lVar9 * 0x10);
          lVar12 = *plVar1;
          lVar2 = plVar1[1];
          if (SBORROW8(lVar2,lVar12)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18e8);
            (*pcVar4)();
          }
          lVar10 = uVar6 - 2;
          if (lVar2 - lVar12 <= lVar7) {
            lVar10 = lVar9;
          }
        }
      }
      uVar11 = lVar10 - 1;
      if (uVar6 <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18b0);
        (*pcVar4)();
      }
      lVar9 = *param_3;
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18fc);
        (*pcVar4)();
      }
      lVar12 = *(long *)(uVar8 + 0x20 + uVar11 * 0x10);
      plVar1 = (long *)(uVar8 + 0x20 + lVar10 * 0x10);
      lVar7 = plVar1[1];
      FUN_1005c19fc(lVar9 + lVar12 * 0x40,lVar9 + *plVar1 * 0x40,lVar9 + lVar7 * 0x40,param_2);
      if (unaff_x21 != 0) {
        return 1;
      }
      if (lVar7 < lVar12) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18b4);
        (*pcVar4)();
      }
      uVar6 = uVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar6 & 1) == 0) {
        FUN_1005c1cb0();
      }
      if (*(ulong *)(uVar8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c18b8);
        (*pcVar4)();
      }
      lVar9 = uVar8 + uVar11 * 0x10;
      *(long *)(lVar9 + 0x20) = lVar12;
      *(long *)(lVar9 + 0x28) = lVar7;
      *param_1 = uVar8;
      FUN_1005c1c28(lVar10);
      uVar8 = *param_1;
      uVar6 = *(ulong *)(uVar8 + 0x10);
    } while (1 < uVar6);
  }
  return 1;
}



/* Address: 0x1005c18fc | FUN_1005c18fc */

undefined * FUN_1005c18fc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1005c19fc);
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
    puVar3 = &DAT_100fd4200;
    FUN_1000f7830(&DAT_100fd4200,&DAT_100c648e0);
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
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1005c19fc | FUN_1005c19fc */

undefined8
FUN_1005c19fc(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar3 = lVar10 + 0x3f;
  if (-1 < lVar10) {
    lVar3 = lVar10;
  }
  lVar3 = lVar3 >> 6;
  lVar12 = (long)param_3 - (long)param_2;
  lVar5 = lVar12 + 0x3f;
  if (-1 < lVar12) {
    lVar5 = lVar12;
  }
  lVar5 = lVar5 >> 6;
  if (lVar3 < lVar5) {
    if ((param_4 != param_1) || (param_1 + lVar3 * 8 <= param_4)) {
      _memmove(param_4,param_1,lVar3 * 0x40);
    }
    puVar9 = param_4 + lVar3 * 8;
    puVar6 = param_1;
    if (0x3f < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (((undefined *)*param_2 == (undefined *)*param_4 &&
             (undefined *)param_2[1] == (undefined *)param_4[1]) ||
           (bVar2 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*param_2,(undefined *)param_2[1],
                               (_StringComparisonResult)(__int8)(undefined *)*param_4), !bVar2)) {
          puVar7 = param_4 + 8;
          puVar8 = param_4;
        }
        else {
          puVar7 = param_4;
          puVar8 = param_2;
          param_2 = param_2 + 8;
        }
        param_4 = puVar7;
        if (puVar6 != puVar8) {
          uVar14 = puVar8[1];
          uVar13 = *puVar8;
          uVar16 = puVar8[3];
          uVar15 = puVar8[2];
          uVar17 = puVar8[4];
          uVar19 = puVar8[7];
          uVar18 = puVar8[6];
          puVar6[5] = puVar8[5];
          puVar6[4] = uVar17;
          puVar6[7] = uVar19;
          puVar6[6] = uVar18;
          puVar6[1] = uVar14;
          *puVar6 = uVar13;
          puVar6[3] = uVar16;
          puVar6[2] = uVar15;
        }
        puVar6 = puVar6 + 8;
      } while (param_4 < puVar9);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar5 * 8 <= param_4)) {
      _memmove(param_4,param_2,lVar5 * 0x40);
    }
    puVar8 = param_4 + lVar5 * 8;
    puVar6 = param_2;
    puVar9 = puVar8;
    if ((param_1 < param_2) && (0x3f < lVar12)) {
      do {
        puVar11 = param_2 + -8;
        puVar7 = param_3;
        while( true ) {
          param_3 = puVar7 + -8;
          puVar9 = puVar8 + -8;
          if (((undefined *)*puVar9 != (undefined *)param_2[-8] ||
               (undefined *)puVar8[-7] != (undefined *)param_2[-7]) &&
             (bVar2 = Swift::_stringCompareWithSmolCheck
                                ((undefined *)*puVar9,(undefined *)puVar8[-7],
                                 (_StringComparisonResult)(__int8)(undefined *)param_2[-8]), bVar2))
          break;
          if (puVar7 != puVar8) {
            uVar14 = puVar8[-7];
            uVar13 = *puVar9;
            uVar16 = puVar8[-5];
            uVar15 = puVar8[-6];
            uVar17 = puVar8[-4];
            uVar19 = puVar8[-1];
            uVar18 = puVar8[-2];
            puVar7[-3] = puVar8[-3];
            puVar7[-4] = uVar17;
            puVar7[-1] = uVar19;
            puVar7[-2] = uVar18;
            puVar7[-7] = uVar14;
            *param_3 = uVar13;
            puVar7[-5] = uVar16;
            puVar7[-6] = uVar15;
          }
          puVar6 = param_2;
          puVar8 = puVar9;
          puVar7 = param_3;
          if (puVar9 <= param_4) goto LAB_1005c1bd4;
        }
        if (puVar7 != param_2) {
          uVar14 = param_2[-7];
          uVar13 = *puVar11;
          uVar16 = param_2[-5];
          uVar15 = param_2[-6];
          uVar17 = param_2[-4];
          uVar19 = param_2[-1];
          uVar18 = param_2[-2];
          puVar7[-3] = param_2[-3];
          puVar7[-4] = uVar17;
          puVar7[-1] = uVar19;
          puVar7[-2] = uVar18;
          puVar7[-7] = uVar14;
          *param_3 = uVar13;
          puVar7[-5] = uVar16;
          puVar7[-6] = uVar15;
        }
        puVar6 = puVar11;
        puVar9 = puVar8;
      } while ((param_1 < puVar11) && (param_2 = puVar11, param_4 < puVar8));
    }
  }
LAB_1005c1bd4:
  uVar4 = (long)puVar9 - (long)param_4;
  uVar1 = uVar4 + 0x3f;
  if (-1 < (long)uVar4) {
    uVar1 = uVar4;
  }
  if ((puVar6 != param_4) ||
     ((undefined8 *)((long)param_4 + (uVar1 & 0xffffffffffffffc0)) <= puVar6)) {
    _memmove(puVar6,param_4,uVar1 & 0xffffffffffffffc0);
  }
  return 1;
}



/* Address: 0x1005c1c28 | FUN_1005c1c28 */

undefined1  [16] FUN_1005c1c28(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1005c1cb0();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c1cb0);
  (*pcVar3)();
}



/* Address: 0x1005c1cb0 | FUN_1005c1cb0 */

void FUN_1005c1cb0(long param_1)

{
  FUN_1005c18fc(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1005c1cc4 | FUN_1005c1cc4 */

void FUN_1005c1cc4(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  thunk_FUN_1005be370();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_1005be474();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x30);
    uVar4 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = *(undefined8 *)((long)puVar2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)puVar2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar4;
    FUN_1005c1ec8(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Address: 0x1005c1dac | FUN_1005c1dac */

void FUN_1005c1dac(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  thunk_FUN_1005be370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c1e84);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_1005be624(lVar4,param_4 & 1);
    uVar6 = param_3;
    thunk_FUN_1005be370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c1e4c);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1005be474();
    lVar4 = *unaff_x20;
    goto joined_r0x0001005c1e98;
  }
  lVar4 = *unaff_x20;
joined_r0x0001005c1e98:
  if ((uVar3 & 1) != 0) {
    FUN_10054d4c4(param_1,*(long *)(lVar4 + 0x38) + lVar2 * 0x30);
    return;
  }
  FUN_1005be3e0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x1005c1ec8 | FUN_1005c1ec8 */

void FUN_1005c1ec8(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  String *pSVar2;
  void *pvVar3;
  String SVar4;
  code *pcVar5;
  Bucket BVar6;
  Hasher into;
  ulong uVar7;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_a8 [72];
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar11 = param_1.offset + 1U & (uVar8 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    uVar8 = ~uVar8;
    BVar6 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar12 = BVar6.offset + 1U & uVar8;
    do {
      pSVar2 = (String *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
      pvVar3 = pSVar2->bridgeObject;
      SVar4 = *pSVar2;
      Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
      _swift_bridgeObjectRetain(pvVar3);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar4);
      uVar7 = Swift::Hasher::_finalize(into);
      _swift_bridgeObjectRelease(pvVar3);
      uVar7 = uVar7 & uVar8;
      if (param_1.offset < (long)uVar12) {
        if (uVar7 < uVar12) {
LAB_1005c1fc8:
          if (param_1.offset < (long)uVar7) goto LAB_1005c1f50;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 0x10);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar11 * 0x10);
        if ((param_1.offset < (long)uVar11) || (puVar10 + 2 <= puVar9 || param_1.offset != uVar11))
        {
          uVar13 = *puVar10;
          puVar9[1] = puVar10[1];
          *puVar9 = uVar13;
        }
        puVar9 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x30);
        puVar10 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar11 * 0x30);
        if (((param_1.offset < (long)uVar11) || (puVar10 + 6 <= puVar9)) ||
           (param_1.offset != uVar11)) {
          uVar14 = puVar10[1];
          uVar13 = *puVar10;
          uVar15 = puVar10[2];
          uVar17 = puVar10[5];
          uVar16 = puVar10[4];
          puVar9[3] = puVar10[3];
          puVar9[2] = uVar15;
          puVar9[5] = uVar17;
          puVar9[4] = uVar16;
          puVar9[1] = uVar14;
          *puVar9 = uVar13;
          param_1.offset = uVar11;
        }
      }
      else if (uVar12 <= uVar7) goto LAB_1005c1fc8;
LAB_1005c1f50:
      uVar11 = uVar11 + 1 & uVar8;
    } while ((*(ulong *)(_Var1.unknown + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  uVar8 = (ulong)param_1.offset >> 3 & 0x1ffffffffffffff8;
  *(ulong *)(_Var1.unknown + uVar8) =
       *(ulong *)(_Var1.unknown + uVar8) & (-1L << (param_1.offset & 0x3fU)) - 1U;
  if (!SBORROW8(*(long *)(param_2 + 0x10),1)) {
    *(long *)(param_2 + 0x10) = *(long *)(param_2 + 0x10) + -1;
    *(int *)(param_2 + 0x24) = *(int *)(param_2 + 0x24) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x1005c2084);
  (*pcVar5)();
}



/* Address: 0x1005c2084 | FUN_1005c2084 */

long FUN_1005c2084(long *param_1,undefined8 *param_2,long param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_6f;
  
  puVar9 = (ulong *)(param_4 + 0x40);
  uVar8 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (-uVar8 < 0x40) {
    uVar11 = ~(-1L << (-uVar8 & 0x3f));
  }
  uVar11 = uVar11 & *puVar9;
  if (param_2 == (undefined8 *)0x0) {
    lVar13 = 0;
    param_3 = 0;
  }
  else if (param_3 == 0) {
    lVar13 = 0;
  }
  else {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c2234);
      (*pcVar4)();
    }
    lVar6 = 0;
    lVar12 = 0;
    uVar10 = 0x3f - uVar8 >> 6;
    lVar13 = lVar6;
    while( true ) {
      while (uVar11 == 0) {
        bVar5 = SCARRY8(lVar13,1);
        lVar13 = lVar13 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c2230);
          (*pcVar4)();
        }
        if ((long)uVar10 <= lVar13) {
          uVar11 = 0;
          if ((long)uVar10 <= lVar6 + 1) {
            uVar10 = lVar6 + 1;
          }
          lVar13 = uVar10 - 1;
          param_3 = lVar12;
          goto LAB_1005c21e8;
        }
        uVar11 = puVar9[lVar13];
      }
      lVar12 = lVar12 + 1;
      uVar7 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar13 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar7 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      FUN_1005bee50(*(long *)(param_4 + 0x38) + uVar7 * 0x30,&local_d0);
      uStack_6f = uStack_af;
      uStack_88 = uStack_c8;
      local_90 = local_d0;
      uStack_80 = uStack_c0;
      param_2[1] = uVar3;
      *param_2 = uVar2;
      param_2[3] = uStack_c8;
      param_2[2] = local_d0;
      param_2[5] = CONCAT71(local_b7,uStack_b8);
      param_2[4] = uStack_c0;
      *(undefined8 *)((long)param_2 + 0x31) = uStack_af;
      *(ulong *)((long)param_2 + 0x29) = CONCAT17(uStack_b0,local_b7);
      local_a0 = uVar2;
      uStack_98 = uVar3;
      if (lVar12 == param_3) break;
      param_2 = param_2 + 8;
      _swift_bridgeObjectRetain(uVar3);
      lVar6 = lVar13;
    }
    _swift_bridgeObjectRetain(uVar3);
  }
LAB_1005c21e8:
  *param_1 = param_4;
  param_1[1] = (long)puVar9;
  param_1[2] = ~uVar8;
  param_1[3] = lVar13;
  param_1[4] = uVar11;
  return param_3;
}



/* Address: 0x1005c2234 | FUN_1005c2234 */

void FUN_1005c2234(long param_1)

{
  FUN_1005bdda8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1005c2248 | FUN_1005c2248 */

void FUN_1005c2248(long param_1,long param_2,code *param_3,undefined8 param_4,undefined8 *param_5,
                  code *param_6,undefined8 param_7,code *param_8)

{
  undefined8 uVar1;
  undefined8 local_60;
  undefined8 local_58;
  
  uVar1 = *param_5;
  local_58 = uVar1;
  if (param_3 != (code *)0x0) {
    (*param_3)(&local_58);
  }
  if ((param_1 != 0) && (0 < param_2)) {
    (*param_8)(param_1,1,param_2,&local_58);
  }
  if (param_6 != (code *)0x0) {
    local_60 = uVar1;
    (*param_6)(&local_60);
  }
  return;
}



/* Address: 0x1005c22e4 | FUN_1005c22e4 */

void FUN_1005c22e4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_150 [48];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  long local_a8;
  ulong *puStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_98 = ~uVar10;
  puStack_a0 = (ulong *)(param_1 + 0x40);
  uVar10 = -uVar10;
  local_88 = 0xffffffffffffffff;
  if (uVar10 < 0x40) {
    local_88 = ~(-1L << (uVar10 & 0x3f));
  }
  uStack_90 = 0;
  local_88 = local_88 & *puStack_a0;
  local_a8 = param_1;
  uStack_80 = param_2;
  local_78 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  FUN_1005be8f8(&local_e8);
  uVar2 = local_e0;
  uVar10 = local_e8;
  uVar3 = local_120;
  uVar4 = uStack_118;
  uVar5 = uStack_110;
  uVar6 = uStack_ff;
  if (local_e0 == 0) goto LAB_1005c25ec;
  uStack_118 = uStack_d0;
  local_120 = local_d8;
  uStack_108 = uStack_c0;
  uStack_110 = local_c8;
  uStack_ff = uStack_b7;
  local_107 = uStack_bf;
  uStack_100 = uStack_b8;
  lVar15 = *param_5;
  uVar8 = local_e8;
  uVar9 = local_e0;
  thunk_FUN_1005be370();
  lVar11 = *(long *)(lVar15 + 0x10);
  uVar12 = (ulong)~(uint)uVar9 & 1;
  lVar14 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_1005c2628:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1005c262c);
    (*pcVar7)();
  }
  if (*(long *)(lVar15 + 0x18) < lVar14) {
    FUN_1005be624(lVar14,param_4 & 1);
    uVar8 = uVar10;
    uVar12 = uVar2;
    thunk_FUN_1005be370();
    if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) {
LAB_1005c23f4:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1005c2404);
      (*pcVar7)();
    }
LAB_1005c2408:
    if ((uVar9 & 1) != 0) goto LAB_1005c240c;
LAB_1005c245c:
    lVar11 = *param_5;
    lVar14 = lVar11 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar10;
    puVar1[1] = uVar2;
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar8 * 0x30);
    *(undefined8 *)((long)puVar13 + 0x21) = uStack_ff;
    *(ulong *)((long)puVar13 + 0x19) = CONCAT17(uStack_100,local_107);
    puVar13[1] = uStack_118;
    *puVar13 = local_120;
    puVar13[3] = CONCAT71(local_107,uStack_108);
    puVar13[2] = uStack_110;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
LAB_1005c262c:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1005c2630);
      (*pcVar7)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_1005c2408;
    FUN_1005be474();
    if ((uVar9 & 1) == 0) goto LAB_1005c245c;
LAB_1005c240c:
    lVar14 = *param_5;
    FUN_1005bee50(&local_120,auStack_150);
    _swift_bridgeObjectRelease(uVar2);
    FUN_1005bee8c(&local_120);
    FUN_10054d4c4(auStack_150,*(long *)(lVar14 + 0x38) + uVar8 * 0x30);
  }
  FUN_1005be8f8(&local_e8);
  uVar3 = local_120;
  uVar4 = uStack_118;
  uVar5 = uStack_110;
  uVar6 = uStack_ff;
  uVar10 = local_e8;
  uVar2 = local_e0;
  local_120 = local_d8;
  uStack_118 = uStack_d0;
  uStack_110 = local_c8;
  uStack_108 = uStack_c0;
  local_107 = uStack_bf;
  uStack_100 = uStack_b8;
  uStack_ff = uStack_b7;
  while (uVar2 != 0) {
    lVar15 = *param_5;
    uVar8 = uVar10;
    uVar9 = uVar2;
    local_e8 = uVar10;
    local_e0 = uVar2;
    local_d8 = local_120;
    uStack_d0 = uStack_118;
    local_c8 = uStack_110;
    uStack_c0 = uStack_108;
    uStack_bf = local_107;
    uStack_b8 = uStack_100;
    uStack_b7 = uStack_ff;
    thunk_FUN_1005be370();
    lVar11 = *(long *)(lVar15 + 0x10);
    uVar12 = (ulong)~(uint)uVar9 & 1;
    lVar14 = lVar11 + uVar12;
    if (SCARRY8(lVar11,uVar12)) goto LAB_1005c2628;
    if (*(long *)(lVar15 + 0x18) < lVar14) {
      FUN_1005be624(lVar14,1);
      uVar8 = uVar10;
      uVar12 = uVar2;
      thunk_FUN_1005be370();
      if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) goto LAB_1005c23f4;
    }
    if ((uVar9 & 1) == 0) {
      lVar11 = *param_5;
      lVar14 = lVar11 + (uVar8 >> 6) * 8;
      *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar2;
      puVar13 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar8 * 0x30);
      *(undefined8 *)((long)puVar13 + 0x21) = uStack_ff;
      *(ulong *)((long)puVar13 + 0x19) = CONCAT17(uStack_100,local_107);
      puVar13[1] = uStack_118;
      *puVar13 = local_120;
      puVar13[3] = CONCAT71(local_107,uStack_108);
      puVar13[2] = uStack_110;
      if (SCARRY8(*(long *)(lVar11 + 0x10),1)) goto LAB_1005c262c;
      *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    }
    else {
      lVar14 = *param_5;
      FUN_1005bee50(&local_120,auStack_150);
      _swift_bridgeObjectRelease(uVar2);
      FUN_1005bee8c(&local_120);
      FUN_10054d4c4(auStack_150,*(long *)(lVar14 + 0x38) + uVar8 * 0x30);
    }
    FUN_1005be8f8(&local_e8);
    uVar3 = local_120;
    uVar4 = uStack_118;
    uVar5 = uStack_110;
    uVar6 = uStack_ff;
    uVar10 = local_e8;
    uVar2 = local_e0;
    local_120 = local_d8;
    uStack_118 = uStack_d0;
    uStack_110 = local_c8;
    uStack_108 = uStack_c0;
    local_107 = uStack_bf;
    uStack_100 = uStack_b8;
    uStack_ff = uStack_b7;
  }
LAB_1005c25ec:
  uStack_ff = uVar6;
  uStack_110 = uVar5;
  uStack_118 = uVar4;
  local_120 = uVar3;
  FUN_10000c650(local_a8,puStack_a0,local_98,uStack_90,local_88);
  _swift_release(param_3);
  return;
}



/* Address: 0x1005c2630 | FUN_1005c2630 */

undefined *
FUN_1005c2630(undefined *param_1,code *param_2,void *param_3,undefined *param_4,long param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  char *pcVar5;
  void *pvVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  undefined *local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  if (param_2 == (code *)0x0) {
    _swift_bridgeObjectRetain(param_1);
    puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
    thunk_FUN_1005bed1c();
  }
  else {
    puVar1 = param_1;
    pcVar4 = param_2;
    _swift_bridgeObjectRetain();
    (*param_2)();
    param_2 = pcVar4;
  }
  if (*(long *)(puVar1 + 0x10) == 0) {
    puVar3 = param_4;
    if (param_4 == (undefined *)0x0) {
      puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
      thunk_FUN_1005bed1c();
    }
    lVar7 = *(long *)(puVar3 + 0x10);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(puVar3);
    if (lVar7 == 0 && param_5 == 0) {
      _swift_bridgeObjectRelease(param_1);
      _swift_bridgeObjectRelease(puVar1);
      return (undefined *)0x0;
    }
    if (*(long *)(puVar1 + 0x10) == 0) {
      _swift_bridgeObjectRelease(puVar1);
      goto joined_r0x0001005c28e0;
    }
  }
  puVar3 = param_1;
  _swift_isUniquelyReferenced_nonNull_native(param_1);
  param_2 = FUN_1005be43c;
  param_3 = (void *)0x0;
  local_78 = param_1;
  FUN_1005c22e4(puVar1,FUN_1005be43c,0,puVar3,&local_78);
  _swift_bridgeObjectRelease(puVar1);
  param_1 = local_78;
joined_r0x0001005c28e0:
  local_c8 = param_1;
  if ((param_4 != (undefined *)0x0) && (*(long *)(param_4 + 0x10) != 0)) {
    _swift_bridgeObjectRetain(param_4);
    puVar1 = param_1;
    _swift_isUniquelyReferenced_nonNull_native(param_1);
    param_2 = FUN_1005be43c;
    param_3 = (void *)0x0;
    local_78 = param_1;
    FUN_1005c22e4(param_4,FUN_1005be43c,0,puVar1,&local_78);
    _swift_bridgeObjectRelease(param_4);
    local_c8 = local_78;
  }
  if (param_5 != 0) {
    local_78 = (undefined *)0x0;
    uStack_70 = 0xe000000000000000;
    _swift_errorRetain(param_5);
    SVar8.bridgeObject = param_3;
    SVar8.str = (char *)param_2;
    Swift::String::reserveCapacity(2,SVar8);
    local_60 = 0;
    uStack_58 = 0;
    local_68 = 0;
    local_50 = 0;
    _swift_getErrorValue(param_5,auStack_80,&local_98);
    FUN_1005c4024(local_98,uStack_90);
    local_50 = 0;
    puVar2 = local_c8;
    _swift_isUniquelyReferenced_nonNull_native();
    pcVar5 = (char *)0x656d2e726f727265;
    pvVar6 = (void *)0xed00006567617373;
    FUN_1005c1dac(&local_78);
    puVar3 = local_c8;
    local_78 = (undefined *)0x0;
    uStack_70 = 0xe000000000000000;
    SVar9.bridgeObject = pvVar6;
    SVar9.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar9);
    _swift_getErrorValue(param_5,auStack_a0,&local_b8);
    pcVar5 = &DAT_00000001;
    _swift_getDynamicType(local_b8,uStack_b0);
    uStack_c0 = local_a8;
    puVar1 = &DAT_100fd41e8;
    FUN_1000f7830(&DAT_100fd41e8,&DAT_100c648c0);
    SVar8 = Swift::String::_init(&local_c8,puVar1);
    SVar10.bridgeObject = puVar2;
    SVar10.str = pcVar5;
    Swift::String::write(SVar8,SVar10);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    local_50 = 0;
    puVar1 = puVar3;
    _swift_isUniquelyReferenced_nonNull_native(puVar3);
    local_c8 = puVar3;
    FUN_1005c1dac(&local_78,0x79742e726f727265,0xea00000000006570,puVar1);
    _swift_errorRelease(param_5);
  }
  return local_c8;
}



/* Address: 0x1005c28e8 | FUN_1005c28e8 */

void FUN_1005c28e8(long param_1)

{
  FUN_100004594();
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  if (*(long *)(param_1 + 0x40) != 0) {
    _swift_release(*(undefined8 *)(param_1 + 0x48));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x60));
  return;
}



/* Address: 0x1005c292c | FUN_1005c292c */

long FUN_1005c292c(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  lVar2 = *(long *)(param_2 + 0x40);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = uVar1;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  if (lVar2 == 0) {
    lVar2 = *(long *)(param_2 + 0x40);
    *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar2;
  }
  else {
    uVar1 = *(undefined8 *)(param_2 + 0x48);
    *(long *)(param_1 + 0x40) = lVar2;
    *(undefined8 *)(param_1 + 0x48) = uVar1;
    _swift_retain();
  }
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar1 = *(undefined8 *)(param_2 + 0x60);
  uVar3 = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = uVar3;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1005c29cc | FUN_1005c29cc */

long FUN_1005c29cc(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined8 uVar4;
  
  FUN_10008820c();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  plVar3 = (long *)(param_1 + 0x40);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  lVar1 = *(long *)(param_2 + 0x40);
  if (*plVar3 == 0) {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      *(long *)(param_1 + 0x40) = lVar1;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      _swift_retain();
      goto LAB_1005c2a68;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar2 = *(undefined8 *)(param_2 + 0x48);
      uVar4 = *(undefined8 *)(param_1 + 0x48);
      *(long *)(param_1 + 0x40) = lVar1;
      *(undefined8 *)(param_1 + 0x48) = uVar2;
      _swift_retain();
      _swift_release(uVar4);
      goto LAB_1005c2a68;
    }
    FUN_1005bf410(plVar3);
  }
  lVar1 = *(long *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *plVar3 = lVar1;
LAB_1005c2a68:
  *(undefined8 *)(param_1 + 0x50) = *(undefined8 *)(param_2 + 0x50);
  uVar2 = *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1005c2ab4 | FUN_1005c2ab4 */

void FUN_1005c2ab4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
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
  uVar2 = param_2[7];
  uVar1 = param_2[6];
  uVar4 = param_2[9];
  uVar3 = param_2[8];
  uVar6 = param_2[0xb];
  uVar5 = param_2[10];
  param_1[0xc] = param_2[0xc];
  param_1[9] = uVar4;
  param_1[8] = uVar3;
  param_1[0xb] = uVar6;
  param_1[10] = uVar5;
  param_1[7] = uVar2;
  param_1[6] = uVar1;
  return;
}



/* Address: 0x1005c2ae0 | FUN_1005c2ae0 */

undefined8 * FUN_1005c2ae0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  undefined8 uVar5;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar5 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar5;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  uVar1 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar1);
  plVar3 = param_1 + 8;
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  if (*plVar3 != 0) {
    if (param_2[8] != 0) {
      uVar2 = param_2[9];
      uVar1 = param_1[9];
      param_1[8] = param_2[8];
      param_1[9] = uVar2;
      _swift_release(uVar1);
      goto LAB_1005c2b5c;
    }
    FUN_1005bf410(plVar3);
  }
  lVar4 = param_2[8];
  param_1[9] = param_2[9];
  *plVar3 = lVar4;
LAB_1005c2b5c:
  uVar1 = param_2[0xb];
  uVar2 = param_1[0xb];
  param_1[10] = param_2[10];
  param_1[0xb] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  uVar1 = param_1[0xc];
  param_1[0xc] = param_2[0xc];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005c2b90 | FUN_1005c2b90 */

undefined1  [16] FUN_1005c2b90(void)

{
  return ZEXT816(0x100ee66a0);
}



/* Address: 0x1005c2ba0 | FUN_1005c2ba0 */

void FUN_1005c2ba0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x10));
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1005c2bc8 | FUN_1005c2bc8 */

undefined1 * FUN_1005c2bc8(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1005c2c14 | FUN_1005c2c14 */

undefined1 * FUN_1005c2c14(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  uVar3 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = *(undefined8 *)(param_1 + 0x20);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1005c2c80 | FUN_1005c2c80 */

void FUN_1005c2c80(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1005c2c94 | FUN_1005c2c94 */

undefined1 * FUN_1005c2c94(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x18) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005c2ce0 | FUN_1005c2ce0 */

undefined1  [16] FUN_1005c2ce0(void)

{
  return ZEXT816(0x100ee6730);
}



/* Address: 0x1005c2cf0 | FUN_1005c2cf0 */

void FUN_1005c2cf0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fd41f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fd41f0;
  FUN_1000f8b08(&DAT_100fd41f0,&DAT_100c648d0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fd41f8 = puVar2;
  return;
}



/* Address: 0x1005c2d40 | thunk_FUN_1005c2db4 */

void thunk_FUN_1005c2db4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005c2248(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30)
                ,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1005c2d44 | FUN_1005c2d44 */

void FUN_1005c2d44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20);
  return;
}



/* Address: 0x1005c2d6c | thunk_FUN_1005c2d70 */

void thunk_FUN_1005c2d70(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005c2d70 | FUN_1005c2d70 */

void FUN_1005c2d70(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  if (*(long *)(unaff_x20 + 0x28) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005c2db4 | FUN_1005c2db4 */

void FUN_1005c2db4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005c2248(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30)
                ,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1005c2de4 | FUN_1005c2de4 */

void FUN_1005c2de4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005c2e08 | FUN_1005c2e08 */

void FUN_1005c2e08(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1005c2e14 | FUN_1005c2e14 */

undefined1  [16] FUN_1005c2e14(void)

{
  return ZEXT816(0x100ee6870);
}



/* Address: 0x1005c2e24 | thunk_FUN_1005c2e28 */

void thunk_FUN_1005c2e28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64934;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64934,&DAT_100ee6870);
  DAT_100fd4208 = pTVar1;
  return;
}



/* Address: 0x1005c2e28 | FUN_1005c2e28 */

void FUN_1005c2e28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4208 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64934;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64934,&DAT_100ee6870);
  DAT_100fd4208 = pTVar1;
  return;
}



/* Address: 0x1005c2e68 | thunk_FUN_1005c2de4 */

void thunk_FUN_1005c2de4(void)

{
  FUN_1005c2de4();
  return;
}



/* Address: 0x1005c2e6c | thunk_FUN_1005c2d44 */

void thunk_FUN_1005c2d44(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20);
  return;
}



/* Address: 0x1005c2e70 | thunk_FUN_1005c2db4 */

void thunk_FUN_1005c2db4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005c2248(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30)
                ,*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x1005c2e74 | thunk_FUN_1005c2d70 */

void thunk_FUN_1005c2d70(void)

{
  thunk_FUN_1005c2d70();
  return;
}



/* Address: 0x1005c2e78 | FUN_1005c2e78 */

void FUN_1005c2e78(undefined8 *param_1)

{
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Address: 0x1005c2e90 | FUN_1005c2e90 */

void FUN_1005c2e90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_1005c2eb4();
  _swift_bridgeObjectRelease(param_3);
  return;
}


