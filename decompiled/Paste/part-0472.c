/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100597228 | FUN_100597228 */

void FUN_100597228(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x388);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x378);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x348);
  (**(code **)(unaff_x22 + 0x390))(uVar1,*(undefined8 *)(unaff_x22 + 0x380));
  *(undefined8 *)(unaff_x22 + 0x398) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100597280,uVar2,0);
  return;
}



/* Address: 0x100597280 | FUN_100597280 */

void FUN_100597280(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  void *pvVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0x398);
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x298);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x210);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x228);
  lVar10 = *(long *)(unaff_x22 + 0x230);
  FUN_100004640(unaff_x22 + 0x210,uVar7);
  (**(code **)(lVar10 + 0x70))(uVar7,lVar10);
  FUN_100004594(unaff_x22 + 0x210);
  if (((uint)uVar7 & 0xff) < 2) {
    puVar8 = *(undefined8 **)(unaff_x22 + 0x340);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x238);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x250);
    lVar10 = *(long *)(unaff_x22 + 600);
    FUN_100004640();
    puVar1 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)(unaff_x22 + 0x10);
    _swift_initStackObject();
    *(undefined1 **)(puVar1 + 0x20) = &SUB_00006469;
    *(undefined8 *)(puVar1 + 0x18) = 4;
    *(undefined8 *)(puVar1 + 0x10) = 2;
    *(undefined1 **)(puVar1 + 0x28) = &SUB_e200000000000000;
    SVar13.bridgeObject = pcVar4;
    SVar13.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar13);
    pcVar6 = (char *)*puVar8;
    if (*(char *)(puVar8 + 2) == '\x01') {
      *(char **)(unaff_x22 + 0x328) = pcVar6;
      SVar12 = Swift::CustomStringConvertible::get_description();
      lVar11 = *(long *)(unaff_x22 + 0x340);
    }
    else {
      lVar11 = *(long *)(unaff_x22 + 0x340);
      SVar12.bridgeObject = *(void **)(lVar11 + 8);
      SVar12.str = pcVar6;
      _swift_bridgeObjectRetain(*(void **)(lVar11 + 8));
    }
    uVar9 = *(undefined8 *)(unaff_x22 + 0x398);
    SVar15.bridgeObject = pvVar5;
    SVar15.str = pcVar4;
    pcVar6 = SVar12.bridgeObject;
    Swift::String::append(SVar12,SVar15);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    *(undefined8 *)(puVar1 + 0x30) = 0;
    *(undefined8 *)(puVar1 + 0x38) = 0xe000000000000000;
    puVar1[0x58] = 0;
    *(undefined8 *)(puVar1 + 0x60) = 0x646f6874656d;
    *(undefined1 **)(puVar1 + 0x68) = &DAT_e600000000000000;
    SVar14.bridgeObject = pcVar4;
    SVar14.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar14);
    SVar16.bridgeObject = pvVar5;
    SVar16.str = pcVar4;
    Swift::String::write(*(String *)(lVar11 + 0x18),SVar16);
    *(undefined8 *)(puVar1 + 0x70) = 0;
    *(undefined8 *)(puVar1 + 0x78) = 0xe000000000000000;
    puVar1[0x98] = 0;
    puVar2 = puVar1;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar1);
    puVar3 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar1 + 0x20,2,puVar3);
    *(undefined1 *)(unaff_x22 + 0xb0) = 1;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100daddb0;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined **)(unaff_x22 + 0xd0) = puVar2;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x100) = 0x8000000100dadd50;
    *(undefined8 *)(unaff_x22 + 0x108) = 0x322;
    *(undefined1 *)(unaff_x22 + 0x110) = 1;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100daddb0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0;
    *(undefined **)(unaff_x22 + 0x130) = puVar2;
    *(undefined8 *)(unaff_x22 + 0x138) = 0;
    *(undefined8 *)(unaff_x22 + 0x140) = 0;
    *(undefined8 *)(unaff_x22 + 0x148) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x150) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x158) = 0xd00000000000001e;
    *(undefined8 *)(unaff_x22 + 0x160) = 0x8000000100dadd50;
    *(undefined8 *)(unaff_x22 + 0x168) = 0x322;
    FUN_1004eaa00(unaff_x22 + 0xb0,unaff_x22 + 0x170);
    FUN_1004eaa3c(unaff_x22 + 0x110);
    (**(code **)(lVar10 + 0x28))(unaff_x22 + 0xb0,uVar7);
    _swift_release(uVar9);
    FUN_1004eaa3c(unaff_x22 + 0xb0);
    FUN_100004594(unaff_x22 + 0x238);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x398));
  }
  uVar9 = *(undefined8 *)(unaff_x22 + 0x360);
  lVar10 = *(long *)(unaff_x22 + 0x358);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x350);
  puVar1 = &DAT_100fce8c0;
  FUN_1003b6598(&DAT_100fce8c0,0xff,PTR_typeMetadataAccessor_100eaeb38,
                PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
  _swift_allocError(uVar7,puVar1,0,0);
  Swift::CancellationError::init();
  _swift_willThrow();
  (**(code **)(lVar10 + 8))(uVar9,uVar7);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x310));
  _swift_task_dealloc(uVar9);
                    /* WARNING: Could not recover jumptable at 0x0001005975e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005975e4 | FUN_1005975e4 */

void FUN_1005975e4(void)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  UnownedSerialExecutor UVar4;
  undefined8 *puVar5;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  String SVar16;
  
  uVar6 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar8 = *(ulong *)(unaff_x22 + 0x360);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x350);
  *(undefined8 *)(unaff_x22 + 0x310) = uVar6;
  _swift_errorRetain(uVar6);
  puVar2 = &DAT_100fcb578;
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  _swift_dynamicCast(uVar8,unaff_x22 + 0x310,puVar2,uVar10,0);
  if ((uVar8 & 1) == 0) {
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x310));
    *(undefined8 *)(unaff_x22 + 0x318) = uVar6;
    _swift_errorRetain(uVar6);
    uVar8 = unaff_x22 + 0x260;
    _swift_dynamicCast(uVar8,unaff_x22 + 0x318,puVar2,&DAT_100eda9c8,6);
    puVar12 = *(undefined8 **)(unaff_x22 + 0x340);
    puVar11 = *(undefined8 **)(unaff_x22 + 0x330);
    if ((uVar8 & 1) == 0) {
      _swift_getErrorValue(uVar6,unaff_x22 + 800,unaff_x22 + 0x280);
      SVar16 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      _swift_errorRelease(uVar6);
      uVar10 = puVar12[1];
      uVar6 = *puVar12;
      *(undefined1 *)(unaff_x22 + 0x2c0) = *(undefined1 *)(puVar12 + 2);
      *(undefined8 *)(unaff_x22 + 0x2b8) = uVar10;
      *(undefined8 *)(unaff_x22 + 0x2b0) = uVar6;
      *(String *)(puVar11 + 3) = SVar16;
      puVar11[6] = 4;
      puVar11[5] = 0;
      *(undefined2 *)(puVar11 + 7) = 0x100;
      uVar10 = puVar12[1];
      uVar6 = *puVar12;
      *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar12 + 2);
      puVar11[1] = uVar10;
      *puVar11 = uVar6;
      puVar5 = (undefined8 *)(unaff_x22 + 0x2b0);
      lVar7 = unaff_x22 + 0x2e0;
    }
    else {
      puVar5 = (undefined8 *)(unaff_x22 + 0x2c8);
      uVar14 = *(undefined8 *)(unaff_x22 + 0x268);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x260);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x270);
      bVar1 = *(byte *)(unaff_x22 + 0x278);
      _swift_errorRelease(uVar6);
      uVar15 = puVar12[1];
      uVar6 = *puVar12;
      *(undefined1 *)(unaff_x22 + 0x2d8) = *(undefined1 *)(puVar12 + 2);
      *(undefined8 *)(unaff_x22 + 0x2d0) = uVar15;
      *puVar5 = uVar6;
      puVar11[4] = uVar14;
      puVar11[3] = uVar13;
      puVar11[5] = uVar10;
      puVar11[6] = (ulong)bVar1;
      *(undefined2 *)(puVar11 + 7) = 0x100;
      uVar10 = puVar12[1];
      uVar6 = *puVar12;
      *(undefined1 *)(puVar11 + 2) = *(undefined1 *)(puVar12 + 2);
      puVar11[1] = uVar10;
      *puVar11 = uVar6;
      lVar7 = unaff_x22 + 0x2f8;
    }
    FUN_10054a890(puVar5,lVar7);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x360));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar7 = *(long *)(unaff_x22 + 0x348);
    _swift_errorRelease(uVar6);
    lVar7 = *(long *)(lVar7 + 200);
    *(long *)(unaff_x22 + 0x378) = lVar7;
    if (lVar7 != 0) {
      lVar9 = *(long *)(*(long *)(unaff_x22 + 0x348) + 0xd0);
      *(long *)(unaff_x22 + 0x380) = lVar9;
      lVar3 = lVar7;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0x388) = lVar3;
      *(undefined8 *)(unaff_x22 + 0x390) = *(undefined8 *)(lVar9 + 0x10);
      uVar6 = *(undefined8 *)(lVar9 + 8);
      _swift_unknownObjectRetain(lVar7);
      UVar4 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_100597228,UVar4.unknown,uVar6);
      return;
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x360);
    lVar7 = *(long *)(unaff_x22 + 0x358);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x350);
    puVar2 = &DAT_100fce8c0;
    FUN_1003b6598(&DAT_100fce8c0,0xff,PTR_typeMetadataAccessor_100eaeb38,
                  PTR_Swift__Swift__CancellationError_>Swift__Error_100eaeb40);
    _swift_allocError(uVar6,puVar2,0,0);
    Swift::CancellationError::init();
    _swift_willThrow();
    (**(code **)(lVar7 + 8))(uVar10,uVar6);
    _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x310));
    _swift_task_dealloc(uVar10);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010059788c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100597890 | FUN_100597890 */

void FUN_100597890(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x438) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x430) = param_1;
  _swift_task_switch(FUN_1005978ac);
  return;
}



/* Address: 0x1005978ac | FUN_1005978ac */

