/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10047189c | FUN_10047189c */

void FUN_10047189c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  ulong uVar5;
  long unaff_x22;
  
  lVar2 = _TtC8PasteMCP9MCPServer::analytics;
  lVar4 = *(long *)(unaff_x22 + 0x98);
  _swift_beginAccess(lVar4 + _TtC8PasteMCP9MCPServer::analytics,unaff_x22 + 0x60,0,0);
  FUN_100011090(lVar4 + lVar2,unaff_x22 + 0x10,&DAT_100fc85b8,&DAT_100c4d0b8);
  if (*(long *)(unaff_x22 + 0x28) == 0) {
    FUN_100005808(unaff_x22 + 0x10,&DAT_100fc85b8,&DAT_100c4d0b8);
  }
  else {
    uVar5 = (ulong)*(byte *)(unaff_x22 + 0xf9);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0xf0);
    FUN_100076688(unaff_x22 + 0x10,unaff_x22 + 0x38);
    FUN_100005808(unaff_x22 + 0x10,&DAT_100fc85b8,&DAT_100c4d0b8);
    lVar2 = *(long *)(unaff_x22 + 0x58);
    FUN_100004640(unaff_x22 + 0x38,*(undefined8 *)(unaff_x22 + 0x50));
    FUN_10045b530(uVar1,uVar3,uVar5);
    (**(code **)(lVar2 + 0x18))();
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(uVar5);
    FUN_100004594(unaff_x22 + 0x38);
  }
  _swift_task_switch(FUN_1004719c0,*(undefined8 *)(unaff_x22 + 0xd8),
                     *(undefined8 *)(unaff_x22 + 0xe0));
  return;
}



/* Address: 0x1004719c0 | FUN_1004719c0 */

void FUN_1004719c0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xd0));
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100471a14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100471a18 | FUN_100471a18 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100471b60 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_100471a18(String *param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  NSComparisonResult NVar7;
  NSData *pNVar8;
  ID IVar9;
  undefined *puVar10;
  _StringGuts *p_Var11;
  undefined8 uVar12;
  _StringGuts _Var13;
  ulong uVar14;
  char *pcVar15;
  ulong *puVar16;
  Data DVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  ulong uVar21;
  String SVar22;
  _StringGuts local_a8;
  _StringGuts local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  long local_78;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  SVar22 = Swift::String::uppercased(*param_1);
  _Var13.unknown = SVar22.bridgeObject;
  if (SVar22.str == (undefined *)0x54534f50 && _Var13.unknown == &DAT_e400000000000000) {
    _swift_bridgeObjectRelease(_Var13.unknown);
  }
  else {
    bVar6 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar22.str,_Var13,(_StringComparisonResult)0x50);
    _swift_bridgeObjectRelease(_Var13.unknown);
    if (!bVar6) goto LAB_100471dd0;
  }
  pcVar15 = param_1[1].str;
  puVar16 = (ulong *)(pcVar15 + 0x40);
  uVar14 = -1L << ((ulong)(byte)pcVar15[0x20] & 0x3f);
  uVar20 = 0xffffffffffffffff;
  if (-uVar14 < 0x40) {
    uVar20 = ~(-1L << (-uVar14 & 0x3f));
  }
  uVar20 = uVar20 & *puVar16;
  NVar7.unknown = pcVar15;
  _swift_bridgeObjectRetain(pcVar15);
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar18 = 0;
  uVar2 = uVar20;
  lVar4 = lVar18;
  do {
    while (lVar19 = lVar4, uVar21 = uVar2, uVar20 == 0) {
      bVar6 = SCARRY8(lVar18,1);
      lVar18 = lVar18 + 1;
      if (bVar6) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100471e44);
        (*pcVar5)();
      }
      if ((long)(0x3f - uVar14 >> 6) <= lVar18) {
        FUN_10000c650(pcVar15,puVar16,~uVar14,lVar19,0);
        pcVar15 = param_1[2].str;
        if (0xe < (ulong)pcVar15 >> 0x3c) goto LAB_100471dd0;
        DVar17.unknown = param_1[1].bridgeObject;
        FUN_1001037b4(DVar17.unknown,pcVar15);
        pNVar8 = Foundation::Data::_bridgeToObjectiveC(DVar17);
        local_90 = 0;
        IVar9 = objc_stub::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar8,0,&local_90);
        if (IVar9 == 0) {
          uVar12 = local_90;
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_10003bf18(DVar17.unknown,pcVar15);
          _swift_errorRelease(uVar12);
          goto LAB_100471dd0;
        }
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar9);
        puVar10 = &DAT_100fc8340;
        FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
        puVar3 = PTR___type_metadata_for_Any_100eae0c0;
        p_Var11 = &local_a8;
        _swift_dynamicCast(p_Var11,&local_90,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar10,6);
        _Var13.unknown = local_a8.unknown;
        if (((ulong)p_Var11 & 1) != 0) {
          if (*(long *)(local_a8.unknown + 0x10) == 0) {
LAB_100471d2c:
            uStack_88 = 0;
            local_90 = 0;
            local_78 = 0;
            uStack_80 = 0;
          }
          else {
            _swift_bridgeObjectRetain(local_a8.unknown);
            lVar18 = 0x646f6874656d;
            uVar20 = 0;
            FUN_10046483c(0x646f6874656d);
            if ((uVar20 & 1) == 0) {
              _swift_bridgeObjectRelease(_Var13.unknown);
              goto LAB_100471d2c;
            }
            FUN_10000cbfc(*(long *)(_Var13.unknown + 0x38) + lVar18 * 0x20,&local_90);
            _swift_bridgeObjectRelease(_Var13.unknown);
          }
          _swift_bridgeObjectRelease(_Var13.unknown);
          if (local_78 == 0) {
            FUN_100005808(&local_90,&DAT_100fc85a8,&DAT_100c4d0a8);
          }
          else {
            p_Var11 = &local_a8;
            _swift_dynamicCast(p_Var11,&local_90,puVar3 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            _Var13.unknown = local_a0.unknown;
            if (((ulong)p_Var11 & 1) != 0) {
              if ((local_a8.unknown == (undefined *)0x696c616974696e69) &&
                 (local_a0.unknown == (undefined *)0xea0000000000657a)) {
                FUN_10003bf18(DVar17.unknown,pcVar15);
                _swift_bridgeObjectRelease(0xea0000000000657a);
                bVar6 = true;
              }
              else {
                bVar6 = Swift::_stringCompareWithSmolCheck
                                  (local_a8,local_a0,(_StringComparisonResult)0x69);
                FUN_10003bf18(DVar17.unknown,pcVar15);
                _swift_bridgeObjectRelease(_Var13.unknown);
              }
              goto LAB_100471dd4;
            }
          }
        }
        FUN_10003bf18(DVar17.unknown,pcVar15);
        goto LAB_100471dd0;
      }
      uVar2 = uVar21;
      lVar4 = lVar19;
      uVar20 = puVar16[lVar18];
    }
    uVar2 = (uVar20 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar20 & 0x5555555555555555) << 1;
    uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
    uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    puVar1 = (undefined8 *)
             (*(long *)(pcVar15 + 0x30) + LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) * 0x10 +
             lVar18 * 0x400);
    local_90 = *puVar1;
    uStack_88 = puVar1[1];
    uVar20 = uVar20 - 1 & uVar20;
    local_a8.unknown = (undefined *)0x737365532d70634d;
    local_a0.unknown = (undefined *)0xee0064492d6e6f69;
    FUN_10045b990();
    NVar7 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                      (NVar7.unknown,puVar10,puVar10,NVar7.unknown,NVar7.unknown);
    uVar2 = uVar20;
    lVar4 = lVar18;
  } while (NVar7.unknown != (undefined *)0x0);
  FUN_10000c650(pcVar15,puVar16,~uVar14,lVar19,uVar21);
LAB_100471dd0:
  bVar6 = false;
LAB_100471dd4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar6;
}



/* Address: 0x100471e48 | FUN_100471e48 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

bool FUN_100471e48(Data param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  NSData *pNVar4;
  ID IVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long local_88;
  undefined8 uStack_80;
  long local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_1004fe634();
  if ((param_1.unknown == (undefined *)0x190) && (FUN_1004fea04(), param_2 >> 0x3c < 0xf)) {
    pNVar4 = Foundation::Data::_bridgeToObjectiveC(param_1);
    local_70 = 0;
    IVar5 = objc_stub::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar4,0,&local_70);
    if (IVar5 == 0) {
      lVar9 = local_70;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_10003bf18(param_1.unknown,param_2);
      _swift_errorRelease(lVar9);
    }
    else {
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar5);
      puVar6 = &DAT_100fc8340;
      FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
      puVar1 = PTR___type_metadata_for_Any_100eae0c0;
      plVar7 = &local_88;
      _swift_dynamicCast(plVar7,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
      lVar9 = local_88;
      if (((ulong)plVar7 & 1) == 0) {
LAB_1004720f4:
        FUN_10003bf18(param_1.unknown,param_2);
      }
      else {
        if (*(long *)(local_88 + 0x10) == 0) {
LAB_100471fd0:
          uStack_68 = 0;
          local_70 = 0;
          local_58 = 0;
          uStack_60 = 0;
        }
        else {
          _swift_bridgeObjectRetain(local_88);
          lVar8 = 0x726f727265;
          uVar10 = 0;
          FUN_10046483c(0x726f727265);
          if ((uVar10 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar9);
            goto LAB_100471fd0;
          }
          FUN_10000cbfc(*(long *)(lVar9 + 0x38) + lVar8 * 0x20,&local_70);
          _swift_bridgeObjectRelease(lVar9);
        }
        _swift_bridgeObjectRelease(lVar9);
        if (local_58 != 0) {
          plVar7 = &local_88;
          _swift_dynamicCast(plVar7,&local_70,puVar1 + 8,puVar6,6);
          lVar9 = local_88;
          if (((ulong)plVar7 & 1) == 0) goto LAB_1004720f4;
          if (*(long *)(local_88 + 0x10) == 0) {
LAB_100472058:
            uStack_68 = 0;
            local_70 = 0;
            local_58 = 0;
            uStack_60 = 0;
          }
          else {
            _swift_bridgeObjectRetain(local_88);
            lVar8 = 0x6567617373656d;
            uVar10 = 0;
            FUN_10046483c(0x6567617373656d);
            if ((uVar10 & 1) == 0) {
              _swift_bridgeObjectRelease(lVar9);
              goto LAB_100472058;
            }
            FUN_10000cbfc(*(long *)(lVar9 + 0x38) + lVar8 * 0x20,&local_70);
            _swift_bridgeObjectRelease(lVar9);
          }
          _swift_bridgeObjectRelease(lVar9);
          if (local_58 != 0) {
            plVar7 = &local_88;
            _swift_dynamicCast(plVar7,&local_70,puVar1 + 8,
                               PTR___type_metadata_for_Swift_String_100eac208,6);
            uVar2 = uStack_80;
            if (((ulong)plVar7 & 1) != 0) {
              local_70 = local_88;
              uStack_68 = uStack_80;
              local_88 = -0x2fffffffffffffe5;
              uStack_80 = 0x8000000100da6de0;
              FUN_10045b990();
              bVar3 = (extension_Foundation)::Swift::StringProtocol::_contains
                                (&local_88,PTR___type_metadata_for_Swift_String_100eac208,
                                 PTR___type_metadata_for_Swift_String_100eac208,plVar7,plVar7);
              FUN_10003bf18(param_1.unknown,param_2);
              _swift_bridgeObjectRelease(uVar2);
              goto LAB_10047212c;
            }
            goto LAB_1004720f4;
          }
        }
        FUN_10003bf18(param_1.unknown,param_2);
        FUN_100005808(&local_70,&DAT_100fc85a8,&DAT_100c4d0a8);
      }
    }
  }
  bVar3 = false;
LAB_10047212c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
    return bVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100472164 | FUN_100472164 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010047226c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_100472164(long param_1)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined *puVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  NSComparisonResult NVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar12 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar12 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar12 = uVar12 & *(ulong *)(param_1 + 0x40);
  lVar6 = param_1;
  _swift_bridgeObjectRetain();
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  lVar8 = 0;
  do {
    for (; uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
      uVar2 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
      uVar2 = (uVar2 & 0xcccccccccccccccc) >> 2 | (uVar2 & 0x3333333333333333) << 2;
      uVar2 = (uVar2 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar2 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar2 = (uVar2 & 0xff00ff00ff00ff00) >> 8 | (uVar2 & 0xff00ff00ff00ff) << 8;
      uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
      puVar1 = (undefined8 *)
               (*(long *)(param_1 + 0x38) +
               (lVar8 << 10 | LZCOUNT(uVar2 >> 0x20 | uVar2 << 0x20) << 4));
      uVar11 = *puVar1;
      lVar10 = puVar1[1];
      FUN_10045b990();
      _swift_bridgeObjectRetain(lVar10);
      NVar7 = (extension_Foundation)::Swift::StringProtocol::_caseInsensitiveCompare
                        (lVar6,puVar3,puVar3,lVar6,lVar6);
      if (NVar7.unknown == (undefined *)0x0) {
        _swift_release(param_1);
LAB_1004722a0:
        auVar13._8_8_ = lVar10;
        auVar13._0_8_ = uVar11;
        return auVar13;
      }
      _swift_bridgeObjectRelease();
      lVar6 = lVar10;
    }
    bVar5 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1004722d8);
      (*pcVar4)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar8) {
      _swift_release(param_1);
      uVar11 = 0;
      lVar10 = 0;
      goto LAB_1004722a0;
    }
    uVar12 = ((ulong *)(param_1 + 0x40))[lVar8];
  } while( true );
}



/* Address: 0x1004722d8 | FUN_1004722d8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1004722d8(undefined8 param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  NSDictionary *pNVar5;
  Data DVar6;
  undefined8 uVar7;
  undefined8 extraout_x1;
  undefined1 auVar8 [16];
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  long local_138;
  undefined1 auStack_128 [32];
  undefined *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  long lStack_f0;
  undefined8 local_e8 [20];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar2 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x6370726e6f736a;
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e700000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x302e32;
  *(undefined8 *)(puVar2 + 0x38) = 0xe300000000000000;
  *(undefined **)(puVar2 + 0x48) = puVar4;
  *(undefined8 *)(puVar2 + 0x50) = 0x746c75736572;
  *(undefined1 **)(puVar2 + 0x58) = &DAT_e600000000000000;
  puVar3 = puVar2;
  FUN_10047fb4c();
  puVar4 = &DAT_100fc8340;
  FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
  *(undefined **)(puVar2 + 0x78) = puVar4;
  *(undefined **)(puVar2 + 0x60) = puVar3;
  puVar3 = puVar2;
  FUN_10045a404();
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  FUN_100011090(param_1,&local_108,&DAT_100fc85a8,&DAT_100c4d0a8);
  if (lStack_f0 == 0) {
    FUN_100005808(&local_108,&DAT_100fc85a8,&DAT_100c4d0a8);
  }
  else {
    FUN_100011080(&local_108,local_e8);
    FUN_10000cbfc(local_e8,&local_108);
    uStack_148 = uStack_100;
    local_150 = local_108;
    local_138 = lStack_f0;
    uStack_140 = local_f8;
    if (lStack_f0 == 0) {
      FUN_100005808(&local_150,&DAT_100fc85a8,&DAT_100c4d0a8);
      FUN_10046564c(auStack_128,&SUB_00006469,&SUB_e200000000000000);
      FUN_100005808(auStack_128,&DAT_100fc85a8,&DAT_100c4d0a8);
    }
    else {
      FUN_100011080(&local_150,auStack_128);
      puVar2 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native(puVar3);
      local_150 = puVar3;
      FUN_100465e44(auStack_128,&SUB_00006469,&SUB_e200000000000000,puVar2);
      puVar3 = local_150;
    }
    FUN_100004594(local_e8);
  }
  pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_e8[0] = 0;
  DVar6.unknown =
       (undefined *)
       objc_stub::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,local_e8);
  if (DVar6.unknown != (undefined *)0x0) {
    uVar7 = extraout_x1;
    auVar8._0_8_ = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
    _swift_bridgeObjectRelease(puVar3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
      auVar8._8_8_ = uVar7;
      return auVar8;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  uVar7 = local_e8[0];
  Foundation::__convertNSErrorToError();
  _swift_willThrow(0);
  _swift_unexpectedError(uVar7,"PasteMCP/HummingbirdMCPBridge.swift",0x23,1,0x101);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1004725e0);
  (*pcVar1)();
}



/* Address: 0x1004725e0 | FUN_1004725e0 */

