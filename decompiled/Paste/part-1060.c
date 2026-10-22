/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b652f8 | FUN_100b652f8 */

void FUN_100b652f8(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  
  param_3 = param_3 + param_4;
  uVar2 = *param_2;
  uVar1 = (ulong)*(byte *)(param_2 + 1);
  FUN_100bb25d4(uVar2,uVar1,*(undefined8 *)(param_3 + -0x18),*(undefined8 *)(param_3 + -0x10),
                *(undefined8 *)(param_3 + -8));
  *param_1 = uVar2;
  param_1[1] = uVar1;
  return;
}



/* Address: 0x100b65334 | FUN_100b65334 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b65518 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100b65334(char *param_1,void *param_2)

{
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  void *pvVar9;
  void *pvVar10;
  Index IVar11;
  ulong uVar12;
  Character CVar13;
  Character CVar14;
  undefined1 auVar15 [16];
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_a0 [16];
  Character *local_90;
  ulong local_80;
  Character local_70;
  undefined1 auVar1 [12];
  
  local_80 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    local_80 = (ulong)param_2 >> 0x38 & 0xf;
  }
  uVar12 = local_80 * 4;
  IVar11.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    if ((ulong)IVar11.cmsgPointer.unknown >> 0xe == uVar12) {
LAB_100b65410:
      uVar12 = 0xb;
      if (((uint)((ulong)param_2 >> 0x3c) & (uint)(((ulong)param_1 & 0x800000000000000) == 0)) == 0)
      {
        uVar12 = 7;
      }
      SVar18.str = (char *)(uVar12 | local_80 << 0x10);
      SVar18.bridgeObject = param_1;
      pvVar9 = param_2;
      IVar11.cmsgPointer.unknown =
           (UnsafeMutablePointer)
           Swift::String::get_subscript((Range<Index>)IVar11.cmsgPointer.unknown,SVar18);
      _swift_bridgeObjectRelease(param_2);
      uVar12 = 0;
      FUN_100b670d0(0x3f40,&SUB_e200000000000000,IVar11.cmsgPointer.unknown,SVar18.str,param_1,
                    pvVar9);
      if ((uVar12 & 1) == 0) {
        if (((ulong)IVar11.cmsgPointer.unknown ^ (ulong)SVar18.str) < 0x4000) {
          _swift_bridgeObjectRelease(pvVar9);
          auVar3._8_8_ = 1;
          auVar3._0_8_ = 4;
          auVar1 = auVar3._0_12_;
        }
        else {
          CVar13 = Swift::Substring::get_subscript(IVar11,(Substring)IVar11.cmsgPointer.unknown);
          pvVar10 = CVar13.bridgeObject;
          _swift_bridgeObjectRelease(pvVar9);
          FUN_100b6730c(&DAT_101044810);
          _swift_initStaticObject();
          puVar7 = &DAT_101044818;
          FUN_100b6730c(&DAT_101044818);
          DVar8 = Swift::Dictionary::_init
                            (puVar7,PTR___type_metadata_for_Swift_Character_100eabf18,puVar7,
                             PTR___protocol_witness_table_for_Swift_Character___Swift_Hashable_in_Swift_100eabf20
                            );
          CVar14 = CVar13;
          thunk_FUN_100bad9e4(CVar13.str,pvVar10,DVar8.unknown);
          auVar1 = CVar14._0_12_;
          _swift_bridgeObjectRelease(DVar8.unknown);
          if (((uint)CVar14.bridgeObject >> 8 & 1) == 0) {
            _swift_bridgeObjectRelease(pvVar10);
          }
          else {
            FUN_100b6730c(&DAT_101044820);
            _swift_initStaticObject();
            DVar8 = Swift::Dictionary::_init
                              (DVar8.unknown,PTR___type_metadata_for_Swift_Character_100eabf18,
                               PTR___type_metadata_for_Swift_Int_100eac6f8,
                               PTR___protocol_witness_table_for_Swift_Character___Swift_Hashable_in_Swift_100eabf20
                              );
            FUN_100bad8fc(CVar13.str,pvVar10,DVar8.unknown);
            _swift_bridgeObjectRelease(pvVar10);
            _swift_bridgeObjectRelease(DVar8.unknown);
            SVar18.str = (char *)0x4;
            if (((ulong)CVar13.bridgeObject & 1) == 0) {
              SVar18.str = CVar13.str;
            }
            auVar4._8_8_ = CVar13.bridgeObject;
            auVar4._0_8_ = SVar18.str;
            auVar1 = auVar4._0_12_;
          }
        }
      }
      else {
        _swift_bridgeObjectRelease(pvVar9);
        auVar2._8_8_ = 1;
        auVar2._0_8_ = 3;
        auVar1 = auVar2._0_12_;
      }
      auVar15._8_4_ = auVar1._8_4_ & 1;
      auVar15._0_8_ = auVar1._0_8_;
      auVar15._12_4_ = 0;
      return auVar15;
    }
    SVar16.bridgeObject = param_2;
    SVar16.str = param_1;
    local_70 = Swift::String::get_subscript(IVar11,SVar16);
    pvVar9 = local_70.bridgeObject;
    local_90 = &local_70;
    uVar6 = 0;
    FUN_100b6589c(FUN_100b67628,auStack_a0,0x56524f6f4e6e72,&DAT_e700000000000000);
    _swift_bridgeObjectRelease(pvVar9);
    if ((uVar6 & 1) == 0) {
      if (uVar12 < (ulong)IVar11.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b655e8);
        (*pcVar5)();
      }
      goto LAB_100b65410;
    }
    SVar17.bridgeObject = param_2;
    SVar17.str = param_1;
    IVar11 = Swift::String::index(IVar11,SVar17);
  } while( true );
}



/* Address: 0x100b655e8 | FUN_100b655e8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b657cc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100b655e8(char *param_1,void *param_2)

{
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  ulong uVar6;
  undefined *puVar7;
  Dictionary<undefined,undefined> DVar8;
  void *pvVar9;
  void *pvVar10;
  Index IVar11;
  ulong uVar12;
  Character CVar13;
  Character CVar14;
  undefined1 auVar15 [16];
  String SVar16;
  String SVar17;
  String SVar18;
  undefined1 auStack_a0 [16];
  Character *local_90;
  ulong local_80;
  Character local_70;
  undefined1 auVar1 [12];
  
  local_80 = (ulong)param_1 & 0xffffffffffff;
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    local_80 = (ulong)param_2 >> 0x38 & 0xf;
  }
  uVar12 = local_80 * 4;
  IVar11.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    if ((ulong)IVar11.cmsgPointer.unknown >> 0xe == uVar12) {
LAB_100b656c4:
      uVar12 = 0xb;
      if (((uint)((ulong)param_2 >> 0x3c) & (uint)(((ulong)param_1 & 0x800000000000000) == 0)) == 0)
      {
        uVar12 = 7;
      }
      SVar18.str = (char *)(uVar12 | local_80 << 0x10);
      SVar18.bridgeObject = param_1;
      pvVar9 = param_2;
      IVar11.cmsgPointer.unknown =
           (UnsafeMutablePointer)
           Swift::String::get_subscript((Range<Index>)IVar11.cmsgPointer.unknown,SVar18);
      _swift_bridgeObjectRelease(param_2);
      uVar12 = 0;
      FUN_100b670d0(0x3f40,&SUB_e200000000000000,IVar11.cmsgPointer.unknown,SVar18.str,param_1,
                    pvVar9);
      if ((uVar12 & 1) == 0) {
        if (((ulong)IVar11.cmsgPointer.unknown ^ (ulong)SVar18.str) < 0x4000) {
          _swift_bridgeObjectRelease(pvVar9);
          auVar3._8_8_ = 1;
          auVar3._0_8_ = 4;
          auVar1 = auVar3._0_12_;
        }
        else {
          CVar13 = Swift::Substring::get_subscript(IVar11,(Substring)IVar11.cmsgPointer.unknown);
          pvVar10 = CVar13.bridgeObject;
          _swift_bridgeObjectRelease(pvVar9);
          FUN_100b6730c(&DAT_101044828);
          _swift_initStaticObject();
          puVar7 = &DAT_101044830;
          FUN_100b6730c(&DAT_101044830);
          DVar8 = Swift::Dictionary::_init
                            (puVar7,PTR___type_metadata_for_Swift_Character_100eabf18,puVar7,
                             PTR___protocol_witness_table_for_Swift_Character___Swift_Hashable_in_Swift_100eabf20
                            );
          CVar14 = CVar13;
          thunk_FUN_100bad9e4(CVar13.str,pvVar10,DVar8.unknown);
          auVar1 = CVar14._0_12_;
          _swift_bridgeObjectRelease(DVar8.unknown);
          if (((uint)CVar14.bridgeObject >> 8 & 1) == 0) {
            _swift_bridgeObjectRelease(pvVar10);
          }
          else {
            FUN_100b6730c(&DAT_101044820);
            _swift_initStaticObject();
            DVar8 = Swift::Dictionary::_init
                              (DVar8.unknown,PTR___type_metadata_for_Swift_Character_100eabf18,
                               PTR___type_metadata_for_Swift_Int_100eac6f8,
                               PTR___protocol_witness_table_for_Swift_Character___Swift_Hashable_in_Swift_100eabf20
                              );
            FUN_100bad8fc(CVar13.str,pvVar10,DVar8.unknown);
            _swift_bridgeObjectRelease(pvVar10);
            _swift_bridgeObjectRelease(DVar8.unknown);
            SVar18.str = (char *)0x4;
            if (((ulong)CVar13.bridgeObject & 1) == 0) {
              SVar18.str = CVar13.str;
            }
            auVar4._8_8_ = CVar13.bridgeObject;
            auVar4._0_8_ = SVar18.str;
            auVar1 = auVar4._0_12_;
          }
        }
      }
      else {
        _swift_bridgeObjectRelease(pvVar9);
        auVar2._8_8_ = 1;
        auVar2._0_8_ = 3;
        auVar1 = auVar2._0_12_;
      }
      auVar15._8_4_ = auVar1._8_4_ & 1;
      auVar15._0_8_ = auVar1._0_8_;
      auVar15._12_4_ = 0;
      return auVar15;
    }
    SVar16.bridgeObject = param_2;
    SVar16.str = param_1;
    local_70 = Swift::String::get_subscript(IVar11,SVar16);
    pvVar9 = local_70.bridgeObject;
    local_90 = &local_70;
    uVar6 = 0;
    FUN_100b6589c(FUN_100b677ec,auStack_a0,0x56524f6f4e6e72,&DAT_e700000000000000);
    _swift_bridgeObjectRelease(pvVar9);
    if ((uVar6 & 1) == 0) {
      if (uVar12 < (ulong)IVar11.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100b6589c);
        (*pcVar5)();
      }
      goto LAB_100b656c4;
    }
    SVar17.bridgeObject = param_2;
    SVar17.str = param_1;
    IVar11 = Swift::String::index(IVar11,SVar17);
  } while( true );
}



/* Address: 0x100b6589c | FUN_100b6589c */

