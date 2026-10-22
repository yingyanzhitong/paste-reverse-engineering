/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009895f0 | FUN_1009895f0 */

undefined1  [16] FUN_1009895f0(void)

{
  return ZEXT816(0x100f20818);
}



/* Address: 0x100989600 | FUN_100989600 */

undefined1  [16] FUN_100989600(void)

{
  return ZEXT816(0x100f20840);
}



/* Address: 0x100989610 | FUN_100989610 */

undefined1  [16] FUN_100989610(void)

{
  return ZEXT816(0x100f20860);
}



/* Address: 0x100989620 | FUN_100989620 */

undefined1  [16] FUN_100989620(void)

{
  return ZEXT816(0x100f20880);
}



/* Address: 0x100989630 | FUN_100989630 */

undefined1  [16] FUN_100989630(void)

{
  return ZEXT816(0x100f208a0);
}



/* Address: 0x100989640 | FUN_100989640 */

undefined1  [16] FUN_100989640(void)

{
  return ZEXT816(0x100f208c0);
}



/* Address: 0x100989650 | FUN_100989650 */

undefined1  [16] FUN_100989650(void)

{
  return ZEXT816(0x100f208e0);
}



/* Address: 0x100989660 | FUN_100989660 */

undefined1  [16] FUN_100989660(void)

{
  return ZEXT816(0x100f20900);
}



/* Address: 0x100989670 | FUN_100989670 */

undefined * FUN_100989670(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long unaff_x20;
  
  puVar2 = &DAT_100f210b8;
  _swift_allocObject(&DAT_100f210b8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  puVar3 = &DAT_100ff0970;
  FUN_1000f7830(&DAT_100ff0970,&DAT_100c89518);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = unaff_x20;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  puVar4 = &DAT_100f210e0;
  _swift_allocObject(&DAT_100f210e0,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(code **)(puVar4 + 0x18) = FUN_1002e0024;
  *(undefined **)(puVar4 + 0x20) = puVar2;
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_retain(param_2);
  _swift_retain();
  _swift_retain(puVar3);
  _swift_retain(puVar2);
  FUN_100992db8(unaff_x20 + lVar1,FUN_100982f6c,puVar4);
  _swift_release(puVar4);
  _swift_release(puVar2);
  puVar2 = puVar3;
  FUN_10098eb00(puVar3);
  _swift_release(puVar3);
  return puVar2;
}



/* Address: 0x10098978c | FUN_10098978c */

void FUN_10098978c(ulong param_1,undefined4 param_2)

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
    FUN_10098f328(0,uVar12,0);
    uVar11 = 0;
    bVar2 = false;
    lVar13 = lVar10 + 0x20;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar10 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100989bd0);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar13,auStack_128,&DAT_100ff1630,&DAT_100c8a108);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f20aa0;
      _swift_allocObject(&DAT_100f20aa0,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = thunk_FUN_10099064c;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff1630,&DAT_100c8a108);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100ff1638;
      FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
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
        puVar4 = &DAT_100f20ac8;
        _swift_allocObject(&DAT_100f20ac8,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_1009906a8;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100eec8d0;
        FUN_10098fed0();
        local_260 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
        local_278[0] = param_2;
        local_258 = iVar9;
        uStack_254 = uVar8;
        local_238 = piVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff1630,&DAT_100c8a108);
        FUN_100076508(&local_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_10098f238;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_10098f328(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
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
  FUN_10098fed0();
  puStack_1e8 = PTR___type_metadata_for_Swift_Int32_100eadbd0;
  local_200 = CONCAT44(local_200._4_4_,param_2);
  local_180 = iVar9;
  uStack_17c = uVar8;
  local_160 = lVar10;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_10098f238;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_10098f644(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar12 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar12) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_10098f644(puVar7,uVar12 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
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



/* Address: 0x100989c20 | FUN_100989c20 */

void FUN_100989c20(void)

{
  ulong uVar1;
  bool bVar2;
  code *pcVar3;
  MultipathServiceType MVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  long *unaff_x20;
  ulong uVar10;
  long lVar11;
  long lVar12;
  undefined1 auStack_278 [24];
  long local_260;
  undefined1 auStack_258 [24];
  undefined *local_240;
  undefined1 *local_238;
  undefined1 auStack_230 [48];
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 local_1f0;
  long lStack_1e8;
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
  
  lVar12 = *unaff_x20;
  uVar9 = *(ulong *)(lVar12 + 0x10);
  if (uVar9 == 0) {
    _swift_bridgeObjectRelease();
    puVar8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_10098f328(0,uVar9,0);
    uVar10 = 0;
    bVar2 = false;
    lVar11 = lVar12 + 0x20;
    do {
      puVar8 = local_78;
      if (*(ulong *)(lVar12 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10098a054);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar11,auStack_128,&DAT_100ff1630,&DAT_100c8a108);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar5 = &DAT_100f213b0;
      _swift_allocObject(&DAT_100f213b0,0x20,7);
      *(undefined8 *)(puVar5 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar5 + 0x10) = local_e0;
      local_138 = thunk_FUN_10099064c;
      local_130 = puVar5;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff1630,&DAT_100c8a108);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar5 = &DAT_100ff1638;
      FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
      puVar6 = auStack_258;
      _swift_dynamicCast(puVar6,&local_200,puVar5,&DAT_100f20880,6);
      if ((int)puVar6 == 0) {
        FUN_100004594(auStack_1a8);
        puVar7 = local_130;
        pcVar3 = local_138;
        puStack_1b0 = local_130;
        uStack_1c8 = uStack_148;
        local_1d0 = local_150;
        local_1b8 = local_138;
        uStack_1c0 = uStack_140;
        uStack_1f8 = uStack_178;
        local_200 = local_180;
        lStack_1e8 = (long)puStack_168;
        local_1f0 = local_170;
        uStack_1d8 = uStack_158;
        uStack_1e0 = local_160;
        FUN_100076508(&local_200,auStack_258);
        FUN_100011080(&uStack_1d8,auStack_230);
        FUN_100076508(auStack_258,&local_d0);
        FUN_100011080(auStack_230,&uStack_a8);
        puVar5 = &DAT_100f213d8;
        _swift_allocObject(&DAT_100f213d8,0x20,7);
        *(undefined **)(puVar5 + 0x18) = puVar7;
        *(code **)(puVar5 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_1009906a8;
        local_80 = puVar5;
      }
      else {
        local_240 = &DAT_100f20880;
        FUN_100990708();
        local_238 = puVar6;
        MVar4 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
        local_260 = CONCAT71(extraout_var,MVar4.value);
        FUN_10000cbb0(auStack_278);
        (**(code **)(*(long *)(CONCAT71(extraout_var,MVar4.value) + -8) + 0x10))();
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff1630,&DAT_100c8a108);
        FUN_100076508(auStack_258,&local_200);
        FUN_100011080(auStack_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_10098f25c;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar8 + 0x10);
      local_78 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_10098f328(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      puVar8 = local_78;
      uVar10 = uVar10 + 1;
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
      lVar11 = lVar11 + 0x58;
    } while (uVar9 != uVar10);
    _swift_bridgeObjectRelease();
    *unaff_x20 = (long)puVar8;
    if (bVar2) {
      return;
    }
  }
  puStack_168 = &DAT_100f20880;
  FUN_100990708();
  local_160 = lVar12;
  MVar4 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  lStack_1e8 = CONCAT71(extraout_var_00,MVar4.value);
  FUN_10000cbb0(&local_200);
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar4.value) + -8) + 0x10))();
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_10098f25c;
  local_80 = (undefined *)0x0;
  puVar5 = puVar8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar7 = puVar8;
  if (((ulong)puVar5 & 1) == 0) {
    puVar7 = (undefined *)0x0;
    FUN_10098f644(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar9 = *(ulong *)(puVar7 + 0x10);
  puVar8 = puVar7;
  if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar9) {
    puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
    FUN_10098f644(puVar8,uVar9 + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  *(ulong *)(puVar8 + 0x10) = uVar9 + 1;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x28) = uStack_c8;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x20) = local_d0;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x38) = uStack_b8;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x30) = local_c0;
  *(undefined **)(puVar8 + uVar9 * 0x58 + 0x70) = local_80;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x58) = uStack_98;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x50) = local_a0;
  *(code **)(puVar8 + uVar9 * 0x58 + 0x68) = pcStack_88;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x60) = local_90;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x48) = uStack_a8;
  *(undefined8 *)(puVar8 + uVar9 * 0x58 + 0x40) = local_b0;
  *unaff_x20 = (long)puVar8;
  return;
}



/* Address: 0x10098a0a4 | FUN_10098a0a4 */

void FUN_10098a0a4(byte param_1)

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
    FUN_10098f328(0,uVar8,0);
    uVar9 = 0;
    lVar10 = lVar11 + 0x20;
    bVar2 = false;
    do {
      puVar7 = local_78;
      if (*(ulong *)(lVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10098a4bc);
        (*pcVar3)();
      }
      FUN_1000f8cac(lVar10,auStack_128,&DAT_100ff1630,&DAT_100c8a108);
      FUN_100076508(auStack_128,&local_180);
      FUN_100011080(auStack_100,&uStack_158);
      puVar4 = &DAT_100f20b90;
      _swift_allocObject(&DAT_100f20b90,0x20,7);
      *(undefined8 *)(puVar4 + 0x18) = uStack_d8;
      *(undefined8 *)(puVar4 + 0x10) = local_e0;
      local_138 = thunk_FUN_10099064c;
      local_130 = puVar4;
      FUN_1000f8cac(&local_180,&local_200,&DAT_100ff1630,&DAT_100c8a108);
      _swift_release(puStack_1b0);
      FUN_100076508(&local_200,auStack_1a8);
      FUN_100004594(&uStack_1d8);
      FUN_100076688(auStack_1a8,&local_200);
      puVar4 = &DAT_100ff1638;
      FUN_1000f7830(&DAT_100ff1638,&DAT_100c8a110);
      puVar5 = auStack_258;
      _swift_dynamicCast(puVar5,&local_200,puVar4,&DAT_100f207d8,6);
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
        puVar4 = &DAT_100f20bb8;
        _swift_allocObject(&DAT_100f20bb8,0x20,7);
        *(undefined **)(puVar4 + 0x18) = puVar6;
        *(code **)(puVar4 + 0x10) = pcVar3;
        pcStack_88 = thunk_FUN_1009906a8;
        local_80 = puVar4;
      }
      else {
        local_240 = &DAT_100f207d8;
        FUN_10099008c();
        local_260 = PTR___type_metadata_for_Swift_Bool_100eac570;
        local_278[0] = param_1 & 1;
        local_238 = puVar5;
        FUN_100004594(auStack_1a8);
        FUN_1000fb4c4(&local_180,&DAT_100ff1630,&DAT_100c8a108);
        FUN_100076508(auStack_258,&local_200);
        FUN_100011080(local_278,&uStack_1d8);
        FUN_100076508(&local_200,&local_d0);
        FUN_100011080(&uStack_1d8,&uStack_a8);
        pcStack_88 = FUN_10098f280;
        local_80 = (undefined *)0x0;
        bVar2 = true;
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      local_78 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        FUN_10098f328(1 < *(ulong *)(puVar7 + 0x18),uVar1 + 1,1);
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
  puStack_168 = &DAT_100f207d8;
  FUN_10099008c();
  puStack_1e8 = PTR___type_metadata_for_Swift_Bool_100eac570;
  local_200 = CONCAT71(local_200._1_7_,param_1) & 0xffffffffffffff01;
  local_160 = lVar11;
  FUN_100076508(&local_180,auStack_128);
  FUN_100011080(&local_200,auStack_100);
  FUN_100076508(auStack_128,&local_d0);
  FUN_100011080(auStack_100,&uStack_a8);
  pcStack_88 = FUN_10098f280;
  local_80 = (undefined *)0x0;
  puVar4 = puVar7;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar6 = puVar7;
  if (((ulong)puVar4 & 1) == 0) {
    puVar6 = (undefined *)0x0;
    FUN_10098f644(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,PTR__swift_bridgeObjectRelease_100eae160);
  }
  uVar8 = *(ulong *)(puVar6 + 0x10);
  puVar7 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar8) {
    puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_10098f644(puVar7,uVar8 + 1,1,puVar6,PTR__swift_bridgeObjectRelease_100eae160);
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



/* Address: 0x10098a50c | FUN_10098a50c */

undefined8
FUN_10098a50c(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  uVar1 = param_1;
  (*param_3)();
  puVar2 = &DAT_100f20d98;
  _swift_allocObject(&DAT_100f20d98,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_1;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  _swift_retain();
  _swift_unknownObjectRetain(param_1);
  _swift_retain(param_6);
  uVar3 = uVar1;
  FUN_10098029c(uVar1,FUN_1009901ec,puVar2);
  _swift_release(uVar1);
  _swift_release_n(puVar2,2);
  return uVar3;
}



/* Address: 0x10098a5b4 | FUN_10098a5b4 */

code * FUN_10098a5b4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  long lVar4;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_48;
  
  uVar1 = param_1;
  _swift_getObjectType();
  lVar4 = *(long *)(param_2 + 8);
  local_48 = param_1;
  (**(code **)(lVar4 + 0x50))();
  uVar2 = uVar1;
  _swift_getObjectType();
  pcVar3 = FUN_1008fde30;
  local_70 = param_1;
  lStack_68 = param_2;
  local_60 = param_3;
  uStack_58 = param_4;
  FUN_1006413ec(FUN_1008fde30,auStack_80,uVar2,PTR___type_metadata_for____100eae0c8 + 8,lVar4);
  _swift_unknownObjectRelease(uVar1);
  return pcVar3;
}



/* Address: 0x10098a654 | FUN_10098a654 */

undefined8 FUN_10098a654(undefined8 param_1)

{
  undefined8 uVar1;
  
  _swift_getObjectType();
  uVar1 = param_1;
  FUN_10098f9ac(param_1);
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x10098a6a4 | FUN_10098a6a4 */

long FUN_10098a6a4(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  lVar2 = param_1;
  FUN_10098fa38(param_1,unaff_x20);
  if (lVar2 != 0) {
    _swift_release(param_1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10098a6f4);
  (*pcVar1)();
}



/* Address: 0x10098a6f4 | FUN_10098a6f4 */

void FUN_10098a6f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 unaff_x20;
  
  _swift_allocObject();
  uVar1 = param_1;
  _swift_getObjectType(param_1);
  FUN_10098f7a8(param_1,unaff_x20,uVar1,param_2);
  return;
}



/* Address: 0x10098a748 | FUN_10098a748 */

void FUN_10098a748(undefined8 param_1)

{
  _swift_getObjectType();
  FUN_10098f7a8(param_1);
  return;
}



/* Address: 0x10098a784 | FUN_10098a784 */

undefined8 FUN_10098a784(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  _swift_getObjectType();
  lVar2 = *(long *)(param_2 + 8);
  (**(code **)(lVar2 + 0x50))();
  uVar1 = param_1;
  _swift_getObjectType();
  (**(code **)(lVar2 + 0x50))();
  _swift_unknownObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x10098a7ec | FUN_10098a7ec */

void FUN_10098a7ec(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)(unaff_x20 + 0x20) = param_1;
  *(undefined8 *)(unaff_x20 + 0x28) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar1);
  _swift_retain();
  return;
}



/* Address: 0x10098a820 | FUN_10098a820 */

void FUN_10098a820(void)

{
  FUN_10098fb78();
  _swift_retain();
  return;
}



/* Address: 0x10098a834 | FUN_10098a834 */

void FUN_10098a834(undefined8 param_1)

{
  undefined *puVar1;
  DispatchQoS DVar2;
  long unaff_x20;
  undefined1 *puVar3;
  long lVar4;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  puVar1 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  puVar3 = auStack_60 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  (**(code **)(lVar4 + 0x10))(puVar3,param_1,DVar2.unknown);
  (**(code **)(lVar4 + 0x38))(puVar3,0,1,DVar2.unknown);
  lVar4 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos;
  _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos,
                     auStack_58,0x21,0);
  FUN_100982b00(puVar3,unaff_x20 + lVar4);
  _swift_endAccess(auStack_58);
  _swift_retain();
  return;
}



