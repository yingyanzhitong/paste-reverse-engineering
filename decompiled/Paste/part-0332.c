/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10041aea8 | FUN_10041aea8 */

void FUN_10041aea8(undefined8 param_1,undefined8 param_2,byte param_3)

{
  if (param_3 < 2) {
    if ((param_3 == 0) || (param_3 == 1)) {
      _swift_errorRetain();
      return;
    }
  }
  else {
    if (param_3 == 2) {
      _swift_bridgeObjectRetain(param_2);
      return;
    }
    if (param_3 == 3) {
      _swift_bridgeObjectRetain();
      return;
    }
  }
  return;
}



/* Address: 0x10041aee4 | FUN_10041aee4 */

undefined8 FUN_10041aee4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc57a0;
  FUN_1000f7830(&DAT_100fc57a0,&DAT_100c49360);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10041af34 | FUN_10041af34 */

void FUN_10041af34(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10041af58 | FUN_10041af58 */

void FUN_10041af58(void)

{
  FUN_10041aa04();
  return;
}



/* Address: 0x10041af60 | FUN_10041af60 */

undefined1  [16] FUN_10041af60(long param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if (param_1 < 2) {
    if (param_1 == 0) {
      auVar5._8_8_ = 0xea0000000000676e;
      auVar5._0_8_ = 0x6973616863727570;
      return auVar5;
    }
    if (param_1 == 1) {
      auVar2._8_8_ = 0xe900000000000064;
      auVar2._0_8_ = 0x6573616863727570;
      return auVar2;
    }
  }
  else {
    if (param_1 == 2) {
      auVar3._8_8_ = &DAT_e600000000000000;
      auVar3._0_8_ = 0x64656c696166;
      return auVar3;
    }
    if (param_1 == 3) {
      auVar4._8_8_ = &DAT_e800000000000000;
      auVar4._0_8_ = 0x6465726f74736572;
      return auVar4;
    }
    if (param_1 == 4) {
      auVar1._8_8_ = &DAT_e800000000000000;
      auVar1._0_8_ = 0x6465727265666564;
      return auVar1;
    }
  }
  auVar6._8_8_ = &DAT_e700000000000000;
  auVar6._0_8_ = 0x746c7561666564;
  return auVar6;
}



/* Address: 0x10041b020 | FUN_10041b020 */

void FUN_10041b020(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::addTransactionObserver_(unaff_x20,param_1);
  return;
}



/* Address: 0x10041b02c | FUN_10041b02c */

void FUN_10041b02c(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::removeTransactionObserver_(unaff_x20,param_1);
  return;
}



/* Address: 0x10041b038 | FUN_10041b038 */

void FUN_10041b038(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::addPayment_(unaff_x20,param_1);
  return;
}



/* Address: 0x10041b044 | FUN_10041b044 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10041b044(void)

{
  NSArray *pNVar1;
  ID unaff_x20;
  
  FUN_10000ec2c(0,&DAT_100fc5c38,&PTR__OBJC_CLASS___SKDownload_100f8dcd0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::startDownloads_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x10041b098 | FUN_10041b098 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10041b098(void)

{
  NSArray *pNVar1;
  ID unaff_x20;
  
  FUN_10000ec2c(0,&DAT_100fc5c38,&PTR__OBJC_CLASS___SKDownload_100f8dcd0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::pauseDownloads_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x10041b0ec | FUN_10041b0ec */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10041b0ec(void)

{
  NSArray *pNVar1;
  ID unaff_x20;
  
  FUN_10000ec2c(0,&DAT_100fc5c38,&PTR__OBJC_CLASS___SKDownload_100f8dcd0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::resumeDownloads_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x10041b140 | FUN_10041b140 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10041b140(void)

{
  NSArray *pNVar1;
  ID unaff_x20;
  
  FUN_10000ec2c(0,&DAT_100fc5c38,&PTR__OBJC_CLASS___SKDownload_100f8dcd0);
  pNVar1 = (extension_Foundation)::Swift::Array<undefined>::_bridgeToObjectiveC();
  objc_stub::cancelDownloads_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x10041b194 | FUN_10041b194 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10041b194(undefined8 param_1,long param_2)

{
  NSString *pNVar1;
  ID unaff_x20;
  
  if (param_2 == 0) {
    pNVar1 = (NSString *)0x0;
  }
  else {
    pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  }
  objc_stub::restoreCompletedTransactionsWithApplicationUsername_(unaff_x20,pNVar1);
  return 0;
}



/* Address: 0x10041b1d0 | FUN_10041b1d0 */

void FUN_10041b1d0(undefined8 param_1)

{
  ID unaff_x20;
  
  objc_stub::finishTransaction_(unaff_x20,param_1);
  return;
}



/* Address: 0x10041b1dc | FUN_10041b1dc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

NSString * FUN_10041b1dc(undefined8 param_1,undefined8 param_2)

{
  NSString *pNVar1;
  
  FUN_10041b234(param_1);
  pNVar1 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  return pNVar1;
}



/* Address: 0x10041b234 | FUN_10041b234 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10041b234(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  ID IVar3;
  char *pcVar4;
  Date DVar5;
  Date DVar6;
  void *extraout_x1;
  undefined *puVar7;
  long lVar8;
  ID unaff_x20;
  undefined1 *puVar9;
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
  undefined1 auStack_80 [8];
  ID local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  puVar2 = &DAT_100fc5a30;
  FUN_1000f7830(&DAT_100fc5a30,&DAT_100c49370);
  lVar8 = *(long *)(*(long *)(puVar2 + -8) + 0x40);
  IVar3 = objc_stub::transactionIdentifier(unaff_x20);
  if (IVar3 == 0) {
    puVar9 = &DAT_e400000000000000;
    SVar10.bridgeObject = extraout_x1;
    SVar10.str = (char *)0x6c6c756e;
  }
  else {
    SVar10 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    puVar9 = SVar10.bridgeObject;
  }
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x35,(_StringGuts)SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0xeb00000000203a64;
  SVar11.str = (char *)0x49746375646f7270;
  SVar16.bridgeObject = param_4;
  SVar16.str = param_3;
  Swift::String::append(SVar11,SVar16);
  IVar3 = objc_stub::FUN_100c07b40(unaff_x20);
  objc_stub::productIdentifier(IVar3);
  SVar11 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar17.bridgeObject = param_4;
  SVar17.str = param_3;
  Swift::String::append(SVar11,SVar17);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = (void *)0x8000000100da6080;
  SVar12.str = (char *)0xd000000000000011;
  SVar18.bridgeObject = param_4;
  SVar18.str = param_3;
  Swift::String::append(SVar12,SVar18);
  SVar13.bridgeObject = puVar9;
  SVar13.str = SVar10.str;
  SVar19.bridgeObject = param_4;
  SVar19.str = param_3;
  Swift::String::append(SVar13,SVar19);
  _swift_bridgeObjectRelease(puVar9);
  SVar14.bridgeObject = (void *)0xe900000000000020;
  SVar14.str = (char *)0x3a6574617473202c;
  SVar20.bridgeObject = param_4;
  SVar20.str = param_3;
  Swift::String::append(SVar14,SVar20);
  local_78 = objc_stub::transactionState(unaff_x20);
  pcVar4 = (char *)0x0;
  FUN_100414be8();
  puVar7 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&local_78,&local_70,pcVar4,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar15.bridgeObject = &DAT_e800000000000000;
  SVar15.str = (char *)0x203a65746164202c;
  SVar21.bridgeObject = puVar7;
  SVar21.str = pcVar4;
  Swift::String::append(SVar15,SVar21);
  DVar5.unknown = (undefined *)objc_stub::transactionDate(unaff_x20);
  if (DVar5.unknown != (undefined *)0x0) {
    Foundation::Date::__unconditionallyBridgeFromObjectiveC(DVar5);
  }
  DVar6 = Foundation::Date::typeMetadataAccessor();
  pcVar4 = &DAT_00000001;
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))
            (auStack_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0),DVar5.unknown == (undefined *)0x0);
  SVar10 = Swift::String::_init(auStack_80 + -(lVar8 + 0xfU & 0xfffffffffffffff0),puVar2);
  SVar22.bridgeObject = DVar6.unknown;
  SVar22.str = pcVar4;
  Swift::String::append(SVar10,SVar22);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  auVar1._8_8_ = uStack_68;
  auVar1._0_8_ = local_70;
  return auVar1;
}



/* Address: 0x10041b494 | FUN_10041b494 */

undefined1  [16] FUN_10041b494(void)

{
  long lVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  
  lVar1 = *unaff_x20;
  if (lVar1 < 2) {
    if (lVar1 == 0) {
      auVar6._8_8_ = 0xea0000000000676e;
      auVar6._0_8_ = 0x6973616863727570;
      return auVar6;
    }
    if (lVar1 == 1) {
      auVar3._8_8_ = 0xe900000000000064;
      auVar3._0_8_ = 0x6573616863727570;
      return auVar3;
    }
  }
  else {
    if (lVar1 == 2) {
      auVar4._8_8_ = &DAT_e600000000000000;
      auVar4._0_8_ = 0x64656c696166;
      return auVar4;
    }
    if (lVar1 == 3) {
      auVar5._8_8_ = &DAT_e800000000000000;
      auVar5._0_8_ = 0x6465726f74736572;
      return auVar5;
    }
    if (lVar1 == 4) {
      auVar2._8_8_ = &DAT_e800000000000000;
      auVar2._0_8_ = 0x6465727265666564;
      return auVar2;
    }
  }
  auVar7._8_8_ = &DAT_e700000000000000;
  auVar7._0_8_ = 0x746c7561666564;
  return auVar7;
}



/* Address: 0x10041b558 | FUN_10041b558 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

int * FUN_10041b558(int *param_1)

{
  int *piVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)((long)param_1 + 0x71);
  if (3 < *(byte *)((long)param_1 + 0x71)) {
    uVar2 = *param_1 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      piVar1 = param_1 + 6;
      FUN_100004594(piVar1);
      if (*(long *)(param_1 + 0x16) == 0) {
        return piVar1;
      }
      param_1 = param_1 + 0x10;
      goto LAB_10041b5d4;
    }
  }
  else if (uVar2 != 2) {
    return (int *)0x0;
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  piVar1 = param_1 + 8;
  FUN_100004594(piVar1);
  if (*(long *)(param_1 + 0x18) == 0) {
    return piVar1;
  }
  param_1 = param_1 + 0x12;
LAB_10041b5d4:
  FUN_100004594(param_1);
  return param_1;
}



/* Address: 0x10041b5fc | FUN_10041b5fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 * FUN_10041b5fc(undefined8 *param_1,int *param_2)

{
  long lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = (uint)*(byte *)((long)param_2 + 0x71);
  if (3 < *(byte *)((long)param_2 + 0x71)) {
    uVar3 = *param_2 + 4;
  }
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 2);
      *param_1 = *(undefined8 *)param_2;
      param_1[1] = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 6);
      param_1[2] = *(undefined8 *)(param_2 + 4);
      param_1[3] = uVar4;
      lVar1 = *(long *)(param_2 + 0xe);
      param_1[8] = *(undefined8 *)(param_2 + 0x10);
      param_1[7] = lVar1;
      pcVar5 = (code *)**(undefined8 **)(lVar1 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar5)(param_1 + 4,param_2 + 8,lVar1);
      lVar1 = *(long *)(param_2 + 0x18);
      if (lVar1 == 0) {
        uVar4 = *(undefined8 *)(param_2 + 0x12);
        param_1[10] = *(undefined8 *)(param_2 + 0x14);
        param_1[9] = uVar4;
        uVar4 = *(undefined8 *)(param_2 + 0x16);
        param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
        param_1[0xb] = uVar4;
        param_1[0xd] = *(undefined8 *)(param_2 + 0x1a);
      }
      else {
        uVar4 = *(undefined8 *)(param_2 + 0x1a);
        param_1[0xc] = lVar1;
        param_1[0xd] = uVar4;
        (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 0x12);
      }
      *(char *)(param_1 + 0xe) = (char)param_2[0x1c];
      *(undefined1 *)((long)param_1 + 0x71) = 0;
      return param_1;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar4;
    param_1[2] = *(undefined8 *)(param_2 + 4);
    lVar1 = *(long *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = lVar1;
    pcVar5 = (code *)**(undefined8 **)(lVar1 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar5)(param_1 + 3,param_2 + 6,lVar1);
    lVar1 = *(long *)(param_2 + 0x16);
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x10);
      uVar7 = *(undefined8 *)(param_2 + 0x16);
      uVar6 = *(undefined8 *)(param_2 + 0x14);
      param_1[9] = *(undefined8 *)(param_2 + 0x12);
      param_1[8] = uVar4;
      param_1[0xb] = uVar7;
      param_1[10] = uVar6;
      param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x18);
      param_1[0xb] = lVar1;
      param_1[0xc] = uVar4;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 8,param_2 + 0x10);
    }
    *(char *)(param_1 + 0xd) = (char)param_2[0x1a];
    uVar2 = 1;
  }
  else {
    if (uVar3 != 2) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x71) = 3;
      return param_1;
    }
    uVar4 = *(undefined8 *)(param_2 + 2);
    *param_1 = *(undefined8 *)param_2;
    param_1[1] = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 6);
    param_1[2] = *(undefined8 *)(param_2 + 4);
    param_1[3] = uVar4;
    lVar1 = *(long *)(param_2 + 0xe);
    param_1[8] = *(undefined8 *)(param_2 + 0x10);
    param_1[7] = lVar1;
    pcVar5 = (code *)**(undefined8 **)(lVar1 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar5)(param_1 + 4,param_2 + 8,lVar1);
    lVar1 = *(long *)(param_2 + 0x18);
    if (lVar1 == 0) {
      uVar4 = *(undefined8 *)(param_2 + 0x12);
      param_1[10] = *(undefined8 *)(param_2 + 0x14);
      param_1[9] = uVar4;
      uVar4 = *(undefined8 *)(param_2 + 0x16);
      param_1[0xc] = *(undefined8 *)(param_2 + 0x18);
      param_1[0xb] = uVar4;
      param_1[0xd] = *(undefined8 *)(param_2 + 0x1a);
    }
    else {
      uVar4 = *(undefined8 *)(param_2 + 0x1a);
      param_1[0xc] = lVar1;
      param_1[0xd] = uVar4;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 9,param_2 + 0x12);
    }
    *(char *)(param_1 + 0xe) = (char)param_2[0x1c];
    uVar2 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x71) = uVar2;
  return param_1;
}



/* Address: 0x10041b810 | FUN_10041b810 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

int * FUN_10041b810(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0x71);
  if (3 < *(byte *)((long)param_1 + 0x71)) {
    uVar2 = *param_1 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 != 0) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 6);
      if (*(long *)(param_1 + 0x16) != 0) {
        FUN_100004594(param_1 + 0x10);
      }
      goto LAB_10041b8b4;
    }
  }
  else if (uVar2 != 2) goto LAB_10041b8b4;
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
  FUN_100004594(param_1 + 8);
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_100004594(param_1 + 0x12);
  }
LAB_10041b8b4:
  uVar2 = (uint)*(byte *)((long)param_2 + 0x71);
  if (3 < *(byte *)((long)param_2 + 0x71)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      lVar3 = *(long *)(param_2 + 0xe);
      *(long *)(param_1 + 0xe) = lVar3;
      *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
      pcVar4 = (code *)**(undefined8 **)(lVar3 + -8);
      _swift_bridgeObjectRetain();
      (*pcVar4)(param_1 + 8,param_2 + 8,lVar3);
      lVar3 = *(long *)(param_2 + 0x18);
      if (lVar3 == 0) {
        uVar6 = *(undefined8 *)(param_2 + 0x14);
        uVar5 = *(undefined8 *)(param_2 + 0x12);
        uVar8 = *(undefined8 *)(param_2 + 0x18);
        uVar7 = *(undefined8 *)(param_2 + 0x16);
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        *(undefined8 *)(param_1 + 0x18) = uVar8;
        *(undefined8 *)(param_1 + 0x16) = uVar7;
        *(undefined8 *)(param_1 + 0x14) = uVar6;
        *(undefined8 *)(param_1 + 0x12) = uVar5;
      }
      else {
        *(long *)(param_1 + 0x18) = lVar3;
        *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
        (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 0x12,param_2 + 0x12);
      }
      *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
      *(undefined1 *)((long)param_1 + 0x71) = 0;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    lVar3 = *(long *)(param_2 + 0xc);
    *(long *)(param_1 + 0xc) = lVar3;
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
    pcVar4 = (code *)**(undefined8 **)(lVar3 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar4)(param_1 + 6,param_2 + 6,lVar3);
    lVar3 = *(long *)(param_2 + 0x16);
    if (lVar3 == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x12);
      uVar5 = *(undefined8 *)(param_2 + 0x10);
      uVar8 = *(undefined8 *)(param_2 + 0x16);
      uVar7 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      *(undefined8 *)(param_1 + 0x12) = uVar6;
      *(undefined8 *)(param_1 + 0x10) = uVar5;
      *(undefined8 *)(param_1 + 0x16) = uVar8;
      *(undefined8 *)(param_1 + 0x14) = uVar7;
    }
    else {
      *(long *)(param_1 + 0x16) = lVar3;
      *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 0x10,param_2 + 0x10);
    }
    *(char *)(param_1 + 0x1a) = (char)param_2[0x1a];
    uVar1 = 1;
  }
  else {
    if (uVar2 != 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x71) = 3;
      return param_1;
    }
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    lVar3 = *(long *)(param_2 + 0xe);
    *(long *)(param_1 + 0xe) = lVar3;
    *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
    pcVar4 = (code *)**(undefined8 **)(lVar3 + -8);
    _swift_bridgeObjectRetain();
    (*pcVar4)(param_1 + 8,param_2 + 8,lVar3);
    lVar3 = *(long *)(param_2 + 0x18);
    if (lVar3 == 0) {
      uVar6 = *(undefined8 *)(param_2 + 0x14);
      uVar5 = *(undefined8 *)(param_2 + 0x12);
      uVar8 = *(undefined8 *)(param_2 + 0x18);
      uVar7 = *(undefined8 *)(param_2 + 0x16);
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      *(undefined8 *)(param_1 + 0x18) = uVar8;
      *(undefined8 *)(param_1 + 0x16) = uVar7;
      *(undefined8 *)(param_1 + 0x14) = uVar6;
      *(undefined8 *)(param_1 + 0x12) = uVar5;
    }
    else {
      *(long *)(param_1 + 0x18) = lVar3;
      *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1 + 0x12,param_2 + 0x12);
    }
    *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
    uVar1 = 2;
  }
  *(undefined1 *)((long)param_1 + 0x71) = uVar1;
  return param_1;
}



/* Address: 0x10041baec | FUN_10041baec */

void FUN_10041baec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  uVar2 = param_2[9];
  uVar1 = param_2[8];
  uVar4 = param_2[0xb];
  uVar3 = param_2[10];
  uVar6 = param_2[0xd];
  uVar5 = param_2[0xc];
  *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0xe);
  param_1[0xb] = uVar4;
  param_1[10] = uVar3;
  param_1[0xd] = uVar6;
  param_1[0xc] = uVar5;
  param_1[9] = uVar2;
  param_1[8] = uVar1;
  return;
}



/* Address: 0x10041bb18 | FUN_10041bb18 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

int * FUN_10041bb18(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0x71);
  if (3 < *(byte *)((long)param_1 + 0x71)) {
    uVar2 = *param_1 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
LAB_10041bb80:
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 8);
      if (*(long *)(param_1 + 0x18) != 0) {
        FUN_100004594(param_1 + 0x12);
      }
    }
    else {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      FUN_100004594(param_1 + 6);
      if (*(long *)(param_1 + 0x16) != 0) {
        FUN_100004594(param_1 + 0x10);
      }
    }
  }
  else if (uVar2 == 2) goto LAB_10041bb80;
  uVar2 = (uint)*(byte *)((long)param_2 + 0x71);
  if (3 < *(byte *)((long)param_2 + 0x71)) {
    uVar2 = *param_2 + 4;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 != 0) {
      uVar3 = *(undefined8 *)(param_2 + 0x10);
      uVar5 = *(undefined8 *)(param_2 + 0x16);
      uVar4 = *(undefined8 *)(param_2 + 0x14);
      *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(undefined8 *)(param_1 + 0x16) = uVar5;
      *(undefined8 *)(param_1 + 0x14) = uVar4;
      uVar3 = *(undefined8 *)((long)param_2 + 0x59);
      *(undefined8 *)((long)param_1 + 0x61) = *(undefined8 *)((long)param_2 + 0x61);
      *(undefined8 *)((long)param_1 + 0x59) = uVar3;
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar5 = *(undefined8 *)(param_2 + 8);
      uVar4 = *(undefined8 *)(param_2 + 0xe);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      uVar1 = 1;
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar5;
      *(undefined8 *)(param_1 + 0xe) = uVar4;
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      goto LAB_10041bc68;
    }
    *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x16);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x16) = uVar5;
    *(undefined8 *)(param_1 + 0x14) = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    uVar3 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 6) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0xe);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = 0;
  }
  else {
    if (uVar2 != 2) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      uVar1 = 3;
      goto LAB_10041bc68;
    }
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    uVar5 = *(undefined8 *)(param_2 + 0x16);
    uVar4 = *(undefined8 *)(param_2 + 0x14);
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    *(undefined8 *)(param_1 + 0x10) = uVar3;
    *(undefined8 *)(param_1 + 0x16) = uVar5;
    *(undefined8 *)(param_1 + 0x14) = uVar4;
    uVar3 = *(undefined8 *)(param_2 + 0x18);
    *(undefined8 *)(param_1 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
    *(undefined8 *)(param_1 + 0x18) = uVar3;
    *(char *)(param_1 + 0x1c) = (char)param_2[0x1c];
    uVar3 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar3;
    *(undefined8 *)(param_1 + 6) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar4;
    uVar4 = *(undefined8 *)(param_2 + 10);
    uVar3 = *(undefined8 *)(param_2 + 8);
    uVar6 = *(undefined8 *)(param_2 + 0xe);
    uVar5 = *(undefined8 *)(param_2 + 0xc);
    uVar1 = 2;
  }
  *(undefined8 *)(param_1 + 10) = uVar4;
  *(undefined8 *)(param_1 + 8) = uVar3;
  *(undefined8 *)(param_1 + 0xe) = uVar6;
  *(undefined8 *)(param_1 + 0xc) = uVar5;
LAB_10041bc68:
  *(undefined1 *)((long)param_1 + 0x71) = uVar1;
  return param_1;
}



/* Address: 0x10041bc7c | FUN_10041bc7c */

int FUN_10041bc7c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfc < param_2) && (*(char *)((long)param_1 + 0x72) != '\0')) {
    return *param_1 + 0xfd;
  }
  iVar1 = 0;
  if (3 < *(byte *)((long)param_1 + 0x71)) {
    iVar1 = (*(byte *)((long)param_1 + 0x71) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x10041bcb8 | FUN_10041bcb8 */

void FUN_10041bcb8(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfd) {
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x72) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x71) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined2 *)(param_1 + 0x1c) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 0xfd;
    if (0xfc < param_3) {
      *(undefined1 *)((long)param_1 + 0x72) = 1;
    }
  }
  return;
}