void FUN_1005978ac(void)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  UnownedSerialExecutor UVar6;
  undefined7 extraout_var;
  long *plVar8;
  int *piVar9;
  long lVar10;
  undefined *puVar11;
  long lVar12;
  undefined *puVar13;
  long lVar14;
  undefined8 uVar15;
  ulong uVar16;
  long unaff_x22;
  undefined8 *puVar7;
  
  lVar10 = *(long *)(unaff_x22 + 0x438);
  lVar12 = *(long *)(lVar10 + 200);
  *(long *)(unaff_x22 + 0x440) = lVar12;
  if (lVar12 != 0) {
    lVar14 = *(long *)(lVar10 + 0xd0);
    *(long *)(unaff_x22 + 0x448) = lVar14;
    lVar10 = lVar12;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x450) = lVar10;
    *(undefined8 *)(unaff_x22 + 0x458) = *(undefined8 *)(lVar14 + 0x10);
    uVar15 = *(undefined8 *)(lVar14 + 8);
    _swift_unknownObjectRetain(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_100597b44,UVar6.unknown,uVar15);
    return;
  }
  _swift_beginAccess(lVar10 + 0xee,unaff_x22 + 0x398,0,0);
  if (*(char *)(lVar10 + 0xee) == '\x01') {
    _Var3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x430);
    _Var4.unknown = (undefined *)(*(undefined8 **)(unaff_x22 + 0x430))[1];
    if (_Var3.unknown != (undefined *)0xd000000000000019 ||
        _Var4.unknown != (undefined *)0x8000000100dab4f0) {
      bVar5 = Swift::_stringCompareWithSmolCheck(_Var3,_Var4,(_StringComparisonResult)0x19);
      puVar7 = (undefined8 *)CONCAT71(extraout_var,bVar5);
      if ((!bVar5) && ((*(byte *)(*(long *)(unaff_x22 + 0x438) + 0x110) & 1) == 0)) {
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,puVar7,0,0);
        *puVar7 = 0xd000000000000019;
        puVar7[1] = 0x8000000100dadd10;
        puVar7[2] = 0;
        *(undefined1 *)(puVar7 + 3) = 1;
        _swift_willThrow();
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_100597b2c;
      }
    }
  }
  lVar10 = *(long *)(unaff_x22 + 0x438);
  _swift_beginAccess(lVar10 + 0xf8,unaff_x22 + 0x3b0,0,0);
  puVar13 = *(undefined **)(lVar10 + 0xf8);
  if (*(long *)(puVar13 + 0x10) != 0) {
    lVar10 = **(long **)(unaff_x22 + 0x430);
    *(long *)(unaff_x22 + 0x468) = lVar10;
    uVar16 = (*(long **)(unaff_x22 + 0x430))[1];
    *(ulong *)(unaff_x22 + 0x470) = uVar16;
    _swift_bridgeObjectRetain(puVar13);
    FUN_100071370();
    puVar11 = puVar13;
    if ((uVar16 & 1) != 0) {
      puVar11 = *(undefined **)(*(long *)(puVar13 + 0x38) + lVar10 * 8);
      *(undefined **)(unaff_x22 + 0x478) = puVar11;
      _swift_bridgeObjectRetain(puVar11);
      _swift_bridgeObjectRelease(puVar13);
      if ((ulong)puVar11 >> 0x3e == 0) {
        lVar10 = *(long *)(((ulong)puVar11 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x480) = lVar10;
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar11 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar11) {
          _Var1.unknown = puVar11;
        }
        lVar10 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        *(long *)(unaff_x22 + 0x480) = lVar10;
      }
      if (lVar10 != 0) {
        if (lVar10 < 1) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100597b44);
          (*UNRECOVERED_JUMPTABLE)();
        }
        *(undefined8 *)(unaff_x22 + 0x488) = 0;
        if ((*(ulong *)(unaff_x22 + 0x478) & 0xc000000000000001) == 0) {
          plVar8 = *(long **)(*(ulong *)(unaff_x22 + 0x478) + 0x20);
          _swift_retain(plVar8);
        }
        else {
          plVar8 = (long *)0x0;
          FUN_10059b2c8();
        }
        *(long **)(unaff_x22 + 0x490) = plVar8;
        piVar9 = *(int **)(*plVar8 + 0x50);
        iVar2 = *piVar9;
        plVar8 = (long *)(ulong)(uint)piVar9[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x498) = plVar8;
        *plVar8 = unaff_x22;
        plVar8[1] = (long)FUN_100597fec;
                    /* WARNING: Could not recover jumptable at 0x000100597aac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar9))(*(undefined8 *)(unaff_x22 + 0x430));
        return;
      }
    }
    _swift_bridgeObjectRelease(puVar11);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100597b2c:
                    /* WARNING: Could not recover jumptable at 0x000100597b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100597b44 | FUN_100597b44 */

void FUN_100597b44(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x450);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x440);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x438);
  (**(code **)(unaff_x22 + 0x458))(uVar1,*(undefined8 *)(unaff_x22 + 0x448));
  *(undefined8 *)(unaff_x22 + 0x460) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100597b9c,uVar2,0);
  return;
}



/* Address: 0x100597b9c | FUN_100597b9c */

void FUN_100597b9c(void)

{
  _CocoaArrayWrapper _Var1;
  int iVar2;
  _StringGuts _Var3;
  _StringGuts _Var4;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar5;
  undefined7 extraout_var;
  long *plVar7;
  char *pcVar8;
  char *pcVar9;
  void *pvVar10;
  int *piVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  long unaff_x22;
  long lVar18;
  String *pSVar19;
  String SVar20;
  String SVar21;
  undefined8 *puVar6;
  
  lVar18 = *(long *)(unaff_x22 + 0x460);
  pcVar9 = (char *)0x0;
  pvVar10 = (void *)0x0;
  _swift_beginAccess(lVar18 + 0x20,unaff_x22 + 0x380);
  FUN_100076688(lVar18 + 0x20,unaff_x22 + 0x2e0);
  uVar12 = *(ulong *)(unaff_x22 + 0x2f8);
  lVar16 = *(long *)(unaff_x22 + 0x300);
  FUN_100004640(unaff_x22 + 0x2e0,uVar12);
  (**(code **)(lVar16 + 0x70))(uVar12,lVar16);
  FUN_100004594(unaff_x22 + 0x2e0);
  if ((uVar12 & 0xff) == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x460);
    pSVar19 = *(String **)(unaff_x22 + 0x430);
    FUN_100076688(lVar18 + 0x20,unaff_x22 + 0x308);
    uVar17 = *(undefined8 *)(unaff_x22 + 800);
    lVar16 = *(long *)(unaff_x22 + 0x328);
    FUN_100004640(unaff_x22 + 0x308,uVar17);
    puVar15 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar8 = (char *)(unaff_x22 + 0x130);
    _swift_initStackObject();
    *(undefined8 *)(puVar15 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar15 + 0x18) = 2;
    *(undefined8 *)(puVar15 + 0x10) = 1;
    *(undefined1 **)(puVar15 + 0x28) = &DAT_e600000000000000;
    SVar20.bridgeObject = pcVar9;
    SVar20.str = pcVar8;
    Swift::String::reserveCapacity(2,SVar20);
    SVar21.bridgeObject = pvVar10;
    SVar21.str = pcVar9;
    Swift::String::write(*pSVar19,SVar21);
    *(undefined8 *)(puVar15 + 0x30) = 0;
    *(undefined8 *)(puVar15 + 0x38) = 0xe000000000000000;
    puVar15[0x58] = 0;
    puVar14 = puVar15;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar15);
    FUN_1000fb4c4(puVar15 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    *(undefined1 *)(unaff_x22 + 0xd0) = 0;
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad660;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar14;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x352;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad660;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar14;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x352;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 400);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xd0));
    (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x10,uVar17,lVar16);
    _swift_release(uVar13);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x308);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x460));
  }
  lVar16 = *(long *)(unaff_x22 + 0x438);
  _swift_beginAccess(lVar16 + 0xee,unaff_x22 + 0x398,0,0);
  if (*(char *)(lVar16 + 0xee) == '\x01') {
    _Var3.unknown = (undefined *)**(undefined8 **)(unaff_x22 + 0x430);
    _Var4.unknown = (undefined *)(*(undefined8 **)(unaff_x22 + 0x430))[1];
    if (_Var3.unknown != (undefined *)0xd000000000000019 ||
        _Var4.unknown != (undefined *)0x8000000100dab4f0) {
      bVar5 = Swift::_stringCompareWithSmolCheck(_Var3,_Var4,(_StringComparisonResult)0x19);
      puVar6 = (undefined8 *)CONCAT71(extraout_var,bVar5);
      if ((!bVar5) && ((*(byte *)(*(long *)(unaff_x22 + 0x438) + 0x110) & 1) == 0)) {
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,puVar6,0,0);
        *puVar6 = 0xd000000000000019;
        puVar6[1] = 0x8000000100dadd10;
        puVar6[2] = 0;
        *(undefined1 *)(puVar6 + 3) = 1;
        _swift_willThrow();
        UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
        goto LAB_100597fc8;
      }
    }
  }
  lVar16 = *(long *)(unaff_x22 + 0x438);
  _swift_beginAccess(lVar16 + 0xf8,unaff_x22 + 0x3b0,0,0);
  puVar15 = *(undefined **)(lVar16 + 0xf8);
  if (*(long *)(puVar15 + 0x10) != 0) {
    lVar16 = **(long **)(unaff_x22 + 0x430);
    *(long *)(unaff_x22 + 0x468) = lVar16;
    uVar12 = (*(long **)(unaff_x22 + 0x430))[1];
    *(ulong *)(unaff_x22 + 0x470) = uVar12;
    _swift_bridgeObjectRetain(puVar15);
    FUN_100071370();
    puVar14 = puVar15;
    if ((uVar12 & 1) != 0) {
      puVar14 = *(undefined **)(*(long *)(puVar15 + 0x38) + lVar16 * 8);
      *(undefined **)(unaff_x22 + 0x478) = puVar14;
      _swift_bridgeObjectRetain(puVar14);
      _swift_bridgeObjectRelease(puVar15);
      if ((ulong)puVar14 >> 0x3e == 0) {
        lVar16 = *(long *)(((ulong)puVar14 & 0xffffffffffffff8) + 0x10);
        *(long *)(unaff_x22 + 0x480) = lVar16;
      }
      else {
        _Var1.unknown = (undefined *)((ulong)puVar14 & 0xffffffffffffff8);
        if ((undefined *)0x7fffffffffffffff < puVar14) {
          _Var1.unknown = puVar14;
        }
        lVar16 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
        *(long *)(unaff_x22 + 0x480) = lVar16;
      }
      if (lVar16 != 0) {
        if (lVar16 < 1) {
                    /* WARNING: Does not return */
          UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100597fec);
          (*UNRECOVERED_JUMPTABLE)();
        }
        *(undefined8 *)(unaff_x22 + 0x488) = 0;
        if ((*(ulong *)(unaff_x22 + 0x478) & 0xc000000000000001) == 0) {
          plVar7 = *(long **)(*(ulong *)(unaff_x22 + 0x478) + 0x20);
          _swift_retain(plVar7);
        }
        else {
          plVar7 = (long *)0x0;
          FUN_10059b2c8();
        }
        *(long **)(unaff_x22 + 0x490) = plVar7;
        piVar11 = *(int **)(*plVar7 + 0x50);
        iVar2 = *piVar11;
        plVar7 = (long *)(ulong)(uint)piVar11[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x498) = plVar7;
        *plVar7 = unaff_x22;
        plVar7[1] = (long)FUN_100597fec;
                    /* WARNING: Could not recover jumptable at 0x000100597f48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar2 + (long)piVar11))(*(undefined8 *)(unaff_x22 + 0x430));
        return;
      }
    }
    _swift_bridgeObjectRelease(puVar14);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_100597fc8:
                    /* WARNING: Could not recover jumptable at 0x000100597fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100597fec | FUN_100597fec */

void FUN_100597fec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4a0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x498));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100598048;
  }
  else {
    pcVar1 = FUN_100598114;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x438),0);
  return;
}



/* Address: 0x100598048 | FUN_100598048 */

void FUN_100598048(void)

