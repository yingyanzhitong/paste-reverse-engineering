/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100540760 | FUN_100540760 */

void FUN_100540760(_StringGuts param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  uint6 local_68 [2];
  undefined1 auStack_58 [24];
  char local_31;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xe9);
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_58);
  if (*(char *)(unaff_x20 + 0xe9) == '\x01') {
    if (((ulong)*(uint6 *)(unaff_x20 + 0xea) & 0xff0000) == 0x40000) {
      uVar4 = 0x8000000100dad720;
      uVar5 = 0xd000000000000023;
    }
    else {
      local_68[0] = *(uint6 *)(unaff_x20 + 0xea);
      _swift_getAtKeyPath(&local_31,local_68);
      if (local_31 != '\x03') {
        return;
      }
      local_68[0]._0_8_ = 0;
      local_68[1]._0_8_ = 0xe000000000000000;
      Swift::_StringGuts::grow(0x21,param_1);
      _swift_bridgeObjectRelease((undefined8)local_68[1]);
      local_68[0]._0_8_ = param_2;
      local_68[1]._0_8_ = param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar6.bridgeObject = (void *)0x8000000100dad750;
      SVar6.str = (char *)0xd00000000000001f;
      SVar7.bridgeObject = pvVar3;
      SVar7.str = pcVar2;
      Swift::String::append(SVar6,SVar7);
      uVar4 = (undefined8)local_68[1];
      uVar5 = (undefined8)local_68[0];
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1005408c0 | FUN_1005408c0 */

void FUN_1005408c0(_StringGuts param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  void *pvVar3;
  undefined8 uVar4;
  long unaff_x20;
  undefined8 uVar5;
  String SVar6;
  String SVar7;
  uint6 local_68 [2];
  undefined1 auStack_58 [24];
  char local_31;
  
  puVar1 = (undefined8 *)(unaff_x20 + 0xe9);
  pcVar2 = (char *)0x0;
  pvVar3 = (void *)0x0;
  _swift_beginAccess(puVar1,auStack_58);
  if (*(char *)(unaff_x20 + 0xe9) == '\x01') {
    if (((ulong)*(uint6 *)(unaff_x20 + 0xea) & 0xff0000) == 0x40000) {
      uVar4 = 0x8000000100dad720;
      uVar5 = 0xd000000000000023;
    }
    else {
      local_68[0] = *(uint6 *)(unaff_x20 + 0xea);
      _swift_getAtKeyPath(&local_31,local_68);
      if (local_31 != '\x01') {
        return;
      }
      local_68[0]._0_8_ = 0;
      local_68[1]._0_8_ = 0xe000000000000000;
      Swift::_StringGuts::grow(0x21,param_1);
      _swift_bridgeObjectRelease((undefined8)local_68[1]);
      local_68[0]._0_8_ = param_2;
      local_68[1]._0_8_ = param_3;
      _swift_bridgeObjectRetain(param_3);
      puVar1 = (undefined8 *)0xd00000000000001f;
      SVar6.bridgeObject = (void *)0x8000000100dad750;
      SVar6.str = (char *)0xd00000000000001f;
      SVar7.bridgeObject = pvVar3;
      SVar7.str = pcVar2;
      Swift::String::append(SVar6,SVar7);
      uVar4 = (undefined8)local_68[1];
      uVar5 = (undefined8)local_68[0];
    }
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = uVar5;
    puVar1[1] = uVar4;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 2;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x100540a20 | FUN_100540a20 */

void FUN_100540a20(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x240) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x238) = param_1;
  _swift_task_switch(FUN_100540a3c);
  return;
}



/* Address: 0x100540a3c | FUN_100540a3c */

void FUN_100540a3c(void)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  int iVar3;
  UnownedSerialExecutor UVar4;
  code *pcVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  long unaff_x22;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  
  lVar12 = *(long *)(unaff_x22 + 0x240);
  lVar9 = *(long *)(lVar12 + 0x70);
  *(long *)(unaff_x22 + 0x248) = lVar9;
  if (lVar9 != 0) {
    lVar10 = *(long *)(lVar12 + 0x78);
    *(long *)(unaff_x22 + 0x250) = lVar10;
    lVar12 = lVar9;
    _swift_getObjectType();
    *(long *)(unaff_x22 + 600) = lVar12;
    *(undefined8 *)(unaff_x22 + 0x260) = *(undefined8 *)(lVar10 + 0x10);
    uVar11 = *(undefined8 *)(lVar10 + 8);
    _swift_unknownObjectRetain(lVar9);
    UVar4 = Swift::Actor::get_unownedExecutor();
    pcVar5 = FUN_100540eac;
LAB_100540ab8:
    _swift_task_switch(pcVar5,UVar4.unknown,uVar11);
    return;
  }
  lVar9 = *(long *)(unaff_x22 + 0x238);
  lVar10 = *(long *)(lVar9 + 0x10);
  *(long *)(unaff_x22 + 0x270) = lVar10;
  if (lVar10 != 0) {
    lVar10 = 0;
    puVar1 = (undefined8 *)(unaff_x22 + 400);
    while( true ) {
      *(long *)(unaff_x22 + 0x278) = lVar10;
      lVar9 = lVar9 + lVar10 * 0x40;
      uVar13 = *(undefined8 *)(lVar9 + 0x28);
      uVar11 = *(undefined8 *)(lVar9 + 0x20);
      uVar15 = *(undefined8 *)(lVar9 + 0x38);
      uVar14 = *(undefined8 *)(lVar9 + 0x30);
      uVar17 = *(undefined8 *)(lVar9 + 0x48);
      uVar16 = *(undefined8 *)(lVar9 + 0x40);
      uVar18 = *(undefined8 *)(lVar9 + 0x4a);
      *(undefined8 *)(unaff_x22 + 0x1c2) = *(undefined8 *)(lVar9 + 0x52);
      *(undefined8 *)(unaff_x22 + 0x1ba) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x1b8) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar16;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar13;
      *puVar1 = uVar11;
      lVar9 = *(long *)(unaff_x22 + 400);
      uVar7 = *(ulong *)(unaff_x22 + 0x198);
      *(long *)(unaff_x22 + 0x280) = lVar9;
      *(ulong *)(unaff_x22 + 0x288) = uVar7;
      uVar2 = *(undefined1 *)(unaff_x22 + 0x1a0);
      *(undefined1 *)(unaff_x22 + 0x1ca) = uVar2;
      _swift_beginAccess(lVar12 + 0x128,unaff_x22 + 0x130,0x21,0);
      uVar11 = *(undefined8 *)(lVar12 + 0x128);
      FUN_1000f8cac(puVar1,unaff_x22 + 0xd0,&DAT_100fcb3e0,&DAT_100c50230);
      _swift_bridgeObjectRetain(uVar11);
      FUN_1004b4b04(lVar9,uVar7,uVar2);
      _swift_bridgeObjectRelease(uVar11);
      lVar12 = *(long *)(unaff_x22 + 0x240);
      if ((uVar7 & 1) == 0) {
        _swift_endAccess(unaff_x22 + 0x130);
        lVar9 = *(long *)(lVar12 + 0x70);
        *(long *)(unaff_x22 + 0x290) = lVar9;
        if (lVar9 != 0) {
          lVar10 = *(long *)(*(long *)(unaff_x22 + 0x240) + 0x78);
          *(long *)(unaff_x22 + 0x298) = lVar10;
          lVar12 = lVar9;
          _swift_getObjectType();
          *(long *)(unaff_x22 + 0x2a0) = lVar12;
          *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(lVar10 + 0x10);
          uVar11 = *(undefined8 *)(lVar10 + 8);
          _swift_unknownObjectRetain(lVar9);
          UVar4 = Swift::Actor::get_unownedExecutor();
          pcVar5 = FUN_10054154c;
          goto LAB_100540ab8;
        }
        FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
      }
      else {
        iVar3 = (int)*(undefined8 *)(lVar12 + 0x128);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar10 = *(long *)(lVar12 + 0x128);
        *(long *)(unaff_x22 + 0xd0) = lVar10;
        *(undefined8 *)(lVar12 + 0x128) = 0x8000000000000000;
        if (iVar3 == 0) {
          FUN_100507278();
          lVar10 = *(long *)(unaff_x22 + 0xd0);
        }
        lVar12 = *(long *)(unaff_x22 + 0x240);
        puVar8 = (undefined8 *)(*(long *)(lVar10 + 0x30) + lVar9 * 0x18);
        FUN_1004dc818(*puVar8,puVar8[1],*(undefined1 *)(puVar8 + 2));
        puVar8 = (undefined8 *)(*(long *)(lVar10 + 0x38) + lVar9 * 0x10);
        pcVar5 = (code *)*puVar8;
        uVar14 = puVar8[1];
        FUN_100507c40(lVar9,lVar10);
        *(long *)(lVar12 + 0x128) = lVar10;
        puVar8 = (undefined8 *)(unaff_x22 + 0x130);
        _swift_endAccess();
        uVar11 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1b0);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar16 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar2 = *(undefined1 *)(unaff_x22 + 0x1c8);
        if (*(char *)(unaff_x22 + 0x1c9) == '\x01') {
          FUN_1004db3ac();
          puVar6 = &DAT_100eda9c8;
          _swift_allocError(&DAT_100eda9c8,puVar8,0,0);
          *puVar8 = uVar11;
          puVar8[1] = uVar15;
          puVar8[2] = uVar13;
          *(char *)(puVar8 + 3) = (char)uVar16;
          *(undefined **)(unaff_x22 + 0xd0) = puVar6;
          *(undefined1 *)(unaff_x22 + 0xf0) = 1;
          FUN_10054a850(uVar11,uVar15,uVar13,uVar16,uVar2,1,FUN_10045b2bc,FUN_1004d9ee8);
          FUN_10054a850(uVar11,uVar15,uVar13,uVar16,uVar2,1,FUN_10045b2bc,FUN_1004d9ee8);
          _swift_errorRetain(puVar6);
          (*pcVar5)(unaff_x22 + 0xd0);
          _swift_release(uVar14);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_10054a850(uVar11,uVar15,uVar13,uVar16,uVar2,1,FUN_1004dbde0,FUN_1004d9f84);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          _swift_errorRelease(puVar6);
        }
        else {
          *(undefined **)(unaff_x22 + 0x148) = &DAT_100edd000;
          puVar6 = &DAT_100eddbc0;
          _swift_allocObject(&DAT_100eddbc0,0x31,7);
          *(undefined **)(unaff_x22 + 0x130) = puVar6;
          *(undefined8 *)(puVar6 + 0x10) = uVar11;
          *(undefined8 *)(puVar6 + 0x18) = uVar15;
          *(undefined8 *)(puVar6 + 0x20) = uVar13;
          *(undefined8 *)(puVar6 + 0x28) = uVar16;
          puVar6[0x30] = uVar2;
          FUN_10000cbfc(unaff_x22 + 0x130,unaff_x22 + 0xd0);
          *(undefined1 *)(unaff_x22 + 0xf0) = 0;
          FUN_10045b2bc(uVar11,uVar15,uVar13,uVar16,uVar2);
          (*pcVar5)(unaff_x22 + 0xd0);
          _swift_release(uVar14);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          FUN_100004594(unaff_x22 + 0x130);
        }
      }
      lVar10 = *(long *)(unaff_x22 + 0x278) + 1;
      if (lVar10 == *(long *)(unaff_x22 + 0x270)) break;
      lVar12 = *(long *)(unaff_x22 + 0x240);
      lVar9 = *(long *)(unaff_x22 + 0x238);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100540e58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100540eac | FUN_100540eac */

void FUN_100540eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 600);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x248);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x240);
  (**(code **)(unaff_x22 + 0x260))(uVar1,*(undefined8 *)(unaff_x22 + 0x250));
  *(undefined8 *)(unaff_x22 + 0x268) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_100540f04,uVar2,0);
  return;
}



