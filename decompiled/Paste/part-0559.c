/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100642b28 | FUN_100642b28 */

void FUN_100642b28(undefined8 *param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  (**(code **)(unaff_x20 + 0x10))(*(undefined8 *)(unaff_x20 + 0x18));
  *param_1 = uVar1;
  return;
}



/* Address: 0x100642b68 | FUN_100642b68 */

void FUN_100642b68(void)

{
  FUN_10063e6e4();
  return;
}



/* Address: 0x100642b70 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100642b74 | FUN_100642b74 */

void FUN_100642b74(void)

{
  long unaff_x20;
  
  FUN_10064bf88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642b80 | FUN_100642b80 */

void FUN_100642b80(void)

{
  FUN_10063e578(0);
  return;
}



/* Address: 0x100642b88 | FUN_100642b88 */

void FUN_100642b88(void)

{
  long unaff_x20;
  
  FUN_10064c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642b94 | FUN_100642b94 */

void FUN_100642b94(undefined8 param_1,char param_2)

{
  if (param_2 != -1) {
    FUN_1005dff14();
    return;
  }
  return;
}



/* Address: 0x100642ba8 | thunk_FUN_10063e8d0 */

void thunk_FUN_10063e8d0(void)

{
  FUN_10063e8d0();
  return;
}



/* Address: 0x100642bac | FUN_100642bac */

void FUN_100642bac(void)

{
  FUN_10063ed18();
  return;
}



/* Address: 0x100642bc4 | FUN_100642bc4 */

void FUN_100642bc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642bf0 | FUN_100642bf0 */

void FUN_100642bf0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100641764(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642c00 | FUN_100642c00 */

void FUN_100642c00(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642c24 | FUN_100642c24 */

void FUN_100642c24(undefined8 *param_1,undefined8 param_2)

{
  long unaff_x20;
  long unaff_x21;
  
  (**(code **)(unaff_x20 + 0x28))();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100642c50 | FUN_100642c50 */

void FUN_100642c50(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642c74 | thunk_FUN_100642c78 */

void thunk_FUN_100642c78(void)

{
  FUN_100642c78();
  return;
}



/* Address: 0x100642c78 | FUN_100642c78 */

void FUN_100642c78(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x100642ca4 | FUN_100642ca4 */

void FUN_100642ca4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar3 = 0;
  FUN_1006529e0(0,*(undefined8 *)(unaff_x20 + 0x18));
  FUN_10063daa0(uVar1,uVar2,uVar4,uVar3);
  return;
}



/* Address: 0x100642ce8 | FUN_100642ce8 */

void FUN_100642ce8(void)

{
  undefined *puVar1;
  
  if (DAT_100fd84d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fd84d8 = puVar1;
  return;
}



/* Address: 0x100642d28 | FUN_100642d28 */

void FUN_100642d28(void)

{
  long unaff_x20;
  
  FUN_10063e698(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100642d30 | FUN_100642d30 */

void FUN_100642d30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd84e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6a870;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6a870,&DAT_100eef640);
  DAT_100fd84e0 = pTVar1;
  return;
}



/* Address: 0x100642d70 | thunk_FUN_100641614 */

void thunk_FUN_100641614(void)

{
  FUN_100641614();
  return;
}



/* Address: 0x100642d74 | thunk_FUN_100642380 */

void thunk_FUN_100642380(void)

{
  FUN_100642380();
  return;
}



/* Address: 0x100642d78 | thunk_FUN_100642c00 */

void thunk_FUN_100642c00(void)

{
  FUN_100642c00();
  return;
}



/* Address: 0x100642d7c | thunk_FUN_100642c00 */

void thunk_FUN_100642c00(void)

{
  FUN_100642c00();
  return;
}



/* Address: 0x100642d80 | thunk_FUN_100642c00 */

void thunk_FUN_100642c00(void)

{
  FUN_100642c00();
  return;
}



/* Address: 0x100642d84 | thunk_FUN_100642c00 */

void thunk_FUN_100642c00(void)

{
  FUN_100642c00();
  return;
}



/* Address: 0x100642d88 | thunk_FUN_100642c00 */

void thunk_FUN_100642c00(void)

{
  FUN_100642c00();
  return;
}



/* Address: 0x100642d8c | thunk_FUN_100642c50 */

void thunk_FUN_100642c50(void)

{
  FUN_100642c50();
  return;
}



/* Address: 0x100642d90 | thunk_FUN_100640aec */

void thunk_FUN_100640aec(void)

{
  FUN_100640aec();
  return;
}



/* Address: 0x100642d94 | thunk_FUN_100642508 */

void thunk_FUN_100642508(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10064128c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642d98 | FUN_100642d98 */

void FUN_100642d98(void)

{
  FUN_1006423a4();
  return;
}



/* Address: 0x100642dac | thunk_FUN_100642b68 */

void thunk_FUN_100642b68(void)

{
  FUN_10063e6e4();
  return;
}



/* Address: 0x100642db0 | thunk_FUN_100642b80 */

void thunk_FUN_100642b80(void)

{
  FUN_10063e578(0);
  return;
}



/* Address: 0x100642db4 | thunk_FUN_10063e8d0 */

void thunk_FUN_10063e8d0(void)

{
  FUN_10063e8d0();
  return;
}



/* Address: 0x100642db8 | thunk_FUN_10064290c */

void thunk_FUN_10064290c(void)

{
  FUN_10064290c();
  return;
}



/* Address: 0x100642dbc | FUN_100642dbc */

void FUN_100642dbc(void)

{
  FUN_1006424c8();
  return;
}



/* Address: 0x100642dd0 | thunk_FUN_100642718 */

void thunk_FUN_100642718(void)

{
  thunk_FUN_100642718();
  return;
}



/* Address: 0x100642dd4 | thunk_FUN_10064275c */

void thunk_FUN_10064275c(void)

{
  thunk_FUN_10064275c();
  return;
}



/* Address: 0x100642dd8 | thunk_FUN_1000946a4 */

void thunk_FUN_1000946a4(void)

{
  thunk_FUN_1000946a4();
  return;
}



/* Address: 0x100642ddc | thunk_FUN_100642c78 */

void thunk_FUN_100642c78(void)

{
  thunk_FUN_100642c78();
  return;
}



/* Address: 0x100642de0 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642de4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642de8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642dec | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100642df0 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642df4 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642df8 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642dfc | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642e00 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642e04 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100642e08 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100642e0c | thunk_FUN_100642c78 */

void thunk_FUN_100642c78(void)

{
  thunk_FUN_100642c78();
  return;
}



/* Address: 0x100642e10 | thunk_FUN_100642ca4 */

void thunk_FUN_100642ca4(void)

{
  thunk_FUN_100642ca4();
  return;
}



/* Address: 0x100642e14 | thunk_FUN_100220288 */

void thunk_FUN_100220288(void)

{
  thunk_FUN_100220288();
  return;
}



/* Address: 0x100642e18 | thunk_FUN_100642b74 */

void thunk_FUN_100642b74(void)

{
  long unaff_x20;
  
  FUN_10064bf88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642e1c | thunk_FUN_100642b88 */

void thunk_FUN_100642b88(void)

{
  long unaff_x20;
  
  FUN_10064c090(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642e20 | thunk_FUN_1005dffb0 */

void thunk_FUN_1005dffb0(void)

{
  long unaff_x20;
  
  thunk_FUN_10064c1b0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                      *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100642e24 | FUN_100642e24 */

void FUN_100642e24(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100eefb58;
  _swift_allocObject(&DAT_100eefb58,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_3;
  _swift_retain(param_2);
  _swift_retain(param_3);
  FUN_1006486b4(FUN_1006457dc,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100642e94 | FUN_100642e94 */

void FUN_100642e94(void)

{
  FUN_1000f3c84();
  _swift_unknownObjectRetain();
  return;
}



/* Address: 0x100642ebc | FUN_100642ebc */

void FUN_100642ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  _swift_getObjectType(param_4);
  (**(code **)(param_5 + 0xa8))(param_1,param_2,param_3,param_6,param_4,param_5);
  return;
}



/* Address: 0x100642f24 | FUN_100642f24 */

void FUN_100642f24(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  _swift_getObjectType(param_4);
  (**(code **)(param_5 + 0xb0))(param_1,param_2,param_3,param_6,param_4,param_5);
  return;
}



/* Address: 0x100642f8c | FUN_100642f8c */

void FUN_100642f8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100648528();
  FUN_1006486f8();
  FUN_100004550(param_1,param_2);
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100642fd0 | FUN_100642fd0 */

void FUN_100642fd0(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  _swift_getObjectType(param_3);
  (**(code **)(param_4 + 0x98))(param_1,param_2,param_3,param_4);
  return;
}



/* Address: 0x100643020 | FUN_100643020 */

void FUN_100643020(undefined8 param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar2;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar5 = *(long *)(lVar2 + -8);
  puVar4 = &stack0xffffffffffffffc0 + -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar4,param_1,param_3);
  _swift_storeEnumTagMultiPayload(puVar4,lVar2,0);
  puVar3 = puVar4;
  FUN_100648528(puVar4,param_2,param_3);
  (**(code **)(lVar5 + 8))(puVar4,lVar2);
  FUN_1006486f8(puVar3,param_2,param_3);
  FUN_100004550(puVar3,param_2);
  _swift_bridgeObjectRelease(param_3);
  return;
}


