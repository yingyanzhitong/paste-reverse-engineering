/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10083c4ec | FUN_10083c4ec */

void FUN_10083c4ec(ulong *param_1)

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
    FUN_100847474();
  }
  uVar5 = *(ulong *)(uVar4 + 0x10);
  local_50 = uVar4 + 0x20;
  uStack_48 = uVar5;
  _Var1 = Swift::_minimumMergeRunLength(uVar5);
  if (_Var1 < (long)uVar5) {
    minimumCapacity = uVar5 >> 1;
    _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (1 < uVar5) {
      CVar2.unknown = &DAT_100fe7538;
      FUN_1000f7830(&DAT_100fe7538,&DAT_100c7c660);
      _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(minimumCapacity,CVar2);
      *(ulong *)(_Var3.unknown + 0x10) = minimumCapacity;
    }
    local_68 = _Var3.unknown + 0x20;
    uStack_60 = minimumCapacity;
    FUN_1007fecb4(&local_68,auStack_58,&local_50,_Var1);
    *(undefined8 *)(_Var3.unknown + 0x10) = 0;
    _swift_release(_Var3.unknown);
  }
  else if (uVar5 != 0) {
    FUN_1007ff104(0,uVar5,1,&local_50);
  }
  *param_1 = uVar4;
  return;
}



/* Address: 0x10083c5f8 | FUN_10083c5f8 */

char * FUN_10083c5f8(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_1001037b4();
  FUN_100856dec(param_1,param_2);
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_bridgeObjectRelease(param_1);
  return tVar2.result.str;
}



/* Address: 0x10083c660 | FUN_10083c660 */

String FUN_10083c660(long param_1)

{
  String *pSVar1;
  ulong uVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  undefined *puVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  long lVar11;
  undefined *puVar12;
  Index after;
  undefined *puVar13;
  long lVar14;
  Character CVar15;
  String SVar16;
  _StringGuts _Var10;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar11 = *(long *)(param_1 + 0x10);
  if (lVar11 != 0) {
    FUN_10083547c(0,lVar11,0);
    lVar14 = 0;
    puVar12 = puVar6;
    do {
      pSVar1 = (String *)(param_1 + 0x20 + lVar14 * 0x10);
      pvVar3 = pSVar1->bridgeObject;
      SVar5 = *pSVar1;
      SVar4 = *pSVar1;
      SVar16 = *pSVar1;
      _swift_bridgeObjectRetain(pvVar3);
      uVar9 = Swift::String::get_count(SVar16);
      puVar13 = puVar12;
      if (uVar9 != 0) {
        FUN_10083547c(0,uVar9 & ((long)uVar9 >> 0x3f ^ 0xffffffffffffffffU),0);
        if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10083c964);
          (*pcVar7)();
        }
        after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
        do {
          CVar15 = Swift::String::get_subscript(after,SVar4);
          _Var10.unknown = CVar15.bridgeObject;
          bVar8 = Swift::Character::get_isLetter(CVar15);
          if ((!bVar8) && (bVar8 = Swift::Character::get_isNumber(CVar15), !bVar8)) {
            if ((CVar15.str == (undefined *)0x2d) &&
               (_Var10.unknown == (undefined *)0xe100000000000000)) {
              CVar15.bridgeObject = (void *)0xe100000000000000;
              CVar15.str = (char *)0x2d;
            }
            else {
              bVar8 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)CVar15.str,_Var10,(_StringComparisonResult)0x2d);
              if (!bVar8) {
                _swift_bridgeObjectRelease(_Var10.unknown);
                CVar15.bridgeObject = (void *)0xe100000000000000;
                CVar15.str = (char *)0x5f;
              }
            }
          }
          uVar2 = *(ulong *)(puVar12 + 0x10);
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar2) {
            FUN_10083547c(1 < *(ulong *)(puVar12 + 0x18),uVar2 + 1,1);
          }
          *(ulong *)(puVar12 + 0x10) = uVar2 + 1;
          *(Character *)(puVar12 + uVar2 * 0x10 + 0x20) = CVar15;
          after = Swift::String::index(after,SVar5);
          uVar9 = uVar9 - 1;
          puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        } while (uVar9 != 0);
      }
      FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
      FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                    PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
      SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                         ((String)(ZEXT816(0xe000000000000000) << 0x40));
      _swift_bridgeObjectRelease(puVar12);
      _swift_bridgeObjectRelease(pvVar3);
      uVar9 = *(ulong *)(puVar6 + 0x10);
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        FUN_10083547c(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
      }
      lVar14 = lVar14 + 1;
      *(ulong *)(puVar6 + 0x10) = uVar9 + 1;
      *(String *)(puVar6 + uVar9 * 0x10 + 0x20) = SVar16;
      puVar12 = puVar13;
    } while (lVar14 != lVar11);
  }
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  FUN_100134584(&DAT_100fe6f40,&DAT_100fe6f38,&DAT_100c7b090,
                PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518);
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0x2d;
  SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
  _swift_bridgeObjectRelease(puVar6);
  return SVar16;
}



/* Address: 0x10083c964 | FUN_10083c964 */

void FUN_10083c964(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  URL UVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x71) = param_7;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined1 *)(unaff_x22 + 0x70) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_3;
  puVar1 = &DAT_100fe7408;
  FUN_1000f7830(&DAT_100fe7408,&DAT_100c7c240);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar2;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x50) = UVar3.unknown;
  lVar5 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x58) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  plVar4 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10083ca48;
  FUN_1008396bc(param_1,param_2,param_3);
  return;
}



/* Address: 0x10083ca48 | FUN_10083ca48 */

/* WARNING: Removing unreachable block (ram,0x00010083cc88) */
/* WARNING: Removing unreachable block (ram,0x00010083cfa8) */
/* WARNING: Removing unreachable block (ram,0x00010083ccc0) */

void FUN_10083ca48(undefined *param_1)

