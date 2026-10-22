/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100508564 | FUN_100508564 */

undefined1  [16] FUN_100508564(void)

{
  return ZEXT816(0x100edc310);
}



/* Address: 0x100508574 | FUN_100508574 */

undefined8 FUN_100508574(undefined8 param_1)

{
  FUN_10000c210();
  return param_1;
}



/* Address: 0x1005085a8 | FUN_1005085a8 */

undefined8 FUN_1005085a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1005085f8 | FUN_1005085f8 */

undefined8 FUN_1005085f8(undefined8 param_1,undefined8 param_2)

{
  FUN_1004ffd94(param_2,param_1);
  return param_2;
}



/* Address: 0x100508634 | FUN_100508634 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100508634(Data param_1)

{
  undefined *puVar1;
  _StringGuts _Var2;
  bool bVar3;
  NSData *pNVar4;
  ID IVar5;
  undefined *puVar6;
  _StringGuts *p_Var7;
  long lVar8;
  undefined8 uVar9;
  ulong uVar10;
  _StringGuts local_88;
  _StringGuts _Stack_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  long local_58;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar4 = Foundation::Data::_bridgeToObjectiveC(param_1);
  local_70 = 0;
  IVar5 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar4,0,&local_70);
  if (IVar5 == 0) {
    uVar9 = local_70;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar9);
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar5);
    puVar6 = &DAT_100fcd4f0;
    FUN_1000f7830(&DAT_100fcd4f0,&DAT_100c53920);
    puVar1 = PTR___type_metadata_for_Any_100eae0c0;
    p_Var7 = &local_88;
    _swift_dynamicCast(p_Var7,&local_70,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar6,6);
    _Var2.unknown = local_88.unknown;
    if (((ulong)p_Var7 & 1) != 0) {
      if (*(long *)(local_88.unknown + 0x10) != 0) {
        _swift_bridgeObjectRetain(local_88.unknown);
        lVar8 = 0x646f6874656d;
        uVar10 = 0;
        FUN_100071370(0x646f6874656d);
        if ((uVar10 & 1) == 0) {
          _swift_bridgeObjectRelease(_Var2.unknown);
        }
        else {
          FUN_10000cbfc(*(long *)(_Var2.unknown + 0x38) + lVar8 * 0x20,&local_70);
          _swift_bridgeObjectRelease(_Var2.unknown);
          p_Var7 = &local_88;
          _swift_dynamicCast(p_Var7,&local_70,puVar1 + 8,
                             PTR___type_metadata_for_Swift_String_100eac208,6);
          if (((ulong)p_Var7 & 1) != 0) {
            if ((local_88.unknown == (undefined *)0x696c616974696e69) &&
               (_Stack_80.unknown == (undefined *)0xea0000000000657a)) {
              _swift_bridgeObjectRelease(0xea0000000000657a);
            }
            else {
              bVar3 = Swift::_stringCompareWithSmolCheck
                                (local_88,_Stack_80,(_StringComparisonResult)0x69);
              _swift_bridgeObjectRelease(_Stack_80.unknown);
              if (!bVar3) goto LAB_1005087e8;
            }
            if (*(long *)(_Var2.unknown + 0x10) == 0) {
LAB_1005088dc:
              uStack_68 = 0;
              local_70 = 0;
              local_58 = 0;
              uStack_60 = 0;
            }
            else {
              _swift_bridgeObjectRetain(_Var2.unknown);
              lVar8 = 0x736d61726170;
              uVar10 = 0;
              FUN_100071370(0x736d61726170);
              if ((uVar10 & 1) == 0) {
                _swift_bridgeObjectRelease(_Var2.unknown);
                goto LAB_1005088dc;
              }
              FUN_10000cbfc(*(long *)(_Var2.unknown + 0x38) + lVar8 * 0x20,&local_70);
              _swift_bridgeObjectRelease(_Var2.unknown);
            }
            _swift_bridgeObjectRelease(_Var2.unknown);
            if (local_58 != 0) {
              p_Var7 = &local_88;
              _swift_dynamicCast(p_Var7,&local_70,puVar1 + 8,puVar6,6);
              if (((ulong)p_Var7 & 1) == 0) goto LAB_1005087f0;
              if (*(long *)(local_88.unknown + 0x10) == 0) {
LAB_100508970:
                uStack_68 = 0;
                local_70 = 0;
                local_58 = 0;
                uStack_60 = 0;
              }
              else {
                _swift_bridgeObjectRetain(local_88.unknown);
                lVar8 = 0x6c6f636f746f7270;
                uVar10 = 0;
                FUN_100071370(0x6c6f636f746f7270);
                if ((uVar10 & 1) == 0) {
                  _swift_bridgeObjectRelease(local_88.unknown);
                  goto LAB_100508970;
                }
                FUN_10000cbfc(*(long *)(local_88.unknown + 0x38) + lVar8 * 0x20,&local_70);
                _swift_bridgeObjectRelease(local_88.unknown);
              }
              _swift_bridgeObjectRelease(local_88.unknown);
              if (local_58 != 0) {
                p_Var7 = &local_88;
                _swift_dynamicCast(p_Var7,&local_70,puVar1 + 8,
                                   PTR___type_metadata_for_Swift_String_100eac208,6);
                if ((int)p_Var7 != 0) goto LAB_10050883c;
                goto LAB_1005087f0;
              }
            }
            FUN_1000fb4c4(&local_70,&DAT_100fcb738,&DAT_100c53fd0);
            goto LAB_1005087f0;
          }
        }
      }
LAB_1005087e8:
      _swift_bridgeObjectRelease(_Var2.unknown);
    }
  }
LAB_1005087f0:
  lVar8 = -0x7ffffffeff2548f0;
  FUN_1004fe364(0xd000000000000014);
  if (lVar8 == 0) {
    if (DAT_100fce780 != -1) {
      _swift_once(&DAT_100fce780,FUN_1005286e4);
    }
    _swift_bridgeObjectRetain(DAT_101057b38);
  }
LAB_10050883c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1005089e8 | FUN_1005089e8 */

undefined8 FUN_1005089e8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcdb10;
  FUN_1000f7830(&DAT_100fcdb10,&DAT_100c53ff8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100508a38 | FUN_100508a38 */

void FUN_100508a38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fcd158;
  local_70 = param_2;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar5 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar5 - extraout_x12;
  puVar1 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10011532c(param_1,lVar6,&DAT_100fcd158,&DAT_100c53740);
  lVar2 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_1000fb4c4(lVar6,&DAT_100fcd158,&DAT_100c53740);
    FUN_10050624c(lVar5,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000fb4c4(lVar5,&DAT_100fcd158,&DAT_100c53740);
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6 - extraout_x8_00,lVar6,puVar1);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    local_68 = *unaff_x20;
    FUN_1004b53a8(lVar6 - extraout_x8_00,local_70,param_3,uVar3);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100508bf4 | FUN_100508bf4 */

void FUN_100508bf4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined8 *unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fcdb40;
  local_70 = param_2;
  FUN_1000f7830(&DAT_100fcdb40,&DAT_100c54048);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar1 + -8) + 0x40));
  lVar5 = (long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = lVar5 - extraout_x12;
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10011532c(param_1,lVar6,&DAT_100fcdb40,&DAT_100c54048);
  lVar2 = lVar6;
  (**(code **)(lVar4 + 0x30))(lVar6,1,puVar1);
  if ((int)lVar2 == 1) {
    FUN_1000fb4c4(lVar6,&DAT_100fcdb40,&DAT_100c54048);
    FUN_100506270(lVar5,local_70,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000fb4c4(lVar5,&DAT_100fcdb40,&DAT_100c54048);
  }
  else {
    (**(code **)(lVar4 + 0x20))(lVar6 - extraout_x8_00,lVar6,puVar1);
    uVar3 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar3);
    local_68 = *unaff_x20;
    FUN_1004b550c(lVar6 - extraout_x8_00,local_70,param_3,uVar3);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_68;
  }
  return;
}



/* Address: 0x100508db0 | FUN_100508db0 */

undefined8 FUN_100508db0(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100508dfc(param_1,param_2);
  return unaff_x20;
}



/* Address: 0x100508dfc | FUN_100508dfc */

void FUN_100508dfc(undefined8 param_1,long param_2)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long unaff_x20;
  long lVar7;
  undefined1 *puVar8;
  AsyncThrowingStream throwing;
  long lVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined1 *local_c8;
  undefined *local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  long local_98;
  undefined *local_88 [3];
  undefined *local_70;
  undefined **ppuStack_68;
  
  _swift_defaultActor_initialize();
  *(undefined2 *)(unaff_x20 + 0xa0) = 0;
  lVar6 = _TtC3MCP28StatelessHTTPServerTransport::responseWaiters;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a6e5c();
  *(undefined **)(unaff_x20 + lVar6) = puVar2;
  lVar6 = _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts;
  FUN_1004a6ce8();
  *(undefined **)(unaff_x20 + lVar6) = puVar3;
  local_b8 = param_1;
  FUN_10050bab4(param_1,auStack_b0);
  if (local_98 == 0) {
    puVar3 = &DAT_100fcd7f0;
    FUN_1000f7830(&DAT_100fcd7f0,&DAT_100c53df0);
    bVar1 = 7;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 8;
    *(undefined8 *)(puVar3 + 0x10) = 4;
    uVar4 = 0;
    uVar5 = 1;
    FUN_1004fcca4();
    *(undefined **)(puVar3 + 0x38) = &DAT_100edbf30;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100edbc90;
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = uVar5;
    puVar3[0x30] = bVar1 & 1;
    *(undefined **)(puVar3 + 0x60) = &DAT_100edbdc0;
    *(undefined ***)(puVar3 + 0x68) = &PTR_PTR_100edbc50;
    puVar3[0x48] = 1;
    *(undefined **)(puVar3 + 0x88) = &DAT_100edbe78;
    *(undefined ***)(puVar3 + 0x90) = &PTR_PTR_100edbc60;
    *(undefined **)(puVar3 + 0xb0) = &DAT_100edbe98;
    *(undefined ***)(puVar3 + 0xb8) = &PTR_PTR_100edbc70;
    local_70 = &DAT_100edbfe0;
    ppuStack_68 = &PTR_PTR_100edbcc0;
    local_88[0] = puVar3;
    if (local_98 != 0) {
      FUN_1000fb4c4(auStack_b0,&DAT_100fcd7e8,&DAT_100c54010);
    }
  }
  else {
    FUN_100076508(auStack_b0,local_88);
  }
  FUN_100076508(local_88,unaff_x20 + 0x78);
  if (param_2 == 0) {
    local_70 = &DAT_100ee6990;
    ppuStack_68 = &PTR_PTR_100ee68f0;
    param_2 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(param_2 + 0x10) = 0xd000000000000023;
    *(undefined8 *)(param_2 + 0x18) = 0x8000000100dac810;
    FUN_100076508(local_88,param_2 + 0x20);
  }
  *(long *)(unaff_x20 + 0x70) = param_2;
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  lVar10 = *(long *)(puVar3 + -8);
  local_c0 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = auStack_d0 + -extraout_x8;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar6 = *(long *)(puVar3 + -8);
  local_c8 = puVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  throwing.unknown = puVar8 + -extraout_x8_00;
  puVar2 = &DAT_100fcd148;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar7 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)throwing.unknown - extraout_x8_01;
  (**(code **)(lVar7 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
             ,puVar2);
  bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
  if ((bVar1 & 1) == 0) {
    FUN_100505e68(puVar8,throwing.unknown,lVar9);
  }
  else {
    Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)puVar8,throwing);
  }
  FUN_1000fb4c4(local_b8,&DAT_100fcd7e8,&DAT_100c54010);
  (**(code **)(lVar7 + 8))(lVar9,puVar2);
  (**(code **)(lVar10 + 0x20))
            (unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::incomingStream,puVar8,local_c0);
  (**(code **)(lVar6 + 0x20))
            (unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::incomingContinuation,
             throwing.unknown,puVar3);
  return;
}



