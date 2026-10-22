/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100990274 | FUN_100990274 */

void FUN_100990274(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100990298 | FUN_100990298 */

void FUN_100990298(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10098c368(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009902b0 | FUN_1009902b0 */

void FUN_1009902b0(void)

{
  FUN_100990614(0x28);
  return;
}



/* Address: 0x1009902b8 | FUN_1009902b8 */

void FUN_1009902b8(void)

{
  long unaff_x20;
  
  FUN_10098e750(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100f20f50,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x1009902e4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x1009902e8 | FUN_1009902e8 */

void FUN_1009902e8(void)

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



/* Address: 0x100990338 | FUN_100990338 */

void FUN_100990338(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x100990344 | FUN_100990344 */

void FUN_100990344(void)

{
  FUN_1008feafc(PTR__swift_unknownObjectRelease_100eae458,0x38);
  return;
}



/* Address: 0x100990354 | FUN_100990354 */

void FUN_100990354(void)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  long unaff_x20;
  long lVar3;
  ulong uVar4;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar3 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  uVar4 = (ulong)*(byte *)(lVar3 + 0x50) + 0x18 &
          ((ulong)*(byte *)(lVar3 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar3 + 0x40);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar3 + 8))(unaff_x20 + uVar4,CONCAT71(extraout_var,NVar1.value));
  _swift_release(*(undefined8 *)(unaff_x20 + (lVar2 + uVar4 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009903d4 | FUN_1009903d4 */

void FUN_1009903d4(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar3 = uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff);
  FUN_10098de3c(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + uVar3,
                *(undefined8 *)
                 (unaff_x20 + (*(long *)(lVar2 + 0x40) + uVar3 + 7 & 0xfffffffffffffff8)));
  return;
}



/* Address: 0x100990428 | FUN_100990428 */

void FUN_100990428(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100990464 | FUN_100990464 */

void FUN_100990464(void)

{
  long unaff_x20;
  
  FUN_10098bb30(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined1 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10099047c | FUN_10099047c */

void FUN_10099047c(void)

{
  FUN_100990484(0x30);
  return;
}



/* Address: 0x100990484 | FUN_100990484 */

void FUN_100990484(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009904bc | FUN_1009904bc */

void FUN_1009904bc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009904f0 | FUN_1009904f0 */

void FUN_1009904f0(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1009904fc | FUN_1009904fc */

void FUN_1009904fc(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),&PTR_PTR_100f217d0)
  ;
  return;
}



/* Address: 0x10099052c | FUN_10099052c */

void FUN_10099052c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100990550 | FUN_100990550 */

void FUN_100990550(void)

{
  long unaff_x20;
  
  FUN_10098bf90(*(undefined8 *)(unaff_x20 + 0x10),*(undefined1 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10099055c | FUN_10099055c */

void FUN_10099055c(void)

{
  FUN_100990614(0x30);
  return;
}



/* Address: 0x100990564 | FUN_100990564 */

void FUN_100990564(void)

{
  long unaff_x20;
  
  FUN_10098c03c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100990570 | FUN_100990570 */

void FUN_100990570(void)

{
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x10099059c | FUN_10099059c */

void FUN_10099059c(void)

{
  FUN_10098c368();
  return;
}



/* Address: 0x1009905b4 | FUN_1009905b4 */

void FUN_1009905b4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009905e8 | FUN_1009905e8 */

void FUN_1009905e8(void)

{
  long unaff_x20;
  
  FUN_10098e750(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),&DAT_100f21388,thunk_FUN_1008d678c);
  return;
}



/* Address: 0x100990614 | FUN_100990614 */

void FUN_100990614(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x10099064c | FUN_10099064c */

undefined1  [16] FUN_10099064c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&local_40,&local_30);
  puVar1 = &DAT_100f20b68;
  _swift_allocObject(&DAT_100f20b68,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = local_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x1009906a8 | FUN_1009906a8 */

void FUN_1009906a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f20b40;
  _swift_allocObject(&DAT_100f20b40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100990708 | FUN_100990708 */

void FUN_100990708(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff1680 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c89cbc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c89cbc,&DAT_100f20880);
  DAT_100ff1680 = pTVar1;
  return;
}



/* Address: 0x100990748 | FUN_100990748 */

void FUN_100990748(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10099076c | FUN_10099076c */

void FUN_10099076c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098f438(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100990774 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990778 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x10099077c | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990780 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990784 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990788 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x10099078c | thunk_FUN_100990748 */

void thunk_FUN_100990748(void)

{
  FUN_100990748();
  return;
}



/* Address: 0x100990790 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990794 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x100990798 | thunk_FUN_100990238 */

void thunk_FUN_100990238(void)

{
  FUN_100990238();
  return;
}



/* Address: 0x10099079c | thunk_FUN_100990238 */

void thunk_FUN_100990238(void)

{
  FUN_100990238();
  return;
}



/* Address: 0x1009907a0 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x1009907a4 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x1009907a8 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x1009907ac | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x1009907b0 | thunk_FUN_100990748 */

void thunk_FUN_100990748(void)

{
  FUN_100990748();
  return;
}



/* Address: 0x1009907b4 | thunk_FUN_100990274 */

void thunk_FUN_100990274(void)

{
  FUN_100990274();
  return;
}



/* Address: 0x1009907b8 | thunk_FUN_1009901b4 */

void thunk_FUN_1009901b4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10098a50c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009907bc | thunk_FUN_10098e0b4 */

void thunk_FUN_10098e0b4(void)

{
  FUN_10098e0b4();
  return;
}



/* Address: 0x1009907c0 | thunk_FUN_100645f18 */

void thunk_FUN_100645f18(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Address: 0x1009907c4 | thunk_FUN_10098fbf8 */

void thunk_FUN_10098fbf8(undefined8 param_1,undefined8 param_2)

{
  FUN_10098fc14(param_1,param_2,FUN_10098ba80);
  return;
}



/* Address: 0x1009907c8 | thunk_FUN_10098fe78 */

void thunk_FUN_10098fe78(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar1 = 0;
  FUN_100991a3c(0);
  FUN_10061d154(uVar2,param_2,uVar1,&PTR_PTR_100f217d0);
  return;
}



/* Address: 0x1009907cc | thunk_FUN_10099064c */

undefined1  [16] thunk_FUN_10099064c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_30 = param_1;
  uStack_28 = param_2;
  (**(code **)(unaff_x20 + 0x10))(&uStack_40,&uStack_30);
  puVar1 = &DAT_100f20b68;
  _swift_allocObject(&DAT_100f20b68,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x1009907d0 | thunk_FUN_1009906a8 */

void thunk_FUN_1009906a8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f20b40;
  _swift_allocObject(&DAT_100f20b40,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1009907d4 | thunk_FUN_1009830e0 */

void thunk_FUN_1009830e0(void)

{
  long unaff_x20;
  
  FUN_10099a394(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1009907d8 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  thunk_FUN_100982b98();
  return;
}



/* Address: 0x1009907dc | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x1009907e0 | thunk_FUN_100982b98 */

void thunk_FUN_100982b98(void)

{
  thunk_FUN_100982b98();
  return;
}



/* Address: 0x1009907e4 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x1009907e8 | thunk_FUN_10093cdc8 */

void thunk_FUN_10093cdc8(void)

{
  thunk_FUN_10093cdc8();
  return;
}



/* Address: 0x1009907ec | thunk_FUN_100990338 */

void thunk_FUN_100990338(void)

{
  FUN_100990338();
  return;
}



/* Address: 0x1009907f0 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}



/* Address: 0x1009907f4 | thunk_FUN_1009902b0 */

void thunk_FUN_1009902b0(void)

{
  FUN_1009902b0();
  return;
}


