/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10062cc8c | FUN_10062cc8c */

void FUN_10062cc8c(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b4d0);
  return;
}



/* Address: 0x10062cc98 | FUN_10062cc98 */

void FUN_10062cc98(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b574(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062cce4 | FUN_10062cce4 */

void FUN_10062cce4(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b624(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062cd30 | FUN_10062cd30 */

void FUN_10062cd30(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(param_3 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(param_3 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7170 != -1) {
      _swift_once(&DAT_100fd7170,FUN_10061d99c);
    }
    uVar4 = DAT_101057c10;
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
    puVar6 = &DAT_100eed470;
    _swift_allocObject(&DAT_100eed470,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062aa18(param_1,param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062ce90 | FUN_10062ce90 */

void FUN_10062ce90(void)

{
  FUN_10062ced4();
  return;
}



/* Address: 0x10062ceac | FUN_10062ceac */

void FUN_10062ceac(undefined8 param_1,undefined8 param_2)

{
  FUN_10062d048(param_1,param_2,FUN_10062a068);
  return;
}



/* Address: 0x10062ceb8 | FUN_10062ceb8 */

void FUN_10062ceb8(void)

{
  FUN_10062ced4();
  return;
}



/* Address: 0x10062ced4 | FUN_10062ced4 */

void FUN_10062ced4(undefined8 param_1,long param_2,long param_3,code *param_4,long param_5,
                  undefined8 param_6)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  code *pcVar6;
  
  if ((*(long *)(param_3 + 0x18) == 0) ||
     (lVar5 = *(long *)(*(long *)(param_3 + 0x18) + 0x18), lVar5 == 0)) {
    if (param_2 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar3 = DAT_101057be8;
    uVar1 = *(ulong *)(param_2 + 0x20);
    lVar5 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar2 = uVar1;
    lVar4 = lVar5;
    (**(code **)(lVar5 + 0x10))();
    if ((uVar2 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar3);
      FUN_1006486f8();
      FUN_100004550(uVar3,lVar4);
      _swift_bridgeObjectRelease(param_3);
      return;
    }
    _swift_allocObject(param_5,0x20,7);
    *(long *)(param_5 + 0x10) = param_2;
    *(undefined8 *)(param_5 + 0x18) = uVar3;
    pcVar6 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar3);
    (*pcVar6)(param_6,param_5,uVar1,lVar5);
  }
  else {
    _swift_retain(lVar5);
    (*param_4)(param_1,param_2);
    param_5 = lVar5;
  }
  _swift_release(param_5);
  return;
}



/* Address: 0x10062d03c | FUN_10062d03c */

void FUN_10062d03c(undefined8 param_1,undefined8 param_2)

{
  FUN_10062d048(param_1,param_2,FUN_10062a084);
  return;
}



/* Address: 0x10062d048 | FUN_10062d048 */

undefined8 FUN_10062d048(undefined8 param_1,long param_2,code *param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _swift_getObjectType(uVar1);
  FUN_1006422fc();
  _swift_retain();
  (*param_3)(param_1,uVar1);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x10062d0c0 | FUN_10062d0c0 */

void FUN_10062d0c0(void)

{
  FUN_10062ced4();
  return;
}



/* Address: 0x10062d0dc | FUN_10062d0dc */

void FUN_10062d0dc(void)

{
  FUN_10062ced4();
  return;
}



/* Address: 0x10062d0f8 | FUN_10062d0f8 */

void FUN_10062d0f8(long param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(param_2 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(param_2 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
    if (param_1 == 0) {
      return;
    }
    if (DAT_100fd7138 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar4 = DAT_101057be8;
    uVar2 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
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
    puVar6 = &DAT_100eed538;
    _swift_allocObject(&DAT_100eed538,0x20,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062af70(param_1);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062d254 | FUN_10062d254 */

void FUN_10062d254(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  
  if ((*(long *)(param_3 + 0x18) == 0) ||
     (puVar6 = *(undefined **)(*(long *)(param_3 + 0x18) + 0x18), puVar6 == (undefined *)0x0)) {
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
    puVar6 = &DAT_100eed560;
    _swift_allocObject(&DAT_100eed560,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar7 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar7)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062b020(param_1,param_2);
  }
  _swift_release(puVar6);
  return;
}



/* Address: 0x10062d3b8 | FUN_10062d3b8 */

void FUN_10062d3b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined **ppuVar7;
  undefined8 uVar8;
  long unaff_x21;
  code *pcVar9;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  undefined **ppuStack_68;
  undefined8 local_58;
  
  lVar1 = *(long *)(param_5 + 0x40);
  ppuVar7 = *(undefined ***)(param_5 + 0x48);
  lVar2 = lVar1;
  if (lVar1 == 0) {
    lVar2 = 0;
    FUN_10063c734();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x28) = 0;
    *(undefined ***)(lVar2 + 0x30) = ppuVar7;
    *(undefined2 *)(lVar2 + 0x38) = 0;
    uVar8 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    *(undefined8 *)(lVar2 + 0x40) = uVar8;
    *(undefined ***)(lVar2 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar2 + 0x20) = param_5;
    uVar8 = *(undefined8 *)(param_5 + 0x30);
    *(undefined8 *)(lVar2 + 0x18) = *(undefined8 *)(param_5 + 0x38);
    *(undefined8 *)(lVar2 + 0x10) = uVar8;
    _swift_retain(param_5);
    _swift_unknownObjectRetain(uVar8);
    ppuVar7 = &PTR_PTR_100eeeed8;
  }
  lVar3 = lVar2;
  _swift_getObjectType();
  pcVar9 = (code *)ppuVar7[0xd];
  _swift_unknownObjectRetain(lVar1);
  (*pcVar9)();
  _swift_unknownObjectRelease(lVar2);
  puVar4 = &DAT_100fd78b0;
  local_70 = lVar3;
  ppuStack_68 = ppuVar7;
  FUN_1000f7830(&DAT_100fd78b0,&DAT_100c69458);
  puVar5 = &DAT_100c69460;
  local_58 = param_6;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c69460,&local_58);
  puVar6 = &local_80;
  _swift_dynamicCast(puVar6,&local_70,puVar4,puVar5,6);
  if ((int)puVar6 == 0) {
    uVar8 = 1;
  }
  else {
    uVar8 = local_80;
    _swift_getObjectType(local_80);
    (**(code **)(lStack_78 + 0x18))(param_1,param_3,param_4,param_7,uVar8,lStack_78);
    _swift_unknownObjectRelease(local_80);
    if (unaff_x21 != 0) {
      return;
    }
    uVar8 = 0;
  }
  (**(code **)(*(long *)(param_7 + -8) + 0x38))(param_1,uVar8,1,param_7);
  return;
}



/* Address: 0x10062d57c | FUN_10062d57c */

void FUN_10062d57c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x18))(param_2,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d5f4 | FUN_10062d5f4 */

void FUN_10062d5f4(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x28))(param_2,param_3,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d67c | FUN_10062d67c */

void FUN_10062d67c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x30))(param_2,param_3,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d704 | FUN_10062d704 */

void FUN_10062d704(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x38))(param_2,param_3,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d78c | FUN_10062d78c */

void FUN_10062d78c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  _swift_getObjectType(uVar1);
  (**(code **)(param_2 + 0x40))();
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d7f8 | FUN_10062d7f8 */

void FUN_10062d7f8(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(param_2 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  _swift_getObjectType(uVar1);
  (**(code **)(param_2 + 0x48))();
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d864 | thunk_FUN_100630f18 */

void thunk_FUN_100630f18(void)

{
  FUN_100630f18();
  return;
}



/* Address: 0x10062d868 | FUN_10062d868 */

void FUN_10062d868(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x58))(param_2,param_3,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d8f0 | FUN_10062d8f0 */

void FUN_10062d8f0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x60))(param_2,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d968 | FUN_10062d968 */

void FUN_10062d968(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  
  lVar3 = param_2;
  FUN_100627f08();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar3 + 0x68))();
  _swift_unknownObjectRelease(param_1);
  uVar2 = uVar1;
  _swift_getObjectType(uVar1);
  (**(code **)(lVar3 + 0x68))(param_2,uVar2,lVar3);
  _swift_unknownObjectRelease(uVar1);
  return;
}



/* Address: 0x10062d9e0 | FUN_10062d9e0 */

void FUN_10062d9e0(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10062d9e8 | FUN_10062d9e8 */

/* WARNING: Removing unreachable block (ram,0x00010062dae0) */
/* WARNING: Removing unreachable block (ram,0x00010062db20) */
/* WARNING: Removing unreachable block (ram,0x00010062db30) */
/* WARNING: Removing unreachable block (ram,0x00010062db50) */
/* WARNING: Removing unreachable block (ram,0x00010062db54) */
/* WARNING: Removing unreachable block (ram,0x00010062db38) */
/* WARNING: Removing unreachable block (ram,0x00010062db64) */
/* WARNING: Removing unreachable block (ram,0x00010062db48) */
/* WARNING: Removing unreachable block (ram,0x00010062dbd0) */
/* WARNING: Removing unreachable block (ram,0x00010062dc04) */

long FUN_10062d9e8(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar5 + 0x40);
  ppuVar4 = *(undefined ***)(lVar5 + 0x48);
  lVar1 = lVar3;
  if (lVar3 == 0) {
    lVar1 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar2 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar5 + 0x38);
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined ***)(lVar1 + 0x30) = ppuVar4;
    *(undefined2 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined ***)(lVar1 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar1 + 0x20) = lVar5;
    *(undefined8 *)(lVar1 + 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    _swift_retain(lVar5);
    _swift_unknownObjectRetain(uVar7);
    ppuVar4 = &PTR_PTR_100eeeed8;
  }
  lVar5 = lVar1;
  _swift_getObjectType(lVar1);
  pcVar6 = (code *)ppuVar4[0xd];
  _swift_unknownObjectRetain(lVar3);
  (*pcVar6)(lVar5);
  _swift_unknownObjectRelease(lVar1);
  lVar3 = lVar5;
  _swift_getObjectType(lVar5);
  (*(code *)ppuVar4[2])();
  _swift_unknownObjectRelease(lVar5);
  return lVar3;
}



/* Address: 0x10062dc28 | FUN_10062dc28 */

/* WARNING: Removing unreachable block (ram,0x00010062dd20) */
/* WARNING: Removing unreachable block (ram,0x00010062dd60) */
/* WARNING: Removing unreachable block (ram,0x00010062dd70) */
/* WARNING: Removing unreachable block (ram,0x00010062dd90) */
/* WARNING: Removing unreachable block (ram,0x00010062dd94) */
/* WARNING: Removing unreachable block (ram,0x00010062dd78) */
/* WARNING: Removing unreachable block (ram,0x00010062dda4) */
/* WARNING: Removing unreachable block (ram,0x00010062dd88) */
/* WARNING: Removing unreachable block (ram,0x00010062de10) */
/* WARNING: Removing unreachable block (ram,0x00010062de44) */

long FUN_10062dc28(void)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined **ppuVar4;
  long lVar5;
  long unaff_x20;
  code *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar5 = *(long *)(unaff_x20 + 0x20);
  lVar3 = *(long *)(lVar5 + 0x40);
  ppuVar4 = *(undefined ***)(lVar5 + 0x48);
  lVar1 = lVar3;
  if (lVar3 == 0) {
    lVar1 = 0;
    FUN_10063c734();
    _swift_allocObject();
    uVar2 = 0;
    FUN_10063c58c();
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar5 + 0x38);
    uVar7 = *(undefined8 *)(lVar5 + 0x30);
    *(undefined8 *)(lVar1 + 0x28) = 0;
    *(undefined ***)(lVar1 + 0x30) = ppuVar4;
    *(undefined2 *)(lVar1 + 0x38) = 0;
    *(undefined8 *)(lVar1 + 0x40) = uVar2;
    *(undefined ***)(lVar1 + 0x48) = &PTR_PTR_100eeef70;
    *(long *)(lVar1 + 0x20) = lVar5;
    *(undefined8 *)(lVar1 + 0x18) = uVar8;
    *(undefined8 *)(lVar1 + 0x10) = uVar7;
    _swift_retain(lVar5);
    _swift_unknownObjectRetain(uVar7);
    ppuVar4 = &PTR_PTR_100eeeed8;
  }
  lVar5 = lVar1;
  _swift_getObjectType(lVar1);
  pcVar6 = (code *)ppuVar4[0xd];
  _swift_unknownObjectRetain(lVar3);
  (*pcVar6)(lVar5);
  _swift_unknownObjectRelease(lVar1);
  lVar3 = lVar5;
  _swift_getObjectType(lVar5);
  (*(code *)ppuVar4[1])();
  _swift_unknownObjectRelease(lVar5);
  return lVar3;
}



/* Address: 0x10062de68 | FUN_10062de68 */

void FUN_10062de68(long param_1)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = *(long *)(unaff_x20 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_100004640(param_1,lVar1);
    local_38 = lVar1;
    FUN_10000cbb0(auStack_50);
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
    _swift_retain(lVar2);
    FUN_10062b574(auStack_50);
    _swift_release(lVar2);
    FUN_100004594(auStack_50);
  }
  return;
}



/* Address: 0x10062dee8 | FUN_10062dee8 */

void FUN_10062dee8(undefined8 param_1,undefined8 param_2)

{
  FUN_100627b30(param_1,param_2,FUN_10062acf8,&DAT_100eed588,thunk_FUN_10061dfe0);
  return;
}



/* Address: 0x10062df04 | FUN_10062df04 */

void FUN_10062df04(long param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_70 [24];
  long local_58;
  
  lVar7 = *(long *)(param_1 + 0x18);
  FUN_100004640(param_1,lVar7);
  local_58 = lVar7;
  FUN_10000cbb0(auStack_70);
  (**(code **)(*(long *)(lVar7 + -8) + 0x10))();
  puVar6 = *(undefined **)(unaff_x20 + 0x18);
  if (puVar6 == (undefined *)0x0) {
    if (param_2 == 0) goto LAB_10062df78;
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
      _swift_bridgeObjectRelease(lVar7);
      goto LAB_10062df78;
    }
    puVar6 = &DAT_100eed5b0;
    _swift_allocObject(&DAT_100eed5b0,0x20,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(undefined8 *)(puVar6 + 0x18) = uVar4;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_errorRetain(uVar4);
    (*pcVar8)(thunk_FUN_10061dfe0,puVar6,uVar2,lVar1);
  }
  else {
    _swift_retain(puVar6);
    FUN_10062b020(auStack_70,param_2);
  }
  _swift_release(puVar6);
LAB_10062df78:
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x10062e078 | FUN_10062e078 */

void FUN_10062e078(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10062e0bc | FUN_10062e0bc */

void FUN_10062e0bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10062e108 | FUN_10062e108 */

void FUN_10062e108(void)

{
  FUN_1006279a4();
  return;
}



/* Address: 0x10062e128 | FUN_10062e128 */

void FUN_10062e128(void)

{
  FUN_100627af8();
  return;
}



/* Address: 0x10062e148 | FUN_10062e148 */

void FUN_10062e148(void)

{
  FUN_100627b14();
  return;
}



/* Address: 0x10062e168 | FUN_10062e168 */

void FUN_10062e168(void)

{
  FUN_100626ebc();
  return;
}



/* Address: 0x10062e188 | FUN_10062e188 */

void FUN_10062e188(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e1c0(param_1,param_2,FUN_10062aae4);
  return;
}



/* Address: 0x10062e194 | FUN_10062e194 */

void FUN_10062e194(void)

{
  FUN_10062dee8();
  return;
}



/* Address: 0x10062e1b4 | FUN_10062e1b4 */

void FUN_10062e1b4(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e1c0(param_1,param_2,FUN_10062ab88);
  return;
}



/* Address: 0x10062e1c0 | FUN_10062e1c0 */

void FUN_10062e1c0(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_3)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062e204 | FUN_10062e204 */

void FUN_10062e204(void)

{
  FUN_100626d64();
  return;
}



/* Address: 0x10062e224 | FUN_10062e224 */

void FUN_10062e224(void)

{
  FUN_10062df04();
  return;
}



/* Address: 0x10062e244 | FUN_10062e244 */

void FUN_10062e244(void)

{
  long *unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(*(long *)(*unaff_x20 + 0x20) + 0x30));
  return;
}



/* Address: 0x10062e270 | FUN_10062e270 */

void FUN_10062e270(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b0ec);
  return;
}



/* Address: 0x10062e27c | FUN_10062e27c */

void FUN_10062e27c(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b190);
  return;
}



/* Address: 0x10062e288 | FUN_10062e288 */

void FUN_10062e288(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b2d8);
  return;
}



/* Address: 0x10062e294 | FUN_10062e294 */

void FUN_10062e294(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b234);
  return;
}