/* Address: 0x10098a90c | FUN_10098a90c */

void FUN_10098a90c(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions);
  *(undefined8 *)(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions) =
       param_1;
  _swift_retain();
  _swift_release(uVar1);
  _swift_retain();
  return;
}



/* Address: 0x10098a944 | FUN_10098a944 */

void FUN_10098a944(undefined8 param_1)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)
           (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions);
  *(undefined8 *)(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions) =
       param_1;
  _swift_release(uVar1);
  _swift_retain(param_1);
  _swift_retain();
  return;
}



/* Address: 0x10098a980 | FUN_10098a980 */

void FUN_10098a980(undefined8 param_1)

{
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_48,0x21,0);
  FUN_100989c20(param_1);
  _swift_endAccess(auStack_48);
  _swift_retain();
  return;
}



/* Address: 0x10098a9e0 | FUN_10098a9e0 */

void FUN_10098a9e0(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = (undefined8 *)
           (unaff_x20 +
           _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_1;
  puVar1[1] = param_2;
  FUN_100004550(uVar2,uVar3);
  _swift_retain(param_2);
  _swift_retain();
  return;
}



/* Address: 0x10098aa24 | FUN_10098aa24 */

undefined * FUN_10098aa24(char *param_1,void *param_2,ulong param_3)

{
  int iVar1;
  NWEndpoint NVar2;
  Port PVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined7 extraout_var;
  undefined *puVar10;
  long unaff_x20;
  long lVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  String SVar18;
  long local_80;
  undefined1 *local_78;
  long local_70;
  char *local_68;
  long lVar9;
  
  if (param_3 >> 0x10 == 0) {
    local_68 = param_1;
    PVar3 = Network::NWEndpoint::Port::typeMetadataAccessor();
    lVar16 = *(long *)(PVar3._context - 8);
    lVar11 = (long)&local_80 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar7 = &DAT_100ff0848;
    FUN_1000f7830(&DAT_100ff0848,&DAT_100c8a020);
    lVar13 = lVar11 - (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    Network::NWEndpoint::Port::_init((__uint16)param_3);
    lVar9 = lVar13;
    (**(code **)(lVar16 + 0x30))(lVar13,1,PVar3._context);
    if ((int)lVar9 == 1) {
      FUN_1000fb4c4(lVar13,&DAT_100ff0848,&DAT_100c8a020);
      puVar4 = *(ulong **)(unaff_x20 + 0x10);
      lVar9 = *(long *)(unaff_x20 + 0x18);
      _swift_getObjectType();
      (**(code **)(lVar9 + 0x10))();
      puVar5 = puVar4;
      _swift_getObjectType();
      puVar6 = puVar5;
      FUN_100982b50();
      puVar7 = &DAT_100f21b58;
      _swift_allocError(&DAT_100f21b58,puVar6,0,0);
      *puVar6 = param_3;
      puVar8 = &DAT_100ff07c0;
      FUN_1000f7830(&DAT_100ff07c0,&DAT_100c89400);
      puVar10 = puVar7;
      FUN_10063dd74(puVar7,puVar5,puVar8,lVar9);
      _swift_unknownObjectRelease(puVar4);
      _swift_errorRelease(puVar7);
    }
    else {
      (**(code **)(lVar16 + 0x20))(lVar11,lVar13,PVar3._context);
      NVar2 = Network::NWEndpoint::typeMetadataAccessor();
      lVar9 = CONCAT71(extraout_var,NVar2.value);
      lVar17 = *(long *)(lVar9 + -8);
      local_80 = *(long *)(lVar17 + 0x40);
      uVar12 = local_80 + 0xfU & 0xfffffffffffffff0;
      lVar14 = lVar11 - uVar12;
      puVar7 = &DAT_100ff0858;
      local_78 = (undefined1 *)&local_80;
      local_70 = lVar11;
      FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
      iVar1 = *(int *)(puVar7 + 0x30);
      _swift_bridgeObjectRetain(param_2);
      SVar18.bridgeObject = param_2;
      SVar18.str = local_68;
      Network::NWEndpoint::Host::init(SVar18);
      (**(code **)(lVar16 + 0x10))(lVar14 + iVar1,lVar11,PVar3._context);
      (**(code **)(lVar17 + 0x68))
                (lVar14,*(undefined4 *)
                         PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
                 ,lVar9);
      lVar13 = lVar14 - uVar12;
      local_68 = (char *)lVar14;
      (**(code **)(lVar17 + 0x10))(lVar13,lVar14,lVar9);
      uVar12 = (ulong)*(byte *)(lVar17 + 0x50);
      uVar15 = uVar12 + 0x10 & (uVar12 ^ 0xffffffffffffffff);
      puVar7 = &DAT_100f20940;
      _swift_allocObject(&DAT_100f20940,uVar15 + local_80,uVar12 | 7);
      (**(code **)(lVar17 + 0x20))(puVar7 + uVar15,lVar13,lVar9);
      puVar10 = (undefined *)0x0;
      FUN_10098aefc(0,1,FUN_10098fbf8,puVar7);
      _swift_release(puVar7);
      (**(code **)(lVar17 + 8))(lVar14,lVar9);
      (**(code **)(lVar16 + 8))(lVar11,PVar3._context);
    }
  }
  else {
    puVar4 = *(ulong **)(unaff_x20 + 0x10);
    lVar9 = *(long *)(unaff_x20 + 0x18);
    _swift_getObjectType();
    (**(code **)(lVar9 + 0x10))();
    puVar5 = puVar4;
    _swift_getObjectType();
    puVar6 = puVar5;
    FUN_100982b50();
    puVar7 = &DAT_100f21b58;
    _swift_allocError(&DAT_100f21b58,puVar6,0,0);
    *puVar6 = param_3;
    puVar8 = &DAT_100ff07c0;
    FUN_1000f7830(&DAT_100ff07c0,&DAT_100c89400);
    puVar10 = puVar7;
    FUN_10063dd74(puVar7,puVar5,puVar8,lVar9);
    _swift_unknownObjectRelease(puVar4);
    _swift_errorRelease(puVar7);
  }
  return puVar10;
}



/* Address: 0x10098adb8 | FUN_10098adb8 */

undefined8 FUN_10098adb8(undefined8 param_1)

{
  NWEndpoint NVar1;
  undefined7 extraout_var;
  undefined *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar2;
  
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,NVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  lVar7 = *(long *)(lVar6 + 0x40);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),param_1,lVar2);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar8 = uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100f20968;
  _swift_allocObject(&DAT_100f20968,uVar8 + lVar7,uVar5 | 7);
  (**(code **)(lVar6 + 0x20))
            (puVar3 + uVar8,&stack0xffffffffffffffb0 + -(lVar7 + 0xfU & 0xfffffffffffffff0),lVar2);
  uVar4 = 0;
  FUN_10098aefc(0,1,thunk_FUN_10098fbf8,puVar3);
  _swift_release(puVar3);
  return uVar4;
}



/* Address: 0x10098ae8c | FUN_10098ae8c */

