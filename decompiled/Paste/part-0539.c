/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10061fb24 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb28 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb2c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb30 | FUN_10061fb30 */

ulong FUN_10061fb30(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_1006422fc();
    puVar4 = &DAT_100eec1a8;
    _swift_allocObject(&DAT_100eec1a8,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_100622694;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100eec1d0;
      _swift_allocObject(&DAT_100eec1d0,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = FUN_1005dffb0;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(FUN_1005dfe64,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(FUN_1005dffb0,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_100622308(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Address: 0x10061fd60 | FUN_10061fd60 */

undefined4 FUN_10061fd60(void)

{
  return 1000000000;
}



/* Address: 0x10061fd70 | FUN_10061fd70 */

void FUN_10061fd70(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Address: 0x10061fdc4 | FUN_10061fdc4 */

void FUN_10061fdc4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 1;
  return;
}



/* Address: 0x10061fde8 | FUN_10061fde8 */

void FUN_10061fde8(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Address: 0x10061fe40 | FUN_10061fe40 */

void FUN_10061fe40(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Address: 0x10061fe64 | FUN_10061fe64 */

void FUN_10061fe64(long param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  DispatchTime DVar3;
  DispatchTime DVar4;
  __uint64 _Var5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  code *pcVar13;
  
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar12 = *(long *)(DVar3.unknown + -8);
  lVar10 = *(long *)(lVar12 + 0x40);
  if (*(long *)(unaff_x20 + 0x38) == 0) {
    if (*(char *)(unaff_x20 + 0x18) == '\x01') {
      lVar10 = *(long *)(param_1 + 0x18);
      if (lVar10 != 0) {
        _swift_retain(lVar10);
        FUN_10062ab88();
        _swift_release(lVar10);
        return;
      }
    }
    else {
      uVar11 = *(ulong *)(unaff_x20 + 0x10);
      DVar4 = Dispatch::DispatchTime::now(DVar3);
      _Var5 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar4);
      (**(code **)(lVar12 + 8))
                (&stack0xffffffffffffffb0 + -(lVar10 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
      if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10062004c);
        (*pcVar2)();
      }
      if (_Var5 < uVar11) {
        uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        lVar10 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
        _swift_getObjectType(uVar6);
        FUN_1000f3c84();
        puVar7 = &DAT_100eebd78;
        _swift_allocObject(&DAT_100eebd78,0x20,7);
        *(long *)(puVar7 + 0x10) = unaff_x20;
        *(long *)(puVar7 + 0x18) = param_1;
        _swift_getObjectType(uVar6);
        pcVar13 = *(code **)(lVar10 + 0xa8);
        _swift_unknownObjectRetain(uVar6);
        _swift_retain();
        _swift_retain(param_1);
        pcVar2 = FUN_100622418;
        puVar8 = puVar7;
        (*pcVar13)();
        _swift_unknownObjectRelease(uVar6);
        _swift_release(puVar7);
        uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
        *(ulong *)(unaff_x20 + 0x38) = uVar11;
        *(code **)(unaff_x20 + 0x40) = pcVar2;
        *(undefined **)(unaff_x20 + 0x48) = puVar8;
        FUN_100622430(uVar6,uVar1,uVar9);
      }
      else {
        *(undefined8 *)(unaff_x20 + 0x10) = 0;
        *(undefined1 *)(unaff_x20 + 0x18) = 1;
        uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar9 = *(undefined8 *)(unaff_x20 + 0x48);
        *(undefined8 *)(unaff_x20 + 0x40) = 0;
        *(undefined8 *)(unaff_x20 + 0x48) = 0;
        *(long *)(unaff_x20 + 0x38) = 0;
        FUN_100622430(uVar6,uVar1,uVar9);
        lVar10 = *(long *)(param_1 + 0x18);
        if (lVar10 != 0) {
          _swift_retain(lVar10);
          FUN_10062ab88();
          _swift_release(lVar10);
        }
      }
    }
  }
  return;
}



/* Address: 0x10062004c | FUN_10062004c */

void FUN_10062004c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  code *pcVar3;
  DispatchTime DVar4;
  undefined *puVar5;
  long *plVar6;
  long lVar7;
  DispatchTime DVar8;
  __uint64 _Var9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  long lVar14;
  long unaff_x20;
  code *pcVar15;
  long lVar16;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_80;
  undefined *puStack_78;
  undefined4 local_70;
  undefined8 local_68;
  
  DVar4 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar16 = *(long *)(DVar4.unknown + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  local_68 = param_2;
  _swift_errorRetain(param_2);
  puVar5 = &DAT_100fd4f20;
  FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
  plVar6 = &local_80;
  _swift_dynamicCast(plVar6,&local_68,puVar5,&DAT_100ef11e8,6);
  if ((int)plVar6 != 0) {
    lVar7 = local_80;
    puVar5 = puStack_78;
    (**(code **)(unaff_x20 + 0x20))(local_80,puStack_78,local_70);
    _swift_bridgeObjectRelease();
    if (((uint)puVar5 & 0xff) != 1) {
      DVar8 = Dispatch::DispatchTime::now(puStack_78);
      _Var9 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar8);
      (**(code **)(lVar16 + 8))(auStack_90 + -(lVar14 + 0xfU & 0xfffffffffffffff0),DVar4.unknown);
      if (0x7ffffffffffffffe < _Var9) {
        _Var9 = 0x7fffffffffffffff;
      }
      uVar1 = 0x7fffffffffffffff;
      if (!SCARRY8(_Var9,lVar7)) {
        uVar1 = _Var9 + lVar7 & ((long)(_Var9 + lVar7) >> 0x3f ^ 0xffffffffffffffffU);
      }
      *(ulong *)(unaff_x20 + 0x10) = uVar1;
      *(undefined1 *)(unaff_x20 + 0x18) = 0;
      lVar14 = *(long *)(unaff_x20 + 0x38);
      if (lVar14 != 0) {
        uVar10 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
        _swift_retain(lVar14);
        _swift_retain(uVar2);
        FUN_1006202fc(lVar14,uVar10,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
        if (*(char *)(unaff_x20 + 0x18) == '\x01') {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1006202c4);
          (*pcVar3)();
        }
        local_88 = *(undefined8 *)(unaff_x20 + 0x10);
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
        lVar16 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
        _swift_getObjectType(uVar10);
        FUN_1000f3c84();
        puVar5 = &DAT_100eebda0;
        _swift_allocObject(&DAT_100eebda0,0x20,7);
        *(long *)(puVar5 + 0x10) = unaff_x20;
        *(long *)(puVar5 + 0x18) = param_1;
        _swift_getObjectType(uVar10);
        pcVar15 = *(code **)(lVar16 + 0xa8);
        _swift_unknownObjectRetain(uVar10);
        _swift_retain();
        _swift_retain(param_1);
        pcVar3 = FUN_1006227cc;
        uVar11 = local_88;
        puVar12 = puVar5;
        (*pcVar15)();
        _swift_unknownObjectRelease(uVar10);
        _swift_release(puVar5);
        _swift_release(uVar2);
        _swift_release(lVar14);
        uVar10 = *(undefined8 *)(unaff_x20 + 0x38);
        uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
        uVar13 = *(undefined8 *)(unaff_x20 + 0x48);
        *(undefined8 *)(unaff_x20 + 0x38) = uVar11;
        *(code **)(unaff_x20 + 0x40) = pcVar3;
        *(undefined **)(unaff_x20 + 0x48) = puVar12;
        FUN_100622430(uVar10,uVar2,uVar13);
      }
    }
    if (*(char *)(unaff_x20 + 0x30) != '\x01') {
      return;
    }
  }
  lVar14 = *(long *)(param_1 + 0x10);
  if (lVar14 != 0) {
    _swift_retain(lVar14);
    FUN_10062b624(param_2);
    _swift_release(lVar14);
  }
  return;
}



/* Address: 0x1006202c4 | FUN_1006202c4 */

void FUN_1006202c4(void)

{
  FUN_1006202fc();
  return;
}



/* Address: 0x1006202e0 | FUN_1006202e0 */

void FUN_1006202e0(void)

{
  FUN_1006202fc();
  return;
}



/* Address: 0x1006202fc | FUN_1006202fc */

void FUN_1006202fc(long param_1,code *param_2,undefined8 param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  code *pcVar6;
  
  if (DAT_100fd8330 != -1) {
    _swift_once(&DAT_100fd8330,FUN_100641c94);
  }
  uVar4 = DAT_101057c18;
  uVar2 = *(ulong *)(param_1 + 0x20);
  lVar1 = *(long *)(param_1 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) == 0) {
    _swift_allocObject(param_5,0x20,7);
    *(long *)(param_5 + 0x10) = param_1;
    *(undefined8 *)(param_5 + 0x18) = uVar4;
    pcVar6 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
    (*pcVar6)(param_6,param_5,uVar2,lVar1);
    _swift_release(param_5);
  }
  else {
    (*param_4)(uVar4);
    FUN_1006486f8();
    FUN_100004550(uVar4,lVar5);
    _swift_bridgeObjectRelease(param_3);
  }
  (*param_2)();
  return;
}



/* Address: 0x100620424 | FUN_100620424 */

void FUN_100620424(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  long lVar4;
  
  lVar4 = *(long *)(unaff_x20 + 0x38);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_retain(lVar4);
    _swift_retain(uVar2);
    FUN_1006202fc(lVar4,uVar1,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
    _swift_release(uVar2);
    _swift_release(lVar4);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    FUN_100622430(uVar1,uVar2,uVar3);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    FUN_10062b234();
    _swift_release(lVar4);
    return;
  }
  return;
}



/* Address: 0x1006204f4 | FUN_1006204f4 */

void FUN_1006204f4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x20 + 0x38);
  if (lVar6 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x48);
    _swift_retain(lVar6);
    _swift_retain(uVar2);
    FUN_1006202fc(lVar6,uVar1,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(long *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    FUN_100622430(uVar1,uVar3,uVar4);
    lVar5 = *(long *)(param_1 + 0x18);
    if (lVar5 != 0) {
      _swift_retain(lVar5);
      FUN_10062ab88();
      _swift_release(lVar5);
    }
    _swift_release(uVar2);
    _swift_release(lVar6);
  }
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  *(undefined1 *)(unaff_x20 + 0x18) = 1;
  return;
}



/* Address: 0x1006205b8 | FUN_1006205b8 */

void FUN_1006205b8(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined1 *)(param_1 + 0x18) = 1;
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  uVar2 = *(undefined8 *)(param_1 + 0x40);
  uVar3 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined8 *)(param_1 + 0x48) = 0;
  FUN_100622430(uVar1,uVar2,uVar3);
  lVar4 = *(long *)(param_2 + 0x18);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    FUN_10062ab88();
    _swift_release(lVar4);
  }
  return;
}



/* Address: 0x10062061c | FUN_10062061c */

void FUN_10062061c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x100620644 | FUN_100620644 */

void FUN_100620644(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100620674 | thunk_FUN_100620424 */

void thunk_FUN_100620424(void)

{
  FUN_100620424();
  return;
}



/* Address: 0x100620678 | thunk_FUN_10062004c */

void thunk_FUN_10062004c(void)

{
  FUN_10062004c();
  return;
}



/* Address: 0x10062067c | thunk_FUN_10061fe64 */

void thunk_FUN_10061fe64(void)

{
  FUN_10061fe64();
  return;
}



/* Address: 0x100620680 | thunk_FUN_1006204f4 */

void thunk_FUN_1006204f4(void)

{
  FUN_1006204f4();
  return;
}



/* Address: 0x100620684 | FUN_100620684 */

void FUN_100620684(void)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined2 *)(unaff_x20 + 0x10) = 0x100;
  return;
}