/* Address: 0x10062e2a0 | FUN_10062e2a0 */

void FUN_10062e2a0(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062e2e8 | FUN_10062e2e8 */

void FUN_10062e2e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b42c);
  return;
}



/* Address: 0x10062e2f4 | FUN_10062e2f4 */

void FUN_10062e2f4(undefined8 param_1,undefined8 param_2)

{
  FUN_10062e300(param_1,param_2,FUN_10062b4d0);
  return;
}



/* Address: 0x10062e300 | FUN_10062e300 */

void FUN_10062e300(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    (*param_3)();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062e344 | FUN_10062e344 */

void FUN_10062e344(undefined8 param_1)

{
  long *unaff_x20;
  long lVar1;
  
  lVar1 = *(long *)(*unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062e38c | FUN_10062e38c */

void FUN_10062e38c(long param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  if (lVar2 != 0) {
    lVar1 = *(long *)(param_1 + 0x18);
    FUN_100004640(param_1,lVar1);
    local_38 = lVar1;
    FUN_10000cbb0(auStack_50);
    (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
    _swift_retain(lVar2);
    FUN_10062b574(auStack_50);
    _swift_release(lVar2);
    FUN_100004594(auStack_50);
  }
  return;
}



/* Address: 0x10062e410 | FUN_10062e410 */

void FUN_10062e410(void)

{
  FUN_10062e448();
  return;
}



/* Address: 0x10062e42c | FUN_10062e42c */

void FUN_10062e42c(void)

{
  FUN_10062e448();
  return;
}



/* Address: 0x10062e448 | FUN_10062e448 */

long FUN_10062e448(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *in_x5;
  long in_x6;
  undefined8 in_x7;
  long unaff_x20;
  long lVar7;
  code *pcVar8;
  
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x20) + 0x30);
  uVar6 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x38);
  _swift_getObjectType();
  FUN_1006422fc();
  lVar1 = DAT_100fd7138;
  lVar7 = *(long *)(unaff_x20 + 0x18);
  if (lVar7 == 0) {
    _swift_retain(lVar2);
    if (lVar1 != -1) {
      _swift_once(&DAT_100fd7138,FUN_10061d9bc);
    }
    uVar5 = DAT_101057be8;
    uVar3 = *(ulong *)(lVar2 + 0x20);
    lVar1 = *(long *)(lVar2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar7 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar4 & 1) != 0) {
      thunk_FUN_1005de8f4(uVar5);
      FUN_1006486f8();
      FUN_100004550(uVar5,lVar7);
      _swift_release(lVar2);
      _swift_bridgeObjectRelease(uVar6);
      return lVar2;
    }
    _swift_allocObject(in_x6,0x20,7);
    *(long *)(in_x6 + 0x10) = lVar2;
    *(undefined8 *)(in_x6 + 0x18) = uVar5;
    pcVar8 = *(code **)(lVar1 + 0x18);
    _swift_retain(lVar2);
    _swift_errorRetain(uVar5);
    (*pcVar8)(in_x7,in_x6,uVar3,lVar1);
    _swift_release(lVar2);
  }
  else {
    _swift_retain(lVar2);
    _swift_retain(lVar7);
    (*in_x5)(param_1,lVar2);
    _swift_release(lVar2);
    in_x6 = lVar7;
  }
  _swift_release(in_x6);
  return lVar2;
}



