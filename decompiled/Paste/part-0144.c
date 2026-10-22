/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001af310 | FUN_1001af310 */

void FUN_1001af310(undefined8 param_1,undefined8 param_2)

{
  undefined1 auStack_30 [16];
  
  FUN_1001b02ec(auStack_30,param_1,param_2);
  return;
}



/* Address: 0x1001af344 | FUN_1001af344 */

void FUN_1001af344(undefined8 param_1)

{
  undefined1 auStack_28 [8];
  
  FUN_1001b0218(auStack_28,param_1);
  return;
}



/* Address: 0x1001af374 | FUN_1001af374 */

undefined8
FUN_1001af374(ulong param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  FUN_1001af400(param_1,param_5);
  if ((((param_1 & 1) != 0) && (FUN_1001af400(param_2,param_6), (param_2 & 1) != 0)) &&
     (FUN_1001af54c(param_3,param_7), (param_3 & 1) != 0)) {
    FUN_1001af400(param_4,param_8);
    return param_4;
  }
  return 0;
}



/* Address: 0x1001af400 | FUN_1001af400 */

undefined8 FUN_1001af400(long param_1,long param_2,Hasher param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  __uint64 _Var7;
  long lVar8;
  ulong uVar9;
  
  if (param_1 == param_2) {
LAB_1001af528:
    uVar2 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar5 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar5 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x38);
      lVar4 = 0;
      while( true ) {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar4 + 1;
            if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x1001af54c);
              (*pcVar1)();
            }
            if ((long)(uVar5 + 0x3f >> 6) <= lVar8) goto LAB_1001af528;
            uVar9 = ((ulong *)(param_1 + 0x38))[lVar8];
            lVar4 = lVar4 + 1;
          } while (uVar9 == 0);
          uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar3 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
          uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
          uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
          uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar4;
        }
        _Var7 = *(__uint64 *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar3) | lVar8 << 6) * 8);
        uVar3 = Swift::Hasher::_hash(*(__int64 *)(param_2 + 0x28),_Var7,param_3);
        uVar6 = -1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
        uVar3 = uVar3 & (uVar6 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0) break;
        while (lVar4 = lVar8, *(__uint64 *)(*(long *)(param_2 + 0x30) + uVar3 * 8) != _Var7) {
          uVar3 = uVar3 + 1 & ~uVar6;
          if ((*(ulong *)(param_2 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) == 0)
          goto LAB_1001af520;
        }
      }
    }
LAB_1001af520:
    uVar2 = 0;
  }
  return uVar2;
}



/* Address: 0x1001af54c | FUN_1001af54c */

undefined8 FUN_1001af54c(undefined *param_1,undefined *param_2)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  undefined *puVar3;
  code *pcVar4;
  Hasher HVar5;
  undefined8 uVar6;
  Hasher HVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  
  if (param_1 == param_2) {
LAB_1001af6a8:
    uVar6 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar10 = 1L << ((ulong)(byte)param_1[0x20] & 0x3f);
      uVar13 = 0xffffffffffffffff;
      if ((param_1[0x20] & 0x3f) < 6) {
        uVar13 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar13 = uVar13 & *(ulong *)(param_1 + 0x38);
      HVar7.unknown = param_2;
      lVar9 = 0;
      while( true ) {
        if (uVar13 == 0) {
          do {
            lVar12 = lVar9 + 1;
            if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x1001af6d0);
              (*pcVar4)();
            }
            if ((long)(uVar10 + 0x3f >> 6) <= lVar12) goto LAB_1001af6a8;
            uVar13 = *(ulong *)((long)(param_1 + 0x38) + lVar12 * 8);
            lVar9 = lVar9 + 1;
          } while (uVar13 == 0);
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
        }
        else {
          uVar8 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
          uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
          uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
          uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
          uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
          uVar13 = uVar13 - 1 & uVar13;
          lVar12 = lVar9;
        }
        p_Var1 = (__uint64 *)(*(long *)(param_1 + 0x30) + (LZCOUNT(uVar8) | lVar12 << 6) * 0x10);
        _Var2 = *p_Var1;
        puVar3 = (undefined *)p_Var1[1];
        Swift::Hasher::init(*(__int64 *)(param_2 + 0x28));
        Swift::Hasher::_combine(_Var2,HVar7);
        HVar5.unknown = puVar3;
        Swift::Hasher::_combine((__uint64)puVar3,HVar7);
        uVar8 = Swift::Hasher::_finalize(HVar5);
        uVar11 = -1L << ((ulong)(byte)param_2[0x20] & 0x3f);
        uVar8 = uVar8 & (uVar11 ^ 0xffffffffffffffff);
        if ((*(ulong *)(param_2 + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) == 0) break;
        while (p_Var1 = (__uint64 *)(*(long *)(param_2 + 0x30) + uVar8 * 0x10), lVar9 = lVar12,
              *p_Var1 != _Var2 || (undefined *)p_Var1[1] != puVar3) {
          uVar8 = uVar8 + 1 & ~uVar11;
          if ((*(ulong *)(param_2 + (uVar8 >> 6) * 8 + 0x38) >> (uVar8 & 0x3f) & 1) == 0)
          goto LAB_1001af6a0;
        }
      }
    }
LAB_1001af6a0:
    uVar6 = 0;
  }
  return uVar6;
}



/* Address: 0x1001af6d0 | FUN_1001af6d0 */

ulong FUN_1001af6d0(ulong *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar4 = *param_1;
  uVar5 = param_1[1];
  uVar6 = param_1[2];
  uVar7 = param_1[3];
  uVar2 = param_2[1];
  uVar1 = param_2[2];
  uVar3 = param_2[3];
  FUN_1001af400(uVar4,*param_2);
  if ((((uVar4 & 1) != 0) && (FUN_1001af400(uVar5,uVar2), (uVar5 & 1) != 0)) &&
     (FUN_1001af54c(uVar6,uVar1), (uVar6 & 1) != 0)) {
    FUN_1001af400(uVar7,uVar3);
    return uVar7;
  }
  return 0;
}



/* Address: 0x1001af758 | FUN_1001af758 */

String FUN_1001af758(long param_1,undefined *param_2,long param_3,long param_4)