/* Address: 0x10041bd10 | FUN_10041bd10 */

uint FUN_10041bd10(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x71);
  if (3 < *(byte *)((long)param_1 + 0x71)) {
    uVar1 = *param_1 + 4;
  }
  return uVar1;
}



/* Address: 0x10041bd2c | FUN_10041bd2c */

void FUN_10041bd2c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (3 < param_2) {
    iVar1 = param_2 - 4;
    *(undefined1 *)(param_1 + 0x1c) = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x1a] = 0;
    param_1[0x1b] = 0;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_2 = 4;
    *param_1 = iVar1;
  }
  *(char *)((long)param_1 + 0x71) = (char)param_2;
  return;
}



/* Address: 0x10041bd60 | FUN_10041bd60 */

undefined1  [16] FUN_10041bd60(void)

{
  return ZEXT816(0x100ed36d0);
}



/* Address: 0x10041bd70 | FUN_10041bd70 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041bd70(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  
  lVar2 = unaff_x20 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar2 = *(long *)(lVar2 + 8);
  _swift_getObjectType();
  (**(code **)(lVar2 + 0x10))();
  _swift_unknownObjectRelease(lVar1);
  FUN_10041c6b8();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffb0,"dealloc");
  return;
}



/* Address: 0x10041be0c | _TtC14SwiftyStoreKit22PaymentQueueController::dealloc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::dealloc(ID param_1,SEL param_2)

{
  long lVar1;
  long lVar2;
  class_t *pcVar3;
  long lVar4;
  objc_super local_50;
  
  lVar2 = param_1 + paymentQueue;
  lVar1 = lVar2;
  _swift_unknownObjectUnownedLoadStrong(lVar2);
  lVar4 = *(long *)(lVar2 + 8);
  lVar2 = lVar1;
  _swift_getObjectType();
  (**(code **)(lVar4 + 0x10))(param_1,lVar2,lVar4);
  _swift_unknownObjectRelease(lVar1);
  pcVar3 = (class_t *)0x0;
  FUN_10041c6b8();
  local_50.receiver = param_1;
  local_50.super_class = pcVar3;
  _objc_msgSendSuper2(&local_50,"dealloc");
  return;
}



/* Address: 0x10041beb0 | _TtC14SwiftyStoreKit22PaymentQueueController::.cxx_destruct */

