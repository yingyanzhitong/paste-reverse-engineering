/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100906730 | FUN_100906730 */

void FUN_100906730(undefined8 param_1,long *param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  if ((char)param_2[0x1b] != '\x06') {
    lVar8 = *param_2;
    _swift_beginAccess(param_2 + 0x21,auStack_70,0x21,0);
    uVar7 = param_2[0x26];
    _swift_retain(param_4 & 0x3fffffffffffffff);
    _swift_errorRetain(param_1);
    uVar2 = uVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    param_2[0x26] = uVar7;
    uVar5 = uVar7;
    if ((uVar2 & 1) == 0) {
      uVar5 = 0;
      FUN_100902fe8(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
      param_2[0x26] = uVar5;
    }
    uVar2 = *(ulong *)(uVar5 + 0x10);
    uVar7 = uVar5;
    if (*(ulong *)(uVar5 + 0x18) >> 1 <= uVar2) {
      uVar7 = (ulong)(1 < *(ulong *)(uVar5 + 0x18));
      FUN_100902fe8(uVar7,uVar2 + 1,1,uVar5);
    }
    *(ulong *)(uVar7 + 0x10) = uVar2 + 1;
    lVar1 = uVar7 + uVar2 * 0x10;
    *(ulong *)(lVar1 + 0x20) = param_4;
    *(undefined8 *)(lVar1 + 0x28) = param_1;
    param_2[0x26] = uVar7;
    _swift_endAccess(auStack_70);
    uVar6 = *(undefined8 *)(lVar8 + 0x50);
    local_60 = uVar6;
    uStack_58 = param_3;
    _swift_beginAccess(param_2 + 0x1f,auStack_88,0x21,0);
    puVar3 = &DAT_100febf90;
    FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
    uVar4 = 0xff;
    _swift_getTupleTypeMetadata2(0xff,puVar3,uVar6,0,0);
    FUN_1006529e0(0xff,uVar4);
    uVar4 = 0;
    Swift::Array<undefined>::typeMetadataAccessor();
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar4);
    _swift_getWitnessTable
              (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar4
              );
    (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
    _swift_endAccess(auStack_88);
    FUN_100904680(7);
  }
  return;
}



/* Address: 0x1009068ec | FUN_1009068ec */

void FUN_1009068ec(undefined8 param_1,long *param_2,ulong param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar6 = *param_2;
  _swift_beginAccess(param_2 + 0x21,auStack_80,0x21,0);
  uVar5 = param_2[0x26];
  _swift_retain(param_3 & 0x3fffffffffffffff);
  _swift_errorRetain(param_1);
  uVar2 = uVar5;
  _swift_isUniquelyReferenced_nonNull_native();
  param_2[0x26] = uVar5;
  uVar4 = uVar5;
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
    FUN_100902fe8(0,*(long *)(uVar5 + 0x10) + 1,1,uVar5);
    param_2[0x26] = uVar4;
  }
  uVar2 = *(ulong *)(uVar4 + 0x10);
  uVar5 = uVar4;
  if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar2) {
    uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
    FUN_100902fe8(uVar5,uVar2 + 1,1,uVar4);
  }
  *(ulong *)(uVar5 + 0x10) = uVar2 + 1;
  lVar1 = uVar5 + uVar2 * 0x10;
  *(ulong *)(lVar1 + 0x20) = param_3;
  *(undefined8 *)(lVar1 + 0x28) = param_1;
  param_2[0x26] = uVar5;
  _swift_endAccess(auStack_80);
  local_70 = *(undefined8 *)(lVar6 + 0x50);
  uStack_68 = param_4;
  _swift_beginAccess(param_2 + 0x1f,auStack_98,0x21,0);
  uVar3 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__MutableCollection_100eac520,uVar3);
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__RangeReplaceableCollection_100eac550,uVar3);
  (extension_Swift)::Swift::RangeReplaceableCollection::_removeAll();
  _swift_endAccess(auStack_98);
  FUN_100904680(7);
  return;
}



/* Address: 0x100906a70 | FUN_100906a70 */

void FUN_100906a70(undefined8 *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  puVar3 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar4 = 0;
  _swift_getTupleTypeMetadata2(0,puVar3,param_4,0,0);
  (*param_2)(uVar1,uVar2,(long)param_1 + (long)*(int *)(lVar4 + 0x30));
  return;
}