/* Address: 0x100509190 | FUN_100509190 */

void FUN_100509190(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  _swift_task_switch(FUN_1005091a8);
  return;
}



/* Address: 0x1005091a8 | FUN_1005091a8 */

void FUN_1005091a8(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x22 + 0x170);
  if ((*(byte *)(lVar2 + 0xa1) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0xa1) = 1;
    lVar3 = *(long *)(lVar2 + 0x70);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x158,0,0);
    FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x70);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar2 = *(long *)(unaff_x22 + 0x90);
    FUN_100004640(unaff_x22 + 0x70,uVar1);
    (**(code **)(lVar2 + 0x70))(uVar1,lVar2);
    FUN_100004594(unaff_x22 + 0x70);
    if (((uint)uVar1 & 0xff) < 2) {
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 0x130);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar2 = *(long *)(unaff_x22 + 0x150);
      FUN_100004640(unaff_x22 + 0x130,uVar1);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dac870;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x60;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000027;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dac870;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 0x60;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x10,uVar1,lVar2);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x130);
    }
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    *param_1 = 0xd000000000000019;
    param_1[1] = 0x8000000100dac490;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 4;
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100509390. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100509394 | FUN_100509394 */

void FUN_100509394(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x3e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_10050b044();
  return;
}



/* Address: 0x1005093d8 | FUN_1005093d8 */

void FUN_1005093d8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x690) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x688) = param_2;
  *(undefined8 *)(unaff_x22 + 0x680) = param_1;
  puVar1 = &DAT_100fcdb40;
  FUN_1000f7830(&DAT_100fcdb40,&DAT_100c54048);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x698) = uVar2;
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  *(undefined **)(unaff_x22 + 0x6a0) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x6a8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x6b0) = uVar2;
  _swift_task_switch(FUN_100509478);
  return;
}



/* Address: 0x100509478 | FUN_100509478 */

void FUN_100509478(undefined8 *param_1)

{
  String *pSVar1;
  byte bVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  void *pvVar6;
  undefined8 uVar7;
  char *pcVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x690) + 0xa0) & 1) != 0) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x6b0);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x698);
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = 0;
    *(undefined1 *)(param_1 + 3) = 8;
    _swift_willThrow();
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar7);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_100509e64;
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x688);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x680);
  FUN_1001037b4(uVar7,uVar9);
  FUN_1004ff9c8(unaff_x22 + 0x5d0,uVar7,uVar9);
  pSVar1 = (String *)(unaff_x22 + 0x5d0);
  pcVar8 = pSVar1->str;
  uVar7 = *(undefined8 *)(unaff_x22 + 0x5d8);
  SVar15 = *pSVar1;
  SVar16 = *pSVar1;
  bVar2 = *(byte *)(unaff_x22 + 0x5f0);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      SVar16 = *(String *)(unaff_x22 + 0x5e0);
      lVar11 = *(long *)(*(long *)(unaff_x22 + 0x690) + 0x70);
      pvVar6 = (void *)0x0;
      _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x5f8,0);
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x4b8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4d0);
      lVar10 = *(long *)(unaff_x22 + 0x4d8);
      FUN_100004640(unaff_x22 + 0x4b8,uVar7);
      (**(code **)(lVar10 + 0x70))(uVar7,lVar10);
      FUN_100004594(unaff_x22 + 0x4b8);
      if (1 < ((uint)uVar7 & 0xff)) {
LAB_100509a88:
        FUN_1000fb4c4(unaff_x22 + 0x5d0,&DAT_100fcd808,&DAT_100c53e10);
        goto LAB_100509e48;
      }
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x490);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4a8);
      lVar10 = *(long *)(unaff_x22 + 0x4b0);
      FUN_100004640(unaff_x22 + 0x490,uVar7);
      puVar3 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar8 = (char *)0x60;
      pcVar5 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x646f6874656d;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined1 **)(puVar3 + 0x28) = &DAT_e600000000000000;
      SVar14.bridgeObject = pcVar5;
      SVar14.str = pcVar8;
      Swift::String::reserveCapacity(2,SVar14);
      SVar17.bridgeObject = pvVar6;
      SVar17.str = pcVar5;
      Swift::String::write(SVar16,SVar17);
      *(undefined8 *)(puVar3 + 0x30) = 0;
      *(undefined8 *)(puVar3 + 0x38) = 0xe000000000000000;
      puVar3[0x58] = 0;
      puVar4 = puVar3;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar3);
      FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar3,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000046;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dac8a0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined **)(unaff_x22 + 0x90) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0xc0) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 200) = 0x88;
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000046;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dac8a0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined **)(unaff_x22 + 0x30) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x60) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x88;
      FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x3d0);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x70,uVar7,lVar10);
      FUN_1000fb4c4(unaff_x22 + 0x5d0,&DAT_100fcd808,&DAT_100c53e10);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      lVar10 = unaff_x22 + 0x490;
    }
    else {
      lVar11 = *(long *)(*(long *)(unaff_x22 + 0x690) + 0x70);
      pvVar6 = (void *)0x0;
      _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x610,0);
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x4e0);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x4f8);
      lVar10 = *(long *)(unaff_x22 + 0x500);
      FUN_100004640(unaff_x22 + 0x4e0,uVar7);
      (**(code **)(lVar10 + 0x70))(uVar7,lVar10);
      FUN_100004594(unaff_x22 + 0x4e0);
      if (1 < ((uint)uVar7 & 0xff)) goto LAB_100509a88;
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x530);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x548);
      lVar10 = *(long *)(unaff_x22 + 0x550);
      FUN_100004640(unaff_x22 + 0x530,uVar7);
      puVar3 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar8 = (char *)0x60;
      pcVar5 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x646f6874656d;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined1 **)(puVar3 + 0x28) = &DAT_e600000000000000;
      SVar16.bridgeObject = pcVar5;
      SVar16.str = pcVar8;
      Swift::String::reserveCapacity(2,SVar16);
      SVar19.bridgeObject = pvVar6;
      SVar19.str = pcVar5;
      Swift::String::write(SVar15,SVar19);
      *(undefined8 *)(puVar3 + 0x30) = 0;
      *(undefined8 *)(puVar3 + 0x38) = 0xe000000000000000;
      puVar3[0x58] = 0;
      puVar4 = puVar3;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar3);
      FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar3,0x20,7);
      *(undefined1 *)(unaff_x22 + 0xd0) = 1;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0xd00000000000004b;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dac8f0;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0;
      *(undefined **)(unaff_x22 + 0xf0) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x100) = 0;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x120) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x82;
      *(undefined1 *)(unaff_x22 + 0x310) = 1;
      *(undefined8 *)(unaff_x22 + 0x318) = 0xd00000000000004b;
      *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dac8f0;
      *(undefined8 *)(unaff_x22 + 0x328) = 0;
      *(undefined **)(unaff_x22 + 0x330) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x340) = 0;
      *(undefined8 *)(unaff_x22 + 0x338) = 0;
      *(undefined8 *)(unaff_x22 + 0x348) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x358) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x360) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x368) = 0x82;
      FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 0x250);
      FUN_1004eaa3c(unaff_x22 + 0x310);
      (**(code **)(lVar10 + 0x28))(unaff_x22 + 0xd0,uVar7,lVar10);
      FUN_1000fb4c4(unaff_x22 + 0x5d0,&DAT_100fcd808,&DAT_100c53e10);
      FUN_1004eaa3c(unaff_x22 + 0xd0);
      lVar10 = unaff_x22 + 0x530;
    }
