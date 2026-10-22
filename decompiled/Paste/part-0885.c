/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10098e8a8 | FUN_10098e8a8 */

void FUN_10098e8a8(char *param_1)

{
  char cVar1;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  cVar1 = *param_1;
  *param_1 = '\0';
  if (cVar1 == '\x01') {
    _swift_beginAccess(unaff_x20 + 0x38,auStack_38,0x21,0);
    FUN_10098a0a4(1);
    _swift_endAccess(auStack_38);
  }
  _swift_retain();
  return;
}



/* Address: 0x10098e90c | FUN_10098e90c */

void FUN_10098e90c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar1 + 0x28);
  *(undefined8 *)(lVar1 + 0x20) = param_2;
  *(undefined8 *)(lVar1 + 0x28) = param_3;
  _swift_retain(param_3);
  _swift_release(uVar2);
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return;
}



/* Address: 0x10098e954 | FUN_10098e954 */

void FUN_10098e954(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar3 = *unaff_x20;
  plVar1 = (long *)(lVar3 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  if (*plVar1 == 0) {
    *plVar1 = param_2;
    plVar1[1] = param_3;
    *param_1 = lVar3;
    _swift_retain(param_3);
    _swift_retain(lVar3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10098e99c);
  (*pcVar2)();
}



/* Address: 0x10098e99c | FUN_10098e99c */

void FUN_10098e99c(undefined8 *param_1,undefined8 param_2)

{
  FUN_10098fb78();
  *param_1 = param_2;
  _swift_retain();
  return;
}



/* Address: 0x10098e9c4 | FUN_10098e9c4 */

void FUN_10098e9c4(long *param_1,char *param_2)

{
  char cVar1;
  long lVar2;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  cVar1 = *param_2;
  *param_2 = '\0';
  if (cVar1 == '\x01') {
    _swift_beginAccess(lVar2 + 0x38,auStack_48,0x21,0);
    FUN_10098a0a4(1);
    _swift_endAccess(auStack_48);
  }
  *param_1 = lVar2;
  _swift_retain(lVar2);
  return;
}



/* Address: 0x10098ea38 | FUN_10098ea38 */

void FUN_10098ea38(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return;
}



/* Address: 0x10098ea4c | FUN_10098ea4c */

void FUN_10098ea4c(void)

{
  FUN_10098aa24();
  return;
}



/* Address: 0x10098ea6c | FUN_10098ea6c */

undefined8 FUN_10098ea6c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f20a78;
  _swift_allocObject(&DAT_100f20a78,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar2 = 0;
  FUN_10098aefc(0,1,thunk_FUN_10098fe78,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x10098eae0 | FUN_10098eae0 */

void FUN_10098eae0(void)

{
  FUN_10098b96c();
  return;
}



/* Address: 0x10098eb00 | FUN_10098eb00 */

undefined * FUN_10098eb00(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  puVar1 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar1 + 0x28) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar2 = &DAT_100f21108;
  _swift_allocObject(&DAT_100f21108,0x30,7);
  *(long *)(puVar2 + 0x10) = param_1;
  *(code **)(puVar2 + 0x18) = FUN_1008f67d4;
  *(undefined8 *)(puVar2 + 0x20) = 0;
  *(undefined **)(puVar2 + 0x28) = puVar1;
  uVar3 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar3;
  (*pcVar7)(uVar3,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f21130;
    _swift_allocObject(&DAT_100f21130,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_100982fac;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar2);
    (*pcVar7)(FUN_1008db360,puVar6,uVar3,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
  }
  else {
    uVar4 = 0;
    _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_80,0x21,0);
      FUN_10064967c(FUN_100982fac,puVar2);
      _swift_endAccess(auStack_80);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      uVar4 = 0;
    }
    else {
      lVar5 = param_1;
      puVar6 = puVar1;
      FUN_10098ed24(param_1,puVar1);
    }
    FUN_1006486f8(lVar5,puVar6,uVar4);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar1);
    _swift_release(param_1);
    _swift_release(puVar2);
    _swift_bridgeObjectRelease(uVar4);
  }
  return puVar1;
}



/* Address: 0x10098ed24 | FUN_10098ed24 */

undefined8 FUN_10098ed24(long param_1,undefined *param_2)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  char cVar11;
  undefined8 uVar12;
  long lVar13;
  code *pcVar14;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar13 = *(long *)(param_1 + 0x10);
  cVar3 = *(char *)(param_1 + 0x18);
  if (cVar3 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (param_2[0x20] != -1) {
      return 0;
    }
    *(long *)(param_2 + 0x10) = lVar13;
    *(undefined8 *)(param_2 + 0x18) = 0;
    param_2[0x20] = 1;
    _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
    uVar5 = *(undefined8 *)(param_2 + 0x38);
    *(undefined8 *)(param_2 + 0x40) = 0;
    *(undefined8 *)(param_2 + 0x48) = 0;
    *(undefined8 *)(param_2 + 0x38) = 0;
    _swift_errorRetain(lVar13);
    return uVar5;
  }
  if (cVar3 == -1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x10098f238);
    (*pcVar14)();
  }
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  uVar4 = uVar7;
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  FUN_100974ed4(lVar13,cVar3);
  FUN_100974ed4(lVar13,cVar3);
  _swift_unknownObjectRetain(uVar7);
  (*pcVar14)(uVar4,lVar1);
  _swift_unknownObjectRelease(uVar7);
  if ((uVar4 & 1) != 0) {
    puVar6 = &DAT_100f211d0;
    _swift_allocObject(&DAT_100f211d0,0x20,7);
    *(undefined **)(puVar6 + 0x10) = param_2;
    *(long *)(puVar6 + 0x18) = lVar13;
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    if (*(char *)(lVar13 + 0x20) != -1) {
      uVar5 = *(undefined8 *)(lVar13 + 0x10);
      FUN_100999868(uVar5,*(undefined8 *)(lVar13 + 0x18));
      _swift_retain(param_2);
      _swift_release(puVar6);
      FUN_100642b94(lVar13,cVar3);
      return uVar5;
    }
    _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(param_2);
    FUN_10064967c(FUN_1008fcb8c,puVar6);
    _swift_endAccess(auStack_a8);
    FUN_100642b94(lVar13,cVar3);
    param_2 = puVar6;
    goto LAB_10098f1f8;
  }
  puVar6 = &DAT_100f21158;
  _swift_allocObject(&DAT_100f21158,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009806ac;
  *(undefined **)(puVar6 + 0x18) = param_2;
  *(long *)(puVar6 + 0x20) = lVar13;
  uVar7 = *(ulong *)(lVar13 + 0x28);
  lVar1 = *(long *)(lVar13 + 0x30);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar1 + 0x10);
  _swift_retain(param_2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  FUN_100974ed4(lVar13,cVar3);
  _swift_retain_n(param_2,2);
  uVar4 = uVar7;
  (*pcVar14)(uVar7,lVar1);
  if ((uVar4 & 1) == 0) {
    _swift_release(param_2);
    puVar8 = &DAT_100f21180;
    _swift_allocObject(&DAT_100f21180,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar13;
    *(code **)(puVar8 + 0x18) = FUN_1009806b8;
    *(undefined **)(puVar8 + 0x20) = puVar6;
    pcVar14 = *(code **)(lVar1 + 0x18);
    FUN_100974ed4(lVar13,cVar3);
    _swift_retain(puVar6);
    (*pcVar14)(FUN_1009806c8,puVar8,uVar7,lVar1);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar13 + 0x10,auStack_90,0,0);
    uVar5 = *(undefined8 *)(lVar13 + 0x10);
    uVar2 = *(undefined8 *)(lVar13 + 0x18);
    cVar11 = *(char *)(lVar13 + 0x20);
    if (cVar11 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x28);
      lVar1 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar14 = *(code **)(lVar1 + 0x10);
      uVar12 = 1;
      FUN_1009806d4(uVar5,uVar2,1);
      uVar4 = uVar7;
      lVar10 = lVar1;
      (*pcVar14)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f211a8;
        _swift_allocObject(&DAT_100f211a8,0x20,7);
        *(undefined **)(puVar8 + 0x10) = param_2;
        *(undefined8 *)(puVar8 + 0x18) = uVar5;
        pcVar14 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1009806d4(uVar5,uVar2,1);
        (*pcVar14)(FUN_1009806f4,puVar8,uVar7,lVar1);
        _swift_release(param_2);
        _swift_release(puVar8);
      }
      else {
        uVar9 = uVar5;
        FUN_10092b398(uVar5);
        FUN_1006486f8();
        FUN_100004550(uVar9,lVar10);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar12);
      }
      cVar11 = '\x01';
