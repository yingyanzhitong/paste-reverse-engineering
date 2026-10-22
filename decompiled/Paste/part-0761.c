/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10085f7fc | FUN_10085f7fc */

bool FUN_10085f7fc(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  return *(long *)(*(long *)(lVar1 + 0x10) + 0x10) == 0;
}



/* Address: 0x10085f844 | FUN_10085f844 */

void FUN_10085f844(long *param_1,ulong *param_2)

{
  code *pcVar1;
  long *unaff_x20;
  long lVar2;
  ulong uVar3;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_2;
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  if (uVar3 < *(ulong *)(*(long *)(lVar2 + 0x10) + 0x10)) {
    *param_1 = uVar3 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085f8a8);
  (*pcVar1)();
}



/* Address: 0x10085f8a8 | FUN_10085f8a8 */

void FUN_10085f8a8(ulong *param_1)

{
  code *pcVar1;
  long *unaff_x20;
  ulong uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  uVar2 = *param_1;
  _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
  if (uVar2 < *(ulong *)(*(long *)(lVar3 + 0x10) + 0x10)) {
    *param_1 = uVar2 + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085f90c);
  (*pcVar1)();
}



/* Address: 0x10085f90c | FUN_10085f90c */

void FUN_10085f90c(ulong *param_1,long *param_2)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2 - 1;
  if (SBORROW8(*param_2,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f974);
    (*pcVar2)();
  }
  lVar3 = *unaff_x20;
  _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
  if (uVar1 < *(ulong *)(*(long *)(lVar3 + 0x10) + 0x10)) {
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f978);
  (*pcVar2)();
}



/* Address: 0x10085f978 | FUN_10085f978 */

void FUN_10085f978(ulong *param_1)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_1 - 1;
  if (SBORROW8(*param_1,1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f9e0);
    (*pcVar2)();
  }
  lVar3 = *unaff_x20;
  _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
  if (uVar1 < *(ulong *)(*(long *)(lVar3 + 0x10) + 0x10)) {
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10085f9e4);
  (*pcVar2)();
}



/* Address: 0x10085f9e4 | FUN_10085f9e4 */

void FUN_10085f9e4(ulong *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  uVar1 = *param_2 + param_3;
  if (SCARRY8(*param_2,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10085fa4c);
    (*pcVar2)();
  }
  lVar3 = *unaff_x20;
  _swift_beginAccess(lVar3 + 0x10,auStack_48,0,0);
  if (uVar1 <= *(ulong *)(*(long *)(lVar3 + 0x10) + 0x10)) {
    *param_1 = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10085fa50);
  (*pcVar2)();
}



/* Address: 0x10085fa50 | FUN_10085fa50 */

long FUN_10085fa50(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long *unaff_x20;
  long lVar4;
  ulong uVar5;
  undefined1 auStack_48 [24];
  
  uVar3 = *param_1;
  uVar5 = *param_2;
  lVar4 = *unaff_x20;
  _swift_beginAccess(lVar4 + 0x10,auStack_48,0,0);
  uVar2 = *(ulong *)(*(long *)(lVar4 + 0x10) + 0x10);
  if (uVar3 <= uVar2 && uVar5 <= uVar2) {
    return uVar5 - uVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10085fab4);
  (*pcVar1)();
}



/* Address: 0x10085fab4 | FUN_10085fab4 */

undefined8 FUN_10085fab4(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auStack_38 [24];
  
  lVar1 = *unaff_x20;
  _swift_beginAccess(lVar1 + 0x10,auStack_38,0,0);
  return *(undefined8 *)(*(long *)(lVar1 + 0x10) + 0x10);
}



/* Address: 0x10085faf4 | FUN_10085faf4 */

undefined8 FUN_10085faf4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  
  uVar2 = *unaff_x20;
  uVar1 = uVar2;
  FUN_1008617e4(uVar2);
  _swift_release(uVar2);
  return uVar1;
}



/* Address: 0x10085fb28 | FUN_10085fb28 */

void FUN_10085fb28(void)

{
  FUN_100860f20();
  return;
}



/* Address: 0x10085fb30 | FUN_10085fb30 */

String FUN_10085fb30(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  String SVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  uVar2 = *(undefined8 *)(param_1 + 0x10);
  _swift_bridgeObjectRetain(uVar2);
  puVar1 = &DAT_100fe8320;
  FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
  SVar3 = Swift::Array<undefined>::get_description(uVar2,puVar1);
  _swift_bridgeObjectRelease(uVar2);
  return SVar3;
}



/* Address: 0x10085fbb4 | FUN_10085fbb4 */

String FUN_10085fbb4(void)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x20;
  String SVar4;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  _swift_beginAccess(lVar2 + 0x10,auStack_48,0,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_bridgeObjectRetain(uVar3);
  puVar1 = &DAT_100fe8320;
  FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
  SVar4 = Swift::Array<undefined>::get_description(uVar3,puVar1);
  _swift_bridgeObjectRelease(uVar3);
  return SVar4;
}



/* Address: 0x10085fc38 | FUN_10085fc38 */

void FUN_10085fc38(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  puVar1 = auStack_68;
  local_38 = param_2;
  FUN_10007d048(puVar1,local_50);
  FUN_1008643a0();
  puVar2 = puVar1;
  FUN_1008643e0();
  Swift::UnkeyedEncodingContainer::_encode
            (&local_38,&DAT_100f072e0,puVar1,puVar2,local_50,uStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10085fce8 | FUN_10085fce8 */

void FUN_10085fce8(void)

{
  FUN_1008645dc();
  return;
}



/* Address: 0x10085fcfc | FUN_10085fcfc */

void FUN_10085fcfc(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_1008645dc();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10085fd24 | FUN_10085fd24 */

void FUN_10085fd24(long param_1,undefined8 param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar3 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_unkeyedContainer();
  puVar1 = auStack_68;
  local_70 = uVar3;
  FUN_10007d048(puVar1,local_50);
  FUN_1008643a0();
  puVar2 = puVar1;
  FUN_1008643e0();
  Swift::UnkeyedEncodingContainer::_encode(&local_70,param_2,puVar1,puVar2,local_50,uStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10085fdd4 | FUN_10085fdd4 */

void FUN_10085fdd4(long *param_1,long param_2,long param_3,ulong param_4,ulong param_5,long param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar8 = *param_1;
  _swift_beginAccess(lVar8 + 0x10,auStack_b0,0,0);
  if ((param_2 < 0) || (*(long *)(*(long *)(lVar8 + 0x10) + 0x10) < param_3)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff8c);
    (*pcVar4)();
  }
  bVar5 = param_4 == param_5;
  bVar6 = param_2 == param_3;
  if ((!bVar6) && (param_4 != param_5)) {
    lVar8 = param_4 * 0x40 + 0x50;
    uVar9 = param_4;
    do {
      if ((long)param_5 <= (long)uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff78);
        (*pcVar4)();
      }
      if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff7c);
        (*pcVar4)();
      }
      _swift_beginAccess(param_6 + 0x10,auStack_c8,0,0);
      if (*(ulong *)(*(long *)(param_6 + 0x10) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff80);
        (*pcVar4)();
      }
      puVar1 = (undefined8 *)(*(long *)(param_6 + 0x10) + lVar8);
      local_98 = puVar1[-6];
      uStack_90 = puVar1[-5];
      local_88 = puVar1[-4];
      uVar2 = puVar1[-3];
      local_78 = *(undefined1 *)(puVar1 + -2);
      local_70 = puVar1[-1];
      uVar3 = *puVar1;
      uStack_80 = uVar2;
      uStack_68 = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      FUN_10085d9f4(&local_98,param_2);
      lVar10 = *param_1;
      _swift_beginAccess(lVar10 + 0x10,auStack_e0,0,0);
      if (*(long *)(*(long *)(lVar10 + 0x10) + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff84);
        (*pcVar4)();
      }
      if (*(ulong *)(*(long *)(param_6 + 0x10) + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff88);
        (*pcVar4)();
      }
      bVar5 = param_5 - 1 == uVar9;
      bVar6 = param_3 + -1 == param_2;
      if (bVar6) break;
      param_2 = param_2 + 1;
      lVar8 = lVar8 + 0x40;
      bVar7 = param_5 - 1 != uVar9;
      uVar9 = uVar9 + 1;
    } while (bVar7);
  }
  if (!bVar6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff90);
    (*pcVar4)();
  }
  if (bVar5) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10085ff94);
  (*pcVar4)();
}



/* Address: 0x10085ff94 | FUN_10085ff94 */

void FUN_10085ff94(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar12;
  
  this = (_DictionaryStorage *)&DAT_100fe8718;
  FUN_1000f7830(&DAT_100fe8718,&DAT_100c7e258);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var8 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar9 = (1L << ((ulong)(byte)p_Var8[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var8 != original || p_Var1 + uVar9 * 8 <= p_Var8 + 0x40) {
      _memmove(p_Var8 + 0x40,p_Var1,uVar9 << 3);
    }
    lVar12 = 0;
    *(undefined8 *)(p_Var8 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar10 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar9 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar9 = ~(-1L << (uVar10 & 0x3f));
    }
    uVar9 = uVar9 & *(ulong *)(original + 0x40);
    if (uVar9 == 0) goto LAB_100860070;
    do {
      uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
      uVar9 = uVar9 - 1 & uVar9;
      while( true ) {
        uVar11 = LZCOUNT(uVar11) | lVar12 << 6;
        puVar3 = (undefined8 *)(*(long *)(original + 0x30) + uVar11 * 0x10);
        uVar5 = puVar3[1];
        uVar6 = *(undefined4 *)(*(long *)(original + 0x38) + uVar11 * 4);
        puVar4 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar11 * 0x10);
        *puVar4 = *puVar3;
        puVar4[1] = uVar5;
        *(undefined4 *)(*(long *)(p_Var8 + 0x38) + uVar11 * 4) = uVar6;
        _swift_bridgeObjectRetain();
        if (uVar9 != 0) break;
LAB_100860070:
        do {
          lVar2 = lVar12 + 1;
          if (SCARRY8(lVar12,1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008600fc);
            (*pcVar7)();
          }
          if ((long)(uVar10 + 0x3f >> 6) <= lVar2) goto LAB_1008600d4;
          uVar9 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar12 = lVar12 + 1;
        } while (uVar9 == 0);
        uVar11 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar11 = uVar11 >> 0x20 | uVar11 << 0x20;
        uVar9 = uVar9 - 1 & uVar9;
        lVar12 = lVar2;
      }
    } while( true );
  }
LAB_1008600d4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var8;
  return;
}



/* Address: 0x1008600fc | FUN_1008600fc */

void FUN_1008600fc(long param_1,bool param_2)

{
  undefined8 *puVar1;
  String *pSVar2;
  undefined2 *puVar3;
  __int64 capacity;
  char *pcVar4;
  void *pvVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  String SVar8;
  bool bVar9;
  code *pcVar10;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var11;
  Hasher into;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar18;
  __RawDictionaryStorage *p_Var19;
  long lVar20;
  undefined1 auStack_a8 [72];
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100fe8718;
  FUN_1000f7830(&DAT_100fe8718,&DAT_100c7e258);
  p_Var11 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100860370:
    _swift_release(original);
    *unaff_x20 = (long)p_Var11;
    return;
  }
  p_Var19 = original + 0x40;
  uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar16 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)p_Var19;
  lVar14 = 0;
  do {
    if (uVar18 == 0) {
      do {
        lVar20 = lVar14 + 1;
        if (SCARRY8(lVar14,1)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1008603a0);
          (*pcVar10)();
        }
        if ((long)(uVar16 + 0x3f >> 6) <= lVar20) {
          if ((param_2 & 1U) != 0) {
            uVar18 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
            if (((byte)original[0x20] & 0x3f) < 6) {
              *(long *)p_Var19 = -1L << (uVar18 & 0x3f);
            }
            else {
              _bzero(p_Var19,uVar18 + 0x3f >> 3 & 0xffffffffffffff8);
            }
            *(undefined8 *)(original + 0x10) = 0;
          }
          goto LAB_100860370;
        }
        uVar18 = *(ulong *)(p_Var19 + lVar20 * 8);
        lVar14 = lVar14 + 1;
      } while (uVar18 == 0);
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
    }
    else {
      uVar13 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = uVar13 >> 0x20 | uVar13 << 0x20;
      uVar18 = uVar18 - 1 & uVar18;
      lVar20 = lVar14;
    }
    uVar13 = LZCOUNT(uVar13) | lVar20 << 6;
    pSVar2 = (String *)(*(long *)(original + 0x30) + uVar13 * 0x10);
    pcVar4 = pSVar2->str;
    pvVar5 = pSVar2->bridgeObject;
    SVar8 = *pSVar2;
    puVar3 = (undefined2 *)(*(long *)(original + 0x38) + uVar13 * 4);
    uVar6 = *puVar3;
    uVar7 = puVar3[1];
    if ((param_2 & 1U) == 0) {
      _swift_bridgeObjectRetain(pvVar5);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var11 + 0x28));
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar8);
    uVar12 = Swift::Hasher::_finalize(into);
    uVar17 = -1L << ((ulong)(byte)p_Var11[0x20] & 0x3f);
    uVar12 = uVar12 & (uVar17 ^ 0xffffffffffffffff);
    uVar15 = uVar12 >> 6;
    uVar13 = -1L << (uVar12 & 0x3f) & (*(ulong *)(p_Var11 + uVar15 * 8 + 0x40) ^ 0xffffffffffffffff)
    ;
    if (uVar13 == 0) {
      bVar9 = false;
      uVar13 = 0x3f - uVar17 >> 6;
      do {
        uVar12 = uVar15 + 1;
        if ((uVar12 == uVar13) && (bVar9)) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x1008603a4);
          (*pcVar10)();
        }
        uVar15 = 0;
        if (uVar12 != uVar13) {
          uVar15 = uVar12;
        }
        bVar9 = (bool)(uVar12 == uVar13 | bVar9);
      } while (*(ulong *)(p_Var11 + uVar15 * 8 + 0x40) == 0xffffffffffffffff);
      uVar13 = ~*(ulong *)(p_Var11 + uVar15 * 8 + 0x40);
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar15 << 6;
    }
    else {
      uVar13 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
      uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
      uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
      uVar13 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | uVar12 & 0x7fffffffffffffc0;
    }
    uVar15 = uVar13 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var11 + uVar15 + 0x40) =
         1L << (uVar13 & 0x3f) | *(ulong *)(p_Var11 + uVar15 + 0x40);
    puVar1 = (undefined8 *)(*(long *)(p_Var11 + 0x30) + uVar13 * 0x10);
    *puVar1 = pcVar4;
    puVar1[1] = pvVar5;
    puVar3 = (undefined2 *)(*(long *)(p_Var11 + 0x38) + uVar13 * 4);
    *puVar3 = uVar6;
    puVar3[1] = uVar7;
    *(long *)(p_Var11 + 0x10) = *(long *)(p_Var11 + 0x10) + 1;
    lVar14 = lVar20;
  } while( true );
}



