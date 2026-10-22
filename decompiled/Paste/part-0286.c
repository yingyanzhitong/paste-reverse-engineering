/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100392730 | FUN_100392730 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100392730(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  
  lVar7 = (long)param_2 - (long)param_1;
  lVar3 = lVar7 + 7;
  if (-1 < lVar7) {
    lVar3 = lVar7;
  }
  lVar3 = lVar3 >> 3;
  lVar12 = (long)param_3 - (long)param_2;
  lVar6 = lVar12 + 7;
  if (-1 < lVar12) {
    lVar6 = lVar12;
  }
  lVar6 = lVar6 >> 3;
  if (lVar3 < lVar6) {
    if (((param_4 < param_1) || (param_1 + lVar3 <= param_4)) || (param_4 != param_1)) {
      _memmove(param_4,param_1,lVar3 << 3);
    }
    plVar10 = param_4 + lVar3;
    plVar8 = param_1;
    if (7 < lVar7) {
      do {
        if (param_3 <= param_2) break;
        lVar3 = *param_4;
        FUN_10038f124();
        if (lVar3 == 0) {
          lVar7 = 0;
        }
        else {
          uVar2 = 0;
          FUN_10032b0c8(0);
          _swift_dynamicCastClass(lVar3,uVar2);
          lVar7 = lVar3;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
        }
        FUN_10038f124();
        if (lVar3 == 0) {
LAB_1003928dc:
          plVar11 = param_4 + 1;
          plVar4 = param_2;
          plVar9 = param_4;
        }
        else {
          uVar2 = 0;
          FUN_10032b0c8(0);
          _swift_dynamicCastClass(lVar3,uVar2);
          if ((lVar3 == 0) || (lVar7 != 0)) goto LAB_1003928dc;
          plVar11 = param_4;
          plVar4 = param_2 + 1;
          plVar9 = param_2;
        }
        param_2 = plVar4;
        param_4 = plVar11;
        if (plVar8 != plVar9) {
          *plVar8 = *plVar9;
        }
        plVar8 = plVar8 + 1;
      } while (param_4 < plVar10);
    }
  }
  else {
    if (((param_4 < param_2) || (param_2 + lVar6 <= param_4)) || (param_4 != param_2)) {
      _memmove(param_4,param_2,lVar6 << 3);
    }
    plVar9 = param_4 + lVar6;
    plVar8 = param_2;
    plVar10 = plVar9;
    if ((param_1 < param_2) && (7 < lVar12)) {
LAB_100392940:
      plVar4 = param_2 + -1;
      plVar11 = param_3;
      do {
        param_3 = plVar11 + -1;
        plVar10 = plVar9 + -1;
        lVar3 = *plVar4;
        FUN_10038f124();
        if (lVar3 == 0) {
          lVar7 = 0;
        }
        else {
          uVar2 = 0;
          FUN_10032b0c8(0);
          _swift_dynamicCastClass(lVar3,uVar2);
          lVar7 = lVar3;
          if (lVar3 == 0) {
            lVar3 = 0;
          }
        }
        FUN_10038f124();
        if (lVar3 != 0) {
          uVar2 = 0;
          FUN_10032b0c8(0);
          _swift_dynamicCastClass(lVar3,uVar2);
          if ((lVar3 != 0) && (lVar7 == 0)) goto LAB_100392a3c;
        }
        if (plVar11 != plVar9) {
          *param_3 = *plVar10;
        }
        plVar8 = param_2;
        plVar9 = plVar10;
        plVar11 = param_3;
        if (plVar10 <= param_4) break;
      } while( true );
    }
  }
LAB_100392a8c:
  uVar5 = (long)plVar10 - (long)param_4;
  uVar1 = uVar5 + 7;
  if (-1 < (long)uVar5) {
    uVar1 = uVar5;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar8)) {
    _memmove(plVar8,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
LAB_100392a3c:
  if (plVar11 != param_2) {
    *param_3 = *plVar4;
  }
  plVar8 = plVar4;
  plVar10 = plVar9;
  if ((plVar4 <= param_1) || (param_2 = plVar4, plVar9 <= param_4)) goto LAB_100392a8c;
  goto LAB_100392940;
}



/* Address: 0x100392aec | FUN_100392aec */

undefined1  [16] FUN_100392aec(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_100392b74();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100392b74);
  (*pcVar3)();
}



/* Address: 0x100392b74 | FUN_100392b74 */

void FUN_100392b74(long param_1)

{
  FUN_100392630(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100392b88 | FUN_100392b88 */

void FUN_100392b88(long param_1)

{
  FUN_1003079c0(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100392b9c | FUN_100392b9c */

void FUN_100392b9c(long param_1)

{
  FUN_100307ac8(0,*(undefined8 *)(param_1 + 0x10),0,param_1);
  return;
}



/* Address: 0x100392bb0 | FUN_100392bb0 */

void FUN_100392bb0(_ContiguousArrayBuffer param_1)

{
  Swift::_ContiguousArrayBuffer::__consumeAndCreateNew
            (false,*(__int64 *)(param_1.unknown + 0x10),false,param_1);
  return;
}



/* Address: 0x100392bc4 | FUN_100392bc4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

_StringGuts * FUN_100392bc4(ID param_1,_StringGuts *param_2)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  _StringGuts _Var4;
  _StringGuts _Var5;
  code *pcVar6;
  bool bVar7;
  ID IVar8;
  ID IVar9;
  undefined1 *puVar10;
  ID IVar11;
  undefined1 *puVar12;
  undefined *puVar13;
  _StringGuts *p_Var14;
  undefined *puVar15;
  _DictionaryStorage *this;
  undefined1 *puVar16;
  ulong uVar17;
  _StringGuts _Var18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined *puVar23;
  String SVar24;
  String SVar25;
  undefined1 auStack_150 [96];
  ulong local_f0;
  ulong uStack_e8;
  undefined1 *local_e0;
  undefined *puStack_d8;
  ID local_d0 [9];
  _StringGuts local_88;
  _StringGuts _Stack_80;
  undefined *local_70;
  
  IVar8 = param_1;
  _Var18.unknown = (undefined *)param_2;
  FUN_1003b6618();
  if (IVar8 == 0) {
    return (_StringGuts *)0x0;
  }
  IVar9 = IVar8;
  (**(code **)(IVar8 + 0x78))();
  puVar10 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  puVar16 = puVar10;
  _swift_initStackObject();
  *(undefined8 *)(puVar16 + 0x18) = 2;
  *(undefined8 *)(puVar16 + 0x10) = 1;
  *(ID *)(puVar16 + 0x20) = IVar9;
  *(undefined **)(puVar16 + 0x28) = _Var18.unknown;
  _swift_bridgeObjectRetain(_Var18.unknown);
  IVar11 = objc_stub::recordID(param_1);
  objc_stub::recordName(IVar11);
  SVar24 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar16 + 0x30) = SVar24;
  puVar12 = puVar16;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar16);
  FUN_100005808(puVar16 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar13 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  p_Var14 = &local_88;
  local_88.unknown = puVar12;
  local_70 = puVar13;
  FUN_100328e0c(p_Var14,0,param_2);
  FUN_100004594(&local_88);
  if (p_Var14 != (_StringGuts *)0x0) {
    _swift_bridgeObjectRelease(_Var18.unknown);
    return p_Var14;
  }
  IVar11 = IVar9;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (IVar9,_Var18.unknown);
  if (IVar11 != 0) {
    puVar23 = &DAT_100fbee30;
    local_d0[0] = IVar11;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    p_Var14 = &local_88;
    _swift_dynamicCast(p_Var14,local_d0,puVar23,PTR___type_metadata_for_Swift_String_100eac208,6);
    _Var5.unknown = _Stack_80.unknown;
    _Var4.unknown = local_88.unknown;
    SVar24.bridgeObject = _Stack_80.unknown;
    SVar24.str = local_88.unknown;
    if (((ulong)p_Var14 & 1) != 0) {
      IVar11 = objc_stub::recordID(param_1);
      objc_stub::recordName(IVar11);
      SVar25 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar25 == SVar24) {
        _swift_bridgeObjectRelease(_Var18.unknown);
        _swift_bridgeObjectRelease(_Var5.unknown);
        _Var18.unknown = (undefined *)SVar25.bridgeObject;
      }
      else {
        bVar7 = Swift::_stringCompareWithSmolCheck
                          (_Var4,_Var5,(_StringComparisonResult)(__int8)SVar25.str);
        _swift_bridgeObjectRelease(SVar25.bridgeObject);
        if (!bVar7) {
          _swift_initStackObject(puVar10,auStack_150);
          *(undefined8 *)(puVar10 + 0x18) = 2;
          *(undefined8 *)(puVar10 + 0x10) = 1;
          *(ID *)(puVar10 + 0x20) = IVar9;
          *(undefined **)(puVar10 + 0x28) = _Var18.unknown;
          *(undefined **)(puVar10 + 0x30) = _Var4.unknown;
          *(undefined **)(puVar10 + 0x38) = _Var5.unknown;
          puVar16 = puVar10;
          FUN_1003c92b8();
          _swift_setDeallocating(puVar10);
          FUN_100005808(puVar10 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
          p_Var14 = &local_88;
          local_88.unknown = puVar16;
          local_70 = puVar13;
          FUN_100328e0c(p_Var14,0,param_2);
          _Var18.unknown = (undefined *)&local_88;
          FUN_100004594();
          if (p_Var14 != (_StringGuts *)0x0) {
            return p_Var14;
          }
          goto LAB_100392df4;
        }
        _swift_bridgeObjectRelease(_Var18.unknown);
        _Var18.unknown = _Var5.unknown;
      }
    }
  }
  _swift_bridgeObjectRelease();
LAB_100392df4:
  (**(code **)(IVar8 + 0x58))();
  if ((_StringGuts *)_Var18.unknown == (_StringGuts *)0x0) {
    return (_StringGuts *)0x0;
  }
  lVar22 = 0;
  uVar21 = 1L << ((ulong)*(byte *)&((_StringGuts *)((long)_Var18.unknown + 0x20))->unknown & 0x3f);
  uVar3 = 0xffffffffffffffff;
  if ((*(byte *)&((_StringGuts *)((long)_Var18.unknown + 0x20))->unknown & 0x3f) < 6) {
    uVar3 = ~(-1L << (uVar21 & 0x3f));
  }
  puVar23 = (undefined *)(uVar3 & (ulong)((_StringGuts *)((long)_Var18.unknown + 0x40))->unknown);
  do {
    while( true ) {
      while (puVar23 == (undefined *)0x0) {
        bVar7 = SCARRY8(lVar22,1);
        lVar22 = lVar22 + 1;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1003930fc);
          (*pcVar6)();
        }
        if ((long)(uVar21 + 0x3f >> 6) <= lVar22) {
          _swift_release();
          return (_StringGuts *)0x0;
        }
        puVar23 = ((_StringGuts *)((long)_Var18.unknown + 0x40))[lVar22].unknown;
      }
      uVar3 = ((ulong)puVar23 & 0xaaaaaaaaaaaaaaaa) >> 1 |
              ((ulong)puVar23 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      puVar23 = (undefined *)((ulong)(puVar23 + -1) & (ulong)puVar23);
      uVar20 = lVar22 << 10 | LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) << 4;
      IVar8 = *(ID *)(((_StringGuts *)((long)_Var18.unknown + 0x30))->unknown + uVar20);
      IVar9 = *(ID *)((long)(((_StringGuts *)((long)_Var18.unknown + 0x30))->unknown + uVar20) + 8);
      uVar3 = *(ulong *)(((_StringGuts *)((long)_Var18.unknown + 0x38))->unknown + uVar20);
      uVar20 = *(ulong *)((long)(((_StringGuts *)((long)_Var18.unknown + 0x38))->unknown + uVar20) +
                         8);
      _swift_bridgeObjectRetain(IVar9);
      _swift_bridgeObjectRetain(uVar20);
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (IVar8,IVar9);
      _swift_bridgeObjectRelease(IVar9);
      if (IVar8 != 0) break;
LAB_100392e44:
      _swift_bridgeObjectRelease(uVar20);
    }
    puVar15 = &DAT_100fbee30;
    local_d0[0] = IVar8;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    p_Var14 = &local_88;
    _swift_dynamicCast(p_Var14,local_d0,puVar15,PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)p_Var14 & 1) == 0) goto LAB_100392e44;
    local_e0 = local_88.unknown;
    puStack_d8 = _Stack_80.unknown;
    this = (_DictionaryStorage *)&DAT_100fbfa48;
    local_f0 = uVar3;
    uStack_e8 = uVar20;
    FUN_1000037f0(&DAT_100fbfa48,&DAT_100c410c0);
    puVar16 = &DAT_00000001;
    Swift::_DictionaryStorage::_allocate(this,1);
    _swift_retain();
    puVar15 = puStack_d8;
    puVar10 = local_e0;
    uVar20 = uStack_e8;
    uVar3 = local_f0;
    _swift_bridgeObjectRetain(uStack_e8);
    _swift_bridgeObjectRetain(puVar15);
    uVar17 = uVar3;
    uVar19 = uVar20;
    FUN_100071370();
    if ((uVar19 & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100393100);
      (*pcVar6)();
    }
    *(ulong *)(puVar16 + (uVar17 >> 6) * 8 + 0x40) =
         *(ulong *)(puVar16 + (uVar17 >> 6) * 8 + 0x40) | 1L << (uVar17 & 0x3f);
    puVar1 = (ulong *)(*(long *)(puVar16 + 0x30) + uVar17 * 0x10);
    *puVar1 = uVar3;
    puVar1[1] = uVar20;
    puVar2 = (undefined8 *)(*(long *)(puVar16 + 0x38) + uVar17 * 0x10);
    *puVar2 = puVar10;
    puVar2[1] = puVar15;
    if (SCARRY8(*(long *)(puVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100393104);
      (*pcVar6)();
    }
    *(long *)(puVar16 + 0x10) = *(long *)(puVar16 + 0x10) + 1;
    _swift_release(puVar16);
    FUN_100005808(&local_f0,&DAT_100fbef70,&DAT_100c40b10);
    p_Var14 = &local_88;
    local_88.unknown = puVar16;
    local_70 = puVar13;
    FUN_100328e0c(p_Var14,0,param_2);
    FUN_100004594(&local_88);
    if (p_Var14 != (_StringGuts *)0x0) {
      _swift_release();
      return p_Var14;
    }
  } while( true );
}



/* Address: 0x100393104 | FUN_100393104 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100393104(ID param_1,undefined8 param_2)

{
  NSString *pNVar1;
  ID IVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  NSString *pNVar5;
  ID IVar6;
  undefined8 uVar7;
  String SVar8;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  ID local_58;
  
  IVar2 = param_1;
  FUN_1003b6618();
  if (IVar2 == 0) {
    SVar8 = (extension_CloudKit)::__C::CKRecord::get_recordType
                      ((CKRecord *)&_OBJC_CLASS___NSEntityDescription);
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    objc_stub::FUN_100c052e0((ID)&_OBJC_CLASS___NSEntityDescription,pNVar1,param_2);
  }
  else {
    IVar6 = param_1;
    uVar7 = param_2;
    FUN_100392bc4(param_1,param_2);
    if (IVar6 == 0) {
      (**(code **)(IVar2 + 0x78))();
      SVar8 = (extension_CloudKit)::__C::CKRecord::get_recordType
                        ((CKRecord *)&_OBJC_CLASS___NSEntityDescription);
      pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      IVar2 = objc_stub::FUN_100c052e0((ID)&_OBJC_CLASS___NSEntityDescription,pNVar1,param_2);
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (IVar6,uVar7);
      if (IVar6 != 0) {
        puVar3 = &DAT_100fbee30;
        local_58 = IVar6;
        FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
        puVar4 = local_68;
        _swift_dynamicCast(puVar4,&local_58,puVar3,PTR___type_metadata_for_Swift_String_100eac208,6)
        ;
        if (((ulong)puVar4 & 1) != 0) {
          pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uStack_60);
          pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar7);
          objc_stub::setValue_forKey_(IVar2,pNVar1,pNVar5);
          return;
        }
      }
      IVar6 = objc_stub::recordID(param_1);
      pNVar1 = (NSString *)objc_stub::recordName(IVar6);
      if (pNVar1 == (NSString *)0x0) {
        SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        _swift_bridgeObjectRelease(SVar8.bridgeObject);
      }
      pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar7);
      objc_stub::setValue_forKey_(IVar2,pNVar1,pNVar5);
    }
  }
  return;
}



/* Address: 0x10039333c | FUN_10039333c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003935c0) */

undefined8 FUN_10039333c(undefined *param_1)

{
  long lVar1;
  _CocoaArrayWrapper _Var2;
  _ArrayBuffer _Var3;
  code *pcVar4;
  undefined *self;
  NSPredicate *pNVar5;
  undefined *puVar6;
  ulong self_00;
  ID self_01;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  String SVar11;
  _ArrayBuffer local_68;
  
  self = param_1;
  FUN_100329880();
  pNVar5 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar7 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar7;
  FUN_10030d9e0();
  *(undefined **)(puVar7 + 0x40) = puVar6;
  *(undefined8 *)(puVar7 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(puVar7 + 0x28) = 0x8000000100da2b70;
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar7 + 0x60) = puVar8;
  *(undefined **)(puVar7 + 0x68) = puVar6;
  *(String *)(puVar7 + 0x48) = SVar11;
  pNVar5 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar5);
  objc_stub::setPredicate_((ID)self,pNVar5);
  FUN_10032a700(self,param_1);
  if ((ulong)self >> 0x3e == 0) {
    _swift_bridgeObjectRetain(self);
    local_68.unknown = (undefined *)((ulong)self & 0xffffffffffffff8);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)self & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < self) {
      _Var2.unknown = self;
    }
    puVar7 = (undefined *)Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    local_68.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (puVar7 != (undefined *)0x0) {
      _swift_bridgeObjectRetain(self);
      puVar8 = puVar7;
      thunk_FUN_1003643c0(puVar7,0);
      puVar6 = self;
      FUN_10036446c(puVar8 + 0x20,puVar7);
      _swift_bridgeObjectRelease();
      local_68.unknown = puVar8;
      if (puVar6 != puVar7) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100393578);
        (*pcVar4)();
      }
    }
  }
  FUN_1003915b8(&local_68);
  _swift_bridgeObjectRelease(self);
  _Var3.unknown = local_68.unknown;
  if (((long)local_68.unknown < 0) || (((ulong)local_68.unknown >> 0x3e & 1) != 0)) {
    lVar9 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)local_68.unknown);
  }
  else {
    lVar9 = *(long *)(local_68.unknown + 0x10);
  }
  if (lVar9 != 0) {
    uVar10 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        if (*(ulong *)(_Var3.unknown + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100393524);
          (*pcVar4)();
        }
        self_00 = *(ulong *)(_Var3.unknown + uVar10 * 8 + 0x20);
      }
      else {
        self_00 = uVar10;
        Swift::_ArrayBuffer::__getElementSlowPath(uVar10,_Var3);
      }
      lVar1 = uVar10 + 1;
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100393520);
        (*pcVar4)();
      }
      FUN_10038f124();
      if (self_00 != 0) {
        self_01 = objc_stub::managedObjectContext(self_00);
        objc_stub::deleteObject_(self_01,self_00);
      }
      uVar10 = uVar10 + 1;
    } while (lVar1 != lVar9);
  }
  _swift_release(_Var3.unknown);
  return 0;
}



