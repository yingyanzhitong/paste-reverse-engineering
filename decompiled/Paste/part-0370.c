/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004881dc | FUN_1004881dc */

void FUN_1004881dc(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_2;
  FUN_1009e1f14();
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100488254;
  FUN_100486e1c(0x100000);
  return;
}



/* Address: 0x100488254 | FUN_100488254 */

void FUN_100488254(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(undefined8 *)(lVar4 + 0x68) = param_1;
  *(undefined8 *)(lVar4 + 0x70) = param_2;
  *(undefined8 *)(lVar4 + 0x78) = param_3;
  *(long *)(lVar4 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x60));
  uVar1 = *(undefined8 *)(lVar4 + 0x50);
  uVar3 = *(undefined8 *)(lVar4 + 0x58);
  if (unaff_x20 == 0) {
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_1004882f4;
  }
  else {
    _swift_errorRelease();
    FUN_1000da368(uVar1,uVar3);
    pcVar2 = FUN_100488430;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1004882f4 | FUN_1004882f4 */

void FUN_1004882f4(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ushort uVar4;
  code *pcVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  long unaff_x22;
  ulong uVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 local_68;
  undefined8 uStack_60;
  
  uVar9 = *(ulong *)(unaff_x22 + 0x70);
  uVar8 = uVar9 >> 0x20;
  if (uVar8 < (uVar9 & 0xffffffff)) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100488428);
    (*pcVar5)();
  }
  uVar11 = *(undefined8 *)(unaff_x22 + 0x78);
  if (uVar8 <= (int)uVar11 -
               ((ushort)((ulong)uVar11 >> 0x30) & 0xff | (uint)((ulong)uVar11 >> 0x18) & 0xffff00))
  {
    uVar12 = *(undefined8 *)(unaff_x22 + 0x68);
    *(undefined **)(unaff_x22 + 0x28) = &DAT_100eeb2d0;
    FUN_10047676c();
    *(undefined8 *)(unaff_x22 + 0x30) = param_1;
    puVar6 = &DAT_100ed77d8;
    _swift_allocObject(&DAT_100ed77d8,0x38,7);
    *(undefined **)(unaff_x22 + 0x10) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = uVar12;
    *(int *)(puVar6 + 0x18) = (int)uVar9;
    *(int *)(puVar6 + 0x1c) = (int)(uVar9 >> 0x20);
    *(int *)(puVar6 + 0x20) = (int)uVar11;
    *(short *)(puVar6 + 0x24) = (short)((ulong)uVar11 >> 0x20);
    puVar6[0x26] = (char)((ulong)uVar11 >> 0x30);
    *(ulong *)(puVar6 + 0x28) = uVar9 & 0xffffffff;
    *(ulong *)(puVar6 + 0x30) = uVar8;
    plVar7 = (long *)(unaff_x22 + 0x10);
    FUN_100004640(plVar7,&DAT_100eeb2d0);
    lVar10 = *plVar7;
    uVar4 = *(ushort *)((long)plVar7 + 0x14);
    bVar3 = *(byte *)((long)plVar7 + 0x16);
    lVar1 = plVar7[3];
    lVar2 = plVar7[4];
    _swift_beginAccess(lVar10 + 0x18,unaff_x22 + 0x38,0,0);
    if (!SBORROW8(lVar2,lVar1)) {
      lVar10 = *(long *)(lVar10 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3 + lVar1;
      FUN_100441844(&local_68,lVar10,lVar10 + (lVar2 - lVar1));
      FUN_100004594(unaff_x22 + 0x10);
                    /* WARNING: Could not recover jumptable at 0x000100488420. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))(local_68,uStack_60);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x100488430);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10048842c);
  (*pcVar5)();
}



/* Address: 0x100488430 | FUN_100488430 */

void FUN_100488430(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010048843c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(0,0xc000000000000000);
  return;
}



/* Address: 0x100488440 | FUN_100488440 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100488440(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  NSDictionary *pNVar1;
  Data DVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  undefined1 *extraout_x1;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  String SVar9;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined1 *puStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar1 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
  local_b8 = (undefined *)0x0;
  DVar2.unknown =
       (undefined *)
       objc_stub::dataWithJSONObject_options_error_
                 (&_OBJC_CLASS___NSJSONSerialization,pNVar1,2,&local_b8);
  if (DVar2.unknown == (undefined *)0x0) {
    puVar3 = local_b8;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(puVar3);
    puVar3 = (undefined *)0x7d7b;
    puVar6 = &SUB_e200000000000000;
    FUN_10045fa58();
    DVar2.unknown = puVar3;
  }
  else {
    puVar6 = extraout_x1;
    DVar2 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar2);
    puVar3 = (undefined *)0x0;
  }
  uVar8 = 0x2d746e65746e6f43;
  thunk_FUN_10085c548();
  uVar4 = 0xd000000000000010;
  local_b8 = puVar3;
  FUN_10085c664(0xd000000000000010,0x8000000100d8fc90,0x2d746e65746e6f43,0xec00000065707954,
                0x2d746e65746e6f63,0xec00000065707974);
  puVar3 = local_b8;
  FUN_100611728();
  _swift_bridgeObjectRetain(param_5);
  _swift_retain(puVar3);
  puVar5 = DVar2.unknown;
  puVar7 = puVar6;
  FUN_100487db4();
  local_80 = uVar4 & 0xffffffffffffff;
  puStack_98 = puVar3;
  uStack_78 = 0;
  local_70 = 0;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  local_90 = puVar5;
  puStack_88 = puVar7;
  _swift_retain(puVar3);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar3);
  if ((uVar8 & 1) == 0) {
    SVar9 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar9.str,SVar9.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(puVar3);
  FUN_10003bf2c(DVar2.unknown,puVar6);
  _swift_release(puVar3);
  param_1[5] = puStack_88;
  param_1[4] = local_90;
  param_1[7] = uStack_78;
  param_1[6] = local_80;
  *(undefined1 *)(param_1 + 8) = local_70;
  param_1[1] = uStack_a8;
  *param_1 = local_b0;
  param_1[3] = puStack_98;
  param_1[2] = local_a0;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004886dc | FUN_1004886dc */

void FUN_1004886dc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  UUID UVar3;
  CharacterSet CVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  
  lVar6 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x3c0) = param_5;
  *(ulong *)(unaff_x22 + 0x3b8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3b0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3a8) = param_1;
  puVar1 = &DAT_100fc8318;
  FUN_1000037f0(&DAT_100fc8318,&DAT_100c4cea0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3c8) = uVar2;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x3d0) = UVar3.unknown;
  lVar7 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x3d8) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3e0) = uVar2;
  lVar7 = 0;
  FUN_100484870();
  *(long *)(unaff_x22 + 1000) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x3f0) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3f8) = uVar2;
  puVar1 = &DAT_100fc7ce0;
  FUN_1000037f0(&DAT_100fc7ce0,&DAT_100c4d030);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x400) = uVar2;
  CVar4 = Foundation::CharacterSet::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x408) = CVar4.unknown;
  lVar7 = *(long *)(CVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x410) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x418) = uVar2;
  plVar5 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x420) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10048884c;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar6) {
    FUN_1004881dc(param_2,param_3 & 0xcfffffffffffffff,param_4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10048884c | FUN_10048884c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10048884c(Data param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  undefined1 uVar3;
  code *pcVar4;
  NSData *pNVar5;
  ID IVar6;
  undefined8 uVar7;
  long *plVar8;
  long lVar9;
  CharacterSet CVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined8 *puVar13;
  URL UVar14;
  ulong uVar15;
  long lVar16;
  undefined *puVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  URL UVar20;
  undefined8 uVar21;
  void *pvVar22;
  long *unaff_x22;
  long lVar23;
  undefined8 uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  CharacterSet in;
  undefined8 uVar28;
  undefined8 *puVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  String SVar37;
  
  lVar16 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar27 = *unaff_x22;
  lVar23 = *unaff_x22;
  *(undefined **)(lVar27 + 0x428) = param_1.unknown;
  *(undefined8 *)(lVar27 + 0x430) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar27 + 0x420));
  pNVar5 = Foundation::Data::_bridgeToObjectiveC(param_1);
  *(undefined8 *)(lVar27 + 0x390) = 0;
  IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar5,0,lVar27 + 0x390);
  uVar7 = *(undefined8 *)(lVar27 + 0x390);
  if (IVar6 == 0) {
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
LAB_100488a5c:
    puVar29 = (undefined8 *)(lVar27 + 400);
    uVar28 = 0x8000000100da8a00;
    puVar17 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_initStackObject();
    puVar18 = (undefined8 *)(puVar17 + 0x20);
    *puVar18 = 0x726f727265;
    *(undefined8 *)(puVar17 + 0x18) = 4;
    *(undefined8 *)(puVar17 + 0x10) = 2;
    puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar17 + 0x30) = 0xd000000000000017;
    *(undefined8 *)(puVar17 + 0x38) = 0x8000000100da86b0;
    *(undefined **)(puVar17 + 0x48) = puVar11;
    *(undefined8 *)(puVar17 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar17 + 0x78) = puVar11;
    uVar7 = 0xd000000000000020;
    goto LAB_100488afc;
  }
  plVar1 = (long *)(lVar27 + 0x398);
  Swift::__bridgeAnyObjectToAny();
  _swift_unknownObjectRelease(IVar6);
  puVar17 = &DAT_100fc8340;
  FUN_1000037f0(&DAT_100fc8340,&DAT_100c4d120);
  puVar11 = PTR___type_metadata_for_Any_100eae0c0;
  plVar8 = plVar1;
  _swift_dynamicCast(plVar1,lVar27 + 0x2f8,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar17,6);
  if (((ulong)plVar8 & 1) == 0) goto LAB_100488a5c;
  lVar25 = *plVar1;
  if (*(long *)(lVar25 + 0x10) == 0) {
LAB_100488c10:
    SVar37 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    _swift_bridgeObjectRetain(lVar25);
    lVar9 = 0x6e5f746e65696c63;
    uVar15 = 0xeb00000000656d61;
    FUN_10046483c(0x6e5f746e65696c63);
    if ((uVar15 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar25);
      goto LAB_100488c10;
    }
    FUN_10000cbfc(*(long *)(lVar25 + 0x38) + lVar9 * 0x20,lVar27 + 0x318);
    _swift_bridgeObjectRelease(lVar25);
    CVar10.unknown = (undefined *)(lVar27 + 0x370);
    _swift_dynamicCast(CVar10.unknown,lVar27 + 0x318,puVar11 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)CVar10.unknown & 1) == 0) goto LAB_100488c10;
    in.unknown = *(undefined **)(lVar27 + 0x418);
    lVar9 = *(long *)(lVar27 + 0x410);
    uVar7 = *(undefined8 *)(lVar27 + 0x408);
    uVar28 = *(undefined8 *)(lVar27 + 0x378);
    *(undefined8 *)(lVar27 + 0x380) = *(undefined8 *)(lVar27 + 0x370);
    *(undefined8 *)(lVar27 + 0x388) = uVar28;
    Foundation::CharacterSet::get_whitespacesAndNewlines(CVar10);
    FUN_10045b990();
    SVar37 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(in);
    (**(code **)(lVar9 + 8))(in.unknown,uVar7);
    _swift_bridgeObjectRelease(uVar28);
  }
  pvVar22 = SVar37.bridgeObject;
  *(String *)(lVar27 + 0x438) = SVar37;
  uVar15 = (ulong)SVar37.str & 0xffffffffffff;
  if (((ulong)pvVar22 & 0x2000000000000000) != 0) {
    uVar15 = (ulong)pvVar22 >> 0x38 & 0xf;
  }
  if (uVar15 != 0) {
    puVar29 = (undefined8 *)(lVar27 + 0x338);
    if (*(long *)(lVar25 + 0x10) == 0) {
LAB_100488d9c:
      *(undefined8 *)(lVar27 + 0x340) = 0;
      *puVar29 = 0;
      *(undefined8 *)(lVar27 + 0x350) = 0;
      *(undefined8 *)(lVar27 + 0x348) = 0;
    }
    else {
      _swift_bridgeObjectRetain(lVar25);
      lVar9 = 0x7463657269646572;
      uVar15 = 0xed0000736972755f;
      FUN_10046483c(0x7463657269646572);
      if ((uVar15 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar25);
        goto LAB_100488d9c;
      }
      FUN_10000cbfc(*(long *)(lVar25 + 0x38) + lVar9 * 0x20,puVar29);
      _swift_bridgeObjectRelease(lVar25);
    }
    _swift_bridgeObjectRelease(lVar25);
    if (*(long *)(lVar27 + 0x350) == 0) {
      FUN_100005808(puVar29,&DAT_100fc85a8,&DAT_100c4d0a8);
LAB_100488ec0:
      lVar25 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
      puVar17 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      puVar18 = (undefined8 *)(lVar27 + 0x3a0);
      puVar17 = &DAT_100fc7eb8;
      FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
      puVar13 = puVar18;
      _swift_dynamicCast(puVar18,puVar29,puVar11 + 8,puVar17,6);
      if (((ulong)puVar13 & 1) == 0) goto LAB_100488ec0;
      puVar17 = (undefined *)*puVar18;
      lVar25 = *(long *)(puVar17 + 0x10);
      puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    PTR___swiftEmptyArrayStorage_100eae0d8 = puVar11;
    if (lVar25 != 0) {
      lVar9 = 0;
      puVar29 = (undefined8 *)(lVar27 + 0x268);
LAB_100488efc:
      puVar18 = (undefined8 *)(puVar17 + lVar9 * 0x10 + 0x28);
      lVar9 = lVar9 + 1;
      do {
        if (*(ulong *)(puVar17 + 0x10) <= lVar9 - 1U) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1004891a8);
          (*pcVar4)();
        }
        UVar20.unknown = *(undefined **)(lVar27 + 0x400);
        uVar7 = puVar18[-1];
        uVar28 = *puVar18;
        _swift_bridgeObjectRetain(uVar28);
        Foundation::URL::_init();
        UVar14 = Foundation::URL::typeMetadataAccessor();
        lVar26 = *(long *)(UVar14.unknown + -8);
        uVar15 = 1;
        (**(code **)(lVar26 + 0x30))(UVar20.unknown,1,UVar14.unknown);
        uVar19 = *(undefined8 *)(lVar27 + 0x400);
        if ((int)UVar20.unknown == 1) {
          _swift_bridgeObjectRelease(uVar28);
          FUN_100005808(uVar19,&DAT_100fc7ce0,&DAT_100c4d030);
        }
        else {
          Foundation::URL::_get_scheme(UVar20);
          (**(code **)(lVar26 + 8))(uVar19,UVar14.unknown);
          if (uVar15 != 0) {
            _swift_bridgeObjectRelease(uVar15);
            uVar2 = (ulong)UVar20.unknown & 0xffffffffffff;
            if ((uVar15 & 0x2000000000000000) != 0) {
              uVar2 = uVar15 >> 0x38 & 0xf;
            }
            if (uVar2 != 0) goto LAB_100488ff4;
          }
          _swift_bridgeObjectRelease(uVar28);
        }
        lVar9 = lVar9 + 1;
        puVar18 = puVar18 + 2;
        if (lVar9 - lVar25 == 1) goto LAB_100489088;
      } while( true );
    }
    puVar29 = (undefined8 *)(lVar27 + 0x220);
    _swift_bridgeObjectRelease(puVar17);
    _swift_bridgeObjectRelease(pvVar22);
    uVar28 = 0x8000000100da8a90;
    puVar17 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_initStackObject();
    puVar18 = (undefined8 *)(puVar17 + 0x20);
    *puVar18 = 0x726f727265;
    *(undefined8 *)(puVar17 + 0x18) = 4;
    *(undefined8 *)(puVar17 + 0x10) = 2;
    puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar17 + 0x30) = 0xd000000000000017;
    *(undefined8 *)(puVar17 + 0x38) = 0x8000000100da86b0;
    *(undefined **)(puVar17 + 0x48) = puVar11;
    *(undefined8 *)(puVar17 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar17 + 0x78) = puVar11;
    uVar7 = 0xd00000000000002d;
    goto LAB_100488afc;
  }
  puVar29 = (undefined8 *)(lVar27 + 0x1d8);
  _swift_bridgeObjectRelease(pvVar22);
  _swift_bridgeObjectRelease(lVar25);
  puVar17 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_allocObject();
  *(undefined8 *)(puVar17 + 0x20) = 0x726f727265;
  *(undefined8 *)(puVar17 + 0x18) = 4;
  *(undefined8 *)(puVar17 + 0x10) = 2;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar17 + 0x30) = 0xd000000000000017;
  *(undefined8 *)(puVar17 + 0x38) = 0x8000000100da86b0;
  *(undefined **)(puVar17 + 0x48) = puVar11;
  *(undefined8 *)(puVar17 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar17 + 0x78) = puVar11;
  *(undefined8 *)(puVar17 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar17 + 0x60) = 0xd000000000000019;
  *(undefined8 *)(puVar17 + 0x68) = 0x8000000100da8ac0;
  puVar11 = puVar17;
  FUN_10045a404();
  _swift_setDeallocating(puVar17);
  puVar12 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar17 + 0x20,2,puVar12);
  _swift_deallocClassInstance(puVar17,0x20,7);
  goto LAB_100488b38;
LAB_100488ff4:
  puVar12 = puVar11;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar12 & 1) == 0) {
    FUN_10046ade8(0,*(long *)(puVar11 + 0x10) + 1,1);
  }
  uVar15 = *(ulong *)(puVar11 + 0x10);
  if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar15) {
    FUN_10046ade8(1 < *(ulong *)(puVar11 + 0x18),uVar15 + 1,1);
  }
  *(ulong *)(puVar11 + 0x10) = uVar15 + 1;
  *(undefined8 *)(puVar11 + uVar15 * 0x10 + 0x20) = uVar7;
  *(undefined8 *)(puVar11 + uVar15 * 0x10 + 0x28) = uVar28;
  if (lVar9 == lVar25) goto LAB_100489088;
  goto LAB_100488efc;
LAB_100489088:
  *(undefined **)(lVar27 + 0x448) = puVar11;
  _swift_bridgeObjectRelease(puVar17);
  if (*(long *)(puVar11 + 0x10) != 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
      _swift_task_switch(FUN_1004891ac,*(undefined8 *)(lVar27 + 0x3c0),0);
      return;
    }
    goto LAB_1004891a8;
  }
  _swift_release(puVar11);
  _swift_bridgeObjectRelease(pvVar22);
  uVar28 = 0x8000000100da8a70;
  puVar17 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  puVar18 = (undefined8 *)(puVar17 + 0x20);
  *puVar18 = 0x726f727265;
  *(undefined8 *)(puVar17 + 0x18) = 4;
  *(undefined8 *)(puVar17 + 0x10) = 2;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar17 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar17 + 0x30) = 0xd000000000000014;
  *(undefined8 *)(puVar17 + 0x38) = 0x8000000100da8690;
  *(undefined **)(puVar17 + 0x48) = puVar11;
  *(undefined8 *)(puVar17 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar17 + 0x78) = puVar11;
  uVar7 = 0xd000000000000019;
LAB_100488afc:
  *(undefined8 *)(puVar17 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar17 + 0x60) = uVar7;
  *(undefined8 *)(puVar17 + 0x68) = uVar28;
  puVar11 = puVar17;
  FUN_10045a404();
  _swift_setDeallocating(puVar17);
  puVar17 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar18,2,puVar17);
LAB_100488b38:
  FUN_100488440(puVar29,puVar11,400,0x7571655220646142,0xeb00000000747365);
  _swift_bridgeObjectRelease(puVar11);
  FUN_10003bf2c(param_1.unknown,param_2);
  uVar7 = *(undefined8 *)(lVar27 + 0x418);
  uVar19 = *(undefined8 *)(lVar27 + 0x400);
  uVar21 = *(undefined8 *)(lVar27 + 0x3f8);
  uVar28 = *(undefined8 *)(lVar27 + 0x3e0);
  uVar24 = *(undefined8 *)(lVar27 + 0x3c8);
  puVar18 = *(undefined8 **)(lVar27 + 0x3a8);
  uVar3 = *(undefined1 *)(puVar29 + 8);
  uVar31 = puVar29[5];
  uVar30 = puVar29[4];
  uVar33 = puVar29[7];
  uVar32 = puVar29[6];
  uVar34 = *puVar29;
  uVar36 = puVar29[3];
  uVar35 = puVar29[2];
  puVar18[1] = puVar29[1];
  *puVar18 = uVar34;
  puVar18[3] = uVar36;
  puVar18[2] = uVar35;
  puVar18[5] = uVar31;
  puVar18[4] = uVar30;
  puVar18[7] = uVar33;
  puVar18[6] = uVar32;
  *(undefined1 *)(puVar18 + 8) = uVar3;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar24);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar16) {
                    /* WARNING: Could not recover jumptable at 0x000100488c04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar23 + 8))();
    return;
  }
LAB_1004891a8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004891ac | FUN_1004891ac */

void FUN_1004891ac(void)

{
  UUID UVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  String *pSVar12;
  long lVar13;
  void *pvVar14;
  char *pcVar15;
  String SVar16;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pcVar5 = *(char **)(unaff_x22 + 0x438);
  pSVar12 = *(String **)(unaff_x22 + 0x3f8);
  lVar3 = *(long *)(unaff_x22 + 0x3f0);
  lVar13 = *(long *)(unaff_x22 + 1000);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3e0);
  lVar9 = *(long *)(unaff_x22 + 0x3d8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3c8);
  lVar10 = *(long *)(unaff_x22 + 0x3c0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x3b8);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x3b0);
  pcVar15 = *(char **)(unaff_x22 + 0x448);
  pvVar14 = *(void **)(unaff_x22 + 0x440);
  UVar1 = Foundation::UUID::init();
  SVar16 = Foundation::UUID::get_uuidString(UVar1);
  *(String *)(unaff_x22 + 0x450) = SVar16;
  (**(code **)(lVar9 + 8))(uVar8,uVar7);
  *(undefined4 *)(unaff_x22 + 0x1d4) = *(undefined4 *)(lVar13 + 0x1c);
  Foundation::Date::init();
  *pSVar12 = SVar16;
  pSVar12[1].str = pcVar5;
  pSVar12[2].str = pcVar15;
  pSVar12[1].bridgeObject = pvVar14;
  FUN_1000c495c(pSVar12,uVar11,FUN_100484870);
  (**(code **)(lVar3 + 0x38))(uVar11,0,1,lVar13);
  _swift_beginAccess(lVar10 + 0x70,unaff_x22 + 0x358,0x21,0);
  _swift_bridgeObjectRetain_n(SVar16.bridgeObject,2);
  _swift_bridgeObjectRetain(pvVar14);
  FUN_100460dc0(uVar11,SVar16.str,SVar16.bridgeObject);
  _swift_endAccess(unaff_x22 + 0x358);
  FUN_100483334();
  FUN_1000da368(uVar4,uVar6);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
    _swift_task_switch(FUN_100489348,uVar4,uVar6);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x100489348 | FUN_100489348 */

void FUN_100489348(void)

