/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1004fe634 | FUN_1004fe634 */

undefined8 FUN_1004fe634(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 uVar6;
  long lVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined *puVar11;
  long extraout_x8;
  undefined8 *puVar12;
  
  lVar9 = 0;
  FUN_1004fe770();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar9 + -8) + 0x40));
  lVar7 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar12 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar7);
  FUN_1004fe7a8();
  puVar10 = puVar12;
  _swift_getEnumCaseMultiPayload(puVar12,lVar9);
  iVar8 = (int)puVar10;
  if (iVar8 < 2) {
    if (iVar8 == 0) {
      FUN_1004fe7ec(puVar12);
      return 0xca;
    }
  }
  else if (iVar8 != 2) {
    if (iVar8 == 3) {
      puVar11 = &DAT_100fcd6a8;
      FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar12 + (long)*(int *)(puVar11 + 0x30)));
      puVar11 = &DAT_100fcd150;
      FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
      (**(code **)(*(long *)(puVar11 + -8) + 8))(puVar12,puVar11);
      return 200;
    }
    uVar1 = *puVar12;
    uVar4 = *(undefined8 *)(&stack0xffffffffffffffc8 + lVar7);
    uVar2 = *(undefined8 *)(&stack0xffffffffffffffd0 + lVar7);
    uVar5 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar7);
    uVar3 = *(undefined8 *)(&stack0xfffffffffffffff0 + lVar7);
    uVar6 = (&stack0xffffffffffffffe0)[lVar7];
    _swift_bridgeObjectRelease(*(undefined8 *)(&stack0xfffffffffffffff8 + lVar7));
    _swift_bridgeObjectRelease(uVar3);
    FUN_1004d9f84(uVar4,uVar2,uVar5,uVar6);
    return uVar1;
  }
  FUN_1004fe7ec(puVar12);
  return 200;
}



/* Address: 0x1004fe770 | FUN_1004fe770 */

void FUN_1004fe770(undefined8 param_1)

{
  if (DAT_100fcd770 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100cb2ff4);
  return;
}



/* Address: 0x1004fe7a8 | FUN_1004fe7a8 */

undefined8 FUN_1004fe7a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004fe770();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1004fe7ec | FUN_1004fe7ec */

undefined8 FUN_1004fe7ec(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1004fe770();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1004fe828 | FUN_1004fe828 */

/* WARNING: Type propagation algorithm not settling */

undefined * FUN_1004fe828(void)

{
  undefined8 uVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined *apuStack_50 [2];
  
  lVar4 = 0;
  FUN_1004fe770();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar2 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)apuStack_50 + lVar2);
  FUN_1004fe7a8();
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    puVar7 = (undefined *)*puVar9;
  }
  else if (iVar3 == 2) {
    puVar7 = *(undefined **)(&stack0xffffffffffffffc0 + lVar2);
    FUN_10003bf2c(*puVar9,*(undefined8 *)((long)apuStack_50 + lVar2 + 8U));
  }
  else if (iVar3 == 3) {
    puVar7 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    puVar7 = *(undefined **)((long)puVar9 + (long)*(int *)(puVar7 + 0x30));
    puVar6 = &DAT_100fcd150;
    FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
    (**(code **)(*(long *)(puVar6 + -8) + 8))(puVar9,puVar6);
  }
  else {
    uVar1 = *(undefined8 *)(&stack0xffffffffffffffd8 + lVar2);
    lVar4 = *(long *)(&stack0xffffffffffffffe0 + lVar2);
    uVar8 = *(undefined8 *)(&stack0xffffffffffffffe8 + lVar2);
    FUN_1004d9f84(*(undefined8 *)((long)apuStack_50 + lVar2 + 8U),
                  *(undefined8 *)(&stack0xffffffffffffffc0 + lVar2),
                  *(undefined8 *)(&stack0xffffffffffffffc8 + lVar2),
                  (&stack0xffffffffffffffd0)[lVar2]);
    puVar7 = &DAT_100fcb888;
    FUN_1000f7830(&DAT_100fcb888,&DAT_100c50540);
    _swift_initStaticObject();
    puVar6 = puVar7;
    FUN_1004a66a4();
    FUN_1000fb4c4(puVar7 + 0x20,&DAT_100fcb890,&DAT_100c519e0);
    if (lVar4 != 0) {
      puVar7 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native(puVar6);
      apuStack_50[1] = puVar6;
      FUN_1004b4f30(uVar1,lVar4,0x737365532d50434d,0xee0064492d6e6f69,puVar7);
      puVar6 = apuStack_50[1];
    }
    puVar7 = puVar6;
    _swift_isUniquelyReferenced_nonNull_native(puVar6);
    apuStack_50[1] = puVar6;
    FUN_1004ff2f0(uVar8,FUN_100153a88,0,puVar7,apuStack_50 + 1);
    _swift_bridgeObjectRelease(uVar8);
    puVar7 = apuStack_50[1];
  }
  return puVar7;
}



