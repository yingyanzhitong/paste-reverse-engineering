/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10063f6b4 | FUN_10063f6b4 */

void FUN_10063f6b4(ExecutorJob param_1,undefined8 param_2,long param_3)

{
  UnownedJob UVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  code *pcVar3;
  
  UVar1 = Swift::UnownedJob::init(param_1);
  puVar2 = &DAT_100eef300;
  _swift_allocObject(&DAT_100eef300,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(long *)(puVar2 + 0x18) = param_3;
  *(undefined **)(puVar2 + 0x20) = UVar1.unknown;
  *(undefined8 *)(puVar2 + 0x28) = unaff_x20;
  pcVar3 = *(code **)(param_3 + 0x18);
  _swift_unknownObjectRetain();
  (*pcVar3)(FUN_10064242c,puVar2,param_2,param_3);
  _swift_release(puVar2);
  return;
}



/* Address: 0x10063f734 | FUN_10063f734 */

void FUN_10063f734(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  UnownedSerialExecutor UVar1;
  
  (**(code **)(param_4 + 0x58))(param_3,param_4);
  _swift_getObjectType();
  UVar1 = Swift::SerialExecutor::asUnownedSerialExecutor();
  _swift_unknownObjectRelease(param_3);
  _swift_job_run(param_1,UVar1.unknown,param_4);
  return;
}



/* Address: 0x10063f7a0 | FUN_10063f7a0 */

String FUN_10063f7a0(undefined8 param_1)

{
  String SVar1;
  
  _swift_unknownObjectRetain();
  SVar1 = Swift::String::_init(&stack0xffffffffffffffd8,param_1);
  return SVar1;
}



/* Address: 0x10063f7dc | FUN_10063f7dc */

ulong FUN_10063f7dc(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(1000),8) == param_1 * 1000 >> 0x3f) {
    uVar1 = param_1 * 1000;
  }
  return uVar1;
}



/* Address: 0x10063f7fc | FUN_10063f7fc */

ulong FUN_10063f7fc(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(param_2),8) == param_1 * param_2 >> 0x3f) {
    uVar1 = param_1 * param_2;
  }
  return uVar1;
}



/* Address: 0x10063f818 | FUN_10063f818 */

ulong FUN_10063f818(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(1000000),8) == param_1 * 1000000 >> 0x3f) {
    uVar1 = param_1 * 1000000;
  }
  return uVar1;
}



/* Address: 0x10063f83c | FUN_10063f83c */

ulong FUN_10063f83c(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(60000000000),8) == param_1 * 60000000000 >> 0x3f) {
    uVar1 = param_1 * 60000000000;
  }
  return uVar1;
}



/* Address: 0x10063f864 | FUN_10063f864 */

ulong FUN_10063f864(long param_1)

{
  ulong uVar1;
  
  uVar1 = param_1 >> 0x3f ^ 0x7fffffffffffffff;
  if (SUB168(SEXT816(param_1) * SEXT816(3600000000000),8) == param_1 * 3600000000000 >> 0x3f) {
    uVar1 = param_1 * 3600000000000;
  }
  return uVar1;
}



/* Address: 0x10063f88c | FUN_10063f88c */

void FUN_10063f88c(undefined8 param_1,__uint64 param_2)

{
  Swift::Hasher::_combine(param_2,(Hasher)param_2);
  return;
}



/* Address: 0x10063f8b0 | FUN_10063f8b0 */

void FUN_10063f8b0(Hasher param_1,Hasher param_2)

