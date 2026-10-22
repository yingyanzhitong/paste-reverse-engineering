/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002f1c30 | FUN_1002f1c30 */

void FUN_1002f1c30(void)

{
  undefined *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = unaff_x20;
  puVar1 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  uVar3 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x70) = uVar3;
  _swift_task_switch(FUN_1002f1ca0);
  return;
}



/* Address: 0x1002f1ca0 | FUN_1002f1ca0 */

void FUN_1002f1ca0(void)

{
  undefined8 uVar1;
  long *plVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  lVar8 = *(long *)(unaff_x22 + 0x60);
  *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(lVar8 + 0x198);
  FUN_1000d468c(unaff_x22 + 0x10);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
  lVar3 = unaff_x22 + 0x10;
  FUN_100004640(lVar3,uVar7);
  FUN_1000d4dd4(0xd000000000000016,0x8000000100da15e0,uVar7,uVar1,lVar3);
  FUN_100004594(unaff_x22 + 0x10);
  if (*(char *)(lVar8 + 0xf0) == '\x01') {
    plVar2 = (long *)&DAT_00000030;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x80) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_1002f1e88;
    FUN_1002f2d00();
    return;
  }
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  lVar3 = 0;
  FUN_1002e35d4();
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar1,1,1,lVar3);
  puVar4 = &DAT_100c3eb08;
  _swift_getKeyPath(&DAT_100c3eb08);
  puVar5 = &DAT_100c3eb30;
  _swift_getKeyPath(&DAT_100c3eb30);
  FUN_1002f39e4(uVar1,uVar7);
  _swift_retain(lVar8);
  FUN_1002cb5a0(uVar7,lVar8,puVar4,puVar5);
  FUN_100005808(uVar1,&DAT_100fbcf60,&DAT_100c3e020);
  puVar6 = (undefined8 *)(lVar8 + 0x70);
  FUN_100004640(puVar6,*(undefined8 *)(lVar8 + 0x88));
  FUN_1002ee7b4();
  uVar7 = *puVar6;
  puVar4 = &DAT_100ec8cb8;
  _swift_allocObject(&DAT_100ec8cb8,0x18,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar4;
  _swift_weakInit(puVar4 + 0x10,uVar7);
  plVar2 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002f201c;
  FUN_1002ef5d0(&DAT_100c3ec28,puVar4);
  return;
}



/* Address: 0x1002f1e88 | FUN_1002f1e88 */

void FUN_1002f1e88(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x60);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x80));
  _swift_task_switch(FUN_1002f1ed4,uVar1,0);
  return;
}



/* Address: 0x1002f1ed4 | FUN_1002f1ed4 */

void FUN_1002f1ed4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  lVar8 = *(long *)(unaff_x22 + 0x60);
  lVar2 = 0;
  FUN_1002e35d4();
  (**(code **)(*(long *)(lVar2 + -8) + 0x38))(uVar1,1,1,lVar2);
  puVar3 = &DAT_100c3eb08;
  _swift_getKeyPath(&DAT_100c3eb08);
  puVar4 = &DAT_100c3eb30;
  _swift_getKeyPath(&DAT_100c3eb30);
  FUN_1002f39e4(uVar1,uVar7);
  _swift_retain(lVar8);
  FUN_1002cb5a0(uVar7,lVar8,puVar3,puVar4);
  FUN_100005808(uVar1,&DAT_100fbcf60,&DAT_100c3e020);
  puVar5 = (undefined8 *)(lVar8 + 0x70);
  FUN_100004640(puVar5,*(undefined8 *)(lVar8 + 0x88));
  FUN_1002ee7b4();
  uVar7 = *puVar5;
  puVar3 = &DAT_100ec8cb8;
  _swift_allocObject(&DAT_100ec8cb8,0x18,7);
  *(undefined **)(unaff_x22 + 0x88) = puVar3;
  _swift_weakInit(puVar3 + 0x10,uVar7);
  plVar6 = (long *)0x60;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x90) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002f201c;
  FUN_1002ef5d0(&DAT_100c3ec28,puVar3);
  return;
}



/* Address: 0x1002f201c | FUN_1002f201c */