/* Address: 0x100540f04 | FUN_100540f04 */

void FUN_100540f04(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  int iVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  char *pcVar10;
  void *pvVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  long unaff_x22;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String SVar23;
  String SVar24;
  
  puVar1 = (undefined8 *)(unaff_x22 + 400);
  lVar16 = *(long *)(unaff_x22 + 0x268);
  pvVar11 = (void *)0x0;
  _swift_beginAccess(lVar16 + 0x20,unaff_x22 + 0x1f8,0);
  FUN_100076688(lVar16 + 0x20,unaff_x22 + 0xd0);
  uVar5 = *(ulong *)(unaff_x22 + 0xe8);
  lVar12 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(unaff_x22 + 0xd0,uVar5);
  (**(code **)(lVar12 + 0x70))(uVar5,lVar12);
  FUN_100004594(unaff_x22 + 0xd0);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x268);
  if ((uVar5 & 0xff) == 0) {
    lVar15 = *(long *)(unaff_x22 + 0x238);
    FUN_100076688(lVar16 + 0x20,puVar1);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x1a8);
    lVar12 = *(long *)(unaff_x22 + 0x1b0);
    FUN_100004640();
    puVar6 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar9 = (char *)0x60;
    pcVar10 = (char *)0x7;
    _swift_allocObject();
    *(undefined8 *)(puVar6 + 0x20) = 0x746e756f63;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined1 **)(puVar6 + 0x28) = &DAT_e500000000000000;
    SVar23.bridgeObject = pcVar10;
    SVar23.str = pcVar9;
    Swift::String::reserveCapacity(2,SVar23);
    *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(lVar15 + 0x10);
    SVar23 = Swift::CustomStringConvertible::get_description();
    SVar24.bridgeObject = pvVar11;
    SVar24.str = pcVar10;
    Swift::String::append(SVar23,SVar24);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    *(undefined8 *)(puVar6 + 0x30) = 0;
    *(undefined8 *)(puVar6 + 0x38) = 0xe000000000000000;
    puVar6[0x58] = 0;
    puVar7 = puVar6;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar6);
    FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x10) = 0;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dad510;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined **)(unaff_x22 + 0x30) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dad4f0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x42d;
    *(undefined1 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000019;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad510;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar7;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad4f0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x42d;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x130);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    (**(code **)(lVar12 + 0x28))(unaff_x22 + 0x10,uVar17);
    _swift_release(uVar14);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(puVar1);
  }
  else {
    _swift_release(uVar14);
  }
  lVar12 = *(long *)(unaff_x22 + 0x238);
  lVar16 = *(long *)(lVar12 + 0x10);
  *(long *)(unaff_x22 + 0x270) = lVar16;
  if (lVar16 != 0) {
    lVar16 = 0;
    while( true ) {
      *(long *)(unaff_x22 + 0x278) = lVar16;
      lVar15 = *(long *)(unaff_x22 + 0x240);
      lVar12 = lVar12 + lVar16 * 0x40;
      uVar20 = *(undefined8 *)(lVar12 + 0x38);
      uVar19 = *(undefined8 *)(lVar12 + 0x30);
      uVar17 = *(undefined8 *)(lVar12 + 0x48);
      uVar14 = *(undefined8 *)(lVar12 + 0x40);
      uVar18 = *(undefined8 *)(lVar12 + 0x4a);
      uVar22 = *(undefined8 *)(lVar12 + 0x28);
      uVar21 = *(undefined8 *)(lVar12 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x1c2) = *(undefined8 *)(lVar12 + 0x52);
      *(undefined8 *)(unaff_x22 + 0x1ba) = uVar18;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar20;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x1b8) = uVar17;
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar22;
      *puVar1 = uVar21;
      lVar12 = *(long *)(unaff_x22 + 400);
      uVar5 = *(ulong *)(unaff_x22 + 0x198);
      *(long *)(unaff_x22 + 0x280) = lVar12;
      *(ulong *)(unaff_x22 + 0x288) = uVar5;
      uVar3 = *(undefined1 *)(unaff_x22 + 0x1a0);
      *(undefined1 *)(unaff_x22 + 0x1ca) = uVar3;
      _swift_beginAccess(lVar15 + 0x128,unaff_x22 + 0x130,0x21,0);
      uVar14 = *(undefined8 *)(lVar15 + 0x128);
      FUN_1000f8cac(puVar1,unaff_x22 + 0xd0,&DAT_100fcb3e0,&DAT_100c50230);
      _swift_bridgeObjectRetain(uVar14);
      FUN_1004b4b04(lVar12,uVar5,uVar3);
      _swift_bridgeObjectRelease(uVar14);
      lVar16 = *(long *)(unaff_x22 + 0x240);
      if ((uVar5 & 1) == 0) {
        _swift_endAccess(unaff_x22 + 0x130);
        lVar12 = *(long *)(lVar16 + 0x70);
        *(long *)(unaff_x22 + 0x290) = lVar12;
        if (lVar12 != 0) {
          lVar15 = *(long *)(*(long *)(unaff_x22 + 0x240) + 0x78);
          *(long *)(unaff_x22 + 0x298) = lVar15;
          lVar16 = lVar12;
          _swift_getObjectType();
          *(long *)(unaff_x22 + 0x2a0) = lVar16;
          *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(lVar15 + 0x10);
          uVar14 = *(undefined8 *)(lVar15 + 8);
          _swift_unknownObjectRetain(lVar12);
          UVar8 = Swift::Actor::get_unownedExecutor();
          _swift_task_switch(FUN_10054154c,UVar8.unknown,uVar14);
          return;
        }
        FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
      }
      else {
        iVar4 = (int)*(undefined8 *)(lVar16 + 0x128);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar15 = *(long *)(lVar16 + 0x128);
        *(long *)(unaff_x22 + 0xd0) = lVar15;
        *(undefined8 *)(lVar16 + 0x128) = 0x8000000000000000;
        if (iVar4 == 0) {
          FUN_100507278();
          lVar15 = *(long *)(unaff_x22 + 0xd0);
        }
        lVar16 = *(long *)(unaff_x22 + 0x240);
        puVar13 = (undefined8 *)(*(long *)(lVar15 + 0x30) + lVar12 * 0x18);
        FUN_1004dc818(*puVar13,puVar13[1],*(undefined1 *)(puVar13 + 2));
        puVar13 = (undefined8 *)(*(long *)(lVar15 + 0x38) + lVar12 * 0x10);
        pcVar2 = (code *)*puVar13;
        uVar18 = puVar13[1];
        FUN_100507c40(lVar12,lVar15);
        *(long *)(lVar16 + 0x128) = lVar15;
        puVar13 = (undefined8 *)(unaff_x22 + 0x130);
        _swift_endAccess();
        uVar14 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar19 = *(undefined8 *)(unaff_x22 + 0x1b0);
        uVar17 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar20 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar3 = *(undefined1 *)(unaff_x22 + 0x1c8);
        if (*(char *)(unaff_x22 + 0x1c9) == '\x01') {
          FUN_1004db3ac();
          puVar6 = &DAT_100eda9c8;
          _swift_allocError(&DAT_100eda9c8,puVar13,0,0);
          *puVar13 = uVar14;
          puVar13[1] = uVar19;
          puVar13[2] = uVar17;
          *(char *)(puVar13 + 3) = (char)uVar20;
          *(undefined **)(unaff_x22 + 0xd0) = puVar6;
          *(undefined1 *)(unaff_x22 + 0xf0) = 1;
          FUN_10054a850(uVar14,uVar19,uVar17,uVar20,uVar3,1,FUN_10045b2bc,FUN_1004d9ee8);
          FUN_10054a850(uVar14,uVar19,uVar17,uVar20,uVar3,1,FUN_10045b2bc,FUN_1004d9ee8);
          _swift_errorRetain(puVar6);
          (*pcVar2)(unaff_x22 + 0xd0);
          _swift_release(uVar18);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_10054a850(uVar14,uVar19,uVar17,uVar20,uVar3,1,FUN_1004dbde0,FUN_1004d9f84);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          _swift_errorRelease(puVar6);
        }
        else {
          *(undefined **)(unaff_x22 + 0x148) = &DAT_100edd000;
          puVar6 = &DAT_100eddbc0;
          _swift_allocObject(&DAT_100eddbc0,0x31,7);
          *(undefined **)(unaff_x22 + 0x130) = puVar6;
          *(undefined8 *)(puVar6 + 0x10) = uVar14;
          *(undefined8 *)(puVar6 + 0x18) = uVar19;
          *(undefined8 *)(puVar6 + 0x20) = uVar17;
          *(undefined8 *)(puVar6 + 0x28) = uVar20;
          puVar6[0x30] = uVar3;
          FUN_10000cbfc(unaff_x22 + 0x130,unaff_x22 + 0xd0);
          *(undefined1 *)(unaff_x22 + 0xf0) = 0;
          FUN_10045b2bc(uVar14,uVar19,uVar17,uVar20,uVar3);
          (*pcVar2)(unaff_x22 + 0xd0);
          _swift_release(uVar18);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          FUN_100004594(unaff_x22 + 0x130);
        }
      }
      lVar16 = *(long *)(unaff_x22 + 0x278) + 1;
      if (lVar16 == *(long *)(unaff_x22 + 0x270)) break;
      lVar12 = *(long *)(unaff_x22 + 0x238);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x0001005414d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10054154c | FUN_10054154c */

void FUN_10054154c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x2a0);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x240);
  (**(code **)(unaff_x22 + 0x2a8))(uVar1,*(undefined8 *)(unaff_x22 + 0x298));
  *(undefined8 *)(unaff_x22 + 0x2b0) = uVar1;
  _swift_unknownObjectRelease(uVar3);
  _swift_task_switch(FUN_1005415a4,uVar2,0);
  return;
}



