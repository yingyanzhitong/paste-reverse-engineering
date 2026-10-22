/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005be370 | FUN_1005be370 */

void FUN_1005be370(char *param_1,void *param_2)

{
  Hasher into;
  __int64 _Var1;
  long unaff_x20;
  String SVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  into.unknown = auStack_78;
  SVar2.bridgeObject = param_2;
  SVar2.str = param_1;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  FUN_1000715b8(param_1,param_2,_Var1);
  return;
}



/* Address: 0x1005be3e0 | FUN_1005be3e0 */

void FUN_1005be3e0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar1 = param_5 + (param_1 >> 6) * 8;
  *(ulong *)(lVar1 + 0x40) = *(ulong *)(lVar1 + 0x40) | 1L << (param_1 & 0x3f);
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x30) + param_1 * 0x10);
  *puVar3 = param_2;
  puVar3[1] = param_3;
  puVar3 = (undefined8 *)(*(long *)(param_5 + 0x38) + param_1 * 0x30);
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  puVar3[1] = param_4[1];
  *puVar3 = uVar4;
  puVar3[3] = uVar6;
  puVar3[2] = uVar5;
  uVar4 = *(undefined8 *)((long)param_4 + 0x19);
  *(undefined8 *)((long)puVar3 + 0x21) = *(undefined8 *)((long)param_4 + 0x21);
  *(undefined8 *)((long)puVar3 + 0x19) = uVar4;
  if (!SCARRY8(*(long *)(param_5 + 0x10),1)) {
    *(long *)(param_5 + 0x10) = *(long *)(param_5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1005be43c);
  (*pcVar2)();
}



/* Address: 0x1005be43c | FUN_1005be43c */

void FUN_1005be43c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1005bee50(param_2 + 2,param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return;
}



/* Address: 0x1005be474 | FUN_1005be474 */

void FUN_1005be474(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  this = (_DictionaryStorage *)&DAT_100fd4188;
  FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1005be5fc:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_1005be55c;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x30;
      FUN_1005bee50(*(long *)(original + 0x38) + lVar10,&local_90);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x38) + lVar10);
      puVar2[1] = uStack_88;
      *puVar2 = local_90;
      puVar2[3] = CONCAT71(local_77,uStack_78);
      puVar2[2] = uStack_80;
      *(undefined8 *)((long)puVar2 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar2 + 0x19) = CONCAT17(uStack_70,local_77);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1005be55c:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1005be624);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1005be5fc;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x1005be624 | FUN_1005be624 */

void FUN_1005be624(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  undefined8 *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d8 [72];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fd4188;
  FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_1005be8c4:
    _swift_release(original);
LAB_1005be8cc:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1005be8f4);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_1005be8cc;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1005be8c4;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    puVar8 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x30);
    if ((param_2 & 1U) == 0) {
      FUN_1005bee50(puVar8,&local_90);
      _swift_bridgeObjectRetain(pvVar3);
    }
    else {
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_80 = puVar8[2];
      uStack_6f = *(undefined8 *)((long)puVar8 + 0x21);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x19) >> 0x38);
      uStack_78 = (undefined1)puVar8[3];
      local_77 = (undefined7)((ulong)puVar8[3] >> 8);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    into.unknown = auStack_d8;
    Swift::String::hash(into,SVar4);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1005be8f8);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar5 = (bool)(uVar9 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
    *puVar8 = pcVar2;
    puVar8[1] = pvVar3;
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 0x30);
    *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
    *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,local_77);
    puVar8[1] = uStack_88;
    *puVar8 = local_90;
    puVar8[3] = CONCAT71(local_77,uStack_78);
    puVar8[2] = uStack_80;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x1005be8f8 | FUN_1005be8f8 */

void FUN_1005be8f8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 local_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_ef;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  lVar3 = *unaff_x20;
  lVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  lVar1 = lVar10;
  if (uVar11 == 0) {
    uVar9 = lVar4 + 0x40U >> 6;
    uVar11 = uVar9;
    if ((long)uVar9 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar8 = uVar11 - 1;
    do {
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005bea9c);
        (*pcVar7)();
      }
      if ((long)uVar9 <= lVar1) {
        uVar11 = 0;
        uStack_6f = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_77 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        goto LAB_1005be9ac;
      }
      uVar11 = *(ulong *)(lVar5 + lVar1 * 8);
      lVar10 = lVar10 + 1;
    } while (uVar11 == 0);
  }
  lVar8 = lVar1;
  uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar8 << 6;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x10);
  local_a0 = *puVar2;
  uVar6 = puVar2[1];
  uStack_98 = uVar6;
  FUN_1005bee50(*(long *)(lVar3 + 0x38) + uVar9 * 0x30,&local_90);
  _swift_bridgeObjectRetain(uVar6);
LAB_1005be9ac:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar4;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = uVar11;
  pcVar7 = (code *)unaff_x20[5];
  FUN_1000f8cac(&local_a0,&local_e0,&DAT_100fd4150,&DAT_100c64710);
  if (lStack_d8 == 0) {
    FUN_1000fb4c4(&local_a0,&DAT_100fd4150,&DAT_100c64710);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
  }
  else {
    lStack_118 = lStack_d8;
    local_120 = local_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    local_100 = local_c0;
    uStack_ef = uStack_af;
    (*pcVar7)(param_1,&local_120);
    FUN_1000fb4c4(&local_120,&DAT_100fd4158,&DAT_100c64718);
    FUN_1000fb4c4(&local_a0,&DAT_100fd4150,&DAT_100c64710);
  }
  return;
}



/* Address: 0x1005bea9c | FUN_1005bea9c */

void FUN_1005bea9c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *unaff_x20;
  uVar6 = *(ulong *)(uVar4 + 0x10);
  if (uVar6 != 0) {
    uVar7 = uVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar7 & 1) == 0) {
      FUN_1005bded8();
    }
    uVar7 = 0;
    lVar5 = uVar4 + 0x20;
    do {
      if (*(ulong *)(uVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1005beb68);
        (*pcVar3)();
      }
      uVar7 = uVar7 + 1;
      uVar1 = *(undefined8 *)(lVar5 + 0x18);
      lVar2 = *(long *)(lVar5 + 0x20);
      FUN_10007d048(lVar5,uVar1);
      pcVar3 = *(code **)(lVar2 + 0x18);
      FUN_100011128(param_1,param_2);
      (*pcVar3)(param_1,param_2,uVar1,lVar2);
      *unaff_x20 = uVar4;
      lVar5 = lVar5 + 0x28;
    } while (uVar6 != uVar7);
  }
  return;
}



/* Address: 0x1005beb78 | thunk_FUN_1005bed1c */