void FUN_1002f201c(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x88);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x90));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
    uVar1 = *(undefined8 *)(lVar2 + 0x68);
    _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
    _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002f2078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 8))();
    return;
  }
  _swift_task_switch(FUN_1002f20a0,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Address: 0x1002f20a0 | FUN_1002f20a0 */

void FUN_1002f20a0(void)

{
  long *plVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x60);
  if ((*(byte *)(lVar2 + 0xf0) & 1) != 0) {
    _swift_task_switch(FUN_1002f217c,lVar2,0);
    return;
  }
  *(undefined1 *)(lVar2 + 0xf0) = 1;
  FUN_1002efaa0();
  plVar1 = (long *)0x3f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x98) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002f2120;
  FUN_1002efba0();
  return;
}



/* Address: 0x1002f2120 | FUN_1002f2120 */

void FUN_1002f2120(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xa0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x98));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1002f217c;
  }
  else {
    pcVar1 = FUN_1002f2214;
  }
  _swift_task_switch(pcVar1,*(undefined8 *)(lVar2 + 0x60),0);
  return;
}



/* Address: 0x1002f217c | FUN_1002f217c */

void FUN_1002f217c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x68);
  FUN_1000d468c(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar4 = unaff_x22 + 0x38;
  FUN_100004640(lVar4,uVar2);
  FUN_1000d4dd4(0xd00000000000001b,0x8000000100da1600,uVar2,uVar3,lVar4);
  FUN_100004594(unaff_x22 + 0x38);
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar5);
                    /* WARNING: Could not recover jumptable at 0x0001002f2210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f2214 | FUN_1002f2214 */

void FUN_1002f2214(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  *(undefined1 *)(*(long *)(unaff_x22 + 0x60) + 0xf0) = 0;
  _swift_willThrow();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x70));
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002f2264. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f2268 | FUN_1002f2268 */

void FUN_1002f2268(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x140) = unaff_x20;
  _swift_task_switch(FUN_1002f2280);
  return;
}



/* Address: 0x1002f2280 | FUN_1002f2280 */

void FUN_1002f2280(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  long lVar6;
  
  lVar6 = *(long *)(unaff_x22 + 0x140);
  *(undefined8 *)(unaff_x22 + 0x148) = *(undefined8 *)(lVar6 + 0x198);
  FUN_1000d468c(unaff_x22 + 0x80);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa0);
  lVar3 = unaff_x22 + 0x80;
  FUN_100004640(lVar3,uVar1);
  FUN_1000d4dd4(0xd000000000000020,0x8000000100da1550,uVar1,uVar2,lVar3);
  FUN_100004594(unaff_x22 + 0x80);
  *(undefined8 *)(unaff_x22 + 0x150) = *(undefined8 *)(lVar6 + 0x1a0);
  FUN_1000da768(unaff_x22 + 0xa8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xc0);
  lVar3 = *(long *)(unaff_x22 + 200);
  FUN_100004640(unaff_x22 + 0xa8,uVar1);
  (**(code **)(lVar3 + 0x30))
            (0x6867696c746f7073,0xe900000000000074,0xd00000000000001d,0x8000000100da1580,uVar1,lVar3
            );
  FUN_100004594(unaff_x22 + 0xa8);
  *(undefined **)(unaff_x22 + 0x20) = &DAT_100c3ec18;
  *(long *)(unaff_x22 + 0x28) = lVar6;
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x158) = puVar4;
  plVar5 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x160) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_1002f23fc;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000014,0x8000000100da15a0,puVar4,&DAT_100c3ec20,
                unaff_x22 + 0x10);
  return;
}



/* Address: 0x1002f23fc | FUN_1002f23fc */

void FUN_1002f23fc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x158);
  *(long *)(lVar3 + 0x168) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x160));
  _swift_bridgeObjectRelease(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1002e1208;
  }
  else {
    pcVar2 = FUN_1002f2468;
  }
  _swift_task_switch(pcVar2,*(undefined8 *)(lVar3 + 0x140),0);
  return;
}



/* Address: 0x1002f2468 | FUN_1002f2468 */