/* Address: 0x1003935cc | FUN_1003935cc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1003935cc(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined *puVar2;
  code *pcVar3;
  _ArrayBuffer self;
  NSPredicate *pNVar4;
  undefined *puVar5;
  undefined *puVar6;
  ID self_00;
  ID self_01;
  ID IVar7;
  ID IVar8;
  String SVar9;
  
  self.unknown = param_1;
  FUN_100329880();
  pNVar4 = (NSPredicate *)0x0;
  FUN_10000ec2c(0,&DAT_100fbeb38,&PTR__OBJC_CLASS___NSPredicate_100f8db30);
  puVar5 = &DAT_100fbeb40;
  FUN_1000037f0(&DAT_100fbeb40,&DAT_100c42e40);
  _swift_allocObject();
  *(undefined8 *)(puVar5 + 0x18) = 4;
  *(undefined8 *)(puVar5 + 0x10) = 2;
  puVar2 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  puVar6 = puVar5;
  FUN_10030d9e0();
  *(undefined **)(puVar5 + 0x40) = puVar6;
  *(undefined8 *)(puVar5 + 0x20) = 0xd000000000000015;
  *(undefined8 *)(puVar5 + 0x28) = 0x8000000100da2b70;
  SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(undefined **)(puVar5 + 0x60) = puVar2;
  *(undefined **)(puVar5 + 0x68) = puVar6;
  *(String *)(puVar5 + 0x48) = SVar9;
  pNVar4 = (extension_Foundation)::__C::NSPredicate::___allocating_init(pNVar4);
  objc_stub::setPredicate_((ID)self.unknown,pNVar4);
  FUN_10032a700(self.unknown,param_1);
  if ((ulong)self.unknown >> 0x3e == 0) {
    IVar7 = *(ID *)(((ulong)self.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = self.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < self.unknown) {
      _Var1.unknown = self.unknown;
    }
    IVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar7 != 0) {
    if ((long)IVar7 < 1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10039378c);
      (*pcVar3)();
    }
    IVar8 = 0;
    do {
      if (((ulong)self.unknown & 0xc000000000000001) == 0) {
        self_01 = *(ID *)(self.unknown + IVar8 * 8 + 0x20);
      }
      else {
        self_01 = IVar8;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar8,self);
      }
      IVar8 = IVar8 + 1;
      self_00 = objc_stub::managedObjectContext(self_01);
      objc_stub::deleteObject_(self_00,self_01);
    } while (IVar7 != IVar8);
  }
  _swift_bridgeObjectRelease(self.unknown);
  return;
}



/* Address: 0x10039378c | FUN_10039378c */

void FUN_10039378c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2160 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43eec;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43eec,&DAT_100ecdce8);
  DAT_100fc2160 = pTVar1;
  return;
}



/* Address: 0x1003937cc | FUN_1003937cc */

void FUN_1003937cc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2168 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43eac;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43eac,&DAT_100ecdc68);
  DAT_100fc2168 = pTVar1;
  return;
}



/* Address: 0x10039380c | FUN_10039380c */

void FUN_10039380c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc2170 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c43e6c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c43e6c,&DAT_100ecdbe8);
  DAT_100fc2170 = pTVar1;
  return;
}



/* Address: 0x10039384c | FUN_10039384c */

undefined1  [16] FUN_10039384c(void)

{
  return ZEXT816(0x100ecdbe8);
}



/* Address: 0x10039385c | FUN_10039385c */

undefined1  [16] FUN_10039385c(void)

{
  return ZEXT816(0x100ecdc68);
}



/* Address: 0x10039386c | FUN_10039386c */

undefined1  [16] FUN_10039386c(void)

{
  return ZEXT816(0x100ecdce8);
}



/* Address: 0x10039387c | thunk_FUN_100392bb0 */

void thunk_FUN_100392bb0(_ContiguousArrayBuffer param_1)

{
  Swift::_ContiguousArrayBuffer::__consumeAndCreateNew
            (false,*(__int64 *)(param_1.unknown + 0x10),false,param_1);
  return;
}



/* Address: 0x100393880 | thunk_FUN_100055a38 */

void thunk_FUN_100055a38(void)

{
  thunk_FUN_100055a38();
  return;
}



/* Address: 0x100393884 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::get__domain */

String (extension_Swift)::Swift::Error::get__domain(void)

{
  String SVar1;
  
  SVar1 = get__domain();
  return SVar1;
}



/* Address: 0x100393888 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::get__code */

__int64 (extension_Swift)::Swift::Error::get__code(void)

{
  __int64 _Var1;
  
  _Var1 = get__code();
  return _Var1;
}



/* Address: 0x10039388c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::$get__userInfo */

void (extension_Swift)::Swift::Error::_get__userInfo(void)

{
  _get__userInfo();
  return;
}



/* Address: 0x100393890 | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Error::$_getEmbeddedNSError */

void (extension_Swift)::Swift::Error::__getEmbeddedNSError(void)

{
  __getEmbeddedNSError();
  return;
}



/* Address: 0x100393894 | thunk_FUN_100172344 */

void thunk_FUN_100172344(void)

{
  thunk_FUN_100172344();
  return;
}



/* Address: 0x100393898 | thunk_FUN_1000559f0 */

void thunk_FUN_1000559f0(void)

{
  thunk_FUN_1000559f0();
  return;
}



