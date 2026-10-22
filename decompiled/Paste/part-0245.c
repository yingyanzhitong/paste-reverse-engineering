/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002f7180 | FUN_1002f7180 */

long FUN_1002f7180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long unaff_x20;
  
  _swift_allocObject();
  if (DAT_100fbd0a0 != -1) {
    _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
  }
  uVar1 = DAT_101057918;
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  _swift_bridgeObjectRetain(uVar1);
  return unaff_x20;
}



/* Address: 0x1002f7274 | FUN_1002f7274 */

void FUN_1002f7274(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  undefined8 uVar1;
  long unaff_x20;
  
  if (DAT_100fbd0a0 != -1) {
    _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
  }
  uVar1 = DAT_101057918;
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = uVar1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined8 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined8 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x40) = param_7;
  *(undefined8 *)(unaff_x20 + 0x48) = param_8;
  *(undefined8 *)(unaff_x20 + 0x50) = param_9;
  *(undefined8 *)(unaff_x20 + 0x58) = param_10;
  *(undefined8 *)(unaff_x20 + 0x60) = param_11;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = param_1;
  _swift_bridgeObjectRetain(uVar1);
  return;
}



/* Address: 0x1002f7370 | FUN_1002f7370 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002f7370(ID param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  long unaff_x20;
  ulong uVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  undefined *local_90;
  undefined8 uStack_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *puStack_68;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_a8,1,0);
  uVar10 = *(ulong *)(unaff_x20 + 0x10);
  puVar2 = &DAT_100ec9038;
  _swift_allocObject(&DAT_100ec9038,0x18,7);
  *(undefined **)(puVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100ec9060;
  _swift_allocObject(&DAT_100ec9060,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0xe000000000000000;
  _swift_bridgeObjectRetain(uVar10);
  IVar4 = objc_stub::length(param_1);
  puVar5 = &DAT_100ec9088;
  _swift_allocObject(&DAT_100ec9088,0x28,7);
  *(ID *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  puVar6 = &DAT_100ec90b0;
  _swift_allocObject(&DAT_100ec90b0,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1002f80c8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  local_70 = FUN_1000386a0;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  uStack_88 = 0x42000000;
  local_80 = FUN_1002f800c;
  puStack_78 = &DAT_100ec90c8;
  puStack_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  puVar7 = puStack_68;
  _swift_retain(puVar3);
  _swift_retain(puVar2);
  _swift_retain(puVar6);
  _swift_release(puVar7);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(param_1,0,IVar4,0,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x89,0x24,0xb,1);
  _swift_release(puVar6);
  if (((ulong)puVar7 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f76fc);
    (*pcVar1)();
  }
  FUN_1002f8760(puVar3,puVar2);
  _swift_beginAccess(puVar2 + 0x10,auStack_c0,0,0);
  uVar12 = *(ulong *)(puVar2 + 0x10);
  _swift_bridgeObjectRetain_n(uVar12,2);
  _swift_release(puVar5);
  _swift_release(puVar2);
  _swift_release(puVar3);
  uVar8 = 0;
  FUN_1002da16c(0,uVar12);
  uVar9 = uVar8;
  FUN_1002de150();
  if ((uVar9 & 1) == 0) {
    uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = uVar8;
    _swift_bridgeObjectRetain(uVar8);
    _swift_bridgeObjectRelease(uVar11);
    if ((*(byte *)(unaff_x20 + 0x70) & 1) == 0) {
      FUN_1002dde30();
      _swift_bridgeObjectRelease();
      uVar9 = uVar10;
      FUN_1002dde30();
      _swift_bridgeObjectRelease(uVar10);
      _swift_bridgeObjectRelease(uVar9);
      FUN_1002f70a8();
      _swift_bridgeObjectRetain(uVar8);
      FUN_1002f5e18();
      _swift_release(uVar9);
      uVar10 = uVar8;
    }
    _swift_bridgeObjectRelease(uVar10);
    uVar10 = uVar12;
    FUN_1002de150(uVar12,uVar8);
    _swift_bridgeObjectRelease(uVar12);
    if ((uVar10 & 1) == 0) {
      _swift_bridgeObjectRelease(uVar12);
      uVar10 = uVar8;
      (**(code **)(unaff_x20 + 0x48))();
      IVar4 = objc_stub::length(uVar10);
      (**(code **)(unaff_x20 + 0x28))(uVar10,IVar4,0);
      (**(code **)(unaff_x20 + 0x18))(uVar8);
      _swift_bridgeObjectRelease(uVar8);
      uStack_88 = 0;
      local_90 = (undefined *)0x0;
      puStack_78 = (undefined *)0x0;
      local_80 = (code *)0x0;
      puStack_68 = (undefined *)0x0;
      local_70 = (code *)0x0;
      (**(code **)(unaff_x20 + 0x38))(&local_90);
      return 0;
    }
    _swift_bridgeObjectRelease(uVar8);
    (**(code **)(unaff_x20 + 0x18))(uVar12);
    _swift_bridgeObjectRelease(uVar12);
  }
  else {
    _swift_bridgeObjectRelease(uVar10);
    _swift_bridgeObjectRelease(uVar8);
    _swift_bridgeObjectRelease_n(uVar12,2);
  }
  return 1;
}



/* Address: 0x1002f76fc | FUN_1002f76fc */

void FUN_1002f76fc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f7720 | FUN_1002f7720 */

void FUN_1002f7720(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f7744 | FUN_1002f7744 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f7744(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined1 auStack_d8 [24];
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = 0;
  FUN_1002da16c(0,param_1);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_d8,1,0);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(uVar5);
  uVar2 = uVar1;
  FUN_1002de150(uVar1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  if ((uVar2 & 1) == 0) {
    uVar5 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ulong *)(unaff_x20 + 0x10) = uVar1;
    _swift_bridgeObjectRetain(uVar1);
    _swift_bridgeObjectRelease(uVar5);
    uVar2 = uVar1;
    (**(code **)(unaff_x20 + 0x48))();
    IVar3 = objc_stub::length(uVar2);
    IVar4 = IVar3;
    if ((param_2 & 1) == 0) {
      uVar5 = 0;
      uVar7 = 0;
      uVar8 = 0;
      uVar9 = 0;
      uVar10 = 0;
      uVar6 = 0;
    }
    else {
      FUN_1002f78f8(&local_c0,IVar3,uVar1);
      uVar5 = local_c0;
      uVar6 = uStack_98;
      uVar7 = uStack_b8;
      uVar8 = local_b0;
      uVar9 = uStack_a8;
      uVar10 = local_a0;
    }
    local_90 = uVar5;
    uStack_88 = uVar7;
    local_80 = uVar8;
    uStack_78 = uVar9;
    local_70 = uVar10;
    uStack_68 = uVar6;
    if ((*(byte *)(unaff_x20 + 0x70) & 1) == 0) {
      FUN_1002f70a8();
      _swift_bridgeObjectRetain(uVar1);
      FUN_1002f5e18();
      _swift_release(IVar4);
      _swift_bridgeObjectRelease(uVar1);
    }
    (**(code **)(unaff_x20 + 0x28))(uVar2,IVar3,0);
    (**(code **)(unaff_x20 + 0x18))(uVar1);
    _swift_bridgeObjectRelease(uVar1);
    (**(code **)(unaff_x20 + 0x38))(&local_90);
    FUN_1002f8100(uVar5,uVar7,uVar8,uVar9,uVar10,uVar6);
  }
  else {
    _swift_bridgeObjectRelease(uVar1);
  }
  return;
}