void FUN_1002f2468(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *in_x3;
  undefined8 uVar7;
  long unaff_x22;
  String SVar8;
  String SVar9;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x168);
  FUN_1000d468c(unaff_x22 + 0xd0);
  puVar3 = *(undefined **)(unaff_x22 + 0xe8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0xf0);
  _Var5.unknown = puVar3;
  FUN_100004640(unaff_x22 + 0xd0);
  Swift::_StringGuts::grow(0x17,_Var5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  pcVar6 = (char *)(unaff_x22 + 0x120);
  _swift_getErrorValue(uVar7,unaff_x22 + 0x138);
  SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar9.bridgeObject = in_x3;
  SVar9.str = pcVar6;
  Swift::String::append(SVar8,SVar9);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  FUN_1000d4e0c(0xd000000000000015,0x8000000100da15c0,puVar3,uVar1);
  _swift_bridgeObjectRelease(0x8000000100da15c0);
  FUN_100004594(unaff_x22 + 0xd0);
  FUN_1000da768(unaff_x22 + 0xf8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x110);
  lVar2 = *(long *)(unaff_x22 + 0x118);
  FUN_100004640(unaff_x22 + 0xf8,uVar1);
  puVar3 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0x656372756f73;
  *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined1 **)(puVar3 + 0x28) = &DAT_e600000000000000;
  *(undefined8 *)(puVar3 + 0x30) = 0xd000000000000014;
  *(undefined8 *)(puVar3 + 0x38) = 0x8000000100da15a0;
  puVar4 = puVar3;
  FUN_1002e0e24();
  _swift_setDeallocating(puVar3);
  FUN_100005808(puVar3 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  (**(code **)(lVar2 + 0x28))(uVar7,puVar4,uVar1,lVar2);
  _swift_errorRelease(uVar7);
  _swift_bridgeObjectRelease(puVar4);
  FUN_100004594(unaff_x22 + 0xf8);
                    /* WARNING: Could not recover jumptable at 0x0001002f2644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f2648 | FUN_1002f2648 */

void FUN_1002f2648(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1002f1c30();
  return;
}



/* Address: 0x1002f2690 | FUN_1002f2690 */

void FUN_1002f2690(undefined8 param_1)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f8) = param_1;
  *(undefined8 *)(unaff_x22 + 0x200) = unaff_x20;
  _swift_task_switch(FUN_1002f26a8);
  return;
}



/* Address: 0x1002f26a8 | FUN_1002f26a8 */

void FUN_1002f26a8(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  _StringGuts _Var7;
  char *pcVar8;
  void *pvVar9;
  undefined8 uVar10;
  long unaff_x22;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar1 = *(long *)(unaff_x22 + 0x1f8);
  lVar2 = *(long *)(unaff_x22 + 0x200);
  *(undefined8 *)(unaff_x22 + 0x208) = *(undefined8 *)(lVar2 + 0x198);
  FUN_1000d468c(unaff_x22 + 0x120);
  pcVar8 = *(char **)(unaff_x22 + 0x138);
  pvVar9 = *(void **)(unaff_x22 + 0x140);
  _Var7.unknown = pcVar8;
  FUN_100004640(unaff_x22 + 0x120);
  Swift::_StringGuts::grow(0x27,_Var7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar10 = *(undefined8 *)(lVar1 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x210) = uVar10;
  *(undefined8 *)(unaff_x22 + 0x1d8) = uVar10;
  SVar11 = Swift::CustomStringConvertible::get_description();
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar11.bridgeObject = &DAT_e600000000000000;
  SVar11.str = (char *)0x736d65746920;
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  FUN_1000d4dd4(0xd00000000000001f,0x8000000100da14f0);
  _swift_bridgeObjectRelease(0x8000000100da14f0);
  FUN_100004594(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0x218) = *(undefined8 *)(lVar2 + 0x1a0);
  FUN_1000da768(unaff_x22 + 0x148);
  puVar4 = *(undefined **)(unaff_x22 + 0x160);
  lVar3 = *(long *)(unaff_x22 + 0x168);
  _Var7.unknown = puVar4;
  FUN_100004640(unaff_x22 + 0x148);
  Swift::_StringGuts::grow(0x24,_Var7);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x1e0) = uVar10;
  puVar5 = PTR___type_metadata_for_Swift_Int_100eac6f8;
  SVar11 = Swift::CustomStringConvertible::get_description();
  SVar15.bridgeObject = pvVar9;
  SVar15.str = pcVar8;
  Swift::String::append(SVar11,SVar15);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  SVar12.bridgeObject = &DAT_e600000000000000;
  SVar12.str = (char *)0x736d65746920;
  SVar16.bridgeObject = pvVar9;
  SVar16.str = pcVar8;
  Swift::String::append(SVar12,SVar16);
  (**(code **)(lVar3 + 0x30))
            (0x6867696c746f7073,0xe900000000000074,0xd00000000000001c,0x8000000100da1510,puVar4,
             lVar3);
  _swift_bridgeObjectRelease(0x8000000100da1510);
  FUN_100004594(unaff_x22 + 0x148);
  puVar4 = &DAT_100fbd618;
  FUN_1000037f0(&DAT_100fbd618,&DAT_100c3e840);
  *(undefined **)(unaff_x22 + 0x220) = puVar4;
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(undefined8 *)(puVar4 + 0x20) = 0x6e756f436d657469;
  *(undefined **)(puVar4 + 0x48) = puVar5;
  *(undefined8 *)(puVar4 + 0x28) = 0xe900000000000074;
  *(undefined8 *)(puVar4 + 0x30) = uVar10;
  puVar5 = puVar4;
  FUN_1002e0e24();
  *(undefined **)(unaff_x22 + 0x228) = puVar5;
  _swift_setDeallocating(puVar4);
  FUN_100005808(puVar4 + 0x20,&DAT_100fbd188,&DAT_100c3e4c0);
  *(long *)(unaff_x22 + 0x20) = lVar2;
  *(long *)(unaff_x22 + 0x28) = lVar1;
  *(undefined **)(unaff_x22 + 0x40) = &DAT_100c3ec00;
  *(long *)(unaff_x22 + 0x48) = unaff_x22 + 0x10;
  plVar6 = (long *)0x180;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x230) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002f29bc;
  FUN_1002e7914(FUN_1002e7914,0xd000000000000016,0x8000000100da1530,puVar5,&DAT_100c3ec08,
                unaff_x22 + 0x30);
  return;
}