/* Address: 0x1008603a4 | FUN_1008603a4 */

void FUN_1008603a4(long param_1)

{
  FUN_1008603b8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x1008603b8 | FUN_1008603b8 */

undefined * FUN_1008603b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008604e8);
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
    puVar3 = &DAT_100fe8748;
    FUN_1000f7830(&DAT_100fe8748,&DAT_100c7e280);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + 0x1f;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 6) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fe8320;
    FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x40 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 * 0x40);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008604e8 | FUN_1008604e8 */

undefined * FUN_1008604e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008605e8);
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
    puVar3 = &DAT_100fe8750;
    FUN_1000f7830(&DAT_100fe8750,&DAT_100c7e290);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1008605e8 | FUN_1008605e8 */

undefined * FUN_1008605e8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008606d8);
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
    puVar3 = &DAT_100fe8738;
    FUN_1000f7830(&DAT_100fe8738,&DAT_100c7e278);
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



/* Address: 0x1008606d8 | FUN_1008606d8 */

undefined * FUN_1008606d8(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fe8720;
    FUN_1000f7830(&DAT_100fe8720,&DAT_100c7e260);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = ((long)(puVar2 + -0x20) / 0x38) * 2;
  }
  return puVar1;
}



/* Address: 0x10086076c | FUN_10086076c */

undefined * FUN_10086076c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fe8738;
    FUN_1000f7830(&DAT_100fe8738,&DAT_100c7e278);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1008607dc | FUN_1008607dc */

void FUN_1008607dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008607f8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008607f8 | FUN_1008607f8 */

undefined * FUN_1008607f8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100860900);
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
    puVar3 = &DAT_100fe8758;
    FUN_1000f7830(&DAT_100fe8758,&DAT_100c7e298);
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
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100860900 | FUN_100860900 */

undefined * FUN_100860900(long param_1,ushort param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  code *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  undefined *puVar18;
  
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 == 0xffff) {
    lVar17 = 0;
  }
  else {
    lVar17 = 0;
    uVar14 = (ulong)param_2;
    puVar16 = (undefined8 *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20);
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100860b00);
        (*pcVar10)();
      }
      puVar2 = (undefined8 *)(param_1 + 0x20 + uVar14 * 0x40);
      uVar3 = *puVar2;
      uVar6 = puVar2[1];
      uVar4 = puVar2[2];
      uVar7 = puVar2[3];
      uVar9 = *(undefined1 *)(puVar2 + 4);
      uVar5 = puVar2[5];
      uVar8 = puVar2[6];
      uVar14 = (ulong)*(ushort *)(puVar2 + 7);
      if (lVar17 == 0) {
        uVar13 = *(ulong *)(puVar18 + 0x18);
        if ((long)((uVar13 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100860b08);
          (*pcVar10)();
        }
        uVar15 = uVar13 & 0xfffffffffffffffe;
        if ((long)uVar13 < 2) {
          uVar15 = 1;
        }
        puVar11 = &DAT_100fe8720;
        FUN_1000f7830(&DAT_100fe8720,&DAT_100c7e260);
        _swift_allocObject();
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
        puVar12 = puVar11;
        _malloc_size();
        *(ulong *)(puVar11 + 0x10) = uVar15;
        *(long *)(puVar11 + 0x18) = ((long)(puVar12 + -0x20) / 0x38) * 2;
        puVar1 = puVar11 + 0x20;
        uVar13 = *(ulong *)(puVar18 + 0x18) >> 1;
        puVar16 = (undefined8 *)(puVar1 + uVar13 * 0x38);
        lVar17 = ((long)(puVar12 + -0x20) / 0x38 & 0x7fffffffffffffffU) - uVar13;
        if (*(long *)(puVar18 + 0x10) != 0) {
          if (puVar11 != puVar18 || puVar18 + 0x20 + uVar13 * 0x38 <= puVar1) {
            _memmove(puVar1,puVar18 + 0x20,uVar13 * 0x38);
          }
          *(undefined8 *)(puVar18 + 0x10) = 0;
        }
        _swift_release(puVar18);
        puVar18 = puVar11;
      }
      else {
        _swift_bridgeObjectRetain(uVar6);
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRetain(uVar8);
      }
      if (SBORROW8(lVar17,1)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100860b04);
        (*pcVar10)();
      }
      lVar17 = lVar17 + -1;
      *puVar16 = uVar3;
      puVar16[1] = uVar6;
      puVar16[2] = uVar4;
      puVar16[3] = uVar7;
      *(undefined1 *)(puVar16 + 4) = uVar9;
      puVar16[5] = uVar5;
      puVar16[6] = uVar8;
      puVar16 = puVar16 + 7;
    } while (uVar14 != 0xffff);
  }
  if (1 < *(ulong *)(puVar18 + 0x18)) {
    uVar14 = *(ulong *)(puVar18 + 0x18) >> 1;
    if (SBORROW8(uVar14,lVar17)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100860b0c);
      (*pcVar10)();
    }
    *(ulong *)(puVar18 + 0x10) = uVar14 - lVar17;
  }
  return puVar18;
}



/* Address: 0x100860b0c | FUN_100860b0c */

undefined * FUN_100860b0c(undefined8 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined1 local_b0 [8];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_a8 = *param_1;
  uVar7 = param_1[5];
  uStack_98 = param_1[2];
  local_a0 = param_1[1];
  uStack_88 = param_1[4];
  uVar12 = param_1[3];
  uStack_78 = 0xf;
  local_b0[0] = 0;
  uVar9 = param_1[7];
  uStack_68 = param_1[7];
  local_70 = param_1[6];
  uStack_90 = uVar12;
  local_80 = uVar7;
  _swift_bridgeObjectRetain(local_a0);
  _swift_retain(uVar12);
  _swift_retain(uVar7);
  _swift_retain();
  FUN_10086188c();
  if (((uint)uVar9 & 0xff00) == 0x100) {
    lVar10 = 0;
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    lVar10 = 0;
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8 + 0x20;
    do {
      puVar3 = puVar8;
      if (lVar10 == 0) {
        uVar5 = *(ulong *)(puVar8 + 0x18);
        if ((long)((uVar5 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100860ce0);
          (*pcVar1)();
        }
        uVar6 = uVar5 & 0xfffffffffffffffe;
        if ((long)uVar5 < 2) {
          uVar6 = 1;
        }
        puVar3 = &DAT_100fe8738;
        FUN_1000f7830(&DAT_100fe8738,&DAT_100c7e278);
        _swift_allocObject();
        puVar4 = puVar3;
        _malloc_size();
        uVar11 = (long)puVar4 * 2 - 0x40;
        *(ulong *)(puVar3 + 0x10) = uVar6;
        *(ulong *)(puVar3 + 0x18) = uVar11;
        puVar4 = puVar3 + 0x20;
        uVar5 = *(ulong *)(puVar8 + 0x18) >> 1;
        if (*(long *)(puVar8 + 0x10) != 0) {
          if (puVar3 != puVar8 || puVar8 + 0x20 + uVar5 <= puVar4) {
            _memmove(puVar4,puVar8 + 0x20,uVar5);
          }
          *(undefined8 *)(puVar8 + 0x10) = 0;
        }
        puVar4 = puVar4 + uVar5;
        lVar10 = (uVar11 >> 1) - uVar5;
        _swift_release(puVar8);
      }
      bVar2 = SBORROW8(lVar10,1);
      lVar10 = lVar10 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100860cdc);
        (*pcVar1)();
      }
      *puVar4 = (char)uVar9;
      FUN_10086188c();
      puVar8 = puVar3;
      puVar4 = puVar4 + 1;
    } while (((uint)uVar9 & 0xff00) != 0x100);
  }
  FUN_1000fb4c4(local_b0,&DAT_100fe8778,&DAT_100c7e2a8);
  if (1 < *(ulong *)(puVar3 + 0x18)) {
    uVar5 = *(ulong *)(puVar3 + 0x18) >> 1;
    if (SBORROW8(uVar5,lVar10)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100860ce4);
      (*pcVar1)();
    }
    *(ulong *)(puVar3 + 0x10) = uVar5 - lVar10;
  }
  return puVar3;
}



/* Address: 0x100860ce4 | FUN_100860ce4 */

undefined * FUN_100860ce4(UTF8View param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    puVar4 = param_1.unknown & 0xffffffffffff;
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((param_2 & 0x2000000000000000) != 0) {
      puVar4 = (undefined *)(param_2 >> 0x38 & 0xf);
    }
  }
  else {
    puVar4 = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar3;
  if (puVar4 != (undefined *)0x0) {
    puVar3 = puVar4;
    FUN_10086076c(puVar4,0);
    _swift_retain();
  }
  uVar7 = *(ulong *)(puVar3 + 0x18);
  _swift_release(puVar3);
  if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100860f18);
    (*pcVar1)();
  }
  puVar9 = puVar3 + 0x20;
  uVar7 = uVar7 >> 1;
  uVar5 = param_4;
  if (puVar4 == (undefined *)0x0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_retain();
  }
  else {
    uVar7 = uVar7 - (long)puVar4;
    _swift_bridgeObjectRetain(param_2);
    _swift_retain();
    puVar8 = puVar9;
    do {
      FUN_100861d5c();
      if (((uint)uVar5 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100860f20);
        (*pcVar1)();
      }
      puVar9 = puVar8 + 1;
      *puVar8 = (char)uVar5;
      puVar4 = puVar4 + -1;
      puVar8 = puVar9;
    } while (puVar4 != (undefined *)0x0);
  }
  FUN_100861d5c();
  if (((uint)uVar5 & 0xff00) != 0x100) {
    puVar4 = puVar3;
    do {
      puVar3 = puVar4;
      if (uVar7 == 0) {
        uVar7 = *(ulong *)(puVar4 + 0x18);
        if ((long)((uVar7 >> 1) + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100860f14);
          (*pcVar1)();
        }
        uVar6 = uVar7 & 0xfffffffffffffffe;
        if ((long)uVar7 < 2) {
          uVar6 = 1;
        }
        puVar3 = &DAT_100fe8738;
        FUN_1000f7830(&DAT_100fe8738,&DAT_100c7e278);
        _swift_allocObject();
        puVar9 = puVar3;
        _malloc_size();
        uVar10 = (long)puVar9 * 2 - 0x40;
        *(ulong *)(puVar3 + 0x10) = uVar6;
        *(ulong *)(puVar3 + 0x18) = uVar10;
        puVar9 = puVar3 + 0x20;
        uVar7 = *(ulong *)(puVar4 + 0x18) >> 1;
        if (*(long *)(puVar4 + 0x10) != 0) {
          if (puVar3 != puVar4 || puVar4 + 0x20 + uVar7 <= puVar9) {
            _memmove(puVar9,puVar4 + 0x20,uVar7);
          }
          *(undefined8 *)(puVar4 + 0x10) = 0;
        }
        puVar9 = puVar9 + uVar7;
        uVar7 = (uVar10 >> 1) - uVar7;
        _swift_release(puVar4);
      }
      bVar2 = SBORROW8(uVar7,1);
      uVar7 = uVar7 - 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100860f10);
        (*pcVar1)();
      }
      *puVar9 = (char)uVar5;
      FUN_100861d5c();
      puVar4 = puVar3;
      puVar9 = puVar9 + 1;
    } while (((uint)uVar5 & 0xff00) != 0x100);
  }
  _swift_release(param_4);
  _swift_bridgeObjectRelease(param_2);
  if (1 < *(ulong *)(puVar3 + 0x18)) {
    uVar6 = *(ulong *)(puVar3 + 0x18) >> 1;
    if (SBORROW8(uVar6,uVar7)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100860f1c);
      (*pcVar1)();
    }
    *(ulong *)(puVar3 + 0x10) = uVar6 - uVar7;
  }
  return puVar3;
}



/* Address: 0x100860f20 | FUN_100860f20 */

ulong FUN_100860f20(long *param_1,undefined8 *param_2,ulong param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  ulong uVar7;
  code *pcVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  undefined8 *puVar12;
  undefined1 auStack_78 [24];
  
  if (param_2 != (undefined8 *)0x0) {
    uVar10 = param_3;
    if (param_3 == 0) goto LAB_100860ff4;
    if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10086103c);
      (*pcVar8)();
    }
    _swift_beginAccess(param_4 + 0x10,auStack_78,0,0);
    lVar11 = *(long *)(param_4 + 0x10);
    uVar9 = *(ulong *)(lVar11 + 0x10);
    if (uVar9 != 0) {
      puVar12 = (undefined8 *)(lVar11 + 0x50);
      uVar7 = 1;
      do {
        uVar10 = uVar7;
        if (uVar9 <= uVar10 - 1) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x100861038);
          (*pcVar8)();
        }
        uVar3 = puVar12[-5];
        uVar1 = puVar12[-4];
        uVar4 = puVar12[-3];
        uVar6 = *(undefined1 *)(puVar12 + -2);
        uVar2 = puVar12[-1];
        uVar5 = *puVar12;
        *param_2 = puVar12[-6];
        param_2[1] = uVar3;
        param_2[2] = uVar1;
        param_2[3] = uVar4;
        *(undefined1 *)(param_2 + 4) = uVar6;
        param_2[5] = uVar2;
        param_2[6] = uVar5;
        if (param_3 == uVar10) {
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          uVar10 = param_3;
          break;
        }
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        uVar9 = *(ulong *)(lVar11 + 0x10);
        puVar12 = puVar12 + 8;
        param_2 = param_2 + 7;
        uVar7 = uVar10 + 1;
      } while (uVar10 != uVar9);
      goto LAB_100860ff4;
    }
  }
  uVar10 = 0;
LAB_100860ff4:
  *param_1 = param_4;
  param_1[1] = uVar10;
  return uVar10;
}