/* Address: 0x1002f78f8 | FUN_1002f78f8 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f78f8(long *param_1,long param_2,long param_3,char *param_4,undefined1 *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  String SVar8;
  bool bVar9;
  NSString *self;
  ID IVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  undefined8 unaff_x20;
  undefined *puVar14;
  code *pcVar15;
  long lVar16;
  byte *pbVar17;
  undefined8 uVar18;
  char *pcVar19;
  ulong uVar20;
  undefined1 *puVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  
  lVar12 = *(long *)(param_3 + 0x10);
  if (lVar12 == 0) {
    param_3 = 0;
    lVar13 = 0;
    uVar20 = 0;
    pcVar19 = (char *)0x0;
    pcVar15 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
  else {
    lVar13 = 0;
    lVar16 = 0;
    pbVar17 = (byte *)(param_3 + 0x38);
    do {
      uVar20 = *(ulong *)(pbVar17 + -0x18);
      pcVar19 = ((String *)(pbVar17 + -0x10))->str;
      uVar18 = *(undefined8 *)(pbVar17 + -8);
      SVar8 = *(String *)(pbVar17 + -0x10);
      puVar21 = (undefined1 *)(ulong)*pbVar17;
      if (*pbVar17 == 1) {
        FUN_100008310(uVar20,pcVar19,uVar18,1);
        _swift_bridgeObjectRetain(pcVar19);
        self = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
        IVar10 = objc_stub::length((ID)self);
        puVar21 = &DAT_00000001;
        FUN_100008320(uVar20,pcVar19,uVar18);
        puVar11 = &DAT_100ec9188;
        _swift_allocObject(&DAT_100ec9188,0x18,7);
        _swift_weakInit(puVar11 + 0x10,unaff_x20);
        puVar14 = &DAT_100ec91d8;
        param_4 = (char *)0x7;
        _swift_allocObject(&DAT_100ec91d8,0x28);
        *(undefined **)(puVar14 + 0x10) = puVar11;
        *(long *)(puVar14 + 0x18) = lVar16;
        *(ID *)(puVar14 + 0x20) = IVar10;
        pcVar15 = thunk_FUN_1002f8418;
      }
      else {
        uVar1 = (uint)uVar20 & 0xff;
        pcVar4 = (char *)0x656369766564;
        if (uVar1 != 4) {
          pcVar4 = (char *)0x6472616f626e6970;
        }
        puVar2 = &DAT_e600000000000000;
        if (uVar1 != 4) {
          puVar2 = &DAT_e800000000000000;
        }
        pcVar3 = (char *)0x65746164;
        if (uVar1 != 3) {
          pcVar3 = pcVar4;
        }
        puVar7 = &DAT_e400000000000000;
        if (uVar1 != 3) {
          puVar7 = puVar2;
        }
        pcVar4 = &DAT_65707974;
        if (uVar1 != 1) {
          pcVar4 = (char *)0x656c746974;
        }
        puVar2 = &DAT_e400000000000000;
        if (uVar1 != 1) {
          puVar2 = &DAT_e500000000000000;
        }
        bVar9 = (uVar20 & 0xff) != 0;
        pcVar5 = (char *)0x707061;
        if (bVar9) {
          pcVar5 = pcVar4;
        }
        puVar6 = (undefined1 *)0xe300000000000000;
        if (bVar9) {
          puVar6 = puVar2;
        }
        if (uVar1 < 3) {
          puVar7 = puVar6;
          pcVar3 = pcVar5;
        }
        _swift_bridgeObjectRetain(uVar18);
        SVar22.bridgeObject = puVar7;
        SVar22.str = pcVar3;
        SVar24.bridgeObject = param_5;
        SVar24.str = param_4;
        Swift::String::append(SVar22,SVar24);
        _swift_bridgeObjectRelease(puVar7);
        SVar23.bridgeObject = (void *)0xe100000000000000;
        SVar23.str = &DAT_0000003a;
        SVar25.bridgeObject = param_5;
        SVar25.str = param_4;
        Swift::String::append(SVar23,SVar25);
        SVar26.bridgeObject = param_5;
        SVar26.str = param_4;
        Swift::String::append(SVar8,SVar26);
        FUN_100008320(uVar20,pcVar19,uVar18);
        uVar20 = 0;
        pcVar19 = (char *)0xe000000000000000;
        puVar11 = &DAT_100ec9188;
        _swift_allocObject(&DAT_100ec9188,0x18,7);
        _swift_weakInit(puVar11 + 0x10,unaff_x20);
        puVar14 = &DAT_100ec91b0;
        param_4 = (char *)0x7;
        _swift_allocObject(&DAT_100ec91b0,0x28);
        *(undefined **)(puVar14 + 0x10) = puVar11;
        *(long *)(puVar14 + 0x18) = lVar16;
        *(undefined8 *)(puVar14 + 0x20) = 1;
        IVar10 = 1;
        pcVar15 = FUN_1002f8418;
      }
      if (lVar16 <= param_2) {
        if (SBORROW8(param_2,lVar16)) {
                    /* WARNING: Does not return */
          pcVar15 = (code *)SoftwareBreakpoint(1,0x1002f7c08);
          (*pcVar15)();
        }
        if ((long)IVar10 <= param_2 - lVar16) goto LAB_1002f7b5c;
LAB_1002f7bac:
        _swift_bridgeObjectRetain();
        goto LAB_1002f7bd4;
      }
