/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a732b0 | FUN_100a732b0 */

void FUN_100a732b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x22;
  long *plVar7;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x119);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x118);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar5 = &DAT_100f2d8d8;
  _swift_allocObject(&DAT_100f2d8d8,0x29,7);
  *(undefined **)(unaff_x22 + 0x100) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  puVar5[0x18] = uVar3;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  puVar5[0x28] = uVar4;
  plVar7 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x108) = plVar7;
  puVar6 = &DAT_100ff6dc0;
  FUN_1000f7830(&DAT_100ff6dc0,&DAT_100c91ce8);
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a7338c;
  FUN_100912dec(unaff_x22 + 0x10,FUN_100a7c36c,puVar5,puVar6);
  return;
}



/* Address: 0x100a7338c | FUN_100a7338c */

void FUN_100a7338c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x110) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x108));
  _swift_release(*(undefined8 *)(lVar2 + 0x100));
  if (unaff_x20 == 0) {
    pcVar1 = thunk_FUN_100a6d7e0;
  }
  else {
    pcVar1 = thunk_FUN_100a6d830;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a733f8 | FUN_100a733f8 */

void FUN_100a733f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = *unaff_x20;
  *(undefined1 *)(unaff_x22 + 0x40) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a73420,0,0);
  return;
}



/* Address: 0x100a73420 | FUN_100a73420 */

void FUN_100a73420(void)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  long *plVar5;
  undefined8 uVar6;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar2 = &DAT_100f2d8b0;
  _swift_allocObject(&DAT_100f2d8b0,0x30,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar3;
  puVar2[0x18] = uVar1;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(unaff_x22 + 0x18);
  *(undefined8 *)(puVar2 + 0x20) = uVar6;
  plVar5 = (long *)0xa0;
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_10092a480;
  FUN_100912dec();
  return;
}



/* Address: 0x100a734f8 | FUN_100a734f8 */

void FUN_100a734f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x40) = *(undefined1 *)(unaff_x20 + 1);
  _swift_task_switch(FUN_100a7351c,0,0);
  return;
}



/* Address: 0x100a7351c | FUN_100a7351c */

void FUN_100a7351c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long unaff_x22;
  long *plVar5;
  
  uVar3 = *(undefined1 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar4 = &DAT_100f2d888;
  _swift_allocObject(&DAT_100f2d888,0x28,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar2;
  puVar4[0x18] = uVar3;
  *(undefined8 *)(puVar4 + 0x20) = uVar1;
  plVar5 = (long *)0xa0;
  _swift_retain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100a6cfa4;
  FUN_100912dec(plVar5,unaff_x22 + 0x10,FUN_100a7c394,puVar4,&DAT_100ee4790);
  return;
}



/* Address: 0x100a735d8 | FUN_100a735d8 */

void FUN_100a735d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x420;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a6da64(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a73694 | FUN_100a73694 */

void FUN_100a73694(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  plVar2 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100838ee4;
  FUN_100a6e548(param_1,param_2,param_3,param_4,uVar3,uVar1);
  return;
}



/* Address: 0x100a73720 | FUN_100a73720 */

void FUN_100a73720(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
  FUN_100a70828(param_1,param_2,uVar3,uVar1);
  return;
}



/* Address: 0x100a73794 | FUN_100a73794 */

void FUN_100a73794(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  long *plVar2;
  undefined8 *unaff_x20;
  long unaff_x22;
  undefined8 uVar3;
  
  uVar3 = *unaff_x20;
  uVar1 = *(undefined1 *)(unaff_x20 + 1);
  plVar2 = (long *)0x220;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005c804c;
  FUN_100a7146c(param_1,param_2,uVar3,uVar1);
  return;
}



/* Address: 0x100a73808 | thunk_FUN_1006556a0 */

void thunk_FUN_1006556a0(void)

{
  FUN_1006556a0();
  return;
}



/* Address: 0x100a7380c | thunk_FUN_10065575c */

void thunk_FUN_10065575c(void)

{
  FUN_10065575c();
  return;
}



/* Address: 0x100a73810 | FUN_100a73810 */

undefined1  [16] FUN_100a73810(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  
  puVar1 = param_1;
  FUN_10065575c();
  *param_1 = puVar1;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_100a73840;
  return auVar2;
}



/* Address: 0x100a73840 | FUN_100a73840 */

void FUN_100a73840(undefined8 *param_1)

{
  FUN_1006556a0(*param_1);
  return;
}



/* Address: 0x100a73848 | FUN_100a73848 */

void FUN_100a73848(ulong param_1)

{
  code *pcVar1;
  String SVar2;
  
  FUN_1006558c4();
  if ((param_1 & 1) != 0) {
    FUN_10093a534();
    DAT_100ff6da0 = param_1;
    DAT_100ff6da8 = 0;
    return;
  }
  SVar2.bridgeObject = (void *)0x2;
  SVar2.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar2,(StaticString)0xd0000000000000a5,0x8000000100db9290,
             0xdb8a90);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a738c8);
  (*pcVar1)();
}



/* Address: 0x100a738c8 | FUN_100a738c8 */

void FUN_100a738c8(void)

{
  FUN_100a7be80(0x2a);
  return;
}



/* Address: 0x100a738d0 | FUN_100a738d0 */

void FUN_100a738d0(void)

{
  FUN_100a7b618(FUN_100a6c670);
  return;
}



/* Address: 0x100a738ec | FUN_100a738ec */

void FUN_100a738ec(void)

{
  FUN_100a7b4e0(1);
  return;
}



/* Address: 0x100a73904 | FUN_100a73904 */

void FUN_100a73904(void)

{
  FUN_100a7b4e0(2);
  return;
}



/* Address: 0x100a7391c | FUN_100a7391c */

void FUN_100a7391c(void)

{
  FUN_100a7b618(FUN_100a6d010);
  return;
}



/* Address: 0x100a73938 | FUN_100a73938 */

void FUN_100a73938(void)

{
  FUN_100a7b53c();
  return;
}



/* Address: 0x100a7394c | FUN_100a7394c */

void FUN_100a7394c(void)