{
  undefined1 *puVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  _StringGuts _Var8;
  long lVar9;
  String SVar10;
  String SVar11;
  String separator;
  String SVar12;
  String separator_00;
  String SVar13;
  String separator_01;
  String SVar14;
  String separator_02;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  
  if (*(long *)(param_1 + 0x10) == 0) {
    lVar9 = *(long *)(param_2 + 0x10);
    _Var8.unknown = param_2;
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    FUN_1001afc60();
    pcVar3 = &DAT_100fb4c40;
    FUN_1000037f0(&DAT_100fb4c40,&DAT_100c32b40);
    pcVar4 = pcVar3;
    FUN_1001b03fc();
    SVar10.bridgeObject = &SUB_e200000000000000;
    SVar10.str = (char *)0x202c;
    SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar10);
    _swift_bridgeObjectRelease(param_1);
    SVar15.bridgeObject = pcVar4;
    SVar15.str = pcVar3;
    Swift::String::append(SVar10,SVar15);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar11.bridgeObject = (void *)0xe100000000000000;
    SVar11.str = (char *)0x5d;
    SVar16.bridgeObject = pcVar4;
    SVar16.str = pcVar3;
    Swift::String::append(SVar11,SVar16);
    puVar5 = (undefined *)0x0;
    _Var8.unknown = &DAT_00000001;
    FUN_1001b11d4(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
    uVar2 = *(ulong *)(puVar5 + 0x10);
    puVar1 = (undefined1 *)(uVar2 + 1);
    puVar7 = puVar5;
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar2) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
      _Var8.unknown = puVar1;
      FUN_1001b11d4(puVar7,puVar1,1,puVar5);
    }
    *(undefined1 **)(puVar7 + 0x10) = puVar1;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = 0x6e6f6974656c6564;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = 0xec0000005b203a73;
    lVar9 = *(long *)(param_2 + 0x10);
  }
  if (lVar9 != 0) {
    Swift::_StringGuts::grow(0x10,_Var8);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_1001afc60();
    pcVar3 = &DAT_100fb4c40;
    FUN_1000037f0(&DAT_100fb4c40,&DAT_100c32b40);
    pcVar4 = pcVar3;
    FUN_1001b03fc();
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(param_2);
    SVar17.bridgeObject = pcVar4;
    SVar17.str = pcVar3;
    Swift::String::append(SVar10,SVar17);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar12.bridgeObject = (void *)0xe100000000000000;
    SVar12.str = (char *)0x5d;
    SVar18.bridgeObject = pcVar4;
    SVar18.str = pcVar3;
    Swift::String::append(SVar12,SVar18);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1001b11d4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar2 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1001b11d4(puVar7,uVar2 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = 0x6f69747265736e69;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = 0xed00005b203a736e;
  }
  if (*(long *)(param_3 + 0x10) != 0) {
    FUN_1001afe94();
    pcVar3 = &DAT_100fb4c40;
    FUN_1000037f0(&DAT_100fb4c40,&DAT_100c32b40);
    pcVar4 = pcVar3;
    FUN_1001b03fc();
    separator_00.bridgeObject = &SUB_e200000000000000;
    separator_00.str = (char *)0x202c;
    SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_00);
    _swift_bridgeObjectRelease(param_3);
    SVar19.bridgeObject = pcVar4;
    SVar19.str = pcVar3;
    Swift::String::append(SVar10,SVar19);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar13.bridgeObject = (void *)0xe100000000000000;
    SVar13.str = (char *)0x5d;
    SVar20.bridgeObject = pcVar4;
    SVar20.str = pcVar3;
    Swift::String::append(SVar13,SVar20);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1001b11d4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar2 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1001b11d4(puVar7,uVar2 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = 0x5b203a7365766f6d;
    *(undefined1 **)(puVar7 + uVar2 * 0x10 + 0x28) = &DAT_e800000000000000;
  }
  if (*(long *)(param_4 + 0x10) != 0) {
    FUN_1001afc60();
    pcVar3 = &DAT_100fb4c40;
    FUN_1000037f0(&DAT_100fb4c40,&DAT_100c32b40);
    pcVar4 = pcVar3;
    FUN_1001b03fc();
    separator_01.bridgeObject = &SUB_e200000000000000;
    separator_01.str = (char *)0x202c;
    SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_01);
    _swift_bridgeObjectRelease(param_4);
    SVar21.bridgeObject = pcVar4;
    SVar21.str = pcVar3;
    Swift::String::append(SVar10,SVar21);
    _swift_bridgeObjectRelease(SVar10.bridgeObject);
    SVar14.bridgeObject = (void *)0xe100000000000000;
    SVar14.str = (char *)0x5d;
    SVar22.bridgeObject = pcVar4;
    SVar22.str = pcVar3;
    Swift::String::append(SVar14,SVar22);
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    puVar6 = puVar7;
    if (((ulong)puVar5 & 1) == 0) {
      puVar6 = (undefined *)0x0;
      FUN_1001b11d4(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
    }
    uVar2 = *(ulong *)(puVar6 + 0x10);
    puVar7 = puVar6;
    if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar2) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
      FUN_1001b11d4(puVar7,uVar2 + 1,1,puVar6);
    }
    *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x20) = 0x3a73657461647075;
    *(undefined8 *)(puVar7 + uVar2 * 0x10 + 0x28) = 0xea00000000005b20;
  }
  FUN_1000037f0(&DAT_100fb4c40,&DAT_100c32b40);
  FUN_1001b03fc();
  separator_02.bridgeObject = &SUB_e200000000000000;
  separator_02.str = (char *)0x202c;
  SVar10 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator_02);
  _swift_bridgeObjectRelease(puVar7);
  return SVar10;
}



/* Address: 0x1001afc60 | FUN_1001afc60 */

undefined * FUN_1001afc60(long param_1)

{
  _HashTable _Var1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  Bucket BVar6;
  undefined *puVar7;
  long lVar8;
  ulong *puVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar10 = *(long *)(param_1 + 0x10);
  if (lVar10 != 0) {
    FUN_1001b62e4(0,lVar10,0);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar6 = Swift::_HashTable::get_startBucket(_Var1);
    lVar8 = 0;
    do {
      if ((ulong)BVar6.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001afe84);
        (*pcVar5)();
      }
      uVar12 = (ulong)BVar6.offset >> 6;
      uVar13 = 1L << (BVar6.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001afe88);
        (*pcVar5)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      uVar11 = *(undefined8 *)(*(long *)(param_1 + 0x30) + BVar6.offset * 8);
      puVar7 = &DAT_100c32c70;
      _swift_getKeyPath(&DAT_100c32c70);
      local_78 = uVar11;
      _swift_getAtKeyPath(&local_70,&local_78,puVar7);
      _swift_release(puVar7);
      uVar4 = uStack_68;
      uVar11 = local_70;
      uVar15 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar15) {
        FUN_1001b62e4(1 < *(ulong *)(puVar3 + 0x18),uVar15 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar15 + 1;
      *(undefined8 *)(puVar3 + uVar15 * 0x10 + 0x20) = uVar11;
      *(undefined8 *)(puVar3 + uVar15 * 0x10 + 0x28) = uVar4;
      uVar15 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar15 <= (ulong)BVar6.offset) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001afe8c);
        (*pcVar5)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar12 * 8) & uVar13) == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001afe90);
        (*pcVar5)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1001afe94);
        (*pcVar5)();
      }
      uVar13 = *(ulong *)(_Var1.unknown + uVar12 * 8) & -2L << (BVar6.offset & 0x3fU);
      if (uVar13 == 0) {
        lVar14 = uVar12 << 6;
        puVar9 = (ulong *)(param_1 + 0x40 + uVar12 * 8);
        do {
          uVar12 = uVar12 + 1;
          if (uVar15 + 0x3f >> 6 <= uVar12) {
            FUN_10000cae0(BVar6.offset,iVar2,0);
            BVar6.offset = uVar15;
            goto LAB_1001afcfc;
          }
          uVar13 = *puVar9;
          lVar14 = lVar14 + 0x40;
          puVar9 = puVar9 + 1;
        } while (uVar13 == 0);
        FUN_10000cae0(BVar6.offset,iVar2,0);
        uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        BVar6.offset = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) + lVar14;
      }
      else {
        uVar12 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
        uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
        uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
        BVar6.offset = LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) | BVar6.offset & 0x7fffffffffffffc0U
        ;
      }
