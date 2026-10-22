/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100307754 | FUN_100307754 */

void FUN_100307754(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100307e20();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100307770 | FUN_100307770 */

void FUN_100307770(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100307f3c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10030778c | FUN_10030778c */

void FUN_10030778c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100308044();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003077a8 | FUN_1003077a8 */

void FUN_1003077a8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003082b8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003077dc | FUN_1003077dc */

void FUN_1003077dc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100308188();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1003077f8 | FUN_1003077f8 */

void FUN_1003077f8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1003082b8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10030782c | FUN_10030782c */

undefined * FUN_10030782c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003079c0);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar5 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar5 = &DAT_100fc1b20;
    FUN_1000037f0(&DAT_100fc1b20,&DAT_100c3fbb0);
    puVar6 = &DAT_100fc1a40;
    FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
    lVar11 = *(long *)(*(long *)(puVar6 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar5,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar5;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003079b8);
      (*pcVar4)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1003079bc);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar11 != 0) {
      lVar3 = lVar9 / lVar11;
    }
    *(ulong *)(puVar5 + 0x10) = uVar10;
    *(long *)(puVar5 + 0x18) = lVar3 << 1;
  }
  puVar6 = &DAT_100fc1a40;
  FUN_1000037f0(&DAT_100fc1a40,&DAT_100c40660);
  uVar7 = (ulong)*(byte *)(*(long *)(puVar6 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar5 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar10,puVar6);
  }
  else {
    if ((puVar5 < param_4) || (puVar2 + *(long *)(*(long *)(puVar6 + -8) + 0x48) * uVar10 <= puVar1)
       ) {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar10);
    }
    else if (puVar5 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar5;
}



/* Address: 0x1003079c0 | FUN_1003079c0 */

undefined * FUN_1003079c0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307ac8);
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
    puVar3 = &DAT_100fc1bf0;
    FUN_1000037f0(&DAT_100fc1bf0,&DAT_100c40ad0);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
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



/* Address: 0x100307ac8 | FUN_100307ac8 */

void FUN_100307ac8(void)

{
  FUN_1003082b8();
  return;
}



/* Address: 0x100307ae4 | FUN_100307ae4 */

undefined * FUN_100307ae4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307be4);
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
    puVar3 = &DAT_100fbe6d0;
    FUN_1000037f0(&DAT_100fbe6d0,&DAT_100c407e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100307be4 | FUN_100307be4 */

undefined * FUN_100307be4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307cfc);
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
    puVar3 = &DAT_100fbe6c0;
    FUN_1000037f0(&DAT_100fbe6c0,&DAT_100c407d0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ecada0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100307cfc | FUN_100307cfc */

undefined * FUN_100307cfc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307e20);
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
    puVar3 = &DAT_100fbe6b8;
    FUN_1000037f0(&DAT_100fbe6b8,&DAT_100c407c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x70) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ecb7a0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x70 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x70);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100307e20 | FUN_100307e20 */

undefined * FUN_100307e20(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100307f3c);
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
    puVar3 = &DAT_100fbe6b0;
    FUN_1000037f0(&DAT_100fbe6b0,&DAT_100c407c0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x50) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ecb9c0);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x50 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x50);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100307f3c | FUN_100307f3c */

undefined * FUN_100307f3c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100308044);
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
    puVar3 = &DAT_100fbe5f8;
    FUN_1000037f0(&DAT_100fbe5f8,&DAT_100c406f8);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ecc2b0);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100308044 | FUN_100308044 */

undefined * FUN_100308044(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100308188);
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
    puVar3 = &DAT_100fbe5e0;
    FUN_1000037f0(&DAT_100fbe5e0,&DAT_100c406e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fbe5e8;
    FUN_1000037f0(&DAT_100fbe5e8,&DAT_100c406e8);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x28 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x28);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100308188 | FUN_100308188 */

undefined * FUN_100308188(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1003082b8);
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
    puVar3 = &DAT_100fbe608;
    FUN_1000037f0(&DAT_100fbe608,&DAT_100c40710);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100fbe610;
    FUN_1000037f0(&DAT_100fbe610,&DAT_100c40718);
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar7 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar7 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x1003082b8 | FUN_1003082b8 */

