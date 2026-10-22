/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a3fc9c | FUN_100a3fc9c */

void FUN_100a3fc9c(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  param_1[0x28] = 6;
  return;
}



/* Address: 0x100a3fcb0 | thunk_FUN_100a3fcb4 */

void thunk_FUN_100a3fcb4(void)

{
  FUN_100a3fcb4();
  return;
}



/* Address: 0x100a3fcb4 | FUN_100a3fcb4 */

undefined8 FUN_100a3fcb4(long param_1,long param_2)

{
  long *plVar1;
  code *pcVar2;
  long lVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined1 auStack_110 [48];
  long local_e0;
  ulong uStack_d8;
  long local_d0;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  long local_a0;
  ulong uStack_98;
  long lStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  
  if (param_1 == param_2) {
    uVar4 = 1;
  }
  else {
    if (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10)) {
      uVar7 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar9 = 0xffffffffffffffff;
      if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
        uVar9 = ~(-1L << (uVar7 & 0x3f));
      }
      uVar9 = uVar9 & *(ulong *)(param_1 + 0x40);
      _swift_bridgeObjectRetain_n(param_1,2);
      _swift_bridgeObjectRetain(param_2);
      lVar3 = 0;
      do {
        if (uVar9 == 0) {
          do {
            lVar8 = lVar3 + 1;
            if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)SoftwareBreakpoint(1,0x100a3fec0);
              (*pcVar2)();
            }
            if ((long)(uVar7 + 0x3f >> 6) <= lVar8) goto LAB_100a3fe60;
            uVar9 = ((ulong *)(param_1 + 0x40))[lVar8];
            lVar3 = lVar3 + 1;
          } while (uVar9 == 0);
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
        }
        else {
          uVar5 = (uVar9 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar9 & 0x5555555555555555) << 1;
          uVar5 = (uVar5 & 0xcccccccccccccccc) >> 2 | (uVar5 & 0x3333333333333333) << 2;
          uVar5 = (uVar5 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar5 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar5 = (uVar5 & 0xff00ff00ff00ff00) >> 8 | (uVar5 & 0xff00ff00ff00ff) << 8;
          uVar5 = (uVar5 & 0xffff0000ffff0000) >> 0x10 | (uVar5 & 0xffff0000ffff) << 0x10;
          uVar5 = uVar5 >> 0x20 | uVar5 << 0x20;
          uVar9 = uVar9 - 1 & uVar9;
          lVar8 = lVar3;
        }
        uVar6 = LZCOUNT(uVar5) | lVar8 << 6;
        plVar1 = (long *)(*(long *)(param_1 + 0x30) + uVar6 * 0x10);
        local_e0 = *plVar1;
        uVar5 = plVar1[1];
        uStack_d8 = uVar5;
        FUN_100a417a0(*(long *)(param_1 + 0x38) + uVar6 * 0x30,&local_d0);
        uVar6 = uStack_d8;
        lVar3 = local_e0;
        uStack_98 = CONCAT71(uStack_c7,uStack_c8);
        lStack_90 = CONCAT71(uStack_bf,uStack_c0);
        local_a0 = local_d0;
        uStack_88 = uStack_b8;
        uStack_7f = uStack_af;
        local_87 = local_b7;
        uStack_80 = uStack_b0;
        _swift_bridgeObjectRetain(uVar5);
        if (uVar6 == 0) {
LAB_100a3fe60:
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          return 1;
        }
        uStack_d8 = uStack_98;
        local_e0 = local_a0;
        uStack_c8 = uStack_88;
        local_d0 = lStack_90;
        uStack_bf = (undefined7)uStack_7f;
        uStack_b8 = (undefined1)((ulong)uStack_7f >> 0x38);
        uStack_c7 = local_87;
        uStack_c0 = uStack_80;
        uVar5 = uVar6;
        FUN_100071370(lVar3);
        _swift_bridgeObjectRelease(uVar6);
        if ((uVar5 & 1) == 0) {
          _swift_bridgeObjectRelease(param_2);
          _swift_bridgeObjectRelease_n(param_1,2);
          FUN_100a3e6f0(&local_e0);
          goto LAB_100a3fe98;
        }
        FUN_100a417a0(*(long *)(param_2 + 0x38) + lVar3 * 0x30,auStack_110);
        uVar5 = 0;
        FUN_100a4119c(auStack_110,&local_e0);
        FUN_100a3e6f0(auStack_110);
        FUN_100a3e6f0(&local_e0);
        lVar3 = lVar8;
      } while ((uVar5 & 1) != 0);
      _swift_bridgeObjectRelease(param_2);
      _swift_bridgeObjectRelease_n(param_1,2);
    }
LAB_100a3fe98:
    uVar4 = 0;
  }
  return uVar4;
}



/* Address: 0x100a3fec0 | FUN_100a3fec0 */

void FUN_100a3fec0(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100a3fcb4(*param_1,*param_2);
  return;
}



/* Address: 0x100a3fecc | FUN_100a3fecc */

void FUN_100a3fecc(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined1 uStack_58;
  undefined7 local_57;
  undefined1 uStack_50;
  undefined8 uStack_4f;
  
  uVar1 = *(undefined8 *)((long)param_1 + 0x21);
  uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
  uStack_98 = param_1[1];
  local_a0 = *param_1;
  uStack_90 = param_1[2];
  uStack_88 = (undefined1)param_1[3];
  local_87 = (undefined7)((ulong)param_1[3] >> 8);
  uStack_7f._7_1_ = (char)((ulong)uVar1 >> 0x38);
  uStack_7f = uVar1;
  if (uStack_7f._7_1_ == -1) {
    FUN_1000fb4c4(&local_a0,&DAT_100ff64f0,&DAT_100c8fb28);
    FUN_100a40c58(&local_70,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_1000fb4c4(&local_70,&DAT_100ff64f0,&DAT_100c8fb28);
  }
  else {
    uStack_68 = param_1[1];
    local_70 = *param_1;
    uStack_60 = param_1[2];
    uStack_58 = (undefined1)param_1[3];
    uStack_4f = *(undefined8 *)((long)param_1 + 0x21);
    local_57 = (undefined7)*(undefined8 *)((long)param_1 + 0x19);
    uStack_50 = (undefined1)((ulong)*(undefined8 *)((long)param_1 + 0x19) >> 0x38);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    local_a0 = *unaff_x20;
    FUN_100a40d40(&local_70,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = local_a0;
  }
  return;
}



/* Address: 0x100a3ffb8 | FUN_100a3ffb8 */

undefined1  [16] FUN_100a3ffb8(undefined8 *param_1,long param_2,ulong param_3)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 auVar9 [16];
  
  puVar1 = (undefined8 *)0x70;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x70);
  }
  else {
    _swift_coroFrameAlloc(0x70,0x613);
  }
  *param_1 = puVar1;
  puVar1[0xc] = param_3;
  puVar1[0xd] = unaff_x20;
  puVar1[0xb] = param_2;
  lVar3 = *unaff_x20;
  if (*(long *)(lVar3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar3);
    FUN_100071370(param_2);
    if ((param_3 & 1) != 0) {
      FUN_100a417a0(*(long *)(lVar3 + 0x38) + param_2 * 0x30,puVar1);
      _swift_bridgeObjectRelease(lVar3);
      puVar1[9] = &DAT_100f2a720;
      puVar1[10] = &PTR_PTR_100f2a530;
      puVar2 = &DAT_100f2a518;
      _swift_allocObject(&DAT_100f2a518,0x39,7);
      puVar1[6] = puVar2;
      uVar5 = puVar1[1];
      uVar4 = *puVar1;
      uVar7 = puVar1[3];
      uVar6 = puVar1[2];
      uVar8 = *(undefined8 *)((long)puVar1 + 0x19);
      *(undefined8 *)(puVar2 + 0x31) = *(undefined8 *)((long)puVar1 + 0x21);
      *(undefined8 *)(puVar2 + 0x29) = uVar8;
      *(undefined8 *)(puVar2 + 0x18) = uVar5;
      *(undefined8 *)(puVar2 + 0x10) = uVar4;
      *(undefined8 *)(puVar2 + 0x28) = uVar7;
      *(undefined8 *)(puVar2 + 0x20) = uVar6;
      goto LAB_100a4009c;
    }
    _swift_bridgeObjectRelease(lVar3);
  }
  puVar1[10] = 0;
  puVar1[7] = 0;
  puVar1[6] = 0;
  puVar1[9] = 0;
  puVar1[8] = 0;
LAB_100a4009c:
  auVar9._8_8_ = puVar1 + 6;
  auVar9._0_8_ = FUN_100a400bc;
  return auVar9;
}



/* Address: 0x100a400bc | FUN_100a400bc */

void FUN_100a400bc(undefined8 *param_1)

{
  void *pvVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48;
  
  pvVar1 = (void *)*param_1;
  FUN_1000f8cac((long)pvVar1 + 0x30,pvVar1,&DAT_100ff6500,&DAT_100c8fb38);
  lVar3 = *(long *)((long)pvVar1 + 0x18);
  uVar2 = *(undefined8 *)((long)pvVar1 + 0x60);
  if (lVar3 == 0) {
    _swift_bridgeObjectRetain(uVar2);
    FUN_1000fb4c4(pvVar1,&DAT_100ff6500,&DAT_100c8fb38);
    uStack_68 = 0;
    local_70 = 0;
    uStack_58 = 0;
    uStack_60 = 0;
    local_50 = 0;
    local_48 = 0xff;
  }
  else {
    lVar4 = *(long *)((long)pvVar1 + 0x20);
    FUN_100004640(pvVar1,lVar3);
    pcVar5 = *(code **)(lVar4 + 8);
    _swift_bridgeObjectRetain(uVar2);
    (*pcVar5)(&local_70,lVar3,lVar4);
    FUN_100004594(pvVar1);
  }
  FUN_100a3fecc(&local_70,*(undefined8 *)((long)pvVar1 + 0x58),*(undefined8 *)((long)pvVar1 + 0x60))
  ;
  FUN_1000fb4c4((long)pvVar1 + 0x30,&DAT_100ff6500,&DAT_100c8fb38);
  _free(pvVar1);
  return;
}



/* Address: 0x100a401b8 | FUN_100a401b8 */

void FUN_100a401b8(undefined8 *param_1,long param_2,ulong param_3,long param_4)

{
  if (*(long *)(param_4 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_4);
    FUN_100071370(param_2);
    if ((param_3 & 1) != 0) {
      FUN_100a417a0(*(long *)(param_4 + 0x38) + param_2 * 0x30,param_1);
      _swift_bridgeObjectRelease(param_4);
      return;
    }
    _swift_bridgeObjectRelease(param_4);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  return;
}



/* Address: 0x100a4024c | FUN_100a4024c */

void FUN_100a4024c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 auStack_60 [48];
  
  FUN_1000f8cac(param_3,auStack_60,&DAT_100ff64f0,&DAT_100c8fb28);
  _swift_bridgeObjectRetain(param_2);
  FUN_100a3fecc(auStack_60,param_1,param_2);
  return;
}



/* Address: 0x100a402b4 | FUN_100a402b4 */

void FUN_100a402b4(code *param_1,undefined8 param_2,long param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  code *pcVar5;
  bool bVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 local_d0;
  long lStack_c8;
  undefined8 local_c0;
  undefined1 uStack_b8;
  undefined7 uStack_b7;
  undefined1 uStack_b0;
  undefined7 uStack_af;
  undefined1 uStack_a8;
  undefined7 local_a7;
  undefined1 uStack_a0;
  undefined8 uStack_9f;
  undefined8 local_90;
  long lStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  uVar8 = 1L << ((ulong)*(byte *)(param_3 + 0x20) & 0x3f);
  uVar10 = 0xffffffffffffffff;
  if ((*(byte *)(param_3 + 0x20) & 0x3f) < 6) {
    uVar10 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar10 = uVar10 & *(ulong *)(param_3 + 0x40);
  _swift_bridgeObjectRetain(param_3);
  lVar9 = 0;
  while( true ) {
    for (; uVar10 != 0; uVar10 = uVar10 - 1 & uVar10) {
      uVar7 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar7 = (uVar7 & 0xcccccccccccccccc) >> 2 | (uVar7 & 0x3333333333333333) << 2;
      uVar7 = (uVar7 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar7 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar7 = (uVar7 & 0xff00ff00ff00ff00) >> 8 | (uVar7 & 0xff00ff00ff00ff) << 8;
      uVar7 = (uVar7 & 0xffff0000ffff0000) >> 0x10 | (uVar7 & 0xffff0000ffff) << 0x10;
      uVar7 = LZCOUNT(uVar7 >> 0x20 | uVar7 << 0x20) | lVar9 << 6;
      puVar1 = (undefined8 *)(*(long *)(param_3 + 0x30) + uVar7 * 0x10);
      local_d0 = *puVar1;
      lVar2 = puVar1[1];
      lStack_c8 = lVar2;
      FUN_100a417a0(*(long *)(param_3 + 0x38) + uVar7 * 0x30,&local_c0);
      lVar4 = lStack_c8;
      uVar3 = local_d0;
      lStack_88 = CONCAT71(uStack_b7,uStack_b8);
      uStack_80 = CONCAT71(uStack_af,uStack_b0);
      local_90 = local_c0;
      uStack_78 = uStack_a8;
      uStack_6f = uStack_9f;
      local_77 = local_a7;
      uStack_70 = uStack_a0;
      _swift_bridgeObjectRetain(lVar2);
      if (lVar4 == 0) goto LAB_100a403dc;
      lStack_c8 = lStack_88;
      local_d0 = local_90;
      uStack_b8 = uStack_78;
      local_c0 = uStack_80;
      uStack_af = (undefined7)uStack_6f;
      uStack_a8 = (undefined1)((ulong)uStack_6f >> 0x38);
      uStack_b7 = local_77;
      uStack_b0 = uStack_70;
      (*param_1)(uVar3,lVar4,&local_d0);
      _swift_bridgeObjectRelease(lVar4);
      FUN_100a3e6f0(&local_d0);
    }
    bVar6 = SCARRY8(lVar9,1);
    lVar9 = lVar9 + 1;
    if (bVar6) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100a40408);
      (*pcVar5)();
    }
    if ((long)(uVar8 + 0x3f >> 6) <= lVar9) break;
    uVar10 = ((ulong *)(param_3 + 0x40))[lVar9];
  }
LAB_100a403dc:
  _swift_release(param_3);
  return;
}



/* Address: 0x100a40408 | FUN_100a40408 */

void FUN_100a40408(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 local_38;
  
  _swift_bridgeObjectRetain();
  uVar1 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar1);
  local_38 = *unaff_x20;
  FUN_100a41ba4(param_1,FUN_100a40fc0,0,uVar1,&local_38);
  _swift_bridgeObjectRelease(param_1);
  *unaff_x20 = local_38;
  return;
}



/* Address: 0x100a40478 | FUN_100a40478 */

bool FUN_100a40478(long param_1)

{
  return *(long *)(param_1 + 0x10) == 0;
}



/* Address: 0x100a40488 | FUN_100a40488 */

void FUN_100a40488(__int64 param_1)

{
  Dictionary DVar1;
  
  DVar1.unknown = &DAT_100ff6510;
  FUN_1000f7830(&DAT_100ff6510,&DAT_100c8fb48);
  Swift::Dictionary::reserveCapacity(param_1,DVar1);
  return;
}



/* Address: 0x100a404c0 | FUN_100a404c0 */

void FUN_100a404c0(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  long local_70;
  ulong local_68;
  undefined8 local_60 [5];
  undefined1 local_38;
  
  local_60[0] = 0;
  local_38 = 1;
  _swift_getAtKeyPath(&local_70,local_60,param_2);
  FUN_100a3e6f0(local_60);
  if (*(long *)(param_3 + 0x10) != 0) {
    _swift_bridgeObjectRetain(param_3);
    uVar1 = local_68;
    FUN_100071370(local_70);
    if ((uVar1 & 1) != 0) {
      FUN_100a417a0(*(long *)(param_3 + 0x38) + local_70 * 0x30,param_1);
      _swift_bridgeObjectRelease(local_68);
      goto LAB_100a40568;
    }
    _swift_bridgeObjectRelease(param_3);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 5) = 0xff;
  param_3 = local_68;
LAB_100a40568:
  _swift_bridgeObjectRelease(param_3);
  return;
}



/* Address: 0x100a40584 | FUN_100a40584 */

void FUN_100a40584(undefined8 param_1,undefined8 param_2)

{
  FUN_100a41ef0();
  _swift_release(param_2);
  return;
}



/* Address: 0x100a405a8 | FUN_100a405a8 */

undefined1  [16] FUN_100a405a8(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 *unaff_x20;
  undefined1 auVar2 [16];
  
  pvVar1 = (void *)0x70;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x70);
  }
  else {
    _swift_coroFrameAlloc(0x70,0xa825);
  }
  *param_1 = pvVar1;
  *(undefined8 *)((long)pvVar1 + 0x60) = param_2;
  *(undefined8 **)((long)pvVar1 + 0x68) = unaff_x20;
  FUN_100a404c0(pvVar1,param_2,*unaff_x20);
  auVar2._8_8_ = pvVar1;
  auVar2._0_8_ = FUN_100a40618;
  return auVar2;
}



/* Address: 0x100a40618 | FUN_100a40618 */

void FUN_100a40618(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  void *pvVar2;
  
  pvVar2 = (void *)*param_1;
  if ((param_2 & 1) == 0) {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x60);
    _swift_retain(uVar1);
    FUN_100a41ef0(pvVar2,uVar1);
    _swift_release(uVar1);
  }
  else {
    uVar1 = *(undefined8 *)((long)pvVar2 + 0x60);
    FUN_1000f8cac(pvVar2,(long)pvVar2 + 0x30,&DAT_100ff64f0,&DAT_100c8fb28);
    _swift_retain(uVar1);
    FUN_100a41ef0((long)pvVar2 + 0x30,uVar1);
    _swift_release(uVar1);
    FUN_1000fb4c4(pvVar2,&DAT_100ff64f0,&DAT_100c8fb28);
  }
  _free(pvVar2);
  return;
}



/* Address: 0x100a406c4 | FUN_100a406c4 */

/* WARNING: Removing unreachable block (ram,0x000100a40758) */

void FUN_100a406c4(undefined8 *param_1,long param_2)

{
  _DictionaryStorage *this;
  undefined *capacity;
  undefined *local_38;
  
  capacity = *(undefined **)(param_2 + 0x10);
  local_38 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  if (capacity != (undefined *)0x0) {
    this = (_DictionaryStorage *)&DAT_100ff64e0;
    FUN_1000f7830(&DAT_100ff64e0,&DAT_100c8fb20);
    Swift::_DictionaryStorage::_allocate(this,(__int64)capacity);
    local_38 = capacity;
  }
  FUN_100a3e2a0(param_2,1,&local_38);
  *param_1 = local_38;
  return;
}



/* Address: 0x100a40778 | thunk_FUN_100a41874 */

void thunk_FUN_100a41874(void)

{
  FUN_100a41874();
  return;
}



/* Address: 0x100a4077c | FUN_100a4077c */

void FUN_100a4077c(undefined1 *param_1,undefined1 *param_2)

{
  FUN_100a41874(*param_1,*(undefined8 *)(param_1 + 8),*(undefined8 *)(param_1 + 0x10),*param_2,
                *(undefined8 *)(param_2 + 8),*(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x100a40794 | FUN_100a40794 */

void FUN_100a40794(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff64e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90460;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90460,&DAT_100f2ab30);
  DAT_100ff64e8 = pTVar1;
  return;
}



/* Address: 0x100a407d4 | FUN_100a407d4 */

void FUN_100a407d4(void)

{
  __RawDictionaryStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  long lVar11;
  long lVar12;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  this = (_DictionaryStorage *)&DAT_100ff64e0;
  FUN_1000f7830(&DAT_100ff64e0,&DAT_100c8fb20);
  original = (__RawDictionaryStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_DictionaryStorage::_copy(this,original);
  if (*(long *)(original + 0x10) == 0) {
    _swift_release(original);
LAB_100a4095c:
    *unaff_x20 = (long)p_Var6;
    return;
  }
  p_Var1 = original + 0x40;
  uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
  if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x40) {
    _memmove(p_Var6 + 0x40,p_Var1,uVar7 << 3);
  }
  lVar11 = 0;
  *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
  uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar7 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar7 = ~(-1L << (uVar8 & 0x3f));
  }
  uVar7 = uVar7 & *(ulong *)(original + 0x40);
  if (uVar7 == 0) goto LAB_100a408bc;
  do {
    uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
    uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
    uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
    uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
    uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
    uVar7 = uVar7 - 1 & uVar7;
    while( true ) {
      uVar9 = LZCOUNT(uVar9) | lVar11 << 6;
      lVar12 = uVar9 * 0x10;
      puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar12);
      uVar3 = *puVar2;
      uVar4 = puVar2[1];
      lVar10 = uVar9 * 0x30;
      FUN_100a417a0(*(long *)(original + 0x38) + lVar10,&local_90);
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar12);
      *puVar2 = uVar3;
      puVar2[1] = uVar4;
      puVar2 = (undefined8 *)(*(long *)(p_Var6 + 0x38) + lVar10);
      puVar2[1] = uStack_88;
      *puVar2 = local_90;
      puVar2[3] = CONCAT71(local_77,uStack_78);
      puVar2[2] = uStack_80;
      *(undefined8 *)((long)puVar2 + 0x21) = uStack_6f;
      *(ulong *)((long)puVar2 + 0x19) = CONCAT17(uStack_70,local_77);
      _swift_bridgeObjectRetain(uVar4);
      if (uVar7 != 0) break;
LAB_100a408bc:
      do {
        lVar10 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x100a40984);
          (*pcVar5)();
        }
        if ((long)(uVar8 + 0x3f >> 6) <= lVar10) {
          _swift_release(original);
          goto LAB_100a4095c;
        }
        uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar7 == 0);
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      lVar11 = lVar10;
    }
  } while( true );
}



