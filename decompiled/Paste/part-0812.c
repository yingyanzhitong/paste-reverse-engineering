/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008e4914 | FUN_1008e4914 */

void FUN_1008e4914(ulong param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x78);
  *(ulong *)(unaff_x20 + 0x78) = param_1;
  FUN_1005d8534(uVar1);
  _swift_retain(param_1 & 0x3fffffffffffffff);
  _swift_retain();
  return;
}



/* Address: 0x1008e4948 | FUN_1008e4948 */

code * FUN_1008e4948(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 *unaff_x20;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 auStack_140 [24];
  long local_128;
  undefined8 local_118;
  long lStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  code *pcStack_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [24];
  long local_90 [3];
  long local_78;
  undefined **ppuStack_70;
  
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[2];
  lVar9 = unaff_x20[3];
  _swift_getObjectType();
  (**(code **)(lVar9 + 0x10))();
  _swift_beginAccess(unaff_x20 + 10,auStack_a8,0,0);
  FUN_1000f8cac(unaff_x20 + 10,auStack_140,&DAT_100febfa0,&DAT_100c83848);
  if (local_128 == 0) {
    lVar2 = 0;
    FUN_100902944();
    lVar3 = lVar2;
    _swift_allocObject();
    *(undefined8 *)(lVar3 + 0x10) = uVar10;
    *(long *)(lVar3 + 0x18) = lVar9;
    puVar4 = &DAT_100febfa8;
    FUN_1000f7830(&DAT_100febfa8,&DAT_100c83850);
    uVar5 = uVar10;
    FUN_1008f6880(uVar10,lVar9,puVar4);
    *(undefined8 *)(lVar3 + 0x20) = uVar5;
    uVar5 = uVar10;
    _swift_unknownObjectRetain();
    FUN_1008f6880();
    *(undefined8 *)(lVar3 + 0x28) = uVar5;
    *(undefined8 *)(lVar3 + 0x30) = 0x600000001;
    ppuStack_70 = &PTR_PTR_100f142b8;
    local_90[0] = lVar3;
    local_78 = lVar2;
    _swift_unknownObjectRetain_n(uVar10,2);
    if (local_128 != 0) {
      FUN_1000fb4c4(auStack_140,&DAT_100febfa0,&DAT_100c83848);
    }
  }
  else {
    FUN_100076508(auStack_140,local_90);
  }
  uVar1 = *(undefined1 *)(unaff_x20 + 0x10);
  lVar3 = unaff_x20[4];
  uVar5 = unaff_x20[5];
  if (lVar3 == 0) {
    pcVar13 = (code *)unaff_x20[6];
    puVar6 = (undefined *)unaff_x20[7];
    puVar4 = puVar6;
  }
  else {
    puVar4 = &DAT_100f103b0;
    _swift_allocObject(&DAT_100f103b0,0x30,7);
    puVar6 = (undefined *)unaff_x20[7];
    uVar12 = unaff_x20[6];
    *(undefined8 *)(puVar4 + 0x18) = unaff_x20[7];
    *(undefined8 *)(puVar4 + 0x10) = uVar12;
    *(long *)(puVar4 + 0x20) = lVar3;
    *(undefined8 *)(puVar4 + 0x28) = uVar5;
    pcVar13 = FUN_1008f8aa0;
  }
  _swift_retain(puVar6);
  _swift_beginAccess(unaff_x20 + 8,auStack_c0,0,0);
  uVar11 = unaff_x20[8];
  uVar14 = unaff_x20[0xf];
  FUN_100076688(local_90,auStack_140);
  uVar12 = unaff_x20[9];
  puVar6 = &DAT_100f10338;
  _swift_allocObject(&DAT_100f10338,0x40,7);
  puVar6[0x10] = uVar1;
  *(code **)(puVar6 + 0x18) = pcVar13;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  *(undefined8 *)(puVar6 + 0x28) = uVar11;
  *(undefined8 *)(puVar6 + 0x30) = uVar14;
  *(undefined8 *)(puVar6 + 0x38) = uVar8;
  puVar7 = &DAT_100f10360;
  _swift_allocObject(&DAT_100f10360,0x20,7);
  *(code **)(puVar7 + 0x10) = FUN_1008f8a1c;
  *(undefined **)(puVar7 + 0x18) = puVar6;
  pcStack_f0 = FUN_1008f8a4c;
  uVar8 = uVar10;
  local_118 = uVar10;
  lStack_110 = lVar9;
  local_108 = param_1;
  uStack_100 = param_2;
  local_f8 = param_3;
  local_e8 = puVar7;
  local_d0 = uVar12;
  _swift_getObjectType();
  puVar6 = &DAT_100febfb0;
  FUN_1000f7830(&DAT_100febfb0,&DAT_100c84e90);
  uVar12 = uVar10;
  FUN_1008f6880(uVar10,lVar9,puVar6);
  uStack_d8 = 250000000;
  local_e0 = 50000000;
  local_c8 = uVar12;
  _swift_unknownObjectRetain(uVar10);
  FUN_1000f8cac(auStack_140,&local_1c0,&DAT_100febfb8,&DAT_100c83860);
  puVar6 = &DAT_100f10388;
  _swift_allocObject(&DAT_100f10388,0x90,7);
  *(undefined8 *)(puVar6 + 0x58) = uStack_178;
  *(undefined8 *)(puVar6 + 0x50) = local_180;
  *(undefined8 *)(puVar6 + 0x68) = uStack_168;
  *(undefined8 *)(puVar6 + 0x60) = uStack_170;
  *(undefined8 *)(puVar6 + 0x78) = uStack_158;
  *(undefined8 *)(puVar6 + 0x70) = local_160;
  *(undefined8 *)(puVar6 + 0x88) = uStack_148;
  *(undefined8 *)(puVar6 + 0x80) = uStack_150;
  *(undefined8 *)(puVar6 + 0x18) = uStack_1b8;
  *(undefined8 *)(puVar6 + 0x10) = local_1c0;
  *(undefined8 *)(puVar6 + 0x28) = uStack_1a8;
  *(undefined8 *)(puVar6 + 0x20) = uStack_1b0;
  *(undefined8 *)(puVar6 + 0x38) = uStack_198;
  *(undefined8 *)(puVar6 + 0x30) = local_1a0;
  *(undefined8 *)(puVar6 + 0x48) = uStack_188;
  *(undefined8 *)(puVar6 + 0x40) = uStack_190;
  pcVar13 = *(code **)(lVar9 + 0x18);
  FUN_1005d84e8(uVar14);
  FUN_1005d84e8(uVar14);
  FUN_100011128(lVar3,uVar5);
  _swift_bridgeObjectRetain(uVar11);
  _swift_retain(puVar4);
  _swift_bridgeObjectRetain(param_2);
  (*pcVar13)(FUN_1008f8a98,puVar6,uVar8,lVar9);
  _swift_release(puVar6);
  pcVar13 = FUN_1009044d0;
  FUN_1008f5578(FUN_1009044d0,0);
  FUN_1005d8534(uVar14);
  _swift_release(puVar4);
  FUN_1000fb4c4(auStack_140,&DAT_100febfb8,&DAT_100c83860);
  FUN_100004594(local_90);
  return pcVar13;
}



/* Address: 0x1008e4ce0 | FUN_1008e4ce0 */

/* WARNING: Removing unreachable block (ram,0x0001008e4d6c) */

code * FUN_1008e4ce0(class_t *param_1)