undefined *
FUN_1003082b8(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,undefined *param_5,
             undefined8 param_6,code *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100308430);
        (*pcVar4)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar9 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar9) {
    uVar7 = uVar9;
  }
  puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    FUN_1000037f0(param_5,param_6);
    lVar5 = 0;
    (*param_7)();
    lVar10 = *(long *)(*(long *)(lVar5 + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
    uVar11 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(param_5,uVar11 + lVar10 * uVar7,uVar8 | 7);
    puVar6 = param_5;
    _malloc_size();
    if (lVar10 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100308428);
      (*pcVar4)();
    }
    lVar5 = (long)puVar6 - uVar11;
    if (lVar5 == -0x8000000000000000 && lVar10 == -1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10030842c);
      (*pcVar4)();
    }
    lVar3 = 0;
    if (lVar10 != 0) {
      lVar3 = lVar5 / lVar10;
    }
    *(ulong *)(param_5 + 0x10) = uVar9;
    *(long *)(param_5 + 0x18) = lVar3 << 1;
    puVar6 = param_5;
  }
  lVar5 = 0;
  (*param_7)();
  uVar7 = (ulong)*(byte *)(*(long *)(lVar5 + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar1 = puVar6 + uVar7;
  puVar2 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar2,uVar9,lVar5);
  }
  else {
    if ((puVar6 < param_4) || (puVar2 + *(long *)(*(long *)(lVar5 + -8) + 0x48) * uVar9 <= puVar1))
    {
      _swift_arrayInitWithTakeFrontToBack(puVar1,puVar2,uVar9);
    }
    else if (puVar6 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar1,puVar2,uVar9);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar6;
}



/* Address: 0x100308430 | FUN_100308430 */

void FUN_100308430(void)

{
  FUN_1003088ac(FUN_100304bd4);
  return;
}



/* Address: 0x10030844c | FUN_10030844c */

void FUN_10030844c(void)

{
  long unaff_x20;
  
  FUN_10035e614(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100308464 | FUN_100308464 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100308464(void)

{
  undefined *puVar1;
  
  if (DAT_100fc0660 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSManagedObject;
  _swift_getObjCClassMetadata();
  DAT_100fc0660 = puVar1;
  return;
}



/* Address: 0x1003084a8 | FUN_1003084a8 */

void FUN_1003084a8(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if (DAT_100fbe5d0 != (undefined *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100308464(0xff);
  puVar2 = PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0;
  _swift_getWitnessTable(PTR_ObjectiveC____C__NSObject_>Swift__Hashable_100eae8d0,uVar1);
  DAT_100fbe5d0 = puVar2;
  return;
}



/* Address: 0x1003084ec | FUN_1003084ec */

void FUN_1003084ec(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003084fc | FUN_1003084fc */

void FUN_1003084fc(void)

{
  long unaff_x20;
  
  FUN_1003027e0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100308508 | FUN_100308508 */

void FUN_100308508(long param_1,long param_2)

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



/* Address: 0x10030851c | FUN_10030851c */

void FUN_10030851c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100308524 | FUN_100308524 */

void FUN_100308524(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRetain();
    return;
  }
  return;
}



/* Address: 0x100308538 | FUN_100308538 */

void FUN_100308538(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1002ec258();
    return;
  }
  return;
}



/* Address: 0x10030854c | FUN_10030854c */

void FUN_10030854c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fbe5d8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c40870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c40870,&DAT_100eca1c0);
  DAT_100fbe5d8 = pTVar1;
  return;
}



/* Address: 0x10030858c | FUN_10030858c */

void FUN_10030858c(void)

{
  long unaff_x20;
  
  FUN_10030283c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100308598 | FUN_100308598 */

void FUN_100308598(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  FUN_1001037b4();
  return;
}



/* Address: 0x1003085ac | FUN_1003085ac */

void FUN_1003085ac(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 != -1) {
    FUN_1003085c0();
    return;
  }
  return;
}



/* Address: 0x1003085c0 | FUN_1003085c0 */

void FUN_1003085c0(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRelease();
    return;
  }
  FUN_10003bf2c();
  return;
}



/* Address: 0x1003085d4 | FUN_1003085d4 */

void FUN_1003085d4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  FUN_1003056a0(uVar1,uVar2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
    *(char *)(param_1 + 1) = (char)uVar2;
  }
  return;
}



/* Address: 0x100308608 | FUN_100308608 */

void FUN_100308608(void)

{
  FUN_1003088fc(FUN_100308968);
  return;
}



/* Address: 0x100308624 | FUN_100308624 */

void FUN_100308624(void)

{
  long unaff_x20;
  
  FUN_1003029b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe628,&DAT_100c40738);
  return;
}



