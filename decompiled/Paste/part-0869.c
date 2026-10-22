/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10096c4f4 | FUN_10096c4f4 */

int FUN_10096c4f4(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 0x12);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10096c550 | FUN_10096c550 */

void FUN_10096c550(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[9] = (ulong)param_2;
      return;
    }
  }
  else {
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
      *(undefined1 *)(param_1 + 10) = 1;
    }
  }
  return;
}



/* Address: 0x10096c5b8 | FUN_10096c5b8 */

undefined1  [16] FUN_10096c5b8(void)

{
  return ZEXT816(0x100f1ca50);
}



/* Address: 0x10096c5c8 | FUN_10096c5c8 */

void FUN_10096c5c8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  StaticString file;
  __uint64 line;
  code *pcVar3;
  bool bVar4;
  Mirror MVar5;
  undefined *puVar6;
  Mirror MVar7;
  AnyCollection<tuple2> AVar8;
  char *pcVar9;
  ObjectIdentifier OVar10;
  ObjectIdentifier OVar11;
  void *pvVar12;
  ulong uVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 uStack_c0;
  undefined4 auStack_b8 [2];
  code *local_b0;
  void *local_a8;
  undefined *local_a0;
  __uint64 local_98;
  undefined *local_88;
  StaticString local_70;
  __uint64 _Stack_68;
  
  MVar5 = Swift::Mirror::typeMetadataAccessor();
  lVar16 = *(long *)(MVar5.unknown + -8);
  uVar13 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar15 = (long)&local_b0 - uVar13;
  lVar14 = lVar15 - uVar13;
  MVar7 = MVar5;
  FUN_10096b33c();
  if (MVar7.unknown != (undefined *)0x0) {
    return;
  }
  local_a0 = (undefined *)0x0;
  local_98 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x38,param_2);
  local_70.unknown = local_a0;
  _Stack_68 = local_98;
  SVar19.bridgeObject = (void *)0x8000000100daf900;
  SVar19.str = (char *)0xd000000000000018;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar19,SVar22);
  SVar17.bridgeObject = &DAT_e700000000000000;
  SVar17.str = (char *)0x6c656e6e616843;
  SVar23.bridgeObject = param_4;
  SVar23.str = param_3;
  Swift::String::append(SVar17,SVar23);
  SVar18.bridgeObject = (void *)0xeb0000000020646e;
  SVar18.str = (char *)0x756f662074756220;
  SVar24.bridgeObject = param_4;
  SVar24.str = param_3;
  Swift::String::append(SVar18,SVar24);
  local_88 = &DAT_100ef1ad8;
  puVar6 = &DAT_100f1ca78;
  _swift_allocObject(&DAT_100f1ca78,0x52,7);
  local_a0 = puVar6;
  FUN_100877858();
  MVar7 = Swift::Mirror::_init();
  AVar8 = Swift::Mirror::_get_children(MVar7);
  local_b0 = *(code **)(lVar16 + 8);
  (*local_b0)(lVar15,MVar5.unknown);
  pcVar1 = *(char **)(AVar8.unknown + 0x10);
  pvVar12 = *(void **)(AVar8.unknown + 0x18);
  uVar2 = *(undefined8 *)(AVar8.unknown + 0x20);
  pcVar9 = pcVar1;
  _swift_getObjectType();
  _swift_unknownObjectRetain(pcVar1);
  _swift_unknownObjectRetain(uVar2);
  local_a8 = pvVar12;
  OVar10 = Swift::_AnyIndexBox::get__typeID();
  _swift_getObjectType(uVar2);
  OVar11 = Swift::_AnyIndexBox::get__typeID();
  if (OVar10.unknown == OVar11.unknown) {
    pvVar12 = local_a8;
    bVar4 = Swift::_AnyIndexBox::__isEqual();
    _swift_unknownObjectRelease(uVar2);
    if (bVar4) {
      _swift_unknownObjectRelease(pcVar1);
      _swift_release(AVar8.unknown);
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10096c7ac);
      (*pcVar3)();
    }
    Swift::_AnyCollectionBox::_get_subscript();
    _swift_unknownObjectRelease(pcVar1);
    _swift_release(AVar8.unknown);
    _swift_bridgeObjectRelease(local_98);
    MVar7 = Swift::Mirror::_init();
    Swift::Mirror::_get_subjectType(MVar7);
    (*local_b0)(lVar14,MVar5.unknown);
    SVar19 = Swift::__typeName(SUB81(MVar7.unknown,0));
    SVar25.bridgeObject = pvVar12;
    SVar25.str = pcVar9;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(SVar19.bridgeObject);
    SVar20.bridgeObject = (void *)0xef2073746e65746e;
    SVar20.str = (char *)0x6f63206874697720;
    SVar26.bridgeObject = pvVar12;
    SVar26.str = pcVar9;
    Swift::String::append(SVar20,SVar26);
    Swift::__print_unlocked();
    line = _Stack_68;
    file.unknown = local_70.unknown;
    *(undefined4 *)(lVar14 + -8) = 0;
    *(undefined8 *)(lVar14 + -0x10) = 0xd0;
    SVar21.bridgeObject = (void *)0x2;
    SVar21.str = (char *)0xb;
    Swift::_assertionFailure((StaticString)0x100d8deb0,SVar21,file,line,0xdaf940);
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10096c8b0);
    (*pcVar3)();
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10096c7b0);
  (*pcVar3)();
}



/* Address: 0x10096c8b0 | FUN_10096c8b0 */

void FUN_10096c8b0(void)

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



/* Address: 0x10096c948 | FUN_10096c948 */

void FUN_10096c948(ulong param_1,undefined8 param_2)

{
  if (param_1 < 7) {
    return;
  }
  _swift_release();
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x10096c978 | FUN_10096c978 */

void FUN_10096c978(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10096c9ac | FUN_10096c9ac */

void FUN_10096c9ac(void)

{
  long unaff_x20;
  
  FUN_100969ee4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10096c9c8 | FUN_10096c9c8 */

void FUN_10096c9c8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef428 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87b08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87b08,&DAT_100f1c8b0);
  DAT_100fef428 = pTVar1;
  return;
}



/* Address: 0x10096ca08 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10096ca0c | thunk_FUN_10096bc2c */

void thunk_FUN_10096bc2c(void)

{
  thunk_FUN_10096bc2c();
  return;
}



/* Address: 0x10096ca10 | thunk_FUN_10096bf08 */

void thunk_FUN_10096bf08(void)

{
  thunk_FUN_10096bf08();
  return;
}



/* Address: 0x10096ca14 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10096ca18 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10096ca1c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10096ca20 | FUN_10096ca20 */

void FUN_10096ca20(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  return;
}



/* Address: 0x10096ca48 | FUN_10096ca48 */

void FUN_10096ca48(void)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  return;
}



/* Address: 0x10096ca58 | FUN_10096ca58 */

void FUN_10096ca58(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  FUN_100627f08();
  uVar3 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x18))();
  _swift_unknownObjectRelease(param_1);
  lVar2 = 0x200;
  FUN_100488140(0x200,uVar3,param_2,param_3,param_4);
  _swift_beginAccess(lVar2 + 0x10,auStack_58,0,0);
  uVar1 = *(undefined4 *)(lVar2 + 0x10);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_70,1,0);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
  *(long *)(unaff_x20 + 0x10) = lVar2;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined1 *)(unaff_x20 + 0x26) = 0;
  *(undefined2 *)(unaff_x20 + 0x24) = 0;
  *(undefined4 *)(unaff_x20 + 0x20) = uVar1;
  _swift_release(uVar3);
  return;
}