{
  int iVar1;
  int *piVar2;
  long *plVar3;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x490));
  plVar3 = (long *)(*(long *)(unaff_x22 + 0x488) + 1);
  if (plVar3 == *(long **)(unaff_x22 + 0x480)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x478));
                    /* WARNING: Could not recover jumptable at 0x000100598094. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x488) = plVar3;
  if ((*(ulong *)(unaff_x22 + 0x478) & 0xc000000000000001) == 0) {
    plVar3 = *(long **)(*(ulong *)(unaff_x22 + 0x478) + (long)plVar3 * 8 + 0x20);
    _swift_retain(plVar3);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x490) = plVar3;
  piVar2 = *(int **)(*plVar3 + 0x50);
  iVar1 = *piVar2;
  plVar3 = (long *)(ulong)(uint)piVar2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x498) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100597fec;
                    /* WARNING: Could not recover jumptable at 0x000100598110. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar2))(*(undefined8 *)(unaff_x22 + 0x430));
  return;
}



/* Address: 0x100598114 | FUN_100598114 */

void FUN_100598114(void)

{
  int iVar1;
  long lVar2;
  UnownedSerialExecutor UVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  undefined8 uVar8;
  long unaff_x22;
  
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x438) + 200);
  *(long *)(unaff_x22 + 0x4a8) = lVar5;
  if (lVar5 != 0) {
    lVar7 = *(long *)(*(long *)(unaff_x22 + 0x438) + 0xd0);
    *(long *)(unaff_x22 + 0x4b0) = lVar7;
    lVar2 = lVar5;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x4b8) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x4c0) = *(undefined8 *)(lVar7 + 0x10);
    uVar8 = *(undefined8 *)(lVar7 + 8);
    _swift_unknownObjectRetain(lVar5);
    UVar3 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_10059826c,UVar3.unknown,uVar8);
    return;
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x4a0);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x490));
  _swift_errorRelease(uVar8);
  plVar6 = (long *)(*(long *)(unaff_x22 + 0x488) + 1);
  if (plVar6 == *(long **)(unaff_x22 + 0x480)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x478));
                    /* WARNING: Could not recover jumptable at 0x0001005981e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x488) = plVar6;
  if ((*(ulong *)(unaff_x22 + 0x478) & 0xc000000000000001) == 0) {
    plVar6 = *(long **)(*(ulong *)(unaff_x22 + 0x478) + (long)plVar6 * 8 + 0x20);
    _swift_retain(plVar6);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x490) = plVar6;
  piVar4 = *(int **)(*plVar6 + 0x50);
  iVar1 = *piVar4;
  plVar6 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x498) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100597fec;
                    /* WARNING: Could not recover jumptable at 0x000100598268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(*(undefined8 *)(unaff_x22 + 0x430));
  return;
}



/* Address: 0x10059826c | FUN_10059826c */

void FUN_10059826c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x438);
  (**(code **)(unaff_x22 + 0x4c0))(uVar1,*(undefined8 *)(unaff_x22 + 0x4b0));
  *(undefined8 *)(unaff_x22 + 0x4c8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_1005982c4,uVar2,0);
  return;
}



/* Address: 0x1005982c4 | FUN_1005982c4 */

void FUN_1005982c4(void)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  int *piVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  char *pcVar13;
  undefined8 uVar14;
  long *plVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  
  lVar17 = *(long *)(unaff_x22 + 0x4c8);
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x3c8,0);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x330);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x348);
  lVar16 = *(long *)(unaff_x22 + 0x350);
  FUN_100004640(unaff_x22 + 0x330,uVar12);
  (**(code **)(lVar16 + 0x70))(uVar12,lVar16);
  FUN_100004594(unaff_x22 + 0x330);
  if (((uint)uVar12 & 0xff) < 6) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x4a0);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x490);
    pcVar13 = *(char **)(unaff_x22 + 0x470);
    SVar19 = *(String *)(unaff_x22 + 0x468);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x358);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x370);
    lVar16 = *(long *)(unaff_x22 + 0x378);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0xa0;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = 0x646f6874656d;
    *(undefined8 *)(puVar2 + 0x18) = 4;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e600000000000000;
    *(undefined8 *)(unaff_x22 + 0x408) = 0;
    *(undefined8 *)(unaff_x22 + 0x410) = 0xe000000000000000;
    SVar18.bridgeObject = pcVar6;
    SVar18.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar18);
    *(undefined8 *)(unaff_x22 + 0x3f8) = *(undefined8 *)(unaff_x22 + 0x408);
    *(undefined8 *)(unaff_x22 + 0x400) = *(undefined8 *)(unaff_x22 + 0x410);
    SVar20.bridgeObject = pvVar7;
    SVar20.str = pcVar6;
    Swift::String::write(SVar19,SVar20);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x400);
    *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(unaff_x22 + 0x3f8);
    *(undefined8 *)(puVar2 + 0x38) = uVar10;
    puVar2[0x58] = 0;
    *(undefined8 *)(puVar2 + 0x60) = 0x726f727265;
    *(undefined1 **)(puVar2 + 0x68) = &DAT_e500000000000000;
    *(undefined8 *)(unaff_x22 + 0x418) = 0;
    *(undefined8 *)(unaff_x22 + 0x420) = 0xe000000000000000;
    SVar19.bridgeObject = pcVar6;
    SVar19.str = pcVar13;
    Swift::String::reserveCapacity(2,SVar19);
    *(undefined8 *)(unaff_x22 + 0x2b0) = *(undefined8 *)(unaff_x22 + 0x418);
    *(undefined8 *)(unaff_x22 + 0x2b8) = *(undefined8 *)(unaff_x22 + 0x420);
    *(undefined8 *)(unaff_x22 + 0x2c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2d0) = 0;
    *(undefined8 *)(unaff_x22 + 0x2c8) = 0;
    *(undefined1 *)(unaff_x22 + 0x2d8) = 0;
    _swift_getErrorValue(uVar11,unaff_x22 + 0x428,unaff_x22 + 0x3e0);
    FUN_1005c4024(*(undefined8 *)(unaff_x22 + 0x3e0),*(undefined8 *)(unaff_x22 + 1000));
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2b8);
    *(undefined8 *)(puVar2 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2b0);
    *(undefined8 *)(puVar2 + 0x78) = uVar10;
    puVar2[0x98] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    puVar4 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x70) = 5;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad680;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar3;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 200) = 0x365;
    *(undefined1 *)(unaff_x22 + 0x1f0) = 5;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd00000000000001b;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dad680;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined **)(unaff_x22 + 0x210) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dad640;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x365;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x250);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x70,uVar12);
    _swift_release(uVar14);
    _swift_errorRelease(uVar11);
    _swift_release(uVar9);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x358);
  }
  else {
    uVar14 = *(undefined8 *)(unaff_x22 + 0x4c8);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x4a0);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x490));
    _swift_errorRelease(uVar12);
    _swift_release(uVar14);
  }
  plVar15 = (long *)(*(long *)(unaff_x22 + 0x488) + 1);
  if (plVar15 == *(long **)(unaff_x22 + 0x480)) {
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x478));
                    /* WARNING: Could not recover jumptable at 0x00010059863c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long **)(unaff_x22 + 0x488) = plVar15;
  if ((*(ulong *)(unaff_x22 + 0x478) & 0xc000000000000001) == 0) {
    plVar15 = *(long **)(*(ulong *)(unaff_x22 + 0x478) + (long)plVar15 * 8 + 0x20);
    _swift_retain(plVar15);
  }
  else {
    FUN_10059b2c8();
  }
  *(long **)(unaff_x22 + 0x490) = plVar15;
  piVar8 = *(int **)(*plVar15 + 0x50);
  iVar1 = *piVar8;
  plVar15 = (long *)(ulong)(uint)piVar8[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x498) = plVar15;
  *plVar15 = unaff_x22;
  plVar15[1] = (long)FUN_100597fec;
                    /* WARNING: Could not recover jumptable at 0x0001005986c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar8))(*(undefined8 *)(unaff_x22 + 0x430));
  return;
}



/* Address: 0x1005986cc | FUN_1005986cc */

void FUN_1005986cc(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x290) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x288) = param_1;
  _swift_task_switch(FUN_1005986e8);
  return;
}



/* Address: 0x1005986e8 | FUN_1005986e8 */

void FUN_1005986e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  long lVar6;
  UnownedSerialExecutor UVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  long lVar13;
  long unaff_x22;
  
  puVar9 = *(undefined8 **)(unaff_x22 + 0x288);
  pcVar11 = (code *)*puVar9;
  *(code **)(unaff_x22 + 0x298) = pcVar11;
  uVar12 = puVar9[1];
  *(undefined8 *)(unaff_x22 + 0x2a0) = uVar12;
  uVar5 = *(undefined1 *)(puVar9 + 2);
  *(undefined1 *)(unaff_x22 + 0x201) = uVar5;
  _swift_beginAccess(*(long *)(unaff_x22 + 0x290) + 0x108,unaff_x22 + 0x250,0x21,0);
  FUN_1005064d4(pcVar11,uVar12,uVar5);
  puVar9 = (undefined8 *)(unaff_x22 + 0x250);
  _swift_endAccess();
  if (pcVar11 == (code *)0x0) {
    lVar10 = *(long *)(*(long *)(unaff_x22 + 0x290) + 200);
    *(long *)(unaff_x22 + 0x2a8) = lVar10;
    if (lVar10 != 0) {
      lVar13 = *(long *)(*(long *)(unaff_x22 + 0x290) + 0xd0);
      *(long *)(unaff_x22 + 0x2b0) = lVar13;
      lVar6 = lVar10;
      _swift_getObjectType();
      *(long *)(unaff_x22 + 0x2b8) = lVar6;
      *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(lVar13 + 0x10);
      uVar12 = *(undefined8 *)(lVar13 + 8);
      _swift_unknownObjectRetain(lVar10);
      UVar7 = Swift::Actor::get_unownedExecutor();
      _swift_task_switch(FUN_1005989b0,UVar7.unknown,uVar12);
      return;
    }
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x288);
    uVar1 = *(undefined8 *)(lVar10 + 0x18);
    uVar3 = *(undefined8 *)(lVar10 + 0x20);
    uVar2 = *(undefined8 *)(lVar10 + 0x28);
    uVar4 = *(undefined8 *)(lVar10 + 0x30);
    uVar5 = *(undefined1 *)(lVar10 + 0x38);
    if (*(char *)(lVar10 + 0x39) == '\x01') {
      FUN_1004db3ac();
      puVar8 = &DAT_100eda9c8;
      _swift_allocError(&DAT_100eda9c8,puVar9,0,0);
      *puVar9 = uVar1;
      puVar9[1] = uVar3;
      puVar9[2] = uVar2;
      *(char *)(puVar9 + 3) = (char)uVar4;
      *(undefined **)(unaff_x22 + 0x1e0) = puVar8;
      *(undefined1 *)(unaff_x22 + 0x200) = 1;
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_10045b2bc,FUN_1004d9ee8);
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_10045b2bc,FUN_1004d9ee8);
      _swift_errorRetain(puVar8);
      (*pcVar11)(unaff_x22 + 0x1e0);
      FUN_100004550(pcVar11,uVar12);
      FUN_10054a850(uVar1,uVar3,uVar2,uVar4,uVar5,1,FUN_1004dbde0,FUN_1004d9f84);
      FUN_1000fb4c4(unaff_x22 + 0x1e0,&DAT_100fcd0b8,&DAT_100c53690);
      _swift_errorRelease(puVar8);
    }
    else {
      *(undefined **)(unaff_x22 + 0x248) = &DAT_100edd000;
      puVar8 = &DAT_100ee3468;
      _swift_allocObject(&DAT_100ee3468,0x31,7);
      *(undefined **)(unaff_x22 + 0x230) = puVar8;
      *(undefined8 *)(puVar8 + 0x10) = uVar1;
      *(undefined8 *)(puVar8 + 0x18) = uVar3;
      *(undefined8 *)(puVar8 + 0x20) = uVar2;
      *(undefined8 *)(puVar8 + 0x28) = uVar4;
      puVar8[0x30] = uVar5;
      FUN_10000cbfc(unaff_x22 + 0x230,unaff_x22 + 0x208);
      *(undefined1 *)(unaff_x22 + 0x228) = 0;
      FUN_10045b2bc(uVar1,uVar3,uVar2,uVar4,uVar5);
      (*pcVar11)(unaff_x22 + 0x208);
      FUN_100004550(pcVar11,uVar12);
      FUN_1000fb4c4(unaff_x22 + 0x208,&DAT_100fcd0b8,&DAT_100c53690);
      FUN_100004594(unaff_x22 + 0x230);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001005989ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005989b0 | FUN_1005989b0 */

void FUN_1005989b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2b8);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2a8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
  (**(code **)(unaff_x22 + 0x2c0))(uVar1,*(undefined8 *)(unaff_x22 + 0x2b0));
  *(undefined8 *)(unaff_x22 + 0x2c8) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100598a08,uVar2,0);
  return;
}