/* Address: 0x10062e5d4 | FUN_10062e5d4 */

undefined1  [16] FUN_10062e5d4(void)

{
  undefined1 (*pauVar1) [16];
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auVar4 [16];
  undefined8 uVar5;
  long unaff_x20;
  
  pauVar1 = (undefined1 (*) [16])(*(long *)(unaff_x20 + 0x20) + 0x30);
  uVar2 = *(undefined8 *)*pauVar1;
  uVar3 = *(undefined8 *)(*(long *)(unaff_x20 + 0x20) + 0x38);
  auVar4 = *pauVar1;
  uVar5 = uVar2;
  _swift_getObjectType(uVar2);
  _swift_unknownObjectRetain(uVar2);
  FUN_100642338(uVar5,uVar3);
  _swift_retain();
  return auVar4;
}



/* Address: 0x10062e634 | FUN_10062e634 */

String FUN_10062e634(void)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  ulong *puVar4;
  code *pcVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  __int64 _Var9;
  char *pcVar10;
  char *pcVar11;
  long lVar12;
  undefined *puVar13;
  _StringGuts _Var14;
  char *pcVar16;
  char *pcVar17;
  void *in_x3;
  ulong *puVar18;
  undefined8 *puVar19;
  undefined *puVar20;
  long *plVar21;
  long lVar22;
  char *pcVar23;
  long lVar24;
  ulong uVar25;
  char *pcVar26;
  long unaff_x20;
  long lVar27;
  undefined8 uVar28;
  ulong uVar29;
  undefined8 *puVar30;
  ulong uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  ulong uVar34;
  String SVar35;
  String SVar36;
  String repeating;
  String SVar37;
  String repeating_00;
  String repeating_01;
  String repeating_02;
  String SVar38;
  String SVar39;
  String separator;
  String SVar40;
  String SVar41;
  String SVar42;
  String SVar43;
  String SVar44;
  undefined *local_90;
  String local_78;
  void *pvVar15;
  
  puVar6 = &DAT_100fd7850;
  FUN_1000f7830(&DAT_100fd7850,&DAT_100c69430);
  _Var14.unknown = &DAT_00000030;
  pcVar16 = (char *)0x7;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  local_78.str = (char *)0x0;
  local_78.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x14,_Var14);
  SVar36.bridgeObject = (void *)0x8000000100daef00;
  SVar36.str = (char *)0xd000000000000010;
  SVar40.bridgeObject = in_x3;
  SVar40.str = pcVar16;
  Swift::String::append(SVar36,SVar40);
  pcVar16 = PTR___type_metadata_for_Swift_ObjectIdentifier_100eabfe8;
  puVar20 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
  Swift::__print_unlocked
            (&stack0xffffffffffffff98,&local_78,
             PTR___type_metadata_for_Swift_ObjectIdentifier_100eabfe8,
             PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
             PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
            );
  SVar35.bridgeObject = &SUB_e200000000000000;
  SVar35.str = (char *)0x3a5d;
  SVar41.bridgeObject = puVar20;
  SVar41.str = pcVar16;
  Swift::String::append(SVar35,SVar41);
  *(char **)(puVar6 + 0x20) = local_78.str;
  *(void **)(puVar6 + 0x28) = local_78.bridgeObject;
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    lVar27 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
    _swift_retain(lVar27);
    if (lVar27 != 0) {
      local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
      do {
        if (lVar27 == *(long *)(unaff_x20 + 0x18)) {
          _swift_release(lVar27);
          break;
        }
        lVar7 = *(long *)(lVar27 + 0x38);
        if (lVar7 == 0) {
          lVar24 = *(long *)(lVar27 + 0x48);
          if (lVar24 == 0) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f2b4);
            (*pcVar5)();
          }
          uVar28 = *(undefined8 *)(*(long *)(lVar27 + 0x50) + 8);
          _swift_unknownObjectRetain(lVar24);
          lVar7 = 0;
        }
        else {
          uVar28 = *(undefined8 *)(*(long *)(lVar27 + 0x40) + 8);
          lVar24 = lVar7;
        }
        uVar32 = *(undefined8 *)(lVar27 + 0x28);
        uVar33 = *(undefined8 *)(lVar27 + 0x30);
        _swift_unknownObjectRetain(lVar7);
        _swift_bridgeObjectRetain(uVar33);
        puVar13 = local_90;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar13 & 1) == 0) {
          puVar13 = (undefined *)0x0;
          FUN_1006246fc(0,*(long *)(local_90 + 0x10) + 1,1);
          puVar20 = local_90;
          local_90 = puVar13;
        }
        uVar34 = *(ulong *)(local_90 + 0x10);
        if (*(ulong *)(local_90 + 0x18) >> 1 <= uVar34) {
          puVar13 = (undefined *)(ulong)(1 < *(ulong *)(local_90 + 0x18));
          FUN_1006246fc(puVar13,uVar34 + 1,1);
          puVar20 = local_90;
          local_90 = puVar13;
        }
        *(ulong *)(local_90 + 0x10) = uVar34 + 1;
        *(long *)(local_90 + uVar34 * 0x20 + 0x20) = lVar24;
        *(undefined8 *)(local_90 + uVar34 * 0x20 + 0x28) = uVar28;
        *(undefined8 *)(local_90 + uVar34 * 0x20 + 0x30) = uVar32;
        *(undefined8 *)(local_90 + uVar34 * 0x20 + 0x38) = uVar33;
        lVar7 = *(long *)(lVar27 + 0x10);
        _swift_retain(lVar7);
        _swift_release(lVar27);
        lVar27 = lVar7;
      } while (lVar7 != 0);
      goto LAB_10062e824;
    }
  }
  local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10062e824:
  uVar34 = 0;
  uVar29 = *(ulong *)(local_90 + 0x10);
  pcVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
  do {
    puVar4 = (ulong *)((long)(local_90 + 0x10) + uVar34 * 4 * 8);
    do {
      puVar18 = puVar4;
      if (uVar29 == uVar34) {
        lVar27 = *(long *)(pcVar16 + 0x10);
        if (lVar27 == 0) {
          _swift_release(pcVar16);
          lVar27 = *(long *)(PTR___swiftEmptyArrayStorage_100eae0d8 + 0x10);
          pcVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
        }
        else {
          local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
          FUN_100624fc8(0,lVar27,0);
          pcVar10 = pcVar16 + 0x38;
          pcVar26 = local_78.str;
          do {
            uVar32 = *(undefined8 *)(pcVar10 + -0x18);
            uVar33 = *(undefined8 *)pcVar10;
            uVar28 = uVar32;
            _swift_getObjectType();
            _swift_unknownObjectRetain(uVar32);
            _swift_bridgeObjectRetain(uVar33);
            SVar36 = Swift::__typeName(SUB81(uVar28,0));
            _Var9 = Swift::String::get_count(SVar36);
            _swift_bridgeObjectRelease(uVar33);
            _swift_unknownObjectRelease(uVar32);
            _swift_bridgeObjectRelease(SVar36.bridgeObject);
            local_78.str = pcVar26;
            uVar34 = *(ulong *)(pcVar26 + 0x10);
            if (*(ulong *)(pcVar26 + 0x18) >> 1 <= uVar34) {
              FUN_100624fc8(1 < *(ulong *)(pcVar26 + 0x18),uVar34 + 1,1);
              pcVar26 = local_78.str;
            }
            pcVar10 = pcVar10 + 0x20;
            *(ulong *)(pcVar26 + 0x10) = uVar34 + 1;
            *(__int64 *)(pcVar26 + uVar34 * 8 + 0x20) = _Var9;
            lVar27 = lVar27 + -1;
          } while (lVar27 != 0);
          _swift_release(pcVar16);
          lVar27 = *(long *)(pcVar26 + 0x10);
        }
        if (lVar27 == 0) {
          lVar7 = 0;
        }
        else {
          lVar24 = *(long *)(pcVar26 + 0x20);
          lVar27 = lVar27 + -1;
          lVar7 = lVar24;
          if (lVar27 != 0) {
            plVar21 = (long *)(pcVar26 + 0x28);
            lVar12 = lVar24;
            do {
              lVar22 = *plVar21;
              lVar7 = lVar22;
              if (lVar22 <= lVar24) {
                lVar7 = lVar12;
              }
              if (lVar24 <= lVar22) {
                lVar24 = lVar22;
              }
              lVar27 = lVar27 + -1;
              plVar21 = plVar21 + 1;
              lVar12 = lVar7;
            } while (lVar27 != 0);
          }
        }
        _swift_bridgeObjectRelease(pcVar26);
        uVar34 = 0;
        pcVar16 = PTR___swiftEmptyArrayStorage_100eae0d8;
        do {
          puVar30 = (undefined8 *)(local_90 + uVar34 * 0x20 + 0x10);
          do {
            puVar19 = puVar30;
            if (uVar29 == uVar34) {
              lVar27 = *(long *)(pcVar16 + 0x10);
              if (lVar27 == 0) {
                _swift_release(pcVar16);
                pcVar10 = PTR___swiftEmptyArrayStorage_100eae0d8;
              }
              else {
                local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
                FUN_100624fc8(0,lVar27,0);
                pcVar26 = pcVar16 + 0x38;
                pcVar10 = local_78.str;
                do {
                  uVar32 = *(undefined8 *)(pcVar26 + -0x18);
                  uVar33 = *(undefined8 *)pcVar26;
                  uVar28 = uVar32;
                  _swift_getObjectType();
                  _swift_unknownObjectRetain(uVar32);
                  _swift_bridgeObjectRetain(uVar33);
                  SVar36 = Swift::__typeName(SUB81(uVar28,0));
                  _Var9 = Swift::String::get_count(SVar36);
                  _swift_bridgeObjectRelease(uVar33);
                  _swift_unknownObjectRelease(uVar32);
                  _swift_bridgeObjectRelease(SVar36.bridgeObject);
                  local_78.str = pcVar10;
                  uVar34 = *(ulong *)(pcVar10 + 0x10);
                  if (*(ulong *)(pcVar10 + 0x18) >> 1 <= uVar34) {
                    FUN_100624fc8(1 < *(ulong *)(pcVar10 + 0x18),uVar34 + 1,1);
                    pcVar10 = local_78.str;
                  }
                  pcVar26 = pcVar26 + 0x20;
                  *(ulong *)(pcVar10 + 0x10) = uVar34 + 1;
                  *(__int64 *)(pcVar10 + uVar34 * 8 + 0x20) = _Var9;
                  lVar27 = lVar27 + -1;
                } while (lVar27 != 0);
                _swift_release(pcVar16);
              }
              if (*(long *)(pcVar10 + 0x10) == 0) {
                pcVar16 = (char *)0x0;
              }
              else {
                pcVar26 = *(char **)(pcVar10 + 0x20);
                lVar27 = *(long *)(pcVar10 + 0x10) + -1;
                pcVar16 = pcVar26;
                if (lVar27 != 0) {
                  pcVar17 = pcVar10 + 0x28;
                  pcVar11 = pcVar26;
                  do {
                    pcVar23 = *(char **)pcVar17;
                    pcVar16 = pcVar23;
                    if ((long)pcVar23 <= (long)pcVar26) {
                      pcVar16 = pcVar11;
                    }
                    if ((long)pcVar26 <= (long)pcVar23) {
                      pcVar26 = pcVar23;
                    }
                    lVar27 = lVar27 + -1;
                    pcVar17 = pcVar17 + 8;
                    pcVar11 = pcVar16;
                  } while (lVar27 != 0);
                }
              }
              _swift_bridgeObjectRelease(pcVar10);
              if (uVar29 == 0) {
                _swift_bridgeObjectRelease(local_90);
                uVar34 = *(ulong *)(puVar6 + 0x10);
                puVar20 = puVar6;
                if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar34) {
                  puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                  FUN_100624804(puVar20,uVar34 + 1,1,puVar6);
                }
                *(ulong *)(puVar20 + 0x10) = uVar34 + 1;
                *(undefined8 *)(puVar20 + uVar34 * 0x10 + 0x20) = 0x6e6168206f6e3c20;
                *(undefined8 *)(puVar20 + uVar34 * 0x10 + 0x28) = 0xee003e7372656c64;
              }
              else {
                pcVar10 = (char *)(lVar7 + -2);
                if (SBORROW8(lVar7,2)) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f270);
                  (*pcVar5)();
                }
                repeating.bridgeObject = (void *)0xe100000000000000;
                repeating.str = (char *)0x20;
                local_78 = Swift::String::init(repeating,(__int64)pcVar10);
                pvVar15 = local_78.bridgeObject;
                _swift_bridgeObjectRetain(pvVar15);
                SVar37.bridgeObject = (void *)0xae005d4f5b209186;
                SVar37.str = (char *)0xe29386e2205d495b;
                SVar42.bridgeObject = puVar20;
                SVar42.str = pcVar10;
                Swift::String::append(SVar37,SVar42);
                _swift_bridgeObjectRelease(pvVar15);
                pcVar10 = local_78.str;
                pvVar15 = local_78.bridgeObject;
                uVar34 = *(ulong *)(puVar6 + 0x10);
                puVar13 = puVar6;
                if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar34) {
                  puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
                  FUN_100624804(puVar13,uVar34 + 1,1,puVar6);
                }
                *(ulong *)(puVar13 + 0x10) = uVar34 + 1;
                *(char **)(puVar13 + uVar34 * 0x10 + 0x20) = pcVar10;
                *(void **)(puVar13 + uVar34 * 0x10 + 0x28) = pvVar15;
                puVar30 = (undefined8 *)(local_90 + 0x38);
                do {
                  lVar27 = puVar30[-3];
                  pcVar10 = (char *)puVar30[-1];
                  pvVar15 = (void *)*puVar30;
                  _swift_unknownObjectRetain(lVar27);
                  _swift_bridgeObjectRetain(pvVar15);
                  pcVar11 = (char *)0x0;
                  pcVar26 = PTR___swiftEmptyArrayStorage_100eae0d8;
                  FUN_100624804(0,1,1);
                  uVar34 = *(ulong *)(pcVar11 + 0x10);
                  pcVar17 = pcVar11;
                  if (*(ulong *)(pcVar11 + 0x18) >> 1 <= uVar34) {
                    pcVar17 = (char *)(ulong)(1 < *(ulong *)(pcVar11 + 0x18));
                    FUN_100624804(pcVar17,uVar34 + 1,1);
                    pcVar26 = pcVar11;
                  }
                  *(ulong *)(pcVar17 + 0x10) = uVar34 + 1;
                  pcVar11 = pcVar17 + uVar34 * 0x10 + 0x20;
                  pcVar11[0] = ' ';
                  pcVar11[1] = '\0';
                  pcVar11[2] = '\0';
                  pcVar11[3] = '\0';
                  pcVar11[4] = '\0';
                  pcVar11[5] = '\0';
                  pcVar11[6] = '\0';
                  pcVar11[7] = '\0';
                  pcVar11 = pcVar17 + uVar34 * 0x10 + 0x28;
                  pcVar11[0] = '\0';
                  pcVar11[1] = '\0';
                  pcVar11[2] = '\0';
                  pcVar11[3] = '\0';
                  pcVar11[4] = '\0';
                  pcVar11[5] = '\0';
                  pcVar11[6] = '\0';
                  pcVar11[7] = -0x1f;
                  lVar24 = lVar27;
                  _swift_getObjectType();
                  lVar12 = lVar24;
                  _swift_conformsToProtocol();
                  pcVar11 = pcVar17;
                  if (lVar12 == 0 || lVar27 == 0) {
                    repeating_00.bridgeObject = (void *)0xe100000000000000;
                    repeating_00.str = (char *)0x20;
                    SVar36 = Swift::String::init(repeating_00,lVar7);
                  }
                  else {
                    SVar36 = Swift::__typeName(SUB81(lVar24,0));
                    _Var9 = Swift::String::get_count(SVar36);
                    _swift_bridgeObjectRelease(SVar36.bridgeObject);
                    if (SBORROW8(lVar7,_Var9)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f268);
                      (*pcVar5)();
                    }
                    repeating_01.bridgeObject = (void *)0xe100000000000000;
                    repeating_01.str = (char *)0x20;
                    SVar36 = Swift::String::init(repeating_01,lVar7 - _Var9);
                    uVar34 = *(ulong *)(pcVar17 + 0x10);
                    if (*(ulong *)(pcVar17 + 0x18) >> 1 <= uVar34) {
                      pcVar11 = (char *)(ulong)(1 < *(ulong *)(pcVar17 + 0x18));
                      FUN_100624804(pcVar11,uVar34 + 1,1);
                      pcVar26 = pcVar17;
                    }
                    *(ulong *)(pcVar11 + 0x10) = uVar34 + 1;
                    *(String *)(pcVar11 + uVar34 * 0x10 + 0x20) = SVar36;
                    SVar36 = Swift::__typeName(SUB81(lVar24,0));
                  }
                  uVar8 = *(ulong *)(pcVar11 + 0x10);
                  uVar34 = uVar8 + 1;
                  pcVar17 = pcVar11;
                  if (*(ulong *)(pcVar11 + 0x18) >> 1 <= uVar8) {
                    pcVar17 = (char *)(ulong)(1 < *(ulong *)(pcVar11 + 0x18));
                    FUN_100624804(pcVar17,uVar34,1);
                    pcVar26 = pcVar11;
                  }
                  *(ulong *)(pcVar17 + 0x10) = uVar34;
                  *(String *)(pcVar17 + uVar8 * 0x10 + 0x20) = SVar36;
                  pcVar11 = pcVar17;
                  if (*(ulong *)(pcVar17 + 0x18) >> 1 <= uVar34) {
                    pcVar11 = (char *)(ulong)(1 < *(ulong *)(pcVar17 + 0x18));
                    FUN_100624804(pcVar11,uVar8 + 2,1);
                    pcVar26 = pcVar17;
                  }
                  *(ulong *)(pcVar11 + 0x10) = uVar8 + 2;
                  builtin_strncpy(pcVar11 + uVar34 * 0x10 + 0x20," ↓↑ ",8);
                  pcVar17 = pcVar11 + uVar34 * 0x10 + 0x28;
                  pcVar17[0] = '\0';
                  pcVar17[1] = '\0';
                  pcVar17[2] = '\0';
                  pcVar17[3] = '\0';
                  pcVar17[4] = '\0';
                  pcVar17[5] = '\0';
                  pcVar17[6] = '\0';
                  pcVar17[7] = -0x58;
                  lVar24 = lVar27;
                  _swift_getObjectType();
                  lVar12 = lVar24;
                  _swift_conformsToProtocol();
                  pcVar17 = pcVar16;
                  pcVar23 = pcVar11;
                  if ((lVar12 != 0) && (lVar27 != 0)) {
                    SVar36 = Swift::__typeName(SUB81(lVar24,0));
                    uVar34 = *(ulong *)(pcVar11 + 0x10);
                    if (*(ulong *)(pcVar11 + 0x18) >> 1 <= uVar34) {
                      pcVar23 = (char *)(ulong)(1 < *(ulong *)(pcVar11 + 0x18));
                      FUN_100624804(pcVar23,uVar34 + 1,1);
                      pcVar26 = pcVar11;
                    }
                    *(ulong *)(pcVar23 + 0x10) = uVar34 + 1;
                    *(String *)(pcVar23 + uVar34 * 0x10 + 0x20) = SVar36;
                    SVar36 = Swift::__typeName(SUB81(lVar24,0));
                    _Var9 = Swift::String::get_count(SVar36);
                    _swift_bridgeObjectRelease(SVar36.bridgeObject);
                    pcVar17 = pcVar16 + -_Var9;
                    if (SBORROW8((long)pcVar16,_Var9)) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f26c);
                      (*pcVar5)();
                    }
                  }
                  repeating_02.bridgeObject = (void *)0xe100000000000000;
                  repeating_02.str = (char *)0x20;
                  SVar36 = Swift::String::init(repeating_02,(__int64)pcVar17);
                  uVar8 = *(ulong *)(pcVar23 + 0x10);
                  uVar34 = uVar8 + 1;
                  pcVar11 = pcVar23;
                  if (*(ulong *)(pcVar23 + 0x18) >> 1 <= uVar8) {
                    pcVar11 = (char *)(ulong)(1 < *(ulong *)(pcVar23 + 0x18));
                    pcVar17 = &DAT_00000001;
                    FUN_100624804(pcVar11,uVar34);
                    pcVar26 = pcVar23;
                  }
                  *(ulong *)(pcVar11 + 0x10) = uVar34;
                  *(String *)(pcVar11 + uVar8 * 0x10 + 0x20) = SVar36;
                  pcVar23 = pcVar11;
                  if (*(ulong *)(pcVar11 + 0x18) >> 1 <= uVar34) {
                    pcVar23 = (char *)(ulong)(1 < *(ulong *)(pcVar11 + 0x18));
                    pcVar17 = &DAT_00000001;
                    FUN_100624804(pcVar23,uVar8 + 2);
                    pcVar26 = pcVar11;
                  }
                  *(ulong *)(pcVar23 + 0x10) = uVar8 + 2;
                  pcVar11 = pcVar23 + uVar34 * 0x10 + 0x20;
                  pcVar11[0] = ' ';
                  pcVar11[1] = '\0';
                  pcVar11[2] = '\0';
                  pcVar11[3] = '\0';
                  pcVar11[4] = '\0';
                  pcVar11[5] = '\0';
                  pcVar11[6] = '\0';
                  pcVar11[7] = '\0';
                  pcVar11 = pcVar23 + uVar34 * 0x10 + 0x28;
                  pcVar11[0] = '\0';
                  pcVar11[1] = '\0';
                  pcVar11[2] = '\0';
                  pcVar11[3] = '\0';
                  pcVar11[4] = '\0';
                  pcVar11[5] = '\0';
                  pcVar11[6] = '\0';
                  pcVar11[7] = -0x1f;
                  local_78.str = (char *)0x5b;
                  local_78.bridgeObject = (void *)0xe100000000000000;
                  _swift_bridgeObjectRetain(pvVar15);
                  SVar38.bridgeObject = pvVar15;
                  SVar38.str = pcVar10;
                  SVar43.bridgeObject = pcVar26;
                  SVar43.str = pcVar17;
                  Swift::String::append(SVar38,SVar43);
                  _swift_bridgeObjectRelease(pvVar15);
                  SVar39.bridgeObject = (void *)0xe100000000000000;
                  SVar39.str = (char *)0x5d;
                  SVar44.bridgeObject = pcVar26;
                  SVar44.str = pcVar17;
                  Swift::String::append(SVar39,SVar44);
                  pvVar3 = local_78.bridgeObject;
                  pcVar10 = local_78.str;
                  uVar34 = *(ulong *)(pcVar23 + 0x10);
                  pcVar26 = pcVar23;
                  if (*(ulong *)(pcVar23 + 0x18) >> 1 <= uVar34) {
                    pcVar26 = (char *)(ulong)(1 < *(ulong *)(pcVar23 + 0x18));
                    FUN_100624804(pcVar26,uVar34 + 1,1,pcVar23);
                  }
                  *(ulong *)(pcVar26 + 0x10) = uVar34 + 1;
                  *(char **)(pcVar26 + uVar34 * 0x10 + 0x20) = pcVar10;
                  *(void **)(pcVar26 + uVar34 * 0x10 + 0x28) = pvVar3;
                  local_78.str = pcVar26;
                  FUN_1000f7830(&DAT_100fd78b8,&DAT_100c694a0);
                  FUN_100631cc4();
                  SVar36 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
                  uVar34 = *(ulong *)(puVar13 + 0x10);
                  puVar20 = puVar13;
                  if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar34) {
                    puVar20 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
                    FUN_100624804(puVar20,uVar34 + 1,1,puVar13);
                  }
                  puVar30 = puVar30 + 4;
                  *(ulong *)(puVar20 + 0x10) = uVar34 + 1;
                  *(String *)(puVar20 + uVar34 * 0x10 + 0x20) = SVar36;
                  _swift_bridgeObjectRelease(pcVar26);
                  _swift_bridgeObjectRelease(pvVar15);
                  _swift_unknownObjectRelease(lVar27);
                  uVar29 = uVar29 - 1;
                  puVar13 = puVar20;
                } while (uVar29 != 0);
                _swift_bridgeObjectRelease(local_90);
              }
              FUN_1000f7830(&DAT_100fd78b8,&DAT_100c694a0);
              FUN_100631cc4();
              separator.bridgeObject = (void *)0xe100000000000000;
              separator.str = (char *)0xa;
              SVar36 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
              _swift_bridgeObjectRelease(puVar20);
              return SVar36;
            }
            if (*(ulong *)(local_90 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
              pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f264);
              (*pcVar5)();
            }
            uVar34 = uVar34 + 1;
            lVar24 = puVar19[2];
            lVar27 = lVar24;
            _swift_getObjectType();
            _swift_conformsToProtocol();
            puVar30 = puVar19 + 4;
          } while (lVar27 == 0 || lVar24 == 0);
          uVar28 = puVar19[3];
          uVar32 = puVar19[4];
          uVar33 = puVar19[5];
          _swift_unknownObjectRetain(lVar24);
          _swift_bridgeObjectRetain(uVar33);
          pcVar10 = pcVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          local_78.str = pcVar16;
          if (((ulong)pcVar10 & 1) == 0) {
            FUN_100624fe4(0,*(long *)(pcVar16 + 0x10) + 1,1);
            pcVar16 = local_78.str;
          }
          uVar8 = *(ulong *)(pcVar16 + 0x10);
          if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar8) {
            FUN_100624fe4(1 < *(ulong *)(pcVar16 + 0x18),uVar8 + 1,1);
            pcVar16 = local_78.str;
          }
          *(ulong *)(pcVar16 + 0x10) = uVar8 + 1;
          *(long *)(pcVar16 + uVar8 * 0x20 + 0x20) = lVar24;
          *(undefined8 *)(pcVar16 + uVar8 * 0x20 + 0x28) = uVar28;
          *(undefined8 *)(pcVar16 + uVar8 * 0x20 + 0x30) = uVar32;
          *(undefined8 *)(pcVar16 + uVar8 * 0x20 + 0x38) = uVar33;
        } while( true );
      }
      if (*(ulong *)(local_90 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10062f260);
        (*pcVar5)();
      }
      uVar34 = uVar34 + 1;
      uVar31 = puVar18[2];
      uVar8 = uVar31;
      _swift_getObjectType();
      _swift_conformsToProtocol();
      puVar4 = puVar18 + 4;
    } while (uVar8 == 0 || uVar31 == 0);
    uVar8 = puVar18[3];
    uVar2 = puVar18[4];
    uVar25 = puVar18[5];
    _swift_unknownObjectRetain(uVar31);
    _swift_bridgeObjectRetain(uVar25);
    pcVar10 = pcVar16;
    _swift_isUniquelyReferenced_nonNull_native();
    local_78.str = pcVar16;
    if (((ulong)pcVar10 & 1) == 0) {
      FUN_100624fe4(0,*(long *)(pcVar16 + 0x10) + 1,1);
      pcVar16 = local_78.str;
    }
    uVar1 = *(ulong *)(pcVar16 + 0x10);
    if (*(ulong *)(pcVar16 + 0x18) >> 1 <= uVar1) {
      FUN_100624fe4(1 < *(ulong *)(pcVar16 + 0x18),uVar1 + 1,1);
      pcVar16 = local_78.str;
    }
    *(ulong *)(pcVar16 + 0x10) = uVar1 + 1;
    *(ulong *)(pcVar16 + uVar1 * 0x20 + 0x20) = uVar31;
    *(ulong *)(pcVar16 + uVar1 * 0x20 + 0x28) = uVar8;
    *(ulong *)(pcVar16 + uVar1 * 0x20 + 0x30) = uVar2;
    *(ulong *)(pcVar16 + uVar1 * 0x20 + 0x38) = uVar25;
  } while( true );
}



