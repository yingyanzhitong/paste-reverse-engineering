/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009bd308 | FUN_1009bd308 */

void FUN_1009bd308(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  long unaff_x20;
  
  uVar2 = *(uint *)(unaff_x20 + 8);
  if ((long)(ulong)(*(uint *)(unaff_x20 + 0xc) - uVar2) < (long)param_1) {
    FUN_1009bf288();
    _swift_allocError(&DAT_100f25738,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009bd380);
      (*pcVar3)();
    }
    uVar1 = uVar2 + (uint)param_1;
    if (CARRY4(uVar2,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009bd384);
      (*pcVar3)();
    }
    if (*(uint *)(unaff_x20 + 0xc) < uVar1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1009bd388);
      (*pcVar3)();
    }
    *(uint *)(unaff_x20 + 8) = uVar1;
  }
  return;
}



/* Address: 0x1009bd388 | FUN_1009bd388 */

void FUN_1009bd388(undefined1 *param_1)

{
  uint uVar1;
  code *pcVar2;
  long *unaff_x20;
  undefined1 auStack_58 [24];
  
  uVar1 = *(uint *)(unaff_x20 + 1);
  if (*(uint *)((long)unaff_x20 + 0xc) == uVar1) {
    FUN_1009bf288();
    _swift_allocError(&DAT_100f25738,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
  }
  else {
    _swift_beginAccess(*unaff_x20 + 0x18,auStack_58,0,0);
    if (0xfffffffe < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009bd43c);
      (*pcVar2)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1 + 1;
  }
  return;
}



/* Address: 0x1009bd43c | FUN_1009bd43c */

String FUN_1009bd43c(char *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  String SVar13;
  ulong local_70;
  undefined *local_68;
  
  uVar10 = *(ulong *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
  uVar4 = uVar10;
  if (uVar10 <= (ulong)((long)param_2 - (long)param_1)) {
    uVar4 = (long)param_2 - (long)param_1;
  }
  if (param_1 != (char *)0x0) {
    uVar10 = uVar4;
  }
  uVar4 = 0;
  FUN_1009be588(0,uVar10,0);
  if (param_1 != (char *)0x0) {
    for (; param_2 != param_1; param_1 = param_1 + 1) {
      cVar2 = *param_1;
      if (cVar2 < 0) {
        _swift_bridgeObjectRelease(uVar4);
        return (String)ZEXT816(0);
      }
      uVar10 = *(ulong *)(uVar4 + 0x10);
      uVar5 = uVar4;
      if (*(ulong *)(uVar4 + 0x18) >> 1 <= uVar10) {
        uVar5 = (ulong)(1 < *(ulong *)(uVar4 + 0x18));
        FUN_1009be588(uVar5,uVar10 + 1,1,uVar4);
      }
      *(ulong *)(uVar5 + 0x10) = uVar10 + 1;
      *(int *)(uVar5 + uVar10 * 4 + 0x20) = (int)cVar2;
      uVar4 = uVar5;
    }
  }
  lVar11 = *(long *)(uVar4 + 0x10);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar11 != 0) {
    puVar8 = (undefined1 *)0x0;
    FUN_1009be688(0,lVar11);
    puVar12 = (uint *)(uVar4 + 0x20);
    do {
      puVar6 = local_68;
      uVar1 = *puVar12;
      if (uVar1 < 0x80) {
        uVar9 = uVar1 + 1;
      }
      else {
        uVar3 = (uVar1 & 0x3f) * 0x100;
        if (uVar1 < 0x800) {
          uVar9 = (uVar1 >> 6) + uVar3 + 0x81c1;
        }
        else {
          uVar3 = (uVar3 | uVar1 >> 6 & 0x3f) * 0x100;
          uVar9 = ((uVar3 | uVar1 >> 0xc & 0x3f) << 8 | uVar1 >> 0x12) + 0x818181f1;
          if (uVar1 >> 0x10 == 0) {
            uVar9 = (uVar1 >> 0xc) + uVar3 + 0x8181e1;
          }
        }
      }
      SVar13.str = (char *)(ulong)(4 - ((uint)LZCOUNT(uVar9) >> 3));
      local_70 = (ulong)uVar9 + 0xfefefefefefeff &
                 (-1L << (((ulong)SVar13.str & 7) << 3) ^ 0xffffffffffffffffU);
      SVar13.bridgeObject = puVar8;
      SVar13 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)&local_70,SVar13);
      uVar10 = *(ulong *)(puVar6 + 0x10);
      local_68 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar10) {
        puVar8 = &DAT_00000001;
        FUN_1009be688(1 < *(ulong *)(puVar6 + 0x18),uVar10 + 1);
      }
      *(ulong *)(local_68 + 0x10) = uVar10 + 1;
      *(String *)(local_68 + uVar10 * 0x10 + 0x20) = SVar13;
      lVar11 = lVar11 + -1;
      puVar12 = puVar12 + 1;
    } while (lVar11 != 0);
  }
  puVar6 = &DAT_100ff2c28;
  FUN_1000f7830(&DAT_100ff2c28,&DAT_100c8bf40);
  puVar7 = puVar6;
  FUN_1009bf2c8();
  SVar13 = Swift::String::_init(&local_68,puVar6,puVar7);
  _swift_bridgeObjectRelease(uVar4);
  return SVar13;
}



/* Address: 0x1009bd6a8 | FUN_1009bd6a8 */

void FUN_1009bd6a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Address: 0x1009bd6f0 | FUN_1009bd6f0 */