/* Address: 0x10096cb24 | FUN_10096cb24 */

void FUN_10096cb24(ulong param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ulong uVar2;
  ulong *puVar3;
  char *pcVar4;
  undefined8 uVar5;
  long unaff_x20;
  long lVar6;
  String SVar7;
  ulong local_d8;
  undefined8 uStack_d0;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_97;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = param_3;
  FUN_10065b5f8();
  _swift_beginAccess(unaff_x20 + 0x10,&local_d8,0x21,0);
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if (uVar2 == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce4c);
    (*pcVar1)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    lVar6 = *(long *)(unaff_x20 + 0x10);
    _swift_beginAccess(lVar6 + 0x10,auStack_78,0,0);
    uVar2 = (ulong)*(uint *)(lVar6 + 0x10);
    FUN_10061204c();
    *(ulong *)(unaff_x20 + 0x10) = uVar2;
    _swift_release(lVar6);
  }
  lVar6 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar6 + 0x10,auStack_90,0,0);
  *(undefined4 *)(unaff_x20 + 0x20) = *(undefined4 *)(lVar6 + 0x10);
  *(undefined2 *)(unaff_x20 + 0x24) = 0;
  *(undefined1 *)(unaff_x20 + 0x26) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_endAccess(&local_d8);
  _swift_beginAccess(unaff_x20 + 0x10,&local_d8,0x21,0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce50);
    (*pcVar1)();
  }
  pcVar4 = "Content-Length: ";
  FUN_10060af44("Content-Length: ",0x10,2,*(undefined4 *)(unaff_x20 + 0x1c));
  if ((long)pcVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce28);
    (*pcVar1)();
  }
  if ((ulong)pcVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce2c);
    (*pcVar1)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0x1c),(uint)pcVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce30);
    (*pcVar1)();
  }
  *(uint *)(unaff_x20 + 0x1c) = *(uint *)(unaff_x20 + 0x1c) + (uint)pcVar4;
  puVar3 = &local_d8;
  _swift_endAccess(puVar3);
  uVar2 = (ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)param_2);
  local_d8 = uVar2;
  FUN_10096e030();
  SVar7 = Swift::String::_init(&local_d8,10,0,PTR___type_metadata_for_Swift_Int_100eac6f8,puVar3);
  pcVar4 = SVar7.str;
  _swift_beginAccess(unaff_x20 + 0x10,&local_d8,0x21,0);
  if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce54);
    (*pcVar1)();
  }
  FUN_10060b1ac(pcVar4,SVar7.bridgeObject,*(undefined4 *)(unaff_x20 + 0x1c));
  if ((long)pcVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce34);
    (*pcVar1)();
  }
  if ((ulong)pcVar4 >> 0x20 == 0) {
    if (CARRY4(*(uint *)(unaff_x20 + 0x1c),(uint)pcVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce3c);
      (*pcVar1)();
    }
    *(uint *)(unaff_x20 + 0x1c) = *(uint *)(unaff_x20 + 0x1c) + (uint)pcVar4;
    _swift_endAccess(&local_d8);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    _swift_beginAccess(unaff_x20 + 0x10,&local_d8,0x21,0);
    if (*(long *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce58);
      (*pcVar1)();
    }
    pcVar4 = "\r\n\r\n";
    FUN_10060af44("\r\n\r\n",4,2,*(undefined4 *)(unaff_x20 + 0x1c));
    if ((long)pcVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce40);
      (*pcVar1)();
    }
    if ((ulong)pcVar4 >> 0x20 == 0) {
      if (CARRY4(*(uint *)(unaff_x20 + 0x1c),(uint)pcVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce48);
        (*pcVar1)();
      }
      *(uint *)(unaff_x20 + 0x1c) = *(uint *)(unaff_x20 + 0x1c) + (uint)pcVar4;
      _swift_endAccess(&local_d8);
      if (uVar2 == 0) {
        if (*(ulong *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce60);
          (*pcVar1)();
        }
        local_c8 = *(undefined4 *)(unaff_x20 + 0x20);
        local_c4 = *(undefined2 *)(unaff_x20 + 0x24);
        uStack_d0 = *(undefined8 *)(unaff_x20 + 0x18);
        local_c2 = *(undefined1 *)(unaff_x20 + 0x26);
        local_97 = 0;
        local_d8 = *(ulong *)(unaff_x20 + 0x10);
        _swift_retain();
      }
      else {
        if (*(ulong *)(unaff_x20 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce5c);
          (*pcVar1)();
        }
        local_c8 = *(undefined4 *)(unaff_x20 + 0x20);
        local_c4 = *(undefined2 *)(unaff_x20 + 0x24);
        uStack_d0 = *(undefined8 *)(unaff_x20 + 0x18);
        local_c2 = *(undefined1 *)(unaff_x20 + 0x26);
        local_97 = 0;
        local_d8 = *(ulong *)(unaff_x20 + 0x10);
        _swift_retain();
        FUN_100626ebc(&local_d8,0);
        FUN_1005e70f4(&local_d8);
        local_c2 = (undefined1)((ulong)uVar5 >> 0x30);
        local_c4 = (undefined2)((ulong)uVar5 >> 0x20);
        local_c8 = (undefined4)uVar5;
        local_97 = 0;
        local_d8 = param_1;
        uStack_d0 = param_2;
        _swift_retain(param_1);
      }
      FUN_100626ebc(&local_d8,param_3);
      _swift_release(param_1);
      FUN_1005e70f4(&local_d8);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce44);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10096ce38);
  (*pcVar1)();
}



/* Address: 0x10096ce60 | FUN_10096ce60 */

void FUN_10096ce60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10096ce84 | thunk_FUN_10096cb24 */

void thunk_FUN_10096cb24(void)

{
  FUN_10096cb24();
  return;
}



/* Address: 0x10096ce88 | thunk_FUN_10096ca58 */

void thunk_FUN_10096ca58(void)

{
  FUN_10096ca58();
  return;
}



/* Address: 0x10096ce8c | FUN_10096ce8c */

bool FUN_10096ce8c(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  
  if (param_2.unknown == (undefined *)0x0) {
    if (param_4 != (undefined *)0x0) {
      return false;
    }
  }
  else {
    if (param_4 == (undefined *)0x0) {
      return false;
    }
    if ((param_1.unknown != param_3) || (param_2.unknown != param_4)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
      return bVar1;
    }
  }
  return true;
}



/* Address: 0x10096cec0 | FUN_10096cec0 */

bool FUN_10096cec0(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  _StringGuts _Var2;
  undefined *puVar3;
  
  _Var2.unknown = (undefined *)param_1[1];
  puVar3 = (undefined *)param_2[1];
  if (_Var2.unknown == (undefined *)0x0) {
    if (puVar3 != (undefined *)0x0) {
      return false;
    }
  }
  else {
    if (puVar3 == (undefined *)0x0) {
      return false;
    }
    if ((undefined *)*param_1 != (undefined *)*param_2 || _Var2.unknown != puVar3) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,_Var2,
                         (_StringComparisonResult)(__int8)(undefined *)*param_2);
      return bVar1;
    }
  }
  return true;
}



/* Address: 0x10096cf04 | FUN_10096cf04 */