/* Address: 0x100906aec | FUN_100906aec */

void FUN_100906aec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_2 + 0x90);
  if (lVar5 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(param_2 + 0x98);
    uVar1 = *(undefined8 *)(param_2 + 0xa0);
    _swift_retain(lVar5);
    _swift_retain(uVar1);
    FUN_100950b80(lVar5,uVar4,uVar1);
    _swift_release(uVar1);
    _swift_release(lVar5);
    uVar4 = *(undefined8 *)(param_2 + 0x90);
  }
  uVar1 = *(undefined8 *)(param_2 + 0x98);
  uVar2 = *(undefined8 *)(param_2 + 0xa0);
  *(long *)(param_2 + 0x90) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  *(undefined8 *)(param_2 + 0xa0) = 0;
  FUN_100622430(uVar4,uVar1,uVar2);
  if (!SCARRY8(*(long *)(param_2 + 0x100),1)) {
    *(long *)(param_2 + 0x100) = *(long *)(param_2 + 0x100) + 1;
    FUN_100904680(2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100906b90);
  (*pcVar3)();
}



/* Address: 0x100906b90 | FUN_100906b90 */

void FUN_100906b90(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar2 = 0;
  FUN_100907aac(0,*(undefined8 *)(*unaff_x20 + 0x50));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(unaff_x20 + 2,lVar2);
  FUN_100622430(unaff_x20[0x12],unaff_x20[0x13],unaff_x20[0x14]);
  FUN_100622430(unaff_x20[0x15],unaff_x20[0x16],unaff_x20[0x17]);
  FUN_100622430(unaff_x20[0x18],unaff_x20[0x19],unaff_x20[0x1a]);
  lVar2 = unaff_x20[0x1d];
  _swift_bridgeObjectRelease(unaff_x20[0x1e]);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(unaff_x20[0x1f]);
  lVar2 = unaff_x20[0x24];
  lVar1 = unaff_x20[0x25];
  lVar3 = unaff_x20[0x26];
  _swift_bridgeObjectRelease(unaff_x20[0x22]);
  _swift_errorRelease(lVar2);
  _swift_errorRelease(lVar1);
  _swift_bridgeObjectRelease(lVar3);
  return;
}



/* Address: 0x100906c3c | FUN_100906c3c */

void FUN_100906c3c(undefined8 param_1)

{
  FUN_100906b90();
  _swift_deallocClassInstance(param_1,0x138,7);
  return;
}



/* Address: 0x100906c58 | FUN_100906c58 */

void FUN_100906c58(long param_1)

{
  _CocoaArrayWrapper _Var1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined8 *unaff_x20;
  
  puVar3 = (undefined1 *)*unaff_x20;
  puVar2 = puVar3;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
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
  FUN_100902ec0();
  *unaff_x20 = puVar2;
  return;
}



/* Address: 0x100906d08 | FUN_100906d08 */

undefined8 FUN_100906d08(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined8 local_70 [3];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_2 + 0x10);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 == '\x01') {
    uVar3 = 1;
    FUN_1008fa558(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100906e20);
      (*pcVar2)();
    }
    local_70[0] = uVar4;
    FUN_1008fa5ec(uVar4,cVar1);
    (*param_3)(local_70);
    FUN_1008fa60c(uVar4,cVar1);
    uVar4 = 0;
    uVar3 = 0;
  }
  _swift_beginAccess(param_1 + 0x10,local_70,1,0);
  if (*(char *)(param_1 + 0x18) == -1) {
    *(undefined8 *)(param_1 + 0x10) = uVar4;
    *(undefined1 *)(param_1 + 0x18) = uVar3;
    _swift_beginAccess(param_1 + 0x30,auStack_88,1,0);
    uVar4 = *(undefined8 *)(param_1 + 0x30);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x30) = 0;
  }
  else {
    FUN_1002ec258(uVar4,uVar3);
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x100906e20 | FUN_100906e20 */

undefined8 FUN_100906e20(long param_1,long param_2,code *param_3)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  uVar4 = *(undefined8 *)(param_1 + 0x10);
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x01') {
    FUN_100308524(uVar4,1);
    (*param_3)(uVar4);
    uVar3 = 0;
    FUN_100630328(0,0);
    FUN_100308538(uVar4,1);
  }
  else {
    if (cVar1 == -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100906f34);
      (*pcVar2)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_70,1,0);
    uVar3 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar4;
      *(char *)(param_2 + 0x18) = cVar1;
      _swift_beginAccess(param_2 + 0x30,auStack_88,1,0);
      uVar3 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
    }
  }
  return uVar3;
}



