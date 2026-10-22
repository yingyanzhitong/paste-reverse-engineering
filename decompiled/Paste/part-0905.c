/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009bb3d0 | FUN_1009bb3d0 */

void FUN_1009bb3d0(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bb3fc | FUN_1009bb3fc */

void FUN_1009bb3fc(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bb428 | FUN_1009bb428 */

void FUN_1009bb428(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x10) != 0) {
    _swift_retain();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bb438);
  (*pcVar1)();
}



/* Address: 0x1009bb438 | FUN_1009bb438 */

long * FUN_1009bb438(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  
  _swift_allocObject();
  unaff_x20[2] = 0;
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  FUN_1009b9da0();
  unaff_x20[4] = param_2;
  unaff_x20[5] = lVar1;
  unaff_x20[3] = param_1;
  return unaff_x20;
}



/* Address: 0x1009bb490 | FUN_1009bb490 */

void FUN_1009bb490(long param_1,long param_2)

{
  long lVar1;
  long *unaff_x20;
  
  unaff_x20[2] = 0;
  lVar1 = *(long *)(*unaff_x20 + 0x50);
  FUN_1009b9da0();
  unaff_x20[4] = param_2;
  unaff_x20[5] = lVar1;
  unaff_x20[3] = param_1;
  return;
}



/* Address: 0x1009bb4d4 | FUN_1009bb4d4 */

long * FUN_1009bb4d4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  long *unaff_x20;
  
  puVar1 = &DAT_100f25140;
  _swift_allocObject(&DAT_100f25140,0x28,7);
  *(long *)(puVar1 + 0x10) = unaff_x20[10];
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  _swift_allocObject();
  unaff_x20[2] = 0;
  lVar2 = *(long *)(*unaff_x20 + 0x50);
  FUN_1009b9da0();
  unaff_x20[4] = (long)puVar1;
  unaff_x20[5] = lVar2;
  unaff_x20[3] = (long)FUN_100645f18;
  return unaff_x20;
}



/* Address: 0x1009bb558 | FUN_1009bb558 */

void FUN_1009bb558(long param_1)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  long lVar3;
  
  lVar1 = *(long *)(*(long *)(param_1 + 0x20) + 0x30);
  lVar2 = lVar1;
  FUN_1009bbe8c(lVar1,*(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38),
                *(undefined8 *)(*unaff_x20 + 0x50));
  lVar3 = unaff_x20[2];
  unaff_x20[2] = lVar2;
  _swift_unknownObjectRetain(lVar1);
  _swift_release(lVar3);
  return;
}



/* Address: 0x1009bb5a4 | thunk_FUN_1009bbf38 */

void thunk_FUN_1009bbf38(void)

{
  FUN_1009bbf38();
  return;
}



/* Address: 0x1009bb5a8 | FUN_1009bb5a8 */

void FUN_1009bb5a8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_58 [24];
  
  lVar3 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 5,auStack_58,0x21,0);
  lVar1 = 0;
  FUN_1009bc140(0,*(undefined8 *)(lVar3 + 0x50));
  uVar2 = param_2;
  FUN_1009b9f30(param_2);
  _swift_endAccess(auStack_58);
  if (lVar1 == 1) {
    FUN_100626b98(param_2);
  }
  else {
    FUN_1009bb65c(param_1,uVar2,lVar1);
    FUN_100161a8c(uVar2,lVar1);
  }
  return;
}



/* Address: 0x1009bb65c | FUN_1009bb65c */

