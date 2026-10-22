/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10089a884 | FUN_10089a884 */

code * FUN_10089a884(undefined8 *param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long lVar4;
  code *pcVar5;
  long lVar6;
  long unaff_x20;
  ulong uVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined8 local_a0;
  undefined1 local_98;
  undefined8 local_90;
  
  uVar7 = *(ulong *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(unaff_x20 + 0x38);
  _swift_getObjectType();
  uVar1 = uVar7;
  (**(code **)(lVar6 + 0x10))();
  if ((uVar1 & 1) == 0) {
    puVar3 = &DAT_100f0a900;
    _swift_allocObject(&DAT_100f0a900,0x70,7);
    *(undefined8 *)(puVar3 + 0x10) = param_2;
    *(long *)(puVar3 + 0x18) = unaff_x20;
    uVar2 = param_1[4];
    uVar10 = param_1[7];
    uVar9 = param_1[6];
    *(undefined8 *)(puVar3 + 0x48) = param_1[5];
    *(undefined8 *)(puVar3 + 0x40) = uVar2;
    *(undefined8 *)(puVar3 + 0x58) = uVar10;
    *(undefined8 *)(puVar3 + 0x50) = uVar9;
    uVar2 = param_1[8];
    *(undefined8 *)(puVar3 + 0x68) = param_1[9];
    *(undefined8 *)(puVar3 + 0x60) = uVar2;
    uVar10 = *param_1;
    uVar9 = param_1[3];
    uVar2 = param_1[2];
    *(undefined8 *)(puVar3 + 0x28) = param_1[1];
    *(undefined8 *)(puVar3 + 0x20) = uVar10;
    *(undefined8 *)(puVar3 + 0x38) = uVar9;
    *(undefined8 *)(puVar3 + 0x30) = uVar2;
    pcVar8 = *(code **)(lVar6 + 0x20);
    _swift_retain();
    lVar4 = 0;
    FUN_10089b45c(0,param_2);
    (**(code **)(*(long *)(lVar4 + -8) + 0x10))(&local_a0,param_1,lVar4);
    uVar2 = 0;
    FUN_1006529e0(0,param_2);
    pcVar5 = FUN_10089b4ac;
    (*pcVar8)(FUN_10089b4ac,puVar3,uVar2,uVar7,lVar6);
    _swift_release(puVar3);
  }
  else {
    uVar2 = 0;
    local_90 = param_2;
    FUN_1006529e0(0,param_2);
    puVar3 = &DAT_100fe9a00;
    FUN_1000f7830(&DAT_100fe9a00,&DAT_100c809b0);
    FUN_1006414f4(&local_b0,FUN_10089b4dc,&local_a0,uVar2,puVar3,
                  PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90);
    local_a0 = local_b0;
    local_98 = local_a8;
    pcVar5 = (code *)&local_a0;
    FUN_10063db28(pcVar5,uVar7,uVar2,lVar6);
    FUN_1005dff14(local_b0,local_a8);
  }
  return pcVar5;
}



/* Address: 0x10089aa10 | FUN_10089aa10 */

/* WARNING: Removing unreachable block (ram,0x00010089ad3c) */
/* WARNING: Removing unreachable block (ram,0x00010089abdc) */

ulong FUN_10089aa10(byte *param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  ulong uVar4;
  undefined *puVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  ulong uVar10;
  long unaff_x21;
  undefined8 uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong local_b0 [2];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  byte local_68;
  undefined8 local_58;
  
  bVar3 = param_1[2];
  uVar4 = 0;
  FUN_100887fb0();
  _swift_allocObject();
  *(undefined1 *)(uVar4 + 0x10) = 0;
  *(byte *)(uVar4 + 0x11) = bVar3;
  uVar8 = *(undefined8 *)(param_1 + 8);
  uVar14 = *(undefined8 *)(param_1 + 0x10);
  uVar11 = *(undefined8 *)(param_1 + 0x18);
  uVar13 = (ulong)*param_1;
  puVar5 = &DAT_100fe9140;
  FUN_1000f7830(&DAT_100fe9140,&DAT_100c80d00);
  _swift_allocObject();
  FUN_100889914(uVar13,0,uVar8,uVar14,uVar11,puVar5);
  local_b0[0] = uVar13;
  FUN_1000f7830(&DAT_100fe99b0,&DAT_100c80590);
  _swift_allocObject();
  puVar6 = local_b0;
  FUN_1006381a4(puVar6,0,1);
  uVar7 = 0;
  FUN_100880850(0,3,0,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar13 = *(ulong *)(uVar7 + 0x10);
  uVar10 = *(ulong *)(uVar7 + 0x18);
  uVar12 = uVar10 >> 1;
  lVar1 = uVar13 + 1;
  _swift_retain(uVar4);
  uVar9 = uVar7;
  if (uVar12 <= uVar13) {
    uVar9 = (ulong)(1 < uVar10);
    FUN_100880850(uVar9,lVar1,1,uVar7);
    uVar10 = *(ulong *)(uVar9 + 0x18);
    uVar12 = uVar10 >> 1;
  }
  *(long *)(uVar9 + 0x10) = lVar1;
  lVar2 = uVar9 + uVar13 * 0x10;
  *(ulong *)(lVar2 + 0x20) = uVar4;
  *(undefined ***)(lVar2 + 0x28) = &PTR_PTR_100f09140;
  lVar2 = uVar13 + 2;
  _swift_retain(puVar6);
  uVar13 = uVar9;
  if ((long)uVar12 < lVar2) {
    uVar13 = (ulong)(1 < uVar10);
    FUN_100880850(uVar13,lVar2,1,uVar9);
  }
  *(long *)(uVar13 + 0x10) = lVar2;
  lVar1 = uVar13 + lVar1 * 0x10;
  *(ulong **)(lVar1 + 0x20) = puVar6;
  *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100eee590;
  _swift_retain(uVar4);
  FUN_100626a9c();
  if (unaff_x21 == 0) {
    _swift_release(uVar4);
    _swift_retain(puVar6);
    FUN_100626a9c();
    _swift_release(puVar6);
    uVar10 = uVar13;
    if ((param_1[1] & 1) != 0) {
      uVar8 = 0;
      FUN_100889238();
      _swift_allocObject();
      _swift_retain();
      FUN_100626a9c();
      uVar9 = *(ulong *)(uVar13 + 0x10);
      if (*(ulong *)(uVar13 + 0x18) >> 1 <= uVar9) {
        uVar10 = (ulong)(1 < *(ulong *)(uVar13 + 0x18));
        FUN_100880850(uVar10,uVar9 + 1,1,uVar13);
      }
      *(ulong *)(uVar10 + 0x10) = uVar9 + 1;
      lVar1 = uVar10 + uVar9 * 0x10;
      *(undefined8 *)(lVar1 + 0x20) = uVar8;
      *(undefined ***)(lVar1 + 0x28) = &PTR_PTR_100f09710;
      _swift_release(uVar8);
    }
    FUN_1008ac394(0,param_3);
    uStack_98 = *(undefined8 *)(param_1 + 0x28);
    uVar8 = *(undefined8 *)(param_1 + 0x20);
    local_88 = *(undefined8 *)(param_1 + 0x38);
    uStack_90 = *(undefined8 *)(param_1 + 0x30);
    uVar14 = *(undefined8 *)(param_1 + 0x48);
    local_80 = *(undefined8 *)(param_1 + 0x40);
    local_70 = *(undefined8 *)(param_1 + 0x28);
    local_68 = param_1[0x30];
    local_a0 = uVar8;
    uStack_78 = uVar14;
    local_58 = local_88;
    _swift_bridgeObjectRetain(uVar10);
    _swift_retain(uVar8);
    FUN_10089ae2c(&local_70,local_b0);
    FUN_10089ae68(&local_58,local_b0);
    _swift_retain(uVar14);
    uVar13 = uVar10;
    FUN_1008abfd4(uVar10,&local_a0);
    _swift_release(uVar8);
    FUN_10089aeb8(&local_70);
    FUN_10089aeec(&local_58);
    _swift_release(uVar14);
    _swift_retain(uVar13);
    FUN_100626a9c();
    _swift_bridgeObjectRelease(uVar10);
    _swift_release(uVar4);
    _swift_release(puVar6);
    uVar4 = uVar13;
    _swift_release(uVar13);
    FUN_1008ac01c();
    _swift_retain();
    _swift_release(uVar13);
  }
  else {
    _swift_release(puVar6);
    _swift_release(uVar4);
    _swift_release(uVar4);
    _swift_bridgeObjectRelease(uVar13);
  }
  return uVar4;
}



/* Address: 0x10089ae2c | FUN_10089ae2c */

undefined8 FUN_10089ae2c(undefined8 param_1,undefined8 param_2)

{
  thunk_FUN_1004a168c(param_2,param_1);
  return param_2;
}



/* Address: 0x10089ae68 | FUN_10089ae68 */

undefined8 FUN_10089ae68(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe9e98;
  FUN_1000f7830(&DAT_100fe9e98,&DAT_100c80d10);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10089aeb8 | FUN_10089aeb8 */

undefined8 FUN_10089aeb8(undefined8 param_1)

{
  FUN_100108cb8();
  return param_1;
}



/* Address: 0x10089aeec | FUN_10089aeec */

undefined8 FUN_10089aeec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe9e98;
  FUN_1000f7830(&DAT_100fe9e98,&DAT_100c80d10);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10089af34 | FUN_10089af34 */

void FUN_10089af34(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  _swift_release(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x10089af5c | FUN_10089af5c */

undefined4 * FUN_10089af5c(undefined4 *param_1,undefined4 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  uVar1 = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  *(undefined8 *)(param_1 + 2) = uVar1;
  *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
  uVar1 = *(undefined8 *)(param_2 + 0xc);
  uVar2 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  *(undefined8 *)(param_1 + 8) = uVar2;
  *(undefined8 *)(param_1 + 0xc) = uVar1;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x10089afb4 | FUN_10089afb4 */

undefined1 * FUN_10089afb4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10089b04c | FUN_10089b04c */

void FUN_10089b04c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  param_1[6] = param_2[6];
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x10089b068 | FUN_10089b068 */

undefined1 * FUN_10089b068(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x20));
  uVar2 = *(undefined8 *)(param_2 + 0x30);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10089b0dc | FUN_10089b0dc */

int FUN_10089b0dc(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xe] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10089b124 | FUN_10089b124 */

void FUN_10089b124(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10089b170 | FUN_10089b170 */

void FUN_10089b170(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10089b17c | FUN_10089b17c */

void FUN_10089b17c(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_release(*(undefined8 *)(param_1 + 0x48));
  return;
}



/* Address: 0x10089b1b4 | FUN_10089b1b4 */

undefined1 * FUN_10089b1b4(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *param_1 = *param_2;
  *(undefined2 *)(param_1 + 1) = *(undefined2 *)(param_2 + 1);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar3;
  param_1[0x30] = param_2[0x30];
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar4 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar4;
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  _swift_bridgeObjectRetain(uVar4);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x10089b250 | FUN_10089b250 */

undefined1 * FUN_10089b250(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x30] = param_2[0x30];
  uVar1 = *(undefined8 *)(param_1 + 0x38);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_2 + 0x38);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = *(undefined8 *)(param_1 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x48);
  uVar3 = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x10089b318 | FUN_10089b318 */

void FUN_10089b318(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar5 = param_2[6];
  uVar7 = param_2[9];
  uVar6 = param_2[8];
  param_1[7] = param_2[7];
  param_1[6] = uVar5;
  param_1[9] = uVar7;
  param_1[8] = uVar6;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  return;
}



/* Address: 0x10089b334 | FUN_10089b334 */

undefined1 * FUN_10089b334(undefined1 *param_1,undefined1 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 0x10) = *(undefined8 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 8) = uVar1;
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_2 + 0x18);
  _swift_release(*(undefined8 *)(param_1 + 0x20));
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  param_1[0x30] = param_2[0x30];
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  uVar2 = *(undefined8 *)(param_2 + 0x48);
  uVar1 = *(undefined8 *)(param_2 + 0x38);
  *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_2 + 0x40);
  *(undefined8 *)(param_1 + 0x38) = uVar1;
  uVar1 = *(undefined8 *)(param_1 + 0x48);
  *(undefined8 *)(param_1 + 0x48) = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10089b3c0 | FUN_10089b3c0 */

int FUN_10089b3c0(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 8);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x10089b408 | FUN_10089b408 */

void FUN_10089b408(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[9] = 0;
    param_1[8] = 0;
    param_1[7] = 0;
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 10) = 0;
    }
    if (param_2 != 0) {
      param_1[4] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x10089b45c | FUN_10089b45c */

void FUN_10089b45c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x10089b468 | FUN_10089b468 */

void FUN_10089b468(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  _swift_deallocObject();
  return;
}



/* Address: 0x10089b4ac | FUN_10089b4ac */

void FUN_10089b4ac(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = unaff_x20 + 0x20;
  FUN_10089aa10(lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  if (unaff_x21 == 0) {
    *param_1 = lVar1;
  }
  return;
}



/* Address: 0x10089b4dc | FUN_10089b4dc */

void FUN_10089b4dc(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10089aa10(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  else {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x10089b51c | FUN_10089b51c */

void FUN_10089b51c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x50));
  _swift_deallocObject();
  return;
}



/* Address: 0x10089b550 | FUN_10089b550 */

void FUN_10089b550(long *param_1)

{
  long lVar1;
  long unaff_x20;
  long unaff_x21;
  
  lVar1 = unaff_x20 + 0x20;
  FUN_10089a278(lVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  if (unaff_x21 == 0) {
    *param_1 = lVar1;
  }
  return;
}



/* Address: 0x10089b580 | FUN_10089b580 */

void FUN_10089b580(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  long unaff_x20;
  long unaff_x21;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_10089a278(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x10));
  if (unaff_x21 == 0) {
    *param_1 = uVar1;
  }
  else {
    *param_2 = unaff_x21;
  }
  return;
}



/* Address: 0x10089b5c0 | FUN_10089b5c0 */

bool FUN_10089b5c0(UTF8View param_1,ulong param_2,UTF8View param_3,ulong param_4)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  __uint8 _Var4;
  byte bVar5;
  Index after;
  Index IVar6;
  UnsafeBufferPointer<__int8> UVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  Index after_00;
  ulong uVar13;
  undefined *local_70;
  ulong uStack_68;
  
  uVar1 = (ulong)param_3.unknown & 0xffffffffffff;
  if ((param_4 & 0x2000000000000000) != 0) {
    uVar1 = param_4 >> 0x38 & 0xf;
  }
  uVar13 = uVar1 * 4;
  uVar8 = (uint)((ulong)param_3.unknown >> 0x3b) & 1;
  if ((param_4 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  uVar9 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar9 = 1;
  }
  uVar10 = 4L << uVar9;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  after_00.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  do {
    uVar12 = (ulong)after_00.cmsgPointer.unknown >> 0xe;
    if (uVar12 == uVar13) {
      _Var4 = 0;
    }
    else {
      IVar6.cmsgPointer.unknown = after_00.cmsgPointer.unknown;
      if (((ulong)after_00.cmsgPointer.unknown & 0xc) == 4L << uVar8) {
        FUN_1000740a8(after_00.cmsgPointer.unknown,param_3.unknown,param_4);
      }
      if (uVar1 <= (ulong)IVar6.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089b8f0);
        (*pcVar3)();
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        if ((param_4 >> 0x3d & 1) == 0) {
          UVar7.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
          if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
            UVar7 = Swift::_StringObject::get_sharedUTF8(param_3.unknown);
          }
        }
        else {
          local_70 = param_3.unknown;
          uStack_68 = param_4 & 0xffffffffffffff;
          UVar7.unknown = (undefined *)&local_70;
        }
        _Var4 = *(__uint8 *)((long)UVar7.unknown + ((ulong)IVar6.cmsgPointer.unknown >> 0x10));
      }
      else {
        _Var4 = Swift::String::UTF8View::_foreignSubscript(IVar6,param_3);
      }
      if (((ulong)after_00.cmsgPointer.unknown & 0xc) == 4L << uVar8) {
        FUN_1000740a8(after_00.cmsgPointer.unknown,param_3.unknown,param_4);
      }
      if ((param_4 >> 0x3c & 1) == 0) {
        after_00.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after_00.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      else {
        if (uVar1 <= (ulong)after_00.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10089b8f8);
          (*pcVar3)();
        }
        after_00 = Swift::String::UTF8View::_foreignIndex(after_00,param_3);
      }
    }
    if (uVar2 << 2 == (ulong)after.cmsgPointer.unknown >> 0xe) {
      return uVar12 == uVar13;
    }
    uVar11 = (ulong)after.cmsgPointer.unknown & 0xc;
    IVar6.cmsgPointer.unknown = after.cmsgPointer.unknown;
    if (uVar11 == uVar10) {
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    if (uVar2 <= (ulong)IVar6.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10089b8ec);
      (*pcVar3)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) == 0) {
        UVar7.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
          UVar7 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
        }
      }
      else {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        UVar7.unknown = (undefined *)&local_70;
      }
      bVar5 = *(byte *)((long)UVar7.unknown + ((ulong)IVar6.cmsgPointer.unknown >> 0x10));
      if (uVar11 != uVar10) goto LAB_10089b840;
LAB_10089b8a8:
      FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_10089b674;
LAB_10089b844:
      if (uVar2 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089b8f4);
        (*pcVar3)();
      }
      after = Swift::String::UTF8View::_foreignIndex(after,param_1);
    }
    else {
      bVar5 = Swift::String::UTF8View::_foreignSubscript(IVar6,param_1);
      if (uVar11 == uVar10) goto LAB_10089b8a8;
LAB_10089b840:
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089b844;
LAB_10089b674:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
    }
    if ((uVar12 == uVar13) || (((bVar5 ^ _Var4) & 0xdf) != 0)) {
      return false;
    }
  } while( true );
}



