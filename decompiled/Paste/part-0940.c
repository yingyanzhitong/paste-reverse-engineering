/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a29284 | FUN_100a29284 */

void FUN_100a29284(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  long unaff_x21;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_b0 [24];
  long local_98;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar1 = param_1;
  _swift_getObjectType();
  pcVar5 = *(code **)(param_2 + 0x28);
  uVar2 = uVar1;
  (*pcVar5)();
  uVar6 = *(undefined8 *)((long)param_3 + *(long *)(*param_3 + 0x70));
  lVar3 = 0;
  FUN_100a2e464();
  _swift_allocObject();
  *(undefined8 *)(lVar3 + 0x10) = uVar6;
  _swift_retain(uVar6);
  FUN_100626a9c(lVar3,&PTR_PTR_100f29208,0,0,1,0x8000000000000000,uVar2);
  _swift_release(uVar2);
  _swift_release(lVar3);
  if (unaff_x21 == 0) {
    lVar3 = 0;
    FUN_100a2d4c0();
    FUN_1000f8cac(param_4 + *(int *)(lVar3 + 0x20),auStack_b0,&DAT_100ff5240,&DAT_100c8e810);
    if (local_98 == 0) {
      FUN_1000fb4c4(auStack_b0,&DAT_100ff5240,&DAT_100c8e810);
    }
    else {
      FUN_100076508(auStack_b0,auStack_88);
      puVar4 = auStack_88;
      FUN_100004640(puVar4,local_70);
      uVar2 = local_70;
      FUN_100a0c7c4(local_70,uStack_68,puVar4);
      uVar6 = uVar1;
      (*pcVar5)(uVar1,param_2);
      _swift_unknownObjectRetain(uVar2);
      FUN_100626a9c();
      _swift_release(uVar6);
      _swift_unknownObjectRelease_n(uVar2,2);
      FUN_100004594(auStack_88);
    }
    (*pcVar5)(uVar1,param_2);
    FUN_1009735ac(param_1,param_2);
    FUN_100626a9c();
    _swift_release(uVar1);
    _swift_unknownObjectRelease(param_1);
  }
  return;
}



/* Address: 0x100a294c4 | FUN_100a294c4 */

class_t * FUN_100a294c4(long param_1)

{
  undefined1 uVar1;
  code *pcVar2;
  class_t *pcVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  class_t *pcVar6;
  long lVar7;
  undefined1 auStack_58 [24];
  
  pcVar6 = *(class_t **)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  pcVar3 = pcVar6;
  _object_getClass();
  if (pcVar3 != &objc::class_t::_TtC8NIOPosix27MultiThreadedEventLoopGroup &&
      pcVar3 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop || pcVar6 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a29654);
    (*pcVar2)();
  }
  FUN_1008fa0ac(0);
  _swift_allocObject();
  _swift_unknownObjectRetain_n(pcVar6,2);
  FUN_1008df0b4();
  if (pcVar6 == (class_t *)0x0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a29658);
    (*pcVar2)();
  }
  FUN_100004520();
  lVar4 = 0;
  FUN_100a2d4c0();
  lVar7 = *(long *)(param_1 + *(int *)(lVar4 + 0x18));
  if (lVar7 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a2964c);
    (*pcVar2)();
  }
  if (lVar7 < 0x80000000) {
    _swift_beginAccess(pcVar6 + 2,auStack_58,0x21,0);
    FUN_100a2a4c4(lVar7);
    _swift_endAccess(auStack_58);
    uVar5 = 4;
    FUN_100622cb8(4);
    uVar1 = *(undefined1 *)(param_1 + *(int *)(lVar4 + 0x1c));
    _swift_beginAccess(pcVar6 + 2,auStack_58,0x21,0);
    FUN_100a2a030(uVar5,uVar1);
    _swift_endAccess(auStack_58);
    FUN_100004520();
    _swift_beginAccess(&pcVar6[2].superclass,auStack_58,0x21,0);
    FUN_100a29bc8(1);
    _swift_endAccess(auStack_58);
    return pcVar6;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a29650);
  (*pcVar2)();
}



/* Address: 0x100a29658 | FUN_100a29658 */

void FUN_100a29658(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  long *unaff_x20;
  uint local_4c;
  undefined8 local_48;
  
  lVar1 = *(long *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78));
  FUN_1009a140c();
  _swift_allocObject();
  _swift_unknownObjectRetain();
  FUN_10099adf0();
  if (lVar1 != 0) {
    uVar2 = 4;
    FUN_100622cb8();
    lVar3 = 0;
    local_48 = uVar2;
    FUN_100a2d4c0();
    local_4c = (uint)*(byte *)(param_1 + *(int *)(lVar3 + 0x1c));
    lVar5 = lVar3;
    FUN_100a2c910();
    puVar4 = &local_48;
    FUN_1008df72c(puVar4,&local_4c,&DAT_100eec8d0,lVar5);
    _swift_release(lVar1);
    FUN_100004520();
    FUN_100a2c950();
    FUN_1008df7ac();
    _swift_release(puVar4);
    lVar5 = *(long *)(param_1 + *(int *)(lVar3 + 0x24));
    if (lVar5 != 0) {
      _swift_retain(lVar5);
      FUN_10099af18();
      _swift_release(lVar1);
      _swift_release(lVar5);
    }
  }
  return;
}



/* Address: 0x100a297a0 | FUN_100a297a0 */

void FUN_100a297a0(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x68);
  lVar1 = 0;
  FUN_100a248b8(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  (**(code **)(*(long *)(lVar1 + -8) + 8))((long)unaff_x20 + lVar3,lVar1);
  _swift_release(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x70)));
  _swift_unknownObjectRelease(*(undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x78)));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x100a2980c | FUN_100a2980c */

void FUN_100a2980c(void)