void FUN_1009bb65c(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  lVar8 = *unaff_x20;
  pcVar1 = (code *)unaff_x20[3];
  lVar9 = *(long *)(param_1 + 0x20);
  lVar2 = param_1;
  uVar7 = param_2;
  FUN_100627f08();
  (*pcVar1)(param_2,param_3,lVar2,uVar7);
  _swift_unknownObjectRelease(lVar2);
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  uVar5 = *(undefined8 *)(lVar9 + 0x38);
  uVar3 = 0xff;
  FUN_100631530(0xff);
  _swift_retain();
  _swift_retain(param_1);
  _swift_unknownObjectRetain(uVar7);
  uVar4 = 0;
  _swift_getTupleTypeMetadata2(0,lVar8,uVar3,0,0);
  FUN_10065fde0(&local_80,&stack0xffffffffffffff70,uVar7,uVar5,uVar4);
  uVar7 = *(undefined8 *)(lVar9 + 0x30);
  uVar5 = uVar7;
  _swift_unknownObjectRetain(uVar7);
  FUN_100647054();
  _swift_unknownObjectRelease(uVar7);
  puVar6 = &DAT_100f252d0;
  _swift_allocObject(&DAT_100f252d0,0x38,7);
  *(undefined8 *)(puVar6 + 0x10) = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(puVar6 + 0x20) = uStack_78;
  *(undefined8 *)(puVar6 + 0x18) = local_80;
  *(undefined8 *)(puVar6 + 0x30) = local_68;
  *(undefined8 *)(puVar6 + 0x28) = uStack_70;
  _swift_unknownObjectRetain(local_80);
  _swift_retain(uStack_70);
  _swift_retain(local_68);
  FUN_100646e1c(FUN_1009bc0d8,puVar6);
  _swift_release(param_2);
  _swift_release(local_68);
  _swift_release(uStack_70);
  _swift_unknownObjectRelease(local_80);
  _swift_release(uVar5);
  _swift_release(puVar6);
  return;
}



/* Address: 0x1009bb804 | FUN_1009bb804 */

void FUN_1009bb804(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auStack_48 [24];
  
  lVar3 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 5,auStack_48,0x21,0);
  uVar1 = 0;
  FUN_1009bc140(0,*(undefined8 *)(lVar3 + 0x50));
  uVar2 = param_2;
  FUN_1009ba3b0(param_2,uVar1);
  _swift_endAccess(auStack_48);
  if (((uint)uVar2 & 0xff) != 1) {
    FUN_100626ce0(param_2);
  }
  return;
}



/* Address: 0x1009bb884 | FUN_1009bb884 */

void FUN_1009bb884(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined8 auStack_48 [3];
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 5,auStack_48,0x21,0);
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  FUN_1009bc140(0,uVar5);
  FUN_1009bc14c();
  puVar2 = auStack_48;
  _swift_endAccess();
  lVar4 = unaff_x20[2];
  if (lVar4 != 0) {
    FUN_1009bc000();
    puVar3 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 4;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_retain(lVar4);
    FUN_100646f54(puVar3,lVar4,uVar5);
    _swift_release(lVar4);
    _swift_errorRelease(puVar3);
    FUN_100626b8c();
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bb958);
  (*pcVar1)();
}



/* Address: 0x1009bb958 | FUN_1009bb958 */

void FUN_1009bb958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = 0xff;
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  uStack_38 = param_5;
  FUN_1009bc098(0xff,param_6);
  uVar2 = 0xff;
  FUN_100631530(0xff);
  uVar3 = 0xff;
  _swift_getTupleTypeMetadata2(0xff,uVar1,uVar2,0,0);
  FUN_100660698(0,uVar3);
  FUN_10065ffac(&local_60);
  FUN_1009bb9f4(uStack_58,param_1);
  _swift_release(local_60);
  _swift_release(uStack_58);
  return;
}



/* Address: 0x1009bb9f4 | FUN_1009bb9f4 */

void FUN_1009bb9f4(long param_1,undefined8 param_2)