{
  undefined1 uVar1;
  code *pcVar2;
  Date DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  Date DVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  double dVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  lVar8 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar11 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x450);
  DVar3.unknown = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_allocObject();
  *(undefined8 *)(DVar3.unknown + 0x18) = 0xe;
  *(undefined8 *)(DVar3.unknown + 0x10) = 7;
  *(undefined8 *)(DVar3.unknown + 0x20) = 0x695f746e65696c63;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(DVar3.unknown + 0x28) = 0xe900000000000064;
  *(undefined8 *)(DVar3.unknown + 0x30) = uVar13;
  *(undefined8 *)(DVar3.unknown + 0x38) = uVar11;
  *(undefined **)(DVar3.unknown + 0x48) = puVar5;
  *(undefined8 *)(DVar3.unknown + 0x50) = 0xd000000000000013;
  *(undefined8 *)(DVar3.unknown + 0x58) = 0x8000000100da8a30;
  dVar16 = Foundation::Date::get_timeIntervalSince1970(DVar3);
  puVar4 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  if (0x7fefffffffffffff < (ulong)ABS(dVar16)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004896c4);
    (*pcVar2)();
  }
  if (dVar16 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004896c8);
    (*pcVar2)();
  }
  if (9.223372036854776e+18 <= dVar16) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004896cc);
    (*pcVar2)();
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x3f8);
  *(long *)(DVar3.unknown + 0x60) = (long)dVar16;
  *(undefined **)(DVar3.unknown + 0x78) = puVar4;
  *(undefined8 *)(DVar3.unknown + 0x80) = 0x6e5f746e65696c63;
  *(undefined8 *)(DVar3.unknown + 0x88) = 0xeb00000000656d61;
  *(undefined8 *)(DVar3.unknown + 0x90) = uVar13;
  *(undefined8 *)(DVar3.unknown + 0x98) = uVar11;
  *(undefined **)(DVar3.unknown + 0xa8) = puVar5;
  *(undefined8 *)(DVar3.unknown + 0xb0) = 0x7463657269646572;
  *(undefined8 *)(DVar3.unknown + 0xb8) = 0xed0000736972755f;
  puVar4 = &DAT_100fc7eb8;
  FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
  *(undefined8 *)(DVar3.unknown + 0xc0) = uVar15;
  *(undefined **)(DVar3.unknown + 0xd8) = puVar4;
  *(undefined8 *)(DVar3.unknown + 0xe0) = 0xd00000000000001a;
  *(undefined8 *)(DVar3.unknown + 0xe8) = 0x8000000100da8a50;
  *(undefined8 *)(DVar3.unknown + 0xf0) = 0x656e6f6e;
  *(undefined1 **)(DVar3.unknown + 0xf8) = &DAT_e400000000000000;
  *(undefined **)(DVar3.unknown + 0x108) = puVar5;
  *(undefined8 *)(DVar3.unknown + 0x110) = 0x79745f746e617267;
  *(undefined8 *)(DVar3.unknown + 0x118) = 0xeb00000000736570;
  puVar5 = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  puVar6 = puVar5;
  _swift_initStaticObject();
  *(undefined **)(DVar3.unknown + 0x120) = puVar6;
  *(undefined **)(DVar3.unknown + 0x138) = puVar4;
  *(undefined8 *)(DVar3.unknown + 0x140) = 0x65736e6f70736572;
  *(undefined8 *)(DVar3.unknown + 0x148) = 0xee0073657079745f;
  _swift_initStaticObject(puVar5,&DAT_100fc9508);
  *(undefined **)(DVar3.unknown + 0x168) = puVar4;
  *(undefined **)(DVar3.unknown + 0x150) = puVar5;
  _swift_retain(uVar15);
  DVar7.unknown = DVar3.unknown;
  FUN_10045a404(DVar3.unknown);
  _swift_setDeallocating(DVar3.unknown);
  puVar5 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(DVar3.unknown + 0x20,7,puVar5);
  _swift_deallocClassInstance(DVar3.unknown,0x20,7);
  FUN_100488440(unaff_x22 + 0x2b0,DVar7.unknown,0xc9,0x64657461657243,&DAT_e700000000000000);
  FUN_10003bf2c(uVar14,uVar12);
  _swift_bridgeObjectRelease(DVar7.unknown);
  FUN_10005241c(uVar10,FUN_100484870);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3e0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x3c8);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x3a8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x2f0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x2d8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x2d0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x2e8);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x2e0);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x2b0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x2c8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x2c0);
  puVar9[1] = *(undefined8 *)(unaff_x22 + 0x2b8);
  *puVar9 = uVar20;
  puVar9[3] = uVar22;
  puVar9[2] = uVar21;
  puVar9[5] = uVar17;
  puVar9[4] = uVar15;
  puVar9[7] = uVar19;
  puVar9[6] = uVar18;
  *(undefined1 *)(puVar9 + 8) = uVar1;
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar8) {
                    /* WARNING: Could not recover jumptable at 0x0001004896bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004896d0 | FUN_1004896d0 */

char * FUN_1004896d0(undefined8 *param_1,undefined8 param_2)

{
  String *pSVar1;
  long lVar2;
  code *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char **ppcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  void *pvVar11;
  char *pcVar12;
  char *pcVar13;
  void *pvVar14;
  char *pcVar15;
  void *pvVar16;
  char *pcVar17;
  void *pvVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String local_220 [4];
  char *local_1e0;
  void *pvStack_1d8;
  char *local_1d0;
  void *pvStack_1c8;
  char *local_1c0;
  void *pvStack_1b8;
  char *local_1b0;
  void *pvStack_1a8;
  char *local_1a0;
  void *pvStack_198;
  char *local_190;
  void *pvStack_188;
  char *local_180;
  void *pvStack_178;
  char *local_170;
  void *pvStack_168;
  char *local_160;
  void *pvStack_158;
  char *local_150;
  void *pvStack_148;
  char *local_140;
  void *pvStack_138;
  char *local_130;
  void *pvStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  pcVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045acd8();
  uStack_98 = param_1[0x11];
  local_a0 = param_1[0x10];
  uStack_88 = param_1[0x13];
  uStack_90 = param_1[0x12];
  uStack_78 = param_1[0x15];
  local_80 = param_1[0x14];
  uStack_d8 = param_1[9];
  local_e0 = param_1[8];
  uStack_c8 = param_1[0xb];
  uStack_d0 = param_1[10];
  uStack_b8 = param_1[0xd];
  local_c0 = param_1[0xc];
  uStack_a8 = param_1[0xf];
  uStack_b0 = param_1[0xe];
  uStack_118 = param_1[1];
  local_120 = *param_1;
  uStack_108 = param_1[3];
  uStack_110 = param_1[2];
  uStack_f8 = param_1[5];
  local_100 = param_1[4];
  uStack_e8 = param_1[7];
  uStack_f0 = param_1[6];
  pcVar5 = pcVar4;
  FUN_1009fc8a8();
  lVar7 = *(long *)(pcVar5 + 0x10);
  if (lVar7 == 0) {
LAB_1004899a4:
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(pcVar5);
    return pcVar4;
  }
  uVar8 = 0;
  lVar10 = 0x20;
  do {
    pSVar1 = (String *)(pcVar5 + lVar10);
    pvVar14 = pSVar1[2].bridgeObject;
    pcVar13 = pSVar1[2].str;
    pvVar11 = pSVar1[3].bridgeObject;
    pcVar12 = pSVar1[3].str;
    pvVar18 = pSVar1->bridgeObject;
    pcVar17 = pSVar1->str;
    SVar20 = *pSVar1;
    pvVar16 = pSVar1[1].bridgeObject;
    pcVar15 = pSVar1[1].str;
    local_1e0 = pcVar17;
    pvStack_1d8 = pvVar18;
    local_1d0 = pcVar15;
    pvStack_1c8 = pvVar16;
    local_1c0 = pcVar13;
    pvStack_1b8 = pvVar14;
    local_1b0 = pcVar12;
    pvStack_1a8 = pvVar11;
    local_1a0 = pcVar17;
    pvStack_198 = pvVar18;
    local_190 = pcVar15;
    pvStack_188 = pvVar16;
    local_180 = pcVar13;
    pvStack_178 = pvVar14;
    local_170 = pcVar12;
    pvStack_168 = pvVar11;
    _swift_bridgeObjectRetain(pvVar11);
    _swift_bridgeObjectRetain(pvVar16);
    FUN_100011090(&local_1e0,local_220,&DAT_100fc94c0,&DAT_100c4e030);
    FUN_100005808(&local_1a0,&DAT_100fc94c0,&DAT_100c4e030);
    local_160 = pcVar17;
    pvStack_158 = pvVar18;
    local_150 = pcVar15;
    pvStack_148 = pvVar16;
    local_140 = pcVar13;
    pvStack_138 = pvVar14;
    local_130 = pcVar12;
    pvStack_128 = pvVar11;
    SVar19 = Swift::String::__fromSubstring(SVar20);
    SVar21.bridgeObject = pvStack_138;
    SVar21.str = local_140;
    SVar20 = Swift::String::__fromSubstring(SVar21);
    ppcVar6 = &local_160;
    FUN_100005808(ppcVar6,&DAT_100fc94c0,&DAT_100c4e030);
    local_220[0] = SVar20;
    FUN_10045b990();
    pcVar12 = PTR___type_metadata_for_Swift_String_100eac208;
    (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
    if (ppcVar6 != (char **)0x0) {
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      SVar20.bridgeObject = ppcVar6;
      SVar20.str = pcVar12;
    }
    pcVar13 = pcVar4;
    _swift_isUniquelyReferenced_nonNull_native();
    local_220[0].str = pcVar4;
    SVar21 = SVar19;
    FUN_10046483c();
    pcVar12 = SVar21.str;
    uVar9 = (ulong)~(uint)SVar21.bridgeObject & 1;
    lVar2 = *(long *)(pcVar4 + 0x10) + uVar9;
    if (SCARRY8(*(long *)(pcVar4 + 0x10),uVar9)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1004899d8);
      (*pcVar3)();
    }
    if (*(long *)(pcVar4 + 0x18) < lVar2) {
      FUN_10046836c(lVar2,pcVar13);
      SVar22 = SVar19;
      FUN_10046483c();
      pcVar12 = SVar22.str;
      if (((uint)SVar21.bridgeObject & 1) != ((uint)SVar22.bridgeObject & 1)) {
        Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004899ec);
        (*pcVar3)();
      }
      pcVar4 = local_220[0].str;
joined_r0x000100489924:
      if (((ulong)SVar21.bridgeObject & 1) == 0) goto LAB_100489928;
LAB_1004898f4:
      pSVar1 = (String *)(*(long *)(pcVar4 + 0x38) + (long)pcVar12 * 0x10);
      pvVar11 = pSVar1->bridgeObject;
      *pSVar1 = SVar20;
      _swift_bridgeObjectRelease(SVar19.bridgeObject);
      _swift_bridgeObjectRelease(pvVar11);
    }
    else {
      if (((ulong)pcVar13 & 1) == 0) {
        FUN_100466c90();
        pcVar4 = local_220[0].str;
        goto joined_r0x000100489924;
      }
      pcVar4 = local_220[0].str;
      if (((ulong)SVar21.bridgeObject & 1) != 0) goto LAB_1004898f4;
LAB_100489928:
      *(ulong *)(pcVar4 + ((ulong)pcVar12 >> 6) * 8 + 0x40) =
           *(ulong *)(pcVar4 + ((ulong)pcVar12 >> 6) * 8 + 0x40) | 1L << ((ulong)pcVar12 & 0x3f);
      *(String *)(*(long *)(pcVar4 + 0x30) + (long)pcVar12 * 0x10) = SVar19;
      *(String *)(*(long *)(pcVar4 + 0x38) + (long)pcVar12 * 0x10) = SVar20;
      if (SCARRY8(*(long *)(pcVar4 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1004899dc);
        (*pcVar3)();
      }
      *(long *)(pcVar4 + 0x10) = *(long *)(pcVar4 + 0x10) + 1;
    }
    if (lVar7 - 1U == uVar8) goto LAB_1004899a4;
    uVar8 = uVar8 + 1;
    lVar10 = lVar10 + 0x40;
    if (*(ulong *)(pcVar5 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100489998);
      (*pcVar3)();
    }
  } while( true );
}



/* Address: 0x1004899ec | FUN_1004899ec */

void FUN_1004899ec(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined *puVar8;
  Date DVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  ulong uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long unaff_x22;
  undefined8 uVar25;
  undefined8 uVar26;
  long lVar27;
  long lVar28;
  char *pcVar29;
  long lVar30;
  long lVar31;
  undefined8 *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  
  *(undefined8 *)(unaff_x22 + 0x3e0) = param_6;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x3d0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3c8) = param_2;
  local_80 = (undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0x3c0) = param_1;
  lVar6 = 0;
  FUN_100482008();
  *(long *)(unaff_x22 + 1000) = lVar6;
  uVar7 = *(long *)(*(long *)(lVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3f0) = uVar7;
  puVar8 = &DAT_100fc8328;
  FUN_1000037f0(&DAT_100fc8328,&DAT_100c4d800);
  uVar7 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x3f8) = uVar7;
  DVar9 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x400) = DVar9.unknown;
  lVar6 = *(long *)(DVar9.unknown + -8);
  *(long *)(unaff_x22 + 0x408) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x410) = uVar7;
  lVar6 = 0;
  FUN_100481150();
  *(long *)(unaff_x22 + 0x418) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x420) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x428) = uVar7;
  puVar8 = &DAT_100fc8318;
  FUN_1000037f0(&DAT_100fc8318,&DAT_100c4cea0);
  uVar7 = *(long *)(*(long *)(puVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x430) = uVar7;
  lVar6 = 0;
  FUN_100484870();
  *(long *)(unaff_x22 + 0x438) = lVar6;
  lVar6 = *(long *)(lVar6 + -8);
  *(long *)(unaff_x22 + 0x440) = lVar6;
  uVar7 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x448) = uVar7;
  FUN_1004896d0();
  *(ulong *)(unaff_x22 + 0x450) = param_4;
  pcVar29 = "invalid or expired csrf token";
  if (*(long *)(param_4 + 0x10) == 0) {
    local_60 = 0x1a0;
    local_68 = 0x198;
    local_78 = 0xd00000000000001e;
    local_70 = 0x1a8;
    lVar30 = 0x1d0;
    lVar27 = 0x1c8;
    lVar6 = 0x1c0;
    lVar31 = 0x1b8;
    lVar28 = 0x1b0;
  }
  else {
    _swift_bridgeObjectRetain(param_4);
    lVar6 = 0x65736e6f70736572;
    uVar13 = 0xed0000657079745f;
    FUN_10046483c();
    uVar7 = param_4;
    if ((uVar13 & 1) == 0) {
      local_60 = 0x1a0;
      local_68 = 0x198;
      local_78 = 0xd00000000000001e;
      local_70 = 0x1a8;
      lVar30 = 0x1d0;
      lVar27 = 0x1c8;
      lVar6 = 0x1c0;
      lVar31 = 0x1b8;
      lVar28 = 0x1b0;
    }
    else {
      puVar21 = (undefined8 *)(*(long *)(param_4 + 0x38) + lVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar21;
      _Var3.unknown = (undefined *)puVar21[1];
      _swift_bridgeObjectRetain(_Var3.unknown);
      _swift_bridgeObjectRelease(param_4);
      if ((_Var2.unknown == (undefined *)0x65646f63) && (_Var3.unknown == &DAT_e400000000000000)) {
        _swift_bridgeObjectRelease(&DAT_e400000000000000);
      }
      else {
        bVar5 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x63);
        _swift_bridgeObjectRelease(_Var3.unknown);
        if (!bVar5) {
          local_60 = 0x1a0;
          local_68 = 0x198;
          local_78 = 0xd00000000000001e;
          local_70 = 0x1a8;
          lVar30 = 0x1d0;
          lVar27 = 0x1c8;
          lVar6 = 0x1c0;
          lVar31 = 0x1b8;
          lVar28 = 0x1b0;
          goto LAB_100489e18;
        }
      }
      local_80 = (undefined8 *)(unaff_x22 + 0x1d8);
      pcVar29 = "`response_type` must be `code`";
      if (*(long *)(param_4 + 0x10) == 0) {
        local_60 = 0x1e8;
        local_68 = 0x1e0;
        local_70 = 0x1f0;
        lVar30 = 0x218;
        lVar27 = 0x210;
        lVar6 = 0x208;
        lVar31 = 0x200;
        lVar28 = 0x1f8;
        local_78 = 0xd000000000000017;
        goto LAB_100489e18;
      }
      _swift_bridgeObjectRetain(param_4);
      lVar6 = 0x695f746e65696c63;
      uVar13 = 0;
      FUN_10046483c();
      if ((uVar13 & 1) != 0) {
        puVar1 = (ulong *)(*(long *)(param_4 + 0x38) + lVar6 * 0x10);
        uVar13 = *puVar1;
        *(ulong *)(unaff_x22 + 0x458) = uVar13;
        uVar7 = puVar1[1];
        *(ulong *)(unaff_x22 + 0x460) = uVar7;
        _swift_bridgeObjectRetain(uVar7);
        _swift_bridgeObjectRelease(param_4);
        uVar13 = uVar13 & 0xffffffffffff;
        if ((uVar7 & 0x2000000000000000) != 0) {
          uVar13 = uVar7 >> 0x38 & 0xf;
        }
        if (uVar13 != 0) {
          _swift_task_switch(FUN_100489fdc,param_5,0);
          return;
        }
      }
      local_60 = 0x1e8;
      local_68 = 0x1e0;
      local_70 = 0x1f0;
      lVar31 = 0x200;
      lVar30 = 0x218;
      lVar28 = 0x1f8;
      lVar27 = 0x210;
      lVar6 = 0x208;
      local_78 = 0xd000000000000017;
    }
    _swift_bridgeObjectRelease(param_4);
    param_4 = uVar7;
  }
LAB_100489e18:
  _swift_bridgeObjectRelease(param_4);
  puVar8 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar8 + 0x18) = 4;
  *(undefined8 *)(puVar8 + 0x10) = 2;
  *(undefined8 *)(puVar8 + 0x20) = 0x726f727265;
  puVar11 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar8 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar8 + 0x30) = 0x5f64696c61766e69;
  *(undefined8 *)(puVar8 + 0x38) = 0xef74736575716572;
  *(undefined **)(puVar8 + 0x48) = puVar11;
  *(undefined8 *)(puVar8 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar8 + 0x78) = puVar11;
  *(undefined8 *)(puVar8 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar8 + 0x60) = local_78;
  *(ulong *)(puVar8 + 0x68) = (ulong)pcVar29 | 0x8000000000000000;
  puVar10 = puVar8;
  FUN_10045a404();
  _swift_setDeallocating(puVar8);
  puVar11 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar8 + 0x20,2,puVar11);
  FUN_100488440(local_80,puVar10,400,0x7571655220646142,0xeb00000000747365);
  _swift_bridgeObjectRelease(puVar10);
  uVar4 = *(undefined1 *)(unaff_x22 + lVar30);
  uVar14 = *(undefined8 *)(unaff_x22 + lVar27);
  uVar15 = *(undefined8 *)(unaff_x22 + lVar6);
  uVar16 = *(undefined8 *)(unaff_x22 + lVar31);
  uVar17 = *(undefined8 *)(unaff_x22 + lVar28);
  uVar18 = *(undefined8 *)(unaff_x22 + local_70);
  uVar19 = *(undefined8 *)(unaff_x22 + local_60);
  uVar20 = *(undefined8 *)(unaff_x22 + local_68);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar24 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x3f0);
  puVar21 = *(undefined8 **)(unaff_x22 + 0x3c0);
  *puVar21 = *local_80;
  puVar21[1] = uVar20;
  puVar21[2] = uVar19;
  puVar21[3] = uVar18;
  puVar21[4] = uVar17;
  puVar21[5] = uVar16;
  puVar21[6] = uVar15;
  puVar21[7] = uVar14;
  *(undefined1 *)(puVar21 + 8) = uVar4;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar24);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x000100489fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100489fdc | FUN_100489fdc */

void FUN_100489fdc(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x3d8);
  _swift_beginAccess(lVar3 + 0x70,unaff_x22 + 0x388,0,0);
  lVar3 = *(long *)(lVar3 + 0x70);
  if (*(long *)(lVar3 + 0x10) == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x460);
    lVar5 = *(long *)(unaff_x22 + 0x458);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10046483c(lVar5);
    bVar1 = (uVar2 & 1) == 0;
    if (!bVar1) {
      FUN_1000c495c(*(long *)(lVar3 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x440) + 0x48) * lVar5
                    ,*(undefined8 *)(unaff_x22 + 0x430),FUN_100484870);
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  lVar3 = *(long *)(unaff_x22 + 0x440);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x3d0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x3c8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x460));
  (**(code **)(lVar3 + 0x38))(uVar6,bVar1,1,uVar4);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x468) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x470) = uVar7;
  _swift_task_switch(FUN_10048a0ec,uVar8,uVar7);
  return;
}



/* Address: 0x10048a0ec | FUN_10048a0ec */

void FUN_10048a0ec(void)

