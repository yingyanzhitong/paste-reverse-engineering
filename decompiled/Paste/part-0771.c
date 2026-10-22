/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100877f74 | FUN_100877f74 */

void FUN_100877f74(void)

{
  FUN_1008781e8();
  return;
}



/* Address: 0x100877f88 | FUN_100877f88 */

void FUN_100877f88(void)

{
  FUN_100878244();
  return;
}



/* Address: 0x100877f9c | FUN_100877f9c */

void FUN_100877f9c(void)

{
  FUN_1008782ec();
  return;
}



/* Address: 0x100877fb0 | thunk_FUN_100877a08 */

/* WARNING: Removing unreachable block (ram,0x000100877b30) */
/* WARNING: Removing unreachable block (ram,0x000100877e6c) */
/* WARNING: Removing unreachable block (ram,0x000100877b40) */
/* WARNING: Removing unreachable block (ram,0x000100877b60) */
/* WARNING: Removing unreachable block (ram,0x000100877ea0) */

void thunk_FUN_100877a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  bool bVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar11;
  undefined *puVar12;
  char *pcVar13;
  undefined8 uVar15;
  undefined *puVar16;
  char *pcVar17;
  char *pcVar18;
  long unaff_x20;
  char *pcVar19;
  String SVar21;
  char *pcStack_f0;
  undefined *puStack_e8;
  undefined8 uStack_e0;
  undefined *puStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_af;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  _StringGuts _Var14;
  String SVar20;
  
  pcVar8 = &DAT_100fe8bf0;
  puVar11 = &DAT_100c7f0f0;
  uVar15 = param_3;
  FUN_1000f7830();
  FUN_100876acc();
  cVar4 = (char)((ulong)uVar15 >> 0x38);
  pcVar18 = pcVar8;
  if (cVar4 == '\0') {
    uVar2 = *(undefined1 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x11);
    _swift_retain(pcVar8);
    _swift_bridgeObjectRetain(puVar11);
    puVar12 = puVar11;
    FUN_10087b074(pcVar8,puVar11,uVar15,uVar2,uVar3);
    _swift_bridgeObjectRelease(puVar11);
    _swift_release(pcVar8);
    uStack_e0 = 0;
    puStack_d8 = &DAT_100f08218;
    uStack_af = 2;
    pcStack_f0 = pcVar18;
    puStack_e8 = puVar12;
    _swift_retain(pcVar18);
    _swift_retain(puVar12);
    FUN_100626ebc(&pcStack_f0,param_3);
    _swift_bridgeObjectRelease(puVar11);
    _swift_release(pcVar8);
    _swift_release(puVar12);
  }
  else {
    if (cVar4 == '\x01') {
      if ((long)pcVar8 < 0) {
        SVar20.bridgeObject = (void *)0x2;
        SVar20.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar20,(StaticString)0xd000000000000019,
                   0x8000000100db2a90,0xdb2a80);
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100877f74);
        (*pcVar6)();
      }
      puStack_d8 = &DAT_100f08218;
      uStack_e0 = CONCAT17(1,(int7)uVar15);
      uStack_af = 2;
      pcStack_f0 = pcVar8;
      puStack_e8 = puVar11;
      FUN_100656200(pcVar8,puVar11,uVar15);
      FUN_100626ebc(&pcStack_f0,param_3);
      FUN_100878fe8(pcVar8,puVar11,uVar15,1);
      goto LAB_100877e44;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar18 = (char *)0x0;
    }
    else {
      thunk_FUN_10085c548();
      FUN_1005f4d50(pcVar8,puVar11);
      FUN_10085d7bc();
      pcVar19 = pcVar8;
      FUN_1005f4d50(pcVar8,puVar11);
      if (pcVar19 != (char *)0x0) {
        pcVar19 = (char *)0x0;
        bVar5 = true;
        do {
          pcVar10 = pcVar19;
          pcVar9 = pcVar8;
          puVar12 = puVar11;
          FUN_10089ff10(pcVar19,pcVar8,puVar11);
          pcVar1 = pcVar19 + 1;
          if (SCARRY8((long)pcVar19,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100877f28);
            (*pcVar6)();
          }
          puVar16 = puVar12;
          pcVar17 = param_4;
          if (bVar5) {
            SVar21.bridgeObject = pcVar9;
            SVar21.str = pcVar10;
            SVar20 = Swift::String::lowercased(SVar21);
            _Var14.unknown = SVar20.bridgeObject;
            if ((SVar20.str == (undefined *)0x74736f68) && (_Var14.unknown == &DAT_e400000000000000)
               ) {
              _swift_bridgeObjectRelease(param_4);
              _swift_bridgeObjectRelease(pcVar9);
              pcVar9 = &DAT_e400000000000000;
            }
            else {
              puVar16 = (undefined *)0x74736f68;
              pcVar17 = &DAT_e400000000000000;
              bVar7 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar20.str,_Var14,(_StringComparisonResult)0x68);
              _swift_bridgeObjectRelease(_Var14.unknown);
              if (!bVar7) goto LAB_100877c0c;
              _swift_bridgeObjectRelease(param_4);
            }
            _swift_bridgeObjectRelease(pcVar9);
            bVar5 = false;
          }
          else {
LAB_100877c0c:
            _swift_bridgeObjectRetain(pcVar9);
            pcVar13 = pcVar9;
            thunk_FUN_10085af9c(pcVar10);
            if (pcVar13 == (char *)0x0) {
              _swift_bridgeObjectRelease(param_4);
              _swift_bridgeObjectRelease(pcVar9);
            }
            else {
              _swift_bridgeObjectRelease(pcVar9);
              FUN_100857650(&pcStack_a0,pcVar10,pcVar13,puVar16,pcVar17,puVar12,param_4);
              puStack_e8 = (undefined *)uStack_98;
              pcStack_f0 = pcStack_a0;
              puStack_d8 = (undefined *)uStack_88;
              uStack_e0 = uStack_90;
              uStack_c8 = uStack_78;
              uStack_d0 = uStack_80;
              uStack_c0 = uStack_70;
              pcVar17 = pcVar18;
              FUN_10085d8f8();
              FUN_1008777d8();
              Swift::RangeReplaceableCollection::_insert();
            }
          }
          pcVar9 = pcVar8;
          FUN_1005f4d50(pcVar8,puVar11);
          pcVar19 = pcVar19 + 1;
          param_4 = pcVar17;
        } while (pcVar1 != pcVar9);
      }
      FUN_100878fe8(pcVar8,puVar11,uVar15,2);
    }
    puStack_e8 = (undefined *)0x0;
    uStack_e0 = 0x200000000000000;
    puStack_d8 = &DAT_100f08218;
    uStack_af = 2;
    pcStack_f0 = pcVar18;
    _swift_retain(pcVar18);
    FUN_100626ebc(&pcStack_f0,param_3);
  }
  _swift_release(pcVar18);
LAB_100877e44:
  FUN_1005e70f4(&pcStack_f0);
  return;
}



/* Address: 0x100877fb4 | FUN_100877fb4 */

/* WARNING: Removing unreachable block (ram,0x000100878094) */

void FUN_100877fb4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  uint uVar6;
  long unaff_x20;
  undefined *puVar7;
  undefined *local_88;
  ulong uStack_80;
  undefined8 local_78;
  undefined *local_70;
  undefined1 local_47;
  
  puVar2 = &DAT_100f08218;
  thunk_FUN_1008766f0();
  cVar1 = (char)((ulong)param_3 >> 0x38);
  if (cVar1 == '\0') {
    uVar6 = (uint)*(byte *)(unaff_x20 + 0x10);
    _swift_retain(puVar2);
    _swift_retain(param_2);
    puVar3 = puVar2;
    uVar4 = param_2;
    FUN_1008790c8();
    puVar7 = &DAT_100fe8bf8;
    FUN_1000f7830(&DAT_100fe8bf8,&DAT_100c7f0f8);
    local_78 = (ulong)(uVar6 & 0xff);
    local_47 = 2;
    local_88 = puVar3;
    uStack_80 = uVar4;
    local_70 = puVar7;
    _swift_retain(puVar3);
    _swift_bridgeObjectRetain(uVar4);
    FUN_100626ce0(&local_88);
    _swift_release(param_2);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
    _swift_release(puVar3);
  }
  else {
    if (cVar1 == '\x01') {
      puVar7 = &DAT_100fe8bf8;
      FUN_1000f7830(&DAT_100fe8bf8,&DAT_100c7f0f8);
      local_78 = CONCAT17(1,(int7)param_3);
      local_47 = 2;
      local_88 = puVar2;
      uStack_80 = param_2;
      local_70 = puVar7;
      _swift_retain(puVar2);
      FUN_100626ce0(&local_88);
      uVar5 = 1;
    }
    else {
      if (puVar2 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        uStack_80 = 0;
      }
      else {
        puVar7 = puVar2;
        uVar4 = param_2;
        _swift_retain();
        FUN_1008794bc();
        uStack_80 = uVar4 & 0xff;
      }
      puVar3 = &DAT_100fe8bf8;
      FUN_1000f7830(&DAT_100fe8bf8,&DAT_100c7f0f8);
      local_78 = 0x200000000000000;
      local_47 = 2;
      local_88 = puVar7;
      local_70 = puVar3;
      FUN_100626ce0(&local_88);
      uVar5 = 2;
    }
    FUN_100875938(puVar2,param_2,param_3,uVar5);
  }
  FUN_1005e70f4(&local_88);
  return;
}



