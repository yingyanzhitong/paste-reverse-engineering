/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001abc30 | FUN_1001abc30 */

void FUN_1001abc30(void)

{
  FUN_1001aac3c(&DAT_100fb4768,&DAT_101057518,FUN_1001abc14);
  return;
}



/* Address: 0x1001abc4c | FUN_1001abc4c */

void FUN_1001abc4c(void)

{
  FUN_1001aac98(&DAT_100fb4768,&DAT_101057518,FUN_1001abc14);
  return;
}



/* Address: 0x1001abc68 | FUN_1001abc68 */

void FUN_1001abc68(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057530,0x79732f706c65682f,0xea0000000000636e);
  return;
}



/* Address: 0x1001abc8c | FUN_1001abc8c */

void FUN_1001abc8c(void)

{
  FUN_1001aac3c(&DAT_100fb4770,&DAT_101057530,FUN_1001abc68);
  return;
}



/* Address: 0x1001abca8 | FUN_1001abca8 */

void FUN_1001abca8(void)

{
  FUN_1001aac98(&DAT_100fb4770,&DAT_101057530,FUN_1001abc68);
  return;
}



/* Address: 0x1001abcc4 | FUN_1001abcc4 */

void FUN_1001abcc4(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057548,0x796361766972702f,&DAT_e800000000000000);
  return;
}



/* Address: 0x1001abce4 | FUN_1001abce4 */

void FUN_1001abce4(void)

{
  FUN_1001aac3c(&DAT_100fb4778,&DAT_101057548,FUN_1001abcc4);
  return;
}



/* Address: 0x1001abd00 | FUN_1001abd00 */

void FUN_1001abd00(void)

{
  FUN_1001aac98(&DAT_100fb4778,&DAT_101057548,FUN_1001abcc4);
  return;
}



/* Address: 0x1001abd1c | FUN_1001abd1c */

void FUN_1001abd1c(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057560,0x736d7265742f,&DAT_e600000000000000);
  return;
}



/* Address: 0x1001abd38 | FUN_1001abd38 */

void FUN_1001abd38(void)

{
  FUN_1001aac3c(&DAT_100fb4780,&DAT_101057560,FUN_1001abd1c);
  return;
}



/* Address: 0x1001abd54 | FUN_1001abd54 */

void FUN_1001abd54(void)

{
  FUN_1001aac98(&DAT_100fb4780,&DAT_101057560,FUN_1001abd1c);
  return;
}



/* Address: 0x1001abd70 | FUN_1001abd70 */

void FUN_1001abd70(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057578,0x352d65747361702f,&DAT_e800000000000000);
  return;
}



/* Address: 0x1001abd90 | FUN_1001abd90 */

void FUN_1001abd90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,param_2);
  FUN_1000cd990(UVar1.unknown,param_2);
  FUN_1001ab2ec(UVar1.unknown,param_3,param_4);
  return;
}



/* Address: 0x1001abdec | FUN_1001abdec */

void FUN_1001abdec(void)

{
  FUN_1001aac3c(&DAT_100fb4788,&DAT_101057578,FUN_1001abd70);
  return;
}



/* Address: 0x1001abe08 | FUN_1001abe08 */

void FUN_1001abe08(void)

{
  FUN_1001aac98(&DAT_100fb4788,&DAT_101057578,FUN_1001abd70);
  return;
}



/* Address: 0x1001abe24 | FUN_1001abe24 */

void FUN_1001abe24(void)

{
  URL UVar1;
  URL UVar2;
  URL UVar3;
  long extraout_x8;
  long lVar4;
  String SVar5;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  lVar4 = *(long *)(UVar1.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  FUN_1000ce204();
  FUN_1000cd990(UVar1.unknown,&DAT_101057590);
  if (DAT_100fb4760 != -1) {
    _swift_once(&DAT_100fb4760,FUN_1001abbc0);
  }
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,&DAT_101057500);
  UVar3 = UVar1;
  (**(code **)(lVar4 + 0x10))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar2.unknown);
  SVar5.bridgeObject = (void *)0x8000000100d980d0;
  SVar5.str = (char *)0xd000000000000015;
  Foundation::URL::appendingPathComponent(SVar5,UVar3);
  (**(code **)(lVar4 + 8))
            (&stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),UVar1.unknown);
  return;
}



/* Address: 0x1001abf1c | FUN_1001abf1c */

void FUN_1001abf1c(void)

{
  FUN_1001aac3c(&DAT_100fb4790,&DAT_101057590,FUN_1001abe24);
  return;
}