/* Address: 0x100906f34 | FUN_100906f34 */

undefined8 FUN_100906f34(long param_1,code *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char cVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  undefined8 uStack_48;
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  cVar3 = *(char *)(param_1 + 0x20);
  if (cVar3 != '\x01') {
    if (cVar3 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100906fd8);
      (*pcVar4)();
    }
    uVar1 = *(undefined8 *)(param_1 + 0x10);
    uVar2 = *(undefined8 *)(param_1 + 0x18);
    local_50 = uVar1;
    uStack_48 = uVar2;
    FUN_1008fde58(uVar1,uVar2,cVar3);
    (*param_2)(&local_50);
    FUN_1009082bc(uVar1,uVar2,cVar3);
  }
  return 0;
}



/* Address: 0x100906fd8 | FUN_100906fd8 */

undefined8 FUN_100906fd8(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
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
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  lVar1 = *(long *)(unaff_x20 + 0x30);
  _swift_getObjectType(uVar2);
  (**(code **)(*(long *)(param_1 + -8) + 0x10))(&local_c0);
  puVar3 = &DAT_100f14748;
  _swift_allocObject(&DAT_100f14748,0x98,7);
  *(undefined8 *)(puVar3 + 0x60) = uStack_78;
  *(undefined8 *)(puVar3 + 0x58) = local_80;
  *(undefined8 *)(puVar3 + 0x70) = uStack_68;
  *(undefined8 *)(puVar3 + 0x68) = uStack_70;
  *(undefined8 *)(puVar3 + 0x80) = uStack_58;
  *(undefined8 *)(puVar3 + 0x78) = local_60;
  *(undefined8 *)(puVar3 + 0x90) = uStack_48;
  *(undefined8 *)(puVar3 + 0x88) = uStack_50;
  *(undefined8 *)(puVar3 + 0x20) = uStack_b8;
  *(undefined8 *)(puVar3 + 0x18) = local_c0;
  *(undefined8 *)(puVar3 + 0x30) = uStack_a8;
  *(undefined8 *)(puVar3 + 0x28) = uStack_b0;
  *(undefined8 *)(puVar3 + 0x40) = uStack_98;
  *(undefined8 *)(puVar3 + 0x38) = local_a0;
  *(undefined8 *)(puVar3 + 0x10) = *(undefined8 *)(param_1 + 0x10);
  *(undefined8 *)(puVar3 + 0x50) = uStack_88;
  *(undefined8 *)(puVar3 + 0x48) = uStack_90;
  (**(code **)(lVar1 + 0x18))(FUN_100908034,puVar3,uVar2,lVar1);
  _swift_release(puVar3);
  return *(undefined8 *)(unaff_x20 + 0x78);
}



/* Address: 0x1009070b4 | FUN_1009070b4 */

void FUN_1009070b4(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100907160);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 8;
  _swift_arrayDestroy(lVar1,lVar4,&DAT_100ef29b8);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100907164);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100907168);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 8);
    pvVar3 = (void *)(lVar7 + 0x20 + param_2 * 8);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 8) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 8);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10090716c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100907170);
  (*pcVar6)();
}



/* Address: 0x100907170 | FUN_100907170 */

void FUN_100907170(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  long lVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10090721c);
    (*pcVar2)();
  }
  lVar4 = *unaff_x20;
  lVar5 = *(long *)(lVar4 + 0x10);
  if (lVar5 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907220);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907224);
    (*pcVar2)();
  }
  lVar1 = -(param_2 - param_1);
  if (!SBORROW8(0,param_2 - param_1)) {
    if (!SCARRY8(lVar5,lVar1)) {
      lVar3 = lVar4;
      _swift_isUniquelyReferenced_nonNull_native();
      *unaff_x20 = lVar4;
      if (((int)lVar3 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar5 + lVar1)) {
        FUN_100902a24();
        *unaff_x20 = lVar3;
        lVar4 = lVar3;
      }
      FUN_1009070b4(param_1,param_2,0);
      *unaff_x20 = lVar4;
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10090722c);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100907228);
  (*pcVar2)();
}



