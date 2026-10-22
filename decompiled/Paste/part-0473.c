/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10059b1e0 | FUN_10059b1e0 */

String FUN_10059b1e0(void)

{
  String SVar1;
  
  FUN_10059f024();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x10059b208 | FUN_10059b208 */

void FUN_10059b208(undefined8 *param_1)

{
  long unaff_x21;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  undefined7 local_37;
  undefined1 uStack_30;
  undefined8 uStack_2f;
  
  FUN_10059ee74(&local_70);
  if (unaff_x21 == 0) {
    param_1[5] = uStack_48;
    param_1[4] = local_50;
    param_1[7] = CONCAT71(local_37,uStack_38);
    param_1[6] = uStack_40;
    *(undefined8 *)((long)param_1 + 0x41) = uStack_2f;
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(uStack_30,local_37);
    param_1[1] = uStack_68;
    *param_1 = local_70;
    param_1[3] = uStack_58;
    param_1[2] = uStack_60;
  }
  return;
}



/* Address: 0x10059b250 | FUN_10059b250 */

void FUN_10059b250(void)

{
  long unaff_x20;
  
  if (*(char *)(unaff_x20 + 0x48) < '\0') {
    FUN_100585260();
  }
  else {
    FUN_100584c3c();
  }
  return;
}



/* Address: 0x10059b2c8 | FUN_10059b2c8 */

ulong FUN_10059b2c8(ulong param_1,undefined *param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  _CocoaArrayWrapper _Var2;
  code *pcVar3;
  _StringGuts _Var4;
  ulong uVar5;
  char *pcVar6;
  undefined1 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  if ((ulong)param_2 >> 0x3e == 0) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10059b398);
      (*pcVar3)();
    }
    if (*(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + 0x10) <= param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10059b39c);
      (*pcVar3)();
    }
    param_1 = *(ulong *)(((ulong)param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20);
    _Var4.unknown = (undefined *)0x0;
    FUN_1004e7cac();
    uVar5 = param_1;
    _swift_unknownObjectRetain();
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x52,_Var4);
    pcVar1 = "Down-casted Array element failed to match the target type\nExpected ";
    pcVar6 = (char *)0xd000000000000043;
  }
  else {
    _Var2.unknown = (undefined *)((ulong)param_2 & 0xffffffffffffff8);
    if ((undefined *)0x7fffffffffffffff < param_2) {
      _Var2.unknown = param_2;
    }
    Swift::_CocoaArrayWrapper::_get_subscript(param_1,_Var2);
    _Var4.unknown = (undefined *)0x0;
    FUN_1004e7cac();
    uVar5 = param_1;
    _swift_dynamicCastClass();
    if (uVar5 != 0) {
      return param_1;
    }
    Swift::_StringGuts::grow(0x55,_Var4);
    pcVar1 = "NSArray element failed to match the Swift Array Element type\nExpected ";
    pcVar6 = (char *)0xd000000000000046;
  }
  uVar7 = (undefined1)param_1;
  SVar10.bridgeObject = (void *)((ulong)(pcVar1 + -0x20) | 0x8000000000000000);
  SVar10.str = pcVar6;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  SVar8.bridgeObject = (void *)0x8000000100dadd30;
  SVar8.str = (char *)0xd000000000000016;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar8,SVar13);
  SVar9.bridgeObject = (void *)0xeb0000000020646e;
  SVar9.str = (char *)0x756f662074756220;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  _swift_getObjectType();
  SVar10 = Swift::__typeName((bool)uVar7);
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar10,SVar15);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar11.bridgeObject = (void *)0x2;
  SVar11.str = (char *)0xb;
  Swift::_assertionFailure((StaticString)0x100d8deb0,SVar11,0);
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10059b464);
  (*pcVar3)();
}



/* Address: 0x10059b464 | FUN_10059b464 */

void FUN_10059b464(undefined8 param_1,undefined8 *param_2)

{
  long unaff_x22;
  undefined8 uVar1;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  uVar1 = *param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x18) = uVar1;
  *(undefined1 *)(unaff_x22 + 0x28) = *(undefined1 *)(param_2 + 2);
  _swift_task_switch(FUN_10059b48c,0,0);
  return;
}



/* Address: 0x10059b48c | FUN_10059b48c */

void FUN_10059b48c(void)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined8 *puVar3;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x10);
  uVar2 = *(undefined1 *)(unaff_x22 + 0x28);
  *puVar3 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3[1] = uVar1;
  *(undefined1 *)(puVar3 + 2) = uVar2;
  puVar3[4] = 0;
  puVar3[5] = 0;
  puVar3[3] = 0;
  *(undefined2 *)(puVar3 + 6) = 0;
  FUN_1004a7398();
                    /* WARNING: Could not recover jumptable at 0x00010059b4d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059b4dc | FUN_10059b4dc */

