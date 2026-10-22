/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006a32d4 | FUN_1006a32d4 */

void FUN_1006a32d4(String *param_1)

{
  String SVar1;
  __int64 _Var2;
  Hasher HVar3;
  long unaff_x20;
  Hasher HVar4;
  undefined1 auStack_88 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  HVar3.unknown = param_1[1].str;
  SVar1 = param_1[1];
  HVar4.unknown = param_1[2].str;
  Swift::String::hash((Hasher)auStack_88,*param_1);
  Swift::String::hash((Hasher)auStack_88,SVar1);
  Swift::Hasher::_combine((__uint64)HVar4.unknown,HVar3);
  _Var2 = Swift::Hasher::_finalize(HVar4);
  FUN_1006a35d8(param_1,_Var2);
  return;
}



/* Address: 0x1006a3358 | FUN_1006a3358 */

void FUN_1006a3358(long param_1,Hasher param_2)

{
  Hasher HVar1;
  __int64 _Var2;
  long unaff_x20;
  undefined *puVar3;
  byte *pbVar4;
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  puVar3 = *(undefined **)(param_1 + 0x10);
  HVar1.unknown = puVar3;
  Swift::Hasher::_combine((__uint64)puVar3,param_2);
  if (puVar3 != (undefined *)0x0) {
    pbVar4 = (byte *)(param_1 + 0x20);
    do {
      HVar1.unknown = (undefined *)(ulong)*pbVar4;
      Swift::Hasher::_combine(*pbVar4,param_2);
      puVar3 = puVar3 + -1;
      pbVar4 = pbVar4 + 1;
    } while (puVar3 != (undefined *)0x0);
  }
  _Var2 = Swift::Hasher::_finalize(HVar1);
  FUN_1006a36f4(param_1,_Var2);
  return;
}



/* Address: 0x1006a33d8 | FUN_1006a33d8 */

undefined1  [16] FUN_1006a33d8(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  CodingUserInfoKey CVar2;
  long extraout_x8;
  ulong uVar3;
  long unaff_x20;
  code *pcVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auVar9 [16];
  undefined1 auStack_70 [8];
  undefined8 local_68;
  
  local_68 = param_1;
  CVar2 = Swift::CodingUserInfoKey::typeMetadataAccessor();
  lVar8 = *(long *)(CVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar5 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar3 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) == 0) {
    uVar7 = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0x48);
    pcVar4 = *(code **)(lVar8 + 0x10);
    do {
      (*pcVar4)(puVar5,*(long *)(unaff_x20 + 0x30) + lVar6 * param_2,CVar2.unknown);
      bVar1 = Swift::Equatable::___infix
                        (puVar5,local_68,CVar2.unknown,
                         PTR___protocol_witness_table_for_Swift_CodingUserInfoKey___Swift_Equatable_in_Swift_100ead268
                        );
      uVar7 = (ulong)bVar1;
      (**(code **)(lVar8 + 8))(puVar5,CVar2.unknown);
      if (bVar1) break;
      param_2 = param_2 + 1 & ~uVar3;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  auVar9._8_8_ = uVar7;
  auVar9._0_8_ = param_2;
  return auVar9;
}



/* Address: 0x1006a34f8 | FUN_1006a34f8 */

undefined1  [16]
FUN_1006a34f8(ulong param_1,ulong param_2,undefined *param_3,undefined *param_4,ulong param_5)

{
  ulong *puVar1;
  bool bVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  uVar4 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_5 = param_5 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (ulong *)(*(long *)(unaff_x20 + 0x30) + param_5 * 0x20);
      if (((((undefined *)puVar1[2] == param_3 && (undefined *)puVar1[3] == param_4) &&
           (undefined *)(*puVar1 >> 0x10) == (undefined *)(param_1 >> 0x10)) &&
           (undefined *)(puVar1[1] >> 0x10) == (undefined *)(param_2 >> 0x10)) ||
         (bVar2 = Swift::_stringCompareInternal
                            ((undefined *)puVar1[2],(undefined *)puVar1[3],
                             (undefined *)(*puVar1 >> 0x10),(undefined *)(puVar1[1] >> 0x10),
                             (_StringComparisonResult)(__int8)param_3), bVar2)) {
        uVar3 = 1;
        goto LAB_1006a35b8;
      }
      param_5 = param_5 + 1 & ~uVar4;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_5 >> 6) * 8) >> (param_5 & 0x3f) & 1) != 0);
  }
  uVar3 = 0;
LAB_1006a35b8:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = param_5;
  return auVar5;
}



/* Address: 0x1006a35d8 | FUN_1006a35d8 */

undefined1  [16] FUN_1006a35d8(long *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  _StringGuts _Var3;
  long lVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  bool bVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long unaff_x20;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  
  uVar10 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar10 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
    puVar1 = (undefined *)param_1[3];
    lVar4 = param_1[4];
    puVar2 = (undefined *)*param_1;
    puVar5 = (undefined *)param_1[1];
    puVar12 = (undefined *)param_1[2];
    lVar11 = *(long *)(unaff_x20 + 0x30);
    do {
      puVar9 = (undefined8 *)(lVar11 + param_2 * 0x38);
      _Var3.unknown = (undefined *)puVar9[2];
      _Var6.unknown = (undefined *)puVar9[3];
      lVar13 = puVar9[4];
      if (((((undefined *)*puVar9 == puVar2 && (undefined *)puVar9[1] == puVar5) ||
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              ((undefined *)*puVar9,(undefined *)puVar9[1],
                               (_StringComparisonResult)(__int8)puVar2), bVar7)) &&
          ((_Var3.unknown == puVar12 && _Var6.unknown == puVar1 ||
           (bVar7 = Swift::_stringCompareWithSmolCheck
                              (_Var3,_Var6,(_StringComparisonResult)(__int8)puVar12), bVar7)))) &&
         (lVar13 == lVar4)) {
        uVar8 = 1;
        goto LAB_1006a36d0;
      }
      param_2 = param_2 + 1 & ~uVar10;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  uVar8 = 0;
LAB_1006a36d0:
  auVar14._8_8_ = uVar8;
  auVar14._0_8_ = param_2;
  return auVar14;
}



/* Address: 0x1006a36f4 | FUN_1006a36f4 */

void FUN_1006a36f4(long param_1,ulong param_2)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  char *pcVar4;
  char *pcVar5;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
    lVar2 = *(long *)(param_1 + 0x10);
    do {
      lVar3 = *(long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 8);
      if (*(long *)(lVar3 + 0x10) == lVar2) {
        if ((lVar2 == 0) || (lVar3 == param_1)) {
          return;
        }
        pcVar4 = (char *)(lVar3 + 0x20);
        pcVar5 = (char *)(param_1 + 0x20);
        lVar3 = lVar2;
        while( true ) {
          if (*pcVar4 != *pcVar5) break;
          lVar3 = lVar3 + -1;
          pcVar4 = pcVar4 + 1;
          pcVar5 = pcVar5 + 1;
          if (lVar3 == 0) {
            return;
          }
        }
      }
      param_2 = param_2 + 1 & ~uVar1;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
  }
  return;
}