/* Address: 0x1004fea04 | FUN_1004fea04 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004fea04(void)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  Data DVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  ID IVar11;
  NSDictionary *pNVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 extraout_x1;
  long extraout_x8;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 *puVar17;
  long alStack_1c0 [3];
  long local_1a8;
  byte abStack_1a0 [16];
  undefined8 auStack_190 [36];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = 0;
  FUN_1004fe770();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar13 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar17 = (undefined8 *)((long)alStack_1c0 + lVar13);
  FUN_1004fe7a8();
  puVar5 = puVar17;
  _swift_getEnumCaseMultiPayload(puVar17,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    FUN_1004fe7ec(puVar17);
  }
  else {
    if (iVar3 == 2) {
      DVar6.unknown = (undefined *)*puVar17;
      uVar14 = *(undefined8 *)((long)alStack_1c0 + lVar13 + 8);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)alStack_1c0 + lVar13 + 0x10));
      goto LAB_1004fee3c;
    }
    if (iVar3 == 3) {
      puVar10 = &DAT_100fcd6a8;
      FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar17 + (long)*(int *)(puVar10 + 0x30)));
      puVar10 = &DAT_100fcd150;
      FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
      (**(code **)(*(long *)(puVar10 + -8) + 8))(puVar17,puVar10);
    }
    else {
      uVar14 = *(undefined8 *)((long)alStack_1c0 + lVar13 + 8);
      lVar4 = *(long *)((long)alStack_1c0 + lVar13 + 0x10);
      uVar16 = *(undefined8 *)(abStack_1a0 + lVar13 + -8);
      bVar2 = abStack_1a0[lVar13];
      uVar15 = *(undefined8 *)((long)auStack_190 + lVar13);
      _swift_bridgeObjectRelease(*(undefined8 *)((long)auStack_190 + lVar13 + 8));
      _swift_bridgeObjectRelease(uVar15);
      puVar10 = &DAT_100fcb730;
      FUN_1000f7830(&DAT_100fcb730,&DAT_100c50520);
      puVar7 = puVar10;
      _swift_initStackObject();
      *(undefined8 *)(puVar7 + 0x18) = 6;
      *(undefined8 *)(puVar7 + 0x10) = 3;
      *(undefined8 *)(puVar7 + 0x20) = 0x6370726e6f736a;
      puVar9 = PTR___type_metadata_for_Swift_String_100eac208;
      *(undefined1 **)(puVar7 + 0x28) = &DAT_e700000000000000;
      *(undefined8 *)(puVar7 + 0x30) = 0x302e32;
      *(undefined8 *)(puVar7 + 0x38) = 0xe300000000000000;
      *(undefined **)(puVar7 + 0x48) = puVar9;
      *(undefined8 *)(puVar7 + 0x50) = 0x726f727265;
      *(undefined1 **)(puVar7 + 0x58) = &DAT_e500000000000000;
      _swift_initStackObject(puVar10,abStack_1a0);
      *(undefined8 *)(puVar10 + 0x18) = 4;
      *(undefined8 *)(puVar10 + 0x10) = 2;
      *(undefined8 *)(puVar10 + 0x20) = 0x65646f63;
      *(undefined1 **)(puVar10 + 0x28) = &DAT_e400000000000000;
      puVar8 = PTR___type_metadata_for_Swift_Int_100eac6f8;
      if (bVar2 < 4) {
        if (bVar2 < 2) {
          if (bVar2 == 0) {
            uVar15 = 0xffffffffffff8044;
          }
          else {
            uVar15 = 0xffffffffffff80a8;
          }
        }
        else if (bVar2 == 2) {
          uVar15 = 0xffffffffffff80a7;
        }
        else {
          uVar15 = 0xffffffffffff80a6;
        }
      }
      else if (bVar2 < 6) {
        uVar15 = uVar14;
        if (bVar2 == 4) {
          uVar15 = 0xffffffffffff80a5;
        }
      }
      else if (bVar2 == 6) {
        uVar15 = 0xffffffffffff82d6;
      }
      else if (bVar2 == 7) {
        uVar15 = 0xffffffffffff82ff;
      }
      else {
        uVar15 = 0xffffffffffff8300;
      }
      *(undefined8 *)(puVar10 + 0x30) = uVar15;
      *(undefined **)(puVar10 + 0x48) = puVar8;
      *(undefined8 *)(puVar10 + 0x50) = 0x6567617373656d;
      *(undefined1 **)(puVar10 + 0x58) = &DAT_e700000000000000;
      lVar13 = lVar4;
      alStack_1c0[1] = uVar14;
      FUN_1004d5190(uVar14,lVar4,uVar16,bVar2);
      *(undefined **)(puVar10 + 0x78) = puVar9;
      uVar15 = 0x206e776f6e6b6e55;
      if (lVar13 != 0) {
        uVar15 = uVar14;
      }
      lVar1 = -0x12ffff8d908d8d9b;
      if (lVar13 != 0) {
        lVar1 = lVar13;
      }
      *(undefined8 *)(puVar10 + 0x60) = uVar15;
      *(long *)(puVar10 + 0x68) = lVar1;
      puVar8 = puVar10;
      FUN_1004a67b4();
      _swift_setDeallocating(puVar10);
      puVar9 = &DAT_100fcb4b0;
      FUN_1000f7830(&DAT_100fcb4b0,&DAT_100c50300);
      _swift_arrayDestroy(puVar10 + 0x20,2,puVar9);
      puVar10 = &DAT_100fcd4f0;
      FUN_1000f7830(&DAT_100fcd4f0,&DAT_100c53920);
      *(undefined **)(puVar7 + 0x60) = puVar8;
      *(undefined **)(puVar7 + 0x78) = puVar10;
      *(undefined1 **)(puVar7 + 0x80) = &SUB_00006469;
      *(undefined1 **)(puVar7 + 0x88) = &SUB_e200000000000000;
      puVar10 = &_OBJC_CLASS___NSNull;
      _objc_allocWithZone();
      IVar11 = objc_stub::init((ID)puVar10);
      uVar14 = 0;
      FUN_1004ff564();
      *(undefined8 *)(puVar7 + 0xa8) = uVar14;
      *(ID *)(puVar7 + 0x90) = IVar11;
      puVar10 = puVar7;
      FUN_1004a67b4(puVar7);
      _swift_setDeallocating(puVar7);
      _swift_arrayDestroy(puVar7 + 0x20,3,puVar9);
      pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
      _swift_bridgeObjectRelease(puVar10);
      local_1a8 = 0;
      DVar6.unknown =
           (undefined *)
           objc_stub::dataWithJSONObject_options_error_
                     (&_OBJC_CLASS___NSJSONSerialization,pNVar12,0,alStack_1c0 + 3);
      if (DVar6.unknown != (undefined *)0x0) {
        uVar14 = extraout_x1;
        DVar6 = Foundation::Data::__unconditionallyBridgeFromObjectiveC(DVar6);
        FUN_1004d9f84(alStack_1c0[1],lVar4,uVar16,bVar2);
        goto LAB_1004fee3c;
      }
      lVar13 = local_1a8;
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_1004d9f84(alStack_1c0[1],lVar4,uVar16,bVar2);
      _swift_errorRelease(lVar13);
    }
  }
  DVar6.unknown = (undefined *)0x0;
  uVar14 = 0xf000000000000000;
LAB_1004fee3c:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(DVar6.unknown,uVar14);
}



/* Address: 0x1004feeb4 | FUN_1004feeb4 */

undefined1  [16] FUN_1004feeb4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xee0064492d6e6f69;
  auVar1._0_8_ = 0x737365532d50434d;
  return auVar1;
}



/* Address: 0x1004feed8 | FUN_1004feed8 */

undefined1  [16] FUN_1004feed8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dab710;
  auVar1._0_8_ = 0xd000000000000014;
  return auVar1;
}



/* Address: 0x1004feef4 | FUN_1004feef4 */

undefined1  [16] FUN_1004feef4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed000044492d746e;
  auVar1._0_8_ = 0x6576452d7473614c;
  return auVar1;
}



/* Address: 0x1004fef18 | FUN_1004fef18 */

undefined1  [16] FUN_1004fef18(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x747065636341;
  return auVar1;
}



/* Address: 0x1004fef2c | FUN_1004fef2c */

undefined1  [16] FUN_1004fef2c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xec00000065707954;
  auVar1._0_8_ = 0x2d746e65746e6f43;
  return auVar1;
}



/* Address: 0x1004fef4c | FUN_1004fef4c */

undefined1  [16] FUN_1004fef4c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006e6f697461;
  auVar1._0_8_ = 0x7a69726f68747541;
  return auVar1;
}



/* Address: 0x1004fef70 | FUN_1004fef70 */

undefined1  [16] FUN_1004fef70(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0x8000000100dac220;
  auVar1._0_8_ = 0xd000000000000010;
  return auVar1;
}



/* Address: 0x1004fef8c | FUN_1004fef8c */

undefined1  [16] FUN_1004fef8c(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e600000000000000;
  auVar1._0_8_ = 0x6e696769724f;
  return auVar1;
}



/* Address: 0x1004fefa0 | FUN_1004fefa0 */

undefined1  [16] FUN_1004fefa0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e400000000000000;
  auVar1._0_8_ = 0x74736f48;
  return auVar1;
}



/* Address: 0x1004fefb0 | FUN_1004fefb0 */

undefined1  [16] FUN_1004fefb0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xed00006c6f72746e;
  auVar1._0_8_ = 0x6f432d6568636143;
  return auVar1;
}



/* Address: 0x1004fefd4 | FUN_1004fefd4 */

char * FUN_1004fefd4(void)

{
  return "Connection";
}



/* Address: 0x1004fefe0 | FUN_1004fefe0 */

undefined1  [16] FUN_1004fefe0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xea00000000006e6f;
  auVar1._0_8_ = 0x697463656e6e6f43;
  return auVar1;
}



