/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10062ab88 | FUN_10062ab88 */

void FUN_10062ab88(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x38);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062ab88();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062ac2c | FUN_10062ac2c */

void FUN_10062ac2c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x28);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062ac2c(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062acf8 | FUN_10062acf8 */

void FUN_10062acf8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x28);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    (**(code **)(lVar2 + 0x30))();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062acf8(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062add8 | FUN_10062add8 */

void FUN_10062add8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x18);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062add8(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062aea4 | FUN_10062aea4 */

void FUN_10062aea4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x20);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062aea4(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062af70 | FUN_10062af70 */

void FUN_10062af70(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x10);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062af70(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b020 | FUN_10062b020 */

void FUN_10062b020(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x48);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x50);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x48);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b020(param_1,param_2);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b0ec | FUN_10062b0ec */

void FUN_10062b0ec(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x10);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b0ec();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b190 | FUN_10062b190 */

void FUN_10062b190(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x18);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b190();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b234 | FUN_10062b234 */

void FUN_10062b234(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x28);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b234();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b2d8 | FUN_10062b2d8 */

void FUN_10062b2d8(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x20);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b2d8();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b37c | FUN_10062b37c */

void FUN_10062b37c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x30);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b42c | FUN_10062b42c */

void FUN_10062b42c(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x38);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b42c();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b4d0 | FUN_10062b4d0 */

void FUN_10062b4d0(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x40);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b4d0();
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b574 | FUN_10062b574 */