{
  code *pcVar1;
  Optional OVar2;
  int iVar3;
  long lVar4;
  undefined7 extraout_var;
  undefined8 uVar5;
  undefined8 *puVar6;
  long *unaff_x20;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  
  lVar8 = *(long *)(*unaff_x20 + 0x50);
  lVar11 = *(long *)(lVar8 + -8);
  lVar9 = (long)&uStack_80 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  FUN_1009bc808(0xff,lVar8);
  OVar2 = Swift::Optional::typeMetadataAccessor();
  puVar10 = (undefined8 *)
            (lVar9 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x40) + 0xfU &
                     0xfffffffffffffff0));
  _swift_beginAccess(unaff_x20 + 5,auStack_78,0x21,0);
  uVar5 = 0;
  FUN_1009bc140(0,lVar8);
  FUN_1009bc184(puVar10,param_2,uVar5);
  _swift_endAccess(auStack_78);
  puVar6 = puVar10;
  (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar10,1,lVar4);
  if ((int)puVar6 != 1) {
    puVar6 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,lVar4);
    iVar3 = (int)puVar6;
    if (iVar3 < 2) {
      if (iVar3 == 0) {
        lVar4 = unaff_x20[2];
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bbc9c);
          (*pcVar1)();
        }
        uVar5 = *puVar10;
        _swift_retain(lVar4);
        FUN_100646f54(uVar5,lVar4,lVar8);
        _swift_release(lVar4);
        FUN_100626c9c(uVar5);
        uVar7 = *(undefined8 *)(param_1 + 0x20);
        _swift_retain(uVar7);
        FUN_1006287b8();
        _swift_release(uVar7);
      }
      else {
        lVar4 = unaff_x20[2];
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bbca4);
          (*pcVar1)();
        }
        uVar5 = *puVar10;
        _swift_retain(lVar4);
        FUN_100646f54(uVar5,lVar4,lVar8);
        _swift_release(lVar4);
        FUN_100626c9c(uVar5);
        FUN_1009bbca8(param_1);
      }
      _swift_errorRelease(uVar5);
    }
    else {
      if (iVar3 == 2) {
        (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar8);
        lVar4 = unaff_x20[2];
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bbca0);
          (*pcVar1)();
        }
        _swift_retain(lVar4);
        FUN_100646e88(lVar9,lVar4,lVar8);
        _swift_release(lVar4);
        FUN_1009bbca8(param_1);
      }
      else {
        (**(code **)(lVar11 + 0x20))(lVar9,puVar10,lVar8);
        lVar4 = unaff_x20[2];
        if (lVar4 == 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bbca8);
          (*pcVar1)();
        }
        _swift_retain(lVar4);
        FUN_100646e88(lVar9,lVar4,lVar8);
        _swift_release(lVar4);
        uVar5 = *(undefined8 *)(param_1 + 0x20);
        _swift_retain(uVar5);
        FUN_1006287b8();
        _swift_release(uVar5);
      }
      (**(code **)(lVar11 + 8))(lVar9,lVar8);
    }
  }
  return;
}



/* Address: 0x1009bbca8 | FUN_1009bbca8 */

void FUN_1009bbca8(long param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined2 local_48;
  
  lVar2 = *unaff_x20;
  while( true ) {
    _swift_beginAccess(unaff_x20 + 5,&local_d0,0x21,0);
    FUN_1009bc140(0,*(undefined8 *)(lVar2 + 0x50));
    FUN_1009bc3ec(&local_88);
    _swift_endAccess(&local_d0);
    if (0xfe < local_48._1_1_) break;
    uStack_a8 = uStack_60;
    local_b0 = local_68;
    uStack_98 = uStack_50;
    uStack_a0 = local_58;
    local_90 = local_48;
    uStack_c8 = uStack_80;
    local_d0 = local_88;
    uStack_b8 = uStack_70;
    uStack_c0 = local_78;
    FUN_100626ce0(&local_d0);
    FUN_1005e70f4(&local_d0);
  }
  FUN_100626d4c();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _swift_retain(uVar1);
  FUN_1006287b8();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1009bbd94 | FUN_1009bbd94 */

void FUN_1009bbd94(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  FUN_1009ba554(*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009bbdc0 | FUN_1009bbdc0 */

void FUN_1009bbdc0(void)

{
  FUN_1009bbd94();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1009bbde0 | thunk_FUN_1009bb884 */

void thunk_FUN_1009bb884(void)

{
  FUN_1009bb884();
  return;
}



/* Address: 0x1009bbde4 | thunk_FUN_1009bb804 */

void thunk_FUN_1009bb804(void)

{
  FUN_1009bb804();
  return;
}



/* Address: 0x1009bbde8 | thunk_FUN_1009bb5a8 */

void thunk_FUN_1009bb5a8(void)

{
  FUN_1009bb5a8();
  return;
}



/* Address: 0x1009bbdec | thunk_FUN_1009bb558 */

void thunk_FUN_1009bb558(void)

{
  FUN_1009bb558();
  return;
}



/* Address: 0x1009bbdf0 | FUN_1009bbdf0 */

void FUN_1009bbdf0(undefined8 param_1,undefined8 param_2)

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
  FUN_1000f8b08(&DAT_100ff29a0,&DAT_100c8bd30);
  RVar2 = Swift::Result::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,RVar2.value) + -8) + 0x38))
            ((long)unaff_x20 + lVar3,1,1,CONCAT71(extraout_var,RVar2.value));
  puVar1 = (undefined8 *)((long)unaff_x20 + *(long *)(*unaff_x20 + 0x68));
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  return;
}