/* Address: 0x100a40984 | FUN_100a40984 */

void FUN_100a40984(long param_1,bool param_2)

{
  String *pSVar1;
  __int64 capacity;
  char *pcVar2;
  void *pvVar3;
  String SVar4;
  bool bVar5;
  code *pcVar6;
  _DictionaryStorage *this;
  __RawDictionaryStorage *p_Var7;
  undefined8 *puVar8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawDictionaryStorage *original;
  ulong uVar15;
  __RawDictionaryStorage *p_Var16;
  long lVar17;
  undefined1 auStack_d8 [72];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  original = (__RawDictionaryStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_DictionaryStorage *)&DAT_100ff64e0;
  FUN_1000f7830(&DAT_100ff64e0,&DAT_100c8fb20);
  p_Var7 = original;
  Swift::_DictionaryStorage::_resize(this,original,capacity,param_2);
  if (*(long *)(original + 0x10) == 0) {
LAB_100a40c24:
    _swift_release(original);
LAB_100a40c2c:
    *unaff_x20 = (long)p_Var7;
    return;
  }
  p_Var16 = original + 0x40;
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar15 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar15 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar15 = uVar15 & *(ulong *)p_Var16;
  lVar11 = 0;
  do {
    if (uVar15 == 0) {
      do {
        lVar17 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a40c54);
          (*pcVar6)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar17) {
          if ((param_2 & 1U) == 0) {
            _swift_release(original);
            goto LAB_100a40c2c;
          }
          uVar15 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var16 = -1L << (uVar15 & 0x3f);
          }
          else {
            _bzero(p_Var16,uVar15 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_100a40c24;
        }
        uVar15 = *(ulong *)(p_Var16 + lVar17 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar15 == 0);
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
    }
    else {
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar15 = uVar15 - 1 & uVar15;
      lVar17 = lVar11;
    }
    uVar10 = LZCOUNT(uVar10) | lVar17 << 6;
    pSVar1 = (String *)(*(long *)(original + 0x30) + uVar10 * 0x10);
    pcVar2 = pSVar1->str;
    pvVar3 = pSVar1->bridgeObject;
    SVar4 = *pSVar1;
    puVar8 = (undefined8 *)(*(long *)(original + 0x38) + uVar10 * 0x30);
    if ((param_2 & 1U) == 0) {
      FUN_100a417a0(puVar8,&local_90);
      _swift_bridgeObjectRetain(pvVar3);
    }
    else {
      uStack_88 = puVar8[1];
      local_90 = *puVar8;
      uStack_80 = puVar8[2];
      uStack_6f = *(undefined8 *)((long)puVar8 + 0x21);
      uStack_70 = (undefined1)((ulong)*(undefined8 *)((long)puVar8 + 0x19) >> 0x38);
      uStack_78 = (undefined1)puVar8[3];
      local_77 = (undefined7)((ulong)puVar8[3] >> 8);
    }
    Swift::Hasher::init(*(__int64 *)(p_Var7 + 0x28));
    into.unknown = auStack_d8;
    Swift::String::hash(into,SVar4);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var7[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar5 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar5)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100a40c58);
          (*pcVar6)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar5 = (bool)(uVar9 == uVar10 | bVar5);
      } while (*(ulong *)(p_Var7 + uVar12 * 8 + 0x40) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var7 + uVar12 * 8 + 0x40);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var7 + uVar12 + 0x40) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var7 + uVar12 + 0x40);
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x30) + uVar10 * 0x10);
    *puVar8 = pcVar2;
    puVar8[1] = pvVar3;
    puVar8 = (undefined8 *)(*(long *)(p_Var7 + 0x38) + uVar10 * 0x30);
    *(undefined8 *)((long)puVar8 + 0x21) = uStack_6f;
    *(ulong *)((long)puVar8 + 0x19) = CONCAT17(uStack_70,local_77);
    puVar8[1] = uStack_88;
    *puVar8 = local_90;
    puVar8[3] = CONCAT71(local_77,uStack_78);
    puVar8[2] = uStack_80;
    *(long *)(p_Var7 + 0x10) = *(long *)(p_Var7 + 0x10) + 1;
    lVar11 = lVar17;
  } while( true );
}



/* Address: 0x100a40c58 | FUN_100a40c58 */

void FUN_100a40c58(undefined8 *param_1,long param_2,ulong param_3)

{
  int iVar1;
  undefined8 *puVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  _swift_bridgeObjectRetain(lVar3);
  FUN_100071370();
  _swift_bridgeObjectRelease(lVar3);
  if ((param_3 & 1) == 0) {
    param_1[4] = 0;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 5) = 0xff;
  }
  else {
    iVar1 = (int)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar3 = *unaff_x20;
    if (iVar1 == 0) {
      FUN_100a407d4();
    }
    _swift_bridgeObjectRelease(*(undefined8 *)(*(long *)(lVar3 + 0x30) + param_2 * 0x10 + 8));
    puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x38) + param_2 * 0x30);
    uVar4 = *puVar2;
    uVar6 = puVar2[3];
    uVar5 = puVar2[2];
    param_1[1] = puVar2[1];
    *param_1 = uVar4;
    param_1[3] = uVar6;
    param_1[2] = uVar5;
    uVar4 = *(undefined8 *)((long)puVar2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)puVar2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar4;
    FUN_1005c1ec8(param_2,lVar3);
    *unaff_x20 = lVar3;
  }
  return;
}



/* Address: 0x100a40d40 | FUN_100a40d40 */

void FUN_100a40d40(undefined8 *param_1,ulong param_2,ulong param_3,uint param_4)

{
  ulong *puVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  
  lVar9 = *unaff_x20;
  uVar3 = param_2;
  uVar4 = param_3;
  FUN_100071370();
  lVar5 = *(long *)(lVar9 + 0x10);
  uVar7 = (ulong)~(uint)uVar4 & 1;
  lVar6 = lVar5 + uVar7;
  if (SCARRY8(lVar5,uVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a40e18);
    (*pcVar2)();
  }
  if (*(long *)(lVar9 + 0x18) < lVar6) {
    FUN_100a40984(lVar6,param_4 & 1);
    uVar3 = param_2;
    uVar7 = param_3;
    FUN_100071370();
    if (((uint)uVar4 & 1) != ((uint)uVar7 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a40de0);
      (*pcVar2)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100a407d4();
    lVar6 = *unaff_x20;
    goto joined_r0x000100a40e2c;
  }
  lVar6 = *unaff_x20;
joined_r0x000100a40e2c:
  if ((uVar4 & 1) != 0) {
    FUN_100a42a2c(param_1,*(long *)(lVar6 + 0x38) + uVar3 * 0x30);
    return;
  }
  lVar5 = lVar6 + (uVar3 >> 6) * 8;
  *(ulong *)(lVar5 + 0x40) = *(ulong *)(lVar5 + 0x40) | 1L << (uVar3 & 0x3f);
  puVar1 = (ulong *)(*(long *)(lVar6 + 0x30) + uVar3 * 0x10);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar8 = (undefined8 *)(*(long *)(lVar6 + 0x38) + uVar3 * 0x30);
  uVar11 = param_1[1];
  uVar10 = *param_1;
  uVar13 = param_1[3];
  uVar12 = param_1[2];
  uVar14 = *(undefined8 *)((long)param_1 + 0x19);
  *(undefined8 *)((long)puVar8 + 0x21) = *(undefined8 *)((long)param_1 + 0x21);
  *(undefined8 *)((long)puVar8 + 0x19) = uVar14;
  puVar8[1] = uVar11;
  *puVar8 = uVar10;
  puVar8[3] = uVar13;
  puVar8[2] = uVar12;
  if (SCARRY8(*(long *)(lVar6 + 0x10),1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a40ea4);
    (*pcVar2)();
  }
  *(long *)(lVar6 + 0x10) = *(long *)(lVar6 + 0x10) + 1;
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100a40ea4 | FUN_100a40ea4 */

void FUN_100a40ea4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100a40ec0();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x100a40ec0 | FUN_100a40ec0 */

undefined * FUN_100a40ec0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a40fc0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff65e0;
    FUN_1000f7830(&DAT_100ff65e0,&DAT_100c90240);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x19;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 3) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 3);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 8 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 3);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_release(param_4);
  return puVar3;
}



/* Address: 0x100a40fc0 | FUN_100a40fc0 */

void FUN_100a40fc0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_100a417a0(param_2 + 2,param_1 + 2);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  return;
}



/* Address: 0x100a40ff8 | FUN_100a40ff8 */

void FUN_100a40ff8(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined8 uVar6;
  code *pcVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  long *unaff_x20;
  undefined8 local_120;
  long lStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_ef;
  undefined8 local_e0;
  long lStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined1 uStack_78;
  undefined7 local_77;
  undefined1 uStack_70;
  undefined8 uStack_6f;
  
  lVar3 = *unaff_x20;
  lVar5 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  lVar10 = unaff_x20[3];
  uVar11 = unaff_x20[4];
  lVar1 = lVar10;
  if (uVar11 == 0) {
    uVar9 = lVar4 + 0x40U >> 6;
    uVar11 = uVar9;
    if ((long)uVar9 <= lVar10 + 1) {
      uVar11 = lVar10 + 1;
    }
    lVar8 = uVar11 - 1;
    do {
      lVar1 = lVar10 + 1;
      if (SCARRY8(lVar10,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100a4119c);
        (*pcVar7)();
      }
      if ((long)uVar9 <= lVar1) {
        uVar11 = 0;
        uStack_6f = 0;
        uStack_70 = 0;
        uStack_88 = 0;
        local_90 = 0;
        uStack_78 = 0;
        local_77 = 0;
        uStack_80 = 0;
        uStack_98 = 0;
        local_a0 = 0;
        goto LAB_100a410ac;
      }
      uVar11 = *(ulong *)(lVar5 + lVar1 * 8);
      lVar10 = lVar10 + 1;
    } while (uVar11 == 0);
  }
  lVar8 = lVar1;
  uVar9 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
  uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
  uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
  uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
  uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
  uVar11 = uVar11 - 1 & uVar11;
  uVar9 = LZCOUNT(uVar9 >> 0x20 | uVar9 << 0x20) | lVar8 << 6;
  puVar2 = (undefined8 *)(*(long *)(lVar3 + 0x30) + uVar9 * 0x10);
  local_a0 = *puVar2;
  uVar6 = puVar2[1];
  uStack_98 = uVar6;
  FUN_100a417a0(*(long *)(lVar3 + 0x38) + uVar9 * 0x30,&local_90);
  _swift_bridgeObjectRetain(uVar6);
LAB_100a410ac:
  *unaff_x20 = lVar3;
  unaff_x20[1] = lVar5;
  unaff_x20[2] = lVar4;
  unaff_x20[3] = lVar8;
  unaff_x20[4] = uVar11;
  pcVar7 = (code *)unaff_x20[5];
  FUN_1000f8cac(&local_a0,&local_e0,&DAT_100ff65d0,&DAT_100c90230);
  if (lStack_d8 == 0) {
    FUN_1000fb4c4(&local_a0,&DAT_100ff65d0,&DAT_100c90230);
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
  }
  else {
    lStack_118 = lStack_d8;
    local_120 = local_e0;
    uStack_108 = uStack_c8;
    uStack_110 = uStack_d0;
    local_100 = local_c0;
    uStack_ef = uStack_af;
    (*pcVar7)(param_1,&local_120);
    FUN_1000fb4c4(&local_120,&DAT_100ff65d8,&DAT_100c90238);
    FUN_1000fb4c4(&local_a0,&DAT_100ff65d0,&DAT_100c90230);
  }
  return;
}



/* Address: 0x100a4119c | FUN_100a4119c */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1  [16]
FUN_100a4119c(undefined8 param_1,_StringGuts param_2,char param_3 [8],char param_4 [8],
             undefined4 param_5,undefined8 param_6,undefined8 param_7,long param_8)

