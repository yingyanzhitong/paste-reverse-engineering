/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008abd60 | FUN_1008abd60 */

void FUN_1008abd60(long param_1)

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
    _swift_beginAccess(unaff_x20 + 8,&local_d0,0x21,0);
    FUN_1008ac9a4(0,*(undefined8 *)(lVar2 + 0x50));
    FUN_1008adfec(&local_88);
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



/* Address: 0x1008abe4c | FUN_1008abe4c */

void FUN_1008abe4c(void)

{
  long lVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  lVar1 = unaff_x20[2];
  _swift_bridgeObjectRelease(unaff_x20[3]);
  _swift_release(lVar1);
  _swift_bridgeObjectRelease(unaff_x20[5]);
  _swift_release(unaff_x20[7]);
  lVar1 = 0;
  FUN_1008ac9a4(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + 8,lVar1);
  _swift_release(unaff_x20[0x10]);
  return;
}



/* Address: 0x1008abebc | FUN_1008abebc */

void FUN_1008abebc(void)

{
  FUN_1008abe4c();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008abedc | FUN_1008abedc */

void FUN_1008abedc(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a0e4(param_1,*unaff_x20);
  return;
}



/* Address: 0x1008abee4 | FUN_1008abee4 */

void FUN_1008abee4(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a148(param_1,*unaff_x20);
  return;
}



/* Address: 0x1008abeec | FUN_1008abeec */

void FUN_1008abeec(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10066a214(param_1,*unaff_x20);
  return;
}



/* Address: 0x1008abef4 | thunk_FUN_1008ab0f4 */

void thunk_FUN_1008ab0f4(void)

{
  FUN_1008ab0f4();
  return;
}



/* Address: 0x1008abef8 | thunk_FUN_1008ab35c */

void thunk_FUN_1008ab35c(void)

{
  FUN_1008ab35c();
  return;
}



/* Address: 0x1008abefc | thunk_FUN_1008ab690 */

void thunk_FUN_1008ab690(void)

{
  FUN_1008ab690();
  return;
}



/* Address: 0x1008abf00 | thunk_FUN_10066a16c */

void thunk_FUN_10066a16c(void)

{
  FUN_10066a16c();
  return;
}



/* Address: 0x1008abf04 | thunk_FUN_1008ab1dc */

void thunk_FUN_1008ab1dc(void)

{
  FUN_1008ab1dc();
  return;
}



/* Address: 0x1008abf08 | thunk_FUN_1008aaef8 */

void thunk_FUN_1008aaef8(void)

{
  FUN_1008aaef8();
  return;
}



/* Address: 0x1008abf0c | FUN_1008abf0c */

void FUN_1008abf0c(long param_1,long *param_2)

{
  long *unaff_x20;
  long lVar1;
  long lVar2;
  long lVar3;
  long local_a0;
  long lStack_98;
  long lStack_90;
  long lStack_88;
  long local_80;
  undefined2 uStack_78;
  undefined6 uStack_76;
  undefined2 uStack_70;
  undefined8 uStack_6e;
  long local_60;
  long lStack_58;
  undefined1 local_50;
  long local_40;
  undefined1 local_38;
  
  lVar1 = *unaff_x20;
  unaff_x20[0x10] = 0;
  unaff_x20[5] = param_1;
  local_60 = *param_2;
  lStack_58 = param_2[1];
  local_50 = (undefined1)param_2[2];
  lVar2 = param_2[3];
  local_40 = lStack_58;
  local_38 = local_50;
  _swift_retain();
  FUN_10089ae2c(&local_40,&local_a0);
  FUN_1008aac34(&local_60,lVar2);
  unaff_x20[3] = lStack_58;
  unaff_x20[2] = local_60;
  *(undefined1 *)(unaff_x20 + 4) = local_50;
  FUN_1008acf00(&local_a0,lVar2,*(undefined8 *)(lVar1 + 0x50));
  unaff_x20[0xb] = lStack_88;
  unaff_x20[10] = lStack_90;
  unaff_x20[0xd] = CONCAT62(uStack_76,uStack_78);
  unaff_x20[0xc] = local_80;
  *(undefined8 *)((long)unaff_x20 + 0x72) = uStack_6e;
  *(ulong *)((long)unaff_x20 + 0x6a) = CONCAT26(uStack_70,uStack_76);
  lVar1 = param_2[5];
  lVar3 = param_2[4];
  unaff_x20[7] = param_2[5];
  unaff_x20[6] = lVar3;
  unaff_x20[9] = lStack_98;
  unaff_x20[8] = local_a0;
  _swift_bridgeObjectRetain(lVar2);
  _swift_retain(lVar1);
  return;
}



/* Address: 0x1008abfd4 | FUN_1008abfd4 */

void FUN_1008abfd4(undefined8 param_1,undefined8 param_2)

{
  _swift_allocObject();
  FUN_1008abf0c(param_1,param_2);
  return;
}



/* Address: 0x1008ac01c | FUN_1008ac01c */

void FUN_1008ac01c(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x80) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ac02c);
  (*pcVar1)();
}



/* Address: 0x1008ac02c | FUN_1008ac02c */

void FUN_1008ac02c(void)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 uVar6;
  long *unaff_x20;
  undefined8 auStack_48 [3];
  
  lVar5 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 8,auStack_48,0x21,0);
  uVar6 = *(undefined8 *)(lVar5 + 0x50);
  uVar2 = 0;
  FUN_1008ac9a4(0,uVar6);
  FUN_1008ad058();
  puVar3 = auStack_48;
  _swift_endAccess();
  if ((uVar2 & 0xff) != 1) {
    lVar5 = unaff_x20[0x10];
    if (lVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ac0fc);
      (*pcVar1)();
    }
    FUN_1008ac4dc();
    puVar4 = &DAT_100eeb710;
    _swift_allocError(&DAT_100eeb710,puVar3,0,0);
    *puVar3 = 0xc;
    *(undefined1 *)(puVar3 + 1) = 3;
    _swift_retain(lVar5);
    FUN_100646f54(puVar4,lVar5,uVar6);
    _swift_release(lVar5);
    _swift_errorRelease(puVar4);
  }
  return;
}



/* Address: 0x1008ac0fc | FUN_1008ac0fc */

void FUN_1008ac0fc(void)

