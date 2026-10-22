/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100876058 | FUN_100876058 */

void FUN_100876058(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061e800(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x100876060 | FUN_100876060 */

void FUN_100876060(void)

{
  FUN_10087665c();
  return;
}



/* Address: 0x100876074 | FUN_100876074 */

void FUN_100876074(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_10061f240(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x10087607c | FUN_10087607c */

void FUN_10087607c(void)

{
  FUN_10061e600();
  return;
}



/* Address: 0x100876084 | FUN_100876084 */

void FUN_100876084(void)

{
  FUN_10061e62c();
  return;
}



/* Address: 0x10087608c | thunk_FUN_100875b80 */

void thunk_FUN_100875b80(void)

{
  FUN_100875b80();
  return;
}



/* Address: 0x100876090 | FUN_100876090 */

void FUN_100876090(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e678(param_1,*unaff_x20);
  return;
}



/* Address: 0x100876098 | FUN_100876098 */

void FUN_100876098(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10061e68c(param_1,*unaff_x20);
  return;
}



/* Address: 0x1008760a0 | FUN_1008760a0 */

void FUN_1008760a0(void)

{
  thunk_FUN_10061ecd8();
  return;
}



/* Address: 0x1008760a8 | FUN_1008760a8 */

void FUN_1008760a8(void)

{
  thunk_FUN_10061f7a8();
  return;
}



/* Address: 0x1008760b0 | FUN_1008760b0 */

void FUN_1008760b0(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  return;
}



/* Address: 0x1008760f0 | FUN_1008760f0 */

void FUN_1008760f0(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x11) = param_2;
  return;
}



/* Address: 0x100876100 | FUN_100876100 */

/* WARNING: Removing unreachable block (ram,0x000100876224) */

void FUN_100876100(void)

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
  char *pcVar11;
  char *pcVar12;
  undefined *puVar14;
  char *pcVar15;
  char *pcVar16;
  char *in_x3;
  char *pcVar17;
  long unaff_x20;
  char *pcVar18;
  char *pcVar19;
  String SVar20;
  char *local_f0;
  char *pcStack_e8;
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
  _StringGuts _Var13;
  
  pcVar11 = &DAT_100fe8bf8;
  puVar14 = &DAT_100c7f0f8;
  pcVar8 = pcVar11;
  FUN_1000f7830(&DAT_100fe8bf8,&DAT_100c7f0f8);
  FUN_100876af4();
  cVar4 = (char)((ulong)puVar14 >> 0x38);
  pcVar18 = pcVar8;
  if (cVar4 == '\0') {
    uVar2 = *(undefined1 *)(unaff_x20 + 0x10);
    uVar3 = *(undefined1 *)(unaff_x20 + 0x11);
    _swift_retain(pcVar8);
    _swift_bridgeObjectRetain(pcVar11);
    pcVar19 = pcVar11;
    FUN_10087b074(pcVar8,pcVar11,puVar14,uVar2,uVar3);
    _swift_bridgeObjectRelease(pcVar11);
    _swift_release(pcVar8);
    local_e0 = 0;
    local_d8 = &DAT_100f08218;
    local_af = 2;
    local_f0 = pcVar18;
    pcStack_e8 = pcVar19;
    _swift_retain(pcVar18);
    _swift_retain(pcVar19);
    FUN_100626ce0(&local_f0);
    _swift_bridgeObjectRelease(pcVar11);
    _swift_release(pcVar8);
    _swift_release(pcVar19);
  }
  else {
    if (cVar4 == '\x01') {
      local_d8 = &DAT_100f08218;
      local_e0 = CONCAT17(1,(int7)puVar14);
      local_af = 2;
      local_f0 = pcVar8;
      pcStack_e8 = pcVar11;
      _swift_retain(pcVar8);
      FUN_100626ce0(&local_f0);
      FUN_100877974(pcVar8,pcVar11,puVar14,1);
      goto LAB_1008764dc;
    }
    if (pcVar8 == (char *)0x0) {
      pcVar18 = (char *)0x0;
    }
    else {
      thunk_FUN_10085c548();
      FUN_1005f4d50(pcVar8,pcVar11);
      FUN_10085d7bc();
      pcVar19 = pcVar8;
      FUN_1005f4d50(pcVar8,pcVar11);
      if (pcVar19 != (char *)0x0) {
        pcVar19 = (char *)0x0;
        bVar5 = true;
        do {
          pcVar10 = pcVar19;
          pcVar9 = pcVar8;
          pcVar15 = pcVar11;
          FUN_10089ff10(pcVar19,pcVar8,pcVar11);
          pcVar1 = pcVar19 + 1;
          if (SCARRY8((long)pcVar19,1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100876508);
            (*pcVar6)();
          }
          pcVar16 = pcVar15;
          pcVar17 = in_x3;
          if (bVar5) {
            SVar20.bridgeObject = pcVar9;
            SVar20.str = pcVar10;
            SVar20 = Swift::String::lowercased(SVar20);
            _Var13.unknown = SVar20.bridgeObject;
            if ((SVar20.str == (undefined *)0x74736f68) && (_Var13.unknown == &DAT_e400000000000000)
               ) {
              _swift_bridgeObjectRelease(in_x3);
              _swift_bridgeObjectRelease(pcVar9);
              pcVar9 = &DAT_e400000000000000;
            }
            else {
              pcVar16 = (char *)0x74736f68;
              pcVar17 = &DAT_e400000000000000;
              bVar7 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar20.str,_Var13,(_StringComparisonResult)0x68);
              _swift_bridgeObjectRelease(_Var13.unknown);
              if (!bVar7) goto LAB_1008762ac;
              _swift_bridgeObjectRelease(in_x3);
            }
            _swift_bridgeObjectRelease(pcVar9);
            bVar5 = false;
          }
          else {
LAB_1008762ac:
            _swift_bridgeObjectRetain(pcVar9);
            pcVar12 = pcVar9;
            thunk_FUN_10085af9c(pcVar10);
            if (pcVar12 == (char *)0x0) {
              _swift_bridgeObjectRelease(in_x3);
              _swift_bridgeObjectRelease(pcVar9);
            }
            else {
              _swift_bridgeObjectRelease(pcVar9);
              FUN_100857650(&local_a0,pcVar10,pcVar12,pcVar16,pcVar17,pcVar15,in_x3);
              pcStack_e8 = (char *)uStack_98;
              local_f0 = local_a0;
              local_d8 = (undefined *)uStack_88;
              local_e0 = uStack_90;
              uStack_c8 = uStack_78;
              local_d0 = local_80;
              local_c0 = local_70;
              pcVar17 = pcVar18;
              FUN_10085d8f8();
              FUN_1008777d8();
              Swift::RangeReplaceableCollection::_insert();
            }
          }
          pcVar9 = pcVar8;
          FUN_1005f4d50(pcVar8,pcVar11);
          pcVar19 = pcVar19 + 1;
          in_x3 = pcVar17;
        } while (pcVar1 != pcVar9);
      }
      FUN_100877974(pcVar8,pcVar11,puVar14,2);
    }
    pcStack_e8 = (char *)0x0;
    local_e0 = 0x200000000000000;
    local_d8 = &DAT_100f08218;
    local_af = 2;
    local_f0 = pcVar18;
    _swift_retain(pcVar18);
    FUN_100626ce0(&local_f0);
  }
  _swift_release(pcVar18);
LAB_1008764dc:
  FUN_1005e70f4(&local_f0);
  return;
}



/* Address: 0x100876508 | thunk_FUN_100877548 */

void thunk_FUN_100877548(void)

{
  FUN_100877548();
  return;
}



/* Address: 0x10087650c | FUN_10087650c */

void FUN_10087650c(void)

{
  FUN_100876520();
  return;
}



/* Address: 0x100876520 | FUN_100876520 */

void FUN_100876520(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 in_x3;
  undefined8 in_x4;
  
  uVar1 = in_x3;
  FUN_1000f7830(in_x3,in_x4);
  FUN_100876af4();
  *param_1 = uVar1;
  param_1[1] = in_x3;
  *(int *)(param_1 + 2) = (int)in_x4;
  *(char *)((long)param_1 + 0x16) = (char)((ulong)in_x4 >> 0x30);
  *(short *)((long)param_1 + 0x14) = (short)((ulong)in_x4 >> 0x20);
  *(char *)((long)param_1 + 0x17) = (char)((ulong)in_x4 >> 0x38);
  return;
}



/* Address: 0x100876588 | FUN_100876588 */

void FUN_100876588(void)

{
  FUN_100876594();
  return;
}



/* Address: 0x100876594 | FUN_100876594 */

void FUN_100876594(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

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
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  param_1[3] = param_5;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_1008758fc(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008765ec | FUN_1008765ec */

void FUN_1008765ec(void)

{
  FUN_1008765f8();
  return;
}



/* Address: 0x1008765f8 | FUN_1008765f8 */

void FUN_1008765f8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar3 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined4)param_4;
  uVar1 = param_5;
  FUN_100876708();
  *param_1 = param_5;
  param_1[1] = uVar1;
  *(undefined4 *)(param_1 + 2) = uVar2;
  *(char *)((long)param_1 + 0x16) = (char)((uint)uVar3 >> 0x10);
  *(short *)((long)param_1 + 0x14) = (short)uVar3;
  *(char *)((long)param_1 + 0x17) = (char)((uint)uVar3 >> 0x18);
  return;
}



/* Address: 0x100876644 | thunk_FUN_100876100 */

void thunk_FUN_100876100(void)

{
  FUN_100876100();
  return;
}



/* Address: 0x100876648 | FUN_100876648 */

void FUN_100876648(void)

{
  FUN_10087665c();
  return;
}



/* Address: 0x10087665c | FUN_10087665c */

void FUN_10087665c(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
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
  FUN_10087792c(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008766f0 | FUN_1008766f0 */

void FUN_1008766f0(undefined8 param_1)

{
  FUN_100876708(param_1,&DAT_100f08218);
  return;
}



/* Address: 0x1008766fc | FUN_1008766fc */

void FUN_1008766fc(undefined8 param_1)

{
  FUN_100876708(param_1,&DAT_100f082a8);
  return;
}



/* Address: 0x100876708 | FUN_100876708 */

undefined1  [16] FUN_100876708(bool param_1,void *param_2,undefined8 param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  Mirror MVar6;
  undefined *puVar7;
  Mirror MVar8;
  AnyCollection<tuple2> AVar9;
  char *pcVar10;
  ObjectIdentifier OVar11;
  ObjectIdentifier OVar12;
  undefined1 *puVar13;
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
  
  MVar6 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar6.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_120 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    iVar5 = (int)local_80;
    puVar13 = auStack_108;
    pcVar3 = (code *)(PTR___type_metadata_for_Any_100eae0c0 + 8);
    _swift_dynamicCast();
    puStack_a0 = puVar13;
    param_4 = param_2;
    if ((iVar5 != 0) && (pcVar3 = (code *)local_70, (ulong)local_70 >> 0x38 < 0xff)) {
      return local_80;
    }
  }
  else if (local_87 == '\0') {
    pcVar3 = (code *)(ulong)CONCAT34(local_b4,local_b8);
    FUN_10000c650(local_c8);
    puStack_a0 = local_c0;
  }
  else {
    local_110 = (void *)local_a8;
    local_118 = (code *)local_98;
    _swift_release(local_c0);
    _swift_release((ulong)local_c8 & 0x3fffffffffffffff);
    pcVar3 = local_118;
    FUN_1005d8fac(local_110);
    param_4 = pvStack_90;
  }
  local_c8 = (undefined *)0x0;
  local_c0 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x38,(_StringGuts)puStack_a0);
  local_e8.unknown = local_c8;
  _Stack_e0 = (__uint64)local_c0;
  SVar18.bridgeObject = (void *)0x8000000100daf900;
  SVar18.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = (char *)pcVar3;
  Swift::String::append(SVar18,SVar22);
  SVar18 = Swift::__typeName(param_1);
  SVar23.bridgeObject = param_4;
  SVar23.str = (char *)pcVar3;
  Swift::String::append(SVar18,SVar23);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar19.bridgeObject = (void *)0xeb0000000020646e;
  SVar19.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = (char *)pcVar3;
  Swift::String::append(SVar19,SVar24);
  local_b0 = &DAT_100ef1ad8;
  puVar7 = &DAT_100f08520;
  _swift_allocObject(&DAT_100f08520,0x52,7);
  local_c8 = puVar7;
  FUN_100877858();
  MVar8 = Swift::Mirror::_init();
  AVar9 = Swift::Mirror::_get_children(MVar8);
  local_118 = *(code **)(lVar17 + 8);
  (*local_118)(auStack_120 + -uVar15,MVar6.unknown);
  pcVar1 = *(char **)(AVar9.unknown + 0x10);
  pvVar14 = *(void **)(AVar9.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar9.unknown + 0x20);
  pcVar10 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_110 = pvVar14;
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar12 = Swift::_AnyIndexBox::get__typeID();
  if (OVar11.unknown != OVar12.unknown) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008769c8);
    (*pcVar3)();
  }
  pvVar14 = local_110;
  bVar4 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar2);
  if (bVar4) {
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar9.unknown);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008769c4);
    (*pcVar3)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar1);
  _swift_release(AVar9.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar8 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar8);
  (*local_118)(lVar16,MVar6.unknown);
  SVar18 = Swift::__typeName(SUB81(MVar8.unknown,0));
  SVar25.bridgeObject = pvVar14;
  SVar25.str = pcVar10;
  Swift::String::append(SVar18,SVar25);
  _swift_bridgeObjectRelease(SVar18.bridgeObject);
  SVar20.bridgeObject = (void *)0xef2073746e65746e;
  SVar20.str = (char *)0x6f63206874697720;
  SVar26.bridgeObject = pvVar14;
  SVar26.str = pcVar10;
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
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100876acc);
  (*pcVar3)();
}



