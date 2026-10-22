/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100847730 | FUN_100847730 */

undefined8 * FUN_100847730(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1008477c4 | FUN_1008477c4 */

undefined8 * FUN_1008477c4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  _swift_bridgeObjectRelease(param_1[1]);
  uVar1 = param_1[2];
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_1[3]);
  uVar1 = param_1[4];
  uVar2 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x100847820 | FUN_100847820 */

undefined1  [16] FUN_100847820(void)

{
  return ZEXT816(0x100f06240);
}



/* Address: 0x100847830 | FUN_100847830 */

void FUN_100847830(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 *param_5,undefined8 param_6,ulong param_7)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = param_5;
  uVar3 = param_6;
  thunk_FUN_1007ff8e4();
  if (((uint)param_4 & 0xff00) != 0x200) {
    uVar2 = param_2;
    FUN_1000f4a4c(param_2,param_3,param_4);
    FUN_1007fb2a0(param_2,param_3,param_4);
    if (((uint)uVar2 & 0xff) != ((uint)param_7 & 0xff)) {
      FUN_1007fb2d8(param_2,param_3,param_4);
      thunk_FUN_1007ff8e4();
      puVar1 = param_5;
      FUN_10080a3bc();
      _swift_allocError(&DAT_100f05368,puVar1,0,0);
      *puVar1 = param_5;
      puVar1[1] = param_6;
      puVar1[2] = param_7 & 0xff;
      puVar1[3] = 0;
      *(undefined1 *)(puVar1 + 4) = 1;
      _swift_willThrow();
      _swift_bridgeObjectRelease(uVar3);
      return;
    }
    param_4 = (ulong)((uint)param_4 & 0x1ff);
  }
  *param_1 = puVar1;
  param_1[1] = uVar3;
  param_1[2] = param_2;
  param_1[3] = param_3;
  *(short *)(param_1 + 4) = (short)param_4;
  return;
}



/* Address: 0x100847968 | FUN_100847968 */

void FUN_100847968(void)

{
  UUID UVar1;
  undefined *puVar2;
  
  if (DAT_100fe7510 != (undefined *)0x0) {
    return;
  }
  UVar1 = Foundation::UUID::typeMetadataAccessor();
  puVar2 = PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518;
  _swift_getWitnessTable(PTR_Foundation__Foundation__UUID_>Swift__Hashable_100ea7518,UVar1.unknown);
  DAT_100fe7510 = puVar2;
  return;
}



/* Address: 0x1008479ac | FUN_1008479ac */

long FUN_1008479ac(long param_1,long param_2)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar6 = 0;
  lVar7 = 0;
  lVar8 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar3 = -lVar8;
  uVar4 = 0xffffffffffffffff;
  if (uVar3 < 0x40) {
    uVar4 = ~(-1L << (uVar3 & 0x3f));
  }
  uVar4 = uVar4 & *(ulong *)(param_1 + 0x40);
  while( true ) {
    for (; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4) {
      uVar3 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
      uVar3 = (uVar3 & 0xcccccccccccccccc) >> 2 | (uVar3 & 0x3333333333333333) << 2;
      uVar3 = (uVar3 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar3 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar3 = (uVar3 & 0xff00ff00ff00ff00) >> 8 | (uVar3 & 0xff00ff00ff00ff) << 8;
      uVar3 = (uVar3 & 0xffff0000ffff0000) >> 0x10 | (uVar3 & 0xffff0000ffff) << 0x10;
      lVar5 = *(long *)(*(long *)(*(long *)(param_1 + 0x38) +
                                  LZCOUNT(uVar3 >> 0x20 | uVar3 << 0x20) * 8 + lVar6 * 0x200) + 0x10
                       );
      bVar2 = SCARRY8(lVar7,lVar5);
      lVar7 = lVar7 + lVar5;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100847aa0);
        (*pcVar1)();
      }
    }
    bVar2 = SCARRY8(lVar6,1);
    lVar6 = lVar6 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100847a9c);
      (*pcVar1)();
    }
    if ((long)(0x3fU - lVar8 >> 6) <= lVar6) break;
    uVar4 = ((ulong *)(param_1 + 0x40))[lVar6];
  }
  _swift_bridgeObjectRetain();
  FUN_10000c650();
  if (!SCARRY8(lVar7,*(long *)(param_2 + 0x10))) {
    return lVar7 + *(long *)(param_2 + 0x10);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100847aa4);
  (*pcVar1)();
}