void FUN_1009bd6f0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  *(undefined8 *)(unaff_x20 + 0x1f) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = param_1;
  *(undefined8 *)(unaff_x20 + 0x30) = param_2;
  *(undefined1 *)(unaff_x20 + 0x38) = 0;
  return;
}



/* Address: 0x1009bd708 | FUN_1009bd708 */

undefined8 FUN_1009bd708(undefined8 param_1,undefined8 *param_2)

{
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_27;
  
  local_68 = *param_2;
  uStack_60 = param_2[1];
  local_58 = *(undefined4 *)(param_2 + 2);
  local_54 = *(undefined2 *)((long)param_2 + 0x14);
  local_52 = *(undefined1 *)((long)param_2 + 0x16);
  local_27 = 0;
  _swift_retain();
  FUN_100626ce0(&local_68);
  FUN_1005e70f4(&local_68);
  return 1;
}



/* Address: 0x1009bd770 | FUN_1009bd770 */

/* WARNING: Removing unreachable block (ram,0x0001009bd7c4) */
/* WARNING: Removing unreachable block (ram,0x0001009bd804) */
/* WARNING: Removing unreachable block (ram,0x0001009bd810) */
/* WARNING: Removing unreachable block (ram,0x0001009bda18) */
/* WARNING: Removing unreachable block (ram,0x0001009be288) */
/* WARNING: Removing unreachable block (ram,0x0001009bda70) */
/* WARNING: Removing unreachable block (ram,0x0001009bdc08) */
/* WARNING: Removing unreachable block (ram,0x0001009bdb94) */
/* WARNING: Removing unreachable block (ram,0x0001009bdfbc) */
/* WARNING: Removing unreachable block (ram,0x0001009bdbb4) */
/* WARNING: Removing unreachable block (ram,0x0001009bdfcc) */
/* WARNING: Removing unreachable block (ram,0x0001009be294) */
/* WARNING: Removing unreachable block (ram,0x0001009bdfec) */
/* WARNING: Removing unreachable block (ram,0x0001009be030) */
/* WARNING: Removing unreachable block (ram,0x0001009bdbc0) */
/* WARNING: Removing unreachable block (ram,0x0001009be040) */
/* WARNING: Removing unreachable block (ram,0x0001009be088) */