LAB_100509e44:
    FUN_100004594(lVar10);
  }
  else if (bVar2 == 2) {
    lVar10 = *(long *)(unaff_x22 + 0x6a8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x6a0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x698);
    _swift_beginAccess(*(long *)(unaff_x22 + 0x690) +
                       _TtC3MCP28StatelessHTTPServerTransport::responseWaiters,unaff_x22 + 0x640,
                       0x21,0);
    FUN_100506270(uVar9,pcVar8,uVar7);
    _swift_endAccess(unaff_x22 + 0x640);
    (**(code **)(lVar10 + 0x30))(uVar9,1,uVar12);
    if ((int)uVar9 == 1) {
      lVar10 = *(long *)(unaff_x22 + 0x690);
      FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0x698),&DAT_100fcdb40,&DAT_100c54048);
      lVar11 = *(long *)(lVar10 + 0x70);
      pvVar6 = (void *)0x0;
      _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x658,0);
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x558);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x570);
      lVar10 = *(long *)(unaff_x22 + 0x578);
      FUN_100004640(unaff_x22 + 0x558,uVar7);
      (**(code **)(lVar10 + 0x70))(uVar7,lVar10);
      FUN_100004594(unaff_x22 + 0x558);
      if (1 < ((uint)uVar7 & 0xff)) goto LAB_100509a88;
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x5a8);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x5c0);
      lVar10 = *(long *)(unaff_x22 + 0x5c8);
      FUN_100004640(unaff_x22 + 0x5a8,uVar7);
      puVar3 = &DAT_100fcd4a8;
      FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
      pcVar8 = (char *)0x60;
      pcVar5 = (char *)0x7;
      _swift_allocObject();
      *(undefined8 *)(puVar3 + 0x20) = 0x4974736575716572;
      *(undefined8 *)(puVar3 + 0x18) = 2;
      *(undefined8 *)(puVar3 + 0x10) = 1;
      *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000044;
      SVar15.bridgeObject = pcVar5;
      SVar15.str = pcVar8;
      Swift::String::reserveCapacity(2,SVar15);
      SVar18.bridgeObject = pvVar6;
      SVar18.str = pcVar5;
      Swift::String::write(SVar16,SVar18);
      *(undefined8 *)(puVar3 + 0x30) = 0;
      *(undefined8 *)(puVar3 + 0x38) = 0xe000000000000000;
      puVar3[0x58] = 0;
      puVar4 = puVar3;
      FUN_1004a6a1c();
      _swift_setDeallocating(puVar3);
      FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
      _swift_deallocClassInstance(puVar3,0x20,7);
      *(undefined1 *)(unaff_x22 + 0x130) = 1;
      *(undefined8 *)(unaff_x22 + 0x138) = 0xd00000000000002a;
      *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dac940;
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined **)(unaff_x22 + 0x150) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x160) = 0;
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x178) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x180) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x188) = 0x79;
      *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000002a;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dac940;
      *(undefined8 *)(unaff_x22 + 0x208) = 0;
      *(undefined **)(unaff_x22 + 0x210) = puVar4;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x218) = 0;
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x238) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x240) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x79;
      FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 400);
      FUN_1004eaa3c(unaff_x22 + 0x1f0);
      (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x130,uVar7,lVar10);
      FUN_1000fb4c4(unaff_x22 + 0x5d0,&DAT_100fcd808,&DAT_100c53e10);
      FUN_1004eaa3c(unaff_x22 + 0x130);
      lVar10 = unaff_x22 + 0x5a8;
      goto LAB_100509e44;
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x6b0);
    lVar10 = *(long *)(unaff_x22 + 0x6a8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x6a0);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x688);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x680);
    (**(code **)(lVar10 + 0x20))(uVar9,*(undefined8 *)(unaff_x22 + 0x698),uVar7);
    *(undefined8 *)(unaff_x22 + 0x670) = uVar13;
    *(undefined8 *)(unaff_x22 + 0x678) = uVar12;
    FUN_1001037b4(uVar13,uVar12);
    Swift::CheckedContinuation::resume(unaff_x22 + 0x670,uVar7);
    FUN_1000fb4c4(unaff_x22 + 0x5d0,&DAT_100fcd808,&DAT_100c53e10);
    (**(code **)(lVar10 + 8))(uVar9,uVar7);
  }
  else {
    lVar11 = *(long *)(*(long *)(unaff_x22 + 0x690) + 0x70);
    _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x628,0,0);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x580);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x598);
    lVar10 = *(long *)(unaff_x22 + 0x5a0);
    FUN_100004640(unaff_x22 + 0x580,uVar7);
    (**(code **)(lVar10 + 0x70))(uVar7,lVar10);
    FUN_100004594(unaff_x22 + 0x580);
    if (((uint)uVar7 & 0xff) < 5) {
      FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x508);
      uVar7 = *(undefined8 *)(unaff_x22 + 0x520);
      lVar10 = *(long *)(unaff_x22 + 0x528);
      FUN_100004640(unaff_x22 + 0x508,uVar7);
      *(undefined1 *)(unaff_x22 + 0x430) = 4;
      *(undefined8 *)(unaff_x22 + 0x438) = 0xd00000000000002f;
      *(undefined8 *)(unaff_x22 + 0x440) = 0x8000000100dac4b0;
      *(undefined8 *)(unaff_x22 + 0x450) = 0;
      *(undefined8 *)(unaff_x22 + 0x448) = 0;
      *(undefined8 *)(unaff_x22 + 0x460) = 0;
      *(undefined8 *)(unaff_x22 + 0x458) = 0;
      *(undefined8 *)(unaff_x22 + 0x468) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x470) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x478) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x480) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x488) = 0x72;
      *(undefined1 *)(unaff_x22 + 0x2b0) = 4;
      *(undefined8 *)(unaff_x22 + 0x2b8) = 0xd00000000000002f;
      *(undefined8 *)(unaff_x22 + 0x2c0) = 0x8000000100dac4b0;
      *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e0) = 0;
      *(undefined8 *)(unaff_x22 + 0x2d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x2e8) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x2f0) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x2f8) = 0x293a5f28646e6573;
      *(undefined1 **)(unaff_x22 + 0x300) = &DAT_e800000000000000;
      *(undefined8 *)(unaff_x22 + 0x308) = 0x72;
      FUN_1004eaa00(unaff_x22 + 0x430,unaff_x22 + 0x370);
      FUN_1004eaa3c(unaff_x22 + 0x2b0);
      (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x430,uVar7,lVar10);
      FUN_1004eaa3c(unaff_x22 + 0x430);
      lVar10 = unaff_x22 + 0x508;
      goto LAB_100509e44;
    }
  }
LAB_100509e48:
  uVar7 = *(undefined8 *)(unaff_x22 + 0x698);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x6b0));
  _swift_task_dealloc(uVar7);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100509e64:
                    /* WARNING: Could not recover jumptable at 0x000100509e80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100509e84 | FUN_100509e84 */

void FUN_100509e84(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC3MCP28StatelessHTTPServerTransport::incomingStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
                    /* WARNING: Could not recover jumptable at 0x000100509ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x10))(param_1,unaff_x20 + lVar1,puVar2);
  return;
}



/* Address: 0x100509ed8 | FUN_100509ed8 */

void FUN_100509ed8(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100509ef4);
  return;
}



/* Address: 0x100509ef4 | FUN_100509ef4 */

void FUN_100509ef4(void)

{
  char *pcVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  long unaff_x22;
  String SVar9;
  
  if (*(char *)(*(long *)(unaff_x22 + 0x20) + 0xa0) == '\x01') {
    puVar8 = *(undefined8 **)(unaff_x22 + 0x10);
    puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    *puVar8 = 0x194;
    pcVar1 = "No waiter for response, may have timed out";
    uVar3 = 0xd000000000000028;
LAB_100509f4c:
    puVar8[1] = uVar3;
    puVar8[2] = (ulong)(pcVar1 + 0x10) | 0x8000000000000000;
    puVar8[3] = 0;
    *(undefined1 *)(puVar8 + 4) = 1;
    puVar8[5] = 0;
    puVar8[6] = 0;
    puVar8[7] = puVar5;
    uVar3 = 0;
    FUN_1004fe770(0);
    _swift_storeEnumTagMultiPayload(puVar8,uVar3,4);
                    /* WARNING: Could not recover jumptable at 0x000100509f94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  SVar9 = Swift::String::uppercased(**(String **)(unaff_x22 + 0x18));
  puVar7 = SVar9.bridgeObject;
  if (SVar9.str == (char *)0x54534f50 && puVar7 == &DAT_e400000000000000) {
    _swift_bridgeObjectRelease(puVar7);
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x54534f50,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)SVar9.str);
    _swift_bridgeObjectRelease(puVar7);
    if (!bVar2) {
      uVar3 = 0xd000000000000012;
      puVar8 = *(undefined8 **)(unaff_x22 + 0x10);
      puVar4 = &DAT_100fcb888;
      FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
      _swift_initStaticObject();
      puVar5 = puVar4;
      FUN_1004a66a4();
      FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
      *puVar8 = 0x195;
      pcVar1 = "Could not classify outgoing message for routing";
      goto LAB_100509f4c;
    }
  }
  plVar6 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002c1104;
  FUN_10050a0a0(plVar6,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x10050a0a0 | FUN_10050a0a0 */

void FUN_10050a0a0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x80) = param_2;
  *(undefined8 *)(unaff_x22 + 0x88) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  puVar1 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  *(undefined **)(unaff_x22 + 0x90) = puVar1;
  lVar3 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x98) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa0) = uVar2;
  puVar1 = &DAT_100fcd548;
  FUN_1000f7830(&DAT_100fcd548,&DAT_100c53e20);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa8) = uVar2;
  lVar3 = 0;
  FUN_1004fe770();
  *(long *)(unaff_x22 + 0xb0) = lVar3;
  lVar3 = *(long *)(lVar3 + -8);
  *(long *)(unaff_x22 + 0xb8) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xc0) = uVar2;
  _swift_task_switch(FUN_10050a164);
  return;
}



/* Address: 0x10050a164 | FUN_10050a164 */