/* Address: 0x1004feffc | FUN_1004feffc */

char * FUN_1004feffc(void)

{
  return "Allow";
}



/* Address: 0x1004ff008 | FUN_1004ff008 */

undefined1  [16] FUN_1004ff008(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x776f6c6c41;
  return auVar1;
}



/* Address: 0x1004ff01c | FUN_1004ff01c */

void FUN_1004ff01c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  undefined8 *unaff_x20;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
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
  
  SVar8.bridgeObject = (void *)unaff_x20[1];
  if (SVar8.bridgeObject != (void *)0x0) {
    SVar8.str = (char *)*unaff_x20;
    SVar11.bridgeObject = param_4;
    SVar11.str = param_3;
    Swift::String::append(SVar8,SVar11);
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0xa;
    SVar12.bridgeObject = param_4;
    SVar12.str = param_3;
    Swift::String::append(SVar5,SVar12);
    SVar1.bridgeObject = &DAT_e400000000000000;
    SVar1.str = (char *)0x203a6469;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar1,SVar13);
    _swift_bridgeObjectRelease(&DAT_e400000000000000);
  }
  SVar6.bridgeObject = (void *)unaff_x20[3];
  if (SVar6.bridgeObject != (void *)0x0) {
    SVar6.str = (char *)unaff_x20[2];
    SVar14.bridgeObject = param_4;
    SVar14.str = param_3;
    Swift::String::append(SVar6,SVar14);
    SVar7.bridgeObject = (void *)0xe100000000000000;
    SVar7.str = (char *)0xa;
    SVar15.bridgeObject = param_4;
    SVar15.str = param_3;
    Swift::String::append(SVar7,SVar15);
    SVar2.bridgeObject = &DAT_e700000000000000;
    SVar2.str = (char *)0x203a746e657665;
    SVar16.bridgeObject = param_4;
    SVar16.str = param_3;
    Swift::String::append(SVar2,SVar16);
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
  }
  if (*(char *)(unaff_x20 + 7) != '\x01') {
    SVar8 = Swift::CustomStringConvertible::get_description();
    SVar17.bridgeObject = param_4;
    SVar17.str = param_3;
    Swift::String::append(SVar8,SVar17);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    SVar9.bridgeObject = (void *)0xe100000000000000;
    SVar9.str = (char *)0xa;
    SVar18.bridgeObject = param_4;
    SVar18.str = param_3;
    Swift::String::append(SVar9,SVar18);
    SVar3.bridgeObject = &DAT_e700000000000000;
    SVar3.str = (char *)0x203a7972746572;
    SVar19.bridgeObject = param_4;
    SVar19.str = param_3;
    Swift::String::append(SVar3,SVar19);
    _swift_bridgeObjectRelease(&DAT_e700000000000000);
  }
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(*(String *)(unaff_x20 + 4),SVar20);
  SVar10.bridgeObject = &SUB_e200000000000000;
  SVar10.str = (char *)0xa0a;
  SVar21.bridgeObject = param_4;
  SVar21.str = param_3;
  Swift::String::append(SVar10,SVar21);
  SVar4.bridgeObject = &DAT_e600000000000000;
  SVar4.str = (char *)0x203a61746164;
  SVar22.bridgeObject = param_4;
  SVar22.str = param_3;
  Swift::String::append(SVar4,SVar22);
  _swift_bridgeObjectRelease(&DAT_e600000000000000);
  FUN_1004bac0c(0,0xe000000000000000);
  return;
}



/* Address: 0x1004ff1c0 | FUN_1004ff1c0 */

void FUN_1004ff1c0(undefined8 *param_1)

{
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined1 local_28;
  
  FUN_1004ff9c8(&local_48);
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  *(undefined1 *)(param_1 + 4) = local_28;
  return;
}



/* Address: 0x1004ff200 | FUN_1004ff200 */

bool FUN_1004ff200(void)

{
  bool bVar1;
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x20) != '\0') {
    return false;
  }
  if (*(undefined **)(unaff_x20 + 0x10) != (undefined *)0x696c616974696e69 ||
      *(undefined **)(unaff_x20 + 0x18) != (undefined *)0xea0000000000657a) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)*(undefined **)(unaff_x20 + 0x10),
                       (_StringGuts)*(undefined **)(unaff_x20 + 0x18),(_StringComparisonResult)0x69)
    ;
    return bVar1;
  }
  return true;
}



/* Address: 0x1004ff250 | FUN_1004ff250 */

char * FUN_1004ff250(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_1001037b4();
  FUN_10050ddc8(param_1,param_2);
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_bridgeObjectRelease(param_1);
  return tVar2.result.str;
}



/* Address: 0x1004ff2b8 | FUN_1004ff2b8 */

void FUN_1004ff2b8(undefined8 *param_1,UnsafeBufferPointer<__int8> param_2,long param_3,
                  void *param_4)

{
  char *pcVar1;
  String SVar2;
  tuple2_conflict1 tVar3;
  
  pcVar1 = (char *)0x0;
  if (param_2.unknown != (undefined *)0x0) {
    pcVar1 = (char *)(param_3 - (long)param_2.unknown);
  }
  SVar2.bridgeObject = param_4;
  SVar2.str = pcVar1;
  tVar3 = Swift::String::_fromUTF8Repairing(param_2,SVar2);
  *param_1 = tVar3.result.str;
  param_1[1] = tVar3.result.bridgeObject;
  return;
}



/* Address: 0x1004ff2f0 | FUN_1004ff2f0 */

void FUN_1004ff2f0(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      local_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      local_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      (*param_2)(&local_a0,&local_80);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = uStack_88;
      uVar3 = local_90;
      uVar5 = uStack_98;
      uVar11 = local_a0;
      lVar15 = *param_5;
      uVar9 = local_a0;
      uVar10 = uStack_98;
      FUN_100071370();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1004ff550);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        FUN_1004b5c40(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        FUN_100071370();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004ff564);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_100506688();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x1004ff554);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1004ff54c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x1004ff564 | FUN_1004ff564 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1004ff564(void)