/* Address: 0x100598a08 | FUN_100598a08 */

void FUN_100598a08(void)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  long unaff_x22;
  long lVar9;
  undefined8 uVar10;
  void *pvVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  
  lVar9 = *(long *)(unaff_x22 + 0x2c8);
  pcVar7 = (char *)0x0;
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar9 + 0x20,unaff_x22 + 0x268);
  FUN_100076688(lVar9 + 0x20,unaff_x22 + 400);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1a8);
  lVar1 = *(long *)(unaff_x22 + 0x1b0);
  FUN_100004640(unaff_x22 + 400,uVar3);
  (**(code **)(lVar1 + 0x70))(uVar3,lVar1);
  FUN_100004594(unaff_x22 + 400);
  if (((uint)uVar3 & 0xff) < 5) {
    cVar2 = *(char *)(unaff_x22 + 0x201);
    FUN_100076688(lVar9 + 0x20,unaff_x22 + 0x1b8);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x1d0);
    lVar1 = *(long *)(unaff_x22 + 0x1d8);
    FUN_100004640();
    puVar4 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)(unaff_x22 + 0x70);
    _swift_initStackObject();
    *(undefined1 **)(puVar4 + 0x20) = &SUB_00006469;
    *(undefined8 *)(puVar4 + 0x18) = 2;
    *(undefined8 *)(puVar4 + 0x10) = 1;
    *(undefined1 **)(puVar4 + 0x28) = &SUB_e200000000000000;
    SVar13.bridgeObject = pcVar7;
    SVar13.str = pcVar6;
    Swift::String::reserveCapacity(2,SVar13);
    if (cVar2 == '\x01') {
      *(undefined8 *)(unaff_x22 + 0x280) = *(undefined8 *)(unaff_x22 + 0x298);
      SVar12 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar11 = *(void **)(unaff_x22 + 0x2a0);
      _swift_bridgeObjectRetain(pvVar11);
      SVar12.bridgeObject = pvVar11;
      SVar12.str = *(char **)(unaff_x22 + 0x298);
    }
    uVar10 = *(undefined8 *)(unaff_x22 + 0x2c8);
    SVar14.bridgeObject = pvVar8;
    SVar14.str = pcVar7;
    Swift::String::append(SVar12,SVar14);
    _swift_bridgeObjectRelease(SVar12.bridgeObject);
    *(undefined8 *)(puVar4 + 0x30) = 0;
    *(undefined8 *)(puVar4 + 0x38) = 0xe000000000000000;
    puVar4[0x58] = 0;
    puVar5 = puVar4;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar4);
    FUN_1000fb4c4(puVar4 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    *(undefined1 *)(unaff_x22 + 0x10) = 4;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000025;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dadce0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar5;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x378;
    *(undefined1 *)(unaff_x22 + 0xd0) = 4;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000025;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dadce0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar5;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000012;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad6a0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x378;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x130);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    (**(code **)(lVar1 + 0x28))(unaff_x22 + 0x10,uVar3,lVar1);
    _swift_release(uVar10);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x1b8);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2c8));
  }
                    /* WARNING: Could not recover jumptable at 0x000100598c84. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100598c88 | FUN_100598c88 */

void FUN_100598c88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  long unaff_x20;
  char *pcVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  undefined8 local_80;
  undefined1 *local_78;
  byte local_70;
  undefined1 auStack_68 [24];
  undefined1 auStack_43 [2];
  char local_41;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xee);
  pvVar2 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_68,0);
  if (*(char *)(unaff_x20 + 0xee) == '\x01') {
    _Var5.unknown = *(undefined **)(unaff_x20 + 0x178);
    if (_Var5.unknown == &DAT_00000001) {
      puVar3 = (undefined1 *)0x8000000100dade10;
      uVar6 = 0xd000000000000023;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x170);
      local_70 = *(byte *)(unaff_x20 + 0x180);
      pcVar4 = (char *)(ulong)local_70;
      local_80._0_6_ = (undefined6)uVar6;
      local_78 = _Var5.unknown;
      _swift_bridgeObjectRetain(_Var5.unknown);
      _swift_getAtKeyPath(auStack_43,&local_80,param_1);
      FUN_100161a8c(uVar6);
      if (local_41 != '\x01') {
        return;
      }
      local_80 = 0;
      local_78 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x21,_Var5);
      _swift_bridgeObjectRelease(local_78);
      local_80 = param_2;
      local_78 = (undefined1 *)param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar7.bridgeObject = (void *)0x8000000100dade40;
      SVar7.str = (char *)0xd00000000000001f;
      SVar8.bridgeObject = pvVar2;
      SVar8.str = pcVar4;
      Swift::String::append(SVar7,SVar8);
      puVar3 = local_78;
      uVar6 = local_80;
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar6;
    puVar1[1] = puVar3;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100598e04 | FUN_100598e04 */

void FUN_100598e04(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  void *pvVar2;
  undefined1 *puVar3;
  long unaff_x20;
  char *pcVar4;
  _StringGuts _Var5;
  undefined8 uVar6;
  String SVar7;
  String SVar8;
  undefined8 local_80;
  undefined1 *local_78;
  byte local_70;
  undefined1 auStack_68 [24];
  char local_41;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xee);
  pvVar2 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_68,0);
  if (*(char *)(unaff_x20 + 0xee) == '\x01') {
    _Var5.unknown = *(undefined **)(unaff_x20 + 0x178);
    if (_Var5.unknown == &DAT_00000001) {
      puVar3 = (undefined1 *)0x8000000100dade10;
      uVar6 = 0xd000000000000023;
    }
    else {
      uVar6 = *(undefined8 *)(unaff_x20 + 0x170);
      local_70 = *(byte *)(unaff_x20 + 0x180);
      pcVar4 = (char *)(ulong)local_70;
      local_80._0_6_ = (undefined6)uVar6;
      local_78 = _Var5.unknown;
      _swift_bridgeObjectRetain(_Var5.unknown);
      _swift_getAtKeyPath(&local_41,&local_80,param_1);
      FUN_100161a8c(uVar6);
      if (local_41 != '\x03') {
        return;
      }
      local_80 = 0;
      local_78 = (undefined1 *)0xe000000000000000;
      Swift::_StringGuts::grow(0x21,_Var5);
      _swift_bridgeObjectRelease(local_78);
      local_80 = param_2;
      local_78 = (undefined1 *)param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar7.bridgeObject = (void *)0x8000000100dade40;
      SVar7.str = (char *)0xd00000000000001f;
      SVar8.bridgeObject = pvVar2;
      SVar8.str = pcVar4;
      Swift::String::append(SVar7,SVar8);
      puVar3 = local_78;
      uVar6 = local_80;
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar6;
    puVar1[1] = puVar3;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100598f80 | FUN_100598f80 */

void FUN_100598f80(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100ee2c70;
  _swift_allocObject(&DAT_100ee2c70,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  puVar2 = &DAT_100ee36e8;
  _swift_allocObject(&DAT_100ee36e8,0x28,7);
  *(undefined **)(puVar2 + 0x10) = puVar1;
  *(undefined8 *)(puVar2 + 0x18) = param_1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  puVar1 = &DAT_100ee3710;
  _swift_allocObject(&DAT_100ee3710,0x20,7);
  *(undefined **)(puVar1 + 0x10) = &DAT_100c60130;
  *(undefined **)(puVar1 + 0x18) = puVar2;
  puVar3 = &DAT_100fd25a0;
  FUN_1000f7830(&DAT_100fd25a0,&DAT_100c60148);
  _swift_allocObject();
  *(undefined **)(puVar3 + 0x10) = &DAT_100c60140;
  *(undefined **)(puVar3 + 0x18) = puVar1;
  _swift_beginAccess(unaff_x20 + 0xf0,auStack_58,0x21,0);
  FUN_100011128(param_1,param_2);
  _swift_retain(puVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0x8000000000000000;
  FUN_1004b59f0(puVar3,0x696c616974696e69,0xea0000000000657a,uVar4);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar5;
  _swift_endAccess(auStack_58);
  _swift_release(puVar2);
  puVar1 = &DAT_100fd25a8;
  FUN_1000f7830(&DAT_100fd25a8,&DAT_100c60158);
  _swift_allocObject();
  *(undefined **)(puVar1 + 0x10) = &DAT_100c60150;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  _swift_beginAccess(unaff_x20 + 0xf0,auStack_58,0x21,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf0);
  _swift_isUniquelyReferenced_nonNull_native(uVar4);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xf0);
  *(undefined8 *)(unaff_x20 + 0xf0) = 0x8000000000000000;
  FUN_1004b59f0(puVar1,0x676e6970,&DAT_e400000000000000,uVar4);
  *(undefined8 *)(unaff_x20 + 0xf0) = uVar5;
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x100599158 | FUN_100599158 */

void FUN_100599158(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *(undefined8 *)(unaff_x22 + 0x2f8) = param_5;
  *(undefined8 *)(unaff_x22 + 0x2f0) = param_4;
  *(undefined8 *)(unaff_x22 + 0x2e8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x2e0) = param_1;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x308) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x300) = uVar1;
  *(undefined2 *)(unaff_x22 + 0x348) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)(unaff_x22 + 0x34e) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined2 *)(unaff_x22 + 0x34a) = *(undefined2 *)((long)param_2 + 0x13);
  *(undefined1 *)(unaff_x22 + 0x34f) = *(undefined1 *)((long)param_2 + 0x15);
  *(undefined8 *)(unaff_x22 + 0x310) = param_2[3];
  *(undefined1 *)(unaff_x22 + 0x350) = *(undefined1 *)(param_2 + 4);
  uVar1 = param_2[9];
  uVar3 = param_2[0xc];
  uVar2 = param_2[0xb];
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_2[10];
  *(undefined8 *)(unaff_x22 + 0x1c8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar2;
  uVar1 = param_2[0xd];
  *(undefined8 *)(unaff_x22 + 0x1f0) = param_2[0xe];
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_2[0xf];
  uVar1 = param_2[5];
  uVar3 = param_2[8];
  uVar2 = param_2[7];
  *(undefined8 *)(unaff_x22 + 0x1b0) = param_2[6];
  *(undefined8 *)(unaff_x22 + 0x1a8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x1c0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar2;
  _swift_task_switch(FUN_1005991e0,0,0);
  return;
}



/* Address: 0x1005991e0 | FUN_1005991e0 */

void FUN_1005991e0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x2e8);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x2b0,0,0);
  puVar1 = (undefined8 *)(lVar2 + 0x10);
  _swift_weakLoadStrong();
  *(undefined8 **)(unaff_x22 + 0x318) = puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    _swift_task_switch(FUN_1005992ac,puVar1,0);
    return;
  }
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
  *puVar1 = 0xd000000000000016;
  puVar1[1] = 0x8000000100dadfa0;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 4;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001005992a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005992ac | FUN_1005992ac */

