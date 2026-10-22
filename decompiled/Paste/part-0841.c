/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100929f00 | FUN_100929f00 */

void FUN_100929f00(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100929f08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100929f0c | FUN_100929f0c */

void FUN_100929f0c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100929f2c,0,0);
  return;
}



/* Address: 0x100929f2c | FUN_100929f2c */

void FUN_100929f2c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar5 = &DAT_100f18078;
  _swift_allocObject(&DAT_100f18078,0x30,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  plVar6 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100929fec;
  FUN_1009162e4(FUN_1009162e4,FUN_10092d1e4,puVar5);
  return;
}



/* Address: 0x100929fec | FUN_100929fec */

void FUN_100929fec(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = thunk_FUN_100929054;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x10092a058 | FUN_10092a058 */

void FUN_10092a058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092a074,0,0);
  return;
}



/* Address: 0x10092a074 | FUN_10092a074 */

void FUN_10092a074(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f180a0;
  _swift_allocObject(&DAT_100f180a0,0x20,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xc0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10092a120;
  FUN_100916dd0(FUN_10092d248,puVar3);
  return;
}



/* Address: 0x10092a120 | FUN_10092a120 */

void FUN_10092a120(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010092a184. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092a188 | FUN_10092a188 */

void FUN_10092a188(ulong *param_1,char *param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  long lVar12;
  long unaff_x21;
  String SVar13;
  tuple2_conflict1 tVar14;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  char *local_a8;
  char *pcStack_a0;
  char *local_98;
  long lStack_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uVar11;
  
  iVar2 = (int)&local_d0;
  pcVar4 = (char *)0x400;
  _swift_slowAlloc(0x400,0xffffffffffffffff);
  lVar12 = 0x400;
  FUN_10095f2e4(param_2,param_3,pcVar4);
  if (unaff_x21 == 0) {
    pcVar10 = pcVar4 + 0x400;
    pcVar8 = pcVar4;
    FUN_100927c2c();
    if (pcVar10 == (char *)0x0) {
      if (param_2 != (char *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3b8);
        (*pcVar1)();
      }
      if (pcVar8 != (char *)0x0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3bc);
        (*pcVar1)();
      }
      tVar14 = Swift::String::_fromUTF8Repairing
                         ((UnsafeBufferPointer<__int8>)0x0,(String)(ZEXT816(0) << 0x40));
      uVar11 = tVar14._16_8_;
      pcVar9 = tVar14.result.bridgeObject;
      pcVar5 = tVar14.result.str;
    }
    else {
      if ((char *)(lVar12 - (long)pcVar10) < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3a8);
        (*pcVar1)();
      }
      if ((char *)(lVar12 - (long)pcVar10) < pcVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3ac);
        (*pcVar1)();
      }
      if (SCARRY8((long)param_2,(long)pcVar8 - (long)param_2)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3b0);
        (*pcVar1)();
      }
      if ((long)(param_2 + ((long)pcVar8 - (long)param_2)) < (long)param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10092a3b4);
        (*pcVar1)();
      }
      SVar13.bridgeObject = pcVar10;
      SVar13.str = param_2 + ((long)pcVar8 - (long)param_2) + -(long)param_2;
      tVar14 = Swift::String::_fromUTF8Repairing
                         ((UnsafeBufferPointer<__int8>)(pcVar10 + (long)param_2),SVar13);
      uVar11 = tVar14._16_8_;
      pcVar9 = tVar14.result.bridgeObject;
      pcVar5 = tVar14.result.str;
    }
    if (pcVar9 == (char *)0x0) {
      puVar6 = &DAT_100fecdf8;
      local_a8 = param_2;
      pcStack_a0 = pcVar8;
      local_98 = pcVar10;
      lStack_90 = lVar12;
      FUN_1000f7830(&DAT_100fecdf8,&DAT_100c84dc0,uVar11);
      puVar7 = &DAT_100fece00;
      FUN_1000f7830(&DAT_100fece00,&DAT_100c84dc8);
      _swift_dynamicCast(&local_d0,&local_a8,puVar6,puVar7,6);
      if (iVar2 == 0) {
        local_b0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        FUN_1000fb4c4(&local_d0,&DAT_100fece08,&DAT_100c84dd0);
      }
      else {
        FUN_100076508(&local_d0,auStack_88);
        FUN_100004640(auStack_88,local_70);
        bVar3 = Swift::_HasContiguousBytes::get__providesContiguousBytesNoCopy();
        if (bVar3) {
          FUN_100004640(auStack_88,local_70);
          Swift::_HasContiguousBytes::_withUnsafeBytes();
          FUN_100004594(auStack_88);
          goto LAB_10092a370;
        }
        FUN_100004594(auStack_88);
      }
      FUN_10092b90c(param_2,pcVar8,pcVar10,lVar12);
      pcVar5 = param_2;
      pcVar9 = pcVar8;
    }
    *param_1 = (ulong)pcVar5;
    param_1[1] = (ulong)pcVar9;
  }
LAB_10092a370:
  _swift_slowDealloc(pcVar4,0xffffffffffffffff,0xffffffffffffffff);
  return;
}



/* Address: 0x10092a3bc | FUN_10092a3bc */

void FUN_10092a3bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092a3d8,0,0);
  return;
}



/* Address: 0x10092a3d8 | FUN_10092a3d8 */

void FUN_10092a3d8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f180c8;
  _swift_allocObject(&DAT_100f180c8,0x20,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10092a480;
  FUN_1009162e4(FUN_1009162e4,FUN_10092d25c,puVar3);
  return;
}



/* Address: 0x10092a480 | FUN_10092a480 */