/* Function Stack Size: 0x10 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + paymentsController));
  _swift_release(*(undefined8 *)(param_1 + restorePurchasesController));
  _swift_release(*(undefined8 *)(param_1 + completeTransactionsController));
  FUN_10041cbe0(param_1 + paymentQueue);
  FUN_100004550(*(undefined8 *)(param_1 + entitlementRevocation),
                ((undefined8 *)(param_1 + entitlementRevocation))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + shouldAddStorePaymentHandler),
                ((undefined8 *)(param_1 + shouldAddStorePaymentHandler))[1]);
  FUN_100004550(*(undefined8 *)(param_1 + updatedDownloadsHandler),
                ((undefined8 *)(param_1 + updatedDownloadsHandler))[1]);
  return;
}



/* Address: 0x10041bf44 | FUN_10041bf44 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined8 FUN_10041bf44(ID *param_1)

{
  byte bVar1;
  undefined *self;
  ID IVar2;
  NSString *pNVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x20;
  ID IVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ID IVar11;
  ID IVar12;
  ID IVar13;
  ID IVar14;
  String SVar15;
  undefined1 auStack_90 [72];
  ulong local_48;
  
  IVar6 = *param_1;
  self = &_OBJC_CLASS___SKMutablePayment;
  _objc_allocWithZone();
  IVar2 = objc_stub::init((ID)self);
  pNVar3 = (NSString *)objc_stub::productIdentifier(IVar6);
  if (pNVar3 == (NSString *)0x0) {
    SVar15 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(SVar15.bridgeObject);
  }
  objc_stub::FUN_100c0d2e0(IVar2,pNVar3);
  pNVar3 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::FUN_100c0a740(IVar2,pNVar3);
  objc_stub::FUN_100c0d400(IVar2,param_1[2]);
  bVar1 = Swift::_stdlib_isOSVersionAtLeast(10,0xe,4);
  if ((bVar1 & 1) != 0) {
    uVar7 = param_1[1];
    local_48 = uVar7;
    if (1 < uVar7) {
      _swift_unknownObjectRetain(uVar7);
      _swift_dynamicCastObjCClass(uVar7,&_OBJC_CLASS___SKPaymentDiscount);
      if (uVar7 != 0) {
        objc_stub::FUN_100c0d060(IVar2,uVar7);
      }
      FUN_10041cc40(&local_48);
    }
  }
  lVar9 = unaff_x20 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar5 = lVar9;
  _swift_unknownObjectUnownedLoadStrong(lVar9);
  lVar10 = *(long *)(lVar9 + 8);
  lVar9 = lVar5;
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x18))(IVar2,lVar9,lVar10);
  _swift_unknownObjectRelease(lVar5);
  lVar9 = *(long *)(unaff_x20 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentsController);
  _swift_beginAccess(lVar9 + 0x10,auStack_90,0x21,0);
  uVar8 = *(ulong *)(lVar9 + 0x10);
  uVar7 = uVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  *(ulong *)(lVar9 + 0x10) = uVar8;
  uVar4 = uVar8;
  if ((uVar7 & 1) == 0) {
    uVar4 = 0;
    FUN_100420c1c(0,*(long *)(uVar8 + 0x10) + 1,1,uVar8);
    *(ulong *)(lVar9 + 0x10) = uVar4;
  }
  uVar7 = *(ulong *)(uVar4 + 0x10);
  uVar8 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar7) {
    uVar8 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100420c1c(uVar8,uVar7 + 1,1,uVar4);
  }
  *(ulong *)(uVar8 + 0x10) = uVar7 + 1;
  lVar5 = uVar8 + uVar7 * 0x48;
  IVar2 = *param_1;
  *(ID *)(lVar5 + 0x28) = param_1[1];
  *(ID *)(lVar5 + 0x20) = IVar2;
  IVar6 = param_1[3];
  IVar2 = param_1[2];
  IVar12 = param_1[5];
  IVar11 = param_1[4];
  IVar14 = param_1[7];
  IVar13 = param_1[6];
  *(ID *)(lVar5 + 0x60) = param_1[8];
  *(ID *)(lVar5 + 0x48) = IVar12;
  *(ID *)(lVar5 + 0x40) = IVar11;
  *(ID *)(lVar5 + 0x58) = IVar14;
  *(ID *)(lVar5 + 0x50) = IVar13;
  *(ID *)(lVar5 + 0x38) = IVar6;
  *(ID *)(lVar5 + 0x30) = IVar2;
  *(ulong *)(lVar9 + 0x10) = uVar8;
  _swift_endAccess(auStack_90);
  FUN_10041cc04(param_1,auStack_90);
  return 0;
}



/* Address: 0x10041c1a0 | FUN_10041c1a0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041c1a0(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  _StringGuts _Var7;
  char *pcVar8;
  long unaff_x20;
  long lVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String separator;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  iVar1 = (int)&local_60;
  FUN_100076688(param_1,&local_58);
  puVar2 = &DAT_100fc5c50;
  FUN_1000f7830(&DAT_100fc5c50,&DAT_100c49458);
  pvVar3 = (void *)0x0;
  FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
  _swift_dynamicCast(&local_60,&local_58,puVar2,pvVar3,6);
  if (iVar1 == 0) {
    pcVar6 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _Var7.unknown = (undefined *)0x40;
    pcVar8 = (char *)0x7;
    _swift_allocObject();
    pcVar6[0x18] = '\x02';
    pcVar6[0x19] = '\0';
    pcVar6[0x1a] = '\0';
    pcVar6[0x1b] = '\0';
    pcVar6[0x1c] = '\0';
    pcVar6[0x1d] = '\0';
    pcVar6[0x1e] = '\0';
    pcVar6[0x1f] = '\0';
    pcVar6[0x10] = '\x01';
    pcVar6[0x11] = '\0';
    pcVar6[0x12] = '\0';
    pcVar6[0x13] = '\0';
    pcVar6[0x14] = '\0';
    pcVar6[0x15] = '\0';
    pcVar6[0x16] = '\0';
    pcVar6[0x17] = '\0';
    local_58 = 0;
    uStack_50 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x28,_Var7);
    SVar10.bridgeObject = (void *)0x8000000100da60f0;
    SVar10.str = (char *)0xd000000000000026;
    SVar12.bridgeObject = pvVar3;
    SVar12.str = pcVar8;
    Swift::String::append(SVar10,SVar12);
    Swift::__print_unlocked
              (param_1,&local_58,puVar2,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    *(undefined **)(pcVar6 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(undefined8 *)(pcVar6 + 0x20) = local_58;
    *(undefined8 *)(pcVar6 + 0x28) = uStack_50;
    SVar11.bridgeObject = (void *)0x20;
    SVar11.str = pcVar6;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar11,separator);
    _swift_release(pcVar6);
  }
  else {
    lVar5 = unaff_x20 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
    lVar4 = lVar5;
    _swift_unknownObjectUnownedLoadStrong(lVar5);
    lVar9 = *(long *)(lVar5 + 8);
    lVar5 = lVar4;
    _swift_getObjectType();
    (**(code **)(lVar9 + 0x48))(local_60,lVar5,lVar9);
    _swift_unknownObjectRelease(lVar4);
  }
  return;
}



/* Address: 0x10041c330 | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:updatedTransactions: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue_updatedTransactions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10000ec2c(0,&DAT_100fc59c0,&PTR__OBJC_CLASS___SKPaymentTransaction_100f8dcb8);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  FUN_10041c6f4(param_4);
  _swift_bridgeObjectRelease(param_4);
  return;
}



/* Address: 0x10041c3b8 | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:didRevokeEntitlementsForProductIdentifiers: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::
     paymentQueue_didRevokeEntitlementsForProductIdentifiers_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = *(code **)(param_1 + entitlementRevocation);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + entitlementRevocation))[1];
    FUN_100011128(pcVar1,uVar2);
    _swift_retain(uVar2);
    FUN_100004550(pcVar1,uVar2);
    (*pcVar1)(param_4);
    _swift_bridgeObjectRelease(param_4);
    _swift_release(uVar2);
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x10041c488 | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:removedTransactions: */

