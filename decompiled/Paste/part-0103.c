/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001343b8 | FUN_1001343b8 */

void FUN_1001343b8(void)

{
  long unaff_x20;
  
  FUN_10012e144(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1001343c4 | FUN_1001343c4 */

void FUN_1001343c4(long param_1,long param_2)

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



/* Address: 0x1001343d8 | FUN_1001343d8 */

void FUN_1001343d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001343e0 | thunk_FUN_10013896c */

void thunk_FUN_10013896c(void)

{
  FUN_10013896c();
  return;
}



/* Address: 0x1001343e4 | thunk_FUN_10013897c */

void thunk_FUN_10013897c(void)

{
  FUN_10013897c();
  return;
}



/* Address: 0x1001343e8 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  FUN_1001344b4();
  return;
}



/* Address: 0x1001343ec | FUN_1001343ec */

void FUN_1001343ec(void)

{
  long unaff_x20;
  
  FUN_10012f760(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1001343f4 | FUN_1001343f4 */

void FUN_1001343f4(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x120);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100134404 | FUN_100134404 */

void FUN_100134404(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x120);
  *(undefined8 *)(*param_2 + 0x120) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100134434 | FUN_100134434 */

void FUN_100134434(void)

{
  FUN_10012cef4(0,0);
  return;
}



/* Address: 0x100134440 | FUN_100134440 */

void FUN_100134440(void)

{
  FUN_10012c620();
  return;
}



/* Address: 0x100134448 | FUN_100134448 */

void FUN_100134448(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10013446c | FUN_10013446c */

void FUN_10013446c(void)

{
  FUN_10012c6f0();
  return;
}



/* Address: 0x100134474 | FUN_100134474 */

void FUN_100134474(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1001344a8 | FUN_1001344a8 */

void FUN_1001344a8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10012cbd4(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1001344b4 | FUN_1001344b4 */

void FUN_1001344b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001344e0 | FUN_1001344e0 */

void FUN_1001344e0(void)

{
  long unaff_x20;
  
  FUN_1001348cc(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100134504 | FUN_100134504 */

void FUN_100134504(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_7);
    _swift_release(param_9);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    return;
  }
  return;
}



/* Address: 0x100134560 | FUN_100134560 */

void FUN_100134560(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100134584 | FUN_100134584 */

void FUN_100134584(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    _swift_getWitnessTable(param_4,param_2);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1001345c8 | FUN_1001345c8 */

uint FUN_1001345c8(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10012c258(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1001345e4 | FUN_1001345e4 */

void FUN_1001345e4(long param_1)

{
  FUN_100004594();
  if (*(long *)(param_1 + 0x38) != 0) {
    FUN_100004594(param_1 + 0x20);
    return;
  }
  return;
}



/* Address: 0x10013461c | FUN_10013461c */

long FUN_10013461c(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  lVar1 = *(long *)(param_2 + 0x38);
  if (lVar1 == 0) {
    uVar2 = *(undefined8 *)(param_2 + 0x20);
    uVar4 = *(undefined8 *)(param_2 + 0x38);
    uVar3 = *(undefined8 *)(param_2 + 0x30);
    *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
    *(undefined8 *)(param_1 + 0x20) = uVar2;
    *(undefined8 *)(param_1 + 0x38) = uVar4;
    *(undefined8 *)(param_1 + 0x30) = uVar3;
  }
  else {
    *(long *)(param_1 + 0x38) = lVar1;
    (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
  }
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



/* Address: 0x100134688 | FUN_100134688 */

long FUN_100134688(long param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_10003083c();
  lVar1 = *(long *)(param_2 + 0x38);
  if (*(long *)(param_1 + 0x38) == 0) {
    if (lVar1 != 0) {
      *(long *)(param_1 + 0x38) = lVar1;
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1 + 0x20,param_2 + 0x20);
      goto LAB_1001346ec;
    }
  }
  else {
    if (lVar1 != 0) {
      FUN_10003083c(param_1 + 0x20,param_2 + 0x20);
      goto LAB_1001346ec;
    }
    FUN_100004594(param_1 + 0x20);
  }
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  uVar3 = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x30) = uVar3;
LAB_1001346ec:
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x40);
  return param_1;
}



/* Address: 0x100134704 | FUN_100134704 */

void FUN_100134704(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100134728 | FUN_100134728 */

undefined8 * FUN_100134728(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  if (param_1[7] != 0) {
    FUN_100004594(param_1 + 4);
  }
  uVar1 = param_2[4];
  uVar3 = param_2[7];
  uVar2 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar1;
  param_1[7] = uVar3;
  param_1[6] = uVar2;
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  return param_1;
}



/* Address: 0x100134778 | FUN_100134778 */

undefined1  [16] FUN_100134778(void)

{
  return ZEXT816(0x100eb8888);
}



/* Address: 0x100134788 | thunk_FUN_100134360 */

void thunk_FUN_100134360(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))(*param_1);
  return;
}



/* Address: 0x10013478c | thunk_FUN_100134560 */

void thunk_FUN_100134560(void)

{
  FUN_100134560();
  return;
}



/* Address: 0x100134790 | thunk_FUN_100134560 */

void thunk_FUN_100134560(void)

{
  FUN_100134560();
  return;
}



/* Address: 0x100134794 | thunk_FUN_100134560 */

void thunk_FUN_100134560(void)

{
  FUN_100134560();
  return;
}



/* Address: 0x100134798 | thunk_FUN_100134560 */

void thunk_FUN_100134560(void)

{
  FUN_100134560();
  return;
}



/* Address: 0x10013479c | thunk_FUN_100134560 */

void thunk_FUN_100134560(void)

{
  FUN_100134560();
  return;
}



/* Address: 0x1001347a0 | thunk_FUN_100134324 */

void thunk_FUN_100134324(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10012df20(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1001347a4 | thunk_FUN_1001343c4 */

void thunk_FUN_1001343c4(void)

{
  FUN_1001343c4();
  return;
}



/* Address: 0x1001347a8 | thunk_FUN_1001343c4 */

void thunk_FUN_1001343c4(void)

{
  FUN_1001343c4();
  return;
}



/* Address: 0x1001347ac | thunk_FUN_1001343c4 */

void thunk_FUN_1001343c4(void)

{
  FUN_1001343c4();
  return;
}



/* Address: 0x1001347b0 | thunk_FUN_1001343c4 */

void thunk_FUN_1001343c4(void)

{
  FUN_1001343c4();
  return;
}



/* Address: 0x1001347b4 | thunk_FUN_100134330 */

void thunk_FUN_100134330(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uStack_28;
  
  uStack_28 = param_1;
  (**(code **)(unaff_x20 + 0x10))(&uStack_28);
  return;
}



/* Address: 0x1001347b8 | thunk_FUN_1001343d8 */

void thunk_FUN_1001343d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001347bc | thunk_FUN_1001343d8 */

void thunk_FUN_1001343d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001347c0 | thunk_FUN_1001343d8 */

void thunk_FUN_1001343d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001347c4 | thunk_FUN_1001343d8 */

void thunk_FUN_1001343d8(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001347c8 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  FUN_1001344b4();
  return;
}



/* Address: 0x1001347cc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1001347d0 | FUN_1001347d0 */

void FUN_1001347d0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  ID self;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  puVar4 = &local_80;
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(lVar6 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar3 = puVar5;
    FUN_10010f6e8(puVar5,0);
    FUN_10015386c(&local_80,puVar3 + 0x20,puVar5,lVar6);
    FUN_10000c650(local_80,uStack_78,local_70,uStack_68,local_60);
    if (puVar4 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100134860);
      (*pcVar2)();
    }
  }
  objc_stub::unlock(self);
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x28);
    do {
      pcVar2 = (code *)puVar4[-1];
      uVar1 = *puVar4;
      _swift_retain(uVar1);
      (*pcVar2)();
      _swift_release(uVar1);
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_release(puVar3);
  return;
}



/* Address: 0x1001348c0 | FUN_1001348c0 */

void FUN_1001348c0(undefined8 param_1)

{
  FUN_1001349c8(param_1,FUN_10010f72c);
  return;
}



/* Address: 0x1001348cc | FUN_1001348cc */

void FUN_1001348cc(undefined8 param_1)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  ID self;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  puVar4 = &local_80;
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(lVar6 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar3 = puVar5;
    FUN_10010f8c0(puVar5,0);
    FUN_10015386c(&local_80,puVar3 + 0x20,puVar5,lVar6);
    FUN_10000c650(local_80,uStack_78,local_70,uStack_68,local_60);
    if (puVar4 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100134960);
      (*pcVar2)();
    }
  }
  objc_stub::unlock(self);
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x28);
    do {
      pcVar2 = (code *)puVar4[-1];
      uVar1 = *puVar4;
      local_80 = param_1;
      _swift_retain(uVar1);
      (*pcVar2)(&local_80);
      _swift_release(uVar1);
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_release(puVar3);
  return;
}



/* Address: 0x1001349c8 | FUN_1001349c8 */

void FUN_1001349c8(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  ID self;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined1 auStack_58 [24];
  
  puVar4 = &local_80;
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(lVar6 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar3 = puVar5;
    (*param_2)(puVar5,0);
    FUN_10015386c(&local_80,puVar3 + 0x20,puVar5,lVar6);
    FUN_10000c650(local_80,uStack_78,local_70,uStack_68,local_60);
    if (puVar4 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100134a60);
      (*pcVar2)();
    }
  }
  objc_stub::unlock(self);
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x28);
    do {
      pcVar2 = (code *)puVar4[-1];
      uVar1 = *puVar4;
      local_80 = param_1;
      _swift_retain(uVar1);
      (*pcVar2)(&local_80);
      _swift_release(uVar1);
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_release(puVar3);
  return;
}



/* Address: 0x100134ac8 | FUN_100134ac8 */

void FUN_100134ac8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long unaff_x20;
  undefined *puVar5;
  long lVar6;
  ID self;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 auStack_68 [24];
  
  puVar4 = &local_90;
  self = *(ID *)(unaff_x20 + 0x18);
  objc_stub::lock(self);
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x10);
  puVar5 = *(undefined **)(lVar6 + 0x10);
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (puVar5 != (undefined *)0x0) {
    _swift_bridgeObjectRetain(lVar6);
    puVar3 = puVar5;
    FUN_10010f8fc(puVar5,0);
    FUN_10015386c(&local_90,puVar3 + 0x20,puVar5,lVar6);
    FUN_10000c650(local_90,uStack_88,local_80,uStack_78,local_70);
    if (puVar4 != (undefined8 *)puVar5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100134b64);
      (*pcVar2)();
    }
  }
  objc_stub::unlock(self);
  lVar6 = *(long *)(puVar3 + 0x10);
  if (lVar6 != 0) {
    puVar4 = (undefined8 *)(puVar3 + 0x28);
    do {
      pcVar2 = (code *)puVar4[-1];
      uVar1 = *puVar4;
      local_90 = param_1;
      uStack_88 = param_2;
      _swift_retain(uVar1);
      (*pcVar2)(&local_90);
      _swift_release(uVar1);
      puVar4 = puVar4 + 2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_release(puVar3);
  return;
}



/* Address: 0x100134bd0 | FUN_100134bd0 */

void FUN_100134bd0(undefined8 param_1)

{
  FUN_1001349c8(param_1,FUN_10010f910);
  return;
}



/* Address: 0x100134bdc | FUN_100134bdc */

void FUN_100134bdc(undefined8 param_1)

{
  FUN_1001349c8(param_1,FUN_10010f924);
  return;
}



/* Address: 0x100134be8 | FUN_100134be8 */

void FUN_100134be8(undefined *param_1,_StringGuts param_2,char *param_3,void *param_4,long param_5,
                  undefined8 param_6)

{
  _CocoaArrayWrapper _Var1;
  code *pcVar2;
  char *pcVar3;
  char *pcVar4;
  void *pvVar5;
  long unaff_x20;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String separator;
  
  pcVar3 = param_3;
  pvVar5 = param_4;
  Swift::_StringGuts::grow(0x26,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((ulong)param_1 >> 0x3e != 0) {
    _Var1.unknown = (undefined *)((ulong)param_1 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_1) {
      _Var1.unknown = param_1;
    }
    Swift::_CocoaArrayWrapper::get_endIndex(_Var1);
  }
  SVar6 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = pvVar5;
  SVar9.str = pcVar3;
  Swift::String::append(SVar6,SVar9);
  _swift_bridgeObjectRelease(SVar6.bridgeObject);
  SVar6.bridgeObject = (void *)0x8000000100d93640;
  SVar6.str = (char *)0xd000000000000013;
  SVar10.bridgeObject = pvVar5;
  SVar10.str = pcVar3;
  Swift::String::append(SVar6,SVar10);
  if (DAT_101057340 == '\x01') {
    pcVar3 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar4 = (char *)0x7;
    _swift_allocObject();
    pcVar3[0x18] = '\x02';
    pcVar3[0x19] = '\0';
    pcVar3[0x1a] = '\0';
    pcVar3[0x1b] = '\0';
    pcVar3[0x1c] = '\0';
    pcVar3[0x1d] = '\0';
    pcVar3[0x1e] = '\0';
    pcVar3[0x1f] = '\0';
    pcVar3[0x10] = '\x01';
    pcVar3[0x11] = '\0';
    pcVar3[0x12] = '\0';
    pcVar3[0x13] = '\0';
    pcVar3[0x14] = '\0';
    pcVar3[0x15] = '\0';
    pcVar3[0x16] = '\0';
    pcVar3[0x17] = '\0';
    SVar7.bridgeObject = (void *)0x8000000100d93620;
    SVar7.str = (char *)0xd000000000000011;
    SVar11.bridgeObject = pvVar5;
    SVar11.str = pcVar4;
    Swift::String::append(SVar7,SVar11);
    *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    pcVar3[0x20] = '[';
    pcVar3[0x21] = 'P';
    pcVar3[0x22] = 'o';
    pcVar3[0x23] = 's';
    pcVar3[0x24] = 't';
    pcVar3[0x25] = 'H';
    pcVar3[0x26] = 'o';
    pcVar3[0x27] = 'g';
    pcVar3[0x28] = ']';
    pcVar3[0x29] = ' ';
    pcVar3[0x2a] = '\0';
    pcVar3[0x2b] = '\0';
    pcVar3[0x2c] = '\0';
    pcVar3[0x2d] = '\0';
    pcVar3[0x2e] = '\0';
    pcVar3[0x2f] = -0x16;
    SVar8.bridgeObject = (void *)0x20;
    SVar8.str = pcVar3;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar8,separator);
    _swift_release(pcVar3);
  }
  _swift_bridgeObjectRelease(0x8000000100d93620);
  pcVar2 = *(code **)(unaff_x20 + 200);
  _swift_allocObject(param_4,0x18,7);
  _swift_weakInit((long)param_4 + 0x10);
  _swift_allocObject(param_5,0x30,7);
  *(void **)(param_5 + 0x10) = param_4;
  *(undefined **)(param_5 + 0x18) = param_1;
  *(undefined **)(param_5 + 0x20) = param_2.unknown;
  *(char **)(param_5 + 0x28) = param_3;
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain(param_3);
  (*pcVar2)(param_1,param_6,param_5);
  _swift_release(param_4);
  _swift_release(param_5);
  return;
}



/* Address: 0x100134e3c | FUN_100134e3c */

void FUN_100134e3c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    FUN_100154774(*param_1,*(undefined1 *)(param_1 + 1),param_1[3],*(undefined1 *)(param_1 + 4),
                  param_3,param_4,param_5);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100134ed0 | FUN_100134ed0 */

void FUN_100134ed0(char *param_1,void *param_2,char *param_3,void *param_4)

{
  long lVar1;
  char *pcVar2;
  void *pvVar3;
  undefined *puVar4;
  char *pcVar5;
  Date DVar6;
  _StringGuts _Var7;
  char *pcVar8;
  long extraout_x8;
  long unaff_x20;
  ID self;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String separator;
  undefined1 auStack_60 [8];
  char *local_58;
  void *local_50;
  
  puVar4 = &DAT_100faf508;
  _Var7.unknown = &DAT_100c2e2e0;
  FUN_1000f7830();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_58 = (char *)0x0;
  local_50 = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x29,_Var7);
  _swift_bridgeObjectRelease(local_50);
  local_58 = (char *)0x1000000000000027;
  local_50 = (void *)0x8000000100d93760;
  SVar9.bridgeObject = param_2;
  SVar9.str = param_1;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  pvVar3 = local_50;
  pcVar2 = local_58;
  if (DAT_101057340 == '\x01') {
    pcVar5 = &DAT_100fae660;
    FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
    pcVar8 = (char *)0x7;
    _swift_allocObject();
    pcVar5[0x18] = '\x02';
    pcVar5[0x19] = '\0';
    pcVar5[0x1a] = '\0';
    pcVar5[0x1b] = '\0';
    pcVar5[0x1c] = '\0';
    pcVar5[0x1d] = '\0';
    pcVar5[0x1e] = '\0';
    pcVar5[0x1f] = '\0';
    pcVar5[0x10] = '\x01';
    pcVar5[0x11] = '\0';
    pcVar5[0x12] = '\0';
    pcVar5[0x13] = '\0';
    pcVar5[0x14] = '\0';
    pcVar5[0x15] = '\0';
    pcVar5[0x16] = '\0';
    pcVar5[0x17] = '\0';
    local_58 = (char *)0x676f4874736f505b;
    local_50 = (void *)0xea0000000000205d;
    SVar10.bridgeObject = pvVar3;
    SVar10.str = pcVar2;
    SVar13.bridgeObject = param_4;
    SVar13.str = pcVar8;
    Swift::String::append(SVar10,SVar13);
    *(undefined **)(pcVar5 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
    *(char **)(pcVar5 + 0x20) = local_58;
    *(void **)(pcVar5 + 0x28) = local_50;
    SVar11.bridgeObject = (void *)0x20;
    SVar11.str = pcVar5;
    separator.bridgeObject = (void *)0xa;
    separator.str = (char *)0xe100000000000000;
    Swift::_print(SVar11,separator);
    _swift_release(pcVar5);
  }
  _swift_bridgeObjectRelease(pvVar3);
  FUN_1001723c8(*(long *)(unaff_x20 + DAT_101057300) + _TtC7PostHog22PostHogFileBackedQueue::queue);
  FUN_100126b0c(PTR___swiftEmptyArrayStorage_100eae0d8);
  self = *(ID *)(unaff_x20 + 0xf8);
  objc_stub::lock(self);
  *(undefined8 *)(unaff_x20 + DAT_100fb0300) = 0;
  DVar6 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar6.unknown + -8) + 0x38))(auStack_60 + -extraout_x8,1,1,DVar6.unknown);
  lVar1 = DAT_100fb02f8;
  _swift_beginAccess(unaff_x20 + DAT_100fb02f8,&local_58,0x21,0);
  FUN_100155a94(auStack_60 + -extraout_x8,unaff_x20 + lVar1);
  _swift_endAccess(&local_58);
  objc_stub::unlock(self);
  return;
}



/* Address: 0x1001350dc | FUN_1001350dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x0001001352a0) */
/* WARNING: Removing unreachable block (ram,0x000100135324) */
/* WARNING: Removing unreachable block (ram,0x000100135554) */
/* WARNING: Removing unreachable block (ram,0x000100135568) */

void FUN_1001350dc(ulong param_1,ulong param_2)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  OS_dispatch_queue *pOVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined *puStack_a8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  if ((param_1 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + DAT_100fb0308);
    if (lVar9 == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0310);
      *(undefined8 *)(unaff_x20 + DAT_100fb0310) = 0;
      _swift_release(uVar7);
      pcVar8 = (code *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      puVar2 = &DAT_100eb8a08;
      _swift_allocObject(&DAT_100eb8a08,0x18,7);
      _swift_weakInit(puVar2 + 0x10);
      _swift_retain(uVar7);
      pcVar8 = FUN_100155db0;
      FUN_1000fa32c(FUN_100155db0,puVar2);
      _swift_release(uVar7);
      _swift_release(puVar2);
      uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0310);
      *(code **)(unaff_x20 + DAT_100fb0310) = pcVar8;
      _swift_release(uVar7);
      uVar7 = *(undefined8 *)(lVar9 + 0x18);
      puVar2 = &DAT_100eb8a08;
      _swift_allocObject(&DAT_100eb8a08,0x18);
      _swift_weakInit(puVar2 + 0x10);
      _swift_retain(uVar7);
      pcVar8 = FUN_100155d98;
      FUN_1000fa32c();
      _swift_release(uVar7);
      _swift_release(puVar2);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0318);
    *(code **)(unaff_x20 + DAT_100fb0318) = pcVar8;
    _swift_release(uVar7);
    if (lVar9 != 0) {
      FUN_100172c94();
    }
  }
  if ((param_2 & 1) == 0) {
    pOVar3 = (OS_dispatch_queue *)0x0;
    FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    puVar2 = &DAT_100eb8a08;
    _swift_allocObject(&DAT_100eb8a08,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    local_70 = FUN_100155d68;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100eb8ca0;
    local_68 = puVar2;
    aBlock = __Block_copy(&local_90);
    DVar4.unknown = local_68;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar4);
    local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar2 = &DAT_100fafdf8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar6 = &DAT_100fafe00;
    FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
    Swift::SetAlgebra::_init(puVar10,&local_90,puVar2,puVar6,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(puVar10,DVar1.unknown);
    (**(code **)(local_b0 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),puStack_a8);
  }
  return;
}



/* Address: 0x10013556c | FUN_10013556c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100135730) */
/* WARNING: Removing unreachable block (ram,0x0001001357b4) */
/* WARNING: Removing unreachable block (ram,0x0001001359e4) */
/* WARNING: Removing unreachable block (ram,0x0001001359f8) */

void FUN_10013556c(ulong param_1,ulong param_2)

{
  DispatchWorkItemFlags DVar1;
  undefined *puVar2;
  OS_dispatch_queue *pOVar3;
  void *aBlock;
  DispatchQoS DVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined1 auStack_c0 [16];
  long local_b0;
  undefined *puStack_a8;
  undefined *local_90;
  undefined8 local_88;
  code *local_80;
  undefined *puStack_78;
  code *local_70;
  undefined *local_68;
  
  DVar1 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar11 = *(long *)(DVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar10 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puStack_a8 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_b0 = *(long *)(puStack_a8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_b0 + 0x40));
  if ((param_1 & 1) == 0) {
    lVar9 = *(long *)(unaff_x20 + DAT_100fb0308);
    if (lVar9 == 0) {
      uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0310);
      *(undefined8 *)(unaff_x20 + DAT_100fb0310) = 0;
      _swift_release(uVar7);
      pcVar8 = (code *)0x0;
    }
    else {
      uVar7 = *(undefined8 *)(lVar9 + 0x10);
      puVar2 = &DAT_100eb8ad0;
      _swift_allocObject(&DAT_100eb8ad0,0x18,7);
      _swift_weakInit(puVar2 + 0x10);
      _swift_retain(uVar7);
      pcVar8 = FUN_100155d54;
      FUN_1000fa32c(FUN_100155d54,puVar2);
      _swift_release(uVar7);
      _swift_release(puVar2);
      uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0310);
      *(code **)(unaff_x20 + DAT_100fb0310) = pcVar8;
      _swift_release(uVar7);
      uVar7 = *(undefined8 *)(lVar9 + 0x18);
      puVar2 = &DAT_100eb8ad0;
      _swift_allocObject(&DAT_100eb8ad0,0x18);
      _swift_weakInit(puVar2 + 0x10);
      _swift_retain(uVar7);
      pcVar8 = thunk_FUN_100155d98;
      FUN_1000fa32c();
      _swift_release(uVar7);
      _swift_release(puVar2);
    }
    uVar7 = *(undefined8 *)(unaff_x20 + DAT_100fb0318);
    *(code **)(unaff_x20 + DAT_100fb0318) = pcVar8;
    _swift_release(uVar7);
    if (lVar9 != 0) {
      FUN_100172c94();
    }
  }
  if ((param_2 & 1) == 0) {
    pOVar3 = (OS_dispatch_queue *)0x0;
    FUN_10000ec2c(0,&DAT_100fae2e8,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
    puVar2 = &DAT_100eb8ad0;
    _swift_allocObject(&DAT_100eb8ad0,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    local_70 = FUN_100155d24;
    local_90 = PTR___NSConcreteStackBlock_100ea82a0;
    local_88 = 0x42000000;
    local_80 = FUN_100030410;
    puStack_78 = &DAT_100eb8c50;
    local_68 = puVar2;
    aBlock = __Block_copy(&local_90);
    DVar4.unknown = local_68;
    _swift_release();
    Dispatch::DispatchQoS::get_unspecified(DVar4);
    local_90 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = &DAT_100fafdf0;
    FUN_100003a00(&DAT_100fafdf0,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar2 = &DAT_100fafdf8;
    FUN_1000f7830(&DAT_100fafdf8,&DAT_100c2e830);
    puVar6 = &DAT_100fafe00;
    FUN_100155c48(&DAT_100fafe00,&DAT_100fafdf8,&DAT_100c2e830);
    Swift::SetAlgebra::_init(puVar10,&local_90,puVar2,puVar6,DVar1.unknown,puVar5);
    (extension_Dispatch)::__C::OS_dispatch_queue::_async
              ((DispatchQoS)0x0,
               (DispatchWorkItemFlags)(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0)));
    __Block_release(aBlock);
    (**(code **)(lVar11 + 8))(puVar10,DVar1.unknown);
    (**(code **)(local_b0 + 8))(puVar10 + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0),puStack_a8);
  }
  return;
}