/* Address: 0x10090722c | FUN_10090722c */

undefined1  [16] FUN_10090722c(long param_1,long param_2,char *param_3,void *param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  char *pcVar4;
  char *pcVar5;
  long lVar6;
  String SVar7;
  undefined1 auVar8 [16];
  String SVar9;
  String SVar10;
  String SVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined1 auStack_80 [8];
  ulong local_78;
  undefined8 local_70;
  undefined *local_68;
  
  lVar6 = param_1;
  if (param_1 == 0) {
    if (param_2 == 0) {
      lVar6 = *(long *)(param_3 + 0x10);
      if (lVar6 == 0) {
        local_70 = 0x8000000100db4920;
        local_78 = 0xd00000000000001b;
      }
      else {
        local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
        FUN_10090d9a0(0,lVar6,0);
        param_3 = param_3 + 0x28;
        do {
          puVar3 = local_68;
          local_78 = *(ulong *)(param_3 + -8);
          uVar2 = *(undefined8 *)param_3;
          local_70 = uVar2;
          _swift_retain(local_78 & 0x3fffffffffffffff);
          _swift_errorRetain(uVar2);
          SVar9 = Swift::String::_init(&local_78,&DAT_100f14488);
          uVar1 = *(ulong *)(puVar3 + 0x10);
          local_68 = puVar3;
          if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar1) {
            FUN_10090d9a0(1 < *(ulong *)(puVar3 + 0x18),uVar1 + 1,1);
          }
          puVar3 = local_68;
          param_3 = param_3 + 0x10;
          *(ulong *)(local_68 + 0x10) = uVar1 + 1;
          *(String *)(local_68 + uVar1 * 0x10 + 0x20) = SVar9;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        local_78 = 0;
        local_70 = 0xe000000000000000;
        Swift::_StringGuts::grow(0x15,(_StringGuts)SVar9.bridgeObject);
        _swift_bridgeObjectRelease(local_70);
        local_78 = 0xd000000000000013;
        local_70 = 0x8000000100db4900;
        pcVar4 = &DAT_100fec948;
        local_68 = puVar3;
        FUN_1000f7830(&DAT_100fec948,&DAT_100c84378);
        pcVar5 = pcVar4;
        FUN_100907fa0();
        SVar9.bridgeObject = &SUB_e200000000000000;
        SVar9.str = (char *)0x202c;
        SVar9 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar9);
        _swift_release(puVar3);
        SVar11.bridgeObject = pcVar5;
        SVar11.str = pcVar4;
        Swift::String::append(SVar9,SVar11);
        _swift_bridgeObjectRelease(SVar9.bridgeObject);
      }
      goto LAB_1009072c8;
    }
    _swift_errorRetain(param_2);
    lVar6 = param_2;
  }
  local_78 = 0;
  local_70 = 0xe000000000000000;
  _swift_errorRetain(param_1);
  SVar7.bridgeObject = (void *)0xeb00000000203a72;
  SVar7.str = (char *)0x6f72726520534e44;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar7,SVar10);
  _swift_getErrorValue(lVar6,auStack_80,&local_98);
  Swift::DefaultStringInterpolation::_appendInterpolation(local_98,uStack_90);
  _swift_errorRelease(lVar6);
LAB_1009072c8:
  auVar8._8_8_ = local_70;
  auVar8._0_8_ = local_78;
  return auVar8;
}



/* Address: 0x100907460 | thunk_FUN_100907490 */

void thunk_FUN_100907490(void)

{
  FUN_100907490();
  return;
}



/* Address: 0x100907464 | FUN_100907464 */

void FUN_100907464(ulong *param_1)

{
  _swift_release(*param_1 & 0x3fffffffffffffff);
  _swift_errorRelease(param_1[1]);
  return;
}



/* Address: 0x100907490 | FUN_100907490 */

ulong * FUN_100907490(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_errorRetain(uVar2);
  param_1[1] = uVar2;
  return param_1;
}



/* Address: 0x1009074cc | FUN_1009074cc */