void FUN_1004725e0(undefined8 *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  String SVar9;
  
  uVar7 = 0x2d746e65746e6f43;
  uVar3 = param_3;
  FUN_1004722d8();
  uVar1 = param_2;
  thunk_FUN_10085c548();
  uVar6 = 0xec00000065707954;
  FUN_10085c664(0xd000000000000010,0x8000000100d8fc90,0x2d746e65746e6f43,0xec00000065707954,
                0x2d746e65746e6f63,0xec00000065707974);
  uVar2 = 0x737365532d70634d;
  lVar4 = -0x11ff9bb6d2919097;
  thunk_FUN_10085af9c();
  if (lVar4 != 0) {
    _swift_bridgeObjectRetain(param_4);
    FUN_10085c664(param_3,param_4,uVar2,lVar4,uVar7,uVar6);
    uVar2 = param_3;
  }
  FUN_100611728();
  _swift_retain(uVar1);
  FUN_1001037b4(param_2,uVar3);
  uVar7 = param_2;
  uVar5 = uVar3;
  FUN_100487db4();
  FUN_10003bf2c(param_2,uVar3);
  _swift_retain(uVar1);
  uVar8 = 0x2d746e65746e6f43;
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar8 & 1) == 0) {
    SVar9 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar9.str,SVar9.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(uVar1);
  FUN_10003bf2c(param_2,uVar3);
  _swift_release(uVar1);
  param_1[5] = uVar5;
  param_1[4] = uVar7;
  param_1[7] = 0;
  param_1[6] = uVar2 & 0xffffffffffffff;
  *(undefined1 *)(param_1 + 8) = 0;
  param_1[1] = 0x4b4f;
  *param_1 = 200;
  param_1[3] = uVar1;
  param_1[2] = &SUB_e200000000000000;
  return;
}



/* Address: 0x100472824 | FUN_100472824 */

undefined1 * FUN_100472824(undefined1 *param_1)

{
  undefined *puVar1;
  undefined1 **ppuVar2;
  undefined1 *puVar3;
  ulong uVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *local_a0;
  undefined8 uStack_98;
  undefined *local_88;
  undefined1 auStack_80 [32];
  undefined1 *local_60;
  undefined1 *local_58;
  
  ppuVar2 = &local_a0;
  lVar5 = *(long *)(param_1 + 0x10);
  local_58 = param_1;
  _swift_bridgeObjectRetain();
  if (lVar5 != 0) {
    lVar5 = 0x746c75736572;
    uVar4 = 0;
    FUN_10046483c(0x746c75736572);
    if ((uVar4 & 1) != 0) {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar5 * 0x20,auStack_80);
      puVar1 = &DAT_100fc8340;
      FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
      _swift_dynamicCast(&local_a0,auStack_80,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar1,6);
      puVar6 = local_a0;
      if (((ulong)ppuVar2 & 1) != 0) {
        local_60 = local_a0;
        FUN_10047f990();
        local_a0 = (undefined1 *)ppuVar2;
        local_88 = puVar1;
        if (puVar1 == (undefined *)0x0) {
          FUN_100005808(&local_a0,&DAT_100fc85a8,&DAT_100c4d0a8);
          FUN_10046564c(auStack_80,0x6e49726576726573,0xea00000000006f66);
          FUN_100005808(auStack_80,&DAT_100fc85a8,&DAT_100c4d0a8);
          puVar6 = local_60;
        }
        else {
          FUN_100011080(&local_a0,auStack_80);
          puVar3 = puVar6;
          _swift_isUniquelyReferenced_nonNull_native(puVar6);
          local_a0 = puVar6;
          FUN_100465e44(auStack_80,0x6e49726576726573,0xea00000000006f66,puVar3);
          puVar6 = local_a0;
        }
        local_a0 = (undefined1 *)0xd000000000000098;
        uStack_98 = 0x8000000100da6e00;
        local_88 = PTR___type_metadata_for_Swift_String_100eac208;
        FUN_100011080(&local_a0,auStack_80);
        puVar3 = puVar6;
        _swift_isUniquelyReferenced_nonNull_native(puVar6);
        local_a0 = puVar6;
        FUN_100465e44(auStack_80,0x7463757274736e69,0xec000000736e6f69,puVar3);
        puVar6 = local_a0;
        if (puVar1 == (undefined *)0x0) {
          local_88 = puVar1;
          _swift_bridgeObjectRetain(local_a0);
          FUN_100005808(&local_a0,&DAT_100fc85a8,&DAT_100c4d0a8);
          FUN_10046564c(auStack_80,0x746c75736572,&DAT_e600000000000000);
          FUN_100005808(auStack_80,&DAT_100fc85a8,&DAT_100c4d0a8);
          _swift_bridgeObjectRelease(puVar6);
          param_1 = local_58;
        }
        else {
          local_88 = puVar1;
          FUN_100011080(&local_a0,auStack_80);
          _swift_bridgeObjectRetain(puVar6);
          puVar3 = param_1;
          _swift_isUniquelyReferenced_nonNull_native(param_1);
          local_a0 = param_1;
          FUN_100465e44(auStack_80,0x746c75736572,&DAT_e600000000000000,puVar3);
          _swift_bridgeObjectRelease(puVar6);
          param_1 = local_a0;
        }
      }
    }
  }
  return param_1;
}



/* Address: 0x100472aac | FUN_100472aac */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100472aac(Data param_1)

{
  NSData *pNVar1;
  ID IVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  NSDictionary *pNVar5;
  Data DVar6;
  undefined8 extraout_x1;
  undefined8 uVar7;
  undefined8 local_68 [2];
  undefined8 local_58 [4];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = Foundation::Data::_bridgeToObjectiveC(param_1);
  local_58[0] = 0;
  IVar2 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar1,0,local_58);
  if (IVar2 == 0) {
    uVar7 = local_58[0];
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_100472c68:
    _swift_errorRelease(uVar7);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar2);
    puVar3 = &DAT_100fc8340;
    FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
    puVar4 = local_68;
    _swift_dynamicCast(puVar4,local_58,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar3,6);
    if (((ulong)puVar4 & 1) != 0) {
      uVar7 = local_68[0];
      FUN_100472824(local_68[0]);
      _swift_bridgeObjectRelease(local_68[0]);
      pNVar5 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(uVar7);
      local_58[0] = 0;
      DVar6.unknown =
           (undefined *)
           objc_stub::dataWithJSONObject_options_error_
                     (&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,local_58);
      if (DVar6.unknown != (undefined *)0x0) {
        uVar7 = extraout_x1;
        DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
        goto LAB_100472c74;
      }
      uVar7 = local_58[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      goto LAB_100472c68;
    }
  }
  DVar6.unknown = (undefined *)0x0;
  uVar7 = 0xf000000000000000;
LAB_100472c74:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(DVar6.unknown,uVar7);
}



/* Address: 0x100472ca4 | FUN_100472ca4 */

undefined * FUN_100472ca4(long param_1)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  code *pcVar7;
  _DictionaryStorage *this;
  undefined *puVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *capacity;
  undefined8 *puVar11;
  
  capacity = *(undefined **)(param_1 + 0x10);
  puVar8 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100fc7cd0;
    FUN_1000037f0(&DAT_100fc7cd0,&DAT_100c4c698);
    puVar8 = capacity;
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    _swift_retain();
    puVar11 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar3 = puVar11[-3];
      uVar5 = puVar11[-2];
      uVar4 = puVar11[-1];
      uVar6 = *puVar11;
      _swift_bridgeObjectRetain(uVar5);
      _swift_bridgeObjectRetain(uVar6);
      uVar9 = uVar3;
      uVar10 = uVar5;
      FUN_100071370();
      if ((uVar10 & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100472db0);
        (*pcVar7)();
      }
      uVar10 = uVar9 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)(puVar8 + uVar10 + 0x40) = *(ulong *)(puVar8 + uVar10 + 0x40) | 1L << (uVar9 & 0x3f)
      ;
      puVar1 = (ulong *)(*(long *)(puVar8 + 0x30) + uVar9 * 0x10);
      *puVar1 = uVar3;
      puVar1[1] = uVar5;
      puVar2 = (undefined8 *)(*(long *)(puVar8 + 0x38) + uVar9 * 0x10);
      *puVar2 = uVar4;
      puVar2[1] = uVar6;
      if (SCARRY8(*(long *)(puVar8 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100472db4);
        (*pcVar7)();
      }
      puVar11 = puVar11 + 4;
      *(long *)(puVar8 + 0x10) = *(long *)(puVar8 + 0x10) + 1;
      capacity = capacity + -1;
    } while (capacity != (undefined *)0x0);
    _swift_release(puVar8);
  }
  return puVar8;
}



/* Address: 0x100472db4 | FUN_100472db4 */

undefined8 FUN_100472db4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  _swift_bridgeObjectRetain();
  _swift_isUniquelyReferenced_nonNull_native();
  FUN_100465cd8(0xd000000000000010,0x8000000100d8fc90,0x2d746e65746e6f43,0xec00000065707954,uVar1);
  uVar1 = 0xed00006c6f72746e;
  FUN_100465570(0x6f432d6568636143,0xed00006c6f72746e);
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = 0xea00000000006e6f;
  FUN_100465570(0x697463656e6e6f43,0xea00000000006e6f);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100472e88 | FUN_100472e88 */

undefined1  [16] FUN_100472e88(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined1 auVar8 [16];
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  long local_28;
  
  uVar5 = 0;
  iVar2 = (int)&local_50;
  if ((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) {
LAB_100472f64:
    uStack_38 = 0;
    local_40 = 0;
    local_28 = 0;
    uStack_30 = 0;
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    lVar3 = 0x736d61726170;
    uVar7 = 0;
    FUN_10046483c(0x736d61726170);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
      goto LAB_100472f64;
    }
    FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar3 * 0x20,&local_40);
    _swift_bridgeObjectRelease(param_1);
    puVar4 = &DAT_100fc8340;
    FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
    puVar1 = PTR___type_metadata_for_Any_100eae0c0;
    _swift_dynamicCast(&local_50,&local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar4,6);
    lVar3 = local_50;
    if ((uVar5 & 1) == 0) goto LAB_100472f64;
    if (*(long *)(local_50 + 0x10) == 0) {
LAB_100472fa4:
      uStack_38 = 0;
      local_40 = 0;
      local_28 = 0;
      uStack_30 = 0;
    }
    else {
      _swift_bridgeObjectRetain(local_50);
      lVar6 = 0x656d616e;
      uVar5 = 0;
      FUN_10046483c(0x656d616e);
      if ((uVar5 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar3);
        goto LAB_100472fa4;
      }
      FUN_10000cbfc(*(long *)(lVar3 + 0x38) + lVar6 * 0x20,&local_40);
      _swift_bridgeObjectRelease(lVar3);
    }
    _swift_bridgeObjectRelease(lVar3);
    if (local_28 != 0) {
      _swift_dynamicCast(&local_50,&local_40,puVar1 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if (iVar2 == 0) {
        local_50 = 0;
        uStack_48 = 0;
      }
      goto LAB_100472f8c;
    }
  }
  FUN_100005808(&local_40,&DAT_100fc85a8,&DAT_100c4d0a8);
  local_50 = 0;
  uStack_48 = 0;
LAB_100472f8c:
  auVar8._8_8_ = uStack_48;
  auVar8._0_8_ = local_50;
  return auVar8;
}



/* Address: 0x100472fec | FUN_100472fec */

void FUN_100472fec(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 uVar10;
  long lVar11;
  long extraout_x8;
  ulong uVar12;
  ulong uVar13;
  long extraout_x12;
  long extraout_x13;
  ulong *puVar14;
  undefined *puVar15;
  code *pcVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  ulong uVar20;
  String SVar21;
  long local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  undefined *local_e0;
  ulong local_d8;
  ulong *local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong local_a0;
  ulong local_70;
  
  puVar15 = &DAT_100fc8590;
  local_d0 = param_1;
  FUN_1000037f0(&DAT_100fc8590,&DAT_100c4d098);
  local_e8 = *(ulong *)(puVar15 + -8);
  local_e0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = (long)&local_100 - (extraout_x13 + 0xfU & 0xfffffffffffffff0);
  local_100 = lVar11;
  local_f8 = extraout_x13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar11 = lVar11 - extraout_x12;
  uVar5 = 0;
  local_f0 = lVar11;
  FUN_1004fe770();
  local_d8 = uVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(uVar5 - 8) + 0x40));
  local_c8 = lVar11 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  thunk_FUN_10085c548();
  local_70 = uVar5;
  FUN_1004fe828();
  lVar11 = 0;
  uVar13 = 1L << ((ulong)*(byte *)(uVar5 + 0x20) & 0x3f);
  uVar17 = 0xffffffffffffffff;
  if ((*(byte *)(uVar5 + 0x20) & 0x3f) < 6) {
    uVar17 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar17 = uVar17 & *(ulong *)(uVar5 + 0x40);
  while( true ) {
    while (uVar17 != 0) {
      uVar12 = (uVar17 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar17 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar17 = uVar17 - 1 & uVar17;
      uVar12 = lVar11 << 10 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(uVar5 + 0x30) + uVar12);
      uVar6 = *puVar1;
      lVar7 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(uVar5 + 0x38) + uVar12);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      _swift_bridgeObjectRetain(lVar7);
      _swift_bridgeObjectRetain(uVar3);
      thunk_FUN_10085af9c(uVar6);
      if (lVar7 == 0) {
        _swift_bridgeObjectRelease(uVar3);
      }
      else {
        FUN_10085c664(uVar2,uVar3,uVar6,lVar7,param_4,param_5);
        param_4 = uVar6;
        param_5 = lVar7;
      }
    }
    bVar4 = SCARRY8(lVar11,1);
    lVar11 = lVar11 + 1;
    if (bVar4) break;
    if ((long)(uVar13 + 0x3f >> 6) <= lVar11) {
      _swift_release();
      FUN_1004fe634();
      uVar8 = 0;
      uVar9 = 0xe000000000000000;
      FUN_10086e1ec();
      uVar17 = local_c8;
      FUN_1000c495c(param_2,local_c8,FUN_1004fe770);
      uVar13 = uVar17;
      uVar12 = local_d8;
      _swift_getEnumCaseMultiPayload();
      if ((int)uVar13 == 3) {
        puVar15 = &DAT_100fc85c0;
        FUN_1000037f0(&DAT_100fc85c0,&DAT_100c4d0c0);
        _swift_bridgeObjectRelease(*(undefined8 *)(uVar17 + (long)*(int *)(puVar15 + 0x30)));
        puVar19 = local_e0;
        uVar13 = local_e8;
        lVar7 = local_f0;
        pcVar16 = *(code **)(local_e8 + 0x20);
        (*pcVar16)(local_f0,uVar17,local_e0);
        lVar11 = local_100;
        (**(code **)(uVar13 + 0x10))(local_100,lVar7,puVar19);
        uVar17 = (ulong)*(byte *)(uVar13 + 0x50);
        uVar12 = uVar17 + 0x10 & (uVar17 ^ 0xffffffffffffffff);
        puVar15 = &DAT_100ed6d70;
        _swift_allocObject(&DAT_100ed6d70,uVar12 + local_f8,uVar17 | 7);
        (*pcVar16)(puVar15 + uVar12,lVar11,puVar19);
        uVar17 = local_70;
        (**(code **)(uVar13 + 8))(lVar7,puVar19);
        uVar12 = 0;
        uVar18 = 1;
        uVar10 = 1;
        puVar19 = &DAT_100c4d0d0;
        puVar14 = local_d0;
        local_d8 = uVar5;
        local_e0 = (undefined *)uVar8;
        local_e8 = uVar9;
      }
      else {
        uVar20 = 0x2d746e65746e6f43;
        local_e8 = uVar9;
        local_e0 = (undefined *)uVar8;
        local_d8 = uVar5;
        FUN_1004fea04();
        uVar5 = local_70;
        uVar17 = 0;
        if (uVar12 >> 0x3c < 0xf) {
          uVar17 = uVar13;
        }
        uVar8 = 0xc000000000000000;
        if (uVar12 >> 0x3c < 0xf) {
          uVar8 = uVar12;
        }
        FUN_100611728();
        _swift_retain(uVar5);
        FUN_1001037b4(uVar17,uVar8);
        uVar12 = uVar17;
        uVar18 = uVar8;
        FUN_100487db4();
        FUN_10003bf2c(uVar17,uVar8);
        local_a0 = uVar5;
        _swift_retain(uVar5);
        FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                      uVar5);
        if ((uVar20 & 1) == 0) {
          local_c0 = (ulong)(uint)((int)(uVar18 >> 0x20) - (int)uVar18);
          SVar21 = Swift::CustomStringConvertible::get_description();
          FUN_10085c664(SVar21.str,SVar21.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                        0x2d746e65746e6f63,0xee006874676e656c);
          _swift_release(uVar5);
          FUN_10003bf2c(uVar17,uVar8);
          uVar17 = local_a0;
        }
        else {
          _swift_release(uVar5);
          FUN_10003bf2c(uVar17,uVar8);
          uVar17 = uVar5;
        }
        puVar14 = local_d0;
        _swift_release(uVar5);
        puVar19 = (undefined *)(uVar13 & 0xffffffffffffff);
        FUN_10005241c(local_c8,FUN_1004fe770);
        puVar15 = (undefined *)0x0;
        uVar10 = 0;
      }
      *puVar14 = local_d8;
      puVar14[1] = (ulong)local_e0;
      puVar14[2] = local_e8;
      puVar14[3] = uVar17;
      puVar14[4] = uVar12;
      puVar14[5] = uVar18;
      puVar14[6] = (ulong)puVar19;
      puVar14[7] = (ulong)puVar15;
      *(undefined1 *)(puVar14 + 8) = uVar10;
      return;
    }
    uVar17 = ((ulong *)(uVar5 + 0x40))[lVar11];
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x100473478);
  (*pcVar16)();
}