/* Address: 0x1006206ac | FUN_1006206ac */

void FUN_1006206ac(void)

{
  long unaff_x20;
  
  *(undefined2 *)(unaff_x20 + 0x10) = 0x100;
  return;
}



/* Address: 0x1006206bc | FUN_1006206bc */

void FUN_1006206bc(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  if (*(char *)(unaff_x20 + 0x11) == '\x01') {
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      _swift_retain(lVar1);
      FUN_10062ab88();
      _swift_release(lVar1);
      return;
    }
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x10) = 1;
  }
  return;
}



/* Address: 0x10062070c | FUN_10062070c */

void FUN_10062070c(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  long unaff_x20;
  undefined **ppuVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(ulong *)(lVar6 + 0x40);
  ppuVar5 = *(undefined ***)(lVar6 + 0x48);
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(uVar2 + 0x28) = 0;
    *(undefined ***)(uVar2 + 0x30) = ppuVar5;
    *(undefined2 *)(uVar2 + 0x38) = 0;
    *(undefined8 *)(uVar2 + 0x40) = uVar3;
    *(undefined ***)(uVar2 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(uVar2 + 0x20) = lVar6;
    *(undefined8 *)(uVar2 + 0x18) = uVar9;
    *(undefined8 *)(uVar2 + 0x10) = uVar8;
    _swift_retain(lVar6);
    _swift_unknownObjectRetain(uVar8);
    ppuVar5 = &PTR_PTR_100eeeed8;
  }
  uVar4 = uVar2;
  _swift_getObjectType();
  pcVar7 = (code *)ppuVar5[0xb];
  _swift_unknownObjectRetain(uVar1);
  (*pcVar7)(uVar4,ppuVar5);
  _swift_unknownObjectRelease(uVar2);
  *(byte *)(unaff_x20 + 0x11) = (byte)uVar4 & 1;
  if ((uVar4 & 1) == 0) {
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_100620830;
    _swift_retain(lVar6);
    FUN_10062aae4();
  }
  else {
    if (*(char *)(unaff_x20 + 0x10) != '\x01') goto LAB_100620830;
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
    lVar6 = *(long *)(param_1 + 0x18);
    if (lVar6 == 0) goto LAB_100620830;
    _swift_retain(lVar6);
    FUN_10062ab88();
  }
  _swift_release(lVar6);
LAB_100620830:
  lVar6 = *(long *)(param_1 + 0x10);
  if (lVar6 == 0) {
    return;
  }
  _swift_retain(lVar6);
  FUN_10062b4d0();
  _swift_release(lVar6);
  return;
}