/* Address: 0x10039389c | _TtC9PasteCore20ObjectPendingMapping::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore20ObjectPendingMapping::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x1003938f0 | FUN_1003938f0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1003938f0(void)

{
  return ZEXT816(0x100f984e0);
}



/* Address: 0x100393910 | FUN_100393910 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100393910(ID param_1,ulong *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  code *pcVar4;
  URL UVar5;
  ulong uVar6;
  undefined *puVar7;
  ID IVar8;
  undefined *puVar9;
  undefined **self;
  undefined **self_00;
  NSString *pNVar10;
  CKRecord *this;
  CKRecordID *recordID;
  CKRecord *self_01;
  undefined *puVar11;
  Data DVar12;
  NSData *pNVar13;
  undefined8 extraout_x1;
  undefined8 uVar15;
  long extraout_x8;
  undefined8 *puVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  ulong uVar20;
  long lVar21;
  String SVar22;
  undefined1 auStack_110 [8];
  ulong local_108;
  undefined *local_100;
  undefined1 *local_f8;
  long local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined *local_d8;
  ID local_d0;
  undefined *local_88 [3];
  undefined *local_70;
  void *pvVar14;
  
  local_e0 = param_3;
  UVar5 = Foundation::URL::typeMetadataAccessor();
  local_f0 = *(long *)(UVar5.unknown + -8);
  puStack_e8 = UVar5.unknown;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f0 + 0x40));
  local_f8 = auStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d0 = param_1;
  (extension_CloudKit)::__C::CKRecord::allKeys();
  uVar19 = *(ulong *)(UVar5.unknown + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar19 != 0) {
    uVar18 = 0;
    local_100 = UVar5.unknown + 0x28;
    local_108 = uVar19 - 1;
    do {
      puVar16 = (undefined8 *)(local_100 + uVar18 * 0x10);
      uVar20 = uVar18;
      local_d8 = puVar11;
      while( true ) {
        if (*(ulong *)(UVar5.unknown + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100393e34);
          (*pcVar4)();
        }
        uVar1 = puVar16[-1];
        uVar15 = *puVar16;
        uVar18 = uVar20 + 1;
        _swift_bridgeObjectRetain(uVar15);
        uVar17 = uVar1;
        ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                  (uVar1,uVar15);
        uVar6 = uVar17;
        (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *param_2) + 0xb8))();
        _swift_unknownObjectRelease(uVar17);
        puVar11 = local_d8;
        if ((uVar6 & 1) == 0) break;
        _swift_bridgeObjectRelease(uVar15);
        puVar16 = puVar16 + 2;
        puVar11 = local_d8;
        uVar20 = uVar18;
        if (uVar19 == uVar18) goto LAB_100393ad0;
      }
      puVar7 = local_d8;
      _swift_isUniquelyReferenced_nonNull_native();
      local_88[0] = puVar11;
      if (((ulong)puVar7 & 1) == 0) {
        FUN_1003075b8(0,*(long *)(puVar11 + 0x10) + 1,1);
      }
      uVar17 = *(ulong *)(local_88[0] + 0x10);
      if (*(ulong *)(local_88[0] + 0x18) >> 1 <= uVar17) {
        FUN_1003075b8(1 < *(ulong *)(local_88[0] + 0x18),uVar17 + 1,1);
      }
      *(ulong *)(local_88[0] + 0x10) = uVar17 + 1;
      *(ulong *)(local_88[0] + uVar17 * 0x10 + 0x20) = uVar1;
      *(undefined8 *)(local_88[0] + uVar17 * 0x10 + 0x28) = uVar15;
      puVar11 = local_88[0];
    } while (local_108 != uVar20);
  }
LAB_100393ad0:
  _swift_bridgeObjectRelease(UVar5.unknown);
  IVar8 = objc_stub::objectID((ID)param_2);
  UVar5.unknown = (undefined *)objc_stub::URIRepresentation(IVar8);
  puVar3 = local_f8;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
  SVar22 = Foundation::URL::get_absoluteString((URL)0x0);
  pvVar14 = SVar22.bridgeObject;
  (**(code **)(local_f0 + 8))(puVar3,puStack_e8);
  puVar7 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 2;
  *(undefined8 *)(puVar7 + 0x10) = 1;
  *(undefined8 *)(puVar7 + 0x20) = 0x52557463656a626f;
  *(undefined8 *)(puVar7 + 0x28) = 0xe900000000000049;
  *(String *)(puVar7 + 0x30) = SVar22;
  _swift_bridgeObjectRetain(pvVar14);
  puVar9 = puVar7;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar7);
  FUN_100005808(puVar7 + 0x20,&DAT_100fbef70,&DAT_100c40b10);
  puVar7 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  uVar15 = local_e0;
  self_00 = local_88;
  local_88[0] = puVar9;
  local_70 = puVar7;
  FUN_100328e48(self_00,0,local_e0);
  self = local_88;
  FUN_100004594();
  lVar21 = *(long *)(puVar11 + 0x10);
  if (lVar21 == 0) {
    _swift_release(puVar11);
    _swift_bridgeObjectRelease(pvVar14);
    if (self_00 != (undefined **)0x0) {
      IVar8 = objc_stub::managedObjectContext((ID)self_00);
      objc_stub::deleteObject_(IVar8,self_00);
    }
  }
  else {
    if (self_00 == (undefined **)0x0) {
      FUN_1003938f0();
      _swift_getObjCClassFromMetadata();
      _objc_allocWithZone();
      self_00 = (undefined **)objc_stub::initWithContext_((ID)self,uVar15);
    }
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(pvVar14);
    objc_stub::FUN_100c0ce20((ID)self_00,pNVar10);
    local_88[0] = puVar11;
    FUN_1000037f0(&DAT_100fbedd8,&DAT_100c42ed0);
    FUN_100310704();
    SVar22.bridgeObject = (void *)0xe100000000000000;
    SVar22.str = (char *)0x2c;
    SVar22 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar22);
    pNVar10 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar22.bridgeObject);
    objc_stub::FUN_100c0d080((ID)self_00,pNVar10);
    this = (CKRecord *)0x0;
    FUN_100393e34();
    IVar8 = local_d0;
    SVar22 = (extension_CloudKit)::__C::CKRecord::get_recordType(this);
    recordID = (CKRecordID *)objc_stub::recordID(IVar8);
    self_01 = (extension_CloudKit)::__C::CKRecord::__allocating_init(this,SVar22,recordID);
    puVar16 = (undefined8 *)(puVar11 + 0x28);
    do {
      uVar15 = puVar16[-1];
      uVar2 = *puVar16;
      _swift_bridgeObjectRetain(uVar2);
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (uVar15,uVar2);
      ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
                ();
      puVar16 = puVar16 + 2;
      lVar21 = lVar21 + -1;
    } while (lVar21 != 0);
    _swift_release(puVar11);
    puVar11 = &_OBJC_CLASS___NSKeyedArchiver;
    _objc_allocWithZone();
    IVar8 = objc_stub::FUN_100c039c0((ID)puVar11,1);
    objc_stub::FUN_100c019e0((ID)self_01,IVar8);
    objc_stub::FUN_100c02680(IVar8);
    DVar12.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar8);
    uVar15 = extraout_x1;
    DVar12 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar12);
    pNVar13 = Foundation::Data::_bridgeToObjectiveC(DVar12);
    FUN_10003bf2c(DVar12.unknown,uVar15);
    objc_stub::FUN_100c0ae60((ID)self_00,pNVar13);
  }
  return;
}



/* Address: 0x100393e34 | FUN_100393e34 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100393e34(void)

{
  undefined *puVar1;
  
  if (DAT_100fc0458 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___CKRecord;
  _swift_getObjCClassMetadata();
  DAT_100fc0458 = puVar1;
  return;
}



/* Address: 0x100393e78 | FUN_100393e78 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100393e78(undefined8 param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  _ArrayBuffer _Var3;
  undefined8 uVar4;
  ID IVar5;
  Data DVar6;
  undefined *puVar7;
  NSData *pNVar8;
  ID IVar9;
  ID IVar10;
  undefined8 extraout_x1;
  undefined8 uVar11;
  ID IVar12;
  ID IVar13;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
  _Var3.unknown = (undefined *)&local_90;
  FUN_10035f4f4();
  FUN_100005808(&local_90,&DAT_100fbe6f0,&DAT_100c42750);
  if ((ulong)_Var3.unknown >> 0x3e == 0) {
    IVar12 = *(ID *)(((ulong)_Var3.unknown & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = _Var3.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < _Var3.unknown) {
      _Var1.unknown = _Var3.unknown;
    }
    IVar12 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (IVar12 != 0) {
    if ((long)IVar12 < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100394140);
      (*pcVar2)();
    }
    IVar13 = 0;
    do {
      if (((ulong)_Var3.unknown & 0xc000000000000001) == 0) {
        IVar9 = *(ID *)(_Var3.unknown + IVar13 * 8 + 0x20);
      }
      else {
        IVar9 = IVar13;
        Swift::_ArrayBuffer::__getElementSlowPath(IVar13,_Var3);
      }
      IVar5 = IVar9;
      FUN_10038f124();
      if (IVar5 != 0) {
        DVar6.unknown = (undefined *)objc_stub::cloudKitRecordData(IVar9);
        uVar11 = extraout_x1;
        DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
        puVar7 = &_OBJC_CLASS___NSKeyedUnarchiver;
        _objc_allocWithZone();
        FUN_1001037b4(DVar6.unknown,uVar11);
        pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar6);
        local_90 = 0;
        IVar9 = objc_stub::initForReadingFromData_error_((ID)puVar7,pNVar8,&local_90);
        uVar4 = local_90;
        if (IVar9 == 0) {
          FUN_10003bf2c(DVar6.unknown,uVar11);
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_10003bf2c(DVar6.unknown,uVar11);
          _swift_errorRelease(uVar4);
        }
        else {
          FUN_10003bf2c(DVar6.unknown,uVar11);
          objc_stub::setRequiresSecureCoding_(IVar9,1);
          puVar7 = &_OBJC_CLASS___CKRecord;
          _objc_allocWithZone();
          IVar10 = objc_stub::initWithCoder_((ID)puVar7,IVar9);
          if (IVar10 == 0) {
            FUN_10003bf2c(DVar6.unknown,uVar11);
          }
          else {
            objc_stub::finishDecoding(IVar9);
            FUN_10003bf2c(DVar6.unknown,uVar11);
            FUN_100393910(IVar10,IVar5,param_1);
          }
        }
      }
      IVar13 = IVar13 + 1;
    } while (IVar12 != IVar13);
  }
  _swift_bridgeObjectRelease(_Var3.unknown);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100394144 | FUN_100394144 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined ** FUN_100394144(ID param_1,undefined8 param_2)

{
  undefined *puVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  String SVar5;
  undefined *local_70 [3];
  undefined *local_58;
  
  puVar1 = &DAT_100fbef68;
  FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 4;
  *(undefined8 *)(puVar1 + 0x10) = 2;
  *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000010;
  *(undefined8 *)(puVar1 + 0x28) = 0x8000000100da2ca0;
  self = objc_stub::zoneID(param_1);
  objc_stub::ownerName(self);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x30) = SVar5;
  *(undefined8 *)(puVar1 + 0x40) = 0x6365526572616873;
  *(undefined8 *)(puVar1 + 0x48) = 0xef656d614e64726f;
  objc_stub::recordName(param_1);
  SVar5 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *(String *)(puVar1 + 0x50) = SVar5;
  puVar2 = puVar1;
  FUN_1003c92b8();
  _swift_setDeallocating(puVar1);
  puVar3 = &DAT_100fbef70;
  FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
  _swift_arrayDestroy(puVar1 + 0x20,2,puVar3);
  puVar1 = &DAT_100fbef78;
  FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
  ppuVar4 = local_70;
  local_70[0] = puVar2;
  local_58 = puVar1;
  FUN_100328ba8(ppuVar4,0,param_2);
  FUN_100004594(local_70);
  return ppuVar4;
}



/* Address: 0x1003942e0 | FUN_1003942e0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1003942e0(ID param_1,undefined8 param_2,char *param_3,undefined *param_4)

{
  undefined8 uVar1;
  long lVar2;
  char *pcVar3;
  undefined **ppuVar4;
  ID self;
  undefined *puVar5;
  undefined *puVar6;
  ID IVar7;
  NSString *pNVar8;
  undefined *puVar9;
  Data DVar10;
  NSData *pNVar11;
  _StringGuts _Var12;
  undefined8 extraout_x1;
  undefined8 uVar13;
  ID unaff_x20;
  long lVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  long local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined *local_78;
  undefined8 uStack_70;
  
  lVar14 = 0x6f636552746f6f72;
  lVar2 = lVar14;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x6f636552746f6f72,0xee00656d614e6472);
  if (lVar2 != 0) {
    pcVar3 = &DAT_100fbee30;
    local_a0 = lVar2;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    ppuVar4 = &local_90;
    param_3 = pcVar3;
    param_4 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_dynamicCast(ppuVar4,&local_a0,pcVar3,PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar1 = uStack_88;
    puVar9 = local_90;
    if (((ulong)ppuVar4 & 1) != 0) {
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (0x6f636552746f6f72,0xee00657079546472);
      if (lVar14 != 0) {
        ppuVar4 = &local_90;
        param_4 = PTR___type_metadata_for_Swift_String_100eac208;
        local_a0 = lVar14;
        _swift_dynamicCast(ppuVar4,&local_a0,pcVar3,PTR___type_metadata_for_Swift_String_100eac208,6
                          );
        puVar6 = local_90;
        param_3 = pcVar3;
        if (((ulong)ppuVar4 & 1) != 0) {
          ppuVar4 = (undefined **)objc_stub::recordID(param_1);
          FUN_100394144(ppuVar4,param_2);
          if (ppuVar4 == (undefined **)0x0) {
            IVar7 = objc_stub::recordID(param_1);
            IVar7 = objc_stub::zoneID(IVar7);
            objc_stub::ownerName(IVar7);
            SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            puVar5 = &DAT_100fbef68;
            FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
            _swift_initStackObject();
            *(undefined8 *)(puVar5 + 0x18) = 6;
            *(undefined8 *)(puVar5 + 0x10) = 3;
            *(undefined8 *)(puVar5 + 0x20) = 0x6f636552746f6f72;
            *(undefined8 *)(puVar5 + 0x28) = 0xee00656d614e6472;
            *(undefined **)(puVar5 + 0x30) = puVar9;
            *(undefined8 *)(puVar5 + 0x38) = uVar1;
            *(undefined8 *)(puVar5 + 0x40) = 0x6f636552746f6f72;
            *(undefined8 *)(puVar5 + 0x48) = 0xee00657079546472;
            *(undefined **)(puVar5 + 0x50) = puVar6;
            *(undefined8 *)(puVar5 + 0x58) = uStack_88;
            *(undefined8 *)(puVar5 + 0x60) = 0xd000000000000010;
            *(undefined8 *)(puVar5 + 0x68) = 0x8000000100da2ca0;
            *(String *)(puVar5 + 0x70) = SVar16;
            _swift_bridgeObjectRetain(uVar1);
            _swift_bridgeObjectRetain(uStack_88);
            _swift_bridgeObjectRetain(SVar16.bridgeObject);
            puVar6 = puVar5;
            FUN_1003c92b8();
            _swift_setDeallocating(puVar5);
            puVar9 = &DAT_100fbef70;
            FUN_1000037f0(&DAT_100fbef70,&DAT_100c40b10);
            _swift_arrayDestroy(puVar5 + 0x20,3,puVar9);
            puVar9 = &DAT_100fbef78;
            FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
            ppuVar4 = &local_90;
            local_90 = puVar6;
            local_78 = puVar9;
            FUN_100328ba8(ppuVar4,0,param_2);
            _swift_bridgeObjectRelease(SVar16.bridgeObject);
            FUN_100004594(&local_90);
            if (ppuVar4 == (undefined **)0x0) {
              _swift_getObjCClassFromMetadata();
              _objc_allocWithZone();
              ppuVar4 = (undefined **)objc_stub::initWithContext_(unaff_x20,param_2);
            }
          }
          IVar7 = objc_stub::recordID(param_1);
          IVar7 = objc_stub::zoneID(IVar7);
          pNVar8 = (NSString *)objc_stub::ownerName(IVar7);
          if (pNVar8 == (NSString *)0x0) {
            SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar16.bridgeObject);
          }
          objc_stub::FUN_100c0dac0((ID)ppuVar4,pNVar8);
          IVar7 = objc_stub::recordID(param_1);
          pNVar8 = (NSString *)objc_stub::recordName(IVar7);
          if (pNVar8 == (NSString *)0x0) {
            SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
            pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
            _swift_bridgeObjectRelease(SVar16.bridgeObject);
          }
          objc_stub::FUN_100c0daa0((ID)ppuVar4,pNVar8);
          puVar9 = &_OBJC_CLASS___NSKeyedArchiver;
          _objc_allocWithZone();
          IVar7 = objc_stub::FUN_100c039c0((ID)puVar9,1);
          objc_stub::FUN_100c019e0(param_1,IVar7);
          objc_stub::FUN_100c02680(IVar7);
          DVar10.unknown = (undefined *)objc_stub::FUN_100c01a00(IVar7);
          uVar13 = extraout_x1;
          DVar10 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar10);
          pNVar11 = Foundation::Data::_bridgeToObjectiveC(DVar10);
          FUN_10003bf2c(DVar10.unknown,uVar13);
          objc_stub::FUN_100c0da80((ID)ppuVar4,pNVar11);
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uVar1);
          objc_stub::FUN_100c0d7e0((ID)ppuVar4,pNVar8);
          pNVar8 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          _swift_bridgeObjectRelease(uStack_88);
          objc_stub::FUN_100c0d800((ID)ppuVar4,pNVar8);
          return 0;
        }
      }
      _swift_bridgeObjectRelease(uVar1);
    }
  }
  if (DAT_100fc21c8 != -1) {
    _swift_once(&DAT_100fc21c8,FUN_100394aec);
  }
  FUN_1000d468c(&local_90);
  _Var12.unknown = local_78;
  FUN_100004640(&local_90);
  local_a0 = 0;
  uStack_98 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x4f,_Var12);
  SVar16.bridgeObject = (void *)0x8000000100da4170;
  SVar16.str = (char *)0xd000000000000015;
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar16,SVar17);
  IVar7 = objc_stub::recordID(param_1);
  objc_stub::recordName(IVar7);
  SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar16,SVar18);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  SVar15.bridgeObject = (void *)0x8000000100da4190;
  SVar15.str = (char *)0x1000000000000038;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar15,SVar19);
  uVar1 = uStack_98;
  FUN_1000d4df0(local_a0,uStack_98,local_78,uStack_70);
  _swift_bridgeObjectRelease(uVar1);
  FUN_100004594(&local_90);
  IVar7 = objc_stub::recordID(param_1);
  FUN_100394144(IVar7,param_2);
  if (IVar7 != 0) {
    self = objc_stub::managedObjectContext(IVar7);
    objc_stub::deleteObject_(self,IVar7);
  }
  return 0;
}



/* Address: 0x100394904 | FUN_100394904 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined ** FUN_100394904(void)

{
  code *pcVar1;
  ID IVar2;
  ID IVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined1 *puVar8;
  ID unaff_x20;
  String SVar9;
  undefined1 auStack_b0 [64];
  undefined *local_70 [3];
  undefined *local_58;
  
  puVar8 = auStack_b0;
  IVar2 = objc_stub::managedObjectContext(unaff_x20);
  if (IVar2 != 0) {
    IVar3 = objc_stub::FUN_100c09720(unaff_x20);
    IVar3 = objc_stub::FUN_100c01c00((ID)&_OBJC_CLASS___NSEntityDescription,IVar3,IVar2);
    if (IVar3 != 0) {
      IVar3 = objc_stub::FUN_100c06920(IVar3);
      if (IVar3 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100394aec);
        (*pcVar1)();
      }
      _NSClassFromString();
      if (IVar3 != 0) {
        _swift_getObjCClassMetadata();
        uVar4 = 0;
        FUN_1003b4868(0);
        _swift_dynamicCastMetatype(IVar3,uVar4);
        if (IVar3 != 0) {
          puVar5 = &DAT_100fbef68;
          FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
          _swift_initStackObject();
          *(undefined8 *)(puVar5 + 0x18) = 2;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          puVar6 = puVar5;
          (**(code **)(IVar3 + 0x78))();
          *(undefined **)(puVar5 + 0x20) = puVar6;
          *(undefined1 **)(puVar5 + 0x28) = puVar8;
          objc_stub::FUN_100c09700(unaff_x20);
          SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar5 + 0x30) = SVar9;
          puVar6 = puVar5;
          FUN_1003c92b8();
          _swift_setDeallocating(puVar5);
          FUN_100312044(puVar5 + 0x20);
          puVar5 = &DAT_100fbef78;
          FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
          ppuVar7 = local_70;
          local_70[0] = puVar6;
          local_58 = puVar5;
          FUN_100328e0c(ppuVar7,0,IVar2);
          FUN_100004594(local_70);
          if (ppuVar7 != (undefined **)0x0) {
            return ppuVar7;
          }
        }
      }
    }
  }
  return (undefined **)0x0;
}



/* Address: 0x100394aec | FUN_100394aec */

void FUN_100394aec(void)

{
  undefined8 uVar1;
  
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0x68537463656a624f;
  FUN_1000d4624(0x68537463656a624f,0xeb00000000657261);
  DAT_100fc21d0 = uVar1;
  return;
}