/* Address: 0x1006a3798 | FUN_1006a3798 */

void FUN_1006a3798(undefined8 param_1,undefined8 param_2,undefined8 param_3,int *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_7;
  iVar1 = *param_4;
  plVar2 = (long *)(ulong)(uint)param_4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006a3834;
                    /* WARNING: Could not recover jumptable at 0x0001006a3830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_4))(plVar2,param_1,param_2,param_3,param_6,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1006a3834 | FUN_1006a3834 */

void FUN_1006a3834(void)

{
  undefined *puVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar2;
  long lVar3;
  long unaff_x20;
  undefined8 *puVar4;
  long *unaff_x22;
  long lVar5;
  
  lVar3 = *unaff_x22;
  lVar5 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x20));
  if (unaff_x20 == 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
  else {
    puVar4 = *(undefined8 **)(lVar3 + 0x18);
    puVar1 = &DAT_100fdbdb8;
    FUN_1000f7830(&DAT_100fdbdb8,&DAT_100c6f530);
    puVar2 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar2 = *(undefined8 *)(lVar3 + 0x10);
    *puVar4 = puVar1;
    UNRECOVERED_JUMPTABLE = *(code **)(lVar5 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a38bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006a38c0 | FUN_1006a38c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001006a38fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_1006a38c0(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fdbda0,&DAT_100c6f4f0);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (6 < uVar1) {
    uVar1 = 7;
  }
  return uVar1;
}



/* Address: 0x1006a3924 | FUN_1006a3924 */

void FUN_1006a3924(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1006a3948 | FUN_1006a3948 */

void FUN_1006a3948(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1006a1ed8(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1006a39c0 | FUN_1006a39c0 */

undefined8 FUN_1006a39c0(undefined8 param_1,long param_2)

{
  return *(undefined8 *)(param_2 + 0x20);
}



/* Address: 0x1006a39c8 | FUN_1006a39c8 */

void FUN_1006a39c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1006a39d4 | FUN_1006a39d4 */

undefined1  [16] FUN_1006a39d4(void)

{
  return ZEXT816(0x100ef6498);
}



/* Address: 0x1006a39e4 | FUN_1006a39e4 */

void FUN_1006a39e4(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_60;
  long local_58;
  long local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_60 = &DAT_100c6f470;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_58 = *(long *)(lVar1 + -8) + 0x40;
    lVar1 = 0x13f;
    FUN_1006b7d9c();
    if (uVar2 < 0x40) {
      local_50 = *(long *)(lVar1 + -8) + 0x40;
      puStack_48 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
      local_40 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
      local_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      puStack_38 = local_40;
      puStack_28 = local_30;
      _swift_initStructMetadata(param_1,0,8,&local_60,param_1 + 0x28);
    }
  }
  return;
}



/* Address: 0x1006a3aa4 | FUN_1006a3aa4 */

long * FUN_1006a3aa4(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  
  lVar11 = *(long *)(param_3 + 0x10);
  lVar21 = *(long *)(lVar11 + -8);
  uVar3 = *(uint *)(lVar21 + 0x50);
  uVar16 = (ulong)uVar3 & 0xff;
  lVar19 = *(long *)(lVar21 + 0x40);
  lVar4 = 0;
  FUN_100a0e718();
  lVar20 = *(long *)(lVar4 + -8);
  uVar8 = (ulong)*(uint *)(lVar20 + 0x50) & 0xf8 | 7;
  uVar6 = uVar8 | uVar16;
  lVar5 = *param_2;
  if (uVar6 == 7 && ((*(uint *)(lVar20 + 0x50) | uVar3) & 0x100000) == 0) {
    uVar1 = *(long *)(lVar20 + 0x40) + 7;
    lVar2 = (uVar1 & 0xfffffffffffffff8) + 0x50;
    if ((((uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)) + lVar19 + uVar8 &
         (uVar8 ^ 0xffffffffffffffff)) + lVar2 + 0xf & 0xfffffffffffffff8) + 0x30 < 0x19) {
      lVar9 = param_2[1];
      *param_1 = lVar5;
      param_1[1] = lVar9;
      uVar6 = (long)param_1 + uVar16 + 0x10 & ~uVar16;
      uVar8 = (long)param_2 + uVar16 + 0x10 & ~uVar16;
      pcVar22 = *(code **)(lVar21 + 0x10);
      _swift_unknownObjectRetain();
      (*pcVar22)(uVar6,uVar8,lVar11);
      lVar19 = lVar19 + 7;
      uVar6 = lVar19 + uVar6;
      uVar16 = uVar6 & 0xfffffffffffffff8;
      uVar8 = lVar19 + uVar8;
      uVar14 = uVar8 & 0xfffffffffffffff8;
      (**(code **)(lVar20 + 0x10))(uVar16,uVar14,lVar4);
      puVar7 = (undefined8 *)(uVar1 + uVar16 & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)(uVar1 + uVar14 & 0xfffffffffffffff8);
      *puVar7 = *puVar10;
      puVar7[1] = puVar10[1];
      puVar7[2] = puVar10[2];
      *(undefined1 *)(puVar7 + 3) = *(undefined1 *)(puVar10 + 3);
      uVar16 = puVar10[7];
      _swift_bridgeObjectRetain();
      if (uVar16 < 0xffffffff) {
        uVar13 = puVar10[5];
        uVar12 = puVar10[4];
        uVar17 = puVar10[7];
        uVar15 = puVar10[6];
        puVar7[8] = puVar10[8];
        puVar7[5] = uVar13;
        puVar7[4] = uVar12;
        puVar7[7] = uVar17;
        puVar7[6] = uVar15;
      }
      else {
        puVar7[7] = uVar16;
        puVar7[8] = puVar10[8];
        (*(code *)**(undefined8 **)(uVar16 - 8))(puVar7 + 4,puVar10 + 4,uVar16);
      }
      puVar7[9] = puVar10[9];
      puVar7 = (undefined8 *)(lVar2 + uVar6 & 0xfffffffffffffff8);
      puVar10 = (undefined8 *)(lVar2 + uVar8 & 0xfffffffffffffff8);
      uVar12 = *puVar10;
      *puVar7 = uVar12;
      uVar13 = puVar10[2];
      uVar15 = puVar10[1];
      puVar7[2] = puVar10[2];
      puVar7[1] = uVar15;
      uVar15 = puVar10[4];
      uVar17 = puVar10[3];
      puVar7[4] = puVar10[4];
      puVar7[3] = uVar17;
      uVar17 = puVar10[5];
      puVar7[5] = uVar17;
      uVar18 = puVar10[6];
      puVar7[6] = uVar18;
      _swift_retain();
      _swift_retain(uVar12);
      _swift_retain(uVar13);
      _swift_retain(uVar15);
      _swift_bridgeObjectRetain(uVar17);
      _swift_bridgeObjectRetain(uVar18);
      return param_1;
    }
  }
  *param_1 = lVar5;
  _swift_retain();
  return (long *)(lVar5 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
}



/* Address: 0x1006a3d54 | FUN_1006a3d54 */

void FUN_1006a3d54(undefined8 *param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  _swift_unknownObjectRelease(*param_1);
  lVar5 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar2 = (long)param_1 + (ulong)*(byte *)(lVar5 + 0x50) + 0x10 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  (**(code **)(lVar5 + 8))(uVar2);
  lVar3 = *(long *)(lVar5 + 0x40);
  lVar5 = 0;
  FUN_100a0e718();
  lVar6 = *(long *)(lVar5 + -8);
  uVar1 = (ulong)*(uint *)(lVar6 + 0x50) & 0xf8 | 7;
  uVar2 = uVar2 + lVar3 + uVar1 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar6 + 8))(uVar2,lVar5);
  uVar1 = *(long *)(lVar6 + 0x40) + 7;
  uVar4 = uVar1 + uVar2 & 0xfffffffffffffff8;
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar4 + 8));
  if (0xfffffffe < *(ulong *)(uVar4 + 0x38)) {
    FUN_100004594(uVar4 + 0x20);
  }
  _swift_release(*(undefined8 *)(uVar4 + 0x48));
  lVar5 = uVar2 + (uVar1 & 0xfffffffffffffff8) + 0x48;
  _swift_release(*(undefined8 *)(lVar5 + 8));
  uVar1 = lVar5 + 0x17U & 0xfffffffffffffff8;
  _swift_release(*(undefined8 *)(uVar1 + 8));
  _swift_release(*(undefined8 *)(uVar1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(uVar1 + 0x28));
  return;
}



/* Address: 0x1006a3e80 | FUN_1006a3e80 */

undefined8 * FUN_1006a3e80(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  ulong uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  
  uVar6 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar6;
  lVar5 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar5 + -8);
  uVar1 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar7 = uVar1 + 0x10 + (long)param_1 & (uVar1 ^ 0xffffffffffffffff);
  uVar9 = uVar1 + 0x10 + (long)param_2 & (uVar1 ^ 0xffffffffffffffff);
  pcVar14 = *(code **)(lVar11 + 0x10);
  _swift_unknownObjectRetain(uVar6);
  (*pcVar14)(uVar7,uVar9,lVar5);
  lVar5 = *(long *)(lVar11 + 0x40);
  lVar11 = 0;
  FUN_100a0e718();
  lVar12 = *(long *)(lVar11 + -8);
  uVar1 = (ulong)*(uint *)(lVar12 + 0x50) & 0xf8 | 7;
  lVar5 = lVar5 + uVar1;
  uVar7 = lVar5 + uVar7 & (uVar1 ^ 0xffffffffffffffff);
  uVar9 = lVar5 + uVar9 & (uVar1 ^ 0xffffffffffffffff);
  (**(code **)(lVar12 + 0x10))(uVar7,uVar9,lVar11);
  uVar1 = *(long *)(lVar12 + 0x40) + 7;
  puVar2 = (undefined8 *)(uVar1 + uVar7 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)(uVar1 + uVar9 & 0xfffffffffffffff8);
  *puVar2 = *puVar3;
  puVar2[1] = puVar3[1];
  puVar2[2] = puVar3[2];
  *(undefined1 *)(puVar2 + 3) = *(undefined1 *)(puVar3 + 3);
  uVar15 = puVar3[7];
  _swift_bridgeObjectRetain();
  if (uVar15 < 0xffffffff) {
    uVar8 = puVar3[5];
    uVar6 = puVar3[4];
    uVar13 = puVar3[7];
    uVar10 = puVar3[6];
    puVar2[8] = puVar3[8];
    puVar2[5] = uVar8;
    puVar2[4] = uVar6;
    puVar2[7] = uVar13;
    puVar2[6] = uVar10;
  }
  else {
    puVar2[7] = uVar15;
    puVar2[8] = puVar3[8];
    (*(code *)**(undefined8 **)(uVar15 - 8))(puVar2 + 4,puVar3 + 4,uVar15);
  }
  puVar2[9] = puVar3[9];
  lVar5 = (uVar1 & 0xfffffffffffffff8) + 0x50;
  puVar2 = (undefined8 *)(lVar5 + uVar7);
  puVar3 = (undefined8 *)(lVar5 + uVar9);
  uVar6 = *puVar3;
  *puVar2 = uVar6;
  puVar4 = (undefined8 *)((long)puVar2 + 0xfU & 0xfffffffffffffff8);
  puVar2 = (undefined8 *)((long)puVar3 + 0xfU & 0xfffffffffffffff8);
  uVar8 = puVar2[1];
  uVar10 = *puVar2;
  puVar4[1] = puVar2[1];
  *puVar4 = uVar10;
  uVar10 = puVar2[3];
  uVar13 = puVar2[2];
  puVar4[3] = puVar2[3];
  puVar4[2] = uVar13;
  uVar13 = puVar2[4];
  puVar4[4] = uVar13;
  uVar16 = puVar2[5];
  puVar4[5] = uVar16;
  _swift_retain();
  _swift_retain(uVar6);
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_bridgeObjectRetain(uVar13);
  _swift_bridgeObjectRetain(uVar16);
  return param_1;
}