undefined8 FUN_10098ae8c(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  puVar1 = &DAT_100f20990;
  _swift_allocObject(&DAT_100f20990,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar2 = 0;
  FUN_10098aefc(0,1,thunk_FUN_10098fe78,puVar1);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x10098aefc | FUN_10098aefc */

code * FUN_10098aefc(long param_1,undefined4 param_2,undefined8 param_3,undefined8 param_4)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  MultipathServiceType MVar5;
  int iVar6;
  undefined *puVar7;
  DispatchQoS DVar8;
  long lVar9;
  undefined8 uVar10;
  undefined7 extraout_var;
  class_t *pcVar11;
  undefined7 extraout_var_00;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x20;
  class_t *pcVar16;
  undefined8 uVar17;
  code *pcVar18;
  undefined8 uVar19;
  undefined1 *puVar20;
  undefined8 uVar21;
  undefined1 *puVar22;
  undefined8 uVar23;
  undefined1 auStack_1a0 [8];
  long local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined4 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined1 auStack_138 [40];
  pthread_mutexattr_t local_110;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined *local_b0 [3];
  undefined *local_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar7 = &DAT_100ff0820;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  puVar20 = auStack_1a0 + -(*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(class_t **)(unaff_x20 + 0x10);
  lVar15 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar18 = *(code **)(lVar15 + 0x10);
  local_174 = param_2;
  local_170 = param_3;
  local_168 = param_4;
  if (param_1 == 0) {
    (*pcVar18)();
    pcVar11 = pcVar16;
    _object_getClass();
    lVar15 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos;
    if (pcVar11 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10098b964);
      (*pcVar18)();
    }
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos,
                       auStack_88,0,0);
    puVar7 = &DAT_100c89460;
    FUN_1000f8cac(unaff_x20 + lVar15,puVar20,&DAT_100ff0820);
    local_180 = *(undefined8 *)
                 (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions);
    puVar22 = *(undefined1 **)
               (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions);
    uVar10 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
    uVar23 = ((undefined8 *)
             (unaff_x20 +
             _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))[1];
    FUN_1006648f0(&local_160,0x40,0x800,0x10000);
    local_98 = &DAT_100ef25a0;
    ppuStack_90 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar12 = &DAT_100f20cf8;
    _swift_allocObject(&DAT_100f20cf8,0x38,7);
    *(undefined8 *)(puVar12 + 0x18) = uStack_158;
    *(undefined8 *)(puVar12 + 0x10) = local_160;
    *(undefined8 *)(puVar12 + 0x28) = uStack_148;
    *(undefined8 *)(puVar12 + 0x20) = local_150;
    puVar12[0x30] = local_140;
    lVar9 = 0;
    local_b0[0] = puVar12;
    FUN_100991a3c();
    uVar13 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x34);
    _swift_allocObject();
    lVar15 = lVar9;
    FUN_100611728();
    *(long *)(lVar9 + 0x10) = lVar15;
    *(ulong *)(lVar9 + 0x18) = uVar13;
    *(ulong *)(lVar9 + 0x20) = uVar14;
    *(undefined **)(lVar9 + 0x28) = puVar7;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x58) = 0;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x98) = 0;
    *(undefined1 *)(lVar9 + 0xa0) = 4;
    puVar7 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    puVar12 = puVar7;
    _swift_allocObject();
    puVar12[0x10] = 0;
    *(undefined **)(lVar9 + 0xa8) = puVar12;
    *(undefined4 *)(lVar9 + 0xb0) = 0x10000;
    *(undefined1 *)(lVar9 + 0xb4) = 1;
    uVar13 = 8;
    FUN_100884f1c(8);
    uVar17 = local_180;
    local_190 = puVar22;
    _swift_retain(puVar22);
    _swift_retain(uVar17);
    local_188 = uVar10;
    FUN_100011128(uVar10,uVar23);
    uVar10 = 0;
    FUN_1009a2b3c(0,0,0,0,uVar13 & 0xffffffff);
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 200) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = uVar10;
    _swift_allocObject(puVar7,0x11,7);
    puVar7[0x10] = 1;
    *(undefined **)(lVar9 + 0xd0) = puVar7;
    *(undefined8 *)(lVar9 + 0xe0) = 0x8000;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0x10000;
    *(undefined4 *)(lVar9 + 0xf0) = 0;
    lVar15 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar5 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar5.value) + -8) + 0x68))
              (lVar9 + lVar15,uVar3,CONCAT71(extraout_var_00,MVar5.value));
    puVar4 = (undefined8 *)
             (lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
    puVar4[1] = 0xf000000000000007;
    *puVar4 = 0xf000000000000007;
    lVar15 = _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock;
    puVar7 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_110.__sig = 0;
    local_110.__opaque[0] = '\0';
    local_110.__opaque[1] = '\0';
    local_110.__opaque[2] = '\0';
    local_110.__opaque[3] = '\0';
    local_110.__opaque[4] = '\0';
    local_110.__opaque[5] = '\0';
    local_110.__opaque[6] = '\0';
    local_110.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_110);
    iVar6 = _pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x10),&local_110);
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10098b968);
      (*pcVar18)();
    }
    *(undefined **)(lVar9 + lVar15) = puVar7;
    *(undefined8 *)
     (lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPoolCapacity) = 4;
    *(class_t **)(lVar9 + 0x40) = pcVar16;
    puVar7 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar7 + 0x20) = pcVar16;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar7[0x18] = 0xff;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x40) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined **)(lVar9 + 0x50) = puVar7;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0x2000;
    *(undefined8 *)(lVar9 + 0x60) = 1;
    _swift_unknownObjectRetain_n(pcVar16,2);
    uVar10 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,puVar20);
    puVar22 = local_190;
    *(undefined8 *)(lVar9 + 0x70) = uVar10;
    uVar10 = *(undefined8 *)(lVar9 + 0x98);
    *(undefined8 *)(lVar9 + 0x90) = uVar17;
    *(undefined1 **)(lVar9 + 0x98) = local_190;
    _swift_retain(uVar17);
    _swift_retain(puVar22);
    _swift_release(uVar10);
    FUN_100076688(local_b0,auStack_138);
    FUN_100660e04(&local_110,4,auStack_138);
    plVar1 = (long *)(lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPool);
    plVar1[5] = lStack_e8;
    plVar1[4] = local_f0;
    plVar1[7] = lStack_d8;
    plVar1[6] = lStack_e0;
    plVar1[9] = CONCAT71(uStack_c7,uStack_c8);
    plVar1[8] = local_d0;
    *(undefined8 *)((long)plVar1 + 0x51) = uStack_bf;
    *(ulong *)((long)plVar1 + 0x49) = CONCAT17(uStack_c0,uStack_c7);
    *(char (*) [8])(plVar1 + 1) = local_110.__opaque;
    *plVar1 = local_110.__sig;
    plVar1[3] = lStack_f8;
    plVar1[2] = lStack_100;
    *(undefined8 *)(lVar9 + 0x80) = local_188;
    *(undefined8 *)(lVar9 + 0x88) = uVar23;
    FUN_100631d88(0);
    _swift_allocObject();
    lVar15 = lVar9;
    _swift_retain();
    FUN_10062b720();
    _swift_unknownObjectRelease(pcVar16);
    _swift_release(uVar17);
    _swift_release(puVar22);
    FUN_1000fb4c4(puVar20,&DAT_100ff0820,&DAT_100c89460);
    FUN_100004594(local_b0);
    uVar10 = *(undefined8 *)(lVar9 + 0x48);
    *(long *)(lVar9 + 0x48) = lVar15;
  }
  else {
    _swift_retain(param_1);
    (*pcVar18)(pcVar16,lVar15);
    pcVar11 = pcVar16;
    _object_getClass();
    if (pcVar11 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10098b95c);
      (*pcVar18)();
    }
    local_198 = param_1;
    DVar8 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar8.unknown + -8) + 0x38))(puVar20,1,1);
    uVar17 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions);
    uVar21 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions);
    uVar10 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
    uVar23 = ((undefined8 *)
             (unaff_x20 +
             _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))[1];
    local_190 = puVar20;
    FUN_1006648f0(&local_160,0x40,0x800,0x10000);
    local_98 = &DAT_100ef25a0;
    ppuStack_90 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar7 = &DAT_100f20cf8;
    _swift_allocObject(&DAT_100f20cf8,0x38,7);
    *(undefined8 *)(puVar7 + 0x18) = uStack_158;
    *(undefined8 *)(puVar7 + 0x10) = local_160;
    *(undefined8 *)(puVar7 + 0x28) = uStack_148;
    *(undefined8 *)(puVar7 + 0x20) = local_150;
    puVar7[0x30] = local_140;
    lVar9 = 0;
    local_b0[0] = puVar7;
    FUN_100991a3c();
    uVar13 = (ulong)*(uint *)(lVar9 + 0x30);
    uVar14 = (ulong)*(ushort *)(lVar9 + 0x34);
    _swift_allocObject();
    lVar15 = lVar9;
    FUN_100611728();
    *(long *)(lVar9 + 0x10) = lVar15;
    *(ulong *)(lVar9 + 0x18) = uVar13;
    *(ulong *)(lVar9 + 0x20) = uVar14;
    *(undefined **)(lVar9 + 0x28) = DVar8.unknown;
    *(undefined8 *)(lVar9 + 0x48) = 0;
    *(undefined8 *)(lVar9 + 0x58) = 0;
    *(undefined8 *)(lVar9 + 0x78) = 0;
    *(undefined8 *)(lVar9 + 0x98) = 0;
    *(undefined1 *)(lVar9 + 0xa0) = 4;
    puVar7 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    puVar12 = puVar7;
    _swift_allocObject();
    puVar12[0x10] = 0;
    *(undefined **)(lVar9 + 0xa8) = puVar12;
    *(undefined4 *)(lVar9 + 0xb0) = 0x10000;
    *(undefined1 *)(lVar9 + 0xb4) = 1;
    uVar13 = 8;
    FUN_100884f1c(8);
    _swift_retain(uVar21);
    _swift_retain(uVar17);
    local_188 = uVar10;
    local_180 = uVar23;
    FUN_100011128(uVar10,uVar23);
    uVar10 = 0;
    FUN_1009a2b3c(0,0,0,0,uVar13 & 0xffffffff);
    *(undefined8 *)(lVar9 + 0xc0) = 0;
    *(undefined8 *)(lVar9 + 200) = 0;
    *(undefined8 *)(lVar9 + 0xb8) = uVar10;
    _swift_allocObject(puVar7,0x11,7);
    puVar7[0x10] = 1;
    *(undefined **)(lVar9 + 0xd0) = puVar7;
    *(undefined8 *)(lVar9 + 0xe0) = 0x8000;
    *(undefined8 *)(lVar9 + 0xd8) = 0;
    *(undefined8 *)(lVar9 + 0xe8) = 0x10000;
    *(undefined4 *)(lVar9 + 0xf0) = 0;
    lVar15 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar5 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar5.value) + -8) + 0x68))
              (lVar9 + lVar15,uVar3,CONCAT71(extraout_var,MVar5.value));
    puVar4 = (undefined8 *)
             (lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
    puVar4[1] = 0xf000000000000007;
    *puVar4 = 0xf000000000000007;
    lVar15 = _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock;
    puVar7 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_110.__sig = 0;
    local_110.__opaque[0] = '\0';
    local_110.__opaque[1] = '\0';
    local_110.__opaque[2] = '\0';
    local_110.__opaque[3] = '\0';
    local_110.__opaque[4] = '\0';
    local_110.__opaque[5] = '\0';
    local_110.__opaque[6] = '\0';
    local_110.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_110);
    iVar6 = _pthread_mutex_init((pthread_mutex_t *)(puVar7 + 0x10),&local_110);
    if (iVar6 != 0) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x10098b960);
      (*pcVar18)();
    }
    *(undefined **)(lVar9 + lVar15) = puVar7;
    *(undefined8 *)
     (lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPoolCapacity) = 4;
    *(class_t **)(lVar9 + 0x40) = pcVar16;
    puVar7 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar7 + 0x20) = pcVar16;
    *(undefined ***)(puVar7 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar7 + 0x10) = 0;
    puVar7[0x18] = 0xff;
    *(undefined8 *)(puVar7 + 0x38) = 0;
    *(undefined8 *)(puVar7 + 0x40) = 0;
    *(undefined8 *)(puVar7 + 0x30) = 0;
    *(undefined **)(lVar9 + 0x50) = puVar7;
    *(undefined8 *)(lVar9 + 0x30) = 0;
    *(undefined8 *)(lVar9 + 0x38) = 0;
    *(undefined8 *)(lVar9 + 0x68) = 0x2000;
    *(undefined8 *)(lVar9 + 0x60) = 1;
    _swift_unknownObjectRetain_n(pcVar16,2);
    puVar20 = local_190;
    uVar10 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,local_190);
    *(undefined8 *)(lVar9 + 0x70) = uVar10;
    uVar10 = *(undefined8 *)(lVar9 + 0x98);
    *(undefined8 *)(lVar9 + 0x90) = uVar17;
    *(undefined8 *)(lVar9 + 0x98) = uVar21;
    _swift_retain(uVar17);
    _swift_retain(uVar21);
    _swift_release(uVar10);
    FUN_100076688(local_b0,auStack_138);
    FUN_100660e04(&local_110,4,auStack_138);
    plVar1 = (long *)(lVar9 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPool);
    plVar1[5] = lStack_e8;
    plVar1[4] = local_f0;
    plVar1[7] = lStack_d8;
    plVar1[6] = lStack_e0;
    plVar1[9] = CONCAT71(uStack_c7,uStack_c8);
    plVar1[8] = local_d0;
    *(undefined8 *)((long)plVar1 + 0x51) = uStack_bf;
    *(ulong *)((long)plVar1 + 0x49) = CONCAT17(uStack_c0,uStack_c7);
    *(char (*) [8])(plVar1 + 1) = local_110.__opaque;
    *plVar1 = local_110.__sig;
    plVar1[3] = lStack_f8;
    plVar1[2] = lStack_100;
    *(undefined8 *)(lVar9 + 0x80) = local_188;
    *(undefined8 *)(lVar9 + 0x88) = local_180;
    FUN_100631d88(0);
    _swift_allocObject();
    lVar15 = lVar9;
    _swift_retain();
    FUN_10062b720();
    _swift_unknownObjectRelease(pcVar16);
    _swift_release(uVar17);
    _swift_release(uVar21);
    FUN_1000fb4c4(puVar20,&DAT_100ff0820,&DAT_100c89460);
    FUN_100004594(local_b0);
    uVar10 = *(undefined8 *)(lVar9 + 0x48);
    *(long *)(lVar9 + 0x48) = lVar15;
    _swift_release(uVar10);
    uVar10 = *(undefined8 *)(lVar9 + 0x58);
    *(long *)(lVar9 + 0x58) = local_198;
  }
  _swift_release(uVar10);
  uVar10 = local_170;
  lVar15 = *(long *)(unaff_x20 +
                    _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  lVar2 = ((long *)(unaff_x20 +
                   _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers))[1];
  if (lVar15 == 0) {
    pcVar18 = *(code **)(unaff_x20 + 0x20);
    puVar12 = *(undefined **)(unaff_x20 + 0x28);
    puVar7 = puVar12;
  }
  else {
    puVar7 = &DAT_100f21090;
    _swift_allocObject(&DAT_100f21090,0x30,7);
    puVar12 = *(undefined **)(unaff_x20 + 0x28);
    uVar23 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar7 + 0x18) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar7 + 0x10) = uVar23;
    *(long *)(puVar7 + 0x20) = lVar15;
    *(long *)(puVar7 + 0x28) = lVar2;
    pcVar18 = thunk_FUN_1009901b4;
  }
  _swift_retain(puVar12);
  _swift_beginAccess(unaff_x20 + 0x38,&local_110,0,0);
  uVar19 = *(undefined8 *)(lVar9 + 0x40);
  uVar23 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar12 = &DAT_100f21068;
  _swift_allocObject(&DAT_100f21068,0x50,7);
  uVar21 = local_168;
  *(undefined8 *)(puVar12 + 0x10) = uVar17;
  *(long *)(puVar12 + 0x18) = lVar9;
  *(code **)(puVar12 + 0x20) = pcVar18;
  *(undefined **)(puVar12 + 0x28) = puVar7;
  puVar12[0x30] = (byte)local_174 & 1;
  *(undefined8 *)(puVar12 + 0x38) = uVar10;
  *(undefined8 *)(puVar12 + 0x40) = local_168;
  *(undefined8 *)(puVar12 + 0x48) = uVar23;
  _swift_retain(lVar9);
  FUN_100011128(lVar15,lVar2);
  _swift_bridgeObjectRetain(uVar17);
  _swift_retain(uVar19);
  _swift_retain(puVar7);
  _swift_retain(uVar21);
  pcVar18 = FUN_100990464;
  FUN_100989670(FUN_100990464,puVar12);
  _swift_release(uVar19);
  _swift_release(puVar12);
  _swift_release(puVar7);
  _swift_release(lVar9);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return pcVar18;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10098b96c | FUN_10098b96c */