/* Address: 0x100473478 | FUN_100473478 */

void FUN_100473478(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  UUID UVar4;
  undefined8 uVar5;
  char *pcVar6;
  void *pvVar7;
  void *pvVar8;
  _StringGuts _Var9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  void *pvVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_90;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x478) = param_6;
  *(undefined8 *)(unaff_x22 + 0x470) = param_5;
  *(undefined8 **)(unaff_x22 + 0x468) = param_4;
  *(undefined8 *)(unaff_x22 + 0x460) = param_3;
  *(undefined8 *)(unaff_x22 + 0x458) = param_2;
  *(undefined8 *)(unaff_x22 + 0x450) = param_1;
  puVar1 = &DAT_100fc8588;
  FUN_1000037f0(&DAT_100fc8588,&DAT_100c4d090);
  *(undefined **)(unaff_x22 + 0x480) = puVar1;
  lVar12 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x488) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x490) = uVar2;
  puVar1 = &DAT_100fc8590;
  FUN_1000037f0(&DAT_100fc8590,&DAT_100c4d098);
  *(undefined **)(unaff_x22 + 0x498) = puVar1;
  lVar12 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x4a0) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4a8) = uVar2;
  lVar12 = 0;
  FUN_1004fe770();
  *(long *)(unaff_x22 + 0x4b0) = lVar12;
  uVar2 = *(long *)(*(long *)(lVar12 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4b8) = uVar3;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4c0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4c8) = uVar2;
  puVar1 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4d0) = uVar2;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x4d8) = UVar4.unknown;
  lVar12 = *(long *)(UVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x4e0) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4e8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4f0) = uVar2;
  puVar1 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x4f8) = uVar2;
  lVar12 = 0;
  FUN_10045ba0c();
  *(long *)(unaff_x22 + 0x500) = lVar12;
  lVar12 = *(long *)(lVar12 + -8);
  *(long *)(unaff_x22 + 0x508) = lVar12;
  uVar2 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x510) = uVar2;
  pvVar17 = (void *)param_4[0x17];
  uVar5 = 0x7a69726f68747541;
  pvVar7 = (void *)0xed00006e6f697461;
  pcVar10 = (char *)0x7a69726f68747561;
  pvVar11 = pvVar7;
  FUN_10085c5ec();
  pvVar8 = pvVar7;
  FUN_100470b24();
  *(void **)(unaff_x22 + 0x518) = pvVar8;
  _swift_bridgeObjectRelease(pvVar7);
  pcVar6 = (char *)param_4[0x16];
  FUN_100867ea8();
  *(char **)(unaff_x22 + 0x520) = pcVar6;
  *(void **)(unaff_x22 + 0x528) = pvVar17;
  uVar22 = param_4[0x10];
  uVar15 = param_4[0x13];
  uVar14 = param_4[0x12];
  *(undefined8 *)(unaff_x22 + 0x98) = param_4[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar22;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar15;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar14;
  uVar22 = param_4[0x14];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4[0x15];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar22;
  uVar22 = param_4[8];
  uVar15 = param_4[0xb];
  uVar14 = param_4[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_4[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar14;
  uVar15 = param_4[0xc];
  uVar14 = param_4[0xf];
  uVar22 = param_4[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_4[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar22;
  uVar22 = *param_4;
  uVar15 = param_4[3];
  uVar14 = param_4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar22;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar14;
  uVar15 = param_4[4];
  uVar14 = param_4[7];
  uVar22 = param_4[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_4[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar15;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar22;
  FUN_1009fc75c();
  *(char **)(unaff_x22 + 0x530) = pcVar6;
  *(void **)(unaff_x22 + 0x538) = pvVar17;
  if (pvVar8 == (void *)0x0) {
    if (DAT_100fc8598 != -1) {
      _swift_once(&DAT_100fc8598,FUN_100470548);
      pvVar17 = *(void **)(unaff_x22 + 0x538);
      pcVar6 = *(char **)(unaff_x22 + 0x530);
    }
    uVar22 = *(undefined8 *)(unaff_x22 + 0x528);
    SVar27 = *(String *)(unaff_x22 + 0x520);
    FUN_1000d468c(unaff_x22 + 0x1b0);
    puVar1 = *(undefined **)(unaff_x22 + 0x1c8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1d0);
    _Var9.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x1b0);
    local_a8 = 0;
    local_a0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x19,_Var9);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = 0x6961662068747561;
    local_a0 = 0xed0000203a64656c;
    SVar28.bridgeObject = pvVar11;
    SVar28.str = pcVar10;
    Swift::String::append(SVar27,SVar28);
    _swift_bridgeObjectRelease(uVar22);
    SVar27.bridgeObject = (void *)0xe100000000000000;
    SVar27.str = (char *)0x20;
    SVar29.bridgeObject = pvVar11;
    SVar29.str = pcVar10;
    Swift::String::append(SVar27,SVar29);
    SVar24.bridgeObject = pvVar17;
    SVar24.str = pcVar6;
    SVar30.bridgeObject = pvVar11;
    SVar30.str = pcVar10;
    Swift::String::append(SVar24,SVar30);
    _swift_bridgeObjectRelease(pvVar17);
    SVar25.bridgeObject = (void *)0xa500000000000000;
    SVar25.str = (char *)0x209480e220;
    SVar31.bridgeObject = pvVar11;
    SVar31.str = pcVar10;
    Swift::String::append(SVar25,SVar31);
    SVar26.bridgeObject = (void *)0x8000000100da6d10;
    SVar26.str = (char *)0xd000000000000022;
    SVar32.bridgeObject = pvVar11;
    SVar32.str = pcVar10;
    Swift::String::append(SVar26,SVar32);
    uVar2 = 0x2d746e65746e6f43;
    _swift_bridgeObjectRelease(0x8000000100da6d10);
    uVar22 = local_a0;
    FUN_1000d4e0c(local_a8,local_a0,puVar1,uVar5);
    _swift_bridgeObjectRelease(uVar22);
    lVar12 = unaff_x22 + 0x1b0;
    FUN_100004594();
    thunk_FUN_10085c548();
    local_90 = lVar12;
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,lVar12
                 );
    if ((uVar2 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x440) = 0;
      SVar27 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(&local_a8,SVar27.str,SVar27.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(lVar12);
      lVar12 = local_90;
    }
    else {
      _swift_release(lVar12);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4f8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4f0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x4e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x4c0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x4b8);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x4a8);
    uVar22 = *(undefined8 *)(unaff_x22 + 0x490);
    puVar13 = *(undefined8 **)(unaff_x22 + 0x450);
    puVar13[1] = 0x726f687475616e55;
    *puVar13 = 0x191;
    puVar13[2] = 0xec00000064657a69;
    puVar13[3] = lVar12;
    puVar13[5] = 0;
    puVar13[4] = 0;
    puVar13[7] = 0;
    puVar13[6] = 0;
    *(undefined1 *)(puVar13 + 8) = 2;
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar22);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    *(undefined8 *)(unaff_x22 + 0x540) = uVar5;
    _swift_bridgeObjectRetain(pvVar8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
      _swift_task_switch(FUN_1004739f4,param_5,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004739f4 | FUN_1004739f4 */

void FUN_1004739f4(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar6 = *(long *)(unaff_x22 + 0x540);
  uVar5 = *(ulong *)(unaff_x22 + 0x518);
  lVar10 = *(long *)(unaff_x22 + 0x470);
  _swift_bridgeObjectRetain(uVar5);
  FUN_1004900d0(lVar6);
  _swift_beginAccess(lVar10 + 0x78,unaff_x22 + 0x390,0,0);
  uVar7 = *(ulong *)(lVar10 + 0x78);
  if (*(long *)(uVar7 + 0x10) == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x4e0) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x4d0),1,1,*(undefined8 *)(unaff_x22 + 0x4d8));
  }
  else {
    _swift_bridgeObjectRetain(uVar7);
    uVar2 = uVar5;
    FUN_10046483c(lVar6);
    lVar10 = *(long *)(unaff_x22 + 0x4e0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x4d0);
    if ((uVar2 & 1) == 0) {
      (**(code **)(lVar10 + 0x38))(uVar8,1,1,uVar11);
    }
    else {
      (**(code **)(lVar10 + 0x10))
                (uVar8,*(long *)(uVar7 + 0x38) + *(long *)(lVar10 + 0x48) * lVar6,uVar11);
      (**(code **)(lVar10 + 0x38))(uVar8,0,1,uVar11);
    }
    _swift_bridgeObjectRelease(uVar5);
    uVar5 = uVar7;
  }
  lVar6 = *(long *)(unaff_x22 + 0x4e0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x4d8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4d0);
  _swift_bridgeObjectRelease(uVar5);
  (**(code **)(lVar6 + 0x30))(uVar8,1,uVar11);
  if ((int)uVar8 == 1) {
    lVar6 = *(long *)(unaff_x22 + 0x508);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x500);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x4f8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4d0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x518));
    FUN_100005808(uVar9,&DAT_100fc8170,&DAT_100c4cde8);
    (**(code **)(lVar6 + 0x38))(uVar8,1,1,uVar11);
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x470);
    (**(code **)(*(long *)(unaff_x22 + 0x4e0) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x4f0),*(undefined8 *)(unaff_x22 + 0x4d0),
               *(undefined8 *)(unaff_x22 + 0x4d8));
    uVar5 = unaff_x22 + 0x360;
    _swift_beginAccess(lVar6 + 0x70,uVar5,0,0);
    lVar6 = *(long *)(lVar6 + 0x70);
    if (*(long *)(lVar6 + 0x10) == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x508) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x4f8),1,1,*(undefined8 *)(unaff_x22 + 0x500));
      lVar6 = *(long *)(unaff_x22 + 0x518);
    }
    else {
      lVar10 = *(long *)(unaff_x22 + 0x4f0);
      _swift_bridgeObjectRetain(lVar6);
      FUN_1004647d0(lVar10);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x518);
      lVar12 = *(long *)(unaff_x22 + 0x508);
      uVar11 = *(undefined8 *)(unaff_x22 + 0x500);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x4f8);
      bVar1 = (uVar5 & 1) == 0;
      if (bVar1) {
        pcVar4 = *(code **)(lVar12 + 0x38);
      }
      else {
        FUN_1000c495c(*(long *)(lVar6 + 0x38) + *(long *)(lVar12 + 0x48) * lVar10,uVar9,
                      FUN_10045ba0c);
        pcVar4 = *(code **)(lVar12 + 0x38);
      }
      (*pcVar4)(uVar9,bVar1,1,uVar11);
      _swift_bridgeObjectRelease(uVar8);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x4f0);
    lVar10 = *(long *)(unaff_x22 + 0x4e0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4d8);
    _swift_bridgeObjectRelease(lVar6);
    (**(code **)(lVar10 + 8))(uVar8,uVar11);
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x458);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x548) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x550) = uVar11;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
    _swift_task_switch(FUN_100473cd8,uVar8,uVar11);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100473cd8 | FUN_100473cd8 */