/* Address: 0x10089b8f8 | FUN_10089b8f8 */

undefined8
FUN_10089b8f8(UTF8View param_1,ulong param_2,UTF8View param_3,ulong param_4,UTF8View param_5,
             ulong param_6)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  __uint8 _Var4;
  byte bVar5;
  Index position;
  Index after;
  UnsafeBufferPointer<__int8> UVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  Index after_00;
  undefined *local_70;
  ulong uStack_68;
  
  uVar7 = (uint)((ulong)param_5.unknown >> 0x3b) & 1;
  if ((param_6 & 0x1000000000000000) == 0) {
    uVar7 = 1;
  }
  uVar1 = (ulong)param_5.unknown & 0xffffffffffff;
  if ((param_6 & 0x2000000000000000) != 0) {
    uVar1 = param_6 >> 0x38 & 0xf;
  }
  uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  uVar8 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
  if ((param_2 & 0x1000000000000000) == 0) {
    uVar8 = 1;
  }
  uVar10 = 4L << uVar8;
  _swift_bridgeObjectRetain(param_2);
  after_00.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
  after.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)param_3.unknown;
  do {
    uVar12 = (ulong)after.cmsgPointer.unknown ^ param_4;
    if (uVar12 < 0x4000) {
      if (uVar2 << 2 == (ulong)after_00.cmsgPointer.unknown >> 0xe) {
        uVar9 = 1;
        goto LAB_10089bb60;
      }
      _Var4 = 0;
    }
    else {
      _Var4 = Swift::Substring::UTF8View::get_subscript(after,param_3);
      if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar7) {
        FUN_1000740a8(after.cmsgPointer.unknown,param_5.unknown,param_6);
        if ((param_6 >> 0x3c & 1) == 0) goto LAB_10089b9f0;
LAB_10089bb28:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bba4);
          (*pcVar3)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_5);
      }
      else {
        if ((param_6 >> 0x3c & 1) != 0) goto LAB_10089bb28;
LAB_10089b9f0:
        after.cmsgPointer.unknown =
             (UnsafeMutablePointer)
             (((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
      }
      if (uVar2 << 2 == (ulong)after_00.cmsgPointer.unknown >> 0xe) {
LAB_10089bb5c:
        uVar9 = 0;
LAB_10089bb60:
        _swift_bridgeObjectRelease(param_2);
        return uVar9;
      }
    }
    uVar11 = (ulong)after_00.cmsgPointer.unknown & 0xc;
    position.cmsgPointer.unknown = after_00.cmsgPointer.unknown;
    if (uVar11 == uVar10) {
      FUN_1000740a8(after_00.cmsgPointer.unknown,param_1.unknown,param_2);
    }
    uVar13 = (ulong)position.cmsgPointer.unknown >> 0x10;
    if (uVar2 <= uVar13) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bb9c);
      (*pcVar3)();
    }
    if ((param_2 >> 0x3c & 1) == 0) {
      if ((param_2 >> 0x3d & 1) != 0) {
        local_70 = param_1.unknown;
        uStack_68 = param_2 & 0xffffffffffffff;
        bVar5 = *(byte *)((long)&local_70 + uVar13);
        goto joined_r0x00010089bab4;
      }
      UVar6.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        UVar6 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
      }
      bVar5 = UVar6.unknown[uVar13];
      if (uVar11 == uVar10) goto LAB_10089bab8;
LAB_10089ba6c:
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089bad0;
LAB_10089ba70:
      after_00.cmsgPointer.unknown =
           (UnsafeMutablePointer)
           (((ulong)after_00.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
    }
    else {
      bVar5 = Swift::String::UTF8View::_foreignSubscript(position,param_1);
joined_r0x00010089bab4:
      if (uVar11 != uVar10) goto LAB_10089ba6c;
LAB_10089bab8:
      FUN_1000740a8(after_00.cmsgPointer.unknown,param_1.unknown,param_2);
      if ((param_2 >> 0x3c & 1) == 0) goto LAB_10089ba70;
LAB_10089bad0:
      if (uVar2 <= (ulong)after_00.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bba0);
        (*pcVar3)();
      }
      after_00 = Swift::String::UTF8View::_foreignIndex(after_00,param_1);
    }
    if ((uVar12 < 0x4000) || (((bVar5 ^ _Var4) & 0xdf) != 0)) goto LAB_10089bb5c;
  } while( true );
}



/* Address: 0x10089bba4 | FUN_10089bba4 */

undefined1  [16] FUN_10089bba4(long param_1)

{
  undefined1 auVar1 [16];
  
  auVar1 = *(undefined1 (*) [16])(param_1 + 0x10);
  FUN_100881fec(*(undefined8 *)*(undefined1 (*) [16])(param_1 + 0x10),
                *(undefined8 *)(param_1 + 0x18));
  return auVar1;
}



/* Address: 0x10089bbd4 | FUN_10089bbd4 */

uint FUN_10089bbd4(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if (0xffff < (long)param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10089bbfc);
    (*pcVar1)();
  }
  if (-1 < (long)(param_2 | param_1)) {
    if ((long)param_2 < 0x10000) {
      return (uint)param_2 & 0xffff | (int)param_1 << 0x10;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10089bc04);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10089bc00);
  (*pcVar1)();
}



/* Address: 0x10089bc04 | FUN_10089bc04 */

void FUN_10089bc04(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10089bc80();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(undefined8 *)(lVar1 + 0x28) = param_5;
  *(short *)(lVar1 + 0x30) = (short)param_1;
  *(short *)(lVar1 + 0x32) = (short)((ulong)param_1 >> 0x10);
  return;
}



/* Address: 0x10089bc80 | FUN_10089bc80 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10089bc80(void)

{
  return ZEXT816(0x100fea090);
}



/* Address: 0x10089bca0 | thunk_FUN_1008a2dac */

long thunk_FUN_1008a2dac(long param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  
  switch(param_1) {
  case 100:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x65:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x66:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 200:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xc9:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xca:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcb:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcc:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcd:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xce:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xcf:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xd0:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0xe2:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 300:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12d:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12e:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x12f:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x130:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x131:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x133:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x134:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 400:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x191:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x192:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x193:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x194:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x195:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x196:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x197:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x198:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x199:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19a:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19b:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19c:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19d:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19e:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x19f:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a0:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a1:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a2:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a5:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a6:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a7:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1a8:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1aa:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ac:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ad:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1af:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1c3:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 500:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f5:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f6:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f7:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f8:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1f9:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fa:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fb:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fc:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1fe:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  case 0x1ff:
    _swift_bridgeObjectRelease(param_3);
    return 0;
  }
  if (-1 < param_1) {
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008a3478);
  (*pcVar1)();
}



/* Address: 0x10089bca4 | FUN_10089bca4 */

void FUN_10089bca4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1008a3ae8();
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_2;
  *(undefined8 *)(lVar1 + 0x18) = param_3;
  *(undefined8 *)(lVar1 + 0x20) = param_4;
  *(short *)(lVar1 + 0x28) = (short)param_1;
  *(short *)(lVar1 + 0x2a) = (short)((ulong)param_1 >> 0x10);
  return;
}



/* Address: 0x10089bd1c | FUN_10089bd1c */

void FUN_10089bd1c(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  int iVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    iVar7 = *(int *)(unaff_x20 + 0xc);
  }
  else {
    iVar7 = *(int *)(unaff_x20 + 0xc);
    puVar9 = (undefined8 *)(param_1 + 0x38);
    do {
      uVar4 = puVar9[-3];
      uVar1 = puVar9[-2];
      uVar6 = puVar9[-1];
      uVar2 = *puVar9;
      _swift_bridgeObjectRetain(uVar1);
      _swift_bridgeObjectRetain(uVar2);
      FUN_10060b1ac(uVar4,uVar1,iVar7);
      if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089be9c);
        (*pcVar3)();
      }
      if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bea0);
        (*pcVar3)();
      }
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bea4);
        (*pcVar3)();
      }
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar4;
      pcVar5 = ": ";
      FUN_10060af44(": ",2,2);
      if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bea8);
        (*pcVar3)();
      }
      if ((ulong)pcVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089beac);
        (*pcVar3)();
      }
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089beb0);
        (*pcVar3)();
      }
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar5;
      FUN_10060b1ac(uVar6,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      _swift_bridgeObjectRelease(uVar1);
      if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089beb4);
        (*pcVar3)();
      }
      if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089beb8);
        (*pcVar3)();
      }
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bebc);
        (*pcVar3)();
      }
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar6;
      pcVar5 = "\r\n";
      FUN_10060af44("\r\n",2,2);
      if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bec0);
        (*pcVar3)();
      }
      if ((ulong)pcVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bec4);
        (*pcVar3)();
      }
      iVar7 = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar5;
      if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar5)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bec8);
        (*pcVar3)();
      }
      puVar9 = puVar9 + 4;
      *(int *)(unaff_x20 + 0xc) = iVar7;
      lVar8 = lVar8 + -1;
    } while (lVar8 != 0);
  }
  pcVar5 = "\r\n";
  FUN_10060af44("\r\n",2,2,iVar7);
  if ((long)pcVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10089becc);
    (*pcVar3)();
  }
  if ((ulong)pcVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bed0);
    (*pcVar3)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)pcVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10089bed4);
    (*pcVar3)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)pcVar5;
  return;
}