/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue_removedTransactions_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  return;
}



/* Address: 0x10041c48c | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:restoreCompletedTransactionsFailedWithError: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::
     paymentQueue_restoreCompletedTransactionsFailedWithError_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  FUN_10041ff28(param_4);
  return;
}



/* Address: 0x10041c4e8 | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueueRestoreCompletedTransactionsFinished: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueueRestoreCompletedTransactionsFinished_
               (ID param_1,SEL param_2,ID param_3)

{
  FUN_100420118(param_1);
  return;
}



/* Address: 0x10041c51c | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:updatedDownloads: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue_updatedDownloads_
               (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  
  FUN_10000ec2c(0,&DAT_100fc5c38,&PTR__OBJC_CLASS___SKDownload_100f8dcd0);
  (extension_Foundation)::Swift::Array<undefined>::__unconditionallyBridgeFromObjectiveC();
  pcVar1 = *(code **)(param_1 + updatedDownloadsHandler);
  if (pcVar1 != (code *)0x0) {
    uVar2 = ((undefined8 *)(param_1 + updatedDownloadsHandler))[1];
    FUN_100011128(param_1,pcVar1,uVar2);
    (*pcVar1)(param_4);
    _swift_bridgeObjectRelease(param_4);
    FUN_100004550(pcVar1,uVar2);
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x10041c5d0 | _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue:shouldAddStorePayment:forProduct: */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue_shouldAddStorePayment_forProduct_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  code *pcVar1;
  uint uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + shouldAddStorePaymentHandler);
  if (pcVar1 == (code *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar3 = ((undefined8 *)(param_1 + shouldAddStorePaymentHandler))[1];
    FUN_100011128(pcVar1,uVar3);
    (*pcVar1)(param_4,param_5);
    uVar2 = (uint)param_4;
    FUN_100004550(pcVar1,uVar3);
  }
  return uVar2 & 1;
}



