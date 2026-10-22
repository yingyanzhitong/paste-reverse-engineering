/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000d9f4c | FUN_1000d9f4c */

void FUN_1000d9f4c(Bucket param_1,long param_2)

{
  _HashTable _Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  Bucket BVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  _Var1.unknown = (undefined *)(param_2 + 0x40);
  uVar7 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
  uVar8 = param_1.offset + 1U & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(_Var1.unknown + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0) {
    uVar7 = ~uVar7;
    BVar5 = Swift::_HashTable::previousHole(param_1,_Var1);
    uVar9 = BVar5.offset + 1U & uVar7;
    Swift::AnyKeyPath::typeMetadataAccessor();
    do {
      uVar6 = Swift::Hashable::_rawHashValue(*(__int64 *)(param_2 + 0x28));
      uVar6 = uVar6 & uVar7;
      if (param_1.offset < (long)uVar9) {
        if (uVar9 <= uVar6 || (long)uVar6 <= param_1.offset) {
LAB_1000da038:
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x30) + param_1.offset * 8);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x30) + uVar8 * 8);
          if ((param_1.offset < (long)uVar8) || (puVar3 + 1 <= puVar2 || param_1.offset != uVar8)) {
            *puVar2 = *puVar3;
          }
          puVar2 = (undefined8 *)(*(long *)(param_2 + 0x38) + param_1.offset * 0x10);
          puVar3 = (undefined8 *)(*(long *)(param_2 + 0x38) + uVar8 * 0x10);
          if (((param_1.offset < (long)uVar8) || (puVar3 + 2 <= puVar2)) ||
             (param_1.offset != uVar8)) {
            uVar10 = *puVar3;
            puVar2[1] = puVar3[1];
            *puVar2 = uVar10;
            param_1.offset = uVar8;
          }
        }
      }
      else if (uVar9 <= uVar6 && (long)uVar6 <= param_1.offset) goto LAB_1000da038;
      uVar8 = uVar8 + 1 & uVar7;
    } while ((*(ulong *)(_Var1.unknown + (uVar8 >> 6) * 8) >> (uVar8 & 0x3f) & 1) != 0);
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
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1000da0ec);
  (*pcVar4)();
}



/* Address: 0x1000da0ec | FUN_1000da0ec */

undefined * FUN_1000da0ec(long param_1)

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
  ulong local_80;
  ulong uStack_78;
  undefined1 auStack_70 [32];
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100facd90;
    FUN_1000037f0(&DAT_100facd90,&DAT_100c2bc08);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000da3f8(param_1,&local_80);
      uVar3 = uStack_78;
      uVar2 = local_80;
      uVar6 = local_80;
      uVar7 = uStack_78;
      FUN_100071370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000da1f4);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      FUN_100011080(auStack_70,*(long *)(puVar5 + 0x38) + uVar6 * 0x20);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000da1f8);
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



/* Address: 0x1000da1f8 | FUN_1000da1f8 */

undefined * FUN_1000da1f8(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *capacity;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar3 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100facd88;
    uVar5 = 0;
    FUN_1000037f0();
    puVar3 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar9 = (undefined8 *)(param_1 + 0x30);
    do {
      uVar7 = puVar9[-2];
      uVar8 = *puVar9;
      uVar11 = *puVar9;
      uVar10 = puVar9[-1];
      _swift_retain(uVar7);
      _swift_retain(uVar8);
      uVar4 = uVar7;
      FUN_1000d8f84();
      if ((uVar5 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000da300);
        (*pcVar2)();
      }
      uVar6 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar6 + 0x40) = *(ulong *)(puVar3 + uVar6 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar7;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uVar11;
      *puVar1 = uVar10;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000da304);
        (*pcVar2)();
      }
      puVar9 = puVar9 + 3;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar3);
  }
  return puVar3;
}



/* Address: 0x1000da304 | FUN_1000da304 */