void FUN_10092a480(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = thunk_FUN_100928d1c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x10092a4ec | FUN_10092a4ec */

void FUN_10092a4ec(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined2 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_5;
  *(undefined2 *)(unaff_x22 + 0x40) = param_4;
  *(undefined1 *)(unaff_x22 + 0x42) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092a510,0,0);
  return;
}



/* Address: 0x10092a510 | FUN_10092a510 */

void FUN_10092a510(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar4 = *(undefined2 *)(unaff_x22 + 0x40);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x42);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar5 = &DAT_100f180f0;
  _swift_allocObject(&DAT_100f180f0,0x2a,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar5;
  puVar5[0x10] = uVar3;
  *(undefined8 *)(puVar5 + 0x18) = uVar1;
  *(undefined8 *)(puVar5 + 0x20) = uVar2;
  *(undefined2 *)(puVar5 + 0x28) = uVar4;
  plVar6 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_10092a480;
  FUN_1009162e4(FUN_1009162e4,FUN_10092d1f8,puVar5);
  return;
}



/* Address: 0x10092a5d0 | FUN_10092a5d0 */

void FUN_10092a5d0(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  if ((param_1 & 1) != 0) {
    FUN_10095f4b0(param_2,param_3,param_4);
    return;
  }
  FUN_10095f3d0(param_2,param_3,param_4);
  return;
}



/* Address: 0x10092a60c | FUN_10092a60c */

void FUN_10092a60c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092a628,0,0);
  return;
}



/* Address: 0x10092a628 | FUN_10092a628 */

void FUN_10092a628(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f18118;
  _swift_allocObject(&DAT_100f18118,0x20,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xb0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10092a6d4;
  FUN_100917074(FUN_10092d270,puVar3);
  return;
}



/* Address: 0x10092a6d4 | FUN_10092a6d4 */

void FUN_10092a6d4(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x28);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x30));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010092a730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092a734 | FUN_10092a734 */

/* WARNING: Removing unreachable block (ram,0x00010092a7a0) */
/* WARNING: Removing unreachable block (ram,0x00010092ab04) */
/* WARNING: Removing unreachable block (ram,0x00010092aaac) */
/* WARNING: Removing unreachable block (ram,0x00010092a788) */
/* WARNING: Removing unreachable block (ram,0x00010092a790) */