{
  char *pcVar1;
  __uint64 _Var2;
  byte bVar3;
  ushort uVar4;
  undefined2 uVar5;
  uint uVar6;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar7;
  byte in_ZR;
  undefined1 in_CY;
  bool bVar8;
  int iVar9;
  UnownedSerialExecutor UVar10;
  TargetProtocolConformanceDescriptor *pTVar11;
  Hasher HVar12;
  ulong uVar13;
  undefined *puVar14;
  char acVar15 [8];
  char acVar16 [8];
  CancellationError CVar17;
  char (*pacVar18) [8];
  long *plVar19;
  undefined *puVar20;
  undefined8 uVar21;
  Hasher HVar22;
  ulong *puVar23;
  _StringGuts _Var24;
  _StringGuts _Var25;
  char acVar27 [8];
  char acVar28 [8];
  char acVar29 [8];
  ulong uVar30;
  ulong uVar31;
  undefined8 *puVar32;
  ulong uVar33;
  undefined **ppuVar34;
  pthread_mutexattr_t *ppVar35;
  __uint64 *p_Var36;
  long lVar37;
  ulong uVar38;
  long extraout_x12;
  long lVar39;
  long extraout_x13;
  long lVar40;
  ulong extraout_x16;
  uint uVar41;
  undefined8 uVar42;
  char acVar43 [8];
  _StringGuts unaff_x21;
  code *pcVar44;
  char unaff_x22 [8];
  ulong unaff_x23;
  char cVar45;
  uint uVar46;
  long *unaff_x24;
  pthread_mutexattr_t *ppVar47;
  uint uVar48;
  long *unaff_x25;
  ulong uVar49;
  ulong unaff_x26;
  __uint64 _Var50;
  long unaff_x27;
  long lVar51;
  pthread_mutexattr_t *unaff_x28;
  undefined8 *puVar52;
  String SVar53;
  String SVar54;
  undefined1 auVar55 [16];
  undefined1 auVar56 [16];
  undefined1 auVar57 [16];
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined1 auVar60 [16];
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  undefined1 auVar67 [16];
  undefined1 auVar68 [16];
  undefined1 auVar69 [16];
  undefined1 auVar70 [16];
  undefined1 auVar71 [16];
  undefined1 auVar72 [16];
  undefined1 auVar73 [16];
  undefined1 auVar74 [16];
  undefined1 auVar75 [16];
  undefined1 auVar76 [16];
  undefined1 auVar77 [16];
  undefined1 auVar78 [16];
  undefined1 auVar79 [16];
  undefined1 auVar80 [16];
  undefined1 auVar81 [16];
  undefined1 auVar82 [16];
  undefined1 auVar83 [16];
  undefined1 auVar84 [16];
  undefined1 auVar85 [16];
  undefined1 auVar86 [16];
  undefined1 auVar87 [16];
  undefined1 auVar88 [16];
  undefined1 auVar89 [16];
  undefined1 auVar90 [16];
  undefined1 auVar91 [16];
  undefined1 auVar92 [16];
  undefined1 auVar93 [16];
  undefined1 auVar94 [16];
  undefined1 auVar95 [16];
  undefined1 auVar96 [16];
  undefined1 auVar97 [16];
  undefined1 auVar98 [16];
  undefined1 auVar99 [16];
  String SVar100;
  String SVar101;
  String SVar102;
  String SVar103;
  String SVar104;
  String SVar105;
  String SVar106;
  String SVar107;
  String SVar108;
  undefined1 auVar109 [16];
  String SVar110;
  String SVar111;
  String SVar112;
  undefined1 auVar113 [16];
  String SVar114;
  String SVar115;
  String SVar116;
  String SVar117;
  String SVar118;
  String SVar119;
  String SVar120;
  String SVar121;
  String SVar122;
  String SVar123;
  String SVar124;
  String SVar125;
  String SVar126;
  undefined8 in_stack_00000010;
  undefined8 *in_stack_00000020;
  long in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined *in_stack_00000038;
  char in_stack_00000040 [8];
  char cStack0000000000000048;
  char cStack0000000000000049;
  char cStack000000000000004a;
  char cStack000000000000004b;
  char cStack000000000000004c;
  char cStack000000000000004d;
  char cStack000000000000004e;
  char cStack000000000000004f;
  undefined8 in_stack_00000050;
  long in_stack_00000058;
  undefined8 in_stack_00000060;
  undefined *in_stack_00000068;
  undefined1 auStack_180 [8];
  undefined8 *puStack_140;
  undefined8 uStack_138;
  char local_130 [8];
  pthread_mutexattr_t *in_stack_fffffffffffffed8;
  long in_stack_fffffffffffffee0;
  char in_stack_fffffffffffffee8 [8];
  char in_stack_fffffffffffffef8 [8];
  long lStack_100;
  undefined *local_e0;
  undefined8 uStack_d8;
  char local_d0 [8];
  char local_c8 [8];
  long lStack_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  pthread_mutexattr_t pStack_a0;
  char acStack_90 [8];
  long lStack_88;
  char acStack_80 [8];
  undefined8 local_78;
  uint local_70;
  undefined4 uStack_6c;
  char acStack_68 [8];
  code *pcStack_60;
  char acStack_58 [8];
  long lStack_50;
  byte local_48;
  undefined7 uStack_47;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined1 *puVar26;
  
  pcVar7 = local_130;
  puVar32 = (undefined8 *)&stack0xfffffffffffffff0;
  acVar43 = (char  [8])&pStack_a0;
  FUN_100a417a0(param_1,&pStack_a0);
  _Var24.unknown = (undefined *)&local_70;
  UNRECOVERED_JUMPTABLE = (code *)param_2.unknown;
  FUN_100a417a0();
  lVar51 = (long)in_stack_00000040;
  uVar42 = in_stack_00000030;
  acVar29 = (char  [8])(local_78 & 0xff);
  ppuVar34 = (undefined **)&switchD_100a411e8::switchdataD_100c8fade;
  lVar37 = (ulong)*(ushort *)(&switchD_100a411e8::switchdataD_100c8fade + (long)acVar29 * 2) * 4 +
           0x100a411ec;
  uVar46 = (uint)unaff_x24;
  uVar48 = (uint)unaff_x25;
  uVar41 = (uint)unaff_x23;
  acVar15 = (char  [8])UNRECOVERED_JUMPTABLE;
  acVar27 = param_3;
  acVar28 = param_4;
  acVar16 = acVar29;
  lVar39 = extraout_x12;
  lVar40 = extraout_x13;
  puVar52 = puVar32;
  switch(acVar29) {
  default:
  case (char  [8])0x41:
  case (char  [8])0x48:
  case (char  [8])0x68:
  case (char  [8])0x88:
  case (char  [8])0xa4:
  case (char  [8])0xc4:
  case (char  [8])0xe4:
  case (char  [8])0xf1:
  case (char  [8])0xf8:
    _Var24.unknown = local_d0;
    FUN_100a417a0();
switchD_100a411e8_caseD_3c:
    acVar29[1] = '\0';
    acVar29[2] = '\0';
    acVar29[3] = '\0';
    acVar29[4] = '\0';
    acVar29[5] = '\0';
    acVar29[6] = '\0';
    acVar29[7] = '\0';
    acVar29[0] = local_48;
switchD_100a411e8_caseD_2b:
    if (acVar29._0_4_ == 0) {
      acVar29 = (char  [8])((ulong)local_d0 & 0xffffffff);
      ppuVar34 = (undefined **)(ulong)local_70;
switchD_100a411e8_caseD_27:
      in_ZR = acVar29._0_4_ == (int)ppuVar34;
switchD_100a411e8_caseD_22:
LAB_100a414d4:
      uVar41 = (uint)in_ZR;
LAB_100a41630:
      FUN_100a3e6f0(&pStack_a0);
      goto LAB_100a41660;
    }
    goto switchD_100a411e8_caseD_c;
  case (char  [8])0x1:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    if (local_48 != 1) goto switchD_100a411e8_caseD_c;
    acVar28[4] = (undefined1)uStack_6c;
    acVar28[5] = uStack_6c._1_1_;
    acVar28[6] = uStack_6c._2_1_;
    acVar28[7] = uStack_6c._3_1_;
    acVar28[0] = (byte)local_70;
    acVar28[1] = local_70._1_1_;
    acVar28[2] = local_70._2_1_;
    acVar28[3] = local_70._3_1_;
    in_ZR = local_d0 == acVar28;
    goto LAB_100a414d4;
  case (char  [8])0x2:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    local_c8 = local_d0;
    if (local_48 != 2) break;
    acVar43[4] = (undefined1)uStack_6c;
    acVar43[5] = uStack_6c._1_1_;
    acVar43[6] = uStack_6c._2_1_;
    acVar43[7] = uStack_6c._3_1_;
    acVar43[0] = (byte)local_70;
    acVar43[1] = local_70._1_1_;
    acVar43[2] = local_70._2_1_;
    acVar43[3] = local_70._3_1_;
    lVar37 = ((pthread_mutexattr_t *)((long)local_d0 + 0x10))->__sig;
    if (lVar37 == ((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig) {
      if ((lVar37 == 0) || (local_d0 == acVar43)) {
LAB_100a415f4:
        uVar41 = 1;
      }
      else {
        ppVar47 = (pthread_mutexattr_t *)((long)local_d0 + 0x20);
        ppVar35 = (pthread_mutexattr_t *)((long)acVar43 + 0x20);
        do {
          lVar37 = lVar37 + -1;
          bVar8 = (int)ppVar47->__sig == (int)ppVar35->__sig;
          uVar41 = (uint)bVar8;
          if (!bVar8) break;
          ppVar47 = (pthread_mutexattr_t *)((long)&ppVar47->__sig + 4);
          ppVar35 = (pthread_mutexattr_t *)((long)&ppVar35->__sig + 4);
        } while (lVar37 != 0);
      }
    }
    else {
LAB_100a415ec:
      uVar41 = 0;
    }
LAB_100a415f8:
    _swift_bridgeObjectRelease();
LAB_100a4162c:
    _swift_bridgeObjectRelease(acVar43);
    goto LAB_100a41630;
  case (char  [8])0x3:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    local_c8 = local_d0;
    if (local_48 == 3) {
      acVar43[4] = (undefined1)uStack_6c;
      acVar43[5] = uStack_6c._1_1_;
      acVar43[6] = uStack_6c._2_1_;
      acVar43[7] = uStack_6c._3_1_;
      acVar43[0] = (byte)local_70;
      acVar43[1] = local_70._1_1_;
      acVar43[2] = local_70._2_1_;
      acVar43[3] = local_70._3_1_;
      lVar37 = ((pthread_mutexattr_t *)((long)local_d0 + 0x10))->__sig;
      if (lVar37 != ((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig) goto LAB_100a415ec;
      if ((lVar37 == 0) || (local_d0 == acVar43)) goto LAB_100a415f4;
      acVar29 = (char  [8])((long)local_d0 + 0x20);
      ppuVar34 = (undefined **)((long)acVar43 + 0x20);
      do {
        lVar37 = lVar37 + -1;
        lVar39 = *(long *)acVar29;
        lVar40 = ((pthread_mutexattr_t *)ppuVar34)->__sig;
        acVar29 = (char  [8])((long)acVar29 + 8);
        ppuVar34 = (undefined **)((pthread_mutexattr_t *)ppuVar34)->__opaque;
switchD_100a411e8_caseD_4c:
        uVar41 = (uint)(lVar39 == lVar40);
      } while ((lVar39 == lVar40) && (lVar37 != 0));
      goto LAB_100a415f8;
    }
    break;
  case (char  [8])0x4:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    if (local_48 == 4) {
      in_ZR = 0;
      if (!NAN((double)local_d0) && !NAN((double)CONCAT44(uStack_6c,local_70))) {
        in_ZR = (double)local_d0 == (double)CONCAT44(uStack_6c,local_70);
      }
      goto LAB_100a414d4;
    }
    goto switchD_100a411e8_caseD_c;
  case (char  [8])0x5:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    local_c8 = local_d0;
    if (local_48 == 5) {
      acVar43[4] = (undefined1)uStack_6c;
      acVar43[5] = uStack_6c._1_1_;
      acVar43[6] = uStack_6c._2_1_;
      acVar43[7] = uStack_6c._3_1_;
      acVar43[0] = (byte)local_70;
      acVar43[1] = local_70._1_1_;
      acVar43[2] = local_70._2_1_;
      acVar43[3] = local_70._3_1_;
      lVar37 = ((pthread_mutexattr_t *)((long)local_d0 + 0x10))->__sig;
      if (lVar37 != ((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig) goto LAB_100a415ec;
      if ((lVar37 == 0) || (local_d0 == acVar43)) goto LAB_100a415f4;
      ppVar47 = (pthread_mutexattr_t *)((long)local_d0 + 0x20);
      ppVar35 = (pthread_mutexattr_t *)((long)acVar43 + 0x20);
      do {
        lVar37 = lVar37 + -1;
        bVar8 = (double)ppVar47->__sig == (double)ppVar35->__sig;
        uVar41 = (uint)bVar8;
        if (!bVar8) break;
        ppVar47 = (pthread_mutexattr_t *)ppVar47->__opaque;
        ppVar35 = (pthread_mutexattr_t *)ppVar35->__opaque;
      } while (lVar37 != 0);
      goto LAB_100a415f8;
    }
    break;
  case (char  [8])0x6:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    if (local_48 == 6) {
      uVar41 = (byte)(local_d0[0] ^ (byte)local_70) ^ 1;
      goto LAB_100a41630;
    }
    goto switchD_100a411e8_caseD_c;
  case (char  [8])0x7:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    local_c8 = local_d0;
    if (local_48 == 7) {
      acVar43[4] = (undefined1)uStack_6c;
      acVar43[5] = uStack_6c._1_1_;
      acVar43[6] = uStack_6c._2_1_;
      acVar43[7] = uStack_6c._3_1_;
      acVar43[0] = (byte)local_70;
      acVar43[1] = local_70._1_1_;
      acVar43[2] = local_70._2_1_;
      acVar43[3] = local_70._3_1_;
      lVar37 = ((pthread_mutexattr_t *)((long)local_d0 + 0x10))->__sig;
      if (lVar37 != ((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig) goto LAB_100a415ec;
      if ((lVar37 == 0) || (local_d0 == acVar43)) goto LAB_100a415f4;
      ppVar47 = (pthread_mutexattr_t *)((long)local_d0 + 0x20);
      ppVar35 = (pthread_mutexattr_t *)((long)acVar43 + 0x20);
      do {
        lVar37 = lVar37 + -1;
        bVar3 = (byte)*(code *)&ppVar47->__sig ^ (byte)*(code *)&ppVar35->__sig;
        if ((bVar3 & 1) != 0) break;
        ppVar47 = (pthread_mutexattr_t *)((long)&ppVar47->__sig + 1);
        ppVar35 = (pthread_mutexattr_t *)((long)&ppVar35->__sig + 1);
      } while (lVar37 != 0);
      uVar41 = bVar3 ^ 1;
      goto LAB_100a415f8;
    }
    break;
  case (char  [8])0x8:
    _Var24.unknown = local_d0;
    FUN_100a417a0(&pStack_a0,_Var24.unknown);
    if (local_48 == 8) {
      acVar27[4] = (undefined1)uStack_6c;
      acVar27[5] = uStack_6c._1_1_;
      acVar27[6] = uStack_6c._2_1_;
      acVar27[7] = uStack_6c._3_1_;
      acVar27[0] = (byte)local_70;
      acVar27[1] = local_70._1_1_;
      acVar27[2] = local_70._2_1_;
      acVar27[3] = local_70._3_1_;
      SVar54.str._4_4_ = uStack_6c;
      SVar54.str._0_4_ = local_70;
      SVar54.bridgeObject = (void *)acStack_68;
      acVar29 = local_c8;
      acVar43 = acStack_68;
      if (local_d0 == acVar27 && local_c8 == acStack_68) goto LAB_100a4161c;
      SVar53.bridgeObject = (void *)local_c8;
      SVar53.str = (char *)local_d0;
LAB_100a413dc:
      acVar43 = (char  [8])SVar54.bridgeObject;
      _Var24.unknown = SVar53.bridgeObject;
      bVar8 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar53.str,_Var24,(_StringComparisonResult)(__int8)SVar54.str)
      ;
      uVar41 = (uint)bVar8;
LAB_100a41620:
      _swift_bridgeObjectRelease(acVar29);
      goto LAB_100a4162c;
    }
    break;
  case (char  [8])0x9:
    FUN_100a417a0(&pStack_a0,local_d0);
    local_c8 = local_d0;
    if (local_48 == 9) {
      acVar43[4] = (undefined1)uStack_6c;
      acVar43[5] = uStack_6c._1_1_;
      acVar43[6] = uStack_6c._2_1_;
      acVar43[7] = uStack_6c._3_1_;
      acVar43[0] = (byte)local_70;
      acVar43[1] = local_70._1_1_;
      acVar43[2] = local_70._2_1_;
      acVar43[3] = local_70._3_1_;
      _Var24.unknown = (undefined *)acVar43;
      FUN_1004827e8(local_d0,acVar43);
      uVar41 = local_d0._0_4_;
      goto LAB_100a415f8;
    }
    break;
  case (char  [8])0xa:
  case (char  [8])0x2f:
  case (char  [8])0x37:
    FUN_100a417a0();
    acVar29[1] = '\0';
    acVar29[2] = '\0';
    acVar29[3] = '\0';
    acVar29[4] = '\0';
    acVar29[5] = '\0';
    acVar29[6] = '\0';
    acVar29[7] = '\0';
    acVar29[0] = local_48;
switchD_100a411e8_caseD_23:
    if (acVar29._0_4_ != 10) {
      FUN_100004594();
      goto switchD_100a411e8_caseD_c;
    }
    FUN_100076508();
    FUN_100076508(&local_70,&stack0xfffffffffffffee0);
    local_130 = (char  [8])0x0;
    FUN_100004640(&stack0xffffffffffffff08,local_e0);
    Swift::DefaultStringInterpolation::_appendInterpolation();
    param_2.unknown = (undefined *)local_130;
    unaff_x21.unknown = (undefined *)0xe000000000000000;
    local_130[0] = '\0';
    local_130[1] = '\0';
    local_130[2] = '\0';
    local_130[3] = '\0';
    local_130[4] = '\0';
    local_130[5] = '\0';
    local_130[6] = '\0';
    local_130[7] = '\0';
    in_stack_fffffffffffffed8 = (pthread_mutexattr_t *)0xe000000000000000;
    FUN_100004640(&stack0xfffffffffffffee0,in_stack_fffffffffffffef8);
    Swift::DefaultStringInterpolation::_appendInterpolation();
    _Var24.unknown = (undefined *)in_stack_fffffffffffffef8;
switchD_100a411e8_caseD_3a:
    if (((char  [8])param_2.unknown == local_130) &&
       ((pthread_mutexattr_t *)unaff_x21.unknown == in_stack_fffffffffffffed8)) {
      uVar41 = 1;
    }
    else {
      _Var24.unknown = unaff_x21.unknown;
      bVar8 = Swift::_stringCompareWithSmolCheck
                        (param_2,unaff_x21,(_StringComparisonResult)local_130[0]);
      uVar41 = (uint)bVar8;
    }
    _swift_bridgeObjectRelease(unaff_x21.unknown);
    _swift_bridgeObjectRelease(in_stack_fffffffffffffed8);
    FUN_100004594(&stack0xfffffffffffffee0);
    FUN_100004594(&stack0xffffffffffffff08);
    goto LAB_100a41630;
  case (char  [8])0xb:
    FUN_100a417a0(&pStack_a0,local_d0);
    local_c8 = local_d0;
    if (local_48 == 0xb) {
      puVar20 = &DAT_100ff6508;
      FUN_1000f7830(&DAT_100ff6508,&DAT_100c8fb40);
      SVar53 = Swift::Array<undefined>::get_description(local_d0,puVar20);
      acVar29 = (char  [8])SVar53.bridgeObject;
      _swift_bridgeObjectRelease(local_d0);
      SVar54 = Swift::Array<undefined>::get_description(CONCAT44(uStack_6c,local_70),puVar20);
      acVar43 = (char  [8])SVar54.bridgeObject;
      _Var24.unknown = (undefined *)acVar43;
      _swift_bridgeObjectRelease(CONCAT44(uStack_6c,local_70));
      if (SVar53 != SVar54) goto LAB_100a413dc;
LAB_100a4161c:
      uVar41 = 1;
      goto LAB_100a41620;
    }
    break;
  case (char  [8])0xc:
    goto switchD_100a411e8_caseD_c;
  case (char  [8])0xd:
    uStack_138 = 0x100a411d0;
    pTVar11 = &TargetProtocolConformanceDescriptor_100c90504;
    puVar20 = &DAT_100f2ab30;
    puStack_140 = puVar32;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90504,&DAT_100f2ab30);
    DAT_100ff6638 = pTVar11;
    auVar64._8_8_ = puVar20;
    auVar64._0_8_ = pTVar11;
    return auVar64;
  case (char  [8])0xe:
    lVar37 = *(long *)(pStack_a0.__sig +
                      *(long *)PTR___class_metadata_base_offset_for_Swift_TaskLocal_100eaf050);
    *(long *)((long)unaff_x22 + 0x68) = lVar37;
    lVar37 = *(long *)(lVar37 + -8);
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x70))->__sig = lVar37;
    uVar33 = *(long *)(lVar37 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc();
    *(ulong *)((long)unaff_x22 + 0x78) = uVar33;
    if ((char  [8])unaff_x21.unknown == (char  [8])0x0) {
      UVar10.unknown = (undefined *)0x0;
      param_2.unknown._0_1_ = '\0';
      param_2.unknown._1_1_ = '\0';
      param_2.unknown._2_1_ = '\0';
      param_2.unknown._3_1_ = '\0';
      param_2.unknown._4_1_ = '\0';
      param_2.unknown._5_1_ = '\0';
      param_2.unknown._6_1_ = '\0';
      param_2.unknown._7_1_ = '\0';
    }
    else {
      _swift_getObjectType();
      UVar10 = Swift::Actor::get_unownedExecutor();
    }
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x80))->__sig = (long)UVar10.unknown;
    *(undefined **)((long)unaff_x22 + 0x88) = param_2.unknown;
    UNRECOVERED_JUMPTABLE = FUN_100a466b4;
    _swift_task_switch(FUN_100a466b4,UVar10.unknown);
    auVar61._8_8_ = UVar10.unknown;
    auVar61._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar61;
  case (char  [8])0xf:
    do {
      ((pthread_mutexattr_t *)((long)acVar29 + 0x10))->__sig = unaff_x23;
      UNRECOVERED_JUMPTABLE =
           (code *)((long)acVar43 +
                   *(long *)((pthread_mutexattr_t *)((long)ppuVar34 + 0x30))->__opaque);
      FUN_100011080(&stack0xfffffffffffffee0,UNRECOVERED_JUMPTABLE);
      _swift_bridgeObjectRetain(unaff_x23);
      if (unaff_x26 == 0) {
        do {
          plVar19 = (long *)((long)unaff_x24 + 1);
          if (SCARRY8((long)unaff_x24,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a49a70);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)unaff_x25 <= (long)plVar19) {
            _swift_release();
            *(pthread_mutexattr_t **)local_130 = in_stack_fffffffffffffed8;
            auVar67._8_8_ = UNRECOVERED_JUMPTABLE;
            auVar67[0] = (char)unaff_x21.unknown;
            auVar67[1] = SUB81(unaff_x21.unknown,1);
            auVar67[2] = SUB81(unaff_x21.unknown,2);
            auVar67[3] = SUB81(unaff_x21.unknown,3);
            auVar67[4] = SUB81(unaff_x21.unknown,4);
            auVar67[5] = SUB81(unaff_x21.unknown,5);
            auVar67[6] = SUB81(unaff_x21.unknown,6);
            auVar67[7] = SUB81(unaff_x21.unknown,7);
            return auVar67;
          }
          uVar49 = *(ulong *)((long)unaff_x22 + (long)plVar19 * 8);
          unaff_x24 = (long *)((long)unaff_x24 + 1);
        } while (uVar49 == 0);
        uVar33 = (uVar49 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar49 & 0x5555555555555555) << 1;
        uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
        uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
        uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
        unaff_x26 = uVar49 - 1 & uVar49;
        unaff_x24 = plVar19;
      }
      else {
        uVar33 = (unaff_x26 & 0xaaaaaaaaaaaaaaaa) >> 1 | (unaff_x26 & 0x5555555555555555) << 1;
        uVar33 = (uVar33 & 0xcccccccccccccccc) >> 2 | (uVar33 & 0x3333333333333333) << 2;
        uVar33 = (uVar33 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar33 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar33 = (uVar33 & 0xff00ff00ff00ff00) >> 8 | (uVar33 & 0xff00ff00ff00ff) << 8;
        uVar33 = (uVar33 & 0xffff0000ffff0000) >> 0x10 | (uVar33 & 0xffff0000ffff) << 0x10;
        uVar33 = uVar33 >> 0x20 | uVar33 << 0x20;
        unaff_x26 = unaff_x26 - 1 & unaff_x26;
      }
      acVar29 = (char  [8])(LZCOUNT(uVar33) | (long)unaff_x24 << 6);
      unaff_x27 = (long)acVar29 * 0x18;
      lVar37 = *(long *)((long)unaff_x21.unknown + 0x38);
      puVar32 = (undefined8 *)
                (((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x30))->__sig + unaff_x27);
      unaff_x28 = (pthread_mutexattr_t *)*puVar32;
      param_2.unknown = *(undefined **)(puVar32 + 1);
      unaff_x23 = puVar32[2];
switchD_100a411e8_caseD_13:
      acVar43 = (char  [8])((long)acVar29 * 0x20);
      FUN_10000cbfc((code *)((long)acVar43 + lVar37),&stack0xfffffffffffffee0);
      acVar29 = (char  [8])(in_stack_fffffffffffffed8[3].__sig + unaff_x27);
      *(pthread_mutexattr_t **)acVar29 = unaff_x28;
      *(undefined **)((long)acVar29 + 8) = param_2.unknown;
      ppuVar34 = (undefined **)in_stack_fffffffffffffed8;
    } while( true );
  case (char  [8])0x10:
    lVar37 = ((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x120))->__sig;
    UNRECOVERED_JUMPTABLE = FUN_100a47728;
    _swift_task_switch(FUN_100a47728,lVar37,*(undefined8 *)((long)unaff_x21.unknown + 0x128));
    auVar62._8_8_ = lVar37;
    auVar62._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar62;
  case (char  [8])0x11:
    ppVar47 = (pthread_mutexattr_t *)((long)unaff_x22 + 0x150);
    (*pcStack_60)();
    auVar58._8_8_ = ppVar47;
    auVar58[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar58[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar58[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar58[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar58[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar58[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar58[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar58[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar58;
  case (char  [8])0x12:
    auVar56._8_8_ = _Var24.unknown;
    auVar56[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar56[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar56[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar56[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar56[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar56[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar56[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar56[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar56;
  case (char  [8])0x13:
    goto switchD_100a411e8_caseD_13;
  case (char  [8])0x14:
                    /* WARNING: Could not recover jumptable at 0x000100a47a7c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)CONCAT44(uStack_6c,local_70))();
    auVar63[8] = acVar43[0];
    auVar63[9] = acVar43[1];
    auVar63[10] = acVar43[2];
    auVar63[0xb] = acVar43[3];
    auVar63[0xc] = acVar43[4];
    auVar63[0xd] = acVar43[5];
    auVar63[0xe] = acVar43[6];
    auVar63[0xf] = acVar43[7];
    auVar63[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar63[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar63[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar63[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar63[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar63[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar63[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar63[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar63;
  case (char  [8])0x15:
    while( true ) {
      (*(code *)acVar29)();
      puVar26 = &stack0xfffffffffffffee0;
      FUN_100004594(puVar26);
      unaff_x26 = unaff_x26 + 0x28;
      param_2.unknown = param_2.unknown + -1;
      if ((char  [8])param_2.unknown == (char  [8])0x0) break;
      FUN_100076688(unaff_x26,&stack0xffffffffffffff08);
switchD_100a411e8_caseD_19:
      FUN_100076508();
      FUN_100004640(&stack0xfffffffffffffee0,in_stack_fffffffffffffef8);
      acVar29 = *(char (*) [8])(lStack_100 + 8);
      _Var24.unknown = (undefined *)unaff_x24;
    }
    auVar69._8_8_ = _Var24.unknown;
    auVar69._0_8_ = puVar26;
    return auVar69;
  case (char  [8])0x16:
    *(code **)(unaff_x23 + 0x30) = UNRECOVERED_JUMPTABLE;
    SVar100.bridgeObject = _malloc((size_t)unaff_x24);
    *(void **)(unaff_x23 + 0x38) = SVar100.bridgeObject;
    FUN_100a48788(SVar100.bridgeObject);
    auVar66._8_8_ = SVar100.bridgeObject;
    auVar66._0_8_ = FUN_100a48ae8;
    return auVar66;
  case (char  [8])0x17:
    local_70 = param_3._0_4_;
    uStack_6c = param_3._4_4_;
    lStack_b0 = in_stack_00000030;
    lStack_a8 = (long)in_stack_00000038;
    pStack_a0.__sig = (long)in_stack_00000040;
    pStack_a0.__opaque[0] = cStack0000000000000048;
    pStack_a0.__opaque[1] = cStack0000000000000049;
    pStack_a0.__opaque[2] = cStack000000000000004a;
    pStack_a0.__opaque[3] = cStack000000000000004b;
    pStack_a0.__opaque[4] = cStack000000000000004c;
    pStack_a0.__opaque[5] = cStack000000000000004d;
    pStack_a0.__opaque[6] = cStack000000000000004e;
    pStack_a0.__opaque[7] = cStack000000000000004f;
    pcVar44 = *(code **)((long)in_stack_00000040 + 0x20);
    uVar21 = 0;
    local_e0 = _Var24.unknown;
    local_d0 = (char  [8])param_8;
    local_c8 = acVar43;
    acStack_90 = (char  [8])param_6;
    lStack_88 = param_7;
    acStack_68 = param_4;
    uStack_d8._4_4_ = param_5;
    _swift_getAssociatedTypeWitness
              (0,in_stack_00000040,in_stack_00000030,0x100cca3e4,
               &TargetProtocolRequirement_100cca3fc);
    *(undefined8 *)((long)acVar29 + 0x18) = uVar21;
    _swift_getAssociatedConformanceWitness
              (lVar51,uVar42,uVar21,0x100cca3e4,&TargetProtocolRequirement_100cca3f4);
    ((pthread_mutexattr_t *)((long)acVar29 + 0x20))->__sig = lVar51;
    FUN_10000cbb0(acVar29);
    local_130 = (char  [8])in_stack_00000010;
    (*pcVar44)(acVar29,UNRECOVERED_JUMPTABLE,local_e0,thunk_FUN_1000386a0,acStack_80,uStack_d8._4_4_
               ,thunk_FUN_1001aeafc,&lStack_c0,local_d0);
    auVar59._8_8_ = local_e0;
    auVar59[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar59[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar59[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar59[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar59[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar59[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar59[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar59[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar59;
  case (char  [8])0x18:
    puVar32 = (undefined8 *)
              ((ulong)puVar32 | (ulong)PTR__swift_async_extendedFramePointerFlags_100eaf070);
    pcVar7 = auStack_180;
  case (char  [8])0x1e:
    *(undefined **)(pcVar7 + 0x28) = unaff_x21.unknown;
    *(undefined **)(pcVar7 + 0x30) = param_2.unknown;
    *(undefined8 **)(pcVar7 + 0x40) = puVar32;
    *(undefined8 *)(pcVar7 + 0x48) = 0x100a411d0;
    *(char (*) [8])(pcVar7 + 0x38) = unaff_x22;
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])FUN_1005c804c;
    FUN_100a43634(pacVar18,UNRECOVERED_JUMPTABLE,_Var24.unknown,local_78,
                  CONCAT44(uStack_6c,local_70),acStack_90,lStack_88,acStack_80);
    auVar57._8_8_ = _Var24.unknown;
    auVar57[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar57[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar57[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar57[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar57[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar57[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar57[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar57[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar57;
  case (char  [8])0x19:
    goto switchD_100a411e8_caseD_19;
  case (char  [8])0x1a:
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != *(long *)PTR____stack_chk_guard_100ea82f0) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    FUN_100a48474();
    auVar65._8_8_ = _Var24.unknown;
    auVar65[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar65[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar65[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar65[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar65[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar65[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar65[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar65[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar65;
  case (char  [8])0x1b:
    uVar42 = 0;
    _swift_task_switch();
    auVar70._8_8_ = uVar42;
    auVar70[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar70[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar70[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar70[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar70[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar70[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar70[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar70[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar70;
  case (char  [8])0x1c:
    FUN_1000f7830();
    acVar29 = (char  [8])unaff_x21.unknown;
    Swift::_DictionaryStorage::_resize
              ((_DictionaryStorage *)UNRECOVERED_JUMPTABLE,
               (__RawDictionaryStorage *)unaff_x21.unknown,(__int64)acVar43,(bool)unaff_x22[0]);
    if (((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x10))->__sig == 0) {
LAB_100a49d0c:
      _swift_release(unaff_x21.unknown);
      local_130 = (char  [8])param_2.unknown;
LAB_100a49d14:
      *(char (*) [8])local_130 = acVar29;
      auVar68[8] = acVar43[0];
      auVar68[9] = acVar43[1];
      auVar68[10] = acVar43[2];
      auVar68[0xb] = acVar43[3];
      auVar68[0xc] = acVar43[4];
      auVar68[0xd] = acVar43[5];
      auVar68[0xe] = acVar43[6];
      auVar68[0xf] = acVar43[7];
      auVar68[0] = (char)unaff_x21.unknown;
      auVar68[1] = SUB81(unaff_x21.unknown,1);
      auVar68[2] = SUB81(unaff_x21.unknown,2);
      auVar68[3] = SUB81(unaff_x21.unknown,3);
      auVar68[4] = SUB81(unaff_x21.unknown,4);
      auVar68[5] = SUB81(unaff_x21.unknown,5);
      auVar68[6] = SUB81(unaff_x21.unknown,6);
      auVar68[7] = SUB81(unaff_x21.unknown,7);
      return auVar68;
    }
    ppVar47 = (pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x40);
    bVar3 = (byte)((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x20))->__sig;
    uVar49 = 1L << ((ulong)bVar3 & 0x3f);
    uVar33 = 0xffffffffffffffff;
    if ((bVar3 & 0x3f) < 6) {
      uVar33 = ~(-1L << (uVar49 & 0x3f));
    }
    uVar33 = uVar33 & ppVar47->__sig;
    lVar37 = 0;
    local_130 = (char  [8])param_2.unknown;
    do {
      param_2.unknown = (undefined *)local_130;
      if (uVar33 == 0) {
        do {
          lVar51 = lVar37 + 1;
          if (SCARRY8(lVar37,1)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a49d3c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)(uVar49 + 0x3f >> 6) <= lVar51) {
            if (((ulong)unaff_x22 & 1) == 0) {
              _swift_release(unaff_x21.unknown);
              goto LAB_100a49d14;
            }
            bVar3 = (byte)((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x20))->__sig;
            uVar33 = 1L << ((ulong)bVar3 & 0x3f);
            if ((bVar3 & 0x3f) < 6) {
              ppVar47->__sig = -1L << (uVar33 & 0x3f);
            }
            else {
              acVar43 = (char  [8])(uVar33 + 0x3f >> 3 & 0xffffffffffffff8);
              _bzero(ppVar47,(size_t)acVar43);
            }
            ((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x10))->__sig = 0;
            goto LAB_100a49d0c;
          }
          uVar33 = *(ulong *)(ppVar47->__opaque + lVar37 * 8);
          lVar37 = lVar37 + 1;
        } while (uVar33 == 0);
        uVar31 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
        uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
        uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar31 = uVar31 >> 0x20 | uVar31 << 0x20;
        uVar33 = uVar33 - 1 & uVar33;
      }
      else {
        uVar31 = (uVar33 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar33 & 0x5555555555555555) << 1;
        uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
        uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar31 = uVar31 >> 0x20 | uVar31 << 0x20;
        uVar33 = uVar33 - 1 & uVar33;
        lVar51 = lVar37;
      }
      uVar31 = LZCOUNT(uVar31) | lVar51 << 6;
      p_Var36 = (__uint64 *)
                (((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x30))->__sig + uVar31 * 0x18);
      puVar20 = (undefined *)*p_Var36;
      _Var2 = p_Var36[1];
      _Var50 = p_Var36[2];
      if (((ulong)unaff_x22 & 1) == 0) {
        HVar22.unknown = local_d0;
        FUN_10000cbfc(*(long *)((long)unaff_x21.unknown + 0x38) + uVar31 * 0x20);
        _swift_bridgeObjectRetain(_Var50);
      }
      else {
        HVar22.unknown = local_d0;
        FUN_100011080();
      }
      Swift::Hasher::init(*(__int64 *)((long)acVar29 + 0x28));
      HVar12.unknown = puVar20;
      Swift::Hasher::_combine((__uint64)puVar20,HVar22);
      uVar13 = Swift::Hasher::_finalize(HVar12);
      uVar38 = -1L << ((ulong)(byte)((pthread_mutexattr_t *)((long)acVar29 + 0x20))->__sig & 0x3f);
      uVar13 = uVar13 & (uVar38 ^ 0xffffffffffffffff);
      uVar30 = uVar13 >> 6;
      uVar31 = -1L << (uVar13 & 0x3f) &
               (*(ulong *)((long)acVar29 + uVar30 * 8 + 0x40) ^ 0xffffffffffffffff);
      if (uVar31 == 0) {
        bVar8 = false;
        uVar31 = 0x3f - uVar38 >> 6;
        do {
          uVar13 = uVar30 + 1;
          if ((uVar13 == uVar31) && (bVar8)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a49d40);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar30 = 0;
          if (uVar13 != uVar31) {
            uVar30 = uVar13;
          }
          bVar8 = (bool)(uVar13 == uVar31 | bVar8);
          uVar13 = *(ulong *)((long)acVar29 + uVar30 * 8 + 0x40);
        } while (uVar13 == 0xffffffffffffffff);
        uVar13 = ~uVar13;
        uVar31 = (uVar13 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar13 & 0x5555555555555555) << 1;
        uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
        uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar31 = LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) | uVar30 << 6;
      }
      else {
        uVar31 = (uVar31 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar31 & 0x5555555555555555) << 1;
        uVar31 = (uVar31 & 0xcccccccccccccccc) >> 2 | (uVar31 & 0x3333333333333333) << 2;
        uVar31 = (uVar31 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar31 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar31 = (uVar31 & 0xff00ff00ff00ff00) >> 8 | (uVar31 & 0xff00ff00ff00ff) << 8;
        uVar31 = (uVar31 & 0xffff0000ffff0000) >> 0x10 | (uVar31 & 0xffff0000ffff) << 0x10;
        uVar31 = LZCOUNT(uVar31 >> 0x20 | uVar31 << 0x20) | uVar13 & 0x7fffffffffffffc0;
      }
      uVar30 = uVar31 >> 3 & 0x1ffffffffffffff8;
      *(ulong *)((long)acVar29 + uVar30 + 0x40) =
           1L << (uVar31 & 0x3f) | *(ulong *)((long)acVar29 + uVar30 + 0x40);
      p_Var36 = (__uint64 *)(((pthread_mutexattr_t *)((long)acVar29 + 0x30))->__sig + uVar31 * 0x18)
      ;
      *p_Var36 = (__uint64)puVar20;
      p_Var36[1] = _Var2;
      p_Var36[2] = _Var50;
      acVar43 = (char  [8])(*(long *)((long)acVar29 + 0x38) + uVar31 * 0x20);
      FUN_100011080(local_d0,acVar43);
      ((pthread_mutexattr_t *)((long)acVar29 + 0x10))->__sig =
           ((pthread_mutexattr_t *)((long)acVar29 + 0x10))->__sig + 1;
      lVar37 = lVar51;
    } while( true );
  case (char  [8])0x1d:
    in_stack_00000050 = *(undefined8 *)((long)unaff_x22 + 0x148);
    _cStack0000000000000048 = (char  [8])((pthread_mutexattr_t *)((long)unaff_x22 + 0x140))->__sig;
    in_stack_00000060 = *(undefined8 *)((long)unaff_x22 + 0x158);
    in_stack_00000058 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x150))->__sig;
    in_stack_00000030 = *(undefined8 *)((long)unaff_x22 + 0x128);
    in_stack_00000028 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x120))->__sig;
    in_stack_00000020 = *(undefined8 **)((long)unaff_x22 + 0x118);
    uVar21 = *(undefined8 *)((long)unaff_x22 + 0xa8);
    uVar42 = *(undefined8 *)((long)unaff_x22 + 0x58);
    in_stack_00000068 = &switchD_100a411e8::switchdataD_100c8fade;
    in_stack_00000038 = &DAT_100c90390;
    in_stack_00000040 = (char  [8])param_2.unknown;
    FUN_100a46c24(uVar42,uVar21,((pthread_mutexattr_t *)((long)unaff_x22 + 0xd0))->__sig,
                  thunk_FUN_1000386a0,(pthread_mutexattr_t *)((long)unaff_x22 + 0xb0),
                  *(code *)((long)unaff_x22 + 0x178),thunk_FUN_100a44918,
                  (pthread_mutexattr_t *)((long)unaff_x22 + 0x10));
    auVar60._8_8_ = uVar21;
    auVar60._0_8_ = uVar42;
    return auVar60;
  case (char  [8])0x21:
    _USHORT_100c8fc66 = param_3;
    _USHORT_100c8fc6e = acVar43;
                    /* WARNING (jumptable): Read-only address (ram,0x000100c8fc66) is written */
                    /* WARNING (jumptable): Read-only address (ram,0x000100c8fc6e) is written */
                    /* WARNING: Read-only address (ram,0x000100c8fc66) is written */
                    /* WARNING: Read-only address (ram,0x000100c8fc6e) is written */
    _swift_task_dealloc(acVar29);
    if (acVar43 == (char  [8])0x0) {
      UNRECOVERED_JUMPTABLE._0_1_ = '\0';
      UNRECOVERED_JUMPTABLE._1_1_ = -0x30;
      UNRECOVERED_JUMPTABLE._2_1_ = -0x5c;
      UNRECOVERED_JUMPTABLE._3_1_ = '\0';
      UNRECOVERED_JUMPTABLE._4_1_ = '\x01';
      UNRECOVERED_JUMPTABLE._5_1_ = '\0';
      UNRECOVERED_JUMPTABLE._6_1_ = '\0';
      UNRECOVERED_JUMPTABLE._7_1_ = '\0';
      goto switchD_100a411e8_caseD_25;
    }
    UNRECOVERED_JUMPTABLE = FUN_100a4db34;
    goto LAB_100a4d8b8;
  case (char  [8])0x22:
  case (char  [8])0x26:
  case (char  [8])0x2a:
  case (char  [8])0x2e:
  case (char  [8])0x32:
  case (char  [8])0x36:
  case (char  [8])0x5a:
  case (char  [8])0x5e:
  case (char  [8])0x62:
  case (char  [8])0x7a:
  case (char  [8])0x7e:
  case (char  [8])0x82:
  case (char  [8])0x9a:
  case (char  [8])0x9e:
  case (char  [8])0xb6:
  case (char  [8])0xd6:
  case (char  [8])0xda:
  case (char  [8])0xde:
    goto switchD_100a411e8_caseD_22;
  case (char  [8])0x23:
    goto switchD_100a411e8_caseD_23;
  case (char  [8])0x25:
  case (char  [8])0x29:
switchD_100a411e8_caseD_25:
    UNRECOVERED_JUMPTABLE = (code *)((long)UNRECOVERED_JUMPTABLE + 0x8d0);
LAB_100a4d8b8:
    _Var24.unknown = (undefined *)0x0;
switchD_100a411e8_caseD_2d:
switchD_100a411e8_caseD_31:
    _swift_task_switch();
    auVar79._8_8_ = _Var24.unknown;
    auVar79[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar79[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar79[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar79[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar79[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar79[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar79[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar79[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar79;
  case (char  [8])0x27:
  case (char  [8])0x33:
    goto switchD_100a411e8_caseD_27;
  case (char  [8])0x2b:
  case (char  [8])0x55:
  case (char  [8])0x75:
  case (char  [8])0xb1:
  case (char  [8])0xd1:
    goto switchD_100a411e8_caseD_2b;
  case (char  [8])0x2d:
    goto switchD_100a411e8_caseD_2d;
  case (char  [8])0x31:
  case (char  [8])0x35:
    goto switchD_100a411e8_caseD_31;
  case (char  [8])0x39:
    puStack_140 = (undefined8 *)((ulong)puVar32 | extraout_x16);
    uStack_138 = 0x100a411d0;
    lVar37 = *(long *)unaff_x22;
    uVar42 = *(undefined8 *)(lVar37 + 0x30);
    *(char (*) [8])(lVar37 + 0x40) = acVar43;
    _swift_task_dealloc(*(undefined8 *)(lVar37 + 0x38));
    _swift_release(uVar42);
    if (acVar43 == (char  [8])0x0) {
      UNRECOVERED_JUMPTABLE = thunk_FUN_100a6c664;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_100543edc;
    }
    uVar42 = 0;
    _swift_task_switch(UNRECOVERED_JUMPTABLE,0,0);
    auVar99._8_8_ = uVar42;
    auVar99._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar99;
  case (char  [8])0x3a:
  case (char  [8])0x44:
  case (char  [8])0x4e:
  case (char  [8])0x58:
  case (char  [8])0x5c:
  case (char  [8])0x60:
  case (char  [8])0x64:
  case (char  [8])0x6e:
  case (char  [8])0x78:
  case (char  [8])0x7c:
  case (char  [8])0x80:
  case (char  [8])0x84:
  case (char  [8])0x8e:
  case (char  [8])0x98:
  case (char  [8])0x9c:
  case (char  [8])0xa0:
  case (char  [8])0xaa:
  case (char  [8])0xb4:
  case (char  [8])0xb8:
  case (char  [8])0xbc:
  case (char  [8])0xc0:
  case (char  [8])0xca:
  case (char  [8])0xd4:
  case (char  [8])0xd8:
  case (char  [8])0xdc:
  case (char  [8])0xe0:
  case (char  [8])0xea:
  case (char  [8])0xf4:
  case (char  [8])0xfe:
    goto switchD_100a411e8_caseD_3a;
  case (char  [8])0x3b:
    plVar19 = &lStack_c0;
    FUN_100a4af18(plVar19);
    *(char (*) [8])((long)param_2.unknown + 0x68) = acStack_58;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x60))->__sig = (long)pcStack_60;
    *(ulong *)((long)param_2.unknown + 0x78) = CONCAT71(uStack_47,local_48);
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x70))->__sig = lStack_50;
    *(ulong *)((long)param_2.unknown + 0x88) = unaff_x23;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x80))->__sig = (long)unaff_x24;
    *(code *)&((pthread_mutexattr_t *)((long)param_2.unknown + 0x90))->__sig = unaff_x22[0];
    *(char (*) [8])((long)param_2.unknown + 0x28) = pStack_a0.__opaque;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x20))->__sig = pStack_a0.__sig;
    *(long *)((long)param_2.unknown + 0x38) = lStack_88;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x30))->__sig = (long)acStack_90;
    *(ulong *)((long)param_2.unknown + 0x48) = local_78;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x40))->__sig = (long)acStack_80;
    *(char (*) [8])((long)param_2.unknown + 0x58) = acStack_68;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x50))->__sig = CONCAT44(uStack_6c,local_70);
    *(long *)((long)param_2.unknown + 8) = lStack_b8;
    *(long *)param_2.unknown = lStack_c0;
    *(long *)((long)param_2.unknown + 0x18) = lStack_a8;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig = lStack_b0;
    auVar93._8_8_ = _Var24.unknown;
    auVar93._0_8_ = plVar19;
    return auVar93;
  case (char  [8])0x3c:
  case (char  [8])0x40:
  case (char  [8])0x50:
  case (char  [8])0x54:
  case (char  [8])0x70:
  case (char  [8])0x74:
  case (char  [8])0x90:
  case (char  [8])0x94:
  case (char  [8])0x95:
  case (char  [8])0xac:
  case (char  [8])0xb0:
  case (char  [8])0xcc:
  case (char  [8])0xd0:
  case (char  [8])0xec:
  case (char  [8])0xf0:
    goto switchD_100a411e8_caseD_3c;
  case (char  [8])0x43:
    goto switchD_100a411e8_caseD_43;
  case (char  [8])0x45:
    goto switchD_100a411e8_caseD_45;
  case (char  [8])0x46:
  case (char  [8])0xba:
  case (char  [8])0xbe:
  case (char  [8])0xc2:
  case (char  [8])0xf6:
  case (char  [8])0x66:
  case (char  [8])0x86:
  case (char  [8])0xa2:
  case (char  [8])0xe2:
    Swift::_StringGuts::grow(0x3c,_Var24);
    SVar100.bridgeObject = (void *)0x8000000100db9790;
    SVar110.bridgeObject = (void *)0x8000000100db9790;
    SVar110.str = (char *)(unaff_x26 + 0x14);
    SVar124.bridgeObject = (void *)param_4;
    SVar124.str = (char *)param_3;
    Swift::String::append(SVar110,SVar124);
    FUN_1005b32e4();
    SVar111.bridgeObject = SVar100.bridgeObject;
    SVar111.str = (char *)unaff_x22;
    SVar125.bridgeObject = (void *)param_4;
    SVar125.str = (char *)param_3;
    Swift::String::append(SVar111,SVar125);
    _swift_bridgeObjectRelease(SVar100.bridgeObject);
    SVar112.str = (char *)(unaff_x26 - 2);
    SVar112.bridgeObject = (void *)0x8000000100db97c0;
    SVar126.bridgeObject = (void *)param_4;
    SVar126.str = (char *)param_3;
    Swift::String::append(SVar112,SVar126);
    acVar15 = acStack_90;
    acVar29 = pStack_a0.__opaque;
    FUN_100a57a58();
    acVar43 = (char  [8])&DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,SVar112.str,0,0);
    acVar16 = pStack_a0.__opaque;
    SVar112.str[0] = 'c';
    SVar112.str[1] = 'l';
    SVar112.str[2] = 'o';
    SVar112.str[3] = 's';
    SVar112.str[4] = 'e';
    SVar112.str[5] = '\0';
    SVar112.str[6] = '\0';
    SVar112.str[7] = '\0';
    *(undefined1 **)(SVar112.str + 8) = &DAT_e500000000000000;
    *(uint *)(SVar112.str + 0x10) = uVar48;
    lStack_b8 = *(long *)((long)unaff_x21.unknown + 8);
    lStack_c0 = *(long *)unaff_x21.unknown;
    lStack_a8 = *(long *)((long)unaff_x21.unknown + 0x18);
    lStack_b0 = ((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x10))->__sig;
    unaff_x24[1] = lStack_a8;
    *unaff_x24 = lStack_b0;
    unaff_x24[3] = lStack_b8;
    unaff_x24[2] = lStack_c0;
    local_70 = (uint)lStack_b8;
    uStack_6c = (undefined4)((ulong)lStack_b8 >> 0x20);
    pStack_a0.__sig = ((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x20))->__sig;
    local_e0 = (undefined *)CONCAT71(local_e0._1_7_,2);
    pStack_a0.__opaque[0] = acVar29[0];
    pStack_a0.__opaque[1] = acVar29[1];
    pStack_a0.__opaque[2] = acVar29[2];
    pStack_a0.__opaque[3] = acVar29[3];
    pStack_a0.__opaque[4] = acVar29[4];
    pStack_a0.__opaque[5] = acVar29[5];
    pStack_a0.__opaque[6] = acVar29[6];
    pStack_a0.__opaque[7] = acVar29[7];
    uStack_d8._0_1_ = pStack_a0.__opaque[0];
    uStack_d8._1_1_ = pStack_a0.__opaque[1];
    uStack_d8._2_1_ = pStack_a0.__opaque[2];
    uStack_d8._3_1_ = pStack_a0.__opaque[3];
    uStack_d8._4_1_ = pStack_a0.__opaque[4];
    uStack_d8._5_1_ = pStack_a0.__opaque[5];
    uStack_d8._6_1_ = pStack_a0.__opaque[6];
    uStack_d8._7_1_ = pStack_a0.__opaque[7];
    local_d0[0] = acStack_90[0];
    local_d0[1] = acStack_90[1];
    local_d0[2] = acStack_90[2];
    local_d0[3] = acStack_90[3];
    local_d0[4] = acStack_90[4];
    local_d0[5] = acStack_90[5];
    local_d0[6] = acStack_90[6];
    local_d0[7] = acStack_90[7];
    pStack_a0.__opaque._1_7_ = acVar16._1_7_;
    pStack_a0.__opaque[0] = '\x02';
    acVar16 = pStack_a0.__opaque;
    pStack_a0.__opaque[0] = acVar29[0];
    pStack_a0.__opaque[1] = acVar29[1];
    pStack_a0.__opaque[2] = acVar29[2];
    pStack_a0.__opaque[3] = acVar29[3];
    pStack_a0.__opaque[4] = acVar29[4];
    pStack_a0.__opaque[5] = acVar29[5];
    pStack_a0.__opaque[6] = acVar29[6];
    pStack_a0.__opaque[7] = acVar29[7];
    acStack_90[0] = pStack_a0.__opaque[0];
    acStack_90[1] = pStack_a0.__opaque[1];
    acStack_90[2] = pStack_a0.__opaque[2];
    acStack_90[3] = pStack_a0.__opaque[3];
    acStack_90[4] = pStack_a0.__opaque[4];
    acStack_90[5] = pStack_a0.__opaque[5];
    acStack_90[6] = pStack_a0.__opaque[6];
    acStack_90[7] = pStack_a0.__opaque[7];
    acVar29 = acStack_90;
    acStack_90[0] = acVar15[0];
    acStack_90[1] = acVar15[1];
    acStack_90[2] = acVar15[2];
    acStack_90[3] = acVar15[3];
    acStack_90[4] = acVar15[4];
    acStack_90[5] = acVar15[5];
    acStack_90[6] = acVar15[6];
    acStack_90[7] = acVar15[7];
    lStack_88._0_1_ = acStack_90[0];
    lStack_88._1_1_ = acStack_90[1];
    lStack_88._2_1_ = acStack_90[2];
    lStack_88._3_1_ = acStack_90[3];
    lStack_88._4_1_ = acStack_90[4];
    lStack_88._5_1_ = acStack_90[5];
    lStack_88._6_1_ = acStack_90[6];
    lStack_88._7_1_ = acStack_90[7];
    local_c8 = acVar43;
    pStack_a0.__opaque = acVar16;
    acStack_90 = acVar29;
    acStack_80 = acVar43;
    local_78 = lStack_c0;
    acStack_68 = (char  [8])lStack_b0;
    pcStack_60 = (code *)lStack_a8;
    acStack_58 = (char  [8])pStack_a0.__sig;
    FUN_10000ca28(&local_70,&stack0xfffffffffffffed8);
    FUN_10000ca28(acStack_80,&stack0xfffffffffffffed8);
    puVar26 = &stack0xfffffffffffffed8;
    FUN_100a50050(&local_e0,puVar26);
    SVar112.str = pStack_a0.__opaque;
    FUN_100a5008c(SVar112.str);
    *(long *)((long)param_2.unknown + 0x28) = lStack_b8;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x20))->__sig = lStack_c0;
    *(long *)((long)param_2.unknown + 0x38) = lStack_a8;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x30))->__sig = lStack_b0;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x40))->__sig = pStack_a0.__sig;
    *(char (*) [8])((long)param_2.unknown + 8) = uStack_d8;
    *(undefined **)param_2.unknown = local_e0;
    *(char (*) [8])((long)param_2.unknown + 0x18) = local_c8;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig = (long)local_d0;
    auVar113._8_8_ = puVar26;
    auVar113._0_8_ = SVar112.str;
    return auVar113;
  case (char  [8])0x4b:
    if (acVar43 == (char  [8])0x0) {
      lVar37 = ((pthread_mutexattr_t *)((long)acVar29 + 0x50))->__sig;
      uVar42 = *(undefined8 *)((long)acVar29 + 0x58);
                    /* WARNING: Could not recover jumptable at 0x000100a69adc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((long)unaff_x22 + 8))
                (lVar37,uVar42,((pthread_mutexattr_t *)((long)acVar29 + 0x60))->__sig);
      auVar81._8_8_ = uVar42;
      auVar81._0_8_ = lVar37;
      return auVar81;
    }
    _swift_willThrow();
    UNRECOVERED_JUMPTABLE = *(code **)((long)unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100a69abc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar80._8_8_ = _Var24.unknown;
    auVar80._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar80;
  case (char  [8])0x4c:
  case (char  [8])0x6c:
  case (char  [8])0x8c:
  case (char  [8])0xa8:
  case (char  [8])0xc8:
  case (char  [8])0xe8:
  case (char  [8])0xfc:
    goto switchD_100a411e8_caseD_4c;
  case (char  [8])0x4d:
    goto switchD_100a411e8_caseD_4d;
  case (char  [8])0x4f:
    *(char (*) [8])UNRECOVERED_JUMPTABLE = unaff_x22;
    *(ushort **)((long)UNRECOVERED_JUMPTABLE + 8) = &USHORT_100c8fc62;
    (*(code *)((long)unaff_x21.unknown + (long)*(int *)unaff_x21.unknown))(param_2.unknown,acVar43);
    auVar92[8] = acVar43[0];
    auVar92[9] = acVar43[1];
    auVar92[10] = acVar43[2];
    auVar92[0xb] = acVar43[3];
    auVar92[0xc] = acVar43[4];
    auVar92[0xd] = acVar43[5];
    auVar92[0xe] = acVar43[6];
    auVar92[0xf] = acVar43[7];
    auVar92[0] = (char)param_2.unknown;
    auVar92[1] = SUB81(param_2.unknown,1);
    auVar92[2] = SUB81(param_2.unknown,2);
    auVar92[3] = SUB81(param_2.unknown,3);
    auVar92[4] = SUB81(param_2.unknown,4);
    auVar92[5] = SUB81(param_2.unknown,5);
    auVar92[6] = SUB81(param_2.unknown,6);
    auVar92[7] = SUB81(param_2.unknown,7);
    return auVar92;
  case (char  [8])0x57:
  case (char  [8])0x5b:
  case (char  [8])0x5f:
  case (char  [8])0x63:
    goto switchD_100a411e8_caseD_57;
  case (char  [8])0x59:
  case (char  [8])0x5d:
  case (char  [8])0x61:
    goto switchD_100a411e8_caseD_59;
  case (char  [8])0x65:
    _swift_retain(param_2.unknown);
    if (unaff_x26 != 0) {
      uVar33 = 0;
      do {
        uVar49 = (ulong)(byte)((code *)((long)acVar43 + (long)unaff_x21.unknown) +
                              (long)(unaff_x28->__opaque + -8))[uVar33];
        (*(code *)((pthread_mutexattr_t *)((long)unaff_x22 + 0x170))->__sig)();
        if ((uVar49 & 1) == 0) {
          lVar37 = (long)unaff_x21.unknown + uVar33;
          if (SCARRY8(uVar33,(long)unaff_x21.unknown)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf24);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar33 = lVar37 - (long)unaff_x21.unknown;
          if (lVar37 < (long)unaff_x21.unknown) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf28);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)unaff_x21.unknown < 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf2c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)((ulong)in_stack_fffffffffffffee8 & 0xffffffff) < lVar37) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf30);
            (*UNRECOVERED_JUMPTABLE)();
          }
          ((pthread_mutexattr_t *)((long)unaff_x22 + 0x60))->__sig = (long)param_2.unknown;
          *(uint *)((long)unaff_x22 + 0x68) = uVar48;
          *(uint *)((long)unaff_x22 + 0x6c) = uVar46;
          *(int *)&((pthread_mutexattr_t *)((long)unaff_x22 + 0x70))->__sig =
               (int)in_stack_fffffffffffffed8;
          *(short *)((long)unaff_x22 + 0x74) = local_130._0_2_;
          *(code *)((long)unaff_x22 + 0x76) = SUB81(in_stack_fffffffffffffee0,0);
          *(undefined **)((long)unaff_x22 + 0x78) = unaff_x21.unknown;
          ((pthread_mutexattr_t *)((long)unaff_x22 + 0x80))->__sig = lVar37;
          FUN_1006100e8((char *)((long)unaff_x22 + 0x38),(char *)((long)unaff_x22 + 0x88));
          FUN_1006100e8((pthread_mutexattr_t *)((long)unaff_x22 + 0x60),
                        (pthread_mutexattr_t *)((long)unaff_x22 + 0xb0));
          thunk_FUN_10061160c();
          FUN_10096e070((pthread_mutexattr_t *)((long)unaff_x22 + 0x60));
          if ((char  [8])unaff_x21.unknown == (char  [8])0x0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf3c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar49 = uVar33 >> 0x20;
          FUN_10096e070((char *)((long)unaff_x22 + 0x38));
          FUN_10096e070((pthread_mutexattr_t *)((long)unaff_x22 + 0x60));
          uVar6 = (int)(uVar33 >> 0x20) - (int)uVar33;
          uVar41 = uVar48 + uVar6;
          if (CARRY4(uVar48,uVar6)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf34);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if (uVar46 < uVar41) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cf38);
            (*UNRECOVERED_JUMPTABLE)();
          }
          uVar31 = 0;
          uVar48 = SUB84(param_2.unknown,4);
          uVar46 = (uint)SUB82(param_2.unknown,6);
          *(uint *)(unaff_x23 + 8) = uVar41;
          goto LAB_100a4cec0;
        }
        uVar33 = uVar33 + 1;
      } while (unaff_x26 != uVar33);
    }
    lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x180))->__sig;
    lVar51 = *(long *)((long)unaff_x22 + 0x188);
    iVar9 = *(int *)(lVar37 + 0x28);
    *(int *)((long)unaff_x22 + 0x1bc) = iVar9;
    if ((*(byte *)(lVar51 + iVar9) & 1) == 0) {
      uVar42 = *(undefined8 *)(lVar51 + *(int *)(lVar37 + 0x30));
      pacVar18 = (char (*) [8])0x70;
      _swift_task_alloc();
      ((pthread_mutexattr_t *)((long)unaff_x22 + 400))->__sig = (long)pacVar18;
      *pacVar18 = unaff_x22;
      pacVar18[1] = (char  [8])FUN_100a4cf3c;
      lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x180))->__sig;
      FUN_100a4c6d0(uVar42,lVar37);
      auVar74._8_8_ = lVar37;
      auVar74._0_8_ = uVar42;
      return auVar74;
    }
    pacVar18 = (char (*) [8])(lVar51 + *(int *)((long)unaff_x22 + 0x1b8));
    unaff_x21.unknown = *(undefined **)pacVar18;
    uVar33 = (ulong)*(uint *)pacVar18[1];
    uVar49 = (ulong)*(uint *)(pacVar18[1] + 4);
    param_2.unknown._4_1_ = '\0';
    param_2.unknown._5_1_ = '\0';
    param_2.unknown._6_1_ = '\0';
    param_2.unknown._7_1_ = '\0';
    param_2.unknown._0_4_ = *(uint *)pacVar18[2];
    uVar4 = *(ushort *)(pacVar18[2] + 4);
    bVar3 = pacVar18[2][6];
    acVar43 = (char  [8])unaff_x21.unknown;
    _swift_retain();
    FUN_1006116e8();
    acVar29 = *(char (*) [8])acVar43;
    lVar37 = ((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig;
    uVar5 = *(undefined2 *)((long)acVar43 + 0x14);
    cVar45 = *(char *)((long)acVar43 + 0x16);
    _swift_retain(acVar29);
    acVar43 = *(char (*) [8])((long)acVar43 + 8);
    FUN_10096e070((char *)((long)unaff_x22 + 0x38));
    _swift_release(unaff_x21.unknown);
    uVar46 = (uint)bVar3;
    uVar48 = (uint)uVar4;
    *pacVar18 = acVar29;
    pacVar18[1] = acVar43;
    *(int *)pacVar18[2] = (int)lVar37;
    *(undefined2 *)(pacVar18[2] + 4) = uVar5;
    uVar31 = 0x100000000000000;
    pacVar18[2][6] = cVar45;
LAB_100a4cec0:
    uVar33 = uVar33 & 0xffffffff | uVar49 << 0x20;
                    /* WARNING: Could not recover jumptable at 0x000100a4cf10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)unaff_x22 + 8))
              (unaff_x21.unknown,uVar33,
               (ulong)param_2.unknown & 0xffffffff | (ulong)(uVar48 & 0xffff) << 0x20 |
               (ulong)(uVar46 & 0xff) << 0x30 | uVar31);
    auVar75._8_8_ = uVar33;
    auVar75[0] = (char)unaff_x21.unknown;
    auVar75[1] = SUB81(unaff_x21.unknown,1);
    auVar75[2] = SUB81(unaff_x21.unknown,2);
    auVar75[3] = SUB81(unaff_x21.unknown,3);
    auVar75[4] = SUB81(unaff_x21.unknown,4);
    auVar75[5] = SUB81(unaff_x21.unknown,5);
    auVar75[6] = SUB81(unaff_x21.unknown,6);
    auVar75[7] = SUB81(unaff_x21.unknown,7);
    return auVar75;
  case (char  [8])0x6b:
    (*(code *)acVar29)();
    _Var24.unknown = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    pacVar18 = (char (*) [8])PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
    ;
    acVar29 = (char  [8])_Var24.unknown;
    puVar23 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar23 = unaff_x23;
    _swift_allocError(_Var24.unknown,pacVar18,0,0);
    *pacVar18 = acVar29;
    _swift_continuation_throwingResumeWithError(acVar43,_Var24.unknown);
    UNRECOVERED_JUMPTABLE = (code *)acVar43;
    if ((char  [8])param_2.unknown == (char  [8])0x0) goto switchD_100a411e8_caseD_8b;
    lVar37 = ((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig;
    iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar37 + 0x50));
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69d20);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar51 = *(long *)(lVar37 + 0x10);
    uVar4 = *(ushort *)(lVar37 + 0x38) >> 0xe;
    if (uVar4 < 2) {
      if (uVar4 == 0) {
        lVar39 = 0;
      }
      else {
LAB_100a69c40:
        _swift_retain();
        lVar39 = lVar51;
      }
    }
    else {
      if (uVar4 == 2) goto LAB_100a69c40;
      lVar39 = 0;
      if ((*(ushort *)(lVar37 + 0x38) == 0xc000) &&
         (((*(long *)(lVar37 + 0x28) == 0 && lVar51 == 0) &&
          (*(long *)(lVar37 + 0x30) == 0 && *(long *)(lVar37 + 0x20) == 0)) &&
          *(long *)(lVar37 + 0x18) == 0)) {
        *(undefined4 *)(unaff_x24 + -1) = 0;
        unaff_x24[-2] = 0x1d6;
        SVar114.bridgeObject = (void *)0x2;
        SVar114.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar114,(StaticString)0x0,0xe000000000000000,0xdb8660);
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69d14);
        (*UNRECOVERED_JUMPTABLE)();
      }
    }
    iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar37 + 0x50));
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69d24);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (lVar39 != 0) {
      _swift_retain(param_2.unknown);
      _Var24.unknown = param_2.unknown;
      FUN_100910ab0(thunk_FUN_100a6aae4,param_2.unknown);
      _swift_release(lVar39);
      _swift_release(param_2.unknown);
    }
    _swift_release(param_2.unknown);
    UNRECOVERED_JUMPTABLE = (code *)param_2.unknown;
switchD_100a411e8_caseD_8b:
    auVar82[8] = (char)_Var24.unknown;
    auVar82[9] = SUB81(_Var24.unknown,1);
    auVar82[10] = SUB81(_Var24.unknown,2);
    auVar82[0xb] = SUB81(_Var24.unknown,3);
    auVar82[0xc] = SUB81(_Var24.unknown,4);
    auVar82[0xd] = SUB81(_Var24.unknown,5);
    auVar82[0xe] = SUB81(_Var24.unknown,6);
    auVar82[0xf] = SUB81(_Var24.unknown,7);
    auVar82[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar82[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar82[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar82[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar82[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar82[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar82[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar82[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar82;
  case (char  [8])0x6d:
    goto switchD_100a411e8_caseD_6d;
  case (char  [8])0x6f:
    uVar33 = (ulong)*(byte *)(*(long *)((long)acStack_90 + -8) + 0x50);
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])thunk_FUN_1005c804c;
    FUN_100a681d8(UNRECOVERED_JUMPTABLE,param_2.unknown,
                  (code *)((long)acVar43 + (uVar33 + 0x28 & (uVar33 ^ 0xffffffffffffffff))),
                  acStack_90,lStack_88,acStack_80);
    auVar91[8] = (char)param_2.unknown;
    auVar91[9] = SUB81(param_2.unknown,1);
    auVar91[10] = SUB81(param_2.unknown,2);
    auVar91[0xb] = SUB81(param_2.unknown,3);
    auVar91[0xc] = SUB81(param_2.unknown,4);
    auVar91[0xd] = SUB81(param_2.unknown,5);
    auVar91[0xe] = SUB81(param_2.unknown,6);
    auVar91[0xf] = SUB81(param_2.unknown,7);
    auVar91[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar91[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar91[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar91[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar91[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar91[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar91[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar91[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar91;
  case (char  [8])0x77:
  case (char  [8])0x7b:
  case (char  [8])0x7f:
  case (char  [8])0x83:
    uStack_138 = 0x100a411d0;
    unaff_x23 = (ulong)(byte)*(code *)((long)unaff_x22 + 0x48);
    unaff_x24 = (long *)((pthread_mutexattr_t *)((long)unaff_x22 + 0x20))->__sig;
    acVar43 = *(char (*) [8])((long)unaff_x22 + 0x28);
    param_2.unknown = *(undefined **)((long)unaff_x22 + 0x18);
    unaff_x25 = (long *)((ulong)unaff_x24 >> 0x10);
    UNRECOVERED_JUMPTABLE = (code *)&DAT_100f2d468;
    puStack_140 = puVar32;
switchD_100a411e8_caseD_6d:
    _swift_allocObject();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x30))->__sig = (long)UNRECOVERED_JUMPTABLE;
    ((pthread_mutexattr_t *)((long)UNRECOVERED_JUMPTABLE + 0x10))->__sig = (long)acVar43;
    *(code *)((long)UNRECOVERED_JUMPTABLE + 0x18) = SUB81(unaff_x23,0);
    ((pthread_mutexattr_t *)((long)UNRECOVERED_JUMPTABLE + 0x20))->__sig = (long)param_2.unknown;
    *(code *)((long)UNRECOVERED_JUMPTABLE + 0x28) = SUB81(unaff_x24,0);
    *(int *)((long)UNRECOVERED_JUMPTABLE + 0x2a) = (int)unaff_x25;
    *(byte *)((long)UNRECOVERED_JUMPTABLE + 0x2e) = (byte)((ulong)unaff_x24 >> 0x30) & 1;
    unaff_x21.unknown = UNRECOVERED_JUMPTABLE;
switchD_100a411e8_caseD_57:
    *(byte *)((long)UNRECOVERED_JUMPTABLE + 0x2f) = (byte)((ulong)unaff_x24 >> 0x38) & 1;
    UNRECOVERED_JUMPTABLE._0_1_ = -0x60;
    UNRECOVERED_JUMPTABLE._1_1_ = '\0';
    UNRECOVERED_JUMPTABLE._2_1_ = '\0';
    UNRECOVERED_JUMPTABLE._3_1_ = '\0';
    UNRECOVERED_JUMPTABLE._4_1_ = '\0';
    UNRECOVERED_JUMPTABLE._5_1_ = '\0';
    UNRECOVERED_JUMPTABLE._6_1_ = '\0';
    UNRECOVERED_JUMPTABLE._7_1_ = '\0';
    _swift_retain(acVar43);
    _swift_bridgeObjectRetain(param_2.unknown);
    _swift_task_alloc();
    param_2.unknown = UNRECOVERED_JUMPTABLE;
switchD_100a411e8_caseD_4d:
    *(code **)((long)unaff_x22 + 0x38) = UNRECOVERED_JUMPTABLE;
    FUN_1000f7830(&DAT_100ff6ab0,&DAT_100c90ab8);
    *(char (*) [8])param_2.unknown = unaff_x22;
    *(code **)((long)param_2.unknown + 8) = FUN_100a6ca88;
    _Var24.unknown = (undefined *)0x100a73000;
switchD_100a411e8_caseD_43:
    puVar20 = _Var24.unknown + 0x8ec;
    ppVar47 = (pthread_mutexattr_t *)((long)unaff_x22 + 0x10);
    FUN_100912dec(ppVar47,puVar20,unaff_x21.unknown);
    auVar98._8_8_ = puVar20;
    auVar98._0_8_ = ppVar47;
    return auVar98;
  case (char  [8])0x79:
  case (char  [8])0x7d:
    goto switchD_100a411e8_caseD_79;
  case (char  [8])0x81:
switchD_100a411e8_caseD_81:
    FUN_10061204c();
    _swift_release(acVar43);
    *(undefined **)unaff_x21.unknown = param_2.unknown;
    goto LAB_100a4d6fc;
  case (char  [8])0x85:
    uStack_138 = 0x100a411d0;
    puStack_140 = puVar32;
    _swift_release(((pthread_mutexattr_t *)((long)unaff_x22 + 0x40))->__sig);
    UNRECOVERED_JUMPTABLE = *(code **)((long)unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100a4cc08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar73._8_8_ = _Var24.unknown;
    auVar73._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar73;
  case (char  [8])0x8b:
    goto switchD_100a411e8_caseD_8b;
  case (char  [8])0x8d:
    goto switchD_100a411e8_caseD_8d;
  case (char  [8])0x8f:
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])FUN_1005c804c;
    FUN_1009e5378(pacVar18,UNRECOVERED_JUMPTABLE,local_78,CONCAT44(uStack_6c,local_70),acStack_68,
                  acStack_90,lStack_88,acStack_80);
    auVar90._8_8_ = local_78;
    auVar90[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar90[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar90[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar90[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar90[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar90[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar90[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar90[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar90;
  case (char  [8])0x97:
  case (char  [8])0x9b:
  case (char  [8])0x9f:
    goto switchD_100a411e8_caseD_97;
  case (char  [8])0x99:
    goto switchD_100a411e8_caseD_99;
  case (char  [8])0x9d:
    if (!(bool)in_CY) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d83c);
      (*UNRECOVERED_JUMPTABLE)();
    }
                    /* WARNING: Load size is inaccurate */
    param_2.unknown = *unaff_x21.unknown;
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)param_2.unknown;
    *(uint *)((long)unaff_x22 + 0x18) = uVar46;
    *(uint *)((long)unaff_x22 + 0x1c) = uVar41;
    *(int *)&((pthread_mutexattr_t *)((long)unaff_x22 + 0x20))->__sig = (int)unaff_x27;
    *(short *)((long)unaff_x22 + 0x24) = (short)unaff_x28;
    *(code *)((long)unaff_x22 + 0x26) = local_78._0_1_;
    *(long **)((long)unaff_x22 + 0x28) = unaff_x24;
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x30))->__sig = unaff_x23;
    _Var24.unknown = (undefined *)((long)unaff_x22 + 0xd8);
    _swift_beginAccess((char *)((long)param_2.unknown + 0x18),_Var24.unknown,0,0);
    unaff_x25 = *(long **)((long)unaff_x22 + 0x28);
    plVar19 = (long *)((pthread_mutexattr_t *)((long)unaff_x22 + 0x30))->__sig;
    if (SBORROW8((long)plVar19,(long)unaff_x25)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d840);
      (*UNRECOVERED_JUMPTABLE)();
    }
    in_stack_fffffffffffffee0 = unaff_x27 << 0x20;
    lVar37 = *(long *)((long)param_2.unknown + 0x18);
    _swift_retain(param_2.unknown);
    if (plVar19 != unaff_x25) {
      lVar51 = 0;
      do {
        uVar33 = (ulong)(byte)((code *)((long)acVar43 + (long)unaff_x25))[lVar51 + lVar37];
        (*(code *)((pthread_mutexattr_t *)((long)unaff_x22 + 0x150))->__sig)();
        if ((uVar33 & 1) == 0) {
          acVar16 = (char  [8])(lVar51 + (long)unaff_x25);
          if (SCARRY8(lVar51,(long)unaff_x25)) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d848);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)acVar16 < (long)unaff_x25) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d84c);
            (*UNRECOVERED_JUMPTABLE)();
          }
          if ((long)unaff_x25 < 0) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d850);
            (*UNRECOVERED_JUMPTABLE)();
          }
          in_stack_fffffffffffffed8 = unaff_x28;
          in_stack_fffffffffffffee8 = acVar29;
          if (0x100c8fade < (long)acVar16) {
                    /* WARNING: Does not return */
            UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d854);
            (*UNRECOVERED_JUMPTABLE)();
          }
          goto switchD_100a411e8_caseD_b5;
        }
        lVar51 = lVar51 + 1;
      } while ((long)plVar19 - (long)unaff_x25 != lVar51);
    }
    iVar9 = *(int *)(((pthread_mutexattr_t *)((long)unaff_x22 + 0x160))->__sig + 0x30);
    *(int *)((long)unaff_x22 + 0x19c) = iVar9;
    param_2.unknown = *(undefined **)(*(long *)((long)unaff_x22 + 0x168) + (long)iVar9);
    if ((long)param_2.unknown < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d844);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (0x100c8fadd < (long)param_2.unknown) {
      param_2.unknown = &switchD_100a411e8::switchdataD_100c8fade;
    }
    iVar9 = (int)*(undefined8 *)unaff_x21.unknown;
    _swift_isUniquelyReferenced_nonNull_native();
    acVar43 = *(char (*) [8])unaff_x21.unknown;
    if (iVar9 == 0) goto switchD_100a411e8_caseD_81;
    _swift_beginAccess((pthread_mutexattr_t *)((long)acVar43 + 0x10),
                       (pthread_mutexattr_t *)((long)unaff_x22 + 0x120),0,0);
    uVar41 = (uint)param_2.unknown;
    param_2.unknown = (undefined *)acVar43;
    if ((uint)((pthread_mutexattr_t *)((long)acVar43 + 0x10))->__sig < uVar41)
    goto switchD_100a411e8_caseD_d5;
    goto LAB_100a4d6fc;
  case (char  [8])0xa1:
    uVar49 = *(long *)((long)unaff_x22 + 0x28) -
             (ulong)((int)lVar37 -
                    (uint)*(ushort *)(&switchD_100a411e8::switchdataD_100c8fade + (long)acVar29 * 2)
                    );
    FUN_10060c3b0(&stack0xfffffffffffffed8);
    uVar33 = (ulong)((int)param_2.unknown - (uint)unaff_x21.unknown);
    if ((long)uVar49 <= (long)uVar33) {
      uVar33 = uVar49;
    }
    FUN_10060c6b4();
    if (uVar33 == 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4cbd0);
      (*UNRECOVERED_JUMPTABLE)();
    }
    lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x50))->__sig;
    FUN_10060c3b0(&stack0xfffffffffffffed8);
    _swift_release(lVar37);
    _swift_release(uVar33);
    lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig;
    uVar42 = *(undefined8 *)((long)unaff_x22 + 0x18);
                    /* WARNING: Could not recover jumptable at 0x000100a4cbc8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)unaff_x22 + 8))
              (lVar37,uVar42,(ulong)(uint7)((pthread_mutexattr_t *)((long)unaff_x22 + 0x20))->__sig)
    ;
    auVar72._8_8_ = uVar42;
    auVar72._0_8_ = lVar37;
    return auVar72;
  case (char  [8])0xa7:
    _swift_allocError();
    (*(code *)unaff_x25[4])(UNRECOVERED_JUMPTABLE);
    puVar20 = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar32 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    puVar14 = puVar20;
    pacVar18 = (char (*) [8])PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90
    ;
    _swift_allocError();
    *pacVar18 = (char  [8])unaff_x21.unknown;
    _swift_allocError(puVar20,puVar32,0,0);
    *puVar32 = puVar14;
    _swift_continuation_throwingResumeWithError(acVar43,puVar20);
    if ((char  [8])param_2.unknown != (char  [8])0x0) {
      lVar37 = ((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig;
      iVar9 = _pthread_mutex_lock((pthread_mutex_t *)(lVar37 + 0x60));
      if (iVar9 != 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69eb4);
        (*UNRECOVERED_JUMPTABLE)();
      }
      FUN_100a57abc(lVar37 + 0x10);
      *(undefined8 *)(lVar37 + 0x38) = 0;
      *(undefined8 *)(lVar37 + 0x10) = 0;
      *(undefined8 *)(lVar37 + 0x18) = 0;
      *(undefined2 *)(lVar37 + 0x50) = 0x8000;
      iVar9 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar37 + 0x60));
      if (iVar9 != 0) {
                    /* WARNING: Does not return */
        UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69eb8);
        (*UNRECOVERED_JUMPTABLE)();
      }
      _swift_release(param_2.unknown);
      acVar43 = (char  [8])param_2.unknown;
    }
    auVar83._8_8_ = puVar20;
    auVar83[0] = acVar43[0];
    auVar83[1] = acVar43[1];
    auVar83[2] = acVar43[2];
    auVar83[3] = acVar43[3];
    auVar83[4] = acVar43[4];
    auVar83[5] = acVar43[5];
    auVar83[6] = acVar43[6];
    auVar83[7] = acVar43[7];
    return auVar83;
  case (char  [8])0xa9:
    goto switchD_100a411e8_caseD_a9;
  case (char  [8])0xab:
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])thunk_FUN_1005c804c;
    FUN_100a67d24();
    auVar89[8] = (char)param_2.unknown;
    auVar89[9] = SUB81(param_2.unknown,1);
    auVar89[10] = SUB81(param_2.unknown,2);
    auVar89[0xb] = SUB81(param_2.unknown,3);
    auVar89[0xc] = SUB81(param_2.unknown,4);
    auVar89[0xd] = SUB81(param_2.unknown,5);
    auVar89[0xe] = SUB81(param_2.unknown,6);
    auVar89[0xf] = SUB81(param_2.unknown,7);
    auVar89[0] = (char)unaff_x21.unknown;
    auVar89[1] = SUB81(unaff_x21.unknown,1);
    auVar89[2] = SUB81(unaff_x21.unknown,2);
    auVar89[3] = SUB81(unaff_x21.unknown,3);
    auVar89[4] = SUB81(unaff_x21.unknown,4);
    auVar89[5] = SUB81(unaff_x21.unknown,5);
    auVar89[6] = SUB81(unaff_x21.unknown,6);
    auVar89[7] = SUB81(unaff_x21.unknown,7);
    return auVar89;
  case (char  [8])0xb3:
  case (char  [8])0xb7:
  case (char  [8])0xbb:
  case (char  [8])0xbf:
    _Var24.unknown = (undefined *)&pStack_a0;
    iVar9 = _pthread_mutex_init((pthread_mutex_t *)((long)unaff_x21.unknown + 0x18),
                                (pthread_mutexattr_t *)_Var24.unknown);
    if (iVar9 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a6c970);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(undefined **)(unaff_x23 + 0x10) = unaff_x21.unknown;
    *(char (*) [8])(unaff_x23 + 0x18) = unaff_x22;
    *(undefined8 *)(unaff_x23 + 0x28) = 0;
    *(undefined8 *)(unaff_x23 + 0x30) = 0;
    *(char (*) [8])(unaff_x23 + 0x20) = acVar43;
    *(undefined1 *)(unaff_x23 + 0x38) = 0;
    _swift_retain();
    _swift_bridgeObjectRetain(acVar43);
    UNRECOVERED_JUMPTABLE = (code *)acVar43;