/* Address: 0x1002f29bc | FUN_1002f29bc */

void FUN_1002f29bc(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar3 + 0x228);
  *(long *)(lVar3 + 0x238) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x230));
  _swift_bridgeObjectRelease(uVar2);
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x200);
    pcVar1 = FUN_1002e1208;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x200);
    pcVar1 = FUN_1002f2a30;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1002f2a30 | FUN_1002f2a30 */

void FUN_1002f2a30(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long unaff_x22;
  undefined8 uVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  
  uVar7 = *(undefined8 *)(unaff_x22 + 0x238);
  lVar8 = *(long *)(unaff_x22 + 0x220);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x210);
  FUN_1000d468c(unaff_x22 + 0x170);
  puVar4 = *(undefined **)(unaff_x22 + 0x188);
  uVar1 = *(undefined8 *)(unaff_x22 + 400);
  _Var5.unknown = puVar4;
  FUN_100004640(unaff_x22 + 0x170);
  Swift::_StringGuts::grow(0x1e,_Var5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x1e8) = uVar9;
  SVar10 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar10,SVar11);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  SVar10.bridgeObject = (void *)0xef203a64656c6961;
  SVar10.str = (char *)0x6620736d65746920;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar10,SVar12);
  pcVar6 = (char *)(unaff_x22 + 0x1c0);
  _swift_getErrorValue(uVar7,unaff_x22 + 0x1f0);
  SVar10 = (extension_Foundation)::Swift::Error::get_localizedDescription();
  SVar13.bridgeObject = param_4;
  SVar13.str = pcVar6;
  Swift::String::append(SVar10,SVar13);
  _swift_bridgeObjectRelease(SVar10.bridgeObject);
  FUN_1000d4e0c(0x207865646e696552,0xeb0000000020666f,puVar4,uVar1);
  _swift_bridgeObjectRelease(0xeb0000000020666f);
  FUN_100004594(unaff_x22 + 0x170);
  FUN_1000da768(unaff_x22 + 0x198);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
  lVar2 = *(long *)(unaff_x22 + 0x1b8);
  FUN_100004640(unaff_x22 + 0x198,uVar1);
  _swift_initStackObject(lVar8,unaff_x22 + 0x50);
  *(undefined8 *)(lVar8 + 0x18) = 4;
  *(undefined8 *)(lVar8 + 0x10) = 2;
  *(undefined8 *)(lVar8 + 0x20) = 0x656372756f73;
  *(undefined1 **)(lVar8 + 0x28) = &DAT_e600000000000000;
  *(undefined8 *)(lVar8 + 0x30) = 0xd000000000000016;
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined8 *)(lVar8 + 0x38) = 0x8000000100da1530;
  *(undefined **)(lVar8 + 0x48) = puVar4;
  *(undefined8 *)(lVar8 + 0x50) = 0x6e756f436d657469;
  *(undefined **)(lVar8 + 0x78) = PTR___type_metadata_for_Swift_Int_100eac6f8;
  *(undefined8 *)(lVar8 + 0x58) = 0xe900000000000074;
  *(undefined8 *)(lVar8 + 0x60) = uVar9;
  lVar3 = lVar8;
  FUN_1002e0e24();
  _swift_setDeallocating(lVar8);
  puVar4 = &DAT_100fbd188;
  FUN_1000037f0(&DAT_100fbd188,&DAT_100c3e4c0);
  _swift_arrayDestroy((undefined8 *)(lVar8 + 0x20),2,puVar4);
  (**(code **)(lVar2 + 0x28))(uVar7,lVar3,uVar1,lVar2);
  _swift_errorRelease(uVar7);
  _swift_bridgeObjectRelease(lVar3);
  FUN_100004594(unaff_x22 + 0x198);
                    /* WARNING: Could not recover jumptable at 0x0001002f2ca4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f2ca8 | FUN_1002f2ca8 */