/* Address: 0x100847aa4 | thunk_FUN_10000862c */

void thunk_FUN_10000862c(void)

{
  thunk_FUN_10000862c();
  return;
}



/* Address: 0x100847aa8 | FUN_100847aa8 */

void FUN_100847aa8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  puVar1 = &DAT_100f062b8;
  _swift_allocObject(&DAT_100f062b8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  FUN_100847cc8(param_1,&stack0xffffffffffffffb0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),
                FUN_100847c28,puVar1,param_4,param_5);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100847b64 | FUN_100847b64 */

undefined1  [16]
FUN_100847b64(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_40;
  undefined8 local_38;
  
  local_38 = param_3;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_1);
  FUN_1007ffd94();
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_2);
  uVar1 = param_4;
  _swift_isUniquelyReferenced_nonNull_native(param_4);
  local_40 = param_4;
  FUN_100800c08(param_2,FUN_100800294,0,uVar1,&local_40);
  _swift_bridgeObjectRelease(param_2);
  auVar2._8_8_ = local_40;
  auVar2._0_8_ = local_38;
  return auVar2;
}



/* Address: 0x100847bfc | FUN_100847bfc */

void FUN_100847bfc(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100847c28 | FUN_100847c28 */

void FUN_100847c28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100847b64(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100847c30 | FUN_100847c30 */

void FUN_100847c30(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  FUN_100847cc8(param_1,&stack0xffffffffffffffb0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,
                param_3,param_4,param_5);
  _swift_retain(param_3);
  return;
}



/* Address: 0x100847cc8 | FUN_100847cc8 */

void FUN_100847cc8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  lVar1 = 0;
  FUN_100847d20(0,param_5,param_6);
                    /* WARNING: Could not recover jumptable at 0x000100847d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar1 + 0x24),param_2,param_5);
  return;
}



/* Address: 0x100847d20 | FUN_100847d20 */

void FUN_100847d20(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100847d2c | FUN_100847d2c */

undefined1  [16] FUN_100847d2c(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  Swift::_StringGuts::grow(0x20,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar2 = *(char **)(param_1 + 0x10);
  pvVar3 = *(void **)(param_1 + 0x18);
  (**(code **)((long)pvVar3 + 8))((long)*(int *)(param_1 + 0x24));
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(pvVar3);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x5d;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  auVar1._8_8_ = 0x8000000100db1fd0;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Address: 0x100847dd0 | FUN_100847dd0 */

void FUN_100847dd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  (*(code *)*unaff_x20)();
  (**(code **)(*(long *)(param_5 + 0x18) + 0x10))(&local_88);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = uStack_70;
    param_1[2] = local_78;
    *(undefined2 *)(param_1 + 4) = local_68;
  }
  return;
}



/* Address: 0x100847e84 | FUN_100847e84 */

void FUN_100847e84(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,long param_7)

{
  int iVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  int *piVar5;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  (*(code *)*unaff_x20)();
  *(undefined8 *)(unaff_x22 + 0x40) = param_4;
  *(undefined8 *)(unaff_x22 + 0x48) = param_5;
  uVar2 = *(undefined8 *)(param_7 + 0x10);
  lVar3 = *(long *)(param_7 + 0x18);
  piVar5 = *(int **)(lVar3 + 0x18);
  iVar1 = *piVar5;
  plVar4 = (long *)(ulong)(uint)piVar5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100847f64;
                    /* WARNING: Could not recover jumptable at 0x000100847f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar5))
            (unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,uVar2,
             lVar3);
  return;
}



/* Address: 0x100847f64 | FUN_100847f64 */

void FUN_100847f64(void)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar4 = *unaff_x22;
  uVar5 = *(undefined8 *)(lVar4 + 0x48);
  uVar2 = *(undefined8 *)(lVar4 + 0x40);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x50));
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar5);
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar4 + 0x38);
    uVar2 = *(undefined8 *)(lVar4 + 0x18);
    uVar5 = *(undefined8 *)(lVar4 + 0x10);
    uVar7 = *(undefined8 *)(lVar4 + 0x28);
    uVar6 = *(undefined8 *)(lVar4 + 0x20);
    *(undefined2 *)(puVar1 + 4) = *(undefined2 *)(lVar4 + 0x30);
    puVar1[1] = uVar2;
    *puVar1 = uVar5;
    puVar1[3] = uVar7;
    puVar1[2] = uVar6;
  }
                    /* WARNING: Could not recover jumptable at 0x000100847fd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100847fdc | FUN_100847fdc */