{
  Swift::Hasher::init(0);
  Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x10063f8f4 | FUN_10063f8f4 */

char ** FUN_10063f8f4(char *param_1,undefined *param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  bool bVar2;
  Iterator IVar3;
  Iterator IVar4;
  Index from;
  char *pcVar5;
  undefined8 *puVar6;
  UnsafeBufferPointer<__int8> UVar7;
  uint uVar8;
  undefined *puVar9;
  undefined1 *puVar12;
  _StringGuts _Var13;
  _StringComparisonResult expecting;
  char *pcVar15;
  Index IVar17;
  long lVar18;
  char **ppcVar19;
  Index after;
  Character CVar20;
  String SVar21;
  String SVar22;
  Character CVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  char *local_90;
  undefined *local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  void *pvVar10;
  _StringGuts _Var11;
  _StringObject _Var14;
  void *pvVar16;
  
  local_68 = 0xe000000000000000;
  local_78 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    local_78 = (ulong)param_2 >> 0x38 & 0xf;
  }
  local_80 = 0;
  uStack_70 = 0;
  IVar3.unknown = param_2;
  IVar4.unknown = param_2;
  local_90 = param_1;
  local_88 = param_2;
  _swift_bridgeObjectRetain();
  Swift::String::Iterator::_next(IVar3);
  while (IVar4.unknown != (undefined *)0x0) {
    CVar23.bridgeObject = IVar4.unknown;
    CVar23.str = IVar3.unknown;
    puVar9 = IVar4.unknown;
    bVar2 = Swift::Character::get_isWhitespace(CVar23);
    if (!bVar2) {
      CVar20.bridgeObject = IVar4.unknown;
      CVar20.str = IVar3.unknown;
      SVar21.bridgeObject = param_4;
      SVar21.str = param_3;
      puVar9 = IVar4.unknown;
      Swift::String::append(CVar20,SVar21);
    }
    _swift_bridgeObjectRelease();
    Swift::String::Iterator::_next(IVar4);
    IVar3.unknown = IVar4.unknown;
    IVar4.unknown = puVar9;
  }
  _swift_bridgeObjectRelease(local_88);
  SVar21 = Swift::String::_init
                     (&uStack_70,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___protocol_witness_table_for_Swift_String___Swift_LosslessStringConvertible_in_Swift_100eac270
                      ,
                      PTR___protocol_witness_table_for_Swift_String___Swift_Sequence_in_Swift_100eac238
                     );
  SVar22 = Swift::String::lowercased(SVar21);
  pvVar10 = SVar22.bridgeObject;
  _swift_bridgeObjectRelease(SVar21.bridgeObject);
  uVar1 = (ulong)SVar22.str & 0xffffffffffff;
  if (((ulong)pvVar10 & 0x2000000000000000) != 0) {
    uVar1 = (ulong)pvVar10 >> 0x38 & 0xf;
  }
  _swift_bridgeObjectRetain(pvVar10);
  if (uVar1 == 0) {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  }
  else {
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      CVar23 = Swift::String::get_subscript(after,SVar22);
      _Var11.unknown = CVar23.bridgeObject;
      _Var13.unknown = CVar23.str;
      uVar8 = (uint)CVar23.bridgeObject;
      Swift::Character::_get_wholeNumberValue(CVar23);
      if (((uVar8 & 0xff) == 1) &&
         ((_Var13.unknown != (undefined *)0x2c ||
          (_Var11.unknown != (undefined *)0xe100000000000000)))) {
        bVar2 = Swift::_stringCompareWithSmolCheck(_Var13,_Var11,(_StringComparisonResult)0x2c);
        if ((bVar2) ||
           (_Var13.unknown == (undefined *)0x2e && _Var11.unknown == (undefined *)0xe100000000000000
           )) goto LAB_10063fa0c;
        bVar2 = Swift::_stringCompareWithSmolCheck(_Var13,_Var11,(_StringComparisonResult)0x2e);
        _swift_bridgeObjectRelease(_Var11.unknown);
        if (!bVar2) break;
      }
      else {
LAB_10063fa0c:
        _swift_bridgeObjectRelease(_Var11.unknown);
      }
      after = Swift::String::index(after,SVar22);
    } while (uVar1 * 4 - ((ulong)after.cmsgPointer.unknown >> 0xe) != 0);
  }
  SVar29.bridgeObject = SVar22.str;
  SVar29.str = (char *)after.cmsgPointer.unknown;
  SVar30 = SVar22;
  from.cmsgPointer.unknown =
       (UnsafeMutablePointer)Swift::String::get_subscript((Range<Index>)0xf,SVar29);
  pvVar16 = SVar30.bridgeObject;
  _Var14.unknown = SVar30.str;
  _swift_bridgeObjectRelease(pvVar10);
  IVar17.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar5 = (char *)Swift::Substring::distance(from,after,(Substring)from.cmsgPointer.unknown);
  FUN_100108f9c();
  pcVar15 = SVar22.bridgeObject;
  SVar22.bridgeObject = SVar22.str;
  _swift_bridgeObjectRelease(pvVar10);
  SVar22.str = pcVar5;
  puVar9 = (undefined *)IVar17.cmsgPointer.unknown;
  SVar21 = Swift::String::__fromSubstring(SVar22);
  puVar12 = SVar21.bridgeObject;
  pcVar5 = SVar21.str;
  _Var13.unknown = puVar12;
  _swift_bridgeObjectRelease(IVar17.cmsgPointer.unknown);
  if (((ulong)from.cmsgPointer.unknown ^ (ulong)after.cmsgPointer.unknown) < 0x4000) {
    _swift_bridgeObjectRelease(pvVar16);
    SVar30.bridgeObject = puVar9;
    SVar30.str = pcVar15;
  }
  else {
    if (((ulong)pvVar16 >> 0x3c & 1) == 0) {
      if (((ulong)pvVar16 >> 0x3d & 1) == 0) {
        if (((ulong)_Var14.unknown >> 0x3c & 1) == 0) {
          UVar7 = Swift::_StringObject::get_sharedUTF8(_Var14);
        }
        else {
          UVar7.unknown = (undefined *)(((ulong)pvVar16 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_88 = (undefined *)((ulong)pvVar16 & 0xffffffffffffff);
        UVar7.unknown = (undefined *)&local_90;
        local_90 = _Var14.unknown;
      }
      FUN_1000f59d8();
      SVar30.bridgeObject = _Var14.unknown;
      SVar30.str = (char *)after.cmsgPointer.unknown;
      after.cmsgPointer.unknown = from.cmsgPointer.unknown;
      from.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)UVar7.unknown;
    }
    else {
      FUN_100641f5c();
    }
    _Var13.unknown = (undefined *)after.cmsgPointer.unknown;
    _swift_bridgeObjectRelease(pvVar16);
    if ((SUB84(after.cmsgPointer.unknown,0) & 0xff) != 1) {
      if ((pcVar5 != (char *)0x68) || (puVar12 != (undefined1 *)0xe100000000000000)) {
        expecting.value = SVar21.str._0_1_;
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x68,(_StringGuts)0xe100000000000000,expecting);
        if (((!bVar2) &&
            (((pcVar5 != (char *)0x7268 || (puVar12 != &SUB_e200000000000000)) &&
             (bVar2 = Swift::_stringCompareWithSmolCheck
                                ((_StringGuts)0x7268,(_StringGuts)0xe200000000000000,expecting),
             !bVar2)))) &&
           (((pcVar5 != (char *)0x737268 || (puVar12 != (undefined1 *)0xe300000000000000)) &&
            (bVar2 = Swift::_stringCompareWithSmolCheck
                               ((_StringGuts)0x737268,(_StringGuts)0xe300000000000000,expecting),
            !bVar2)))) {
          if ((pcVar5 != (char *)0x6d) || (puVar12 != (undefined1 *)0xe100000000000000)) {
            bVar2 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x6d,(_StringGuts)0xe100000000000000,expecting);
            if ((!bVar2) &&
               ((pcVar5 != (char *)0x6e696d || puVar12 != (undefined1 *)0xe300000000000000 &&
                (bVar2 = Swift::_stringCompareWithSmolCheck
                                   ((_StringGuts)0x6e696d,(_StringGuts)0xe300000000000000,expecting)
                , !bVar2)))) {
              if ((pcVar5 != (char *)0x73) || (puVar12 != (undefined1 *)0xe100000000000000)) {
                bVar2 = Swift::_stringCompareWithSmolCheck
                                  ((_StringGuts)0x73,(_StringGuts)0xe100000000000000,expecting);
                if ((((!bVar2) &&
                     ((pcVar5 != (char *)0x636573 || puVar12 != (undefined1 *)0xe300000000000000 &&
                      (bVar2 = Swift::_stringCompareWithSmolCheck
                                         ((_StringGuts)0x636573,(_StringGuts)0xe300000000000000,
                                          expecting), !bVar2)))) &&
                    ((pcVar5 != (char *)0x73636573 || (puVar12 != &DAT_e400000000000000)))) &&
                   (bVar2 = Swift::_stringCompareWithSmolCheck
                                      ((_StringGuts)0x73636573,(_StringGuts)0xe400000000000000,
                                       expecting), !bVar2)) {
                  if (((((pcVar5 == (char *)0x736d) && (puVar12 == &SUB_e200000000000000)) ||
                       (bVar2 = Swift::_stringCompareWithSmolCheck
                                          ((_StringGuts)0x736d,(_StringGuts)0xe200000000000000,
                                           expecting), bVar2)) ||
                      ((pcVar5 == (char *)0x73696c6c696d && (puVar12 == &DAT_e600000000000000)))) ||
                     (bVar2 = Swift::_stringCompareWithSmolCheck
                                        ((_StringGuts)0x73696c6c696d,(_StringGuts)0xe600000000000000
                                         ,expecting), bVar2)) {
                    _swift_bridgeObjectRelease(param_2);
                    _swift_bridgeObjectRelease(puVar12);
                    lVar18 = 1000000;
                  }
                  else {
                    if (((pcVar5 != (char *)0x7375) || (puVar12 != &SUB_e200000000000000)) &&
                       ((bVar2 = Swift::_stringCompareWithSmolCheck
                                           ((_StringGuts)0x7375,(_StringGuts)0xe200000000000000,
                                            expecting), !bVar2 &&
                        ((pcVar5 != (char *)0x73b5c2 ||
                         (puVar12 != (undefined1 *)0xa300000000000000)))))) {
                      bVar2 = Swift::_stringCompareWithSmolCheck
                                        ((_StringGuts)0x73b5c2,(_StringGuts)0xa300000000000000,
                                         expecting);
                      if ((!bVar2) &&
                         ((pcVar5 != (char *)0x736f7263696d || puVar12 != &DAT_e600000000000000 &&
                          (bVar2 = Swift::_stringCompareWithSmolCheck
                                             ((_StringGuts)0x736f7263696d,
                                              (_StringGuts)0xe600000000000000,expecting), !bVar2))))
                      {
                        if ((((pcVar5 == (char *)0x736e) && (puVar12 == &SUB_e200000000000000)) ||
                            (bVar2 = Swift::_stringCompareWithSmolCheck
                                               ((_StringGuts)0x736e,(_StringGuts)0xe200000000000000,
                                                expecting), bVar2)) ||
                           ((pcVar5 == (char *)0x736f6e616e && (puVar12 == &DAT_e500000000000000))))
                        {
LAB_1006400cc:
                          _swift_bridgeObjectRelease(param_2);
                          _swift_bridgeObjectRelease(puVar12);
                          return (char **)from.cmsgPointer.unknown;
                        }
                        _Var13.unknown = &DAT_e500000000000000;
                        SVar22 = SVar21;
                        bVar2 = Swift::_stringCompareWithSmolCheck
                                          ((_StringGuts)0x736f6e616e,(_StringGuts)0xe500000000000000
                                           ,expecting);
                        if (bVar2) goto LAB_1006400cc;
                        local_90 = (char *)0x0;
                        local_88 = (undefined *)0xe000000000000000;
                        Swift::_StringGuts::grow(0x19,_Var13);
                        _swift_bridgeObjectRelease(local_88);
                        local_90 = (char *)0x206e776f6e6b6e55;
                        local_88 = (undefined *)0xee00272074696e75;
                        Swift::String::append(SVar21,SVar22);
                        _swift_bridgeObjectRelease(puVar12);
                        SVar26.bridgeObject = &DAT_e600000000000000;
                        SVar26.str = (char *)0x27206e692027;
                        Swift::String::append(SVar26,SVar22);
                        SVar27.bridgeObject = param_2;
                        SVar27.str = param_1;
                        Swift::String::append(SVar27,SVar22);
                        _swift_bridgeObjectRelease(param_2);
                        SVar28.bridgeObject = (void *)0xe100000000000000;
                        SVar28.str = (char *)0x27;
                        puVar6 = (undefined8 *)0x27;
                        Swift::String::append(SVar28,SVar22);
                        ppcVar19 = (char **)0x0;
                        goto LAB_10063fc34;
                      }
                    }
                    _swift_bridgeObjectRelease(param_2);
                    _swift_bridgeObjectRelease(puVar12);
                    lVar18 = 1000;
                  }
                  goto LAB_10063fd24;
                }
              }
              _swift_bridgeObjectRelease(param_2);
              _swift_bridgeObjectRelease(puVar12);
              lVar18 = 1000000000;
              goto LAB_10063fd24;
            }
          }
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease(puVar12);
          lVar18 = 60000000000;
          goto LAB_10063fd24;
        }
      }
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease(puVar12);
      lVar18 = 3600000000000;
LAB_10063fd24:
      if (SUB168(SEXT816((long)from.cmsgPointer.unknown) * SEXT816(lVar18),8) !=
          (long)from.cmsgPointer.unknown * lVar18 >> 0x3f) {
        return (char **)((long)from.cmsgPointer.unknown >> 0x3f ^ 0x7fffffffffffffff);
      }
      return (char **)((long)from.cmsgPointer.unknown * lVar18);
    }
  }
  _swift_bridgeObjectRelease(puVar12);
  local_90 = (char *)0x0;
  local_88 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x28,_Var13);
  _swift_bridgeObjectRelease(local_88);
  local_90 = (char *)0x27;
  local_88 = (undefined *)0xe100000000000000;
  SVar24.bridgeObject = param_2;
  SVar24.str = param_1;
  Swift::String::append(SVar24,SVar30);
  _swift_bridgeObjectRelease(param_2);
  puVar6 = (undefined8 *)0xd000000000000025;
  SVar25.bridgeObject = (void *)0x8000000100daefc0;
  SVar25.str = (char *)0xd000000000000025;
  Swift::String::append(SVar25,SVar30);
  ppcVar19 = (char **)&DAT_00000001;