/* Address: 0x100876acc | FUN_100876acc */

void FUN_100876acc(undefined8 param_1)

{
  FUN_100876af4(param_1,&DAT_100fe8bf0,&DAT_100c7f0f0);
  return;
}



/* Address: 0x100876ae0 | FUN_100876ae0 */

void FUN_100876ae0(undefined8 param_1)

{
  FUN_100876af4(param_1,&DAT_100fe8e48,&DAT_100c7f258);
  return;
}



/* Address: 0x100876af4 | FUN_100876af4 */

undefined1  [16] FUN_100876af4(bool param_1,void *param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  StaticString file;
  __uint64 line;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  Mirror MVar5;
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
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar17 = *(long *)(MVar5.unknown + -8);
  uVar15 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar16 = (long)(auStack_120 + -uVar15) - uVar15;
  FUN_100877858();
  if (local_87 == '\x02') {
    FUN_100011080(&local_c8,&local_e8);
    FUN_100011080(&local_e8,auStack_108);
    FUN_1000f7830(param_2,param_3);
    iVar4 = (int)local_80;
    puVar12 = auStack_108;
    pcVar13 = PTR___type_metadata_for_Any_100eae0c0 + 8;
    _swift_dynamicCast();
    puStack_a0 = puVar12;
    local_98 = pcVar13;
    param_4 = param_2;
    if ((iVar4 != 0) && (local_98 = local_70, (ulong)local_70 >> 0x38 < 0xff)) {
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
  puVar6 = &DAT_100f08520;
  _swift_allocObject(&DAT_100f08520,0x52,7);
  local_c8 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_118 = *(code **)(lVar17 + 8);
  (*local_118)(auStack_120 + -uVar15,MVar5.unknown);
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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100876dc4);
    (*pcVar2)();
  }
  pvVar14 = local_110;
  bVar3 = Swift::_AnyIndexBox::__isEqual();
  _swift_unknownObjectRelease(uVar1);
  if (bVar3) {
    _swift_unknownObjectRelease(pcVar13);
    _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100876dc0);
    (*pcVar2)();
  }
  Swift::_AnyCollectionBox::_get_subscript();
  _swift_unknownObjectRelease(pcVar13);
  _swift_release(AVar8.unknown);
  _swift_bridgeObjectRelease(local_c0);
  MVar7 = Swift::Mirror::_init();
  Swift::Mirror::_get_subjectType(MVar7);
  (*local_118)(lVar16,MVar5.unknown);
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
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100876ec8);
  (*pcVar2)();
}