/* Address: 0x1008781d0 | thunk_FUN_100878970 */

void thunk_FUN_100878970(void)

{
  FUN_100878970();
  return;
}



/* Address: 0x1008781d4 | FUN_1008781d4 */

void FUN_1008781d4(void)

{
  FUN_1008781e8();
  return;
}



/* Address: 0x1008781e8 | FUN_1008781e8 */

void FUN_1008781e8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined4)param_4;
  (*param_6)();
  *param_1 = param_5;
  param_1[1] = param_3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar2 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar2;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar2 >> 0x18);
  return;
}



/* Address: 0x100878230 | FUN_100878230 */

void FUN_100878230(void)

{
  FUN_100878244();
  return;
}



/* Address: 0x100878244 | FUN_100878244 */

void FUN_100878244(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  FUN_1000f7830(param_5,param_6);
  param_1[3] = param_5;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_100878fa0(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008782d8 | FUN_1008782d8 */

void FUN_1008782d8(void)

{
  FUN_1008782ec();
  return;
}



/* Address: 0x1008782ec | FUN_1008782ec */

void FUN_1008782ec(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  uVar1 = in_x3;
  FUN_1000f7830(in_x3,in_x4);
  FUN_100878358();
  *param_1 = uVar1;
  param_1[1] = in_x3;
  *(int *)(param_1 + 2) = (int)in_x4;
  *(char *)((long)param_1 + 0x16) = (char)((ulong)in_x4 >> 0x30);
  *(short *)((long)param_1 + 0x14) = (short)((ulong)in_x4 >> 0x20);
  *(char *)((long)param_1 + 0x17) = (char)((ulong)in_x4 >> 0x38);
  return;
}



/* Address: 0x100878354 | thunk_FUN_100877fb4 */

void thunk_FUN_100877fb4(void)

{
  FUN_100877fb4();
  return;
}



/* Address: 0x100878358 | FUN_100878358 */

undefined1  [16] FUN_100878358(bool param_1,void *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  Mirror MVar4;
  ulong uVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  undefined1 *puVar12;
  char *pcVar13;
  void *pvVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_130;
  undefined4 auStack_128 [2];
  undefined1 auStack_120 [8];
  code *local_118;
  void *local_110;
  undefined1 auStack_108 [32];
  StaticString local_e8;
  __uint64 _Stack_e0;
  undefined *local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  undefined3 local_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  char *local_98;
  void *pvStack_90;
  char local_87;
  undefined1 local_80 [16];
  char *local_70;
  
  MVar4 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar4.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_120 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    FUN_1000f7830(param_2,param_3);
    uVar5 = 0;
    puVar12 = auStack_108;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    puStack_a0 = puVar12;
    local_98 = pcVar13;
    param_4 = param_2;
    if (((uVar5 & 1) != 0) && (local_98 = local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    local_98 = (char *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    puStack_a0 = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = pvStack_90;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    param_4 = local_118;
    FUN_1005d8fac(local_110);
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_a0);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = local_98;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_1);
  SVar23.bridgeObject = param_4;
  SVar23.str = local_98;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = local_98;
  Swift::String::append(SVar19,SVar24);
  local_b0 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f08758;
  _swift_allocObject(&DAT_100f08758,0x52,7);
  local_c8 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_118 = *(code **)(lVar17 + 8);
  (*local_118)(auStack_120 + -uVar15,MVar4.unknown);
  pcVar13 = *(char **)(AVar8.unknown + 0x10);
  pvVar14 = *(void **)(AVar8.unknown + 0x18);
  uVar1 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar13;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar13);
  _swift_unknownObjectRetain(uVar1);
  local_110 = pvVar14;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar1);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown != OVar11.unknown) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100878628);
    (*pcVar2)();
  }
  pvVar14 = local_110;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100878624);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_118)(lVar16,MVar4.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar7.unknown,0));
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar9;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar9;
  Swift::String::append(SVar20,SVar26);
  Swift::__print_unlocked();
  line = _Stack_e0;
  file.unknown = local_e8.unknown;
  *(undefined4 *)(lVar16 + -8) = 0;
  *(undefined8 *)(lVar16 + -0x10) = 0xd0;
  SVar21.bridgeObject = (void *)0x2;
  SVar21.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10087872c);
  (*pcVar2)();
}



/* Address: 0x10087872c | FUN_10087872c */

void FUN_10087872c(undefined8 param_1,undefined *param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *local_80;
  undefined1 local_57;
  
  puVar2 = &DAT_100f082a8;
  thunk_FUN_1008766fc();
  cVar1 = (char)((ulong)param_3 >> 0x38);
  if (cVar1 == '\0') {
    _swift_retain(puVar2);
    _swift_retain(param_2);
    puVar3 = puVar2;
    FUN_10086e7c4(puVar2,param_2);
    _swift_bridgeObjectRelease(param_3);
    puVar7 = param_2;
    FUN_10086e7c4(puVar2);
    uVar5 = (uint)puVar7;
    thunk_FUN_1008a2dac();
    _swift_retain(param_2);
    FUN_1008794bc();
    _swift_release(param_2);
    _swift_release(puVar2);
    puVar4 = (undefined *)0x10001;
    FUN_10089bca4();
    puVar7 = &DAT_100fe8e50;
    FUN_1000f7830(&DAT_100fe8e50,&DAT_100c7f260);
    local_88 = (ulong)(uVar5 & 0xff);
    local_57 = 2;
    local_98 = puVar4;
    puStack_90 = puVar3;
    local_80 = puVar7;
    _swift_retain(puVar4);
    _swift_bridgeObjectRetain(puVar3);
    FUN_100626ce0(&local_98);
    _swift_release(param_2);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(puVar3);
    _swift_release(puVar4);
  }
  else {
    if (cVar1 == '\x01') {
      puVar7 = &DAT_100fe8e50;
      FUN_1000f7830(&DAT_100fe8e50,&DAT_100c7f260);
      local_88 = CONCAT17(1,(int7)param_3);
      local_57 = 2;
      local_98 = puVar2;
      puStack_90 = param_2;
      local_80 = puVar7;
      _swift_retain(puVar2);
      FUN_100626ce0(&local_98);
      uVar6 = 1;
    }
    else {
      if (puVar2 == (undefined *)0x0) {
        puVar7 = (undefined *)0x0;
        puStack_90 = (undefined *)0x0;
      }
      else {
        puVar7 = puVar2;
        puVar3 = param_2;
        _swift_retain();
        FUN_1008794bc();
        puStack_90 = (undefined *)((ulong)puVar3 & 0xff);
      }
      puVar3 = &DAT_100fe8e50;
      FUN_1000f7830(&DAT_100fe8e50,&DAT_100c7f260);
      local_88 = 0x200000000000000;
      local_57 = 2;
      local_98 = puVar7;
      local_80 = puVar3;
      FUN_100626ce0(&local_98);
      uVar6 = 2;
    }
    FUN_100875938(puVar2,param_2,param_3,uVar6);
  }
  FUN_1005e70f4(&local_98);
  return;
}



/* Address: 0x10087896c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x100878970 | FUN_100878970 */

/* WARNING: Removing unreachable block (ram,0x000100878a84) */
/* WARNING: Removing unreachable block (ram,0x000100878dc0) */
/* WARNING: Removing unreachable block (ram,0x000100878a94) */
/* WARNING: Removing unreachable block (ram,0x000100878ab4) */
/* WARNING: Removing unreachable block (ram,0x000100878df4) */