{
  code *pcVar1;
  undefined **ppuVar2;
  class_t *pcVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined *puVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  long lVar9;
  undefined *puVar10;
  code *pcVar11;
  code *pcVar12;
  ulong uVar13;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  pcVar8 = param_1;
  _object_getClass();
  if (pcVar8 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e5218);
    (*pcVar1)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  _swift_unknownObjectRetain();
  FUN_100951d08();
  pcVar8 = param_1[1].superclass;
  puVar6 = (undefined *)pcVar8[1].vtable;
  ppuVar2 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  puVar10 = *ppuVar2;
  _swift_retain(param_1);
  _swift_retain(pcVar8);
  if (puVar10 == puVar6) {
    pcVar7 = param_1;
    FUN_100623594(param_1,&PTR_PTR_100f0f5c8,in_x6);
    puVar6 = &DAT_100f13738;
    _swift_allocObject(&DAT_100f13738,0x30,7);
    *(undefined8 *)(puVar6 + 0x10) = in_x7;
    *(class_t **)(puVar6 + 0x18) = param_1;
    *(undefined8 *)(puVar6 + 0x20) = in_x4;
    *(undefined8 *)(puVar6 + 0x28) = in_x5;
    _swift_retain(param_1);
    _swift_retain(puVar6);
    FUN_1005d84e8(in_x7);
    _swift_retain(in_x5);
    pcVar3 = pcVar7;
    FUN_1008f7070(pcVar7,thunk_FUN_1008fdd44,puVar6);
    _swift_release(pcVar7);
    _swift_release_n(puVar6,2);
    puVar6 = &DAT_100f13760;
    _swift_allocObject(&DAT_100f13760,0x38,7);
    *(class_t **)(puVar6 + 0x10) = pcVar8;
    *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f19fa8;
    *(class_t **)(puVar6 + 0x20) = param_1;
    *(code **)(puVar6 + 0x28) = thunk_FUN_1008e865c;
    *(undefined8 *)(puVar6 + 0x30) = 0;
    _swift_retain(param_1);
    _swift_retain(pcVar8);
    pcVar7 = pcVar3;
    FUN_1008f7070(pcVar3,thunk_FUN_1008fe664,puVar6);
    _swift_release(pcVar3);
    _swift_release(puVar6);
    puVar6 = &DAT_100f13788;
    _swift_allocObject(&DAT_100f13788,0x20,7);
    *(code **)(puVar6 + 0x10) = thunk_FUN_1008fdcb4;
    *(class_t **)(puVar6 + 0x18) = param_1;
    _swift_retain(param_1);
    pcVar4 = thunk_FUN_1008fd66c;
    FUN_1008f5090(thunk_FUN_1008fd66c,puVar6);
    _swift_release(pcVar7);
    _swift_release(puVar6);
    pcVar1 = (code *)&DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    lVar9 = *(long *)(pcVar4 + 0x30);
    uVar13 = *(ulong *)(pcVar4 + 0x28);
    *(undefined8 *)(pcVar1 + 0x30) = *(undefined8 *)(pcVar4 + 0x30);
    *(ulong *)(pcVar1 + 0x28) = uVar13;
    *(undefined8 *)(pcVar1 + 0x10) = 0;
    *(undefined8 *)(pcVar1 + 0x18) = 0;
    pcVar1[0x20] = (code)0xff;
    *(undefined8 *)(pcVar1 + 0x40) = 0;
    *(undefined8 *)(pcVar1 + 0x48) = 0;
    *(undefined8 *)(pcVar1 + 0x38) = 0;
    puVar6 = &DAT_100f137b0;
    _swift_allocObject(&DAT_100f137b0,0x30,7);
    *(code **)(puVar6 + 0x10) = pcVar4;
    *(code **)(puVar6 + 0x18) = pcVar1;
    *(code **)(puVar6 + 0x20) = thunk_FUN_1008fdce0;
    *(class_t **)(puVar6 + 0x28) = param_1;
    uVar5 = uVar13;
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar9 + 0x10);
    _swift_retain_n(param_1,4);
    _swift_retain_n(pcVar4,2);
    _swift_retain_n(pcVar1,2);
    _swift_unknownObjectRetain(uVar13);
    uVar13 = uVar5;
    (*pcVar12)(uVar5,lVar9);
    if ((uVar13 & 1) == 0) {
      puVar10 = &DAT_100f137d8;
      _swift_allocObject(&DAT_100f137d8,0x28,7);
      *(code **)(puVar10 + 0x10) = pcVar4;
      *(code **)(puVar10 + 0x18) = thunk_FUN_1008fbab4;
      *(undefined **)(puVar10 + 0x20) = puVar6;
      pcVar12 = *(code **)(lVar9 + 0x18);
      _swift_retain(pcVar4);
      _swift_retain(puVar6);
      (*pcVar12)(thunk_FUN_1008fa090,puVar10,uVar5,lVar9);
      _swift_release_n(param_1,2);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(pcVar4 + 0x10,auStack_80,0,0);
      if (pcVar4[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar4 + 0x38,auStack_98,0x21,0);
        FUN_10064967c(thunk_FUN_1008fbab4,puVar6);
        _swift_endAccess(auStack_98);
        pcVar12 = (code *)0x0;
        pcVar11 = (code *)0x0;
        pcVar7 = (class_t *)0x0;
      }
      else {
        _swift_retain(param_1);
        pcVar12 = pcVar4;
        pcVar11 = pcVar1;
        pcVar7 = param_1;
        FUN_1008f8c5c(pcVar4,pcVar1,param_1);
        _swift_release(param_1);
      }
      FUN_1006486f8(pcVar12,pcVar11,pcVar7);
      FUN_100004550(pcVar12,pcVar11);
      _swift_release_n(param_1,2);
      _swift_bridgeObjectRelease(pcVar7);
    }
    _swift_release(pcVar1);
    _swift_release(puVar6);
    _swift_release_n(param_1,3);
    _swift_release_n(pcVar4,2);
    _swift_release(pcVar8);
  }
  else {
    puVar6 = &DAT_100f13710;
    _swift_allocObject(&DAT_100f13710,0x58,7);
    *(class_t **)(puVar6 + 0x10) = pcVar8;
    *(undefined ***)(puVar6 + 0x18) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar6 + 0x20) = in_x6;
    *(class_t **)(puVar6 + 0x28) = param_1;
    *(undefined8 *)(puVar6 + 0x30) = in_x7;
    *(undefined8 *)(puVar6 + 0x38) = in_x4;
    *(undefined8 *)(puVar6 + 0x40) = in_x5;
    *(code **)(puVar6 + 0x48) = thunk_FUN_1008e865c;
    *(undefined8 *)(puVar6 + 0x50) = 0;
    _swift_retain(param_1);
    _swift_retain(pcVar8);
    FUN_1005d84e8(in_x7);
    _swift_retain(in_x5);
    _swift_bridgeObjectRetain(in_x6);
    pcVar1 = thunk_FUN_1008fe5ec;
    FUN_1008e2668(thunk_FUN_1008fe5ec,puVar6);
    _swift_release(pcVar8);
    _swift_release(puVar6);
    _swift_release_n(param_1,2);
  }
  return pcVar1;
}



/* Address: 0x1008e5218 | FUN_1008e5218 */

undefined8 FUN_1008e5218(ulong param_1)