/* Address: 0x10062f2b4 | FUN_10062f2b4 */

void FUN_10062f2b4(undefined8 *param_1,long *param_2,undefined8 param_3)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 local_48;
  long local_40;
  undefined8 uStack_38;
  
  lVar5 = *param_2;
  lVar4 = *(long *)(lVar5 + 0x38);
  if (lVar4 == 0) {
    lVar4 = *(long *)(lVar5 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f364);
      (*pcVar1)();
    }
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x50) + 8);
    _swift_unknownObjectRetain();
    lVar5 = 0;
  }
  else {
    uVar6 = *(undefined8 *)(*(long *)(lVar5 + 0x40) + 8);
    lVar5 = lVar4;
  }
  local_40 = lVar4;
  uStack_38 = uVar6;
  _swift_unknownObjectRetain(lVar5);
  puVar2 = &DAT_100fd78c8;
  FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
  puVar3 = &local_48;
  _swift_dynamicCast(puVar3,&local_40,puVar2,param_3,6);
  if (((ulong)puVar3 & 1) != 0) {
    *param_1 = local_48;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f360);
  (*pcVar1)();
}



/* Address: 0x10062f364 | FUN_10062f364 */

void FUN_10062f364(undefined8 param_1,code *param_2,undefined8 param_3,long param_4)