LAB_1002f7b5c:
      bVar9 = SCARRY8(lVar16,IVar10);
      lVar16 = lVar16 + IVar10;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x1002f7c04);
        (*pcVar15)();
      }
      if (lVar16 == param_2) goto LAB_1002f7bac;
      lVar13 = lVar13 + 1;
      pbVar17 = pbVar17 + 0x20;
      _swift_bridgeObjectRelease(pcVar19);
      _swift_release(puVar14);
      param_5 = puVar21;
    } while (lVar12 != lVar13);
    param_3 = 0;
    lVar13 = 0;
    uVar20 = 0;
    pcVar19 = (char *)0x0;
    pcVar15 = (code *)0x0;
    puVar14 = (undefined *)0x0;
  }
LAB_1002f7bd4:
  *param_1 = param_3;
  param_1[1] = lVar13;
  param_1[2] = uVar20;
  param_1[3] = (long)pcVar19;
  param_1[4] = (long)pcVar15;
  param_1[5] = (long)puVar14;
  return;
}



/* Address: 0x1002f7c08 | FUN_1002f7c08 */

void FUN_1002f7c08(void)

{
  FUN_1002f7ce4(FUN_1002f61f0);
  return;
}



/* Address: 0x1002f7c14 | FUN_1002f7c14 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002f7c14(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *(undefined1 *)(unaff_x20 + 0x70) = 1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_88,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  _swift_bridgeObjectRetain(param_1);
  _swift_bridgeObjectRelease(uVar1);
  (**(code **)(unaff_x20 + 0x48))(param_1);
  (**(code **)(unaff_x20 + 0x28))();
  (**(code **)(unaff_x20 + 0x18))(param_1);
  uStack_68 = 0;
  local_70 = 0;
  uStack_58 = 0;
  uStack_60 = 0;
  uStack_48 = 0;
  local_50 = 0;
  (**(code **)(unaff_x20 + 0x38))(&local_70);
  *(undefined1 *)(unaff_x20 + 0x70) = 0;
  return 0;
}



/* Address: 0x1002f7cd8 | FUN_1002f7cd8 */

void FUN_1002f7cd8(void)

{
  FUN_1002f7ce4(FUN_1002f63b8);
  return;
}



/* Address: 0x1002f7ce4 | FUN_1002f7ce4 */

bool FUN_1002f7ce4(code *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  code *pcVar2;
  
  pcVar1 = param_1;
  FUN_1002f70a8();
  pcVar2 = pcVar1;
  (*param_1)();
  _swift_release(pcVar1);
  if (pcVar2 != (code *)0x0) {
    FUN_1002f7c14(pcVar2,param_2,param_3);
    _swift_bridgeObjectRelease(pcVar2);
  }
  return pcVar2 != (code *)0x0;
}



/* Address: 0x1002f7d60 | FUN_1002f7d60 */

void FUN_1002f7d60(ulong param_1)

{
  undefined8 uVar1;
  
  if (DAT_100fbd0a0 != -1) {
    _swift_once(&DAT_100fbd0a0,FUN_1002ddf4c);
  }
  uVar1 = DAT_101057918;
  FUN_1002f7744(DAT_101057918,0);
  if ((param_1 & 1) != 0) {
    return;
  }
  FUN_1002f70a8();
  FUN_1002f6550();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1002f7dd8 | FUN_1002f7dd8 */

void FUN_1002f7dd8(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_78 [24];
  undefined1 auStack_60 [48];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(uVar1);
  FUN_1002f78f8(auStack_60,param_1,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  (**(code **)(unaff_x20 + 0x38))(auStack_60);
  FUN_1002f8138(auStack_60);
  return;
}



/* Address: 0x1002f7e50 | FUN_1002f7e50 */

void FUN_1002f7e50(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    local_68 = 0;
    uStack_60 = 0;
    local_48 = 1;
    local_58 = 0;
    uStack_50 = 0;
  }
  else {
    pcVar1 = *(code **)(param_2 + 0x58);
    uVar2 = *(undefined8 *)(param_2 + 0x60);
    _swift_retain(uVar2);
    _swift_release(param_2);
    (*pcVar1)(&local_68,param_3,param_4);
    _swift_release(uVar2);
  }
  param_1[1] = uStack_60;
  *param_1 = local_68;
  param_1[3] = uStack_50;
  param_1[2] = local_58;
  *(undefined1 *)(param_1 + 4) = local_48;
  return;
}



/* Address: 0x1002f7ef8 | FUN_1002f7ef8 */

void FUN_1002f7ef8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  return;
}



/* Address: 0x1002f7f44 | FUN_1002f7f44 */

void FUN_1002f7f44(void)

{
  FUN_1002f7ef8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1002f7f64 | FUN_1002f7f64 */

undefined8 FUN_1002f7f64(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 8);
}



/* Address: 0x1002f7f6c | FUN_1002f7f6c */

undefined1  [16] FUN_1002f7f6c(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 0x20);
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x28));
  return auVar1;
}



/* Address: 0x1002f7f98 | FUN_1002f7f98 */

undefined8 FUN_1002f7f98(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  long *unaff_x20;
  
  uVar4 = unaff_x20[1];
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f8008);
    (*pcVar3)();
  }
  if (uVar4 < *(ulong *)(*unaff_x20 + 0x10)) {
    lVar1 = *unaff_x20 + uVar4 * 0x20;
    uVar2 = *(undefined8 *)(lVar1 + 0x20);
    FUN_100008310(uVar2,*(undefined8 *)(lVar1 + 0x28),*(undefined8 *)(lVar1 + 0x30),
                  *(undefined1 *)(lVar1 + 0x38));
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f800c);
  (*pcVar3)();
}



/* Address: 0x1002f800c | FUN_1002f800c */

void FUN_1002f800c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  Dictionary<undefined,undefined> DVar2;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  FUN_1002d6a18(0);
  FUN_1002f8424();
  DVar2 = (extension_Foundation)::Swift::Dictionary::__unconditionallyBridgeFromObjectiveC();
  (*pcVar1)(DVar2.unknown,param_3,param_4,param_5);
  _swift_bridgeObjectRelease(DVar2.unknown);
  return;
}



/* Address: 0x1002f8094 | FUN_1002f8094 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f8094(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f80c8 | FUN_1002f80c8 */

void FUN_1002f80c8(void)

{
  FUN_1002f89f4();
  return;
}



/* Address: 0x1002f80d4 | FUN_1002f80d4 */

void FUN_1002f80d4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f80e4 | FUN_1002f80e4 */

void FUN_1002f80e4(long param_1,long param_2)

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