/* Address: 0x100876ec8 | FUN_100876ec8 */

void FUN_100876ec8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100876f00();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100876ee4 | FUN_100876ee4 */

void FUN_100876ee4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100877024();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100876f00 | FUN_100876f00 */

undefined * FUN_100876f00(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100877024);
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
    puVar3 = &DAT_100fe8e68;
    FUN_1000f7830(&DAT_100fe8e68,&DAT_100c7f278);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x38) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100f06ee0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x38 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x38);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100877024 | FUN_100877024 */

undefined * FUN_100877024(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100877154);
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
    puVar3 = &DAT_100fe8e58;
    FUN_1000f7830(&DAT_100fe8e58,&DAT_100c7f268);
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
    puVar5 = &DAT_100fe8e60;
    FUN_1000f7830(&DAT_100fe8e60,&DAT_100c7f270);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100877154 | FUN_100877154 */

/* WARNING: Removing unreachable block (ram,0x000100877264) */

void FUN_100877154(void)

{
  char *pcVar1;
  char cVar2;
  bool bVar3;
  code *pcVar4;
  bool bVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  undefined *puVar12;
  char *pcVar13;
  char *pcVar14;
  char *in_x3;
  char *pcVar15;
  char *pcVar16;
  char *pcVar17;
  String SVar18;
  char *local_f0;
  char *pcStack_e8;
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
  _StringGuts _Var11;
  
  pcVar9 = &DAT_100fe8e50;
  puVar12 = &DAT_100c7f260;
  pcVar6 = pcVar9;
  FUN_1000f7830(&DAT_100fe8e50,&DAT_100c7f260);
  FUN_100876af4();
  cVar2 = (char)((ulong)puVar12 >> 0x38);
  pcVar16 = pcVar6;
  if (cVar2 == '\0') {
    _swift_retain(pcVar6);
    _swift_bridgeObjectRetain(pcVar9);
    pcVar17 = pcVar9;
    FUN_100879c9c(pcVar6,pcVar9,puVar12);
    _swift_bridgeObjectRelease(pcVar9);
    _swift_release(pcVar6);
    local_e0 = 0;
    local_d8 = &DAT_100f082a8;
    local_af = 2;
    local_f0 = pcVar16;
    pcStack_e8 = pcVar17;
    _swift_retain(pcVar16);
    _swift_retain(pcVar17);
    FUN_100626ce0(&local_f0);
    _swift_bridgeObjectRelease(pcVar9);
    _swift_release(pcVar6);
    _swift_release(pcVar17);
  }
  else {
    if (cVar2 == '\x01') {
      local_d8 = &DAT_100f082a8;
      local_e0 = CONCAT17(1,(int7)puVar12);
      local_af = 2;
      local_f0 = pcVar6;
      pcStack_e8 = pcVar9;
      _swift_retain(pcVar6);
      FUN_100626ce0(&local_f0);
      FUN_100877974(pcVar6,pcVar9,puVar12,1);
      goto LAB_10087751c;
    }
    if (pcVar6 == (char *)0x0) {
      pcVar16 = (char *)0x0;
    }
    else {
      thunk_FUN_10085c548();
      FUN_1005f4d50(pcVar6,pcVar9);
      FUN_10085d7bc();
      pcVar17 = pcVar6;
      FUN_1005f4d50(pcVar6,pcVar9);
      if (pcVar17 != (char *)0x0) {
        pcVar17 = (char *)0x0;
        bVar3 = true;
        do {
          pcVar8 = pcVar17;
          pcVar7 = pcVar6;
          pcVar13 = pcVar9;
          FUN_10089ff10(pcVar17,pcVar6,pcVar9);
          pcVar1 = pcVar17 + 1;
          if (SCARRY8((long)pcVar17,1)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100877548);
            (*pcVar4)();
          }
          pcVar14 = pcVar13;
          pcVar15 = in_x3;
          if (bVar3) {
            SVar18.bridgeObject = pcVar7;
            SVar18.str = pcVar8;
            SVar18 = Swift::String::lowercased(SVar18);
            _Var11.unknown = SVar18.bridgeObject;
            if ((SVar18.str == (undefined *)0x74736f68) && (_Var11.unknown == &DAT_e400000000000000)
               ) {
              _swift_bridgeObjectRelease(in_x3);
              _swift_bridgeObjectRelease(pcVar7);
              pcVar7 = &DAT_e400000000000000;
            }
            else {
              pcVar14 = (char *)0x74736f68;
              pcVar15 = &DAT_e400000000000000;
              bVar5 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)SVar18.str,_Var11,(_StringComparisonResult)0x68);
              _swift_bridgeObjectRelease(_Var11.unknown);
              if (!bVar5) goto LAB_1008772ec;
              _swift_bridgeObjectRelease(in_x3);
            }
            _swift_bridgeObjectRelease(pcVar7);
            bVar3 = false;
          }
          else {
LAB_1008772ec:
            _swift_bridgeObjectRetain(pcVar7);
            pcVar10 = pcVar7;
            thunk_FUN_10085af9c(pcVar8);
            if (pcVar10 == (char *)0x0) {
              _swift_bridgeObjectRelease(in_x3);
              _swift_bridgeObjectRelease(pcVar7);
            }
            else {
              _swift_bridgeObjectRelease(pcVar7);
              FUN_100857650(&local_a0,pcVar8,pcVar10,pcVar14,pcVar15,pcVar13,in_x3);
              pcStack_e8 = (char *)uStack_98;
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
          FUN_1005f4d50(pcVar6,pcVar9);
          pcVar17 = pcVar17 + 1;
          in_x3 = pcVar15;
        } while (pcVar1 != pcVar7);
      }
      FUN_100877974(pcVar6,pcVar9,puVar12,2);
    }
    pcStack_e8 = (char *)0x0;
    local_e0 = 0x200000000000000;
    local_d8 = &DAT_100f082a8;
    local_af = 2;
    local_f0 = pcVar16;
    _swift_retain(pcVar16);
    FUN_100626ce0(&local_f0);
  }
  _swift_release(pcVar16);