undefined * thunk_FUN_1005bed1c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fd4188;
    FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&uStack_a0,&DAT_100fd4190,&DAT_100c647d0);
      uVar3 = uStack_98;
      uVar2 = uStack_a0;
      uVar6 = uStack_a0;
      uVar7 = uStack_98;
      FUN_1005be370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x30);
      *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,uStack_77);
      puVar8[1] = uStack_88;
      *puVar8 = uStack_90;
      puVar8[3] = CONCAT71(uStack_77,uStack_78);
      puVar8[2] = uStack_80;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1005beb7c | FUN_1005beb7c */

void FUN_1005beb7c(byte *param_1,long param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  long lStack_80;
  undefined1 auStack_78 [40];
  
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    bVar1 = *param_1;
    param_2 = param_2 + 0x20;
    do {
      FUN_100076688(param_2,auStack_78);
      FUN_100076508(auStack_78,auStack_a0);
      lVar3 = lStack_80;
      uVar4 = local_88;
      FUN_100004640(auStack_a0,local_88);
      (**(code **)(lVar3 + 0x70))(uVar4,lVar3);
      lVar3 = lStack_80;
      uVar2 = local_88;
      if (((uint)uVar4 & 0xff) <= (uint)bVar1) {
        FUN_100004640(auStack_a0,local_88);
        (**(code **)(lVar3 + 0x28))(param_1,uVar2,lVar3);
      }
      FUN_100004594(auStack_a0);
      param_2 = param_2 + 0x28;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}



/* Address: 0x1005bec50 | FUN_1005bec50 */

void FUN_1005bec50(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined1 auStack_160 [96];
  undefined1 local_100 [8];
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
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_e8 = 0;
  local_b8 = param_9;
  uStack_b0 = param_10;
  local_a8 = param_11;
  local_88 = 0;
  local_58 = param_9;
  uStack_50 = param_10;
  local_48 = param_11;
  local_100[0] = param_1;
  local_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e0 = param_4;
  local_d8 = param_5;
  uStack_d0 = param_6;
  local_c8 = param_7;
  uStack_c0 = param_8;
  local_a0[0] = param_1;
  local_98 = param_2;
  uStack_90 = param_3;
  uStack_80 = param_4;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_7;
  uStack_60 = param_8;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _swift_bridgeObjectRetain(param_3);
  FUN_1005bf638(local_100,auStack_160);
  FUN_1004eaa3c(local_a0);
  FUN_1005beb7c(local_100,param_12);
  FUN_1004eaa3c(local_100);
  return;
}



/* Address: 0x1005bed1c | FUN_1005bed1c */

undefined * FUN_1005bed1c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fd4188;
    FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&local_a0,&DAT_100fd4190,&DAT_100c647d0);
      uVar3 = uStack_98;
      uVar2 = local_a0;
      uVar6 = local_a0;
      uVar7 = uStack_98;
      FUN_1005be370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x30);
      *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,local_77);
      puVar8[1] = uStack_88;
      *puVar8 = local_90;
      puVar8[3] = CONCAT71(local_77,uStack_78);
      puVar8[2] = uStack_80;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1005bee50 | FUN_1005bee50 */

undefined8 FUN_1005bee50(undefined8 param_1,undefined8 param_2)

{
  FUN_1005ce4b8(param_2,param_1);
  return param_2;
}



/* Address: 0x1005bee8c | FUN_1005bee8c */

undefined8 FUN_1005bee8c(undefined8 param_1)

{
  FUN_1005ce480();
  return param_1;
}



/* Address: 0x1005beec0 | FUN_1005beec0 */

void FUN_1005beec0(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

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
  if (local_e0 == 0) goto LAB_1005bf1c8;
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
  FUN_1005be370();
  lVar11 = *(long *)(lVar15 + 0x10);
  uVar12 = (ulong)~(uint)uVar9 & 1;
  lVar14 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_1005bf204:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1005bf208);
    (*pcVar7)();
  }
  if (*(long *)(lVar15 + 0x18) < lVar14) {
    FUN_1005be624(lVar14,param_4 & 1);
    uVar8 = uVar10;
    uVar12 = uVar2;
    FUN_1005be370();
    if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) {
LAB_1005befd0:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1005befe0);
      (*pcVar7)();
    }
LAB_1005befe4:
    if ((uVar9 & 1) != 0) goto LAB_1005befe8;
LAB_1005bf038:
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
LAB_1005bf208:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1005bf20c);
      (*pcVar7)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_1005befe4;
    FUN_1005be474();
    if ((uVar9 & 1) == 0) goto LAB_1005bf038;
LAB_1005befe8:
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
    FUN_1005be370();
    lVar11 = *(long *)(lVar15 + 0x10);
    uVar12 = (ulong)~(uint)uVar9 & 1;
    lVar14 = lVar11 + uVar12;
    if (SCARRY8(lVar11,uVar12)) goto LAB_1005bf204;
    if (*(long *)(lVar15 + 0x18) < lVar14) {
      FUN_1005be624(lVar14,1);
      uVar8 = uVar10;
      uVar12 = uVar2;
      FUN_1005be370();
      if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) goto LAB_1005befd0;
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
      if (SCARRY8(*(long *)(lVar11 + 0x10),1)) goto LAB_1005bf208;
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
LAB_1005bf1c8:
  uStack_ff = uVar6;
  uStack_110 = uVar5;
  uStack_118 = uVar4;
  local_120 = uVar3;
  FUN_10000c650(local_a8,puStack_a0,local_98,uStack_90,local_88);
  _swift_release(param_3);
  return;
}



/* Address: 0x1005bf20c | FUN_1005bf20c */

void FUN_1005bf20c(undefined8 param_1)

{
  long lVar1;
  ulong *unaff_x20;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  code *pcVar6;
  
  uVar2 = *unaff_x20;
  uVar4 = *(ulong *)(uVar2 + 0x10);
  if (uVar4 != 0) {
    uVar5 = uVar2;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_1005bded8();
    }
    uVar5 = 0;
    lVar3 = uVar2 + 0x20;
    do {
      if (*(ulong *)(uVar2 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bf2bc);
        (*pcVar6)();
      }
      uVar5 = uVar5 + 1;
      lVar1 = *(long *)(lVar3 + 0x20);
      FUN_10007d048(lVar3,*(undefined8 *)(lVar3 + 0x18));
      pcVar6 = *(code **)(lVar1 + 0x60);
      _swift_bridgeObjectRetain(param_1);
      (*pcVar6)();
      *unaff_x20 = uVar2;
      lVar3 = lVar3 + 0x28;
    } while (uVar4 != uVar5);
  }
  return;
}



/* Address: 0x1005bf2cc | FUN_1005bf2cc */