/* Address: 0x1006a4098 | FUN_1006a4098 */

undefined8 * FUN_1006a4098(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar9 = param_2[1];
  uVar7 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar7);
  param_1[1] = uVar9;
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar3 = uVar2 + 0x10 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar5 = uVar2 + 0x10 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x18))(uVar3,uVar5);
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar1 = 0;
  FUN_100a0e718();
  lVar11 = *(long *)(lVar1 + -8);
  uVar2 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  lVar8 = lVar8 + uVar2;
  uVar4 = lVar8 + uVar3 & (uVar2 ^ 0xffffffffffffffff);
  uVar5 = lVar8 + uVar5 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar11 + 0x18))(uVar4,uVar5,lVar1);
  uVar2 = *(long *)(lVar11 + 0x40) + 7;
  puVar12 = (undefined8 *)(uVar2 + uVar4 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(uVar2 + uVar5 & 0xfffffffffffffff8);
  *puVar12 = *puVar13;
  uVar9 = puVar12[1];
  puVar12[1] = puVar13[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  puVar12[2] = puVar13[2];
  *(undefined1 *)(puVar12 + 3) = *(undefined1 *)(puVar13 + 3);
  puVar6 = puVar12 + 4;
  puVar10 = puVar13 + 4;
  uVar3 = puVar13[7];
  if ((ulong)puVar12[7] < 0xffffffff) {
    if (0xfffffffe < uVar3) {
      puVar12[7] = uVar3;
      puVar12[8] = puVar13[8];
      (*(code *)**(undefined8 **)(uVar3 - 8))(puVar6,puVar10);
      goto LAB_1006a4228;
    }
  }
  else {
    if (0xfffffffe < uVar3) {
      FUN_10008820c(puVar6,puVar10);
      goto LAB_1006a4228;
    }
    FUN_100004594(puVar6);
  }
  uVar7 = puVar13[5];
  uVar9 = *puVar10;
  uVar15 = puVar13[7];
  uVar14 = puVar13[6];
  puVar12[8] = puVar13[8];
  puVar12[5] = uVar7;
  *puVar6 = uVar9;
  puVar12[7] = uVar15;
  puVar12[6] = uVar14;
LAB_1006a4228:
  uVar9 = puVar12[9];
  puVar12[9] = puVar13[9];
  _swift_retain();
  _swift_release(uVar9);
  lVar8 = (uVar2 & 0xfffffffffffffff8) + 0x50;
  puVar6 = (undefined8 *)(lVar8 + uVar4);
  puVar12 = (undefined8 *)(lVar8 + uVar5);
  uVar9 = *puVar6;
  *puVar6 = *puVar12;
  _swift_retain();
  _swift_release(uVar9);
  puVar10 = (undefined8 *)((long)puVar6 + 0xfU & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)puVar12 + 0xfU & 0xfffffffffffffff8);
  uVar7 = puVar10[1];
  uVar9 = puVar6[1];
  uVar14 = *puVar6;
  puVar10[1] = puVar6[1];
  *puVar10 = uVar14;
  _swift_retain(uVar9);
  _swift_release(uVar7);
  uVar7 = puVar10[3];
  uVar9 = puVar6[3];
  uVar14 = puVar6[2];
  puVar10[3] = puVar6[3];
  puVar10[2] = uVar14;
  _swift_retain(uVar9);
  _swift_release(uVar7);
  uVar9 = puVar10[4];
  puVar10[4] = puVar6[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = puVar10[5];
  puVar10[5] = puVar6[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  return param_1;
}



/* Address: 0x1006a433c | FUN_1006a433c */

undefined8 * FUN_1006a433c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  uVar10 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar10;
  lVar8 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar6 = uVar2 + 0x10 + (long)param_1 & (uVar2 ^ 0xffffffffffffffff);
  uVar7 = uVar2 + 0x10 + (long)param_2 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar8 + 0x20))(uVar6,uVar7);
  lVar8 = *(long *)(lVar8 + 0x40);
  lVar1 = 0;
  FUN_100a0e718();
  lVar9 = *(long *)(lVar1 + -8);
  uVar2 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  lVar8 = lVar8 + uVar2;
  uVar6 = lVar8 + uVar6 & (uVar2 ^ 0xffffffffffffffff);
  uVar7 = lVar8 + uVar7 & (uVar2 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x20))(uVar6,uVar7,lVar1);
  uVar2 = *(long *)(lVar9 + 0x40) + 7;
  puVar3 = (undefined8 *)(uVar2 + uVar6 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(uVar2 + uVar7 & 0xfffffffffffffff8);
  uVar10 = *puVar5;
  puVar3[1] = puVar5[1];
  *puVar3 = uVar10;
  puVar3[2] = puVar5[2];
  *(undefined1 *)(puVar3 + 3) = *(undefined1 *)(puVar5 + 3);
  uVar13 = puVar5[5];
  uVar12 = puVar5[4];
  uVar11 = puVar5[7];
  uVar10 = puVar5[6];
  puVar3[8] = puVar5[8];
  puVar3[5] = uVar13;
  puVar3[4] = uVar12;
  puVar3[7] = uVar11;
  puVar3[6] = uVar10;
  puVar3[9] = puVar5[9];
  lVar8 = (uVar2 & 0xfffffffffffffff8) + 0x50;
  puVar3 = (undefined8 *)(lVar8 + uVar6);
  puVar5 = (undefined8 *)(lVar8 + uVar7);
  *puVar3 = *puVar5;
  puVar4 = (undefined8 *)((long)puVar3 + 0xfU & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)((long)puVar5 + 0xfU & 0xfffffffffffffff8);
  uVar10 = *puVar3;
  puVar4[1] = puVar3[1];
  *puVar4 = uVar10;
  uVar10 = puVar3[2];
  puVar4[3] = puVar3[3];
  puVar4[2] = uVar10;
  puVar4[4] = puVar3[4];
  puVar4[5] = puVar3[5];
  return param_1;
}



