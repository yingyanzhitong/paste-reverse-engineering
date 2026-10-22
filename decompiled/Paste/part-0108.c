/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100155144 | FUN_100155144 */

undefined1 * FUN_100155144(long param_1,undefined8 param_2)

{
  byte bVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  size_t sVar4;
  undefined1 *unaff_x21;
  ulong uVar5;
  size_t sVar6;
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined1 *local_80 [2];
  undefined1 auStack_70 [16];
  undefined8 local_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar5 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  sVar6 = uVar5 * 8;
  local_60 = param_2;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
  }
  else {
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xc,3,0,0xf,4,0);
    _swift_bridgeObjectRetain(param_2);
    _swift_retain(param_1);
    if (((bVar1 & 1) == 0) ||
       (sVar4 = sVar6, _swift_stdlib_isStackAllocationSafe(sVar6,8), (sVar4 & 1) == 0)) {
      _swift_slowAlloc(sVar6,0xffffffffffffffff);
      _swift_retain(param_1);
      FUN_1001539bc(local_80,sVar6,uVar5,param_1,FUN_100155998,auStack_70,&local_88);
      puVar2 = local_80[0];
      if (unaff_x21 != (undefined1 *)0x0) {
        puVar2 = local_88;
      }
      _swift_slowDealloc(sVar6,0xffffffffffffffff,0xffffffffffffffff);
      goto joined_r0x00010015534c;
    }
  }
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar2 = auStack_90 + -(sVar6 + 0xf & 0x3ffffffffffffff0);
  _bzero(puVar2,sVar6);
  _swift_bridgeObjectRetain(param_2);
  FUN_100154ed0(puVar2,uVar5,param_1,param_2);
  if (unaff_x21 != (undefined1 *)0x0) {
    puVar2 = unaff_x21;
  }
  _swift_bridgeObjectRelease(param_2);
joined_r0x00010015534c:
  if (unaff_x21 == (undefined1 *)0x0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_release(param_1);
  }
  else {
    local_88 = puVar2;
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    if ((bVar1 & 1) != 0) {
      puVar3 = &DAT_100faf510;
      FUN_1000f7830(&DAT_100faf510,&DAT_100c2e820);
      _swift_willThrowTypedImpl
                (&local_88,puVar3,
                 PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    }
    _swift_release(param_1);
    _swift_bridgeObjectRelease(param_2);
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar2;
}



/* Address: 0x1001553a0 | FUN_1001553a0 */

void FUN_1001553a0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001553c4 | FUN_1001553c4 */

void FUN_1001553c4(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_6);
    return;
  }
  return;
}



/* Address: 0x100155400 | FUN_100155400 */

void FUN_100155400(long param_1,code *param_2,undefined8 param_3,uint param_4,long *param_5)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  ulong uVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  ulong uVar18;
  ulong local_a0;
  ulong uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar13 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 6) {
    uVar18 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar18 = uVar18 & *(ulong *)(param_1 + 0x40);
  _swift_bridgeObjectRetain();
  _swift_retain(param_3);
  lVar17 = 0;
  while( true ) {
    while (uVar18 != 0) {
      uVar11 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
      uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
      uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
      uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
      uVar11 = lVar17 << 10 | LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) << 4;
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar11);
      local_80 = *puVar1;
      uVar3 = puVar1[1];
      puVar1 = (undefined8 *)(*(long *)(param_1 + 0x38) + uVar11);
      local_70 = *puVar1;
      uVar4 = puVar1[1];
      uStack_78 = uVar3;
      uStack_68 = uVar4;
      _swift_bridgeObjectRetain(uVar3);
      _swift_bridgeObjectRetain(uVar4);
      (*param_2)(&local_a0,&local_80);
      _swift_bridgeObjectRelease(uVar4);
      _swift_bridgeObjectRelease(uVar3);
      uVar4 = uStack_88;
      uVar3 = local_90;
      uVar5 = uStack_98;
      uVar11 = local_a0;
      lVar15 = *param_5;
      uVar9 = local_a0;
      uVar10 = uStack_98;
      FUN_100071370();
      lVar12 = *(long *)(lVar15 + 0x10);
      uVar14 = (ulong)~(uint)uVar10 & 1;
      lVar16 = lVar12 + uVar14;
      if (SCARRY8(lVar12,uVar14)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x100155660);
        (*pcVar6)();
      }
      if (*(long *)(lVar15 + 0x18) < lVar16) {
        FUN_100171098(lVar16,param_4 & 1);
        uVar9 = uVar11;
        uVar14 = uVar5;
        FUN_100071370();
        if (((uint)uVar10 & 1) != ((uint)uVar14 & 1)) {
          Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100155674);
          (*pcVar6)();
        }
      }
      else if ((param_4 & 1) == 0) {
        FUN_100170720();
      }
      uVar18 = uVar18 - 1 & uVar18;
      lVar16 = *param_5;
      if ((uVar10 & 1) == 0) {
        lVar12 = lVar16 + (uVar9 >> 6) * 8;
        *(ulong *)(lVar12 + 0x40) = *(ulong *)(lVar12 + 0x40) | 1L << (uVar9 & 0x3f);
        puVar2 = (ulong *)(*(long *)(lVar16 + 0x30) + uVar9 * 0x10);
        *puVar2 = uVar11;
        puVar2[1] = uVar5;
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        if (SCARRY8(*(long *)(lVar16 + 0x10),1)) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100155664);
          (*pcVar6)();
        }
        *(long *)(lVar16 + 0x10) = *(long *)(lVar16 + 0x10) + 1;
      }
      else {
        _swift_bridgeObjectRelease(uVar5);
        puVar1 = (undefined8 *)(*(long *)(lVar16 + 0x38) + uVar9 * 0x10);
        uVar8 = puVar1[1];
        *puVar1 = uVar3;
        puVar1[1] = uVar4;
        _swift_bridgeObjectRelease(uVar8);
      }
      param_4 = 1;
    }
    bVar7 = SCARRY8(lVar17,1);
    lVar17 = lVar17 + 1;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10015565c);
      (*pcVar6)();
    }
    if ((long)(uVar13 + 0x3f >> 6) <= lVar17) break;
    uVar18 = ((ulong *)(param_1 + 0x40))[lVar17];
  }
  _swift_release(param_3);
  _swift_release(param_1);
  return;
}