{
  undefined4 uVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *unaff_x20;
  uVar6 = unaff_x20[9];
  uVar3 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  _swift_getObjectType(uVar3);
  (**(code **)(lVar4 + 0x10))();
  uVar1 = *(undefined4 *)(&DAT_100c83b94 + (param_1 >> 0x3e) * 4);
  puVar2 = &DAT_100f103d8;
  _swift_allocObject(&DAT_100f103d8,0x28,7);
  *(ulong *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = uVar5;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar5 = uVar3;
  FUN_1008e52ec(uVar3,lVar4,uVar1,thunk_FUN_1008f8b04,puVar2);
  _swift_unknownObjectRelease(uVar3);
  _swift_release(puVar2);
  return uVar5;
}



/* Address: 0x1008e52ec | FUN_1008e52ec */

/* WARNING: Removing unreachable block (ram,0x0001008e53f4) */

code * FUN_1008e52ec(class_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined **ppuVar5;
  class_t *pcVar6;
  code *pcVar7;
  ulong uVar8;
  long unaff_x20;
  class_t *pcVar9;
  undefined *puVar10;
  code *pcVar11;
  class_t *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  long lVar15;
  code *pcVar16;
  ulong uVar17;
  code *local_d0;
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar15 = *(long *)(unaff_x20 + 0x20);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar15 == 0) {
    local_d0 = *(code **)(unaff_x20 + 0x30);
    puVar4 = *(undefined **)(unaff_x20 + 0x38);
    puVar3 = puVar4;
  }
  else {
    puVar3 = &DAT_100f12ec8;
    _swift_allocObject(&DAT_100f12ec8,0x30,7);
    puVar4 = *(undefined **)(unaff_x20 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar3 + 0x18) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar3 + 0x10) = uVar13;
    *(long *)(puVar3 + 0x20) = lVar15;
    *(undefined8 *)(puVar3 + 0x28) = uVar1;
    local_d0 = thunk_FUN_1008f8aa0;
  }
  _swift_retain(puVar4);
  _swift_beginAccess(unaff_x20 + 0x40,auStack_78,0,0);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x78);
  pcVar12 = param_1;
  _object_getClass();
  if (pcVar12 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008e58ec);
    (*pcVar2)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  FUN_100011128(lVar15,uVar1);
  _swift_bridgeObjectRetain(uVar14);
  FUN_1005d84e8(uVar13);
  _swift_unknownObjectRetain();
  FUN_100951d08();
  pcVar12 = param_1[1].superclass;
  puVar4 = (undefined *)pcVar12[1].vtable;
  ppuVar5 = &PTR___tlv_bootstrap_101048e48;
  (*(code *)PTR___tlv_bootstrap_101048e48)();
  puVar10 = *ppuVar5;
  _swift_retain(param_1);
  _swift_retain(pcVar12);
  if (puVar10 == puVar4) {
    pcVar9 = param_1;
    FUN_100623594(param_1,&PTR_PTR_100f0f5c8,uVar14);
    puVar4 = &DAT_100f12e00;
    _swift_allocObject(&DAT_100f12e00,0x30,7);
    *(undefined8 *)(puVar4 + 0x10) = uVar13;
    *(class_t **)(puVar4 + 0x18) = param_1;
    *(code **)(puVar4 + 0x20) = local_d0;
    *(undefined **)(puVar4 + 0x28) = puVar3;
    FUN_1005d84e8(uVar13);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    pcVar6 = pcVar9;
    FUN_1008f7070(pcVar9,FUN_1008fdd44,puVar4);
    _swift_release(pcVar9);
    _swift_release(puVar4);
    puVar4 = &DAT_100f12e28;
    _swift_allocObject(&DAT_100f12e28,0x38,7);
    *(class_t **)(puVar4 + 0x10) = pcVar12;
    *(undefined ***)(puVar4 + 0x18) = &PTR_PTR_100f19fa8;
    *(class_t **)(puVar4 + 0x20) = param_1;
    *(undefined8 *)(puVar4 + 0x28) = param_4;
    *(undefined8 *)(puVar4 + 0x30) = param_5;
    _swift_retain(param_1);
    _swift_retain(pcVar12);
    _swift_retain(puVar4);
    _swift_retain(param_5);
    pcVar9 = pcVar6;
    FUN_1008f7070(pcVar6,thunk_FUN_1008fe664,puVar4);
    _swift_release(pcVar6);
    _swift_release_n(puVar4,2);
    puVar4 = &DAT_100f12e50;
    _swift_allocObject(&DAT_100f12e50,0x20,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_1008fdcb4;
    *(class_t **)(puVar4 + 0x18) = param_1;
    _swift_retain(param_1);
    pcVar7 = thunk_FUN_1008fd66c;
    FUN_1008f5090(thunk_FUN_1008fd66c,puVar4);
    _swift_release(pcVar9);
    _swift_release(puVar4);
    pcVar2 = (code *)&DAT_100febf98;
    FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
    _swift_allocObject();
    lVar15 = *(long *)(pcVar7 + 0x30);
    uVar17 = *(ulong *)(pcVar7 + 0x28);
    *(undefined8 *)(pcVar2 + 0x30) = *(undefined8 *)(pcVar7 + 0x30);
    *(ulong *)(pcVar2 + 0x28) = uVar17;
    *(undefined8 *)(pcVar2 + 0x10) = 0;
    *(undefined8 *)(pcVar2 + 0x18) = 0;
    pcVar2[0x20] = (code)0xff;
    *(undefined8 *)(pcVar2 + 0x40) = 0;
    *(undefined8 *)(pcVar2 + 0x48) = 0;
    *(undefined8 *)(pcVar2 + 0x38) = 0;
    puVar4 = &DAT_100f12e78;
    _swift_allocObject(&DAT_100f12e78,0x30,7);
    *(code **)(puVar4 + 0x10) = pcVar7;
    *(code **)(puVar4 + 0x18) = pcVar2;
    *(code **)(puVar4 + 0x20) = thunk_FUN_1008fdce0;
    *(class_t **)(puVar4 + 0x28) = param_1;
    uVar8 = uVar17;
    _swift_getObjectType();
    pcVar11 = *(code **)(lVar15 + 0x10);
    _swift_retain_n(param_1,4);
    _swift_retain_n(pcVar7,2);
    _swift_retain_n(pcVar2,2);
    _swift_unknownObjectRetain(uVar17);
    uVar17 = uVar8;
    (*pcVar11)(uVar8,lVar15);
    if ((uVar17 & 1) == 0) {
      puVar10 = &DAT_100f12ea0;
      _swift_allocObject(&DAT_100f12ea0,0x28,7);
      *(code **)(puVar10 + 0x10) = pcVar7;
      *(code **)(puVar10 + 0x18) = thunk_FUN_1008fbab4;
      *(undefined **)(puVar10 + 0x20) = puVar4;
      pcVar11 = *(code **)(lVar15 + 0x18);
      _swift_retain(pcVar7);
      _swift_retain(puVar4);
      (*pcVar11)(thunk_FUN_1008fa090,puVar10,uVar8,lVar15);
      _swift_release(puVar10);
    }
    else {
      _swift_beginAccess(pcVar7 + 0x10,auStack_98,0,0);
      if (pcVar7[0x20] == (code)0xff) {
        _swift_beginAccess(pcVar7 + 0x38,auStack_b0,0x21,0);
        FUN_10064967c(thunk_FUN_1008fbab4,puVar4);
        _swift_endAccess(auStack_b0);
        pcVar11 = (code *)0x0;
        pcVar16 = (code *)0x0;
        pcVar9 = (class_t *)0x0;
      }
      else {
        _swift_retain(param_1);
        pcVar11 = pcVar7;
        pcVar16 = pcVar2;
        pcVar9 = param_1;
        FUN_1008f8c5c(pcVar7,pcVar2,param_1);
        _swift_release(param_1);
      }
      FUN_1006486f8(pcVar11,pcVar16,pcVar9);
      FUN_100004550(pcVar11,pcVar16);
      _swift_bridgeObjectRelease(pcVar9);
    }
    FUN_1005d8534(uVar13);
    _swift_release(puVar3);
    _swift_release(pcVar2);
    _swift_release(puVar4);
    _swift_release_n(pcVar7,2);
    _swift_release(pcVar12);
    _swift_release_n(param_1,5);
    _swift_bridgeObjectRelease(uVar14);
  }
  else {
    puVar4 = &DAT_100f12dd8;
    _swift_allocObject(&DAT_100f12dd8,0x58,7);
    *(class_t **)(puVar4 + 0x10) = pcVar12;
    *(undefined ***)(puVar4 + 0x18) = &PTR_PTR_100f19fa8;
    *(undefined8 *)(puVar4 + 0x20) = uVar14;
    *(class_t **)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = uVar13;
    *(code **)(puVar4 + 0x38) = local_d0;
    *(undefined **)(puVar4 + 0x40) = puVar3;
    *(undefined8 *)(puVar4 + 0x48) = param_4;
    *(undefined8 *)(puVar4 + 0x50) = param_5;
    _swift_bridgeObjectRetain(uVar14);
    FUN_1005d84e8(uVar13);
    _swift_retain(param_1);
    _swift_retain(pcVar12);
    _swift_retain(puVar3);
    _swift_retain(param_5);
    pcVar2 = thunk_FUN_1008fe5ec;
    FUN_1008e2668(thunk_FUN_1008fe5ec,puVar4);
    FUN_1005d8534(uVar13);
    _swift_release(pcVar12);
    _swift_release(puVar4);
    _swift_release_n(param_1,2);
    _swift_bridgeObjectRelease(uVar14);
    _swift_release(puVar3);
  }
  return pcVar2;
}



/* Address: 0x1008e58ec | FUN_1008e58ec */

/* WARNING: Removing unreachable block (ram,0x0001008e5930) */