/* Address: 0x1006a44c8 | FUN_1006a44c8 */

undefined8 * FUN_1006a44c8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  uVar3 = param_2[1];
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRelease(uVar1);
  param_1[1] = uVar3;
  lVar7 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar5 = uVar4 + 0x10 + (long)param_1 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = uVar4 + 0x10 + (long)param_2 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar7 + 0x28))(uVar5,uVar6);
  lVar7 = *(long *)(lVar7 + 0x40);
  lVar2 = 0;
  FUN_100a0e718();
  lVar9 = *(long *)(lVar2 + -8);
  uVar4 = (ulong)*(uint *)(lVar9 + 0x50) & 0xf8 | 7;
  lVar7 = lVar7 + uVar4;
  uVar5 = lVar7 + uVar5 & (uVar4 ^ 0xffffffffffffffff);
  uVar6 = lVar7 + uVar6 & (uVar4 ^ 0xffffffffffffffff);
  (**(code **)(lVar9 + 0x28))(uVar5,uVar6,lVar2);
  uVar4 = *(long *)(lVar9 + 0x40) + 7;
  puVar8 = (undefined8 *)(uVar4 + uVar5 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)(uVar4 + uVar6 & 0xfffffffffffffff8);
  *puVar8 = *puVar10;
  uVar3 = puVar8[1];
  puVar8[1] = puVar10[1];
  _swift_bridgeObjectRelease(uVar3);
  puVar8[2] = puVar10[2];
  *(undefined1 *)(puVar8 + 3) = *(undefined1 *)(puVar10 + 3);
  if (0xfffffffe < (ulong)puVar8[7]) {
    FUN_100004594(puVar8 + 4);
  }
  uVar1 = puVar10[5];
  uVar3 = puVar10[4];
  uVar12 = puVar10[7];
  uVar11 = puVar10[6];
  puVar8[8] = puVar10[8];
  puVar8[5] = uVar1;
  puVar8[4] = uVar3;
  puVar8[7] = uVar12;
  puVar8[6] = uVar11;
  uVar3 = puVar8[9];
  puVar8[9] = puVar10[9];
  _swift_release(uVar3);
  lVar7 = (uVar4 & 0xfffffffffffffff8) + 0x50;
  puVar8 = (undefined8 *)(lVar7 + uVar5);
  puVar10 = (undefined8 *)(lVar7 + uVar6);
  uVar3 = *puVar8;
  *puVar8 = *puVar10;
  _swift_release(uVar3);
  puVar8 = (undefined8 *)((long)puVar8 + 0xfU & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)puVar10 + 0xfU & 0xfffffffffffffff8);
  uVar3 = puVar8[1];
  uVar1 = *puVar10;
  puVar8[1] = puVar10[1];
  *puVar8 = uVar1;
  _swift_release(uVar3);
  uVar3 = puVar8[3];
  uVar1 = puVar10[2];
  puVar8[3] = puVar10[3];
  puVar8[2] = uVar1;
  _swift_release(uVar3);
  uVar3 = puVar8[4];
  puVar8[4] = puVar10[4];
  _swift_bridgeObjectRelease(uVar3);
  uVar3 = puVar8[5];
  puVar8[5] = puVar10[5];
  _swift_bridgeObjectRelease(uVar3);
  return param_1;
}