/* WARNING: Removing unreachable block (ram,0x00010098b9a4) */

undefined8 FUN_10098b96c(ulong param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  _swift_bridgeObjectRetain(param_2);
  FUN_100667868(param_1,param_2);
  puVar1 = &DAT_100f209b8;
  _swift_allocObject(&DAT_100f209b8,0x18,7);
  *(ulong *)(puVar1 + 0x10) = param_1;
  _swift_retain(param_1 & 0x3fffffffffffffff);
  uVar2 = 0;
  FUN_10098aefc(0,1,thunk_FUN_10098fe78,puVar1);
  _swift_release(param_1 & 0x3fffffffffffffff);
  _swift_release(puVar1);
  return uVar2;
}



/* Address: 0x10098ba80 | FUN_10098ba80 */

void FUN_10098ba80(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  NWEndpoint NVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined7 extraout_var;
  long lVar5;
  undefined1 auStack_50 [24];
  undefined8 local_38;
  
  puVar4 = auStack_50;
  uVar3 = 0;
  FUN_1009a2f4c();
  local_38 = uVar3;
  FUN_10000cbb0(auStack_50);
  NVar2 = Network::NWEndpoint::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,NVar2.value) + -8) + 0x10))
            (puVar4,param_3,CONCAT71(extraout_var,NVar2.value));
  lVar5 = *(long *)(param_1 + 0x48);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_1006276a0(auStack_50,param_2);
    _swift_release(lVar5);
    FUN_100004594(auStack_50);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10098bb1c);
  (*pcVar1)();
}



/* Address: 0x10098bb1c | FUN_10098bb1c */

void FUN_10098bb1c(undefined8 param_1)

{
  FUN_10098aefc(param_1,0,thunk_FUN_10098e0b4,0);
  return;
}



/* Address: 0x10098bb30 | FUN_10098bb30 */

undefined *
FUN_10098bb30(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code cVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  code *pcVar12;
  ulong uVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar2 = param_2;
  FUN_100623594(param_2,&PTR_PTR_100f217d0,param_1);
  puVar3 = &DAT_100f211f8;
  _swift_allocObject(&DAT_100f211f8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(undefined8 *)(puVar3 + 0x18) = param_4;
  *(undefined8 *)(puVar3 + 0x20) = param_2;
  _swift_retain();
  _swift_retain(param_4);
  _swift_retain(param_2);
  uVar4 = uVar2;
  FUN_10098029c(uVar2,FUN_1009904fc,puVar3);
  _swift_release(uVar2);
  _swift_release_n(puVar3,2);
  puVar3 = &DAT_100f21220;
  _swift_allocObject(&DAT_100f21220,0x19,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  puVar3[0x18] = param_5;
  _swift_retain(param_2);
  uVar2 = uVar4;
  FUN_10098029c(uVar4,FUN_100990550,puVar3);
  _swift_release(uVar4);
  _swift_release(puVar3);
  puVar3 = &DAT_100f21248;
  _swift_allocObject(&DAT_100f21248,0x30,7);
  *(undefined8 *)(puVar3 + 0x10) = param_2;
  *(undefined8 *)(puVar3 + 0x18) = param_6;
  *(undefined8 *)(puVar3 + 0x20) = param_7;
  *(undefined8 *)(puVar3 + 0x28) = param_8;
  _swift_retain(param_2);
  _swift_retain(puVar3);
  _swift_retain(param_7);
  uVar4 = uVar2;
  FUN_10098029c(uVar2,FUN_100990564,puVar3);
  _swift_release(uVar2);
  _swift_release_n(puVar3,2);
  puVar3 = &DAT_100f21270;
  _swift_allocObject(&DAT_100f21270,0x20,7);
  *(code **)(puVar3 + 0x10) = FUN_100990570;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  _swift_retain_n(param_2,2);
  pcVar5 = FUN_1008fd66c;
  FUN_10099ffc0(FUN_1008fd66c,puVar3);
  _swift_release(uVar4);
  _swift_release(puVar3);
  puVar3 = &DAT_100ff0978;
  FUN_1000f7830(&DAT_100ff0978,&DAT_100c89520);
  _swift_allocObject();
  lVar11 = *(long *)(pcVar5 + 0x30);
  uVar13 = *(ulong *)(pcVar5 + 0x28);
  *(undefined8 *)(puVar3 + 0x30) = *(undefined8 *)(pcVar5 + 0x30);
  *(ulong *)(puVar3 + 0x28) = uVar13;
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  puVar3[0x20] = 0xff;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  *(undefined8 *)(puVar3 + 0x48) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  puVar6 = &DAT_100f21298;
  _swift_allocObject(&DAT_100f21298,0x30,7);
  *(code **)(puVar6 + 0x10) = pcVar5;
  *(undefined **)(puVar6 + 0x18) = puVar3;
  *(code **)(puVar6 + 0x20) = FUN_10099059c;
  *(undefined8 *)(puVar6 + 0x28) = param_2;
  uVar10 = uVar13;
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar11 + 0x10);
  _swift_retain_n(pcVar5,2);
  _swift_retain_n(puVar3,2);
  _swift_retain_n(param_2,3);
  _swift_unknownObjectRetain(uVar13);
  uVar13 = uVar10;
  (*pcVar12)(uVar10,lVar11);
  if ((uVar13 & 1) == 0) {
    puVar7 = &DAT_100f212c0;
    _swift_allocObject(&DAT_100f212c0,0x28,7);
    *(code **)(puVar7 + 0x10) = pcVar5;
    *(code **)(puVar7 + 0x18) = FUN_1009830a8;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar11 + 0x18);
    _swift_retain(pcVar5);
    _swift_retain(puVar6);
    (*pcVar12)(thunk_FUN_1009806c8,puVar7,uVar10,lVar11);
    _swift_release(param_2);
    _swift_release(pcVar5);
    _swift_release(puVar7);
  }
  else {
    _swift_beginAccess(pcVar5 + 0x10,auStack_78,0,0);
    uVar2 = *(undefined8 *)(pcVar5 + 0x10);
    uVar4 = *(undefined8 *)(pcVar5 + 0x18);
    cVar1 = pcVar5[0x20];
    uVar10 = (ulong)(byte)cVar1;
    if (cVar1 == (code)0x1) {
      FUN_1008fde58(uVar2,uVar4);
      uVar8 = 0;
      FUN_100991a3c(0);
      FUN_10061cf14(2,0,uVar8,&PTR_PTR_100f217d0);
      _swift_willThrow();
      uVar10 = 1;
      uVar8 = uVar2;
      uVar9 = uVar4;
      FUN_100999868(uVar2,uVar4,1);
      FUN_1009082bc(uVar2,uVar4,1);
    }
    else if (cVar1 == (code)0xff) {
      _swift_beginAccess(pcVar5 + 0x38,auStack_90,0x21,0);
      FUN_10064967c(FUN_1009830a8,puVar6);
      _swift_endAccess(auStack_90);
      uVar10 = 0;
      uVar8 = 0;
      uVar9 = 0;
    }
    else {
      FUN_100999868(uVar2,uVar4);
      uVar8 = uVar2;
      uVar9 = uVar4;
    }
    FUN_1006486f8(uVar8,uVar9,uVar10);
    FUN_100004550(uVar8,uVar9);
    _swift_release(param_2);
    _swift_release(pcVar5);
    _swift_bridgeObjectRelease(uVar10);
  }
  _swift_release_n(param_2,2);
  _swift_release(puVar3);
  _swift_release(pcVar5);
  _swift_release(puVar6);
  return puVar3;
}



/* Address: 0x10098bf90 | FUN_10098bf90 */

void FUN_10098bf90(long param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)(param_1 + 0x40);
    puVar2 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(undefined8 *)(puVar2 + 0x20) = uVar1;
    *(undefined ***)(puVar2 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar2 + 0x10) = 0;
    puVar2[0x18] = 0;
    *(undefined8 *)(puVar2 + 0x38) = 0;
    *(undefined8 *)(puVar2 + 0x40) = 0;
    *(undefined8 *)(puVar2 + 0x30) = 0;
    _swift_retain(uVar1);
  }
  else {
    uVar1 = 0;
    FUN_100991a3c(0);
    FUN_100622844("NIOTransportServices/NIOTSConnectionBootstrap.swift",0x33,2,0x115,uVar1,
                  &PTR_PTR_100f21778);
  }
  return;
}



/* Address: 0x10098c03c | FUN_10098c03c */

undefined * FUN_10098c03c(long param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  code *pcVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  undefined8 *puVar13;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar10 = *(long *)(param_1 + 0x40);
  _swift_getObjectType(lVar10);
  FUN_1000f4a44();
  puVar3 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(long *)(puVar3 + 0x20) = lVar10;
  *(undefined ***)(puVar3 + 0x28) = &PTR_PTR_100f21d18;
  puVar13 = (undefined8 *)(puVar3 + 0x10);
  *puVar13 = 0;
  puVar3[0x18] = 0xff;
  *(undefined8 *)(puVar3 + 0x30) = 0;
  *(undefined8 *)(puVar3 + 0x38) = 0;
  *(undefined8 *)(puVar3 + 0x40) = 0;
  _swift_retain(param_1);
  _swift_retain(lVar10);
  (*param_2)(param_1,puVar3);
  puVar4 = &DAT_100f212e8;
  _swift_allocObject(&DAT_100f212e8,0x28,7);
  *(undefined **)(puVar4 + 0x10) = puVar3;
  *(undefined8 *)(puVar4 + 0x18) = param_4;
  *(long *)(puVar4 + 0x20) = param_1;
  lVar1 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_retain(puVar3);
  pcVar9 = FUN_1009905e8;
  lVar10 = lVar10 + lVar1;
  FUN_10099ab88();
  _swift_release(puVar4);
  puVar4 = &DAT_100f21310;
  _swift_allocObject(&DAT_100f21310,0x28,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(long *)(puVar4 + 0x18) = lVar10;
  *(code **)(puVar4 + 0x20) = pcVar9;
  puVar5 = &DAT_100f21338;
  _swift_allocObject(&DAT_100f21338,0x28,7);
  *(code **)(puVar5 + 0x10) = FUN_1009830e0;
  *(undefined **)(puVar5 + 0x18) = puVar4;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  uVar6 = *(ulong *)(puVar3 + 0x20);
  lVar1 = *(long *)(puVar3 + 0x28);
  _swift_getObjectType();
  pcVar11 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(puVar3,3);
  _swift_retain_n(param_4,2);
  _swift_retain_n(pcVar9,2);
  _swift_retain_n(puVar4,2);
  uVar7 = uVar6;
  (*pcVar11)(uVar6,lVar1);
  if ((uVar7 & 1) == 0) {
    puVar8 = &DAT_100f21360;
    _swift_allocObject(&DAT_100f21360,0x28,7);
    *(undefined **)(puVar8 + 0x10) = puVar3;
    *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar8 + 0x20) = puVar5;
    pcVar11 = *(code **)(lVar1 + 0x18);
    _swift_retain(puVar3);
    _swift_retain(puVar5);
    (*pcVar11)(thunk_FUN_1008db360,puVar8,uVar6,lVar1);
    _swift_release(pcVar9);
    _swift_release(param_4);
    _swift_release(puVar8);
    _swift_release(puVar3);
    _swift_release(puVar4);
  }
  else {
    _swift_beginAccess(puVar13,auStack_78,0,0);
    cVar2 = puVar3[0x18];
    if (cVar2 == -1) {
      _swift_beginAccess(puVar3 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar5);
      _swift_endAccess(auStack_90);
    }
    else {
      uVar12 = *puVar13;
      FUN_100308524(uVar12,cVar2);
      FUN_10099a394(param_4,lVar10,pcVar9);
      FUN_100308538(uVar12,cVar2);
    }
    _swift_release(puVar4);
    _swift_release(puVar5);
    _swift_release(pcVar9);
    _swift_release(param_4);
    puVar5 = puVar3;
  }
  _swift_release(puVar5);
  _swift_release(puVar3);
  _swift_release(pcVar9);
  _swift_release(param_4);
  _swift_release(puVar4);
  return puVar3;
}