LAB_1001afcfc:
      lVar8 = lVar8 + 1;
    } while (lVar8 != lVar10);
  }
  return puVar3;
}



/* Address: 0x1001afe94 | FUN_1001afe94 */

undefined * FUN_1001afe94(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  _HashTable _Var1;
  int iVar2;
  undefined *puVar3;
  code *pcVar4;
  Bucket BVar5;
  char *pcVar6;
  long lVar7;
  ulong *puVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != 0) {
    pcVar6 = (char *)0x0;
    FUN_1001b62e4(0,lVar9);
    _Var1.unknown = (undefined *)(param_1 + 0x38);
    BVar5 = Swift::_HashTable::get_startBucket(_Var1);
    lVar7 = 0;
    do {
      if ((ulong)BVar5.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b0134);
        (*pcVar4)();
      }
      uVar13 = (ulong)BVar5.offset >> 6;
      uVar12 = 1L << (BVar5.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b0138);
        (*pcVar4)();
      }
      iVar2 = *(int *)(param_1 + 0x24);
      SVar14 = Swift::CustomStringConvertible::get_description();
      SVar16.bridgeObject = param_4;
      SVar16.str = pcVar6;
      Swift::String::append(SVar14,SVar16);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      SVar14.bridgeObject = (void *)0xa500000000000000;
      SVar14.str = (char *)0x209286e220;
      SVar17.bridgeObject = param_4;
      SVar17.str = pcVar6;
      Swift::String::append(SVar14,SVar17);
      SVar14 = Swift::CustomStringConvertible::get_description();
      SVar18.bridgeObject = param_4;
      SVar18.str = pcVar6;
      Swift::String::append(SVar14,SVar18);
      _swift_bridgeObjectRelease(SVar14.bridgeObject);
      SVar15.bridgeObject = (void *)0xe100000000000000;
      SVar15.str = (char *)0x29;
      SVar19.bridgeObject = param_4;
      SVar19.str = pcVar6;
      Swift::String::append(SVar15,SVar19);
      uVar10 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar10) {
        pcVar6 = &DAT_00000001;
        FUN_1001b62e4(1 < *(ulong *)(puVar3 + 0x18),uVar10 + 1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar10 + 1;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x20) = 0x28;
      *(undefined8 *)(puVar3 + uVar10 * 0x10 + 0x28) = 0xe100000000000000;
      uVar10 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar10 <= (ulong)BVar5.offset) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b013c);
        (*pcVar4)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar13 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b0140);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b0144);
        (*pcVar4)();
      }
      uVar12 = *(ulong *)(_Var1.unknown + uVar13 * 8) & -2L << (BVar5.offset & 0x3fU);
      if (uVar12 == 0) {
        lVar11 = uVar13 << 6;
        puVar8 = (ulong *)(param_1 + 0x40 + uVar13 * 8);
        do {
          uVar13 = uVar13 + 1;
          if (uVar10 + 0x3f >> 6 <= uVar13) {
            pcVar6 = (char *)0x0;
            FUN_10000cae0(BVar5.offset);
            goto LAB_1001aff2c;
          }
          uVar12 = *puVar8;
          lVar11 = lVar11 + 0x40;
          puVar8 = puVar8 + 1;
        } while (uVar12 == 0);
        pcVar6 = (char *)0x0;
        FUN_10000cae0(BVar5.offset);
        uVar13 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) + lVar11;
      }
      else {
        uVar13 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
        uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
        uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
        uVar10 = LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) | BVar5.offset & 0x7fffffffffffffc0U;
      }
LAB_1001aff2c:
      lVar7 = lVar7 + 1;
      BVar5.offset = uVar10;
    } while (lVar7 != lVar9);
  }
  return puVar3;
}



/* Address: 0x1001b0144 | FUN_1001b0144 */

void FUN_1001b0144(void)

{
  undefined8 *unaff_x20;
  
  FUN_1001af758(*unaff_x20,unaff_x20[1],unaff_x20[2],unaff_x20[3]);
  return;
}



/* Address: 0x1001b0150 | FUN_1001b0150 */

long FUN_1001b0150(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  
  _swift_bridgeObjectRetain(param_3);
  FUN_1001b1954(param_3,param_1,FUN_1001b27e0);
  _swift_bridgeObjectRetain();
  FUN_1001b1954();
  _swift_bridgeObjectRetain();
  FUN_1001b1724();
  lVar3 = *(long *)(param_3 + 0x10);
  _swift_release(param_3);
  lVar2 = *(long *)(param_2 + 0x10);
  _swift_release(param_2);
  lVar3 = lVar3 - lVar2;
  lVar2 = *(long *)(param_4 + 0x10);
  _swift_release(param_4);
  if (!SBORROW8(lVar3,lVar2)) {
    return lVar3 - lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b0218);
  (*pcVar1)();
}



/* Address: 0x1001b0218 | FUN_1001b0218 */

undefined8 FUN_1001b0218(__uint64 *param_1,__uint64 param_2,Hasher param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  
  lVar5 = *unaff_x20;
  uVar1 = Swift::Hasher::_hash(*(__int64 *)(lVar5 + 0x28),param_2,param_3);
  uVar4 = -1L << ((ulong)*(byte *)(lVar5 + 0x20) & 0x3f);
  uVar1 = uVar1 & (uVar4 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0) {
    do {
      if (*(__uint64 *)(*(long *)(lVar5 + 0x30) + uVar1 * 8) == param_2) {
        uVar2 = 0;
        goto LAB_1001b02d0;
      }
      uVar1 = uVar1 + 1 & ~uVar4;
    } while ((*(ulong *)(lVar5 + 0x38 + (uVar1 >> 6) * 8) >> (uVar1 & 0x3f) & 1) != 0);
  }
  lVar5 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar5);
  lVar3 = *unaff_x20;
  FUN_1001b044c(param_2,uVar1,lVar5);
  *unaff_x20 = lVar3;
  uVar2 = 1;
LAB_1001b02d0:
  *param_1 = param_2;
  return uVar2;
}



/* Address: 0x1001b02ec | FUN_1001b02ec */

undefined8 FUN_1001b02ec(__uint64 *param_1,undefined *param_2,undefined *param_3)