/* Address: 0x10086103c | FUN_10086103c */

void FUN_10086103c(long param_1,long param_2,long param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  long *unaff_x20;
  long lVar8;
  undefined1 auStack_1a0 [64];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined2 uStack_138;
  undefined6 uStack_136;
  undefined2 uStack_130;
  undefined8 uStack_12e;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined2 uStack_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined8 uStack_ee;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_ae;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008611c4);
    (*pcVar6)();
  }
  lVar8 = *unaff_x20;
  puVar1 = (undefined8 *)(lVar8 + 0x20 + param_1 * 0x40);
  puVar7 = &DAT_100fe8320;
  FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
  _swift_arrayDestroy(puVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008611c8);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar8 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar8 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008611cc);
      (*pcVar6)();
    }
    puVar2 = puVar1 + param_3 * 8;
    puVar3 = (undefined8 *)(lVar8 + 0x20 + param_2 * 0x40);
    if (puVar2 != puVar3 || puVar3 + lVar4 * 8 <= puVar2) {
      _memmove(puVar2,puVar3,lVar4 * 0x40);
    }
    if (SCARRY8(*(long *)(lVar8 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008611d0);
      (*pcVar6)();
    }
    *(long *)(lVar8 + 0x10) = *(long *)(lVar8 + 0x10) + lVar5;
  }
  if (0 < param_3) {
    local_60 = param_4[8];
    uStack_78 = param_4[5];
    local_80 = param_4[4];
    uStack_68 = param_4[7];
    uStack_70 = param_4[6];
    uStack_98 = param_4[1];
    local_a0 = *param_4;
    uStack_88 = param_4[3];
    uStack_90 = param_4[2];
    (*(code *)param_4[7])(&local_160,&local_a0);
    uStack_118 = uStack_158;
    local_120 = local_160;
    uStack_108 = uStack_148;
    local_110 = uStack_150;
    uStack_f8 = uStack_138;
    local_100 = local_140;
    uStack_ee = uStack_12e;
    uStack_f6 = uStack_136;
    uStack_f0 = uStack_130;
    uStack_d8 = uStack_158;
    local_e0 = local_160;
    uStack_c8 = uStack_148;
    uStack_d0 = uStack_150;
    local_c0 = local_140;
    uStack_ae = uStack_12e;
    FUN_1000f8cac(&local_120,auStack_1a0,&DAT_100fe8320,&DAT_100c7dd08);
    FUN_1000fb4c4(&local_e0,&DAT_100fe8320,&DAT_100c7dd08);
    *(undefined8 *)((long)puVar1 + 0x32) = uStack_ee;
    *(ulong *)((long)puVar1 + 0x2a) = CONCAT26(uStack_f0,uStack_f6);
    puVar1[3] = uStack_108;
    puVar1[2] = local_110;
    puVar1[5] = CONCAT62(uStack_f6,uStack_f8);
    puVar1[4] = local_100;
    puVar1[1] = uStack_118;
    *puVar1 = local_120;
    if (param_3 != 1) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008611d4);
      (*pcVar6)();
    }
  }
  FUN_1000fb4c4(param_4,&DAT_100fe8730,&DAT_100c7e270);
  return;
}



/* Address: 0x1008611d4 | FUN_1008611d4 */

ulong FUN_1008611d4(code *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  bool bVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  long unaff_x21;
  long lVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_170 [24];
  undefined1 auStack_158 [24];
  undefined1 auStack_140 [24];
  undefined8 local_128;
  ulong local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar11 = *unaff_x20;
  _swift_beginAccess(lVar11 + 0x10,auStack_f0,0,0);
  lVar10 = *(long *)(lVar11 + 0x10);
  uVar14 = 0;
  if (*(ulong *)(lVar10 + 0x10) != 0) {
    uVar13 = 1;
    lVar12 = 0x90;
    uVar14 = *(ulong *)(lVar10 + 0x10);
    do {
      uVar15 = uVar13 - 1;
      if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614c8);
        (*pcVar7)();
      }
      lVar10 = lVar10 + lVar12;
      local_128 = *(undefined8 *)(lVar10 + -0x70);
      local_120 = *(ulong *)(lVar10 + -0x68);
      local_118 = *(undefined8 *)(lVar10 + -0x60);
      uVar2 = *(undefined8 *)(lVar10 + -0x58);
      local_108 = *(undefined1 *)(lVar10 + -0x50);
      local_100 = *(undefined8 *)(lVar10 + -0x48);
      uVar3 = *(undefined8 *)(lVar10 + -0x40);
      local_110 = uVar2;
      local_f8 = uVar3;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      uVar9 = 0;
      (*param_1)();
      uVar2 = local_110;
      uVar14 = local_120;
      _swift_bridgeObjectRelease(local_f8);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar14);
      if (unaff_x21 != 0) {
        return uVar14;
      }
      lVar10 = *(long *)(lVar11 + 0x10);
      uVar14 = *(ulong *)(lVar10 + 0x10);
      if ((uVar9 & 1) != 0) {
        if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614e8);
          (*pcVar7)();
        }
        do {
          _swift_beginAccess(lVar11 + 0x10,auStack_140,0,0);
          uVar14 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x10);
          if (uVar13 == uVar14) {
            return uVar15;
          }
          if (uVar14 <= uVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614d0);
            (*pcVar7)();
          }
          puVar1 = (undefined8 *)(*(long *)(lVar11 + 0x10) + lVar12);
          local_128 = puVar1[-6];
          local_120 = puVar1[-5];
          local_118 = puVar1[-4];
          uVar2 = puVar1[-3];
          local_108 = *(undefined1 *)(puVar1 + -2);
          local_100 = puVar1[-1];
          uVar3 = *puVar1;
          local_110 = uVar2;
          local_f8 = uVar3;
          _swift_bridgeObjectRetain();
          _swift_bridgeObjectRetain(uVar2);
          _swift_bridgeObjectRetain(uVar3);
          uVar14 = 0;
          (*param_1)();
          uVar2 = local_110;
          uVar9 = local_120;
          _swift_bridgeObjectRelease(local_f8);
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(uVar9);
          if ((uVar14 & 1) == 0) {
            if (uVar13 != uVar15) {
              if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614dc);
                (*pcVar7)();
              }
              lVar10 = *(long *)(lVar11 + 0x10);
              if (*(ulong *)(lVar10 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614e0);
                (*pcVar7)();
              }
              lVar11 = lVar10 + uVar15 * 0x40;
              local_d8 = *(undefined8 *)(lVar11 + 0x20);
              uStack_d0 = *(undefined8 *)(lVar11 + 0x28);
              local_c8 = *(undefined8 *)(lVar11 + 0x30);
              uVar2 = *(undefined8 *)(lVar11 + 0x38);
              local_b8 = *(undefined1 *)(lVar11 + 0x40);
              local_b0 = *(undefined8 *)(lVar11 + 0x48);
              uVar3 = *(undefined8 *)(lVar11 + 0x50);
              uStack_c0 = uVar2;
              uStack_a8 = uVar3;
              if (*(ulong *)(lVar10 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614e4);
                (*pcVar7)();
              }
              puVar1 = (undefined8 *)(lVar10 + lVar12);
              local_a0 = puVar1[-6];
              uVar4 = puVar1[-5];
              local_90 = puVar1[-4];
              uVar5 = puVar1[-3];
              local_80 = *(undefined1 *)(puVar1 + -2);
              local_78 = puVar1[-1];
              uVar6 = *puVar1;
              uStack_98 = uVar4;
              uStack_88 = uVar5;
              uStack_70 = uVar6;
              _swift_bridgeObjectRetain();
              _swift_bridgeObjectRetain(uVar2);
              _swift_bridgeObjectRetain(uVar3);
              _swift_bridgeObjectRetain(uVar4);
              _swift_bridgeObjectRetain(uVar5);
              _swift_bridgeObjectRetain(uVar6);
              FUN_10085d9f4(&local_a0,uVar15);
              FUN_10085d9f4(&local_d8,uVar13);
            }
            lVar11 = *unaff_x20;
            _swift_beginAccess(lVar11 + 0x10,auStack_158,0,0);
            if (*(ulong *)(*(long *)(lVar11 + 0x10) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614d8);
              (*pcVar7)();
            }
            uVar15 = uVar15 + 1;
          }
          _swift_beginAccess(lVar11 + 0x10,auStack_170,0,0);
          lVar12 = lVar12 + 0x40;
          bVar8 = *(ulong *)(*(long *)(lVar11 + 0x10) + 0x10) <= uVar13;
          uVar13 = uVar13 + 1;
          if (bVar8) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614d4);
            (*pcVar7)();
          }
        } while( true );
      }
      if (uVar14 <= uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008614cc);
        (*pcVar7)();
      }
      lVar12 = lVar12 + 0x40;
      bVar8 = uVar13 != uVar14;
      uVar13 = uVar13 + 1;
    } while (bVar8);
  }
  return uVar14;
}



/* Address: 0x1008614e8 | FUN_1008614e8 */

ulong FUN_1008614e8(code *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  code *pcVar8;
  ulong uVar9;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 auStack_158 [24];
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined1 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  lVar10 = *unaff_x20;
  _swift_beginAccess(lVar10 + 0x10,auStack_f0,0,0);
  uVar14 = *(ulong *)(*(long *)(lVar10 + 0x10) + 0x10);
  if (uVar14 == 0) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    do {
      lVar11 = uVar12 * 0x40 + 0x50;
      uVar15 = uVar12;
      while( true ) {
        if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617cc);
          (*pcVar8)();
        }
        _swift_beginAccess(lVar10 + 0x10,auStack_108,0,0);
        if (*(ulong *)(*(long *)(lVar10 + 0x10) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617d0);
          (*pcVar8)();
        }
        puVar1 = (undefined8 *)(*(long *)(lVar10 + 0x10) + lVar11);
        local_140 = puVar1[-6];
        local_138 = puVar1[-5];
        local_130 = puVar1[-4];
        uVar3 = puVar1[-3];
        local_120 = *(undefined1 *)(puVar1 + -2);
        local_118 = puVar1[-1];
        uVar4 = *puVar1;
        local_128 = uVar3;
        local_110 = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        uVar9 = 0;
        (*param_1)();
        uVar4 = local_128;
        uVar3 = local_138;
        _swift_bridgeObjectRelease(local_110);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar3);
        if (unaff_x21 != 0) {
          return uVar15;
        }
        if ((uVar9 & 1) != 0) break;
        if (*(ulong *)(*(long *)(lVar10 + 0x10) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617d4);
          (*pcVar8)();
        }
        uVar15 = uVar15 + 1;
        lVar11 = lVar11 + 0x40;
        if ((long)uVar14 <= (long)uVar15) {
          return uVar15;
        }
      }
      lVar13 = uVar14 * 0x40 + 0x50;
      do {
        uVar14 = uVar14 - 1;
        if (*(ulong *)(*(long *)(lVar10 + 0x10) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617d8);
          (*pcVar8)();
        }
        if ((long)uVar14 <= (long)uVar15) {
          return uVar15;
        }
        lVar2 = *(long *)(lVar10 + 0x10) + lVar13;
        local_140 = *(undefined8 *)(lVar2 + -0x70);
        local_138 = *(undefined8 *)(lVar2 + -0x68);
        local_130 = *(undefined8 *)(lVar2 + -0x60);
        uVar3 = *(undefined8 *)(lVar2 + -0x58);
        local_120 = *(undefined1 *)(lVar2 + -0x50);
        local_118 = *(undefined8 *)(lVar2 + -0x48);
        uVar4 = *(undefined8 *)(lVar2 + -0x40);
        local_128 = uVar3;
        local_110 = uVar4;
        _swift_bridgeObjectRetain();
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        uVar12 = 0;
        (*param_1)();
        uVar4 = local_128;
        uVar3 = local_138;
        _swift_bridgeObjectRelease(local_110);
        _swift_bridgeObjectRelease(uVar4);
        _swift_bridgeObjectRelease(uVar3);
        lVar13 = lVar13 + -0x40;
      } while ((uVar12 & 1) != 0);
      lVar10 = *(long *)(lVar10 + 0x10);
      if ((long)*(ulong *)(lVar10 + 0x10) <= (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617dc);
        (*pcVar8)();
      }
      puVar1 = (undefined8 *)(lVar10 + lVar11);
      local_d8 = puVar1[-6];
      uStack_d0 = puVar1[-5];
      local_c8 = puVar1[-4];
      uVar3 = puVar1[-3];
      local_b8 = *(undefined1 *)(puVar1 + -2);
      local_b0 = puVar1[-1];
      uVar4 = *puVar1;
      uStack_c0 = uVar3;
      uStack_a8 = uVar4;
      if (*(ulong *)(lVar10 + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617e0);
        (*pcVar8)();
      }
      puVar1 = (undefined8 *)(lVar10 + lVar13);
      local_a0 = puVar1[-6];
      uVar5 = puVar1[-5];
      local_90 = puVar1[-4];
      uVar6 = puVar1[-3];
      local_80 = *(undefined1 *)(puVar1 + -2);
      local_78 = puVar1[-1];
      uVar7 = *puVar1;
      uStack_98 = uVar5;
      uStack_88 = uVar6;
      uStack_70 = uVar7;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRetain(uVar7);
      FUN_10085d9f4(&local_a0,uVar15);
      FUN_10085d9f4(&local_d8,uVar14);
      lVar10 = *unaff_x20;
      _swift_beginAccess(lVar10 + 0x10,auStack_158,0,0);
      if (*(long *)(*(long *)(lVar10 + 0x10) + 0x10) <= (long)uVar15) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1008617e4);
        (*pcVar8)();
      }
      uVar12 = uVar15 + 1;
    } while ((long)uVar12 < (long)uVar14);
  }
  return uVar12;
}



/* Address: 0x1008617e4 | FUN_1008617e4 */

undefined8 * FUN_1008617e4(long param_1)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 local_68 [2];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  puVar4 = *(undefined8 **)(*(long *)(param_1 + 0x10) + 0x10);
  puVar2 = (undefined8 *)PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar4 != (undefined8 *)0x0) {
    puVar2 = puVar4;
    FUN_1008606d8(puVar4,0);
    puVar3 = local_68;
    FUN_100860f20(puVar3,puVar2 + 4,puVar4,param_1);
    _swift_retain(param_1);
    _swift_release(local_68[0]);
    if (puVar3 != puVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100861868);
      (*pcVar1)();
    }
  }
  return puVar2;
}