void FUN_10050a164(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char cVar6;
  uint uVar7;
  undefined8 uVar8;
  bool bVar9;
  undefined *puVar10;
  long *plVar11;
  undefined8 uVar12;
  uint uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  long lVar17;
  long unaff_x22;
  undefined8 uVar18;
  code *pcVar19;
  undefined8 uVar20;
  
  lVar17 = *(long *)(*(long *)(unaff_x22 + 0x80) + 0x18);
  *(long *)(unaff_x22 + 200) = lVar17;
  uVar14 = *(ulong *)(*(long *)(unaff_x22 + 0x80) + 0x20);
  *(ulong *)(unaff_x22 + 0xd0) = uVar14;
  if (uVar14 >> 0x3c < 0xf) {
    uVar7 = (uint)(uVar14 >> 0x20);
    uVar13 = uVar7 >> 0x1e;
    if (1 < uVar7 >> 0x1e) {
      if (uVar13 == 2) {
        if (*(long *)(lVar17 + 0x10) != *(long *)(lVar17 + 0x18)) goto LAB_10050a28c;
      }
      else {
LAB_10050a1dc:
        FUN_10003bf18(lVar17,uVar14);
      }
      goto LAB_10050a1fc;
    }
    if (uVar13 == 0) {
      if ((uVar14 & 0xff000000000000) == 0) goto LAB_10050a1dc;
    }
    else {
      if ((long)(int)lVar17 == lVar17 >> 0x20) goto LAB_10050a1fc;
LAB_10050a28c:
      FUN_10011da54(lVar17,uVar14);
    }
    FUN_1001037b4(lVar17,uVar14);
    FUN_1004ff9c8(unaff_x22 + 0x40,lVar17,uVar14);
    cVar6 = *(char *)(unaff_x22 + 0x60);
    if (cVar6 == -1) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
      puVar15 = *(undefined8 **)(unaff_x22 + 0x78);
      puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_1004a66a4();
      FUN_10003bf18(lVar17,uVar14);
      puVar15[1] = 0xd000000000000018;
      *puVar15 = 400;
      puVar15[2] = 0x8000000100dac730;
      puVar15[3] = 0;
      *(undefined1 *)(puVar15 + 4) = 0;
      puVar15[5] = 0;
      puVar15[6] = 0;
      puVar15[7] = puVar10;
      goto LAB_10050a240;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    if (cVar6 == '\0') {
      if ((*(undefined **)(unaff_x22 + 0x50) == (undefined *)0x696c616974696e69) &&
         (*(undefined **)(unaff_x22 + 0x58) == (undefined *)0xea0000000000657a)) {
        bVar9 = true;
      }
      else {
        bVar9 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)*(undefined **)(unaff_x22 + 0x50),
                           (_StringGuts)*(undefined **)(unaff_x22 + 0x58),
                           (_StringComparisonResult)0x69);
      }
    }
    else {
      bVar9 = false;
    }
    if (DAT_100fce788 != -1) {
      _swift_once(&DAT_100fce788,FUN_100528524);
    }
    uVar8 = DAT_101057b28;
    uVar18 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0xb8);
    uVar20 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x80);
    lVar4 = *(long *)(unaff_x22 + 0x88);
    *(undefined8 *)(unaff_x22 + 0x10) = 0x54534f50;
    *(undefined1 **)(unaff_x22 + 0x18) = &DAT_e400000000000000;
    *(undefined8 *)(unaff_x22 + 0x20) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(bool *)(unaff_x22 + 0x30) = bVar9;
    *(undefined8 *)(unaff_x22 + 0x38) = uVar8;
    uVar2 = *(undefined8 *)(lVar4 + 0x90);
    lVar5 = *(long *)(lVar4 + 0x98);
    FUN_100004640(lVar4 + 0x78,uVar2);
    pcVar19 = *(code **)(lVar5 + 8);
    _swift_bridgeObjectRetain(uVar8);
    (*pcVar19)(uVar20,uVar1,unaff_x22 + 0x10,uVar2,lVar5);
    _swift_bridgeObjectRelease(uVar8);
    (**(code **)(lVar3 + 0x30))(uVar20,1,uVar18);
    if ((int)uVar20 != 1) {
      uVar16 = *(undefined8 *)(unaff_x22 + 0xc0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x78);
      FUN_10003bf18(lVar17,uVar14);
      FUN_1000fb4c4(unaff_x22 + 0x40,&DAT_100fcd808,&DAT_100c53e10);
      FUN_100508068(uVar12,uVar16);
      FUN_100508068(uVar16,uVar18);
      goto LAB_10050a24c;
    }
    FUN_1000fb4c4(*(undefined8 *)(unaff_x22 + 0xa8),&DAT_100fcd548,&DAT_100c53e20);
    if (cVar6 == '\0') {
      plVar11 = (long *)0x1b0;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd8) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_10050a5ac;
      FUN_10050a664(plVar11,*(undefined8 *)(unaff_x22 + 0x78),lVar17,uVar14,uVar16,uVar12,
                    *(undefined8 *)(unaff_x22 + 0x80));
      return;
    }
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
    lVar3 = *(long *)(unaff_x22 + 0x98);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x90);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x78);
    FUN_1000fb4c4(unaff_x22 + 0x40,&DAT_100fcd808,&DAT_100c53e10);
    *(long *)(unaff_x22 + 0x68) = lVar17;
    *(ulong *)(unaff_x22 + 0x70) = uVar14;
    FUN_1001037b4(lVar17,uVar14);
    puVar10 = &DAT_100fcb3a0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_yield(uVar12,unaff_x22 + 0x68,puVar10);
    (**(code **)(lVar3 + 8))(uVar12,uVar18);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    FUN_10003bf18(lVar17,uVar14);
    *puVar15 = puVar10;
    uVar12 = 0;
  }
  else {
LAB_10050a1fc:
    uVar16 = *(undefined8 *)(unaff_x22 + 0xb0);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x78);
    puVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1004a66a4();
    puVar15[1] = 0xd000000000000012;
    *puVar15 = 400;
    puVar15[2] = 0x8000000100dac710;
    puVar15[3] = 0;
    *(undefined1 *)(puVar15 + 4) = 0;
    puVar15[5] = 0;
    puVar15[6] = 0;
    puVar15[7] = puVar10;
LAB_10050a240:
    uVar12 = 4;
  }
  _swift_storeEnumTagMultiPayload(puVar15,uVar16,uVar12);
LAB_10050a24c:
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010050a288. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050a5ac | FUN_10050a5ac */

void FUN_10050a5ac(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x88);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd8));
  _swift_task_switch(FUN_10050a5f8,uVar1,0);
  return;
}



/* Address: 0x10050a5f8 | FUN_10050a5f8 */

void FUN_10050a5f8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  FUN_1000fb4c4(unaff_x22 + 0x40,&DAT_100fcd808,&DAT_100c53e10);
  FUN_10003bf18(uVar1,uVar2);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0xc0));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010050a660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050a664 | FUN_10050a664 */

void FUN_10050a664(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x188) = param_6;
  *(undefined8 *)(unaff_x22 + 400) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x178) = param_4;
  *(undefined8 *)(unaff_x22 + 0x180) = param_5;
  *(undefined8 *)(unaff_x22 + 0x168) = param_2;
  *(undefined8 *)(unaff_x22 + 0x170) = param_3;
  *(undefined8 *)(unaff_x22 + 0x160) = param_1;
  _swift_task_switch(FUN_10050a688);
  return;
}



/* Address: 0x10050a688 | FUN_10050a688 */

void FUN_10050a688(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  long *plVar12;
  UnownedSerialExecutor UVar13;
  undefined8 uVar14;
  void *pvVar15;
  long unaff_x22;
  long lVar16;
  String isolation;
  
  lVar16 = _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x188);
  lVar4 = *(long *)(unaff_x22 + 400);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x170);
  *(long *)(unaff_x22 + 0x198) = _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts;
  _swift_beginAccess(lVar4 + lVar16,unaff_x22 + 0xb0,0x21,0);
  _swift_bridgeObjectRetain(uVar5);
  FUN_1005085f8(uVar1,unaff_x22 + 0x78);
  uVar8 = *(undefined8 *)(lVar4 + lVar16);
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uVar14 = *(undefined8 *)(lVar4 + lVar16);
  *(undefined8 *)(lVar4 + lVar16) = 0x8000000000000000;
  FUN_1004b528c(uVar1,uVar2,uVar5,uVar8);
  _swift_bridgeObjectRelease(uVar5);
  *(undefined8 *)(lVar4 + lVar16) = uVar14;
  _swift_endAccess(unaff_x22 + 0xb0);
  puVar9 = &DAT_100fcd490;
  FUN_1000f7830(&DAT_100fcd490,&DAT_100c538b0);
  lVar16 = *(long *)(puVar9 + -8);
  uVar10 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar10);
  *(undefined8 *)(unaff_x22 + 0x128) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x130) = uVar6;
  FUN_1001037b4(uVar3,uVar6);
  puVar11 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  Swift::AsyncThrowingStream::Continuation::_yield(uVar10,unaff_x22 + 0x128,puVar11);
  (**(code **)(lVar16 + 8))(uVar10,puVar9);
  _swift_task_dealloc(uVar10);
  FUN_10050bb28();
  *(long *)(unaff_x22 + 0x60) = lVar4;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x70) = uVar5;
  bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar7 & 1) != 0) {
    pvVar15 = *(void **)(unaff_x22 + 400);
    plVar12 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x1a0) = plVar12;
    *plVar12 = unaff_x22;
    plVar12[1] = (long)FUN_10050a8bc;
    isolation.bridgeObject = pvVar15;
    isolation.str = (char *)(unaff_x22 + 0x138);
    Swift::_withCheckedThrowingContinuation(isolation);
    return;
  }
  _swift_getObjectType(*(undefined8 *)(unaff_x22 + 400));
  UVar13 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_10050a91c,UVar13.unknown,uVar10);
  return;
}



/* Address: 0x10050a8bc | FUN_10050a8bc */

void FUN_10050a8bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1a0));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10050acac;
  }
  else {
    *(long *)(lVar3 + 0x1a8) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10050ab60;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10050a91c | FUN_10050a91c */

void FUN_10050a91c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  long unaff_x22;
  long lVar8;
  String function;
  
  uVar6 = *(ulong *)(unaff_x22 + 400);
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x148;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_10050aaec;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar8 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = (void *)0x8000000100dac9a0;
  function.str = (char *)0xd00000000000002a;
  Swift::CheckedContinuation::init(continuation,function);
  _swift_task_isCurrentExecutor(uVar6,0);
  if ((uVar6 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/StatelessHTTPServerTransport.swift",0x26,1,0xe7,*(undefined8 *)(unaff_x22 + 400)
               ,0);
  }
  lVar7 = *(long *)(unaff_x22 + 400);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar5 = &DAT_100fcdb40;
  FUN_1000f7830(&DAT_100fcdb40,&DAT_100c54048);
  uVar6 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar6);
  (**(code **)(lVar8 + 0x10))();
  (**(code **)(lVar8 + 0x38))(uVar6,0,1,puVar3);
  _swift_beginAccess(lVar7 + _TtC3MCP28StatelessHTTPServerTransport::responseWaiters,unaff_x22 + 200
                     ,0x21,0);
  _swift_bridgeObjectRetain(uVar2);
  FUN_100508bf4(uVar6,uVar1,uVar2);
  _swift_endAccess(unaff_x22 + 200);
  (**(code **)(lVar8 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar4);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x10050aaec | FUN_10050aaec */

void FUN_10050aaec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x30);
  if (lVar4 == 0) {
    *(undefined8 *)(lVar3 + 0x138) = *(undefined8 *)(lVar3 + 0x148);
    *(undefined8 *)(lVar3 + 0x140) = *(undefined8 *)(lVar3 + 0x150);
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10050acac;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1a8) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 400);
    pcVar1 = FUN_10050ab60;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10050ab60 | FUN_10050ab60 */