void FUN_100847fdc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9,undefined8 param_10)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  (*(code *)*unaff_x20)();
  *(undefined8 *)(unaff_x22 + 0x10) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_5;
  uVar2 = *(undefined8 *)(param_9 + 0x10);
  piVar4 = *(int **)(*(long *)(param_9 + 0x18) + 0x20);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008480c0;
                    /* WARNING: Could not recover jumptable at 0x0001008480bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,param_8,
             param_10,uVar2);
  return;
}



/* Address: 0x1008480c0 | FUN_1008480c0 */

void FUN_1008480c0(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  long lVar4;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010084811c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar4 + 8))();
  return;
}



/* Address: 0x100848120 | FUN_100848120 */

void FUN_100848120(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *(long *)(param_2 + 0x18);
  pcVar4 = *(code **)(lVar3 + 0x28);
  param_1[3] = &DAT_100f063f0;
  param_1[4] = &PTR_PTR_100f06408;
  puVar1 = &DAT_100f062e0;
  _swift_allocObject(&DAT_100f062e0,0x48,7);
  *param_1 = puVar1;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  uVar6 = unaff_x20[1];
  uVar5 = *unaff_x20;
  _swift_retain(unaff_x20[1]);
  (*pcVar4)(puVar1 + 0x20,uVar2,lVar3);
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  return;
}



/* Address: 0x1008481cc | FUN_1008481cc */

void FUN_1008481cc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008481f8 | FUN_1008481f8 */