{
  __uint64 *p_Var1;
  Hasher HVar2;
  ulong uVar3;
  undefined8 uVar4;
  Hasher HVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  
  lVar8 = *unaff_x20;
  HVar5.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  Swift::Hasher::_combine((__uint64)param_2,HVar5);
  HVar2.unknown = param_3;
  Swift::Hasher::_combine((__uint64)param_3,HVar5);
  uVar3 = Swift::Hasher::_finalize(HVar2);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar3 = uVar3 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0) {
    do {
      p_Var1 = (__uint64 *)(*(long *)(lVar8 + 0x30) + uVar3 * 0x10);
      if ((undefined *)*p_Var1 == param_2 && (undefined *)p_Var1[1] == param_3) {
        uVar4 = 0;
        goto LAB_1001b03dc;
      }
      uVar3 = uVar3 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar3 >> 6) * 8) >> (uVar3 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  lVar6 = *unaff_x20;
  FUN_1001b0554(param_2,param_3,uVar3,lVar8);
  *unaff_x20 = lVar6;
  uVar4 = 1;
LAB_1001b03dc:
  *param_1 = (__uint64)param_2;
  param_1[1] = (__uint64)param_3;
  return uVar4;
}



/* Address: 0x1001b03fc | FUN_1001b03fc */

void FUN_1001b03fc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb4c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb4c40;
  FUN_100005c24(&DAT_100fb4c40,&DAT_100c32b40);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fb4c48 = puVar2;
  return;
}



/* Address: 0x1001b044c | FUN_1001b044c */

void FUN_1001b044c(__uint64 param_1,ulong param_2,ulong param_3)

{
  Hasher HVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar4 = (undefined4)(param_3 >> 0x20);
  uVar3 = (undefined4)param_3;
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1001b0ac0();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1001b06a8(uVar6 + 1);
    }
    else {
      FUN_1001b0d44();
    }
    lVar7 = *unaff_x20;
    HVar1.unknown._4_4_ = uVar4;
    HVar1.unknown._0_4_ = uVar3;
    param_2 = Swift::Hasher::_hash(*(__int64 *)(lVar7 + 0x28),param_1,HVar1);
    uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_2 = param_2 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0) {
      do {
        if (*(__uint64 *)(*(long *)(lVar7 + 0x30) + param_2 * 8) == param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0554);
          (*pcVar2)();
        }
        param_2 = param_2 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_2 >> 6) * 8) >> (param_2 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar7 = lVar5 + (param_2 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_2 & 0x3f);
  *(__uint64 *)(*(long *)(lVar5 + 0x30) + param_2 * 8) = param_1;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0544);
  (*pcVar2)();
}



/* Address: 0x1001b0554 | FUN_1001b0554 */

void FUN_1001b0554(__uint64 param_1,undefined *param_2,ulong param_3,uint param_4)

{
  __uint64 *p_Var1;
  code *pcVar2;
  Hasher HVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1001b0c00();
    }
  }
  else {
    HVar4.unknown = param_2;
    if ((param_4 & 1) == 0) {
      FUN_1001b0898(uVar6 + 1);
    }
    else {
      FUN_1001b0f68();
    }
    lVar7 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar7 + 0x28));
    Swift::Hasher::_combine(param_1,HVar4);
    HVar3.unknown = param_2;
    Swift::Hasher::_combine((__uint64)param_2,HVar4);
    param_3 = Swift::Hasher::_finalize(HVar3);
    uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar7 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        p_Var1 = (__uint64 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
        if (*p_Var1 == param_1 && (undefined *)p_Var1[1] == param_2) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b06a8);
          (*pcVar2)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar7 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar5 = *unaff_x20;
  lVar7 = lVar5 + (param_3 >> 6) * 8;
  *(ulong *)(lVar7 + 0x38) = *(ulong *)(lVar7 + 0x38) | 1L << (param_3 & 0x3f);
  p_Var1 = (__uint64 *)(*(long *)(lVar5 + 0x30) + param_3 * 0x10);
  *p_Var1 = param_1;
  p_Var1[1] = (__uint64)param_2;
  if (!SCARRY8(*(long *)(lVar5 + 0x10),1)) {
    *(long *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0698);
  (*pcVar2)();
}



/* Address: 0x1001b06a8 | FUN_1001b06a8 */

void FUN_1001b06a8(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  __uint64 _Var11;
  long lVar12;
  ulong uVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fb4c90;
  FUN_1000037f0(&DAT_100fb4c90,&DAT_100c32c68);
  HVar5.unknown = (undefined *)0x0;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001b0868:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar13 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar13 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar13 = uVar13 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar13 == 0) {
      do {
        lVar12 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0894);
          (*pcVar2)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar12) goto LAB_1001b0868;
        uVar13 = *(ulong *)(original + 0x38 + lVar12 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar13 == 0);
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
    }
    else {
      uVar6 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar13 = uVar13 - 1 & uVar13;
      lVar12 = lVar7;
    }
    _Var11 = *(__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar12 << 6) * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var11,HVar5);
    uVar10 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0898);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar4 != uVar6) {
          uVar8 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var11;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar12;
  } while( true );
}



/* Address: 0x1001b0898 | FUN_1001b0898 */

void FUN_1001b0898(undefined *param_1)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  undefined *puVar3;
  bool bVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  Hasher HVar7;
  ulong uVar8;
  Hasher capacity;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar14;
  ulong uVar15;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fb4c88;
  FUN_1000037f0(&DAT_100fb4c88,&DAT_100c32c60);
  p_Var6 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001b0a88:
    _swift_release(original);
    *unaff_x20 = (long)p_Var6;
    return;
  }
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)(original + 0x38);
  lVar10 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar14 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001b0abc);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar14) goto LAB_1001b0a88;
        uVar15 = *(ulong *)(original + 0x38 + lVar14 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar15 == 0);
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar9 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar14 = lVar10;
    }
    p_Var1 = (__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar9) | lVar14 << 6) * 0x10);
    _Var2 = *p_Var1;
    puVar3 = (undefined *)p_Var1[1];
    Swift::Hasher::init(*(__int64 *)(p_Var6 + 0x28));
    Swift::Hasher::_combine(_Var2,capacity);
    HVar7.unknown = puVar3;
    Swift::Hasher::_combine((__uint64)puVar3,capacity);
    uVar8 = Swift::Hasher::_finalize(HVar7);
    uVar13 = -1L << ((ulong)(byte)p_Var6[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var6 + uVar11 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001b0ac0);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
      } while (*(ulong *)(p_Var6 + uVar11 * 8 + 0x38) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var6 + uVar11 * 8 + 0x38);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var6 + uVar11 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var6 + uVar11 + 0x38);
    p_Var1 = (__uint64 *)(*(long *)(p_Var6 + 0x30) + uVar9 * 0x10);
    *p_Var1 = _Var2;
    p_Var1[1] = (__uint64)puVar3;
    *(long *)(p_Var6 + 0x10) = *(long *)(p_Var6 + 0x10) + 1;
    lVar10 = lVar14;
  } while( true );
}



/* Address: 0x1001b0ac0 | FUN_1001b0ac0 */

void FUN_1001b0ac0(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100fb4c90;
  FUN_1000037f0(&DAT_100fb4c90,&DAT_100c32c68);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0c00);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1001b0be0;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined8 *)(*(long *)(p_Var3 + 0x30) + uVar8 * 8) =
           *(undefined8 *)(*(long *)(original + 0x30) + uVar8 * 8);
    } while( true );
  }
LAB_1001b0be0:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1001b0c00 | FUN_1001b0c00 */

