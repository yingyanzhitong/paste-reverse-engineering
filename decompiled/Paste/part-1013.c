/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100af4920 | FUN_100af4920 */

long FUN_100af4920(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  _swift_allocObject();
  puVar1 = &DAT_100c95e30;
  _swift_getKeyPath();
  puVar2 = &DAT_100ff9390;
  FUN_1000037f0(&DAT_100ff9390,&DAT_100c95e60);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  uVar3 = 0;
  FUN_100af6b30();
  _swift_allocObject();
  FUN_100af576c();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  FUN_100076508(param_1,unaff_x20 + 0x20);
  return unaff_x20;
}



/* Address: 0x100af49cc | FUN_100af49cc */

void FUN_100af49cc(undefined8 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  puVar1 = &DAT_100c95e30;
  _swift_getKeyPath();
  puVar2 = &DAT_100ff9390;
  FUN_1000037f0(&DAT_100ff9390,&DAT_100c95e60);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x10) = puVar1;
  uVar3 = 0;
  FUN_100af6b30();
  _swift_allocObject();
  FUN_100af576c();
  *(undefined8 *)(unaff_x20 + 0x18) = uVar3;
  FUN_100076508(param_1,unaff_x20 + 0x20);
  return;
}



/* Address: 0x100af4a68 | FUN_100af4a68 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100af4a68(void)

{
  undefined8 uVar1;
  void *pvVar2;
  LocalizedStringResource LVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  URL UVar6;
  URL UVar7;
  long lVar8;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar9;
  String SVar10;
  void *local_90;
  char *local_88;
  String local_80;
  undefined8 local_70 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)((long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar4 = (undefined8 *)0x0;
  FUN_1003efa8c();
  puVar5 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(puVar4[-1] + 0x40));
  puVar9 = (undefined8 *)(LVar3.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  FUN_100af540c();
  if (((ulong)puVar5 & 1) != 0) {
    FUN_1000da768(local_70 + 1);
    FUN_10020d190();
    local_70[0] = *puVar5;
    uVar1 = puVar5[1];
    _swift_bridgeObjectRetain(uVar1);
    FUN_1001d1954(LVar3.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
    local_80.str = SVar10.bridgeObject;
    local_80.bridgeObject = SVar10.str;
    FUN_1001d17d4(LVar3.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
    local_90 = SVar10.bridgeObject;
    local_88 = SVar10.str;
    FUN_1001d1654(LVar3.unknown);
    SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
    if (DAT_100ff9398 != -1) {
      _swift_once(&DAT_100ff9398,FUN_100af5180);
    }
    UVar6 = Foundation::URL::typeMetadataAccessor();
    UVar7 = UVar6;
    FUN_1000cd990(UVar6.unknown,&DAT_101058340);
    puVar5 = (undefined8 *)((long)puVar9 + (long)*(int *)(puVar4 + 4));
    lVar8 = 0;
    FUN_1003efaa0();
    (**(code **)(*(long *)(UVar6.unknown + -8) + 0x10))
              ((long)puVar5 + (long)*(int *)(lVar8 + 0x18),UVar7.unknown,UVar6.unknown);
    *puVar5 = 0;
    puVar5[1] = 0;
    *(String *)(puVar5 + 2) = SVar10;
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))
              ((long)puVar9 + (long)*(int *)((long)puVar4 + 0x24),1,1,lVar8);
    *puVar9 = 0x70704165746172;
    puVar9[1] = &DAT_e700000000000000;
    pvVar2 = local_80.bridgeObject;
    puVar9[2] = local_70[0];
    puVar9[3] = uVar1;
    puVar9[4] = pvVar2;
    puVar9[5] = local_80.str;
    puVar9[6] = local_88;
    puVar9[7] = local_90;
    FUN_1003fea8c(puVar9);
    _swift_release(local_70[1]);
    FUN_10008c284(puVar9);
  }
  return;
}



/* Address: 0x100af4c6c | FUN_100af4c6c */

void FUN_100af4c6c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  LocalizedStringResource LVar3;
  URL UVar4;
  URL UVar5;
  long lVar6;
  long lVar7;
  long extraout_x8;
  LocalizedStringResource localized;
  String SVar8;
  String SVar9;
  char *local_80;
  void *local_78;
  char *local_70;
  undefined8 local_68;
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  localized.unknown = (undefined *)((long)&local_80 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  FUN_10020d190();
  local_68 = *(undefined8 *)LVar3.unknown;
  uVar2 = *(undefined8 *)((long)LVar3.unknown + 8);
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001d1954(localized.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(localized);
  local_78 = SVar8.bridgeObject;
  local_70 = SVar8.str;
  FUN_1001d17d4(localized.unknown);
  SVar8 = (extension_Foundation)::Swift::String::init(localized);
  local_80 = SVar8.str;
  FUN_1001d1654(localized.unknown);
  SVar9 = (extension_Foundation)::Swift::String::init(localized);
  if (DAT_100ff9398 != -1) {
    _swift_once(&DAT_100ff9398,FUN_100af5180);
  }
  UVar4 = Foundation::URL::typeMetadataAccessor();
  UVar5 = UVar4;
  FUN_1000cd990(UVar4.unknown,&DAT_101058340);
  lVar6 = 0;
  FUN_1003efa8c();
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar6 + 0x20));
  lVar7 = 0;
  FUN_1003efaa0();
  (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))
            ((long)puVar1 + (long)*(int *)(lVar7 + 0x18),UVar5.unknown,UVar4.unknown);
  *puVar1 = 0;
  puVar1[1] = 0;
  *(String *)(puVar1 + 2) = SVar9;
  (**(code **)(*(long *)(lVar7 + -8) + 0x38))
            ((long)param_1 + (long)*(int *)(lVar6 + 0x24),1,1,lVar7);
  *param_1 = 0x70704165746172;
  param_1[1] = &DAT_e700000000000000;
  param_1[2] = local_68;
  param_1[3] = uVar2;
  param_1[4] = local_70;
  param_1[5] = local_78;
  param_1[6] = local_80;
  param_1[7] = SVar8.bridgeObject;
  return;
}



/* Address: 0x100af4e10 | FUN_100af4e10 */

/* WARNING: Type propagation algorithm not settling */

void FUN_100af4e10(void)