void FUN_10059b4dc(undefined8 param_1,undefined8 *param_2,int *param_3)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  long *plVar4;
  long unaff_x22;
  undefined8 uVar5;
  
  uVar5 = *param_2;
  uVar2 = param_2[1];
  *(undefined8 *)(unaff_x22 + 0x1d0) = param_1;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar2;
  uVar3 = *(undefined1 *)(param_2 + 2);
  *(undefined1 *)(unaff_x22 + 0x141) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x10) = uVar5;
  *(undefined8 *)(unaff_x22 + 0x18) = uVar2;
  *(undefined1 *)(unaff_x22 + 0x20) = uVar3;
  uVar5 = *(undefined8 *)((long)param_2 + 0x71);
  *(undefined8 *)(unaff_x22 + 0x89) = *(undefined8 *)((long)param_2 + 0x79);
  *(undefined8 *)(unaff_x22 + 0x81) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x81);
  *(undefined8 *)(unaff_x22 + 0x99) = *(undefined8 *)((long)param_2 + 0x89);
  *(undefined8 *)(unaff_x22 + 0x91) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x91);
  *(undefined8 *)(unaff_x22 + 0xa9) = *(undefined8 *)((long)param_2 + 0x99);
  *(undefined8 *)(unaff_x22 + 0xa1) = uVar5;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2[0x14];
  uVar5 = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)(unaff_x22 + 0x49) = *(undefined8 *)((long)param_2 + 0x39);
  *(undefined8 *)(unaff_x22 + 0x41) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x41);
  *(undefined8 *)(unaff_x22 + 0x59) = *(undefined8 *)((long)param_2 + 0x49);
  *(undefined8 *)(unaff_x22 + 0x51) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x51);
  *(undefined8 *)(unaff_x22 + 0x69) = *(undefined8 *)((long)param_2 + 0x59);
  *(undefined8 *)(unaff_x22 + 0x61) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x61);
  *(undefined8 *)(unaff_x22 + 0x79) = *(undefined8 *)((long)param_2 + 0x69);
  *(undefined8 *)(unaff_x22 + 0x71) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x11);
  *(undefined8 *)(unaff_x22 + 0x29) = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)(unaff_x22 + 0x21) = uVar5;
  uVar5 = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)(unaff_x22 + 0x39) = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)(unaff_x22 + 0x31) = uVar5;
  iVar1 = *param_3;
  plVar4 = (long *)(ulong)(uint)param_3[1];
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x1e8) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10059b5a8;
                    /* WARNING: Could not recover jumptable at 0x00010059b5a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)param_3))(plVar4,unaff_x22 + 0x148,unaff_x22 + 0x38);
  return;
}



/* Address: 0x10059b5a8 | FUN_10059b5a8 */

void FUN_10059b5a8(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x1f0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x1e8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_10059b604;
  }
  else {
    pcVar1 = FUN_10059b6e8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x10059b604 | FUN_10059b604 */

void FUN_10059b604(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined1 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  *(undefined8 *)(unaff_x22 + 0x110) = *(undefined8 *)(unaff_x22 + 0x1a0);
  *(undefined8 *)(unaff_x22 + 0x108) = *(undefined8 *)(unaff_x22 + 0x198);
  *(undefined8 *)(unaff_x22 + 0x120) = *(undefined8 *)(unaff_x22 + 0x1b0);
  *(undefined8 *)(unaff_x22 + 0x118) = *(undefined8 *)(unaff_x22 + 0x1a8);
  *(undefined8 *)(unaff_x22 + 0x130) = *(undefined8 *)(unaff_x22 + 0x1c0);
  *(undefined8 *)(unaff_x22 + 0x128) = *(undefined8 *)(unaff_x22 + 0x1b8);
  *(undefined8 *)(unaff_x22 + 0xd0) = *(undefined8 *)(unaff_x22 + 0x160);
  *(undefined8 *)(unaff_x22 + 200) = *(undefined8 *)(unaff_x22 + 0x158);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x170);
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x168);
  *(undefined8 *)(unaff_x22 + 0xf0) = *(undefined8 *)(unaff_x22 + 0x180);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x178);
  *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 400);
  *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1d8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x1e0);
  puVar3 = *(undefined8 **)(unaff_x22 + 0x1d0);
  *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x1c8);
  *(undefined8 *)(unaff_x22 + 0xc0) = *(undefined8 *)(unaff_x22 + 0x150);
  *(undefined8 *)(unaff_x22 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x148);
  uVar4 = *(undefined1 *)(unaff_x22 + 0x141);
  FUN_1005a018c(unaff_x22 + 0xb8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb8);
  puVar3[4] = *(undefined8 *)(unaff_x22 + 0xc0);
  puVar3[3] = uVar5;
  uVar6 = *(undefined8 *)(unaff_x22 + 0xd0);
  uVar5 = *(undefined8 *)(unaff_x22 + 200);
  uVar8 = *(undefined8 *)(unaff_x22 + 0xe0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xd8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0xf0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0xe8);
  uVar11 = *(undefined8 *)(unaff_x22 + 0xf8);
  puVar3[0xc] = *(undefined8 *)(unaff_x22 + 0x100);
  puVar3[0xb] = uVar11;
  puVar3[10] = uVar10;
  puVar3[9] = uVar9;
  puVar3[8] = uVar8;
  puVar3[7] = uVar7;
  puVar3[6] = uVar6;
  puVar3[5] = uVar5;
  uVar6 = *(undefined8 *)(unaff_x22 + 0x110);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x108);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x120);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x118);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x130);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x128);
  uVar11 = *(undefined8 *)(unaff_x22 + 0x131);
  *(undefined8 *)((long)puVar3 + 0x99) = *(undefined8 *)(unaff_x22 + 0x139);
  *(undefined8 *)((long)puVar3 + 0x91) = uVar11;
  puVar3[0x12] = uVar10;
  puVar3[0x11] = uVar9;
  puVar3[0x10] = uVar8;
  puVar3[0xf] = uVar7;
  puVar3[0xe] = uVar6;
  puVar3[0xd] = uVar5;
  *puVar3 = uVar1;
  puVar3[1] = uVar2;
  *(undefined1 *)(puVar3 + 2) = uVar4;
  FUN_1004a7398(uVar1,uVar2,uVar4);
                    /* WARNING: Could not recover jumptable at 0x00010059b6e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059b6e8 | FUN_10059b6e8 */