{
  ulong *puVar1;
  long *plVar2;
  undefined1 uVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  undefined8 uVar24;
  undefined8 *puVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  undefined8 uVar31;
  ulong uVar32;
  undefined8 uVar33;
  long unaff_x22;
  ulong uVar34;
  _StringGuts _Var35;
  undefined8 uVar36;
  _StringGuts _Var37;
  undefined8 uVar38;
  
  uVar26 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar9 = uVar26;
  (**(code **)(*(long *)(unaff_x22 + 0x440) + 0x30))(uVar26,1,*(undefined8 *)(unaff_x22 + 0x438));
  if ((int)uVar9 == 1) {
    puVar30 = (undefined8 *)(unaff_x22 + 0x220);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x450));
    FUN_100005808(uVar26,&DAT_100fc8318,&DAT_100c4cea0);
    puVar6 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_initStackObject();
    *(undefined8 *)(puVar6 + 0x18) = 4;
    *(undefined8 *)(puVar6 + 0x10) = 2;
    *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
    puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar6 + 0x30) = 0x5f64696c61766e69;
    *(undefined8 *)(puVar6 + 0x38) = 0xee00746e65696c63;
    *(undefined **)(puVar6 + 0x48) = puVar8;
    *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar6 + 0x78) = puVar8;
    *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
    *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000011;
    *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da8890;
    puVar7 = puVar6;
    FUN_10045a404();
    _swift_setDeallocating(puVar6);
    puVar8 = &DAT_100fc7d78;
    FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
    _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
    FUN_100488440(puVar30,puVar7,400,0x7571655220646142,0xeb00000000747365);
    _swift_bridgeObjectRelease(puVar7);
    lVar11 = 0x230;
    lVar12 = 0x228;
    lVar14 = 0x238;
    lVar16 = 0x260;
    lVar17 = 600;
    lVar19 = 0x250;
    lVar21 = 0x248;
    lVar23 = 0x240;
    goto LAB_10048a5bc;
  }
  lVar11 = *(long *)(unaff_x22 + 0x450);
  FUN_1000523d8(uVar26,*(undefined8 *)(unaff_x22 + 0x448),FUN_100484870);
  uVar27 = *(ulong *)(unaff_x22 + 0x450);
  if (*(long *)(lVar11 + 0x10) != 0) {
    _swift_bridgeObjectRetain(uVar27);
    lVar11 = 0x7463657269646572;
    uVar10 = 0xec0000006972755f;
    FUN_10046483c();
    uVar5 = *(ulong *)(unaff_x22 + 0x450);
    uVar27 = uVar5;
    if ((uVar10 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(uVar5 + 0x38) + lVar11 * 0x10);
      uVar10 = *puVar1;
      *(ulong *)(unaff_x22 + 0x478) = uVar10;
      uVar27 = puVar1[1];
      *(ulong *)(unaff_x22 + 0x480) = uVar27;
      _swift_bridgeObjectRetain(uVar27);
      _swift_bridgeObjectRelease(uVar5);
      uVar5 = uVar10 & 0xffffffffffff;
      if ((uVar27 & 0x2000000000000000) != 0) {
        uVar5 = uVar27 >> 0x38 & 0xf;
      }
      if (uVar5 != 0) {
        FUN_10012eef0(uVar10,uVar27,*(undefined8 *)(*(long *)(unaff_x22 + 0x448) + 0x20));
        uVar5 = *(ulong *)(unaff_x22 + 0x450);
        if ((uVar10 & 1) == 0) {
          puVar30 = (undefined8 *)(unaff_x22 + 0x2b0);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x448);
          _swift_bridgeObjectRelease(uVar27);
          _swift_bridgeObjectRelease(uVar5);
          puVar6 = &DAT_100fc81a0;
          FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
          _swift_allocObject();
          *(undefined8 *)(puVar6 + 0x18) = 4;
          *(undefined8 *)(puVar6 + 0x10) = 2;
          *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
          puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
          *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
          *(undefined8 *)(puVar6 + 0x30) = 0xd000000000000014;
          *(undefined8 *)(puVar6 + 0x38) = 0x8000000100da8690;
          *(undefined **)(puVar6 + 0x48) = puVar8;
          *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
          *(undefined **)(puVar6 + 0x78) = puVar8;
          *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
          *(undefined8 *)(puVar6 + 0x60) = 0xd00000000000002d;
          *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da88d0;
          puVar7 = puVar6;
          FUN_10045a404();
          _swift_setDeallocating(puVar6);
          puVar8 = &DAT_100fc7d78;
          FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
          _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
          _swift_deallocClassInstance(puVar6,0x20,7);
          FUN_100488440(puVar30,puVar7,400,0x7571655220646142,0xeb00000000747365);
          _swift_bridgeObjectRelease(puVar7);
          FUN_10005241c(uVar9,FUN_100484870);
          lVar11 = 0x2c0;
          lVar12 = 0x2b8;
          lVar14 = 0x2c8;
          lVar16 = 0x2f0;
          lVar17 = 0x2e8;
          lVar19 = 0x2e0;
          lVar21 = 0x2d8;
          lVar23 = 0x2d0;
          goto LAB_10048a5bc;
        }
        if (*(long *)(uVar5 + 0x10) != 0) {
          _swift_bridgeObjectRetain(uVar5);
          lVar11 = 0x6168635f65646f63;
          uVar10 = 0;
          FUN_10046483c();
          uVar34 = *(ulong *)(unaff_x22 + 0x450);
          uVar29 = uVar27;
          uVar5 = uVar34;
          if ((uVar10 & 1) != 0) {
            puVar1 = (ulong *)(*(long *)(uVar34 + 0x38) + lVar11 * 0x10);
            uVar5 = *puVar1;
            *(ulong *)(unaff_x22 + 0x488) = uVar5;
            uVar32 = puVar1[1];
            *(ulong *)(unaff_x22 + 0x490) = uVar32;
            _swift_bridgeObjectRetain(uVar32);
            _swift_bridgeObjectRelease(uVar34);
            uVar10 = uVar5 & 0xffffffffffff;
            if ((uVar32 & 0x2000000000000000) != 0) {
              uVar10 = uVar32 >> 0x38 & 0xf;
            }
            uVar29 = *(ulong *)(unaff_x22 + 0x450);
            uVar34 = uVar32;
            uVar5 = uVar27;
            if (uVar10 != 0) {
              _Var35.unknown = (undefined *)0x6e69616c70;
              if (*(long *)(uVar29 + 0x10) == 0) {
LAB_10048a954:
                _Var37.unknown = &DAT_e500000000000000;
LAB_10048a958:
                bVar4 = Swift::_stringCompareWithSmolCheck
                                  (_Var35,_Var37,(_StringComparisonResult)0x53);
                if (!bVar4) {
                  puVar30 = (undefined8 *)(unaff_x22 + 0x340);
                  uVar26 = *(undefined8 *)(unaff_x22 + 0x450);
                  uVar9 = *(undefined8 *)(unaff_x22 + 0x448);
                  _swift_bridgeObjectRelease(_Var37.unknown);
                  _swift_bridgeObjectRelease(uVar32);
                  _swift_bridgeObjectRelease(uVar27);
                  _swift_bridgeObjectRelease(uVar26);
                  puVar6 = &DAT_100fc81a0;
                  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
                  _swift_allocObject();
                  *(undefined8 *)(puVar6 + 0x18) = 4;
                  *(undefined8 *)(puVar6 + 0x10) = 2;
                  *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
                  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
                  *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
                  *(undefined8 *)(puVar6 + 0x30) = 0x5f64696c61766e69;
                  *(undefined8 *)(puVar6 + 0x38) = 0xef74736575716572;
                  *(undefined **)(puVar6 + 0x48) = puVar8;
                  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
                  *(undefined **)(puVar6 + 0x78) = puVar8;
                  *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
                  *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000026;
                  *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da8940;
                  puVar7 = puVar6;
                  FUN_10045a404();
                  _swift_setDeallocating(puVar6);
                  puVar8 = &DAT_100fc7d78;
                  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
                  _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
                  _swift_deallocClassInstance(puVar6,0x20,7);
                  FUN_100488440(puVar30,puVar7,400,0x7571655220646142,0xeb00000000747365);
                  _swift_bridgeObjectRelease(puVar7);
                  FUN_10005241c(uVar9,FUN_100484870);
                  lVar11 = 0x350;
                  lVar12 = 0x348;
                  lVar14 = 0x358;
                  lVar16 = 0x380;
                  lVar17 = 0x378;
                  lVar19 = 0x370;
                  lVar21 = 0x368;
                  lVar23 = 0x360;
                  goto LAB_10048a5bc;
                }
              }
              else {
                _swift_bridgeObjectRetain(uVar29);
                lVar11 = -0x2fffffffffffffeb;
                uVar5 = 0;
                FUN_10046483c();
                lVar12 = *(long *)(unaff_x22 + 0x450);
                if ((uVar5 & 1) == 0) {
                  _swift_bridgeObjectRelease(lVar12);
                  goto LAB_10048a954;
                }
                plVar2 = (long *)(*(long *)(lVar12 + 0x38) + lVar11 * 0x10);
                _Var35.unknown = (undefined *)*plVar2;
                _Var37.unknown = (undefined *)plVar2[1];
                _swift_bridgeObjectRetain(_Var37.unknown);
                _swift_bridgeObjectRelease(lVar12);
                if ((_Var35.unknown != (undefined *)0x36353253) ||
                   (_Var37.unknown != &DAT_e400000000000000)) goto LAB_10048a958;
                _Var37.unknown = &DAT_e400000000000000;
                _Var35.unknown = (undefined *)0x36353253;
              }
              *(undefined **)(unaff_x22 + 0x4a0) = _Var35.unknown;
              *(undefined **)(unaff_x22 + 0x498) = _Var37.unknown;
              *(undefined8 *)(unaff_x22 + 0x4a8) = **(undefined8 **)(unaff_x22 + 0x448);
              uVar9 = (*(undefined8 **)(unaff_x22 + 0x448))[1];
              *(undefined8 *)(unaff_x22 + 0x4b0) = uVar9;
              if (*(long *)(*(long *)(unaff_x22 + 0x450) + 0x10) == 0) {
                _swift_bridgeObjectRetain(uVar9);
              }
              else {
                _swift_bridgeObjectRetain(*(long *)(unaff_x22 + 0x450));
                _swift_bridgeObjectRetain(uVar9);
                lVar11 = 0x6574617473;
                uVar27 = 0;
                FUN_10046483c();
                lVar12 = *(long *)(unaff_x22 + 0x450);
                if ((uVar27 & 1) != 0) {
                  puVar30 = (undefined8 *)(*(long *)(lVar12 + 0x38) + lVar11 * 0x10);
                  uVar9 = *puVar30;
                  uVar26 = puVar30[1];
                  _swift_bridgeObjectRetain(uVar26);
                  _swift_bridgeObjectRelease(lVar12);
                  goto LAB_10048ab8c;
                }
                _swift_bridgeObjectRelease(lVar12);
              }
              uVar9 = 0;
              uVar26 = 0;
LAB_10048ab8c:
              *(undefined8 *)(unaff_x22 + 0x4c0) = uVar26;
              *(undefined8 *)(unaff_x22 + 0x4b8) = uVar9;
              _swift_task_switch(FUN_10048abc0,*(undefined8 *)(unaff_x22 + 0x3e0),0);
              return;
            }
          }
          uVar27 = uVar34;
          _swift_bridgeObjectRelease(uVar29);
        }
        puVar30 = (undefined8 *)(unaff_x22 + 0x2f8);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x448);
        _swift_bridgeObjectRelease(uVar27);
        _swift_bridgeObjectRelease(uVar5);
        puVar6 = &DAT_100fc81a0;
        FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
        _swift_allocObject();
        *(undefined8 *)(puVar6 + 0x18) = 4;
        *(undefined8 *)(puVar6 + 0x10) = 2;
        *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
        puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
        *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
        *(undefined8 *)(puVar6 + 0x30) = 0x5f64696c61766e69;
        *(undefined8 *)(puVar6 + 0x38) = 0xef74736575716572;
        *(undefined **)(puVar6 + 0x48) = puVar8;
        *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
        *(undefined **)(puVar6 + 0x78) = puVar8;
        *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
        *(undefined8 *)(puVar6 + 0x60) = 0xd00000000000001c;
        *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da8900;
        puVar7 = puVar6;
        FUN_10045a404();
        _swift_setDeallocating(puVar6);
        puVar8 = &DAT_100fc7d78;
        FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
        _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
        _swift_deallocClassInstance(puVar6,0x20,7);
        FUN_100488440(puVar30,puVar7,400,0x7571655220646142,0xeb00000000747365);
        _swift_bridgeObjectRelease(puVar7);
        FUN_10005241c(uVar9,FUN_100484870);
        lVar11 = 0x308;
        lVar12 = 0x300;
        lVar14 = 0x310;
        lVar16 = 0x338;
        lVar17 = 0x330;
        lVar19 = 0x328;
        lVar21 = 800;
        lVar23 = 0x318;
        goto LAB_10048a5bc;
      }
      uVar5 = *(ulong *)(unaff_x22 + 0x450);
    }
    _swift_bridgeObjectRelease(uVar5);
  }
  puVar30 = (undefined8 *)(unaff_x22 + 0x268);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x448);
  _swift_bridgeObjectRelease(uVar27);
  puVar6 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
  puVar8 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar6 + 0x30) = 0x5f64696c61766e69;
  *(undefined8 *)(puVar6 + 0x38) = 0xef74736575716572;
  *(undefined **)(puVar6 + 0x48) = puVar8;
  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar6 + 0x78) = puVar8;
  *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar6 + 0x60) = 0xd00000000000001a;
  *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da88b0;
  puVar7 = puVar6;
  FUN_10045a404();
  _swift_setDeallocating(puVar6);
  puVar8 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar6 + 0x20,2,puVar8);
  _swift_deallocClassInstance(puVar6,0x20,7);
  FUN_100488440(puVar30,puVar7,400,0x7571655220646142,0xeb00000000747365);
  _swift_bridgeObjectRelease(puVar7);
  FUN_10005241c(uVar9,FUN_100484870);
  lVar11 = 0x278;
  lVar12 = 0x270;
  lVar14 = 0x280;
  lVar16 = 0x2a8;
  lVar17 = 0x2a0;
  lVar19 = 0x298;
  lVar21 = 0x290;
  lVar23 = 0x288;
LAB_10048a5bc:
  uVar3 = *(undefined1 *)(unaff_x22 + lVar16);
  uVar18 = *(undefined8 *)(unaff_x22 + lVar17);
  uVar20 = *(undefined8 *)(unaff_x22 + lVar19);
  uVar22 = *(undefined8 *)(unaff_x22 + lVar21);
  uVar24 = *(undefined8 *)(unaff_x22 + lVar23);
  uVar15 = *(undefined8 *)(unaff_x22 + lVar14);
  uVar26 = *(undefined8 *)(unaff_x22 + lVar11);
  uVar13 = *(undefined8 *)(unaff_x22 + lVar12);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar31 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar33 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar36 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar38 = *(undefined8 *)(unaff_x22 + 0x3f0);
  puVar25 = *(undefined8 **)(unaff_x22 + 0x3c0);
  *puVar25 = *puVar30;
  puVar25[1] = uVar13;
  puVar25[2] = uVar26;
  puVar25[3] = uVar15;
  puVar25[4] = uVar24;
  puVar25[5] = uVar22;
  puVar25[6] = uVar20;
  puVar25[7] = uVar18;
  *(undefined1 *)(puVar25 + 8) = uVar3;
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar31);
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar33);
  _swift_task_dealloc(uVar36);
  _swift_task_dealloc(uVar38);
                    /* WARNING: Could not recover jumptable at 0x00010048a658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048abc0 | FUN_10048abc0 */

void FUN_10048abc0(undefined8 param_1,undefined8 param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  undefined8 *puVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4c0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x4b8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x4b0);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x480);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x478);
  puVar14 = *(undefined8 **)(unaff_x22 + 0x428);
  lVar4 = *(long *)(unaff_x22 + 0x420);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x410);
  lVar8 = *(long *)(unaff_x22 + 0x408);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x400);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3f8);
  lVar6 = *(long *)(unaff_x22 + 0x3e0);
  FUN_10045b79c();
  *(undefined8 *)(unaff_x22 + 0x4c8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x4d0) = param_2;
  _swift_bridgeObjectRetain(uVar17);
  _swift_bridgeObjectRetain(uVar15);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(param_2);
  DVar1 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(300.0,DVar1);
  (**(code **)(lVar8 + 8))(uVar12,uVar5);
  *puVar14 = param_1;
  puVar14[1] = param_2;
  puVar14[2] = uVar10;
  puVar14[3] = uVar16;
  puVar14[4] = uVar3;
  puVar14[5] = uVar17;
  puVar14[6] = uVar2;
  puVar14[7] = uVar15;
  puVar14[8] = uVar9;
  puVar14[9] = uVar7;
  FUN_1000c495c(puVar14,uVar11,FUN_100481150);
  (**(code **)(lVar4 + 0x38))(uVar11,0,1,uVar13);
  _swift_beginAccess(lVar6 + 0x70,unaff_x22 + 0x3a0,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  FUN_1004609f8(uVar11,param_1,param_2);
  _swift_endAccess(unaff_x22 + 0x3a0);
  _swift_task_switch(FUN_10048ad58,*(undefined8 *)(unaff_x22 + 0x468),
                     *(undefined8 *)(unaff_x22 + 0x470));
  return;
}



/* Address: 0x10048ad58 | FUN_10048ad58 */

void FUN_10048ad58(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  ulong uVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 *puVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  String SVar24;
  undefined8 local_c8;
  undefined8 local_b8;
  
  lVar16 = *(long *)(unaff_x22 + 0x450);
  lVar8 = *(long *)(unaff_x22 + 0x448);
  uVar7 = *(undefined8 *)(lVar8 + 0x10);
  uVar18 = *(undefined8 *)(lVar8 + 0x18);
  puVar4 = (undefined1 *)(lVar8 + *(int *)(*(long *)(unaff_x22 + 0x438) + 0x1c));
  (**(code **)(*(long *)(unaff_x22 + 0x408) + 0x10))
            (*(long *)(unaff_x22 + 0x3f0) + (long)*(int *)(*(long *)(unaff_x22 + 1000) + 0x14),
             puVar4,*(undefined8 *)(unaff_x22 + 0x400));
  if (*(long *)(lVar16 + 0x10) == 0) {
    _swift_bridgeObjectRetain(uVar18);
    local_b8 = 0;
    local_c8 = 0;
  }
  else {
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x450));
    _swift_bridgeObjectRetain(uVar18);
    lVar8 = 0x6574617473;
    puVar4 = &DAT_e500000000000000;
    FUN_10046483c();
    lVar16 = *(long *)(unaff_x22 + 0x450);
    if (((ulong)puVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar16);
      local_b8 = 0;
      local_c8 = 0;
    }
    else {
      puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + lVar8 * 0x10);
      local_b8 = *puVar1;
      local_c8 = puVar1[1];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar16);
    }
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x4d0);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x4c8);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x4b0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4a0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x498);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x480);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x478);
  puVar19 = *(undefined8 **)(unaff_x22 + 0x3f0);
  lVar8 = *(long *)(unaff_x22 + 1000);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x450));
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x28));
  *puVar1 = local_b8;
  puVar1[1] = local_c8;
  *puVar19 = uVar7;
  puVar19[1] = uVar18;
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x18));
  *puVar1 = uVar17;
  puVar1[1] = uVar23;
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x1c));
  *puVar1 = uVar14;
  puVar1[1] = uVar20;
  uVar15 = 0x2d746e65746e6f43;
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x20));
  *puVar1 = uVar22;
  puVar1[1] = uVar21;
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x24));
  *puVar1 = uVar10;
  puVar1[1] = uVar11;
  puVar1 = (undefined8 *)((long)puVar19 + (long)*(int *)(lVar8 + 0x2c));
  *puVar1 = uVar13;
  puVar1[1] = uVar9;
  puVar1 = puVar19;
  FUN_100481be4();
  FUN_10005241c(puVar19,FUN_100482008);
  thunk_FUN_10085c548();
  uVar7 = 0xec00000065707954;
  uVar6 = uVar15;
  FUN_10085c664(0xd000000000000018,0x8000000100da8970,0x2d746e65746e6f43,0xec00000065707954,
                0x2d746e65746e6f63,0xec00000065707974);
  lVar8 = -0x7ffffffeff257670;
  uVar2 = 0xd000000000000017;
  thunk_FUN_10085af9c();
  uVar3 = uVar2;
  if (lVar8 != 0) {
    uVar3 = 0xd00000000000004f;
    FUN_10085c664(0xd00000000000004f,0x8000000100da89b0,uVar2,lVar8,uVar6,uVar7);
  }
  FUN_100611728();
  _swift_retain(puVar19);
  puVar5 = puVar4;
  FUN_10060cb90();
  _swift_bridgeObjectRelease(puVar4);
  _swift_retain(puVar19);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar19)
  ;
  if ((uVar15 & 1) == 0) {
    *(ulong *)(unaff_x22 + 0x3b8) = (ulong)(uint)((int)((ulong)puVar5 >> 0x20) - (int)puVar5);
    SVar24 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar24.str,SVar24.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(puVar19);
  }
  else {
    _swift_release(puVar19);
  }
  uVar18 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x428);
  _swift_release(puVar19);
  FUN_10005241c(uVar7,FUN_100481150);
  FUN_10005241c(uVar18,FUN_100484870);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x448);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x430);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x410);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x3f8);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x3f0);
  puVar12 = *(undefined8 **)(unaff_x22 + 0x3c0);
  puVar12[1] = 0x4b4f;
  *puVar12 = 200;
  puVar12[2] = &SUB_e200000000000000;
  puVar12[3] = puVar19;
  puVar12[4] = puVar1;
  puVar12[5] = puVar5;
  puVar12[6] = uVar3 & 0xffffffffffffff;
  puVar12[7] = 0;
  *(undefined1 *)(puVar12 + 8) = 0;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar13);
                    /* WARNING: Could not recover jumptable at 0x00010048b15c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048b160 | FUN_10048b160 */

undefined * FUN_10048b160(Encoding param_1,char *param_2)