{
  undefined8 uVar1;
  void *pvVar2;
  LocalizedStringResource LVar3;
  long lVar4;
  URL UVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined8 *puVar7;
  long unaff_x20;
  long lVar8;
  undefined8 *puVar9;
  String SVar10;
  void *local_a0;
  char *local_98;
  String local_90;
  code *local_80 [2];
  long local_70 [2];
  
  LVar3 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar3.unknown + -8) + 0x40));
  LVar3.unknown = (undefined *)((long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_1003efa8c();
  local_70[0] = lVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  puVar7 = (undefined8 *)(LVar3.unknown + -(extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar9 = (undefined8 *)((long)puVar7 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
  uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
  lVar4 = *(long *)(unaff_x20 + 0x40);
  FUN_100004640(unaff_x20 + 0x20,uVar1);
  if (DAT_100ff93a0 != -1) {
    _swift_once(&DAT_100ff93a0,FUN_100af5204);
  }
  UVar6 = UVar5;
  FUN_1000cd990(UVar5.unknown,&DAT_101058358);
  local_80[1] = *(code **)(lVar8 + 0x10);
  (*local_80[1])(puVar9,UVar6.unknown,UVar5.unknown);
  (**(code **)(lVar4 + 8))(puVar9,uVar1,lVar4);
  (**(code **)(lVar8 + 8))(puVar9,UVar5.unknown);
  FUN_100af64a0();
  FUN_1000da768(local_70 + 1);
  FUN_10020d190();
  local_80[0] = (code *)*puVar9;
  uVar1 = puVar9[1];
  _swift_bridgeObjectRetain(uVar1);
  FUN_1001d1954(LVar3.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
  local_90.str = SVar10.bridgeObject;
  local_90.bridgeObject = SVar10.str;
  FUN_1001d17d4(LVar3.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
  local_a0 = SVar10.bridgeObject;
  local_98 = SVar10.str;
  FUN_1001d1654(LVar3.unknown);
  SVar10 = (extension_Foundation)::Swift::String::init(LVar3);
  if (DAT_100ff9398 != -1) {
    _swift_once(&DAT_100ff9398,FUN_100af5180);
  }
  UVar6 = UVar5;
  FUN_1000cd990(UVar5.unknown,&DAT_101058340);
  lVar4 = local_70[0];
  puVar9 = (undefined8 *)((long)puVar7 + (long)*(int *)(local_70[0] + 0x20));
  lVar8 = 0;
  FUN_1003efaa0();
  (*local_80[1])((long)puVar9 + (long)*(int *)(lVar8 + 0x18),UVar6.unknown,UVar5.unknown);
  *puVar9 = 0;
  puVar9[1] = 0;
  *(String *)(puVar9 + 2) = SVar10;
  (**(code **)(*(long *)(lVar8 + -8) + 0x38))((long)puVar7 + (long)*(int *)(lVar4 + 0x24),1,1,lVar8)
  ;
  *puVar7 = 0x70704165746172;
  puVar7[1] = &DAT_e700000000000000;
  pvVar2 = local_90.bridgeObject;
  puVar7[2] = local_80[0];
  puVar7[3] = uVar1;
  puVar7[4] = pvVar2;
  puVar7[5] = local_90.str;
  puVar7[6] = local_98;
  puVar7[7] = local_a0;
  FUN_1003feee0(0x70704165746172,&DAT_e700000000000000);
  _swift_release(local_70[1]);
  FUN_10008c284(puVar7);
  return;
}



/* Address: 0x100af50c8 | FUN_100af50c8 */

void FUN_100af50c8(void)

{
  FUN_1001aac3c(&DAT_100ff93a0,&DAT_101058358,FUN_100af5204);
  return;
}



/* Address: 0x100af50e4 | FUN_100af50e4 */

void FUN_100af50e4(void)

{
  FUN_100af5e84();
  return;
}



/* Address: 0x100af5104 | FUN_100af5104 */

void FUN_100af5104(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  return;
}



/* Address: 0x100af5130 | FUN_100af5130 */

void FUN_100af5130(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  FUN_100004594(unaff_x20 + 0x20);
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100af5164 | FUN_100af5164 */

void FUN_100af5164(void)

{
  FUN_1001aac3c(&DAT_100ff9398,&DAT_101058340,FUN_100af5180);
  return;
}



/* Address: 0x100af5180 | FUN_100af5180 */

void FUN_100af5180(void)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,&DAT_101058340);
  FUN_1000cd990(UVar1.unknown,&DAT_101058340);
  FUN_1001ab5b4(UVar1.unknown,0x65722d657661656c,0xec00000077656976);
  return;
}



/* Address: 0x100af51e8 | FUN_100af51e8 */

void FUN_100af51e8(void)

{
  FUN_1001aac98(&DAT_100ff9398,&DAT_101058340,FUN_100af5180);
  return;
}



/* Address: 0x100af5204 | FUN_100af5204 */

void FUN_100af5204(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100ff9458;
  FUN_1000037f0(&DAT_100ff9458,&DAT_100c95ea8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_101058358);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_101058358);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100af52e8);
  (*pcVar1)();
}



/* Address: 0x100af52e8 | FUN_100af52e8 */

void FUN_100af52e8(void)

{
  FUN_1001aac98(&DAT_100ff93a0,&DAT_101058358,FUN_100af5204);
  return;
}



/* Address: 0x100af5304 | FUN_100af5304 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100af5304(void)

{
  return ZEXT816(0x100ff93e8);
}



/* Address: 0x100af5324 | FUN_100af5324 */

void FUN_100af5324(undefined8 param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  _swift_beginAccess(unaff_x20 + 0x28,auStack_a8,0,0);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_68 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x58);
  local_90 = uVar2;
  uStack_88 = uVar4;
  local_80 = uVar5;
  local_70 = uVar3;
  local_60 = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar4);
  _swift_retain(uVar5);
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar1);
  _swift_release(uVar3);
  _swift_release(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  return;
}



/* Address: 0x100af540c | FUN_100af540c */

bool FUN_100af540c(void)

{
  bool bVar1;
  undefined *puVar2;
  long lVar3;
  Date DVar4;
  Date DVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  undefined8 uVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auStack_100 [8];
  long local_f8;
  long local_f0;
  long local_e8;
  undefined1 auStack_e0 [24];
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined1 auStack_b8 [24];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  puVar2 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_100 + -extraout_x8;
  lVar3 = 0;
  FUN_100af7128();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar12 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar4.unknown + -8);
  DVar5 = DVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar3 = lVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_f8 = lVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_e8 = lVar3 - extraout_x12;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100af8298();
  puVar2 = DVar5.unknown;
  FUN_100af82d8();
  _swift_retain(uVar8);
  _swift_retain(uVar11);
  _swift_retain(uVar13);
  FUN_1002d0c78(&local_a0,uVar8,uVar11,uVar13,&DAT_100f32b40,DVar5.unknown,puVar2);
  _swift_release(uVar13);
  _swift_release(uVar11);
  _swift_release(uVar8);
  _swift_bridgeObjectRelease(uStack_98);
  _swift_bridgeObjectRelease(local_90);
  if ((char)local_a0 == '\x01') {
    _swift_beginAccess(unaff_x20 + 0x28,auStack_b8,0,0);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
    local_f0 = lVar9;
    local_a0 = uVar13;
    uStack_98 = uVar14;
    local_90 = uVar15;
    local_80 = uVar8;
    local_70 = uVar11;
    _swift_retain(uVar13);
    _swift_retain(uVar14);
    _swift_retain(uVar15);
    _swift_retain(uVar8);
    _swift_retain(uVar11);
    FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
    FUN_1002ca7e0(lVar12);
    _swift_release(uVar11);
    lVar3 = local_f0;
    _swift_release(uVar8);
    _swift_release(uVar15);
    _swift_release(uVar14);
    _swift_release(uVar13);
    FUN_100af8320(lVar12,puVar7);
    puVar6 = puVar7;
    (**(code **)(lVar3 + 0x30))(puVar7,1,DVar4.unknown);
    lVar9 = local_e8;
    if ((int)puVar6 != 1) {
      (**(code **)(lVar3 + 0x20))(local_e8,puVar7,DVar4.unknown);
      FUN_1000da768(auStack_e0);
      puVar7 = auStack_e0;
      FUN_100004640(puVar7,local_c8);
      FUN_1001a15c4(local_c8,uStack_c0,puVar7);
      lVar3 = local_f8;
      if (((ulong)local_c8 & 1) == 0) {
        bVar1 = false;
        pcVar10 = *(code **)(local_f0 + 8);
      }
      else {
        Foundation::Date::get_now((Date)local_c8);
        puVar2 = &DAT_100ff9670;
        FUN_100003a00(&DAT_100ff9670,PTR_typeMetadataAccessor_100ea7480,
                      PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
        bVar1 = Swift::Comparable::<__infix(lVar9,lVar3,DVar4.unknown,puVar2);
        pcVar10 = *(code **)(local_f0 + 8);
        (*pcVar10)(lVar3,DVar4.unknown);
      }
      (*pcVar10)(lVar9,DVar4.unknown);
      FUN_100004594(auStack_e0);
      return bVar1;
    }
    FUN_100005808(puVar7,&DAT_100ff9558,&DAT_100c95ef8);
  }
  return false;
}



/* Address: 0x100af576c | FUN_100af576c */

void FUN_100af576c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  int iVar1;
  bool bVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined7 extraout_var;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar8;
  long lVar9;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long unaff_x20;
  code *pcVar10;
  undefined8 uVar11;
  undefined1 *puVar12;
  Date DVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined1 auStack_180 [4];
  uint local_17c;
  undefined *local_178;
  long local_170;
  long local_168;
  undefined1 *local_160;
  undefined *local_158;
  code *local_150;
  long local_148;
  long local_140;
  undefined *local_138;
  undefined1 auStack_130 [24];
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_158 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_138 = *(undefined **)(local_158 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_138 + 0x40));
  pcVar10 = (code *)&DAT_100ff9678;
  local_160 = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100ff9678,&DAT_100c96040);
  local_150 = pcVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(pcVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar13.unknown = auStack_180 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0) + -extraout_x8_00;
  puVar3 = &DAT_100ff9558;
  puVar5 = &DAT_100c95ef8;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar8 = (long)DVar13.unknown - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_168 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_148 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar4 = 0;
  local_140 = lVar8 - extraout_x12_01;
  FUN_100af7128();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar9 = (lVar8 - extraout_x12_01) - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_170 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12_02;
  puVar3 = &DAT_100c96048;
  _swift_getKeyPath();
  FUN_1002d0bc8();
  *(undefined **)(unaff_x20 + 0x10) = puVar3;
  *(undefined **)(unaff_x20 + 0x18) = puVar5;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  puVar3 = &DAT_100c96070;
  _swift_getKeyPath(&DAT_100c96070);
  puVar5 = &DAT_100ff9680;
  FUN_100003a00(&DAT_100ff9680,FUN_100af7128,&TargetProtocolConformanceDescriptor_100c95f9c);
  puVar6 = &DAT_100ff9688;
  FUN_100003a00(&DAT_100ff9688,FUN_100af7128,&TargetProtocolConformanceDescriptor_100c95f74);
  FUN_1002cb88c(&local_118,puVar3,puVar5,puVar6);
  *(undefined8 *)(unaff_x20 + 0x30) = uStack_110;
  *(undefined8 *)(unaff_x20 + 0x28) = local_118;
  *(undefined8 *)(unaff_x20 + 0x40) = uStack_100;
  *(undefined8 *)(unaff_x20 + 0x38) = local_108;
  *(undefined8 *)(unaff_x20 + 0x50) = uStack_f0;
  *(undefined8 *)(unaff_x20 + 0x48) = local_f8;
  *(undefined8 *)(unaff_x20 + 0x58) = local_e8;
  puVar3 = &DAT_100c96098;
  _swift_getKeyPath();
  puVar5 = &DAT_100ff9690;
  FUN_1000037f0(&DAT_100ff9690,&DAT_100c960c8);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar5);
  *(undefined **)(unaff_x20 + 0x60) = puVar3;
  _swift_beginAccess(unaff_x20 + 0x28,auStack_130,0,0);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_88 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_78 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  local_a0 = uVar15;
  uStack_98 = uVar17;
  local_90 = uVar18;
  local_80 = uVar16;
  local_70 = uVar11;
  _swift_retain(uVar15);
  _swift_retain(uVar17);
  _swift_retain(uVar18);
  _swift_retain(uVar16);
  _swift_retain(uVar11);
  puVar3 = &DAT_100ff9658;
  FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
  local_178 = puVar3;
  FUN_1002ca7e0(lVar9);
  lVar4 = local_140;
  _swift_release(uVar11);
  puVar3 = local_158;
  _swift_release(uVar16);
  puVar5 = local_138;
  _swift_release(uVar18);
  _swift_release(uVar17);
  _swift_release(uVar15);
  FUN_100af837c(lVar9,lVar4);
  pcVar10 = *(code **)((long)puVar5 + 0x38);
  (*pcVar10)(lVar8,1,1,puVar3);
  iVar1 = *(int *)(local_150 + 0x30);
  FUN_100af837c(lVar4,DVar13.unknown);
  FUN_100af837c(lVar8,DVar13.unknown + iVar1);
  pcVar14 = *(code **)((long)puVar5 + 0x30);
  puVar7 = DVar13.unknown;
  (*pcVar14)(DVar13.unknown,1,puVar3);
  if ((int)puVar7 == 1) {
    local_150 = pcVar10;
    FUN_100005808(lVar8,&DAT_100ff9558,&DAT_100c95ef8);
    FUN_100005808(lVar4,&DAT_100ff9558,&DAT_100c95ef8);
    FUN_100af7ae8(lVar9);
    puVar7 = DVar13.unknown + iVar1;
    (*pcVar14)(puVar7,1,puVar3);
    if ((int)puVar7 != 1) {
LAB_100af5c30:
      FUN_100005808(DVar13.unknown,&DAT_100ff9678,&DAT_100c96040);
      return;
    }
    FUN_100005808(DVar13.unknown,&DAT_100ff9558,&DAT_100c95ef8);
    puVar5 = local_138;
    puVar12 = local_160;
  }
  else {
    FUN_100af837c(DVar13.unknown,local_148);
    puVar7 = DVar13.unknown + iVar1;
    (*pcVar14)(puVar7,1,puVar3);
    puVar12 = local_160;
    if ((int)puVar7 == 1) {
      FUN_100005808(lVar8,&DAT_100ff9558,&DAT_100c95ef8);
      FUN_100005808(lVar4,&DAT_100ff9558,&DAT_100c95ef8);
      FUN_100af7ae8(lVar9);
      (**(code **)((long)puVar5 + 8))(local_148,puVar3);
      goto LAB_100af5c30;
    }
    local_150 = pcVar10;
    (**(code **)((long)puVar5 + 0x20))(local_160,DVar13.unknown + iVar1,puVar3);
    puVar6 = &DAT_100ff9698;
    FUN_100003a00(&DAT_100ff9698,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Equatable_100ea74a0);
    lVar4 = local_148;
    bVar2 = Swift::Equatable::___infix(local_148,puVar12,puVar3,puVar6);
    local_17c = (uint)CONCAT71(extraout_var,bVar2);
    pcVar10 = *(code **)((long)puVar5 + 8);
    (*pcVar10)(puVar12,puVar3);
    FUN_100005808(lVar8,&DAT_100ff9558,&DAT_100c95ef8);
    FUN_100005808(local_140,&DAT_100ff9558,&DAT_100c95ef8);
    FUN_100af7ae8(lVar9);
    (*pcVar10)(lVar4,puVar3);
    FUN_100005808(DVar13.unknown,&DAT_100ff9558,&DAT_100c95ef8);
    if ((local_17c & 1) == 0) {
      return;
    }
  }
  DVar13 = Foundation::Date::get_now(DVar13);
  lVar8 = local_168;
  Foundation::Date::addingTimeInterval(604800.0,DVar13);
  (**(code **)((long)puVar5 + 8))(puVar12,puVar3);
  (*local_150)(lVar8,0,1,puVar3);
  puVar3 = &DAT_100c95ff8;
  _swift_getKeyPath();
  local_138 = puVar3;
  _swift_getKeyPath(&DAT_100c96020);
  uVar17 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x40);
  uVar18 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x50);
  uVar16 = *(undefined8 *)(unaff_x20 + 0x48);
  uVar11 = *(undefined8 *)(unaff_x20 + 0x58);
  local_e0 = uVar15;
  uStack_d8 = uVar17;
  local_d0 = uVar18;
  local_c0 = uVar16;
  local_b0 = uVar11;
  _swift_retain();
  _swift_retain(uVar15);
  _swift_retain(uVar17);
  _swift_retain(uVar18);
  _swift_retain(uVar16);
  _swift_retain(uVar11);
  lVar4 = local_170;
  FUN_1002ca7e0(local_170,local_178);
  _swift_release(uVar11);
  _swift_release(uVar16);
  _swift_release(uVar18);
  _swift_release(uVar17);
  _swift_release(uVar15);
  FUN_100af7a54(lVar8,lVar4);
  FUN_1002cb5a0(lVar4);
  return;
}