void FUN_1000da304(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1000d8ccc(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1000da368 | FUN_1000da368 */

void FUN_1000da368(long param_1)

{
  if (param_1 != 0) {
    _swift_getObjectType();
    Swift::Actor::get_unownedExecutor();
    return;
  }
  return;
}



/* Address: 0x1000da3a0 | FUN_1000da3a0 */

void FUN_1000da3a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000da3c4 | FUN_1000da3c4 */

void FUN_1000da3c4(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_10000cbb0();
  (*pcVar1)(param_1);
  return;
}



/* Address: 0x1000da3f8 | FUN_1000da3f8 */

undefined8 FUN_1000da3f8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100facd98;
  FUN_1000037f0(&DAT_100facd98,&DAT_100c2bc10);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000da448 | FUN_1000da448 */

undefined1  [16] FUN_1000da448(void)

{
  return ZEXT816(0x100eb5bc8);
}



/* Address: 0x1000da458 | FUN_1000da458 */

void FUN_1000da458(undefined8 param_1,long *param_2)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined1 *puVar2;
  long extraout_x8;
  long extraout_x8_00;
  code *pcVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar4 = *(long *)(*param_2 + *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28
                   + 8);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar6 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = auStack_70 + -extraout_x8;
  lVar7 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if (DAT_100faccc0 != -1) {
    _swift_once(&DAT_100faccc0,FUN_1000d8f2c);
  }
  Swift::TaskLocal::get(DAT_101057158);
  if (local_68 != 0) {
    FUN_1000d84ac(puVar5,param_2);
    _swift_release(local_68);
    puVar2 = puVar5;
    (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
    if ((int)puVar2 != 1) {
      pcVar3 = *(code **)(lVar7 + 0x20);
      (*pcVar3)((long)puVar5 - extraout_x8_00,puVar5,lVar4);
      (*pcVar3)(param_1,(long)puVar5 - extraout_x8_00,lVar4);
      return;
    }
    (**(code **)(lVar6 + 8))(puVar5,CONCAT71(extraout_var,OVar1.value));
  }
  _swift_getAtKeyPath(param_1);
  return;
}



/* Address: 0x1000da5cc | FUN_1000da5cc */

void FUN_1000da5cc(undefined8 param_1,code *param_2)

{
  (*param_2)();
  return;
}



/* Address: 0x1000da5ec | FUN_1000da5ec */

undefined8 * FUN_1000da5ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1000da61c | FUN_1000da61c */

undefined8 * FUN_1000da61c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1000da658 | FUN_1000da658 */

void FUN_1000da658(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000da664 | FUN_1000da664 */

undefined8 * FUN_1000da664(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1000da694 | FUN_1000da694 */

void FUN_1000da694(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1000da6a0 | thunk_FUN_1000da5ec */

void thunk_FUN_1000da5ec(void)

{
  FUN_1000da5ec();
  return;
}



/* Address: 0x1000da6a4 | FUN_1000da6a4 */

undefined8 FUN_1000da6a4(undefined8 param_1)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1000da6e0(param_1);
  return unaff_x20;
}



/* Address: 0x1000da6e0 | FUN_1000da6e0 */

void FUN_1000da6e0(long param_1)

{
  undefined *puVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  puVar1 = &DAT_100faccb0;
  FUN_1000037f0(&DAT_100faccb0,&DAT_100c2bb80);
  _swift_allocObject();
  *(undefined4 *)(puVar1 + 0x10) = 0;
  unaff_x20[2] = (long)puVar1;
  (**(code **)(*(long *)(*(long *)(lVar2 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(lVar2 + 0x68),1,1);
  unaff_x20[3] = (long)FUN_1000da760;
  unaff_x20[4] = param_1;
  return;
}



/* Address: 0x1000da760 | FUN_1000da760 */

void FUN_1000da760(void)

{
  FUN_1000da458();
  return;
}



/* Address: 0x1000da768 | FUN_1000da768 */

void FUN_1000da768(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  long lVar2;
  
  lVar5 = *(long *)(*unaff_x20 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar9 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar7 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = (long)puVar7 - extraout_x12;
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar8 = lVar4 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _os_unfair_lock_lock(unaff_x20[2] + 0x10);
  lVar10 = *(long *)(*unaff_x20 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar10,auStack_78,0,0);
  (**(code **)(lVar9 + 0x10))(lVar4,(long)unaff_x20 + lVar10,lVar2);
  lVar3 = lVar4;
  (**(code **)(lVar11 + 0x30))(lVar4,1,lVar5);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar9 + 8))(lVar4,lVar2);
    (*(code *)unaff_x20[3])(param_1);
    (**(code **)(lVar11 + 0x10))(puVar7,param_1,lVar5);
    (**(code **)(lVar11 + 0x38))(puVar7,0,1,lVar5);
    _swift_beginAccess((long)unaff_x20 + lVar10,auStack_90,0x21,0);
    (**(code **)(lVar9 + 0x28))((long)unaff_x20 + lVar10,puVar7,lVar2);
    _swift_endAccess(auStack_90);
  }
  else {
    pcVar6 = *(code **)(lVar11 + 0x20);
    (*pcVar6)(lVar8,lVar4,lVar5);
    (*pcVar6)(param_1,lVar8,lVar5);
  }
  _os_unfair_lock_unlock(unaff_x20[2] + 0x10);
  return;
}



/* Address: 0x1000da940 | FUN_1000da940 */

void FUN_1000da940(void)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  
  _swift_release(unaff_x20[2]);
  _swift_release(unaff_x20[4]);
  lVar2 = *(long *)(*unaff_x20 + 0x68);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 8))
            ((long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1000da9a0 | FUN_1000da9a0 */

void FUN_1000da9a0(void)

{
  FUN_1000da940();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000da9c4 | FUN_1000da9c4 */

void FUN_1000da9c4(undefined8 param_1,undefined8 param_2)

{
  long *unaff_x20;
  long lVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar1 = *unaff_x20;
  FUN_1000da768(&local_40);
  FUN_1000da5cc(param_1,param_2,local_40,uStack_38,*(undefined8 *)(*(long *)(lVar1 + 0x50) + 0x10),
                *(undefined8 *)(*(long *)(lVar1 + 0x50) + 0x18));
  _swift_release(uStack_38);
  return;
}



/* Address: 0x1000daa24 | _swift_allocateGenericClassMetadata */

void _swift_allocateGenericClassMetadata(void)

{
  _swift_allocateGenericClassMetadata();
  return;
}



/* Address: 0x1000daa28 | FUN_1000daa28 */

undefined1  [16] FUN_1000daa28(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined *local_38;
  undefined *puStack_30;
  long local_28;
  
  local_38 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  puStack_30 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  uVar2 = *(ulong *)(param_1 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1,0,3,&local_38,param_1 + 0x58);
    if (param_1 == 0) {
      param_1 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = CONCAT71(extraout_var,OVar1.value);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x1000daab4 | FUN_1000daab4 */

void FUN_1000daab4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1000daac0 | FUN_1000daac0 */

void FUN_1000daac0(undefined8 param_1,long param_2,ulong param_3,code *param_4,undefined8 param_5,
                  long param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  long lVar5;
  code *pcVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined1 auStack_e0 [8];
  long local_d8;
  long lStack_d0;
  undefined8 local_c8;
  ID local_c0;
  undefined1 auStack_b8 [32];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  local_c8 = param_1;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lStack_d0 = CONCAT71(extraout_var,OVar1.value);
  local_d8 = *(long *)(lStack_d0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_e0 + -extraout_x8;
  lVar7 = *(long *)(param_6 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar9 = (long)puVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_c0 = *(ID *)(unaff_x20 + 0x10);
  objc_stub::lock(local_c0);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_98,0x20,0);
  lVar5 = *(long *)(unaff_x20 + 0x18);
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar2 = param_2;
    uVar4 = param_3;
    FUN_100071370(param_2);
    if ((uVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(lVar5 + 0x38) + lVar2 * 0x20,auStack_b8);
      FUN_100011080(auStack_b8,auStack_80);
      _swift_endAccess(auStack_98);
      _swift_bridgeObjectRelease(lVar5);
      FUN_10000cbfc(auStack_80,auStack_b8);
      puVar3 = puVar8;
      _swift_dynamicCast(puVar8,auStack_b8,PTR___type_metadata_for_Any_100eae0c0 + 8,param_6,6);
      if (((ulong)puVar3 & 1) == 0) {
        (**(code **)(lVar7 + 0x38))(puVar8,1,1,param_6);
        (**(code **)(local_d8 + 8))(puVar8,lStack_d0);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1000dad10);
        (*pcVar6)();
      }
      FUN_100004594(auStack_80);
      (**(code **)(lVar7 + 0x38))(puVar8,0,1,param_6);
      pcVar6 = *(code **)(lVar7 + 0x20);
      (*pcVar6)(lVar9,puVar8,param_6);
      (*pcVar6)(local_c8,lVar9,param_6);
      goto LAB_1000dacbc;
    }
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_endAccess(auStack_98);
  (*param_4)(local_c8);
  local_68 = param_6;
  FUN_10000cbb0(auStack_80);
  (**(code **)(lVar7 + 0x10))();
  _swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0x21,0);
  _swift_bridgeObjectRetain(param_3);
  FUN_1000dad10(auStack_80,param_2,param_3);
  _swift_endAccess(auStack_b8);
LAB_1000dacbc:
  objc_stub::unlock(local_c0);
  return;
}



/* Address: 0x1000dad10 | FUN_1000dad10 */

void FUN_1000dad10(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  undefined1 auStack_50 [32];
  
  uStack_68 = param_1[1];
  local_70 = *param_1;
  local_58 = param_1[3];
  uStack_60 = param_1[2];
  if (local_58 == 0) {
    FUN_1000dae10(&local_70);
    FUN_1000d8ff0(auStack_50,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000dae10(auStack_50);
  }
  else {
    FUN_100011080(&local_70,auStack_50);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_70 = *unaff_x20;
    FUN_1000d9184(auStack_50,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_70;
  }
  return;
}



/* Address: 0x1000dadc4 | FUN_1000dadc4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000dadc4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000dadf0 | FUN_1000dadf0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000dadf0(void)

{
  return ZEXT816(0x100facee8);
}



/* Address: 0x1000dae10 | FUN_1000dae10 */

undefined8 FUN_1000dae10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100facd80;
  FUN_1000037f0(&DAT_100facd80,&DAT_100c2bbf8);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1000dae58 | FUN_1000dae58 */

void FUN_1000dae58(undefined8 param_1)

{
  long lVar1;
  void *pvVar2;
  code *pcVar3;
  Optional OVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  char *pcVar9;
  long *unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined8 uStack_90;
  undefined4 auStack_88 [2];
  undefined1 auStack_80 [8];
  String local_78;
  undefined1 auStack_68 [24];
  _StringGuts _Var5;
  
  lVar12 = *unaff_x20;
  pcVar9 = *(char **)(lVar12 + 0x50);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  _Var5.unknown = (undefined *)CONCAT71(extraout_var,OVar4.value);
  lVar11 = *(long *)(_Var5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar1 = -extraout_x8;
  puVar10 = auStack_80 + lVar1;
  lVar12 = *(long *)(lVar12 + 0x58);
  pvVar8 = (void *)0x0;
  _swift_beginAccess((long)unaff_x20 + lVar12,auStack_68,0);
  (**(code **)(lVar11 + 0x10))(puVar10,(long)unaff_x20 + lVar12,_Var5.unknown);
  lVar12 = *(long *)(pcVar9 + -8);
  puVar6 = puVar10;
  pcVar7 = pcVar9;
  (**(code **)(lVar12 + 0x30))(puVar10,1);
  if ((int)puVar6 != 1) {
    (**(code **)(lVar12 + 0x20))(param_1,puVar10,pcVar9);
    return;
  }
  (**(code **)(lVar11 + 8))(puVar10);
  local_78.str = (char *)0x0;
  local_78.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x12,_Var5);
  pvVar2 = local_78.bridgeObject;
  local_78.str = pcVar9;
  _swift_getMetatypeMetadata(pcVar9);
  SVar13 = Swift::String::_init(&local_78,pcVar9);
  _swift_bridgeObjectRelease(pvVar2);
  SVar14.bridgeObject = (void *)0x8000000100d8fae0;
  SVar14.str = (char *)0xd000000000000010;
  SVar15.bridgeObject = pvVar8;
  SVar15.str = pcVar7;
  local_78 = SVar13;
  Swift::String::append(SVar14,SVar15);
  pcVar7 = local_78.str;
  pvVar8 = local_78.bridgeObject;
  *(undefined4 *)((long)auStack_88 + lVar1) = 0;
  *(undefined8 *)((long)&uStack_90 + lVar1) = 0x21;
  SVar13.bridgeObject = (void *)0x2;
  SVar13.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar13,(StaticString)pcVar7,(__uint64)pvVar8,0xd8fad0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1000dafe8);
  (*pcVar3)();
}



/* Address: 0x1000dafe8 | FUN_1000dafe8 */

void FUN_1000dafe8(undefined8 param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(*unaff_x20 + 0x58);
  _swift_beginAccess((long)unaff_x20 + lVar2,auStack_48,0,0);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x10))
            (param_1,(long)unaff_x20 + lVar2,CONCAT71(extraout_var,OVar1.value));
  return;
}



/* Address: 0x1000db054 | FUN_1000db054 */

void FUN_1000db054(undefined8 param_1)

{
  void *pvVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  _StringGuts _Var5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x12;
  char *pcVar8;
  long *unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  undefined8 uStack_a0;
  undefined4 auStack_98 [2];
  String local_90;
  undefined1 auStack_78 [24];
  undefined *puVar4;
  
  lVar11 = *unaff_x20;
  pcVar8 = *(char **)(lVar11 + 0x50);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  puVar4 = (undefined *)CONCAT71(extraout_var,OVar3.value);
  lVar12 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  lVar9 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar9 - extraout_x12;
  lVar13 = *(long *)(lVar11 + 0x58);
  pvVar7 = (void *)0x0;
  _swift_beginAccess((long)unaff_x20 + lVar13,auStack_78,0);
  (**(code **)(lVar12 + 0x10))(lVar10,(long)unaff_x20 + lVar13,puVar4);
  lVar14 = *(long *)(pcVar8 + -8);
  lVar11 = lVar10;
  pcVar6 = pcVar8;
  (**(code **)(lVar14 + 0x30))(lVar10,1);
  _Var5.unknown = puVar4;
  (**(code **)(lVar12 + 8))(lVar10);
  if ((int)lVar11 == 1) {
    (**(code **)(lVar14 + 0x10))(lVar9,param_1,pcVar8);
    (**(code **)(lVar14 + 0x38))(lVar9,0,1,pcVar8);
    _swift_beginAccess((long)unaff_x20 + lVar13,&local_90,0x21,0);
    (**(code **)(lVar12 + 0x28))((long)unaff_x20 + lVar13,lVar9,puVar4);
    _swift_endAccess(&local_90);
    return;
  }
  local_90.str = (char *)0x0;
  local_90.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x17,_Var5);
  pvVar1 = local_90.bridgeObject;
  local_90.str = pcVar8;
  _swift_getMetatypeMetadata(pcVar8);
  SVar15 = Swift::String::_init(&local_90,pcVar8);
  _swift_bridgeObjectRelease(pvVar1);
  SVar16.bridgeObject = (void *)0x8000000100d8fb00;
  SVar16.str = (char *)0xd000000000000015;
  SVar17.bridgeObject = pvVar7;
  SVar17.str = pcVar6;
  local_90 = SVar15;
  Swift::String::append(SVar16,SVar17);
  pcVar6 = local_90.str;
  pvVar7 = local_90.bridgeObject;
  *(undefined4 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0x32;
  SVar15.bridgeObject = (void *)0x2;
  SVar15.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar15,(StaticString)pcVar6,(__uint64)pvVar7,0xd8fad0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000db258);
  (*pcVar2)();
}



/* Address: 0x1000db258 | FUN_1000db258 */

long * FUN_1000db258(void)

{
  long *unaff_x20;
  
  _swift_allocObject();
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),1,1);
  return unaff_x20;
}



/* Address: 0x1000db2a8 | FUN_1000db2a8 */

void FUN_1000db2a8(void)

{
  long *unaff_x20;
  
  (**(code **)(*(long *)(*(long *)(*unaff_x20 + 0x50) + -8) + 0x38))
            ((long)unaff_x20 + *(long *)(*unaff_x20 + 0x58),1,1);
  return;
}



/* Address: 0x1000db2dc | FUN_1000db2dc */

void FUN_1000db2dc(undefined8 param_1,undefined8 param_2)

{
  long extraout_x8;
  long *unaff_x20;
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  lVar3 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar3 + 0x40));
  puVar2 = &stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000dae58(puVar2);
  _swift_getAtKeyPath(param_1,puVar2,param_2);
  (**(code **)(lVar3 + 8))(puVar2,lVar1);
  return;
}



/* Address: 0x1000db36c | FUN_1000db36c */

void FUN_1000db36c(void)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            ((long)unaff_x20 + lVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1000db3ac | FUN_1000db3ac */

void FUN_1000db3ac(void)

{
  long lVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  
  lVar1 = *(long *)(*unaff_x20 + 0x58);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 8))
            ((long)unaff_x20 + lVar1,CONCAT71(extraout_var,OVar2.value));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1000db3f8 | FUN_1000db3f8 */

undefined1  [16] FUN_1000db3f8(long param_1)

{
  Optional OVar1;
  undefined7 extraout_var;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  long local_28;
  
  uVar2 = *(ulong *)(param_1 + 0x50);
  OVar1 = Swift::Optional::typeMetadataAccessor();
  if (uVar2 < 0x40) {
    local_28 = *(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40;
    uVar3 = 0;
    _swift_initClassMetadata2(param_1,0,1,&local_28,param_1 + 0x58);
    if (param_1 == 0) {
      param_1 = 0;
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0x3f;
    param_1 = CONCAT71(extraout_var,OVar1.value);
  }
  auVar4._8_8_ = uVar3;
  auVar4._0_8_ = param_1;
  return auVar4;
}



/* Address: 0x1000db468 | FUN_1000db468 */

void FUN_1000db468(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1000db474 | FUN_1000db474 */

void FUN_1000db474(undefined8 param_1)

{
  FUN_1000db490();
  DAT_101057160 = param_1;
  return;
}



/* Address: 0x1000db490 | FUN_1000db490 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000db490(void)

{
  undefined1 *puVar1;
  bool bVar2;
  URL UVar3;
  undefined *puVar4;
  undefined *puVar5;
  ID IVar6;
  URL UVar7;
  undefined8 uVar8;
  NSURL *pNVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  long lVar10;
  long lVar11;
  char *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  String SVar20;
  String SVar21;
  undefined8 uStack_d0;
  undefined4 auStack_c8 [2];
  undefined1 auStack_c0 [8];
  undefined *local_b8;
  char *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  code *local_78;
  undefined *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar18 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  puVar4 = &DAT_100fad0a0;
  local_98 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  lVar14 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar15 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = lVar15 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar17 = lVar16 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = lVar17 - extraout_x12_02;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = (lVar17 - extraout_x12_02) - extraout_x12_03;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1000db9d8();
  puVar4 = &DAT_100fad0a8;
  local_b8 = puVar5;
  FUN_1000037f0(&DAT_100fad0a8,&DAT_100c2be58);
  local_80 = *(long *)(lVar11 + 0x48);
  pcVar12 = (char *)((ulong)*(byte *)(lVar11 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar11 + 0x50) ^ 0xffffffffffffffff));
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 6;
  *(undefined8 *)(puVar4 + 0x10) = 3;
  local_90 = &_OBJC_CLASS___NSBundle;
  local_70 = puVar4;
  IVar6 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar7.unknown = (undefined *)NSBundle::resourceURL(IVar6);
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  local_78 = *(code **)(lVar18 + 0x38);
  (*local_78)(lVar10,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  puVar4 = local_70 + (long)pcVar12;
  FUN_1000dc0b8(lVar10,puVar4);
  uVar8 = 0;
  FUN_1000dc098(0);
  _swift_getObjCClassFromMetadata();
  IVar6 = objc_stub::bundleForClass_((ID)local_90,uVar8);
  UVar7.unknown = (undefined *)objc_stub::resourceURL(IVar6);
  lVar11 = local_80;
  local_b0 = pcVar12;
  if (UVar7.unknown != (undefined *)0x0) {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  }
  pcVar13 = local_78;
  (*local_78)(puVar4 + lVar11,UVar7.unknown == (undefined *)0x0,1,UVar3.unknown);
  IVar6 = objc_stub::mainBundle((ID)local_90);
  UVar7.unknown = (undefined *)objc_stub::bundleURL(IVar6);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar7);
  (*pcVar13)(puVar4 + lVar11 * 2,0,1,UVar3.unknown);
  local_68 = local_b8;
  FUN_1000dbdb4(local_70);
  local_70 = local_68;
  local_90 = *(undefined **)(local_68 + 0x10);
  if (local_90 != (undefined *)0x0) {
    uVar19 = 0;
    puVar4 = local_68 + (long)local_b0;
    local_b0 = "rect/DI+Direct.swift";
    local_a8 = lVar17;
    local_a0 = UVar3.unknown;
    do {
      lVar11 = local_88;
      if (*(ulong *)(local_70 + 0x10) <= uVar19) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x1000db980);
        (*pcVar13)();
      }
      FUN_1000dc108(puVar4,local_88);
      FUN_1000dc0b8(lVar11,lVar17);
      FUN_1000dc108(lVar17,lVar15);
      pcVar13 = *(code **)(lVar18 + 0x30);
      lVar11 = lVar15;
      UVar7.unknown = UVar3.unknown;
      (*pcVar13)(lVar15,1);
      bVar2 = (int)lVar11 != 1;
      if (bVar2) {
        SVar20.bridgeObject = (void *)((ulong)local_b0 | 0x8000000000000000);
        SVar20.str = (char *)0xd000000000000029;
        Foundation::URL::appendingPathComponent(SVar20,UVar7);
        (**(code **)(lVar18 + 8))(lVar15,UVar3.unknown);
      }
      else {
        FUN_1000dc158(lVar15);
      }
      (*local_78)(lVar16,!bVar2,1,UVar3.unknown);
      FUN_1000dc108(lVar16,lVar14);
      lVar11 = lVar14;
      (*pcVar13)(lVar14,1,UVar3.unknown);
      puVar1 = local_98;
      if ((int)lVar11 == 1) {
        FUN_1000dc158(lVar16);
        FUN_1000dc158(lVar17);
      }
      else {
        (**(code **)(lVar18 + 0x20))(local_98,lVar14,UVar3.unknown);
        UVar3.unknown = &_OBJC_CLASS___NSBundle;
        _objc_allocWithZone();
        pNVar9 = Foundation::URL::_bridgeToObjectiveC(UVar3);
        IVar6 = objc_stub::initWithURL_((ID)UVar3.unknown,pNVar9);
        UVar3.unknown = local_a0;
        lVar17 = local_a8;
        (**(code **)(lVar18 + 8))(puVar1,local_a0);
        FUN_1000dc158(lVar16);
        FUN_1000dc158(lVar17);
        if (IVar6 != 0) {
          _swift_bridgeObjectRelease(local_70);
          return IVar6;
        }
      }
      uVar19 = uVar19 + 1;
      puVar4 = puVar4 + local_80;
    } while (local_90 != (undefined *)uVar19);
  }
  *(undefined4 *)(lVar10 + -8) = 0;
  *(undefined8 *)(lVar10 + -0x10) = 0x2c;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar21,(StaticString)0xd00000000000003e,0x8000000100d8fbc0,
             0xd8fba0);
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1000db9d8);
  (*pcVar13)();
}



/* Address: 0x1000db9d8 | FUN_1000db9d8 */

undefined * FUN_1000db9d8(long param_1)

{
  ulong uVar1;
  undefined1 *puVar2;
  URL UVar3;
  undefined *puVar4;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 auStack_90 [8];
  code *local_88;
  long local_80;
  undefined *local_78;
  undefined1 *local_70;
  undefined *local_68;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar6 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar6 + 0x40));
  local_70 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  puVar4 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  lVar8 = *(long *)(puVar4 + -8);
  local_78 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar7 != 0) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1000dbed8(0,lVar7,0);
    param_1 = param_1 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                        ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff));
    local_80 = *(long *)(lVar6 + 0x48);
    local_88 = *(code **)(lVar6 + 0x10);
    puVar4 = local_68;
    do {
      (*local_88)(lVar5,param_1,UVar3.unknown);
      puVar2 = local_70;
      (**(code **)(lVar6 + 0x20))(local_70,lVar5,UVar3.unknown);
      _swift_dynamicCast(lVar5 - extraout_x8_00,puVar2,UVar3.unknown,local_78,7);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      local_68 = puVar4;
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        FUN_1000dbed8(1 < *(ulong *)(puVar4 + 0x18),uVar1 + 1,1);
      }
      puVar4 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar1 + 1;
      FUN_1000dc0b8(lVar5 - extraout_x8_00,
                    local_68 +
                    *(long *)(lVar8 + 0x48) * uVar1 +
                    ((ulong)*(byte *)(lVar8 + 0x50) + 0x20 &
                    ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff)));
      param_1 = param_1 + local_80;
      lVar7 = lVar7 + -1;
    } while (lVar7 != 0);
  }
  return puVar4;
}