void FUN_10050ab60(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  _StringGuts _Var5;
  char *pcVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long unaff_x22;
  String SVar9;
  String SVar10;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  void *pvStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1a8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x160);
  _swift_beginAccess(*(long *)(unaff_x22 + 400) + *(long *)(unaff_x22 + 0x198),unaff_x22 + 0xe0,0x21
                     ,0);
  FUN_100506158(&local_78,uVar4,uVar1);
  _swift_endAccess(unaff_x22 + 0xe0);
  _Var5.unknown = local_70;
  FUN_1005080ac(local_78,local_70,local_68,pvStack_60,local_58,uStack_50,local_48);
  local_78 = 0;
  local_70 = (undefined *)0xe000000000000000;
  Swift::_StringGuts::grow(0x1c,_Var5);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd00000000000001a;
  local_70 = (undefined *)0x8000000100dac9d0;
  pcVar6 = (char *)(unaff_x22 + 0xf8);
  _swift_getErrorValue(uVar8,unaff_x22 + 0x158);
  SVar9 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar10.bridgeObject = pvStack_60;
  SVar10.str = pcVar6;
  Swift::String::append(SVar9,SVar10);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  puVar2 = local_70;
  uVar4 = local_78;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a66a4();
  _swift_errorRelease(uVar8);
  *puVar7 = 500;
  puVar7[1] = uVar4;
  puVar7[2] = puVar2;
  puVar7[3] = 0;
  *(undefined1 *)(puVar7 + 4) = 4;
  puVar7[5] = 0;
  puVar7[6] = 0;
  puVar7[7] = puVar3;
  uVar4 = 0;
  FUN_1004fe770(0);
  _swift_storeEnumTagMultiPayload(puVar7,uVar4,4);
                    /* WARNING: Could not recover jumptable at 0x00010050aca8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050acac | FUN_10050acac */

void FUN_10050acac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x180);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x160);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x140);
  _swift_beginAccess(*(long *)(unaff_x22 + 400) + *(long *)(unaff_x22 + 0x198),unaff_x22 + 0x110,
                     0x21,0);
  FUN_100506158(&local_80,uVar6,uVar2);
  _swift_endAccess(unaff_x22 + 0x110);
  FUN_1005080ac(local_80,uStack_78,local_70,uStack_68,local_60,uStack_58,local_50);
  puVar4 = &DAT_100fcb888;
  FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
  _swift_initStaticObject();
  puVar5 = puVar4;
  FUN_1004a66a4();
  FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
  *puVar7 = uVar1;
  puVar7[1] = uVar3;
  puVar7[2] = puVar5;
  uVar6 = 0;
  FUN_1004fe770(0);
  _swift_storeEnumTagMultiPayload(puVar7,uVar6,2);
                    /* WARNING: Could not recover jumptable at 0x00010050ada0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050ada4 | FUN_10050ada4 */

void FUN_10050ada4(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  long extraout_x8;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100fcdb40;
  FUN_1000f7830(&DAT_100fcdb40,&DAT_100c54048);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_70 + -extraout_x8;
  uVar2 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar2 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("MCP/StatelessHTTPServerTransport.swift",0x26,1,0xe7,param_2,0);
  }
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  lVar4 = *(long *)(puVar1 + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,puVar1);
  (**(code **)(lVar4 + 0x38))(puVar3,0,1,puVar1);
  _swift_beginAccess(param_2 + _TtC3MCP28StatelessHTTPServerTransport::responseWaiters,auStack_68,
                     0x21,0);
  _swift_bridgeObjectRetain(param_4);
  FUN_100508bf4(puVar3,param_3,param_4);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x10050aee0 | FUN_10050aee0 */

void FUN_10050aee0(undefined8 *param_1,char *param_2,void *param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long unaff_x20;
  long lVar4;
  void *pvVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  String SVar15;
  char *local_68 [3];
  
  if (param_4 == '\x01') {
    local_68[0] = param_2;
    SVar15 = Swift::CustomStringConvertible::get_description();
  }
  else {
    SVar15.bridgeObject = param_3;
    SVar15.str = param_2;
    _swift_bridgeObjectRetain(param_3);
  }
  lVar4 = _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts;
  pvVar5 = SVar15.bridgeObject;
  _swift_beginAccess(unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts,
                     local_68,0,0);
  lVar4 = *(long *)(unaff_x20 + lVar4);
  if (*(long *)(lVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar4);
    FUN_100071370();
    if (((ulong)SVar15.bridgeObject & 1) != 0) {
      puVar3 = (undefined8 *)(*(long *)(lVar4 + 0x38) + (long)SVar15.str * 0x38);
      uVar8 = *puVar3;
      uVar1 = puVar3[2];
      uVar2 = puVar3[3];
      uVar10 = puVar3[2];
      uVar9 = puVar3[1];
      uVar6 = puVar3[6];
      uVar14 = puVar3[6];
      uVar13 = puVar3[5];
      uVar12 = puVar3[4];
      uVar11 = puVar3[3];
      uVar7 = puVar3[4];
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar1);
      FUN_10011da54(uVar2,uVar7);
      _swift_bridgeObjectRetain(uVar6);
      _swift_bridgeObjectRelease(lVar4);
      _swift_bridgeObjectRelease(pvVar5);
      goto LAB_10050b018;
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  _swift_bridgeObjectRelease(pvVar5);
  uVar8 = 0;
  uVar9 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  uVar14 = 0;
LAB_10050b018:
  *param_1 = uVar8;
  param_1[2] = uVar10;
  param_1[1] = uVar9;
  param_1[4] = uVar12;
  param_1[3] = uVar11;
  param_1[6] = uVar14;
  param_1[5] = uVar13;
  return;
}



/* Address: 0x10050b044 | FUN_10050b044 */

void FUN_10050b044(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x3a8) = unaff_x20;
  puVar1 = &DAT_100fcb460;
  FUN_1000f7830(&DAT_100fcb460,&DAT_100c502b0);
  *(undefined **)(unaff_x22 + 0x3b0) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x3b8) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3c0) = uVar2;
  puVar1 = &DAT_100fcdd78;
  FUN_1000f7830(&DAT_100fcdd78,&DAT_100c54170);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3c8) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3d0) = uVar2;
  _swift_task_switch(FUN_10050b0e8);
  return;
}



/* Address: 0x10050b0e8 | FUN_10050b0e8 */

void FUN_10050b0e8(void)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  char *pcVar14;
  ulong uVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 *puVar18;
  long lVar19;
  undefined8 *puVar20;
  long unaff_x22;
  long lVar21;
  undefined8 uVar22;
  void *pvVar23;
  ulong uVar24;
  ulong uVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  
  lVar8 = *(long *)(unaff_x22 + 0x3a8);
  if ((*(byte *)(lVar8 + 0xa0) & 1) == 0) {
    *(undefined1 *)(lVar8 + 0xa0) = 1;
    lVar8 = *(long *)(lVar8 + 0x70);
    _swift_beginAccess(lVar8 + 0x20,unaff_x22 + 0x350,0,0);
    FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x2b0);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x2c8);
    lVar19 = *(long *)(unaff_x22 + 0x2d0);
    FUN_100004640(unaff_x22 + 0x2b0,uVar16);
    (**(code **)(lVar19 + 0x70))(uVar16,lVar19);
    FUN_100004594(unaff_x22 + 0x2b0);
    if (((uint)uVar16 & 0xff) < 2) {
      FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x2d8);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x2f0);
      lVar19 = *(long *)(unaff_x22 + 0x2f8);
      FUN_100004640(unaff_x22 + 0x2d8,uVar16);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000002a;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dac9f0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x74616e696d726574;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xeb00000000292865;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x102;
      *(undefined1 *)(unaff_x22 + 0xd0) = 1;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0xd00000000000002a;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dac9f0;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0;
      *(undefined8 *)(unaff_x22 + 0x100) = 0;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dac840;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x74616e696d726574;
      *(undefined8 *)(unaff_x22 + 0x120) = 0xeb00000000292865;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x102;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x130);
      FUN_1004eaa3c(unaff_x22 + 0xd0);
      (**(code **)(lVar19 + 0x28))(unaff_x22 + 0x10,uVar16,lVar19);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x2d8);
    }
    lVar19 = _TtC3MCP28StatelessHTTPServerTransport::responseWaiters;
    lVar9 = *(long *)(unaff_x22 + 0x3d0);
    lVar10 = *(long *)(unaff_x22 + 0x3c8);
    lVar11 = *(long *)(unaff_x22 + 0x3b8);
    lVar17 = *(long *)(unaff_x22 + 0x3a8);
    _swift_beginAccess(lVar17 + _TtC3MCP28StatelessHTTPServerTransport::responseWaiters,
                       unaff_x22 + 0x368,1,0);
    lVar2 = *(long *)(lVar17 + lVar19);
    lVar13 = -1L << ((ulong)*(byte *)(lVar2 + 0x20) & 0x3f);
    uVar15 = -lVar13;
    uVar24 = 0xffffffffffffffff;
    if (uVar15 < 0x40) {
      uVar24 = ~(-1L << (uVar15 & 0x3f));
    }
    uVar24 = uVar24 & *(ulong *)(lVar2 + 0x40);
    uVar15 = 0x3fU - lVar13 >> 6;
    _swift_bridgeObjectRetain();
    lVar13 = 0;