switchD_100a411e8_caseD_a9:
    *(ulong *)param_2.unknown = unaff_x23;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig = (long)local_c8;
    *(char (*) [8])((long)param_2.unknown + 8) = local_d0;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x20))->__sig = lStack_b8;
    *(long *)((long)param_2.unknown + 0x18) = lStack_c0;
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x30))->__sig = lStack_a8;
    *(long *)((long)param_2.unknown + 0x28) = lStack_b0;
    lVar37 = unaff_x24[6];
    ((pthread_mutexattr_t *)((long)param_2.unknown + 0x40))->__sig = unaff_x24[7];
    *(long *)((long)param_2.unknown + 0x38) = lVar37;
    *(code *)((long)param_2.unknown + 0x48) = (code)0x0;
    ppuVar34 = &PTR_get_displayPrice_100ea8000;
    acVar29 = acStack_58;
switchD_100a411e8_caseD_97:
    if (*(char (*) [8])((pthread_mutexattr_t *)((long)ppuVar34 + 0x2f0))->__sig == acVar29) {
      auVar97._8_8_ = _Var24.unknown;
      auVar97[0] = (char)UNRECOVERED_JUMPTABLE;
      auVar97[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
      auVar97[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
      auVar97[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
      auVar97[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
      auVar97[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
      auVar97[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
      auVar97[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
      return auVar97;
    }
switchD_100a411e8_caseD_8d:
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  case (char  [8])0xb5:
switchD_100a411e8_caseD_b5:
    *(undefined **)((long)unaff_x22 + 0x38) = param_2.unknown;
    *(uint *)&((pthread_mutexattr_t *)((long)unaff_x22 + 0x40))->__sig = uVar46;
    *(uint *)((long)unaff_x22 + 0x44) = uVar41;
    *(int *)((long)unaff_x22 + 0x48) = (int)((ulong)in_stack_fffffffffffffee0 >> 0x20);
    *(short *)((long)unaff_x22 + 0x4c) = (short)in_stack_fffffffffffffed8;
switchD_100a411e8_caseD_79:
    *(code *)((long)unaff_x22 + 0x4e) = in_stack_fffffffffffffee8[0];
switchD_100a411e8_caseD_99:
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x50))->__sig = (long)unaff_x25;
    *(char (*) [8])((long)unaff_x22 + 0x58) = acVar16;
switchD_100a411e8_caseD_59:
    FUN_10096e070();
    uVar33 = *(long *)((long)unaff_x22 + 0x58) -
             ((pthread_mutexattr_t *)((long)unaff_x22 + 0x50))->__sig;
    if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d858);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (uVar33 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d85c);
      (*UNRECOVERED_JUMPTABLE)();
    }
    uVar48 = uVar46 + (uint)uVar33;
    if (CARRY4(uVar46,(uint)uVar33)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d860);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if (uVar41 < uVar48) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d864);
      (*UNRECOVERED_JUMPTABLE)();
    }
    *(uint *)((long)unaff_x21.unknown + 8) = uVar48;
    goto LAB_100a4d80c;
  case (char  [8])0xb9:
  case (char  [8])0xbd:
  case (char  [8])0xc1:
  case (char  [8])0xf5:
    in_stack_00000028 = 0x100a411d0;
    puVar52 = &stack0x00000020;
    unaff_x25 = &lStack_50;
    in_stack_00000020 = puVar32;
    if ((int)UNRECOVERED_JUMPTABLE == 0xc) {
      pStack_a0.__opaque[0] = '\0';
      pStack_a0.__opaque[1] = '\0';
      pStack_a0.__opaque[2] = '\0';
      pStack_a0.__opaque[3] = '\0';
      pStack_a0.__opaque[4] = '\0';
      pStack_a0.__opaque[5] = '\0';
      pStack_a0.__opaque[6] = '\0';
      pStack_a0.__opaque[7] = '\0';
      acStack_90[0] = '\0';
      acStack_90[1] = '\0';
      acStack_90[2] = '\0';
      acStack_90[3] = '\0';
      acStack_90[4] = '\0';
      acStack_90[5] = '\0';
      acStack_90[6] = '\0';
      acStack_90[7] = -0x20;
      Swift::_StringGuts::grow(0x3a,_Var24);
      pcVar1 = "Insufficient memory to read from \'";
      SVar112.str = (char *)0xd000000000000022;
    }
    else {
      if ((int)UNRECOVERED_JUMPTABLE != 5) {
        pStack_a0.__opaque[0] = '\0';
        pStack_a0.__opaque[1] = '\0';
        pStack_a0.__opaque[2] = '\0';
        pStack_a0.__opaque[3] = '\0';
        pStack_a0.__opaque[4] = '\0';
        pStack_a0.__opaque[5] = '\0';
        pStack_a0.__opaque[6] = '\0';
        pStack_a0.__opaque[7] = '\0';
        acStack_90[0] = '\0';
        acStack_90[1] = '\0';
        acStack_90[2] = '\0';
        acStack_90[3] = '\0';
        acStack_90[4] = '\0';
        acStack_90[5] = '\0';
        acStack_90[6] = '\0';
        acStack_90[7] = -0x20;
        _Var25.unknown = _Var24.unknown;
        acVar43 = param_3;
        acVar16 = param_4;
        Swift::_StringGuts::grow(0x22,_Var24);
        _swift_bridgeObjectRelease(acStack_90);
        pStack_a0.__opaque[0] = '\x16';
        pStack_a0.__opaque[1] = '\0';
        pStack_a0.__opaque[2] = '\0';
        pStack_a0.__opaque[3] = '\0';
        pStack_a0.__opaque[4] = '\0';
        pStack_a0.__opaque[5] = '\0';
        pStack_a0.__opaque[6] = '\0';
        pStack_a0.__opaque[7] = -0x30;
        acStack_90[0] = -0x80;
        acStack_90[1] = -0x6d;
        acStack_90[2] = -0x25;
        acStack_90[3] = '\0';
        acStack_90[4] = '\x01';
        acStack_90[5] = '\0';
        acStack_90[6] = '\0';
        acStack_90[7] = -0x80;
        FUN_1005b32e4();
        SVar105.bridgeObject = _Var25.unknown;
        SVar105.str = _Var24.unknown;
        SVar120.bridgeObject = (void *)acVar16;
        SVar120.str = (char *)acVar43;
        Swift::String::append(SVar105,SVar120);
        _swift_bridgeObjectRelease(_Var25.unknown);
        SVar106.bridgeObject = &DAT_e600000000000000;
        SVar106.str = (char *)0x27206f742027;
        puVar26 = &DAT_e600000000000000;
        SVar121.bridgeObject = (void *)acVar16;
        SVar121.str = (char *)acVar43;
        Swift::String::append(SVar106,SVar121);
        FUN_1005b32e4();
        SVar107.bridgeObject = puVar26;
        SVar107.str = (char *)param_3;
        SVar122.bridgeObject = (void *)acVar16;
        SVar122.str = (char *)acVar43;
        Swift::String::append(SVar107,SVar122);
        _swift_bridgeObjectRelease(puVar26);
        SVar108.bridgeObject = &SUB_e200000000000000;
        SVar108.str = (char *)0x2e27;
        puVar32 = (undefined8 *)0x2e27;
        SVar123.bridgeObject = (void *)acVar16;
        SVar123.str = (char *)acVar43;
        Swift::String::append(SVar108,SVar123);
        cVar45 = '\b';
        goto LAB_100a7d924;
      }
      pStack_a0.__opaque[0] = '\0';
      pStack_a0.__opaque[1] = '\0';
      pStack_a0.__opaque[2] = '\0';
      pStack_a0.__opaque[3] = '\0';
      pStack_a0.__opaque[4] = '\0';
      pStack_a0.__opaque[5] = '\0';
      pStack_a0.__opaque[6] = '\0';
      pStack_a0.__opaque[7] = '\0';
      acStack_90[0] = '\0';
      acStack_90[1] = '\0';
      acStack_90[2] = '\0';
      acStack_90[3] = '\0';
      acStack_90[4] = '\0';
      acStack_90[5] = '\0';
      acStack_90[6] = '\0';
      acStack_90[7] = -0x20;
      Swift::_StringGuts::grow(0x42,_Var24);
      pcVar1 = "An I/O error occurred while reading from \'";
      SVar112.str = (char *)0xd00000000000002a;
    }
    SVar100.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    SVar100.str = SVar112.str;
    SVar115.bridgeObject = (void *)acVar28;
    SVar115.str = (char *)acVar27;
    Swift::String::append(SVar100,SVar115);
    FUN_1005b32e4();
    SVar101.bridgeObject = SVar100.bridgeObject;
    SVar101.str = _Var24.unknown;
    SVar116.bridgeObject = (void *)acVar28;
    SVar116.str = (char *)acVar27;
    Swift::String::append(SVar101,SVar116);
    _swift_bridgeObjectRelease(SVar100.bridgeObject);
    _Var24.unknown = (undefined *)0x8000000100db93d0;
    SVar102.bridgeObject = (void *)0x8000000100db93d0;
    SVar102.str = (char *)0xd000000000000012;
    SVar117.bridgeObject = (void *)acVar28;
    SVar117.str = (char *)acVar27;
    Swift::String::append(SVar102,SVar117);
    FUN_1005b32e4();
    acVar15 = param_3;
    param_2.unknown = (undefined *)acVar29;
    unaff_x21.unknown = (undefined *)param_4;
    unaff_x22 = (char  [8])UNRECOVERED_JUMPTABLE;
switchD_100a411e8_caseD_45:
    SVar103.bridgeObject = _Var24.unknown;
    SVar103.str = (char *)acVar15;
    SVar118.bridgeObject = (void *)acVar28;
    SVar118.str = (char *)acVar27;
    Swift::String::append(SVar103,SVar118);
    _swift_bridgeObjectRelease(_Var24.unknown);
    SVar104.bridgeObject = &SUB_e200000000000000;
    SVar104.str = (char *)0x2e27;
    puVar32 = (undefined8 *)0x2e27;
    SVar119.bridgeObject = (void *)acVar28;
    SVar119.str = (char *)acVar27;
    Swift::String::append(SVar104,SVar119);
    cVar45 = '\x02';
    acVar29 = (char  [8])param_2.unknown;
    param_4 = (char  [8])unaff_x21.unknown;
    UNRECOVERED_JUMPTABLE = (code *)unaff_x22;
LAB_100a7d924:
    acVar27 = acStack_90;
    acVar16 = pStack_a0.__opaque;
    FUN_100a57a58();
    acVar43 = (char  [8])&DAT_100f2dfc8;
    _swift_allocError(&DAT_100f2dfc8,puVar32,0,0);
    acVar15 = pStack_a0.__opaque;
    *puVar32 = 0x656c6966646e6573;
    puVar32[1] = &DAT_e800000000000000;
    *(int *)(puVar32 + 2) = (int)UNRECOVERED_JUMPTABLE;
    lStack_b8 = *(long *)((long)param_4 + 8);
    lStack_c0 = *(long *)param_4;
    lStack_a8 = *(long *)((long)param_4 + 0x18);
    lStack_b0 = ((pthread_mutexattr_t *)((long)param_4 + 0x10))->__sig;
    unaff_x25[1] = lStack_a8;
    *unaff_x25 = lStack_b0;
    unaff_x25[3] = lStack_b8;
    unaff_x25[2] = lStack_c0;
    local_70 = (uint)lStack_b8;
    uStack_6c = (undefined4)((ulong)lStack_b8 >> 0x20);
    pStack_a0.__sig = ((pthread_mutexattr_t *)((long)param_4 + 0x20))->__sig;
    local_e0 = (undefined *)CONCAT71(local_e0._1_7_,cVar45);
    pStack_a0.__opaque[0] = acVar16[0];
    pStack_a0.__opaque[1] = acVar16[1];
    pStack_a0.__opaque[2] = acVar16[2];
    pStack_a0.__opaque[3] = acVar16[3];
    pStack_a0.__opaque[4] = acVar16[4];
    pStack_a0.__opaque[5] = acVar16[5];
    pStack_a0.__opaque[6] = acVar16[6];
    pStack_a0.__opaque[7] = acVar16[7];
    uStack_d8._0_1_ = pStack_a0.__opaque[0];
    uStack_d8._1_1_ = pStack_a0.__opaque[1];
    uStack_d8._2_1_ = pStack_a0.__opaque[2];
    uStack_d8._3_1_ = pStack_a0.__opaque[3];
    uStack_d8._4_1_ = pStack_a0.__opaque[4];
    uStack_d8._5_1_ = pStack_a0.__opaque[5];
    uStack_d8._6_1_ = pStack_a0.__opaque[6];
    uStack_d8._7_1_ = pStack_a0.__opaque[7];
    acStack_90[0] = acVar27[0];
    acStack_90[1] = acVar27[1];
    acStack_90[2] = acVar27[2];
    acStack_90[3] = acVar27[3];
    acStack_90[4] = acVar27[4];
    acStack_90[5] = acVar27[5];
    acStack_90[6] = acVar27[6];
    acStack_90[7] = acVar27[7];
    local_d0[0] = acStack_90[0];
    local_d0[1] = acStack_90[1];
    local_d0[2] = acStack_90[2];
    local_d0[3] = acStack_90[3];
    local_d0[4] = acStack_90[4];
    local_d0[5] = acStack_90[5];
    local_d0[6] = acStack_90[6];
    local_d0[7] = acStack_90[7];
    pStack_a0.__opaque._1_7_ = acVar15._1_7_;
    pStack_a0.__opaque[0] = cVar45;
    acVar15 = pStack_a0.__opaque;
    pStack_a0.__opaque[0] = acVar16[0];
    pStack_a0.__opaque[1] = acVar16[1];
    pStack_a0.__opaque[2] = acVar16[2];
    pStack_a0.__opaque[3] = acVar16[3];
    pStack_a0.__opaque[4] = acVar16[4];
    pStack_a0.__opaque[5] = acVar16[5];
    pStack_a0.__opaque[6] = acVar16[6];
    pStack_a0.__opaque[7] = acVar16[7];
    acStack_90[0] = pStack_a0.__opaque[0];
    acStack_90[1] = pStack_a0.__opaque[1];
    acStack_90[2] = pStack_a0.__opaque[2];
    acStack_90[3] = pStack_a0.__opaque[3];
    acStack_90[4] = pStack_a0.__opaque[4];
    acStack_90[5] = pStack_a0.__opaque[5];
    acStack_90[6] = pStack_a0.__opaque[6];
    acStack_90[7] = pStack_a0.__opaque[7];
    acVar16 = acStack_90;
    acStack_90[0] = acVar27[0];
    acStack_90[1] = acVar27[1];
    acStack_90[2] = acVar27[2];
    acStack_90[3] = acVar27[3];
    acStack_90[4] = acVar27[4];
    acStack_90[5] = acVar27[5];
    acStack_90[6] = acVar27[6];
    acStack_90[7] = acVar27[7];
    lStack_88._0_1_ = acStack_90[0];
    lStack_88._1_1_ = acStack_90[1];
    lStack_88._2_1_ = acStack_90[2];
    lStack_88._3_1_ = acStack_90[3];
    lStack_88._4_1_ = acStack_90[4];
    lStack_88._5_1_ = acStack_90[5];
    lStack_88._6_1_ = acStack_90[6];
    lStack_88._7_1_ = acStack_90[7];
    local_c8 = acVar43;
    pStack_a0.__opaque = acVar15;
    acStack_90 = acVar16;
    acStack_80 = acVar43;
    local_78 = lStack_c0;
    acStack_68 = (char  [8])lStack_b0;
    pcStack_60 = (code *)lStack_a8;
    acStack_58 = (char  [8])pStack_a0.__sig;
    FUN_10000ca28(puVar52 + -0xc,&stack0xfffffffffffffed8);
    FUN_10000ca28(puVar52 + -0xe,&stack0xfffffffffffffed8);
    puVar26 = &stack0xfffffffffffffed8;
    FUN_100a50050(&local_e0,puVar26);
    SVar112.str = pStack_a0.__opaque;
    FUN_100a5008c(SVar112.str);
    *(long *)((long)acVar29 + 0x28) = lStack_b8;
    ((pthread_mutexattr_t *)((long)acVar29 + 0x20))->__sig = lStack_c0;
    *(long *)((long)acVar29 + 0x38) = lStack_a8;
    ((pthread_mutexattr_t *)((long)acVar29 + 0x30))->__sig = lStack_b0;
    ((pthread_mutexattr_t *)((long)acVar29 + 0x40))->__sig = pStack_a0.__sig;
    *(char (*) [8])((long)acVar29 + 8) = uStack_d8;
    *(undefined **)acVar29 = local_e0;
    *(char (*) [8])((long)acVar29 + 0x18) = local_c8;
    ((pthread_mutexattr_t *)((long)acVar29 + 0x10))->__sig = (long)local_d0;
    auVar109._8_8_ = puVar26;
    auVar109._0_8_ = SVar112.str;
    return auVar109;
  case (char  [8])0xc7:
    acVar15._0_4_ = _pthread_mutex_lock((pthread_mutex_t *)((long)UNRECOVERED_JUMPTABLE + 0x38));
    acVar15[4] = (char)extraout_var;
    acVar15[5] = (char)((uint)extraout_var >> 8);
    acVar15[6] = (char)((uint)extraout_var >> 0x10);
    acVar15[7] = (char)((uint)extraout_var >> 0x18);
    if (acVar15._0_4_ != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69ff8);
      (*UNRECOVERED_JUMPTABLE)();
    }
    FUN_100a6a26c();
    if (acVar15 != (char  [8])&DAT_00000001) {
      *(code *)((long)UNRECOVERED_JUMPTABLE + 0x23) = (code)0x1;
    }
    acVar16._0_4_ = _pthread_mutex_unlock((pthread_mutex_t *)((long)UNRECOVERED_JUMPTABLE + 0x38));
    acVar16[4] = (char)extraout_var_00;
    acVar16[5] = (char)((uint)extraout_var_00 >> 8);
    acVar16[6] = (char)((uint)extraout_var_00 >> 0x10);
    acVar16[7] = (char)((uint)extraout_var_00 >> 0x18);
    if (acVar16._0_4_ != 0) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a69ffc);
      (*UNRECOVERED_JUMPTABLE)();
    }
    if ((ulong)acVar15 < 2) goto LAB_100a69fe0;
    CVar17 = Swift::CancellationError::typeMetadataAccessor();
    _Var24.unknown =
         (undefined *)
         ((long)&puStack_140 -
         (*(long *)(*(long *)(CVar17.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
    Swift::CancellationError::init();
    uVar33 = (long)&uStack_138 + 7;
    _swift_dynamicCast(uVar33,_Var24.unknown,CVar17.unknown,
                       PTR___type_metadata_for_Swift_Never_100eadc38,6);
    if ((uVar33 & 1) == 0) {
      puVar32 = *(undefined8 **)(((pthread_mutexattr_t *)((long)acVar15 + 0x40))->__sig + 0x28);
      puVar32[1] = 0;
      puVar32[2] = 0;
      *puVar32 = 1;
      _swift_continuation_throwingResume(acVar15);
      acVar16 = acVar15;
      goto LAB_100a69fe0;
    }
    puVar20 = PTR___type_metadata_for_Swift_Never_100eadc38;
    _swift_allocError(PTR___type_metadata_for_Swift_Never_100eadc38,
                      PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40,
                      0,0);
    _Var24.unknown = &DAT_100ff69f8;
    FUN_1000f7830(&DAT_100ff69f8,&DAT_100c910f0);
    puVar32 = (undefined8 *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    _swift_allocError();
    *puVar32 = puVar20;
  case (char  [8])0xe7:
    _swift_continuation_throwingResumeWithError();
    acVar16 = acVar15;
LAB_100a69fe0:
    auVar84._8_8_ = _Var24.unknown;
    auVar84[0] = acVar16[0];
    auVar84[1] = acVar16[1];
    auVar84[2] = acVar16[2];
    auVar84[3] = acVar16[3];
    auVar84[4] = acVar16[4];
    auVar84[5] = acVar16[5];
    auVar84[6] = acVar16[6];
    auVar84[7] = acVar16[7];
    return auVar84;
  case (char  [8])0xc9:
    goto switchD_100a411e8_caseD_c9;
  case (char  [8])0xcb:
    FUN_1009e5378();
    auVar88._8_8_ = _Var24.unknown;
    auVar88[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar88[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar88[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar88[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar88[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar88[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar88[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar88[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar88;
  case (char  [8])0xd3:
  case (char  [8])0xd7:
  case (char  [8])0xdb:
  case (char  [8])0xdf:
    *(char (*) [8])((long)acVar29 + 0x38) = acVar43;
    _swift_task_dealloc();
    _swift_release(param_2.unknown);
    if (acVar43 == (char  [8])0x0) {
      UNRECOVERED_JUMPTABLE = FUN_100a6c664;
    }
    else {
      UNRECOVERED_JUMPTABLE = FUN_100928d1c;
    }
    _Var24.unknown = (undefined *)0x0;
switchD_100a411e8_caseD_c9:
    _swift_task_switch();
    auVar96._8_8_ = _Var24.unknown;
    auVar96[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar96[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar96[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar96[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar96[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar96[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar96[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar96[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar96;
  case (char  [8])0xd5:
  case (char  [8])0xd9:
switchD_100a411e8_caseD_d5:
    FUN_10061217c();
    param_2.unknown = (undefined *)acVar43;
LAB_100a4d6fc:
    lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x160))->__sig;
    lVar51 = *(long *)((long)unaff_x22 + 0x168);
    _Var24.unknown = (undefined *)((long)unaff_x22 + 0xf0);
    _swift_beginAccess((pthread_mutexattr_t *)((long)param_2.unknown + 0x10),_Var24.unknown,0,0);
    *(int *)&((pthread_mutexattr_t *)((long)unaff_x21.unknown + 0x10))->__sig =
         (int)((pthread_mutexattr_t *)((long)param_2.unknown + 0x10))->__sig;
    *(undefined2 *)((long)unaff_x21.unknown + 0x14) = 0;
    *(undefined1 *)((long)unaff_x21.unknown + 0x16) = 0;
    SVar112.str = (char *)((long)unaff_x21.unknown + 8);
    SVar112.str[0] = '\0';
    SVar112.str[1] = '\0';
    SVar112.str[2] = '\0';
    SVar112.str[3] = '\0';
    SVar112.str[4] = '\0';
    SVar112.str[5] = '\0';
    SVar112.str[6] = '\0';
    SVar112.str[7] = '\0';
    iVar9 = *(int *)(lVar37 + 0x28);
    *(int *)&((pthread_mutexattr_t *)((long)unaff_x22 + 0x1a0))->__sig = iVar9;
    if ((*(byte *)(lVar51 + iVar9) & 1) == 0) {
      uVar42 = *(undefined8 *)
                (*(long *)((long)unaff_x22 + 0x168) + (long)*(int *)((long)unaff_x22 + 0x19c));
      pacVar18 = (char (*) [8])0x70;
      _swift_task_alloc();
      ((pthread_mutexattr_t *)((long)unaff_x22 + 0x170))->__sig = (long)pacVar18;
      *pacVar18 = unaff_x22;
      pacVar18[1] = (char  [8])FUN_100a4d864;
      lVar37 = ((pthread_mutexattr_t *)((long)unaff_x22 + 0x160))->__sig;
      FUN_100a4c6d0(uVar42,lVar37);
      auVar77._8_8_ = lVar37;
      auVar77._0_8_ = uVar42;
      return auVar77;
    }
    FUN_10096e070((pthread_mutexattr_t *)((long)unaff_x22 + 0x10));
LAB_100a4d80c:
    UNRECOVERED_JUMPTABLE = *(code **)((long)unaff_x22 + 8);
                    /* WARNING: Could not recover jumptable at 0x000100a4d830. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    auVar78._8_8_ = _Var24.unknown;
    auVar78._0_8_ = UNRECOVERED_JUMPTABLE;
    return auVar78;
  case (char  [8])0xdd:
    FUN_100612358();
    FUN_100612380();
    SVar112.str = (char *)((long)unaff_x22 + (long)unaff_x21.unknown);
    FUN_10061258c();
    if (CARRY4(pStack_a0.__opaque._4_4_,(uint)unaff_x21.unknown)) {
                    /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code *)SoftwareBreakpoint(1,0x100a4d464);
      (*UNRECOVERED_JUMPTABLE)();
    }
    auVar76._8_8_ = SVar112.str;
    auVar76._0_8_ = unaff_x21.unknown;
    return auVar76;
  case (char  [8])0xe1:
                    /* WARNING: Could not recover jumptable at 0x000100a4c938. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((long)unaff_x22 + 8))();
    auVar71._8_8_ = _Var24.unknown;
    auVar71[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar71[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar71[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar71[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar71[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar71[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar71[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar71[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar71;
  case (char  [8])0xe9:
    puStack_140 = (undefined8 *)
                  ((ulong)puVar32 | (ulong)PTR__swift_async_extendedFramePointerFlags_100eaf070);
    uStack_138 = 0x100a411d0;
    unaff_x23 = (ulong)(byte)*(code *)((long)unaff_x22 + 0x42);
    unaff_x24 = (long *)(ulong)(ushort)((pthread_mutexattr_t *)((long)unaff_x22 + 0x40))->__sig;
    param_2.unknown = *(undefined **)((long)unaff_x22 + 0x18);
    acVar43 = (char  [8])((pthread_mutexattr_t *)((long)unaff_x22 + 0x20))->__sig;
    UNRECOVERED_JUMPTABLE = (code *)&DAT_100f2d440;
  case (char  [8])0xfd:
    _swift_allocObject();
    *(code **)((long)unaff_x22 + 0x28) = UNRECOVERED_JUMPTABLE;
    ((pthread_mutexattr_t *)((long)UNRECOVERED_JUMPTABLE + 0x10))->__sig = (long)acVar43;
    *(code *)((long)UNRECOVERED_JUMPTABLE + 0x18) = SUB81(unaff_x23,0);
    ((pthread_mutexattr_t *)((long)UNRECOVERED_JUMPTABLE + 0x20))->__sig = (long)param_2.unknown;
    *(byte *)((long)UNRECOVERED_JUMPTABLE + 0x28) = (byte)unaff_x24 & 1;
    *(byte *)((long)UNRECOVERED_JUMPTABLE + 0x29) = (byte)((ulong)unaff_x24 >> 8) & 1;
    pacVar18 = (char (*) [8])0xa0;
    _swift_retain(acVar43);
    _swift_bridgeObjectRetain(param_2.unknown);
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x30))->__sig = (long)pacVar18;
    puVar20 = &DAT_100ff6950;
    FUN_1000f7830(&DAT_100ff6950,&DAT_100c908b8);
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])FUN_100a6c5f8;
    pcVar44 = FUN_100a738d0;
    ppVar47 = (pthread_mutexattr_t *)((long)unaff_x22 + 0x10);
    FUN_100912dec(ppVar47,FUN_100a738d0,UNRECOVERED_JUMPTABLE,puVar20);
    auVar95._8_8_ = pcVar44;
    auVar95._0_8_ = ppVar47;
    return auVar95;
  case (char  [8])0xeb:
    lVar37 = 0;
    _swift_getAssociatedTypeWitness
              (0,acStack_80,acStack_90,0x100ccad0c,&TargetProtocolRequirement_100ccad44);
    uVar33 = (ulong)*(byte *)(*(long *)(lVar37 + -8) + 0x50);
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])thunk_FUN_1005c804c;
    FUN_100a679b0(UNRECOVERED_JUMPTABLE,_Var24.unknown,
                  (code *)((long)acVar43 + (uVar33 + 0x28 & (uVar33 ^ 0xffffffffffffffff))),
                  acStack_90,lStack_88,acStack_80);
    auVar87._8_8_ = _Var24.unknown;
    auVar87[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar87[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar87[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar87[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar87[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar87[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar87[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar87[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar87;
  case (char  [8])0xf3:
    _swift_bridgeObjectRelease();
    auVar94._8_8_ = _Var24.unknown;
    auVar94[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar94[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar94[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar94[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar94[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar94[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar94[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar94[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar94;
  case (char  [8])0xfb:
    FUN_1009e8ec8();
    CVar17 = Swift::CancellationError::init();
    FUN_100a5784c();
    _swift_allocError();
    local_78 = unaff_x26;
    (**(code **)(unaff_x23 + 0x20))();
    FUN_1006883ac();
    acStack_68 = (char  [8])((ulong)acStack_68 & 1);
    _swift_retain(*(undefined8 *)CVar17.unknown);
    FUN_1009e8f30(pStack_a0.__sig,pStack_a0.__opaque,acStack_90,lStack_88,acStack_80,
                  local_78 & 0xffff,local_78._2_1_);
    *(undefined8 *)unaff_x22 = 0;
    SVar112.str = (char *)((long)unaff_x22 + 8);
    SVar112.str[0] = '\0';
    SVar112.str[1] = '\0';
    SVar112.str[2] = '\0';
    SVar112.str[3] = '\0';
    SVar112.str[4] = '\0';
    SVar112.str[5] = '\0';
    SVar112.str[6] = '\0';
    SVar112.str[7] = '\0';
    *(undefined2 *)&((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = 0;
    auVar85[8] = pStack_a0.__opaque[0];
    auVar85[9] = pStack_a0.__opaque[1];
    auVar85[10] = pStack_a0.__opaque[2];
    auVar85[0xb] = pStack_a0.__opaque[3];
    auVar85[0xc] = pStack_a0.__opaque[4];
    auVar85[0xd] = pStack_a0.__opaque[5];
    auVar85[0xe] = pStack_a0.__opaque[6];
    auVar85[0xf] = pStack_a0.__opaque[7];
    auVar85._0_8_ = 1;
    return auVar85;
  case (char  [8])0xff:
    pacVar18 = (char (*) [8])0x20;
    _swift_task_alloc();
    ((pthread_mutexattr_t *)((long)unaff_x22 + 0x10))->__sig = (long)pacVar18;
    *pacVar18 = unaff_x22;
    pacVar18[1] = (char  [8])thunk_FUN_1005c804c;
    FUN_1009e5378(pacVar18,UNRECOVERED_JUMPTABLE,local_78,CONCAT44(uStack_6c,local_70),acStack_68,
                  acStack_90,lStack_88,acStack_80);
    auVar86._8_8_ = local_78;
    auVar86[0] = (char)UNRECOVERED_JUMPTABLE;
    auVar86[1] = SUB81(UNRECOVERED_JUMPTABLE,1);
    auVar86[2] = SUB81(UNRECOVERED_JUMPTABLE,2);
    auVar86[3] = SUB81(UNRECOVERED_JUMPTABLE,3);
    auVar86[4] = SUB81(UNRECOVERED_JUMPTABLE,4);
    auVar86[5] = SUB81(UNRECOVERED_JUMPTABLE,5);
    auVar86[6] = SUB81(UNRECOVERED_JUMPTABLE,6);
    auVar86[7] = SUB81(UNRECOVERED_JUMPTABLE,7);
    return auVar86;
  }
  _swift_bridgeObjectRelease(local_c8);
switchD_100a411e8_caseD_c:
  _Var24.unknown = &DAT_100ff65e8;
  FUN_1000fb4c4(&pStack_a0,&DAT_100ff65e8,&DAT_100c90248);
  uVar41 = 0;
LAB_100a41660:
  auVar55._4_4_ = 0;
  auVar55._0_4_ = uVar41 & 1;
  auVar55[8] = (char)_Var24.unknown;
  auVar55[9] = SUB81(_Var24.unknown,1);
  auVar55[10] = SUB81(_Var24.unknown,2);
  auVar55[0xb] = SUB81(_Var24.unknown,3);
  auVar55[0xc] = SUB81(_Var24.unknown,4);
  auVar55[0xd] = SUB81(_Var24.unknown,5);
  auVar55[0xe] = SUB81(_Var24.unknown,6);
  auVar55[0xf] = SUB81(_Var24.unknown,7);
  return auVar55;
}



/* Address: 0x100a416b8 | FUN_100a416b8 */

/* WARNING: Removing unreachable block (ram,0x000100a41780) */

undefined8 FUN_100a416b8(undefined8 param_1)

{
  code *pcVar1;
  undefined *local_50;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  local_50 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  FUN_100a3e2a0(PTR___swiftEmptyArrayStorage_100eae0d8,1,&local_50);
  local_50 = (undefined *)0x0;
  local_48 = 0;
  _clock_gettime(0,&local_50);
  if ((long)local_50 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a41778);
    (*pcVar1)();
  }
  if (-1 < local_48) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_38) {
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a4177c);
  (*pcVar1)();
}



/* Address: 0x100a417a0 | FUN_100a417a0 */

undefined8 FUN_100a417a0(undefined8 param_1,undefined8 param_2)

{
  FUN_100a42368(param_2,param_1,&DAT_100f2a720);
  return param_2;
}



/* Address: 0x100a417d4 | FUN_100a417d4 */

void FUN_100a417d4(void)

{
  byte bVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  bVar1 = *(byte *)(unaff_x20 + 0x38);
  if (bVar1 < 8) {
    if (bVar1 < 5) {
      if ((bVar1 != 2) && (bVar1 != 3)) goto LAB_100a4184c;
    }
    else if ((bVar1 != 5) && (bVar1 != 7)) goto LAB_100a4184c;
LAB_100a41844:
    uVar2 = *(undefined8 *)(unaff_x20 + 0x10);
  }
  else {
    if (9 < bVar1) {
      if (bVar1 == 10) {
        FUN_100004594(unaff_x20 + 0x10);
        goto LAB_100a4184c;
      }
      if (bVar1 != 0xb) goto LAB_100a4184c;
      goto LAB_100a41844;
    }
    if (bVar1 != 8) {
      if (bVar1 != 9) goto LAB_100a4184c;
      goto LAB_100a41844;
    }
    uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  }
  _swift_bridgeObjectRelease(uVar2);
LAB_100a4184c:
  _swift_deallocObject();
  return;
}



/* Address: 0x100a41874 | FUN_100a41874 */

undefined8
FUN_100a41874(char param_1,_StringGuts param_2,_StringGuts param_3,char param_4,undefined *param_5,
             undefined *param_6)

{
  bool bVar1;
  
  if (param_1 == param_4) {
    if (param_3.unknown == (undefined *)0x0) {
      if (param_6 == (undefined *)0x0) {
        return 1;
      }
    }
    else if (param_6 != (undefined *)0x0) {
      if ((param_2.unknown == param_5) && (param_3.unknown == param_6)) {
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_2,param_3,(_StringComparisonResult)(__int8)param_5);
      if (bVar1) {
        return 1;
      }
    }
  }
  return 0;
}



/* Address: 0x100a418e4 | FUN_100a418e4 */

void FUN_100a418e4(undefined8 param_1,long *param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  Optional OVar3;
  undefined7 extraout_var;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined1 *puVar12;
  long lVar13;
  long lVar14;
  undefined1 auStack_130 [8];
  long local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined1 auStack_108 [24];
  long local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined1 auStack_b0 [32];
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined *local_78;
  undefined **local_70;
  
  lVar6 = *param_2;
  lVar7 = *(long *)PTR___class_metadata_base_offset_for_Swift_KeyPath_100eadf28;
  local_128 = ((long *)(lVar6 + lVar7))[1];
  lVar11 = *(long *)(local_128 + 0x10);
  local_120 = param_1;
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar13 = CONCAT71(extraout_var,OVar3.value);
  lVar9 = *(long *)(lVar13 + -8);
  puVar12 = auStack_130 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(lVar6 + lVar7);
  lVar14 = *(long *)(lVar7 + -8);
  lVar10 = (long)puVar12 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = param_4;
  local_118 = param_3;
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,lVar7,0x100cca240,&TargetProtocolRequirement_100cca248);
  (**(code **)(lVar6 + 0x10))(lVar10,lVar7,lVar6);
  _swift_getAtKeyPath(&local_e0,lVar10,param_2);
  (**(code **)(lVar14 + 8))(lVar10,lVar7);
  uVar2 = uStack_d8;
  uVar1 = local_e0;
  (**(code **)(lVar9 + 0x10))(puVar12,local_120,lVar13);
  lVar6 = *(long *)(lVar11 + -8);
  puVar4 = puVar12;
  (**(code **)(lVar6 + 0x30))(puVar12,1,lVar11);
  if ((int)puVar4 == 1) {
    (**(code **)(lVar9 + 8))(puVar12,lVar13);
    local_70 = (undefined **)0x0;
    uStack_88 = 0;
    local_90 = (undefined *)0x0;
    local_78 = (undefined *)0x0;
    uStack_80 = 0;
  }
  else {
    lVar13 = *(long *)(local_128 + 0x18);
    pcVar8 = *(code **)(lVar13 + 8);
    local_78 = &DAT_100f2a720;
    local_70 = &PTR_PTR_100f2a530;
    puVar5 = &DAT_100f2a518;
    _swift_allocObject(&DAT_100f2a518,0x39,7);
    local_90 = puVar5;
    (*pcVar8)(puVar5 + 0x10,lVar11,lVar13);
    (**(code **)(lVar6 + 8))(puVar12,lVar11);
  }
  pcVar8 = (code *)auStack_b0;
  (**(code **)(param_4 + 0x28))(pcVar8,local_118,param_4);
  FUN_1000f8cac(&local_90,auStack_108,&DAT_100ff6500,&DAT_100c8fb38);
  if (local_f0 == 0) {
    FUN_1000fb4c4(auStack_108,&DAT_100ff6500,&DAT_100c8fb38);
    uStack_d8 = 0;
    local_e0 = 0;
    uStack_c8 = 0;
    uStack_d0 = 0;
    local_c0 = 0;
    local_b8 = 0xff;
  }
  else {
    FUN_100004640(auStack_108,local_f0);
    (**(code **)(local_e8 + 8))(&local_e0,local_f0,local_e8);
    FUN_100004594(auStack_108);
  }
  FUN_100a3fecc(&local_e0,uVar1,uVar2);
  FUN_1000fb4c4(&local_90,&DAT_100ff6500,&DAT_100c8fb38);
  (*pcVar8)(auStack_b0,0);
  return;
}



/* Address: 0x100a41ba4 | FUN_100a41ba4 */

void FUN_100a41ba4(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,long *param_5)

{
  ulong *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 *puVar13;
  long lVar14;
  long lVar15;
  undefined1 auStack_150 [48];
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined1 uStack_108;
  undefined7 local_107;
  undefined1 uStack_100;
  undefined8 uStack_ff;
  ulong local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  undefined1 uStack_b8;
  undefined8 uStack_b7;
  long local_a8;
  ulong *puStack_a0;
  ulong local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  
  uVar10 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  local_98 = ~uVar10;
  puStack_a0 = (ulong *)(param_1 + 0x40);
  uVar10 = -uVar10;
  local_88 = 0xffffffffffffffff;
  if (uVar10 < 0x40) {
    local_88 = ~(-1L << (uVar10 & 0x3f));
  }
  uStack_90 = 0;
  local_88 = local_88 & *puStack_a0;
  local_a8 = param_1;
  uStack_80 = param_2;
  local_78 = param_3;
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  FUN_100a40ff8(&local_e8);
  uVar2 = local_e0;
  uVar10 = local_e8;
  uVar3 = local_120;
  uVar4 = uStack_118;
  uVar5 = uStack_110;
  uVar6 = uStack_ff;
  if (local_e0 == 0) goto LAB_100a41eac;
  uStack_118 = uStack_d0;
  local_120 = local_d8;
  uStack_108 = uStack_c0;
  uStack_110 = local_c8;
  uStack_ff = uStack_b7;
  local_107 = uStack_bf;
  uStack_100 = uStack_b8;
  lVar15 = *param_5;
  uVar8 = local_e8;
  uVar9 = local_e0;
  FUN_100071370();
  lVar11 = *(long *)(lVar15 + 0x10);
  uVar12 = (ulong)~(uint)uVar9 & 1;
  lVar14 = lVar11 + uVar12;
  if (SCARRY8(lVar11,uVar12)) {
LAB_100a41ee8:
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100a41eec);
    (*pcVar7)();
  }
  if (*(long *)(lVar15 + 0x18) < lVar14) {
    FUN_100a40984(lVar14,param_4 & 1);
    uVar8 = uVar10;
    uVar12 = uVar2;
    FUN_100071370();
    if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) {
LAB_100a41cb4:
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a41cc4);
      (*pcVar7)();
    }
LAB_100a41cc8:
    if ((uVar9 & 1) != 0) goto LAB_100a41ccc;
LAB_100a41d1c:
    lVar11 = *param_5;
    lVar14 = lVar11 + (uVar8 >> 6) * 8;
    *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar8 & 0x3f);
    puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar8 * 0x10);
    *puVar1 = uVar10;
    puVar1[1] = uVar2;
    puVar13 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar8 * 0x30);
    *(undefined8 *)((long)puVar13 + 0x21) = uStack_ff;
    *(ulong *)((long)puVar13 + 0x19) = CONCAT17(uStack_100,local_107);
    puVar13[1] = uStack_118;
    *puVar13 = local_120;
    puVar13[3] = CONCAT71(local_107,uStack_108);
    puVar13[2] = uStack_110;
    if (SCARRY8(*(long *)(lVar11 + 0x10),1)) {
LAB_100a41eec:
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100a41ef0);
      (*pcVar7)();
    }
    *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
  }
  else {
    if ((param_4 & 1) != 0) goto LAB_100a41cc8;
    FUN_100a407d4();
    if ((uVar9 & 1) == 0) goto LAB_100a41d1c;
LAB_100a41ccc:
    lVar14 = *param_5;
    FUN_100a417a0(&local_120,auStack_150);
    _swift_bridgeObjectRelease(uVar2);
    FUN_100a3e6f0(&local_120);
    FUN_100a42a2c(auStack_150,*(long *)(lVar14 + 0x38) + uVar8 * 0x30);
  }
  FUN_100a40ff8(&local_e8);
  uVar3 = local_120;
  uVar4 = uStack_118;
  uVar5 = uStack_110;
  uVar6 = uStack_ff;
  uVar10 = local_e8;
  uVar2 = local_e0;
  local_120 = local_d8;
  uStack_118 = uStack_d0;
  uStack_110 = local_c8;
  uStack_108 = uStack_c0;
  local_107 = uStack_bf;
  uStack_100 = uStack_b8;
  uStack_ff = uStack_b7;
  while (uVar2 != 0) {
    lVar15 = *param_5;
    uVar8 = uVar10;
    uVar9 = uVar2;
    local_e8 = uVar10;
    local_e0 = uVar2;
    local_d8 = local_120;
    uStack_d0 = uStack_118;
    local_c8 = uStack_110;
    uStack_c0 = uStack_108;
    uStack_bf = local_107;
    uStack_b8 = uStack_100;
    uStack_b7 = uStack_ff;
    FUN_100071370();
    lVar11 = *(long *)(lVar15 + 0x10);
    uVar12 = (ulong)~(uint)uVar9 & 1;
    lVar14 = lVar11 + uVar12;
    if (SCARRY8(lVar11,uVar12)) goto LAB_100a41ee8;
    if (*(long *)(lVar15 + 0x18) < lVar14) {
      FUN_100a40984(lVar14,1);
      uVar8 = uVar10;
      uVar12 = uVar2;
      FUN_100071370();
      if (((uint)uVar9 & 1) != ((uint)uVar12 & 1)) goto LAB_100a41cb4;
    }
    if ((uVar9 & 1) == 0) {
      lVar11 = *param_5;
      lVar14 = lVar11 + (uVar8 >> 6) * 8;
      *(ulong *)(lVar14 + 0x40) = *(ulong *)(lVar14 + 0x40) | 1L << (uVar8 & 0x3f);
      puVar1 = (ulong *)(*(long *)(lVar11 + 0x30) + uVar8 * 0x10);
      *puVar1 = uVar10;
      puVar1[1] = uVar2;
      puVar13 = (undefined8 *)(*(long *)(lVar11 + 0x38) + uVar8 * 0x30);
      *(undefined8 *)((long)puVar13 + 0x21) = uStack_ff;
      *(ulong *)((long)puVar13 + 0x19) = CONCAT17(uStack_100,local_107);
      puVar13[1] = uStack_118;
      *puVar13 = local_120;
      puVar13[3] = CONCAT71(local_107,uStack_108);
      puVar13[2] = uStack_110;
      if (SCARRY8(*(long *)(lVar11 + 0x10),1)) goto LAB_100a41eec;
      *(long *)(lVar11 + 0x10) = *(long *)(lVar11 + 0x10) + 1;
    }
    else {
      lVar14 = *param_5;
      FUN_100a417a0(&local_120,auStack_150);
      _swift_bridgeObjectRelease(uVar2);
      FUN_100a3e6f0(&local_120);
      FUN_100a42a2c(auStack_150,*(long *)(lVar14 + 0x38) + uVar8 * 0x30);
    }
    FUN_100a40ff8(&local_e8);
    uVar3 = local_120;
    uVar4 = uStack_118;
    uVar5 = uStack_110;
    uVar6 = uStack_ff;
    uVar10 = local_e8;
    uVar2 = local_e0;
    local_120 = local_d8;
    uStack_118 = uStack_d0;
    uStack_110 = local_c8;
    uStack_108 = uStack_c0;
    local_107 = uStack_bf;
    uStack_100 = uStack_b8;
    uStack_ff = uStack_b7;
  }
LAB_100a41eac:
  uStack_ff = uVar6;
  uStack_110 = uVar5;
  uStack_118 = uVar4;
  local_120 = uVar3;
  FUN_10000c650(local_a8,puStack_a0,local_98,uStack_90,local_88);
  _swift_release(param_3);
  return;
}



/* Address: 0x100a41ef0 | FUN_100a41ef0 */

void FUN_100a41ef0(undefined8 param_1)

{
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70 [5];
  undefined1 local_48;
  
  local_70[0] = 0;
  local_48 = 1;
  _swift_getAtKeyPath(&local_80,local_70);
  FUN_100a3e6f0(local_70);
  FUN_1000f8cac(param_1,local_70,&DAT_100ff64f0,&DAT_100c8fb28);
  FUN_100a3fecc(local_70,local_80,uStack_78);
  FUN_1000fb4c4(param_1,&DAT_100ff64f0,&DAT_100c8fb28);
  return;
}



/* Address: 0x100a41f8c | thunk_FUN_100a41f90 */

void thunk_FUN_100a41f90(void)

{
  byte *pbVar1;
  
  if (DAT_100ff6518 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c8fbb8;
  _swift_getWitnessTable(&BYTE_100c8fbb8,&DAT_100f2a628);
  DAT_100ff6518 = pbVar1;
  return;
}



/* Address: 0x100a41f90 | FUN_100a41f90 */

void FUN_100a41f90(void)

{
  byte *pbVar1;
  
  if (DAT_100ff6518 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c8fbb8;
  _swift_getWitnessTable(&BYTE_100c8fbb8,&DAT_100f2a628);
  DAT_100ff6518 = pbVar1;
  return;
}



/* Address: 0x100a41fd0 | thunk_FUN_100a41fd4 */

void thunk_FUN_100a41fd4(void)

{
  undefined *puVar1;
  
  if (DAT_100ff6520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8fbf8;
  _swift_getWitnessTable(&DAT_100c8fbf8,&DAT_100f2a628);
  DAT_100ff6520 = puVar1;
  return;
}



/* Address: 0x100a41fd4 | FUN_100a41fd4 */

void FUN_100a41fd4(void)

{
  undefined *puVar1;
  
  if (DAT_100ff6520 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8fbf8;
  _swift_getWitnessTable(&DAT_100c8fbf8,&DAT_100f2a628);
  DAT_100ff6520 = puVar1;
  return;
}



/* Address: 0x100a42014 | FUN_100a42014 */

void FUN_100a42014(undefined8 param_1)

{
  _swift_getWitnessTable(&DAT_100c8fcb0,param_1);
  return;
}



/* Address: 0x100a42024 | FUN_100a42024 */

void FUN_100a42024(undefined8 param_1)

{
  _swift_getWitnessTable(&DAT_100c8fcd8,param_1);
  return;
}



/* Address: 0x100a42034 | FUN_100a42034 */

void FUN_100a42034(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fd18,param_1);
  return;
}



/* Address: 0x100a42044 | thunk_FUN_100a42048 */

void thunk_FUN_100a42048(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fe00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fe00,&DAT_100f2a720);
  DAT_100ff6528 = pTVar1;
  return;
}



/* Address: 0x100a42048 | FUN_100a42048 */

void FUN_100a42048(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6528 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fe00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fe00,&DAT_100f2a720);
  DAT_100ff6528 = pTVar1;
  return;
}



/* Address: 0x100a42088 | thunk_FUN_100a4208c */

void thunk_FUN_100a4208c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fe40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fe40,&DAT_100f2a720);
  DAT_100ff6530 = pTVar1;
  return;
}



/* Address: 0x100a4208c | FUN_100a4208c */

void FUN_100a4208c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6530 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fe40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fe40,&DAT_100f2a720);
  DAT_100ff6530 = pTVar1;
  return;
}



/* Address: 0x100a420cc | thunk_FUN_100a420d0 */

void thunk_FUN_100a420d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fdc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fdc0,&DAT_100f2a720);
  DAT_100ff6538 = pTVar1;
  return;
}



/* Address: 0x100a420d0 | FUN_100a420d0 */

void FUN_100a420d0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6538 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8fdc0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8fdc0,&DAT_100f2a720);
  DAT_100ff6538 = pTVar1;
  return;
}



/* Address: 0x100a42110 | thunk_FUN_100a42114 */

void thunk_FUN_100a42114(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90020;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90020,&DAT_100f2a858);
  DAT_100ff6540 = pTVar1;
  return;
}



/* Address: 0x100a42114 | FUN_100a42114 */

void FUN_100a42114(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6540 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c90020;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c90020,&DAT_100f2a858);
  DAT_100ff6540 = pTVar1;
  return;
}