/* Address: 0x10098c368 | FUN_10098c368 */

void FUN_10098c368(undefined8 param_1,undefined8 *param_2)

{
  FUN_10061cf14(2,0,*param_2,&PTR_PTR_100f217d0);
  _swift_willThrow();
  _swift_errorRetain(param_1);
  return;
}



/* Address: 0x10098c3b4 | FUN_10098c3b4 */

void FUN_10098c3b4(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long unaff_x20;
  
  plVar1 = (long *)(unaff_x20 +
                   _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  if (*plVar1 == 0) {
    *plVar1 = param_1;
    plVar1[1] = param_2;
    _swift_retain(param_2);
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10098c3ec);
  (*pcVar2)();
}



/* Address: 0x10098c3ec | FUN_10098c3ec */

void FUN_10098c3ec(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  FUN_1000fb4c4(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos,&DAT_100ff0820
                ,&DAT_100c89460);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions));
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions));
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers
                 ),((undefined8 *)
                   (unaff_x20 +
                   _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers))[1]);
  FUN_100004550(*(undefined8 *)
                 (unaff_x20 +
                 _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator),
                ((undefined8 *)
                (unaff_x20 +
                _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))[1])
  ;
  return;
}



/* Address: 0x10098c480 | FUN_10098c480 */

void FUN_10098c480(void)

{
  FUN_10098c3ec();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10098c4a4 | FUN_10098c4a4 */

void FUN_10098c4a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_10098c4c8,0,0);
  return;
}



/* Address: 0x10098c4c8 | FUN_10098c4c8 */

void FUN_10098c4c8(ulong *param_1)