{
  undefined *puVar1;
  
  if (DAT_100fcd6f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSNull;
  _swift_getObjCClassMetadata();
  DAT_100fcd6f8 = puVar1;
  return;
}



/* Address: 0x1004ff5a8 | FUN_1004ff5a8 */

void FUN_1004ff5a8(ulong *param_1,__DataStorage *param_2,void *param_3,void *param_4,ulong param_5)

{
  long lVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  code *pcVar5;
  bool bVar6;
  UnsafeBufferPointer<__int8> UVar7;
  __DataStorage *p_Var8;
  __DataStorage *p_Var9;
  char *pcVar10;
  undefined *puVar11;
  __DataStorage **pp_Var12;
  void *pvVar13;
  uint uVar15;
  char *pcVar16;
  long lVar17;
  String SVar18;
  String SVar19;
  tuple2_conflict1 tVar20;
  __DataStorage *local_d0;
  void *pvStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  __DataStorage *local_a0;
  void *pvStack_98;
  undefined1 local_90;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  undefined1 uStack_8a;
  undefined1 uStack_89;
  undefined1 uStack_88;
  undefined1 uStack_87;
  undefined1 uStack_86;
  undefined1 uStack_85;
  undefined1 uStack_84;
  undefined1 uStack_83;
  undefined8 local_78;
  long local_68;
  undefined8 uVar14;
  
  local_68 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar2 = (uint)((ulong)param_3 >> 0x20);
  uVar15 = uVar2 >> 0x1e;
  pvVar13 = param_4;
  if (uVar2 >> 0x1e < 2) {
    if (uVar15 == 0) {
      local_90 = SUB81(param_2,0);
      uStack_8f = (undefined1)((ulong)param_2 >> 8);
      uStack_8e = (undefined1)((ulong)param_2 >> 0x10);
      uStack_8d = (undefined1)((ulong)param_2 >> 0x18);
      uStack_8c = (undefined1)((ulong)param_2 >> 0x20);
      uStack_8b = (undefined1)((ulong)param_2 >> 0x28);
      uStack_8a = (undefined1)((ulong)param_2 >> 0x30);
      uStack_89 = (undefined1)((ulong)param_2 >> 0x38);
      uStack_88 = SUB81(param_3,0);
      uStack_87 = (undefined1)((ulong)param_3 >> 8);
      uStack_86 = (undefined1)((ulong)param_3 >> 0x10);
      uStack_85 = (undefined1)((ulong)param_3 >> 0x18);
      uStack_84 = (undefined1)((ulong)param_3 >> 0x20);
      SVar18.str = (char *)((ulong)param_3 >> 0x30 & 0xff);
      uStack_83 = (undefined1)((ulong)param_3 >> 0x28);
      SVar18.bridgeObject = param_4;
      tVar20 = Swift::String::_fromUTF8Repairing((UnsafeBufferPointer<__int8>)&local_90,SVar18);
      p_Var9 = tVar20.result.str;
      pvVar13 = tVar20.result.bridgeObject;
      goto LAB_1004ff834;
    }
    lVar17 = (long)(int)param_2;
    pcVar16 = (char *)(((long)param_2 >> 0x20) - lVar17);
    if ((long)param_2 >> 0x20 < lVar17) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ff898);
      (*pcVar5)();
    }
    p_Var8 = param_2;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),param_2);
    if (p_Var8 != (__DataStorage *)0x0) {
      p_Var9 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),p_Var8);
      if (SBORROW8(lVar17,(long)p_Var9)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ff8a0);
        (*pcVar5)();
      }
      UVar7.unknown = p_Var8 + (lVar17 - (long)p_Var9);
      goto LAB_1004ff6e4;
    }
    Foundation::__DataStorage::get__length
              ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_1004ff728:
    auVar4._8_8_ = 0;
    auVar4._0_8_ = pvVar13;
    tVar20 = Swift::String::_fromUTF8Repairing
                       ((UnsafeBufferPointer<__int8>)0x0,(String)(auVar4 << 0x40));
    uVar14 = tVar20._16_8_;
    pvVar13 = tVar20.result.bridgeObject;
    p_Var9 = tVar20.result.str;
  }
  else {
    if (uVar15 != 2) {
      uStack_88 = 0;
      uStack_87 = 0;
      uStack_86 = 0;
      uStack_85 = 0;
      uStack_84 = 0;
      uStack_83 = 0;
      local_90 = 0;
      uStack_8f = 0;
      uStack_8e = 0;
      uStack_8d = 0;
      uStack_8c = 0;
      uStack_8b = 0;
      uStack_8a = 0;
      uStack_89 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = param_4;
      tVar20 = Swift::String::_fromUTF8Repairing
                         ((UnsafeBufferPointer<__int8>)&local_90,(String)(auVar3 << 0x40));
      pvVar13 = tVar20.result.bridgeObject;
      p_Var9 = tVar20.result.str;
      goto LAB_1004ff834;
    }
    lVar17 = *(long *)(param_2 + 0x10);
    lVar1 = *(long *)(param_2 + 0x18);
    UVar7.unknown = param_2;
    Foundation::__DataStorage::_get__bytes
              ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),param_2);
    p_Var9 = (__DataStorage *)0x0;
    if ((__DataStorage *)UVar7.unknown != (__DataStorage *)0x0) {
      p_Var9 = (__DataStorage *)
               Foundation::__DataStorage::get__offset
                         ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),
                          (__DataStorage *)UVar7.unknown);
      if (SBORROW8(lVar17,(long)p_Var9)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ff89c);
        (*pcVar5)();
      }
      UVar7.unknown = UVar7.unknown + (lVar17 - (long)p_Var9);
    }
    pcVar16 = (char *)(lVar1 - lVar17);
    if (SBORROW8(lVar1,lVar17)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1004ff6b0);
      (*pcVar5)();
    }
LAB_1004ff6e4:
    pcVar10 = (char *)Foundation::__DataStorage::get__length
                                ((__DataStorage *)((ulong)param_3 & 0x3fffffffffffffff),p_Var9);
    if (UVar7.unknown == (undefined *)0x0) goto LAB_1004ff728;
    if ((long)pcVar16 <= (long)pcVar10) {
      pcVar10 = pcVar16;
    }
    SVar19.bridgeObject = pvVar13;
    SVar19.str = pcVar10;
    tVar20 = Swift::String::_fromUTF8Repairing(UVar7,SVar19);
    uVar14 = tVar20._16_8_;
    pvVar13 = tVar20.result.bridgeObject;
    p_Var9 = tVar20.result.str;
  }
  if (pvVar13 == (void *)0x0) {
    local_a0 = param_2;
    pvStack_98 = param_3;
    FUN_1001037b4(param_2,param_3,uVar14);
    puVar11 = &DAT_100fcd7a8;
    FUN_1000f7830(&DAT_100fcd7a8,&DAT_100c53dc8);
    pp_Var12 = &local_d0;
    _swift_dynamicCast(pp_Var12,&local_a0,PTR___type_metadata_for_Foundation_Data_100ea7300,puVar11,
                       6);
    if (((ulong)pp_Var12 & 1) == 0) {
      local_b0 = 0;
      pvStack_c8 = (void *)0x0;
      local_d0 = (__DataStorage *)0x0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      FUN_1000fb4c4(&local_d0,&DAT_100fcd7b0,&DAT_100c53dd0);
    }
    else {
      FUN_100076508(&local_d0,&local_90);
      FUN_100004640(&local_90,local_78);
      bVar6 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
      if (bVar6) {
        FUN_100004640(&local_90,local_78);
        Swift::_HasContiguousBytes::_withUnsafeBytes();
        FUN_100004594(&local_90);
        p_Var9 = local_d0;
        pvVar13 = pvStack_c8;
        goto LAB_1004ff834;
      }
      FUN_100004594(&local_90);
    }
    FUN_1004ff250();
    p_Var9 = param_2;
    pvVar13 = param_3;
  }
LAB_1004ff834:
  *param_1 = (ulong)param_4;
  param_1[1] = param_5;
  param_1[3] = (ulong)&DAT_e700000000000000;
  *(char (*) [8])(param_1 + 2) = (char  [8])0x6567617373656d;
  param_1[4] = (ulong)p_Var9;
  param_1[5] = (ulong)pvVar13;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 7) = 1;
  _swift_bridgeObjectRetain(param_5);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ff8a4 | FUN_1004ff8a4 */