LAB_10063fc34:
  puVar9 = local_88;
  pcVar5 = local_90;
  FUN_100642438();
  _swift_allocError(&DAT_100eef6d0,puVar6,0,0);
  *puVar6 = pcVar5;
  puVar6[1] = puVar9;
  *(char *)(puVar6 + 2) = (char)ppcVar19;
  _swift_willThrow();
  return ppcVar19;
}



/* Address: 0x100640188 | FUN_100640188 */

String FUN_100640188(long param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  undefined1 *puVar2;
  String SVar3;
  String SVar4;
  String local_30;
  
  if (param_1 == (param_1 / 1000000000) * 1000000000) {
    local_30 = Swift::CustomStringConvertible::get_description();
    pcVar1 = (char *)0x7320;
    puVar2 = &SUB_e200000000000000;
  }
  else {
    if (param_1 == (param_1 / 1000000) * 1000000) {
      local_30 = Swift::CustomStringConvertible::get_description();
      pcVar1 = (char *)0x736d20;
    }
    else if (param_1 == (param_1 / 1000) * 1000) {
      local_30 = Swift::CustomStringConvertible::get_description();
      pcVar1 = (char *)0x737520;
    }
    else {
      local_30 = Swift::CustomStringConvertible::get_description();
      pcVar1 = (char *)0x736e20;
    }
    puVar2 = (undefined1 *)0xe300000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  return local_30;
}



/* Address: 0x1006402ec | FUN_1006402ec */

void FUN_1006402ec(void)

{
  undefined8 *unaff_x20;
  
  FUN_100640188(*unaff_x20);
  return;
}



/* Address: 0x1006402f4 | FUN_1006402f4 */

long FUN_1006402f4(long param_1,long param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(param_1,param_2)) {
    return param_1 + param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640304);
  (*pcVar1)();
}