{
  undefined8 uVar1;
  int iVar2;
  String SVar3;
  NWEndpoint NVar4;
  Port PVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined7 extraout_var;
  long *plVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  long lVar8;
  
  uVar10 = *(ulong *)(unaff_x22 + 0x28);
  if (uVar10 >> 0x10 == 0) {
    PVar5 = Network::NWEndpoint::Port::typeMetadataAccessor();
    *(__uint64 *)(unaff_x22 + 0x50) = PVar5._context;
    lVar11 = *(long *)(PVar5._context - 8);
    *(long *)(unaff_x22 + 0x58) = lVar11;
    param_1 = (ulong *)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    _swift_task_alloc();
    *(ulong **)(unaff_x22 + 0x60) = param_1;
    puVar6 = &DAT_100ff0848;
    FUN_1000f7830(&DAT_100ff0848,&DAT_100c8a020);
    uVar7 = *(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    Network::NWEndpoint::Port::_init((__uint16)uVar10);
    uVar10 = uVar7;
    (**(code **)(lVar11 + 0x30))(uVar7,1,PVar5._context);
    if ((int)uVar10 != 1) {
      uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
      SVar3 = *(String *)(unaff_x22 + 0x18);
      (**(code **)(lVar11 + 0x20))(param_1,uVar7,PVar5._context);
      _swift_task_dealloc(uVar7);
      NVar4 = Network::NWEndpoint::typeMetadataAccessor();
      lVar8 = CONCAT71(extraout_var,NVar4.value);
      *(long *)(unaff_x22 + 0x68) = lVar8;
      lVar12 = *(long *)(lVar8 + -8);
      *(long *)(unaff_x22 + 0x70) = lVar12;
      uVar10 = *(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0;
      _swift_task_alloc();
      *(ulong *)(unaff_x22 + 0x78) = uVar10;
      puVar6 = &DAT_100ff0858;
      FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
      iVar2 = *(int *)(puVar6 + 0x30);
      _swift_bridgeObjectRetain(uVar1);
      Network::NWEndpoint::Host::init(SVar3);
      (**(code **)(lVar11 + 0x10))(uVar10 + (long)iVar2,param_1,PVar5._context);
      (**(code **)(lVar12 + 0x68))
                (uVar10,*(undefined4 *)
                         PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
                 ,lVar8);
      plVar9 = (long *)0x50;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x80) = plVar9;
      *plVar9 = unaff_x22;
      plVar9[1] = (long)FUN_10098c704;
      FUN_10098c848(plVar9,*(undefined8 *)(unaff_x22 + 0x10),uVar10,
                    *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38),
                    *(undefined8 *)(unaff_x22 + 0x40));
      return;
    }
    FUN_1000fb4c4(uVar7,&DAT_100ff0848,&DAT_100c8a020);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc();
    uVar10 = *(ulong *)(unaff_x22 + 0x28);
  }
  FUN_100982b50();
  _swift_allocError(&DAT_100f21b58,param_1,0,0);
  *param_1 = uVar10;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010098c5fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10098c704 | FUN_10098c704 */

void FUN_10098c704(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x88) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x80));
  if (unaff_x20 == 0) {
    uVar1 = *(undefined8 *)(lVar3 + 0x78);
    (**(code **)(*(long *)(lVar3 + 0x70) + 8))(uVar1,*(undefined8 *)(lVar3 + 0x68));
    _swift_task_dealloc(uVar1);
    pcVar2 = FUN_10098c784;
  }
  else {
    pcVar2 = FUN_10098c7d4;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x10098c784 | FUN_10098c784 */

void FUN_10098c784(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  (**(code **)(*(long *)(unaff_x22 + 0x58) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x50));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010098c7d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10098c7d4 | FUN_10098c7d4 */

void FUN_10098c7d4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  lVar4 = *(long *)(unaff_x22 + 0x58);
  (**(code **)(*(long *)(unaff_x22 + 0x70) + 8))(uVar3,*(undefined8 *)(unaff_x22 + 0x68));
  (**(code **)(lVar4 + 8))(uVar1,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010098c844. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10098c848 | FUN_10098c848 */

void FUN_10098c848(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10098c868,0,0);
  return;
}



/* Address: 0x10098c868 | FUN_10098c868 */

void FUN_10098c868(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  NWEndpoint NVar4;
  undefined7 extraout_var;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *plVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x22;
  long lVar11;
  long lVar12;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  NVar4 = Network::NWEndpoint::typeMetadataAccessor();
  lVar11 = *(long *)(CONCAT71(extraout_var,NVar4.value) + -8);
  lVar12 = *(long *)(lVar11 + 0x40);
  uVar5 = lVar12 + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar5);
  (**(code **)(lVar11 + 0x10))();
  uVar9 = (ulong)*(byte *)(lVar11 + 0x50);
  uVar10 = uVar9 + 0x10 & (uVar9 ^ 0xffffffffffffffff);
  puVar6 = &DAT_100f209e0;
  _swift_allocObject(&DAT_100f209e0,uVar10 + lVar12,uVar9 | 7);
  (**(code **)(lVar11 + 0x20))(puVar6 + uVar10,uVar5,CONCAT71(extraout_var,NVar4.value));
  uVar7 = 0;
  FUN_10098cf30(0,uVar2,uVar3,FUN_10098fc08,puVar6,uVar1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar7;
  _swift_release(puVar6);
  _swift_task_dealloc(uVar5);
  plVar8 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar8;
  *plVar8 = unaff_x22;
  plVar8[1] = (long)thunk_FUN_10098e068;
  FUN_1005da4a4(plVar8,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10098c998 | FUN_10098c998 */

void FUN_10098c998(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10098c9b8,0,0);
  return;
}



/* Address: 0x10098c9b8 | FUN_10098c9b8 */

void FUN_10098c9b8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  long unaff_x22;
  ulong uVar7;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar7 = *(ulong *)(unaff_x22 + 0x18);
  puVar4 = &DAT_100f20a08;
  _swift_allocObject(&DAT_100f20a08,0x18,7);
  *(ulong *)(puVar4 + 0x10) = uVar7;
  _swift_retain(uVar7 & 0x3fffffffffffffff);
  uVar5 = 0;
  FUN_10098cf30(0,uVar2,uVar3,FUN_10098fc74,puVar4,uVar1);
  *(undefined8 *)(unaff_x22 + 0x40) = uVar5;
  _swift_release(puVar4);
  plVar6 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)thunk_FUN_10098e068;
  FUN_1005da4a4(plVar6,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10098ca80 | FUN_10098ca80 */

void FUN_10098ca80(undefined8 param_1,long param_2,ulong param_3)

{
  long lVar1;
  char cVar2;
  undefined8 uVar3;
  char *pcVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined1 auStack_90 [24];
  undefined8 local_78 [3];
  
  uVar3 = 0;
  local_78[0] = param_1;
  FUN_100991a3c();
  pcVar4 = "NIOTransportServices/NIOTSConnectionBootstrap.swift";
  FUN_100622844("NIOTransportServices/NIOTSConnectionBootstrap.swift",0x33,2,0x166,uVar3,
                &PTR_PTR_100f21778);
  puVar5 = &DAT_100f20c30;
  _swift_allocObject(&DAT_100f20c30,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  *(ulong *)(puVar5 + 0x18) = param_3;
  *(long *)(puVar5 + 0x20) = param_2;
  puVar6 = &DAT_100f20c58;
  _swift_allocObject(&DAT_100f20c58,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_10099010c;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(char **)(puVar6 + 0x20) = pcVar4;
  uVar7 = *(ulong *)(pcVar4 + 0x20);
  lVar1 = *(long *)(pcVar4 + 0x28);
  _swift_getObjectType();
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_3 & 0x3fffffffffffffff,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(pcVar4,2);
  _swift_retain_n(param_1,2);
  uVar8 = uVar7;
  (*pcVar12)(uVar7,lVar1);
  if ((uVar8 & 1) == 0) {
    puVar9 = &DAT_100f20c80;
    _swift_allocObject(&DAT_100f20c80,0x28,7);
    *(char **)(puVar9 + 0x10) = pcVar4;
    *(code **)(puVar9 + 0x18) = FUN_1006225d4;
    *(undefined **)(puVar9 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain(pcVar4);
    _swift_retain(puVar6);
    (*pcVar12)(FUN_1008db360,puVar9,uVar7,lVar1);
    _swift_release(param_1);
    _swift_release(puVar9);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
  }
  else {
    uVar11 = 0;
    _swift_beginAccess(pcVar4 + 0x10,local_78,0,0);
    uVar13 = *(undefined8 *)(pcVar4 + 0x10);
    cVar2 = pcVar4[0x18];
    if (cVar2 == '\x01') {
      uVar7 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      pcVar12 = *(code **)(lVar1 + 0x10);
      FUN_100308524(uVar13,1);
      uVar8 = uVar7;
      lVar10 = lVar1;
      (*pcVar12)(uVar7,lVar1);
      if ((uVar8 & 1) == 0) {
        puVar9 = &DAT_100f20ca8;
        _swift_allocObject(&DAT_100f20ca8,0x20,7);
        *(long *)(puVar9 + 0x10) = param_2;
        *(undefined8 *)(puVar9 + 0x18) = uVar13;
        pcVar12 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        FUN_1005dfeb4(uVar13,1);
        (*pcVar12)(FUN_1008d678c,puVar9,uVar7,lVar1);
        _swift_release(puVar9);
      }
      else {
        uVar3 = uVar13;
        thunk_FUN_1005de8f4(uVar13);
        FUN_1006486f8();
        FUN_100004550(uVar3,lVar10);
        _swift_bridgeObjectRelease(uVar11);
      }
      FUN_100308538(uVar13,1);
    }
    else if (cVar2 == -1) {
      _swift_beginAccess(pcVar4 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_1006225d4,puVar6);
      _swift_endAccess(auStack_90);
    }
    else {
      FUN_10061d154(param_3,param_2,uVar3,&PTR_PTR_100f217d0);
      FUN_100308538(uVar13,cVar2);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_1);
    _swift_release(pcVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  _swift_release(pcVar4);
  _swift_release(param_2);
  _swift_release(param_3 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x10098cdf8 | FUN_10098cdf8 */

void FUN_10098cdf8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar6 = 0;
    FUN_100991a3c(0);
    FUN_10061d154(param_3,param_4,uVar6,&PTR_PTR_100f217d0);
    return;
  }
  uVar6 = *param_1;
  uVar2 = *(ulong *)(param_4 + 0x20);
  lVar1 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar5 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar6);
    FUN_1006486f8();
    FUN_100004550(uVar6,lVar5);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar4 = &DAT_100f20cd0;
  _swift_allocObject(&DAT_100f20cd0,0x20,7);
  *(long *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = uVar6;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(uVar6,1);
  (*pcVar7)(thunk_FUN_1008d678c,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x10098cf30 | FUN_10098cf30 */

code * FUN_10098cf30(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  long *plVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  long lVar6;
  MultipathServiceType MVar7;
  int iVar8;
  undefined *puVar9;
  DispatchQoS DVar10;
  long lVar11;
  undefined8 uVar12;
  undefined7 extraout_var;
  class_t *pcVar13;
  undefined7 extraout_var_00;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long unaff_x20;
  class_t *pcVar19;
  undefined8 uVar20;
  code *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined1 *puVar24;
  undefined1 *puVar25;
  undefined1 auStack_1b0 [8];
  long local_1a8;
  undefined1 *local_1a0;
  long local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined1 local_140;
  undefined1 auStack_138 [40];
  pthread_mutexattr_t local_110;
  long lStack_100;
  long lStack_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined8 uStack_bf;
  undefined *local_b0 [3];
  undefined *local_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar9 = &DAT_100ff0820;
  local_190 = param_2;
  FUN_1000f7830(&DAT_100ff0820,&DAT_100c89460);
  puVar25 = auStack_1b0 + -(*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar19 = *(class_t **)(unaff_x20 + 0x10);
  lVar18 = *(long *)(unaff_x20 + 0x18);
  _swift_getObjectType();
  pcVar21 = *(code **)(lVar18 + 0x10);
  local_188 = param_4;
  local_180 = param_3;
  local_178 = param_5;
  local_170 = param_6;
  if (param_1 == 0) {
    (*pcVar21)();
    pcVar13 = pcVar19;
    _object_getClass();
    lVar18 = _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos;
    if (pcVar13 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10098da34);
      (*pcVar21)();
    }
    _swift_beginAccess(unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::qos,
                       auStack_88,0,0);
    puVar9 = &DAT_100c89460;
    FUN_1000f8cac(unaff_x20 + lVar18,puVar25,&DAT_100ff0820);
    local_168 = *(undefined8 *)
                 (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions);
    puVar24 = *(undefined1 **)
               (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions);
    uVar12 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
    uVar2 = ((undefined8 *)
            (unaff_x20 +
            _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))[1];
    FUN_1006648f0(&local_160,0x40,0x800,0x10000);
    local_98 = &DAT_100ef25a0;
    ppuStack_90 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar14 = &DAT_100f20cf8;
    _swift_allocObject(&DAT_100f20cf8,0x38,7);
    *(undefined8 *)(puVar14 + 0x18) = uStack_158;
    *(undefined8 *)(puVar14 + 0x10) = local_160;
    *(undefined8 *)(puVar14 + 0x28) = uStack_148;
    *(undefined8 *)(puVar14 + 0x20) = local_150;
    puVar14[0x30] = local_140;
    lVar11 = 0;
    local_b0[0] = puVar14;
    FUN_100991a3c();
    uVar16 = (ulong)*(uint *)(lVar11 + 0x30);
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x34);
    _swift_allocObject();
    lVar18 = lVar11;
    FUN_100611728();
    *(long *)(lVar11 + 0x10) = lVar18;
    *(ulong *)(lVar11 + 0x18) = uVar16;
    *(ulong *)(lVar11 + 0x20) = uVar17;
    *(undefined **)(lVar11 + 0x28) = puVar9;
    *(undefined8 *)(lVar11 + 0x48) = 0;
    *(undefined8 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x78) = 0;
    *(undefined8 *)(lVar11 + 0x98) = 0;
    *(undefined1 *)(lVar11 + 0xa0) = 4;
    puVar9 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    puVar14 = puVar9;
    _swift_allocObject();
    puVar14[0x10] = 0;
    *(undefined **)(lVar11 + 0xa8) = puVar14;
    *(undefined4 *)(lVar11 + 0xb0) = 0x10000;
    *(undefined1 *)(lVar11 + 0xb4) = 1;
    uVar16 = 8;
    FUN_100884f1c(8);
    lVar6 = local_168;
    local_1a0 = puVar24;
    _swift_retain(puVar24);
    _swift_retain(lVar6);
    local_198 = uVar12;
    FUN_100011128(uVar12,uVar2);
    uVar12 = 0;
    FUN_1009a2b3c(0,0,0,0,uVar16 & 0xffffffff);
    *(undefined8 *)(lVar11 + 0xc0) = 0;
    *(undefined8 *)(lVar11 + 200) = 0;
    *(undefined8 *)(lVar11 + 0xb8) = uVar12;
    _swift_allocObject(puVar9,0x11,7);
    puVar9[0x10] = 1;
    *(undefined **)(lVar11 + 0xd0) = puVar9;
    *(undefined8 *)(lVar11 + 0xe0) = 0x8000;
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xe8) = 0x10000;
    *(undefined4 *)(lVar11 + 0xf0) = 0;
    lVar18 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar7 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var_00,MVar7.value) + -8) + 0x68))
              (lVar11 + lVar18,uVar3,CONCAT71(extraout_var_00,MVar7.value));
    puVar4 = (undefined8 *)
             (lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
    puVar4[1] = 0xf000000000000007;
    *puVar4 = 0xf000000000000007;
    lVar18 = _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock;
    puVar9 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_110.__sig = 0;
    local_110.__opaque[0] = '\0';
    local_110.__opaque[1] = '\0';
    local_110.__opaque[2] = '\0';
    local_110.__opaque[3] = '\0';
    local_110.__opaque[4] = '\0';
    local_110.__opaque[5] = '\0';
    local_110.__opaque[6] = '\0';
    local_110.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_110);
    iVar8 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x10),&local_110);
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10098da38);
      (*pcVar21)();
    }
    *(undefined **)(lVar11 + lVar18) = puVar9;
    *(undefined8 *)
     (lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPoolCapacity) = 4;
    *(class_t **)(lVar11 + 0x40) = pcVar19;
    puVar9 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar9 + 0x20) = pcVar19;
    *(undefined ***)(puVar9 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    puVar9[0x18] = 0xff;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x40) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined **)(lVar11 + 0x50) = puVar9;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x68) = 0x2000;
    *(undefined8 *)(lVar11 + 0x60) = 1;
    _swift_unknownObjectRetain_n(pcVar19,2);
    uVar12 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,puVar25);
    puVar24 = local_1a0;
    *(undefined8 *)(lVar11 + 0x70) = uVar12;
    uVar12 = *(undefined8 *)(lVar11 + 0x98);
    *(long *)(lVar11 + 0x90) = lVar6;
    *(undefined1 **)(lVar11 + 0x98) = local_1a0;
    _swift_retain(lVar6);
    _swift_retain(puVar24);
    _swift_release(uVar12);
    FUN_100076688(local_b0,auStack_138);
    FUN_100660e04(&local_110,4,auStack_138);
    plVar1 = (long *)(lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPool);
    plVar1[5] = lStack_e8;
    plVar1[4] = local_f0;
    plVar1[7] = lStack_d8;
    plVar1[6] = lStack_e0;
    plVar1[9] = CONCAT71(uStack_c7,uStack_c8);
    plVar1[8] = local_d0;
    *(undefined8 *)((long)plVar1 + 0x51) = uStack_bf;
    *(ulong *)((long)plVar1 + 0x49) = CONCAT17(uStack_c0,uStack_c7);
    *(char (*) [8])(plVar1 + 1) = local_110.__opaque;
    *plVar1 = local_110.__sig;
    plVar1[3] = lStack_f8;
    plVar1[2] = lStack_100;
    *(long *)(lVar11 + 0x80) = local_198;
    *(undefined8 *)(lVar11 + 0x88) = uVar2;
    FUN_100631d88(0);
    _swift_allocObject();
    lVar18 = lVar11;
    _swift_retain();
    FUN_10062b720();
    _swift_unknownObjectRelease(pcVar19);
    _swift_release(lVar6);
    _swift_release(puVar24);
    FUN_1000fb4c4(puVar25,&DAT_100ff0820,&DAT_100c89460);
    FUN_100004594(local_b0);
    uVar12 = *(undefined8 *)(lVar11 + 0x48);
    *(long *)(lVar11 + 0x48) = lVar18;
  }
  else {
    _swift_retain(param_1);
    (*pcVar21)(pcVar19,lVar18);
    pcVar13 = pcVar19;
    _object_getClass();
    if (pcVar13 != &objc::class_t::_TtC20NIOTransportServices14NIOTSEventLoop) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10098da2c);
      (*pcVar21)();
    }
    local_1a8 = param_1;
    DVar10 = Dispatch::DispatchQoS::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar10.unknown + -8) + 0x38))(puVar25,1,1);
    uVar20 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tcpOptions);
    uVar23 = *(undefined8 *)
              (unaff_x20 + _TtC20NIOTransportServices24NIOTSConnectionBootstrap::tlsOptions);
    uVar12 = *(undefined8 *)
              (unaff_x20 +
              _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator);
    uVar2 = ((undefined8 *)
            (unaff_x20 +
            _TtC20NIOTransportServices24NIOTSConnectionBootstrap::nwParametersConfigurator))[1];
    local_1a0 = puVar25;
    FUN_1006648f0(&local_160,0x40,0x800,0x10000);
    local_98 = &DAT_100ef25a0;
    ppuStack_90 = &PTR_TargetResilientWitness_100c6bf4c_Implementation_100ef24e0;
    puVar9 = &DAT_100f20cf8;
    _swift_allocObject(&DAT_100f20cf8,0x38,7);
    *(undefined8 *)(puVar9 + 0x18) = uStack_158;
    *(undefined8 *)(puVar9 + 0x10) = local_160;
    *(undefined8 *)(puVar9 + 0x28) = uStack_148;
    *(undefined8 *)(puVar9 + 0x20) = local_150;
    puVar9[0x30] = local_140;
    lVar11 = 0;
    local_b0[0] = puVar9;
    FUN_100991a3c();
    uVar16 = (ulong)*(uint *)(lVar11 + 0x30);
    uVar17 = (ulong)*(ushort *)(lVar11 + 0x34);
    _swift_allocObject();
    lVar18 = lVar11;
    FUN_100611728();
    *(long *)(lVar11 + 0x10) = lVar18;
    *(ulong *)(lVar11 + 0x18) = uVar16;
    *(ulong *)(lVar11 + 0x20) = uVar17;
    *(undefined **)(lVar11 + 0x28) = DVar10.unknown;
    *(undefined8 *)(lVar11 + 0x48) = 0;
    *(undefined8 *)(lVar11 + 0x58) = 0;
    *(undefined8 *)(lVar11 + 0x78) = 0;
    *(undefined8 *)(lVar11 + 0x98) = 0;
    *(undefined1 *)(lVar11 + 0xa0) = 4;
    puVar9 = &DAT_100ff0960;
    FUN_1000f7830(&DAT_100ff0960,&DAT_100c8af90);
    puVar14 = puVar9;
    _swift_allocObject();
    puVar14[0x10] = 0;
    *(undefined **)(lVar11 + 0xa8) = puVar14;
    *(undefined4 *)(lVar11 + 0xb0) = 0x10000;
    *(undefined1 *)(lVar11 + 0xb4) = 1;
    uVar16 = 8;
    FUN_100884f1c(8);
    _swift_retain(uVar23);
    _swift_retain(uVar20);
    local_198 = uVar12;
    local_168 = uVar2;
    FUN_100011128(uVar12,uVar2);
    uVar12 = 0;
    FUN_1009a2b3c(0,0,0,0,uVar16 & 0xffffffff);
    *(undefined8 *)(lVar11 + 0xc0) = 0;
    *(undefined8 *)(lVar11 + 200) = 0;
    *(undefined8 *)(lVar11 + 0xb8) = uVar12;
    _swift_allocObject(puVar9,0x11,7);
    puVar9[0x10] = 1;
    *(undefined **)(lVar11 + 0xd0) = puVar9;
    *(undefined8 *)(lVar11 + 0xe0) = 0x8000;
    *(undefined8 *)(lVar11 + 0xd8) = 0;
    *(undefined8 *)(lVar11 + 0xe8) = 0x10000;
    *(undefined4 *)(lVar11 + 0xf0) = 0;
    lVar18 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
    uVar3 = *(undefined4 *)
             PTR___enum_case_for_Network_NWParameters_MultipathServiceType_disabled_Network_NWParameters_MultipathServiceType_Type___>_Network_NWParameters_MultipathServiceType_100eaa130
    ;
    MVar7 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,MVar7.value) + -8) + 0x68))
              (lVar11 + lVar18,uVar3,CONCAT71(extraout_var,MVar7.value));
    puVar4 = (undefined8 *)
             (lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCache);
    puVar4[1] = 0xf000000000000007;
    *puVar4 = 0xf000000000000007;
    lVar18 = _TtC20NIOTransportServices22NIOTSConnectionChannel::_addressCacheLock;
    puVar9 = &DAT_100ff0968;
    FUN_1000f7830(&DAT_100ff0968,&DAT_100c89510);
    _swift_allocObject();
    local_110.__sig = 0;
    local_110.__opaque[0] = '\0';
    local_110.__opaque[1] = '\0';
    local_110.__opaque[2] = '\0';
    local_110.__opaque[3] = '\0';
    local_110.__opaque[4] = '\0';
    local_110.__opaque[5] = '\0';
    local_110.__opaque[6] = '\0';
    local_110.__opaque[7] = '\0';
    _pthread_mutexattr_init(&local_110);
    iVar8 = _pthread_mutex_init((pthread_mutex_t *)(puVar9 + 0x10),&local_110);
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar21 = (code *)SoftwareBreakpoint(1,0x10098da30);
      (*pcVar21)();
    }
    *(undefined **)(lVar11 + lVar18) = puVar9;
    *(undefined8 *)
     (lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPoolCapacity) = 4;
    *(class_t **)(lVar11 + 0x40) = pcVar19;
    puVar9 = &DAT_100ff07b8;
    FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
    _swift_allocObject();
    *(class_t **)(puVar9 + 0x20) = pcVar19;
    *(undefined ***)(puVar9 + 0x28) = &PTR_PTR_100f21d18;
    *(undefined8 *)(puVar9 + 0x10) = 0;
    puVar9[0x18] = 0xff;
    *(undefined8 *)(puVar9 + 0x38) = 0;
    *(undefined8 *)(puVar9 + 0x40) = 0;
    *(undefined8 *)(puVar9 + 0x30) = 0;
    *(undefined **)(lVar11 + 0x50) = puVar9;
    *(undefined8 *)(lVar11 + 0x30) = 0;
    *(undefined8 *)(lVar11 + 0x38) = 0;
    *(undefined8 *)(lVar11 + 0x68) = 0x2000;
    *(undefined8 *)(lVar11 + 0x60) = 1;
    _swift_unknownObjectRetain_n(pcVar19,2);
    puVar25 = local_1a0;
    uVar12 = 0xd00000000000002a;
    FUN_100992394(0xd00000000000002a,0x8000000100db6da0,local_1a0);
    *(undefined8 *)(lVar11 + 0x70) = uVar12;
    uVar12 = *(undefined8 *)(lVar11 + 0x98);
    *(undefined8 *)(lVar11 + 0x90) = uVar20;
    *(undefined8 *)(lVar11 + 0x98) = uVar23;
    _swift_retain(uVar20);
    _swift_retain(uVar23);
    _swift_release(uVar12);
    FUN_100076688(local_b0,auStack_138);
    FUN_100660e04(&local_110,4,auStack_138);
    plVar1 = (long *)(lVar11 + _TtC20NIOTransportServices22NIOTSConnectionChannel::recvBufferPool);
    plVar1[5] = lStack_e8;
    plVar1[4] = local_f0;
    plVar1[7] = lStack_d8;
    plVar1[6] = lStack_e0;
    plVar1[9] = CONCAT71(uStack_c7,uStack_c8);
    plVar1[8] = local_d0;
    *(undefined8 *)((long)plVar1 + 0x51) = uStack_bf;
    *(ulong *)((long)plVar1 + 0x49) = CONCAT17(uStack_c0,uStack_c7);
    *(char (*) [8])(plVar1 + 1) = local_110.__opaque;
    *plVar1 = local_110.__sig;
    plVar1[3] = lStack_f8;
    plVar1[2] = lStack_100;
    *(long *)(lVar11 + 0x80) = local_198;
    *(long *)(lVar11 + 0x88) = local_168;
    FUN_100631d88(0);
    _swift_allocObject();
    lVar18 = lVar11;
    _swift_retain();
    FUN_10062b720();
    _swift_unknownObjectRelease(pcVar19);
    _swift_release(uVar20);
    _swift_release(uVar23);
    FUN_1000fb4c4(puVar25,&DAT_100ff0820,&DAT_100c89460);
    FUN_100004594(local_b0);
    uVar12 = *(undefined8 *)(lVar11 + 0x48);
    *(long *)(lVar11 + 0x48) = lVar18;
    _swift_release(uVar12);
    uVar12 = *(undefined8 *)(lVar11 + 0x58);
    *(long *)(lVar11 + 0x58) = local_1a8;
  }
  _swift_release(uVar12);
  local_168 = *(long *)(unaff_x20 +
                       _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers);
  lVar18 = ((long *)(unaff_x20 +
                    _TtC20NIOTransportServices24NIOTSConnectionBootstrap::protocolHandlers))[1];
  local_198 = lVar18;
  if (local_168 == 0) {
    pcVar21 = *(code **)(unaff_x20 + 0x20);
    puVar14 = *(undefined **)(unaff_x20 + 0x28);
    puVar9 = puVar14;
  }
  else {
    puVar9 = &DAT_100f20d70;
    _swift_allocObject(&DAT_100f20d70,0x30,7);
    puVar14 = *(undefined **)(unaff_x20 + 0x28);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x20);
    *(undefined8 *)(puVar9 + 0x18) = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined8 *)(puVar9 + 0x10) = uVar12;
    *(long *)(puVar9 + 0x20) = local_168;
    *(long *)(puVar9 + 0x28) = lVar18;
    pcVar21 = FUN_1009901b4;
  }
  _swift_retain(puVar14);
  puVar14 = &DAT_100f20d20;
  _swift_allocObject(&DAT_100f20d20,0x38,7);
  uVar5 = local_170;
  uVar20 = local_180;
  *(undefined8 *)(puVar14 + 0x10) = local_170;
  *(code **)(puVar14 + 0x18) = pcVar21;
  *(undefined **)(puVar14 + 0x20) = puVar9;
  *(undefined8 *)(puVar14 + 0x28) = local_190;
  *(undefined8 *)(puVar14 + 0x30) = local_180;
  _swift_beginAccess(unaff_x20 + 0x38,&local_110,0,0);
  uVar22 = *(undefined8 *)(lVar11 + 0x40);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  puVar15 = &DAT_100f20d48;
  _swift_allocObject(&DAT_100f20d48,0x50,7);
  uVar23 = local_178;
  *(undefined8 *)(puVar15 + 0x10) = uVar5;
  *(undefined8 *)(puVar15 + 0x18) = uVar2;
  *(long *)(puVar15 + 0x20) = lVar11;
  *(code **)(puVar15 + 0x28) = FUN_100990154;
  *(undefined **)(puVar15 + 0x30) = puVar14;
  *(undefined8 *)(puVar15 + 0x38) = local_188;
  *(undefined8 *)(puVar15 + 0x40) = local_178;
  *(undefined8 *)(puVar15 + 0x48) = uVar12;
  _swift_retain(lVar11);
  FUN_100011128(local_168,local_198);
  uVar12 = 0;
  FUN_1009943f8(0);
  _swift_retain(puVar9);
  _swift_retain(uVar20);
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar22);
  _swift_retain(puVar14);
  _swift_retain(uVar23);
  pcVar21 = FUN_1009901a0;
  FUN_100641014(FUN_1009901a0,puVar15,uVar12,uVar5,&PTR_PTR_100f21d18);
  _swift_release(uVar22);
  _swift_release(puVar15);
  _swift_release(puVar14);
  _swift_release(puVar9);
  _swift_release(lVar11);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_70) {
    return pcVar21;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10098da3c | FUN_10098da3c */

void FUN_10098da3c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
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
  _swift_task_switch(FUN_10098da60,0,0);
  return;
}