ulong * FUN_1009074cc(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = *param_2;
  uVar2 = *param_1;
  *param_1 = uVar1;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  _swift_release(uVar2 & 0x3fffffffffffffff);
  uVar2 = param_2[1];
  _swift_errorRetain(uVar2);
  uVar1 = param_1[1];
  param_1[1] = uVar2;
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Address: 0x10090752c | FUN_10090752c */

ulong * FUN_10090752c(ulong *param_1,ulong *param_2)

{
  ulong uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_release(uVar1 & 0x3fffffffffffffff);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_errorRelease(uVar1);
  return param_1;
}



/* Address: 0x100907574 | FUN_100907574 */

undefined1  [16] FUN_100907574(void)

{
  return ZEXT816(0x100f14488);
}



/* Address: 0x100907584 | FUN_100907584 */

void FUN_100907584(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_errorRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1009075bc | FUN_1009075bc */

undefined8 * FUN_1009075bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[3];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_errorRetain(uVar1);
  param_1[3] = uVar1;
  uVar2 = param_2[4];
  _swift_errorRetain(uVar2);
  uVar1 = param_2[5];
  param_1[4] = uVar2;
  param_1[5] = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x100907620 | FUN_100907620 */

undefined8 * FUN_100907620(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  uVar1 = param_1[3];
  uVar2 = param_2[3];
  _swift_errorRetain(uVar2);
  param_1[3] = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = param_1[4];
  uVar2 = param_2[4];
  _swift_errorRetain(uVar2);
  param_1[4] = uVar2;
  _swift_errorRelease(uVar1);
  uVar1 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1009076c4 | FUN_1009076c4 */

undefined8 * FUN_1009076c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[2] = param_2[2];
  _swift_errorRelease(param_1[3]);
  uVar2 = param_1[4];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  _swift_errorRelease(uVar2);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x100907728 | FUN_100907728 */

undefined1  [16] FUN_100907728(void)

{
  return ZEXT816(0x100f14508);
}



/* Address: 0x100907738 | FUN_100907738 */

void FUN_100907738(long param_1)

{
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_58 = &DAT_100c841b0;
  puStack_50 = &DAT_100c841c8;
  local_48 = &DAT_100c841c8;
  puStack_40 = &DAT_100c841c8;
  local_38 = &DAT_100c841e0;
  puStack_30 = &DAT_100c841f8;
  local_28 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_20 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  local_18 = &DAT_100c84210;
  _swift_initClassMetadata2(param_1,0,9,&local_58,param_1 + 0x58);
  return;
}



/* Address: 0x1009077c0 | FUN_1009077c0 */

void FUN_1009077c0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009077cc | FUN_1009077cc */

undefined1  [16] FUN_1009077cc(void)

{
  return ZEXT816(0x100f14650);
}



/* Address: 0x1009077dc | FUN_1009077dc */

void FUN_1009077dc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009077e8 | FUN_1009077e8 */

void FUN_1009077e8(long param_1)

{
  FUN_100004594();
  _swift_unknownObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x40));
  _swift_release(*(undefined8 *)(param_1 + 0x58));
  _swift_release(*(undefined8 *)(param_1 + 0x78));
  return;
}



/* Address: 0x100907824 | FUN_100907824 */

long FUN_100907824(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar3;
  (*(code *)**(undefined8 **)(lVar3 + -8))();
  uVar4 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar4;
  uVar1 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = uVar1;
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar5 = *(undefined8 *)(param_2 + 0x50);
  uVar7 = *(undefined8 *)(param_2 + 0x68);
  uVar6 = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar5;
  *(undefined8 *)(param_1 + 0x68) = uVar7;
  *(undefined8 *)(param_1 + 0x60) = uVar6;
  uVar5 = *(undefined8 *)(param_2 + 0x78);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined8 *)(param_1 + 0x78) = uVar5;
  _swift_unknownObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar5);
  return param_1;
}



/* Address: 0x1009078b4 | FUN_1009078b4 */

long FUN_1009078b4(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_10008820c();
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar1);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  uVar2 = *(undefined8 *)(param_2 + 0x58);
  uVar3 = *(undefined8 *)(param_2 + 0x50);
  *(undefined8 *)(param_1 + 0x58) = *(undefined8 *)(param_2 + 0x58);
  *(undefined8 *)(param_1 + 0x50) = uVar3;
  _swift_retain(uVar2);
  _swift_release(uVar1);
  *(undefined8 *)(param_1 + 0x60) = *(undefined8 *)(param_2 + 0x60);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  uVar2 = *(undefined8 *)(param_1 + 0x78);
  *(undefined8 *)(param_1 + 0x78) = *(undefined8 *)(param_2 + 0x78);
  _swift_retain();
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100907974 | FUN_100907974 */