{
  FUN_10061e580(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1008ac108 | FUN_1008ac108 */

void FUN_1008ac108(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_bridgeObjectRelease(param_1[1]);
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_release(param_1[5]);
  return;
}



/* Address: 0x1008ac140 | FUN_1008ac140 */

undefined8 * FUN_1008ac140(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[1];
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar2 = param_2[5];
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  param_1[5] = uVar2;
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1008ac1bc | FUN_1008ac1bc */

undefined8 * FUN_1008ac1bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1008ac254 | FUN_1008ac254 */

void FUN_1008ac254(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar3 = param_2[2];
  uVar5 = param_2[5];
  uVar4 = param_2[4];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  param_1[5] = uVar5;
  param_1[4] = uVar4;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008ac268 | FUN_1008ac268 */

undefined8 * FUN_1008ac268(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  _swift_bridgeObjectRelease(param_1[3]);
  uVar2 = param_2[5];
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  uVar1 = param_1[5];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1008ac2cc | FUN_1008ac2cc */

void FUN_1008ac2cc(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ac2d8 | FUN_1008ac2d8 */

void FUN_1008ac2d8(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  uVar1 = 0xff;
  FUN_1006529e0(0xff,*param_1);
  puVar2 = &DAT_100fea770;
  FUN_1000f8b08(&DAT_100fea770,&DAT_100c82090);
  _swift_getFunctionTypeMetadata1(0x44000001,puVar2,uVar1);
  return;
}



/* Address: 0x1008ac324 | FUN_1008ac324 */

void FUN_1008ac324(long param_1)

{
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  puStack_30 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  local_38 = &DAT_100c820e8;
  local_28 = PTR___value_witness_table_for_____>____100eae0d0 + 0x40;
  puStack_20 = &DAT_100c82100;
  local_18 = &DAT_100c82118;
  _swift_initClassMetadata2(param_1,0,5,&local_38,param_1 + 0x58);
  return;
}



/* Address: 0x1008ac394 | FUN_1008ac394 */

void FUN_1008ac394(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ac3a0 | FUN_1008ac3a0 */

void FUN_1008ac3a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008ab6f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Address: 0x1008ac3c8 | FUN_1008ac3c8 */

void FUN_1008ac3c8(void)

{
  long unaff_x20;
  
  FUN_100004594(unaff_x20 + 0x18);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008ac404 | FUN_1008ac404 */

void FUN_1008ac404(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined1 uVar7;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  uVar7 = *(undefined1 *)(unaff_x20 + 0x60);
  FUN_100004640(unaff_x20 + 0x18,uVar3);
  (**(code **)(lVar6 + 0x30))(uVar1,uVar4,uVar2,uVar5,uVar7,uVar3,lVar6);
  return;
}



/* Address: 0x1008ac478 | FUN_1008ac478 */

void FUN_1008ac478(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008ac49c | FUN_1008ac49c */

void FUN_1008ac49c(void)

{
  FUN_10061e580(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1008ac4a8 | FUN_1008ac4a8 */

void FUN_1008ac4a8(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008ac4dc | FUN_1008ac4dc */

void FUN_1008ac4dc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fea7f8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c684cc;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c684cc,&DAT_100eeb710);
  DAT_100fea7f8 = pTVar1;
  return;
}



/* Address: 0x1008ac51c | FUN_1008ac51c */

void FUN_1008ac51c(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  lVar1 = *(long *)(param_2 + 0x20);
  FUN_100004640(param_2,uVar2);
  (**(code **)(lVar1 + 0x18))(uVar2,lVar1);
  *param_1 = uVar2;
  return;
}



/* Address: 0x1008ac574 | FUN_1008ac574 */

void FUN_1008ac574(long *param_1,long param_2)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fea3a8;
    FUN_1000f8b08(&DAT_100fea3a8,&DAT_100c81b18);
    _swift_getWitnessTable(param_2,puVar1);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1008ac5c0 | FUN_1008ac5c0 */

void FUN_1008ac5c0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008ab16c(param_1,*(undefined8 *)(unaff_x20 + 0x10),param_2);
  return;
}



/* Address: 0x1008ac5dc | thunk_FUN_1008ac3a0 */

void thunk_FUN_1008ac3a0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008ab6f8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Address: 0x1008ac5e0 | thunk_FUN_1008ac49c */

void thunk_FUN_1008ac49c(void)

{
  FUN_1008ac49c();
  return;
}



/* Address: 0x1008ac5e4 | FUN_1008ac5e4 */

void FUN_1008ac5e4(undefined8 *param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((long)param_1 + 0x39);
  if (bVar1 < 2) {
    if ((bVar1 == 0) || (bVar1 == 1)) {
      _swift_bridgeObjectRelease(*param_1);
      return;
    }
  }
  else {
    if (bVar1 == 2) {
      FUN_100004594();
      _swift_release(param_1[5]);
      _swift_bridgeObjectRelease(param_1[6]);
      return;
    }
    if ((bVar1 == 3) || (bVar1 == 4)) {
      _swift_release(*param_1);
      return;
    }
  }
  return;
}



/* Address: 0x1008ac654 | FUN_1008ac654 */

undefined8 * FUN_1008ac654(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  bVar1 = *(byte *)((long)param_2 + 0x39);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (bVar1 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (bVar1 == 2) {
      lVar3 = param_2[3];
      param_1[4] = param_2[4];
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
      uVar2 = param_2[6];
      uVar4 = param_2[5];
      param_1[6] = param_2[6];
      param_1[5] = uVar4;
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = 2;
      _swift_retain(uVar4);
      _swift_bridgeObjectRetain(uVar2);
      return param_1;
    }
    if ((bVar1 == 3) || (bVar1 == 4)) {
      *param_1 = *param_2;
      *(byte *)((long)param_1 + 0x39) = bVar1;
      _swift_retain();
      return param_1;
    }
  }
  uVar2 = *param_2;
  uVar5 = param_2[3];
  uVar4 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar2;
  return param_1;
}



/* Address: 0x1008ac750 | FUN_1008ac750 */

undefined8 * FUN_1008ac750(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar2 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_3 + 0x10));
  (**(code **)(*(long *)(lVar2 + -8) + 8))(param_1,lVar2);
  bVar1 = *(byte *)((long)param_2 + 0x39);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (bVar1 == 1) {
      *param_1 = *param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (bVar1 == 2) {
      lVar2 = param_2[3];
      param_1[3] = lVar2;
      param_1[4] = param_2[4];
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      param_1[5] = param_2[5];
      uVar3 = param_2[6];
      param_1[6] = uVar3;
      *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
      *(undefined1 *)((long)param_1 + 0x39) = 2;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar3);
      return param_1;
    }
    if ((bVar1 == 3) || (bVar1 == 4)) {
      *param_1 = *param_2;
      *(byte *)((long)param_1 + 0x39) = bVar1;
      _swift_retain();
      return param_1;
    }
  }
  uVar4 = param_2[1];
  uVar3 = *param_2;
  uVar6 = param_2[3];
  uVar5 = param_2[2];
  uVar8 = param_2[5];
  uVar7 = param_2[4];
  uVar9 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar9;
  param_1[3] = uVar6;
  param_1[2] = uVar5;
  param_1[5] = uVar8;
  param_1[4] = uVar7;
  param_1[1] = uVar4;
  *param_1 = uVar3;
  return param_1;
}



/* Address: 0x1008ac87c | FUN_1008ac87c */

void FUN_1008ac87c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ac888 | FUN_1008ac888 */

void FUN_1008ac888(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008ac8a4 | FUN_1008ac8a4 */

undefined8 * FUN_1008ac8a4(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 != param_2) {
    lVar1 = 0;
    FUN_1008ac87c(0,*(undefined8 *)(param_3 + 0x10));
    (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
    uVar2 = *param_2;
    uVar4 = param_2[3];
    uVar3 = param_2[2];
    param_1[1] = param_2[1];
    *param_1 = uVar2;
    param_1[3] = uVar4;
    param_1[2] = uVar3;
    uVar2 = param_2[4];
    param_1[5] = param_2[5];
    param_1[4] = uVar2;
    uVar2 = *(undefined8 *)((long)param_2 + 0x2a);
    *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
    *(undefined8 *)((long)param_1 + 0x2a) = uVar2;
  }
  return param_1;
}



/* Address: 0x1008ac908 | FUN_1008ac908 */

int FUN_1008ac908(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return *param_1 + 0xfb;
  }
  uVar1 = *(byte *)((long)param_1 + 0x39) ^ 0xff;
  if (*(byte *)((long)param_1 + 0x39) < 6) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1008ac950 | FUN_1008ac950 */

void FUN_1008ac950(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfb) {
    if (0xfa < param_3) {
      *(undefined1 *)((long)param_1 + 0x3a) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x39) = -(char)param_2;
      return;
    }
  }
  else {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined2 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 - 0xfb);
    if (0xfa < param_3) {
      *(undefined1 *)((long)param_1 + 0x3a) = 1;
    }
  }
  return;
}



/* Address: 0x1008ac9a4 | FUN_1008ac9a4 */

void FUN_1008ac9a4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ac9b0 | FUN_1008ac9b0 */

void FUN_1008ac9b0(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x39);
  if (4 < *(byte *)((long)param_1 + 0x39)) {
    uVar1 = *param_1 + 5;
  }
  if ((int)uVar1 < 2) {
    if ((uVar1 == 0) || (uVar1 == 1)) {
      _swift_bridgeObjectRelease(*(undefined8 *)param_1);
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      FUN_100004594();
      _swift_release(*(undefined8 *)(param_1 + 10));
      _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0xc));
      return;
    }
    if ((uVar1 == 3) || (uVar1 == 4)) {
      _swift_release(*(undefined8 *)param_1);
      return;
    }
  }
  return;
}



/* Address: 0x1008aca30 | FUN_1008aca30 */

undefined8 * FUN_1008aca30(undefined8 *param_1,int *param_2)

{
  uint uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = (uint)*(byte *)((long)param_2 + 0x39);
  if (4 < *(byte *)((long)param_2 + 0x39)) {
    uVar1 = *param_2 + 5;
  }
  if ((int)uVar1 < 2) {
    if (uVar1 == 0) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar1 == 1) {
      *param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (uVar1 == 2) {
      lVar3 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
      uVar2 = *(undefined8 *)(param_2 + 0xc);
      uVar4 = *(undefined8 *)(param_2 + 10);
      param_1[6] = *(undefined8 *)(param_2 + 0xc);
      param_1[5] = uVar4;
      *(char *)(param_1 + 7) = (char)param_2[0xe];
      *(undefined1 *)((long)param_1 + 0x39) = 2;
      _swift_retain(uVar4);
      _swift_bridgeObjectRetain(uVar2);
      return param_1;
    }
    if ((uVar1 == 3) || (uVar1 == 4)) {
      *param_1 = *(undefined8 *)param_2;
      *(char *)((long)param_1 + 0x39) = (char)uVar1;
      _swift_retain();
      return param_1;
    }
  }
  uVar2 = *(undefined8 *)param_2;
  uVar5 = *(undefined8 *)(param_2 + 6);
  uVar4 = *(undefined8 *)(param_2 + 4);
  param_1[1] = *(undefined8 *)(param_2 + 2);
  *param_1 = uVar2;
  param_1[3] = uVar5;
  param_1[2] = uVar4;
  uVar2 = *(undefined8 *)(param_2 + 8);
  param_1[5] = *(undefined8 *)(param_2 + 10);
  param_1[4] = uVar2;
  uVar2 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar2;
  return param_1;
}



/* Address: 0x1008acb3c | FUN_1008acb3c */

int * FUN_1008acb3c(int *param_1,int *param_2)

{
  long lVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0x39);
  if (4 < *(byte *)((long)param_1 + 0x39)) {
    uVar2 = *param_1 + 5;
  }
  if ((int)uVar2 < 2) {
    if ((uVar2 != 0) && (uVar2 != 1)) goto LAB_1008acbc8;
    uVar3 = *(undefined8 *)param_1;
  }
  else {
    if (uVar2 != 2) {
      if ((uVar2 == 3) || (uVar2 == 4)) {
        _swift_release(*(undefined8 *)param_1);
      }
      goto LAB_1008acbc8;
    }
    FUN_100004594(param_1);
    _swift_release(*(undefined8 *)(param_1 + 10));
    uVar3 = *(undefined8 *)(param_1 + 0xc);
  }
  _swift_bridgeObjectRelease(uVar3);
LAB_1008acbc8:
  uVar2 = (uint)*(byte *)((long)param_2 + 0x39);
  if (4 < *(byte *)((long)param_2 + 0x39)) {
    uVar2 = *param_2 + 5;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      _swift_bridgeObjectRetain();
      return param_1;
    }
    if (uVar2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      _swift_bridgeObjectRetain();
      return param_1;
    }
  }
  else {
    if (uVar2 == 2) {
      lVar1 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar1;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      uVar3 = *(undefined8 *)(param_2 + 0xc);
      *(undefined8 *)(param_1 + 0xc) = uVar3;
      *(char *)(param_1 + 0xe) = (char)param_2[0xe];
      *(undefined1 *)((long)param_1 + 0x39) = 2;
      _swift_retain();
      _swift_bridgeObjectRetain(uVar3);
      return param_1;
    }
    if ((uVar2 == 3) || (uVar2 == 4)) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(char *)((long)param_1 + 0x39) = (char)uVar2;
      _swift_retain();
      return param_1;
    }
  }
  uVar4 = *(undefined8 *)(param_2 + 2);
  uVar3 = *(undefined8 *)param_2;
  uVar6 = *(undefined8 *)(param_2 + 6);
  uVar5 = *(undefined8 *)(param_2 + 4);
  uVar8 = *(undefined8 *)(param_2 + 10);
  uVar7 = *(undefined8 *)(param_2 + 8);
  uVar9 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar9;
  *(undefined8 *)(param_1 + 6) = uVar6;
  *(undefined8 *)(param_1 + 4) = uVar5;
  *(undefined8 *)(param_1 + 10) = uVar8;
  *(undefined8 *)(param_1 + 8) = uVar7;
  *(undefined8 *)(param_1 + 2) = uVar4;
  *(undefined8 *)param_1 = uVar3;
  return param_1;
}