undefined8 FUN_1009bd770(long param_1,undefined8 *param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long lVar10;
  long unaff_x20;
  code *pcVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined1 local_98 [24];
  undefined1 local_80 [32];
  
  if ((*(byte *)(unaff_x20 + 0x38) & 1) != 0) {
    return 1;
  }
  uVar16 = *param_2;
  lVar10 = param_2[1];
  FUN_1009bef1c(uVar16,lVar10,(ulong)*(uint7 *)(param_2 + 2));
  if (lVar10 == 0) {
    puVar14 = *(undefined **)(param_1 + 0x20);
    lVar10 = *(long *)(puVar14 + 0x38);
    uVar16 = *(undefined8 *)(puVar14 + 0x38);
    uVar15 = *(ulong *)(puVar14 + 0x30);
    uVar2 = uVar15;
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar10 + 0x10);
    _swift_unknownObjectRetain(uVar15);
    uVar3 = uVar2;
    (*pcVar13)(uVar2,lVar10);
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar13 = (code *)SoftwareBreakpoint(1,0x1009be294);
      (*pcVar13)();
    }
    *(undefined1 *)(unaff_x20 + 0x38) = 1;
    pcVar11 = *(code **)(unaff_x20 + 0x28);
    _swift_retain(param_1);
    uVar4 = 0;
    (*pcVar11)(0,0);
    lVar12 = *(long *)(puVar14 + 0x30);
    lVar5 = lVar12;
    _swift_unknownObjectRetain();
    FUN_1009bd0d8();
    _swift_release(uVar4);
    _swift_unknownObjectRelease(lVar12);
    puVar6 = &DAT_100f254f8;
    _swift_allocObject(&DAT_100f254f8,0x28,7);
    *(undefined8 *)(puVar6 + 0x18) = uVar16;
    *(ulong *)(puVar6 + 0x10) = uVar15;
    *(long *)(puVar6 + 0x20) = param_1;
    puVar7 = &DAT_100f25520;
    _swift_allocObject(&DAT_100f25520,0x20,7);
    *(code **)(puVar7 + 0x10) = thunk_FUN_1009bf11c;
    *(undefined **)(puVar7 + 0x18) = puVar6;
    puVar8 = &DAT_100f25548;
    _swift_allocObject(&DAT_100f25548,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar5;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1000386a0;
    *(undefined **)(puVar8 + 0x20) = puVar7;
    uVar3 = *(ulong *)(lVar5 + 0x20);
    lVar12 = *(long *)(lVar5 + 0x28);
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar12 + 0x10);
    _swift_retain_n(param_1,2);
    _swift_unknownObjectRetain_n(uVar15,2);
    _swift_retain_n(lVar5,2);
    _swift_retain_n(puVar7,2);
    _swift_retain(puVar6);
    uVar9 = uVar3;
    (*pcVar11)(uVar3,lVar12);
    if ((uVar9 & 1) == 0) {
      _swift_release(param_1);
      _swift_unknownObjectRelease(uVar15);
      _swift_release(puVar6);
      puVar14 = &DAT_100f25570;
      _swift_allocObject(&DAT_100f25570,0x28,7);
      *(long *)(puVar14 + 0x10) = lVar5;
      *(code **)(puVar14 + 0x18) = thunk_FUN_1008a8990;
      *(undefined **)(puVar14 + 0x20) = puVar8;
      pcVar13 = *(code **)(lVar12 + 0x18);
      _swift_retain(lVar5);
      _swift_retain(puVar8);
      (*pcVar13)(thunk_FUN_1008c1400,puVar14,uVar3,lVar12);
      _swift_release(puVar14);
      _swift_release_n(puVar7,2);
      _swift_release_n(lVar5,2);
      _swift_release(puVar8);
    }
    else {
      _swift_beginAccess(lVar5 + 0x10,local_80,0,0);
      if (*(char *)(lVar5 + 0x18) == '\x01') {
        _swift_unknownObjectRelease(uVar15);
LAB_1009be1fc:
        _swift_release(puVar6);
        _swift_release(param_1);
      }
      else {
        if (*(char *)(lVar5 + 0x18) != -1) {
          _swift_retain(param_1);
          _swift_unknownObjectRetain(uVar15);
          (*pcVar13)(uVar2,lVar10);
          if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
            pcVar13 = (code *)SoftwareBreakpoint(1,0x1009be2a0);
            (*pcVar13)();
          }
          _swift_retain(param_1);
          _swift_retain(puVar14);
          thunk_FUN_1006313ac(param_1,0,puVar14);
          _swift_release(puVar6);
          _swift_unknownObjectRelease_n(uVar15,2);
          _swift_release_n(param_1,2);
          puVar6 = puVar14;
          goto LAB_1009be1fc;
        }
        _swift_release();
        _swift_unknownObjectRelease(uVar15);
        _swift_release(puVar6);
        _swift_beginAccess(lVar5 + 0x30,local_98,0x21,0);
        FUN_10064967c(thunk_FUN_1008a8990,puVar8);
        _swift_endAccess(local_98);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release_n(puVar7,2);
      _swift_release_n(lVar5,2);
      _swift_release(puVar8);
      _swift_bridgeObjectRelease(0);
    }
    _swift_release(param_1);
    goto LAB_1009be260;
  }
  puVar14 = *(undefined **)(param_1 + 0x20);
  lVar12 = *(long *)(puVar14 + 0x38);
  uVar4 = *(undefined8 *)(puVar14 + 0x38);
  uVar15 = *(ulong *)(puVar14 + 0x30);
  uVar2 = uVar15;
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar12 + 0x10);
  _swift_unknownObjectRetain(uVar15);
  uVar3 = uVar2;
  (*pcVar13)(uVar2,lVar12);
  if ((uVar3 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1009be290);
    (*pcVar13)();
  }
  *(undefined1 *)(unaff_x20 + 0x38) = 1;
  pcVar11 = *(code **)(unaff_x20 + 0x28);
  _swift_retain(param_1);
  (*pcVar11)(uVar16,lVar10);
  lVar5 = *(long *)(puVar14 + 0x30);
  lVar1 = lVar5;
  _swift_unknownObjectRetain();
  FUN_1009bd0d8();
  _swift_release(uVar16);
  _swift_unknownObjectRelease(lVar5);
  puVar6 = &DAT_100f25598;
  _swift_allocObject(&DAT_100f25598,0x28,7);
  *(undefined8 *)(puVar6 + 0x18) = uVar4;
  *(ulong *)(puVar6 + 0x10) = uVar15;
  *(long *)(puVar6 + 0x20) = param_1;
  puVar7 = &DAT_100f255c0;
  _swift_allocObject(&DAT_100f255c0,0x20,7);
  *(code **)(puVar7 + 0x10) = thunk_FUN_1009bf11c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  puVar8 = &DAT_100f255e8;
  _swift_allocObject(&DAT_100f255e8,0x28,7);
  *(long *)(puVar8 + 0x10) = lVar1;
  *(code **)(puVar8 + 0x18) = thunk_FUN_1000386a0;
  *(undefined **)(puVar8 + 0x20) = puVar7;
  uVar3 = *(ulong *)(lVar1 + 0x20);
  lVar5 = *(long *)(lVar1 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar5 + 0x10);
  _swift_unknownObjectRetain_n(uVar15,2);
  _swift_retain_n(param_1,2);
  _swift_retain_n(lVar1,2);
  _swift_retain_n(puVar7,2);
  _swift_retain(puVar6);
  uVar9 = uVar3;
  (*pcVar11)(uVar3,lVar5);
  if ((uVar9 & 1) == 0) {
    _swift_release(param_1);
    _swift_unknownObjectRelease(uVar15);
    _swift_release(puVar6);
    puVar14 = &DAT_100f25610;
    _swift_allocObject(&DAT_100f25610,0x28,7);
    *(long *)(puVar14 + 0x10) = lVar1;
    *(code **)(puVar14 + 0x18) = thunk_FUN_1008a8990;
    *(undefined **)(puVar14 + 0x20) = puVar8;
    pcVar13 = *(code **)(lVar5 + 0x18);
    _swift_retain(lVar1);
    _swift_retain(puVar8);
    (*pcVar13)(thunk_FUN_1008c1400,puVar14,uVar3,lVar5);
    _swift_release(puVar14);
    _swift_release_n(puVar7,2);
    _swift_release_n(lVar1,2);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(lVar1 + 0x10,local_80,0,0);
    if (*(char *)(lVar1 + 0x18) == '\x01') {
      _swift_unknownObjectRelease(uVar15);
LAB_1009be11c:
      _swift_release(puVar6);
      _swift_release(param_1);
    }
    else {
      if (*(char *)(lVar1 + 0x18) != -1) {
        _swift_unknownObjectRetain(uVar15);
        _swift_retain(param_1);
        (*pcVar13)(uVar2,lVar12);
        if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar13 = (code *)SoftwareBreakpoint(1,0x1009be29c);
          (*pcVar13)();
        }
        _swift_retain(param_1);
        _swift_retain(puVar14);
        thunk_FUN_1006313ac(param_1,0,puVar14);
        _swift_release(puVar6);
        _swift_unknownObjectRelease_n(uVar15,2);
        _swift_release_n(param_1,2);
        puVar6 = puVar14;
        goto LAB_1009be11c;
      }
      _swift_release(param_1);
      _swift_unknownObjectRelease(uVar15);
      _swift_release(puVar6);
      _swift_beginAccess(lVar1 + 0x30,local_98,0x21,0);
      FUN_10064967c(thunk_FUN_1008a8990,puVar8);
      _swift_endAccess(local_98);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release_n(puVar7,2);
    _swift_release_n(lVar1,2);
    _swift_release(puVar8);
    _swift_bridgeObjectRelease(0);
  }
  _swift_bridgeObjectRelease(lVar10);
  _swift_release(param_1);
