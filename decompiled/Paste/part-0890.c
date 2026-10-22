/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100995728 | FUN_100995728 */

undefined8 FUN_100995728(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined *puVar3;
  ulong *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 local_90 [3];
  ulong local_78;
  undefined1 local_70;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar8 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 != '\x01') {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009958ac);
      (*pcVar2)();
    }
    _swift_beginAccess(param_2 + 0x10,&local_78,1,0);
    if (*(char *)(param_2 + 0x18) != -1) {
      return 0;
    }
    *(undefined8 *)(param_2 + 0x10) = uVar8;
    *(char *)(param_2 + 0x18) = cVar1;
    _swift_beginAccess(param_2 + 0x30,local_90,1,0);
    uVar8 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_2 + 0x38) = 0;
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x30) = 0;
    return uVar8;
  }
  local_90[0] = uVar8;
  FUN_1005dfeb4(uVar8,1);
  _swift_errorRetain(uVar8);
  puVar3 = &DAT_100ff1318;
  FUN_1000f7830(&DAT_100ff1318,&DAT_100c8b710);
  puVar4 = &local_78;
  _swift_dynamicCast(puVar4,local_90,puVar3,&DAT_100eeb710,6);
  if ((int)puVar4 != 0) {
    uVar5 = local_78;
    thunk_FUN_10061dfe8(local_78,local_70,3,3);
    FUN_10061e298(local_78,local_70);
    if ((uVar5 & 1) != 0) {
      uVar7 = 0;
      uVar6 = 0;
      goto LAB_100995868;
    }
  }
  _swift_willThrow();
  uVar7 = 1;
  uVar6 = uVar8;
LAB_100995868:
  FUN_100630328(uVar6,uVar7);
  FUN_100308538(uVar8,1);
  return uVar6;
}



/* Address: 0x1009958ac | FUN_1009958ac */

/* WARNING: Removing unreachable block (ram,0x000100995978) */

undefined8 FUN_1009958ac(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    FUN_100308524(uVar4,1);
    (*param_3)(uVar4);
    uVar3 = 0;
    FUN_100630328(0,0);
    FUN_100308538(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100995a00);
      (*pcVar2)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_78,1,0);
    uVar3 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(char *)(param_2 + 0x18) = cVar1;
      _swift_beginAccess(param_2 + 0x30,auStack_90,1,0);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
  return uVar3;
}



/* Address: 0x100995a00 | FUN_100995a00 */