void FUN_1005bf2cc(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  if (param_1[2] != 0) {
    _swift_release(param_1[3]);
    return;
  }
  return;
}



/* Address: 0x1005bf308 | FUN_1005bf308 */

undefined8 * FUN_1005bf308(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar2 = param_2[2];
  _swift_bridgeObjectRetain();
  if (lVar2 == 0) {
    lVar2 = param_2[2];
    param_1[3] = param_2[3];
    param_1[2] = lVar2;
  }
  else {
    uVar1 = param_2[3];
    param_1[2] = lVar2;
    param_1[3] = uVar1;
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1005bf36c | FUN_1005bf36c */

undefined8 * FUN_1005bf36c(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *plVar4;
  
  uVar3 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar3);
  plVar4 = param_1 + 2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  lVar1 = param_2[2];
  if (*plVar4 == 0) {
    if (lVar1 != 0) {
      uVar3 = param_2[3];
      param_1[2] = lVar1;
      param_1[3] = uVar3;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (lVar1 != 0) {
      uVar3 = param_2[3];
      uVar2 = param_1[3];
      param_1[2] = lVar1;
      param_1[3] = uVar3;
      _swift_retain();
      _swift_release(uVar2);
      return param_1;
    }
    FUN_1005bf410(plVar4);
  }
  lVar1 = param_2[2];
  param_1[3] = param_2[3];
  *plVar4 = lVar1;
  return param_1;
}



/* Address: 0x1005bf410 | FUN_1005bf410 */

undefined8 FUN_1005bf410(undefined8 param_1)

{
  FUN_100055978();
  return param_1;
}



/* Address: 0x1005bf444 | FUN_1005bf444 */

void FUN_1005bf444(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x1005bf450 | FUN_1005bf450 */

undefined8 * FUN_1005bf450(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long lVar4;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  plVar3 = param_1 + 2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  if (*plVar3 != 0) {
    if (param_2[2] != 0) {
      uVar2 = param_2[3];
      uVar1 = param_1[3];
      param_1[2] = param_2[2];
      param_1[3] = uVar2;
      _swift_release(uVar1);
      return param_1;
    }
    FUN_1005bf410(plVar3);
  }
  lVar4 = param_2[2];
  param_1[3] = param_2[3];
  *plVar3 = lVar4;
  return param_1;
}



/* Address: 0x1005bf4cc | FUN_1005bf4cc */

undefined1  [16] FUN_1005bf4cc(void)

{
  return ZEXT816(0x100ee6308);
}



/* Address: 0x1005bf4dc | FUN_1005bf4dc */

void FUN_1005bf4dc(void)

{
  return;
}



/* Address: 0x1005bf4e0 | FUN_1005bf4e0 */

void FUN_1005bf4e0(undefined8 *param_1,undefined8 *param_2)

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
  uVar2 = param_2[0xb];
  uVar1 = param_2[10];
  uVar4 = param_2[0xd];
  uVar3 = param_2[0xc];
  uVar5 = param_2[0xe];
  uVar7 = param_2[0x11];
  uVar6 = param_2[0x10];
  param_1[0xf] = param_2[0xf];
  param_1[0xe] = uVar5;
  param_1[0x11] = uVar7;
  param_1[0x10] = uVar6;
  param_1[0xb] = uVar2;
  param_1[10] = uVar1;
  param_1[0xd] = uVar4;
  param_1[0xc] = uVar3;
  uVar2 = param_2[0x13];
  uVar1 = param_2[0x12];
  uVar4 = param_2[0x15];
  uVar3 = param_2[0x14];
  uVar6 = param_2[0x17];
  uVar5 = param_2[0x16];
  param_1[0x18] = param_2[0x18];
  param_1[0x15] = uVar4;
  param_1[0x14] = uVar3;
  param_1[0x17] = uVar6;
  param_1[0x16] = uVar5;
  param_1[0x13] = uVar2;
  param_1[0x12] = uVar1;
  return;
}



/* Address: 0x1005bf524 | FUN_1005bf524 */

int FUN_1005bf524(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x32] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005bf544 | FUN_1005bf544 */

void FUN_1005bf544(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0x16] = 0;
    param_1[0x15] = 0;
    param_1[0x14] = 0;
    param_1[0x13] = 0;
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x18] = 0;
    param_1[0x17] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 0x19) = uVar1;
  return;
}



/* Address: 0x1005bf5a0 | FUN_1005bf5a0 */

void FUN_1005bf5a0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4168,&DAT_100ee6390);
  return;
}



/* Address: 0x1005bf5b4 | FUN_1005bf5b4 */

void FUN_1005bf5b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1005bf5c8 | FUN_1005bf5c8 */

int FUN_1005bf5c8(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[0x10] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1005bf5e8 | FUN_1005bf5e8 */

void FUN_1005bf5e8(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 - 1);
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return;
}



/* Address: 0x1005bf624 | FUN_1005bf624 */

void FUN_1005bf624(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd4170,&DAT_100ee6410);
  return;
}



/* Address: 0x1005bf638 | FUN_1005bf638 */

undefined8 FUN_1005bf638(undefined8 param_1,undefined8 param_2)

{
  FUN_1005c3880(param_2,param_1);
  return param_2;
}



/* Address: 0x1005bf674 | FUN_1005bf674 */

void FUN_1005bf674(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar1 = param_2[4];
  uVar4 = param_2[7];
  uVar3 = param_2[6];
  uVar5 = param_2[8];
  uVar7 = param_2[0xb];
  uVar6 = param_2[10];
  param_1[9] = param_2[9];
  param_1[8] = uVar5;
  param_1[0xb] = uVar7;
  param_1[10] = uVar6;
  param_1[5] = uVar2;
  param_1[4] = uVar1;
  param_1[7] = uVar4;
  param_1[6] = uVar3;
  uVar2 = param_2[0xd];
  uVar1 = param_2[0xc];
  uVar4 = param_2[0xf];
  uVar3 = param_2[0xe];
  uVar6 = param_2[0x11];
  uVar5 = param_2[0x10];
  param_1[0x12] = param_2[0x12];
  param_1[0xf] = uVar4;
  param_1[0xe] = uVar3;
  param_1[0x11] = uVar6;
  param_1[0x10] = uVar5;
  param_1[0xd] = uVar2;
  param_1[0xc] = uVar1;
  return;
}



/* Address: 0x1005bf6a8 | FUN_1005bf6a8 */

int FUN_1005bf6a8(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x26] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0xe);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005bf704 | FUN_1005bf704 */

void FUN_1005bf704(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x13) = 0;
    }
    if (param_2 != 0) {
      param_1[7] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[0x12] = 0;
    param_1[0x11] = 0;
    param_1[0x10] = 0;
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
  }
  return;
}