void FUN_10096cf04(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)(param_1 + 2) = 2;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 1;
  return;
}



/* Address: 0x10096cf20 | FUN_10096cf20 */

undefined8 FUN_10096cf20(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_37;
  
  if ((char)unaff_x20[4] == '\x01') {
    FUN_10096e0a4();
    _swift_allocError(&DAT_100f1cd68,param_1,0,0);
    *param_1 = 0;
    param_1[1] = 0;
    _swift_willThrow();
  }
  else {
    lVar3 = unaff_x20[3];
    puVar1 = (undefined8 *)*unaff_x20;
    lVar2 = unaff_x20[1];
    FUN_1004dc818(puVar1,lVar2,(char)unaff_x20[2]);
    if (lVar3 == 0) {
      *unaff_x20 = 0;
      unaff_x20[1] = 0;
      *(undefined1 *)(unaff_x20 + 2) = 2;
      unaff_x20[3] = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
      FUN_100627f08();
      _swift_getObjectType();
      (**(code **)(lVar2 + 0x18))();
      _swift_unknownObjectRelease();
      FUN_1006116e8();
      local_78 = *puVar1;
      uStack_70 = puVar1[1];
      local_68 = *(undefined4 *)(puVar1 + 2);
      local_64 = *(undefined2 *)((long)puVar1 + 0x14);
      local_62 = *(undefined1 *)((long)puVar1 + 0x16);
      local_37 = 0;
      _swift_retain(local_78);
      FUN_100626ce0(&local_78);
      FUN_1005e70f4(&local_78);
    }
    else {
      *unaff_x20 = lVar3;
      unaff_x20[1] = 0;
      *(undefined1 *)(unaff_x20 + 2) = 1;
      unaff_x20[3] = 0;
      *(undefined1 *)(unaff_x20 + 4) = 1;
    }
  }
  return 0;
}



/* Address: 0x10096d044 | FUN_10096d044 */

void FUN_10096d044(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  _StringGuts _Var8;
  byte bVar9;
  ushort uVar10;
  char *pcVar11;
  code *pcVar12;
  bool bVar13;
  _StringGuts _Var14;
  ulong uVar15;
  undefined **ppuVar16;
  Substring SVar17;
  UnsafeBufferPointer<__int8> UVar18;
  void *pvVar19;
  _StringObject _Var20;
  void *pvVar21;
  undefined8 *puVar22;
  undefined8 uVar23;
  String *unaff_x20;
  undefined *puVar24;
  long lVar25;
  String SVar26;
  String SVar27;
  tuple2_conflict1 tVar28;
  undefined *local_140;
  ulong uStack_138;
  undefined1 auStack_130 [24];
  undefined *local_118;
  uint local_110;
  uint uStack_10c;
  int local_108;
  ushort local_104;
  byte local_102;
  ulong local_100;
  ulong uStack_f8;
  undefined1 auStack_f0 [24];
  undefined *local_d8;
  long *local_d0;
  int local_c8;
  ushort local_c4;
  byte local_c2;
  ulong local_c0;
  ulong uStack_b8;
  undefined1 local_97;
  undefined *local_90;
  uint local_88;
  uint uStack_84;
  int local_80;
  ushort local_7c;
  byte local_7a;
  ulong local_78;
  ulong uStack_70;
  
  _Var14.unknown = unaff_x20->str;
  _Var8.unknown = unaff_x20->bridgeObject;
  if (*(char *)&unaff_x20[1].str == '\0') {
    uVar4 = *(uint *)(param_2 + 1);
    uVar5 = (ulong)uVar4;
    uVar6 = *(uint *)((long)param_2 + 0xc);
    local_d0 = (long *)param_2[1];
    uVar7 = (ulong)uVar6;
    if (uVar6 < uVar4) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d678);
      (*pcVar12)();
    }
    iVar1 = (int)param_2[2];
    uVar10 = *(ushort *)((long)param_2 + 0x14);
    bVar9 = *(byte *)((long)param_2 + 0x16);
    if (iVar1 - (uint)CONCAT21(uVar10,bVar9) < uVar6) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d680);
      (*pcVar12)();
    }
    puVar24 = (undefined *)*param_2;
    local_d8 = puVar24;
    local_c8 = iVar1;
    local_c4 = uVar10;
    local_c2 = bVar9;
    local_c0 = uVar5;
    uStack_b8 = uVar7;
    _swift_beginAccess(puVar24 + 0x18,auStack_f0,0,0);
    uVar15 = local_c0;
    if (SBORROW8(uStack_b8,local_c0)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d688);
      (*pcVar12)();
    }
    if (uStack_b8 != local_c0) {
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(puVar24 + 0x18) + (ulong)uVar10 * 0x100 + bVar9 + local_c0 + lVar25)
            == '\n') {
          _swift_retain(puVar24);
          FUN_10096e070(&local_d8);
          lVar3 = lVar25 + uVar15;
          if (SCARRY8(lVar25,uVar15)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d694);
            (*pcVar12)();
          }
          local_118 = puVar24;
          local_110 = uVar4;
          uStack_10c = uVar6;
          local_108 = iVar1;
          local_104 = uVar10;
          local_102 = bVar9;
          local_100 = uVar5;
          uStack_f8 = uVar7;
          if (((_Var14.unknown != (undefined *)0x2d746e65746e6f63) ||
              (_Var8.unknown != (undefined *)0xee006874676e656c)) &&
             (bVar13 = Swift::_stringCompareWithSmolCheck
                                 (_Var14,_Var8,(_StringComparisonResult)0x63), !bVar13)) {
            _swift_retain(puVar24);
            FUN_10096e070(&local_118);
            FUN_1004dc818(_Var14.unknown,_Var8.unknown,0);
            if (SBORROW8(lVar3,local_100)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d724);
              (*pcVar12)();
            }
            uVar5 = (lVar3 - local_100) + 1;
            if (SCARRY8(lVar3 - local_100,1)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d728);
              (*pcVar12)();
            }
            if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d72c);
              (*pcVar12)();
            }
            if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d730);
              (*pcVar12)();
            }
            uVar2 = uVar4 + (uint)uVar5;
            if (CARRY4(uVar4,(uint)uVar5)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d734);
              (*pcVar12)();
            }
            if (uVar6 < uVar2) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d738);
              (*pcVar12)();
            }
            *(uint *)(param_2 + 1) = uVar2;