/* Address: 0x100af5e84 | FUN_100af5e84 */

void FUN_100af5e84(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  code *pcVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long lVar9;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar10;
  long lVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_190 [8];
  long local_188;
  undefined *local_180;
  long local_178;
  long local_170;
  undefined1 *local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined *local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  long local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  puVar6 = &DAT_100ff9558;
  local_168 = auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = (long)(auStack_190 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  lVar7 = 0;
  local_170 = lVar8;
  FUN_100af7128();
  lVar11 = lVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar7 + -8) + 0x40));
  lVar8 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_160 = (undefined *)(lVar8 - extraout_x12);
  uVar10 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar13 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100af8298();
  lVar9 = lVar11;
  FUN_100af82d8();
  _swift_retain(uVar10);
  _swift_retain(uVar13);
  _swift_retain(uVar15);
  local_158 = lVar11;
  FUN_1002d0c78(&local_b0,uVar10,uVar13,uVar15,&DAT_100f32b40,lVar11,lVar9);
  _swift_release(uVar15);
  _swift_release(uVar13);
  _swift_release(uVar10);
  _swift_bridgeObjectRelease(uStack_a8);
  lVar11 = *(long *)(local_a0 + 0x10);
  _swift_bridgeObjectRelease();
  if (lVar11 != 0) {
    local_188 = lVar14;
    local_180 = DVar5.unknown;
    local_178 = lVar8;
    _swift_beginAccess(unaff_x20 + 0x28,auStack_148,0,0);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
    local_b0 = uVar15;
    uStack_a8 = uVar16;
    local_a0 = uVar17;
    local_90 = uVar10;
    local_80 = uVar13;
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar17);
    _swift_retain(uVar10);
    _swift_retain(uVar13);
    puVar6 = &DAT_100ff9658;
    FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
    puVar3 = local_160;
    local_150 = puVar6;
    FUN_1002ca7e0(local_160);
    _swift_release(uVar13);
    _swift_release(uVar10);
    _swift_release(uVar17);
    _swift_release(uVar16);
    _swift_release(uVar15);
    lVar14 = *(long *)((long)puVar3 + (long)*(int *)(lVar7 + 0x14));
    uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_retain(uVar13);
    _swift_retain(uVar15);
    _swift_retain(uVar10);
    lVar11 = local_158;
    FUN_1002d0c78(&local_f0,uVar13,uVar15,uVar10,&DAT_100f32b40,local_158,lVar9);
    _swift_release(uVar10);
    _swift_release(uVar15);
    _swift_release(uVar13);
    _swift_bridgeObjectRelease(uStack_e8);
    lVar8 = *(long *)(local_e0 + 0x10);
    _swift_bridgeObjectRelease();
    FUN_100af7ae8(puVar3);
    if (lVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100af6490);
      (*pcVar4)();
    }
    lVar1 = 0;
    if (lVar8 != 0) {
      lVar1 = lVar14 / lVar8;
    }
    uVar12 = lVar14 - lVar1 * lVar8;
    uVar13 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_retain(uVar13);
    _swift_retain(uVar15);
    _swift_retain(uVar10);
    FUN_1002d0c78(&local_f0,uVar13,uVar15,uVar10,&DAT_100f32b40,lVar11,lVar9);
    _swift_release(uVar10);
    _swift_release(uVar15);
    _swift_release(uVar13);
    _swift_bridgeObjectRelease(uStack_e8);
    if ((long)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100af6494);
      (*pcVar4)();
    }
    if (*(ulong *)(local_e0 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100af6498);
      (*pcVar4)();
    }
    lVar8 = *(long *)(local_e0 + uVar12 * 8 + 0x20);
    _swift_bridgeObjectRelease();
    puVar2 = local_168;
    DVar5 = Foundation::Date::get_now(local_e0);
    lVar11 = local_170;
    lVar9 = lVar8 * 0x93a80;
    if (SUB168(SEXT816(lVar8) * SEXT816(0x93a80),8) != lVar9 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100af649c);
      (*pcVar4)();
    }
    Foundation::Date::addingTimeInterval((double)lVar9,DVar5);
    puVar6 = local_180;
    lVar9 = local_188;
    (**(code **)(local_188 + 8))(puVar2,local_180);
    (**(code **)(lVar9 + 0x38))(lVar11,0,1,puVar6);
    puVar6 = &DAT_100c95ff8;
    _swift_getKeyPath();
    local_160 = puVar6;
    local_158 = lVar7;
    _swift_getKeyPath(&DAT_100c96020);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
    local_f0 = uVar15;
    uStack_e8 = uVar16;
    local_e0 = (undefined *)uVar17;
    local_d0 = uVar10;
    local_c0 = uVar13;
    _swift_retain();
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar17);
    _swift_retain(uVar10);
    _swift_retain(uVar13);
    lVar9 = local_178;
    FUN_1002ca7e0(local_178,local_150);
    _swift_release(uVar13);
    _swift_release(uVar10);
    _swift_release(uVar17);
    _swift_release(uVar16);
    _swift_release(uVar15);
    FUN_100af7a54(lVar11,lVar9);
    FUN_1002cb5a0(lVar9);
    _swift_getKeyPath(&DAT_100c95ff8);
    _swift_getKeyPath(&DAT_100c96020);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar17 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar10 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar13 = *(undefined8 *)(unaff_x20 + 0x58);
    local_130 = uVar15;
    uStack_128 = uVar16;
    local_120 = uVar17;
    local_110 = uVar10;
    local_100 = uVar13;
    _swift_retain();
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar17);
    _swift_retain(uVar10);
    _swift_retain(uVar13);
    FUN_1002ca7e0(lVar9,local_150);
    _swift_release(uVar13);
    _swift_release(uVar10);
    _swift_release(uVar17);
    _swift_release(uVar16);
    _swift_release(uVar15);
    lVar11 = *(long *)(lVar9 + *(int *)(local_158 + 0x14));
    if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100af64a0);
      (*pcVar4)();
    }
    *(long *)(lVar9 + *(int *)(local_158 + 0x14)) = lVar11 + 1;
    FUN_1002cb5a0(lVar9);
  }
  return;
}