/* Address: 0x1005415a4 | FUN_1005415a4 */

void FUN_1005415a4(void)

{
  undefined8 *puVar1;
  code *pcVar2;
  char cVar3;
  undefined1 uVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  UnownedSerialExecutor UVar8;
  char *pcVar9;
  ulong uVar10;
  char *pcVar11;
  void *pvVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  long lVar16;
  long unaff_x22;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  void *pvVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  
  puVar1 = (undefined8 *)(unaff_x22 + 400);
  lVar17 = *(long *)(unaff_x22 + 0x2b0);
  pvVar12 = (void *)0x0;
  _swift_beginAccess(lVar17 + 0x20,unaff_x22 + 0x210,0);
  FUN_100076688(lVar17 + 0x20,unaff_x22 + 0xd0);
  uVar15 = *(undefined8 *)(unaff_x22 + 0xe8);
  lVar16 = *(long *)(unaff_x22 + 0xf0);
  FUN_100004640(unaff_x22 + 0xd0,uVar15);
  (**(code **)(lVar16 + 0x70))(uVar15,lVar16);
  FUN_100004594(unaff_x22 + 0xd0);
  if (((uint)uVar15 & 0xff) < 5) {
    cVar3 = *(char *)(unaff_x22 + 0x1ca);
    FUN_100076688(lVar17 + 0x20,unaff_x22 + 0x1d0);
    uVar15 = *(undefined8 *)(unaff_x22 + 0x1e8);
    lVar16 = *(long *)(unaff_x22 + 0x1f0);
    FUN_100004640();
    puVar6 = &DAT_100fcd4a8;
    FUN_1000f7830(&DAT_100fcd4a8,&DAT_100c541b0);
    pcVar9 = (char *)0x60;
    pcVar11 = (char *)0x7;
    _swift_allocObject();
    *(undefined1 **)(puVar6 + 0x20) = &SUB_00006469;
    *(undefined8 *)(puVar6 + 0x18) = 2;
    *(undefined8 *)(puVar6 + 0x10) = 1;
    *(undefined1 **)(puVar6 + 0x28) = &SUB_e200000000000000;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xe000000000000000;
    SVar26.bridgeObject = pcVar11;
    SVar26.str = pcVar9;
    Swift::String::reserveCapacity(2,SVar26);
    *(undefined8 *)(unaff_x22 + 0x228) = *(undefined8 *)(unaff_x22 + 0xd0);
    *(undefined8 *)(unaff_x22 + 0x230) = *(undefined8 *)(unaff_x22 + 0xd8);
    if (cVar3 == '\x01') {
      *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x280);
      SVar25 = Swift::CustomStringConvertible::get_description();
    }
    else {
      pvVar20 = *(void **)(unaff_x22 + 0x288);
      _swift_bridgeObjectRetain(pvVar20);
      SVar25.bridgeObject = pvVar20;
      SVar25.str = *(char **)(unaff_x22 + 0x280);
    }
    uVar19 = *(undefined8 *)(unaff_x22 + 0x2b0);
    SVar27.bridgeObject = pvVar12;
    SVar27.str = pcVar11;
    Swift::String::append(SVar25,SVar27);
    _swift_bridgeObjectRelease(SVar25.bridgeObject);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x230);
    *(undefined8 *)(puVar6 + 0x30) = *(undefined8 *)(unaff_x22 + 0x228);
    *(undefined8 *)(puVar6 + 0x38) = uVar14;
    puVar6[0x58] = 0;
    puVar7 = puVar6;
    FUN_1004a6a1c();
    _swift_setDeallocating(puVar6);
    FUN_1000fb4c4(puVar6 + 0x20,&DAT_100fcb448,&DAT_100c538d0);
    _swift_deallocClassInstance(puVar6,0x20,7);
    *(undefined1 *)(unaff_x22 + 0x70) = 4;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000044;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dad530;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined **)(unaff_x22 + 0x90) = puVar7;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dad4f0;
    *(undefined8 *)(unaff_x22 + 200) = 0x43c;
    *(undefined1 *)(unaff_x22 + 0xd0) = 4;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0xd000000000000044;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0x8000000100dad530;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0;
    *(undefined **)(unaff_x22 + 0xf0) = puVar7;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0;
    *(undefined8 *)(unaff_x22 + 0x100) = 0;
    *(undefined8 *)(unaff_x22 + 0x108) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x110) = 0x8000000100dad1a0;
    *(undefined8 *)(unaff_x22 + 0x118) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x120) = 0x8000000100dad4f0;
    *(undefined8 *)(unaff_x22 + 0x128) = 0x43c;
    FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x130);
    FUN_1004eaa3c(unaff_x22 + 0xd0);
    (**(code **)(lVar16 + 0x28))(unaff_x22 + 0x70,uVar15);
    FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_release(uVar19);
    FUN_1004eaa3c(unaff_x22 + 0x70);
    FUN_100004594(unaff_x22 + 0x1d0);
  }
  else {
    uVar15 = *(undefined8 *)(unaff_x22 + 0x2b0);
    FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
    _swift_release(uVar15);
  }
  lVar16 = *(long *)(unaff_x22 + 0x278) + 1;
  if (lVar16 != *(long *)(unaff_x22 + 0x270)) {
    do {
      *(long *)(unaff_x22 + 0x278) = lVar16;
      lVar17 = *(long *)(unaff_x22 + 0x240);
      lVar16 = *(long *)(unaff_x22 + 0x238) + lVar16 * 0x40;
      uVar22 = *(undefined8 *)(lVar16 + 0x38);
      uVar21 = *(undefined8 *)(lVar16 + 0x30);
      uVar14 = *(undefined8 *)(lVar16 + 0x48);
      uVar15 = *(undefined8 *)(lVar16 + 0x40);
      uVar19 = *(undefined8 *)(lVar16 + 0x4a);
      uVar24 = *(undefined8 *)(lVar16 + 0x28);
      uVar23 = *(undefined8 *)(lVar16 + 0x20);
      *(undefined8 *)(unaff_x22 + 0x1c2) = *(undefined8 *)(lVar16 + 0x52);
      *(undefined8 *)(unaff_x22 + 0x1ba) = uVar19;
      *(undefined8 *)(unaff_x22 + 0x1a8) = uVar22;
      *(undefined8 *)(unaff_x22 + 0x1a0) = uVar21;
      *(undefined8 *)(unaff_x22 + 0x1b8) = uVar14;
      *(undefined8 *)(unaff_x22 + 0x1b0) = uVar15;
      *(undefined8 *)(unaff_x22 + 0x198) = uVar24;
      *puVar1 = uVar23;
      lVar16 = *(long *)(unaff_x22 + 400);
      uVar10 = *(ulong *)(unaff_x22 + 0x198);
      *(long *)(unaff_x22 + 0x280) = lVar16;
      *(ulong *)(unaff_x22 + 0x288) = uVar10;
      uVar4 = *(undefined1 *)(unaff_x22 + 0x1a0);
      *(undefined1 *)(unaff_x22 + 0x1ca) = uVar4;
      _swift_beginAccess(lVar17 + 0x128,unaff_x22 + 0x130,0x21,0);
      uVar15 = *(undefined8 *)(lVar17 + 0x128);
      FUN_1000f8cac(puVar1,unaff_x22 + 0xd0,&DAT_100fcb3e0,&DAT_100c50230);
      _swift_bridgeObjectRetain(uVar15);
      FUN_1004b4b04(lVar16,uVar10,uVar4);
      _swift_bridgeObjectRelease(uVar15);
      lVar17 = *(long *)(unaff_x22 + 0x240);
      if ((uVar10 & 1) == 0) {
        _swift_endAccess(unaff_x22 + 0x130);
        lVar16 = *(long *)(lVar17 + 0x70);
        *(long *)(unaff_x22 + 0x290) = lVar16;
        if (lVar16 != 0) {
          lVar18 = *(long *)(*(long *)(unaff_x22 + 0x240) + 0x78);
          *(long *)(unaff_x22 + 0x298) = lVar18;
          lVar17 = lVar16;
          _swift_getObjectType();
          *(long *)(unaff_x22 + 0x2a0) = lVar17;
          *(undefined8 *)(unaff_x22 + 0x2a8) = *(undefined8 *)(lVar18 + 0x10);
          uVar15 = *(undefined8 *)(lVar18 + 8);
          _swift_unknownObjectRetain(lVar16);
          UVar8 = Swift::Actor::get_unownedExecutor();
          _swift_task_switch(FUN_10054154c,UVar8.unknown,uVar15);
          return;
        }
        FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
      }
      else {
        iVar5 = (int)*(undefined8 *)(lVar17 + 0x128);
        _swift_isUniquelyReferenced_nonNull_native();
        lVar18 = *(long *)(lVar17 + 0x128);
        *(long *)(unaff_x22 + 0xd0) = lVar18;
        *(undefined8 *)(lVar17 + 0x128) = 0x8000000000000000;
        if (iVar5 == 0) {
          FUN_100507278();
          lVar18 = *(long *)(unaff_x22 + 0xd0);
        }
        lVar17 = *(long *)(unaff_x22 + 0x240);
        puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x30) + lVar16 * 0x18);
        FUN_1004dc818(*puVar13,puVar13[1],*(undefined1 *)(puVar13 + 2));
        puVar13 = (undefined8 *)(*(long *)(lVar18 + 0x38) + lVar16 * 0x10);
        pcVar2 = (code *)*puVar13;
        uVar19 = puVar13[1];
        FUN_100507c40(lVar16,lVar18);
        *(long *)(lVar17 + 0x128) = lVar18;
        puVar13 = (undefined8 *)(unaff_x22 + 0x130);
        _swift_endAccess();
        uVar15 = *(undefined8 *)(unaff_x22 + 0x1a8);
        uVar21 = *(undefined8 *)(unaff_x22 + 0x1b0);
        uVar14 = *(undefined8 *)(unaff_x22 + 0x1b8);
        uVar22 = *(undefined8 *)(unaff_x22 + 0x1c0);
        uVar4 = *(undefined1 *)(unaff_x22 + 0x1c8);
        if (*(char *)(unaff_x22 + 0x1c9) == '\x01') {
          FUN_1004db3ac();
          puVar6 = &DAT_100eda9c8;
          _swift_allocError(&DAT_100eda9c8,puVar13,0,0);
          *puVar13 = uVar15;
          puVar13[1] = uVar21;
          puVar13[2] = uVar14;
          *(char *)(puVar13 + 3) = (char)uVar22;
          *(undefined **)(unaff_x22 + 0xd0) = puVar6;
          *(undefined1 *)(unaff_x22 + 0xf0) = 1;
          FUN_10054a850(uVar15,uVar21,uVar14,uVar22,uVar4,1,FUN_10045b2bc,FUN_1004d9ee8);
          FUN_10054a850(uVar15,uVar21,uVar14,uVar22,uVar4,1,FUN_10045b2bc,FUN_1004d9ee8);
          _swift_errorRetain(puVar6);
          (*pcVar2)(unaff_x22 + 0xd0);
          _swift_release(uVar19);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_10054a850(uVar15,uVar21,uVar14,uVar22,uVar4,1,FUN_1004dbde0,FUN_1004d9f84);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          _swift_errorRelease(puVar6);
        }
        else {
          *(undefined **)(unaff_x22 + 0x148) = &DAT_100edd000;
          puVar6 = &DAT_100eddbc0;
          _swift_allocObject(&DAT_100eddbc0,0x31,7);
          *(undefined **)(unaff_x22 + 0x130) = puVar6;
          *(undefined8 *)(puVar6 + 0x10) = uVar15;
          *(undefined8 *)(puVar6 + 0x18) = uVar21;
          *(undefined8 *)(puVar6 + 0x20) = uVar14;
          *(undefined8 *)(puVar6 + 0x28) = uVar22;
          puVar6[0x30] = uVar4;
          FUN_10000cbfc(unaff_x22 + 0x130,unaff_x22 + 0xd0);
          *(undefined1 *)(unaff_x22 + 0xf0) = 0;
          FUN_10045b2bc(uVar15,uVar21,uVar14,uVar22,uVar4);
          (*pcVar2)(unaff_x22 + 0xd0);
          _swift_release(uVar19);
          FUN_1000fb4c4(puVar1,&DAT_100fcb3e0,&DAT_100c50230);
          FUN_1000fb4c4(unaff_x22 + 0xd0,&DAT_100fcd0b8,&DAT_100c53690);
          FUN_100004594(unaff_x22 + 0x130);
        }
      }
      lVar16 = *(long *)(unaff_x22 + 0x278) + 1;
    } while (lVar16 != *(long *)(unaff_x22 + 0x270));
  }
                    /* WARNING: Could not recover jumptable at 0x000100541888. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100541c48 | FUN_100541c48 */