undefined8 FUN_1008e58ec(ulong param_1,undefined8 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = *unaff_x20;
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  uVar6 = unaff_x20[9];
  uVar2 = unaff_x20[2];
  lVar4 = unaff_x20[3];
  _swift_getObjectType(uVar2);
  (**(code **)(lVar4 + 0x10))();
  uVar1 = *(undefined4 *)(&DAT_100c83b94 + (param_1 >> 0x3e) * 4);
  puVar3 = &DAT_100f10400;
  _swift_allocObject(&DAT_100f10400,0x28,7);
  *(ulong *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = uVar6;
  *(undefined8 *)(puVar3 + 0x20) = uVar5;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar5 = uVar2;
  FUN_1008e52ec(uVar2,lVar4,uVar1,thunk_FUN_1008f8b04,puVar3);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_unknownObjectRelease(uVar2);
  _swift_release(puVar3);
  return uVar5;
}



/* Address: 0x1008e5a64 | FUN_1008e5a64 */

undefined8 FUN_1008e5a64(undefined8 param_1)

{
  undefined *puVar1;
  long unaff_x20;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar3 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType(uVar2);
  (**(code **)(lVar3 + 0x10))();
  puVar1 = &DAT_100f10428;
  _swift_allocObject(&DAT_100f10428,0x20,7);
  *(int *)(puVar1 + 0x10) = (int)param_1;
  *(int *)(puVar1 + 0x14) = (int)((ulong)param_1 >> 0x20);
  *(undefined8 *)(puVar1 + 0x18) = uVar4;
  uVar4 = uVar2;
  FUN_1008e52ec(uVar2,lVar3,0x28,FUN_1008f8ab4,puVar1);
  _swift_unknownObjectRelease(uVar2);
  _swift_release(puVar1);
  return uVar4;
}



/* Address: 0x1008e5b20 | FUN_1008e5b20 */

long FUN_1008e5b20(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long local_98 [3];
  long local_80 [3];
  undefined *local_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar11 = *(long *)(param_2 + 8);
  pcVar13 = *(code **)(lVar11 + 0x50);
  lVar3 = lVar2;
  local_80[0] = param_1;
  (*pcVar13)();
  FUN_1008f6880();
  local_68 = &DAT_100f1c2a8;
  pcVar10 = *(code **)(lVar11 + 0x48);
  local_98[0] = param_1;
  local_80[0] = param_3;
  _swift_retain();
  (*pcVar10)(local_80,lVar3,lVar2,lVar11);
  _swift_release(lVar3);
  FUN_100004594(local_80);
  local_80[0] = param_1;
  (*pcVar13)(lVar2);
  _swift_getObjectType();
  puVar4 = &DAT_100f12d10;
  _swift_allocObject(&DAT_100f12d10,0x30,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(long *)(puVar4 + 0x20) = param_1;
  *(long *)(puVar4 + 0x28) = param_2;
  pcVar13 = *(code **)(lVar11 + 0x38);
  _swift_retain(lVar3);
  _swift_unknownObjectRetain(param_1);
  pcVar10 = FUN_1008fdd0c;
  puVar9 = puVar4;
  (*pcVar13)();
  _swift_unknownObjectRelease(lVar2);
  _swift_release(puVar4);
  puVar4 = &DAT_100f12d38;
  _swift_allocObject(&DAT_100f12d38,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(code **)(puVar4 + 0x18) = pcVar10;
  *(undefined **)(puVar4 + 0x20) = puVar9;
  puVar5 = &DAT_100f12d60;
  _swift_allocObject(&DAT_100f12d60,0x28,7);
  *(code **)(puVar5 + 0x10) = thunk_FUN_1008fda50;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(long *)(puVar5 + 0x20) = lVar3;
  uVar6 = *(ulong *)(lVar3 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar2 + 0x10);
  _swift_retain_n(lVar3,3);
  _swift_retain_n(param_4,2);
  _swift_retain_n(puVar9,2);
  _swift_retain_n(puVar4,2);
  uVar7 = uVar6;
  (*pcVar13)(uVar6,lVar2);
  if ((uVar7 & 1) == 0) {
    puVar8 = &DAT_100f12d88;
    _swift_allocObject(&DAT_100f12d88,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar3;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
    *(undefined **)(puVar8 + 0x20) = puVar5;
    pcVar10 = *(code **)(lVar2 + 0x18);
    _swift_retain(lVar3);
    _swift_retain(puVar5);
    (*pcVar10)(thunk_FUN_100653138,puVar8,uVar6,lVar2);
    _swift_release(puVar9);
    _swift_release(param_4);
    _swift_release(puVar8);
    _swift_release(lVar3);
    _swift_release(puVar4);
    _swift_release(puVar5);
  }
  else {
    _swift_beginAccess(lVar3 + 0x10,local_80,0,0);
    cVar1 = *(char *)(lVar3 + 0x18);
    if (cVar1 == -1) {
      _swift_beginAccess(lVar3 + 0x30,local_98,0x21,0);
      FUN_10064967c(thunk_FUN_1008fa3dc,puVar5);
      _swift_endAccess(local_98);
    }
    else {
      uVar12 = *(undefined8 *)(lVar3 + 0x10);
      FUN_100308524(uVar12,cVar1);
      FUN_100950b80(param_4,pcVar10,puVar9);
      FUN_100308538(uVar12,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(puVar9);
    _swift_release(param_4);
    _swift_release(lVar3);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(lVar3);
  _swift_release(puVar9);
  _swift_release(param_4);
  _swift_release(puVar4);
  return lVar3;
}



/* Address: 0x1008e5e9c | thunk_FUN_1008e5ea0 */

/* WARNING: Removing unreachable block (ram,0x0001008e5fac) */

class_t * thunk_FUN_1008e5ea0(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x20;
  class_t *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  pcVar12 = *(class_t **)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar11 + 0x10))();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    pcVar3 = *(code **)(unaff_x20 + 0x30);
    puVar5 = *(undefined **)(unaff_x20 + 0x38);
    puVar4 = puVar5;
  }
  else {
    puVar4 = &DAT_100f10478;
    _swift_allocObject(&DAT_100f10478,0x30,7);
    puVar5 = *(undefined **)(unaff_x20 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar4 + 0x10) = uVar13;
    *(long *)(puVar4 + 0x20) = lVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar2;
    pcVar3 = thunk_FUN_1008f8aa0;
  }
  _swift_retain(puVar5);
  _swift_beginAccess(unaff_x20 + 0x40,auStack_78,0,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  pcVar6 = pcVar12;
  _object_getClass();
  if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008e6120);
    (*pcVar3)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  FUN_100011128(lVar1,uVar2);
  _swift_bridgeObjectRetain(uVar13);
  pcVar6 = pcVar12;
  _swift_unknownObjectRetain();
  FUN_10095213c();
  pcVar7 = pcVar12;
  _swift_getObjectType();
  pcVar8 = pcVar7;
  (**(code **)(lVar11 + 0x10))();
  if (((ulong)pcVar8 & 1) == 0) {
    puVar5 = &DAT_100f10450;
    _swift_allocObject(&DAT_100f10450,0x40,7);
    *(class_t **)(puVar5 + 0x10) = pcVar12;
    *(long *)(puVar5 + 0x18) = lVar11;
    *(undefined8 *)(puVar5 + 0x20) = uVar13;
    *(class_t **)(puVar5 + 0x28) = pcVar6;
    *(code **)(puVar5 + 0x30) = pcVar3;
    *(undefined **)(puVar5 + 0x38) = puVar4;
    _swift_unknownObjectRetain(pcVar12);
    _swift_retain(pcVar6);
    _swift_retain(puVar4);
    puVar9 = &DAT_100febf90;
    FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
    pcVar10 = FUN_1008f8af8;
    FUN_100641014(FUN_1008f8af8,puVar5,pcVar7,puVar9,lVar11);
    _swift_release(pcVar6);
    _swift_release(puVar5);
  }
  else {
    pcVar10 = (code *)pcVar12;
    FUN_1008e6120(pcVar12,lVar11,uVar13,pcVar6,pcVar3,puVar4);
    _swift_release(pcVar6);
    _swift_bridgeObjectRelease(uVar13);
  }
  _swift_unknownObjectRelease(pcVar12);
  _swift_release(puVar4);
  return (class_t *)pcVar10;
}



/* Address: 0x1008e5ea0 | FUN_1008e5ea0 */

/* WARNING: Removing unreachable block (ram,0x0001008e5fac) */

class_t * FUN_1008e5ea0(void)

{
  long lVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  class_t *pcVar6;
  class_t *pcVar7;
  class_t *pcVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  long unaff_x20;
  class_t *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_78 [24];
  
  pcVar12 = *(class_t **)(unaff_x20 + 0x10);
  lVar11 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar11 + 0x10))();
  lVar1 = *(long *)(unaff_x20 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  if (lVar1 == 0) {
    pcVar3 = *(code **)(unaff_x20 + 0x30);
    puVar5 = *(undefined **)(unaff_x20 + 0x38);
    puVar4 = puVar5;
  }
  else {
    puVar4 = &DAT_100f10478;
    _swift_allocObject(&DAT_100f10478,0x30,7);
    puVar5 = *(undefined **)(unaff_x20 + 0x38);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(puVar4 + 0x18) = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(puVar4 + 0x10) = uVar13;
    *(long *)(puVar4 + 0x20) = lVar1;
    *(undefined8 *)(puVar4 + 0x28) = uVar2;
    pcVar3 = thunk_FUN_1008f8aa0;
  }
  _swift_retain(puVar5);
  _swift_beginAccess(unaff_x20 + 0x40,auStack_78,0,0);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x40);
  pcVar6 = pcVar12;
  _object_getClass();
  if (pcVar6 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008e6120);
    (*pcVar3)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  FUN_100011128(lVar1,uVar2);
  _swift_bridgeObjectRetain(uVar13);
  pcVar6 = pcVar12;
  _swift_unknownObjectRetain();
  FUN_10095213c();
  pcVar7 = pcVar12;
  _swift_getObjectType();
  pcVar8 = pcVar7;
  (**(code **)(lVar11 + 0x10))();
  if (((ulong)pcVar8 & 1) == 0) {
    puVar5 = &DAT_100f10450;
    _swift_allocObject(&DAT_100f10450,0x40,7);
    *(class_t **)(puVar5 + 0x10) = pcVar12;
    *(long *)(puVar5 + 0x18) = lVar11;
    *(undefined8 *)(puVar5 + 0x20) = uVar13;
    *(class_t **)(puVar5 + 0x28) = pcVar6;
    *(code **)(puVar5 + 0x30) = pcVar3;
    *(undefined **)(puVar5 + 0x38) = puVar4;
    _swift_unknownObjectRetain(pcVar12);
    _swift_retain(pcVar6);
    _swift_retain(puVar4);
    puVar9 = &DAT_100febf90;
    FUN_1000f7830(&DAT_100febf90,&DAT_100c83810);
    pcVar10 = FUN_1008f8af8;
    FUN_100641014(FUN_1008f8af8,puVar5,pcVar7,puVar9,lVar11);
    _swift_release(pcVar6);
    _swift_release(puVar5);
  }
  else {
    pcVar10 = (code *)pcVar12;
    FUN_1008e6120(pcVar12,lVar11,uVar13,pcVar6,pcVar3,puVar4);
    _swift_release(pcVar6);
    _swift_bridgeObjectRelease(uVar13);
  }
  _swift_unknownObjectRelease(pcVar12);
  _swift_release(puVar4);
  return (class_t *)pcVar10;
}



/* Address: 0x1008e6120 | FUN_1008e6120 */

undefined *
FUN_1008e6120(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar6 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar1 = &DAT_100f12ba8;
  _swift_allocObject(&DAT_100f12ba8,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_6;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain();
  _swift_retain(param_6);
  _swift_retain(param_4);
  uVar2 = uVar6;
  FUN_1008f7070(uVar6,thunk_FUN_1008fcb94,puVar1);
  _swift_release(uVar6);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f12bd0;
  _swift_allocObject(&DAT_100f12bd0,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  _swift_retain(param_4);
  _swift_retain(puVar1);
  _swift_unknownObjectRetain(param_1);
  uVar6 = uVar2;
  FUN_1008f7070(uVar2,FUN_1008fdc90,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f12bf8;
  _swift_allocObject(&DAT_100f12bf8,0x20,7);
  *(code **)(puVar1 + 0x10) = FUN_1008fdcb4;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain_n(param_4,2);
  pcVar3 = thunk_FUN_1008fd66c;
  FUN_1008f5090(thunk_FUN_1008fd66c,puVar1);
  _swift_release(uVar6);
  _swift_release(puVar1);
  puVar1 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar7 = *(long *)(pcVar3 + 0x30);
  uVar10 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar1 + 0x28) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar4 = &DAT_100f12c20;
  _swift_allocObject(&DAT_100f12c20,0x30,7);
  *(code **)(puVar4 + 0x10) = pcVar3;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(code **)(puVar4 + 0x20) = FUN_1008fdce0;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  uVar5 = uVar10;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(param_4,3);
  _swift_unknownObjectRetain(uVar10);
  uVar10 = uVar5;
  (*pcVar9)(uVar5,lVar7);
  if ((uVar10 & 1) == 0) {
    puVar8 = &DAT_100f12c48;
    _swift_allocObject(&DAT_100f12c48,0x28,7);
    *(code **)(puVar8 + 0x10) = pcVar3;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar8 + 0x20) = puVar4;
    pcVar9 = *(code **)(lVar7 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar4);
    (*pcVar9)(thunk_FUN_1008fa090,puVar8,uVar5,lVar7);
    _swift_release(param_4);
    _swift_release(pcVar3);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar4);
      _swift_endAccess(auStack_90);
      pcVar9 = (code *)0x0;
      puVar8 = (undefined *)0x0;
      uVar6 = 0;
    }
    else {
      _swift_retain(param_4);
      pcVar9 = pcVar3;
      puVar8 = puVar1;
      uVar6 = param_4;
      FUN_1008f94f8(pcVar3,puVar1,param_4);
      _swift_release(param_4);
    }
    FUN_1006486f8(pcVar9,puVar8,uVar6);
    FUN_100004550(pcVar9,puVar8);
    _swift_release(param_4);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar6);
  }
  _swift_release_n(param_4,2);
  _swift_release(puVar1);
  _swift_release(pcVar3);
  _swift_release(puVar4);
  return puVar1;
}