/* Address: 0x1009bbe8c | FUN_1009bbe8c */

void FUN_1009bbe8c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1006529e0(0,param_3);
  _swift_allocObject();
  FUN_1009bbdf0(param_1,param_2,uVar1);
  return;
}



/* Address: 0x1009bbed8 | FUN_1009bbed8 */

undefined8 FUN_1009bbed8(void)

{
  undefined8 unaff_x20;
  
  FUN_1009bbe8c();
  _swift_unknownObjectRetain();
  return unaff_x20;
}



/* Address: 0x1009bbf14 | FUN_1009bbf14 */

void FUN_1009bbf14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bbf38 | FUN_1009bbf38 */

void FUN_1009bbf38(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long *unaff_x20;
  undefined1 auStack_48 [24];
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 5,auStack_48,1,0);
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  puVar2 = (undefined8 *)0x0;
  FUN_1009bc140(0,uVar5);
  FUN_1009bc538();
  if (((uint)puVar2 & 0xff) != 1) {
    lVar4 = unaff_x20[2];
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc000);
      (*pcVar1)();
    }
    FUN_1009bc000();
    puVar3 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 0xc;
    *(undefined1 *)(puVar2 + 1) = 3;
    _swift_retain(lVar4);
    FUN_100646f54(puVar3,lVar4,uVar5);
    _swift_release(lVar4);
    _swift_errorRelease(puVar3);
  }
  return;
}



/* Address: 0x1009bc000 | FUN_1009bc000 */

void FUN_1009bc000(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff28c8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100ff28c8 = pTVar1;
  return;
}



/* Address: 0x1009bc040 | FUN_1009bc040 */

void FUN_1009bc040(long param_1)

{
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  puStack_20 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  local_28 = &DAT_100c8bd00;
  local_18 = &DAT_100c8bd18;
  _swift_initClassMetadata2(param_1,0,3,&local_28,param_1 + 0x58);
  return;
}



/* Address: 0x1009bc098 | FUN_1009bc098 */