undefined8 * FUN_100907974(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar3 = param_2[6];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_unknownObjectRelease(uVar1);
  uVar2 = param_2[7];
  uVar1 = param_2[8];
  param_1[6] = uVar3;
  param_1[7] = uVar2;
  uVar2 = param_1[8];
  param_1[8] = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  param_1[9] = param_2[9];
  uVar2 = param_1[0xb];
  uVar1 = param_2[10];
  param_1[0xb] = param_2[0xb];
  param_1[10] = uVar1;
  _swift_release(uVar2);
  uVar2 = param_2[0xc];
  param_1[0xd] = param_2[0xd];
  param_1[0xc] = uVar2;
  uVar2 = param_2[0xf];
  uVar1 = param_1[0xf];
  param_1[0xe] = param_2[0xe];
  param_1[0xf] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x100907a04 | FUN_100907a04 */

int FUN_100907a04(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x20] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100907a4c | FUN_100907a4c */

void FUN_100907a4c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[0xf] = 0;
    param_1[0xe] = 0;
    param_1[0xd] = 0;
    param_1[0xc] = 0;
    param_1[0xb] = 0;
    param_1[10] = 0;
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 0x10) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100907aac | FUN_100907aac */

void FUN_100907aac(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100907ab8 | FUN_100907ab8 */

void FUN_100907ab8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar2 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar1,uVar3,0,0);
  uVar3 = 0xff;
  FUN_1006529e0(0xff,uVar2);
  puVar1 = &DAT_100fec940;
  FUN_1000f8b08(&DAT_100fec940,&DAT_100c84f90);
  _swift_getFunctionTypeMetadata2(0x44000002,puVar1,&DAT_100eea728,uVar3);
  return;
}



/* Address: 0x100907b3c | FUN_100907b3c */

void FUN_100907b3c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c84320,param_1);
  return;
}



/* Address: 0x100907b4c | FUN_100907b4c */

void FUN_100907b4c(void)

{
  FUN_100642338();
  return;
}



/* Address: 0x100907b74 | FUN_100907b74 */

void FUN_100907b74(long param_1,long param_2,long param_3)

{
  undefined *puVar1;
  _CocoaArrayWrapper _Var2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 *unaff_x20;
  undefined *puVar8;
  undefined *puVar9;
  
  lVar7 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100907c58);
    (*pcVar4)();
  }
  puVar9 = (undefined *)*unaff_x20;
  puVar8 = (undefined *)((ulong)puVar9 & 0xffffffffffffff8);
  puVar5 = &DAT_100fec7b8;
  FUN_1000f7830(&DAT_100fec7b8,&DAT_100c84090);
  _swift_arrayDestroy(puVar8 + param_1 * 8 + 0x20,lVar7,puVar5);
  lVar3 = param_3 - lVar7;
  if (SBORROW8(param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100907c5c);
    (*pcVar4)();
  }
  if (lVar3 != 0) {
    if ((ulong)puVar9 >> 0x3e == 0) {
      lVar6 = *(long *)(puVar8 + 0x10);
      lVar7 = lVar6 - param_2;
    }
    else {
      _Var2.unknown = puVar8;
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        _Var2.unknown = puVar9;
      }
      lVar6 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
      lVar7 = lVar6 - param_2;
    }
    if (SBORROW8(lVar6,param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100907c74);
      (*pcVar4)();
    }
    puVar5 = puVar8 + param_1 * 8 + 0x20 + param_3 * 8;
    puVar1 = puVar8 + param_2 * 8 + 0x20;
    if (puVar5 != puVar1 || puVar1 + lVar7 * 8 <= puVar5) {
      _memmove(puVar5,puVar1,lVar7 << 3);
    }
    if ((ulong)puVar9 >> 0x3e == 0) {
      lVar7 = *(long *)(puVar8 + 0x10);
    }
    else {
      _Var2.unknown = puVar8;
      if (((ulong)puVar9 & 0x8000000000000000) != 0) {
        _Var2.unknown = puVar9;
      }
      lVar7 = Swift::_CocoaArrayWrapper::get_endIndex(_Var2);
    }
    if (SCARRY8(lVar7,lVar3)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100907c78);
      (*pcVar4)();
    }
    *(long *)(puVar8 + 0x10) = lVar7 + lVar3;
  }
  if (0 < param_3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100907c7c);
    (*pcVar4)();
  }
  return;
}