void FUN_100878970(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  undefined8 uVar13;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  String SVar19;
  char *local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_af;
  char *local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  _StringGuts _Var12;
  String SVar18;
  
  pcVar6 = &DAT_100fe8e48;
  puVar9 = &DAT_100c7f258;
  uVar13 = param_3;
  FUN_1000f7830();
  FUN_100876ae0();
  cVar2 = (char)((ulong)uVar13 >> 0x38);
  pcVar16 = pcVar6;
  if (cVar2 == '\0') {
    _swift_retain(pcVar6);
    _swift_bridgeObjectRetain(puVar9);
    puVar10 = puVar9;
    FUN_100879c9c(pcVar6,puVar9,uVar13);
    _swift_bridgeObjectRelease(puVar9);
    _swift_release(pcVar6);
    local_e0 = 0;
    local_d8 = &DAT_100f082a8;
    local_af = 2;
    local_f0 = pcVar16;
    puStack_e8 = puVar10;
    _swift_retain(pcVar16);
    _swift_retain(puVar10);
    FUN_100626ebc(&local_f0,param_3);
    _swift_bridgeObjectRelease(puVar9);
    _swift_release(pcVar6);
    _swift_release(puVar10);
  }
  else {
    if (cVar2 == '\x01') {
      if ((long)pcVar6 < 0) {
        SVar18.bridgeObject = (void *)0x2;
        SVar18.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar18,(StaticString)0xd000000000000019,
                   0x8000000100db2a90,0xdb2a80);
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100878ec8);
        (*pcVar4)();
      }
      local_d8 = &DAT_100f082a8;
      local_e0 = CONCAT17(1,(int7)uVar13);
      local_af = 2;
      local_f0 = pcVar6;
      puStack_e8 = puVar9;
      FUN_100656200(pcVar6,puVar9,uVar13);
      FUN_100626ebc(&local_f0,param_3);
      FUN_100878fe8(pcVar6,puVar9,uVar13,1);
      goto LAB_100878d98;
    }
    if (pcVar6 == (char *)0x0) {
      pcVar16 = (char *)0x0;
    }
    else {
      thunk_FUN_10085c548();
      FUN_1005f4d50(pcVar6,puVar9);
      FUN_10085d7bc();
      pcVar17 = pcVar6;
      FUN_1005f4d50(pcVar6,puVar9);
      if (pcVar17 != (char *)0x0) {
        pcVar17 = (char *)0x0;
        bVar3 = true;
        do {
          pcVar8 = pcVar17;
          pcVar7 = pcVar6;
          puVar10 = puVar9;
          FUN_10089ff10(pcVar17,pcVar6,puVar9);
          pcVar1 = pcVar17 + 1;
          if (SCARRY8((long)pcVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100878e7c);
            (*pcVar4)();
          }
          puVar14 = puVar10;
          pcVar15 = param_4;
          if (bVar3) {
            SVar19.bridgeObject = pcVar7;
            SVar19.str = pcVar8;
            SVar18 = Swift::String::lowercased(SVar19);
            _Var12.unknown = SVar18.bridgeObject;
            if ((SVar18.str == (undefined *)0x74736f68) && (_Var12.unknown == &DAT_e400000000000000)
               ) {
              _swift_bridgeObjectRelease(param_4);
              _swift_bridgeObjectRelease(pcVar7);
              pcVar7 = &DAT_e400000000000000;
            }
            else {
              puVar14 = (undefined *)0x74736f68;
              pcVar15 = &DAT_e400000000000000;
              bVar5 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar18.str,_Var12,(_StringComparisonResult)0x68);
              _swift_bridgeObjectRelease(_Var12.unknown);
              if (!bVar5) goto LAB_100878b60;
              _swift_bridgeObjectRelease(param_4);
            }
            _swift_bridgeObjectRelease(pcVar7);
            bVar3 = false;
          }
          else {
LAB_100878b60:
            _swift_bridgeObjectRetain(pcVar7);
            pcVar11 = pcVar7;
            thunk_FUN_10085af9c(pcVar8);
            if (pcVar11 == (char *)0x0) {
              _swift_bridgeObjectRelease(param_4);
              _swift_bridgeObjectRelease(pcVar7);
            }
            else {
              _swift_bridgeObjectRelease(pcVar7);
              FUN_100857650(&local_a0,pcVar8,pcVar11,puVar14,pcVar15,puVar10,param_4);
              puStack_e8 = (undefined *)uStack_98;
              local_f0 = local_a0;
              local_d8 = (undefined *)uStack_88;
              local_e0 = uStack_90;
              uStack_c8 = uStack_78;
              local_d0 = local_80;
              local_c0 = local_70;
              pcVar15 = pcVar16;
              FUN_10085d8f8();
              FUN_1008777d8();
              Swift::RangeReplaceableCollection::_insert();
            }
          }
          pcVar7 = pcVar6;
          FUN_1005f4d50(pcVar6,puVar9);
          pcVar17 = pcVar17 + 1;
          param_4 = pcVar15;
        } while (pcVar1 != pcVar7);
      }
      FUN_100878fe8(pcVar6,puVar9,uVar13,2);
    }
    puStack_e8 = (undefined *)0x0;
    local_e0 = 0x200000000000000;
    local_d8 = &DAT_100f082a8;
    local_af = 2;
    local_f0 = pcVar16;
    _swift_retain(pcVar16);
    FUN_100626ebc(&local_f0,param_3);
  }
  _swift_release(pcVar16);
LAB_100878d98:
  FUN_1005e70f4(&local_f0);
  return;
}



/* Address: 0x100878ec8 | FUN_100878ec8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100878ec8(void)

{
  return ZEXT816(0x100fe8fa0);
}



/* Address: 0x100878ee8 | FUN_100878ee8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100878ee8(void)

{
  return ZEXT816(0x100fe9048);
}



/* Address: 0x100878f08 | FUN_100878f08 */

void FUN_100878f08(void)

{
  char cVar1;
  long unaff_x20;
  
  cVar1 = *(char *)(unaff_x20 + 0x51);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x10);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
    if ((*(char *)(unaff_x20 + 0x30) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x38) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x38) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                  (ulong)*(uint7 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100878fa0 | FUN_100878fa0 */

void FUN_100878fa0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x02') {
    _swift_bridgeObjectRetain();
    return;
  }
  if (param_4 != '\x01') {
    if (param_4 == '\0') {
      _swift_retain();
      _swift_bridgeObjectRetain(param_2);
      return;
    }
    return;
  }
  _swift_retain();
  return;
}



/* Address: 0x100878fe8 | FUN_100878fe8 */