{
  bool bVar1;
  Result RVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *(long *)(param_4 + 0x10);
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = &stack0xffffffffffffffa0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)puVar5 - (*(long *)(*(long *)(param_4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))(lVar6);
  lVar3 = lVar6;
  _swift_getEnumCaseMultiPayload(lVar6,param_4);
  bVar1 = (int)lVar3 != 1;
  if (bVar1) {
    (**(code **)(lVar7 + 0x20))(puVar5,lVar6,lVar4);
    (*param_2)(param_1,puVar5);
    (**(code **)(lVar7 + 8))(puVar5,lVar4);
  }
  else {
    (**(code **)(*(long *)(*(long *)(param_4 + 0x18) + -8) + 0x20))
              (param_1,lVar6,*(long *)(param_4 + 0x18));
  }
  RVar2 = Swift::Result::typeMetadataAccessor();
  _swift_storeEnumTagMultiPayload(param_1,RVar2.value,!bVar1);
  return;
}



/* Address: 0x10062f498 | FUN_10062f498 */

void FUN_10062f498(void)

{
  FUN_10062e634();
  return;
}



/* Address: 0x10062f4b8 | FUN_10062f4b8 */

void FUN_10062f4b8(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long unaff_x20;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  long local_88 [3];
  long local_70;
  long lStack_68;
  
  uVar8 = *(ulong *)(unaff_x20 + 0x30);
  lVar7 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar8;
  (**(code **)(lVar7 + 0x10))();
  if ((uVar3 & 1) == 0) {
    pcVar1 = *(code **)(lVar7 + 0x20);
    _swift_retain();
    (*pcVar1)(FUN_100631d14);
    _swift_release();
  }
  else {
    if (*(long *)(unaff_x20 + 0x10) == 0) {
      lVar13 = 0;
    }
    else {
      lVar11 = *(long *)(*(long *)(unaff_x20 + 0x10) + 0x10);
      _swift_retain(lVar11);
      lVar13 = 0;
      if (lVar11 != 0) {
        do {
          if (lVar11 == *(long *)(unaff_x20 + 0x18)) {
            _swift_release(lVar11);
            break;
          }
          lVar9 = *(long *)(lVar11 + 0x38);
          if (lVar9 == 0) {
            lVar9 = *(long *)(lVar11 + 0x48);
            if (lVar9 == 0) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f714);
              (*pcVar1)();
            }
            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x50) + 8);
            _swift_unknownObjectRetain();
            lVar10 = 0;
          }
          else {
            uVar12 = *(undefined8 *)(*(long *)(lVar11 + 0x40) + 8);
            lVar10 = lVar9;
          }
          local_98 = lVar9;
          uStack_90 = uVar12;
          _swift_retain(lVar11);
          _swift_unknownObjectRetain(lVar10);
          puVar4 = &DAT_100fd78c8;
          FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
          puVar5 = &DAT_100fd78d0;
          FUN_1000f7830(&DAT_100fd78d0,&DAT_100c694b0);
          puVar6 = &local_c0;
          _swift_dynamicCast(puVar6,&local_98,puVar4,puVar5,6);
          if ((int)puVar6 == 0) {
            _swift_release(lVar11);
            local_a0 = 0;
            uStack_b8 = 0;
            local_c0 = 0;
            uStack_a8 = 0;
            uStack_b0 = 0;
            FUN_1000fb4c4(&local_c0,&DAT_100fd78d8,&DAT_100c694b8);
          }
          else {
            FUN_100076508(&local_c0,local_88);
            lVar10 = lStack_68;
            lVar9 = local_70;
            FUN_100004640(local_88,local_70);
            (**(code **)(lVar10 + 8))(lVar9,lVar10);
            _swift_release(lVar11);
            bVar2 = SCARRY8(lVar13,lVar9);
            lVar13 = lVar13 + lVar9;
            if (bVar2) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f710);
              (*pcVar1)();
            }
            FUN_100004594(local_88);
          }
          lVar9 = *(long *)(lVar11 + 0x10);
          _swift_retain(lVar9);
          _swift_release(lVar11);
          lVar11 = lVar9;
        } while (lVar9 != 0);
      }
    }
    local_88[0] = lVar13;
    FUN_10063dc68(local_88,uVar8,PTR___type_metadata_for_Swift_Int_100eac6f8,lVar7);
  }
  return;
}