{
  FUN_100a297a0();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x100a29828 | FUN_100a29828 */

void FUN_100a29828(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x2b0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_100a248c4();
  return;
}



/* Address: 0x100a29878 | FUN_100a29878 */

void FUN_100a29878(undefined8 *param_1,undefined8 param_2)

{
  FUN_1008df6bc();
  *param_1 = param_2;
  return;
}



/* Address: 0x100a298a0 | FUN_100a298a0 */

void FUN_100a298a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1008e2930(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a29960 | FUN_100a29960 */

void FUN_100a29960(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_1008e3284(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a29a20 | FUN_100a29a20 */

void FUN_100a29a20(void)

{
  _swift_task_switch(FUN_1006f8f6c,0,0);
  return;
}



/* Address: 0x100a29a38 | FUN_100a29a38 */

void FUN_100a29a38(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_10099cccc(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}



/* Address: 0x100a29af8 | FUN_100a29af8 */

void FUN_100a29af8(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x10;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a29a20();
  return;
}



/* Address: 0x100a29b48 | FUN_100a29b48 */

undefined1  [16] FUN_100a29b48(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xeb00000000647269;
  auVar1._0_8_ = 0x62676e696d6d7548;
  return auVar1;
}



/* Address: 0x100a29b68 | FUN_100a29b68 */

void FUN_100a29b68(int *param_1)

{
  int iVar1;
  long *plVar2;
  long unaff_x22;
  
  iVar1 = *param_1;
  plVar2 = (long *)(ulong)(uint)param_1[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1005dfae0;
                    /* WARNING: Could not recover jumptable at 0x000100a29bc4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_1))();
  return;
}



/* Address: 0x100a29bc8 | FUN_100a29bc8 */

void FUN_100a29bc8(byte param_1)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  byte local_278 [24];
  undefined *local_260;
  undefined1 auStack_258 [24];
  undefined *local_240;
  undefined1 *local_238;
  undefined1 auStack_230 [48];
  ulong local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [40];
  ulong local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined *local_78;
  
  lVar11 = *unaff_x20;
  uVar8 = *(ulong *)(lVar11 + 0x10);
  if (uVar8 == 0) {
    _swift_bridgeObjectRelease();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a2a984(0,uVar8,0);
    uVar9 = 0;
    lVar10 = lVar11 + 0x20;
    bVar2 = false;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a29fe0);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar10,auStack_128,&DAT_100ff51f0,&DAT_100c8e728);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f28df0;
      _swift_allocObject(&DAT_100f28df0,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = thunk_FUN_100a2ca90;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff51f0,&DAT_100c8e728);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100ff51f8;
      FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
      puVar5 = auStack_258;
      _swift_dynamicCast(puVar5,&local_200,puVar4,&DAT_100eecb18,6);
      if ((int)puVar5 == 0) {
        FUN_100004594(auStack_1a8);
        puVar6 = local_130;
        pcVar3 = local_138;
        puStack_1b0 = local_130;
        uStack_1c8 = uStack_148;
        local_1d0 = local_150;
        local_1b8 = local_138;
        uStack_1c0 = uStack_140;
        uStack_1f8 = uStack_178;
        local_200 = local_180;
        puStack_1e8 = puStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = local_160;
        FUN_100076508(&local_200,auStack_258);
        FUN_100011080(&uStack_1d8,auStack_230);
        FUN_100076508(auStack_258,&local_d0);
        FUN_100011080(auStack_230,&uStack_a8);
        puVar4 = &DAT_100f28e18;
        _swift_allocObject(&DAT_100f28e18,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_100a2caec;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100eecb18;
        FUN_100a2c950();
        local_260 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_278[0] = param_1 & 1;
        local_238 = puVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff51f0,&DAT_100c8e728);
        FUN_100076508(auStack_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_100a2a960;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_100a2a984(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = local_78;
      uVar9 = uVar9 + 1;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x28) = uStack_c8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x20) = local_d0;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x38) = uStack_b8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x30) = local_c0;
      *(undefined **)(local_78 + uVar1 * 0x58 + 0x70) = local_80;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x58) = uStack_98;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x50) = local_a0;
      *(code **)(local_78 + uVar1 * 0x58 + 0x68) = pcStack_88;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x60) = local_90;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x48) = uStack_a8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x40) = local_b0;
      lVar10 = lVar10 + 0x58;
    } while (uVar8 != uVar9);
    _swift_bridgeObjectRelease();
    *unaff_x20 = (long)puVar7;
    if (bVar2) {
      return;
    }
  }
  puStack_168 = &DAT_100eecb18;
  FUN_100a2c950();
  puStack_1e8 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_200 = CONCAT71(local_200._1_7_,param_1) & 0xffffffffffffff01;
  local_160 = lVar11;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_100a2a960;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_100a2ac5c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar8 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_100a2ac5c(puVar7,uVar8 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
  }
  *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x20) = local_d0;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x30) = local_c0;
  *(undefined **)(puVar7 + uVar8 * 0x58 + 0x70) = local_80;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x58) = uStack_98;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x50) = local_a0;
  *(code **)(puVar7 + uVar8 * 0x58 + 0x68) = pcStack_88;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x60) = local_90;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x40) = local_b0;
  *unaff_x20 = (long)puVar7;
  return;
}



/* Address: 0x100a2a030 | FUN_100a2a030 */

void FUN_100a2a030(ulong param_1,undefined4 param_2)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  int *piVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  long *unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined4 local_278 [6];
  undefined *local_260;
  int local_258;
  uint uStack_254;
  undefined *local_240;
  int *local_238;
  undefined1 auStack_230 [48];
  long local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [40];
  int local_180;
  uint uStack_17c;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined *local_78;
  
  lVar10 = *unaff_x20;
  uVar12 = *(ulong *)(lVar10 + 0x10);
  iVar9 = (int)param_1;
  uVar8 = (uint)(param_1 >> 0x20);
  if (uVar12 == 0) {
    _swift_bridgeObjectRelease();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a2a984(0,uVar12,0);
    uVar11 = 0;
    bVar2 = false;
    lVar13 = lVar10 + 0x20;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a2a474);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar13,auStack_128,&DAT_100ff51f0,&DAT_100c8e728);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f28ee0;
      _swift_allocObject(&DAT_100f28ee0,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = thunk_FUN_100a2ca90;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff51f0,&DAT_100c8e728);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100ff51f8;
      FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
      piVar5 = &local_258;
      _swift_dynamicCast(piVar5,&local_200,puVar4,&DAT_100eec8d0,6);
      if ((((int)piVar5 == 0) || (local_258 != iVar9)) || ((ulong)uStack_254 != param_1 >> 0x20)) {
        FUN_100004594(auStack_1a8);
        puVar6 = local_130;
        pcVar3 = local_138;
        puStack_1b0 = local_130;
        uStack_1c8 = uStack_148;
        local_1d0 = local_150;
        local_1b8 = local_138;
        uStack_1c0 = uStack_140;
        local_200 = (ulong)uStack_17c << 0x20;
        uStack_1f8 = uStack_178;
        puStack_1e8 = puStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = local_160;
        FUN_100076508(&local_200,&local_258);
        FUN_100011080(&uStack_1d8,auStack_230);
        FUN_100076508(&local_258,&local_d0);
        FUN_100011080(auStack_230,&uStack_a8);
        puVar4 = &DAT_100f28f08;
        _swift_allocObject(&DAT_100f28f08,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_100a2caec;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100eec8d0;
        FUN_100a2c910();
        local_260 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
        local_278[0] = param_2;
        local_258 = iVar9;
        uStack_254 = uVar8;
        local_238 = piVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff51f0,&DAT_100c8e728);
        FUN_100076508(&local_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_100a2a93c;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_100a2a984(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = local_78;
      uVar11 = uVar11 + 1;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x28) = uStack_c8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x20) = local_d0;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x38) = uStack_b8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x30) = local_c0;
      *(undefined **)(local_78 + uVar1 * 0x58 + 0x70) = local_80;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x58) = uStack_98;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x50) = local_a0;
      *(code **)(local_78 + uVar1 * 0x58 + 0x68) = pcStack_88;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x60) = local_90;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x48) = uStack_a8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x40) = local_b0;
      lVar13 = lVar13 + 0x58;
    } while (uVar12 != uVar11);
    _swift_bridgeObjectRelease();
    *unaff_x20 = (long)puVar7;
    if (bVar2) {
      return;
    }
  }
  puStack_168 = &DAT_100eec8d0;
  FUN_100a2c910();
  puStack_1e8 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  local_200 = CONCAT44(local_200._4_4_,param_2);
  local_180 = iVar9;
  uStack_17c = uVar8;
  local_160 = lVar10;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_100a2a93c;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_100a2ac5c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar12 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_100a2ac5c(puVar7,uVar12 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
  }
  *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x20) = local_d0;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x30) = local_c0;
  *(undefined **)(puVar7 + uVar12 * 0x58 + 0x70) = local_80;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x58) = uStack_98;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x50) = local_a0;
  *(code **)(puVar7 + uVar12 * 0x58 + 0x68) = pcStack_88;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x60) = local_90;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar7 + uVar12 * 0x58 + 0x40) = local_b0;
  *unaff_x20 = (long)puVar7;
  return;
}



/* Address: 0x100a2a4c4 | FUN_100a2a4c4 */