void FUN_1001b0c00(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  code *pcVar4;
  _SetStorage *this;
  __RawSetStorage *p_Var5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  undefined8 uVar11;
  
  this = (_SetStorage *)&DAT_100fb4c88;
  FUN_1000037f0(&DAT_100fb4c88,&DAT_100c32c60);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var5 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar6 = (1L << ((ulong)(byte)p_Var5[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var5 != original || p_Var1 + uVar6 * 8 <= p_Var5 + 0x38) {
      _memmove(p_Var5 + 0x38,p_Var1,uVar6 << 3);
    }
    lVar7 = 0;
    *(undefined8 *)(p_Var5 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x38);
    lVar9 = lVar7;
    if (uVar6 == 0) goto LAB_1001b0cd8;
    do {
      uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 - 1 & uVar6;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 << 6;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + uVar10 * 0x10);
        uVar11 = *puVar2;
        puVar3 = (undefined8 *)(*(long *)(p_Var5 + 0x30) + uVar10 * 0x10);
        puVar3[1] = puVar2[1];
        *puVar3 = uVar11;
        lVar9 = lVar7;
        if (uVar6 != 0) break;
LAB_1001b0cd8:
        do {
          lVar7 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b0d44);
            (*pcVar4)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar7) goto LAB_1001b0d24;
          uVar6 = *(ulong *)(p_Var1 + lVar7 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar10 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 - 1 & uVar6;
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | lVar7 * 0x40;
      }
    } while( true );
  }
LAB_1001b0d24:
  _swift_release(original);
  *unaff_x20 = (long)p_Var5;
  return;
}



/* Address: 0x1001b0d44 | FUN_1001b0d44 */

void FUN_1001b0d44(long param_1)

{
  __int64 capacity;
  bool bVar1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong uVar12;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var13;
  __uint64 _Var14;
  long lVar15;
  ulong uVar16;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100fb4c90;
  FUN_1000037f0(&DAT_100fb4c90,&DAT_100c32c68);
  HVar5.unknown = &DAT_00000001;
  p_Var3 = original;
  Swift::_SetStorage::_resize(this,original,capacity,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001b0f34:
    _swift_release(original);
    *unaff_x20 = (long)p_Var3;
    return;
  }
  p_Var13 = original + 0x38;
  bVar10 = (byte)original[0x20] & 0x3f;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar12 = -1L << (uVar9 & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (bVar10 < 6) {
    uVar16 = ~uVar12;
  }
  uVar16 = uVar16 & *(ulong *)p_Var13;
  uVar9 = uVar9 + 0x3f >> 6;
  lVar7 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0f64);
          (*pcVar2)();
        }
        if ((long)uVar9 <= lVar15) {
          if (bVar10 < 6) {
            *(ulong *)p_Var13 = uVar12;
          }
          else {
            _bzero(p_Var13,uVar9 << 3);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001b0f34;
        }
        uVar16 = *(ulong *)(p_Var13 + lVar15 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar16 == 0);
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar6 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar7;
    }
    _Var14 = *(__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar15 << 6) * 8);
    uVar4 = Swift::Hasher::_hash(*(__int64 *)(p_Var3 + 0x28),_Var14,HVar5);
    uVar11 = -1L << ((ulong)(byte)p_Var3[0x20] & 0x3f);
    uVar4 = uVar4 & (uVar11 ^ 0xffffffffffffffff);
    uVar8 = uVar4 >> 6;
    uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar1 = false;
      uVar6 = 0x3f - uVar11 >> 6;
      do {
        uVar4 = uVar8 + 1;
        if ((uVar4 == uVar6) && (bVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b0f68);
          (*pcVar2)();
        }
        uVar8 = 0;
        if (uVar4 != uVar6) {
          uVar8 = uVar4;
        }
        bVar1 = (bool)(uVar4 == uVar6 | bVar1);
      } while (*(ulong *)(p_Var3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var3 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var3 + uVar8 + 0x38);
    *(__uint64 *)(*(long *)(p_Var3 + 0x30) + uVar6 * 8) = _Var14;
    *(long *)(p_Var3 + 0x10) = *(long *)(p_Var3 + 0x10) + 1;
    lVar7 = lVar15;
  } while( true );
}



/* Address: 0x1001b0f68 | FUN_1001b0f68 */

void FUN_1001b0f68(undefined *param_1)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  undefined *puVar3;
  bool bVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  Hasher HVar7;
  ulong uVar8;
  Hasher capacity;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var14;
  long lVar15;
  ulong uVar16;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100fb4c88;
  FUN_1000037f0(&DAT_100fb4c88,&DAT_100c32c60);
  p_Var6 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1001b11a0:
    _swift_release(original);
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var14 = original + 0x38;
  uVar12 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar12 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)p_Var14;
  lVar10 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar10 + 1;
        if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001b11d0);
          (*pcVar5)();
        }
        if ((long)(uVar12 + 0x3f >> 6) <= lVar15) {
          uVar16 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var14 = -1L << (uVar16 & 0x3f);
          }
          else {
            _bzero(p_Var14,uVar16 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1001b11a0;
        }
        uVar16 = *(ulong *)(p_Var14 + lVar15 * 8);
        lVar10 = lVar10 + 1;
      } while (uVar16 == 0);
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar9 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar10;
    }
    p_Var1 = (__uint64 *)(*(long *)(original + 0x30) + (LZCOUNT(uVar9) | lVar15 << 6) * 0x10);
    _Var2 = *p_Var1;
    puVar3 = (undefined *)p_Var1[1];
    Swift::Hasher::init(*(__int64 *)(p_Var6 + 0x28));
    Swift::Hasher::_combine(_Var2,capacity);
    HVar7.unknown = puVar3;
    Swift::Hasher::_combine((__uint64)puVar3,capacity);
    uVar8 = Swift::Hasher::_finalize(HVar7);
    uVar13 = -1L << ((ulong)(byte)p_Var6[0x20] & 0x3f);
    uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
    uVar11 = uVar8 >> 6;
    uVar9 = -1L << (uVar8 & 0x3f) & (*(ulong *)(p_Var6 + uVar11 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar9 == 0) {
      bVar4 = false;
      uVar9 = 0x3f - uVar13 >> 6;
      do {
        uVar8 = uVar11 + 1;
        if ((uVar8 == uVar9) && (bVar4)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1001b11d4);
          (*pcVar5)();
        }
        uVar11 = 0;
        if (uVar8 != uVar9) {
          uVar11 = uVar8;
        }
        bVar4 = (bool)(uVar8 == uVar9 | bVar4);
      } while (*(ulong *)(p_Var6 + uVar11 * 8 + 0x38) == 0xffffffffffffffff);
      uVar9 = ~*(ulong *)(p_Var6 + uVar11 * 8 + 0x38);
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar11 << 6;
    }
    else {
      uVar9 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | uVar8 & 0x7fffffffffffffc0;
    }
    uVar11 = uVar9 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var6 + uVar11 + 0x38) = 1L << (uVar9 & 0x3f) | *(ulong *)(p_Var6 + uVar11 + 0x38);
    p_Var1 = (__uint64 *)(*(long *)(p_Var6 + 0x30) + uVar9 * 0x10);
    *p_Var1 = _Var2;
    p_Var1[1] = (__uint64)puVar3;
    *(long *)(p_Var6 + 0x10) = *(long *)(p_Var6 + 0x10) + 1;
    lVar10 = lVar15;
  } while( true );
}