/* Address: 0x100640304 | FUN_100640304 */

void FUN_100640304(long *param_1,long param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_1,param_2)) {
    *param_1 = *param_1 + param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064031c);
  (*pcVar1)();
}



/* Address: 0x10064031c | FUN_10064031c */

long FUN_10064031c(long param_1,long param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(param_1,param_2)) {
    return param_1 - param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10064032c);
  (*pcVar1)();
}



/* Address: 0x10064032c | FUN_10064032c */

void FUN_10064032c(long *param_1,long param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_1,param_2)) {
    *param_1 = *param_1 - param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640344);
  (*pcVar1)();
}



/* Address: 0x100640344 | FUN_100640344 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100640344(undefined8 param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  __uint64 _Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_70 [2];
  
  uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar11 = (long)local_70 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_3 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar11 - uVar6;
  lVar8 = lVar9 - uVar6;
  (**(code **)(lVar7 + 0x10))(lVar8,param_1,param_3);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_70[1] = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_100640490:
        FUN_100642478();
        Swift::BinaryInteger::_init
                  (lVar9,local_70 + 1,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_3,
                   param_4);
        bVar2 = Swift::Comparable::<_infix
                          (lVar8,lVar9,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
        (**(code **)(lVar7 + 8))(lVar9,param_3);
        if (bVar2) {
LAB_1006406dc:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1006406e0);
          (*pcVar1)();
        }
        goto LAB_100640590;
      }
    }
    else {
      local_70[0] = param_2;
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      param_2 = local_70[0];
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_100640490;
        _swift_getAssociatedConformanceWitness
                  (uVar10,param_3,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar11,&DAT_100c6c6b8,0x100,lVar3,uVar10);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar8,lVar9,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
        (**(code **)(lVar7 + 8))(lVar9,param_3);
        if (bVar2) goto LAB_1006406dc;
      }
      else if (0x3f < _Var4) goto LAB_100640590;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_100640590:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((_Var4 < 0x41) &&
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 != 0x40 ||
      (bVar2 = Swift::BinaryInteger::get_isSigned(), bVar2)))) goto LAB_100640684;
  local_70[1] = 0x7fffffffffffffff;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) {
LAB_100640674:
      Swift::BinaryInteger::get__lowWord();
      goto LAB_100640684;
    }
  }
  else if (_Var4 < 0x40) goto LAB_100640674;
  FUN_100642478();
  Swift::BinaryInteger::_init
            (lVar9,local_70 + 1,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_3,param_4)
  ;
  bVar2 = Swift::Comparable::<_infix
                    (lVar9,lVar8,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
  (**(code **)(lVar7 + 8))(lVar9,param_3);
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064063c);
    (*pcVar1)();
  }
LAB_100640684:
  _Var5 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar7 + 8))(lVar8,param_3);
  if (SUB168(SEXT816((long)_Var5) * SEXT816(param_2),8) != (long)(_Var5 * param_2) >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006406dc);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x1006406e0 | FUN_1006406e0 */

/* WARNING: Type propagation algorithm not settling */