{
  long unaff_x20;
  
  FUN_100a6d580(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100a7396c | FUN_100a7396c */

void FUN_100a7396c(void)

{
  long unaff_x20;
  
  FUN_100a6d83c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100a73990 | FUN_100a73990 */

void FUN_100a73990(void)

{
  if (DAT_100ff6d98 != -1) {
    _swift_once(&DAT_100ff6d98,FUN_100a73848);
  }
  _swift_retain(DAT_100ff6da0);
  return;
}



/* Address: 0x100a739e8 | FUN_100a739e8 */

void FUN_100a739e8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x50) = param_2;
  *(undefined8 *)(unaff_x22 + 0x58) = param_3;
  *(undefined8 *)(unaff_x22 + 0x48) = param_1;
  _swift_task_switch(FUN_100a73a08,0,0);
  return;
}



/* Address: 0x100a73a08 | FUN_100a73a08 */

void FUN_100a73a08(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar1 = 0;
  FUN_100914120(0);
  FUN_100910ca0(uVar3,uVar1);
  *(undefined8 *)(unaff_x22 + 0x70) = uVar3;
  FUN_100910d44(0x232d5054,&DAT_e400000000000000);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a73aa4;
  FUN_100912dec();
  return;
}



/* Address: 0x100a73aa4 | FUN_100a73aa4 */

void FUN_100a73aa4(void)

{
  code *pcVar1;
  long unaff_x20;
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a73b0c;
  }
  else {
    _swift_errorRelease();
    pcVar1 = thunk_FUN_100a73b0c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a73b0c | FUN_100a73b0c */

void FUN_100a73b0c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x68);
  *(undefined8 *)(unaff_x22 + 0x30) = *(undefined8 *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x58);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x40) = 1;
  puVar2 = &DAT_100f2d6c0;
  _swift_allocObject(&DAT_100f2d6c0,0x19,7);
  *(undefined **)(unaff_x22 + 0x80) = puVar2;
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  puVar2[0x18] = 1;
  plVar3 = (long *)0xe0;
  _swift_retain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100a73bd4;
  FUN_100a92a24(plVar3,*(undefined8 *)(unaff_x22 + 0x48),&DAT_100c91d88,unaff_x22 + 0x10,
                &DAT_100c91d98,puVar2,*(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x100a73bd4 | FUN_100a73bd4 */

void FUN_100a73bd4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x80);
  *(long *)(lVar3 + 0x90) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x88));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1005dd380;
  }
  else {
    pcVar2 = FUN_100a73c40;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100a73c40 | FUN_100a73c40 */

void FUN_100a73c40(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x70));
                    /* WARNING: Could not recover jumptable at 0x000100a73c78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a73c7c | FUN_100a73c7c */

void FUN_100a73c7c(undefined8 param_1,int *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_2;
  plVar2 = (long *)(ulong)(uint)param_2[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100a73d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_2))(plVar2,param_1,param_4,param_5);
  return;
}



/* Address: 0x100a73d04 | FUN_100a73d04 */

void FUN_100a73d04(void)

{
  long *plVar1;
  uint in_w3;
  long unaff_x22;
  
  if ((in_w3 & 1) != 0) {
    plVar1 = (long *)0x70;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x10) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_100a73d74;
    FUN_1009136e4();
    return;
  }
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a73d74 | FUN_100a73d74 */

void FUN_100a73d74(void)

{
  long unaff_x20;
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  if (unaff_x20 != 0) {
    _swift_errorRelease();
  }
                    /* WARNING: Could not recover jumptable at 0x000100a73dc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x100a73dc8 | FUN_100a73dc8 */

void FUN_100a73dc8(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  Hasher HVar3;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  uVar2 = unaff_x20[2];
  Swift::Hasher::init(0);
  if (HVar3.unknown == (undefined *)0x0) {
    HVar3.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1005ac830(auStack_78);
    Swift::Hasher::_combine((ulong)bVar1,HVar3);
    HVar3.unknown = auStack_78;
    FUN_1005ac830(HVar3.unknown,uVar2);
  }
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a73e50 | FUN_100a73e50 */

void FUN_100a73e50(undefined8 param_1,Hasher param_2)

{
  byte bVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  if (HVar2.unknown != (undefined *)0x0) {
    uVar3 = unaff_x20[2];
    bVar1 = *(byte *)(unaff_x20 + 1);
    Swift::Hasher::_combine(1,param_2);
    FUN_1005ac830(param_1);
    Swift::Hasher::_combine((ulong)bVar1,HVar2);
    FUN_1005ac830(param_1,uVar3);
    return;
  }
  Swift::Hasher::_combine(0,param_2);
  return;
}



/* Address: 0x100a73ed4 | FUN_100a73ed4 */

void FUN_100a73ed4(__int64 param_1,Hasher param_2)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  Hasher HVar3;
  undefined1 auStack_78 [72];
  
  HVar3.unknown = (undefined *)*unaff_x20;
  bVar1 = *(byte *)(unaff_x20 + 1);
  uVar2 = unaff_x20[2];
  Swift::Hasher::init(param_1);
  if (HVar3.unknown == (undefined *)0x0) {
    HVar3.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    FUN_1005ac830(auStack_78);
    Swift::Hasher::_combine((ulong)bVar1,HVar3);
    HVar3.unknown = auStack_78;
    FUN_1005ac830(HVar3.unknown,uVar2);
  }
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100a73f58 | FUN_100a73f58 */

ulong FUN_100a73f58(ulong *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  uVar4 = *param_1;
  if (uVar4 == 0) {
    if (*param_2 == 0) {
      return 1;
    }
  }
  else if (*param_2 != 0) {
    lVar1 = param_2[1];
    lVar2 = param_2[2];
    uVar5 = param_1[2];
    uVar3 = param_1[1];
    thunk_FUN_100556d68();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
    if ((((uint)uVar3 ^ (uint)lVar1) & 0xff) != 0) {
      return 0;
    }
    thunk_FUN_100556d68(uVar5,lVar2);
    return uVar5;
  }
  return 0;
}



/* Address: 0x100a73fe0 | FUN_100a73fe0 */

void FUN_100a73fe0(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x440) = param_9;
  *(undefined8 *)(unaff_x22 + 0x438) = param_8;
  *(undefined8 *)(unaff_x22 + 0x430) = param_7;
  *(undefined8 *)(unaff_x22 + 0x428) = param_6;
  *(undefined8 *)(unaff_x22 + 0x420) = param_5;
  *(undefined1 *)(unaff_x22 + 0x309) = param_4;
  *(undefined8 *)(unaff_x22 + 0x418) = param_3;
  *(undefined8 *)(unaff_x22 + 0x410) = param_1;
  *(undefined8 *)(unaff_x22 + 0x448) = *param_2;
  _swift_task_switch(FUN_100a74024,0,0);
  return;
}



/* Address: 0x100a74024 | FUN_100a74024 */

void FUN_100a74024(void)

{
  undefined *puVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar3 = *(long *)(unaff_x22 + 0x448);
  uVar5 = *(undefined8 *)(lVar3 + 0x31);
  uVar4 = *(undefined8 *)(lVar3 + 0x29);
  uVar8 = *(undefined8 *)(lVar3 + 0x10);
  uVar7 = *(undefined8 *)(lVar3 + 0x28);
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x2e8) = *(undefined8 *)(lVar3 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x2e0) = uVar8;
  *(undefined8 *)(unaff_x22 + 0x2f8) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x2f0) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x301) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x2f9) = uVar4;
  puVar1 = &DAT_100f2d9f0;
  _swift_allocObject(&DAT_100f2d9f0,0x39,7);
  *(undefined **)(unaff_x22 + 0x450) = puVar1;
  uVar7 = *(undefined8 *)(lVar3 + 0x18);
  uVar6 = *(undefined8 *)(lVar3 + 0x10);
  uVar5 = *(undefined8 *)(lVar3 + 0x28);
  uVar4 = *(undefined8 *)(lVar3 + 0x20);
  uVar8 = *(undefined8 *)(lVar3 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar3 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar8;
  *(undefined8 *)(puVar1 + 0x18) = uVar7;
  *(undefined8 *)(puVar1 + 0x10) = uVar6;
  *(undefined8 *)(puVar1 + 0x28) = uVar5;
  *(undefined8 *)(puVar1 + 0x20) = uVar4;
  FUN_100a4c06c(unaff_x22 + 0x2e0,unaff_x22 + 0x340);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x458) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a740ec;
  FUN_100912dec(plVar2,unaff_x22 + 0x38,FUN_100a63e40,puVar1,&DAT_100f2d260);
  return;
}