void FUN_100473cd8(void)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  _StringGuts _Var4;
  char *pcVar5;
  void *in_x3;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  undefined8 local_a8;
  undefined8 local_a0;
  long local_90;
  long local_60;
  
  local_60 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar7 = uVar8;
  (**(code **)(*(long *)(unaff_x22 + 0x508) + 0x30))(uVar8,1,*(undefined8 *)(unaff_x22 + 0x500));
  if ((int)uVar7 == 1) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x518);
    pcVar5 = "\b";
    FUN_100005808(uVar8,&DAT_100fc8178);
    _swift_bridgeObjectRelease(uVar7);
    if (DAT_100fc8598 != -1) {
      _swift_once(&DAT_100fc8598,FUN_100470548);
    }
    uVar10 = 0x2d746e65746e6f43;
    uVar8 = *(undefined8 *)(unaff_x22 + 0x538);
    SVar18 = *(String *)(unaff_x22 + 0x530);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x528);
    SVar20 = *(String *)(unaff_x22 + 0x520);
    FUN_1000d468c(unaff_x22 + 0x1b0);
    puVar1 = *(undefined **)(unaff_x22 + 0x1c8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x1d0);
    _Var4.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x1b0);
    local_a8 = 0;
    local_a0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x19,_Var4);
    _swift_bridgeObjectRelease(local_a0);
    local_a8 = 0x6961662068747561;
    local_a0 = 0xed0000203a64656c;
    SVar21.bridgeObject = in_x3;
    SVar21.str = pcVar5;
    Swift::String::append(SVar20,SVar21);
    _swift_bridgeObjectRelease(uVar16);
    SVar20.bridgeObject = (void *)0xe100000000000000;
    SVar20.str = (char *)0x20;
    SVar22.bridgeObject = in_x3;
    SVar22.str = pcVar5;
    Swift::String::append(SVar20,SVar22);
    SVar23.bridgeObject = in_x3;
    SVar23.str = pcVar5;
    Swift::String::append(SVar18,SVar23);
    _swift_bridgeObjectRelease(uVar8);
    SVar18.bridgeObject = (void *)0xa500000000000000;
    SVar18.str = (char *)0x209480e220;
    SVar24.bridgeObject = in_x3;
    SVar24.str = pcVar5;
    Swift::String::append(SVar18,SVar24);
    SVar19.bridgeObject = (void *)0xed00006e656b6f74;
    SVar19.str = (char *)0x2d6e776f6e6b6e75;
    SVar25.bridgeObject = in_x3;
    SVar25.str = pcVar5;
    Swift::String::append(SVar19,SVar25);
    _swift_bridgeObjectRelease(0xed00006e656b6f74);
    uVar8 = local_a0;
    FUN_1000d4e0c(local_a8,local_a0,puVar1,uVar7);
    _swift_bridgeObjectRelease(uVar8);
    lVar2 = unaff_x22 + 0x1b0;
    FUN_100004594();
    thunk_FUN_10085c548();
    local_90 = lVar2;
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,lVar2)
    ;
    if ((uVar10 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x440) = 0;
      SVar20 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(&local_a8,SVar20.str,SVar20.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(lVar2);
      lVar2 = local_90;
    }
    else {
      _swift_release(lVar2);
    }
    uVar7 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4f8);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x4f0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4e8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4c0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4b8);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x4a8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x490);
    puVar6 = *(undefined8 **)(unaff_x22 + 0x450);
    puVar6[1] = 0x726f687475616e55;
    *puVar6 = 0x191;
    puVar6[2] = 0xec00000064657a69;
    puVar6[3] = lVar2;
    puVar6[5] = 0;
    puVar6[4] = 0;
    puVar6[7] = 0;
    puVar6[6] = 0;
    *(undefined1 *)(puVar6 + 8) = 2;
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar8);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
                    /* WARNING: Could not recover jumptable at 0x0001004740a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
  else {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x518);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar10 = *(ulong *)(unaff_x22 + 0x460);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x528));
    _swift_bridgeObjectRelease(uVar7);
    FUN_1000523d8(uVar8,uVar16,FUN_10045ba0c);
    plVar3 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x558) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_1004740c8;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_60) {
      FUN_100470f6c(plVar3,unaff_x22 + 0x150,*(undefined8 *)(unaff_x22 + 0x458),
                    uVar10 & 0xcfffffffffffffff,*(undefined8 *)(unaff_x22 + 0x468));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004740c8 | FUN_1004740c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004740c8(void)

{
  undefined8 *puVar1;
  Data DVar2;
  undefined *puVar3;
  bool bVar4;
  NSData *pNVar5;
  ID IVar6;
  long *plVar7;
  long lVar8;
  UUID UVar9;
  long *plVar10;
  char *pcVar12;
  undefined *in_x3;
  long lVar13;
  undefined8 uVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long unaff_x20;
  long lVar18;
  undefined8 uVar19;
  long *unaff_x22;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  String SVar28;
  String separator;
  String SVar29;
  String SVar30;
  _StringGuts _Var11;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar26 = *unaff_x22;
  lVar20 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar26 + 0x558));
  if (unaff_x20 != 0) {
    uVar17 = *(undefined8 *)(lVar26 + 0x510);
    uVar19 = *(undefined8 *)(lVar26 + 0x4f8);
    uVar21 = *(undefined8 *)(lVar26 + 0x4f0);
    uVar22 = *(undefined8 *)(lVar26 + 0x4e8);
    uVar23 = *(undefined8 *)(lVar26 + 0x4d0);
    uVar24 = *(undefined8 *)(lVar26 + 0x4c8);
    uVar25 = *(undefined8 *)(lVar26 + 0x4c0);
    uVar16 = *(undefined8 *)(lVar26 + 0x4b8);
    uVar14 = *(undefined8 *)(lVar26 + 0x4a8);
    uVar27 = *(undefined8 *)(lVar26 + 0x490);
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar26 + 0x538));
    FUN_10005241c(uVar17,FUN_10045ba0c);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar22);
    _swift_task_dealloc(uVar23);
    _swift_task_dealloc(uVar24);
    _swift_task_dealloc(uVar25);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar27);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
                    /* WARNING: Could not recover jumptable at 0x0001004741e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar20 + 8))();
      return;
    }
    goto LAB_1004746c8;
  }
  DVar2.unknown = *(undefined **)(lVar26 + 0x168);
  uVar15 = *(ulong *)(lVar26 + 0x170);
  *(undefined **)(lVar26 + 0x560) = DVar2.unknown;
  *(ulong *)(lVar26 + 0x568) = uVar15;
  if (uVar15 >> 0x3c < 0xf) {
    puVar1 = (undefined8 *)(lVar26 + 0x438);
    FUN_1001037b4(DVar2.unknown,uVar15);
    pNVar5 = Foundation::Data::_bridgeToObjectiveC(DVar2);
    *puVar1 = 0;
    in_x3 = (undefined *)0x0;
    IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,puVar1);
    uVar14 = *puVar1;
    if (IVar6 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_10003bf18(DVar2.unknown,uVar15);
      _swift_errorRelease(uVar14);
      goto LAB_100474340;
    }
    plVar10 = (long *)(lVar26 + 0x448);
    Swift::__bridgeAnyObjectToAny();
    FUN_10003bf18(DVar2.unknown,uVar15);
    _swift_unknownObjectRelease(IVar6);
    in_x3 = &DAT_100fc8340;
    FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
    puVar3 = PTR___type_metadata_for_Any_100eae0c0;
    plVar7 = plVar10;
    _swift_dynamicCast(plVar10,lVar26 + 0x2a0,PTR___type_metadata_for_Any_100eae0c0 + 8,in_x3,6);
    if (((ulong)plVar7 & 1) == 0) goto LAB_100474340;
    lVar18 = *plVar10;
    if ((lVar18 == 0) || (*(long *)(lVar18 + 0x10) == 0)) goto LAB_100474344;
    _swift_bridgeObjectRetain(lVar18);
    lVar8 = 0x646f6874656d;
    uVar15 = 0;
    FUN_10046483c(0x646f6874656d);
    if ((uVar15 & 1) == 0) {
      *(undefined8 *)(lVar26 + 0x2c8) = 0;
      *(undefined8 *)(lVar26 + 0x2c0) = 0;
      *(undefined8 *)(lVar26 + 0x2d8) = 0;
      *(undefined8 *)(lVar26 + 0x2d0) = 0;
    }
    else {
      FUN_10000cbfc(*(long *)(lVar18 + 0x38) + lVar8 * 0x20,lVar26 + 0x2c0);
    }
    _swift_bridgeObjectRelease(lVar18);
    if (*(long *)(lVar26 + 0x2d8) == 0) goto LAB_10047434c;
    lVar8 = lVar26 + 0x3a8;
    in_x3 = PTR___type_metadata_for_Swift_String_100eac208;
    _swift_dynamicCast(lVar8,lVar26 + 0x2c0,puVar3 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    uVar14 = *(undefined8 *)(lVar26 + 0x3a8);
    uVar16 = *(undefined8 *)(lVar26 + 0x3b0);
    if ((int)lVar8 == 0) {
      uVar14 = 0;
      uVar16 = 0;
    }
  }
  else {
LAB_100474340:
    lVar18 = 0;
LAB_100474344:
    *(undefined8 *)(lVar26 + 0x2c8) = 0;
    *(undefined8 *)(lVar26 + 0x2c0) = 0;
    *(undefined8 *)(lVar26 + 0x2d8) = 0;
    *(undefined8 *)(lVar26 + 0x2d0) = 0;
LAB_10047434c:
    FUN_100005808(lVar26 + 0x2c0,&DAT_100fc85a8,&DAT_100c4d0a8);
    uVar14 = 0;
    uVar16 = 0;
  }
  *(undefined8 *)(lVar26 + 0x580) = uVar16;
  *(undefined8 *)(lVar26 + 0x578) = uVar14;
  *(long *)(lVar26 + 0x570) = lVar18;
  *(char **)(lVar26 + 0x588) = ((String *)(lVar26 + 0x150))->str;
  *(undefined8 *)(lVar26 + 0x590) = *(undefined8 *)(lVar26 + 0x158);
  SVar28 = Swift::String::uppercased(*(String *)(lVar26 + 0x150));
  _Var11.unknown = SVar28.bridgeObject;
  if (SVar28.str == (undefined *)0x4554454c4544 && _Var11.unknown == &DAT_e600000000000000) {
    _swift_bridgeObjectRelease(_Var11.unknown);
  }
  else {
    in_x3 = &DAT_e600000000000000;
    bVar4 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar28.str,_Var11,(_StringComparisonResult)0x44);
    _swift_bridgeObjectRelease(_Var11.unknown);
    if (!bVar4) {
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
        _swift_task_switch(FUN_1004748b8,*(undefined8 *)(lVar26 + 0x478),0);
        return;
      }
      goto LAB_1004746c8;
    }
  }
  _swift_bridgeObjectRelease(uVar16);
  _swift_bridgeObjectRelease(lVar18);
  if (DAT_100fc8598 != -1) {
    _swift_once(&DAT_100fc8598,FUN_100470548);
  }
  uVar17 = *(undefined8 *)(lVar26 + 0x538);
  uVar19 = *(undefined8 *)(lVar26 + 0x530);
  uVar15 = *(ulong *)(lVar26 + 0x460);
  FUN_1000d468c(lVar26 + 0x1d8);
  uVar14 = *(undefined8 *)(lVar26 + 0x1f0);
  uVar16 = *(undefined8 *)(lVar26 + 0x1f8);
  FUN_100004640(lVar26 + 0x1d8,uVar14);
  UVar9.unknown = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  pcVar12 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(UVar9.unknown + 0x18) = 8;
  *(undefined8 *)(UVar9.unknown + 0x10) = 4;
  SVar28 = Foundation::UUID::get_uuidString(UVar9);
  SVar29.bridgeObject = in_x3;
  SVar29.str = pcVar12;
  Swift::String::append(SVar28,SVar29);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  *(undefined8 *)(UVar9.unknown + 0x20) = 0x3d746e65696c63;
  *(undefined1 **)(UVar9.unknown + 0x28) = &DAT_e700000000000000;
  *(undefined8 *)(UVar9.unknown + 0x30) = 0x4554454c4544;
  *(undefined1 **)(UVar9.unknown + 0x38) = &DAT_e600000000000000;
  *(undefined8 *)(UVar9.unknown + 0x40) = uVar19;
  *(undefined8 *)(UVar9.unknown + 0x48) = uVar17;
  *(undefined8 *)(lVar26 + 0x428) = 200;
  _swift_bridgeObjectRetain(uVar17);
  SVar28 = Swift::CustomStringConvertible::get_description();
  *(String *)(UVar9.unknown + 0x50) = SVar28;
  SVar28.bridgeObject = (void *)0x8000000100da6dc0;
  SVar28.str = (char *)0xd000000000000017;
  SVar30.bridgeObject = in_x3;
  SVar30.str = pcVar12;
  Swift::String::append(SVar28,SVar30);
  lVar18 = 1;
  FUN_1004645d8(1,5,1,UVar9.unknown);
  *(undefined8 *)(lVar18 + 0x10) = 5;
  *(undefined8 *)(lVar18 + 0x60) = 0x3d726f727265;
  *(undefined1 **)(lVar18 + 0x68) = &DAT_e600000000000000;
  *(long *)(lVar26 + 0x420) = lVar18;
  FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
  FUN_1004765d4();
  separator.bridgeObject = (void *)0xe100000000000000;
  separator.str = (char *)0x20;
  SVar28 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
  _swift_bridgeObjectRelease(uVar17);
  _swift_bridgeObjectRelease(lVar18);
  FUN_1000d4dd4(SVar28.str,SVar28.bridgeObject,uVar14,uVar16);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  FUN_100004594(lVar26 + 0x1d8);
  plVar10 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(lVar26 + 0x598) = plVar10;
  *plVar10 = lVar20;
  plVar10[1] = (long)FUN_1004746cc;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
    FUN_100471430(*(undefined8 *)(lVar26 + 0x458),uVar15 & 0xcfffffffffffffff,
                  *(undefined8 *)(lVar26 + 0x470),*(undefined8 *)(lVar26 + 0x510),
                  *(undefined8 *)(lVar26 + 0x478));
    return;
  }
LAB_1004746c8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004746cc | FUN_1004746cc */

void FUN_1004746cc(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long *unaff_x22;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  String SVar17;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar10 = 0x2d746e65746e6f43;
  lVar16 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar16 + 0x598);
  lVar3 = *unaff_x22;
  _swift_task_dealloc();
  thunk_FUN_10085c548();
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar1);
  if ((uVar10 & 1) == 0) {
    *(undefined8 *)(lVar16 + 0x430) = 0;
    SVar17 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar17.str,SVar17.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(uVar1);
  }
  else {
    _swift_release(uVar1);
  }
  uVar6 = *(undefined8 *)(lVar16 + 0x510);
  FUN_100476624(lVar16 + 0x150);
  FUN_10005241c(uVar6,FUN_10045ba0c);
  uVar6 = *(undefined8 *)(lVar16 + 0x510);
  uVar7 = *(undefined8 *)(lVar16 + 0x4f8);
  uVar8 = *(undefined8 *)(lVar16 + 0x4f0);
  uVar11 = *(undefined8 *)(lVar16 + 0x4e8);
  uVar12 = *(undefined8 *)(lVar16 + 0x4d0);
  uVar13 = *(undefined8 *)(lVar16 + 0x4c8);
  uVar14 = *(undefined8 *)(lVar16 + 0x4c0);
  uVar15 = *(undefined8 *)(lVar16 + 0x4b8);
  uVar9 = *(undefined8 *)(lVar16 + 0x4a8);
  uVar4 = *(undefined8 *)(lVar16 + 0x490);
  puVar5 = *(undefined8 **)(lVar16 + 0x450);
  puVar5[1] = 0x4b4f;
  *puVar5 = 200;
  puVar5[2] = &SUB_e200000000000000;
  puVar5[3] = uVar1;
  puVar5[5] = 0;
  puVar5[4] = 0;
  puVar5[7] = 0;
  puVar5[6] = 0;
  *(undefined1 *)(puVar5 + 8) = 2;
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001004748b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004748b8 | FUN_1004748b8 */

void FUN_1004748b8(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x5a0) = *(undefined8 *)(*(long *)(unaff_x22 + 0x478) + 0xa8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x550);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x548);
  _swift_retain();
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100474938,uVar2,uVar3);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100474938 | FUN_100474938 */

void FUN_100474938(void)

{
  int iVar1;
  bool bVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  UUID UVar4;
  long lVar5;
  char *pcVar6;
  void *in_x3;
  long *plVar7;
  undefined8 *puVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  String SVar21;
  String separator;
  String SVar22;
  String SVar23;
  
  plVar7 = *(long **)PTR____stack_chk_guard_100ea82f0;
  if (*(long **)(unaff_x22 + 0x5a0) == (long *)0x0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x570);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x580));
    _swift_bridgeObjectRelease(uVar10);
    if (DAT_100fc8598 != -1) {
      _swift_once(&DAT_100fc8598,FUN_100470548);
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x590);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x588);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x538);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x530);
    FUN_1000d468c(unaff_x22 + 0x200);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x220);
    FUN_100004640(unaff_x22 + 0x200,uVar13);
    UVar4.unknown = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(UVar4.unknown + 0x18) = 8;
    *(undefined8 *)(UVar4.unknown + 0x10) = 4;
    SVar21 = Foundation::UUID::get_uuidString(UVar4);
    SVar22.bridgeObject = in_x3;
    SVar22.str = pcVar6;
    Swift::String::append(SVar21,SVar22);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    *(undefined8 *)(UVar4.unknown + 0x20) = 0x3d746e65696c63;
    *(undefined1 **)(UVar4.unknown + 0x28) = &DAT_e700000000000000;
    *(undefined8 *)(UVar4.unknown + 0x30) = uVar15;
    *(undefined8 *)(UVar4.unknown + 0x38) = uVar19;
    *(undefined8 *)(UVar4.unknown + 0x40) = uVar17;
    *(undefined8 *)(UVar4.unknown + 0x48) = uVar12;
    *(undefined8 *)(unaff_x22 + 0x400) = 0x1f7;
    _swift_bridgeObjectRetain(uVar12);
    _swift_bridgeObjectRetain(uVar19);
    SVar21 = Swift::CustomStringConvertible::get_description();
    *(String *)(UVar4.unknown + 0x50) = SVar21;
    SVar21.bridgeObject = (void *)0x8000000100da6d40;
    SVar21.str = (char *)0xd000000000000015;
    SVar23.bridgeObject = in_x3;
    SVar23.str = pcVar6;
    Swift::String::append(SVar21,SVar23);
    lVar5 = 1;
    FUN_1004645d8(1,5,1,UVar4.unknown);
    *(undefined8 *)(lVar5 + 0x10) = 5;
    *(undefined8 *)(lVar5 + 0x60) = 0x3d726f727265;
    *(undefined1 **)(lVar5 + 0x68) = &DAT_e600000000000000;
    uVar11 = 0x2d746e65746e6f43;
    *(long *)(unaff_x22 + 0x410) = lVar5;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    FUN_1004765d4();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar21 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(uVar12);
    _swift_bridgeObjectRelease(lVar5);
    FUN_1000d4e0c(SVar21.str,SVar21.bridgeObject,uVar13,uVar10);
    _swift_bridgeObjectRelease(SVar21.bridgeObject);
    lVar5 = unaff_x22 + 0x200;
    FUN_100004594();
    thunk_FUN_10085c548();
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,lVar5)
    ;
    if ((uVar11 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 1000) = 0;
      SVar21 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar21.str,SVar21.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(lVar5);
    }
    else {
      _swift_release(lVar5);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x510);
    FUN_100476624(unaff_x22 + 0x150);
    FUN_10005241c(uVar10,FUN_10045ba0c);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x4f8);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x4f0);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x4e8);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x4c0);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x4b8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x4a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x490);
    puVar8 = *(undefined8 **)(unaff_x22 + 0x450);
    puVar8[1] = 0xd000000000000013;
    *puVar8 = 0x1f7;
    puVar8[2] = 0x8000000100da6d60;
    puVar8[3] = lVar5;
    puVar8[5] = 0;
    puVar8[4] = 0;
    puVar8[7] = 0;
    puVar8[6] = 0;
    *(undefined1 *)(puVar8 + 8) = 2;
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar17);
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar20);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar12);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    if (*(long **)PTR____stack_chk_guard_100ea82f0 == plVar7) {
                    /* WARNING: Could not recover jumptable at 0x000100474d60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
  }
  else {
    piVar9 = *(int **)(**(long **)(unaff_x22 + 0x5a0) + 0x1b8);
    iVar1 = *piVar9;
    plVar3 = (long *)(ulong)(uint)piVar9[1];
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x5a8) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_100474d80;
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 0x4c8);
    bVar2 = *(long **)PTR____stack_chk_guard_100ea82f0 == plVar7;
    plVar7 = plVar3;
    if (bVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001004749e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((long)iVar1 + (long)piVar9))(UNRECOVERED_JUMPTABLE,unaff_x22 + 0x150);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(plVar7,UNRECOVERED_JUMPTABLE);
}



/* Address: 0x100474d80 | FUN_100474d80 */

void FUN_100474d80(void)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x5a8));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_100474df4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100474df4 | FUN_100474df4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100474df4(undefined8 param_1,void *param_2,undefined8 param_3,void *param_4)