void FUN_1009bc098(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bc0a4 | FUN_1009bc0a4 */

void FUN_1009bc0a4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009bc0d8 | FUN_1009bc0d8 */

void FUN_1009bc0d8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1009bb958(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1009bc0e8 | FUN_1009bc0e8 */

undefined8 * FUN_1009bc0e8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_1009bc118(uVar1);
  *param_1 = uVar1;
  return param_1;
}



/* Address: 0x1009bc118 | FUN_1009bc118 */

void FUN_1009bc118(ulong param_1)

{
  uint uVar1;
  
  uVar1 = (uint)(param_1 >> 0x3e);
  if (uVar1 != 0) {
    if (uVar1 != 1) {
      return;
    }
    param_1 = param_1 & 0x3fffffffffffffff;
  }
  _swift_retain(param_1);
  return;
}



/* Address: 0x1009bc134 | FUN_1009bc134 */

void FUN_1009bc134(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1009bc140 | FUN_1009bc140 */

void FUN_1009bc140(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bc14c | FUN_1009bc14c */

void FUN_1009bc14c(void)

{
  long *unaff_x20;
  
  if (*unaff_x20 < 0) {
    if (*unaff_x20 != -0x8000000000000000) {
      return;
    }
  }
  else {
    FUN_1009ba554();
  }
  *unaff_x20 = -0x7ffffffffffffff8;
  return;
}



/* Address: 0x1009bc184 | FUN_1009bc184 */

void FUN_1009bc184(undefined8 *param_1,undefined8 param_2,long param_3)

{
  code *pcVar1;
  Result RVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 *puVar4;
  uint uVar5;
  ulong *unaff_x20;
  long lVar6;
  undefined1 *puVar7;
  undefined8 uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar6 + -8);
  puVar7 = &stack0xffffffffffffffa0 + -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100ff29a0,&DAT_100c8bd30);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,RVar2.value);
  puVar10 = (undefined8 *)
            (puVar7 + -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  uVar9 = *unaff_x20;
  uVar5 = (uint)(uVar9 >> 0x3e);
  if (uVar5 == 0) {
    (**(code **)(*(long *)(lVar3 + -8) + 0x10))(puVar10,param_2,lVar3);
    puVar4 = puVar10;
    _swift_getEnumCaseMultiPayload(puVar10,lVar3);
    if ((int)puVar4 == 1) {
      uVar8 = *puVar10;
      if (*(long *)(uVar9 + 0x18) == 0) {
        FUN_1009ba554(uVar9);
        *unaff_x20 = 0x8000000000000008;
        *param_1 = uVar8;
        lVar3 = 0;
        FUN_1009bc808(0,lVar6);
        uVar8 = 0;
      }
      else {
        *unaff_x20 = uVar9 | 0x4000000000000000;
        *param_1 = uVar8;
        lVar3 = 0;
        FUN_1009bc808(0,lVar6);
        uVar8 = 1;
      }
    }
    else {
      pcVar1 = *(code **)(lVar11 + 0x20);
      (*pcVar1)(puVar7,puVar10,lVar6);
      if (*(long *)(uVar9 + 0x18) == 0) {
        FUN_1009ba554(uVar9);
        *unaff_x20 = 0x8000000000000008;
        (*pcVar1)(param_1,puVar7,lVar6);
        lVar3 = 0;
        FUN_1009bc808(0,lVar6);
        uVar8 = 3;
      }
      else {
        *unaff_x20 = uVar9 | 0x4000000000000000;
        (*pcVar1)(param_1,puVar7,lVar6);
        lVar3 = 0;
        FUN_1009bc808(0,lVar6);
        uVar8 = 2;
      }
    }
    _swift_storeEnumTagMultiPayload(param_1,lVar3,uVar8);
    (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,0,1,lVar3);
    return;
  }
  if (uVar5 == 2) {
    if (uVar9 != 0x8000000000000000) {
      lVar3 = 0;
      FUN_1009bc808(0,lVar6);
                    /* WARNING: Could not recover jumptable at 0x0001009bc270. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(long *)(lVar3 + -8) + 0x38))(param_1,1,1,lVar3);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc3ec);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc3e8);
  (*pcVar1)();
}



/* Address: 0x1009bc3ec | FUN_1009bc3ec */

void FUN_1009bc3ec(undefined8 *param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  ulong *unaff_x20;
  ulong uVar5;
  ulong uVar6;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined2 local_90;
  ulong local_38;
  
  uVar5 = *unaff_x20;
  if (uVar5 >> 0x3e != 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc538);
    (*pcVar1)();
  }
  uVar6 = uVar5 & 0x3fffffffffffffff;
  local_38 = uVar6;
  if (*(long *)(uVar6 + 0x18) < 1) {
    uStack_a8 = 0;
    local_b0 = 0;
    uStack_98 = 0;
    uStack_a0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    local_c0 = 0;
    local_90 = 0xff00;
    FUN_1009ba554(uVar5);
    FUN_1009bc720(&local_d0);
    *unaff_x20 = 0x8000000000000008;
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    *(undefined2 *)(param_1 + 8) = 0xff00;
  }
  else {
    uVar2 = uVar6;
    _swift_retain();
    _swift_isUniquelyReferenced_nonNull_native();
    if ((uVar2 & 1) == 0) {
      FUN_1009bc768();
      uVar6 = local_38;
    }
    lVar3 = *(long *)(uVar6 + 0x20);
    lVar4 = uVar6 + lVar3 * 0x48;
    uStack_c8 = *(undefined8 *)(lVar4 + 0x30);
    local_d0 = *(undefined8 *)(lVar4 + 0x28);
    uStack_a8 = *(undefined8 *)(lVar4 + 0x50);
    local_b0 = *(undefined8 *)(lVar4 + 0x48);
    uStack_98 = *(undefined8 *)(lVar4 + 0x60);
    uStack_a0 = *(undefined8 *)(lVar4 + 0x58);
    local_90 = *(undefined2 *)(lVar4 + 0x68);
    uStack_b8 = *(undefined8 *)(lVar4 + 0x40);
    local_c0 = *(undefined8 *)(lVar4 + 0x38);
    lVar4 = lVar3 + 1;
    if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc530);
      (*pcVar1)();
    }
    if (*(long *)(uVar6 + 0x10) <= lVar4) {
      lVar4 = 0;
    }
    *(long *)(uVar6 + 0x20) = lVar4;
    if (SBORROW8(*(long *)(uVar6 + 0x18),1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009bc534);
      (*pcVar1)();
    }
    *(long *)(uVar6 + 0x18) = *(long *)(uVar6 + 0x18) + -1;
    FUN_1009ba554(uVar5);
    *unaff_x20 = uVar6 | 0x4000000000000000;
    param_1[5] = uStack_a8;
    param_1[4] = local_b0;
    param_1[7] = uStack_98;
    param_1[6] = uStack_a0;
    *(undefined2 *)(param_1 + 8) = local_90;
    param_1[1] = uStack_c8;
    *param_1 = local_d0;
    param_1[3] = uStack_b8;
    param_1[2] = local_c0;
  }
  return;
}



/* Address: 0x1009bc538 | FUN_1009bc538 */

bool FUN_1009bc538(void)

{
  ulong *unaff_x20;
  
  return 0x8000000000000000 < *unaff_x20;
}



/* Address: 0x1009bc54c | FUN_1009bc54c */

void FUN_1009bc54c(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100ef1a40);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100ff2a28;
      FUN_1000f7830(&DAT_100ff2a28,&DAT_100c8bd90);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x48;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_1008ae794(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100ff2a28;
      FUN_1000f7830(&DAT_100ff2a28,&DAT_100c8bd90);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x48;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_1008ae67c(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100ff2a28;
    FUN_1000f7830(&DAT_100ff2a28,&DAT_100c8bd90);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_1008ae5a0(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009bc720 | FUN_1009bc720 */

undefined8 FUN_1009bc720(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff28c0;
  FUN_1000f7830(&DAT_100ff28c0,&DAT_100c8bc48);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1009bc768 | FUN_1009bc768 */

void FUN_1009bc768(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100ff2a28;
  FUN_1000f7830(&DAT_100ff2a28,&DAT_100c8bd90);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1008ae5a0(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1009bc808 | FUN_1009bc808 */

void FUN_1009bc808(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bc814 | FUN_1009bc814 */

void FUN_1009bc814(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  undefined *puStack_38;
  long local_30;
  long lStack_28;
  
  local_40 = &DAT_100c8bdc0;
  puStack_38 = &DAT_100c8bdc0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = local_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_40);
  }
  return;
}



/* Address: 0x1009bc888 | FUN_1009bc888 */

long * FUN_1009bc888(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (3 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 4;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar1 = *param_2;
        _swift_errorRetain(lVar1);
        *param_1 = lVar1;
        *(undefined1 *)((long)param_1 + uVar3) = 0;
      }
      else {
        lVar1 = *param_2;
        _swift_errorRetain(lVar1);
        *param_1 = lVar1;
        *(undefined1 *)((long)param_1 + uVar3) = 1;
      }
    }
    else if (uVar2 == 2) {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 2;
    }
    else {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009bc990 | FUN_1009bc990 */

void FUN_1009bc990(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1009bca1c;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1009bca1c:
  if ((int)uVar5 < 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009bca34. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1009bca38 | FUN_1009bca38 */

undefined8 * FUN_1009bca38(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1009bcad8;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1009bcad8:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar7 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar7);
      uVar2 = 0;
      *param_1 = uVar7;
    }
    else {
      uVar7 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar7);
      *param_1 = uVar7;
      uVar2 = 1;
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar2 = 2;
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar2 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return param_1;
}



/* Address: 0x1009bcb58 | FUN_1009bcb58 */

uint * FUN_1009bcb58(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1009bcc08;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1009bcc08:
  if ((int)uVar3 < 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1009bcca4;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1009bcca4:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar5 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar5);
      bVar1 = 0;
      *(undefined8 *)param_1 = uVar5;
    }
    else {
      uVar5 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar5);
      *(undefined8 *)param_1 = uVar5;
      bVar1 = 1;
    }
  }
  else if (uVar3 == 2) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    bVar1 = 2;
  }
  else {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    bVar1 = 3;
  }
  *(byte *)((long)param_1 + uVar2) = bVar1;
  return param_1;
}



/* Address: 0x1009bcd38 | FUN_1009bcd38 */

void FUN_1009bcd38(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1009bcdd0;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1009bcdd0:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar2 = 0;
      *param_1 = *(undefined8 *)param_2;
    }
    else {
      *param_1 = *(undefined8 *)param_2;
      uVar2 = 1;
    }
  }
  else if (uVar5 == 2) {
    (**(code **)(lVar3 + 0x20))();
    uVar2 = 2;
  }
  else {
    (**(code **)(lVar3 + 0x20))();
    uVar2 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return;
}



/* Address: 0x1009bce40 | FUN_1009bce40 */

uint * FUN_1009bce40(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1009bcef0;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1009bcef0:
  if ((int)uVar3 < 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1009bcf8c;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1009bcf8c:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      bVar1 = 0;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
    }
    else {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      bVar1 = 1;
    }
  }
  else if (uVar3 == 2) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
    bVar1 = 2;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
    bVar1 = 3;
  }
  *(byte *)((long)param_1 + uVar2) = bVar1;
  return param_1;
}