void FUN_1005992ac(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x351) = *(undefined1 *)(*(long *)(unaff_x22 + 0x318) + 0x110);
  _swift_task_switch(FUN_1005992cc,0,0);
  return;
}



/* Address: 0x1005992cc | FUN_1005992cc */

void FUN_1005992cc(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  ushort uVar4;
  ushort uVar5;
  ulong uVar6;
  long *plVar7;
  int *piVar8;
  ulong *puVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long unaff_x22;
  
  if ((*(byte *)(unaff_x22 + 0x351) & 1) != 0) {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x318);
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    *param_1 = 0xd00000000000001d;
    param_1[1] = 0x8000000100dadfc0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 1;
    _swift_willThrow();
    _swift_release(uVar10);
                    /* WARNING: Could not recover jumptable at 0x000100599370. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  piVar8 = *(int **)(unaff_x22 + 0x2f0);
  if (piVar8 != (int *)0x0) {
    bVar2 = *(byte *)(unaff_x22 + 0x34f);
    uVar4 = *(ushort *)(unaff_x22 + 0x34a);
    bVar3 = *(byte *)(unaff_x22 + 0x34e);
    uVar5 = *(ushort *)(unaff_x22 + 0x348);
    iVar1 = *piVar8;
    plVar7 = (long *)(ulong)(uint)piVar8[1];
    _swift_retain(*(undefined8 *)(unaff_x22 + 0x2f8));
    _swift_task_alloc();
    *(long **)(unaff_x22 + 800) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100599514;
                    /* WARNING: Could not recover jumptable at 0x000100599400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)piVar8 + (long)iVar1))
              (plVar7,unaff_x22 + 0x1a8,
               (ulong)bVar2 << 0x28 | (ulong)uVar4 << 0x18 | (ulong)uVar5 | (ulong)bVar3 << 0x10,
               *(undefined8 *)(unaff_x22 + 0x310),*(undefined1 *)(unaff_x22 + 0x350));
    return;
  }
  puVar11 = (undefined8 *)(unaff_x22 + 0x308);
  if (DAT_100fce788 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  uVar6 = *(ulong *)(unaff_x22 + 0x300);
  FUN_100052458(uVar6,*puVar11,DAT_101057b28);
  puVar9 = (ulong *)(unaff_x22 + 0x300);
  if ((uVar6 & 1) == 0) {
    puVar11 = &DAT_101057b38;
    puVar9 = &DAT_101057b30;
    if (DAT_100fce780 != -1) {
      _swift_once(&DAT_100fce780,FUN_1005286e4);
      puVar9 = &DAT_101057b30;
    }
  }
  uVar6 = *puVar9;
  uVar10 = *puVar11;
  *(ulong *)(unaff_x22 + 0x338) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x330) = uVar10;
  bVar2 = *(byte *)(unaff_x22 + 0x34f);
  uVar4 = *(ushort *)(unaff_x22 + 0x34a);
  bVar3 = *(byte *)(unaff_x22 + 0x34e);
  uVar5 = *(ushort *)(unaff_x22 + 0x348);
  _swift_bridgeObjectRetain(uVar10);
  plVar7 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x340) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005996a4;
  FUN_100599984(plVar7,unaff_x22 + 0x1a8,
                (ulong)bVar2 << 0x28 | (ulong)uVar4 << 0x18 | (ulong)uVar5 | (ulong)bVar3 << 0x10,
                *(undefined8 *)(unaff_x22 + 0x310),*(undefined1 *)(unaff_x22 + 0x350),uVar6,uVar10);
  return;
}



/* Address: 0x100599514 | FUN_100599514 */

void FUN_100599514(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x328) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 800));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100599570;
  }
  else {
    pcVar1 = FUN_100599940;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100599570 | FUN_100599570 */

void FUN_100599570(void)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  ushort uVar4;
  ulong uVar5;
  long *plVar6;
  ulong *puVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  long unaff_x22;
  
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x2f0),*(undefined8 *)(unaff_x22 + 0x2f8));
  puVar9 = (undefined8 *)(unaff_x22 + 0x308);
  if (DAT_100fce788 != -1) {
    _swift_once(&DAT_100fce788,FUN_100528524);
  }
  uVar5 = *(ulong *)(unaff_x22 + 0x300);
  FUN_100052458(uVar5,*puVar9,DAT_101057b28);
  puVar7 = (ulong *)(unaff_x22 + 0x300);
  if ((uVar5 & 1) == 0) {
    puVar9 = &DAT_101057b38;
    puVar7 = &DAT_101057b30;
    if (DAT_100fce780 != -1) {
      _swift_once(&DAT_100fce780,FUN_1005286e4);
      puVar7 = &DAT_101057b30;
    }
  }
  uVar5 = *puVar7;
  uVar8 = *puVar9;
  *(ulong *)(unaff_x22 + 0x338) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x330) = uVar8;
  bVar1 = *(byte *)(unaff_x22 + 0x34f);
  uVar3 = *(ushort *)(unaff_x22 + 0x34a);
  bVar2 = *(byte *)(unaff_x22 + 0x34e);
  uVar4 = *(ushort *)(unaff_x22 + 0x348);
  _swift_bridgeObjectRetain(uVar8);
  plVar6 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x340) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1005996a4;
  FUN_100599984(plVar6,unaff_x22 + 0x1a8,
                (ulong)bVar1 << 0x28 | (ulong)uVar3 << 0x18 | (ulong)uVar4 | (ulong)bVar2 << 0x10,
                *(undefined8 *)(unaff_x22 + 0x310),*(undefined1 *)(unaff_x22 + 0x350),uVar5,uVar8);
  return;
}



/* Address: 0x1005996a4 | FUN_1005996a4 */

void FUN_1005996a4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x318);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x340));
  _swift_task_switch(FUN_1005996f0,uVar1,0);
  return;
}



/* Address: 0x1005996f0 | FUN_1005996f0 */

void FUN_1005996f0(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x318);
  _swift_beginAccess(lVar1 + 0xe8,unaff_x22 + 0x2c8,0,0);
  *(undefined1 *)(unaff_x22 + 0x352) = *(undefined1 *)(lVar1 + 0xe8);
  *(undefined1 *)(unaff_x22 + 0x353) = *(undefined1 *)(lVar1 + 0xe9);
  *(undefined1 *)(unaff_x22 + 0x354) = *(undefined1 *)(lVar1 + 0xea);
  *(undefined2 *)(unaff_x22 + 0x34c) = *(undefined2 *)(lVar1 + 0xeb);
  *(undefined1 *)(unaff_x22 + 0x355) = *(undefined1 *)(lVar1 + 0xed);
  _swift_task_switch(FUN_100599764,0,0);
  return;
}



/* Address: 0x100599764 | FUN_100599764 */