{
  bool bVar1;
  ulong uVar2;
  UUID UVar3;
  long *plVar4;
  NSData *pNVar5;
  ID IVar6;
  undefined *puVar7;
  long *plVar8;
  undefined1 *puVar9;
  _StringGuts _Var10;
  ulong uVar11;
  char *pcVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  Data DVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  AsyncThrowingStream AVar19;
  long unaff_x22;
  undefined8 uVar20;
  undefined8 uVar21;
  long lVar22;
  undefined8 uVar23;
  long lVar24;
  undefined8 uVar25;
  String SVar26;
  String separator;
  String SVar27;
  
  lVar13 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = unaff_x22 + 0x150;
  FUN_100471a18();
  if (((uVar2 & 1) == 0) || (FUN_1004fe634(), uVar2 != 400)) {
LAB_1004750c4:
    _Var10.unknown = *(undefined **)(unaff_x22 + 0x580);
    if ((_Var10.unknown == (undefined *)0x0) ||
       ((_Var10.unknown != (undefined *)0xea0000000000657a ||
         *(undefined **)(unaff_x22 + 0x578) != (undefined *)0x696c616974696e69 &&
        (bVar1 = Swift::_stringCompareWithSmolCheck
                           ((_StringGuts)*(undefined **)(unaff_x22 + 0x578),_Var10,
                            (_StringComparisonResult)0x69), !bVar1)))) {
      FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0x4c8),*(undefined8 *)(unaff_x22 + 0x4c0),
                    FUN_1004fe770);
    }
    else {
      if (*(ulong *)(unaff_x22 + 0x568) >> 0x3c < 0xf) {
        DVar16.unknown = *(undefined **)(unaff_x22 + 0x560);
        FUN_1001037b4(DVar16.unknown,*(ulong *)(unaff_x22 + 0x568));
        pNVar5 = Foundation::Data::_bridgeToObjectiveC(DVar16);
        *(undefined8 *)(unaff_x22 + 0x3d0) = 0;
        IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                          ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,unaff_x22 + 0x3d0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x3d0);
        if (IVar6 == 0) {
          uVar18 = *(undefined8 *)(unaff_x22 + 0x568);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x560);
          Foundation::__convertNSErrorToError();
          _swift_willThrow(0);
          FUN_10003bf18(uVar20,uVar18);
          _swift_errorRelease(uVar17);
          goto LAB_100475284;
        }
        plVar4 = (long *)(unaff_x22 + 0x3e0);
        Swift::__bridgeAnyObjectToAny();
        _swift_unknownObjectRelease(IVar6);
        puVar7 = &DAT_100fc8340;
        FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
        plVar8 = plVar4;
        _swift_dynamicCast(plVar4,unaff_x22 + 800,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar7,6
                          );
        if (((ulong)plVar8 & 1) == 0) {
          FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x560),*(undefined8 *)(unaff_x22 + 0x568));
          goto LAB_100475284;
        }
        lVar22 = *plVar4;
        if (*(long *)(lVar22 + 0x10) == 0) {
          uVar20 = *(undefined8 *)(unaff_x22 + 0x568);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x560);
          *(undefined8 *)(unaff_x22 + 0x348) = 0;
          *(undefined8 *)(unaff_x22 + 0x340) = 0;
          *(undefined8 *)(unaff_x22 + 0x358) = 0;
          *(undefined8 *)(unaff_x22 + 0x350) = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar22);
          puVar9 = &SUB_00006469;
          uVar2 = 0;
          FUN_10046483c(&SUB_00006469);
          uVar20 = *(undefined8 *)(unaff_x22 + 0x568);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x560);
          if ((uVar2 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar22);
            *(undefined8 *)(unaff_x22 + 0x348) = 0;
            *(undefined8 *)(unaff_x22 + 0x340) = 0;
            *(undefined8 *)(unaff_x22 + 0x358) = 0;
            *(undefined8 *)(unaff_x22 + 0x350) = 0;
          }
          else {
            FUN_10000cbfc(*(long *)(lVar22 + 0x38) + (long)puVar9 * 0x20,unaff_x22 + 0x340);
            _swift_bridgeObjectRelease(lVar22);
          }
        }
        FUN_10003bf18(uVar17,uVar20);
        _swift_bridgeObjectRelease(lVar22);
      }
      else {
LAB_100475284:
        *(undefined8 *)(unaff_x22 + 0x348) = 0;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x358) = 0;
        *(undefined8 *)(unaff_x22 + 0x350) = 0;
      }
      uVar17 = *(undefined8 *)(unaff_x22 + 0x4b8);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x4b0);
      FUN_1000c495c(*(undefined8 *)(unaff_x22 + 0x4c8),uVar17,FUN_1004fe770);
      _swift_getEnumCaseMultiPayload(uVar17,uVar20);
      if ((int)uVar17 == 2) {
        puVar14 = *(undefined8 **)(unaff_x22 + 0x4b8);
        uVar17 = *puVar14;
        uVar2 = puVar14[1];
        uVar18 = puVar14[2];
        uVar20 = uVar17;
        uVar11 = uVar2;
        FUN_100472aac();
        FUN_100005808(unaff_x22 + 0x340,&DAT_100fc85a8,&DAT_100c4d0a8);
        if (uVar11 >> 0x3c < 0xf) {
          FUN_10003bf2c(uVar17,uVar2);
          uVar2 = uVar11;
          uVar17 = uVar20;
        }
        puVar14 = *(undefined8 **)(unaff_x22 + 0x4c0);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x4b0);
        *puVar14 = uVar17;
        puVar14[1] = uVar2;
        puVar14[2] = uVar18;
        _swift_storeEnumTagMultiPayload(puVar14,uVar20,2);
      }
      else {
        if ((int)uVar17 == 3) {
          lVar22 = *(long *)(unaff_x22 + 0x4b8);
          uVar17 = *(undefined8 *)(unaff_x22 + 0x4a8);
          lVar24 = *(long *)(unaff_x22 + 0x4a0);
          AVar19.unknown = *(undefined **)(unaff_x22 + 0x498);
          puVar7 = &DAT_100fc85c0;
          FUN_1000037f0(&DAT_100fc85c0,&DAT_100c4d0c0);
          *(undefined8 *)(unaff_x22 + 0x5c8) = *(undefined8 *)(lVar22 + *(int *)(puVar7 + 0x30));
          (**(code **)(lVar24 + 0x20))(uVar17,lVar22,AVar19.unknown);
          Swift::AsyncThrowingStream::_makeAsyncIterator(AVar19);
          plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x5d0) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_10047585c;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar13) {
            Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x3b8));
            return;
          }
          goto LAB_10047550c;
        }
        uVar20 = *(undefined8 *)(unaff_x22 + 0x4c8);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
        uVar18 = *(undefined8 *)(unaff_x22 + 0x4b8);
        FUN_100005808(unaff_x22 + 0x340,&DAT_100fc85a8,&DAT_100c4d0a8);
        FUN_1000c495c(uVar20,uVar17,FUN_1004fe770);
        FUN_10005241c(uVar18,FUN_1004fe770);
      }
    }
    uVar2 = *(ulong *)(unaff_x22 + 0x460);
    plVar4 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x5e8) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100475cf4;
    uVar17 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x458);
    lVar22 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x4c8);
    FUN_100471e48();
    if ((uVar2 & 1) == 0) goto LAB_1004750c4;
    pcVar15 = *(char **)(unaff_x22 + 0x570);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x580));
    _swift_bridgeObjectRelease();
    FUN_1004fe828();
    pcVar12 = pcVar15;
    FUN_100472164();
    SVar26.bridgeObject = param_2;
    SVar26.str = pcVar12;
    _swift_bridgeObjectRelease(pcVar15);
    if (param_2 == (void *)0x0) {
      uVar17 = *(undefined8 *)(unaff_x22 + 0x4e8);
      lVar22 = *(long *)(unaff_x22 + 0x4e0);
      uVar20 = *(undefined8 *)(unaff_x22 + 0x4d8);
      UVar3 = Foundation::UUID::init();
      SVar26 = Foundation::UUID::get_uuidString(UVar3);
      (**(code **)(lVar22 + 8))(uVar17,uVar20);
    }
    *(String *)(unaff_x22 + 0x5b0) = SVar26;
    if (DAT_100fc8598 != -1) {
      _swift_once(&DAT_100fc8598,FUN_100470548);
    }
    uVar25 = *(undefined8 *)(unaff_x22 + 0x590);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x588);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x538);
    uVar23 = *(undefined8 *)(unaff_x22 + 0x530);
    uVar2 = *(ulong *)(unaff_x22 + 0x460);
    FUN_1000d468c(unaff_x22 + 0x228);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x240);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x248);
    FUN_100004640(unaff_x22 + 0x228,uVar18);
    UVar3.unknown = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
    pcVar12 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(UVar3.unknown + 0x18) = 8;
    *(undefined8 *)(UVar3.unknown + 0x10) = 4;
    SVar26 = Foundation::UUID::get_uuidString(UVar3);
    SVar27.bridgeObject = param_4;
    SVar27.str = pcVar12;
    Swift::String::append(SVar26,SVar27);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    *(undefined8 *)(UVar3.unknown + 0x20) = 0x3d746e65696c63;
    *(undefined1 **)(UVar3.unknown + 0x28) = &DAT_e700000000000000;
    *(undefined8 *)(UVar3.unknown + 0x30) = uVar21;
    *(undefined8 *)(UVar3.unknown + 0x38) = uVar25;
    *(undefined8 *)(UVar3.unknown + 0x40) = uVar23;
    *(undefined8 *)(UVar3.unknown + 0x48) = uVar20;
    *(undefined8 *)(unaff_x22 + 0x3f8) = 200;
    _swift_bridgeObjectRetain(uVar20);
    _swift_bridgeObjectRetain(uVar25);
    SVar26 = Swift::CustomStringConvertible::get_description();
    *(String *)(UVar3.unknown + 0x50) = SVar26;
    lVar22 = 1;
    FUN_1004645d8(1,5,1,UVar3.unknown);
    *(undefined8 *)(lVar22 + 0x10) = 5;
    *(undefined8 *)(lVar22 + 0x60) = 0xd000000000000018;
    *(undefined8 *)(lVar22 + 0x68) = 0x8000000100da6da0;
    *(long *)(unaff_x22 + 0x3f0) = lVar22;
    FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
    FUN_1004765d4();
    separator.bridgeObject = (void *)0xe100000000000000;
    separator.str = (char *)0x20;
    SVar26 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(uVar20);
    _swift_bridgeObjectRelease(lVar22);
    FUN_1000d4dd4(SVar26.str,SVar26.bridgeObject,uVar18,uVar17);
    _swift_bridgeObjectRelease(SVar26.bridgeObject);
    FUN_100004594(unaff_x22 + 0x228);
    plVar4 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x5c0) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_100475510;
    uVar17 = *(undefined8 *)(unaff_x22 + 0x510);
    uVar20 = *(undefined8 *)(unaff_x22 + 0x478);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x470);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x458);
    lVar22 = *(long *)PTR____stack_chk_guard_100ea82f0;
  }
  if (lVar22 == lVar13) {
    FUN_100471430(uVar21,uVar2 & 0xcfffffffffffffff,uVar18,uVar17,uVar20);
    return;
  }
LAB_10047550c:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100475510 | FUN_100475510 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100475510(void)

{
  long *plVar1;
  undefined1 uVar2;
  NSData *pNVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined1 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  Data DVar14;
  undefined8 uVar15;
  long *unaff_x22;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  
  lVar9 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar11 = *unaff_x22;
  uVar12 = *(ulong *)(lVar11 + 0x568);
  lVar16 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar11 + 0x5c0));
  if (uVar12 >> 0x3c < 0xf) {
    DVar14.unknown = *(undefined **)(lVar11 + 0x560);
    FUN_1001037b4(DVar14.unknown,*(undefined8 *)(lVar11 + 0x568));
    pNVar3 = Foundation::Data::_bridgeToObjectiveC(DVar14);
    *(undefined8 *)(lVar11 + 0x408) = 0;
    IVar4 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar3,0,lVar11 + 0x408);
    uVar5 = *(undefined8 *)(lVar11 + 0x408);
    if (IVar4 == 0) {
      uVar15 = *(undefined8 *)(lVar11 + 0x568);
      uVar17 = *(undefined8 *)(lVar11 + 0x560);
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_10003bf18(uVar17,uVar15);
      _swift_errorRelease(uVar5);
    }
    else {
      plVar1 = (long *)(lVar11 + 0x418);
      Swift::__bridgeAnyObjectToAny();
      _swift_unknownObjectRelease(IVar4);
      puVar6 = &DAT_100fc8340;
      FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
      plVar7 = plVar1;
      _swift_dynamicCast(plVar1,lVar11 + 0x2e0,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
      if (((ulong)plVar7 & 1) != 0) {
        lVar13 = *plVar1;
        if (*(long *)(lVar13 + 0x10) == 0) {
          uVar15 = *(undefined8 *)(lVar11 + 0x568);
          uVar5 = *(undefined8 *)(lVar11 + 0x560);
          *(undefined8 *)(lVar11 + 0x308) = 0;
          *(undefined8 *)(lVar11 + 0x300) = 0;
          *(undefined8 *)(lVar11 + 0x318) = 0;
          *(undefined8 *)(lVar11 + 0x310) = 0;
        }
        else {
          _swift_bridgeObjectRetain(lVar13);
          puVar8 = &SUB_00006469;
          uVar12 = 0;
          FUN_10046483c(&SUB_00006469);
          uVar15 = *(undefined8 *)(lVar11 + 0x568);
          uVar5 = *(undefined8 *)(lVar11 + 0x560);
          if ((uVar12 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar13);
            *(undefined8 *)(lVar11 + 0x308) = 0;
            *(undefined8 *)(lVar11 + 0x300) = 0;
            *(undefined8 *)(lVar11 + 0x318) = 0;
            *(undefined8 *)(lVar11 + 0x310) = 0;
          }
          else {
            FUN_10000cbfc(*(long *)(lVar13 + 0x38) + (long)puVar8 * 0x20,lVar11 + 0x300);
            _swift_bridgeObjectRelease(lVar13);
          }
        }
        FUN_10003bf18(uVar5,uVar15);
        _swift_bridgeObjectRelease(lVar13);
        goto LAB_1004756d0;
      }
      FUN_10003bf18(*(undefined8 *)(lVar11 + 0x560),*(undefined8 *)(lVar11 + 0x568));
    }
  }
  *(undefined8 *)(lVar11 + 0x308) = 0;
  *(undefined8 *)(lVar11 + 0x300) = 0;
  *(undefined8 *)(lVar11 + 0x318) = 0;
  *(undefined8 *)(lVar11 + 0x310) = 0;
LAB_1004756d0:
  uVar5 = *(undefined8 *)(lVar11 + 0x5b8);
  uVar15 = *(undefined8 *)(lVar11 + 0x5a0);
  uVar17 = *(undefined8 *)(lVar11 + 0x510);
  uVar19 = *(undefined8 *)(lVar11 + 0x4c8);
  FUN_1004725e0((undefined8 *)(lVar11 + 0x108),lVar11 + 0x300,*(undefined8 *)(lVar11 + 0x5b0),uVar5)
  ;
  _swift_release(uVar15);
  _swift_bridgeObjectRelease(uVar5);
  FUN_100476624(lVar11 + 0x150);
  FUN_100005808(lVar11 + 0x300,&DAT_100fc85a8,&DAT_100c4d0a8);
  FUN_10005241c(uVar19,FUN_1004fe770);
  FUN_10005241c(uVar17,FUN_10045ba0c);
  uVar2 = *(undefined1 *)(lVar11 + 0x148);
  uVar5 = *(undefined8 *)(lVar11 + 0x510);
  uVar15 = *(undefined8 *)(lVar11 + 0x4f8);
  uVar17 = *(undefined8 *)(lVar11 + 0x4f0);
  uVar18 = *(undefined8 *)(lVar11 + 0x4e8);
  uVar20 = *(undefined8 *)(lVar11 + 0x4d0);
  uVar21 = *(undefined8 *)(lVar11 + 0x4c8);
  uVar22 = *(undefined8 *)(lVar11 + 0x4c0);
  uVar23 = *(undefined8 *)(lVar11 + 0x4b8);
  uVar24 = *(undefined8 *)(lVar11 + 0x4a8);
  uVar19 = *(undefined8 *)(lVar11 + 0x490);
  puVar10 = *(undefined8 **)(lVar11 + 0x450);
  uVar26 = *(undefined8 *)(lVar11 + 0x130);
  uVar25 = *(undefined8 *)(lVar11 + 0x128);
  uVar28 = *(undefined8 *)(lVar11 + 0x140);
  uVar27 = *(undefined8 *)(lVar11 + 0x138);
  uVar29 = *(undefined8 *)(lVar11 + 0x108);
  uVar31 = *(undefined8 *)(lVar11 + 0x120);
  uVar30 = *(undefined8 *)(lVar11 + 0x118);
  puVar10[1] = *(undefined8 *)(lVar11 + 0x110);
  *puVar10 = uVar29;
  puVar10[3] = uVar31;
  puVar10[2] = uVar30;
  puVar10[5] = uVar26;
  puVar10[4] = uVar25;
  puVar10[7] = uVar28;
  puVar10[6] = uVar27;
  *(undefined1 *)(puVar10 + 8) = uVar2;
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar19);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar9) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Could not recover jumptable at 0x000100475818. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Address: 0x10047585c | FUN_10047585c */

void FUN_10047585c(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x5d0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100475908;
    pcVar1 = FUN_10047590c;
  }
  else {
    *(long *)(lVar3 + 0x5d8) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100475908:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100475acc;
  }
  _swift_task_switch(pcVar1);
  return;
}



/* Address: 0x10047590c | FUN_10047590c */