void FUN_100a2a4c4(undefined4 param_1)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined4 local_278 [6];
  undefined *local_260;
  undefined1 auStack_258 [24];
  undefined *local_240;
  undefined1 *local_238;
  undefined1 auStack_230 [48];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  code *local_1b8;
  undefined *puStack_1b0;
  undefined1 auStack_1a8 [40];
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined *puStack_168;
  long local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  code *local_138;
  undefined *local_130;
  undefined1 auStack_128 [40];
  undefined1 auStack_100 [32];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  code *pcStack_88;
  undefined *local_80;
  undefined *local_78;
  
  lVar11 = *unaff_x20;
  uVar8 = *(ulong *)(lVar11 + 0x10);
  if (uVar8 == 0) {
    _swift_bridgeObjectRelease();
    puVar7 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100a2a984(0,uVar8,0);
    uVar9 = 0;
    bVar2 = false;
    lVar10 = lVar11 + 0x20;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a2a8c8);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar10,auStack_128,&DAT_100ff51f0,&DAT_100c8e728);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f28f80;
      _swift_allocObject(&DAT_100f28f80,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = thunk_FUN_100a2ca90;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff51f0,&DAT_100c8e728);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100ff51f8;
      FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
      puVar5 = auStack_258;
      _swift_dynamicCast(puVar5,&local_200,puVar4,&DAT_100eec998,6);
      if ((int)puVar5 == 0) {
        FUN_100004594(auStack_1a8);
        puVar6 = local_130;
        pcVar3 = local_138;
        puStack_1b0 = local_130;
        uStack_1c8 = uStack_148;
        local_1d0 = local_150;
        local_1b8 = local_138;
        uStack_1c0 = uStack_140;
        uStack_1f8 = uStack_178;
        local_200 = local_180;
        puStack_1e8 = puStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = local_160;
        FUN_100076508(&local_200,auStack_258);
        FUN_100011080(&uStack_1d8,auStack_230);
        FUN_100076508(auStack_258,&local_d0);
        FUN_100011080(auStack_230,&uStack_a8);
        puVar4 = &DAT_100f28fa8;
        _swift_allocObject(&DAT_100f28fa8,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_100a2caec;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100eec998;
        FUN_100a2cb4c();
        local_260 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
        local_278[0] = param_1;
        local_238 = puVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff51f0,&DAT_100c8e728);
        FUN_100076508(auStack_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_100a2a918;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_100a2a984(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
      }
      puVar7 = local_78;
      uVar9 = uVar9 + 1;
      *(ulong *)(local_78 + 0x10) = uVar1 + 1;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x28) = uStack_c8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x20) = local_d0;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x38) = uStack_b8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x30) = local_c0;
      *(undefined **)(local_78 + uVar1 * 0x58 + 0x70) = local_80;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x58) = uStack_98;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x50) = local_a0;
      *(code **)(local_78 + uVar1 * 0x58 + 0x68) = pcStack_88;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x60) = local_90;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x48) = uStack_a8;
      *(undefined8 *)(local_78 + uVar1 * 0x58 + 0x40) = local_b0;
      lVar10 = lVar10 + 0x58;
    } while (uVar8 != uVar9);
    _swift_bridgeObjectRelease();
    *unaff_x20 = (long)puVar7;
    if (bVar2) {
      return;
    }
  }
  puStack_168 = &DAT_100eec998;
  FUN_100a2cb4c();
  puStack_1e8 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  local_200 = CONCAT44(local_200._4_4_,param_1);
  local_160 = lVar11;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_100a2a918;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_100a2ac5c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar8 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_100a2ac5c(puVar7,uVar8 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
  }
  *(ulong *)(puVar7 + 0x10) = uVar8 + 1;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x20) = local_d0;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x30) = local_c0;
  *(undefined **)(puVar7 + uVar8 * 0x58 + 0x70) = local_80;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x58) = uStack_98;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x50) = local_a0;
  *(code **)(puVar7 + uVar8 * 0x58 + 0x68) = pcStack_88;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x60) = local_90;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar7 + uVar8 * 0x58 + 0x40) = local_b0;
  *unaff_x20 = (long)puVar7;
  return;
}



/* Address: 0x100a2a918 | FUN_100a2a918 */

void FUN_100a2a918(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f28fd0,&DAT_100f28ff8,FUN_100a2cb8c,thunk_FUN_100625c60);
  return;
}



/* Address: 0x100a2a93c | FUN_100a2a93c */

void FUN_100a2a93c(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f28f30,&DAT_100f28f58,FUN_100a2ca88,thunk_FUN_100625c60);
  return;
}



/* Address: 0x100a2a960 | FUN_100a2a960 */

void FUN_100a2a960(undefined8 param_1)

{
  FUN_10098f2a4(param_1,&DAT_100f28e40,&DAT_100f28e68,FUN_100a2ca80,FUN_100625c60);
  return;
}



/* Address: 0x100a2a984 | FUN_100a2a984 */

void FUN_100a2a984(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a2ac5c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a2a9a8 | FUN_100a2a9a8 */

void FUN_100a2a9a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 uStack_89;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
  _swift_dynamicCast();
  FUN_10000cbfc(param_2,auStack_88);
  puVar1 = &DAT_100ff5218;
  FUN_1000f7830(&DAT_100ff5218,&DAT_100c8e738);
  _swift_dynamicCast(&uStack_89,auStack_88,puVar1,PTR___type_metadata_for_Swift_Bool_100eac570,7);
  pcVar2 = *(code **)(param_4 + 0x48);
  FUN_100a2c950();
  (*pcVar2)();
  return;
}



/* Address: 0x100a2aa8c | FUN_100a2aa8c */

void FUN_100a2aa8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined1 *puVar2;
  code *pcVar3;
  undefined1 auStack_94 [4];
  undefined1 auStack_90 [32];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  puVar1 = &DAT_100ff51f8;
  FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
  _swift_dynamicCast(auStack_70,auStack_68,puVar1,&DAT_100eec8d0,7);
  FUN_10000cbfc(param_2,auStack_90);
  puVar1 = &DAT_100ff5218;
  FUN_1000f7830(&DAT_100ff5218,&DAT_100c8e738);
  puVar2 = auStack_94;
  _swift_dynamicCast(puVar2,auStack_90,puVar1,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
  pcVar3 = *(code **)(param_4 + 0x48);
  FUN_100a2c910();
  (*pcVar3)(auStack_70,auStack_94,&DAT_100eec8d0,puVar2,param_3,param_4);
  return;
}



/* Address: 0x100a2ab78 | FUN_100a2ab78 */

void FUN_100a2ab78(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined1 auStack_8c [4];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [40];
  
  _swift_getObjectType(param_3);
  FUN_100076688(param_1,auStack_68);
  FUN_1000f7830(&DAT_100ff51f8,&DAT_100c8e730);
  _swift_dynamicCast();
  FUN_10000cbfc(param_2,auStack_88);
  puVar1 = &DAT_100ff5218;
  FUN_1000f7830(&DAT_100ff5218,&DAT_100c8e738);
  _swift_dynamicCast(auStack_8c,auStack_88,puVar1,PTR___type_metadata_for_Swift_Int32_100eadbd0,7);
  pcVar2 = *(code **)(param_4 + 0x48);
  FUN_100a2cb4c();
  (*pcVar2)();
  return;
}



/* Address: 0x100a2ac5c | FUN_100a2ac5c */

undefined *
FUN_100a2ac5c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  
  uVar6 = param_2;
  if ((param_3 & 1) != 0) {
    uVar6 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar6 < (long)param_2) {
      if ((long)(uVar6 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a2adc0);
        (*pcVar2)();
      }
      uVar6 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar6 <= (long)param_2) {
        uVar6 = param_2;
      }
    }
  }
  uVar7 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar6 <= (long)uVar7) {
    uVar6 = uVar7;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    puVar3 = (undefined *)0x0;
    FUN_1000c9144(0,&DAT_100ff5200,FUN_100a2c998,PTR_typeMetadataAccessor_100ead690);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar7;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x58) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    puVar5 = &DAT_100ff51f0;
    FUN_1000f7830(&DAT_100ff51f0,&DAT_100c8e728);
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar7,puVar5);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar7 * 0x58 <= puVar4) {
      _memmove(puVar4,puVar1,uVar7 * 0x58);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x100a2adc0 | FUN_100a2adc0 */

void FUN_100a2adc0(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    uVar3 = *param_1;
    puVar1 = &DAT_100ff3d20;
    FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
    puVar2 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar2 = uVar3;
    _swift_errorRetain(uVar3);
    _swift_continuation_throwingResumeWithError(param_2,puVar1);
  }
  else {
    _swift_continuation_throwingResume(param_2);
  }
  return;
}



/* Address: 0x100a2ae44 | FUN_100a2ae44 */

void FUN_100a2ae44(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  Result RVar2;
  undefined7 extraout_var;
  long *unaff_x20;
  long lVar3;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  *puVar1 = param_1;
  puVar1[1] = param_2;
  lVar3 = *(long *)(*unaff_x20 + 0x58);
  FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x100a2aee0 | FUN_100a2aee0 */

void FUN_100a2aee0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_100a2ae44(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100a2af2c | FUN_100a2af2c */

undefined8 FUN_100a2af2c(void)

{
  undefined8 unaff_x20;
  
  FUN_100a2aee0();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x100a2af68 | FUN_100a2af68 */

void FUN_100a2af68(undefined8 param_1)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar2 = *unaff_x20;
  lVar3 = *(long *)(lVar2 + 0x68);
  _swift_beginAccess((long)unaff_x20 + lVar3,auStack_48,0x21,0);
  lVar1 = 0;
  FUN_100a248b8(0,*(undefined8 *)(lVar2 + 0x50),*(undefined8 *)(lVar2 + 0x58));
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))((long)unaff_x20 + lVar3,param_1,lVar1);
  _swift_endAccess(auStack_48);
  FUN_100a24408();
  return;
}