/* Address: 0x1001b11d4 | FUN_1001b11d4 */

undefined * FUN_1001b11d4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b12dc);
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
    puVar3 = &DAT_100fb4ca0;
    FUN_1000037f0(&DAT_100fb4ca0,&DAT_100c32ca8);
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
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001b12dc | FUN_1001b12dc */

undefined * FUN_1001b12dc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b13f4);
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
    puVar3 = &DAT_100fb4c70;
    FUN_1000037f0(&DAT_100fb4c70,&DAT_100c32e20);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,uVar6 * 0x18);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001b13f4 | FUN_1001b13f4 */

undefined * FUN_1001b13f4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b14f4);
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
    puVar3 = &DAT_100fb4c58;
    FUN_1000037f0(&DAT_100fb4c58,&DAT_100c32c30);
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



/* Address: 0x1001b14f4 | FUN_1001b14f4 */

undefined * FUN_1001b14f4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b1624);
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
    puVar3 = &DAT_100fb4c60;
    FUN_1000037f0(&DAT_100fb4c60,&DAT_100c32c38);
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
    puVar5 = &DAT_100fb4c68;
    FUN_1000037f0(&DAT_100fb4c68,&DAT_100c32c40);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1001b1624 | FUN_1001b1624 */

undefined * FUN_1001b1624(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fb4c58;
    FUN_1000037f0(&DAT_100fb4c58,&DAT_100c32c30);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x19;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  return puVar2;
}



/* Address: 0x1001b16a4 | FUN_1001b16a4 */

undefined * FUN_1001b16a4(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar2 = &DAT_100fb4c78;
    FUN_1000037f0(&DAT_100fb4c78,&DAT_100c32c50);
    _swift_allocObject();
    puVar3 = puVar2;
    _malloc_size();
    puVar1 = puVar3 + -0x11;
    if (0x1f < (long)puVar3) {
      puVar1 = puVar3 + -0x20;
    }
    *(long *)(puVar2 + 0x10) = param_1;
    *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  return puVar2;
}



/* Address: 0x1001b1724 | FUN_1001b1724 */

undefined1 * FUN_1001b1724(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  size_t sVar6;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80 [4];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar6 = uVar5 * 8;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar1 & 1) == 0) ||
       (sVar4 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar4 & 1) == 0)) {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      FUN_1001b268c(local_80);
      puVar2 = local_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = local_88;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x0001001b1908;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = auStack_90 + -(sVar6 + 0xf & 0x1ffffffffffffff0);
  _bzero(puVar2,sVar6);
  FUN_1001b1dac(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_release(param_1);
joined_r0x0001001b1908:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_release(param_1);
  }
  else {
    local_88 = puVar2;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100fb4c80;
      FUN_1000037f0(&DAT_100fb4c80,&DAT_100c32c58);
      _swift_willThrowTypedImpl
                (&local_88,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}



/* Address: 0x1001b1954 | FUN_1001b1954 */

undefined1 * FUN_1001b1954(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  size_t sVar6;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80 [4];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar6 = uVar5 * 8;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain(param_1);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_retain(param_1);
    if (((bVar1 & 1) == 0) ||
       (sVar4 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar4 & 1) == 0)) {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      FUN_1001b268c(local_80);
      puVar2 = local_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = local_88;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x0001001b1b38;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = auStack_90 + -(sVar6 + 0xf & 0x1ffffffffffffff0);
  _bzero(puVar2,sVar6);
  FUN_1001b2018(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_release(param_1);
joined_r0x0001001b1b38:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_release(param_1);
  }
  else {
    local_88 = puVar2;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100fb4c80;
      FUN_1000037f0(&DAT_100fb4c80,&DAT_100c32c58);
      _swift_willThrowTypedImpl
                (&local_88,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}



/* Address: 0x1001b1b84 | thunk_FUN_1001b1b88 */

void thunk_FUN_1001b1b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32b88,&DAT_100ebe460);
  DAT_100fb4c50 = pTVar1;
  return;
}



/* Address: 0x1001b1b88 | FUN_1001b1b88 */

void FUN_1001b1b88(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fb4c50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c32b88;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32b88,&DAT_100ebe460);
  DAT_100fb4c50 = pTVar1;
  return;
}



/* Address: 0x1001b1bc8 | FUN_1001b1bc8 */

undefined1  [16] FUN_1001b1bc8(void)

{
  return ZEXT816(0x100ebe360);
}



/* Address: 0x1001b1bd8 | FUN_1001b1bd8 */

void FUN_1001b1bd8(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[2]);
  _swift_bridgeObjectRelease(param_1[3]);
  return;
}



/* Address: 0x1001b1c10 | FUN_1001b1c10 */

undefined8 * FUN_1001b1c10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1001b1c78 | FUN_1001b1c78 */

undefined8 * FUN_1001b1c78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1001b1d04 | FUN_1001b1d04 */

void FUN_1001b1d04(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1001b1d10 | FUN_1001b1d10 */

undefined8 * FUN_1001b1d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRelease(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[2]);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1001b1d64 | FUN_1001b1d64 */

undefined1  [16] FUN_1001b1d64(void)

{
  return ZEXT816(0x100ebe3d8);
}



/* Address: 0x1001b1d74 | FUN_1001b1d74 */

void FUN_1001b1d74(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x1001b1d80 | FUN_1001b1d80 */

void FUN_1001b1d80(void)

{
  return;
}



/* Address: 0x1001b1d84 | FUN_1001b1d84 */

undefined1  [16] FUN_1001b1d84(void)

{
  return ZEXT816(0x100ebe460);
}



/* Address: 0x1001b1d94 | FUN_1001b1d94 */

bool FUN_1001b1d94(long *param_1)

{
  long unaff_x20;
  
  return *param_1 < *(long *)(unaff_x20 + 0x10) && *(long *)(unaff_x20 + 0x10) < param_1[1];
}



/* Address: 0x1001b1dac | FUN_1001b1dac */

void FUN_1001b1dac(long param_1,undefined8 param_2,long param_3,long param_4)

{
  long *plVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  lVar10 = 0;
  lVar4 = 0;
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar5 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar5 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar5 = uVar5 & *(ulong *)(param_3 + 0x38);
  do {
    lVar6 = lVar4;
    if (uVar5 == 0) {
      do {
        lVar4 = lVar6 + 1;
        if (SCARRY8(lVar6,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b1ed0);
          (*pcVar2)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar4) {
          _swift_retain(param_3);
          FUN_1001b2270(param_1,param_2,lVar10,param_3);
          return;
        }
        uVar5 = ((ulong *)(param_3 + 0x38))[lVar4];
        lVar6 = lVar6 + 1;
      } while (uVar5 == 0);
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 * 0x40;
    }
    else {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar5 = uVar5 - 1 & uVar5;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar4 << 6;
    }
    plVar1 = (long *)(*(long *)(param_3 + 0x30) + uVar7 * 0x10);
    if ((*plVar1 < param_4) && (param_4 < plVar1[1])) {
      uVar9 = uVar7 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar9) = *(ulong *)(param_1 + uVar9) | 1L << (uVar7 & 0x3f);
      bVar3 = SCARRY8(lVar10,1);
      lVar10 = lVar10 + 1;
      if (bVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1001b1e9c);
        (*pcVar2)();
      }
    }
  } while( true );
}