/* Address: 0x1006a46c8 | FUN_1006a46c8 */

ulong FUN_1006a46c8(ulong *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  
  lVar14 = *(long *)(param_3 + 0x10);
  lVar15 = *(long *)(lVar14 + -8);
  uVar6 = *(uint *)(lVar15 + 0x54);
  lVar10 = 0;
  FUN_100a0e718();
  lVar11 = *(long *)(lVar10 + -8);
  uVar7 = *(uint *)(lVar11 + 0x54);
  uVar2 = uVar7;
  if (uVar7 <= uVar6) {
    uVar2 = uVar6;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar13 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar12 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
    uVar1 = ((*(long *)(lVar15 + 0x40) + uVar12 + (uVar13 + 0x10 & (uVar13 ^ 0xffffffffffffffff)) &
             (uVar12 ^ 0xffffffffffffffff)) + (*(long *)(lVar11 + 0x40) + 7U & 0xfffffffffffffff8) +
             0x5f & 0xfffffffffffffff8) + 0x30;
    uVar9 = 2;
    uVar5 = uVar9;
    if ((uVar1 & 0xfffffff8) == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar9 = 4;
    }
    if (uVar5 < 0x100) {
      uVar9 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar9;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar9 = (uint)*(byte *)((long)param_1 + uVar1), *(byte *)((long)param_1 + uVar1) != 0))
      goto LAB_1006a47e8;
    }
    else if (uVar4 == 2) {
      uVar9 = (uint)*(ushort *)((long)param_1 + uVar1);
      if (*(ushort *)((long)param_1 + uVar1) != 0) {
LAB_1006a47e8:
        iVar8 = uVar9 - 1;
        if ((uVar1 & 0xfffffff8) != 0) {
          iVar8 = (int)*param_1;
        }
        return (ulong)(uVar3 + iVar8 + 1);
      }
    }
    else {
      uVar9 = *(uint *)((long)param_1 + uVar1);
      if (uVar9 != 0) goto LAB_1006a47e8;
    }
  }
  if (-1 < (int)uVar2) {
    uVar12 = *param_1;
    if (0xfffffffe < uVar12) {
      uVar12 = 0xffffffff;
    }
    return (ulong)((int)uVar12 + 1);
  }
  uVar13 = (long)param_1 + uVar13 + 0x10 & ~uVar13;
  if (uVar6 == uVar3) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x30);
    lVar10 = lVar14;
    uVar7 = uVar6;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x30);
    uVar13 = uVar13 + *(long *)(lVar15 + 0x40) + uVar12 & ~uVar12;
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a4870. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar13,uVar7,lVar10);
  return uVar13;
}



/* Address: 0x1006a4898 | FUN_1006a4898 */

void FUN_1006a4898(ulong *param_1,undefined8 param_2,uint param_3,long param_4)

{
  size_t sVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  long lVar9;
  int *piVar10;
  code *UNRECOVERED_JUMPTABLE;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  long lVar18;
  uint uVar19;
  long lVar20;
  
  lVar18 = *(long *)(param_4 + 0x10);
  lVar20 = *(long *)(lVar18 + -8);
  uVar8 = *(uint *)(lVar20 + 0x54);
  lVar9 = 0;
  FUN_100a0e718();
  lVar11 = *(long *)(lVar9 + -8);
  uVar7 = *(uint *)(lVar11 + 0x54);
  uVar3 = uVar7;
  if (uVar7 < 0x7fffffff) {
    uVar3 = 0x7ffffffe;
  }
  uVar4 = uVar8;
  if (uVar8 <= uVar3) {
    uVar4 = uVar3;
  }
  uVar5 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar5 = 0x7fffffff;
  }
  uVar14 = (ulong)*(byte *)(lVar20 + 0x50);
  lVar12 = *(long *)(lVar20 + 0x40);
  uVar13 = (ulong)*(uint *)(lVar11 + 0x50) & 0xf8 | 7;
  sVar1 = (*(long *)(lVar11 + 0x40) + 7U & 0xfffffffffffffff8) + 0x50;
  sVar2 = ((lVar12 + uVar13 + (uVar14 + 0x10 & (uVar14 ^ 0xffffffffffffffff)) &
           (uVar13 ^ 0xffffffffffffffff)) + sVar1 + 0xf & 0xfffffffffffffff8) + 0x30;
  uVar17 = (uint)param_2;
  if (param_3 < uVar5 || param_3 - uVar5 == 0) {
    uVar19 = 0;
    iVar15 = uVar17 - uVar5;
    if (uVar5 <= uVar17 && iVar15 != 0) goto LAB_1006a49c4;
  }
  else {
    uVar16 = 2;
    uVar6 = uVar16;
    if ((int)sVar2 == 0) {
      uVar6 = (param_3 - uVar5) + 1;
    }
    if (0xffff < uVar6) {
      uVar16 = 4;
    }
    if (uVar6 < 0x100) {
      uVar16 = 1;
    }
    uVar19 = 0;
    if (1 < uVar6) {
      uVar19 = uVar16;
    }
    iVar15 = uVar17 - uVar5;
    if (uVar5 <= uVar17 && iVar15 != 0) {
LAB_1006a49c4:
      if ((int)sVar2 != 0) {
        iVar15 = 1;
        _bzero(param_1,sVar2);
        *(uint *)param_1 = uVar17 + ~uVar5;
      }
      if (uVar19 < 2) {
        if (uVar19 == 0) {
          return;
        }
        *(char *)((long)param_1 + sVar2) = (char)iVar15;
        return;
      }
      if (uVar19 == 2) {
        *(short *)((long)param_1 + sVar2) = (short)iVar15;
        return;
      }
      *(int *)((long)param_1 + sVar2) = iVar15;
      return;
    }
  }
  if (uVar19 < 2) {
    if (uVar19 != 0) {
      *(undefined1 *)((long)param_1 + sVar2) = 0;
    }
  }
  else if (uVar19 == 2) {
    *(undefined2 *)((long)param_1 + sVar2) = 0;
  }
  else {
    *(undefined4 *)((long)param_1 + sVar2) = 0;
  }
  if (uVar17 != 0) {
    if ((int)uVar4 < 0) {
      piVar10 = (int *)((long)param_1 + uVar14 + 0x10 & ~uVar14);
      if (uVar8 == uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar20 + 0x38);
        lVar9 = lVar18;
        uVar7 = uVar8;
      }
      else {
        piVar10 = (int *)((long)piVar10 + uVar13 + lVar12 & ~uVar13);
        if (uVar3 < uVar17) {
          if ((int)sVar1 == 0) {
            return;
          }
          _bzero(piVar10,sVar1);
          *piVar10 = uVar17 + ~uVar3;
          return;
        }
        UNRECOVERED_JUMPTABLE = *(code **)(lVar11 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001006a4ae0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(piVar10,param_2,uVar7,lVar9);
      return;
    }
    if ((int)uVar17 < 0) {
      *param_1 = (ulong)(uVar17 & 0x7fffffff);
      param_1[1] = 0;
    }
    else {
      *param_1 = (ulong)(uVar17 - 1);
    }
  }
  return;
}