/* Address: 0x1005bf77c | FUN_1005bf77c */

void FUN_1005bf77c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd41b8,&DAT_100ee6490);
  return;
}



/* Address: 0x1005bf790 | FUN_1005bf790 */

void FUN_1005bf790(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005bf79c | FUN_1005bf79c */

void FUN_1005bf79c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fd41c0,&DAT_100ee6558);
  return;
}



/* Address: 0x1005bf7b0 | thunk_FUN_1005be14c */

void thunk_FUN_1005be14c(void)

{
  FUN_1005be14c();
  return;
}



/* Address: 0x1005bf7b4 | thunk_FUN_1005be170 */

void thunk_FUN_1005be170(void)

{
  long unaff_x20;
  
  FUN_1005cf7d4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005bf7b8 | thunk_FUN_1005bed1c */

undefined * thunk_FUN_1005bed1c(long param_1)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  code *pcVar4;
  _DictionaryStorage *this;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 *puVar8;
  undefined *capacity;
  ulong uStack_a0;
  ulong uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fd4188;
    FUN_1000f7830(&DAT_100fd4188,&DAT_100c647c8);
    puVar5 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    param_1 = param_1 + 0x20;
    _swift_retain();
    do {
      FUN_1000f8cac(param_1,&uStack_a0,&DAT_100fd4190,&DAT_100c647d0);
      uVar3 = uStack_98;
      uVar2 = uStack_a0;
      uVar6 = uStack_a0;
      uVar7 = uStack_98;
      FUN_1005be370();
      if ((uVar7 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee4c);
        (*pcVar4)();
      }
      uVar7 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar5 + uVar7 + 0x40) = *(ulong *)(puVar5 + uVar7 + 0x40) | 1L << (uVar6 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar5 + 0x30) + uVar6 * 0x10);
      *puVar1 = uVar2;
      puVar1[1] = uVar3;
      puVar8 = (undefined8 *)(*(long *)(puVar5 + 0x38) + uVar6 * 0x30);
      *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,uStack_77);
      puVar8[1] = uStack_88;
      *puVar8 = uStack_90;
      puVar8[3] = CONCAT71(uStack_77,uStack_78);
      puVar8[2] = uStack_80;
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005bee50);
        (*pcVar4)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
      param_1 = param_1 + 0x40;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar5);
  }
  return puVar5;
}



/* Address: 0x1005bf7bc | FUN_1005bf7bc */

void FUN_1005bf7bc(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  pthread_rwlock_t *ppVar10;
  
  puVar9 = param_2;
  if (DAT_100fd41c8 != -1) {
    puVar9 = &DAT_100fd41c8;
    _swift_once(&DAT_100fd41c8,FUN_1005c0ac8);
  }
  uVar4 = DAT_101057b58;
  param_1[3] = &DAT_100ee6730;
  FUN_1005c0b74();
  param_1[4] = puVar9;
  puVar8 = &DAT_100ee6590;
  _swift_allocObject(&DAT_100ee6590,0x38,7);
  *param_1 = puVar8;
  puVar8[0x10] = uVar4;
  uVar2 = DAT_101057b68;
  uVar1 = DAT_101057b60;
  *(undefined8 *)(puVar8 + 0x20) = DAT_101057b68;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  uVar5 = DAT_101057b78;
  uVar1 = DAT_101057b70;
  *(undefined8 *)(puVar8 + 0x30) = DAT_101057b78;
  *(undefined8 *)(puVar8 + 0x28) = uVar1;
  lVar3 = DAT_100fd45a8;
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  if (lVar3 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar3 = DAT_100fd45b0;
  ppVar10 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar7 = _pthread_rwlock_rdlock(ppVar10);
  if (iVar7 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    FUN_100011128(uVar1,uVar2);
    iVar7 = _pthread_rwlock_unlock(ppVar10);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 7) = 2;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      param_1[5] = param_2;
      param_1[6] = param_3;
      param_1[8] = uVar1;
      param_1[9] = uVar2;
      _swift_bridgeObjectRetain(param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bf908);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bf904);
  (*pcVar6)();
}



/* Address: 0x1005bf908 | FUN_1005bf908 */

void FUN_1005bf908(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  if (DAT_100fd41c8 != -1) {
    puVar6 = &DAT_100fd41c8;
    _swift_once(&DAT_100fd41c8,FUN_1005c0ac8);
  }
  uVar1 = DAT_101057b58;
  param_1[3] = &DAT_100ee6730;
  FUN_1005c0b74();
  param_1[4] = puVar6;
  puVar5 = &DAT_100ee6590;
  _swift_allocObject(&DAT_100ee6590,0x38,7);
  *param_1 = puVar5;
  puVar5[0x10] = uVar1;
  uVar3 = DAT_101057b68;
  uVar2 = DAT_101057b60;
  *(undefined8 *)(puVar5 + 0x20) = DAT_101057b68;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  uVar4 = DAT_101057b78;
  uVar2 = DAT_101057b70;
  *(undefined8 *)(puVar5 + 0x30) = DAT_101057b78;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined1 *)(param_1 + 7) = 2;
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = puVar5;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(param_3);
  FUN_100011128(param_4,param_5);
  return;
}



/* Address: 0x1005bfa08 | FUN_1005bfa08 */

void FUN_1005bfa08(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  int iVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  pthread_rwlock_t *ppVar10;
  
  puVar9 = param_2;
  if (DAT_100fd41d8 != -1) {
    puVar9 = &DAT_100fd41d8;
    _swift_once(&DAT_100fd41d8,FUN_1005c09fc);
  }
  uVar4 = DAT_101057b80;
  param_1[3] = &DAT_100ee6730;
  FUN_1005c0b74();
  param_1[4] = puVar9;
  puVar8 = &DAT_100ee6590;
  _swift_allocObject(&DAT_100ee6590,0x38,7);
  *param_1 = puVar8;
  puVar8[0x10] = uVar4;
  uVar2 = DAT_101057b90;
  uVar1 = DAT_101057b88;
  *(undefined8 *)(puVar8 + 0x20) = DAT_101057b90;
  *(undefined8 *)(puVar8 + 0x18) = uVar1;
  uVar5 = DAT_101057ba0;
  uVar1 = DAT_101057b98;
  *(undefined8 *)(puVar8 + 0x30) = DAT_101057ba0;
  *(undefined8 *)(puVar8 + 0x28) = uVar1;
  lVar3 = DAT_100fd45a8;
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  if (lVar3 != -1) {
    _swift_once(&DAT_100fd45a8,FUN_1005ceb54);
  }
  lVar3 = DAT_100fd45b0;
  ppVar10 = *(pthread_rwlock_t **)(*(long *)(DAT_100fd45b0 + 0x10) + 0x10);
  iVar7 = _pthread_rwlock_rdlock(ppVar10);
  if (iVar7 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x20);
    uVar2 = *(undefined8 *)(lVar3 + 0x28);
    FUN_100011128(uVar1,uVar2);
    iVar7 = _pthread_rwlock_unlock(ppVar10);
    if (iVar7 == 0) {
      *(undefined1 *)(param_1 + 7) = 2;
      param_1[10] = 0;
      param_1[0xb] = 0;
      param_1[0xc] = PTR___swiftEmptyDictionarySingleton_100eae0e0;
      param_1[5] = param_2;
      param_1[6] = param_3;
      param_1[8] = uVar1;
      param_1[9] = uVar2;
      _swift_bridgeObjectRetain(param_3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bfb54);
    (*pcVar6)();
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bfb50);
  (*pcVar6)();
}



