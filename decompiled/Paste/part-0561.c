/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100645e18 | FUN_100645e18 */

void FUN_100645e18(code *param_1)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
             *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100645e2c | FUN_100645e2c */

void FUN_100645e2c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645e50 | FUN_100645e50 */

void FUN_100645e50(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100645e5c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x100645e60 | FUN_100645e60 */

void FUN_100645e60(void)

{
  long unaff_x20;
  
  FUN_100645378(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100645e6c | FUN_100645e6c */

void FUN_100645e6c(void)

{
  long unaff_x20;
  
  FUN_100644584(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100645e78 | FUN_100645e78 */

void FUN_100645e78(void)

{
  long unaff_x20;
  
  FUN_100644858(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100645e84 | FUN_100645e84 */

void FUN_100645e84(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645eb8 | FUN_100645eb8 */

void FUN_100645eb8(void)

{
  long unaff_x20;
  
  FUN_100644ca4(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100645ecc | FUN_100645ecc */

void FUN_100645ecc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645f00 | FUN_100645f00 */

void FUN_100645f00(void)

{
  long unaff_x20;
  
  FUN_10064514c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100645f0c | FUN_100645f0c */

void FUN_100645f0c(void)

{
  long unaff_x20;
  
  FUN_10064557c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100645f18 | FUN_100645f18 */

void FUN_100645f18(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))();
  return;
}



/* Address: 0x100645f38 | FUN_100645f38 */

void FUN_100645f38(void)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = *(long *)(*(long *)(unaff_x20 + 0x10) + -8);
  uVar2 = (ulong)*(byte *)(lVar1 + 0x50);
  (**(code **)(lVar1 + 8))(unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)));
  _swift_deallocObject();
  return;
}



/* Address: 0x100645f88 | FUN_100645f88 */

void FUN_100645f88(undefined8 param_1)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  FUN_10064593c(param_1,unaff_x20 + (uVar1 + 0x18 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x100645fa4 | FUN_100645fa4 */

void FUN_100645fa4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100645ae8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100645fb0 | FUN_100645fb0 */

undefined1  [16] FUN_100645fb0(void)

{
  return ZEXT816(0x100eefe80);
}



/* Address: 0x100645fc0 | FUN_100645fc0 */

void FUN_100645fc0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x100645fcc | FUN_100645fcc */

void FUN_100645fcc(void)

{
  long unaff_x20;
  
  FUN_100644ab4(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100645fd8 | FUN_100645fd8 */

void FUN_100645fd8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646004 | FUN_100646004 */

void FUN_100646004(void)

{
  long unaff_x20;
  
  FUN_100643a38(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10064600c | FUN_10064600c */

void FUN_10064600c(void)

{
  long unaff_x20;
  
  FUN_100643a38(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100646018 | thunk_FUN_100645c60 */

void thunk_FUN_100645c60(void)

{
  FUN_100645c60();
  return;
}



/* Address: 0x10064601c | thunk_FUN_100645c60 */

void thunk_FUN_100645c60(void)

{
  FUN_100645c60();
  return;
}



/* Address: 0x100646020 | thunk_FUN_1006436e4 */

void thunk_FUN_1006436e4(void)

{
  FUN_1006436e4();
  return;
}



/* Address: 0x100646024 | thunk_FUN_100645d88 */

void thunk_FUN_100645d88(void)

{
  thunk_FUN_100645d88();
  return;
}



/* Address: 0x100646028 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x10064602c | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100646030 | thunk_FUN_100645ecc */

void thunk_FUN_100645ecc(void)

{
  thunk_FUN_100645ecc();
  return;
}



/* Address: 0x100646034 | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x100646038 | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x10064603c | thunk_FUN_100405f18 */

void thunk_FUN_100405f18(void)

{
  thunk_FUN_100405f18();
  return;
}



/* Address: 0x100646040 | FUN_100646040 */

void FUN_100646040(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  thunk_FUN_10064a5bc(in_x4,in_x5,in_x6);
  return;
}



/* Address: 0x100646050 | FUN_100646050 */

void FUN_100646050(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  thunk_FUN_10064a9dc(in_x4,in_x5,in_x6);
  return;
}



/* Address: 0x100646060 | FUN_100646060 */

void FUN_100646060(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  thunk_FUN_10064adac(in_x4,in_x5);
  return;
}



/* Address: 0x10064606c | FUN_10064606c */

void FUN_10064606c(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  
  thunk_FUN_10064b138(in_x4,in_x5,in_x6);
  return;
}



/* Address: 0x10064607c | FUN_10064607c */

void FUN_10064607c(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_100649240(in_x4,in_x5);
  return;
}



/* Address: 0x100646088 | FUN_100646088 */

void FUN_100646088(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  undefined8 in_x6;
  undefined8 in_x7;
  undefined8 in_stack_00000000;
  
  thunk_FUN_10064b714(in_x4,in_x5,in_x6,in_x7,in_stack_00000000);
  return;
}



/* Address: 0x1006460a0 | FUN_1006460a0 */

void FUN_1006460a0(void)

{
  undefined8 in_x4;
  undefined8 in_x5;
  
  FUN_100649258(in_x4,in_x5);
  return;
}



/* Address: 0x1006460ac | thunk_FUN_10064926c */

void thunk_FUN_10064926c(void)

{
  FUN_10064926c();
  return;
}



/* Address: 0x1006460b0 | FUN_1006460b0 */

void FUN_1006460b0(undefined8 param_1)

{
  undefined8 in_x5;
  
  FUN_10064950c(param_1,in_x5);
  return;
}



/* Address: 0x1006460b8 | FUN_1006460b8 */

undefined8 FUN_1006460b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  uVar2 = uVar4;
  FUN_100652900(uVar4,puVar1[1]);
  puVar3 = &DAT_100eeff38;
  _swift_allocObject(&DAT_100eeff38,0x48,7);
  *(undefined8 *)(puVar3 + 0x10) = param_3;
  *(long **)(puVar3 + 0x18) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  *(undefined8 *)(puVar3 + 0x40) = uVar2;
  _swift_retain();
  _swift_retain(param_2);
  _swift_unknownObjectRetain(uVar4);
  _swift_retain(uVar2);
  thunk_FUN_10064bde0(FUN_100646c80,puVar3);
  _swift_release(puVar3);
  return uVar2;
}



/* Address: 0x10064618c | FUN_10064618c */

code * FUN_10064618c(long *param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  ulong uVar1;
  Result RVar2;
  Optional OVar3;
  undefined7 extraout_var;
  long lVar5;
  undefined7 extraout_var_01;
  ulong uVar6;
  undefined *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  code *pcVar12;
  code *pcVar13;
  long lVar14;
  code *pcVar15;
  undefined1 auStack_c0 [8];
  long local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  code *local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar4;
  undefined7 extraout_var_00;
  
  lVar9 = *param_1;
  local_b0 = param_4;
  uStack_a8 = param_3;
  local_a0 = param_2;
  uStack_98 = param_5;
  local_80 = param_6;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  local_90 = param_7;
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,RVar2.value);
  local_b8 = *(long *)(lVar4 + -8);
  pcVar15 = (code *)(auStack_c0 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar10 = *(long *)(lVar9 + 0x50);
  local_88 = *(long *)(lVar10 + -8);
  pcVar12 = pcVar15 + -(*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var_00,RVar2.value);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lVar14 = *(long *)(CONCAT71(extraout_var_01,OVar3.value) + -8);
  pcVar13 = pcVar12 + -(*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = *(long *)(lVar9 + 0x58);
  _swift_beginAccess((long)param_1 + lVar9,auStack_78,0,0);
  (**(code **)(lVar14 + 0x10))(pcVar13,(long)param_1 + lVar9,CONCAT71(extraout_var_01,OVar3.value));
  pcVar8 = pcVar13;
  (**(code **)(*(long *)(lVar5 + -8) + 0x30))(pcVar13,1,lVar5);
  if ((int)pcVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x100646484);
    (*pcVar8)();
  }
  pcVar8 = pcVar13;
  _swift_getEnumCaseMultiPayload(pcVar13,lVar5);
  lVar5 = local_88;
  if ((int)pcVar8 == 1) {
    uVar11 = *(undefined8 *)pcVar13;
    *(undefined8 *)pcVar15 = uVar11;
    _swift_storeEnumTagMultiPayload(pcVar15,lVar4,1);
    _swift_errorRetain(uVar11);
    pcVar13 = pcVar15;
    FUN_100648528(pcVar15,local_80,local_90);
    _swift_errorRelease(uVar11);
    pcVar8 = *(code **)(local_b8 + 8);
    pcVar12 = pcVar15;
    lVar10 = lVar4;
  }
  else {
    (**(code **)(local_88 + 0x20))(pcVar12,pcVar13,lVar10);
    pcVar8 = pcVar12;
    (*local_a0)(pcVar12,local_b0,uStack_98);
    uVar1 = *(ulong *)(pcVar8 + *(long *)(*(long *)pcVar8 + 0x60));
    lVar4 = *(long *)(pcVar8 + *(long *)(*(long *)pcVar8 + 0x60) + 8);
    uVar6 = uVar1;
    _swift_getObjectType();
    pcVar13 = *(code **)(lVar4 + 0x10);
    _swift_unknownObjectRetain(uVar1);
    (*pcVar13)(uVar6,lVar4);
    _swift_unknownObjectRelease(uVar1);
    if ((uVar6 & 1) == 0) {
      FUN_100648698(local_80);
      _swift_release(pcVar8);
      (**(code **)(lVar5 + 8))(pcVar12,lVar10);
      return (code *)0x0;
    }
    puVar7 = &DAT_100ef0000;
    _swift_allocObject(&DAT_100ef0000,0x28,7);
    *(long *)(puVar7 + 0x10) = lVar10;
    *(undefined8 *)(puVar7 + 0x18) = local_80;
    *(code **)(puVar7 + 0x20) = pcVar8;
    _swift_retain();
    _swift_retain(pcVar8);
    pcVar13 = FUN_10064600c;
    FUN_100648548(FUN_10064600c,puVar7);
    _swift_release(pcVar8);
    _swift_release(puVar7);
    pcVar8 = *(code **)(lVar5 + 8);
  }
  (*pcVar8)(pcVar12,lVar10);
  return pcVar13;
}



/* Address: 0x100646484 | FUN_100646484 */

undefined8 FUN_100646484(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
  uVar5 = puVar1[1];
  uVar4 = *puVar1;
  uVar2 = uVar4;
  FUN_100652900(uVar4,puVar1[1],*(undefined8 *)(*unaff_x20 + 0x50));
  puVar3 = &DAT_100eeff60;
  _swift_allocObject(&DAT_100eeff60,0x40,7);
  *(long **)(puVar3 + 0x10) = unaff_x20;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  *(undefined8 *)(puVar3 + 0x20) = param_1;
  *(undefined8 *)(puVar3 + 0x28) = param_2;
  *(undefined8 *)(puVar3 + 0x38) = uVar5;
  *(undefined8 *)(puVar3 + 0x30) = uVar4;
  _swift_retain();
  _swift_retain(uVar2);
  _swift_retain(param_2);
  _swift_unknownObjectRetain(uVar4);
  thunk_FUN_10064bde0(FUN_100646cd0,puVar3);
  _swift_release(puVar3);
  return uVar2;
}



/* Address: 0x10064654c | FUN_10064654c */

code * FUN_10064654c(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  Result RVar4;
  Optional OVar5;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  long *plVar7;
  ulong uVar8;
  undefined *puVar9;
  long *plVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  code *local_98;
  undefined8 uStack_90;
  long local_88;
  undefined8 local_80;
  undefined1 auStack_78 [24];
  long lVar6;
  
  lVar15 = *param_1;
  lVar12 = *(long *)(lVar15 + 0x50);
  local_a8 = param_5;
  uStack_a0 = param_4;
  local_98 = param_3;
  uStack_90 = param_6;
  local_80 = param_2;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar4 = Swift::Result::typeMetadataAccessor();
  lVar6 = CONCAT71(extraout_var,RVar4.value);
  lVar17 = *(long *)(lVar6 + -8);
  pcVar14 = (code *)(auStack_b0 + -(*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_88 = *(long *)(lVar12 + -8);
  lVar13 = (long)pcVar14 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar16 = *(long *)(CONCAT71(extraout_var_00,OVar5.value) + -8);
  plVar10 = (long *)(lVar13 - (*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar15 = *(long *)(lVar15 + 0x58);
  _swift_beginAccess((long)param_1 + lVar15,auStack_78,0,0);
  (**(code **)(lVar16 + 0x10))(plVar10,(long)param_1 + lVar15,CONCAT71(extraout_var_00,OVar5.value))
  ;
  plVar7 = plVar10;
  (**(code **)(lVar17 + 0x30))(plVar10,1,lVar6);
  if ((int)plVar7 != 1) {
    plVar7 = plVar10;
    _swift_getEnumCaseMultiPayload(plVar10,lVar6);
    lVar15 = local_88;
    if ((int)plVar7 == 1) {
      plVar10 = (long *)*plVar10;
      plVar7 = plVar10;
      (*local_98)(plVar10,local_a8,uStack_90);
      puVar1 = (ulong *)((long)plVar7 + *(long *)(*plVar7 + 0x60));
      uVar2 = *puVar1;
      uVar3 = puVar1[1];
      uVar8 = uVar2;
      _swift_getObjectType();
      pcVar14 = *(code **)(uVar3 + 0x10);
      _swift_unknownObjectRetain(uVar2);
      (*pcVar14)(uVar8,uVar3);
      _swift_unknownObjectRelease(uVar2);
      if ((uVar8 & 1) == 0) {
        FUN_100648698(local_80);
        _swift_errorRelease(plVar10);
        _swift_release(plVar7);
        pcVar11 = (code *)0x0;
      }
      else {
        puVar9 = &DAT_100eeffd8;
        _swift_allocObject(&DAT_100eeffd8,0x20,7);
        *(undefined8 *)(puVar9 + 0x10) = local_80;
        *(long **)(puVar9 + 0x18) = plVar7;
        _swift_retain();
        _swift_retain(plVar7);
        pcVar11 = FUN_100646004;
        FUN_100648548(FUN_100646004,puVar9);
        _swift_release(plVar7);
        _swift_release(puVar9);
        _swift_errorRelease(plVar10);
      }
    }
    else {
      (**(code **)(local_88 + 0x20))(lVar13,plVar10,lVar12);
      (**(code **)(lVar15 + 0x10))(pcVar14,lVar13,lVar12);
      _swift_storeEnumTagMultiPayload(pcVar14,lVar6,0);
      pcVar11 = pcVar14;
      FUN_100648528(pcVar14,local_80,lVar12);
      (**(code **)(lVar17 + 8))(pcVar14,lVar6);
      (**(code **)(lVar15 + 8))(lVar13,lVar12);
    }
    return pcVar11;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100646814);
  (*pcVar14)();
}



/* Address: 0x100646814 | FUN_100646814 */

ulong FUN_100646814(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  long *unaff_x20;
  code *pcVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  
  lVar7 = *unaff_x20;
  puVar1 = (ulong *)((long)unaff_x20 + *(long *)(lVar7 + 0x60));
  uVar5 = puVar1[1];
  uVar9 = puVar1[1];
  uVar8 = *puVar1;
  uVar2 = uVar8;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(uVar5 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_100646970(uVar8,uVar5,param_1);
    return uVar8;
  }
  uVar3 = uVar2;
  FUN_1006422fc(uVar2,*(undefined8 *)(lVar7 + 0x50),uVar5);
  puVar4 = &DAT_100eeff88;
  _swift_allocObject(&DAT_100eeff88,0x50,7);
  *(undefined8 *)(puVar4 + 0x10) = param_4;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  *(long **)(puVar4 + 0x20) = unaff_x20;
  *(undefined8 *)(puVar4 + 0x28) = param_2;
  *(undefined8 *)(puVar4 + 0x30) = param_3;
  *(ulong *)(puVar4 + 0x40) = uVar9;
  *(ulong *)(puVar4 + 0x38) = uVar8;
  *(ulong *)(puVar4 + 0x48) = uVar3;
  pcVar6 = *(code **)(uVar5 + 0x18);
  _swift_bridgeObjectRetain(param_1);
  _swift_retain();
  _swift_retain(param_3);
  _swift_unknownObjectRetain(uVar8);
  _swift_retain(uVar3);
  (*pcVar6)(FUN_100646d24,puVar4,uVar2,uVar5);
  _swift_release(puVar4);
  return uVar3;
}



/* Address: 0x100646970 | FUN_100646970 */

undefined8
FUN_100646970(undefined8 param_1,undefined8 param_2,undefined8 param_3,long *param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  long *plStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  long *local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar4 = *param_4;
  local_80 = param_7;
  plStack_78 = param_4;
  local_70 = param_5;
  uStack_68 = param_6;
  local_60 = param_1;
  uStack_58 = param_2;
  local_48 = param_4;
  uStack_40 = param_3;
  FUN_1006529e0(0xff,param_7);
  uVar1 = 0;
  Swift::Array<undefined>::typeMetadataAccessor();
  uVar2 = 0;
  FUN_1006529e0(0,*(undefined8 *)(lVar4 + 0x50));
  puVar3 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar1);
  (extension_Swift)::Swift::Sequence::_reduce
            (&local_38,&local_48,FUN_100646d60,auStack_90,uVar1,uVar2,puVar3);
  return local_38;
}



/* Address: 0x100646a18 | FUN_100646a18 */

void FUN_100646a18(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  
  lVar5 = *param_4;
  uVar1 = *param_3;
  FUN_10064926c(uVar1);
  puVar2 = &DAT_100eeffb0;
  _swift_allocObject(&DAT_100eeffb0,0x40,7);
  *(undefined8 *)(puVar2 + 0x10) = param_9;
  *(long **)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_5;
  *(undefined8 *)(puVar2 + 0x28) = param_6;
  *(undefined8 *)(puVar2 + 0x30) = param_7;
  *(undefined8 *)(puVar2 + 0x38) = param_8;
  uVar4 = *(undefined8 *)(lVar5 + 0x50);
  _swift_retain(param_4);
  _swift_retain(param_6);
  _swift_unknownObjectRetain(param_7);
  pcVar3 = FUN_100646db4;
  thunk_FUN_10064a5bc(FUN_100646db4,puVar2,uVar4);
  _swift_release(uVar1);
  _swift_release(puVar2);
  *param_1 = pcVar3;
  return;
}



/* Address: 0x100646af8 | FUN_100646af8 */

long FUN_100646af8(undefined8 param_1,long *param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  code *local_70;
  undefined8 uStack_68;
  
  lVar3 = *(long *)(*param_2 + 0x50);
  lVar2 = 0;
  local_78 = param_4;
  local_70 = param_3;
  uStack_68 = param_6;
  _swift_getTupleTypeMetadata2(0,lVar3,param_7,0,0);
  puVar7 = auStack_80 + -(*(long *)(*(long *)(lVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = *(long *)(param_7 + -8);
  lVar8 = (long)puVar7 - (*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = *(long *)(lVar3 + -8);
  lVar4 = lVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(lVar2 + -8) + 0x10))(puVar7,param_1,lVar2);
  iVar1 = *(int *)(lVar2 + 0x30);
  (**(code **)(lVar6 + 0x20))(lVar4,puVar7,lVar3);
  (**(code **)(lVar5 + 0x20))(lVar8,puVar7 + iVar1,param_7);
  lVar2 = lVar4;
  (*local_70)(lVar4,lVar8,param_5,uStack_68);
  (**(code **)(lVar5 + 8))(lVar8,param_7);
  (**(code **)(lVar6 + 8))(lVar4,lVar3);
  return lVar2;
}



/* Address: 0x100646c44 | FUN_100646c44 */

void FUN_100646c44(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646c80 | FUN_100646c80 */

void FUN_100646c80(void)

{
  long unaff_x20;
  
  FUN_10064618c(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100646c94 | FUN_100646c94 */

void FUN_100646c94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646cd0 | FUN_100646cd0 */

void FUN_100646cd0(void)

{
  long unaff_x20;
  
  FUN_10064654c(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38));
  return;
}



/* Address: 0x100646ce0 | FUN_100646ce0 */

void FUN_100646ce0(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646d24 | FUN_100646d24 */

void FUN_100646d24(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar2 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  FUN_100646970(uVar2,*(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100648698(uVar1);
  _swift_release(uVar2);
  return;
}



/* Address: 0x100646d60 | FUN_100646d60 */

void FUN_100646d60(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100646a18(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100646d80 | FUN_100646d80 */

void FUN_100646d80(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646db4 | FUN_100646db4 */

void FUN_100646db4(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100646af8(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100646dc4 | FUN_100646dc4 */

void FUN_100646dc4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646df0 | FUN_100646df0 */

void FUN_100646df0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x100646e1c | FUN_100646e1c */

void FUN_100646e1c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 unaff_x20;
  
  puVar1 = &DAT_100ef0028;
  _swift_allocObject(&DAT_100ef0028,0x28,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined8 *)(puVar1 + 0x20) = unaff_x20;
  _swift_retain(param_2);
  _swift_retain();
  FUN_10064bde0(FUN_1006457dc,puVar1);
  _swift_release(puVar1);
  return;
}



/* Address: 0x100646e88 | FUN_100646e88 */

void FUN_100646e88(undefined8 param_1,undefined8 param_2,long param_3)

{
  Result RVar1;
  undefined7 extraout_var;
  undefined1 *puVar3;
  long lVar4;
  long lVar2;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  RVar1 = Swift::Result::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,RVar1.value);
  lVar4 = *(long *)(lVar2 + -8);
  puVar3 = &stack0xffffffffffffffc0 + -(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(puVar3,param_1,param_3);
  _swift_storeEnumTagMultiPayload(puVar3,lVar2,0);
  FUN_100649ab8(puVar3,param_2,param_3);
  (**(code **)(lVar4 + 8))(puVar3,lVar2);
  return;
}



/* Address: 0x100646f54 | FUN_100646f54 */

void FUN_100646f54(undefined8 param_1,long *param_2,undefined8 param_3)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  puVar1 = (ulong *)((long)param_2 + *(long *)(*param_2 + 0x60));
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  uVar7 = param_3;
  _swift_getObjectType();
  uVar4 = uVar3;
  uVar6 = uVar2;
  (**(code **)(uVar2 + 0x10))();
  if ((uVar4 & 1) != 0) {
    FUN_100649c4c(param_1);
    FUN_1006486f8();
    FUN_100004550(param_1,uVar6);
    _swift_bridgeObjectRelease(uVar7);
    return;
  }
  puVar5 = &DAT_100ef0050;
  _swift_allocObject(&DAT_100ef0050,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = param_3;
  *(long **)(puVar5 + 0x18) = param_2;
  *(undefined8 *)(puVar5 + 0x20) = param_1;
  pcVar8 = *(code **)(uVar2 + 0x18);
  _swift_retain(param_2);
  _swift_errorRetain(param_1);
  (*pcVar8)(FUN_10064c290,puVar5,uVar3,uVar2);
  _swift_release(puVar5);
  return;
}



/* Address: 0x100647050 | thunk_FUN_10064b138 */

long * thunk_FUN_10064b138(undefined8 param_1,undefined8 param_2,undefined *param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *unaff_x20;
  undefined *puVar7;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  puVar7 = *(undefined **)(*unaff_x20 + 0x50);
  puVar4 = PTR___type_metadata_for____100eae0c8 + 8;
  if (param_3 == puVar7 && param_3 == puVar4) {
    uVar5 = 0x44000001;
    uStack_60 = param_1;
    uStack_58 = param_2;
    _swift_getFunctionTypeMetadata1(0x44000001,puVar7,puVar4);
    _swift_retain(param_2);
    _swift_dynamicCast(&uStack_70,&uStack_60,uVar5,uVar5,7);
    puVar6 = &DAT_100ef0280;
    _swift_allocObject(&DAT_100ef0280,0x30,7);
    *(undefined **)(puVar6 + 0x10) = puVar7;
    *(undefined **)(puVar6 + 0x18) = puVar4;
    *(undefined8 *)(puVar6 + 0x28) = uStack_68;
    *(undefined8 *)(puVar6 + 0x20) = uStack_70;
    FUN_10064838c(FUN_1005e664c,puVar6);
    _swift_release(puVar6);
    FUN_1006529e0(0,puVar4);
    _swift_dynamicCastClassUnconditional();
    _swift_retain();
  }
  else {
    puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x60));
    plVar2 = (long *)*puVar1;
    plVar3 = plVar2;
    FUN_1006528a4(plVar2,puVar1[1]);
    puVar4 = &DAT_100ef0258;
    _swift_allocObject(&DAT_100ef0258,0x38,7);
    *(undefined **)(puVar4 + 0x10) = param_3;
    *(long **)(puVar4 + 0x18) = plVar3;
    *(long **)(puVar4 + 0x20) = unaff_x20;
    *(undefined8 *)(puVar4 + 0x28) = param_1;
    *(undefined8 *)(puVar4 + 0x30) = param_2;
    _swift_retain(param_2);
    _swift_retain();
    _swift_retain(plVar3);
    _swift_unknownObjectRetain(plVar2);
    FUN_10064bde0(FUN_100652b98,puVar4);
    _swift_release(puVar4);
    unaff_x20 = plVar3;
  }
  return unaff_x20;
}