/* Address: 0x100394b44 | FUN_100394b44 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100394b44(void)

{
  code *pcVar1;
  class_t *pcVar2;
  ID IVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined **ppuVar8;
  Data DVar9;
  objc_super *super;
  undefined1 *puVar10;
  undefined8 extraout_x1;
  class_t *unaff_x20;
  String SVar11;
  objc_super local_e0;
  undefined1 auStack_d0 [64];
  undefined *local_90 [3];
  undefined *local_78;
  objc_super oStack_70;
  
  super = &local_e0;
  pcVar2 = unaff_x20;
  _swift_getObjectType();
  IVar3 = objc_stub::isDeleted((ID)unaff_x20);
  if (((IVar3 & 1) == 0) && (IVar3 = objc_stub::managedObjectContext((ID)unaff_x20), IVar3 != 0)) {
    IVar4 = objc_stub::FUN_100c09720((ID)unaff_x20);
    IVar4 = objc_stub::FUN_100c01c00((ID)&_OBJC_CLASS___NSEntityDescription,IVar4,IVar3);
    if (IVar4 != 0) {
      IVar4 = objc_stub::FUN_100c06920(IVar4);
      if (IVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100394dcc);
        (*pcVar1)();
      }
      _NSClassFromString();
      if (IVar4 != 0) {
        _swift_getObjCClassMetadata();
        uVar5 = 0;
        FUN_1003b4868(0);
        _swift_dynamicCastMetatype(IVar4,uVar5);
        if (IVar4 != 0) {
          puVar6 = &DAT_100fbef68;
          FUN_1000037f0(&DAT_100fbef68,&DAT_100c44740);
          puVar10 = auStack_d0;
          _swift_initStackObject();
          *(undefined8 *)(puVar6 + 0x18) = 2;
          *(undefined8 *)(puVar6 + 0x10) = 1;
          puVar7 = puVar6;
          (**(code **)(IVar4 + 0x78))();
          *(undefined **)(puVar6 + 0x20) = puVar7;
          *(undefined1 **)(puVar6 + 0x28) = puVar10;
          objc_stub::FUN_100c09700((ID)unaff_x20);
          SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
          *(String *)(puVar6 + 0x30) = SVar11;
          puVar7 = puVar6;
          FUN_1003c92b8();
          _swift_setDeallocating(puVar6);
          FUN_100312044(puVar6 + 0x20);
          puVar6 = &DAT_100fbef78;
          FUN_1000037f0(&DAT_100fbef78,&DAT_100c44750);
          ppuVar8 = local_90;
          local_90[0] = puVar7;
          local_78 = puVar6;
          FUN_100328e0c(ppuVar8,0,IVar3);
          FUN_100004594(local_90);
          if (ppuVar8 != (undefined **)0x0) {
            DVar9.unknown = (undefined *)objc_stub::shareRecordData((ID)unaff_x20);
            uVar5 = extraout_x1;
            DVar9 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar9);
            (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & (ulong)*ppuVar8) + 0x70))
                      (DVar9.unknown,uVar5);
            FUN_10003bf2c(DVar9.unknown,uVar5);
            goto LAB_100394d88;
          }
        }
      }
    }
  }
  super = &oStack_70;
LAB_100394d88:
  super->receiver = (ID)unaff_x20;
  super->super_class = pcVar2;
  _objc_msgSendSuper2(super,"willSave");
  return;
}



/* Address: 0x100394dcc | _TtC9PasteCore11ObjectShare::willSave */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore11ObjectShare::willSave(ID param_1,SEL param_2)

{
  FUN_100394b44(param_1);
  return;
}



/* Address: 0x100394df4 | _TtC9PasteCore11ObjectShare::prepareForDeletion */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore11ObjectShare::prepareForDeletion(ID param_1,SEL param_2)

{
  class_t *pcVar1;
  ulong *puVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  puVar2 = (ulong *)param_1;
  FUN_100394904();
  if (puVar2 != (ulong *)0x0) {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x70))(0,0xf000000000000000);
  }
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  _objc_msgSendSuper2(&local_40,"prepareForDeletion");
  return;
}



/* Address: 0x100394e8c | _TtC9PasteCore11ObjectShare::initWithEntity:insertIntoManagedObjectContext: */

/* Function Stack Size: 0x20 bytes */

ID _TtC9PasteCore11ObjectShare::initWithEntity_insertIntoManagedObjectContext_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  class_t *pcVar1;
  ID IVar2;
  objc_super local_40;
  
  pcVar1 = (class_t *)param_1;
  _swift_getObjectType();
  local_40.receiver = param_1;
  local_40.super_class = pcVar1;
  IVar2 = _objc_msgSendSuper2(&local_40,"initWithEntity:insertIntoManagedObjectContext:",param_3,
                              param_4);
  return IVar2;
}



/* Address: 0x100394ee0 | _TtC9PasteCore11ObjectShare::.cxx_construct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore11ObjectShare::_cxx_construct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100394ee4 | _TtC9PasteCore11ObjectShare::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC9PasteCore11ObjectShare::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100394ee8 | FUN_100394ee8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100394ee8(void)

{
  return ZEXT816(0x100f98590);
}



/* Address: 0x100394f08 | FUN_100394f08 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100395948) */
/* WARNING: Removing unreachable block (ram,0x000100395778) */
/* WARNING: Removing unreachable block (ram,0x00010039598c) */

undefined1  [16] FUN_100394f08(undefined8 param_1,undefined *param_2,char *param_3,void *param_4)