/* Address: 0x10062f714 | FUN_10062f714 */

void FUN_10062f714(long *param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  long local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  long local_58;
  
  if (*(long *)(param_2 + 0x10) != 0) {
    lVar9 = *(long *)(*(long *)(param_2 + 0x10) + 0x10);
    _swift_retain(lVar9);
    if (lVar9 != 0) {
      local_58 = 0;
      do {
        if (lVar9 == *(long *)(param_2 + 0x18)) {
          _swift_release(lVar9);
          break;
        }
        lVar7 = *(long *)(lVar9 + 0x38);
        if (lVar7 == 0) {
          lVar7 = *(long *)(lVar9 + 0x48);
          if (lVar7 == 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f908);
            (*pcVar1)();
          }
          uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x50) + 8);
          _swift_unknownObjectRetain();
          lVar8 = 0;
        }
        else {
          uVar6 = *(undefined8 *)(*(long *)(lVar9 + 0x40) + 8);
          lVar8 = lVar7;
        }
        local_98 = lVar7;
        uStack_90 = uVar6;
        _swift_retain(lVar9);
        _swift_unknownObjectRetain(lVar8);
        puVar3 = &DAT_100fd78c8;
        FUN_1000f7830(&DAT_100fd78c8,&DAT_100c694a8);
        puVar4 = &DAT_100fd78d0;
        FUN_1000f7830(&DAT_100fd78d0,&DAT_100c694b0);
        puVar5 = &local_c0;
        _swift_dynamicCast(puVar5,&local_98,puVar3,puVar4,6);
        if ((int)puVar5 == 0) {
          _swift_release(lVar9);
          local_a0 = 0;
          uStack_b8 = 0;
          local_c0 = 0;
          uStack_a8 = 0;
          uStack_b0 = 0;
          FUN_1000fb4c4(&local_c0,&DAT_100fd78d8,&DAT_100c694b8);
        }
        else {
          FUN_100076508(&local_c0,auStack_88);
          lVar8 = lStack_68;
          lVar7 = local_70;
          FUN_100004640(auStack_88,local_70);
          (**(code **)(lVar8 + 8))(lVar7,lVar8);
          _swift_release(lVar9);
          bVar2 = SCARRY8(local_58,lVar7);
          local_58 = local_58 + lVar7;
          if (bVar2) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x10062f904);
            (*pcVar1)();
          }
          FUN_100004594(auStack_88);
        }
        lVar7 = *(long *)(lVar9 + 0x10);
        _swift_retain(lVar7);
        _swift_release(lVar9);
        lVar9 = lVar7;
      } while (lVar7 != 0);
      goto LAB_10062f8d4;
    }
  }
  local_58 = 0;
LAB_10062f8d4:
  *param_1 = local_58;
  return;
}