void FUN_10092a734(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long unaff_x21;
  undefined8 uVar7;
  String SVar8;
  undefined8 local_470;
  undefined8 uStack_468;
  undefined8 uStack_460;
  undefined8 uStack_458;
  undefined8 local_450;
  undefined8 uStack_448;
  undefined8 uStack_440;
  undefined8 uStack_438;
  undefined8 local_430;
  undefined8 uStack_428;
  undefined8 uStack_420;
  undefined8 uStack_418;
  undefined8 local_410;
  undefined8 uStack_408;
  undefined8 uStack_400;
  undefined8 uStack_3f8;
  undefined8 local_3f0;
  undefined8 uStack_3e8;
  undefined8 uStack_3e0;
  undefined8 uStack_3d8;
  undefined8 local_3d0;
  undefined8 uStack_3c8;
  undefined8 uStack_3c0;
  undefined8 uStack_3b8;
  undefined8 local_3b0;
  undefined8 uStack_3a8;
  undefined8 uStack_3a0;
  undefined8 uStack_398;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined8 uStack_380;
  undefined8 uStack_378;
  undefined8 local_370;
  undefined8 uStack_368;
  undefined8 uStack_360;
  undefined8 uStack_358;
  undefined8 local_350;
  undefined8 uStack_348;
  undefined8 uStack_340;
  undefined8 uStack_338;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 uStack_320;
  undefined8 uStack_318;
  undefined8 local_310;
  undefined8 uStack_308;
  undefined8 uStack_300;
  undefined8 uStack_2f8;
  undefined8 local_2f0;
  undefined8 uStack_2e8;
  undefined8 uStack_2e0;
  undefined8 uStack_2d8;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined8 uStack_2c0;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 uStack_2a8;
  undefined8 uStack_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 uStack_280;
  undefined8 uStack_278;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined8 uStack_260;
  undefined8 uStack_258;
  undefined8 local_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  FUN_10095f590();
  if (unaff_x21 == 0) {
    puVar3 = param_2;
    FUN_10095f660();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    while (puVar3 != (undefined8 *)0x0) {
      uStack_468 = *(undefined8 *)((long)puVar3 + 0x1d);
      local_470 = *(undefined8 *)((long)puVar3 + 0x15);
      uStack_458 = *(undefined8 *)((long)puVar3 + 0x2d);
      uStack_460 = *(undefined8 *)((long)puVar3 + 0x25);
      uStack_448 = *(undefined8 *)((long)puVar3 + 0x3d);
      local_450 = *(undefined8 *)((long)puVar3 + 0x35);
      uStack_438 = *(undefined8 *)((long)puVar3 + 0x4d);
      uStack_440 = *(undefined8 *)((long)puVar3 + 0x45);
      uStack_428 = *(undefined8 *)((long)puVar3 + 0x5d);
      local_430 = *(undefined8 *)((long)puVar3 + 0x55);
      uStack_418 = *(undefined8 *)((long)puVar3 + 0x6d);
      uStack_420 = *(undefined8 *)((long)puVar3 + 0x65);
      uStack_408 = *(undefined8 *)((long)puVar3 + 0x7d);
      local_410 = *(undefined8 *)((long)puVar3 + 0x75);
      uStack_3f8 = *(undefined8 *)((long)puVar3 + 0x8d);
      uStack_400 = *(undefined8 *)((long)puVar3 + 0x85);
      uStack_3e8 = *(undefined8 *)((long)puVar3 + 0x9d);
      local_3f0 = *(undefined8 *)((long)puVar3 + 0x95);
      uStack_3d8 = *(undefined8 *)((long)puVar3 + 0xad);
      uStack_3e0 = *(undefined8 *)((long)puVar3 + 0xa5);
      uStack_3c8 = *(undefined8 *)((long)puVar3 + 0xbd);
      local_3d0 = *(undefined8 *)((long)puVar3 + 0xb5);
      uStack_3b8 = *(undefined8 *)((long)puVar3 + 0xcd);
      uStack_3c0 = *(undefined8 *)((long)puVar3 + 0xc5);
      uStack_3a8 = *(undefined8 *)((long)puVar3 + 0xdd);
      local_3b0 = *(undefined8 *)((long)puVar3 + 0xd5);
      uStack_398 = *(undefined8 *)((long)puVar3 + 0xed);
      uStack_3a0 = *(undefined8 *)((long)puVar3 + 0xe5);
      uStack_378 = *(undefined8 *)((long)puVar3 + 0x10d);
      uStack_380 = *(undefined8 *)((long)puVar3 + 0x105);
      uStack_388 = *(undefined8 *)((long)puVar3 + 0xfd);
      local_390 = *(undefined8 *)((long)puVar3 + 0xf5);
      uStack_368 = *(undefined8 *)((long)puVar3 + 0x11d);
      local_370 = *(undefined8 *)((long)puVar3 + 0x115);
      uStack_358 = *(undefined8 *)((long)puVar3 + 0x12d);
      uStack_360 = *(undefined8 *)((long)puVar3 + 0x125);
      uStack_348 = *(undefined8 *)((long)puVar3 + 0x13d);
      local_350 = *(undefined8 *)((long)puVar3 + 0x135);
      uStack_338 = *(undefined8 *)((long)puVar3 + 0x14d);
      uStack_340 = *(undefined8 *)((long)puVar3 + 0x145);
      uStack_328 = *(undefined8 *)((long)puVar3 + 0x15d);
      local_330 = *(undefined8 *)((long)puVar3 + 0x155);
      uStack_318 = *(undefined8 *)((long)puVar3 + 0x16d);
      uStack_320 = *(undefined8 *)((long)puVar3 + 0x165);
      uStack_308 = *(undefined8 *)((long)puVar3 + 0x17d);
      local_310 = *(undefined8 *)((long)puVar3 + 0x175);
      uStack_2f8 = *(undefined8 *)((long)puVar3 + 0x18d);
      uStack_300 = *(undefined8 *)((long)puVar3 + 0x185);
      uStack_2e8 = *(undefined8 *)((long)puVar3 + 0x19d);
      local_2f0 = *(undefined8 *)((long)puVar3 + 0x195);
      uStack_2d8 = *(undefined8 *)((long)puVar3 + 0x1ad);
      uStack_2e0 = *(undefined8 *)((long)puVar3 + 0x1a5);
      uStack_2c8 = *(undefined8 *)((long)puVar3 + 0x1bd);
      local_2d0 = *(undefined8 *)((long)puVar3 + 0x1b5);
      uStack_2b8 = *(undefined8 *)((long)puVar3 + 0x1cd);
      uStack_2c0 = *(undefined8 *)((long)puVar3 + 0x1c5);
      uStack_2a8 = *(undefined8 *)((long)puVar3 + 0x1dd);
      local_2b0 = *(undefined8 *)((long)puVar3 + 0x1d5);
      uStack_298 = *(undefined8 *)((long)puVar3 + 0x1ed);
      uStack_2a0 = *(undefined8 *)((long)puVar3 + 0x1e5);
      uStack_288 = *(undefined8 *)((long)puVar3 + 0x1fd);
      local_290 = *(undefined8 *)((long)puVar3 + 0x1f5);
      uStack_278 = *(undefined8 *)((long)puVar3 + 0x20d);
      uStack_280 = *(undefined8 *)((long)puVar3 + 0x205);
      uStack_268 = *(undefined8 *)((long)puVar3 + 0x21d);
      local_270 = *(undefined8 *)((long)puVar3 + 0x215);
      uStack_258 = *(undefined8 *)((long)puVar3 + 0x22d);
      uStack_260 = *(undefined8 *)((long)puVar3 + 0x225);
      uStack_248 = *(undefined8 *)((long)puVar3 + 0x23d);
      local_250 = *(undefined8 *)((long)puVar3 + 0x235);
      uStack_238 = *(undefined8 *)((long)puVar3 + 0x24d);
      uStack_240 = *(undefined8 *)((long)puVar3 + 0x245);
      uStack_228 = *(undefined8 *)((long)puVar3 + 0x25d);
      local_230 = *(undefined8 *)((long)puVar3 + 0x255);
      uStack_218 = *(undefined8 *)((long)puVar3 + 0x26d);
      uStack_220 = *(undefined8 *)((long)puVar3 + 0x265);
      uStack_208 = *(undefined8 *)((long)puVar3 + 0x27d);
      local_210 = *(undefined8 *)((long)puVar3 + 0x275);
      uStack_1f8 = *(undefined8 *)((long)puVar3 + 0x28d);
      uStack_200 = *(undefined8 *)((long)puVar3 + 0x285);
      uStack_1e8 = *(undefined8 *)((long)puVar3 + 0x29d);
      local_1f0 = *(undefined8 *)((long)puVar3 + 0x295);
      uStack_1d8 = *(undefined8 *)((long)puVar3 + 0x2ad);
      uStack_1e0 = *(undefined8 *)((long)puVar3 + 0x2a5);
      uStack_1c8 = *(undefined8 *)((long)puVar3 + 0x2bd);
      local_1d0 = *(undefined8 *)((long)puVar3 + 0x2b5);
      uStack_1b8 = *(undefined8 *)((long)puVar3 + 0x2cd);
      uStack_1c0 = *(undefined8 *)((long)puVar3 + 0x2c5);
      uStack_1a8 = *(undefined8 *)((long)puVar3 + 0x2dd);
      local_1b0 = *(undefined8 *)((long)puVar3 + 0x2d5);
      uStack_198 = *(undefined8 *)((long)puVar3 + 0x2ed);
      uStack_1a0 = *(undefined8 *)((long)puVar3 + 0x2e5);
      uStack_188 = *(undefined8 *)((long)puVar3 + 0x2fd);
      local_190 = *(undefined8 *)((long)puVar3 + 0x2f5);
      uStack_178 = *(undefined8 *)((long)puVar3 + 0x30d);
      uStack_180 = *(undefined8 *)((long)puVar3 + 0x305);
      uStack_168 = *(undefined8 *)((long)puVar3 + 0x31d);
      local_170 = *(undefined8 *)((long)puVar3 + 0x315);
      uStack_158 = *(undefined8 *)((long)puVar3 + 0x32d);
      uStack_160 = *(undefined8 *)((long)puVar3 + 0x325);
      uStack_148 = *(undefined8 *)((long)puVar3 + 0x33d);
      local_150 = *(undefined8 *)((long)puVar3 + 0x335);
      uStack_138 = *(undefined8 *)((long)puVar3 + 0x34d);
      uStack_140 = *(undefined8 *)((long)puVar3 + 0x345);
      uStack_128 = *(undefined8 *)((long)puVar3 + 0x35d);
      local_130 = *(undefined8 *)((long)puVar3 + 0x355);
      uStack_118 = *(undefined8 *)((long)puVar3 + 0x36d);
      uStack_120 = *(undefined8 *)((long)puVar3 + 0x365);
      uStack_108 = *(undefined8 *)((long)puVar3 + 0x37d);
      local_110 = *(undefined8 *)((long)puVar3 + 0x375);
      uStack_f8 = *(undefined8 *)((long)puVar3 + 0x38d);
      uStack_100 = *(undefined8 *)((long)puVar3 + 0x385);
      uStack_e8 = *(undefined8 *)((long)puVar3 + 0x39d);
      local_f0 = *(undefined8 *)((long)puVar3 + 0x395);
      uStack_d8 = *(undefined8 *)((long)puVar3 + 0x3ad);
      uStack_e0 = *(undefined8 *)((long)puVar3 + 0x3a5);
      uStack_c8 = *(undefined8 *)((long)puVar3 + 0x3bd);
      local_d0 = *(undefined8 *)((long)puVar3 + 0x3b5);
      uStack_b8 = *(undefined8 *)((long)puVar3 + 0x3cd);
      uStack_c0 = *(undefined8 *)((long)puVar3 + 0x3c5);
      uStack_a8 = *(undefined8 *)((long)puVar3 + 0x3dd);
      local_b0 = *(undefined8 *)((long)puVar3 + 0x3d5);
      uStack_98 = *(undefined8 *)((long)puVar3 + 0x3ed);
      uStack_a0 = *(undefined8 *)((long)puVar3 + 0x3e5);
      uStack_88 = *(undefined8 *)((long)puVar3 + 0x3fd);
      local_90 = *(undefined8 *)((long)puVar3 + 0x3f5);
      uStack_78 = *(undefined8 *)((long)puVar3 + 0x40d);
      uStack_80 = *(undefined8 *)((long)puVar3 + 0x405);
      SVar8 = Swift::String::init((UnsafePointer<__int8>)&local_470);
      uVar7 = *puVar3;
      uVar2 = *(undefined1 *)((long)puVar3 + 0x14);
      puVar4 = puVar6;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = puVar6;
      if (((ulong)puVar4 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_100903340(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
      }
      uVar1 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar1) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_100903340(puVar6,uVar1 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar6 + uVar1 * 0x20 + 0x20) = uVar7;
      puVar6[uVar1 * 0x20 + 0x28] = uVar2;
      *(String *)(puVar6 + uVar1 * 0x20 + 0x30) = SVar8;
      puVar3 = param_2;
      FUN_10095f660();
    }
    FUN_10095f718(param_2);
    *param_1 = puVar6;
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10092ab20 | FUN_10092ab20 */

void FUN_10092ab20(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092ab40,0,0);
  return;
}



/* Address: 0x10092ab40 | FUN_10092ab40 */

void FUN_10092ab40(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  long *plVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar5 = &DAT_100f18140;
  _swift_allocObject(&DAT_100f18140,0x30,7);
  *(undefined **)(unaff_x22 + 0x38) = puVar5;
  *(undefined8 *)(puVar5 + 0x10) = uVar2;
  *(undefined8 *)(puVar5 + 0x18) = uVar4;
  *(undefined8 *)(puVar5 + 0x20) = uVar1;
  *(undefined8 *)(puVar5 + 0x28) = uVar3;
  plVar6 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRetain(uVar3);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_100929fec;
  FUN_1009162e4(FUN_1009162e4,FUN_10092d20c,puVar5);
  return;
}



/* Address: 0x10092ac00 | FUN_10092ac00 */

void FUN_10092ac00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_10092ac1c,0,0);
  return;
}