{
  String *pSVar1;
  undefined8 *puVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  bool bVar5;
  Date DVar6;
  undefined *puVar7;
  undefined *puVar8;
  CKRecord *pCVar9;
  Date DVar10;
  undefined7 extraout_var;
  _StringGuts _Var11;
  long *plVar12;
  Hasher into;
  ulong uVar13;
  Date DVar14;
  undefined **ppuVar15;
  JSONDecoder *this;
  JSONDecoder *pJVar16;
  uint uVar17;
  uint uVar18;
  _StringGuts _Var19;
  Date DVar20;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar21;
  ulong uVar22;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  undefined *puVar23;
  code *pcVar24;
  long lVar25;
  ulong uVar26;
  undefined *puVar27;
  Date DVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  undefined *puVar32;
  long lVar33;
  String SVar34;
  undefined1 auVar35 [16];
  String SVar36;
  undefined *local_140;
  uint local_134;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  undefined8 local_118;
  long local_110;
  Date local_108;
  Date local_100;
  long local_f8;
  undefined *local_f0;
  undefined *puStack_e8;
  undefined1 local_d8;
  undefined7 uStack_d7;
  undefined8 local_d0;
  long local_a0;
  CKRecord *pCStack_98;
  
  DVar6 = Foundation::Date::typeMetadataAccessor();
  local_f8 = *(long *)(DVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_f8 + 0x40));
  puVar23 = (undefined *)((long)&local_140 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_108.unknown = puVar23;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar23 = puVar23 + -extraout_x12;
  puVar7 = &DAT_100fbe6e8;
  FUN_1000037f0(&DAT_100fbe6e8,&DAT_100c43250);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar30 = (long)puVar23 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar32 = (undefined *)(lVar30 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar29 = (long)puVar32 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar25 = lVar29 - extraout_x12_02;
  puVar7 = param_2;
  FUN_1003b6618();
  if (puVar7 == (undefined *)0x0) {
    FUN_1000d468c(&local_f0);
    _Var11.unknown = (undefined *)CONCAT71(uStack_d7,local_d8);
    FUN_100004640(&local_f0);
    local_a0 = 0;
    pCStack_98 = (CKRecord *)0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var11);
    pCVar9 = pCStack_98;
    _swift_bridgeObjectRelease();
    local_a0 = -0x2fffffffffffffd9;
    pCStack_98 = (CKRecord *)0x8000000100da41d0;
    SVar34 = (extension_CloudKit)::__C::CKRecord::get_recordType(pCVar9);
    SVar36.bridgeObject = param_4;
    SVar36.str = param_3;
    Swift::String::append(SVar34,SVar36);
    _swift_bridgeObjectRelease(SVar34.bridgeObject);
    pCVar9 = pCStack_98;
    FUN_1000d4df0(local_a0,pCStack_98,(undefined *)CONCAT71(uStack_d7,local_d8),local_d0);
    _swift_bridgeObjectRelease(pCVar9);
    FUN_100004594(&local_f0);
    uVar31 = 0;
    goto LAB_100395858;
  }
  puVar27 = (undefined *)0x4164657461647075;
  puVar8 = puVar27;
  local_118 = param_1;
  local_100.unknown = puVar23;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x4164657461647075,0xe900000000000074);
  if (puVar8 == (undefined *)0x0) {
    pcVar24 = *(code **)(local_f8 + 0x38);
    uVar31 = 1;
  }
  else {
    puVar23 = &DAT_100fbee30;
    local_f0 = puVar8;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    lVar33 = lVar25;
    _swift_dynamicCast(lVar25,&local_f0,puVar23,DVar6.unknown,6);
    pcVar24 = *(code **)(local_f8 + 0x38);
    uVar31 = (uint)lVar33 ^ 1;
  }
  (*pcVar24)(lVar25,uVar31,1,DVar6.unknown);
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x4164657461647075,0xe900000000000074);
  if (puVar27 == (undefined *)0x0) {
    uVar31 = 1;
  }
  else {
    puVar23 = &DAT_100fbee30;
    local_f0 = puVar27;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    lVar33 = lVar29;
    _swift_dynamicCast(lVar29,&local_f0,puVar23,DVar6.unknown,6);
    uVar31 = (uint)lVar33 ^ 1;
  }
  (*pcVar24)(lVar29,uVar31,1,DVar6.unknown);
  DVar28.unknown = local_100.unknown;
  FUN_100354148(lVar29,puVar32);
  lVar29 = local_f8;
  pcVar24 = *(code **)(local_f8 + 0x30);
  DVar10.unknown = puVar32;
  (*pcVar24)(puVar32,1,DVar6.unknown);
  if ((int)DVar10.unknown == 1) {
    Foundation::Date::get_distantPast(DVar10);
    puVar23 = puVar32;
    (*pcVar24)(puVar32,1,DVar6.unknown);
    if ((int)puVar23 != 1) {
      FUN_100378618(puVar32);
    }
  }
  else {
    (**(code **)(lVar29 + 0x20))(DVar28.unknown,puVar32,DVar6.unknown);
  }
  FUN_100364a64(lVar25,lVar30);
  lVar33 = lVar30;
  (*pcVar24)(lVar30,1,DVar6.unknown);
  DVar10.unknown = local_108.unknown;
  if ((int)lVar33 == 1) {
    FUN_100378618(lVar30);
  }
  else {
    DVar20 = DVar6;
    (**(code **)(lVar29 + 0x20))(local_108.unknown,lVar30);
    DVar14.unknown = DVar28.unknown;
    bVar5 = Foundation::Date::>_infix(DVar10,DVar28,DVar20);
    puVar23 = (undefined *)CONCAT71(extraout_var,bVar5);
    if (bVar5) {
      local_130 = param_2;
      local_110 = lVar25;
      (extension_CloudKit)::__C::CKRecord::allKeys();
      puVar32 = puVar23;
      FUN_10036be78();
      _swift_bridgeObjectRelease();
      (**(code **)(puVar7 + 0x60))();
      local_134 = 0;
      lVar25 = 0;
      uVar22 = 1L << ((ulong)(byte)puVar23[0x20] & 0x3f);
      uVar26 = 0xffffffffffffffff;
      if ((puVar23[0x20] & 0x3f) < 6) {
        uVar26 = ~(-1L << (uVar22 & 0x3f));
      }
      uVar26 = uVar26 & *(ulong *)(puVar23 + 0x38);
      local_140 = puVar32 + 0x38;
      _Var11.unknown = puVar23;
      local_128 = puVar23;
joined_r0x00010039533c:
      do {
        local_120 = puVar32;
        if (uVar26 != 0) {
          uVar13 = (uVar26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar26 & 0x5555555555555555) << 1;
          uVar13 = (uVar13 & 0xcccccccccccccccc) >> 2 | (uVar13 & 0x3333333333333333) << 2;
          uVar13 = (uVar13 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar13 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar13 = (uVar13 & 0xff00ff00ff00ff00) >> 8 | (uVar13 & 0xff00ff00ff00ff) << 8;
          uVar13 = (uVar13 & 0xffff0000ffff0000) >> 0x10 | (uVar13 & 0xffff0000ffff) << 0x10;
          uVar26 = uVar26 - 1 & uVar26;
          pSVar1 = (String *)
                   (*(long *)(local_128 + 0x30) + LZCOUNT(uVar13 >> 0x20 | uVar13 << 0x20) * 0x10 +
                   lVar25 * 0x400);
          _Var19.unknown = pSVar1->str;
          _Var3.unknown = pSVar1->bridgeObject;
          SVar34 = *pSVar1;
          (**(code **)(puVar7 + 0x78))();
          if (_Var19.unknown != _Var11.unknown || _Var3.unknown != DVar14.unknown) {
            bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var19,_Var3,(_StringComparisonResult)(__int8)_Var11.unknown);
            _swift_bridgeObjectRetain(_Var3.unknown);
            _swift_bridgeObjectRelease(DVar14.unknown);
            DVar14.unknown = _Var3.unknown;
            DVar28.unknown = local_100.unknown;
            if (((!bVar5) &&
                (_Var19.unknown != (undefined *)0x6972747441776172 ||
                 _Var3.unknown != (undefined *)0xed00007365747562)) &&
               (bVar5 = Swift::_stringCompareWithSmolCheck
                                  (_Var19,_Var3,(_StringComparisonResult)0x72),
               DVar28.unknown = local_100.unknown, !bVar5)) {
              puVar32 = (undefined *)0x65707954776172;
              ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                        (0x65707954776172,&DAT_e700000000000000);
              if (puVar32 != (undefined *)0x0) {
                puVar8 = &DAT_100fbee30;
                local_f0 = puVar32;
                FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
                plVar12 = &local_a0;
                _swift_dynamicCast(plVar12,&local_f0,puVar8,
                                   PTR___type_metadata_for_Swift_Int_100eac6f8,6);
                if ((((ulong)plVar12 & 1) != 0) && (local_a0 == 1)) goto LAB_10039554c;
              }
              if (*(long *)(local_120 + 0x10) != 0) {
                Swift::Hasher::init(*(__int64 *)(local_120 + 0x28));
                into.unknown = (undefined *)&local_f0;
                Swift::String::hash(into,SVar34);
                uVar13 = Swift::Hasher::_finalize(into);
                uVar21 = -1L << ((ulong)(byte)local_120[0x20] & 0x3f);
                uVar13 = uVar13 & (uVar21 ^ 0xffffffffffffffff);
                if ((*(ulong *)(local_140 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0) {
                  do {
                    puVar2 = (undefined8 *)(*(long *)(local_120 + 0x30) + uVar13 * 0x10);
                    _Var11.unknown = (undefined *)*puVar2;
                    _Var4.unknown = (undefined *)puVar2[1];
                    if ((_Var11.unknown == _Var19.unknown && _Var4.unknown == _Var3.unknown) ||
                       (bVar5 = Swift::_stringCompareWithSmolCheck
                                          (_Var11,_Var4,
                                           (_StringComparisonResult)(__int8)_Var19.unknown), bVar5))
                    {
                      _Var11.unknown = _Var19.unknown;
                      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                                (_Var19.unknown,_Var3.unknown);
                      ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
                                ();
                      local_134 = 1;
                      puVar32 = local_120;
                      DVar14.unknown = _Var19.unknown;
                      DVar28.unknown = local_100.unknown;
                      lVar29 = local_f8;
                      goto joined_r0x00010039533c;
                    }
                    uVar13 = uVar13 + 1 & ~uVar21;
                    DVar28.unknown = local_100.unknown;
                  } while ((*(ulong *)(local_140 + (uVar13 >> 6) * 8) >> (uVar13 & 0x3f) & 1) != 0);
                }
              }
            }
          }
LAB_10039554c:
          puVar8 = DVar14.unknown;
          _swift_bridgeObjectRelease();
          puVar32 = local_120;
          _Var11.unknown = DVar14.unknown;
          DVar14.unknown = puVar8;
          lVar29 = local_f8;
          goto joined_r0x00010039533c;
        }
        bVar5 = SCARRY8(lVar25,1);
        lVar25 = lVar25 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar24 = (code *)SoftwareBreakpoint(1,0x1003959b4);
          (*pcVar24)();
        }
        if ((long)(uVar22 + 0x3f >> 6) <= lVar25) goto LAB_1003955bc;
        uVar26 = *(ulong *)((long)(puVar23 + 0x38) + lVar25 * 8);
      } while( true );
    }
    (**(code **)(lVar29 + 8))(DVar10.unknown,DVar6.unknown);
  }
  uVar31 = 0;
  goto LAB_1003955f4;
LAB_1003955bc:
  _swift_release(local_128);
  _swift_bridgeObjectRelease(puVar32);
  (**(code **)(lVar29 + 8))(local_108.unknown,DVar6.unknown);
  lVar25 = local_110;
  param_2 = local_130;
  uVar31 = local_134;
LAB_1003955f4:
  lVar33 = 0x6972747441776172;
  lVar30 = lVar33;
  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
            (0x6972747441776172,0xed00007365747562);
  if (lVar30 == 0) {
    (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
  }
  else {
    puVar7 = &DAT_100fbee30;
    local_110 = lVar25;
    local_a0 = lVar30;
    FUN_1000037f0(&DAT_100fbee30,&DAT_100c43f90);
    ppuVar15 = &local_f0;
    _swift_dynamicCast(ppuVar15,&local_a0,puVar7,PTR___type_metadata_for_Foundation_Data_100ea7300,6
                      );
    puVar23 = puStack_e8;
    DVar10.unknown = local_f0;
    if (((ulong)ppuVar15 & 1) == 0) {
      (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
      lVar25 = local_110;
    }
    else {
      ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                (0x6972747441776172,0xed00007365747562);
      if (lVar33 == 0) {
LAB_1003957e0:
        (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
      }
      else {
        ppuVar15 = &local_f0;
        local_a0 = lVar33;
        _swift_dynamicCast(ppuVar15,&local_a0,puVar7,
                           PTR___type_metadata_for_Foundation_Data_100ea7300,6);
        puVar8 = puStack_e8;
        puVar32 = local_f0;
        if (((ulong)ppuVar15 & 1) == 0) goto LAB_1003957e0;
        local_108.unknown = DVar10.unknown;
        puVar27 = (undefined *)0x65707954776172;
        ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                  (0x65707954776172,&DAT_e700000000000000);
        if (puVar27 == (undefined *)0x0) {
          (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
LAB_100395834:
          FUN_10003bf2c(puVar32,puVar8);
          DVar10.unknown = local_108.unknown;
        }
        else {
          local_128 = puVar32;
          local_120 = puVar8;
          plVar12 = &local_a0;
          local_f0 = puVar27;
          _swift_dynamicCast(plVar12,&local_f0,puVar7,PTR___type_metadata_for_Swift_Int_100eac6f8,6)
          ;
          DVar10.unknown = local_108.unknown;
          if (((ulong)plVar12 & 1) == 0) {
            (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
            puVar32 = local_128;
            puVar8 = local_120;
            goto LAB_100395834;
          }
          if (local_a0 == 1) {
            this = Foundation::JSONDecoder::typeMetadataAccessor();
            pJVar16 = this;
            _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
            FUN_1001037b4(DVar10.unknown,puVar23);
            pJVar16 = Foundation::JSONDecoder::init(pJVar16);
            FUN_1003254cc();
            Foundation::JSONDecoder::_decode(pJVar16,(Data)0x100eca9e8);
            FUN_10003bf2c(DVar10.unknown,puVar23);
            _swift_release(pJVar16);
            local_130 = puStack_e8;
            _swift_allocObject(this,*(undefined4 *)(this + 0x30),*(undefined2 *)(this + 0x34));
            puVar32 = local_120;
            puVar7 = local_128;
            FUN_1001037b4(local_128,local_120);
            pJVar16 = Foundation::JSONDecoder::init(this);
            Foundation::JSONDecoder::_decode(pJVar16,(Data)0x100eca9e8);
            puVar8 = puVar32;
            FUN_10003bf2c(puVar7);
            uVar17 = (uint)puVar8;
            _swift_release(pJVar16);
            ppuVar15 = &local_f0;
            FUN_1003245fc();
            plVar12 = &local_a0;
            uVar18 = uVar17;
            FUN_1003245fc();
            lVar29 = local_f8;
            DVar28.unknown = local_100.unknown;
            lVar25 = local_110;
            if ((uVar18 & 0xff) == 1) {
              (**(code **)(local_f8 + 8))(local_100.unknown,DVar6.unknown);
              FUN_10003bf2c(DVar10.unknown,puVar23);
              DVar10.unknown = puVar7;
              puVar23 = puVar32;
            }
            else {
              if ((uVar17 & 0xff) != 1) {
                if (((long)ppuVar15 < 1) ||
                   (((long)plVar12 <= (long)ppuVar15 && (plVar12 != (long *)0x0)))) {
                  (**(code **)(local_f8 + 8))(local_100.unknown,DVar6.unknown);
                  FUN_10003bf2c(DVar10.unknown,puVar23);
                  FUN_10003bf2c(local_128,local_120);
                }
                else {
                  ___extension_in_CloudKit____C_CKRecord_subscript_getter____Swift_String___>___C_CKRecordValue_
                            (0x6972747441776172,0xed00007365747562);
                  ___extension_in_CloudKit____C_CKRecord_subscript_setter____Swift_String___>___C_CKRecordValue_
                            ();
                  FUN_10003bf2c(local_128,local_120);
                  FUN_10003bf2c(DVar10.unknown,puVar23);
                  (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
                  uVar31 = 1;
                }
                goto LAB_100395848;
              }
              (**(code **)(local_f8 + 8))(local_100.unknown,DVar6.unknown);
              FUN_10003bf2c(DVar10.unknown,puVar23);
              DVar10.unknown = local_128;
              puVar23 = local_120;
            }
          }
          else {
            (**(code **)(lVar29 + 8))(DVar28.unknown,DVar6.unknown);
            FUN_10003bf2c(local_128,local_120);
          }
        }
      }
      FUN_10003bf2c(DVar10.unknown,puVar23);
      lVar25 = local_110;
    }
  }
LAB_100395848:
  FUN_100378618(lVar25);
LAB_100395858:
  auVar35._8_4_ = uVar31 & 1;
  auVar35._0_8_ = param_2;
  auVar35._12_4_ = 0;
  return auVar35;
}



/* Address: 0x100395b50 | FUN_100395b50 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100395b50(void)

{
  return ZEXT816(0x100fc2218);
}



/* Address: 0x100395b70 | FUN_100395b70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined4 FUN_100395b70(ulong *param_1,long param_2)

{
  bool bVar1;
  ulong *puVar2;
  ID IVar3;
  _StringGuts _Var4;
  undefined4 uVar5;
  String SVar6;
  String SVar7;
  
  if (param_1 == (ulong *)0x0) {
    return 1;
  }
  puVar2 = param_1;
  FUN_10038f124();
  if (puVar2 == (ulong *)0x0) {
    IVar3 = objc_stub::FUN_100c05b40((ID)param_1);
    uVar5 = 2;
    if ((int)IVar3 != 0) {
      uVar5 = 3;
    }
  }
  else {
    (**(code **)((*(ulong *)PTR__swift_isaMask_100eae3b0 & *puVar2) + 0x88))();
    if (((ulong)puVar2 & 1) == 0) {
      uVar5 = 4;
    }
    else {
      if (param_2 == 3) {
        objc_stub::cloudKitZoneOwnerName((ID)param_1);
        SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var4.unknown = SVar6.bridgeObject;
        SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar6 == SVar7) {
          _swift_bridgeObjectRelease(_Var4.unknown);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          return 5;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar6.str,_Var4,(_StringComparisonResult)(__int8)SVar7.str);
        _swift_bridgeObjectRelease(_Var4.unknown);
        _swift_bridgeObjectRelease(SVar7.bridgeObject);
        if (bVar1) {
          return 5;
        }
      }
      else if (param_2 == 2) {
        objc_stub::cloudKitZoneOwnerName((ID)param_1);
        SVar6 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        _Var4.unknown = SVar6.bridgeObject;
        SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
        if (SVar6 == SVar7) {
          _swift_bridgeObjectRelease(_Var4.unknown);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
        }
        else {
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)SVar6.str,_Var4,(_StringComparisonResult)(__int8)SVar7.str
                            );
          _swift_bridgeObjectRelease(_Var4.unknown);
          _swift_bridgeObjectRelease(SVar7.bridgeObject);
          if (!bVar1) {
            return 5;
          }
        }
      }
      uVar5 = 0;
    }
  }
  return uVar5;
}



/* Address: 0x100395d98 | FUN_100395d98 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100395d98(ID param_1,char param_2)

{
  bool bVar1;
  ID IVar2;
  NSString *pNVar3;
  _StringGuts _Var4;
  uint uVar5;
  uint extraout_w8;
  void *pvVar6;
  long unaff_x21;
  String SVar7;
  undefined1 auStack_80 [16];
  ID local_70;
  
  IVar2 = objc_stub::transactionAuthor(param_1);
  if (IVar2 == 0) {
    pvVar6 = (void *)0x0;
  }
  else {
    SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar6 = SVar7.bridgeObject;
  }
  if (param_2 == '\x01') {
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::FUN_100c0e4e0(param_1,pNVar3);
    IVar2 = objc_stub::hasChanges(param_1);
    if ((int)IVar2 != 0) {
LAB_100395f00:
      local_70 = param_1;
      FUN_1002ff9c8(FUN_10030844c,auStack_80);
      if (unaff_x21 == 0) {
        if (param_2 == '\x01') {
          if (pvVar6 == (void *)0x0) {
            pNVar3 = (NSString *)0x0;
          }
          else {
            pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          }
          objc_stub::FUN_100c0e4e0(param_1,pNVar3);
        }
        _swift_bridgeObjectRelease(pvVar6);
        uVar5 = 1;
      }
      else {
        if (param_2 == '\x01') {
          if (pvVar6 == (void *)0x0) {
            pNVar3 = (NSString *)0x0;
          }
          else {
            pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          }
          objc_stub::FUN_100c0e4e0(param_1,pNVar3);
        }
        _swift_bridgeObjectRelease(pvVar6);
        uVar5 = extraout_w8;
      }
      goto LAB_100395fd0;
    }
    if (pvVar6 == (void *)0x0) {
      pNVar3 = (NSString *)0x0;
    }
    else {
      pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    }
    objc_stub::FUN_100c0e4e0(param_1,pNVar3);
  }
  else {
    IVar2 = objc_stub::transactionAuthor(param_1);
    if (IVar2 != 0) {
      SVar7 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var4.unknown = SVar7.bridgeObject;
      if ((SVar7.str == (undefined *)0x6c707041636e7973) &&
         (_Var4.unknown == (undefined *)0xe900000000000079)) {
        _swift_bridgeObjectRelease(0xe900000000000079);
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)SVar7.str,_Var4,(_StringComparisonResult)0x73);
        _swift_bridgeObjectRelease(_Var4.unknown);
        if (!bVar1) goto LAB_100395ef4;
      }
      objc_stub::FUN_100c0e4e0(param_1,0);
    }
LAB_100395ef4:
    IVar2 = objc_stub::hasChanges(param_1);
    if ((IVar2 & 1) != 0) goto LAB_100395f00;
  }
  _swift_bridgeObjectRelease(pvVar6);
  uVar5 = 0;
LAB_100395fd0:
  return uVar5 & 1;
}



/* Address: 0x100395ff8 | FUN_100395ff8 */

/* WARNING: Removing unreachable block (ram,0x000100396034) */

void FUN_100395ff8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100396174(param_3,param_4);
  return;
}



/* Address: 0x100396174 | FUN_100396174 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001003964fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100396174(code *param_1,undefined1 param_2)

{
  __CocoaSet _Var1;
  undefined *puVar2;
  char *pcVar3;
  ID IVar4;
  void *pvVar5;
  ID IVar6;
  undefined **ppuVar7;
  String *pSVar8;
  String *pSVar9;
  String *pSVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  char *pcVar15;
  _StringGuts _Var16;
  char *pcVar17;
  undefined *puVar18;
  long extraout_x8;
  long lVar19;
  char *pcVar20;
  ulong uVar21;
  long extraout_x12;
  ulong uVar22;
  long unaff_x20;
  long unaff_x21;
  long lVar23;
  code *pcVar24;
  ulong uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
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
  Notification NVar40;
  char acStack_160 [8];
  undefined **local_158;
  code *local_150;
  long local_148;
  long local_140;
  ID local_138;
  String local_f0;
  String local_e0;
  undefined8 uStack_d0;
  long local_c8;
  undefined1 auStack_b8 [24];
  undefined *local_a0;
  undefined8 local_98;
  code *local_90;
  undefined *local_88;
  code *local_80;
  undefined *local_78;
  
  puVar2 = &DAT_100fc2278;
  FUN_1000037f0(&DAT_100fc2278,&DAT_100c43f98);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar15 = acStack_160 + -extraout_x8;
  NVar40 = Foundation::Notification::typeMetadataAccessor();
  pcVar3 = NVar40.pastePaused.str;
  lVar28 = *(long *)(pcVar3 + -8);
  lVar23 = *(long *)(lVar28 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (pcVar3,NVar40.pastePaused.bridgeObject,NVar40.syncInProgress.str,
             NVar40.syncInProgress.bridgeObject);
  lVar19 = (long)pcVar15 - (lVar23 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pcVar20 = (char *)(lVar19 - extraout_x12);
  lVar26 = unaff_x20 + _TtC9PasteCore10SyncEngine::persistentStack;
  IVar6 = *(ID *)(lVar26 + 0x18);
  lVar14 = *(long *)(lVar26 + 0x20);
  FUN_100004640(lVar26,IVar6);
  (**(code **)(lVar14 + 0x10))(IVar6,lVar14);
  _swift_allocBox();
  (**(code **)(lVar28 + 0x38))(lVar14,1,1,pcVar3);
  IVar4 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  uVar27 = *(undefined8 *)PTR__NSManagedObjectContextDidSaveNotification_100ea99e8;
  local_80 = FUN_100396d24;
  local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
  local_98 = 0x42000000;
  local_90 = FUN_100059f04;
  local_88 = &DAT_100ecdd30;
  local_78 = puVar2;
  pvVar5 = __Block_copy(&local_a0);
  puVar18 = local_78;
  _swift_retain(puVar2);
  _swift_release(puVar18);
  IVar4 = objc_stub::addObserverForName_object_queue_usingBlock_(IVar4,uVar27,param_1,0,pvVar5);
  __Block_release(pvVar5);
  local_88 = (undefined *)CONCAT71(local_88._1_7_,param_2);
  local_90 = param_1;
  (extension_CoreData)::__C::NSManagedObjectContext::_performAndWait();
  if (unaff_x21 != 0) {
    IVar6 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
    objc_stub::removeObserver_(IVar6,IVar4);
    _swift_release(puVar2);
    _swift_unknownObjectRelease(IVar4);
    return;
  }
  local_148 = lVar23;
  local_140 = lVar28;
  local_138 = IVar4;
  if ((char)local_e0.str == '\x01') {
    puVar18 = (undefined *)0x0;
    _swift_beginAccess(lVar14,auStack_b8,0);
    FUN_100396da4(lVar14,pcVar15);
    lVar26 = local_140;
    pcVar11 = pcVar15;
    (**(code **)(local_140 + 0x30))(pcVar15,1,pcVar3);
    if ((int)pcVar11 != 1) {
      pcVar24 = *(code **)(lVar26 + 0x20);
      pcVar11 = pcVar20;
      pcVar17 = pcVar3;
      (*pcVar24)();
      NVar40.pastePaused.bridgeObject = pcVar15;
      NVar40.pastePaused.str = pcVar11;
      NVar40.syncInProgress.bridgeObject = puVar18;
      NVar40.syncInProgress.str = pcVar17;
      Foundation::Notification::_get_userInfo(NVar40);
      if (pcVar11 == (char *)0x0) {
        pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_1003c8e0c();
      }
      local_f0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pcVar15 = local_f0.bridgeObject;
      _swift_bridgeObjectRetain(pcVar15);
      puVar12 = PTR___type_metadata_for_Swift_String_100eac208;
      Swift::AnyHashable::_init
                (&local_a0,pcVar11,PTR___type_metadata_for_Swift_String_100eac208,
                 PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
      if (*(long *)(pcVar11 + 0x10) == 0) {
LAB_100396544:
        local_e0.bridgeObject = (void *)0x0;
        local_e0.str = (char *)0x0;
        local_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pcVar11);
        ppuVar7 = &local_a0;
        FUN_1000f1290(ppuVar7);
        if (((ulong)puVar12 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar11);
          goto LAB_100396544;
        }
        FUN_10000cbfc(*(long *)(pcVar11 + 0x38) + (long)ppuVar7 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(pcVar15);
        pcVar15 = pcVar11;
      }
      _swift_bridgeObjectRelease(pcVar15);
      FUN_100089674(&local_a0);
      puVar12 = PTR___type_metadata_for_Any_100eae0c0;
      if (local_c8 == 0) {
        pSVar8 = &local_e0;
        FUN_100005808(pSVar8,&DAT_100fbe6f0,&DAT_100c42750);
LAB_1003965ec:
        pSVar9 = (String *)0x0;
      }
      else {
        puVar18 = &DAT_100fc0670;
        FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
        pSVar8 = &local_f0;
        _swift_dynamicCast(pSVar8,&local_e0,puVar12 + 8,puVar18,6);
        if (((ulong)pSVar8 & 1) == 0) goto LAB_1003965ec;
        pcVar15 = local_f0.str;
        if (((ulong)local_f0.str & 0xc000000000000001) == 0) {
          pSVar9 = *(String **)(local_f0.str + 0x10);
          _swift_bridgeObjectRelease();
        }
        else {
          _Var1.unknown = (undefined *)((ulong)local_f0.str & 0xffffffffffffff8);
          if ((char *)0x7fffffffffffffff < local_f0.str) {
            _Var1.unknown = local_f0.str;
          }
          pSVar9 = (String *)Swift::__CocoaSet::get_count(_Var1);
          _swift_bridgeObjectRelease(pcVar15);
          pSVar8 = pSVar9;
        }
      }
      local_f0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pcVar15 = local_f0.bridgeObject;
      _swift_bridgeObjectRetain(pcVar15);
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
      Swift::AnyHashable::_init
                (&local_a0,pSVar8,PTR___type_metadata_for_Swift_String_100eac208,
                 PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
      if (*(long *)(pcVar11 + 0x10) == 0) {
LAB_100396670:
        local_e0.bridgeObject = (void *)0x0;
        local_e0.str = (char *)0x0;
        local_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pcVar11);
        ppuVar7 = &local_a0;
        FUN_1000f1290(ppuVar7);
        if (((ulong)puVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar11);
          goto LAB_100396670;
        }
        FUN_10000cbfc(*(long *)(pcVar11 + 0x38) + (long)ppuVar7 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(pcVar15);
        pcVar15 = pcVar11;
      }
      _swift_bridgeObjectRelease(pcVar15);
      FUN_100089674(&local_a0);
      if (local_c8 == 0) {
        pSVar8 = &local_e0;
        FUN_100005808(pSVar8,&DAT_100fbe6f0,&DAT_100c42750);
LAB_100396714:
        pSVar10 = (String *)0x0;
      }
      else {
        puVar18 = &DAT_100fc0670;
        FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
        pSVar8 = &local_f0;
        _swift_dynamicCast(pSVar8,&local_e0,puVar12 + 8,puVar18,6);
        if (((ulong)pSVar8 & 1) == 0) goto LAB_100396714;
        pcVar15 = local_f0.str;
        if (((ulong)local_f0.str & 0xc000000000000001) == 0) {
          pSVar10 = *(String **)(local_f0.str + 0x10);
          _swift_bridgeObjectRelease();
        }
        else {
          _Var1.unknown = (undefined *)((ulong)local_f0.str & 0xffffffffffffff8);
          if ((char *)0x7fffffffffffffff < local_f0.str) {
            _Var1.unknown = local_f0.str;
          }
          pSVar10 = (String *)Swift::__CocoaSet::get_count(_Var1);
          _swift_bridgeObjectRelease(pcVar15);
          pSVar8 = pSVar10;
        }
      }
      local_f0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      pcVar15 = local_f0.bridgeObject;
      _swift_bridgeObjectRetain(pcVar15);
      puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
      Swift::AnyHashable::_init
                (&local_a0,pSVar8,PTR___type_metadata_for_Swift_String_100eac208,
                 PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
      if (*(long *)(pcVar11 + 0x10) == 0) {
LAB_100396798:
        local_e0.bridgeObject = (void *)0x0;
        local_e0.str = (char *)0x0;
        local_c8 = 0;
        uStack_d0 = 0;
      }
      else {
        _swift_bridgeObjectRetain(pcVar11);
        ppuVar7 = &local_a0;
        FUN_1000f1290(ppuVar7);
        if (((ulong)puVar13 & 1) == 0) {
          _swift_bridgeObjectRelease(pcVar11);
          goto LAB_100396798;
        }
        FUN_10000cbfc(*(long *)(pcVar11 + 0x38) + (long)ppuVar7 * 0x20,&local_e0);
        _swift_bridgeObjectRelease(pcVar15);
        pcVar15 = pcVar11;
      }
      _swift_bridgeObjectRelease(pcVar15);
      _swift_bridgeObjectRelease(pcVar11);
      FUN_100089674(&local_a0);
      if (local_c8 == 0) {
        pcVar15 = "NF\v";
        FUN_100005808(&local_e0,&DAT_100fbe6f0);
        pcVar11 = (char *)0x0;
        lVar14 = local_148;
      }
      else {
        puVar18 = &DAT_100fc0670;
        FUN_1000037f0(&DAT_100fc0670,&DAT_100c42500);
        pSVar8 = &local_f0;
        pcVar15 = puVar12 + 8;
        _swift_dynamicCast(pSVar8,&local_e0,pcVar15,puVar18,6);
        lVar14 = local_148;
        if (((ulong)pSVar8 & 1) == 0) {
          pcVar11 = (char *)0x0;
        }
        else {
          pcVar17 = local_f0.str;
          if (((ulong)local_f0.str & 0xc000000000000001) == 0) {
            pcVar11 = *(char **)(local_f0.str + 0x10);
          }
          else {
            _Var1.unknown = (undefined *)((ulong)local_f0.str & 0xffffffffffffff8);
            if ((char *)0x7fffffffffffffff < local_f0.str) {
              _Var1.unknown = local_f0.str;
            }
            pcVar11 = (char *)Swift::__CocoaSet::get_count(_Var1);
          }
          _swift_bridgeObjectRelease(pcVar17);
        }
      }
      lVar23 = (long)&pSVar10->str + (long)&pSVar9->str;
      if (SCARRY8((long)pSVar9,(long)pSVar10)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x100396c40);
        (*pcVar24)();
      }
      if (SCARRY8(lVar23,(long)pcVar11)) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x100396c44);
        (*pcVar24)();
      }
      if (0 < (long)(pcVar11 + lVar23)) {
        FUN_1000d468c(&local_a0);
        puVar12 = local_88;
        local_150 = local_80;
        ppuVar7 = &local_a0;
        _Var16.unknown = local_88;
        FUN_100004640();
        local_e0.str = (char *)0x0;
        local_e0.bridgeObject = (void *)0xe000000000000000;
        local_158 = ppuVar7;
        Swift::_StringGuts::grow(0x4a,_Var16);
        SVar29.bridgeObject = (void *)0x8000000100da4200;
        SVar29.str = (char *)0xd000000000000027;
        SVar33.bridgeObject = puVar18;
        SVar33.str = pcVar15;
        Swift::String::append(SVar29,SVar33);
        local_f0.str = (char *)pSVar9;
        SVar29 = Swift::CustomStringConvertible::get_description();
        SVar34.bridgeObject = puVar18;
        SVar34.str = pcVar15;
        Swift::String::append(SVar29,SVar34);
        _swift_bridgeObjectRelease(SVar29.bridgeObject);
        SVar30.bridgeObject = (void *)0xeb00000000202c64;
        SVar30.str = (char *)0x65747265736e6920;
        SVar35.bridgeObject = puVar18;
        SVar35.str = pcVar15;
        Swift::String::append(SVar30,SVar35);
        local_f0.str = (char *)pSVar10;
        SVar29 = Swift::CustomStringConvertible::get_description();
        SVar36.bridgeObject = puVar18;
        SVar36.str = pcVar15;
        Swift::String::append(SVar29,SVar36);
        _swift_bridgeObjectRelease(SVar29.bridgeObject);
        SVar31.bridgeObject = (void *)0xea0000000000202c;
        SVar31.str = (char *)0x6465746164707520;
        SVar37.bridgeObject = puVar18;
        SVar37.str = pcVar15;
        Swift::String::append(SVar31,SVar37);
        lVar26 = local_140;
        local_f0.str = pcVar11;
        SVar29 = Swift::CustomStringConvertible::get_description();
        SVar38.bridgeObject = puVar18;
        SVar38.str = pcVar15;
        Swift::String::append(SVar29,SVar38);
        _swift_bridgeObjectRelease(SVar29.bridgeObject);
        SVar32.bridgeObject = &DAT_e800000000000000;
        SVar32.str = (char *)0x646574656c656420;
        SVar39.bridgeObject = puVar18;
        SVar39.str = pcVar15;
        Swift::String::append(SVar32,SVar39);
        pvVar5 = local_e0.bridgeObject;
        FUN_1000d4db8(local_e0.str,local_e0.bridgeObject,puVar12,local_150);
        lVar14 = local_148;
        _swift_bridgeObjectRelease(pvVar5);
        FUN_100004594(&local_a0);
      }
      (**(code **)(lVar26 + 0x10))(lVar19,pcVar20,pcVar3);
      uVar21 = (ulong)*(byte *)(lVar26 + 0x50);
      uVar22 = uVar21 + 0x18 & (uVar21 ^ 0xffffffffffffffff);
      uVar25 = lVar14 + uVar22 + 7 & 0xfffffffffffffff8;
      puVar18 = &DAT_100ecdd68;
      _swift_allocObject(&DAT_100ecdd68,uVar25 + 8,uVar21 | 7);
      *(ID *)(puVar18 + 0x10) = IVar6;
      (*pcVar24)(puVar18 + uVar22,lVar19,pcVar3);
      *(long *)(puVar18 + uVar25) = unaff_x20;
      puVar12 = &DAT_100ecdd90;
      _swift_allocObject(&DAT_100ecdd90,0x20,7);
      pcVar24 = FUN_100397498;
      *(code **)(puVar12 + 0x10) = FUN_100397498;
      *(undefined **)(puVar12 + 0x18) = puVar18;
      local_80 = FUN_100209b34;
      local_a0 = PTR___NSConcreteStackBlock_100ea82a0;
      local_98 = 0x42000000;
      local_90 = FUN_1000d5218;
      local_88 = &DAT_100ecdda8;
      local_78 = puVar12;
      pvVar5 = __Block_copy(&local_a0);
      puVar13 = local_78;
      _swift_retain(unaff_x20);
      _swift_retain(puVar12);
      _swift_release(puVar13);
      objc_stub::performBlockAndWait_(IVar6,pvVar5);
      __Block_release(pvVar5);
      (**(code **)(local_140 + 8))(pcVar20,pcVar3);
      puVar13 = puVar12;
      _swift_isEscapingClosureAtFileLocation(puVar12,"",0x9e,0x62,0x28,1);
      _swift_release(puVar12);
      if (((ulong)puVar13 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar24 = (code *)SoftwareBreakpoint(1,0x100396c48);
        (*pcVar24)();
      }
      goto LAB_100396bc4;
    }
    FUN_100005808(pcVar15,&DAT_100fc2278,&DAT_100c43f98);
  }
  pcVar24 = (code *)0x0;
  puVar18 = (undefined *)0x0;
LAB_100396bc4:
  IVar6 = local_138;
  IVar4 = objc_stub::defaultCenter((ID)&_OBJC_CLASS___NSNotificationCenter);
  objc_stub::removeObserver_(IVar4,IVar6);
  _swift_release(puVar2);
  _swift_unknownObjectRelease(IVar6);
  FUN_100004550(pcVar24,puVar18);
  return;
}



/* Address: 0x100396c48 | FUN_100396c48 */

void FUN_100396c48(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  char *pcVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  Notification NVar5;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100fc2278;
  FUN_1000037f0(&DAT_100fc2278,&DAT_100c43f98);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_60 + -extraout_x8;
  _swift_projectBox(param_2);
  NVar5 = Foundation::Notification::typeMetadataAccessor();
  pcVar2 = NVar5.pastePaused.str;
  lVar4 = *(long *)(pcVar2 + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,pcVar2,NVar5.syncInProgress.bridgeObject);
  (**(code **)(lVar4 + 0x38))(puVar3,0,1,pcVar2);
  _swift_beginAccess(param_2,auStack_58,1,0);
  FUN_1003974ec(puVar3,param_2);
  return;
}



/* Address: 0x100396d24 | FUN_100396d24 */

void FUN_100396d24(void)

{
  FUN_100396c48();
  return;
}



/* Address: 0x100396d2c | FUN_100396d2c */

void FUN_100396d2c(long param_1,long param_2)

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



/* Address: 0x100396d40 | FUN_100396d40 */

void FUN_100396d40(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100396d48 | FUN_100396d48 */

void FUN_100396d48(byte *param_1)

{
  ID IVar1;
  long unaff_x20;
  long unaff_x21;
  ID self;
  
  self = *(ID *)(unaff_x20 + 0x10);
  IVar1 = self;
  FUN_100395d98(self,*(undefined1 *)(unaff_x20 + 0x18));
  if (unaff_x21 == 0) {
    if ((IVar1 & 1) != 0) {
      objc_stub::reset(self);
    }
    *param_1 = (byte)IVar1 & 1;
  }
  return;
}



/* Address: 0x100396da4 | FUN_100396da4 */

undefined8 FUN_100396da4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2278;
  FUN_1000037f0(&DAT_100fc2278,&DAT_100c43f98);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100396df4 | FUN_100396df4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100396df4(ID param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  __CocoaSet _Var1;
  undefined1 auVar2 [32];
  code *pcVar3;
  char *pcVar4;
  Set<undefined> SVar5;
  __int64 _Var6;
  __int64 _Var7;
  __int64 _Var8;
  ID IVar9;
  NSNotification *pNVar10;
  __int64 _Var11;
  __int64 _Var12;
  __int64 _Var13;
  undefined8 extraout_x1;
  _StringGuts _Var14;
  char *pcVar15;
  String SVar16;
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
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined1 auStack_88 [24];
  undefined *local_70;
  undefined8 uStack_68;
  
  objc_stub::insertedObjects(param_1);
  pcVar4 = (char *)0x0;
  FUN_100308464();
  FUN_1003084a8();
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var6 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var6 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  objc_stub::updatedObjects(param_1);
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var7 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var7 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  if (SCARRY8(_Var6,_Var7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10039740c);
    (*pcVar3)();
  }
  objc_stub::deletedObjects(param_1);
  pcVar15 = pcVar4;
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var8 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var8 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  if (SCARRY8(_Var6 + _Var7,_Var8)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100397410);
    (*pcVar3)();
  }
  IVar9 = objc_stub::undoManager(param_1);
  objc_stub::disableUndoRegistration(IVar9);
  auVar2._16_8_ = param_4;
  auVar2._8_8_ = pcVar15;
  auVar2._0_8_ = extraout_x1;
  auVar2._24_8_ = 0;
  pNVar10 = Foundation::Notification::_bridgeToObjectiveC((Notification)(auVar2 << 0x40));
  objc_stub::mergeChangesFromContextDidSaveNotification_(param_1,pNVar10);
  IVar9 = objc_stub::undoManager(param_1);
  objc_stub::enableUndoRegistration(IVar9);
  objc_stub::insertedObjects(param_1);
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var11 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var11 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  objc_stub::updatedObjects(param_1);
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var12 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var12 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  if (SCARRY8(_Var11,_Var12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100397414);
    (*pcVar3)();
  }
  objc_stub::deletedObjects(param_1);
  pcVar15 = pcVar4;
  SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
  if (((ulong)SVar5.unknown & 0xc000000000000001) == 0) {
    _Var13 = *(__int64 *)(SVar5.unknown + 0x10);
  }
  else {
    _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
    if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
      _Var1.unknown = SVar5.unknown;
    }
    _Var13 = Swift::__CocoaSet::get_count(_Var1);
  }
  _swift_bridgeObjectRelease(SVar5.unknown);
  if (SCARRY8(_Var11 + _Var12,_Var13)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100397418);
    (*pcVar3)();
  }
  if (_Var6 + _Var7 + _Var8 < _Var11 + _Var12 + _Var13) {
    FUN_1000d468c(auStack_88);
    _Var14.unknown = local_70;
    FUN_100004640(auStack_88);
    Swift::_StringGuts::grow(0x5a,_Var14);
    SVar16.bridgeObject = (void *)0x8000000100da4230;
    SVar16.str = (char *)0xd000000000000028;
    SVar22.bridgeObject = param_4;
    SVar22.str = pcVar15;
    Swift::String::append(SVar16,SVar22);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar23.bridgeObject = param_4;
    SVar23.str = pcVar15;
    Swift::String::append(SVar16,SVar23);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar17.bridgeObject = (void *)0xa500000000000000;
    SVar17.str = (char *)0x209286e220;
    SVar24.bridgeObject = param_4;
    SVar24.str = pcVar15;
    Swift::String::append(SVar17,SVar24);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar25.bridgeObject = param_4;
    SVar25.str = pcVar15;
    Swift::String::append(SVar16,SVar25);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar18.bridgeObject = (void *)0xec000000203a6465;
    SVar18.str = (char *)0x747265736e692820;
    SVar26.bridgeObject = param_4;
    SVar26.str = pcVar15;
    Swift::String::append(SVar18,SVar26);
    objc_stub::insertedObjects(param_1);
    pcVar15 = pcVar4;
    SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)SVar5.unknown & 0xc000000000000001) != 0) {
      _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
        _Var1.unknown = SVar5.unknown;
      }
      Swift::__CocoaSet::get_count(_Var1);
    }
    _swift_bridgeObjectRelease(SVar5.unknown);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar27.bridgeObject = param_4;
    SVar27.str = pcVar15;
    Swift::String::append(SVar16,SVar27);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar19.bridgeObject = (void *)0xeb00000000203a64;
    SVar19.str = (char *)0x657461647075202c;
    SVar28.bridgeObject = param_4;
    SVar28.str = pcVar15;
    Swift::String::append(SVar19,SVar28);
    objc_stub::updatedObjects(param_1);
    pcVar15 = pcVar4;
    SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)SVar5.unknown & 0xc000000000000001) != 0) {
      _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
        _Var1.unknown = SVar5.unknown;
      }
      Swift::__CocoaSet::get_count(_Var1);
    }
    _swift_bridgeObjectRelease(SVar5.unknown);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar29.bridgeObject = param_4;
    SVar29.str = pcVar15;
    Swift::String::append(SVar16,SVar29);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar20.bridgeObject = (void *)0xeb00000000203a64;
    SVar20.str = (char *)0x6574656c6564202c;
    SVar30.bridgeObject = param_4;
    SVar30.str = pcVar15;
    Swift::String::append(SVar20,SVar30);
    objc_stub::deletedObjects(param_1);
    SVar5 = (extension_Foundation)::Swift::Set::__unconditionallyBridgeFromObjectiveC();
    if (((ulong)SVar5.unknown & 0xc000000000000001) != 0) {
      _Var1.unknown = SVar5.unknown & 0xffffffffffffff8;
      if ((undefined *)0x7fffffffffffffff < SVar5.unknown) {
        _Var1.unknown = SVar5.unknown;
      }
      Swift::__CocoaSet::get_count(_Var1);
    }
    _swift_bridgeObjectRelease(SVar5.unknown);
    SVar16 = Swift::CustomStringConvertible::get_description();
    SVar31.bridgeObject = param_4;
    SVar31.str = pcVar4;
    Swift::String::append(SVar16,SVar31);
    _swift_bridgeObjectRelease(SVar16.bridgeObject);
    SVar21.bridgeObject = (void *)0xe100000000000000;
    SVar21.str = (char *)0x29;
    SVar32.bridgeObject = param_4;
    SVar32.str = pcVar4;
    Swift::String::append(SVar21,SVar32);
    FUN_1000d4db8(0,0xe000000000000000,local_70,uStack_68);
    _swift_bridgeObjectRelease(0xe000000000000000);
    FUN_100004594(auStack_88);
  }
  return;
}