LAB_1009be260:
  _swift_unknownObjectRelease(uVar15);
  return 1;
}



/* Address: 0x1009be2a0 | FUN_1009be2a0 */

void FUN_1009be2a0(ulong param_1,long param_2,long param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))();
  if ((param_1 & 1) != 0) {
    uVar2 = *(undefined8 *)(param_3 + 0x20);
    _swift_retain(param_3);
    _swift_retain(uVar2);
    thunk_FUN_1006313ac(param_3,0,uVar2);
    _swift_release(param_3);
    _swift_release(uVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009be314);
  (*pcVar1)();
}



/* Address: 0x1009be314 | FUN_1009be314 */

void FUN_1009be314(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1009be338 | FUN_1009be338 */

void FUN_1009be338(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009be364 | FUN_1009be364 */

undefined8 FUN_1009be364(void)

{
  FUN_1009bd770();
  return 1;
}



/* Address: 0x1009be390 | FUN_1009be390 */

void FUN_1009be390(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_1009be490();
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f257a8;
  _swift_allocObject(&DAT_100f257a8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(FUN_1008777d0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009be490 | FUN_1009be490 */

void FUN_1009be490(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008d06a0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f257d0;
  _swift_allocObject(&DAT_100f257d0,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar6)(FUN_1008d418c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1009be588 | FUN_1009be588 */

undefined * FUN_1009be588(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009be688);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff2c40;
    FUN_1000f7830(&DAT_100ff2c40,&DAT_100c8bf50);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x1d;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 2) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 2);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 4 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 2);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1009be688 | FUN_1009be688 */

void FUN_1009be688(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1009be6a4();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1009be6a4 | FUN_1009be6a4 */

undefined * FUN_1009be6a4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009be7ac);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff2c38;
    FUN_1000f7830(&DAT_100ff2c38,&DAT_100c8bf48);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Character_100eabf18);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1009be7ac | FUN_1009be7ac */

void FUN_1009be7ac(undefined8 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined1 uVar7;
  
  uVar2 = *(uint *)((long)param_1 + 0xc);
  if (uVar2 - *(int *)(param_1 + 1) < 5) {
    uVar7 = 2;
  }
  else {
    puVar6 = param_1;
    FUN_10066431c();
    if (((uint)puVar6 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8c4);
      (*pcVar4)();
    }
    if (((uint)puVar6 & 0xff) == 0x16) {
      FUN_10066431c();
      if (((uint)puVar6 & 0xff00) == 0x100) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8c8);
        (*pcVar4)();
      }
      if (((uint)puVar6 & 0xff) == 3) {
        uVar3 = *(uint *)(param_1 + 1);
        uVar1 = uVar3 + 1;
        if (0xfffffffe < uVar3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8b8);
          (*pcVar4)();
        }
        if (uVar2 < uVar1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8bc);
          (*pcVar4)();
        }
        uVar5 = uVar1;
        FUN_100617ee0(uVar1,0,*param_1,CONCAT44(uVar2,uVar1),(ulong)*(uint7 *)(param_1 + 2));
        if ((uVar5 & 0xff0000) == 0x10000) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8cc);
          (*pcVar4)();
        }
        if (uVar1 < 0xfffffffe) {
          *(uint *)(param_1 + 1) = uVar3 + 3;
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1009be8c0);
        (*pcVar4)();
      }
    }
    uVar7 = 1;
    param_1 = puVar6;
  }
  FUN_1009bf288();
  _swift_allocError(&DAT_100f25738,param_1,0,0);
  *(undefined1 *)param_1 = uVar7;
  _swift_willThrow();
  return;
}



/* Address: 0x1009be8cc | FUN_1009be8cc */

void FUN_1009be8cc(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  
  uVar1 = *(uint *)(param_1 + 1);
  puVar3 = (undefined8 *)(ulong)uVar1;
  if (3 < *(int *)((long)param_1 + 0xc) - uVar1) {
    FUN_100617e10(puVar3,0,*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
    if (((ulong)puVar3 & 0xff00000000) == 0x100000000) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009be99c);
      (*pcVar2)();
    }
    if (0xfffffffb < uVar1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009be998);
      (*pcVar2)();
    }
    *(uint *)(param_1 + 1) = uVar1 + 4;
    param_1 = puVar3;
    if (((ulong)puVar3 & 0xff000000) == 0x1000000) {
      return;
    }
  }
  FUN_1009bf288();
  _swift_allocError(&DAT_100f25738,param_1,0,0);
  *(undefined1 *)param_1 = 1;
  _swift_willThrow();
  return;
}