{
  String *pSVar1;
  long *plVar2;
  char *pcVar3;
  _StringGuts _Var4;
  long lVar5;
  undefined *puVar6;
  _StringGuts _Var7;
  char cVar8;
  String SVar9;
  code *pcVar10;
  DirectoryHint DVar11;
  byte bVar12;
  bool bVar13;
  undefined8 *puVar14;
  char *pcVar15;
  char *pcVar16;
  undefined7 extraout_var;
  ulong uVar17;
  Data DVar18;
  Hasher into;
  undefined *puVar20;
  undefined *puVar21;
  ulong uVar22;
  ulong uVar23;
  ulong uVar24;
  undefined8 uVar25;
  long unaff_x20;
  char *pcVar26;
  undefined8 uVar27;
  NSDataReadingOptions contentsOf;
  undefined8 uVar28;
  long *unaff_x22;
  long lVar29;
  long lVar30;
  long lVar31;
  long lVar32;
  String filePath;
  char *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  char *local_b0 [11];
  char **ppcVar19;
  
  lVar30 = *unaff_x22;
  puVar14 = *(undefined8 **)(lVar30 + 0x68);
  lVar29 = *unaff_x22;
  _swift_task_dealloc();
  if (unaff_x20 == 0) {
    if ((param_1 != (undefined *)0x0) ||
       (param_1 = PTR___swiftEmptyArrayStorage_100eae0d8, *(char *)(lVar30 + 0x70) == '\x01')) {
      pcVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_100800688();
      uVar22 = *(ulong *)(param_1 + 0x10);
      if (uVar22 != 0) {
        uVar24 = 0;
        lVar31 = *(long *)(lVar30 + 0x58);
        pcVar10 = *(code **)(lVar30 + 0x38);
        lVar5 = *(long *)(lVar30 + 0x40);
        do {
          if (*(ulong *)(param_1 + 0x10) <= uVar24) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10083d030);
            (*pcVar10)();
          }
          contentsOf.unknown = *(undefined **)(lVar30 + 0x60);
          uVar25 = *(undefined8 *)(lVar30 + 0x48);
          uVar27 = *(undefined8 *)(lVar30 + 0x50);
          pcVar26 = *(char **)(lVar30 + 0x30);
          pSVar1 = (String *)(param_1 + uVar24 * 0x10 + 0x20);
          pcVar3 = pSVar1->str;
          puVar6 = pSVar1->bridgeObject;
          SVar9 = *pSVar1;
          local_b0[0] = pcVar26;
          _swift_bridgeObjectRetain_n(puVar6,2);
          _swift_bridgeObjectRetain(pcVar26);
          puVar20 = puVar6;
          FUN_1005b62ec(pcVar3);
          pcVar26 = local_b0[0];
          pcVar16 = local_b0[0];
          FUN_1005b32e4();
          (**(code **)(lVar31 + 0x38))(uVar25,1,1,uVar27);
          DVar11 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
          lVar32 = *(long *)(CONCAT71(extraout_var,DVar11.value) + -8);
          uVar17 = *(long *)(lVar32 + 0x40) + 0xfU & 0xfffffffffffffff0;
          _swift_task_alloc();
          (**(code **)(lVar32 + 0x68))();
          filePath.bridgeObject = puVar20;
          filePath.str = pcVar16;
          Foundation::URL::_init(filePath,(DirectoryHint)(__int8)uVar17);
          _swift_task_dealloc(uVar17);
          uVar25 = 0;
          DVar18 = Foundation::Data::_init(contentsOf);
          uVar27 = *(undefined8 *)(lVar30 + 0x60);
          uVar28 = *(undefined8 *)(lVar30 + 0x50);
          cVar8 = *(char *)(lVar30 + 0x71);
          _swift_bridgeObjectRelease(pcVar26);
          (**(code **)(lVar31 + 8))(uVar27,uVar28);
          local_d0 = pcVar3;
          puStack_c8 = puVar6;
          local_c0 = DVar18.unknown;
          uStack_b8 = uVar25;
          if (cVar8 == '\0') {
            if (*(long *)(pcVar10 + 0x10) != 0) {
              Swift::Hasher::init(*(__int64 *)(pcVar10 + 0x28));
              into.unknown = (undefined *)local_b0;
              Swift::String::hash(into,SVar9);
              uVar17 = Swift::Hasher::_finalize(into);
              uVar23 = -1L << ((ulong)(byte)pcVar10[0x20] & 0x3f);
              uVar17 = uVar17 & (uVar23 ^ 0xffffffffffffffff);
              if ((*(ulong *)(pcVar10 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) != 0) {
                do {
                  puVar14 = (undefined8 *)(*(long *)(pcVar10 + 0x30) + uVar17 * 0x10);
                  _Var4.unknown = (undefined *)*puVar14;
                  _Var7.unknown = (undefined *)puVar14[1];
                  if ((_Var4.unknown == pcVar3 && _Var7.unknown == puVar6) ||
                     (bVar13 = Swift::_stringCompareWithSmolCheck
                                         (_Var4,_Var7,(_StringComparisonResult)(__int8)pcVar3),
                     bVar13)) {
                    bVar12 = 1;
                    goto LAB_10083ce10;
                  }
                  uVar17 = uVar17 + 1 & ~uVar23;
                } while ((*(ulong *)(pcVar10 + (uVar17 >> 6) * 8 + 0x38) >> (uVar17 & 0x3f) & 1) !=
                         0);
                bVar12 = 0;
                goto LAB_10083ce10;
              }
            }
            bVar12 = 0;
          }
          else {
            bVar12 = pcVar10 == (code *)0x0 && lVar5 == 0;
            if (cVar8 == '\x01') {
              ppcVar19 = &local_d0;
              (*pcVar10)(ppcVar19,&local_c0);
              bVar12 = (byte)ppcVar19;
            }
          }
LAB_10083ce10:
          FUN_1001037b4(DVar18.unknown,uVar25);
          puVar20 = pcVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          pcVar26 = pcVar3;
          puVar21 = puVar6;
          local_b0[0] = pcVar15;
          FUN_100071370();
          uVar17 = (ulong)~(uint)puVar21 & 1;
          lVar32 = *(long *)(pcVar15 + 0x10) + uVar17;
          if (SCARRY8(*(long *)(pcVar15 + 0x10),uVar17)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10083d034);
            (*pcVar10)();
          }
          if (*(long *)(pcVar15 + 0x18) < lVar32) {
            FUN_100845dfc(lVar32,puVar20);
            pcVar15 = local_b0[0];
            pcVar26 = pcVar3;
            puVar20 = puVar6;
            FUN_100071370();
            if (((uint)puVar21 & 1) != ((uint)puVar20 & 1)) {
              Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
              return;
            }
LAB_10083ce9c:
            if (((ulong)puVar21 & 1) == 0) goto LAB_10083cea0;
LAB_10083cb38:
            puVar14 = (undefined8 *)(*(long *)(pcVar15 + 0x38) + (long)pcVar26 * 0x18);
            uVar27 = *puVar14;
            uVar28 = puVar14[1];
            *puVar14 = DVar18.unknown;
            puVar14[1] = uVar25;
            *(byte *)(puVar14 + 2) = bVar12 & 1;
            FUN_10003bf2c(uVar27,uVar28);
            _swift_bridgeObjectRelease(puVar6);
            FUN_10003bf2c(DVar18.unknown,uVar25);
          }
          else {
            if (((ulong)puVar20 & 1) != 0) goto LAB_10083ce9c;
            FUN_100844d28();
            pcVar15 = local_b0[0];
            if (((ulong)puVar21 & 1) != 0) goto LAB_10083cb38;
LAB_10083cea0:
            *(ulong *)(pcVar15 + ((ulong)pcVar26 >> 6) * 8 + 0x40) =
                 *(ulong *)(pcVar15 + ((ulong)pcVar26 >> 6) * 8 + 0x40) |
                 1L << ((ulong)pcVar26 & 0x3f);
            plVar2 = (long *)(*(long *)(pcVar15 + 0x30) + (long)pcVar26 * 0x10);
            *plVar2 = (long)pcVar3;
            plVar2[1] = (long)puVar6;
            puVar14 = (undefined8 *)(*(long *)(pcVar15 + 0x38) + (long)pcVar26 * 0x18);
            *puVar14 = DVar18.unknown;
            puVar14[1] = uVar25;
            *(byte *)(puVar14 + 2) = bVar12 & 1;
            FUN_10003bf2c(DVar18.unknown,uVar25);
            if (SCARRY8(*(long *)(pcVar15 + 0x10),1)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10083d038);
              (*pcVar10)();
            }
            *(long *)(pcVar15 + 0x10) = *(long *)(pcVar15 + 0x10) + 1;
          }
          uVar24 = uVar24 + 1;
        } while (uVar24 != uVar22);
      }
      _swift_bridgeObjectRelease(param_1);
      uVar25 = *(undefined8 *)(lVar30 + 0x48);
      _swift_task_dealloc(*(undefined8 *)(lVar30 + 0x60));
      _swift_task_dealloc(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010083cf68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar29 + 8))(pcVar15);
      return;
    }
    uVar25 = *(undefined8 *)(lVar30 + 0x30);
    FUN_100838658();
    _swift_allocError(&DAT_100f05a78,puVar14,0,0);
    *puVar14 = uVar25;
    puVar14[1] = 0;
    _swift_willThrow();
    _swift_bridgeObjectRetain(uVar25);
  }
  uVar25 = *(undefined8 *)(lVar30 + 0x48);
  _swift_task_dealloc(*(undefined8 *)(lVar30 + 0x60));
  _swift_task_dealloc(uVar25);
                    /* WARNING: Could not recover jumptable at 0x00010083cac4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar29 + 8))();
  return;
}



/* Address: 0x10083d038 | FUN_10083d038 */