/* Address: 0x10089bed4 | FUN_10089bed4 */

/* WARNING: Removing unreachable block (ram,0x00010089c5f0) */
/* WARNING: Removing unreachable block (ram,0x00010089c1f0) */
/* WARNING: Removing unreachable block (ram,0x00010089c5e4) */

void FUN_10089bed4(_StringObject param_1,ulong param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  byte bVar13;
  byte bVar14;
  code *pcVar15;
  bool bVar16;
  UTF8View UVar17;
  ulong uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  ulong uVar21;
  UnsafeBufferPointer<__int8> UVar22;
  UnsafeBufferPointer<__int8> UVar23;
  ulong uVar24;
  ulong uVar25;
  undefined **ppuVar26;
  ulong uVar27;
  undefined **ppuVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong *unaff_x20;
  undefined8 uVar31;
  undefined8 uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined *local_88;
  ulong uStack_80;
  undefined *local_78;
  ulong uStack_70;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar24 = param_2;
        UVar22 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      else {
        UVar22.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        uVar24 = (ulong)param_1.unknown & 0xffffffffffff;
      }
      if (((((uVar24 == 10) && ((*UVar22.unknown & 0xdf) == 0x43)) &&
           ((UVar22.unknown[1] & 0xdf) == 0x4f)) &&
          ((((UVar22.unknown[2] & 0xdf) == 0x4e && ((UVar22.unknown[3] & 0xdf) == 0x4e)) &&
           (((UVar22.unknown[4] & 0xdf) == 0x45 &&
            (((UVar22.unknown[5] & 0xdf) == 0x43 && ((UVar22.unknown[6] & 0xdf) == 0x54)))))))) &&
         (((UVar22.unknown[7] & 0xdf) == 0x49 &&
          (((UVar22.unknown[8] & 0xdf) == 0x4f && ((UVar22.unknown[9] & 0xdf) == 0x4e)))))) {
LAB_10089c08c:
        *(undefined1 *)(unaff_x20 + 1) = 2;
      }
    }
    else if (((((((param_2 & 0xf00000000000000) == 0xa00000000000000) &&
                (((ulong)param_1.unknown & 0xdf) == 0x43)) &&
               (((ulong)param_1.unknown & 0xdf00) == 0x4f00)) &&
              ((((ulong)param_1.unknown & 0xdf0000) == 0x4e0000 &&
               (((ulong)param_1.unknown & 0xdf000000) == 0x4e000000)))) &&
             (((((ulong)param_1.unknown & 0xdf00000000) == 0x4500000000 &&
               ((((ulong)param_1.unknown & 0xdf0000000000) == 0x430000000000 &&
                (((ulong)param_1.unknown & 0xdf000000000000) == 0x54000000000000)))) &&
              (((ulong)param_1.unknown & 0xdf00000000000000) == 0x4900000000000000)))) &&
            (((param_2 & 0xdf) == 0x4f && ((param_2 & 0xdf00) == 0x4e00)))) goto LAB_10089c08c;
  }
  else {
    uVar24 = 0x697463656e6e6f63;
    FUN_10089b5c0(0x697463656e6e6f63,0xea00000000006e6f,param_1.unknown);
    if ((uVar24 & 1) != 0) goto LAB_10089c08c;
  }
  uVar24 = *unaff_x20;
  puVar30 = (ulong *)(uVar24 + 0x10);
  uVar35 = *puVar30;
  if (uVar35 != 0) {
    uVar33 = 0;
    uVar27 = param_2 >> 0x38 & 0xf;
    uVar29 = (ulong)param_1.unknown & 0xffffffffffff;
    pbVar3 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
    uVar6 = uVar29;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = uVar27;
    }
LAB_10089c104:
    puVar4 = (undefined8 *)(uVar24 + 0x20 + uVar33 * 0x20);
    UVar17.unknown = (undefined *)*puVar4;
    uVar25 = puVar4[1];
    if ((param_2 >> 0x3c & 1) != 0) {
      uVar18 = Swift::String::UTF8View::_foreignCount((UTF8View)param_1.unknown);
      uVar34 = uVar25 >> 0x38 & 0xf;
      if ((uVar25 >> 0x3c & 1) != 0) goto LAB_10089c2cc;
LAB_10089c11c:
      uVar21 = (ulong)UVar17.unknown & 0xffffffffffff;
      if ((uVar25 & 0x2000000000000000) != 0) {
        uVar21 = uVar34;
      }
      if (uVar18 != uVar21) goto LAB_10089c0f8;
LAB_10089c130:
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          UVar22.unknown = pbVar3;
          uVar18 = uVar29;
          if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
            uVar18 = param_2;
            UVar22 = Swift::_StringObject::get_sharedUTF8(param_1);
          }
          if ((uVar25 >> 0x3c & 1) == 0) {
            if ((uVar25 >> 0x3d & 1) == 0) {
              if (((ulong)UVar17.unknown >> 0x3c & 1) == 0) {
                UVar23 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar17.unknown);
              }
              else {
                UVar23.unknown = (undefined *)((uVar25 & 0xfffffffffffffff) + 0x20);
                uVar25 = (ulong)UVar17.unknown & 0xffffffffffff;
              }
              if (uVar18 == uVar25) {
                if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
                  pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c83c);
                  (*pcVar15)();
                }
                uVar25 = 0;
                do {
                  if (uVar18 == uVar25) goto LAB_10089c3c4;
                  if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
                    pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7d0);
                    (*pcVar15)();
                  }
                  pbVar1 = UVar22.unknown + uVar25;
                  pbVar2 = UVar23.unknown + uVar25;
                  uVar25 = uVar25 + 1;
                } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
              }
              goto LAB_10089c0f8;
            }
            local_78 = UVar17.unknown;
            uStack_70 = uVar25 & 0xffffffffffffff;
            if (uVar18 == uVar34) {
              ppuVar26 = &local_78;
              do {
                if (uVar34 == 0) {
                  bVar16 = true;
                  goto LAB_10089c288;
                }
                bVar13 = *UVar22.unknown;
                bVar14 = *(byte *)ppuVar26;
                uVar34 = uVar34 - 1;
                ppuVar26 = (undefined **)((long)ppuVar26 + 1);
                UVar22.unknown = UVar22.unknown + 1;
              } while (((bVar14 ^ bVar13) & 0xdf) == 0);
            }
            bVar16 = false;
            goto LAB_10089c288;
          }
          goto LAB_10089c0e4;
        }
        local_78 = param_1.unknown;
        uStack_70 = param_2 & 0xffffffffffffff;
        if ((uVar25 >> 0x3c & 1) != 0) goto LAB_10089c0e4;
        if ((uVar25 >> 0x3d & 1) == 0) {
          if (((ulong)UVar17.unknown >> 0x3c & 1) == 0) {
            UVar22 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar17.unknown);
          }
          else {
            UVar22.unknown = (undefined *)((uVar25 & 0xfffffffffffffff) + 0x20);
            uVar25 = (ulong)UVar17.unknown & 0xffffffffffff;
          }
          if (uVar27 == uVar25) {
            ppuVar26 = &local_78;
            uVar25 = uVar27;
            do {
              if (uVar25 == 0) goto LAB_10089c274;
              bVar13 = *(byte *)ppuVar26;
              bVar14 = *UVar22.unknown;
              uVar25 = uVar25 - 1;
              UVar22.unknown = UVar22.unknown + 1;
              ppuVar26 = (undefined **)((long)ppuVar26 + 1);
            } while (((bVar14 ^ bVar13) & 0xdf) == 0);
          }
        }
        else {
          local_88 = UVar17.unknown;
          uStack_80 = uVar25 & 0xffffffffffffff;
          if (uVar27 == uVar34) {
            ppuVar26 = &local_78;
            ppuVar28 = &local_88;
            uVar25 = uVar27;
            do {
              if (uVar25 == 0) goto LAB_10089c274;
              bVar13 = *(byte *)ppuVar26;
              bVar14 = *(byte *)ppuVar28;
              uVar25 = uVar25 - 1;
              ppuVar26 = (undefined **)((long)ppuVar26 + 1);
              ppuVar28 = (undefined **)((long)ppuVar28 + 1);
            } while (((bVar14 ^ bVar13) & 0xdf) == 0);
          }
        }
        bVar16 = false;
        goto LAB_10089c288;
      }
LAB_10089c0e4:
      FUN_10089b5c0(UVar17.unknown,uVar25,param_1.unknown);
      if (((ulong)UVar17.unknown & 1) == 0) goto LAB_10089c0f8;
      goto LAB_10089c3c4;
    }
    uVar34 = uVar25 >> 0x38 & 0xf;
    uVar18 = uVar6;
    if ((uVar25 >> 0x3c & 1) == 0) goto LAB_10089c11c;
LAB_10089c2cc:
    uVar21 = Swift::String::UTF8View::_foreignCount(UVar17);
    if (uVar18 == uVar21) goto LAB_10089c130;
    goto LAB_10089c0f8;
  }
  uVar33 = 0;
  uVar35 = 0;
  goto LAB_10089c3e0;
LAB_10089c274:
  bVar16 = true;
LAB_10089c288:
  if (bVar16) {
LAB_10089c3c4:
    uVar35 = uVar33 + 1;
    uVar25 = *puVar30;
    if (uVar35 != uVar25) goto LAB_10089c438;
    goto LAB_10089c3d4;
  }
LAB_10089c0f8:
  uVar33 = uVar33 + 1;
  if (uVar33 == uVar35) goto LAB_10089c3b4;
  goto LAB_10089c104;
LAB_10089c438:
  if (uVar25 <= uVar35) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7c8);
    (*pcVar15)();
  }
  puVar4 = (undefined8 *)(uVar24 + 0x20 + uVar35 * 0x20);
  UVar17.unknown = (undefined *)*puVar4;
  uVar25 = puVar4[1];
  uVar18 = uVar6;
  if ((param_2 >> 0x3c & 1) != 0) {
    uVar18 = Swift::String::UTF8View::_foreignCount((UTF8View)param_1.unknown);
  }
  uVar34 = uVar25 >> 0x38 & 0xf;
  if ((uVar25 >> 0x3c & 1) != 0) {
    uVar21 = Swift::String::UTF8View::_foreignCount(UVar17);
    if (uVar18 == uVar21) goto LAB_10089c494;
    goto LAB_10089c624;
  }
  uVar21 = (ulong)UVar17.unknown & 0xffffffffffff;
  if ((uVar25 & 0x2000000000000000) != 0) {
    uVar21 = uVar34;
  }
  if (uVar18 != uVar21) goto LAB_10089c624;
LAB_10089c494:
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      UVar22.unknown = pbVar3;
      uVar18 = uVar29;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar18 = param_2;
        UVar22 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if ((uVar25 >> 0x3c & 1) == 0) {
        if ((uVar25 >> 0x3d & 1) == 0) {
          if (((ulong)UVar17.unknown >> 0x3c & 1) == 0) {
            UVar23 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar17.unknown);
          }
          else {
            UVar23.unknown = (undefined *)((uVar25 & 0xfffffffffffffff) + 0x20);
            uVar25 = (ulong)UVar17.unknown & 0xffffffffffff;
          }
          if (uVar18 == uVar25) {
            if ((long)uVar18 < 0) {
                    /* WARNING: Does not return */
              pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c840);
              (*pcVar15)();
            }
            uVar25 = 0;
            do {
              if (uVar18 == uVar25) goto LAB_10089c424;
              if (SCARRY8(uVar25,1)) {
                    /* WARNING: Does not return */
                pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c818);
                (*pcVar15)();
              }
              pbVar1 = UVar22.unknown + uVar25;
              pbVar2 = UVar23.unknown + uVar25;
              uVar25 = uVar25 + 1;
            } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
          }
          goto LAB_10089c624;
        }
        local_78 = UVar17.unknown;
        uStack_70 = uVar25 & 0xffffffffffffff;
        if (uVar18 == uVar34) {
          ppuVar26 = &local_78;
          do {
            if (uVar34 == 0) {
              bVar16 = true;
              goto LAB_10089c620;
            }
            bVar13 = *UVar22.unknown;
            bVar14 = *(byte *)ppuVar26;
            uVar34 = uVar34 - 1;
            UVar22.unknown = UVar22.unknown + 1;
            ppuVar26 = (undefined **)((long)ppuVar26 + 1);
          } while (((bVar14 ^ bVar13) & 0xdf) == 0);
        }
        bVar16 = false;
        goto LAB_10089c620;
      }
      goto LAB_10089c5fc;
    }
    local_78 = param_1.unknown;
    uStack_70 = param_2 & 0xffffffffffffff;
    if ((uVar25 >> 0x3c & 1) != 0) goto LAB_10089c5fc;
    if ((uVar25 >> 0x3d & 1) == 0) {
      if (((ulong)UVar17.unknown >> 0x3c & 1) == 0) {
        UVar22 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar17.unknown);
      }
      else {
        UVar22.unknown = (undefined *)((uVar25 & 0xfffffffffffffff) + 0x20);
        uVar25 = (ulong)UVar17.unknown & 0xffffffffffff;
      }
      if (uVar27 == uVar25) {
        ppuVar26 = &local_78;
        uVar25 = uVar27;
        do {
          if (uVar25 == 0) goto LAB_10089c5e8;
          bVar13 = *(byte *)ppuVar26;
          bVar14 = *UVar22.unknown;
          uVar25 = uVar25 - 1;
          UVar22.unknown = UVar22.unknown + 1;
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
        } while (((bVar14 ^ bVar13) & 0xdf) == 0);
      }
    }
    else {
      local_88 = UVar17.unknown;
      uStack_80 = uVar25 & 0xffffffffffffff;
      if (uVar27 == uVar34) {
        ppuVar26 = &local_78;
        ppuVar28 = &local_88;
        uVar25 = uVar27;
        do {
          if (uVar25 == 0) goto LAB_10089c5e8;
          bVar13 = *(byte *)ppuVar26;
          bVar14 = *(byte *)ppuVar28;
          uVar25 = uVar25 - 1;
          ppuVar26 = (undefined **)((long)ppuVar26 + 1);
          ppuVar28 = (undefined **)((long)ppuVar28 + 1);
        } while (((bVar14 ^ bVar13) & 0xdf) == 0);
      }
    }
    bVar16 = false;
    goto LAB_10089c620;
  }