void FUN_100995a00(undefined8 *param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar2 = param_1;
  FUN_10063de0c();
  uVar7 = *puVar2;
  uVar3 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar5 = &DAT_100f21e68;
    _swift_allocObject(&DAT_100f21e68,0x20,7);
    *(undefined8 **)(puVar5 + 0x10) = param_1;
    *(undefined8 *)(puVar5 + 0x18) = uVar7;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar7);
    (*pcVar8)(FUN_1008777d0,puVar5,uVar3,lVar1);
    _swift_release(puVar5);
  }
  else {
    FUN_1005de8f4(uVar7);
    FUN_1006486f8();
    FUN_100004550(uVar7,lVar6);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x100995af8 | FUN_100995af8 */

void FUN_100995af8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100995b1c | FUN_100995b1c */

void FUN_100995b1c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100995b30 | FUN_100995b30 */

void FUN_100995b30(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100995b38 | FUN_100995b38 */

void FUN_100995b38(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100995b44 | thunk_FUN_100997bf0 */

void thunk_FUN_100997bf0(void)

{
  FUN_100997bf0();
  return;
}



/* Address: 0x100995b48 | FUN_100995b48 */

void FUN_100995b48(undefined8 param_1,char param_2,ulong param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 unaff_x23;
  undefined1 auStack_78 [24];
  
  bVar3 = param_2 == '\x01';
  if (bVar3) {
    _swift_errorRetain();
    unaff_x23 = param_1;
  }
  _swift_getObjectType();
  uVar4 = param_3;
  (**(code **)(param_4 + 0x10))();
  if ((uVar4 & 1) == 0) {
    puVar6 = &DAT_100f22430;
    _swift_allocObject(&DAT_100f22430,0x31,7);
    *(long *)(puVar6 + 0x10) = param_5;
    *(undefined8 *)(puVar6 + 0x18) = param_6;
    *(undefined8 *)(puVar6 + 0x20) = param_7;
    *(undefined8 *)(puVar6 + 0x28) = unaff_x23;
    puVar6[0x30] = bVar3;
    pcVar2 = *(code **)(param_4 + 0x18);
    _swift_retain(param_5);
    _swift_retain(param_6);
    FUN_100308524(unaff_x23,bVar3);
    (*pcVar2)(thunk_FUN_100997e18,puVar6,param_3,param_4);
    FUN_1002ec258(unaff_x23,bVar3);
    _swift_release(puVar6);
    return;
  }
  uVar5 = *(undefined8 *)(param_5 + 0x10);
  uVar1 = *(undefined8 *)(param_5 + 0x18);
  _swift_getObjectType(uVar5);
  FUN_100642338();
  _swift_beginAccess(param_5 + 0x20,auStack_78,1,0);
  if (SBORROW8(*(long *)(param_5 + 0x20),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100995cd4);
    (*pcVar2)();
  }
  *(long *)(param_5 + 0x20) = *(long *)(param_5 + 0x20) + -1;
  FUN_100642338(uVar5,uVar1);
  if (*(long *)(param_5 + 0x20) == 0) {
    FUN_100995cd4(0,0,param_6);
  }
  FUN_1002ec258(unaff_x23,bVar3);
  return;
}



/* Address: 0x100995cd4 | FUN_100995cd4 */

void FUN_100995cd4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008d06a0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f22408;
  _swift_allocObject(&DAT_100f22408,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(thunk_FUN_1008d418c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100995dcc | FUN_100995dcc */

void FUN_100995dcc(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined1 auStack_58 [24];
  
  uVar3 = *(undefined8 *)(param_1 + 0x10);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  _swift_getObjectType(uVar3);
  FUN_100642338();
  _swift_beginAccess(param_1 + 0x20,auStack_58,1,0);
  if (!SBORROW8(*(long *)(param_1 + 0x20),1)) {
    *(long *)(param_1 + 0x20) = *(long *)(param_1 + 0x20) + -1;
    FUN_100642338(uVar3,uVar1);
    if (*(long *)(param_1 + 0x20) == 0) {
      FUN_100995cd4(0,0,param_2);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100995e68);
  (*pcVar2)();
}



/* Address: 0x100995e68 | FUN_100995e68 */

void FUN_100995e68(undefined8 param_1,ulong param_2,ulong param_3,uint param_4)

{
  undefined8 *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar9 = *unaff_x20;
  uVar3 = param_3;
  uVar5 = param_2;
  FUN_100071340();
  lVar6 = *(long *)(lVar9 + 0x10);
  uVar8 = (ulong)~(uint)uVar5 & 1;
  lVar7 = lVar6 + uVar8;
  if (SCARRY8(lVar6,uVar8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100995f38);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar7) {
    param_4 = param_4 & 1;
    FUN_100995fac(lVar7);
    uVar3 = param_3;
    FUN_100071340();
    if (((uint)uVar5 & 1) != (param_4 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100995f00);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_1009b5610();
    lVar7 = *unaff_x20;
    goto joined_r0x000100995f4c;
  }
  lVar7 = *unaff_x20;
joined_r0x000100995f4c:
  if ((uVar5 & 1) != 0) {
    puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
    uVar4 = *puVar1;
    *puVar1 = param_1;
    puVar1[1] = param_2;
    _swift_unknownObjectRelease(uVar4);
    return;
  }
  lVar6 = lVar7 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar6 + 0x40) = *(ulong *)(lVar6 + 0x40) | 1L << (uVar3 & 0x3f);
  *(ulong *)(*(long *)(lVar7 + 0x30) + uVar3 * 8) = param_3;
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x38) + uVar3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (SCARRY8(*(long *)(lVar7 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100995fac);
    (*pcVar2)();
  }
  *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
  return;
}



/* Address: 0x100995fac | FUN_100995fac */

void FUN_100995fac(long param_1,undefined *param_2)

{
  __int64 capacity;
  undefined8 *puVar1;
  bool bVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  Hasher HVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  __RawDictionaryStorage *p_Var13;
  __uint64 _Var14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100ff1cb0;
  FUN_1000f7830(&DAT_100ff1cb0,&DAT_100c8ade0);
  p_Var4 = original;
  HVar6.unknown = param_2;
  Swift::_DictionaryStorage::_resize(this,original,capacity,SUB81(param_2,0));
  if (*(long *)(original + 0x10) == 0) {
LAB_1009961e4:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var13 = original + 0x40;
  uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar10 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)p_Var13;
  lVar8 = 0;
  do {
    if (uVar12 == 0) {
      do {
        lVar15 = lVar8 + 1;
        if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100996214);
          (*pcVar3)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar15) {
          if (((ulong)param_2 & 1) != 0) {
            uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var13 = -1L << (uVar12 & 0x3f);
            }
            else {
              _bzero(p_Var13,uVar12 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_1009961e4;
        }
        uVar12 = *(ulong *)(p_Var13 + lVar15 * 8);
        lVar8 = lVar8 + 1;
      } while (uVar12 == 0);
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
    }
    else {
      uVar7 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar12 = uVar12 - 1 & uVar12;
      lVar15 = lVar8;
    }
    uVar7 = LZCOUNT(uVar7) | lVar15 << 6;
    _Var14 = *(__uint64 *)(*(long *)(original + 0x30) + uVar7 * 8);
    puVar1 = (undefined8 *)(*(long *)(original + 0x38) + uVar7 * 0x10);
    uVar17 = puVar1[1];
    uVar16 = *puVar1;
    if (((ulong)param_2 & 1) == 0) {
      _swift_unknownObjectRetain(uVar16);
    }
    uVar5 = Swift::Hasher::_hash(*(__int64 *)(p_Var4 + 0x28),_Var14,HVar6);
    uVar11 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar11 ^ 0xffffffffffffffff);
    uVar9 = uVar5 >> 6;
    uVar7 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar9 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar7 == 0) {
      bVar2 = false;
      uVar7 = 0x3f - uVar11 >> 6;
      do {
        uVar5 = uVar9 + 1;
        if ((uVar5 == uVar7) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100996218);
          (*pcVar3)();
        }
        uVar9 = 0;
        if (uVar5 != uVar7) {
          uVar9 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar7 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar9 * 8 + 0x40) == 0xffffffffffffffff);
      uVar7 = ~*(ulong *)(p_Var4 + uVar9 * 8 + 0x40);
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar9 << 6;
    }
    else {
      uVar7 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar9 + 0x40) = 1L << (uVar7 & 0x3f) | *(ulong *)(p_Var4 + uVar9 + 0x40);
    *(__uint64 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) = _Var14;
    puVar1 = (undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar7 * 0x10);
    puVar1[1] = uVar17;
    *puVar1 = uVar16;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar8 = lVar15;
  } while( true );
}



/* Address: 0x100996218 | FUN_100996218 */

void FUN_100996218(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  undefined8 local_48 [3];
  
  _swift_getObjectType();
  local_48[0] = param_1;
  (**(code **)(*(long *)(param_4 + 8) + 0x50))();
  _swift_unknownObjectRelease();
  _swift_beginAccess(param_2 + _TtC20NIOTransportServices14NIOTSEventLoop::registeredChannels,
                     local_48,0x21,0);
  FUN_1009b5580(param_1);
  _swift_endAccess(local_48);
  _swift_unknownObjectRelease(param_1);
  return;
}



/* Address: 0x1009962a4 | FUN_1009962a4 */

void FUN_1009962a4(long param_1,undefined *param_2,long param_3)

{
  _CocoaArrayWrapper _Var1;
  byte bVar2;
  undefined *puVar3;
  void *aBlock;
  undefined **ppuVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long *plVar19;
  code *pcVar20;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  undefined1 uVar24;
  long lVar25;
  undefined8 local_250;
  undefined8 uStack_248;
  long local_238;
  long local_230;
  long local_228;
  undefined *local_220;
  void *local_218;
  undefined8 local_210;
  ulong local_208;
  undefined **local_200;
  long *local_1f8;
  uint local_1ec;
  ulong local_1e8;
  undefined *local_1e0;
  undefined *local_1d8;
  long local_1d0;
  long local_1c8;
  ulong local_1c0;
  ulong local_1b8;
  long local_1b0;
  ulong local_1a8;
  long local_1a0;
  long local_198;
  undefined *local_190;
  undefined1 auStack_188 [24];
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined *local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  code *local_c8;
  undefined *puStack_c0;
  code *local_b8;
  undefined *local_b0;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [32];
  
  local_198 = param_1;
  local_220 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_228 = *(long *)(local_220 + -8);
  local_230 = (long)&local_250 - (*(long *)(local_228 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar14 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar14 == 0) {
    FUN_100995cd4(0,0,local_198);
    return;
  }
  puVar6 = &DAT_100ff1cd8;
  FUN_1000f7830(&DAT_100ff1cd8,&DAT_100c8ae00);
  _swift_allocObject();
  *(long *)(puVar6 + 0x10) = param_3;
  *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f21d18;
  plVar19 = (long *)(puVar6 + 0x20);
  *plVar19 = lVar14;
  local_190 = puVar6;
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar25 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    local_200 = &PTR_PTR_100f21d18;
    lVar14 = param_3;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar25 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    lVar14 = *(long *)(local_190 + 0x10);
    local_200 = *(undefined ***)(local_190 + 0x18);
  }
  local_238 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  local_1b0 = param_3;
  _swift_retain(param_3);
  local_1f8 = plVar19;
  _swift_beginAccess(plVar19,auStack_90,1,0);
  if (lVar25 != 0) {
    uVar21 = 0;
    local_1b8 = (ulong)param_2 & 0xc000000000000001;
    local_1c0 = (ulong)param_2 & 0xffffffffffffff8;
    uStack_248 = 2;
    local_250 = 1;
    local_1d8 = param_2;
    local_1d0 = lVar14;
    local_1c8 = lVar25;
    do {
      if (local_1b8 == 0) {
        if (*(ulong *)(local_1c0 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar20 = (code *)SoftwareBreakpoint(1,0x100996ea8);
          (*pcVar20)();
        }
        uVar23 = *(ulong *)(param_2 + uVar21 * 8 + 0x20);
        _swift_retain(uVar23);
      }
      else {
        uVar23 = uVar21;
        FUN_100999c5c(uVar21,param_2);
      }
      if (SCARRY8(uVar21,1)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x100996ea4);
        (*pcVar20)();
      }
      local_1a0 = uVar21 + 1;
      uVar22 = *(ulong *)(uVar23 + 0x20);
      lVar9 = *(long *)(uVar23 + 0x28);
      uVar13 = uVar22;
      _swift_getObjectType();
      pcVar20 = *(code **)(lVar9 + 0x10);
      _swift_unknownObjectRetain(uVar22);
      (*pcVar20)(uVar13,lVar9);
      _swift_unknownObjectRelease(uVar22);
      if ((uVar13 & 1) == 0) {
LAB_100996544:
        puVar6 = &DAT_100f222c8;
        _swift_allocObject(&DAT_100f222c8,0x38,7);
        lVar9 = local_198;
        lVar25 = local_1b0;
        *(long *)(puVar6 + 0x10) = local_1b0;
        *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f21d18;
        *(undefined **)(puVar6 + 0x20) = local_190;
        *(long *)(puVar6 + 0x28) = local_198;
        *(ulong *)(puVar6 + 0x30) = uVar21;
        puVar8 = &DAT_100f222f0;
        local_1a8 = uVar21;
        _swift_allocObject(&DAT_100f222f0,0x28,7);
        *(code **)(puVar8 + 0x10) = thunk_FUN_100997df0;
        *(undefined **)(puVar8 + 0x18) = puVar6;
        *(ulong *)(puVar8 + 0x20) = uVar23;
        uVar21 = *(ulong *)(uVar23 + 0x20);
        lVar14 = *(long *)(uVar23 + 0x28);
        _swift_getObjectType();
        pcVar20 = *(code **)(lVar14 + 0x10);
        _swift_retain_n(lVar25,2);
        _swift_retain_n(lVar9,2);
        _swift_retain_n(local_190,2);
        _swift_retain_n(puVar6,2);
        _swift_retain_n(uVar23,2);
        (*pcVar20)(uVar21,lVar14);
        if ((uVar21 & 1) == 0) {
          _swift_release(local_198);
          _swift_release(local_190);
          _swift_release(lVar25);
          uVar15 = *(undefined8 *)(uVar23 + 0x20);
          lVar14 = *(long *)(uVar23 + 0x28);
          _swift_getObjectType(uVar15);
          puVar7 = &DAT_100f22318;
          _swift_allocObject(&DAT_100f22318,0x28,7);
          *(ulong *)(puVar7 + 0x10) = uVar23;
          *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
          *(undefined **)(puVar7 + 0x20) = puVar8;
          pcVar20 = *(code **)(lVar14 + 0x18);
          _swift_retain(uVar23);
          _swift_retain(puVar8);
          (*pcVar20)(thunk_FUN_1008db360,puVar7,uVar15,lVar14);
          _swift_release(puVar7);
          _swift_release_n(uVar23,2);
          _swift_release(puVar8);
          _swift_release_n(puVar6,2);
          uVar21 = local_1a8;
          lVar14 = local_1d0;
          lVar25 = local_1c8;
          param_2 = local_1d8;
        }
        else {
          uVar21 = uVar23 + 0x10;
          local_1e0 = puVar8;
          _swift_beginAccess(uVar21,auStack_a8,0,0);
          lVar25 = local_1c8;
          lVar14 = local_1d0;
          uVar22 = *(ulong *)(uVar23 + 0x10);
          bVar2 = *(byte *)(uVar23 + 0x18);
          if (bVar2 == 1) {
            uVar24 = 1;
            local_1ec = (uint)bVar2;
            FUN_100308524(uVar22,1);
            uVar21 = uVar22;
            _swift_errorRetain();
            local_1e8 = uVar22;
LAB_1009967b4:
            lVar14 = local_1b0;
            FUN_100992670();
            puVar8 = local_190;
            if ((uVar21 & 1) == 0) {
              puVar8 = &DAT_100f22340;
              _swift_allocObject(&DAT_100f22340,0x31,7);
              puVar7 = local_190;
              lVar25 = local_198;
              uVar21 = local_1e8;
              *(undefined **)(puVar8 + 0x10) = local_190;
              *(long *)(puVar8 + 0x18) = local_198;
              *(ulong *)(puVar8 + 0x20) = local_1a8;
              *(ulong *)(puVar8 + 0x28) = local_1e8;
              puVar8[0x30] = uVar24;
              local_210 = *(undefined8 *)(lVar14 + 0x18);
              local_b8 = thunk_FUN_100997e18;
              local_d8 = PTR___NSConcreteStackBlock_100ea82a0;
              local_d0 = 0x42000000;
              local_c8 = thunk_FUN_100030410;
              puStack_c0 = &DAT_100f22358;
              local_208 = uVar22;
              local_b0 = puVar8;
              local_218 = __Block_copy(&local_d8);
              local_e0 = PTR___swiftEmptyArrayStorage_100eae0d8;
              _swift_retain(lVar25);
              _swift_retain(puVar7);
              FUN_100308524(uVar21,uVar24);
              puVar7 = &DAT_100ff1c50;
              FUN_100003a00(&DAT_100ff1c50,PTR_typeMetadataAccessor_100eae670,
                            PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680
                           );
              _swift_retain(puVar8);
              puVar10 = &DAT_100ff1c58;
              FUN_1000f7830(&DAT_100ff1c58,&DAT_100c8adb0);
              puVar11 = &DAT_100ff1c60;
              FUN_100155c48(&DAT_100ff1c60,&DAT_100ff1c58,&DAT_100c8adb0);
              puVar3 = local_220;
              lVar25 = local_230;
              Swift::SetAlgebra::_init(local_230,&local_e0,puVar10,puVar11,local_220,puVar7);
              aBlock = local_218;
              (extension_Dispatch)::__C::OS_dispatch_queue::_async
                        ((DispatchQoS)0x0,(undefined *)(lVar14 + local_238));
              __Block_release(aBlock);
              (**(code **)(local_228 + 8))(lVar25,puVar3);
              _swift_release(local_b0);
              FUN_1002ec258(local_1e8,uVar24);
              _swift_release(local_198);
              _swift_release(local_190);
              _swift_release(lVar14);
              _swift_release(puVar8);
              uVar22 = local_208;
            }
            else {
              _swift_getObjectType(*(undefined8 *)(local_190 + 0x10));
              FUN_100642338();
              puVar7 = local_190;
              if (SBORROW8(*(long *)(puVar8 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar20 = (code *)SoftwareBreakpoint(1,0x100996eb4);
                (*pcVar20)();
              }
              *(long *)(local_190 + 0x20) = *(long *)(puVar8 + 0x20) + -1;
              _swift_getObjectType(*(undefined8 *)(local_190 + 0x10));
              FUN_100642338();
              if (*(long *)(puVar7 + 0x20) == 0) {
                uVar21 = *(ulong *)(local_198 + 0x20);
                lVar14 = *(long *)(local_198 + 0x28);
                _swift_getObjectType();
                uVar13 = uVar21;
                (**(code **)(lVar14 + 0x10))();
                lVar25 = local_198;
                if ((uVar13 & 1) != 0) {
                  _swift_beginAccess(local_198 + 0x10,auStack_f8,1,0);
                  lVar9 = local_198;
                  lVar14 = local_1d0;
                  uVar15 = 0;
                  uVar18 = 0;
                  uVar17 = 0;
                  if (*(char *)(lVar25 + 0x18) == -1) {
                    *(undefined8 *)(local_198 + 0x10) = 0;
                    *(undefined1 *)(local_198 + 0x18) = 0;
                    _swift_beginAccess(local_198 + 0x30,auStack_110,1,0);
                    uVar15 = *(undefined8 *)(lVar9 + 0x30);
                    uVar18 = *(undefined8 *)(lVar9 + 0x38);
                    uVar17 = *(undefined8 *)(lVar9 + 0x40);
                    *(undefined8 *)(lVar9 + 0x30) = 0;
                    *(undefined8 *)(lVar9 + 0x38) = 0;
                    *(undefined8 *)(lVar9 + 0x40) = 0;
                  }
                  FUN_1006486f8(uVar15,uVar18,uVar17);
                  FUN_100004550(uVar15,uVar18);
                  _swift_bridgeObjectRelease(uVar17);
                  FUN_1002ec258(local_1e8,uVar24);
                  _swift_release(local_198);
                  _swift_release(local_190);
                  _swift_release(local_1b0);
                  FUN_100308538(uVar22,local_1ec);
                  puVar8 = local_1e0;
                  uVar21 = local_1a8;
                  lVar25 = local_1c8;
                  goto LAB_100996dc8;
                }
                puVar8 = &DAT_100f22390;
                _swift_allocObject(&DAT_100f22390,0x21,7);
                *(long *)(puVar8 + 0x10) = local_198;
                *(undefined8 *)(puVar8 + 0x18) = 0;
                puVar8[0x20] = 0;
                pcVar20 = *(code **)(lVar14 + 0x18);
                _swift_retain(local_198);
                (*pcVar20)(FUN_1008d418c,puVar8,uVar21,lVar14);
                _swift_release(puVar8);
              }
              FUN_1002ec258(local_1e8,uVar24);
              _swift_release(local_198);
              _swift_release(local_190);
              _swift_release(local_1b0);
            }
            FUN_100308538(uVar22,local_1ec);
            puVar8 = local_1e0;
            uVar21 = local_1a8;
            lVar14 = local_1d0;
            lVar25 = local_1c8;
          }
          else {
            if (bVar2 != 0xff) {
              uVar24 = 0;
              local_1ec = (uint)bVar2;
              goto LAB_1009967b4;
            }
            _swift_release(local_198);
            _swift_release(local_190);
            _swift_release(local_1b0);
            _swift_beginAccess(uVar23 + 0x30,&local_d8,0x21,0);
            puVar8 = local_1e0;
            if (*(long *)(uVar23 + 0x30) == 0) {
              *(code **)(uVar23 + 0x30) = thunk_FUN_1006225d4;
              *(undefined **)(uVar23 + 0x38) = local_1e0;
LAB_100996d24:
              _swift_retain(puVar8);
              uVar21 = local_1a8;
            }
            else {
              uVar22 = *(ulong *)(uVar23 + 0x40);
              if (uVar22 == 0) {
                puVar7 = &DAT_100ff1ce0;
                FUN_1000f7830(&DAT_100ff1ce0,&DAT_100c8ae20);
                _swift_allocObject();
                *(undefined8 *)(puVar7 + 0x18) = uStack_248;
                *(undefined8 *)(puVar7 + 0x10) = local_250;
                *(code **)(puVar7 + 0x20) = thunk_FUN_1006225d4;
                *(undefined **)(puVar7 + 0x28) = puVar8;
                *(undefined **)(uVar23 + 0x40) = puVar7;
                goto LAB_100996d24;
              }
              _swift_retain(local_1e0);
              uVar13 = uVar22;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar21 = local_1a8;
              *(ulong *)(uVar23 + 0x40) = uVar22;
              uVar12 = uVar22;
              if ((uVar13 & 1) == 0) {
                uVar12 = 0;
                FUN_100999760(0,*(long *)(uVar22 + 0x10) + 1,1,uVar22);
                *(ulong *)(uVar23 + 0x40) = uVar12;
              }
              uVar22 = *(ulong *)(uVar12 + 0x10);
              uVar13 = uVar12;
              if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar22) {
                uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
                FUN_100999760(uVar13,uVar22 + 1,1,uVar12);
              }
              *(ulong *)(uVar13 + 0x10) = uVar22 + 1;
              lVar9 = uVar13 + uVar22 * 0x10;
              *(code **)(lVar9 + 0x20) = thunk_FUN_1006225d4;
              *(undefined **)(lVar9 + 0x28) = puVar8;
              *(ulong *)(uVar23 + 0x40) = uVar13;
            }
            _swift_endAccess(&local_d8);
          }
LAB_100996dc8:
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release(puVar8);
          _swift_release_n(puVar6,2);
          _swift_release_n(uVar23,2);
          _swift_bridgeObjectRelease(0);
          param_2 = local_1d8;
        }
      }
      else {
        _swift_beginAccess(uVar23 + 0x10,auStack_128,0,0);
        if (*(char *)(uVar23 + 0x18) == '\x01') {
          uVar15 = *(undefined8 *)(uVar23 + 0x10);
          lVar9 = lVar14;
          _swift_getObjectType(lVar14);
          FUN_1005dfeb4(uVar15,1);
          ppuVar4 = local_200;
          FUN_100642338(lVar9,local_200);
          plVar19 = local_1f8;
          if (SBORROW8(*local_1f8,1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x100996eb0);
            (*pcVar20)();
          }
          *local_1f8 = *local_1f8 + -1;
          FUN_100642338(lVar9,ppuVar4);
          if (*plVar19 == 0) {
            uVar22 = *(ulong *)(local_198 + 0x20);
            lVar14 = *(long *)(local_198 + 0x28);
            _swift_getObjectType();
            uVar13 = uVar22;
            (**(code **)(lVar14 + 0x10))();
            lVar25 = local_198;
            if ((uVar13 & 1) == 0) {
              puVar6 = &DAT_100f223b8;
              _swift_allocObject(&DAT_100f223b8,0x21,7);
              *(long *)(puVar6 + 0x10) = local_198;
              *(undefined8 *)(puVar6 + 0x18) = 0;
              puVar6[0x20] = 0;
              pcVar20 = *(code **)(lVar14 + 0x18);
              _swift_retain(local_198);
              (*pcVar20)(thunk_FUN_1008d418c,puVar6,uVar22,lVar14);
              FUN_100308538(uVar15,1);
              _swift_release(uVar23);
              _swift_release(puVar6);
              lVar14 = local_1d0;
              lVar25 = local_1c8;
            }
            else {
              _swift_beginAccess(local_198 + 0x10,auStack_140,1,0);
              lVar14 = local_198;
              uVar18 = 0;
              uVar17 = 0;
              uVar16 = 0;
              if (*(char *)(lVar25 + 0x18) == -1) {
                *(undefined8 *)(local_198 + 0x10) = 0;
                *(undefined1 *)(local_198 + 0x18) = 0;
                _swift_beginAccess(local_198 + 0x30,auStack_158,1,0);
                uVar18 = *(undefined8 *)(lVar14 + 0x30);
                uVar17 = *(undefined8 *)(lVar14 + 0x38);
                uVar16 = *(undefined8 *)(lVar14 + 0x40);
                *(undefined8 *)(lVar14 + 0x30) = 0;
                *(undefined8 *)(lVar14 + 0x38) = 0;
                *(undefined8 *)(lVar14 + 0x40) = 0;
              }
              FUN_1006486f8(uVar18,uVar17,uVar16);
              FUN_100308538(uVar15,1);
              FUN_100004550(uVar18,uVar17);
              _swift_release(uVar23);
              _swift_bridgeObjectRelease(uVar16);
              lVar14 = local_1d0;
              lVar25 = local_1c8;
            }
          }
          else {
            _swift_release(uVar23);
            FUN_100308538(uVar15,1);
          }
        }
        else {
          if (*(char *)(uVar23 + 0x18) == -1) goto LAB_100996544;
          lVar9 = lVar14;
          _swift_getObjectType(lVar14);
          ppuVar4 = local_200;
          FUN_100642338();
          plVar19 = local_1f8;
          if (SBORROW8(*local_1f8,1)) {
                    /* WARNING: Does not return */
            pcVar20 = (code *)SoftwareBreakpoint(1,0x100996eac);
            (*pcVar20)();
          }
          *local_1f8 = *local_1f8 + -1;
          FUN_100642338(lVar9,ppuVar4);
          if (*plVar19 == 0) {
            uVar22 = *(ulong *)(local_198 + 0x20);
            lVar9 = *(long *)(local_198 + 0x28);
            _swift_getObjectType();
            uVar13 = uVar22;
            (**(code **)(lVar9 + 0x10))();
            lVar5 = local_198;
            if ((uVar13 & 1) == 0) {
              puVar6 = &DAT_100f223e0;
              _swift_allocObject(&DAT_100f223e0,0x21,7);
              *(long *)(puVar6 + 0x10) = local_198;
              *(undefined8 *)(puVar6 + 0x18) = 0;
              puVar6[0x20] = 0;
              pcVar20 = *(code **)(lVar9 + 0x18);
              _swift_retain(local_198);
              (*pcVar20)(thunk_FUN_1008d418c,puVar6,uVar22,lVar9);
              lVar25 = local_1c8;
              lVar14 = local_1d0;
              _swift_release(uVar23);
              _swift_release(puVar6);
            }
            else {
              _swift_beginAccess(local_198 + 0x10,auStack_170,1,0);
              lVar9 = local_198;
              uVar15 = 0;
              uVar18 = 0;
              uVar17 = 0;
              if (*(char *)(lVar5 + 0x18) == -1) {
                *(undefined8 *)(local_198 + 0x10) = 0;
                *(undefined1 *)(local_198 + 0x18) = 0;
                _swift_beginAccess(local_198 + 0x30,auStack_188,1,0);
                uVar15 = *(undefined8 *)(lVar9 + 0x30);
                uVar18 = *(undefined8 *)(lVar9 + 0x38);
                uVar17 = *(undefined8 *)(lVar9 + 0x40);
                *(undefined8 *)(lVar9 + 0x30) = 0;
                *(undefined8 *)(lVar9 + 0x38) = 0;
                *(undefined8 *)(lVar9 + 0x40) = 0;
              }
              FUN_1006486f8(uVar15,uVar18,uVar17);
              FUN_100004550(uVar15,uVar18);
              _swift_release(uVar23);
              _swift_bridgeObjectRelease(uVar17);
            }
          }
          else {
            _swift_release(uVar23);
          }
        }
      }
      uVar21 = uVar21 + 1;
    } while (local_1a0 != lVar25);
  }
  _swift_release(local_190);
  return;
}



/* Address: 0x100996ef8 | FUN_100996ef8 */

void FUN_100996ef8(long param_1,undefined *param_2,undefined8 param_3,ulong param_4,long param_5)

{
  _CocoaArrayWrapper _Var1;
  long lVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined *puVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined1 uVar21;
  long *plVar22;
  undefined *puVar23;
  undefined8 local_1d0;
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined1 auStack_128 [24];
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  if ((ulong)param_2 >> 0x3e == 0) {
    lVar14 = *(long *)((undefined *)((ulong)param_2 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    lVar14 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar14 == 0) {
    FUN_100995cd4(0,0,param_1);
    return;
  }
  puVar4 = &DAT_100ff1cd8;
  FUN_1000f7830(&DAT_100ff1cd8,&DAT_100c8ae00);
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x10) = param_3;
  *(long *)(puVar4 + 0x18) = param_5;
  plVar22 = (long *)(puVar4 + 0x20);
  *plVar22 = lVar14;
  if ((ulong)param_2 >> 0x3e == 0) {
    puVar15 = *(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10);
    uVar12 = param_3;
    lVar14 = param_5;
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if (((ulong)param_2 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_2;
    }
    puVar15 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
    uVar12 = *(undefined8 *)(puVar4 + 0x10);
    lVar14 = *(long *)(puVar4 + 0x18);
  }
  _swift_unknownObjectRetain(param_3);
  _swift_beginAccess(plVar22,auStack_80,1,0);
  if (puVar15 != (undefined *)0x0) {
    puVar18 = (undefined *)0x0;
    do {
      if (((ulong)param_2 & 0xc000000000000001) == 0) {
        if (*(undefined **)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= puVar18) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x100997a58);
          (*pcVar13)();
        }
        puVar23 = *(undefined **)(param_2 + (long)puVar18 * 8 + 0x20);
        _swift_retain(puVar23);
      }
      else {
        puVar23 = puVar18;
        FUN_100999c5c(puVar18,param_2);
      }
      if (SCARRY8((long)puVar18,1)) {
                    /* WARNING: Does not return */
        pcVar13 = (code *)SoftwareBreakpoint(1,0x100997a54);
        (*pcVar13)();
      }
      puVar10 = puVar18 + 1;
      uVar16 = *(ulong *)(puVar23 + 0x20);
      lVar2 = *(long *)(puVar23 + 0x28);
      uVar9 = uVar16;
      _swift_getObjectType();
      pcVar13 = *(code **)(lVar2 + 0x10);
      _swift_unknownObjectRetain(uVar16);
      (*pcVar13)(uVar9,lVar2);
      _swift_unknownObjectRelease(uVar16);
      if ((uVar9 & 1) == 0) {
LAB_10099715c:
        puVar7 = &DAT_100f22458;
        _swift_allocObject(&DAT_100f22458,0x38,7);
        *(undefined8 *)(puVar7 + 0x10) = param_3;
        *(long *)(puVar7 + 0x18) = param_5;
        *(undefined **)(puVar7 + 0x20) = puVar4;
        *(long *)(puVar7 + 0x28) = param_1;
        *(undefined **)(puVar7 + 0x30) = puVar18;
        puVar6 = &DAT_100f22480;
        _swift_allocObject(&DAT_100f22480,0x28,7);
        *(code **)(puVar6 + 0x10) = thunk_FUN_100997df0;
        *(undefined **)(puVar6 + 0x18) = puVar7;
        *(undefined **)(puVar6 + 0x20) = puVar23;
        uVar16 = *(ulong *)(puVar23 + 0x20);
        lVar2 = *(long *)(puVar23 + 0x28);
        _swift_getObjectType();
        pcVar13 = *(code **)(lVar2 + 0x10);
        _swift_unknownObjectRetain_n(param_3,2);
        _swift_retain_n(param_1,2);
        _swift_retain_n(puVar4,2);
        _swift_retain_n(puVar7,2);
        _swift_retain_n(puVar23,2);
        (*pcVar13)(uVar16,lVar2);
        if ((uVar16 & 1) == 0) {
          _swift_release(param_1);
          _swift_release(puVar4);
          _swift_unknownObjectRelease(param_3);
          uVar19 = *(undefined8 *)(puVar23 + 0x20);
          lVar2 = *(long *)(puVar23 + 0x28);
          _swift_getObjectType(uVar19);
          puVar5 = &DAT_100f224a8;
          _swift_allocObject(&DAT_100f224a8,0x28,7);
          *(undefined **)(puVar5 + 0x10) = puVar23;
          *(code **)(puVar5 + 0x18) = thunk_FUN_1006225d4;
          *(undefined **)(puVar5 + 0x20) = puVar6;
          pcVar13 = *(code **)(lVar2 + 0x18);
          _swift_retain(puVar23);
          _swift_retain(puVar6);
          (*pcVar13)(thunk_FUN_1008db360,puVar5,uVar19,lVar2);
          _swift_release(puVar5);
          _swift_release_n(puVar23,2);
          _swift_release(puVar6);
          _swift_release_n(puVar7,2);
        }
        else {
          _swift_beginAccess(puVar23 + 0x10,auStack_98,0,0);
          uVar19 = *(undefined8 *)(puVar23 + 0x10);
          cVar3 = puVar23[0x18];
          if (cVar3 == '\x01') {
            uVar21 = 1;
            FUN_1005dfeb4(uVar19,1);
            _swift_errorRetain(uVar19);
            local_1d0 = uVar19;
LAB_1009973d4:
            uVar16 = param_4;
            (**(code **)(param_5 + 0x10))(param_4,param_5);
            if ((uVar16 & 1) == 0) {
              puVar5 = &DAT_100f224d0;
              _swift_allocObject(&DAT_100f224d0,0x31,7);
              *(undefined **)(puVar5 + 0x10) = puVar4;
              *(long *)(puVar5 + 0x18) = param_1;
              *(undefined **)(puVar5 + 0x20) = puVar18;
              *(undefined8 *)(puVar5 + 0x28) = local_1d0;
              puVar5[0x30] = uVar21;
              pcVar13 = *(code **)(param_5 + 0x18);
              _swift_retain(param_1);
              _swift_retain(puVar4);
              FUN_100308524(local_1d0,uVar21);
              (*pcVar13)(thunk_FUN_100997e18,puVar5,param_4,param_5);
              FUN_1002ec258(local_1d0,uVar21);
              _swift_release(param_1);
              _swift_release(puVar4);
              _swift_unknownObjectRelease(param_3);
              _swift_release(puVar5);
              FUN_100308538(uVar19,cVar3);
            }
            else {
              _swift_getObjectType(*(undefined8 *)(puVar4 + 0x10));
              FUN_100642338();
              if (SBORROW8(*(long *)(puVar4 + 0x20),1)) {
                    /* WARNING: Does not return */
                pcVar13 = (code *)SoftwareBreakpoint(1,0x100997a64);
                (*pcVar13)();
              }
              *(long *)(puVar4 + 0x20) = *(long *)(puVar4 + 0x20) + -1;
              _swift_getObjectType(*(undefined8 *)(puVar4 + 0x10));
              FUN_100642338();
              if (*(long *)(puVar4 + 0x20) == 0) {
                uVar16 = *(ulong *)(param_1 + 0x20);
                lVar2 = *(long *)(param_1 + 0x28);
                _swift_getObjectType();
                uVar9 = uVar16;
                (**(code **)(lVar2 + 0x10))();
                if ((uVar9 & 1) == 0) {
                  puVar5 = &DAT_100f224f8;
                  _swift_allocObject(&DAT_100f224f8,0x21,7);
                  *(long *)(puVar5 + 0x10) = param_1;
                  *(undefined8 *)(puVar5 + 0x18) = 0;
                  puVar5[0x20] = 0;
                  pcVar13 = *(code **)(lVar2 + 0x18);
                  _swift_retain(param_1);
                  (*pcVar13)(thunk_FUN_1008d418c,puVar5,uVar16,lVar2);
                  _swift_release(puVar5);
                  FUN_1002ec258(local_1d0,uVar21);
                  _swift_release(param_1);
                  _swift_release(puVar4);
                  _swift_unknownObjectRelease(param_3);
                  FUN_100308538(uVar19,cVar3);
                }
                else {
                  _swift_beginAccess(param_1 + 0x10,auStack_c8,1,0);
                  uVar11 = 0;
                  uVar20 = 0;
                  uVar17 = 0;
                  if (*(char *)(param_1 + 0x18) == -1) {
                    *(undefined8 *)(param_1 + 0x10) = 0;
                    *(undefined1 *)(param_1 + 0x18) = 0;
                    _swift_beginAccess(param_1 + 0x30,auStack_e0,1,0);
                    uVar11 = *(undefined8 *)(param_1 + 0x30);
                    uVar20 = *(undefined8 *)(param_1 + 0x38);
                    uVar17 = *(undefined8 *)(param_1 + 0x40);
                    *(undefined8 *)(param_1 + 0x30) = 0;
                    *(undefined8 *)(param_1 + 0x38) = 0;
                    *(undefined8 *)(param_1 + 0x40) = 0;
                  }
                  FUN_1006486f8(uVar11,uVar20,uVar17);
                  FUN_100004550(uVar11,uVar20);
                  _swift_bridgeObjectRelease(uVar17);
                  FUN_1002ec258(local_1d0,uVar21);
                  _swift_release(param_1);
                  _swift_release(puVar4);
                  _swift_unknownObjectRelease(param_3);
                  FUN_100308538(uVar19,cVar3);
                }
              }
              else {
                FUN_1002ec258(local_1d0,uVar21);
                _swift_release(param_1);
                _swift_release(puVar4);
                _swift_unknownObjectRelease(param_3);
                FUN_100308538(uVar19,cVar3);
              }
            }
          }
          else {
            if (cVar3 != -1) {
              uVar21 = 0;
              goto LAB_1009973d4;
            }
            _swift_release(param_1);
            _swift_release(puVar4);
            _swift_unknownObjectRelease(param_3);
            _swift_beginAccess(puVar23 + 0x30,auStack_b0,0x21,0);
            if (*(long *)(puVar23 + 0x30) == 0) {
              *(code **)(puVar23 + 0x30) = thunk_FUN_1006225d4;
              *(undefined **)(puVar23 + 0x38) = puVar6;
              _swift_retain(puVar6);
            }
            else {
              uVar16 = *(ulong *)(puVar23 + 0x40);
              if (uVar16 == 0) {
                puVar5 = &DAT_100ff1ce0;
                FUN_1000f7830(&DAT_100ff1ce0,&DAT_100c8ae20);
                _swift_allocObject();
                *(undefined8 *)(puVar5 + 0x18) = 2;
                *(undefined8 *)(puVar5 + 0x10) = 1;
                *(code **)(puVar5 + 0x20) = thunk_FUN_1006225d4;
                *(undefined **)(puVar5 + 0x28) = puVar6;
                *(undefined **)(puVar23 + 0x40) = puVar5;
                _swift_retain(puVar6);
              }
              else {
                _swift_retain(puVar6);
                uVar9 = uVar16;
                _swift_isUniquelyReferenced_nonNull_native();
                *(ulong *)(puVar23 + 0x40) = uVar16;
                uVar8 = uVar16;
                if ((uVar9 & 1) == 0) {
                  uVar8 = 0;
                  FUN_100999760(0,*(long *)(uVar16 + 0x10) + 1,1,uVar16);
                  *(ulong *)(puVar23 + 0x40) = uVar8;
                }
                uVar16 = *(ulong *)(uVar8 + 0x10);
                uVar9 = uVar8;
                if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar16) {
                  uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
                  FUN_100999760(uVar9,uVar16 + 1,1,uVar8);
                }
                *(ulong *)(uVar9 + 0x10) = uVar16 + 1;
                lVar2 = uVar9 + uVar16 * 0x10;
                *(code **)(lVar2 + 0x20) = thunk_FUN_1006225d4;
                *(undefined **)(lVar2 + 0x28) = puVar6;
                *(ulong *)(puVar23 + 0x40) = uVar9;
              }
            }
            _swift_endAccess(auStack_b0);
          }
          FUN_1006486f8(0,0,0);
          FUN_100004550(0,0);
          _swift_release(puVar6);
          _swift_release_n(puVar7,2);
          _swift_release_n(puVar23,2);
          _swift_bridgeObjectRelease(0);
        }
      }
      else {
        _swift_beginAccess(puVar23 + 0x10,auStack_f8,0,0);
        if (puVar23[0x18] == '\x01') {
          uVar11 = *(undefined8 *)(puVar23 + 0x10);
          uVar19 = uVar12;
          _swift_getObjectType(uVar12);
          FUN_1005dfeb4(uVar11,1);
          FUN_100642338(uVar19,lVar14);
          if (SBORROW8(*plVar22,1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100997a60);
            (*pcVar13)();
          }
          *plVar22 = *plVar22 + -1;
          FUN_100642338(uVar19,lVar14);
          if (*plVar22 == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            lVar2 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar9 = uVar16;
            (**(code **)(lVar2 + 0x10))();
            if ((uVar9 & 1) == 0) {
              puVar7 = &DAT_100f22520;
              _swift_allocObject(&DAT_100f22520,0x21,7);
              *(long *)(puVar7 + 0x10) = param_1;
              *(undefined8 *)(puVar7 + 0x18) = 0;
              puVar7[0x20] = 0;
              pcVar13 = *(code **)(lVar2 + 0x18);
              _swift_retain(param_1);
              (*pcVar13)(thunk_FUN_1008d418c,puVar7,uVar16,lVar2);
              FUN_100308538(uVar11,1);
              _swift_release(puVar23);
              _swift_release(puVar7);
            }
            else {
              _swift_beginAccess(param_1 + 0x10,auStack_110,1,0);
              uVar19 = 0;
              uVar20 = 0;
              uVar17 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined1 *)(param_1 + 0x18) = 0;
                _swift_beginAccess(param_1 + 0x30,auStack_128,1,0);
                uVar19 = *(undefined8 *)(param_1 + 0x30);
                uVar20 = *(undefined8 *)(param_1 + 0x38);
                uVar17 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              FUN_1006486f8(uVar19,uVar20,uVar17);
              FUN_100308538(uVar11,1);
              FUN_100004550(uVar19,uVar20);
              _swift_release(puVar23);
              _swift_bridgeObjectRelease(uVar17);
            }
          }
          else {
            _swift_release(puVar23);
            FUN_100308538(uVar11,1);
          }
        }
        else {
          if (puVar23[0x18] == -1) goto LAB_10099715c;
          uVar19 = uVar12;
          _swift_getObjectType(uVar12);
          FUN_100642338();
          if (SBORROW8(*plVar22,1)) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x100997a5c);
            (*pcVar13)();
          }
          *plVar22 = *plVar22 + -1;
          FUN_100642338(uVar19,lVar14);
          if (*plVar22 == 0) {
            uVar16 = *(ulong *)(param_1 + 0x20);
            lVar2 = *(long *)(param_1 + 0x28);
            _swift_getObjectType();
            uVar9 = uVar16;
            (**(code **)(lVar2 + 0x10))();
            if ((uVar9 & 1) != 0) {
              _swift_beginAccess(param_1 + 0x10,auStack_140,1,0);
              uVar19 = 0;
              uVar11 = 0;
              uVar20 = 0;
              if (*(char *)(param_1 + 0x18) == -1) {
                *(undefined8 *)(param_1 + 0x10) = 0;
                *(undefined1 *)(param_1 + 0x18) = 0;
                _swift_beginAccess(param_1 + 0x30,auStack_158,1,0);
                uVar19 = *(undefined8 *)(param_1 + 0x30);
                uVar11 = *(undefined8 *)(param_1 + 0x38);
                uVar20 = *(undefined8 *)(param_1 + 0x40);
                *(undefined8 *)(param_1 + 0x30) = 0;
                *(undefined8 *)(param_1 + 0x38) = 0;
                *(undefined8 *)(param_1 + 0x40) = 0;
              }
              FUN_1006486f8(uVar19,uVar11,uVar20);
              FUN_100004550(uVar19,uVar11);
              _swift_release(puVar23);
              _swift_bridgeObjectRelease(uVar20);
              goto LAB_1009970b8;
            }
            puVar7 = &DAT_100f22548;
            _swift_allocObject(&DAT_100f22548,0x21,7);
            *(long *)(puVar7 + 0x10) = param_1;
            *(undefined8 *)(puVar7 + 0x18) = 0;
            puVar7[0x20] = 0;
            pcVar13 = *(code **)(lVar2 + 0x18);
            _swift_retain(param_1);
            (*pcVar13)(thunk_FUN_1008d418c,puVar7,uVar16,lVar2);
            _swift_release(puVar23);
            puVar23 = puVar7;
          }
          _swift_release(puVar23);
        }
      }
LAB_1009970b8:
      puVar18 = puVar18 + 1;
    } while (puVar10 != puVar15);
  }
  _swift_release(puVar4);
  return;
}



