/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008fe84c | FUN_1008fe84c */

void FUN_1008fe84c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_100642528(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  _swift_retain();
  return;
}



/* Address: 0x1008fe864 | FUN_1008fe864 */

void FUN_1008fe864(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *param_2;
  (**(code **)(unaff_x20 + 0x10))(uVar1,param_2[1]);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008fe894 | FUN_1008fe894 */

void FUN_1008fe894(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  if (*(long *)(unaff_x20 + 0x20) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x70));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fe8e8 | FUN_1008fe8e8 */

void FUN_1008fe8e8(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e3dec(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined8 *)(unaff_x20 + 0x40),
                *(undefined1 *)(unaff_x20 + 0x48),*(undefined8 *)(unaff_x20 + 0x50),
                *(undefined8 *)(unaff_x20 + 0x58),*(undefined8 *)(unaff_x20 + 0x60),
                *(undefined8 *)(unaff_x20 + 0x68),*(undefined8 *)(unaff_x20 + 0x70),
                *(undefined8 *)(unaff_x20 + 0x78),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fe92c | FUN_1008fe92c */

void FUN_1008fe92c(void)

{
  FUN_1008fed60(PTR__swift_unknownObjectRelease_100eae458,0x30);
  return;
}



/* Address: 0x1008fe93c | FUN_1008fe93c */

void FUN_1008fe93c(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e4218(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fe948 | FUN_1008fe948 */

void FUN_1008fe948(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008e4134(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1008fe954 | FUN_1008fe954 */

void FUN_1008fe954(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  AsyncThrowingStream AVar5;
  undefined *puVar6;
  long unaff_x20;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  
  uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
  lVar2 = 0;
  FUN_1005e3ae8(0,uVar7,PTR___type_metadata_for_Swift_Never_100eadc38);
  uVar8 = (ulong)*(byte *)(*(long *)(lVar2 + -8) + 0x50);
  puVar1 = (undefined8 *)(unaff_x20 + (uVar8 + 0x18 & (uVar8 ^ 0xffffffffffffffff)));
  _swift_unknownObjectRelease(*puVar1);
  lVar9 = (long)*(int *)(lVar2 + 0x24);
  uVar3 = 0;
  FUN_1005e8278(0,uVar7);
  lVar4 = (long)puVar1 + lVar9;
  _swift_getEnumCaseMultiPayload(lVar4,uVar3);
  if ((int)lVar4 == 1) {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar9));
  }
  else {
    FUN_1000f8b08(&DAT_100febaf0,&DAT_100c83800);
    AVar5 = Swift::AsyncThrowingStream::typeMetadataAccessor();
    (**(code **)(*(long *)(AVar5.unknown + -8) + 8))((long)puVar1 + lVar9,AVar5.unknown);
  }
  lVar2 = (long)*(int *)(lVar2 + 0x28);
  puVar6 = &DAT_100fec488;
  FUN_1000f7830(&DAT_100fec488,&DAT_100c83b60);
  lVar4 = (long)puVar1 + lVar2;
  _swift_getEnumCaseMultiPayload(lVar4,puVar6);
  if ((int)lVar4 == 1) {
    _swift_release(*(undefined8 *)((long)puVar1 + lVar2));
  }
  else {
    puVar6 = &DAT_100fec490;
    FUN_1000f7830(&DAT_100fec490,&DAT_100c83b68);
    (**(code **)(*(long *)(puVar6 + -8) + 8))((long)puVar1 + lVar2,puVar6);
  }
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fea9c | FUN_1008fea9c */

void FUN_1008fea9c(undefined8 param_1)

{
  long lVar1;
  ulong uVar2;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1005e3ae8(0,*(undefined8 *)(unaff_x20 + 0x10),PTR___type_metadata_for_Swift_Never_100eadc38);
  uVar2 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001008feae8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))
            (param_1,unaff_x20 + (uVar2 + 0x18 & (uVar2 ^ 0xffffffffffffffff)),lVar1);
  return;
}



/* Address: 0x1008feaec | FUN_1008feaec */

void FUN_1008feaec(void)

{
  FUN_1008feafc(PTR__swift_unknownObjectRelease_100eae458,0x38);
  return;
}



/* Address: 0x1008feafc | FUN_1008feafc */

void FUN_1008feafc(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008feb40 | FUN_1008feb40 */

void FUN_1008feb40(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x18))
            (*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30));
  return;
}



/* Address: 0x1008feb68 | FUN_1008feb68 */

void FUN_1008feb68(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008eb968(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x244,FUN_100622850);
  return;
}



/* Address: 0x1008feb8c | FUN_1008feb8c */

void FUN_1008feb8c(void)

{
  FUN_1008fecc0(PTR__swift_unknownObjectRelease_100eae458,PTR__swift_release_100eae3e8,0x30);
  return;
}



/* Address: 0x1008feba4 | FUN_1008feba4 */

void FUN_1008feba4(void)

{
  long unaff_x20;
  
  FUN_1008e08d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1008febb0 | FUN_1008febb0 */

void FUN_1008febb0(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008febf4 | FUN_1008febf4 */

void FUN_1008febf4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  if (*(long *)(unaff_x20 + 0x18) != 0) {
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  }
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fec40 | FUN_1008fec40 */

void FUN_1008fec40(void)

{
  FUN_1008fec4c(FUN_1008e168c);
  return;
}



/* Address: 0x1008fec4c | FUN_1008fec4c */

void FUN_1008fec4c(code *UNRECOVERED_JUMPTABLE)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001008fec60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)
            (*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
             *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
             *(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x38),
             *(undefined8 *)(unaff_x20 + 0x40),*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1008fec64 | FUN_1008fec64 */

void FUN_1008fec64(void)

{
  FUN_100622760(PTR__swift_unknownObjectRelease_100eae458,0x28);
  return;
}



/* Address: 0x1008fec74 | FUN_1008fec74 */

void FUN_1008fec74(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008e17d0(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1008fec80 | FUN_1008fec80 */

void FUN_1008fec80(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fecc0 | FUN_1008fecc0 */

void FUN_1008fecc0(code *param_1,code *param_2)

{
  long unaff_x20;
  
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x10));
  (*param_2)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fed08 | FUN_1008fed08 */

void FUN_1008fed08(void)

{
  long unaff_x20;
  
  _swift_release(*(ulong *)(unaff_x20 + 0x10) & 0x3fffffffffffffff);
  _swift_deallocObject();
  return;
}



/* Address: 0x1008fed3c | FUN_1008fed3c */

void FUN_1008fed3c(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008eb968(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),0x180,FUN_100622850);
  return;
}



/* Address: 0x1008fed60 | FUN_1008fed60 */

void FUN_1008fed60(code *param_1)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1008feda4 | FUN_1008feda4 */

undefined1  [16] FUN_1008feda4(undefined8 param_1,undefined8 param_2)

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
  puVar1 = &DAT_100f13ee0;
  _swift_allocObject(&DAT_100f13ee0,0x20,7);
  *(undefined8 *)(puVar1 + 0x18) = uStack_38;
  *(undefined8 *)(puVar1 + 0x10) = local_40;
  auVar2._8_8_ = puVar1;
  auVar2._0_8_ = FUN_100625b4c;
  return auVar2;
}



/* Address: 0x1008fee00 | FUN_1008fee00 */

void FUN_1008fee00(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  (**(code **)(unaff_x20 + 0x10))();
  puVar2 = &DAT_100f13eb8;
  _swift_allocObject(&DAT_100f13eb8,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar1;
  *(undefined8 *)(puVar2 + 0x18) = uVar3;
  *param_1 = thunk_FUN_100625c60;
  param_1[1] = puVar2;
  return;
}



/* Address: 0x1008fee60 | FUN_1008fee60 */

void FUN_1008fee60(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fec4b0 == 0) {
    puVar1 = &DAT_100fec4a0;
    FUN_1000f8b08(&DAT_100fec4a0,&DAT_100c83b78);
    uVar2 = 0xff;
    FUN_1008feed8(0xff);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100fec4b0 = param_1;
    }
  }
  return;
}



/* Address: 0x1008feed8 | FUN_1008feed8 */

void FUN_1008feed8(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100fec4b8 == 0) {
    puVar1 = &DAT_100fec4c0;
    FUN_1000f8b08(&DAT_100fec4c0,&DAT_100c83b80);
    uVar2 = 0xff;
    FUN_1008fef68(0xff,&DAT_100fec4c8,&DAT_100fec4d0,&DAT_100c83b88);
    _swift_getTupleTypeMetadata2(param_1,puVar1,uVar2,0,0);
    if (puVar1 == (undefined *)0x0) {
      DAT_100fec4b8 = param_1;
    }
  }
  return;
}



/* Address: 0x1008fef68 | FUN_1008fef68 */

void FUN_1008fef68(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  long lVar2;
  
  if (*param_2 != 0) {
    return;
  }
  FUN_1000f8b08(param_3,param_4);
  puVar1 = &DAT_100febf90;
  FUN_1000f8b08(&DAT_100febf90,&DAT_100c83810);
  lVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar1,param_3);
  *param_2 = lVar2;
  return;
}



