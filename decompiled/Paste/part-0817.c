/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008fa558 | FUN_1008fa558 */

void FUN_1008fa558(undefined8 param_1,char param_2)

{
  if (param_2 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1008fa56c | FUN_1008fa56c */

void FUN_1008fa56c(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x1008fa584 | FUN_1008fa584 */

int FUN_1008fa584(long param_1)

{
  int iVar1;
  
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x90)) {
    iVar1 = (*(byte *)(param_1 + 0x90) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1008fa598 | FUN_1008fa598 */

void FUN_1008fa598(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  char param_5)

{
  if (param_5 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_retain();
  _swift_retain(param_2);
  return;
}



/* Address: 0x1008fa5cc | FUN_1008fa5cc */

void FUN_1008fa5cc(void)

{
  char in_w3;
  
  if (in_w3 == '\x01') {
    _swift_errorRetain();
    return;
  }
  _swift_retain();
  return;
}



/* Address: 0x1008fa5e0 | FUN_1008fa5e0 */

void FUN_1008fa5e0(void)

{
  long unaff_x20;
  
  FUN_1008f5fbc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fa5ec | FUN_1008fa5ec */

void FUN_1008fa5ec(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1008fa558();
  }
  return;
}



/* Address: 0x1008fa60c | FUN_1008fa60c */

void FUN_1008fa60c(undefined8 param_1,uint param_2)

{
  if (((param_2 ^ 0xffffffff) & 0xff) != 0) {
    FUN_1008fddf0(param_1,param_2,PTR__swift_bridgeObjectRelease_100eae160);
  }
  return;
}



/* Address: 0x1008fa634 | FUN_1008fa634 */

void FUN_1008fa634(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fa680 | FUN_1008fa680 */

void FUN_1008fa680(void)

{
  long unaff_x20;
  
  FUN_1008edc10(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined1 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1008fa6c4 | thunk_FUN_1008fcbd0 */

void thunk_FUN_1008fcbd0(void)

{
  FUN_1008fcbd0();
  return;
}



/* Address: 0x1008fa6c8 | FUN_1008fa6c8 */

void FUN_1008fa6c8(void)

{
  long unaff_x20;
  
  FUN_1008ede54(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fa6d4 | FUN_1008fa6d4 */

void FUN_1008fa6d4(void)

{
  FUN_1008feafc(PTR__swift_release_100eae3e8,0x30);
  return;
}



/* Address: 0x1008fa6e4 | FUN_1008fa6e4 */

void FUN_1008fa6e4(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&PTR_PTR_100f0f5c8)
  ;
  return;
}



/* Address: 0x1008fa714 | FUN_1008fa714 */

void FUN_1008fa714(void)

{
  FUN_1008fdd58(PTR__swift_unknownObjectRelease_100eae458);
  return;
}



/* Address: 0x1008fa720 | FUN_1008fa720 */

void FUN_1008fa720(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008edf68(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fa72c | FUN_1008fa72c */

void FUN_1008fa72c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fa750 | FUN_1008fa750 */

void FUN_1008fa750(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008ee25c(param_1,*(undefined1 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined1 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fa764 | FUN_1008fa764 */

void FUN_1008fa764(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008ee51c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fa76c | thunk_FUN_1008fa790 */

void thunk_FUN_1008fa790(void)

{
  FUN_1008fa790();
  return;
}



/* Address: 0x1008fa770 | FUN_1008fa770 */

void FUN_1008fa770(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Address: 0x1008fa790 | FUN_1008fa790 */

void FUN_1008fa790(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fa7e0 | thunk_FUN_1008fa7e4 */

void thunk_FUN_1008fa7e4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001008fa804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(param_1,unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1008fa7e4 | FUN_1008fa7e4 */

void FUN_1008fa7e4(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001008fa804. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 0x10))(param_1,unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1008fa808 | FUN_1008fa808 */

void FUN_1008fa808(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fec430;
  FUN_1000f7830(&DAT_100fec430,&DAT_100c83b28);
  FUN_10061cf14(2,0,puVar1,&PTR_PTR_100f0f5c8);
  return;
}



/* Address: 0x1008fa840 | FUN_1008fa840 */

void FUN_1008fa840(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fa88c | FUN_1008fa88c */

void FUN_1008fa88c(void)

{
  long unaff_x20;
  
  FUN_1008ee578(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined1 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x1008fa8c8 | FUN_1008fa8c8 */

undefined8
FUN_1008fa8c8(long param_1,long param_2,long param_3,undefined8 param_4,undefined8 param_5)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_a8,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      FUN_100004550(param_3,param_4);
      _swift_release(param_5);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008facec);
      (*pcVar10)();
    }
    FUN_100011128(param_3,param_4);
    _swift_retain(param_5);
    lVar3 = param_3;
    FUN_1008ede54(param_3,param_4,param_5);
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f11ac8;
      _swift_allocObject(&DAT_100f11ac8,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_1008fa3d4;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f11af0;
        _swift_allocObject(&DAT_100f11af0,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_90,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_a8,0x21,0);
          FUN_10064967c(thunk_FUN_1008fa3dc,puVar6);
          _swift_endAccess(auStack_a8);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_10092b43c(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f11b18;
      _swift_allocObject(&DAT_100f11b18,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_90,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630334(uVar5,*(char *)(lVar3 + 0x18),FUN_100308524);
        _swift_retain(param_2);
        _swift_release(puVar6);
        FUN_100004550(param_3,param_4);
        _swift_release(param_5);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_1008fa40c,puVar6);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    FUN_100004550(param_3,param_4);
    _swift_release(param_5);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008facec | FUN_1008facec */

undefined * FUN_1008facec(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  code *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f11a28;
  _swift_allocObject(&DAT_100f11a28,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar2 = &DAT_100f11a50;
  _swift_allocObject(&DAT_100f11a50,0x20,7);
  *(code **)(puVar2 + 0x10) = thunk_FUN_1008fa6c8;
  *(undefined **)(puVar2 + 0x18) = puVar1;
  puVar3 = &DAT_100fec0a0;
  FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
  _swift_allocObject();
  lVar7 = *(long *)(param_1 + 0x28);
  uVar10 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar3 + 0x20) = uVar10;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  puVar4 = &DAT_100f11a78;
  _swift_allocObject(&DAT_100f11a78,0x30,7);
  *(long *)(puVar4 + 0x10) = param_1;
  *(code **)(puVar4 + 0x18) = thunk_FUN_1000386a0;
  *(undefined **)(puVar4 + 0x20) = puVar2;
  *(undefined **)(puVar4 + 0x28) = puVar3;
  uVar5 = uVar10;
  _swift_getObjectType();
  pcVar8 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain_n(puVar3,2);
  FUN_100011128(param_2,param_3);
  _swift_retain();
  _swift_retain(puVar1);
  _swift_unknownObjectRetain(uVar10);
  uVar10 = uVar5;
  (*pcVar8)(uVar5,lVar7);
  if ((uVar10 & 1) == 0) {
    puVar9 = &DAT_100f11aa0;
    _swift_allocObject(&DAT_100f11aa0,0x28,7);
    *(long *)(puVar9 + 0x10) = param_1;
    *(code **)(puVar9 + 0x18) = thunk_FUN_1008fa3c8;
    *(undefined **)(puVar9 + 0x20) = puVar4;
    pcVar8 = *(code **)(lVar7 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar4);
    (*pcVar8)(thunk_FUN_100653138,puVar9,uVar5,lVar7);
    _swift_release(puVar1);
    _swift_release(puVar9);
    _swift_release(puVar3);
    _swift_release_n(puVar2,2);
    _swift_release(param_1);
    _swift_release(puVar4);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fa3c8,puVar4);
      _swift_endAccess(auStack_90);
      lVar7 = 0;
      puVar9 = (undefined *)0x0;
      uVar6 = 0;
    }
    else {
      FUN_100011128(param_2,param_3);
      _swift_retain(param_4);
      _swift_retain(puVar1);
      lVar7 = param_1;
      puVar9 = puVar3;
      uVar6 = param_2;
      FUN_1008fa8c8(param_1,puVar3,param_2,param_3,param_4);
      _swift_release(param_4);
      FUN_100004550(param_2,param_3);
      _swift_release(puVar1);
    }
    FUN_1006486f8(lVar7,puVar9,uVar6);
    FUN_100004550(lVar7,puVar9);
    _swift_release(puVar1);
    _swift_release(puVar3);
    _swift_release_n(puVar2,2);
    _swift_release(param_1);
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(uVar6);
  }
  return puVar3;
}



/* Address: 0x1008fb038 | FUN_1008fb038 */

undefined * FUN_1008fb038(undefined8 param_1,long param_2)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined1 auStack_48 [24];
  
  puVar2 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  if (puVar2 != PTR___type_metadata_for____100eae0c8 + 8) {
    puVar2 = &DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    *(long *)(puVar2 + 0x28) = param_2;
    *(undefined ***)(puVar2 + 0x30) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined ***)(puVar2 + 0x18) = &PTR_PTR_100f0f5c8;
    puVar2[0x20] = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    _swift_retain(param_2);
    _swift_retain(param_1);
    return puVar2;
  }
  ppuVar3 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(param_2 + 0x40));
  if ((*ppuVar3 != extraout_x8) ||
     (_swift_beginAccess(param_2 + 0x50,auStack_48,0,0), *(long *)(param_2 + 0x50) == 0)) {
    puVar2 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(long *)(puVar2 + 0x20) = param_2;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0xff;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(param_2);
    FUN_1009452c4(0,0,puVar2);
    _swift_release(puVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fb190);
  (*pcVar1)();
}



/* Address: 0x1008fb190 | FUN_1008fb190 */

undefined * FUN_1008fb190(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined **ppuVar3;
  undefined *extraout_x8;
  undefined1 auStack_48 [24];
  
  puVar2 = &DAT_100febf90;
  FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
  if (puVar2 != PTR___type_metadata_for____100eae0c8 + 8) {
    puVar2 = &DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    *(long *)(puVar2 + 0x28) = param_2;
    *(undefined ***)(puVar2 + 0x30) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar2 + 0x10) = param_1;
    *(undefined8 *)(puVar2 + 0x18) = param_4;
    puVar2[0x20] = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x48) = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    _swift_retain(param_2);
    _swift_unknownObjectRetain(param_1);
    return puVar2;
  }
  ppuVar3 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)(*(undefined8 *)(param_2 + 0x40));
  if ((*ppuVar3 != extraout_x8) ||
     (_swift_beginAccess(param_2 + 0x50,auStack_48,0,0), *(long *)(param_2 + 0x50) == 0)) {
    puVar2 = &DAT_100fec0a0;
    FUN_1000f7830(&DAT_100fec0a0,&DAT_100c83980);
    _swift_allocObject();
    *(long *)(puVar2 + 0x20) = param_2;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0xff;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(param_2);
    FUN_1009452c4(0,0,puVar2);
    _swift_release(puVar2);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008fb2e4);
  (*pcVar1)();
}



/* Address: 0x1008fb2e4 | FUN_1008fb2e4 */

undefined8 FUN_1008fb2e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar11;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x20) = 1;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_errorRetain(uVar11);
      return uVar2;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_release(param_3);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1008fb7bc);
    (*pcVar12)();
  }
  uVar11 = *(undefined8 *)(param_3 + 0x30);
  _swift_retain(uVar11);
  FUN_1008fb038(param_3,uVar11);
  _swift_release(uVar11);
  uVar5 = *(ulong *)(param_3 + 0x28);
  lVar1 = *(long *)(param_3 + 0x30);
  uVar3 = uVar5;
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar12)(uVar3,lVar1);
  _swift_unknownObjectRelease(uVar5);
  if ((uVar3 & 1) != 0) {
    puVar4 = &DAT_100f11960;
    _swift_allocObject(&DAT_100f11960,0x20,7);
    *(long *)(puVar4 + 0x10) = param_2;
    *(long *)(puVar4 + 0x18) = param_3;
    _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
    if (*(char *)(param_3 + 0x20) == -1) {
      _swift_beginAccess(param_3 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(param_3);
      FUN_10064967c(thunk_FUN_1008fcb74,puVar4);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar4);
      _swift_release(param_3);
      return 0;
    }
    uVar11 = *(undefined8 *)(param_3 + 0x10);
    FUN_1008f1b58(uVar11,*(undefined8 *)(param_3 + 0x18),*(char *)(param_3 + 0x20),FUN_1008fde58);
    _swift_retain(param_2);
    _swift_release(puVar4);
    return uVar11;
  }
  puVar4 = &DAT_100f118e8;
  _swift_allocObject(&DAT_100f118e8,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar4 + 0x18) = param_2;
  *(long *)(puVar4 + 0x20) = param_3;
  uVar5 = *(ulong *)(param_3 + 0x28);
  lVar1 = *(long *)(param_3 + 0x30);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(param_3,2);
  uVar3 = uVar5;
  (*pcVar12)(uVar5,lVar1);
  if ((uVar3 & 1) == 0) {
    _swift_release(param_2);
    puVar6 = &DAT_100f11910;
    _swift_allocObject(&DAT_100f11910,0x28,7);
    *(long *)(puVar6 + 0x10) = param_3;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_retain(puVar4);
    (*pcVar12)(thunk_FUN_1008fa090,puVar6,uVar5,lVar1);
    _swift_release(puVar4);
    _swift_release(param_3);
    _swift_release(puVar6);
    goto LAB_1008fb770;
  }
  _swift_beginAccess(param_3 + 0x10,auStack_90,0,0);
  uVar11 = *(undefined8 *)(param_3 + 0x10);
  uVar2 = *(undefined8 *)(param_3 + 0x18);
  cVar9 = *(char *)(param_3 + 0x20);
  if (cVar9 == '\x01') {
    uVar5 = *(ulong *)(param_2 + 0x28);
    lVar1 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    uVar10 = 1;
    FUN_1008fde58(uVar11,uVar2,1);
    uVar3 = uVar5;
    lVar8 = lVar1;
    (*pcVar12)(uVar5,lVar1);
    if ((uVar3 & 1) == 0) {
      puVar6 = &DAT_100f11938;
      _swift_allocObject(&DAT_100f11938,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + 0x18) = uVar11;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_2);
      FUN_1008fde6c(uVar11,uVar2,1);
      (*pcVar12)(thunk_FUN_1008fcb6c,puVar6,uVar5,lVar1);
      _swift_release(param_2);
      _swift_release(puVar6);
    }
    else {
      uVar7 = uVar11;
      thunk_FUN_10092b398(uVar11);
      FUN_1006486f8();
      FUN_100004550(uVar7,lVar8);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar10);
    }
    cVar9 = '\x01';
LAB_1008fb738:
    FUN_1008fde8c(uVar11,uVar2,cVar9);
  }
  else {
    if (cVar9 != -1) {
      FUN_1008fde58(uVar11,uVar2,cVar9);
      FUN_10090d0dc(uVar11,uVar2,cVar9,param_2);
      _swift_release(param_2);
      goto LAB_1008fb738;
    }
    _swift_release(param_2);
    _swift_beginAccess(param_3 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar4);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar4);
  _swift_release(param_3);
  _swift_bridgeObjectRelease(0);
LAB_1008fb770:
  _swift_release(param_3);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1008fb7bc | FUN_1008fb7bc */

undefined * FUN_1008fb7bc(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  ulong uVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f11870;
  _swift_allocObject(&DAT_100f11870,0x28,7);
  *(code **)(puVar1 + 0x10) = FUN_1008ec5c0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  puVar2 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar6 = *(long *)(param_1 + 0x28);
  uVar9 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar2 + 0x28) = uVar9;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar3 = &DAT_100f11898;
  _swift_allocObject(&DAT_100f11898,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1008fcb94;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = uVar9;
  _swift_getObjectType();
  pcVar8 = *(code **)(lVar6 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain(param_2);
  _swift_unknownObjectRetain(uVar9);
  uVar9 = uVar4;
  (*pcVar8)(uVar4,lVar6);
  if ((uVar9 & 1) == 0) {
    puVar7 = &DAT_100f118c0;
    _swift_allocObject(&DAT_100f118c0,0x28,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(code **)(puVar7 + 0x18) = FUN_1008fcbc4;
    *(undefined **)(puVar7 + 0x20) = puVar3;
    pcVar8 = *(code **)(lVar6 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar8)(thunk_FUN_100653138,puVar7,uVar4,lVar6);
    _swift_release(puVar7);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1008fcbc4,puVar3);
      _swift_endAccess(auStack_90);
      lVar6 = 0;
      puVar7 = (undefined *)0x0;
      uVar5 = 0;
    }
    else {
      _swift_retain(param_2);
      lVar6 = param_1;
      puVar7 = puVar2;
      uVar5 = param_2;
      FUN_1008fb2e4(param_1,puVar2,param_2);
      _swift_release(param_2);
    }
    FUN_1006486f8(lVar6,puVar7,uVar5);
    FUN_100004550(lVar6,puVar7);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(uVar5);
  }
  return puVar2;
}



/* Address: 0x1008fba54 | FUN_1008fba54 */

void FUN_1008fba54(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008f66e4(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fba60 | FUN_1008fba60 */

void FUN_1008fba60(void)

{
  long unaff_x20;
  
  FUN_1008f3d2c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fba6c | FUN_1008fba6c */

void FUN_1008fba6c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fba90 | thunk_FUN_1008fd398 */

void thunk_FUN_1008fd398(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1008ee0b8(*param_1,param_1[1],*(undefined1 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fba94 | FUN_1008fba94 */

void FUN_1008fba94(void)

{
  FUN_1008ee488();
  return;
}



/* Address: 0x1008fbab4 | FUN_1008fbab4 */

void FUN_1008fbab4(void)

{
  long unaff_x20;
  
  FUN_10093c8bc(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fbac0 | FUN_1008fbac0 */

undefined8
FUN_1008fbac0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  code cVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar5 = *(char *)(param_1 + 0x20);
  if (cVar5 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    uVar13 = 0;
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(undefined1 *)(param_2 + 0x20) = 1;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_errorRetain(uVar1);
    }
  }
  else {
    if (cVar5 == -1) {
      _swift_release(param_5);
      _swift_unknownObjectRelease(param_3);
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x1008fc0a4);
      (*pcVar7)();
    }
    uVar13 = param_3;
    FUN_1008f6880(param_3,param_4,PTR___type_metadata_for____100eae0c8 + 8);
    _swift_unknownObjectRetain(param_3);
    FUN_1008fde58(uVar1,uVar2,cVar5);
    FUN_1008deafc(uVar13);
    puVar8 = &DAT_100f114b0;
    _swift_allocObject(&DAT_100f114b0,0x20,7);
    *(undefined8 *)(puVar8 + 0x10) = uVar1;
    *(undefined8 *)(puVar8 + 0x18) = uVar2;
    puVar9 = &DAT_100f114d8;
    _swift_allocObject(&DAT_100f114d8,0x20,7);
    *(code **)(puVar9 + 0x10) = FUN_1008fcb28;
    *(undefined **)(puVar9 + 0x18) = puVar8;
    FUN_1008fde6c(uVar1,uVar2,cVar5);
    _swift_retain(uVar13);
    pcVar7 = FUN_1008fcb38;
    FUN_1008f5090(FUN_1008fcb38,puVar9);
    _swift_release_n(uVar13,2);
    _swift_release(puVar9);
    uVar11 = *(ulong *)(pcVar7 + 0x28);
    lVar3 = *(long *)(pcVar7 + 0x30);
    uVar10 = uVar11;
    _swift_getObjectType();
    pcVar16 = *(code **)(lVar3 + 0x10);
    _swift_unknownObjectRetain(uVar11);
    (*pcVar16)(uVar10,lVar3);
    _swift_unknownObjectRelease(uVar11);
    if ((uVar10 & 1) == 0) {
      puVar8 = &DAT_100f11500;
      _swift_allocObject(&DAT_100f11500,0x28,7);
      *(code **)(puVar8 + 0x10) = FUN_1008fcb58;
      *(long *)(puVar8 + 0x18) = param_2;
      *(code **)(puVar8 + 0x20) = pcVar7;
      uVar11 = *(ulong *)(pcVar7 + 0x28);
      lVar3 = *(long *)(pcVar7 + 0x30);
      _swift_getObjectType();
      pcVar16 = *(code **)(lVar3 + 0x10);
      _swift_retain_n(param_2,5);
      _swift_retain_n(pcVar7,2);
      uVar10 = uVar11;
      (*pcVar16)(uVar11,lVar3);
      if ((uVar10 & 1) == 0) {
        _swift_release(param_2);
        puVar9 = &DAT_100f11528;
        _swift_allocObject(&DAT_100f11528,0x28,7);
        *(code **)(puVar9 + 0x10) = pcVar7;
        *(code **)(puVar9 + 0x18) = FUN_1008fcb60;
        *(undefined **)(puVar9 + 0x20) = puVar8;
        pcVar16 = *(code **)(lVar3 + 0x18);
        _swift_retain(pcVar7);
        _swift_retain(puVar8);
        (*pcVar16)(thunk_FUN_1008fa090,puVar9,uVar11,lVar3);
        _swift_release(param_2);
        _swift_release(puVar8);
        _swift_release(puVar9);
      }
      else {
        _swift_beginAccess(pcVar7 + 0x10,auStack_90,0,0);
        uVar13 = *(undefined8 *)(pcVar7 + 0x10);
        uVar4 = *(undefined8 *)(pcVar7 + 0x18);
        cVar6 = pcVar7[0x20];
        if (cVar6 == (code)0x1) {
          uVar11 = *(ulong *)(param_2 + 0x28);
          lVar3 = *(long *)(param_2 + 0x30);
          _swift_getObjectType();
          pcVar16 = *(code **)(lVar3 + 0x10);
          uVar15 = 1;
          FUN_1008fde58(uVar13,uVar4,1);
          uVar10 = uVar11;
          lVar14 = lVar3;
          (*pcVar16)(uVar11,lVar3);
          if ((uVar10 & 1) == 0) {
            puVar9 = &DAT_100f11550;
            _swift_allocObject(&DAT_100f11550,0x20,7);
            *(long *)(puVar9 + 0x10) = param_2;
            *(undefined8 *)(puVar9 + 0x18) = uVar13;
            pcVar16 = *(code **)(lVar3 + 0x18);
            _swift_retain(param_2);
            FUN_1008fde6c(uVar13,uVar4,1);
            (*pcVar16)(FUN_1008fcb6c,puVar9,uVar11,lVar3);
            _swift_release(param_2);
            _swift_release(puVar9);
          }
          else {
            uVar12 = uVar13;
            thunk_FUN_10092b398(uVar13);
            FUN_1006486f8();
            FUN_100004550(uVar12,lVar14);
            _swift_release(param_2);
            _swift_bridgeObjectRelease(uVar15);
          }
          FUN_1008fde8c(uVar13,uVar4,1);
        }
        else if (cVar6 == (code)0xff) {
          _swift_release(param_2);
          _swift_beginAccess(pcVar7 + 0x38,auStack_a8,0x21,0);
          FUN_10064967c(FUN_1008fcb60,puVar8);
          _swift_endAccess(auStack_a8);
        }
        else {
          FUN_1008fde58(uVar13,uVar4,cVar6);
          FUN_10090d0dc(uVar13,uVar4,cVar6,param_2);
          _swift_release(param_2);
          FUN_1008fde8c(uVar13,uVar4,cVar6);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(param_2);
        _swift_release(puVar8);
        _swift_bridgeObjectRelease(0);
      }
      _swift_release_n(param_2,2);
      _swift_release_n(pcVar7,2);
    }
    else {
      puVar8 = &DAT_100f11578;
      _swift_allocObject(&DAT_100f11578,0x20,7);
      *(long *)(puVar8 + 0x10) = param_2;
      *(code **)(puVar8 + 0x18) = pcVar7;
      _swift_beginAccess(pcVar7 + 0x10,auStack_90,0,0);
      if (pcVar7[0x20] != (code)0xff) {
        uVar13 = *(undefined8 *)(pcVar7 + 0x10);
        FUN_1008f1b58(uVar13,*(undefined8 *)(pcVar7 + 0x18),pcVar7[0x20],FUN_1008fde58);
        _swift_retain(param_2);
        _swift_release(puVar8);
        FUN_1008fde8c(uVar1,uVar2,cVar5);
        return uVar13;
      }
      _swift_beginAccess(pcVar7 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(pcVar7);
      FUN_10064967c(FUN_1008fcb74,puVar8);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar8);
      _swift_release(pcVar7);
    }
    FUN_1008fde8c(uVar1,uVar2,cVar5);
    uVar13 = 0;
  }
  return uVar13;
}



/* Address: 0x1008fc0a4 | FUN_1008fc0a4 */

undefined8 FUN_1008fc0a4(long param_1,long param_2,uint param_3,undefined8 param_4,uint param_5)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  char cVar5;
  char cVar6;
  long lVar7;
  ulong uVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  code *pcVar16;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  lVar1 = *(long *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar5 = *(char *)(param_1 + 0x20);
  if (cVar5 == '\x01') {
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    uVar13 = 0;
    if (*(char *)(param_2 + 0x20) == -1) {
      *(long *)(param_2 + 0x10) = lVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(undefined1 *)(param_2 + 0x20) = 1;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar13 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_errorRetain(lVar1);
    }
  }
  else {
    if (cVar5 == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x1008fc5ec);
      (*pcVar16)();
    }
    FUN_1008fde58(lVar1,uVar2,cVar5);
    lVar7 = lVar1;
    FUN_1008ee0b8(lVar1,uVar2,param_3 & 1,param_4,param_5 & 1);
    uVar10 = *(ulong *)(lVar7 + 0x28);
    lVar3 = *(long *)(lVar7 + 0x30);
    uVar8 = uVar10;
    _swift_getObjectType();
    pcVar16 = *(code **)(lVar3 + 0x10);
    _swift_unknownObjectRetain(uVar10);
    (*pcVar16)(uVar8,lVar3);
    _swift_unknownObjectRelease(uVar10);
    if ((uVar8 & 1) == 0) {
      puVar9 = &DAT_100f115a0;
      _swift_allocObject(&DAT_100f115a0,0x28,7);
      *(code **)(puVar9 + 0x10) = thunk_FUN_1008fcb58;
      *(long *)(puVar9 + 0x18) = param_2;
      *(long *)(puVar9 + 0x20) = lVar7;
      uVar10 = *(ulong *)(lVar7 + 0x28);
      lVar3 = *(long *)(lVar7 + 0x30);
      _swift_getObjectType();
      pcVar16 = *(code **)(lVar3 + 0x10);
      _swift_retain_n(param_2,5);
      _swift_retain_n(lVar7,2);
      uVar8 = uVar10;
      (*pcVar16)(uVar10,lVar3);
      if ((uVar8 & 1) == 0) {
        _swift_release(param_2);
        puVar11 = &DAT_100f115c8;
        _swift_allocObject(&DAT_100f115c8,0x28,7);
        *(long *)(puVar11 + 0x10) = lVar7;
        *(code **)(puVar11 + 0x18) = thunk_FUN_1008fcb60;
        *(undefined **)(puVar11 + 0x20) = puVar9;
        pcVar16 = *(code **)(lVar3 + 0x18);
        _swift_retain(lVar7);
        _swift_retain(puVar9);
        (*pcVar16)(thunk_FUN_1008fa090,puVar11,uVar10,lVar3);
        _swift_release(param_2);
        _swift_release(puVar9);
        _swift_release(puVar11);
      }
      else {
        _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
        uVar13 = *(undefined8 *)(lVar7 + 0x10);
        uVar4 = *(undefined8 *)(lVar7 + 0x18);
        cVar6 = *(char *)(lVar7 + 0x20);
        if (cVar6 == '\x01') {
          uVar10 = *(ulong *)(param_2 + 0x28);
          lVar3 = *(long *)(param_2 + 0x30);
          _swift_getObjectType();
          pcVar16 = *(code **)(lVar3 + 0x10);
          uVar15 = 1;
          FUN_1008fde58(uVar13,uVar4,1);
          uVar8 = uVar10;
          lVar14 = lVar3;
          (*pcVar16)(uVar10,lVar3);
          if ((uVar8 & 1) == 0) {
            puVar11 = &DAT_100f115f0;
            _swift_allocObject(&DAT_100f115f0,0x20,7);
            *(long *)(puVar11 + 0x10) = param_2;
            *(undefined8 *)(puVar11 + 0x18) = uVar13;
            pcVar16 = *(code **)(lVar3 + 0x18);
            _swift_retain(param_2);
            FUN_1008fde6c(uVar13,uVar4,1);
            (*pcVar16)(thunk_FUN_1008fcb6c,puVar11,uVar10,lVar3);
            _swift_release(param_2);
            _swift_release(puVar11);
          }
          else {
            uVar12 = uVar13;
            thunk_FUN_10092b398(uVar13);
            FUN_1006486f8();
            FUN_100004550(uVar12,lVar14);
            _swift_release(param_2);
            _swift_bridgeObjectRelease(uVar15);
          }
          FUN_1008fde8c(uVar13,uVar4,1);
        }
        else if (cVar6 == -1) {
          _swift_release(param_2);
          _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
          FUN_10064967c(thunk_FUN_1008fcb60,puVar9);
          _swift_endAccess(auStack_a8);
        }
        else {
          FUN_1008fde58(uVar13,uVar4,cVar6);
          FUN_10090d0dc(uVar13,uVar4,cVar6,param_2);
          _swift_release(param_2);
          FUN_1008fde8c(uVar13,uVar4,cVar6);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release(param_2);
        _swift_release(puVar9);
        _swift_bridgeObjectRelease(0);
      }
      _swift_release_n(param_2,2);
      _swift_release_n(lVar7,2);
    }
    else {
      puVar9 = &DAT_100f11618;
      _swift_allocObject(&DAT_100f11618,0x20,7);
      *(long *)(puVar9 + 0x10) = param_2;
      *(long *)(puVar9 + 0x18) = lVar7;
      _swift_beginAccess(lVar7 + 0x10,auStack_90,0,0);
      if (*(char *)(lVar7 + 0x20) != -1) {
        uVar13 = *(undefined8 *)(lVar7 + 0x10);
        FUN_1008f1b58(uVar13,*(undefined8 *)(lVar7 + 0x18),*(char *)(lVar7 + 0x20),FUN_1008fde58);
        _swift_retain(param_2);
        _swift_release(puVar9);
        FUN_1008fde8c(lVar1,uVar2,cVar5);
        return uVar13;
      }
      _swift_beginAccess(lVar7 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar7);
      FUN_10064967c(thunk_FUN_1008fcb74,puVar9);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar9);
      _swift_release(lVar7);
    }
    FUN_1008fde8c(lVar1,uVar2,cVar5);
    uVar13 = 0;
  }
  return uVar13;
}



/* Address: 0x1008fc5ec | FUN_1008fc5ec */

undefined8 FUN_1008fc5ec(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  char cVar12;
  undefined8 uVar13;
  ulong uVar14;
  undefined *puVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  cVar12 = *(char *)(param_1 + 0x20);
  if (cVar12 != '\x01') {
    if (cVar12 == -1) {
      _swift_release(param_3);
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1008fcb28);
      (*pcVar5)();
    }
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar1;
      *(undefined8 *)(param_2 + 0x18) = uVar2;
      *(char *)(param_2 + 0x20) = cVar12;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_unknownObjectRetain(uVar1);
      return uVar2;
    }
    return 0;
  }
  FUN_1008fde58(uVar1,uVar2,1);
  FUN_10094fd38(uVar1,2,0);
  uVar14 = *(ulong *)(param_3 + 0x30);
  puVar6 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  *(ulong *)(puVar6 + 0x28) = uVar14;
  *(undefined ***)(puVar6 + 0x30) = &PTR_PTR_100f19fa8;
  puVar17 = (undefined8 *)(puVar6 + 0x10);
  *puVar17 = uVar1;
  *(undefined8 *)(puVar6 + 0x18) = uVar2;
  puVar6[0x20] = 1;
  puVar16 = (undefined8 *)(puVar6 + 0x38);
  *puVar16 = 0;
  *(undefined8 *)(puVar6 + 0x40) = 0;
  *(undefined8 *)(puVar6 + 0x48) = 0;
  puVar15 = *(undefined **)(uVar14 + 0x40);
  FUN_1008fde6c(uVar1,uVar2,1);
  ppuVar7 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  puVar18 = *ppuVar7;
  _swift_retain(uVar14);
  if (puVar18 == puVar15) {
    puVar15 = &DAT_100f11758;
    _swift_allocObject(&DAT_100f11758,0x20,7);
    *(long *)(puVar15 + 0x10) = param_2;
    *(undefined **)(puVar15 + 0x18) = puVar6;
    _swift_beginAccess(puVar17,auStack_90,0,0);
    if (puVar6[0x20] == -1) {
      _swift_beginAccess(puVar16,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(puVar6);
      FUN_10064967c(FUN_1008fcb8c,puVar15);
      _swift_endAccess(auStack_a8);
      FUN_1008fde8c(uVar1,uVar2,1);
      _swift_release(puVar15);
      _swift_release(puVar6);
      return 0;
    }
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    FUN_1008f1b58(uVar8,*(undefined8 *)(puVar6 + 0x18),puVar6[0x20],FUN_1008fde58);
    _swift_retain(param_2);
    FUN_1008fde8c(uVar1,uVar2,1);
    _swift_release(puVar15);
    return uVar8;
  }
  puVar15 = &DAT_100f116e0;
  _swift_allocObject(&DAT_100f116e0,0x28,7);
  *(code **)(puVar15 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar15 + 0x18) = param_2;
  *(undefined **)(puVar15 + 0x20) = puVar6;
  _swift_getObjectType();
  _swift_retain_n(param_2,5);
  _swift_retain_n(puVar6,2);
  uVar9 = uVar14;
  FUN_1009416b4(uVar14,&PTR_PTR_100f19fa8);
  if ((uVar9 & 1) == 0) {
    _swift_release(param_2);
    puVar18 = &DAT_100f11708;
    _swift_allocObject(&DAT_100f11708,0x28,7);
    *(undefined **)(puVar18 + 0x10) = puVar6;
    *(code **)(puVar18 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar18 + 0x20) = puVar15;
    _swift_retain(puVar6);
    _swift_retain(puVar15);
    FUN_1009416dc(thunk_FUN_1008fa090,puVar18,uVar14,&PTR_PTR_100f19fa8);
    _swift_release(puVar18);
  }
  else {
    _swift_beginAccess(puVar17,auStack_90,0,0);
    uVar8 = *(undefined8 *)(puVar6 + 0x10);
    uVar3 = *(undefined8 *)(puVar6 + 0x18);
    cVar12 = puVar6[0x20];
    if (cVar12 == '\x01') {
      uVar14 = *(ulong *)(param_2 + 0x28);
      lVar4 = *(long *)(param_2 + 0x30);
      _swift_getObjectType();
      pcVar5 = *(code **)(lVar4 + 0x10);
      uVar13 = 1;
      FUN_1008fde58(uVar8,uVar3,1);
      uVar9 = uVar14;
      lVar11 = lVar4;
      (*pcVar5)(uVar14,lVar4);
      if ((uVar9 & 1) == 0) {
        puVar18 = &DAT_100f11730;
        _swift_allocObject(&DAT_100f11730,0x20,7);
        *(long *)(puVar18 + 0x10) = param_2;
        *(undefined8 *)(puVar18 + 0x18) = uVar8;
        pcVar5 = *(code **)(lVar4 + 0x18);
        _swift_retain(param_2);
        FUN_1008fde6c(uVar8,uVar3,1);
        (*pcVar5)(thunk_FUN_1008fcb6c,puVar18,uVar14,lVar4);
        _swift_release(param_2);
        _swift_release(puVar18);
      }
      else {
        uVar10 = uVar8;
        thunk_FUN_10092b398(uVar8);
        FUN_1006486f8();
        FUN_100004550(uVar10,lVar11);
        _swift_release(param_2);
        _swift_bridgeObjectRelease(uVar13);
      }
      cVar12 = '\x01';
    }
    else {
      if (cVar12 == -1) {
        _swift_release(param_2);
        _swift_beginAccess(puVar16,auStack_a8,0x21,0);
        FUN_10064967c(thunk_FUN_1008fcb60,puVar15);
        _swift_endAccess(auStack_a8);
        goto LAB_1008fcac0;
      }
      FUN_1008fde58(uVar8,uVar3,cVar12);
      FUN_10090d0dc(uVar8,uVar3,cVar12,param_2);
      _swift_release(param_2);
    }
    FUN_1008fde8c(uVar8,uVar3,cVar12);
  }
LAB_1008fcac0:
  FUN_1008fde8c(uVar1,uVar2,1);
  _swift_release(puVar15);
  _swift_release_n(puVar6,2);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1008fcb28 | FUN_1008fcb28 */

void FUN_1008fcb28(undefined8 *param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  param_1[1] = *(undefined8 *)(unaff_x20 + 0x18);
  *param_1 = uVar1;
  _swift_unknownObjectRetain(uVar1);
  return;
}



/* Address: 0x1008fcb38 | FUN_1008fcb38 */

void FUN_1008fcb38(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Address: 0x1008fcb58 | FUN_1008fcb58 */

void FUN_1008fcb58(void)

{
  FUN_10093cdb4();
  return;
}



/* Address: 0x1008fcb60 | FUN_1008fcb60 */

void FUN_1008fcb60(void)

{
  long unaff_x20;
  
  thunk_FUN_10092b7e4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fcb6c | FUN_1008fcb6c */

void FUN_1008fcb6c(void)

{
  long unaff_x20;
  
  thunk_FUN_10092b000(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008fcb74 | FUN_1008fcb74 */

void FUN_1008fcb74(void)

{
  long unaff_x20;
  
  FUN_1008f4c00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008fcb8c | FUN_1008fcb8c */

void FUN_1008fcb8c(void)

{
  long unaff_x20;
  
  FUN_1008f4c00(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008fcb94 | FUN_1008fcb94 */

void FUN_1008fcb94(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),&PTR_PTR_100f0f5c8)
  ;
  return;
}



/* Address: 0x1008fcbc4 | FUN_1008fcbc4 */

void FUN_1008fcbc4(void)

{
  long unaff_x20;
  
  FUN_1008f4258(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008fcbd0 | FUN_1008fcbd0 */

void FUN_1008fcbd0(void)

{
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fcc04 | FUN_1008fcc04 */

undefined8 FUN_1008fcc04(long param_1,long param_2,code *param_3,undefined8 param_4,long param_5)

{
  long lVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long lVar8;
  char cVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_a8 [24];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar11 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_90,1,0);
    if (*(char *)(param_2 + 0x20) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar11;
      *(undefined8 *)(param_2 + 0x18) = 0;
      *(undefined1 *)(param_2 + 0x20) = 1;
      _swift_beginAccess(param_2 + 0x38,auStack_a8,1,0);
      uVar2 = *(undefined8 *)(param_2 + 0x38);
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x48) = 0;
      *(undefined8 *)(param_2 + 0x38) = 0;
      _swift_errorRetain(uVar11);
      return uVar2;
    }
    return 0;
  }
  if (*(char *)(param_1 + 0x18) == -1) {
    _swift_release(param_5);
    _swift_release(param_4);
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x1008fd0dc);
    (*pcVar12)();
  }
  (*param_3)(param_5,&PTR_PTR_100f0f5c8);
  uVar5 = *(ulong *)(param_5 + 0x28);
  lVar1 = *(long *)(param_5 + 0x30);
  uVar3 = uVar5;
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain(uVar5);
  (*pcVar12)(uVar3,lVar1);
  _swift_unknownObjectRelease(uVar5);
  if ((uVar3 & 1) != 0) {
    puVar4 = &DAT_100f11d98;
    _swift_allocObject(&DAT_100f11d98,0x20,7);
    *(long *)(puVar4 + 0x10) = param_2;
    *(long *)(puVar4 + 0x18) = param_5;
    _swift_beginAccess(param_5 + 0x10,auStack_90,0,0);
    if (*(char *)(param_5 + 0x20) == -1) {
      _swift_beginAccess(param_5 + 0x38,auStack_a8,0x21,0);
      _swift_retain(param_2);
      _swift_retain(param_5);
      FUN_10064967c(thunk_FUN_1008fcb74,puVar4);
      _swift_endAccess(auStack_a8);
      _swift_release(puVar4);
      _swift_release(param_5);
      return 0;
    }
    uVar11 = *(undefined8 *)(param_5 + 0x10);
    FUN_1008f1b58(uVar11,*(undefined8 *)(param_5 + 0x18),*(char *)(param_5 + 0x20),FUN_1008fde58);
    _swift_retain(param_2);
    _swift_release(puVar4);
    return uVar11;
  }
  puVar4 = &DAT_100f11d20;
  _swift_allocObject(&DAT_100f11d20,0x28,7);
  *(code **)(puVar4 + 0x10) = thunk_FUN_1008fcb58;
  *(long *)(puVar4 + 0x18) = param_2;
  *(long *)(puVar4 + 0x20) = param_5;
  uVar5 = *(ulong *)(param_5 + 0x28);
  lVar1 = *(long *)(param_5 + 0x30);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_2,5);
  _swift_retain_n(param_5,2);
  uVar3 = uVar5;
  (*pcVar12)(uVar5,lVar1);
  if ((uVar3 & 1) == 0) {
    _swift_release(param_2);
    puVar6 = &DAT_100f11d48;
    _swift_allocObject(&DAT_100f11d48,0x28,7);
    *(long *)(puVar6 + 0x10) = param_5;
    *(code **)(puVar6 + 0x18) = thunk_FUN_1008fcb60;
    *(undefined **)(puVar6 + 0x20) = puVar4;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_5);
    _swift_retain(puVar4);
    (*pcVar12)(thunk_FUN_1008fa090,puVar6,uVar5,lVar1);
    _swift_release(puVar4);
    _swift_release(param_5);
    _swift_release(puVar6);
    goto LAB_1008fd088;
  }
  _swift_beginAccess(param_5 + 0x10,auStack_90,0,0);
  uVar11 = *(undefined8 *)(param_5 + 0x10);
  uVar2 = *(undefined8 *)(param_5 + 0x18);
  cVar9 = *(char *)(param_5 + 0x20);
  if (cVar9 == '\x01') {
    uVar5 = *(ulong *)(param_2 + 0x28);
    lVar1 = *(long *)(param_2 + 0x30);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    uVar10 = 1;
    FUN_1008fde58(uVar11,uVar2,1);
    uVar3 = uVar5;
    lVar8 = lVar1;
    (*pcVar12)(uVar5,lVar1);
    if ((uVar3 & 1) == 0) {
      puVar6 = &DAT_100f11d70;
      _swift_allocObject(&DAT_100f11d70,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(undefined8 *)(puVar6 + 0x18) = uVar11;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_2);
      FUN_1008fde6c(uVar11,uVar2,1);
      (*pcVar12)(thunk_FUN_1008fcb6c,puVar6,uVar5,lVar1);
      _swift_release(param_2);
      _swift_release(puVar6);
    }
    else {
      uVar7 = uVar11;
      thunk_FUN_10092b398(uVar11);
      FUN_1006486f8();
      FUN_100004550(uVar7,lVar8);
      _swift_release(param_2);
      _swift_bridgeObjectRelease(uVar10);
    }
    cVar9 = '\x01';
LAB_1008fd050:
    FUN_1008fde8c(uVar11,uVar2,cVar9);
  }
  else {
    if (cVar9 != -1) {
      FUN_1008fde58(uVar11,uVar2,cVar9);
      FUN_10090d0dc(uVar11,uVar2,cVar9,param_2);
      _swift_release(param_2);
      goto LAB_1008fd050;
    }
    _swift_release(param_2);
    _swift_beginAccess(param_5 + 0x38,auStack_a8,0x21,0);
    FUN_10064967c(thunk_FUN_1008fcb60,puVar4);
    _swift_endAccess(auStack_a8);
  }
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release(puVar4);
  _swift_release(param_5);
  _swift_bridgeObjectRelease(0);
LAB_1008fd088:
  _swift_release(param_5);
  _swift_release_n(param_2,3);
  return 0;
}



/* Address: 0x1008fd0dc | FUN_1008fd0dc */

undefined * FUN_1008fd0dc(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  code *pcVar5;
  long lVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f11ca8;
  _swift_allocObject(&DAT_100f11ca8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  puVar2 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar6 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x30) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar2 + 0x28) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  *(undefined8 *)(puVar2 + 0x18) = 0;
  puVar2[0x20] = 0xff;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x48) = 0;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  puVar3 = &DAT_100f11cd0;
  _swift_allocObject(&DAT_100f11cd0,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = thunk_FUN_1008fcb94;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = uVar8;
  _swift_getObjectType();
  pcVar5 = *(code **)(lVar6 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain(param_3);
  _swift_retain(param_4);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar4;
  (*pcVar5)(uVar4,lVar6);
  if ((uVar8 & 1) == 0) {
    puVar7 = &DAT_100f11cf8;
    _swift_allocObject(&DAT_100f11cf8,0x28,7);
    *(long *)(puVar7 + 0x10) = param_1;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1008fcbc4;
    *(undefined **)(puVar7 + 0x20) = puVar3;
    pcVar5 = *(code **)(lVar6 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar5)(thunk_FUN_100653138,puVar7,uVar4,lVar6);
    _swift_release(puVar7);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fcbc4,puVar3);
      _swift_endAccess(auStack_90);
      lVar6 = 0;
      puVar7 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_retain(param_3);
      _swift_retain(param_4);
      lVar6 = param_1;
      puVar7 = puVar2;
      FUN_1008fcc04(param_1,puVar2,param_2,param_3,param_4);
      _swift_release(param_3);
      _swift_release(param_4);
    }
    FUN_1006486f8(lVar6,puVar7,param_2);
    FUN_100004550(lVar6,puVar7);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(param_2);
  }
  return puVar2;
}



/* Address: 0x1008fd398 | FUN_1008fd398 */

void FUN_1008fd398(undefined8 *param_1)

{
  long unaff_x20;
  
  FUN_1008ee0b8(*param_1,param_1[1],*(undefined1 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined1 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fd3b0 | FUN_1008fd3b0 */

void FUN_1008fd3b0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008eb888(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x852,&DAT_100f11de8,FUN_1008fd3e0
               );
  return;
}



/* Address: 0x1008fd3dc | thunk_FUN_1008fd450 */

void thunk_FUN_1008fd450(void)

{
  FUN_1008fd450();
  return;
}



/* Address: 0x1008fd3e0 | FUN_1008fd3e0 */

void FUN_1008fd3e0(void)

{
  long unaff_x20;
  
  FUN_1008eb968(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x853,FUN_10062285c);
  return;
}



/* Address: 0x1008fd408 | FUN_1008fd408 */

void FUN_1008fd408(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e9f60(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined4 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1008fd424 | FUN_1008fd424 */

void FUN_1008fd424(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008eb888(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x872,&DAT_100f11e38,FUN_1008fd480
               );
  return;
}



/* Address: 0x1008fd450 | FUN_1008fd450 */

void FUN_1008fd450(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(ulong *)(unaff_x20 + 0x20) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fd480 | FUN_1008fd480 */

void FUN_1008fd480(void)

{
  long unaff_x20;
  
  FUN_1008eb968(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),0x873,FUN_100622850);
  return;
}



/* Address: 0x1008fd4a8 | thunk_FUN_100642c78 */

void thunk_FUN_100642c78(void)

{
  FUN_100642c78();
  return;
}



/* Address: 0x1008fd4ac | FUN_1008fd4ac */

void FUN_1008fd4ac(undefined8 param_1,undefined8 param_2)

{
  FUN_1008fd740(param_1,param_2,&DAT_100f12040,&DAT_100f12068,thunk_FUN_1008fd9fc,FUN_1005e664c);
  return;
}