void FUN_1002f2ca8(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x120;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_1002ea770(param_2,1);
  return;
}



/* Address: 0x1002f2d00 | FUN_1002f2d00 */

void FUN_1002f2d00(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  _swift_task_switch(FUN_1002f2d18);
  return;
}



/* Address: 0x1002f2d18 | FUN_1002f2d18 */

void FUN_1002f2d18(void)

{
  undefined8 uVar1;
  long lVar2;
  Task TVar3;
  undefined *puVar4;
  long unaff_x22;
  long lVar5;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  *(undefined1 *)(lVar2 + 0xf0) = 0;
  puVar4 = *(undefined **)(lVar2 + 0x120);
  if (puVar4 == (undefined *)0x0) {
    uVar1 = 0;
  }
  else {
    TVar3.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar4);
    uVar1 = *(undefined8 *)(lVar2 + 0x120);
  }
  lVar5 = *(long *)(unaff_x22 + 0x10);
  *(undefined8 *)(lVar2 + 0x120) = 0;
  _swift_release(uVar1);
  puVar4 = *(undefined **)(lVar5 + 0xf8);
  if (puVar4 != (undefined *)0x0) {
    TVar3.unknown = puVar4;
    _swift_retain();
    Swift::Task::cancel(TVar3);
    _swift_release(puVar4);
    lVar2 = *(long *)(lVar5 + 0xf8);
    *(long *)(unaff_x22 + 0x18) = lVar2;
    if (lVar2 != 0) {
      TVar3.unknown = (undefined *)(ulong)*(uint *)(PTR__get_value_100eaed40 + 4);
      _swift_retain(lVar2);
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0x20) = TVar3.unknown;
      *(long *)TVar3.unknown = unaff_x22;
      *(code **)(TVar3.unknown + 8) = FUN_1002f2e30;
      (extension_Swift)::Swift::Task::_get_value(TVar3);
      return;
    }
  }
  *(undefined8 *)(*(long *)(unaff_x22 + 0x10) + 0xf8) = 0;
                    /* WARNING: Could not recover jumptable at 0x0001002f2e2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f2e30 | FUN_1002f2e30 */

void FUN_1002f2e30(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  _swift_release(uVar1);
  _swift_task_switch(FUN_1002ec6f4,uVar3,0);
  return;
}



/* Address: 0x1002f2e84 | FUN_1002f2e84 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002f2e84(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  FUN_100004594(unaff_x20 + 0x70);
  FUN_100004594(unaff_x20 + 0x98);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xf8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x100));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x108));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x120));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x128);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x130);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x138);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x148);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x158));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x160);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x168);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x170);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x180);
  _swift_release(*(undefined8 *)(unaff_x20 + 400));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x198));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1a0));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x1a8));
  _swift_defaultActor_destroy();
  return;
}



/* Address: 0x1002f2f70 | FUN_1002f2f70 */

void FUN_1002f2f70(void)

{
  FUN_1002f2e84();
  _swift_defaultActor_deallocate();
  return;
}



