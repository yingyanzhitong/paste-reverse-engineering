/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005e6500 | FUN_1005e6500 */

void FUN_1005e6500(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e650c | FUN_1005e650c */

undefined8 FUN_1005e650c(undefined8 param_1,undefined8 param_2)

{
  FUN_10065cc78(param_2,param_1);
  return param_2;
}



/* Address: 0x1005e6548 | FUN_1005e6548 */

void FUN_1005e6548(void)

{
  char cVar1;
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  cVar1 = *(char *)(unaff_x20 + 0x59);
  if (cVar1 == '\x02') {
    FUN_100004594(unaff_x20 + 0x18);
  }
  else if (cVar1 == '\x01') {
    _swift_release(*(ulong *)(unaff_x20 + 0x18) & 0x3fffffffffffffff);
    _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
    if ((*(char *)(unaff_x20 + 0x38) != '\x04') &&
       (((*(ulong *)(unaff_x20 + 0x40) ^ 0xffffffffffffffff) & 0xf000000000000007) != 0)) {
      _swift_release(*(ulong *)(unaff_x20 + 0x40) & 0x3fffffffffffffff);
    }
  }
  else if (cVar1 == '\0') {
    FUN_10000c650(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  (ulong)*(uint7 *)(unaff_x20 + 0x28));
  }
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e65f0 | FUN_1005e65f0 */

void FUN_1005e65f0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1005e5260(param_1,*(undefined8 *)(unaff_x20 + 0x10),unaff_x20 + 0x18,
                *(undefined8 *)(unaff_x20 + 0x60));
  return;
}



/* Address: 0x1005e6600 | FUN_1005e6600 */

void FUN_1005e6600(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = thunk_FUN_1005e55ec;
  param_1[3] = param_2;
  param_1[4] = thunk_FUN_1005e566c;
  param_1[5] = param_2;
  _swift_retain_n(param_2,2);
  _swift_unknownObjectRetain(uVar1);
  return;
}



/* Address: 0x1005e664c | FUN_1005e664c */

void FUN_1005e664c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Address: 0x1005e666c | FUN_1005e666c */

void FUN_1005e666c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  return;
}



/* Address: 0x1005e668c | FUN_1005e668c */

void FUN_1005e668c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  param_1[1] = *(undefined8 *)(param_2 + 0x38);
  *param_1 = uVar1;
  param_1[2] = thunk_FUN_1005e5bd4;
  param_1[3] = param_2;
  param_1[4] = thunk_FUN_1005e5c70;
  param_1[5] = param_2;
  param_1[6] = thunk_FUN_1005e6960;
  param_1[7] = param_2;
  _swift_retain_n(param_2,3);
  _swift_unknownObjectRetain(uVar1);
  return;
}



/* Address: 0x1005e66e4 | FUN_1005e66e4 */

void FUN_1005e66e4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  Optional OVar1;
  undefined7 extraout_var;
  undefined8 uVar2;
  undefined8 uVar3;
  TargetProtocolConformanceDescriptor *pTVar4;
  long lVar5;
  code *pcVar6;
  undefined1 *puVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined1 auStack_c0 [72];
  undefined8 local_78;
  long lStack_70;
  undefined8 local_68;
  
  lVar10 = *(long *)(param_5 + -8);
  puVar7 = auStack_d0 + -(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_3;
  local_c8 = param_4;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar8 = (long)puVar7 -
          (*(long *)(*(long *)(CONCAT71(extraout_var,OVar1.value) + -8) + 0x40) + 0xfU &
          0xfffffffffffffff0);
  lVar5 = param_5;
  FUN_100679b54();
  uVar2 = 0;
  local_78 = param_2;
  lStack_70 = lVar5;
  local_68 = uVar3;
  FUN_100680958(0,param_5);
  FUN_100679ba8(lVar8);
  pcVar9 = *(code **)(lVar10 + 0x30);
  lVar5 = lVar8;
  (*pcVar9)(lVar8,1,param_5);
  if ((int)lVar5 != 1) {
    pcVar6 = *(code **)(lVar10 + 0x20);
    do {
      (*pcVar6)(puVar7,lVar8,param_5);
      uVar3 = 0;
      FUN_1005e6c3c(0,param_3,local_c8,param_5);
      pTVar4 = &TargetProtocolConformanceDescriptor_100c6613c;
      _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6613c,uVar3);
      FUN_10066a260(auStack_c0,puVar7,uVar3,pTVar4);
      lVar5 = *(long *)(param_1 + 0x18);
      if (lVar5 != 0) {
        _swift_retain(lVar5);
        FUN_10062ac2c(auStack_c0,0);
        _swift_release(lVar5);
      }
      FUN_1005e70f4(auStack_c0);
      (**(code **)(lVar10 + 8))(puVar7,param_5);
      FUN_100679ba8(lVar8,uVar2);
      lVar5 = lVar8;
      (*pcVar9)(lVar8,1,param_5);
    } while ((int)lVar5 != 1);
  }
  _swift_release(local_78);
  lVar5 = *(long *)(param_1 + 0x18);
  if (lVar5 != 0) {
    _swift_retain(lVar5);
    FUN_10062aae4();
    _swift_release(lVar5);
  }
  return;
}