LAB_10098f19c:
      FUN_1009082bc(uVar5,uVar2,cVar11);
    }
    else {
      if (cVar11 != -1) {
        FUN_1009806d4(uVar5,uVar2,cVar11);
        FUN_100988c80(uVar5,uVar2,cVar11,param_2);
        _swift_release(param_2);
        goto LAB_10098f19c;
      }
      _swift_release(param_2);
      _swift_beginAccess(lVar13 + 0x38,auStack_a8,0x21,0);
      FUN_10064967c(FUN_1009806b8,puVar6);
      _swift_endAccess(auStack_a8);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  FUN_100642b94(lVar13,cVar3);
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
LAB_10098f1f8:
  _swift_release(param_2);
  FUN_100642b94(lVar13,cVar3);
  return 0;
}



/* Address: 0x10098f238 | FUN_10098f238 */

void FUN_10098f238(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f20af0,&DAT_100f20b18,FUN_100990084,FUN_100625c60);
  return;
}



/* Address: 0x10098f25c | FUN_10098f25c */

void FUN_10098f25c(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f21400,&DAT_100f21428,FUN_10099076c,thunk_FUN_100625c60);
  return;
}



/* Address: 0x10098f280 | FUN_10098f280 */

void FUN_10098f280(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f20be0,&DAT_100f20c08,FUN_1009900cc,thunk_FUN_100625c60);
  return;
}