/* Address: 0x1008accc4 | FUN_1008accc4 */

void FUN_1008accc4(int *param_1,int *param_2)

{
  undefined8 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  if (param_1 == param_2) {
    return;
  }
  uVar2 = (uint)*(byte *)((long)param_1 + 0x39);
  if (4 < *(byte *)((long)param_1 + 0x39)) {
    uVar2 = *param_1 + 5;
  }
  if ((int)uVar2 < 2) {
    if ((uVar2 != 0) && (uVar2 != 1)) goto LAB_1008acd5c;
    uVar1 = *(undefined8 *)param_1;
  }
  else {
    if (uVar2 != 2) {
      if ((uVar2 == 3) || (uVar2 == 4)) {
        _swift_release(*(undefined8 *)param_1);
      }
      goto LAB_1008acd5c;
    }
    FUN_100004594();
    _swift_release(*(undefined8 *)(param_1 + 10));
    uVar1 = *(undefined8 *)(param_1 + 0xc);
  }
  _swift_bridgeObjectRelease(uVar1);
LAB_1008acd5c:
  uVar2 = (uint)*(byte *)((long)param_2 + 0x39);
  if (4 < *(byte *)((long)param_2 + 0x39)) {
    uVar2 = *param_2 + 5;
  }
  if ((int)uVar2 < 2) {
    if (uVar2 == 0) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 0;
      return;
    }
    if (uVar2 == 1) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
  }
  else {
    if (uVar2 == 2) {
      uVar1 = *(undefined8 *)param_2;
      uVar4 = *(undefined8 *)(param_2 + 6);
      uVar3 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 6) = uVar4;
      *(undefined8 *)(param_1 + 4) = uVar3;
      uVar1 = *(undefined8 *)(param_2 + 8);
      *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
      *(undefined8 *)(param_1 + 8) = uVar1;
      uVar1 = *(undefined8 *)((long)param_2 + 0x29);
      *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
      *(undefined8 *)((long)param_1 + 0x29) = uVar1;
      *(undefined1 *)((long)param_1 + 0x39) = 2;
      return;
    }
    if (uVar2 == 3) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 3;
      return;
    }
    if (uVar2 == 4) {
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
      *(undefined1 *)((long)param_1 + 0x39) = 4;
      return;
    }
  }
  uVar1 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 6);
  uVar3 = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)param_1 = uVar1;
  *(undefined8 *)(param_1 + 6) = uVar4;
  *(undefined8 *)(param_1 + 4) = uVar3;
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  uVar1 = *(undefined8 *)((long)param_2 + 0x2a);
  *(undefined8 *)((long)param_1 + 0x32) = *(undefined8 *)((long)param_2 + 0x32);
  *(undefined8 *)((long)param_1 + 0x2a) = uVar1;
  return;
}



/* Address: 0x1008ace2c | FUN_1008ace2c */

int FUN_1008ace2c(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfa < param_2) && (*(char *)((long)param_1 + 0x3a) != '\0')) {
    return *param_1 + 0xfb;
  }
  iVar1 = 0;
  if (5 < *(byte *)((long)param_1 + 0x39)) {
    iVar1 = (*(byte *)((long)param_1 + 0x39) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1008ace68 | FUN_1008ace68 */

void FUN_1008ace68(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfb) {
    if (0xfa < param_3) {
      *(undefined1 *)((long)param_1 + 0x3a) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + 0x39) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x32) = 0;
    *(undefined8 *)((long)param_1 + 0x2a) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 0xfb;
    if (0xfa < param_3) {
      *(undefined1 *)((long)param_1 + 0x3a) = 1;
    }
  }
  return;
}



/* Address: 0x1008aceb8 | FUN_1008aceb8 */

uint FUN_1008aceb8(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)((long)param_1 + 0x39);
  if (4 < *(byte *)((long)param_1 + 0x39)) {
    uVar1 = *param_1 + 5;
  }
  return uVar1;
}



/* Address: 0x1008aced4 | FUN_1008aced4 */

void FUN_1008aced4(int *param_1,uint param_2)

{
  if (4 < param_2) {
    *(undefined8 *)((long)param_1 + 0x31) = 0;
    *(undefined8 *)((long)param_1 + 0x29) = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    *param_1 = param_2 - 5;
    param_2 = 5;
  }
  *(char *)((long)param_1 + 0x39) = (char)param_2;
  return;
}



/* Address: 0x1008acf00 | FUN_1008acf00 */

void FUN_1008acf00(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}



/* Address: 0x1008acf0c | FUN_1008acf0c */

undefined8 FUN_1008acf0c(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  long *unaff_x20;
  long lVar4;
  undefined1 auVar5 [16];
  String SVar6;
  long local_70;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  char local_38;
  byte local_37;
  
  lVar3 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_1 + 0x10));
  lVar4 = *(long *)(lVar3 + -8);
  (**(code **)(lVar4 + 0x10))(&local_70);
  if (1 < local_37) {
    if (local_37 == 5) {
      if (local_38 == '\0') {
        local_68 = local_68 | (byte)local_58;
        bStack_67 = bStack_67 | (byte)((ulong)local_58 >> 8);
        bStack_66 = bStack_66 | (byte)((ulong)local_58 >> 0x10);
        bStack_65 = bStack_65 | (byte)((ulong)local_58 >> 0x18);
        bStack_64 = bStack_64 | (byte)((ulong)local_58 >> 0x20);
        bStack_63 = bStack_63 | (byte)((ulong)local_58 >> 0x28);
        bStack_62 = bStack_62 | (byte)((ulong)local_58 >> 0x30);
        bStack_61 = bStack_61 | (byte)((ulong)local_58 >> 0x38);
        bStack_60 = bStack_60 | (byte)uStack_50;
        bStack_5f = bStack_5f | (byte)((ulong)uStack_50 >> 8);
        bStack_5e = bStack_5e | (byte)((ulong)uStack_50 >> 0x10);
        bStack_5d = bStack_5d | (byte)((ulong)uStack_50 >> 0x18);
        bStack_5c = bStack_5c | (byte)((ulong)uStack_50 >> 0x20);
        bStack_5b = bStack_5b | (byte)((ulong)uStack_50 >> 0x28);
        bStack_5a = bStack_5a | (byte)((ulong)uStack_50 >> 0x30);
        bStack_59 = bStack_59 | (byte)((ulong)uStack_50 >> 0x38);
        auVar5[1] = bStack_67;
        auVar5[0] = local_68;
        auVar5[2] = bStack_66;
        auVar5[3] = bStack_65;
        auVar5[4] = bStack_64;
        auVar5[5] = bStack_63;
        auVar5[6] = bStack_62;
        auVar5[7] = bStack_61;
        auVar5[8] = bStack_60;
        auVar5[9] = bStack_5f;
        auVar5[10] = bStack_5e;
        auVar5[0xb] = bStack_5d;
        auVar5[0xc] = bStack_5c;
        auVar5[0xd] = bStack_5b;
        auVar5[0xe] = bStack_5a;
        auVar5[0xf] = bStack_59;
        auVar1[1] = bStack_67;
        auVar1[0] = local_68;
        auVar1[2] = bStack_66;
        auVar1[3] = bStack_65;
        auVar1[4] = bStack_64;
        auVar1[5] = bStack_63;
        auVar1[6] = bStack_62;
        auVar1[7] = bStack_61;
        auVar1[8] = bStack_60;
        auVar1[9] = bStack_5f;
        auVar1[10] = bStack_5e;
        auVar1[0xb] = bStack_5d;
        auVar1[0xc] = bStack_5c;
        auVar1[0xd] = bStack_5b;
        auVar1[0xe] = bStack_5a;
        auVar1[0xf] = bStack_59;
        auVar5 = NEON_ext(auVar5,auVar1,8,1);
        if ((CONCAT17(bStack_61 | auVar5[7],
                      CONCAT16(bStack_62 | auVar5[6],
                               CONCAT15(bStack_63 | auVar5[5],
                                        CONCAT14(bStack_64 | auVar5[4],
                                                 CONCAT13(bStack_65 | auVar5[3],
                                                          CONCAT12(bStack_66 | auVar5[2],
                                                                   CONCAT11(bStack_67 | auVar5[1],
                                                                            local_68 | auVar5[0]))))
                                       ))) == 0 && local_70 == 0) &&
            (local_48 == 0 && lStack_40 == 0)) {
          return 1;
        }
      }
    }
    else {
      (**(code **)(lVar4 + 8))(&local_70,lVar3);
    }
    SVar6.bridgeObject = (void *)0x2;
    SVar6.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000037,0x8000000100db4390,
               0xdb4370);
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ad058);
    (*pcVar2)();
  }
  if (local_37 != 0) {
    (**(code **)(lVar4 + 8))(&local_70,lVar3);
    return 1;
  }
  (**(code **)(lVar4 + 8))();
  *unaff_x20 = local_70;
  *(undefined1 *)((long)unaff_x20 + 0x39) = 1;
  return 0;
}