/* Address: 0x1005e68a8 | FUN_1005e68a8 */

void FUN_1005e68a8(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  long lVar3;
  undefined1 auStack_78 [72];
  
  uVar1 = 0;
  FUN_1005e6c3c(0,param_3,param_4,param_5);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c6613c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6613c,uVar1);
  FUN_10066a260(auStack_78,param_2,uVar1,pTVar2);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_10062ac2c(auStack_78,0);
    _swift_release(lVar3);
  }
  FUN_1005e70f4(auStack_78);
  lVar3 = *(long *)(param_1 + 0x18);
  if (lVar3 != 0) {
    _swift_retain(lVar3);
    FUN_10062aae4();
    _swift_release(lVar3);
  }
  return;
}



/* Address: 0x1005e6960 | FUN_1005e6960 */

void FUN_1005e6960(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    _swift_beginAccess(unaff_x20 + 0x18,auStack_60,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    if ((lVar3 != 0) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
      _swift_retain(lVar3);
      _swift_retain(lVar2);
      FUN_10062aa18(0,0);
      _swift_release(lVar3);
      _swift_release(lVar2);
    }
  }
  _swift_beginAccess(unaff_x20 + 0x58,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1005e6a20 | FUN_1005e6a20 */

void FUN_1005e6a20(void)

{
  FUN_1005e6b10(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x1005e6a2c | FUN_1005e6a2c */

void FUN_1005e6a2c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x28))(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1005e6a50 | FUN_1005e6a50 */

void FUN_1005e6a50(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x58 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e6ac8 | FUN_1005e6ac8 */

void FUN_1005e6ac8(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x10) + -8) + 0x50);
  (**(code **)(unaff_x20 + 0x38))
            (*(undefined8 *)(unaff_x20 + 0x40),
             unaff_x20 + (uVar1 + 0x58 & (uVar1 ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1005e6b04 | FUN_1005e6b04 */

void FUN_1005e6b04(void)

{
  FUN_1005e6b10(PTR__swift_errorRelease_100eae218);
  return;
}



/* Address: 0x1005e6b10 | FUN_1005e6b10 */

void FUN_1005e6b10(code *param_1)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  (*param_1)(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e6b60 | FUN_1005e6b60 */

void FUN_1005e6b60(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x48))(*(undefined8 *)(unaff_x20 + 0x58));
  return;
}



/* Address: 0x1005e6b84 | FUN_1005e6b84 */

void FUN_1005e6b84(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c660a8,param_1);
  return;
}



/* Address: 0x1005e6b94 | FUN_1005e6b94 */

void FUN_1005e6b94(long param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6613c;
  _swift_getWitnessTable();
  *(TargetProtocolConformanceDescriptor **)(param_1 + 0x10) = pTVar1;
  return;
}



/* Address: 0x1005e6bc0 | FUN_1005e6bc0 */

void FUN_1005e6bc0(long param_1)

{
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  undefined *puStack_20;
  undefined *local_18;
  
  local_58 = &DAT_100c66228;
  puStack_50 = &DAT_100c66228;
  local_48 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
  puStack_40 = &DAT_100c66240;
  local_38 = &DAT_100c66258;
  puStack_30 = &DAT_100c66270;
  local_28 = &DAT_100c66228;
  puStack_20 = &DAT_100c66228;
  local_18 = &DAT_100c66288;
  _swift_initClassMetadata2(param_1,0,9,&local_58,param_1 + 0x68);
  return;
}



/* Address: 0x1005e6c3c | FUN_1005e6c3c */

void FUN_1005e6c3c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e6c48 | FUN_1005e6c48 */

void FUN_1005e6c48(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e6c54 | thunk_FUN_1005e6c68 */

void thunk_FUN_1005e6c68(void)

{
  FUN_1005e6c68();
  return;
}



/* Address: 0x1005e6c58 | FUN_1005e6c58 */

void FUN_1005e6c58(undefined8 *param_1)

{
  FUN_1001eebe0(*param_1,param_1[1],*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1005e6c68 | FUN_1005e6c68 */

undefined8 * FUN_1005e6c68(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  uVar3 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar1,uVar2,uVar3);
  *param_1 = uVar1;
  param_1[1] = uVar2;
  *(undefined1 *)(param_1 + 2) = uVar3;
  return param_1;
}



/* Address: 0x1005e6cb0 | FUN_1005e6cb0 */

undefined8 * FUN_1005e6cb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  
  uVar1 = *param_2;
  uVar3 = param_2[1];
  uVar5 = *(undefined1 *)(param_2 + 2);
  FUN_1001eebf0(uVar1,uVar3,uVar5);
  uVar2 = *param_1;
  uVar4 = param_1[1];
  *param_1 = uVar1;
  param_1[1] = uVar3;
  uVar6 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar5;
  FUN_1001eebe0(uVar2,uVar4,uVar6);
  return param_1;
}



/* Address: 0x1005e6d04 | FUN_1005e6d04 */

void FUN_1005e6d04(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1005e6d18 | FUN_1005e6d18 */

undefined8 * FUN_1005e6d18(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar1 = *(undefined1 *)(param_2 + 2);
  uVar3 = *param_1;
  uVar4 = param_1[1];
  uVar5 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  uVar2 = *(undefined1 *)(param_1 + 2);
  *(undefined1 *)(param_1 + 2) = uVar1;
  FUN_1001eebe0(uVar3,uVar4,uVar2);
  return param_1;
}



/* Address: 0x1005e6d5c | FUN_1005e6d5c */

void FUN_1005e6d5c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005e6d68 | FUN_1005e6d68 */

void FUN_1005e6d68(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = 0xff;
  FUN_1006529e0(0xff,param_1[1]);
  _swift_getFunctionTypeMetadata1(0x44000001,uVar1,uVar2);
  return;
}



/* Address: 0x1005e6d9c | FUN_1005e6d9c */

void FUN_1005e6d9c(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  _swift_release(param_1[3]);
  _swift_release(param_1[5]);
  return;
}



/* Address: 0x1005e6dcc | FUN_1005e6dcc */

undefined8 * FUN_1005e6dcc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = param_2[3];
  uVar3 = *param_2;
  uVar4 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  param_1[3] = uVar4;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar4 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar4;
  _swift_unknownObjectRetain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1005e6e24 | FUN_1005e6e24 */

undefined8 * FUN_1005e6e24(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1005e6ea4 | FUN_1005e6ea4 */

void FUN_1005e6ea4(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1005e6eb8 | FUN_1005e6eb8 */

undefined8 * FUN_1005e6eb8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  _swift_release(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005e6f04 | FUN_1005e6f04 */

undefined1  [16] FUN_1005e6f04(void)

{
  return ZEXT816(0x100ee8cc8);
}



/* Address: 0x1005e6f14 | FUN_1005e6f14 */

void FUN_1005e6f14(undefined8 *param_1)

{
  _swift_unknownObjectRelease(*param_1);
  _swift_release(param_1[3]);
  _swift_release(param_1[5]);
  _swift_release(param_1[7]);
  return;
}



/* Address: 0x1005e6f4c | FUN_1005e6f4c */

undefined8 * FUN_1005e6f4c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = param_2[3];
  uVar4 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar4;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar2 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  uVar3 = param_2[7];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  _swift_unknownObjectRetain(uVar4);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  _swift_retain(uVar3);
  return param_1;
}



/* Address: 0x1005e6fb0 | FUN_1005e6fb0 */

undefined8 * FUN_1005e6fb0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = param_2[1];
  uVar2 = *param_1;
  *param_1 = *param_2;
  _swift_unknownObjectRetain();
  _swift_unknownObjectRelease(uVar2);
  param_1[1] = uVar1;
  uVar2 = param_1[3];
  uVar1 = param_2[3];
  uVar3 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[5];
  uVar1 = param_2[5];
  uVar3 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  uVar2 = param_1[7];
  uVar1 = param_2[7];
  uVar3 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x1005e704c | FUN_1005e704c */

void FUN_1005e704c(undefined8 *param_1,undefined8 *param_2)

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
  uVar5 = param_2[4];
  uVar7 = param_2[7];
  uVar6 = param_2[6];
  param_1[5] = param_2[5];
  param_1[4] = uVar5;
  param_1[7] = uVar7;
  param_1[6] = uVar6;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1005e7060 | FUN_1005e7060 */

undefined8 * FUN_1005e7060(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  _swift_unknownObjectRelease(*param_1);
  uVar1 = param_1[3];
  uVar2 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  _swift_release(uVar1);
  uVar1 = param_1[5];
  uVar2 = param_2[4];
  param_1[5] = param_2[5];
  param_1[4] = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[7];
  uVar2 = param_2[6];
  param_1[7] = param_2[7];
  param_1[6] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x1005e70bc | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e70c0 | FUN_1005e70c0 */

void FUN_1005e70c0(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005e70f4 | FUN_1005e70f4 */

undefined8 FUN_1005e70f4(undefined8 param_1)

{
  FUN_10065cbd0();
  return param_1;
}



/* Address: 0x1005e7128 | thunk_FUN_1005e6960 */

void thunk_FUN_1005e6960(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  if (*(char *)(unaff_x20 + 0x68) == '\x01') {
    _swift_beginAccess(unaff_x20 + 0x18,auStack_60,0,0);
    lVar3 = *(long *)(unaff_x20 + 0x18);
    if ((lVar3 != 0) && (lVar2 = *(long *)(lVar3 + 0x18), lVar2 != 0)) {
      _swift_retain(lVar3);
      _swift_retain(lVar2);
      FUN_10062aa18(0,0);
      _swift_release(lVar3);
      _swift_release(lVar2);
    }
  }
  _swift_beginAccess(unaff_x20 + 0x58,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  _swift_release(uVar1);
  return;
}



/* Address: 0x1005e712c | thunk_FUN_1005e5c70 */

void thunk_FUN_1005e5c70(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  _swift_beginAccess(unaff_x20 + 0x18,auStack_58,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_1005e68a8();
    _swift_release(lVar1);
  }
  return;
}



/* Address: 0x1005e7130 | thunk_FUN_1005e5bd4 */

void thunk_FUN_1005e5bd4(void)

{
  long lVar1;
  long unaff_x20;
  undefined1 auStack_58 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  _swift_beginAccess(unaff_x20 + 0x18,auStack_58,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 != 0) {
    _swift_retain(lVar1);
    FUN_1005e66e4();
    _swift_release(lVar1);
  }
  return;
}



/* Address: 0x1005e7134 | thunk_FUN_1005e566c */

void thunk_FUN_1005e566c(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  _swift_beginAccess(unaff_x20 + 0x28,auStack_48,1,0);
  if (*(char *)(unaff_x20 + 0x28) != '\0') {
    if (*(char *)(unaff_x20 + 0x28) == '\x01') {
      *(undefined1 *)(unaff_x20 + 0x28) = 0;
    }
    else {
      *(undefined1 *)(unaff_x20 + 0x28) = 0;
      _swift_beginAccess(unaff_x20 + 0x18,auStack_60,0,0);
      lVar1 = *(long *)(unaff_x20 + 0x18);
      if ((lVar1 != 0) && (lVar2 = *(long *)(lVar1 + 0x18), lVar2 != 0)) {
        _swift_retain(lVar1);
        _swift_retain(lVar2);
        FUN_10062ab88();
        _swift_release(lVar1);
        _swift_release(lVar2);
      }
    }
  }
  return;
}



/* Address: 0x1005e7138 | thunk_FUN_1005e55ec */

void thunk_FUN_1005e55ec(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  _swift_getObjectType(*(undefined8 *)(unaff_x20 + 0x30));
  FUN_100642338();
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,1,0);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  *(undefined8 *)(unaff_x20 + 0x10) = 0;
  _swift_release(uVar1);
  _swift_beginAccess(unaff_x20 + 0x28,auStack_60,1,0);
  *(undefined1 *)(unaff_x20 + 0x28) = 2;
  return;
}



/* Address: 0x1005e713c | thunk_FUN_1005e664c */

void thunk_FUN_1005e664c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x20))();
  return;
}



/* Address: 0x1005e7140 | thunk_FUN_1005e666c */

void thunk_FUN_1005e666c(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x30))();
  return;
}



/* Address: 0x1005e7144 | thunk_FUN_1005e6b94 */

void thunk_FUN_1005e6b94(void)

{
  FUN_1005e6b94();
  return;
}



/* Address: 0x1005e7148 | thunk_FUN_1005e6c68 */

void thunk_FUN_1005e6c68(void)

{
  thunk_FUN_1005e6c68();
  return;
}



/* Address: 0x1005e714c | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1005e7150 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1005e7154 | thunk_FUN_1005e70c0 */

void thunk_FUN_1005e70c0(void)

{
  thunk_FUN_1005e70c0();
  return;
}



/* Address: 0x1005e7158 | FUN_1005e7158 */

void FUN_1005e7158(long *param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                  undefined8 param_5,undefined8 param_6,byte param_7,undefined8 param_8)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  byte local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = *param_4;
  _swift_getObjectType();
  FUN_100642338();
  bVar1 = param_7 == 2;
  local_a8 = 2;
  if (!bVar1) {
    local_a8 = param_5;
  }
  uStack_a0 = 10;
  if (!bVar1) {
    uStack_a0 = param_6;
  }
  local_98 = bVar1 | param_7 & 1;
  FUN_1005e6600(&local_90,param_4);
  uStack_d8 = uStack_88;
  local_e0 = local_90;
  uStack_c8 = local_78;
  uStack_d0 = uStack_80;
  uStack_b8 = uStack_68;
  local_c0 = local_70;
  lVar6 = *(long *)(lVar4 + 0x58);
  puVar3 = &local_a8;
  lVar4 = lVar6;
  FUN_1005fb9d4(lVar6,puVar3,param_8,&local_e0,lVar6,&DAT_100ee9430,&DAT_100ee8cc8,
                &PTR_PTR_100ee9390,&PTR_PTR_100ee8a88);
  _swift_release(uStack_68);
  _swift_release(local_78);
  _swift_unknownObjectRelease(local_90);
  _swift_unknownObjectRelease(param_2);
  _swift_beginAccess(param_4 + 2,&local_e0,1,0);
  lVar5 = param_4[2];
  param_4[2] = lVar4;
  _swift_release(param_4);
  _swift_release(lVar5);
  *param_1 = (long)puVar3;
  uVar2 = 0;
  FUN_1005e8278(0,lVar6);
  _swift_storeEnumTagMultiPayload(param_1,uVar2,1);
  return;
}



/* Address: 0x1005e72dc | FUN_1005e72dc */

void FUN_1005e72dc(undefined8 param_1)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e7340. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x10))(param_1);
  return;
}