/* Address: 0x10092ac1c | FUN_10092ac1c */

void FUN_10092ac1c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f18168;
  _swift_allocObject(&DAT_100f18168,0x20,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10092a480;
  FUN_1009162e4(FUN_1009162e4,FUN_10092d284,puVar3);
  return;
}



/* Address: 0x10092acc4 | thunk_FUN_10092b000 */

void thunk_FUN_10092b000(void)

{
  FUN_10092b000();
  return;
}



/* Address: 0x10092acc8 | FUN_10092acc8 */

void FUN_10092acc8(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x27) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x20) = 0x100000000000000;
    *(undefined8 *)(param_1 + 0x18) = 0;
    _swift_beginAccess(param_1 + 0x38,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10092ad8c | FUN_10092ad8c */

void FUN_10092ad8c(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x2f) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x28) = 0x100000000000000;
    _swift_beginAccess(param_1 + 0x40,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    uVar3 = *(undefined8 *)(param_1 + 0x48);
    uVar2 = *(undefined8 *)(param_1 + 0x50);
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10092ae4c | FUN_10092ae4c */

void FUN_10092ae4c(long param_1,undefined8 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_2e0 [24];
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 uStack_240;
  undefined1 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 uStack_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 uStack_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined1 local_100;
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  _swift_beginAccess(param_1 + 0x10,auStack_f8,1,0);
  uStack_78 = *(undefined8 *)(param_1 + 0x78);
  local_80 = *(undefined8 *)(param_1 + 0x70);
  uStack_68 = *(undefined8 *)(param_1 + 0x88);
  uStack_70 = *(undefined8 *)(param_1 + 0x80);
  uStack_58 = *(undefined8 *)(param_1 + 0x98);
  local_60 = *(undefined8 *)(param_1 + 0x90);
  local_50 = *(undefined1 *)(param_1 + 0xa0);
  uStack_b8 = *(undefined8 *)(param_1 + 0x38);
  local_c0 = *(undefined8 *)(param_1 + 0x30);
  uStack_a8 = *(undefined8 *)(param_1 + 0x48);
  uStack_b0 = *(undefined8 *)(param_1 + 0x40);
  uStack_98 = *(undefined8 *)(param_1 + 0x58);
  local_a0 = *(undefined8 *)(param_1 + 0x50);
  uStack_88 = *(undefined8 *)(param_1 + 0x68);
  uStack_90 = *(undefined8 *)(param_1 + 0x60);
  uStack_d8 = *(undefined8 *)(param_1 + 0x18);
  local_e0 = *(undefined8 *)(param_1 + 0x10);
  uStack_c8 = *(undefined8 *)(param_1 + 0x28);
  uStack_d0 = *(undefined8 *)(param_1 + 0x20);
  iVar1 = (int)&local_e0;
  FUN_1008fa584();
  uVar2 = 0;
  uVar4 = 0;
  uVar3 = 0;
  if (iVar1 == 1) {
    local_2c8 = param_2;
    FUN_1005b841c(&local_2c8);
    uStack_1c8 = uStack_260;
    local_1d0 = local_268;
    uStack_1b8 = uStack_250;
    uStack_1c0 = local_258;
    uStack_1a8 = uStack_240;
    local_1b0 = uStack_248;
    local_1a0 = local_238;
    uStack_208 = uStack_2a0;
    local_210 = local_2a8;
    uStack_1f8 = uStack_290;
    uStack_200 = local_298;
    uStack_1e8 = uStack_280;
    local_1f0 = local_288;
    uStack_1d8 = uStack_270;
    uStack_1e0 = local_278;
    uStack_228 = uStack_2c0;
    local_230 = local_2c8;
    uStack_218 = uStack_2b0;
    uStack_220 = local_2b8;
    FUN_100004520(&local_230);
    uStack_128 = *(undefined8 *)(param_1 + 0x78);
    local_130 = *(undefined8 *)(param_1 + 0x70);
    uStack_118 = *(undefined8 *)(param_1 + 0x88);
    uStack_120 = *(undefined8 *)(param_1 + 0x80);
    uStack_108 = *(undefined8 *)(param_1 + 0x98);
    local_110 = *(undefined8 *)(param_1 + 0x90);
    local_100 = *(undefined1 *)(param_1 + 0xa0);
    uStack_168 = *(undefined8 *)(param_1 + 0x38);
    local_170 = *(undefined8 *)(param_1 + 0x30);
    uStack_158 = *(undefined8 *)(param_1 + 0x48);
    uStack_160 = *(undefined8 *)(param_1 + 0x40);
    uStack_148 = *(undefined8 *)(param_1 + 0x58);
    local_150 = *(undefined8 *)(param_1 + 0x50);
    uStack_138 = *(undefined8 *)(param_1 + 0x68);
    uStack_140 = *(undefined8 *)(param_1 + 0x60);
    uStack_188 = *(undefined8 *)(param_1 + 0x18);
    local_190 = *(undefined8 *)(param_1 + 0x10);
    uStack_178 = *(undefined8 *)(param_1 + 0x28);
    uStack_180 = *(undefined8 *)(param_1 + 0x20);
    *(undefined8 *)(param_1 + 0x78) = uStack_1c8;
    *(undefined8 *)(param_1 + 0x70) = local_1d0;
    *(undefined8 *)(param_1 + 0x88) = uStack_1b8;
    *(undefined8 *)(param_1 + 0x80) = uStack_1c0;
    *(undefined8 *)(param_1 + 0x98) = uStack_1a8;
    *(undefined8 *)(param_1 + 0x90) = local_1b0;
    *(undefined1 *)(param_1 + 0xa0) = local_1a0;
    *(undefined8 *)(param_1 + 0x38) = uStack_208;
    *(undefined8 *)(param_1 + 0x30) = local_210;
    *(undefined8 *)(param_1 + 0x48) = uStack_1f8;
    *(undefined8 *)(param_1 + 0x40) = uStack_200;
    *(undefined8 *)(param_1 + 0x58) = uStack_1e8;
    *(undefined8 *)(param_1 + 0x50) = local_1f0;
    *(undefined8 *)(param_1 + 0x68) = uStack_1d8;
    *(undefined8 *)(param_1 + 0x60) = uStack_1e0;
    *(undefined8 *)(param_1 + 0x18) = uStack_228;
    *(undefined8 *)(param_1 + 0x10) = local_230;
    *(undefined8 *)(param_1 + 0x28) = uStack_218;
    *(undefined8 *)(param_1 + 0x20) = uStack_220;
    _swift_errorRetain(param_2);
    FUN_1000fb4c4(&local_190,&DAT_100fec428,&DAT_100c83b20);
    _swift_beginAccess(param_1 + 0xb8,auStack_2e0,1,0);
    uVar2 = *(undefined8 *)(param_1 + 0xb8);
    uVar4 = *(undefined8 *)(param_1 + 0xc0);
    uVar3 = *(undefined8 *)(param_1 + 200);
    *(undefined8 *)(param_1 + 0xc0) = 0;
    *(undefined8 *)(param_1 + 200) = 0;
    *(undefined8 *)(param_1 + 0xb8) = 0;
  }
  FUN_1006486f8(uVar2,uVar4,uVar3);
  FUN_100004550(uVar2,uVar4);
  _swift_bridgeObjectRelease(uVar3);
  return;
}



/* Address: 0x10092b000 | FUN_10092b000 */

void FUN_10092b000(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  uVar3 = 0;
  uVar2 = 0;
  if (*(char *)(param_1 + 0x20) == -1) {
    *(undefined8 *)(param_1 + 0x10) = param_2;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(undefined1 *)(param_1 + 0x20) = 1;
    _swift_beginAccess(param_1 + 0x38,auStack_70,1,0);
    uVar1 = *(undefined8 *)(param_1 + 0x38);
    uVar3 = *(undefined8 *)(param_1 + 0x40);
    uVar2 = *(undefined8 *)(param_1 + 0x48);
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    _swift_errorRetain(param_2);
  }
  FUN_1006486f8(uVar1,uVar3,uVar2);
  FUN_100004550(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar2);
  return;
}



/* Address: 0x10092b0c0 | thunk_FUN_10092b398 */

undefined8 thunk_FUN_10092b398(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x20) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x10092b0c4 | FUN_10092b0c4 */

undefined8 FUN_10092b0c4(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x27) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x20) = 0x100000000000000;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x10092b16c | FUN_10092b16c */