/* Address: 0x100620880 | FUN_100620880 */

void FUN_100620880(long param_1)

{
  long unaff_x20;
  long lVar1;
  
  if (*(char *)(unaff_x20 + 0x10) == '\x01') {
    *(undefined1 *)(unaff_x20 + 0x10) = 0;
    lVar1 = *(long *)(param_1 + 0x18);
    if (lVar1 != 0) {
      _swift_retain(lVar1);
      FUN_10062ab88();
      _swift_release(lVar1);
      return;
    }
  }
  return;
}



/* Address: 0x1006208cc | FUN_1006208cc */

void FUN_1006208cc(void)

{
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1006208dc | thunk_FUN_10062070c */

void thunk_FUN_10062070c(void)

{
  FUN_10062070c();
  return;
}



/* Address: 0x1006208e0 | thunk_FUN_1006206bc */

void thunk_FUN_1006206bc(void)

{
  FUN_1006206bc();
  return;
}



/* Address: 0x1006208e4 | FUN_1006208e4 */

void FUN_1006208e4(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined1 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined1 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  return;
}



/* Address: 0x10062096c | FUN_10062096c */

void FUN_10062096c(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x39) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  *(undefined1 *)(unaff_x20 + 0x28) = param_4;
  *(undefined8 *)(unaff_x20 + 0x30) = param_5;
  *(undefined1 *)(unaff_x20 + 0x38) = param_6;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  return;
}



/* Address: 0x1006209a4 | FUN_1006209a4 */

void FUN_1006209a4(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar6 = *(long *)(param_1 + 0x20);
  uVar1 = *(ulong *)(lVar6 + 0x40);
  ppuVar5 = *(undefined ***)(lVar6 + 0x48);
  uVar2 = uVar1;
  if (uVar1 == 0) {
    uVar2 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar9 = *(undefined8 *)(lVar6 + 0x38);
    uVar8 = *(undefined8 *)(lVar6 + 0x30);
    *(undefined8 *)(uVar2 + 0x28) = 0;
    *(undefined ***)(uVar2 + 0x30) = ppuVar5;
    *(undefined2 *)(uVar2 + 0x38) = 0;
    *(undefined8 *)(uVar2 + 0x40) = uVar3;
    *(undefined ***)(uVar2 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(uVar2 + 0x20) = lVar6;
    *(undefined8 *)(uVar2 + 0x18) = uVar9;
    *(undefined8 *)(uVar2 + 0x10) = uVar8;
    _swift_retain(lVar6);
    _swift_unknownObjectRetain(uVar8);
    ppuVar5 = &PTR_PTR_100eeeed8;
  }
  uVar4 = uVar2;
  _swift_getObjectType();
  pcVar7 = (code *)ppuVar5[0xc];
  _swift_unknownObjectRetain(uVar1);
  (*pcVar7)(uVar4,ppuVar5);
  _swift_unknownObjectRelease(uVar2);
  if ((uVar4 & 1) == 0) {
    return;
  }
  FUN_100620ab8(param_1);
  return;
}



/* Address: 0x100620ab8 | FUN_100620ab8 */

void FUN_100620ab8(long param_1)

{
  undefined8 uVar1;
  DispatchTime DVar2;
  DispatchTime DVar3;
  __uint64 _Var4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  undefined *puVar12;
  code *pcVar13;
  
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar10 = *(long *)(DVar2.unknown + -8);
  lVar7 = *(long *)(lVar10 + 0x40);
  DVar3 = Dispatch::DispatchTime::now(DVar2);
  _Var4 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar3);
  (**(code **)(lVar10 + 8))
            (&stack0xffffffffffffffa0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  uVar8 = 0;
  pcVar11 = (code *)0x0;
  puVar12 = (undefined *)0x0;
  if (0x7ffffffffffffffe < _Var4) {
    _Var4 = 0x7fffffffffffffff;
  }
  *(__uint64 *)(unaff_x20 + 0x40) = _Var4;
  *(__uint64 *)(unaff_x20 + 0x48) = _Var4;
  if (*(char *)(unaff_x20 + 0x18) != '\x01') {
    uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar9 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    _swift_getObjectType(uVar9);
    FUN_1000f3c84();
    puVar12 = &DAT_100eec2c0;
    _swift_allocObject(&DAT_100eec2c0,0x28,7);
    *(long *)(puVar12 + 0x10) = unaff_x20;
    *(long *)(puVar12 + 0x18) = param_1;
    *(undefined8 *)(puVar12 + 0x20) = uVar8;
    puVar5 = &DAT_100eec2e8;
    _swift_allocObject(&DAT_100eec2e8,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_100622710;
    *(undefined **)(puVar5 + 0x18) = puVar12;
    _swift_getObjectType(uVar9);
    pcVar13 = *(code **)(lVar7 + 0xb0);
    _swift_unknownObjectRetain(uVar9);
    _swift_retain();
    _swift_retain(param_1);
    pcVar11 = FUN_1006227e0;
    puVar12 = puVar5;
    (*pcVar13)();
    _swift_unknownObjectRelease(uVar9);
    _swift_release(puVar5);
  }
  uVar9 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x60);
  *(undefined8 *)(unaff_x20 + 0x50) = uVar8;
  *(code **)(unaff_x20 + 0x58) = pcVar11;
  *(undefined **)(unaff_x20 + 0x60) = puVar12;
  FUN_100622430(uVar9,uVar1,uVar6);
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    uVar9 = 0;
    pcVar11 = (code *)0x0;
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x20);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    _swift_getObjectType(uVar8);
    FUN_1000f3c84();
    puVar12 = &DAT_100eec270;
    _swift_allocObject(&DAT_100eec270,0x28,7);
    *(long *)(puVar12 + 0x10) = unaff_x20;
    *(long *)(puVar12 + 0x18) = param_1;
    *(undefined8 *)(puVar12 + 0x20) = uVar9;
    puVar5 = &DAT_100eec298;
    _swift_allocObject(&DAT_100eec298,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_100622704;
    *(undefined **)(puVar5 + 0x18) = puVar12;
    _swift_getObjectType(uVar8);
    pcVar13 = *(code **)(lVar7 + 0xb0);
    _swift_retain();
    _swift_retain(param_1);
    _swift_unknownObjectRetain(uVar8);
    pcVar11 = FUN_1006227e0;
    puVar12 = puVar5;
    (*pcVar13)();
    _swift_unknownObjectRelease(uVar8);
    _swift_release(puVar5);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x78);
  *(undefined8 *)(unaff_x20 + 0x68) = uVar9;
  *(code **)(unaff_x20 + 0x70) = pcVar11;
  *(undefined **)(unaff_x20 + 0x78) = puVar12;
  FUN_100622430(uVar8,uVar1,uVar6);
  if (*(char *)(unaff_x20 + 0x38) == '\x01') {
    uVar9 = 0;
    pcVar11 = (code *)0x0;
    puVar12 = (undefined *)0x0;
  }
  else {
    uVar9 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar8 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    lVar7 = *(long *)(*(long *)(param_1 + 0x20) + 0x38);
    _swift_getObjectType(uVar8);
    FUN_1000f3c84();
    puVar12 = &DAT_100eec220;
    _swift_allocObject(&DAT_100eec220,0x28,7);
    *(long *)(puVar12 + 0x10) = unaff_x20;
    *(long *)(puVar12 + 0x18) = param_1;
    *(undefined8 *)(puVar12 + 0x20) = uVar9;
    puVar5 = &DAT_100eec248;
    _swift_allocObject(&DAT_100eec248,0x20,7);
    *(code **)(puVar5 + 0x10) = FUN_1006226d8;
    *(undefined **)(puVar5 + 0x18) = puVar12;
    _swift_getObjectType(uVar8);
    pcVar13 = *(code **)(lVar7 + 0xb0);
    _swift_retain();
    _swift_retain(param_1);
    _swift_unknownObjectRetain(uVar8);
    pcVar11 = FUN_1006226e4;
    puVar12 = puVar5;
    (*pcVar13)();
    _swift_unknownObjectRelease(uVar8);
    _swift_release(puVar5);
  }
  uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x90);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar9;
  *(code **)(unaff_x20 + 0x88) = pcVar11;
  *(undefined **)(unaff_x20 + 0x90) = puVar12;
  FUN_100622430(uVar8,uVar1,uVar6);
  return;
}