void FUN_10083d038(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100004594(unaff_x20 + 0x38);
  _swift_deallocObject();
  return;
}



/* Address: 0x10083d074 | FUN_10083d074 */

undefined8 FUN_10083d074(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_10083d0f8(param_2,param_1,&DAT_100f05c28);
  return param_2;
}



/* Address: 0x10083d0a8 | FUN_10083d0a8 */

undefined1  [16] FUN_10083d0a8(void)

{
  return ZEXT816(0x100f05ba8);
}



/* Address: 0x10083d0b8 | thunk_FUN_10083d0bc */

void thunk_FUN_10083d0bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  FUN_100004594(param_1 + 0x28);
  return;
}



/* Address: 0x10083d0bc | FUN_10083d0bc */

void FUN_10083d0bc(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  FUN_100004594(param_1 + 0x28);
  return;
}



/* Address: 0x10083d0f4 | thunk_FUN_10083d0f8 */

undefined8 * thunk_FUN_10083d0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  lVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar5;
  pcVar3 = (code *)**(undefined8 **)(lVar5 + -8);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar3)(param_1 + 5,param_2 + 5,lVar5);
  return param_1;
}



/* Address: 0x10083d0f8 | FUN_10083d0f8 */

undefined8 * FUN_10083d0f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  *param_1 = *param_2;
  uVar4 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar4;
  uVar1 = param_2[2];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  lVar5 = param_2[8];
  param_1[9] = param_2[9];
  param_1[8] = lVar5;
  pcVar3 = (code *)**(undefined8 **)(lVar5 + -8);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar2);
  (*pcVar3)(param_1 + 5,param_2 + 5,lVar5);
  return param_1;
}



/* Address: 0x10083d184 | thunk_FUN_10083d188 */