void FUN_100878fe8(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

{
  if (param_4 == '\x02') {
    _swift_bridgeObjectRelease();
    return;
  }
  if (param_4 != '\x01') {
    if (param_4 == '\0') {
      _swift_release();
      _swift_bridgeObjectRelease(param_2);
      return;
    }
    return;
  }
  FUN_10000c650();
  return;
}



/* Address: 0x100879030 | thunk_FUN_1008777d0 */

void thunk_FUN_1008777d0(void)

{
  long unaff_x20;
  
  FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100879034 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x100879038 | FUN_100879038 */

undefined1  [16] FUN_100879038(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_100879c9c();
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  if (unaff_x21 != 0) {
    uVar2 = extraout_x8;
    uVar1 = extraout_x8;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100879098 | FUN_100879098 */

undefined8 FUN_100879098(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10087a068();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1008790c8 | FUN_1008790c8 */

void FUN_1008790c8(char *param_1,char *param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 uVar10;
  _StringGuts _Var11;
  _StringGuts _Var12;
  char *pcVar13;
  char *pcVar14;
  char *pcVar15;
  undefined1 *puVar16;
  char *pcVar17;
  char *pcVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  undefined8 local_98;
  undefined8 uStack_90;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  undefined8 local_58;
  
  pcVar17 = (char *)0x5443454e4e4f43;
  _Var12.unknown = param_1;
  _Var11.unknown = param_2;
  FUN_100867ea8();
  pcVar9 = param_1;
  pcVar18 = param_2;
  if ((_Var12.unknown == (undefined *)0x5443454e4e4f43) && (_Var11.unknown == &DAT_e700000000000000)
     ) {
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
LAB_100879150:
    FUN_1008695f8();
  }
  else {
    puVar16 = &DAT_e700000000000000;
    bVar4 = Swift::_stringCompareWithSmolCheck(_Var12,_Var11,(_StringComparisonResult)0x43);
    _swift_bridgeObjectRelease(_Var11.unknown);
    if (bVar4) goto LAB_100879150;
    if ((param_3 & 1) != 0) {
      pcVar13 = param_2;
      FUN_100869408();
      if (pcVar13 != (char *)0x0) {
        pcVar18 = param_1;
        pcVar14 = param_2;
        FUN_1008695f8();
        if (pcVar14 != (char *)0x0) {
          pcVar8 = param_1;
          pcVar15 = param_2;
          FUN_100867fec();
          if (pcVar15 != (char *)0x0) {
            SVar19.bridgeObject = (void *)0xe300000000000000;
            SVar19.str = (char *)0x2f2f3a;
            SVar22.bridgeObject = puVar16;
            SVar22.str = pcVar17;
            Swift::String::append(SVar19,SVar22);
            SVar20.bridgeObject = pcVar14;
            SVar20.str = pcVar18;
            SVar23.bridgeObject = puVar16;
            SVar23.str = pcVar17;
            Swift::String::append(SVar20,SVar23);
            _swift_bridgeObjectRelease(pcVar14);
            SVar21.bridgeObject = pcVar15;
            SVar21.str = pcVar8;
            SVar24.bridgeObject = puVar16;
            SVar24.str = pcVar17;
            pcVar18 = pcVar15;
            Swift::String::append(SVar21,SVar24);
            _swift_bridgeObjectRelease(pcVar15);
            goto LAB_100879168;
          }
          _swift_bridgeObjectRelease(pcVar13);
          pcVar13 = pcVar14;
        }
        pcVar9 = pcVar13;
        _swift_bridgeObjectRelease();
      }
      goto LAB_100879444;
    }
    FUN_100867fec();
  }
  pcVar13 = pcVar18;
  if (pcVar18 != (char *)0x0) {
LAB_100879168:
    uVar10 = SUB81(pcVar18,0);
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    thunk_FUN_10089f744();
    pcVar18 = param_2;
    FUN_10085d8f8();
    pcVar17 = param_2;
    FUN_10085d8f8();
    if ((long)pcVar17 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008794b0);
      (*pcVar3)();
    }
    pcVar17 = param_2;
    FUN_10085d8f8();
    if (((long)pcVar18 < 0) || ((long)pcVar17 < (long)pcVar18)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008794b4);
      (*pcVar3)();
    }
    if (SCARRY8((long)pcVar18,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008794b8);
      (*pcVar3)();
    }
    FUN_10089feb0(pcVar18 + 1);
    pcVar18 = param_1;
    pcVar17 = param_2;
    FUN_1008695f8(param_1);
    if (pcVar17 != (char *)0x0) {
      FUN_10089f74c(0x74736f48,&DAT_e400000000000000,pcVar18,pcVar17);
      _swift_bridgeObjectRelease(pcVar17);
    }
    pcVar18 = param_2;
    _swift_retain();
    FUN_10085d8f8();
    if (pcVar18 == (char *)0x0) {
      _swift_release(param_2);
    }
    else {
      pcVar18 = (char *)0x0;
      bVar4 = true;
      local_58 = 0x65696b6f6f43;
      do {
        FUN_10085d980(&local_98,pcVar18,param_2);
        pcVar17 = param_2;
        FUN_10085d8f8();
        uVar2 = uStack_90;
        uVar1 = local_98;
        if ((long)pcVar17 <= (long)pcVar18) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1008794ac);
          (*pcVar3)();
        }
        if ((local_88.unknown == (undefined *)0x65696b6f6f63 &&
             _Stack_80.unknown == &DAT_e600000000000000) ||
           (_Var12.unknown = _Stack_80.unknown,
           bVar5 = Swift::_stringCompareWithSmolCheck
                             (local_88,_Stack_80,(_StringComparisonResult)0x63), bVar5)) {
          if (bVar4) {
            _swift_bridgeObjectRetain(uVar2);
            _Var12.unknown = &DAT_e600000000000000;
            uVar7 = local_58;
            FUN_10085c5ec(0x65696b6f6f43,&DAT_e600000000000000,0x65696b6f6f63,&DAT_e600000000000000,
                          param_2);
            if (_Var12.unknown == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)SoftwareBreakpoint(1,0x1008794bc);
              (*pcVar3)();
            }
            FUN_10089f74c(uVar1,uVar2,uVar7,_Var12.unknown);
            bVar4 = false;
            goto LAB_10087930c;
          }
          bVar4 = false;
        }
        else {
          uVar7 = uVar2;
          _swift_bridgeObjectRetain(uVar2);
          FUN_100857828();
          FUN_10089f74c(uVar1,uVar2,uVar7,_Var12.unknown);
LAB_10087930c:
          _swift_bridgeObjectRelease(uVar2);
          _swift_bridgeObjectRelease(_Var12.unknown);
        }
        pcVar18 = pcVar18 + 1;
        FUN_1006ec3e4(&local_98);
        pcVar17 = param_2;
        FUN_10085d8f8();
      } while (pcVar18 != pcVar17);
      _swift_release(param_2);
    }
    pcVar18 = param_1;
    pcVar17 = param_2;
    FUN_100867ea8(param_1,param_2);
    FUN_10087a4c8();
    _swift_release(param_2);
    _swift_release(param_1);
    FUN_10089bc04(0x10001,pcVar18,pcVar17,pcVar9,pcVar13,puVar6,uVar10);
    return;
  }
LAB_100879444:
  FUN_10087a488();
  _swift_allocError(&DAT_100f08838,pcVar9,0,0);
  *pcVar9 = '\x01';
  _swift_willThrow();
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1008794bc | FUN_1008794bc */

void FUN_1008794bc(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined8 local_98;
  undefined8 uStack_90;
  
  lVar5 = param_1;
  FUN_10085d8f8();
  lVar8 = param_1;
  FUN_10085d8f8();
  if (lVar8 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100879628);
    (*pcVar4)();
  }
  lVar8 = param_1;
  FUN_10085d8f8();
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if ((-1 < lVar5) && (lVar5 <= lVar8)) {
    if (lVar5 == 0) {
      _swift_release(param_1);
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      FUN_100876ee4(0,lVar5,0);
      lVar8 = 0;
      do {
        lVar7 = param_1;
        FUN_10085d980(&local_98,lVar8);
        uVar3 = uStack_90;
        uVar2 = local_98;
        uVar6 = uStack_90;
        _swift_bridgeObjectRetain();
        FUN_100857828();
        FUN_1006ec3e4(&local_98);
        uVar1 = *(ulong *)(puVar9 + 0x10);
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar1) {
          FUN_100876ee4(1 < *(ulong *)(puVar9 + 0x18),uVar1 + 1,1);
        }
        *(ulong *)(puVar9 + 0x10) = uVar1 + 1;
        *(undefined8 *)(puVar9 + uVar1 * 0x20 + 0x20) = uVar2;
        *(undefined8 *)(puVar9 + uVar1 * 0x20 + 0x28) = uVar3;
        *(undefined8 *)(puVar9 + uVar1 * 0x20 + 0x30) = uVar6;
        *(long *)(puVar9 + uVar1 * 0x20 + 0x38) = lVar7;
        lVar7 = param_1;
        FUN_10085d8f8();
        if (lVar7 <= lVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100879624);
          (*pcVar4)();
        }
        lVar8 = lVar8 + 1;
      } while (lVar5 != lVar8);
      _swift_release(param_1);
    }
    thunk_FUN_10089f744(puVar9);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10087962c);
  (*pcVar4)();
}



/* Address: 0x10087962c | FUN_10087962c */

undefined1  [16] FUN_10087962c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar3 [16];
  
  uVar1 = param_1;
  uVar2 = param_2;
  FUN_10087b074();
  _swift_bridgeObjectRelease(param_2);
  _swift_release(param_1);
  if (unaff_x21 != 0) {
    uVar2 = extraout_x8;
    uVar1 = extraout_x8;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x10087968c | FUN_10087968c */

void FUN_10087968c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_1;
  FUN_10086e7c4();
  _swift_bridgeObjectRelease(param_3);
  uVar3 = param_2;
  FUN_10086e7c4(param_1,param_2);
  thunk_FUN_1008a2dac(uVar1);
  uVar2 = param_2;
  uVar4 = uVar3;
  _swift_retain(param_2);
  FUN_1008794bc();
  _swift_release(param_2);
  _swift_release(param_1);
  FUN_10089bca4(0x10001,uVar1,uVar3,param_3,uVar2,uVar4);
  return;
}



/* Address: 0x100879730 | thunk_FUN_10087a4c8 */

void thunk_FUN_10087a4c8(void)

{
  FUN_10087a4c8();
  return;
}



/* Address: 0x100879734 | FUN_100879734 */

void FUN_100879734(undefined1 *param_1,long param_2)