LAB_10089c5fc:
  FUN_10089b5c0(UVar17.unknown,uVar25,param_1.unknown);
  if (((ulong)UVar17.unknown & 1) == 0) goto LAB_10089c624;
  goto LAB_10089c424;
LAB_10089c5e8:
  bVar16 = true;
LAB_10089c620:
  if (!bVar16) {
LAB_10089c624:
    if (uVar33 != uVar35) {
      if ((long)uVar33 < 0) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7d4);
        (*pcVar15)();
      }
      if (*puVar30 <= uVar33) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7d8);
        (*pcVar15)();
      }
      if ((long)*puVar30 <= (long)uVar35) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7dc);
        (*pcVar15)();
      }
      puVar5 = (undefined8 *)(uVar24 + 0x20 + uVar33 * 0x20);
      uVar7 = *puVar5;
      uVar9 = puVar5[1];
      uVar8 = puVar5[2];
      uVar10 = puVar5[3];
      uVar20 = *puVar4;
      uVar11 = puVar4[1];
      uVar32 = puVar4[2];
      uVar12 = puVar4[3];
      _swift_bridgeObjectRetain(uVar9);
      _swift_bridgeObjectRetain(uVar10);
      _swift_bridgeObjectRetain(uVar11);
      _swift_bridgeObjectRetain(uVar12);
      uVar25 = uVar24;
      _swift_isUniquelyReferenced_nonNull_native();
      if ((uVar25 & 1) == 0) {
        FUN_1008a2334();
      }
      puVar4 = (undefined8 *)(uVar24 + 0x20 + uVar33 * 0x20);
      uVar31 = puVar4[1];
      uVar19 = puVar4[3];
      *puVar4 = uVar20;
      puVar4[1] = uVar11;
      puVar4[2] = uVar32;
      puVar4[3] = uVar12;
      _swift_bridgeObjectRelease(uVar19);
      _swift_bridgeObjectRelease(uVar31);
      if (*(long *)(uVar24 + 0x10) <= (long)uVar35) {
                    /* WARNING: Does not return */
        pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7e0);
        (*pcVar15)();
      }
      puVar4 = (undefined8 *)(uVar24 + 0x20 + uVar35 * 0x20);
      uVar32 = puVar4[1];
      uVar20 = puVar4[3];
      *puVar4 = uVar7;
      puVar4[1] = uVar9;
      puVar4[2] = uVar8;
      puVar4[3] = uVar10;
      _swift_bridgeObjectRelease(uVar20);
      _swift_bridgeObjectRelease(uVar32);
      *unaff_x20 = uVar24;
    }
    bVar16 = SCARRY8(uVar33,1);
    uVar33 = uVar33 + 1;
    if (bVar16) {
                    /* WARNING: Does not return */
      pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c7cc);
      (*pcVar15)();
    }
  }
LAB_10089c424:
  uVar35 = uVar35 + 1;
  puVar30 = (ulong *)(uVar24 + 0x10);
  uVar25 = *puVar30;
  if (uVar35 == uVar25) goto LAB_10089c3d4;
  goto LAB_10089c438;
LAB_10089c3b4:
  uVar33 = *puVar30;
  uVar35 = uVar33;
  goto LAB_10089c3e0;
LAB_10089c3d4:
  if ((long)uVar35 < (long)uVar33) {
                    /* WARNING: Does not return */
    pcVar15 = (code *)SoftwareBreakpoint(1,0x10089c814);
    (*pcVar15)();
  }
LAB_10089c3e0:
  FUN_1008a3b08(uVar33,uVar35);
  return;
}



/* Address: 0x10089c840 | FUN_10089c840 */

/* WARNING: Removing unreachable block (ram,0x00010089ca44) */

undefined8 FUN_10089c840(_StringObject param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  _StringObject _Var5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  _StringObject _Var9;
  UnsafeBufferPointer<__int8> UVar10;
  UnsafeBufferPointer<__int8> UVar11;
  bool bVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  long lVar17;
  long lVar18;
  ulong uVar19;
  undefined *local_88;
  ulong uStack_80;
  undefined *local_78;
  ulong uStack_70;
  
  lVar17 = *(long *)(param_3 + 0x10);
  if (lVar17 == 0) {
    return 0;
  }
  lVar18 = 0;
  uVar19 = param_2 >> 0x38 & 0xf;
  pbVar3 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
LAB_10089c8bc:
  puVar4 = (undefined8 *)(param_3 + 0x20 + lVar18 * 0x20);
  _Var5.unknown = (undefined *)*puVar4;
  uVar13 = puVar4[1];
  if ((uVar13 >> 0x3c & 1) == 0) {
    if ((uVar13 >> 0x3d & 1) == 0) {
      if (((ulong)_Var5.unknown >> 0x3c & 1) == 0) {
        uVar16 = uVar13;
        UVar10 = Swift::_StringObject::get_sharedUTF8(_Var5);
      }
      else {
        UVar10.unknown = (undefined *)((uVar13 & 0xfffffffffffffff) + 0x20);
        uVar16 = (ulong)_Var5.unknown & 0xffffffffffff;
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089c8a0;
      if ((param_2 >> 0x3d & 1) != 0) {
        local_78 = param_1.unknown;
        uStack_70 = param_2 & 0xffffffffffffff;
        if (uVar16 == uVar19) {
          ppuVar14 = &local_78;
          uVar13 = uVar19;
          do {
            if (uVar13 == 0) {
              bVar12 = true;
              goto LAB_10089ca08;
            }
            bVar6 = *UVar10.unknown;
            bVar7 = *(byte *)ppuVar14;
            uVar13 = uVar13 - 1;
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            UVar10.unknown = UVar10.unknown + 1;
          } while (((bVar7 ^ bVar6) & 0xdf) == 0);
        }
        bVar12 = false;
        goto LAB_10089ca08;
      }
      UVar11.unknown = pbVar3;
      uVar13 = (ulong)param_1.unknown & 0xffffffffffff;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar13 = param_2;
        UVar11 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if (uVar16 == uVar13) {
        if ((long)uVar16 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10089cabc);
          (*pcVar8)();
        }
        uVar13 = 0;
        do {
          if (uVar16 == uVar13) {
            return 1;
          }
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10089cab8);
            (*pcVar8)();
          }
          pbVar1 = UVar10.unknown + uVar13;
          pbVar2 = UVar11.unknown + uVar13;
          uVar13 = uVar13 + 1;
        } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
      }
      goto LAB_10089c8b0;
    }
    local_78 = _Var5.unknown;
    uStack_70 = uVar13 & 0xffffffffffffff;
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089c8a0;
    uVar13 = uVar13 >> 0x38 & 0xf;
    if ((param_2 >> 0x3d & 1) == 0) {
      UVar10.unknown = pbVar3;
      uVar16 = (ulong)param_1.unknown & 0xffffffffffff;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar16 = param_2;
        UVar10 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if (uVar13 == uVar16) {
        ppuVar14 = &local_78;
        do {
          if (uVar13 == 0) goto LAB_10089c9f4;
          bVar6 = *(byte *)ppuVar14;
          bVar7 = *UVar10.unknown;
          uVar13 = uVar13 - 1;
          UVar10.unknown = UVar10.unknown + 1;
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (((bVar7 ^ bVar6) & 0xdf) == 0);
      }
    }
    else {
      local_88 = param_1.unknown;
      uStack_80 = param_2 & 0xffffffffffffff;
      if (uVar13 == uVar19) {
        ppuVar14 = &local_78;
        ppuVar15 = &local_88;
        uVar13 = uVar19;
        do {
          if (uVar13 == 0) goto LAB_10089c9f4;
          bVar6 = *(byte *)ppuVar14;
          bVar7 = *(byte *)ppuVar15;
          uVar13 = uVar13 - 1;
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (((bVar7 ^ bVar6) & 0xdf) == 0);
      }
    }
    bVar12 = false;
    goto LAB_10089ca08;
  }
LAB_10089c8a0:
  _Var9.unknown = param_1.unknown;
  FUN_10089b5c0(param_1.unknown,param_2,_Var5.unknown,uVar13);
  if (((ulong)_Var9.unknown & 1) != 0) {
    return 1;
  }
  goto LAB_10089c8b0;
LAB_10089c9f4:
  bVar12 = true;
LAB_10089ca08:
  if (bVar12) {
    return 1;
  }
LAB_10089c8b0:
  lVar18 = lVar18 + 1;
  if (lVar18 == lVar17) {
    return 0;
  }
  goto LAB_10089c8bc;
}



/* Address: 0x10089cabc | FUN_10089cabc */

ulong FUN_10089cabc(ulong param_1)

{
  return param_1 >> 0x10 & 0xffff;
}



/* Address: 0x10089cac4 | FUN_10089cac4 */

undefined2 FUN_10089cac4(undefined2 param_1)

{
  return param_1;
}



/* Address: 0x10089cacc | FUN_10089cacc */

void FUN_10089cacc(_StringObject param_1,ulong param_2,undefined8 param_3,undefined8 param_4)

{
  UnsafeBufferPointer<__int8> UVar1;
  ulong uVar2;
  long unaff_x20;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) == 0) {
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar2 = param_2;
        UVar1 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      else {
        UVar1.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
        uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
      }
      if (((((uVar2 != 10) || ((*UVar1.unknown & 0xdf) != 0x43)) ||
           ((UVar1.unknown[1] & 0xdf) != 0x4f)) ||
          ((((UVar1.unknown[2] & 0xdf) != 0x4e || ((UVar1.unknown[3] & 0xdf) != 0x4e)) ||
           (((UVar1.unknown[4] & 0xdf) != 0x45 ||
            (((UVar1.unknown[5] & 0xdf) != 0x43 || ((UVar1.unknown[6] & 0xdf) != 0x54)))))))) ||
         (((UVar1.unknown[7] & 0xdf) != 0x49 ||
          (((UVar1.unknown[8] & 0xdf) != 0x4f || ((UVar1.unknown[9] & 0xdf) != 0x4e))))))
      goto LAB_10089cc80;
    }
    else if (((((((param_2 & 0xf00000000000000) != 0xa00000000000000) ||
                (((ulong)param_1.unknown & 0xdf) != 0x43)) ||
               (((ulong)param_1.unknown & 0xdf00) != 0x4f00)) ||
              ((((ulong)param_1.unknown & 0xdf0000) != 0x4e0000 ||
               (((ulong)param_1.unknown & 0xdf000000) != 0x4e000000)))) ||
             (((((ulong)param_1.unknown & 0xdf00000000) != 0x4500000000 ||
               ((((ulong)param_1.unknown & 0xdf0000000000) != 0x430000000000 ||
                (((ulong)param_1.unknown & 0xdf000000000000) != 0x54000000000000)))) ||
              (((ulong)param_1.unknown & 0xdf00000000000000) != 0x4900000000000000)))) ||
            (((param_2 & 0xdf) != 0x4f || ((param_2 & 0xdf00) != 0x4e00)))) goto LAB_10089cc80;
  }
  else {
    uVar2 = 0x697463656e6e6f63;
    FUN_10089b5c0(0x697463656e6e6f63,0xea00000000006e6f,param_1.unknown,param_2);
    if ((uVar2 & 1) == 0) goto LAB_10089cc80;
  }
  *(undefined1 *)(unaff_x20 + 8) = 2;
LAB_10089cc80:
  FUN_10089bed4(param_1.unknown);
  FUN_10089f74c(param_1.unknown,param_2,param_3,param_4);
  return;
}



/* Address: 0x10089cd18 | FUN_10089cd18 */

/* WARNING: Removing unreachable block (ram,0x00010089cf68) */