/* Address: 0x100af64a0 | FUN_100af64a0 */

void FUN_100af64a0(void)

{
  undefined *puVar1;
  code *pcVar2;
  Date DVar3;
  undefined *puVar4;
  long lVar5;
  long extraout_x8;
  long extraout_x8_00;
  long lVar6;
  long extraout_x8_01;
  long lVar7;
  long extraout_x12;
  long unaff_x20;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  long lVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined *local_180;
  long local_178;
  long local_170;
  long local_168;
  undefined *local_160;
  long local_158;
  undefined *local_150;
  undefined1 auStack_148 [24];
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  DVar3 = Foundation::Date::typeMetadataAccessor();
  local_170 = *(long *)(DVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_170 + 0x40));
  lVar6 = (long)&local_180 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100ff9558;
  local_160 = (undefined *)lVar6;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = lVar6 - extraout_x8_00;
  lVar5 = 0;
  local_168 = lVar6;
  FUN_100af7128();
  lVar9 = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar6 = lVar6 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar6 - extraout_x12;
  uVar8 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar12 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar14 = *(undefined8 *)(unaff_x20 + 0x20);
  FUN_100af8298();
  lVar7 = lVar9;
  FUN_100af82d8();
  _swift_retain(uVar8);
  _swift_retain(uVar12);
  _swift_retain(uVar14);
  local_158 = lVar9;
  FUN_1002d0c78(&local_b0,uVar8,uVar12,uVar14,&DAT_100f32b40,lVar9,lVar7);
  _swift_release(uVar14);
  _swift_release(uVar12);
  _swift_release(uVar8);
  _swift_bridgeObjectRelease(local_a0);
  lVar9 = *(long *)(lStack_a8 + 0x10);
  _swift_bridgeObjectRelease(lStack_a8);
  if (lVar9 != 0) {
    local_180 = DVar3.unknown;
    local_178 = lVar6;
    _swift_beginAccess(unaff_x20 + 0x28,auStack_148,0,0);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_98 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_88 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    local_b0 = uVar14;
    lStack_a8 = uVar15;
    local_a0 = uVar16;
    local_90 = uVar8;
    local_80 = uVar12;
    _swift_retain(uVar14);
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar8);
    _swift_retain(uVar12);
    puVar4 = &DAT_100ff9658;
    FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
    local_150 = puVar4;
    FUN_1002ca7e0(lVar10);
    _swift_release(uVar12);
    _swift_release(uVar8);
    _swift_release(uVar16);
    _swift_release(uVar15);
    _swift_release(uVar14);
    lVar13 = *(long *)(lVar10 + *(int *)(lVar5 + 0x18));
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_retain(uVar12);
    _swift_retain(uVar14);
    _swift_retain(uVar8);
    lVar9 = local_158;
    FUN_1002d0c78(&local_f0,uVar12,uVar14,uVar8,&DAT_100f32b40,local_158,lVar7);
    _swift_release(uVar8);
    _swift_release(uVar14);
    _swift_release(uVar12);
    puVar4 = puStack_e8;
    _swift_bridgeObjectRelease(local_e0);
    lVar6 = *(long *)(puVar4 + 0x10);
    _swift_bridgeObjectRelease(puVar4);
    FUN_100af7ae8(lVar10);
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100af6a94);
      (*pcVar2)();
    }
    lVar10 = 0;
    if (lVar6 != 0) {
      lVar10 = lVar13 / lVar6;
    }
    uVar11 = lVar13 - lVar10 * lVar6;
    uVar12 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x18);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_retain(uVar12);
    _swift_retain(uVar14);
    _swift_retain(uVar8);
    FUN_1002d0c78(&local_f0,uVar12,uVar14,uVar8,&DAT_100f32b40,lVar9,lVar7);
    _swift_release(uVar8);
    _swift_release(uVar14);
    _swift_release(uVar12);
    _swift_bridgeObjectRelease(local_e0);
    if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100af6a98);
      (*pcVar2)();
    }
    if (*(ulong *)(puStack_e8 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100af6a9c);
      (*pcVar2)();
    }
    lVar6 = *(long *)(puStack_e8 + uVar11 * 8 + 0x20);
    _swift_bridgeObjectRelease();
    puVar4 = local_160;
    DVar3 = Foundation::Date::get_now(puStack_e8);
    lVar9 = local_168;
    lVar7 = lVar6 * 0x93a80;
    if (SUB168(SEXT816(lVar6) * SEXT816(0x93a80),8) != lVar7 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100af6aa0);
      (*pcVar2)();
    }
    Foundation::Date::addingTimeInterval((double)lVar7,DVar3);
    lVar7 = local_170;
    puVar1 = local_180;
    (**(code **)(local_170 + 8))(puVar4,local_180);
    (**(code **)(lVar7 + 0x38))(lVar9,0,1,puVar1);
    puVar4 = &DAT_100c95ff8;
    _swift_getKeyPath();
    local_160 = puVar4;
    local_158 = lVar5;
    _swift_getKeyPath(&DAT_100c96020);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_d8 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_c8 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    local_f0 = uVar14;
    puStack_e8 = (undefined *)uVar15;
    local_e0 = uVar16;
    local_d0 = uVar8;
    local_c0 = uVar12;
    _swift_retain();
    _swift_retain(uVar14);
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar8);
    _swift_retain(uVar12);
    lVar7 = local_178;
    FUN_1002ca7e0(local_178,local_150);
    _swift_release(uVar12);
    _swift_release(uVar8);
    _swift_release(uVar16);
    _swift_release(uVar15);
    _swift_release(uVar14);
    FUN_100af7a54(lVar9,lVar7);
    FUN_1002cb5a0(lVar7);
    _swift_getKeyPath(&DAT_100c95ff8);
    _swift_getKeyPath(&DAT_100c96020);
    uVar15 = *(undefined8 *)(unaff_x20 + 0x30);
    uVar14 = *(undefined8 *)(unaff_x20 + 0x28);
    uStack_118 = *(undefined8 *)(unaff_x20 + 0x40);
    uVar16 = *(undefined8 *)(unaff_x20 + 0x38);
    uStack_108 = *(undefined8 *)(unaff_x20 + 0x50);
    uVar8 = *(undefined8 *)(unaff_x20 + 0x48);
    uVar12 = *(undefined8 *)(unaff_x20 + 0x58);
    local_130 = uVar14;
    uStack_128 = uVar15;
    local_120 = uVar16;
    local_110 = uVar8;
    local_100 = uVar12;
    _swift_retain();
    _swift_retain(uVar14);
    _swift_retain(uVar15);
    _swift_retain(uVar16);
    _swift_retain(uVar8);
    _swift_retain(uVar12);
    FUN_1002ca7e0(lVar7,local_150);
    _swift_release(uVar12);
    _swift_release(uVar8);
    _swift_release(uVar16);
    _swift_release(uVar15);
    _swift_release(uVar14);
    lVar9 = *(long *)(lVar7 + *(int *)(local_158 + 0x18));
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100af6aa4);
      (*pcVar2)();
    }
    *(long *)(lVar7 + *(int *)(local_158 + 0x18)) = lVar9 + 1;
    FUN_1002cb5a0(lVar7);
  }
  return;
}