/* Address: 0x10098f2a4 | FUN_10098f2a4 */

void FUN_10098f2a4(undefined8 *param_1,undefined8 *param_2,long param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  
  _swift_allocObject(param_3,0x20,7);
  uVar1 = *param_2;
  *(undefined8 *)(param_3 + 0x18) = param_2[1];
  *(undefined8 *)(param_3 + 0x10) = uVar1;
  _swift_allocObject(param_4,0x20,7);
  *(undefined8 *)(param_4 + 0x10) = param_5;
  *(long *)(param_4 + 0x18) = param_3;
  *param_1 = param_6;
  param_1[1] = param_4;
  _swift_unknownObjectRetain(uVar1);
  return;
}



/* Address: 0x10098f328 | FUN_10098f328 */

void FUN_10098f328(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10098f644();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10098f34c | FUN_10098f34c */

void FUN_10098f34c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  puVar1 = &DAT_100ff1638;
  FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
  _swift_dynamicCast(auStack_70,auStack_68,puVar1,&DAT_100eec8d0,7);
  FUN_10000cbfc(param_2,auStack_90);
  puVar1 = &DAT_100ff1660;
  FUN_1000f7830(&DAT_100ff1660,&DAT_100c8a118);
  puVar2 = auStack_94;
  _swift_dynamicCast(puVar2,auStack_90,puVar1,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
  pcVar3 = *(code **)(param_4 + 0x48);
  FUN_10098fed0();
  (*pcVar3)(auStack_70,auStack_94,&DAT_100eec8d0,puVar2,param_3,param_4);
  return;
}



/* Address: 0x10098f438 | FUN_10098f438 */

undefined1 * FUN_10098f438(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  MultipathServiceType MVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  code *pcVar7;
  undefined1 auStack_a0 [8];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [40];
  long lVar2;
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_78);
  FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
  _swift_dynamicCast();
  FUN_10000cbfc(param_2,auStack_98);
  MVar1 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,MVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  puVar5 = auStack_a0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff1660;
  FUN_1000f7830(&DAT_100ff1660,&DAT_100c8a118);
  puVar4 = puVar5;
  _swift_dynamicCast(puVar5,auStack_98,puVar3,lVar2,7);
  pcVar7 = *(code **)(param_4 + 0x48);
  FUN_100990708();
  (*pcVar7)();
  (**(code **)(lVar6 + 8))(puVar5,lVar2);
  return puVar4;
}