undefined * FUN_10089cd18(_StringObject param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  _StringObject _Var5;
  undefined8 uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined8 uVar9;
  byte bVar10;
  byte bVar11;
  code *pcVar12;
  _StringObject _Var13;
  UnsafeBufferPointer<__int8> UVar14;
  UnsafeBufferPointer<__int8> UVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  bool bVar19;
  ulong uVar20;
  undefined **ppuVar21;
  undefined **ppuVar22;
  ulong uVar23;
  ulong uVar24;
  ulong uVar25;
  ulong uVar26;
  undefined *local_88;
  ulong uStack_80;
  undefined *local_78;
  ulong uStack_70;
  
  uVar23 = *(ulong *)(param_3 + 0x10);
  if (uVar23 == 0) {
    return PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar26 = 0;
  uVar24 = param_2 >> 0x38 & 0xf;
  pbVar3 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
  puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10089cd84:
  uVar7 = uVar26;
  if (uVar26 <= uVar23) {
    uVar7 = uVar23;
  }
LAB_10089cdbc:
  if (uVar26 == uVar7) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10089d0a8);
    (*pcVar12)();
  }
  puVar4 = (undefined8 *)(param_3 + 0x20 + uVar26 * 0x20);
  _Var5.unknown = (undefined *)*puVar4;
  uVar8 = puVar4[1];
  uVar6 = puVar4[2];
  uVar9 = puVar4[3];
  uVar26 = uVar26 + 1;
  if ((uVar8 >> 0x3c & 1) != 0) goto LAB_10089cd98;
  if ((uVar8 >> 0x3d & 1) != 0) {
    local_78 = _Var5.unknown;
    uStack_70 = uVar8 & 0xffffffffffffff;
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089cd98;
    uVar25 = uVar8 >> 0x38 & 0xf;
    if ((param_2 >> 0x3d & 1) == 0) {
      UVar14.unknown = pbVar3;
      uVar20 = (ulong)param_1.unknown & 0xffffffffffff;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar20 = param_2;
        UVar14 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if (uVar25 == uVar20) {
        ppuVar21 = &local_78;
        do {
          if (uVar25 == 0) goto LAB_10089cf10;
          bVar10 = *(byte *)ppuVar21;
          bVar11 = *UVar14.unknown;
          uVar25 = uVar25 - 1;
          UVar14.unknown = UVar14.unknown + 1;
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
        } while (((bVar11 ^ bVar10) & 0xdf) == 0);
      }
    }
    else {
      local_88 = param_1.unknown;
      uStack_80 = param_2 & 0xffffffffffffff;
      if (uVar25 == uVar24) {
        ppuVar21 = &local_78;
        ppuVar22 = &local_88;
        uVar25 = uVar24;
        do {
          if (uVar25 == 0) goto LAB_10089cf10;
          bVar10 = *(byte *)ppuVar21;
          bVar11 = *(byte *)ppuVar22;
          uVar25 = uVar25 - 1;
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
          ppuVar22 = (undefined **)((long)ppuVar22 + 1);
        } while (((bVar11 ^ bVar10) & 0xdf) == 0);
      }
    }
    bVar19 = false;
    goto LAB_10089cf24;
  }
  if (((ulong)_Var5.unknown >> 0x3c & 1) != 0) {
    UVar14.unknown = (undefined *)((uVar8 & 0xfffffffffffffff) + 0x20);
    uVar25 = (ulong)_Var5.unknown & 0xffffffffffff;
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089cd98;
LAB_10089cdf0:
    if ((param_2 >> 0x3d & 1) != 0) {
      local_78 = param_1.unknown;
      uStack_70 = param_2 & 0xffffffffffffff;
      if (uVar25 == uVar24) {
        ppuVar21 = &local_78;
        uVar25 = uVar24;
        do {
          if (uVar25 == 0) {
            bVar19 = true;
            goto LAB_10089cf24;
          }
          bVar10 = *UVar14.unknown;
          bVar11 = *(byte *)ppuVar21;
          uVar25 = uVar25 - 1;
          ppuVar21 = (undefined **)((long)ppuVar21 + 1);
          UVar14.unknown = UVar14.unknown + 1;
        } while (((bVar11 ^ bVar10) & 0xdf) == 0);
      }
      bVar19 = false;
      goto LAB_10089cf24;
    }
    UVar15.unknown = pbVar3;
    uVar20 = (ulong)param_1.unknown & 0xffffffffffff;
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      uVar20 = param_2;
      UVar15 = Swift::_StringObject::get_sharedUTF8(param_1);
    }
    if (uVar25 == uVar20) {
      if ((long)uVar25 < 0) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x10089d0ac);
        (*pcVar12)();
      }
      uVar20 = 0;
      do {
        if (uVar25 == uVar20) goto LAB_10089cfbc;
        if (SCARRY8(uVar20,1)) {
                    /* WARNING: Does not return */
          pcVar12 = (code *)SoftwareBreakpoint(1,0x10089d0a4);
          (*pcVar12)();
        }
        pbVar1 = UVar14.unknown + uVar20;
        pbVar2 = UVar15.unknown + uVar20;
        uVar20 = uVar20 + 1;
      } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
    }
    goto LAB_10089cdb4;
  }
  uVar25 = uVar8;
  UVar14 = Swift::_StringObject::get_sharedUTF8(_Var5);
  if ((param_2 >> 0x3c & 1) == 0) goto LAB_10089cdf0;
LAB_10089cd98:
  _Var13.unknown = param_1.unknown;
  FUN_10089b5c0(param_1.unknown,param_2,_Var5.unknown,uVar8);
  if (((ulong)_Var13.unknown & 1) != 0) goto LAB_10089cfbc;
  goto LAB_10089cdb4;
LAB_10089cf10:
  bVar19 = true;
LAB_10089cf24:
  if (bVar19) goto LAB_10089cfbc;
LAB_10089cdb4:
  if (uVar26 == uVar23) {
    return puVar18;
  }
  goto LAB_10089cdbc;
LAB_10089cfbc:
  _swift_bridgeObjectRetain_n(uVar9,2);
  _swift_bridgeObjectRetain(uVar8);
  puVar16 = puVar18;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar17 = puVar18;
  if (((ulong)puVar16 & 1) == 0) {
    puVar17 = (undefined *)0x0;
    FUN_100880724(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
  }
  uVar7 = *(ulong *)(puVar17 + 0x10);
  puVar18 = puVar17;
  if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar7) {
    puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
    FUN_100880724(puVar18,uVar7 + 1,1,puVar17);
  }
  *(ulong *)(puVar18 + 0x10) = uVar7 + 1;
  *(undefined8 *)(puVar18 + uVar7 * 0x10 + 0x20) = uVar6;
  *(undefined8 *)(puVar18 + uVar7 * 0x10 + 0x28) = uVar9;
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(uVar8);
  if (uVar26 == uVar23) {
    return puVar18;
  }
  goto LAB_10089cd84;
}



/* Address: 0x10089d0ac | FUN_10089d0ac */

/* WARNING: Removing unreachable block (ram,0x00010089d254) */
/* WARNING: Removing unreachable block (ram,0x00010089d260) */
/* WARNING: Removing unreachable block (ram,0x00010089d210) */

undefined1  [16] FUN_10089d0ac(_StringObject param_1,ulong param_2,long param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined8 *puVar4;
  _StringObject _Var5;
  byte bVar6;
  byte bVar7;
  code *pcVar8;
  _StringObject _Var9;
  UnsafeBufferPointer<__int8> UVar10;
  UnsafeBufferPointer<__int8> UVar11;
  bool bVar12;
  ulong uVar13;
  undefined **ppuVar14;
  undefined **ppuVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined1 auVar22 [16];
  undefined *local_88;
  ulong uStack_80;
  undefined *local_78;
  ulong uStack_70;
  
  lVar20 = *(long *)(param_3 + 0x10);
  if (lVar20 == 0) {
LAB_10089d318:
    uVar17 = 0;
    uVar18 = 0;
LAB_10089d32c:
    auVar22._8_8_ = uVar18;
    auVar22._0_8_ = uVar17;
    return auVar22;
  }
  lVar21 = 0;
  uVar16 = param_2 >> 0x38 & 0xf;
  pbVar3 = (byte *)((param_2 & 0xfffffffffffffff) + 0x20);
LAB_10089d11c:
  puVar4 = (undefined8 *)(param_3 + 0x20 + lVar21 * 0x20);
  _Var5.unknown = (undefined *)*puVar4;
  uVar13 = puVar4[1];
  uVar17 = puVar4[2];
  uVar18 = puVar4[3];
  if ((uVar13 >> 0x3c & 1) == 0) {
    if ((uVar13 >> 0x3d & 1) == 0) {
      if (((ulong)_Var5.unknown >> 0x3c & 1) == 0) {
        uVar19 = uVar13;
        UVar10 = Swift::_StringObject::get_sharedUTF8(_Var5);
      }
      else {
        UVar10.unknown = (undefined *)((uVar13 & 0xfffffffffffffff) + 0x20);
        uVar19 = (ulong)_Var5.unknown & 0xffffffffffff;
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089d26c;
      if ((param_2 >> 0x3d & 1) != 0) {
        local_78 = param_1.unknown;
        uStack_70 = param_2 & 0xffffffffffffff;
        if (uVar19 == uVar16) {
          ppuVar14 = &local_78;
          uVar13 = uVar16;
          do {
            if (uVar13 == 0) {
              bVar12 = true;
              goto LAB_10089d10c;
            }
            bVar6 = *UVar10.unknown;
            bVar7 = *(byte *)ppuVar14;
            uVar13 = uVar13 - 1;
            ppuVar14 = (undefined **)((long)ppuVar14 + 1);
            UVar10.unknown = UVar10.unknown + 1;
          } while (((bVar7 ^ bVar6) & 0xdf) == 0);
        }
        bVar12 = false;
        goto LAB_10089d10c;
      }
      UVar11.unknown = pbVar3;
      uVar13 = (ulong)param_1.unknown & 0xffffffffffff;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar13 = param_2;
        UVar11 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if (uVar19 == uVar13) {
        if ((long)uVar19 < 0) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10089d35c);
          (*pcVar8)();
        }
        uVar13 = 0;
        do {
          if (uVar19 == uVar13) goto LAB_10089d324;
          if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10089d358);
            (*pcVar8)();
          }
          pbVar1 = UVar10.unknown + uVar13;
          pbVar2 = UVar11.unknown + uVar13;
          uVar13 = uVar13 + 1;
        } while (((*pbVar2 ^ *pbVar1) & 0xdf) == 0);
      }
      goto LAB_10089d110;
    }
    local_78 = _Var5.unknown;
    uStack_70 = uVar13 & 0xffffffffffffff;
    if ((param_2 >> 0x3c & 1) != 0) goto LAB_10089d26c;
    uVar13 = uVar13 >> 0x38 & 0xf;
    if ((param_2 >> 0x3d & 1) == 0) {
      UVar10.unknown = pbVar3;
      uVar19 = (ulong)param_1.unknown & 0xffffffffffff;
      if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
        uVar19 = param_2;
        UVar10 = Swift::_StringObject::get_sharedUTF8(param_1);
      }
      if (uVar13 == uVar19) {
        ppuVar14 = &local_78;
        do {
          if (uVar13 == 0) goto LAB_10089d258;
          bVar6 = *(byte *)ppuVar14;
          bVar7 = *UVar10.unknown;
          uVar13 = uVar13 - 1;
          UVar10.unknown = UVar10.unknown + 1;
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
        } while (((bVar7 ^ bVar6) & 0xdf) == 0);
      }
    }
    else {
      local_88 = param_1.unknown;
      uStack_80 = param_2 & 0xffffffffffffff;
      if (uVar13 == uVar16) {
        ppuVar14 = &local_78;
        ppuVar15 = &local_88;
        uVar13 = uVar16;
        do {
          if (uVar13 == 0) goto LAB_10089d258;
          bVar6 = *(byte *)ppuVar14;
          bVar7 = *(byte *)ppuVar15;
          uVar13 = uVar13 - 1;
          ppuVar14 = (undefined **)((long)ppuVar14 + 1);
          ppuVar15 = (undefined **)((long)ppuVar15 + 1);
        } while (((bVar7 ^ bVar6) & 0xdf) == 0);
      }
    }
    bVar12 = false;
    goto LAB_10089d10c;
  }
LAB_10089d26c:
  _Var9.unknown = param_1.unknown;
  FUN_10089b5c0(param_1.unknown,param_2,_Var5.unknown,uVar13);
  if (((ulong)_Var9.unknown & 1) != 0) goto LAB_10089d324;
  goto LAB_10089d110;
LAB_10089d258:
  bVar12 = true;
LAB_10089d10c:
  if (bVar12) {
LAB_10089d324:
    _swift_bridgeObjectRetain(uVar18);
    goto LAB_10089d32c;
  }
LAB_10089d110:
  lVar21 = lVar21 + 1;
  if (lVar21 == lVar20) goto LAB_10089d318;
  goto LAB_10089d11c;
}



/* Address: 0x10089d35c | FUN_10089d35c */

undefined4 FUN_10089d35c(long param_1)

{
  return *(undefined4 *)(param_1 + 0x30);
}



/* Address: 0x10089d364 | FUN_10089d364 */

undefined8 FUN_10089d364(long param_1)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  FUN_100888110(uVar1,*(undefined8 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x20));
  return uVar1;
}



/* Address: 0x10089d3a8 | FUN_10089d3a8 */

undefined8 FUN_10089d3a8(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x3c) {
    param_1 = *(undefined8 *)(&DAT_100c816c0 + param_3 * 8);
  }
  return param_1;
}