/* Address: 0x100397418 | FUN_100397418 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100397418(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  Notification NVar4;
  
  NVar4 = Foundation::Notification::typeMetadataAccessor();
  lVar2 = *(long *)(NVar4.pastePaused.str + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar2 + 0x50) ^ 0xffffffffffffffff);
  lVar1 = *(long *)(lVar2 + 0x40);
  (**(code **)(lVar2 + 8))
            (unaff_x20 + uVar3,NVar4.pastePaused.str,NVar4.syncInProgress.str,
             NVar4.syncInProgress.bridgeObject);
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar1 + uVar3 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100397498 | FUN_100397498 */

void FUN_100397498(void)

{
  ulong uVar1;
  long unaff_x20;
  Notification NVar2;
  
  NVar2 = Foundation::Notification::typeMetadataAccessor();
  uVar1 = (ulong)*(byte *)(*(long *)(NVar2.pastePaused.str + -8) + 0x50);
  uVar1 = uVar1 + 0x18 & (uVar1 ^ 0xffffffffffffffff);
  FUN_100396df4(*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar1,
                *(undefined8 *)
                 (unaff_x20 +
                 (*(long *)(*(long *)(NVar2.pastePaused.str + -8) + 0x40) + uVar1 + 7 &
                 0xfffffffffffffff8)),NVar2.syncInProgress.bridgeObject);
  return;
}