/* Address: 0x100a2afe0 | FUN_100a2afe0 */

undefined8 FUN_100a2afe0(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100a2d4c0();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100a2b01c | FUN_100a2b01c */

void FUN_100a2b01c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a2b028 | FUN_100a2b028 */

void FUN_100a2b028(undefined8 param_1)

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
  plVar5 = (long *)0x1d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1005c804c;
  FUN_100a25660(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x100a2b0b0 | FUN_100a2b0b0 */

void FUN_100a2b0b0(void)

{
  FUN_100a266dc();
  return;
}



/* Address: 0x100a2b0b8 | FUN_100a2b0b8 */

void FUN_100a2b0b8(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2b0c8 | FUN_100a2b0c8 */

void FUN_100a2b0c8(void)

{
  FUN_100894fcc(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x100a2b0d4 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  FUN_100405f18();
  return;
}



/* Address: 0x100a2b0d8 | FUN_100a2b0d8 */

void FUN_100a2b0d8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8e4f8,param_1);
  return;
}



/* Address: 0x100a2b0e8 | FUN_100a2b0e8 */

void FUN_100a2b0e8(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_40 = &DAT_100c8e658;
  uVar2 = *(ulong *)(param_1 + 0x50);
  lVar1 = 0x13f;
  FUN_100a248b8(0x13f,uVar2,*(undefined8 *)(param_1 + 0x58));
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_28 = &DAT_100c8e670;
    _swift_initClassMetadata2(param_1,0,4,&local_40,param_1 + 0x60);
  }
  return;
}



/* Address: 0x100a2b17c | FUN_100a2b17c */

void FUN_100a2b17c(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined *puStack_38;
  
  uVar4 = *(ulong *)(param_1 + 0x10);
  lVar2 = 0x13f;
  _swift_checkMetadataState();
  if (uVar4 < 0x40) {
    lVar3 = 0x13f;
    FUN_100a2d4c0();
    if (uVar4 < 0x40) {
      _swift_getTupleTypeLayout3
                (auStack_68,*(long *)(lVar2 + -8) + 0x40,*(long *)(lVar3 + -8) + 0x40,&DAT_100c8e6d0
                );
      uVar4 = 0xff;
      local_48 = auStack_68;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_1 + 0x18),lVar2,0x100cc971c,
                 &TargetProtocolRequirement_100cc972c);
      lVar2 = 0x13f;
      FUN_1005e3ae8(0x13f,uVar4,PTR___type_metadata_for_Swift_Never_100eadc38);
      if (uVar4 < 0x40) {
        puVar1 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
        _swift_getTupleTypeLayout2(auStack_88,*(long *)(lVar2 + -8) + 0x40,puVar1);
        local_40 = auStack_88;
        puStack_38 = puVar1;
        _swift_initEnumMetadataMultiPayload(param_1,0,3,&local_48);
      }
    }
  }
  return;
}



/* Address: 0x100a2b280 | FUN_100a2b280 */