/* Address: 0x1008e64bc | FUN_1008e64bc */

undefined8 FUN_1008e64bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1008f6880(param_1,param_2,PTR___type_metadata_for____100eae0c8 + 8);
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  (*param_4)(uVar1);
  _swift_release(uVar1);
  return uVar1;
}



/* Address: 0x1008e651c | FUN_1008e651c */

void FUN_1008e651c(ulong param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    (*param_3)(param_2,&PTR_PTR_100f0f5c8);
  }
  else {
    uVar1 = 0;
    FUN_100952c0c(0);
    _swift_retain(param_1 & 0x3fffffffffffffff);
    uVar2 = param_1;
    FUN_100622850(param_1,"NIOPosix/Bootstrap.swift",0x18,2,0x4df,uVar1,&PTR_PTR_100f0f570);
    puVar3 = &DAT_100f12fb8;
    _swift_allocObject(&DAT_100f12fb8,0x28,7);
    *(code **)(puVar3 + 0x10) = param_3;
    *(undefined8 *)(puVar3 + 0x18) = param_4;
    *(undefined8 *)(puVar3 + 0x20) = param_2;
    _swift_retain();
    _swift_retain(param_4);
    _swift_retain(param_2);
    FUN_1008f7070(uVar2,thunk_FUN_1008fcb94,puVar3);
    _swift_release(uVar2);
    _swift_release_n(puVar3,2);
    FUN_1005d8534(param_1);
  }
  return;
}



/* Address: 0x1008e6634 | FUN_1008e6634 */

char * FUN_1008e6634(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined *puVar3;
  char *pcVar4;
  
  uVar1 = 0;
  FUN_100952c0c(0);
  pcVar2 = "NIOPosix/Bootstrap.swift";
  FUN_100622844("NIOPosix/Bootstrap.swift",0x18,2,0x30a,uVar1,&PTR_PTR_100f0f570);
  _swift_getObjectType(*(undefined8 *)(pcVar2 + 0x20));
  FUN_100642338();
  puVar3 = &DAT_100f12f90;
  _swift_allocObject(&DAT_100f12f90,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_4;
  *(undefined8 *)(puVar3 + 0x18) = param_5;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  _swift_retain();
  _swift_retain(param_5);
  _swift_retain(param_3);
  pcVar4 = pcVar2;
  FUN_1008f77b8(pcVar2,thunk_FUN_1008fcb94,puVar3);
  _swift_release(pcVar2);
  _swift_release_n(puVar3,2);
  return pcVar4;
}



/* Address: 0x1008e6720 | FUN_1008e6720 */

undefined *
FUN_1008e6720(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined *puVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  undefined *puVar8;
  code *pcVar9;
  ulong uVar10;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar6 = param_4;
  FUN_100623594(param_4,&PTR_PTR_100f0f5c8);
  puVar1 = &DAT_100f131e8;
  _swift_allocObject(&DAT_100f131e8,0x30,7);
  *(undefined8 *)(puVar1 + 0x10) = param_5;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_6;
  *(undefined8 *)(puVar1 + 0x28) = param_7;
  _swift_retain();
  FUN_1005d84e8(param_5);
  _swift_retain(param_4);
  _swift_retain(param_7);
  uVar2 = uVar6;
  FUN_1008f7070(uVar6,thunk_FUN_1008fdd44,puVar1);
  _swift_release(uVar6);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f13210;
  _swift_allocObject(&DAT_100f13210,0x38,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = param_4;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(undefined8 *)(puVar1 + 0x30) = param_9;
  _swift_retain(param_4);
  _swift_retain(puVar1);
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_9);
  uVar6 = uVar2;
  FUN_1008f7070(uVar2,thunk_FUN_1008fe664,puVar1);
  _swift_release(uVar2);
  _swift_release_n(puVar1,2);
  puVar1 = &DAT_100f13238;
  _swift_allocObject(&DAT_100f13238,0x20,7);
  *(code **)(puVar1 + 0x10) = thunk_FUN_1008fdcb4;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  _swift_retain(param_4);
  pcVar3 = thunk_FUN_1008fd66c;
  FUN_1008f5090(thunk_FUN_1008fd66c,puVar1);
  _swift_release(uVar6);
  _swift_release(puVar1);
  puVar1 = &DAT_100febf98;
  FUN_1000f7830(&DAT_100febf98,&DAT_100c85670);
  _swift_allocObject();
  lVar7 = *(long *)(pcVar3 + 0x30);
  uVar10 = *(ulong *)(pcVar3 + 0x28);
  *(undefined8 *)(puVar1 + 0x30) = *(undefined8 *)(pcVar3 + 0x30);
  *(ulong *)(puVar1 + 0x28) = uVar10;
  *(undefined8 *)(puVar1 + 0x10) = 0;
  *(undefined8 *)(puVar1 + 0x18) = 0;
  puVar1[0x20] = 0xff;
  *(undefined8 *)(puVar1 + 0x40) = 0;
  *(undefined8 *)(puVar1 + 0x48) = 0;
  *(undefined8 *)(puVar1 + 0x38) = 0;
  puVar4 = &DAT_100f13260;
  _swift_allocObject(&DAT_100f13260,0x30,7);
  *(code **)(puVar4 + 0x10) = pcVar3;
  *(undefined **)(puVar4 + 0x18) = puVar1;
  *(code **)(puVar4 + 0x20) = thunk_FUN_1008fdce0;
  *(undefined8 *)(puVar4 + 0x28) = param_4;
  uVar5 = uVar10;
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar7 + 0x10);
  _swift_retain_n(param_4,4);
  _swift_retain_n(pcVar3,2);
  _swift_retain_n(puVar1,2);
  _swift_unknownObjectRetain(uVar10);
  uVar10 = uVar5;
  (*pcVar9)(uVar5,lVar7);
  if ((uVar10 & 1) == 0) {
    puVar8 = &DAT_100f13288;
    _swift_allocObject(&DAT_100f13288,0x28,7);
    *(code **)(puVar8 + 0x10) = pcVar3;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fbab4;
    *(undefined **)(puVar8 + 0x20) = puVar4;
    pcVar9 = *(code **)(lVar7 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar4);
    (*pcVar9)(thunk_FUN_1008fa090,puVar8,uVar5,lVar7);
    _swift_release(param_4);
    _swift_release(pcVar3);
    _swift_release(puVar8);
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,auStack_78,0,0);
    if (pcVar3[0x20] == (code)0xff) {
      _swift_beginAccess(pcVar3 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1008fbab4,puVar4);
      _swift_endAccess(auStack_90);
      pcVar9 = (code *)0x0;
      puVar8 = (undefined *)0x0;
      uVar6 = 0;
    }
    else {
      _swift_retain(param_4);
      pcVar9 = pcVar3;
      puVar8 = puVar1;
      uVar6 = param_4;
      FUN_1008f8c5c(pcVar3,puVar1,param_4);
      _swift_release(param_4);
    }
    FUN_1006486f8(pcVar9,puVar8,uVar6);
    FUN_100004550(pcVar9,puVar8);
    _swift_release(param_4);
    _swift_release(pcVar3);
    _swift_bridgeObjectRelease(uVar6);
  }
  _swift_release_n(param_4,2);
  _swift_release(puVar1);
  _swift_release(pcVar3);
  _swift_release(puVar4);
  return puVar1;
}



/* Address: 0x1008e6ad8 | FUN_1008e6ad8 */

void FUN_1008e6ad8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_1000fb4c4(unaff_x20 + 0x50,&DAT_100febfa0,&DAT_100c83848);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x78));
  return;
}



/* Address: 0x1008e6b2c | FUN_1008e6b2c */

void FUN_1008e6b2c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004550(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  FUN_1000fb4c4(unaff_x20 + 0x50,&DAT_100febfa0,&DAT_100c83848);
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 0x78));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008e6b88 | FUN_1008e6b88 */

void FUN_1008e6b88(long *param_1,undefined8 param_2,undefined8 param_3)

{
  long *unaff_x20;
  long lVar1;
  undefined8 uVar2;
  
  lVar1 = *unaff_x20;
  uVar2 = *(undefined8 *)(lVar1 + 0x38);
  *(undefined8 *)(lVar1 + 0x30) = param_2;
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  _swift_retain(param_3);
  _swift_release(uVar2);
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return;
}



/* Address: 0x1008e6bd0 | FUN_1008e6bd0 */

void FUN_1008e6bd0(long *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x20) == 0) {
    *(undefined8 *)(lVar2 + 0x20) = param_2;
    *(undefined8 *)(lVar2 + 0x28) = param_3;
    *param_1 = lVar2;
    _swift_retain(param_3);
    _swift_retain(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e6c0c);
  (*pcVar1)();
}



/* Address: 0x1008e6c0c | FUN_1008e6c0c */

void FUN_1008e6c0c(undefined8 *param_1,undefined8 param_2)

{
  FUN_1008f890c();
  *param_1 = param_2;
  _swift_retain();
  return;
}



/* Address: 0x1008e6c34 | FUN_1008e6c34 */

void FUN_1008e6c34(undefined8 *param_1)

{
  undefined8 *unaff_x20;
  
  *param_1 = *unaff_x20;
  _swift_retain();
  return;
}



/* Address: 0x1008e6c40 | FUN_1008e6c40 */

void FUN_1008e6c40(long *param_1,undefined8 param_2)

{
  long lVar1;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  *(undefined8 *)(lVar1 + 0x48) = param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return;
}



/* Address: 0x1008e6c54 | FUN_1008e6c54 */

void FUN_1008e6c54(void)

{
  FUN_1008e4948();
  return;
}



/* Address: 0x1008e6c74 | FUN_1008e6c74 */

