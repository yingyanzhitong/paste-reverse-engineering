/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10001fa64 | FUN_10001fa64 */

void FUN_10001fa64(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10001fab0 | FUN_10001fab0 */

undefined1  [16] FUN_10001fab0(void)

{
  return ZEXT816(0x100eb08e8);
}



/* Address: 0x10001fac0 | FUN_10001fac0 */

undefined1  [16] FUN_10001fac0(void)

{
  return ZEXT816(0x100eb0918);
}



/* Address: 0x10001fad0 | FUN_10001fad0 */

undefined8 * FUN_10001fad0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  uVar2 = param_2[3];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10001fb0c | FUN_10001fb0c */

undefined8 * FUN_10001fb0c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar2 = param_1[1];
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10001fb70 | FUN_10001fb70 */

undefined8 * FUN_10001fb70(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[3];
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10001fbb4 | FUN_10001fbb4 */

int FUN_10001fbb4(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[4] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10001fbfc | FUN_10001fbfc */

void FUN_10001fbfc(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    param_1[1] = 0;
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 4) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10001fc3c | FUN_10001fc3c */

undefined1  [16] FUN_10001fc3c(void)

{
  return ZEXT816(0x100eb0998);
}



/* Address: 0x10001fc4c | thunk_FUN_10001fc50 */

void thunk_FUN_10001fc50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa7140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7110;
  FUN_100005c24(&DAT_100fa7110,&DAT_100c23e38);
  puVar2 = puVar1;
  FUN_10001fcc8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa7140 = puVar3;
  return;
}



/* Address: 0x10001fc50 | FUN_10001fc50 */

void FUN_10001fc50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7140 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7110;
  FUN_100005c24(&DAT_100fa7110,&DAT_100c23e38);
  puVar2 = puVar1;
  FUN_10001fcc8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FlexFrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaaa68
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7140 = puVar3;
  return;
}



/* Address: 0x10001fcc8 | FUN_10001fcc8 */

void FUN_10001fcc8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7148 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7108;
  FUN_100005c24(&DAT_100fa7108,&DAT_100c23e30);
  puVar2 = puVar1;
  FUN_10001fd60();
  puVar3 = &DAT_100fa7180;
  FUN_100016eac(&DAT_100fa7180,&DAT_100fa7188,&DAT_100c23ec0,
                PTR_SwiftUI__SwiftUI___AnimationModifier<undefined>_>SwiftUI__ViewModifier_100eaac80
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7148 = puVar4;
  return;
}



/* Address: 0x10001fd60 | FUN_10001fd60 */

void FUN_10001fd60(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7150 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7158;
  FUN_100005c24(&DAT_100fa7158,&DAT_100c23ea8);
  puVar2 = puVar1;
  FUN_10001fdf8();
  puVar3 = &DAT_100fa7170;
  FUN_100016eac(&DAT_100fa7170,&DAT_100fa7178,&DAT_100c23eb8,
                PTR_SwiftUI__SwiftUI___TraitWritingModifier<undefined>_>SwiftUI__ViewModifier_100eaaea8
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7150 = puVar4;
  return;
}



/* Address: 0x10001fdf8 | FUN_10001fdf8 */

void FUN_10001fdf8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7160 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7168;
  FUN_100005c24(&DAT_100fa7168,&DAT_100c23eb0);
  puVar2 = puVar1;
  FUN_10001f68c();
  puVar3 = puVar2;
  FUN_10001f784();
  puVar4 = PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI___ConditionalContent<undefined,undefined>_>SwiftUI__View_100eaadd8
             ,puVar1,&local_30);
  DAT_100fa7160 = puVar4;
  return;
}



/* Address: 0x10001fe70 | FUN_10001fe70 */

void FUN_10001fe70(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca05c8,1);
  return;
}



/* Address: 0x10001fe80 | FUN_10001fe80 */

void FUN_10001fe80(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca05a0,1);
  return;
}



/* Address: 0x10001fe90 | FUN_10001fe90 */

void FUN_10001fe90(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca0578,1);
  return;
}