/* Address: 0x1002f2f88 | FUN_1002f2f88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1002f2f88(void)

{
  return ZEXT816(0x100fbd748);
}



/* Address: 0x1002f2fa8 | FUN_1002f2fa8 */

void FUN_1002f2fa8(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  uVar1 = *unaff_x20;
  *(undefined8 *)(unaff_x22 + 0x20) = uVar1;
  _swift_task_switch(FUN_1002f2fc4,uVar1,0);
  return;
}



/* Address: 0x1002f2fc4 | FUN_1002f2fc4 */

void FUN_1002f2fc4(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  if ((*(byte *)(*(long *)(unaff_x22 + 0x20) + 0xf0) & 1) != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x18);
    FUN_1000da368(uVar1,uVar3);
    _swift_task_switch(thunk_FUN_1000e5808,uVar1,uVar3);
    return;
  }
  *(undefined1 *)(*(long *)(unaff_x22 + 0x20) + 0xf0) = 1;
  FUN_1002efaa0();
  plVar2 = (long *)0x3f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x28) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002f3054;
  FUN_1002efba0();
  return;
}



/* Address: 0x1002f3054 | FUN_1002f3054 */

void FUN_1002f3054(void)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  *(long *)(lVar4 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x28));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0x10);
    uVar3 = *(undefined8 *)(lVar4 + 0x18);
    FUN_1000da368(uVar2,uVar3);
    pcVar1 = thunk_FUN_1000e5808;
  }
  else {
    uVar2 = *(undefined8 *)(lVar4 + 0x20);
    pcVar1 = FUN_1002f30c8;
    uVar3 = 0;
  }
  _swift_task_switch(pcVar1,uVar2,uVar3);
  return;
}



/* Address: 0x1002f30c8 | FUN_1002f30c8 */

void FUN_1002f30c8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  *(undefined1 *)(*(long *)(unaff_x22 + 0x20) + 0xf0) = 0;
  _swift_willThrow();
  FUN_1000da368(uVar2,uVar1);
  _swift_task_switch(FUN_1002f312c,uVar2,uVar1);
  return;
}



/* Address: 0x1002f312c | FUN_1002f312c */

void FUN_1002f312c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001002f3134. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f3138 | FUN_1002f3138 */

void FUN_1002f3138(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002f3184;
  FUN_1002f2d00();
  return;
}



/* Address: 0x1002f3184 | FUN_1002f3184 */

void FUN_1002f3184(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x10);
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x20));
  FUN_1000da368(uVar3,uVar1);
  _swift_task_switch(thunk_FUN_1002e1208,uVar3,uVar1);
  return;
}



/* Address: 0x1002f31e4 | FUN_1002f31e4 */

void FUN_1002f31e4(undefined8 param_1,undefined8 param_2)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  plVar1 = (long *)0xb0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1002e7890;
  FUN_1002f1c30();
  return;
}



/* Address: 0x1002f3230 | FUN_1002f3230 */

void FUN_1002f3230(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x58) = unaff_x20;
  _swift_task_switch(FUN_1002f3248);
  return;
}



/* Address: 0x1002f3248 | FUN_1002f3248 */

void FUN_1002f3248(void)

{
  long lVar1;
  long *plVar2;
  long unaff_x22;
  long lVar3;
  
  lVar3 = *(long *)(unaff_x22 + 0x58);
  lVar1 = lVar3 + 0x70;
  FUN_100004640(lVar1,*(undefined8 *)(lVar3 + 0x88));
  FUN_1002ee7b4();
  plVar2 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1002f32d4;
  FUN_1002e2930(lVar3,lVar1,0xd00000000000003a,0x8000000100da1480);
  return;
}



/* Address: 0x1002f32d4 | FUN_1002f32d4 */