void FUN_1008e6c74(void)

{
  FUN_1008e5218();
  return;
}



/* Address: 0x1008e6c94 | FUN_1008e6c94 */

void FUN_1008e6c94(void)

{
  FUN_1008e58ec();
  return;
}



/* Address: 0x1008e6cb4 | FUN_1008e6cb4 */

void FUN_1008e6cb4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x48) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008e6cd8,0,0);
  return;
}



/* Address: 0x1008e6cd8 | FUN_1008e6cd8 */

void FUN_1008e6cd8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x48) + 0x10);
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x48) + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  puVar3 = &DAT_100f104a0;
  _swift_allocObject(&DAT_100f104a0,0x18,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  plVar4 = (long *)0x1e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1008e6da8;
  FUN_1008e6e8c(plVar4,*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),uVar2,lVar5,
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                thunk_FUN_1008f8b14,puVar3,*(undefined8 *)(unaff_x22 + 0x40),
                *(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1008e6da8 | FUN_1008e6da8 */

void FUN_1008e6da8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x58);
  *(long *)(lVar3 + 0x68) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x60));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008e6e14;
  }
  else {
    pcVar2 = FUN_1008e6e50;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e6e14 | FUN_1008e6e14 */

void FUN_1008e6e14(void)

{
  long unaff_x22;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001008e6e4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e6e50 | FUN_1008e6e50 */

void FUN_1008e6e50(void)

{
  long unaff_x22;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x0001008e6e88. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e6e8c | FUN_1008e6e8c */

void FUN_1008e6e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 400) = param_12;
  *(undefined8 **)(unaff_x22 + 0x198) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x188) = param_11;
  *(undefined8 *)(unaff_x22 + 0x180) = param_10;
  *(undefined8 *)(unaff_x22 + 0x178) = param_9;
  *(undefined8 *)(unaff_x22 + 0x168) = param_7;
  *(undefined8 *)(unaff_x22 + 0x170) = param_8;
  *(undefined8 *)(unaff_x22 + 0x158) = param_5;
  *(undefined8 *)(unaff_x22 + 0x160) = param_6;
  *(undefined8 *)(unaff_x22 + 0x148) = param_3;
  *(undefined8 *)(unaff_x22 + 0x150) = param_4;
  *(undefined8 *)(unaff_x22 + 0x138) = param_1;
  *(undefined8 *)(unaff_x22 + 0x140) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1a0) = *unaff_x20;
  _swift_task_switch(FUN_1008e6ed4,0,0);
  return;
}



/* Address: 0x1008e6ed4 | FUN_1008e6ed4 */

void FUN_1008e6ed4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  code *pcVar12;
  long *plVar13;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  long unaff_x22;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  code *local_a0;
  
  lVar15 = *(long *)(unaff_x22 + 0x198);
  _swift_beginAccess(lVar15 + 0x50,unaff_x22 + 0x108,0,0);
  FUN_1000f8cac(lVar15 + 0x50,unaff_x22 + 0xb8,&DAT_100febfa0,&DAT_100c83848);
  if (*(long *)(unaff_x22 + 0xd0) == 0) {
    uVar11 = *(undefined8 *)(unaff_x22 + 0x158);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x160);
    lVar17 = 0;
    FUN_100902944();
    lVar15 = lVar17;
    _swift_allocObject();
    *(undefined8 *)(lVar15 + 0x10) = uVar11;
    *(undefined8 *)(lVar15 + 0x18) = uVar21;
    puVar8 = &DAT_100febfa8;
    FUN_1000f7830(&DAT_100febfa8,&DAT_100c83850);
    uVar9 = uVar11;
    FUN_1008f6880(uVar11,uVar21,puVar8);
    *(undefined8 *)(lVar15 + 0x20) = uVar9;
    uVar21 = uVar11;
    _swift_unknownObjectRetain();
    FUN_1008f6880();
    *(undefined8 *)(lVar15 + 0x28) = uVar21;
    *(undefined8 *)(lVar15 + 0x30) = 0x600000001;
    *(long *)(unaff_x22 + 0xa8) = lVar17;
    *(undefined ***)(unaff_x22 + 0xb0) = &PTR_PTR_100f142b8;
    *(long *)(unaff_x22 + 0x90) = lVar15;
    lVar15 = *(long *)(unaff_x22 + 0xd0);
    _swift_unknownObjectRetain_n(uVar11,2);
    if (lVar15 != 0) {
      FUN_1000fb4c4(unaff_x22 + 0xb8,&DAT_100febfa0,&DAT_100c83848);
    }
  }
  else {
    FUN_100076508(unaff_x22 + 0xb8,unaff_x22 + 0x90);
  }
  lVar17 = *(long *)(unaff_x22 + 0x198);
  uVar7 = *(undefined1 *)(lVar17 + 0x80);
  lVar15 = *(long *)(lVar17 + 0x20);
  uVar11 = *(undefined8 *)(lVar17 + 0x28);
  if (lVar15 == 0) {
    local_a0 = *(code **)(lVar17 + 0x30);
    puVar10 = *(undefined **)(lVar17 + 0x38);
    puVar8 = puVar10;
  }
  else {
    puVar8 = &DAT_100f12b08;
    _swift_allocObject(&DAT_100f12b08,0x30,7);
    puVar10 = *(undefined **)(lVar17 + 0x38);
    uVar21 = *(undefined8 *)(lVar17 + 0x30);
    *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(lVar17 + 0x38);
    *(undefined8 *)(puVar8 + 0x10) = uVar21;
    *(long *)(puVar8 + 0x20) = lVar15;
    *(undefined8 *)(puVar8 + 0x28) = uVar11;
    local_a0 = thunk_FUN_1008f8aa0;
  }
  *(undefined **)(unaff_x22 + 0x1a8) = puVar8;
  uVar14 = *(undefined8 *)(unaff_x22 + 0x1a0);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x188);
  uVar3 = *(undefined8 *)(unaff_x22 + 400);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x180);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x160);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x168);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x150);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x158);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x140);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_retain(puVar10);
  uVar23 = *(undefined8 *)(unaff_x22 + 0x178);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x170);
  _swift_beginAccess(lVar17 + 0x40,unaff_x22 + 0x120,0,0);
  uVar19 = *(undefined8 *)(lVar17 + 0x40);
  uVar20 = *(undefined8 *)(lVar17 + 0x78);
  *(undefined8 *)(unaff_x22 + 0x1b0) = uVar20;
  FUN_100076688(unaff_x22 + 0x90,unaff_x22 + 0xe0);
  uVar18 = *(undefined8 *)(lVar17 + 0x48);
  puVar10 = &DAT_100f12ab8;
  _swift_allocObject(&DAT_100f12ab8,0x70,7);
  *(undefined8 *)(puVar10 + 0x10) = uVar21;
  *(undefined8 *)(puVar10 + 0x18) = uVar3;
  puVar10[0x20] = uVar7;
  *(code **)(puVar10 + 0x28) = local_a0;
  *(undefined **)(puVar10 + 0x30) = puVar8;
  *(undefined8 *)(puVar10 + 0x38) = uVar19;
  *(undefined8 *)(puVar10 + 0x40) = uVar20;
  *(undefined8 *)(puVar10 + 0x48) = uVar4;
  *(undefined8 *)(puVar10 + 0x58) = uVar23;
  *(undefined8 *)(puVar10 + 0x50) = uVar22;
  *(undefined8 *)(puVar10 + 0x60) = uVar16;
  *(undefined8 *)(puVar10 + 0x68) = uVar14;
  FUN_100903f10(unaff_x22 + 0x10,unaff_x22 + 0xe0,uVar5,uVar9,uVar2,uVar6,uVar1,uVar18,50000000,
                250000000,FUN_1008fdbb8,puVar10,uVar3);
  FUN_1005d84e8(uVar20);
  FUN_1005d84e8(uVar20);
  _swift_unknownObjectRetain(uVar5);
  FUN_100011128(lVar15,uVar11);
  uVar11 = 0;
  FUN_100907aac(0,uVar3);
  *(undefined8 *)(unaff_x22 + 0x1b8) = uVar11;
  _swift_bridgeObjectRetain(uVar19);
  _swift_bridgeObjectRetain(uVar6);
  _swift_retain(puVar8);
  _swift_retain(uVar22);
  _swift_retain(uVar16);
  FUN_100906fd8(uVar11);
  puVar8 = &DAT_100f12ae0;
  _swift_allocObject(&DAT_100f12ae0,0x20,7);
  *(undefined8 *)(puVar8 + 0x10) = uVar21;
  *(undefined8 *)(puVar8 + 0x18) = uVar3;
  _swift_retain(uVar11);
  pcVar12 = FUN_1008fdc20;
  thunk_FUN_10064b138(FUN_1008fdc20,puVar8,uVar3);
  *(code **)(unaff_x22 + 0x1c0) = pcVar12;
  _swift_release(puVar8);
  _swift_release(uVar11);
  plVar13 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1c8) = plVar13;
  *plVar13 = unaff_x22;
  plVar13[1] = (long)FUN_1008e7250;
  FUN_1005da4a4(plVar13,*(undefined8 *)(unaff_x22 + 0x138));
  return;
}



/* Address: 0x1008e7250 | FUN_1008e7250 */