/* Address: 0x10041c68c | _TtC14SwiftyStoreKit22PaymentQueueController::init */

/* Function Stack Size: 0x10 bytes */

ID _TtC14SwiftyStoreKit22PaymentQueueController::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  
  __swift_stdlib_reportUnimplementedInitializer
            ("SwiftyStoreKit.PaymentQueueController",0x25,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10041c6b8);
  (*pcVar1)();
}



/* Address: 0x10041c6b8 | FUN_10041c6b8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041c6b8(void)

{
  return ZEXT816(0x100f9c2a0);
}



/* Address: 0x10041c6d8 | FUN_10041c6d8 */

void FUN_10041c6d8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x10041c6e4 | FUN_10041c6e4 */

undefined1  [16] FUN_10041c6e4(void)

{
  return ZEXT816(0x100ed3748);
}



/* Address: 0x10041c6f4 | FUN_10041c6f4 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10041c6f4(undefined *param_1)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  ulong self;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined *puVar8;
  ID self_00;
  char *pcVar9;
  _StringGuts _Var10;
  char *pcVar11;
  long unaff_x20;
  ulong uVar12;
  ulong uVar13;
  ID IVar14;
  undefined *puVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String separator;
  
  puVar15 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar13 = *(ulong *)(puVar15 + 0x10);
  }
  else {
    _Var2.unknown = puVar15;
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar13 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar13 != 0) {
    uVar12 = 0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar15 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10041cb08);
            (*pcVar3)();
          }
          self = *(ulong *)(param_1 + uVar12 * 8 + 0x20);
        }
        else {
          self = uVar12;
          FUN_100420594(uVar12,param_1);
        }
        uVar1 = uVar12 + 1;
        if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10041cb04);
          (*pcVar3)();
        }
        IVar4 = objc_stub::transactionState(self);
        if (IVar4 != 0) break;
        uVar12 = uVar12 + 1;
        if (uVar1 == uVar13) goto LAB_10041c82c;
      }
      puVar5 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar5 & 1) == 0) {
        FUN_10041de38(0,*(long *)(puVar8 + 0x10) + 1,1);
      }
      uVar12 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar12) {
        FUN_10041de38(1 < *(ulong *)(puVar8 + 0x18),uVar12 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar12 + 1;
      *(ulong *)(puVar8 + uVar12 * 8 + 0x20) = self;
      uVar12 = uVar1;
      puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
    } while (uVar1 != uVar13);
  }
LAB_10041c82c:
  if (((long)puVar8 < 0) || (((ulong)puVar8 >> 0x3e & 1) != 0)) {
    lVar6 = Swift::_CocoaArrayWrapper::get_endIndex((_CocoaArrayWrapper)puVar8);
  }
  else {
    lVar6 = *(long *)(puVar8 + 0x10);
  }
  if (lVar6 < 1) {
    _swift_release(puVar8);
    return;
  }
  lVar6 = unaff_x20 + _TtC14SwiftyStoreKit22PaymentQueueController::paymentQueue;
  lVar7 = lVar6;
  _swift_unknownObjectUnownedLoadStrong(lVar6);
  FUN_10041d898(param_1,lVar7,*(undefined8 *)(lVar6 + 8));
  _swift_release(puVar8);
  _swift_unknownObjectRelease(lVar7);
  lVar7 = lVar6;
  _swift_unknownObjectUnownedLoadStrong(lVar6);
  puVar15 = param_1;
  FUN_10041fad4(param_1,lVar7,*(undefined8 *)(lVar6 + 8));
  _swift_bridgeObjectRelease(param_1);
  _swift_unknownObjectRelease(lVar7);
  lVar7 = lVar6;
  _swift_unknownObjectUnownedLoadStrong(lVar6);
  puVar8 = puVar15;
  FUN_100415038(puVar15,lVar7,*(undefined8 *)(lVar6 + 8));
  _swift_bridgeObjectRelease(puVar15);
  _swift_unknownObjectRelease(lVar7);
  if ((ulong)puVar8 >> 0x3e == 0) {
    IVar4 = *(ID *)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var2.unknown = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar8) {
      _Var2.unknown = puVar8;
    }
    IVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
  }
  if ((long)IVar4 < 1) {
    _swift_bridgeObjectRelease(puVar8);
    return;
  }
  FUN_10041de54(0,IVar4,0);
  IVar14 = 0;
  do {
    if (((ulong)puVar8 & 0xc000000000000001) == 0) {
      self_00 = *(ID *)(puVar8 + IVar14 * 8 + 0x20);
    }
    else {
      self_00 = IVar14;
      FUN_100420594(IVar14,puVar8);
    }
    objc_stub::FUN_100c00b80(self_00);
    SVar16 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    uVar13 = *(ulong *)(puVar5 + 0x10);
    if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar13) {
      FUN_10041de54(1 < *(ulong *)(puVar5 + 0x18),uVar13 + 1,1);
    }
    IVar14 = IVar14 + 1;
    *(ulong *)(puVar5 + 0x10) = uVar13 + 1;
    *(String *)(puVar5 + uVar13 * 0x10 + 0x20) = SVar16;
  } while (IVar4 != IVar14);
  puVar15 = &DAT_100fc5c40;
  FUN_1000f7830(&DAT_100fc5c40,&DAT_100c49448);
  FUN_10041cb90();
  SVar16.bridgeObject = (void *)0xe100000000000000;
  SVar16.str = (char *)0xa;
  SVar16 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar16);
  _swift_bridgeObjectRelease(puVar5);
  pcVar9 = &DAT_100fc59b8;
  FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
  _Var10.unknown = (undefined *)0x40;
  pcVar11 = (char *)0x7;
  _swift_allocObject();
  pcVar9[0x18] = '\x02';
  pcVar9[0x19] = '\0';
  pcVar9[0x1a] = '\0';
  pcVar9[0x1b] = '\0';
  pcVar9[0x1c] = '\0';
  pcVar9[0x1d] = '\0';
  pcVar9[0x1e] = '\0';
  pcVar9[0x1f] = '\0';
  pcVar9[0x10] = '\x01';
  pcVar9[0x11] = '\0';
  pcVar9[0x12] = '\0';
  pcVar9[0x13] = '\0';
  pcVar9[0x14] = '\0';
  pcVar9[0x15] = '\0';
  pcVar9[0x16] = '\0';
  pcVar9[0x17] = '\0';
  Swift::_StringGuts::grow(0x19,_Var10);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar18.bridgeObject = puVar15;
  SVar18.str = pcVar11;
  Swift::String::append(SVar16,SVar18);
  _swift_bridgeObjectRelease(SVar16.bridgeObject);
  *(undefined **)(pcVar9 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
  pcVar9[0x20] = '\x17';
  pcVar9[0x21] = '\0';
  pcVar9[0x22] = '\0';
  pcVar9[0x23] = '\0';
  pcVar9[0x24] = '\0';
  pcVar9[0x25] = '\0';
  pcVar9[0x26] = '\0';
  pcVar9[0x27] = -0x30;
  pcVar9[0x28] = -0x30;
  pcVar9[0x29] = '`';
  pcVar9[0x2a] = -0x26;
  pcVar9[0x2b] = '\0';
  pcVar9[0x2c] = '\x01';
  pcVar9[0x2d] = '\0';
  pcVar9[0x2e] = '\0';
  pcVar9[0x2f] = -0x80;
  SVar17.bridgeObject = (void *)0x20;
  SVar17.str = pcVar9;
  separator.bridgeObject = (void *)0xa;
  separator.str = (char *)0xe100000000000000;
  Swift::_print(SVar17,separator);
  _swift_bridgeObjectRelease(puVar8);
  _swift_release(pcVar9);
  return;
}



/* Address: 0x10041cb90 | FUN_10041cb90 */