/* Address: 0x10001fea0 | FUN_10001fea0 */

void FUN_10001fea0(void)

{
  long unaff_x20;
  
  FUN_10001c5a4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10001feac | thunk_FUN_100061f88 */

void thunk_FUN_100061f88(void)

{
  FUN_100061f88();
  return;
}



/* Address: 0x10001feb0 | thunk_FUN_100061fa8 */

void thunk_FUN_100061fa8(void)

{
  FUN_100061fa8();
  return;
}



/* Address: 0x10001feb4 | FUN_10001feb4 */

void FUN_10001feb4(void)

{
  long unaff_x20;
  
  FUN_10001cad8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10001fec0 | FUN_10001fec0 */

void FUN_10001fec0(void)

{
  undefined *puVar1;
  
  if (DAT_100fa7230 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700;
  _swift_getWitnessTable
            (PTR_SwiftUI__SwiftUI__Color_>SwiftUI__ShapeStyle_100eab700,
             PTR___type_metadata_for_SwiftUI_Color_100eab718);
  DAT_100fa7230 = puVar1;
  return;
}



/* Address: 0x10001ff00 | FUN_10001ff00 */

void FUN_10001ff00(void)

{
  undefined *puVar1;
  
  if (DAT_100fa7270 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__double_>Swift__BinaryFloatingPoint_100eac5d8;
  _swift_getWitnessTable
            (PTR_Swift__double_>Swift__BinaryFloatingPoint_100eac5d8,
             PTR___type_metadata_for_Swift_Double_100eac5d0);
  DAT_100fa7270 = puVar1;
  return;
}



/* Address: 0x10001ff40 | thunk_FUN_10009cc1c */

void thunk_FUN_10009cc1c(void)

{
  FUN_10009cc1c();
  return;
}



/* Address: 0x10001ff44 | thunk_FUN_10009cc44 */

void thunk_FUN_10009cc44(void)

{
  FUN_10009cc44();
  return;
}



/* Address: 0x10001ff48 | thunk_FUN_10001fff0 */

void thunk_FUN_10001fff0(void)

{
  FUN_10001fff0();
  return;
}



/* Address: 0x10001ff4c | FUN_10001ff4c */

void FUN_10001ff4c(void)

{
  long unaff_x20;
  
  FUN_10001ec38(unaff_x20 + 0x10);
  return;
}



/* Address: 0x10001ff54 | FUN_10001ff54 */

undefined8 FUN_10001ff54(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_100342ccc(param_2,param_1);
  return param_2;
}



/* Address: 0x10001ff90 | FUN_10001ff90 */

void FUN_10001ff90(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *local_30;
  undefined8 uStack_28;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    local_30 = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348;
    puVar1 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
    uStack_28 = param_4;
    _swift_getWitnessTable
              (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
               param_2,&local_30);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x10001fff0 | FUN_10001fff0 */

void FUN_10001fff0(void)

{
  long unaff_x20;
  
  FUN_10001f5e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined1 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100020028 | FUN_100020028 */

void FUN_100020028(void)

{
  long unaff_x20;
  
  FUN_10001eeb4(unaff_x20 + 0x10);
  return;
}



/* Address: 0x100020030 | FUN_100020030 */

void FUN_100020030(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7318 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7310;
  FUN_100005c24(&DAT_100fa7310,&DAT_100c24140);
  puVar2 = puVar1;
  FUN_1000200a8();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7318 = puVar3;
  return;
}



/* Address: 0x1000200a8 | FUN_1000200a8 */

void FUN_1000200a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7320 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7328;
  FUN_100005c24(&DAT_100fa7328,&DAT_100c24148);
  puVar2 = puVar1;
  FUN_100020140();
  puVar3 = &DAT_100fa7360;
  FUN_100016eac(&DAT_100fa7360,&DAT_100fa7368,&DAT_100c27530,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7320 = puVar4;
  return;
}



/* Address: 0x100020140 | FUN_100020140 */

void FUN_100020140(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7330 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7338;
  FUN_100005c24(&DAT_100fa7338,&DAT_100c24150);
  puVar2 = &DAT_100fa7340;
  FUN_100016eac(&DAT_100fa7340,&DAT_100fa7348,&DAT_100c24158,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  puVar3 = &DAT_100fa7350;
  FUN_100016eac(&DAT_100fa7350,&DAT_100fa7358,&DAT_100c24160,
                PTR_SwiftUI__SwiftUI___ForegroundStyleModifier<undefined>_>SwiftUI__ViewModifier_100eab000
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7330 = puVar4;
  return;
}



/* Address: 0x1000201f8 | thunk_FUN_10009cc68 */

void thunk_FUN_10009cc68(void)

{
  FUN_10009cc68();
  return;
}



/* Address: 0x1000201fc | thunk_FUN_10009cc90 */

void thunk_FUN_10009cc90(void)

{
  FUN_10009cc90();
  return;
}



/* Address: 0x100020200 | FUN_100020200 */

void FUN_100020200(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    FUN_100016d5c();
    _swift_bridgeObjectRetain(in_x3);
    return;
  }
  return;
}



/* Address: 0x10002022c | FUN_10002022c */

void FUN_10002022c(void)

{
  long in_x3;
  
  if (in_x3 != 0) {
    FUN_100016d74();
    _swift_bridgeObjectRelease(in_x3);
    return;
  }
  return;
}



/* Address: 0x100020258 | FUN_100020258 */

void FUN_100020258(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa73b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa73a8;
  FUN_100005c24(&DAT_100fa73a8,&DAT_100c241d0);
  puVar2 = puVar1;
  FUN_1000202f0();
  puVar3 = &DAT_100fa73c8;
  FUN_100016eac(&DAT_100fa73c8,&DAT_100fa73d0,&DAT_100c241e0,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  puVar4 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  puStack_28 = puVar3;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa73b0 = puVar4;
  return;
}



/* Address: 0x1000202f0 | FUN_1000202f0 */

void FUN_1000202f0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa73b8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa73c0;
  FUN_100005c24(&DAT_100fa73c0,&DAT_100c241d8);
  puVar2 = &DAT_100fa7360;
  FUN_100016eac(&DAT_100fa7360,&DAT_100fa7368,&DAT_100c27530,
                PTR_SwiftUI__SwiftUI___EnvironmentKeyWritingModifier<undefined>_>SwiftUI__ViewModifier_100eab0e0
               );
  local_30 = PTR___protocol_witness_table_for_SwiftUI_Image___SwiftUI_View_in_SwiftUI_100eab7a8;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_28 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa73b8 = puVar3;
  return;
}



/* Address: 0x100020388 | FUN_100020388 */

void FUN_100020388(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000203cc | thunk_FUN_10009ccb8 */

void thunk_FUN_10009ccb8(void)

{
  FUN_10009ccb8();
  return;
}



/* Address: 0x1000203d0 | thunk_FUN_10009cd08 */

void thunk_FUN_10009cd08(void)

{
  FUN_10009cd08();
  return;
}



/* Address: 0x1000203d4 | thunk_FUN_1000203d8 */

void thunk_FUN_1000203d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa73d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7198;
  FUN_100005c24(&DAT_100fa7198,&DAT_100c23fc0);
  puVar2 = &DAT_100fa73e0;
  FUN_100016eac(&DAT_100fa73e0,&DAT_100fa73e8,&DAT_100c24218,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa73d8 = puVar3;
  return;
}



/* Address: 0x1000203d8 | FUN_1000203d8 */

void FUN_1000203d8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa73d8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7198;
  FUN_100005c24(&DAT_100fa7198,&DAT_100c23fc0);
  puVar2 = &DAT_100fa73e0;
  FUN_100016eac(&DAT_100fa73e0,&DAT_100fa73e8,&DAT_100c24218,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa73d8 = puVar3;
  return;
}



/* Address: 0x100020470 | FUN_100020470 */

void FUN_100020470(void)

{
  FUN_100016eac(&DAT_100fa73f0,&DAT_100fa73f8,&DAT_100c24220,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  return;
}



/* Address: 0x1000204a4 | thunk_FUN_1000204a8 */

void thunk_FUN_1000204a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100fa7400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7298;
  FUN_100005c24(&DAT_100fa7298,&DAT_100c240a8);
  puVar2 = &DAT_100fa7408;
  FUN_100016eac(&DAT_100fa7408,&DAT_100fa7410,&DAT_100c24228,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100fa7400 = puVar3;
  return;
}



/* Address: 0x1000204a8 | FUN_1000204a8 */

void FUN_1000204a8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100fa7400 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fa7298;
  FUN_100005c24(&DAT_100fa7298,&DAT_100c240a8);
  puVar2 = &DAT_100fa7408;
  FUN_100016eac(&DAT_100fa7408,&DAT_100fa7410,&DAT_100c24228,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100fa7400 = puVar3;
  return;
}



/* Address: 0x100020540 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::_makeView */

_ViewOutputs
(extension_SwiftUI)::SwiftUI::View::_makeView(_GraphValue<undefined> view,_ViewInputs inputs)

{
  _ViewOutputs _Var1;
  
  _Var1 = _makeView(view,inputs);
  return (_ViewOutputs)_Var1.unknown;
}



/* Address: 0x100020544 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::_makeViewList */

_ViewListOutputs
(extension_SwiftUI)::SwiftUI::View::_makeViewList
          (_GraphValue<undefined> view,_ViewListInputs inputs)

{
  _ViewListOutputs _Var1;
  
  _Var1 = _makeViewList(view,inputs);
  return (_ViewListOutputs)_Var1.unknown;
}



/* Address: 0x100020548 | /System/Library/Frameworks/SwiftUI.framework/Versions/A/SwiftUI::(extension_SwiftUI)::SwiftUI::View::$_viewListCount */

void (extension_SwiftUI)::SwiftUI::View::__viewListCount(_ViewListCountInputs inputs)

{
  __viewListCount(inputs);
  return;
}



/* Address: 0x10002054c | thunk_FUN_1000148ac */

void thunk_FUN_1000148ac(void)

{
  thunk_FUN_1000148ac();
  return;
}



/* Address: 0x100020550 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100020554 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100020558 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x10002055c | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  FUN_100016e14();
  return;
}



/* Address: 0x100020560 | thunk_FUN_10001fff0 */

void thunk_FUN_10001fff0(void)

{
  FUN_10001fff0();
  return;
}



/* Address: 0x100020564 | thunk_FUN_10001fff0 */

void thunk_FUN_10001fff0(void)

{
  FUN_10001fff0();
  return;
}



/* Address: 0x100020568 | FUN_100020568 */

undefined8 FUN_100020568(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_48 [3];
  
  puVar1 = &DAT_100c242e0;
  _swift_getKeyPath(&DAT_100c242e0);
  puVar2 = &DAT_100c24308;
  _swift_getKeyPath(&DAT_100c24308);
  Combine::Published::_get_subscript(local_48);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_48[0];
}



/* Address: 0x1000205dc | FUN_1000205dc */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100020840 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1000205dc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ID IVar5;
  NSKeyValueObservingOptions for;
  OS_dispatch_queue *pOVar6;
  SchedulerOptions SVar7;
  undefined8 *puVar8;
  AnyCancellable *pAVar9;
  undefined8 uVar10;
  TaskPriority TVar11;
  MainActor *this;
  MainActor *pMVar12;
  long extraout_x8;
  undefined1 *puVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar14;
  MainActor *unaff_x20;
  long lVar15;
  long lVar16;
  long lVar17;
  OS_dispatch_queue *local_78;
  long lStack_70;
  byte local_68;
  
  puVar1 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar13 = &stack0xffffffffffffff70 + -extraout_x8;
  puVar1 = &DAT_100fa7510;
  FUN_1000037f0(&DAT_100fa7510,&DAT_100c24330);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar17 = (long)puVar13 - extraout_x8_00;
  puVar1 = &DAT_100fa7518;
  FUN_1000037f0(&DAT_100fa7518,&DAT_100c24338);
  lVar14 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar2 = &DAT_100fa7520;
  FUN_1000037f0(&DAT_100fa7520,&DAT_100c24340);
  lVar15 = *(long *)(puVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar15 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar16 = (lVar17 - extraout_x8_01) - extraout_x8_02;
  puVar4 = &DAT_100c242e0;
  _swift_getKeyPath(&DAT_100c242e0);
  puVar3 = &DAT_100c24308;
  _swift_getKeyPath(&DAT_100c24308);
  Combine::Published::_get_subscript(&local_78);
  _swift_release(puVar4);
  _swift_release(puVar3);
  if (((local_68 == 0xffffffbf || SCARRY4((uint)local_68,0x41)) &&
      (lStack_70 == 0 && local_78 == (OS_dispatch_queue *)0x0)) && (local_68 == 0xffffff80)) {
    puVar4 = &_OBJC_CLASS___NSProgress;
    _objc_allocWithZone();
    IVar5 = objc_stub::init((ID)puVar4);
    for.rawValue = (__uint64)&DAT_100c24368;
    _swift_getKeyPath();
    (extension_Foundation)::Foundation::_KeyValueCodingAndObservingPublishing::_publisher(for);
    _swift_release(for.rawValue);
    pOVar6 = (OS_dispatch_queue *)0x0;
    FUN_10002137c();
    local_78 = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar6);
    SVar7 = SchedulerOptions::_typeMetadataAccessor();
    (**(code **)(*(long *)(SVar7.unknown + -8) + 0x38))(lVar17,1,1,SVar7.unknown);
    puVar4 = &DAT_100fa7530;
    FUN_100016eac(&DAT_100fa7530,&DAT_100fa7518,&DAT_100c24338,
                  PTR__Foundation__KeyValueObservingPublisher<undefined,undefined>_>Combine__Publisher_100ea7a38
                 );
    puVar8 = &DAT_100fa7538;
    FUN_100003a00(&DAT_100fa7538,FUN_10002137c,
                  PTR_Dispatch____C__OS_dispatch_queue_>Combine__Scheduler_100eae780);
    (extension_Combine)::Combine::Publisher::_receive
              (lVar16,puVar8,lVar17,puVar1,pOVar6,puVar4,puVar8);
    FUN_100005808(lVar17,&DAT_100fa7510,&DAT_100c24330);
    (**(code **)(lVar14 + 8))(lVar17 - extraout_x8_01,puVar1);
    puVar1 = &DAT_100eb0b78;
    _swift_allocObject(&DAT_100eb0b78,0x18,7);
    _swift_weakInit(puVar1 + 0x10,unaff_x20);
    puVar4 = &DAT_100eb0ba0;
    _swift_allocObject(&DAT_100eb0ba0,0x20,7);
    *(undefined **)(puVar4 + 0x10) = puVar1;
    *(ID *)(puVar4 + 0x18) = IVar5;
    FUN_100016eac(&DAT_100fa7540,&DAT_100fa7520,&DAT_100c24340,
                  PTR_Combine__Combine__Publishers__ReceiveOn<undefined,undefined>_>Combine__Publisher_100ea9730
                 );
    pAVar9 = (extension_Combine)::Combine::Publisher::_sink();
    _swift_release(puVar4);
    (**(code **)(lVar15 + 8))(lVar16,puVar2);
    uVar10 = *(undefined8 *)(unaff_x20 + _TtC5Paste19V5WhatsNewViewModel::progressObserver);
    *(AnyCancellable **)(unaff_x20 + _TtC5Paste19V5WhatsNewViewModel::progressObserver) = pAVar9;
    _swift_release(uVar10);
    TVar11 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar11.unknown + -8) + 0x38))(puVar13,1,1,TVar11.unknown);
    this = Swift::MainActor::typeMetadataAccessor();
    puVar1 = PTR_typeMetadataAccessor_100eaec10;
    pMVar12 = unaff_x20;
    _swift_retain();
    pMVar12 = Swift::MainActor::get_shared(this,pMVar12);
    puVar8 = &DAT_100fa6bb0;
    FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
    puVar1 = &DAT_100eb0bc8;
    _swift_allocObject(&DAT_100eb0bc8,0x30,7);
    *(MainActor **)(puVar1 + 0x10) = pMVar12;
    *(undefined8 **)(puVar1 + 0x18) = puVar8;
    *(ID *)(puVar1 + 0x20) = IVar5;
    *(MainActor **)(puVar1 + 0x28) = unaff_x20;
    FUN_100020d34(0,0,puVar13,&DAT_100c24398,puVar1);
    _swift_release();
    return;
  }
  FUN_10001f5c8();
  return;
}



/* Address: 0x100020a20 | FUN_100020a20 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100020a20(undefined8 param_1,long param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  undefined8 *puVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  puVar5 = PTR_typeMetadataAccessor_100eaec10;
  pMVar1 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  puVar2 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar5,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/V5WhatsNewViewModel.swift",0x1f,1,0x2c,UVar3.unknown,puVar2);
  }
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    puVar5 = &DAT_100c242e0;
    _swift_getKeyPath(&DAT_100c242e0);
    puVar6 = &DAT_100c24308;
    _swift_getKeyPath(&DAT_100c24308);
    uStack_50 = 0;
    local_48 = 0;
    local_58 = param_3;
    Combine::Published::_set_subscript((Published *)pMVar1,&local_58,param_2,puVar5,puVar6);
    _swift_release(pMVar1);
    return;
  }
  _swift_release(pMVar1);
  return;
}



/* Address: 0x100020b44 | FUN_100020b44 */

void FUN_100020b44(void)

{
  undefined *puVar1;
  MainActor *pMVar2;
  undefined8 *puVar3;
  UnownedSerialExecutor UVar4;
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x30) = in_x4;
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  puVar1 = PTR_typeMetadataAccessor_100eaec10;
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  *(MainActor **)(unaff_x22 + 0x38) = pMVar2;
  puVar3 = &DAT_100fa6bb0;
  FUN_100003a00(&DAT_100fa6bb0,puVar1,PTR_Swift__Swift__MainActor_>Swift__Actor_100eaec18);
  *(undefined8 **)(unaff_x22 + 0x40) = puVar3;
  UVar4 = Swift::Actor::get_unownedExecutor();
  _swift_task_switch(FUN_100020bd8,UVar4.unknown,puVar3);
  return;
}



/* Address: 0x100020bd8 | FUN_100020bd8 */

void FUN_100020bd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ID IVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  IVar3 = 0;
  FUN_100342c98();
  _objc_allocWithZone();
  IVar3 = objc_stub::init(IVar3);
  *(ID *)(unaff_x22 + 0x48) = IVar3;
  plVar4 = (long *)0x380;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100020c54;
  FUN_10033e968(uVar1,uVar2,*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x100020c54 | FUN_100020c54 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100020c54(undefined8 param_1,undefined8 param_2,byte param_3)

{
  undefined8 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  Published *pPVar2;
  undefined *puVar3;
  long unaff_x20;
  long *unaff_x22;
  long lVar4;
  long lVar5;
  
  lVar5 = *unaff_x22;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar5 + 0x50));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar5 + 0x30);
    _swift_release(*(undefined8 *)(lVar5 + 0x38));
    pPVar2 = (Published *)&DAT_100c242e0;
    _swift_getKeyPath(&DAT_100c242e0);
    puVar3 = &DAT_100c24308;
    _swift_getKeyPath(&DAT_100c24308);
    *(undefined8 *)(lVar5 + 0x10) = param_1;
    *(undefined8 *)(lVar5 + 0x18) = param_2;
    *(byte *)(lVar5 + 0x20) = param_3 | 0x40;
    _swift_retain(uVar1);
    Combine::Published::_set_subscript(pPVar2,(undefined8 *)(lVar5 + 0x10),uVar1,pPVar2,puVar3);
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
  else {
    _swift_release(*(undefined8 *)(lVar5 + 0x38));
    UNRECOVERED_JUMPTABLE = *(code **)(lVar4 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100020d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}