void FUN_1008e7250(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x1c0);
  *(long *)(lVar3 + 0x1d0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1c8));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008e72bc;
  }
  else {
    pcVar2 = FUN_1008e7320;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e72bc | FUN_1008e72bc */

void FUN_1008e72bc(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  FUN_1005d8534(*(undefined8 *)(unaff_x22 + 0x1b0));
  _swift_release(uVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x22 + 0x10,lVar1);
  FUN_100004594(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0001008e731c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7320 | FUN_1008e7320 */

void FUN_1008e7320(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x1b8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1a8);
  FUN_1005d8534(*(undefined8 *)(unaff_x22 + 0x1b0));
  _swift_release(uVar2);
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x22 + 0x10,lVar1);
  FUN_100004594(unaff_x22 + 0x90);
                    /* WARNING: Could not recover jumptable at 0x0001008e7380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7384 | FUN_1008e7384 */

void FUN_1008e7384(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 **)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x40) = *unaff_x20;
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,puVar1,param_5,0,0);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar3;
  _swift_task_switch(FUN_1008e7420,0,0);
  return;
}



/* Address: 0x1008e7420 | FUN_1008e7420 */

void FUN_1008e7420(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long unaff_x22;
  ulong uVar12;
  undefined8 uVar13;
  
  lVar11 = *(long *)(unaff_x22 + 0x38);
  uVar12 = *(ulong *)(unaff_x22 + 0x18);
  uVar6 = *(undefined8 *)(lVar11 + 0x10);
  lVar10 = *(long *)(lVar11 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar10 + 0x10))();
  *(undefined8 *)(unaff_x22 + 0x58) = uVar6;
  uVar13 = *(undefined8 *)(lVar11 + 0x48);
  uVar5 = *(undefined4 *)(&DAT_100c83b94 + (uVar12 >> 0x3e) * 4);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar12 = *(ulong *)(unaff_x22 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar7 = &DAT_100f104c8;
  _swift_allocObject(&DAT_100f104c8,0x18,7);
  *(undefined8 *)(puVar7 + 0x10) = uVar3;
  puVar8 = &DAT_100f104f0;
  _swift_allocObject(&DAT_100f104f0,0x28,7);
  *(ulong *)(puVar8 + 0x10) = uVar12;
  *(undefined8 *)(puVar8 + 0x18) = uVar13;
  *(undefined8 *)(puVar8 + 0x20) = uVar2;
  _swift_retain(uVar12 & 0x3fffffffffffffff);
  FUN_1008e76a4(uVar6,lVar10,uVar5,uVar4,uVar1,thunk_FUN_1008f8b14,puVar7,FUN_1008f8b04,puVar8,uVar3
                ,uVar3);
  *(undefined8 *)(unaff_x22 + 0x60) = uVar6;
  _swift_release(puVar8);
  _swift_release(puVar7);
  plVar9 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar9;
  *plVar9 = unaff_x22;
  plVar9[1] = (long)FUN_1008e7578;
  FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x50));
  return;
}



/* Address: 0x1008e7578 | FUN_1008e7578 */

void FUN_1008e7578(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x60);
  *(long *)(lVar3 + 0x70) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x68));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008e75e4;
  }
  else {
    pcVar2 = FUN_1008e7660;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e75e4 | FUN_1008e75e4 */

void FUN_1008e75e4(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x48);
  lVar2 = *(long *)(unaff_x22 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_unknownObjectRelease(*puVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            (uVar3,(long)puVar1 + (long)*(int *)(lVar4 + 0x30),lVar2);
  _swift_task_dealloc(puVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008e765c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7660 | FUN_1008e7660 */

void FUN_1008e7660(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x58));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001008e76a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e76a4 | FUN_1008e76a4 */

/* WARNING: Removing unreachable block (ram,0x0001008e773c) */

code * FUN_1008e76a4(class_t *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                    undefined8 param_9,undefined8 param_10,undefined8 param_11)

{
  code *pcVar1;
  class_t *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e78b8);
    (*pcVar1)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  _swift_unknownObjectRetain();
  FUN_100951d08();
  puVar3 = &DAT_100f128b0;
  _swift_allocObject(&DAT_100f128b0,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  *(undefined8 *)(puVar3 + 0x18) = param_9;
  _swift_retain(param_1);
  _swift_retain(param_9);
  pcVar2 = param_1;
  FUN_1008e8a1c(param_1,param_4,param_5,FUN_1008fdaa4,puVar3,param_6,param_7,param_10,param_11);
  _swift_release(puVar3);
  puVar3 = &DAT_100f128d8;
  _swift_allocObject(&DAT_100f128d8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_10;
  *(undefined8 *)(puVar3 + 0x18) = param_11;
  *(class_t **)(puVar3 + 0x20) = param_1;
  puVar4 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,puVar4,param_11,0,0);
  pcVar1 = thunk_FUN_1008fdc5c;
  thunk_FUN_10064b138(thunk_FUN_1008fdc5c,puVar3,uVar5);
  _swift_release(pcVar2);
  _swift_release(puVar3);
  _swift_release(param_1);
  return pcVar1;
}



/* Address: 0x1008e78b8 | FUN_1008e78b8 */

void FUN_1008e78b8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008e78dc,0,0);
  return;
}



/* Address: 0x1008e78dc | FUN_1008e78dc */

/* WARNING: Removing unreachable block (ram,0x0001008e7920) */

void FUN_1008e78dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  _swift_bridgeObjectRetain(uVar1);
  FUN_100667868(uVar2,uVar1);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008e7988;
  FUN_1008e7384(plVar3,*(undefined8 *)(unaff_x22 + 0x10),uVar2,*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x1008e7988 | FUN_1008e7988 */

void FUN_1008e7988(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x58) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1008e79ec;
  }
  else {
    pcVar1 = FUN_1008e7a2c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1008e79ec | FUN_1008e79ec */

void FUN_1008e79ec(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x48) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e7a28. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7a2c | FUN_1008e7a2c */

void FUN_1008e7a2c(void)

{
  long unaff_x22;
  
  _swift_release(*(ulong *)(unaff_x22 + 0x48) & 0x3fffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001008e7a68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7a6c | FUN_1008e7a6c */

void FUN_1008e7a6c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,puVar1,param_5,0,0);
  *(long *)(unaff_x22 + 0x40) = lVar2;
  uVar3 = *(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x48) = uVar3;
  _swift_task_switch(FUN_1008e7b00,0,0);
  return;
}



/* Address: 0x1008e7b00 | FUN_1008e7b00 */

void FUN_1008e7b00(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  undefined8 uVar10;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar8 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar9 = *(undefined8 *)(lVar8 + 0x48);
  uVar4 = *(undefined8 *)(lVar8 + 0x10);
  lVar8 = *(long *)(lVar8 + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar8 + 0x10))();
  puVar5 = &DAT_100f10518;
  _swift_allocObject(&DAT_100f10518,0x18,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar1;
  puVar6 = &DAT_100f10540;
  _swift_allocObject(&DAT_100f10540,0x20,7);
  *(int *)(puVar6 + 0x10) = (int)uVar10;
  *(int *)(puVar6 + 0x14) = (int)((ulong)uVar10 >> 0x20);
  *(undefined8 *)(puVar6 + 0x18) = uVar9;
  uVar9 = uVar4;
  FUN_1008e76a4(uVar4,lVar8,0x28,uVar2,uVar3,thunk_FUN_1008f8b14,puVar5,FUN_1008f8b0c,puVar6,uVar1,
                uVar1);
  *(undefined8 *)(unaff_x22 + 0x50) = uVar9;
  _swift_release(puVar6);
  _swift_release(puVar5);
  _swift_unknownObjectRelease(uVar4);
  plVar7 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x58) = plVar7;
  *plVar7 = unaff_x22;
  plVar7[1] = (long)FUN_1008e7c40;
  FUN_1005da4a4(plVar7,*(undefined8 *)(unaff_x22 + 0x48));
  return;
}



/* Address: 0x1008e7c40 | FUN_1008e7c40 */

void FUN_1008e7c40(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x50);
  *(long *)(lVar3 + 0x60) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x58));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008e7cac;
  }
  else {
    pcVar2 = FUN_1008e7d20;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e7cac | FUN_1008e7cac */

void FUN_1008e7cac(void)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x40);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x48);
  lVar3 = *(long *)(unaff_x22 + 0x30);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x10);
  _swift_unknownObjectRelease(*puVar2);
  (**(code **)(*(long *)(lVar3 + -8) + 0x20))
            (uVar4,(long)puVar2 + (long)*(int *)(lVar1 + 0x30),lVar3);
  _swift_task_dealloc(puVar2);
                    /* WARNING: Could not recover jumptable at 0x0001008e7d1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7d20 | FUN_1008e7d20 */

void FUN_1008e7d20(void)

{
  long unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x48));
                    /* WARNING: Could not recover jumptable at 0x0001008e7d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e7d5c | FUN_1008e7d5c */