/* Address: 0x100155674 | FUN_100155674 */

undefined * FUN_100155674(undefined8 param_1)

{
  undefined *puVar1;
  Encoding EVar2;
  undefined *puVar3;
  undefined **ppuVar4;
  Encoding EVar5;
  char *pcVar6;
  ulong uVar7;
  long extraout_x8;
  Encoding using;
  long lVar8;
  String SVar9;
  String separator;
  undefined *local_80;
  undefined8 uStack_78;
  undefined *local_70;
  undefined8 uStack_68;
  long local_58;
  
  EVar2 = Encoding::_typeMetadataAccessor();
  lVar8 = *(long *)(EVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  using.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_1000f8cac(param_1,&local_70,&DAT_100fae668,&DAT_100c2e4a0);
  puVar1 = PTR___type_metadata_for_Any_100eae0c0;
  if (local_58 == 0) {
    FUN_1000fb4c4(&local_70,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    puVar3 = &DAT_100fae898;
    FUN_1000f7830(&DAT_100fae898,&DAT_100c2e4e0);
    ppuVar4 = &local_80;
    _swift_dynamicCast(ppuVar4,&local_70,puVar1 + 8,puVar3,6);
    if (((ulong)ppuVar4 & 1) != 0) {
      return local_80;
    }
  }
  FUN_1000f8cac(param_1,&local_70,&DAT_100fae668,&DAT_100c2e4a0);
  if (local_58 == 0) {
    FUN_1000fb4c4(&local_70,&DAT_100fae668,&DAT_100c2e4a0);
  }
  else {
    EVar5.unknown = (undefined *)&local_80;
    _swift_dynamicCast(EVar5.unknown,&local_70,puVar1 + 8,
                       PTR___type_metadata_for_Swift_String_100eac208,6);
    if (((ulong)EVar5.unknown & 1) != 0) {
      local_70 = local_80;
      uStack_68 = uStack_78;
      Encoding::_get_utf8(EVar5);
      FUN_1001013b8();
      puVar1 = PTR___type_metadata_for_Swift_String_100eac208;
      uVar7 = 0;
      EVar5.unknown = using.unknown;
      (extension_Foundation)::Swift::StringProtocol::_data(using,false);
      (**(code **)(lVar8 + 8))(using.unknown,EVar2.unknown);
      _swift_bridgeObjectRelease(uStack_78);
      if (uVar7 >> 0x3c < 0xf) {
        puVar3 = EVar5.unknown;
        FUN_10016e98c(EVar5.unknown,uVar7,0);
        FUN_10003bf18(EVar5.unknown,uVar7);
        if (puVar3 != (undefined *)0x0) {
          return puVar3;
        }
      }
      if (DAT_101057340 == '\x01') {
        pcVar6 = &DAT_100fae660;
        FUN_1000f7830(&DAT_100fae660,&DAT_100c2e0d0);
        _swift_allocObject();
        pcVar6[0x18] = '\x02';
        pcVar6[0x19] = '\0';
        pcVar6[0x1a] = '\0';
        pcVar6[0x1b] = '\0';
        pcVar6[0x1c] = '\0';
        pcVar6[0x1d] = '\0';
        pcVar6[0x1e] = '\0';
        pcVar6[0x1f] = '\0';
        pcVar6[0x10] = '\x01';
        pcVar6[0x11] = '\0';
        pcVar6[0x12] = '\0';
        pcVar6[0x13] = '\0';
        pcVar6[0x14] = '\0';
        pcVar6[0x15] = '\0';
        pcVar6[0x16] = '\0';
        pcVar6[0x17] = '\0';
        *(undefined **)(pcVar6 + 0x38) = puVar1;
        pcVar6[0x20] = 'M';
        pcVar6[0x21] = '\0';
        pcVar6[0x22] = '\0';
        pcVar6[0x23] = '\0';
        pcVar6[0x24] = '\0';
        pcVar6[0x25] = '\0';
        pcVar6[0x26] = '\0';
        pcVar6[0x27] = -0x30;
        pcVar6[0x28] = -0x10;
        pcVar6[0x29] = '2';
        pcVar6[0x2a] = -0x27;
        pcVar6[0x2b] = '\0';
        pcVar6[0x2c] = '\x01';
        pcVar6[0x2d] = '\0';
        pcVar6[0x2e] = '\0';
        pcVar6[0x2f] = -0x80;
        SVar9.bridgeObject = (void *)0x20;
        SVar9.str = pcVar6;
        separator.bridgeObject = (void *)0xa;
        separator.str = (char *)0xe100000000000000;
        Swift::_print(SVar9,separator);
        _swift_release(pcVar6);
      }
    }
  }
  return (undefined *)0x0;
}



/* Address: 0x1001558cc | FUN_1001558cc */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001558cc(undefined8 *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar1 = _TtC7PostHog10PostHogSDK::logger;
  lVar3 = *param_2;
  _swift_beginAccess(lVar3 + _TtC7PostHog10PostHogSDK::logger,auStack_48,0,0);
  uVar2 = *(undefined8 *)(lVar3 + lVar1);
  *param_1 = uVar2;
  return uVar2;
}



/* Address: 0x100155920 | thunk_FUN_1001395f4 */

void thunk_FUN_1001395f4(void)

{
  FUN_1001395f4();
  return;
}



/* Address: 0x100155924 | FUN_100155924 */

void FUN_100155924(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0xf8);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x100155934 | FUN_100155934 */

void FUN_100155934(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0xf8);
  *(undefined8 *)(*param_2 + 0xf8) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x100155964 | FUN_100155964 */

undefined8 FUN_100155964(undefined8 param_1)

{
  FUN_1001345e4();
  return param_1;
}



/* Address: 0x100155998 | FUN_100155998 */

uint FUN_100155998(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100147c88(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1001559b4 | FUN_1001559b4 */

void FUN_1001559b4(undefined8 *param_1,long *param_2)

{
  *param_1 = *(undefined8 *)(*param_2 + 0x100);
  _swift_bridgeObjectRetain();
  return;
}



/* Address: 0x1001559c4 | FUN_1001559c4 */

void FUN_1001559c4(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(*param_2 + 0x100);
  *(undefined8 *)(*param_2 + 0x100) = *param_1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return;
}



/* Address: 0x1001559f4 | FUN_1001559f4 */

void FUN_1001559f4(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100155a18 | FUN_100155a18 */

void FUN_100155a18(void)

{
  long unaff_x20;
  
  FUN_1001640c0(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100155a20 | FUN_100155a20 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100155a20(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x100155a44 | FUN_100155a44 */

void FUN_100155a44(void)

{
  long unaff_x20;
  
  objc_stub::invalidate(*(ID *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100155a4c | FUN_100155a4c */

void FUN_100155a4c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x100155a60 | FUN_100155a60 */

void FUN_100155a60(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100155a68 | FUN_100155a68 */

void FUN_100155a68(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100155a8c | FUN_100155a8c */

void FUN_100155a8c(void)

{
  FUN_100150c50();
  return;
}



/* Address: 0x100155a94 | FUN_100155a94 */

undefined8 FUN_100155a94(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faf508;
  FUN_1000f7830(&DAT_100faf508,&DAT_100c2e2e0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100155ae4 | FUN_100155ae4 */

void FUN_100155ae4(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100155b08 | thunk_FUN_100155b84 */

void thunk_FUN_100155b84(void)

{
  FUN_100155b84();
  return;
}



/* Address: 0x100155b0c | FUN_100155b0c */

void FUN_100155b0c(void)

{
  long unaff_x20;
  
  FUN_1001372e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100eb8a08,
                &DAT_100eb8a80,FUN_100155b4c,FUN_100105514);
  return;
}



/* Address: 0x100155b48 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  FUN_1001344b4();
  return;
}



/* Address: 0x100155b4c | FUN_100155b4c */

void FUN_100155b4c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100137620(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100155b64 | thunk_FUN_100155bec */

void thunk_FUN_100155bec(void)

{
  FUN_100155bec();
  return;
}



/* Address: 0x100155b68 | FUN_100155b68 */

void FUN_100155b68(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100134e3c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100155b84 | FUN_100155b84 */

void FUN_100155b84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100155bb0 | FUN_100155bb0 */

void FUN_100155bb0(void)

{
  long unaff_x20;
  
  FUN_1001372e8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),&DAT_100eb8ad0,
                &DAT_100eb8b48,thunk_FUN_100155b4c,FUN_100105d48);
  return;
}



/* Address: 0x100155bec | FUN_100155bec */

void FUN_100155bec(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100155c20 | FUN_100155c20 */

void FUN_100155c20(void)

{
  FUN_10013b89c();
  return;
}



/* Address: 0x100155c28 | FUN_100155c28 */

void FUN_100155c28(void)

{
  FUN_10013ba38();
  return;
}



/* Address: 0x100155c30 | FUN_100155c30 */

void FUN_100155c30(void)

{
  FUN_10013bab0();
  return;
}



/* Address: 0x100155c38 | FUN_100155c38 */

void FUN_100155c38(void)

{
  FUN_10013bc24();
  return;
}



/* Address: 0x100155c40 | FUN_100155c40 */

void FUN_100155c40(void)

{
  FUN_10013bd8c();
  return;
}



/* Address: 0x100155c48 | FUN_100155c48 */

void FUN_100155c48(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_1000f8b08(param_2,param_3);
    puVar1 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x100155c8c | FUN_100155c8c */

void FUN_100155c8c(void)

{
  FUN_10015e9dc();
  return;
}



/* Address: 0x100155c94 | FUN_100155c94 */

void FUN_100155c94(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100155cc8 | FUN_100155cc8 */

void FUN_100155cc8(void)

{
  FUN_100167044();
  return;
}



/* Address: 0x100155cd4 | FUN_100155cd4 */

void FUN_100155cd4(void)

{
  FUN_100166d1c();
  return;
}



/* Address: 0x100155cdc | FUN_100155cdc */

void FUN_100155cdc(void)

{
  FUN_100166d54();
  return;
}



/* Address: 0x100155ce4 | FUN_100155ce4 */

void FUN_100155ce4(void)

{
  FUN_10013bf7c();
  return;
}



/* Address: 0x100155d04 | FUN_100155d04 */

void FUN_100155d04(void)

{
  FUN_10013bf7c();
  return;
}



/* Address: 0x100155d24 | FUN_100155d24 */

void FUN_100155d24(void)

{
  FUN_100135ed0();
  return;
}



/* Address: 0x100155d54 | FUN_100155d54 */

void FUN_100155d54(undefined8 *param_1)

{
  FUN_100135b98(*param_1);
  return;
}



/* Address: 0x100155d60 | FUN_100155d60 */

void FUN_100155d60(void)

{
  FUN_100136158();
  return;
}



/* Address: 0x100155d68 | FUN_100155d68 */

void FUN_100155d68(void)

{
  FUN_100135ed0();
  return;
}



/* Address: 0x100155d98 | FUN_100155d98 */

void FUN_100155d98(void)

{
  FUN_100154dcc();
  return;
}



/* Address: 0x100155db0 | FUN_100155db0 */

void FUN_100155db0(undefined8 *param_1)

{
  FUN_1001359fc(*param_1);
  return;
}



/* Address: 0x100155dbc | FUN_100155dbc */

void FUN_100155dbc(void)

{
  FUN_10013608c();
  return;
}



/* Address: 0x100155dc4 | thunk_FUN_1001553a0 */

void thunk_FUN_1001553a0(void)

{
  FUN_1001553a0();
  return;
}



/* Address: 0x100155dc8 | thunk_FUN_100155a20 */

void thunk_FUN_100155a20(void)

{
  FUN_100155a20();
  return;
}



/* Address: 0x100155dcc | thunk_FUN_1001553a0 */

void thunk_FUN_1001553a0(void)

{
  FUN_1001553a0();
  return;
}



/* Address: 0x100155dd0 | thunk_FUN_1001553a0 */

void thunk_FUN_1001553a0(void)

{
  FUN_1001553a0();
  return;
}



/* Address: 0x100155dd4 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155dd8 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155ddc | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155de0 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155de4 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155de8 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155dec | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}



/* Address: 0x100155df0 | thunk_FUN_100155a4c */

void thunk_FUN_100155a4c(void)

{
  FUN_100155a4c();
  return;
}