/* Address: 0x1009bd010 | FUN_1009bd010 */

void FUN_1009bd010(undefined8 *param_1)

{
  FUN_1009ba554(*param_1);
  return;
}



/* Address: 0x1009bd018 | FUN_1009bd018 */

undefined8 * FUN_1009bd018(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  FUN_1009bc118(uVar2);
  uVar1 = *param_1;
  *param_1 = uVar2;
  FUN_1009ba554(uVar1);
  return param_1;
}



/* Address: 0x1009bd050 | FUN_1009bd050 */

undefined8 * FUN_1009bd050(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  FUN_1009ba554(uVar1);
  return param_1;
}



/* Address: 0x1009bd080 | thunk_FUN_1003b8af8 */

void thunk_FUN_1003b8af8(void)

{
  FUN_1003b8af8();
  return;
}



/* Address: 0x1009bd084 | thunk_FUN_1003b8b54 */

void thunk_FUN_1003b8b54(void)

{
  FUN_1003b8b54();
  return;
}



/* Address: 0x1009bd088 | FUN_1009bd088 */

void FUN_1009bd088(ulong *param_1,uint param_2)

{
  if (1 < param_2) {
    *param_1 = (ulong)(param_2 - 2) << 3 | 0x8000000000000000;
    return;
  }
  *param_1 = *param_1 & 0xffffffffffffff8 | (ulong)param_2 << 0x3e;
  return;
}



