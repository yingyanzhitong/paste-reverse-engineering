/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10088ffe4 | FUN_10088ffe4 */

undefined1  [16] FUN_10088ffe4(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  byte bVar1;
  uint uVar2;
  byte *unaff_x20;
  String SVar3;
  undefined1 auVar4 [16];
  String SVar5;
  byte local_41;
  undefined8 local_40;
  ulong uStack_38;
  
  bVar1 = *unaff_x20;
  uVar2 = (uint)bVar1;
  if (bVar1 < 4) {
    if (uVar2 - 2 < 2) {
      local_40 = 0;
      uStack_38 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x2c,param_2);
      SVar3.bridgeObject = (void *)0x8000000100db3e20;
      SVar3.str = (char *)0xd00000000000002a;
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      Swift::String::append(SVar3,SVar5);
      local_41 = bVar1;
      Swift::__print_unlocked
                (&local_41,&local_40,&DAT_100f09da8,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      *unaff_x20 = 6;
    }
    else {
      local_40 = 0;
      if (uVar2 == 0) {
        bVar1 = 2;
      }
      else {
        bVar1 = 3;
      }
      *unaff_x20 = bVar1;
      uStack_38 = 1;
    }
  }
  else {
    local_40 = 0;
    uStack_38 = (ulong)(uVar2 - 4 < 2);
  }
  auVar4._8_8_ = uStack_38;
  auVar4._0_8_ = local_40;
  return auVar4;
}



/* Address: 0x1008900d0 | FUN_1008900d0 */

undefined1  [16] FUN_1008900d0(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte *unaff_x20;
  undefined1 auVar5 [16];
  
  bVar1 = *unaff_x20;
  if (bVar1 < 3) {
    if (bVar1 != 1) goto LAB_100890134;
    bVar4 = 0;
    uVar2 = 0;
    uVar3 = 1;
  }
  else if (bVar1 < 5) {
    bVar4 = 2;
    if (bVar1 != 3) {
      bVar4 = 5;
    }
    uVar2 = 0;
    uVar3 = 1;
  }
  else {
    uVar2 = 0;
    uVar3 = 0;
    if (bVar1 != 5) goto LAB_100890154;
LAB_100890134:
    uVar3 = 0x8000000100db3ee0;
    uVar2 = 0xd000000000000017;
    bVar4 = 6;
  }
  *unaff_x20 = bVar4;
LAB_100890154:
  auVar5._8_8_ = uVar3;
  auVar5._0_8_ = uVar2;
  return auVar5;
}



/* Address: 0x100890158 | FUN_100890158 */

void FUN_100890158(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  undefined1 auStack_c0 [24];
  undefined1 auStack_a8 [66];
  undefined1 local_66;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  if ((*(byte *)(unaff_x20 + 0x30) & 0xfe) != 2) {
    _swift_beginAccess(unaff_x20 + 0x11,auStack_48,0,0);
    cVar1 = *(char *)(unaff_x20 + 0x11);
    if (cVar1 != '\x05') {
      _swift_beginAccess(unaff_x20 + 0x18,auStack_60,0,0);
      lVar3 = *(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20);
      if (*(long *)(unaff_x20 + 0x28) < *(long *)(unaff_x20 + 0x20)) {
        lVar3 = lVar3 + *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
      }
      if ((cVar1 == '\0') || (lVar3 != 0)) {
        FUN_1005e650c(param_2,auStack_a8);
        local_66 = 0;
        _swift_beginAccess(unaff_x20 + 0x18,auStack_c0,0x21,0);
        FUN_10087cf94(auStack_a8);
        _swift_endAccess(auStack_c0);
        FUN_10088209c(auStack_a8);
      }
      else {
        uVar2 = param_1;
        FUN_100890264(param_1,param_2);
        FUN_10089046c(param_1,uVar2,param_2,0);
        FUN_1008927d8(uVar2,param_2);
      }
    }
  }
  return;
}



/* Address: 0x100890264 | FUN_100890264 */

undefined1  [16] FUN_100890264(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long unaff_x20;
  long lVar10;
  undefined1 auVar11 [16];
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100fe90f8;
  puVar6 = &DAT_100c7f5d0;
  FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
  thunk_FUN_100885488();
  cVar2 = (char)(param_3 >> 0x38);
  if (cVar2 == '\0') {
    lVar10 = unaff_x20 + 0x11;
    puVar7 = auStack_78;
    _swift_beginAccess(lVar10,puVar7,0x21,0);
    FUN_10088ff10();
    _swift_endAccess(auStack_78);
  }
  else if (cVar2 == '\x01') {
    lVar10 = 0;
    puVar7 = (undefined1 *)(param_3 >> 0x38);
  }
  else {
    lVar10 = unaff_x20 + 0x11;
    puVar7 = auStack_78;
    _swift_beginAccess(lVar10,puVar7,1,0);
    FUN_1008900d0();
    cVar2 = *(char *)(unaff_x20 + 0x30);
    if (cVar2 == '\x01') {
      *(undefined1 *)(unaff_x20 + 0x30) = 2;
      _swift_beginAccess(unaff_x20 + 0x18,auStack_90,0x21,0);
      puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
      *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
      _swift_release(uVar5);
      *(undefined **)(unaff_x20 + 0x18) = puVar3;
      FUN_1008926b0(0,1,1);
      lVar8 = *(long *)(unaff_x20 + 0x18);
      uVar1 = *(ulong *)(lVar8 + 0x10);
      if (*(ulong *)(lVar8 + 0x18) >> 1 <= uVar1) {
        FUN_1008926b0(1 < *(ulong *)(lVar8 + 0x18),uVar1 + 1,1);
        lVar8 = *(long *)(unaff_x20 + 0x18);
      }
      *(ulong *)(lVar8 + 0x10) = uVar1 + 1;
      lVar9 = lVar8 + uVar1 * 0x48;
      *(undefined8 *)(lVar9 + 0x28) = 0;
      *(undefined8 *)(lVar9 + 0x20) = 0;
      *(undefined8 *)(lVar9 + 0x38) = 0;
      *(undefined8 *)(lVar9 + 0x30) = 0;
      *(undefined8 *)(lVar9 + 0x48) = 0;
      *(undefined8 *)(lVar9 + 0x40) = 0;
      *(undefined8 *)(lVar9 + 0x58) = 0;
      *(undefined8 *)(lVar9 + 0x50) = 0;
      *(undefined1 *)(lVar9 + 0x62) = 0xff;
      *(undefined2 *)(lVar9 + 0x60) = 0;
      *(long *)(unaff_x20 + 0x18) = lVar8;
      *(undefined8 *)(unaff_x20 + 0x20) = 0;
      *(undefined8 *)(unaff_x20 + 0x28) = 0;
      _swift_endAccess(auStack_90);
      cVar2 = *(char *)(unaff_x20 + 0x30);
    }
    if ((cVar2 == '\x02') && (*(char *)(unaff_x20 + 0x11) == '\x02')) {
      *(undefined1 *)(unaff_x20 + 0x30) = 3;
      FUN_100626d64(2,0);
    }
  }
  FUN_100626ce0(param_2);
  FUN_100877974(puVar4,puVar6,param_3,(undefined1 *)(param_3 >> 0x38));
  auVar11._8_8_ = puVar7;
  auVar11._0_8_ = lVar10;
  return auVar11;
}



/* Address: 0x10089046c | FUN_10089046c */

undefined8 FUN_10089046c(undefined8 *param_1,undefined8 param_2,long param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x20;
  code *pcVar10;
  undefined1 uStack_81;
  undefined *local_80;
  undefined1 auStack_78 [24];
  
  if (param_3 == 0) {
    if (param_4 != 0) {
      FUN_100894ffc();
      puVar2 = &DAT_100f09b58;
      uVar9 = 0;
      _swift_allocError(&DAT_100f09b58,param_1,0,0);
      *param_1 = 0xd00000000000006c;
      param_1[1] = 0x8000000100db3e50;
      param_1[2] = 0xd000000000000028;
      param_1[3] = 0x8000000100db3df0;
      param_1[4] = 0x245;
      uVar3 = *(ulong *)(param_4 + 0x20);
      lVar1 = *(long *)(param_4 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar6 = &DAT_100f0a010;
        _swift_allocObject(&DAT_100f0a010,0x20,7);
        *(long *)(puVar6 + 0x10) = param_4;
        *(undefined **)(puVar6 + 0x18) = puVar2;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_4);
        _swift_errorRetain(puVar2);
        (*pcVar10)(thunk_FUN_1008777d0,puVar6,uVar3,lVar1);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar2;
        FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar7);
        _swift_bridgeObjectRelease(uVar9);
      }
      _swift_errorRelease(puVar2);
    }
    FUN_100626d64(2,0);
  }
  else {
    if (param_3 == 1) {
      return 0;
    }
    FUN_100894ffc();
    puVar2 = &DAT_100f09b58;
    puVar8 = param_1;
    _swift_allocError(&DAT_100f09b58,param_1,0,0);
    *puVar8 = param_2;
    puVar8[1] = param_3;
    puVar8[2] = 0xd000000000000028;
    puVar8[3] = 0x8000000100db3df0;
    puVar8[4] = 0x23e;
    _swift_beginAccess(unaff_x20 + 0x11,auStack_78,1,0);
    if ((*(byte *)(unaff_x20 + 0x11) & 0xfe) == 2) {
      local_80 = puVar2;
      FUN_1006c6500(param_2,param_3);
      FUN_1006c6500(param_2,param_3);
      _swift_errorRetain(puVar2);
      puVar6 = &DAT_100fe9a00;
      FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
      puVar5 = &uStack_81;
      _swift_dynamicCast(puVar5,&local_80,puVar6,&DAT_100f0ace8,6);
      if ((int)puVar5 != 0) {
        *(undefined1 *)(unaff_x20 + 0x11) = 0;
      }
    }
    else {
      FUN_1006c6500(param_2,param_3);
      _swift_bridgeObjectRetain(param_3);
    }
    FUN_100626c9c(puVar2);
    _swift_errorRelease(puVar2);
    if (param_4 == 0) {
      FUN_1008927d8(param_2,param_3);
    }
    else {
      puVar2 = &DAT_100f09b58;
      uVar9 = 0;
      _swift_allocError(&DAT_100f09b58,param_1,0,0);
      *param_1 = param_2;
      param_1[1] = param_3;
      param_1[2] = 0xd000000000000028;
      param_1[3] = 0x8000000100db3df0;
      param_1[4] = 0x23e;
      uVar3 = *(ulong *)(param_4 + 0x20);
      lVar1 = *(long *)(param_4 + 0x28);
      _swift_getObjectType();
      uVar4 = uVar3;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar4 & 1) == 0) {
        puVar6 = &DAT_100f0a038;
        _swift_allocObject(&DAT_100f0a038,0x20,7);
        *(long *)(puVar6 + 0x10) = param_4;
        *(undefined **)(puVar6 + 0x18) = puVar2;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_4);
        _swift_errorRetain(puVar2);
        (*pcVar10)(thunk_FUN_1008777d0,puVar6,uVar3,lVar1);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar2;
        FUN_1005de8f4(puVar2);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar7);
        _swift_bridgeObjectRelease(uVar9);
      }
      _swift_errorRelease(puVar2);
    }
  }
  return 1;
}



/* Address: 0x1008907dc | FUN_1008907dc */