undefined8 FUN_10092b16c(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x2f) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined8 *)(unaff_x20 + 0x20) = 0;
    *(undefined8 *)(unaff_x20 + 0x28) = 0x100000000000000;
    _swift_beginAccess(unaff_x20 + 0x40,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x50) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x10092b210 | FUN_10092b210 */

undefined8 FUN_10092b210(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined1 auStack_2d0 [24];
  undefined8 local_2b8;
  undefined8 uStack_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined8 local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined1 local_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined1 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined1 local_40;
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_e8,1,0);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x78);
  local_70 = *(undefined8 *)(unaff_x20 + 0x70);
  uStack_58 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_60 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_48 = *(undefined8 *)(unaff_x20 + 0x98);
  local_50 = *(undefined8 *)(unaff_x20 + 0x90);
  local_40 = *(undefined1 *)(unaff_x20 + 0xa0);
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x38);
  local_b0 = *(undefined8 *)(unaff_x20 + 0x30);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x40);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x58);
  local_90 = *(undefined8 *)(unaff_x20 + 0x50);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_80 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x18);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x10);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x20);
  iVar1 = (int)&local_d0;
  FUN_1008fa584();
  uVar2 = 0;
  if (iVar1 == 1) {
    local_2b8 = param_1;
    FUN_1005b841c(&local_2b8,0,0);
    uStack_1b8 = uStack_250;
    local_1c0 = local_258;
    uStack_1a8 = uStack_240;
    uStack_1b0 = local_248;
    uStack_198 = uStack_230;
    local_1a0 = uStack_238;
    local_190 = local_228;
    uStack_1f8 = uStack_290;
    local_200 = local_298;
    uStack_1e8 = uStack_280;
    uStack_1f0 = local_288;
    uStack_1d8 = uStack_270;
    local_1e0 = local_278;
    uStack_1c8 = uStack_260;
    uStack_1d0 = local_268;
    uStack_218 = uStack_2b0;
    local_220 = local_2b8;
    uStack_208 = uStack_2a0;
    uStack_210 = local_2a8;
    FUN_100004520(&local_220);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x78);
    local_120 = *(undefined8 *)(unaff_x20 + 0x70);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x88);
    uStack_110 = *(undefined8 *)(unaff_x20 + 0x80);
    uStack_f8 = *(undefined8 *)(unaff_x20 + 0x98);
    local_100 = *(undefined8 *)(unaff_x20 + 0x90);
    local_f0 = *(undefined1 *)(unaff_x20 + 0xa0);
    uStack_158 = *(undefined8 *)(unaff_x20 + 0x38);
    local_160 = *(undefined8 *)(unaff_x20 + 0x30);
    uStack_148 = *(undefined8 *)(unaff_x20 + 0x48);
    uStack_150 = *(undefined8 *)(unaff_x20 + 0x40);
    uStack_138 = *(undefined8 *)(unaff_x20 + 0x58);
    local_140 = *(undefined8 *)(unaff_x20 + 0x50);
    uStack_128 = *(undefined8 *)(unaff_x20 + 0x68);
    uStack_130 = *(undefined8 *)(unaff_x20 + 0x60);
    uStack_178 = *(undefined8 *)(unaff_x20 + 0x18);
    local_180 = *(undefined8 *)(unaff_x20 + 0x10);
    uStack_168 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_170 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(unaff_x20 + 0x78) = uStack_1b8;
    *(undefined8 *)(unaff_x20 + 0x70) = local_1c0;
    *(undefined8 *)(unaff_x20 + 0x88) = uStack_1a8;
    *(undefined8 *)(unaff_x20 + 0x80) = uStack_1b0;
    *(undefined8 *)(unaff_x20 + 0x98) = uStack_198;
    *(undefined8 *)(unaff_x20 + 0x90) = local_1a0;
    *(undefined1 *)(unaff_x20 + 0xa0) = local_190;
    *(undefined8 *)(unaff_x20 + 0x38) = uStack_1f8;
    *(undefined8 *)(unaff_x20 + 0x30) = local_200;
    *(undefined8 *)(unaff_x20 + 0x48) = uStack_1e8;
    *(undefined8 *)(unaff_x20 + 0x40) = uStack_1f0;
    *(undefined8 *)(unaff_x20 + 0x58) = uStack_1d8;
    *(undefined8 *)(unaff_x20 + 0x50) = local_1e0;
    *(undefined8 *)(unaff_x20 + 0x68) = uStack_1c8;
    *(undefined8 *)(unaff_x20 + 0x60) = uStack_1d0;
    *(undefined8 *)(unaff_x20 + 0x18) = uStack_218;
    *(undefined8 *)(unaff_x20 + 0x10) = local_220;
    *(undefined8 *)(unaff_x20 + 0x28) = uStack_208;
    *(undefined8 *)(unaff_x20 + 0x20) = uStack_210;
    _swift_errorRetain(param_1);
    FUN_1000fb4c4(&local_180,&DAT_100fec428,&DAT_100c83b20);
    _swift_beginAccess(unaff_x20 + 0xb8,auStack_2d0,1,0);
    uVar2 = *(undefined8 *)(unaff_x20 + 0xb8);
    *(undefined8 *)(unaff_x20 + 0xc0) = 0;
    *(undefined8 *)(unaff_x20 + 200) = 0;
    *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  }
  return uVar2;
}