String FUN_1004ff8a4(long param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  String SVar5;
  char *local_50;
  void *pvStack_48;
  char *local_40 [4];
  
  uVar2 = 0;
  uVar3 = 0;
  if (*(long *)(param_1 + 0x10) != 0) {
    _swift_bridgeObjectRetain();
    puVar1 = &SUB_00006469;
    uVar4 = 0;
    FUN_100071370(&SUB_00006469);
    if ((uVar4 & 1) == 0) {
      _swift_bridgeObjectRelease(param_1);
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)puVar1 * 0x20,local_40);
      _swift_bridgeObjectRelease(param_1);
      _swift_dynamicCast(&local_50,local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         PTR___type_metadata_for_Swift_String_100eac208,6);
      if ((uVar2 & 1) != 0) {
        SVar5.bridgeObject = pvStack_48;
        SVar5.str = local_50;
        return SVar5;
      }
    }
    if (*(long *)(param_1 + 0x10) != 0) {
      _swift_bridgeObjectRetain(param_1);
      puVar1 = &SUB_00006469;
      uVar2 = 0;
      FUN_100071370(&SUB_00006469);
      if ((uVar2 & 1) == 0) {
        _swift_bridgeObjectRelease(param_1);
      }
      else {
        FUN_10000cbfc(*(long *)(param_1 + 0x38) + (long)puVar1 * 0x20,local_40);
        _swift_bridgeObjectRelease(param_1);
        _swift_dynamicCast(&local_50,local_40,PTR___type_metadata_for_Any_100eae0c0 + 8,
                           PTR___type_metadata_for_Swift_Int_100eac6f8,6);
        if ((uVar3 & 1) != 0) {
          local_40[0] = local_50;
          SVar5 = Swift::CustomStringConvertible::get_description();
          return SVar5;
        }
      }
    }
  }
  return (String)ZEXT816(0);
}



/* Address: 0x1004ff9c8 | FUN_1004ff9c8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1004ff9c8(long *param_1,Data param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined1 uVar2;
  NSData *pNVar3;
  ID IVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  long local_98;
  undefined8 *puStack_90;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long local_68;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pNVar3 = Foundation::Data::_bridgeToObjectiveC(param_2);
  local_80 = 0;
  IVar4 = objc_stub::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,pNVar3,0,&local_80);
  if (IVar4 == 0) {
    uVar9 = local_80;
    Foundation::__convertNSErrorToError();
    _swift_willThrow(0);
    FUN_10003bf2c(param_2.unknown,param_3);
    _swift_errorRelease(uVar9);
LAB_1004ffb98:
    puVar13 = (undefined8 *)0x0;
  }
  else {
    Swift::__bridgeAnyObjectToAny();
    _swift_unknownObjectRelease(IVar4);
    puVar5 = &DAT_100fcd4f0;
    FUN_1000f7830(&DAT_100fcd4f0,&DAT_100c53920);
    puVar1 = PTR___type_metadata_for_Any_100eae0c0;
    plVar6 = &local_98;
    puVar10 = &local_80;
    _swift_dynamicCast(plVar6,puVar10,PTR___type_metadata_for_Any_100eae0c0 + 8,puVar5,6);
    lVar12 = local_98;
    if (((ulong)plVar6 & 1) == 0) {
      FUN_10003bf2c(param_2.unknown,param_3);
      goto LAB_1004ffb98;
    }
    lVar7 = local_98;
    FUN_1004ff8a4();
    puVar13 = puVar10;
    if (*(long *)(lVar12 + 0x10) != 0) {
      _swift_bridgeObjectRetain(lVar12);
      lVar8 = 0x646f6874656d;
      uVar11 = 0;
      FUN_100071370(0x646f6874656d);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
      }
      else {
        FUN_10000cbfc(*(long *)(lVar12 + 0x38) + lVar8 * 0x20,&local_80);
        _swift_bridgeObjectRelease(lVar12);
        plVar6 = &local_98;
        _swift_dynamicCast(plVar6,&local_80,puVar1 + 8,
                           PTR___type_metadata_for_Swift_String_100eac208,6);
        if (((ulong)plVar6 & 1) != 0) {
          _swift_bridgeObjectRelease(lVar12);
          FUN_10003bf2c(param_2.unknown,param_3);
          uVar2 = puVar10 == (undefined8 *)0x0;
          puVar13 = puStack_90;
          lVar12 = local_98;
          if (!(bool)uVar2) {
            puVar13 = puVar10;
            lVar12 = lVar7;
          }
          lVar7 = lVar12;
          lVar12 = 0;
          if (!(bool)uVar2) {
            lVar12 = local_98;
          }
          puVar10 = (undefined8 *)0x0;
          if (!(bool)uVar2) {
            puVar10 = puStack_90;
          }
          goto LAB_1004ffbac;
        }
      }
    }
    if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1004ffc50:
      uStack_78 = 0;
      local_80 = 0;
      local_68 = 0;
      uStack_70 = 0;
      FUN_1000fb4c4(&local_80,&DAT_100fcb738,&DAT_100c53fd0);
      if (*(long *)(lVar12 + 0x10) == 0) {
LAB_1004ffcbc:
        uStack_78 = 0;
        local_80 = 0;
        local_68 = 0;
        uStack_70 = 0;
      }
      else {
        _swift_bridgeObjectRetain(lVar12);
        lVar8 = 0x726f727265;
        uVar11 = 0;
        FUN_100071370(0x726f727265);
        if ((uVar11 & 1) == 0) {
          _swift_bridgeObjectRelease(lVar12);
          goto LAB_1004ffcbc;
        }
        FUN_10000cbfc(*(long *)(lVar12 + 0x38) + lVar8 * 0x20,&local_80);
        _swift_bridgeObjectRelease(lVar12);
      }
      _swift_bridgeObjectRelease(lVar12);
      FUN_10003bf2c(param_2.unknown,param_3);
      if (local_68 == 0) {
        _swift_bridgeObjectRelease(puVar10);
        FUN_1000fb4c4(&local_80,&DAT_100fcb738,&DAT_100c53fd0);
        goto LAB_1004ffb98;
      }
    }
    else {
      _swift_bridgeObjectRetain(lVar12);
      lVar8 = 0x746c75736572;
      uVar11 = 0;
      FUN_100071370(0x746c75736572);
      if ((uVar11 & 1) == 0) {
        _swift_bridgeObjectRelease(lVar12);
        goto LAB_1004ffc50;
      }
      FUN_10000cbfc(*(long *)(lVar12 + 0x38) + lVar8 * 0x20,&local_80);
      _swift_bridgeObjectRelease_n(lVar12,2);
      FUN_10003bf2c(param_2.unknown,param_3);
    }
    FUN_1000fb4c4(&local_80,&DAT_100fcb738,&DAT_100c53fd0);
    if (puVar10 != (undefined8 *)0x0) {
      lVar12 = 0;
      uVar2 = 2;
      puVar10 = (undefined8 *)0x0;
      goto LAB_1004ffbac;
    }
  }
  lVar7 = 0;
  lVar12 = 0;
  uVar2 = 0xff;
  puVar10 = (undefined8 *)0x0;
LAB_1004ffbac:
  *param_1 = lVar7;
  param_1[1] = (long)puVar13;
  param_1[2] = lVar12;
  param_1[3] = (long)puVar10;
  *(undefined1 *)(param_1 + 4) = uVar2;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1004ffd3c | FUN_1004ffd3c */

undefined1  [16] FUN_1004ffd3c(void)

{
  return ZEXT816(0x100edc070);
}



/* Address: 0x1004ffd4c | FUN_1004ffd4c */