void FUN_1008907dc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  undefined8 uVar5;
  char *pcVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  undefined1 auStack_e8 [24];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [31];
  char local_51;
  undefined1 auStack_50 [32];
  
  uVar5 = param_2;
  FUN_10000cbfc(param_2,auStack_50);
  puVar3 = PTR___type_metadata_for_Any_100eae0c0;
  iVar4 = (int)uVar5;
  _swift_dynamicCast();
  if (iVar4 == 0) {
    pcVar6 = &local_51;
    _swift_dynamicCast(pcVar6,auStack_50,puVar3 + 8,&DAT_100eeb880,0);
    if (((int)pcVar6 != 0 && local_51 != '\x01') &&
       (_swift_beginAccess(unaff_x20 + 0x11,auStack_70,0,0), *(char *)(unaff_x20 + 0x11) == '\0')) {
      _swift_beginAccess(unaff_x20 + 0x18,auStack_88,0,0);
      lVar8 = *(long *)(unaff_x20 + 0x28) - *(long *)(unaff_x20 + 0x20);
      if (*(long *)(unaff_x20 + 0x28) < *(long *)(unaff_x20 + 0x20)) {
        lVar8 = lVar8 + *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
      }
      if (0 < lVar8) {
        local_90 = 0;
        uStack_a8 = 0;
        local_b0 = 0;
        uStack_98 = 0;
        uStack_a0 = 0;
        uStack_c8 = 0;
        local_d0 = 0;
        uStack_b8 = 0;
        uStack_c0 = 0;
        local_8e = 2;
        _swift_beginAccess(unaff_x20 + 0x18,auStack_e8,0x21,0);
        FUN_10087cf94(&local_d0);
        _swift_endAccess(auStack_e8);
        FUN_10088209c(&local_d0);
        goto LAB_100890a84;
      }
    }
    FUN_100626b98(param_2);
  }
  else {
    _swift_beginAccess(unaff_x20 + 0x11,&local_d0,0,0);
    uVar2 = 1 << (ulong)(*(byte *)(unaff_x20 + 0x11) & 0x1f);
    if ((uVar2 & 0x1a) == 0) {
      if ((uVar2 & 100) == 0) {
        *(undefined1 *)(unaff_x20 + 0x30) = 2;
        _swift_beginAccess(unaff_x20 + 0x18,auStack_70,0x21,0);
        puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
        _swift_release(uVar5);
        *(undefined **)(unaff_x20 + 0x18) = puVar3;
        FUN_1008926b0(0,1,1);
        lVar8 = *(long *)(unaff_x20 + 0x18);
        uVar1 = *(ulong *)(lVar8 + 0x10);
        if (*(ulong *)(lVar8 + 0x18) >> 1 <= uVar1) {
          FUN_1008926b0(1 < *(ulong *)(lVar8 + 0x18),uVar1 + 1,1);
          lVar8 = *(long *)(unaff_x20 + 0x18);
        }
        *(ulong *)(lVar8 + 0x10) = uVar1 + 1;
        lVar7 = lVar8 + uVar1 * 0x48;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x62) = 0xff;
        *(undefined2 *)(lVar7 + 0x60) = 0;
        *(long *)(unaff_x20 + 0x18) = lVar8;
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
        _swift_endAccess(auStack_70);
      }
      else {
        *(undefined1 *)(unaff_x20 + 0x30) = 3;
        _swift_beginAccess(unaff_x20 + 0x18,auStack_70,0x21,0);
        puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
        uVar5 = *(undefined8 *)(unaff_x20 + 0x18);
        *(undefined **)(unaff_x20 + 0x18) = PTR___swiftEmptyArrayStorage_100eae0d8;
        _swift_release(uVar5);
        *(undefined **)(unaff_x20 + 0x18) = puVar3;
        FUN_1008926b0(0,1,1);
        lVar8 = *(long *)(unaff_x20 + 0x18);
        uVar1 = *(ulong *)(lVar8 + 0x10);
        if (*(ulong *)(lVar8 + 0x18) >> 1 <= uVar1) {
          FUN_1008926b0(1 < *(ulong *)(lVar8 + 0x18),uVar1 + 1,1);
          lVar8 = *(long *)(unaff_x20 + 0x18);
        }
        *(ulong *)(lVar8 + 0x10) = uVar1 + 1;
        lVar7 = lVar8 + uVar1 * 0x48;
        *(undefined8 *)(lVar7 + 0x28) = 0;
        *(undefined8 *)(lVar7 + 0x20) = 0;
        *(undefined8 *)(lVar7 + 0x38) = 0;
        *(undefined8 *)(lVar7 + 0x30) = 0;
        *(undefined8 *)(lVar7 + 0x48) = 0;
        *(undefined8 *)(lVar7 + 0x40) = 0;
        *(undefined8 *)(lVar7 + 0x58) = 0;
        *(undefined8 *)(lVar7 + 0x50) = 0;
        *(undefined1 *)(lVar7 + 0x62) = 0xff;
        *(undefined2 *)(lVar7 + 0x60) = 0;
        *(long *)(unaff_x20 + 0x18) = lVar8;
        *(undefined8 *)(unaff_x20 + 0x20) = 0;
        *(undefined8 *)(unaff_x20 + 0x28) = 0;
        _swift_endAccess(auStack_70);
        FUN_100626d64(2,0);
      }
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x30) = 1;
    }
  }
LAB_100890a84:
  FUN_100004594(auStack_50);
  return;
}



/* Address: 0x100890af0 | FUN_100890af0 */

void FUN_100890af0(undefined8 param_1,undefined8 param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined1 auStack_b8 [24];
  undefined8 local_a0 [8];
  undefined1 local_5e;
  undefined8 local_58 [3];
  
  local_a0[0] = param_2;
  _swift_errorRetain(param_2);
  puVar2 = &DAT_100fe9a00;
  FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
  puVar3 = local_58;
  _swift_dynamicCast(puVar3,local_a0,puVar2,&DAT_100f0ace8,6);
  if ((int)puVar3 == 0) {
    _swift_beginAccess(unaff_x20 + 0x11,local_a0,1,0);
    if ((*(byte *)(unaff_x20 + 0x11) & 0xfe) != 2) goto LAB_100890c38;
    local_58[0] = param_2;
    _swift_errorRetain(param_2);
    puVar3 = local_58;
  }
  else {
    uVar1 = (undefined1)local_58[0];
    _swift_beginAccess(unaff_x20 + 0x11,local_58,1,0);
    if (1 < *(byte *)(unaff_x20 + 0x11) - 2) {
      if (*(byte *)(unaff_x20 + 0x11) == 0) {
        local_a0[0] = CONCAT71(local_a0[0]._1_7_,uVar1);
        local_5e = 1;
        _swift_beginAccess(unaff_x20 + 0x18,auStack_b8,0x21,0);
        FUN_10087cf94(local_a0);
        _swift_endAccess(auStack_b8);
        FUN_10088209c(local_a0);
        return;
      }
      goto LAB_100890c38;
    }
    local_a0[0] = param_2;
    _swift_errorRetain(param_2);
    puVar3 = local_a0;
  }
  puVar4 = auStack_b8;
  _swift_dynamicCast(puVar4,puVar3,puVar2,&DAT_100f0ace8,6);
  if ((int)puVar4 != 0) {
    *(undefined1 *)(unaff_x20 + 0x11) = 0;
  }
LAB_100890c38:
  FUN_100626c9c(param_2);
  return;
}



/* Address: 0x100890c5c | FUN_100890c5c */

void FUN_100890c5c(ulong param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  byte bVar7;
  char cVar8;
  bool bVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  UTF8View UVar13;
  ulong uVar14;
  undefined8 uVar15;
  undefined *puVar16;
  undefined8 uVar17;
  __int64 _Var18;
  undefined *puVar19;
  UnsafeBufferPointer<__int8> UVar20;
  ulong uVar21;
  undefined **ppuVar22;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  uint uVar29;
  long unaff_x20;
  long lVar30;
  ulong uVar31;
  code *pcVar32;
  char local_e9 [9];
  undefined *local_e0;
  undefined *puStack_d8;
  uint local_d0;
  undefined4 uStack_cc;
  undefined *local_c8;
  undefined1 local_9f;
  undefined *local_98;
  byte local_90;
  char local_80 [8];
  undefined8 uStack_78;
  
  puVar10 = &DAT_100fe95b0;
  puVar19 = &DAT_100c80420;
  lVar25 = param_3;
  FUN_1000f7830();
  puVar11 = puVar10;
  thunk_FUN_100885474();
  cVar8 = (char)((ulong)lVar25 >> 0x38);
  if (cVar8 != '\0') {
    if (cVar8 == '\x01') {
      FUN_100878fe8();
LAB_10089118c:
      FUN_100626ebc(param_2,param_3);
      return;
    }
    FUN_100878fe8();
    bVar7 = *(byte *)(unaff_x20 + 0x30);
    if (bVar7 < 2) {
      if ((bVar7 != 0) &&
         (_swift_beginAccess(unaff_x20 + 0x11,&local_98,0,0), *(char *)(unaff_x20 + 0x11) == '\0'))
      {
LAB_100890fd8:
        lVar30 = *(long *)(param_1 + 0x20);
        lVar25 = *(long *)(lVar30 + 0x38);
        uVar26 = *(undefined8 *)(lVar30 + 0x38);
        uVar31 = *(ulong *)(lVar30 + 0x30);
        uVar12 = uVar31;
        _swift_getObjectType();
        pcVar32 = *(code **)(lVar25 + 0x10);
        _swift_unknownObjectRetain(uVar31);
        (*pcVar32)(uVar12,lVar25);
        if ((uVar12 & 1) == 0) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x100891774);
          (*pcVar32)();
        }
        *(undefined1 *)(unaff_x20 + 0x30) = 3;
        uVar12 = *(ulong *)(lVar30 + 0x30);
        uVar24 = uVar12;
        FUN_100893ea8(uVar12,*(undefined8 *)(lVar30 + 0x38),PTR___type_metadata_for____100eae0c8 + 8
                     );
        _swift_retain(param_1);
        _swift_unknownObjectRetain(uVar12);
        FUN_100626ebc(param_2,uVar24);
        puVar10 = &DAT_100f099b0;
        _swift_allocObject(&DAT_100f099b0,0x28,7);
        *(undefined8 *)(puVar10 + 0x18) = uVar26;
        *(ulong *)(puVar10 + 0x10) = uVar31;
        *(ulong *)(puVar10 + 0x20) = param_1;
        _swift_unknownObjectRetain(uVar31);
        _swift_retain(param_1);
        uVar12 = uVar24;
        FUN_1008942fc(uVar24,FUN_100893f3c,puVar10);
        _swift_release(uVar24);
        _swift_release(puVar10);
        if (param_3 == 0) {
          _swift_release(param_1);
          _swift_unknownObjectRelease(uVar31);
        }
        else {
          puVar10 = &DAT_100f099d8;
          _swift_allocObject(&DAT_100f099d8,0x28,7);
          *(code **)(puVar10 + 0x10) = FUN_100894590;
          *(long *)(puVar10 + 0x18) = param_3;
          *(ulong *)(puVar10 + 0x20) = uVar12;
          uVar24 = *(ulong *)(uVar12 + 0x20);
          lVar25 = *(long *)(uVar12 + 0x28);
          _swift_getObjectType();
          pcVar32 = *(code **)(lVar25 + 0x10);
          _swift_retain_n(param_3,5);
          _swift_retain_n(uVar12,2);
          uVar14 = uVar24;
          (*pcVar32)(uVar24,lVar25);
          if ((uVar14 & 1) == 0) {
            _swift_release(param_3);
            puVar19 = &DAT_100f09a00;
            _swift_allocObject(&DAT_100f09a00,0x28,7);
            *(ulong *)(puVar19 + 0x10) = uVar12;
            *(code **)(puVar19 + 0x18) = FUN_1006225d4;
            *(undefined **)(puVar19 + 0x20) = puVar10;
            pcVar32 = *(code **)(lVar25 + 0x18);
            _swift_retain(uVar12);
            _swift_retain(puVar10);
            (*pcVar32)(FUN_100653138,puVar19,uVar24,lVar25);
            _swift_unknownObjectRelease(uVar31);
            _swift_release(puVar19);
            _swift_release_n(uVar12,2);
            _swift_release(param_3);
            _swift_release(puVar10);
          }
          else {
            _swift_beginAccess(uVar12 + 0x10,local_80,0,0);
            cVar8 = *(char *)(uVar12 + 0x18);
            if (cVar8 == -1) {
              _swift_release(param_3);
              _swift_beginAccess(uVar12 + 0x30,&local_e0,0x21,0);
              FUN_10064967c(FUN_1006225d4,puVar10);
              _swift_endAccess(&local_e0);
            }
            else {
              uVar26 = *(undefined8 *)(uVar12 + 0x10);
              FUN_100308524(uVar26,cVar8);
              FUN_100892a8c(uVar26,cVar8,param_3);
              _swift_release(param_3);
              FUN_100308538(uVar26,cVar8);
            }
            FUN_1006486f8(0,0,0);
            FUN_100004550(0,0);
            _swift_unknownObjectRelease(uVar31);
            _swift_release_n(uVar12,2);
            _swift_release(param_3);
            _swift_release(puVar10);
            _swift_bridgeObjectRelease(0);
          }
          _swift_release_n(param_3,2);
          uVar12 = param_1;
        }
        _swift_release(uVar12);
        goto LAB_100891394;
      }
    }
    else if (bVar7 == 2) goto LAB_100890fd8;
    FUN_100626ebc(param_2,param_3);