/* Address: 0x10086188c | FUN_10086188c */

uint FUN_10086188c(undefined1 *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  char *unaff_x20;
  uint uVar6;
  ulong uVar7;
  Index IVar8;
  ulong uVar9;
  UTF8View UVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined1 local_91;
  undefined *local_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  if (*unaff_x20 == '\x01') {
    uStack_88 = *(ulong *)(unaff_x20 + 0x10);
    local_90 = *(undefined **)(unaff_x20 + 8);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x20);
    local_80 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70 = *(undefined8 *)(unaff_x20 + 0x28);
    FUN_100861aec();
    uVar9 = uStack_88;
    puVar2 = local_90;
    uVar7 = *(ulong *)(unaff_x20 + 0x38);
    if (uVar7 >> 0xe != (ulong)param_1 >> 0xe) {
      FUN_100861aec();
      if ((ulong)param_1 >> 0xe <= uVar7 >> 0xe) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100861ae8);
        (*pcVar3)();
      }
      FUN_1008622c4(uVar7,puVar2,uVar9);
      *(ulong *)(unaff_x20 + 0x38) = uVar7;
      FUN_100862350();
      uVar6 = (uint)uVar7;
      FUN_100861c78();
      iVar4 = 0;
      goto LAB_100861aa8;
    }
  }
  else {
    uVar7 = *(ulong *)(unaff_x20 + 0x10);
    UVar10.unknown = *(undefined **)(unaff_x20 + 8);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
    uStack_68 = *(undefined8 *)(unaff_x20 + 0x30);
    local_70 = *(undefined8 *)(unaff_x20 + 0x28);
    local_90 = UVar10.unknown;
    uStack_88 = uVar7;
    local_80 = uVar11;
    uStack_78 = uVar12;
    FUN_100861aec();
    IVar8.cmsgPointer.unknown = *(UnsafeMutablePointer *)(unaff_x20 + 0x38);
    uVar9 = (ulong)IVar8.cmsgPointer.unknown >> 0xe;
    if (uVar9 != (ulong)param_1 >> 0xe) {
      uVar5 = (uint)((ulong)UVar10.unknown >> 0x3b) & 1;
      if ((uVar7 & 0x1000000000000000) == 0) {
        uVar5 = 1;
      }
      uVar1 = (ulong)UVar10.unknown & 0xffffffffffff;
      if ((uVar7 & 0x2000000000000000) != 0) {
        uVar1 = uVar7 >> 0x38 & 0xf;
      }
      do {
        FUN_100861aec();
        if ((ulong)param_1 >> 0xe <= uVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100861ae0);
          (*pcVar3)();
        }
        if (((ulong)IVar8.cmsgPointer.unknown & 0xc) == 4L << uVar5) {
          FUN_1000740a8(IVar8.cmsgPointer.unknown,UVar10.unknown,uVar7);
          if ((uVar7 >> 0x3c & 1) != 0) goto LAB_100861a68;
LAB_1008619b8:
          IVar8.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)IVar8.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
        }
        else {
          if ((uVar7 >> 0x3c & 1) == 0) goto LAB_1008619b8;
LAB_100861a68:
          if (uVar1 <= (ulong)IVar8.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100861aec);
            (*pcVar3)();
          }
          IVar8 = Swift::String::UTF8View::_foreignIndex(IVar8,UVar10);
        }
        *(UnsafeMutablePointer *)(unaff_x20 + 0x38) = IVar8.cmsgPointer.unknown;
        if (((ulong)IVar8.cmsgPointer.unknown & 0xc) == 4L << uVar5) {
          FUN_1000740a8(IVar8.cmsgPointer.unknown,UVar10.unknown,uVar7);
        }
        if ((ulong)IVar8.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100861a9c);
          (*pcVar3)();
        }
        if ((uVar7 >> 0x3c & 1) == 0) {
          IVar8.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)IVar8.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
        }
        else {
          if (uVar1 < (ulong)IVar8.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100861ae4);
            (*pcVar3)();
          }
          IVar8 = Swift::String::UTF8View::_foreignIndex(IVar8,UVar10);
        }
        FUN_100861c78(IVar8.cmsgPointer.unknown,UVar10.unknown,uVar7,uVar11,uVar12);
        uVar6 = SUB84(IVar8.cmsgPointer.unknown,0);
        local_91 = SUB81(IVar8.cmsgPointer.unknown,0);
        param_1 = &local_91;
        (**(code **)(unaff_x20 + 0x40))();
        if (((ulong)param_1 & 1) == 0) {
          iVar4 = 0;
          *unaff_x20 = '\x01';
          goto LAB_100861aa8;
        }
        FUN_100861aec();
        IVar8.cmsgPointer.unknown = *(UnsafeMutablePointer *)(unaff_x20 + 0x38);
        uVar9 = (ulong)IVar8.cmsgPointer.unknown >> 0xe;
      } while (uVar9 != (ulong)param_1 >> 0xe);
    }
  }
  uVar6 = 0;
  iVar4 = 1;
LAB_100861aa8:
  return uVar6 & 0xff | iVar4 << 8;
}



/* Address: 0x100861aec | FUN_100861aec */

undefined * FUN_100861aec(void)

{
  ulong uVar1;
  UTF8View UVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  code *pcVar6;
  Index IVar7;
  ulong uVar8;
  uint uVar9;
  undefined8 *unaff_x20;
  Index before;
  
  UVar2.unknown = (undefined *)*unaff_x20;
  uVar4 = unaff_x20[1];
  uVar1 = (ulong)UVar2.unknown & 0xffffffffffff;
  if ((uVar4 & 0x2000000000000000) != 0) {
    uVar1 = uVar4 >> 0x38 & 0xf;
  }
  uVar9 = (uint)((ulong)UVar2.unknown >> 0x3b) & 1;
  if ((uVar4 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar8 = 7;
  if (uVar9 == 0) {
    uVar8 = 0xb;
  }
  before.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar8 | uVar1 << 0x10);
  if (uVar1 != 0) {
    uVar3 = unaff_x20[2];
    uVar5 = unaff_x20[3];
    pcVar6 = (code *)unaff_x20[4];
    do {
      while( true ) {
        IVar7.cmsgPointer.unknown = before.cmsgPointer.unknown;
        if (((ulong)before.cmsgPointer.unknown & 0xc) == 4L << uVar9) {
          FUN_1000740a8(before.cmsgPointer.unknown,UVar2.unknown,uVar4);
        }
        if ((ulong)IVar7.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100861c70);
          (*pcVar6)();
        }
        if ((uVar4 >> 0x3c & 1) == 0) {
          IVar7.cmsgPointer.unknown =
               (UnsafeMutablePointer)
               (((ulong)IVar7.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
        }
        else {
          if (uVar1 < (ulong)IVar7.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100861c74);
            (*pcVar6)();
          }
          IVar7 = Swift::String::UTF8View::_foreignIndex(IVar7,UVar2);
        }
        FUN_100861c78(IVar7.cmsgPointer.unknown,UVar2.unknown,uVar4,uVar3,uVar5);
        uVar8 = 0xffffffffffffff9f;
        (*pcVar6)();
        if ((uVar8 & 1) == 0) {
          return (undefined *)before.cmsgPointer.unknown;
        }
        if (((ulong)before.cmsgPointer.unknown & 0xc) == 4L << uVar9) {
          FUN_1000740a8(before.cmsgPointer.unknown,UVar2.unknown,uVar4);
        }
        if ((ulong)before.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100861c48);
          (*pcVar6)();
        }
        if ((uVar4 >> 0x3c & 1) != 0) break;
        before.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)before.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
        if ((ulong)before.cmsgPointer.unknown < (undefined *)0x4000) {
          return (undefined *)before.cmsgPointer.unknown;
        }
      }
      if (uVar1 < (ulong)before.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100861c78);
        (*pcVar6)();
      }
      before = Swift::String::UTF8View::_foreignIndex(before,UVar2);
    } while ((undefined *)0x3fff < (ulong)before.cmsgPointer.unknown);
  }
  return (undefined *)before.cmsgPointer.unknown;
}



/* Address: 0x100861c78 | FUN_100861c78 */

ulong FUN_100861c78(Index param_1,UTF8View param_2,ulong param_3,code *param_4)

{
  ulong uVar1;
  code *pcVar2;
  UnsafeBufferPointer<__int8> UVar3;
  uint uVar4;
  ulong uVar5;
  undefined *local_48;
  ulong uStack_40;
  __uint8 local_31;
  
  uVar4 = (uint)((ulong)param_2.unknown >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  if (((ulong)param_1.cmsgPointer.unknown & 0xc) == 4L << uVar4) {
    FUN_1000740a8();
  }
  uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  uVar5 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if (uVar5 < uVar1) {
    if ((param_3 >> 0x3c & 1) == 0) {
      if ((param_3 >> 0x3d & 1) == 0) {
        if (((ulong)param_2.unknown >> 0x3c & 1) == 0) {
          UVar3 = Swift::_StringObject::get_sharedUTF8(param_2.unknown);
          local_31 = UVar3.unknown[uVar5];
        }
        else {
          local_31 = *(__uint8 *)((param_3 & 0xfffffffffffffff) + 0x20 + uVar5);
        }
      }
      else {
        local_48 = param_2.unknown;
        uStack_40 = param_3 & 0xffffffffffffff;
        local_31 = *(__uint8 *)((long)&local_48 + uVar5);
      }
    }
    else {
      local_31 = Swift::String::UTF8View::_foreignSubscript(param_1,param_2);
    }
    (*param_4)(&local_48,&local_31);
    return (ulong)local_48 & 0xff;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100861d40);
  (*pcVar2)();
}



/* Address: 0x100861d5c | FUN_100861d5c */

uint FUN_100861d5c(void)

{
  ulong uVar1;
  UTF8View UVar2;
  ulong uVar3;
  code *pcVar4;
  __uint8 _Var5;
  Index IVar6;
  Index position;
  UnsafeBufferPointer<__int8> UVar7;
  uint uVar8;
  int iVar9;
  undefined8 *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  undefined *local_58;
  ulong uStack_50;
  byte local_41;
  
  UVar2.unknown = (undefined *)*unaff_x20;
  uVar3 = unaff_x20[1];
  uVar1 = (ulong)UVar2.unknown & 0xffffffffffff;
  if ((uVar3 & 0x2000000000000000) != 0) {
    uVar1 = uVar3 >> 0x38 & 0xf;
  }
  IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)unaff_x20[2];
  if ((ulong)IVar6.cmsgPointer.unknown >> 0xe == uVar1 * 4) {
    uVar8 = 0;
    iVar9 = 1;
    goto LAB_100861ea0;
  }
  uVar8 = (uint)((ulong)UVar2.unknown >> 0x3b) & 1;
  if ((uVar3 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar10 = (ulong)IVar6.cmsgPointer.unknown & 0xc;
  uVar11 = 4L << uVar8;
  position.cmsgPointer.unknown = IVar6.cmsgPointer.unknown;
  if (uVar10 == uVar11) {
    FUN_1000740a8();
  }
  if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100861e38);
    (*pcVar4)();
  }
  if ((uVar3 >> 0x3c & 1) == 0) {
    if ((uVar3 >> 0x3d & 1) == 0) {
      if (((ulong)UVar2.unknown >> 0x3c & 1) == 0) {
        UVar7 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar2.unknown);
      }
      else {
        UVar7.unknown = (undefined *)((uVar3 & 0xfffffffffffffff) + 0x20);
      }
    }
    else {
      local_58 = UVar2.unknown;
      uStack_50 = uVar3 & 0xffffffffffffff;
      UVar7.unknown = (undefined *)&local_58;
    }
    _Var5 = *(__uint8 *)((long)UVar7.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
    if (uVar10 != uVar11) goto LAB_100861e04;
LAB_100861e5c:
    FUN_1000740a8();
    if ((uVar3 >> 0x3c & 1) != 0) goto LAB_100861e74;
LAB_100861e08:
    IVar6.cmsgPointer.unknown =
         (UnsafeMutablePointer)(((ulong)IVar6.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
  }
  else {
    _Var5 = Swift::String::UTF8View::_foreignSubscript(position,UVar2);
    if (uVar10 == uVar11) goto LAB_100861e5c;
LAB_100861e04:
    if ((uVar3 >> 0x3c & 1) == 0) goto LAB_100861e08;
LAB_100861e74:
    if (uVar1 <= (ulong)IVar6.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100861ec0);
      (*pcVar4)();
    }
    IVar6 = Swift::String::UTF8View::_foreignIndex(IVar6,UVar2);
  }
  unaff_x20[2] = IVar6.cmsgPointer.unknown;
  local_58 = (undefined *)CONCAT71(local_58._1_7_,_Var5);
  (*(code *)unaff_x20[3])(&local_41,&local_58);
  iVar9 = 0;
  uVar8 = (uint)local_41;
LAB_100861ea0:
  return uVar8 | iVar9 << 8;
}



/* Address: 0x100861ee4 | FUN_100861ee4 */

undefined8 FUN_100861ee4(long *param_1,long *param_2)

{
  long *plVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined *puVar4;
  undefined *puVar5;
  char cVar6;
  long lVar7;
  long lVar8;
  char cVar9;
  bool bVar10;
  undefined *puVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  code *pcVar16;
  ulong uVar17;
  ushort uVar18;
  ushort uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined1 auStack_160 [64];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined6 uStack_f6;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  ushort uStack_e8;
  long local_e0;
  undefined8 uStack_d8;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined2 local_b8;
  undefined6 uStack_b6;
  undefined2 uStack_b0;
  undefined6 uStack_ae;
  ushort uStack_a8;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  pcVar16 = *(code **)(*param_1 + 0x98);
  puVar11 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  puVar5 = PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40;
  puVar4 = PTR___type_metadata_for_Swift_Never_100eadc38;
  (*pcVar16)(&local_e0,FUN_100865530,param_1,puVar11,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar7 = local_e0;
  (**(code **)(*param_2 + 0x98))(&local_e0,FUN_100865530,param_2,puVar11,puVar4,puVar5);
  lVar8 = local_e0;
  if (*(long *)(lVar7 + 0x10) == *(long *)(local_e0 + 0x10)) {
    lVar20 = 0;
    uVar15 = 1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    uVar17 = 0xffffffffffffffff;
    if ((*(byte *)(lVar7 + 0x20) & 0x3f) < 6) {
      uVar17 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar17 = uVar17 & *(ulong *)(lVar7 + 0x40);
    while( true ) {
      while (uVar17 == 0) {
        bVar10 = SCARRY8(lVar20,1);
        lVar20 = lVar20 + 1;
        if (bVar10) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622bc);
          (*pcVar16)();
        }
        if ((long)(uVar15 + 0x3f >> 6) <= lVar20) {
          _swift_release(lVar7);
          _swift_bridgeObjectRelease(lVar8);
          return 1;
        }
        uVar17 = ((ulong *)(lVar7 + 0x40))[lVar20];
      }
      if (*(long *)(lVar8 + 0x10) == 0) break;
      uVar14 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
      uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
      uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
      uVar14 = LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) | lVar20 << 6;
      plVar1 = (long *)(*(long *)(lVar7 + 0x30) + uVar14 * 0x10);
      uVar19 = *(ushort *)(*(long *)(lVar7 + 0x38) + uVar14 * 4);
      lVar12 = *plVar1;
      uVar14 = plVar1[1];
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRetain(lVar8);
      uVar13 = uVar14;
      FUN_100071370();
      if ((uVar13 & 1) == 0) {
        _swift_release(lVar7);
        _swift_bridgeObjectRelease(uVar14);
        _swift_bridgeObjectRelease_n(lVar8,2);
        return 0;
      }
      uVar18 = *(ushort *)(*(long *)(lVar8 + 0x38) + lVar12 * 4);
      _swift_bridgeObjectRelease(uVar14);
      _swift_bridgeObjectRelease(lVar8);
      _swift_beginAccess(param_1 + 2,auStack_88,0,0);
      _swift_beginAccess(param_2 + 2,auStack_a0,0,0);
      if (uVar19 != 0xffff && uVar18 != 0xffff) {
        do {
          if (*(ulong *)(param_1[2] + 0x10) <= (ulong)uVar19) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622c0);
            (*pcVar16)();
          }
          lVar12 = param_1[2] + (ulong)uVar19 * 0x40;
          puStack_108 = *(undefined **)(lVar12 + 0x38);
          local_110 = *(undefined **)(lVar12 + 0x30);
          local_100 = *(undefined8 *)(lVar12 + 0x40);
          uStack_118 = *(undefined8 *)(lVar12 + 0x28);
          local_120 = *(undefined8 *)(lVar12 + 0x20);
          local_f8 = (undefined2)*(undefined8 *)(lVar12 + 0x48);
          uStack_ee = (undefined6)*(undefined8 *)(lVar12 + 0x52);
          uStack_e8 = (ushort)((ulong)*(undefined8 *)(lVar12 + 0x52) >> 0x30);
          uStack_f6 = (undefined6)*(undefined8 *)(lVar12 + 0x4a);
          uStack_f0 = (undefined2)((ulong)*(undefined8 *)(lVar12 + 0x4a) >> 0x30);
          if (*(ulong *)(param_2[2] + 0x10) <= (ulong)uVar18) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x1008622c4);
            (*pcVar16)();
          }
          cVar6 = (char)local_100;
          _Var2.unknown._2_6_ = uStack_f6;
          _Var2.unknown._0_2_ = local_f8;
          _Var3.unknown._2_6_ = uStack_ee;
          _Var3.unknown._0_2_ = uStack_f0;
          lVar12 = param_2[2] + (ulong)uVar18 * 0x40;
          puStack_c8 = *(undefined **)(lVar12 + 0x38);
          local_d0 = *(undefined **)(lVar12 + 0x30);
          uVar21 = *(undefined8 *)(lVar12 + 0x48);
          local_c0 = *(undefined8 *)(lVar12 + 0x40);
          uStack_d8 = *(undefined8 *)(lVar12 + 0x28);
          local_e0 = *(long *)(lVar12 + 0x20);
          local_b8 = (undefined2)uVar21;
          uStack_ae = (undefined6)*(undefined8 *)(lVar12 + 0x52);
          uStack_a8 = (ushort)((ulong)*(undefined8 *)(lVar12 + 0x52) >> 0x30);
          uStack_b6 = (undefined6)*(undefined8 *)(lVar12 + 0x4a);
          uStack_b0 = (undefined2)((ulong)*(undefined8 *)(lVar12 + 0x4a) >> 0x30);
          cVar9 = (char)local_c0;
          puVar11 = (undefined *)CONCAT62(uStack_b6,local_b8);
          puVar4 = (undefined *)CONCAT62(uStack_ae,uStack_b0);
          if ((((local_110 != local_d0) || (puStack_108 != puStack_c8)) &&
              (bVar10 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)local_110,(_StringGuts)puStack_108,
                                   (_StringComparisonResult)(__int8)local_d0), !bVar10)) ||
             (uVar18 = uStack_a8, uVar19 = uStack_e8, cVar6 != cVar9)) {
            FUN_1000f8cac(&local_120,auStack_160,&DAT_100fe8320,&DAT_100c7dd08);
            FUN_1000f8cac(&local_e0,auStack_160,&DAT_100fe8320,&DAT_100c7dd08);
            _swift_bridgeObjectRelease(lVar8);
            _swift_release(lVar7);
            FUN_1000fb4c4(&local_e0,&DAT_100fe8320,&DAT_100c7dd08);
            FUN_1000fb4c4(&local_120,&DAT_100fe8320,&DAT_100c7dd08);
            return 0;
          }
          if (((_Var2.unknown != puVar11) || (_Var3.unknown != puVar4)) &&
             (bVar10 = Swift::_stringCompareWithSmolCheck
                                 (_Var2,_Var3,(_StringComparisonResult)(__int8)uVar21), !bVar10)) {
            _swift_bridgeObjectRelease(lVar8);
            goto LAB_100862270;
          }
        } while ((uVar19 != 0xffff) && (uVar18 != 0xffff));
      }
      uVar17 = uVar17 - 1 & uVar17;
      if (uVar19 != uVar18) break;
    }
    _swift_bridgeObjectRelease(lVar8);