void FUN_10041cb90(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fc5c48 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fc5c40;
  FUN_1000f8b08(&DAT_100fc5c40,&DAT_100c49448);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fc5c48 = puVar2;
  return;
}



/* Address: 0x10041cbe0 | FUN_10041cbe0 */

undefined8 FUN_10041cbe0(undefined8 param_1)

{
  _swift_unknownObjectUnownedDestroy();
  return param_1;
}



/* Address: 0x10041cc04 | FUN_10041cc04 */

undefined8 FUN_10041cc04(undefined8 param_1,undefined8 param_2)

{
  FUN_10041da8c(param_2,param_1);
  return param_2;
}



/* Address: 0x10041cc40 | FUN_10041cc40 */

undefined8 FUN_10041cc40(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc5c58;
  FUN_1000f7830(&DAT_100fc5c58,&DAT_100c49460);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10041cc88 | FUN_10041cc88 */

void FUN_10041cc88(undefined8 param_1,Hasher param_2)

{
  __uint8 _Var1;
  byte bVar2;
  String SVar3;
  Hasher HVar4;
  long unaff_x20;
  __uint64 _Var5;
  Hasher HVar6;
  undefined1 auStack_98 [72];
  
  _Var5 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x18);
  HVar4.unknown = ((String *)(unaff_x20 + 0x20))->str;
  SVar3 = *(String *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  HVar6.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(0);
  (extension_ObjectiveC)::__C::NSObject::hash((Hasher)auStack_98);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::Hasher::_combine(bVar2,HVar4);
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x10041cd28 | FUN_10041cd28 */

void FUN_10041cd28(Hasher param_1,Hasher param_2)

{
  __uint8 _Var1;
  __uint8 _Var2;
  String SVar3;
  Hasher HVar4;
  long unaff_x20;
  __uint64 _Var5;
  
  _Var5 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x18);
  HVar4.unknown = ((String *)(unaff_x20 + 0x20))->str;
  SVar3 = *(String *)(unaff_x20 + 0x20);
  _Var2 = *(__uint8 *)(unaff_x20 + 0x30);
  (extension_ObjectiveC)::__C::NSObject::hash(param_1);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::String::hash(param_1,SVar3);
  Swift::Hasher::_combine(_Var2,HVar4);
  return;
}



/* Address: 0x10041cda4 | FUN_10041cda4 */

void FUN_10041cda4(__int64 param_1,Hasher param_2)

{
  __uint8 _Var1;
  byte bVar2;
  String SVar3;
  Hasher HVar4;
  long unaff_x20;
  __uint64 _Var5;
  Hasher HVar6;
  undefined1 auStack_98 [72];
  
  _Var5 = *(__uint64 *)(unaff_x20 + 0x10);
  _Var1 = *(__uint8 *)(unaff_x20 + 0x18);
  HVar4.unknown = ((String *)(unaff_x20 + 0x20))->str;
  SVar3 = *(String *)(unaff_x20 + 0x20);
  bVar2 = *(byte *)(unaff_x20 + 0x30);
  HVar6.unknown = (undefined *)(ulong)bVar2;
  Swift::Hasher::init(param_1);
  (extension_ObjectiveC)::__C::NSObject::hash((Hasher)auStack_98);
  Swift::Hasher::_combine(_Var5,param_2);
  Swift::Hasher::_combine(_Var1,param_2);
  Swift::String::hash((Hasher)auStack_98,SVar3);
  Swift::Hasher::_combine(bVar2,HVar4);
  Swift::Hasher::_finalize(HVar6);
  return;
}



/* Address: 0x10041ce40 | FUN_10041ce40 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10041ce40(ID *param_1,ID *param_2)

{
  bool bVar1;
  ID self;
  String SVar2;
  String SVar3;
  
  self = *param_2;
  objc_stub::productIdentifier(*param_1);
  SVar2 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  objc_stub::productIdentifier(self);
  SVar3 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  if (SVar2 == SVar3) {
    bVar1 = true;
  }
  else {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar2.str,(_StringGuts)SVar2.bridgeObject,
                       (_StringComparisonResult)(__int8)SVar3.str);
  }
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  return bVar1;
}



/* Address: 0x10041cf00 | FUN_10041cf00 */

undefined8 * FUN_10041cf00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  return param_1;
}



/* Address: 0x10041cf2c | FUN_10041cf2c */

void FUN_10041cf2c(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  return;
}



/* Address: 0x10041cf34 | FUN_10041cf34 */