/* Address: 0x1001359fc | FUN_1001359fc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100135abc) */

void FUN_1001359fc(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  IVar3 = *(ID *)(param_2 + 0xf8);
  objc_stub::lock(IVar3);
  FUN_100135d34(param_2,param_1,FUN_100126914);
  objc_stub::unlock(IVar3);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x54) == '\x01') {
    _swift_unownedRetainStrong(param_1);
    _swift_unownedRetain();
    _swift_unownedRetain();
    _swift_release();
    (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
    _swift_unownedRelease(param_1);
    uVar4 = param_1;
    _swift_unownedRelease();
    if (*(char *)(param_1 + 0x54) == '\x01') goto LAB_100135b7c;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = uVar1 >> 4 & 1;
    if ((uVar1 & 0x28) == 0) {
      uVar2 = 1;
    }
    if ((((uVar1 >> 2 & 1) == 0) || (uVar2 == 0)) && (FUN_100137c74(), (uVar4 & 1) != 0)) {
      IVar3 = *(ID *)(param_2 + DAT_100fb0358);
      objc_stub::lock(IVar3);
      uVar5 = *(undefined8 *)(param_2 + DAT_100fb0350);
      objc_stub::unlock(IVar3);
      _swift_retain(param_2);
      FUN_1001370a8(uVar5,thunk_FUN_100153aec,param_2,&DAT_100eb8a08,&DAT_100eb8a30,FUN_100155b0c,
                    &DAT_100eb8a48);
      _swift_release(param_2);
    }
  }
LAB_100135b7c:
  _swift_release(param_2);
  return;
}