void FUN_1002f32d4(long param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  bool bVar3;
  _StringGuts _Var4;
  char *pcVar5;
  long unaff_x20;
  long *unaff_x22;
  long lVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  
  lVar7 = *unaff_x22;
  lVar6 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar7 + 0x60));
  if (unaff_x20 == 0) {
    lVar7 = *(long *)(param_1 + 0x10);
    _swift_bridgeObjectRelease(param_1);
    bVar3 = lVar7 == 0;
  }
  else {
    FUN_1000d468c(lVar7 + 0x10);
    puVar1 = *(undefined **)(lVar7 + 0x28);
    uVar2 = *(undefined8 *)(lVar7 + 0x30);
    _Var4.unknown = puVar1;
    FUN_100004640(lVar7 + 0x10);
    Swift::_StringGuts::grow(0x2f,_Var4);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar5 = (char *)(lVar7 + 0x38);
    _swift_getErrorValue();
    SVar8 = (extension_Foundation)::Swift::Error::get_localizedDescription();
    SVar9.bridgeObject = param_4;
    SVar9.str = pcVar5;
    Swift::String::append(SVar8,SVar9);
    _swift_bridgeObjectRelease(SVar8.bridgeObject);
    FUN_1000d4df0(0xd00000000000002d,0x8000000100da14c0,puVar1,uVar2);
    _swift_errorRelease();
    _swift_bridgeObjectRelease(0x8000000100da14c0);
    FUN_100004594(lVar7 + 0x10);
    bVar3 = false;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f3408. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar6 + 8))(bVar3);
  return;
}



/* Address: 0x1002f340c | FUN_1002f340c */

void FUN_1002f340c(void)

{
  undefined8 in_x3;
  undefined8 in_x4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = in_x3;
  *(undefined8 *)(unaff_x22 + 0x18) = in_x4;
  _swift_task_switch(FUN_1002f3424,0,0);
  return;
}



/* Address: 0x1002f3424 | FUN_1002f3424 */

void FUN_1002f3424(void)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  int *piVar7;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  lVar5 = *(long *)(lVar2 + 0x20);
  FUN_100004640(lVar2,uVar3);
  piVar7 = *(int **)(lVar5 + 0x20);
  iVar1 = *piVar7;
  plVar6 = (long *)(ulong)(uint)piVar7[1];
  _swift_retain(uVar4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar6;
  *plVar6 = unaff_x22;
  plVar6[1] = (long)FUN_1002f34c8;
                    /* WARNING: Could not recover jumptable at 0x0001002f34c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar7))
            (0,0,&UNK_100c3ebc8,*(undefined8 *)(unaff_x22 + 0x18),uVar3,lVar5);
  return;
}



/* Address: 0x1002f34c8 | FUN_1002f34c8 */

void FUN_1002f34c8(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x18);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001002f3508. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1002f350c | FUN_1002f350c */

void FUN_1002f350c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  param_4 = param_4 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x20) = param_4;
  if (param_4 != 0) {
    plVar1 = (long *)0x210;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x28) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1002f358c;
    FUN_1002e505c(param_3);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001002f3588. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f358c | FUN_1002f358c */

void FUN_1002f358c(void)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar4 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar4 + 0x10);
  uVar3 = *(undefined8 *)(lVar4 + 0x18);
  *(long *)(lVar4 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0x28));
  FUN_1000da368(uVar1,uVar3);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1002f3604;
  }
  else {
    pcVar2 = FUN_1002f3638;
  }
  _swift_task_switch(pcVar2,uVar1,uVar3);
  return;
}



/* Address: 0x1002f3604 | FUN_1002f3604 */

void FUN_1002f3604(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001002f3634. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f3638 | FUN_1002f3638 */

void FUN_1002f3638(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x20));
                    /* WARNING: Could not recover jumptable at 0x0001002f3668. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1002f366c | FUN_1002f366c */

undefined8 FUN_1002f366c(void)

{
  undefined *puVar1;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 local_30 [4];
  
  local_40 = 0;
  uStack_38 = 0;
  puVar1 = &DAT_100fbcf88;
  FUN_1000037f0(&DAT_100fbcf88,&DAT_100c3e050);
  FUN_1002ccc34(local_30,0x5364657865646e69,0xee00444965726f74,&local_40,puVar1);
  return local_30[0];
}



/* Address: 0x1002f36d4 | FUN_1002f36d4 */

void FUN_1002f36d4(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess((undefined8 *)(lVar1 + 0x128),auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x130);
  uVar3 = *(undefined8 *)(lVar1 + 0x128);
  uStack_78 = *(undefined8 *)(lVar1 + 0x140);
  uVar6 = *(undefined8 *)(lVar1 + 0x138);
  uStack_68 = *(undefined8 *)(lVar1 + 0x150);
  uVar4 = *(undefined8 *)(lVar1 + 0x148);
  uVar2 = *(undefined8 *)(lVar1 + 0x158);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fbd950,&DAT_100c3eaf8);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1002f37c0 | FUN_1002f37c0 */