LAB_100891394:
    lVar25 = unaff_x20 + 0x11;
    ppuVar22 = &local_e0;
    _swift_beginAccess(lVar25,ppuVar22,0x21,0);
    FUN_10088ffe4();
    _swift_endAccess(&local_e0);
    uVar12 = param_1;
    FUN_10089046c(param_1,lVar25,ppuVar22,param_3);
    FUN_1008927d8(lVar25,ppuVar22);
    if ((uVar12 & 1) != 0) {
      return;
    }
    FUN_100891808(param_1);
    if (*(char *)(unaff_x20 + 0x12) != '\x01') {
      return;
    }
    if (*(char *)(unaff_x20 + 0x11) == '\0') {
      return;
    }
    if ((*(byte *)(unaff_x20 + 0x30) & 0xfe) == 2) {
      return;
    }
    *(undefined1 *)(unaff_x20 + 0x12) = 0;
    FUN_100626d58();
    return;
  }
  local_90 = (byte)lVar25;
  local_98 = puVar19;
  if (*(char *)(unaff_x20 + 0x30) == '\0') {
    _swift_bridgeObjectRelease(puVar19);
    _swift_release(puVar11);
    goto LAB_10089118c;
  }
  uVar12 = (ulong)*(uint *)(puVar11 + 0x28);
  uVar29 = (uint)lVar25;
  FUN_10089ee6c();
  if ((uVar12 & 1) == 0) goto LAB_100891214;
  puStack_d8 = (undefined *)0x6e6f;
  local_e0 = (undefined *)0x697463656e6e6f63;
  uStack_78 = 0x6e6f;
  builtin_strncpy(local_80,"connecti",8);
  FUN_10087b2e8(local_e9,local_80,10,&local_e0,10);
  if (local_e9[0] == '\x01') {
    local_90 = 2;
  }
  puStack_d8 = (undefined *)0x6e6f;
  local_e0 = (undefined *)0x697463656e6e6f63;
  uStack_78 = 0x6e6f;
  builtin_strncpy(local_80,"connecti",8);
  FUN_10087b2e8(local_e9,local_80,10,&local_e0,10);
  if (local_e9[0] == '\x01') {
    local_90 = 2;
  }
  puVar23 = (ulong *)(puVar19 + 0x10);
  uVar12 = *puVar23;
  if (uVar12 == 0) {
    uVar31 = 0;
    uVar12 = 0;
  }
  else {
    lVar25 = 0;
    uVar31 = 0;
    do {
                    /* WARNING: Load size is inaccurate */
      UVar13.unknown = puVar19[lVar25 + 0x20];
      uVar24 = *(ulong *)(puVar19 + lVar25 + 0x28);
      if ((uVar24 >> 0x3c & 1) == 0) {
        uVar21 = (ulong)UVar13.unknown & 0xffffffffffff;
        uVar14 = uVar21;
        if ((uVar24 & 0x2000000000000000) != 0) {
          uVar14 = uVar24 >> 0x38 & 0xf;
        }
        if (uVar14 == 10) {
          if ((uVar24 >> 0x3d & 1) == 0) {
            if (((ulong)UVar13.unknown >> 0x3c & 1) == 0) {
              UVar20 = Swift::_StringObject::get_sharedUTF8(UVar13.unknown);
              uVar21 = uVar24;
            }
            else {
              UVar20.unknown = (undefined *)((uVar24 & 0xfffffffffffffff) + 0x20);
            }
            if ((((((uVar21 == 10) && ((*UVar20.unknown & 0xdf) == 0x43)) &&
                  ((UVar20.unknown[1] & 0xdf) == 0x4f)) &&
                 (((UVar20.unknown[2] & 0xdf) == 0x4e && ((UVar20.unknown[3] & 0xdf) == 0x4e)))) &&
                ((((UVar20.unknown[4] & 0xdf) == 0x45 &&
                  (((UVar20.unknown[5] & 0xdf) == 0x43 && ((UVar20.unknown[6] & 0xdf) == 0x54)))) &&
                 ((UVar20.unknown[7] & 0xdf) == 0x49)))) &&
               (((UVar20.unknown[8] & 0xdf) == 0x4f && ((UVar20.unknown[9] & 0xdf) == 0x4e)))) {
LAB_100891448:
              uVar12 = uVar31 + 1;
              uVar24 = *puVar23;
              if (uVar24 - 1 != uVar31) goto LAB_1008914d8;
              goto LAB_10089145c;
            }
          }
          else if ((uVar24 & 0xf0000000000dfdf) == 0xa00000000004e4f &&
                   ((ulong)UVar13.unknown & 0xdfdfdfdfdfdfdfdf) == 0x495443454e4e4f43)
          goto LAB_100891448;
        }
      }
      else {
        _Var18 = Swift::String::UTF8View::_foreignCount(UVar13);
        if ((_Var18 == 10) &&
           (FUN_10089b5c0(UVar13.unknown,uVar24,0x697463656e6e6f63,0xea00000000006e6f),
           ((ulong)UVar13.unknown & 1) != 0)) goto LAB_100891448;
      }
      uVar31 = uVar31 + 1;
      lVar25 = lVar25 + 0x20;
    } while (uVar12 != uVar31);
    uVar31 = *puVar23;
    uVar12 = uVar31;
  }
  goto LAB_1008911d0;
LAB_1008914d8:
  do {
    if (uVar24 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar32 = (code *)SoftwareBreakpoint(1,0x10089176c);
      (*pcVar32)();
    }
                    /* WARNING: Load size is inaccurate */
    UVar13.unknown = puVar19[lVar25 + 0x40];
    uVar24 = *(ulong *)(puVar19 + lVar25 + 0x48);
    if ((uVar24 >> 0x3c & 1) == 0) {
      uVar21 = (ulong)UVar13.unknown & 0xffffffffffff;
      uVar14 = uVar21;
      if ((uVar24 & 0x2000000000000000) != 0) {
        uVar14 = uVar24 >> 0x38 & 0xf;
      }
      if (uVar14 != 10) goto LAB_1008915d4;
      if ((uVar24 >> 0x3d & 1) == 0) {
        if (((ulong)UVar13.unknown >> 0x3c & 1) == 0) {
          UVar20 = Swift::_StringObject::get_sharedUTF8(UVar13.unknown);
          uVar21 = uVar24;
        }
        else {
          UVar20.unknown = (undefined *)((uVar24 & 0xfffffffffffffff) + 0x20);
        }
        if (((((uVar21 != 10) || ((*UVar20.unknown & 0xdf) != 0x43)) ||
             ((UVar20.unknown[1] & 0xdf) != 0x4f)) ||
            ((((UVar20.unknown[2] & 0xdf) != 0x4e || ((UVar20.unknown[3] & 0xdf) != 0x4e)) ||
             (((UVar20.unknown[4] & 0xdf) != 0x45 ||
              (((UVar20.unknown[5] & 0xdf) != 0x43 || ((UVar20.unknown[6] & 0xdf) != 0x54)))))))) ||
           (((UVar20.unknown[7] & 0xdf) != 0x49 ||
            (((UVar20.unknown[8] & 0xdf) != 0x4f || ((UVar20.unknown[9] & 0xdf) != 0x4e))))))
        goto LAB_1008915d4;
      }
      else if ((uVar24 & 0xf0000000000dfdf) != 0xa00000000004e4f ||
               ((ulong)UVar13.unknown & 0xdfdfdfdfdfdfdfdf) != 0x495443454e4e4f43)
      goto LAB_1008915d4;
    }
    else {
      _Var18 = Swift::String::UTF8View::_foreignCount(UVar13);
      if ((_Var18 == 10) &&
         (FUN_10089b5c0(UVar13.unknown,uVar24,0x697463656e6e6f63,0xea00000000006e6f),
         ((ulong)UVar13.unknown & 1) != 0)) goto LAB_1008914c0;
LAB_1008915d4:
      if (uVar12 != uVar31) {
        if ((long)uVar31 < 0) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x100891778);
          (*pcVar32)();
        }
        if (*puVar23 <= uVar31) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x10089177c);
          (*pcVar32)();
        }
        if ((long)*puVar23 <= (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x100891780);
          (*pcVar32)();
        }
        puVar1 = (undefined8 *)(puVar19 + uVar31 * 0x20 + 0x20);
        uVar26 = *puVar1;
        uVar3 = puVar1[1];
        uVar2 = puVar1[2];
        uVar4 = puVar1[3];
        uVar15 = *(undefined8 *)(puVar19 + lVar25 + 0x40);
        uVar5 = *(undefined8 *)(puVar19 + lVar25 + 0x48);
        uVar27 = *(undefined8 *)(puVar19 + lVar25 + 0x50);
        uVar6 = *(undefined8 *)(puVar19 + lVar25 + 0x58);
        _swift_bridgeObjectRetain(uVar3);
        _swift_bridgeObjectRetain(uVar4);
        _swift_bridgeObjectRetain(uVar5);
        _swift_bridgeObjectRetain(uVar6);
        puVar16 = puVar19;
        _swift_isUniquelyReferenced_nonNull_native();
        if (((ulong)puVar16 & 1) == 0) {
          FUN_1008a2334();
        }
        uVar28 = *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x28);
        uVar17 = *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x38);
        *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x20) = uVar15;
        *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x28) = uVar5;
        *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x30) = uVar27;
        *(undefined8 *)(puVar19 + uVar31 * 0x20 + 0x38) = uVar6;
        _swift_bridgeObjectRelease(uVar17);
        _swift_bridgeObjectRelease(uVar28);
        if (*(long *)(puVar19 + 0x10) <= (long)uVar12) {
                    /* WARNING: Does not return */
          pcVar32 = (code *)SoftwareBreakpoint(1,0x100891784);
          (*pcVar32)();
        }
        uVar27 = *(undefined8 *)(puVar19 + lVar25 + 0x48);
        uVar15 = *(undefined8 *)(puVar19 + lVar25 + 0x58);
        *(undefined8 *)(puVar19 + lVar25 + 0x40) = uVar26;
        *(undefined8 *)(puVar19 + lVar25 + 0x48) = uVar3;
        *(undefined8 *)(puVar19 + lVar25 + 0x50) = uVar2;
        *(undefined8 *)(puVar19 + lVar25 + 0x58) = uVar4;
        _swift_bridgeObjectRelease(uVar15);
        _swift_bridgeObjectRelease(uVar27);
        local_98 = puVar19;
      }
      bVar9 = SCARRY8(uVar31,1);
      uVar31 = uVar31 + 1;
      if (bVar9) {
                    /* WARNING: Does not return */
        pcVar32 = (code *)SoftwareBreakpoint(1,0x100891770);
        (*pcVar32)();
      }
    }
LAB_1008914c0:
    uVar12 = uVar12 + 1;
    puVar23 = (ulong *)(puVar19 + 0x10);
    uVar24 = *puVar23;
    lVar25 = lVar25 + 0x20;
  } while (uVar12 != uVar24);
LAB_10089145c:
  if ((long)uVar12 < (long)uVar31) {
                    /* WARNING: Does not return */
    pcVar32 = (code *)SoftwareBreakpoint(1,0x10089146c);
    (*pcVar32)();
  }
LAB_1008911d0:
  FUN_1008a3b08(uVar31,uVar12);
  FUN_10089f74c(0x697463656e6e6f63,0xea00000000006e6f,0x65736f6c63,&DAT_e500000000000000);
  uVar29 = (uint)local_90;
  puVar19 = local_98;
LAB_100891214:
  local_d0 = uVar29 & 0xff;
  uStack_cc = 0;
  local_9f = 2;
  local_e0 = puVar11;
  puStack_d8 = puVar19;
  local_c8 = puVar10;
  _swift_retain(puVar11);
  _swift_bridgeObjectRetain(puVar19);
  FUN_100626ebc(&local_e0,param_3);
  FUN_1005e70f4(&local_e0);
  _swift_bridgeObjectRelease(puVar19);
  _swift_release(puVar11);
  return;
}



/* Address: 0x100891784 | FUN_100891784 */

void FUN_100891784(ulong param_1,long param_2)

{
  code *pcVar1;
  undefined8 uVar2;
  
  _swift_getObjectType();
  (**(code **)(param_2 + 0x10))();
  if ((param_1 & 1) != 0) {
    uVar2 = 0;
    FUN_100631530(0);
    FUN_100622874(2,"NIOHTTP1/HTTPServerPipelineHandler.swift",0x28,2,0x1be,uVar2,&PTR_PTR_100eed6f0
                 );
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100891808);
  (*pcVar1)();
}



/* Address: 0x100891808 | FUN_100891808 */

void FUN_100891808(undefined8 *param_1)