/* Address: 0x100135b98 | FUN_100135b98 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100135c58) */

void FUN_100135b98(ulong param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  ID IVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 == 0) {
    return;
  }
  IVar3 = *(ID *)(param_2 + 0xf8);
  objc_stub::lock(IVar3);
  FUN_100135d34(param_2,param_1,FUN_100126914);
  objc_stub::unlock(IVar3);
  uVar4 = 0;
  if (*(char *)(param_1 + 0x54) == '\x01') {
    _swift_unownedRetainStrong(param_1);
    _swift_unownedRetain();
    _swift_unownedRetain();
    _swift_release();
    (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
    _swift_unownedRelease(param_1);
    uVar4 = param_1;
    _swift_unownedRelease();
    if (*(char *)(param_1 + 0x54) == '\x01') goto LAB_100135d18;
  }
  uVar1 = *(uint *)(param_1 + 0x50);
  if ((uVar1 >> 1 & 1) != 0) {
    uVar2 = uVar1 >> 4 & 1;
    if ((uVar1 & 0x28) == 0) {
      uVar2 = 1;
    }
    if ((((uVar1 >> 2 & 1) == 0) || (uVar2 == 0)) && (FUN_100137c74(), (uVar4 & 1) != 0)) {
      IVar3 = *(ID *)(param_2 + DAT_100fb0358);
      objc_stub::lock(IVar3);
      uVar5 = *(undefined8 *)(param_2 + DAT_100fb0350);
      objc_stub::unlock(IVar3);
      _swift_retain(param_2);
      FUN_1001370a8(uVar5,thunk_FUN_100153abc,param_2,&DAT_100eb8ad0,&DAT_100eb8af8,FUN_100155bb0,
                    &DAT_100eb8b10);
      _swift_release(param_2);
    }
  }
LAB_100135d18:
  _swift_release(param_2);
  return;
}