void FUN_10059b6e8(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010059b6f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10059b6f4 | FUN_10059b6f4 */

void FUN_10059b6f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[0x10];
  uVar4 = param_5[0x13];
  uVar3 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  uVar2 = param_5[0x14];
  uVar4 = param_5[0x17];
  uVar3 = param_5[0x16];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5[0x15];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  uVar4 = param_5[0xf];
  uVar3 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0x380;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10059b7c0;
  FUN_10058f854(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x10059b7c0 | FUN_10059b7c0 */

void FUN_10059b7c0(void)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xd0));
                    /* WARNING: Could not recover jumptable at 0x00010059b7f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))();
  return;
}



/* Address: 0x10059b7fc | FUN_10059b7fc */

void FUN_10059b7fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[0x10];
  uVar4 = param_5[0x13];
  uVar3 = param_5[0x12];
  *(undefined8 *)(unaff_x22 + 0x98) = param_5[0x11];
  *(undefined8 *)(unaff_x22 + 0x90) = uVar2;
  *(undefined8 *)(unaff_x22 + 0xa8) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xa0) = uVar3;
  uVar2 = param_5[0x14];
  uVar4 = param_5[0x17];
  uVar3 = param_5[0x16];
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5[0x15];
  *(undefined8 *)(unaff_x22 + 0xb0) = uVar2;
  *(undefined8 *)(unaff_x22 + 200) = uVar4;
  *(undefined8 *)(unaff_x22 + 0xc0) = uVar3;
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  uVar4 = param_5[0xf];
  uVar3 = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x88) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x80) = uVar3;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xd0) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10059b7c0;
  FUN_10059057c(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x10059b8c8 | FUN_10059b8c8 */

void FUN_10059b8c8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5[0xe];
  *(undefined8 *)(unaff_x22 + 0x88) = param_1;
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10059b970;
  FUN_10059de68(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x10059b970 | FUN_10059b970 */

void FUN_10059b970(undefined1 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x90));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined1 **)(lVar3 + 0x88);
    *puVar1 = param_1;
    *(undefined8 *)(puVar1 + 8) = param_2;
    *(undefined8 *)(puVar1 + 0x10) = param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x00010059b9d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10059b9d8 | FUN_10059b9d8 */

void FUN_10059b9d8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_5[8];
  uVar4 = param_5[0xb];
  uVar3 = param_5[10];
  *(undefined8 *)(unaff_x22 + 0x58) = param_5[9];
  *(undefined8 *)(unaff_x22 + 0x50) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x68) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x60) = uVar3;
  uVar2 = param_5[0xc];
  *(undefined8 *)(unaff_x22 + 0x78) = param_5[0xd];
  *(undefined8 *)(unaff_x22 + 0x70) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x80) = param_5[0xe];
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  uVar2 = param_5[4];
  uVar4 = param_5[7];
  uVar3 = param_5[6];
  *(undefined8 *)(unaff_x22 + 0x38) = param_5[5];
  *(undefined8 *)(unaff_x22 + 0x30) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x48) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x40) = uVar3;
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x88) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100544244;
  FUN_100590858(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x10059ba9c | FUN_10059ba9c */

void FUN_10059ba9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5[4];
  *(undefined8 *)(unaff_x22 + 0x38) = param_1;
  plVar1 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10059bb2c;
  FUN_10059e430(param_4,unaff_x22 + 0x10,param_6,param_7,param_8,param_9);
  return;
}