/* Address: 0x1005bfb54 | FUN_1005bfb54 */

void FUN_1005bfb54(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  
  puVar6 = param_2;
  if (DAT_100fd41d8 != -1) {
    puVar6 = &DAT_100fd41d8;
    _swift_once(&DAT_100fd41d8,FUN_1005c09fc);
  }
  uVar1 = DAT_101057b80;
  param_1[3] = &DAT_100ee6730;
  FUN_1005c0b74();
  param_1[4] = puVar6;
  puVar5 = &DAT_100ee6590;
  _swift_allocObject(&DAT_100ee6590,0x38,7);
  *param_1 = puVar5;
  puVar5[0x10] = uVar1;
  uVar3 = DAT_101057b90;
  uVar2 = DAT_101057b88;
  *(undefined8 *)(puVar5 + 0x20) = DAT_101057b90;
  *(undefined8 *)(puVar5 + 0x18) = uVar2;
  uVar4 = DAT_101057ba0;
  uVar2 = DAT_101057b98;
  *(undefined8 *)(puVar5 + 0x30) = DAT_101057ba0;
  *(undefined8 *)(puVar5 + 0x28) = uVar2;
  *(undefined1 *)(param_1 + 7) = 2;
  puVar5 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = puVar5;
  param_1[5] = param_2;
  param_1[6] = param_3;
  param_1[8] = param_4;
  param_1[9] = param_5;
  _swift_retain(uVar3);
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(param_3);
  FUN_100011128(param_4,param_5);
  return;
}



/* Address: 0x1005bfc54 | FUN_1005bfc54 */

undefined1 FUN_1005bfc54(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x38);
}



/* Address: 0x1005bfc5c | FUN_1005bfc5c */

void FUN_1005bfc5c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x38) = param_1;
  return;
}



/* Address: 0x1005bfc64 | FUN_1005bfc64 */

undefined1  [16] FUN_1005bfc64(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x40);
  FUN_100011128(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  return auVar1;
}



/* Address: 0x1005bfc94 | FUN_1005bfc94 */

void FUN_1005bfc94(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(undefined8 *)(unaff_x20 + 0x48) = param_2;
  return;
}



/* Address: 0x1005bfcc8 | FUN_1005bfcc8 */

/* WARNING: Removing unreachable block (ram,0x0001005bfefc) */

String FUN_1005bfcc8(long param_1)

{
  undefined8 **ppuVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 *puVar4;
  undefined8 **ppuVar5;
  code *pcVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  char *pcVar9;
  void *pvVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined8 ****ppppuVar13;
  undefined8 ***pppuVar14;
  undefined8 ***pppuVar15;
  undefined8 ***pppuVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined8 ***local_b0;
  undefined8 *puStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 **local_70;
  String separator;
  
  ppppuVar13 = *(undefined8 *****)(param_1 + 0x10);
  if (ppppuVar13 == (undefined8 ****)0x0) {
    SVar18 = (String)ZEXT816(0);
  }
  else {
    _swift_bridgeObjectRetain();
    ppppuVar7 = ppppuVar13;
    FUN_1005c0fc0(ppppuVar13,0);
    ppppuVar8 = &local_b0;
    FUN_1005c2084(ppppuVar8,ppppuVar7 + 4,ppppuVar13,param_1);
    FUN_10000c650(local_b0,puStack_a8,local_a0,uStack_98,local_90);
    if (ppppuVar8 != ppppuVar13) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bfefc);
      (*pcVar6)();
    }
    local_b0 = ppppuVar7;
    FUN_1005c1040(&local_b0);
    pppuVar2 = local_b0;
    pppuVar15 = (undefined8 ***)local_b0[2];
    if (pppuVar15 == (undefined8 ***)0x0) {
      _swift_release(local_b0);
      pppuVar14 = (undefined8 ***)PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_70 = (undefined8 **)PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1005bdc50(0,pppuVar15,0);
      pppuVar16 = (undefined8 ***)0x0;
      ppppuVar13 = (undefined8 ****)(pppuVar2 + 4);
      do {
        ppuVar5 = local_70;
        if (pppuVar2[2] <= pppuVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1005bfef8);
          (*pcVar6)();
        }
        pcVar11 = &DAT_100fd4158;
        puVar12 = &DAT_100c64718;
        FUN_1000f8cac(ppppuVar13,&local_b0);
        puVar4 = puStack_a8;
        pppuVar3 = local_b0;
        _swift_bridgeObjectRetain();
        SVar18.bridgeObject = (void *)0xe100000000000000;
        SVar18.str = (char *)0x3d;
        pvVar10 = (void *)0xe100000000000000;
        pcVar9 = (char *)0x3d;
        SVar19.bridgeObject = puVar12;
        SVar19.str = pcVar11;
        Swift::String::append(SVar18,SVar19);
        FUN_1005cc780(&local_b0);
        SVar17.bridgeObject = pvVar10;
        SVar17.str = pcVar9;
        SVar20.bridgeObject = puVar12;
        SVar20.str = pcVar11;
        Swift::String::append(SVar17,SVar20);
        _swift_bridgeObjectRelease(pvVar10);
        FUN_1000fb4c4(&local_b0,&DAT_100fd4158,&DAT_100c64718);
        ppuVar1 = (undefined8 **)ppuVar5[2];
        local_70 = ppuVar5;
        if ((undefined8 **)((ulong)ppuVar5[3] >> 1) <= ppuVar1) {
          FUN_1005bdc50((undefined8 **)0x1 < ppuVar5[3],(undefined8 **)((long)ppuVar1 + 1U),1);
        }
        pppuVar14 = (undefined8 ***)local_70;
        pppuVar16 = (undefined8 ***)((long)pppuVar16 + 1);
        local_70[2] = (undefined8 **)((long)ppuVar1 + 1U);
        local_70[(long)ppuVar1 * 2 + 4] = pppuVar3;
        local_70[(long)ppuVar1 * 2 + 5] = puVar4;
        ppppuVar13 = ppppuVar13 + 8;
      } while (pppuVar15 != pppuVar16);
      _swift_release(pppuVar2);
    }
    local_b0 = pppuVar14;
    FUN_1000f7830(&DAT_100fd41f0,&DAT_100c648d0);
    FUN_1005c2cf0();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar18 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(pppuVar14);
  }
  return SVar18;
}