/* Address: 0x1009bd0b4 | FUN_1009bd0b4 */

void FUN_1009bd0b4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1009bd0c0 | thunk_FUN_1009bd018 */

void thunk_FUN_1009bd018(void)

{
  FUN_1009bd018();
  return;
}



/* Address: 0x1009bd0c4 | thunk_FUN_1003b8b54 */

void thunk_FUN_1003b8b54(void)

{
  FUN_1003b8b54();
  return;
}



/* Address: 0x1009bd0c8 | thunk_FUN_1009bc0e8 */

void thunk_FUN_1009bc0e8(void)

{
  FUN_1009bc0e8();
  return;
}



/* Address: 0x1009bd0cc | thunk_FUN_1009bd050 */

void thunk_FUN_1009bd050(void)

{
  FUN_1009bd050();
  return;
}



/* Address: 0x1009bd0d0 | thunk_FUN_1003b8af8 */

void thunk_FUN_1003b8af8(void)

{
  FUN_1003b8af8();
  return;
}



/* Address: 0x1009bd0d4 | thunk_FUN_1009bd010 */

void thunk_FUN_1009bd010(void)

{
  FUN_1009bd010();
  return;
}



/* Address: 0x1009bd0d8 | FUN_1009bd0d8 */

ulong FUN_1009bd0d8(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_1009bbed8();
    puVar4 = &DAT_100f25758;
    _swift_allocObject(&DAT_100f25758,0x28,7);
    *(code **)(puVar4 + 0x10) = FUN_1009bf1ec;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f25780;
      _swift_allocObject(&DAT_100f25780,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = FUN_1006225d4;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(thunk_FUN_1008c1400,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_1009be390(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}