{
  String *pSVar1;
  long *plVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  Encoding EVar7;
  undefined *puVar8;
  long lVar9;
  char *pcVar10;
  char *pcVar11;
  void *pvVar12;
  undefined *puVar14;
  long extraout_x8;
  ulong uVar15;
  ulong uVar16;
  undefined8 *puVar17;
  String separator;
  String SVar18;
  String SVar19;
  long alStack_e0 [6];
  undefined *local_b0;
  char *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  String local_80;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *puVar13;
  
  EVar7 = Encoding::_typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(EVar7.unknown + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  Encoding::_get_utf8(EVar7);
  (extension_Foundation)::Swift::String::_init(param_1);
  pcVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 == (char *)0x0) {
    FUN_10045acd8(PTR___swiftEmptyArrayStorage_100eae0d8);
  }
  else {
    FUN_10045acd8();
    local_80.bridgeObject = param_2;
    local_80.str = param_1.unknown;
    puVar8 = pcVar11;
    FUN_10045b990();
    SVar18.bridgeObject = (void *)0xe100000000000000;
    SVar18.str = (char *)0x26;
    lVar9 = 0x26;
    local_b0 = puVar8;
    (extension_RegexBuilder)::Swift::StringProtocol::_split(SVar18,0x7fffffffffffffff,true);
    _swift_bridgeObjectRelease();
    alStack_e0[5] = *(ulong *)(lVar9 + 0x10);
    if (alStack_e0[5] != 0) {
      uVar16 = 0;
      puVar17 = (undefined8 *)(lVar9 + 0x38);
      alStack_e0[4] = lVar9;
      do {
        puVar8 = PTR___type_metadata_for_Swift_Substring_100eaca98;
        if (*(ulong *)(alStack_e0[4] + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10048b5ec);
          (*pcVar6)();
        }
        local_70 = puVar17[-1];
        uVar3 = *puVar17;
        local_80 = *(String *)(puVar17 + -3);
        uStack_68 = uVar3;
        FUN_10048f54c();
        _swift_bridgeObjectRetain(uVar3);
        separator.bridgeObject = (void *)0xe100000000000000;
        separator.str = (char *)0x3d;
        lVar9 = 0x3d;
        (extension_RegexBuilder)::Swift::StringProtocol::_split(separator,1,false);
        _swift_bridgeObjectRelease(uVar3);
        puVar13 = local_b0;
        pcVar10 = PTR___type_metadata_for_Swift_String_100eac208;
        if (*(long *)(lVar9 + 0x10) == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10048b5f0);
          (*pcVar6)();
        }
        local_70 = *(undefined8 *)(lVar9 + 0x30);
        uStack_68 = *(undefined8 *)(lVar9 + 0x38);
        local_80 = *(String *)(lVar9 + 0x20);
        local_90 = 0x2b;
        local_88 = 0xe100000000000000;
        local_a0 = 0x20;
        uStack_98 = 0xe100000000000000;
        *(undefined **)((long)alStack_e0 + lVar5 + 0x10) = local_b0;
        *(undefined **)((long)alStack_e0 + lVar5 + 0x18) = puVar13;
        *(char **)((long)alStack_e0 + lVar5 + 8) = param_2;
        *(undefined **)((long)alStack_e0 + lVar5) = PTR___type_metadata_for_Swift_String_100eac208;
        local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                             (&local_90,&local_a0,0,0,0,1,puVar8,
                              PTR___type_metadata_for_Swift_String_100eac208);
        pvVar12 = local_80.bridgeObject;
        (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
        local_a8 = pcVar10;
        _swift_bridgeObjectRelease(pvVar12);
        if (puVar13 == (undefined *)0x0) {
          SVar18 = *(String *)(lVar9 + 0x20);
          uVar3 = *(undefined8 *)(lVar9 + 0x38);
          _swift_bridgeObjectRetain(uVar3);
          SVar18 = Swift::String::__fromSubstring(SVar18);
          puVar13 = SVar18.bridgeObject;
          local_a8 = SVar18.str;
          _swift_bridgeObjectRelease(uVar3);
        }
        puVar8 = local_b0;
        pcVar10 = PTR___type_metadata_for_Swift_String_100eac208;
        if (*(long *)(lVar9 + 0x10) == 2) {
          local_70 = *(undefined8 *)(lVar9 + 0x50);
          uStack_68 = *(undefined8 *)(lVar9 + 0x58);
          local_80 = *(String *)(lVar9 + 0x40);
          local_90 = 0x2b;
          local_88 = 0xe100000000000000;
          local_a0 = 0x20;
          uStack_98 = 0xe100000000000000;
          *(undefined **)((long)alStack_e0 + lVar5 + 0x10) = local_b0;
          *(undefined **)((long)alStack_e0 + lVar5 + 0x18) = puVar8;
          *(char **)((long)alStack_e0 + lVar5 + 8) = param_2;
          *(undefined **)((long)alStack_e0 + lVar5) = PTR___type_metadata_for_Swift_String_100eac208
          ;
          local_80 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                               (&local_90,&local_a0,0,0,0,1,
                                PTR___type_metadata_for_Swift_Substring_100eaca98,
                                PTR___type_metadata_for_Swift_String_100eac208);
          pvVar12 = local_80.bridgeObject;
          (extension_Foundation)::Swift::StringProtocol::_get_removingPercentEncoding();
          SVar19.bridgeObject = puVar8;
          SVar19.str = pcVar10;
          _swift_bridgeObjectRelease(pvVar12);
          if (puVar8 == (undefined *)0x0) {
            SVar18 = *(String *)(lVar9 + 0x40);
            lVar4 = *(long *)(lVar9 + 0x58);
            _swift_bridgeObjectRetain(lVar4);
            _swift_bridgeObjectRelease(lVar9);
            SVar19 = Swift::String::__fromSubstring(SVar18);
            lVar9 = lVar4;
          }
          _swift_bridgeObjectRelease(lVar9);
        }
        else {
          _swift_bridgeObjectRelease(lVar9);
          SVar19 = (String)(ZEXT816(0xe000000000000000) << 0x40);
        }
        puVar8 = pcVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        local_80.str = pcVar11;
        pcVar10 = local_a8;
        puVar14 = puVar13;
        FUN_10046483c();
        uVar15 = (ulong)~(uint)puVar14 & 1;
        param_2 = (char *)(*(long *)(pcVar11 + 0x10) + uVar15);
        if (SCARRY8(*(long *)(pcVar11 + 0x10),uVar15)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10048b5f4);
          (*pcVar6)();
        }
        if (*(long *)(pcVar11 + 0x18) < (long)param_2) {
          FUN_10046836c(param_2,puVar8);
          pcVar10 = local_a8;
          puVar8 = puVar13;
          FUN_10046483c();
          if (((uint)puVar14 & 1) != ((uint)puVar8 & 1)) {
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10048b608);
            (*pcVar6)();
          }
          param_2 = pcVar10;
          pcVar11 = local_80.str;
joined_r0x00010048b5a0:
          if (((ulong)puVar14 & 1) == 0) goto LAB_10048b544;
LAB_10048b250:
          pSVar1 = (String *)(*(long *)(pcVar11 + 0x38) + (long)pcVar10 * 0x10);
          param_2 = pSVar1->bridgeObject;
          *pSVar1 = SVar19;
          _swift_bridgeObjectRelease(puVar13);
          _swift_bridgeObjectRelease();
        }
        else {
          if (((ulong)puVar8 & 1) == 0) {
            FUN_100466c90();
            pcVar11 = local_80.str;
            goto joined_r0x00010048b5a0;
          }
          pcVar11 = local_80.str;
          if (((ulong)puVar14 & 1) != 0) goto LAB_10048b250;
LAB_10048b544:
          *(ulong *)(pcVar11 + ((ulong)pcVar10 >> 6) * 8 + 0x40) =
               *(ulong *)(pcVar11 + ((ulong)pcVar10 >> 6) * 8 + 0x40) |
               1L << ((ulong)pcVar10 & 0x3f);
          plVar2 = (long *)(*(long *)(pcVar11 + 0x30) + (long)pcVar10 * 0x10);
          *plVar2 = (long)local_a8;
          plVar2[1] = (long)puVar13;
          *(String *)(*(long *)(pcVar11 + 0x38) + (long)pcVar10 * 0x10) = SVar19;
          if (SCARRY8(*(long *)(pcVar11 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x10048b5f8);
            (*pcVar6)();
          }
          *(long *)(pcVar11 + 0x10) = *(long *)(pcVar11 + 0x10) + 1;
        }
        uVar16 = uVar16 + 1;
        puVar17 = puVar17 + 4;
        lVar9 = alStack_e0[4];
      } while (alStack_e0[5] != uVar16);
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  return pcVar11;
}



/* Address: 0x10048b608 | FUN_10048b608 */

void FUN_10048b608(undefined8 *param_1,undefined *param_2,URLComponents *param_3,long param_4,
                  undefined *param_5)

{
  ulong *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  char **ppcVar5;
  bool bVar6;
  CharacterSet CVar7;
  CharacterSet CVar8;
  undefined *puVar9;
  URLComponents *pUVar10;
  undefined *puVar11;
  URLComponents *pUVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long extraout_x8;
  long extraout_x8_00;
  char *pcVar15;
  long extraout_x8_01;
  ulong uVar16;
  char **ppcVar17;
  URLComponents UVar18;
  URLComponents *pUVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  char *pcVar23;
  ulong uVar24;
  code *pcVar25;
  undefined *puVar26;
  ulong *puVar27;
  String SVar28;
  String SVar29;
  String separator;
  String SVar30;
  String SVar31;
  String SVar32;
  URLComponents local_1a0;
  code *local_198;
  char *local_190;
  char *local_188;
  code *local_180;
  undefined *local_178;
  undefined *local_170;
  undefined *local_168;
  URLComponents *local_160;
  undefined *local_158;
  undefined *local_150;
  undefined *local_148;
  URLComponents *local_140;
  CharacterSet local_138;
  undefined *local_130;
  URLComponents *local_128;
  undefined8 *local_120;
  undefined *local_118;
  long local_110;
  URLComponents *local_108;
  undefined *puStack_100;
  undefined *local_d8;
  char *local_d0;
  String local_c8;
  ulong local_b8;
  undefined8 local_b0;
  char acStack_a8 [8];
  undefined1 *local_a0;
  URLComponents *pUStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  undefined8 uStack_78;
  undefined1 local_70;
  
  local_120 = param_1;
  local_118 = (undefined *)Foundation::URLComponents::typeMetadataAccessor();
  local_110 = *(long *)(local_118 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_110 + 0x40));
  pUVar19 = (URLComponents *)((long)&local_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_140 = pUVar19;
  local_148 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_150 = *(undefined **)(local_148 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_150 + 0x40));
  pcVar15 = (char *)((long)pUVar19 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar9 = &DAT_100fc9490;
  local_138.unknown = pcVar15;
  FUN_1000037f0(&DAT_100fc9490,&DAT_100c4e018);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pUVar19 = (URLComponents *)(pcVar15 + -extraout_x8_01);
  local_130 = param_2;
  local_128 = param_3;
  Foundation::URLComponents::_init();
  puVar27 = (ulong *)(param_4 + 0x40);
  uVar24 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar22 = 0xffffffffffffffff;
  if (-uVar24 < 0x40) {
    uVar22 = ~(-1L << (-uVar24 & 0x3f));
  }
  uVar22 = uVar22 & *puVar27;
  _swift_bridgeObjectRetain(param_4);
  lVar20 = 0;
  lVar21 = lVar20;
  puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
  while( true ) {
    while (uVar22 != 0) {
      uVar16 = (uVar22 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar22 & 0x5555555555555555) << 1;
      uVar16 = (uVar16 & 0xcccccccccccccccc) >> 2 | (uVar16 & 0x3333333333333333) << 2;
      uVar16 = (uVar16 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar16 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar16 = (uVar16 & 0xff00ff00ff00ff00) >> 8 | (uVar16 & 0xff00ff00ff00ff) << 8;
      uVar16 = (uVar16 & 0xffff0000ffff0000) >> 0x10 | (uVar16 & 0xffff0000ffff) << 0x10;
      uVar22 = uVar22 - 1 & uVar22;
      uVar16 = LZCOUNT(uVar16 >> 0x20 | uVar16 << 0x20) | lVar20 << 6;
      puVar1 = (ulong *)(*(long *)(param_4 + 0x38) + uVar16 * 0x10);
      puVar26 = (undefined *)puVar1[1];
      lVar21 = lVar20;
      if (puVar26 != (undefined *)0x0) {
        pcVar15 = (char *)*puVar1;
        uVar3 = (ulong)pcVar15 & 0xffffffffffff;
        if (((ulong)puVar26 & 0x2000000000000000) != 0) {
          uVar3 = (ulong)puVar26 >> 0x38 & 0xf;
        }
        if (uVar3 != 0) {
          puVar2 = (undefined8 *)(*(long *)(param_4 + 0x30) + uVar16 * 0x10);
          local_1a0.unknown = (undefined *)*puVar2;
          puVar11 = (undefined *)puVar2[1];
          local_170 = (undefined *)DAT_100fc94a0;
          local_158 = puVar9;
          local_108 = (URLComponents *)local_1a0.unknown;
          puStack_100 = puVar11;
          _swift_bridgeObjectRetain_n(puVar26,2);
          local_168 = puVar11;
          _swift_bridgeObjectRetain(puVar11);
          if (local_170 != (undefined *)0xffffffffffffffff) {
            _swift_once(&DAT_100fc94a0,FUN_1004872d0);
          }
          puVar9 = local_148;
          puVar11 = local_148;
          FUN_1000cd990(local_148,&DAT_100fc94a8);
          local_180 = *(code **)(local_150 + 0x10);
          CVar7.unknown = local_138.unknown;
          local_188 = puVar11;
          (*local_180)(local_138.unknown,puVar11,puVar9);
          FUN_10045b990();
          CVar8.unknown = local_138.unknown;
          puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
          local_190 = CVar7.unknown;
          (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(local_138);
          local_198 = *(code **)(local_150 + 8);
          local_170 = CVar8.unknown;
          (*local_198)(local_138.unknown,local_148);
          local_178 = puVar9;
          if (puVar9 == (undefined *)0x0) {
            puVar9 = local_168;
            _swift_bridgeObjectRetain();
            local_170 = local_1a0.unknown;
            local_178 = puVar9;
          }
          local_108 = (URLComponents *)pcVar15;
          puStack_100 = puVar26;
          (*local_180)(local_138.unknown,local_188,local_148);
          CVar7.unknown = local_138.unknown;
          puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
          pcVar23 = local_190;
          (extension_Foundation)::Swift::StringProtocol::_addingPercentEncoding(local_138);
          local_188 = CVar7.unknown;
          (*local_198)(local_138.unknown,local_148);
          local_180 = (code *)puVar26;
          if (puVar9 != (undefined *)0x0) {
            local_180 = (code *)puVar9;
            _swift_bridgeObjectRelease(puVar26);
            pcVar15 = local_188;
          }
          local_108 = (URLComponents *)local_170;
          puStack_100 = local_178;
          SVar28.bridgeObject = (void *)0xe100000000000000;
          SVar28.str = (char *)0x3d;
          SVar31.bridgeObject = param_5;
          SVar31.str = pcVar23;
          Swift::String::append(SVar28,SVar31);
          pcVar25 = local_180;
          SVar29.bridgeObject = local_180;
          SVar29.str = pcVar15;
          SVar32.bridgeObject = param_5;
          SVar32.str = pcVar23;
          Swift::String::append(SVar29,SVar32);
          _swift_bridgeObjectRelease(puVar26);
          _swift_bridgeObjectRelease(local_168);
          _swift_bridgeObjectRelease(pcVar25);
          puVar9 = puStack_100;
          pUVar10 = local_108;
          puVar26 = local_158;
          _swift_isUniquelyReferenced_nonNull_native();
          local_168 = puVar9;
          if (((ulong)puVar26 & 1) == 0) {
            puVar9 = (undefined *)0x0;
            FUN_1004645d8(0,*(long *)(local_158 + 0x10) + 1,1);
            param_5 = local_158;
            local_158 = puVar9;
          }
          uVar16 = *(ulong *)(local_158 + 0x10);
          if (*(ulong *)(local_158 + 0x18) >> 1 <= uVar16) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(local_158 + 0x18));
            FUN_1004645d8(puVar9,uVar16 + 1,1);
            param_5 = local_158;
            local_158 = puVar9;
          }
          *(ulong *)(local_158 + 0x10) = uVar16 + 1;
          *(URLComponents **)(local_158 + uVar16 * 0x10 + 0x20) = pUVar10;
          *(undefined **)(local_158 + uVar16 * 0x10 + 0x28) = local_168;
          puVar9 = local_158;
        }
      }
    }
    bVar6 = SCARRY8(lVar20,1);
    lVar20 = lVar20 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10048bffc);
      (*pcVar25)();
    }
    if ((long)(0x3f - uVar24 >> 6) <= lVar20) break;
    uVar22 = puVar27[lVar20];
  }
  FUN_10000c650(param_4,puVar27,~uVar24,lVar21,0);
  puVar26 = local_118;
  if (*(long *)(puVar9 + 0x10) == 0) {
    _swift_bridgeObjectRelease(puVar9);
    pcVar25 = *(code **)(local_110 + 0x30);
    puVar26 = local_118;
  }
  else {
    pcVar25 = *(code **)(local_110 + 0x30);
    pcVar15 = &DAT_00000001;
    UVar18.unknown = (undefined *)pUVar19;
    (*pcVar25)(pUVar19,1,local_118);
    if ((int)UVar18.unknown == 0) {
      Foundation::URLComponents::_get_percentEncodedQuery(UVar18);
    }
    else {
      UVar18.unknown = (undefined *)0x0;
      pcVar15 = (char *)0x0;
    }
    pUVar10 = pUVar19;
    (*pcVar25)(pUVar19,1,puVar26);
    if ((int)pUVar10 == 0) {
      local_158 = puVar9;
      local_138.unknown = pcVar15;
      local_108 = (URLComponents *)puVar9;
      local_d8 = UVar18.unknown;
      local_d0 = pcVar15;
      _swift_bridgeObjectRetain(pcVar15);
      puVar9 = &DAT_100fc7eb8;
      FUN_1000037f0(&DAT_100fc7eb8,&DAT_100c4c8c0);
      puVar26 = puVar9;
      FUN_1004765d4();
      SVar30.bridgeObject = (void *)0xe100000000000000;
      SVar30.str = (char *)0x26;
      local_150 = puVar26;
      local_148 = puVar9;
      local_c8 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar30);
      lVar20 = 0;
      puVar9 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        ppcVar5 = &local_d0 + lVar20 * 2;
        do {
          ppcVar17 = ppcVar5;
          lVar20 = lVar20 + 1;
          if (lVar20 == 3) {
            puVar26 = &DAT_100fc9498;
            FUN_1000037f0(&DAT_100fc9498,&DAT_100c4e020);
            _swift_arrayDestroy(&local_d8,2,puVar26);
            uVar22 = 0;
            uVar24 = *(ulong *)(puVar9 + 0x10);
            pUVar10 = (URLComponents *)PTR___swiftEmptyArrayStorage_100eae0d8;
            goto LAB_10048bcbc;
          }
          pcVar15 = *ppcVar17;
          ppcVar5 = ppcVar17 + 2;
        } while (pcVar15 == (char *)0x0);
        pcVar23 = ppcVar17[-1];
        _swift_bridgeObjectRetain(pcVar15);
        puVar26 = puVar9;
        _swift_isUniquelyReferenced_nonNull_native();
        puVar11 = puVar9;
        if (((ulong)puVar26 & 1) == 0) {
          puVar11 = (undefined *)0x0;
          FUN_1004645d8(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
        }
        uVar22 = *(ulong *)(puVar11 + 0x10);
        puVar9 = puVar11;
        if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar22) {
          puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar11 + 0x18));
          FUN_1004645d8(puVar9,uVar22 + 1,1,puVar11);
        }
        *(ulong *)(puVar9 + 0x10) = uVar22 + 1;
        *(char **)(puVar9 + uVar22 * 0x10 + 0x20) = pcVar23;
        *(char **)(puVar9 + uVar22 * 0x10 + 0x28) = pcVar15;
      } while( true );
    }
    _swift_bridgeObjectRelease(puVar9);
    _swift_bridgeObjectRelease(pcVar15);
  }
LAB_10048bdf4:
  pUVar12 = pUVar19;
  (*pcVar25)(pUVar19,1,puVar26);
  lVar20 = local_110;
  pUVar10 = local_140;
  if ((int)pUVar12 == 0) {
    UVar18.unknown = (undefined *)local_140;
    pUVar12 = pUVar19;
    (**(code **)(local_110 + 0x10))(local_140,pUVar19,puVar26);
    Foundation::URLComponents::_get_string(UVar18);
    (**(code **)(lVar20 + 8))(pUVar10,puVar26);
    if (pUVar12 != (URLComponents *)0x0) goto LAB_10048be70;
  }
  pUVar12 = local_128;
  pUVar10 = local_128;
  _swift_bridgeObjectRetain();
  UVar18.unknown = local_130;
LAB_10048be70:
  uVar22 = 0x2d746e65746e6f43;
  thunk_FUN_10085c548();
  local_108 = pUVar10;
  FUN_10085c664(UVar18.unknown,pUVar12,0x6e6f697461636f4c,&DAT_e800000000000000,0x6e6f697461636f6c,
                &DAT_e800000000000000);
  pUVar10 = local_108;
  FUN_100611728();
  _swift_retain(pUVar10);
  uVar13 = 0;
  uVar14 = 0xe000000000000000;
  FUN_10060cb90();
  builtin_strncpy(acStack_a8,"Found",6);
  acStack_a8[6] = '\0';
  acStack_a8[7] = '\0';
  local_b0 = 0x12e;
  local_80 = (ulong)UVar18.unknown & 0xffffffffffffff;
  local_a0 = &DAT_e500000000000000;
  pUStack_98 = pUVar10;
  uStack_78 = 0;
  local_70 = 0;
  local_90 = uVar13;
  uStack_88 = uVar14;
  _swift_retain(pUVar10);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,pUVar10)
  ;
  if ((uVar22 & 1) == 0) {
    local_b8 = (ulong)(uint)((int)((ulong)uVar14 >> 0x20) - (int)uVar14);
    SVar30 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar30.str,SVar30.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release_n(pUVar10,2);
  FUN_100005808(pUVar19,&DAT_100fc9490,&DAT_100c4e018);
  local_120[5] = uStack_88;
  local_120[4] = local_90;
  local_120[7] = uStack_78;
  local_120[6] = local_80;
  *(undefined1 *)(local_120 + 8) = local_70;
  *(char (*) [8])(local_120 + 1) = acStack_a8;
  *local_120 = local_b0;
  local_120[3] = pUStack_98;
  local_120[2] = local_a0;
  return;
LAB_10048bcbc:
  puVar27 = (ulong *)(puVar9 + uVar22 * 0x10 + 0x28);
  do {
    if (uVar24 == uVar22) {
      _swift_bridgeObjectRelease(puVar9);
      separator.bridgeObject = (void *)0xe100000000000000;
      separator.str = (char *)0x26;
      local_108 = pUVar10;
      SVar30 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
      _swift_release(pUVar10,SVar30.bridgeObject);
      Foundation::URLComponents::_set_percentEncodedQuery(pUVar19);
      _swift_bridgeObjectRelease(local_158);
      _swift_bridgeObjectRelease(local_138.unknown);
      puVar26 = local_118;
      goto LAB_10048bdf4;
    }
    if (*(ulong *)(puVar9 + 0x10) <= uVar22) {
                    /* WARNING: Does not return */
      pcVar25 = (code *)SoftwareBreakpoint(1,0x10048c000);
      (*pcVar25)();
    }
    uVar3 = puVar27[-1];
    uVar4 = *puVar27;
    puVar27 = puVar27 + 2;
    uVar22 = uVar22 + 1;
    uVar16 = uVar3 & 0xffffffffffff;
    if ((uVar4 & 0x2000000000000000) != 0) {
      uVar16 = uVar4 >> 0x38 & 0xf;
    }
  } while (uVar16 == 0);
  _swift_bridgeObjectRetain(uVar4);
  puVar26 = (undefined *)pUVar10;
  _swift_isUniquelyReferenced_nonNull_native();
  local_160 = pUVar19;
  local_108 = pUVar10;
  if (((ulong)puVar26 & 1) == 0) {
    FUN_10046ade8(0,*(long *)((long)pUVar10 + 0x10) + 1,1);
  }
  uVar16 = *(ulong *)((long)local_108 + 0x10);
  if (*(ulong *)((long)local_108 + 0x18) >> 1 <= uVar16) {
    FUN_10046ade8(1 < *(ulong *)((long)local_108 + 0x18),uVar16 + 1,1);
  }
  *(ulong *)((long)local_108 + 0x10) = uVar16 + 1;
  *(ulong *)((long)local_108 + uVar16 * 0x10 + 0x20) = uVar3;
  *(ulong *)((long)local_108 + uVar16 * 0x10 + 0x28) = uVar4;
  pUVar10 = local_108;
  pUVar19 = local_160;
  goto LAB_10048bcbc;
}



/* Address: 0x10048c000 | FUN_10048c000 */

void FUN_10048c000(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  Date DVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  *(ulong *)(unaff_x22 + 0x1a0) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1a8) = param_5;
  *(undefined8 *)(unaff_x22 + 400) = param_1;
  *(undefined8 *)(unaff_x22 + 0x198) = param_2;
  puVar1 = &DAT_100fc8320;
  FUN_1000037f0(&DAT_100fc8320,&DAT_100c4cea8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1b0) = uVar2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x1b8) = DVar3.unknown;
  lVar5 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x1c0) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1c8) = uVar2;
  lVar5 = 0;
  FUN_10048113c();
  *(long *)(unaff_x22 + 0x1d0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1d8) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e0) = uVar2;
  puVar1 = &DAT_100fc8328;
  FUN_1000037f0(&DAT_100fc8328,&DAT_100c4d800);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1e8) = uVar2;
  lVar5 = 0;
  FUN_100481150();
  *(long *)(unaff_x22 + 0x1f0) = lVar5;
  lVar5 = *(long *)(lVar5 + -8);
  *(long *)(unaff_x22 + 0x1f8) = lVar5;
  uVar2 = *(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x200) = uVar2;
  plVar4 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x208) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10048c13c;
  FUN_1004881dc(param_2,param_3 & 0xcfffffffffffffff,param_4);
  return;
}



/* Address: 0x10048c13c | FUN_10048c13c */

void FUN_10048c13c(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  long *unaff_x22;
  long lVar13;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  String SVar17;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  
  lVar16 = *unaff_x22;
  lVar13 = *unaff_x22;
  *(ulong *)(lVar16 + 0x210) = param_1;
  *(undefined8 *)(lVar16 + 0x218) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar16 + 0x208));
  uVar4 = param_1;
  FUN_10048b160(param_1,param_2);
  *(ulong *)(lVar16 + 0x220) = uVar4;
  if (*(long *)(uVar4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(uVar4);
    lVar5 = 0x6b6f745f66727363;
    uVar9 = 0xea00000000006e65;
    FUN_10046483c();
    uVar14 = uVar4;
    if ((uVar9 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(uVar4 + 0x38) + lVar5 * 0x10);
      uVar9 = *puVar1;
      *(ulong *)(lVar16 + 0x228) = uVar9;
      uVar14 = puVar1[1];
      *(ulong *)(lVar16 + 0x230) = uVar14;
      _swift_bridgeObjectRetain(uVar14);
      _swift_bridgeObjectRelease(uVar4);
      uVar9 = uVar9 & 0xffffffffffff;
      if ((uVar14 & 0x2000000000000000) != 0) {
        uVar9 = uVar14 >> 0x38 & 0xf;
      }
      if (uVar9 != 0) {
        _swift_task_switch(FUN_10048c3dc,*(undefined8 *)(lVar16 + 0x1a8),0);
        return;
      }
    }
    _swift_bridgeObjectRelease(uVar4);
    uVar4 = uVar14;
  }
  uVar14 = 0x2d746e65746e6f43;
  _swift_bridgeObjectRelease();
  FUN_100611728();
  uVar10 = 0x8000000100da8810;
  uVar6 = 0xd000000000000012;
  FUN_10060cb90();
  uVar7 = uVar6;
  thunk_FUN_10085c548();
  local_88 = uVar7;
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar7);
  if ((uVar14 & 1) == 0) {
    *(ulong *)(lVar16 + 0x178) = (ulong)(uint)((int)((ulong)uVar10 >> 0x20) - (int)uVar10);
    SVar17 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(auStack_a0,SVar17.str,SVar17.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(uVar7);
    uVar7 = local_88;
  }
  else {
    _swift_release(uVar7);
  }
  FUN_10003bf2c(param_1,param_2);
  uVar8 = *(undefined8 *)(lVar16 + 0x200);
  uVar2 = *(undefined8 *)(lVar16 + 0x1e0);
  uVar3 = *(undefined8 *)(lVar16 + 0x1e8);
  uVar12 = *(undefined8 *)(lVar16 + 0x1c8);
  uVar15 = *(undefined8 *)(lVar16 + 0x1b0);
  puVar11 = *(undefined8 **)(lVar16 + 400);
  puVar11[1] = 0x6564646962726f46;
  *puVar11 = 0x193;
  puVar11[2] = 0xe90000000000006e;
  puVar11[3] = uVar7;
  puVar11[4] = uVar6;
  puVar11[5] = uVar10;
  puVar11[6] = uVar4 & 0xffffffffffffff;
  puVar11[7] = 0;
  *(undefined1 *)(puVar11 + 8) = 0;
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010048c3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar13 + 8))();
  return;
}



/* Address: 0x10048c3dc | FUN_10048c3dc */

void FUN_10048c3dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x198);
  FUN_100480a04(*(undefined8 *)(unaff_x22 + 0x1e8),*(undefined8 *)(unaff_x22 + 0x228),uVar2);
  _swift_bridgeObjectRelease(uVar2);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x238) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar1;
  _swift_task_switch(FUN_10048c454,uVar3,uVar1);
  return;
}



/* Address: 0x10048c454 | FUN_10048c454 */

void FUN_10048c454(void)

{
  char *pcVar1;
  long *plVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined1 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  _StringGuts _Var21;
  long unaff_x22;
  ulong uVar22;
  _StringGuts _Var23;
  _StringGuts _Var24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  String SVar29;
  
  uVar19 = *(ulong *)(unaff_x22 + 0x1e8);
  uVar22 = uVar19;
  (**(code **)(*(long *)(unaff_x22 + 0x1f8) + 0x30))(uVar19,1,*(undefined8 *)(unaff_x22 + 0x1f0));
  lVar17 = *(long *)(unaff_x22 + 0x220);
  if ((int)uVar22 == 1) {
    uVar22 = 0x2d746e65746e6f43;
    _swift_bridgeObjectRelease(lVar17);
    FUN_100005808(uVar19,&DAT_100fc8328,&DAT_100c4d800);
    FUN_100611728();
    uVar12 = 0x8000000100da8830;
    uVar6 = 0xd00000000000001d;
    FUN_10060cb90();
    uVar8 = uVar6;
    thunk_FUN_10085c548();
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar8)
    ;
    if ((uVar22 & 1) == 0) {
      *(ulong *)(unaff_x22 + 0x180) = (ulong)(uint)((int)((ulong)uVar12 >> 0x20) - (int)uVar12);
      SVar29 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar29.str,SVar29.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(uVar8);
    }
    else {
      _swift_release(uVar8);
    }
    FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x218));
    uVar13 = 0;
    uVar14 = 0;
    uVar19 = uVar19 & 0xffffffffffffff;
    uVar28._0_1_ = 'F';
    uVar28._1_1_ = 'o';
    uVar28._2_1_ = 'r';
    uVar28._3_1_ = 'b';
    uVar28._4_1_ = 'i';
    uVar28._5_1_ = 'd';
    uVar28._6_1_ = 'd';
    uVar28._7_1_ = 'e';
    uVar27 = 0x193;
    uVar15 = 0xe90000000000006e;
    goto LAB_10048c7bc;
  }
  FUN_1000523d8(uVar19,*(undefined8 *)(unaff_x22 + 0x200),FUN_100481150);
  if (*(long *)(lVar17 + 0x10) == 0) {
LAB_10048c66c:
    lVar17 = *(long *)(unaff_x22 + 0x200);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x220));
    _Var21.unknown = (undefined *)0x0;
    uVar6 = *(undefined8 *)(lVar17 + 0x20);
    uVar12 = *(undefined8 *)(lVar17 + 0x28);
    _Var23.unknown = (undefined *)0xe000000000000000;