/* Address: 0x1008ad058 | FUN_1008ad058 */

undefined8 FUN_1008ad058(long param_1)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 *unaff_x20;
  long lVar3;
  code *pcVar4;
  undefined1 auVar5 [16];
  String SVar6;
  long local_70;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  char local_38;
  byte local_37;
  
  lVar2 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_1 + 0x10));
  lVar3 = *(long *)(lVar2 + -8);
  (**(code **)(lVar3 + 0x10))(&local_70);
  if (local_37 < 5) {
    pcVar4 = *(code **)(lVar3 + 8);
    (*pcVar4)(&local_70,lVar2);
    (*pcVar4)();
    *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
    *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    unaff_x20[5] = 0;
    unaff_x20[4] = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
    return 0;
  }
  if (local_38 == '\0') {
    local_68 = local_68 | (byte)local_58;
    bStack_67 = bStack_67 | (byte)((ulong)local_58 >> 8);
    bStack_66 = bStack_66 | (byte)((ulong)local_58 >> 0x10);
    bStack_65 = bStack_65 | (byte)((ulong)local_58 >> 0x18);
    bStack_64 = bStack_64 | (byte)((ulong)local_58 >> 0x20);
    bStack_63 = bStack_63 | (byte)((ulong)local_58 >> 0x28);
    bStack_62 = bStack_62 | (byte)((ulong)local_58 >> 0x30);
    bStack_61 = bStack_61 | (byte)((ulong)local_58 >> 0x38);
    bStack_60 = bStack_60 | (byte)uStack_50;
    bStack_5f = bStack_5f | (byte)((ulong)uStack_50 >> 8);
    bStack_5e = bStack_5e | (byte)((ulong)uStack_50 >> 0x10);
    bStack_5d = bStack_5d | (byte)((ulong)uStack_50 >> 0x18);
    bStack_5c = bStack_5c | (byte)((ulong)uStack_50 >> 0x20);
    bStack_5b = bStack_5b | (byte)((ulong)uStack_50 >> 0x28);
    bStack_5a = bStack_5a | (byte)((ulong)uStack_50 >> 0x30);
    bStack_59 = bStack_59 | (byte)((ulong)uStack_50 >> 0x38);
    auVar5[1] = bStack_67;
    auVar5[0] = local_68;
    auVar5[2] = bStack_66;
    auVar5[3] = bStack_65;
    auVar5[4] = bStack_64;
    auVar5[5] = bStack_63;
    auVar5[6] = bStack_62;
    auVar5[7] = bStack_61;
    auVar5[8] = bStack_60;
    auVar5[9] = bStack_5f;
    auVar5[10] = bStack_5e;
    auVar5[0xb] = bStack_5d;
    auVar5[0xc] = bStack_5c;
    auVar5[0xd] = bStack_5b;
    auVar5[0xe] = bStack_5a;
    auVar5[0xf] = bStack_59;
    auVar1[1] = bStack_67;
    auVar1[0] = local_68;
    auVar1[2] = bStack_66;
    auVar1[3] = bStack_65;
    auVar1[4] = bStack_64;
    auVar1[5] = bStack_63;
    auVar1[6] = bStack_62;
    auVar1[7] = bStack_61;
    auVar1[8] = bStack_60;
    auVar1[9] = bStack_5f;
    auVar1[10] = bStack_5e;
    auVar1[0xb] = bStack_5d;
    auVar1[0xc] = bStack_5c;
    auVar1[0xd] = bStack_5b;
    auVar1[0xe] = bStack_5a;
    auVar1[0xf] = bStack_59;
    auVar5 = NEON_ext(auVar5,auVar1,8,1);
    if ((CONCAT17(bStack_61 | auVar5[7],
                  CONCAT16(bStack_62 | auVar5[6],
                           CONCAT15(bStack_63 | auVar5[5],
                                    CONCAT14(bStack_64 | auVar5[4],
                                             CONCAT13(bStack_65 | auVar5[3],
                                                      CONCAT12(bStack_66 | auVar5[2],
                                                               CONCAT11(bStack_67 | auVar5[1],
                                                                        local_68 | auVar5[0])))))))
         == 0 && local_70 == 0) && (local_48 == 0 && lStack_40 == 0)) {
      return 1;
    }
  }
  SVar6.bridgeObject = (void *)0x2;
  SVar6.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar6,(StaticString)0xd000000000000037,0x8000000100db4390,
             0xdb4370);
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ad178);
  (*pcVar4)();
}



/* Address: 0x1008ad178 | FUN_1008ad178 */

void FUN_1008ad178(long param_1)

{
  undefined1 auVar1 [16];
  code *pcVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  undefined1 auVar6 [16];
  String SVar7;
  long local_70;
  byte local_68;
  byte bStack_67;
  byte bStack_66;
  byte bStack_65;
  byte bStack_64;
  byte bStack_63;
  byte bStack_62;
  byte bStack_61;
  byte bStack_60;
  byte bStack_5f;
  byte bStack_5e;
  byte bStack_5d;
  byte bStack_5c;
  byte bStack_5b;
  byte bStack_5a;
  byte bStack_59;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  long lStack_40;
  char local_38;
  byte local_37;
  
  lVar3 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_1 + 0x10));
  lVar5 = *(long *)(lVar3 + -8);
  (**(code **)(lVar5 + 0x10))(&local_70);
  if (local_37 < 4) {
    plVar4 = &local_70;
    (**(code **)(lVar5 + 8))(plVar4,lVar3);
    FUN_1008a869c();
    _swift_allocError(&DAT_100f0b258,plVar4,0,0);
    *(undefined1 *)plVar4 = 3;
  }
  else {
    if (local_37 != 4) {
      if (local_38 == '\0') {
        local_68 = local_68 | (byte)local_58;
        bStack_67 = bStack_67 | (byte)((ulong)local_58 >> 8);
        bStack_66 = bStack_66 | (byte)((ulong)local_58 >> 0x10);
        bStack_65 = bStack_65 | (byte)((ulong)local_58 >> 0x18);
        bStack_64 = bStack_64 | (byte)((ulong)local_58 >> 0x20);
        bStack_63 = bStack_63 | (byte)((ulong)local_58 >> 0x28);
        bStack_62 = bStack_62 | (byte)((ulong)local_58 >> 0x30);
        bStack_61 = bStack_61 | (byte)((ulong)local_58 >> 0x38);
        bStack_60 = bStack_60 | (byte)uStack_50;
        bStack_5f = bStack_5f | (byte)((ulong)uStack_50 >> 8);
        bStack_5e = bStack_5e | (byte)((ulong)uStack_50 >> 0x10);
        bStack_5d = bStack_5d | (byte)((ulong)uStack_50 >> 0x18);
        bStack_5c = bStack_5c | (byte)((ulong)uStack_50 >> 0x20);
        bStack_5b = bStack_5b | (byte)((ulong)uStack_50 >> 0x28);
        bStack_5a = bStack_5a | (byte)((ulong)uStack_50 >> 0x30);
        bStack_59 = bStack_59 | (byte)((ulong)uStack_50 >> 0x38);
        auVar6[1] = bStack_67;
        auVar6[0] = local_68;
        auVar6[2] = bStack_66;
        auVar6[3] = bStack_65;
        auVar6[4] = bStack_64;
        auVar6[5] = bStack_63;
        auVar6[6] = bStack_62;
        auVar6[7] = bStack_61;
        auVar6[8] = bStack_60;
        auVar6[9] = bStack_5f;
        auVar6[10] = bStack_5e;
        auVar6[0xb] = bStack_5d;
        auVar6[0xc] = bStack_5c;
        auVar6[0xd] = bStack_5b;
        auVar6[0xe] = bStack_5a;
        auVar6[0xf] = bStack_59;
        auVar1[1] = bStack_67;
        auVar1[0] = local_68;
        auVar1[2] = bStack_66;
        auVar1[3] = bStack_65;
        auVar1[4] = bStack_64;
        auVar1[5] = bStack_63;
        auVar1[6] = bStack_62;
        auVar1[7] = bStack_61;
        auVar1[8] = bStack_60;
        auVar1[9] = bStack_5f;
        auVar1[10] = bStack_5e;
        auVar1[0xb] = bStack_5d;
        auVar1[0xc] = bStack_5c;
        auVar1[0xd] = bStack_5b;
        auVar1[0xe] = bStack_5a;
        auVar1[0xf] = bStack_59;
        auVar6 = NEON_ext(auVar6,auVar1,8,1);
        if ((CONCAT17(bStack_61 | auVar6[7],
                      CONCAT16(bStack_62 | auVar6[6],
                               CONCAT15(bStack_63 | auVar6[5],
                                        CONCAT14(bStack_64 | auVar6[4],
                                                 CONCAT13(bStack_65 | auVar6[3],
                                                          CONCAT12(bStack_66 | auVar6[2],
                                                                   CONCAT11(bStack_67 | auVar6[1],
                                                                            local_68 | auVar6[0]))))
                                       ))) == 0 && local_70 == 0) &&
            (local_48 == 0 && lStack_40 == 0)) {
          return;
        }
      }
      SVar7.bridgeObject = (void *)0x2;
      SVar7.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar7,(StaticString)0xd000000000000037,0x8000000100db4390
                 ,0xdb4370);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ad2ac);
      (*pcVar2)();
    }
    (**(code **)(lVar5 + 8))(&local_70,lVar3);
  }
  return;
}



/* Address: 0x1008ad2ac | FUN_1008ad2ac */