/* Address: 0x100997aa4 | FUN_100997aa4 */

void FUN_100997aa4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100997ad8 | FUN_100997ad8 */

void FUN_100997ad8(void)

{
  long unaff_x20;
  
  FUN_1009933ec(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100997ae8 | FUN_100997ae8 */

void FUN_100997ae8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100997b0c | FUN_100997b0c */

void FUN_100997b0c(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x18));
  (extension_Dispatch)::__C::OS_dispatch_source::cancel();
  return;
}



/* Address: 0x100997b34 | FUN_100997b34 */

void FUN_100997b34(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100997b58 | FUN_100997b58 */

void FUN_100997b58(void)

{
  long unaff_x20;
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x10));
  (extension_Dispatch)::__C::OS_dispatch_source::cancel();
  return;
}



/* Address: 0x100997b80 | FUN_100997b80 */

void FUN_100997b80(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1c88 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a870,&DAT_100eef640);
  DAT_100ff1c88 = pTVar1;
  return;
}



/* Address: 0x100997bc0 | FUN_100997bc0 */

void FUN_100997bc0(void)

{
  long unaff_x20;
  
  FUN_100993d0c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100997bc8 | thunk_FUN_10042cf10 */

void thunk_FUN_10042cf10(void)

{
  FUN_10042cf10();
  return;
}



/* Address: 0x100997bcc | FUN_100997bcc */

void FUN_100997bcc(void)

{
  long unaff_x20;
  
  FUN_100993f90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100997bd8 | FUN_100997bd8 */

void FUN_100997bd8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10099416c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100997be4 | FUN_100997be4 */

void FUN_100997be4(void)

{
  FUN_100653e60(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100997bf0 | FUN_100997bf0 */

void FUN_100997bf0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  puVar3 = &DAT_100ff1c48;
  FUN_100003a00(&DAT_100ff1c48,FUN_1009943f8,&TargetProtocolConformanceDescriptor_100c8acf0);
  _swift_job_run(uVar1,uVar2,(ulong)puVar3 | 1);
  return;
}



/* Address: 0x100997c38 | FUN_100997c38 */

undefined * FUN_100997c38(long param_1)

{
  undefined8 *puVar1;
  code *pcVar2;
  _DictionaryStorage *this;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  ulong uVar7;
  undefined *capacity;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  if (capacity == (undefined *)0x0) {
    return PTR___swiftEmptyDictionarySingleton_100eae0e0;
  }
  this = (_DictionaryStorage *)&DAT_100ff1cb0;
  uVar5 = 0;
  FUN_1000f7830();
  puVar3 = capacity;
  Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
  uVar8 = *(ulong *)(param_1 + 0x20);
  uVar10 = *(undefined8 *)(param_1 + 0x30);
  uVar9 = *(undefined8 *)(param_1 + 0x28);
  uVar4 = uVar8;
  FUN_100071340();
  if ((uVar5 & 1) == 0) {
    puVar6 = (undefined8 *)(param_1 + 0x40);
    do {
      uVar7 = uVar4 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar7 + 0x40) = *(ulong *)(puVar3 + uVar7 + 0x40) | 1L << (uVar4 & 0x3f);
      *(ulong *)(*(long *)(puVar3 + 0x30) + uVar4 * 8) = uVar8;
      puVar1 = (undefined8 *)(*(long *)(puVar3 + 0x38) + uVar4 * 0x10);
      puVar1[1] = uVar10;
      *puVar1 = uVar9;
      if (SCARRY8(*(long *)(puVar3 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100997d4c);
        (*pcVar2)();
      }
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      capacity = capacity + -1;
      if (capacity == (undefined *)0x0) {
        _swift_unknownObjectRetain(uVar9);
        return puVar3;
      }
      uVar8 = puVar6[-1];
      uVar10 = puVar6[1];
      uVar11 = *puVar6;
      _swift_unknownObjectRetain(uVar9);
      uVar4 = uVar8;
      FUN_100071340();
      puVar6 = puVar6 + 3;
      uVar9 = uVar11;
    } while ((uVar5 & 1) == 0);
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100997d18);
  (*pcVar2)();
}



/* Address: 0x100997d4c | FUN_100997d4c */

void FUN_100997d4c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100997d80 | FUN_100997d80 */

void FUN_100997d80(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar5 = uVar2;
  _swift_getObjectType(uVar2);
  FUN_100996ef8(uVar1,uVar3,uVar2,uVar5,uVar4);
  return;
}



/* Address: 0x100997dc4 | FUN_100997dc4 */

void FUN_100997dc4(void)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + _TtC20NIOTransportServices14NIOTSEventLoop::state) = 2;
  return;
}



/* Address: 0x100997dd8 | thunk_FUN_100997df0 */

void thunk_FUN_100997df0(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_100995b48(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100997ddc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100997de0 | thunk_FUN_100653dc4 */

void thunk_FUN_100653dc4(void)

{
  FUN_100653dc4();
  return;
}



/* Address: 0x100997de4 | thunk_FUN_100997e18 */

void thunk_FUN_100997e18(void)

{
  long unaff_x20;
  
  FUN_100995dcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100997de8 | thunk_FUN_100653eac */

void thunk_FUN_100653eac(void)

{
  FUN_100653eac();
  return;
}



/* Address: 0x100997dec | thunk_FUN_100949c20 */

void thunk_FUN_100949c20(void)

{
  FUN_100949c20();
  return;
}



/* Address: 0x100997df0 | FUN_100997df0 */

void FUN_100997df0(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_100995b48(*param_1,*(undefined1 *)(param_1 + 1),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100997e0c | FUN_100997e0c */

void FUN_100997e0c(void)

{
  FUN_100653e60(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100997e18 | FUN_100997e18 */

void FUN_100997e18(void)

{
  long unaff_x20;
  
  FUN_100995dcc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x100997e28 | FUN_100997e28 */

void FUN_100997e28(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100997e5c | FUN_100997e5c */

void FUN_100997e5c(void)

{
  long unaff_x20;
  
  FUN_1009958ac(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100997e68 | FUN_100997e68 */

void FUN_100997e68(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100997e74 | FUN_100997e74 */

void FUN_100997e74(void)

{
  long unaff_x20;
  
  FUN_100994860(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100997e7c | thunk_FUN_100994820 */

void thunk_FUN_100994820(void)

{
  FUN_100994820();
  return;
}



/* Address: 0x100997e80 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e84 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e88 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e8c | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e90 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e94 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e98 | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997e9c | thunk_FUN_100995af8 */

void thunk_FUN_100995af8(void)

{
  FUN_100995af8();
  return;
}



/* Address: 0x100997ea0 | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997ea4 | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997ea8 | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997eac | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997eb0 | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997eb4 | thunk_FUN_100995b1c */

void thunk_FUN_100995b1c(void)

{
  FUN_100995b1c();
  return;
}



/* Address: 0x100997eb8 | thunk_FUN_100995b30 */

void thunk_FUN_100995b30(void)

{
  FUN_100995b30();
  return;
}



/* Address: 0x100997ebc | thunk_FUN_100995b30 */

void thunk_FUN_100995b30(void)

{
  FUN_100995b30();
  return;
}



/* Address: 0x100997ec0 | thunk_FUN_100995b30 */

void thunk_FUN_100995b30(void)

{
  FUN_100995b30();
  return;
}