{
  ulong uVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  undefined1 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined **ppuVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  byte bVar26;
  byte bVar27;
  byte bVar28;
  byte bVar29;
  byte bVar30;
  undefined1 auVar31 [16];
  undefined1 uStack_199;
  undefined *local_198;
  undefined *local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined *local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined *local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *puStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined7 uStack_108;
  undefined1 uStack_101;
  undefined2 uStack_100;
  byte bStack_fe;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  byte bStack_b8;
  byte bStack_b7;
  byte bStack_b6;
  byte bStack_b5;
  byte bStack_b4;
  byte bStack_b3;
  byte bStack_b2;
  undefined4 local_b1;
  undefined1 auStack_a0 [24];
  undefined1 auStack_88 [40];
  
  _swift_beginAccess(unaff_x20 + 0x11,auStack_88,1,0);
  _swift_beginAccess(unaff_x20 + 0x18,auStack_a0,0,0);
  if (*(char *)(unaff_x20 + 0x11) != '\0') {
    bVar3 = false;
    do {
      uVar1 = *(ulong *)(unaff_x20 + 0x20);
      uVar6 = *(ulong *)(unaff_x20 + 0x28);
      if (uVar6 == uVar1) break;
      if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d54);
        (*pcVar5)();
      }
      if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d58);
        (*pcVar5)();
      }
      uVar14 = *(ulong *)(unaff_x20 + 0x18);
      if (*(ulong *)(uVar14 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d5c);
        (*pcVar5)();
      }
      lVar13 = uVar14 + uVar1 * 0x48;
      FUN_1000f8cac(lVar13 + 0x20,&local_140,&DAT_100fe90d0,&DAT_100c7f500);
      if (0xfe < bStack_fe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d6c);
        (*pcVar5)();
      }
      uStack_c8 = uStack_118;
      local_d0 = uStack_120;
      bStack_b8 = (byte)uStack_108;
      bStack_b7 = (byte)((uint7)uStack_108 >> 8);
      bStack_b6 = (byte)((uint7)uStack_108 >> 0x10);
      bStack_b5 = (byte)((uint7)uStack_108 >> 0x18);
      bStack_b4 = (byte)((uint7)uStack_108 >> 0x20);
      bStack_b3 = (byte)((uint7)uStack_108 >> 0x28);
      bStack_b2 = (byte)((uint7)uStack_108 >> 0x30);
      uStack_c0 = local_110;
      local_b1 = CONCAT13(bStack_fe,CONCAT21(uStack_100,uStack_101));
      uStack_e8 = uStack_138;
      local_f0 = local_140;
      local_d8 = puStack_128;
      uStack_e0 = local_130;
      _swift_beginAccess(unaff_x20 + 0x18,&local_190,0x21,0);
      FUN_1000f8cac(lVar13 + 0x20,&local_140,&DAT_100fe90d0,&DAT_100c7f500);
      if (0xfe < bStack_fe) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d68);
        (*pcVar5)();
      }
      FUN_1000fb4c4(&local_140,&DAT_100fe90d0,&DAT_100c7f500);
      lVar13 = uVar6 - uVar1;
      if ((long)uVar6 < (long)uVar1) {
        lVar13 = lVar13 + *(long *)(uVar14 + 0x10);
      }
      if (lVar13 < 1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d60);
        (*pcVar5)();
      }
      uVar6 = uVar14;
      _swift_isUniquelyReferenced_nonNull_native();
      *(ulong *)(unaff_x20 + 0x18) = uVar14;
      if ((uVar6 & 1) == 0) {
        FUN_100898718();
      }
      uStack_108 = 0;
      uStack_101 = 0;
      local_110 = 0;
      puStack_128 = (undefined *)0x0;
      local_130 = 0;
      uStack_118 = 0;
      uStack_120 = 0;
      uStack_138 = 0;
      local_140 = (undefined *)0x0;
      bStack_fe = 0xff;
      uStack_100 = 0;
      *(ulong *)(unaff_x20 + 0x18) = uVar14;
      if (*(ulong *)(uVar14 + 0x10) <= uVar1) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100891d64);
        (*pcVar5)();
      }
      FUN_100894eec(&local_140,uVar14 + uVar1 * 0x48 + 0x20);
      *(ulong *)(unaff_x20 + 0x18) = uVar14;
      *(ulong *)(unaff_x20 + 0x20) = *(long *)(uVar14 + 0x10) + 0x1ffffffffU & uVar1 + 1;
      _swift_endAccess(&local_190);
      ppuVar7 = &local_f0;
      FUN_100882060(ppuVar7,&local_140);
      if (bStack_fe == 0) {
        uStack_158 = CONCAT17(uStack_101,uStack_108);
        uStack_168 = uStack_118;
        local_170 = uStack_120;
        uStack_160 = local_110;
        local_150 = uStack_100;
        uStack_188 = uStack_138;
        local_190 = local_140;
        local_178 = puStack_128;
        uStack_180 = local_130;
        ppuVar7 = &local_190;
        puVar8 = param_1;
        FUN_100890264();
        if (ppuVar7 == (undefined **)0x0) {
          FUN_100626d64(2);
        }
        else if (ppuVar7 == (undefined **)&DAT_00000001) {
          bVar3 = true;
        }
        else {
          puVar9 = puVar8;
          FUN_100894ffc();
          puVar10 = &DAT_100f09b58;
          _swift_allocError(&DAT_100f09b58,puVar9,0,0);
          *puVar9 = puVar8;
          puVar9[1] = ppuVar7;
          puVar9[2] = 0xd000000000000028;
          puVar9[3] = 0x8000000100db3df0;
          puVar9[4] = 0x23e;
          if ((*(byte *)(unaff_x20 + 0x11) & 0xfe) == 2) {
            local_198 = puVar10;
            FUN_1006c6500(puVar8,ppuVar7);
            FUN_1006c6500(puVar8,ppuVar7);
            _swift_errorRetain(puVar10);
            puVar11 = &DAT_100fe9a00;
            FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
            puVar12 = &uStack_199;
            _swift_dynamicCast(puVar12,&local_198,puVar11,&DAT_100f0ace8,6);
            if ((int)puVar12 != 0) {
              *(undefined1 *)(unaff_x20 + 0x11) = 0;
            }
          }
          else {
            FUN_1006c6500(puVar8,ppuVar7);
            _swift_bridgeObjectRetain(ppuVar7);
          }
          FUN_100626c9c(puVar10);
          _swift_errorRelease(puVar10);
          FUN_1008927d8(puVar8,ppuVar7);
          FUN_1008927d8(puVar8,ppuVar7);
        }
        FUN_1005e70f4(&local_190);
        FUN_10088209c(&local_f0);
      }
      else if (bStack_fe == 1) {
        uVar4 = local_140._0_1_;
        FUN_100881fac();
        puVar10 = &DAT_100f0ace8;
        _swift_allocError(&DAT_100f0ace8,ppuVar7,0,0);
        *(undefined1 *)ppuVar7 = uVar4;
        if ((*(byte *)(unaff_x20 + 0x11) & 0xfe) == 2) {
          local_190 = puVar10;
          _swift_errorRetain(puVar10);
          puVar11 = &DAT_100fe9a00;
          FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
          ppuVar7 = &local_198;
          _swift_dynamicCast(ppuVar7,&local_190,puVar11,&DAT_100f0ace8,6);
          if ((int)ppuVar7 != 0) {
            *(undefined1 *)(unaff_x20 + 0x11) = 0;
          }
        }
        FUN_100626c9c(puVar10);
        FUN_10088209c(&local_f0);
        _swift_errorRelease(puVar10);
      }
      else {
        *(undefined1 *)(unaff_x20 + 0x12) = 0;
        local_178 = &DAT_100eeb880;
        local_190 = (undefined *)((ulong)local_190 & 0xffffffffffffff00);
        FUN_100626b98(&local_190);
        FUN_10088209c(&local_f0);
        FUN_100004594(&local_190);
      }
    } while (*(char *)(unaff_x20 + 0x11) != '\0');
    if (bVar3) {
      FUN_100626d4c();
    }
  }
  _swift_beginAccess(unaff_x20 + 0x18,&local_140,0,0);
  FUN_10087e694(&local_f0,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28));
  if (local_b1._1_3_ < 0xff0000) {
    if ((local_b1._1_3_ & 0xff0000) == 0x20000) {
      bVar15 = (byte)local_f0 | (byte)local_d0 | (byte)uStack_e0 | (byte)uStack_c0;
      bVar16 = (byte)((ulong)local_f0 >> 8) | (byte)((ulong)local_d0 >> 8) |
               (byte)((ulong)uStack_e0 >> 8) | uStack_c0._1_1_;
      bVar17 = (byte)((ulong)local_f0 >> 0x10) | (byte)((ulong)local_d0 >> 0x10) |
               (byte)((ulong)uStack_e0 >> 0x10) | uStack_c0._2_1_;
      bVar18 = (byte)((ulong)local_f0 >> 0x18) | (byte)((ulong)local_d0 >> 0x18) |
               (byte)((ulong)uStack_e0 >> 0x18) | uStack_c0._3_1_;
      bVar19 = (byte)((ulong)local_f0 >> 0x20) | (byte)((ulong)local_d0 >> 0x20) |
               (byte)((ulong)uStack_e0 >> 0x20) | uStack_c0._4_1_;
      bVar20 = (byte)((ulong)local_f0 >> 0x28) | (byte)((ulong)local_d0 >> 0x28) |
               (byte)((ulong)uStack_e0 >> 0x28) | uStack_c0._5_1_;
      bVar21 = (byte)((ulong)local_f0 >> 0x30) | (byte)((ulong)local_d0 >> 0x30) |
               (byte)((ulong)uStack_e0 >> 0x30) | uStack_c0._6_1_;
      bVar22 = (byte)((ulong)local_f0 >> 0x38) | (byte)((ulong)local_d0 >> 0x38) |
               (byte)((ulong)uStack_e0 >> 0x38) | uStack_c0._7_1_;
      bVar23 = (byte)uStack_e8 | (byte)uStack_c8 | (byte)local_d8 | bStack_b8;
      bVar24 = (byte)((ulong)uStack_e8 >> 8) | (byte)((ulong)uStack_c8 >> 8) |
               (byte)((ulong)local_d8 >> 8) | bStack_b7;
      bVar25 = (byte)((ulong)uStack_e8 >> 0x10) | (byte)((ulong)uStack_c8 >> 0x10) |
               (byte)((ulong)local_d8 >> 0x10) | bStack_b6;
      bVar26 = (byte)((ulong)uStack_e8 >> 0x18) | (byte)((ulong)uStack_c8 >> 0x18) |
               (byte)((ulong)local_d8 >> 0x18) | bStack_b5;
      bVar27 = (byte)((ulong)uStack_e8 >> 0x20) | (byte)((ulong)uStack_c8 >> 0x20) |
               (byte)((ulong)local_d8 >> 0x20) | bStack_b4;
      bVar28 = (byte)((ulong)uStack_e8 >> 0x28) | (byte)((ulong)uStack_c8 >> 0x28) |
               (byte)((ulong)local_d8 >> 0x28) | bStack_b3;
      bVar29 = (byte)((ulong)uStack_e8 >> 0x30) | (byte)((ulong)uStack_c8 >> 0x30) |
               (byte)((ulong)local_d8 >> 0x30) | bStack_b2;
      bVar30 = (byte)((ulong)uStack_e8 >> 0x38) | (byte)((ulong)uStack_c8 >> 0x38) |
               (byte)((ulong)local_d8 >> 0x38) | (byte)local_b1;
      auVar31[1] = bVar16;
      auVar31[0] = bVar15;
      auVar31[2] = bVar17;
      auVar31[3] = bVar18;
      auVar31[4] = bVar19;
      auVar31[5] = bVar20;
      auVar31[6] = bVar21;
      auVar31[7] = bVar22;
      auVar31[8] = bVar23;
      auVar31[9] = bVar24;
      auVar31[10] = bVar25;
      auVar31[0xb] = bVar26;
      auVar31[0xc] = bVar27;
      auVar31[0xd] = bVar28;
      auVar31[0xe] = bVar29;
      auVar31[0xf] = bVar30;
      auVar2[1] = bVar16;
      auVar2[0] = bVar15;
      auVar2[2] = bVar17;
      auVar2[3] = bVar18;
      auVar2[4] = bVar19;
      auVar2[5] = bVar20;
      auVar2[6] = bVar21;
      auVar2[7] = bVar22;
      auVar2[8] = bVar23;
      auVar2[9] = bVar24;
      auVar2[10] = bVar25;
      auVar2[0xb] = bVar26;
      auVar2[0xc] = bVar27;
      auVar2[0xd] = bVar28;
      auVar2[0xe] = bVar29;
      auVar2[0xf] = bVar30;
      auVar31 = NEON_ext(auVar31,auVar2,8,1);
      if (local_b1._1_3_ == 0x20000 &&
          CONCAT17(bVar22 | auVar31[7],
                   CONCAT16(bVar21 | auVar31[6],
                            CONCAT15(bVar20 | auVar31[5],
                                     CONCAT14(bVar19 | auVar31[4],
                                              CONCAT13(bVar18 | auVar31[3],
                                                       CONCAT12(bVar17 | auVar31[2],
                                                                CONCAT11(bVar16 | auVar31[1],
                                                                         bVar15 | auVar31[0])))))))
          == 0) {
        FUN_10088209c(&local_f0);
        _swift_beginAccess(unaff_x20 + 0x18,&local_190,0x21,0);
        FUN_10088fa78(&local_f0);
        _swift_endAccess(&local_190);
        FUN_10088209c(&local_f0);
        *(undefined1 *)(unaff_x20 + 0x12) = 0;
        local_d8 = &DAT_100eeb880;
        local_f0 = (undefined *)((ulong)local_f0 & 0xffffffffffffff00);
        FUN_100626b98(&local_f0);
        FUN_100004594(&local_f0);
        return;
      }
    }
    FUN_10088209c(&local_f0);
  }
  else {
    FUN_1000fb4c4(&local_f0,&DAT_100fe90d0,&DAT_100c7f500);
  }
  return;
}