void FUN_1004ffd4c(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  if (*(ulong *)(param_1 + 0x20) >> 0x3c < 0xf) {
    FUN_10003bf2c(*(undefined8 *)(param_1 + 0x18));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x1004ffd94 | FUN_1004ffd94 */

undefined8 * FUN_1004ffd94(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  uVar2 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  uVar1 = param_2[4];
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar2);
  if (uVar1 >> 0x3c < 0xf) {
    uVar2 = param_2[3];
    FUN_1001037b4(uVar2,uVar1);
    param_1[3] = uVar2;
    param_1[4] = uVar1;
  }
  else {
    uVar2 = param_2[3];
    param_1[4] = param_2[4];
    param_1[3] = uVar2;
  }
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1004ffe20 | FUN_1004ffe20 */

undefined8 * FUN_1004ffe20(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  uVar2 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  uVar3 = param_2[4];
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    if (uVar3 >> 0x3c < 0xf) {
      uVar4 = param_2[3];
      FUN_1001037b4(uVar4,uVar3);
      uVar2 = param_1[3];
      uVar1 = param_1[4];
      param_1[3] = uVar4;
      param_1[4] = uVar3;
      FUN_10003bf2c(uVar2,uVar1);
      goto LAB_1004ffee4;
    }
    FUN_10031275c(param_1 + 3);
  }
  else if (uVar3 >> 0x3c < 0xf) {
    uVar2 = param_2[3];
    FUN_1001037b4(uVar2,uVar3);
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    goto LAB_1004ffee4;
  }
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
LAB_1004ffee4:
  param_1[5] = param_2[5];
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1004fff18 | FUN_1004fff18 */

void FUN_1004fff18(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1004fff34 | FUN_1004fff34 */

undefined8 * FUN_1004fff34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar2);
  if ((ulong)param_1[4] >> 0x3c < 0xf) {
    uVar3 = param_2[4];
    if (uVar3 >> 0x3c < 0xf) {
      uVar2 = param_1[3];
      param_1[3] = param_2[3];
      param_1[4] = uVar3;
      FUN_10003bf2c(uVar2);
      goto LAB_1004fffac;
    }
    FUN_10031275c(param_1 + 3);
  }
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
LAB_1004fffac:
  uVar2 = param_2[6];
  uVar1 = param_1[6];
  param_1[5] = param_2[5];
  param_1[6] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1004fffcc | FUN_1004fffcc */

undefined1  [16] FUN_1004fffcc(void)

{
  return ZEXT816(0x100edc0e8);
}



/* Address: 0x1004fffdc | FUN_1004fffdc */

long * FUN_1004fffdc(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  int iVar4;
  long *plVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    plVar5 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar4 = (int)plVar5;
    if (iVar4 < 2) {
      if (iVar4 == 0) {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        uVar7 = 0;
      }
      else {
        *param_1 = *param_2;
        _swift_bridgeObjectRetain();
        uVar7 = 1;
      }
    }
    else if (iVar4 == 2) {
      lVar9 = *param_2;
      lVar10 = param_2[1];
      FUN_1001037b4(lVar9,lVar10);
      *param_1 = lVar9;
      param_1[1] = lVar10;
      param_1[2] = param_2[2];
      _swift_bridgeObjectRetain();
      uVar7 = 2;
    }
    else if (iVar4 == 3) {
      puVar6 = &DAT_100fcd150;
      FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
      puVar6 = &DAT_100fcd6a8;
      FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar6 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(puVar6 + 0x30));
      _swift_bridgeObjectRetain();
      uVar7 = 3;
    }
    else {
      lVar10 = param_2[1];
      *param_1 = *param_2;
      lVar9 = param_2[2];
      lVar1 = param_2[3];
      lVar3 = param_2[4];
      FUN_1004d9ee8(lVar10,lVar9,lVar1,(char)lVar3);
      param_1[1] = lVar10;
      param_1[2] = lVar9;
      param_1[3] = lVar1;
      *(char *)(param_1 + 4) = (char)lVar3;
      param_1[5] = param_2[5];
      lVar9 = param_2[7];
      lVar10 = param_2[6];
      param_1[7] = param_2[7];
      param_1[6] = lVar10;
      _swift_bridgeObjectRetain(lVar10);
      _swift_bridgeObjectRetain(lVar9);
      uVar7 = 4;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar7);
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar8 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar9 + (uVar8 + 0x10 & (uVar8 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10050019c | FUN_10050019c */

void FUN_10050019c(undefined8 *param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload();
  uVar1 = (uint)puVar2;
  if ((int)uVar1 < 3) {
    puVar2 = param_1;
    if (1 < uVar1) {
      if (uVar1 != 2) {
        return;
      }
      puVar2 = param_1 + 2;
      FUN_10003bf2c(*param_1,param_1[1]);
    }
  }
  else if (uVar1 == 3) {
    puVar3 = &DAT_100fcd150;
    FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
    (**(code **)(*(long *)(puVar3 + -8) + 8))(param_1,puVar3);
    puVar3 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    puVar2 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x30));
  }
  else {
    if (uVar1 != 4) {
      return;
    }
    FUN_1004d9f84(param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
    _swift_bridgeObjectRelease(param_1[6]);
    puVar2 = param_1 + 7;
  }
  _swift_bridgeObjectRelease(*puVar2);
  return;
}



/* Address: 0x100500260 | FUN_100500260 */

undefined8 * FUN_100500260(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar4 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar3 = (int)puVar4;
  if (iVar3 < 2) {
    uVar6 = *param_2;
    *param_1 = uVar6;
  }
  else if (iVar3 == 2) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    FUN_1001037b4(uVar6,uVar7);
    *param_1 = uVar6;
    param_1[1] = uVar7;
    uVar6 = param_2[2];
    param_1[2] = uVar6;
  }
  else if (iVar3 == 3) {
    puVar5 = &DAT_100fcd150;
    FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
    (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
    puVar5 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30)) = uVar6;
  }
  else {
    uVar7 = param_2[1];
    *param_1 = *param_2;
    uVar6 = param_2[2];
    uVar1 = param_2[3];
    uVar2 = *(undefined1 *)(param_2 + 4);
    FUN_1004d9ee8(uVar7,uVar6,uVar1,uVar2);
    param_1[1] = uVar7;
    param_1[2] = uVar6;
    param_1[3] = uVar1;
    *(undefined1 *)(param_1 + 4) = uVar2;
    param_1[5] = param_2[5];
    uVar6 = param_2[7];
    uVar7 = param_2[6];
    param_1[7] = param_2[7];
    param_1[6] = uVar7;
    _swift_bridgeObjectRetain(uVar7);
  }
  _swift_bridgeObjectRetain(uVar6);
  _swift_storeEnumTagMultiPayload(param_1,param_3,puVar4);
  return param_1;
}



/* Address: 0x1005003a8 | FUN_1005003a8 */

undefined8 * FUN_1005003a8(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 != param_2) {
    FUN_1004fe7ec(param_1);
    puVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar3 = (int)puVar4;
    if (iVar3 < 2) {
      uVar6 = *param_2;
      *param_1 = uVar6;
    }
    else if (iVar3 == 2) {
      uVar6 = *param_2;
      uVar1 = param_2[1];
      FUN_1001037b4(uVar6,uVar1);
      *param_1 = uVar6;
      param_1[1] = uVar1;
      uVar6 = param_2[2];
      param_1[2] = uVar6;
    }
    else if (iVar3 == 3) {
      puVar5 = &DAT_100fcd150;
      FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
      (**(code **)(*(long *)(puVar5 + -8) + 0x10))(param_1,param_2,puVar5);
      puVar5 = &DAT_100fcd6a8;
      FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
      uVar6 = *(undefined8 *)((long)param_2 + (long)*(int *)(puVar5 + 0x30));
      *(undefined8 *)((long)param_1 + (long)*(int *)(puVar5 + 0x30)) = uVar6;
    }
    else {
      *param_1 = *param_2;
      uVar6 = param_2[1];
      uVar1 = param_2[2];
      uVar7 = param_2[3];
      uVar2 = *(undefined1 *)(param_2 + 4);
      FUN_1004d9ee8(uVar6,uVar1,uVar7,uVar2);
      param_1[1] = uVar6;
      param_1[2] = uVar1;
      param_1[3] = uVar7;
      *(undefined1 *)(param_1 + 4) = uVar2;
      param_1[5] = param_2[5];
      param_1[6] = param_2[6];
      uVar6 = param_2[7];
      param_1[7] = uVar6;
      _swift_bridgeObjectRetain();
    }
    _swift_bridgeObjectRetain(uVar6);
    _swift_storeEnumTagMultiPayload(param_1,param_3,puVar4);
  }
  return param_1;
}