/* Address: 0x100135d34 | FUN_100135d34 */

void FUN_100135d34(long param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  char *pcVar3;
  undefined1 uVar4;
  long lVar5;
  long unaff_x21;
  String SVar6;
  String separator;
  undefined1 auStack_58 [24];
  
  lVar2 = PostHogConfig::dataMode;
  lVar5 = *(long *)(param_1 + 0x10);
  _swift_beginAccess(lVar5 + PostHogConfig::dataMode,auStack_58,0,0);
  if (*(int *)(lVar5 + lVar2) == 0) {
    if (*(char *)(param_2 + 0x54) == '\x01') {
      _swift_unownedRetainStrong(param_2);
      _swift_unownedRetain();
      _swift_unownedRetain();
      _swift_release();
      (extension_Dispatch)::__C::OS_dispatch_queue::_sync();
      if (unaff_x21 != 0) {
        _swift_errorRelease();
      }
      _swift_unownedRelease(param_2);
      _swift_unownedRelease(param_2);
    }
    uVar1 = *(uint *)(param_2 + 0x50);
    if ((*(char *)(param_2 + 0x54) == '\x01' || (uVar1 & 2) == 0) ||
       (((uVar1 & 0x10) != 0 || (uVar1 & 0x28) == 0) && (uVar1 & 4) != 0)) {
      if ((DAT_101057340 & 1) != 0) {
        pcVar3 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar3[0x18] = '\x02';
        pcVar3[0x19] = '\0';
        pcVar3[0x1a] = '\0';
        pcVar3[0x1b] = '\0';
        pcVar3[0x1c] = '\0';
        pcVar3[0x1d] = '\0';
        pcVar3[0x1e] = '\0';
        pcVar3[0x1f] = '\0';
        pcVar3[0x10] = '\x01';
        pcVar3[0x11] = '\0';
        pcVar3[0x12] = '\0';
        pcVar3[0x13] = '\0';
        pcVar3[0x14] = '\0';
        pcVar3[0x15] = '\0';
        pcVar3[0x16] = '\0';
        pcVar3[0x17] = '\0';
        *(undefined **)(pcVar3 + 0x38) = PTR___type_metadata_for_Swift_String_100eac208;
        pcVar3[0x20] = '6';
        pcVar3[0x21] = '\0';
        pcVar3[0x22] = '\0';
        pcVar3[0x23] = '\0';
        pcVar3[0x24] = '\0';
        pcVar3[0x25] = '\0';
        pcVar3[0x26] = '\0';
        pcVar3[0x27] = -0x30;
        pcVar3[0x28] = -0x70;
        pcVar3[0x29] = '9';
        pcVar3[0x2a] = -0x27;
        pcVar3[0x2b] = '\0';
        pcVar3[0x2c] = '\x01';
        pcVar3[0x2d] = '\0';
        pcVar3[0x2e] = '\0';
        pcVar3[0x2f] = -0x80;
        SVar6.bridgeObject = (void *)0x20;
        SVar6.str = pcVar3;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar6,separator);
        _swift_release(pcVar3);
      }
      uVar4 = 1;
      goto LAB_100135eb0;
    }
  }
  uVar4 = 0;