void FUN_100541c48(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  uVar3 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar5 = *(undefined8 *)(unaff_x20 + 0xb8);
  uVar1 = *(undefined8 *)(unaff_x20 + 200);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xd0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xe0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x110));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x118));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x120));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x128));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x130));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x138));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100541d0c | FUN_100541d0c */

void FUN_100541d0c(void)

{
  FUN_100541c48();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100541d24 | FUN_100541d24 */

void FUN_100541d24(void)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(0);
  pcVar1 = (char *)0x747865746e6f63;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x736c6f6f74;
  }
  HVar3.unknown = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100541da0 | FUN_100541da0 */

void FUN_100541da0(Hasher param_1)

{
  char *pcVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  String SVar3;
  
  pcVar1 = (char *)0x747865746e6f63;
  if (*unaff_x20 != '\x01') {
    pcVar1 = (char *)0x736c6f6f74;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  SVar3.bridgeObject = puVar2;
  SVar3.str = pcVar1;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar2);
  return;
}



/* Address: 0x100541df8 | FUN_100541df8 */

void FUN_100541df8(__int64 param_1)

{
  char *pcVar1;
  char cVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  Swift::Hasher::init(param_1);
  pcVar1 = (char *)0x747865746e6f63;
  if (cVar2 != '\x01') {
    pcVar1 = (char *)0x736c6f6f74;
  }
  HVar3.unknown = &DAT_e700000000000000;
  if (cVar2 != '\x01') {
    HVar3.unknown = &DAT_e500000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100541e70 | FUN_100541e70 */

void FUN_100541e70(void)

{
  FUN_10054220c();
  return;
}



/* Address: 0x100541e7c | FUN_100541e7c */

void FUN_100541e7c(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  
  uVar1 = 0x747865746e6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x736c6f6f74;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  *param_1 = uVar1;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100541eb8 | FUN_100541eb8 */

undefined1  [16] FUN_100541eb8(void)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x747865746e6f63;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x736c6f6f74;
  }
  puVar2 = &DAT_e700000000000000;
  if (*unaff_x20 != '\x01') {
    puVar2 = &DAT_e500000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x100541ef0 | FUN_100541ef0 */

void FUN_100541ef0(void)

{
  FUN_1005422ec();
  return;
}



/* Address: 0x100541efc | FUN_100541efc */

String FUN_100541efc(void)

{
  String SVar1;
  
  FUN_1005493b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100541f24 | FUN_100541f24 */

String FUN_100541f24(void)

{
  String SVar1;
  
  FUN_1005493b8();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100541f4c | FUN_100541f4c */

void FUN_100541f4c(void)

{
  FUN_100549184();
  return;
}



/* Address: 0x100541f60 | FUN_100541f60 */

void FUN_100541f60(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fce910;
  FUN_1000f7830(&DAT_100fce910,&DAT_100c55a50);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005493b8();
  KVar2 = Swift::Encoder::_container();
  local_51 = (undefined1)param_2;
  local_52 = 0;
  FUN_1005493f8();
  puVar3 = &local_51;
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (puVar3,&local_52,puVar1,&DAT_100edd6e0,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_53 = (undefined1)((uint)param_2 >> 8);
    local_54 = 1;
    FUN_100549438();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_53,&local_54,puVar1,&DAT_100edd700,puVar3);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1005420a4 | FUN_1005420a4 */

void FUN_1005420a4(void)

{
  FUN_10054252c();
  return;
}



/* Address: 0x1005420c0 | FUN_1005420c0 */

void FUN_1005420c0(undefined8 param_1)

{
  undefined2 *unaff_x20;
  
  FUN_100541f60(param_1,*unaff_x20);
  return;
}



/* Address: 0x1005420d8 | FUN_1005420d8 */

void FUN_1005420d8(void)

{
  char cVar1;
  uint uVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(0);
  uVar2 = 0x6c7275;
  if (cVar1 != '\x01') {
    uVar2 = 0x6d726f66;
  }
  HVar3.unknown = (undefined1 *)0xe300000000000000;
  if (cVar1 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = (char *)(ulong)uVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100542148 | FUN_100542148 */

void FUN_100542148(Hasher param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  char *unaff_x20;
  String SVar3;
  
  uVar2 = 0x6c7275;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (*unaff_x20 != '\x01') {
    puVar1 = &DAT_e400000000000000;
  }
  SVar3.bridgeObject = puVar1;
  SVar3.str = (char *)(ulong)uVar2;
  Swift::String::hash(param_1,SVar3);
  _swift_bridgeObjectRelease(puVar1);
  return;
}



/* Address: 0x100542194 | FUN_100542194 */

void FUN_100542194(__int64 param_1)

{
  char cVar1;
  uint uVar2;
  Hasher HVar3;
  char *unaff_x20;
  String SVar4;
  undefined1 auStack_68 [72];
  
  cVar1 = *unaff_x20;
  Swift::Hasher::init(param_1);
  uVar2 = 0x6c7275;
  if (cVar1 != '\x01') {
    uVar2 = 0x6d726f66;
  }
  HVar3.unknown = (undefined1 *)0xe300000000000000;
  if (cVar1 != '\x01') {
    HVar3.unknown = &DAT_e400000000000000;
  }
  SVar4.bridgeObject = HVar3.unknown;
  SVar4.str = (char *)(ulong)uVar2;
  Swift::String::hash((Hasher)auStack_68,SVar4);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100542200 | FUN_100542200 */

void FUN_100542200(void)

{
  FUN_10054220c();
  return;
}



/* Address: 0x10054220c | FUN_10054220c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010054224c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10054220c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  __int64 _Var4;
  undefined1 uVar5;
  
  uVar2 = *param_2;
  uVar3 = param_2[1];
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var4 = Swift::_findStringSwitchCase(param_2,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  uVar5 = 1;
  if (_Var4 != 1) {
    uVar5 = 2;
  }
  uVar1 = 0;
  if (_Var4 != 0) {
    uVar1 = uVar5;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100542284 | FUN_100542284 */

void FUN_100542284(ulong *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  char *unaff_x20;
  
  uVar2 = 0x6c7275;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0x6d726f66;
  }
  puVar1 = (undefined1 *)0xe300000000000000;
  if (*unaff_x20 != '\x01') {
    puVar1 = &DAT_e400000000000000;
  }
  *param_1 = (ulong)uVar2;
  param_1[1] = (ulong)puVar1;
  return;
}



/* Address: 0x1005422b4 | FUN_1005422b4 */

undefined4 FUN_1005422b4(void)

{
  undefined4 uVar1;
  char *unaff_x20;
  
  uVar1 = 0x6c7275;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x6d726f66;
  }
  return uVar1;
}



/* Address: 0x1005422e0 | FUN_1005422e0 */

void FUN_1005422e0(void)

{
  FUN_1005422ec();
  return;
}



/* Address: 0x1005422ec | FUN_1005422ec */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100542330 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005422ec(undefined1 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  __int64 _Var2;
  undefined1 uVar3;
  
  FUN_1000f7830(&DAT_100fcb810,&DAT_100c51eb0);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_2,param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100542368 | FUN_100542368 */

String FUN_100542368(void)

{
  String SVar1;
  
  FUN_1005496bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100542390 | FUN_100542390 */

String FUN_100542390(void)

{
  String SVar1;
  
  FUN_1005496bc();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1005423b8 | FUN_1005423b8 */

void FUN_1005423b8(void)

{
  FUN_100549478();
  return;
}



/* Address: 0x1005423cc | FUN_1005423cc */

void FUN_1005423cc(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  KeyedEncodingContainer<undefined> KVar2;
  undefined1 *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  undefined1 auStack_60 [12];
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fce930;
  FUN_1000f7830(&DAT_100fce930,&DAT_100c55a58);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1005496bc();
  KVar2 = Swift::Encoder::_container();
  local_51 = (undefined1)param_2;
  local_52 = 0;
  FUN_1005496fc();
  puVar3 = &local_51;
  Swift::KeyedEncodingContainer::_encodeIfPresent
            (puVar3,&local_52,puVar1,&DAT_100edd7a0,KVar2.unknown);
  if (unaff_x21 == 0) {
    local_53 = (undefined1)((uint)param_2 >> 8);
    local_54 = 1;
    FUN_10054973c();
    Swift::KeyedEncodingContainer::_encodeIfPresent
              (&local_53,&local_54,puVar1,&DAT_100edd7c0,puVar3);
  }
  (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100542510 | FUN_100542510 */

void FUN_100542510(void)

{
  FUN_10054252c();
  return;
}



/* Address: 0x10054252c | FUN_10054252c */

void FUN_10054252c(undefined2 *param_1,undefined2 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long unaff_x21;
  
  (*param_5)();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100542554 | FUN_100542554 */

void FUN_100542554(undefined8 param_1)

{
  undefined2 *unaff_x20;
  
  FUN_1005423cc(param_1,*unaff_x20);
  return;
}



/* Address: 0x10054256c | FUN_10054256c */

void FUN_10054256c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  UnownedSerialExecutor UVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_7;
  *(undefined8 *)(unaff_x22 + 0x78) = param_8;
  *(undefined8 *)(unaff_x22 + 0x60) = param_5;
  *(undefined8 *)(unaff_x22 + 0x68) = param_6;
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  *(undefined8 *)(unaff_x22 + 0x58) = param_4;
  if (param_2 == 0) {
    UVar1.unknown = (undefined *)0x0;
    param_3 = 0;
  }
  else {
    _swift_getObjectType(param_2);
    UVar1 = Swift::Actor::get_unownedExecutor();
  }
  _swift_task_switch(FUN_1005425d8,UVar1.unknown,param_3);
  return;
}



/* Address: 0x1005425d8 | FUN_1005425d8 */

void FUN_1005425d8(void)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = *(undefined8 *)(unaff_x22 + 0x50);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_100359ff0;
  _swift_continuation_init(unaff_x22 + 0x10,1);
  FUN_100542650();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100542650 | FUN_100542650 */

void FUN_100542650(UnsafeContinuation<undefined,undefined> param_1,code *param_2,undefined8 param_3,
                  char *param_4,void *param_5)

{
  CheckedContinuation CVar1;
  long extraout_x8;
  long lVar2;
  String function;
  
  FUN_1000f8b08(&DAT_100fcb578,&DAT_100c50390);
  CVar1 = Swift::CheckedContinuation::typeMetadataAccessor();
  lVar2 = *(long *)(CVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_bridgeObjectRetain(param_5);
  function.bridgeObject = param_5;
  function.str = param_4;
  Swift::CheckedContinuation::init(param_1,function);
  (*param_2)(&stack0xffffffffffffffa0 + -extraout_x8);
  (**(code **)(lVar2 + 8))(&stack0xffffffffffffffa0 + -extraout_x8,CVar1.unknown);
  return;
}



/* Address: 0x100542748 | FUN_100542748 */

void FUN_100542748(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6,undefined8 *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 local_98;
  undefined8 *puStack_90;
  long local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  long local_70;
  long lStack_68;
  
  if (param_2 != 0) {
    uVar1 = *param_7;
    uVar2 = param_7[1];
    _swift_retain(uVar2);
    if (param_6 == 0 && param_5 == 0) {
      puStack_90 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puStack_90 = &local_80;
      local_70 = param_5;
      lStack_68 = param_6;
    }
    local_98 = 7;
    local_88 = param_2;
    _swift_task_create(param_4,&local_98,param_8,uVar1,uVar2);
    *param_1 = param_4;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100542800);
  (*pcVar3)();
}



/* Address: 0x100542800 | FUN_100542800 */

void FUN_100542800(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x20;
  
  puVar3 = (undefined1 *)*unaff_x20;
  puVar2 = puVar3;
  _swift_isUniquelyReferenced_nonNull_bridgeObject();
  *unaff_x20 = puVar3;
  if ((((int)puVar2 != 0) && (puVar2 = (undefined1 *)0x0, -1 < (long)puVar3)) &&
     (((ulong)puVar3 >> 0x3e & 1) == 0)) {
    if (param_1 <= (long)(*(ulong *)(((ulong)puVar3 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    puVar2 = &DAT_00000001;
  }
  if ((ulong)puVar3 >> 0x3e != 0) {
    _Var1.unknown = (undefined *)((ulong)puVar3 & 0xffffffffffffff8);
    if ((undefined1 *)0x7fffffffffffffff < puVar3) {
      _Var1.unknown = puVar3;
    }
    Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  FUN_1004a4bf0();
  *unaff_x20 = puVar2;
  return;
}



/* Address: 0x1005428b0 | FUN_1005428b0 */

void FUN_1005428b0(undefined *param_1)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  ulong *unaff_x20;
  __int64 _Var5;
  ulong uVar6;
  ulong uVar7;
  
  if ((ulong)param_1 >> 0x3e == 0) {
    _Var5 = *(long *)(((ulong)param_1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    _Var5 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  puVar4 = (undefined *)*unaff_x20;
  if ((ulong)puVar4 >> 0x3e == 0) {
    lVar3 = *(long *)(((ulong)puVar4 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar4 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < puVar4) {
      _Var1.unknown = puVar4;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (!SCARRY8(lVar3,_Var5)) {
    FUN_100542800(lVar3 + _Var5,1);
    uVar6 = *unaff_x20;
    uVar7 = uVar6 & 0xffffffffffffff8;
    FUN_10054299c(uVar7 + *(long *)(uVar7 + 0x10) * 8 + 0x20,
                  (*(ulong *)(uVar7 + 0x18) >> 1) - *(long *)(uVar7 + 0x10));
    _swift_bridgeObjectRelease();
    if ((long)param_1 < _Var5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100542998);
      (*pcVar2)();
    }
    if (0 < (long)param_1) {
      if (SCARRY8(*(long *)(uVar7 + 0x10),(long)param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10054299c);
        (*pcVar2)();
      }
      *(undefined **)(uVar7 + 0x10) = param_1 + *(long *)(uVar7 + 0x10);
    }
    *unaff_x20 = uVar6;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100542994);
  (*pcVar2)();
}



/* Address: 0x10054299c | FUN_10054299c */

undefined * FUN_10054299c(undefined8 *param_1,long param_2,undefined *param_3)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  undefined8 uVar3;
  __int64 _Var4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  
  if ((ulong)param_3 >> 0x3e == 0) {
    lVar7 = *(long *)((undefined *)((ulong)param_3 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)param_3 & 0xffffffffffffff8);
    if (((ulong)param_3 & 0x8000000000000000) != 0) {
      _Var1.unknown = param_3;
    }
    lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar7 != 0) {
    if (param_1 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100542af4);
      (*pcVar2)();
    }
    if ((ulong)param_3 >> 0x3e == 0) {
      lVar7 = *(long *)(((ulong)param_3 & 0xffffffffffffff8) + 0x10);
      if (param_2 < lVar7) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100542ae8);
        (*pcVar2)();
      }
      uVar3 = 0;
      FUN_1004e7cac(0);
      _swift_arrayInitWithCopy(param_1,((ulong)param_3 & 0xffffffffffffff8) + 0x20,lVar7,uVar3);
    }
    else {
      _Var1.unknown = (undefined *)((ulong)param_3 & 0xffffffffffffff8);
      if (((ulong)param_3 & 0x8000000000000000) != 0) {
        _Var1.unknown = param_3;
      }
      _Var4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
      if (param_2 < _Var4) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100542aec);
        (*pcVar2)();
      }
      if (lVar7 < 1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100542af0);
        (*pcVar2)();
      }
      if (((ulong)param_3 & 0xc000000000000001) == 0) {
        uVar3 = *(undefined8 *)(param_3 + 0x20);
        *param_1 = uVar3;
        lVar7 = lVar7 + -1;
        if (lVar7 != 0) {
          uVar6 = uVar3;
          puVar9 = (undefined8 *)(param_3 + 0x28);
          do {
            param_1 = param_1 + 1;
            uVar3 = *puVar9;
            *param_1 = uVar3;
            _swift_retain(uVar6);
            lVar7 = lVar7 + -1;
            uVar6 = uVar3;
            puVar9 = puVar9 + 1;
          } while (lVar7 != 0);
        }
        _swift_retain(uVar3);
      }
      else {
        lVar8 = 0;
        do {
          lVar5 = lVar8;
          FUN_10059b2c8(lVar8,param_3);
          param_1[lVar8] = lVar5;
          lVar8 = lVar8 + 1;
        } while (lVar7 != lVar8);
      }
    }
  }
  return param_3;
}



/* Address: 0x100542af4 | FUN_100542af4 */

void FUN_100542af4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[0x10];
  uVar4 = param_5[0x13];
  uVar3 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5[0x14];
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = param_5[0xc];
  uVar3 = param_5[0xf];
  uVar2 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  plVar1 = (long *)0x360;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542bc0;
  FUN_100532ddc(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100542bc0 | FUN_100542bc0 */

void FUN_100542bc0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
                    /* WARNING: Could not recover jumptable at 0x000100542bf8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100542bfc | FUN_100542bfc */

void FUN_100542bfc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[0x10];
  uVar4 = param_5[0x13];
  uVar3 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_5[0x14];
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar4 = param_5[0xc];
  uVar3 = param_5[0xf];
  uVar2 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar2;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar4 = param_5[4];
  uVar3 = param_5[7];
  uVar2 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar2;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xb8) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542bc0;
  FUN_100535a2c(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100542cc8 | FUN_100542cc8 */

void FUN_100542cc8(void)

{
  long *plVar1;
  undefined8 in_x3;
  undefined8 *in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 in_stack_00000000;
  
  uVar2 = *in_x4;
  uVar4 = in_x4[3];
  uVar3 = in_x4[2];
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4[4];
  plVar1 = (long *)0x150;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542d58;
  FUN_100545cb4(in_x3,unaff_x22 + 0x10,in_x5,in_x6,in_x7,in_stack_00000000);
  return;
}



/* Address: 0x100542d58 | FUN_100542d58 */

void FUN_100542d58(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x000100542d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100542d94 | FUN_100542d94 */

void FUN_100542d94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5[4];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542d58;
  FUN_100535dc4(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100542e40 | FUN_100542e40 */

void FUN_100542e40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_1;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0x1f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542ed4;
  FUN_1005461d0(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x100542ed4 | FUN_100542ed4 */

void FUN_100542ed4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x58));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x50);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100542f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100542f40 | FUN_100542f40 */

void FUN_100542f40(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542fec;
  FUN_100536098(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x100542fec | FUN_100542fec */

void FUN_100542fec(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100543024. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100543028 | FUN_100543028 */

void FUN_100543028(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005430c0;
  FUN_100546738(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x1005430c0 | FUN_1005430c0 */

void FUN_1005430c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x50));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x48);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    puVar1[2] = param_3;
    puVar1[3] = param_4;
  }
                    /* WARNING: Could not recover jumptable at 0x000100543128. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10054312c | FUN_10054312c */

void FUN_10054312c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005431e0;
  FUN_100536374(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005431e0 | FUN_1005431e0 */

void FUN_1005431e0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x000100543218. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10054321c | FUN_10054321c */

void FUN_10054321c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x1b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005432b4;
  FUN_100546cf0(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x1005432b4 | FUN_1005432b4 */

void FUN_1005432b4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x50));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x48);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x000100543308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10054330c | FUN_10054330c */

void FUN_10054330c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005431e0;
  FUN_100536704(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x1005433c0 | FUN_1005433c0 */

void FUN_1005433c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  plVar1 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005430c0;
  FUN_10054726c(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}