LAB_10096d660:
            unaff_x20->str = (char *)0x0;
            unaff_x20->bridgeObject = (void *)0x0;
            *(undefined1 *)&unaff_x20[1].str = 2;
            return;
          }
          _swift_retain(puVar24);
          FUN_10096e070(&local_118);
          if (SBORROW8(lVar3,local_100)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d698);
            (*pcVar12)();
          }
          pcVar11 = (char *)((lVar3 - local_100) + 1);
          if (SCARRY8(lVar3 - local_100,1)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d69c);
            (*pcVar12)();
          }
          if ((long)((ulong)(uVar6 - uVar4) - (long)pcVar11 | (ulong)pcVar11) < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6a0);
            (*pcVar12)();
          }
          pvVar21 = (void *)0x0;
          puVar22 = (undefined8 *)0x0;
          _swift_beginAccess(puVar24 + 0x18,auStack_130);
          SVar26.bridgeObject = pvVar21;
          SVar26.str = pcVar11;
          tVar28 = Swift::String::_fromUTF8Repairing
                             ((undefined *)
                              (*(long *)(puVar24 + 0x18) + (ulong)(uint)CONCAT21(uVar10,bVar9) +
                              uVar5),SVar26);
          _Var20.unknown = tVar28._16_8_;
          pvVar21 = tVar28.result.bridgeObject;
          if (0xffffffff < (long)pcVar11) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6a4);
            (*pcVar12)();
          }
          if (CARRY4(uVar4,(uint)pcVar11)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6a8);
            (*pcVar12)();
          }
          *(uint *)(param_2 + 1) = uVar4 + (uint)pcVar11;
          ppuVar16 = tVar28.result.str;
          pvVar19 = pvVar21;
          FUN_10096d738();
          if (((ulong)ppuVar16 ^ (ulong)pvVar19) >> 0xe == 0) {
            _swift_bridgeObjectRelease();
          }
          else {
            if (((ulong)puVar22 >> 0x3c & 1) == 0) {
              if (((ulong)puVar22 >> 0x3d & 1) == 0) {
                if (((ulong)_Var20.unknown >> 0x3c & 1) == 0) {
                  UVar18 = Swift::_StringObject::get_sharedUTF8(_Var20);
                }
                else {
                  UVar18.unknown = (undefined *)(((ulong)puVar22 & 0xfffffffffffffff) + 0x20);
                }
              }
              else {
                uStack_138 = (ulong)puVar22 & 0xffffffffffffff;
                UVar18.unknown = (undefined *)&local_140;
                local_140 = _Var20.unknown;
              }
              FUN_10096e0e4(UVar18.unknown,ppuVar16,pvVar19,_Var20.unknown,puVar22);
              ppuVar16 = (undefined **)UVar18.unknown;
            }
            else {
              FUN_10096dd28(ppuVar16,pvVar19,_Var20.unknown,puVar22,10);
            }
            _swift_bridgeObjectRelease();
            if (((ulong)ppuVar16 & 0xff00000000) != 0x100000000) {
              _swift_bridgeObjectRelease(pvVar21);
              FUN_1004dc818(_Var14.unknown,_Var8.unknown,0);
              unaff_x20[1].bridgeObject = (void *)((ulong)ppuVar16 & 0xffffffff);
              *(undefined1 *)&unaff_x20[2].str = 0;
              goto LAB_10096d660;
            }
          }
          FUN_10096e0a4();
          _swift_allocError(&DAT_100f1cd68,puVar22,0,0);
          *puVar22 = tVar28.result.str;
          puVar22[1] = pvVar21;
          _swift_willThrow();
          return;
        }
        lVar25 = lVar25 + 1;
      } while (uStack_b8 - local_c0 != lVar25);
    }
  }
  else {
    if (*(char *)&unaff_x20[1].str == '\x01') {
      FUN_10060c6b4();
      if (_Var14.unknown == (undefined *)0x0) {
        return;
      }
      unaff_x20->str = (char *)0x0;
      unaff_x20->bridgeObject = (void *)0x0;
      *(undefined1 *)&unaff_x20[1].str = 2;
      local_c8 = (int)param_3;
      local_c2 = (byte)((ulong)param_3 >> 0x30);
      local_c4 = (ushort)((ulong)param_3 >> 0x20);
      local_97 = 0;
      local_d8 = _Var14.unknown;
      local_d0 = param_2;
      _swift_retain();
      FUN_100626ce0(&local_d8);
      _swift_release(_Var14.unknown);
      FUN_1005e70f4(&local_d8);
      return;
    }
    uVar4 = *(uint *)(param_2 + 1);
    uVar5 = (ulong)uVar4;
    uVar6 = *(uint *)((long)param_2 + 0xc);
    uVar23 = param_2[1];
    uVar7 = (ulong)uVar6;
    if (uVar6 < uVar4) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d67c);
      (*pcVar12)();
    }
    iVar1 = (int)param_2[2];
    uVar10 = *(ushort *)((long)param_2 + 0x14);
    bVar9 = *(byte *)((long)param_2 + 0x16);
    if (iVar1 - (uint)CONCAT21(uVar10,bVar9) < uVar6) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d684);
      (*pcVar12)();
    }
    puVar24 = (undefined *)*param_2;
    local_90 = puVar24;
    local_88 = uVar4;
    uStack_84 = uVar6;
    local_80 = iVar1;
    local_7c = uVar10;
    local_7a = bVar9;
    local_78 = uVar5;
    uStack_70 = uVar7;
    _swift_retain(puVar24);
    uVar15 = 0xa0d;
    FUN_10096d8d0(0xa0d,&SUB_e200000000000000,&local_90);
    FUN_10096e070(&local_90);
    if ((uVar15 & 1) != 0) {
      if (0xfffffffd < uVar4) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d68c);
        (*pcVar12)();
      }
      if (uVar4 + 2 <= uVar6) {
        *(uint *)(param_2 + 1) = uVar4 + 2;
        FUN_10096cf20(param_1);
        return;
      }
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d690);
      (*pcVar12)();
    }
    local_d8 = puVar24;
    local_d0 = (long *)uVar23;
    local_c8 = iVar1;
    local_c4 = uVar10;
    local_c2 = bVar9;
    local_c0 = uVar5;
    uStack_b8 = uVar7;
    _swift_beginAccess(puVar24 + 0x18,auStack_f0,0,0);
    if (uVar6 - uVar4 != 0) {
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(puVar24 + 0x18) + (ulong)uVar10 * 0x100 + (ulong)bVar9 + uVar5 +
                     lVar25) == ':') {
          _swift_retain(puVar24);
          FUN_10096e070(&local_d8);
          if (SCARRY8(lVar25,uVar5)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6d8);
            (*pcVar12)();
          }
          local_118 = puVar24;
          local_110 = uVar4;
          uStack_10c = uVar6;
          local_108 = iVar1;
          local_104 = uVar10;
          local_102 = bVar9;
          local_100 = uVar5;
          uStack_f8 = uVar7;
          _swift_retain(puVar24);
          FUN_10096e070(&local_118);
          pcVar11 = (char *)((lVar25 + uVar5) - local_100);
          if (SBORROW8(lVar25 + uVar5,local_100)) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6dc);
            (*pcVar12)();
          }
          if ((long)((ulong)(uVar6 - uVar4) - (long)pcVar11 | (ulong)pcVar11) < 0) {
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6e0);
            (*pcVar12)();
          }
          pvVar21 = (void *)0x0;
          uVar23 = 0;
          _swift_beginAccess(puVar24 + 0x18,auStack_130,0,0);
          SVar27.bridgeObject = pvVar21;
          SVar27.str = pcVar11;
          tVar28 = Swift::String::_fromUTF8Repairing
                             ((undefined *)
                              (*(long *)(puVar24 + 0x18) + (ulong)(uint)CONCAT21(uVar10,bVar9) +
                              uVar5),SVar27);
          SVar17.unknown = tVar28.result.str;
          if ((long)pcVar11 < 0x100000000) {
            iVar1 = uVar4 + (uint)pcVar11;
            if (CARRY4(uVar4,(uint)pcVar11)) {
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6e8);
              (*pcVar12)();
            }
            uVar4 = iVar1 + 1;
            if (iVar1 != -1) {
              if (uVar4 <= uVar6) {
                *(uint *)(param_2 + 1) = uVar4;
                FUN_10096d738(SVar17.unknown,tVar28.result.bridgeObject,tVar28._16_8_);
                _swift_bridgeObjectRelease(tVar28.result.bridgeObject);
                SVar26 = Swift::Substring::lowercased(SVar17);
                _swift_bridgeObjectRelease(uVar23);
                FUN_1004dc818(_Var14.unknown,_Var8.unknown,2);
                *unaff_x20 = SVar26;
                *(undefined1 *)&unaff_x20[1].str = 0;
                return;
              }
                    /* WARNING: Does not return */
              pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6f0);
              (*pcVar12)();
            }
                    /* WARNING: Does not return */
            pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6ec);
            (*pcVar12)();
          }
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10096d6e4);
          (*pcVar12)();
        }
        lVar25 = lVar25 + 1;
      } while (uVar7 - uVar5 != lVar25);
    }
  }
  _swift_retain(puVar24);
  FUN_10096e070(&local_d8);
  return;
}