LAB_100135eb0:
  *(undefined1 *)(param_1 + 0x100) = uVar4;
  return;
}



/* Address: 0x100135ed0 | FUN_100135ed0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100135ed0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ID self;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    self = *(ID *)(param_1 + DAT_100fb0330);
    objc_stub::lock(self);
    FUN_100135f80(param_1,param_2,param_3,param_4);
    objc_stub::unlock(self);
    _swift_release(param_1);
  }
  return;
}



/* Address: 0x100135f80 | FUN_100135f80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_100135f80(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  void *aBlock;
  ID IVar1;
  undefined8 uVar2;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  long local_58;
  
  if ((*(byte *)(param_1 + DAT_100fb0340) & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0xf0);
    _swift_allocObject(param_2,0x18,7);
    _swift_weakInit(param_2 + 0x10,param_1);
    local_80 = PTR___NSConcreteStackBlock_100ea82a0;
    local_78 = 0x42000000;
    local_70 = FUN_100136224;
    uStack_68 = param_4;
    local_60 = param_3;
    local_58 = param_2;
    aBlock = __Block_copy(&local_80);
    _swift_release(local_58);
    IVar1 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                      ((ID)&_OBJC_CLASS___NSTimer,uVar2,1,aBlock);
    __Block_release(aBlock);
    *(ID *)(param_1 + DAT_100fb0338) = IVar1;
    param_1 = 0;
  }
  return param_1;
}



/* Address: 0x10013608c | FUN_10013608c */