long * FUN_100a2b280(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  bool bVar5;
  NWEndpoint NVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long *plVar12;
  AsyncThrowingStream AVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined7 extraout_var;
  ulong uVar16;
  long lVar17;
  long lVar18;
  undefined8 uVar19;
  
  lVar17 = *(long *)(param_3 + -8);
  uVar4 = *(uint *)(lVar17 + 0x50);
  if ((uVar4 >> 0x11 & 1) == 0) {
    plVar12 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar7 = (int)plVar12;
    if (iVar7 == 2) {
      *param_1 = *param_2;
      _swift_retain();
      uVar9 = 2;
    }
    else if (iVar7 == 1) {
      lVar17 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = lVar17;
      uVar9 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc971c,
                 &TargetProtocolRequirement_100cc972c);
      lVar8 = 0;
      FUN_1005e3ae8(0,uVar9,PTR___type_metadata_for_Swift_Never_100eadc38);
      lVar18 = (long)*(int *)(lVar8 + 0x24);
      uVar11 = 0;
      FUN_1005e8278(0,uVar9);
      _swift_unknownObjectRetain(lVar17);
      lVar17 = (long)param_2 + lVar18;
      _swift_getEnumCaseMultiPayload(lVar17,uVar11);
      bVar5 = (int)lVar17 != 1;
      if (bVar5) {
        FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
        AVar13 = Swift::AsyncThrowingStream::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar13.unknown + -8) + 0x10))
                  ((long)param_1 + lVar18,(long)param_2 + lVar18,AVar13.unknown);
      }
      else {
        *(undefined8 *)((long)param_1 + lVar18) = *(undefined8 *)((long)param_2 + lVar18);
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar18,uVar11,!bVar5);
      lVar18 = (long)*(int *)(lVar8 + 0x28);
      puVar14 = &DAT_100ff5140;
      FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
      lVar17 = (long)param_2 + lVar18;
      _swift_getEnumCaseMultiPayload(lVar17,puVar14);
      bVar5 = (int)lVar17 != 1;
      if (bVar5) {
        puVar15 = &DAT_100ff5148;
        FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
        (**(code **)(*(long *)(puVar15 + -8) + 0x10))
                  ((long)param_1 + lVar18,(long)param_2 + lVar18,puVar15);
      }
      else {
        *(undefined8 *)((long)param_1 + lVar18) = *(undefined8 *)((long)param_2 + lVar18);
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar18,puVar14,!bVar5);
      uVar9 = 0xff;
      FUN_100974b84(0xff);
      lVar17 = 0;
      _swift_getTupleTypeMetadata2(0,lVar8,uVar9,"asyncChannel quiescingHelper ",0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar17 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar17 + 0x30));
      _swift_retain();
      uVar9 = 1;
    }
    else {
      if (iVar7 != 0) {
        plVar12 = _memcpy(param_1,param_2,*(size_t *)(lVar17 + 0x40));
        return plVar12;
      }
      lVar18 = *(long *)(param_3 + 0x10);
      (**(code **)(*(long *)(lVar18 + -8) + 0x10))(param_1,param_2,lVar18);
      lVar17 = 0xff;
      FUN_100a2d4c0();
      puVar14 = &DAT_100ff5038;
      FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
      lVar8 = 0;
      _swift_getTupleTypeMetadata3
                (0,lVar18,lVar17,puVar14,"childChannelSetup configuration onServerRunning ",0);
      puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
      puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
      uVar9 = 0;
      FUN_100a0de2c(0);
      puVar10 = puVar2;
      _swift_getEnumCaseMultiPayload(puVar2,uVar9);
      if ((int)puVar10 == 2) {
        NVar6 = Network::NWEndpoint::typeMetadataAccessor();
        (**(code **)(*(long *)(CONCAT71(extraout_var,NVar6.value) + -8) + 0x10))
                  (puVar1,puVar2,CONCAT71(extraout_var,NVar6.value));
      }
      else {
        if ((int)puVar10 == 1) {
          uVar11 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar11;
        }
        else {
          uVar11 = puVar2[1];
          *puVar1 = *puVar2;
          puVar1[1] = uVar11;
          puVar1[2] = puVar2[2];
        }
        _swift_bridgeObjectRetain();
      }
      _swift_storeEnumTagMultiPayload(puVar1,uVar9,puVar10);
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x14));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x14));
      uVar9 = puVar3[1];
      *puVar10 = *puVar3;
      puVar10[1] = uVar9;
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x18)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x18));
      *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x1c)) =
           *(undefined1 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x1c));
      puVar10 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x20));
      puVar3 = (undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x20));
      lVar18 = puVar3[3];
      _swift_bridgeObjectRetain();
      if (lVar18 == 0) {
        uVar9 = *puVar3;
        uVar19 = puVar3[3];
        uVar11 = puVar3[2];
        puVar10[1] = puVar3[1];
        *puVar10 = uVar9;
        puVar10[3] = uVar19;
        puVar10[2] = uVar11;
        puVar10[4] = puVar3[4];
      }
      else {
        uVar9 = puVar3[4];
        puVar10[3] = lVar18;
        puVar10[4] = uVar9;
        (*(code *)**(undefined8 **)(lVar18 + -8))(puVar10,puVar3,lVar18);
      }
      *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar17 + 0x24)) =
           *(undefined8 *)((long)puVar2 + (long)*(int *)(lVar17 + 0x24));
      plVar12 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x40));
      param_2 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
      lVar17 = *param_2;
      _swift_retain();
      if (lVar17 == 0) {
        lVar17 = *param_2;
        plVar12[1] = param_2[1];
        *plVar12 = lVar17;
      }
      else {
        lVar8 = param_2[1];
        *plVar12 = lVar17;
        plVar12[1] = lVar8;
        _swift_retain();
      }
      uVar9 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar9);
  }
  else {
    lVar17 = *param_2;
    *param_1 = lVar17;
    uVar16 = (ulong)uVar4 & 0xff;
    param_1 = (long *)(lVar17 + (uVar16 + 0x10 & (uVar16 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a2b6b8 | FUN_100a2b6b8 */

void FUN_100a2b6b8(long *param_1,long param_2)

{
  NWEndpoint NVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  AsyncThrowingStream AVar9;
  undefined *puVar10;
  undefined7 extraout_var;
  long lVar11;
  
  plVar3 = param_1;
  _swift_getEnumCaseMultiPayload();
  iVar2 = (int)plVar3;
  if (iVar2 != 2) {
    if (iVar2 != 1) {
      if (iVar2 == 0) {
        lVar11 = *(long *)(param_2 + 0x10);
        (**(code **)(*(long *)(lVar11 + -8) + 8))(param_1,lVar11);
        lVar4 = 0xff;
        FUN_100a2d4c0();
        puVar10 = &DAT_100ff5038;
        FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
        lVar5 = 0;
        _swift_getTupleTypeMetadata3
                  (0,lVar11,lVar4,puVar10,"childChannelSetup configuration onServerRunning ",0);
        lVar11 = (long)param_1 + (long)*(int *)(lVar5 + 0x30);
        uVar6 = 0;
        FUN_100a0de2c(0);
        lVar7 = lVar11;
        _swift_getEnumCaseMultiPayload(lVar11,uVar6);
        iVar2 = (int)lVar7;
        if (iVar2 == 2) {
          NVar1 = Network::NWEndpoint::typeMetadataAccessor();
          (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 8))
                    (lVar11,CONCAT71(extraout_var,NVar1.value));
        }
        else if ((iVar2 == 1) || (iVar2 == 0)) {
          _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + 8));
        }
        _swift_bridgeObjectRelease(*(undefined8 *)(lVar11 + *(int *)(lVar4 + 0x14) + 8));
        if (*(long *)(lVar11 + *(int *)(lVar4 + 0x20) + 0x18) != 0) {
          FUN_100004594();
        }
        _swift_release(*(undefined8 *)(lVar11 + *(int *)(lVar4 + 0x24)));
        param_1 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x40));
        if (*param_1 != 0) {
          param_1 = param_1 + 1;
          goto LAB_100a2b920;
        }
      }
      return;
    }
    _swift_unknownObjectRelease(*param_1);
    uVar6 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x10),0x100cc971c,
               &TargetProtocolRequirement_100cc972c);
    lVar7 = 0;
    FUN_1005e3ae8(0,uVar6,PTR___type_metadata_for_Swift_Never_100eadc38);
    lVar4 = (long)*(int *)(lVar7 + 0x24);
    uVar8 = 0;
    FUN_1005e8278(0,uVar6);
    lVar11 = (long)param_1 + lVar4;
    _swift_getEnumCaseMultiPayload(lVar11,uVar8);
    if ((int)lVar11 == 1) {
      _swift_release(*(undefined8 *)((long)param_1 + lVar4));
    }
    else {
      FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
      AVar9 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar9.unknown + -8) + 8))((long)param_1 + lVar4,AVar9.unknown);
    }
    lVar4 = (long)*(int *)(lVar7 + 0x28);
    puVar10 = &DAT_100ff5140;
    FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
    lVar11 = (long)param_1 + lVar4;
    _swift_getEnumCaseMultiPayload(lVar11,puVar10);
    if ((int)lVar11 == 1) {
      _swift_release(*(undefined8 *)((long)param_1 + lVar4));
    }
    else {
      puVar10 = &DAT_100ff5148;
      FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
      (**(code **)(*(long *)(puVar10 + -8) + 8))((long)param_1 + lVar4,puVar10);
    }
    uVar6 = 0xff;
    FUN_100974b84(0xff);
    lVar11 = 0;
    _swift_getTupleTypeMetadata2(0,lVar7,uVar6,"asyncChannel quiescingHelper ",0);
    param_1 = (long *)((long)param_1 + (long)*(int *)(lVar11 + 0x30));
  }
LAB_100a2b920:
  _swift_release(*param_1);
  return;
}



/* Address: 0x100a2b944 | FUN_100a2b944 */

undefined8 * FUN_100a2b944(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  NWEndpoint NVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  AsyncThrowingStream AVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined7 extraout_var;
  long lVar17;
  undefined8 uVar18;
  
  puVar13 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  iVar7 = (int)puVar13;
  if (iVar7 == 2) {
    *param_1 = *param_2;
    _swift_retain();
    uVar10 = 2;
  }
  else if (iVar7 == 1) {
    uVar18 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar18;
    uVar10 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc971c,
               &TargetProtocolRequirement_100cc972c);
    lVar9 = 0;
    FUN_1005e3ae8(0,uVar10,PTR___type_metadata_for_Swift_Never_100eadc38);
    lVar17 = (long)*(int *)(lVar9 + 0x24);
    uVar12 = 0;
    FUN_1005e8278(0,uVar10);
    _swift_unknownObjectRetain(uVar18);
    lVar8 = (long)param_2 + lVar17;
    _swift_getEnumCaseMultiPayload(lVar8,uVar12);
    bVar5 = (int)lVar8 != 1;
    if (bVar5) {
      FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
      AVar14 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar14.unknown + -8) + 0x10))
                ((long)param_1 + lVar17,(long)param_2 + lVar17,AVar14.unknown);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar17) = *(undefined8 *)((long)param_2 + lVar17);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar17,uVar12,!bVar5);
    lVar17 = (long)*(int *)(lVar9 + 0x28);
    puVar15 = &DAT_100ff5140;
    FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
    lVar8 = (long)param_2 + lVar17;
    _swift_getEnumCaseMultiPayload(lVar8,puVar15);
    bVar5 = (int)lVar8 != 1;
    if (bVar5) {
      puVar16 = &DAT_100ff5148;
      FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
      (**(code **)(*(long *)(puVar16 + -8) + 0x10))
                ((long)param_1 + lVar17,(long)param_2 + lVar17,puVar16);
    }
    else {
      *(undefined8 *)((long)param_1 + lVar17) = *(undefined8 *)((long)param_2 + lVar17);
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload((long)param_1 + lVar17,puVar15,!bVar5);
    uVar10 = 0xff;
    FUN_100974b84(0xff);
    lVar8 = 0;
    _swift_getTupleTypeMetadata2(0,lVar9,uVar10,"asyncChannel quiescingHelper ",0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
    _swift_retain();
    uVar10 = 1;
  }
  else {
    if (iVar7 != 0) {
      puVar13 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar13;
    }
    lVar17 = *(long *)(param_3 + 0x10);
    (**(code **)(*(long *)(lVar17 + -8) + 0x10))(param_1,param_2,lVar17);
    lVar8 = 0xff;
    FUN_100a2d4c0();
    puVar15 = &DAT_100ff5038;
    FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
    lVar9 = 0;
    _swift_getTupleTypeMetadata3
              (0,lVar17,lVar8,puVar15,"childChannelSetup configuration onServerRunning ",0);
    puVar13 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar9 + 0x30));
    puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar9 + 0x30));
    uVar10 = 0;
    FUN_100a0de2c(0);
    puVar11 = puVar1;
    _swift_getEnumCaseMultiPayload(puVar1,uVar10);
    if ((int)puVar11 == 2) {
      NVar6 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar6.value) + -8) + 0x10))
                (puVar13,puVar1,CONCAT71(extraout_var,NVar6.value));
    }
    else {
      if ((int)puVar11 == 1) {
        uVar12 = puVar1[1];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
      }
      else {
        uVar12 = puVar1[1];
        *puVar13 = *puVar1;
        puVar13[1] = uVar12;
        puVar13[2] = puVar1[2];
      }
      _swift_bridgeObjectRetain();
    }
    _swift_storeEnumTagMultiPayload(puVar13,uVar10,puVar11);
    puVar11 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x14));
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x14));
    uVar10 = puVar2[1];
    *puVar11 = *puVar2;
    puVar11[1] = uVar10;
    *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x18)) =
         *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x18));
    *(undefined1 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x1c)) =
         *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x1c));
    puVar11 = (undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x20));
    puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x20));
    lVar17 = puVar2[3];
    _swift_bridgeObjectRetain();
    if (lVar17 == 0) {
      uVar10 = *puVar2;
      uVar18 = puVar2[3];
      uVar12 = puVar2[2];
      puVar11[1] = puVar2[1];
      *puVar11 = uVar10;
      puVar11[3] = uVar18;
      puVar11[2] = uVar12;
      puVar11[4] = puVar2[4];
    }
    else {
      uVar10 = puVar2[4];
      puVar11[3] = lVar17;
      puVar11[4] = uVar10;
      (*(code *)**(undefined8 **)(lVar17 + -8))(puVar11,puVar2,lVar17);
    }
    *(undefined8 *)((long)puVar13 + (long)*(int *)(lVar8 + 0x24)) =
         *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar8 + 0x24));
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar9 + 0x40));
    plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar9 + 0x40));
    lVar8 = *plVar4;
    _swift_retain();
    if (lVar8 == 0) {
      lVar8 = *plVar4;
      plVar3[1] = plVar4[1];
      *plVar3 = lVar8;
    }
    else {
      lVar9 = plVar4[1];
      *plVar3 = lVar8;
      plVar3[1] = lVar9;
      _swift_retain();
    }
    uVar10 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar10);
  return param_1;
}