long FUN_1008e7d5c(long param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  long local_98 [3];
  long local_80 [3];
  undefined *local_68;
  
  lVar2 = param_1;
  _swift_getObjectType();
  lVar11 = *(long *)(param_2 + 8);
  pcVar13 = *(code **)(lVar11 + 0x50);
  lVar3 = lVar2;
  local_80[0] = param_1;
  (*pcVar13)();
  FUN_1008f6880();
  local_68 = &DAT_100f1c2a8;
  pcVar10 = *(code **)(lVar11 + 0x48);
  local_98[0] = param_1;
  local_80[0] = param_3;
  _swift_retain();
  (*pcVar10)(local_80,lVar3,lVar2,lVar11);
  _swift_release(lVar3);
  FUN_100004594(local_80);
  local_80[0] = param_1;
  (*pcVar13)(lVar2);
  _swift_getObjectType();
  puVar4 = &DAT_100f127e8;
  _swift_allocObject(&DAT_100f127e8,0x30,7);
  *(long *)(puVar4 + 0x10) = lVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(long *)(puVar4 + 0x20) = param_1;
  *(long *)(puVar4 + 0x28) = param_2;
  pcVar13 = *(code **)(lVar11 + 0x38);
  _swift_retain(lVar3);
  _swift_unknownObjectRetain(param_1);
  pcVar10 = FUN_1008fda24;
  puVar9 = puVar4;
  (*pcVar13)();
  _swift_unknownObjectRelease(lVar2);
  _swift_release(puVar4);
  puVar4 = &DAT_100f12810;
  _swift_allocObject(&DAT_100f12810,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(code **)(puVar4 + 0x18) = pcVar10;
  *(undefined **)(puVar4 + 0x20) = puVar9;
  puVar5 = &DAT_100f12838;
  _swift_allocObject(&DAT_100f12838,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_1008fda50;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(long *)(puVar5 + 0x20) = lVar3;
  uVar6 = *(ulong *)(lVar3 + 0x20);
  lVar2 = *(long *)(lVar3 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar2 + 0x10);
  _swift_retain_n(lVar3,3);
  _swift_retain_n(param_4,2);
  _swift_retain_n(puVar9,2);
  _swift_retain_n(puVar4,2);
  uVar7 = uVar6;
  (*pcVar13)(uVar6,lVar2);
  if ((uVar7 & 1) == 0) {
    puVar8 = &DAT_100f12860;
    _swift_allocObject(&DAT_100f12860,0x28,7);
    *(long *)(puVar8 + 0x10) = lVar3;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1008fa3dc;
    *(undefined **)(puVar8 + 0x20) = puVar5;
    pcVar10 = *(code **)(lVar2 + 0x18);
    _swift_retain(lVar3);
    _swift_retain(puVar5);
    (*pcVar10)(thunk_FUN_100653138,puVar8,uVar6,lVar2);
    _swift_release(puVar9);
    _swift_release(param_4);
    _swift_release(puVar8);
    _swift_release(lVar3);
    _swift_release(puVar4);
    _swift_release(puVar5);
  }
  else {
    _swift_beginAccess(lVar3 + 0x10,local_80,0,0);
    cVar1 = *(char *)(lVar3 + 0x18);
    if (cVar1 == -1) {
      _swift_beginAccess(lVar3 + 0x30,local_98,0x21,0);
      FUN_10064967c(thunk_FUN_1008fa3dc,puVar5);
      _swift_endAccess(local_98);
    }
    else {
      uVar12 = *(undefined8 *)(lVar3 + 0x10);
      FUN_100308524(uVar12,cVar1);
      FUN_100950b80(param_4,pcVar10,puVar9);
      FUN_100308538(uVar12,cVar1);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(puVar9);
    _swift_release(param_4);
    _swift_release(lVar3);
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(lVar3);
  _swift_release(puVar9);
  _swift_release(param_4);
  _swift_release(puVar4);
  return lVar3;
}



/* Address: 0x1008e80d8 | FUN_1008e80d8 */

void FUN_1008e80d8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  puVar2 = param_1;
  FUN_1008db6c4();
  puVar3 = &DAT_100eeb710;
  uVar8 = 0;
  _swift_allocError(&DAT_100eeb710,puVar2,0,0);
  *puVar2 = param_2;
  *(undefined1 *)(puVar2 + 1) = 0;
  uVar4 = param_1[4];
  lVar1 = param_1[5];
  _swift_getObjectType();
  uVar5 = uVar4;
  lVar7 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar5 & 1) == 0) {
    _swift_allocObject(param_5,0x20,7);
    *(undefined8 **)(param_5 + 0x10) = param_1;
    *(undefined **)(param_5 + 0x18) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(puVar3);
    (*pcVar9)(param_6,param_5,uVar4,lVar1);
    _swift_release(param_5);
  }
  else {
    puVar6 = puVar3;
    thunk_FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    FUN_100004550(puVar6,lVar7);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_errorRelease(puVar3);
  _swift_getObjectType(param_3);
  FUN_10061cf14(2,0,param_3,param_4);
  return;
}



/* Address: 0x1008e8230 | FUN_1008e8230 */

void FUN_1008e8230(undefined8 param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x30) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x18) = param_3;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  *(undefined4 *)(unaff_x22 + 0x58) = param_2;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1008e8254,0,0);
  return;
}



/* Address: 0x1008e8254 | FUN_1008e8254 */

void FUN_1008e8254(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x30) + 0x10);
  lVar5 = *(long *)(*(long *)(unaff_x22 + 0x30) + 0x18);
  _swift_getObjectType();
  (**(code **)(lVar5 + 0x10))();
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  puVar3 = &DAT_100f10568;
  _swift_allocObject(&DAT_100f10568,0x18,7);
  *(undefined **)(unaff_x22 + 0x40) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  plVar4 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_1008e8324;
  FUN_1008e8408(plVar4,*(undefined8 *)(unaff_x22 + 0x10),uVar2,lVar5,
                *(undefined4 *)(unaff_x22 + 0x58),*(undefined8 *)(unaff_x22 + 0x18),
                *(undefined8 *)(unaff_x22 + 0x20),FUN_1008f8b14,puVar3,
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x28));
  return;
}



/* Address: 0x1008e8324 | FUN_1008e8324 */

void FUN_1008e8324(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1008e8390;
  }
  else {
    pcVar2 = FUN_1008e83cc;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e8390 | FUN_1008e8390 */

void FUN_1008e8390(void)

{
  long unaff_x22;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001008e83c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e83cc | FUN_1008e83cc */

void FUN_1008e83cc(void)

{
  long unaff_x22;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x22 + 0x38));
                    /* WARNING: Could not recover jumptable at 0x0001008e8404. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e8408 | FUN_1008e8408 */

void FUN_1008e8408(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x50) = param_10;
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(undefined8 *)(unaff_x22 + 0x48) = param_9;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined4 *)(unaff_x22 + 0x80) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_1008e843c,0,0);
  return;
}



/* Address: 0x1008e843c | FUN_1008e843c */

/* WARNING: Removing unreachable block (ram,0x0001008e84c0) */

void FUN_1008e843c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  code *pcVar6;
  class_t *pcVar7;
  undefined *puVar8;
  long *plVar9;
  class_t *pcVar10;
  long unaff_x22;
  undefined8 uVar11;
  undefined8 uVar12;
  
  pcVar10 = *(class_t **)(unaff_x22 + 0x18);
  pcVar7 = pcVar10;
  _object_getClass();
  if (pcVar7 == &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
    FUN_100952c0c(0);
    _swift_allocObject();
    _swift_unknownObjectRetain();
    FUN_10095213c();
    *(class_t **)(unaff_x22 + 0x60) = pcVar10;
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x40);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x28);
    puVar8 = &DAT_100f124c8;
    _swift_allocObject(&DAT_100f124c8,0x20,7);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x18);
    *(undefined8 *)(puVar8 + 0x18) = *(undefined8 *)(unaff_x22 + 0x20);
    *(undefined8 *)(puVar8 + 0x10) = uVar12;
    _swift_unknownObjectRetain(uVar12);
    FUN_1008e8a1c(pcVar10,uVar11,uVar3,FUN_1008fd714,puVar8,uVar5,uVar2,uVar4,uVar1);
    *(class_t **)(unaff_x22 + 0x68) = pcVar10;
    _swift_release(puVar8);
    plVar9 = (long *)0x50;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x70) = plVar9;
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_1008e85b4;
    FUN_1005da4a4(plVar9,*(undefined8 *)(unaff_x22 + 0x10));
    return;
  }
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008e85b4);
  (*pcVar6)();
}



/* Address: 0x1008e85b4 | FUN_1008e85b4 */

void FUN_1008e85b4(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x68);
  *(long *)(lVar3 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x70));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1005dcb88;
  }
  else {
    pcVar2 = FUN_1008e8620;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x1008e8620 | FUN_1008e8620 */

void FUN_1008e8620(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x60));
                    /* WARNING: Could not recover jumptable at 0x0001008e8658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1008e865c | FUN_1008e865c */

undefined8 FUN_1008e865c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  (**(code **)(*(long *)(param_2 + 8) + 0x50))();
  uVar1 = param_1;
  _swift_getObjectType();
  FUN_10063dc68();
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1008e86d0 | FUN_1008e86d0 */

/* WARNING: Removing unreachable block (ram,0x0001008e8764) */

code * FUN_1008e86d0(class_t *param_1)

{
  code *pcVar1;
  class_t *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  
  pcVar2 = param_1;
  _object_getClass();
  if (pcVar2 != &objc::class_t::_TtC8NIOPosix19SelectableEventLoop) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008e88f8);
    (*pcVar1)();
  }
  FUN_100952c0c(0);
  _swift_allocObject();
  _swift_unknownObjectRetain();
  FUN_100951d08();
  puVar3 = &DAT_100f12b30;
  _swift_allocObject(&DAT_100f12b30,0x20,7);
  *(undefined8 *)(puVar3 + 0x10) = in_stack_00000020;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000028;
  _swift_retain(param_1);
  _swift_retain(in_stack_00000028);
  pcVar2 = param_1;
  FUN_1008e8c44(param_1,in_x4,in_x5,in_x6,in_x7,in_stack_00000000,in_stack_00000008,FUN_1008fdc34,
                puVar3,in_stack_00000010,in_stack_00000018,in_stack_00000030,in_stack_00000038);
  _swift_release(puVar3);
  puVar3 = &DAT_100f12b58;
  _swift_allocObject(&DAT_100f12b58,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = in_stack_00000030;
  *(undefined8 *)(puVar3 + 0x18) = in_stack_00000038;
  *(class_t **)(puVar3 + 0x20) = param_1;
  puVar4 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  uVar5 = 0;
  _swift_getTupleTypeMetadata2(0,puVar4,in_stack_00000038,0,0);
  pcVar1 = FUN_1008fdc5c;
  thunk_FUN_10064b138(FUN_1008fdc5c,puVar3,uVar5);
  _swift_release(pcVar2);
  _swift_release(puVar3);
  _swift_release(param_1);
  return pcVar1;
}