void FUN_1006406e0(long param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  __int64 _Var4;
  __uint64 _Var5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long local_70 [2];
  
  uVar10 = *(undefined8 *)(*(long *)(param_4 + 0x18) + 0x10);
  lVar3 = 0;
  _swift_getAssociatedTypeWitness
            (0,uVar10,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
             ,
             PTR___associated_type_descriptor_for_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType_100eabce0
            );
  lVar11 = (long)local_70 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_3 + -8);
  uVar6 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar9 = lVar11 - uVar6;
  lVar8 = lVar9 - uVar6;
  (**(code **)(lVar7 + 0x10))(lVar8,param_2,param_3);
  bVar2 = Swift::BinaryInteger::get_isSigned();
  if ((bVar2) && (_Var4 = Swift::BinaryInteger::get_bitWidth(), 0x40 < _Var4)) {
    local_70[1] = 0x8000000000000000;
    bVar2 = Swift::BinaryInteger::get_isSigned();
    if (bVar2) {
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      if (0x3f < _Var4) {
LAB_10064082c:
        FUN_100642478();
        Swift::BinaryInteger::_init
                  (lVar9,local_70 + 1,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_3,
                   param_4);
        bVar2 = Swift::Comparable::<_infix
                          (lVar8,lVar9,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
        (**(code **)(lVar7 + 8))(lVar9,param_3);
        if (bVar2) {
LAB_100640a78:
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x100640a7c);
          (*pcVar1)();
        }
        goto LAB_10064092c;
      }
    }
    else {
      local_70[0] = param_1;
      bVar2 = Swift::BinaryInteger::get_isSigned();
      _Var4 = Swift::BinaryInteger::get_bitWidth();
      param_1 = local_70[0];
      if (bVar2) {
        if (0x40 < _Var4) goto LAB_10064082c;
        _swift_getAssociatedConformanceWitness
                  (uVar10,param_3,lVar3,
                   PTR___protocol_requirements_base_descriptor_for_Swift_ExpressibleByIntegerLiteral_100ead898
                   ,
                   PTR___associated_conformance_descriptor_for_Swift_ExpressibleByIntegerLiteral_Swift_ExpressibleByIntegerLiteral_IntegerLiteralType__Swift__ExpressibleByBuiltinIntegerLiteral_100ead890
                  );
        Swift::_ExpressibleByBuiltinIntegerLiteral::init(lVar11,&DAT_100c6c6b8,0x100,lVar3,uVar10);
        Swift::ExpressibleByIntegerLiteral::_init();
        bVar2 = Swift::Comparable::<_infix
                          (lVar8,lVar9,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
        (**(code **)(lVar7 + 8))(lVar9,param_3);
        if (bVar2) goto LAB_100640a78;
      }
      else if (0x3f < _Var4) goto LAB_10064092c;
    }
    Swift::BinaryInteger::get__lowWord();
  }
LAB_10064092c:
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if ((_Var4 < 0x41) &&
     ((_Var4 = Swift::BinaryInteger::get_bitWidth(), _Var4 != 0x40 ||
      (bVar2 = Swift::BinaryInteger::get_isSigned(), bVar2)))) goto LAB_100640a20;
  local_70[1] = 0x7fffffffffffffff;
  bVar2 = Swift::BinaryInteger::get_isSigned();
  _Var4 = Swift::BinaryInteger::get_bitWidth();
  if (bVar2) {
    if (_Var4 < 0x41) {
LAB_100640a10:
      Swift::BinaryInteger::get__lowWord();
      goto LAB_100640a20;
    }
  }
  else if (_Var4 < 0x40) goto LAB_100640a10;
  FUN_100642478();
  Swift::BinaryInteger::_init
            (lVar9,local_70 + 1,PTR___type_metadata_for_Swift_Int64_100eadc00,_Var4,param_3,param_4)
  ;
  bVar2 = Swift::Comparable::<_infix
                    (lVar9,lVar8,param_3,*(undefined8 *)(*(long *)(param_4 + 0x20) + 8));
  (**(code **)(lVar7 + 8))(lVar9,param_3);
  if (bVar2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006409d8);
    (*pcVar1)();
  }
LAB_100640a20:
  _Var5 = Swift::BinaryInteger::get__lowWord();
  (**(code **)(lVar7 + 8))(lVar8,param_3);
  if (SUB168(SEXT816(param_1) * SEXT816((long)_Var5),8) != (long)(param_1 * _Var5) >> 0x3f) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640a78);
    (*pcVar1)();
  }
  return;
}



/* Address: 0x100640a7c | FUN_100640a7c */

void FUN_100640a7c(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_2,*param_3)) {
    *param_1 = *param_2 + *param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640a98);
  (*pcVar1)();
}



/* Address: 0x100640a98 | FUN_100640a98 */

void FUN_100640a98(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SCARRY8(*param_1,*param_2)) {
    *param_1 = *param_1 + *param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640ab4);
  (*pcVar1)();
}



/* Address: 0x100640ab4 | FUN_100640ab4 */

void FUN_100640ab4(long *param_1,long *param_2,long *param_3)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_2,*param_3)) {
    *param_1 = *param_2 - *param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640ad0);
  (*pcVar1)();
}



/* Address: 0x100640ad0 | FUN_100640ad0 */

void FUN_100640ad0(long *param_1,long *param_2)

{
  code *pcVar1;
  
  if (!SBORROW8(*param_1,*param_2)) {
    *param_1 = *param_1 - *param_2;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640aec);
  (*pcVar1)();
}



/* Address: 0x100640aec | FUN_100640aec */

void FUN_100640aec(long param_1)

{
  code *pcVar1;
  
  if (-1 < param_1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640af8);
  (*pcVar1)();
}



/* Address: 0x100640af8 | FUN_100640af8 */

undefined8 FUN_100640af8(void)

{
  return 0x7fffffffffffffff;
}



/* Address: 0x100640b00 | FUN_100640b00 */

__uint64 FUN_100640b00(void)