/* Address: 0x1005bff08 | FUN_1005bff08 */

void FUN_1005bff08(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x60));
  *(undefined8 *)(unaff_x20 + 0x60) = param_1;
  FUN_1005bfcc8();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = param_1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Address: 0x1005bff54 | FUN_1005bff54 */

undefined1  [16] FUN_1005bff54(long *param_1)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  *param_1 = unaff_x20;
  auVar1._8_8_ = unaff_x20 + 0x60;
  auVar1._0_8_ = FUN_1005bff68;
  return auVar1;
}



/* Address: 0x1005bff68 | FUN_1005bff68 */

void FUN_1005bff68(long *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long lVar4;
  
  uVar3 = (undefined4)(param_2 >> 0x20);
  uVar2 = (undefined4)param_2;
  if ((param_2 & 1) == 0) {
    lVar4 = *param_1;
    uVar1 = *(undefined8 *)(lVar4 + 0x60);
    FUN_1005bfcc8();
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar4 + 0x58));
    *(undefined8 *)(lVar4 + 0x50) = uVar1;
    *(ulong *)(lVar4 + 0x58) = CONCAT44(uVar3,uVar2);
  }
  return;
}



/* Address: 0x1005bffac | FUN_1005bffac */

void FUN_1005bffac(undefined8 *param_1,long param_2,ulong param_3)

{
  long unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(unaff_x20 + 0x60);
  if (*(long *)(lVar1 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar1);
    thunk_FUN_1005be370(param_2);
    if ((param_3 & 1) != 0) {
      FUN_1005bee50(*(long *)(lVar1 + 0x38) + param_2 * 0x30,param_1);
      _swift_bridgeObjectRelease(lVar1);
      return;
    }
    _swift_bridgeObjectRelease(lVar1);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Address: 0x1005c0040 | FUN_1005c0040 */

void FUN_1005c0040(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_80 [48];
  
  FUN_1000f8cac(param_1,auStack_80,&DAT_100fd4160,&DAT_100c64720);
  FUN_1005c00ec(auStack_80,param_2,param_3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x60);
  FUN_1005bfcc8();
  FUN_1000fb4c4(param_1,&DAT_100fd4160,&DAT_100c64720);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  *(undefined8 *)(unaff_x20 + 0x50) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x58) = param_2;
  return;
}



/* Address: 0x1005c00ec | FUN_1005c00ec */

void FUN_1005c00ec(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x21);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_90 = param_1[2];
  uStack_88 = (undefined1)param_1[3];
  local_87 = (undefined7)((ulong)param_1[3] >> 8);
  uStack_7f._7_1_ = (char)((ulong)uVar1 >> 0x38);
  uStack_7f = uVar1;
  if (uStack_7f._7_1_ == -1) {
    FUN_1000fb4c4(&local_a0,&DAT_100fd4160,&DAT_100c64720);
    FUN_1005c1cc4(&local_70,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000fb4c4(&local_70,&DAT_100fd4160,&DAT_100c64720);
  }
  else {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uStack_60 = param_1[2];
    uStack_58 = (undefined1)param_1[3];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
    local_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_a0 = *unaff_x20;
    FUN_1005c1dac(&local_70,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_a0;
  }
  return;
}



/* Address: 0x1005c01d8 | FUN_1005c01d8 */

undefined1  [16] FUN_1005c01d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  void *pvVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x78;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x78);
  }
  else {
    _swift_coroFrameAlloc(0x78,0x5990);
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



/* Address: 0x1005c0258 | FUN_1005c0258 */

void FUN_1005c0258(undefined8 *param_1,ulong param_2)

{
  long lVar1;
  undefined8 uVar2;
  void *pvVar3;
  undefined8 uVar4;
  
  pvVar3 = (void *)*param_1;
  uVar2 = *(undefined8 *)((long)pvVar3 + 0x68);
  lVar1 = *(long *)((long)pvVar3 + 0x70);
  uVar4 = *(undefined8 *)((long)pvVar3 + 0x60);
  FUN_1000f8cac(pvVar3,(long)pvVar3 + 0x30,&DAT_100fd4160,&DAT_100c64720);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1005c00ec((long)pvVar3 + 0x30,uVar4,uVar2);
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FUN_1005bfcc8();
  if ((param_2 & 1) == 0) {
    FUN_1000fb4c4(pvVar3,&DAT_100fd4160,&DAT_100c64720);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    *(undefined8 *)(lVar1 + 0x58) = uVar4;
  }
  else {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x58));
    *(undefined8 *)(lVar1 + 0x50) = uVar2;
    *(undefined8 *)(lVar1 + 0x58) = uVar4;
    FUN_1000fb4c4(pvVar3,&DAT_100fd4160,&DAT_100c64720);
  }
  _free(pvVar3);
  return;
}



/* Address: 0x1005c0330 | FUN_1005c0330 */