/* Address: 0x1009be99c | FUN_1009be99c */

void FUN_1009be99c(undefined8 *param_1)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x21;
  undefined1 *puVar4;
  
  uVar3 = 0x22;
  FUN_1009bd308(0x22);
  if (unaff_x21 == 0) {
    FUN_1009bd388();
    FUN_1009bd308(uVar3 & 0xff);
    uVar1 = *(uint *)(param_1 + 1);
    puVar4 = (undefined1 *)(ulong)uVar1;
    FUN_100617ee0(puVar4,0,*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
    if (((uint)puVar4 & 0xff0000) != 0x10000) {
      if (0xfffffffd < uVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009bead8);
        (*pcVar2)();
      }
      *(uint *)(param_1 + 1) = uVar1 + 2;
      uVar3 = (ulong)((uint)puVar4 & 0xffff);
      FUN_1009bd308(uVar3);
      FUN_1009bd388();
      FUN_1009bd308(uVar3 & 0xff);
      uVar1 = *(uint *)(param_1 + 1);
      puVar4 = (undefined1 *)(ulong)uVar1;
      FUN_100617ee0(puVar4,0,*param_1,param_1[1],(ulong)*(uint7 *)(param_1 + 2));
      if (((uint)puVar4 & 0xff0000) != 0x10000) {
        if (uVar1 < 0xfffffffe) {
          *(uint *)(param_1 + 1) = uVar1 + 2;
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009beadc);
        (*pcVar2)();
      }
    }
    FUN_1009bf288();
    _swift_allocError(&DAT_100f25738,puVar4,0,0);
    *puVar4 = 0;
    _swift_willThrow();
  }
  return;
}



/* Address: 0x1009beadc | FUN_1009beadc */

void FUN_1009beadc(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  ushort uVar5;
  code *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 uVar13;
  undefined1 *puVar14;
  uint uVar15;
  ulong uVar16;
  uint uVar17;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar16 = *param_1;
  uVar15 = (uint)param_1[1];
  puVar7 = (undefined1 *)(ulong)uVar15;
  iVar3 = *(int *)((long)param_1 + 0xc);
  FUN_100617ee0(puVar7,0,uVar16,param_1[1],(ulong)(uint7)param_1[2]);
  if (((uint)puVar7 & 0xff0000) != 0x10000) {
    uVar1 = uVar15 + 2;
    puVar8 = (undefined1 *)(ulong)uVar1;
    if (0xfffffffd < uVar15) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed44);
      (*pcVar6)();
    }
    *(uint *)(param_1 + 1) = uVar1;
    uVar15 = (uint)puVar7 & 0xffff;
    uVar9 = (ulong)uVar15;
    puVar7 = puVar8;
    if (uVar15 <= iVar3 - uVar1) {
      uVar12 = uVar16;
      thunk_FUN_10061160c();
      if (puVar8 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed4c);
        (*pcVar6)();
      }
      _swift_release(uVar16);
      *param_1 = (ulong)puVar8;
      uVar16 = uVar9 >> 0x20;
      uVar15 = (uint)(uVar9 >> 0x20);
      *(uint *)(param_1 + 1) = (uint)uVar9;
      *(uint *)((long)param_1 + 0xc) = uVar15;
      *(int *)(param_1 + 2) = (int)uVar12;
      *(short *)((long)param_1 + 0x14) = (short)(uVar12 >> 0x20);
      *(char *)((long)param_1 + 0x16) = (char)(uVar12 >> 0x30);
      puVar7 = puVar8 + 0x18;
      _swift_beginAccess(puVar7,auStack_70,0,0);
      if ((uint)uVar9 != uVar15) {
        uVar12 = uVar12 >> 0x30 & 0xff | (uVar12 >> 0x20 & 0xffff) << 8;
        do {
          uVar17 = (uint)uVar9;
          uVar1 = uVar17 + 1;
          if (0xfffffffe < uVar17) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed34);
            (*pcVar6)();
          }
          lVar10 = *(long *)(puVar8 + 0x18) + uVar12;
          cVar4 = *(char *)(lVar10 + (uVar9 & 0xffffffff));
          *(uint *)(param_1 + 1) = uVar1;
          if (uVar15 - uVar1 < 2) goto LAB_1009beb74;
          uVar17 = uVar17 + 3;
          if (0xfffffffd < uVar1) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed38);
            (*pcVar6)();
          }
          uVar5 = *(ushort *)(lVar10 + (ulong)uVar1);
          uVar1 = (uint)(uVar5 >> 8) | (uVar5 & 0xff00ff) << 8;
          puVar14 = (undefined1 *)(ulong)uVar1;
          *(uint *)(param_1 + 1) = uVar17;
          if (cVar4 == '\0') {
            if (puVar14 <= (undefined1 *)(uVar16 - uVar17)) {
              lVar11 = *(long *)(puVar8 + 0x18) + uVar12;
              lVar10 = lVar11 + (ulong)uVar17;
              lVar11 = lVar11 + uVar16;
              FUN_100927c2c();
              if (lVar11 == 0) {
                lVar11 = 0;
                puVar14 = (undefined1 *)0x0;
              }
              else {
                puVar14 = puVar14 + lVar11;
                lVar11 = lVar11 + lVar10;
              }
              FUN_1009bd43c();
              if (lVar11 != 0) break;
            }
            FUN_1009bf288();
            _swift_allocError(&DAT_100f25738,puVar14,0,0);
            uVar13 = 1;
            goto LAB_1009beb98;
          }
          if (uVar15 - uVar17 < uVar1) goto LAB_1009beb74;
          uVar2 = uVar17 + uVar1;
          uVar9 = (ulong)uVar2;
          if (CARRY4(uVar17,uVar1)) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed3c);
            (*pcVar6)();
          }
          if (uVar15 < uVar2) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1009bed40);
            (*pcVar6)();
          }
          *(uint *)(param_1 + 1) = uVar2;
        } while (uVar2 != uVar15);
      }
      goto LAB_1009beba4;
    }
  }