/* Address: 0x100907c7c | FUN_100907c7c */

void FUN_100907c7c(long param_1,long param_2)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined *puVar5;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907d1c);
    (*pcVar2)();
  }
  puVar5 = (undefined *)*unaff_x20;
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar3 = *(long *)((undefined *)((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar3 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (lVar3 < param_2) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907d34);
    (*pcVar2)();
  }
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907d38);
    (*pcVar2)();
  }
  lVar3 = -(param_2 - param_1);
  if (SBORROW8(0,param_2 - param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907d3c);
    (*pcVar2)();
  }
  if ((ulong)puVar5 >> 0x3e == 0) {
    lVar4 = *(long *)(((ulong)puVar5 & 0xffffffffffffff8) + 0x10);
  }
  else {
    _Var1.unknown = (undefined *)((ulong)puVar5 & 0xffffffffffffff8);
    if (((ulong)puVar5 & 0x8000000000000000) != 0) {
      _Var1.unknown = puVar5;
    }
    lVar4 = Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  if (SCARRY8(lVar4,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100907d40);
    (*pcVar2)();
  }
  FUN_100906c58(lVar4 + lVar3,1);
  FUN_100907b74(param_1,param_2,0);
  return;
}



/* Address: 0x100907d40 | FUN_100907d40 */

void FUN_100907d40(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *unaff_x20;
  long lVar5;
  undefined8 uVar6;
  tuple2_conflict3 tVar7;
  
  lVar5 = *unaff_x20;
  *(undefined1 *)(unaff_x20 + 0x1c) = 0;
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  unaff_x20[0x1d] = (long)PTR___swiftEmptyArrayStorage_100eae0d8;
  unaff_x20[0x1e] = (long)puVar1;
  puVar2 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,puVar2,uVar6,0,0);
  uVar4 = 0;
  FUN_1006529e0(0,uVar3);
  tVar7 = Swift::Array<undefined>::_allocateUninitialized(0,uVar4);
  unaff_x20[0x1f] = tVar7._0_8_;
  unaff_x20[0x20] = 0;
  lVar5 = 0;
  FUN_100907aac(0,uVar6);
  (**(code **)(*(long *)(lVar5 + -8) + 0x10))(unaff_x20 + 2,param_1,lVar5);
  unaff_x20[0x13] = 0;
  unaff_x20[0x12] = 0;
  unaff_x20[0x15] = 0;
  unaff_x20[0x14] = 0;
  unaff_x20[0x17] = 0;
  unaff_x20[0x16] = 0;
  unaff_x20[0x19] = 0;
  unaff_x20[0x18] = 0;
  *(undefined8 *)((long)unaff_x20 + 0xd1) = 0;
  *(undefined8 *)((long)unaff_x20 + 0xc9) = 0;
  unaff_x20[0x21] = unaff_x20[9];
  unaff_x20[0x22] = unaff_x20[10];
  unaff_x20[0x23] = unaff_x20[0xb];
  unaff_x20[0x24] = 0;
  unaff_x20[0x25] = 0;
  unaff_x20[0x26] = (long)puVar1;
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100907e14 | FUN_100907e14 */

void FUN_100907e14(long param_1,long param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  void *pvVar4;
  void *pvVar5;
  size_t sVar6;
  long *unaff_x20;
  long lVar7;
  long lVar8;
  
  lVar1 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100907ed4);
    (*pcVar3)();
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + 0x20 + param_1 * 0x30;
  _swift_arrayDestroy(lVar8,lVar1,&DAT_100f1a1d8);
  lVar2 = param_3 - lVar1;
  if (SBORROW8(param_3,lVar1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100907ed8);
    (*pcVar3)();
  }
  if (lVar2 != 0) {
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100907edc);
      (*pcVar3)();
    }
    pvVar4 = (void *)(lVar8 + param_3 * 0x30);
    pvVar5 = (void *)(lVar7 + 0x20 + param_2 * 0x30);
    sVar6 = (*(long *)(lVar7 + 0x10) - param_2) * 0x30;
    if (pvVar4 != pvVar5 || (void *)((long)pvVar5 + sVar6) <= pvVar4) {
      _memmove(pvVar4,pvVar5,sVar6);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar2)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100907ee0);
      (*pcVar3)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar2;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100907ee4);
  (*pcVar3)();
}