LAB_100862270:
    _swift_release(lVar7);
  }
  else {
    _swift_bridgeObjectRelease(lVar7);
    _swift_bridgeObjectRelease(local_e0);
  }
  return 0;
}



/* Address: 0x1008622c4 | FUN_1008622c4 */

Index FUN_1008622c4(Index param_1,UTF8View param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  Index IVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulong)param_2.unknown >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  if (((ulong)param_1.cmsgPointer.unknown & 0xc) == 4L << uVar4) {
    FUN_1000740a8(param_1.cmsgPointer.unknown,param_2.unknown);
  }
  if ((param_3 >> 0x3c & 1) != 0) {
    uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
    if ((param_3 & 0x2000000000000000) != 0) {
      uVar1 = param_3 >> 0x38 & 0xf;
    }
    if ((ulong)param_1.cmsgPointer.unknown >> 0x10 < uVar1) {
      IVar3 = Swift::String::UTF8View::_foreignIndex(param_1,param_2);
      return (Index)IVar3.cmsgPointer.unknown;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100862350);
    (*pcVar2)();
  }
  return (Index)(undefined *)(((ulong)param_1.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
}



/* Address: 0x100862350 | FUN_100862350 */

Index FUN_100862350(Index param_1,UTF8View param_2,ulong param_3)

{
  ulong uVar1;
  code *pcVar2;
  Index IVar3;
  uint uVar4;
  
  uVar4 = (uint)((ulong)param_2.unknown >> 0x3b) & 1;
  if ((param_3 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  if (((ulong)param_1.cmsgPointer.unknown & 0xc) == 4L << uVar4) {
    FUN_1000740a8(param_1.cmsgPointer.unknown,param_2.unknown,param_3);
  }
  if ((ulong)param_1.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008623c0);
    (*pcVar2)();
  }
  if ((param_3 >> 0x3c & 1) == 0) {
    return (Index)(undefined *)(((ulong)param_1.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc);
  }
  uVar1 = (ulong)param_2.unknown & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if ((ulong)param_1.cmsgPointer.unknown >> 0x10 <= uVar1) {
    IVar3 = Swift::String::UTF8View::_foreignIndex(param_1,param_2);
    return (Index)IVar3.cmsgPointer.unknown;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1008623ec);
  (*pcVar2)();
}



/* Address: 0x1008623ec | FUN_1008623ec */

undefined * FUN_1008623ec(long param_1)

{
  ulong *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  undefined2 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *capacity;
  ulong uVar9;
  ulong uVar10;
  undefined2 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar6 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fe8718;
    FUN_1000f7830(&DAT_100fe8718,&DAT_100c7e258);
    puVar6 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined2 *)(param_1 + 0x32);
    do {
      uVar9 = *(ulong *)(puVar11 + -9);
      uVar10 = *(ulong *)(puVar11 + -5);
      uVar4 = puVar11[-1];
      uVar3 = *puVar11;
      _swift_bridgeObjectRetain(uVar10);
      uVar7 = uVar9;
      uVar8 = uVar10;
      FUN_100071370();
      if ((uVar8 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008624f4);
        (*pcVar5)();
      }
      uVar8 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar8 + 0x40) = *(ulong *)(puVar6 + uVar8 + 0x40) | 1L << (uVar7 & 0x3f);
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x30) + uVar7 * 0x10);
      *puVar1 = uVar9;
      puVar1[1] = uVar10;
      puVar2 = (undefined2 *)(*(long *)(puVar6 + 0x38) + uVar7 * 4);
      *puVar2 = uVar4;
      puVar2[1] = uVar3;
      if (SCARRY8(*(long *)(puVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1008624f8);
        (*pcVar5)();
      }
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      capacity = capacity + -1;
      puVar11 = puVar11 + 0xc;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar6);
  }
  return puVar6;
}



/* Address: 0x1008624f8 | FUN_1008624f8 */

String FUN_1008624f8(_StringGuts param_1,_StringGuts param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  bool bVar4;
  undefined *puVar5;
  _StringGuts _Var6;
  undefined8 uVar7;
  _StringGuts _Var8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  char *pcVar14;
  ulong uVar15;
  code *pcVar16;
  long lVar17;
  String SVar18;
  long local_a0;
  ushort local_98;
  code *local_90;
  undefined8 uStack_88;
  undefined1 auStack_80 [32];
  
  pcVar16 = *(code **)(*param_3 + 0x98);
  puVar5 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar16)(&local_a0,FUN_100865530,param_3,puVar5,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (*(long *)(local_a0 + 0x10) == 0) {
LAB_10086268c:
    _swift_bridgeObjectRelease(local_a0);
    _swift_beginAccess(param_3 + 2,auStack_80,0,0);
  }
  else {
    _swift_bridgeObjectRetain(local_a0);
    _Var6.unknown = param_1.unknown;
    _Var8.unknown = param_2.unknown;
    FUN_100071370();
    if (((ulong)_Var8.unknown & 1) == 0) {
      _swift_bridgeObjectRelease(local_a0);
      goto LAB_10086268c;
    }
    uVar3 = *(ushort *)(*(long *)(local_a0 + 0x38) + (long)_Var6.unknown * 4);
    uVar15 = (ulong)uVar3;
    _swift_bridgeObjectRelease_n(local_a0,2);
    _swift_beginAccess(param_3 + 2,auStack_80,0,0);
    if (uVar15 != 0xffff) {
      lVar17 = param_3[2];
      if (*(ulong *)(lVar17 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1008627cc);
        (*pcVar16)();
      }
      lVar1 = lVar17 + uVar15 * 0x40;
      uVar7 = *(undefined8 *)(lVar1 + 0x20);
      lVar2 = *(long *)(lVar1 + 0x28);
      uVar9 = *(undefined8 *)(lVar1 + 0x30);
      uVar10 = *(undefined8 *)(lVar1 + 0x38);
      uVar11 = *(undefined1 *)(lVar1 + 0x40);
      uVar12 = *(undefined8 *)(lVar1 + 0x48);
      uVar13 = *(undefined8 *)(lVar1 + 0x50);
      _swift_bridgeObjectRetain(lVar2);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar13);
      if (lVar2 != 0) {
        _swift_bridgeObjectRetain(lVar17);
        FUN_100864364(uVar7,lVar2,uVar9,uVar10,uVar11,uVar12,uVar13);
        FUN_100864364(0,0,0,0,0,0,0);
        if ((param_1.unknown == (undefined *)0x65696b6f6f63) &&
           (param_2.unknown == &DAT_e600000000000000)) {
          pcVar14 = (char *)0x203b;
        }
        else {
          bVar4 = Swift::_stringCompareWithSmolCheck(param_1,param_2,(_StringComparisonResult)0x63);
          pcVar14 = (char *)0x203b;
          if (!bVar4) {
            pcVar14 = (char *)0x202c;
          }
        }
        local_90 = FUN_10085c5fc;
        uStack_88 = 0;
        local_a0 = lVar17;
        local_98 = uVar3;
        FUN_1000f7830(&DAT_100fe8760,&DAT_100c7e2a0);
        FUN_100134584(&DAT_100fe8768,&DAT_100fe8760,&DAT_100c7e2a0,
                      PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0
                     );
        FUN_100865318();
        SVar18.bridgeObject = &SUB_e200000000000000;
        SVar18.str = pcVar14;
        SVar18 = (extension_Swift)::Swift::Sequence::_joined(SVar18);
        _swift_bridgeObjectRelease(lVar17);
        _swift_bridgeObjectRelease(&SUB_e200000000000000);
        return SVar18;
      }
      goto LAB_1008626c0;
    }
  }
  uVar13 = 0;
  uVar12 = 0;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  uVar7 = 0;
LAB_1008626c0:
  FUN_100864364(uVar7,0,uVar9,uVar10,uVar11,uVar12,uVar13);
  return (String)ZEXT816(0);
}



/* Address: 0x1008627cc | FUN_1008627cc */

void FUN_1008627cc(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100862878);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10086287c);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100862880);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_1008603b8();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_100864420(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100862888);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100862884);
  (*pcVar2)();
}



/* Address: 0x100862888 | FUN_100862888 */