/* Address: 0x100a42154 | thunk_FUN_100a42158 */

void thunk_FUN_100a42158(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c900b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c900b0,&DAT_100f2a8e8);
  DAT_100ff6548 = pTVar1;
  return;
}



/* Address: 0x100a42158 | FUN_100a42158 */

void FUN_100a42158(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff6548 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c900b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c900b0,&DAT_100f2a8e8);
  DAT_100ff6548 = pTVar1;
  return;
}



/* Address: 0x100a42198 | FUN_100a42198 */

undefined8 * FUN_100a42198(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar2 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x100a421e0 | FUN_100a421e0 */

undefined8 * FUN_100a421e0(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a4224c | FUN_100a4224c */

void FUN_100a4224c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x100a42258 | FUN_100a42258 */

undefined8 * FUN_100a42258(undefined8 *param_1,undefined8 *param_2)

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
  param_1[3] = param_2[3];
  return param_1;
}



/* Address: 0x100a422a4 | FUN_100a422a4 */

undefined1  [16] FUN_100a422a4(void)

{
  return ZEXT816(0x100f2a628);
}



/* Address: 0x100a422b4 | FUN_100a422b4 */

void FUN_100a422b4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  return;
}



/* Address: 0x100a422c0 | FUN_100a422c0 */