/* Address: 0x1001b1ed0 | FUN_1001b1ed0 */

void FUN_1001b1ed0(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x38);
  lVar4 = 0;
  do {
    if (uVar7 == 0) {
      do {
        lVar9 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2018);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar9) {
          _swift_retain(param_3);
          FUN_1001b2270(param_1,param_2,lVar8,param_3);
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x38))[lVar9];
        lVar4 = lVar4 + 1;
      } while (uVar7 == 0);
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
    }
    else {
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar4;
    }
    uVar5 = 0;
    (*param_4)();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = lVar9;
    if ((uVar5 & 1) != 0) {
      uVar5 = (LZCOUNT(uVar3) & 0xffffffffffffffc0U | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (LZCOUNT(uVar3) & 0x3fU);
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b1fd0);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Address: 0x1001b2018 | FUN_1001b2018 */

void FUN_1001b2018(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  
  lVar9 = 0;
  lVar3 = 0;
  uVar7 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar4 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar4 = ~(-1L << (uVar7 & 0x3f));
  }
  uVar4 = uVar4 & *(ulong *)(param_3 + 0x38);
  do {
    lVar5 = lVar3;
    if (uVar4 == 0) {
      do {
        lVar3 = lVar5 + 1;
        if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b212c);
          (*pcVar1)();
        }
        if ((long)(uVar7 + 0x3f >> 6) <= lVar3) {
          _swift_retain(param_3);
          FUN_1001b2490(param_1,param_2,lVar9,param_3);
          return;
        }
        uVar4 = ((ulong *)(param_3 + 0x38))[lVar3];
        lVar5 = lVar5 + 1;
      } while (uVar4 == 0);
      uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar3 * 0x40;
    }
    else {
      uVar6 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar4 = uVar4 - 1 & uVar4;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | lVar3 << 6;
    }
    if (*(long *)(*(long *)(param_3 + 0x30) + uVar6 * 8) < param_4) {
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(param_1 + uVar8) = *(ulong *)(param_1 + uVar8) | 1L << (uVar6 & 0x3f);
      bVar2 = SCARRY8(lVar9,1);
      lVar9 = lVar9 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b20f8);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Address: 0x1001b212c | FUN_1001b212c */

void FUN_1001b212c(long param_1,undefined8 param_2,long param_3,code *param_4)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long unaff_x21;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  lVar8 = 0;
  uVar6 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar6 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(param_3 + 0x38);
  lVar4 = 0;
  do {
    if (uVar7 == 0) {
      do {
        lVar9 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2270);
          (*pcVar1)();
        }
        if ((long)(uVar6 + 0x3f >> 6) <= lVar9) {
          _swift_retain(param_3);
          FUN_1001b2490(param_1,param_2,lVar8,param_3);
          return;
        }
        uVar7 = ((ulong *)(param_3 + 0x38))[lVar9];
        lVar4 = lVar4 + 1;
      } while (uVar7 == 0);
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
    }
    else {
      uVar3 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      uVar3 = uVar3 >> 0x20 | uVar3 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar9 = lVar4;
    }
    uVar5 = 0;
    (*param_4)();
    if (unaff_x21 != 0) {
      return;
    }
    lVar4 = lVar9;
    if ((uVar5 & 1) != 0) {
      uVar5 = (LZCOUNT(uVar3) & 0xffffffffffffffc0U | lVar9 << 6) >> 3;
      *(ulong *)(param_1 + uVar5) = *(ulong *)(param_1 + uVar5) | 1L << (LZCOUNT(uVar3) & 0x3fU);
      bVar2 = SCARRY8(lVar8,1);
      lVar8 = lVar8 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b222c);
        (*pcVar1)();
      }
    }
  } while( true );
}



/* Address: 0x1001b2270 | FUN_1001b2270 */

undefined * FUN_1001b2270(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  __uint64 *p_Var1;
  __uint64 _Var2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  _SetStorage *this;
  undefined *puVar6;
  Hasher HVar7;
  ulong uVar8;
  Hasher HVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  
  puVar6 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100fb4c88;
    HVar9.unknown = &DAT_100c32c60;
    FUN_1000037f0();
    puVar6 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar14 = 0;
    }
    else {
      uVar14 = *param_1;
    }
    lVar11 = 0;
    do {
      if (uVar14 == 0) {
        do {
          lVar15 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b2488);
            (*pcVar4)();
          }
          if (param_2 <= lVar15) goto LAB_1001b22ec;
          uVar14 = param_1[lVar15];
          lVar11 = lVar11 + 1;
        } while (uVar14 == 0);
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
      }
      else {
        uVar10 = (uVar14 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar14 & 0x5555555555555555) << 1;
        uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
        uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
        uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
        uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
        uVar14 = uVar14 - 1 & uVar14;
        lVar15 = lVar11;
      }
      p_Var1 = (__uint64 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
      _Var2 = *p_Var1;
      puVar3 = (undefined *)p_Var1[1];
      Swift::Hasher::init(*(__int64 *)(puVar6 + 0x28));
      Swift::Hasher::_combine(_Var2,HVar9);
      HVar7.unknown = puVar3;
      Swift::Hasher::_combine((__uint64)puVar3,HVar9);
      uVar8 = Swift::Hasher::_finalize(HVar7);
      uVar13 = -1L << ((ulong)(byte)puVar6[0x20] & 0x3f);
      uVar8 = uVar8 & (uVar13 ^ 0xffffffffffffffff);
      uVar12 = uVar8 >> 6;
      uVar10 = -1L << (uVar8 & 0x3f) & (*(ulong *)(puVar6 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff)
      ;
      if (uVar10 == 0) {
        bVar5 = false;
        uVar10 = 0x3f - uVar13 >> 6;
        do {
          uVar8 = uVar12 + 1;
          if ((uVar8 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b248c);
            (*pcVar4)();
          }
          uVar12 = 0;
          if (uVar8 != uVar10) {
            uVar12 = uVar8;
          }
          bVar5 = (bool)(uVar8 == uVar10 | bVar5);
        } while (*(ulong *)(puVar6 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
        uVar10 = ~*(ulong *)(puVar6 + uVar12 * 8 + 0x38);
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
        uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar8 & 0x7fffffffffffffc0;
      }
      uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar6 + uVar12 + 0x38) =
           1L << (uVar10 & 0x3f) | *(ulong *)(puVar6 + uVar12 + 0x38);
      p_Var1 = (__uint64 *)(*(long *)(puVar6 + 0x30) + uVar10 * 0x10);
      *p_Var1 = _Var2;
      p_Var1[1] = (__uint64)puVar3;
      *(long *)(puVar6 + 0x10) = *(long *)(puVar6 + 0x10) + 1;
      bVar5 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001b2490);
        (*pcVar4)();
      }
      lVar11 = lVar15;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1001b22ec:
  _swift_release(param_4);
  return puVar6;
}