LAB_10087751c:
  FUN_1005e70f4(&local_f0);
  return;
}



/* Address: 0x100877548 | FUN_100877548 */

void FUN_100877548(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined1 local_67;
  
  puVar2 = &DAT_100f082a8;
  puVar5 = puVar2;
  uVar7 = param_3;
  FUN_100876708();
  cVar1 = (char)((ulong)uVar7 >> 0x38);
  if (cVar1 == '\0') {
    _swift_retain(puVar2);
    _swift_retain(puVar5);
    puVar3 = puVar2;
    FUN_10086e7c4(puVar2,puVar5);
    _swift_bridgeObjectRelease(uVar7);
    puVar9 = puVar5;
    FUN_10086e7c4(puVar2);
    uVar6 = (uint)puVar9;
    thunk_FUN_1008a2dac();
    _swift_retain(puVar5);
    FUN_1008794bc();
    _swift_release(puVar5);
    _swift_release(puVar2);
    puVar4 = (undefined *)0x10001;
    FUN_10089bca4();
    puVar9 = &DAT_100fe8e48;
    FUN_1000f7830(&DAT_100fe8e48,&DAT_100c7f258);
    local_98 = (ulong)(uVar6 & 0xff);
    local_67 = 2;
    local_a8 = puVar4;
    puStack_a0 = puVar3;
    local_90 = puVar9;
    _swift_retain(puVar4);
    _swift_bridgeObjectRetain(puVar3);
    FUN_100626ebc(&local_a8,param_3);
    _swift_release(puVar5);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(puVar3);
    _swift_release(puVar4);
  }
  else {
    if (cVar1 == '\x01') {
      puVar9 = &DAT_100fe8e48;
      FUN_1000f7830(&DAT_100fe8e48,&DAT_100c7f258);
      local_98 = CONCAT17(1,(int7)uVar7);
      local_67 = 2;
      local_a8 = puVar2;
      puStack_a0 = puVar5;
      local_90 = puVar9;
      _swift_retain(puVar2);
      FUN_100626ebc(&local_a8,param_3);
      uVar8 = 1;
    }
    else {
      if (puVar2 == (undefined *)0x0) {
        puVar9 = (undefined *)0x0;
        puStack_a0 = (undefined *)0x0;
      }
      else {
        puVar9 = puVar2;
        puVar3 = puVar5;
        _swift_retain();
        FUN_1008794bc();
        puStack_a0 = (undefined *)((ulong)puVar3 & 0xff);
      }
      puVar3 = &DAT_100fe8e48;
      FUN_1000f7830(&DAT_100fe8e48,&DAT_100c7f258);
      local_98 = 0x200000000000000;
      local_67 = 2;
      local_a8 = puVar9;
      local_90 = puVar3;
      FUN_100626ebc(&local_a8,param_3);
      uVar8 = 2;
    }
    FUN_100875938(puVar2,puVar5,uVar7,uVar8);
  }
  FUN_1005e70f4(&local_a8);
  return;
}