LAB_10050b360:
    puVar4 = &DAT_100fcdd80;
    lVar21 = lVar13;
    if (uVar24 == 0) {
      uVar25 = uVar15;
      if ((long)uVar15 <= lVar13 + 1) {
        uVar25 = lVar13 + 1;
      }
      do {
        lVar21 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10050b7f4);
          (*pcVar1)();
        }
        if ((long)uVar15 <= lVar21) {
          uVar16 = *(undefined8 *)(unaff_x22 + 0x3c8);
          FUN_1000f7830(&DAT_100fcdd80,&DAT_100c54178);
          (**(code **)(*(long *)(puVar4 + -8) + 0x38))(uVar16,1,1,puVar4);
          uVar24 = 0;
          lVar13 = uVar25 - 1;
          goto LAB_10050b454;
        }
        uVar24 = ((ulong *)(lVar2 + 0x40))[lVar21];
        lVar13 = lVar13 + 1;
      } while (uVar24 == 0);
    }
    puVar18 = *(undefined8 **)(unaff_x22 + 0x3c8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x3b0);
    uVar25 = (uVar24 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar24 & 0x5555555555555555) << 1;
    uVar25 = (uVar25 & 0xcccccccccccccccc) >> 2 | (uVar25 & 0x3333333333333333) << 2;
    uVar25 = (uVar25 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar25 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar25 = (uVar25 & 0xff00ff00ff00ff00) >> 8 | (uVar25 & 0xff00ff00ff00ff) << 8;
    uVar25 = (uVar25 & 0xffff0000ffff0000) >> 0x10 | (uVar25 & 0xffff0000ffff) << 0x10;
    uVar24 = uVar24 - 1 & uVar24;
    uVar25 = LZCOUNT(uVar25 >> 0x20 | uVar25 << 0x20) | lVar21 << 6;
    puVar20 = (undefined8 *)(*(long *)(lVar2 + 0x30) + uVar25 * 0x10);
    uVar16 = puVar20[1];
    *puVar18 = *puVar20;
    *(undefined8 *)(lVar10 + 8) = uVar16;
    puVar4 = &DAT_100fcdd80;
    FUN_1000f7830(&DAT_100fcdd80,&DAT_100c54178);
    (**(code **)(lVar11 + 0x10))
              ((long)puVar18 + (long)*(int *)(puVar4 + 0x30),
               *(long *)(lVar2 + 0x38) + *(long *)(lVar11 + 0x48) * uVar25,uVar12);
    (**(code **)(*(long *)(puVar4 + -8) + 0x38))(puVar18,0,1,puVar4);
    _swift_bridgeObjectRetain(uVar16);
    lVar13 = lVar21;
LAB_10050b454:
    puVar4 = &DAT_100fcdd80;
    uVar16 = *(undefined8 *)(unaff_x22 + 0x3d0);
    FUN_10011532c(*(undefined8 *)(unaff_x22 + 0x3c8),uVar16,&DAT_100fcdd78,&DAT_100c54170);
    FUN_1000f7830(&DAT_100fcdd80,&DAT_100c54178);
    (**(code **)(*(long *)(puVar4 + -8) + 0x30))(uVar16,1,puVar4);
    if ((int)uVar16 != 1) {
      puVar20 = *(undefined8 **)(unaff_x22 + 0x3c0);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x3b0);
      pcVar14 = (char *)**(undefined8 **)(unaff_x22 + 0x3d0);
      pvVar23 = *(void **)(lVar9 + 8);
      (**(code **)(lVar11 + 0x20))
                (puVar20,(long)*(undefined8 **)(unaff_x22 + 0x3d0) + (long)*(int *)(puVar4 + 0x30),
                 uVar16);
      FUN_1004db3ac();
      puVar4 = &DAT_100eda9c8;
      pcVar6 = (char *)0x0;
      pvVar7 = (void *)0x0;
      _swift_allocError();
      puVar20[1] = 0;
      puVar20[2] = 0;
      *puVar20 = 0;
      *(undefined1 *)(puVar20 + 3) = 8;
      *(undefined **)(unaff_x22 + 0x3a0) = puVar4;
      Swift::CheckedContinuation::resume(unaff_x22 + 0x3a0,uVar16);
      FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x300);
      uVar16 = *(undefined8 *)(unaff_x22 + 0x318);
      lVar21 = *(long *)(unaff_x22 + 800);
      FUN_100004640(unaff_x22 + 0x300,uVar16);
      (**(code **)(lVar21 + 0x70))(uVar16,lVar21);
      FUN_100004594(unaff_x22 + 0x300);
      uVar22 = *(undefined8 *)(unaff_x22 + 0x3c0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x3b0);
      if (((uint)uVar16 & 0xff) < 2) {
        FUN_100076688(lVar8 + 0x20,unaff_x22 + 0x328);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x340);
        lVar21 = *(long *)(unaff_x22 + 0x348);
        FUN_100004640();
        puVar4 = &DAT_100fcd4a8;
        FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
        pcVar5 = (char *)(unaff_x22 + 0x1f0);
        _swift_initStackObject();
        *(undefined8 *)(puVar4 + 0x18) = 2;
        *(undefined8 *)(puVar4 + 0x10) = 1;
        *(undefined8 *)(puVar4 + 0x20) = 0x4974736575716572;
        *(undefined8 *)(puVar4 + 0x28) = 0xe900000000000044;
        SVar27.bridgeObject = pcVar6;
        SVar27.str = pcVar5;
        Swift::String::reserveCapacity(2,SVar27);
        SVar26.bridgeObject = pvVar23;
        SVar26.str = pcVar14;
        SVar28.bridgeObject = pvVar7;
        SVar28.str = pcVar6;
        Swift::String::write(SVar26,SVar28);
        *(undefined8 *)(puVar4 + 0x30) = 0;
        *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
        puVar4[0x58] = 0;
        puVar3 = puVar4;
        FUN_1004a6a1c();
        _swift_setDeallocating(puVar4);
        FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
        *(undefined1 *)(unaff_x22 + 0x70) = 1;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001c;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100daca20;
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined **)(unaff_x22 + 0x90) = puVar3;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000026;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dac840;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0x74616e696d726574;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0xeb00000000292865;
        *(undefined8 *)(unaff_x22 + 200) = 0x107;
        *(undefined1 *)(unaff_x22 + 400) = 1;
        *(undefined8 *)(unaff_x22 + 0x198) = 0xd00000000000001c;
        *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100daca20;
        *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
        *(undefined **)(unaff_x22 + 0x1b0) = puVar3;
        *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
        *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000026;
        *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dac840;
        *(undefined8 *)(unaff_x22 + 0x1d8) = 0x74616e696d726574;
        *(undefined8 *)(unaff_x22 + 0x1e0) = 0xeb00000000292865;
        *(undefined8 *)(unaff_x22 + 0x1e8) = 0x107;
        FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
        FUN_1004eaa3c(unaff_x22 + 400);
        (**(code **)(lVar21 + 0x28))(unaff_x22 + 0x70,uVar16);
        _swift_bridgeObjectRelease(pvVar23);
        FUN_1004eaa3c(unaff_x22 + 0x70);
        (**(code **)(lVar11 + 8))(uVar22,uVar12);
        FUN_100004594(unaff_x22 + 0x328);
      }
      else {
        _swift_bridgeObjectRelease(pvVar23);
        (**(code **)(lVar11 + 8))(uVar22,uVar12);
      }
      goto LAB_10050b360;
    }
    lVar9 = *(long *)(unaff_x22 + 0x3a8);
    _swift_release(lVar2);
    puVar4 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    uVar16 = *(undefined8 *)(lVar17 + lVar19);
    *(undefined **)(lVar17 + lVar19) = PTR___swiftEmptyDictionarySingleton_100eae0e0;
    _swift_bridgeObjectRelease(uVar16);
    lVar8 = _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts;
    _swift_beginAccess(lVar9 + _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts,
                       unaff_x22 + 0x380,1,0);
    uVar16 = *(undefined8 *)(lVar9 + lVar8);
    *(undefined **)(lVar9 + lVar8) = puVar4;
    _swift_bridgeObjectRelease(uVar16);
    *(undefined8 *)(unaff_x22 + 0x398) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x398));
  }
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3c8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x3c0);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x3d0));
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010050b7ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050b7f4 | FUN_10050b7f4 */

void FUN_10050b7f4(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100004594(unaff_x20 + 0x78);
  lVar1 = _TtC3MCP28StatelessHTTPServerTransport::incomingStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP28StatelessHTTPServerTransport::incomingContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::responseWaiters));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x10050b8a8 | FUN_10050b8a8 */

void FUN_10050b8a8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  FUN_100004594(unaff_x20 + 0x78);
  lVar1 = _TtC3MCP28StatelessHTTPServerTransport::incomingStream;
  puVar2 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  lVar1 = _TtC3MCP28StatelessHTTPServerTransport::incomingContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_bridgeObjectRelease
            (*(undefined8 *)(unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::responseWaiters));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC3MCP28StatelessHTTPServerTransport::httpRequestContexts));
  _swift_defaultActor_destroy();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10050b95c | FUN_10050b95c */

void FUN_10050b95c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_100509190();
  return;
}



/* Address: 0x10050b9a0 | FUN_10050b9a0 */

void FUN_10050b9a0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x3e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_10050b044();
  return;
}



/* Address: 0x10050b9e4 | FUN_10050b9e4 */

void FUN_10050b9e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x6c0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1005093d8(param_1,param_2);
  return;
}



/* Address: 0x10050ba40 | FUN_10050ba40 */

void FUN_10050ba40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar1;
  _swift_task_switch(FUN_10050ba60,uVar1,0);
  return;
}



/* Address: 0x10050ba60 | FUN_10050ba60 */

void FUN_10050ba60(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x48);
  FUN_10050aee0(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58)
                ,*(undefined1 *)(unaff_x22 + 0x68));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x30);
  puVar1[6] = *(undefined8 *)(unaff_x22 + 0x40);
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[1] = uVar3;
  *puVar1 = uVar2;
                    /* WARNING: Could not recover jumptable at 0x00010050bab0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050bab4 | FUN_10050bab4 */

undefined8 FUN_10050bab4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd7e8;
  FUN_1000f7830(&DAT_100fcd7e8,&DAT_100c54010);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10050bb04 | FUN_10050bb04 */

void FUN_10050bb04(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_10050bb28();
  *(long *)(param_1 + 8) = lVar1;
  return;
}