/* Address: 0x100af6aa4 | FUN_100af6aa4 */

void FUN_100af6aa4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(uVar2);
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x30);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x58));
  _swift_release(uVar4);
  _swift_release(uVar3);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x60));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x100af6b30 | FUN_100af6b30 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100af6b30(void)

{
  return ZEXT816(0x100ff94a0);
}



/* Address: 0x100af6b50 | FUN_100af6b50 */

long * FUN_100af6b50(long *param_1,long *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  Date DVar3;
  long *plVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  
  uVar2 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar2 >> 0x11 & 1) == 0) {
    DVar3 = Foundation::Date::typeMetadataAccessor();
    lVar7 = *(long *)(DVar3.unknown + -8);
    plVar4 = param_2;
    (**(code **)(lVar7 + 0x30))(param_2,1,DVar3.unknown);
    if ((int)plVar4 == 0) {
      (**(code **)(lVar7 + 0x10))(param_1,param_2,DVar3.unknown);
      (**(code **)(lVar7 + 0x38))(param_1,0,1,DVar3.unknown);
    }
    else {
      puVar5 = &DAT_100ff9558;
      FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
      _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
    }
    iVar1 = *(int *)(param_3 + 0x18);
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar6 = (ulong)uVar2 & 0xff;
    param_1 = (long *)(lVar7 + (uVar6 + 0x10 & (uVar6 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100af6c48 | FUN_100af6c48 */

void FUN_100af6c48(undefined8 param_1)

{
  Date DVar1;
  undefined8 uVar2;
  long lVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar3 = *(long *)(DVar1.unknown + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,DVar1.unknown);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100af6cac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,DVar1.unknown);
  return;
}



/* Address: 0x100af6cb0 | FUN_100af6cb0 */

void * FUN_100af6cb0(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  pvVar3 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,DVar2.unknown);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,DVar2.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,DVar2.unknown);
  }
  else {
    puVar4 = &DAT_100ff9558;
    FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Address: 0x100af6d7c | FUN_100af6d7c */

void * FUN_100af6d7c(void *param_1,void *param_2,long param_3)

{
  Date DVar1;
  void *pvVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar1.unknown + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar2 = param_1;
  (*pcVar6)(param_1,1,DVar1.unknown);
  pvVar3 = param_2;
  (*pcVar6)(param_2,1,DVar1.unknown);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar5 + 0x18))(param_1,param_2,DVar1.unknown);
      goto LAB_100af6e4c;
    }
    (**(code **)(lVar5 + 8))(param_1,DVar1.unknown);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar5 + 0x10))(param_1,param_2,DVar1.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,DVar1.unknown);
    goto LAB_100af6e4c;
  }
  puVar4 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
