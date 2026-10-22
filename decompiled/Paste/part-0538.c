/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10061eb64 | FUN_10061eb64 */

void FUN_10061eb64(void)

{
  FUN_10061ee30();
  return;
}



/* Address: 0x10061eb88 | FUN_10061eb88 */

void FUN_10061eb88(void)

{
  FUN_10061f904();
  return;
}



/* Address: 0x10061ebac | FUN_10061ebac */

void FUN_10061ebac(void)

{
  FUN_10061e5e4();
  return;
}



/* Address: 0x10061ebc0 | FUN_10061ebc0 */

void FUN_10061ebc0(void)

{
  FUN_10061e5f0();
  return;
}



/* Address: 0x10061ebd4 | FUN_10061ebd4 */

void FUN_10061ebd4(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  FUN_10061f240(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x10061ebdc | FUN_10061ebdc */

void FUN_10061ebdc(void)

{
  FUN_10061f4e8();
  return;
}



/* Address: 0x10061ec0c | FUN_10061ec0c */

void FUN_10061ec0c(void)

{
  FUN_10061f4e8();
  return;
}



/* Address: 0x10061ec3c | FUN_10061ec3c */

void FUN_10061ec3c(void)

{
  FUN_10061ecd8();
  return;
}



/* Address: 0x10061ec44 | FUN_10061ec44 */

void FUN_10061ec44(void)

{
  FUN_10061f7a8();
  return;
}



/* Address: 0x10061ec4c | FUN_10061ec4c */

void FUN_10061ec4c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  
  thunk_FUN_10061f240(param_1,param_2,*unaff_x20);
  return;
}



/* Address: 0x10061ec64 | FUN_10061ec64 */

void FUN_10061ec64(void)

{
  FUN_10061e600();
  return;
}



/* Address: 0x10061ec7c | FUN_10061ec7c */

void FUN_10061ec7c(void)

{
  FUN_10061e62c();
  return;
}



/* Address: 0x10061ec94 | FUN_10061ec94 */

void FUN_10061ec94(void)

{
  FUN_10061e68c();
  return;
}



/* Address: 0x10061eca8 | FUN_10061eca8 */

void FUN_10061eca8(void)

{
  thunk_FUN_10061ecd8();
  return;
}



/* Address: 0x10061ecc0 | FUN_10061ecc0 */

void FUN_10061ecc0(void)

{
  thunk_FUN_10061f7a8();
  return;
}



/* Address: 0x10061ecd8 | FUN_10061ecd8 */

void FUN_10061ecd8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x18);
  if (puVar7 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eebcb0;
    _swift_allocObject(&DAT_100eebcb0,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062aa18(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10061ee30 | FUN_10061ee30 */

void FUN_10061ee30(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_4,0x20,7);
    *(long *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_5,param_4,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    FUN_10062aa18(param_2,param_3);
    param_4 = lVar6;
  }
  _swift_release(param_4);
  return;
}



/* Address: 0x10061ef88 | FUN_10061ef88 */

void FUN_10061ef88(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x18);
  if (puVar7 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eebcd8;
    _swift_allocObject(&DAT_100eebcd8,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062ac2c(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10061f0e4 | FUN_10061f0e4 */

void FUN_10061f0e4(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_4,0x20,7);
    *(long *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_5,param_4,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    FUN_10062ac2c(param_2,param_3);
    param_4 = lVar6;
  }
  _swift_release(param_4);
  return;
}



/* Address: 0x10061f240 | FUN_10061f240 */

void FUN_10061f240(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  puVar6 = *(undefined **)(param_1 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    puVar6 = &DAT_100eebd50;
    _swift_allocObject(&DAT_100eebd50,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062af70(param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10061f394 | FUN_10061f394 */

void FUN_10061f394(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_2 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_3,0x20,7);
    *(long *)(param_3 + 0x10) = param_2;
    *(undefined8 *)(param_3 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_4,param_3,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    FUN_10062af70(param_2);
    param_3 = lVar6;
  }
  _swift_release(param_3);
  return;
}



/* Address: 0x10061f4e8 | FUN_10061f4e8 */

void FUN_10061f4e8(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6,long param_7,undefined8 param_8)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_7,0x20,7);
    *(long *)(param_7 + 0x10) = param_3;
    *(undefined8 *)(param_7 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_8,param_7,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    (*param_6)(param_2,param_3);
    param_7 = lVar6;
  }
  _swift_release(param_7);
  return;
}



/* Address: 0x10061f648 | FUN_10061f648 */

void FUN_10061f648(long param_1,undefined8 param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_5,0x20,7);
    *(long *)(param_5 + 0x10) = param_3;
    *(undefined8 *)(param_5 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_6,param_5,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    (*param_4)(param_2,param_3);
    param_5 = lVar6;
  }
  _swift_release(param_5);
  return;
}



/* Address: 0x10061f7a8 | FUN_10061f7a8 */

void FUN_10061f7a8(long param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  code *pcVar8;
  
  puVar7 = *(undefined **)(param_1 + 0x18);
  if (puVar7 == (undefined *)0x0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    puVar7 = &DAT_100eebc88;
    _swift_allocObject(&DAT_100eebc88,0x20,7);
    *(long *)(puVar7 + 0x10) = param_3;
    *(undefined8 *)(puVar7 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar7,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar7);
    FUN_10062b020(param_2,param_3);
  }
  _swift_release(puVar7);
  return;
}



/* Address: 0x10061f904 | FUN_10061f904 */

void FUN_10061f904(long param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  lVar6 = *(long *)(param_1 + 0x18);
  if (lVar6 == 0) {
    if (param_3 == 0) {
      return;
    }
    lVar6 = param_3;
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_3 + 0x20);
    lVar1 = *(long *)(param_3 + 0x28);
    _swift_getObjectType();
    uVar3 = uVar2;
    lVar5 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar3 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar4);
      FUN_1006486f8();
      FUN_100004550(uVar4,lVar5);
      _swift_bridgeObjectRelease(lVar6);
      return;
    }
    _swift_allocObject(param_4,0x20,7);
    *(long *)(param_4 + 0x10) = param_3;
    *(undefined8 *)(param_4 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_3);
    _swift_errorRetain(uVar4);
    (*pcVar7)(param_5,param_4,uVar2,lVar1);
  }
  else {
    _swift_retain(lVar6);
    FUN_10062b020(param_2,param_3);
    param_4 = lVar6;
  }
  _swift_release(param_4);
  return;
}



/* Address: 0x10061fa60 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x10061fa64 | FUN_10061fa64 */

void FUN_10061fa64(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_errorRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10061fa90 | thunk_FUN_10061ec4c */

void thunk_FUN_10061ec4c(void)

{
  FUN_10061ec4c();
  return;
}



/* Address: 0x10061fa94 | thunk_FUN_10061ec64 */

void thunk_FUN_10061ec64(void)

{
  FUN_10061ec64();
  return;
}



/* Address: 0x10061fa98 | thunk_FUN_10061ec7c */

void thunk_FUN_10061ec7c(void)

{
  FUN_10061ec7c();
  return;
}



/* Address: 0x10061fa9c | thunk_FUN_10061eca8 */

void thunk_FUN_10061eca8(void)

{
  FUN_10061eca8();
  return;
}



/* Address: 0x10061faa0 | thunk_FUN_10061ecc0 */

void thunk_FUN_10061ecc0(void)

{
  FUN_10061ecc0();
  return;
}



/* Address: 0x10061faa4 | thunk_FUN_10061e5e4 */

void thunk_FUN_10061e5e4(void)

{
  FUN_10061e5e4();
  return;
}



/* Address: 0x10061faa8 | thunk_FUN_10061e5f0 */

void thunk_FUN_10061e5f0(void)

{
  FUN_10061e5f0();
  return;
}



/* Address: 0x10061faac | thunk_FUN_10061e6d8 */

void thunk_FUN_10061e6d8(void)

{
  FUN_10061e6d8();
  return;
}



/* Address: 0x10061fab0 | thunk_FUN_10061e764 */

void thunk_FUN_10061e764(void)

{
  FUN_10061e764();
  return;
}



/* Address: 0x10061fab4 | thunk_FUN_10061e678 */

void thunk_FUN_10061e678(void)

{
  FUN_10061e678();
  return;
}



/* Address: 0x10061fab8 | thunk_FUN_10061ead8 */

void thunk_FUN_10061ead8(void)

{
  FUN_10061ead8();
  return;
}



/* Address: 0x10061fabc | thunk_FUN_10061e770 */

void thunk_FUN_10061e770(void)

{
  FUN_10061e770();
  return;
}



/* Address: 0x10061fac0 | thunk_FUN_10061e68c */

void thunk_FUN_10061e68c(void)

{
  FUN_10061e68c();
  return;
}



/* Address: 0x10061fac4 | thunk_FUN_10061e9d4 */

void thunk_FUN_10061e9d4(void)

{
  FUN_10061e9d4();
  return;
}



/* Address: 0x10061fac8 | thunk_FUN_10061e720 */

void thunk_FUN_10061e720(void)

{
  thunk_FUN_10061e720();
  return;
}



/* Address: 0x10061facc | thunk_FUN_10061e7bc */

void thunk_FUN_10061e7bc(void)

{
  thunk_FUN_10061e7bc();
  return;
}



/* Address: 0x10061fad0 | thunk_FUN_10061e800 */

void thunk_FUN_10061e800(void)

{
  thunk_FUN_10061e800();
  return;
}



/* Address: 0x10061fad4 | thunk_FUN_10061dfe0 */

void thunk_FUN_10061dfe0(void)

{
  long unaff_x20;
  
  thunk_FUN_1005de99c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10061fad8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fadc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fae0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fae4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fae8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061faec | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061faf0 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061faf4 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061faf8 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fafc | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb00 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb04 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb08 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb0c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb10 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb14 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb18 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb1c | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x10061fb20 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}