/* Address: 0x10098da60 | FUN_10098da60 */

/* WARNING: Removing unreachable block (ram,0x00010098daa4) */

void FUN_10098da60(void)

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
  plVar3 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1008e7988;
  FUN_10098c998(plVar3,*(undefined8 *)(unaff_x22 + 0x10),uVar2,*(undefined8 *)(unaff_x22 + 0x28),
                *(undefined8 *)(unaff_x22 + 0x30),*(undefined8 *)(unaff_x22 + 0x38));
  return;
}



/* Address: 0x10098db0c | FUN_10098db0c */

void FUN_10098db0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  NWEndpoint NVar1;
  undefined8 uVar2;
  char *pcVar3;
  undefined7 extraout_var;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  ulong uVar9;
  undefined1 *puVar10;
  long lVar11;
  ulong uVar12;
  code *pcVar13;
  ulong uVar14;
  long lVar15;
  undefined1 auStack_b0 [8];
  long local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined8 local_90;
  char local_88;
  undefined8 local_78 [3];
  long lVar4;
  
  uVar2 = 0;
  local_78[0] = param_1;
  FUN_100991a3c(0);
  pcVar3 = "NIOTransportServices/NIOTSConnectionBootstrap.swift";
  FUN_100622844("NIOTransportServices/NIOTSConnectionBootstrap.swift",0x33,2,0x194,uVar2,
                &PTR_PTR_100f21778);
  NVar1 = Network::NWEndpoint::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,NVar1.value);
  lVar15 = *(long *)(lVar4 + -8);
  lVar8 = *(long *)(lVar15 + 0x40);
  uVar12 = lVar8 + 0xfU & 0xfffffffffffffff0;
  puVar10 = auStack_b0 + -uVar12;
  pcVar13 = *(code **)(lVar15 + 0x10);
  (*pcVar13)(puVar10,param_3,lVar4);
  lVar11 = (long)puVar10 - uVar12;
  (*pcVar13)(lVar11,puVar10,lVar4);
  uVar12 = (ulong)*(byte *)(lVar15 + 0x50);
  uVar14 = uVar12 + 0x18 & (uVar12 ^ 0xffffffffffffffff);
  uVar9 = lVar8 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar5 = &DAT_100f20fc8;
  _swift_allocObject(&DAT_100f20fc8,uVar9 + 8,uVar12 | 7);
  *(undefined8 *)(puVar5 + 0x10) = param_1;
  local_a8 = lVar15;
  lStack_a0 = lVar4;
  (**(code **)(lVar15 + 0x20))(puVar5 + uVar14,puVar10,lVar4);
  *(undefined8 *)(puVar5 + uVar9) = param_2;
  puVar6 = &DAT_100f20ff0;
  _swift_allocObject(&DAT_100f20ff0,0x28,7);
  *(code **)(puVar6 + 0x10) = FUN_1009903d4;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(char **)(puVar6 + 0x20) = pcVar3;
  uVar12 = *(ulong *)(pcVar3 + 0x20);
  lVar4 = *(long *)(pcVar3 + 0x28);
  _swift_getObjectType();
  pcVar13 = *(code **)(lVar4 + 0x10);
  _swift_retain_n(param_1,2);
  local_98 = param_2;
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar5,2);
  _swift_retain_n(pcVar3,2);
  uVar9 = uVar12;
  (*pcVar13)(uVar12,lVar4);
  if ((uVar9 & 1) == 0) {
    puVar7 = &DAT_100f21018;
    _swift_allocObject(&DAT_100f21018,0x28,7);
    *(char **)(puVar7 + 0x10) = pcVar3;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    pcVar13 = *(code **)(lVar4 + 0x18);
    _swift_retain(pcVar3);
    _swift_retain(puVar6);
    (*pcVar13)(thunk_FUN_1008db360,puVar7,uVar12,lVar4);
    _swift_release(param_1);
    _swift_release(puVar7);
    _swift_release(pcVar3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    uVar2 = local_98;
  }
  else {
    _swift_beginAccess(pcVar3 + 0x10,local_78,0,0);
    if (pcVar3[0x18] == -1) {
      _swift_beginAccess(pcVar3 + 0x30,&local_90,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar6);
      _swift_endAccess(&local_90);
      uVar2 = local_98;
    }
    else {
      local_90 = *(undefined8 *)(pcVar3 + 0x10);
      local_88 = pcVar3[0x18];
      FUN_100308524();
      uVar2 = local_98;
      FUN_10098de3c(&local_90,param_1,lVar11,local_98);
      FUN_1002ec258(local_90,local_88);
    }
    FUN_1006486f8(0,0,0);
    FUN_100004550(0,0);
    _swift_release(param_1);
    _swift_release(pcVar3);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    _swift_bridgeObjectRelease(0);
  }
  (**(code **)(local_a8 + 8))(lVar11,lStack_a0);
  _swift_release(pcVar3);
  _swift_release(uVar2);
  return;
}