LAB_10048c684:
    *(undefined8 *)(unaff_x22 + 0x250) = uVar6;
    *(undefined8 *)(unaff_x22 + 0x248) = uVar12;
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var21,_Var23,(_StringComparisonResult)0x64);
    _Var24.unknown = _Var23.unknown;
    if (!bVar5) {
      if ((_Var21.unknown == (undefined *)0x776f6c6c61) && (_Var23.unknown == &DAT_e500000000000000)
         ) {
        _swift_bridgeObjectRelease(&DAT_e500000000000000);
LAB_10048c87c:
        _swift_task_switch(FUN_10048c9e8,*(undefined8 *)(unaff_x22 + 0x1a8),0);
        return;
      }
      bVar5 = Swift::_stringCompareWithSmolCheck(_Var21,_Var23,(_StringComparisonResult)0x61);
      _swift_bridgeObjectRelease();
      if (bVar5) goto LAB_10048c87c;
      uVar19 = 0x2d746e65746e6f43;
      FUN_100611728();
      uVar6 = 0x206e776f6e6b6e75;
      uVar12 = 0xee006e6f69746361;
      FUN_10060cb90();
      uVar8 = uVar6;
      thunk_FUN_10085c548();
      _swift_retain();
      FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,
                    uVar8);
      if ((uVar19 & 1) == 0) {
        *(ulong *)(unaff_x22 + 0x188) = (ulong)(uint)((int)((ulong)uVar12 >> 0x20) - (int)uVar12);
        SVar29 = Swift::CustomStringConvertible::get_description();
        FUN_10085c664(SVar29.str,SVar29.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                      0x2d746e65746e6f63,0xee006874676e656c);
        _swift_release(uVar8);
      }
      else {
        _swift_release(uVar8);
      }
      uVar15 = *(undefined8 *)(unaff_x22 + 0x200);
      FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x218));
      uVar19 = (ulong)_Var23.unknown & 0xffffffffffffff;
      FUN_10005241c(uVar15,FUN_100481150);
      uVar13 = 0;
      uVar14 = 0;
      uVar28._0_1_ = 'B';
      uVar28._1_1_ = 'a';
      uVar28._2_1_ = 'd';
      uVar28._3_1_ = ' ';
      uVar28._4_1_ = 'R';
      uVar28._5_1_ = 'e';
      uVar28._6_1_ = 'q';
      uVar28._7_1_ = 'u';
      uVar27 = 400;
      uVar15 = 0xeb00000000747365;
      goto LAB_10048c7bc;
    }
  }
  else {
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x220));
    lVar17 = 0x6e6f69746361;
    uVar19 = 0;
    FUN_10046483c();
    lVar20 = *(long *)(unaff_x22 + 0x220);
    if ((uVar19 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar20);
      goto LAB_10048c66c;
    }
    lVar18 = *(long *)(unaff_x22 + 0x200);
    plVar2 = (long *)(*(long *)(lVar20 + 0x38) + lVar17 * 0x10);
    _Var21.unknown = (undefined *)*plVar2;
    _Var23.unknown = (undefined *)plVar2[1];
    _swift_bridgeObjectRetain(_Var23.unknown);
    _swift_bridgeObjectRelease_n(lVar20,2);
    uVar6 = *(undefined8 *)(lVar18 + 0x20);
    uVar12 = *(undefined8 *)(lVar18 + 0x28);
    _Var24.unknown = &DAT_e400000000000000;
    if (_Var21.unknown != (undefined *)0x796e6564 || _Var23.unknown != &DAT_e400000000000000)
    goto LAB_10048c684;
  }
  uVar15 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar17 = *(long *)(unaff_x22 + 0x200);
  _swift_bridgeObjectRelease(_Var24.unknown);
  puVar7 = &DAT_100fc9480;
  FUN_1000037f0(&DAT_100fc9480,&DAT_100c4e008);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x20) = 0x726f727265;
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  *(undefined1 **)(puVar7 + 0x28) = &DAT_e500000000000000;
  pcVar1 = puVar7 + 0x30;
  *(undefined8 *)(puVar7 + 0x38) = 0xed00006465696e65;
  pcVar1[0] = 'a';
  pcVar1[1] = 'c';
  pcVar1[2] = 'c';
  pcVar1[3] = 'e';
  pcVar1[4] = 's';
  pcVar1[5] = 's';
  pcVar1[6] = '_';
  pcVar1[7] = 'd';
  *(undefined8 *)(puVar7 + 0x40) = 0x6574617473;
  *(undefined1 **)(puVar7 + 0x48) = &DAT_e500000000000000;
  uVar8 = *(undefined8 *)(lVar17 + 0x48);
  uVar27 = *(undefined8 *)(lVar17 + 0x40);
  *(undefined8 *)(puVar7 + 0x58) = *(undefined8 *)(lVar17 + 0x48);
  *(undefined8 *)(puVar7 + 0x50) = uVar27;
  _swift_bridgeObjectRetain(uVar8);
  puVar9 = puVar7;
  FUN_10045b114(puVar7);
  _swift_setDeallocating(puVar7);
  puVar10 = &DAT_100fc9488;
  FUN_1000037f0(&DAT_100fc9488,&DAT_100c4e010);
  _swift_arrayDestroy(puVar7 + 0x20,2,puVar10);
  FUN_10048b608((undefined8 *)(unaff_x22 + 0x118),uVar6,uVar12,puVar9);
  FUN_10003bf2c(uVar13,uVar15);
  _swift_bridgeObjectRelease(puVar9);
  FUN_10005241c(lVar17,FUN_100481150);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar19 = *(ulong *)(unaff_x22 + 0x148);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar14 = *(undefined1 *)(unaff_x22 + 0x158);
  uVar28 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x130);
LAB_10048c7bc:
  uVar11 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x1b0);
  puVar16 = *(undefined8 **)(unaff_x22 + 400);
  puVar16[1] = uVar28;
  *puVar16 = uVar27;
  puVar16[2] = uVar15;
  puVar16[3] = uVar8;
  puVar16[4] = uVar6;
  puVar16[5] = uVar12;
  puVar16[6] = uVar19;
  puVar16[7] = uVar13;
  *(undefined1 *)(puVar16 + 8) = uVar14;
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
                    /* WARNING: Could not recover jumptable at 0x00010048c828. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048c9e8 | FUN_10048c9e8 */

void FUN_10048c9e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  Date DVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  long unaff_x22;
  long lVar17;
  undefined8 uVar18;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x248);
  lVar17 = *(long *)(unaff_x22 + 0x200);
  lVar1 = *(long *)(unaff_x22 + 0x1d8);
  puVar7 = *(undefined8 **)(unaff_x22 + 0x1e0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1d0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1b8);
  lVar9 = *(long *)(unaff_x22 + 0x1c0);
  lVar4 = *(long *)(unaff_x22 + 0x1a8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1b0);
  FUN_10045b79c();
  *(undefined8 *)(unaff_x22 + 600) = param_1;
  *(undefined8 *)(unaff_x22 + 0x260) = param_2;
  uVar5 = *(undefined8 *)(lVar17 + 0x10);
  uVar11 = *(undefined8 *)(lVar17 + 0x18);
  uVar6 = *(undefined8 *)(lVar17 + 0x30);
  uVar12 = *(undefined8 *)(lVar17 + 0x38);
  uVar14 = *(undefined8 *)(lVar17 + 0x40);
  *(undefined8 *)(unaff_x22 + 0x268) = uVar14;
  uVar18 = *(undefined8 *)(lVar17 + 0x48);
  *(undefined8 *)(unaff_x22 + 0x270) = uVar18;
  _swift_bridgeObjectRetain(uVar18);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar16);
  _swift_bridgeObjectRetain(uVar12);
  DVar13 = Foundation::Date::init();
  Foundation::Date::addingTimeInterval(600.0,DVar13);
  (**(code **)(lVar9 + 8))(uVar2,uVar3);
  *puVar7 = param_1;
  puVar7[1] = param_2;
  puVar7[2] = uVar5;
  puVar7[3] = uVar11;
  puVar7[4] = uVar15;
  puVar7[5] = uVar16;
  puVar7[6] = uVar6;
  puVar7[7] = uVar12;
  puVar7[8] = uVar14;
  puVar7[9] = uVar18;
  FUN_1000c495c(puVar7,uVar10,FUN_10048113c);
  (**(code **)(lVar1 + 0x38))(uVar10,0,1,uVar8);
  _swift_beginAccess(lVar4 + 0x78,unaff_x22 + 0x160,0x21,0);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar18);
  FUN_100460bdc(uVar10,param_1,param_2);
  _swift_endAccess(unaff_x22 + 0x160);
  _swift_task_switch(FUN_10048cb8c,*(undefined8 *)(unaff_x22 + 0x238),
                     *(undefined8 *)(unaff_x22 + 0x240));
  return;
}



/* Address: 0x10048cb8c | FUN_10048cb8c */

void FUN_10048cb8c(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  uVar15 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x260);
  uVar11 = *(undefined8 *)(unaff_x22 + 600);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar2 = &DAT_100fc9480;
  FUN_1000037f0(&DAT_100fc9480,&DAT_100c4e008);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x65646f63;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e400000000000000;
  *(undefined8 *)(puVar2 + 0x30) = uVar11;
  *(undefined8 *)(puVar2 + 0x38) = uVar9;
  *(undefined8 *)(puVar2 + 0x40) = 0x6574617473;
  *(undefined1 **)(puVar2 + 0x48) = &DAT_e500000000000000;
  *(undefined8 *)(puVar2 + 0x50) = uVar10;
  *(undefined8 *)(puVar2 + 0x58) = uVar15;
  puVar3 = puVar2;
  FUN_10045b114();
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fc9488;
  FUN_1000037f0(&DAT_100fc9488,&DAT_100c4e010);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  FUN_10048b608(unaff_x22 + 0xd0,uVar13,uVar14,puVar3);
  FUN_10003bf2c(uVar12,uVar7);
  _swift_bridgeObjectRelease(puVar3);
  FUN_10005241c(uVar6,FUN_10048113c);
  FUN_10005241c(uVar5,FUN_100481150);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x110);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x200);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1e8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x1c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x1b0);
  puVar8 = *(undefined8 **)(unaff_x22 + 400);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xf8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar17 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xe0);
  puVar8[1] = *(undefined8 *)(unaff_x22 + 0xd8);
  *puVar8 = uVar15;
  puVar8[3] = uVar17;
  puVar8[2] = uVar16;
  puVar8[5] = uVar12;
  puVar8[4] = uVar11;
  puVar8[7] = uVar14;
  puVar8[6] = uVar13;
  *(undefined1 *)(puVar8 + 8) = uVar1;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
                    /* WARNING: Could not recover jumptable at 0x00010048cd2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048cd30 | FUN_10048cd30 */

void FUN_10048cd30(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x400) = param_7;
  *(undefined8 *)(unaff_x22 + 0x3f8) = param_6;
  *(undefined8 *)(unaff_x22 + 0x3f0) = param_5;
  *(ulong *)(unaff_x22 + 1000) = param_3;
  *(undefined8 *)(unaff_x22 + 0x3e0) = param_2;
  *(undefined8 *)(unaff_x22 + 0x3d8) = param_1;
  puVar1 = &DAT_100fc7e00;
  FUN_1000037f0(&DAT_100fc7e00,&DAT_100c4c898);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x408) = uVar2;
  puVar1 = &DAT_100fc9478;
  FUN_1000037f0(&DAT_100fc9478,&DAT_100c4dfc8);
  *(undefined **)(unaff_x22 + 0x410) = puVar1;
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar3 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x418) = uVar3;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x420) = uVar2;
  lVar4 = 0;
  FUN_10045bd80();
  *(long *)(unaff_x22 + 0x428) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x430) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x438) = uVar2;
  puVar1 = &DAT_100fc8318;
  FUN_1000037f0(&DAT_100fc8318,&DAT_100c4cea0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x440) = uVar2;
  lVar4 = 0;
  FUN_100484870();
  *(long *)(unaff_x22 + 0x448) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x450) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x458) = uVar2;
  puVar1 = &DAT_100fc8320;
  FUN_1000037f0(&DAT_100fc8320,&DAT_100c4cea8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x460) = uVar2;
  lVar4 = 0;
  FUN_10048113c();
  *(long *)(unaff_x22 + 0x468) = lVar4;
  lVar4 = *(long *)(lVar4 + -8);
  *(long *)(unaff_x22 + 0x470) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x478) = uVar2;
  plVar5 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x480) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10048cee4;
  FUN_1004881dc(param_2,param_3 & 0xcfffffffffffffff,param_4);
  return;
}



/* Address: 0x10048cee4 | FUN_10048cee4 */

void FUN_10048cee4(ulong param_1,undefined8 param_2)

{
  ulong *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined1 uVar4;
  bool bVar5;
  long lVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char *pcVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long *unaff_x22;
  long lVar16;
  ulong uVar17;
  undefined8 uVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  ulong uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  
  lVar25 = *unaff_x22;
  lVar16 = *unaff_x22;
  *(ulong *)(lVar25 + 0x488) = param_1;
  *(undefined8 *)(lVar25 + 0x490) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar25 + 0x480));
  uVar17 = param_1;
  FUN_10048b160(param_1,param_2);
  *(ulong *)(lVar25 + 0x498) = uVar17;
  puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
  if (*(long *)(uVar17 + 0x10) == 0) {
LAB_10048cff8:
    _swift_bridgeObjectRelease(uVar17);
    uVar17 = 0x8000000100da8430;
  }
  else {
    _swift_bridgeObjectRetain(uVar17);
    lVar6 = 0x79745f746e617267;
    uVar21 = 0;
    FUN_10046483c();
    if ((uVar21 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar17);
      goto LAB_10048cff8;
    }
    puVar13 = (undefined8 *)(*(long *)(uVar17 + 0x38) + lVar6 * 0x10);
    _Var2.unknown = (undefined *)*puVar13;
    _Var3.unknown = (undefined *)puVar13[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    _swift_bridgeObjectRelease(uVar17);
    if (_Var2.unknown == (undefined *)0xd000000000000012 &&
        _Var3.unknown == (undefined *)0x8000000100da8430) {
      _swift_bridgeObjectRelease(_Var3.unknown);
      lVar6 = *(long *)(uVar17 + 0x10);
joined_r0x00010048d1d4:
      if (lVar6 != 0) {
        _swift_bridgeObjectRetain(uVar17);
        lVar6 = 0x65646f63;
        uVar21 = 0;
        FUN_10046483c();
        uVar14 = uVar17;
        if ((uVar21 & 1) != 0) {
          puVar1 = (ulong *)(*(long *)(uVar17 + 0x38) + lVar6 * 0x10);
          uVar21 = *puVar1;
          *(ulong *)(lVar25 + 0x4a0) = uVar21;
          uVar14 = puVar1[1];
          *(ulong *)(lVar25 + 0x4a8) = uVar14;
          _swift_bridgeObjectRetain(uVar14);
          _swift_bridgeObjectRelease(uVar17);
          uVar21 = uVar21 & 0xffffffffffff;
          if ((uVar14 & 0x2000000000000000) != 0) {
            uVar21 = uVar14 >> 0x38 & 0xf;
          }
          if (uVar21 != 0) {
            _swift_task_switch(FUN_10048d300,*(undefined8 *)(lVar25 + 0x3f8),0);
            return;
          }
        }
        _swift_bridgeObjectRelease(uVar17);
        uVar17 = uVar14;
      }
      puVar13 = (undefined8 *)(lVar25 + 0x1a0);
      _swift_bridgeObjectRelease(uVar17);
      puVar7 = &DAT_100fc81a0;
      FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 4;
      *(undefined8 *)(puVar7 + 0x10) = 2;
      puVar19 = (undefined8 *)(puVar7 + 0x20);
      *puVar19 = 0x726f727265;
      *(undefined **)(puVar7 + 0x48) = puVar9;
      *(undefined1 **)(puVar7 + 0x28) = &DAT_e500000000000000;
      *(undefined8 *)(puVar7 + 0x30) = 0x5f64696c61766e69;
      pcVar10 = "ion_code` is supported";
      uVar11 = 0xed0000746e617267;
      uVar12 = 0xd000000000000012;
      goto LAB_10048d08c;
    }
    bVar5 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x12);
    _swift_bridgeObjectRelease(_Var3.unknown);
    if (bVar5) {
      lVar6 = *(long *)(uVar17 + 0x10);
      goto joined_r0x00010048d1d4;
    }
  }
  puVar13 = (undefined8 *)(lVar25 + 0x158);
  _swift_bridgeObjectRelease(uVar17);
  puVar7 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar7 + 0x18) = 4;
  *(undefined8 *)(puVar7 + 0x10) = 2;
  puVar19 = (undefined8 *)(puVar7 + 0x20);
  *puVar19 = 0x726f727265;
  uVar11 = 0x8000000100da8670;
  *(undefined **)(puVar7 + 0x48) = puVar9;
  *(undefined1 **)(puVar7 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar7 + 0x30) = 0xd000000000000016;
  pcVar10 = "invalid_client_metadata";
  uVar12 = 0xd000000000000026;
LAB_10048d08c:
  *(undefined8 *)(puVar7 + 0x38) = uVar11;
  *(undefined8 *)(puVar7 + 0x50) = 0xd000000000000011;
  *(undefined8 *)(puVar7 + 0x58) = 0x8000000100da85f0;
  *(undefined **)(puVar7 + 0x78) = puVar9;
  *(undefined8 *)(puVar7 + 0x60) = uVar12;
  *(ulong *)(puVar7 + 0x68) = (ulong)pcVar10 | 0x8000000000000000;
  puVar8 = puVar7;
  FUN_10045a404(puVar7);
  _swift_setDeallocating(puVar7);
  puVar9 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar19,2,puVar9);
  FUN_100488440(puVar13,puVar8,400,0x7571655220646142,0xeb00000000747365);
  _swift_bridgeObjectRelease(puVar8);
  FUN_10003bf2c(param_1,param_2);
  uVar12 = *(undefined8 *)(lVar25 + 0x478);
  uVar11 = *(undefined8 *)(lVar25 + 0x460);
  uVar15 = *(undefined8 *)(lVar25 + 0x458);
  uVar18 = *(undefined8 *)(lVar25 + 0x440);
  uVar20 = *(undefined8 *)(lVar25 + 0x438);
  uVar22 = *(undefined8 *)(lVar25 + 0x420);
  uVar23 = *(undefined8 *)(lVar25 + 0x418);
  uVar24 = *(undefined8 *)(lVar25 + 0x408);
  puVar19 = *(undefined8 **)(lVar25 + 0x3d8);
  uVar4 = *(undefined1 *)(puVar13 + 8);
  uVar27 = puVar13[5];
  uVar26 = puVar13[4];
  uVar29 = puVar13[7];
  uVar28 = puVar13[6];
  uVar30 = *puVar13;
  uVar32 = puVar13[3];
  uVar31 = puVar13[2];
  puVar19[1] = puVar13[1];
  *puVar19 = uVar30;
  puVar19[3] = uVar32;
  puVar19[2] = uVar31;
  puVar19[5] = uVar27;
  puVar19[4] = uVar26;
  puVar19[7] = uVar29;
  puVar19[6] = uVar28;
  *(undefined1 *)(puVar19 + 8) = uVar4;
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar20);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar23);
  _swift_task_dealloc(uVar24);
                    /* WARNING: Could not recover jumptable at 0x00010048d1c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar16 + 8))();
  return;
}



/* Address: 0x10048d300 | FUN_10048d300 */

void FUN_10048d300(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 1000);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x3e0);
  FUN_100480dd0(*(undefined8 *)(unaff_x22 + 0x460),*(undefined8 *)(unaff_x22 + 0x4a0),uVar1);
  _swift_bridgeObjectRelease(uVar1);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x4b0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar2;
  _swift_task_switch(FUN_10048d37c,uVar3,uVar2);
  return;
}



/* Address: 0x10048d37c | FUN_10048d37c */

void FUN_10048d37c(void)

{
  ulong *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined1 uVar4;
  bool bVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  long unaff_x22;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  ulong uVar23;
  long lVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  
  uVar18 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar13 = uVar18;
  (**(code **)(*(long *)(unaff_x22 + 0x470) + 0x30))(uVar18,1,*(undefined8 *)(unaff_x22 + 0x468));
  lVar20 = *(long *)(unaff_x22 + 0x498);
  if ((int)uVar13 == 1) {
    puVar16 = (undefined8 *)(unaff_x22 + 0x1e8);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x488);
    _swift_bridgeObjectRelease(lVar20);
    FUN_100005808(uVar18,&DAT_100fc8320,&DAT_100c4cea8);
    puVar9 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 4;
    *(undefined8 *)(puVar9 + 0x10) = 2;
    *(undefined8 *)(puVar9 + 0x20) = 0x726f727265;
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar9 + 0x30) = 0x5f64696c61766e69;
    *(undefined8 *)(puVar9 + 0x38) = 0xed0000746e617267;
    *(undefined **)(puVar9 + 0x48) = puVar10;
    *(undefined8 *)(puVar9 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar9 + 0x78) = puVar10;
    *(undefined8 *)(puVar9 + 0x58) = 0x8000000100da85f0;
    *(undefined8 *)(puVar9 + 0x60) = 0xd000000000000026;
    *(undefined8 *)(puVar9 + 0x68) = 0x8000000100da8720;
    puVar7 = puVar9;
    FUN_10045a404();
    _swift_setDeallocating(puVar9);
    puVar10 = &DAT_100fc7d78;
    FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
    _swift_arrayDestroy(puVar9 + 0x20,2,puVar10);
    _swift_deallocClassInstance(puVar9,0x20,7);
    FUN_100488440(puVar16,puVar7,400,0x7571655220646142,0xeb00000000747365);
    _swift_bridgeObjectRelease(puVar7);
    FUN_10003bf2c(uVar17,uVar13);
    goto LAB_10048d7c8;
  }
  FUN_1000523d8(uVar18,*(undefined8 *)(unaff_x22 + 0x478),FUN_10048113c);
  uVar14 = *(ulong *)(unaff_x22 + 0x498);
  if (*(long *)(lVar20 + 0x10) == 0) {
LAB_10048d664:
    puVar16 = (undefined8 *)(unaff_x22 + 0x230);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x488);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
    _swift_bridgeObjectRelease(uVar14);
    pcVar12 = ", or already-used code";
    puVar9 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 4;
    *(undefined8 *)(puVar9 + 0x10) = 2;
    puVar11 = (undefined8 *)(puVar9 + 0x20);
    *puVar11 = 0x726f727265;
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar9 + 0x30) = 0x5f64696c61766e69;
    *(undefined8 *)(puVar9 + 0x38) = 0xef74736575716572;
    *(undefined **)(puVar9 + 0x48) = puVar10;
    *(undefined8 *)(puVar9 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar9 + 0x78) = puVar10;
    *(undefined8 *)(puVar9 + 0x58) = 0x8000000100da85f0;
    *(undefined8 *)(puVar9 + 0x60) = 0xd00000000000001b;
LAB_10048d730:
    *(ulong *)(puVar9 + 0x68) = (ulong)pcVar12 | 0x8000000000000000;
    puVar7 = puVar9;
    FUN_10045a404();
    _swift_setDeallocating(puVar9);
    puVar10 = &DAT_100fc7d78;
    FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
    _swift_arrayDestroy(puVar11,2,puVar10);
    _swift_deallocClassInstance(puVar9,0x20,7);
    FUN_100488440(puVar16,puVar7,400,0x7571655220646142,0xeb00000000747365);
    _swift_bridgeObjectRelease(puVar7);
    FUN_10003bf2c(uVar17,uVar18);
  }
  else {
    _swift_bridgeObjectRetain(uVar14);
    lVar20 = 0x7265765f65646f63;
    uVar8 = 0xed00007265696669;
    FUN_10046483c();
    uVar14 = *(ulong *)(unaff_x22 + 0x498);
    uVar23 = uVar14;
    if ((uVar8 & 1) == 0) {
LAB_10048d65c:
      _swift_bridgeObjectRelease(uVar23);
      goto LAB_10048d664;
    }
    puVar1 = (ulong *)(*(long *)(uVar14 + 0x38) + lVar20 * 0x10);
    uVar6 = *puVar1;
    uVar15 = puVar1[1];
    _swift_bridgeObjectRetain(uVar15);
    _swift_bridgeObjectRelease(uVar14);
    uVar8 = uVar6 & 0xffffffffffff;
    if ((uVar15 & 0x2000000000000000) != 0) {
      uVar8 = uVar15 >> 0x38 & 0xf;
    }
    uVar23 = *(ulong *)(unaff_x22 + 0x498);
    uVar14 = uVar15;
    if (uVar8 == 0) goto LAB_10048d65c;
    if (*(long *)(uVar23 + 0x10) == 0) {
LAB_10048d870:
      puVar16 = (undefined8 *)(unaff_x22 + 0x278);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x488);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
      _swift_bridgeObjectRelease(uVar15);
      _swift_bridgeObjectRelease(uVar23);
      pcVar12 = "`code_verifier` is required";
      puVar9 = &DAT_100fc81a0;
      FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 4;
      *(undefined8 *)(puVar9 + 0x10) = 2;
      puVar11 = (undefined8 *)(puVar9 + 0x20);
      *puVar11 = 0x726f727265;
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
      *(undefined8 *)(puVar9 + 0x30) = 0x5f64696c61766e69;
      *(undefined8 *)(puVar9 + 0x38) = 0xed0000746e617267;
      *(undefined **)(puVar9 + 0x48) = puVar10;
      *(undefined8 *)(puVar9 + 0x50) = 0xd000000000000011;
      *(undefined **)(puVar9 + 0x78) = puVar10;
      uVar19 = 0xd000000000000017;
LAB_10048d93c:
      *(undefined8 *)(puVar9 + 0x58) = 0x8000000100da85f0;
      *(undefined8 *)(puVar9 + 0x60) = uVar19;
      goto LAB_10048d730;
    }
    _swift_bridgeObjectRetain(uVar23);
    lVar20 = 0x7463657269646572;
    uVar14 = 0xec0000006972755f;
    FUN_10046483c();
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar15);
      uVar15 = *(ulong *)(unaff_x22 + 0x498);
      uVar23 = uVar15;
      goto LAB_10048d870;
    }
    lVar21 = *(long *)(unaff_x22 + 0x498);
    lVar24 = *(long *)(unaff_x22 + 0x478);
    puVar16 = (undefined8 *)(*(long *)(lVar21 + 0x38) + lVar20 * 0x10);
    _Var2.unknown = (undefined *)*puVar16;
    _Var3.unknown = (undefined *)puVar16[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    _swift_bridgeObjectRelease(lVar21);
    puVar9 = *(undefined **)(lVar24 + 0x20);
    *(undefined **)(unaff_x22 + 0x4c0) = puVar9;
    puVar10 = *(undefined **)(lVar24 + 0x28);
    *(undefined **)(unaff_x22 + 0x4c8) = puVar10;
    if (_Var2.unknown == puVar9 && _Var3.unknown == puVar10) {
      _swift_bridgeObjectRelease(_Var3.unknown);
    }
    else {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var3,(_StringComparisonResult)(__int8)puVar9);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (!bVar5) {
        uVar23 = *(ulong *)(unaff_x22 + 0x498);
        goto LAB_10048d870;
      }
    }
    if (*(long *)(*(long *)(unaff_x22 + 0x498) + 0x10) == 0) {
LAB_10048d9e0:
      _swift_bridgeObjectRelease(uVar15);
      uVar15 = *(ulong *)(unaff_x22 + 0x498);
LAB_10048d9ec:
      puVar16 = (undefined8 *)(unaff_x22 + 0x2c0);
      uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
      uVar17 = *(undefined8 *)(unaff_x22 + 0x488);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
      _swift_bridgeObjectRelease(uVar15);
      pcVar12 = "`redirect_uri` mismatch";
      puVar9 = &DAT_100fc81a0;
      FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
      _swift_allocObject();
      *(undefined8 *)(puVar9 + 0x18) = 4;
      *(undefined8 *)(puVar9 + 0x10) = 2;
      puVar11 = (undefined8 *)(puVar9 + 0x20);
      *puVar11 = 0x726f727265;
      puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
      *(undefined8 *)(puVar9 + 0x30) = 0x5f64696c61766e69;
      *(undefined8 *)(puVar9 + 0x38) = 0xed0000746e617267;
      *(undefined **)(puVar9 + 0x48) = puVar10;
      *(undefined8 *)(puVar9 + 0x50) = 0xd000000000000011;
      *(undefined **)(puVar9 + 0x78) = puVar10;
      uVar19 = 0xd000000000000014;
      goto LAB_10048d93c;
    }
    _swift_bridgeObjectRetain(*(long *)(unaff_x22 + 0x498));
    lVar20 = 0x695f746e65696c63;
    uVar14 = 0;
    FUN_10046483c();
    if ((uVar14 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar15);
      uVar15 = *(ulong *)(unaff_x22 + 0x498);
      goto LAB_10048d9e0;
    }
    lVar21 = *(long *)(unaff_x22 + 0x498);
    lVar24 = *(long *)(unaff_x22 + 0x478);
    puVar16 = (undefined8 *)(*(long *)(lVar21 + 0x38) + lVar20 * 0x10);
    _Var2.unknown = (undefined *)*puVar16;
    _Var3.unknown = (undefined *)puVar16[1];
    _swift_bridgeObjectRetain(_Var3.unknown);
    _swift_bridgeObjectRelease_n(lVar21,2);
    puVar9 = *(undefined **)(lVar24 + 0x10);
    *(undefined **)(unaff_x22 + 0x4d0) = puVar9;
    puVar10 = *(undefined **)(lVar24 + 0x18);
    *(undefined **)(unaff_x22 + 0x4d8) = puVar10;
    if ((_Var2.unknown != puVar9) || (_Var3.unknown != puVar10)) {
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var2,_Var3,(_StringComparisonResult)(__int8)puVar9);
      _swift_bridgeObjectRelease(_Var3.unknown);
      if (bVar5) goto LAB_10048dad4;
      goto LAB_10048d9ec;
    }
    _swift_bridgeObjectRelease(_Var3.unknown);