/* Address: 0x100620e4c | thunk_FUN_10062245c */

void thunk_FUN_10062245c(void)

{
  FUN_10062245c();
  return;
}



/* Address: 0x100620e50 | FUN_100620e50 */

void FUN_100620e50(long param_1)

{
  long lVar1;
  
  FUN_100620ab8();
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b2d8();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100620e94 | FUN_100620e94 */

void FUN_100620e94(long param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  
  if ((*(char *)(unaff_x20 + 0x18) != '\x01') || (*(char *)(unaff_x20 + 0x38) != '\x01')) {
    *(undefined1 *)(unaff_x20 + 0x39) = 1;
  }
  lVar1 = *(long *)(param_1 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x100620ef8 | FUN_100620ef8 */

void FUN_100620ef8(long param_1)

{
  DispatchTime DVar1;
  DispatchTime DVar2;
  __uint64 _Var3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  if (((*(char *)(unaff_x20 + 0x18) != '\x01') || (*(char *)(unaff_x20 + 0x38) != '\x01')) &&
     (*(char *)(unaff_x20 + 0x39) == '\x01')) {
    DVar2 = Dispatch::DispatchTime::now(DVar1);
    _Var3 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar2);
    (**(code **)(lVar5 + 8))
              (&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
    if (0x7ffffffffffffffe < _Var3) {
      _Var3 = 0x7fffffffffffffff;
    }
    *(__uint64 *)(unaff_x20 + 0x40) = _Var3;
    *(undefined1 *)(unaff_x20 + 0x39) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    _swift_retain(lVar4);
    FUN_10062b42c();
    _swift_release(lVar4);
  }
  return;
}



/* Address: 0x100620fc8 | FUN_100620fc8 */

void FUN_100620fc8(long param_1,undefined8 param_2,long param_3)

{
  char cVar1;
  DispatchTime DVar2;
  long lVar3;
  long lVar4;
  __uint64 _Var5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  long unaff_x20;
  undefined *puVar12;
  undefined *puVar13;
  code *pcVar14;
  undefined *local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar3 = param_3;
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  local_98 = *(long *)(DVar2.unknown + -8);
  lVar11 = *(long *)(local_98 + 0x40);
  if ((*(char *)(unaff_x20 + 0x28) != '\x01') || (*(char *)(unaff_x20 + 0x38) != '\x01')) {
    lVar3 = param_3;
    if (param_3 == 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
      _swift_getObjectType();
      FUN_1006422fc();
    }
    lVar9 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
    _swift_retain(param_3);
    _swift_retain(lVar3);
    lVar4 = lVar9;
    _swift_unknownObjectRetain();
    FUN_10061fb30();
    _swift_release(lVar3);
    _swift_unknownObjectRelease(lVar9);
    puVar12 = &DAT_100eebdf0;
    _swift_allocObject(&DAT_100eebdf0,0x28,7);
    *(code **)(puVar12 + 0x10) = FUN_1006225cc;
    *(long *)(puVar12 + 0x18) = unaff_x20;
    *(long *)(puVar12 + 0x20) = lVar4;
    _swift_beginAccess(lVar4 + 0x10,auStack_78,0,0);
    cVar1 = *(char *)(lVar4 + 0x18);
    if (cVar1 == -1) {
      _swift_beginAccess(lVar4 + 0x30,auStack_90,0x21,0);
      _swift_retain_n();
      _swift_retain(lVar4);
      FUN_10064967c(FUN_1006225d4,puVar12);
      _swift_endAccess(auStack_90);
    }
    else {
      puVar13 = *(undefined **)(lVar4 + 0x10);
      local_a0 = DVar2.unknown;
      _swift_retain_n();
      _swift_retain(lVar4);
      DVar2.unknown = puVar13;
      FUN_1005dfeb4(puVar13,cVar1);
      DVar2 = Dispatch::DispatchTime::now(DVar2);
      _Var5 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar2);
      FUN_100308538(puVar13,cVar1);
      (**(code **)(local_98 + 8))((long)&local_a0 - (lVar11 + 0xfU & 0xfffffffffffffff0),local_a0);
      if (0x7ffffffffffffffe < _Var5) {
        _Var5 = 0x7fffffffffffffff;
      }
      *(__uint64 *)(unaff_x20 + 0x48) = _Var5;
    }
    uVar10 = 0;
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(lVar4);
    _swift_release();
    _swift_release(puVar12);
    _swift_bridgeObjectRelease(0);
    lVar11 = DAT_100fd7138;
    puVar12 = *(undefined **)(param_1 + 0x18);
    if (puVar12 == (undefined *)0x0) {
      _swift_retain(lVar3);
      if (lVar11 != -1) {
        _swift_once(&DAT_100fd7138,FUN_10061d9bc);
      }
      uVar8 = DAT_101057be8;
      uVar6 = *(ulong *)(lVar3 + 0x20);
      lVar11 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      uVar7 = uVar6;
      lVar9 = lVar11;
      (**(code **)(lVar11 + 0x10))();
      if ((uVar7 & 1) != 0) {
        thunk_FUN_1005de8f4(uVar8);
        FUN_1006486f8();
        FUN_100004550(uVar8,lVar9);
        _swift_release_n(lVar3,2);
        _swift_bridgeObjectRelease(uVar10);
        return;
      }
      puVar12 = &DAT_100eebe18;
      _swift_allocObject(&DAT_100eebe18,0x20,7);
      *(long *)(puVar12 + 0x10) = lVar3;
      *(undefined8 *)(puVar12 + 0x18) = uVar8;
      pcVar14 = *(code **)(lVar11 + 0x18);
      _swift_retain(lVar3);
      _swift_errorRetain(uVar8);
      (*pcVar14)(thunk_FUN_10061dfe0,puVar12,uVar6,lVar11);
      _swift_release_n(lVar3,2);
    }
    else {
      _swift_retain(lVar3);
      _swift_retain(puVar12);
      FUN_10062ac2c(param_2,lVar3);
      _swift_release_n(lVar3,2);
    }
    _swift_release(puVar12);
    return;
  }
  puVar12 = *(undefined **)(param_1 + 0x18);
  if (puVar12 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar10 = DAT_101057be8;
    uVar6 = *(ulong *)(param_3 + 0x20);
    lVar11 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar7 = uVar6;
    lVar9 = lVar11;
    (**(code **)(lVar11 + 0x10))();
    if ((uVar7 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar10);
      FUN_1006486f8();
      FUN_100004550(uVar10,lVar9);
      _swift_bridgeObjectRelease(lVar3);
      return;
    }
    puVar12 = &DAT_100eebdc8;
    _swift_allocObject(&DAT_100eebdc8,0x20,7);
    *(long *)(puVar12 + 0x10) = param_3;
    *(undefined8 *)(puVar12 + 0x18) = uVar10;
    pcVar14 = *(code **)(lVar11 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar10);
    (*pcVar14)(FUN_10061dfe0,puVar12,uVar6,lVar11);
  }
  else {
    _swift_retain(puVar12);
    FUN_10062ac2c(param_2,param_3);
  }
  _swift_release(puVar12);
  return;
}



/* Address: 0x100621478 | FUN_100621478 */

void FUN_100621478(undefined8 param_1,long param_2)

{
  DispatchTime DVar1;
  DispatchTime DVar2;
  __uint64 _Var3;
  long lVar4;
  long lVar5;
  
  DVar1 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  DVar2 = Dispatch::DispatchTime::now(DVar1);
  _Var3 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar2);
  (**(code **)(lVar5 + 8))
            (&stack0xffffffffffffffc0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),DVar1.unknown);
  if (0x7ffffffffffffffe < _Var3) {
    _Var3 = 0x7fffffffffffffff;
  }
  *(__uint64 *)(param_2 + 0x48) = _Var3;
  return;
}