/* Address: 0x100a740ec | FUN_100a740ec */

void FUN_100a740ec(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x460) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x458));
  _swift_release(*(undefined8 *)(lVar2 + 0x450));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a74158;
  }
  else {
    pcVar1 = FUN_100a74298;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74158 | FUN_100a74158 */

void FUN_100a74158(void)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long *plVar6;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x420);
  uVar1 = *(undefined1 *)(unaff_x22 + 0x309);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x418);
  uVar2 = *(undefined2 *)(unaff_x22 + 0xca);
  puVar3 = &DAT_100f2da18;
  _swift_allocObject(&DAT_100f2da18,0x2e,7);
  *(undefined **)(unaff_x22 + 0x468) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar4;
  puVar3[0x18] = uVar1;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  puVar3[0x28] = 0;
  *(undefined2 *)(puVar3 + 0x2a) = uVar2;
  *(undefined2 *)(puVar3 + 0x2c) = 0;
  plVar6 = (long *)0xa0;
  _swift_retain(uVar4);
  _swift_bridgeObjectRetain(uVar5);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x470) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100a7422c;
  FUN_100912dec();
  return;
}



/* Address: 0x100a7422c | FUN_100a7422c */

void FUN_100a7422c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x478) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x470));
  _swift_release(*(undefined8 *)(lVar2 + 0x468));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a742a4;
  }
  else {
    pcVar1 = FUN_100a743e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74298 | FUN_100a74298 */

void FUN_100a74298(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a742a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a742a4 | FUN_100a742a4 */

void FUN_100a742a4(void)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long unaff_x22;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar4 = *(long *)(unaff_x22 + 0x448);
  uVar6 = *(undefined8 *)(lVar4 + 0x31);
  uVar5 = *(undefined8 *)(lVar4 + 0x29);
  uVar9 = *(undefined8 *)(lVar4 + 0x10);
  uVar8 = *(undefined8 *)(lVar4 + 0x28);
  uVar7 = *(undefined8 *)(lVar4 + 0x20);
  *(undefined8 *)(unaff_x22 + 0x318) = *(undefined8 *)(lVar4 + 0x18);
  *(undefined8 *)(unaff_x22 + 0x310) = uVar9;
  *(undefined8 *)(unaff_x22 + 0x328) = uVar8;
  *(undefined8 *)(unaff_x22 + 800) = uVar7;
  *(undefined8 *)(unaff_x22 + 0x331) = uVar6;
  *(undefined8 *)(unaff_x22 + 0x329) = uVar5;
  puVar1 = &DAT_100f2da40;
  _swift_allocObject(&DAT_100f2da40,0x39,7);
  *(undefined **)(unaff_x22 + 0x480) = puVar1;
  uVar8 = *(undefined8 *)(lVar4 + 0x18);
  uVar7 = *(undefined8 *)(lVar4 + 0x10);
  uVar6 = *(undefined8 *)(lVar4 + 0x28);
  uVar5 = *(undefined8 *)(lVar4 + 0x20);
  uVar9 = *(undefined8 *)(lVar4 + 0x29);
  *(undefined8 *)(puVar1 + 0x31) = *(undefined8 *)(lVar4 + 0x31);
  *(undefined8 *)(puVar1 + 0x29) = uVar9;
  *(undefined8 *)(puVar1 + 0x18) = uVar8;
  *(undefined8 *)(puVar1 + 0x10) = uVar7;
  *(undefined8 *)(puVar1 + 0x28) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = uVar5;
  FUN_100a4c06c(unaff_x22 + 0x310,unaff_x22 + 0x370);
  plVar2 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x488) = plVar2;
  puVar3 = &DAT_100ff6cd8;
  FUN_1000f7830(&DAT_100ff6cd8,&DAT_100c911e8);
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100a7437c;
  FUN_100912dec(unaff_x22 + 0x3f0,FUN_100a63eb4,puVar1,puVar3);
  return;
}



/* Address: 0x100a7437c | FUN_100a7437c */