LAB_10048dad4:
    FUN_10048f850(uVar6,uVar15,*(undefined8 *)(*(long *)(unaff_x22 + 0x478) + 0x30),
                  *(undefined8 *)(*(long *)(unaff_x22 + 0x478) + 0x38));
    _swift_bridgeObjectRelease(uVar15);
    if ((uVar6 & 1) != 0) {
      _swift_task_switch(FUN_10048dc7c,*(undefined8 *)(unaff_x22 + 0x3f0),0);
      return;
    }
    puVar16 = (undefined8 *)(unaff_x22 + 0x308);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x490);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x488);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
    puVar9 = &DAT_100fc81a0;
    FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
    _swift_allocObject();
    *(undefined8 *)(puVar9 + 0x18) = 4;
    *(undefined8 *)(puVar9 + 0x10) = 2;
    *(undefined8 *)(puVar9 + 0x20) = 0x726f727265;
    puVar10 = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined1 **)(puVar9 + 0x28) = &DAT_e500000000000000;
    *(undefined8 *)(puVar9 + 0x30) = 0x5f64696c61766e69;
    *(undefined8 *)(puVar9 + 0x38) = 0xed0000746e617267;
    *(undefined **)(puVar9 + 0x48) = puVar10;
    *(undefined8 *)(puVar9 + 0x50) = 0xd000000000000011;
    *(undefined **)(puVar9 + 0x78) = puVar10;
    *(undefined8 *)(puVar9 + 0x58) = 0x8000000100da85f0;
    *(undefined8 *)(puVar9 + 0x60) = 0xd000000000000016;
    *(undefined8 *)(puVar9 + 0x68) = 0x8000000100da87b0;
    puVar7 = puVar9;
    FUN_10045a404();
    _swift_setDeallocating(puVar9);
    puVar10 = &DAT_100fc7d78;
    FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
    _swift_arrayDestroy(puVar9 + 0x20,2,puVar10);
    _swift_deallocClassInstance(puVar9,0x20,7);
    FUN_100488440(puVar16,puVar7,400,0x7571655220646142,0xeb00000000747365);
    _swift_bridgeObjectRelease(puVar7);
    FUN_10003bf2c(uVar17,uVar18);
  }
  FUN_10005241c(uVar13,FUN_10048113c);
LAB_10048d7c8:
  uVar13 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar25 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar26 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar27 = *(undefined8 *)(unaff_x22 + 0x408);
  puVar11 = *(undefined8 **)(unaff_x22 + 0x3d8);
  uVar4 = *(undefined1 *)(puVar16 + 8);
  uVar29 = puVar16[5];
  uVar28 = puVar16[4];
  uVar31 = puVar16[7];
  uVar30 = puVar16[6];
  uVar32 = *puVar16;
  uVar34 = puVar16[3];
  uVar33 = puVar16[2];
  puVar11[1] = puVar16[1];
  *puVar11 = uVar32;
  puVar11[3] = uVar34;
  puVar11[2] = uVar33;
  puVar11[5] = uVar29;
  puVar11[4] = uVar28;
  puVar11[7] = uVar31;
  puVar11[6] = uVar30;
  *(undefined1 *)(puVar11 + 8) = uVar4;
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar17);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar25);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar27);
                    /* WARNING: Could not recover jumptable at 0x00010048d85c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048dc7c | FUN_10048dc7c */

void FUN_10048dc7c(void)

{
  bool bVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x3f0);
  _swift_beginAccess(lVar3 + 0x70,unaff_x22 + 0x3c0,0,0);
  lVar3 = *(long *)(lVar3 + 0x70);
  if (*(long *)(lVar3 + 0x10) == 0) {
    bVar1 = true;
  }
  else {
    uVar2 = *(ulong *)(unaff_x22 + 0x4d8);
    lVar4 = *(long *)(unaff_x22 + 0x4d0);
    _swift_bridgeObjectRetain(lVar3);
    FUN_10046483c(lVar4);
    bVar1 = (uVar2 & 1) == 0;
    if (!bVar1) {
      FUN_1000c495c(*(long *)(lVar3 + 0x38) + *(long *)(*(long *)(unaff_x22 + 0x450) + 0x48) * lVar4
                    ,*(undefined8 *)(unaff_x22 + 0x440),FUN_100484870);
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  (**(code **)(*(long *)(unaff_x22 + 0x450) + 0x38))
            (*(undefined8 *)(unaff_x22 + 0x440),bVar1,1,*(undefined8 *)(unaff_x22 + 0x448));
  _swift_task_switch(FUN_10048dd54,*(undefined8 *)(unaff_x22 + 0x4b0),
                     *(undefined8 *)(unaff_x22 + 0x4b8));
  return;
}



/* Address: 0x10048dd54 | FUN_10048dd54 */

void FUN_10048dd54(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar3 = uVar4;
  (**(code **)(*(long *)(unaff_x22 + 0x450) + 0x30))(uVar4,1,*(undefined8 *)(unaff_x22 + 0x448));
  if ((int)uVar3 == 1) {
    uVar3 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x4c0);
    FUN_100005808(uVar4,&DAT_100fc8318,&DAT_100c4cea0);
    puVar5 = &DAT_100fc8330;
    FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
    _swift_allocObject();
    *(undefined8 *)(puVar5 + 0x18) = 2;
    *(undefined8 *)(puVar5 + 0x10) = 1;
    *(undefined8 *)(puVar5 + 0x20) = uVar7;
    *(undefined8 *)(puVar5 + 0x28) = uVar6;
    _swift_bridgeObjectRetain(uVar3);
    _swift_bridgeObjectRetain(uVar6);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x4d0);
    uVar6 = uVar4;
    uVar7 = uVar3;
  }
  else {
    lVar2 = *(long *)(unaff_x22 + 0x458);
    FUN_1000523d8(uVar4,lVar2,FUN_100484870);
    uVar3 = *(undefined8 *)(lVar2 + 0x10);
    uVar4 = *(undefined8 *)(lVar2 + 0x18);
    puVar5 = *(undefined **)(lVar2 + 0x20);
    _swift_bridgeObjectRetain(uVar4);
    _swift_bridgeObjectRetain(puVar5);
    FUN_10005241c(lVar2,FUN_100484870);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x4d8);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x4d0);
  }
  *(undefined8 *)(unaff_x22 + 0x4e8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x4e0) = uVar3;
  puVar8 = *(undefined8 **)(unaff_x22 + 0x438);
  lVar2 = *(long *)(unaff_x22 + 0x430);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x428);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x408);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x400);
  _swift_bridgeObjectRetain(uVar6);
  Foundation::Date::init();
  *puVar8 = uVar7;
  puVar8[1] = uVar6;
  puVar8[2] = puVar5;
  FUN_10045de64(uVar3,uVar4);
  *(char *)(unaff_x22 + 0x151) = (char)uVar3;
  FUN_1000c495c(puVar8,uVar10,FUN_10045bd80);
  (**(code **)(lVar2 + 0x38))(uVar10,0,1,uVar9);
  _swift_task_switch(FUN_10048df0c,uVar1,0);
  return;
}



/* Address: 0x10048df0c | FUN_10048df0c */

/* WARNING: Removing unreachable block (ram,0x00010048df50) */

void FUN_10048df0c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x4e0);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x420);
  FUN_100461288(uVar1,uVar2,*(undefined8 *)(unaff_x22 + 0x4e8),*(undefined1 *)(unaff_x22 + 0x151),
                *(undefined8 *)(unaff_x22 + 0x408));
  *(undefined8 *)(unaff_x22 + 0x4f0) = 0;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4e8);
  *(undefined8 *)(unaff_x22 + 0x4f8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x500) = uVar1;
  *(undefined4 *)(unaff_x22 + 0x154) = *(undefined4 *)(*(long *)(unaff_x22 + 0x410) + 0x30);
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x408),&DAT_100fc7e00,&DAT_100c4c898);
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_switch(FUN_10048dfc8,*(undefined8 *)(unaff_x22 + 0x4b0),
                     *(undefined8 *)(unaff_x22 + 0x4b8));
  return;
}



/* Address: 0x10048dfc8 | FUN_10048dfc8 */

void FUN_10048dfc8(void)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long unaff_x22;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4f8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x438);
  lVar2 = *(long *)(unaff_x22 + 0x420);
  lVar14 = *(long *)(unaff_x22 + 0x418);
  lVar13 = *(long *)(unaff_x22 + 0x410);
  puVar6 = (undefined8 *)(lVar2 + *(int *)(unaff_x22 + 0x154));
  *puVar6 = *(undefined8 *)(unaff_x22 + 0x500);
  puVar6[1] = uVar7;
  FUN_10048f5f4(lVar2,lVar14);
  puVar6 = (undefined8 *)(lVar14 + *(int *)(lVar13 + 0x30));
  uVar7 = *puVar6;
  uVar9 = puVar6[1];
  FUN_10005241c(lVar14,FUN_10045ba0c);
  puVar3 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_allocObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  *(undefined8 *)(puVar3 + 0x20) = 0x745f737365636361;
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(puVar3 + 0x28) = 0xec0000006e656b6f;
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x38) = uVar9;
  *(undefined **)(puVar3 + 0x48) = puVar5;
  *(undefined8 *)(puVar3 + 0x50) = 0x79745f6e656b6f74;
  *(undefined **)(puVar3 + 0x78) = puVar5;
  *(undefined8 *)(puVar3 + 0x58) = 0xea00000000006570;
  *(undefined8 *)(puVar3 + 0x60) = 0x726572616542;
  *(undefined1 **)(puVar3 + 0x68) = &DAT_e600000000000000;
  _swift_bridgeObjectRetain(uVar9);
  puVar4 = puVar3;
  FUN_10045a404(puVar3);
  _swift_setDeallocating(puVar3);
  puVar5 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar3 + 0x20,2,puVar5);
  _swift_deallocClassInstance(puVar3,0x20,7);
  FUN_100488440(unaff_x22 + 0x350,puVar4,200,0x4b4f,&SUB_e200000000000000);
  FUN_10003bf2c(uVar12,uVar11);
  _swift_bridgeObjectRelease(puVar4);
  _swift_bridgeObjectRelease(uVar9);
  FUN_10005241c(uVar8,FUN_10045bd80);
  FUN_10005241c(uVar10,FUN_10048113c);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x408);
  puVar6 = *(undefined8 **)(unaff_x22 + 0x3d8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x390);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x380);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x350);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x368);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x360);
  puVar6[1] = *(undefined8 *)(unaff_x22 + 0x358);
  *puVar6 = uVar21;
  puVar6[3] = uVar23;
  puVar6[2] = uVar22;
  puVar6[5] = uVar18;
  puVar6[4] = uVar17;
  puVar6[7] = uVar20;
  puVar6[6] = uVar19;
  *(undefined1 *)(puVar6 + 8) = uVar1;
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
                    /* WARNING: Could not recover jumptable at 0x00010048e210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048e214 | FUN_10048e214 */

void FUN_10048e214(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x4f0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x490);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x488);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x438);
  FUN_100005808(*(undefined8 *)(unaff_x22 + 0x408),&DAT_100fc7e00,&DAT_100c4c898);
  puVar2 = &DAT_100c4dfd0;
  _swift_getKeyPath(&DAT_100c4dfd0);
  puVar3 = &DAT_100fc7c08;
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  FUN_1000da768(unaff_x22 + 0x398);
  _swift_release(puVar2);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x3b0);
  lVar13 = *(long *)(unaff_x22 + 0x3b8);
  FUN_100004640(unaff_x22 + 0x398,uVar12);
  puVar2 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  puVar4 = puVar2;
  _swift_allocObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = 0x6573616870;
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined **)(puVar4 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar4 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar4 + 0x30) = 0x6f742d687475616f;
  *(undefined8 *)(puVar4 + 0x38) = 0xeb000000006e656b;
  puVar5 = puVar4;
  FUN_10045a404();
  _swift_setDeallocating(puVar4);
  FUN_100005808(puVar4 + 0x20,&DAT_100fc7d78,&DAT_100c4c740);
  _swift_deallocClassInstance(puVar4,0x20,7);
  (**(code **)(lVar13 + 0x28))(uVar10,puVar5,uVar12,lVar13);
  _swift_bridgeObjectRelease(puVar5);
  FUN_100004594(unaff_x22 + 0x398);
  _swift_allocObject(puVar2,0x80,7);
  *(undefined8 *)(puVar2 + 0x20) = 0x726f727265;
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar2 + 0x30) = 0x655f726576726573;
  *(undefined8 *)(puVar2 + 0x38) = 0xec000000726f7272;
  *(undefined **)(puVar2 + 0x48) = puVar3;
  *(undefined8 *)(puVar2 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar2 + 0x78) = puVar3;
  *(undefined8 *)(puVar2 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar2 + 0x60) = 0xd000000000000017;
  *(undefined8 *)(puVar2 + 0x68) = 0x8000000100da87d0;
  puVar4 = puVar2;
  FUN_10045a404();
  _swift_setDeallocating(puVar2);
  puVar3 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar3);
  _swift_deallocClassInstance(puVar2,0x20,7);
  FUN_100488440(unaff_x22 + 0x110,puVar4,500,0xd000000000000015,0x8000000100da87f0);
  FUN_10003bf2c(uVar6,uVar11);
  _swift_bridgeObjectRelease(puVar4);
  _swift_errorRelease(uVar10);
  FUN_10005241c(uVar8,FUN_10045bd80);
  FUN_10005241c(uVar7,FUN_10048113c);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x478);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x460);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x458);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x438);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x408);
  puVar9 = *(undefined8 **)(unaff_x22 + 0x3d8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x150);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x138);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x148);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar20 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x120);
  puVar9[1] = *(undefined8 *)(unaff_x22 + 0x118);
  *puVar9 = uVar20;
  puVar9[3] = uVar22;
  puVar9[2] = uVar21;
  puVar9[5] = uVar17;
  puVar9[4] = uVar16;
  puVar9[7] = uVar19;
  puVar9[6] = uVar18;
  *(undefined1 *)(puVar9 + 8) = uVar1;
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar11);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010048e588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048e58c | FUN_10048e58c */

void FUN_10048e58c(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  ulong uVar2;
  UUID UVar3;
  ulong uVar4;
  Logger LVar5;
  long *plVar6;
  long lVar7;
  long unaff_x22;
  String subsystem;
  String category;
  
  *(ulong *)(unaff_x22 + 0x1e8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_5;
  *(undefined8 *)(unaff_x22 + 0x1d8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1e0) = param_2;
  puVar1 = &DAT_100fc8170;
  FUN_1000037f0(&DAT_100fc8170,&DAT_100c4cde8);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1f8) = uVar2;
  UVar3 = Foundation::UUID::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x200) = UVar3.unknown;
  lVar7 = *(long *)(UVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x208) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar2;
  puVar1 = &DAT_100fc8178;
  FUN_1000037f0(&DAT_100fc8178,&DAT_100c4cdf0);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x218) = uVar2;
  lVar7 = 0;
  FUN_10045ba0c();
  *(long *)(unaff_x22 + 0x220) = lVar7;
  lVar7 = *(long *)(lVar7 + -8);
  *(long *)(unaff_x22 + 0x228) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xf;
  uVar4 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x230) = uVar4;
  uVar2 = uVar2 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x238) = uVar2;
  LVar5 = os::Logger::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x240) = LVar5.unknown;
  lVar7 = *(long *)(LVar5.unknown + -8);
  *(long *)(unaff_x22 + 0x248) = lVar7;
  uVar2 = *(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x250) = uVar2;
  subsystem.bridgeObject = (void *)0x8000000100da85b0;
  subsystem.str = (char *)0xd000000000000015;
  category.bridgeObject = &DAT_e400000000000000;
  category.str = (char *)0x68747561;
  os::Logger::init(subsystem,category);
  plVar6 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 600) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10048e700;
  FUN_1004881dc(param_2,param_3 & 0xcfffffffffffffff,param_4);
  return;
}



/* Address: 0x10048e700 | FUN_10048e700 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10048e700(undefined *param_1,undefined8 param_2)

{
  ulong *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined1 uVar4;
  bool bVar5;
  undefined *puVar6;
  long lVar7;
  OS_os_log *pOVar8;
  undefined2 *puVar9;
  OS_os_log *pOVar10;
  OS_os_log *pOVar11;
  undefined *puVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long lVar25;
  undefined8 uVar26;
  ulong uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  long *unaff_x22;
  long lVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  Logger LVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  long lVar36;
  undefined8 *puVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  
  lVar36 = *unaff_x22;
  lVar30 = *unaff_x22;
  *(undefined **)(lVar36 + 0x260) = param_1;
  *(undefined8 *)(lVar36 + 0x268) = param_2;
  _swift_task_dealloc(*(undefined8 *)(lVar36 + 600));
  puVar6 = param_1;
  FUN_10048b160(param_1,param_2);
  LVar33.unknown = puVar6;
  if (*(long *)(puVar6 + 0x10) != 0) {
    _swift_bridgeObjectRetain(puVar6);
    lVar7 = 0x6e656b6f74;
    uVar27 = 0;
    FUN_10046483c();
    if ((uVar27 & 1) != 0) {
      puVar1 = (ulong *)(*(long *)(puVar6 + 0x38) + lVar7 * 0x10);
      uVar27 = *puVar1;
      *(ulong *)(lVar36 + 0x270) = uVar27;
      LVar33.unknown = (undefined *)puVar1[1];
      *(undefined **)(lVar36 + 0x278) = LVar33.unknown;
      _swift_bridgeObjectRetain(LVar33.unknown);
      _swift_bridgeObjectRelease(puVar6);
      uVar27 = uVar27 & 0xffffffffffff;
      if (((ulong)LVar33.unknown & 0x2000000000000000) != 0) {
        uVar27 = (ulong)LVar33.unknown >> 0x38 & 0xf;
      }
      if (uVar27 != 0) {
        if (*(long *)(puVar6 + 0x10) != 0) {
          _swift_bridgeObjectRetain(puVar6);
          lVar7 = 0x79745f6e656b6f74;
          uVar27 = 0;
          FUN_10046483c();
          if ((uVar27 & 1) == 0) {
            _swift_bridgeObjectRelease(puVar6);
          }
          else {
            puVar37 = (undefined8 *)(*(long *)(puVar6 + 0x38) + lVar7 * 0x10);
            _Var2.unknown = (undefined *)*puVar37;
            _Var3.unknown = (undefined *)puVar37[1];
            _swift_bridgeObjectRetain(_Var3.unknown);
            _swift_bridgeObjectRelease_n(puVar6,2);
            if ((_Var2.unknown != (undefined *)0x745f737365636361) ||
               (puVar6 = (undefined *)0xec0000006e656b6f,
               _Var3.unknown != (undefined *)0xec0000006e656b6f)) {
              bVar5 = Swift::_stringCompareWithSmolCheck(_Var2,_Var3,(_StringComparisonResult)0x61);
              _swift_bridgeObjectRelease(_Var3.unknown);
              if (bVar5) goto LAB_10048ed00;
              puVar37 = (undefined8 *)(lVar36 + 0x158);
              _swift_bridgeObjectRelease();
              pOVar8 = os::Logger::get_logObject(LVar33);
              pOVar10 = pOVar8;
              static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info
                        ();
              pOVar11 = pOVar8;
              _os_log_type_enabled(pOVar8,(uint)pOVar10 & 0xff);
              if ((int)pOVar11 != 0) {
                puVar9 = (undefined2 *)0x2;
                _swift_slowAlloc(2,0xffffffffffffffff);
                *puVar9 = 0;
                __os_log_impl(0x100000000,pOVar8,(uint)pOVar10 & 0xff,
                              "revoke unsupported_token_type",puVar9,2);
                _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
              }
              puVar6 = &DAT_100fc81a0;
              FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
              _swift_initStackObject();
              *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
              *(undefined8 *)(puVar6 + 0x18) = 4;
              *(undefined8 *)(puVar6 + 0x10) = 2;
              puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
              *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
              *(undefined8 *)(puVar6 + 0x30) = 0xd000000000000016;
              *(undefined8 *)(puVar6 + 0x38) = 0x8000000100da8650;
              *(undefined **)(puVar6 + 0x48) = puVar13;
              *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
              *(undefined **)(puVar6 + 0x78) = puVar13;
              *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
              *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000030;
              *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da8610;
              puVar12 = puVar6;
              FUN_10045a404();
              _swift_setDeallocating(puVar6);
              puVar13 = &DAT_100fc7d78;
              FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
              _swift_arrayDestroy(puVar6 + 0x20,2,puVar13);
              FUN_100488440(puVar37,puVar12,0x1f5,0x6c706d4920746f4e,0xef6465746e656d65);
              _swift_bridgeObjectRelease(puVar12);
              FUN_10003bf2c(param_1,param_2);
              lVar7 = 0x168;
              lVar14 = 0x160;
              lVar18 = 0x170;
              lVar20 = 0x198;
              lVar22 = 400;
              lVar23 = 0x188;
              lVar24 = 0x180;
              lVar25 = 0x178;
              goto LAB_10048ec18;
            }
          }
        }
        _swift_bridgeObjectRelease(puVar6);
LAB_10048ed00:
        _swift_task_switch(FUN_10048ed30,*(undefined8 *)(lVar36 + 0x1f0),0);
        return;
      }
    }
    _swift_bridgeObjectRelease(puVar6);
  }
  puVar37 = (undefined8 *)(lVar36 + 0x110);
  _swift_bridgeObjectRelease();
  pOVar8 = os::Logger::get_logObject(LVar33);
  pOVar10 = pOVar8;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar11 = pOVar8;
  _os_log_type_enabled(pOVar8,(uint)pOVar10 & 0xff);
  if ((int)pOVar11 != 0) {
    puVar9 = (undefined2 *)0x2;
    _swift_slowAlloc(2,0xffffffffffffffff);
    *puVar9 = 0;
    __os_log_impl(0x100000000,pOVar8,(uint)pOVar10 & 0xff,"revoke invalid_request",puVar9,2);
    _swift_slowDealloc(puVar9,0xffffffffffffffff,0xffffffffffffffff);
  }
  puVar6 = &DAT_100fc81a0;
  FUN_1000037f0(&DAT_100fc81a0,&DAT_100c4ce08);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 4;
  *(undefined8 *)(puVar6 + 0x10) = 2;
  *(undefined8 *)(puVar6 + 0x20) = 0x726f727265;
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
  *(undefined8 *)(puVar6 + 0x30) = 0x5f64696c61766e69;
  *(undefined8 *)(puVar6 + 0x38) = 0xef74736575716572;
  *(undefined **)(puVar6 + 0x48) = puVar13;
  *(undefined8 *)(puVar6 + 0x50) = 0xd000000000000011;
  *(undefined **)(puVar6 + 0x78) = puVar13;
  *(undefined8 *)(puVar6 + 0x58) = 0x8000000100da85f0;
  *(undefined8 *)(puVar6 + 0x60) = 0xd000000000000013;
  *(undefined8 *)(puVar6 + 0x68) = 0x8000000100da85d0;
  puVar12 = puVar6;
  FUN_10045a404();
  _swift_setDeallocating(puVar6);
  puVar13 = &DAT_100fc7d78;
  FUN_1000037f0(&DAT_100fc7d78,&DAT_100c4c740);
  _swift_arrayDestroy(puVar6 + 0x20,2,puVar13);
  FUN_100488440(puVar37,puVar12,400,0x7571655220646142,0xeb00000000747365);
  FUN_10003bf2c(param_1,param_2);
  _swift_bridgeObjectRelease(puVar12);
  lVar7 = 0x120;
  lVar14 = 0x118;
  lVar18 = 0x128;
  lVar20 = 0x150;
  lVar22 = 0x148;
  lVar23 = 0x140;
  lVar24 = 0x138;
  lVar25 = 0x130;
LAB_10048ec18:
  uVar4 = *(undefined1 *)(lVar36 + lVar20);
  uVar21 = *(undefined8 *)(lVar36 + lVar22);
  uVar35 = *(undefined8 *)(lVar36 + lVar23);
  uVar31 = *(undefined8 *)(lVar36 + lVar24);
  uVar34 = *(undefined8 *)(lVar36 + lVar25);
  uVar38 = *(undefined8 *)(lVar36 + lVar18);
  uVar32 = *(undefined8 *)(lVar36 + lVar7);
  uVar39 = *(undefined8 *)(lVar36 + lVar14);
  uVar29 = *puVar37;
  uVar28 = *(undefined8 *)(lVar36 + 0x250);
  uVar26 = *(undefined8 *)(lVar36 + 0x238);
  uVar15 = *(undefined8 *)(lVar36 + 0x230);
  uVar16 = *(undefined8 *)(lVar36 + 0x218);
  uVar19 = *(undefined8 *)(lVar36 + 0x210);
  uVar17 = *(undefined8 *)(lVar36 + 0x1f8);
  puVar37 = *(undefined8 **)(lVar36 + 0x1d8);
  (**(code **)(*(long *)(lVar36 + 0x248) + 8))(uVar28,*(undefined8 *)(lVar36 + 0x240));
  *puVar37 = uVar29;
  puVar37[1] = uVar39;
  puVar37[2] = uVar32;
  puVar37[3] = uVar38;
  puVar37[4] = uVar34;
  puVar37[5] = uVar31;
  puVar37[6] = uVar35;
  puVar37[7] = uVar21;
  *(undefined1 *)(puVar37 + 8) = uVar4;
  _swift_task_dealloc(uVar28);
  _swift_task_dealloc(uVar26);
  _swift_task_dealloc(uVar15);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar19);
  _swift_task_dealloc(uVar17);
                    /* WARNING: Could not recover jumptable at 0x00010048ecec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar30 + 8))();
  return;
}



/* Address: 0x10048ed30 | FUN_10048ed30 */