/* Address: 0x1008777a4 | FUN_1008777a4 */

void FUN_1008777a4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008777d0 | FUN_1008777d0 */

void FUN_1008777d0(void)

{
  long unaff_x20;
  
  FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008777d8 | FUN_1008777d8 */

void FUN_1008777d8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fe8c00 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c7ddc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7ddc0,&DAT_100f072e0);
  DAT_100fe8c00 = pTVar1;
  return;
}



/* Address: 0x100877818 | FUN_100877818 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100877818(void)

{
  return ZEXT816(0x100fe8d38);
}



/* Address: 0x100877838 | FUN_100877838 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100877838(void)

{
  return ZEXT816(0x100fe8de0);
}



/* Address: 0x100877858 | FUN_100877858 */

undefined8 FUN_100877858(undefined8 param_1,undefined8 param_2)

{
  FUN_10065d0f8(param_2,param_1);
  return param_2;
}



/* Address: 0x100877894 | FUN_100877894 */

void FUN_100877894(void)

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



/* Address: 0x10087792c | FUN_10087792c */

void FUN_10087792c(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

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
  FUN_100656200();
  return;
}



/* Address: 0x100877974 | FUN_100877974 */

void FUN_100877974(undefined8 param_1,undefined8 param_2,undefined8 param_3,char param_4)

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
  _swift_release();
  return;
}