void FUN_100599764(void)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long unaff_x22;
  undefined8 *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined2 uStack_b2;
  undefined6 local_b0;
  undefined2 uStack_aa;
  undefined6 uStack_a8;
  undefined2 uStack_a2;
  undefined6 uStack_a0;
  undefined2 uStack_9a;
  undefined6 uStack_98;
  undefined2 uStack_92;
  undefined6 local_90;
  undefined2 uStack_8a;
  undefined6 uStack_88;
  undefined2 uStack_82;
  undefined6 uStack_80;
  undefined2 uStack_7a;
  undefined6 uStack_78;
  undefined2 uStack_72;
  undefined6 local_70;
  undefined2 uStack_6a;
  undefined6 uStack_68;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x355);
  uVar5 = *(undefined2 *)(unaff_x22 + 0x34c);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x354);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x353);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x352);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x338);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x330);
  lVar6 = *(long *)(unaff_x22 + 0x318);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x2e0);
  uVar13 = *(undefined8 *)(lVar6 + 0x70);
  uVar12 = *(undefined8 *)(lVar6 + 0x88);
  uVar11 = *(undefined8 *)(lVar6 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(lVar6 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x200) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x218) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x210) = uVar11;
  uVar14 = *(undefined8 *)(lVar6 + 0xa8);
  uVar13 = *(undefined8 *)(lVar6 + 0xa0);
  uVar12 = *(undefined8 *)(lVar6 + 0xb8);
  uVar11 = *(undefined8 *)(lVar6 + 0xb0);
  uVar16 = *(undefined8 *)(lVar6 + 0x98);
  uVar15 = *(undefined8 *)(lVar6 + 0x90);
  *(undefined8 *)(unaff_x22 + 0x250) = *(undefined8 *)(lVar6 + 0xc0);
  *(undefined8 *)(unaff_x22 + 0x238) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x230) = uVar13;
  *(undefined8 *)(unaff_x22 + 0x248) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x240) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x228) = uVar16;
  *(undefined8 *)(unaff_x22 + 0x220) = uVar15;
  uVar11 = *(undefined8 *)(lVar6 + 0xd8);
  uVar12 = *(undefined8 *)(lVar6 + 0xe0);
  FUN_1004e011c(unaff_x22 + 0x200,unaff_x22 + 600);
  _swift_bridgeObjectRetain(uVar12);
  _swift_release(lVar6);
  uStack_a8 = (undefined6)*(undefined8 *)(unaff_x22 + 0x208);
  uStack_a2 = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x208) >> 0x30);
  local_b0 = (undefined6)*(undefined8 *)(unaff_x22 + 0x200);
  uStack_aa = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x200) >> 0x30);
  uStack_98 = (undefined6)*(undefined8 *)(unaff_x22 + 0x218);
  uStack_92 = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x218) >> 0x30);
  uStack_a0 = (undefined6)*(undefined8 *)(unaff_x22 + 0x210);
  uStack_9a = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x210) >> 0x30);
  uStack_88 = (undefined6)*(undefined8 *)(unaff_x22 + 0x228);
  uStack_82 = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x228) >> 0x30);
  local_90 = (undefined6)*(undefined8 *)(unaff_x22 + 0x220);
  uStack_8a = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x220) >> 0x30);
  uStack_78 = (undefined6)*(undefined8 *)(unaff_x22 + 0x238);
  uStack_72 = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x238) >> 0x30);
  uStack_80 = (undefined6)*(undefined8 *)(unaff_x22 + 0x230);
  uStack_7a = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x230) >> 0x30);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x248);
  uStack_68 = (undefined6)uVar13;
  local_70 = (undefined6)*(undefined8 *)(unaff_x22 + 0x240);
  uStack_6a = (undefined2)((ulong)*(undefined8 *)(unaff_x22 + 0x240) >> 0x30);
  *(ulong *)(unaff_x22 + 0xd6) = CONCAT62(uStack_88,uStack_8a);
  *(ulong *)(unaff_x22 + 0xce) = CONCAT62(local_90,uStack_92);
  *(ulong *)(unaff_x22 + 0xe6) = CONCAT62(uStack_78,uStack_7a);
  *(ulong *)(unaff_x22 + 0xde) = CONCAT62(uStack_80,uStack_82);
  *(ulong *)(unaff_x22 + 0xf6) = CONCAT62(uStack_68,uStack_6a);
  *(ulong *)(unaff_x22 + 0xee) = CONCAT62(local_70,uStack_72);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0xf8) = uVar13;
  *(ulong *)(unaff_x22 + 0xb6) = CONCAT62(uStack_a8,uStack_aa);
  *(ulong *)(unaff_x22 + 0xae) = CONCAT62(local_b0,uStack_b2);
  *(ulong *)(unaff_x22 + 0xc6) = CONCAT62(uStack_98,uStack_9a);
  *(ulong *)(unaff_x22 + 0xbe) = CONCAT62(uStack_a0,uStack_a2);
  *(ulong *)(unaff_x22 + 0x3e) = CONCAT62(uStack_98,uStack_9a);
  *(ulong *)(unaff_x22 + 0x36) = CONCAT62(uStack_a0,uStack_a2);
  puVar7 = (undefined8 *)(unaff_x22 + 0x98);
  *puVar7 = uVar9;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar10;
  *(undefined1 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined1 *)(unaff_x22 + 0xa9) = uVar3;
  *(undefined1 *)(unaff_x22 + 0xaa) = uVar2;
  *(undefined2 *)(unaff_x22 + 0xab) = uVar5;
  *(undefined1 *)(unaff_x22 + 0xad) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x108) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x110) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x118) = 0;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar10;
  *(undefined1 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined1 *)(unaff_x22 + 0x21) = uVar3;
  *(undefined1 *)(unaff_x22 + 0x22) = uVar2;
  *(undefined2 *)(unaff_x22 + 0x23) = uVar5;
  *(undefined1 *)(unaff_x22 + 0x25) = uVar1;
  *(ulong *)(unaff_x22 + 0x2e) = CONCAT62(uStack_a8,uStack_aa);
  *(ulong *)(unaff_x22 + 0x26) = CONCAT62(local_b0,uStack_b2);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x250);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar13;
  *(ulong *)(unaff_x22 + 0x6e) = CONCAT62(uStack_68,uStack_6a);
  *(ulong *)(unaff_x22 + 0x66) = CONCAT62(local_70,uStack_72);
  *(ulong *)(unaff_x22 + 0x5e) = CONCAT62(uStack_78,uStack_7a);
  *(ulong *)(unaff_x22 + 0x56) = CONCAT62(uStack_80,uStack_82);
  *(ulong *)(unaff_x22 + 0x4e) = CONCAT62(uStack_88,uStack_8a);
  *(ulong *)(unaff_x22 + 0x46) = CONCAT62(local_90,uStack_92);
  *(undefined8 *)(unaff_x22 + 0x80) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x90) = 0;
  FUN_1004e0158(puVar7,unaff_x22 + 0x120);
  FUN_1004e018c((undefined8 *)(unaff_x22 + 0x10));
  uVar11 = *puVar7;
  puVar8[1] = *(undefined8 *)(unaff_x22 + 0xa0);
  *puVar8 = uVar11;
  uVar12 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar13 = *(undefined8 *)(unaff_x22 + 200);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar8[7] = *(undefined8 *)(unaff_x22 + 0xd0);
  puVar8[6] = uVar13;
  puVar8[9] = uVar15;
  puVar8[8] = uVar14;
  puVar8[3] = uVar12;
  puVar8[2] = uVar11;
  puVar8[5] = uVar10;
  puVar8[4] = uVar9;
  uVar12 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x100);
  uVar13 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar8[0x10] = *(undefined8 *)(unaff_x22 + 0x118);
  puVar8[0xd] = uVar14;
  puVar8[0xc] = uVar13;
  puVar8[0xf] = uVar12;
  puVar8[0xe] = uVar11;
  puVar8[0xb] = uVar10;
  puVar8[10] = uVar9;
                    /* WARNING: Could not recover jumptable at 0x00010059993c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100599940 | FUN_100599940 */

void FUN_100599940(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x318);
  FUN_100004550(*(undefined8 *)(unaff_x22 + 0x2f0),*(undefined8 *)(unaff_x22 + 0x2f8));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100599980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100599984 | FUN_100599984 */

void FUN_100599984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xe0) = param_6;
  *(undefined8 *)(unaff_x22 + 0xe8) = unaff_x20;
  *(undefined1 *)(unaff_x22 + 0xf0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xd8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xc0) = param_1;
  *(undefined8 *)(unaff_x22 + 200) = param_2;
  _swift_task_switch(FUN_1005999a8);
  return;
}



/* Address: 0x1005999a8 | FUN_1005999a8 */

void FUN_1005999a8(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined8 uVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xe0);
  lVar3 = *(long *)(unaff_x22 + 0xe8);
  uVar6 = *(undefined1 *)(unaff_x22 + 0xf0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xd8);
  puVar2 = *(undefined8 **)(unaff_x22 + 0xc0);
  uVar5 = *(ulong *)(unaff_x22 + 200);
  uVar11 = *(undefined8 *)(lVar3 + 0x118);
  uVar10 = *(undefined8 *)(lVar3 + 0x130);
  uVar9 = *(undefined8 *)(lVar3 + 0x128);
  *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(lVar3 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x10) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar9;
  uVar12 = *(undefined8 *)(lVar3 + 0x150);
  uVar11 = *(undefined8 *)(lVar3 + 0x148);
  uVar10 = *(undefined8 *)(lVar3 + 0x160);
  uVar9 = *(undefined8 *)(lVar3 + 0x158);
  uVar14 = *(undefined8 *)(lVar3 + 0x140);
  uVar13 = *(undefined8 *)(lVar3 + 0x138);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(lVar3 + 0x168);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar12;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar11;
  *(undefined8 *)(unaff_x22 + 0x58) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x38) = uVar14;
  *(undefined8 *)(unaff_x22 + 0x30) = uVar13;
  uVar12 = puVar2[7];
  uVar11 = puVar2[6];
  uVar10 = puVar2[9];
  uVar9 = puVar2[8];
  uVar14 = puVar2[5];
  uVar13 = puVar2[4];
  *(undefined8 *)(lVar3 + 0x168) = puVar2[10];
  *(undefined8 *)(lVar3 + 0x150) = uVar12;
  *(undefined8 *)(lVar3 + 0x148) = uVar11;
  *(undefined8 *)(lVar3 + 0x160) = uVar10;
  *(undefined8 *)(lVar3 + 0x158) = uVar9;
  *(undefined8 *)(lVar3 + 0x140) = uVar14;
  *(undefined8 *)(lVar3 + 0x138) = uVar13;
  uVar9 = *puVar2;
  uVar11 = puVar2[3];
  uVar10 = puVar2[2];
  *(undefined8 *)(lVar3 + 0x120) = puVar2[1];
  *(undefined8 *)(lVar3 + 0x118) = uVar9;
  *(undefined8 *)(lVar3 + 0x130) = uVar11;
  *(undefined8 *)(lVar3 + 0x128) = uVar10;
  FUN_1004ddb74(puVar2,unaff_x22 + 0x68);
  FUN_1000fb4c4(unaff_x22 + 0x10,&DAT_100fd24f8,&DAT_100c5ffd0);
  uVar9 = *(undefined8 *)(lVar3 + 0x170);
  uVar10 = *(undefined8 *)(lVar3 + 0x178);
  *(ulong *)(lVar3 + 0x170) = uVar5 & 0xffffffffffff;
  *(undefined8 *)(lVar3 + 0x178) = uVar8;
  uVar7 = *(undefined1 *)(lVar3 + 0x180);
  *(undefined1 *)(lVar3 + 0x180) = uVar6;
  _swift_bridgeObjectRetain(uVar8);
  FUN_100161a8c(uVar9,uVar10,uVar7);
  uVar8 = *(undefined8 *)(lVar3 + 400);
  *(undefined8 *)(lVar3 + 0x188) = uVar4;
  *(undefined8 *)(lVar3 + 400) = uVar1;
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRelease(uVar8);
  *(undefined1 *)(lVar3 + 0x110) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100599aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100599aa8 | FUN_100599aa8 */

void FUN_100599aa8(long param_1,undefined8 param_2)

{
  long unaff_x22;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x2f0) = param_2;
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  *(undefined1 *)(unaff_x22 + 0x3c8) = *(undefined1 *)(param_1 + 0x20);
  uVar4 = *(undefined8 *)(param_1 + 0x30);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x300) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x310) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x308) = uVar3;
  _swift_task_switch(FUN_100599ad8,0,0);
  return;
}



/* Address: 0x100599ad8 | FUN_100599ad8 */

void FUN_100599ad8(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x2f0);
  _swift_beginAccess(lVar1 + 0x10,unaff_x22 + 0x2d8,0,0);
  lVar1 = lVar1 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x318) = lVar1;
  if (lVar1 != 0) {
    _swift_task_switch(FUN_100599b4c,lVar1,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100599b48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100599b4c | FUN_100599b4c */

void FUN_100599b4c(void)

{
  long lVar1;
  code *pcVar2;
  UnownedSerialExecutor UVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  UVar3.unknown = *(undefined **)(unaff_x22 + 0x318);
  lVar4 = *(long *)(UVar3.unknown + 200);
  *(long *)(unaff_x22 + 800) = lVar4;
  if (lVar4 == 0) {
    if (*(char *)(unaff_x22 + 0x3c8) == -1) {
      pcVar2 = FUN_100599fd8;
    }
    else {
      pcVar2 = FUN_10059a078;
    }
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(UVar3.unknown + 0xd0);
    *(long *)(unaff_x22 + 0x328) = lVar5;
    lVar1 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x330) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x338) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar3 = Swift::Actor::get_unownedExecutor();
    pcVar2 = FUN_100599c00;
  }
  _swift_task_switch(pcVar2,UVar3.unknown,uVar6);
  return;
}



/* Address: 0x100599c00 | FUN_100599c00 */

void FUN_100599c00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x330);
  uVar2 = *(undefined8 *)(unaff_x22 + 800);
  (**(code **)(unaff_x22 + 0x338))(uVar1,*(undefined8 *)(unaff_x22 + 0x328));
  *(undefined8 *)(unaff_x22 + 0x340) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  _swift_task_switch(FUN_100599c54,0,0);
  return;
}



/* Address: 0x100599c54 | FUN_100599c54 */