void FUN_1005c0330(byte *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  ulong uVar4;
  void *pvVar5;
  byte bVar6;
  String SVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  _StringGuts _Var12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  long unaff_x20;
  void *pvVar16;
  void *pvVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  String SVar39;
  String SVar40;
  String SVar41;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  String SVar26;
  
  pcVar8 = *(char **)(unaff_x20 + 0x60);
  pvVar16 = *(void **)(unaff_x20 + 0x40);
  pcVar13 = *(char **)(unaff_x20 + 0x48);
  pcVar15 = *(char **)(param_1 + 0x20);
  FUN_1005c2630();
  if (pcVar8 == (char *)0x0) {
    pcVar9 = *(char **)(unaff_x20 + 0x50);
    pvVar16 = *(void **)(unaff_x20 + 0x58);
    _swift_bridgeObjectRetain(pvVar16);
  }
  else {
    pcVar9 = pcVar8;
    FUN_1005bfcc8();
    _swift_bridgeObjectRelease(pcVar8);
  }
  _Var12.unknown = auStack_78;
  FUN_100076688();
  pvVar17 = (void *)0xe000000000000000;
  pcVar10 = (char *)0x15;
  Swift::_StringGuts::grow(0x15,_Var12);
  FUN_1005c06a0();
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar18.bridgeObject = (void *)0xe100000000000000;
  SVar18.str = (char *)0x20;
  SVar30.bridgeObject = pcVar15;
  SVar30.str = pcVar13;
  Swift::String::append(SVar18,SVar30);
  bVar6 = *param_1;
  pcVar8 = (char *)0x726f727265;
  if (bVar6 != 5) {
    pcVar8 = (char *)0x6c61636974697263;
  }
  puVar1 = &DAT_e500000000000000;
  if (bVar6 != 5) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar14 = (char *)0x656369746f6e;
  if (bVar6 != 3) {
    pcVar14 = (char *)0x676e696e726177;
  }
  puVar2 = &DAT_e600000000000000;
  if (bVar6 != 3) {
    puVar2 = &DAT_e700000000000000;
  }
  if (bVar6 < 5) {
    puVar1 = puVar2;
    pcVar8 = pcVar14;
  }
  pcVar14 = (char *)0x6775626564;
  if (bVar6 != 1) {
    pcVar14 = (char *)0x6f666e69;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar6 != 1) {
    puVar2 = &DAT_e400000000000000;
  }
  pcVar11 = (char *)0x6563617274;
  if (bVar6 != 0) {
    pcVar11 = pcVar14;
  }
  puVar3 = &DAT_e500000000000000;
  if (bVar6 != 0) {
    puVar3 = puVar2;
  }
  if (bVar6 < 3) {
    puVar1 = puVar3;
    pcVar8 = pcVar11;
  }
  SVar19.bridgeObject = puVar1;
  SVar19.str = pcVar8;
  SVar31.bridgeObject = pcVar15;
  SVar31.str = pcVar13;
  Swift::String::append(SVar19,SVar31);
  _swift_bridgeObjectRelease(puVar1);
  SVar18 = *(String *)(unaff_x20 + 0x28);
  uVar4 = (ulong)((String *)(unaff_x20 + 0x28))->str & 0xffffffffffff;
  if ((*(ulong *)(unaff_x20 + 0x30) & 0x2000000000000000) != 0) {
    uVar4 = *(ulong *)(unaff_x20 + 0x30) >> 0x38 & 0xf;
  }
  pcVar8 = (char *)0x0;
  if (uVar4 != 0) {
    pcVar8 = (char *)0x20;
  }
  pvVar5 = (void *)0xe000000000000000;
  if (uVar4 != 0) {
    pvVar5 = (void *)0xe100000000000000;
  }
  SVar20.bridgeObject = pvVar5;
  SVar20.str = pcVar8;
  SVar32.bridgeObject = pcVar15;
  SVar32.str = pcVar13;
  Swift::String::append(SVar20,SVar32);
  _swift_bridgeObjectRelease(pvVar5);
  SVar33.bridgeObject = pcVar15;
  SVar33.str = pcVar13;
  Swift::String::append(SVar18,SVar33);
  SVar21.bridgeObject = (void *)0xe100000000000000;
  SVar21.str = &DAT_0000003a;
  SVar34.bridgeObject = pcVar15;
  SVar34.str = pcVar13;
  Swift::String::append(SVar21,SVar34);
  if (pvVar16 == (void *)0x0) {
    pcVar8 = (char *)0x0;
  }
  else {
    _swift_bridgeObjectRetain(pvVar16);
    SVar22.bridgeObject = pvVar16;
    SVar22.str = pcVar9;
    SVar35.bridgeObject = pcVar15;
    SVar35.str = pcVar13;
    Swift::String::append(SVar22,SVar35);
    _swift_bridgeObjectRelease_n(pvVar16,2);
    pcVar8 = (char *)0x20;
    pvVar17 = (void *)0xe100000000000000;
  }
  SVar23.bridgeObject = pvVar17;
  SVar23.str = pcVar8;
  SVar36.bridgeObject = pcVar15;
  SVar36.str = pcVar13;
  Swift::String::append(SVar23,SVar36);
  _swift_bridgeObjectRelease(pvVar17);
  SVar24.bridgeObject = &SUB_e200000000000000;
  SVar24.str = (char *)0x5b20;
  SVar37.bridgeObject = pcVar15;
  SVar37.str = pcVar13;
  Swift::String::append(SVar24,SVar37);
  pvVar16 = *(void **)(param_1 + 0x30);
  if (pvVar16 == (void *)0x0) {
    pcVar13 = *(char **)(param_1 + 0x38);
    pcVar8 = *(char **)(param_1 + 0x40);
    pcVar11 = (char *)0x2f;
    pcVar9 = pcVar13;
    pcVar14 = pcVar8;
    FUN_1005c0c24();
    if (((uint)pcVar9 & 0xff) == 1) {
      SVar25.bridgeObject = (void *)0xe300000000000000;
      SVar25.str = (char *)0x612f6e;
      pcVar13 = pcVar14;
    }
    else {
      _swift_bridgeObjectRetain(pcVar8);
      SVar29.bridgeObject = pcVar13;
      SVar29.str = pcVar11;
      pcVar9 = pcVar8;
      SVar26.str = Swift::String::get_subscript((Range<Index>)0xf,SVar29);
      SVar26.bridgeObject = pcVar11;
      pcVar15 = pcVar9;
      SVar25 = Swift::String::__fromSubstring(SVar26);
      _swift_bridgeObjectRelease(pcVar9);
      _swift_bridgeObjectRelease(pcVar8);
    }
  }
  else {
    SVar25.bridgeObject = pvVar16;
    SVar25.str = *(char **)(param_1 + 0x28);
  }
  _swift_bridgeObjectRetain(pvVar16);
  SVar38.bridgeObject = pcVar15;
  SVar38.str = pcVar13;
  Swift::String::append(SVar25,SVar38);
  _swift_bridgeObjectRelease(SVar25.bridgeObject);
  SVar27.bridgeObject = &SUB_e200000000000000;
  SVar27.str = (char *)0x205d;
  SVar39.bridgeObject = pcVar15;
  SVar39.str = pcVar13;
  Swift::String::append(SVar27,SVar39);
  SVar40.bridgeObject = pcVar15;
  SVar40.str = pcVar13;
  Swift::String::append(*(String *)(param_1 + 8),SVar40);
  SVar28.bridgeObject = (void *)0xe100000000000000;
  SVar28.str = (char *)0xa;
  SVar41.bridgeObject = pcVar15;
  SVar41.str = pcVar13;
  Swift::String::append(SVar28,SVar41);
  SVar7.bridgeObject = _Var12.unknown;
  SVar7.str = pcVar10;
  FUN_10007d048(auStack_78,local_60);
  Swift::TextOutputStream::write(SVar7);
  _swift_bridgeObjectRelease(_Var12.unknown);
  FUN_100004594(auStack_78);
  return;
}