void FUN_1008481f8(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
  int iVar1;
  long *plVar2;
  int *piVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  long lVar5;
  
  uVar4 = *(undefined8 *)(param_6 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x20) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_7;
  lVar5 = *(long *)(param_6 + 0x18);
  *(long *)(unaff_x22 + 0x30) = lVar5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_4;
  *(undefined8 *)(unaff_x22 + 0x40) = param_5;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  piVar3 = *(int **)(lVar5 + 0x30);
  iVar1 = *piVar3;
  plVar2 = (long *)(ulong)(uint)piVar3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10082d628;
                    /* WARNING: Could not recover jumptable at 0x0001008482c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar3))
            (param_1,param_2,param_3 & 0xcfffffffffffffff,&UNK_100c7ce60,unaff_x22 + 0x10,param_7,
             uVar4,lVar5);
  return;
}



/* Address: 0x1008482c4 | FUN_1008482c4 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100848440 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1008482c4(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  int *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  ulong uVar9;
  long unaff_x22;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar2 = 0;
  FUN_100847d20(0,param_8,param_10);
  lVar10 = *(long *)(lVar2 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar3 = lVar11 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x60) = uVar3;
  FUN_100848dd4(param_4,unaff_x22 + 0x38);
  (**(code **)(lVar10 + 0x10))(uVar3,param_7,lVar2);
  uVar9 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar12 = uVar9 + 0x28 & (uVar9 ^ 0xffffffffffffffff);
  puVar4 = &DAT_100f06430;
  _swift_allocObject(&DAT_100f06430,uVar12 + lVar11,uVar9 | 7);
  *(undefined8 *)(puVar4 + 0x10) = param_8;
  *(undefined8 *)(puVar4 + 0x18) = param_9;
  *(undefined8 *)(puVar4 + 0x20) = param_10;
  (**(code **)(lVar10 + 0x20))(puVar4 + uVar12,uVar3,lVar2);
  puVar5 = &DAT_100f06458;
  _swift_allocObject(&DAT_100f06458,0x20,7);
  *(undefined **)(puVar5 + 0x10) = &DAT_100c7cf58;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  puVar4 = &DAT_100fe7818;
  FUN_1000f7830(&DAT_100fe7818,&DAT_100c7cf70);
  *(undefined **)(unaff_x22 + 0x28) = puVar4;
  FUN_10084900c();
  *(undefined **)(unaff_x22 + 0x30) = puVar4;
  lVar2 = unaff_x22 + 0x10;
  FUN_10000cbb0(lVar2);
  puVar4 = &DAT_100fe71b0;
  FUN_1000f7830(&DAT_100fe71b0,&DAT_100c7bac0);
  puVar6 = &DAT_100fe71b8;
  FUN_1000f7830(&DAT_100fe71b8,&DAT_100c7c6d0);
  puVar7 = puVar6;
  FUN_10084905c();
  Swift::AsyncMapSequence::_init(lVar2,puVar7,&DAT_100c7cf68,puVar5,puVar4,puVar6,puVar7);
  iVar1 = *param_5;
  plVar8 = (long *)(ulong)(uint)param_5[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)FUN_1008484a8;
                    /* WARNING: Could not recover jumptable at 0x0001008484a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_5))
            (plVar8,param_1,param_2,param_3 & 0xcfffffffffffffff,unaff_x22 + 0x10);
  return;
}



/* Address: 0x1008484a8 | FUN_1008484a8 */

void FUN_1008484a8(void)

{
  undefined8 uVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x60);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x68));
  FUN_1008490ac(lVar2 + 0x10);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100848500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x100848504 | FUN_100848504 */

void FUN_100848504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long *plVar7;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x38);
  plVar7 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1005c804c;
  FUN_1008482c4(plVar7,param_1,param_2,param_3,param_4,uVar5,uVar3,uVar6,uVar1,uVar4,uVar2);
  return;
}



/* Address: 0x1008485b4 | FUN_1008485b4 */

void FUN_1008485b4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined8 *)(unaff_x22 + 0x28) = param_6;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  _swift_task_switch(FUN_1008485d0,0,0);
  return;
}



/* Address: 0x1008485d0 | FUN_1008485d0 */

void FUN_1008485d0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  long unaff_x22;
  code *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  lVar3 = *(long *)(unaff_x22 + 0x28);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x10);
  puVar4 = *(undefined8 **)(unaff_x22 + 0x18);
  FUN_100847d20(0,uVar1,lVar3);
  pcVar5 = *(code **)(lVar3 + 0x28);
  uVar7 = puVar4[1];
  uVar6 = *puVar4;
  _swift_retain(puVar4[1]);
  (*pcVar5)(puVar2 + 2,uVar1,lVar3);
  puVar2[1] = uVar7;
  *puVar2 = uVar6;
                    /* WARNING: Could not recover jumptable at 0x000100848660. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100848664 | FUN_100848664 */