/* Address: 0x1006a4ae4 | FUN_1006a4ae4 */

void FUN_1006a4ae4(void)

{
  FUN_1006a4aec(0);
  return;
}



/* Address: 0x1006a4aec | FUN_1006a4aec */

void FUN_1006a4aec(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fdbc58 != 0) {
    return;
  }
  puVar1 = &DAT_100fdbc60;
  FUN_1000f8b08(&DAT_100fdbc60,&DAT_100c6f498);
  uVar2 = 0x64000001;
  _swift_getFunctionTypeMetadata1(0x64000001,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fdbc58 = uVar2;
  return;
}



/* Address: 0x1006a4b50 | FUN_1006a4b50 */

void FUN_1006a4b50(void)

{
  FUN_1006a4bc0(0,&DAT_100fdbc68,PTR_typeMetadataAccessor_100eac4d8);
  return;
}



/* Address: 0x1006a4b78 | FUN_1006a4b78 */

void FUN_1006a4b78(void)

{
  undefined8 uVar1;
  
  if (DAT_100fdbc70 != 0) {
    return;
  }
  uVar1 = 0x65000000;
  _swift_getFunctionTypeMetadata0(0x65000000,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100fdbc70 = uVar1;
  return;
}



/* Address: 0x1006a4bc0 | FUN_1006a4bc0 */

void FUN_1006a4bc0(long param_1,long *param_2,code *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = 0xff;
    FUN_1006a4b78();
    (*param_3)();
    if (lVar1 == 0) {
      *param_2 = param_1;
    }
  }
  return;
}



/* Address: 0x1006a4c18 | FUN_1006a4c18 */

undefined8 FUN_1006a4c18(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a03644();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006a4c5c | FUN_1006a4c5c */

void FUN_1006a4c5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbdb0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c73630;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c73630,&DAT_100efb058);
  DAT_100fdbdb0 = pTVar1;
  return;
}



/* Address: 0x1006a4c9c | FUN_1006a4c9c */

void FUN_1006a4c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x40);
  plVar7 = (long *)0x310;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1006a0664(plVar7,param_1,param_2,param_3,param_4,uVar2,uVar5,uVar3,uVar6,uVar8,uVar9,uVar1,
                uVar4,param_5);
  return;
}



/* Address: 0x1006a4d5c | FUN_1006a4d5c */

void FUN_1006a4d5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1006a3798(plVar3,param_1,param_2,param_3,uVar1,uVar2,uVar4,param_4);
  return;
}



/* Address: 0x1006a4e04 | FUN_1006a4e04 */

void FUN_1006a4e04(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_1005c804c;
  FUN_1006a30c8(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1006a4e7c | FUN_1006a4e7c */

void FUN_1006a4e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if ((param_5 != '\0') && (param_1 = param_4, param_5 != '\x01')) {
    return;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x1006a4e98 | FUN_1006a4e98 */

undefined8 FUN_1006a4e98(undefined8 param_1)

{
  FUN_100a003f4();
  return param_1;
}



/* Address: 0x1006a4ecc | FUN_1006a4ecc */

void FUN_1006a4ecc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbdc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8e128;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e128,&DAT_100f28438);
  DAT_100fdbdc8 = pTVar1;
  return;
}



/* Address: 0x1006a4f0c | FUN_1006a4f0c */

void FUN_1006a4f0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fdbde0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c81390;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c81390,&DAT_100f0ace8);
  DAT_100fdbde0 = pTVar1;
  return;
}



/* Address: 0x1006a4f4c | thunk_FUN_1001b8a00 */

void thunk_FUN_1001b8a00(void)

{
  thunk_FUN_1001b8a00();
  return;
}



/* Address: 0x1006a4f50 | FUN_1006a4f50 */

void FUN_1006a4f50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a5c00(&local_68,param_2,param_3,param_5,param_6,param_7,param_8);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a4fb0 | FUN_1006a4fb0 */

void FUN_1006a4fb0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x21;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1006a5c00(&local_68,param_2,param_3,param_5,param_6,param_7,param_8);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_40;
    param_1[4] = local_48;
    param_1[7] = uStack_30;
    param_1[6] = local_38;
    *(undefined1 *)(param_1 + 8) = local_28;
    param_1[1] = uStack_60;
    *param_1 = local_68;
    param_1[3] = uStack_50;
    param_1[2] = local_58;
  }
  return;
}



/* Address: 0x1006a5014 | FUN_1006a5014 */

void FUN_1006a5014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  _swift_task_switch(FUN_1006a5038,0,0);
  return;
}



/* Address: 0x1006a5038 | FUN_1006a5038 */

void FUN_1006a5038(void)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  FUN_1009e1f14();
  (**(code **)(lVar2 + 0x58))(uVar3,lVar2);
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1006a50dc;
  FUN_1006a51ec(uVar3);
  return;
}



/* Address: 0x1006a50dc | FUN_1006a50dc */