void FUN_100862888(long param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  ulong uVar15;
  code *pcVar16;
  ulong *unaff_x20;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  long lVar24;
  undefined1 auStack_148 [24];
  long local_130;
  long lStack_128;
  long local_120;
  long lStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 auStack_d0 [32];
  long local_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  plVar9 = (long *)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  plVar18 = (long *)*unaff_x20;
  if (((ulong)plVar9 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(plVar18);
    *unaff_x20 = (ulong)plVar9;
    plVar18 = plVar9;
  }
  pcVar16 = *(code **)(*plVar18 + 0x98);
  puVar13 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar16)(&local_b0,FUN_100865530,plVar18,puVar13,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar14 = local_b0;
  if (*(long *)(local_b0 + 0x10) == 0) {
LAB_100862b74:
    _swift_bridgeObjectRelease(lVar14);
  }
  else {
    _swift_bridgeObjectRetain(local_b0);
    FUN_100071370();
    if ((param_5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_100862b74;
    }
    uVar3 = *(ushort *)(*(long *)(lVar14 + 0x38) + param_4 * 4);
    _swift_bridgeObjectRelease_n(lVar14,2);
    if (uVar3 != 0xffff) {
      uVar15 = *(ulong *)(param_1 + 0x10);
      _swift_beginAccess(plVar18 + 2,auStack_148,0,0);
      uVar19 = 0;
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        uVar21 = (ulong)uVar3;
        if (uVar19 == uVar15) {
          puVar10 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar13;
          if (((ulong)puVar10 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1008604e8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
          }
          uVar19 = *(ulong *)(puVar12 + 0x10);
          puVar13 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar19) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1008604e8(puVar13,uVar19 + 1,1,puVar12);
          }
          *(ulong *)(puVar13 + 0x10) = uVar19 + 1;
          *(ulong *)(puVar13 + uVar19 * 8 + 0x20) = uVar21;
          uVar19 = uVar15;
        }
        else {
          if (uVar15 <= uVar19) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100862c9c);
            (*pcVar16)();
          }
          plVar9 = (long *)(param_1 + 0x20 + uVar19 * 0x20);
          local_120 = plVar9[2];
          lVar14 = plVar9[3];
          lStack_128 = plVar9[1];
          local_130 = *plVar9;
          lStack_118 = lVar14;
          _swift_bridgeObjectRetain(lVar14);
          (*param_2)(&local_b0,&local_130);
          _swift_bridgeObjectRelease(lVar14);
          uVar8 = local_80;
          uVar2 = uStack_88;
          lVar6 = lStack_98;
          lVar5 = local_a0;
          lVar24 = lStack_a8;
          lVar14 = local_b0;
          uVar7 = (undefined1)local_90;
          _swift_beginAccess(plVar18 + 2,&local_b0,0x21,0);
          uVar17 = plVar18[2];
          uVar11 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          plVar18[2] = uVar17;
          if ((uVar11 & 1) == 0) {
            FUN_1008603a4();
            plVar18[2] = uVar17;
          }
          if (*(ulong *)(uVar17 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar16 = (code *)SoftwareBreakpoint(1,0x100862ca0);
            (*pcVar16)();
          }
          lVar1 = uVar17 + uVar21 * 0x40;
          uVar20 = *(undefined8 *)(lVar1 + 0x28);
          uVar22 = *(undefined8 *)(lVar1 + 0x38);
          uVar19 = uVar19 + 1;
          uVar23 = *(undefined8 *)(lVar1 + 0x50);
          *(long *)(lVar1 + 0x20) = lVar14;
          *(long *)(lVar1 + 0x28) = lVar24;
          *(long *)(lVar1 + 0x30) = lVar5;
          *(long *)(lVar1 + 0x38) = lVar6;
          *(undefined1 *)(lVar1 + 0x40) = uVar7;
          *(undefined8 *)(lVar1 + 0x48) = uVar2;
          *(undefined8 *)(lVar1 + 0x50) = uVar8;
          plVar18[2] = uVar17;
          _swift_endAccess(&local_b0);
          _swift_bridgeObjectRelease(uVar23);
          _swift_bridgeObjectRelease(uVar22);
          _swift_bridgeObjectRelease(uVar20);
        }
        if (*(ulong *)(plVar18[2] + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100862c98);
          (*pcVar16)();
        }
        uVar3 = *(ushort *)(plVar18[2] + uVar21 * 0x40 + 0x58);
      } while (uVar3 != 0xffff);
      goto LAB_100862b88;
    }
  }
  uVar19 = 0;
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100862b88:
  if (*(long *)(puVar13 + 0x10) != 0) {
    _swift_beginAccess(plVar18 + 2,&local_b0,0x21,0);
    FUN_10085d1a0(puVar13);
    _swift_endAccess(&local_b0);
    _swift_beginAccess(plVar18 + 3,auStack_d0,1,0);
    lVar14 = plVar18[3];
    plVar18[3] = 0;
    _swift_bridgeObjectRelease(lVar14);
  }
  lVar14 = *(ulong *)(param_1 + 0x10) - uVar19;
  if (lVar14 != 0) {
    lVar24 = 0;
    if (uVar19 <= *(ulong *)(param_1 + 0x10)) {
      lVar24 = lVar14;
    }
    puVar4 = (undefined8 *)(param_1 + uVar19 * 0x20);
    do {
      if (lVar24 == 0) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x100862c94);
        (*pcVar16)();
      }
      local_e0 = puVar4[6];
      uVar2 = puVar4[7];
      uStack_e8 = puVar4[5];
      local_f0 = puVar4[4];
      uStack_d8 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (*param_2)(&local_130,&local_f0);
      _swift_bridgeObjectRelease(uVar2);
      lStack_a8 = lStack_128;
      local_b0 = local_130;
      lStack_98 = lStack_118;
      local_a0 = local_120;
      uStack_88 = uStack_108;
      local_90 = local_110;
      local_80 = local_100;
      FUN_10085bc74(&local_b0);
      FUN_1006ec3e4(&local_b0);
      lVar24 = lVar24 + -1;
      lVar14 = lVar14 + -1;
      puVar4 = puVar4 + 4;
    } while (lVar14 != 0);
  }
  _swift_bridgeObjectRelease(puVar13);
  return;
}



/* Address: 0x100862ca0 | FUN_100862ca0 */

void FUN_100862ca0(long *param_1,long param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long *plVar7;
  ulong *unaff_x20;
  ulong uVar8;
  uint uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  undefined8 uVar14;
  code *pcVar15;
  ulong uVar16;
  long lVar17;
  undefined1 uVar18;
  long lVar19;
  long lVar20;
  undefined1 auStack_b8 [32];
  long local_98;
  long lStack_90;
  long local_88;
  long lStack_80;
  undefined1 local_78;
  long local_70;
  long lStack_68;
  
  plVar1 = (long *)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  plVar7 = (long *)*unaff_x20;
  if (((ulong)plVar1 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(plVar7);
    *unaff_x20 = (ulong)plVar1;
    plVar7 = plVar1;
  }
  pcVar15 = *(code **)(*plVar7 + 0x98);
  puVar5 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar15)(&local_98,FUN_100865530,plVar7,puVar5,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar6 = local_98;
  if (*(long *)(local_98 + 0x10) == 0) {
    uVar9 = 0xffff;
  }
  else {
    _swift_bridgeObjectRetain(local_98);
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      uVar9 = 0xffff;
    }
    else {
      uVar9 = (uint)*(ushort *)(*(long *)(lVar6 + 0x38) + param_2 * 4);
    }
    _swift_bridgeObjectRelease(lVar6);
  }
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = *param_1;
  lVar13 = param_1[1];
  lVar12 = param_1[2];
  lVar17 = param_1[3];
  uVar18 = (undefined1)param_1[4];
  lVar19 = param_1[5];
  lVar20 = param_1[6];
  if (uVar9 != 0xffff) {
    _swift_beginAccess(plVar7 + 2,auStack_b8,0x21,0);
    uVar8 = plVar7[2];
    FUN_1000f8cac(param_1,&local_98,&DAT_100fe8728,&DAT_100c7e268);
    uVar16 = uVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    plVar7[2] = uVar8;
    if ((uVar16 & 1) == 0) {
      FUN_1008603a4();
      plVar7[2] = uVar8;
    }
    uVar16 = (ulong)uVar9;
    if (*(ulong *)(uVar8 + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x100863028);
      (*pcVar15)();
    }
    lVar2 = uVar8 + uVar16 * 0x40;
    uVar10 = *(undefined8 *)(lVar2 + 0x28);
    uVar11 = *(undefined8 *)(lVar2 + 0x38);
    uVar14 = *(undefined8 *)(lVar2 + 0x50);
    *(long *)(lVar2 + 0x20) = lVar6;
    *(long *)(lVar2 + 0x28) = lVar13;
    *(long *)(lVar2 + 0x30) = lVar12;
    *(long *)(lVar2 + 0x38) = lVar17;
    *(undefined1 *)(lVar2 + 0x40) = uVar18;
    *(long *)(lVar2 + 0x48) = lVar19;
    *(long *)(lVar2 + 0x50) = lVar20;
    plVar7[2] = uVar8;
    _swift_endAccess(auStack_b8);
    _swift_bridgeObjectRelease(uVar14);
    _swift_bridgeObjectRelease(uVar11);
    _swift_bridgeObjectRelease(uVar10);
    lVar6 = plVar7[2];
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar16 < *(ulong *)(lVar6 + 0x10)) {
      do {
        uVar16 = (ulong)*(ushort *)(lVar6 + uVar16 * 0x40 + 0x58);
        if (uVar16 == 0xffff) {
          lVar6 = 0;
          lVar13 = 0;
          lVar12 = 0;
          lVar17 = 0;
          uVar18 = 0;
          lVar19 = 0;
          lVar20 = 0;
          if (*(long *)(puVar5 + 0x10) == 0) goto LAB_100862e34;
          goto LAB_100862dec;
        }
        puVar3 = puVar5;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar4 = puVar5;
        if (((ulong)puVar3 & 1) == 0) {
          puVar4 = (undefined *)0x0;
          FUN_1008604e8(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
        }
        uVar8 = *(ulong *)(puVar4 + 0x10);
        puVar5 = puVar4;
        if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar8) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
          FUN_1008604e8(puVar5,uVar8 + 1,1,puVar4);
        }
        *(ulong *)(puVar5 + 0x10) = uVar8 + 1;
        *(ulong *)(puVar5 + uVar8 * 8 + 0x20) = uVar16;
        lVar6 = plVar7[2];
      } while (uVar16 < *(ulong *)(lVar6 + 0x10));
    }
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x100863010);
    (*pcVar15)();
  }
  FUN_1000f8cac(param_1,&local_98,&DAT_100fe8728,&DAT_100c7e268);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (*(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10) != 0) {
LAB_100862dec:
    _swift_beginAccess(plVar7 + 2,&local_98,0x21,0);
    FUN_10085d1a0(puVar5);
    _swift_endAccess(&local_98);
    _swift_beginAccess(plVar7 + 3,auStack_b8,1,0);
    lVar2 = plVar7[3];
    plVar7[3] = 0;
    _swift_bridgeObjectRelease(lVar2);
  }
LAB_100862e34:
  if (lVar13 != 0) {
    local_98 = lVar6;
    lStack_90 = lVar13;
    local_88 = lVar12;
    lStack_80 = lVar17;
    local_78 = uVar18;
    local_70 = lVar19;
    lStack_68 = lVar20;
    FUN_10085bc74(&local_98);
    FUN_100864364(lVar6,lVar13,lVar12,lVar17,uVar18,lVar19,lVar20);
  }
  _swift_bridgeObjectRelease(puVar5);
  return;
}



/* Address: 0x100863028 | FUN_100863028 */

void FUN_100863028(long param_1,ulong param_2)

{
  ulong uVar1;
  ushort uVar2;
  long *plVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  ulong *unaff_x20;
  undefined *puVar7;
  ulong uVar8;
  code *pcVar9;
  undefined1 auStack_78 [24];
  long local_60 [4];
  
  plVar3 = (long *)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  plVar6 = (long *)*unaff_x20;
  if (((ulong)plVar3 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(plVar6);
    *unaff_x20 = (ulong)plVar3;
    plVar6 = plVar3;
  }
  pcVar9 = *(code **)(*plVar6 + 0x98);
  puVar5 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar9)(local_60,FUN_100865530,plVar6,puVar5,PTR___type_metadata_for_Swift_Never_100eadc38,
            PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (*(long *)(local_60[0] + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_60[0]);
    FUN_100071370();
    if ((param_2 & 1) != 0) {
      uVar2 = *(ushort *)(*(long *)(local_60[0] + 0x38) + param_1 * 4);
      _swift_bridgeObjectRelease_n(local_60[0],2);
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
      if (uVar2 != 0xffff) {
        _swift_beginAccess(plVar6 + 2,auStack_78,0,0);
        puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          uVar8 = (ulong)uVar2;
          puVar7 = puVar5;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar4 = puVar5;
          if (((ulong)puVar7 & 1) == 0) {
            puVar4 = (undefined *)0x0;
            FUN_1008604e8(0,*(long *)(puVar5 + 0x10) + 1,1,puVar5);
          }
          uVar1 = *(ulong *)(puVar4 + 0x10);
          puVar5 = puVar4;
          if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
            puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
            FUN_1008604e8(puVar5,uVar1 + 1,1,puVar4);
          }
          *(ulong *)(puVar5 + 0x10) = uVar1 + 1;
          *(ulong *)(puVar5 + uVar1 * 8 + 0x20) = uVar8;
          if (*(ulong *)(plVar6[2] + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10086324c);
            (*pcVar9)();
          }
          uVar2 = *(ushort *)(plVar6[2] + uVar8 * 0x40 + 0x58);
        } while (uVar2 != 0xffff);
      }
      goto LAB_1008631d0;
    }
    _swift_bridgeObjectRelease(local_60[0]);
  }
  _swift_bridgeObjectRelease(local_60[0]);
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1008631d0:
  puVar7 = puVar5;
  if (*(long *)(puVar5 + 0x10) != 0) {
    _swift_beginAccess(plVar6 + 2,local_60,0x21,0);
    FUN_10085d1a0(puVar5);
    _swift_endAccess(local_60);
    _swift_beginAccess(plVar6 + 3,local_60,1,0);
    puVar7 = (undefined *)plVar6[3];
    plVar6[3] = 0;
    _swift_bridgeObjectRelease(puVar5);
  }
  _swift_bridgeObjectRelease(puVar7);
  return;
}



/* Address: 0x10086324c | FUN_10086324c */

void FUN_10086324c(void)