void FUN_10047590c(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar4 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (*(ulong *)(unaff_x22 + 0x3c0) >> 0x3c < 0xf) {
    FUN_10003bf18(*(undefined8 *)(unaff_x22 + 0x3b8));
    plVar5 = (long *)(ulong)*(uint *)(PTR__next_100eaee88 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x5e0) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100475c44;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      Swift::AsyncThrowingStream::Iterator::_next((undefined *)(unaff_x22 + 0x3b8));
      return;
    }
  }
  else {
    lVar6 = *(long *)(unaff_x22 + 0x5c8);
    plVar5 = *(long **)(unaff_x22 + 0x4c0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x4b0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4a8);
    lVar11 = *(long *)(unaff_x22 + 0x4a0);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x498);
    lVar3 = *(long *)(unaff_x22 + 0x480);
    (**(code **)(*(long *)(unaff_x22 + 0x488) + 8))(*(undefined8 *)(unaff_x22 + 0x490));
    lVar1 = unaff_x22 + 0x340;
    FUN_1004722d8();
    lVar2 = lVar6;
    FUN_100472db4();
    _swift_bridgeObjectRelease(lVar6);
    (**(code **)(lVar11 + 8))(uVar9,uVar10);
    FUN_100005808(unaff_x22 + 0x340,&DAT_100fc85a8,&DAT_100c4d0a8);
    *plVar5 = lVar1;
    plVar5[1] = lVar3;
    plVar5[2] = lVar2;
    _swift_storeEnumTagMultiPayload(plVar5,uVar8,2);
    uVar7 = *(ulong *)(unaff_x22 + 0x460);
    plVar5 = (long *)0x100;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x5e8) = plVar5;
    *plVar5 = unaff_x22;
    plVar5[1] = (long)FUN_100475cf4;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar4) {
      FUN_100471430(*(undefined8 *)(unaff_x22 + 0x458),uVar7 & 0xcfffffffffffffff,
                    *(undefined8 *)(unaff_x22 + 0x470),*(undefined8 *)(unaff_x22 + 0x510),
                    *(undefined8 *)(unaff_x22 + 0x478));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100475acc | FUN_100475acc */

void FUN_100475acc(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar9 = *(undefined8 *)(unaff_x22 + 0x5d8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x5c8);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x4c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x4b0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x4a8);
  lVar13 = *(long *)(unaff_x22 + 0x4a0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x480);
  (**(code **)(*(long *)(unaff_x22 + 0x488) + 8))(*(undefined8 *)(unaff_x22 + 0x490));
  uVar1 = uVar10;
  FUN_100472164();
  _swift_bridgeObjectRelease(uVar10);
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_100472ca4();
  _swift_errorRelease(uVar9);
  (**(code **)(lVar13 + 8))(uVar11,uVar12);
  FUN_100005808(unaff_x22 + 0x340,&DAT_100fc85a8,&DAT_100c4d0a8);
  puVar7[1] = 0xd000000000000018;
  *puVar7 = 500;
  puVar7[2] = 0x8000000100da6d80;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 4) = 4;
  puVar7[5] = uVar1;
  puVar7[6] = uVar4;
  puVar7[7] = puVar2;
  _swift_storeEnumTagMultiPayload(puVar7,uVar6,4);
  uVar8 = *(ulong *)(unaff_x22 + 0x460);
  plVar3 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x5e8) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100475cf4;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    FUN_100471430(*(undefined8 *)(unaff_x22 + 0x458),uVar8 & 0xcfffffffffffffff);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100475c44 | FUN_100475c44 */

void FUN_100475c44(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x5e0));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_100475cf0;
    pcVar1 = FUN_10047590c;
  }
  else {
    *(long *)(lVar3 + 0x5d8) = unaff_x20;
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_100475cf0:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_100475acc;
  }
  _swift_task_switch(pcVar1);
  return;
}



/* Address: 0x100475cf4 | FUN_100475cf4 */

void FUN_100475cf4(void)

{
  undefined1 uVar1;
  bool bVar2;
  UUID UVar3;
  UUID UVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  char *pcVar7;
  void *in_x3;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  long *unaff_x22;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  String SVar30;
  String SVar31;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar20 = *unaff_x22;
  lVar11 = *(long *)(lVar20 + 0x580);
  lVar14 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar20 + 0x5e8));
  if (lVar11 == 0) {
LAB_100475e10:
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar20 + 0x570));
  }
  else {
    _Var5.unknown = *(undefined **)(lVar20 + 0x580);
    if (*(undefined **)(lVar20 + 0x578) != (undefined *)0x61632f736c6f6f74 ||
        _Var5.unknown != (undefined *)0xea00000000006c6c) {
      in_x3 = (void *)0xea00000000006c6c;
      bVar2 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(lVar20 + 0x578),_Var5,
                         (_StringComparisonResult)0x74);
      if (!bVar2) goto LAB_100475e10;
    }
    uVar12 = *(undefined8 *)(lVar20 + 0x570);
    uVar6 = uVar12;
    FUN_100472e88();
    *(undefined8 *)(lVar20 + 0x5f0) = uVar6;
    *(undefined **)(lVar20 + 0x5f8) = _Var5.unknown;
    _swift_bridgeObjectRelease(uVar12);
    if (_Var5.unknown != (undefined *)0x0) {
      puVar9 = (undefined8 *)
               (*(long *)(lVar20 + 0x510) + (long)*(int *)(*(long *)(lVar20 + 0x500) + 0x14));
      *(undefined8 *)(lVar20 + 0x600) = *puVar9;
      *(undefined8 *)(lVar20 + 0x608) = puVar9[1];
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
        _swift_task_switch(FUN_100476124,*(undefined8 *)(lVar20 + 0x478),0);
        return;
      }
      goto LAB_100476120;
    }
  }
  if (DAT_100fc8598 != -1) {
    _swift_once(&DAT_100fc8598,FUN_100470548);
  }
  uVar18 = *(undefined8 *)(lVar20 + 0x590);
  uVar10 = *(undefined8 *)(lVar20 + 0x588);
  lVar13 = *(long *)(lVar20 + 0x580);
  uVar15 = *(undefined8 *)(lVar20 + 0x538);
  uVar16 = *(undefined8 *)(lVar20 + 0x530);
  FUN_1000d468c(lVar20 + 0x250);
  uVar6 = *(undefined8 *)(lVar20 + 0x268);
  uVar12 = *(undefined8 *)(lVar20 + 0x270);
  lVar11 = lVar20 + 0x250;
  FUN_100004640();
  FUN_1004fe634();
  UVar3.unknown = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  pcVar7 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(UVar3.unknown + 0x18) = 8;
  *(undefined8 *)(UVar3.unknown + 0x10) = 4;
  SVar30 = Foundation::UUID::get_uuidString(UVar3);
  SVar31.bridgeObject = in_x3;
  SVar31.str = pcVar7;
  Swift::String::append(SVar30,SVar31);
  _swift_bridgeObjectRelease(SVar30.bridgeObject);
  *(undefined8 *)(UVar3.unknown + 0x20) = 0x3d746e65696c63;
  *(undefined1 **)(UVar3.unknown + 0x28) = &DAT_e700000000000000;
  *(undefined8 *)(UVar3.unknown + 0x30) = uVar10;
  *(undefined8 *)(UVar3.unknown + 0x38) = uVar18;
  *(undefined8 *)(UVar3.unknown + 0x40) = uVar16;
  *(undefined8 *)(UVar3.unknown + 0x48) = uVar15;
  *(long *)(lVar20 + 0x3c8) = lVar11;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar18);
  SVar30 = Swift::CustomStringConvertible::get_description();
  *(String *)(UVar3.unknown + 0x50) = SVar30;
  *(undefined **)(lVar20 + 0x3d8) = UVar3.unknown;
  UVar4.unknown = UVar3.unknown;
  if (lVar13 != 0) {
    uVar10 = *(undefined8 *)(lVar20 + 0x578);
    _swift_bridgeObjectRetain(lVar13);
    UVar4.unknown = &DAT_00000001;
    FUN_1004645d8(1,5,1,UVar3.unknown);
    *(undefined8 *)(UVar4.unknown + 0x10) = 5;
    *(undefined8 *)(UVar4.unknown + 0x60) = uVar10;
    *(long *)(UVar4.unknown + 0x68) = lVar13;
    *(undefined **)(lVar20 + 0x3d8) = UVar4.unknown;
  }
  uVar16 = *(undefined8 *)(lVar20 + 0x5a0);
  uVar15 = *(undefined8 *)(lVar20 + 0x538);
  uVar18 = *(undefined8 *)(lVar20 + 0x510);
  uVar10 = *(undefined8 *)(lVar20 + 0x4c8);
  uVar21 = *(undefined8 *)(lVar20 + 0x4c0);
  FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
  FUN_1004765d4();
  SVar30.bridgeObject = (void *)0xe100000000000000;
  SVar30.str = (char *)0x20;
  SVar30 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar30);
  _swift_bridgeObjectRelease(lVar13);
  _swift_bridgeObjectRelease(uVar15);
  _swift_bridgeObjectRelease(UVar4.unknown);
  FUN_1000d4dd4(SVar30.str,SVar30.bridgeObject,uVar6,uVar12);
  _swift_bridgeObjectRelease(SVar30.bridgeObject);
  FUN_100004594(lVar20 + 0x250);
  FUN_100472fec(lVar20 + 0xc0,uVar21);
  _swift_release(uVar16);
  FUN_100476624(lVar20 + 0x150);
  FUN_10005241c(uVar21,FUN_1004fe770);
  FUN_10005241c(uVar10,FUN_1004fe770);
  FUN_10005241c(uVar18,FUN_10045ba0c);
  uVar1 = *(undefined1 *)(lVar20 + 0x100);
  uVar6 = *(undefined8 *)(lVar20 + 0x510);
  uVar10 = *(undefined8 *)(lVar20 + 0x4f8);
  uVar16 = *(undefined8 *)(lVar20 + 0x4f0);
  uVar12 = *(undefined8 *)(lVar20 + 0x4e8);
  uVar15 = *(undefined8 *)(lVar20 + 0x4d0);
  uVar18 = *(undefined8 *)(lVar20 + 0x4c8);
  uVar21 = *(undefined8 *)(lVar20 + 0x4c0);
  uVar17 = *(undefined8 *)(lVar20 + 0x4b8);
  uVar19 = *(undefined8 *)(lVar20 + 0x4a8);
  uVar22 = *(undefined8 *)(lVar20 + 0x490);
  puVar9 = *(undefined8 **)(lVar20 + 0x450);
  uVar24 = *(undefined8 *)(lVar20 + 0xe8);
  uVar23 = *(undefined8 *)(lVar20 + 0xe0);
  uVar26 = *(undefined8 *)(lVar20 + 0xf8);
  uVar25 = *(undefined8 *)(lVar20 + 0xf0);
  uVar27 = *(undefined8 *)(lVar20 + 0xc0);
  uVar29 = *(undefined8 *)(lVar20 + 0xd8);
  uVar28 = *(undefined8 *)(lVar20 + 0xd0);
  puVar9[1] = *(undefined8 *)(lVar20 + 200);
  *puVar9 = uVar27;
  puVar9[3] = uVar29;
  puVar9[2] = uVar28;
  puVar9[5] = uVar24;
  puVar9[4] = uVar23;
  puVar9[7] = uVar26;
  puVar9[6] = uVar25;
  *(undefined1 *)(puVar9 + 8) = uVar1;
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar22);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x000100476104. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar14 + 8))();
    return;
  }
LAB_100476120:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100476124 | FUN_100476124 */

void FUN_100476124(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  undefined8 uVar8;
  
  lVar1 = _TtC8PasteMCP9MCPServer::analytics;
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar5 = *(long *)(unaff_x22 + 0x478);
  _swift_beginAccess(lVar5 + _TtC8PasteMCP9MCPServer::analytics,unaff_x22 + 0x378,0,0);
  FUN_100011090(lVar5 + lVar1,unaff_x22 + 0x278,&DAT_100fc85b8,&DAT_100c4d0b8);
  if (*(long *)(unaff_x22 + 0x290) == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x5f8));
    FUN_100005808(unaff_x22 + 0x278,&DAT_100fc85b8,&DAT_100c4d0b8);
  }
  else {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x608);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x600);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x5f8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x5f0);
    FUN_100076688(unaff_x22 + 0x278,unaff_x22 + 0x188);
    FUN_100005808(unaff_x22 + 0x278,&DAT_100fc85b8,&DAT_100c4d0b8);
    lVar1 = *(long *)(unaff_x22 + 0x1a8);
    FUN_100004640(unaff_x22 + 0x188,*(undefined8 *)(unaff_x22 + 0x1a0));
    uVar2 = uVar7;
    FUN_10045b670(uVar8,uVar7,uVar4,uVar6);
    (**(code **)(lVar1 + 0x18))();
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar2);
    _swift_bridgeObjectRelease(uVar4);
    FUN_100004594(unaff_x22 + 0x188);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar3) {
    _swift_task_switch(FUN_10047629c);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10047629c | FUN_10047629c */

void FUN_10047629c(void)

{
  undefined1 uVar1;
  long lVar2;
  UUID UVar3;
  UUID UVar4;
  undefined8 uVar5;
  char *pcVar6;
  void *in_x3;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  String SVar26;
  String SVar27;
  
  lVar7 = *(long *)PTR____stack_chk_guard_100ea82f0;
  if (DAT_100fc8598 != -1) {
    _swift_once(&DAT_100fc8598,FUN_100470548);
  }
  uVar13 = *(undefined8 *)(unaff_x22 + 0x590);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x588);
  lVar11 = *(long *)(unaff_x22 + 0x580);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x530);
  FUN_1000d468c(unaff_x22 + 0x250);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar2 = unaff_x22 + 0x250;
  FUN_100004640();
  FUN_1004fe634();
  UVar3.unknown = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  pcVar6 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(UVar3.unknown + 0x18) = 8;
  *(undefined8 *)(UVar3.unknown + 0x10) = 4;
  SVar26 = Foundation::UUID::get_uuidString(UVar3);
  SVar27.bridgeObject = in_x3;
  SVar27.str = pcVar6;
  Swift::String::append(SVar26,SVar27);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  *(undefined8 *)(UVar3.unknown + 0x20) = 0x3d746e65696c63;
  *(undefined1 **)(UVar3.unknown + 0x28) = &DAT_e700000000000000;
  *(undefined8 *)(UVar3.unknown + 0x30) = uVar10;
  *(undefined8 *)(UVar3.unknown + 0x38) = uVar13;
  *(undefined8 *)(UVar3.unknown + 0x40) = uVar12;
  *(undefined8 *)(UVar3.unknown + 0x48) = uVar15;
  *(long *)(unaff_x22 + 0x3c8) = lVar2;
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar13);
  SVar26 = Swift::CustomStringConvertible::get_description();
  *(String *)(UVar3.unknown + 0x50) = SVar26;
  *(undefined **)(unaff_x22 + 0x3d8) = UVar3.unknown;
  UVar4.unknown = UVar3.unknown;
  if (lVar11 != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x578);
    _swift_bridgeObjectRetain(lVar11);
    UVar4.unknown = &DAT_00000001;
    FUN_1004645d8(1,5,1,UVar3.unknown);
    *(undefined8 *)(UVar4.unknown + 0x10) = 5;
    *(undefined8 *)(UVar4.unknown + 0x60) = uVar10;
    *(long *)(UVar4.unknown + 0x68) = lVar11;
    *(undefined **)(unaff_x22 + 0x3d8) = UVar4.unknown;
  }
  uVar10 = *(undefined8 *)(unaff_x22 + 0x5a0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x538);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x510);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
  FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
  FUN_1004765d4();
  SVar26.bridgeObject = (void *)0xe100000000000000;
  SVar26.str = (char *)0x20;
  SVar26 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar26);
  _swift_bridgeObjectRelease(lVar11);
  _swift_bridgeObjectRelease(uVar12);
  _swift_bridgeObjectRelease(UVar4.unknown);
  FUN_1000d4dd4(SVar26.str,SVar26.bridgeObject,uVar5,uVar8);
  _swift_bridgeObjectRelease(SVar26.bridgeObject);
  FUN_100004594(unaff_x22 + 0x250);
  FUN_100472fec(unaff_x22 + 0xc0,uVar17);
  _swift_release(uVar10);
  FUN_100476624(unaff_x22 + 0x150);
  FUN_10005241c(uVar17,FUN_1004fe770);
  FUN_10005241c(uVar15,FUN_1004fe770);
  FUN_10005241c(uVar13,FUN_10045ba0c);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x100);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x510);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x4e8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x4c0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x4b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x450);
  uVar20 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar19 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar23 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar25 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar24 = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar9[1] = *(undefined8 *)(unaff_x22 + 200);
  *puVar9 = uVar23;
  puVar9[3] = uVar25;
  puVar9[2] = uVar24;
  puVar9[5] = uVar20;
  puVar9[4] = uVar19;
  puVar9[7] = uVar22;
  puVar9[6] = uVar21;
  *(undefined1 *)(puVar9 + 8) = uVar1;
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar7) {
                    /* WARNING: Could not recover jumptable at 0x0001004765b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004765d4 | FUN_1004765d4 */

void FUN_1004765d4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc85b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc7eb8;
  FUN_100005c24(&DAT_100fc7eb8,&DAT_100c4c8c0);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fc85b0 = puVar2;
  return;
}



/* Address: 0x100476624 | FUN_100476624 */

undefined8 FUN_100476624(undefined8 param_1)

{
  FUN_1004ffd4c();
  return param_1;
}



/* Address: 0x100476658 | FUN_100476658 */

void FUN_100476658(void)