void FUN_1006a50dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  long lVar2;
  
  lVar2 = *unaff_x22;
  lVar1 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0001006a5140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar1 + 8))();
    return;
  }
  *(undefined8 *)(lVar2 + 0x60) = param_1;
  *(undefined8 *)(lVar2 + 0x68) = param_3;
  *(undefined8 *)(lVar2 + 0x70) = param_2;
  _swift_task_switch(FUN_1006a5174,0,0);
  return;
}



/* Address: 0x1006a5174 | FUN_1006a5174 */

void FUN_1006a5174(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1009b9878(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x28),uVar1,
                *(undefined8 *)(unaff_x22 + 0x70),*(ulong *)(unaff_x22 + 0x68) & 0xffffffffffffff,
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x38));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a51e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a51ec | FUN_1006a51ec */

void FUN_1006a51ec(undefined8 param_1)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_1;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  puVar1 = &DAT_100fdbe08;
  FUN_1000f7830(&DAT_100fdbe08,&DAT_100c6f5d0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x38) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x40) = uVar2;
  _swift_task_switch(FUN_1006a5278,0,0);
  return;
}



/* Address: 0x1006a5278 | FUN_1006a5278 */

void FUN_1006a5278(void)

{
  code *pcVar1;
  long *plVar2;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x28)) {
    FUN_1009e9628(*(undefined8 *)(unaff_x22 + 0x40));
    plVar2 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1006a52e4;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006a52e4);
  (*pcVar1)();
}



/* Address: 0x1006a52e4 | FUN_1006a52e4 */