/* Address: 0x100308650 | FUN_100308650 */

void FUN_100308650(void)

{
  long unaff_x20;
  
  FUN_100302928(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe630,&DAT_100c40740);
  return;
}



/* Address: 0x10030867c | FUN_10030867c */

void FUN_10030867c(void)

{
  long unaff_x20;
  
  FUN_10030289c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe638,&DAT_100c40748);
  return;
}



/* Address: 0x1003086a8 | FUN_1003086a8 */

void FUN_1003086a8(void)

{
  long unaff_x20;
  
  FUN_100302a38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe648,&DAT_100c40758,&DAT_100fbe640,
                &DAT_100c40750);
  return;
}



/* Address: 0x1003086e4 | FUN_1003086e4 */

void FUN_1003086e4(void)

{
  long unaff_x20;
  
  FUN_100302928(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe658,&DAT_100c40768);
  return;
}



/* Address: 0x100308710 | FUN_100308710 */

void FUN_100308710(void)

{
  long unaff_x20;
  
  FUN_10030289c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe660,&DAT_100c40770);
  return;
}



/* Address: 0x10030873c | FUN_10030873c */

void FUN_10030873c(void)

{
  long unaff_x20;
  
  FUN_1003029b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe668,&DAT_100c40778);
  return;
}



/* Address: 0x100308768 | FUN_100308768 */

void FUN_100308768(void)

{
  long unaff_x20;
  
  FUN_1003029b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe670,&DAT_100c40780);
  return;
}



/* Address: 0x100308794 | FUN_100308794 */

void FUN_100308794(void)

{
  long unaff_x20;
  
  FUN_1003029b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe678,&DAT_100c40788);
  return;
}



/* Address: 0x1003087c0 | FUN_1003087c0 */

void FUN_1003087c0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1003087d0 | FUN_1003087d0 */

void FUN_1003087d0(void)

{
  long unaff_x20;
  
  FUN_100302928(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe680,&DAT_100c40790);
  return;
}



/* Address: 0x1003087fc | FUN_1003087fc */

void FUN_1003087fc(void)

{
  long unaff_x20;
  
  FUN_100302a38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe690,&DAT_100c407a0,&DAT_100fbe688,
                &DAT_100c40798);
  return;
}



/* Address: 0x100308838 | FUN_100308838 */

void FUN_100308838(void)

{
  long unaff_x20;
  
  FUN_10030289c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe6a0,&DAT_100c407b0);
  return;
}



/* Address: 0x100308864 | FUN_100308864 */

void FUN_100308864(void)

{
  long unaff_x20;
  
  FUN_10030289c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100fbe6a8,&DAT_100c407b8);
  return;
}



/* Address: 0x100308890 | FUN_100308890 */

void FUN_100308890(void)

{
  FUN_1003088ac(FUN_100304108);
  return;
}



/* Address: 0x1003088ac | FUN_1003088ac */

void FUN_1003088ac(undefined1 *param_1,code *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  (*param_2)(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28));
  if (unaff_x21 == 0) {
    *param_1 = (char)uVar1;
  }
  return;
}



/* Address: 0x1003088e0 | FUN_1003088e0 */

void FUN_1003088e0(void)

{
  long unaff_x20;
  
  FUN_100302b78(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1003088fc | FUN_1003088fc */

void FUN_1003088fc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_100303634(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),param_2);
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  return;
}



/* Address: 0x100308930 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308934 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308938 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x10030893c | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308940 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308944 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308948 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x10030894c | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308950 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308954 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x100308958 | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}



/* Address: 0x10030895c | thunk_FUN_100308508 */

void thunk_FUN_100308508(void)

{
  FUN_100308508();
  return;
}