/* Address: 0x100a2bd54 | FUN_100a2bd54 */

undefined8 * FUN_100a2bd54(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  bool bVar5;
  NWEndpoint NVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  AsyncThrowingStream AVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined7 extraout_var;
  long lVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  if (param_1 != param_2) {
    lVar16 = *(long *)(param_3 + -8);
    (**(code **)(lVar16 + 8))(param_1,param_3);
    puVar12 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    iVar7 = (int)puVar12;
    if (iVar7 == 2) {
      *param_1 = *param_2;
      _swift_retain();
      uVar9 = 2;
    }
    else if (iVar7 == 1) {
      uVar18 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar18;
      uVar9 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc971c,
                 &TargetProtocolRequirement_100cc972c);
      lVar8 = 0;
      FUN_1005e3ae8(0,uVar9,PTR___type_metadata_for_Swift_Never_100eadc38);
      lVar17 = (long)*(int *)(lVar8 + 0x24);
      uVar11 = 0;
      FUN_1005e8278(0,uVar9);
      _swift_unknownObjectRetain(uVar18);
      lVar16 = (long)param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar16,uVar11);
      bVar5 = (int)lVar16 != 1;
      if (bVar5) {
        FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
        AVar13 = Swift::AsyncThrowingStream::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar13.unknown + -8) + 0x10))
                  ((long)param_1 + lVar17,(long)param_2 + lVar17,AVar13.unknown);
      }
      else {
        *(undefined8 *)((long)param_1 + lVar17) = *(undefined8 *)((long)param_2 + lVar17);
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar17,uVar11,!bVar5);
      lVar17 = (long)*(int *)(lVar8 + 0x28);
      puVar14 = &DAT_100ff5140;
      FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
      lVar16 = (long)param_2 + lVar17;
      _swift_getEnumCaseMultiPayload(lVar16,puVar14);
      bVar5 = (int)lVar16 != 1;
      if (bVar5) {
        puVar15 = &DAT_100ff5148;
        FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
        (**(code **)(*(long *)(puVar15 + -8) + 0x10))
                  ((long)param_1 + lVar17,(long)param_2 + lVar17,puVar15);
      }
      else {
        *(undefined8 *)((long)param_1 + lVar17) = *(undefined8 *)((long)param_2 + lVar17);
        _swift_retain();
      }
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar17,puVar14,!bVar5);
      uVar9 = 0xff;
      FUN_100974b84(0xff);
      lVar16 = 0;
      _swift_getTupleTypeMetadata2(0,lVar8,uVar9,"asyncChannel quiescingHelper ",0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar16 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar16 + 0x30));
      _swift_retain();
      uVar9 = 1;
    }
    else {
      if (iVar7 != 0) {
        puVar12 = _memcpy(param_1,param_2,*(size_t *)(lVar16 + 0x40));
        return puVar12;
      }
      lVar17 = *(long *)(param_3 + 0x10);
      (**(code **)(*(long *)(lVar17 + -8) + 0x10))(param_1,param_2,lVar17);
      lVar16 = 0xff;
      FUN_100a2d4c0();
      puVar14 = &DAT_100ff5038;
      FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
      lVar8 = 0;
      _swift_getTupleTypeMetadata3
                (0,lVar17,lVar16,puVar14,"childChannelSetup configuration onServerRunning ",0);
      puVar12 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar8 + 0x30));
      puVar1 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar8 + 0x30));
      uVar9 = 0;
      FUN_100a0de2c(0);
      puVar10 = puVar1;
      _swift_getEnumCaseMultiPayload(puVar1,uVar9);
      if ((int)puVar10 == 2) {
        NVar6 = Network::NWEndpoint::typeMetadataAccessor();
        (**(code **)(*(long *)(CONCAT71(extraout_var,NVar6.value) + -8) + 0x10))
                  (puVar12,puVar1,CONCAT71(extraout_var,NVar6.value));
      }
      else {
        if ((int)puVar10 == 1) {
          *puVar12 = *puVar1;
          puVar12[1] = puVar1[1];
        }
        else {
          *puVar12 = *puVar1;
          puVar12[1] = puVar1[1];
          puVar12[2] = puVar1[2];
        }
        _swift_bridgeObjectRetain();
      }
      _swift_storeEnumTagMultiPayload(puVar12,uVar9,puVar10);
      puVar10 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar16 + 0x14));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x14));
      *puVar10 = *puVar2;
      puVar10[1] = puVar2[1];
      *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar16 + 0x18)) =
           *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x18));
      *(undefined1 *)((long)puVar12 + (long)*(int *)(lVar16 + 0x1c)) =
           *(undefined1 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x1c));
      puVar10 = (undefined8 *)((long)puVar12 + (long)*(int *)(lVar16 + 0x20));
      puVar2 = (undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x20));
      lVar17 = puVar2[3];
      _swift_bridgeObjectRetain();
      if (lVar17 == 0) {
        uVar11 = puVar2[1];
        uVar9 = *puVar2;
        uVar19 = puVar2[3];
        uVar18 = puVar2[2];
        puVar10[4] = puVar2[4];
        puVar10[1] = uVar11;
        *puVar10 = uVar9;
        puVar10[3] = uVar19;
        puVar10[2] = uVar18;
      }
      else {
        puVar10[3] = lVar17;
        puVar10[4] = puVar2[4];
        (*(code *)**(undefined8 **)(lVar17 + -8))(puVar10,puVar2,lVar17);
      }
      *(undefined8 *)((long)puVar12 + (long)*(int *)(lVar16 + 0x24)) =
           *(undefined8 *)((long)puVar1 + (long)*(int *)(lVar16 + 0x24));
      plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x40));
      plVar4 = (long *)((long)param_2 + (long)*(int *)(lVar8 + 0x40));
      lVar16 = *plVar4;
      _swift_retain();
      if (lVar16 == 0) {
        lVar16 = *plVar4;
        plVar3[1] = plVar4[1];
        *plVar3 = lVar16;
      }
      else {
        lVar8 = plVar4[1];
        *plVar3 = lVar16;
        plVar3[1] = lVar8;
        _swift_retain();
      }
      uVar9 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar9);
  }
  return param_1;
}