void FUN_1002f37c0(undefined8 param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long extraout_x8;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar3 = *param_2;
  puVar1 = &DAT_100c3eb08;
  _swift_getKeyPath(&DAT_100c3eb08);
  puVar2 = &DAT_100c3eb30;
  _swift_getKeyPath(&DAT_100c3eb30);
  FUN_1002f39e4(param_1,&stack0xffffffffffffffc0 + -extraout_x8);
  _swift_retain(uVar3);
  FUN_1002cb5a0(&stack0xffffffffffffffc0 + -extraout_x8,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x1002f387c | FUN_1002f387c */

void FUN_1002f387c(undefined8 param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  lVar1 = *param_2;
  _swift_beginAccess(lVar1 + 0x160,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x168);
  uVar3 = *(undefined8 *)(lVar1 + 0x160);
  uStack_78 = *(undefined8 *)(lVar1 + 0x178);
  uVar6 = *(undefined8 *)(lVar1 + 0x170);
  uStack_68 = *(undefined8 *)(lVar1 + 0x188);
  uVar4 = *(undefined8 *)(lVar1 + 0x180);
  uVar2 = *(undefined8 *)(lVar1 + 400);
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fbd958,&DAT_100c3eb00);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x1002f3964 | FUN_1002f3964 */

void FUN_1002f3964(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar5 = *param_2;
  puVar3 = &DAT_100c3eb70;
  _swift_getKeyPath(&DAT_100c3eb70);
  puVar4 = &DAT_100c3eb98;
  _swift_getKeyPath(&DAT_100c3eb98);
  local_50 = uVar1;
  uStack_48 = uVar2;
  _swift_bridgeObjectRetain(uVar2);
  _swift_retain(uVar5);
  FUN_1002cb5a0(&local_50,uVar5,puVar3,puVar4);
  return;
}



/* Address: 0x1002f39e4 | FUN_1002f39e4 */

undefined8 FUN_1002f39e4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbcf60;
  FUN_1000037f0(&DAT_100fbcf60,&DAT_100c3e020);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002f3a34 | thunk_FUN_1002f36d4 */

void thunk_FUN_1002f36d4(void)

{
  FUN_1002f36d4();
  return;
}



/* Address: 0x1002f3a38 | thunk_FUN_1002f37c0 */

void thunk_FUN_1002f37c0(void)

{
  FUN_1002f37c0();
  return;
}



/* Address: 0x1002f3a3c | FUN_1002f3a3c */

void FUN_1002f3a3c(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f3a60 | FUN_1002f3a60 */

void FUN_1002f3a60(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1002e267c(plVar1,param_1,param_2,param_3);
  return;
}



/* Address: 0x1002f3acc | FUN_1002f3acc */

void FUN_1002f3acc(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f3b00 | FUN_1002f3b00 */

void FUN_1002f3b00(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  plVar3 = (long *)&DAT_00000030;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002f340c(plVar3,param_1,uVar1,uVar2,unaff_x20 + 0x20,uVar4);
  return;
}



/* Address: 0x1002f3b78 | thunk_FUN_1002f387c */

void thunk_FUN_1002f387c(void)

{
  FUN_1002f387c();
  return;
}



/* Address: 0x1002f3b7c | thunk_FUN_1002f3964 */

void thunk_FUN_1002f3964(void)

{
  FUN_1002f3964();
  return;
}



/* Address: 0x1002f3b80 | FUN_1002f3b80 */

undefined8 FUN_1002f3b80(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1002e35d4();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1002f3bc4 | FUN_1002f3bc4 */

void FUN_1002f3bc4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1002f350c(param_1,param_2,param_3);
  return;
}



/* Address: 0x1002f3c2c | FUN_1002f3c2c */

void FUN_1002f3c2c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f3c60 | FUN_1002f3c60 */

void FUN_1002f3c60(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002f3c8c | FUN_1002f3c8c */

void FUN_1002f3c8c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_1002f2ca8(uVar1,uVar2);
  return;
}



/* Address: 0x1002f3cdc | FUN_1002f3cdc */

void FUN_1002f3cdc(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x20;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100008284;
  FUN_1002f2648();
  return;
}



/* Address: 0x1002f3d24 | FUN_1002f3d24 */

undefined1  [16] FUN_1002f3d24(void)

{
  return ZEXT816(0x100ec8df0);
}