/* Address: 0x1008fefd4 | FUN_1008fefd4 */

void FUN_1008fefd4(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1008f2180(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18))
  ;
  return;
}



/* Address: 0x1008fefdc | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008fefe0 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008fefe4 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008fefe8 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008fefec | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008feff0 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008feff4 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008feff8 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008feffc | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff000 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff004 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff008 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff00c | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff010 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff014 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff018 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff01c | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff020 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff024 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff028 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff02c | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff030 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff034 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff038 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff03c | thunk_FUN_1008fdacc */

void thunk_FUN_1008fdacc(void)

{
  FUN_1008fdacc();
  return;
}



/* Address: 0x1008ff040 | thunk_FUN_1008fdacc */

void thunk_FUN_1008fdacc(void)

{
  FUN_1008fdacc();
  return;
}



/* Address: 0x1008ff044 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff048 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff04c | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff050 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}



/* Address: 0x1008ff054 | thunk_FUN_1008fe6e8 */

void thunk_FUN_1008fe6e8(void)

{
  FUN_1008fe6e8();
  return;
}



/* Address: 0x1008ff058 | thunk_FUN_1008fda80 */

void thunk_FUN_1008fda80(void)

{
  FUN_1008fda80();
  return;
}