void FUN_10048ed30(void)

{
  bool bVar1;
  ulong uVar2;
  code *pcVar3;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x278);
  lVar4 = *(long *)(unaff_x22 + 0x270);
  lVar10 = *(long *)(unaff_x22 + 0x1f0);
  _swift_bridgeObjectRetain(uVar6);
  FUN_1004900d0(lVar4);
  _swift_beginAccess(lVar10 + 0x78,unaff_x22 + 0x1a0,0,0);
  uVar7 = *(ulong *)(lVar10 + 0x78);
  if (*(long *)(uVar7 + 0x10) == 0) {
    (**(code **)(*(long *)(unaff_x22 + 0x208) + 0x38))
              (*(undefined8 *)(unaff_x22 + 0x1f8),1,1,*(undefined8 *)(unaff_x22 + 0x200));
  }
  else {
    _swift_bridgeObjectRetain(uVar7);
    uVar2 = uVar6;
    FUN_10046483c(lVar4);
    lVar10 = *(long *)(unaff_x22 + 0x208);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
    if ((uVar2 & 1) == 0) {
      (**(code **)(lVar10 + 0x38))(uVar5,1,1,uVar8);
    }
    else {
      (**(code **)(lVar10 + 0x10))
                (uVar5,*(long *)(uVar7 + 0x38) + *(long *)(lVar10 + 0x48) * lVar4,uVar8);
      (**(code **)(lVar10 + 0x38))(uVar5,0,1,uVar8);
    }
    _swift_bridgeObjectRelease(uVar6);
    uVar6 = uVar7;
  }
  lVar4 = *(long *)(unaff_x22 + 0x208);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1f8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_bridgeObjectRelease(uVar6);
  (**(code **)(lVar4 + 0x30))(uVar5,1,uVar8);
  if ((int)uVar5 == 1) {
    lVar4 = *(long *)(unaff_x22 + 0x228);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x1f8);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x278));
    FUN_100005808(uVar9,&DAT_100fc8170,&DAT_100c4cde8);
    (**(code **)(lVar4 + 0x38))(uVar5,1,1,uVar8);
  }
  else {
    lVar4 = *(long *)(unaff_x22 + 0x1f0);
    (**(code **)(*(long *)(unaff_x22 + 0x208) + 0x20))
              (*(undefined8 *)(unaff_x22 + 0x210),*(undefined8 *)(unaff_x22 + 0x1f8),
               *(undefined8 *)(unaff_x22 + 0x200));
    uVar6 = unaff_x22 + 0x1b8;
    _swift_beginAccess(lVar4 + 0x70,uVar6,0,0);
    lVar4 = *(long *)(lVar4 + 0x70);
    if (*(long *)(lVar4 + 0x10) == 0) {
      (**(code **)(*(long *)(unaff_x22 + 0x228) + 0x38))
                (*(undefined8 *)(unaff_x22 + 0x218),1,1,*(undefined8 *)(unaff_x22 + 0x220));
      lVar4 = *(long *)(unaff_x22 + 0x278);
    }
    else {
      lVar10 = *(long *)(unaff_x22 + 0x210);
      _swift_bridgeObjectRetain(lVar4);
      FUN_1004647d0(lVar10);
      uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
      lVar11 = *(long *)(unaff_x22 + 0x228);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x218);
      bVar1 = (uVar6 & 1) == 0;
      if (bVar1) {
        pcVar3 = *(code **)(lVar11 + 0x38);
      }
      else {
        FUN_1000c495c(*(long *)(lVar4 + 0x38) + *(long *)(lVar11 + 0x48) * lVar10,uVar9,
                      FUN_10045ba0c);
        pcVar3 = *(code **)(lVar11 + 0x38);
      }
      (*pcVar3)(uVar9,bVar1,1,uVar8);
      _swift_bridgeObjectRelease(uVar5);
    }
    uVar5 = *(undefined8 *)(unaff_x22 + 0x210);
    lVar10 = *(long *)(unaff_x22 + 0x208);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x200);
    _swift_bridgeObjectRelease(lVar4);
    (**(code **)(lVar10 + 8))(uVar5,uVar8);
  }
  uVar5 = *(undefined8 *)(unaff_x22 + 0x1e0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x1e8);
  FUN_1000da368();
  *(undefined8 *)(unaff_x22 + 0x280) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x288) = uVar8;
  _swift_task_switch(FUN_10048efd4,uVar5,uVar8);
  return;
}



/* Address: 0x10048efd4 | FUN_10048efd4 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10048efd4(void)

{
  undefined *puVar1;
  OS_os_log *pOVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined2 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  Logger LVar8;
  undefined8 uVar9;
  long unaff_x22;
  ulong uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 *puVar15;
  String SVar16;
  
  LVar8.unknown = *(undefined **)(unaff_x22 + 0x218);
  puVar1 = LVar8.unknown;
  (**(code **)(*(long *)(unaff_x22 + 0x228) + 0x30))
            (LVar8.unknown,1,*(undefined8 *)(unaff_x22 + 0x220));
  if ((int)puVar1 == 1) {
    FUN_100005808(LVar8.unknown,&DAT_100fc8178,&DAT_100c4cdf0);
    pOVar2 = os::Logger::get_logObject(LVar8);
    pOVar3 = pOVar2;
    static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
    pOVar4 = pOVar2;
    _os_log_type_enabled(pOVar2,(uint)pOVar3 & 0xff);
    if ((int)pOVar4 != 0) {
      puVar5 = (undefined2 *)0x2;
      _swift_slowAlloc(2,0xffffffffffffffff);
      *puVar5 = 0;
      __os_log_impl(0x100000000,pOVar2,(uint)pOVar3 & 0xff,"revoke unknown_token",puVar5,2);
      _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
    }
    uVar10 = 0x2d746e65746e6f43;
    uVar6 = 0;
    thunk_FUN_10085c548();
    _swift_retain();
    FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar6)
    ;
    if ((uVar10 & 1) == 0) {
      *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
      SVar16 = Swift::CustomStringConvertible::get_description();
      FUN_10085c664(SVar16.str,SVar16.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                    0x2d746e65746e6f63,0xee006874676e656c);
      _swift_release(uVar6);
    }
    else {
      _swift_release(uVar6);
    }
    FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x260),*(undefined8 *)(unaff_x22 + 0x268));
    uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x238);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x230);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x218);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x210);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x1f8);
    puVar15 = *(undefined8 **)(unaff_x22 + 0x1d8);
    (**(code **)(*(long *)(unaff_x22 + 0x248) + 8))(uVar7,*(undefined8 *)(unaff_x22 + 0x240));
    puVar15[1] = 0x4b4f;
    *puVar15 = 200;
    puVar15[2] = &SUB_e200000000000000;
    puVar15[3] = uVar6;
    puVar15[5] = 0;
    puVar15[4] = 0;
    puVar15[7] = 0;
    puVar15[6] = 0;
    *(undefined1 *)(puVar15 + 8) = 2;
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar11);
    _swift_task_dealloc(uVar12);
    _swift_task_dealloc(uVar13);
    _swift_task_dealloc(uVar14);
                    /* WARNING: Could not recover jumptable at 0x00010048f23c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  uVar6 = *(undefined8 *)(unaff_x22 + 0x1f0);
  FUN_1000523d8(LVar8.unknown,*(undefined8 *)(unaff_x22 + 0x238),FUN_10045ba0c);
  _swift_task_switch(FUN_10048f240,uVar6,0);
  return;
}



/* Address: 0x10048f240 | FUN_10048f240 */

/* WARNING: Removing unreachable block (ram,0x00010048f26c) */

void FUN_10048f240(void)

{
  long unaff_x22;
  
  FUN_100462448(*(undefined8 *)(unaff_x22 + 0x238));
  _swift_task_switch(FUN_10048f2ac,*(undefined8 *)(unaff_x22 + 0x280),
                     *(undefined8 *)(unaff_x22 + 0x288));
  return;
}



/* Address: 0x10048f2ac | FUN_10048f2ac */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10048f2ac(void)

{
  Logger LVar1;
  OS_os_log *pOVar2;
  OS_os_log *pOVar3;
  OS_os_log *pOVar4;
  undefined4 *puVar5;
  UUID UVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  String SVar17;
  undefined *local_98 [3];
  undefined8 local_80;
  
  LVar1.unknown = *(undefined **)(unaff_x22 + 0x238);
  FUN_1000c495c(LVar1.unknown,*(undefined8 *)(unaff_x22 + 0x230),FUN_10045ba0c);
  pOVar2 = os::Logger::get_logObject(LVar1);
  pOVar3 = pOVar2;
  static_(extension_in_os):__C.os_log_type_t.info.getter_:___C.os_log_type_t::_get_info();
  pOVar4 = pOVar2;
  _os_log_type_enabled(pOVar2,(uint)pOVar3 & 0xff);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x230);
  if ((int)pOVar4 == 0) {
    FUN_10005241c(uVar9,FUN_10045ba0c);
  }
  else {
    puVar5 = (undefined4 *)0xc;
    _swift_slowAlloc(0xc,0xffffffffffffffff);
    UVar6.unknown = (undefined *)0x20;
    _swift_slowAlloc(0x20,0xffffffffffffffff);
    *puVar5 = 0x8220102;
    local_98[0] = UVar6.unknown;
    SVar17 = Foundation::UUID::get_uuidString(UVar6);
    pcVar7 = SVar17.str;
    FUN_10048732c(pcVar7,SVar17.bridgeObject,local_98);
    _swift_bridgeObjectRelease(SVar17.bridgeObject);
    *(char **)(puVar5 + 1) = pcVar7;
    FUN_10005241c(uVar9,FUN_10045ba0c);
    __os_log_impl(0x100000000,pOVar2,(uint)pOVar3 & 0xff,"revoke success client=%{public}s",puVar5,
                  0xc);
    FUN_100004594(UVar6.unknown);
    _swift_slowDealloc(UVar6.unknown,0xffffffffffffffff,0xffffffffffffffff);
    _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  }
  FUN_10005241c(uVar8,FUN_10045ba0c);
  uVar11 = 0x2d746e65746e6f43;
  thunk_FUN_10085c548();
  local_80 = uVar8;
  _swift_retain();
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,uVar8);
  if ((uVar11 & 1) == 0) {
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
    SVar17 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar17.str,SVar17.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
    _swift_release(uVar8);
    uVar8 = local_80;
  }
  else {
    _swift_release(uVar8);
  }
  FUN_10003bf2c(*(undefined8 *)(unaff_x22 + 0x260),*(undefined8 *)(unaff_x22 + 0x268));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x250);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x238);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x230);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x210);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x1f8);
  puVar16 = *(undefined8 **)(unaff_x22 + 0x1d8);
  (**(code **)(*(long *)(unaff_x22 + 0x248) + 8))(uVar9,*(undefined8 *)(unaff_x22 + 0x240));
  puVar16[1] = 0x4b4f;
  *puVar16 = 200;
  puVar16[2] = &SUB_e200000000000000;
  puVar16[3] = uVar8;
  puVar16[5] = 0;
  puVar16[4] = 0;
  puVar16[7] = 0;
  puVar16[6] = 0;
  *(undefined1 *)(puVar16 + 8) = 2;
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar13);
  _swift_task_dealloc(uVar14);
  _swift_task_dealloc(uVar15);
                    /* WARNING: Could not recover jumptable at 0x00010048f548. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10048f54c | FUN_10048f54c */

void FUN_10048f54c(void)