void FUN_100599c54(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  code *pcVar5;
  char *pcVar6;
  char *pcVar7;
  void *pvVar8;
  undefined1 *puVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x22;
  long lVar12;
  void *pvVar13;
  undefined8 uVar14;
  char *pcVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  
  lVar12 = *(long *)(unaff_x22 + 0x340);
  pvVar8 = (void *)0x0;
  _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x2c0,0);
  FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x70);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar11 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar10);
  (**(code **)(lVar11 + 0x70))(uVar10,lVar11);
  FUN_100004594(unaff_x22 + 0x70);
  if (((uint)uVar10 & 0xff) < 2) {
    cVar1 = *(char *)(unaff_x22 + 0x3c8);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x250);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
    lVar11 = *(long *)(unaff_x22 + 0x270);
    FUN_100004640(unaff_x22 + 0x250,uVar10);
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar6 = (char *)0xa0;
    pcVar7 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 4;
    *(undefined8 *)(puVar2 + 0x10) = 2;
    *(undefined8 *)(puVar2 + 0x20) = 0x4974736575716572;
    *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000064;
    if (cVar1 == -1) {
      *(undefined8 *)(puVar2 + 0x30) = 0x656e6f6e;
      *(undefined1 **)(puVar2 + 0x38) = &DAT_e400000000000000;
    }
    else {
      cVar1 = *(char *)(unaff_x22 + 0x3c8);
      SVar18.bridgeObject = pcVar7;
      SVar18.str = pcVar6;
      Swift::String::reserveCapacity(2,SVar18);
      if (cVar1 == '\x01') {
        *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2f8);
        SVar16 = Swift::CustomStringConvertible::get_description();
      }
      else {
        pvVar13 = *(void **)(unaff_x22 + 0x300);
        pcVar7 = (char *)(ulong)*(byte *)(unaff_x22 + 0x3c8);
        FUN_1004a7398(*(undefined8 *)(unaff_x22 + 0x2f8),pvVar13);
        SVar16.bridgeObject = pvVar13;
        SVar16.str = *(char **)(unaff_x22 + 0x2f8);
      }
      SVar20.bridgeObject = pvVar8;
      SVar20.str = pcVar7;
      pcVar6 = SVar16.bridgeObject;
      Swift::String::append(SVar16,SVar20);
      _swift_bridgeObjectRelease(SVar16.bridgeObject);
      *(undefined8 *)(puVar2 + 0x30) = 0;
      *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
      *(undefined8 *)(puVar2 + 0x48) = 0;
      *(undefined8 *)(puVar2 + 0x50) = 0;
      *(undefined8 *)(puVar2 + 0x40) = 0;
    }
    puVar2[0x58] = 0;
    pvVar13 = *(void **)(unaff_x22 + 0x310);
    *(undefined8 *)(puVar2 + 0x60) = 0x6e6f73616572;
    *(undefined1 **)(puVar2 + 0x68) = &DAT_e600000000000000;
    if (pvVar13 == (void *)0x0) {
      puVar2[0x98] = 0;
      puVar9 = &DAT_e400000000000000;
      uVar14 = 0x656e6f6e;
    }
    else {
      pcVar15 = *(char **)(unaff_x22 + 0x308);
      SVar19.bridgeObject = pcVar7;
      SVar19.str = pcVar6;
      Swift::String::reserveCapacity(2,SVar19);
      SVar17.bridgeObject = pvVar13;
      SVar17.str = pcVar15;
      SVar21.bridgeObject = pvVar8;
      SVar21.str = pcVar7;
      Swift::String::write(SVar17,SVar21);
      uVar14 = 0;
      puVar9 = (undefined1 *)0xe000000000000000;
      *(undefined8 *)(puVar2 + 0x80) = 0;
      *(undefined8 *)(puVar2 + 0x88) = 0;
      puVar2[0x98] = 0;
      *(undefined8 *)(puVar2 + 0x90) = 0;
    }
    *(undefined8 *)(puVar2 + 0x70) = uVar14;
    *(undefined1 **)(puVar2 + 0x78) = puVar9;
    uVar14 = *(undefined8 *)(unaff_x22 + 0x340);
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    puVar4 = &DAT_100fcb448;
    FUN_1000f7830(&DAT_100fcb448,&DAT_100c538d0);
    _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad770;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x3d8;
    *(undefined1 *)(unaff_x22 + 0x70) = 1;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000022;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad770;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 200) = 0x3d8;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 400);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    (**(code **)(lVar11 + 0x28))(unaff_x22 + 0x10,uVar10,lVar11);
    _swift_release(uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x250);
  }
  else {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x340));
  }
  if (*(char *)(unaff_x22 + 0x3c8) == -1) {
    pcVar5 = FUN_100599fd8;
  }
  else {
    pcVar5 = FUN_10059a078;
  }
  _swift_task_switch(pcVar5,*(undefined8 *)(unaff_x22 + 0x318),0);
  return;
}



/* Address: 0x100599fd8 | FUN_100599fd8 */

void FUN_100599fd8(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x318) + 200);
  *(long *)(unaff_x22 + 0x348) = lVar4;
  if (lVar4 == 0) {
    pcVar3 = thunk_FUN_10059a2d0;
    UVar2.unknown = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x318) + 0xd0);
    *(long *)(unaff_x22 + 0x3a8) = lVar5;
    lVar1 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x3b0) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x3b8) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10059a998;
  }
  _swift_task_switch(pcVar3,UVar2.unknown,uVar6);
  return;
}



/* Address: 0x10059a078 | FUN_10059a078 */

void FUN_10059a078(void)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x300);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x2f8);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x3c8);
  _swift_beginAccess(*(long *)(unaff_x22 + 0x318) + 0x100,unaff_x22 + 0x70,0x21,0);
  FUN_1005065b4(uVar3,uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x350) = uVar3;
  _swift_endAccess(unaff_x22 + 0x70);
  _swift_task_switch(FUN_10059a0f8,0,0);
  return;
}



/* Address: 0x10059a0f8 | FUN_10059a0f8 */

void FUN_10059a0f8(void)

{
  code *pcVar1;
  Task TVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x350);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x318);
  if (TVar2.unknown == (undefined *)0x0) {
    pcVar1 = FUN_10059a230;
  }
  else {
    FUN_1000f7830(&DAT_100fcb3e0,&DAT_100c50230);
    FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
    Swift::Task::cancel(TVar2);
    pcVar1 = FUN_10059a190;
  }
  _swift_task_switch(pcVar1,uVar3,0);
  return;
}



/* Address: 0x10059a190 | FUN_10059a190 */

void FUN_10059a190(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x318) + 200);
  *(long *)(unaff_x22 + 0x358) = lVar4;
  if (lVar4 == 0) {
    pcVar3 = FUN_10059a304;
    UVar2.unknown = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x318) + 0xd0);
    *(long *)(unaff_x22 + 0x368) = lVar5;
    lVar1 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x370) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x378) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10059a344;
  }
  _swift_task_switch(pcVar3,UVar2.unknown,uVar6);
  return;
}



/* Address: 0x10059a230 | FUN_10059a230 */

void FUN_10059a230(void)

{
  long lVar1;
  UnownedSerialExecutor UVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x318) + 200);
  *(long *)(unaff_x22 + 0x360) = lVar4;
  if (lVar4 == 0) {
    pcVar3 = FUN_10059a2d0;
    UVar2.unknown = (undefined *)0x0;
    uVar6 = 0;
  }
  else {
    lVar5 = *(long *)(*(long *)(unaff_x22 + 0x318) + 0xd0);
    *(long *)(unaff_x22 + 0x388) = lVar5;
    lVar1 = lVar4;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 0x390) = lVar1;
    *(undefined8 *)(unaff_x22 + 0x398) = *(undefined8 *)(lVar5 + 0x10);
    uVar6 = *(undefined8 *)(lVar5 + 8);
    _swift_unknownObjectRetain(lVar4);
    UVar2 = Swift::Actor::get_unownedExecutor();
    pcVar3 = FUN_10059a67c;
  }
  _swift_task_switch(pcVar3,UVar2.unknown,uVar6);
  return;
}



/* Address: 0x10059a2d0 | FUN_10059a2d0 */

void FUN_10059a2d0(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x318));
                    /* WARNING: Could not recover jumptable at 0x00010059a300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059a304 | FUN_10059a304 */

void FUN_10059a304(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x350);
  _swift_release(*(undefined8 *)(unaff_x22 + 0x318));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010059a340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059a344 | FUN_10059a344 */

void FUN_10059a344(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x370);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x358);
  (**(code **)(unaff_x22 + 0x378))(uVar1,*(undefined8 *)(unaff_x22 + 0x368));
  *(undefined8 *)(unaff_x22 + 0x380) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  _swift_task_switch(FUN_10059a398,0,0);
  return;
}



/* Address: 0x10059a398 | FUN_10059a398 */

void FUN_10059a398(void)

{
  char cVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  void *pvVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar12 = *(long *)(unaff_x22 + 0x380);
  pvVar6 = (void *)0x0;
  _swift_beginAccess(lVar12 + 0x20,unaff_x22 + 0x290,0);
  FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x70);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar7 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar9);
  (**(code **)(lVar7 + 0x70))(uVar9,lVar7);
  FUN_100004594(unaff_x22 + 0x70);
  if (((uint)uVar9 & 0xff) < 2) {
    cVar1 = *(char *)(unaff_x22 + 0x3c8);
    FUN_100076688(lVar12 + 0x20,unaff_x22 + 0x250);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x268);
    lVar7 = *(long *)(unaff_x22 + 0x270);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pcVar5 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0x4974736575716572;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    *(undefined8 *)(puVar2 + 0x28) = 0xe900000000000064;
    *(undefined8 *)(puVar2 + 0x38) = 0xe000000000000000;
    SVar15.bridgeObject = pcVar5;
    SVar15.str = pcVar4;
    Swift::String::reserveCapacity(2,SVar15);
    if (cVar1 == '\x01') {
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2f8);
      SVar14 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar10 = *(void **)(unaff_x22 + 0x300);
      pcVar5 = (char *)(ulong)*(byte *)(unaff_x22 + 0x3c8);
      FUN_1004a7398(*(undefined8 *)(unaff_x22 + 0x2f8),pvVar10);
      SVar14.bridgeObject = pvVar10;
      SVar14.str = *(char **)(unaff_x22 + 0x2f8);
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x380);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
    SVar16.bridgeObject = pvVar6;
    SVar16.str = pcVar5;
    Swift::String::append(SVar14,SVar16);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    puVar2[0x58] = 0;
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x130) = 1;
    *(undefined8 *)(unaff_x22 + 0x138) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x140) = 0x8000000100dadf80;
    *(undefined8 *)(unaff_x22 + 0x148) = 0;
    *(undefined **)(unaff_x22 + 0x150) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x158) = 0;
    *(undefined8 *)(unaff_x22 + 0x160) = 0;
    *(undefined8 *)(unaff_x22 + 0x168) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x178) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 0x188) = 0x3eb;
    *(undefined1 *)(unaff_x22 + 400) = 1;
    *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000011;
    *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dadf80;
    *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
    *(undefined **)(unaff_x22 + 0x1b0) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
    *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 0x1e8) = 0x3eb;
    FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x70);
    FUN_1004eaa3c(unaff_x22 + 400);
    (**(code **)(lVar7 + 0x28))(unaff_x22 + 0x130,uVar9);
    _swift_release(uVar13);
    _swift_release(uVar8);
    _swift_release(uVar11);
    FUN_1004eaa3c(unaff_x22 + 0x130);
    FUN_100004594(unaff_x22 + 0x250);
  }
  else {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x350);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x380));
    _swift_release(uVar9);
    _swift_release(uVar11);
  }
                    /* WARNING: Could not recover jumptable at 0x00010059a678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059a67c | FUN_10059a67c */

void FUN_10059a67c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x390);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x360);
  (**(code **)(unaff_x22 + 0x398))(uVar1,*(undefined8 *)(unaff_x22 + 0x388));
  *(undefined8 *)(unaff_x22 + 0x3a0) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  _swift_task_switch(FUN_10059a6d0,0,0);
  return;
}