{
  undefined *puVar1;
  ulong uVar2;
  long unaff_x20;
  
  puVar1 = &DAT_100fc8590;
  FUN_1000037f0(&DAT_100fc8590,&DAT_100c4d098);
  uVar2 = (ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50);
  (**(code **)(*(long *)(puVar1 + -8) + 8))
            (unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1004766bc | FUN_1004766bc */

void FUN_1004766bc(undefined8 param_1)

{
  byte bVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  puVar2 = &DAT_100fc8590;
  FUN_1000037f0(&DAT_100fc8590,&DAT_100c4d098);
  bVar1 = *(byte *)(*(long *)(puVar2 + -8) + 0x50);
  plVar3 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10047059c(param_1,unaff_x20 + ((ulong)bVar1 + 0x10 & ((ulong)bVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100476738 | FUN_100476738 */

undefined8 FUN_100476738(undefined8 param_1)

{
  FUN_10044b95c();
  return param_1;
}



/* Address: 0x10047676c | FUN_10047676c */

void FUN_10047676c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc85c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8ba10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8ba10,&DAT_100eeb2d0);
  DAT_100fc85c8 = pTVar1;
  return;
}



/* Address: 0x1004767ac | FUN_1004767ac */

void FUN_1004767ac(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1004767d0 | FUN_1004767d0 */

undefined8 FUN_1004767d0(undefined8 param_1)

{
  FUN_1002aa0fc();
  return param_1;
}



/* Address: 0x100476804 | FUN_100476804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100476d24) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001004769c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100476804(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  void *pvVar2;
  DirectoryHint DVar3;
  UUID UVar4;
  URL UVar6;
  NSDictionary *pNVar7;
  Data DVar8;
  ID IVar9;
  URL UVar10;
  UUID UVar11;
  NSURL *pNVar12;
  NSURL *pNVar13;
  char *pcVar14;
  undefined8 extraout_x1;
  undefined8 uVar15;
  Data DVar16;
  URL UVar17;
  long lVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar19;
  undefined *puVar20;
  long lVar21;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar22;
  long unaff_x21;
  long lVar23;
  code *pcVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  long local_c0;
  URL local_b8;
  char *local_78;
  void *pvStack_70;
  long local_68;
  long lVar5;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_c8 = param_1;
  UVar4 = Foundation::UUID::typeMetadataAccessor();
  lVar18 = *(long *)(UVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  DVar3 = Foundation::URL::DirectoryHint::typeMetadataAccessor();
  lVar5 = CONCAT71((int7)((ulong)UVar4.unknown >> 8),DVar3.value);
  lVar25 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar25 + 0x40));
  lVar23 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) -
           (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar26 = *(long *)(UVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar26 + 0x40));
  lVar19 = lVar23 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar20 = (undefined *)(lVar19 - extraout_x12);
  local_b8.unknown = puVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar21 = (long)puVar20 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar22 = lVar21 - extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar27 = lVar22 - extraout_x12_02;
  FUN_100478338(lVar22);
  local_78 = (char *)0x70636d;
  pvStack_70 = (void *)0xe300000000000000;
  lVar19 = lVar23;
  (**(code **)(lVar25 + 0x68))
            (lVar23,*(undefined4 *)
                     PTR___enum_case_for_Foundation_URL_DirectoryHint_inferFromPath_Foundation_URL_DirectoryHint_Type___>_Foundation_URL_DirectoryHint_100ea7080
             ,lVar5);
  FUN_10045b990();
  Foundation::URL::_appending
            (lVar27,lVar19,lVar23,PTR___type_metadata_for_Swift_String_100eac208,lVar19);
  (**(code **)(lVar25 + 8))(lVar23,lVar5);
  pcVar24 = *(code **)(lVar26 + 8);
  (*pcVar24)(lVar22,UVar6.unknown);
  lVar19 = lVar27;
  FUN_1004771bc(lVar27,param_3,param_4);
  (*pcVar24)(lVar27,UVar6.unknown);
  pNVar7 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(lVar19);
  local_78 = (char *)0x0;
  UVar17.unknown = (undefined *)0x3;
  DVar8.unknown =
       (undefined *)
       objc_stub::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar7,3,&local_78);
  if (DVar8.unknown == (undefined *)0x0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    goto LAB_100476cac;
  }
  uVar15 = extraout_x1;
  DVar8 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar8);
  IVar9 = objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = (undefined *)objc_stub::temporaryDirectory(IVar9);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar10);
  local_78 = (char *)0x636d2d6574736170;
  pvStack_70 = (void *)0xeb000000002d6270;
  UVar11 = Foundation::UUID::init();
  SVar28 = Foundation::UUID::get_uuidString(UVar11);
  (**(code **)(lVar18 + 8))(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar4.unknown);
  SVar31.bridgeObject = UVar17.unknown;
  SVar31.str = (char *)pNVar7;
  Swift::String::append(SVar28,SVar31);
  _swift_bridgeObjectRelease(SVar28.bridgeObject);
  pvVar2 = pvStack_70;
  SVar28.bridgeObject = pvStack_70;
  SVar28.str = local_78;
  Foundation::URL::appendingPathComponent(SVar28,true,UVar17);
  _swift_bridgeObjectRelease(pvVar2);
  (*pcVar24)(lVar27,UVar6.unknown);
  UVar17.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  UVar10.unknown = Foundation::URL::_bridgeToObjectiveC(UVar17);
  local_78 = (char *)0x0;
  IVar9 = objc_stub::createDirectoryAtURL_withIntermediateDirectories_attributes_error_
                    ((ID)UVar17.unknown,UVar10.unknown,1,0,&local_78);
  UVar17.unknown = local_b8.unknown;
  if ((int)IVar9 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
LAB_100476c98:
    FUN_10003bf2c(DVar8.unknown,uVar15);
  }
  else {
    SVar29.bridgeObject = (void *)0xed00006e6f736a2e;
    SVar29.str = (char *)0x74736566696e616d;
    Foundation::URL::appendingPathComponent(SVar29,UVar10);
    DVar16 = DVar8;
    Foundation::Data::_write(UVar17,(NSDataWritingOptions)0x0,DVar8);
    if (unaff_x21 != 0) {
      (*pcVar24)(UVar17.unknown,UVar6.unknown);
      FUN_100476f00(lVar21);
      goto LAB_100476c98;
    }
    (*pcVar24)(UVar17.unknown,UVar6.unknown);
    puVar20 = (undefined *)objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
    lVar19 = local_c0;
    UVar17.unknown = puVar20;
    FUN_10047700c(local_c0);
    pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar17);
    (*pcVar24)(lVar19,UVar6.unknown);
    SVar30.bridgeObject = (void *)0xee00676e702e6e6f;
    SVar30.str = (char *)0x63692d6574736170;
    UVar17 = Foundation::URL::appendingPathComponent(SVar30,DVar16.unknown);
    pNVar13 = Foundation::URL::_bridgeToObjectiveC(UVar17);
    (*pcVar24)(lVar27,UVar6.unknown);
    local_78 = (char *)0x0;
    IVar9 = objc_stub::copyItemAtURL_toURL_error_((ID)puVar20,pNVar12,pNVar13,&local_78);
    if ((int)IVar9 == 0) {
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
    }
    else {
      UVar17.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
      uVar1 = local_c8;
      pNVar12 = Foundation::URL::_bridgeToObjectiveC(UVar17);
      local_78 = (char *)0x0;
      IVar9 = objc_stub::removeItemAtURL_error_((ID)UVar17.unknown,pNVar12,&local_78);
      if ((int)IVar9 == 0) {
        pcVar14 = local_78;
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(pcVar14);
      }
      objc_stub::defaultManager((ID)&_OBJC_CLASS___NSFileManager);
      FUN_100adf278(lVar21,uVar1,0,0,0);
    }
    FUN_100476f00(lVar21);
    FUN_10003bf2c(DVar8.unknown,uVar15);
  }
  (*pcVar24)(lVar21,UVar6.unknown);
LAB_100476cac:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100476f00 | FUN_100476f00 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100476f00(void)

{
  URL self;
  NSURL *pNVar1;
  ID IVar2;
  undefined8 uVar3;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  self.unknown = (undefined *)objc_stub::defaultManager(&_OBJC_CLASS___NSFileManager);
  pNVar1 = Foundation::URL::_bridgeToObjectiveC(self);
  local_40 = 0;
  IVar2 = objc_stub::removeItemAtURL_error_((ID)self.unknown,pNVar1,&local_40);
  if ((int)IVar2 == 0) {
    uVar3 = local_40;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar3);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
      return uVar3;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return local_40;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10047700c | FUN_10047700c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10047700c(undefined8 param_1)

{
  ID self;
  URL UVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  URL UVar5;
  undefined8 uVar6;
  long extraout_x8;
  long lVar7;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  if (DAT_100fc7db8 != -1) {
    _swift_once(&DAT_100fc7db8,FUN_10045903c);
  }
  self = DAT_101057ac8;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  pNVar4 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  UVar5.unknown =
       (undefined *)objc_stub::URLForResource_withExtension_subdirectory_(self,pNVar2,pNVar3,pNVar4)
  ;
  uVar6 = 0;
  if (UVar5.unknown == (undefined *)0x0) {
    FUN_1004778f0(0);
    _swift_allocError(&DAT_100ed6e50,uVar6,0,0);
    _swift_willThrow();
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
    (**(code **)(lVar7 + 0x20))
              (param_1,&stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               UVar1.unknown);
  }
  return;
}



/* Address: 0x1004771a0 | FUN_1004771a0 */

undefined1  [16] FUN_1004771a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100da6f90;
  auVar1._0_8_ = 0xd000000000000027;
  return auVar1;
}



/* Address: 0x1004771bc | FUN_1004771bc */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_1004771bc(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  URL UVar6;
  ID IVar7;
  URL UVar8;
  URL UVar9;
  undefined *puVar10;
  undefined *puVar11;
  long extraout_x8;
  long extraout_x12;
  code *pcVar12;
  String SVar13;
  String SVar14;
  undefined8 local_4d0;
  undefined8 uStack_4c8;
  char *local_4c0;
  undefined *local_4b8;
  undefined *local_4b0;
  undefined *local_4a8;
  long local_4a0;
  undefined *local_498;
  undefined *local_490;
  undefined8 *local_488;
  undefined *puStack_480;
  undefined8 *local_478;
  undefined *local_470;
  undefined8 local_468;
  undefined *local_460;
  undefined8 local_458;
  undefined8 *local_450;
  undefined1 auStack_448 [80];
  undefined1 auStack_3f8 [96];
  undefined1 auStack_398 [128];
  undefined1 auStack_318 [696];
  
  local_468 = param_2;
  local_460 = param_3;
  local_458 = param_1;
  puStack_480 = (undefined *)Foundation::URL::typeMetadataAccessor();
  local_488 = *(undefined8 **)(puStack_480 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_488 + 0x40));
  puVar2 = (undefined *)((long)&local_4d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_4a8 = puVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_4a0 = (long)puVar2 - extraout_x12;
  puVar2 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  puVar3 = puVar2;
  _swift_initStackObject();
  local_450 = (undefined8 *)(puVar3 + 0x20);
  *local_450 = 0xd000000000000010;
  *(undefined8 *)(puVar3 + 0x18) = 0x14;
  *(undefined8 *)(puVar3 + 0x10) = 10;
  puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar3 + 0x28) = 0x8000000100da6ef0;
  *(undefined8 *)(puVar3 + 0x30) = 0x332e30;
  *(undefined8 *)(puVar3 + 0x38) = 0xe300000000000000;
  *(undefined **)(puVar3 + 0x48) = puVar10;
  *(undefined8 *)(puVar3 + 0x50) = 0x656d616e;
  *(undefined1 **)(puVar3 + 0x58) = &DAT_e400000000000000;
  *(undefined8 *)(puVar3 + 0x60) = 0x6574736170;
  *(undefined1 **)(puVar3 + 0x68) = &DAT_e500000000000000;
  *(undefined **)(puVar3 + 0x78) = puVar10;
  *(undefined8 *)(puVar3 + 0x80) = 0x5f79616c70736964;
  *(undefined8 *)(puVar3 + 0x88) = 0xec000000656d616e;
  *(undefined8 *)(puVar3 + 0x90) = 0x6574736150;
  *(undefined1 **)(puVar3 + 0x98) = &DAT_e500000000000000;
  *(undefined **)(puVar3 + 0xa8) = puVar10;
  *(undefined8 *)(puVar3 + 0xb0) = 0x6e6f6973726576;
  *(undefined1 **)(puVar3 + 0xb8) = &DAT_e700000000000000;
  *(undefined8 *)(puVar3 + 0xc0) = 0x302e302e31;
  *(undefined1 **)(puVar3 + 200) = &DAT_e500000000000000;
  *(undefined **)(puVar3 + 0xd8) = puVar10;
  *(undefined8 *)(puVar3 + 0xe0) = 0x7470697263736564;
  *(undefined1 **)(puVar3 + 0xe8) = &DAT_eb000000006e6f69;
  *(undefined8 *)(puVar3 + 0xf0) = 0xd000000000000050;
  *(undefined8 *)(puVar3 + 0xf8) = 0x8000000100da6f10;
  *(undefined **)(puVar3 + 0x108) = puVar10;
  *(undefined8 *)(puVar3 + 0x110) = 0x726f68747561;
  *(undefined1 **)(puVar3 + 0x118) = &DAT_e600000000000000;
  puVar4 = &DAT_100fc8640;
  FUN_1000037f0(&DAT_100fc8640,&DAT_100c4d100);
  local_498 = puVar4;
  _swift_initStaticObject();
  puVar5 = puVar4;
  FUN_10045acd8();
  UVar6.unknown = &DAT_100fc8648;
  FUN_1000037f0(&DAT_100fc8648,&DAT_100c4d108);
  local_470 = UVar6.unknown;
  _swift_arrayDestroy(puVar4 + 0x20,2);
  puVar4 = &DAT_100fc8650;
  FUN_1000037f0(&DAT_100fc8650,&DAT_100c4d110);
  *(undefined **)(puVar3 + 0x120) = puVar5;
  *(undefined **)(puVar3 + 0x138) = puVar4;
  *(undefined8 *)(puVar3 + 0x140) = 0x65676170656d6f68;
  *(undefined1 **)(puVar3 + 0x148) = &DAT_e800000000000000;
  *(undefined8 *)(puVar3 + 0x150) = 0xd000000000000013;
  *(undefined8 *)(puVar3 + 0x158) = 0x8000000100d97f30;
  *(undefined **)(puVar3 + 0x168) = puVar10;
  *(undefined8 *)(puVar3 + 0x170) = 0x6e6f6369;
  *(undefined1 **)(puVar3 + 0x178) = &DAT_e400000000000000;
  *(undefined8 *)(puVar3 + 0x180) = 0x63692d6574736170;
  *(undefined8 *)(puVar3 + 0x188) = 0xee00676e702e6e6f;
  *(undefined **)(puVar3 + 0x198) = puVar10;
  *(undefined8 *)(puVar3 + 0x1a0) = 0x726576726573;
  *(undefined1 **)(puVar3 + 0x1a8) = &DAT_e600000000000000;
  puVar5 = puVar2;
  local_4b0 = puVar2;
  local_490 = puVar4;
  _swift_initStackObject(puVar2,auStack_318);
  local_478 = (undefined8 *)(puVar5 + 0x20);
  *local_478 = &DAT_65707974;
  *(undefined8 *)(puVar5 + 0x18) = 6;
  *(undefined8 *)(puVar5 + 0x10) = 3;
  *(undefined1 **)(puVar5 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(puVar5 + 0x30) = 0x7972616e6962;
  *(undefined1 **)(puVar5 + 0x38) = &DAT_e600000000000000;
  *(undefined **)(puVar5 + 0x48) = puVar10;
  *(undefined8 *)(puVar5 + 0x50) = 0x6f705f7972746e65;
  *(undefined8 *)(puVar5 + 0x58) = 0xeb00000000746e69;
  local_4b8 = &_OBJC_CLASS___NSBundle;
  IVar7 = objc_stub::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  UVar8.unknown = (undefined *)objc_stub::bundleURL(IVar7);
  UVar9.unknown = local_4a8;
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  lVar1 = local_4a0;
  local_4c0 = "rds on this Mac.";
  SVar13.bridgeObject = (void *)0x8000000100da6f70;
  SVar13.str = (char *)0xd00000000000001e;
  Foundation::URL::appendingPathComponent(SVar13,UVar6);
  puVar4 = puStack_480;
  pcVar12 = *(code **)((long)local_488 + 8);
  UVar8.unknown = UVar9.unknown;
  (*pcVar12)(UVar9.unknown,puStack_480);
  SVar13 = Foundation::URL::get_path(UVar8);
  (*pcVar12)(lVar1,puVar4);
  *(String *)(puVar5 + 0x60) = SVar13;
  *(undefined **)(puVar5 + 0x78) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar5 + 0x80) = 0x666e6f635f70636d;
  *(undefined8 *)(puVar5 + 0x88) = 0xea00000000006769;
  _swift_initStackObject(puVar2,auStack_398);
  uStack_4c8 = 4;
  local_4d0 = 2;
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  local_488 = (undefined8 *)(puVar2 + 0x20);
  *local_488 = 0x646e616d6d6f63;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e700000000000000;
  IVar7 = objc_stub::mainBundle((ID)local_4b8);
  UVar8.unknown = (undefined *)objc_stub::bundleURL(IVar7);
  Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar8);
  SVar14.bridgeObject = (void *)((ulong)local_4c0 | 0x8000000000000000);
  SVar14.str = (char *)0xd00000000000001e;
  Foundation::URL::appendingPathComponent(SVar14,UVar6);
  (*pcVar12)(UVar9.unknown,puVar4);
  SVar13 = Foundation::URL::get_path(UVar9);
  (*pcVar12)(lVar1,puVar4);
  *(String *)(puVar2 + 0x30) = SVar13;
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar2 + 0x50) = 0x766e65;
  *(undefined8 *)(puVar2 + 0x58) = 0xe300000000000000;
  puVar4 = local_498;
  _swift_initStackObject(local_498,auStack_3f8);
  *(undefined8 *)(puVar4 + 0x18) = uStack_4c8;
  *(undefined8 *)(puVar4 + 0x10) = local_4d0;
  *(undefined8 *)(puVar4 + 0x20) = 0x454b4f545f50434d;
  *(undefined8 *)(puVar4 + 0x28) = 0xe90000000000004e;
  *(undefined8 *)(puVar4 + 0x30) = local_468;
  *(undefined **)(puVar4 + 0x38) = local_460;
  *(undefined8 *)(puVar4 + 0x40) = 0x4c52555f50434d;
  *(undefined1 **)(puVar4 + 0x48) = &DAT_e700000000000000;
  UVar6.unknown = local_460;
  _swift_bridgeObjectRetain();
  SVar13 = Foundation::URL::get_absoluteString(UVar6);
  *(String *)(puVar4 + 0x50) = SVar13;
  puVar10 = puVar4;
  FUN_10045acd8();
  _swift_setDeallocating(puVar4);
  _swift_arrayDestroy(puVar4 + 0x20,2,local_470);
  *(undefined **)(puVar2 + 0x78) = local_490;
  *(undefined **)(puVar2 + 0x60) = puVar10;
  puVar10 = puVar2;
  FUN_10045a404();
  _swift_setDeallocating(puVar2);
  puVar2 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(local_488,2,puVar2);
  puVar4 = &DAT_100fc8340;
  FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
  *(undefined **)(puVar5 + 0xa8) = puVar4;
  *(undefined **)(puVar5 + 0x90) = puVar10;
  puVar10 = puVar5;
  FUN_10045a404();
  _swift_setDeallocating(puVar5);
  _swift_arrayDestroy(local_478,3,puVar2);
  *(undefined **)(puVar3 + 0x1b0) = puVar10;
  *(undefined **)(puVar3 + 0x1c8) = puVar4;
  *(undefined8 *)(puVar3 + 0x1d0) = 0x62697461706d6f63;
  *(undefined8 *)(puVar3 + 0x1d8) = 0xed00007974696c69;
  puVar11 = local_4b0;
  _swift_initStackObject(local_4b0,auStack_448);
  *(undefined8 *)(puVar11 + 0x18) = 2;
  *(undefined8 *)(puVar11 + 0x10) = 1;
  *(undefined8 *)(puVar11 + 0x20) = 0x6d726f6674616c70;
  *(undefined8 *)(puVar11 + 0x28) = 0xe900000000000073;
  puVar10 = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  _swift_initStaticObject();
  puVar5 = &DAT_100fc7eb8;
  FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
  *(undefined **)(puVar11 + 0x48) = puVar5;
  *(undefined **)(puVar11 + 0x30) = puVar10;
  puVar10 = puVar11;
  FUN_10045a404();
  _swift_setDeallocating(puVar11);
  FUN_100477930(puVar11 + 0x20);
  *(undefined **)(puVar3 + 0x1f8) = puVar4;
  *(undefined **)(puVar3 + 0x1e0) = puVar10;
  puVar4 = puVar3;
  FUN_10045a404(puVar3);
  _swift_setDeallocating(puVar3);
  _swift_arrayDestroy(local_450,10,puVar2);
  return puVar4;
}



/* Address: 0x1004778e0 | FUN_1004778e0 */

undefined1  [16] FUN_1004778e0(void)

{
  return ZEXT816(0x100ed6dc0);
}



/* Address: 0x1004778f0 | FUN_1004778f0 */

void FUN_1004778f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc85d0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d1f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d1f8,&DAT_100ed6e50);
  DAT_100fc85d0 = pTVar1;
  return;
}