/* Address: 0x100500504 | FUN_100500504 */

void * FUN_100500504(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)pvVar2 == 3) {
    puVar1 = &DAT_100fcd150;
    FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
    (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
    puVar1 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,3);
    return param_1;
  }
  pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
  return pvVar2;
}



/* Address: 0x1005005c4 | FUN_1005005c4 */

void * FUN_1005005c4(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  
  if (param_1 != param_2) {
    FUN_1004fe7ec(param_1);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)pvVar2 != 3) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar2;
    }
    puVar1 = &DAT_100fcd150;
    FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
    (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_1,param_2,puVar1);
    puVar1 = &DAT_100fcd6a8;
    FUN_1000f7830(&DAT_100fcd6a8,&DAT_100c53cd0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    _swift_storeEnumTagMultiPayload(param_1,param_3,3);
  }
  return param_1;
}



/* Address: 0x100500694 | FUN_100500694 */

void FUN_100500694(undefined8 param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 auStack_78 [32];
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined1 *local_40;
  undefined *puStack_38;
  
  puVar1 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_48 = &DAT_100c53d40;
  lVar2 = 0x13f;
  local_58 = puVar1;
  puStack_50 = puVar1;
  FUN_100500734();
  if (param_2 < 0x40) {
    _swift_getTupleTypeLayout2(auStack_78,*(long *)(lVar2 + -8) + 0x40,puVar1);
    puStack_38 = &DAT_100c53d60;
    local_40 = auStack_78;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,5,&local_58);
  }
  return;
}



/* Address: 0x100500734 | FUN_100500734 */

void FUN_100500734(void)

{
  AsyncThrowingStream AVar1;
  undefined *puVar2;
  
  if (DAT_100fcd218.unknown == (undefined *)0x0) {
    FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
    puVar2 = PTR___type_metadata_for_Foundation_Data_100ea7300;
    AVar1 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    if (puVar2 == (undefined *)0x0) {
      DAT_100fcd218 = AVar1;
    }
  }
  return;
}



/* Address: 0x1005007a4 | FUN_1005007a4 */

undefined1  [16] FUN_1005007a4(void)

{
  return ZEXT816(0x100edc118);
}



/* Address: 0x1005007b4 | FUN_1005007b4 */

void FUN_1005007b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  if ((param_5 & 0xff) - 1 < 2) {
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  if ((param_5 & 0xff) == 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_4);
    return;
  }
  return;
}



/* Address: 0x1005007fc | FUN_1005007fc */

void FUN_1005007fc(undefined8 *param_1)

{
  FUN_100500810(*param_1,param_1[1],param_1[2],param_1[3],*(undefined1 *)(param_1 + 4));
  return;
}



/* Address: 0x100500810 | FUN_100500810 */

void FUN_100500810(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  uint param_5)

{
  if ((param_5 & 0xff) - 1 < 2) {
    _swift_bridgeObjectRelease(param_2);
    return;
  }
  if ((param_5 & 0xff) == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  return;
}



/* Address: 0x100500858 | FUN_100500858 */

undefined8 * FUN_100500858(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar2 = param_2[2];
  uVar4 = param_2[3];
  uVar5 = *(undefined1 *)(param_2 + 4);
  FUN_1005007b4(uVar1,uVar3,uVar2,uVar4,uVar5);
  *param_1 = uVar1;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  param_1[3] = uVar4;
  *(undefined1 *)(param_1 + 4) = uVar5;
  return param_1;
}



/* Address: 0x1005008b8 | FUN_1005008b8 */

undefined8 * FUN_1005008b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  
  uVar1 = *param_2;
  uVar5 = param_2[1];
  uVar2 = param_2[2];
  uVar6 = param_2[3];
  uVar9 = *(undefined1 *)(param_2 + 4);
  FUN_1005007b4(uVar1,uVar5,uVar2,uVar6,uVar9);
  uVar3 = *param_1;
  uVar7 = param_1[1];
  uVar4 = param_1[2];
  uVar8 = param_1[3];
  *param_1 = uVar1;
  param_1[1] = uVar5;
  param_1[2] = uVar2;
  param_1[3] = uVar6;
  uVar10 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar9;
  FUN_100500810(uVar3,uVar7,uVar4,uVar8,uVar10);
  return param_1;
}



/* Address: 0x100500928 | FUN_100500928 */

undefined8 * FUN_100500928(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar3 = *(undefined1 *)(param_2 + 4);
  uVar5 = *param_1;
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  uVar6 = param_1[3];
  uVar7 = *param_2;
  uVar9 = param_2[3];
  uVar8 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar7;
  param_1[3] = uVar9;
  param_1[2] = uVar8;
  uVar4 = *(undefined1 *)(param_1 + 4);
  *(undefined1 *)(param_1 + 4) = uVar3;
  FUN_100500810(uVar5,uVar1,uVar2,uVar6,uVar4);
  return param_1;
}



/* Address: 0x100500970 | FUN_100500970 */

int FUN_100500970(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x21) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 8) ^ 0xff;
  if (*(byte *)(param_1 + 8) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005009b8 | FUN_1005009b8 */

void FUN_1005009b8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x21) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 4) = -(char)param_2;
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



/* Address: 0x100500a00 | FUN_100500a00 */

undefined1  [16] FUN_100500a00(void)

{
  return ZEXT816(0x100edc1a8);
}



/* Address: 0x100500a10 | FUN_100500a10 */

int FUN_100500a10(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 10);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100500a58 | FUN_100500a58 */

void FUN_100500a58(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    if (param_2 != 0) {
      param_1[5] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100500aa8 | FUN_100500aa8 */

undefined1  [16] FUN_100500aa8(void)

{
  return ZEXT816(0x100edc240);
}



/* Address: 0x100500ab8 | FUN_100500ab8 */

bool FUN_100500ab8(_StringObject param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  __uint8 _Var3;
  Index after;
  UnsafeBufferPointer<__int8> UVar4;
  Index position;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar1 = param_2 >> 0x38 & 0xf;
  }
  uVar5 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar5 = 1;
  }
  uVar7 = 4L << uVar5;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    uVar6 = (ulong)after.cmsgPointer.unknown >> 0xe;
    if (uVar6 == uVar1 * 4) break;
    uVar8 = (ulong)after.cmsgPointer.unknown & 0xc;
    position.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (uVar8 == uVar7) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar1 <= (ulong)position.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100500c50);
      (*pcVar2)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
        }
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        UVar4.unknown = (undefined *)&local_70;
      }
      _Var3 = *(__uint8 *)((long)UVar4.unknown + ((ulong)position.cmsgPointer.unknown >> 0x10));
      if (uVar8 == uVar7) goto LAB_100500c0c;