void FUN_100a7437c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x490) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x488));
  _swift_release(*(undefined8 *)(lVar2 + 0x480));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a743f4;
  }
  else {
    pcVar1 = FUN_100a74570;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a743e8 | FUN_100a743e8 */

void FUN_100a743e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100a743f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a743f4 | FUN_100a743f4 */

void FUN_100a743f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  long *plVar7;
  
  lVar2 = *(long *)(unaff_x22 + 0x3f0);
  *(long *)(unaff_x22 + 0x498) = lVar2;
  if (*(long *)(lVar2 + 0x10) != 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x420);
    uVar1 = *(undefined1 *)(unaff_x22 + 0x309);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x418);
    *(long *)(unaff_x22 + 0x120) = lVar2;
    *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x448);
    puVar3 = &DAT_100f2da68;
    _swift_allocObject(&DAT_100f2da68,0x2a,7);
    *(undefined **)(unaff_x22 + 0x4a0) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar5;
    puVar3[0x18] = uVar1;
    *(undefined8 *)(puVar3 + 0x20) = uVar6;
    *(undefined2 *)(puVar3 + 0x28) = 1;
    plVar7 = (long *)0xa0;
    _swift_retain(uVar5);
    _swift_bridgeObjectRetain(uVar6);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x4a8) = plVar7;
    puVar4 = &DAT_100ff6db8;
    FUN_1000f7830(&DAT_100ff6db8,&DAT_100c933a0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a746a8;
    FUN_100912dec(unaff_x22 + 0x408,FUN_100a7c418,puVar3,puVar4);
    return;
  }
  _swift_bridgeObjectRelease();
  uVar5 = *(undefined8 *)(unaff_x22 + 0x448);
  _swift_retain(uVar5);
  uVar6 = 0;
  FUN_100a578f0();
  FUN_100a54424(unaff_x22 + 0x3a0);
  FUN_10026569c(uVar5,uVar6,param_3);
  plVar7 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4d0) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_100a74b70;
  FUN_100a66914();
  return;
}



/* Address: 0x100a74570 | FUN_100a74570 */

void FUN_100a74570(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x490);
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  lVar3 = unaff_x22 + 0x130;
  _swift_dynamicCast(lVar3,(undefined8 *)(unaff_x22 + 0x3f8),puVar2,&DAT_100f2de38,0);
  if ((int)lVar3 != 0) {
    pcVar1 = (char *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)pcVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x148);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x140);
    FUN_100a5008c(pcVar1);
    if (*pcVar1 == '\t') {
      _swift_errorRelease(uVar7);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x448);
      _swift_retain(uVar7);
      uVar6 = 0;
      FUN_100a578f0();
      FUN_100a54424(unaff_x22 + 0x3a0);
      FUN_10026569c(uVar7,uVar6,puVar2);
      plVar4 = (long *)0xa0;
      pcVar5 = FUN_100a66914;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x4d0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100a74b70;
      goto LAB_100a74694;
    }
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
  pcVar5 = *(code **)(unaff_x22 + 8);
LAB_100a74694:
  (*pcVar5)();
  return;
}



/* Address: 0x100a746a8 | FUN_100a746a8 */

void FUN_100a746a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4b0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4a8));
  _swift_release(*(undefined8 *)(lVar2 + 0x4a0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100a74714;
  }
  else {
    pcVar1 = FUN_100a74834;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74714 | FUN_100a74714 */

void FUN_100a74714(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x408);
  *(undefined8 *)(unaff_x22 + 0x4b8) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x400) = uVar2;
  _swift_retain(uVar2);
  *(undefined **)(unaff_x22 + 0x20) = &DAT_100c91f48;
  *(long *)(unaff_x22 + 0x28) = unaff_x22 + 0x110;
  *(long *)(unaff_x22 + 0x30) = unaff_x22 + 0x400;
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4c0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a747c0;
  FUN_100a96ad8(FUN_100a96ad8,&DAT_100c91f58,unaff_x22 + 0x10,&DAT_100c91f68,uVar2);
  return;
}



/* Address: 0x100a747c0 | FUN_100a747c0 */

void FUN_100a747c0(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x4c8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4c0));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x4b8));
    pcVar1 = FUN_100a74974;
  }
  else {
    _swift_release(*(undefined8 *)(lVar2 + 0x4b8));
    pcVar1 = FUN_100a74a28;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74834 | FUN_100a74834 */

void FUN_100a74834(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4b0);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x498));
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  lVar3 = unaff_x22 + 0x130;
  _swift_dynamicCast(lVar3,(undefined8 *)(unaff_x22 + 0x3f8),puVar2,&DAT_100f2de38,0);
  if ((int)lVar3 != 0) {
    pcVar1 = (char *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)pcVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x148);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x140);
    FUN_100a5008c(pcVar1);
    if (*pcVar1 == '\t') {
      _swift_errorRelease(uVar7);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x448);
      _swift_retain(uVar7);
      uVar6 = 0;
      FUN_100a578f0();
      FUN_100a54424(unaff_x22 + 0x3a0);
      FUN_10026569c(uVar7,uVar6,puVar2);
      plVar4 = (long *)0xa0;
      pcVar5 = FUN_100a66914;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x4d0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100a74b70;
      goto LAB_100a74960;
    }
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
  pcVar5 = *(code **)(unaff_x22 + 8);
LAB_100a74960:
  (*pcVar5)();
  return;
}



/* Address: 0x100a74974 | FUN_100a74974 */

void FUN_100a74974(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4b8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x498));
  _swift_release(uVar3);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x448);
  _swift_retain(uVar3);
  uVar2 = 0;
  FUN_100a578f0();
  FUN_100a54424(unaff_x22 + 0x3a0);
  FUN_10026569c(uVar3,uVar2,param_3);
  plVar1 = (long *)0xa0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x4d0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100a74b70;
  FUN_100a66914();
  return;
}



/* Address: 0x100a74a28 | FUN_100a74a28 */

void FUN_100a74a28(void)