{
  DispatchTime DVar1;
  DispatchTime DVar2;
  __uint64 _Var3;
  long lVar4;
  long lVar5;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2 = Dispatch::DispatchTime::now(DVar1);
  _Var3 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffd0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  return _Var3;
}



/* Address: 0x100640b70 | FUN_100640b70 */

ulong FUN_100640b70(ulong param_1)

{
  if (0x7ffffffffffffffe < param_1) {
    param_1 = 0x7fffffffffffffff;
  }
  return param_1;
}



/* Address: 0x100640b80 | FUN_100640b80 */

bool FUN_100640b80(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(param_2 | param_1)) {
    return param_1 == param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640b98);
  (*pcVar1)();
}



/* Address: 0x100640b98 | FUN_100640b98 */

void FUN_100640b98(undefined8 param_1,__uint64 param_2)

{
  code *pcVar1;
  
  if (-1 < (long)param_2) {
    Swift::Hasher::_combine(param_2,(Hasher)param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640bc4);
  (*pcVar1)();
}



/* Address: 0x100640bc4 | FUN_100640bc4 */

void FUN_100640bc4(Hasher param_1,Hasher param_2)

{
  code *pcVar1;
  
  Swift::Hasher::init(0);
  if (-1 < (long)param_1.unknown) {
    Swift::Hasher::_combine((__uint64)param_1.unknown,param_2);
    Swift::Hasher::_finalize(param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640c10);
  (*pcVar1)();
}



/* Address: 0x100640c10 | FUN_100640c10 */

bool FUN_100640c10(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(*param_2 | *param_1)) {
    return *param_1 == *param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640c30);
  (*pcVar1)();
}



/* Address: 0x100640c30 | FUN_100640c30 */

void FUN_100640c30(undefined8 param_1,Hasher param_2)

{
  code *pcVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::init(0);
  if (-1 < (long)HVar2.unknown) {
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
    Swift::Hasher::_finalize(HVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640c7c);
  (*pcVar1)();
}



/* Address: 0x100640c7c | FUN_100640c7c */

void FUN_100640c7c(undefined8 param_1,Hasher param_2)

{
  code *pcVar1;
  __uint64 *unaff_x20;
  
  if (-1 < (long)*unaff_x20) {
    Swift::Hasher::_combine(*unaff_x20,param_2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640cac);
  (*pcVar1)();
}



/* Address: 0x100640cac | FUN_100640cac */

void FUN_100640cac(__int64 param_1,Hasher param_2)

{
  code *pcVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  Swift::Hasher::init(param_1);
  if (-1 < (long)HVar2.unknown) {
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
    Swift::Hasher::_finalize(HVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640cf4);
  (*pcVar1)();
}



/* Address: 0x100640cf4 | FUN_100640cf4 */

bool FUN_100640cf4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(param_2 | param_1)) {
    return param_1 < param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640d0c);
  (*pcVar1)();
}



/* Address: 0x100640d0c | FUN_100640d0c */

bool FUN_100640d0c(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(param_2 | param_1)) {
    return param_2 < param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640d24);
  (*pcVar1)();
}



/* Address: 0x100640d24 | FUN_100640d24 */

bool FUN_100640d24(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(*param_2 | *param_1)) {
    return *param_1 < *param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640d44);
  (*pcVar1)();
}



/* Address: 0x100640d44 | FUN_100640d44 */

bool FUN_100640d44(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(*param_2 | *param_1)) {
    return *param_1 <= *param_2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640d64);
  (*pcVar1)();
}



/* Address: 0x100640d64 | FUN_100640d64 */

bool FUN_100640d64(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(*param_2 | *param_1)) {
    return *param_2 <= *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640d84);
  (*pcVar1)();
}



/* Address: 0x100640d84 | FUN_100640d84 */

bool FUN_100640d84(ulong *param_1,ulong *param_2)

{
  code *pcVar1;
  
  if (-1 < (long)(*param_2 | *param_1)) {
    return *param_2 < *param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640da4);
  (*pcVar1)();
}



/* Address: 0x100640da4 | FUN_100640da4 */

String FUN_100640da4(long param_1)

{
  code *pcVar1;
  String SVar2;
  
  if (-1 < param_1) {
    FUN_100619170();
    SVar2 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640de8);
  (*pcVar1)();
}



/* Address: 0x100640de8 | FUN_100640de8 */

String FUN_100640de8(void)

{
  code *pcVar1;
  long *unaff_x20;
  String SVar2;
  
  if (-1 < *unaff_x20) {
    FUN_100619170();
    SVar2 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640e30);
  (*pcVar1)();
}



/* Address: 0x100640e30 | FUN_100640e30 */

ulong FUN_100640e30(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
    if (-1 < (long)param_1) {
      param_1 = param_1 - param_2;
      if (0x7ffffffffffffffe < param_1) {
        param_1 = 0x7fffffffffffffff;
      }
      return param_1;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640e78);
    (*pcVar1)();
  }
  if (-1 < (long)param_1) {
    if ((param_2 != 0) && (param_1 < param_2)) {
      return 0;
    }
    if (-1 < (long)(param_1 - param_2)) {
      return param_1 - param_2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100640e7c);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100640e74);
  (*pcVar1)();
}



/* Address: 0x100640e7c | FUN_100640e7c */