/* Address: 0x10096d738 | FUN_10096d738 */

void FUN_10096d738(char *param_1,void *param_2)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  bool bVar4;
  Index IVar5;
  uint uVar6;
  Index after;
  Index before;
  ulong uVar7;
  Character CVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  uVar1 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)param_2 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
LAB_10096d7e8:
    Swift::Substring::init((String)(ZEXT816(0xe000000000000000) << 0x40));
  }
  else {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    CVar8 = Swift::String::get_subscript((Index)0xf,SVar9);
    bVar4 = Swift::Character::get_isWhitespace(CVar8);
    _swift_bridgeObjectRelease(CVar8.bridgeObject);
    if (bVar4) {
      after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      do {
        SVar10.bridgeObject = param_2;
        SVar10.str = param_1;
        after = Swift::String::index(after,SVar10);
        uVar7 = (ulong)after.cmsgPointer.unknown >> 0xe;
        if (uVar7 == uVar1 * 4) goto LAB_10096d7e8;
        SVar11.bridgeObject = param_2;
        SVar11.str = param_1;
        CVar8 = Swift::String::get_subscript(after,SVar11);
        bVar4 = Swift::Character::get_isWhitespace(CVar8);
        _swift_bridgeObjectRelease(CVar8.bridgeObject);
      } while (bVar4);
    }
    else {
      uVar7 = 0;
    }
    uVar6 = (uint)((ulong)param_1 >> 0x3b) & 1;
    if (((ulong)param_2 & 0x1000000000000000) == 0) {
      uVar6 = 1;
    }
    uVar2 = 7;
    if (uVar6 == 0) {
      uVar2 = 0xb;
    }
    before.cmsgPointer.unknown = (UnsafeMutablePointer)(uVar2 | uVar1 << 0x10);
    while( true ) {
      SVar12.bridgeObject = param_2;
      SVar12.str = param_1;
      IVar5 = Swift::String::index(before,SVar12);
      SVar13.bridgeObject = param_2;
      SVar13.str = param_1;
      CVar8 = Swift::String::get_subscript(IVar5,SVar13);
      bVar4 = Swift::Character::get_isWhitespace(CVar8);
      _swift_bridgeObjectRelease(CVar8.bridgeObject);
      if (!bVar4) break;
      SVar14.bridgeObject = param_2;
      SVar14.str = param_1;
      before = Swift::String::index(before,SVar14);
      if ((ulong)before.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10096d870);
        (*pcVar3)();
      }
    }
    if ((ulong)before.cmsgPointer.unknown >> 0xe < uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10096d8a8);
      (*pcVar3)();
    }
    SVar15.bridgeObject = param_1;
    SVar15.str = (char *)before.cmsgPointer.unknown;
    Swift::String::get_subscript((Range<Index>)after.cmsgPointer.unknown,SVar15);
  }
  return;
}



/* Address: 0x10096d8a8 | FUN_10096d8a8 */

void FUN_10096d8a8(void)

{
  FUN_10096e3ec();
  return;
}



/* Address: 0x10096d8bc | FUN_10096d8bc */

void FUN_10096d8bc(void)

{
  FUN_10096d044();
  return;
}



/* Address: 0x10096d8d0 | FUN_10096d8d0 */

undefined8 FUN_10096d8d0(UTF8View param_1,ulong param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  byte bVar7;
  __uint8 _Var8;
  ushort uVar9;
  code *pcVar10;
  __uint8 _Var11;
  UnsafeBufferPointer<__int8> UVar12;
  Index IVar13;
  undefined8 uVar14;
  uint uVar15;
  uint uVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  Index after;
  ulong uVar21;
  ulong uVar22;
  ulong uVar23;
  long lVar24;
  ulong local_e0;
  undefined *local_a8;
  ulong uStack_a0;
  undefined1 auStack_80 [32];
  ulong local_58;
  
  lVar5 = param_3[3];
  lVar6 = param_3[4];
  lVar18 = *param_3;
  uVar23 = param_2 >> 0x38 & 0xf;
  lVar20 = lVar6 - lVar5;
  uVar16 = (uint)((ulong)param_1.unknown >> 0x20);
  if (lVar20 == 0) {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  }
  else {
    uVar3 = *(uint *)(param_3 + 1);
    iVar4 = *(int *)((long)param_3 + 0xc);
    uVar9 = *(ushort *)((long)param_3 + 0x14);
    bVar7 = *(byte *)((long)param_3 + 0x16);
    _swift_beginAccess(lVar18 + 0x18,auStack_80,0,0);
    uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = uVar23;
    }
    uVar1 = param_2 & 0x1000000000000000;
    uVar15 = uVar16 >> 0x1b & 1;
    if (uVar1 == 0) {
      uVar15 = 1;
    }
    uVar22 = 4L << uVar15;
    lVar17 = lVar5 + (ulong)uVar9 * 0x100 + (ulong)bVar7;
    lVar19 = lVar5 - (ulong)uVar3;
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    lVar24 = lVar5;
    do {
      if (lVar6 <= lVar24) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dc98);
        (*pcVar10)();
      }
      if (lVar5 < (long)(ulong)uVar3) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dc9c);
        (*pcVar10)();
      }
      if ((long)(ulong)(iVar4 - uVar3) <= lVar19) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dca0);
        (*pcVar10)();
      }
      if (uVar2 << 2 == (ulong)after.cmsgPointer.unknown >> 0xe) {
        FUN_1006100e8(param_3,&local_a8);
        _swift_release(lVar18);
        return 1;
      }
      _Var8 = *(__uint8 *)(*(long *)(lVar18 + 0x18) + lVar17);
      uVar21 = (ulong)after.cmsgPointer.unknown & 0xc;
      IVar13.cmsgPointer.unknown = after.cmsgPointer.unknown;
      if (uVar21 == uVar22) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      }
      local_e0 = param_2 & 0x2000000000000000;
      if (uVar2 <= (ulong)IVar13.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dca4);
        (*pcVar10)();
      }
      if (uVar1 == 0) {
        if (local_e0 == 0) {
          UVar12.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            UVar12 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
          }
        }
        else {
          local_a8 = param_1.unknown;
          uStack_a0 = param_2 & 0xffffffffffffff;
          UVar12.unknown = (undefined *)&local_a8;
        }
        _Var11 = *(__uint8 *)((long)UVar12.unknown + ((ulong)IVar13.cmsgPointer.unknown >> 0x10));
        if (uVar21 == uVar22) goto LAB_10096db30;
LAB_10096da98:
        if (uVar1 == 0) goto LAB_10096d9cc;