/* Address: 0x10059bb2c | FUN_10059bb2c */

void FUN_10059bb2c(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  long lVar3;
  
  lVar3 = *unaff_x22;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  if (unaff_x20 == 0) {
    puVar1 = *(undefined8 **)(lVar3 + 0x38);
    *puVar1 = param_1;
    puVar1[1] = param_2;
  }
                    /* WARNING: Could not recover jumptable at 0x00010059bb80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10059bb84 | FUN_10059bb84 */

void FUN_10059bb84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = *param_5;
  uVar4 = param_5[3];
  uVar3 = param_5[2];
  *(undefined8 *)(unaff_x22 + 0x18) = param_5[1];
  *(undefined8 *)(unaff_x22 + 0x10) = uVar2;
  *(undefined8 *)(unaff_x22 + 0x28) = uVar4;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5[4];
  plVar1 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x38) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100542d58;
  FUN_100590bf0(plVar1,param_1,param_2,param_3,param_4,unaff_x22 + 0x10,param_6,param_7,param_8);
  return;
}



/* Address: 0x10059bc30 | FUN_10059bc30 */

undefined8 FUN_10059bc30(ulong param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  
  uVar4 = (uint)(param_2 >> 0x20);
  uVar3 = (uint)param_2;
  if ((param_1 & 0xff) == 1) {
    if ((uVar3 & 0xff) != 1) {
      return 0;
    }
  }
  else if ((uVar3 & 0xff) == 1) {
    return 0;
  }
  if ((param_1 & 0xff00) == 0x100) {
    if ((uVar3 & 0xff00) != 0x100) {
      return 0;
    }
  }
  else if ((uVar3 & 0xff00) == 0x100) {
    return 0;
  }
  uVar5 = (uint)(param_1 >> 0x10);
  uVar1 = uVar5 & 0xff;
  uVar7 = (uint)(param_2 >> 0x10);
  uVar2 = uVar7 & 0xff;
  if (uVar1 == 3) {
    if (uVar2 != 3) {
      return 0;
    }
  }
  else {
    if (uVar2 == 3) {
      return 0;
    }
    if (uVar1 == 2) {
      if (uVar2 != 2) {
        return 0;
      }
    }
    else if ((uVar2 == 2) || (((uVar5 ^ uVar7) & 1) != 0)) {
      return 0;
    }
  }
  uVar6 = param_2 & 0xff000000;
  if ((param_1 & 0xff000000) == 0x3000000) {
    uVar8 = 0x3000000;
  }
  else {
    if (uVar6 == 0x3000000) {
      return 0;
    }
    if ((param_1 & 0xff000000) == 0x2000000) {
      if (uVar6 != 0x2000000) {
        return 0;
      }
    }
    else {
      if (uVar6 == 0x2000000) {
        return 0;
      }
      if ((((uint)param_1 ^ uVar3) >> 0x18 & 1) != 0) {
        return 0;
      }
    }
    uVar6 = (ulong)(uVar4 & 0xff) << 0x20;
    uVar8 = 0x200000000;
    if ((param_1 & 0xff00000000) != 0x200000000) {
      if ((uVar4 & 0xff) == 2) {
        return 0;
      }
      if (((param_1 ^ param_2) >> 0x20 & 1) != 0) {
        return 0;
      }
      goto LAB_10059bcb0;
    }
  }
  if (uVar6 != uVar8) {
    return 0;
  }
LAB_10059bcb0:
  uVar3 = (uint)(param_1 >> 0x20);
  uVar7 = uVar3 >> 8 & 0xff;
  uVar5 = uVar4 >> 8 & 0xff;
  if (uVar7 == 3) {
    if (uVar5 == 3) {
      return 1;
    }
  }
  else if (uVar5 != 3) {
    if (uVar7 == 2) {
      if (uVar5 == 2) {
        return 1;
      }
    }
    else if ((uVar5 != 2) && (((uVar3 ^ uVar4) >> 8 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x10059bdb4 | FUN_10059bdb4 */

void FUN_10059bdb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fef0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fef0,&DAT_100ee33b8);
  DAT_100fd1f48 = pTVar1;
  return;
}



/* Address: 0x10059bdf4 | FUN_10059bdf4 */

undefined8 FUN_10059bdf4(uint param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 & 0xff) == 2) {
    if ((param_2 & 0xff) != 2) {
      return 0;
    }
  }
  else {
    if ((param_2 & 0xff) == 2) {
      return 0;
    }
    if (((param_1 ^ param_2) & 1) != 0) {
      return 0;
    }
  }
  uVar1 = param_1 >> 8 & 0xff;
  uVar2 = param_2 >> 8 & 0xff;
  if (uVar1 == 2) {
    if (uVar2 == 2) {
      return 1;
    }
  }
  else if ((uVar2 != 2) && (((uVar1 ^ uVar2) & 1) == 0)) {
    return 1;
  }
  return 0;
}



/* Address: 0x10059be6c | FUN_10059be6c */

/* WARNING: Removing unreachable block (ram,0x00010059c164) */
/* WARNING: Removing unreachable block (ram,0x00010059c09c) */
/* WARNING: Removing unreachable block (ram,0x00010059bffc) */
/* WARNING: Removing unreachable block (ram,0x00010059bfac) */
/* WARNING: Removing unreachable block (ram,0x00010059c04c) */
/* WARNING: Removing unreachable block (ram,0x00010059bf44) */
/* WARNING: Removing unreachable block (ram,0x00010059c130) */
/* WARNING: Removing unreachable block (ram,0x00010059c168) */
/* WARNING: Removing unreachable block (ram,0x00010059c174) */
/* WARNING: Removing unreachable block (ram,0x00010059c184) */
/* WARNING: Removing unreachable block (ram,0x00010059c188) */

void FUN_10059be6c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  char **ppcVar2;
  char **ppcVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_1b0 [8];
  undefined *local_1a8;
  void *local_1a0;
  undefined *local_198;
  undefined1 auStack_188 [88];
  char *local_130;
  void *pvStack_128;
  char **local_120;
  undefined *puStack_118;
  char *local_110;
  void *pvStack_108;
  char **local_100;
  undefined *puStack_f8;
  char **ppcStack_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined1 local_d1;
  undefined8 local_d0;
  String local_c8;
  char **local_b8;
  undefined *puStack_b0;
  String local_a8;
  char **local_98;
  undefined *puStack_90;
  char **local_88;
  undefined *puStack_80;
  undefined8 local_78;
  
  puVar1 = &DAT_100fd25e8;
  FUN_1000f7830(&DAT_100fd25e8,&DAT_100c60170);
  lVar7 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_10059bdb4();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_130 = (char *)((ulong)local_130 & 0xffffffffffffff00);
    local_c8 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    local_130._0_1_ = 1;
    ppcVar2 = &local_130;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_130._0_1_ = 2;
    local_198 = puVar4;
    local_b8 = ppcVar2;
    puStack_b0 = puVar4;
    local_a8 = Swift::KeyedDecodingContainer::_decode(&local_130,puVar1);
    local_1a0 = local_a8.bridgeObject;
    local_130._0_1_ = 3;
    ppcVar2 = &local_130;
    puVar4 = puVar1;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    local_130._0_1_ = 4;
    ppcVar3 = &local_130;
    puVar6 = puVar1;
    local_1a8 = puVar4;
    local_98 = ppcVar2;
    puStack_90 = puVar4;
    Swift::KeyedDecodingContainer::_decodeIfPresent();
    puVar4 = &DAT_100fce820;
    local_88 = ppcVar3;
    puStack_80 = puVar6;
    FUN_1000f7830(&DAT_100fce820,&DAT_100c5cfa0);
    local_d1 = 5;
    puVar5 = &DAT_100fcf148;
    FUN_10054d628(&DAT_100fcf148,FUN_10054d698,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decodeIfPresent(&local_d0,puVar4,&local_d1,puVar1,puVar4,puVar5)
    ;
    (**(code **)(lVar7 + 8))(auStack_1b0 + -extraout_x8,puVar1);
    local_78 = local_d0;
    puStack_f8 = puStack_90;
    local_100 = local_98;
    puStack_e8 = puStack_80;
    ppcStack_f0 = local_88;
    local_e0 = local_d0;
    pvStack_128 = local_c8.bridgeObject;
    local_130 = local_c8.str;
    puStack_118 = puStack_b0;
    local_120 = local_b8;
    pvStack_108 = local_a8.bridgeObject;
    local_110 = local_a8.str;
    FUN_1004e011c(&local_130,auStack_188);
    FUN_100004594(param_2);
    FUN_1004e0278(&local_c8);
    param_1[5] = pvStack_108;
    param_1[4] = local_110;
    param_1[7] = puStack_f8;
    param_1[6] = local_100;
    param_1[9] = puStack_e8;
    param_1[8] = ppcStack_f0;
    param_1[10] = local_e0;
    param_1[1] = pvStack_128;
    *param_1 = local_130;
    param_1[3] = puStack_118;
    param_1[2] = local_120;
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x10059c218 | FUN_10059c218 */

void FUN_10059c218(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f58 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fea0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fea0,&DAT_100ee3328);
  DAT_100fd1f58 = pTVar1;
  return;
}



/* Address: 0x10059c258 | FUN_10059c258 */

/* WARNING: Removing unreachable block (ram,0x00010059c31c) */

ulong FUN_10059c258(long param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long extraout_x8;
  ulong unaff_x21;
  long lVar4;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd25e0;
  FUN_1000f7830(&DAT_100fd25e0,&DAT_100c60168);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10059c218();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar2 = &local_51;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar2,puVar1);
    local_52 = 1;
    puVar3 = &local_52;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar3,puVar1);
    (**(code **)(lVar4 + 8))(auStack_60 + -extraout_x8,puVar1);
    FUN_100004594(param_1);
    unaff_x21 = (ulong)((uint)puVar2 & 0xff | (int)puVar3 << 8);
  }
  else {
    FUN_100004594(param_1);
  }
  return unaff_x21;
}