/* Address: 0x10098f560 | FUN_10098f560 */

void FUN_10098f560(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 uStack_89;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
  _swift_dynamicCast();
  FUN_10000cbfc(param_2,auStack_88);
  puVar1 = &DAT_100ff1660;
  FUN_1000f7830(&DAT_100ff1660,&DAT_100c8a118);
  _swift_dynamicCast(&uStack_89,auStack_88,puVar1,PTR___type_metadata_for_Swift_Bool_100eac570,7);
  pcVar2 = *(code **)(param_4 + 0x48);
  FUN_10099008c();
  (*pcVar2)();
  return;
}



/* Address: 0x10098f644 | FUN_10098f644 */

undefined *
FUN_10098f644(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10098f7a8);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_1000c9144(0,&DAT_100ff1648,FUN_10098ff10,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff1630;
    FUN_1000f7830(&DAT_100ff1630,&DAT_100c8a108);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x10098f7a8 | FUN_10098f7a8 */

long * FUN_10098f7a8(class_t *param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  class_t *pcVar3;
  DispatchQoS DVar4;
  Options *pOVar5;
  undefined8 uVar6;
  long lVar7;
  undefined1 auStack_78 [24];
  
  lVar7 = *param_2;
  param_2[6] = 10000000000;
  pcVar3 = param_1;
  FUN_100622d2c();
  param_2[7] = (long)pcVar3;
  lVar2 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos;
  DVar4 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar4.unknown + -8) + 0x38))((long)param_2 + lVar2,1,1,DVar4.unknown);
  lVar2 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions;
  pOVar5 = Network::NWProtocolTCP::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar5,*(undefined4 *)(pOVar5 + 0x30),*(undefined2 *)(pOVar5 + 0x34));
  pOVar5 = Network::NWProtocolTCP::Options::init(pOVar5);
  *(Options **)((long)param_2 + lVar2) = pOVar5;
  *(undefined8 *)((long)param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions)
       = 0;
  puVar1 = (undefined8 *)
           ((long)param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           ((long)param_2 +
           _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
  *puVar1 = 0;
  puVar1[1] = 0;
  pcVar3 = param_1;
  _object_getClass();
  if ((pcVar3 == &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup ||
       pcVar3 == &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) &&
     (param_1 != (class_t *)0x0)) {
    param_2[2] = (long)param_1;
    param_2[3] = param_4;
    _swift_unknownObjectRetain(param_1);
    uVar6 = 6;
    FUN_10060a56c(6,1);
    _swift_beginAccess(param_2 + 7,auStack_78,0x21,0);
    FUN_10098978c(uVar6,1);
    _swift_endAccess(auStack_78);
    _swift_unknownObjectRelease(param_1);
    param_2[4] = (long)FUN_10098a784;
    param_2[5] = 0;
  }
  else {
    _swift_unknownObjectRelease(param_1);
    _swift_bridgeObjectRelease(param_2[7]);
    FUN_1000fb4c4((long)param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos,
                  &DAT_100ff0820,&DAT_100c89460);
    _swift_release(*(undefined8 *)
                    ((long)param_2 +
                    _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions));
    _swift_release(*(undefined8 *)
                    ((long)param_2 +
                    _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions));
    FUN_100004550(*(undefined8 *)
                   ((long)param_2 +
                   _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers),
                  ((undefined8 *)
                  ((long)param_2 +
                  _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers))[1]);
    FUN_100004550(*(undefined8 *)
                   ((long)param_2 +
                   _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator),
                  ((undefined8 *)
                  ((long)param_2 +
                  _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))
                  [1]);
    _swift_deallocPartialClassInstance
              (param_2,lVar7,*(undefined4 *)(*param_2 + 0x30),*(undefined2 *)(*param_2 + 0x34));
    param_2 = (long *)0x0;
  }
  return param_2;
}



/* Address: 0x10098f9ac | FUN_10098f9ac */

void FUN_10098f9ac(class_t *param_1,long param_2)

{
  code *pcVar1;
  class_t *pcVar2;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC20NIOTransportServices19NIOTSEventLoopGroup &&
      pcVar2 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop ||
      param_1 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10098fa34);
    (*pcVar1)();
  }
  _swift_allocObject(param_2,*(undefined4 *)(param_2 + 0x30),*(undefined2 *)(param_2 + 0x34));
  _swift_unknownObjectRetain();
  FUN_10098f7a8();
  if (param_1 != (class_t *)0x0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10098fa38);
  (*pcVar1)();
}