LAB_10096daa0:
        if (uVar2 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dca8);
          (*pcVar10)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_1);
      }
      else {
        _Var11 = Swift::String::UTF8View::_foreignSubscript(IVar13,param_1);
        if (uVar21 != uVar22) goto LAB_10096da98;
LAB_10096db30:
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if (uVar1 != 0) goto LAB_10096daa0;
LAB_10096d9cc:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      if (_Var8 != _Var11) {
        FUN_1006100e8(param_3,&local_a8);
        _swift_release(lVar18);
        return 0;
      }
      lVar17 = lVar17 + 1;
      lVar19 = lVar19 + 1;
      lVar24 = lVar24 + 1;
      lVar20 = lVar20 + -1;
    } while (lVar20 != 0);
  }
  local_58 = param_2 & 0x1000000000000000;
  _swift_bridgeObjectRetain(param_2);
  FUN_1006100e8(param_3,&local_a8);
  _swift_release(lVar18);
  uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = uVar23;
  }
  if ((ulong)after.cmsgPointer.unknown >> 0xe == uVar2 * 4) {
    _swift_bridgeObjectRelease(param_2);
    uVar14 = 1;
  }
  else {
    uVar16 = uVar16 >> 0x1b & 1;
    if (local_58 == 0) {
      uVar16 = 1;
    }
    IVar13.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar16) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar2 <= (ulong)IVar13.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dcd4);
      (*pcVar10)();
    }
    if (local_58 == 0) {
      if ((param_2 & 0x2000000000000000) == 0 && ((ulong)param_1.unknown & 0x1000000000000000) == 0)
      {
        Swift::_StringObject::get_sharedUTF8((_StringObject)param_1.unknown);
      }
    }
    else {
      Swift::String::UTF8View::_foreignSubscript(IVar13,param_1);
    }
    if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar16) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (local_58 != 0) {
      if (uVar2 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x10096dcf4);
        (*pcVar10)();
      }
      Swift::String::UTF8View::_foreignIndex(after,param_1);
    }
    _swift_bridgeObjectRelease(param_2);
    uVar14 = 0;
  }
  return uVar14;
}



/* Address: 0x10096dd28 | FUN_10096dd28 */

/* WARNING: Removing unreachable block (ram,0x00010096de20) */

ulong FUN_10096dd28(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_10096e708();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_10096de2c();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      local_50 = puVar1;
    }
    FUN_1006cad5c(UVar3.unknown);
  }
  else {
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_1006cad5c(UVar3.unknown,(ulong)pvVar5 >> 0x38 & 0xf,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  return (ulong)UVar3.unknown & 0xffffffffff;
}



/* Address: 0x10096de2c | FUN_10096de2c */

undefined1  [16]
FUN_10096de2c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_10096de7c();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x10096de7c | FUN_10096de7c */

String FUN_10096de7c(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

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
      FUN_10096dfc0(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10096df7c);
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
      goto LAB_10096deb4;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_10096deb4:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x10096dfc0 | FUN_10096dfc0 */

undefined * FUN_10096dfc0(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fef570;
    FUN_1000f7830(&DAT_100fef570,&DAT_100c87eb8);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10096e030 | FUN_10096e030 */

void FUN_10096e030(void)

{
  undefined *puVar1;
  
  if (DAT_100fef438 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__BinaryInteger_100eac738;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__BinaryInteger_100eac738,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fef438 = puVar1;
  return;
}



/* Address: 0x10096e070 | FUN_10096e070 */

undefined8 FUN_10096e070(undefined8 param_1)

{
  FUN_10044b95c();
  return param_1;
}



/* Address: 0x10096e0a4 | FUN_10096e0a4 */

void FUN_10096e0a4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fef440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c87de0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c87de0,&DAT_100f1cd68);
  DAT_100fef440 = pTVar1;
  return;
}



/* Address: 0x10096e0e4 | FUN_10096e0e4 */

ulong FUN_10096e0e4(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5)

{
  code *pcVar1;
  long lVar2;
  Index IVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  
  uVar4 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar8 = 4L << uVar4;
  IVar3.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar8) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_10096e18c;
LAB_10096e12c:
    uVar7 = (ulong)IVar3.cmsgPointer.unknown >> 0x10;
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_10096e12c;
LAB_10096e18c:
    uVar7 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar7 = param_5 >> 0x38 & 0xf;
    }
    if (uVar7 < (ulong)IVar3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3ec);
      (*pcVar1)();
    }
    uVar7 = Swift::String::UTF8View::_foreignDistance((Index)0xf,IVar3,param_4);
  }
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar8) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.cmsgPointer.unknown & 0xc) == uVar8) {
    FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
    if ((param_5 >> 0x3c & 1) != 0) goto LAB_10096e244;
LAB_10096e148:
    lVar2 = ((ulong)param_3.cmsgPointer.unknown >> 0x10) -
            ((ulong)param_2.cmsgPointer.unknown >> 0x10);
  }
  else {
    if ((param_5 >> 0x3c & 1) == 0) goto LAB_10096e148;
LAB_10096e244:
    uVar8 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar8 = param_5 >> 0x38 & 0xf;
    }
    if (uVar8 < (ulong)param_2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3dc);
      (*pcVar1)();
    }
    if (uVar8 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3e0);
      (*pcVar1)();
    }
    lVar2 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  uVar8 = uVar7 + lVar2;
  if (SCARRY8(uVar7,lVar2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3d4);
    (*pcVar1)();
  }
  if ((long)uVar8 < (long)uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3d8);
    (*pcVar1)();
  }
  pbVar6 = (byte *)0x0;
  if (param_1 != 0) {
    pbVar6 = (byte *)(uVar7 + param_1);
  }
  if (*pbVar6 == 0x2b) {
    if (uVar8 == uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3e8);
      (*pcVar1)();
    }
    if (uVar8 - uVar7 != 1) {
      uVar8 = 0;
      lVar2 = lVar2 + -1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) || ((uVar8 * 10 & 0xffffffff00000000) != 0)) ||
           (uVar4 = *pbVar6 - 0x30 & 0xff, uVar5 = (uint)(uVar8 * 10),
           uVar8 = (ulong)(uVar5 + uVar4), CARRY4(uVar5,uVar4))) goto LAB_10096e3a0;
        uVar7 = 0;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      goto LAB_10096e3a8;
    }
  }
  else if (*pbVar6 == 0x2d) {
    if (uVar8 == uVar7) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10096e3e4);
      (*pcVar1)();
    }
    if (uVar8 - uVar7 != 1) {
      uVar8 = 0;
      lVar2 = lVar2 + -1;
      do {
        pbVar6 = pbVar6 + 1;
        if (((9 < *pbVar6 - 0x30) || ((uVar8 * 10 & 0xffffffff00000000) != 0)) ||
           (uVar4 = *pbVar6 - 0x30 & 0xff, uVar5 = (uint)(uVar8 * 10),
           uVar8 = (ulong)(uVar5 - uVar4), uVar5 < uVar4)) goto LAB_10096e3a0;
        uVar7 = 0;
        lVar2 = lVar2 + -1;
      } while (lVar2 != 0);
      goto LAB_10096e3a8;
    }
  }
  else if (uVar8 != uVar7) {
    uVar8 = 0;
    if (pbVar6 == (byte *)0x0) {
      uVar7 = 0;
    }
    else {
      do {
        if (((9 < *pbVar6 - 0x30) || ((uVar8 * 10 & 0xffffffff00000000) != 0)) ||
           (uVar4 = *pbVar6 - 0x30 & 0xff, uVar5 = (uint)(uVar8 * 10),
           uVar8 = (ulong)(uVar5 + uVar4), CARRY4(uVar5,uVar4))) goto LAB_10096e3a0;
        uVar7 = 0;
        lVar2 = lVar2 + -1;
        pbVar6 = pbVar6 + 1;
      } while (lVar2 != 0);
    }
    goto LAB_10096e3a8;
  }