/* Address: 0x100907ee4 | FUN_100907ee4 */

void FUN_100907ee4(long param_1,long param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar4 = param_2 - param_1;
  if (SBORROW8(param_2,param_1)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100907f90);
    (*pcVar6)();
  }
  lVar7 = *unaff_x20;
  lVar1 = lVar7 + 0x20 + param_1 * 0x40;
  _swift_arrayDestroy(lVar1,lVar4,&DAT_100f14fd0);
  lVar5 = param_3 - lVar4;
  if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100907f94);
    (*pcVar6)();
  }
  if (lVar5 != 0) {
    lVar4 = *(long *)(lVar7 + 0x10) - param_2;
    if (SBORROW8(*(long *)(lVar7 + 0x10),param_2)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100907f98);
      (*pcVar6)();
    }
    pvVar2 = (void *)(lVar1 + param_3 * 0x40);
    pvVar3 = (void *)(lVar7 + 0x20 + param_2 * 0x40);
    if (pvVar2 != pvVar3 || (void *)((long)pvVar3 + lVar4 * 0x40) <= pvVar2) {
      _memmove(pvVar2,pvVar3,lVar4 * 0x40);
    }
    if (SCARRY8(*(long *)(lVar7 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100907f9c);
      (*pcVar6)();
    }
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar5;
  }
  if (param_3 < 1) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x100907fa0);
  (*pcVar6)();
}



/* Address: 0x100907fa0 | FUN_100907fa0 */

void FUN_100907fa0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fec950 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fec948;
  FUN_1000f8b08(&DAT_100fec948,&DAT_100c84378);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Array<undefined>_>Swift__BidirectionalCollection_100eac518,puVar1);
  DAT_100fec950 = puVar2;
  return;
}



/* Address: 0x100907ff0 | FUN_100907ff0 */

void FUN_100907ff0(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x90));
  _swift_deallocObject();
  return;
}



/* Address: 0x100908034 | FUN_100908034 */

void FUN_100908034(void)

{
  long unaff_x20;
  
  FUN_1009044e0(unaff_x20 + 0x18,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100908040 | FUN_100908040 */

void FUN_100908040(void)

{
  FUN_100904680(5);
  return;
}



/* Address: 0x100908068 | FUN_100908068 */

void FUN_100908068(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100908074 | FUN_100908074 */

void FUN_100908074(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (!SCARRY8(*(long *)(unaff_x20 + 0x100),1)) {
    *(long *)(unaff_x20 + 0x100) = *(long *)(unaff_x20 + 0x100) + 1;
    FUN_100904680(1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100908090);
  (*pcVar1)();
}



/* Address: 0x100908090 | FUN_100908090 */

void FUN_100908090(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRelease();
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1009080a4 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  FUN_100645ecc();
  return;
}



/* Address: 0x1009080a8 | FUN_1009080a8 */

void FUN_1009080a8(void)

{
  FUN_100906aec();
  return;
}



/* Address: 0x1009080b0 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1009080b4 | FUN_1009080b4 */

void FUN_1009080b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009080d8 | FUN_1009080d8 */

void FUN_1009080d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x90);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x98);
  uVar3 = *(undefined8 *)(unaff_x20 + 0xa0);
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  FUN_100622430(uVar1,uVar2,uVar3);
  FUN_100904680(3);
  return;
}



/* Address: 0x100908100 | FUN_100908100 */

void FUN_100908100(void)

{
  FUN_100904680(4);
  return;
}



/* Address: 0x100908128 | thunk_FUN_1008fe50c */

void thunk_FUN_1008fe50c(void)

{
  FUN_1008fe50c();
  return;
}



/* Address: 0x10090812c | FUN_10090812c */

void FUN_10090812c(void)

{
  FUN_100905f4c();
  return;
}



/* Address: 0x100908138 | FUN_100908138 */

void FUN_100908138(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10090815c | FUN_10090815c */

void FUN_10090815c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100906a70(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100908178 | FUN_100908178 */

void FUN_100908178(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009081b0 | FUN_1009081b0 */

void FUN_1009081b0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009068ec(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009081bc | FUN_1009081bc */

void FUN_1009081bc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}