{
  code *pcVar1;
  long lVar2;
  undefined1 *puVar3;
  
  lVar2 = -0x1d00000000000000;
  switch(param_2) {
  case 0:
    break;
  case 1:
    break;
  case 2:
    thunk_FUN_1008690c0(0x4c4341);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008798b8);
      (*pcVar1)();
    }
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    puVar3 = &DAT_e400000000000000;
    thunk_FUN_1008690c0(0x59504f43);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087998c);
      (*pcVar1)();
    }
    break;
  case 6:
    puVar3 = &DAT_e400000000000000;
    thunk_FUN_1008690c0(0x4b434f4c);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008799dc);
      (*pcVar1)();
    }
    break;
  case 7:
    puVar3 = &DAT_e400000000000000;
    thunk_FUN_1008690c0(0x45564f4d);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879904);
      (*pcVar1)();
    }
    break;
  case 8:
    puVar3 = &DAT_e400000000000000;
    thunk_FUN_1008690c0(0x444e4942);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879a2c);
      (*pcVar1)();
    }
    break;
  case 9:
    puVar3 = &DAT_e400000000000000;
    thunk_FUN_1008690c0(0x4b4e494c);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879864);
      (*pcVar1)();
    }
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    puVar3 = &DAT_e500000000000000;
    thunk_FUN_1008690c0(0x4c4f434b4d);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879848);
      (*pcVar1)();
    }
    break;
  case 0xd:
    puVar3 = &DAT_e500000000000000;
    thunk_FUN_1008690c0(0x454752454d);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008799c0);
      (*pcVar1)();
    }
    break;
  case 0xe:
    puVar3 = &DAT_e500000000000000;
    thunk_FUN_1008690c0(0x4547525550);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008797e4);
      (*pcVar1)();
    }
    break;
  case 0xf:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x594649544f4e);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008798d8);
      (*pcVar1)();
    }
    break;
  case 0x10:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x484352414553);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008797c4);
      (*pcVar1)();
    }
    break;
  case 0x11:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x4b434f4c4e55);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879950);
      (*pcVar1)();
    }
    break;
  case 0x12:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x444e49424552);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008799fc);
      (*pcVar1)();
    }
    break;
  case 0x13:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x444e49424e55);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879ac4);
      (*pcVar1)();
    }
    break;
  case 0x14:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x54524f504552);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879970);
      (*pcVar1)();
    }
    break;
  case 0x15:
    break;
  case 0x16:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x4b4e494c4e55);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879aa0);
      (*pcVar1)();
    }
    break;
  case 0x17:
    break;
  case 0x18:
    puVar3 = &DAT_e700000000000000;
    thunk_FUN_1008690c0(0x4843524145534d);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008798a0);
      (*pcVar1)();
    }
    break;
  case 0x19:
    break;
  case 0x1a:
    puVar3 = &DAT_e800000000000000;
    thunk_FUN_1008690c0(0x444e4946504f5250);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879bf0);
      (*pcVar1)();
    }
    break;
  case 0x1b:
    puVar3 = &DAT_e800000000000000;
    thunk_FUN_1008690c0(0x54554f4b43454843);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008797a4);
      (*pcVar1)();
    }
    break;
  case 0x1c:
    lVar2 = -0x16ffffffffffffb8;
    thunk_FUN_1008690c0(0x43544150504f5250);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879b08);
      (*pcVar1)();
    }
    break;
  case 0x1d:
    lVar2 = -0x16ffffffffffffbb;
    thunk_FUN_1008690c0(0x4249524353425553);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879b30);
      (*pcVar1)();
    }
    break;
  case 0x1e:
    lVar2 = -0x15ffffffffffadbf;
    thunk_FUN_1008690c0(0x444e454c41434b4d);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879a54);
      (*pcVar1)();
    }
    break;
  case 0x1f:
    lVar2 = -0x15ffffffffffa6ac;
    thunk_FUN_1008690c0(0x4956495443414b4d);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879930);
      (*pcVar1)();
    }
    break;
  case 0x20:
    lVar2 = -0x14ffffffffbabdb7;
    thunk_FUN_1008690c0(0x5243534255534e55);
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879a80);
      (*pcVar1)();
    }
    break;
  case 0x21:
    puVar3 = &DAT_e600000000000000;
    thunk_FUN_1008690c0(0x454352554f53);
    if (puVar3 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100879804);
      (*pcVar1)();
    }
    break;
  default:
    _swift_bridgeObjectRetain(param_2);
    puVar3 = param_1;
    lVar2 = param_2;
    thunk_FUN_1008690c0();
    if (lVar2 == 0) {
      FUN_10087a488();
      _swift_allocError(&DAT_100f08838,puVar3,0,0);
      *puVar3 = 0;
      _swift_willThrow();
      FUN_10087b1c4(param_1,param_2);
    }
    else {
      FUN_10087b1c4(param_1,param_2);
    }
  }
  return;
}



/* Address: 0x100879c78 | FUN_100879c78 */

undefined1  [16] FUN_100879c78(undefined8 param_1,undefined8 param_2)

{
  undefined8 extraout_x8;
  long unaff_x21;
  undefined1 auVar1 [16];
  
  FUN_1008790c8(param_1,param_2,0);
  if (unaff_x21 != 0) {
    param_2 = extraout_x8;
    param_1 = extraout_x8;
  }
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x100879c9c | FUN_100879c9c */

void FUN_100879c9c(undefined1 *param_1,char *param_2,ulong param_3,undefined1 *param_4)

{
  char *pcVar1;
  bool bVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  ulong uVar13;
  ulong uVar14;
  undefined1 *puVar15;
  char *pcVar16;
  ulong uVar17;
  String SVar18;
  undefined1 local_a0 [64];
  _StringGuts _Var12;
  
  puVar5 = param_1;
  pcVar16 = param_2;
  uVar17 = param_3;
  FUN_10089d364();
  puVar6 = puVar5;
  FUN_10089d3a8();
  FUN_10087b2d4(puVar5,pcVar16,uVar17);
  if (puVar6 < (undefined1 *)0x3e8) {
    puVar5 = param_1;
    pcVar16 = param_2;
    uVar17 = param_3;
    FUN_10089d364(param_1,param_2,param_3);
    puVar6 = puVar5;
    FUN_10089d3a8();
    FUN_10087b2d4(puVar5,pcVar16,uVar17);
    if ((long)puVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100879fc0);
      (*pcVar3)();
    }
    pcVar16 = param_2;
    uVar17 = param_3;
    FUN_10089d364(param_1,param_2,param_3);
    puVar5 = param_1;
    pcVar10 = pcVar16;
    FUN_10089d40c();
    FUN_10087b2d4(param_1,pcVar16,uVar17);
    FUN_10086e1ec();
    puVar7 = puVar6;
    thunk_FUN_10085c548();
    FUN_1005f4d50(param_2,param_3);
    FUN_10085d7bc();
    pcVar16 = param_2;
    FUN_1005f4d50(param_2,param_3);
    if (pcVar16 != (char *)0x0) {
      pcVar16 = (char *)0x0;
      bVar2 = true;
      uVar17 = param_3;
      do {
        pcVar9 = pcVar16;
        pcVar8 = param_2;
        uVar13 = uVar17;
        FUN_10089ff10(pcVar16,param_2,uVar17);
        pcVar1 = pcVar16 + 1;
        if (SCARRY8((long)pcVar16,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100879fbc);
          (*pcVar3)();
        }
        uVar14 = uVar13;
        puVar15 = param_4;
        if (bVar2) {
          SVar18.bridgeObject = pcVar8;
          SVar18.str = pcVar9;
          SVar18 = Swift::String::lowercased(SVar18);
          _Var12.unknown = SVar18.bridgeObject;
          if ((SVar18.str == (undefined *)0x74736f68) && (_Var12.unknown == &DAT_e400000000000000))
          {
            _swift_bridgeObjectRelease(param_4);
            _swift_bridgeObjectRelease(pcVar8);
            pcVar8 = &DAT_e400000000000000;
          }
          else {
            uVar14 = 0x74736f68;
            puVar15 = &DAT_e400000000000000;
            bVar4 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)SVar18.str,_Var12,(_StringComparisonResult)0x68);
            _swift_bridgeObjectRelease(_Var12.unknown);
            if (!bVar4) goto LAB_100879dd0;
            _swift_bridgeObjectRelease(param_4);
          }
          _swift_bridgeObjectRelease(pcVar8);
          bVar2 = false;
        }
        else {
LAB_100879dd0:
          _swift_bridgeObjectRetain(pcVar8);
          pcVar11 = pcVar8;
          thunk_FUN_10085af9c(pcVar9);
          if (pcVar11 == (char *)0x0) {
            _swift_bridgeObjectRelease(param_4);
            _swift_bridgeObjectRelease(pcVar8);
          }
          else {
            _swift_bridgeObjectRelease(pcVar8);
            FUN_100857650(local_a0,pcVar9,pcVar11,uVar14,puVar15,uVar13,param_4);
            puVar15 = puVar7;
            FUN_10085d8f8();
            FUN_1008777d8();
            Swift::RangeReplaceableCollection::_insert();
          }
          uVar17 = param_3 & 0xffffffff;
        }
        pcVar8 = param_2;
        FUN_1005f4d50(param_2,uVar17);
        pcVar16 = pcVar16 + 1;
        param_4 = puVar15;
      } while (pcVar1 != pcVar8);
    }
    FUN_10086e2c8(puVar6,puVar5,pcVar10,puVar7);
  }
  else {
    FUN_10087a488();
    _swift_allocError(&DAT_100f08838,puVar5,0,0);
    *puVar5 = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100879fc0 | FUN_100879fc0 */

void FUN_100879fc0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 != 0) {
    FUN_1008777d8();
    puVar4 = (undefined8 *)(param_1 + 0x50);
    do {
      uVar1 = *puVar4;
      uVar2 = puVar4[-3];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar1);
      Swift::RangeReplaceableCollection::_append();
      puVar4 = puVar4 + 7;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  return;
}