LAB_100af6e4c:
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  return param_1;
}



/* Address: 0x100af6e98 | FUN_100af6e98 */

void * FUN_100af6e98(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  void *pvVar3;
  undefined *puVar4;
  long lVar5;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  pvVar3 = param_2;
  (**(code **)(lVar5 + 0x30))(param_2,1,DVar2.unknown);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar5 + 0x20))(param_1,param_2,DVar2.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,DVar2.unknown);
  }
  else {
    puVar4 = &DAT_100ff9558;
    FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar4 + -8) + 0x40));
  }
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Address: 0x100af6f64 | FUN_100af6f64 */

void * FUN_100af6f64(void *param_1,void *param_2,long param_3)

{
  int iVar1;
  Date DVar2;
  void *pvVar3;
  void *pvVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  pvVar3 = param_1;
  (*pcVar7)(param_1,1,DVar2.unknown);
  pvVar4 = param_2;
  (*pcVar7)(param_2,1,DVar2.unknown);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar6 + 0x28))(param_1,param_2,DVar2.unknown);
      goto LAB_100af7034;
    }
    (**(code **)(lVar6 + 8))(param_1,DVar2.unknown);
  }
  else if ((int)pvVar4 == 0) {
    (**(code **)(lVar6 + 0x20))(param_1,param_2,DVar2.unknown);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,DVar2.unknown);
    goto LAB_100af7034;
  }
  puVar5 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
LAB_100af7034:
  iVar1 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)iVar1) = *(undefined8 *)((long)param_2 + (long)iVar1);
  return param_1;
}



/* Address: 0x100af707c | FUN_100af707c */

void FUN_100af707c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100af7088 | FUN_100af7088 */