/* Address: 0x10059c3ac | FUN_10059c3ac */

void FUN_10059c3ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fe50;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fe50,&DAT_100ee3298);
  DAT_100fd1f68 = pTVar1;
  return;
}



/* Address: 0x10059c3ec | FUN_10059c3ec */

void FUN_10059c3ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fe00;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fe00,&DAT_100ee3208);
  DAT_100fd1f80 = pTVar1;
  return;
}



/* Address: 0x10059c42c | FUN_10059c42c */

void FUN_10059c42c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1f98 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fdb0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fdb0,&DAT_100ee3178);
  DAT_100fd1f98 = pTVar1;
  return;
}



/* Address: 0x10059c46c | FUN_10059c46c */

void FUN_10059c46c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fa8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fd60;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fd60,&DAT_100ee3158);
  DAT_100fd1fa8 = pTVar1;
  return;
}



/* Address: 0x10059c4ac | FUN_10059c4ac */

void FUN_10059c4ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5fd10;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5fd10,&DAT_100ee3138);
  DAT_100fd1fb8 = pTVar1;
  return;
}



/* Address: 0x10059c4ec | FUN_10059c4ec */

void FUN_10059c4ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fc0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f530;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f530,&DAT_100ee3028);
  DAT_100fd1fc0 = pTVar1;
  return;
}