/* Address: 0x10089d3c0 | FUN_10089d3c0 */

uint FUN_10089d3c0(long param_1,undefined8 param_2,ulong param_3)

{
  if (param_3 < 0x3c) {
    return (uint)(0xffffffffffdff78 >> (param_3 & 0x3f)) & 1;
  }
  FUN_10089d3a8();
  return (uint)(param_1 - 200U < 0xffffffffffffff9c);
}



/* Address: 0x10089d404 | FUN_10089d404 */

undefined4 FUN_10089d404(long param_1)

{
  return *(undefined4 *)(param_1 + 0x28);
}



/* Address: 0x10089d40c | FUN_10089d40c */

undefined1  [16] FUN_10089d40c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char *pcVar1;
  undefined1 *puVar2;
  ulong uVar3;
  undefined1 auVar4 [16];
  
  puVar2 = &DAT_e800000000000000;
  uVar3 = 0x65756e69746e6f43;
  switch(param_3) {
  case 1:
    pcVar1 = "Switching Protocols";
    goto LAB_10089d9a0;
  case 2:
    uVar3 = 0x69737365636f7250;
    puVar2 = (undefined1 *)0xea0000000000676e;
    break;
  case 3:
    puVar2 = &SUB_e200000000000000;
    uVar3 = 0x4b4f;
    break;
  case 4:
    puVar2 = &DAT_e700000000000000;
    uVar3 = 0x64657461657243;
    break;
  case 5:
    uVar3 = 0x6465747065636341;
    break;
  case 6:
    pcVar1 = "Non-Authoritative Information";
    goto LAB_10089d8f4;
  case 7:
    puVar2 = (undefined1 *)0xea0000000000746e;
    uVar3 = 0x65746e6f43206f4e;
    break;
  case 8:
    puVar2 = (undefined1 *)0xed0000746e65746e;
    uVar3 = 0x6f43207465736552;
    break;
  case 9:
    puVar2 = (undefined1 *)0xef746e65746e6f43;
    uVar3 = 0x206c616974726150;
    break;
  case 10:
    puVar2 = (undefined1 *)0xec00000073757461;
    uVar3 = 0x74532d69746c754d;
    break;
  case 0xb:
    pcVar1 = "Already Reported";
    goto LAB_10089d8e0;
  case 0xc:
    puVar2 = &DAT_e700000000000000;
    uVar3 = 0x64657355204d49;
    break;
  case 0xd:
    pcVar1 = "Multiple Choices";
    goto LAB_10089d8e0;
  case 0xe:
    pcVar1 = "Moved Permanently";
    goto LAB_10089d9c0;
  case 0xf:
    puVar2 = &DAT_e500000000000000;
    uVar3 = 0x646e756f46;
    break;
  case 0x10:
    puVar2 = (undefined1 *)0xe900000000000072;
    uVar3 = 0x6568744f20656553;
    break;
  case 0x11:
    puVar2 = (undefined1 *)0xec00000064656966;
    uVar3 = 0x69646f4d20746f4e;
    break;
  case 0x12:
    puVar2 = (undefined1 *)0xe900000000000079;
    uVar3 = 0x786f725020657355;
    break;
  case 0x13:
    pcVar1 = "Temporary Redirect";
    goto LAB_10089d93c;
  case 0x14:
    pcVar1 = "Permanent Redirect";
    goto LAB_10089d93c;
  case 0x15:
    puVar2 = (undefined1 *)0xeb00000000747365;
    uVar3 = 0x7571655220646142;
    break;
  case 0x16:
    puVar2 = (undefined1 *)0xec00000064657a69;
    uVar3 = 0x726f687475616e55;
    break;
  case 0x17:
    pcVar1 = "Payment Required";
    goto LAB_10089d8e0;
  case 0x18:
    puVar2 = (undefined1 *)0xe90000000000006e;
    uVar3 = 0x6564646962726f46;
    break;
  case 0x19:
    uVar3 = 0x6e756f4620746f4e;
    puVar2 = (undefined1 *)0xe900000000000064;
    break;
  case 0x1a:
    pcVar1 = "Method Not Allowed";
    goto LAB_10089d93c;
  case 0x1b:
    puVar2 = (undefined1 *)0xee00656c62617470;
    uVar3 = 0x6563634120746f4e;
    break;
  case 0x1c:
    pcVar1 = "Proxy Authentication Required";
    goto LAB_10089d8f4;
  case 0x1d:
    uVar3 = 0x2074736575716552;
    goto LAB_10089d914;
  case 0x1e:
    uVar3 = 0x7463696c666e6f43;
    break;
  case 0x1f:
    puVar2 = &DAT_e400000000000000;
    uVar3 = 0x656e6f47;
    break;
  case 0x20:
    puVar2 = (undefined1 *)0xef64657269757165;
    uVar3 = 0x52206874676e654c;
    break;
  case 0x21:
    pcVar1 = "Precondition Failed";
    goto LAB_10089d9a0;
  case 0x22:
    pcVar1 = "Payload Too Large";
    goto LAB_10089d9c0;
  case 0x23:
    puVar2 = (undefined1 *)0xec000000676e6f4c;
    uVar3 = 0x206f6f5420495255;
    break;
  case 0x24:
    puVar2 = (undefined1 *)0x8000000100db2870;
    uVar3 = 0xd000000000000016;
    break;
  case 0x25:
    pcVar1 = "Range Not Satisfiable";
    goto LAB_10089d81c;
  case 0x26:
    pcVar1 = "Expectation Failed";
LAB_10089d93c:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd000000000000012;
    break;
  case 0x27:
    puVar2 = (undefined1 *)0xec000000746f7061;
    uVar3 = 0x65742061206d2749;
    break;
  case 0x28:
    pcVar1 = "Misdirected Request";
    goto LAB_10089d9a0;
  case 0x29:
    pcVar1 = "Unprocessable Entity";
    goto LAB_10089d700;
  case 0x2a:
    puVar2 = &DAT_e600000000000000;
    uVar3 = 0x64656b636f4c;
    break;
  case 0x2b:
    pcVar1 = "Failed Dependency";
    goto LAB_10089d9c0;
  case 0x2c:
    pcVar1 = "Upgrade Required";
LAB_10089d8e0:
    uVar3 = 0xd000000000000010;
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    break;
  case 0x2d:
    pcVar1 = "Precondition Required";
    goto LAB_10089d81c;
  case 0x2e:
    pcVar1 = "Too Many Requests";
LAB_10089d9c0:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd000000000000011;
    break;
  case 0x2f:
    pcVar1 = "Request Header Fields Too Large";
    goto LAB_10089d8b8;
  case 0x30:
    pcVar1 = "Unavailable For Legal Reasons";
LAB_10089d8f4:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd;
LAB_10089d968:
    uVar3 = uVar3 | 0xd000000000000010;
    break;
  case 0x31:
    pcVar1 = "Internal Server Error";
LAB_10089d81c:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 5;
    goto LAB_10089d968;
  case 0x32:
    puVar2 = (undefined1 *)0xef6465746e656d65;
    uVar3 = 0x6c706d4920746f4e;
    break;
  case 0x33:
    puVar2 = (undefined1 *)0xeb00000000796177;
    uVar3 = 0x6574614720646142;
    break;
  case 0x34:
    pcVar1 = "Service Unavailable";
LAB_10089d9a0:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd000000000000013;
    break;
  case 0x35:
    uVar3 = 0x2079617765746147;
LAB_10089d914:
    puVar2 = (undefined1 *)0xef74756f656d6954;
    break;
  case 0x36:
    puVar2 = (undefined1 *)0x8000000100db2990;
    uVar3 = 10;
    goto LAB_10089d968;
  case 0x37:
    puVar2 = (undefined1 *)0x8000000100db3f20;
    uVar3 = 0xd000000000000017;
    break;
  case 0x38:
    pcVar1 = "Insufficient Storage";
LAB_10089d700:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd000000000000014;
    break;
  case 0x39:
    puVar2 = (undefined1 *)0xed00006465746365;
    uVar3 = 0x74654420706f6f4c;
    break;
  case 0x3a:
    uVar3 = 0x6574784520746f4e;
    puVar2 = (undefined1 *)0xec0000006465646e;
    break;
  case 0x3b:
    pcVar1 = "Network Authentication Required";
LAB_10089d8b8:
    puVar2 = (undefined1 *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
    uVar3 = 0xd00000000000001f;
  }
  FUN_100888110();
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = uVar3;
  return auVar4;
}



/* Address: 0x10089da18 | FUN_10089da18 */

ulong FUN_10089da18(_StringObject param_1,ulong param_2,byte *param_3,ulong param_4)

{
  byte bVar1;
  byte bVar2;
  ulong uVar3;
  UnsafeBufferPointer<__int8> UVar4;
  undefined **ppuVar5;
  undefined *local_20;
  ulong uStack_18;
  
  if ((param_2 >> 0x3c & 1) != 0) {
    return 2;
  }
  if ((param_2 >> 0x3d & 1) == 0) {
    if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
      UVar4 = Swift::_StringObject::get_sharedUTF8(param_1);
    }
    else {
      UVar4.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
    }
    FUN_10087b2e8(&local_20,UVar4.unknown);
    uVar3 = (ulong)local_20 & 0xff;
  }
  else {
    local_20 = param_1.unknown;
    uStack_18 = param_2 & 0xffffffffffffff;
    if (param_4 == (param_2 >> 0x38 & 0xf)) {
      ppuVar5 = &local_20;
      do {
        if (param_4 == 0) {
          return 1;
        }
        bVar1 = *param_3;
        bVar2 = *(byte *)ppuVar5;
        param_4 = param_4 - 1;
        param_3 = param_3 + 1;
        ppuVar5 = (undefined **)((long)ppuVar5 + 1);
      } while (((bVar2 ^ bVar1) & 0xdf) == 0);
    }
    uVar3 = 0;
  }
  return uVar3;
}



/* Address: 0x10089dac4 | FUN_10089dac4 */

void FUN_10089dac4(long param_1)

{
  FUN_10089ee6c(*(undefined4 *)(param_1 + 0x28));
  return;
}



/* Address: 0x10089dacc | FUN_10089dacc */

undefined8 FUN_10089dacc(void)

{
  return 0x10001;
}



/* Address: 0x10089dad4 | FUN_10089dad4 */

undefined * FUN_10089dad4(char *param_1,void *param_2)