undefined8 * FUN_10041cf34(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10041cf6c | FUN_10041cf6c */

undefined8 * FUN_10041cf6c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x10041cf9c | FUN_10041cf9c */

undefined1  [16] FUN_10041cf9c(void)

{
  return ZEXT816(0x100ed37d8);
}



/* Address: 0x10041cfac | FUN_10041cfac */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10041cfac(char *param_1,void *param_2)

{
  String SVar1;
  code *pcVar2;
  bool bVar3;
  ID *pIVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ID self;
  String SVar12;
  undefined1 auVar13 [16];
  undefined1 auStack_110 [72];
  undefined1 auStack_c8 [24];
  ID local_b0;
  ID IStack_a8;
  ID local_a0;
  ID IStack_98;
  ID local_90;
  ID IStack_88;
  ID IStack_80;
  ID IStack_78;
  ID local_70;
  
  SVar1.bridgeObject = param_2;
  SVar1.str = param_1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c8,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x10);
  uVar9 = *(ulong *)(lVar7 + 0x10);
  _swift_bridgeObjectRetain(lVar7);
  if (uVar9 != 0) {
    uVar10 = 0;
    lVar11 = 0x20;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10041d138);
        (*pcVar2)();
      }
      pIVar4 = (ID *)(lVar7 + lVar11);
      IStack_a8 = pIVar4[1];
      self = *pIVar4;
      IStack_98 = pIVar4[3];
      local_a0 = pIVar4[2];
      IStack_88 = pIVar4[5];
      local_90 = pIVar4[4];
      IStack_78 = pIVar4[7];
      IStack_80 = pIVar4[6];
      local_70 = pIVar4[8];
      local_b0 = self;
      FUN_10041cc04(&local_b0,auStack_110);
      objc_stub::productIdentifier(self);
      SVar12 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var5.unknown = SVar12.bridgeObject;
      if (SVar12 == SVar1) {
        _swift_bridgeObjectRelease(_Var5.unknown);
LAB_10041d0d4:
        uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
        _swift_bridgeObjectRetain(uVar8);
        pIVar4 = &local_b0;
        uVar6 = uVar8;
        FUN_10041d138(pIVar4,uVar8);
        _swift_bridgeObjectRelease(lVar7);
        _swift_bridgeObjectRelease(uVar8);
        FUN_10041e3d4(&local_b0);
        goto LAB_10041d114;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar12.str,_Var5,(_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(_Var5.unknown);
      if (bVar3) goto LAB_10041d0d4;
      uVar10 = uVar10 + 1;
      FUN_10041e3d4(&local_b0);
      lVar11 = lVar11 + 0x48;
    } while (uVar9 != uVar10);
  }
  _swift_bridgeObjectRelease(lVar7);
  pIVar4 = (ID *)0x0;
  uVar6 = 1;
LAB_10041d114:
  auVar13._8_8_ = uVar6;
  auVar13._0_8_ = pIVar4;
  return auVar13;
}



/* Address: 0x10041d138 | FUN_10041d138 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10041d138(ID *param_1,undefined8 *param_2)

{
  ID self;
  bool bVar1;
  long lVar2;
  _StringGuts _Var3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  undefined1 auVar10 [16];
  
  lVar5 = param_2[2];
  if (lVar5 != 0) {
    lVar2 = 0;
    do {
      self = param_2[4];
      uVar4 = param_2[5];
      uVar6 = param_2[9];
      uVar7 = param_2[0xc];
      FUN_10041e768(uVar4);
      _swift_bridgeObjectRetain(uVar6);
      _swift_retain(uVar7);
      objc_stub::productIdentifier(self);
      SVar8 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      _Var3.unknown = SVar8.bridgeObject;
      objc_stub::productIdentifier(*param_1);
      SVar9 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      if (SVar8 == SVar9) {
        _swift_bridgeObjectRelease(_Var3.unknown);
        _swift_bridgeObjectRelease(SVar9.bridgeObject);
        FUN_10041e778(uVar4);
        _swift_release(uVar7);
        _swift_bridgeObjectRelease(uVar6);
        uVar4 = 0;
        goto LAB_10041d2b0;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar8.str,_Var3,(_StringComparisonResult)(__int8)SVar9.str);
      _swift_bridgeObjectRelease(_Var3.unknown);
      _swift_bridgeObjectRelease(SVar9.bridgeObject);
      FUN_10041e778(uVar4);
      _swift_release(uVar7);
      _swift_bridgeObjectRelease(uVar6);
      if (bVar1) {
        uVar4 = 0;
        goto LAB_10041d2b0;
      }
      lVar2 = lVar2 + 1;
      param_2 = param_2 + 9;
    } while (lVar5 != lVar2);
  }
  lVar2 = 0;
  uVar4 = 1;
LAB_10041d2b0:
  auVar10._8_8_ = uVar4;
  auVar10._0_8_ = lVar2;
  return auVar10;
}



/* Address: 0x10041d2d0 | FUN_10041d2d0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10041d2d0(ID param_1,undefined8 param_2,long param_3)

{
  byte bVar1;
  undefined8 uVar2;
  code *pcVar3;
  ID IVar4;
  char *pcVar5;
  undefined8 uVar6;
  char *pcVar7;
  _StringGuts _Var8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  long unaff_x20;
  undefined **ppuVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_1d0 [24];
  ID local_1b8;
  undefined8 local_1b0;
  undefined1 local_147;
  String local_140;
  ID local_130;
  undefined8 uStack_128;
  ID local_120;
  undefined8 local_108;
  undefined **ppuStack_100;
  ID local_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined **ppuStack_d8;
  byte local_d0;
  undefined1 auStack_c8 [24];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  code *local_78;
  undefined8 local_70;
  
  IVar4 = objc_stub::FUN_100c07b40(param_1);
  objc_stub::productIdentifier(IVar4);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  SVar14 = SVar13;
  FUN_10041cfac();
  pcVar5 = SVar14.str;
  if (((uint)SVar14.bridgeObject & 0xff) == 1) goto LAB_10041d35c;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_c8,0);
  if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10041d7f0);
    (*pcVar3)();
  }
  if (*(char **)(*(long *)(unaff_x20 + 0x10) + 0x10) <= pcVar5) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10041d7f4);
    (*pcVar3)();
  }
  lVar11 = *(long *)(unaff_x20 + 0x10) + (long)pcVar5 * 0x48;
  uStack_a8 = *(undefined8 *)(lVar11 + 0x28);
  local_b0 = *(undefined8 *)(lVar11 + 0x20);
  uStack_98 = *(undefined8 *)(lVar11 + 0x38);
  local_a0 = *(undefined8 *)(lVar11 + 0x30);
  uStack_88 = *(undefined8 *)(lVar11 + 0x48);
  local_90 = *(undefined8 *)(lVar11 + 0x40);
  local_78 = *(code **)(lVar11 + 0x58);
  uStack_80 = *(undefined8 *)(lVar11 + 0x50);
  local_70 = *(undefined8 *)(lVar11 + 0x60);
  FUN_10041cc04(&local_b0,&local_1b8);
  IVar4 = objc_stub::transactionState(param_1);
  local_140 = SVar13;
  local_120 = param_1;
  if ((long)IVar4 < 3) {
    if (IVar4 != 1) {
      if (IVar4 == 2) {
        _swift_bridgeObjectRelease(SVar13.bridgeObject);
        pcVar3 = local_78;
        IVar4 = objc_stub::FUN_100c01e20(param_1);
        FUN_10041e5c0();
        local_147 = 3;
        local_1b8 = IVar4;
        (*pcVar3)(&local_1b8);
        FUN_10041e43c(&local_1b8);
        _swift_getObjectType(param_2);
        (**(code **)(param_3 + 0x48))(param_1,param_2,param_3);
        _swift_beginAccess(unaff_x20 + 0x10,&local_140,0x21,0);
        FUN_10041d7f4(&local_1b8,pcVar5);
        _swift_endAccess(&local_140);
        FUN_10041e3d4(&local_b0);
        FUN_10041e3d4(&local_1b8);
        return 1;
      }
LAB_10041d570:
      FUN_10041e3d4(&local_b0);
LAB_10041d35c:
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      return 0;
    }
    IVar4 = objc_stub::FUN_100c07b40(param_1);
    IVar4 = objc_stub::FUN_100c08520(IVar4);
    uVar2 = local_b0;
    uVar6 = 0;
    FUN_1004157e8();
    ppuStack_100 = &PTR_BYTE_100ed3ac0;
    local_108 = uVar6;
    local_f8 = objc_stub::FUN_100c07880(param_1);
    local_130 = IVar4;
    local_e0 = uVar6;
    uStack_128 = uVar2;
    pcVar3 = local_78;
  }
  else {
    if (IVar4 != 3) {
      if (IVar4 == 4) {
        IVar4 = objc_stub::FUN_100c07b40(param_1);
        IVar4 = objc_stub::FUN_100c08520(IVar4);
        uVar2 = local_b0;
        uVar6 = 0;
        FUN_1004157e8();
        ppuVar12 = &PTR_BYTE_100ed3ac0;
        ppuStack_100 = &PTR_BYTE_100ed3ac0;
        local_108 = uVar6;
        local_f8 = objc_stub::FUN_100c07880(param_1);
        pcVar3 = local_78;
        if (local_f8 == 0) {
          uVar6 = 0;
          ppuVar12 = (undefined **)0x0;
          local_f0 = 0;
          uStack_e8 = 0;
        }
        uStack_128 = uVar2;
        local_d0 = ((byte)uStack_98 ^ 0xff) & 1;
        local_130 = IVar4;
        local_e0 = uVar6;
        ppuStack_d8 = ppuVar12;
        FUN_10041e400(&local_140,&local_1b8);
        local_147 = 2;
        (*pcVar3)(&local_1b8);
        FUN_10041e43c(&local_1b8);
        goto LAB_10041d784;
      }
      goto LAB_10041d570;
    }
    pcVar7 = &DAT_100fc59b8;
    FUN_1000f7830(&DAT_100fc59b8,&DAT_100c49450);
    _Var8.unknown = (undefined *)0x40;
    pcVar9 = (char *)0x7;
    _swift_allocObject();
    pcVar7[0x18] = '\x02';
    pcVar7[0x19] = '\0';
    pcVar7[0x1a] = '\0';
    pcVar7[0x1b] = '\0';
    pcVar7[0x1c] = '\0';
    pcVar7[0x1d] = '\0';
    pcVar7[0x1e] = '\0';
    pcVar7[0x1f] = '\0';
    pcVar7[0x10] = '\x01';
    pcVar7[0x11] = '\0';
    pcVar7[0x12] = '\0';
    pcVar7[0x13] = '\0';
    pcVar7[0x14] = '\0';
    pcVar7[0x15] = '\0';
    pcVar7[0x16] = '\0';
    pcVar7[0x17] = '\0';
    local_1b8 = 0;
    local_1b0 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x2e,_Var8);
    _swift_bridgeObjectRelease(local_1b0);
    local_1b8 = 0xd00000000000002c;
    local_1b0 = 0x8000000100da6120;
    SVar15.bridgeObject = pvVar10;
    SVar15.str = pcVar9;
    Swift::String::append(SVar13,SVar15);
    *(undefined **)(pcVar7 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(ID *)(pcVar7 + 0x20) = local_1b8;
    *(undefined8 *)(pcVar7 + 0x28) = local_1b0;
    SVar14.bridgeObject = (void *)0x20;
    SVar14.str = pcVar7;
    SVar13.bridgeObject = (void *)0xa;
    SVar13.str = (char *)0xe100000000000000;
    Swift::_print(SVar14,SVar13);
    _swift_release(pcVar7);
    IVar4 = objc_stub::FUN_100c07b40(param_1);
    IVar4 = objc_stub::FUN_100c08520(IVar4);
    uVar2 = local_b0;
    uVar6 = 0;
    FUN_1004157e8();
    ppuStack_100 = &PTR_BYTE_100ed3ac0;
    local_108 = uVar6;
    local_f8 = objc_stub::FUN_100c07880(param_1);
    local_130 = IVar4;
    local_e0 = uVar6;
    uStack_128 = uVar2;
    pcVar3 = local_78;
  }
  ppuStack_d8 = &PTR_BYTE_100ed3ac0;
  if (local_f8 == 0) {
    local_e0 = 0;
    ppuStack_d8 = (undefined **)0x0;
    local_f0 = 0;
    uStack_e8 = 0;
  }
  bVar1 = ~(byte)uStack_98;
  local_d0 = ((byte)uStack_98 ^ 0xff) & 1;
  local_78 = pcVar3;
  FUN_10041e400(&local_140,&local_1b8);
  local_147 = 0;
  (*pcVar3)(&local_1b8);
  FUN_10041e43c(&local_1b8);
  if ((bVar1 & 1) == 0) {
    _swift_getObjectType(param_2);
    (**(code **)(param_3 + 0x48))(param_1,param_2,param_3);
  }
LAB_10041d784:
  _swift_beginAccess(unaff_x20 + 0x10,auStack_1d0,0x21,0);
  FUN_10041d7f4(&local_1b8,pcVar5);
  _swift_endAccess(auStack_1d0);
  FUN_10041e3d4(&local_b0);
  FUN_10041e3d4(&local_1b8);
  FUN_10041e470(&local_140);
  return 1;
}



/* Address: 0x10041d7f4 | FUN_10041d7f4 */