void FUN_100af7088(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
                    /* WARNING: Could not recover jumptable at 0x000100af70cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
  return;
}



/* Address: 0x100af70d0 | FUN_100af70d0 */

void FUN_100af70d0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100af70dc | FUN_100af70dc */

void FUN_100af70dc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
                    /* WARNING: Could not recover jumptable at 0x000100af7124. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
  return;
}



/* Address: 0x100af7128 | FUN_100af7128 */

void FUN_100af7128(undefined8 param_1)

{
  if (DAT_100ff95b8 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ccc2ec);
  return;
}



/* Address: 0x100af7160 | FUN_100af7160 */

void FUN_100af7160(long param_1,ulong param_2)

{
  long lVar1;
  long local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  FUN_100af71d8();
  if (param_2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
    local_28 = puStack_30;
    _swift_initStructMetadata(param_1,0x100,3,&local_38,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100af71d8 | FUN_100af71d8 */

void FUN_100af71d8(void)

{
  Optional OVar1;
  Date DVar2;
  undefined7 extraout_var;
  
  if (DAT_100ff95c8 == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    OVar1 = Swift::Optional::typeMetadataAccessor();
    if (DVar2.unknown == (undefined *)0x0) {
      DAT_100ff95c8 = CONCAT71(extraout_var,OVar1.value);
    }
  }
  return;
}



/* Address: 0x100af722c | FUN_100af722c */

void FUN_100af722c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  param_1[2] = param_2[2];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x100af7240 | FUN_100af7240 */

undefined1  [16] FUN_100af7240(void)

{
  return ZEXT816(0x100f32b40);
}



/* Address: 0x100af7250 | FUN_100af7250 */

undefined1  [16] FUN_100af7250(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  pcVar1 = "isPromptingEnabled";
  uVar3 = 0xd000000000000017;
  if (*unaff_x20 != '\x01') {
    pcVar1 = "activationCooldownWeeks";
    uVar3 = 0xd000000000000016;
  }
  pcVar2 = "numberOfActivations";
  uVar4 = 0xd000000000000012;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar1;
    uVar4 = uVar3;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar4;
  return auVar5;
}



/* Address: 0x100af72a8 | FUN_100af72a8 */

void FUN_100af72a8(undefined1 *param_1,undefined1 param_2)

{
  FUN_100af7ee0();
  *param_1 = param_2;
  return;
}



/* Address: 0x100af72cc | FUN_100af72cc */

String FUN_100af72cc(void)

{
  String SVar1;
  
  FUN_100af81f0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100af72f4 | FUN_100af72f4 */

String FUN_100af72f4(void)

{
  String SVar1;
  
  FUN_100af81f0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100af731c | FUN_100af731c */

void FUN_100af731c(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  long unaff_x21;
  long lVar4;
  ulong local_70;
  undefined1 local_61;
  ulong local_58;
  
  puVar1 = &DAT_100ff9648;
  local_70 = param_3;
  FUN_1000037f0(&DAT_100ff9648,&DAT_100c95fe8);
  lVar4 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100af81f0();
  Swift::Encoder::_container();
  local_58 = local_58 & 0xffffffffffffff00;
  Swift::KeyedEncodingContainer::_encode(param_2,&local_58,puVar1);
  if (unaff_x21 == 0) {
    local_58 = local_70;
    local_61 = 1;
    puVar2 = &DAT_100ff9638;
    FUN_1000037f0(&DAT_100ff9638,&DAT_100c95fe0);
    puVar3 = &DAT_100ff9650;
    FUN_100af8230(&DAT_100ff9650,
                  PTR___protocol_witness_table_for_Swift_Int___Swift_Encodable_in_Swift_100eac700,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Encodable_100eac510);
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,puVar2,puVar3);
    local_61 = 2;
    local_58 = param_4;
    Swift::KeyedEncodingContainer::_encode(&local_58,&local_61,puVar1,puVar2,puVar3);
  }
  (**(code **)(lVar4 + 8))((long)&local_70 - extraout_x8,puVar1);
  return;
}



/* Address: 0x100af74c4 | FUN_100af74c4 */

void FUN_100af74c4(byte *param_1,byte param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x21;
  
  FUN_100af8000();
  if (unaff_x21 == 0) {
    *param_1 = param_2 & 1;
    *(undefined8 *)(param_1 + 8) = param_3;
    *(undefined8 *)(param_1 + 0x10) = param_4;
  }
  return;
}



/* Address: 0x100af74f4 | FUN_100af74f4 */

void FUN_100af74f4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100af731c(param_1,*unaff_x20,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10))
  ;
  return;
}



/* Address: 0x100af7510 | FUN_100af7510 */

void FUN_100af7510(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [13];
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100ff9618;
  FUN_1000037f0(&DAT_100ff9618,&DAT_100c95fd0);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100af7a14();
  Swift::Encoder::_container();
  local_51 = 0;
  Foundation::Date::typeMetadataAccessor();
  FUN_100003a00(&DAT_100ff9620,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  Swift::KeyedEncodingContainer::_encodeIfPresent();
  if (unaff_x21 == 0) {
    lVar2 = 0;
    FUN_100af7128();
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x14)),&local_52,puVar1);
    local_53 = 2;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined8 *)(unaff_x20 + *(int *)(lVar2 + 0x18)),&local_53,puVar1);
  }
  (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x100af7694 | FUN_100af7694 */

/* WARNING: Removing unreachable block (ram,0x000100af7868) */
/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100af785c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_100af7694(__int64 param_1,long param_2)

{
  __int64 _Var1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  Date DVar5;
  __int64 _Var6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar7;
  long lVar8;
  long lVar9;
  __int64 local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  undefined1 local_51;
  
  puVar3 = &DAT_100ff9558;
  local_80 = param_1;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100ff9600;
  local_70 = (long)&local_80 - extraout_x8;
  FUN_1000037f0(&DAT_100ff9600,&DAT_100c95fc8);
  lVar9 = *(long *)(puVar3 + -8);
  local_78 = puVar3;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = ((long)&local_80 - extraout_x8) - extraout_x8_00;
  lVar4 = 0;
  FUN_100af7128();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  lVar7 = lVar8 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  DVar5 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar5.unknown + -8) + 0x38))(lVar7,1,1,DVar5.unknown);
  local_68 = param_2;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_100af7a14();
  Swift::Decoder::_container();
  _Var1 = local_80;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar3 = &DAT_100ff9610;
    FUN_100003a00(&DAT_100ff9610,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    puVar2 = local_78;
    Swift::KeyedDecodingContainer::_decodeIfPresent
              (local_70,DVar5.unknown,&local_51,local_78,DVar5.unknown,puVar3);
    FUN_100af7a54(local_70,lVar7);
    _Var6 = Swift::KeyedDecodingContainer::_decode(puVar3,puVar2);
    *(__int64 *)(lVar7 + *(int *)(lVar4 + 0x14)) = _Var6;
    _Var6 = Swift::KeyedDecodingContainer::_decode(_Var6,puVar2);
    (**(code **)(lVar9 + 8))(lVar8,puVar2);
    *(__int64 *)(lVar7 + *(int *)(lVar4 + 0x18)) = _Var6;
    FUN_100af7aa4(lVar7,_Var1);
    FUN_100004594(local_68);
    FUN_100af7ae8(lVar7);
  }
  else {
    FUN_100004594(local_68);
    FUN_100005808(lVar7,&DAT_100ff9558,&DAT_100c95ef8);
  }
  return;
}



/* Address: 0x100af7924 | FUN_100af7924 */

undefined1  [16] FUN_100af7924(void)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  char *pcVar4;
  char *unaff_x20;
  undefined1 auVar5 [16];
  
  pcVar4 = "numberOfDismissals";
  uVar1 = 0xd000000000000013;
  if (*unaff_x20 == '\x01') {
    uVar1 = 0xd000000000000012;
    pcVar4 = "nextScheduledDate";
  }
  pcVar2 = "feedbackPromptSettings";
  uVar3 = 0xd000000000000011;
  if (*unaff_x20 != '\0') {
    pcVar2 = pcVar4;
    uVar3 = uVar1;
  }
  auVar5._8_8_ = (ulong)pcVar2 | 0x8000000000000000;
  auVar5._0_8_ = uVar3;
  return auVar5;
}



/* Address: 0x100af7978 | FUN_100af7978 */

void FUN_100af7978(undefined1 *param_1,undefined1 param_2)

{
  FUN_100af8594();
  *param_1 = param_2;
  return;
}



/* Address: 0x100af799c | FUN_100af799c */

String FUN_100af799c(void)