/* Address: 0x10050bb28 | FUN_10050bb28 */

void FUN_10050bb28(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fcdb90 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_10050bb6c(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c54060;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c54060,uVar1);
  DAT_100fcdb90 = pTVar2;
  return;
}



/* Address: 0x10050bb6c | FUN_10050bb6c */

void FUN_10050bb6c(undefined8 param_1)

{
  if (DAT_100fcdbc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb3274);
  return;
}



/* Address: 0x10050bba4 | FUN_10050bba4 */

void FUN_10050bba4(void)

{
  FUN_10050bb6c(0);
  return;
}



/* Address: 0x10050bbac | FUN_10050bbac */

void FUN_10050bbac(long param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puStack_60 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_68 = &DAT_100c54128;
  local_58 = &DAT_100c54140;
  puStack_50 = &DAT_100c54158;
  local_48 = &DAT_100c54158;
  puVar2 = &DAT_100fcd218;
  lVar1 = 0x13f;
  FUN_1004f9364(0x13f,&DAT_100fcd218,PTR_typeMetadataAccessor_100eaeea0);
  if (puVar2 < (undefined8 *)0x40) {
    local_40 = *(long *)(lVar1 + -8) + 0x40;
    puVar3 = &DAT_100fcd220;
    lVar1 = 0x13f;
    FUN_1004f9364(0x13f,&DAT_100fcd220,PTR_typeMetadataAccessor_100eaee68);
    if (puVar3 < (undefined *)0x40) {
      local_38 = *(long *)(lVar1 + -8) + 0x40;
      puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
      local_28 = puStack_30;
      _swift_updateClassMetadata2(param_1,0x100,9,&local_68,param_1 + 0x50);
    }
  }
  return;
}



/* Address: 0x10050bc90 | FUN_10050bc90 */

void FUN_10050bc90(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10050ada4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10050bc9c | FUN_10050bc9c */

long FUN_10050bc9c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined **ppuStack_38;
  
  _swift_allocObject();
  _swift_defaultActor_initialize();
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined **)(unaff_x20 + 0x88) = puVar2;
  lVar1 = _TtC3MCP17InMemoryTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,puVar2);
  if (param_1 == 0) {
    local_40 = &DAT_100ee6990;
    ppuStack_38 = &PTR_PTR_100ee68f0;
    param_1 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(param_1 + 0x10) = 0xd000000000000017;
    *(undefined8 *)(param_1 + 0x18) = 0x8000000100daca40;
    FUN_100076508(auStack_58,param_1 + 0x20);
  }
  *(long *)(unaff_x20 + 0x70) = param_1;
  return unaff_x20;
}



/* Address: 0x10050bd8c | FUN_10050bd8c */

void FUN_10050bd8c(long param_1)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined **ppuStack_38;
  
  _swift_defaultActor_initialize();
  *(undefined1 *)(unaff_x20 + 0x78) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined **)(unaff_x20 + 0x88) = puVar2;
  lVar1 = _TtC3MCP17InMemoryTransport::messageContinuation;
  puVar2 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(unaff_x20 + lVar1,1,1,puVar2);
  if (param_1 == 0) {
    local_40 = &DAT_100ee6990;
    ppuStack_38 = &PTR_PTR_100ee68f0;
    param_1 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(param_1 + 0x10) = 0xd000000000000017;
    *(undefined8 *)(param_1 + 0x18) = 0x8000000100daca40;
    FUN_100076508(auStack_58,param_1 + 0x20);
  }
  *(long *)(unaff_x20 + 0x70) = param_1;
  return;
}



/* Address: 0x10050be68 | FUN_10050be68 */

void FUN_10050be68(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  _swift_task_switch(FUN_10050be80,0,0);
  return;
}



/* Address: 0x10050be80 | FUN_10050be80 */

void FUN_10050be80(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long unaff_x22;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  lVar6 = *(long *)(unaff_x22 + 0x38);
  lVar2 = lVar6;
  lVar7 = lVar6;
  if (lVar6 == 0) {
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100ee6990;
    *(undefined ***)(unaff_x22 + 0x30) = &PTR_PTR_100ee68f0;
    lVar2 = 0;
    FUN_1005ce220();
    lVar6 = lVar2;
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x10) = 0xd00000000000001e;
    *(undefined8 *)(lVar6 + 0x18) = 0x8000000100daca60;
    FUN_100076508(unaff_x22 + 0x10,lVar6 + 0x20);
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100ee6990;
    *(undefined ***)(unaff_x22 + 0x30) = &PTR_PTR_100ee68f0;
    _swift_allocObject(lVar2,0x48,7);
    *(undefined8 *)(lVar2 + 0x10) = 0xd00000000000001e;
    *(undefined8 *)(lVar2 + 0x18) = 0x8000000100daca80;
    FUN_100076508(unaff_x22 + 0x10,lVar2 + 0x20);
    _swift_retain(lVar6);
    _swift_retain(lVar2);
    lVar7 = 0;
  }
  *(long *)(unaff_x22 + 0x40) = lVar2;
  *(long *)(unaff_x22 + 0x48) = lVar6;
  lVar3 = 0;
  FUN_10050c12c();
  lVar4 = lVar3;
  _swift_allocObject();
  *(long *)(unaff_x22 + 0x50) = lVar4;
  _swift_retain_n(lVar7,4);
  _swift_defaultActor_initialize(lVar4);
  *(undefined1 *)(lVar4 + 0x78) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(lVar4 + 0x80) = 0;
  *(undefined **)(lVar4 + 0x88) = puVar1;
  lVar7 = _TtC3MCP17InMemoryTransport::messageContinuation;
  puVar5 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  pcVar8 = *(code **)(*(long *)(puVar5 + -8) + 0x38);
  (*pcVar8)(lVar4 + lVar7,1,1,puVar5);
  *(long *)(lVar4 + 0x70) = lVar6;
  _swift_allocObject(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
  *(long *)(unaff_x22 + 0x58) = lVar3;
  _swift_defaultActor_initialize();
  *(undefined1 *)(lVar3 + 0x78) = 0;
  *(undefined8 *)(lVar3 + 0x80) = 0;
  *(undefined **)(lVar3 + 0x88) = puVar1;
  (*pcVar8)(lVar3 + _TtC3MCP17InMemoryTransport::messageContinuation,1,1,puVar5);
  *(long *)(lVar3 + 0x70) = lVar2;
  _swift_task_switch(FUN_10050c054,lVar4,0);
  return;
}



/* Address: 0x10050c054 | FUN_10050c054 */

void FUN_10050c054(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x80);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x50) + 0x80) = uVar1;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  _swift_task_switch(FUN_10050c0a4,uVar1,0);
  return;
}



/* Address: 0x10050c0a4 | FUN_10050c0a4 */

void FUN_10050c0a4(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x80);
  *(undefined8 *)(*(long *)(unaff_x22 + 0x58) + 0x80) = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_retain();
  _swift_release(uVar1);
  _swift_task_switch(FUN_10050c0f0,0,0);
  return;
}



/* Address: 0x10050c0f0 | FUN_10050c0f0 */

void FUN_10050c0f0(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x40));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010050c128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined8 *)(unaff_x22 + 0x50),*(undefined8 *)(unaff_x22 + 0x58));
  return;
}



/* Address: 0x10050c12c | FUN_10050c12c */

void FUN_10050c12c(undefined8 param_1)

{
  if (DAT_100fcddc0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cb3364);
  return;
}



/* Address: 0x10050c164 | FUN_10050c164 */

void FUN_10050c164(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1e8) = unaff_x20;
  _swift_task_switch(FUN_10050c17c);
  return;
}



/* Address: 0x10050c17c | FUN_10050c17c */

void FUN_10050c17c(undefined8 *param_1)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x22 + 0x1e8);
  if ((*(byte *)(lVar2 + 0x78) & 1) == 0) {
    if (*(long *)(lVar2 + 0x80) == 0) {
      FUN_1004db3ac();
      _swift_allocError(&DAT_100eda9c8,param_1,0,0);
      *param_1 = 0xd00000000000004c;
      param_1[1] = 0x8000000100dacaa0;
      param_1[2] = 0;
      *(undefined1 *)(param_1 + 3) = 4;
      _swift_willThrow();
      UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
      goto LAB_10050c408;
    }
    *(undefined1 *)(lVar2 + 0x78) = 1;
    lVar3 = *(long *)(lVar2 + 0x70);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x1b8,0,0);
    FUN_100076688(lVar3 + 0x20,unaff_x22 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar2 = *(long *)(unaff_x22 + 0xf0);
    FUN_100004640(unaff_x22 + 0xd0,uVar1);
    (**(code **)(lVar2 + 0x70))(uVar1,lVar2);
    FUN_100004594(unaff_x22 + 0xd0);
    if (((uint)uVar1 & 0xff) < 3) {
      lVar2 = unaff_x22 + 0x10;
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 400);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar3 = *(long *)(unaff_x22 + 0x1b0);
      FUN_100004640(unaff_x22 + 400,uVar1);
      *(undefined1 *)(unaff_x22 + 0x10) = 2;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacb10;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x6c;
      *(undefined1 *)(unaff_x22 + 0xd0) = 2;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000020;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dacb10;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0;
      *(undefined8 *)(unaff_x22 + 0x100) = 0;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x120) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x6c;
      goto LAB_10050c3c8;
    }
  }
  else {
    lVar3 = *(long *)(lVar2 + 0x70);
    _swift_beginAccess(lVar3 + 0x20,unaff_x22 + 0x1d0,0,0);
    FUN_100076688(lVar3 + 0x20,unaff_x22 + 0xd0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xe8);
    lVar2 = *(long *)(unaff_x22 + 0xf0);
    FUN_100004640(unaff_x22 + 0xd0,uVar1);
    (**(code **)(lVar2 + 0x70))(uVar1,lVar2);
    FUN_100004594(unaff_x22 + 0xd0);
    if (((uint)uVar1 & 0xff) < 2) {
      lVar2 = unaff_x22 + 0x70;
      FUN_100076688(lVar3 + 0x20,unaff_x22 + 400);
      uVar1 = *(undefined8 *)(unaff_x22 + 0x1a8);
      lVar3 = *(long *)(unaff_x22 + 0x1b0);
      FUN_100004640(unaff_x22 + 400,uVar1);
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacb40;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 0x62;
      *(undefined1 *)(unaff_x22 + 0xd0) = 1;
      *(undefined8 *)(unaff_x22 + 0xd8) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dacb40;
      *(undefined8 *)(unaff_x22 + 0xf0) = 0;
      *(undefined8 *)(unaff_x22 + 0xe8) = 0;
      *(undefined8 *)(unaff_x22 + 0x100) = 0;
      *(undefined8 *)(unaff_x22 + 0xf8) = 0;
      *(undefined8 *)(unaff_x22 + 0x108) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0x118) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x120) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x128) = 0x62;