/* Address: 0x10098fa38 | FUN_10098fa38 */

long FUN_10098fa38(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  DispatchQoS DVar3;
  Options *pOVar4;
  undefined8 uVar5;
  undefined1 auStack_58 [24];
  
  *(undefined8 *)(param_2 + 0x30) = 10000000000;
  uVar5 = param_1;
  FUN_100622d2c();
  *(undefined8 *)(param_2 + 0x38) = uVar5;
  lVar2 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos;
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x38))(param_2 + lVar2,1,1,DVar3.unknown);
  lVar2 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions;
  pOVar4 = Network::NWProtocolTCP::Options::typeMetadataAccessor();
  _swift_allocObject(pOVar4,*(undefined4 *)(pOVar4 + 0x30),*(undefined2 *)(pOVar4 + 0x34));
  pOVar4 = Network::NWProtocolTCP::Options::init(pOVar4);
  *(Options **)(param_2 + lVar2) = pOVar4;
  *(undefined8 *)(param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions) = 0;
  puVar1 = (undefined8 *)
           (param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1 = (undefined8 *)
           (param_2 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator
           );
  *puVar1 = 0;
  puVar1[1] = 0;
  *(undefined8 *)(param_2 + 0x10) = param_1;
  *(undefined ***)(param_2 + 0x18) = &PTR_PTR_100f22918;
  _swift_unknownObjectRetain(param_1);
  uVar5 = 6;
  FUN_10060a56c(6,1);
  _swift_beginAccess((undefined8 *)(param_2 + 0x38),auStack_58,0x21,0);
  FUN_10098978c(uVar5,1);
  _swift_endAccess(auStack_58);
  *(code **)(param_2 + 0x20) = FUN_10098a784;
  *(undefined8 *)(param_2 + 0x28) = 0;
  return param_2;
}



/* Address: 0x10098fb78 | FUN_10098fb78 */

void FUN_10098fb78(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_58,0x21,0);
  FUN_100622d54(param_1,param_2,param_3,param_4);
  _swift_endAccess(auStack_58);
  return;
}



/* Address: 0x10098fbf4 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  FUN_100982b98();
  return;
}



/* Address: 0x10098fbf8 | FUN_10098fbf8 */

void FUN_10098fbf8(undefined8 param_1,undefined8 param_2)