{
  String SVar1;
  
  FUN_100af7a14();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100af79c4 | FUN_100af79c4 */

String FUN_100af79c4(void)

{
  String SVar1;
  
  FUN_100af7a14();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100af79ec | FUN_100af79ec */

void FUN_100af79ec(void)

{
  FUN_100af7694();
  return;
}



/* Address: 0x100af7a00 | FUN_100af7a00 */

void FUN_100af7a00(void)

{
  FUN_100af7510();
  return;
}



/* Address: 0x100af7a14 | FUN_100af7a14 */

void FUN_100af7a14(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9608 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c962a4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c962a4,&DAT_100f32c70);
  DAT_100ff9608 = pTVar1;
  return;
}



/* Address: 0x100af7a54 | FUN_100af7a54 */

undefined8 FUN_100af7a54(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff9558;
  FUN_1000037f0(&DAT_100ff9558,&DAT_100c95ef8);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100af7aa4 | FUN_100af7aa4 */

undefined8 FUN_100af7aa4(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100af7128();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x100af7ae8 | FUN_100af7ae8 */

undefined8 FUN_100af7ae8(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_100af7128();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x100af7b24 | FUN_100af7b24 */

void FUN_100af7b24(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_70 [8];
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100ff96d0;
  FUN_1000037f0(&DAT_100ff96d0,&DAT_100c960d0);
  puVar2 = puVar1;
  _swift_initStaticObject();
  _swift_initStaticObject(puVar1,&DAT_100ff9750);
  local_70[0] = 0;
  local_68 = puVar2;
  puStack_60 = puVar1;
  FUN_1002ccc34(&local_58,0xd000000000000016,0x8000000100dbbc60,local_70,&DAT_100f32b40);
  *param_1 = local_58;
  param_1[1] = uStack_50;
  *(undefined1 *)(param_1 + 2) = local_48;
  param_1[4] = uStack_38;
  param_1[3] = local_40;
  return;
}



/* Address: 0x100af7bd4 | FUN_100af7bd4 */

void FUN_100af7bd4(undefined8 param_1)

{
  long lVar1;
  Date DVar2;
  long extraout_x8;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_100af7128();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  puVar3 = &stack0xffffffffffffffd0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar2 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 0x38))(puVar3,1,1,DVar2.unknown);
  *(undefined8 *)(puVar3 + *(int *)(lVar1 + 0x14)) = 0;
  *(undefined8 *)(puVar3 + *(int *)(lVar1 + 0x18)) = 0;
  FUN_1002ccc34(param_1,0xd000000000000013,0x8000000100dbbc40,puVar3,lVar1);
  return;
}



/* Address: 0x100af7c90 | FUN_100af7c90 */

void FUN_100af7c90(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 local_70 [8];
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &DAT_100ff96d0;
  FUN_1000037f0(&DAT_100ff96d0,&DAT_100c960d0);
  puVar2 = puVar1;
  _swift_initStaticObject();
  _swift_initStaticObject(puVar1,&DAT_100ff96e0);
  local_70[0] = 0;
  local_68 = puVar2;
  puStack_60 = puVar1;
  FUN_1002ccc34(&local_58,0xd000000000000016,0x8000000100dbbc60,local_70,&DAT_100f32b40);
  *param_1 = local_58;
  param_1[1] = uStack_50;
  *(undefined1 *)(param_1 + 2) = local_48;
  param_1[4] = uStack_38;
  param_1[3] = local_40;
  return;
}



/* Address: 0x100af7d40 | FUN_100af7d40 */

void FUN_100af7d40(undefined8 param_1,long *param_2)

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
  _swift_beginAccess(lVar1 + 0x28,auStack_a8,0,0);
  uVar5 = *(undefined8 *)(lVar1 + 0x30);
  uVar3 = *(undefined8 *)(lVar1 + 0x28);
  uStack_78 = *(undefined8 *)(lVar1 + 0x40);
  uVar6 = *(undefined8 *)(lVar1 + 0x38);
  uStack_68 = *(undefined8 *)(lVar1 + 0x50);
  uVar4 = *(undefined8 *)(lVar1 + 0x48);
  uVar2 = *(undefined8 *)(lVar1 + 0x58);
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
  FUN_1000037f0(&DAT_100ff9658,&DAT_100c95ff0);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x100af7e2c | FUN_100af7e2c */

void FUN_100af7e2c(undefined8 param_1,undefined8 *param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  undefined8 uVar4;
  
  lVar1 = 0;
  FUN_100af7128();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar1 + -8) + 0x40));
  uVar4 = *param_2;
  puVar2 = &DAT_100c95ff8;
  _swift_getKeyPath(&DAT_100c95ff8);
  puVar3 = &DAT_100c96020;
  _swift_getKeyPath(&DAT_100c96020);
  FUN_100af7aa4(param_1,&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
  _swift_retain(uVar4);
  FUN_1002cb5a0(&stack0xffffffffffffffc0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),uVar4,puVar2,
                puVar3);
  return;
}



/* Address: 0x100af7ee0 | FUN_100af7ee0 */

undefined4 FUN_100af7ee0(long param_1,long param_2)

{
  bool bVar1;
  _StringComparisonResult expecting;
  
  if ((param_1 != -0x2fffffffffffffee) || (param_2 != -0x7ffffffeff244320)) {
    expecting.value = (__int8)param_1;
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0xd000000000000012,(_StringGuts)0x8000000100dbbce0,expecting);
    if (!bVar1) {
      if (((param_1 != -0x2fffffffffffffe9) || (param_2 != -0x7ffffffeff244300)) &&
         (bVar1 = Swift::_stringCompareWithSmolCheck
                            ((_StringGuts)0xd000000000000017,(_StringGuts)0x8000000100dbbd00,
                             expecting), !bVar1)) {
        if ((param_1 == -0x2fffffffffffffea) && (param_2 == -0x7ffffffeff2442e0)) {
          _swift_bridgeObjectRelease(0x8000000100dbbd20);
          return 2;
        }
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0xd000000000000016,(_StringGuts)0x8000000100dbbd20,expecting
                          );
        _swift_bridgeObjectRelease(param_2);
        if (bVar1) {
          return 2;
        }
        return 3;
      }
      _swift_bridgeObjectRelease(param_2);
      return 1;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x100af8000 | FUN_100af8000 */

/* WARNING: Removing unreachable block (ram,0x000100af81cc) */
/* WARNING: Removing unreachable block (ram,0x000100af813c) */

uint FUN_100af8000(long param_1)

{
  undefined8 uVar1;
  bool bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  long unaff_x21;
  uint uVar6;
  long lVar7;
  undefined1 auStack_70 [15];
  undefined1 local_61;
  undefined1 local_58 [8];
  
  puVar3 = &DAT_100ff9628;
  FUN_1000037f0(&DAT_100ff9628,&DAT_100c95fd8);
  lVar7 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  FUN_100004640(param_1,uVar1);
  FUN_100af81f0();
  Swift::Decoder::_container();
  if (unaff_x21 == 0) {
    local_58[0] = 0;
    bVar2 = Swift::KeyedDecodingContainer::_decode(local_58,puVar3);
    uVar6 = (uint)bVar2;
    puVar4 = &DAT_100ff9638;
    FUN_1000037f0(&DAT_100ff9638,&DAT_100c95fe0);
    local_61 = 1;
    puVar5 = &DAT_100ff9640;
    FUN_100af8230(&DAT_100ff9640,
                  PTR___protocol_witness_table_for_Swift_Int___Swift_Decodable_in_Swift_100eac728,
                  PTR__Swift__Swift__Array<undefined>_>Swift__Decodable_100eac538);
    Swift::KeyedDecodingContainer::_decode(local_58,puVar4,&local_61,puVar3,puVar4,puVar5);
    local_61 = 2;
    Swift::KeyedDecodingContainer::_decode(local_58,puVar4,&local_61,puVar3,puVar4,puVar5);
    (**(code **)(lVar7 + 8))(auStack_70 + -extraout_x8,puVar3);
    FUN_100004594(param_1);
  }
  else {
    uVar6 = (uint)uVar1;
    FUN_100004594(param_1);
  }
  return uVar6 & 1;
}



/* Address: 0x100af81f0 | FUN_100af81f0 */

void FUN_100af81f0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100ff9630 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c96254;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c96254,&DAT_100f32be0);
  DAT_100ff9630 = pTVar1;
  return;
}