LAB_100500bb0:
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_100500b24;
LAB_100500bb4:
      if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100500c54);
        (*pcVar2)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,(UTF8View)param_1.unknown);
    }
    else {
      _Var3 = Swift::String::UTF8View::_foreignSubscript(position,(UTF8View)param_1.unknown);
      if (uVar8 != uVar7) goto LAB_100500bb0;
LAB_100500c0c:
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_100500bb4;
LAB_100500b24:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    }
  } while ((byte)(_Var3 - 0x21) < 0x5e);
  return uVar6 != uVar1 * 4;
}



/* Address: 0x100500c54 | FUN_100500c54 */

void FUN_100500c54(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x70));
  return;
}



/* Address: 0x100500c5c | FUN_100500c5c */

undefined8
FUN_100500c5c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_100500cc8(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Address: 0x100500cc8 | FUN_100500cc8 */

void FUN_100500cc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  long param_5)

{
  undefined8 *puVar1;
  byte bVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x20;
  long lVar7;
  long lVar8;
  AsyncThrowingStream throwing;
  long lVar9;
  long lVar10;
  long lVar11;
  long local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  long local_98;
  undefined *local_88 [3];
  undefined *local_70;
  undefined **ppuStack_68;
  
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0xd8) = 0;
  *(undefined8 *)(unaff_x20 + 0xe0) = 0;
  *(undefined2 *)(unaff_x20 + 0xe8) = 0;
  lVar7 = _TtC3MCP27StatefulHTTPServerTransport::requestSSEContinuations;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1004a6b50();
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _TtC3MCP27StatefulHTTPServerTransport::httpRequestContexts;
  puVar3 = puVar5;
  FUN_1004a6ce8();
  *(undefined **)(unaff_x20 + lVar7) = puVar3;
  lVar7 = _TtC3MCP27StatefulHTTPServerTransport::standaloneSSEContinuation;
  puVar3 = &DAT_100fcb3a0;
  FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
  lVar9 = *(long *)(puVar3 + -8);
  local_c8 = puVar3;
  (**(code **)(lVar9 + 0x38))(unaff_x20 + lVar7,1,1);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::standaloneStreamID);
  *puVar1 = 0x7274735f5445475f;
  puVar1[1] = 0xeb000000006d6165;
  *(undefined **)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::storedEvents) = puVar5;
  *(undefined8 *)(unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::eventCounter) = 0;
  local_b8 = param_1;
  FUN_100076688(param_1,unaff_x20 + 0x78);
  local_c0 = param_2;
  FUN_1000f8cac(param_2,auStack_b0,&DAT_100fcd7e8,&DAT_100c54010);
  if (local_98 == 0) {
    puVar3 = &DAT_100fcd7f0;
    FUN_1000f7830(&DAT_100fcd7f0,&DAT_100c53df0);
    bVar2 = 7;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 10;
    *(undefined8 *)(puVar3 + 0x10) = 5;
    uVar4 = 0;
    uVar6 = 1;
    FUN_1004fcca4();
    *(undefined **)(puVar3 + 0x38) = &DAT_100edbf30;
    *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100edbc90;
    *(undefined8 *)(puVar3 + 0x20) = uVar4;
    *(undefined8 *)(puVar3 + 0x28) = uVar6;
    puVar3[0x30] = bVar2 & 1;
    *(undefined **)(puVar3 + 0x60) = &DAT_100edbdc0;
    *(undefined ***)(puVar3 + 0x68) = &PTR_PTR_100edbc50;
    puVar3[0x48] = 0;
    *(undefined **)(puVar3 + 0x88) = &DAT_100edbe78;
    *(undefined ***)(puVar3 + 0x90) = &PTR_PTR_100edbc60;
    *(undefined **)(puVar3 + 0xb0) = &DAT_100edbe98;
    *(undefined ***)(puVar3 + 0xb8) = &PTR_PTR_100edbc70;
    *(undefined **)(puVar3 + 0xd8) = &DAT_100edbeb8;
    *(undefined ***)(puVar3 + 0xe0) = &PTR_PTR_100edbc80;
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
  FUN_100076508(local_88,unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 200) = param_3;
  *(undefined1 *)(unaff_x20 + 0xd0) = param_4;
  if (param_5 == 0) {
    local_70 = &DAT_100ee6990;
    ppuStack_68 = &PTR_PTR_100ee68f0;
    param_5 = 0;
    FUN_1005ce220();
    _swift_allocObject();
    *(undefined8 *)(param_5 + 0x10) = 0xd000000000000022;
    *(undefined8 *)(param_5 + 0x18) = 0x8000000100dac400;
    FUN_100076508(local_88,param_5 + 0x20);
  }
  *(long *)(unaff_x20 + 0x70) = param_5;
  puVar3 = &DAT_100fcd150;
  FUN_1000f7830(&DAT_100fcd150,&DAT_100c54020);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)&local_d0 - extraout_x8;
  local_d0 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  throwing.unknown = (undefined *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fcd148;
  FUN_1000f7830(&DAT_100fcd148,&DAT_100c53730);
  lVar11 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)throwing.unknown - extraout_x8_01;
  (**(code **)(lVar11 + 0x68))
            (lVar10,*(undefined4 *)
                     PTR___enum_case_for_Swift_AsyncThrowingStream_Continuation_BufferingPolicy_unbounded<A,B_where_B:_Swift_Error>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_Type___>_Swift_AsyncThrowingStream<A,B>_Continuation_BufferingPolicy_100eaee40
             ,puVar5);
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xe,0,0,0x11,0,0);
  if ((bVar2 & 1) == 0) {
    FUN_100505e68(lVar8,throwing.unknown,lVar10);
  }
  else {
    Swift::AsyncThrowingStream::_makeStream((BufferingPolicy)(__int8)lVar8,throwing);
  }
  FUN_1000fb4c4(local_c0,&DAT_100fcd7e8,&DAT_100c54010);
  FUN_100004594(local_b8);
  (**(code **)(lVar11 + 8))(lVar10,puVar5);
  (**(code **)(lVar7 + 0x20))
            (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::incomingStream,lVar8,puVar3);
  (**(code **)(lVar9 + 0x20))
            (unaff_x20 + _TtC3MCP27StatefulHTTPServerTransport::incomingContinuation,
             throwing.unknown,local_c8);
  return;
}



/* Address: 0x100501118 | FUN_100501118 */

void FUN_100501118(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x170) = unaff_x20;
  _swift_task_switch(FUN_100501130);
  return;
}



/* Address: 0x100501130 | FUN_100501130 */

void FUN_100501130(undefined8 *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  long lVar3;
  
  lVar2 = *(long *)(unaff_x22 + 0x170);
  if ((*(byte *)(lVar2 + 0xe9) & 1) == 0) {
    *(undefined1 *)(lVar2 + 0xe9) = 1;
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
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dac460;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000025;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dac430;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x80;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000026;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dac460;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000025;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dac430;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 0x80;
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
                    /* WARNING: Could not recover jumptable at 0x000100501318. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