/* Address: 0x100891d6c | FUN_100891d6c */

void FUN_100891d6c(void)

{
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  if ((*(byte *)(unaff_x20 + 0x30) & 0xfe) != 2) {
    _swift_beginAccess(unaff_x20 + 0x11,auStack_38,0,0);
    if (*(char *)(unaff_x20 + 0x11) == '\0') {
      *(undefined1 *)(unaff_x20 + 0x12) = 1;
    }
    else {
      FUN_100626d58();
    }
  }
  return;
}



/* Address: 0x100891dd0 | FUN_100891dd0 */

void FUN_100891dd0(void)

{
  undefined1 uVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined2 local_170;
  undefined1 local_168;
  undefined7 uStack_167;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined2 local_128;
  char local_126;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  byte bStack_de;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_88 [40];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_88,0,0);
  uVar6 = *(ulong *)(unaff_x20 + 0x20);
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10089202c);
    (*pcVar2)();
  }
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100892030);
    (*pcVar2)();
  }
  uVar9 = *(ulong *)(unaff_x20 + 0x28);
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100892034);
    (*pcVar2)();
  }
  if (uVar9 >> 0x20 == 0) {
    lVar5 = *(long *)(unaff_x20 + 0x18);
    _swift_retain(lVar5);
    if (uVar6 != uVar9) {
      uVar8 = uVar6;
      do {
        uVar7 = *(ulong *)(lVar5 + 0x10);
        if (uVar7 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100892024);
          (*pcVar2)();
        }
        FUN_1000f8cac(lVar5 + 0x20 + uVar8 * 0x48,&local_120,&DAT_100fe90d0,&DAT_100c7f500);
        if (0xfe < bStack_de) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10089203c);
          (*pcVar2)();
        }
        uStack_a8 = uStack_f8;
        local_b0 = local_100;
        uStack_a0 = uStack_f0;
        uStack_c8 = uStack_118;
        local_d0 = local_120;
        local_b8 = puStack_108;
        uStack_c0 = uStack_110;
        uVar8 = uVar7 + 0x1ffffffff & uVar8 + 1;
        if (uVar8 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100892028);
          (*pcVar2)();
        }
        puVar3 = &local_120;
        FUN_100882060(puVar3,&local_168);
        uVar1 = local_168;
        if (local_126 == '\0') {
          uStack_188 = uStack_140;
          local_190 = local_148;
          uStack_178 = uStack_130;
          uStack_180 = local_138;
          local_170 = local_128;
          local_1b0 = CONCAT71(uStack_167,local_168);
          uStack_1a8 = uStack_160;
          local_198 = puStack_150;
          uStack_1a0 = local_158;
          FUN_100626ce0(&local_1b0);
          FUN_1005e70f4(&local_1b0);
          FUN_10088209c(&local_120);
        }
        else if (local_126 == '\x01') {
          FUN_100881fac();
          puVar4 = &DAT_100f0ace8;
          _swift_allocError(&DAT_100f0ace8,puVar3,0,0);
          *(undefined1 *)puVar3 = uVar1;
          FUN_100626c9c();
          FUN_10088209c(&local_120);
          _swift_errorRelease(puVar4);
        }
        else {
          local_198 = &DAT_100eeb880;
          local_1b0 = local_1b0 & 0xffffffffffffff00;
          FUN_100626b98(&local_1b0);
          FUN_10088209c(&local_120);
          FUN_100004594(&local_1b0);
        }
      } while ((uVar9 < uVar6 == (long)uVar6 <= (long)uVar8) || (uVar8 != uVar9));
    }
    _swift_release(lVar5);
    if (*(byte *)(unaff_x20 + 0x30) - 1 < 2) {
      local_b8 = &DAT_100eeb8a0;
      FUN_100626b98(&local_d0);
      FUN_100004594(&local_d0);
    }
    if (*(char *)(unaff_x20 + 0x12) == '\x01') {
      FUN_100626d58();
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100892038);
  (*pcVar2)();
}



/* Address: 0x10089203c | FUN_10089203c */

void FUN_10089203c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_48,0x21,0);
  lVar1 = *(long *)(unaff_x20 + 0x20);
  lVar2 = *(long *)(unaff_x20 + 0x28) - lVar1;
  if (*(long *)(unaff_x20 + 0x28) < lVar1) {
    lVar2 = lVar2 + *(long *)(*(long *)(unaff_x20 + 0x18) + 0x10);
  }
  FUN_1008929a0(lVar2);
  *(long *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  _swift_endAccess(auStack_48);
  FUN_100626b8c();
  return;
}



/* Address: 0x1008920b4 | FUN_1008920b4 */

void FUN_1008920b4(undefined8 param_1,ulong param_2,undefined8 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  if ((param_2 & 0xff) == 0) {
    FUN_100892184();
    _swift_beginAccess(unaff_x20 + 0x11,auStack_58,1,0);
    if ((1 << (ulong)(*(byte *)(unaff_x20 + 0x11) & 0x1f) & 0x70U) == 0) {
      uVar2 = 5;
      if ((1 << (ulong)(*(byte *)(unaff_x20 + 0x11) & 0x1f) & 5U) == 0) {
        uVar2 = 4;
      }
      *(undefined1 *)(unaff_x20 + 0x11) = uVar2;
    }
    bVar1 = *(byte *)(unaff_x20 + 0x12);
    FUN_100626d64(0,param_3);
    if (((bVar1 & 1) != 0) && ((*(byte *)(unaff_x20 + 0x12) & 1) != 0)) {
      *(undefined1 *)(unaff_x20 + 0x12) = 0;
      FUN_100626d58();
    }
  }
  else {
    FUN_100626d64(param_2,param_3);
  }
  return;
}



/* Address: 0x100892184 | FUN_100892184 */

void FUN_100892184(void)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long unaff_x20;
  long lVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined2 local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined2 uStack_d8;
  byte bStack_d6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined1 auStack_88 [40];
  
  _swift_beginAccess(unaff_x20 + 0x18,auStack_88,0,0);
  uVar9 = *(ulong *)(unaff_x20 + 0x20);
  if (0xffffffff < (long)uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008923f4);
    (*pcVar1)();
  }
  uVar5 = *(ulong *)(unaff_x20 + 0x28);
  if ((long)(uVar5 | uVar9) < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008923f8);
    (*pcVar1)();
  }
  if (0xffffffff < (long)uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008923fc);
    (*pcVar1)();
  }
  lVar6 = *(long *)(unaff_x20 + 0x18);
  _swift_retain(lVar6);
  bVar7 = true;
  uVar8 = uVar9;
  do {
    if ((long)uVar5 < (long)uVar9 != bVar7 && (int)uVar8 == (int)uVar5) {
      _swift_release(lVar6);
      return;
    }
    uVar8 = uVar8 & 0xffffffff;
    if (*(ulong *)(lVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008923ec);
      (*pcVar1)();
    }
    puVar4 = &DAT_100fe90d0;
    FUN_1000f8cac(lVar6 + 0x20 + uVar8 * 0x48,&local_118,&DAT_100fe90d0,&DAT_100c7f500);
    if (0xfe < bStack_d6) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100892400);
      (*pcVar1)();
    }
    uStack_a8 = uStack_f0;
    local_b0 = local_f8;
    uStack_a0 = local_e8;
    uStack_c8 = uStack_110;
    local_d0 = local_118;
    uStack_b8 = uStack_100;
    uStack_c0 = local_108;
    FUN_100882060(&local_d0,&local_118);
    if (bStack_d6 == 0) {
      uStack_138 = uStack_f0;
      local_140 = local_f8;
      uStack_130 = local_e8;
      local_120 = uStack_d8;
      uStack_158 = uStack_110;
      local_160 = local_118;
      uStack_148 = uStack_100;
      uStack_150 = local_108;
      puVar2 = &DAT_100fe90f8;
      puVar3 = &DAT_100c7f5d0;
      FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
      thunk_FUN_100885488();
      FUN_1005e70f4(&local_160);
      FUN_10088209c(&local_d0);
      if ((ulong)puVar4 >> 0x38 == 0) {
        _swift_release(lVar6);
        _swift_release(puVar2);
        _swift_bridgeObjectRelease(puVar3);
        _swift_beginAccess(unaff_x20 + 0x18,&local_d0,0x21,0);
        uVar9 = 0x1ffffff00000000;
        if (bVar7 == false) {
          uVar9 = 0xffffff00000000;
        }
        FUN_100892400(uVar8 | uVar9);
        _swift_endAccess(&local_d0);
        return;
      }
      FUN_100877974(puVar2,puVar3,puVar4);
    }
    else {
      FUN_10088209c(&local_d0);
    }
    uVar8 = *(long *)(lVar6 + 0x10) - 1U & uVar8 + 1;
    bVar7 = (long)uVar9 <= (long)uVar8;
  } while (uVar8 >> 0x20 == 0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008923f0);
  (*pcVar1)();
}



/* Address: 0x100892400 | FUN_100892400 */

void FUN_100892400(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x20;
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100892458);
    (*pcVar1)();
  }
  if (uVar2 >> 0x20 == 0) {
    if ((long)uVar2 < *(long *)(unaff_x20 + 8)) {
      uVar3 = 0;
      if (((param_1 >> 0x38 & 1) == 0) && (uVar2 < (param_1 & 0xffffffff))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100892434);
        (*pcVar1)();
      }
    }
    else {
      if (((param_1 >> 0x38 & 1) == 0) || (uVar2 < (param_1 & 0xffffffff))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100892460);
        (*pcVar1)();
      }
      uVar3 = 0x100000000000000;
    }
    FUN_100893994(param_1 & 0x1ffffffffffffff,uVar2 | uVar3 | 0xffffff00000000);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10089245c);
  (*pcVar1)();
}



/* Address: 0x100892460 | FUN_100892460 */