/* Address: 0x1001b2490 | FUN_1001b2490 */

undefined * FUN_1001b2490(ulong *param_1,long param_2,undefined *param_3,undefined *param_4)

{
  code *pcVar1;
  bool bVar2;
  _SetStorage *this;
  undefined *puVar3;
  ulong uVar4;
  Hasher HVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  __uint64 _Var10;
  long lVar11;
  ulong uVar12;
  
  puVar3 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (param_3 != (undefined *)0x0) {
    if (param_3 == *(undefined **)(param_4 + 0x10)) {
      return param_4;
    }
    this = (_SetStorage *)&DAT_100fb4c90;
    HVar5.unknown = param_3;
    FUN_1000037f0(&DAT_100fb4c90,&DAT_100c32c68);
    puVar3 = param_3;
    Swift::_SetStorage::_allocate(this,(__int64)param_3);
    if (param_2 < 1) {
      uVar12 = 0;
    }
    else {
      uVar12 = *param_1;
    }
    lVar7 = 0;
    do {
      if (uVar12 == 0) {
        do {
          lVar11 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2670);
            (*pcVar1)();
          }
          if (param_2 <= lVar11) goto LAB_1001b2508;
          uVar12 = param_1[lVar11];
          lVar7 = lVar7 + 1;
        } while (uVar12 == 0);
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
      }
      else {
        uVar6 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
        uVar12 = uVar12 - 1 & uVar12;
        lVar11 = lVar7;
      }
      _Var10 = *(__uint64 *)(*(long *)(param_4 + 0x30) + (LZCOUNT(uVar6) | lVar11 << 6) * 8);
      uVar4 = Swift::Hasher::_hash(*(__int64 *)(puVar3 + 0x28),_Var10,HVar5);
      uVar9 = -1L << ((ulong)(byte)puVar3[0x20] & 0x3f);
      uVar4 = uVar4 & (uVar9 ^ 0xffffffffffffffff);
      uVar8 = uVar4 >> 6;
      uVar6 = -1L << (uVar4 & 0x3f) & (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
      if (uVar6 == 0) {
        bVar2 = false;
        uVar6 = 0x3f - uVar9 >> 6;
        do {
          uVar4 = uVar8 + 1;
          if ((uVar4 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2674);
            (*pcVar1)();
          }
          uVar8 = 0;
          if (uVar4 != uVar6) {
            uVar8 = uVar4;
          }
          bVar2 = (bool)(uVar4 == uVar6 | bVar2);
        } while (*(ulong *)(puVar3 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
        uVar6 = ~*(ulong *)(puVar3 + uVar8 * 8 + 0x38);
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
      }
      else {
        uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
        uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
        uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
        uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar4 & 0x7fffffffffffffc0;
      }
      uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar3 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(puVar3 + uVar8 + 0x38);
      *(__uint64 *)(*(long *)(puVar3 + 0x30) + uVar6 * 8) = _Var10;
      *(long *)(puVar3 + 0x10) = *(long *)(puVar3 + 0x10) + 1;
      bVar2 = SBORROW8((long)param_3,1);
      param_3 = param_3 + -1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2678);
        (*pcVar1)();
      }
      lVar7 = lVar11;
    } while (param_3 != (undefined *)0x0);
  }
LAB_1001b2508:
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1001b2678 | FUN_1001b2678 */

bool FUN_1001b2678(long *param_1)

{
  long unaff_x20;
  
  return *param_1 < *(long *)(unaff_x20 + 0x10);
}



/* Address: 0x1001b268c | FUN_1001b268c */

void FUN_1001b268c(undefined8 *param_1,void *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long *param_7,code *param_8)

{
  code *pcVar1;
  long unaff_x21;
  
  if (param_2 == (void *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2764);
    (*pcVar1)();
  }
  if (-1 < param_3) {
    if (param_3 != 0) {
      _bzero(param_2,param_3 << 3);
    }
    _swift_retain(param_4);
    (*param_8)(param_2,param_3,param_4,param_5,param_6);
    _swift_release(param_4);
    if (unaff_x21 == 0) {
      *param_1 = param_2;
      _swift_release(param_4);
    }
    else {
      *param_7 = unaff_x21;
      _swift_release(param_4);
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2760);
  (*pcVar1)();
}



/* Address: 0x1001b2764 | thunk_FUN_1001b2768 */

void thunk_FUN_1001b2768(void)

{
  FUN_1001b2768();
  return;
}



/* Address: 0x1001b2768 | FUN_1001b2768 */

void FUN_1001b2768(void)

{
  undefined *puVar1;
  
  if (DAT_100fb4c98 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fb4c98 = puVar1;
  return;
}



/* Address: 0x1001b27a8 | FUN_1001b27a8 */

void FUN_1001b27a8(String *param_1)

{
  String SVar1;
  
  FUN_1001b2768();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  *param_1 = SVar1;
  return;
}



/* Address: 0x1001b27e0 | FUN_1001b27e0 */

uint FUN_1001b27e0(uint param_1)

{
  FUN_1001b2678();
  return param_1 & 1;
}



/* Address: 0x1001b27f8 | FUN_1001b27f8 */

void FUN_1001b27f8(undefined1 param_1)

{
  undefined1 *unaff_x20;
  
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1001b2800 | FUN_1001b2800 */

void FUN_1001b2800(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x1001b2808 | FUN_1001b2808 */

void FUN_1001b2808(undefined8 param_1)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  return;
}



/* Address: 0x1001b2810 | FUN_1001b2810 */

void FUN_1001b2810(void)

{
  return;
}



/* Address: 0x1001b2820 | FUN_1001b2820 */

bool FUN_1001b2820(char param_1,long param_2,long param_3,char param_4,long param_5,long param_6)

{
  return (param_1 == param_4 && param_2 == param_5) && param_3 == param_6;
}



/* Address: 0x1001b2838 | FUN_1001b2838 */

bool FUN_1001b2838(char *param_1,char *param_2)

{
  if (*param_1 != *param_2 || *(long *)(param_1 + 8) != *(long *)(param_2 + 8)) {
    return false;
  }
  return *(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10);
}



/* Address: 0x1001b2870 | FUN_1001b2870 */

long FUN_1001b2870(undefined8 param_1,long param_2,long param_3)

{
  code *pcVar1;
  
  if (!SBORROW8(param_2,param_3)) {
    return param_2 - param_3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b2880);
  (*pcVar1)();
}



/* Address: 0x1001b2880 | FUN_1001b2880 */

bool FUN_1001b2880(char param_1)

{
  return param_1 == '\x02';
}



/* Address: 0x1001b2890 | FUN_1001b2890 */

bool FUN_1001b2890(char param_1)

{
  return param_1 == '\x01';
}