bool FUN_100b6589c(code *param_1,undefined *param_2,undefined8 param_3,undefined *param_4)

{
  Iterator IVar1;
  ulong uVar2;
  undefined *puVar3;
  long unaff_x21;
  
  IVar1.unknown = param_4;
  _swift_bridgeObjectRetain();
  while (puVar3 = param_2, Swift::String::Iterator::_next(IVar1), puVar3 != (undefined *)0x0) {
    uVar2 = 0;
    param_2 = puVar3;
    (*param_1)();
    IVar1.unknown = puVar3;
    _swift_bridgeObjectRelease();
    if ((unaff_x21 != 0) || ((uVar2 & 1) != 0)) break;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3 != (undefined *)0x0;
}



/* Address: 0x100b65948 | FUN_100b65948 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b65948(long param_1)

{
  long lVar1;
  ID IVar2;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType();
  lVar1 = SentryOptions::swiftAsyncStacktraces;
  _swift_beginAccess(param_1 + SentryOptions::swiftAsyncStacktraces,auStack_58,0,0);
  if (*(char *)(param_1 + lVar1) == '\x01') {
    FUN_100b2b92c(1);
    IVar2 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff98,"init");
  }
  else {
    _swift_deallocPartialClassInstance();
    IVar2 = 0;
  }
  return IVar2;
}



/* Address: 0x100b65a1c | FUN_100b65a1c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b65a1c(long param_1,undefined *param_2,char *param_3,void *param_4)

{
  long lVar1;
  ulong uVar2;
  long lVar3;
  ID IVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  ulong unaff_x20;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
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
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 uStack_70;
  
  _Var5.unknown = param_2;
  _swift_getObjectType();
  uVar2 = unaff_x20;
  FUN_100b8cd10();
  lVar3 = SentryOptions::enableAutoPerformanceTracing;
  if ((uVar2 & 1) == 0) {
    FUN_100b84dac(0);
    local_78 = 0;
    uStack_70 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x3c,_Var5);
    SVar11.bridgeObject = (void *)0x8000000100dc7250;
    SVar11.str = (char *)0xd000000000000014;
    SVar20.bridgeObject = param_4;
    SVar20.str = param_3;
    Swift::String::append(SVar11,SVar20);
    SVar12.bridgeObject = (void *)0x8000000100dc7090;
    SVar12.str = (char *)0xd00000000000001f;
    SVar21.bridgeObject = param_4;
    SVar21.str = param_3;
    Swift::String::append(SVar12,SVar21);
    SVar13.bridgeObject = (void *)0x8000000100dc7410;
    SVar13.str = (char *)0xd000000000000026;
    SVar22.bridgeObject = param_4;
    SVar22.str = param_3;
    Swift::String::append(SVar13,SVar22);
    uVar9 = 0xd;
    uVar6 = local_78;
    uVar10 = uStack_70;
  }
  else {
    _Var5.unknown = (undefined *)&local_78;
    pcVar7 = (char *)0x0;
    pvVar8 = (void *)0x0;
    _swift_beginAccess(param_1 + SentryOptions::enableAutoPerformanceTracing);
    lVar1 = SentryOptions::enableFileIOTracing;
    if ((*(byte *)(param_1 + lVar3) & 1) == 0) {
      FUN_100b84dac(0);
      local_90 = 0;
      uStack_88 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x48,_Var5);
      SVar14.bridgeObject = (void *)0x8000000100dc7250;
      SVar14.str = (char *)0xd000000000000014;
      SVar23.bridgeObject = pvVar8;
      SVar23.str = pcVar7;
      Swift::String::append(SVar14,SVar23);
      SVar15.bridgeObject = (void *)0x8000000100dc7090;
      SVar15.str = (char *)0xd00000000000001f;
      SVar24.bridgeObject = pvVar8;
      SVar24.str = pcVar7;
      Swift::String::append(SVar15,SVar24);
      SVar16.bridgeObject = (void *)0x8000000100dc74c0;
      SVar16.str = &DAT_d000000000000032;
      SVar25.bridgeObject = pvVar8;
      SVar25.str = pcVar7;
      Swift::String::append(SVar16,SVar25);
      uVar9 = 0x13;
      uVar6 = local_90;
      uVar10 = uStack_88;
    }
    else {
      lVar3 = param_1 + SentryOptions::enableFileIOTracing;
      _Var5.unknown = (undefined *)&local_90;
      pcVar7 = (char *)0x0;
      pvVar8 = (void *)0x0;
      _swift_beginAccess();
      if ((*(byte *)(param_1 + lVar1) & 1) != 0) {
        FUN_100b76208();
        *(long *)(unaff_x20 + DAT_101047980) = lVar3;
        *(undefined8 *)(unaff_x20 + DAT_101047988) =
             *(undefined8 *)(param_2 + _TtC6Sentry25SentryDependencyContainer::nsDataSwizzling);
        *(undefined8 *)(unaff_x20 + DAT_101047990) =
             *(undefined8 *)
              (param_2 + _TtC6Sentry25SentryDependencyContainer::nsFileManagerSwizzling);
        IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff50,"init");
        lVar3 = DAT_101047980;
        _objc_msgSend(*(ID *)(*(long *)(IVar4 + DAT_101047980) +
                             _TtC6Sentry19SentryFileIOTracker::helper),"enable");
        FUN_100be6fc0(param_1,*(undefined8 *)(IVar4 + lVar3));
        FUN_100b7a0e4(param_1,*(undefined8 *)(IVar4 + lVar3));
        return IVar4;
      }
      FUN_100b84dac(0);
      Swift::_StringGuts::grow(0x3f,_Var5);
      SVar17.bridgeObject = (void *)0x8000000100dc7250;
      SVar17.str = (char *)0xd000000000000014;
      SVar26.bridgeObject = pvVar8;
      SVar26.str = pcVar7;
      Swift::String::append(SVar17,SVar26);
      SVar18.bridgeObject = (void *)0x8000000100dc7090;
      SVar18.str = (char *)0xd00000000000001f;
      SVar27.bridgeObject = pvVar8;
      SVar27.str = pcVar7;
      Swift::String::append(SVar18,SVar27);
      SVar19.bridgeObject = (void *)0x8000000100dc7500;
      SVar19.str = (char *)0xd000000000000029;
      SVar28.bridgeObject = pvVar8;
      SVar28.str = pcVar7;
      Swift::String::append(SVar19,SVar28);
      uVar9 = 0x19;
      uVar6 = 0;
      uVar10 = 0xe000000000000000;
    }
  }
  FUN_100b84df8(1,uVar6,uVar10,0xd00000000000007c,0x8000000100dc7440,uVar9);
  _swift_bridgeObjectRelease(uVar10);
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Address: 0x100b65e90 | FUN_100b65e90 */

void FUN_100b65e90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  puVar2 = &DAT_100f365e8;
  _swift_allocObject(&DAT_100f365e8,0x58,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  uVar4 = *param_4;
  uVar6 = param_4[3];
  uVar5 = param_4[2];
  *(undefined8 *)(puVar2 + 0x28) = param_4[1];
  *(undefined8 *)(puVar2 + 0x20) = uVar4;
  *(undefined8 *)(puVar2 + 0x38) = uVar6;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined8 *)(puVar2 + 0x40) = param_4[4];
  *(undefined8 *)(puVar2 + 0x48) = param_5;
  *(undefined8 *)(puVar2 + 0x50) = param_6;
  local_50 = FUN_100b67560;
  local_70 = PTR___NSConcreteStackBlock_100ea82a0;
  local_68 = 0x42000000;
  local_60 = FUN_100b66184;
  puStack_58 = &DAT_100f36600;
  local_48 = puVar2;
  pvVar3 = __Block_copy(&local_70);
  puVar2 = &DAT_101044800;
  FUN_100b6730c();
  puVar1 = local_48;
  param_1[3] = puVar2;
  *param_1 = pvVar3;
  _swift_retain(param_3);
  FUN_100b674b4(param_4);
  _swift_retain(param_6);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100b65f80 | FUN_100b65f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b65f80(long param_1,code *param_2,undefined8 param_3,undefined8 *param_4,code *param_5)

{
  undefined *puVar1;
  _StringGuts _Var2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  
  puVar1 = &DAT_100f36638;
  pcVar6 = (char *)0x7;
  puVar7 = param_4;
  _swift_allocObject(&DAT_100f36638,0x48);
  *(code **)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  uVar8 = *param_4;
  uVar10 = param_4[3];
  uVar9 = param_4[2];
  *(undefined8 *)(puVar1 + 0x28) = param_4[1];
  *(undefined8 *)(puVar1 + 0x20) = uVar8;
  *(undefined8 *)(puVar1 + 0x38) = uVar10;
  *(undefined8 *)(puVar1 + 0x30) = uVar9;
  *(undefined8 *)(puVar1 + 0x40) = param_4[4];
  FUN_100b674b4(param_4);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(param_1);
  _Var2.unknown = &_OBJC_CLASS___NSURLSessionTask;
  lVar3 = param_1;
  _swift_dynamicCastObjCClass();
  if (lVar3 == 0) {
    _swift_unknownObjectRelease(param_1);
    FUN_100b84dac(0);
    Swift::_StringGuts::grow(0x22,_Var2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    uVar8 = *param_4;
    _NSStringFromSelector(uVar8);
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    SVar12.bridgeObject = puVar7;
    SVar12.str = pcVar6;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
    pcVar5 = (code *)0x8000000100dc7840;
    FUN_100b84df8(4,0xd000000000000020,0x8000000100dc7840,0xd000000000000062,0x8000000100dc77d0,0x47
                 );
    _swift_bridgeObjectRelease();
    (*param_2)();
    (*pcVar5)(param_1,uVar8);
  }
  else {
    puVar4 = &DAT_100f36660;
    _swift_allocObject(&DAT_100f36660,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_100b67594;
    *(undefined **)(puVar4 + 0x18) = puVar1;
    *(long *)(puVar4 + 0x20) = param_1;
    _swift_unknownObjectRetain(param_1);
    _swift_retain(puVar1);
    (*param_5)(lVar3,FUN_1000762a4,puVar4);
    _swift_release(puVar1);
    _swift_unknownObjectRelease(param_1);
    puVar1 = puVar4;
  }
  _swift_release(puVar1);
  return;
}



/* Address: 0x100b66184 | FUN_100b66184 */

void FUN_100b66184(long param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  _swift_retain(uVar2);
  _swift_unknownObjectRetain(param_2);
  (*pcVar1)();
  _swift_release(uVar2);
  _swift_unknownObjectRelease(param_2);
  return;
}



/* Address: 0x100b661cc | FUN_100b661cc */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16]
FUN_100b661cc(undefined *param_1,undefined8 *param_2,undefined8 param_3,code *param_4,code *param_5)

{
  undefined *puVar1;
  byte bVar2;
  undefined *puVar3;
  _StringGuts _Var4;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> cString_00;
  undefined *puVar5;
  undefined *puVar7;
  code *pcVar8;
  undefined8 extraout_x8;
  undefined8 extraout_x8_00;
  long *plVar9;
  ulong extraout_x9;
  undefined *extraout_x9_00;
  byte *pbVar10;
  long lVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  char *pcVar15;
  undefined *puVar16;
  ulong uVar17;
  String SVar18;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  String SVar22;
  undefined *local_70;
  undefined8 local_68;
  undefined *puVar6;
  
  _Var4.unknown = (undefined *)0x0;
  pcVar8 = param_4;
  FUN_100b673ec(0,&DAT_1010447e0,&PTR__OBJC_CLASS___NSURLSessionTask_100f8e178);
  puVar16 = param_1;
  _swift_dynamicCastMetatype();
  if (puVar16 == (undefined *)0x0) {
    FUN_100b678d8();
    Swift::_StringGuts::grow(0x2d,_Var4);
    _swift_bridgeObjectRelease(local_68);
    FUN_100b67900("Swizzle receiver mismatch for ");
    local_70 = (undefined *)(extraout_x9 | 4);
    _swift_getObjCClassFromMetadata(param_1);
    _NSStringFromClass();
    FUN_100b678b0();
    FUN_100b67870();
    FUN_100b67860();
    FUN_100b678c0();
    FUN_100b67880();
    _swift_getObjCClassFromMetadata(param_2[1]);
    _NSStringFromClass();
    local_68 = extraout_x8;
LAB_100b66454:
    FUN_100b678b0();
    FUN_100b67870();
    FUN_100b67860();
  }
  else {
    _swift_getObjCClassFromMetadata();
    puVar14 = (undefined *)*param_2;
    puVar16 = param_1;
    _Var4.unknown = puVar14;
    _class_getInstanceMethod();
    if (puVar16 == (undefined *)0x0) {
      FUN_100b678d8();
      Swift::_StringGuts::grow(0x1f,_Var4);
      _swift_bridgeObjectRelease(local_68);
      FUN_100b67900("Swizzle method not found: ");
      _NSStringFromClass(param_1);
      FUN_100b678b0();
      FUN_100b67870();
      FUN_100b67860();
      FUN_100b678c0();
      FUN_100b678c8();
      _NSStringFromSelector(puVar14);
      local_70 = extraout_x9_00;
      local_68 = extraout_x8_00;
      goto LAB_100b66454;
    }
    cString.unknown = puVar16;
    _method_copyReturnType();
    SVar18 = Swift::String::init(cString);
    puVar6 = SVar18.bridgeObject;
    _free(cString.unknown);
    FUN_100b678e8();
    puVar5 = puVar16;
    _Var4.unknown = puVar6;
    _method_getNumberOfArguments();
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((int)puVar5 != 0) {
      puVar13 = (undefined *)((ulong)puVar5 & 0xffffffff);
      (*param_4)(0,puVar13,0);
      puVar12 = (undefined *)0x0;
      do {
        cString_00.unknown = puVar16;
        puVar7 = puVar12;
        _method_copyArgumentType();
        if (cString_00.unknown != (undefined *)0x0) {
          SVar18 = Swift::String::init(cString_00);
          puVar7 = SVar18.bridgeObject;
          _free(cString_00.unknown);
        }
        FUN_100b678e8();
        uVar17 = *(ulong *)(puVar3 + 0x10);
        puVar1 = (undefined *)(uVar17 + 1);
        puVar5 = cString_00.unknown;
        _Var4.unknown = puVar7;
        if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar17) {
          puVar5 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
          _Var4.unknown = puVar1;
          (*param_4)(puVar5,puVar1,1);
        }
        *(undefined **)(puVar3 + 0x10) = puVar1;
        *(undefined **)(puVar3 + uVar17 * 0x10 + 0x20) = cString_00.unknown;
        puVar3[uVar17 * 0x10 + 0x28] = (byte)puVar7 & 1;
        puVar12 = puVar12 + 1;
        local_70 = puVar3;
      } while (puVar13 != puVar12);
    }
    puVar16 = (undefined *)param_2[2];
    uVar17 = (ulong)*(byte *)(param_2 + 3);
    pcVar15 = (char *)param_2[4];
    if (*(byte *)(param_2 + 3) == 1) {
                    /* WARNING: Could not recover jumptable at 0x000100b663e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)*(int *)(&DAT_100b66680 + (long)puVar16 * 4) + 0x100b663dc))();
      auVar19._8_8_ = _Var4.unknown;
      auVar19._0_8_ = puVar5;
      return auVar19;
    }
    if (((((ulong)puVar6 & 1) == 0) && (puVar16 == cString.unknown)) &&
       (lVar11 = *(long *)(pcVar15 + 0x10), lVar11 == *(long *)(puVar3 + 0x10))) {
      if (lVar11 == 0) {
LAB_100b66518:
        _swift_bridgeObjectRelease(puVar3);
        local_70 = (undefined *)0x0;
        local_68 = 0;
        goto LAB_100b66660;
      }
      plVar9 = (long *)(pcVar15 + 0x20);
      pbVar10 = puVar3 + 0x28;
      while( true ) {
        lVar11 = lVar11 + -1;
        bVar2 = *pbVar10;
        if ((char)plVar9[1] == '\x01') {
                    /* WARNING: Could not recover jumptable at 0x000100b664cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)*(int *)(&DAT_100b66694 + *plVar9 * 4) + 0x100b664c0))();
          auVar20._8_8_ = _Var4.unknown;
          auVar20._0_8_ = puVar5;
          return auVar20;
        }
        if (*plVar9 != *(long *)(pbVar10 + -8)) {
          bVar2 = 1;
        }
        if ((bVar2 & 1) != 0) break;
        if (lVar11 == 0) goto LAB_100b66518;
        pbVar10 = pbVar10 + 0x10;
        plVar9 = plVar9 + 2;
      }
    }
    FUN_100b678d8();
    Swift::_StringGuts::grow(0x3c,_Var4);
    FUN_100b678b8(0xd00000000000001f,0x8000000100dc7930);
    _NSStringFromClass(param_1);
    FUN_100b678b0();
    FUN_100b67870();
    FUN_100b67860();
    FUN_100b678c0();
    FUN_100b678c8();
    _NSStringFromSelector(puVar14);
    FUN_100b678b0();
    FUN_100b67870();
    FUN_100b67860();
    FUN_100b678c0();
    FUN_100b67880();
    (*param_5)(puVar16,uVar17);
    FUN_100b678b8();
    _swift_bridgeObjectRelease(uVar17);
    SVar18.bridgeObject = (void *)0xe900000000000020;
    SVar18.str = (char *)0x6c6175746361202c;
    SVar22.bridgeObject = pcVar8;
    SVar22.str = pcVar15;
    Swift::String::append(SVar18,SVar22);
    (*param_5)(cString.unknown,(uint)puVar6 & 1,puVar3);
    FUN_100b678b8();
    _swift_bridgeObjectRelease(puVar3);
  }
  _swift_bridgeObjectRelease();
LAB_100b66660:
  auVar21._8_8_ = local_68;
  auVar21._0_8_ = local_70;
  return auVar21;
}



/* Address: 0x100b666a8 | FUN_100b666a8 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100b666a8(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  bool bVar3;
  ID IVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  char *pcVar7;
  void *pvVar8;
  undefined8 uVar9;
  long unaff_x20;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [24];
  
  _swift_getObjectType();
  lVar2 = SentryOptions::enableAutoSessionTracking;
  _Var5.unknown = auStack_78;
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(param_1 + SentryOptions::enableAutoSessionTracking);
  lVar1 = _TtC6Sentry25SentryDependencyContainer::processInfoWrapper;
  if (*(char *)(param_1 + lVar2) == '\x01') {
    _swift_beginAccess(param_2 + _TtC6Sentry25SentryDependencyContainer::processInfoWrapper,
                       &local_90,0,0);
    _objc_msgSend(*(ID *)(param_2 + lVar1),"processDirectoryPath");
    SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pvVar8 = SVar11.bridgeObject;
    _Var5.unknown = (undefined *)0x8000000100dc7a30;
    SVar12.bridgeObject = (void *)0x8000000100dc7a30;
    SVar12.str = (char *)0xd000000000000010;
    bVar3 = Swift::String::hasSuffix(SVar12,SVar11);
    _swift_bridgeObjectRelease(pvVar8);
    if (!bVar3) {
      FUN_100b7570c();
      *(long *)(unaff_x20 + DAT_1010489a0) = param_1;
      _swift_retain();
      FUN_100b7fd5c();
      _swift_release(param_1);
      IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffff60,"init");
      return IVar4;
    }
    FUN_100b84dac(0);
    Swift::_StringGuts::grow(0x48,_Var5);
    SVar13.bridgeObject = (void *)0x8000000100dc7250;
    SVar13.str = (char *)0xd000000000000014;
    Swift::String::append(SVar13,SVar11);
    SVar14.bridgeObject = (void *)0x8000000100dc6f90;
    SVar14.str = (char *)0xd000000000000024;
    Swift::String::append(SVar14,SVar11);
    SVar15.bridgeObject = (void *)0x8000000100dc7a50;
    SVar15.str = &DAT_d000000000000032;
    Swift::String::append(SVar15,SVar11);
    uVar9 = 0x12;
    uVar6 = 0;
    uVar10 = 0xe000000000000000;
  }
  else {
    FUN_100b84dac(0);
    local_90 = 0;
    uStack_88 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x45,_Var5);
    SVar11.bridgeObject = (void *)0x8000000100dc7250;
    SVar11.str = (char *)0xd000000000000014;
    SVar18.bridgeObject = pvVar8;
    SVar18.str = pcVar7;
    Swift::String::append(SVar11,SVar18);
    SVar16.bridgeObject = (void *)0x8000000100dc6f90;
    SVar16.str = (char *)0xd000000000000024;
    SVar19.bridgeObject = pvVar8;
    SVar19.str = pcVar7;
    Swift::String::append(SVar16,SVar19);
    SVar17.bridgeObject = (void *)0x8000000100dc7980;
    SVar17.str = (char *)0xd00000000000002f;
    SVar20.bridgeObject = pvVar8;
    SVar20.str = pcVar7;
    Swift::String::append(SVar17,SVar20);
    uVar9 = 0xd;
    uVar6 = local_90;
    uVar10 = uStack_88;
  }
  FUN_100b84df8(1,uVar6,uVar10,0xd00000000000007a,0x8000000100dc79b0,uVar9);
  _swift_bridgeObjectRelease(uVar10);
  _swift_deallocPartialClassInstance();
  return 0;
}



/* Address: 0x100b669b8 | FUN_100b669b8 */

void FUN_100b669b8(undefined8 *param_1,undefined8 *param_2)

{
  thunk_FUN_100324b84(*param_1,*param_2);
  return;
}



/* Address: 0x100b669c4 | FUN_100b669c4 */

void FUN_100b669c4(void)

{
  undefined8 *unaff_x20;
  
  FUN_100b66ac4(*unaff_x20,PTR_get_hashValue_100eac1e0);
  return;
}



/* Address: 0x100b669e4 | FUN_100b669e4 */

void FUN_100b669e4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b669ec(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b669ec | FUN_100b669ec */

void FUN_100b669ec(Hasher param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::String::hash(param_1,SVar1);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100b66a2c | FUN_100b66a2c */

void FUN_100b66a2c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b66a34(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b66a34 | FUN_100b66a34 */

__int64 FUN_100b66a34(__int64 param_1)

{
  Hasher into;
  __int64 _Var1;
  String SVar2;
  undefined1 auStack_78 [72];
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  Swift::Hasher::init(param_1);
  into.unknown = auStack_78;
  Swift::String::hash(into,SVar2);
  _Var1 = Swift::Hasher::_finalize(into);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return _Var1;
}



/* Address: 0x100b66aa4 | FUN_100b66aa4 */

void FUN_100b66aa4(void)

{
  undefined8 *unaff_x20;
  
  FUN_100b66ac4(*unaff_x20,PTR__bridgeToObjectiveC_100ea77c8);
  return;
}



/* Address: 0x100b66ac4 | FUN_100b66ac4 */

void FUN_100b66ac4(undefined8 param_1,code *param_2)

{
  char *pcVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = SVar2.str;
  (*param_2)(pcVar1);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  FUN_100b56e88(pcVar1);
  return;
}



/* Address: 0x100b66af8 | thunk_FUN_100b66afc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b66b38) */

void thunk_FUN_100b66afc(NSString *param_1,undefined8 *param_2)

{
  (extension_Foundation)::Swift::String::__forceBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return;
}



/* Address: 0x100b66afc | FUN_100b66afc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b66b38) */

void FUN_100b66afc(NSString *param_1,undefined8 *param_2)

{
  (extension_Foundation)::Swift::String::__forceBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return;
}



/* Address: 0x100b66b80 | thunk_FUN_100b66b84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b66bc4) */

bool thunk_FUN_100b66b84(NSString *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = (extension_Foundation)::Swift::String::__conditionallyBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return bVar1;
}



/* Address: 0x100b66b84 | FUN_100b66b84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100b66bc4) */

bool FUN_100b66b84(NSString *param_1,undefined8 *param_2)

{
  bool bVar1;
  
  bVar1 = (extension_Foundation)::Swift::String::__conditionallyBridgeFromObjectiveC(param_1);
  *param_2 = 0;
  return bVar1;
}



/* Address: 0x100b66c10 | FUN_100b66c10 */

void FUN_100b66c10(undefined8 *param_1,undefined8 param_2)

{
  FUN_100b66c34();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b66c34 | FUN_100b66c34 */

NSString * FUN_100b66c34(void)

{
  NSString *pNVar1;
  String SVar2;
  
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  return pNVar1;
}



/* Address: 0x100b66c68 | FUN_100b66c68 */

void FUN_100b66c68(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1005dd3c8();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b66c98 | FUN_100b66c98 */

void FUN_100b66c98(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *unaff_x20;
  FUN_100004520();
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b66cc0 | FUN_100b66cc0 */

void FUN_100b66cc0(undefined8 *param_1,undefined8 param_2)

{
  FUN_100002c1c();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b66ce4 | FUN_100b66ce4 */

void FUN_100b66ce4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1006905bc(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b66d10 | FUN_100b66d10 */

void FUN_100b66d10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1006905d4(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b66d3c | FUN_100b66d3c */

void FUN_100b66d3c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_100690274(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b66d68 | FUN_100b66d68 */

void FUN_100b66d68(undefined8 param_1,undefined8 *param_2)

{
  FUN_100b67258(param_1,*param_2);
  return;
}



/* Address: 0x100b66d70 | FUN_100b66d70 */

void FUN_100b66d70(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b672c4();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b66da0 | FUN_100b66da0 */

void FUN_100b66da0(undefined8 *param_1,undefined8 *param_2,byte param_3)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b672e8();
  *param_1 = uVar1;
  *(byte *)(param_1 + 1) = param_3 & 1;
  return;
}



/* Address: 0x100b66dd0 | FUN_100b66dd0 */

void FUN_100b66dd0(undefined8 *param_1)

{
  FUN_1006905c4(*param_1);
  return;
}



/* Address: 0x100b66dd8 | FUN_100b66dd8 */

void FUN_100b66dd8(undefined8 *param_1)

{
  FUN_1006905dc(*param_1);
  return;
}



/* Address: 0x100b66de0 | FUN_100b66de0 */

void FUN_100b66de0(undefined8 *param_1)

{
  FUN_1006905ec(*param_1);
  return;
}



/* Address: 0x100b66de8 | FUN_100b66de8 */

void FUN_100b66de8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = *param_2;
  FUN_1006905fc(uVar1,*unaff_x20);
  *param_1 = uVar1;
  return;
}



/* Address: 0x100b66e14 | FUN_100b66e14 */

void FUN_100b66e14(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b672ac(*param_1,*unaff_x20);
  return;
}



/* Address: 0x100b66e20 | FUN_100b66e20 */

void FUN_100b66e20(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b67300(*param_1,*unaff_x20);
  return;
}



/* Address: 0x100b66e2c | FUN_100b66e2c */

void FUN_100b66e2c(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100b672b8(*param_1,*unaff_x20);
  return;
}



/* Address: 0x100b66e38 | FUN_100b66e38 */

void FUN_100b66e38(void)

{
  undefined8 *unaff_x20;
  
  FUN_1006903d0(*unaff_x20);
  return;
}



/* Address: 0x100b66e40 | FUN_100b66e40 */

void FUN_100b66e40(undefined8 *param_1)

{
  FUN_100690604(*param_1);
  return;
}



/* Address: 0x100b66e48 | FUN_100b66e48 */

void FUN_100b66e48(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100beb41c(*param_1,*param_2);
  return;
}



/* Address: 0x100b66e54 | FUN_100b66e54 */

void FUN_100b66e54(undefined8 *param_1,undefined8 param_2)

{
  FUN_100b67778();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b66e78 | FUN_100b66e78 */

void FUN_100b66e78(void)

{
  FUN_100b66ed0(&DAT_1010446f8,FUN_100b65014,&TargetProtocolConformanceDescriptor_100c987c8);
  return;
}



/* Address: 0x100b66ea4 | FUN_100b66ea4 */

void FUN_100b66ea4(void)

{
  FUN_100b66ed0(&DAT_101044700,FUN_100b65014,&TargetProtocolConformanceDescriptor_100c98794);
  return;
}



/* Address: 0x100b66ed0 | FUN_100b66ed0 */

void FUN_100b66ed0(long *param_1,code *param_2)

{
  long lVar1;
  
  if (*param_1 == 0) {
    lVar1 = 0xff;
    (*param_2)();
    FUN_100b678f4();
    *param_1 = lVar1;
  }
  FUN_100b56e88();
  return;
}



/* Address: 0x100b66f04 | FUN_100b66f04 */

void FUN_100b66f04(String *param_1)

{
  String SVar1;
  
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  *param_1 = SVar1;
  return;
}



/* Address: 0x100b66f2c | /System/Library/Frameworks/Foundation.framework/Versions/C/Foundation::(extension_Foundation)::Swift::String::$_unconditionallyBridgeFromObjectiveC */

String (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC(void)

{
  char *in_x0;
  void *in_x1;
  String SVar1;
  
                    /* WARNING: Could not recover jumptable at 0x000100bf7bec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___unconditionallyBridgeFromObjectiveC_100ea77e0)();
  SVar1.bridgeObject = in_x1;
  SVar1.str = in_x0;
  return SVar1;
}



/* Address: 0x100b66f30 | FUN_100b66f30 */

void FUN_100b66f30(void)

{
  FUN_100b66ed0(&DAT_101044730,FUN_100b65000,&TargetProtocolConformanceDescriptor_100c98b08);
  FUN_100b66ed0(&DAT_101044738,FUN_100b65000,&TargetProtocolConformanceDescriptor_100c989a0);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x100b66fb4 | FUN_100b66fb4 */

void FUN_100b66fb4(void)

{
  FUN_100b66ed0(&DAT_101044708,FUN_100b65014,&TargetProtocolConformanceDescriptor_100c988c0);
  return;
}



/* Address: 0x100b66fe0 | FUN_100b66fe0 */

void FUN_100b66fe0(void)

{
  FUN_100b66ed0(&DAT_101044710,FUN_100b65014,&TargetProtocolConformanceDescriptor_100c987f4);
  return;
}



/* Address: 0x100b6700c | FUN_100b6700c */

void FUN_100b6700c(void)

{
  FUN_100b66ed0(&DAT_101044718,FUN_100b65000,&TargetProtocolConformanceDescriptor_100c98964);
  return;
}



/* Address: 0x100b67038 | FUN_100b67038 */

void FUN_100b67038(void)

{
  FUN_100b66ed0(&DAT_101044720,FUN_100b65000,&TargetProtocolConformanceDescriptor_100c98938);
  return;
}



/* Address: 0x100b67064 | FUN_100b67064 */

void FUN_100b67064(void)

{
  FUN_100b66ed0(&DAT_101044728,FUN_100b65000,&TargetProtocolConformanceDescriptor_100c989d4);
  return;
}



/* Address: 0x100b67090 | FUN_100b67090 */

bool FUN_100b67090(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined *param_4)

{
  bool bVar1;
  
  if (param_1.unknown == param_3 && param_2.unknown == param_4) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
  }
  return bVar1;
}



/* Address: 0x100b670d0 | FUN_100b670d0 */

bool FUN_100b670d0(undefined8 param_1,undefined *param_2,Substring param_3,ulong param_4,
                  undefined8 param_5,undefined *param_6)

{
  Character CVar1;
  bool bVar2;
  Iterator IVar3;
  Index after;
  Index IVar4;
  _StringGuts _Var5;
  _StringGuts _Var6;
  Substring SVar7;
  Character CVar8;
  
  IVar3.unknown = param_2;
  _Var5.unknown = param_2;
  _swift_bridgeObjectRetain();
  if (param_4 >> 0xe != (ulong)param_3.unknown >> 0xe) {
    _swift_bridgeObjectRetain(param_6);
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_3.unknown;
    do {
      CVar8 = Swift::Substring::get_subscript(after,param_3);
      _Var6.unknown = CVar8.bridgeObject;
      SVar7.unknown = param_3.unknown;
      after = Swift::Substring::index(after,param_3);
      IVar4 = after;
      Swift::String::Iterator::_next((Iterator)after.cmsgPointer.unknown);
      CVar1.bridgeObject = SVar7.unknown;
      CVar1.str = (char *)IVar4.cmsgPointer.unknown;
      if (SVar7.unknown == (undefined *)0x0) {
        _swift_bridgeObjectRelease(param_6);
        _swift_bridgeObjectRelease(_Var6.unknown);
        bVar2 = true;
        goto LAB_100b6722c;
      }
      if (CVar8 == CVar1) {
        _Var5.unknown = SVar7.unknown;
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(SVar7.unknown);
      }
      else {
        _Var5.unknown = _Var6.unknown;
        bVar2 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)CVar8.str,_Var6,
                           (_StringComparisonResult)SUB81(IVar4.cmsgPointer.unknown,0));
        _swift_bridgeObjectRelease(_Var6.unknown);
        _swift_bridgeObjectRelease(SVar7.unknown);
        if (!bVar2) {
          _swift_bridgeObjectRelease(param_6);
          bVar2 = false;
          goto LAB_100b6722c;
        }
      }
    } while (param_4 >> 0xe != (ulong)after.cmsgPointer.unknown >> 0xe);
    _swift_bridgeObjectRelease();
    IVar3.unknown = param_6;
  }
  Swift::String::Iterator::_next(IVar3);
  _swift_bridgeObjectRelease(param_2);
  bVar2 = _Var5.unknown == (undefined *)0x0;
  param_2 = _Var5.unknown;
LAB_100b6722c:
  _swift_bridgeObjectRelease(param_2);
  return bVar2;
}



/* Address: 0x100b67258 | FUN_100b67258 */

bool FUN_100b67258(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20 & param_2;
  if (uVar1 != param_2) {
    *unaff_x20 = *unaff_x20 | param_2;
  }
  *param_1 = param_2;
  return uVar1 != param_2;
}



/* Address: 0x100b67284 | FUN_100b67284 */

uint FUN_100b67284(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  FUN_100b67090(uVar1,param_1[1],*param_2,param_2[1]);
  return (uint)uVar1 & 1;
}



/* Address: 0x100b672ac | FUN_100b672ac */

bool FUN_100b672ac(ulong param_1,ulong param_2)

{
  return (param_2 & (param_1 ^ 0xffffffffffffffff)) == 0;
}



/* Address: 0x100b672b8 | FUN_100b672b8 */

bool FUN_100b672b8(ulong param_1,ulong param_2)

{
  return (param_1 & (param_2 ^ 0xffffffffffffffff)) == 0;
}



/* Address: 0x100b672c4 | FUN_100b672c4 */

void FUN_100b672c4(ulong param_1)

{
  ulong *unaff_x20;
  
  if ((*unaff_x20 & param_1) != 0) {
    *unaff_x20 = *unaff_x20 & (param_1 ^ 0xffffffffffffffff);
  }
  return;
}



/* Address: 0x100b672e8 | FUN_100b672e8 */

undefined1  [16] FUN_100b672e8(ulong param_1)

{
  ulong uVar1;
  ulong *unaff_x20;
  undefined1 auVar2 [16];
  
  uVar1 = *unaff_x20;
  *unaff_x20 = uVar1 | param_1;
  uVar1 = uVar1 & param_1;
  auVar2[8] = uVar1 == 0;
  auVar2._0_8_ = uVar1;
  auVar2._9_7_ = 0;
  return auVar2;
}