{
  undefined *puVar1;
  
  if (DAT_100fe8310 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__Collection_100eac248;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__Collection_100eac248,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fe8310 = puVar1;
  return;
}



/* Address: 0x10086328c | thunk_FUN_100863e04 */

void thunk_FUN_100863e04(void)

{
  FUN_100863e04();
  return;
}



/* Address: 0x100863290 | FUN_100863290 */

void FUN_100863290(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10085c878(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10086329c | FUN_10086329c */

void FUN_10086329c(long param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  undefined8 uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  long lVar13;
  ulong uVar14;
  code *pcVar15;
  ulong *unaff_x20;
  ulong uVar16;
  long *plVar17;
  ulong uVar18;
  undefined8 uVar19;
  ulong uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  undefined1 auStack_120 [24];
  long local_108;
  long lStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  long local_a0;
  long lStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  plVar8 = (long *)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  plVar17 = (long *)*unaff_x20;
  if (((ulong)plVar8 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(plVar17);
    *unaff_x20 = (ulong)plVar8;
    plVar17 = plVar8;
  }
  pcVar15 = *(code **)(*plVar17 + 0x98);
  puVar12 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar15)(&local_a0,FUN_100865530,plVar17,puVar12,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar13 = local_a0;
  if (*(long *)(local_a0 + 0x10) == 0) {
LAB_100863580:
    _swift_bridgeObjectRelease(lVar13);
  }
  else {
    _swift_bridgeObjectRetain(local_a0);
    FUN_100071370();
    if ((param_5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar13);
      goto LAB_100863580;
    }
    uVar3 = *(ushort *)(*(long *)(lVar13 + 0x38) + param_4 * 4);
    _swift_bridgeObjectRelease_n(lVar13,2);
    if (uVar3 != 0xffff) {
      uVar14 = *(ulong *)(param_1 + 0x10);
      _swift_beginAccess(plVar17 + 2,auStack_120,0,0);
      uVar18 = 0;
      puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        uVar20 = (ulong)uVar3;
        if (uVar18 == uVar14) {
          puVar9 = puVar12;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar11 = puVar12;
          if (((ulong)puVar9 & 1) == 0) {
            puVar11 = (undefined *)0x0;
            FUN_1008604e8(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
          }
          uVar18 = *(ulong *)(puVar11 + 0x10);
          puVar12 = puVar11;
          if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar18) {
            puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
            FUN_1008604e8(puVar12,uVar18 + 1,1,puVar11);
          }
          *(ulong *)(puVar12 + 0x10) = uVar18 + 1;
          *(ulong *)(puVar12 + uVar18 * 8 + 0x20) = uVar20;
          uVar18 = uVar14;
        }
        else {
          if (uVar14 <= uVar18) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008636a4);
            (*pcVar15)();
          }
          plVar8 = (long *)(param_1 + 0x20 + uVar18 * 0x10);
          local_108 = *plVar8;
          lVar13 = plVar8[1];
          lStack_100 = lVar13;
          _swift_bridgeObjectRetain(lVar13);
          (*param_2)(&local_a0,&local_108);
          _swift_bridgeObjectRelease(lVar13);
          uVar7 = local_70;
          uVar6 = uStack_78;
          uVar4 = uStack_88;
          uVar2 = local_90;
          lVar22 = lStack_98;
          lVar13 = local_a0;
          uVar5 = (undefined1)local_80;
          _swift_beginAccess(plVar17 + 2,&local_a0,0x21,0);
          uVar16 = plVar17[2];
          uVar10 = uVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          plVar17[2] = uVar16;
          if ((uVar10 & 1) == 0) {
            FUN_1008603a4();
            plVar17[2] = uVar16;
          }
          if (*(ulong *)(uVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar15 = (code *)SoftwareBreakpoint(1,0x1008636a8);
            (*pcVar15)();
          }
          lVar1 = uVar16 + uVar20 * 0x40;
          uVar19 = *(undefined8 *)(lVar1 + 0x28);
          uVar21 = *(undefined8 *)(lVar1 + 0x38);
          uVar18 = uVar18 + 1;
          uVar23 = *(undefined8 *)(lVar1 + 0x50);
          *(long *)(lVar1 + 0x20) = lVar13;
          *(long *)(lVar1 + 0x28) = lVar22;
          *(undefined8 *)(lVar1 + 0x30) = uVar2;
          *(undefined8 *)(lVar1 + 0x38) = uVar4;
          *(undefined1 *)(lVar1 + 0x40) = uVar5;
          *(undefined8 *)(lVar1 + 0x48) = uVar6;
          *(undefined8 *)(lVar1 + 0x50) = uVar7;
          plVar17[2] = uVar16;
          _swift_endAccess(&local_a0);
          _swift_bridgeObjectRelease(uVar23);
          _swift_bridgeObjectRelease(uVar21);
          _swift_bridgeObjectRelease(uVar19);
        }
        if (*(ulong *)(plVar17[2] + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1008636a0);
          (*pcVar15)();
        }
        uVar3 = *(ushort *)(plVar17[2] + uVar20 * 0x40 + 0x58);
      } while (uVar3 != 0xffff);
      goto LAB_100863594;
    }
  }
  uVar18 = 0;
  puVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100863594:
  if (*(long *)(puVar12 + 0x10) != 0) {
    _swift_beginAccess(plVar17 + 2,&local_a0,0x21,0);
    FUN_10085d1a0(puVar12);
    _swift_endAccess(&local_a0);
    _swift_beginAccess(plVar17 + 3,auStack_c0,1,0);
    lVar13 = plVar17[3];
    plVar17[3] = 0;
    _swift_bridgeObjectRelease(lVar13);
  }
  lVar13 = *(ulong *)(param_1 + 0x10) - uVar18;
  if (lVar13 != 0) {
    lVar22 = 0;
    if (uVar18 <= *(ulong *)(param_1 + 0x10)) {
      lVar22 = lVar13;
    }
    puVar24 = (undefined8 *)(param_1 + uVar18 * 0x10 + 0x28);
    do {
      if (lVar22 == 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10086369c);
        (*pcVar15)();
      }
      local_d0 = puVar24[-1];
      uVar2 = *puVar24;
      uStack_c8 = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      (*param_2)(&local_108,&local_d0);
      _swift_bridgeObjectRelease(uVar2);
      lStack_98 = lStack_100;
      local_a0 = local_108;
      uStack_88 = uStack_f0;
      local_90 = local_f8;
      uStack_78 = uStack_e0;
      local_80 = local_e8;
      local_70 = local_d8;
      FUN_10085bc74(&local_a0);
      FUN_1006ec3e4(&local_a0);
      lVar22 = lVar22 + -1;
      puVar24 = puVar24 + 2;
      lVar13 = lVar13 + -1;
    } while (lVar13 != 0);
  }
  _swift_bridgeObjectRelease(puVar12);
  return;
}



/* Address: 0x1008636a8 | FUN_1008636a8 */

void FUN_1008636a8(long param_1,long param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  ushort uVar8;
  long *plVar9;
  undefined *puVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  long *plVar17;
  ulong *unaff_x20;
  code *pcVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  ulong uVar24;
  undefined8 uVar25;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [56];
  undefined1 auStack_c0 [32];
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  long lStack_78;
  long local_70;
  
  plVar9 = (long *)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  plVar17 = (long *)*unaff_x20;
  if (((ulong)plVar9 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(plVar17);
    *unaff_x20 = (ulong)plVar9;
    plVar17 = plVar9;
  }
  pcVar18 = *(code **)(*plVar17 + 0x98);
  puVar13 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar18)(&local_a0,FUN_100865530,plVar17,puVar13,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  lVar14 = local_a0;
  if (*(long *)(local_a0 + 0x10) == 0) {
LAB_10086397c:
    _swift_bridgeObjectRelease(lVar14);
  }
  else {
    _swift_bridgeObjectRetain(local_a0);
    FUN_100071370();
    if ((param_3 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar14);
      goto LAB_10086397c;
    }
    uVar8 = *(ushort *)(*(long *)(lVar14 + 0x38) + param_2 * 4);
    _swift_bridgeObjectRelease_n(lVar14,2);
    if (uVar8 != 0xffff) {
      uVar19 = *(ulong *)(param_1 + 0x10);
      _swift_beginAccess(plVar17 + 2,auStack_110,0,0);
      uVar24 = 0;
      puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        uVar21 = (ulong)uVar8;
        if (uVar24 == uVar19) {
          puVar10 = puVar13;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar12 = puVar13;
          if (((ulong)puVar10 & 1) == 0) {
            puVar12 = (undefined *)0x0;
            FUN_1008604e8(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
          }
          uVar24 = *(ulong *)(puVar12 + 0x10);
          puVar13 = puVar12;
          if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar24) {
            puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
            FUN_1008604e8(puVar13,uVar24 + 1,1,puVar12);
          }
          *(ulong *)(puVar13 + 0x10) = uVar24 + 1;
          *(ulong *)(puVar13 + uVar24 * 8 + 0x20) = uVar21;
          uVar24 = uVar19;
        }
        else {
          if (uVar19 <= uVar24) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100863a78);
            (*pcVar18)();
          }
          puVar15 = (undefined8 *)(param_1 + 0x20 + uVar24 * 0x38);
          uVar1 = *puVar15;
          uVar4 = puVar15[1];
          uVar2 = puVar15[2];
          uVar5 = puVar15[3];
          uVar7 = *(undefined1 *)(puVar15 + 4);
          uVar3 = puVar15[5];
          uVar6 = puVar15[6];
          _swift_beginAccess(plVar17 + 2,&local_a0,0x21,0);
          uVar20 = plVar17[2];
          _swift_bridgeObjectRetain(uVar4);
          _swift_bridgeObjectRetain(uVar5);
          _swift_bridgeObjectRetain(uVar6);
          uVar11 = uVar20;
          _swift_isUniquelyReferenced_nonNull_native();
          plVar17[2] = uVar20;
          if ((uVar11 & 1) == 0) {
            FUN_1008603a4();
            plVar17[2] = uVar20;
          }
          if (*(ulong *)(uVar20 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
            pcVar18 = (code *)SoftwareBreakpoint(1,0x100863a7c);
            (*pcVar18)();
          }
          lVar14 = uVar20 + uVar21 * 0x40;
          uVar22 = *(undefined8 *)(lVar14 + 0x28);
          uVar23 = *(undefined8 *)(lVar14 + 0x38);
          uVar24 = uVar24 + 1;
          uVar25 = *(undefined8 *)(lVar14 + 0x50);
          *(undefined8 *)(lVar14 + 0x20) = uVar1;
          *(undefined8 *)(lVar14 + 0x28) = uVar4;
          *(undefined8 *)(lVar14 + 0x30) = uVar2;
          *(undefined8 *)(lVar14 + 0x38) = uVar5;
          *(undefined1 *)(lVar14 + 0x40) = uVar7;
          *(undefined8 *)(lVar14 + 0x48) = uVar3;
          *(undefined8 *)(lVar14 + 0x50) = uVar6;
          plVar17[2] = uVar20;
          _swift_endAccess(&local_a0);
          _swift_bridgeObjectRelease(uVar25);
          _swift_bridgeObjectRelease(uVar23);
          _swift_bridgeObjectRelease(uVar22);
        }
        if (*(ulong *)(plVar17[2] + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar18 = (code *)SoftwareBreakpoint(1,0x100863a74);
          (*pcVar18)();
        }
        uVar8 = *(ushort *)(plVar17[2] + uVar21 * 0x40 + 0x58);
      } while (uVar8 != 0xffff);
      goto LAB_100863990;
    }
  }
  uVar24 = 0;
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_100863990:
  if (*(long *)(puVar13 + 0x10) != 0) {
    _swift_beginAccess(plVar17 + 2,&local_a0,0x21,0);
    FUN_10085d1a0(puVar13);
    _swift_endAccess(&local_a0);
    _swift_beginAccess(plVar17 + 3,auStack_c0,1,0);
    lVar14 = plVar17[3];
    plVar17[3] = 0;
    _swift_bridgeObjectRelease(lVar14);
  }
  lVar16 = *(long *)(param_1 + 0x10);
  lVar14 = lVar16 - uVar24;
  if (lVar14 != 0) {
    if (lVar16 < (long)uVar24) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100863a80);
      (*pcVar18)();
    }
    if (lVar16 == 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x100863a84);
      (*pcVar18)();
    }
    plVar17 = (long *)(param_1 + uVar24 * 0x38 + 0x20);
    do {
      lStack_98 = plVar17[1];
      local_a0 = *plVar17;
      lStack_88 = plVar17[3];
      lStack_90 = plVar17[2];
      lStack_78 = plVar17[5];
      local_80 = plVar17[4];
      local_70 = plVar17[6];
      FUN_100864328(&local_a0,auStack_f8);
      FUN_10085bc74(&local_a0);
      FUN_1006ec3e4(&local_a0);
      plVar17 = plVar17 + 7;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
  }
  _swift_bridgeObjectRelease(puVar13);
  return;
}



/* Address: 0x100863a84 | FUN_100863a84 */

undefined * FUN_100863a84(long param_1,ulong param_2,long *param_3)