/* Address: 0x1008779bc | thunk_FUN_100876018 */

void thunk_FUN_100876018(void)

{
  FUN_100876018();
  return;
}



/* Address: 0x1008779c0 | thunk_FUN_100876050 */

void thunk_FUN_100876050(void)

{
  FUN_100876050();
  return;
}



/* Address: 0x1008779c4 | thunk_FUN_100876058 */

void thunk_FUN_100876058(void)

{
  FUN_100876058();
  return;
}



/* Address: 0x1008779c8 | thunk_FUN_100876074 */

void thunk_FUN_100876074(void)

{
  FUN_100876074();
  return;
}



/* Address: 0x1008779cc | thunk_FUN_10087607c */

void thunk_FUN_10087607c(void)

{
  FUN_10087607c();
  return;
}



/* Address: 0x1008779d0 | thunk_FUN_100876084 */

void thunk_FUN_100876084(void)

{
  FUN_100876084();
  return;
}



/* Address: 0x1008779d4 | thunk_FUN_1008760a0 */

void thunk_FUN_1008760a0(void)

{
  FUN_1008760a0();
  return;
}



/* Address: 0x1008779d8 | thunk_FUN_1008760a8 */

void thunk_FUN_1008760a8(void)

{
  FUN_1008760a8();
  return;
}