/* Address: 0x1002f80f8 | FUN_1002f80f8 */

void FUN_1002f80f8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002f8100 | FUN_1002f8100 */

void FUN_1002f8100(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_1 != 0) {
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(param_4);
    _swift_release(param_6);
    return;
  }
  return;
}



/* Address: 0x1002f8138 | FUN_1002f8138 */

undefined8 FUN_1002f8138(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbdaa0;
  FUN_1000037f0(&DAT_100fbdaa0,&DAT_100c3ee10);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002f8180 | FUN_1002f8180 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002f8180(void)

{
  return ZEXT816(0x100fbdae8);
}



/* Address: 0x1002f81a0 | FUN_1002f81a0 */

void FUN_1002f81a0(undefined8 *param_1)

{
  _swift_bridgeObjectRelease(*param_1);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_release(param_1[5]);
  return;
}



/* Address: 0x1002f81d0 | FUN_1002f81d0 */

undefined8 * FUN_1002f81d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  uVar1 = param_2[5];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1002f8234 | FUN_1002f8234 */

undefined8 * FUN_1002f8234(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1002f82bc | FUN_1002f82bc */

void FUN_1002f82bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002f82d0 | FUN_1002f82d0 */

undefined8 * FUN_1002f82d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar1;
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_2[5];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1002f832c | FUN_1002f832c */

int FUN_1002f832c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[6] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1002f8374 | FUN_1002f8374 */

void FUN_1002f8374(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1002f83c0 | FUN_1002f83c0 */

undefined1  [16] FUN_1002f83c0(void)

{
  return ZEXT816(0x100ec9158);
}



/* Address: 0x1002f83d0 | FUN_1002f83d0 */

void FUN_1002f83d0(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f83f4 | FUN_1002f83f4 */

void FUN_1002f83f4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f8418 | FUN_1002f8418 */

void FUN_1002f8418(void)

{
  long unaff_x20;
  
  FUN_1002f7e50(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1002f8424 | FUN_1002f8424 */

void FUN_1002f8424(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fbcf40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_1002d6a18(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3df80;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3df80,uVar1);
  DAT_100fbcf40 = pTVar2;
  return;
}



/* Address: 0x1002f8468 | thunk_FUN_1002f83f4 */

void thunk_FUN_1002f83f4(void)

{
  FUN_1002f83f4();
  return;
}



/* Address: 0x1002f846c | thunk_FUN_1002f8418 */

void thunk_FUN_1002f8418(void)

{
  FUN_1002f8418();
  return;
}



/* Address: 0x1002f8470 | FUN_1002f8470 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_1002f8470(ID param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *aBlock;
  undefined *puVar7;
  undefined8 uVar8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  puVar2 = &DAT_100ec9208;
  _swift_allocObject(&DAT_100ec9208,0x18,7);
  *(undefined **)(puVar2 + 0x10) = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar3 = &DAT_100ec9230;
  _swift_allocObject(&DAT_100ec9230,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0xe000000000000000;
  IVar4 = objc_stub::length(param_1);
  puVar5 = &DAT_100ec9258;
  _swift_allocObject(&DAT_100ec9258,0x28,7);
  *(ID *)(puVar5 + 0x10) = param_1;
  *(undefined **)(puVar5 + 0x18) = puVar3;
  *(undefined **)(puVar5 + 0x20) = puVar2;
  puVar6 = &DAT_100ec9280;
  _swift_allocObject(&DAT_100ec9280,0x20,7);
  *(code **)(puVar6 + 0x10) = FUN_1002f80c8;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  local_70 = FUN_100215f00;
  local_90 = PTR___NSConcreteStackBlock_100ea82a0;
  local_88 = 0x42000000;
  local_80 = FUN_1002f800c;
  puStack_78 = &DAT_100ec9298;
  local_68 = puVar6;
  aBlock = __Block_copy(&local_90);
  puVar7 = local_68;
  _swift_retain(puVar3);
  _swift_retain(puVar2);
  _swift_retain(puVar6);
  _swift_release(puVar7);
  objc_stub::enumerateAttributesInRange_options_usingBlock_(param_1,0,IVar4,0,aBlock);
  __Block_release(aBlock);
  puVar7 = puVar6;
  _swift_isEscapingClosureAtFileLocation(puVar6,"",0x89,0x24,0xb,1);
  _swift_release(puVar6);
  if (((ulong)puVar7 & 1) == 0) {
    FUN_1002f8760(puVar3,puVar2);
    _swift_beginAccess(puVar2 + 0x10,&local_90,0,0);
    uVar8 = *(undefined8 *)(puVar2 + 0x10);
    _swift_bridgeObjectRetain(uVar8);
    _swift_release(puVar5);
    _swift_release(puVar2);
    _swift_release(puVar3);
    return uVar8;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f8664);
  (*pcVar1)();
}



/* Address: 0x1002f8664 | FUN_1002f8664 */

void FUN_1002f8664(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f8688 | FUN_1002f8688 */

void FUN_1002f8688(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f86ac | FUN_1002f86ac */

void FUN_1002f86ac(void)

{
  DAT_101057958 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x1002f86e0 | FUN_1002f86e0 */

undefined8 * FUN_1002f86e0(void)

{
  if (DAT_100fbdb88 != -1) {
    _swift_once(&DAT_100fbdb88,FUN_1002f86ac);
  }
  return &DAT_101057958;
}



/* Address: 0x1002f8720 | FUN_1002f8720 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1002f8720(void)

{
  if (DAT_100fbdb88 != -1) {
    _swift_once(&DAT_100fbdb88,FUN_1002f86ac);
  }
  return DAT_101057958;
}



/* Address: 0x1002f8760 | FUN_1002f8760 */

void FUN_1002f8760(long param_1,long param_2)

{
  ulong uVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  long lVar5;
  Index after;
  ulong uVar6;
  Index IVar7;
  ulong *puVar8;
  void *pvVar9;
  void *pvVar10;
  Index IVar11;
  ulong uVar12;
  ulong uVar13;
  String SVar14;
  Character CVar15;
  String SVar16;
  String SVar17;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar5 = param_1 + 0x10;
  _swift_beginAccess(lVar5,auStack_78,0,0);
  local_b0 = *(ulong *)(param_1 + 0x10);
  uStack_a8 = *(ulong *)(param_1 + 0x18);
  uVar1 = local_b0 & 0xffffffffffff;
  if ((uStack_a8 & 0x2000000000000000) != 0) {
    uVar1 = uStack_a8 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    local_88 = 0xbcbfef;
    uStack_80 = 0xa300000000000000;
    local_98 = 0x20;
    uStack_90 = 0xe100000000000000;
    FUN_1002da77c();
    SVar14 = (extension_Foundation)::Swift::StringProtocol::_replacingOccurrences
                       (&local_88,&local_98,0,0,0,1,PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208,
                        PTR___type_metadata_for_Swift_String_100eac208,lVar5,lVar5,lVar5);
    pvVar9 = SVar14.bridgeObject;
    uVar1 = (ulong)SVar14.str & 0xffffffffffff;
    if (((ulong)pvVar9 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)pvVar9 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      uVar13 = 0;
      IVar11.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)(undefined *)0xf;
      do {
        CVar15 = Swift::String::get_subscript(IVar11,SVar14);
        bVar3 = Swift::Character::get_isWhitespace(CVar15);
        _swift_bridgeObjectRelease(CVar15.bridgeObject);
        after.cmsgPointer.unknown = IVar11.cmsgPointer.unknown;
        do {
          after = Swift::String::index(after,SVar14);
          if (uVar1 << 2 <= (ulong)after.cmsgPointer.unknown >> 0xe) break;
          CVar15 = Swift::String::get_subscript(after,SVar14);
          bVar4 = Swift::Character::get_isWhitespace(CVar15);
          _swift_bridgeObjectRelease(CVar15.bridgeObject);
        } while (bVar3 == bVar4);
        if ((ulong)after.cmsgPointer.unknown >> 0xe < uVar13) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1002f89f4);
          (*pcVar2)();
        }
        SVar17.bridgeObject = SVar14.str;
        SVar17.str = (char *)after.cmsgPointer.unknown;
        IVar7 = after;
        pvVar10 = pvVar9;
        SVar16.str = Swift::String::get_subscript((Range<Index>)IVar11.cmsgPointer.unknown,SVar17);
        SVar16.bridgeObject = (void *)IVar7.cmsgPointer.unknown;
        SVar16 = Swift::String::__fromSubstring(SVar16);
        _swift_bridgeObjectRelease(pvVar10);
        _swift_beginAccess(param_2 + 0x10,&local_b0,0x21,0);
        uVar12 = *(ulong *)(param_2 + 0x10);
        uVar13 = uVar12;
        _swift_isUniquelyReferenced_nonNull_native();
        *(ulong *)(param_2 + 0x10) = uVar12;
        uVar6 = uVar12;
        if ((uVar13 & 1) == 0) {
          uVar6 = 0;
          FUN_1002dacb8(0,*(long *)(uVar12 + 0x10) + 1,1,uVar12);
          *(ulong *)(param_2 + 0x10) = uVar6;
        }
        uVar13 = *(ulong *)(uVar6 + 0x10);
        uVar12 = uVar6;
        if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar13) {
          uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
          FUN_1002dacb8(uVar12,uVar13 + 1,1,uVar6);
        }
        *(ulong *)(uVar12 + 0x10) = uVar13 + 1;
        lVar5 = uVar12 + uVar13 * 0x20;
        *(String *)(lVar5 + 0x20) = SVar16;
        *(undefined8 *)(lVar5 + 0x30) = 0;
        *(undefined1 *)(lVar5 + 0x38) = 1;
        *(ulong *)(param_2 + 0x10) = uVar12;
        _swift_endAccess(&local_b0);
        uVar13 = (ulong)after.cmsgPointer.unknown >> 0xe;
        IVar11 = after;
      } while (uVar13 < uVar1 << 2);
    }
    _swift_bridgeObjectRelease(pvVar9);
    puVar8 = &local_b0;
    pvVar9 = (void *)0x21;
    _swift_beginAccess(param_1 + 0x10,puVar8,0x21,0);
    SVar14.bridgeObject = pvVar9;
    SVar14.str = (char *)puVar8;
    Swift::String::removeAll(true,SVar14);
    _swift_endAccess(&local_b0);
  }
  return;
}



/* Address: 0x1002f89f4 | FUN_1002f89f4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f89f4(undefined *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,undefined *param_6,undefined *param_7)

{
  code *pcVar1;
  bool bVar2;
  ID self;
  _StringGuts _Var3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  String *pSVar7;
  _StringGuts _Var8;
  char *pcVar9;
  void *pvVar10;
  long lVar11;
  ulong uVar12;
  String SVar13;
  Character CVar14;
  Character CVar15;
  String SVar16;
  String local_98;
  undefined8 uStack_88;
  String local_80;
  undefined8 local_70;
  ulong uStack_68;
  
  self = objc_stub::string(param_5);
  if (self == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002f8d98);
    (*pcVar1)();
  }
  objc_stub::substringWithRange_(self,param_2,param_3);
  SVar13 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  pSVar7 = SVar13.bridgeObject;
  _Var3.unknown = (undefined *)0x0;
  if (DAT_100fbdb88 == -1) {
    lVar11 = *(long *)(param_1 + 0x10);
    pcVar1 = (code *)pSVar7;
    lVar4 = DAT_101057958;
  }
  else {
    _Var3.unknown = (undefined *)&DAT_100fbdb88;
    pcVar1 = FUN_1002f86ac;
    _swift_once();
    lVar11 = *(long *)(param_1 + 0x10);
    lVar4 = DAT_101057958;
  }
  DAT_101057958 = lVar4;
  local_80 = SVar13;
  if (lVar11 != 0) {
    _swift_bridgeObjectRetain(param_1);
    FUN_1000712c0(lVar4);
    if (((ulong)pcVar1 & 1) == 0) {
      _swift_bridgeObjectRelease();
      _Var3.unknown = param_1;
    }
    else {
      FUN_10000cbfc(*(long *)(param_1 + 0x38) + lVar4 * 0x20,&local_80);
      _swift_bridgeObjectRelease(param_1);
      _Var3.unknown = (undefined *)&local_98;
      pcVar1 = (code *)&local_80;
      _swift_dynamicCast(_Var3.unknown,pcVar1,PTR___type_metadata_for_Any_100eae0c0 + 8,
                         &DAT_100ec8580,6);
      if (((ulong)_Var3.unknown & 1) != 0) {
        uStack_68 = (ulong)SVar13.str & 0xffffffffffff;
        if (((ulong)pSVar7 & 0x2000000000000000) != 0) {
          uStack_68 = (ulong)pSVar7 >> 0x38 & 0xf;
        }
        local_70 = 0;
        Swift::String::Iterator::_next((Iterator)_Var3.unknown);
        while (pcVar1 != (code *)0x0) {
          if (((_Var3.unknown == (undefined *)0xbcbfef) && (pcVar1 == (code *)0xa300000000000000))
             || (bVar2 = Swift::_stringCompareWithSmolCheck
                                   (_Var3,(_StringGuts)pcVar1,(_StringComparisonResult)0xef), bVar2)
             ) {
            _swift_bridgeObjectRelease(pcVar1);
            FUN_1002f8760(param_6,param_7);
            _Var8.unknown = (undefined *)&local_98;
            _swift_beginAccess(param_7 + 0x10,_Var8.unknown,0x21,0);
            uVar12 = *(ulong *)(param_7 + 0x10);
            _swift_bridgeObjectRetain(uStack_88);
            uVar5 = uVar12;
            _swift_isUniquelyReferenced_nonNull_native();
            *(ulong *)(param_7 + 0x10) = uVar12;
            uVar6 = uVar12;
            if ((uVar5 & 1) == 0) {
              _Var8.unknown = (undefined *)(*(long *)(uVar12 + 0x10) + 1);
              uVar6 = 0;
              FUN_1002dacb8(0,_Var8.unknown,1,uVar12);
              *(ulong *)(param_7 + 0x10) = uVar6;
            }
            uVar5 = *(ulong *)(uVar6 + 0x10);
            pSVar7 = (String *)(uVar5 + 1);
            uVar12 = uVar6;
            if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
              uVar12 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
              _Var8.unknown = (undefined *)pSVar7;
              FUN_1002dacb8(uVar12,pSVar7,1,uVar6);
            }
            *(String **)(uVar12 + 0x10) = pSVar7;
            lVar4 = uVar12 + uVar5 * 0x20;
            *(ulong *)(lVar4 + 0x20) = (ulong)(byte)local_98.str;
            *(void **)(lVar4 + 0x28) = local_98.bridgeObject;
            *(undefined8 *)(lVar4 + 0x30) = uStack_88;
            *(undefined1 *)(lVar4 + 0x38) = 0;
            *(ulong *)(param_7 + 0x10) = uVar12;
            pcVar1 = (code *)&local_98;
            _swift_endAccess();
          }
          else {
            pcVar9 = (char *)0x21;
            pvVar10 = (void *)0x0;
            _swift_beginAccess(param_6 + 0x10,&local_98);
            CVar14.bridgeObject = pcVar1;
            CVar14.str = _Var3.unknown;
            SVar13.bridgeObject = pvVar10;
            SVar13.str = pcVar9;
            _Var8.unknown = pcVar1;
            Swift::String::append(CVar14,SVar13);
            _swift_endAccess(&local_98);
            _swift_bridgeObjectRelease();
          }
          Swift::String::Iterator::_next((Iterator)pcVar1);
          _Var3.unknown = pcVar1;
          pcVar1 = (code *)_Var8.unknown;
        }
        pvVar10 = local_80.bridgeObject;
        _swift_bridgeObjectRelease(uStack_88);
        goto LAB_1002f8d3c;
      }
    }
  }
  uStack_68 = (ulong)SVar13.str & 0xffffffffffff;
  if (((ulong)pSVar7 & 0x2000000000000000) != 0) {
    uStack_68 = (ulong)pSVar7 >> 0x38 & 0xf;
  }
  local_70 = 0;
  Swift::String::Iterator::_next((Iterator)_Var3.unknown);
  while (pcVar1 != (code *)0x0) {
    if (((_Var3.unknown == (undefined *)0xbcbfef) && (pcVar1 == (code *)0xa300000000000000)) ||
       (bVar2 = Swift::_stringCompareWithSmolCheck
                          (_Var3,(_StringGuts)pcVar1,(_StringComparisonResult)0xef), bVar2)) {
      _swift_bridgeObjectRelease(pcVar1);
      pcVar1 = (code *)param_6;
      _Var8.unknown = param_7;
      FUN_1002f8760();
    }
    else {
      pcVar9 = (char *)0x21;
      pvVar10 = (void *)0x0;
      _swift_beginAccess(param_6 + 0x10,&local_98);
      CVar15.bridgeObject = pcVar1;
      CVar15.str = _Var3.unknown;
      SVar16.bridgeObject = pvVar10;
      SVar16.str = pcVar9;
      _Var8.unknown = pcVar1;
      Swift::String::append(CVar15,SVar16);
      _swift_endAccess(&local_98);
      _swift_bridgeObjectRelease();
    }
    Swift::String::Iterator::_next((Iterator)pcVar1);
    _Var3.unknown = pcVar1;
    pcVar1 = (code *)_Var8.unknown;
  }
  pvVar10 = local_80.bridgeObject;
LAB_1002f8d3c:
  _swift_bridgeObjectRelease(pvVar10);
  return;
}



/* Address: 0x1002f8d98 | FUN_1002f8d98 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

ID FUN_1002f8d98(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  ulong uVar6;
  code *pcVar7;
  undefined *puVar8;
  ID IVar9;
  ID IVar10;
  NSString *pNVar11;
  NSDictionary *pNVar12;
  ID IVar13;
  class_t *pcVar14;
  class_t *pcVar15;
  ulong uVar16;
  ulong uVar17;
  uint uVar18;
  ulong uVar19;
  ulong uVar20;
  ulong uVar21;
  ID unaff_x20;
  char *pcVar22;
  ulong uVar23;
  undefined8 uVar24;
  ulong local_b8;
  ulong local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined1 auStack_98 [32];
  objc_super local_78;
  
  puVar8 = &_OBJC_CLASS___NSMutableAttributedString;
  _objc_allocWithZone();
  IVar9 = objc_stub::init((ID)puVar8);
  uVar20 = *(ulong *)(param_1 + 0x10);
  if (uVar20 == 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    uVar23 = 0;
    pcVar22 = (char *)(param_1 + 0x38);
    do {
      if (*(ulong *)(param_1 + 0x10) <= uVar23) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9240);
        (*pcVar7)();
      }
      uVar3 = *(ulong *)(pcVar22 + -0x18);
      uVar4 = *(ulong *)(pcVar22 + -0x10);
      uVar24 = *(undefined8 *)(pcVar22 + -8);
      cVar5 = *pcVar22;
      if (cVar5 == '\x01') {
        uVar19 = uVar3 & 0xffffffffffff;
        if ((uVar4 & 0x2000000000000000) != 0) {
          uVar19 = uVar4 >> 0x38 & 0xf;
        }
        if (uVar19 != 0) {
          puVar8 = &_OBJC_CLASS___NSAttributedString;
          _objc_allocWithZone();
          _swift_bridgeObjectRetain(uVar4);
          pNVar11 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
          FUN_1002d6a18(0);
          FUN_1002f8424();
          pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
          IVar13 = objc_stub::initWithString_attributes_((ID)puVar8,pNVar11,pNVar12);
          objc_stub::appendAttributedString_(IVar9,IVar13);
          FUN_100008320(uVar3,uVar4,uVar24,1);
        }
      }
      else {
        puVar8 = &DAT_100ec92d0;
        _swift_allocObject(&DAT_100ec92d0,0x38,7);
        *(undefined8 *)(puVar8 + 0x10) = param_3;
        *(undefined8 *)(puVar8 + 0x18) = param_4;
        puVar8[0x20] = (char)uVar3;
        *(ulong *)(puVar8 + 0x28) = uVar4;
        *(undefined8 *)(puVar8 + 0x30) = uVar24;
        pcVar14 = (class_t *)0x0;
        FUN_1002f5ba8();
        pcVar15 = pcVar14;
        _objc_allocWithZone();
        puVar1 = (undefined8 *)
                 ((long)&pcVar15->isa + _TtC11PasteSearch20FilterTextAttachment::viewProvider);
        *puVar1 = FUN_1002f92e4;
        puVar1[1] = puVar8;
        FUN_100008310(uVar3,uVar4,uVar24,cVar5);
        FUN_100008310(uVar3,uVar4,uVar24,cVar5);
        FUN_100008310(uVar3,uVar4,uVar24,cVar5);
        local_78.receiver = (ID)pcVar15;
        local_78.super_class = pcVar14;
        _swift_retain(param_4);
        IVar13 = _objc_msgSendSuper2(&local_78,"initWithData:ofType:",0,0);
        lVar2 = DAT_100fbdb88;
        _swift_bridgeObjectRetain(param_2);
        if (lVar2 != -1) {
          _swift_once(&DAT_100fbdb88,FUN_1002f86ac);
        }
        uVar6 = DAT_101057958;
        local_b8 = CONCAT71(local_b8._1_7_,(char)uVar3);
        local_a0 = &DAT_100ec8580;
        uVar19 = 0;
        local_b0 = uVar4;
        uStack_a8 = uVar24;
        FUN_100011080(&local_b8);
        uVar16 = param_2;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar18 = (uint)uVar16;
        uVar17 = uVar6;
        local_b8 = param_2;
        FUN_1000712c0();
        uVar21 = (ulong)~(uint)uVar19 & 1;
        if (SCARRY8(*(long *)(param_2 + 0x10),uVar21)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9244);
          (*pcVar7)();
        }
        if (*(long *)(param_2 + 0x18) < (long)(*(long *)(param_2 + 0x10) + uVar21)) {
          FUN_1002f9d54();
          uVar17 = uVar6;
          FUN_1000712c0();
          if (((uint)uVar19 & 1) != (uVar18 & 1)) {
            FUN_1002d6a18(0);
            Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9258);
            (*pcVar7)();
          }
joined_r0x0001002f91bc:
          if ((uVar19 & 1) != 0) goto LAB_1002f8df8;
LAB_1002f9148:
          uVar19 = local_b8;
          lVar2 = local_b8 + (uVar17 >> 6) * 8;
          *(ulong *)(lVar2 + 0x40) = *(ulong *)(lVar2 + 0x40) | 1L << (uVar17 & 0x3f);
          *(ulong *)(*(long *)(local_b8 + 0x30) + uVar17 * 8) = uVar6;
          FUN_100011080(auStack_98,*(long *)(local_b8 + 0x38) + uVar17 * 0x20);
          if (SCARRY8(*(long *)(uVar19 + 0x10),1)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1002f9248);
            (*pcVar7)();
          }
          *(long *)(uVar19 + 0x10) = *(long *)(uVar19 + 0x10) + 1;
        }
        else {
          if ((uVar16 & 1) == 0) {
            FUN_1002f9764();
            goto joined_r0x0001002f91bc;
          }
          if ((uVar19 & 1) == 0) goto LAB_1002f9148;
LAB_1002f8df8:
          uVar19 = local_b8;
          lVar2 = *(long *)(local_b8 + 0x38) + uVar17 * 0x20;
          FUN_100004594(lVar2);
          FUN_100011080(auStack_98,lVar2);
        }
        IVar10 = 0;
        FUN_1002f9408();
        _swift_getObjCClassFromMetadata();
        IVar13 = objc_stub::FUN_100bfe240(IVar10,IVar13);
        IVar10 = objc_stub::length(IVar13);
        FUN_1002d6a18(0);
        FUN_1002f8424();
        pNVar12 = (extension_Foundation)::Swift::Dictionary::_bridgeToObjectiveC();
        objc_stub::addAttributes_range_(IVar13,pNVar12,0,IVar10);
        objc_stub::appendAttributedString_(IVar9,IVar13);
        FUN_100008320(uVar3,uVar4,uVar24,cVar5);
        _swift_bridgeObjectRelease(uVar19);
      }
      uVar23 = uVar23 + 1;
      pcVar22 = pcVar22 + 0x20;
    } while (uVar20 != uVar23);
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_1);
  }
  _swift_getObjCClassFromMetadata();
  _objc_allocWithZone();
  IVar9 = objc_stub::initWithAttributedString_(unaff_x20,IVar9);
  _swift_release(param_4);
  return IVar9;
}



/* Address: 0x1002f9258 | FUN_1002f9258 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f9258(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f928c | FUN_1002f928c */

void FUN_1002f928c(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f929c | FUN_1002f929c */

void FUN_1002f929c(long param_1,long param_2)

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



/* Address: 0x1002f92b0 | FUN_1002f92b0 */

void FUN_1002f92b0(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1002f92b8 | FUN_1002f92b8 */

void FUN_1002f92b8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f92e4 | FUN_1002f92e4 */

void FUN_1002f92e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1002f9310 | FUN_1002f9310 */

void FUN_1002f9310(ulong param_1)

{
  uint uVar1;
  undefined1 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  bool bVar7;
  Hasher HVar8;
  __int64 _Var9;
  long unaff_x20;
  String SVar10;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(*(__int64 *)(unaff_x20 + 0x28));
  uVar1 = (uint)param_1 & 0xff;
  pcVar4 = (char *)0x656369766564;
  if (uVar1 != 4) {
    pcVar4 = (char *)0x6472616f626e6970;
  }
  puVar2 = &DAT_e600000000000000;
  if (uVar1 != 4) {
    puVar2 = &DAT_e800000000000000;
  }
  pcVar3 = (char *)0x65746164;
  if (uVar1 != 3) {
    pcVar3 = pcVar4;
  }
  HVar8.unknown = &DAT_e400000000000000;
  if (uVar1 != 3) {
    HVar8.unknown = puVar2;
  }
  pcVar4 = &DAT_65707974;
  if (uVar1 != 1) {
    pcVar4 = (char *)0x656c746974;
  }
  puVar2 = &DAT_e400000000000000;
  if (uVar1 != 1) {
    puVar2 = &DAT_e500000000000000;
  }
  bVar7 = (param_1 & 0xff) != 0;
  pcVar5 = (char *)0x707061;
  if (bVar7) {
    pcVar5 = pcVar4;
  }
  puVar6 = (undefined1 *)0xe300000000000000;
  if (bVar7) {
    puVar6 = puVar2;
  }
  if (uVar1 < 3) {
    HVar8.unknown = puVar6;
    pcVar3 = pcVar5;
  }
  SVar10.bridgeObject = HVar8.unknown;
  SVar10.str = pcVar3;
  Swift::String::hash((Hasher)auStack_78,SVar10);
  _swift_bridgeObjectRelease();
  _Var9 = Swift::Hasher::_finalize(HVar8);
  FUN_100071664(param_1,_Var9);
  return;
}



/* Address: 0x1002f9408 | FUN_1002f9408 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1002f9408(void)

{
  undefined *puVar1;
  
  if (DAT_100fbdb90 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSMutableAttributedString;
  _swift_getObjCClassMetadata();
  DAT_100fbdb90 = puVar1;
  return;
}



/* Address: 0x1002f944c | FUN_1002f944c */

void FUN_1002f944c(void)

{
  FUN_1002f9474(&DAT_100fbd198,&DAT_100c3e4d0);
  return;
}



/* Address: 0x1002f9460 | FUN_1002f9460 */

void FUN_1002f9460(void)

{
  FUN_1002f9474(&DAT_100fbd190,&DAT_100c3e4c8);
  return;
}



/* Address: 0x1002f9474 | FUN_1002f9474 */

void FUN_1002f9474(_DictionaryStorage *param_1)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  __RawDictionaryStorage *p_Var4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar9;
  
  FUN_1000037f0();
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(param_1,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar6 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar6 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar6 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar7 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar6 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar6 = ~(-1L << (uVar7 & 0x3f));
    }
    uVar6 = uVar6 & *(ulong *)(original + 0x40);
    if (uVar6 == 0) goto LAB_1002f9540;
    do {
      uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
      uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
      uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
      uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
      uVar6 = uVar6 - 1 & uVar6;
      while( true ) {
        uVar8 = LZCOUNT(uVar8) | lVar9 << 6;
        uVar5 = *(undefined8 *)(*(long *)(original + 0x38) + uVar8 * 8);
        *(undefined1 *)(*(long *)(p_Var4 + 0x30) + uVar8) =
             *(undefined1 *)(*(long *)(original + 0x30) + uVar8);
        *(undefined8 *)(*(long *)(p_Var4 + 0x38) + uVar8 * 8) = uVar5;
        _swift_bridgeObjectRetain();
        if (uVar6 != 0) break;
LAB_1002f9540:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f95c0);
            (*pcVar3)();
          }
          if ((long)(uVar7 + 0x3f >> 6) <= lVar2) goto LAB_1002f9598;
          uVar6 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar6 == 0);
        uVar8 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar8 = uVar8 >> 0x20 | uVar8 << 0x20;
        uVar6 = uVar6 - 1 & uVar6;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1002f9598:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}



/* Address: 0x1002f95c0 | FUN_1002f95c0 */

void FUN_1002f95c0(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fbd180;
  FUN_1000037f0(&DAT_100fbd180,&DAT_100c3e4b8);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_1002f973c:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_1002f96a8;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x20;
      FUN_10000cbfc(*(long *)(original + 0x38) + lVar10,auStack_80);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      FUN_100011080(auStack_80,*(long *)(p_Var6 + 0x38) + lVar10);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_1002f96a8:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1002f9764);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_1002f973c;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x1002f9764 | FUN_1002f9764 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1002f9764(void)

{
  __RawDictionaryStorage *p_Var1;
  long lVar2;
  code *pcVar3;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  undefined8 uVar8;
  long lVar9;
  undefined1 auStack_80 [32];
  
  this = (_DictionaryStorage *)&DAT_100fbdb98;
  FUN_1000037f0(&DAT_100fbdb98,&DAT_100c3ee98);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var4 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x40;
    uVar5 = (1L << ((ulong)(byte)p_Var4[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var4 != original || p_Var1 + uVar5 * 8 <= p_Var4 + 0x40) {
      _memmove(p_Var4 + 0x40,p_Var1,uVar5 << 3);
    }
    lVar9 = 0;
    *(undefined8 *)(p_Var4 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar5 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar5 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar5 = uVar5 & *(ulong *)(original + 0x40);
    if (uVar5 == 0) goto LAB_1002f9848;
    do {
      uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
      uVar5 = uVar5 - 1 & uVar5;
      while( true ) {
        uVar7 = LZCOUNT(uVar7) | lVar9 << 6;
        uVar8 = *(undefined8 *)(*(long *)(original + 0x30) + uVar7 * 8);
        FUN_10000cbfc(*(long *)(original + 0x38) + uVar7 * 0x20,auStack_80);
        *(undefined8 *)(*(long *)(p_Var4 + 0x30) + uVar7 * 8) = uVar8;
        FUN_100011080(auStack_80,*(long *)(p_Var4 + 0x38) + uVar7 * 0x20);
        if (uVar5 != 0) break;
LAB_1002f9848:
        do {
          lVar2 = lVar9 + 1;
          if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1002f98e8);
            (*pcVar3)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar2) goto LAB_1002f98b8;
          uVar5 = *(ulong *)(p_Var1 + lVar2 * 8);
          lVar9 = lVar9 + 1;
        } while (uVar5 == 0);
        uVar7 = (uVar5 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar5 & 0x5555555555555555) << 1;
        uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
        uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
        uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
        uVar7 = uVar7 >> 0x20 | uVar7 << 0x20;
        uVar5 = uVar5 - 1 & uVar5;
        lVar9 = lVar2;
      }
    } while( true );
  }
LAB_1002f98b8:
  _swift_release(original);
  *unaff_x20 = (long)p_Var4;
  return;
}


