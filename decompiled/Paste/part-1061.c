/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b67300 | FUN_100b67300 */

bool FUN_100b67300(ulong param_1,ulong param_2)

{
  return (param_2 & param_1) == 0;
}



/* Address: 0x100b6730c | FUN_100b6730c */

void FUN_100b6730c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 < 0) {
    lVar2 = (long)param_1 + (long)(int)lVar1;
    _swift_getTypeByMangledNameInContext(lVar2,-(lVar1 >> 0x20),0,0);
    *param_1 = lVar2;
  }
  return;
}



/* Address: 0x100b6734c | FUN_100b6734c */

void FUN_100b6734c(long *param_1)

{
  long lVar1;
  long lVar2;
  
  lVar1 = *param_1;
  if (lVar1 < 0) {
    lVar2 = 0xff;
    _swift_getTypeByMangledNameInContextInMetadataState
              (0xff,(long)param_1 + (long)(int)lVar1,-(lVar1 >> 0x20),0,0);
    *param_1 = lVar2;
  }
  return;
}



/* Address: 0x100b67390 | FUN_100b67390 */

void FUN_100b67390(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100b673b4 | FUN_100b673b4 */

void FUN_100b673b4(void)

{
  FUN_100b63af8();
  return;
}



/* Address: 0x100b673bc | FUN_100b673bc */

void FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b673cc | FUN_100b673cc */

void FUN_100b673cc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100b673d4 | FUN_100b673d4 */

void FUN_100b673d4(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100b673e4 | FUN_100b673e4 */

void FUN_100b673e4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100ba63a0(param_1,*(undefined1 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b673ec | FUN_100b673ec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100b673ec(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  
  if (*param_2 == 0) {
    lVar1 = *param_3;
    _swift_getObjCClassMetadata();
    *param_2 = lVar1;
  }
  return;
}



/* Address: 0x100b67424 | FUN_100b67424 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100b67424(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100b67448 | FUN_100b67448 */

void FUN_100b67448(void)

{
  FUN_100bb02ac();
  return;
}



/* Address: 0x100b67450 | thunk_FUN_100b67468 */

void thunk_FUN_100b67468(void)

{
  FUN_100b67468();
  return;
}



/* Address: 0x100b67454 | FUN_100b67454 */

void FUN_100b67454(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b65e90(param_1,param_2,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100b67460 | FUN_100b67460 */

void FUN_100b67460(void)

{
  FUN_100bb02e4();
  return;
}



/* Address: 0x100b67468 | FUN_100b67468 */

void FUN_100b67468(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b67494 | FUN_100b67494 */

void FUN_100b67494(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b6264c(param_1,param_2,unaff_x20 + 0x10,*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40));
  return;
}



/* Address: 0x100b674a0 | thunk_FUN_100b67534 */

void thunk_FUN_100b67534(void)

{
  FUN_100b67534();
  return;
}



/* Address: 0x100b674a4 | FUN_100b674a4 */

void FUN_100b674a4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b6273c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50)
               );
  return;
}



/* Address: 0x100b674b4 | FUN_100b674b4 */

long FUN_100b674b4(long param_1)

{
  _swift_bridgeObjectRetain(*(undefined8 *)(param_1 + 0x20));
  return param_1;
}



/* Address: 0x100b674dc | thunk_FUN_100b67570 */

void thunk_FUN_100b67570(void)

{
  FUN_100b67570();
  return;
}



/* Address: 0x100b674e0 | FUN_100b674e0 */

void FUN_100b674e0(code *param_1,undefined8 param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = param_1;
  (**(code **)(unaff_x20 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000100b67520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x100b67524 | thunk_FUN_100b675d0 */

void thunk_FUN_100b675d0(void)

{
  FUN_100b675d0();
  return;
}



/* Address: 0x100b67528 | FUN_100b67528 */

void FUN_100b67528(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b78e90(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100b67534 | FUN_100b67534 */

void FUN_100b67534(void)

{
  long unaff_x20;
  
  FUN_100b678a4();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b67560 | FUN_100b67560 */

void FUN_100b67560(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b65f80(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20,*(undefined8 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50)
               );
  return;
}



/* Address: 0x100b67570 | FUN_100b67570 */

void FUN_100b67570(void)

{
  long unaff_x20;
  
  FUN_100b678a4();
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b67594 | FUN_100b67594 */

void FUN_100b67594(code *param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long unaff_x20;
  
  UNRECOVERED_JUMPTABLE = param_1;
  (**(code **)(unaff_x20 + 0x10))();
                    /* WARNING: Could not recover jumptable at 0x000100b675cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100b675d0 | FUN_100b675d0 */

void FUN_100b675d0(void)

{
  long unaff_x20;
  
  FUN_100b678a4();
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b675f4 | FUN_100b675f4 */

undefined1  [16] FUN_100b675f4(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 7;
  auVar1._0_8_ = 0x18;
  return auVar1;
}



/* Address: 0x100b67600 | FUN_100b67600 */

void FUN_100b67600(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  param_2[2] = param_1[2];
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return;
}



/* Address: 0x100b67614 | FUN_100b67614 */

void FUN_100b67614(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_101044848,&DAT_100f36688);
  return;
}



/* Address: 0x100b67628 | FUN_100b67628 */

uint FUN_100b67628(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100b67284(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x100b67644 | FUN_100b67644 */

void FUN_100b67644(long *param_1,long param_2)

{
  if (*param_1 == 0) {
    FUN_100b6734c();
    FUN_100b678f4();
    *param_1 = param_2;
  }
  FUN_100b56e88();
  return;
}



/* Address: 0x100b67678 | FUN_100b67678 */

void FUN_100b67678(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_101044850,&DAT_100f366a8);
  return;
}



/* Address: 0x100b6768c | FUN_100b6768c */

void FUN_100b6768c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_101044858,&DAT_100f366c8);
  return;
}



/* Address: 0x100b676a0 | FUN_100b676a0 */

void FUN_100b676a0(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_101044860,&DAT_100f366f0);
  return;
}



/* Address: 0x100b676b4 | FUN_100b676b4 */

void FUN_100b676b4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_101044868,&DAT_100f36710);
  return;
}



/* Address: 0x100b676c8 | FUN_100b676c8 */

void FUN_100b676c8(void)

{
  FUN_100b66ed0(&DAT_101044870,FUN_100b6768c,&TargetProtocolConformanceDescriptor_100c98c70);
  return;
}



/* Address: 0x100b676f4 | FUN_100b676f4 */

void FUN_100b676f4(void)

{
  FUN_100b66ed0(&DAT_101044878,FUN_100b6768c,&TargetProtocolConformanceDescriptor_100c98c3c);
  return;
}



/* Address: 0x100b67720 | FUN_100b67720 */

void FUN_100b67720(void)

{
  FUN_100b66ed0(&DAT_101044880,FUN_100b6768c,&TargetProtocolConformanceDescriptor_100c98d68);
  return;
}



/* Address: 0x100b6774c | FUN_100b6774c */

void FUN_100b6774c(void)

{
  FUN_100b66ed0(&DAT_101044888,FUN_100b6768c,&TargetProtocolConformanceDescriptor_100c98c9c);
  return;
}



/* Address: 0x100b67778 | FUN_100b67778 */

void FUN_100b67778(long param_1)

{
  ulong uVar1;
  long lVar2;
  ulong *puVar3;
  ulong uVar4;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = 0;
    puVar3 = (ulong *)(param_1 + 0x20);
    do {
      uVar1 = 0;
      if ((*puVar3 & (uVar4 ^ 0xffffffffffffffff)) != 0) {
        uVar1 = *puVar3;
      }
      uVar4 = uVar1 | uVar4;
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  _swift_bridgeObjectRelease();
  FUN_100b56e88(uVar4);
  return;
}



/* Address: 0x100b677c4 | thunk_FUN_100b673bc */

void thunk_FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b677c8 | thunk_FUN_100b673bc */

void thunk_FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b677cc | thunk_FUN_100b673bc */

void thunk_FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b677d0 | thunk_FUN_100b673bc */

void thunk_FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b677d4 | thunk_FUN_100b673bc */

void thunk_FUN_100b673bc(long param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100b677d8 | thunk_FUN_100b67424 */

void thunk_FUN_100b67424(void)

{
  FUN_100b67424();
  return;
}



/* Address: 0x100b677dc | thunk_FUN_100b67468 */

void thunk_FUN_100b67468(void)

{
  FUN_100b67468();
  return;
}



/* Address: 0x100b677e0 | thunk_FUN_100b67534 */

void thunk_FUN_100b67534(void)

{
  FUN_100b67534();
  return;
}



/* Address: 0x100b677e4 | thunk_FUN_100b67570 */

void thunk_FUN_100b67570(void)

{
  FUN_100b67570();
  return;
}



/* Address: 0x100b677e8 | thunk_FUN_100b675d0 */

void thunk_FUN_100b675d0(void)

{
  FUN_100b675d0();
  return;
}



/* Address: 0x100b677ec | FUN_100b677ec */

uint FUN_100b677ec(uint param_1)

{
  FUN_100b67628();
  return param_1 & 1;
}



/* Address: 0x100b67804 | thunk_FUN_100b66e54 */

void thunk_FUN_100b66e54(void)

{
  FUN_100b66e54();
  return;
}



/* Address: 0x100b67808 | thunk_FUN_100b66dd0 */

void thunk_FUN_100b66dd0(void)

{
  FUN_100b66dd0();
  return;
}



/* Address: 0x100b6780c | thunk_FUN_100b66dd8 */

void thunk_FUN_100b66dd8(void)

{
  FUN_100b66dd8();
  return;
}



/* Address: 0x100b67810 | thunk_FUN_100b66de0 */

void thunk_FUN_100b66de0(void)

{
  FUN_100b66de0();
  return;
}



/* Address: 0x100b67814 | thunk_FUN_100b66e40 */

void thunk_FUN_100b66e40(void)

{
  FUN_100b66e40();
  return;
}



/* Address: 0x100b67818 | thunk_FUN_100b66e38 */

void thunk_FUN_100b66e38(void)

{
  FUN_100b66e38();
  return;
}



/* Address: 0x100b6781c | thunk_FUN_100b66e2c */

void thunk_FUN_100b66e2c(void)

{
  FUN_100b66e2c();
  return;
}



/* Address: 0x100b67820 | thunk_FUN_100b66e14 */

void thunk_FUN_100b66e14(void)

{
  FUN_100b66e14();
  return;
}



/* Address: 0x100b67824 | thunk_FUN_100b66e20 */

void thunk_FUN_100b66e20(void)

{
  FUN_100b66e20();
  return;
}



/* Address: 0x100b67828 | thunk_FUN_100b673cc */

void thunk_FUN_100b673cc(void)

{
  FUN_100b673cc();
  return;
}