void FUN_100892460(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10089247c | FUN_10089247c */

void FUN_10089247c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008924a0 | FUN_1008924a0 */

void FUN_1008924a0(void)

{
  FUN_100888930();
  return;
}



/* Address: 0x1008924bc | FUN_1008924bc */

void FUN_1008924bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined *puVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  puVar8 = &DAT_100fe90f8;
  FUN_1000f7830(&DAT_100fe90f8,&DAT_100c7f5d0);
  param_1[3] = puVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_100878fa0(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x100892554 | thunk_FUN_10089203c */

void thunk_FUN_10089203c(void)

{
  FUN_10089203c();
  return;
}



/* Address: 0x100892558 | thunk_FUN_100890158 */

void thunk_FUN_100890158(void)

{
  FUN_100890158();
  return;
}



/* Address: 0x10089255c | thunk_FUN_1008907dc */

void thunk_FUN_1008907dc(void)

{
  FUN_1008907dc();
  return;
}



/* Address: 0x100892560 | thunk_FUN_100890af0 */

void thunk_FUN_100890af0(void)

{
  FUN_100890af0();
  return;
}



/* Address: 0x100892564 | FUN_100892564 */

void FUN_100892564(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined3 uVar5;
  uint7 uVar6;
  uint7 uVar7;
  undefined *puVar8;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar7 = *(uint7 *)(param_2 + 2);
  uVar3 = *(undefined1 *)((long)param_2 + 0x17);
  uVar4 = *(undefined1 *)((long)param_2 + 0x16);
  uVar5 = *(undefined3 *)((long)param_2 + 0x14);
  uVar6 = *(uint7 *)(param_2 + 2);
  puVar8 = &DAT_100fe95b0;
  FUN_1000f7830(&DAT_100fe95b0,&DAT_100c80420);
  param_1[3] = puVar8;
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)((long)param_1 + 0x16) = uVar4;
  *(int *)(param_1 + 2) = (int)uVar7;
  *(short *)((long)param_1 + 0x14) = (short)uVar5;
  *(undefined1 *)((long)param_1 + 0x17) = uVar3;
  *(undefined1 *)((long)param_1 + 0x41) = 2;
  FUN_10087792c(uVar1,uVar2,(ulong)uVar6,uVar3);
  return;
}



/* Address: 0x1008925fc | thunk_FUN_100890c5c */

void thunk_FUN_100890c5c(void)

{
  FUN_100890c5c();
  return;
}



/* Address: 0x100892600 | thunk_FUN_1008920b4 */

void thunk_FUN_1008920b4(void)

{
  FUN_1008920b4();
  return;
}



/* Address: 0x100892604 | thunk_FUN_100891dd0 */

void thunk_FUN_100891dd0(void)

{
  FUN_100891dd0();
  return;
}



/* Address: 0x100892608 | FUN_100892608 */

void FUN_100892608(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100897ce0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892624 | FUN_100892624 */

void FUN_100892624(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100897de8();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892640 | FUN_100892640 */

void FUN_100892640(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100897f18();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10089265c | FUN_10089265c */

void FUN_10089265c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100898058();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892678 | FUN_100892678 */

void FUN_100892678(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10089807c();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892694 | FUN_100892694 */

void FUN_100892694(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008981ac();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008926b0 | FUN_1008926b0 */

void FUN_1008926b0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100898314();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008926cc | FUN_1008926cc */

void FUN_1008926cc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100898338();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1008926e8 | FUN_1008926e8 */

void FUN_1008926e8(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100898440();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892704 | FUN_100892704 */

void FUN_100892704(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_1008985ac();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100892720 | FUN_100892720 */

undefined * FUN_100892720(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008927d8);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    CVar2.unknown = &DAT_100fe90d0;
    FUN_1000f7830(&DAT_100fe90d0,&DAT_100c7f500);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_2,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_2;
    puVar4 = _Var3.unknown + 0x20;
    do {
      FUN_1000f8cac(param_1,puVar4,&DAT_100fe90d0,&DAT_100c7f500);
      puVar4 = puVar4 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_1000fb4c4(param_1,&DAT_100fe90d0,&DAT_100c7f500);
  return _Var3.unknown;
}



/* Address: 0x1008927d8 | FUN_1008927d8 */

void FUN_1008927d8(undefined8 param_1,ulong param_2)

{
  if (param_2 < 2) {
    return;
  }
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x1008927ec | FUN_1008927ec */

void FUN_1008927ec(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong *unaff_x20;
  ulong uVar9;
  
  uVar6 = *unaff_x20;
  uVar9 = unaff_x20[1];
  lVar7 = unaff_x20[2] - uVar9;
  if ((long)unaff_x20[2] < (long)uVar9) {
    lVar7 = lVar7 + *(long *)(uVar6 + 0x10);
  }
  if (lVar7 < param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008928c0);
    (*pcVar4)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008928c4);
    (*pcVar4)();
  }
  if (param_1 != 0) {
    uVar5 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_100898704();
    }
    do {
      if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008928b8);
        (*pcVar4)();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1008928bc);
        (*pcVar4)();
      }
      puVar8 = (undefined8 *)(uVar6 + 0x20 + uVar9 * 0x18);
      uVar1 = *puVar8;
      uVar2 = puVar8[1];
      *puVar8 = 0;
      puVar8[1] = 0;
      uVar3 = *(undefined1 *)(puVar8 + 2);
      *(undefined1 *)(puVar8 + 2) = 0;
      FUN_100774094(uVar1,uVar2,uVar3);
      uVar9 = *(long *)(uVar6 + 0x10) + 0x7fffffffffffffffU & uVar9 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar6;
  }
  unaff_x20[1] = uVar9;
  return;
}



/* Address: 0x1008928c4 | FUN_1008928c4 */

void FUN_1008928c4(long param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar6 = *unaff_x20;
  uVar8 = unaff_x20[1];
  lVar7 = unaff_x20[2] - uVar8;
  if ((long)unaff_x20[2] < (long)uVar8) {
    lVar7 = lVar7 + *(long *)(uVar6 + 0x10);
  }
  if (lVar7 < param_1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10089299c);
    (*pcVar4)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008929a0);
    (*pcVar4)();
  }
  if (param_1 != 0) {
    uVar5 = uVar6;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar5 & 1) == 0) {
      FUN_1008986f0();
    }
    do {
      if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100892994);
        (*pcVar4)();
      }
      if (*(ulong *)(uVar6 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100892998);
        (*pcVar4)();
      }
      puVar1 = (undefined8 *)(uVar6 + 0x20 + uVar8 * 0x10);
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      puVar1[1] = 0x22;
      *puVar1 = 0;
      FUN_100882040(uVar2,uVar3);
      uVar8 = *(long *)(uVar6 + 0x10) + 0x7fffffffffffffffU & uVar8 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar6;
  }
  unaff_x20[1] = uVar8;
  return;
}



/* Address: 0x1008929a0 | FUN_1008929a0 */

void FUN_1008929a0(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  ulong *unaff_x20;
  ulong uVar5;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  
  uVar3 = *unaff_x20;
  uVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2] - uVar5;
  if ((long)unaff_x20[2] < (long)uVar5) {
    lVar4 = lVar4 + *(long *)(uVar3 + 0x10);
  }
  if (lVar4 < param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100892a88);
    (*pcVar1)();
  }
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100892a8c);
    (*pcVar1)();
  }
  if (param_1 != 0) {
    uVar2 = uVar3;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_100898718();
    }
    do {
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_5e = 0xff;
      local_60 = 0;
      if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100892a80);
        (*pcVar1)();
      }
      if (*(ulong *)(uVar3 + 0x10) <= uVar5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100892a84);
        (*pcVar1)();
      }
      FUN_100894eec(&local_a0,uVar3 + 0x20 + uVar5 * 0x48);
      uVar5 = *(long *)(uVar3 + 0x10) + 0x7fffffffffffffffU & uVar5 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
    *unaff_x20 = uVar3;
  }
  unaff_x20[1] = uVar5;
  return;
}



/* Address: 0x100892a8c | FUN_100892a8c */

void FUN_100892a8c(undefined8 param_1,char param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  code *pcVar7;
  
  if (param_2 != '\x01') {
    FUN_1008b1ce4();
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
  puVar4 = &DAT_100f09e80;
  _swift_allocObject(&DAT_100f09e80,0x20,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  pcVar7 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,1);
  (*pcVar7)(FUN_1008777d0,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x100892b8c | FUN_100892b8c */

void FUN_100892b8c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  
  uVar2 = (uint)param_2 >> 8 & 0xff;
  if (uVar2 != 1) {
    _swift_bridgeObjectRetain(param_1);
    FUN_1008b1de4();
    FUN_10081c820(param_1,param_2,uVar2);
    return;
  }
  uVar3 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar7 = param_3;
  _swift_getObjectType();
  uVar4 = uVar3;
  lVar6 = lVar1;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_1008853bc(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,lVar6);
    _swift_bridgeObjectRelease(lVar7);
    return;
  }
  puVar5 = &DAT_100f09e58;
  _swift_allocObject(&DAT_100f09e58,0x20,7);
  *(long *)(puVar5 + 0x10) = param_3;
  *(undefined8 *)(puVar5 + 0x18) = param_1;
  pcVar8 = *(code **)(lVar1 + 0x18);
  FUN_10081c834(param_1,param_2,1);
  _swift_retain(param_3);
  (*pcVar8)(FUN_100894ee4,puVar5,uVar3,lVar1);
  _swift_release(puVar5);
  return;
}



/* Address: 0x100892cc4 | FUN_100892cc4 */

undefined8 FUN_100892cc4(code *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_48,0,0);
  local_58 = *(undefined8 *)(param_3 + 0x10);
  local_50 = *(ushort *)(param_3 + 0x18);
  if (local_50 >> 8 < 0xff) {
    FUN_10081c834();
    (*param_1)(&local_58);
    FUN_10081c820(local_58,(undefined1)local_50,local_50._1_1_);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100892d54);
  (*pcVar1)();
}



/* Address: 0x100892d54 | FUN_100892d54 */

void FUN_100892d54(long param_1,code *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = param_1 + 0x10;
  puVar3 = auStack_48;
  uVar1 = 0;
  _swift_beginAccess(lVar2,puVar3,0,0);
  if (*(char *)(param_1 + 0x19) == -1) {
    _swift_beginAccess(param_1 + 0x30,auStack_60,0x21,0);
    FUN_10064967c(param_2,param_3);
    _swift_endAccess(auStack_60);
    lVar2 = 0;
    puVar3 = (undefined1 *)0x0;
    uVar1 = 0;
  }
  else {
    (*param_2)();
  }
  FUN_1006486f8(lVar2,puVar3,uVar1);
  FUN_100004550(lVar2,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100892e1c | FUN_100892e1c */

undefined8 FUN_100892e1c(long param_1,code *param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_4 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_4 + 0x18) == -1) {
      *(undefined8 *)(param_4 + 0x10) = uVar9;
      *(undefined1 *)(param_4 + 0x18) = 1;
      _swift_beginAccess(param_4 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_4 + 0x30);
      *(undefined8 *)(param_4 + 0x38) = 0;
      *(undefined8 *)(param_4 + 0x40) = 0;
      *(undefined8 *)(param_4 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008931c8);
      (*pcVar10)();
    }
    (*param_2)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f09f98;
      _swift_allocObject(&DAT_100f09f98,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_100894590;
      *(long *)(puVar6 + 0x18) = param_4;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_4,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f09fc0;
        _swift_allocObject(&DAT_100f09fc0,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_1005dfeb4(uVar5,cVar2);
          FUN_100892a8c(uVar5,cVar2,param_4);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_4,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f09fe8;
      _swift_allocObject(&DAT_100f09fe8,0x20,7);
      *(long *)(puVar6 + 0x10) = param_4;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630328(uVar5);
        _swift_retain(param_4);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_4);
      _swift_retain(lVar3);
      FUN_10064967c(thunk_FUN_100894fc4,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_4 = lVar3;
    }
    _swift_release(param_4);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008931c8 | FUN_1008931c8 */

undefined8 FUN_1008931c8(long param_1,long param_2)

{
  char cVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  cVar1 = *(char *)(param_2 + 0x18);
  if (cVar1 != -1) {
    uVar3 = *(undefined8 *)(param_2 + 0x10);
    _swift_beginAccess(param_1 + 0x10,auStack_70,1,0);
    uVar4 = 0;
    if (*(char *)(param_1 + 0x18) == -1) {
      *(undefined8 *)(param_1 + 0x10) = uVar3;
      *(char *)(param_1 + 0x18) = cVar1;
      _swift_beginAccess(param_1 + 0x30,auStack_88,1,0);
      uVar4 = *(undefined8 *)(param_1 + 0x30);
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined8 *)(param_1 + 0x40) = 0;
      *(undefined8 *)(param_1 + 0x30) = 0;
      FUN_100308524(uVar3,cVar1);
    }
    return uVar4;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100893298);
  (*pcVar2)();
}



/* Address: 0x100893298 | FUN_100893298 */

void FUN_100893298(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  code *pcVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong *unaff_x20;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  code *pcStack_140;
  undefined8 local_138;
  ulong local_110;
  ulong uStack_108;
  ulong local_100;
  code *pcStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined4 local_d1;
  ulong local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined7 uStack_90;
  undefined4 uStack_89;
  undefined5 uStack_85;
  undefined2 local_80;
  undefined1 local_7e;
  undefined *local_78;
  
  uVar10 = unaff_x20[1];
  if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100893610);
    (*pcVar4)();
  }
  if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100893614);
    (*pcVar4)();
  }
  uVar11 = unaff_x20[2];
  if (((param_1 >> 0x38 & 1) != 0) && ((param_1 & 0xffffffff) < uVar10)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100893620);
    (*pcVar4)();
  }
  if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100893618);
    (*pcVar4)();
  }
  if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10089361c);
    (*pcVar4)();
  }
  uVar12 = param_2 & 0xffffffff;
  if ((long)uVar11 < (long)uVar10) {
    if (((param_2 >> 0x38 & 1) == 0) && (uVar11 < uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100893310);
      (*pcVar4)();
    }
  }
  else if ((uVar11 < uVar12) || ((param_2 >> 0x38 & 1) == 0)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100893624);
    (*pcVar4)();
  }
  uVar8 = *unaff_x20;
  uVar5 = param_1 & 0x1ffffffffffffff;
  FUN_10060ea40(uVar5,param_2 & 0x1ffffffffffffff,uVar8,uVar10,uVar11);
  uVar6 = *(ulong *)(param_3 + 0x10);
  if (uVar5 == uVar6) {
    if (uVar5 != 0) {
      param_3 = param_3 + 0x20;
      do {
        FUN_100882060(param_3,&local_c8);
        uStack_e8 = uStack_a0;
        local_f0 = local_a8;
        uStack_e0 = local_98;
        local_d1 = uStack_89;
        uStack_108 = uStack_c0;
        local_110 = local_c8;
        pcStack_f8 = (code *)uStack_b0;
        local_100 = local_b8;
        FUN_100882060(&local_110,&local_158);
        uVar10 = uVar8;
        _swift_isUniquelyReferenced_nonNull_native();
        if ((uVar10 & 1) == 0) {
          FUN_100898718();
        }
        param_1 = param_1 & 0xffffffff;
        FUN_10088209c(&local_110);
        if (*(ulong *)(uVar8 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100893608);
          (*pcVar4)();
        }
        FUN_100894eec(&local_158,uVar8 + param_1 * 0x48 + 0x20);
        param_1 = *(long *)(uVar8 + 0x10) - 1U & param_1 + 1;
        if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10089360c);
          (*pcVar4)();
        }
        param_3 = param_3 + 0x48;
        uVar5 = uVar5 - 1;
      } while (uVar5 != 0);
      *unaff_x20 = uVar8;
    }
  }
  else {
    uVar7 = uVar11 - uVar10;
    if ((long)uVar11 < (long)uVar10) {
      uVar7 = uVar7 + *(long *)(uVar8 + 0x10);
      if ((uVar6 == 0) && (uVar5 == uVar7)) {
LAB_100893428:
        FUN_100893994(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff);
        return;
      }
    }
    else if ((uVar5 == uVar7) && (uVar6 == 0)) goto LAB_100893428;
    if (SCARRY8(uVar7,uVar6)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100893628);
      (*pcVar4)();
    }
    lVar9 = (uVar7 + uVar6) - uVar5;
    if (SBORROW8(uVar7 + uVar6,uVar5)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10089362c);
      (*pcVar4)();
    }
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100893630);
      (*pcVar4)();
    }
    lVar1 = 0;
    if (LZCOUNT(lVar9) != 0) {
      lVar1 = 1L << (-LZCOUNT(lVar9) & 0x3fU);
    }
    lVar2 = 1;
    if (lVar9 != -1) {
      lVar2 = lVar1;
    }
    if (lVar2 <= *(long *)(uVar8 + 0x10)) {
      lVar2 = *(long *)(uVar8 + 0x10);
    }
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1008926b0(0,lVar2,0);
    uVar6 = uVar10 | 0x1ffffff00000000;
    param_1 = param_1 & 0x1ffffffffffffff;
    uVar5 = uVar8;
    FUN_10060f490();
    pcStack_f8 = thunk_FUN_100893b10;
    local_f0 = 0;
    local_110 = uVar6;
    uStack_108 = param_1;
    local_100 = uVar5;
    _swift_retain();
    FUN_10087ec1c(&local_110);
    _swift_bridgeObjectRetain(param_3);
    FUN_10087f11c();
    if ((long)uVar11 < (long)uVar10) {
      uVar10 = 0;
      if (((param_2 >> 0x38 & 1) == 0) && (uVar11 < uVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10089352c);
        (*pcVar4)();
      }
    }
    else {
      if ((uVar11 < uVar12) || ((param_2 >> 0x38 & 1) == 0)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100893634);
        (*pcVar4)();
      }
      uVar10 = 0x100000000000000;
    }
    param_2 = param_2 & 0x1ffffffffffffff;
    uVar11 = uVar11 | uVar10 | 0xffffff00000000;
    uVar10 = uVar8;
    FUN_10060f490();
    pcStack_140 = thunk_FUN_100893b10;
    local_138 = 0;
    local_158 = param_2;
    uStack_150 = uVar11;
    local_148 = uVar10;
    _swift_retain();
    FUN_10087ec1c(&local_158);
    uVar10 = lVar2 - *(long *)(local_78 + 0x10);
    if (0 < (long)uVar10) {
      local_98 = 0;
      uStack_a0 = 0;
      uStack_85 = 0;
      uStack_90 = 0;
      uStack_89 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
      local_a8 = 0;
      uStack_b0 = 0;
      local_7e = 0xff;
      local_80 = 0;
      local_c8 = uVar10;
      FUN_10087f55c(&local_c8);
    }
    puVar3 = local_78;
    _swift_retain(local_78);
    _swift_release(uVar8);
    *unaff_x20 = (ulong)puVar3;
    unaff_x20[1] = 0;
    lVar9 = *(long *)(puVar3 + 0x10);
    _swift_release(puVar3);
    unaff_x20[2] = lVar9 - uVar10;
  }
  return;
}