/* Address: 0x10098de3c | FUN_10098de3c */

void FUN_10098de3c(undefined8 *param_1,long param_2,undefined8 param_3,long param_4)

{
  NWEndpoint NVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined7 extraout_var;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_70 [24];
  undefined8 local_58;
  
  puVar4 = auStack_70;
  if (*(char *)(param_1 + 1) != '\x01') {
    uVar8 = 0;
    FUN_1009a2f4c();
    local_58 = uVar8;
    FUN_10000cbb0(auStack_70);
    NVar1 = Network::NWEndpoint::typeMetadataAccessor();
    (**(code **)(*(long *)(CONCAT71(extraout_var,NVar1.value) + -8) + 0x10))
              (puVar4,param_3,CONCAT71(extraout_var,NVar1.value));
    lVar7 = *(long *)(param_2 + 0x48);
    if (lVar7 != 0) {
      _swift_retain(lVar7);
      FUN_1006276a0(auStack_70,param_4);
      _swift_release(lVar7);
      FUN_100004594(auStack_70);
      return;
    }
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10098dfcc);
    (*pcVar9)();
  }
  uVar8 = *param_1;
  uVar2 = *(ulong *)(param_4 + 0x20);
  lVar7 = *(long *)(param_4 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  lVar6 = lVar7;
  (**(code **)(lVar7 + 0x10))();
  if ((uVar3 & 1) != 0) {
    thunk_FUN_1005de8f4(uVar8);
    FUN_1006486f8();
    FUN_100004550(uVar8,lVar6);
    _swift_bridgeObjectRelease(param_3);
    return;
  }
  puVar5 = &DAT_100f21040;
  _swift_allocObject(&DAT_100f21040,0x20,7);
  *(long *)(puVar5 + 0x10) = param_4;
  *(undefined8 *)(puVar5 + 0x18) = uVar8;
  pcVar9 = *(code **)(lVar7 + 0x18);
  _swift_retain(param_4);
  FUN_100308524(uVar8,1);
  (*pcVar9)(thunk_FUN_1008d678c,puVar5,uVar2,lVar7);
  _swift_release(puVar5);
  return;
}



/* Address: 0x10098dfcc | FUN_10098dfcc */

void FUN_10098dfcc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_10098dfec,0,0);
  return;
}



/* Address: 0x10098dfec | FUN_10098dfec */

void FUN_10098dfec(void)

{
  undefined8 uVar1;
  long *plVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  FUN_10098cf30(uVar1,*(undefined8 *)(unaff_x22 + 0x20),*(undefined8 *)(unaff_x22 + 0x28),
                thunk_FUN_10098e0b4,0,*(undefined8 *)(unaff_x22 + 0x30));
  *(undefined8 *)(unaff_x22 + 0x40) = uVar1;
  plVar2 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x48) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_10098e068;
  FUN_1005da4a4(plVar2,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x10098e068 | FUN_10098e068 */

void FUN_10098e068(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x40);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x48));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x00010098e0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10098e0b4 | FUN_10098e0b4 */

void FUN_10098e0b4(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a5a78(param_2);
  return;
}



/* Address: 0x10098e0d8 | FUN_10098e0d8 */

code * FUN_10098e0d8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  
  uVar1 = param_1;
  (*param_3)();
  puVar2 = &DAT_100f20f78;
  _swift_allocObject(&DAT_100f20f78,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_7;
  *(undefined8 *)(puVar2 + 0x18) = param_5;
  *(undefined8 *)(puVar2 + 0x20) = param_6;
  *(undefined8 *)(puVar2 + 0x28) = param_1;
  *(undefined8 *)(puVar2 + 0x30) = param_2;
  puVar3 = &DAT_100f20fa0;
  _swift_allocObject(&DAT_100f20fa0,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_7;
  *(code **)(puVar3 + 0x18) = FUN_1008feb40;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_1);
  pcVar4 = thunk_FUN_100645f18;
  thunk_FUN_10064a5bc(thunk_FUN_100645f18,puVar3,param_7);
  _swift_release(uVar1);
  _swift_release(puVar3);
  return pcVar4;
}



/* Address: 0x10098e1b0 | FUN_10098e1b0 */

code * FUN_10098e1b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  code *pcVar5;
  
  uVar1 = param_2;
  FUN_100623594(param_2,&PTR_PTR_100f217d0,param_1);
  puVar2 = &DAT_100f20dc0;
  _swift_allocObject(&DAT_100f20dc0,0x30,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  *(undefined8 *)(puVar2 + 0x20) = param_4;
  *(undefined8 *)(puVar2 + 0x28) = param_2;
  puVar3 = &DAT_100f20de8;
  _swift_allocObject(&DAT_100f20de8,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = param_8;
  *(code **)(puVar3 + 0x18) = FUN_100990208;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  _swift_retain(param_4);
  _swift_retain(param_2);
  pcVar4 = FUN_100645f18;
  thunk_FUN_10064a5bc(FUN_100645f18,puVar3,param_8);
  _swift_release(uVar1);
  _swift_release(puVar3);
  puVar2 = &DAT_100f20e10;
  _swift_allocObject(&DAT_100f20e10,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  _swift_retain_n(param_2,2);
  _swift_retain(param_6);
  pcVar5 = FUN_100990264;
  thunk_FUN_10064a5bc(FUN_100990264,puVar2,param_8);
  _swift_release(pcVar4);
  _swift_release(puVar2);
  puVar2 = &DAT_100f20e38;
  _swift_allocObject(&DAT_100f20e38,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_8;
  *(undefined8 *)(puVar2 + 0x18) = param_2;
  pcVar4 = FUN_100990298;
  thunk_FUN_10064adac(FUN_100990298,puVar2);
  _swift_release(pcVar5);
  _swift_release(puVar2);
  return pcVar4;
}



/* Address: 0x10098e348 | FUN_10098e348 */

code * FUN_10098e348(undefined8 param_1,long param_2,code *param_3,undefined8 param_4,
                    undefined8 param_5,long param_6)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong uVar10;
  undefined8 *puVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  undefined8 *local_d0;
  long local_c8;
  code *local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  local_a0 = *(long *)(param_6 + -8);
  local_b0 = *(long *)(local_a0 + 0x40);
  local_a8 = (long)&local_d0 - (local_b0 + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(param_2 + 0x40);
  local_b8 = param_1;
  local_98 = param_6;
  _swift_getObjectType(lVar13);
  FUN_1000f4a44();
  puVar4 = &DAT_100ff07b8;
  FUN_1000f7830(&DAT_100ff07b8,&DAT_100c89500);
  _swift_allocObject();
  *(long *)(puVar4 + 0x20) = lVar13;
  *(undefined ***)(puVar4 + 0x28) = &PTR_PTR_100f21d18;
  puVar11 = (undefined8 *)(puVar4 + 0x10);
  *puVar11 = 0;
  puVar4[0x18] = 0xff;
  local_d0 = (undefined8 *)(puVar4 + 0x30);
  *local_d0 = 0;
  *(undefined8 *)(puVar4 + 0x38) = 0;
  *(undefined8 *)(puVar4 + 0x40) = 0;
  _swift_retain(param_2);
  _swift_retain(lVar13);
  (*param_3)(param_2,puVar4);
  puVar5 = &DAT_100f20e60;
  _swift_allocObject(&DAT_100f20e60,0x28,7);
  *(undefined **)(puVar5 + 0x10) = puVar4;
  *(undefined8 *)(puVar5 + 0x18) = param_5;
  *(long *)(puVar5 + 0x20) = param_2;
  lVar2 = _TtC20NIOTransportServices14NIOTSEventLoop::defaultQoS;
  _swift_retain(puVar4);
  pcVar12 = FUN_1009902b8;
  lVar13 = lVar13 + lVar2;
  FUN_10099ab88();
  _swift_release(puVar5);
  puVar5 = &DAT_100f20e88;
  _swift_allocObject(&DAT_100f20e88,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_5;
  *(long *)(puVar5 + 0x18) = lVar13;
  *(code **)(puVar5 + 0x20) = pcVar12;
  puVar6 = &DAT_100f20eb0;
  local_c8 = lVar13;
  _swift_allocObject(&DAT_100f20eb0,0x28,7);
  *(code **)(puVar6 + 0x10) = thunk_FUN_1009830e0;
  *(undefined **)(puVar6 + 0x18) = puVar5;
  *(undefined **)(puVar6 + 0x20) = puVar4;
  uVar8 = *(ulong *)(puVar4 + 0x20);
  lVar13 = *(long *)(puVar4 + 0x28);
  _swift_getObjectType();
  pcVar14 = *(code **)(lVar13 + 0x10);
  _swift_retain_n(puVar4,3);
  _swift_retain_n(param_5,2);
  local_c0 = pcVar12;
  _swift_retain_n(pcVar12,2);
  _swift_retain_n(puVar5,2);
  uVar10 = uVar8;
  (*pcVar14)(uVar8,lVar13);
  if ((uVar10 & 1) == 0) {
    puVar7 = &DAT_100f20ed8;
    _swift_allocObject(&DAT_100f20ed8,0x28,7);
    *(undefined **)(puVar7 + 0x10) = puVar4;
    *(code **)(puVar7 + 0x18) = thunk_FUN_1006225d4;
    *(undefined **)(puVar7 + 0x20) = puVar6;
    pcVar12 = *(code **)(lVar13 + 0x18);
    _swift_retain(puVar4);
    _swift_retain(puVar6);
    (*pcVar12)(thunk_FUN_1008db360,puVar7,uVar8,lVar13);
    _swift_release(param_5);
    _swift_release(puVar7);
    _swift_release(puVar4);
    _swift_release_n(puVar5,2);
    _swift_release(puVar6);
    pcVar12 = local_c0;
  }
  else {
    _swift_beginAccess(puVar11,auStack_78,0,0);
    cVar1 = puVar4[0x18];
    if (cVar1 == -1) {
      _swift_beginAccess(local_d0,auStack_90,0x21,0);
      FUN_10064967c(thunk_FUN_1006225d4,puVar6);
      _swift_endAccess(auStack_90);
      pcVar12 = local_c0;
    }
    else {
      uVar9 = *puVar11;
      FUN_100308524(uVar9,cVar1);
      pcVar12 = local_c0;
      FUN_10099a394(param_5,local_c8,local_c0);
      FUN_100308538(uVar9,cVar1);
    }
    _swift_release(puVar6);
    _swift_release(param_5);
    _swift_release_n(puVar5,2);
    _swift_release(puVar4);
  }
  _swift_release(pcVar12);
  lVar3 = local_98;
  lVar2 = local_a0;
  lVar13 = local_a8;
  (**(code **)(local_a0 + 0x10))(local_a8,local_b8,local_98);
  uVar8 = (ulong)*(byte *)(lVar2 + 0x50);
  uVar10 = uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff);
  puVar5 = &DAT_100f20f00;
  _swift_allocObject(&DAT_100f20f00,uVar10 + local_b0,uVar8 | 7);
  *(long *)(puVar5 + 0x10) = lVar3;
  (**(code **)(lVar2 + 0x20))(puVar5 + uVar10,lVar13,lVar3);
  puVar6 = &DAT_100f20f28;
  _swift_allocObject(&DAT_100f20f28,0x28,7);
  *(long *)(puVar6 + 0x10) = lVar3;
  *(code **)(puVar6 + 0x18) = FUN_1008fa7e4;
  *(undefined **)(puVar6 + 0x20) = puVar5;
  pcVar14 = FUN_1008fa770;
  thunk_FUN_10064b138(FUN_1008fa770,puVar6,lVar3);
  _swift_release(pcVar12);
  _swift_release(param_5);
  _swift_release_n(puVar4,2);
  _swift_release(puVar6);
  return pcVar14;
}



/* Address: 0x10098e750 | FUN_10098e750 */

void FUN_10098e750(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  
  uVar9 = *param_3;
  puVar2 = param_1;
  FUN_100980638();
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
    _swift_allocObject(param_4,0x20,7);
    *(undefined8 **)(param_4 + 0x10) = param_1;
    *(undefined **)(param_4 + 0x18) = puVar3;
    pcVar10 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_1);
    _swift_errorRetain(puVar3);
    (*pcVar10)(param_5,param_4,uVar4,lVar1);
    _swift_release(param_4);
  }
  else {
    puVar6 = puVar3;
    thunk_FUN_1005de8f4(puVar3);
    FUN_1006486f8();
    FUN_100004550(puVar6,lVar7);
    _swift_bridgeObjectRelease(uVar8);
  }
  _swift_errorRelease(puVar3);
  FUN_10061cf14(2,0,uVar9,&PTR_PTR_100f217d0);
  return;
}