{
  char *pcVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x4b8));
  uVar7 = *(undefined8 *)(unaff_x22 + 0x4c8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x498));
  *(undefined8 *)(unaff_x22 + 0x3f8) = uVar7;
  _swift_errorRetain(uVar7);
  puVar2 = &DAT_100ff69f8;
  FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
  lVar3 = unaff_x22 + 0x130;
  _swift_dynamicCast(lVar3,(undefined8 *)(unaff_x22 + 0x3f8),puVar2,&DAT_100f2de38,0);
  if ((int)lVar3 != 0) {
    pcVar1 = (char *)(unaff_x22 + 0x178);
    *(undefined8 *)(unaff_x22 + 0x1a0) = *(undefined8 *)(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x198) = *(undefined8 *)(unaff_x22 + 0x150);
    *(undefined8 *)(unaff_x22 + 0x1b0) = *(undefined8 *)(unaff_x22 + 0x168);
    *(undefined8 *)(unaff_x22 + 0x1a8) = *(undefined8 *)(unaff_x22 + 0x160);
    *(undefined8 *)(unaff_x22 + 0x1b8) = *(undefined8 *)(unaff_x22 + 0x170);
    *(undefined8 *)(unaff_x22 + 0x180) = *(undefined8 *)(unaff_x22 + 0x138);
    *(undefined8 *)pcVar1 = *(undefined8 *)(unaff_x22 + 0x130);
    *(undefined8 *)(unaff_x22 + 400) = *(undefined8 *)(unaff_x22 + 0x148);
    *(undefined8 *)(unaff_x22 + 0x188) = *(undefined8 *)(unaff_x22 + 0x140);
    FUN_100a5008c(pcVar1);
    if (*pcVar1 == '\t') {
      _swift_errorRelease(uVar7);
      _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
      uVar7 = *(undefined8 *)(unaff_x22 + 0x448);
      _swift_retain(uVar7);
      uVar6 = 0;
      FUN_100a578f0();
      FUN_100a54424(unaff_x22 + 0x3a0);
      FUN_10026569c(uVar7,uVar6,puVar2);
      plVar4 = (long *)0xa0;
      pcVar5 = FUN_100a66914;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x4d0) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100a74b70;
      goto LAB_100a74b5c;
    }
  }
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x3f8));
  pcVar5 = *(code **)(unaff_x22 + 8);
LAB_100a74b5c:
  (*pcVar5)();
  return;
}



/* Address: 0x100a74b70 | FUN_100a74b70 */

void FUN_100a74b70(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x4d0));
  if (unaff_x20 == 0) {
    *(undefined **)(lVar2 + 0x4e0) = PTR___swiftEmptyArrayStorage_100eae0d8;
    *(undefined8 *)(lVar2 + 0x4d8) = 0;
    *(undefined8 *)(lVar2 + 0x4e8) = param_1;
    pcVar1 = FUN_100a74c00;
  }
  else {
    *(long *)(lVar2 + 0x500) = unaff_x20;
    *(undefined **)(lVar2 + 0x4f8) = PTR___swiftEmptyArrayStorage_100eae0d8;
    pcVar1 = FUN_100a74e38;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74c00 | FUN_100a74c00 */

void FUN_100a74c00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  undefined1 uVar2;
  long lVar3;
  code *pcVar4;
  long *plVar5;
  ulong uVar6;
  ulong *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  int *piVar12;
  long unaff_x22;
  long lVar13;
  
  lVar3 = *(long *)(unaff_x22 + 0x4e8);
  if (lVar3 == 0) {
    uVar11 = *(ulong *)(unaff_x22 + 0x4e0);
    FUN_100a7b570(unaff_x22 + 0x3a0);
    _swift_isUniquelyReferenced_nonNull_native();
    uVar6 = *(ulong *)(unaff_x22 + 0x4e0);
    if ((uVar11 & 1) == 0) {
      plVar5 = (long *)(uVar6 + 0x10);
      uVar6 = 0;
      FUN_100aa7b80(0,*plVar5 + 1,1);
    }
    uVar11 = *(ulong *)(uVar6 + 0x10);
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar11) {
      uVar6 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100aa7b80(uVar6,uVar11 + 1,1);
    }
    puVar7 = *(ulong **)(unaff_x22 + 0x410);
    *(ulong *)(uVar6 + 0x10) = uVar11 + 1;
    lVar3 = uVar6 + uVar11 * 0x18;
    *(undefined8 *)(lVar3 + 0x28) = 0;
    *(undefined8 *)(lVar3 + 0x30) = 0;
    *(undefined8 *)(lVar3 + 0x20) = 0;
    *puVar7 = uVar6;
    pcVar4 = *(code **)(unaff_x22 + 8);
  }
  else {
    lVar8 = *(long *)(lVar3 + 0x10);
    *(long *)(unaff_x22 + 0x4f0) = lVar8;
    if (lVar8 == 0) {
      *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x4e0);
      _swift_bridgeObjectRelease();
      plVar5 = (long *)0xa0;
      pcVar4 = FUN_100a66914;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x528) = plVar5;
      *plVar5 = unaff_x22;
      plVar5[1] = (long)FUN_100a74e80;
    }
    else {
      lVar8 = *(long *)(unaff_x22 + 0x4d8);
      *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x4e0);
      *(undefined8 *)(unaff_x22 + 0x508) = 0;
      if (*(long *)(lVar3 + 0x10) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a74dfc);
        (*pcVar4)();
      }
      lVar13 = *(long *)(lVar3 + 0x20);
      *(long *)(unaff_x22 + 0x510) = lVar13;
      uVar2 = *(undefined1 *)(lVar3 + 0x28);
      *(undefined1 *)(unaff_x22 + 0x30a) = uVar2;
      _swift_bridgeObjectRetain(lVar13);
      (extension_Swift)::Swift::Task::_checkCancellation();
      *(long *)(unaff_x22 + 0x518) = lVar8;
      if (lVar8 == 0) {
        lVar3 = lVar13;
        FUN_1005b4b8c();
        if (lVar3 != 0) {
          piVar12 = *(int **)(unaff_x22 + 0x428);
          uVar9 = *(undefined8 *)(unaff_x22 + 0x420);
          _swift_bridgeObjectRetain(uVar9);
          FUN_1005b6510(lVar3,param_2,param_3,uVar9);
          *(long *)(unaff_x22 + 0x530) = lVar3;
          iVar1 = *piVar12;
          plVar5 = (long *)(ulong)(uint)piVar12[1];
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0x538) = plVar5;
          *plVar5 = unaff_x22;
          plVar5[1] = (long)FUN_100a74f04;
                    /* WARNING: Could not recover jumptable at 0x000100a74df4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((long)iVar1 + (long)piVar12))(lVar13,uVar2,lVar3);
          return;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100a74e38);
        (*pcVar4)();
      }
      uVar10 = *(undefined8 *)(unaff_x22 + 0x560);
      uVar9 = *(undefined8 *)(unaff_x22 + 0x4e8);
      FUN_100a7b570(unaff_x22 + 0x3a0);
      _swift_bridgeObjectRelease(lVar13);
      _swift_bridgeObjectRelease(uVar9);
      _swift_bridgeObjectRelease(uVar10);
      pcVar4 = *(code **)(unaff_x22 + 8);
    }
  }
  (*pcVar4)();
  return;
}



/* Address: 0x100a74e38 | FUN_100a74e38 */

void FUN_100a74e38(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x4f8);
  FUN_100a7b570(unaff_x22 + 0x3a0);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100a74e7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a74e80 | FUN_100a74e80 */

void FUN_100a74e80(undefined8 param_1)

{
  code *pcVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x528));
  if (unaff_x20 == 0) {
    *(undefined8 *)(lVar2 + 0x4e0) = *(undefined8 *)(lVar2 + 0x520);
    *(undefined8 *)(lVar2 + 0x4d8) = 0;
    *(undefined8 *)(lVar2 + 0x4e8) = param_1;
    pcVar1 = FUN_100a74c00;
  }
  else {
    *(long *)(lVar2 + 0x500) = unaff_x20;
    *(undefined8 *)(lVar2 + 0x4f8) = *(undefined8 *)(lVar2 + 0x520);
    pcVar1 = FUN_100a74e38;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a74f04 | FUN_100a74f04 */

void FUN_100a74f04(undefined1 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  *(undefined1 *)(lVar1 + 0x30b) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x538));
  _swift_task_switch(FUN_100a74f5c,0,0);
  return;
}