undefined8 FUN_1008ad2ac(undefined8 param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 uVar5;
  ulong *unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  String SVar9;
  ulong local_80;
  byte local_78;
  byte bStack_77;
  byte bStack_76;
  byte bStack_75;
  byte bStack_74;
  byte bStack_73;
  byte bStack_72;
  byte bStack_71;
  byte bStack_70;
  byte bStack_6f;
  byte bStack_6e;
  byte bStack_6d;
  byte bStack_6c;
  byte bStack_6b;
  byte bStack_6a;
  byte bStack_69;
  undefined8 local_68;
  undefined8 uStack_60;
  long local_58;
  long lStack_50;
  char local_48;
  byte local_47;
  
  lVar2 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_2 + 0x10));
  lVar6 = *(long *)(lVar2 + -8);
  (**(code **)(lVar6 + 0x10))(&local_80);
  if (local_47 < 3) {
    (**(code **)(lVar6 + 8))(&local_80,lVar2);
    uVar3 = 0;
  }
  else {
    if (local_47 == 3) {
      pcVar7 = *(code **)(lVar6 + 8);
      (*pcVar7)();
      *unaff_x20 = 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      *(undefined2 *)(unaff_x20 + 7) = 0x500;
      lVar2 = *(long *)(local_80 + 0x18);
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ad4c0);
        (*pcVar7)();
      }
      uVar4 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)(local_80 + 0x10) < lVar2 + 1) || ((uVar4 & 1) == 0)) {
        FUN_1008ae344();
      }
      FUN_1008ae518(local_80 + 0x10,local_80 + 0x28,param_1);
      (*pcVar7)();
      *unaff_x20 = local_80;
      uVar5 = 3;
    }
    else {
      if (local_47 != 4) {
        if (local_48 == '\0') {
          local_78 = local_78 | (byte)local_68;
          bStack_77 = bStack_77 | (byte)((ulong)local_68 >> 8);
          bStack_76 = bStack_76 | (byte)((ulong)local_68 >> 0x10);
          bStack_75 = bStack_75 | (byte)((ulong)local_68 >> 0x18);
          bStack_74 = bStack_74 | (byte)((ulong)local_68 >> 0x20);
          bStack_73 = bStack_73 | (byte)((ulong)local_68 >> 0x28);
          bStack_72 = bStack_72 | (byte)((ulong)local_68 >> 0x30);
          bStack_71 = bStack_71 | (byte)((ulong)local_68 >> 0x38);
          bStack_70 = bStack_70 | (byte)uStack_60;
          bStack_6f = bStack_6f | (byte)((ulong)uStack_60 >> 8);
          bStack_6e = bStack_6e | (byte)((ulong)uStack_60 >> 0x10);
          bStack_6d = bStack_6d | (byte)((ulong)uStack_60 >> 0x18);
          bStack_6c = bStack_6c | (byte)((ulong)uStack_60 >> 0x20);
          bStack_6b = bStack_6b | (byte)((ulong)uStack_60 >> 0x28);
          bStack_6a = bStack_6a | (byte)((ulong)uStack_60 >> 0x30);
          bStack_69 = bStack_69 | (byte)((ulong)uStack_60 >> 0x38);
          auVar8[1] = bStack_77;
          auVar8[0] = local_78;
          auVar8[2] = bStack_76;
          auVar8[3] = bStack_75;
          auVar8[4] = bStack_74;
          auVar8[5] = bStack_73;
          auVar8[6] = bStack_72;
          auVar8[7] = bStack_71;
          auVar8[8] = bStack_70;
          auVar8[9] = bStack_6f;
          auVar8[10] = bStack_6e;
          auVar8[0xb] = bStack_6d;
          auVar8[0xc] = bStack_6c;
          auVar8[0xd] = bStack_6b;
          auVar8[0xe] = bStack_6a;
          auVar8[0xf] = bStack_69;
          auVar1[1] = bStack_77;
          auVar1[0] = local_78;
          auVar1[2] = bStack_76;
          auVar1[3] = bStack_75;
          auVar1[4] = bStack_74;
          auVar1[5] = bStack_73;
          auVar1[6] = bStack_72;
          auVar1[7] = bStack_71;
          auVar1[8] = bStack_70;
          auVar1[9] = bStack_6f;
          auVar1[10] = bStack_6e;
          auVar1[0xb] = bStack_6d;
          auVar1[0xc] = bStack_6c;
          auVar1[0xd] = bStack_6b;
          auVar1[0xe] = bStack_6a;
          auVar1[0xf] = bStack_69;
          auVar8 = NEON_ext(auVar8,auVar1,8,1);
          if ((CONCAT17(bStack_71 | auVar8[7],
                        CONCAT16(bStack_72 | auVar8[6],
                                 CONCAT15(bStack_73 | auVar8[5],
                                          CONCAT14(bStack_74 | auVar8[4],
                                                   CONCAT13(bStack_75 | auVar8[3],
                                                            CONCAT12(bStack_76 | auVar8[2],
                                                                     CONCAT11(bStack_77 | auVar8[1],
                                                                              local_78 | auVar8[0]))
                                                           ))))) == 0 && local_80 == 0) &&
              (local_58 == 0 && lStack_50 == 0)) {
            return 1;
          }
        }
        SVar9.bridgeObject = (void *)0x2;
        SVar9.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar9,(StaticString)0xd000000000000037,
                   0x8000000100db43d0,0xdb4370);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ad510);
        (*pcVar7)();
      }
      pcVar7 = *(code **)(lVar6 + 8);
      (*pcVar7)();
      *unaff_x20 = 1;
      unaff_x20[2] = 0;
      unaff_x20[1] = 0;
      unaff_x20[4] = 0;
      unaff_x20[3] = 0;
      unaff_x20[6] = 0;
      unaff_x20[5] = 0;
      *(undefined2 *)(unaff_x20 + 7) = 0x500;
      lVar2 = *(long *)(local_80 + 0x18);
      if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1008ad4c4);
        (*pcVar7)();
      }
      uVar4 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((*(long *)(local_80 + 0x10) < lVar2 + 1) || ((uVar4 & 1) == 0)) {
        FUN_1008ae344();
      }
      FUN_1008ae518(local_80 + 0x10,local_80 + 0x28,param_1);
      (*pcVar7)();
      *unaff_x20 = local_80;
      uVar5 = 4;
    }
    *(undefined1 *)((long)unaff_x20 + 0x39) = uVar5;
    uVar3 = 2;
  }
  return uVar3;
}



/* Address: 0x1008ad510 | FUN_1008ad510 */

void FUN_1008ad510(undefined8 *param_1,ulong *param_2,ulong param_3,ulong param_4,long param_5)