LAB_10050c3c8:
      FUN_1004eaa00(lVar2,unaff_x22 + 0x130);
      FUN_1004eaa3c(unaff_x22 + 0xd0);
      (**(code **)(lVar3 + 0x28))(lVar2,uVar1,lVar3);
      FUN_1004eaa3c(lVar2);
      FUN_100004594(unaff_x22 + 400);
    }
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10050c408:
                    /* WARNING: Could not recover jumptable at 0x00010050c420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10050c480 | FUN_10050c480 */

void FUN_10050c480(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d0) = unaff_x20;
  puVar1 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  *(undefined **)(unaff_x22 + 0x1d8) = puVar1;
  lVar4 = *(long *)(puVar1 + -8);
  *(long *)(unaff_x22 + 0x1e0) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  puVar1 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f0) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  _swift_task_switch(FUN_10050c524);
  return;
}



/* Address: 0x10050c524 | FUN_10050c524 */

void FUN_10050c524(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x22 + 0x1d0);
  if (*(char *)(lVar6 + 0x78) == '\x01') {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1d8);
    lVar2 = *(long *)(unaff_x22 + 0x1e0);
    *(undefined1 *)(lVar6 + 0x78) = 0;
    lVar1 = _TtC3MCP17InMemoryTransport::messageContinuation;
    _swift_beginAccess(lVar6 + _TtC3MCP17InMemoryTransport::messageContinuation,unaff_x22 + 0x180,0,
                       0);
    FUN_10050c9f0(lVar6 + lVar1,uVar3);
    (**(code **)(lVar2 + 0x30))(uVar3,1,uVar4);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1f8);
    if ((int)uVar3 == 0) {
      lVar2 = *(long *)(unaff_x22 + 0x1e0);
      uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x1d8);
      (**(code **)(lVar2 + 0x10))(uVar3,uVar4,uVar5);
      FUN_1000fb4c4(uVar4,&DAT_100fcd158,&DAT_100c53740);
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
      Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x1c8));
      (**(code **)(lVar2 + 8))(uVar3,uVar5);
    }
    else {
      FUN_1000fb4c4(uVar4,&DAT_100fcd158,&DAT_100c53740);
    }
    uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
    lVar2 = *(long *)(unaff_x22 + 0x1d0);
    (**(code **)(*(long *)(unaff_x22 + 0x1e0) + 0x38))(uVar4,1,1,*(undefined8 *)(unaff_x22 + 0x1d8))
    ;
    _swift_beginAccess(lVar6 + lVar1,unaff_x22 + 0x198,0x21,0);
    FUN_1005085a8(uVar4,lVar6 + lVar1);
    _swift_endAccess(unaff_x22 + 0x198);
    lVar6 = *(long *)(lVar2 + 0x80);
    *(long *)(unaff_x22 + 0x200) = lVar6;
    if (lVar6 != 0) {
      _swift_retain(lVar6);
      _swift_task_switch(FUN_10050c814,lVar6,0);
      return;
    }
    lVar2 = *(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x70);
    _swift_beginAccess(lVar2 + 0x20,unaff_x22 + 0x1b0,0,0);
    FUN_100076688(lVar2 + 0x20,unaff_x22 + 0x130);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x148);
    lVar6 = *(long *)(unaff_x22 + 0x150);
    FUN_100004640(unaff_x22 + 0x130,uVar4);
    (**(code **)(lVar6 + 0x70))(uVar4,lVar6);
    FUN_100004594(unaff_x22 + 0x130);
    if (((uint)uVar4 & 0xff) < 3) {
      FUN_100076688(lVar2 + 0x20,unaff_x22 + 0x158);
      uVar4 = *(undefined8 *)(unaff_x22 + 0x170);
      lVar6 = *(long *)(unaff_x22 + 0x178);
      FUN_100004640(unaff_x22 + 0x158,uVar4);
      *(undefined1 *)(unaff_x22 + 0x10) = 2;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacb60;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x7e;
      *(undefined1 *)(unaff_x22 + 0x70) = 2;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000016;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacb60;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001b;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacaf0;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 200) = 0x7e;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x10,uVar4,lVar6);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x158);
    }
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010050c810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050c814 | FUN_10050c814 */

void FUN_10050c814(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d0);
  FUN_10050ca40();
  _swift_task_switch(FUN_10050c854,uVar1,0);
  return;
}



/* Address: 0x10050c854 | FUN_10050c854 */

void FUN_10050c854(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x200));
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x1d0) + 0x70);
  _swift_beginAccess(lVar4 + 0x20,unaff_x22 + 0x1b0,0,0);
  FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x130);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar1 = *(long *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar2);
  (**(code **)(lVar1 + 0x70))(uVar2,lVar1);
  FUN_100004594(unaff_x22 + 0x130);
  if (((uint)uVar2 & 0xff) < 3) {
    FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x158);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar1 = *(long *)(unaff_x22 + 0x178);
    FUN_100004640(unaff_x22 + 0x158,uVar2);
    *(undefined1 *)(unaff_x22 + 0x70) = 2;
    *(undefined1 *)(unaff_x22 + 0x10) = 2;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacb60;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacaf0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x7e;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000016;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacb60;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacaf0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
    *(undefined8 *)(unaff_x22 + 200) = 0x7e;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar1 + 0x28))(unaff_x22 + 0x10,uVar2,lVar1);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x158);
  }
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1f0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e8);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1f8));
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x00010050c9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050c9f0 | FUN_10050c9f0 */

undefined8 FUN_10050c9f0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10050ca40 | FUN_10050ca40 */

void FUN_10050ca40(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long unaff_x20;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [96];
  undefined1 auStack_178 [24];
  undefined8 local_160;
  long lStack_158;
  undefined1 local_150 [8];
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined *local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar1 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar8 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = (long)&uStack_1e0 - extraout_x8;
  puVar2 = &DAT_100fcd158;
  FUN_1000f7830(&DAT_100fcd158,&DAT_100c53740);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  lVar4 = lVar5 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar6 = _TtC3MCP17InMemoryTransport::messageContinuation;
  puVar7 = (undefined8 *)(lVar4 - extraout_x12);
  if (*(char *)(unaff_x20 + 0x78) == '\x01') {
    _swift_beginAccess(unaff_x20 + _TtC3MCP17InMemoryTransport::messageContinuation,auStack_d8,0,0);
    FUN_10050c9f0(unaff_x20 + lVar6,puVar7);
    puVar3 = puVar7;
    (**(code **)(lVar8 + 0x30))(puVar7,1,puVar1);
    if ((int)puVar3 == 0) {
      (**(code **)(lVar8 + 0x10))(lVar5,puVar7,puVar1);
      FUN_1000fb4c4(puVar7,&DAT_100fcd158,&DAT_100c53740);
      FUN_1004db3ac();
      puVar2 = &DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar7,0,0);
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      *(undefined1 *)(puVar7 + 3) = 8;
      local_c0 = puVar2;
      Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_c0);
      (**(code **)(lVar8 + 8))(lVar5,puVar1);
    }
    else {
      FUN_1000fb4c4(puVar7,&DAT_100fcd158,&DAT_100c53740);
    }
    (**(code **)(lVar8 + 0x38))(lVar4,1,1,puVar1);
    _swift_beginAccess(unaff_x20 + lVar6,&local_c0,0x21,0);
    FUN_1005085a8(lVar4,unaff_x20 + lVar6);
    _swift_endAccess(&local_c0);
    *(undefined1 *)(unaff_x20 + 0x78) = 0;
    lVar6 = *(long *)(unaff_x20 + 0x70);
    _swift_beginAccess(lVar6 + 0x20,auStack_f0,0,0);
    FUN_100076688(lVar6 + 0x20,&local_c0);
    FUN_100004640(&local_c0,local_a8);
    (**(code **)(lStack_a0 + 0x70))(local_a8,lStack_a0);
    FUN_100004594(&local_c0);
    if (((uint)local_a8 & 0xff) < 3) {
      FUN_100076688(lVar6 + 0x20,auStack_178);
      FUN_100004640(auStack_178,local_160);
      local_c0 = (undefined *)CONCAT71(local_c0._1_7_,2);
      local_b8 = 0xd00000000000001b;
      uStack_b0 = 0x8000000100dacc30;
      lStack_a0 = 0;
      local_a8 = 0;
      uStack_90 = 0;
      local_98 = 0;
      local_88 = 0xd00000000000001b;
      uStack_80 = 0x8000000100dacaf0;
      local_78 = 0xd000000000000019;
      uStack_70 = 0x8000000100dacc10;
      local_68 = 0x87;
      local_150[0] = 2;
      local_148 = 0xd00000000000001b;
      uStack_140 = 0x8000000100dacc30;
      uStack_130 = 0;
      local_138 = 0;
      uStack_120 = 0;
      local_128 = 0;
      local_118 = 0xd00000000000001b;
      uStack_110 = 0x8000000100dacaf0;
      local_108 = 0xd000000000000019;
      uStack_100 = 0x8000000100dacc10;
      local_f8 = 0x87;
      FUN_1004eaa00(&local_c0,auStack_1d8);
      FUN_1004eaa3c(local_150);
      (**(code **)(lStack_158 + 0x28))(&local_c0,local_160,lStack_158);
      FUN_1004eaa3c(&local_c0);
      FUN_100004594(auStack_178);
    }
  }
  return;
}



/* Address: 0x10050cd88 | FUN_10050cd88 */

void FUN_10050cd88(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x210) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x208) = param_2;
  *(undefined8 *)(unaff_x22 + 0x200) = param_1;
  _swift_task_switch(FUN_10050cda8);
  return;
}