/* Address: 0x100621500 | FUN_100621500 */

void FUN_100621500(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  DispatchTime DVar2;
  undefined8 uVar3;
  undefined *puVar4;
  DispatchTime DVar5;
  __uint64 _Var6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined1 local_80 [24];
  undefined *local_68;
  
  local_88 = param_3;
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar13 = *(long *)(DVar2.unknown + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  lVar14 = *(long *)(param_2 + 0x20);
  puVar8 = *(undefined **)(lVar14 + 0x40);
  ppuVar15 = *(undefined ***)(lVar14 + 0x48);
  DVar5.unknown = puVar8;
  local_90 = param_2;
  if (puVar8 == (undefined *)0x0) {
    DVar5.unknown = (undefined *)0x0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uStack_98 = *(undefined8 *)(lVar14 + 0x38);
    local_a0 = *(undefined8 *)(lVar14 + 0x30);
    *(undefined8 *)(DVar5.unknown + 0x28) = 0;
    *(undefined ***)(DVar5.unknown + 0x30) = ppuVar15;
    *(undefined2 *)(DVar5.unknown + 0x38) = 0;
    *(undefined8 *)(DVar5.unknown + 0x40) = uVar3;
    *(undefined ***)(DVar5.unknown + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(DVar5.unknown + 0x20) = lVar14;
    *(undefined8 *)(DVar5.unknown + 0x18) = uStack_98;
    *(undefined8 *)(DVar5.unknown + 0x10) = local_a0;
    _swift_retain(lVar14);
    _swift_unknownObjectRetain(local_a0);
    ppuVar15 = &PTR_PTR_100eeeed8;
  }
  puVar4 = DVar5.unknown;
  _swift_getObjectType();
  pcVar11 = (code *)ppuVar15[0xc];
  _swift_unknownObjectRetain(puVar8);
  (*pcVar11)(puVar4,ppuVar15);
  _swift_unknownObjectRelease();
  if (((ulong)puVar4 & 1) != 0) {
    if (*(char *)(param_1 + 0x39) == '\x01') {
      uVar3 = *(undefined8 *)(lVar14 + 0x30);
      lVar10 = *(long *)(lVar14 + 0x38);
      _swift_getObjectType(uVar3);
      FUN_1000f3c84();
      puVar8 = &DAT_100eec3b0;
      _swift_allocObject(&DAT_100eec3b0,0x28,7);
      lVar14 = local_88;
      lVar13 = local_90;
      *(long *)(puVar8 + 0x10) = param_1;
      *(long *)(puVar8 + 0x18) = local_90;
      *(long *)(puVar8 + 0x20) = local_88;
      puVar4 = &DAT_100eec3d8;
      _swift_allocObject(&DAT_100eec3d8,0x20,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_100622710;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      _swift_getObjectType(uVar3);
      pcVar12 = *(code **)(lVar10 + 0xb0);
      _swift_unknownObjectRetain(uVar3);
      _swift_retain(param_1);
      _swift_retain(lVar13);
      pcVar11 = FUN_1006227e0;
      puVar8 = puVar4;
      (*pcVar12)();
      _swift_unknownObjectRelease(uVar3);
      _swift_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x50) = lVar14;
      *(code **)(param_1 + 0x58) = pcVar11;
      *(undefined **)(param_1 + 0x60) = puVar8;
      FUN_100622430(uVar3,uVar1,uVar9);
      return;
    }
    DVar5 = Dispatch::DispatchTime::now(DVar5);
    _Var6 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar5);
    (**(code **)(lVar13 + 8))((long)&local_a0 - (lVar10 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
    lVar10 = local_88;
    lVar13 = *(long *)(param_1 + 0x40);
    if (lVar13 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x10062197c);
      (*pcVar11)();
    }
    if (0x7ffffffffffffffe < _Var6) {
      _Var6 = 0x7fffffffffffffff;
    }
    uVar3 = *(undefined8 *)(lVar14 + 0x30);
    lVar14 = *(long *)(lVar14 + 0x38);
    _swift_getObjectType(uVar3);
    FUN_1000f3c84();
    if ((long)(_Var6 - lVar13) < lVar10) {
      uVar7 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar13,lVar10)) {
        uVar7 = lVar13 + lVar10 & (lVar13 + lVar10 >> 0x3f ^ 0xffffffffffffffffU);
      }
      puVar8 = &DAT_100eec310;
      _swift_allocObject(&DAT_100eec310,0x28,7);
      lVar13 = local_90;
      *(long *)(puVar8 + 0x10) = param_1;
      *(long *)(puVar8 + 0x18) = local_90;
      *(long *)(puVar8 + 0x20) = lVar10;
      puVar4 = &DAT_100eec338;
      _swift_allocObject(&DAT_100eec338,0x20,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_100622710;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      _swift_getObjectType(uVar3);
      pcVar12 = *(code **)(lVar14 + 0xa8);
      _swift_retain(param_1);
      _swift_retain(lVar13);
      _swift_unknownObjectRetain(uVar3);
      pcVar11 = FUN_1006227e0;
      puVar8 = puVar4;
      (*pcVar12)();
      _swift_unknownObjectRelease(uVar3);
      _swift_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      *(ulong *)(param_1 + 0x50) = uVar7;
      *(code **)(param_1 + 0x58) = pcVar11;
      *(undefined **)(param_1 + 0x60) = puVar8;
      FUN_100622430(uVar3,uVar1,uVar9);
    }
    else {
      puVar8 = &DAT_100eec360;
      _swift_allocObject(&DAT_100eec360,0x28,7);
      lVar13 = local_90;
      *(long *)(puVar8 + 0x10) = param_1;
      *(long *)(puVar8 + 0x18) = local_90;
      *(long *)(puVar8 + 0x20) = lVar10;
      puVar4 = &DAT_100eec388;
      _swift_allocObject(&DAT_100eec388,0x20,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_100622710;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      _swift_getObjectType(uVar3);
      pcVar12 = *(code **)(lVar14 + 0xb0);
      _swift_retain(param_1);
      _swift_retain(lVar13);
      _swift_unknownObjectRetain(uVar3);
      pcVar11 = FUN_1006227e0;
      puVar8 = puVar4;
      (*pcVar12)();
      _swift_unknownObjectRelease(uVar3);
      _swift_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar9 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x50) = lVar10;
      *(code **)(param_1 + 0x58) = pcVar11;
      *(undefined **)(param_1 + 0x60) = puVar8;
      FUN_100622430(uVar3,uVar1,uVar9);
      local_68 = &DAT_100eec138;
      local_80[0] = 1;
      lVar10 = *(long *)(lVar13 + 0x10);
      if (lVar10 != 0) {
        _swift_retain(lVar10);
        FUN_10062b574(local_80);
        _swift_release(lVar10);
      }
      FUN_100004594(local_80);
    }
  }
  return;
}



/* Address: 0x10062197c | FUN_10062197c */

void FUN_10062197c(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  DispatchTime DVar2;
  undefined8 uVar3;
  undefined *puVar4;
  DispatchTime DVar5;
  __uint64 _Var6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  undefined **ppuVar15;
  long lVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined1 local_80 [24];
  undefined *local_68;
  
  local_88 = param_3;
  DVar2 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar13 = *(long *)(DVar2.unknown + -8);
  lVar10 = *(long *)(lVar13 + 0x40);
  lVar14 = *(long *)(param_2 + 0x20);
  puVar8 = *(undefined **)(lVar14 + 0x40);
  ppuVar15 = *(undefined ***)(lVar14 + 0x48);
  DVar5.unknown = puVar8;
  local_90 = param_2;
  if (puVar8 == (undefined *)0x0) {
    DVar5.unknown = (undefined *)0x0;
    FUN_10063c734();
    _swift_allocObject();
    uVar3 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uStack_98 = *(undefined8 *)(lVar14 + 0x38);
    local_a0 = *(undefined8 *)(lVar14 + 0x30);
    *(undefined8 *)(DVar5.unknown + 0x28) = 0;
    *(undefined ***)(DVar5.unknown + 0x30) = ppuVar15;
    *(undefined2 *)(DVar5.unknown + 0x38) = 0;
    *(undefined8 *)(DVar5.unknown + 0x40) = uVar3;
    *(undefined ***)(DVar5.unknown + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(DVar5.unknown + 0x20) = lVar14;
    *(undefined8 *)(DVar5.unknown + 0x18) = uStack_98;
    *(undefined8 *)(DVar5.unknown + 0x10) = local_a0;
    _swift_retain(lVar14);
    _swift_unknownObjectRetain(local_a0);
    ppuVar15 = &PTR_PTR_100eeeed8;
  }
  puVar4 = DVar5.unknown;
  _swift_getObjectType();
  pcVar11 = (code *)ppuVar15[0xc];
  _swift_unknownObjectRetain(puVar8);
  (*pcVar11)(puVar4,ppuVar15);
  _swift_unknownObjectRelease();
  if (((ulong)puVar4 & 1) != 0) {
    lVar16 = *(long *)(param_1 + 0x48);
    DVar5 = Dispatch::DispatchTime::now(DVar5);
    _Var6 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar5);
    (**(code **)(lVar13 + 8))((long)&local_a0 - (lVar10 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
    if (lVar16 < 0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100621cf4);
      (*pcVar11)();
    }
    if (0x7ffffffffffffffe < _Var6) {
      _Var6 = 0x7fffffffffffffff;
    }
    uVar3 = *(undefined8 *)(lVar14 + 0x30);
    lVar10 = *(long *)(lVar14 + 0x38);
    _swift_getObjectType(uVar3);
    FUN_1000f3c84();
    lVar13 = local_88;
    if ((long)(_Var6 - lVar16) < local_88) {
      lVar14 = *(long *)(param_1 + 0x48);
      if (lVar14 < 0) {
                    /* WARNING: Does not return */
        pcVar11 = (code *)SoftwareBreakpoint(1,0x100621cf8);
        (*pcVar11)();
      }
      uVar7 = 0x7fffffffffffffff;
      if (!SCARRY8(lVar14,local_88)) {
        uVar7 = lVar14 + local_88 & (lVar14 + local_88 >> 0x3f ^ 0xffffffffffffffffU);
      }
      puVar8 = &DAT_100eec400;
      _swift_allocObject(&DAT_100eec400,0x28,7);
      lVar14 = local_90;
      *(long *)(puVar8 + 0x10) = param_1;
      *(long *)(puVar8 + 0x18) = local_90;
      *(long *)(puVar8 + 0x20) = lVar13;
      puVar4 = &DAT_100eec428;
      _swift_allocObject(&DAT_100eec428,0x20,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_100622704;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      _swift_getObjectType(uVar3);
      pcVar12 = *(code **)(lVar10 + 0xa8);
      _swift_retain(param_1);
      _swift_retain(lVar14);
      _swift_unknownObjectRetain(uVar3);
      pcVar11 = FUN_1006227e0;
      puVar8 = puVar4;
      (*pcVar12)();
      _swift_unknownObjectRelease(uVar3);
      _swift_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      *(ulong *)(param_1 + 0x68) = uVar7;
      *(code **)(param_1 + 0x70) = pcVar11;
      *(undefined **)(param_1 + 0x78) = puVar8;
      FUN_100622430(uVar3,uVar1,uVar9);
    }
    else {
      puVar8 = &DAT_100eec450;
      _swift_allocObject(&DAT_100eec450,0x28,7);
      lVar14 = local_90;
      *(long *)(puVar8 + 0x10) = param_1;
      *(long *)(puVar8 + 0x18) = local_90;
      *(long *)(puVar8 + 0x20) = lVar13;
      puVar4 = &DAT_100eec478;
      _swift_allocObject(&DAT_100eec478,0x20,7);
      *(code **)(puVar4 + 0x10) = thunk_FUN_100622704;
      *(undefined **)(puVar4 + 0x18) = puVar8;
      _swift_getObjectType(uVar3);
      pcVar12 = *(code **)(lVar10 + 0xb0);
      _swift_unknownObjectRetain(uVar3);
      _swift_retain(param_1);
      _swift_retain(lVar14);
      pcVar11 = FUN_1006227e0;
      puVar8 = puVar4;
      (*pcVar12)();
      _swift_unknownObjectRelease(uVar3);
      _swift_release(puVar4);
      uVar3 = *(undefined8 *)(param_1 + 0x68);
      uVar1 = *(undefined8 *)(param_1 + 0x70);
      uVar9 = *(undefined8 *)(param_1 + 0x78);
      *(long *)(param_1 + 0x68) = lVar13;
      *(code **)(param_1 + 0x70) = pcVar11;
      *(undefined **)(param_1 + 0x78) = puVar8;
      FUN_100622430(uVar3,uVar1,uVar9);
      local_68 = &DAT_100eec138;
      local_80[0] = 0;
      lVar10 = *(long *)(lVar14 + 0x10);
      if (lVar10 != 0) {
        _swift_retain(lVar10);
        FUN_10062b574(local_80);
        _swift_release(lVar10);
      }
      FUN_100004594(local_80);
    }
  }
  return;
}



/* Address: 0x100621cf8 | FUN_100621cf8 */

void FUN_100621cf8(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  DispatchTime DVar3;
  undefined8 uVar4;
  undefined *puVar5;
  DispatchTime DVar6;
  __uint64 _Var7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  long lVar15;
  undefined **ppuVar16;
  undefined8 local_a0;
  undefined8 uStack_98;
  long local_90;
  long local_88;
  undefined1 local_80 [24];
  undefined *local_68;
  
  local_90 = param_3;
  DVar3 = Dispatch::DispatchTime::typeMetadataAccessor();
  lVar14 = *(long *)(DVar3.unknown + -8);
  lVar11 = *(long *)(lVar14 + 0x40);
  lVar15 = *(long *)(param_2 + 0x20);
  puVar9 = *(undefined **)(lVar15 + 0x40);
  ppuVar16 = *(undefined ***)(lVar15 + 0x48);
  DVar6.unknown = puVar9;
  local_88 = param_2;
  if (puVar9 == (undefined *)0x0) {
    DVar6.unknown = (undefined *)0x0;
    FUN_10063c734();
    _swift_allocObject();
    uVar4 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uStack_98 = *(undefined8 *)(lVar15 + 0x38);
    local_a0 = *(undefined8 *)(lVar15 + 0x30);
    *(undefined8 *)(DVar6.unknown + 0x28) = 0;
    *(undefined ***)(DVar6.unknown + 0x30) = ppuVar16;
    *(undefined2 *)(DVar6.unknown + 0x38) = 0;
    *(undefined8 *)(DVar6.unknown + 0x40) = uVar4;
    *(undefined ***)(DVar6.unknown + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(DVar6.unknown + 0x20) = lVar15;
    *(undefined8 *)(DVar6.unknown + 0x18) = uStack_98;
    *(undefined8 *)(DVar6.unknown + 0x10) = local_a0;
    _swift_retain(lVar15);
    _swift_unknownObjectRetain(local_a0);
    ppuVar16 = &PTR_PTR_100eeeed8;
  }
  puVar5 = DVar6.unknown;
  _swift_getObjectType();
  pcVar12 = (code *)ppuVar16[0xc];
  _swift_unknownObjectRetain(puVar9);
  (*pcVar12)(puVar5,ppuVar16);
  _swift_unknownObjectRelease();
  if (((ulong)puVar5 & 1) != 0) {
    if (*(char *)(param_1 + 0x39) == '\x01') {
      uVar4 = *(undefined8 *)(lVar15 + 0x30);
      lVar11 = *(long *)(lVar15 + 0x38);
      _swift_getObjectType(uVar4);
      FUN_1000f3c84();
      puVar9 = &DAT_100eec540;
      _swift_allocObject(&DAT_100eec540,0x28,7);
      lVar15 = local_88;
      lVar14 = local_90;
      *(long *)(puVar9 + 0x10) = param_1;
      *(long *)(puVar9 + 0x18) = local_88;
      *(long *)(puVar9 + 0x20) = local_90;
      puVar5 = &DAT_100eec568;
      _swift_allocObject(&DAT_100eec568,0x20,7);
      *(code **)(puVar5 + 0x10) = thunk_FUN_1006226d8;
      *(undefined **)(puVar5 + 0x18) = puVar9;
      _swift_getObjectType(uVar4);
      pcVar13 = *(code **)(lVar11 + 0xb0);
      _swift_unknownObjectRetain(uVar4);
      _swift_retain(param_1);
      _swift_retain(lVar15);
      pcVar12 = FUN_1006227e0;
      puVar9 = puVar5;
      (*pcVar13)();
      _swift_unknownObjectRelease(uVar4);
      _swift_release(puVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x50) = lVar14;
      *(code **)(param_1 + 0x58) = pcVar12;
      *(undefined **)(param_1 + 0x60) = puVar9;
      FUN_100622430(uVar4,uVar1,uVar10);
      return;
    }
    uVar8 = *(ulong *)(param_1 + 0x40);
    uVar2 = *(ulong *)(param_1 + 0x48);
    if ((long)(uVar2 | uVar8) < 0) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10062218c);
      (*pcVar12)();
    }
    if (uVar2 <= uVar8) {
      uVar2 = uVar8;
    }
    DVar6 = Dispatch::DispatchTime::now(DVar6);
    _Var7 = Dispatch::DispatchTime::get_uptimeNanoseconds(DVar6);
    (**(code **)(lVar14 + 8))((long)&local_a0 - (lVar11 + 0xfU & 0xfffffffffffffff0),DVar3.unknown);
    if (0x7ffffffffffffffe < _Var7) {
      _Var7 = 0x7fffffffffffffff;
    }
    if (SBORROW8(_Var7,uVar2)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100622190);
      (*pcVar12)();
    }
    uVar4 = *(undefined8 *)(lVar15 + 0x30);
    lVar11 = *(long *)(lVar15 + 0x38);
    _swift_getObjectType(uVar4);
    FUN_1000f3c84();
    lVar14 = local_90;
    if ((long)(_Var7 - uVar2) < local_90) {
      uVar8 = 0x7fffffffffffffff;
      if (!SCARRY8(uVar2,local_90)) {
        uVar8 = uVar2 + local_90 & ((long)(uVar2 + local_90) >> 0x3f ^ 0xffffffffffffffffU);
      }
      puVar9 = &DAT_100eec4a0;
      _swift_allocObject(&DAT_100eec4a0,0x28,7);
      lVar15 = local_88;
      *(long *)(puVar9 + 0x10) = param_1;
      *(long *)(puVar9 + 0x18) = local_88;
      *(long *)(puVar9 + 0x20) = lVar14;
      puVar5 = &DAT_100eec4c8;
      _swift_allocObject(&DAT_100eec4c8,0x20,7);
      *(code **)(puVar5 + 0x10) = thunk_FUN_1006226d8;
      *(undefined **)(puVar5 + 0x18) = puVar9;
      _swift_getObjectType(uVar4);
      pcVar13 = *(code **)(lVar11 + 0xa8);
      _swift_retain(param_1);
      _swift_retain(lVar15);
      _swift_unknownObjectRetain(uVar4);
      pcVar12 = FUN_1006227e0;
      puVar9 = puVar5;
      (*pcVar13)();
      _swift_unknownObjectRelease(uVar4);
      _swift_release(puVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      *(ulong *)(param_1 + 0x50) = uVar8;
      *(code **)(param_1 + 0x58) = pcVar12;
      *(undefined **)(param_1 + 0x60) = puVar9;
      FUN_100622430(uVar4,uVar1,uVar10);
    }
    else {
      puVar9 = &DAT_100eec4f0;
      _swift_allocObject(&DAT_100eec4f0,0x28,7);
      lVar15 = local_88;
      *(long *)(puVar9 + 0x10) = param_1;
      *(long *)(puVar9 + 0x18) = local_88;
      *(long *)(puVar9 + 0x20) = lVar14;
      puVar5 = &DAT_100eec518;
      _swift_allocObject(&DAT_100eec518,0x20,7);
      *(code **)(puVar5 + 0x10) = thunk_FUN_1006226d8;
      *(undefined **)(puVar5 + 0x18) = puVar9;
      _swift_getObjectType(uVar4);
      pcVar13 = *(code **)(lVar11 + 0xb0);
      _swift_retain(param_1);
      _swift_retain(lVar15);
      _swift_unknownObjectRetain(uVar4);
      pcVar12 = FUN_1006227e0;
      puVar9 = puVar5;
      (*pcVar13)();
      _swift_unknownObjectRelease(uVar4);
      _swift_release(puVar5);
      uVar4 = *(undefined8 *)(param_1 + 0x50);
      uVar1 = *(undefined8 *)(param_1 + 0x58);
      uVar10 = *(undefined8 *)(param_1 + 0x60);
      *(long *)(param_1 + 0x50) = lVar14;
      *(code **)(param_1 + 0x58) = pcVar12;
      *(undefined **)(param_1 + 0x60) = puVar9;
      FUN_100622430(uVar4,uVar1,uVar10);
      local_68 = &DAT_100eec138;
      local_80[0] = 2;
      lVar11 = *(long *)(lVar15 + 0x10);
      if (lVar11 != 0) {
        _swift_retain(lVar11);
        FUN_10062b574(local_80);
        _swift_release(lVar11);
      }
      FUN_100004594(local_80);
    }
  }
  return;
}



/* Address: 0x100622190 | FUN_100622190 */

void FUN_100622190(void)

{
  long unaff_x20;
  
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  return;
}



/* Address: 0x1006221c8 | FUN_1006221c8 */

void FUN_1006221c8(void)

{
  long unaff_x20;
  
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined8 *)(unaff_x20 + 0x60));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78));
  FUN_100622430(*(undefined8 *)(unaff_x20 + 0x80),*(undefined8 *)(unaff_x20 + 0x88),
                *(undefined8 *)(unaff_x20 + 0x90));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100622208 | thunk_FUN_100620e94 */