LAB_10096e3a0:
  uVar8 = 0;
  uVar7 = 0x100000000;
LAB_10096e3a8:
  return uVar7 | uVar8;
}



/* Address: 0x10096e3ec | FUN_10096e3ec */

undefined8 FUN_10096e3ec(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong uVar4;
  long unaff_x21;
  
  do {
    puVar3 = param_1;
    FUN_10096d044(param_1,param_2);
    if (unaff_x21 != 0) {
      return 1;
    }
  } while (((ulong)puVar3 & 0xff) == 0);
  uVar1 = param_2[1];
  if (*(int *)((long)param_2 + 0xc) != (int)param_2[1]) {
    uVar4 = *param_2;
    uVar2 = param_2[2];
    FUN_10096e6c8();
    _swift_allocError(&DAT_100eee720,puVar3,0,0);
    *puVar3 = uVar4 | 0x8000000000000000;
    puVar3[1] = uVar1;
    puVar3[2] = (ulong)(uint7)uVar2;
    *(undefined1 *)((long)puVar3 + 0x1e) = 0;
    *(undefined2 *)((long)puVar3 + 0x1c) = 0;
    *(undefined4 *)(puVar3 + 3) = 0;
    _swift_willThrow();
    _swift_retain(uVar4);
  }
  return 1;
}



/* Address: 0x10096e4ac | FUN_10096e4ac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10096e4ac(void)

{
  return ZEXT816(0x100fef500);
}



/* Address: 0x10096e4cc | FUN_10096e4cc */

undefined8 * FUN_10096e4cc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10096e530 | FUN_10096e530 */

undefined8 * FUN_10096e530(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  
  uVar6 = *param_2;
  uVar2 = param_2[1];
  uVar4 = *(undefined1 *)(param_2 + 2);
  FUN_1004a7398(uVar6,uVar2,uVar4);
  uVar1 = *param_1;
  uVar3 = param_1[1];
  *param_1 = uVar6;
  param_1[1] = uVar2;
  uVar5 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar4;
  FUN_1004dc818(uVar1,uVar3,uVar5);
  uVar6 = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[3] = uVar6;
  return param_1;
}



/* Address: 0x10096e5a0 | FUN_10096e5a0 */

void FUN_10096e5a0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x10096e5b4 | FUN_10096e5b4 */

undefined8 * FUN_10096e5b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1004dc818(uVar3,uVar4,uVar2);
  param_1[3] = param_2[3];
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}



/* Address: 0x10096e608 | FUN_10096e608 */

int FUN_10096e608(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 4) ^ 0xff;
  if (*(byte *)(param_1 + 4) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x10096e650 | FUN_10096e650 */

void FUN_10096e650(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *(undefined1 *)(param_1 + 4) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    param_1[1] = 0;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 1;
    }
  }
  return;
}



/* Address: 0x10096e698 | FUN_10096e698 */

undefined1  [16] FUN_10096e698(void)

{
  return ZEXT816(0x100f1ccd0);
}



/* Address: 0x10096e6a8 | FUN_10096e6a8 */

undefined1  [16] FUN_10096e6a8(void)

{
  return ZEXT816(0x100f1cd68);
}



/* Address: 0x10096e6b8 | FUN_10096e6b8 */

undefined1  [16] FUN_10096e6b8(void)

{
  return ZEXT816(0x100f1cdf8);
}



/* Address: 0x10096e6c8 | FUN_10096e6c8 */

void FUN_10096e6c8(void)

{
  undefined8 uVar1;
  
  if (DAT_100fef560 != 0) {
    return;
  }
  uVar1 = 0x100c69d08;
  _swift_getWitnessTable(0x100c69d08,&DAT_100eee720);
  DAT_100fef560 = uVar1;
  return;
}



/* Address: 0x10096e708 | FUN_10096e708 */

void FUN_10096e708(void)

{
  undefined *puVar1;
  
  if (DAT_100fef568 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fef568 = puVar1;
  return;
}



/* Address: 0x10096e748 | thunk_FUN_1004dc808 */

void thunk_FUN_1004dc808(void)

{
  FUN_1004dc808();
  return;
}



/* Address: 0x10096e74c | FUN_10096e74c */

undefined1  [16] FUN_10096e74c(void)

{
  return ZEXT816(0x100f1ce80);
}



/* Address: 0x10096e75c | FUN_10096e75c */

ulong FUN_10096e75c(long param_1,undefined8 param_2)

{
  uint *puVar1;
  uint uVar2;
  ulong uVar3;
  int iVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 uVar8;
  code *pcVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  long *unaff_x20;
  undefined1 auStack_68 [24];
  
  lVar12 = *unaff_x20;
  puVar1 = (uint *)(unaff_x20 + 1);
  uVar2 = *puVar1;
  uVar3 = (ulong)uVar2;
  iVar4 = *(int *)((long)unaff_x20 + 0xc);
  uVar8 = *(undefined8 *)puVar1;
  if (((uint)param_2 & 0xff) == 1) {
    if (((long)uVar3 <= param_1) && ((long)(param_1 - uVar3) < (long)(ulong)(iVar4 - uVar2))) {
      uVar7 = *(ushort *)((long)unaff_x20 + 0x14);
      bVar5 = *(byte *)((long)unaff_x20 + 0x16);
      _swift_beginAccess(lVar12 + 0x18,auStack_68,0,0);
      lVar11 = param_1 + 1;
      if (SCARRY8(param_1,1)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10096e8b8);
        (*pcVar9)();
      }
      bVar6 = *(byte *)(*(long *)(lVar12 + 0x18) + (ulong)uVar7 * 0x100 + (ulong)bVar5 + param_1);
      FUN_100617ee0(lVar11,1,lVar12,uVar8,
                    (ulong)uVar7 << 0x20 | (ulong)bVar5 << 0x30 | (ulong)*(uint *)(unaff_x20 + 2));
      uVar10 = (uint)lVar11;
      if ((uVar10 & 0xff0000) != 0x10000) {
LAB_10096e888:
        return (ulong)((uint)bVar6 | (uVar10 & 0xffff) << 8);
      }
    }
  }
  else {
    uVar7 = *(ushort *)((long)unaff_x20 + 0x14);
    bVar6 = *(byte *)((long)unaff_x20 + 0x16);
    lVar11 = param_1;
    FUN_100617ee0(param_1,param_2,lVar12,*(undefined8 *)puVar1,(ulong)*(uint7 *)(unaff_x20 + 2));
    uVar10 = (uint)lVar11;
    if ((uVar10 & 0xff0000) != 0x10000) {
      lVar11 = param_1 + 2;
      if (SCARRY8(param_1,2)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10096e8b4);
        (*pcVar9)();
      }
      if (((long)uVar3 <= lVar11) && ((long)(lVar11 - uVar3) < (long)(ulong)(iVar4 - uVar2))) {
        _swift_beginAccess(lVar12 + 0x18,auStack_68,0,0);
        bVar6 = *(byte *)(*(long *)(lVar12 + 0x18) + (ulong)uVar7 * 0x100 + (ulong)bVar6 + lVar11);
        goto LAB_10096e888;
      }
    }
  }
  return 0x100000000;
}