/* Address: 0x1000dbbb8 | FUN_1000dbbb8 */

void FUN_1000dbbb8(void)

{
  FUN_1000dbd5c(&DAT_100c2bd10,&DAT_100facfd0,&DAT_100c2d310,0x30);
  return;
}



/* Address: 0x1000dbbd8 | thunk_FUN_1000dbc5c */

void thunk_FUN_1000dbc5c(void)

{
  FUN_1000dbc5c();
  return;
}



/* Address: 0x1000dbbdc | thunk_FUN_1000e5814 */

void thunk_FUN_1000e5814(void)

{
  FUN_1000e5814();
  return;
}



/* Address: 0x1000dbbe0 | FUN_1000dbbe0 */

void FUN_1000dbbe0(void)

{
  FUN_1000dbd5c(&DAT_100c2bd40,&DAT_100facfd8,&DAT_100c2c7b0,0x30);
  return;
}



/* Address: 0x1000dbc00 | FUN_1000dbc00 */

void FUN_1000dbc00(void)

{
  PassthroughSubject *this;
  
  this = (PassthroughSubject *)&DAT_100facfe0;
  FUN_1000037f0(&DAT_100facfe0,&DAT_100c2bd70);
  _swift_allocObject();
  Combine::PassthroughSubject::_init(this);
  return;
}