void thunk_FUN_100620e94(void)

{
  FUN_100620e94();
  return;
}



/* Address: 0x10062220c | thunk_FUN_100620ef8 */

void thunk_FUN_100620ef8(void)

{
  FUN_100620ef8();
  return;
}



/* Address: 0x100622210 | thunk_FUN_100620fc8 */

void thunk_FUN_100620fc8(void)

{
  FUN_100620fc8();
  return;
}



/* Address: 0x100622214 | FUN_100622214 */

void FUN_100622214(ulong param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = param_1;
  FUN_100627f08();
  uVar2 = uVar1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x60))();
  _swift_unknownObjectRelease(uVar1);
  if ((uVar2 & 1) != 0) {
    FUN_100620ab8(param_1);
    return;
  }
  return;
}



/* Address: 0x100622280 | FUN_100622280 */

undefined8 FUN_100622280(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 local_58;
  char local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  local_58 = *(undefined8 *)(param_3 + 0x10);
  local_50 = *(char *)(param_3 + 0x18);
  if (local_50 != -1) {
    FUN_100308524();
    (*param_1)(&local_58);
    FUN_1002ec258(local_58,local_50);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100622308);
  (*pcVar1)();
}



/* Address: 0x100622308 | FUN_100622308 */

void FUN_100622308(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_100649994();
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
    thunk_FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100eec1f8;
  _swift_allocObject(&DAT_100eec1f8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(thunk_FUN_10061dfe0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100622408 | FUN_100622408 */

void FUN_100622408(void)

{
  FUN_100622760(PTR__swift_release_100eae3e8,0x20);
  return;
}



/* Address: 0x100622418 | FUN_100622418 */

void FUN_100622418(void)

{
  long unaff_x20;
  
  FUN_1006205b8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100622430 | FUN_100622430 */

void FUN_100622430(long param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 != 0) {
    _swift_release();
    _swift_release(param_3);
    return;
  }
  return;
}



/* Address: 0x10062245c | FUN_10062245c */

void FUN_10062245c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  
  lVar4 = *(long *)(unaff_x20 + 0x50);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x60);
    _swift_retain(lVar4);
    _swift_retain(uVar2);
    FUN_1006202fc(lVar4,uVar1,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
    _swift_release(uVar2);
    _swift_release(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + 0x68);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x78);
    _swift_retain(lVar4);
    _swift_retain(uVar2);
    FUN_1006202fc(lVar4,uVar1,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
    _swift_release(uVar2);
    _swift_release(lVar4);
  }
  lVar4 = *(long *)(unaff_x20 + 0x80);
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x88);
    uVar2 = *(undefined8 *)(unaff_x20 + 0x90);
    _swift_retain(lVar4);
    _swift_retain(uVar2);
    FUN_1006202fc(lVar4,uVar1,uVar2,thunk_FUN_1005de8f4,&DAT_100eec590,thunk_FUN_10061dfe0);
    _swift_release(uVar2);
    _swift_release(lVar4);
  }
  uVar1 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x60);
  *(long *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  FUN_100622430(uVar1,uVar2,uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x70);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x78);
  *(long *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  FUN_100622430(uVar1,uVar2,uVar3);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x80);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x88);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x90);
  *(long *)(unaff_x20 + 0x80) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x90) = 0;
  FUN_100622430(uVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1006225cc | FUN_1006225cc */

void FUN_1006225cc(void)

{
  FUN_100621478();
  return;
}



/* Address: 0x1006225d4 | FUN_1006225d4 */

void FUN_1006225d4(void)

{
  long unaff_x20;
  
  FUN_100622280(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1006225e0 | thunk_FUN_1006225e4 */

void thunk_FUN_1006225e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68978;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68978,&DAT_100eec138);
  DAT_100fd7268 = pTVar1;
  return;
}



/* Address: 0x1006225e4 | FUN_1006225e4 */

void FUN_1006225e4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd7268 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68978;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68978,&DAT_100eec138);
  DAT_100fd7268 = pTVar1;
  return;
}



/* Address: 0x100622624 | FUN_100622624 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100622624(void)

{
  return ZEXT816(0x100fd7328);
}



/* Address: 0x100622644 | FUN_100622644 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100622644(void)

{
  return ZEXT816(0x100fd73e8);
}



/* Address: 0x100622664 | FUN_100622664 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100622664(void)

{
  return ZEXT816(0x100fd7490);
}



/* Address: 0x100622684 | FUN_100622684 */

undefined1  [16] FUN_100622684(void)

{
  return ZEXT816(0x100eec138);
}