/* Address: 0x100893634 | FUN_100893634 */

void FUN_100893634(ulong *param_1,ulong param_2)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  long lVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_138 [72];
  ulong local_f0;
  ulong uStack_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  ulong uStack_c8;
  ulong uStack_c0;
  undefined7 uStack_b8;
  undefined1 local_b1;
  undefined2 uStack_b0;
  byte bStack_ae;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  ulong local_80;
  
  uVar5 = *unaff_x20;
  uVar7 = unaff_x20[1];
  uVar9 = unaff_x20[2];
  local_f0 = uVar5;
  uStack_e8 = uVar7;
  local_e0 = uVar9;
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893974);
    (*pcVar3)();
  }
  if (uVar7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893978);
    (*pcVar3)();
  }
  local_d8 = CONCAT44(0x1ffffff,(int)uVar7);
  if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10089397c);
    (*pcVar3)();
  }
  if (uVar9 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893980);
    (*pcVar3)();
  }
  local_d0 = CONCAT17((long)uVar7 <= (long)uVar9,CONCAT16(0xff,CONCAT24(0xffff,(int)uVar9)));
  uStack_88 = local_d8;
  local_80 = local_d0;
  local_a0 = uVar5;
  uStack_98 = uVar7;
  uStack_90 = uVar9;
  _swift_retain(uVar5);
  uVar4 = param_2 & 0x1ffffffffffffff;
  FUN_100893b18();
  FUN_1000fb4c4(&local_f0,&DAT_100fe9b78,&DAT_100c80990);
  if ((uVar4 & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893984);
    (*pcVar3)();
  }
  param_2 = param_2 & 0xffffffff;
  uVar4 = *(ulong *)(uVar5 + 0x10);
  if (uVar4 <= param_2) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893988);
    (*pcVar3)();
  }
  lVar6 = param_2 * 0x48;
  FUN_1000f8cac(uVar5 + lVar6 + 0x20,&local_f0,&DAT_100fe90d0,&DAT_100c7f500);
  if (0xfe < bStack_ae) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100893994);
    (*pcVar3)();
  }
  param_1[5] = uStack_c8;
  param_1[4] = local_d0;
  param_1[7] = CONCAT17(local_b1,uStack_b8);
  param_1[6] = uStack_c0;
  *(uint *)((long)param_1 + 0x3f) = CONCAT13(bStack_ae,CONCAT21(uStack_b0,local_b1));
  param_1[1] = uStack_e8;
  *param_1 = local_f0;
  param_1[3] = local_d8;
  param_1[2] = local_e0;
  if (uVar7 == param_2) {
    unaff_x20[1] = uVar4 + 0x1ffffffff & uVar7 + 1;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_b1 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    bStack_ae = 0xff;
    uStack_b0 = 0;
    uVar9 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar9 & 1) == 0) {
      FUN_100898718();
    }
    if (*(ulong *)(uVar5 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008937b0);
      (*pcVar3)();
    }
  }
  else {
    if ((uVar4 - 1 & uVar9 - 1) != param_2) {
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      local_b1 = 0;
      uStack_c0 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      local_d8 = 0;
      local_e0 = 0;
      bStack_ae = 0xff;
      uStack_b0 = 0;
      uVar7 = uVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar7 & 1) == 0) {
        FUN_100898718();
      }
      if (*(ulong *)(uVar5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100893990);
        (*pcVar3)();
      }
      lVar1 = uVar5 + 0x20;
      FUN_100894eec(&local_f0,lVar1 + lVar6);
      *unaff_x20 = uVar5;
      uVar7 = *(ulong *)(uVar5 + 0x10);
      uVar4 = uVar7 - 1;
      uVar2 = uVar4 & param_2 + 1;
      do {
        if (uVar2 == uVar9) {
          unaff_x20[2] = uVar4 & uVar9 - 1;
          return;
        }
        if (param_2 != uVar2) {
          if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100893964);
            (*pcVar3)();
          }
          if (uVar7 <= param_2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100893968);
            (*pcVar3)();
          }
          lVar6 = lVar1 + param_2 * 0x48;
          FUN_1000f8cac(lVar6,&local_f0,&DAT_100fe90d0,&DAT_100c7f500);
          if (uVar7 <= uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10089396c);
            (*pcVar3)();
          }
          lVar8 = lVar1 + uVar2 * 0x48;
          FUN_1000f8cac(lVar8,auStack_138,&DAT_100fe90d0,&DAT_100c7f500);
          FUN_100894eec(auStack_138,lVar6);
          if (*(ulong *)(uVar5 + 0x10) <= uVar2) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100893970);
            (*pcVar3)();
          }
          FUN_100894eec(&local_f0,lVar8);
          *unaff_x20 = uVar5;
          uVar7 = *(ulong *)(uVar5 + 0x10);
        }
        uVar4 = uVar7 - 1;
        param_2 = uVar2;
        uVar2 = uVar4 & uVar2 + 1;
      } while( true );
    }
    unaff_x20[2] = param_2;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_b1 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    local_e0 = 0;
    bStack_ae = 0xff;
    uStack_b0 = 0;
    uVar7 = uVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar7 & 1) == 0) {
      FUN_100898718();
    }
    if (*(ulong *)(uVar5 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10089398c);
      (*pcVar3)();
    }
  }
  FUN_100894eec(&local_f0,uVar5 + lVar6 + 0x20);
  *unaff_x20 = uVar5;
  return;
}



/* Address: 0x100893994 | FUN_100893994 */

void FUN_100893994(ulong param_1,ulong param_2)

{
  code *pcVar1;
  undefined8 *puVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined2 local_60;
  undefined1 local_5e;
  
  puVar2 = &local_a0;
  uVar6 = unaff_x20[1];
  if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893af8);
    (*pcVar1)();
  }
  if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893afc);
    (*pcVar1)();
  }
  uVar7 = unaff_x20[2];
  uVar3 = param_2 & 0xffffffff;
  if (((param_2 >> 0x38 & 1) != 0) && (uVar3 < uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893b08);
    (*pcVar1)();
  }
  if ((long)uVar7 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893b00);
    (*pcVar1)();
  }
  if (uVar7 >> 0x20 == 0) {
    if ((long)uVar7 < (long)uVar6) {
      if (((param_2 >> 0x38 & 1) == 0) && (uVar7 < uVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100893a04);
        (*pcVar1)();
      }
    }
    else if (((param_2 >> 0x38 & 1) == 0) || (uVar7 < uVar3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100893b0c);
      (*pcVar1)();
    }
    lVar5 = *unaff_x20;
    uVar3 = param_1 & 0x1ffffffffffffff;
    FUN_10060ea40(uVar3,param_2 & 0x1ffffffffffffff,lVar5,uVar6,uVar7);
    if (uVar3 == 1) {
      FUN_100893634(&local_a0,param_1 & 0x1ffffffffffffff);
      FUN_10088209c(&local_a0);
    }
    else {
      uVar4 = uVar7 - uVar6;
      if ((long)uVar7 < (long)uVar6) {
        uVar4 = uVar4 + *(long *)(lVar5 + 0x10);
      }
      if (uVar4 != uVar3) {
        FUN_100893298(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff,
                      PTR___swiftEmptyArrayStorage_100eae0d8);
        return;
      }
      uVar6 = *(ulong *)(lVar5 + 0x10);
      if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100893b10);
        (*pcVar1)();
      }
      FUN_100884f1c();
      uStack_78 = 0;
      local_80 = 0;
      uStack_68 = 0;
      uStack_70 = 0;
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
      local_5e = 0xff;
      local_60 = 0;
      FUN_100892720(&local_a0,uVar6 & 0xffffffff);
      _swift_release(lVar5);
      *unaff_x20 = (long)puVar2;
      unaff_x20[1] = 0;
      unaff_x20[2] = 0;
    }
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100893b04);
  (*pcVar1)();
}



/* Address: 0x100893b10 | FUN_100893b10 */

void FUN_100893b10(undefined8 param_1,undefined8 param_2)

{
  FUN_100882060(param_2,param_1);
  return;
}



/* Address: 0x100893b18 | FUN_100893b18 */

undefined8 FUN_100893b18(undefined8 param_1)