void FUN_100a422c0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100a422cc | FUN_100a422cc */

void FUN_100a422cc(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (0xb < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 0xc;
  }
  if ((int)uVar1 < 8) {
    if ((int)uVar1 < 5) {
      if ((uVar1 == 2) || (uVar1 == 3)) {
        _swift_bridgeObjectRelease(*(undefined8 *)param_1);
        return;
      }
    }
    else if ((uVar1 == 5) || (uVar1 == 7)) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
  }
  else if ((int)uVar1 < 10) {
    if (uVar1 == 8) {
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 2));
      return;
    }
    if (uVar1 == 9) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
  }
  else {
    if (uVar1 == 10) {
      FUN_100004594();
      return;
    }
    if (uVar1 == 0xb) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
  }
  return;
}



/* Address: 0x100a42368 | FUN_100a42368 */

int * FUN_100a42368(int *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = (uint)*(byte *)(param_2 + 10);
  if (0xb < *(byte *)(param_2 + 10)) {
    uVar1 = *param_2 + 0xc;
  }
  switch(uVar1) {
  case 0:
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 10) = 0;
    return param_1;
  case 1:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 1;
    return param_1;
  case 2:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 2;
    break;
  case 3:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 3;
    break;
  case 4:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 4;
    return param_1;
  case 5:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 5;
    break;
  case 6:
    *(char *)param_1 = (char)*param_2;
    *(undefined1 *)(param_1 + 10) = 6;
    return param_1;
  case 7:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 7;
    break;
  case 8:
    uVar2 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = uVar2;
    uVar3 = 8;
    break;
  case 9:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 9;
    break;
  case 10:
    lVar4 = *(long *)(param_2 + 6);
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    *(long *)(param_1 + 6) = lVar4;
    (*(code *)**(undefined8 **)(lVar4 + -8))();
    *(undefined1 *)(param_1 + 10) = 10;
    return param_1;
  case 0xb:
    uVar2 = *(undefined8 *)param_2;
    *(undefined8 *)param_1 = uVar2;
    uVar3 = 0xb;
    break;
  default:
    uVar2 = *(undefined8 *)param_2;
    uVar6 = *(undefined8 *)(param_2 + 6);
    uVar5 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar2;
    *(undefined8 *)(param_1 + 6) = uVar6;
    *(undefined8 *)(param_1 + 4) = uVar5;
    uVar2 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar2;
    return param_1;
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
  _swift_bridgeObjectRetain(uVar2);
  return param_1;
}



