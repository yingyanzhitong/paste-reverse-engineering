/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100062330 | FUN_100062330 */

void FUN_100062330(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x10006234c | FUN_10006234c */

undefined8 * FUN_10006234c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_1[3];
  param_1[3] = param_2[3];
  _swift_release(uVar2);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  uVar2 = param_1[5];
  param_1[5] = param_2[5];
  _swift_release(uVar2);
  uVar2 = param_2[7];
  uVar1 = param_1[7];
  param_1[6] = param_2[6];
  param_1[7] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  uVar2 = param_1[9];
  param_1[9] = param_2[9];
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1000623d8 | FUN_1000623d8 */

int FUN_1000623d8(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 2);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x100062420 | FUN_100062420 */

void FUN_100062420(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[1] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x100062474 | FUN_100062474 */

undefined1  [16] FUN_100062474(void)

{
  return ZEXT816(0x100eb22e8);
}



/* Address: 0x100062484 | FUN_100062484 */

void FUN_100062484(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca1398,1);
  return;
}



/* Address: 0x100062494 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x100062498 | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x10006249c | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x1000624a0 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x1000624a4 | thunk_FUN_1000629a8 */

void thunk_FUN_1000629a8(void)

{
  FUN_1000629a8();
  return;
}



/* Address: 0x1000624a8 | FUN_1000624a8 */

void FUN_1000624a8(void)

{
  long unaff_x20;
  
  FUN_100061170(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000624b0 | FUN_1000624b0 */

undefined8 FUN_1000624b0(undefined8 param_1,undefined8 param_2)

{
  FUN_1000621d0(param_2,param_1,&DAT_100eb22e8);
  return param_2;
}



/* Address: 0x1000624e4 | FUN_1000624e4 */

void FUN_1000624e4(void)

{
  long unaff_x20;
  
  FUN_1000612bc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1000624ec | FUN_1000624ec */

void FUN_1000624ec(void)

{
  long unaff_x20;
  
  FUN_100061614(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000624f4 | FUN_1000624f4 */

void FUN_1000624f4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_28;
  
  if (DAT_100fa9420 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa93f0;
  FUN_100005c24(&DAT_100fa93f0,&DAT_100c26390);
  puVar2 = &DAT_100fa9418;
  FUN_100016eac(&DAT_100fa9418,&DAT_100fa9408,&DAT_100c263c8,
                PTR_SwiftUI__SwiftUI__TupleView<undefined>_>SwiftUI__View_100eabb30);
  puVar3 = PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08;
  local_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ForEach<undefined,undefined,undefined>_>SwiftUI__View_100eaba08,
             puVar1,&local_28);
  DAT_100fa9420 = puVar3;
  return;
}



/* Address: 0x100062584 | FUN_100062584 */

void FUN_100062584(void)

{
  FUN_10005fa2c();
  return;
}



/* Address: 0x1000625a0 | FUN_1000625a0 */

void FUN_1000625a0(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000625cc | FUN_1000625cc */

void FUN_1000625cc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_20;
  undefined *puStack_18;
  
  if (DAT_100fa7300 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa72f8;
  FUN_100005c24(&DAT_100fa72f8,&DAT_100c26430);
  local_20 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
  puStack_18 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar2 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_20);
  DAT_100fa7300 = puVar2;
  return;
}



/* Address: 0x10006263c | FUN_10006263c */

void FUN_10006263c(void)

{
  FUN_10005fa2c();
  return;
}



/* Address: 0x100062658 | FUN_100062658 */

void FUN_100062658(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x100062684 | FUN_100062684 */

void FUN_100062684(void)

{
  long unaff_x20;
  
  FUN_10005e008(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10006268c | FUN_10006268c */

undefined8 FUN_10006268c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6418;
  FUN_1000037f0(&DAT_100fa6418,&DAT_100c22490);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000626dc | thunk_FUN_1000a094c */

void thunk_FUN_1000a094c(void)

{
  FUN_1000a094c();
  return;
}



/* Address: 0x1000626e0 | thunk_FUN_1000a09b4 */

void thunk_FUN_1000a09b4(void)

{
  FUN_1000a09b4();
  return;
}



/* Address: 0x1000626e4 | FUN_1000626e4 */

void FUN_1000626e4(void)

{
  long unaff_x20;
  
  FUN_10005ed94(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000626ec | FUN_1000626ec */

void FUN_1000626ec(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa9510 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9508;
  FUN_100005c24(&DAT_100fa9508,&DAT_100c265a0);
  puVar2 = &DAT_100fa9518;
  FUN_100016eac(&DAT_100fa9518,&DAT_100fa9520,&DAT_100c265a8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa9510 = puVar3;
  return;
}



/* Address: 0x100062784 | FUN_100062784 */

void FUN_100062784(void)

{
  long unaff_x20;
  
  FUN_10005be70(unaff_x20 + 0x10,&DAT_100c26890,FUN_100004520);
  return;
}



/* Address: 0x1000627ac | FUN_1000627ac */

void FUN_1000627ac(void)

{
  long unaff_x20;
  
  FUN_10005be70(unaff_x20 + 0x10,&DAT_100c26868,FUN_100004520);
  return;
}



/* Address: 0x1000627d4 | FUN_1000627d4 */

void FUN_1000627d4(void)

{
  long unaff_x20;
  
  FUN_10005bfc0(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000627dc | FUN_1000627dc */

void FUN_1000627dc(void)

{
  long unaff_x20;
  
  FUN_10005be70(unaff_x20 + 0x10,&DAT_100c26670,FUN_100004520);
  return;
}



/* Address: 0x100062804 | FUN_100062804 */

void FUN_100062804(void)

{
  long unaff_x20;
  
  FUN_10005be70(unaff_x20 + 0x10,&DAT_100c265e8,FUN_100004520);
  return;
}



/* Address: 0x10006282c | FUN_10006282c */

void FUN_10006282c(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRetain(param_4);
    _swift_retain(param_6);
    _swift_bridgeObjectRetain(param_2);
    return;
  }
  return;
}



/* Address: 0x100062868 | FUN_100062868 */

void FUN_100062868(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_6);
    _swift_bridgeObjectRelease(param_4);
    return;
  }
  return;
}



/* Address: 0x1000628a4 | FUN_1000628a4 */

void FUN_1000628a4(void)

{
  FUN_10005fa2c();
  return;
}



/* Address: 0x1000628c0 | FUN_1000628c0 */

void FUN_1000628c0(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000628ec | FUN_1000628ec */

void FUN_1000628ec(EnvironmentValues param_1)

{
  SwiftUI::EnvironmentValues::get_controlSize(param_1);
  return;
}



/* Address: 0x10006290c | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x100062910 | FUN_100062910 */

void FUN_100062910(void)

{
  FUN_10005fa2c();
  return;
}



/* Address: 0x10006292c | FUN_10006292c */

void FUN_10006292c(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x100062958 | FUN_100062958 */

void FUN_100062958(void)

{
  FUN_1000078b4();
  return;
}



/* Address: 0x10006297c | FUN_10006297c */

void FUN_10006297c(void)

{
  FUN_100061df4();
  return;
}



/* Address: 0x1000629a8 | FUN_1000629a8 */

void FUN_1000629a8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000629ec | FUN_1000629ec */

void FUN_1000629ec(void)

{
  long unaff_x20;
  
  FUN_10005cf6c(unaff_x20 + 0x10);
  return;
}



/* Address: 0x1000629f4 | thunk_FUN_100061e6c */

void thunk_FUN_100061e6c(void)

{
  FUN_100061e6c();
  return;
}



/* Address: 0x1000629f8 | thunk_FUN_100061ed4 */

void thunk_FUN_100061ed4(void)

{
  FUN_100061ed4();
  return;
}



/* Address: 0x1000629fc | FUN_1000629fc */

undefined8 FUN_1000629fc(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1003b2fc0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100062a38 | thunk_FUN_100062a48 */

void thunk_FUN_100062a48(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x100062a3c | FUN_100062a3c */

void FUN_100062a3c(void)

{
  long unaff_x20;
  
  FUN_10005d048(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),unaff_x20 + 0x20
               );
  return;
}



/* Address: 0x100062a48 | FUN_100062a48 */

void FUN_100062a48(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x100062a94 | FUN_100062a94 */

void FUN_100062a94(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10005d1ac(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                unaff_x20 + 0x20);
  return;
}



/* Address: 0x100062aa0 | FUN_100062aa0 */

void FUN_100062aa0(undefined8 param_1,EnvironmentValues param_2)

{
  bool bVar1;
  
  bVar1 = SwiftUI::EnvironmentValues::get_isEnabled(param_2);
  *(bool *)param_1 = bVar1;
  return;
}



/* Address: 0x100062acc | FUN_100062acc */

void FUN_100062acc(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_isEnabled(param_2,*(bool *)param_1);
  return;
}



/* Address: 0x100062af0 | FUN_100062af0 */

void FUN_100062af0(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100062b00 | FUN_100062b00 */

void FUN_100062b00(byte *param_1)

{
  long unaff_x20;
  
  *param_1 = *param_1 & (*(byte *)(unaff_x20 + 0x10) ^ 0xff) & 1;
  return;
}



/* Address: 0x100062b18 | FUN_100062b18 */

void FUN_100062b18(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa95d0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9578;
  FUN_100005c24(&DAT_100fa9578,&DAT_100c266e0);
  puVar2 = puVar1;
  FUN_100062b88();
  puVar3 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa95d0 = puVar3;
  return;
}



/* Address: 0x100062b88 | FUN_100062b88 */

void FUN_100062b88(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa95d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa9580;
  FUN_100005c24(&DAT_100fa9580,&DAT_100c266e8);
  puVar2 = &DAT_100fa7278;
  FUN_100016eac(&DAT_100fa7278,&DAT_100fa7260,&DAT_100c24088,
                PTR_SwiftUI__SwiftUI__ProgressView<undefined,undefined>_>SwiftUI__View_100eaa6a0);
  puVar3 = &DAT_100fa95e0;
  FUN_100016eac(&DAT_100fa95e0,&DAT_100fa7208,&DAT_100c27630,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa95d8 = puVar4;
  return;
}



/* Address: 0x100062c40 | FUN_100062c40 */

void FUN_100062c40(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100062c74 | FUN_100062c74 */

void FUN_100062c74(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_1000ad2a0(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x100062cf4 | FUN_100062cf4 */

void FUN_100062cf4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100062d20 | FUN_100062d20 */

void FUN_100062d20(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_1000ad0b8(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x100062d8c | FUN_100062d8c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100062d8c(undefined8 *param_1)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  ID IVar4;
  NSString *pNVar5;
  ID IVar6;
  void *aBlock;
  undefined8 uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined *local_d0;
  undefined8 local_c8;
  code *local_c0;
  undefined *puStack_b8;
  code *local_b0;
  undefined *local_a8;
  undefined8 local_70;
  long lStack_68;
  code *local_60;
  undefined8 local_58;
  
  puVar3 = &_OBJC_CLASS___NSAlert;
  _objc_allocWithZone();
  IVar4 = objc_stub::init((ID)puVar3);
  objc_stub::setAlertStyle_(IVar4,0);
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  objc_stub::setMessageText_(IVar4,pNVar5);
  if (param_1[3] != 0) {
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    objc_stub::setInformativeText_(IVar4,pNVar5);
  }
  lVar8 = param_1[9];
  local_70 = param_1[8];
  uVar7 = param_1[0xb];
  local_60 = (code *)param_1[10];
  lStack_68 = lVar8;
  local_58 = uVar7;
  if (lVar8 != 0) {
    FUN_100011090(&local_70,&local_d0,&DAT_100fa95f8,&DAT_100c26810);
    _swift_bridgeObjectRetain(lVar8);
    pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
    _swift_bridgeObjectRelease(lVar8);
    objc_stub::addButtonWithTitle_(IVar4,pNVar5);
    _swift_release(uVar7);
    _swift_bridgeObjectRelease(lVar8);
  }
  pcVar2 = (code *)param_1[6];
  pNVar5 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar6 = objc_stub::addButtonWithTitle_(IVar4,pNVar5);
  objc_stub::setHasDestructiveAction_(IVar6,1);
  puVar3 = &DAT_100eb2548;
  _swift_allocObject(&DAT_100eb2548,0x70,7);
  uVar7 = param_1[4];
  uVar10 = param_1[7];
  uVar9 = param_1[6];
  *(undefined8 *)(puVar3 + 0x38) = param_1[5];
  *(undefined8 *)(puVar3 + 0x30) = uVar7;
  *(undefined8 *)(puVar3 + 0x48) = uVar10;
  *(undefined8 *)(puVar3 + 0x40) = uVar9;
  uVar7 = param_1[8];
  uVar10 = param_1[0xb];
  uVar9 = param_1[10];
  *(undefined8 *)(puVar3 + 0x58) = param_1[9];
  *(undefined8 *)(puVar3 + 0x50) = uVar7;
  *(undefined8 *)(puVar3 + 0x68) = uVar10;
  *(undefined8 *)(puVar3 + 0x60) = uVar9;
  uVar7 = *param_1;
  uVar10 = param_1[3];
  uVar9 = param_1[2];
  *(undefined8 *)(puVar3 + 0x18) = param_1[1];
  *(undefined8 *)(puVar3 + 0x10) = uVar7;
  *(undefined8 *)(puVar3 + 0x28) = uVar10;
  *(undefined8 *)(puVar3 + 0x20) = uVar9;
  puVar1 = PTR__NSApp_100ea8fa0;
  IVar6 = *(ID *)PTR__NSApp_100ea8fa0;
  if (IVar6 != 0) {
    FUN_10003c978(param_1,&local_d0);
    objc_stub::activateIgnoringOtherApps_(IVar6,1);
    if (*(ID *)puVar1 != 0) {
      IVar6 = objc_stub::keyWindow(*(ID *)puVar1);
      if (IVar6 == 0) {
        IVar4 = objc_stub::runModal(IVar4);
        if (IVar4 == 1000) {
          if (lStack_68 != 0) {
            (*local_60)();
          }
        }
        else {
          (*pcVar2)();
        }
        _swift_release(puVar3);
      }
      else {
        local_b0 = FUN_100063090;
        local_d0 = PTR___NSConcreteStackBlock_100ea82a0;
        local_c8 = 0x42000000;
        local_c0 = FUN_100061d58;
        puStack_b8 = &DAT_100eb2560;
        local_a8 = puVar3;
        aBlock = __Block_copy(&local_d0);
        puVar1 = local_a8;
        _swift_retain(puVar3);
        _swift_release(puVar1);
        objc_stub::beginSheetModalForWindow_completionHandler_(IVar4,IVar6,aBlock);
        _swift_release(puVar3);
        __Block_release(aBlock);
      }
      return 0;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100063040);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10006303c);
  (*pcVar2)();
}



/* Address: 0x100063040 | FUN_100063040 */

void FUN_100063040(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  if (*(long *)(unaff_x20 + 0x58) != 0) {
    _swift_bridgeObjectRelease();
    _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x100063090 | FUN_100063090 */

void FUN_100063090(long param_1)

{
  long unaff_x20;
  
  if (param_1 == 1000) {
    if (*(long *)(unaff_x20 + 0x58) != 0) {
      (**(code **)(unaff_x20 + 0x60))(*(undefined8 *)(unaff_x20 + 0x68));
    }
  }
  else {
    (**(code **)(unaff_x20 + 0x40))();
  }
  return;
}