/* Address: 0x1001abf38 | FUN_1001abf38 */

void FUN_1001abf38(void)

{
  FUN_1001aac98(&DAT_100fb4790,&DAT_101057590,FUN_1001abe24);
  return;
}



/* Address: 0x1001abf54 | FUN_1001abf54 */

void FUN_1001abf54(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010575a8);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010575a8);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d980b0;
  SVar9.str = (char *)0xd000000000000010;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac06c);
  (*pcVar2)();
}



/* Address: 0x1001ac06c | FUN_1001ac06c */

void FUN_1001ac06c(void)

{
  FUN_1001aac3c(&DAT_100fb4798,&DAT_1010575a8,FUN_1001abf54);
  return;
}



/* Address: 0x1001ac088 | FUN_1001ac088 */

void FUN_1001ac088(void)

{
  FUN_1001aac98(&DAT_100fb4798,&DAT_1010575a8,FUN_1001abf54);
  return;
}



/* Address: 0x1001ac0a4 | FUN_1001ac0a4 */

void FUN_1001ac0a4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010575c0);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010575c0);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d98090;
  SVar9.str = (char *)0xd000000000000012;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac1bc);
  (*pcVar2)();
}



/* Address: 0x1001ac1bc | FUN_1001ac1bc */

void FUN_1001ac1bc(void)

{
  FUN_1001aac3c(&DAT_100fb47a0,&DAT_1010575c0,FUN_1001ac0a4);
  return;
}



/* Address: 0x1001ac1d8 | FUN_1001ac1d8 */

void FUN_1001ac1d8(void)

{
  FUN_1001aac98(&DAT_100fb47a0,&DAT_1010575c0,FUN_1001ac0a4);
  return;
}



/* Address: 0x1001ac1f4 | FUN_1001ac1f4 */

void FUN_1001ac1f4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010575d8);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010575d8);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d98070;
  SVar9.str = (char *)0xd000000000000012;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac30c);
  (*pcVar2)();
}



/* Address: 0x1001ac30c | FUN_1001ac30c */

void FUN_1001ac30c(void)

{
  FUN_1001aac3c(&DAT_100fb47a8,&DAT_1010575d8,FUN_1001ac1f4);
  return;
}



/* Address: 0x1001ac328 | FUN_1001ac328 */

void FUN_1001ac328(void)

{
  FUN_1001aac98(&DAT_100fb47a8,&DAT_1010575d8,FUN_1001ac1f4);
  return;
}



/* Address: 0x1001ac344 | FUN_1001ac344 */

void FUN_1001ac344(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_1010575f0,0x747865742d77656e,0xed00006d6574692d);
  return;
}



/* Address: 0x1001ac370 | FUN_1001ac370 */

void FUN_1001ac370(void)

{
  FUN_1001aac3c(&DAT_100fb47b0,&DAT_1010575f0,FUN_1001ac344);
  return;
}



/* Address: 0x1001ac38c | FUN_1001ac38c */

void FUN_1001ac38c(void)

{
  FUN_1001aac98(&DAT_100fb47b0,&DAT_1010575f0,FUN_1001ac344);
  return;
}



/* Address: 0x1001ac3a8 | FUN_1001ac3a8 */

void FUN_1001ac3a8(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057608,0x6b2d656c62616e65,0xef6472616f627965);
  return;
}



/* Address: 0x1001ac3d4 | FUN_1001ac3d4 */

void FUN_1001ac3d4(void)

{
  FUN_1001aac3c(&DAT_100fb47b8,&DAT_101057608,FUN_1001ac3a8);
  return;
}



/* Address: 0x1001ac3f0 | FUN_1001ac3f0 */

void FUN_1001ac3f0(void)

{
  FUN_1001aac98(&DAT_100fb47b8,&DAT_101057608,FUN_1001ac3a8);
  return;
}



/* Address: 0x1001ac40c | FUN_1001ac40c */

void FUN_1001ac40c(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057620,0x686372616573,&DAT_e600000000000000);
  return;
}



/* Address: 0x1001ac428 | FUN_1001ac428 */

void FUN_1001ac428(void)

{
  FUN_1001aac3c(&DAT_100fb47c0,&DAT_101057620,FUN_1001ac40c);
  return;
}



/* Address: 0x1001ac444 | FUN_1001ac444 */

void FUN_1001ac444(void)

{
  FUN_1001aac98(&DAT_100fb47c0,&DAT_101057620,FUN_1001ac40c);
  return;
}