void FUN_10062b574(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x48);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b574(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b624 | FUN_10062b624 */

void FUN_10062b624(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long lVar2;
  code *pcVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x38);
  if (lVar1 != 0) {
    lVar2 = *(long *)(unaff_x20 + 0x40);
    _swift_getObjectType(lVar1);
    pcVar3 = *(code **)(lVar2 + 0x50);
    _swift_unknownObjectRetain(lVar1);
    (*pcVar3)();
    _swift_unknownObjectRelease(lVar1);
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 0x10);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_10062b624(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062b6d4 | FUN_10062b6d4 */

undefined8 FUN_10062b6d4(undefined8 param_1,undefined8 param_2)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_10062b720(param_1,param_2);
  return unaff_x20;
}



/* Address: 0x10062b720 | FUN_10062b720 */

void FUN_10062b720(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long lVar4;
  long *plVar5;
  code *pcVar6;
  
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined1 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = param_1;
  *(long *)(unaff_x20 + 0x48) = param_2;
  uVar1 = param_1;
  _swift_getObjectType();
  lVar4 = *(long *)(param_2 + 8);
  pcVar6 = *(code **)(lVar4 + 0x50);
  _swift_unknownObjectRetain(param_1);
  (*pcVar6)();
  *(undefined8 *)(unaff_x20 + 0x30) = uVar1;
  *(long *)(unaff_x20 + 0x38) = lVar4;
  FUN_100631c6c();
  plVar5 = (long *)(unaff_x20 + 0x10);
  *plVar5 = 0;
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_initStaticObject();
  uVar2 = uVar1;
  FUN_100631530();
  _swift_allocObject();
  lVar4 = 0x64616568;
  FUN_100630db4(0x64616568,&DAT_e400000000000000,uVar1);
  lVar3 = *plVar5;
  *plVar5 = lVar4;
  _swift_retain();
  _swift_release(lVar3);
  FUN_100631c8c();
  _swift_initStaticObject();
  _swift_allocObject(uVar2,0x5a,7);
  uVar1 = 0x6c696174;
  FUN_100630d30(0x6c696174,&DAT_e400000000000000,lVar3);
  _swift_retain();
  _swift_unknownObjectRelease(param_1);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
  _swift_release(uVar2);
  lVar4 = *plVar5;
  if (lVar4 != 0) {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    *(undefined8 *)(lVar4 + 0x10) = uVar1;
    _swift_retain(lVar4);
    _swift_retain(uVar1);
    _swift_release(lVar4);
    _swift_release(uVar2);
  }
  lVar4 = *(long *)(unaff_x20 + 0x18);
  if (lVar4 != 0) {
    lVar3 = *plVar5;
    uVar1 = *(undefined8 *)(lVar4 + 0x18);
    *(long *)(lVar4 + 0x18) = lVar3;
    _swift_retain(lVar4);
    _swift_retain(lVar3);
    _swift_release(lVar4);
    _swift_release(uVar1);
  }
  return;
}



/* Address: 0x10062b8cc | FUN_10062b8cc */

void FUN_10062b8cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x10062b900 | FUN_10062b900 */

void FUN_10062b900(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10062b93c | FUN_10062b93c */

void FUN_10062b93c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *unaff_x20;
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_10062a478(param_1);
    return;
  }
  puVar4 = &DAT_100eedb50;
  _swift_allocObject(&DAT_100eedb50,0x20,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_1);
  _swift_retain(lVar5);
  (*pcVar6)(thunk_FUN_10061de38,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10062ba04 | FUN_10062ba04 */

void FUN_10062ba04(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *unaff_x20;
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_10062a0a0(param_1,param_2,FUN_10062add8,&DAT_100eedce0,thunk_FUN_10061dfe0);
    return;
  }
  puVar4 = &DAT_100eedb28;
  _swift_allocObject(&DAT_100eedb28,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(ulong *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar5);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar6)(thunk_FUN_10063161c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10062baf8 | FUN_10062baf8 */

void FUN_10062baf8(ulong param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *unaff_x20;
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_10062a0a0(param_1,param_2,FUN_10062aea4,&DAT_100eedc90,thunk_FUN_10061dfe0);
    return;
  }
  puVar4 = &DAT_100eedb00;
  _swift_allocObject(&DAT_100eedb00,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(ulong *)(puVar4 + 0x18) = param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar5);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  (*pcVar6)(thunk_FUN_100631650,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10062bbec | FUN_10062bbec */

void FUN_10062bbec(void)

{
  FUN_100627114();
  return;
}



/* Address: 0x10062bc0c | FUN_10062bc0c */

void FUN_10062bc0c(void)

{
  FUN_10062714c();
  return;
}



/* Address: 0x10062bc2c | FUN_10062bc2c */

void FUN_10062bc2c(void)

{
  FUN_100627160();
  return;
}



/* Address: 0x10062bc4c | FUN_10062bc4c */

void FUN_10062bc4c(void)

{
  FUN_100627440();
  return;
}



/* Address: 0x10062bc6c | FUN_10062bc6c */

void FUN_10062bc6c(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long *unaff_x20;
  long lVar5;
  code *pcVar6;
  
  lVar5 = *unaff_x20;
  uVar2 = *(ulong *)(lVar5 + 0x30);
  lVar1 = *(long *)(lVar5 + 0x38);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_100629d44(param_1,param_2);
    return;
  }
  puVar4 = &DAT_100eedad8;
  _swift_allocObject(&DAT_100eedad8,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  puVar4[0x18] = (char)param_1;
  *(undefined8 *)(puVar4 + 0x20) = param_2;
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_2);
  _swift_retain(lVar5);
  (*pcVar6)(thunk_FUN_10061de00,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10062bd44 | FUN_10062bd44 */

void FUN_10062bd44(void)

{
  FUN_1006276a0();
  return;
}



/* Address: 0x10062bd64 | FUN_10062bd64 */

void FUN_10062bd64(void)

{
  long *unaff_x20;
  
  _swift_unknownObjectRetain(*(undefined8 *)(*unaff_x20 + 0x30));
  return;
}



/* Address: 0x10062bd8c | FUN_10062bd8c */

void FUN_10062bd8c(void)

{
  FUN_100629528();
  return;
}



/* Address: 0x10062bdac | FUN_10062bdac */

void FUN_10062bdac(void)

{
  FUN_10062953c();
  return;
}



/* Address: 0x10062bdcc | FUN_10062bdcc */

void FUN_10062bdcc(void)

{
  FUN_100629564();
  return;
}



/* Address: 0x10062bdec | FUN_10062bdec */

void FUN_10062bdec(void)

{
  FUN_100629550();
  return;
}



/* Address: 0x10062be0c | FUN_10062be0c */

void FUN_10062be0c(void)

{
  FUN_100629578();
  return;
}



/* Address: 0x10062be2c | FUN_10062be2c */

void FUN_10062be2c(void)

{
  FUN_100629938();
  return;
}



/* Address: 0x10062be4c | FUN_10062be4c */

void FUN_10062be4c(void)

{
  FUN_10062994c();
  return;
}



/* Address: 0x10062be6c | FUN_10062be6c */

void FUN_10062be6c(void)

{
  FUN_100629c10();
  return;
}



/* Address: 0x10062be8c | FUN_10062be8c */

void FUN_10062be8c(void)

{
  FUN_100629a5c();
  return;
}



/* Address: 0x10062beac | FUN_10062beac */

void FUN_10062beac(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  undefined8 local_48;
  
  uVar3 = (uint)(param_4 >> 0x3e);
  uVar4 = param_4;
  lVar5 = param_3;
  if (uVar3 == 0) {
LAB_10062bf38:
    FUN_1005dfcb0(param_3,param_4);
    FUN_10062c0a0(param_2,lVar5,uVar4);
    uVar3 = (uint)lVar5;
  }
  else {
    if (uVar3 == 1) {
      uVar4 = param_4 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar4 = 0x8000000000000000;
      if (param_3 != 0 || param_4 != 0x8000000000000000) {
        lVar5 = 1;
        goto LAB_10062bf38;
      }
      lVar5 = 0;
    }
    FUN_1005dfcb0(param_3,param_4);
    FUN_10062bfe4(param_2,lVar5,uVar4);
    uVar3 = (uint)lVar5;
  }
  FUN_1005dfc80(param_3,param_4);
  if (((uVar3 & 0xff) == 1) &&
     (local_48 = param_2,
     bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
     (bVar1 & 1) != 0)) {
    puVar2 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_48,puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x10062bfe0 | thunk_FUN_1006268dc */

void thunk_FUN_1006268dc(void)

{
  FUN_1006268dc();
  return;
}



/* Address: 0x10062bfe4 | FUN_10062bfe4 */

undefined1  [16] FUN_10062bfe4(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + 0x10) + 1;
  lVar3 = param_1 + *(long *)(param_1 + 0x10) * 0x10 + 0x18;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = 0;
      uVar2 = 0;
      goto LAB_10062c078;
    }
    uVar2 = *(undefined8 *)(lVar3 + -8);
    _swift_getObjectType(uVar2);
    uVar4 = uVar2;
    _swift_unknownObjectRetain(uVar2);
    uVar1 = 0;
    FUN_100630400();
    _swift_unknownObjectRelease(uVar2);
    lVar3 = lVar3 + -0x10;
  } while ((uVar1 & 0xff) != 1);
  uVar2 = 1;
LAB_10062c078:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x10062c0a0 | FUN_10062c0a0 */

undefined1  [16] FUN_10062c0a0(long param_1)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  lVar5 = *(long *)(param_1 + 0x10) + 1;
  lVar3 = param_1 + 0x28;
  do {
    lVar5 = lVar5 + -1;
    if (lVar5 == 0) {
      uVar4 = 0;
      uVar2 = 0;
      goto LAB_10062c13c;
    }
    uVar2 = *(undefined8 *)(lVar3 + -8);
    _swift_getObjectType(uVar2);
    uVar4 = uVar2;
    _swift_unknownObjectRetain(uVar2);
    uVar1 = 0;
    FUN_100630400();
    _swift_unknownObjectRelease(uVar2);
    lVar3 = lVar3 + 0x10;
  } while ((uVar1 & 0xff) != 1);
  uVar2 = 1;
LAB_10062c13c:
  auVar6._8_8_ = uVar2;
  auVar6._0_8_ = uVar4;
  return auVar6;
}



/* Address: 0x10062c158 | FUN_10062c158 */

void FUN_10062c158(long param_1)

{
  _swift_unknownObjectRetain(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x10062c180 | FUN_10062c180 */

void FUN_10062c180(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,ulong param_6,undefined8 param_7)

{
  byte bVar1;
  undefined8 uVar2;
  undefined *puVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_58;
  
  uVar4 = (uint)(param_6 >> 0x3e);
  uVar5 = param_6;
  uVar6 = param_5;
  if (uVar4 != 0) {
    if (uVar4 == 1) {
      uVar5 = param_6 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar6 = (ulong)(param_5 != 0 || param_6 != 0x8000000000000000);
      uVar5 = 0x8000000000000000;
    }
  }
  uVar2 = param_1;
  _swift_getObjectType(param_1);
  FUN_1005dfcb0(param_5,param_6);
  FUN_100630400(param_1,param_3,param_4,uVar6,uVar5,param_7,uVar2,param_2);
  if (((uint)param_3 & 0xff) == 1) {
    local_58 = param_1;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      _swift_willThrowTypedImpl
                (&local_58,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_1005dfc80(param_5,param_6);
  }
  else {
    FUN_1005dfc80(param_5,param_6);
  }
  return;
}



/* Address: 0x10062c2d4 | FUN_10062c2d4 */

void FUN_10062c2d4(void)

{
  FUN_10062c2e8();
  return;
}



/* Address: 0x10062c2e8 | FUN_10062c2e8 */

void FUN_10062c2e8(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  undefined8 local_28;
  
  uVar3 = (uint)((ulong)param_3 >> 0x3e);
  if ((uVar3 == 0) || ((uVar3 != 1 && (param_2 != 0 || param_3 != -0x8000000000000000)))) {
    FUN_10062c0a0();
    uVar3 = (uint)param_2;
  }
  else {
    FUN_10062bfe4();
    uVar3 = (uint)param_2;
  }
  if (((uVar3 & 0xff) == 1) &&
     (local_28 = param_1,
     bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
     (bVar1 & 1) != 0)) {
    puVar2 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_28,puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x10062c3a0 | FUN_10062c3a0 */

void FUN_10062c3a0(void)

{
  FUN_10062c3b4();
  return;
}



/* Address: 0x10062c3b4 | FUN_10062c3b4 */

void FUN_10062c3b4(undefined8 param_1,long param_2,ulong param_3)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 local_38;
  
  uVar4 = (uint)(param_3 >> 0x3e);
  uVar5 = param_3;
  lVar6 = param_2;
  if (uVar4 == 0) {
LAB_10062c434:
    FUN_1005dfcb0(param_2,param_3);
    lVar3 = lVar6;
    FUN_10062c0a0(param_1,lVar6,uVar5);
    uVar4 = (uint)lVar3;
  }
  else {
    if (uVar4 == 1) {
      uVar5 = param_3 & 0x3fffffffffffffff | 0x4000000000000000;
    }
    else {
      uVar5 = 0x8000000000000000;
      if (param_2 != 0 || param_3 != 0x8000000000000000) {
        lVar6 = 1;
        goto LAB_10062c434;
      }
      lVar6 = 0;
    }
    FUN_1005dfcb0(param_2,param_3);
    lVar3 = lVar6;
    FUN_10062bfe4(param_1,lVar6,uVar5);
    uVar4 = (uint)lVar3;
  }
  if ((uVar4 & 0xff) == 1) {
    local_38 = param_1;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar2 = &DAT_100fd4f20;
      FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
      _swift_willThrowTypedImpl
                (&local_38,puVar2,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    FUN_1005dfc80(lVar6,uVar5);
  }
  else {
    FUN_1005dfc80(lVar6,uVar5);
  }
  return;
}



/* Address: 0x10062c4e4 | FUN_10062c4e4 */

undefined8 FUN_10062c4e4(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_3 + 0x30);
  _swift_getObjectType(uVar1);
  FUN_1006422fc();
  uVar2 = param_1;
  _swift_getObjectType(param_1);
  _swift_retain(uVar1);
  FUN_100630bd0(param_1,uVar1,param_3,uVar2,param_2);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x10062c574 | thunk_FUN_1006313ac */

void thunk_FUN_1006313ac(long param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  code *pcVar11;
  
  puVar9 = *(undefined8 **)(param_1 + 0x38);
  puVar10 = puVar9;
  if (puVar9 == (undefined8 *)0x0) {
    puVar10 = *(undefined8 **)(param_1 + 0x48);
    if (puVar10 == (undefined8 *)0x0) {
                    /* WARNING: Does not return */
      pcVar11 = (code *)SoftwareBreakpoint(1,0x100631530);
      (*pcVar11)();
    }
    _swift_unknownObjectRetain(puVar10);
  }
  puVar2 = puVar10;
  _swift_getObjectType();
  _swift_conformsToProtocol();
  _swift_unknownObjectRetain(puVar9);
  _swift_unknownObjectRelease();
  if (puVar2 == (undefined8 *)0x0) {
    if (param_2 != 0) {
      FUN_10061e4f8();
      puVar3 = &DAT_100eeb710;
      uVar8 = 0;
      _swift_allocError(&DAT_100eeb710,puVar10,0,0);
      *puVar10 = 0xd;
      *(undefined1 *)(puVar10 + 1) = 3;
      uVar4 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar4;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar6 = &DAT_100eedd80;
        _swift_allocObject(&DAT_100eedd80,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined **)(puVar6 + 0x18) = puVar3;
        pcVar11 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar3);
        (*pcVar11)(thunk_FUN_10061dfe0,puVar6,uVar4,lVar1);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar3;
        thunk_FUN_1005de8f4(puVar3);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar7);
        _swift_bridgeObjectRelease(uVar8);
      }
      _swift_errorRelease(puVar3);
      return;
    }
  }
  else {
    FUN_100628b98(param_2);
  }
  return;
}



/* Address: 0x10062c578 | FUN_10062c578 */

undefined * FUN_10062c578(undefined *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  undefined8 uVar7;
  undefined *puVar8;
  code *pcVar9;
  
  puVar2 = *(undefined **)(param_3 + 0x30);
  _swift_getObjectType();
  FUN_1006422fc();
  if (*(long *)(param_3 + 0x10) == 0) {
    puVar3 = puVar2;
    _swift_retain();
  }
  else {
    puVar8 = *(undefined **)(*(long *)(param_3 + 0x10) + 0x10);
    _swift_retain(puVar2);
    puVar3 = puVar8;
    _swift_retain();
    while (puVar4 = puVar8, puVar4 != (undefined *)0x0) {
      if (puVar4 == *(undefined **)(param_3 + 0x18)) {
        _swift_release();
        puVar3 = puVar4;
        break;
      }
                    /* WARNING: Load size is inaccurate */
      if ((puVar4[0x28] == param_1 && puVar4[0x30] == param_2) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)puVar4[0x28],(_StringGuts)puVar4[0x30],
                             (_StringComparisonResult)(__int8)param_1), bVar1)) {
        FUN_1006313ac(puVar4,puVar2);
        _swift_release(puVar4);
        puVar3 = puVar2;
        goto LAB_10062c754;
      }
      puVar8 = *(undefined **)(puVar4 + 0x10);
      _swift_retain(puVar8);
      _swift_release();
      puVar3 = puVar4;
    }
  }
  FUN_1005dfcfc();
  puVar8 = &DAT_100eed960;
  uVar7 = 0;
  _swift_allocError(&DAT_100eed960,puVar3,0,0);
  *puVar3 = 1;
  uVar5 = *(ulong *)(puVar2 + 0x20);
  lVar6 = *(long *)(puVar2 + 0x28);
  _swift_getObjectType();
  (**(code **)(lVar6 + 0x10))();
  if ((uVar5 & 1) == 0) {
    uVar7 = *(undefined8 *)(puVar2 + 0x20);
    lVar6 = *(long *)(puVar2 + 0x28);
    _swift_getObjectType(uVar7);
    puVar3 = &DAT_100eed448;
    _swift_allocObject(&DAT_100eed448,0x20,7);
    *(undefined **)(puVar3 + 0x10) = puVar2;
    *(undefined **)(puVar3 + 0x18) = puVar8;
    pcVar9 = *(code **)(lVar6 + 0x18);
    _swift_retain(puVar2);
    _swift_errorRetain(puVar8);
    (*pcVar9)(thunk_FUN_10061dfe0,puVar3,uVar7,lVar6);
    _swift_errorRelease(puVar8);
    _swift_release(puVar2);
LAB_10062c754:
    _swift_release(puVar3);
  }
  else {
    puVar3 = puVar8;
    thunk_FUN_1005de8f4(puVar8);
    FUN_1006486f8();
    _swift_release(puVar2);
    _swift_errorRelease(puVar8);
    FUN_100004550(puVar3,lVar6);
    _swift_bridgeObjectRelease(uVar7);
  }
  return puVar2;
}



/* Address: 0x10062c774 | FUN_10062c774 */

undefined8 FUN_10062c774(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  _swift_getObjectType(uVar1);
  FUN_1006422fc();
  _swift_retain();
  FUN_1006313ac(param_1,uVar1);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x10062c7d8 | FUN_10062c7d8 */

undefined1 * FUN_10062c7d8(undefined1 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *unaff_x20;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined *local_38;
  
  puVar5 = param_1;
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar4 = *(undefined1 **)(*(long *)(param_3 + 0x10) + 0x10);
    puVar5 = puVar4;
    _swift_retain();
    while (unaff_x20 = puVar4, unaff_x20 != (undefined1 *)0x0) {
      if (unaff_x20 == *(undefined1 **)(param_3 + 0x18)) {
        puVar5 = unaff_x20;
        _swift_release();
        break;
      }
      puVar4 = *(undefined1 **)(unaff_x20 + 0x38);
      puVar5 = puVar4;
      if (puVar4 == (undefined1 *)0x0) {
        puVar5 = *(undefined1 **)(unaff_x20 + 0x48);
        if (puVar5 == (undefined1 *)0x0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10062c910);
          (*pcVar1)();
        }
        _swift_unknownObjectRetain(puVar5);
        puVar4 = (undefined1 *)0x0;
      }
      _swift_unknownObjectRetain(puVar4);
      _swift_unknownObjectRelease(puVar5);
      if (puVar5 == param_1) {
        return unaff_x20;
      }
      puVar4 = *(undefined1 **)(unaff_x20 + 0x10);
      _swift_retain(puVar4);
      _swift_release();
      puVar5 = unaff_x20;
    }
  }
  FUN_1005dfcfc();
  puVar3 = &DAT_100eed960;
  _swift_allocError(&DAT_100eed960,puVar5,0,0);
  *puVar5 = 1;
  local_38 = puVar3;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    puVar3 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_38,puVar3,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return unaff_x20;
}



/* Address: 0x10062c910 | FUN_10062c910 */

undefined1 * FUN_10062c910(undefined1 *param_1,undefined *param_2,long param_3)

{
  bool bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  undefined1 *unaff_x20;
  undefined1 *puVar5;
  undefined *local_48;
  
  puVar3 = param_1;
  if (*(long *)(param_3 + 0x10) != 0) {
    puVar5 = *(undefined1 **)(*(long *)(param_3 + 0x10) + 0x10);
    puVar3 = puVar5;
    _swift_retain();
    while (unaff_x20 = puVar5, unaff_x20 != (undefined1 *)0x0) {
      if (unaff_x20 == *(undefined1 **)(param_3 + 0x18)) {
        puVar3 = unaff_x20;
        _swift_release();
        break;
      }
      if (*(undefined **)(unaff_x20 + 0x28) == param_1 &&
          *(undefined **)(unaff_x20 + 0x30) == param_2) {
        return unaff_x20;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)*(undefined **)(unaff_x20 + 0x28),
                         (_StringGuts)*(undefined **)(unaff_x20 + 0x30),
                         (_StringComparisonResult)(__int8)param_1);
      if (bVar1) {
        return unaff_x20;
      }
      puVar5 = *(undefined1 **)(unaff_x20 + 0x10);
      _swift_retain(puVar5);
      _swift_release();
      puVar3 = unaff_x20;
    }
  }
  FUN_1005dfcfc();
  puVar4 = &DAT_100eed960;
  _swift_allocError(&DAT_100eed960,puVar3,0,0);
  *puVar3 = 1;
  local_48 = puVar4;
  bVar2 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  if ((bVar2 & 1) != 0) {
    puVar4 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_48,puVar4,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return unaff_x20;
}



/* Address: 0x10062ca3c | FUN_10062ca3c */

void FUN_10062ca3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  byte bVar1;
  undefined *puVar2;
  undefined8 local_28;
  
  FUN_100629028(param_1,param_3,param_4);
  if ((((uint)param_3 & 0xff) == 1) &&
     (local_28 = param_1,
     bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0),
     (bVar1 & 1) != 0)) {
    puVar2 = &DAT_100fd4f20;
    FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
    _swift_willThrowTypedImpl
              (&local_28,puVar2,
               PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
  }
  return;
}



/* Address: 0x10062cad4 | FUN_10062cad4 */

void FUN_10062cad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  Result RVar1;
  undefined1 local_48 [8];
  undefined8 local_40;
  undefined1 local_38;
  undefined1 local_28 [8];
  
  FUN_10062cb6c(param_1,param_3,param_4);
  local_38 = (undefined1)param_3;
  local_40 = param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  FUN_100628180(local_28,RVar1.value,local_48);
  return;
}