/* Address: 0x100a2c198 | FUN_100a2c198 */

undefined8 * FUN_100a2c198(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  NWEndpoint NVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined7 extraout_var;
  undefined8 *puVar8;
  AsyncThrowingStream AVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  puVar8 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,param_3);
  if ((int)puVar8 == 1) {
    uVar12 = *param_2;
    param_1[1] = param_2[1];
    *param_1 = uVar12;
    uVar12 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc971c,
               &TargetProtocolRequirement_100cc972c);
    lVar6 = 0;
    FUN_1005e3ae8(0,uVar12,PTR___type_metadata_for_Swift_Never_100eadc38);
    lVar14 = (long)*(int *)(lVar6 + 0x24);
    lVar13 = 0;
    FUN_1005e8278(0,uVar12);
    lVar5 = (long)param_2 + lVar14;
    _swift_getEnumCaseMultiPayload(lVar5,lVar13);
    if ((int)lVar5 == 0) {
      FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
      AVar9 = Swift::AsyncThrowingStream::typeMetadataAccessor();
      (**(code **)(*(long *)(AVar9.unknown + -8) + 0x20))
                ((long)param_1 + lVar14,(long)param_2 + lVar14,AVar9.unknown);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar14,lVar13,0);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
              *(size_t *)(*(long *)(lVar13 + -8) + 0x40));
    }
    lVar13 = (long)*(int *)(lVar6 + 0x28);
    puVar10 = &DAT_100ff5140;
    FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
    lVar5 = (long)param_2 + lVar13;
    _swift_getEnumCaseMultiPayload(lVar5,puVar10);
    if ((int)lVar5 == 0) {
      puVar11 = &DAT_100ff5148;
      FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
      (**(code **)(*(long *)(puVar11 + -8) + 0x20))
                ((long)param_1 + lVar13,(long)param_2 + lVar13,puVar11);
      _swift_storeEnumTagMultiPayload((long)param_1 + lVar13,puVar10,0);
    }
    else {
      _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
              *(size_t *)(*(long *)(puVar10 + -8) + 0x40));
    }
    uVar12 = 0xff;
    FUN_100974b84(0xff);
    lVar5 = 0;
    _swift_getTupleTypeMetadata2(0,lVar6,uVar12,"asyncChannel quiescingHelper ",0);
    *(undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
    uVar12 = 1;
  }
  else {
    if ((int)puVar8 != 0) {
      puVar8 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return puVar8;
    }
    lVar13 = *(long *)(param_3 + 0x10);
    (**(code **)(*(long *)(lVar13 + -8) + 0x20))(param_1,param_2,lVar13);
    lVar5 = 0xff;
    FUN_100a2d4c0();
    puVar10 = &DAT_100ff5038;
    FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
    lVar6 = 0;
    _swift_getTupleTypeMetadata3
              (0,lVar13,lVar5,puVar10,"childChannelSetup configuration onServerRunning ",0);
    pvVar1 = (void *)((long)param_1 + (long)*(int *)(lVar6 + 0x30));
    pvVar2 = (void *)((long)param_2 + (long)*(int *)(lVar6 + 0x30));
    lVar13 = 0;
    FUN_100a0de2c();
    pvVar7 = pvVar2;
    _swift_getEnumCaseMultiPayload(pvVar2,lVar13);
    if ((int)pvVar7 == 2) {
      NVar4 = Network::NWEndpoint::typeMetadataAccessor();
      (**(code **)(*(long *)(CONCAT71(extraout_var,NVar4.value) + -8) + 0x20))
                (pvVar1,pvVar2,CONCAT71(extraout_var,NVar4.value));
      _swift_storeEnumTagMultiPayload(pvVar1,lVar13,2);
    }
    else {
      _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
    }
    puVar8 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar5 + 0x14));
    uVar12 = *puVar8;
    puVar3 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar5 + 0x14));
    puVar3[1] = puVar8[1];
    *puVar3 = uVar12;
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar5 + 0x18)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar5 + 0x18));
    *(undefined1 *)((long)pvVar1 + (long)*(int *)(lVar5 + 0x1c)) =
         *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar5 + 0x1c));
    puVar8 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar5 + 0x20));
    puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar5 + 0x20));
    uVar12 = *puVar3;
    uVar16 = puVar3[3];
    uVar15 = puVar3[2];
    puVar8[1] = puVar3[1];
    *puVar8 = uVar12;
    puVar8[3] = uVar16;
    puVar8[2] = uVar15;
    puVar8[4] = puVar3[4];
    *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar5 + 0x24)) =
         *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar5 + 0x24));
    param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar6 + 0x40));
    uVar12 = *param_2;
    puVar8 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x40));
    puVar8[1] = param_2[1];
    *puVar8 = uVar12;
    uVar12 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,param_3,uVar12);
  return param_1;
}



/* Address: 0x100a2c4e4 | FUN_100a2c4e4 */