/* Address: 0x1001ac460 | FUN_1001ac460 */

void FUN_1001ac460(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057638,0x636f642d6e616373,0xed0000746e656d75);
  return;
}



/* Address: 0x1001ac48c | FUN_1001ac48c */

void FUN_1001ac48c(void)

{
  FUN_1001aac3c(&DAT_100fb47c8,&DAT_101057638,FUN_1001ac460);
  return;
}



/* Address: 0x1001ac4a8 | FUN_1001ac4a8 */

void FUN_1001ac4a8(void)

{
  FUN_1001aac98(&DAT_100fb47c8,&DAT_101057638,FUN_1001ac460);
  return;
}



/* Address: 0x1001ac4c4 | FUN_1001ac4c4 */

void FUN_1001ac4c4(undefined8 param_1,undefined8 param_2)

{
  FUN_1001ac518(param_1,param_2,0x2f7473696c,&DAT_e500000000000000);
  return;
}



/* Address: 0x1001ac4d8 | FUN_1001ac4d8 */

void FUN_1001ac4d8(undefined8 param_1,undefined8 param_2)

{
  FUN_1001ac518(param_1,param_2,0x2d77656976657270,0xed00002f6d657469);
  return;
}



/* Address: 0x1001ac4fc | FUN_1001ac4fc */

void FUN_1001ac4fc(undefined8 param_1,undefined8 param_2)

{
  FUN_1001ac518(param_1,param_2,0x6574692d74696465,0xea00000000002f6d);
  return;
}



/* Address: 0x1001ac518 | FUN_1001ac518 */

void FUN_1001ac518(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  String SVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  code *pcVar4;
  undefined *puVar5;
  URL UVar6;
  long lVar7;
  char *pcVar8;
  void *pvVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  char *local_50;
  undefined1 *puStack_48;
  
  puVar5 = &DAT_100fb4718;
  pcVar8 = param_4;
  pvVar9 = param_5;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)&local_50 - extraout_x8;
  SVar12.bridgeObject = param_3;
  SVar12.str = param_2;
  SVar13.bridgeObject = pvVar9;
  SVar13.str = pcVar8;
  local_50 = param_4;
  puStack_48 = param_5;
  Swift::String::append(SVar12,SVar13);
  puVar2 = puStack_48;
  SVar1.bridgeObject = puStack_48;
  SVar1.str = local_50;
  local_50 = (char *)0x2f2f3a6574736170;
  puStack_48 = &DAT_e800000000000000;
  SVar14.bridgeObject = pvVar9;
  SVar14.str = pcVar8;
  Swift::String::append(SVar1,SVar14);
  puVar3 = puStack_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar3);
  UVar6 = Foundation::URL::typeMetadataAccessor();
  lVar11 = *(long *)(UVar6.unknown + -8);
  lVar7 = lVar10;
  (**(code **)(lVar11 + 0x30))(lVar10,1,UVar6.unknown);
  if ((int)lVar7 != 1) {
    (**(code **)(lVar11 + 0x20))(param_1,lVar10,UVar6.unknown);
    _swift_bridgeObjectRelease(puVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1001ac634);
  (*pcVar4)();
}



/* Address: 0x1001ac634 | FUN_1001ac634 */

void FUN_1001ac634(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_101057650);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_101057650);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d98050;
  SVar9.str = (char *)0xd000000000000011;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac74c);
  (*pcVar2)();
}



/* Address: 0x1001ac74c | FUN_1001ac74c */

void FUN_1001ac74c(void)

{
  FUN_1001aac3c(&DAT_100fb47d0,&DAT_101057650,FUN_1001ac634);
  return;
}



/* Address: 0x1001ac768 | FUN_1001ac768 */

void FUN_1001ac768(void)

{
  FUN_1001aac98(&DAT_100fb47d0,&DAT_101057650,FUN_1001ac634);
  return;
}



/* Address: 0x1001ac784 | FUN_1001ac784 */

void FUN_1001ac784(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057668,0x6c6c6177796170,&DAT_e700000000000000);
  return;
}



/* Address: 0x1001ac7a4 | FUN_1001ac7a4 */

void FUN_1001ac7a4(void)

{
  FUN_1001aac3c(&DAT_100fb47d8,&DAT_101057668,FUN_1001ac784);
  return;
}



/* Address: 0x1001ac7c0 | FUN_1001ac7c0 */

void FUN_1001ac7c0(void)

{
  FUN_1001aac98(&DAT_100fb47d8,&DAT_101057668,FUN_1001ac784);
  return;
}