/* Address: 0x1008779dc | thunk_FUN_1008766f0 */

void thunk_FUN_1008766f0(undefined8 param_1)

{
  FUN_100876708(param_1,&DAT_100f08218);
  return;
}



/* Address: 0x1008779e0 | thunk_FUN_1008766fc */

void thunk_FUN_1008766fc(undefined8 param_1)

{
  FUN_100876708(param_1,&DAT_100f082a8);
  return;
}



/* Address: 0x1008779e4 | thunk_FUN_100876020 */

void thunk_FUN_100876020(void)

{
  FUN_100876020();
  return;
}



/* Address: 0x1008779e8 | thunk_FUN_100876028 */

void thunk_FUN_100876028(void)

{
  FUN_100876028();
  return;
}



/* Address: 0x1008779ec | thunk_FUN_100876030 */

void thunk_FUN_100876030(void)

{
  FUN_100876030();
  return;
}



/* Address: 0x1008779f0 | thunk_FUN_100876038 */

void thunk_FUN_100876038(void)

{
  FUN_100876038();
  return;
}



/* Address: 0x1008779f4 | thunk_FUN_100876040 */

void thunk_FUN_100876040(void)

{
  FUN_100876040();
  return;
}



/* Address: 0x1008779f8 | thunk_FUN_100876048 */