void FUN_1006a52e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(undefined8 *)(lVar2 + 0x50) = param_1;
  *(undefined8 *)(lVar2 + 0x58) = param_2;
  *(undefined8 *)(lVar2 + 0x60) = param_3;
  *(long *)(lVar2 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x48));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006a5350;
  }
  else {
    pcVar1 = FUN_1006a5500;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a5350 | FUN_1006a5350 */

void FUN_1006a5350(ulong *param_1)

{
  ulong uVar1;
  long *plVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  ulong uVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x50);
  if (lVar5 == 0) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
    FUN_1006116e8();
    uVar4 = *param_1;
    uVar6 = param_1[1];
    uVar1 = param_1[2];
    _swift_retain(uVar4);
    FUN_1006a5df4(uVar3);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006a5494. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(uVar4,uVar6,(ulong)(uint7)uVar1);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar6 = *(ulong *)(unaff_x22 + 0x28);
  *(long *)(unaff_x22 + 0x10) = lVar5;
  *(int *)(unaff_x22 + 0x18) = *(int *)(unaff_x22 + 0x58);
  *(int *)(unaff_x22 + 0x1c) = *(int *)(unaff_x22 + 0x5c);
  *(int *)(unaff_x22 + 0x20) = (int)uVar3;
  *(short *)(unaff_x22 + 0x24) = (short)((ulong)uVar3 >> 0x20);
  *(char *)(unaff_x22 + 0x26) = (char)((ulong)uVar3 >> 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar4 = (ulong)(uint)(*(int *)(unaff_x22 + 0x5c) - *(int *)(unaff_x22 + 0x58));
  if (uVar6 < uVar4) {
    FUN_1006a5e30();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = uVar6;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    FUN_1006a5df4(uVar3);
    _swift_release(lVar5);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
    _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x0001006a5428. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  FUN_1006a5e70(uVar3,*(undefined8 *)(unaff_x22 + 0x38));
  plVar2 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1006a554c;
  FUN_1006a5738(uVar6 - uVar4,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1006a5500 | FUN_1006a5500 */

void FUN_1006a5500(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_1006a5df4(*(undefined8 *)(unaff_x22 + 0x40));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a5548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a554c | FUN_1006a554c */

void FUN_1006a554c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1006a55b0;
  }
  else {
    pcVar1 = FUN_1006a5634;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a55b0 | FUN_1006a55b0 */

void FUN_1006a55b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint7 uVar4;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1006a5eb4(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_1006a5df4(uVar2);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar4 = *(uint7 *)(unaff_x22 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a5630. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(uVar2,uVar3,(ulong)uVar4);
  return;
}



/* Address: 0x1006a5634 | FUN_1006a5634 */

void FUN_1006a5634(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  FUN_1006a5eb4(*(undefined8 *)(unaff_x22 + 0x38));
  FUN_1006a5df4(uVar1);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x10));
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a568c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a5690 | FUN_1006a5690 */

void FUN_1006a5690(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_1006a5014(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1006a5738 | FUN_1006a5738 */

void FUN_1006a5738(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_2;
  *(undefined8 *)(unaff_x22 + 0x50) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  puVar1 = &DAT_100fdbe08;
  FUN_1000f7830(&DAT_100fdbe08,&DAT_100c6f5d0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar2;
  lVar3 = 0;
  FUN_1009edba8();
  uVar2 = *(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar2;
  _swift_task_switch(FUN_1006a57c8,0,0);
  return;
}



/* Address: 0x1006a57c8 | FUN_1006a57c8 */

void FUN_1006a57c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long *plVar4;
  long unaff_x22;
  
  if (-1 < *(long *)(unaff_x22 + 0x40)) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_1006a5efc(*(undefined8 *)(unaff_x22 + 0x50),uVar1);
    FUN_1006a5f4c(uVar1,uVar2);
    plVar4 = (long *)0xa0;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x68) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_1006a5844;
    FUN_1009e9918();
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1006a5844);
  (*pcVar3)();
}



/* Address: 0x1006a5844 | FUN_1006a5844 */

void FUN_1006a5844(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = 0;
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_1006a58cc;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_1006a5b1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a58cc | FUN_1006a58cc */

void FUN_1006a58cc(long *param_1)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 uVar9;
  ushort uVar10;
  undefined2 uVar11;
  uint uVar12;
  code *UNRECOVERED_JUMPTABLE;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  size_t sVar19;
  long unaff_x22;
  long lVar20;
  
  lVar15 = *(long *)(unaff_x22 + 0x78);
  if (lVar15 == 0) {
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_1006a5df4(uVar6);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    uVar3 = *(ulong *)(unaff_x22 + 0x80);
    uVar5 = *(ulong *)(unaff_x22 + 0x88);
    uVar14 = (ulong)(uint)((int)(uVar3 >> 0x20) - (int)uVar3);
    lVar13 = *(long *)(unaff_x22 + 0x70) + uVar14;
    *(long *)(unaff_x22 + 0x90) = lVar13;
    if (SCARRY8(*(long *)(unaff_x22 + 0x70),uVar14)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006a5b14);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar18 = *(long *)(unaff_x22 + 0x40);
    if (lVar13 <= lVar18) {
      uVar7 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc);
      _swift_beginAccess(lVar15 + 0x18,unaff_x22 + 0x10,0,0);
      sVar19 = (uVar3 >> 0x20) - (uVar3 & 0xffffffff);
      uVar17 = (uint)sVar19;
      if (CARRY4(uVar7,uVar17)) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006a5b18);
        (*UNRECOVERED_JUMPTABLE)();
      }
      lVar13 = *(long *)(lVar15 + 0x18);
      uVar14 = **(ulong **)(unaff_x22 + 0x48);
      _swift_isUniquelyReferenced_nonNull_native();
      uVar12 = (uint)uVar14;
      if ((uVar14 & 1) == 0) {
        uVar8 = *(uint *)(*(long *)(unaff_x22 + 0x48) + 0x10);
        iVar1 = 0;
        if (uVar8 <= uVar7 + uVar17) {
          iVar1 = (uVar7 + uVar17) - uVar8;
        }
        FUN_1000d2130();
        FUN_100612358(iVar1,uVar12 & 1);
      }
      uVar10 = *(ushort *)(unaff_x22 + 0x8c);
      plVar16 = *(long **)(unaff_x22 + 0x48);
      FUN_100612380(sVar19,uVar7);
      lVar20 = *plVar16;
      lVar18 = plVar16[2];
      uVar11 = *(undefined2 *)((long)plVar16 + 0x14);
      uVar9 = *(undefined1 *)((long)plVar16 + 0x16);
      _swift_beginAccess(lVar20 + 0x18,unaff_x22 + 0x28,0,0);
      uVar8 = (uint)CONCAT21(uVar11,uVar9);
      uVar12 = (int)lVar18 - uVar8;
      if (uVar7 <= uVar12) {
        uVar12 = uVar7;
      }
      uVar2 = 0;
      if (uVar7 != 0) {
        uVar2 = uVar12;
      }
      _memmove((void *)(*(long *)(lVar20 + 0x18) + (ulong)uVar8 + (ulong)uVar2),
               (void *)(lVar13 + (ulong)uVar10 * 0x100 + (uVar5 >> 0x30 & 0xff) +
                       (uVar3 & 0xffffffff)),sVar19);
      _swift_release(lVar15);
      if (!CARRY4(*(uint *)((long)plVar16 + 0xc),uVar17)) {
        *(uint *)(*(long *)(unaff_x22 + 0x48) + 0xc) = *(uint *)((long)plVar16 + 0xc) + uVar17;
        plVar16 = (long *)0xa0;
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0xa0) = plVar16;
        *plVar16 = unaff_x22;
        plVar16[1] = (long)FUN_1006a5b74;
        FUN_1009e9918();
        return;
      }
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x1006a5b1c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    FUN_1006a5e30();
    _swift_allocError(&DAT_100ee8270,param_1,0,0);
    *param_1 = lVar18;
    *(undefined1 *)(param_1 + 1) = 0;
    _swift_willThrow();
    _swift_release(lVar15);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x58);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x60);
    FUN_1006a5df4(uVar6);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar4);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001006a59c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1006a5b1c | FUN_1006a5b1c */

void FUN_1006a5b1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1006a5df4(uVar2);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001006a5b70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1006a5b74 | FUN_1006a5b74 */

void FUN_1006a5b74(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa0));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x70) = *(undefined8 *)(lVar2 + 0x90);
    *(undefined8 *)(lVar2 + 0x78) = param_1;
    *(undefined8 *)(lVar2 + 0x80) = param_2;
    *(undefined8 *)(lVar2 + 0x88) = param_3;
    pcVar1 = FUN_1006a58cc;
  }
  else {
    *(long *)(lVar2 + 0x98) = unaff_x20;
    pcVar1 = FUN_1006a5b1c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1006a5c00 | FUN_1006a5c00 */

void FUN_1006a5c00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  Data DVar3;
  Data DVar4;
  Data DVar5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  int iVar10;
  long unaff_x21;
  ulong uVar11;
  String SVar12;
  
  DVar3 = Foundation::JSONEncoder::_encode();
  if (unaff_x21 == 0) {
    DVar4 = DVar3;
    FUN_100611728();
    FUN_1001037b4(DVar3.unknown,param_4);
    DVar5 = DVar3;
    uVar7 = param_4;
    FUN_100487db4();
    FUN_10003bf2c(DVar3.unknown,param_4);
    uVar1 = (uint)(param_4 >> 0x20);
    uVar9 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar9 == 0) {
        uVar8 = param_4 >> 0x30 & 0xff;
      }
      else {
        iVar10 = (int)((ulong)DVar3.unknown >> 0x20);
        if (SBORROW4(iVar10,(int)DVar3.unknown)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a5df4);
          (*pcVar2)();
        }
        uVar8 = (ulong)(iVar10 - (int)DVar3.unknown);
      }
    }
    else if (uVar9 == 2) {
      uVar8 = *(long *)(DVar3.unknown + 0x18) - *(long *)(DVar3.unknown + 0x10);
      if (SBORROW8(*(long *)(DVar3.unknown + 0x18),*(long *)(DVar3.unknown + 0x10))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006a5cc4);
        (*pcVar2)();
      }
    }
    else {
      uVar8 = 0;
    }
    uVar11 = 0x2d746e65746e6f43;
    uVar6 = 0xd00000000000001f;
    FUN_1006eb42c(0xd00000000000001f,0x8000000100d92380,uVar8);
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar6)
    ;
    if ((uVar11 & 1) == 0) {
      SVar12 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar12.str,SVar12.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
    }
    _swift_release(uVar6);
    FUN_10003bf2c(DVar3.unknown,param_4);
    param_1[5] = uVar7;
    param_1[4] = DVar5.unknown;
    param_1[7] = 0;
    param_1[6] = (ulong)DVar4.unknown & 0xffffffffffffff;
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[1] = 0x4b4f;
    *param_1 = 200;
    param_1[3] = uVar6;
    param_1[2] = &SUB_e200000000000000;
  }
  return;
}



/* Address: 0x1006a5df4 | FUN_1006a5df4 */

undefined8 FUN_1006a5df4(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009edba8();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1006a5e30 | FUN_1006a5e30 */

void FUN_1006a5e30(void)

{
  undefined8 uVar1;
  
  if (DAT_100fdbe10 != 0) {
    return;
  }
  uVar1 = 0x100c65e48;
  _swift_getWitnessTable(0x100c65e48,&DAT_100ee8270);
  DAT_100fdbe10 = uVar1;
  return;
}



/* Address: 0x1006a5e70 | FUN_1006a5e70 */

undefined8 FUN_1006a5e70(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009edba8();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1006a5eb4 | FUN_1006a5eb4 */

undefined8 FUN_1006a5eb4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fdbe08;
  FUN_1000f7830(&DAT_100fdbe08,&DAT_100c6f5d0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}