LAB_1009beb74:
  FUN_1009bf288();
  _swift_allocError(&DAT_100f25738,puVar7,0,0);
  uVar13 = 0;
  puVar14 = puVar7;
LAB_1009beb98:
  *puVar14 = uVar13;
  _swift_willThrow();
LAB_1009beba4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1009bed4c | FUN_1009bed4c */

void FUN_1009bed4c(long *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  short sVar7;
  ushort uVar8;
  code *pcVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = *(uint *)(param_1 + 1);
  uVar4 = *(uint *)((long)param_1 + 0xc);
  do {
    if (uVar4 - uVar3 < 4) {
LAB_1009beecc:
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
        return;
      }
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    lVar13 = *param_1;
    uVar6 = *(undefined2 *)((long)param_1 + 0x14);
    uVar5 = *(undefined1 *)((long)param_1 + 0x16);
    puVar10 = (undefined1 *)(lVar13 + 0x18);
    _swift_beginAccess(puVar10,auStack_70,0,0);
    uVar1 = uVar3 + 2;
    if (0xfffffffd < uVar3) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009bef08);
      (*pcVar9)();
    }
    uVar12 = (ulong)CONCAT21(uVar6,uVar5);
    sVar7 = *(short *)(*(long *)(lVar13 + 0x18) + uVar12 + (ulong)uVar3);
    *(uint *)(param_1 + 1) = uVar1;
    if (uVar4 - uVar1 < 2) {
LAB_1009bee34:
      FUN_1009bf288();
      _swift_allocError(&DAT_100f25738,puVar10,0,0);
      *puVar10 = 0;
      _swift_willThrow();
      goto LAB_1009beecc;
    }
    uVar2 = uVar3 + 4;
    puVar10 = (undefined1 *)(ulong)uVar2;
    if (0xfffffffd < uVar1) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009bef0c);
      (*pcVar9)();
    }
    uVar8 = *(ushort *)(*(long *)(lVar13 + 0x18) + uVar12 + (ulong)uVar1);
    uVar1 = (uint)(uVar8 >> 8) | (uVar8 & 0xff00ff) << 8;
    uVar12 = (ulong)uVar1;
    *(uint *)(param_1 + 1) = uVar2;
    if (uVar4 - uVar2 < uVar1) goto LAB_1009bee34;
    if (sVar7 == 0) {
      lVar11 = lVar13;
      thunk_FUN_10061160c();
      if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1009bef1c);
        (*pcVar9)();
      }
      _swift_release(lVar13);
      *param_1 = (long)puVar10;
      *(int *)(param_1 + 1) = (int)uVar12;
      *(int *)((long)param_1 + 0xc) = (int)(uVar12 >> 0x20);
      *(int *)(param_1 + 2) = (int)lVar11;
      *(short *)((long)param_1 + 0x14) = (short)((ulong)lVar11 >> 0x20);
      *(char *)((long)param_1 + 0x16) = (char)((ulong)lVar11 >> 0x30);
      FUN_1009beadc(param_1);
      goto LAB_1009beecc;
    }
    uVar3 = uVar2 + uVar1;
    if (CARRY4(uVar2,uVar1)) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009bef10);
      (*pcVar9)();
    }
    if (uVar4 < uVar3) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x1009bef14);
      (*pcVar9)();
    }
    *(uint *)(param_1 + 1) = uVar3;
  } while( true );
}



/* Address: 0x1009bef1c | FUN_1009bef1c */

undefined1  [16] FUN_1009bef1c(undefined8 ***param_1,undefined8 ***param_2,undefined8 ***param_3)