/* Address: 0x10087a068 | FUN_10087a068 */

char * FUN_10087a068(char *param_1,char *param_2,ulong param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar7;
  char *pcVar9;
  _StringGuts _Var10;
  _StringGuts _Var11;
  char *pcVar12;
  ulong uVar13;
  char *pcVar14;
  char **ppcVar15;
  char *pcVar16;
  bool bVar17;
  String SVar18;
  char *local_130;
  undefined1 *local_128;
  char *local_120;
  char *pcStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  char *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  char *pcStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  ulong uVar6;
  _StringGuts _Var8;
  
  pcVar14 = param_1;
  thunk_FUN_10085c548();
  local_e8 = pcVar14;
  FUN_1005f4d50(param_1,param_2);
  FUN_10085d7bc();
  pcVar14 = param_1;
  FUN_1005f4d50(param_1,param_2);
  if (pcVar14 != (char *)0x0) {
    pcVar14 = (char *)0x0;
    bVar17 = true;
    uVar13 = param_3;
    pcVar16 = param_2;
    do {
      pcVar5 = pcVar14;
      pcVar4 = param_1;
      pcVar12 = pcVar16;
      FUN_10089ff10();
      bVar2 = SCARRY8((long)pcVar14,1);
      pcVar14 = pcVar14 + 1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10087a488);
        (*pcVar1)();
      }
      _Var10.unknown = pcVar12;
      _Var11.unknown = param_4;
      if (bVar17) {
        SVar18.bridgeObject = pcVar4;
        SVar18.str = pcVar5;
        SVar18 = Swift::String::lowercased(SVar18);
        _Var8.unknown = SVar18.bridgeObject;
        if ((SVar18.str == (undefined *)0x74736f68) && (_Var8.unknown == &DAT_e400000000000000)) {
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRelease(pcVar4);
          _swift_bridgeObjectRelease(&DAT_e400000000000000);
          bVar17 = false;
          pcVar16 = (char *)((ulong)param_2 & 0xffffffff);
        }
        else {
          _Var10.unknown = (char *)0x74736f68;
          _Var11.unknown = &DAT_e400000000000000;
          bVar2 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar18.str,_Var8,(_StringComparisonResult)0x68);
          _swift_bridgeObjectRelease(_Var8.unknown);
          pcVar16 = (char *)((ulong)param_2 & 0xffffffff);
          if (!bVar2) goto LAB_10087a220;
          _swift_bridgeObjectRelease(param_4);
          _swift_bridgeObjectRelease(pcVar4);
          bVar17 = false;
        }
      }
      else {
LAB_10087a220:
        _swift_bridgeObjectRetain(pcVar4);
        pcVar9 = pcVar4;
        thunk_FUN_10085af9c();
        if (pcVar9 == (char *)0x0) {
          _swift_bridgeObjectRelease(param_4);
LAB_10087a454:
          _swift_bridgeObjectRelease(pcVar4);
        }
        else {
          if (((uVar13 & 1) != 0) &&
             (((_Var10.unknown == (undefined *)0x65696b6f6f63 &&
               (_Var11.unknown == &DAT_e600000000000000)) ||
              (bVar2 = Swift::_stringCompareWithSmolCheck
                                 (_Var10,_Var11,(_StringComparisonResult)0x63), bVar2)))) {
            bVar3 = Swift::_stdlib_isOSVersionAtLeast(0xd,0,0);
            uVar6 = (ulong)bVar3;
            if ((bVar3 & 1) != 0) {
              local_130 = (char *)0x203b;
              local_128 = &SUB_e200000000000000;
              local_120 = pcVar12;
              pcStack_118 = param_4;
              FUN_10087b294();
              ppcVar7 = &local_130;
              _Var8.unknown = PTR___type_metadata_for_Swift_String_100eac208;
              (extension__StringProcessing)::Swift::Collection::_split
                        (ppcVar7,0x7fffffffffffffff,0,PTR___type_metadata_for_Swift_String_100eac208
                         ,PTR___type_metadata_for_Swift_String_100eac208,uVar6,uVar6,
                         PTR___protocol_witness_table_for_Swift_Character___Swift_Equatable_in_Swift_100eabf28
                        );
              _swift_bridgeObjectRelease(param_4);
              _swift_bridgeObjectRelease(pcVar4);
              pcVar12 = ppcVar7[2];
              if (pcVar12 == (char *)0x0) {
                _swift_bridgeObjectRelease(_Var11.unknown);
                _swift_bridgeObjectRelease(pcVar9);
                _swift_bridgeObjectRelease(ppcVar7);
                pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
              }
              else {
                local_120 = PTR___swiftEmptyArrayStorage_100eae0d8;
                FUN_100876ec8(0,pcVar12,0);
                ppcVar15 = ppcVar7 + 7;
                do {
                  pcVar4 = local_120;
                  SVar18 = *(String *)(ppcVar15 + -3);
                  pcVar16 = *ppcVar15;
                  _swift_bridgeObjectRetain(pcVar16);
                  _swift_bridgeObjectRetain(pcVar9);
                  _swift_bridgeObjectRetain(_Var11.unknown);
                  SVar18 = Swift::String::__fromSubstring(SVar18);
                  _Var8.unknown = _Var11.unknown;
                  FUN_100857650(&local_e0,pcVar5,pcVar9,_Var10.unknown,_Var11.unknown,SVar18.str,
                                SVar18.bridgeObject);
                  _swift_bridgeObjectRelease(pcVar16);
                  uVar13 = *(ulong *)(pcVar4 + 0x10);
                  local_120 = pcVar4;
                  if (*(ulong *)(pcVar4 + 0x18) >> 1 <= uVar13) {
                    FUN_100876ec8(1 < *(ulong *)(pcVar4 + 0x18),uVar13 + 1,1);
                  }
                  pcVar4 = local_120;
                  ppcVar15 = ppcVar15 + 4;
                  *(ulong *)(local_120 + 0x10) = uVar13 + 1;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x50) = local_b0;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x38) = uStack_c8;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x30) = uStack_d0;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x48) = uStack_b8;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x40) = local_c0;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x28) = uStack_d8;
                  *(undefined8 *)(local_120 + uVar13 * 0x38 + 0x20) = local_e0;
                  pcVar12 = pcVar12 + -1;
                } while (pcVar12 != (char *)0x0);
                _swift_bridgeObjectRelease(_Var11.unknown);
                _swift_bridgeObjectRelease(pcVar9);
                _swift_bridgeObjectRelease(ppcVar7);
                uVar13 = param_3 & 0xffffffff;
                pcVar16 = (char *)((ulong)param_2 & 0xffffffff);
              }
              FUN_100879fc0(pcVar4);
              _Var11.unknown = _Var8.unknown;
              goto LAB_10087a454;
            }
          }
          _swift_bridgeObjectRelease(pcVar4);
          FUN_100857650(&local_a8,pcVar5,pcVar9,_Var10.unknown,_Var11.unknown,pcVar12,param_4);
          pcStack_118 = pcStack_a0;
          local_120 = local_a8;
          uStack_108 = uStack_90;
          uStack_110 = uStack_98;
          uStack_f8 = uStack_80;
          local_100 = local_88;
          local_f0 = local_78;
          _Var11.unknown = local_e8;
          FUN_10085d8f8();
          local_130 = _Var11.unknown;
          FUN_1008777d8();
          Swift::RangeReplaceableCollection::_insert();
        }
      }
      pcVar4 = param_1;
      FUN_1005f4d50(param_1,pcVar16);
      param_4 = _Var11.unknown;
    } while (pcVar14 != pcVar4);
  }
  return local_e8;
}



/* Address: 0x10087a488 | FUN_10087a488 */

void FUN_10087a488(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe90b0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f3c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f3c0,&DAT_100f08838);
  DAT_100fe90b0 = pTVar1;
  return;
}



/* Address: 0x10087a4c8 | FUN_10087a4c8 */