/* Address: 0x10059c52c | FUN_10059c52c */

void FUN_10059c52c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fc8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f478;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f478,&DAT_100ee3008);
  DAT_100fd1fc8 = pTVar1;
  return;
}



/* Address: 0x10059c56c | FUN_10059c56c */

void FUN_10059c56c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fd0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f3c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f3c0,&DAT_100ee2fe0);
  DAT_100fd1fd0 = pTVar1;
  return;
}



/* Address: 0x10059c5ac | FUN_10059c5ac */

void FUN_10059c5ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fd8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f250;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f250,&DAT_100ee2ee0);
  DAT_100fd1fd8 = pTVar1;
  return;
}



/* Address: 0x10059c5ec | FUN_10059c5ec */

void FUN_10059c5ec(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd1fe0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f308;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f308,&DAT_100ee2f60);
  DAT_100fd1fe0 = pTVar1;
  return;
}



/* Address: 0x10059c62c | FUN_10059c62c */

undefined4 FUN_10059c62c(long param_1,undefined1 *param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if (param_1 != 0x6974656c706d6f63 || param_2 != (undefined1 *)0xeb00000000736e6f) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6974656c706d6f63,(_StringGuts)0xeb00000000736e6f,expecting);
    if (!bVar1) {
      if (((param_1 == 0x676e6967676f6c) && (param_2 == &DAT_e700000000000000)) ||
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x676e6967676f6c,(_StringGuts)0xe700000000000000,expecting
                            ), bVar1)) {
        _swift_bridgeObjectRelease(param_2);
        return 1;
      }
      if (((param_1 != 0x7374706d6f7270) || (param_2 != &DAT_e700000000000000)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x7374706d6f7270,(_StringGuts)0xe700000000000000,expecting
                            ), !bVar1)) {
        if (((param_1 != 0x656372756f736572) || (param_2 != (undefined1 *)0xe900000000000073)) &&
           (bVar1 = Swift::_stringCompareWithSmolCheck
                              ((_StringGuts)0x656372756f736572,(_StringGuts)0xe900000000000073,
                               expecting), !bVar1)) {
          if ((param_1 == 0x736c6f6f74) && (param_2 == &DAT_e500000000000000)) {
            _swift_bridgeObjectRelease(&DAT_e500000000000000);
            return 4;
          }
          bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0x736c6f6f74,(_StringGuts)0xe500000000000000,expecting);
          _swift_bridgeObjectRelease(param_2);
          if (bVar1) {
            return 4;
          }
          return 5;
        }
        _swift_bridgeObjectRelease(param_2);
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x10059c7e0 | FUN_10059c7e0 */