/* Address: 0x1003974dc | FUN_1003974dc */

void FUN_1003974dc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003974ec | FUN_1003974ec */

undefined8 FUN_1003974ec(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc2278;
  FUN_1000037f0(&DAT_100fc2278,&DAT_100c43f98);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10039753c | thunk_FUN_100396d2c */

void thunk_FUN_100396d2c(void)

{
  FUN_100396d2c();
  return;
}



/* Address: 0x100397540 | thunk_FUN_100396d40 */

void thunk_FUN_100396d40(void)

{
  FUN_100396d40();
  return;
}



/* Address: 0x100397544 | FUN_100397544 */

void FUN_100397544(undefined8 param_1,ulong param_2,undefined8 param_3,CKSyncEngine *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char cVar6;
  Event EVar7;
  int iVar8;
  DidFetchRecordZoneChanges DVar9;
  CKSyncEngine *pCVar10;
  SentRecordZoneChanges SVar11;
  CKSyncEngine *pCVar12;
  SentDatabaseChanges SVar13;
  CKSyncEngine *pCVar14;
  FetchedRecordZoneChanges FVar15;
  ulong uVar16;
  FetchedDatabaseChanges FVar17;
  ulong uVar18;
  AccountChange AVar19;
  CKSyncEngine *pCVar20;
  Serialization SVar21;
  ulong uVar22;
  StateUpdate SVar23;
  CKSyncEngine *pCVar24;
  undefined7 extraout_var;
  CKSyncEngine *pCVar26;
  CKSyncEngine *pCVar27;
  long *plVar28;
  undefined8 uVar29;
  State *pSVar30;
  char *pcVar31;
  _StringGuts _Var32;
  CKSyncEngine *pCVar33;
  undefined *puVar34;
  long lVar35;
  long lVar36;
  long lVar37;
  long lVar38;
  long lVar39;
  long lVar40;
  long lVar41;
  CKSyncEngine *pCVar42;
  code *pcVar43;
  long unaff_x20;
  ID self;
  State *pSVar44;
  long unaff_x22;
  long lVar45;
  undefined8 uVar46;
  undefined8 *puVar47;
  long lVar48;
  undefined8 uVar49;
  undefined8 uVar50;
  String SVar51;
  String SVar52;
  String SVar53;
  String SVar54;
  String SVar55;
  String SVar56;
  String SVar57;
  String SVar58;
  String SVar59;
  String SVar60;
  String SVar61;
  String SVar62;
  String SVar63;
  String SVar64;
  String SVar65;
  String SVar66;
  String SVar67;
  String SVar68;
  StateUpdate SVar25;
  
  *(CKSyncEngine **)(unaff_x22 + 0x170) = param_4;
  *(long *)(unaff_x22 + 0x178) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  *(ulong *)(unaff_x22 + 0x168) = param_2;
  pCVar33 = param_4;
  DVar9 = CloudKit::CKSyncEngine::Event::DidFetchRecordZoneChanges::typeMetadataAccessor();
  lVar35 = *(long *)(DVar9.unknown + -8);
  pCVar10 = (CKSyncEngine *)(*(long *)(lVar35 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0x180) = pCVar10;
  SVar11 = CloudKit::CKSyncEngine::Event::SentRecordZoneChanges::typeMetadataAccessor();
  lVar36 = *(long *)(SVar11.unknown + -8);
  pCVar12 = (CKSyncEngine *)(*(long *)(lVar36 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0x188) = pCVar12;
  SVar13 = CloudKit::CKSyncEngine::Event::SentDatabaseChanges::typeMetadataAccessor();
  lVar37 = *(long *)(SVar13.unknown + -8);
  pCVar14 = (CKSyncEngine *)(*(long *)(lVar37 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 400) = pCVar14;
  FVar15 = CloudKit::CKSyncEngine::Event::FetchedRecordZoneChanges::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x198) = FVar15.unknown;
  lVar38 = *(long *)(FVar15.unknown + -8);
  *(long *)(unaff_x22 + 0x1a0) = lVar38;
  uVar16 = *(long *)(lVar38 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a8) = uVar16;
  FVar17 = CloudKit::CKSyncEngine::Event::FetchedDatabaseChanges::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1b0) = FVar17.unknown;
  lVar39 = *(long *)(FVar17.unknown + -8);
  *(long *)(unaff_x22 + 0x1b8) = lVar39;
  uVar18 = *(long *)(lVar39 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c0) = uVar18;
  AVar19 = CloudKit::CKSyncEngine::Event::AccountChange::typeMetadataAccessor();
  lVar40 = *(long *)(AVar19.unknown + -8);
  pCVar20 = (CKSyncEngine *)(*(long *)(lVar40 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0x1c8) = pCVar20;
  SVar21 = CloudKit::CKSyncEngine::State::Serialization::typeMetadataAccessor();
  lVar41 = *(long *)(SVar21.unknown + -8);
  uVar22 = *(long *)(lVar41 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1d0) = uVar22;
  SVar23 = CloudKit::CKSyncEngine::Event::StateUpdate::typeMetadataAccessor();
  lVar48 = *(long *)(SVar23.unknown + -8);
  pCVar24 = (CKSyncEngine *)(*(long *)(lVar48 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0x1d8) = pCVar24;
  EVar7 = CloudKit::CKSyncEngine::Event::typeMetadataAccessor();
  SVar25.unknown = (undefined *)CONCAT71(extraout_var,EVar7.value);
  *(undefined **)(unaff_x22 + 0x1e0) = SVar25.unknown;
  lVar45 = *(long *)(SVar25.unknown + -8);
  *(long *)(unaff_x22 + 0x1e8) = lVar45;
  pCVar26 = (CKSyncEngine *)(*(long *)(lVar45 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  *(CKSyncEngine **)(unaff_x22 + 0x1f0) = pCVar26;
  pCVar42 = *(CKSyncEngine **)(unaff_x20 + _TtC9PasteCore10SyncEngine::privateSyncEngine);
  *(CKSyncEngine **)(unaff_x22 + 0x1f8) = pCVar42;
  uVar29 = 2;
  if (pCVar42 == (CKSyncEngine *)0x0 || param_4 != pCVar42) {
    uVar29 = 3;
  }
  pcVar31 = SVar25.unknown;
  (**(code **)(lVar45 + 0x10))();
  pCVar27 = pCVar26;
  (**(code **)(lVar45 + 0x58))(pCVar26,SVar25.unknown);
  iVar8 = (int)pCVar27;
  if (iVar8 == *(int *)
                PTR___enum_case_for_CloudKit_CKSyncEngine_Event_stateUpdate_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_StateUpdate___>_CloudKit_CKSyncEngine_Event_100ea92e8
     ) {
    (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
    SVar25.unknown = pCVar24;
    (**(code **)(lVar48 + 0x20))(pCVar24,pCVar26,SVar23.unknown);
    CloudKit::CKSyncEngine::Event::StateUpdate::get_stateSerialization(SVar25);
    FUN_1003b27ec(uVar22,uVar29);
    (**(code **)(lVar41 + 8))(uVar22,SVar21.unknown);
    pcVar43 = *(code **)(lVar48 + 8);
    pCVar26 = pCVar24;
    SVar25 = SVar23;
    goto LAB_100397824;
  }
  if (iVar8 == *(int *)
                PTR___enum_case_for_CloudKit_CKSyncEngine_Event_accountChange_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_AccountChange___>_CloudKit_CKSyncEngine_Event_100ea9320
     ) {
    (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
    (**(code **)(lVar40 + 0x20))(pCVar20,pCVar26,AVar19.unknown);
    FUN_100398880(pCVar20,param_4,uVar29);
    SVar25.unknown = AVar19.unknown;
    lVar35 = lVar40;
    pCVar26 = pCVar20;
  }
  else {
    if (iVar8 == *(int *)
                  PTR___enum_case_for_CloudKit_CKSyncEngine_Event_fetchedDatabaseChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_FetchedDatabaseChanges___>_CloudKit_CKSyncEngine_Event_100ea93f0
       ) {
      (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
      (**(code **)(lVar39 + 0x20))(uVar18,pCVar26,FVar17.unknown);
      plVar28 = (long *)0x1d0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x200) = plVar28;
      *plVar28 = unaff_x22;
      plVar28[1] = (long)FUN_100398040;
      FUN_100398d9c(param_1,param_2 & 0xcfffffffffffffff,uVar18,param_4);
      return;
    }
    if (iVar8 == *(int *)
                  PTR___enum_case_for_CloudKit_CKSyncEngine_Event_fetchedRecordZoneChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_FetchedRecordZoneChanges___>_CloudKit_CKSyncEngine_Event_100ea9410
       ) {
      (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
      (**(code **)(lVar38 + 0x20))(uVar16,pCVar26,FVar15.unknown);
      plVar28 = (long *)0x170;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x208) = plVar28;
      *plVar28 = unaff_x22;
      plVar28[1] = (long)FUN_100398108;
      FUN_10039a8b8(param_1,param_2 & 0xcfffffffffffffff,uVar16);
      return;
    }
    if (iVar8 == *(int *)
                  PTR___enum_case_for_CloudKit_CKSyncEngine_Event_sentDatabaseChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_SentDatabaseChanges___>_CloudKit_CKSyncEngine_Event_100ea9388
       ) {
      (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
      (**(code **)(lVar37 + 0x20))(pCVar14,pCVar26,SVar13.unknown);
      FUN_1003a1af4(pCVar14);
      SVar25.unknown = SVar13.unknown;
      lVar35 = lVar37;
      pCVar26 = pCVar14;
    }
    else {
      if (iVar8 != *(int *)
                    PTR___enum_case_for_CloudKit_CKSyncEngine_Event_sentRecordZoneChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_SentRecordZoneChanges___>_CloudKit_CKSyncEngine_Event_100ea93d8
         ) {
        if (iVar8 == *(int *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_Event_willFetchChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_WillFetchChanges___>_CloudKit_CKSyncEngine_Event_100ea9340
           ) {
          FUN_1000d468c(unaff_x22 + 0xb0);
          puVar2 = *(undefined **)(unaff_x22 + 200);
          uVar1 = *(undefined8 *)(unaff_x22 + 0xd0);
          _Var32.unknown = puVar2;
          FUN_100004640(unaff_x22 + 0xb0);
          Swift::_StringGuts::grow(0x1d,_Var32);
          *(undefined8 *)(unaff_x22 + 0x120) = 0;
          *(undefined8 *)(unaff_x22 + 0x128) = 0xe000000000000000;
          SVar51.bridgeObject = (void *)0x8000000100da4320;
          SVar51.str = (char *)0xd00000000000001b;
          SVar59.bridgeObject = pCVar33;
          SVar59.str = pcVar31;
          Swift::String::append(SVar51,SVar59);
          *(undefined8 *)(unaff_x22 + 0x158) = uVar29;
          uVar29 = 0;
          FUN_1002fbb6c(0);
          Swift::__print_unlocked
                    (unaff_x22 + 0x158,unaff_x22 + 0x120,uVar29,
                     PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                     PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                    );
          uVar29 = *(undefined8 *)(unaff_x22 + 0x128);
          FUN_1000d4db8(*(undefined8 *)(unaff_x22 + 0x120),uVar29,puVar2,uVar1);
          _swift_bridgeObjectRelease(uVar29);
          FUN_100004594(unaff_x22 + 0xb0);
          pcVar43 = FUN_1003981d0;
          goto LAB_100397b44;
        }
        if (iVar8 != *(int *)
                      PTR___enum_case_for_CloudKit_CKSyncEngine_Event_willFetchRecordZoneChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_WillFetchRecordZoneChanges___>_CloudKit_CKSyncEngine_Event_100ea9428
           ) {
          if (iVar8 == *(int *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_Event_didFetchRecordZoneChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_DidFetchRecordZoneChanges___>_CloudKit_CKSyncEngine_Event_100ea9420
             ) {
            (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
            (**(code **)(lVar35 + 0x20))(pCVar10,pCVar26,DVar9.unknown);
            FUN_10039c178(pCVar10);
            SVar25.unknown = DVar9.unknown;
            pCVar26 = pCVar10;
            goto LAB_100397818;
          }
          if (iVar8 == *(int *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_Event_didFetchChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_DidFetchChanges___>_CloudKit_CKSyncEngine_Event_100ea9330
             ) {
            if (pCVar42 != (CKSyncEngine *)0x0 && param_4 == pCVar42) {
              self = *(ID *)(unaff_x20 + _TtC9PasteCore10SyncEngine::syncLock);
              objc_stub::lock(self);
              cVar6 = *(char *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed);
              *(undefined1 *)(unaff_x20 + _TtC9PasteCore10SyncEngine::_needsPostFetchSeed) = 0;
              objc_stub::unlock(self);
              if (cVar6 == '\x01') {
                FUN_1003aa18c();
              }
            }
            FUN_1000d468c(unaff_x22 + 0x88);
            puVar2 = *(undefined **)(unaff_x22 + 0xa0);
            uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
            _Var32.unknown = puVar2;
            FUN_100004640(unaff_x22 + 0x88);
            Swift::_StringGuts::grow(0x1e,_Var32);
            *(undefined8 *)(unaff_x22 + 0x110) = 0;
            *(undefined8 *)(unaff_x22 + 0x118) = 0xe000000000000000;
            SVar52.bridgeObject = (void *)0x8000000100da4300;
            SVar52.str = (char *)0xd00000000000001c;
            SVar60.bridgeObject = pCVar33;
            SVar60.str = pcVar31;
            Swift::String::append(SVar52,SVar60);
            *(undefined8 *)(unaff_x22 + 0x150) = uVar29;
            uVar29 = 0;
            FUN_1002fbb6c(0);
            Swift::__print_unlocked
                      (unaff_x22 + 0x150,unaff_x22 + 0x110,uVar29,
                       PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                       PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                      );
            uVar29 = *(undefined8 *)(unaff_x22 + 0x118);
            FUN_1000d4db8(*(undefined8 *)(unaff_x22 + 0x110),uVar29,puVar2,uVar1);
            _swift_bridgeObjectRelease(uVar29);
            FUN_100004594(unaff_x22 + 0x88);
            pcVar43 = FUN_1003982f4;
LAB_100397b44:
            _swift_task_switch(pcVar43,0,0);
            return;
          }
          if (iVar8 == *(int *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_Event_willSendChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_WillSendChanges___>_CloudKit_CKSyncEngine_Event_100ea9338
             ) {
            pSVar30 = CloudKit::CKSyncEngine::get_state(param_4,pCVar27);
            pSVar44 = pSVar30;
            CloudKit::CKSyncEngine::State::get_pendingRecordZoneChanges(pSVar30,pSVar30);
            _swift_release(pSVar44);
            uVar49 = *(undefined8 *)(pSVar30 + 0x10);
            _swift_bridgeObjectRelease(pSVar30);
            FUN_1000d468c(unaff_x22 + 0x60);
            puVar2 = *(undefined **)(unaff_x22 + 0x78);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
            _Var32.unknown = puVar2;
            FUN_100004640(unaff_x22 + 0x60);
            Swift::_StringGuts::grow(0x27,_Var32);
            *(undefined8 *)(unaff_x22 + 0x100) = 0;
            *(undefined8 *)(unaff_x22 + 0x108) = 0xe000000000000000;
            SVar53.bridgeObject = (void *)0x8000000100da42e0;
            SVar53.str = (char *)0xd00000000000001a;
            SVar61.bridgeObject = pCVar33;
            SVar61.str = pcVar31;
            Swift::String::append(SVar53,SVar61);
            *(undefined8 *)(unaff_x22 + 0x140) = uVar29;
            pcVar31 = (char *)0x0;
            FUN_1002fbb6c();
            puVar34 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
            Swift::__print_unlocked
                      (unaff_x22 + 0x140,unaff_x22 + 0x100,pcVar31,
                       PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                       PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                      );
            SVar54.bridgeObject = (void *)0xe100000000000000;
            SVar54.str = (char *)0x20;
            SVar62.bridgeObject = puVar34;
            SVar62.str = pcVar31;
            Swift::String::append(SVar54,SVar62);
            *(undefined8 *)(unaff_x22 + 0x148) = uVar49;
            SVar55 = Swift::CustomStringConvertible::get_description();
            SVar63.bridgeObject = puVar34;
            SVar63.str = pcVar31;
            Swift::String::append(SVar55,SVar63);
            _swift_bridgeObjectRelease(SVar55.bridgeObject);
            SVar56.bridgeObject = &DAT_e800000000000000;
            SVar56.str = (char *)0x676e69646e657020;
            SVar64.bridgeObject = puVar34;
            SVar64.str = pcVar31;
            Swift::String::append(SVar56,SVar64);
            uVar29 = *(undefined8 *)(unaff_x22 + 0x108);
            FUN_1000d4db8(*(undefined8 *)(unaff_x22 + 0x100),uVar29,puVar2,uVar1);
            _swift_bridgeObjectRelease(uVar29);
            FUN_100004594(unaff_x22 + 0x60);
            pcVar43 = FUN_10039845c;
            goto LAB_100397b44;
          }
          if (iVar8 == *(int *)
                        PTR___enum_case_for_CloudKit_CKSyncEngine_Event_didSendChanges_CloudKit_CKSyncEngine_Event_Type___>__CloudKit_CKSyncEngine_Event_DidSendChanges___>_CloudKit_CKSyncEngine_Event_100ea9328
             ) {
            pSVar30 = CloudKit::CKSyncEngine::get_state(param_4,pCVar27);
            pSVar44 = pSVar30;
            CloudKit::CKSyncEngine::State::get_pendingRecordZoneChanges(pSVar30,pSVar30);
            _swift_release(pSVar44);
            uVar49 = *(undefined8 *)(pSVar30 + 0x10);
            _swift_bridgeObjectRelease(pSVar30);
            FUN_1000d468c(unaff_x22 + 0x38);
            puVar2 = *(undefined **)(unaff_x22 + 0x50);
            uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
            _Var32.unknown = puVar2;
            FUN_100004640(unaff_x22 + 0x38);
            Swift::_StringGuts::grow(0x2a,_Var32);
            puVar47 = (undefined8 *)(unaff_x22 + 0xf0);
            *puVar47 = 0;
            *(undefined8 *)(unaff_x22 + 0xf8) = 0xe000000000000000;
            SVar55.bridgeObject = (void *)0x8000000100da4290;
            SVar55.str = (char *)0xd00000000000001b;
            SVar65.bridgeObject = pCVar33;
            SVar65.str = pcVar31;
            Swift::String::append(SVar55,SVar65);
            *(undefined8 *)(unaff_x22 + 0x130) = uVar29;
            pcVar31 = (char *)0x0;
            FUN_1002fbb6c();
            puVar34 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
            Swift::__print_unlocked
                      (unaff_x22 + 0x130,puVar47,pcVar31,
                       PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                       PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                      );
            SVar57.bridgeObject = (void *)0xe100000000000000;
            SVar57.str = (char *)0x20;
            SVar66.bridgeObject = puVar34;
            SVar66.str = pcVar31;
            Swift::String::append(SVar57,SVar66);
            *(undefined8 *)(unaff_x22 + 0x138) = uVar49;
            SVar55 = Swift::CustomStringConvertible::get_description();
            SVar67.bridgeObject = puVar34;
            SVar67.str = pcVar31;
            Swift::String::append(SVar55,SVar67);
            _swift_bridgeObjectRelease(SVar55.bridgeObject);
            SVar58.bridgeObject = (void *)0xea0000000000676e;
            SVar58.str = (char *)0x696e69616d657220;
            SVar68.bridgeObject = puVar34;
            SVar68.str = pcVar31;
            Swift::String::append(SVar58,SVar68);
            uVar29 = *(undefined8 *)(unaff_x22 + 0xf8);
            FUN_1000d4db8(*puVar47,uVar29,puVar2,uVar1);
            _swift_bridgeObjectRelease(uVar29);
            FUN_100004594(unaff_x22 + 0x38);
            pcVar43 = FUN_10039862c;
            goto LAB_100397b44;
          }
          FUN_1000d468c(unaff_x22 + 0x10);
          uVar29 = *(undefined8 *)(unaff_x22 + 0x28);
          uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
          lVar35 = unaff_x22 + 0x10;
          FUN_100004640(lVar35,uVar29);
          FUN_1000d4df0(0xd000000000000027,0x8000000100da4260,uVar29,uVar1,lVar35);
          FUN_100004594(unaff_x22 + 0x10);
        }
        pcVar43 = *(code **)(lVar45 + 8);
        goto LAB_100397824;
      }
      (**(code **)(lVar45 + 0x60))(pCVar26,SVar25.unknown);
      (**(code **)(lVar36 + 0x20))(pCVar12,pCVar26,SVar11.unknown);
      FUN_10039b514(pCVar12,param_4);
      SVar25.unknown = SVar11.unknown;
      lVar35 = lVar36;
      pCVar26 = pCVar12;
    }
  }
LAB_100397818:
  pcVar43 = *(code **)(lVar35 + 8);
LAB_100397824:
  (*pcVar43)(pCVar26,SVar25.unknown);
  uVar29 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1c0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar46 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar49 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar5 = *(undefined8 *)(unaff_x22 + 400);
  uVar50 = *(undefined8 *)(unaff_x22 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar29);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar46);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar49);
  _swift_task_dealloc(uVar50);
                    /* WARNING: Could not recover jumptable at 0x0001003978a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100398040 | FUN_100398040 */

void FUN_100398040(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *unaff_x22;
  lVar1 = *(long *)(lVar10 + 0x1b8);
  uVar3 = *(undefined8 *)(lVar10 + 0x1c0);
  uVar7 = *(undefined8 *)(lVar10 + 0x1b0);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x200));
  (**(code **)(lVar1 + 8))(uVar3,uVar7);
  uVar3 = *(undefined8 *)(lVar10 + 0x1d0);
  uVar4 = *(undefined8 *)(lVar10 + 0x1d8);
  uVar7 = *(undefined8 *)(lVar10 + 0x1c0);
  uVar5 = *(undefined8 *)(lVar10 + 0x1c8);
  uVar9 = *(undefined8 *)(lVar10 + 0x1a8);
  uVar2 = *(undefined8 *)(lVar10 + 0x188);
  uVar6 = *(undefined8 *)(lVar10 + 400);
  uVar11 = *(undefined8 *)(lVar10 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x1f0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x000100398104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}



/* Address: 0x100398108 | FUN_100398108 */

void FUN_100398108(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *unaff_x22;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar10 = *unaff_x22;
  lVar1 = *(long *)(lVar10 + 0x1a0);
  uVar3 = *(undefined8 *)(lVar10 + 0x1a8);
  uVar7 = *(undefined8 *)(lVar10 + 0x198);
  lVar8 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x208));
  (**(code **)(lVar1 + 8))(uVar3,uVar7);
  uVar3 = *(undefined8 *)(lVar10 + 0x1d0);
  uVar4 = *(undefined8 *)(lVar10 + 0x1d8);
  uVar7 = *(undefined8 *)(lVar10 + 0x1c0);
  uVar5 = *(undefined8 *)(lVar10 + 0x1c8);
  uVar9 = *(undefined8 *)(lVar10 + 0x1a8);
  uVar2 = *(undefined8 *)(lVar10 + 0x188);
  uVar6 = *(undefined8 *)(lVar10 + 400);
  uVar11 = *(undefined8 *)(lVar10 + 0x180);
  _swift_task_dealloc(*(undefined8 *)(lVar10 + 0x1f0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar11);
                    /* WARNING: Could not recover jumptable at 0x0001003981cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar8 + 8))();
  return;
}



/* Address: 0x1003981d0 | FUN_1003981d0 */

void FUN_1003981d0(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  long unaff_x22;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x210) = pMVar2;
  puVar3 = &DAT_100fbe4b0;
  FUN_100003a00(&DAT_100fbe4b0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10039825c,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x10039825c | FUN_10039825c */

/* WARNING: Removing unreachable block (ram,0x0001003982a8) */

void FUN_10039825c(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x1f8);
  lVar1 = *(long *)(unaff_x22 + 0x170);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x178);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x210));
  uVar2 = 2;
  if (lVar1 != lVar4 || lVar4 == 0) {
    uVar2 = 3;
  }
  FUN_10039bfb4(uVar3,uVar2,0x1f);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  FUN_1000da368(uVar2,uVar3);
  _swift_task_switch(thunk_FUN_100398580,uVar2,uVar3);
  return;
}