void FUN_100848664(undefined8 *param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  param_1[3] = &DAT_100f063f0;
  param_1[4] = &PTR_PTR_100f06408;
  puVar2 = &DAT_100f062e0;
  _swift_allocObject(&DAT_100f062e0,0x48,7);
  *param_1 = puVar2;
  iVar1 = *param_3;
  plVar3 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
                    /* WARNING: Could not recover jumptable at 0x000100848714. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar3,puVar2 + 0x10,param_2);
  return;
}



/* Address: 0x100848718 | thunk_FUN_100847d2c */

void thunk_FUN_100847d2c(void)

{
  FUN_100847d2c();
  return;
}



/* Address: 0x10084871c | FUN_10084871c */

void FUN_10084871c(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined2 local_28;
  
  FUN_100847dd0(&local_48);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_40;
    *param_1 = local_48;
    param_1[3] = uStack_30;
    param_1[2] = local_38;
    *(undefined2 *)(param_1 + 4) = local_28;
  }
  return;
}



/* Address: 0x100848760 | FUN_100848760 */

void FUN_100848760(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100834cd8;
  FUN_100847e84(plVar1,unaff_x22 + 0x10,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6
                ,param_7);
  return;
}



/* Address: 0x100848800 | FUN_100848800 */

void FUN_100848800(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100847fdc(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x1008488b8 | thunk_FUN_100848120 */

void thunk_FUN_100848120(void)

{
  FUN_100848120();
  return;
}



/* Address: 0x1008488bc | FUN_1008488bc */

void FUN_1008488bc(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1008481f8(plVar1,param_1,param_2,param_3 & 0xcfffffffffffffff,param_4,param_5,param_7,param_6)
  ;
  return;
}



/* Address: 0x10084895c | FUN_10084895c */

undefined1  [16] FUN_10084895c(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  long unaff_x20;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  Swift::_StringGuts::grow(0x20,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar2 = *(char **)(unaff_x20 + 0x28);
  pvVar3 = *(void **)(unaff_x20 + 0x30);
  FUN_100004640(unaff_x20 + 0x10,pcVar2);
  (**(code **)((long)pvVar3 + 8))();
  SVar4.bridgeObject = pvVar3;
  SVar4.str = pcVar2;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar4,SVar6);
  _swift_bridgeObjectRelease(pvVar3);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x5d;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar5,SVar7);
  auVar1._8_8_ = 0x8000000100db1fd0;
  auVar1._0_8_ = 0xd00000000000001d;
  return auVar1;
}



/* Address: 0x100848a0c | FUN_100848a0c */

void FUN_100848a0c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined2 local_68;
  
  lVar1 = unaff_x20[6];
  FUN_100004640(unaff_x20 + 2,unaff_x20[5]);
  (*(code *)*unaff_x20)(param_2,param_3);
  (**(code **)(lVar1 + 0x10))(&local_88);
  _swift_bridgeObjectRelease(param_3);
  _swift_bridgeObjectRelease(param_2);
  if (unaff_x21 == 0) {
    param_1[1] = uStack_80;
    *param_1 = local_88;
    param_1[3] = uStack_70;
    param_1[2] = local_78;
    *(undefined2 *)(param_1 + 4) = local_68;
  }
  return;
}



/* Address: 0x100848adc | FUN_100848adc */