/* Address: 0x10092b398 | FUN_10092b398 */

undefined8 FUN_10092b398(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_58,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x20) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = 0;
    *(undefined1 *)(unaff_x20 + 0x20) = 1;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_70,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    _swift_errorRetain(param_1);
  }
  return uVar1;
}



/* Address: 0x10092b43c | FUN_10092b43c */

void FUN_10092b43c(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_10090d0b8();
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f18488;
  _swift_allocObject(&DAT_100f18488,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(thunk_FUN_1005dfd68,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10092b53c | FUN_10092b53c */

void FUN_10092b53c(void)

{
  FUN_10092b558();
  return;
}



/* Address: 0x10092b558 | FUN_10092b558 */

void FUN_10092b558(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  code *param_5,long param_6,undefined8 param_7)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  code *pcVar5;
  
  if (((uint)param_3 & 0xff) != 1) {
    _swift_unknownObjectRetain(param_1);
    (*param_5)();
    FUN_1008fdeac(param_1,param_2,param_3);
    return;
  }
  uVar2 = *(ulong *)(param_4 + 0x28);
  lVar1 = *(long *)(param_4 + 0x30);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar4 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_10092b398(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar4);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  _swift_allocObject(param_6,0x20,7);
  *(long *)(param_6 + 0x10) = param_4;
  *(undefined8 *)(param_6 + 0x18) = param_1;
  pcVar5 = *(code **)(lVar1 + 0x18);
  FUN_1008fde58(param_1,param_2,1);
  _swift_retain(param_4);
  (*pcVar5)(param_7,param_6,uVar2,lVar1);
  _swift_release(param_6);
  return;
}



/* Address: 0x10092b6b0 | FUN_10092b6b0 */

void FUN_10092b6b0(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (((uint)param_2 & 0xff) != 1) {
    _swift_bridgeObjectRetain(param_1);
    FUN_10090d22c();
    FUN_100908090(param_1,param_2);
    return;
  }
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar6 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1005de8f4(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar5);
    _swift_bridgeObjectRelease(lVar6);
    return;
  }
  puVar4 = &DAT_100f187f8;
  _swift_allocObject(&DAT_100f187f8,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  FUN_1008fa558(param_1,1);
  _swift_retain(param_3);
  (*pcVar7)(thunk_FUN_1005dfd68,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10092b7e0 | thunk_FUN_10092b7e4 */

void thunk_FUN_10092b7e4(void)

{
  FUN_10092b7e4();
  return;
}



/* Address: 0x10092b7e4 | FUN_10092b7e4 */

undefined8 FUN_10092b7e4(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  char local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  local_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_58 = *(undefined8 *)(param_3 + 0x18);
  local_50 = *(char *)(param_3 + 0x20);
  if (local_50 != -1) {
    FUN_1008fde58();
    (*param_1)(&local_60);
    FUN_1008fdeac(local_60,uStack_58,local_50);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10092b86c);
  (*pcVar1)();
}



/* Address: 0x10092b86c | FUN_10092b86c */

undefined8 FUN_10092b86c(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  local_60 = *(undefined8 *)(param_3 + 0x10);
  uStack_58 = *(undefined8 *)(param_3 + 0x18);
  local_50 = *(ulong *)(param_3 + 0x20);
  if (local_50 >> 0x38 < 0xff) {
    FUN_1008fa5cc();
    (*param_1)(&local_60);
    FUN_10090ef88(local_60,uStack_58,local_50 & 0xffffffffffffff,local_50._7_1_);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10092b90c);
  (*pcVar1)();
}



/* Address: 0x10092b90c | FUN_10092b90c */

char * FUN_10092b90c(long param_1,undefined8 param_2,void *param_3)

{
  String SVar1;
  tuple2_conflict1 tVar2;
  
  FUN_100900d54();
  SVar1.str = *(char **)(param_1 + 0x10);
  SVar1.bridgeObject = param_3;
  tVar2 = Swift::String::_fromUTF8Repairing((undefined *)(param_1 + 0x20),SVar1);
  _swift_release(param_1);
  return tVar2.result.str;
}



/* Address: 0x10092b960 | FUN_10092b960 */

void FUN_10092b960(undefined8 *param_1,undefined8 param_2)

{
  FUN_10092b43c(*param_1,*(undefined1 *)(param_1 + 1),param_2);
  return;
}



/* Address: 0x10092b974 | FUN_10092b974 */

void FUN_10092b974(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092b9ec;
  FUN_1009171d4(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092b9ec | FUN_10092b9ec */

void FUN_10092b9ec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    *(int *)(puVar1 + 1) = (int)param_2;
    *(int *)((long)puVar1 + 0xc) = (int)((ulong)param_2 >> 0x20);
    *(int *)(puVar1 + 2) = (int)param_3;
    *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
    *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010092ba70. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092ba74 | FUN_10092ba74 */

void FUN_10092ba74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10092bc5c;
  FUN_100917728(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092baec | FUN_10092baec */

void FUN_10092baec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xe0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bb64;
  FUN_10091794c(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092bb64 | FUN_10092bb64 */

void FUN_10092bb64(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
    *(int *)(puVar1 + 2) = (int)param_3;
    *(short *)((long)puVar1 + 0x14) = (short)((ulong)param_3 >> 0x20);
    *(char *)((long)puVar1 + 0x16) = (char)((ulong)param_3 >> 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x00010092bbe0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092bbe4 | FUN_10092bbe4 */

void FUN_10092bbe4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bc5c;
  FUN_100917c68(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092bc5c | FUN_10092bc5c */

void FUN_10092bc5c(undefined8 param_1)

{
  long unaff_x20;
  long lVar1;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x18));
  if (unaff_x20 == 0) {
    **(undefined8 **)(lVar1 + 0x10) = param_1;
  }
                    /* WARNING: Could not recover jumptable at 0x00010092bcb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092bcb8 | FUN_10092bcb8 */

void FUN_10092bcb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10092bd30;
  FUN_100918278(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092bd30 | FUN_10092bd30 */

void FUN_10092bd30(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x18));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x10);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010092bd8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10092bd90 | FUN_10092bd90 */

void FUN_10092bd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10092bc5c;
  FUN_10091856c(param_2,param_3,param_4,param_5);
  return;
}



/* Address: 0x10092be08 | thunk_FUN_10092d05c */

void thunk_FUN_10092d05c(void)

{
  FUN_10092d05c();
  return;
}



/* Address: 0x10092be0c | thunk_FUN_10092d0a0 */

void thunk_FUN_10092d0a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100925494(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50),*(undefined8 *)(unaff_x20 + 0x58),
                *(undefined1 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x10092be10 | FUN_10092be10 */

void FUN_10092be10(void)

{
  long unaff_x20;
  
  FUN_10092b86c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10092be1c | FUN_10092be1c */

void FUN_10092be1c(void)

{
  long unaff_x20;
  
  FUN_1008f200c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x10092be28 | FUN_10092be28 */

void FUN_10092be28(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (0xfe < param_3 >> 0x38) {
    return;
  }
  FUN_1008fa5cc();
  return;
}



/* Address: 0x10092be3c | FUN_10092be3c */

void FUN_10092be3c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (0xfe < param_3 >> 0x38) {
    return;
  }
  FUN_10090ef88();
  return;
}



/* Address: 0x10092be50 | FUN_10092be50 */

void FUN_10092be50(undefined8 *param_1)

{
  FUN_10092b43c(*param_1,*(undefined1 *)(param_1 + 1));
  return;
}



/* Address: 0x10092be64 | thunk_FUN_10092d008 */

void thunk_FUN_10092d008(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009263dc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined1 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x10092be68 | FUN_10092be68 */

void FUN_10092be68(void)

{
  long unaff_x20;
  
  FUN_100928b84(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined1 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
                *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48),
                *(undefined8 *)(unaff_x20 + 0x50));
  return;
}



/* Address: 0x10092bea0 | FUN_10092bea0 */

void FUN_10092bea0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x10092bec4 | FUN_10092bec4 */

void FUN_10092bec4(void)

{
  FUN_10092c0e8(FUN_10092cf90);
  return;
}



/* Address: 0x10092bee0 | FUN_10092bee0 */

void FUN_10092bee0(void)

{
  FUN_1006541ac(FUN_10092d298,0,PTR___type_metadata_for_Swift_Int64_100eadc00);
  return;
}



/* Address: 0x10092bf08 | thunk_FUN_10092c144 */

void thunk_FUN_10092c144(void)

{
  FUN_10092c144();
  return;
}