undefined1  [16] FUN_10087a4c8(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0x544547 && param_2 == (undefined1 *)0xe300000000000000) {
LAB_10087a518:
    puVar2 = (undefined1 *)0x0;
  }
  else {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x544547,(_StringGuts)0xe300000000000000,expecting);
    if (bVar1) goto LAB_10087a518;
    if (((param_1 == 0x44414548) && (param_2 == &DAT_e400000000000000)) ||
       (bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x44414548,(_StringGuts)0xe400000000000000,expecting), bVar1
       )) {
      puVar2 = (undefined1 *)0x3;
    }
    else if (((param_1 == 0x54534f50) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54534f50,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x4;
    }
    else if (((param_1 == 0x545550) && (param_2 == (undefined1 *)0xe300000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x545550,(_StringGuts)0xe300000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x1;
    }
    else if (((param_1 == 0x4554454c4544) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4554454c4544,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x15;
    }
    else if (((param_1 == 0x5443454e4e4f43) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x5443454e4e4f43,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x17;
    }
    else if (((param_1 == 0x534e4f4954504f) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x534e4f4954504f,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x19;
    }
    else if (((param_1 == 0x4543415254) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4543415254,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xb;
    }
    else if (((param_1 == 0x4843544150) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4843544150,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xa;
    }
    else if (((param_1 == 0x4c4341) && (param_2 == (undefined1 *)0xe300000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4c4341,(_StringGuts)0xe300000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x2;
    }
    else if (((param_1 == 0x59504f43) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x59504f43,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x5;
    }
    else if (((param_1 == 0x4b434f4c) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b434f4c,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x6;
    }
    else if (((param_1 == 0x45564f4d) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x45564f4d,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x7;
    }
    else if (((param_1 == 0x444e4942) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e4942,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x8;
    }
    else if (((param_1 == 0x4b4e494c) && (param_2 == &DAT_e400000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b4e494c,(_StringGuts)0xe400000000000000,expecting),
            bVar1)) {
      puVar2 = (undefined1 *)0x9;
    }
    else if (((param_1 == 0x4c4f434b4d) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4c4f434b4d,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xc;
    }
    else if (((param_1 == 0x454752454d) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x454752454d,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xd;
    }
    else if (((param_1 == 0x4547525550) && (param_2 == &DAT_e500000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4547525550,(_StringGuts)0xe500000000000000,expecting)
            , bVar1)) {
      puVar2 = (undefined1 *)0xe;
    }
    else if (((param_1 == 0x594649544f4e) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x594649544f4e,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0xf;
    }
    else if (((param_1 == 0x484352414553) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x484352414553,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x10;
    }
    else if (((param_1 == 0x4b434f4c4e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b434f4c4e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x11;
    }
    else if (((param_1 == 0x444e49424552) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e49424552,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x12;
    }
    else if (((param_1 == 0x444e49424e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e49424e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x13;
    }
    else if (((param_1 == 0x54524f504552) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54524f504552,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x14;
    }
    else if (((param_1 == 0x4b4e494c4e55) && (param_2 == &DAT_e600000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4b4e494c4e55,(_StringGuts)0xe600000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x16;
    }
    else if (((param_1 == 0x4843524145534d) && (param_2 == &DAT_e700000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4843524145534d,(_StringGuts)0xe700000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x18;
    }
    else if (((param_1 == 0x444e4946504f5250) && (param_2 == &DAT_e800000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e4946504f5250,(_StringGuts)0xe800000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1a;
    }
    else if (((param_1 == 0x54554f4b43454843) && (param_2 == &DAT_e800000000000000)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x54554f4b43454843,(_StringGuts)0xe800000000000000,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1b;
    }
    else if (((param_1 == 0x43544150504f5250) && (param_2 == (undefined1 *)0xe900000000000048)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x43544150504f5250,(_StringGuts)0xe900000000000048,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1c;
    }
    else if (((param_1 == 0x4249524353425553) && (param_2 == (undefined1 *)0xe900000000000045)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4249524353425553,(_StringGuts)0xe900000000000045,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1d;
    }
    else if (((param_1 == 0x444e454c41434b4d) && (param_2 == (undefined1 *)0xea00000000005241)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x444e454c41434b4d,(_StringGuts)0xea00000000005241,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1e;
    }
    else if (((param_1 == 0x4956495443414b4d) && (param_2 == (undefined1 *)0xea00000000005954)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x4956495443414b4d,(_StringGuts)0xea00000000005954,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x1f;
    }
    else if (((param_1 == 0x5243534255534e55) && (param_2 == (undefined1 *)0xeb00000000454249)) ||
            (bVar1 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x5243534255534e55,(_StringGuts)0xeb00000000454249,
                                expecting), bVar1)) {
      puVar2 = (undefined1 *)0x20;
    }
    else {
      if (((param_1 != 0x454352554f53) || (param_2 != &DAT_e600000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x454352554f53,(_StringGuts)0xe600000000000000,expecting),
         !bVar1)) goto LAB_10087a528;
      puVar2 = (undefined1 *)0x21;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  param_1 = 0;
  param_2 = puVar2;
LAB_10087a528:
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = param_1;
  return auVar3;
}



/* Address: 0x10087add8 | FUN_10087add8 */

String FUN_10087add8(char *param_1,void *param_2)

{
  code *pcVar1;
  undefined *puVar2;
  URLComponents UVar3;
  char *pcVar4;
  URLComponents UVar5;
  URLComponents UVar6;
  URLComponents UVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  char *pcVar13;
  long lVar14;
  String SVar15;
  String SVar17;
  String SVar19;
  String SVar20;
  String SVar21;
  char *local_70;
  void *pvStack_68;
  String SVar16;
  String SVar18;
  
  SVar17.bridgeObject = param_2;
  SVar17.str = param_1;
  puVar2 = &DAT_100fe90c0;
  FUN_1000f7830(&DAT_100fe90c0,&DAT_100c7f4c0);
  pcVar8 = (char *)((long)&local_70 -
                   (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar14 = *(long *)(UVar3.unknown + -8);
  pcVar13 = pcVar8 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  Foundation::URLComponents::_init();
  pcVar4 = pcVar8;
  (**(code **)(lVar14 + 0x30))(pcVar8,1,UVar3.unknown);
  if ((int)pcVar4 == 1) {
    FUN_10087b24c(pcVar8);
LAB_10087aef8:
    _swift_bridgeObjectRetain(param_2);
    return SVar17;
  }
  UVar5.unknown = pcVar13;
  UVar6 = UVar3;
  (**(code **)(lVar14 + 0x20))();
  uVar11 = (uint)UVar6.unknown;
  Foundation::URLComponents::_get_string(UVar5);
  if (pcVar8 == (char *)0x0) {
    (**(code **)(lVar14 + 8))(pcVar13,UVar3.unknown);
    goto LAB_10087aef8;
  }
  UVar6.unknown = UVar5.unknown;
  pcVar4 = pcVar8;
  Foundation::URLComponents::_get_rangeOfScheme(UVar5);
  if ((uVar11 & 0xff) == 1) {
    (**(code **)(lVar14 + 8))(pcVar13,UVar3.unknown);
    _swift_bridgeObjectRelease(pcVar8);
    goto LAB_10087aef8;
  }
  Foundation::URLComponents::_get_rangeOfPath(UVar6);
  UVar7.unknown = UVar6.unknown;
  pcVar9 = pcVar4;
  uVar12 = uVar11;
  Foundation::URLComponents::_get_rangeOfQuery(UVar6);
  if ((uVar11 & 0xff) == 1) {
    pcVar10 = pcVar9;
    if ((uVar12 & 0xff) != 1) goto LAB_10087af68;
  }
  else {
    UVar7.unknown = UVar6.unknown;
    pcVar10 = pcVar4;
    if ((uVar12 & 0xff) != 1) {
      pcVar10 = pcVar9;
    }
LAB_10087af68:
    if ((ulong)pcVar10 >> 0xe < (ulong)UVar7.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10087b074);
      (*pcVar1)();
    }
    if (((uVar11 & 0xff) != 1) && (0x3fff < ((ulong)UVar6.unknown ^ (ulong)pcVar4))) {
      SVar19.bridgeObject = UVar5.unknown;
      SVar19.str = pcVar10;
      pcVar4 = pcVar8;
      SVar16.str = Swift::String::get_subscript(UVar7.unknown,SVar19);
      _swift_bridgeObjectRelease(pcVar8);
      SVar16.bridgeObject = pcVar10;
      SVar15 = Swift::String::__fromSubstring(SVar16);
      _swift_bridgeObjectRelease(pcVar4);
      goto LAB_10087b05c;
    }
    if ((ulong)UVar7.unknown >> 0xe != (ulong)pcVar10 >> 0xe) {
      local_70 = (char *)0x2f;
      pvStack_68 = (void *)0xe100000000000000;
      SVar20.bridgeObject = UVar5.unknown;
      SVar20.str = pcVar10;
      pcVar4 = pcVar8;
      SVar18.str = Swift::String::get_subscript(UVar7.unknown,SVar20);
      _swift_bridgeObjectRelease(pcVar8);
      SVar18.bridgeObject = pcVar10;
      pcVar8 = pcVar4;
      SVar17 = Swift::String::__fromSubstring(SVar18);
      SVar21.bridgeObject = pcVar8;
      SVar21.str = UVar5.unknown;
      Swift::String::append(SVar17,SVar21);
      _swift_bridgeObjectRelease(pcVar4);
      _swift_bridgeObjectRelease(SVar17.bridgeObject);
      SVar15.bridgeObject = pvStack_68;
      SVar15.str = local_70;
      goto LAB_10087b05c;
    }
  }
  _swift_bridgeObjectRelease(pcVar8);
  SVar15.bridgeObject = (void *)0xe100000000000000;
  SVar15.str = (char *)0x2f;
LAB_10087b05c:
  (**(code **)(lVar14 + 8))(pcVar13,UVar3.unknown);
  return SVar15;
}



/* Address: 0x10087b074 | FUN_10087b074 */

void FUN_10087b074(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x21;
  undefined8 uVar10;
  
  uVar4 = param_1;
  uVar7 = param_2;
  FUN_10089bba4();
  FUN_100879734();
  if (unaff_x21 == 0) {
    bVar3 = (param_4 & 1) == 0;
    uVar1 = 0x7370747468;
    if (bVar3) {
      uVar1 = 0x70747468;
    }
    puVar2 = &DAT_e500000000000000;
    if (bVar3) {
      puVar2 = &DAT_e400000000000000;
    }
    lVar5 = 0x74736f48;
    FUN_10089cd18(0x74736f48,&DAT_e400000000000000,param_2,param_3);
    if (*(long *)(lVar5 + 0x10) == 0) {
      uVar9 = 0;
      uVar10 = 0;
    }
    else {
      uVar9 = *(undefined8 *)(lVar5 + 0x20);
      uVar10 = *(undefined8 *)(lVar5 + 0x28);
      _swift_bridgeObjectRetain(uVar10);
    }
    _swift_bridgeObjectRelease();
    uVar6 = param_2;
    FUN_100666b3c(param_1,param_2,param_3);
    uVar8 = uVar6;
    FUN_10087add8();
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = param_2;
    _swift_bridgeObjectRetain();
    FUN_10087a068();
    _swift_bridgeObjectRelease(param_2);
    FUN_100868e1c(uVar4,uVar7,uVar1,puVar2,uVar9,uVar10,param_1,uVar8,uVar6);
  }
  return;
}



/* Address: 0x10087b1c4 | FUN_10087b1c4 */

void FUN_10087b1c4(undefined8 param_1,ulong param_2)

{
  if (param_2 < 0x22) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10087b1d8 | FUN_10087b1d8 */

void FUN_10087b1d8(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x10087b1e4 | FUN_10087b1e4 */

void FUN_10087b1e4(void)

{
  return;
}



/* Address: 0x10087b1e8 | FUN_10087b1e8 */

undefined1  [16] FUN_10087b1e8(void)

{
  return ZEXT816(0x100f08838);
}



/* Address: 0x10087b1f8 | FUN_10087b1f8 */

undefined1  [16] FUN_10087b1f8(void)

{
  return ZEXT816(0x100f088d0);
}



/* Address: 0x10087b208 | thunk_FUN_10087b20c */

void thunk_FUN_10087b20c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe90b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f494;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f494,&DAT_100f088d0);
  DAT_100fe90b8 = pTVar1;
  return;
}



/* Address: 0x10087b20c | FUN_10087b20c */

void FUN_10087b20c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe90b8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7f494;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7f494,&DAT_100f088d0);
  DAT_100fe90b8 = pTVar1;
  return;
}



/* Address: 0x10087b24c | FUN_10087b24c */

undefined8 FUN_10087b24c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe90c0;
  FUN_1000f7830(&DAT_100fe90c0,&DAT_100c7f4c0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10087b294 | FUN_10087b294 */

void FUN_10087b294(void)

{
  undefined *puVar1;
  
  if (DAT_100fe90c8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__Collection_100eac248;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__Collection_100eac248,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fe90c8 = puVar1;
  return;
}



/* Address: 0x10087b2d4 | FUN_10087b2d4 */

void FUN_10087b2d4(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x3c) {
    return;
  }
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x10087b2e8 | FUN_10087b2e8 */

void FUN_10087b2e8(undefined1 *param_1,long param_2,long param_3,long param_4,long param_5)

{
  byte *pbVar1;
  byte *pbVar2;
  code *pcVar3;
  long lVar4;
  
  if (param_5 == param_3) {
    if (param_5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10087b340);
      (*pcVar3)();
    }
    lVar4 = 0;
    do {
      if (param_5 == lVar4) {
        *param_1 = 1;
        return;
      }
      if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10087b33c);
        (*pcVar3)();
      }
      pbVar1 = (byte *)(param_4 + lVar4);
      pbVar2 = (byte *)(param_2 + lVar4);
      lVar4 = lVar4 + 1;
    } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
  }
  *param_1 = 0;
  return;
}



/* Address: 0x10087b340 | FUN_10087b340 */

void FUN_10087b340(undefined8 *param_1)

{
  param_1[1] = 0x22;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x10087b358 | FUN_10087b358 */

void FUN_10087b358(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  
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
  return;
}



/* Address: 0x10087b3b8 | thunk_FUN_10087b3d4 */

void thunk_FUN_10087b3d4(void)

{
  FUN_10087b3d4();
  return;
}



/* Address: 0x10087b3bc | FUN_10087b3bc */

undefined8 FUN_10087b3bc(void)

{
  return 0x14000;
}



/* Address: 0x10087b3d4 | FUN_10087b3d4 */

undefined * FUN_10087b3d4(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined2 local_30;
  
  uStack_48 = 0;
  local_50 = 0;
  uStack_38 = 0;
  uStack_40 = 0;
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  local_30 = 0xff00;
  CVar1.unknown = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(0x10,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 0x10;
  FUN_10087b514(&local_70,_Var2.unknown + 0x20);
  FUN_10087b514(&local_70,_Var2.unknown + 0x68);
  FUN_10087b514(&local_70,_Var2.unknown + 0xb0);
  FUN_10087b514(&local_70,_Var2.unknown + 0xf8);
  FUN_10087b514(&local_70,_Var2.unknown + 0x140);
  FUN_10087b514(&local_70,_Var2.unknown + 0x188);
  FUN_10087b514(&local_70,_Var2.unknown + 0x1d0);
  FUN_10087b514(&local_70,_Var2.unknown + 0x218);
  FUN_10087b514(&local_70,_Var2.unknown + 0x260);
  FUN_10087b514(&local_70,_Var2.unknown + 0x2a8);
  FUN_10087b514(&local_70,_Var2.unknown + 0x2f0);
  FUN_10087b514(&local_70,_Var2.unknown + 0x338);
  FUN_10087b514(&local_70,_Var2.unknown + 0x380);
  FUN_10087b514(&local_70,_Var2.unknown + 0x3c8);
  FUN_10087b514(&local_70,_Var2.unknown + 0x410);
  *(undefined8 *)(_Var2.unknown + 0x480) = uStack_48;
  *(undefined8 *)(_Var2.unknown + 0x478) = local_50;
  *(undefined8 *)(_Var2.unknown + 0x490) = uStack_38;
  *(undefined8 *)(_Var2.unknown + 0x488) = uStack_40;
  *(undefined2 *)(_Var2.unknown + 0x498) = local_30;
  *(undefined8 *)(_Var2.unknown + 0x460) = uStack_68;
  *(undefined8 *)(_Var2.unknown + 0x458) = local_70;
  *(undefined8 *)(_Var2.unknown + 0x470) = uStack_58;
  *(undefined8 *)(_Var2.unknown + 0x468) = uStack_60;
  return _Var2.unknown;
}



/* Address: 0x10087b510 | thunk_FUN_1008b5868 */

void thunk_FUN_1008b5868(void)

{
  FUN_1008b5868();
  return;
}



/* Address: 0x10087b514 | FUN_10087b514 */

undefined8 FUN_10087b514(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10087b564 | FUN_10087b564 */

void FUN_10087b564(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fe90e0,&DAT_100f08978);
  return;
}



/* Address: 0x10087b578 | FUN_10087b578 */

void FUN_10087b578(void)

{
  return;
}



/* Address: 0x10087b57c | FUN_10087b57c */

void FUN_10087b57c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x10087b5c0 | FUN_10087b5c0 */

int FUN_10087b5c0(ulong *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x19] != '\0')) {
    return (int)*param_1 + 0x7fffffff;
  }
  uVar2 = *param_1;
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10087b61c | FUN_10087b61c */

void FUN_10087b61c(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x19) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)param_2;
      return;
    }
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
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 0x19) = 1;
    }
  }
  return;
}



/* Address: 0x10087b6a0 | FUN_10087b6a0 */

void FUN_10087b6a0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fe90e8,&DAT_100f089f8);
  return;
}