undefined8
FUN_100640e7c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  code *pcVar2;
  
  FUN_1000f4a44(param_3,param_4,param_5);
  thunk_FUN_1006528a4();
  puVar1 = &DAT_100eef328;
  _swift_allocObject(&DAT_100eef328,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(long *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  pcVar2 = *(code **)(param_5 + 0x18);
  _swift_retain(unaff_x20);
  _swift_retain(param_2);
  _swift_unknownObjectRetain();
  (*pcVar2)(FUN_1006424b8,puVar1,param_3,param_5);
  _swift_release(puVar1);
  return unaff_x20;
}



/* Address: 0x100640f48 | FUN_100640f48 */

/* WARNING: Removing unreachable block (ram,0x000100640fac) */

void FUN_100640f48(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 auStack_60 [16];
  
  lVar2 = *(long *)(param_5 + -8);
  puVar1 = auStack_60 + -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_retain(param_1,param_5);
  (*param_2)(puVar1);
  FUN_100643020(puVar1,param_1,param_5);
  _swift_release(param_1);
  (**(code **)(lVar2 + 8))(puVar1,param_5);
  return;
}



/* Address: 0x100641014 | FUN_100641014 */

code * FUN_100641014(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    long param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  code *pcVar4;
  
  puVar1 = &DAT_100eef350;
  _swift_allocObject(&DAT_100eef350,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(long *)(puVar1 + 0x20) = param_5;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(undefined8 *)(puVar1 + 0x30) = param_2;
  pcVar4 = *(code **)(param_5 + 0x20);
  uVar2 = 0;
  FUN_1006529e0(0,param_4);
  _swift_retain(param_2);
  pcVar3 = FUN_1006424c8;
  (*pcVar4)(FUN_1006424c8,puVar1,uVar2,param_3,param_5);
  _swift_release(puVar1);
  puVar1 = &DAT_100eef378;
  _swift_allocObject(&DAT_100eef378,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(long *)(puVar1 + 0x20) = param_5;
  pcVar4 = FUN_1006424ec;
  thunk_FUN_10064a5bc(FUN_1006424ec,puVar1,param_4);
  _swift_release(pcVar3);
  _swift_release(puVar1);
  return pcVar4;
}



/* Address: 0x10064110c | FUN_10064110c */

undefined8 FUN_10064110c(undefined8 param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 unaff_x20;
  code *pcVar4;
  undefined8 in_stack_00000000;
  long in_stack_00000008;
  
  FUN_1000f4a44(in_x7,in_stack_00000000,in_stack_00000008);
  thunk_FUN_1006528a4();
  puVar1 = &DAT_100eef3a0;
  _swift_allocObject(&DAT_100eef3a0,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x7;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000000;
  *(long *)(puVar1 + 0x20) = in_stack_00000008;
  *(undefined8 *)(puVar1 + 0x28) = in_x5;
  *(undefined8 *)(puVar1 + 0x30) = in_x6;
  pcVar4 = *(code **)(in_stack_00000008 + 0x30);
  FUN_1006529e0(0,in_stack_00000000);
  _swift_unknownObjectRetain();
  _swift_retain(in_x6);
  pcVar2 = FUN_100642dbc;
  puVar3 = puVar1;
  (*pcVar4)();
  _swift_release(puVar1);
  puVar1 = &DAT_100eef3c8;
  _swift_allocObject(&DAT_100eef3c8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x7;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000000;
  *(long *)(puVar1 + 0x20) = in_stack_00000008;
  *(undefined8 *)(puVar1 + 0x28) = unaff_x20;
  _swift_retain(param_1);
  _swift_retain(unaff_x20);
  FUN_100646e1c(FUN_100642508,puVar1);
  _swift_release(param_1);
  _swift_release(puVar1);
  puVar1 = &DAT_100eef3f0;
  _swift_allocObject(&DAT_100eef3f0,0x40,7);
  *(undefined8 *)(puVar1 + 0x10) = in_x7;
  *(undefined8 *)(puVar1 + 0x18) = in_stack_00000000;
  *(long *)(puVar1 + 0x20) = in_stack_00000008;
  *(undefined8 *)(puVar1 + 0x28) = param_1;
  *(code **)(puVar1 + 0x30) = pcVar2;
  *(undefined **)(puVar1 + 0x38) = puVar3;
  return unaff_x20;
}



/* Address: 0x100641278 | FUN_100641278 */

void FUN_100641278(undefined8 param_1)

{
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  
  FUN_100642530(param_1,in_x5,in_x6,in_x7,in_stack_00000000,in_stack_00000008);
  return;
}



/* Address: 0x10064128c | FUN_10064128c */

void FUN_10064128c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if (*(char *)(param_1 + 1) == '\x01') {
    FUN_100646f54(*param_1,param_2,param_4);
    return;
  }
  FUN_100648434(*param_1);
  return;
}



/* Address: 0x1006412ac | FUN_1006412ac */

undefined8 FUN_1006412ac(undefined8 param_1,long param_2,undefined *param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 unaff_x20;
  long lVar7;
  undefined8 local_60;
  long local_58;
  
  puVar1 = PTR___type_metadata_for____100eae0c8;
  lVar7 = *(long *)(param_3 + -8);
  lVar6 = *(long *)(lVar7 + 0x40);
  if (param_3 == PTR___type_metadata_for____100eae0c8 + 8) {
    (**(code **)(param_4 + 0x50))(param_2,param_4);
    uVar3 = *(ulong *)(param_2 + 0x20);
    lVar6 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    (**(code **)(lVar6 + 0x10))();
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006413ec);
      (*pcVar2)();
    }
    puVar4 = &DAT_100fd8350;
    local_58 = param_2;
    FUN_1000f7830(&DAT_100fd8350,&DAT_100c6a560);
    uVar5 = 0;
    FUN_100645e50(0,puVar1 + 8);
    _swift_dynamicCast(&local_60,&local_58,puVar4,uVar5,7);
    unaff_x20 = local_60;
  }
  else {
    FUN_1006529e0(0,param_3);
    (**(code **)(lVar7 + 0x10))
              ((long)&local_60 - (lVar6 + 0xfU & 0xfffffffffffffff0),param_1,param_3);
    FUN_1006484b4();
    FUN_100004520();
    _swift_unknownObjectRetain();
  }
  return unaff_x20;
}



/* Address: 0x1006413ec | FUN_1006413ec */

undefined1 *
FUN_1006413ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  Result RVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar3 = &DAT_100fd4f20;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = *(long *)(CONCAT71(extraout_var,RVar2.value) + -8);
  puVar6 = auStack_b0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_3;
  uStack_88 = param_4;
  local_80 = param_5;
  uStack_78 = param_1;
  local_70 = param_2;
  FUN_1006414f4(puVar6,FUN_1006426a0,auStack_a0,param_4,puVar3,puVar1);
  puVar4 = puVar6;
  FUN_10063db28(puVar6,param_3,param_4,param_5);
  (**(code **)(lVar5 + 8))(puVar6,CONCAT71(extraout_var,RVar2.value));
  return puVar4;
}



/* Address: 0x1006414f4 | FUN_1006414f4 */

/* WARNING: Removing unreachable block (ram,0x000100641594) */

void FUN_1006414f4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  Result RVar1;
  undefined7 extraout_var;
  long lVar3;
  long lVar4;
  undefined8 local_70 [2];
  long lVar2;
  
  local_70[0] = param_1;
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = (long)local_70 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (*param_2)(lVar3,lVar3 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  _swift_storeEnumTagMultiPayload(lVar3,lVar2,0);
  (**(code **)(lVar4 + 0x20))(local_70[0],lVar3,lVar2);
  return;
}



/* Address: 0x100641614 | FUN_100641614 */

void FUN_100641614(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10064163c | thunk_FUN_100641640 */

undefined8
thunk_FUN_100641640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100eef948;
  _swift_allocObject(&DAT_100eef948,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
  _swift_retain(param_5);
  _swift_unknownObjectRetain();
  FUN_1006417f4(param_1,param_2,param_3,FUN_100642bf0,puVar1,param_6,param_7);
  _swift_release(puVar1);
  return param_1;
}



/* Address: 0x100641640 | FUN_100641640 */

undefined8
FUN_100641640(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100eef948;
  _swift_allocObject(&DAT_100eef948,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_6;
  *(undefined8 *)(puVar1 + 0x18) = param_7;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_5;
  *(undefined8 *)(puVar1 + 0x30) = unaff_x20;
  _swift_retain(param_5);
  _swift_unknownObjectRetain();
  FUN_1006417f4(param_1,param_2,param_3,FUN_100642bf0,puVar1,param_6,param_7);
  _swift_release(puVar1);
  return param_1;
}



/* Address: 0x1006416fc | FUN_1006416fc */

void FUN_1006416fc(void)

{
  FUN_10064192c();
  return;
}



/* Address: 0x100641724 | FUN_100641724 */

long FUN_100641724(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10064175c);
    (*pcVar1)();
  }
  if (param_2 != 0) {
    FUN_100324c28();
    if (!SCARRY8(param_1,param_2)) {
      return param_1 + param_2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100641764);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100641760);
  (*pcVar1)();
}



/* Address: 0x100641764 | FUN_100641764 */

/* WARNING: Removing unreachable block (ram,0x0001006417a4) */

void FUN_100641764(undefined8 param_1,code *param_2)

{
  (*param_2)();
  FUN_10063dc68();
  return;
}



/* Address: 0x1006417f0 | thunk_FUN_1006417f4 */

void thunk_FUN_1006417f4(void)

{
  FUN_1006417f4();
  return;
}



/* Address: 0x1006417f4 | FUN_1006417f4 */

long FUN_1006417f4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong param_6,long param_7)