undefined8 * thunk_FUN_10083d188(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Address: 0x10083d188 | FUN_10083d188 */

undefined8 * FUN_10083d188(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  FUN_10008820c(param_1 + 5,param_2 + 5);
  return param_1;
}



/* Address: 0x10083d218 | thunk_FUN_10083d21c */

undefined8 * thunk_FUN_10083d21c(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(param_1 + 5);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x10083d21c | FUN_10083d21c */

undefined8 * FUN_10083d21c(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[4];
  uVar1 = param_1[4];
  param_1[3] = param_2[3];
  param_1[4] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(param_1 + 5);
  uVar2 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = uVar2;
  uVar2 = param_2[7];
  param_1[8] = param_2[8];
  param_1[7] = uVar2;
  param_1[9] = param_2[9];
  return param_1;
}



/* Address: 0x10083d290 | FUN_10083d290 */

undefined1  [16] FUN_10083d290(void)

{
  return ZEXT816(0x100f05c28);
}



/* Address: 0x10083d2a0 | FUN_10083d2a0 */

undefined1  [16] FUN_10083d2a0(void)

{
  return ZEXT816(0x100f05c58);
}



/* Address: 0x10083d2b0 | FUN_10083d2b0 */

void FUN_10083d2b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100837380(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10083d2c8 | FUN_10083d2c8 */

undefined1  [16] FUN_10083d2c8(void)

{
  return ZEXT816(0x100f05cf8);
}



/* Address: 0x10083d2d8 | thunk_FUN_10083d2dc */

undefined8 * thunk_FUN_10083d2dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10083d2dc | FUN_10083d2dc */

undefined8 * FUN_10083d2dc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1001037b4(uVar1,uVar2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10083d324 | FUN_10083d324 */

undefined8 * FUN_10083d324(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  FUN_1001037b4(uVar1,uVar3);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  FUN_10003bf2c(uVar2,uVar4);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10083d374 | FUN_10083d374 */

undefined8 * FUN_10083d374(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  FUN_10003bf2c(uVar1,uVar2);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  return param_1;
}



/* Address: 0x10083d3b4 | FUN_10083d3b4 */

undefined1  [16] FUN_10083d3b4(void)

{
  return ZEXT816(0x100f05d78);
}



/* Address: 0x10083d3c4 | thunk_FUN_10083d0bc */

void thunk_FUN_10083d0bc(void)

{
  thunk_FUN_10083d0bc();
  return;
}



/* Address: 0x10083d3c8 | FUN_10083d3c8 */

void FUN_10083d3c8(void)

{
  FUN_10083d2b0();
  return;
}



/* Address: 0x10083d3dc | thunk_FUN_10083d0f8 */

void thunk_FUN_10083d0f8(void)

{
  thunk_FUN_10083d0f8();
  return;
}



/* Address: 0x10083d3e0 | thunk_FUN_10083d188 */

void thunk_FUN_10083d188(void)

{
  thunk_FUN_10083d188();
  return;
}



/* Address: 0x10083d3e4 | thunk_FUN_10083d21c */

void thunk_FUN_10083d21c(void)

{
  thunk_FUN_10083d21c();
  return;
}



/* Address: 0x10083d3e8 | thunk_FUN_10083d2dc */

void thunk_FUN_10083d2dc(void)

{
  thunk_FUN_10083d2dc();
  return;
}



/* Address: 0x10083d3ec | FUN_10083d3ec */

void FUN_10083d3ec(void)

{
  FUN_10083be2c();
  return;
}



/* Address: 0x10083d400 | FUN_10083d400 */

undefined8 *
FUN_10083d400(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined *param_4,
             undefined *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9)

{
  undefined8 *puVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  bool bVar5;
  byte bVar6;
  undefined8 **ppuVar7;
  long lVar8;
  Date DVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  uint uVar17;
  ulong uVar18;
  undefined2 uVar19;
  undefined4 uVar20;
  uint uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 *puVar24;
  undefined8 *puVar25;
  undefined8 **appuStack_140 [2];
  undefined8 ***local_130;
  undefined1 auStack_12e [6];
  long local_128;
  undefined8 local_120;
  undefined4 local_114;
  undefined *local_110 [3];
  undefined8 *local_f0;
  undefined8 local_e8;
  undefined1 auStack_b8 [24];
  long local_a0;
  undefined8 *local_90 [3];
  undefined8 local_78;
  long lStack_70;
  uint local_54;
  
  uVar23 = *(ulong *)(param_9 + 0x10);
  local_110[0] = param_4;
  local_110[1] = param_5;
  local_110[2] = (undefined *)param_6;
  _swift_bridgeObjectRetain(uVar23);
  FUN_1007ffcdc(param_1,param_2,param_7,param_8);
  uVar15 = 0;
  puVar25 = param_1;
  uVar13 = param_2;
  uVar22 = uVar23;
  FUN_10082ebc8();
  puVar14 = puVar25;
  uVar16 = uVar13;
  uVar18 = uVar15;
  FUN_100804a74();
  uVar17 = (uint)uVar18;
  FUN_1007fb2c4(uVar13,uVar15,uVar22,uVar22 >> 0x10 & 0xffff);
  _swift_bridgeObjectRelease();
  puVar12 = puVar14;
  if ((uVar17 >> 0x10 & 0xff) == 1) {
    _swift_errorRetain(puVar14);
  }
  else {
    if ((uVar17 & 0xff00) != 0x200) {
      uVar21 = uVar17 & 0x1ff;
      uVar3 = uVar17 >> 0x10;
      local_f0 = puVar14;
      local_e8 = uVar16;
      if ((uVar18 & 0xff) == 0) {
        FUN_1007fb278(puVar14,uVar16,uVar18,uVar3);
        FUN_1007fb278(puVar14,uVar16,uVar18,uVar3);
        thunk_FUN_1005b3cd0(puVar14,uVar16);
        bVar5 = false;
        puVar25 = (undefined8 *)0x0;
        local_54 = uVar17 >> 8 & 1;
        uVar20 = 0;
      }
      else {
        puVar25 = puVar14;
        FUN_1000f4a4c(puVar14,uVar16,uVar18);
        puVar11 = puVar25;
        FUN_10080b43c();
        puVar12 = (undefined8 *)&DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar11,0,0);
        *(char *)puVar11 = (char)puVar25;
        *(undefined1 *)((long)puVar11 + 1) = 0;
        _swift_willThrow();
        FUN_1007fb278(puVar14,uVar16,uVar18,uVar3);
        _swift_errorRetain(puVar12);
        local_54 = 0;
        uVar20 = 0;
        bVar5 = true;
        puVar25 = puVar12;
      }
      goto LAB_10083d564;
    }
    FUN_10080a3bc();
    puVar12 = (undefined8 *)&DAT_100f05368;
    _swift_allocError(&DAT_100f05368,puVar25,0,0);
    *puVar25 = param_1;
    puVar25[1] = param_2;
    puVar25[2] = 0;
    puVar25[3] = 0;
    *(undefined1 *)(puVar25 + 4) = 0;
    _swift_bridgeObjectRetain(param_1);
    _swift_bridgeObjectRetain(param_2);
  }
  _swift_errorRetain(puVar12);
  local_54 = 0;
  local_e8 = 0;
  uVar21 = 0;
  bVar5 = true;
  uVar20 = 1;
  puVar25 = (undefined8 *)0x0;
  local_f0 = puVar12;
LAB_10083d564:
  FUN_10080b3ec(param_9 + 0x18,auStack_b8);
  if (local_a0 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_3);
    FUN_10080a674(auStack_b8);
  }
  else {
    local_114 = uVar20;
    FUN_100076508(auStack_b8,local_90);
    local_128 = lStack_70;
    ppuVar7 = local_90;
    local_120 = local_78;
    FUN_100004640();
    lVar8 = 0;
    appuStack_140[1] = ppuVar7;
    FUN_1007fb264();
    lVar4 = -(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar24 = (undefined1 *)((long)appuStack_140 + lVar4);
    local_130 = appuStack_140;
    FUN_1007fb128();
    puVar10 = local_110[1];
    DVar9.unknown = local_110[1];
    _swift_bridgeObjectRetain();
    Foundation::Date::get_now(DVar9);
    *puVar24 = 0;
    *(undefined8 **)((long)appuStack_140 + lVar4 + 8) = param_1;
    *(undefined8 *)((long)&stack0xfffffffffffffed0 + lVar4) = param_2;
    *(undefined1 *)((long)&local_128 + lVar4) = 0;
    *(undefined **)((long)&local_120 + lVar4) = local_110[0];
    *(undefined **)(&stack0xfffffffffffffee8 + lVar4) = puVar10;
    *(undefined **)((long)local_110 + lVar4) = local_110[2];
    puVar11 = puVar12;
    if (!bVar5) {
      _swift_errorRetain(puVar25);
      uVar15 = (ulong)local_54;
      uVar22 = uVar15;
      FUN_10081c834(puVar12,uVar15,0);
      FUN_1005b32e4();
      FUN_10081c820(puVar12,uVar15,0);
      _swift_errorRelease(0);
      uVar19 = (undefined2)(local_54 << 8);
    }
    else {
      _swift_errorRetain(puVar25);
      FUN_10081c834(puVar12,local_54,1);
      _swift_errorRelease(0);
      uVar22 = 0;
      uVar19 = 0;
    }
    iVar2 = *(int *)(lVar8 + 0x18);
    *(undefined8 *)(puVar24 + *(int *)(lVar8 + 0x14)) = param_3;
    *(undefined8 **)(puVar24 + iVar2) = puVar25;
    puVar1 = (undefined8 *)(puVar24 + *(int *)(lVar8 + 0x1c));
    *puVar1 = puVar11;
    puVar1[1] = uVar22;
    *(undefined2 *)(puVar1 + 2) = uVar19;
    *(bool *)((long)puVar1 + 0x12) = bVar5;
    (**(code **)(local_128 + 8))(puVar24,local_120);
    FUN_10080a754(puVar24);
    FUN_100004594(local_90);
    uVar20 = local_114;
  }
  if (bVar5) {
    local_90[0] = puVar12;
    bVar6 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    _swift_errorRetain(puVar12);
    if ((bVar6 & 1) != 0) {
      puVar10 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (local_90,puVar10,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_10080a6bc(local_f0,local_e8,uVar21,uVar20);
    FUN_1007fb2c4(puVar14,uVar16,uVar18,uVar18 >> 0x10 & 0xffff);
    FUN_10081c820(puVar12,local_54,1);
    _swift_errorRelease(puVar25);
    _swift_bridgeObjectRelease(uVar23);
  }
  else {
    _swift_bridgeObjectRetain(puVar12);
    FUN_10080a6bc(local_f0,local_e8,uVar21,uVar20);
    FUN_1007fb2c4(puVar14,uVar16,uVar18,uVar17 >> 0x10);
    FUN_10081c820(puVar12,local_54,0);
    _swift_errorRelease(puVar25);
    _swift_bridgeObjectRelease(uVar23);
  }
  return puVar12;
}



/* Address: 0x10083d968 | FUN_10083d968 */

void FUN_10083d968(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_5;
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_9,param_8,0x100cc1f30,&TargetProtocolRequirement_100cc1f58);
  *(long *)(unaff_x22 + 0x58) = lVar1;
  lVar1 = *(long *)(lVar1 + -8);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  uVar2 = *(long *)(lVar1 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  (**(code **)(lVar1 + 0x10))();
  plVar3 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_10083da88;
  FUN_10083db18(plVar3,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,uVar2,param_6,
                param_7);
  return;
}



/* Address: 0x10083da88 | FUN_10083da88 */

void FUN_10083da88(void)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar6 = *unaff_x22;
  uVar3 = *(undefined8 *)(lVar6 + 0x58);
  lVar1 = *(long *)(lVar6 + 0x60);
  uVar4 = *(undefined8 *)(lVar6 + 0x50);
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x70));
  (**(code **)(lVar1 + 8))(uVar4,uVar3);
  uVar3 = *(undefined8 *)(lVar6 + 0x68);
  if (unaff_x20 == 0) {
    uVar7 = *(undefined8 *)(lVar6 + 0x18);
    uVar4 = *(undefined8 *)(lVar6 + 0x10);
    uVar9 = *(undefined8 *)(lVar6 + 0x28);
    uVar8 = *(undefined8 *)(lVar6 + 0x20);
    uVar11 = *(undefined8 *)(lVar6 + 0x38);
    uVar10 = *(undefined8 *)(lVar6 + 0x30);
    puVar2 = *(undefined8 **)(lVar6 + 0x48);
    puVar2[6] = *(undefined8 *)(lVar6 + 0x40);
    puVar2[3] = uVar9;
    puVar2[2] = uVar8;
    puVar2[5] = uVar11;
    puVar2[4] = uVar10;
    puVar2[1] = uVar7;
    *puVar2 = uVar4;
  }
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010083db14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar5 + 8))();
  return;
}



/* Address: 0x10083db18 | FUN_10083db18 */

void FUN_10083db18(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,long param_12)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  int *piVar6;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x88) = param_10;
  *(undefined8 *)(unaff_x22 + 0x90) = param_11;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x80) = param_9;
  *(undefined1 *)(unaff_x22 + 0xb8) = param_7;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x70) = param_6;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  lVar2 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 0x98) = lVar2;
  lVar2 = *(long *)(lVar2 + -8);
  *(long *)(unaff_x22 + 0xa0) = lVar2;
  uVar3 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar3;
  piVar6 = *(int **)(param_12 + 8);
  iVar1 = *piVar6;
  plVar4 = (long *)(ulong)(uint)piVar6[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb0) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10083dc30;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    (*(code *)((long)iVar1 + (long)piVar6))
              (param_2,param_3 & 0xcfffffffffffffff,param_6,param_10,param_12);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10083dc30 | FUN_10083dc30 */