undefined8 * FUN_100a2c4e4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 *puVar3;
  NWEndpoint NVar4;
  long lVar5;
  void *pvVar6;
  undefined7 extraout_var;
  undefined8 *puVar7;
  AsyncThrowingStream AVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (param_1 != param_2) {
    lVar12 = *(long *)(param_3 + -8);
    (**(code **)(lVar12 + 8))(param_1,param_3);
    puVar7 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,param_3);
    if ((int)puVar7 == 1) {
      uVar11 = *param_2;
      param_1[1] = param_2[1];
      *param_1 = uVar11;
      uVar11 = 0xff;
      _swift_getAssociatedTypeWitness
                (0xff,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x100cc971c,
                 &TargetProtocolRequirement_100cc972c);
      lVar5 = 0;
      FUN_1005e3ae8(0,uVar11,PTR___type_metadata_for_Swift_Never_100eadc38);
      lVar14 = (long)*(int *)(lVar5 + 0x24);
      lVar13 = 0;
      FUN_1005e8278(0,uVar11);
      lVar12 = (long)param_2 + lVar14;
      _swift_getEnumCaseMultiPayload(lVar12,lVar13);
      if ((int)lVar12 == 0) {
        FUN_1000f8b08(&DAT_100ff3d20,&DAT_100c8d8b0);
        AVar8 = Swift::AsyncThrowingStream::typeMetadataAccessor();
        (**(code **)(*(long *)(AVar8.unknown + -8) + 0x20))
                  ((long)param_1 + lVar14,(long)param_2 + lVar14,AVar8.unknown);
        _swift_storeEnumTagMultiPayload((long)param_1 + lVar14,lVar13,0);
      }
      else {
        _memcpy((void *)((long)param_1 + lVar14),(void *)((long)param_2 + lVar14),
                *(size_t *)(*(long *)(lVar13 + -8) + 0x40));
      }
      lVar13 = (long)*(int *)(lVar5 + 0x28);
      puVar9 = &DAT_100ff5140;
      FUN_1000f7830(&DAT_100ff5140,&DAT_100c8e6b8);
      lVar12 = (long)param_2 + lVar13;
      _swift_getEnumCaseMultiPayload(lVar12,puVar9);
      if ((int)lVar12 == 0) {
        puVar10 = &DAT_100ff5148;
        FUN_1000f7830(&DAT_100ff5148,&DAT_100c8e6c0);
        (**(code **)(*(long *)(puVar10 + -8) + 0x20))
                  ((long)param_1 + lVar13,(long)param_2 + lVar13,puVar10);
        _swift_storeEnumTagMultiPayload((long)param_1 + lVar13,puVar9,0);
      }
      else {
        _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
                *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
      }
      uVar11 = 0xff;
      FUN_100974b84(0xff);
      lVar12 = 0;
      _swift_getTupleTypeMetadata2(0,lVar5,uVar11,"asyncChannel quiescingHelper ",0);
      *(undefined8 *)((long)param_1 + (long)*(int *)(lVar12 + 0x30)) =
           *(undefined8 *)((long)param_2 + (long)*(int *)(lVar12 + 0x30));
      uVar11 = 1;
    }
    else {
      if ((int)puVar7 != 0) {
        puVar7 = _memcpy(param_1,param_2,*(size_t *)(lVar12 + 0x40));
        return puVar7;
      }
      lVar13 = *(long *)(param_3 + 0x10);
      (**(code **)(*(long *)(lVar13 + -8) + 0x20))(param_1,param_2,lVar13);
      lVar12 = 0xff;
      FUN_100a2d4c0();
      puVar9 = &DAT_100ff5038;
      FUN_1000f8b08(&DAT_100ff5038,&DAT_100c8e4c0);
      lVar5 = 0;
      _swift_getTupleTypeMetadata3
                (0,lVar13,lVar12,puVar9,"childChannelSetup configuration onServerRunning ",0);
      pvVar1 = (void *)((long)param_1 + (long)*(int *)(lVar5 + 0x30));
      pvVar2 = (void *)((long)param_2 + (long)*(int *)(lVar5 + 0x30));
      lVar13 = 0;
      FUN_100a0de2c();
      pvVar6 = pvVar2;
      _swift_getEnumCaseMultiPayload(pvVar2,lVar13);
      if ((int)pvVar6 == 2) {
        NVar4 = Network::NWEndpoint::typeMetadataAccessor();
        (**(code **)(*(long *)(CONCAT71(extraout_var,NVar4.value) + -8) + 0x20))
                  (pvVar1,pvVar2,CONCAT71(extraout_var,NVar4.value));
        _swift_storeEnumTagMultiPayload(pvVar1,lVar13,2);
      }
      else {
        _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(lVar13 + -8) + 0x40));
      }
      puVar7 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar12 + 0x14));
      uVar11 = *puVar7;
      puVar3 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar12 + 0x14));
      puVar3[1] = puVar7[1];
      *puVar3 = uVar11;
      *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar12 + 0x18)) =
           *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar12 + 0x18));
      *(undefined1 *)((long)pvVar1 + (long)*(int *)(lVar12 + 0x1c)) =
           *(undefined1 *)((long)pvVar2 + (long)*(int *)(lVar12 + 0x1c));
      puVar7 = (undefined8 *)((long)pvVar1 + (long)*(int *)(lVar12 + 0x20));
      puVar3 = (undefined8 *)((long)pvVar2 + (long)*(int *)(lVar12 + 0x20));
      uVar11 = *puVar3;
      uVar16 = puVar3[3];
      uVar15 = puVar3[2];
      puVar7[1] = puVar3[1];
      *puVar7 = uVar11;
      puVar7[3] = uVar16;
      puVar7[2] = uVar15;
      puVar7[4] = puVar3[4];
      *(undefined8 *)((long)pvVar1 + (long)*(int *)(lVar12 + 0x24)) =
           *(undefined8 *)((long)pvVar2 + (long)*(int *)(lVar12 + 0x24));
      param_2 = (undefined8 *)((long)param_2 + (long)*(int *)(lVar5 + 0x40));
      uVar11 = *param_2;
      puVar7 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar5 + 0x40));
      puVar7[1] = param_2[1];
      *puVar7 = uVar11;
      uVar11 = 0;
    }
    _swift_storeEnumTagMultiPayload(param_1,param_3,uVar11);
  }
  return param_1;
}



/* Address: 0x100a2c848 | FUN_100a2c848 */

void FUN_100a2c848(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  uVar1 = 0xff;
  FUN_100a2d4c0(0xff);
  uVar2 = 0xff;
  FUN_1000c9144(0xff,&DAT_100ff51d0,FUN_100a2c8ac,PTR_typeMetadataAccessor_100eac9c8);
  _swift_getTupleTypeMetadata3
            (0,uVar3,uVar1,uVar2,"childChannelSetup configuration onServerRunning ",0);
  return;
}



/* Address: 0x100a2c8ac | FUN_100a2c8ac */

void FUN_100a2c8ac(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100ff51d8 != 0) {
    return;
  }
  puVar1 = &DAT_100ff4a00;
  FUN_1000f8b08(&DAT_100ff4a00,&DAT_100c8e400);
  uVar2 = 0x64000001;
  _swift_getFunctionTypeMetadata1(0x64000001,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff51d8 = uVar2;
  return;
}



/* Address: 0x100a2c8c0 | FUN_100a2c8c0 */

void FUN_100a2c8c0(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100ff4a00;
  FUN_1000f8b08(&DAT_100ff4a00,&DAT_100c8e400);
  uVar2 = 0x64000001;
  _swift_getFunctionTypeMetadata1(0x64000001,puVar1,PTR___type_metadata_for____100eae0c8 + 8);
  DAT_100ff51d8 = uVar2;
  return;
}



/* Address: 0x100a2c910 | FUN_100a2c910 */

void FUN_100a2c910(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff51e0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68bf8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68bf8,&DAT_100eec8d0);
  DAT_100ff51e0 = pTVar1;
  return;
}



/* Address: 0x100a2c950 | FUN_100a2c950 */

void FUN_100a2c950(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff51e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c69090;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69090,&DAT_100eecb18);
  DAT_100ff51e8 = pTVar1;
  return;
}



/* Address: 0x100a2c990 | thunk_FUN_100a2ca90 */

undefined1  [16] thunk_FUN_100a2ca90(undefined8 param_1,undefined8 param_2)

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
  puVar1 = &DAT_100f28eb8;
  _swift_allocObject(&DAT_100f28eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = uStack_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x100a2c994 | thunk_FUN_100a2caec */

void thunk_FUN_100a2caec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f28e90;
  _swift_allocObject(&DAT_100f28e90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100a2c998 | FUN_100a2c998 */

void FUN_100a2c998(undefined8 param_1)

{
  FUN_100625a38(param_1,&DAT_100ff5208,&DAT_100ff51f8,&DAT_100c8e730,FUN_100a2c9bc);
  return;
}



/* Address: 0x100a2c9bc | FUN_100a2c9bc */

void FUN_100a2c9bc(undefined8 param_1)

{
  FUN_100625a38(param_1,&DAT_100ff5210,&DAT_100ff5218,&DAT_100c8e738,FUN_100a2c9e0);
  return;
}



/* Address: 0x100a2c9e0 | FUN_100a2c9e0 */

void FUN_100a2c9e0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  if (DAT_100ff5220 != 0) {
    return;
  }
  puVar1 = &DAT_100ff5228;
  FUN_1000f8b08(&DAT_100ff5228,&DAT_100c8e740);
  puVar2 = &DAT_100ff4a00;
  FUN_1000f8b08(&DAT_100ff4a00,&DAT_100c8e400);
  uVar3 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar2,puVar1);
  DAT_100ff5220 = uVar3;
  return;
}



/* Address: 0x100a2ca5c | FUN_100a2ca5c */

void FUN_100a2ca5c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100a2ca80 | FUN_100a2ca80 */

void FUN_100a2ca80(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a2a9a8(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100a2ca88 | FUN_100a2ca88 */

void FUN_100a2ca88(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a2aa8c(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100a2ca90 | FUN_100a2ca90 */

undefined1  [16] FUN_100a2ca90(undefined8 param_1,undefined8 param_2)

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
  puVar1 = &DAT_100f28eb8;
  _swift_allocObject(&DAT_100f28eb8,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = local_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x100a2caec | FUN_100a2caec */

void FUN_100a2caec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f28e90;
  _swift_allocObject(&DAT_100f28e90,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x100a2cb4c | FUN_100a2cb4c */

void FUN_100a2cb4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff5230 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c68df0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c68df0,&DAT_100eec998);
  DAT_100ff5230 = pTVar1;
  return;
}



/* Address: 0x100a2cb8c | FUN_100a2cb8c */

void FUN_100a2cb8c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100a2ab78(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x100a2cb94 | FUN_100a2cb94 */

void FUN_100a2cb94(void)

{
  FUN_100894fcc(PTR__swift_unknownObjectRelease_100eae458);
  return;
}