undefined1  [16] FUN_100848adc(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  long unaff_x20;
  String SVar1;
  String SVar2;
  String SVar3;
  String SVar4;
  
  Swift::_StringGuts::grow(0x20,param_2);
  SVar1.bridgeObject = (void *)0x8000000100db1fd0;
  SVar1.str = (char *)0xd00000000000001d;
  SVar3.bridgeObject = param_4;
  SVar3.str = param_3;
  Swift::String::append(SVar1,SVar3);
  Swift::DefaultStringInterpolation::_appendInterpolation
            (unaff_x20 + *(int *)(param_1 + 0x24),*(undefined8 *)(param_1 + 0x10));
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = (char *)0x5d;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x100848b70 | thunk_FUN_100848adc */

void thunk_FUN_100848adc(void)

{
  FUN_100848adc();
  return;
}



/* Address: 0x100848b74 | FUN_100848b74 */

undefined1  [16] FUN_100848b74(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  char *pcVar3;
  long unaff_x20;
  long lVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  undefined8 local_40;
  undefined8 local_38;
  
  pcVar3 = *(char **)(param_1 + 0x10);
  lVar4 = (long)&local_40 - (*(long *)(*(long *)(pcVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar2 = pcVar3;
  (**(code **)(*(long *)(pcVar3 + -8) + 0x10))(lVar4,unaff_x20 + *(int *)(param_1 + 0x24));
  SVar5 = Swift::String::_init(lVar4,pcVar3);
  local_40 = 0;
  local_38 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x20,(_StringGuts)SVar5.bridgeObject);
  _swift_bridgeObjectRelease(local_38);
  local_40 = 0xd00000000000001d;
  local_38 = 0x8000000100db1fd0;
  SVar6.bridgeObject = param_4;
  SVar6.str = pcVar2;
  Swift::String::append(SVar5,SVar6);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  SVar5.bridgeObject = (void *)0xe100000000000000;
  SVar5.str = (char *)0x5d;
  SVar7.bridgeObject = param_4;
  SVar7.str = pcVar2;
  Swift::String::append(SVar5,SVar7);
  auVar1._8_8_ = local_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100848c44 | thunk_FUN_100848b74 */

void thunk_FUN_100848b74(void)

{
  FUN_100848b74();
  return;
}



/* Address: 0x100848c48 | FUN_100848c48 */

void FUN_100848c48(void)

{
  FUN_100848c50(0);
  return;
}



/* Address: 0x100848c50 | FUN_100848c50 */

void FUN_100848c50(void)

{
  undefined8 uVar1;
  
  if (DAT_100fe7810 != 0) {
    return;
  }
  uVar1 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,&DAT_100f044c0,&DAT_100f044c0);
  DAT_100fe7810 = uVar1;
  return;
}



/* Address: 0x100848c9c | FUN_100848c9c */

void FUN_100848c9c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 8));
  FUN_100004594(param_1 + 0x10);
  return;
}



/* Address: 0x100848cc4 | FUN_100848cc4 */

undefined8 * FUN_100848cc4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  lVar4 = param_2[5];
  param_1[6] = param_2[6];
  param_1[5] = lVar4;
  pcVar2 = (code *)**(undefined8 **)(lVar4 + -8);
  _swift_retain(uVar1);
  (*pcVar2)(param_1 + 2,param_2 + 2,lVar4);
  return param_1;
}



/* Address: 0x100848d24 | FUN_100848d24 */

undefined8 * FUN_100848d24(undefined8 *param_1,undefined8 *param_2)

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
  FUN_10008820c(param_1 + 2,param_2 + 2);
  return param_1;
}



/* Address: 0x100848d78 | FUN_100848d78 */

undefined8 * FUN_100848d78(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  FUN_100004594(param_1 + 2);
  uVar1 = param_2[2];
  uVar3 = param_2[5];
  uVar2 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  param_1[5] = uVar3;
  param_1[4] = uVar2;
  param_1[6] = param_2[6];
  return param_1;
}



/* Address: 0x100848dc4 | FUN_100848dc4 */

undefined1  [16] FUN_100848dc4(void)

{
  return ZEXT816(0x100f063f0);
}



/* Address: 0x100848dd4 | FUN_100848dd4 */