/* Address: 0x100a424c4 | FUN_100a424c4 */

int * FUN_100a424c4(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar4 = (uint)*(byte *)(param_1 + 10);
  if (0xb < *(byte *)(param_1 + 10)) {
    uVar4 = *param_1 + 0xc;
  }
  if ((int)uVar4 < 8) {
    if ((int)uVar4 < 5) {
      if ((uVar4 != 2) && (uVar4 != 3)) goto LAB_100a42560;
    }
    else if ((uVar4 != 5) && (uVar4 != 7)) goto LAB_100a42560;
LAB_100a42558:
    uVar1 = *(undefined8 *)param_1;
  }
  else {
    if (9 < (int)uVar4) {
      if (uVar4 == 10) {
        FUN_100004594(param_1);
        goto LAB_100a42560;
      }
      if (uVar4 != 0xb) goto LAB_100a42560;
      goto LAB_100a42558;
    }
    if (uVar4 != 8) {
      if (uVar4 != 9) goto LAB_100a42560;
      goto LAB_100a42558;
    }
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  _swift_bridgeObjectRelease(uVar1);
LAB_100a42560:
  uVar4 = (uint)*(byte *)(param_2 + 10);
  if (0xb < *(byte *)(param_2 + 10)) {
    uVar4 = *param_2 + 0xc;
  }
  switch(uVar4) {
  case 0:
    *param_1 = *param_2;
    *(undefined1 *)(param_1 + 10) = 0;
    return param_1;
  case 1:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 1;
    return param_1;
  case 2:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 2;
    break;
  case 3:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 3;
    break;
  case 4:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined1 *)(param_1 + 10) = 4;
    return param_1;
  case 5:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 5;
    break;
  case 6:
    *(char *)param_1 = (char)*param_2;
    *(undefined1 *)(param_1 + 10) = 6;
    return param_1;
  case 7:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 7;
    break;
  case 8:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    uVar3 = 8;
    break;
  case 9:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 9;
    break;
  case 10:
    lVar2 = *(long *)(param_2 + 6);
    *(long *)(param_1 + 6) = lVar2;
    *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
    *(undefined1 *)(param_1 + 10) = 10;
    return param_1;
  case 0xb:
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    uVar3 = 0xb;
    break;
  default:
    uVar5 = *(undefined8 *)(param_2 + 2);
    uVar1 = *(undefined8 *)param_2;
    uVar7 = *(undefined8 *)(param_2 + 6);
    uVar6 = *(undefined8 *)(param_2 + 4);
    uVar8 = *(undefined8 *)((long)param_2 + 0x19);
    *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
    *(undefined8 *)((long)param_1 + 0x19) = uVar8;
    *(undefined8 *)(param_1 + 2) = uVar5;
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar7;
    *(undefined8 *)(param_1 + 4) = uVar6;
    return param_1;
  }
  *(undefined1 *)(param_1 + 10) = uVar3;
  _swift_bridgeObjectRetain();
  return param_1;
}