{
  long lVar1;
  undefined *puVar2;
  undefined8 unaff_x20;
  code *pcVar3;
  
  lVar1 = param_1;
  FUN_1006427f4();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = unaff_x20;
  *(long *)(lVar1 + 0x20) = param_7;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  *(undefined8 *)(lVar1 + 0x48) = param_4;
  *(undefined8 *)(lVar1 + 0x50) = param_5;
  *(undefined8 *)(lVar1 + 0x38) = 0;
  *(undefined8 *)(lVar1 + 0x40) = 0;
  *(undefined8 *)(lVar1 + 0x30) = 0;
  pcVar3 = *(code **)(param_7 + 0x10);
  _swift_retain(param_3);
  _swift_retain(param_5);
  _swift_unknownObjectRetain();
  (*pcVar3)(param_6,param_7);
  if ((param_6 & 1) == 0) {
    _swift_getObjectType();
    puVar2 = &DAT_100eef718;
    _swift_allocObject(&DAT_100eef718,0x20,7);
    *(long *)(puVar2 + 0x10) = lVar1;
    *(long *)(puVar2 + 0x18) = param_1;
    pcVar3 = *(code **)(param_7 + 0x18);
    _swift_retain(lVar1);
    (*pcVar3)(FUN_100642b00,puVar2,unaff_x20,param_7);
    _swift_release(puVar2);
  }
  else {
    FUN_10063de60(param_1);
  }
  return lVar1;
}



/* Address: 0x100641904 | FUN_100641904 */

void FUN_100641904(void)

{
  FUN_10064192c();
  return;
}



/* Address: 0x10064192c | FUN_10064192c */

void FUN_10064192c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  code *UNRECOVERED_JUMPTABLE)

{
  FUN_100641724(param_1,param_3);
  FUN_100641724(param_2,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001006419c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,param_2,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x1006419c8 | FUN_1006419c8 */

undefined1  [16] FUN_1006419c8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  undefined1 auVar2 [16];
  
  puVar1 = &DAT_100fd8358;
  FUN_1000f7830(&DAT_100fd8358,&DAT_100c6a568);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar1 + 0x28) = param_2;
  _swift_unknownObjectRetain();
  auVar2._8_8_ = 0;
  auVar2._0_8_ = puVar1;
  return auVar2;
}



/* Address: 0x100641a30 | FUN_100641a30 */

void FUN_100641a30(void)

{
  code *pcVar1;
  ulong in_x4;
  long in_x5;
  
  (**(code **)(in_x5 + 0x10))(in_x4,in_x5);
  if ((in_x4 & 1) == 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100641a58);
  (*pcVar1)();
}