{
  undefined *puVar1;
  String *pSVar2;
  undefined8 *puVar3;
  ulong uVar4;
  UTF8View UVar5;
  void *pvVar6;
  ulong uVar7;
  code *pcVar8;
  bool bVar9;
  __uint8 _Var10;
  char *pcVar11;
  Substring SVar12;
  undefined *puVar13;
  undefined *puVar14;
  Index IVar15;
  UnsafeBufferPointer<__int8> UVar16;
  undefined *puVar17;
  undefined *puVar18;
  ulong uVar22;
  uint uVar23;
  char *pcVar24;
  ulong uVar25;
  long lVar26;
  UTF8View UVar27;
  ulong uVar28;
  ulong uVar29;
  ulong *puVar30;
  ulong uVar31;
  ulong uVar32;
  char *pcVar33;
  ulong uVar34;
  Index IVar35;
  ulong uVar36;
  Index IVar37;
  String SVar38;
  Character CVar39;
  String SVar40;
  String SVar41;
  String SVar42;
  undefined *local_78;
  ulong uStack_70;
  undefined *local_68;
  _StringGuts _Var19;
  void *pvVar20;
  char *pcVar21;
  
  pcVar11 = param_1;
  FUN_10089cd18();
  lVar26 = *(long *)(pcVar11 + 0x10);
  if (lVar26 == 0) {
    _swift_bridgeObjectRelease();
    puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    SVar38.bridgeObject = param_2;
    SVar38.str = param_1;
    SVar38 = Swift::String::lowercased(SVar38);
    _Var19.unknown = SVar38.bridgeObject;
    if ((SVar38.str == (undefined *)0x6b6f6f632d746573) &&
       (_Var19.unknown == (undefined *)0xea00000000006569)) {
      _swift_bridgeObjectRelease(0xea00000000006569);
    }
    else {
      bVar9 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)SVar38.str,_Var19,(_StringComparisonResult)0x73);
      _swift_bridgeObjectRelease(_Var19.unknown);
      if (!bVar9) {
        uVar22 = *(ulong *)(pcVar11 + 0x10);
        puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
        if (uVar22 == 0) {
LAB_10089e45c:
          _swift_bridgeObjectRelease();
          return puVar13;
        }
        uVar25 = 0;
        puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_10089dcf4:
        if (*(ulong *)(pcVar11 + 0x10) <= uVar25) {
                    /* WARNING: Does not return */
          pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e490);
          (*pcVar8)();
        }
        pSVar2 = (String *)(pcVar11 + uVar25 * 0x10 + 0x20);
        pcVar33 = pSVar2->str;
        pvVar6 = pSVar2->bridgeObject;
        SVar40 = *pSVar2;
        SVar42 = *pSVar2;
        SVar38 = *pSVar2;
        uVar31 = (ulong)pcVar33 & 0xffffffffffff;
        if (((ulong)pvVar6 & 0x2000000000000000) != 0) {
          uVar31 = (ulong)pvVar6 >> 0x38 & 0xf;
        }
        if (uVar31 == 0) {
          _swift_bridgeObjectRetain(pvVar6);
          uVar31 = *(ulong *)(puVar18 + 0x10);
          puVar14 = puVar18;
        }
        else {
          uVar23 = (uint)((ulong)pcVar33 >> 0x3b) & 1;
          if (((ulong)pvVar6 & 0x1000000000000000) == 0) {
            uVar23 = 1;
          }
          uVar34 = 7;
          if (uVar23 == 0) {
            uVar34 = 0xb;
          }
          pcVar24 = (char *)(uVar34 | uVar31 << 0x10);
          uVar31 = uVar31 * 4;
          _swift_bridgeObjectRetain_n(pvVar6,2);
          uVar34 = 0;
          IVar35.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
          IVar37.cmsgPointer.unknown = IVar35.cmsgPointer.unknown;
          do {
            while( true ) {
              CVar39 = Swift::String::get_subscript(IVar35,SVar42);
              _Var19.unknown = CVar39.bridgeObject;
              if ((CVar39.str != (undefined *)0x2c) ||
                 (_Var19.unknown != (undefined *)0xe100000000000000)) break;
              _swift_bridgeObjectRelease(0xe100000000000000);
LAB_10089de1c:
              if ((ulong)IVar37.cmsgPointer.unknown >> 0xe != uVar34) {
                if (uVar34 < (ulong)IVar37.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e49c);
                  (*pcVar8)();
                }
                SVar41.bridgeObject = pcVar33;
                SVar41.str = (char *)IVar35.cmsgPointer.unknown;
                IVar15.cmsgPointer.unknown = IVar35.cmsgPointer.unknown;
                pcVar21 = pcVar33;
                pvVar20 = pvVar6;
                SVar12 = Swift::String::get_subscript
                                   ((Range<Index>)IVar37.cmsgPointer.unknown,SVar41);
                puVar14 = puVar18;
                _swift_isUniquelyReferenced_nonNull_native();
                puVar17 = puVar18;
                if (((ulong)puVar14 & 1) == 0) {
                  puVar17 = (undefined *)0x0;
                  FUN_100880980(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
                }
                uVar34 = *(ulong *)(puVar17 + 0x10);
                puVar18 = puVar17;
                if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar34) {
                  puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
                  FUN_100880980(puVar18,uVar34 + 1,1,puVar17);
                }
                *(ulong *)(puVar18 + 0x10) = uVar34 + 1;
                *(undefined **)(puVar18 + uVar34 * 0x20 + 0x20) = SVar12.unknown;
                *(UnsafeMutablePointer *)(puVar18 + uVar34 * 0x20 + 0x28) =
                     IVar15.cmsgPointer.unknown;
                *(char **)(puVar18 + uVar34 * 0x20 + 0x30) = pcVar21;
                *(void **)(puVar18 + uVar34 * 0x20 + 0x38) = pvVar20;
              }
              IVar35 = Swift::String::index(IVar35,SVar38);
              uVar34 = (ulong)IVar35.cmsgPointer.unknown >> 0xe;
              IVar37 = IVar35;
              if (uVar34 == uVar31) goto LAB_10089deb4;
            }
            bVar9 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)CVar39.str,_Var19,(_StringComparisonResult)0x2c);
            _swift_bridgeObjectRelease(_Var19.unknown);
            if (bVar9) goto LAB_10089de1c;
            IVar35 = Swift::String::index(IVar35,SVar40);
            uVar34 = (ulong)IVar35.cmsgPointer.unknown >> 0xe;
          } while (uVar34 != uVar31);
          uVar34 = (ulong)IVar37.cmsgPointer.unknown >> 0xe;
          IVar35.cmsgPointer.unknown = IVar37.cmsgPointer.unknown;
LAB_10089deb4:
          if (uVar34 == uVar31) {
            _swift_bridgeObjectRelease(pvVar6);
            uVar31 = *(ulong *)(puVar18 + 0x10);
            puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
          else {
            if (uVar31 < uVar34) {
                    /* WARNING: Does not return */
              pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e4a4);
              (*pcVar8)();
            }
            SVar42.bridgeObject = pcVar33;
            SVar42.str = pcVar24;
            pvVar20 = pvVar6;
            SVar12 = Swift::String::get_subscript((Range<Index>)IVar35.cmsgPointer.unknown,SVar42);
            _swift_bridgeObjectRelease(pvVar6);
            puVar14 = puVar18;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar17 = puVar18;
            if (((ulong)puVar14 & 1) == 0) {
              puVar17 = (undefined *)0x0;
              FUN_100880980(0,*(long *)(puVar18 + 0x10) + 1,1,puVar18);
            }
            uVar31 = *(ulong *)(puVar17 + 0x10);
            puVar18 = puVar17;
            if (*(ulong *)(puVar17 + 0x18) >> 1 <= uVar31) {
              puVar18 = (undefined *)(ulong)(1 < *(ulong *)(puVar17 + 0x18));
              FUN_100880980(puVar18,uVar31 + 1,1,puVar17);
            }
            *(ulong *)(puVar18 + 0x10) = uVar31 + 1;
            *(undefined **)(puVar18 + uVar31 * 0x20 + 0x20) = SVar12.unknown;
            *(char **)(puVar18 + uVar31 * 0x20 + 0x28) = pcVar24;
            *(char **)(puVar18 + uVar31 * 0x20 + 0x30) = pcVar33;
            *(void **)(puVar18 + uVar31 * 0x20 + 0x38) = pvVar20;
            uVar31 = *(ulong *)(puVar18 + 0x10);
            puVar14 = PTR___swiftEmptyArrayStorage_100eae0d8;
          }
        }
        if (uVar31 != 0) {
          local_68 = puVar14;
          FUN_1008926cc(0,uVar31,0);
          uVar34 = 0;
LAB_10089df20:
          puVar14 = local_68;
          if (*(ulong *)(puVar18 + 0x10) <= uVar34) {
                    /* WARNING: Does not return */
            pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e488);
            (*pcVar8)();
          }
          puVar3 = (undefined8 *)(puVar18 + uVar34 * 0x20 + 0x20);
          UVar5.unknown = (undefined *)*puVar3;
          puVar17 = (undefined *)puVar3[1];
          uVar36 = (ulong)puVar17 >> 0xe;
          uVar32 = (ulong)UVar5.unknown >> 0xe;
          if (uVar32 == uVar36) {
            UVar27.unknown = (undefined *)0x0;
            uVar32 = 0xe000000000000000;
            SVar12.unknown = (undefined *)0xf;
            IVar37.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x7;
          }
          else {
            UVar27.unknown = (undefined *)puVar3[2];
            uVar7 = puVar3[3];
            uVar23 = (uint)((ulong)UVar27.unknown >> 0x3b) & 1;
            if ((uVar7 & 0x1000000000000000) == 0) {
              uVar23 = 1;
            }
            uVar29 = 4L << uVar23;
            puVar1 = (undefined *)((uVar7 & 0xfffffffffffffff) + 0x20);
            uVar28 = uVar32;
            IVar35.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)UVar5.unknown;
            uVar4 = (ulong)UVar27.unknown & 0xffffffffffff;
            if ((uVar7 & 0x2000000000000000) != 0) {
              uVar4 = uVar7 >> 0x38 & 0xf;
            }
            do {
              IVar37.cmsgPointer.unknown = IVar35.cmsgPointer.unknown;
              if (((ulong)IVar35.cmsgPointer.unknown & 0xc) == uVar29) {
                FUN_1000740a8(IVar35.cmsgPointer.unknown,UVar27.unknown,uVar7);
              }
              if (((ulong)IVar37.cmsgPointer.unknown >> 0xe < uVar32) ||
                 (uVar36 <= (ulong)IVar37.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
                pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e470);
                (*pcVar8)();
              }
              if ((uVar7 >> 0x3c & 1) == 0) {
                if ((uVar7 >> 0x3d & 1) == 0) {
                  UVar16.unknown = puVar1;
                  if (((ulong)UVar27.unknown >> 0x3c & 1) == 0) {
                    UVar16 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar27.unknown);
                  }
                  _Var10 = UVar16.unknown[(ulong)IVar37.cmsgPointer.unknown >> 0x10];
                }
                else {
                  local_78 = UVar27.unknown;
                  uStack_70 = uVar7 & 0xffffffffffffff;
                  _Var10 = *(__uint8 *)
                            ((long)&local_78 + ((ulong)IVar37.cmsgPointer.unknown >> 0x10));
                }
              }
              else {
                _Var10 = Swift::String::UTF8View::_foreignSubscript(IVar37,UVar27);
              }
              if ((_Var10 != 9) &&
                 (IVar37.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)puVar17,
                 _Var10 != 0x20)) goto LAB_10089e0c8;
              if (((ulong)IVar35.cmsgPointer.unknown & 0xc) == uVar29) {
                FUN_1000740a8(IVar35.cmsgPointer.unknown,UVar27.unknown,uVar7);
                if ((uVar7 >> 0x3c & 1) != 0) goto LAB_10089e044;
LAB_10089dfa8:
                IVar35.cmsgPointer.unknown =
                     (UnsafeMutablePointer)
                     (((ulong)IVar35.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004);
              }
              else {
                if ((uVar7 >> 0x3c & 1) == 0) goto LAB_10089dfa8;
LAB_10089e044:
                if (uVar4 <= (ulong)IVar35.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
                  pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e480);
                  (*pcVar8)();
                }
                IVar35 = Swift::String::UTF8View::_foreignIndex(IVar35,UVar27);
              }
              uVar28 = (ulong)IVar35.cmsgPointer.unknown >> 0xe;
            } while ((ulong)IVar35.cmsgPointer.unknown >> 0xe != uVar36);
            UVar27.unknown = (undefined *)0x0;
            uVar32 = 0xe000000000000000;
            SVar12.unknown = (undefined *)0xf;
            IVar37.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0x7;
          }
          goto LAB_10089e254;
        }
        _swift_bridgeObjectRelease(pvVar6);
        _swift_bridgeObjectRelease(puVar18);
        goto LAB_10089e358;
      }
    }
    local_78 = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_1008926cc(0,lVar26,0);
    puVar30 = (ulong *)(pcVar11 + 0x28);
    do {
      puVar13 = local_78;
      pvVar20 = (void *)puVar30[-1];
      uVar22 = *puVar30;
      pvVar6 = pvVar20;
      if ((uVar22 & 0x2000000000000000) != 0) {
        pvVar6 = (void *)(uVar22 >> 0x38 & 0xf);
      }
      uVar23 = (uint)((ulong)pvVar20 >> 0x3b) & 1;
      if ((uVar22 & 0x1000000000000000) == 0) {
        uVar23 = 1;
      }
      uVar25 = 7;
      if (uVar23 == 0) {
        uVar25 = 0xb;
      }
      pcVar33 = (char *)(uVar25 | (long)pvVar6 << 0x10);
      _swift_bridgeObjectRetain(uVar22);
      SVar40.bridgeObject = pvVar20;
      SVar40.str = pcVar33;
      uVar25 = uVar22;
      SVar12 = Swift::String::get_subscript((Range<Index>)0xf,SVar40);
      _swift_bridgeObjectRelease(uVar22);
      uVar22 = *(ulong *)(puVar13 + 0x10);
      local_78 = puVar13;
      if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar22) {
        FUN_1008926cc(1 < *(ulong *)(puVar13 + 0x18),uVar22 + 1,1);
      }
      puVar13 = local_78;
      puVar30 = puVar30 + 2;
      *(ulong *)(local_78 + 0x10) = uVar22 + 1;
      *(undefined **)(local_78 + uVar22 * 0x20 + 0x20) = SVar12.unknown;
      *(char **)(local_78 + uVar22 * 0x20 + 0x28) = pcVar33;
      *(void **)(local_78 + uVar22 * 0x20 + 0x30) = pvVar20;
      *(ulong *)(local_78 + uVar22 * 0x20 + 0x38) = uVar25;
      lVar26 = lVar26 + -1;
    } while (lVar26 != 0);
    _swift_bridgeObjectRelease(pcVar11);
  }
  return puVar13;