/* WARNING: Removing unreachable block (ram,0x00010083df34) */

void FUN_10083dc30(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long lVar8;
  _StringGuts _Var9;
  undefined *puVar10;
  long lVar11;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  undefined8 *puVar12;
  long lVar13;
  undefined8 uVar14;
  long *unaff_x22;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar17 = *unaff_x22;
  lVar15 = *unaff_x22;
  _Var9.unknown = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar17 + 0xb0));
  if (unaff_x20 == 0) {
    uVar14 = *(undefined8 *)(lVar17 + 0x80);
    Swift::_StringGuts::grow(0x10,_Var9);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar19 = Swift::__typeName(SUB81(uVar14,0));
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar19,SVar20);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar19.bridgeObject = (void *)0xe100000000000000;
    SVar19.str = (char *)0x3e;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar19,SVar21);
    puVar12 = (undefined8 *)0xed00003c72656469;
    FUN_10011da54(param_1,param_2);
    if ((ulong)param_2 >> 0x3c < 0xf) {
      lVar13 = *(long *)(lVar17 + 0xa0);
      uVar6 = *(undefined8 *)(lVar17 + 0xa8);
      lVar1 = *(long *)(lVar17 + 0x90);
      uVar2 = *(undefined8 *)(lVar17 + 0x98);
      uVar14 = *(undefined8 *)(lVar17 + 0x80);
      lVar3 = *(long *)(lVar17 + 0x88);
      uVar16 = *(undefined8 *)(lVar17 + 0x78);
      uVar4 = *(undefined8 *)(lVar17 + 0x68);
      _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0x70));
      FUN_10003bf18(param_1,param_2);
      FUN_10003bf18(0,0xf000000000000000);
      *(undefined8 *)(lVar17 + 0x48) = param_1;
      *(undefined **)(lVar17 + 0x50) = param_2;
      uVar7 = param_1;
      puVar10 = param_2;
      FUN_1001037b4(param_1,param_2);
      FUN_10083e628();
      (**(code **)(lVar13 + 0x10))(uVar6,uVar4,uVar2);
      UNRECOVERED_JUMPTABLE = *(code **)(lVar1 + 0x30);
      *(undefined8 *)(lVar17 + 0x28) = uVar14;
      uVar18 = *(undefined8 *)(lVar1 + 8);
      *(undefined8 *)(lVar17 + 0x38) = *(undefined8 *)(lVar1 + 0x10);
      *(undefined8 *)(lVar17 + 0x30) = uVar18;
      *(undefined8 *)(lVar17 + 0x40) = *(undefined8 *)(lVar1 + 0x18);
      lVar8 = lVar17 + 0x10;
      FUN_10000cbb0(lVar8);
      (*UNRECOVERED_JUMPTABLE)
                (lVar8,uVar7,puVar10,0x766f7250656c6946,0xed00003c72656469,uVar6,uVar14,lVar1);
      FUN_10003bf18(param_1,param_2);
      (**(code **)(*(long *)(lVar3 + -8) + 8))(uVar16);
      (**(code **)(lVar13 + 8))(uVar4,uVar2);
      FUN_10003bf18(param_1,param_2);
      FUN_10083ef98(lVar17 + 0x10,*(undefined8 *)(lVar17 + 0x58));
    }
    else {
      bVar5 = *(byte *)(lVar17 + 0xb8);
      FUN_10003bf18(param_1,param_2);
      uVar14 = *(undefined8 *)(lVar17 + 0x98);
      lVar8 = *(long *)(lVar17 + 0xa0);
      lVar13 = *(long *)(lVar17 + 0x88);
      uVar6 = *(undefined8 *)(lVar17 + 0x70);
      uVar2 = *(undefined8 *)(lVar17 + 0x78);
      uVar16 = *(undefined8 *)(lVar17 + 0x68);
      if ((bVar5 & 1) == 0) {
        _swift_bridgeObjectRelease();
        FUN_100838658();
        _swift_allocError(&DAT_100f05a78,puVar12,0,0);
        *puVar12 = uVar6;
        puVar12[1] = 0x2000000000000000;
        _swift_willThrow();
        FUN_10003bf18(param_1,param_2);
        (**(code **)(*(long *)(lVar13 + -8) + 8))(uVar2,lVar13);
        UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
        goto LAB_10083dcc0;
      }
      puVar12 = *(undefined8 **)(lVar17 + 0x58);
      _swift_bridgeObjectRelease();
      puVar12[3] = &DAT_100f05f08;
      puVar12[4] = &PTR_PTR_100f05e88;
      FUN_10083efb8();
      puVar12[5] = uVar6;
      FUN_10083eff8();
      puVar12[6] = uVar6;
      FUN_10003bf18(param_1,param_2);
      *puVar12 = 0x766f7250656c6946;
      puVar12[1] = 0xed00003c72656469;
      (**(code **)(*(long *)(lVar13 + -8) + 8))(uVar2,lVar13);
      (**(code **)(lVar8 + 8))(uVar16,uVar14);
    }
    _swift_task_dealloc(*(undefined8 *)(lVar17 + 0xa8));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    uVar14 = *(undefined8 *)(lVar17 + 0x98);
    lVar8 = *(long *)(lVar17 + 0xa0);
    lVar13 = *(long *)(lVar17 + 0x88);
    uVar6 = *(undefined8 *)(lVar17 + 0x78);
    uVar16 = *(undefined8 *)(lVar17 + 0x68);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar17 + 0x70));
    (**(code **)(*(long *)(lVar13 + -8) + 8))(uVar6,lVar13);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 8);