/* Address: 0x1000dbc40 | FUN_1000dbc40 */

void FUN_1000dbc40(void)

{
  undefined *self;
  
  self = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  objc_stub::init((ID)self);
  return;
}



/* Address: 0x1000dbc5c | FUN_1000dbc5c */

undefined * FUN_1000dbc5c(void)

{
  __int64 _Var1;
  undefined *puVar2;
  
  if ((ulong)PTR___swiftEmptyArrayStorage_100eae0d8 >> 0x3e != 0) {
    _Var1 = Swift::_CocoaArrayWrapper::get_endIndex
                      ((_CocoaArrayWrapper)PTR___swiftEmptyArrayStorage_100eae0d8);
    if (_Var1 != 0) {
      puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1000e5a0c(PTR___swiftEmptyArrayStorage_100eae0d8);
      return puVar2;
    }
  }
  return PTR___swiftEmptySetSingleton_100eae0e8;
}



/* Address: 0x1000dbca0 | FUN_1000dbca0 */

void FUN_1000dbca0(void)

{
  FUN_1000dbd5c(&DAT_100c2bd78,&DAT_100facfe8,&DAT_100c2bda0,0x30);
  return;
}



/* Address: 0x1000dbcc0 | FUN_1000dbcc0 */

void FUN_1000dbcc0(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad098;
  FUN_1000037f0(&DAT_100fad098,&DAT_100c2be48);
  FUN_1000d80e0(param_1,"PasteLicensingDirect/DI+Direct.swift",0x24,2,0x29,0x13,FUN_1000dc630,0,
                puVar1);
  return;
}