/* Address: 0x100a74f5c | FUN_100a74f5c */

void FUN_100a74f5c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte bVar5;
  undefined1 uVar6;
  code *pcVar7;
  char *pcVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  long *plVar11;
  void *pvVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 *puVar15;
  ulong uVar16;
  char *pcVar17;
  void *pvVar18;
  void *pvVar19;
  int *piVar20;
  long lVar21;
  long lVar22;
  long unaff_x22;
  uint uVar23;
  undefined *puVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  code *local_58;
  
  if ((*(byte *)(unaff_x22 + 0x30b) & 1) == 0) {
    uVar13 = *(undefined8 *)(unaff_x22 + 0x510);
    lVar21 = *(long *)(unaff_x22 + 0x508);
    lVar22 = *(long *)(unaff_x22 + 0x4f0);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x530));
    _swift_bridgeObjectRelease(uVar13);
    if (lVar21 + 1 == lVar22) {
      pvVar19 = *(void **)(unaff_x22 + 0x560);
LAB_100a75078:
      *(void **)(unaff_x22 + 0x520) = pvVar19;
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x4e8));
      plVar11 = (long *)0xa0;
      pcVar7 = FUN_100a66914;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x528) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a74e80;
      goto LAB_100a75138;
    }
    lVar21 = *(long *)(unaff_x22 + 0x518);
    uVar16 = *(long *)(unaff_x22 + 0x508) + 1;
  }
  else {
    pvVar18 = *(void **)(unaff_x22 + 0x560);
    pvVar19 = pvVar18;
    if (*(long *)((long)pvVar18 + 0x10) == 0) {
      uVar16 = *(ulong *)(*(long *)(unaff_x22 + 0x4e8) + 0x10);
      _swift_isUniquelyReferenced_nonNull_native();
      pvVar19 = *(void **)(unaff_x22 + 0x560);
      if (((int)pvVar18 == 0) || (*(ulong *)((long)pvVar19 + 0x18) >> 1 <= uVar16)) {
        param_2.unknown = (undefined *)(uVar16 + 1);
        param_3 = (char *)0x0;
        FUN_100aa7b80();
        param_4 = pvVar19;
        pvVar19 = pvVar18;
      }
    }
    *(void **)(unaff_x22 + 0x540) = pvVar19;
    bVar5 = *(byte *)(unaff_x22 + 0x30a);
    uVar23 = (uint)bVar5;
    if (5 < bVar5 || (1 << (ulong)(uVar23 & 0x1f) & 0x31U) == 0) {
      pcVar17 = *(char **)(unaff_x22 + 0x510);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x530));
      *(undefined8 *)(unaff_x22 + 0x3e0) = 0;
      *(undefined8 *)(unaff_x22 + 1000) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x5f,param_2);
      *(undefined8 *)(unaff_x22 + 0x3d0) = *(undefined8 *)(unaff_x22 + 0x3e0);
      *(undefined8 *)(unaff_x22 + 0x3d8) = *(undefined8 *)(unaff_x22 + 1000);
      pvVar19 = (void *)0xec00000027207970;
      SVar29.bridgeObject = (void *)0xec00000027207970;
      SVar29.str = (char *)0x6f632074276e6143;
      SVar34.bridgeObject = param_4;
      SVar34.str = param_3;
      Swift::String::append(SVar29,SVar34);
      pcVar8 = pcVar17;
      _swift_bridgeObjectRetain();
      FUN_1005b32e4();
      SVar30.bridgeObject = pvVar19;
      SVar30.str = pcVar8;
      SVar35.bridgeObject = param_4;
      SVar35.str = param_3;
      Swift::String::append(SVar30,SVar35);
      _swift_bridgeObjectRelease(pvVar19);
      _swift_bridgeObjectRelease(pcVar17);
      SVar31.bridgeObject = (void *)0xeb00000000272065;
      SVar31.str = (char *)0x70797420666f2027;
      SVar36.bridgeObject = param_4;
      SVar36.str = param_3;
      Swift::String::append(SVar31,SVar36);
      pcVar8 = (char *)0x74756f6574696877;
      if (uVar23 != 7) {
        pcVar8 = (char *)0x6e776f6e6b6e75;
      }
      puVar15 = &DAT_e800000000000000;
      if (uVar23 != 7) {
        puVar15 = &DAT_e700000000000000;
      }
      pcVar17 = (char *)0x74656b636f73;
      if (uVar23 != 6) {
        pcVar17 = pcVar8;
      }
      puVar4 = &DAT_e600000000000000;
      if (uVar23 != 6) {
        puVar4 = puVar15;
      }
      puVar15 = (undefined1 *)0xe900000000000072;
      pcVar8 = (char *)0x6574636172616863;
      if (uVar23 != 2) {
        puVar15 = &DAT_e400000000000000;
        pcVar8 = (char *)0x6f666966;
      }
      pcVar2 = (char *)0x6b636f6c62;
      if (bVar5 != 1) {
        pcVar2 = pcVar8;
      }
      puVar3 = &DAT_e500000000000000;
      if (bVar5 != 1) {
        puVar3 = puVar15;
      }
      if (bVar5 < 6) {
        puVar4 = puVar3;
        pcVar17 = pcVar2;
      }
      puVar1 = (undefined8 *)(unaff_x22 + 0x208);
      piVar20 = *(int **)(unaff_x22 + 0x438);
      SVar32.bridgeObject = puVar4;
      SVar32.str = pcVar17;
      SVar37.bridgeObject = param_4;
      SVar37.str = param_3;
      Swift::String::append(SVar32,SVar37);
      _swift_bridgeObjectRelease(puVar4);
      SVar33.bridgeObject = (void *)0x8000000100db8a90;
      SVar33.str = (char *)0xd000000000000044;
      SVar38.bridgeObject = param_4;
      SVar38.str = param_3;
      Swift::String::append(SVar33,SVar38);
      *(undefined1 *)(unaff_x22 + 0x208) = 9;
      *(undefined8 *)(unaff_x22 + 0x210) = *(undefined8 *)(unaff_x22 + 0x3d0);
      *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(unaff_x22 + 0x3d8);
      *(undefined8 *)(unaff_x22 + 0x228) = 0xd000000000000050;
      *(undefined8 *)(unaff_x22 + 0x220) = 0;
      *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100db8c00;
      *(undefined8 *)(unaff_x22 + 0x238) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x248) = 0x437;
      *(undefined1 *)(unaff_x22 + 0x1c0) = 9;
      *(undefined8 *)(unaff_x22 + 0x1c8) = *(undefined8 *)(unaff_x22 + 0x3d0);
      *(undefined8 *)(unaff_x22 + 0x1d0) = *(undefined8 *)(unaff_x22 + 0x3d8);
      *(undefined8 *)(unaff_x22 + 0x1d8) = 0;
      *(undefined8 *)(unaff_x22 + 0x1e0) = 0xd000000000000050;
      *(undefined8 *)(unaff_x22 + 0x1e8) = 0x8000000100db8c00;
      *(undefined8 *)(unaff_x22 + 0x1f0) = 0xd00000000000001f;
      *(undefined8 *)(unaff_x22 + 0x1f8) = 0x8000000100db8a70;
      *(undefined8 *)(unaff_x22 + 0x200) = 0x437;
      FUN_100a50050(puVar1,unaff_x22 + 0x250);
      puVar9 = (undefined8 *)(unaff_x22 + 0x1c0);
      FUN_100a5008c();
      FUN_100a500c0();
      puVar10 = &DAT_100f2de38;
      _swift_allocError(&DAT_100f2de38,puVar9,0,0);
      *(undefined **)(unaff_x22 + 0x548) = puVar10;
      uVar14 = *(undefined8 *)(unaff_x22 + 0x220);
      uVar13 = *(undefined8 *)(unaff_x22 + 0x218);
      uVar26 = *(undefined8 *)(unaff_x22 + 0x230);
      uVar25 = *(undefined8 *)(unaff_x22 + 0x228);
      uVar28 = *(undefined8 *)(unaff_x22 + 0x240);
      uVar27 = *(undefined8 *)(unaff_x22 + 0x238);
      puVar9[8] = *(undefined8 *)(unaff_x22 + 0x248);
      puVar9[5] = uVar26;
      puVar9[4] = uVar25;
      puVar9[7] = uVar28;
      puVar9[6] = uVar27;
      puVar9[3] = uVar14;
      puVar9[2] = uVar13;
      uVar13 = *puVar1;
      puVar9[1] = *(undefined8 *)(unaff_x22 + 0x210);
      *puVar9 = uVar13;
      FUN_100a50050(puVar1,unaff_x22 + 0x298);
      plVar11 = (long *)(ulong)(uint)piVar20[1];
      local_58 = (code *)((long)*piVar20 + (long)piVar20);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x550) = plVar11;
      *plVar11 = unaff_x22;
      plVar11[1] = (long)FUN_100a754d4;
      puVar24 = *(undefined **)(unaff_x22 + 0x510);
      uVar6 = *(undefined1 *)(unaff_x22 + 0x30a);
      goto LAB_100a75468;
    }
    pvVar18 = pvVar19;
    _swift_isUniquelyReferenced_nonNull_native();
    pvVar12 = pvVar19;
    if (((ulong)pvVar18 & 1) == 0) {
      param_2.unknown = (undefined *)(*(long *)((long)pvVar19 + 0x10) + 1);
      pvVar12 = (void *)0x0;
      param_3 = &DAT_00000001;
      FUN_100aa7b80(0,param_2.unknown,1,pvVar19);
    }
    uVar16 = *(ulong *)((long)pvVar12 + 0x10);
    puVar10 = (undefined *)(uVar16 + 1);
    pvVar19 = pvVar12;
    if (*(ulong *)((long)pvVar12 + 0x18) >> 1 <= uVar16) {
      pvVar19 = (void *)(ulong)(1 < *(ulong *)((long)pvVar12 + 0x18));
      param_3 = &DAT_00000001;
      param_2.unknown = puVar10;
      FUN_100aa7b80(pvVar19,puVar10,1,pvVar12);
    }
    uVar13 = *(undefined8 *)(unaff_x22 + 0x530);
    uVar14 = *(undefined8 *)(unaff_x22 + 0x510);
    *(undefined **)((long)pvVar19 + 0x10) = puVar10;
    *(undefined8 *)((long)pvVar19 + uVar16 * 0x18 + 0x20) = uVar14;
    *(ulong *)((long)pvVar19 + uVar16 * 0x18 + 0x28) = (ulong)bVar5;
    *(undefined8 *)((long)pvVar19 + uVar16 * 0x18 + 0x30) = uVar13;
    uVar16 = *(long *)(unaff_x22 + 0x508) + 1;
    if (uVar16 == *(ulong *)(unaff_x22 + 0x4f0)) goto LAB_100a75078;
    lVar21 = *(long *)(unaff_x22 + 0x518);
    *(void **)(unaff_x22 + 0x560) = pvVar19;
  }
  *(ulong *)(unaff_x22 + 0x508) = uVar16;
  if (*(ulong *)(*(long *)(unaff_x22 + 0x4e8) + 0x10) <= uVar16) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a75490);
    (*pcVar7)();
  }
  lVar22 = *(long *)(unaff_x22 + 0x4e8) + uVar16 * 0x10;
  puVar24 = *(undefined **)(lVar22 + 0x20);
  *(undefined **)(unaff_x22 + 0x510) = puVar24;
  uVar6 = *(undefined1 *)(lVar22 + 0x28);
  *(undefined1 *)(unaff_x22 + 0x30a) = uVar6;
  _swift_bridgeObjectRetain(puVar24);
  (extension_Swift)::Swift::Task::_checkCancellation();
  *(long *)(unaff_x22 + 0x518) = lVar21;
  if (lVar21 == 0) {
    puVar10 = puVar24;
    FUN_1005b4b8c();
    if (puVar10 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a754d4);
      (*pcVar7)();
    }
    piVar20 = *(int **)(unaff_x22 + 0x428);
    uVar13 = *(undefined8 *)(unaff_x22 + 0x420);
    _swift_bridgeObjectRetain(uVar13);
    FUN_1005b6510(puVar10,param_2.unknown,param_3,uVar13);
    *(undefined **)(unaff_x22 + 0x530) = puVar10;
    plVar11 = (long *)(ulong)(uint)piVar20[1];
    local_58 = (code *)((long)*piVar20 + (long)piVar20);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x538) = plVar11;
    *plVar11 = unaff_x22;
    plVar11[1] = (long)FUN_100a74f04;