/* WARNING: Removing unreachable block (ram,0x00010059c984) */

void FUN_10059c7e0(long param_1)

{
  undefined *puVar1;
  KeyedDecodingContainer<undefined> KVar2;
  undefined *puVar3;
  undefined *puVar4;
  long extraout_x8;
  long unaff_x21;
  long lVar5;
  ulong local_70;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  ushort local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fd25b0;
  FUN_1000f7830(&DAT_100fd25b0,&DAT_100c60160);
  lVar5 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_10059c4ac();
  KVar2 = Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_52 = 0;
    FUN_1005a0194();
    puVar3 = &DAT_100ee3028;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_51,&DAT_100ee3028,&local_52,puVar1,&DAT_100ee3028,KVar2.unknown);
    local_54 = 1;
    FUN_1005a01d4();
    puVar4 = &DAT_100ee3008;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_53,&DAT_100ee3008,&local_54,puVar1,&DAT_100ee3008,puVar3);
    local_56 = 2;
    FUN_1005a0214();
    puVar3 = &DAT_100ee2fe0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_55,&DAT_100ee2fe0,&local_56,puVar1,&DAT_100ee2fe0,puVar4);
    local_61 = 3;
    FUN_1005a0254();
    puVar4 = &DAT_100ee2ee0;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_58,&DAT_100ee2ee0,&local_61,puVar1,&DAT_100ee2ee0,puVar3);
    local_70 = (ulong)local_58;
    local_63 = 4;
    FUN_1005a0294();
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (&local_62,&DAT_100ee2f60,&local_63,puVar1,&DAT_100ee2f60,puVar4);
    (**(code **)(lVar5 + 8))((long)&local_70 - extraout_x8,puVar1);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  return;
}



/* Address: 0x10059ca38 | FUN_10059ca38 */

void FUN_10059ca38(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10059ca5c | FUN_10059ca5c */

void FUN_10059ca5c(undefined8 param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x3d0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_100599aa8(param_1);
  return;
}



/* Address: 0x10059caac | FUN_10059caac */

void FUN_10059caac(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined8 uVar4;
  long unaff_x20;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  undefined *local_98 [8];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(unaff_x20 + 0xf8,auStack_58,0,0);
  lVar7 = *(long *)(unaff_x20 + 0xf8);
  lVar5 = *(long *)(lVar7 + 0x10);
  _swift_bridgeObjectRetain(lVar7);
  local_98[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (lVar5 != 0) {
    _swift_bridgeObjectRetain(lVar7);
    uVar3 = 0;
    lVar5 = -0x2fffffffffffffe9;
    FUN_100071370();
    puVar6 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if ((uVar3 & 1) != 0) {
      puVar6 = *(undefined **)(*(long *)(lVar7 + 0x38) + lVar5 * 8);
      _swift_bridgeObjectRetain(puVar6);
    }
    _swift_bridgeObjectRelease(lVar7);
    local_98[0] = puVar6;
  }
  _swift_bridgeObjectRelease(lVar7);
  puVar6 = &DAT_100fcb6d8;
  FUN_1000f7830(&DAT_100fcb6d8,&DAT_100c50488);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 3;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar1 = &DAT_100fcf0e8;
  FUN_1000f7830(&DAT_100fcf0e8,&DAT_100c57020);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  *(undefined **)(puVar6 + 0x20) = puVar1;
  _swift_retain(param_2);
  FUN_1005428b0(puVar6);
  puVar6 = local_98[0];
  _swift_beginAccess(unaff_x20 + 0xf8,local_98,0x21,0);
  uVar2 = *(undefined8 *)(unaff_x20 + 0xf8);
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xf8);
  *(undefined8 *)(unaff_x20 + 0xf8) = 0x8000000000000000;
  FUN_1004b578c(puVar6,0xd000000000000017,0x8000000100dad110,uVar2);
  *(undefined8 *)(unaff_x20 + 0xf8) = uVar4;
  _swift_endAccess(local_98);
  return;
}



/* Address: 0x10059cc40 | FUN_10059cc40 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10059cc40(void)

{
  return ZEXT816(0x100fd20b8);
}



/* Address: 0x10059cc60 | FUN_10059cc60 */

void FUN_10059cc60(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x10059cc94 | FUN_10059cc94 */

void FUN_10059cc94(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  undefined8 uVar6;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x30);
  plVar5 = (long *)0xaf0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10058a458(plVar5,param_1,uVar1,uVar3,uVar2,uVar4,uVar6);
  return;
}



/* Address: 0x10059cd14 | FUN_10059cd14 */

void FUN_10059cd14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10059cd38 | FUN_10059cd38 */

void FUN_10059cd38(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x28);
  plVar5 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)thunk_FUN_100008284;
  FUN_10052fd34(plVar5,param_1,param_2,uVar2,uVar4,uVar1,uVar3);
  return;
}