LAB_10089e0c8:
  while( true ) {
    if (((ulong)IVar37.cmsgPointer.unknown & 0xc) == uVar29) {
      FUN_1000740a8(IVar37.cmsgPointer.unknown,UVar27.unknown,uVar7);
    }
    if ((ulong)IVar37.cmsgPointer.unknown < (undefined *)0x4000) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e474);
      (*pcVar8)();
    }
    if ((uVar7 >> 0x3c & 1) == 0) {
      IVar37.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)IVar37.cmsgPointer.unknown & 0xffffffffffff0000) - 0xfffc)
      ;
    }
    else {
      if (uVar4 < (ulong)IVar37.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e484);
        (*pcVar8)();
      }
      IVar37 = Swift::String::UTF8View::_foreignIndex(IVar37,UVar27);
    }
    IVar15.cmsgPointer.unknown = IVar37.cmsgPointer.unknown;
    if (((ulong)IVar37.cmsgPointer.unknown & 0xc) == uVar29) {
      FUN_1000740a8(IVar37.cmsgPointer.unknown,UVar27.unknown,uVar7);
    }
    if (((ulong)IVar15.cmsgPointer.unknown >> 0xe < uVar32) ||
       (uVar36 <= (ulong)IVar15.cmsgPointer.unknown >> 0xe)) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e478);
      (*pcVar8)();
    }
    if ((uVar7 >> 0x3c & 1) == 0) {
      if ((uVar7 >> 0x3d & 1) == 0) {
        UVar16.unknown = puVar1;
        if (((ulong)UVar27.unknown >> 0x3c & 1) == 0) {
          UVar16 = Swift::_StringObject::get_sharedUTF8((_StringObject)UVar27.unknown);
        }
        _Var10 = UVar16.unknown[(ulong)IVar15.cmsgPointer.unknown >> 0x10];
      }
      else {
        local_78 = UVar27.unknown;
        uStack_70 = uVar7 & 0xffffffffffffff;
        _Var10 = *(__uint8 *)((long)&local_78 + ((ulong)IVar15.cmsgPointer.unknown >> 0x10));
      }
    }
    else {
      _Var10 = Swift::String::UTF8View::_foreignSubscript(IVar15,UVar27);
    }
    if ((_Var10 != 0x20) && (_Var10 != 9)) break;
    if (uVar32 == (ulong)IVar37.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e47c);
      (*pcVar8)();
    }
  }
  if ((ulong)IVar37.cmsgPointer.unknown >> 0xe < uVar28) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e48c);
    (*pcVar8)();
  }
  _swift_bridgeObjectRetain_n(uVar7,2);
  IVar37 = Swift::Substring::UTF8View::index(IVar37,UVar5);
  FUN_100615c04(IVar35.cmsgPointer.unknown,IVar37.cmsgPointer.unknown,UVar5.unknown,puVar17,
                UVar27.unknown,uVar7);
  uVar32 = uVar7;
  SVar12 = Swift::Substring::init((UTF8View)IVar35.cmsgPointer.unknown);
  _swift_bridgeObjectRelease(uVar7);
LAB_10089e254:
  local_68 = puVar14;
  uVar36 = *(ulong *)(puVar14 + 0x10);
  if (*(ulong *)(puVar14 + 0x18) >> 1 <= uVar36) {
    FUN_1008926cc(1 < *(ulong *)(puVar14 + 0x18),uVar36 + 1,1);
  }
  puVar14 = local_68;
  uVar34 = uVar34 + 1;
  *(ulong *)(local_68 + 0x10) = uVar36 + 1;
  *(undefined **)(local_68 + uVar36 * 0x20 + 0x20) = SVar12.unknown;
  *(UnsafeMutablePointer *)(local_68 + uVar36 * 0x20 + 0x28) = IVar37.cmsgPointer.unknown;
  *(undefined **)(local_68 + uVar36 * 0x20 + 0x30) = UVar27.unknown;
  *(ulong *)(local_68 + uVar36 * 0x20 + 0x38) = uVar32;
  if (uVar34 == uVar31) goto LAB_10089e2bc;
  goto LAB_10089df20;
LAB_10089e2bc:
  _swift_bridgeObjectRelease(pvVar6);
  _swift_bridgeObjectRelease(puVar18);
LAB_10089e358:
  uVar31 = *(ulong *)(puVar14 + 0x10);
  lVar26 = *(long *)(puVar13 + 0x10);
  if (SCARRY8(lVar26,uVar31)) {
                    /* WARNING: Does not return */
    pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e494);
    (*pcVar8)();
  }
  puVar18 = puVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)puVar18 == 0) ||
     (uVar34 = *(ulong *)(puVar13 + 0x18) >> 1, (long)uVar34 < (long)(lVar26 + uVar31))) {
    FUN_100880980();
    uVar34 = *(ulong *)(puVar18 + 0x18) >> 1;
    lVar26 = *(long *)(puVar14 + 0x10);
    puVar13 = puVar18;
  }
  else {
    lVar26 = *(long *)(puVar14 + 0x10);
  }
  if (lVar26 == 0) {
    _swift_bridgeObjectRelease(puVar14);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar31 != 0) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e498);
      (*pcVar8)();
    }
  }
  else {
    if (uVar34 - *(long *)(puVar13 + 0x10) < uVar31) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e4a0);
      (*pcVar8)();
    }
    _swift_arrayInitWithCopy
              (puVar13 + *(long *)(puVar13 + 0x10) * 0x20 + 0x20,puVar14 + 0x20,uVar31,
               PTR___type_metadata_for_Swift_Substring_100eaca98);
    _swift_bridgeObjectRelease(puVar14);
    puVar18 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (uVar31 != 0) {
      if (SCARRY8(*(long *)(puVar13 + 0x10),uVar31)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10089e4a8);
        (*pcVar8)();
      }
      *(ulong *)(puVar13 + 0x10) = *(long *)(puVar13 + 0x10) + uVar31;
    }
  }
  uVar25 = uVar25 + 1;
  if (uVar25 == uVar22) goto LAB_10089e45c;
  goto LAB_10089dcf4;
}



/* Address: 0x10089e4a8 | FUN_10089e4a8 */

void FUN_10089e4a8(void)

{
  long unaff_x20;
  
  FUN_10087b1c4(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10089e4d4 | FUN_10089e4d4 */

void FUN_10089e4d4(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return;
}



/* Address: 0x10089e4fc | FUN_10089e4fc */

void FUN_10089e4fc(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 8));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined1 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x10089e534 | FUN_10089e534 */

void FUN_10089e534(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = *unaff_x20;
  uVar1 = *(undefined8 *)(uVar8 + 0x10);
  uVar3 = *(undefined8 *)(uVar8 + 0x18);
  uVar7 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar2 = *(undefined8 *)(uVar8 + 0x20);
    uVar4 = *(undefined8 *)(uVar8 + 0x28);
    uVar5 = *(undefined4 *)(uVar8 + 0x30);
    uVar7 = 0;
    FUN_10089bc80();
    _swift_allocObject();
    *(undefined8 *)(uVar7 + 0x10) = uVar1;
    *(undefined8 *)(uVar7 + 0x18) = uVar3;
    *(undefined8 *)(uVar7 + 0x20) = uVar2;
    *(undefined8 *)(uVar7 + 0x28) = uVar4;
    *(undefined4 *)(uVar7 + 0x30) = uVar5;
    FUN_100881fec(uVar1,uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(uVar8);
    *unaff_x20 = uVar7;
  }
  *(undefined8 *)(uVar7 + 0x10) = param_1;
  *(undefined8 *)(uVar7 + 0x18) = param_2;
  FUN_10087b1c4(uVar1,uVar3);
  return;
}



/* Address: 0x10089e5e4 | FUN_10089e5e4 */

undefined1  [16] FUN_10089e5e4(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x18);
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x10);
  param_1[1] = uVar1;
  FUN_100881fec();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10089e620;
  return auVar2;
}



/* Address: 0x10089e620 | FUN_10089e620 */

void FUN_10089e620(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  ulong uVar11;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  puVar8 = (ulong *)param_1[2];
  if ((param_2 & 1) == 0) {
    uVar6 = *puVar8;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar11 = *puVar8;
    uVar10 = *(undefined8 *)(uVar11 + 0x10);
    uVar9 = *(undefined8 *)(uVar11 + 0x18);
    uVar7 = uVar11;
    if ((uVar6 & 1) == 0) {
      uVar2 = *(undefined8 *)(uVar11 + 0x20);
      uVar4 = *(undefined8 *)(uVar11 + 0x28);
      uVar5 = *(undefined4 *)(uVar11 + 0x30);
      uVar7 = 0;
      FUN_10089bc80();
      _swift_allocObject();
      *(undefined8 *)(uVar7 + 0x10) = uVar10;
      *(undefined8 *)(uVar7 + 0x18) = uVar9;
      *(undefined8 *)(uVar7 + 0x20) = uVar2;
      *(undefined8 *)(uVar7 + 0x28) = uVar4;
      *(undefined4 *)(uVar7 + 0x30) = uVar5;
      FUN_100881fec(uVar10,uVar9);
      _swift_bridgeObjectRetain(uVar4);
      _swift_release(uVar11);
      *puVar8 = uVar7;
    }
    *(undefined8 *)(uVar7 + 0x10) = uVar1;
    *(undefined8 *)(uVar7 + 0x18) = uVar3;
  }
  else {
    FUN_100881fec(uVar1,uVar3);
    FUN_10089e534(uVar1,uVar3);
    uVar9 = uVar3;
    uVar10 = uVar1;
  }
  FUN_10087b1c4(uVar10,uVar9);
  return;
}



/* Address: 0x10089e6f8 | FUN_10089e6f8 */

void FUN_10089e6f8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  int iVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  
  iVar5 = (int)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  lVar7 = *unaff_x20;
  if (iVar5 == 0) {
    uVar1 = *(undefined8 *)(lVar7 + 0x10);
    uVar3 = *(undefined8 *)(lVar7 + 0x18);
    uVar2 = *(undefined8 *)(lVar7 + 0x20);
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    uVar4 = *(undefined4 *)(lVar7 + 0x30);
    lVar6 = 0;
    FUN_10089bc80();
    _swift_allocObject();
    *(undefined8 *)(lVar6 + 0x10) = uVar1;
    *(undefined8 *)(lVar6 + 0x18) = uVar3;
    *(undefined8 *)(lVar6 + 0x20) = uVar2;
    *(undefined8 *)(lVar6 + 0x28) = uVar8;
    *(undefined4 *)(lVar6 + 0x30) = uVar4;
    FUN_100881fec(uVar1,uVar3);
    _swift_bridgeObjectRetain(uVar8);
    _swift_release(lVar7);
    *unaff_x20 = lVar6;
  }
  else {
    uVar8 = *(undefined8 *)(lVar7 + 0x28);
    lVar6 = lVar7;
  }
  *(undefined8 *)(lVar6 + 0x20) = param_1;
  *(undefined8 *)(lVar6 + 0x28) = param_2;
  _swift_bridgeObjectRelease(uVar8);
  return;
}



/* Address: 0x10089e7ac | FUN_10089e7ac */

undefined1  [16] FUN_10089e7ac(undefined8 *param_1)

{
  undefined8 uVar1;
  long *unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[2] = unaff_x20;
  uVar1 = *(undefined8 *)(*unaff_x20 + 0x28);
  *param_1 = *(undefined8 *)(*unaff_x20 + 0x20);
  param_1[1] = uVar1;
  _swift_bridgeObjectRetain();
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_10089e7ec;
  return auVar2;
}



/* Address: 0x10089e7ec | FUN_10089e7ec */

void FUN_10089e7ec(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  int iVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined8 uVar11;
  
  uVar1 = *param_1;
  uVar4 = param_1[1];
  plVar9 = (long *)param_1[2];
  if ((param_2 & 1) == 0) {
    iVar7 = (int)*plVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    lVar10 = *plVar9;
    if (iVar7 == 0) {
      uVar2 = *(undefined8 *)(lVar10 + 0x10);
      uVar5 = *(undefined8 *)(lVar10 + 0x18);
      uVar3 = *(undefined8 *)(lVar10 + 0x20);
      uVar11 = *(undefined8 *)(lVar10 + 0x28);
      uVar6 = *(undefined4 *)(lVar10 + 0x30);
      lVar8 = 0;
      FUN_10089bc80();
      _swift_allocObject();
      *(undefined8 *)(lVar8 + 0x10) = uVar2;
      *(undefined8 *)(lVar8 + 0x18) = uVar5;
      *(undefined8 *)(lVar8 + 0x20) = uVar3;
      *(undefined8 *)(lVar8 + 0x28) = uVar11;
      *(undefined4 *)(lVar8 + 0x30) = uVar6;
      FUN_100881fec(uVar2,uVar5);
      _swift_bridgeObjectRetain(uVar11);
      _swift_release(lVar10);
      *plVar9 = lVar8;
    }
    else {
      uVar11 = *(undefined8 *)(lVar10 + 0x28);
      lVar8 = lVar10;
    }
    *(undefined8 *)(lVar8 + 0x20) = uVar1;
    *(undefined8 *)(lVar8 + 0x28) = uVar4;
  }
  else {
    _swift_bridgeObjectRetain(uVar4);
    FUN_10089e6f8(uVar1,uVar4);
    uVar11 = uVar4;
  }
  _swift_bridgeObjectRelease(uVar11);
  return;
}



/* Address: 0x10089e8c0 | FUN_10089e8c0 */

void FUN_10089e8c0(undefined4 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong *unaff_x20;
  ulong uVar8;
  
  uVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = *unaff_x20;
  uVar7 = uVar8;
  if ((uVar6 & 1) == 0) {
    uVar1 = *(undefined8 *)(uVar8 + 0x10);
    uVar3 = *(undefined8 *)(uVar8 + 0x18);
    uVar2 = *(undefined8 *)(uVar8 + 0x20);
    uVar4 = *(undefined8 *)(uVar8 + 0x28);
    uVar5 = *(undefined4 *)(uVar8 + 0x30);
    uVar7 = 0;
    FUN_10089bc80();
    _swift_allocObject();
    *(undefined8 *)(uVar7 + 0x10) = uVar1;
    *(undefined8 *)(uVar7 + 0x18) = uVar3;
    *(undefined8 *)(uVar7 + 0x20) = uVar2;
    *(undefined8 *)(uVar7 + 0x28) = uVar4;
    *(undefined4 *)(uVar7 + 0x30) = uVar5;
    FUN_100881fec(uVar1,uVar3);
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(uVar8);
    *unaff_x20 = uVar7;
  }
  *(undefined4 *)(uVar7 + 0x30) = param_1;
  return;
}