LAB_10083dcc0:
    (*UNRECOVERED_JUMPTABLE)(uVar16,uVar14);
    _swift_task_dealloc(*(undefined8 *)(lVar17 + 0xa8));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 8);
    lVar15 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar15 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x00010083dd04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10083dfe4 | FUN_10083dfe4 */

/* WARNING: Removing unreachable block (ram,0x00010083e130) */

void FUN_10083dfe4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9)

{
  ulong *puVar1;
  undefined8 uVar2;
  int iVar3;
  byte bVar4;
  long lVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined1 *puVar12;
  Date DVar13;
  long *plVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined8 uVar19;
  uint uVar20;
  undefined8 uVar21;
  long unaff_x22;
  undefined8 uVar22;
  code *pcVar23;
  undefined *puVar24;
  ushort local_cc;
  undefined1 *local_c0;
  
  *(undefined8 *)(unaff_x22 + 0xb8) = param_7;
  *(long *)(unaff_x22 + 0xc0) = param_8;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  lVar5 = 0;
  _swift_getAssociatedTypeWitness();
  *(long *)(unaff_x22 + 200) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0xd0) = lVar5;
  uVar6 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xd8) = uVar6;
  (**(code **)(lVar5 + 0x10))();
  puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10080055c(PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar7 = 0x68746150656c6966;
  puVar16 = &DAT_e800000000000000;
  FUN_10082e974(0x68746150656c6966,&DAT_e800000000000000,puVar24);
  _swift_bridgeObjectRelease(puVar24);
  uVar8 = uVar7;
  FUN_10083d400(uVar7,puVar16,0,0xd000000000000020,0x8000000100db1f60,0x7a,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(puVar16);
  puVar24 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10080055c(PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar9 = 0x73694d776f6c6c61;
  puVar17 = (undefined1 *)0xec000000676e6973;
  FUN_10082e974(0x73694d776f6c6c61,0xec000000676e6973,puVar24);
  _swift_bridgeObjectRelease(puVar24);
  uVar22 = *(undefined8 *)(param_8 + 0x10);
  _swift_bridgeObjectRetain(uVar22);
  uVar7 = uVar9;
  puVar16 = puVar17;
  FUN_1007ffcdc(uVar9,puVar17,param_6,param_7);
  uVar19 = 3;
  uVar10 = uVar7;
  puVar18 = puVar16;
  uVar21 = uVar22;
  FUN_10082ebc8();
  uVar20 = (uint)uVar21;
  if ((uVar20 >> 0x10 & 0xff) == 1) {
    *(undefined1 **)(unaff_x22 + 0x98) = puVar18;
    bVar4 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar4 & 1) != 0) {
      puVar24 = &DAT_100fe7218;
      FUN_1000f7830(&DAT_100fe7218,&DAT_100c7c6a0);
      _swift_willThrowTypedImpl
                (unaff_x22 + 0x98,puVar24,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
  }
  else {
    if ((uVar20 & 0xff00) != 0x200) {
      if ((uVar20 & 0xff) == 3) {
        FUN_1007fb28c();
        puVar24 = (undefined *)0x0;
        local_cc = (ushort)uVar21 & 0x103;
        local_c0 = puVar18;
      }
      else {
        puVar12 = puVar18;
        FUN_1000f4a4c(puVar18,uVar19,uVar21);
        puVar15 = puVar12;
        FUN_10080b43c();
        puVar24 = &DAT_100f04860;
        _swift_allocError(&DAT_100f04860,puVar15,0,0);
        *puVar15 = (char)puVar12;
        local_cc = 3;
        puVar15[1] = 3;
        _swift_willThrow();
        local_c0 = (undefined1 *)0x0;
      }
      goto LAB_10083e2b8;
    }
    FUN_1007fb2c4(puVar18,uVar19,uVar21,uVar20 >> 0x10);
  }
  puVar24 = (undefined *)0x0;
  local_c0 = (undefined1 *)0x0;
  local_cc = 3;
LAB_10083e2b8:
  FUN_10080b3ec(param_8 + 0x18,unaff_x22 + 0x70);
  if (*(long *)(unaff_x22 + 0x88) == 0) {
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(puVar17);
    _swift_errorRelease(puVar24);
    FUN_1007fb2c4(puVar18,uVar19,uVar21,uVar20 >> 0x10);
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(puVar16);
    FUN_10080a674(unaff_x22 + 0x70);
    _swift_bridgeObjectRelease(uVar22);
  }
  else {
    FUN_100076508(unaff_x22 + 0x70,unaff_x22 + 0x48);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    lVar5 = *(long *)(unaff_x22 + 0x68);
    FUN_100004640(unaff_x22 + 0x48,uVar2);
    lVar11 = 0;
    FUN_1007fb264();
    puVar12 = (undefined1 *)(*(long *)(*(long *)(lVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    DVar13.unknown = (undefined *)0x0;
    FUN_1007fb128();
    Foundation::Date::get_now(DVar13);
    *puVar12 = 0;
    *(undefined8 *)(puVar12 + 8) = uVar7;
    *(undefined1 **)(puVar12 + 0x10) = puVar16;
    puVar12[0x18] = 3;
    *(undefined8 *)(puVar12 + 0x20) = 0xd000000000000020;
    *(undefined8 *)(puVar12 + 0x28) = 0x8000000100db1f60;
    *(undefined8 *)(puVar12 + 0x30) = 0x7b;
    iVar3 = *(int *)(lVar11 + 0x18);
    *(undefined8 *)(puVar12 + *(int *)(lVar11 + 0x14)) = uVar10;
    *(undefined **)(puVar12 + iVar3) = puVar24;
    puVar1 = (ulong *)(puVar12 + *(int *)(lVar11 + 0x1c));
    *puVar1 = (ulong)local_c0 & 1;
    puVar1[1] = 0;
    *(ushort *)(puVar1 + 2) = local_cc;
    *(undefined1 *)((long)puVar1 + 0x12) = 0;
    pcVar23 = *(code **)(lVar5 + 8);
    _swift_errorRetain(puVar24);
    (*pcVar23)(puVar12,uVar2,lVar5);
    _swift_bridgeObjectRelease(uVar9);
    _swift_bridgeObjectRelease(puVar17);
    FUN_1007fb2c4(puVar18,uVar19,uVar21,uVar20 >> 0x10);
    _swift_errorRelease(puVar24);
    FUN_10080a754(puVar12);
    _swift_task_dealloc(puVar12);
    FUN_100004594(unaff_x22 + 0x48);
    _swift_bridgeObjectRelease(uVar22);
  }
  plVar14 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xe0) = plVar14;
  *plVar14 = unaff_x22;
  plVar14[1] = (long)FUN_10083e564;
  FUN_10083d968(plVar14,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,uVar6,uVar8,
                (uint)local_c0 & 1,param_9);
  return;
}



/* Address: 0x10083e564 | FUN_10083e564 */

void FUN_10083e564(void)

{
  long lVar1;
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  undefined8 *puVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar4 = *unaff_x22;
  uVar5 = *(undefined8 *)(lVar4 + 200);
  lVar1 = *(long *)(lVar4 + 0xd0);
  uVar6 = *(undefined8 *)(lVar4 + 0xb8);
  uVar8 = *(undefined8 *)(lVar4 + 0xc0);
  uVar7 = *(undefined8 *)(lVar4 + 0xa8);
  uVar9 = *(undefined8 *)(lVar4 + 0xb0);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xe0));
  (**(code **)(lVar1 + 8))(uVar7,uVar5);
  FUN_1001b9e60(uVar9,uVar6);
  _swift_release(uVar8);
  if (unaff_x20 == 0) {
    puVar2 = *(undefined8 **)(lVar4 + 0xa0);
    _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xd8));
    uVar6 = *(undefined8 *)(lVar4 + 0x18);
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar8 = *(undefined8 *)(lVar4 + 0x28);
    uVar7 = *(undefined8 *)(lVar4 + 0x20);
    uVar10 = *(undefined8 *)(lVar4 + 0x38);
    uVar9 = *(undefined8 *)(lVar4 + 0x30);
    puVar2[6] = *(undefined8 *)(lVar4 + 0x40);
    puVar2[3] = uVar8;
    puVar2[2] = uVar7;
    puVar2[5] = uVar10;
    puVar2[4] = uVar9;
    puVar2[1] = uVar6;
    *puVar2 = uVar5;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xd8));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010083e624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10083e628 | FUN_10083e628 */