undefined8 FUN_100848dd4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe71b0;
  FUN_1000f7830(&DAT_100fe71b0,&DAT_100c7bac0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100848e24 | FUN_100848e24 */

void FUN_100848e24(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  ulong uVar4;
  
  lVar3 = *(long *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_100847d20(0,lVar3,*(undefined8 *)(unaff_x20 + 0x20));
  uVar4 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  lVar1 = unaff_x20 + (uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff));
  _swift_release(*(undefined8 *)(lVar1 + 8));
  (**(code **)(*(long *)(lVar3 + -8) + 8))(lVar1 + *(int *)(lVar2 + 0x24),lVar3);
  _swift_deallocObject();
  return;
}



/* Address: 0x100848eb0 | FUN_100848eb0 */

void FUN_100848eb0(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x20);
  lVar3 = 0;
  FUN_100847d20(0,uVar1,uVar6);
  uVar5 = (ulong)*(byte *)(*(long *)(lVar3 + -8) + 0x50);
  plVar4 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_1005c804c;
  FUN_1008485b4(plVar4,param_1,param_2,unaff_x20 + (uVar5 + 0x28 & (uVar5 ^ 0xffffffffffffffff)),
                uVar1,uVar2,uVar6);
  return;
}



/* Address: 0x100848f60 | FUN_100848f60 */

void FUN_100848f60(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100848f84 | FUN_100848f84 */

void FUN_100848f84(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005c804c;
  FUN_100848664(plVar3,param_1,param_2,uVar1,uVar2);
  return;
}



/* Address: 0x10084900c | FUN_10084900c */

void FUN_10084900c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fe7820 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe7818;
  FUN_1000f8b08(&DAT_100fe7818,&DAT_100c7cf70);
  puVar2 = PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68;
  _swift_getWitnessTable
            (PTR_Swift__Swift__AsyncMapSequence<undefined,undefined>_>Swift__AsyncSequence_100eaef68
             ,puVar1);
  DAT_100fe7820 = puVar2;
  return;
}



/* Address: 0x10084905c | FUN_10084905c */

void FUN_10084905c(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_100fe7440 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fe71b0;
  FUN_1000f8b08(&DAT_100fe71b0,&DAT_100c7bac0);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c7d4e0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c7d4e0,puVar1);
  DAT_100fe7440 = pTVar2;
  return;
}



/* Address: 0x1008490ac | FUN_1008490ac */

undefined8 FUN_1008490ac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe71b0;
  FUN_1000f7830(&DAT_100fe71b0,&DAT_100c7bac0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008490f4 | thunk_FUN_100848c48 */

void thunk_FUN_100848c48(void)

{
  FUN_100848c48();
  return;
}



/* Address: 0x1008490f8 | FUN_1008490f8 */

uint FUN_1008490f8(undefined8 param_1,undefined8 param_2,code *param_3,long param_4,char param_5,
                  undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  bool bVar1;
  
  if (param_5 == '\0') {
    bVar1 = Swift::Set::contains(param_1,param_3,param_6,param_8);
    return (uint)bVar1;
  }
  if (param_5 == '\x01') {
    (*param_3)();
    return (uint)param_1 & 1;
  }
  return (uint)(param_4 == 0 && param_3 == (code *)0x0);
}



/* Address: 0x10084914c | thunk_FUN_100849180 */

void thunk_FUN_100849180(void)

{
  FUN_100849180();
  return;
}



/* Address: 0x100849150 | FUN_100849150 */

void FUN_100849150(undefined8 param_1,undefined8 param_2,char param_3)

{
  if (param_3 == '\x01') {
    _swift_retain(param_2);
    return;
  }
  if (param_3 == '\0') {
    _swift_bridgeObjectRetain();
    return;
  }
  return;
}



/* Address: 0x100849170 | FUN_100849170 */

void FUN_100849170(undefined8 *param_1)

{
  FUN_100837f50(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x100849180 | FUN_100849180 */

undefined8 * FUN_100849180(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_100849150(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1008491c8 | FUN_1008491c8 */

undefined8 * FUN_1008491c8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_100849150(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_100837f50(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x10084921c | FUN_10084921c */

undefined8 * FUN_10084921c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_100837f50(uVar3,uVar4,uVar2);
  return param_1;
}