/* Address: 0x10059a6d0 | FUN_10059a6d0 */

void FUN_10059a6d0(void)

{
  char cVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  char *pcVar6;
  void *pvVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar11 = *(long *)(unaff_x22 + 0x3a0);
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar11 + 0x20,unaff_x22 + 0x278,0);
  FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x70);
  uVar2 = *(ulong *)(unaff_x22 + 0x88);
  lVar8 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar2);
  (**(code **)(lVar8 + 0x70))(uVar2,lVar8);
  FUN_100004594(unaff_x22 + 0x70);
  if ((uVar2 & 0xff) == 0) {
    cVar1 = *(char *)(unaff_x22 + 0x3c8);
    FUN_100076688(lVar11 + 0x20,unaff_x22 + 0x250);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x268);
    lVar8 = *(long *)(unaff_x22 + 0x270);
    FUN_100004640();
    puVar3 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar5 = (char *)0x60;
    pcVar6 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar3 + 0x18) = 2;
    *(undefined8 *)(puVar3 + 0x10) = 1;
    *(undefined8 *)(puVar3 + 0x20) = 0x4974736575716572;
    *(undefined8 *)(puVar3 + 0x30) = 0;
    *(undefined8 *)(puVar3 + 0x28) = 0xe900000000000064;
    *(undefined8 *)(puVar3 + 0x38) = 0xe000000000000000;
    SVar15.bridgeObject = pcVar6;
    SVar15.str = pcVar5;
    Swift::String::reserveCapacity(2,SVar15);
    if (cVar1 == '\x01') {
      *(undefined8 *)(unaff_x22 + 0x70) = *(undefined8 *)(unaff_x22 + 0x2f8);
      SVar14 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar12 = *(void **)(unaff_x22 + 0x300);
      pcVar6 = (char *)(ulong)*(byte *)(unaff_x22 + 0x3c8);
      FUN_1004a7398(*(undefined8 *)(unaff_x22 + 0x2f8),pvVar12);
      SVar14.bridgeObject = pvVar12;
      SVar14.str = *(char **)(unaff_x22 + 0x2f8);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x3a0);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x318);
    SVar16.bridgeObject = pvVar7;
    SVar16.str = pcVar6;
    Swift::String::append(SVar14,SVar16);
    _swift_bridgeObjectRelease(SVar14.bridgeObject);
    puVar3[0x58] = 0;
    puVar4 = puVar3;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar3);
    FUN_1000fb4c4(puVar3 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar3,0x20,7);
    *(undefined1 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dadf40;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar4;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x3f2;
    *(undefined1 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000003a;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dadf40;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar4;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 200) = 0x3f2;
    FUN_1004eaa00(unaff_x22 + 0xd0,unaff_x22 + 400);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    (**(code **)(lVar8 + 0x28))(unaff_x22 + 0xd0,uVar10);
    _swift_release(uVar13);
    _swift_release(uVar9);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    FUN_100004594(unaff_x22 + 0x250);
  }
  else {
    uVar10 = *(undefined8 *)(unaff_x22 + 0x318);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x3a0));
    _swift_release(uVar10);
  }
                    /* WARNING: Could not recover jumptable at 0x00010059a994. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059a998 | FUN_10059a998 */

void FUN_10059a998(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x3b0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x348);
  (**(code **)(unaff_x22 + 0x3b8))(uVar1,*(undefined8 *)(unaff_x22 + 0x3a8));
  *(undefined8 *)(unaff_x22 + 0x3c0) = uVar1;
  _swift_unknownObjectRelease(uVar2);
  _swift_task_switch(FUN_10059a9ec,0,0);
  return;
}



/* Address: 0x10059a9ec | FUN_10059a9ec */

void FUN_10059a9ec(void)

{
  String SVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  long lVar9;
  long unaff_x22;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  String SVar14;
  
  lVar10 = *(long *)(unaff_x22 + 0x3c0);
  pvVar6 = (void *)0x0;
  _swift_beginAccess(lVar10 + 0x20,unaff_x22 + 0x2a8,0);
  FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x70);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x88);
  lVar9 = *(long *)(unaff_x22 + 0x90);
  FUN_100004640(unaff_x22 + 0x70,uVar8);
  (**(code **)(lVar9 + 0x70))(uVar8,lVar9);
  FUN_100004594(unaff_x22 + 0x70);
  if (((uint)uVar8 & 0xff) < 5) {
    lVar9 = *(long *)(unaff_x22 + 0x310);
    FUN_100076688(lVar10 + 0x20,unaff_x22 + 0x250);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
    lVar10 = *(long *)(unaff_x22 + 0x270);
    FUN_100004640();
    puVar2 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar4 = (char *)0x60;
    pcVar5 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x18) = 2;
    *(undefined8 *)(puVar2 + 0x10) = 1;
    *(undefined8 *)(puVar2 + 0x20) = 0x6e6f73616572;
    *(undefined1 **)(puVar2 + 0x28) = &DAT_e600000000000000;
    if (lVar9 == 0) {
      puVar2[0x58] = 0;
      puVar7 = &DAT_e400000000000000;
      uVar11 = 0x656e6f6e;
    }
    else {
      SVar1 = *(String *)(unaff_x22 + 0x308);
      SVar13.bridgeObject = pcVar5;
      SVar13.str = pcVar4;
      Swift::String::reserveCapacity(2,SVar13);
      SVar14.bridgeObject = pvVar6;
      SVar14.str = pcVar5;
      Swift::String::write(SVar1,SVar14);
      uVar11 = 0;
      puVar7 = (undefined1 *)0xe000000000000000;
      *(undefined8 *)(puVar2 + 0x40) = 0;
      *(undefined8 *)(puVar2 + 0x48) = 0;
      puVar2[0x58] = 0;
      *(undefined8 *)(puVar2 + 0x50) = 0;
    }
    *(undefined8 *)(puVar2 + 0x30) = uVar11;
    *(undefined1 **)(puVar2 + 0x38) = puVar7;
    uVar12 = *(undefined8 *)(unaff_x22 + 0x3c0);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x318);
    puVar3 = puVar2;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar2);
    FUN_1000fb4c4(puVar2 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar2,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x1f0) = 4;
    *(undefined8 *)(unaff_x22 + 0x1f8) = 0xd000000000000049;
    *(undefined8 *)(unaff_x22 + 0x200) = 0x8000000100dadef0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined **)(unaff_x22 + 0x210) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x3e1;
    *(undefined1 *)(unaff_x22 + 0x70) = 4;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000049;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dadef0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar3;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dadc40;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd00000000000001d;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100daded0;
    *(undefined8 *)(unaff_x22 + 200) = 0x3e1;
    FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 400);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    (**(code **)(lVar10 + 0x28))(unaff_x22 + 0x1f0,uVar8,lVar10);
    _swift_release(uVar12);
    _swift_release(uVar11);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    FUN_100004594(unaff_x22 + 0x250);
  }
  else {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x318);
    _swift_release(*(undefined8 *)(unaff_x22 + 0x3c0));
    _swift_release(uVar8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010059aca0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059aca4 | FUN_10059aca4 */

void FUN_10059aca4(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  *(undefined1 *)(unaff_x22 + 0x80) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_10059acc8);
  return;
}



/* Address: 0x10059acc8 | FUN_10059acc8 */

void FUN_10059acc8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  *(undefined8 *)(unaff_x22 + 0x10) = 0xd000000000000017;
  *(undefined8 *)(unaff_x22 + 0x18) = 0x8000000100dad110;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar2;
  uVar3 = *(undefined1 *)(unaff_x22 + 0x80);
  *(undefined1 *)(unaff_x22 + 0x30) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x40) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x58);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x22 + 0x60));
  FUN_1004a7398(uVar1,uVar2,uVar3);
  plVar4 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10059ad88;
  FUN_10058e49c((undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10059ad88 | FUN_10059ad88 */

void FUN_10059ad88(void)

{
  long lVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar1 = *unaff_x22;
  lVar3 = *unaff_x22;
  *(long *)(lVar1 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x70));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10059ae08,*(undefined8 *)(lVar1 + 0x68),0);
    return;
  }
  uVar2 = *(undefined8 *)(lVar1 + 0x60);
  FUN_1004dc818(*(undefined8 *)(lVar1 + 0x48),*(undefined8 *)(lVar1 + 0x50),
                *(undefined1 *)(lVar1 + 0x80));
  _swift_bridgeObjectRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x00010059ae04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10059ae08 | FUN_10059ae08 */

void FUN_10059ae08(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  FUN_1004dc818(*(undefined8 *)(unaff_x22 + 0x48),*(undefined8 *)(unaff_x22 + 0x50),
                *(undefined1 *)(unaff_x22 + 0x80));
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010059ae48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059ae4c | FUN_10059ae4c */

void FUN_10059ae4c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xc0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x98));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x100));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x108));
  FUN_10059cdb8(*(undefined8 *)(unaff_x20 + 0x118),*(undefined8 *)(unaff_x20 + 0x120),
                *(undefined8 *)(unaff_x20 + 0x128),*(undefined8 *)(unaff_x20 + 0x130),
                *(undefined8 *)(unaff_x20 + 0x138),*(undefined8 *)(unaff_x20 + 0x140),
                *(undefined8 *)(unaff_x20 + 0x148),*(undefined8 *)(unaff_x20 + 0x150),
                *(undefined8 *)(unaff_x20 + 0x158),*(undefined8 *)(unaff_x20 + 0x160),
                *(undefined8 *)(unaff_x20 + 0x168));
  FUN_100161a8c(*(undefined8 *)(unaff_x20 + 0x170),*(undefined8 *)(unaff_x20 + 0x178),
                *(undefined1 *)(unaff_x20 + 0x180));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 400));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x198));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1a0));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x10059af44 | FUN_10059af44 */

void FUN_10059af44(void)

{
  FUN_10059ae4c();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x10059af5c | FUN_10059af5c */

void FUN_10059af5c(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x21;
  
  FUN_10059e970();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x10059af84 | FUN_10059af84 */

void FUN_10059af84(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar3 = *unaff_x20;
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  local_38 = uVar3;
  FUN_10007d048(auStack_68,local_50);
  puVar1 = &DAT_100fd2480;
  FUN_1000f7830(&DAT_100fd2480,&DAT_100c5ff90);
  puVar2 = puVar1;
  FUN_10059edc4();
  Swift::SingleValueEncodingContainer::_encode(&local_38,puVar1,puVar2,local_50,uStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x10059b03c | FUN_10059b03c */

void FUN_10059b03c(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = &SUB_00006469;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10059b080 | FUN_10059b080 */

void FUN_10059b080(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = &SUB_00006469;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10059b08c | FUN_10059b08c */

void FUN_10059b08c(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = &SUB_00006469;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x10059b0cc | FUN_10059b0cc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010059b10c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10059b0cc(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}



/* Address: 0x10059b138 | FUN_10059b138 */

void FUN_10059b138(undefined8 *param_1)

{
  *param_1 = &SUB_00006469;
  param_1[1] = &SUB_e200000000000000;
  return;
}



/* Address: 0x10059b148 | FUN_10059b148 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010059b18c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10059b148(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  *(bool *)param_1 = _Var1 != 0;
  return;
}



/* Address: 0x10059b1b8 | FUN_10059b1b8 */

String FUN_10059b1b8(void)

{
  String SVar1;
  
  FUN_10059f024();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}