{
  code *pcVar1;
  undefined8 ***pppuVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  int iVar5;
  long unaff_x21;
  undefined8 ***pppuVar6;
  undefined1 auVar7 [16];
  undefined8 **local_58;
  undefined8 **local_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_48 = SUB84(param_3,0);
  local_42 = (undefined1)((ulong)param_3 >> 0x30);
  local_44 = (undefined2)((ulong)param_3 >> 0x20);
  pppuVar2 = &local_58;
  local_58 = param_1;
  local_50 = param_2;
  FUN_1009be7ac();
  if (unaff_x21 == 0) {
    pppuVar6 = (undefined8 ***)((ulong)local_50 & 0xffffffff);
    if ((long)(ulong)(uint)((int)((ulong)param_2 >> 0x20) - (int)local_50) < (long)pppuVar2) {
      FUN_1009bf288();
      _swift_allocError(&DAT_100f25738,pppuVar2,0,0);
      *(undefined1 *)pppuVar2 = 2;
      _swift_willThrow();
      goto LAB_1009befac;
    }
    _swift_retain(param_1);
    pppuVar4 = param_1;
    thunk_FUN_10061160c();
    if (pppuVar6 == (undefined8 ***)0x0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bf110);
      (*pcVar1)();
    }
    param_3 = pppuVar2;
    _swift_release(param_1);
    param_1 = (undefined8 ***)((ulong)pppuVar2 >> 0x20);
    iVar5 = (int)((ulong)pppuVar2 >> 0x20);
    local_48 = SUB84(pppuVar4,0);
    local_44 = (undefined2)((ulong)pppuVar4 >> 0x20);
    local_42 = (undefined1)((ulong)pppuVar4 >> 0x30);
    pppuVar3 = &local_58;
    local_58 = pppuVar6;
    local_50 = pppuVar2;
    FUN_1009be8cc();
    if (pppuVar3 == (undefined8 ***)(ulong)(uint)(iVar5 - (int)local_50)) {
      pppuVar2 = &local_58;
      FUN_1009be99c();
      if (pppuVar2 == (undefined8 ***)(ulong)(uint)(iVar5 - (int)local_50)) {
        param_1 = &local_58;
        FUN_1009bed4c(param_1);
        _swift_release(local_58);
        goto LAB_1009befbc;
      }
      FUN_1009bf288();
      _swift_allocError(&DAT_100f25738,pppuVar2,0,0);
      *(undefined1 *)pppuVar2 = 0;
    }
    else {
      FUN_1009bf288();
      _swift_allocError(&DAT_100f25738,pppuVar3,0,0);
      *(undefined1 *)pppuVar3 = 1;
    }
    _swift_willThrow();
    param_3 = pppuVar4;
  }
  else {
LAB_1009befac:
    _swift_retain(param_1);
  }
  _swift_release(local_58);
LAB_1009befbc:
  auVar7._8_8_ = param_3;
  auVar7._0_8_ = param_1;
  return auVar7;
}



/* Address: 0x1009bf110 | FUN_1009bf110 */

void FUN_1009bf110(void)

{
  FUN_100894fcc(PTR__swift_unknownObjectRelease_100eae458);
  return;
}



/* Address: 0x1009bf11c | FUN_1009bf11c */

void FUN_1009bf11c(void)