{
  FUN_10098fc14(param_1,param_2,FUN_10098ba80);
  return;
}



/* Address: 0x10098fc04 | thunk_FUN_10098fe78 */

void thunk_FUN_10098fe78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100991a3c(0);
  FUN_10061d154(uVar2,param_2,uVar1,&PTR_PTR_100f217d0);
  return;
}



/* Address: 0x10098fc08 | FUN_10098fc08 */

void FUN_10098fc08(undefined8 param_1,undefined8 param_2)

{
  FUN_10098fc14(param_1,param_2,FUN_10098db0c);
  return;
}



/* Address: 0x10098fc14 | FUN_10098fc14 */

void FUN_10098fc14(undefined8 param_1,undefined8 param_2,code *UNRECOVERED_JUMPTABLE)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  ulong uVar2;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x00010098fc6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (param_1,param_2,unaff_x20 + (uVar2 + 0x10 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x10098fc70 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  FUN_10093cdc8();
  return;
}



/* Address: 0x10098fc74 | FUN_10098fc74 */

void FUN_10098fc74(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098ca80(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10098fc7c | FUN_10098fc7c */

void FUN_10098fc7c(void)

{
  FUN_10098fc84(0);
  return;
}



/* Address: 0x10098fc84 | FUN_10098fc84 */

void FUN_10098fc84(undefined8 param_1)

{
  if (DAT_100ff1550 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetClassDescriptor_100cc7770);
  return;
}



/* Address: 0x10098fcbc | FUN_10098fcbc */

void FUN_10098fcbc(long param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puStack_60 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  local_68 = &DAT_100c8a0b0;
  local_58 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_50 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puVar2 = &DAT_100ff0898;
  lVar1 = 0x13f;
  FUN_1000c9144(0x13f,&DAT_100ff0898,PTR_typeMetadataAccessor_100eae6c8,
                PTR_typeMetadataAccessor_100eac9c8);
  if (puVar2 < (undefined *)0x40) {
    local_48 = *(long *)(lVar1 + -8) + 0x40;
    puStack_40 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_38 = &DAT_100c8a0c8;
    puStack_30 = &DAT_100c8a0e0;
    local_28 = &DAT_100c8a0e0;
    _swift_updateClassMetadata2(param_1,0x100,9,&local_68,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10098fd94 | FUN_10098fd94 */

void FUN_10098fd94(void)

{
  FUN_100990018(0,&DAT_100ff07b0,&DAT_100ff07b8,&DAT_100c89500);
  return;
}



/* Address: 0x10098fdc4 | FUN_10098fdc4 */

void FUN_10098fdc4(void)

{
  FUN_1000c9144(0,&DAT_100ff1618,FUN_10098fdf4,PTR_typeMetadataAccessor_100eac9c8);
  return;
}



/* Address: 0x10098fdf4 | FUN_10098fdf4 */

void FUN_10098fdf4(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff1620 != 0) {
    return;
  }
  puVar1 = &DAT_100ff1628;
  FUN_1000f8b08(&DAT_100ff1628,&DAT_100c8a100);
  uVar2 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,puVar1);
  DAT_100ff1620 = uVar2;
  return;
}



/* Address: 0x10098fe08 | FUN_10098fe08 */

void FUN_10098fe08(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100ff1628;
  FUN_1000f8b08(&DAT_100ff1628,&DAT_100c8a100);
  uVar2 = 0x44000000;
  _swift_getFunctionTypeMetadata0(0x44000000,puVar1);
  DAT_100ff1620 = uVar2;
  return;
}



/* Address: 0x10098fe48 | FUN_10098fe48 */

void FUN_10098fe48(void)

{
  FUN_1000c9144(0,&DAT_100ff0950,FUN_100982e04,PTR_typeMetadataAccessor_100eac9c8);
  return;
}



/* Address: 0x10098fe78 | FUN_10098fe78 */

void FUN_10098fe78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100991a3c(0);
  FUN_10061d154(uVar2,param_2,uVar1,&PTR_PTR_100f217d0);
  return;
}



/* Address: 0x10098fec8 | thunk_FUN_10099064c */

undefined1  [16] thunk_FUN_10099064c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,&uStack_30);
  puVar1 = &DAT_100f20b68;
  _swift_allocObject(&DAT_100f20b68,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x10098fecc | thunk_FUN_1009906a8 */

void thunk_FUN_1009906a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f20b40;
  _swift_allocObject(&DAT_100f20b40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x10098fed0 | FUN_10098fed0 */

void FUN_10098fed0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1640 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68bf8,&DAT_100eec8d0);
  DAT_100ff1640 = pTVar1;
  return;
}



/* Address: 0x10098ff10 | FUN_10098ff10 */

void FUN_10098ff10(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff1650 == 0) {
    puVar1 = &DAT_100ff1638;
    FUN_1000f8b08(&DAT_100ff1638,&DAT_100c8a110);
    uVar2 = 0xff;
    FUN_10098ff88(0xff);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100ff1650 = param_1;
    }
  }
  return;
}