/* Address: 0x10059cdb8 | FUN_10059cdb8 */

void FUN_10059cdb8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  if (param_2 != 0) {
    _swift_bridgeObjectRelease(param_2);
    _swift_bridgeObjectRelease(param_6);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_8);
    _swift_bridgeObjectRelease(param_11);
    _swift_bridgeObjectRelease(param_12);
    return;
  }
  return;
}



/* Address: 0x10059ce24 | thunk_FUN_10059ce28 */

void thunk_FUN_10059ce28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2038 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f108;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f108,&DAT_100ee2d40);
  DAT_100fd2038 = pTVar1;
  return;
}



/* Address: 0x10059ce28 | FUN_10059ce28 */

void FUN_10059ce28(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2038 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f108;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f108,&DAT_100ee2d40);
  DAT_100fd2038 = pTVar1;
  return;
}



/* Address: 0x10059ce68 | thunk_FUN_10059ce6c */

void thunk_FUN_10059ce6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2040 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f1c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f1c0,&DAT_100ee2dc0);
  DAT_100fd2040 = pTVar1;
  return;
}



/* Address: 0x10059ce6c | FUN_10059ce6c */

void FUN_10059ce6c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2040 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f1c0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f1c0,&DAT_100ee2dc0);
  DAT_100fd2040 = pTVar1;
  return;
}



/* Address: 0x10059ceac | thunk_FUN_10059ceb0 */

void thunk_FUN_10059ceb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f278;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f278,&DAT_100ee2ee0);
  DAT_100fd2048 = pTVar1;
  return;
}



/* Address: 0x10059ceb0 | FUN_10059ceb0 */

void FUN_10059ceb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2048 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f278;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f278,&DAT_100ee2ee0);
  DAT_100fd2048 = pTVar1;
  return;
}



/* Address: 0x10059cef0 | thunk_FUN_10059cef4 */

void thunk_FUN_10059cef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f330;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f330,&DAT_100ee2f60);
  DAT_100fd2050 = pTVar1;
  return;
}



/* Address: 0x10059cef4 | FUN_10059cef4 */

void FUN_10059cef4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2050 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f330;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f330,&DAT_100ee2f60);
  DAT_100fd2050 = pTVar1;
  return;
}



/* Address: 0x10059cf34 | thunk_FUN_10059cf38 */

void thunk_FUN_10059cf38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f3e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f3e8,&DAT_100ee2fe0);
  DAT_100fd2058 = pTVar1;
  return;
}



/* Address: 0x10059cf38 | FUN_10059cf38 */

void FUN_10059cf38(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2058 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f3e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f3e8,&DAT_100ee2fe0);
  DAT_100fd2058 = pTVar1;
  return;
}



/* Address: 0x10059cf78 | thunk_FUN_10059cf7c */

void thunk_FUN_10059cf7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f4a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f4a0,&DAT_100ee3008);
  DAT_100fd2060 = pTVar1;
  return;
}



/* Address: 0x10059cf7c | FUN_10059cf7c */

void FUN_10059cf7c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2060 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f4a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f4a0,&DAT_100ee3008);
  DAT_100fd2060 = pTVar1;
  return;
}



/* Address: 0x10059cfbc | thunk_FUN_10059cfc0 */

void thunk_FUN_10059cfc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f558;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f558,&DAT_100ee3028);
  DAT_100fd2068 = pTVar1;
  return;
}



/* Address: 0x10059cfc0 | FUN_10059cfc0 */

void FUN_10059cfc0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2068 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f558;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f558,&DAT_100ee3028);
  DAT_100fd2068 = pTVar1;
  return;
}



/* Address: 0x10059d000 | thunk_FUN_10059d004 */

void thunk_FUN_10059d004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2070 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f610,&DAT_100ee2e50);
  DAT_100fd2070 = pTVar1;
  return;
}



/* Address: 0x10059d004 | FUN_10059d004 */

void FUN_10059d004(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd2070 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c5f610;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c5f610,&DAT_100ee2e50);
  DAT_100fd2070 = pTVar1;
  return;
}



/* Address: 0x10059d044 | FUN_10059d044 */

undefined1  [16] FUN_10059d044(void)

{
  return ZEXT816(0x100ee2d40);
}



/* Address: 0x10059d054 | FUN_10059d054 */

undefined1  [16] FUN_10059d054(void)

{
  return ZEXT816(0x100ee2dc0);
}