{
  undefined *puVar1;
  
  if (DAT_100fc9460 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__StringProtocol_100eacac0,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fc9460 = puVar1;
  return;
}



/* Address: 0x10048f58c | FUN_10048f58c */

void FUN_10048f58c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10048f5b0 | FUN_10048f5b0 */

void FUN_10048f5b0(void)

{
  undefined8 uVar1;
  
  if (DAT_100fc9470 != 0) {
    return;
  }
  uVar1 = 0x100c65e48;
  _swift_getWitnessTable(0x100c65e48,&DAT_100ee8270);
  DAT_100fc9470 = uVar1;
  return;
}



/* Address: 0x10048f5f0 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10048f5f4 | FUN_10048f5f4 */

undefined8 FUN_10048f5f4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc9478;
  FUN_1000037f0(&DAT_100fc9478,&DAT_100c4dfc8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10048f644 | thunk_FUN_10048f2ac */

void thunk_FUN_10048f2ac(void)

{
  FUN_10048f2ac();
  return;
}



/* Address: 0x10048f648 | FUN_10048f648 */

bool FUN_10048f648(long param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auVar1 [16];
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  byte *pbVar5;
  undefined8 *puVar6;
  ulong uVar7;
  byte *pbVar8;
  undefined8 *puVar9;
  uint uVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  undefined8 uVar28;
  byte bVar30;
  byte bVar31;
  byte bVar32;
  byte bVar33;
  byte bVar34;
  byte bVar35;
  byte bVar36;
  byte bVar37;
  byte bVar38;
  byte bVar39;
  byte bVar40;
  byte bVar41;
  byte bVar42;
  byte bVar43;
  byte bVar44;
  undefined1 auVar29 [16];
  byte bVar45;
  byte bVar47;
  byte bVar48;
  byte bVar49;
  byte bVar50;
  byte bVar51;
  byte bVar52;
  byte bVar53;
  undefined8 uVar46;
  byte bVar54;
  byte bVar55;
  byte bVar56;
  byte bVar57;
  byte bVar58;
  byte bVar59;
  byte bVar60;
  byte bVar61;
  byte bVar62;
  byte bVar64;
  byte bVar65;
  byte bVar66;
  byte bVar67;
  byte bVar68;
  byte bVar69;
  undefined8 uVar63;
  byte bVar70;
  byte bVar71;
  byte bVar73;
  byte bVar74;
  byte bVar75;
  byte bVar76;
  byte bVar77;
  byte bVar78;
  undefined8 uVar72;
  byte bVar79;
  undefined8 uVar80;
  undefined8 uVar81;
  undefined8 uVar82;
  undefined8 uVar83;
  undefined8 uVar84;
  undefined8 uVar85;
  undefined8 uVar86;
  undefined8 uVar87;
  undefined8 uVar88;
  undefined8 uVar89;
  undefined8 uVar90;
  undefined8 uVar91;
  undefined8 uVar92;
  undefined8 uVar93;
  undefined8 uVar94;
  undefined8 uVar95;
  
  _swift_bridgeObjectRetain(param_2);
  FUN_100487568(param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_100487568(param_3,param_4);
  _swift_bridgeObjectRelease(param_4);
  uVar2 = *(ulong *)(param_1 + 0x10);
  if (uVar2 != *(ulong *)(param_3 + 0x10)) {
    _swift_release(param_1);
    _swift_release(param_3);
    return false;
  }
  if (uVar2 == 0) {
    _swift_release(param_1);
    _swift_release(param_3);
    return true;
  }
  if (uVar2 < 8) {
    uVar10 = 0;
    uVar4 = 0;
  }
  else {
    if (uVar2 < 0x40) {
      bVar11 = 0;
      uVar7 = 0;
    }
    else {
      uVar4 = uVar2 & 0x7fffffffffffffc0;
      puVar6 = (undefined8 *)(param_1 + 0x50);
      puVar9 = (undefined8 *)(param_3 + 0x30);
      bVar11 = 0;
      bVar12 = 0;
      bVar13 = 0;
      bVar14 = 0;
      bVar15 = 0;
      bVar16 = 0;
      bVar17 = 0;
      bVar18 = 0;
      bVar19 = 0;
      bVar20 = 0;
      bVar21 = 0;
      bVar22 = 0;
      bVar23 = 0;
      bVar24 = 0;
      bVar25 = 0;
      bVar26 = 0;
      bVar27 = 0;
      bVar30 = 0;
      bVar31 = 0;
      bVar32 = 0;
      bVar33 = 0;
      bVar34 = 0;
      bVar35 = 0;
      bVar36 = 0;
      bVar37 = 0;
      bVar38 = 0;
      bVar39 = 0;
      bVar40 = 0;
      bVar41 = 0;
      bVar42 = 0;
      bVar43 = 0;
      bVar44 = 0;
      uVar28 = 0;
      uVar46 = 0;
      uVar63 = 0;
      uVar72 = 0;
      uVar7 = uVar4;
      do {
        uVar81 = puVar6[-5];
        uVar80 = puVar6[-6];
        uVar83 = puVar6[-3];
        uVar82 = puVar6[-4];
        uVar85 = puVar6[-1];
        uVar84 = puVar6[-2];
        uVar87 = puVar6[1];
        uVar86 = *puVar6;
        uVar89 = puVar9[-1];
        uVar88 = puVar9[-2];
        uVar91 = puVar9[1];
        uVar90 = *puVar9;
        uVar93 = puVar9[3];
        uVar92 = puVar9[2];
        uVar95 = puVar9[5];
        uVar94 = puVar9[4];
        bVar11 = (byte)uVar88 ^ (byte)uVar80 | bVar11;
        bVar12 = (byte)((ulong)uVar88 >> 8) ^ (byte)((ulong)uVar80 >> 8) | bVar12;
        bVar13 = (byte)((ulong)uVar88 >> 0x10) ^ (byte)((ulong)uVar80 >> 0x10) | bVar13;
        bVar14 = (byte)((ulong)uVar88 >> 0x18) ^ (byte)((ulong)uVar80 >> 0x18) | bVar14;
        bVar15 = (byte)((ulong)uVar88 >> 0x20) ^ (byte)((ulong)uVar80 >> 0x20) | bVar15;
        bVar16 = (byte)((ulong)uVar88 >> 0x28) ^ (byte)((ulong)uVar80 >> 0x28) | bVar16;
        bVar17 = (byte)((ulong)uVar88 >> 0x30) ^ (byte)((ulong)uVar80 >> 0x30) | bVar17;
        bVar18 = (byte)((ulong)uVar88 >> 0x38) ^ (byte)((ulong)uVar80 >> 0x38) | bVar18;
        bVar19 = (byte)uVar89 ^ (byte)uVar81 | bVar19;
        bVar20 = (byte)((ulong)uVar89 >> 8) ^ (byte)((ulong)uVar81 >> 8) | bVar20;
        bVar21 = (byte)((ulong)uVar89 >> 0x10) ^ (byte)((ulong)uVar81 >> 0x10) | bVar21;
        bVar22 = (byte)((ulong)uVar89 >> 0x18) ^ (byte)((ulong)uVar81 >> 0x18) | bVar22;
        bVar23 = (byte)((ulong)uVar89 >> 0x20) ^ (byte)((ulong)uVar81 >> 0x20) | bVar23;
        bVar24 = (byte)((ulong)uVar89 >> 0x28) ^ (byte)((ulong)uVar81 >> 0x28) | bVar24;
        bVar25 = (byte)((ulong)uVar89 >> 0x30) ^ (byte)((ulong)uVar81 >> 0x30) | bVar25;
        bVar26 = (byte)((ulong)uVar89 >> 0x38) ^ (byte)((ulong)uVar81 >> 0x38) | bVar26;
        bVar27 = (byte)uVar90 ^ (byte)uVar82 | bVar27;
        bVar30 = (byte)((ulong)uVar90 >> 8) ^ (byte)((ulong)uVar82 >> 8) | bVar30;
        bVar31 = (byte)((ulong)uVar90 >> 0x10) ^ (byte)((ulong)uVar82 >> 0x10) | bVar31;
        bVar32 = (byte)((ulong)uVar90 >> 0x18) ^ (byte)((ulong)uVar82 >> 0x18) | bVar32;
        bVar33 = (byte)((ulong)uVar90 >> 0x20) ^ (byte)((ulong)uVar82 >> 0x20) | bVar33;
        bVar34 = (byte)((ulong)uVar90 >> 0x28) ^ (byte)((ulong)uVar82 >> 0x28) | bVar34;
        bVar35 = (byte)((ulong)uVar90 >> 0x30) ^ (byte)((ulong)uVar82 >> 0x30) | bVar35;
        bVar36 = (byte)((ulong)uVar90 >> 0x38) ^ (byte)((ulong)uVar82 >> 0x38) | bVar36;
        bVar37 = (byte)uVar91 ^ (byte)uVar83 | bVar37;
        bVar38 = (byte)((ulong)uVar91 >> 8) ^ (byte)((ulong)uVar83 >> 8) | bVar38;
        bVar39 = (byte)((ulong)uVar91 >> 0x10) ^ (byte)((ulong)uVar83 >> 0x10) | bVar39;
        bVar40 = (byte)((ulong)uVar91 >> 0x18) ^ (byte)((ulong)uVar83 >> 0x18) | bVar40;
        bVar41 = (byte)((ulong)uVar91 >> 0x20) ^ (byte)((ulong)uVar83 >> 0x20) | bVar41;
        bVar42 = (byte)((ulong)uVar91 >> 0x28) ^ (byte)((ulong)uVar83 >> 0x28) | bVar42;
        bVar43 = (byte)((ulong)uVar91 >> 0x30) ^ (byte)((ulong)uVar83 >> 0x30) | bVar43;
        bVar44 = (byte)((ulong)uVar91 >> 0x38) ^ (byte)((ulong)uVar83 >> 0x38) | bVar44;
        bVar45 = (byte)uVar92 ^ (byte)uVar84 | (byte)uVar28;
        bVar47 = (byte)((ulong)uVar92 >> 8) ^ (byte)((ulong)uVar84 >> 8) |
                 (byte)((ulong)uVar28 >> 8);
        bVar48 = (byte)((ulong)uVar92 >> 0x10) ^ (byte)((ulong)uVar84 >> 0x10) |
                 (byte)((ulong)uVar28 >> 0x10);
        bVar49 = (byte)((ulong)uVar92 >> 0x18) ^ (byte)((ulong)uVar84 >> 0x18) |
                 (byte)((ulong)uVar28 >> 0x18);
        bVar50 = (byte)((ulong)uVar92 >> 0x20) ^ (byte)((ulong)uVar84 >> 0x20) |
                 (byte)((ulong)uVar28 >> 0x20);
        bVar51 = (byte)((ulong)uVar92 >> 0x28) ^ (byte)((ulong)uVar84 >> 0x28) |
                 (byte)((ulong)uVar28 >> 0x28);
        bVar52 = (byte)((ulong)uVar92 >> 0x30) ^ (byte)((ulong)uVar84 >> 0x30) |
                 (byte)((ulong)uVar28 >> 0x30);
        bVar53 = (byte)((ulong)uVar92 >> 0x38) ^ (byte)((ulong)uVar84 >> 0x38) |
                 (byte)((ulong)uVar28 >> 0x38);
        uVar28 = CONCAT17(bVar53,CONCAT16(bVar52,CONCAT15(bVar51,CONCAT14(bVar50,CONCAT13(bVar49,
                                                  CONCAT12(bVar48,CONCAT11(bVar47,bVar45)))))));
        bVar54 = (byte)uVar93 ^ (byte)uVar85 | (byte)uVar46;
        bVar55 = (byte)((ulong)uVar93 >> 8) ^ (byte)((ulong)uVar85 >> 8) |
                 (byte)((ulong)uVar46 >> 8);
        bVar56 = (byte)((ulong)uVar93 >> 0x10) ^ (byte)((ulong)uVar85 >> 0x10) |
                 (byte)((ulong)uVar46 >> 0x10);
        bVar57 = (byte)((ulong)uVar93 >> 0x18) ^ (byte)((ulong)uVar85 >> 0x18) |
                 (byte)((ulong)uVar46 >> 0x18);
        bVar58 = (byte)((ulong)uVar93 >> 0x20) ^ (byte)((ulong)uVar85 >> 0x20) |
                 (byte)((ulong)uVar46 >> 0x20);
        bVar59 = (byte)((ulong)uVar93 >> 0x28) ^ (byte)((ulong)uVar85 >> 0x28) |
                 (byte)((ulong)uVar46 >> 0x28);
        bVar60 = (byte)((ulong)uVar93 >> 0x30) ^ (byte)((ulong)uVar85 >> 0x30) |
                 (byte)((ulong)uVar46 >> 0x30);
        bVar61 = (byte)((ulong)uVar93 >> 0x38) ^ (byte)((ulong)uVar85 >> 0x38) |
                 (byte)((ulong)uVar46 >> 0x38);
        uVar46 = CONCAT17(bVar61,CONCAT16(bVar60,CONCAT15(bVar59,CONCAT14(bVar58,CONCAT13(bVar57,
                                                  CONCAT12(bVar56,CONCAT11(bVar55,bVar54)))))));
        bVar62 = (byte)uVar94 ^ (byte)uVar86 | (byte)uVar63;
        bVar64 = (byte)((ulong)uVar94 >> 8) ^ (byte)((ulong)uVar86 >> 8) |
                 (byte)((ulong)uVar63 >> 8);
        bVar65 = (byte)((ulong)uVar94 >> 0x10) ^ (byte)((ulong)uVar86 >> 0x10) |
                 (byte)((ulong)uVar63 >> 0x10);
        bVar66 = (byte)((ulong)uVar94 >> 0x18) ^ (byte)((ulong)uVar86 >> 0x18) |
                 (byte)((ulong)uVar63 >> 0x18);
        bVar67 = (byte)((ulong)uVar94 >> 0x20) ^ (byte)((ulong)uVar86 >> 0x20) |
                 (byte)((ulong)uVar63 >> 0x20);
        bVar68 = (byte)((ulong)uVar94 >> 0x28) ^ (byte)((ulong)uVar86 >> 0x28) |
                 (byte)((ulong)uVar63 >> 0x28);
        bVar69 = (byte)((ulong)uVar94 >> 0x30) ^ (byte)((ulong)uVar86 >> 0x30) |
                 (byte)((ulong)uVar63 >> 0x30);
        bVar70 = (byte)((ulong)uVar94 >> 0x38) ^ (byte)((ulong)uVar86 >> 0x38) |
                 (byte)((ulong)uVar63 >> 0x38);
        uVar63 = CONCAT17(bVar70,CONCAT16(bVar69,CONCAT15(bVar68,CONCAT14(bVar67,CONCAT13(bVar66,
                                                  CONCAT12(bVar65,CONCAT11(bVar64,bVar62)))))));
        bVar71 = (byte)uVar95 ^ (byte)uVar87 | (byte)uVar72;
        bVar73 = (byte)((ulong)uVar95 >> 8) ^ (byte)((ulong)uVar87 >> 8) |
                 (byte)((ulong)uVar72 >> 8);
        bVar74 = (byte)((ulong)uVar95 >> 0x10) ^ (byte)((ulong)uVar87 >> 0x10) |
                 (byte)((ulong)uVar72 >> 0x10);
        bVar75 = (byte)((ulong)uVar95 >> 0x18) ^ (byte)((ulong)uVar87 >> 0x18) |
                 (byte)((ulong)uVar72 >> 0x18);
        bVar76 = (byte)((ulong)uVar95 >> 0x20) ^ (byte)((ulong)uVar87 >> 0x20) |
                 (byte)((ulong)uVar72 >> 0x20);
        bVar77 = (byte)((ulong)uVar95 >> 0x28) ^ (byte)((ulong)uVar87 >> 0x28) |
                 (byte)((ulong)uVar72 >> 0x28);
        bVar78 = (byte)((ulong)uVar95 >> 0x30) ^ (byte)((ulong)uVar87 >> 0x30) |
                 (byte)((ulong)uVar72 >> 0x30);
        bVar79 = (byte)((ulong)uVar95 >> 0x38) ^ (byte)((ulong)uVar87 >> 0x38) |
                 (byte)((ulong)uVar72 >> 0x38);
        uVar72 = CONCAT17(bVar79,CONCAT16(bVar78,CONCAT15(bVar77,CONCAT14(bVar76,CONCAT13(bVar75,
                                                  CONCAT12(bVar74,CONCAT11(bVar73,bVar71)))))));
        puVar6 = puVar6 + 8;
        puVar9 = puVar9 + 8;
        uVar7 = uVar7 - 0x40;
      } while (uVar7 != 0);
      bVar62 = bVar62 | bVar45 | bVar27 | bVar11;
      bVar64 = bVar64 | bVar47 | bVar30 | bVar12;
      bVar65 = bVar65 | bVar48 | bVar31 | bVar13;
      bVar66 = bVar66 | bVar49 | bVar32 | bVar14;
      bVar67 = bVar67 | bVar50 | bVar33 | bVar15;
      bVar68 = bVar68 | bVar51 | bVar34 | bVar16;
      bVar69 = bVar69 | bVar52 | bVar35 | bVar17;
      bVar70 = bVar70 | bVar53 | bVar36 | bVar18;
      bVar71 = bVar71 | bVar54 | bVar37 | bVar19;
      bVar73 = bVar73 | bVar55 | bVar38 | bVar20;
      bVar74 = bVar74 | bVar56 | bVar39 | bVar21;
      bVar75 = bVar75 | bVar57 | bVar40 | bVar22;
      bVar76 = bVar76 | bVar58 | bVar41 | bVar23;
      bVar77 = bVar77 | bVar59 | bVar42 | bVar24;
      bVar78 = bVar78 | bVar60 | bVar43 | bVar25;
      bVar79 = bVar79 | bVar61 | bVar44 | bVar26;
      auVar29[1] = bVar64;
      auVar29[0] = bVar62;
      auVar29[2] = bVar65;
      auVar29[3] = bVar66;
      auVar29[4] = bVar67;
      auVar29[5] = bVar68;
      auVar29[6] = bVar69;
      auVar29[7] = bVar70;
      auVar29[8] = bVar71;
      auVar29[9] = bVar73;
      auVar29[10] = bVar74;
      auVar29[0xb] = bVar75;
      auVar29[0xc] = bVar76;
      auVar29[0xd] = bVar77;
      auVar29[0xe] = bVar78;
      auVar29[0xf] = bVar79;
      auVar1[1] = bVar64;
      auVar1[0] = bVar62;
      auVar1[2] = bVar65;
      auVar1[3] = bVar66;
      auVar1[4] = bVar67;
      auVar1[5] = bVar68;
      auVar1[6] = bVar69;
      auVar1[7] = bVar70;
      auVar1[8] = bVar71;
      auVar1[9] = bVar73;
      auVar1[10] = bVar74;
      auVar1[0xb] = bVar75;
      auVar1[0xc] = bVar76;
      auVar1[0xd] = bVar77;
      auVar1[0xe] = bVar78;
      auVar1[0xf] = bVar79;
      auVar29 = NEON_ext(auVar29,auVar1,8,1);
      uVar7 = CONCAT17(bVar70 | auVar29[7],
                       CONCAT16(bVar69 | auVar29[6],
                                CONCAT15(bVar68 | auVar29[5],
                                         CONCAT14(bVar67 | auVar29[4],
                                                  CONCAT13(bVar66 | auVar29[3],
                                                           CONCAT12(bVar65 | auVar29[2],
                                                                    CONCAT11(bVar64 | auVar29[1],
                                                                             bVar62 | auVar29[0]))))
                                        )));
      uVar7 = uVar7 | uVar7 >> 0x20;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar10 = (uint)uVar7 | (uint)(uVar7 >> 8);
      bVar11 = (byte)uVar10;
      if (uVar2 == uVar4) goto LAB_10048f828;
      uVar7 = uVar4;
      if ((uVar2 & 0x38) == 0) goto LAB_10048f800;
    }
    uVar4 = uVar2 & 0x7ffffffffffffff8;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    lVar3 = uVar7 - uVar4;
    puVar6 = (undefined8 *)(param_3 + uVar7 + 0x20);
    puVar9 = (undefined8 *)(param_1 + uVar7 + 0x20);
    do {
      uVar28 = *puVar9;
      uVar46 = *puVar6;
      bVar11 = (byte)uVar46 ^ (byte)uVar28 | bVar11;
      bVar12 = (byte)((ulong)uVar46 >> 8) ^ (byte)((ulong)uVar28 >> 8) | bVar12;
      bVar13 = (byte)((ulong)uVar46 >> 0x10) ^ (byte)((ulong)uVar28 >> 0x10) | bVar13;
      bVar14 = (byte)((ulong)uVar46 >> 0x18) ^ (byte)((ulong)uVar28 >> 0x18) | bVar14;
      bVar15 = (byte)((ulong)uVar46 >> 0x20) ^ (byte)((ulong)uVar28 >> 0x20) | bVar15;
      bVar16 = (byte)((ulong)uVar46 >> 0x28) ^ (byte)((ulong)uVar28 >> 0x28) | bVar16;
      bVar17 = (byte)((ulong)uVar46 >> 0x30) ^ (byte)((ulong)uVar28 >> 0x30) | bVar17;
      bVar18 = (byte)((ulong)uVar46 >> 0x38) ^ (byte)((ulong)uVar28 >> 0x38) | bVar18;
      lVar3 = lVar3 + 8;
      puVar6 = puVar6 + 1;
      puVar9 = puVar9 + 1;
    } while (lVar3 != 0);
    uVar7 = CONCAT17(bVar18,CONCAT16(bVar17,CONCAT15(bVar16,CONCAT14(bVar15,CONCAT13(bVar14,CONCAT12
                                                  (bVar13,CONCAT11(bVar12,bVar11)))))));
    uVar7 = uVar7 | uVar7 >> 0x20;
    uVar7 = uVar7 | uVar7 >> 0x10;
    uVar10 = (uint)uVar7 | (uint)(uVar7 >> 8);
    if (uVar2 == uVar4) goto LAB_10048f828;
  }
LAB_10048f800:
  lVar3 = uVar2 - uVar4;
  pbVar5 = (byte *)(param_3 + uVar4 + 0x20);
  pbVar8 = (byte *)(param_1 + uVar4 + 0x20);
  do {
    uVar10 = *pbVar5 ^ *pbVar8 | uVar10;
    lVar3 = lVar3 + -1;
    pbVar5 = pbVar5 + 1;
    pbVar8 = pbVar8 + 1;
  } while (lVar3 != 0);
LAB_10048f828:
  _swift_release(param_1);
  _swift_release(param_3);
  return (uVar10 & 0xff) == 0;
}



/* Address: 0x10048f850 | FUN_10048f850 */

uint FUN_10048f850(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  Data DVar2;
  undefined8 uVar3;
  SHA256 SVar4;
  undefined *puVar5;
  char *pcVar6;
  void *pvVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 *puVar11;
  String SVar12;
  String SVar13;
  undefined8 auStack_100 [4];
  undefined1 auStack_e0 [8];
  undefined *local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  String local_a0;
  undefined *local_88;
  undefined *local_80;
  Data local_78;
  undefined8 uStack_70;
  
  local_c0 = param_3;
  uStack_b8 = param_4;
  SVar4 = CryptoKit::SHA256::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100ea9d50;
  lVar9 = *(long *)(SVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  puVar11 = auStack_e0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_d8 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar10 = *(long *)(local_d8 + -8);
  local_c8 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = (long)puVar11 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_2);
  FUN_10045fa58(param_1,param_2);
  FUN_100003a00(&DAT_100fc8190,puVar5,
                PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48);
  CryptoKit::HashFunction::init();
  FUN_1001037b4(param_1,param_2);
  FUN_10046ba9c(param_1,param_2,puVar11);
  FUN_10003bf2c(param_1,param_2);
  local_d0 = lVar8;
  CryptoKit::HashFunction::_finalize();
  FUN_10003bf2c(param_1,param_2);
  (**(code **)(lVar9 + 8))(puVar11,SVar4.unknown);
  puVar1 = local_d8;
  local_88 = local_d8;
  puVar5 = &DAT_100fc9538;
  FUN_100003a00(&DAT_100fc9538,PTR_typeMetadataAccessor_100ea9d08,
                PTR_CryptoKit__CryptoKit__SHA256Digest_>Foundation__ContiguousBytes_100ea9d00);
  local_80 = puVar5;
  FUN_10000cbb0(&local_a0);
  (**(code **)(lVar10 + 0x10))();
  FUN_100004640(&local_a0,local_88);
  Foundation::ContiguousBytes::_withUnsafeBytes();
  FUN_100004594(&local_a0);
  uVar3 = uStack_70;
  DVar2.unknown = local_78.unknown;
  FUN_1001037b4(local_78.unknown,uStack_70);
  FUN_10003bf2c(local_78.unknown,uStack_70);
  local_a0 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,local_78);
  pvVar7 = local_a0.bridgeObject;
  pcVar6 = local_a0.str;
  local_78.unknown = (undefined *)0x2b;
  uStack_70 = 0xe100000000000000;
  local_b0 = 0x2d;
  uStack_a8 = 0xe100000000000000;
  FUN_10045b990();
  puVar5 = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar8 + -0x10) = pcVar6;
  *(char **)(lVar8 + -8) = pcVar6;
  *(undefined **)(lVar8 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar8 + -0x18) = pcVar6;
  SVar12 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_78,&local_b0,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                      PTR___type_metadata_for_Swift_String_100eac208);
  _swift_bridgeObjectRelease(pvVar7);
  local_78.unknown = (undefined *)0x2f;
  uStack_70 = 0xe100000000000000;
  local_b0 = 0x5f;
  uStack_a8 = 0xe100000000000000;
  local_a0 = SVar12;
  *(char **)(lVar8 + -0x10) = pcVar6;
  *(char **)(lVar8 + -8) = pcVar6;
  *(undefined **)(lVar8 + -0x20) = puVar5;
  *(char **)(lVar8 + -0x18) = pcVar6;
  SVar13 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_78,&local_b0,0,0,0,1,puVar5,puVar5);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  local_78.unknown = (undefined *)0x3d;
  uStack_70 = 0xe100000000000000;
  local_b0 = 0;
  uStack_a8 = 0xe000000000000000;
  local_a0 = SVar13;
  *(char **)(lVar8 + -0x10) = pcVar6;
  *(char **)(lVar8 + -8) = pcVar6;
  *(undefined **)(lVar8 + -0x20) = puVar5;
  *(char **)(lVar8 + -0x18) = pcVar6;
  SVar12 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_78,&local_b0,0,0,0,1,puVar5,puVar5);
  pcVar6 = SVar12.str;
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  FUN_10003bf2c(DVar2.unknown,uVar3);
  FUN_10048f648(pcVar6,SVar12.bridgeObject,local_c0,uStack_b8);
  _swift_bridgeObjectRelease(SVar12.bridgeObject);
  (**(code **)(local_c8 + 8))(local_d0,puVar1);
  return (uint)pcVar6 & 1;
}



/* Address: 0x10048fbd8 | FUN_10048fbd8 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x00010048fd2c) */

void FUN_10048fbd8(void)

{
  ID self;
  URL UVar1;
  NSString *pNVar2;
  NSString *pNVar3;
  NSString *pNVar4;
  URL UVar5;
  Data DVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  long extraout_x8;
  long extraout_x12;
  undefined8 uVar9;
  undefined8 uVar10;
  NSDataReadingOptions contentsOf;
  long lVar11;
  String SVar12;
  String SVar13;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined8 local_60;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  contentsOf.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x12;
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
  if (UVar5.unknown == (undefined *)0x0) {
    uVar9 = 0;
    uVar10 = 0;
  }
  else {
    Foundation::URL::__unconditionallyBridgeFromObjectiveC(UVar5);
    (**(code **)(lVar11 + 0x20))
              (contentsOf.unknown,auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),
               UVar1.unknown);
    _Var7.unknown = (undefined *)0x0;
    DVar6 = Foundation::Data::_init(contentsOf);
    local_68 = 0;
    local_60 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x18,_Var7);
    _swift_bridgeObjectRelease(local_60);
    local_68 = 0xd000000000000016;
    local_60 = 0x8000000100da8ae0;
    _Var8.unknown = _Var7.unknown;
    SVar12 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar6);
    SVar13.bridgeObject = pNVar3;
    SVar13.str = _Var8.unknown;
    Swift::String::append(SVar12,SVar13);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    FUN_10003bf2c(DVar6.unknown,_Var7.unknown);
    uVar10 = local_60;
    uVar9 = local_68;
    (**(code **)(lVar11 + 8))(contentsOf.unknown,UVar1.unknown);
  }
  DAT_101057ad0 = uVar9;
  DAT_101057ad8 = uVar10;
  return;
}



/* Address: 0x10048fe18 | thunk_FUN_1004900d0 */

void thunk_FUN_1004900d0(void)

{
  FUN_1004900d0();
  return;
}



/* Address: 0x10048fe1c | FUN_10048fe1c */

String FUN_10048fe1c(char *param_1)

{
  void *pvVar1;
  char *pcVar2;
  long unaff_x21;
  String SVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pvVar1 = *(void **)(param_1 + 0x18);
  pcVar2 = param_1;
  FUN_100004640(param_1,pvVar1);
  SVar3.bridgeObject = pvVar1;
  SVar3.str = pcVar2;
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    SVar3 = Swift::SingleValueDecodingContainer::_decode();
    FUN_100004594(auStack_68);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return SVar3;
}



/* Address: 0x10048fedc | FUN_10048fedc */

void FUN_10048fedc(long param_1,char *param_2,void *param_3)

{
  String SVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  FUN_10007d048(auStack_68,local_50);
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  Swift::SingleValueEncodingContainer::_encode(SVar1);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10048ff74 | FUN_10048ff74 */

/* WARNING: Removing unreachable block (ram,0x00010048fff0) */

void FUN_10048ff74(String *param_1,long param_2)

{
  long unaff_x21;
  String SVar1;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    SVar1 = Swift::SingleValueDecodingContainer::_decode();
    FUN_100004594(auStack_68);
    FUN_100004594(param_2);
    *param_1 = SVar1;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10049003c | FUN_10049003c */

void FUN_10049003c(long param_1)

{
  String SVar1;
  String *unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  SVar1 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  FUN_10007d048(auStack_68,local_50);
  Swift::SingleValueEncodingContainer::_encode(SVar1);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1004900d0 | FUN_1004900d0 */

String FUN_1004900d0(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  SHA256 SVar2;
  Data DVar3;
  char *pcVar4;
  void *pvVar5;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar6;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 auStack_e0 [4];
  long alStack_c0 [2];
  undefined *local_b0;
  long local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  String local_78;
  
  puVar1 = &DAT_100fc8188;
  FUN_1000037f0(&DAT_100fc8188,&DAT_100c4ce00);
  local_b0 = puVar1;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3.unknown = (undefined *)((long)alStack_c0 - extraout_x8);
  SVar2 = CryptoKit::SHA256::typeMetadataAccessor();
  alStack_c0[1] = *(long *)(SVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_c0[1] + 0x40));
  lVar8 = (long)DVar3.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a0 = (undefined *)CryptoKit::SHA256Digest::typeMetadataAccessor();
  lVar7 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar7 + 0x40));
  lVar6 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_10045fa58(param_1,param_2);
  FUN_100490454();
  CryptoKit::HashFunction::init();
  FUN_1001037b4(param_1,param_2);
  FUN_10046ba9c(param_1,param_2,lVar8);
  FUN_10003bf2c(param_1,param_2);
  local_a8 = lVar6;
  CryptoKit::HashFunction::_finalize();
  FUN_10003bf2c(param_1,param_2);
  (**(code **)(alStack_c0[1] + 8))(lVar8,SVar2.unknown);
  lVar8 = lVar6;
  (**(code **)(lVar7 + 0x10))(DVar3.unknown,lVar6,local_a0);
  *(undefined8 *)(DVar3.unknown + *(int *)(local_b0 + 0x24)) = 0x10;
  FUN_10045ff44();
  local_78 = Foundation::Data::base64EncodedString((NSDataBase64EncodingOptions)0x0,DVar3);
  pvVar5 = local_78.bridgeObject;
  pcVar4 = local_78.str;
  local_88 = 0x2b;
  uStack_80 = 0xe100000000000000;
  local_98 = 0x2d;
  uStack_90 = 0xe100000000000000;
  FUN_10045b990();
  puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar6 + -0x10) = pcVar4;
  *(char **)(lVar6 + -8) = pcVar4;
  *(undefined **)(lVar6 + -0x20) = PTR___type_metadata_for_Swift_String_100eac208;
  *(char **)(lVar6 + -0x18) = pcVar4;
  SVar9 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                    (&local_88,&local_98,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                     PTR___type_metadata_for_Swift_String_100eac208);
  _swift_bridgeObjectRelease(pvVar5);
  local_88 = 0x2f;
  uStack_80 = 0xe100000000000000;
  local_98 = 0x5f;
  uStack_90 = 0xe100000000000000;
  local_78 = SVar9;
  *(char **)(lVar6 + -0x10) = pcVar4;
  *(char **)(lVar6 + -8) = pcVar4;
  *(undefined **)(lVar6 + -0x20) = puVar1;
  *(char **)(lVar6 + -0x18) = pcVar4;
  SVar10 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                     (&local_88,&local_98,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(SVar9.bridgeObject);
  local_88 = 0x3d;
  uStack_80 = 0xe100000000000000;
  local_98 = 0;
  uStack_90 = 0xe000000000000000;
  local_78 = SVar10;
  *(char **)(lVar6 + -0x10) = pcVar4;
  *(char **)(lVar6 + -8) = pcVar4;
  *(undefined **)(lVar6 + -0x20) = puVar1;
  *(char **)(lVar6 + -0x18) = pcVar4;
  SVar9 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                    (&local_88,&local_98,0,0,0,1,puVar1,puVar1);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  FUN_10003bf2c(DVar3.unknown,lVar8);
  (**(code **)(lVar7 + 8))(local_a8,local_a0);
  return SVar9;
}



/* Address: 0x1004903f4 | thunk_FUN_1004903f8 */

void thunk_FUN_1004903f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e0d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e0d0,&DAT_100ed7860);
  DAT_100fc9548 = pTVar1;
  return;
}



/* Address: 0x1004903f8 | FUN_1004903f8 */

void FUN_1004903f8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e0d0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e0d0,&DAT_100ed7860);
  DAT_100fc9548 = pTVar1;
  return;
}



/* Address: 0x100490438 | FUN_100490438 */

void FUN_100490438(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100490444 | FUN_100490444 */

undefined1  [16] FUN_100490444(void)

{
  return ZEXT816(0x100ed7860);
}



/* Address: 0x100490454 | FUN_100490454 */

void FUN_100490454(void)

{
  SHA256 SVar1;
  undefined *puVar2;
  
  if (DAT_100fc8190 != (undefined *)0x0) {
    return;
  }
  SVar1 = CryptoKit::SHA256::typeMetadataAccessor();
  puVar2 = PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48;
  _swift_getWitnessTable
            (PTR_CryptoKit__CryptoKit__SHA256_>CryptoKit__HashFunction_100ea9d48,SVar1.unknown);
  DAT_100fc8190 = puVar2;
  return;
}



/* Address: 0x100490498 | FUN_100490498 */

undefined1  [16] FUN_100490498(void)

{
  return ZEXT816(0x100ed78e0);
}



/* Address: 0x1004904a8 | thunk_FUN_1004904ac */

void thunk_FUN_1004904ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e14c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e14c,&DAT_100ed79e8);
  DAT_100fc9550 = pTVar1;
  return;
}



/* Address: 0x1004904ac | FUN_1004904ac */

void FUN_1004904ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9550 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4e14c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4e14c,&DAT_100ed79e8);
  DAT_100fc9550 = pTVar1;
  return;
}



/* Address: 0x1004904ec | thunk_FUN_1004904f0 */

void thunk_FUN_1004904f0(void)

{
  FUN_1004904f0();
  return;
}



/* Address: 0x1004904f0 | FUN_1004904f0 */

void FUN_1004904f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc9558 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4f0c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4f0c0,&DAT_100ed8960);
  DAT_100fc9558 = pTVar1;
  return;
}



/* Address: 0x100490530 | thunk_FUN_100490534 */

void thunk_FUN_100490534(void)

{
  FUN_100490534();
  return;
}