/* Address: 0x1001ac7dc | FUN_1001ac7dc */

void FUN_1001ac7dc(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057680,0,0xe000000000000000);
  return;
}



/* Address: 0x1001ac7f0 | FUN_1001ac7f0 */

void FUN_1001ac7f0(void)

{
  FUN_1001aac3c(&DAT_100fb47e0,&DAT_101057680,FUN_1001ac7dc);
  return;
}



/* Address: 0x1001ac80c | FUN_1001ac80c */

void FUN_1001ac80c(void)

{
  FUN_1001aac98(&DAT_100fb47e0,&DAT_101057680,FUN_1001ac7dc);
  return;
}



/* Address: 0x1001ac828 | FUN_1001ac828 */

void FUN_1001ac828(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_101057698,0x6e65726566657270,0xeb00000000736563);
  return;
}



/* Address: 0x1001ac850 | FUN_1001ac850 */

void FUN_1001ac850(void)

{
  FUN_1001aac3c(&DAT_100fb47e8,&DAT_101057698,FUN_1001ac828);
  return;
}



/* Address: 0x1001ac86c | FUN_1001ac86c */

void FUN_1001ac86c(void)

{
  FUN_1001aac98(&DAT_100fb47e8,&DAT_101057698,FUN_1001ac828);
  return;
}



/* Address: 0x1001ac888 | FUN_1001ac888 */

void FUN_1001ac888(undefined8 param_1)

{
  FUN_1001ac8a4(param_1,&DAT_1010576b0,0x74756f6261,&DAT_e500000000000000);
  return;
}



/* Address: 0x1001ac8a4 | FUN_1001ac8a4 */

void FUN_1001ac8a4(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  char *pcVar7;
  void *pvVar8;
  long extraout_x8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  puVar3 = &DAT_100fb4718;
  pcVar7 = param_3;
  pvVar8 = param_4;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_50 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,param_2);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,param_2);
  local_50 = 0x2f2f3a6574736170;
  puStack_48 = &DAT_e800000000000000;
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  SVar12.bridgeObject = pvVar8;
  SVar12.str = pcVar7;
  Swift::String::append(SVar11,SVar12);
  puVar1 = puStack_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar10 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar10 + 0x20))(UVar5.unknown,lVar9,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ac9b8);
  (*pcVar2)();
}



/* Address: 0x1001ac9b8 | FUN_1001ac9b8 */

void FUN_1001ac9b8(void)

{
  FUN_1001aac3c(&DAT_100fb47f0,&DAT_1010576b0,FUN_1001ac888);
  return;
}



/* Address: 0x1001ac9d4 | FUN_1001ac9d4 */

void FUN_1001ac9d4(void)

{
  FUN_1001aac98(&DAT_100fb47f0,&DAT_1010576b0,FUN_1001ac888);
  return;
}



/* Address: 0x1001ac9f0 | FUN_1001ac9f0 */

void FUN_1001ac9f0(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010576c8);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010576c8);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d98030;
  SVar9.str = (char *)0xd000000000000013;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001acb08);
  (*pcVar2)();
}



/* Address: 0x1001acb08 | FUN_1001acb08 */

void FUN_1001acb08(void)

{
  FUN_1001aac3c(&DAT_100fb47f8,&DAT_1010576c8,FUN_1001ac9f0);
  return;
}



/* Address: 0x1001acb24 | FUN_1001acb24 */

void FUN_1001acb24(void)

{
  FUN_1001aac98(&DAT_100fb47f8,&DAT_1010576c8,FUN_1001ac9f0);
  return;
}



/* Address: 0x1001acb40 | FUN_1001acb40 */

void FUN_1001acb40(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_40;
  undefined1 *puStack_38;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_40 - extraout_x8;
  UVar4 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar4.unknown,&DAT_1010576e0);
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_1010576e0);
  local_40 = 0x2f2f3a6574736170;
  puStack_38 = &DAT_e800000000000000;
  SVar9.bridgeObject = (void *)0x8000000100d98010;
  SVar9.str = (char *)0xd000000000000014;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar9,SVar10);
  puVar1 = puStack_38;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar6 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar8 + 0x20))(UVar5.unknown,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001acc58);
  (*pcVar2)();
}



/* Address: 0x1001acc58 | FUN_1001acc58 */

void FUN_1001acc58(void)

{
  FUN_1001aac3c(&DAT_100fb4800,&DAT_1010576e0,FUN_1001acb40);
  return;
}