{
  long unaff_x20;
  
  FUN_1009be2a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009bf128 | FUN_1009bf128 */

void FUN_1009bf128(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bf14c | FUN_1009bf14c */

void FUN_1009bf14c(void)

{
  FUN_100894fcc(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1009bf158 | FUN_1009bf158 */

undefined1  [16] FUN_1009bf158(void)

{
  return ZEXT816(0x100f256a8);
}



/* Address: 0x1009bf168 | FUN_1009bf168 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1009bf168(void)

{
  return ZEXT816(0x100ff2ba8);
}



/* Address: 0x1009bf188 | FUN_1009bf188 */

void FUN_1009bf188(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1009bf194 | FUN_1009bf194 */

void FUN_1009bf194(void)

{
  return;
}



/* Address: 0x1009bf198 | FUN_1009bf198 */

undefined1  [16] FUN_1009bf198(void)

{
  return ZEXT816(0x100f25738);
}



/* Address: 0x1009bf1a8 | thunk_FUN_1009bf1ac */

void thunk_FUN_1009bf1ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2c18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8bf14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8bf14,&DAT_100f25738);
  DAT_100ff2c18 = pTVar1;
  return;
}



/* Address: 0x1009bf1ac | FUN_1009bf1ac */

void FUN_1009bf1ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2c18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8bf14;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8bf14,&DAT_100f25738);
  DAT_100ff2c18 = pTVar1;
  return;
}



/* Address: 0x1009bf1ec | FUN_1009bf1ec */

void FUN_1009bf1ec(undefined8 *param_1)

{
  FUN_1009be390(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x1009bf200 | FUN_1009bf200 */

void FUN_1009bf200(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bf22c | FUN_1009bf22c */

void FUN_1009bf22c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bf258 | FUN_1009bf258 */

void FUN_1009bf258(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_1002ec258(*(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bf288 | FUN_1009bf288 */

void FUN_1009bf288(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff2c20 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8be94;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8be94,&DAT_100f25738);
  DAT_100ff2c20 = pTVar1;
  return;
}



/* Address: 0x1009bf2c8 | FUN_1009bf2c8 */

void FUN_1009bf2c8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100ff2c30 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100ff2c28;
  FUN_1000f8b08(&DAT_100ff2c28,&DAT_100c8bf40);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100ff2c30 = puVar2;
  return;
}



/* Address: 0x1009bf318 | thunk_FUN_1009bf128 */

void thunk_FUN_1009bf128(void)

{
  FUN_1009bf128();
  return;
}



/* Address: 0x1009bf31c | thunk_FUN_1009bf128 */

void thunk_FUN_1009bf128(void)

{
  FUN_1009bf128();
  return;
}



/* Address: 0x1009bf320 | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf324 | thunk_FUN_1009bf110 */

void thunk_FUN_1009bf110(void)

{
  FUN_1009bf110();
  return;
}



/* Address: 0x1009bf328 | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf32c | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf330 | thunk_FUN_1009bf110 */

void thunk_FUN_1009bf110(void)

{
  FUN_1009bf110();
  return;
}



/* Address: 0x1009bf334 | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf338 | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf33c | thunk_FUN_1009bf14c */

void thunk_FUN_1009bf14c(void)

{
  FUN_1009bf14c();
  return;
}



/* Address: 0x1009bf340 | thunk_FUN_1009bf11c */

void thunk_FUN_1009bf11c(void)

{
  long unaff_x20;
  
  FUN_1009be2a0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009bf344 | thunk_FUN_1009bf35c */

undefined8
thunk_FUN_1009bf35c(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined1 *param_4)

{
  bool bVar1;
  
  if (param_2.unknown == &DAT_00000001) {
    if (param_4 == &DAT_00000001) {
      return 1;
    }
  }
  else if (param_4 != &DAT_00000001) {
    if (param_2.unknown == (undefined *)0x0) {
      if (param_4 == (undefined1 *)0x0) {
        return 1;
      }
    }
    else if (param_4 != (undefined1 *)0x0) {
      if ((param_1.unknown == param_3) && (param_2.unknown == param_4)) {
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1009bf348 | FUN_1009bf348 */

void FUN_1009bf348(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1009bf35c(*param_1,param_1[1],*param_2,param_2[1]);
  return;
}



/* Address: 0x1009bf35c | FUN_1009bf35c */

undefined8
FUN_1009bf35c(_StringGuts param_1,_StringGuts param_2,undefined *param_3,undefined1 *param_4)

{
  bool bVar1;
  
  if (param_2.unknown == &DAT_00000001) {
    if (param_4 == &DAT_00000001) {
      return 1;
    }
  }
  else if (param_4 != &DAT_00000001) {
    if (param_2.unknown == (undefined *)0x0) {
      if (param_4 == (undefined1 *)0x0) {
        return 1;
      }
    }
    else if (param_4 != (undefined1 *)0x0) {
      if ((param_1.unknown == param_3) && (param_2.unknown == param_4)) {
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_1,param_2,(_StringComparisonResult)(__int8)param_3);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x1009bf3d0 | thunk_FUN_1009bf3f4 */

undefined8 * thunk_FUN_1009bf3f4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1009bf3d4 | FUN_1009bf3d4 */

void FUN_1009bf3d4(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    return;
  }
  _swift_bridgeObjectRelease();
  return;
}



/* Address: 0x1009bf3f4 | FUN_1009bf3f4 */

undefined8 * FUN_1009bf3f4(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  uVar2 = param_2[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if (-1 < (int)uVar1 + -1) {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
    return param_1;
  }
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x1009bf448 | FUN_1009bf448 */

undefined8 * FUN_1009bf448(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  int iVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar5 = param_1[1];
  uVar1 = uVar5;
  if (0xfffffffe < uVar5) {
    uVar1 = 0xffffffff;
  }
  uVar4 = param_2[1];
  if (0xfffffffe < uVar4) {
    uVar4 = 0xffffffff;
  }
  iVar2 = (int)uVar4 + -1;
  if ((int)uVar1 + -1 < 0) {
    if (iVar2 < 0) {
      *param_1 = *param_2;
      uVar3 = param_2[1];
      param_1[1] = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRelease(uVar5);
    }
    else {
      _swift_bridgeObjectRelease(uVar5);
      uVar3 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar3;
    }
  }
  else if (iVar2 < 0) {
    *param_1 = *param_2;
    uVar3 = param_2[1];
    param_1[1] = uVar3;
    _swift_bridgeObjectRetain(uVar3);
  }
  else {
    uVar3 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar3;
  }
  return param_1;
}



/* Address: 0x1009bf500 | FUN_1009bf500 */

undefined8 * FUN_1009bf500(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  
  uVar2 = param_1[1];
  uVar1 = uVar2;
  if (0xfffffffe < uVar2) {
    uVar1 = 0xffffffff;
  }
  if ((int)uVar1 + -1 < 0) {
    uVar3 = param_2[1];
    uVar1 = uVar3;
    if (0xfffffffe < uVar3) {
      uVar1 = 0xffffffff;
    }
    if ((int)uVar1 + -1 < 0) {
      *param_1 = *param_2;
      param_1[1] = uVar3;
      _swift_bridgeObjectRelease(uVar2);
    }
    else {
      _swift_bridgeObjectRelease(uVar2);
      uVar4 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar4;
    }
  }
  else {
    uVar4 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar4;
  }
  return param_1;
}



/* Address: 0x1009bf588 | FUN_1009bf588 */

uint FUN_1009bf588(int *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffd < param_2) && ((char)param_1[4] != '\0')) {
    return *param_1 + 0x7ffffffe;
  }
  uVar3 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar3) {
    uVar3 = 0xffffffff;
  }
  uVar2 = (int)uVar3 - 1;
  if (0x7fffffff < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = 0;
  if (1 < uVar2 + 1) {
    uVar1 = uVar2;
  }
  return uVar1;
}



/* Address: 0x1009bf5e4 | FUN_1009bf5e4 */

int FUN_1009bf5e4(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1009bf608 | FUN_1009bf608 */

void FUN_1009bf608(ulong *param_1,uint param_2)

{
  if (param_2 < 0x7fffffff) {
    if (param_2 != 0) {
      param_1[1] = (ulong)param_2;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 + 0x80000001);
    param_1[1] = 0;
  }
  return;
}



/* Address: 0x1009bf634 | FUN_1009bf634 */

undefined1  [16] FUN_1009bf634(void)

{
  return ZEXT816(0x100f258d0);
}



/* Address: 0x1009bf644 | thunk_FUN_1009bf3f4 */

void thunk_FUN_1009bf3f4(void)

{
  thunk_FUN_1009bf3f4();
  return;
}



/* Address: 0x1009bf648 | FUN_1009bf648 */

void FUN_1009bf648(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_2 + -8) + 0x40);
  (**(code **)(*(long *)(param_2 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_1009bf6c4(param_1,&stack0xffffffffffffffc0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,
                param_3);
  return;
}