/* Address: 0x1005c06a0 | FUN_1005c06a0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005c06d4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

String FUN_1005c06a0(undefined8 param_1)

{
  _ArrayBuffer<undefined> _Var1;
  tm *ptVar2;
  UnsafePointer<__int8> cString;
  String SVar3;
  time_t local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _Var1 = Swift::Array<undefined>::_allocateBufferUninitialized
                    (param_1,PTR___type_metadata_for_Swift_Int8_100eadb28);
  *(undefined8 *)(_Var1.unknown + 0x10) = 0xff;
  cString.unknown = _Var1.unknown + 0x20;
  *(undefined8 *)(_Var1.unknown + 0x28) = 0;
  *(undefined8 *)cString.unknown = 0;
  *(undefined8 *)(_Var1.unknown + 0x38) = 0;
  *(undefined8 *)(_Var1.unknown + 0x30) = 0;
  *(undefined8 *)(_Var1.unknown + 0x48) = 0;
  *(undefined8 *)(_Var1.unknown + 0x40) = 0;
  *(undefined8 *)(_Var1.unknown + 0x58) = 0;
  *(undefined8 *)(_Var1.unknown + 0x50) = 0;
  *(undefined8 *)(_Var1.unknown + 0x68) = 0;
  *(undefined8 *)(_Var1.unknown + 0x60) = 0;
  *(undefined8 *)(_Var1.unknown + 0x78) = 0;
  *(undefined8 *)(_Var1.unknown + 0x70) = 0;
  *(undefined8 *)(_Var1.unknown + 0x88) = 0;
  *(undefined8 *)(_Var1.unknown + 0x80) = 0;
  *(undefined8 *)(_Var1.unknown + 0x98) = 0;
  *(undefined8 *)(_Var1.unknown + 0x90) = 0;
  *(undefined8 *)(_Var1.unknown + 0xa8) = 0;
  *(undefined8 *)(_Var1.unknown + 0xa0) = 0;
  *(undefined8 *)(_Var1.unknown + 0xb8) = 0;
  *(undefined8 *)(_Var1.unknown + 0xb0) = 0;
  *(undefined8 *)(_Var1.unknown + 200) = 0;
  *(undefined8 *)(_Var1.unknown + 0xc0) = 0;
  *(undefined8 *)(_Var1.unknown + 0xd8) = 0;
  *(undefined8 *)(_Var1.unknown + 0xd0) = 0;
  *(undefined8 *)(_Var1.unknown + 0xe8) = 0;
  *(undefined8 *)(_Var1.unknown + 0xe0) = 0;
  *(undefined8 *)(_Var1.unknown + 0xf8) = 0;
  *(undefined8 *)(_Var1.unknown + 0xf0) = 0;
  *(undefined8 *)(_Var1.unknown + 0x108) = 0;
  *(undefined8 *)(_Var1.unknown + 0x100) = 0;
  *(undefined8 *)(_Var1.unknown + 0x117) = 0;
  *(undefined8 *)(_Var1.unknown + 0x10f) = 0;
  local_40 = _time((time_t *)0x0);
  ptVar2 = _localtime(&local_40);
  if (ptVar2 == (tm *)0x0) {
    _swift_bridgeObjectRelease(_Var1.unknown);
    SVar3.bridgeObject = (void *)0xe90000000000003e;
    SVar3.str = (char *)0x6e776f6e6b6e753c;
  }
  else {
    _strftime(cString.unknown,*(size_t *)(_Var1.unknown + 0x10),"%Y-%m-%dT%H:%M:%S%z",ptVar2);
    SVar3 = Swift::String::init(cString);
    _swift_bridgeObjectRelease(_Var1.unknown);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return SVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005c07b0 | FUN_1005c07b0 */

void FUN_1005c07b0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_160 [96];
  undefined1 local_100 [8];
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
  undefined1 local_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  local_e8 = 0;
  local_b8 = param_9;
  uStack_b0 = param_10;
  local_a8 = param_11;
  local_88 = 0;
  local_58 = param_9;
  uStack_50 = param_10;
  local_48 = param_11;
  local_100[0] = param_1;
  local_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e0 = param_4;
  local_d8 = param_5;
  uStack_d0 = param_6;
  local_c8 = param_7;
  uStack_c0 = param_8;
  local_a0[0] = param_1;
  local_98 = param_2;
  uStack_90 = param_3;
  uStack_80 = param_4;
  local_78 = param_5;
  uStack_70 = param_6;
  local_68 = param_7;
  uStack_60 = param_8;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _swift_bridgeObjectRetain(param_3);
  FUN_1005bf638(local_100,auStack_160);
  FUN_1004eaa3c(local_a0);
  FUN_1005c0330(local_100);
  FUN_1004eaa3c(local_100);
  return;
}



/* Address: 0x1005c0878 | thunk_FUN_1005c0330 */

void thunk_FUN_1005c0330(void)

{
  FUN_1005c0330();
  return;
}



/* Address: 0x1005c087c | thunk_FUN_1005c07b0 */

void thunk_FUN_1005c07b0(undefined1 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4
                        ,undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8
                        ,undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined1 auStack_160 [96];
  undefined1 auStack_100 [8];
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined1 auStack_a0 [8];
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uStack_e8 = 0;
  uStack_b8 = param_9;
  uStack_b0 = param_10;
  uStack_a8 = param_11;
  uStack_88 = 0;
  uStack_58 = param_9;
  uStack_50 = param_10;
  uStack_48 = param_11;
  auStack_100[0] = param_1;
  uStack_f8 = param_2;
  uStack_f0 = param_3;
  uStack_e0 = param_4;
  uStack_d8 = param_5;
  uStack_d0 = param_6;
  uStack_c8 = param_7;
  uStack_c0 = param_8;
  auStack_a0[0] = param_1;
  uStack_98 = param_2;
  uStack_90 = param_3;
  uStack_80 = param_4;
  uStack_78 = param_5;
  uStack_70 = param_6;
  uStack_68 = param_7;
  uStack_60 = param_8;
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_6);
  _swift_bridgeObjectRetain(param_8);
  _swift_bridgeObjectRetain(param_10);
  _swift_bridgeObjectRetain(param_3);
  FUN_1005bf638(auStack_100,auStack_160);
  FUN_1004eaa3c(auStack_a0);
  FUN_1005c0330(auStack_100);
  FUN_1004eaa3c(auStack_100);
  return;
}



/* Address: 0x1005c0880 | thunk_FUN_1005bffac */

void thunk_FUN_1005bffac(void)

{
  FUN_1005bffac();
  return;
}