undefined1  [16] FUN_10083e628(void)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  __DataStorage *p_Var6;
  __int64 _Var7;
  long lVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  __DataStorage *unaff_x20;
  undefined1 auVar12 [16];
  
  lVar8 = *(long *)unaff_x20;
  uVar2 = *(ulong *)(unaff_x20 + 8);
  uVar4 = (uint)(uVar2 >> 0x20);
  uVar9 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar9 == 0) {
      p_Var6 = unaff_x20 + (uVar2 >> 0x30 & 0xff);
    }
    else {
      p_Var6 = (__DataStorage *)(uVar2 & 0x3fffffffffffffff);
      _swift_retain();
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar2 & 0x3fffffffffffffff),p_Var6);
      if (p_Var6 == (__DataStorage *)0x0) {
        FUN_10003bf2c(lVar8,uVar2);
        goto LAB_10083e738;
      }
      _Var7 = Foundation::__DataStorage::get__offset
                        ((__DataStorage *)(uVar2 & 0x3fffffffffffffff),p_Var6);
      FUN_10003bf2c(lVar8,uVar2);
      if (SBORROW8(0,_Var7)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10083e760);
        (*pcVar5)();
      }
      iVar11 = (int)lVar8;
      iVar10 = (int)((ulong)lVar8 >> 0x20);
      if (SBORROW4(iVar10,iVar11)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10083e768);
        (*pcVar5)();
      }
      unaff_x20 = p_Var6 + (iVar11 - _Var7);
      p_Var6 = unaff_x20 + (uint)(iVar10 - iVar11);
    }
LAB_10083e710:
    lVar8 = (long)p_Var6 - (long)unaff_x20;
  }
  else {
    if (uVar9 == 2) {
      _swift_retain(lVar8);
      p_Var6 = (__DataStorage *)(uVar2 & 0x3fffffffffffffff);
      _swift_retain();
      Foundation::__DataStorage::_get__bytes((__DataStorage *)(uVar2 & 0x3fffffffffffffff),p_Var6);
      if (p_Var6 != (__DataStorage *)0x0) {
        _Var7 = Foundation::__DataStorage::get__offset
                          ((__DataStorage *)(uVar2 & 0x3fffffffffffffff),p_Var6);
        if (SBORROW8(0,_Var7)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10083e75c);
          (*pcVar5)();
        }
        lVar1 = *(long *)(lVar8 + 0x10);
        lVar3 = *(long *)(lVar8 + 0x18);
        _swift_release(uVar2 & 0x3fffffffffffffff);
        _swift_release(lVar8);
        if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10083e764);
          (*pcVar5)();
        }
        unaff_x20 = p_Var6 + (lVar1 - _Var7);
        p_Var6 = unaff_x20 + (lVar3 - lVar1);
        goto LAB_10083e710;
      }
      _swift_release(uVar2 & 0x3fffffffffffffff);
      _swift_release(lVar8);
    }