/* Address: 0x10098ff88 | FUN_10098ff88 */

void FUN_10098ff88(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff1658 == 0) {
    puVar1 = &DAT_100ff1660;
    FUN_1000f8b08(&DAT_100ff1660,&DAT_100c8a118);
    uVar2 = 0xff;
    FUN_100990018(0xff,&DAT_100ff1668,&DAT_100ff1670,&DAT_100c8a120);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100ff1658 = param_1;
    }
  }
  return;
}



/* Address: 0x100990018 | FUN_100990018 */

void FUN_100990018(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  if (*param_2 != 0) {
    return;
  }
  FUN_1000f8b08(param_3,param_4);
  puVar1 = &DAT_100ff07c0;
  FUN_1000f8b08(&DAT_100ff07c0,&DAT_100c89400);
  lVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar1,param_3);
  *param_2 = lVar2;
  return;
}



/* Address: 0x100990084 | FUN_100990084 */

void FUN_100990084(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098f34c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x10099008c | FUN_10099008c */

void FUN_10099008c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1678 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89b18;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89b18,&DAT_100f207d8);
  DAT_100ff1678 = pTVar1;
  return;
}



/* Address: 0x1009900cc | FUN_1009900cc */

void FUN_1009900cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098f560(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x1009900d4 | FUN_1009900d4 */

void FUN_1009900d4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10099010c | FUN_10099010c */

void FUN_10099010c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10098cdf8(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100990118 | FUN_100990118 */

void FUN_100990118(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100990128 | FUN_100990128 */

void FUN_100990128(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100990154 | FUN_100990154 */

void FUN_100990154(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098e0d8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100990164 | FUN_100990164 */

void FUN_100990164(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009901a0 | FUN_1009901a0 */

void FUN_1009901a0(void)

{
  long unaff_x20;
  
  FUN_10098e1b0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009901b4 | FUN_1009901b4 */

void FUN_1009901b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098a50c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009901c0 | FUN_1009901c0 */

void FUN_1009901c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009901ec | FUN_1009901ec */

void FUN_1009901ec(void)

{
  long unaff_x20;
  
  FUN_10098a5b4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009901f8 | FUN_1009901f8 */

void FUN_1009901f8(void)

{
  FUN_1008feafc(PTR__swift_release_100eae3e8,0x30);
  return;
}



/* Address: 0x100990208 | FUN_100990208 */

void FUN_100990208(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&PTR_PTR_100f217d0)
  ;
  return;
}



/* Address: 0x100990238 | FUN_100990238 */

void FUN_100990238(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10099025c | FUN_10099025c */

void FUN_10099025c(void)

{
  FUN_100990484(0x38);
  return;
}



/* Address: 0x100990264 | FUN_100990264 */

void FUN_100990264(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10098e348(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}