{
  long lVar1;
  __uint8 _Var2;
  undefined *puVar3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  _StringObject _Var5;
  ulong uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  uint uVar12;
  ulong uVar13;
  code *pcVar14;
  ulong uVar15;
  undefined *local_98;
  ulong uStack_90;
  undefined *local_88;
  long local_80 [4];
  
  pcVar14 = *(code **)(*param_3 + 0x98);
  puVar3 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar14)(local_80,FUN_100865530,param_3,puVar3,PTR___type_metadata_for_Swift_Never_100eadc38,
             PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (*(long *)(local_80[0] + 0x10) == 0) {
    uVar12 = 0xffff;
  }
  else {
    _swift_bridgeObjectRetain(local_80[0]);
    FUN_100071370();
    if ((param_2 & 1) == 0) {
      uVar12 = 0xffff;
    }
    else {
      uVar12 = (uint)*(ushort *)(*(long *)(local_80[0] + 0x38) + param_1 * 4);
    }
    _swift_bridgeObjectRelease(local_80[0]);
  }
  _swift_bridgeObjectRelease(local_80[0]);
  _swift_beginAccess(param_3 + 2,local_80,0,0);
  lVar9 = param_3[2];
  local_88 = PTR___swiftEmptyArrayStorage_100eae0d8;
  _swift_bridgeObjectRetain(lVar9);
  FUN_1008607dc(0,0,0);
  if (uVar12 != 0xffff) {
    do {
      puVar3 = local_88;
      if (*(ulong *)(lVar9 + 0x10) <= (ulong)uVar12) {
                    /* WARNING: Does not return */
        pcVar14 = (code *)SoftwareBreakpoint(1,0x100863df8);
        (*pcVar14)();
      }
      lVar1 = lVar9 + 0x20 + (ulong)uVar12 * 0x40;
      uVar11 = *(undefined8 *)(lVar1 + 8);
      uVar8 = *(undefined8 *)(lVar1 + 0x18);
      _Var5.unknown = *(undefined **)(lVar1 + 0x28);
      uVar13 = *(ulong *)(lVar1 + 0x30);
      uVar12 = (uint)*(ushort *)(lVar1 + 0x38);
      uVar6 = (ulong)_Var5.unknown & 0xffffffffffff;
      if ((uVar13 & 0x2000000000000000) != 0) {
        uVar6 = uVar13 >> 0x38 & 0xf;
      }
      uVar7 = (uint)((ulong)_Var5.unknown >> 0x3b) & 1;
      if ((uVar13 & 0x1000000000000000) == 0) {
        uVar7 = 1;
      }
      uVar15 = 4L << uVar7;
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      do {
        while( true ) {
          if (uVar6 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) == 0) {
            _swift_bridgeObjectRetain(uVar13);
            goto LAB_100863d90;
          }
          uVar10 = (ulong)after.cmsgPointer.unknown & 0xc;
          position.cmsgPointer.unknown = after.cmsgPointer.unknown;
          if (uVar10 == uVar15) {
            FUN_1000740a8(after.cmsgPointer.unknown,_Var5.unknown,uVar13);
          }
          if (uVar6 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100863df0);
            (*pcVar14)();
          }
          if ((uVar13 >> 0x3c & 1) != 0) break;
          if ((uVar13 >> 0x3d & 1) == 0) {
            UVar4.unknown = (undefined *)((uVar13 & 0xfffffffffffffff) + 0x20);
            if (((ulong)_Var5.unknown >> 0x3c & 1) == 0) {
              UVar4 = Swift::_StringObject::get_sharedUTF8(_Var5);
            }
          }
          else {
            local_98 = _Var5.unknown;
            uStack_90 = uVar13 & 0xffffffffffffff;
            UVar4.unknown = (undefined *)&local_98;
          }
          uVar7 = (uint)*(byte *)((long)UVar4.unknown +
                                 ((ulong)position.cmsgPointer.unknown >> 0x10));
          if (uVar10 == uVar15) goto LAB_100863d18;
LAB_100863cb8:
          if ((uVar13 >> 0x3c & 1) == 0) goto LAB_100863c40;
LAB_100863cbc:
          if (uVar6 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar14 = (code *)SoftwareBreakpoint(1,0x100863df4);
            (*pcVar14)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)_Var5.unknown);
          if (uVar7 >> 7 != 0) goto LAB_100863d38;
        }
        _Var2 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)_Var5.unknown);
        uVar7 = (uint)_Var2;
        if (uVar10 != uVar15) goto LAB_100863cb8;
LAB_100863d18:
        FUN_1000740a8(after.cmsgPointer.unknown,_Var5.unknown,uVar13);
        if ((uVar13 >> 0x3c & 1) != 0) goto LAB_100863cbc;
LAB_100863c40:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      } while (uVar7 >> 7 == 0);
LAB_100863d38:
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar8);
      _swift_bridgeObjectRetain(uVar13);
      uVar6 = uVar13;
      FUN_100872ba8();
      _swift_bridgeObjectRelease(uVar13);
      _swift_bridgeObjectRelease(uVar8);
      _swift_bridgeObjectRelease(uVar11);
      uVar13 = uVar6;
LAB_100863d90:
      local_88 = puVar3;
      uVar6 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
        FUN_1008607dc(1 < *(ulong *)(puVar3 + 0x18),uVar6 + 1,1);
      }
      *(ulong *)(local_88 + 0x10) = uVar6 + 1;
      *(undefined **)(local_88 + uVar6 * 0x10 + 0x20) = _Var5.unknown;
      *(ulong *)(local_88 + uVar6 * 0x10 + 0x28) = uVar13;
    } while (uVar12 != 0xffff);
  }
  puVar3 = local_88;
  _swift_bridgeObjectRelease(lVar9);
  return puVar3;
}



/* Address: 0x100863df8 | FUN_100863df8 */

void FUN_100863df8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10085cb40(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100863e04 | FUN_100863e04 */

void FUN_100863e04(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100863e30 | FUN_100863e30 */

long FUN_100863e30(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long local_60 [4];
  
  pcVar4 = *(code **)(*param_3 + 0x98);
  puVar1 = &DAT_100fe8318;
  FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
  (*pcVar4)(local_60,FUN_100865530,param_3,puVar1,PTR___type_metadata_for_Swift_Never_100eadc38,
            PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  if (*(long *)(local_60[0] + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_60[0]);
    FUN_100071370();
    _swift_bridgeObjectRelease(local_60[0]);
  }
  _swift_bridgeObjectRelease(local_60[0]);
  _swift_beginAccess(param_3 + 2,local_60,0,0);
  lVar3 = param_3[2];
  lVar2 = lVar3;
  _swift_bridgeObjectRetain(lVar3);
  FUN_100860900();
  _swift_bridgeObjectRelease(lVar3);
  return lVar2;
}



/* Address: 0x100863f40 | FUN_100863f40 */

void FUN_100863f40(void)

{
  FUN_10085b604();
  return;
}



/* Address: 0x100863f5c | FUN_100863f5c */

ulong FUN_100863f5c(ulong param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  byte bVar6;
  ulong uVar7;
  Dictionary DVar8;
  long lVar9;
  UTF8View UVar10;
  undefined8 uVar11;
  Index position;
  UnsafeBufferPointer<__int8> UVar12;
  undefined *puVar13;
  ulong uVar14;
  uint uVar15;
  undefined8 *puVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  Index after;
  ulong uVar23;
  undefined *local_d0;
  ulong uStack_c8;
  undefined *local_c0;
  ulong uStack_b8;
  code *local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 local_80;
  undefined *local_78;
  ulong uStack_70;
  
  uVar7 = param_1;
  FUN_10085c548();
  uVar19 = *(ulong *)(param_1 + 0x10);
  uVar21 = uVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar21 & 1) == 0) {
    FUN_10085ba44();
    _swift_release(uVar7);
    uVar7 = uVar21;
  }
  pcVar5 = (code *)&local_a0;
  FUN_100611ea8();
  if (*param_2 != 0) {
    DVar8.unknown = &DAT_100fe8318;
    FUN_1000f7830(&DAT_100fe8318,&DAT_100c7dd00);
    Swift::Dictionary::reserveCapacity(uVar19,DVar8);
  }
  (*pcVar5)(&local_a0,0);
  _swift_beginAccess(uVar7 + 0x10,&local_a0,0x21,0);
  lVar17 = *(long *)(uVar7 + 0x10);
  lVar9 = lVar17;
  _swift_isUniquelyReferenced_nonNull_native();
  *(long *)(uVar7 + 0x10) = lVar17;
  if (((int)lVar9 == 0) || (*(ulong *)(lVar17 + 0x18) >> 1 < uVar19)) {
    FUN_1008603b8();
    lVar17 = lVar9;
  }
  *(long *)(uVar7 + 0x10) = lVar17;
  _swift_endAccess(&local_a0);
  if (uVar19 != 0) {
    uVar21 = 0;
    do {
      puVar16 = (undefined8 *)(param_1 + 0x20 + uVar21 * 0x30);
      uVar1 = *puVar16;
      uVar3 = puVar16[1];
      uVar2 = puVar16[2];
      uVar4 = puVar16[3];
      UVar10.unknown = (undefined *)puVar16[4];
      uVar18 = puVar16[5];
      uVar11 = uVar1;
      FUN_100830fd0(uVar1,uVar3);
      if ((((uint)uVar11 & 0xff00) != 0x100) && (((uint)uVar11 & 0xff) == 0x3a)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100864324);
        (*pcVar5)();
      }
      uVar21 = uVar21 + 1;
      uVar14 = (ulong)UVar10.unknown & 0xffffffffffff;
      if ((uVar18 & 0x2000000000000000) != 0) {
        uVar14 = uVar18 >> 0x38 & 0xf;
      }
      uVar15 = (uint)((ulong)UVar10.unknown >> 0x3b) & 1;
      if ((uVar18 & 0x1000000000000000) == 0) {
        uVar15 = 1;
      }
      uVar22 = 4L << uVar15;
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      do {
        while( true ) {
          if (uVar14 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) == 0) {
            _swift_bridgeObjectRetain(uVar18);
            _swift_bridgeObjectRetain(uVar3);
            _swift_bridgeObjectRetain(uVar4);
            goto LAB_100864088;
          }
          uVar23 = (ulong)after.cmsgPointer.unknown & 0xc;
          position.cmsgPointer.unknown = after.cmsgPointer.unknown;
          if (uVar23 == uVar22) {
            FUN_1000740a8(after.cmsgPointer.unknown,UVar10.unknown,uVar18);
          }
          uVar20 = (ulong)position.cmsgPointer.unknown >> 0x10;
          if (uVar14 <= uVar20) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10086431c);
            (*pcVar5)();
          }
          if ((uVar18 >> 0x3c & 1) == 0) break;
          bVar6 = Swift::String::UTF8View::_foreignSubscript(position,UVar10);
joined_r0x000100864228:
          uVar15 = (uint)bVar6;
          if (uVar23 != uVar22) goto LAB_1008641d8;
LAB_10086422c:
          FUN_1000740a8(after.cmsgPointer.unknown,UVar10.unknown,uVar18);
          if ((uVar18 >> 0x3c & 1) == 0) goto LAB_10086416c;
LAB_1008641dc:
          if (uVar14 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x100864320);
            (*pcVar5)();
          }
          after = Swift::String::UTF8View::_foreignIndex(after,UVar10);
          if (uVar15 >> 7 != 0) goto LAB_100864258;
        }
        if ((uVar18 >> 0x3d & 1) != 0) {
          local_c0 = UVar10.unknown;
          uStack_b8 = uVar18 & 0xffffffffffffff;
          bVar6 = *(byte *)((long)&local_c0 + uVar20);
          goto joined_r0x000100864228;
        }
        UVar12.unknown = (undefined *)((uVar18 & 0xfffffffffffffff) + 0x20);
        if (((ulong)UVar10.unknown >> 0x3c & 1) == 0) {
          UVar12 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar10.unknown);
        }
        uVar15 = (uint)(byte)UVar12.unknown[uVar20];
        if (uVar23 == uVar22) goto LAB_10086422c;
LAB_1008641d8:
        if ((uVar18 >> 0x3c & 1) != 0) goto LAB_1008641dc;
LAB_10086416c:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      } while (uVar15 >> 7 == 0);
LAB_100864258:
      local_b0 = FUN_100872b9c;
      uStack_a8 = 0;
      local_d0 = (undefined *)0x0;
      uStack_c8 = 0xe000000000000000;
      local_c0 = UVar10.unknown;
      uStack_b8 = uVar18;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      puVar13 = &DAT_100fe81f8;
      FUN_1000f7830(&DAT_100fe81f8,&DAT_100c7d850);
      puVar16 = &DAT_100fe8200;
      FUN_100134584(&DAT_100fe8200,&DAT_100fe81f8,&DAT_100c7d850,
                    PTR_Swift__Swift__LazyMapSequence<undefined,undefined>_>Swift__Sequence_100ead1b0
                   );
      Swift::String::UnicodeScalarView::_append(&local_c0,puVar13,puVar16);
      uVar18 = uStack_c8;
      UVar10.unknown = local_d0;
LAB_100864088:
      uVar14 = uVar18;
      FUN_1008590a4();
      _swift_bridgeObjectRelease(uVar18);
      local_80 = 0;
      local_a0 = uVar1;
      uStack_98 = uVar3;
      local_90 = uVar2;
      uStack_88 = uVar4;
      local_78 = UVar10.unknown;
      uStack_70 = uVar14;
      FUN_10085bc74(&local_a0);
      FUN_1006ec3e4(&local_a0);
    } while (uVar21 != uVar19);
  }
  if (0xfffe < *(ulong *)(*(long *)(uVar7 + 0x10) + 0x10)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100864328);
    (*pcVar5)();
  }
  return uVar7;
}



/* Address: 0x100864328 | FUN_100864328 */

undefined8 FUN_100864328(undefined8 param_1,undefined8 param_2)

{
  FUN_100859960(param_2,param_1);
  return param_2;
}



/* Address: 0x100864364 | FUN_100864364 */

void FUN_100864364(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_7);
    return;
  }
  return;
}



/* Address: 0x1008643a0 | FUN_1008643a0 */

void FUN_1008643a0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8330 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7e088;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7e088,&DAT_100f072e0);
  DAT_100fe8330 = pTVar1;
  return;
}



/* Address: 0x1008643e0 | FUN_1008643e0 */

void FUN_1008643e0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8338 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7d9a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d9a8,&DAT_100f06ee0);
  DAT_100fe8338 = pTVar1;
  return;
}



/* Address: 0x100864420 | FUN_100864420 */

void FUN_100864420(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  undefined *puVar7;
  size_t sVar8;
  long *unaff_x20;
  long lVar9;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008644dc);
    (*pcVar6)();
  }
  lVar9 = *unaff_x20;
  lVar1 = lVar9 + 0x20 + param_1 * 0x40;
  puVar7 = &DAT_100fe8320;
  FUN_1000f7830(&DAT_100fe8320,&DAT_100c7dd08);
  _swift_arrayDestroy(lVar1,lVar4,puVar7);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008644e0);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    if (SBORROW8(*(long *)(lVar9 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008644e4);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x40);
    pvVar3 = (void *)(lVar9 + 0x20 + param_2 * 0x40);
    sVar8 = (*(long *)(lVar9 + 0x10) - param_2) * 0x40;
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + sVar8) <= pvVar2) {
      _memmove(pvVar2,pvVar3,sVar8);
    }
    if (SCARRY8(*(long *)(lVar9 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1008644e8);
      (*pcVar6)();
    }
    *(long *)(lVar9 + 0x10) = *(long *)(lVar9 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008644ec);
  (*pcVar6)();
}