void FUN_10041d7f4(undefined8 *param_1,ulong param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar4 = *unaff_x20;
  uVar2 = uVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_10041e5ac();
  }
  if (param_2 < *(ulong *)(uVar4 + 0x10)) {
    lVar5 = *(ulong *)(uVar4 + 0x10) - 1;
    lVar3 = uVar4 + param_2 * 0x48;
    uVar6 = *(undefined8 *)(lVar3 + 0x40);
    uVar8 = *(undefined8 *)(lVar3 + 0x58);
    uVar7 = *(undefined8 *)(lVar3 + 0x50);
    param_1[5] = *(undefined8 *)(lVar3 + 0x48);
    param_1[4] = uVar6;
    param_1[7] = uVar8;
    param_1[6] = uVar7;
    param_1[8] = *(undefined8 *)(lVar3 + 0x60);
    uVar8 = *(undefined8 *)(lVar3 + 0x20);
    uVar7 = *(undefined8 *)(lVar3 + 0x38);
    uVar6 = *(undefined8 *)(lVar3 + 0x30);
    param_1[1] = *(undefined8 *)(lVar3 + 0x28);
    *param_1 = uVar8;
    param_1[3] = uVar7;
    param_1[2] = uVar6;
    _memmove((void *)(lVar3 + 0x20),(void *)(lVar3 + 0x68),(lVar5 - param_2) * 0x48);
    *(long *)(uVar4 + 0x10) = lVar5;
    *unaff_x20 = uVar4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10041d898);
  (*pcVar1)();
}



/* Address: 0x10041d898 | FUN_10041d898 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10041d898(undefined *param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  _CocoaArrayWrapper _Var2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  
  puVar10 = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
  if ((ulong)param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)(puVar10 + 0x10);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    _Var2.unknown = puVar10;
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var2.unknown = param_1;
    }
    uVar8 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  PTR___swiftEmptyArrayStorage_100eae0d8 = puVar3;
  if (uVar8 != 0) {
    uVar9 = 0;
    do {
      while( true ) {
        if (((ulong)param_1 & 0xc000000000000001) == 0) {
          if (*(ulong *)(puVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10041d9ec);
            (*pcVar4)();
          }
          uVar5 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
        }
        else {
          uVar5 = uVar9;
          FUN_100420594(uVar9,param_1);
        }
        uVar1 = uVar9 + 1;
        if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10041d9e8);
          (*pcVar4)();
        }
        uVar6 = uVar5;
        FUN_10041d2d0(uVar5,param_2,param_3);
        if ((uVar6 & 1) == 0) break;
        uVar9 = uVar9 + 1;
        if (uVar1 == uVar8) {
          return puVar3;
        }
      }
      puVar7 = puVar3;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((ulong)puVar7 & 1) == 0) {
        FUN_10041de38(0,*(long *)(puVar3 + 0x10) + 1,1);
      }
      uVar9 = *(ulong *)(puVar3 + 0x10);
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar9) {
        FUN_10041de38(1 < *(ulong *)(puVar3 + 0x18),uVar9 + 1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar9 + 1;
      *(ulong *)(puVar3 + uVar9 * 8 + 0x20) = uVar5;
      uVar9 = uVar1;
    } while (uVar1 != uVar8);
  }
  return puVar3;
}



/* Address: 0x10041da2c | FUN_10041da2c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10041da2c(void)

{
  return ZEXT816(0x100fc5ca0);
}



/* Address: 0x10041da4c | FUN_10041da4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10041da4c(long param_1)

{
  if (*(long *)(param_1 + 8) != 1) {
    _swift_unknownObjectRelease();
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_release(*(undefined8 *)(param_1 + 0x40));
  return;
}