/* Address: 0x1005e7344 | FUN_1005e7344 */

void FUN_1005e7344(undefined8 param_1,undefined8 param_2)

{
  Continuation CVar1;
  
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar1 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005e73ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CVar1.unknown + -8) + 0x20))(param_1,param_2,CVar1.unknown);
  return;
}



/* Address: 0x1005e73b0 | FUN_1005e73b0 */

void FUN_1005e73b0(undefined8 param_1,long param_2)

{
  YieldResult YVar1;
  undefined7 extraout_var;
  Continuation CVar2;
  long lVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = *(long *)(param_2 + 0x10);
  lVar6 = *(long *)(lVar3 + -8);
  puVar4 = &stack0xffffffffffffffa0 + -(*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  YVar1 = Swift::AsyncThrowingStream::Continuation::YieldResult::typeMetadataAccessor();
  lVar7 = *(long *)(CONCAT71(extraout_var,YVar1.value) + -8);
  lVar5 = (long)puVar4 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(puVar4,param_1,lVar3);
  CVar2 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  Swift::AsyncThrowingStream::Continuation::_yield(lVar5,puVar4,CVar2.unknown);
  (**(code **)(lVar7 + 8))(lVar5,CONCAT71(extraout_var,YVar1.value));
  return;
}



/* Address: 0x1005e74ac | FUN_1005e74ac */

void FUN_1005e74ac(undefined8 param_1)

{
  undefined8 local_28;
  
  local_28 = param_1;
  _swift_errorRetain();
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  Swift::AsyncThrowingStream::Continuation::_finish((Continuation)&local_28);
  return;
}



/* Address: 0x1005e7514 | FUN_1005e7514 */

void FUN_1005e7514(undefined8 param_1)

{
  FUN_1005e7898(param_1,FUN_1005e8278);
  return;
}



/* Address: 0x1005e7520 | FUN_1005e7520 */

void FUN_1005e7520(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  Optional OVar2;
  BufferingPolicy BVar3;
  Continuation CVar4;
  undefined7 extraout_var;
  AsyncThrowingStream AVar6;
  undefined7 extraout_var_00;
  long lVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_70;
  long lStack_68;
  long lVar5;
  
  local_90 = param_2;
  local_88 = param_1;
  FUN_1000f8b08(&DAT_100fd4f20,&DAT_100c660a0);
  CVar4 = Swift::AsyncThrowingStream::Continuation::typeMetadataAccessor();
  OVar2 = Swift::Optional::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,OVar2.value);
  lVar13 = *(long *)(lVar5 + -8);
  uVar9 = *(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar10 = (long)&local_90 - uVar9;
  lVar8 = *(long *)(CVar4.unknown + -8);
  (**(code **)(lVar8 + 0x38))(lVar10,1,1,CVar4.unknown);
  AVar6 = Swift::AsyncThrowingStream::typeMetadataAccessor();
  lVar11 = lVar10 - (*(long *)(*(long *)(AVar6.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_70 = param_3;
  lStack_68 = lVar10;
  BVar3 = Swift::AsyncThrowingStream::Continuation::BufferingPolicy::typeMetadataAccessor();
  lVar12 = lVar11 - (*(long *)(*(long *)(CONCAT71(extraout_var_00,BVar3.value) + -8) + 0x40) + 0xfU
                    & 0xfffffffffffffff0);
  FUN_1005e7790(lVar12,param_3);
  Swift::AsyncThrowingStream::_init((BufferingPolicy)(__int8)param_3);
  lVar12 = lVar12 - uVar9;
  (**(code **)(lVar13 + 0x10))(lVar12,lVar10,lVar5);
  lVar7 = lVar12;
  (**(code **)(lVar8 + 0x30))(lVar12,1,CVar4.unknown);
  if ((int)lVar7 != 1) {
    FUN_1005e7344(local_90,lVar12,param_3);
    FUN_1005e7804(local_88,lVar11,param_3);
    (**(code **)(lVar13 + 8))(lVar10,lVar5);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005e76e8);
  (*pcVar1)();
}