LAB_100a75468:
                    /* WARNING: Could not recover jumptable at 0x000100a75488. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*local_58)(puVar24,uVar6,puVar10);
    return;
  }
  uVar14 = *(undefined8 *)(unaff_x22 + 0x560);
  uVar13 = *(undefined8 *)(unaff_x22 + 0x4e8);
  FUN_100a7b570(unaff_x22 + 0x3a0);
  _swift_bridgeObjectRelease(puVar24);
  _swift_bridgeObjectRelease(uVar13);
  _swift_bridgeObjectRelease(uVar14);
  pcVar7 = *(code **)(unaff_x22 + 8);
LAB_100a75138:
  (*pcVar7)();
  return;
}



/* Address: 0x100a754d4 | FUN_100a754d4 */

void FUN_100a754d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x558) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x550));
  if (unaff_x20 == 0) {
    _swift_errorRelease(*(undefined8 *)(lVar2 + 0x548));
    pcVar1 = FUN_100a75540;
  }
  else {
    pcVar1 = FUN_100a75710;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a75540 | FUN_100a75540 */

void FUN_100a75540(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  undefined1 uVar4;
  code *pcVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  int *piVar9;
  long lVar10;
  long unaff_x22;
  long lVar11;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x510);
  FUN_100a5008c(unaff_x22 + 0x208);
  _swift_bridgeObjectRelease(uVar7);
  uVar1 = *(long *)(unaff_x22 + 0x508) + 1;
  if (uVar1 == *(ulong *)(unaff_x22 + 0x4f0)) {
    *(undefined8 *)(unaff_x22 + 0x520) = *(undefined8 *)(unaff_x22 + 0x540);
    _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x4e8));
    plVar6 = (long *)0xa0;
    pcVar5 = FUN_100a66914;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x528) = plVar6;
    *plVar6 = unaff_x22;
    plVar6[1] = (long)FUN_100a74e80;
  }
  else {
    lVar10 = *(long *)(unaff_x22 + 0x558);
    *(undefined8 *)(unaff_x22 + 0x560) = *(undefined8 *)(unaff_x22 + 0x540);
    *(ulong *)(unaff_x22 + 0x508) = uVar1;
    if (*(ulong *)(*(long *)(unaff_x22 + 0x4e8) + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a7570c);
      (*pcVar5)();
    }
    lVar2 = *(long *)(unaff_x22 + 0x4e8) + uVar1 * 0x10;
    lVar11 = *(long *)(lVar2 + 0x20);
    *(long *)(unaff_x22 + 0x510) = lVar11;
    uVar4 = *(undefined1 *)(lVar2 + 0x28);
    *(undefined1 *)(unaff_x22 + 0x30a) = uVar4;
    _swift_bridgeObjectRetain(lVar11);
    (extension_Swift)::Swift::Task::_checkCancellation();
    *(long *)(unaff_x22 + 0x518) = lVar10;
    if (lVar10 == 0) {
      lVar10 = lVar11;
      FUN_1005b4b8c();
      if (lVar10 != 0) {
        piVar9 = *(int **)(unaff_x22 + 0x428);
        uVar7 = *(undefined8 *)(unaff_x22 + 0x420);
        _swift_bridgeObjectRetain(uVar7);
        FUN_1005b6510(lVar10,param_2,param_3,uVar7);
        *(long *)(unaff_x22 + 0x530) = lVar10;
        iVar3 = *piVar9;
        plVar6 = (long *)(ulong)(uint)piVar9[1];
        _swift_task_alloc();
        *(long **)(unaff_x22 + 0x538) = plVar6;
        *plVar6 = unaff_x22;
        plVar6[1] = (long)FUN_100a74f04;
                    /* WARNING: Could not recover jumptable at 0x000100a75704. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((long)iVar3 + (long)piVar9))(lVar11,uVar4,lVar10);
        return;
      }
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a75710);
      (*pcVar5)();
    }
    uVar8 = *(undefined8 *)(unaff_x22 + 0x560);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x4e8);
    FUN_100a7b570(unaff_x22 + 0x3a0);
    _swift_bridgeObjectRelease(lVar11);
    _swift_bridgeObjectRelease(uVar7);
    _swift_bridgeObjectRelease(uVar8);
    pcVar5 = *(code **)(unaff_x22 + 8);
  }
  (*pcVar5)();
  return;
}



/* Address: 0x100a75710 | FUN_100a75710 */

void FUN_100a75710(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x548);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x540);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x4e8);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x510));
  _swift_bridgeObjectRelease(uVar3);
  FUN_100a5008c(unaff_x22 + 0x208);
  FUN_100a7b570(unaff_x22 + 0x3a0);
  _swift_bridgeObjectRelease(uVar1);
  _swift_errorRelease(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100a75784. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100a75788 | FUN_100a75788 */

void FUN_100a75788(undefined8 param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_3;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe8) = *param_2;
  _swift_task_switch(FUN_100a757a8,0,0);
  return;
}