{
  Substring SVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  char cVar5;
  char *pcVar6;
  void *pvVar7;
  code *pcVar8;
  long lVar9;
  ulong **ppuVar10;
  undefined *puVar11;
  ulong *puVar12;
  ulong *unaff_x20;
  undefined8 uVar13;
  ulong *puVar14;
  ulong uVar15;
  long lVar16;
  String SVar17;
  ulong *local_170;
  undefined8 uStack_168;
  long local_158;
  undefined8 local_150;
  undefined8 local_148 [2];
  ulong *local_138;
  ulong uStack_130;
  undefined4 local_128;
  undefined2 uStack_124;
  undefined1 uStack_122;
  undefined1 uStack_121;
  undefined *puStack_120;
  undefined8 local_118;
  undefined1 local_ff;
  undefined1 local_f7;
  ulong *local_f0 [2];
  undefined8 local_e0;
  String local_d8;
  undefined1 uStack_c8;
  undefined7 uStack_c7;
  undefined1 uStack_c0;
  undefined7 uStack_bf;
  char local_b8;
  ulong *local_b0;
  byte bStack_a8;
  byte bStack_a7;
  byte bStack_a6;
  byte bStack_a5;
  byte bStack_a4;
  byte bStack_a3;
  byte bStack_a2;
  byte bStack_a1;
  byte bStack_a0;
  byte bStack_9f;
  byte bStack_9e;
  byte bStack_9d;
  byte bStack_9c;
  byte bStack_9b;
  byte bStack_9a;
  byte bStack_99;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 uStack_80;
  undefined7 uStack_7f;
  char local_78;
  byte local_77;
  
  uVar13 = *(undefined8 *)(param_5 + 0x10);
  lVar9 = 0;
  FUN_1008ac87c(0,uVar13);
  lVar16 = *(long *)(lVar9 + -8);
  ppuVar10 = &local_b0;
  (**(code **)(lVar16 + 0x10))();
  if (local_77 < 2) {
    if (local_77 != 1) {
LAB_1008adc28:
      SVar17.bridgeObject = (void *)0x2;
      SVar17.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar17,(StaticString)0xd000000000000037,
                 0x8000000100db4390,0xdb4370);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1008adc60);
      (*pcVar8)();
    }
    if (param_4 >> 0x38 == 0) {
      uVar15 = param_2[4];
      _swift_retain(param_2);
      _swift_bridgeObjectRetain(param_3);
      local_128 = (undefined4)param_4;
      if (uVar15 != 1) {
        _swift_bridgeObjectRelease();
        FUN_1006883ac();
        puVar14 = (ulong *)*local_b0;
        puVar11 = &DAT_100fe9100;
        local_f0[0] = puVar14;
        FUN_1000f7830(&DAT_100fe9100,&DAT_100c803a0);
        uStack_122 = (undefined1)(param_4 >> 0x30);
        uStack_124 = (undefined2)(param_4 >> 0x20);
        uStack_121 = 0;
        local_f7 = 2;
        uVar15 = puVar14[3];
        local_138 = param_2;
        uStack_130 = param_3;
        puStack_120 = puVar11;
        if (!SCARRY8(uVar15,1)) {
          FUN_100878fa0(param_2,param_3,param_4,0);
          puVar12 = puVar14;
          _swift_retain();
          _swift_isUniquelyReferenced_nonNull_native();
          if (((long)puVar14[2] < (long)(uVar15 + 1)) || (((ulong)puVar12 & 1) == 0)) {
            FUN_1008ae344();
            puVar14 = local_f0[0];
          }
          FUN_1008ae518(puVar14 + 2,puVar14 + 5,&local_138);
          _swift_bridgeObjectRelease(param_3);
          _swift_release(param_2);
          FUN_1005e70f4(&local_138);
          (**(code **)(lVar16 + 8))();
          *unaff_x20 = (ulong)puVar14;
          *(undefined1 *)((long)unaff_x20 + 0x39) = 3;
          param_1[1] = 0;
          *param_1 = 0;
          param_1[3] = 0;
          param_1[2] = 0;
          param_1[5] = 0;
          param_1[4] = 0;
          *(undefined8 *)((long)param_1 + 0x31) = 0;
          *(undefined8 *)((long)param_1 + 0x29) = 0;
          *(undefined1 *)((long)param_1 + 0x39) = 2;
          return;
        }
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x1008adb90);
        (*pcVar8)();
      }
      lVar9 = 0x65646172677075;
      FUN_10089dad4(0x65646172677075,&DAT_e700000000000000,param_3,param_4);
      if (*(long *)(lVar9 + 0x10) == 0) {
        _swift_bridgeObjectRelease(local_b0);
        _swift_bridgeObjectRelease(lVar9);
        puVar14 = unaff_x20;
        (**(code **)(lVar16 + 8))();
        *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
        *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        unaff_x20[5] = 0;
        unaff_x20[4] = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
        FUN_1008a869c();
        puVar11 = &DAT_100f0b258;
        _swift_allocError(&DAT_100f0b258,puVar14,0,0);
        *(undefined1 *)puVar14 = 0;
        _swift_bridgeObjectRelease(param_3);
        _swift_release(param_2);
      }
      else {
        SVar1.unknown = *(undefined **)(lVar9 + 0x20);
        uVar2 = *(undefined8 *)(lVar9 + 0x38);
        _swift_bridgeObjectRetain(uVar2);
        _swift_bridgeObjectRelease(lVar9);
        SVar17 = Swift::Substring::lowercased(SVar1);
        _swift_bridgeObjectRelease(uVar2);
        local_170 = local_b0;
        local_148[0] = uVar13;
        local_e0 = uVar13;
        local_d8 = SVar17;
        _swift_getExtendedExistentialTypeMetadata(&DAT_100c81f58,local_148);
        uVar13 = 0;
        Swift::Array<undefined>::typeMetadataAccessor();
        _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,uVar13)
        ;
        (extension_Swift)::Swift::Sequence::_first();
        _swift_bridgeObjectRelease(local_b0);
        _swift_bridgeObjectRelease(SVar17.bridgeObject);
        if (puStack_120 == (undefined *)0x0) {
          uStack_168 = uStack_130;
          local_170 = local_138;
          local_158 = (long)puStack_120;
          local_150 = local_118;
        }
        else {
          FUN_100076688(&local_138,&local_170);
        }
        if (local_158 != 0) {
          FUN_100076508(&local_170,local_f0);
          pcVar6 = local_d8.str;
          pvVar7 = local_d8.bridgeObject;
          FUN_100004640(local_f0,local_d8.str);
          puVar14 = param_2;
          (**(code **)((long)pvVar7 + 0x28))(param_2,param_3,param_4,pcVar6,pvVar7);
          if (((ulong)puVar14 & 1) == 0) {
            puVar14 = unaff_x20;
            (**(code **)(lVar16 + 8))();
            *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
            *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
            unaff_x20[3] = 0;
            unaff_x20[2] = 0;
            unaff_x20[5] = 0;
            unaff_x20[4] = 0;
            unaff_x20[1] = 0;
            *unaff_x20 = 0;
            *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
            FUN_1008a869c();
            puVar11 = &DAT_100f0b258;
            _swift_allocError(&DAT_100f0b258,puVar14,0,0);
            *(undefined1 *)puVar14 = 2;
            _swift_bridgeObjectRelease(param_3);
            _swift_release(param_2);
            if (puStack_120 != (undefined *)0x0) {
              FUN_100004594(&local_138);
            }
            *param_1 = puVar11;
            *(undefined1 *)((long)param_1 + 0x39) = 0;
          }
          else {
            if (puStack_120 != (undefined *)0x0) {
              FUN_100004594(&local_138);
            }
            (**(code **)(lVar16 + 8))();
            FUN_100076688(local_f0,&local_170);
            FUN_100076508(&local_170);
            unaff_x20[5] = (ulong)param_2;
            unaff_x20[6] = param_3;
            *(char *)(unaff_x20 + 7) = (char)param_4;
            *(undefined1 *)((long)unaff_x20 + 0x39) = 2;
            param_1[1] = 0;
            *param_1 = 0;
            param_1[3] = 0;
            param_1[2] = 0;
            param_1[5] = 0;
            param_1[4] = 0;
            param_1[6] = 0;
            *(undefined2 *)(param_1 + 7) = 0xff00;
          }
          FUN_100004594(local_f0);
          return;
        }
        puVar14 = unaff_x20;
        (**(code **)(lVar16 + 8))();
        *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
        *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
        unaff_x20[3] = 0;
        unaff_x20[2] = 0;
        unaff_x20[5] = 0;
        unaff_x20[4] = 0;
        unaff_x20[1] = 0;
        *unaff_x20 = 0;
        *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
        FUN_1008a869c();
        puVar11 = &DAT_100f0b258;
        _swift_allocError(&DAT_100f0b258,puVar14,0,0);
        *(undefined1 *)puVar14 = 0;
        _swift_bridgeObjectRelease(param_3);
        _swift_release(param_2);
        if (puStack_120 != (undefined *)0x0) {
          FUN_100004594(&local_138);
        }
      }
      *param_1 = puVar11;
    }
    else {
      _swift_bridgeObjectRelease(local_b0);
      puVar14 = unaff_x20;
      (**(code **)(lVar16 + 8))();
      *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
      *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      unaff_x20[5] = 0;
      unaff_x20[4] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
      FUN_1008a869c();
      puVar11 = &DAT_100f0b258;
      _swift_allocError(&DAT_100f0b258,puVar14,0,0);
      *(undefined1 *)puVar14 = 1;
      *param_1 = puVar11;
    }
  }
  else {
    if (local_77 != 2) {
      if (local_77 - 3 < 2) {
        (**(code **)(lVar16 + 8))(&local_b0,lVar9);
      }
      else if (local_78 == '\0') {
        bStack_a8 = bStack_a8 | (byte)uStack_98;
        bStack_a7 = bStack_a7 | (byte)((ulong)uStack_98 >> 8);
        bStack_a6 = bStack_a6 | (byte)((ulong)uStack_98 >> 0x10);
        bStack_a5 = bStack_a5 | (byte)((ulong)uStack_98 >> 0x18);
        bStack_a4 = bStack_a4 | (byte)((ulong)uStack_98 >> 0x20);
        bStack_a3 = bStack_a3 | (byte)((ulong)uStack_98 >> 0x28);
        bStack_a2 = bStack_a2 | (byte)((ulong)uStack_98 >> 0x30);
        bStack_a1 = bStack_a1 | (byte)((ulong)uStack_98 >> 0x38);
        bStack_a0 = bStack_a0 | (byte)local_90;
        bStack_9f = bStack_9f | (byte)((ulong)local_90 >> 8);
        bStack_9e = bStack_9e | (byte)((ulong)local_90 >> 0x10);
        bStack_9d = bStack_9d | (byte)((ulong)local_90 >> 0x18);
        bStack_9c = bStack_9c | (byte)((ulong)local_90 >> 0x20);
        bStack_9b = bStack_9b | (byte)((ulong)local_90 >> 0x28);
        bStack_9a = bStack_9a | (byte)((ulong)local_90 >> 0x30);
        bStack_99 = bStack_99 | (byte)((ulong)local_90 >> 0x38);
        auVar3[1] = bStack_a7;
        auVar3[0] = bStack_a8;
        auVar3[2] = bStack_a6;
        auVar3[3] = bStack_a5;
        auVar3[4] = bStack_a4;
        auVar3[5] = bStack_a3;
        auVar3[6] = bStack_a2;
        auVar3[7] = bStack_a1;
        auVar3[8] = bStack_a0;
        auVar3[9] = bStack_9f;
        auVar3[10] = bStack_9e;
        auVar3[0xb] = bStack_9d;
        auVar3[0xc] = bStack_9c;
        auVar3[0xd] = bStack_9b;
        auVar3[0xe] = bStack_9a;
        auVar3[0xf] = bStack_99;
        auVar4[1] = bStack_a7;
        auVar4[0] = bStack_a8;
        auVar4[2] = bStack_a6;
        auVar4[3] = bStack_a5;
        auVar4[4] = bStack_a4;
        auVar4[5] = bStack_a3;
        auVar4[6] = bStack_a2;
        auVar4[7] = bStack_a1;
        auVar4[8] = bStack_a0;
        auVar4[9] = bStack_9f;
        auVar4[10] = bStack_9e;
        auVar4[0xb] = bStack_9d;
        auVar4[0xc] = bStack_9c;
        auVar4[0xd] = bStack_9b;
        auVar4[0xe] = bStack_9a;
        auVar4[0xf] = bStack_99;
        NEON_ext(auVar3,auVar4,8,1);
      }
      goto LAB_1008adc28;
    }
    local_f0[0] = local_b0;
    uStack_c8 = uStack_88;
    uStack_bf = uStack_7f;
    local_b8 = local_78;
    uStack_c7 = uStack_87;
    uStack_c0 = uStack_80;
    cVar5 = (char)(param_4 >> 0x38);
    if (cVar5 != '\0') {
      if (cVar5 == '\x01') {
        lVar9 = 0;
        FUN_1008ae92c(0,uVar13);
        (**(code **)(*(long *)(lVar9 + -8) + 8))(local_f0,lVar9);
        param_1[6] = 0;
        param_1[3] = 0;
        param_1[2] = 0;
        param_1[5] = 0;
        param_1[4] = 0;
        param_1[1] = 0;
        *param_1 = 0;
        *(undefined2 *)(param_1 + 7) = 0xff00;
        return;
      }
      FUN_1006883ac();
      local_138 = *ppuVar10;
      local_ff = 3;
      pcVar8 = *(code **)(lVar16 + 0x28);
      _swift_retain();
      (*pcVar8)();
      FUN_100076508(local_f0,param_1);
      param_1[6] = CONCAT71(uStack_bf,uStack_c0);
      param_1[5] = CONCAT71(uStack_c7,uStack_c8);
      *(char *)(param_1 + 7) = local_b8;
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
    puVar14 = unaff_x20;
    (**(code **)(lVar16 + 8))();
    *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
    *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
    unaff_x20[3] = 0;
    unaff_x20[2] = 0;
    unaff_x20[5] = 0;
    unaff_x20[4] = 0;
    unaff_x20[1] = 0;
    *unaff_x20 = 0;
    *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
    FUN_1008a869c();
    puVar11 = &DAT_100f0b258;
    _swift_allocError(&DAT_100f0b258,puVar14,0,0);
    *(undefined1 *)puVar14 = 1;
    lVar9 = 0;
    FUN_1008ae92c(0,uVar13);
    (**(code **)(*(long *)(lVar9 + -8) + 8))(local_f0,lVar9);
    *param_1 = puVar11;
  }
  *(undefined1 *)((long)param_1 + 0x39) = 0;
  return;
}