/* Address: 0x1000dbd1c | FUN_1000dbd1c */

void FUN_1000dbd1c(void)

{
  FUN_1000dbd5c(&DAT_100c2bda8,&DAT_100facff0,&DAT_100c2c5a0,0x50);
  return;
}



/* Address: 0x1000dbd3c | FUN_1000dbd3c */

void FUN_1000dbd3c(void)

{
  FUN_1000dbd5c(&DAT_100c2bde0,&DAT_100facff8,&DAT_100c2be10,0x50);
  return;
}



/* Address: 0x1000dbd5c | FUN_1000dbd5c */

void FUN_1000dbd5c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getKeyPath();
  FUN_1000037f0(param_2,param_3);
  _swift_allocObject();
  FUN_1000da6e0(param_1);
  return;
}



/* Address: 0x1000dbdb4 | FUN_1000dbdb4 */

void FUN_1000dbdb4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *unaff_x20;
  ulong uVar6;
  long lVar7;
  
  uVar6 = *(ulong *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar7 = *(long *)(lVar5 + 0x10);
  if (SCARRY8(lVar7,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dbecc);
    (*pcVar1)();
  }
  lVar2 = lVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar7 + uVar6))) {
    FUN_1000dbefc();
    uVar4 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar7 = *(long *)(param_1 + 0x10);
    lVar5 = lVar2;
  }
  else {
    lVar7 = *(long *)(param_1 + 0x10);
  }
  if (lVar7 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dbed0);
      (*pcVar1)();
    }
  }
  else {
    lVar7 = *(long *)(lVar5 + 0x10);
    if (uVar4 - lVar7 < uVar6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dbed4);
      (*pcVar1)();
    }
    puVar3 = &DAT_100fad0a0;
    FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
    uVar4 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
    uVar4 = uVar4 + 0x20 & (uVar4 ^ 0xffffffffffffffff);
    _swift_arrayInitWithCopy
              (lVar5 + uVar4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,param_1 + uVar4,
               uVar6,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (uVar6 != 0) {
      if (SCARRY8(*(long *)(lVar5 + 0x10),uVar6)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000dbed8);
        (*pcVar1)();
      }
      *(ulong *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + uVar6;
    }
  }
  *unaff_x20 = lVar5;
  return;
}



/* Address: 0x1000dbed8 | FUN_1000dbed8 */

void FUN_1000dbed8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1000dbefc();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1000dbefc | FUN_1000dbefc */

undefined *
FUN_1000dbefc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1000dc094);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fad0a8;
    FUN_1000037f0(&DAT_100fad0a8,&DAT_100c2be58);
    puVar6 = &DAT_100fad0a0;
    FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000dc08c);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000dc090);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar5;
}



/* Address: 0x1000dc094 | thunk_FUN_1000e5db8 */

void thunk_FUN_1000e5db8(void)

{
  FUN_1000e5db8();
  return;
}



/* Address: 0x1000dc098 | FUN_1000dc098 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000dc098(void)

{
  return ZEXT816(0x100fad040);
}



/* Address: 0x1000dc0b8 | FUN_1000dc0b8 */

undefined8 FUN_1000dc0b8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000dc108 | FUN_1000dc108 */

undefined8 FUN_1000dc108(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad0a0;
  FUN_1000037f0(&DAT_100fad0a0,&DAT_100c2be50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}