/* Address: 0x100477930 | FUN_100477930 */

undefined8 FUN_100477930(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100477978 | FUN_100477978 */

void FUN_100477978(void)

{
  return;
}



/* Address: 0x10047797c | FUN_10047797c */

undefined1  [16] FUN_10047797c(void)

{
  return ZEXT816(0x100ed6e50);
}



/* Address: 0x10047798c | thunk_FUN_1004778f0 */

void thunk_FUN_1004778f0(void)

{
  FUN_1004778f0();
  return;
}



/* Address: 0x100477990 | thunk_FUN_100477994 */

void thunk_FUN_100477994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d1d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d1d0,&DAT_100ed6e50);
  DAT_100fc8690 = pTVar1;
  return;
}



/* Address: 0x100477994 | FUN_100477994 */

void FUN_100477994(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8690 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d1d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d1d0,&DAT_100ed6e50);
  DAT_100fc8690 = pTVar1;
  return;
}



/* Address: 0x1004779d4 | FUN_1004779d4 */

void FUN_1004779d4(undefined8 param_1,char param_2,undefined8 param_3,char *param_4,void *param_5)

{
  void *pvVar1;
  CharacterSet CVar2;
  CharacterSet CVar3;
  CharacterSet CVar4;
  URL UVar5;
  undefined1 *puVar7;
  undefined *puVar8;
  long extraout_x8;
  char *pcVar9;
  CharacterSet withAllowedCharacters;
  undefined *puVar10;
  long lVar11;
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
  String local_70;
  _StringGuts _Var6;
  
  CVar2 = Foundation::CharacterSet::typeMetadataAccessor();
  lVar11 = *(long *)(CVar2.unknown + -8);
  CVar4 = CVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  withAllowedCharacters.unknown =
       (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  SVar12 = Foundation::URL::get_absoluteString((URL)CVar4.unknown);
  _Var6.unknown = SVar12.bridgeObject;
  if (param_2 == '\x04') {
    local_70.str = (char *)0x0;
    local_70.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x29,_Var6);
    _swift_bridgeObjectRelease(local_70.bridgeObject);
    local_70.str = (char *)0xd000000000000025;
    local_70.bridgeObject = (void *)0x8000000100da6fc0;
    SVar19.bridgeObject = param_5;
    SVar19.str = param_4;
    Swift::String::append(SVar12,SVar19);
    _swift_bridgeObjectRelease(_Var6.unknown);
    SVar12.bridgeObject = &SUB_e200000000000000;
    SVar12.str = (char *)0x7d22;
    CVar4.unknown = (undefined *)0x7d22;
    SVar20.bridgeObject = param_5;
    SVar20.str = param_4;
    Swift::String::append(SVar12,SVar20);
    pvVar1 = local_70.bridgeObject;
    CVar3 = Foundation::CharacterSet::get_alphanumerics(CVar4);
    FUN_10045b990();
    CVar4.unknown = withAllowedCharacters.unknown;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
    (**(code **)(lVar11 + 8))(withAllowedCharacters.unknown);
    _swift_bridgeObjectRelease(pvVar1);
    pcVar9 = (char *)0x0;
    if (puVar8 != (undefined *)0x0) {
      pcVar9 = CVar4.unknown;
    }
    puVar10 = (undefined *)0xe000000000000000;
    if (puVar8 != (undefined *)0x0) {
      puVar10 = puVar8;
    }
    local_70.str = (char *)0x0;
    local_70.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x15,(_StringGuts)CVar2.unknown);
    _swift_bridgeObjectRelease(local_70.bridgeObject);
    local_70.str = (char *)0xd000000000000013;
    local_70.bridgeObject = (void *)0x8000000100da6ff0;
  }
  else {
    if (param_2 != '\x03') {
      _swift_bridgeObjectRelease(_Var6.unknown);
      UVar5 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x000100477cc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(UVar5.unknown + -8) + 0x38))(param_1,1,1,UVar5.unknown);
      return;
    }
    local_70.str = (char *)0x223a226c7275227b;
    local_70.bridgeObject = &DAT_e800000000000000;
    SVar16.bridgeObject = param_5;
    SVar16.str = param_4;
    Swift::String::append(SVar12,SVar16);
    _swift_bridgeObjectRelease(_Var6.unknown);
    SVar13.bridgeObject = &SUB_e200000000000000;
    SVar13.str = (char *)0x7d22;
    SVar17.bridgeObject = param_5;
    SVar17.str = param_4;
    Swift::String::append(SVar13,SVar17);
    CVar4.unknown = local_70.str;
    puVar7 = local_70.bridgeObject;
    FUN_10045fa58(local_70.str,local_70.bridgeObject);
    SVar12 = Foundation::Data::base64EncodedString
                       ((NSDataBase64EncodingOptions)0x0,(Data)CVar4.unknown);
    FUN_10003bf2c(CVar4.unknown,puVar7);
    local_70 = SVar12;
    CVar3 = Foundation::CharacterSet::get_alphanumerics(CVar4);
    FUN_10045b990();
    CVar4.unknown = withAllowedCharacters.unknown;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(withAllowedCharacters);
    (**(code **)(lVar11 + 8))(withAllowedCharacters.unknown);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    pcVar9 = (char *)0x0;
    if (puVar8 != (undefined *)0x0) {
      pcVar9 = CVar4.unknown;
    }
    puVar10 = (undefined *)0xe000000000000000;
    if (puVar8 != (undefined *)0x0) {
      puVar10 = puVar8;
    }
    local_70.str = (char *)0x0;
    local_70.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x43,(_StringGuts)CVar2.unknown);
    SVar14.bridgeObject = (void *)0x8000000100da7010;
    SVar14.str = (char *)0xd000000000000041;
    SVar18.bridgeObject = param_5;
    SVar18.str = CVar3.unknown;
    Swift::String::append(SVar14,SVar18);
  }
  SVar15.bridgeObject = puVar10;
  SVar15.str = pcVar9;
  SVar21.bridgeObject = param_5;
  SVar21.str = CVar3.unknown;
  Swift::String::append(SVar15,SVar21);
  _swift_bridgeObjectRelease(puVar10);
  pvVar1 = local_70.bridgeObject;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(pvVar1);
  return;
}



/* Address: 0x100477cc8 | FUN_100477cc8 */

undefined1  [16] FUN_100477cc8(URL param_1,undefined8 param_2,char *param_3,void *param_4)

{
  uint uVar1;
  _StringGuts _Var2;
  String SVar3;
  String SVar4;
  undefined1 auVar5 [16];
  String SVar6;
  String SVar7;
  undefined8 local_40;
  undefined8 local_38;
  
  SVar3 = Foundation::URL::get_absoluteString(param_1);
  _Var2.unknown = SVar3.bridgeObject;
  uVar1 = (uint)param_1.unknown & 0xff;
  if (uVar1 == 2) {
    Swift::_StringGuts::grow(0x1c,_Var2);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_40 = 0xd00000000000001a;
    local_38 = 0x8000000100da7060;
  }
  else {
    if (uVar1 != 1) {
      _swift_bridgeObjectRelease(_Var2.unknown);
      local_40 = 0;
      local_38 = 0;
      goto LAB_100477db0;
    }
    Swift::_StringGuts::grow(0x35,_Var2);
    local_40 = 0;
    local_38 = 0xe000000000000000;
    SVar4.bridgeObject = (void *)0x8000000100da7080;
    SVar4.str = (char *)0xd000000000000033;
    SVar6.bridgeObject = param_4;
    SVar6.str = param_3;
    Swift::String::append(SVar4,SVar6);
  }
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  _swift_bridgeObjectRelease(_Var2.unknown);
LAB_100477db0:
  auVar5._8_8_ = local_38;
  auVar5._0_8_ = local_40;
  return auVar5;
}



/* Address: 0x100477dc4 | FUN_100477dc4 */

undefined1  [16] FUN_100477dc4(URL param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined8 local_50;
  undefined8 local_48;
  _StringGuts _Var3;
  
  SVar5 = Foundation::URL::get_absoluteString(param_1);
  _Var3.unknown = SVar5.bridgeObject;
  if (((uint)param_1.unknown & 0xff) == 1) {
    Swift::_StringGuts::grow(0x1e,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    local_50 = 0xd00000000000001b;
    local_48 = 0x8000000100da70c0;
    SVar7.bridgeObject = param_4;
    SVar7.str = param_3;
    Swift::String::append(SVar5,SVar7);
    _swift_bridgeObjectRelease(_Var3.unknown);
    pcVar2 = (char *)0x22;
    pvVar4 = (void *)0xe100000000000000;
  }
  else {
    Swift::_StringGuts::grow(0x40,_Var3);
    local_50 = 0;
    local_48 = 0xe000000000000000;
    SVar6.bridgeObject = (void *)0x8000000100da70e0;
    SVar6.str = (char *)0xd000000000000031;
    SVar8.bridgeObject = param_4;
    SVar8.str = param_3;
    Swift::String::append(SVar6,SVar8);
    SVar9.bridgeObject = param_4;
    SVar9.str = param_3;
    Swift::String::append(SVar5,SVar9);
    _swift_bridgeObjectRelease(_Var3.unknown);
    pcVar2 = (char *)0xa7d202020200a22;
    pvVar4 = (void *)0xed00007d0a7d2020;
  }
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar2;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar5,SVar10);
  auVar1._8_8_ = local_48;
  auVar1._0_8_ = local_50;
  return auVar1;
}



/* Address: 0x100477ee4 | thunk_FUN_100477ee8 */

void thunk_FUN_100477ee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8698 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d238;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d238,&DAT_100ed6f70);
  DAT_100fc8698 = pTVar1;
  return;
}



/* Address: 0x100477ee8 | FUN_100477ee8 */

void FUN_100477ee8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8698 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d238;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d238,&DAT_100ed6f70);
  DAT_100fc8698 = pTVar1;
  return;
}



/* Address: 0x100477f28 | FUN_100477f28 */

undefined1  [16] FUN_100477f28(void)

{
  return ZEXT816(0x100ed6f70);
}



/* Address: 0x100477f38 | FUN_100477f38 */

undefined1  [16] FUN_100477f38(void)

{
  return ZEXT816(0x100ed6f90);
}



/* Address: 0x100477f48 | FUN_100477f48 */

void FUN_100477f48(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fc8378,&DAT_100c4cee8);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fc8378,&DAT_100c4cee8);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fc8378,&DAT_100c4cee8);
    puVar2 = &DAT_100ed7278;
    _swift_allocObject(&DAT_100ed7278,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c4d6c8,puVar2)
    ;
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    puVar2 = &DAT_100ed72a0;
    _swift_allocObject(&DAT_100ed72a0,0x20,7);
    *(undefined8 *)(puVar2 + 0x10) = param_4;
    *(undefined **)(puVar2 + 0x18) = param_5;
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,&DAT_100c4d6d0,
                       puVar2);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fc8378,&DAT_100c4cee8);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x1004781e4 | FUN_1004781e4 */

undefined8 FUN_1004781e4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1;
  FUN_10047df6c();
  uVar2 = 0;
  FUN_10047e0dc();
  _swift_allocObject();
  FUN_10047e0f0(param_1,param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100478250 | thunk_FUN_10047d9f8 */

void thunk_FUN_10047d9f8(void)

{
  FUN_10047d9f8();
  return;
}



/* Address: 0x100478254 | FUN_100478254 */

undefined8 FUN_100478254(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_38;
  undefined8 local_28;
  
  puVar1 = &local_60;
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(&local_58);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    FUN_1002ca7e0(&local_60);
    _swift_release(local_58);
    _swift_release(local_50);
    _swift_release(local_48);
    _swift_release(local_38);
    _swift_release(local_28);
  }
  else {
    puVar1 = (undefined8 *)(unaff_x20 + 0x80);
  }
  return *puVar1;
}



/* Address: 0x1004782f4 | FUN_1004782f4 */

void FUN_1004782f4(void)

{
  undefined8 local_18;
  
  local_18 = 0x9b2d;
  FUN_1002ccc34(0x74726f5070636d,&DAT_e700000000000000,&local_18,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x100478338 | FUN_100478338 */

void FUN_100478338(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4,
                  void *param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  long extraout_x8;
  long unaff_x20;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  undefined8 local_80;
  undefined8 local_78;
  undefined1 *puStack_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_48;
  undefined8 local_38;
  
  puVar3 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_80 - extraout_x8;
  local_78 = 0x2f2f3a70747468;
  puStack_70 = &DAT_e700000000000000;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(*(String *)(unaff_x20 + 0x70),SVar10);
  SVar9.bridgeObject = (void *)0xe100000000000000;
  SVar9.str = &DAT_0000003a;
  SVar11.bridgeObject = param_5;
  SVar11.str = param_4;
  Swift::String::append(SVar9,SVar11);
  if (*(char *)(unaff_x20 + 0x88) == '\x01') {
    _swift_getKeyPath(&DAT_100c4d2d0);
    FUN_1002cb7e0(&local_68);
    FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
    puVar7 = &local_80;
    FUN_1002ca7e0(&local_80);
    _swift_release(local_68);
    _swift_release(local_60);
    _swift_release(local_58);
    _swift_release(local_48);
    _swift_release(local_38);
  }
  else {
    puVar7 = (undefined8 *)(unaff_x20 + 0x80);
  }
  local_80 = *puVar7;
  SVar9 = Swift::CustomStringConvertible::get_description();
  SVar12.bridgeObject = param_5;
  SVar12.str = param_4;
  Swift::String::append(SVar9,SVar12);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  puVar1 = puStack_70;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar6;
  (**(code **)(lVar8 + 0x30))(lVar6,1,UVar4.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar8 + 0x20))(param_1,lVar6,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004784e0);
  (*pcVar2)();
}