void FUN_10013608c(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ID self;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  uVar1 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_100137c74();
    if ((uVar2 & 1) != 0) {
      self = *(ID *)(uVar1 + DAT_100fb0358);
      objc_stub::lock(self);
      uVar3 = *(undefined8 *)(uVar1 + DAT_100fb0350);
      objc_stub::unlock(self);
      _swift_retain(uVar1);
      FUN_1001370a8(uVar3,thunk_FUN_100153aec,uVar1,&DAT_100eb8a08,&DAT_100eb8a30,FUN_100155b0c,
                    &DAT_100eb8a48);
      _swift_release(uVar1);
    }
    _swift_release(uVar1);
  }
  return;
}



/* Address: 0x100136158 | FUN_100136158 */

void FUN_100136158(undefined8 param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  ID self;
  undefined8 uVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_48,0,0);
  uVar1 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (uVar1 != 0) {
    uVar2 = uVar1;
    FUN_100137c74();
    if ((uVar2 & 1) != 0) {
      self = *(ID *)(uVar1 + DAT_100fb0358);
      objc_stub::lock(self);
      uVar3 = *(undefined8 *)(uVar1 + DAT_100fb0350);
      objc_stub::unlock(self);
      _swift_retain(uVar1);
      FUN_1001370a8(uVar3,thunk_FUN_100153abc,uVar1,&DAT_100eb8ad0,&DAT_100eb8af8,FUN_100155bb0,
                    &DAT_100eb8b10);
      _swift_release(uVar1);
    }
    _swift_release(uVar1);
  }
  return;
}