/* Address: 0x10096e8b8 | FUN_10096e8b8 */

void FUN_10096e8b8(undefined8 param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar1 = *(uint *)(unaff_x20 + 8);
  uVar3 = (ulong)uVar1;
  FUN_10096e75c(uVar3,param_1);
  if (uVar3 >> 0x20 == 0) {
    if (0xfffffffc < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10096e904);
      (*pcVar2)();
    }
    if (*(uint *)(unaff_x20 + 0xc) < uVar1 + 3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10096e908);
      (*pcVar2)();
    }
    *(uint *)(unaff_x20 + 8) = uVar1 + 3;
  }
  return;
}



/* Address: 0x10096e908 | FUN_10096e908 */

undefined * FUN_10096e908(void)

{
  return &DAT_100c87ee0;
}



/* Address: 0x10096e914 | FUN_10096e914 */

undefined8 FUN_10096e914(void)

{
  return 0x7fffffff;
}



/* Address: 0x10096e91c | FUN_10096e91c */

void FUN_10096e91c(uint param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(char *)(unaff_x20 + 0x31) = (char)(0x4030100 >> (ulong)((param_1 & 3) << 3));
  *(undefined1 *)(unaff_x20 + 0x32) = param_2;
  return;
}



/* Address: 0x10096e97c | FUN_10096e97c */

void FUN_10096e97c(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined1 *)(unaff_x20 + 0x31) = param_1;
  *(undefined1 *)(unaff_x20 + 0x32) = param_2;
  return;
}



/* Address: 0x10096e9d0 | FUN_10096e9d0 */

void FUN_10096e9d0(undefined1 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  *(undefined1 *)(unaff_x20 + 0x31) = param_1;
  *(undefined1 *)(unaff_x20 + 0x32) = param_2;
  return;
}



/* Address: 0x10096e9f4 | FUN_10096e9f4 */

void FUN_10096e9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long unaff_x20;
  long unaff_x21;
  long local_88;
  undefined8 uStack_80;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_47;
  
  uVar5 = (undefined4)((ulong)param_3 >> 0x20);
  uVar4 = (undefined4)param_3;
  if (*(char *)(unaff_x20 + 0x30) == '\x01') {
    uVar1 = param_2;
    uVar3 = param_2;
    FUN_10096eb0c();
    if (unaff_x21 != 0) {
      return;
    }
    if (((uint)uVar3 & 0xff) == 1) {
      if (*(char *)(unaff_x20 + 0x30) == '\x01') {
        return;
      }
    }
    else {
      *(undefined8 *)(unaff_x20 + 0x28) = uVar1;
      *(undefined1 *)(unaff_x20 + 0x30) = 0;
    }
  }
  lVar2 = *(long *)(unaff_x20 + 0x28);
  FUN_10060c6b4();
  if (lVar2 != 0) {
    *(undefined8 *)(unaff_x20 + 0x28) = 0;
    *(undefined1 *)(unaff_x20 + 0x30) = 1;
    local_72 = (undefined1)((uint)uVar5 >> 0x10);
    local_74 = (undefined2)uVar5;
    local_47 = 0;
    local_88 = lVar2;
    uStack_80 = param_2;
    local_78 = uVar4;
    _swift_retain(lVar2);
    FUN_100626ce0(&local_88);
    _swift_release(lVar2);
    FUN_1005e70f4(&local_88);
  }
  return;
}



/* Address: 0x10096eaf8 | FUN_10096eaf8 */

void FUN_10096eaf8(void)

{
  FUN_10096eda8();
  return;
}



/* Address: 0x10096eb0c | FUN_10096eb0c */

void FUN_10096eb0c(long *param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  code *pcVar4;
  undefined1 *puVar5;
  uint uVar6;
  undefined1 uVar7;
  long unaff_x20;
  ulong uVar8;
  undefined1 auStack_58 [24];
  
  bVar3 = *(byte *)(unaff_x20 + 0x31);
  if (bVar3 < 2) {
    if (bVar3 != 0) {
      uVar2 = *(uint *)(param_1 + 1);
      uVar6 = uVar2;
      FUN_100617ee0(uVar2,*(undefined1 *)(unaff_x20 + 0x32),*param_1,param_1[1],
                    (ulong)*(uint7 *)(param_1 + 2));
      if ((uVar6 & 0xff0000) == 0x10000) {
        return;
      }
      if (uVar2 < 0xfffffffe) {
        *(uint *)(param_1 + 1) = uVar2 + 2;
        return;
      }
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed40);
      (*pcVar4)();
    }
    iVar1 = (int)param_1[1];
    if (*(int *)((long)param_1 + 0xc) == iVar1) {
      return;
    }
    _swift_beginAccess(*param_1 + 0x18,auStack_58,0,0);
    if (iVar1 != -1) {
      *(int *)(param_1 + 1) = iVar1 + 1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed3c);
    (*pcVar4)();
  }
  if (bVar3 == 2) {
    uVar2 = *(uint *)(param_1 + 1);
    puVar5 = (undefined1 *)(ulong)uVar2;
    FUN_10096e75c(puVar5,*(undefined1 *)(unaff_x20 + 0x32));
    if ((ulong)puVar5 >> 0x20 != 0) {
      return;
    }
    if (0xfffffffc < uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed30);
      (*pcVar4)();
    }
    if (*(uint *)((long)param_1 + 0xc) < uVar2 + 3) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed44);
      (*pcVar4)();
    }
    *(uint *)(param_1 + 1) = uVar2 + 3;
  }
  else if (bVar3 == 3) {
    uVar2 = *(uint *)(param_1 + 1);
    uVar8 = (ulong)uVar2;
    FUN_100617e10(uVar8,*(undefined1 *)(unaff_x20 + 0x32),*param_1,param_1[1],
                  (ulong)*(uint7 *)(param_1 + 2));
    if ((uVar8 & 0xff00000000) == 0x100000000) {
      return;
    }
    if (0xfffffffb < uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed34);
      (*pcVar4)();
    }
    *(uint *)(param_1 + 1) = uVar2 + 4;
    puVar5 = (undefined1 *)(uVar8 & 0xffffffff);
  }
  else {
    uVar2 = *(uint *)(param_1 + 1);
    puVar5 = (undefined1 *)(ulong)uVar2;
    uVar6 = (uint)*(byte *)(unaff_x20 + 0x32);
    FUN_100617d38(puVar5,*(byte *)(unaff_x20 + 0x32),*param_1,param_1[1],
                  (ulong)*(uint7 *)(param_1 + 2));
    if ((uVar6 & 0xff) == 1) {
      return;
    }
    if (0xfffffff7 < uVar2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10096ed38);
      (*pcVar4)();
    }
    *(uint *)(param_1 + 1) = uVar2 + 8;
    if ((long)puVar5 < 0) {
      uVar7 = 0;
      goto LAB_10096ece4;
    }
  }
  if ((ulong)puVar5 >> 0x1f == 0) {
    return;
  }
  uVar7 = 1;
LAB_10096ece4:
  FUN_10096f0c8();
  _swift_allocError(&DAT_100f1cf10,puVar5,0,0);
  *puVar5 = uVar7;
  _swift_willThrow();
  return;
}