/* Address: 0x1008adc60 | FUN_1008adc60 */

void FUN_1008adc60(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined1 auVar1 [16];
  Result RVar2;
  undefined7 extraout_var;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  code *pcVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined1 auVar14 [16];
  String SVar15;
  undefined8 auStack_c0 [2];
  undefined8 *local_b0 [2];
  long local_a0;
  byte local_98;
  byte bStack_97;
  byte bStack_96;
  byte bStack_95;
  byte bStack_94;
  byte bStack_93;
  byte bStack_92;
  byte bStack_91;
  byte bStack_90;
  byte bStack_8f;
  byte bStack_8e;
  byte bStack_8d;
  byte bStack_8c;
  byte bStack_8b;
  byte bStack_8a;
  byte bStack_89;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  char local_68;
  byte local_67;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar8 + -8);
  lVar9 = (long)local_b0 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_b0[0] = param_2;
  local_b0[1] = param_1;
  FUN_1000f8b08(&DAT_100fe9a00,&DAT_100c809b0);
  RVar2 = Swift::Result::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,RVar2.value);
  lVar11 = *(long *)(lVar5 + -8);
  puVar12 = (undefined8 *)(lVar9 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  FUN_1008ac87c(0,lVar8);
  lVar7 = *(long *)(lVar3 + -8);
  (**(code **)(lVar7 + 0x10))(&local_a0);
  if (local_67 < 5) {
    if (local_67 == 3) {
      (**(code **)(lVar11 + 0x10))(puVar12,local_b0[0],lVar5);
      puVar4 = puVar12;
      _swift_getEnumCaseMultiPayload(puVar12,lVar5);
      if ((int)puVar4 == 1) {
        uVar10 = *puVar12;
        if (*(long *)(local_a0 + 0x18) == 0) {
          _swift_release(local_a0);
          (**(code **)(lVar7 + 8))();
          puVar12 = local_b0[1];
          *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
          *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
          unaff_x20[3] = 0;
          unaff_x20[2] = 0;
          unaff_x20[5] = 0;
          unaff_x20[4] = 0;
          unaff_x20[1] = 0;
          *unaff_x20 = 0;
          *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
          *local_b0[1] = uVar10;
          lVar5 = 0;
          FUN_1008ae920(0,lVar8);
          uVar10 = 2;
        }
        else {
          (**(code **)(lVar7 + 8))();
          puVar12 = local_b0[1];
          *unaff_x20 = local_a0;
          *(undefined1 *)((long)unaff_x20 + 0x39) = 4;
          *local_b0[1] = uVar10;
          lVar5 = 0;
          FUN_1008ae920(0,lVar8);
          uVar10 = 0;
        }
      }
      else {
        pcVar6 = *(code **)(lVar13 + 0x20);
        (*pcVar6)(lVar9,puVar12,lVar8);
        if (*(long *)(local_a0 + 0x18) == 0) {
          _swift_release(local_a0);
          (**(code **)(lVar7 + 8))();
          puVar12 = local_b0[1];
          *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
          *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
          unaff_x20[3] = 0;
          unaff_x20[2] = 0;
          unaff_x20[5] = 0;
          unaff_x20[4] = 0;
          unaff_x20[1] = 0;
          *unaff_x20 = 0;
          *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
          (*pcVar6)(local_b0[1],lVar9,lVar8);
          lVar5 = 0;
          FUN_1008ae920(0,lVar8);
          uVar10 = 1;
        }
        else {
          (**(code **)(lVar7 + 8))();
          puVar12 = local_b0[1];
          *unaff_x20 = local_a0;
          *(undefined1 *)((long)unaff_x20 + 0x39) = 4;
          (*pcVar6)(local_b0[1],lVar9,lVar8);
          lVar5 = 0;
          FUN_1008ae920(0,lVar8);
          uVar10 = 3;
        }
      }
      _swift_storeEnumTagMultiPayload(puVar12,lVar5,uVar10);
      pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
      uVar10 = 0;
LAB_1008adf48:
      (*pcVar6)(puVar12,uVar10,1,lVar5);
      return;
    }
    (**(code **)(lVar7 + 8))(&local_a0,lVar3);
    *(undefined4 *)(puVar12 + -1) = 0;
    uVar10 = 0x111;
  }
  else {
    if (local_68 == '\0') {
      local_98 = local_98 | (byte)local_88;
      bStack_97 = bStack_97 | (byte)((ulong)local_88 >> 8);
      bStack_96 = bStack_96 | (byte)((ulong)local_88 >> 0x10);
      bStack_95 = bStack_95 | (byte)((ulong)local_88 >> 0x18);
      bStack_94 = bStack_94 | (byte)((ulong)local_88 >> 0x20);
      bStack_93 = bStack_93 | (byte)((ulong)local_88 >> 0x28);
      bStack_92 = bStack_92 | (byte)((ulong)local_88 >> 0x30);
      bStack_91 = bStack_91 | (byte)((ulong)local_88 >> 0x38);
      bStack_90 = bStack_90 | (byte)uStack_80;
      bStack_8f = bStack_8f | (byte)((ulong)uStack_80 >> 8);
      bStack_8e = bStack_8e | (byte)((ulong)uStack_80 >> 0x10);
      bStack_8d = bStack_8d | (byte)((ulong)uStack_80 >> 0x18);
      bStack_8c = bStack_8c | (byte)((ulong)uStack_80 >> 0x20);
      bStack_8b = bStack_8b | (byte)((ulong)uStack_80 >> 0x28);
      bStack_8a = bStack_8a | (byte)((ulong)uStack_80 >> 0x30);
      bStack_89 = bStack_89 | (byte)((ulong)uStack_80 >> 0x38);
      auVar14[1] = bStack_97;
      auVar14[0] = local_98;
      auVar14[2] = bStack_96;
      auVar14[3] = bStack_95;
      auVar14[4] = bStack_94;
      auVar14[5] = bStack_93;
      auVar14[6] = bStack_92;
      auVar14[7] = bStack_91;
      auVar14[8] = bStack_90;
      auVar14[9] = bStack_8f;
      auVar14[10] = bStack_8e;
      auVar14[0xb] = bStack_8d;
      auVar14[0xc] = bStack_8c;
      auVar14[0xd] = bStack_8b;
      auVar14[0xe] = bStack_8a;
      auVar14[0xf] = bStack_89;
      auVar1[1] = bStack_97;
      auVar1[0] = local_98;
      auVar1[2] = bStack_96;
      auVar1[3] = bStack_95;
      auVar1[4] = bStack_94;
      auVar1[5] = bStack_93;
      auVar1[6] = bStack_92;
      auVar1[7] = bStack_91;
      auVar1[8] = bStack_90;
      auVar1[9] = bStack_8f;
      auVar1[10] = bStack_8e;
      auVar1[0xb] = bStack_8d;
      auVar1[0xc] = bStack_8c;
      auVar1[0xd] = bStack_8b;
      auVar1[0xe] = bStack_8a;
      auVar1[0xf] = bStack_89;
      auVar14 = NEON_ext(auVar14,auVar1,8,1);
      if ((CONCAT17(bStack_91 | auVar14[7],
                    CONCAT16(bStack_92 | auVar14[6],
                             CONCAT15(bStack_93 | auVar14[5],
                                      CONCAT14(bStack_94 | auVar14[4],
                                               CONCAT13(bStack_95 | auVar14[3],
                                                        CONCAT12(bStack_96 | auVar14[2],
                                                                 CONCAT11(bStack_97 | auVar14[1],
                                                                          local_98 | auVar14[0])))))
                            )) == 0 && local_a0 == 0) && (local_78 == 0 && lStack_70 == 0)) {
        lVar5 = 0;
        FUN_1008ae920(0,lVar8);
        pcVar6 = *(code **)(*(long *)(lVar5 + -8) + 0x38);
        uVar10 = 1;
        puVar12 = local_b0[1];
        goto LAB_1008adf48;
      }
    }
    *(undefined4 *)(puVar12 + -1) = 0;
    uVar10 = 0x130;
  }
  puVar12[-2] = uVar10;
  SVar15.bridgeObject = (void *)0x2;
  SVar15.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar15,(StaticString)0xd000000000000037,0x8000000100db4390,
             0xdb4370);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008adfec);
  (*pcVar6)();
}