{
  ulong uVar1;
  long lVar2;
  byte bVar3;
  uint uVar4;
  code *pcVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  ushort uVar9;
  long *unaff_x20;
  undefined8 uVar10;
  
  lVar2 = *unaff_x20;
  uVar7 = *(uint *)(unaff_x20 + 3);
  bVar3 = *(byte *)((long)unaff_x20 + 0x1f);
  if (((uVar7 == *(uint *)(unaff_x20 + 4) &&
       (uint)*(ushort *)((long)unaff_x20 + 0x1c) == (uint)*(ushort *)((long)unaff_x20 + 0x24)) &&
       (ushort)*(byte *)((long)unaff_x20 + 0x1e) == (ushort)*(byte *)((long)unaff_x20 + 0x26)) &&
     (((bVar3 ^ *(byte *)((long)unaff_x20 + 0x27)) & 1) == 0)) {
LAB_100893b64:
    FUN_1000f8cac();
    uVar10 = 0;
  }
  else {
    uVar1 = *(long *)(lVar2 + 0x10) + 0x1ffffffff;
    uVar8 = uVar1 & (ulong)uVar7 + 1;
    if (uVar8 >> 0x20 != 0) {
LAB_100893c84:
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100893c88);
      (*pcVar5)();
    }
    uVar4 = (uint)((ulong)param_1 >> 0x20) & 0xffff;
    uVar9 = (ushort)((ulong)param_1 >> 0x30) & 0xff;
    if (uVar7 != (uint)param_1) goto LAB_100893bd4;
    if (*(ushort *)((long)unaff_x20 + 0x1c) != uVar4) goto LAB_100893bd4;
    if (*(byte *)((long)unaff_x20 + 0x1e) != uVar9) goto LAB_100893bd4;
    while (((byte)((ulong)param_1 >> 0x38) & 1) != bVar3) {
LAB_100893bd4:
      do {
        uVar7 = (uint)uVar8;
        if ((((*(uint *)(unaff_x20 + 4) == uVar7) && (*(ushort *)((long)unaff_x20 + 0x24) == 0xffff)
             ) && (*(byte *)((long)unaff_x20 + 0x26) == 0xff)) &&
           (((unaff_x20[1] <= (long)uVar8 ^ *(byte *)((long)unaff_x20 + 0x27)) & 1) == 0))
        goto LAB_100893b64;
        uVar6 = uVar1 & (uVar8 & 0xffffffff) + 1;
        if (uVar6 >> 0x20 != 0) goto LAB_100893c84;
        bVar3 = unaff_x20[1] <= (long)uVar8;
        uVar8 = uVar6;
      } while (((uVar7 != (uint)param_1) || (uVar4 != 0xffff)) || (uVar9 != 0xff));
    }
    FUN_1000f8cac();
    uVar10 = 1;
  }
  _swift_release(lVar2);
  return uVar10;
}



/* Address: 0x100893c88 | FUN_100893c88 */

void FUN_100893c88(undefined8 *param_1,undefined8 param_2)

{
  FUN_100892a8c(*param_1,*(undefined1 *)(param_1 + 1),param_2);
  return;
}



/* Address: 0x100893c9c | FUN_100893c9c */

undefined * FUN_100893c9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined1 *puVar4;
  
  if (param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893d5c);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_4 != 0) {
    CVar2.unknown = &DAT_100fe95a0;
    FUN_1000f7830(&DAT_100fe95a0,&DAT_100c809a0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_4,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_4;
    *(undefined8 *)(_Var3.unknown + 0x20) = param_1;
    *(undefined8 *)(_Var3.unknown + 0x28) = param_2;
    _Var3.unknown[0x30] = (char)param_3;
    param_4 = param_4 + -1;
    if (param_4 != 0) {
      puVar4 = _Var3.unknown + 0x48;
      do {
        FUN_1008820d0(param_1,param_2,param_3);
        *(undefined8 *)(puVar4 + -0x10) = param_1;
        *(undefined8 *)(puVar4 + -8) = param_2;
        *puVar4 = (char)param_3;
        param_4 = param_4 + -1;
        puVar4 = puVar4 + 0x18;
      } while (param_4 != 0);
    }
    FUN_1008820d0(param_1,param_2,param_3);
  }
  return _Var3.unknown;
}



/* Address: 0x100893d5c | FUN_100893d5c */

undefined * FUN_100893d5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined8 *puVar4;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100893e0c);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_3 != 0) {
    CVar2.unknown = &DAT_100fe9530;
    FUN_1000f7830(&DAT_100fe9530,&DAT_100c7fca0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_3,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_3;
    *(undefined8 *)(_Var3.unknown + 0x20) = param_1;
    *(undefined8 *)(_Var3.unknown + 0x28) = param_2;
    param_3 = param_3 + -1;
    if (param_3 != 0) {
      puVar4 = (undefined8 *)(_Var3.unknown + 0x38);
      do {
        FUN_100882050(param_1,param_2);
        puVar4[-1] = param_1;
        *puVar4 = param_2;
        puVar4 = puVar4 + 2;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
    }
    FUN_100882050(param_1,param_2);
  }
  return _Var3.unknown;
}



/* Address: 0x100893e0c | FUN_100893e0c */

void FUN_100893e0c(undefined8 param_1,undefined8 param_2)

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
  FUN_1000f8b08(&DAT_100fe9a00,&DAT_100c809b0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x100893ea8 | FUN_100893ea8 */

void FUN_100893ea8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_100893e0c(param_1,param_2,uVar1);
  return;
}



/* Address: 0x100893ef4 | FUN_100893ef4 */

undefined8 FUN_100893ef4(void)

{
  undefined8 unaff_x20;
  
  FUN_100893ea8();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x100893f30 | FUN_100893f30 */

void FUN_100893f30(void)

{
  FUN_100894fcc(PTR__swift_unknownObjectRelease_100eae458);
  return;
}



/* Address: 0x100893f3c | FUN_100893f3c */

void FUN_100893f3c(void)

{
  long unaff_x20;
  
  FUN_100891784(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100893f48 | FUN_100893f48 */

undefined8 FUN_100893f48(long param_1,long param_2,code *param_3,undefined8 param_4)

{
  long lVar1;
  char cVar2;
  long lVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  undefined *puVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  lVar3 = param_1 + 0x10;
  _swift_beginAccess(lVar3,auStack_68,0,0);
  if (*(char *)(param_1 + 0x18) == '\x01') {
    uVar9 = *(undefined8 *)(param_1 + 0x10);
    _swift_beginAccess(param_2 + 0x10,auStack_80,1,0);
    uVar5 = 0;
    if (*(char *)(param_2 + 0x18) == -1) {
      *(undefined8 *)(param_2 + 0x10) = uVar9;
      *(undefined1 *)(param_2 + 0x18) = 1;
      _swift_beginAccess(param_2 + 0x30,auStack_98,1,0);
      uVar5 = *(undefined8 *)(param_2 + 0x30);
      *(undefined8 *)(param_2 + 0x38) = 0;
      *(undefined8 *)(param_2 + 0x40) = 0;
      *(undefined8 *)(param_2 + 0x30) = 0;
      _swift_errorRetain(uVar9);
    }
  }
  else {
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_release(param_4);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1008942fc);
      (*pcVar10)();
    }
    (*param_3)();
    uVar7 = *(ulong *)(lVar3 + 0x20);
    lVar1 = *(long *)(lVar3 + 0x28);
    uVar4 = uVar7;
    _swift_getObjectType();
    pcVar10 = *(code **)(lVar1 + 0x10);
    _swift_unknownObjectRetain(uVar7);
    (*pcVar10)(uVar4,lVar1);
    _swift_unknownObjectRelease(uVar7);
    if ((uVar4 & 1) == 0) {
      puVar6 = &DAT_100f09f20;
      _swift_allocObject(&DAT_100f09f20,0x28,7);
      *(code **)(puVar6 + 0x10) = thunk_FUN_100894590;
      *(long *)(puVar6 + 0x18) = param_2;
      *(long *)(puVar6 + 0x20) = lVar3;
      uVar7 = *(ulong *)(lVar3 + 0x20);
      lVar1 = *(long *)(lVar3 + 0x28);
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar1 + 0x10);
      _swift_retain_n(param_2,4);
      _swift_retain_n(lVar3,2);
      uVar4 = uVar7;
      (*pcVar10)(uVar7,lVar1);
      if ((uVar4 & 1) == 0) {
        puVar8 = &DAT_100f09f48;
        _swift_allocObject(&DAT_100f09f48,0x28,7);
        *(long *)(puVar8 + 0x10) = lVar3;
        *(code **)(puVar8 + 0x18) = thunk_FUN_1006225d4;
        *(undefined **)(puVar8 + 0x20) = puVar6;
        pcVar10 = *(code **)(lVar1 + 0x18);
        _swift_retain(lVar3);
        _swift_retain(puVar6);
        (*pcVar10)(thunk_FUN_100653138,puVar8,uVar7,lVar1);
        _swift_release(puVar8);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
      }
      else {
        _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
        cVar2 = *(char *)(lVar3 + 0x18);
        if (cVar2 == -1) {
          _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
          FUN_10064967c(thunk_FUN_1006225d4,puVar6);
          _swift_endAccess(auStack_98);
        }
        else {
          uVar5 = *(undefined8 *)(lVar3 + 0x10);
          FUN_100308524(uVar5,cVar2);
          FUN_100892a8c(uVar5,cVar2,param_2);
          FUN_100308538(uVar5,cVar2);
        }
        FUN_1006486f8(0,0,0);
        FUN_100004550(0,0);
        _swift_release_n(lVar3,2);
        _swift_release_n(param_2,2);
        _swift_release(puVar6);
        _swift_bridgeObjectRelease(0);
      }
    }
    else {
      puVar6 = &DAT_100f09f70;
      _swift_allocObject(&DAT_100f09f70,0x20,7);
      *(long *)(puVar6 + 0x10) = param_2;
      *(long *)(puVar6 + 0x18) = lVar3;
      _swift_beginAccess(lVar3 + 0x10,auStack_80,0,0);
      if (*(char *)(lVar3 + 0x18) != -1) {
        uVar5 = *(undefined8 *)(lVar3 + 0x10);
        FUN_100630328(uVar5);
        _swift_retain(param_2);
        _swift_release(puVar6);
        return uVar5;
      }
      _swift_beginAccess(lVar3 + 0x30,auStack_98,0x21,0);
      _swift_retain(param_2);
      _swift_retain(lVar3);
      FUN_10064967c(FUN_100894fc4,puVar6);
      _swift_endAccess(auStack_98);
      _swift_release(puVar6);
      param_2 = lVar3;
    }
    _swift_release(param_2);
    uVar5 = 0;
  }
  return uVar5;
}



/* Address: 0x1008942fc | FUN_1008942fc */

undefined * FUN_1008942fc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  undefined *puVar6;
  code *pcVar7;
  ulong uVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar1 = &DAT_100f09ea8;
  _swift_allocObject(&DAT_100f09ea8,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_2;
  *(undefined8 *)(puVar1 + 0x18) = param_3;
  puVar2 = &DAT_100fe97c8;
  FUN_1000f7830(&DAT_100fe97c8,&DAT_100c803b0);
  _swift_allocObject();
  lVar5 = *(long *)(param_1 + 0x28);
  uVar8 = *(ulong *)(param_1 + 0x20);
  *(undefined8 *)(puVar2 + 0x28) = *(undefined8 *)(param_1 + 0x28);
  *(ulong *)(puVar2 + 0x20) = uVar8;
  *(undefined8 *)(puVar2 + 0x10) = 0;
  puVar2[0x18] = 0xff;
  *(undefined8 *)(puVar2 + 0x38) = 0;
  *(undefined8 *)(puVar2 + 0x40) = 0;
  *(undefined8 *)(puVar2 + 0x30) = 0;
  puVar3 = &DAT_100f09ed0;
  _swift_allocObject(&DAT_100f09ed0,0x30,7);
  *(long *)(puVar3 + 0x10) = param_1;
  *(code **)(puVar3 + 0x18) = FUN_1000386a0;
  *(undefined **)(puVar3 + 0x20) = puVar1;
  *(undefined **)(puVar3 + 0x28) = puVar2;
  uVar4 = uVar8;
  _swift_getObjectType();
  pcVar7 = *(code **)(lVar5 + 0x10);
  _swift_retain_n(param_1,2);
  _swift_retain_n(puVar1,2);
  _swift_retain_n(puVar2,2);
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar8);
  uVar8 = uVar4;
  (*pcVar7)(uVar4,lVar5);
  if ((uVar8 & 1) == 0) {
    puVar6 = &DAT_100f09ef8;
    _swift_allocObject(&DAT_100f09ef8,0x28,7);
    *(long *)(puVar6 + 0x10) = param_1;
    *(code **)(puVar6 + 0x18) = FUN_100894fa0;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar7 = *(code **)(lVar5 + 0x18);
    _swift_retain(param_1);
    _swift_retain(puVar3);
    (*pcVar7)(thunk_FUN_100653138,puVar6,uVar4,lVar5);
    _swift_release(puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
  }
  else {
    _swift_beginAccess(param_1 + 0x10,auStack_78,0,0);
    if (*(char *)(param_1 + 0x18) == -1) {
      _swift_beginAccess(param_1 + 0x30,auStack_90,0x21,0);
      FUN_10064967c(FUN_100894fa0,puVar3);
      _swift_endAccess(auStack_90);
      lVar5 = 0;
      puVar6 = (undefined *)0x0;
      param_2 = 0;
    }
    else {
      _swift_retain(param_3);
      lVar5 = param_1;
      puVar6 = puVar2;
      FUN_100893f48(param_1,puVar2,param_2,param_3);
      _swift_release(param_3);
    }
    FUN_1006486f8(lVar5,puVar6,param_2);
    FUN_100004550(lVar5,puVar6);
    _swift_release(puVar2);
    _swift_release_n(puVar1,2);
    _swift_release(param_1);
    _swift_release(puVar3);
    _swift_bridgeObjectRelease(param_2);
  }
  return puVar2;
}