LAB_10083e738:
    unaff_x20 = (__DataStorage *)0x0;
    lVar8 = 0;
  }
  auVar12._8_8_ = lVar8;
  auVar12._0_8_ = unaff_x20;
  return auVar12;
}



/* Address: 0x10083e768 | FUN_10083e768 */

String FUN_10083e768(void)

{
  String SVar1;
  
  FUN_100004640();
  SVar1 = Swift::CustomStringConvertible::get_description();
  return SVar1;
}



/* Address: 0x10083e7ac | thunk_FUN_10083e768 */

void thunk_FUN_10083e768(void)

{
  FUN_10083e768();
  return;
}



/* Address: 0x10083e7b0 | FUN_10083e7b0 */

String FUN_10083e7b0(void)

{
  String SVar1;
  
  FUN_100004640();
  SVar1 = Swift::CustomDebugStringConvertible::get_debugDescription();
  return SVar1;
}



/* Address: 0x10083e7f4 | thunk_FUN_10083e7b0 */

void thunk_FUN_10083e7b0(void)

{
  FUN_10083e7b0();
  return;
}



/* Address: 0x10083e7f8 | FUN_10083e7f8 */

void FUN_10083e7f8(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(lVar2 + 8))(uVar1,lVar2);
  return;
}



/* Address: 0x10083e83c | FUN_10083e83c */

void FUN_10083e83c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined2 local_58;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(unaff_x20 + 0x20);
  FUN_100004640();
  (**(code **)(lVar2 + 0x10))(&local_78,param_2,param_3,param_4,uVar1,lVar2);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_70;
    *param_1 = local_78;
    param_1[3] = uStack_60;
    param_1[2] = local_68;
    *(undefined2 *)(param_1 + 4) = local_58;
  }
  return;
}



/* Address: 0x10083e8d8 | FUN_10083e8d8 */

/* WARNING: Removing unreachable block (ram,0x00010083e918) */

void FUN_10083e8d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_30;
  
  FUN_10083e83c(&local_50,param_4,param_5,param_6);
  param_1[1] = uStack_48;
  *param_1 = local_50;
  param_1[3] = uStack_38;
  param_1[2] = uStack_40;
  *(undefined2 *)(param_1 + 4) = local_30;
                    /* WARNING: Could not recover jumptable at 0x00010083e94c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10083e950 | FUN_10083e950 */

void FUN_10083e950(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100803b8c(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                &PTR_PTR_100f05dc8);
  return;
}



/* Address: 0x10083e9fc | FUN_10083e9fc */

void FUN_10083e9fc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x130;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100803754(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8,param_9,param_10);
  return;
}



/* Address: 0x10083eac4 | FUN_10083eac4 */

void FUN_10083eac4(long param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  FUN_100004640();
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x18) = lVar1;
  FUN_10000cbb0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010083eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  return;
}



/* Address: 0x10083eb2c | thunk_FUN_10083e7f8 */

void thunk_FUN_10083e7f8(void)

{
  FUN_10083e7f8();
  return;
}



/* Address: 0x10083eb30 | FUN_10083eb30 */

void FUN_10083eb30(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  FUN_10083e83c(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined2 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x10083eb74 | FUN_10083eb74 */

void FUN_10083eb74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100834cd8;
  FUN_10083e8d8(plVar1,unaff_x22 + 0x10,param_2,param_3,param_4,param_5,param_6);
  return;
}



/* Address: 0x10083ebec | FUN_10083ebec */

void FUN_10083ebec(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10083e9fc(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x10083eca4 | thunk_FUN_10083eac4 */

void thunk_FUN_10083eac4(long param_1)

{
  long unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  FUN_100004640();
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(long *)(param_1 + 0x18) = lVar1;
  FUN_10000cbb0(param_1);
                    /* WARNING: Could not recover jumptable at 0x00010083eb28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  return;
}



/* Address: 0x10083eca8 | FUN_10083eca8 */

void FUN_10083eca8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10083e950(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_7,param_6)
  ;
  return;
}



/* Address: 0x10083ed48 | FUN_10083ed48 */

void FUN_10083ed48(void)

{
  FUN_100004594();
  return;
}



/* Address: 0x10083ed5c | FUN_10083ed5c */

long FUN_10083ed5c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  return param_1;
}



/* Address: 0x10083ed9c | FUN_10083ed9c */

undefined8 FUN_10083ed9c(undefined8 param_1)

{
  FUN_10083edc0();
  return param_1;
}



/* Address: 0x10083edc0 | FUN_10083edc0 */

void FUN_10083edc0(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_68 [24];
  
  if (param_1 != param_2) {
    lVar3 = param_1[3];
    lVar5 = param_2[3];
    if (lVar3 == lVar5) {
      if ((*(byte *)(*(long *)(lVar3 + -8) + 0x52) >> 1 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00010083ee88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)(lVar3 + -8) + 0x18))(param_1,param_2,lVar3);
        return;
      }
      uVar4 = *param_1;
      uVar2 = *param_2;
      _swift_retain(uVar2);
      _swift_release(uVar4);
      *param_1 = uVar2;
    }
    else {
      param_1[3] = lVar5;
      param_1[4] = param_2[4];
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      lVar6 = *(long *)(lVar3 + -8);
      lVar7 = *(long *)(lVar5 + -8);
      uVar1 = *(uint *)(lVar7 + 0x50);
      if ((*(byte *)(lVar6 + 0x52) >> 1 & 1) != 0) {
        uVar4 = *param_1;
        if ((uVar1 >> 0x11 & 1) == 0) {
          (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
        }
        else {
          uVar2 = *param_2;
          *param_1 = uVar2;
          _swift_retain(uVar2);
        }
        _swift_release(uVar4);
        return;
      }
      (**(code **)(lVar6 + 0x20))(auStack_68,param_1,lVar3);
      if ((uVar1 >> 0x11 & 1) == 0) {
        (**(code **)(lVar7 + 0x10))(param_1,param_2,lVar5);
      }
      else {
        *param_1 = *param_2;
        _swift_retain();
      }
      (**(code **)(lVar6 + 8))(auStack_68,lVar3);
    }
  }
  return;
}



/* Address: 0x10083ef30 | FUN_10083ef30 */

void FUN_10083ef30(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10083ef4c | FUN_10083ef4c */

undefined8 * FUN_10083ef4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x10083ef8c | FUN_10083ef8c */

void FUN_10083ef8c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10083ef98 | FUN_10083ef98 */

undefined8 * FUN_10083ef98(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar4 = param_1[3];
  uVar3 = param_1[2];
  uVar6 = param_1[5];
  uVar5 = param_1[4];
  param_2[6] = param_1[6];
  param_2[3] = uVar4;
  param_2[2] = uVar3;
  param_2[5] = uVar6;
  param_2[4] = uVar5;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}