/* Address: 0x1008adfec | FUN_1008adfec */

void FUN_1008adfec(undefined8 *param_1,long param_2)

{
  undefined1 auVar1 [16];
  long lVar2;
  ulong uVar3;
  ulong *unaff_x20;
  ulong uVar4;
  long lVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  String SVar8;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined2 local_f0;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined2 local_a0;
  ulong local_98;
  ulong local_90;
  byte local_88;
  byte bStack_87;
  byte bStack_86;
  byte bStack_85;
  byte bStack_84;
  byte bStack_83;
  byte bStack_82;
  byte bStack_81;
  byte bStack_80;
  byte bStack_7f;
  byte bStack_7e;
  byte bStack_7d;
  byte bStack_7c;
  byte bStack_7b;
  byte bStack_7a;
  byte bStack_79;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  long lStack_60;
  char local_58;
  byte local_57;
  
  lVar2 = 0;
  FUN_1008ac87c(0,*(undefined8 *)(param_2 + 0x10));
  lVar5 = *(long *)(lVar2 + -8);
  (**(code **)(lVar5 + 0x10))(&local_90);
  if (local_57 == 4) {
    local_98 = local_90;
    pcVar6 = *(code **)(lVar5 + 8);
    (*pcVar6)();
    *unaff_x20 = 1;
    unaff_x20[2] = 0;
    unaff_x20[1] = 0;
    unaff_x20[4] = 0;
    unaff_x20[3] = 0;
    unaff_x20[6] = 0;
    unaff_x20[5] = 0;
    *(undefined2 *)(unaff_x20 + 7) = 0x500;
    if (*(long *)(local_90 + 0x18) < 1) {
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_128 = 0;
      local_130 = 0;
      uStack_118 = 0;
      local_120 = 0;
      local_f0 = 0xff00;
      _swift_release(local_90);
      FUN_1008ae2fc(&local_130);
      (*pcVar6)();
      *(undefined8 *)((long)unaff_x20 + 0x31) = 0;
      *(undefined8 *)((long)unaff_x20 + 0x29) = 0;
      unaff_x20[3] = 0;
      unaff_x20[2] = 0;
      unaff_x20[5] = 0;
      unaff_x20[4] = 0;
      unaff_x20[1] = 0;
      *unaff_x20 = 0;
      *(undefined1 *)((long)unaff_x20 + 0x39) = 5;
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
      uVar3 = local_90;
      _swift_isUniquelyReferenced_nonNull_native();
      uVar4 = local_90;
      if ((uVar3 & 1) == 0) {
        FUN_1008ae880();
        uVar4 = local_98;
      }
      lVar5 = *(long *)(uVar4 + 0x20);
      lVar2 = uVar4 + lVar5 * 0x48;
      uStack_128 = *(undefined8 *)(lVar2 + 0x30);
      local_130 = *(undefined8 *)(lVar2 + 0x28);
      uStack_108 = *(undefined8 *)(lVar2 + 0x50);
      local_110 = *(undefined8 *)(lVar2 + 0x48);
      uStack_100 = *(undefined8 *)(lVar2 + 0x58);
      uStack_f8 = *(undefined8 *)(lVar2 + 0x60);
      local_f0 = *(undefined2 *)(lVar2 + 0x68);
      uStack_118 = *(undefined8 *)(lVar2 + 0x40);
      local_120 = *(undefined8 *)(lVar2 + 0x38);
      lVar2 = lVar5 + 1;
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008ae1b0);
        (*pcVar6)();
      }
      if (*(long *)(uVar4 + 0x10) <= lVar2) {
        lVar2 = 0;
      }
      *(long *)(uVar4 + 0x20) = lVar2;
      if (SBORROW8(*(long *)(uVar4 + 0x18),1)) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1008ae1b4);
        (*pcVar6)();
      }
      *(long *)(uVar4 + 0x18) = *(long *)(uVar4 + 0x18) + -1;
      local_e0 = local_130;
      uStack_d8 = uStack_128;
      uStack_d0 = local_120;
      uStack_c8 = uStack_118;
      local_c0 = local_110;
      uStack_b8 = uStack_108;
      uStack_b0 = uStack_100;
      uStack_a8 = uStack_f8;
      local_a0 = local_f0;
      (*pcVar6)();
      *unaff_x20 = uVar4;
      *(undefined1 *)((long)unaff_x20 + 0x39) = 4;
      param_1[5] = uStack_b8;
      param_1[4] = local_c0;
      param_1[7] = uStack_a8;
      param_1[6] = uStack_b0;
      *(undefined2 *)(param_1 + 8) = local_a0;
      param_1[1] = uStack_d8;
      *param_1 = local_e0;
      param_1[3] = uStack_c8;
      param_1[2] = uStack_d0;
    }
    return;
  }
  if (local_57 < 4) {
    (**(code **)(lVar5 + 8))(&local_90,lVar2);
LAB_1008ae1c8:
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x1008ae1cc);
    (*pcVar6)();
  }
  if (local_58 == '\0') {
    local_88 = local_88 | (byte)local_78;
    bStack_87 = bStack_87 | (byte)((ulong)local_78 >> 8);
    bStack_86 = bStack_86 | (byte)((ulong)local_78 >> 0x10);
    bStack_85 = bStack_85 | (byte)((ulong)local_78 >> 0x18);
    bStack_84 = bStack_84 | (byte)((ulong)local_78 >> 0x20);
    bStack_83 = bStack_83 | (byte)((ulong)local_78 >> 0x28);
    bStack_82 = bStack_82 | (byte)((ulong)local_78 >> 0x30);
    bStack_81 = bStack_81 | (byte)((ulong)local_78 >> 0x38);
    bStack_80 = bStack_80 | (byte)uStack_70;
    bStack_7f = bStack_7f | (byte)((ulong)uStack_70 >> 8);
    bStack_7e = bStack_7e | (byte)((ulong)uStack_70 >> 0x10);
    bStack_7d = bStack_7d | (byte)((ulong)uStack_70 >> 0x18);
    bStack_7c = bStack_7c | (byte)((ulong)uStack_70 >> 0x20);
    bStack_7b = bStack_7b | (byte)((ulong)uStack_70 >> 0x28);
    bStack_7a = bStack_7a | (byte)((ulong)uStack_70 >> 0x30);
    bStack_79 = bStack_79 | (byte)((ulong)uStack_70 >> 0x38);
    auVar7[1] = bStack_87;
    auVar7[0] = local_88;
    auVar7[2] = bStack_86;
    auVar7[3] = bStack_85;
    auVar7[4] = bStack_84;
    auVar7[5] = bStack_83;
    auVar7[6] = bStack_82;
    auVar7[7] = bStack_81;
    auVar7[8] = bStack_80;
    auVar7[9] = bStack_7f;
    auVar7[10] = bStack_7e;
    auVar7[0xb] = bStack_7d;
    auVar7[0xc] = bStack_7c;
    auVar7[0xd] = bStack_7b;
    auVar7[0xe] = bStack_7a;
    auVar7[0xf] = bStack_79;
    auVar1[1] = bStack_87;
    auVar1[0] = local_88;
    auVar1[2] = bStack_86;
    auVar1[3] = bStack_85;
    auVar1[4] = bStack_84;
    auVar1[5] = bStack_83;
    auVar1[6] = bStack_82;
    auVar1[7] = bStack_81;
    auVar1[8] = bStack_80;
    auVar1[9] = bStack_7f;
    auVar1[10] = bStack_7e;
    auVar1[0xb] = bStack_7d;
    auVar1[0xc] = bStack_7c;
    auVar1[0xd] = bStack_7b;
    auVar1[0xe] = bStack_7a;
    auVar1[0xf] = bStack_79;
    auVar7 = NEON_ext(auVar7,auVar1,8,1);
    if ((CONCAT17(bStack_81 | auVar7[7],
                  CONCAT16(bStack_82 | auVar7[6],
                           CONCAT15(bStack_83 | auVar7[5],
                                    CONCAT14(bStack_84 | auVar7[4],
                                             CONCAT13(bStack_85 | auVar7[3],
                                                      CONCAT12(bStack_86 | auVar7[2],
                                                               CONCAT11(bStack_87 | auVar7[1],
                                                                        local_88 | auVar7[0])))))))
         == 0 && local_90 == 0) && (local_68 == 0 && lStack_60 == 0)) goto LAB_1008ae1c8;
  }
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000037,0x8000000100db4390,
             0xdb4370);
                    /* WARNING: Does not return */
  pcVar6 = (code *)SoftwareBreakpoint(1,0x1008ae250);
  (*pcVar6)();
}



/* Address: 0x1008ae250 | FUN_1008ae250 */

bool FUN_1008ae250(long param_1,char *param_2,void *param_3)

{
  String SVar1;
  bool bVar2;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  
  SVar1.bridgeObject = param_3;
  SVar1.str = param_2;
  pcVar3 = *(char **)(param_1 + 0x18);
  pvVar4 = *(void **)(param_1 + 0x20);
  FUN_100004640(param_1,pcVar3);
  (**(code **)((long)pvVar4 + 0x10))();
  SVar5.bridgeObject = pvVar4;
  SVar5.str = pcVar3;
  SVar5 = Swift::String::lowercased(SVar5);
  _swift_bridgeObjectRelease(pvVar4);
  if (SVar5 == SVar1) {
    bVar2 = true;
  }
  else {
    bVar2 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)SVar5.str,(_StringGuts)SVar5.bridgeObject,
                       (_StringComparisonResult)(__int8)param_2);
  }
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  return bVar2;
}