/* Address: 0x10062cb6c | FUN_10062cb6c */

undefined1  [16] FUN_10062cb6c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined1 local_58;
  unkuint9 local_50;
  
  uVar2 = param_2;
  FUN_100629028();
  local_58 = (undefined1)uVar2;
  puVar1 = &DAT_100fd78a8;
  local_70 = param_2;
  local_68 = param_3;
  uStack_60 = param_1;
  FUN_1000f7830(&DAT_100fd78a8,&DAT_100c69450);
  FUN_10062f364(&local_50,FUN_100631cac,auStack_80,puVar1,param_2);
  FUN_1005dff14(param_1,uVar2);
  auVar3._9_7_ = 0;
  auVar3._0_9_ = local_50;
  return auVar3;
}



/* Address: 0x10062cc04 | FUN_10062cc04 */

void FUN_10062cc04(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b0ec);
  return;
}



/* Address: 0x10062cc10 | FUN_10062cc10 */

void FUN_10062cc10(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b190);
  return;
}



/* Address: 0x10062cc1c | FUN_10062cc1c */

void FUN_10062cc1c(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b234);
  return;
}



/* Address: 0x10062cc28 | FUN_10062cc28 */

void FUN_10062cc28(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b2d8);
  return;
}



/* Address: 0x10062cc34 | FUN_10062cc34 */

void FUN_10062cc34(undefined8 param_1,long param_2)

{
  long lVar1;
  
  if ((*(long *)(param_2 + 0x10) != 0) &&
     (lVar1 = *(long *)(*(long *)(param_2 + 0x10) + 0x10), lVar1 != 0)) {
    _swift_retain(lVar1);
    FUN_10062b37c(param_1);
    _swift_release(lVar1);
    return;
  }
  return;
}



/* Address: 0x10062cc80 | FUN_10062cc80 */

void FUN_10062cc80(undefined8 param_1)

{
  FUN_100629a14(param_1,FUN_10062b42c);
  return;
}