void thunk_FUN_100876048(void)

{
  FUN_100876048();
  return;
}



/* Address: 0x1008779fc | thunk_FUN_100876090 */

void thunk_FUN_100876090(void)

{
  FUN_100876090();
  return;
}



/* Address: 0x100877a00 | thunk_FUN_100876098 */

void thunk_FUN_100876098(void)

{
  FUN_100876098();
  return;
}



/* Address: 0x100877a04 | thunk_FUN_10087872c */

void thunk_FUN_10087872c(void)

{
  FUN_10087872c();
  return;
}



/* Address: 0x100877a08 | FUN_100877a08 */

/* WARNING: Removing unreachable block (ram,0x000100877b30) */
/* WARNING: Removing unreachable block (ram,0x000100877e6c) */
/* WARNING: Removing unreachable block (ram,0x000100877b40) */
/* WARNING: Removing unreachable block (ram,0x000100877b60) */
/* WARNING: Removing unreachable block (ram,0x000100877ea0) */

void FUN_100877a08(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

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
    local_e0 = 0;
    local_d8 = &DAT_100f08218;
    local_af = 2;
    local_f0 = pcVar18;
    puStack_e8 = puVar12;
    _swift_retain(pcVar18);
    _swift_retain(puVar12);
    FUN_100626ebc(&local_f0,param_3);
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
      local_d8 = &DAT_100f08218;
      local_e0 = CONCAT17(1,(int7)uVar15);
      local_af = 2;
      local_f0 = pcVar8;
      puStack_e8 = puVar11;
      FUN_100656200(pcVar8,puVar11,uVar15);
      FUN_100626ebc(&local_f0,param_3);
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
              FUN_100857650(&local_a0,pcVar10,pcVar13,puVar16,pcVar17,puVar12,param_4);
              puStack_e8 = (undefined *)uStack_98;
              local_f0 = local_a0;
              local_d8 = (undefined *)uStack_88;
              local_e0 = uStack_90;
              uStack_c8 = uStack_78;
              local_d0 = local_80;
              local_c0 = local_70;
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
    local_e0 = 0x200000000000000;
    local_d8 = &DAT_100f08218;
    local_af = 2;
    local_f0 = pcVar18;
    _swift_retain(pcVar18);
    FUN_100626ebc(&local_f0,param_3);
  }
  _swift_release(pcVar18);
LAB_100877e44:
  FUN_1005e70f4(&local_f0);
  return;
}


