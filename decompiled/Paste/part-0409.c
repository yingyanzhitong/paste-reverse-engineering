/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10050eba8 | FUN_10050eba8 */

void FUN_10050eba8(undefined8 param_1,Hasher param_2,char param_3)

{
  Hasher HVar1;
  
  if (param_3 == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    HVar1.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar1);
  }
  return;
}



/* Address: 0x10050ebf0 | FUN_10050ebf0 */

void FUN_10050ebf0(Hasher param_1,undefined8 param_2)

{
  uint uVar1;
  Hasher HVar2;
  Hasher HVar3;
  Hasher HVar4;
  uint uVar5;
  undefined4 uVar6;
  
  uVar6 = (undefined4)((ulong)param_2 >> 0x20);
  uVar5 = (uint)param_2;
  uVar1 = uVar5 & 0xff;
  Swift::Hasher::init(0);
  if (uVar1 == 1) {
    param_1.unknown = (undefined *)0x0;
    HVar4.unknown._4_4_ = uVar6;
    HVar4.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine(0,HVar4);
  }
  else {
    HVar2.unknown._4_4_ = uVar6;
    HVar2.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine(1,HVar2);
    HVar3.unknown._4_4_ = uVar6;
    HVar3.unknown._0_4_ = uVar5;
    Swift::Hasher::_combine((__uint64)param_1.unknown,HVar3);
  }
  Swift::Hasher::_finalize(param_1);
  return;
}



/* Address: 0x10050ec5c | FUN_10050ec5c */

void FUN_10050ec5c(undefined8 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  Swift::Hasher::init(0);
  if (cVar1 == '\x01') {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10050ecc8 | FUN_10050ecc8 */

void FUN_10050ecc8(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  __uint64 *unaff_x20;
  
  if ((char)unaff_x20[1] == '\x01') {
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    _Var1 = *unaff_x20;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine(_Var1,param_2);
  }
  return;
}



/* Address: 0x10050ed14 | FUN_10050ed14 */

void FUN_10050ed14(__int64 param_1,Hasher param_2)

{
  char cVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  if (cVar1 == '\x01') {
    HVar2.unknown = (undefined *)0x0;
    Swift::Hasher::_combine(0,param_2);
  }
  else {
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  }
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x10050ed7c | FUN_10050ed7c */

undefined8 FUN_10050ed7c(long *param_1,long *param_2)

{
  if ((char)param_1[1] == '\x01') {
    if ((char)param_2[1] != '\x01') {
      return 0;
    }
  }
  else if ((char)param_2[1] == '\x01' || *param_1 != *param_2) {
    return 0;
  }
  return 1;
}



/* Address: 0x10050edb8 | FUN_10050edb8 */

void FUN_10050edb8(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + _TtC3MCP16NetworkTransport::logger));
  return;
}



/* Address: 0x10050edc8 | FUN_10050edc8 */

undefined8 FUN_10050edc8(undefined8 param_1,undefined8 param_2)

{
  FUN_10051b1c0();
  _swift_release(param_2);
  return param_1;
}



/* Address: 0x10050edf8 | FUN_10050edf8 */

void FUN_10050edf8(void)

{
  ContinuousClock CVar1;
  ulong uVar2;
  long lVar3;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1f8) = unaff_x20;
  CVar1 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x200) = CVar1.unknown;
  lVar3 = *(long *)(CVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x208) = lVar3;
  uVar2 = *(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x210) = uVar2;
  _swift_task_switch(FUN_10050ee58);
  return;
}



/* Address: 0x10050ee58 | FUN_10050ee58 */

void FUN_10050ee58(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar1;
  long *plVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long unaff_x22;
  String SVar9;
  String SVar10;
  String SVar11;
  
  lVar8 = *(long *)(unaff_x22 + 0x1f8);
  if ((*(byte *)(lVar8 + 0x70) & 1) == 0) {
    *(undefined1 *)(lVar8 + 0x71) = 0;
    *(undefined8 *)(lVar8 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = _TtC3MCP16NetworkTransport::reconnectionConfig;
    lVar6 = _TtC3MCP16NetworkTransport::logger;
    lVar7 = _TtC3MCP16NetworkTransport::connection;
    *(long *)(unaff_x22 + 0x220) = _TtC3MCP16NetworkTransport::connection;
    lVar6 = *(long *)(lVar8 + lVar6);
    *(long *)(unaff_x22 + 0x228) = lVar6;
    _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0x180,0,0);
    _Var3.unknown = (undefined *)(unaff_x22 + 0x198);
    pcVar4 = (char *)0x0;
    pvVar5 = (void *)0x0;
    _swift_beginAccess(lVar8 + lVar7);
    lVar7 = *(long *)(unaff_x22 + 0x1f8);
    if (((*(byte *)(lVar8 + 0x70) & 1) == 0) &&
       (lVar6 = *(long *)(lVar7 + 0x78), lVar8 = *(long *)(lVar7 + *(long *)(unaff_x22 + 0x218) + 8)
       , *(long *)(unaff_x22 + 0x230) = lVar8, lVar6 <= lVar8)) {
      plVar2 = (long *)0xa50;
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x238) = plVar2;
      *plVar2 = unaff_x22;
      plVar2[1] = (long)FUN_10050f030;
      FUN_10050f648();
      return;
    }
    Swift::_StringGuts::grow(0x23,_Var3);
    _swift_bridgeObjectRelease(0xe000000000000000);
    *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(lVar7 + 0x78);
    SVar9 = Swift::CustomStringConvertible::get_description();
    SVar10.bridgeObject = pvVar5;
    SVar10.str = pcVar4;
    Swift::String::append(SVar9,SVar10);
    _swift_bridgeObjectRelease(SVar9.bridgeObject);
    puVar1 = (undefined8 *)0x74706d6574746120;
    SVar9.bridgeObject = (void *)0xe900000000000073;
    SVar9.str = (char *)0x74706d6574746120;
    SVar11.bridgeObject = pvVar5;
    SVar11.str = pcVar4;
    Swift::String::append(SVar9,SVar11);
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
    *puVar1 = 0xd000000000000018;
    puVar1[1] = 0x8000000100dacc50;
    puVar1[2] = 0;
    *(undefined1 *)(puVar1 + 3) = 4;
    _swift_willThrow();
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010050eff4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x10050f030 | FUN_10050f030 */

void FUN_10050f030(void)

{
  long lVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  lVar1 = *unaff_x22;
  lVar2 = *unaff_x22;
  *(long *)(lVar1 + 0x240) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x238));
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10050f09c,*(undefined8 *)(lVar1 + 0x1f8),0);
    return;
  }
  _swift_task_dealloc(*(undefined8 *)(lVar1 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010050f098. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x10050f09c | FUN_10050f09c */

void FUN_10050f09c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  DefaultStringInterpolation stringInterpolation;
  Duration DVar2;
  long *plVar3;
  undefined *puVar4;
  _StringGuts _Var5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  undefined8 uVar8;
  long lVar9;
  double dVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  
  lVar6 = *(long *)(unaff_x22 + 0x1f8);
  if ((((*(byte *)(lVar6 + 0x71) & 1) == 0) &&
      (pcVar1 = (char *)(lVar6 + *(long *)(unaff_x22 + 0x218)), *pcVar1 == '\x01')) &&
     (lVar9 = *(long *)(lVar6 + 0x78), lVar9 < *(long *)(unaff_x22 + 0x230))) {
    lVar7 = *(long *)(unaff_x22 + 0x228);
    *(long *)(lVar6 + 0x78) = lVar9 + 1;
    dVar10 = *(double *)(pcVar1 + 0x10);
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x130);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
    puVar4 = *(undefined **)(unaff_x22 + 0x150);
    FUN_100004640(unaff_x22 + 0x130,uVar8);
    (**(code **)(puVar4 + 0x70))(uVar8,puVar4);
    DVar2.unknown = (undefined *)(unaff_x22 + 0x130);
    FUN_100004594();
    if (((uint)uVar8 & 0xff) < 2) {
      uVar8 = *(undefined8 *)(unaff_x22 + 0x230);
      lVar7 = *(long *)(unaff_x22 + 0x1f8);
      FUN_100076688(*(long *)(unaff_x22 + 0x228) + 0x20,unaff_x22 + 0x158);
      puVar4 = *(undefined **)(unaff_x22 + 0x170);
      lVar6 = *(long *)(unaff_x22 + 0x178);
      _Var5.unknown = puVar4;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x1c8) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x22,_Var5);
      _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x1c8));
      *(undefined8 *)(unaff_x22 + 0x1b0) = 0xd000000000000019;
      *(undefined8 *)(unaff_x22 + 0x1b8) = 0x8000000100dacc90;
      *(undefined8 *)(unaff_x22 + 0x1e8) = *(undefined8 *)(lVar7 + 0x78);
      SVar11 = Swift::CustomStringConvertible::get_description();
      SVar13.bridgeObject = param_4;
      SVar13.str = param_3;
      Swift::String::append(SVar11,SVar13);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar11.bridgeObject = (void *)0xe100000000000000;
      SVar11.str = (char *)0x2f;
      SVar14.bridgeObject = param_4;
      SVar14.str = param_3;
      Swift::String::append(SVar11,SVar14);
      *(undefined8 *)(unaff_x22 + 0x1f0) = uVar8;
      SVar11 = Swift::CustomStringConvertible::get_description();
      SVar15.bridgeObject = param_4;
      SVar15.str = param_3;
      Swift::String::append(SVar11,SVar15);
      _swift_bridgeObjectRelease(SVar11.bridgeObject);
      SVar12.bridgeObject = &DAT_e400000000000000;
      SVar12.str = (char *)0x2e2e2e29;
      SVar16.bridgeObject = param_4;
      SVar16.str = param_3;
      Swift::String::append(SVar12,SVar16);
      stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1b0);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x1d0);
      *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x1d8);
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x14d;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x1d0);
      *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x1d8);
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x287463656e6e6f63;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xe900000000000029;
      *(undefined8 *)(unaff_x22 + 200) = 0x14d;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar6 + 0x28))(unaff_x22 + 0x10,puVar4,lVar6);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      DVar2.unknown = (undefined *)(unaff_x22 + 0x158);
      FUN_100004594();
    }
    _pow(dVar10,(double)lVar9);
    DVar2 = Swift::Duration::seconds(dVar10 * 0.5,DVar2);
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar3 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x248) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)FUN_10050f3ec;
    FUN_10051aec0(DVar2.unknown,puVar4,0,0,1);
    return;
  }
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010050f3e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050f3ec | FUN_10050f3ec */

void FUN_10050f3ec(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  *(long *)(lVar3 + 0x250) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x248));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar3 + 0x1f8);
    (**(code **)(*(long *)(lVar3 + 0x208) + 8))
              (*(undefined8 *)(lVar3 + 0x210),*(undefined8 *)(lVar3 + 0x200));
    pcVar1 = FUN_10050f460;
  }
  else {
    uVar2 = *(undefined8 *)(lVar3 + 0x1f8);
    pcVar1 = FUN_10050f5e8;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x10050f460 | FUN_10050f460 */

void FUN_10050f460(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  _StringGuts _Var3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  long unaff_x22;
  String SVar8;
  String SVar9;
  String SVar10;
  
  uVar5 = *(undefined8 *)(unaff_x22 + 0x240);
  lVar7 = *(long *)(unaff_x22 + 0x1f8);
  puVar1 = (undefined8 *)(lVar7 + *(long *)(unaff_x22 + 0x220));
  _Var3.unknown = (undefined *)puVar1[3];
  FUN_100004640();
  Network::NWConnection::cancel((NWConnection *)*puVar1);
  _swift_errorRelease(uVar5);
  lVar6 = *(long *)(unaff_x22 + 0x1f8);
  if (((*(byte *)(lVar7 + 0x70) & 1) == 0) &&
     (lVar4 = *(long *)(lVar6 + 0x78), lVar7 = *(long *)(lVar6 + *(long *)(unaff_x22 + 0x218) + 8),
     *(long *)(unaff_x22 + 0x230) = lVar7, lVar4 <= lVar7)) {
    plVar2 = (long *)0xa50;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x238) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_10050f030;
    FUN_10050f648();
    return;
  }
  Swift::_StringGuts::grow(0x23,_Var3);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *(undefined8 *)(unaff_x22 + 0x1e0) = *(undefined8 *)(lVar6 + 0x78);
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar8,SVar9);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  puVar1 = (undefined8 *)0x74706d6574746120;
  SVar8.bridgeObject = (void *)0xe900000000000073;
  SVar8.str = (char *)0x74706d6574746120;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar8,SVar10);
  FUN_1004db3ac();
  _swift_allocError(&DAT_100eda9c8,puVar1,0,0);
  *puVar1 = 0xd000000000000018;
  puVar1[1] = 0x8000000100dacc50;
  puVar1[2] = 0;
  *(undefined1 *)(puVar1 + 3) = 4;
  _swift_willThrow();
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010050f5ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050f5e8 | FUN_10050f5e8 */

void FUN_10050f5e8(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(unaff_x22 + 0x210);
  lVar3 = *(long *)(unaff_x22 + 0x208);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x200);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x240));
  (**(code **)(lVar3 + 8))(uVar2,uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x210));
                    /* WARNING: Could not recover jumptable at 0x00010050f644. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10050f648 | FUN_10050f648 */

void FUN_10050f648(void)

{
  NWError NVar1;
  State SVar2;
  undefined7 extraout_var;
  ulong uVar3;
  ulong uVar4;
  undefined7 extraout_var_00;
  undefined *puVar5;
  long lVar6;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x988) = unaff_x20;
  NVar1 = Network::NWError::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x990) = CONCAT71(extraout_var,NVar1.value);
  lVar6 = *(long *)(CONCAT71(extraout_var,NVar1.value) + -8);
  *(long *)(unaff_x22 + 0x998) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9a0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9a8) = uVar4;
  SVar2 = Network::NWConnection::State::typeMetadataAccessor();
  *(long *)(unaff_x22 + 0x9b0) = CONCAT71(extraout_var_00,SVar2.value);
  lVar6 = *(long *)(CONCAT71(extraout_var_00,SVar2.value) + -8);
  *(long *)(unaff_x22 + 0x9b8) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xf;
  uVar3 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9c0) = uVar3;
  uVar4 = uVar4 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9c8) = uVar4;
  puVar5 = &DAT_100fce300;
  FUN_1000f7830(&DAT_100fce300,&DAT_100c547e8);
  uVar4 = *(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9d0) = uVar4;
  puVar5 = &DAT_100fce308;
  FUN_1000f7830(&DAT_100fce308,&DAT_100c547f0);
  *(undefined **)(unaff_x22 + 0x9d8) = puVar5;
  lVar6 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0x9e0) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x9e8) = uVar4;
  puVar5 = &DAT_100fce310;
  FUN_1000f7830(&DAT_100fce310,&DAT_100c547f8);
  *(undefined **)(unaff_x22 + 0x9f0) = puVar5;
  lVar6 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0x9f8) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa00) = uVar4;
  puVar5 = &DAT_100fce318;
  FUN_1000f7830(&DAT_100fce318,&DAT_100c54800);
  *(undefined **)(unaff_x22 + 0xa08) = puVar5;
  lVar6 = *(long *)(puVar5 + -8);
  *(long *)(unaff_x22 + 0xa10) = lVar6;
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0xa18) = uVar4;
  _swift_task_switch(FUN_10050f7b0);
  return;
}



/* Address: 0x10050f7b0 | FUN_10050f7b0 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10050f7b0(void)

{
  undefined *puVar1;
  undefined8 *puVar2;
  OS_dispatch_queue *pOVar3;
  OS_dispatch_queue *queue;
  long *plVar4;
  long lVar5;
  AsyncStream AVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  
  AVar6.unknown = *(undefined **)(unaff_x22 + 0xa08);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9b0);
  lVar7 = *(long *)(unaff_x22 + 0x988);
  (**(code **)(*(long *)(unaff_x22 + 0x9f8) + 0x68))
            (*(undefined8 *)(unaff_x22 + 0xa00),
             *(undefined4 *)
              PTR___enum_case_for_Swift_AsyncStream_Continuation_BufferingPolicy_unbounded<A>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_Type___>_Swift_AsyncStream<A>_Continuation_BufferingPolicy_100eaec78
             ,*(undefined8 *)(unaff_x22 + 0x9f0));
  Swift::AsyncStream::_init((BufferingPolicy)(__int8)uVar8);
  lVar5 = _TtC3MCP16NetworkTransport::connection;
  _swift_beginAccess(lVar7 + _TtC3MCP16NetworkTransport::connection,unaff_x22 + 0x8d8,0,0);
  FUN_100076688(lVar7 + lVar5,unaff_x22 + 0x860);
  puVar2 = (undefined8 *)(unaff_x22 + 0x860);
  FUN_100004640(puVar2,*(undefined8 *)(unaff_x22 + 0x878));
  pOVar3 = (OS_dispatch_queue *)0x0;
  FUN_10051c638();
  queue = (extension_Dispatch)::__C::OS_dispatch_queue::get_main(pOVar3);
  Network::NWConnection::start((NWConnection *)*puVar2,queue);
  FUN_100004594(unaff_x22 + 0x860);
  Swift::AsyncStream::_makeAsyncIterator(AVar6);
  lVar5 = *(long *)(lVar7 + _TtC3MCP16NetworkTransport::logger);
  *(long *)(unaff_x22 + 0xa20) = lVar5;
  _swift_beginAccess(lVar5 + 0x20,unaff_x22 + 0x8f0,0,0);
  *(undefined4 *)(unaff_x22 + 0xa38) =
       *(undefined4 *)
        PTR___enum_case_for_Network_NWConnection_State_waiting_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0b0
  ;
  puVar1 = 
  PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
  ;
  *(undefined4 *)(unaff_x22 + 0xa3c) =
       *(undefined4 *)
        PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
  ;
  *(undefined4 *)(unaff_x22 + 0xa40) = *(undefined4 *)puVar1;
  *(undefined4 *)(unaff_x22 + 0xa44) =
       *(undefined4 *)
        PTR___enum_case_for_Network_NWConnection_State_preparing_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0c0
  ;
  puVar1 = 
  PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
  ;
  *(undefined4 *)(unaff_x22 + 0xa48) =
       *(undefined4 *)
        PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
  ;
  *(undefined4 *)(unaff_x22 + 0xa4c) = *(undefined4 *)puVar1;
  plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0xa28) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_10050f970;
  Swift::AsyncStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x9d0));
  return;
}



/* Address: 0x10050f970 | FUN_10050f970 */

void FUN_10050f970(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x988);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa28));
  _swift_task_switch(FUN_10050f9bc,uVar1,0);
  return;
}



/* Address: 0x10050f9bc | FUN_10050f9bc */

void FUN_10050f9bc(void)

{
  int iVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  long *plVar4;
  _StringGuts _Var5;
  undefined *puVar6;
  void *in_x3;
  void *pvVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  DefaultStringInterpolation DVar11;
  undefined8 uVar12;
  char *pcVar13;
  long unaff_x22;
  undefined8 uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  
  uVar10 = *(undefined8 *)(unaff_x22 + 0x9d0);
  lVar15 = *(long *)(unaff_x22 + 0x9b8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x9b0);
  uVar8 = uVar10;
  (**(code **)(lVar15 + 0x30))(uVar10,1,uVar9);
  if ((int)uVar8 == 1) {
    uVar9 = *(undefined8 *)(unaff_x22 + 0xa18);
    lVar15 = *(long *)(unaff_x22 + 0xa10);
    uVar12 = *(undefined8 *)(unaff_x22 + 0xa08);
    uVar14 = *(undefined8 *)(unaff_x22 + 0xa00);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x9e8);
    uVar18 = *(undefined8 *)(unaff_x22 + 0x9c8);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x9c0);
    uVar21 = *(undefined8 *)(unaff_x22 + 0x9a8);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x9a0);
    (**(code **)(*(long *)(unaff_x22 + 0x9e0) + 8))(uVar16,*(undefined8 *)(unaff_x22 + 0x9d8));
    (**(code **)(lVar15 + 8))(uVar9,uVar12);
    _swift_task_dealloc(uVar9);
    _swift_task_dealloc(uVar14);
    _swift_task_dealloc(uVar16);
    _swift_task_dealloc(uVar10);
    _swift_task_dealloc(uVar18);
    _swift_task_dealloc(uVar19);
    _swift_task_dealloc(uVar21);
    _swift_task_dealloc(uVar8);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    goto LAB_10050feec;
  }
  iVar1 = *(int *)(unaff_x22 + 0xa38);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9c0);
  (**(code **)(lVar15 + 0x20))(uVar12,uVar10,uVar9);
  (**(code **)(lVar15 + 0x10))(uVar8,uVar12,uVar9);
  (**(code **)(lVar15 + 0x58))(uVar8,uVar9);
  iVar2 = (int)uVar8;
  if (iVar2 == iVar1) {
    lVar15 = *(long *)(unaff_x22 + 0xa20);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x9c0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x9a0);
    lVar17 = *(long *)(unaff_x22 + 0x998);
    pcVar13 = *(char **)(unaff_x22 + 0x990);
    (**(code **)(*(long *)(unaff_x22 + 0x9b8) + 0x60))(uVar9,*(undefined8 *)(unaff_x22 + 0x9b0));
    (**(code **)(lVar17 + 0x20))(uVar8,uVar9);
    FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x8b0);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x8c8);
    lVar15 = *(long *)(unaff_x22 + 0x8d0);
    FUN_100004640(unaff_x22 + 0x8b0,uVar8);
    (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
    FUN_100004594(unaff_x22 + 0x8b0);
    if (((uint)uVar8 & 0xff) < 2) {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x9c8);
      lVar17 = *(long *)(unaff_x22 + 0x9b8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x9b0);
      uVar12 = *(undefined8 *)(unaff_x22 + 0x9a0);
      lVar15 = *(long *)(unaff_x22 + 0x998);
      uVar10 = *(undefined8 *)(unaff_x22 + 0x990);
      FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x7c0);
      puVar6 = *(undefined **)(unaff_x22 + 0x7d8);
      lVar20 = *(long *)(unaff_x22 + 0x7e0);
      _Var5.unknown = puVar6;
      FUN_100004640();
      *(undefined8 *)(unaff_x22 + 0x948) = 0;
      *(undefined8 *)(unaff_x22 + 0x950) = 0xe000000000000000;
      Swift::_StringGuts::grow(0x16,_Var5);
      *(undefined8 *)(unaff_x22 + 0x938) = *(undefined8 *)(unaff_x22 + 0x948);
      *(undefined8 *)(unaff_x22 + 0x940) = *(undefined8 *)(unaff_x22 + 0x950);
      SVar24.bridgeObject = (void *)0x8000000100dad010;
      SVar24.str = (char *)0xd000000000000014;
      SVar26.bridgeObject = in_x3;
      SVar26.str = pcVar13;
      Swift::String::append(SVar24,SVar26);
      Swift::__print_unlocked
                (uVar12,unaff_x22 + 0x938,uVar10,
                 PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
                 PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
                );
      DVar11.unknown = *(undefined **)(unaff_x22 + 0x938);
      FUN_1004f94cc();
      (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar11);
      *(undefined1 *)(unaff_x22 + 0x130) = 1;
      *(undefined8 *)(unaff_x22 + 0x138) = *(undefined8 *)(unaff_x22 + 0x958);
      *(undefined8 *)(unaff_x22 + 0x140) = *(undefined8 *)(unaff_x22 + 0x960);
      *(undefined8 *)(unaff_x22 + 0x150) = 0;
      *(undefined8 *)(unaff_x22 + 0x148) = 0;
      *(undefined8 *)(unaff_x22 + 0x160) = 0;
      *(undefined8 *)(unaff_x22 + 0x158) = 0;
      *(undefined8 *)(unaff_x22 + 0x168) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x170) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x178) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x180) = 0x8000000100dacf90;
      *(undefined8 *)(unaff_x22 + 0x188) = 0x182;
      *(undefined1 *)(unaff_x22 + 0x490) = 1;
      *(undefined8 *)(unaff_x22 + 0x498) = *(undefined8 *)(unaff_x22 + 0x958);
      *(undefined8 *)(unaff_x22 + 0x4a0) = *(undefined8 *)(unaff_x22 + 0x960);
      *(undefined8 *)(unaff_x22 + 0x4b0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4a8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c0) = 0;
      *(undefined8 *)(unaff_x22 + 0x4b8) = 0;
      *(undefined8 *)(unaff_x22 + 0x4c8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x4d0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x4d8) = 0xd000000000000013;
      *(undefined8 *)(unaff_x22 + 0x4e0) = 0x8000000100dacf90;
      *(undefined8 *)(unaff_x22 + 0x4e8) = 0x182;
      FUN_1004eaa00(unaff_x22 + 0x130,unaff_x22 + 0x4f0);
      FUN_1004eaa3c(unaff_x22 + 0x490);
      (**(code **)(lVar20 + 0x28))(unaff_x22 + 0x130,puVar6,lVar20);
      FUN_1004eaa3c(unaff_x22 + 0x130);
      (**(code **)(lVar15 + 8))(uVar12,uVar10);
      (**(code **)(lVar17 + 8))(uVar9,uVar8);
      FUN_100004594(unaff_x22 + 0x7c0);
    }
    else {
      uVar9 = *(undefined8 *)(unaff_x22 + 0x9c8);
      lVar15 = *(long *)(unaff_x22 + 0x9b8);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x9b0);
      (**(code **)(*(long *)(unaff_x22 + 0x998) + 8))
                (*(undefined8 *)(unaff_x22 + 0x9a0),*(undefined8 *)(unaff_x22 + 0x990));
      (**(code **)(lVar15 + 8))(uVar9,uVar8);
    }
    goto LAB_100510740;
  }
  if (iVar2 != *(int *)(unaff_x22 + 0xa3c)) {
    if (iVar2 == *(int *)(unaff_x22 + 0xa40)) {
      FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x720);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x738);
      lVar15 = *(long *)(unaff_x22 + 0x740);
      FUN_100004640(unaff_x22 + 0x720,uVar8);
      (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
      FUN_100004594(unaff_x22 + 0x720);
      if (((uint)uVar8 & 0xff) < 2) {
        uVar8 = *(undefined8 *)(unaff_x22 + 0x9c8);
        lVar17 = *(long *)(unaff_x22 + 0x9b8);
        uVar9 = *(undefined8 *)(unaff_x22 + 0x9b0);
        FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x6d0);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x6e8);
        lVar15 = *(long *)(unaff_x22 + 0x6f0);
        FUN_100004640(unaff_x22 + 0x6d0,uVar10);
        *(undefined1 *)(unaff_x22 + 0x70) = 1;
        *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacfd0;
        *(undefined8 *)(unaff_x22 + 0x90) = 0;
        *(undefined8 *)(unaff_x22 + 0x88) = 0;
        *(undefined8 *)(unaff_x22 + 0xa0) = 0;
        *(undefined8 *)(unaff_x22 + 0x98) = 0;
        *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dacf90;
        *(undefined8 *)(unaff_x22 + 200) = 0x188;
        *(undefined1 *)(unaff_x22 + 0x310) = 1;
        *(undefined8 *)(unaff_x22 + 0x318) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 800) = 0x8000000100dacfd0;
        *(undefined8 *)(unaff_x22 + 0x330) = 0;
        *(undefined8 *)(unaff_x22 + 0x328) = 0;
        *(undefined8 *)(unaff_x22 + 0x340) = 0;
        *(undefined8 *)(unaff_x22 + 0x338) = 0;
        *(undefined8 *)(unaff_x22 + 0x348) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x350) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x358) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0x360) = 0x8000000100dacf90;
        *(undefined8 *)(unaff_x22 + 0x368) = 0x188;
        FUN_1004eaa00(unaff_x22 + 0x70,unaff_x22 + 0x370);
        FUN_1004eaa3c(unaff_x22 + 0x310);
        (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x70,uVar10,lVar15);
        FUN_1004eaa3c(unaff_x22 + 0x70);
        (**(code **)(lVar17 + 8))(uVar8,uVar9);
        FUN_100004594(unaff_x22 + 0x6d0);
        goto LAB_100510740;
      }
    }
    else {
      if (iVar2 != *(int *)(unaff_x22 + 0xa44)) {
        if (iVar2 == *(int *)(unaff_x22 + 0xa48)) {
          plVar4 = (long *)0x1b0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xa30) = plVar4;
          *plVar4 = unaff_x22;
          plVar4[1] = (long)FUN_100510794;
          FUN_100510cc4();
          return;
        }
        lVar15 = *(long *)(unaff_x22 + 0xa20);
        if (iVar2 != *(int *)(unaff_x22 + 0xa4c)) {
          FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x748);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x760);
          lVar15 = *(long *)(unaff_x22 + 0x768);
          FUN_100004640(unaff_x22 + 0x748,uVar8);
          (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
          FUN_100004594(unaff_x22 + 0x748);
          if (((uint)uVar8 & 0xff) < 5) {
            uVar8 = *(undefined8 *)(unaff_x22 + 0x9c8);
            lVar17 = *(long *)(unaff_x22 + 0x9b8);
            uVar9 = *(undefined8 *)(unaff_x22 + 0x9b0);
            FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x6f8);
            uVar10 = *(undefined8 *)(unaff_x22 + 0x710);
            lVar15 = *(long *)(unaff_x22 + 0x718);
            FUN_100004640(unaff_x22 + 0x6f8,uVar10);
            *(undefined1 *)(unaff_x22 + 0x10) = 4;
            *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacfb0;
            *(undefined8 *)(unaff_x22 + 0x30) = 0;
            *(undefined8 *)(unaff_x22 + 0x28) = 0;
            *(undefined8 *)(unaff_x22 + 0x40) = 0;
            *(undefined8 *)(unaff_x22 + 0x38) = 0;
            *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dacf90;
            *(undefined8 *)(unaff_x22 + 0x68) = 0x18b;
            *(undefined1 *)(unaff_x22 + 0x250) = 4;
            *(undefined8 *)(unaff_x22 + 600) = 0xd000000000000018;
            *(undefined8 *)(unaff_x22 + 0x260) = 0x8000000100dacfb0;
            *(undefined8 *)(unaff_x22 + 0x270) = 0;
            *(undefined8 *)(unaff_x22 + 0x268) = 0;
            *(undefined8 *)(unaff_x22 + 0x280) = 0;
            *(undefined8 *)(unaff_x22 + 0x278) = 0;
            *(undefined8 *)(unaff_x22 + 0x288) = 0xd00000000000001a;
            *(undefined8 *)(unaff_x22 + 0x290) = 0x8000000100dacc70;
            *(undefined8 *)(unaff_x22 + 0x298) = 0xd000000000000013;
            *(undefined8 *)(unaff_x22 + 0x2a0) = 0x8000000100dacf90;
            *(undefined8 *)(unaff_x22 + 0x2a8) = 0x18b;
            FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0x2b0);
            FUN_1004eaa3c(unaff_x22 + 0x250);
            (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x10,uVar10,lVar15);
            FUN_1004eaa3c(unaff_x22 + 0x10);
            UNRECOVERED_JUMPTABLE = *(code **)(lVar17 + 8);
            (*UNRECOVERED_JUMPTABLE)(uVar8,uVar9);
            FUN_100004594(unaff_x22 + 0x6f8);
          }
          else {
            UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(unaff_x22 + 0x9b8) + 8);
            (*UNRECOVERED_JUMPTABLE)
                      (*(undefined8 *)(unaff_x22 + 0x9c8),*(undefined8 *)(unaff_x22 + 0x9b0));
          }
          (*UNRECOVERED_JUMPTABLE)
                    (*(undefined8 *)(unaff_x22 + 0x9c0),*(undefined8 *)(unaff_x22 + 0x9b0));
          goto LAB_100510740;
        }
        _swift_beginAccess(lVar15 + 0x20,unaff_x22 + 0x908,0,0);
        FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x7e8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x800);
        lVar15 = *(long *)(unaff_x22 + 0x808);
        FUN_100004640(unaff_x22 + 0x7e8,uVar8);
        (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
        puVar3 = (undefined8 *)(unaff_x22 + 0x7e8);
        FUN_100004594();
        if (((uint)uVar8 & 0xff) < 5) {
          FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x810);
          uVar8 = *(undefined8 *)(unaff_x22 + 0x828);
          lVar15 = *(long *)(unaff_x22 + 0x830);
          FUN_100004640(unaff_x22 + 0x810,uVar8);
          *(undefined1 *)(unaff_x22 + 400) = 4;
          *(undefined8 *)(unaff_x22 + 0x198) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0x1a0) = 0x8000000100dad030;
          *(undefined8 *)(unaff_x22 + 0x1b0) = 0;
          *(undefined8 *)(unaff_x22 + 0x1a8) = 0;
          *(undefined8 *)(unaff_x22 + 0x1c0) = 0;
          *(undefined8 *)(unaff_x22 + 0x1b8) = 0;
          *(undefined8 *)(unaff_x22 + 0x1c8) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x1d0) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x1d8) = 0xd000000000000013;
          *(undefined8 *)(unaff_x22 + 0x1e0) = 0x8000000100dacf90;
          *(undefined8 *)(unaff_x22 + 0x1e8) = 0x17e;
          *(undefined1 *)(unaff_x22 + 0x5b0) = 4;
          *(undefined8 *)(unaff_x22 + 0x5b8) = 0xd000000000000014;
          *(undefined8 *)(unaff_x22 + 0x5c0) = 0x8000000100dad030;
          *(undefined8 *)(unaff_x22 + 0x5d0) = 0;
          *(undefined8 *)(unaff_x22 + 0x5c8) = 0;
          *(undefined8 *)(unaff_x22 + 0x5e0) = 0;
          *(undefined8 *)(unaff_x22 + 0x5d8) = 0;
          *(undefined8 *)(unaff_x22 + 0x5e8) = 0xd00000000000001a;
          *(undefined8 *)(unaff_x22 + 0x5f0) = 0x8000000100dacc70;
          *(undefined8 *)(unaff_x22 + 0x5f8) = 0xd000000000000013;
          *(undefined8 *)(unaff_x22 + 0x600) = 0x8000000100dacf90;
          *(undefined8 *)(unaff_x22 + 0x608) = 0x17e;
          FUN_1004eaa00(unaff_x22 + 400,unaff_x22 + 0x610);
          FUN_1004eaa3c(unaff_x22 + 0x5b0);
          (**(code **)(lVar15 + 0x28))(unaff_x22 + 400,uVar8,lVar15);
          FUN_1004eaa3c(unaff_x22 + 400);
          puVar3 = (undefined8 *)(unaff_x22 + 0x810);
          FUN_100004594();
        }
        FUN_1004db3ac();
        _swift_allocError(&DAT_100eda9c8,puVar3,0,0);
        *puVar3 = 0xd000000000000014;
        puVar3[1] = 0x8000000100dad030;
        puVar3[2] = 0;
        *(undefined1 *)(puVar3 + 3) = 4;
        _swift_willThrow();
        goto LAB_10050fe38;
      }
      FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x770);
      uVar8 = *(undefined8 *)(unaff_x22 + 0x788);
      lVar15 = *(long *)(unaff_x22 + 0x790);
      FUN_100004640(unaff_x22 + 0x770,uVar8);
      (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
      FUN_100004594(unaff_x22 + 0x770);
      if (((uint)uVar8 & 0xff) < 2) {
        uVar9 = *(undefined8 *)(unaff_x22 + 0x9c8);
        lVar17 = *(long *)(unaff_x22 + 0x9b8);
        uVar8 = *(undefined8 *)(unaff_x22 + 0x9b0);
        FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x798);
        uVar10 = *(undefined8 *)(unaff_x22 + 0x7b0);
        lVar15 = *(long *)(unaff_x22 + 0x7b8);
        FUN_100004640(unaff_x22 + 0x798,uVar10);
        *(undefined1 *)(unaff_x22 + 0x550) = 1;
        *(undefined8 *)(unaff_x22 + 0x558) = 0xd000000000000017;
        *(undefined8 *)(unaff_x22 + 0x560) = 0x8000000100dacff0;
        *(undefined8 *)(unaff_x22 + 0x570) = 0;
        *(undefined8 *)(unaff_x22 + 0x568) = 0;
        *(undefined8 *)(unaff_x22 + 0x580) = 0;
        *(undefined8 *)(unaff_x22 + 0x578) = 0;
        *(undefined8 *)(unaff_x22 + 0x588) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x590) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x598) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0x5a0) = 0x8000000100dacf90;
        *(undefined8 *)(unaff_x22 + 0x5a8) = 0x185;
        *(undefined1 *)(unaff_x22 + 0x3d0) = 1;
        *(undefined8 *)(unaff_x22 + 0x3d8) = 0xd000000000000017;
        *(undefined8 *)(unaff_x22 + 0x3e0) = 0x8000000100dacff0;
        *(undefined8 *)(unaff_x22 + 0x3f0) = 0;
        *(undefined8 *)(unaff_x22 + 1000) = 0;
        *(undefined8 *)(unaff_x22 + 0x400) = 0;
        *(undefined8 *)(unaff_x22 + 0x3f8) = 0;
        *(undefined8 *)(unaff_x22 + 0x408) = 0xd00000000000001a;
        *(undefined8 *)(unaff_x22 + 0x410) = 0x8000000100dacc70;
        *(undefined8 *)(unaff_x22 + 0x418) = 0xd000000000000013;
        *(undefined8 *)(unaff_x22 + 0x420) = 0x8000000100dacf90;
        *(undefined8 *)(unaff_x22 + 0x428) = 0x185;
        FUN_1004eaa00(unaff_x22 + 0x550,unaff_x22 + 0x430);
        FUN_1004eaa3c(unaff_x22 + 0x3d0);
        (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x550,uVar10,lVar15);
        FUN_1004eaa3c(unaff_x22 + 0x550);
        (**(code **)(lVar17 + 8))(uVar9,uVar8);
        FUN_100004594(unaff_x22 + 0x798);
        goto LAB_100510740;
      }
    }
    (**(code **)(*(long *)(unaff_x22 + 0x9b8) + 8))
              (*(undefined8 *)(unaff_x22 + 0x9c8),*(undefined8 *)(unaff_x22 + 0x9b0));
LAB_100510740:
    plVar4 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xa28) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10050f970;
    Swift::AsyncStream::Iterator::_next((Iterator)*(undefined **)(unaff_x22 + 0x9d0));
    return;
  }
  lVar15 = *(long *)(unaff_x22 + 0xa20);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x9c0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9a8);
  lVar17 = *(long *)(unaff_x22 + 0x998);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x990);
  (**(code **)(*(long *)(unaff_x22 + 0x9b8) + 0x60))(uVar9,*(undefined8 *)(unaff_x22 + 0x9b0));
  (**(code **)(lVar17 + 0x20))(uVar8,uVar9,uVar10);
  pcVar13 = (char *)0x0;
  pvVar7 = (void *)0x0;
  _swift_beginAccess(lVar15 + 0x20,unaff_x22 + 0x920);
  FUN_100076688(lVar15 + 0x20,unaff_x22 + 0x838);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x850);
  lVar15 = *(long *)(unaff_x22 + 0x858);
  FUN_100004640(unaff_x22 + 0x838,uVar8);
  (**(code **)(lVar15 + 0x70))(uVar8,lVar15);
  FUN_100004594(unaff_x22 + 0x838);
  if (((uint)uVar8 & 0xff) < 6) {
    uVar8 = *(undefined8 *)(unaff_x22 + 0x9a8);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x990);
    FUN_100076688(*(long *)(unaff_x22 + 0xa20) + 0x20,unaff_x22 + 0x888);
    puVar6 = *(undefined **)(unaff_x22 + 0x8a0);
    lVar15 = *(long *)(unaff_x22 + 0x8a8);
    _Var5.unknown = puVar6;
    FUN_100004640(unaff_x22 + 0x888);
    Swift::_StringGuts::grow(0x15,_Var5);
    *(undefined8 *)(unaff_x22 + 0x968) = 0;
    *(undefined8 *)(unaff_x22 + 0x970) = 0xe000000000000000;
    SVar23.bridgeObject = (void *)0x8000000100dad050;
    SVar23.str = (char *)0xd000000000000013;
    SVar25.bridgeObject = pvVar7;
    SVar25.str = pcVar13;
    Swift::String::append(SVar23,SVar25);
    Swift::__print_unlocked
              (uVar8,unaff_x22 + 0x968,uVar9,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    DVar11.unknown = *(undefined **)(unaff_x22 + 0x968);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(DVar11);
    *(undefined1 *)(unaff_x22 + 0x1f0) = 5;
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x978);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x980);
    *(undefined8 *)(unaff_x22 + 0x210) = 0;
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined8 *)(unaff_x22 + 0x220) = 0;
    *(undefined8 *)(unaff_x22 + 0x218) = 0;
    *(undefined8 *)(unaff_x22 + 0x228) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x230) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x238) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x240) = 0x8000000100dacf90;
    *(undefined8 *)(unaff_x22 + 0x248) = 0x17a;
    *(undefined1 *)(unaff_x22 + 0x670) = 5;
    *(undefined8 *)(unaff_x22 + 0x678) = *(undefined8 *)(unaff_x22 + 0x978);
    *(undefined8 *)(unaff_x22 + 0x680) = *(undefined8 *)(unaff_x22 + 0x980);
    *(undefined8 *)(unaff_x22 + 0x690) = 0;
    *(undefined8 *)(unaff_x22 + 0x688) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a0) = 0;
    *(undefined8 *)(unaff_x22 + 0x698) = 0;
    *(undefined8 *)(unaff_x22 + 0x6a8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x6b0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x6b8) = 0xd000000000000013;
    *(undefined8 *)(unaff_x22 + 0x6c0) = 0x8000000100dacf90;
    *(undefined8 *)(unaff_x22 + 0x6c8) = 0x17a;
    FUN_1004eaa00(unaff_x22 + 0x1f0,unaff_x22 + 0xd0);
    FUN_1004eaa3c(unaff_x22 + 0x670);
    (**(code **)(lVar15 + 0x28))(unaff_x22 + 0x1f0,puVar6,lVar15);
    FUN_1004eaa3c(unaff_x22 + 0x1f0);
    FUN_100004594(unaff_x22 + 0x888);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9a8);
  lVar15 = *(long *)(unaff_x22 + 0x998);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x990);
  puVar6 = &DAT_100fce2d0;
  FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                PTR_Network__Network__NWError_>Swift__Error_100eaa360);
  _swift_allocError(uVar9,puVar6,0,0);
  (**(code **)(lVar15 + 0x10))(puVar6,uVar8,uVar9);
  _swift_willThrow();
  (**(code **)(lVar15 + 8))(uVar8,uVar9);
LAB_10050fe38:
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa18);
  lVar15 = *(long *)(unaff_x22 + 0xa10);
  uVar14 = *(undefined8 *)(unaff_x22 + 0xa08);
  uVar16 = *(undefined8 *)(unaff_x22 + 0xa00);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x9e8);
  lVar17 = *(long *)(unaff_x22 + 0x9e0);
  uVar19 = *(undefined8 *)(unaff_x22 + 0x9d8);
  uVar21 = *(undefined8 *)(unaff_x22 + 0x9d0);
  uVar22 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar10 = *(undefined8 *)(unaff_x22 + 0x9c0);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9a8);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x9a0);
  (**(code **)(*(long *)(unaff_x22 + 0x9b8) + 8))(uVar22,*(undefined8 *)(unaff_x22 + 0x9b0));
  (**(code **)(lVar17 + 8))(uVar18,uVar19);
  (**(code **)(lVar15 + 8))(uVar12,uVar14);
  _swift_task_dealloc(uVar12);
  _swift_task_dealloc(uVar16);
  _swift_task_dealloc(uVar18);
  _swift_task_dealloc(uVar21);
  _swift_task_dealloc(uVar22);
  _swift_task_dealloc(uVar10);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
LAB_10050feec:
                    /* WARNING: Could not recover jumptable at 0x00010050ff08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100510794 | FUN_100510794 */

void FUN_100510794(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x988);
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xa30));
  _swift_task_switch(FUN_1005107e0,uVar1,0);
  return;
}



/* Address: 0x1005107e0 | FUN_1005107e0 */

void FUN_1005107e0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  
  (**(code **)(*(long *)(unaff_x22 + 0x9b8) + 8))
            (*(undefined8 *)(unaff_x22 + 0x9c8),*(undefined8 *)(unaff_x22 + 0x9b0));
  uVar3 = *(undefined8 *)(unaff_x22 + 0xa18);
  lVar10 = *(long *)(unaff_x22 + 0xa10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa08);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa00);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x9e8);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x9d0);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x9c8);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x9c0);
  uVar9 = *(undefined8 *)(unaff_x22 + 0x9a8);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x9a0);
  (**(code **)(*(long *)(unaff_x22 + 0x9e0) + 8))(uVar5,*(undefined8 *)(unaff_x22 + 0x9d8));
  (**(code **)(lVar10 + 8))(uVar3,uVar2);
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
  _swift_task_dealloc(uVar8);
  _swift_task_dealloc(uVar9);
  _swift_task_dealloc(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005108cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005108d0 | FUN_1005108d0 */

void FUN_1005108d0(Continuation *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long extraout_x8;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  puVar2 = &DAT_100fce328;
  FUN_1000f7830(&DAT_100fce328,&DAT_100c54808);
  lVar7 = *(long *)(puVar2 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar5 + 0xfU & 0xfffffffffffffff0);
  uVar4 = param_2;
  _swift_task_isCurrentExecutor(param_2,0);
  if ((uVar4 & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("MCP/NetworkTransport.swift",0x1a,1,0x160,param_2,0);
  }
  puVar3 = &DAT_100edc418;
  _swift_allocObject(&DAT_100edc418,0x18,7);
  _swift_weakInit(puVar3 + 0x10,param_2);
  Swift::AsyncStream::Continuation::_set_onTermination(param_1);
  (**(code **)(lVar7 + 0x10))(auStack_70 + -extraout_x8,param_1,puVar2);
  uVar4 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar6 = uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff);
  puVar3 = &DAT_100edc800;
  _swift_allocObject(&DAT_100edc800,uVar6 + lVar5,uVar4 | 7);
  (**(code **)(lVar7 + 0x20))(puVar3 + uVar6,auStack_70 + -extraout_x8,puVar2);
  lVar5 = param_2 + _TtC3MCP16NetworkTransport::connection;
  _swift_beginAccess(lVar5,auStack_68,0x21,0);
  uVar1 = *(undefined8 *)(lVar5 + 0x18);
  lVar7 = *(long *)(lVar5 + 0x20);
  FUN_10007d048(lVar5,uVar1);
  (**(code **)(lVar7 + 0x18))(FUN_10051c6e8,puVar3,uVar1,lVar7);
  _swift_endAccess(auStack_68);
  return;
}



/* Address: 0x100510a64 | FUN_100510a64 */

void FUN_100510a64(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    lVar1 = param_2 + _TtC3MCP16NetworkTransport::connection;
    _swift_beginAccess(lVar1,auStack_70,0x21,0);
    uVar2 = *(undefined8 *)(lVar1 + 0x18);
    lVar3 = *(long *)(lVar1 + 0x20);
    FUN_10007d048(lVar1,uVar2);
    (**(code **)(lVar3 + 0x18))(0,0,uVar2,lVar3);
    _swift_endAccess(auStack_70);
    _swift_release(param_2);
  }
  return;
}



/* Address: 0x100510b18 | FUN_100510b18 */

void FUN_100510b18(undefined8 param_1)

{
  State SVar1;
  int iVar2;
  undefined7 extraout_var;
  undefined *puVar4;
  Continuation_conflict CVar5;
  undefined1 *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  undefined1 *puVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar3;
  
  SVar1 = Network::NWConnection::State::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,SVar1.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  puVar7 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)puVar7 - extraout_x12;
  puVar4 = &DAT_100fce330;
  FUN_1000f7830(&DAT_100fce330,&DAT_100c54810);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pcVar8 = *(code **)(lVar10 + 0x10);
  (*pcVar8)(lVar9,param_1,lVar3);
  CVar5.unknown = &DAT_100fce328;
  FUN_1000f7830(&DAT_100fce328,&DAT_100c54808);
  Swift::AsyncStream::Continuation::_yield(lVar9 - extraout_x8_00,lVar9);
  (**(code **)(lVar11 + 8))(lVar9 - extraout_x8_00,puVar4);
  (*pcVar8)(puVar7,param_1,lVar3);
  puVar6 = puVar7;
  (**(code **)(lVar10 + 0x58))(puVar7,lVar3);
  iVar2 = (int)puVar6;
  if (iVar2 == *(int *)
                PTR___enum_case_for_Network_NWConnection_State_failed_Network_NWConnection_State_Type___>__Network_NWError___>_Network_NWConnection_State_100eaa0a8
     ) {
    (**(code **)(lVar10 + 8))(puVar7,lVar3);
  }
  else if (iVar2 != *(int *)
                     PTR___enum_case_for_Network_NWConnection_State_ready_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa098
           && iVar2 != *(int *)
                        PTR___enum_case_for_Network_NWConnection_State_cancelled_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0b8
          ) {
    (**(code **)(lVar10 + 8))(puVar7,lVar3);
    return;
  }
  Swift::AsyncStream::Continuation::finish(CVar5);
  return;
}



/* Address: 0x100510cc4 | FUN_100510cc4 */

void FUN_100510cc4(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x198) = unaff_x20;
  puVar1 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x1a0) = uVar2;
  _swift_task_switch(FUN_100510d28);
  return;
}



/* Address: 0x100510d28 | FUN_100510d28 */

void FUN_100510d28(void)

{
  undefined8 uVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  
  lVar5 = *(long *)(unaff_x22 + 0x198);
  *(undefined1 *)(lVar5 + 0x70) = 1;
  *(undefined8 *)(lVar5 + 0x78) = 0;
  lVar6 = *(long *)(lVar5 + _TtC3MCP16NetworkTransport::logger);
  _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0x180,0,0);
  FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x130);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar5 = *(long *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar1);
  (**(code **)(lVar5 + 0x70))(uVar1,lVar5);
  FUN_100004594(unaff_x22 + 0x130);
  if (((uint)uVar1 & 0xff) < 2) {
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x158);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x170);
    lVar5 = *(long *)(unaff_x22 + 0x178);
    FUN_100004640(unaff_x22 + 0x158,uVar1);
    *(undefined1 *)(unaff_x22 + 0x70) = 1;
    *(undefined1 *)(unaff_x22 + 0x10) = 1;
    *(undefined8 *)(unaff_x22 + 0x18) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100dacf20;
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dacf00;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x194;
    *(undefined8 *)(unaff_x22 + 0x78) = 0xd000000000000028;
    *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100dacf20;
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000017;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dacf00;
    *(undefined8 *)(unaff_x22 + 200) = 0x194;
    FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar5 + 0x28))(unaff_x22 + 0x10,uVar1,lVar5);
    FUN_1004eaa3c(unaff_x22 + 0x10);
    FUN_100004594(unaff_x22 + 0x158);
  }
  lVar5 = *(long *)(unaff_x22 + 0x198);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x1a0);
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))(uVar1,1,1,TVar2.unknown);
  puVar3 = &DAT_100fcdf50;
  FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
  puVar4 = &DAT_100edc760;
  _swift_allocObject(&DAT_100edc760,0x28,7);
  *(long *)(puVar4 + 0x10) = lVar5;
  *(undefined **)(puVar4 + 0x18) = puVar3;
  *(long *)(puVar4 + 0x20) = lVar5;
  _swift_retain_n(lVar5,2);
  FUN_1004e9c98(0,0,uVar1,&DAT_100c547c0,puVar4);
  _swift_release();
  if (*(char *)(lVar5 + _TtC3MCP16NetworkTransport::heartbeatConfig) == '\x01') {
    FUN_100510fb0();
  }
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x1a0));
                    /* WARNING: Could not recover jumptable at 0x000100510f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100510f68 | FUN_100510f68 */

void FUN_100510f68(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x13f0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100008284;
  FUN_100514a9c();
  return;
}



/* Address: 0x100510fb0 | FUN_100510fb0 */

void FUN_100510fb0(void)

{
  Task TVar1;
  TaskPriority TVar2;
  undefined *puVar3;
  undefined8 uVar4;
  long extraout_x8;
  undefined8 uVar5;
  long unaff_x20;
  undefined *puVar6;
  
  puVar6 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = *(undefined **)(unaff_x20 + 0x80);
  if (puVar6 != (undefined *)0x0) {
    TVar1.unknown = puVar6;
    _swift_retain();
    Swift::Task::cancel(TVar1);
    _swift_release(puVar6);
  }
  TVar2 = Swift::TaskPriority::typeMetadataAccessor();
  (**(code **)(*(long *)(TVar2.unknown + -8) + 0x38))
            (&stack0xffffffffffffffd0 + -extraout_x8,1,1,TVar2.unknown);
  puVar6 = &DAT_100edc418;
  _swift_allocObject(&DAT_100edc418,0x18,7);
  _swift_weakInit(puVar6 + 0x10);
  puVar3 = &DAT_100edc738;
  _swift_allocObject(&DAT_100edc738,0x28,7);
  *(undefined8 *)(puVar3 + 0x10) = 0;
  *(undefined8 *)(puVar3 + 0x18) = 0;
  *(undefined **)(puVar3 + 0x20) = puVar6;
  uVar4 = 0;
  FUN_1004e9c98(0,0,&stack0xffffffffffffffd0 + -extraout_x8,&DAT_100c547b0,puVar3);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar4;
  _swift_release(uVar5);
  return;
}



/* Address: 0x1005110d8 | FUN_1005110d8 */

void FUN_1005110d8(void)

{
  Instant IVar1;
  ulong uVar2;
  ulong uVar3;
  ContinuousClock CVar4;
  undefined8 in_x3;
  long lVar5;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x250) = in_x3;
  IVar1 = Swift::ContinuousClock::Instant::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 600) = IVar1.unknown;
  lVar5 = *(long *)(IVar1.unknown + -8);
  *(long *)(unaff_x22 + 0x260) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x268) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x270) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x278) = uVar3;
  CVar4 = Swift::ContinuousClock::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x280) = CVar4.unknown;
  lVar5 = *(long *)(CVar4.unknown + -8);
  *(long *)(unaff_x22 + 0x288) = lVar5;
  uVar3 = *(long *)(lVar5 + 0x40) + 0xf;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x290) = uVar2;
  uVar2 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x298) = uVar2;
  uVar3 = uVar3 & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x2a0) = uVar3;
  _swift_task_switch(FUN_100511190,0,0);
  return;
}



/* Address: 0x100511190 | FUN_100511190 */

void FUN_100511190(void)

{
  long *plVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  lVar3 = *(long *)(unaff_x22 + 0x250);
  _swift_beginAccess(lVar3 + 0x10,unaff_x22 + 0x180,0,0);
  lVar3 = lVar3 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x2a8) = lVar3;
  if (lVar3 != 0) {
    (extension_Swift)::Swift::Clock::_get_continuous();
    plVar1 = (long *)0x80;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2b0) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1005112ac;
    FUN_10051aec0(1000000000000000000,0,0,0,1);
    return;
  }
  uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
  _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x0001005112a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005112ac | FUN_1005112ac */

void FUN_1005112ac(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2b0));
  if (unaff_x20 == 0) {
    pcVar1 = *(code **)(*(long *)(lVar2 + 0x288) + 8);
    *(code **)(lVar2 + 0x2b8) = pcVar1;
    (*pcVar1)(*(undefined8 *)(lVar2 + 0x2a0),*(undefined8 *)(lVar2 + 0x280));
    pcVar1 = FUN_100511324;
  }
  else {
    _swift_errorRelease();
    pcVar1 = FUN_1005113f8;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100511324 | FUN_100511324 */

void FUN_100511324(Task param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  *(undefined8 *)(unaff_x22 + 0x2c0) = *(undefined8 *)(unaff_x22 + 0x2b8);
  *(undefined8 *)(unaff_x22 + 0x2c8) = _TtC3MCP16NetworkTransport::heartbeatConfig;
  *(undefined8 *)(unaff_x22 + 0x2d0) = _TtC3MCP16NetworkTransport::logger;
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001005113cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1005114dc,*(undefined8 *)(unaff_x22 + 0x2a8),0);
  return;
}



/* Address: 0x1005113f8 | FUN_1005113f8 */

void FUN_1005113f8(void)

{
  bool bVar1;
  Task TVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x2a0);
  pcVar4 = *(code **)(*(long *)(unaff_x22 + 0x288) + 8);
  (*pcVar4)(TVar2.unknown,*(undefined8 *)(unaff_x22 + 0x280));
  *(code **)(unaff_x22 + 0x2c0) = pcVar4;
  *(undefined8 *)(unaff_x22 + 0x2c8) = _TtC3MCP16NetworkTransport::heartbeatConfig;
  *(undefined8 *)(unaff_x22 + 0x2d0) = _TtC3MCP16NetworkTransport::logger;
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    uVar5 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x0001005114b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1005114dc,*(undefined8 *)(unaff_x22 + 0x2a8),0);
  return;
}



/* Address: 0x1005114dc | FUN_1005114dc */

void FUN_1005114dc(void)

{
  long unaff_x22;
  
  *(undefined1 *)(unaff_x22 + 0x1d9) = *(undefined1 *)(*(long *)(unaff_x22 + 0x2a8) + 0x71);
  *(undefined1 *)(unaff_x22 + 0x1da) = *(undefined1 *)(*(long *)(unaff_x22 + 0x2a8) + 0x70);
  _swift_task_switch(FUN_100511504,0,0);
  return;
}



/* Address: 0x100511504 | FUN_100511504 */

void FUN_100511504(void)

{
  long *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  if (((*(byte *)(unaff_x22 + 0x1d9) & 1) == 0) && (*(char *)(unaff_x22 + 0x1da) != '\0')) {
    plVar1 = (long *)0x200;
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x2d8) = plVar1;
    *plVar1 = unaff_x22;
    plVar1[1] = (long)FUN_1005115d4;
    FUN_100512100();
    return;
  }
  _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
  uVar3 = *(undefined8 *)(unaff_x22 + 0x298);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x268);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
  _swift_task_dealloc(uVar3);
  _swift_task_dealloc(uVar2);
  _swift_task_dealloc(uVar4);
  _swift_task_dealloc(uVar5);
  _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x0001005115d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005115d4 | FUN_1005115d4 */

void FUN_1005115d4(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x2e0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x2d8));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100511630;
  }
  else {
    pcVar1 = FUN_100511e00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100511630 | FUN_100511630 */

void FUN_100511630(Duration param_1,undefined8 param_2)

{
  Duration DVar1;
  long *plVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  long lVar6;
  
  uVar4 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar6 = *(long *)(unaff_x22 + 0x260);
  uVar5 = *(undefined8 *)(unaff_x22 + 600);
  DVar1 = Swift::Duration::seconds
                    (*(double *)(*(long *)(unaff_x22 + 0x2a8) + *(long *)(unaff_x22 + 0x2c8) + 8),
                     param_1);
  (extension_Swift)::Swift::Clock::_get_continuous();
  *(undefined **)(unaff_x22 + 0x238) = DVar1.unknown;
  *(undefined8 *)(unaff_x22 + 0x240) = param_2;
  *(undefined8 *)(unaff_x22 + 0x1e0) = 0;
  *(undefined8 *)(unaff_x22 + 0x1e8) = 0;
  *(undefined1 *)(unaff_x22 + 0x1f0) = 1;
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar3 = *(code **)(lVar6 + 8);
  *(code **)(unaff_x22 + 0x2e8) = pcVar3;
  (*pcVar3)(uVar4,uVar5);
  plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x2f0) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100511770;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100511770 | FUN_100511770 */

void FUN_100511770(void)

{
  undefined8 uVar1;
  long unaff_x20;
  undefined8 uVar2;
  long *unaff_x22;
  long lVar3;
  code *pcVar4;
  
  lVar3 = *unaff_x22;
  pcVar4 = *(code **)(lVar3 + 0x2e8);
  uVar1 = *(undefined8 *)(lVar3 + 0x278);
  uVar2 = *(undefined8 *)(lVar3 + 600);
  *(long *)(lVar3 + 0x2f8) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x2f0));
  (*pcVar4)(uVar1,uVar2);
  if (unaff_x20 == 0) {
    (**(code **)(lVar3 + 0x2c0))(*(undefined8 *)(lVar3 + 0x298),*(undefined8 *)(lVar3 + 0x280));
    pcVar4 = FUN_100511804;
  }
  else {
    pcVar4 = FUN_1005118b8;
  }
  _swift_task_switch(pcVar4,0,0);
  return;
}



/* Address: 0x100511804 | FUN_100511804 */

void FUN_100511804(Task param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long unaff_x22;
  undefined8 uVar5;
  undefined8 uVar6;
  
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(param_1);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    uVar3 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
                    /* WARNING: Could not recover jumptable at 0x00010051188c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1005114dc,*(undefined8 *)(unaff_x22 + 0x2a8),0);
  return;
}



/* Address: 0x1005118b8 | FUN_1005118b8 */

void FUN_1005118b8(void)

{
  undefined *puVar1;
  DefaultStringInterpolation stringInterpolation;
  long *plVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  
  (**(code **)(unaff_x22 + 0x2c0))
            (*(undefined8 *)(unaff_x22 + 0x298),*(undefined8 *)(unaff_x22 + 0x280));
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2f8);
  *(undefined8 *)(unaff_x22 + 0x300) = uVar9;
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x2a8) + *(long *)(unaff_x22 + 0x2d0));
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x198);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar11 = *(long *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar8);
  (**(code **)(lVar11 + 0x70))(uVar8,lVar11);
  FUN_100004594(unaff_x22 + 0x130);
  if (((uint)uVar8 & 0xff) < 5) {
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x158);
    puVar1 = *(undefined **)(unaff_x22 + 0x170);
    lVar11 = *(long *)(unaff_x22 + 0x178);
    _Var3.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined8 *)(unaff_x22 + 0x210) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x14,_Var3);
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x210);
    SVar12.bridgeObject = (void *)0x8000000100dacee0;
    SVar12.str = (char *)0xd000000000000012;
    SVar13.bridgeObject = pvVar5;
    SVar13.str = pcVar4;
    Swift::String::append(SVar12,SVar13);
    _swift_getErrorValue(uVar9,unaff_x22 + 0x248,unaff_x22 + 0x1b0);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8));
    stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1f8);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    *(undefined1 *)(unaff_x22 + 0x70) = 4;
    puVar10 = (undefined1 *)(unaff_x22 + 0x10);
    *puVar10 = 4;
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dacec0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x1b7;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dacec0;
    *(undefined8 *)(unaff_x22 + 200) = 0x1b7;
    FUN_1004eaa00(puVar10,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar11 + 0x28))(puVar10,puVar1,lVar11);
    FUN_1004eaa3c(puVar10);
    FUN_100004594(unaff_x22 + 0x158);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar11 = *(long *)(unaff_x22 + 0x260);
  uVar9 = *(undefined8 *)(unaff_x22 + 600);
  (extension_Swift)::Swift::Clock::_get_continuous();
  *(undefined8 *)(unaff_x22 + 0x228) = 2000000000000000000;
  *(undefined8 *)(unaff_x22 + 0x230) = 0;
  *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
  *(undefined1 *)(unaff_x22 + 0x1d8) = 1;
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar6 = *(code **)(lVar11 + 8);
  *(code **)(unaff_x22 + 0x308) = pcVar6;
  (*pcVar6)(uVar8,uVar9);
  plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x310) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100511bc8;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100511bc8 | FUN_100511bc8 */

void FUN_100511bc8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  undefined8 uVar3;
  long *unaff_x22;
  code *pcVar4;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x310));
  if (unaff_x20 == 0) {
    pcVar4 = *(code **)(lVar2 + 0x2c0);
    uVar3 = *(undefined8 *)(lVar2 + 0x290);
    uVar1 = *(undefined8 *)(lVar2 + 0x280);
    (**(code **)(lVar2 + 0x308))(*(undefined8 *)(lVar2 + 0x268),*(undefined8 *)(lVar2 + 600));
    (*pcVar4)(uVar3,uVar1);
    pcVar4 = FUN_100511c70;
  }
  else {
    pcVar4 = *(code **)(lVar2 + 0x308);
    uVar1 = *(undefined8 *)(lVar2 + 0x268);
    uVar3 = *(undefined8 *)(lVar2 + 600);
    _swift_errorRelease();
    (*pcVar4)(uVar1,uVar3);
    pcVar4 = FUN_100511d2c;
  }
  _swift_task_switch(pcVar4,0,0);
  return;
}



/* Address: 0x100511c70 | FUN_100511c70 */

void FUN_100511c70(void)

{
  bool bVar1;
  Task TVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  undefined8 uVar6;
  undefined8 uVar7;
  
  TVar2.unknown = *(undefined **)(unaff_x22 + 0x300);
  _swift_errorRelease();
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar2);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar5 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar3);
    _swift_task_dealloc(uVar5);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
                    /* WARNING: Could not recover jumptable at 0x000100511d00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1005114dc,*(undefined8 *)(unaff_x22 + 0x2a8),0);
  return;
}



/* Address: 0x100511d2c | FUN_100511d2c */

void FUN_100511d2c(void)

{
  bool bVar1;
  undefined8 uVar2;
  Task TVar3;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  long unaff_x22;
  undefined8 uVar7;
  undefined8 uVar8;
  
  pcVar5 = *(code **)(unaff_x22 + 0x2c0);
  TVar3.unknown = *(undefined **)(unaff_x22 + 0x290);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x280);
  _swift_errorRelease(*(undefined8 *)(unaff_x22 + 0x300));
  (*pcVar5)(TVar3.unknown,uVar2);
  bVar1 = (extension_Swift)::Swift::Task::_get_isCancelled(TVar3);
  if (bVar1) {
    _swift_release(*(undefined8 *)(unaff_x22 + 0x2a8));
    uVar4 = *(undefined8 *)(unaff_x22 + 0x298);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x290);
    uVar6 = *(undefined8 *)(unaff_x22 + 0x278);
    uVar7 = *(undefined8 *)(unaff_x22 + 0x270);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x268);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x2a0));
    _swift_task_dealloc(uVar4);
    _swift_task_dealloc(uVar2);
    _swift_task_dealloc(uVar6);
    _swift_task_dealloc(uVar7);
    _swift_task_dealloc(uVar8);
                    /* WARNING: Could not recover jumptable at 0x000100511dd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  _swift_task_switch(FUN_1005114dc,*(undefined8 *)(unaff_x22 + 0x2a8),0);
  return;
}



/* Address: 0x100511e00 | FUN_100511e00 */

void FUN_100511e00(void)

{
  undefined *puVar1;
  DefaultStringInterpolation stringInterpolation;
  long *plVar2;
  _StringGuts _Var3;
  char *pcVar4;
  void *pvVar5;
  code *pcVar6;
  long unaff_x22;
  long lVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 *puVar10;
  long lVar11;
  String SVar12;
  String SVar13;
  
  uVar9 = *(undefined8 *)(unaff_x22 + 0x2e0);
  *(undefined8 *)(unaff_x22 + 0x300) = uVar9;
  lVar7 = *(long *)(*(long *)(unaff_x22 + 0x2a8) + *(long *)(unaff_x22 + 0x2d0));
  pcVar4 = (char *)0x0;
  pvVar5 = (void *)0x0;
  _swift_beginAccess(lVar7 + 0x20,unaff_x22 + 0x198);
  FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x130);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x148);
  lVar11 = *(long *)(unaff_x22 + 0x150);
  FUN_100004640(unaff_x22 + 0x130,uVar8);
  (**(code **)(lVar11 + 0x70))(uVar8,lVar11);
  FUN_100004594(unaff_x22 + 0x130);
  if (((uint)uVar8 & 0xff) < 5) {
    FUN_100076688(lVar7 + 0x20,unaff_x22 + 0x158);
    puVar1 = *(undefined **)(unaff_x22 + 0x170);
    lVar11 = *(long *)(unaff_x22 + 0x178);
    _Var3.unknown = puVar1;
    FUN_100004640(unaff_x22 + 0x158);
    *(undefined8 *)(unaff_x22 + 0x208) = 0;
    *(undefined8 *)(unaff_x22 + 0x210) = 0xe000000000000000;
    Swift::_StringGuts::grow(0x14,_Var3);
    *(undefined8 *)(unaff_x22 + 0x1f8) = *(undefined8 *)(unaff_x22 + 0x208);
    *(undefined8 *)(unaff_x22 + 0x200) = *(undefined8 *)(unaff_x22 + 0x210);
    SVar12.bridgeObject = (void *)0x8000000100dacee0;
    SVar12.str = (char *)0xd000000000000012;
    SVar13.bridgeObject = pvVar5;
    SVar13.str = pcVar4;
    Swift::String::append(SVar12,SVar13);
    _swift_getErrorValue(uVar9,unaff_x22 + 0x248,unaff_x22 + 0x1b0);
    Swift::DefaultStringInterpolation::_appendInterpolation
              (*(undefined8 *)(unaff_x22 + 0x1b0),*(undefined8 *)(unaff_x22 + 0x1b8));
    stringInterpolation.unknown = *(undefined **)(unaff_x22 + 0x1f8);
    FUN_1004f94cc();
    (extension_Swift)::Swift::ExpressibleByStringInterpolation::_init(stringInterpolation);
    *(undefined1 *)(unaff_x22 + 0x70) = 4;
    puVar10 = (undefined1 *)(unaff_x22 + 0x10);
    *puVar10 = 4;
    *(undefined8 *)(unaff_x22 + 0x18) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x20) = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x30) = 0;
    *(undefined8 *)(unaff_x22 + 0x28) = 0;
    *(undefined8 *)(unaff_x22 + 0x40) = 0;
    *(undefined8 *)(unaff_x22 + 0x38) = 0;
    *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x58) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0x60) = 0x8000000100dacec0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0x1b7;
    *(undefined8 *)(unaff_x22 + 0x78) = *(undefined8 *)(unaff_x22 + 0x218);
    *(undefined8 *)(unaff_x22 + 0x80) = *(undefined8 *)(unaff_x22 + 0x220);
    *(undefined8 *)(unaff_x22 + 0x90) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0;
    *(undefined8 *)(unaff_x22 + 0x98) = 0;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0xd000000000000010;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0x8000000100dacec0;
    *(undefined8 *)(unaff_x22 + 200) = 0x1b7;
    FUN_1004eaa00(puVar10,unaff_x22 + 0xd0);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0x70));
    (**(code **)(lVar11 + 0x28))(puVar10,puVar1,lVar11);
    FUN_1004eaa3c(puVar10);
    FUN_100004594(unaff_x22 + 0x158);
  }
  uVar8 = *(undefined8 *)(unaff_x22 + 0x270);
  lVar11 = *(long *)(unaff_x22 + 0x260);
  uVar9 = *(undefined8 *)(unaff_x22 + 600);
  (extension_Swift)::Swift::Clock::_get_continuous();
  *(undefined8 *)(unaff_x22 + 0x228) = 2000000000000000000;
  *(undefined8 *)(unaff_x22 + 0x230) = 0;
  *(undefined8 *)(unaff_x22 + 0x1c8) = 0;
  *(undefined8 *)(unaff_x22 + 0x1d0) = 0;
  *(undefined1 *)(unaff_x22 + 0x1d8) = 1;
  FUN_100003a00(&DAT_100fcd4b8,PTR_typeMetadataAccessor_100eaef18,
                PTR_Swift__Swift__ContinuousClock_>Swift__Clock_100eaef28);
  Swift::Clock::_get_now();
  FUN_100003a00(&DAT_100fcd4c0,PTR_typeMetadataAccessor_100eaeef0,
                PTR_Swift__Swift__ContinuousClock__Instant_>Swift__InstantProtocol_100eaef08);
  Swift::InstantProtocol::_advanced();
  pcVar6 = *(code **)(lVar11 + 8);
  *(code **)(unaff_x22 + 0x308) = pcVar6;
  (*pcVar6)(uVar8,uVar9);
  plVar2 = (long *)(ulong)*(uint *)(PTR__sleep_100eaefe8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x310) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_100511bc8;
  Swift::Clock::_sleep();
  return;
}



/* Address: 0x100512100 | FUN_100512100 */

void FUN_100512100(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x1d8) = unaff_x20;
  _swift_task_switch(FUN_100512118);
  return;
}



/* Address: 0x100512118 | FUN_100512118 */

void FUN_100512118(void)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  UnownedSerialExecutor UVar5;
  long lVar6;
  void *pvVar7;
  long unaff_x22;
  String isolation;
  
  lVar6 = *(long *)(unaff_x22 + 0x1d8);
  if ((*(char *)(lVar6 + 0x70) == '\x01') && ((*(byte *)(lVar6 + 0x71) & 1) == 0)) {
    puVar2 = &DAT_100fcdf50;
    FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
    puVar3 = &DAT_100edc418;
    _swift_allocObject(&DAT_100edc418,0x18,7);
    *(undefined **)(unaff_x22 + 0x1e0) = puVar3;
    _swift_weakInit(puVar3 + 0x10,lVar6);
    bVar1 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    pvVar7 = *(void **)(unaff_x22 + 0x1d8);
    if ((bVar1 & 1) != 0) {
      plVar4 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0x1e8) = plVar4;
      *plVar4 = unaff_x22;
      plVar4[1] = (long)FUN_100512288;
      isolation.bridgeObject = pvVar7;
      isolation.str = (char *)plVar4;
      Swift::_withCheckedThrowingContinuation(isolation);
      return;
    }
    _swift_getObjectType(pvVar7);
    UVar5 = Swift::Actor::get_unownedExecutor();
    _swift_task_switch(FUN_1005122f0,UVar5.unknown,puVar2);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100512160. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100512288 | FUN_100512288 */

void FUN_100512288(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x1e8));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x1e0));
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    pcVar1 = FUN_100512468;
  }
  else {
    *(long *)(lVar3 + 0x1f0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    pcVar1 = FUN_1005125f4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x1005122f0 | FUN_1005122f0 */

void FUN_1005122f0(void)

{
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long unaff_x22;
  long lVar4;
  String function;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x1e0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005123f4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar1 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar4 = *(long *)(puVar1 + -8);
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar2);
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = (void *)0xef29287461656274;
  function.str = (char *)0x72616548646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_100512628(uVar2,uVar3);
  (**(code **)(lVar4 + 8))(uVar2,puVar1);
  _swift_task_dealloc(uVar2);
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x1005123f4 | FUN_1005123f4 */

void FUN_1005123f4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  lVar4 = *(long *)(lVar3 + 0x30);
  if (lVar4 == 0) {
    _swift_release(*(undefined8 *)(lVar3 + 0x1e0));
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    pcVar1 = FUN_100512468;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar3 + 0x1f0) = lVar4;
    uVar2 = *(undefined8 *)(lVar3 + 0x1d8);
    pcVar1 = FUN_1005125f4;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100512468 | FUN_100512468 */

void FUN_100512468(void)

{
  undefined8 uVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x22;
  long lVar4;
  
  lVar4 = *(long *)(*(long *)(unaff_x22 + 0x1d8) + _TtC3MCP16NetworkTransport::logger);
  _swift_beginAccess(lVar4 + 0x20,unaff_x22 + 0x1c0,0,0);
  FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x170);
  uVar3 = *(ulong *)(unaff_x22 + 0x188);
  lVar2 = *(long *)(unaff_x22 + 400);
  FUN_100004640(unaff_x22 + 0x170,uVar3);
  (**(code **)(lVar2 + 0x70))(uVar3,lVar2);
  FUN_100004594(unaff_x22 + 0x170);
  if ((uVar3 & 0xff) == 0) {
    FUN_100076688(lVar4 + 0x20,unaff_x22 + 0x198);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x1b0);
    lVar2 = *(long *)(unaff_x22 + 0x1b8);
    FUN_100004640(unaff_x22 + 0x198,uVar1);
    *(undefined1 *)(unaff_x22 + 0xb0) = 0;
    *(undefined1 *)(unaff_x22 + 0x50) = 0;
    *(undefined8 *)(unaff_x22 + 0x58) = 0x6165627472616548;
    *(undefined8 *)(unaff_x22 + 0x60) = 0xee00746e65732074;
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    *(undefined8 *)(unaff_x22 + 0x68) = 0;
    *(undefined8 *)(unaff_x22 + 0x80) = 0;
    *(undefined8 *)(unaff_x22 + 0x78) = 0;
    *(undefined8 *)(unaff_x22 + 0x88) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0x90) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0x98) = 0x72616548646e6573;
    *(undefined8 *)(unaff_x22 + 0xa0) = 0xef29287461656274;
    *(undefined8 *)(unaff_x22 + 0xa8) = 0x1da;
    *(undefined8 *)(unaff_x22 + 0xb8) = 0x6165627472616548;
    *(undefined8 *)(unaff_x22 + 0xc0) = 0xee00746e65732074;
    *(undefined8 *)(unaff_x22 + 0xd0) = 0;
    *(undefined8 *)(unaff_x22 + 200) = 0;
    *(undefined8 *)(unaff_x22 + 0xe0) = 0;
    *(undefined8 *)(unaff_x22 + 0xd8) = 0;
    *(undefined8 *)(unaff_x22 + 0xe8) = 0xd00000000000001a;
    *(undefined8 *)(unaff_x22 + 0xf0) = 0x8000000100dacc70;
    *(undefined8 *)(unaff_x22 + 0xf8) = 0x72616548646e6573;
    *(undefined8 *)(unaff_x22 + 0x100) = 0xef29287461656274;
    *(undefined8 *)(unaff_x22 + 0x108) = 0x1da;
    FUN_1004eaa00(unaff_x22 + 0x50,unaff_x22 + 0x110);
    FUN_1004eaa3c((undefined1 *)(unaff_x22 + 0xb0));
    (**(code **)(lVar2 + 0x28))(unaff_x22 + 0x50,uVar1,lVar2);
    FUN_1004eaa3c(unaff_x22 + 0x50);
    FUN_100004594(unaff_x22 + 0x198);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005125f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1005125f4 | FUN_1005125f4 */

void FUN_1005125f4(void)

{
  long unaff_x22;
  
  _swift_release(*(undefined8 *)(unaff_x22 + 0x1e0));
                    /* WARNING: Could not recover jumptable at 0x000100512624. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100512628 | FUN_100512628 */

void FUN_100512628(undefined8 param_1,long param_2)

{
  ContentContext *pCVar1;
  SendCompletion SVar2;
  undefined *puVar3;
  undefined7 extraout_var;
  long lVar4;
  undefined8 *puVar5;
  undefined **ppuVar6;
  Date DVar7;
  ContentContext *pCVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  ulong uVar11;
  NWConnection *this;
  undefined8 *puVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  long alStack_f0 [2];
  ContentContext *local_e0;
  long local_d8;
  undefined8 local_d0;
  ContentContext *pCStack_c8;
  undefined **local_c0;
  undefined1 auStack_b8 [24];
  undefined *local_a0 [3];
  undefined8 local_88;
  undefined1 auStack_78 [24];
  
  puVar3 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar16 = *(long *)(puVar3 + -8);
  lVar14 = *(long *)(lVar16 + 0x40);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(lVar14 + 0xfU & 0xfffffffffffffff0);
  SVar2 = Network::NWConnection::SendCompletion::typeMetadataAccessor();
  lVar13 = *(long *)(CONCAT71(extraout_var,SVar2.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar12 = (undefined8 *)
            (((long)alStack_f0 - extraout_x8) - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  lVar4 = 0;
  FUN_10050e1b0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar4 + -8) + 0x40));
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  puVar5 = (undefined8 *)(param_2 + 0x10);
  _swift_weakLoadStrong();
  lVar4 = _TtC3MCP16NetworkTransport::connection;
  if (puVar5 == (undefined8 *)0x0) {
    FUN_1004db3ac();
    puVar10 = &DAT_100eda9c8;
    _swift_allocError(&DAT_100eda9c8,puVar5,0,0);
    *puVar5 = 0xd000000000000015;
    puVar5[1] = 0x8000000100dace80;
    puVar5[2] = 0;
    *(undefined1 *)(puVar5 + 3) = 4;
    local_a0[0] = puVar10;
    Swift::CheckedContinuation::resume(local_a0,puVar3);
  }
  else {
    local_d8 = (long)alStack_f0 - extraout_x8;
    _swift_beginAccess((long)puVar5 + _TtC3MCP16NetworkTransport::connection,auStack_b8,0,0);
    FUN_100076688((long)puVar5 + lVar4,local_a0);
    ppuVar6 = local_a0;
    FUN_100004640();
    local_c0 = ppuVar6;
    DVar7 = Foundation::Date::init();
    FUN_10050e324();
    pCVar8 = (ContentContext *)DVar7.unknown;
    FUN_1004bc9a8();
    local_d0 = local_88;
    pCStack_c8 = pCVar8;
    _swift_bridgeObjectRelease(DVar7.unknown);
    FUN_10051bca0((long)puVar12 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0));
    pCVar8 = Network::NWConnection::ContentContext::typeMetadataAccessor();
    local_e0 = Network::NWConnection::ContentContext::get_defaultMessage(pCVar8,pCVar8);
    puVar10 = &DAT_100edc418;
    _swift_allocObject(&DAT_100edc418,0x18,7);
    alStack_f0[1] = CONCAT71(extraout_var,SVar2.value);
    _swift_weakInit(puVar10 + 0x10,puVar5);
    lVar4 = local_d8;
    (**(code **)(lVar16 + 0x10))(local_d8,param_1,puVar3);
    uVar11 = (ulong)*(byte *)(lVar16 + 0x50);
    uVar17 = uVar11 + 0x10 & (uVar11 ^ 0xffffffffffffffff);
    uVar15 = lVar14 + uVar17 + 7 & 0xfffffffffffffff8;
    puVar9 = &DAT_100edc6e8;
    _swift_allocObject(&DAT_100edc6e8,uVar15 + 8,uVar11 | 7);
    (**(code **)(lVar16 + 0x20))(puVar9 + uVar17,lVar4,puVar3);
    *(undefined **)(puVar9 + uVar15) = puVar10;
    *puVar12 = FUN_10051c11c;
    puVar12[1] = puVar9;
    lVar4 = alStack_f0[1];
    (**(code **)(lVar13 + 0x68))
              (puVar12,*(undefined4 *)
                        PTR___enum_case_for_Network_NWConnection_SendCompletion_contentProcessed_Network_NWConnection_SendCompletion_Type___>___Network_NWError____>______>_Network_NWConnection_SendCompletion_100eaa028
               ,alStack_f0[1]);
    this = (NWConnection *)*local_c0;
    _swift_retain(puVar10);
    pCVar1 = pCStack_c8;
    pCVar8 = local_e0;
    Network::NWConnection::_send(this,pCStack_c8,SUB81(local_d0,0),(SendCompletion)(__int8)local_e0)
    ;
    _swift_release(pCVar8);
    FUN_10003bf2c(pCVar1,local_d0);
    _swift_release(puVar5);
    (**(code **)(lVar13 + 8))(puVar12,lVar4);
    _swift_release(puVar10);
    FUN_100004594(local_a0);
  }
  return;
}



/* Address: 0x100512944 | FUN_100512944 */

void FUN_100512944(undefined8 param_1,undefined8 param_2,long param_3)

{
  NWError NVar1;
  undefined *puVar2;
  undefined7 extraout_var;
  long lVar4;
  TaskPriority TVar5;
  undefined *puVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined1 auStack_80 [8];
  long local_78 [3];
  long lVar3;
  
  puVar2 = &DAT_100fcd1c8;
  FUN_1000f7830(&DAT_100fcd1c8,&DAT_100c53750);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_80 + -extraout_x8;
  puVar2 = &DAT_100fce2f0;
  FUN_1000f7830(&DAT_100fce2f0,&DAT_100c54780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar7 - extraout_x8_00;
  NVar1 = Network::NWError::typeMetadataAccessor();
  lVar3 = CONCAT71(extraout_var,NVar1.value);
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_1000f8cac(param_1,lVar9,&DAT_100fce2f0,&DAT_100c54780);
  lVar4 = lVar9;
  (**(code **)(lVar10 + 0x30))(lVar9,1,lVar3);
  if ((int)lVar4 == 1) {
    FUN_1000fb4c4(lVar9,&DAT_100fce2f0,&DAT_100c54780);
    TVar5 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar5.unknown + -8) + 0x38))(puVar7,1,1,TVar5.unknown);
    puVar2 = &DAT_100edc418;
    _swift_allocObject(&DAT_100edc418,0x18,7);
    _swift_beginAccess(param_3 + 0x10,local_78,0,0);
    param_3 = param_3 + 0x10;
    _swift_weakLoadStrong(param_3);
    _swift_weakInit(puVar2 + 0x10,param_3);
    _swift_release(param_3);
    puVar6 = &DAT_100edc710;
    _swift_allocObject(&DAT_100edc710,0x28,7);
    *(undefined8 *)(puVar6 + 0x10) = 0;
    *(undefined8 *)(puVar6 + 0x18) = 0;
    *(undefined **)(puVar6 + 0x20) = puVar2;
    FUN_1004e9f34(0,0,puVar7,&DAT_100c547a0,puVar6);
    _swift_release();
    FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
    Swift::CheckedContinuation::resume();
  }
  else {
    (**(code **)(lVar10 + 0x20))(lVar8,lVar9,lVar3);
    puVar2 = &DAT_100fce2d0;
    FUN_100003a00(&DAT_100fce2d0,PTR_typeMetadataAccessor_100eaa350,
                  PTR_Network__Network__NWError_>Swift__Error_100eaa360);
    lVar4 = lVar3;
    _swift_allocError(lVar3,puVar2,0,0);
    (**(code **)(lVar10 + 0x10))(puVar2,lVar8,lVar3);
    puVar2 = &DAT_100fcdf58;
    local_78[0] = lVar4;
    FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
    Swift::CheckedContinuation::resume(local_78,puVar2);
    (**(code **)(lVar10 + 8))(lVar8,lVar3);
  }
  return;
}



/* Address: 0x100512bec | FUN_100512bec */

void FUN_100512bec(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ulong uVar2;
  Date DVar3;
  long lVar4;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_1;
  *(undefined8 *)(unaff_x22 + 0x48) = param_4;
  puVar1 = &DAT_100fcb550;
  FUN_1000f7830(&DAT_100fcb550,&USHORT_100c50b50);
  uVar2 = *(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar2;
  DVar3 = Foundation::Date::typeMetadataAccessor();
  *(undefined **)(unaff_x22 + 0x58) = DVar3.unknown;
  lVar4 = *(long *)(DVar3.unknown + -8);
  *(long *)(unaff_x22 + 0x60) = lVar4;
  uVar2 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x68) = uVar2;
  _swift_task_switch(FUN_100512c78,0,0);
  return;
}



/* Address: 0x100512c78 | FUN_100512c78 */

void FUN_100512c78(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x48);
  _swift_beginAccess(lVar2 + 0x10,unaff_x22 + 0x10,0,0);
  lVar2 = lVar2 + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x70) = lVar2;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  if (lVar2 != 0) {
    Foundation::Date::init();
    _swift_task_switch(FUN_100512d14,lVar2,0);
    return;
  }
  uVar3 = *(undefined8 *)(unaff_x22 + 0x50);
  **(undefined1 **)(unaff_x22 + 0x40) = 1;
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar3);
                    /* WARNING: Could not recover jumptable at 0x000100512d10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100512d14 | FUN_100512d14 */

void FUN_100512d14(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long unaff_x22;
  
  lVar2 = *(long *)(unaff_x22 + 0x70);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
  lVar3 = *(long *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x50);
  (**(code **)(lVar3 + 0x20))(uVar4,*(undefined8 *)(unaff_x22 + 0x68),uVar1);
  (**(code **)(lVar3 + 0x38))(uVar4,0,1,uVar1);
  lVar3 = _TtC3MCP16NetworkTransport::lastHeartbeatTime;
  _swift_beginAccess(lVar2 + _TtC3MCP16NetworkTransport::lastHeartbeatTime,unaff_x22 + 0x28,0x21,0);
  FUN_10051c1e4(uVar4,lVar2 + lVar3);
  _swift_endAccess(unaff_x22 + 0x28);
  _swift_release(lVar2);
  _swift_task_switch(FUN_100512dbc,0,0);
  return;
}



/* Address: 0x100512dbc | FUN_100512dbc */

void FUN_100512dbc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x50);
  **(undefined1 **)(unaff_x22 + 0x40) = 0;
  _swift_task_dealloc(uVar1);
  _swift_task_dealloc(uVar2);
                    /* WARNING: Could not recover jumptable at 0x000100512dfc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100512e00 | FUN_100512e00 */

void FUN_100512e00(void)

{
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x188) = unaff_x20;
  _swift_task_switch(FUN_100512e18);
  return;
}



/* Address: 0x100512e18 | FUN_100512e18 */

void FUN_100512e18(void)

{
  Task TVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  long unaff_x22;
  
  lVar4 = *(long *)(unaff_x22 + 0x188);
  if (*(char *)(lVar4 + 0x70) == '\x01') {
    *(undefined2 *)(lVar4 + 0x70) = 0x100;
    puVar5 = *(undefined **)(lVar4 + 0x80);
    if (puVar5 == (undefined *)0x0) {
      uVar2 = 0;
    }
    else {
      TVar1.unknown = puVar5;
      _swift_retain();
      Swift::Task::cancel(TVar1);
      _swift_release(puVar5);
      uVar2 = *(undefined8 *)(lVar4 + 0x80);
    }
    lVar6 = *(long *)(unaff_x22 + 0x188);
    *(undefined8 *)(lVar4 + 0x80) = 0;
    _swift_release(uVar2);
    puVar3 = (undefined8 *)(lVar6 + _TtC3MCP16NetworkTransport::connection);
    _swift_beginAccess(puVar3,unaff_x22 + 0x158,0,0);
    FUN_100004640(puVar3,puVar3[3]);
    Network::NWConnection::cancel((NWConnection *)*puVar3);
    *(undefined8 *)(unaff_x22 + 0x70) = 0;
    FUN_1000f7830(&DAT_100fcb3a0,&DAT_100c501a0);
    Swift::AsyncThrowingStream::Continuation::_finish((undefined *)(unaff_x22 + 0x70));
    lVar6 = *(long *)(lVar6 + _TtC3MCP16NetworkTransport::logger);
    _swift_beginAccess(lVar6 + 0x20,unaff_x22 + 0x170,0,0);
    FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x70);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
    lVar4 = *(long *)(unaff_x22 + 0x90);
    FUN_100004640(unaff_x22 + 0x70,uVar2);
    (**(code **)(lVar4 + 0x70))(uVar2,lVar4);
    FUN_100004594(unaff_x22 + 0x70);
    if (((uint)uVar2 & 0xff) < 2) {
      FUN_100076688(lVar6 + 0x20,unaff_x22 + 0x130);
      uVar2 = *(undefined8 *)(unaff_x22 + 0x148);
      lVar4 = *(long *)(unaff_x22 + 0x150);
      FUN_100004640(unaff_x22 + 0x130,uVar2);
      *(undefined1 *)(unaff_x22 + 0x10) = 1;
      *(undefined8 *)(unaff_x22 + 0x18) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x20) = 0x8000000100daccb0;
      *(undefined8 *)(unaff_x22 + 0x30) = 0;
      *(undefined8 *)(unaff_x22 + 0x28) = 0;
      *(undefined8 *)(unaff_x22 + 0x40) = 0;
      *(undefined8 *)(unaff_x22 + 0x38) = 0;
      *(undefined8 *)(unaff_x22 + 0x48) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0x50) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0x58) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0x60) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 0x68) = 0x1ef;
      *(undefined1 *)(unaff_x22 + 0x70) = 1;
      *(undefined8 *)(unaff_x22 + 0x78) = 0xd00000000000001e;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x8000000100daccb0;
      *(undefined8 *)(unaff_x22 + 0x90) = 0;
      *(undefined8 *)(unaff_x22 + 0x88) = 0;
      *(undefined8 *)(unaff_x22 + 0xa0) = 0;
      *(undefined8 *)(unaff_x22 + 0x98) = 0;
      *(undefined8 *)(unaff_x22 + 0xa8) = 0xd00000000000001a;
      *(undefined8 *)(unaff_x22 + 0xb0) = 0x8000000100dacc70;
      *(undefined8 *)(unaff_x22 + 0xb8) = 0x656e6e6f63736964;
      *(undefined8 *)(unaff_x22 + 0xc0) = 0xec00000029287463;
      *(undefined8 *)(unaff_x22 + 200) = 0x1ef;
      FUN_1004eaa00(unaff_x22 + 0x10,unaff_x22 + 0xd0);
      FUN_1004eaa3c(unaff_x22 + 0x70);
      (**(code **)(lVar4 + 0x28))(unaff_x22 + 0x10,uVar2,lVar4);
      FUN_1004eaa3c(unaff_x22 + 0x10);
      FUN_100004594(unaff_x22 + 0x130);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000100513060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100513064 | FUN_100513064 */

void FUN_100513064(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_2;
  *(undefined8 *)(unaff_x22 + 0xc0) = unaff_x20;
  *(undefined8 *)(unaff_x22 + 0xb0) = param_1;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1005130cc);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005130cc | FUN_1005130cc */

void FUN_1005130cc(undefined8 *param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  UnownedSerialExecutor UVar9;
  uint uVar10;
  long lVar11;
  long lVar12;
  void *pvVar13;
  long unaff_x22;
  Range<__int64> with;
  String isolation;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar12 = *(long *)(unaff_x22 + 0xc0);
  if (*(char *)(lVar12 + 0x70) == '\x01') {
    lVar7 = *(long *)(unaff_x22 + 0xb0);
    uVar1 = *(ulong *)(unaff_x22 + 0xb8);
    *(long *)(unaff_x22 + 0xa0) = lVar7;
    *(ulong *)(unaff_x22 + 0xa8) = uVar1;
    uVar2 = (uint)(uVar1 >> 0x20);
    uVar10 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      with.unknown = (undefined *)(uVar1 >> 0x30 & 0xff);
      if (uVar10 != 0) {
        with.unknown = (undefined *)(lVar7 >> 0x20);
      }
    }
    else if (uVar10 == 2) {
      with.unknown = *(undefined **)(lVar7 + 0x18);
    }
    else {
      with.unknown = (undefined *)0x0;
    }
    puVar4 = &DAT_100fcd4e0;
    FUN_1000f7830(&DAT_100fcd4e0,&DAT_100c53918);
    *(undefined **)(unaff_x22 + 0x90) = puVar4;
    puVar5 = puVar4;
    FUN_1004f96c0();
    *(undefined **)(unaff_x22 + 0x98) = puVar5;
    *(undefined1 *)(unaff_x22 + 0x78) = 10;
    puVar6 = (undefined1 *)(unaff_x22 + 0x78);
    FUN_100004640(puVar6,puVar4);
    *(undefined1 *)(unaff_x22 + 0xe8) = *puVar6;
    FUN_1001037b4(lVar7,uVar1);
    Foundation::Data::_Representation::_replaceSubrange
              (with,(__int64)with.unknown,(_Representation)((char)unaff_x22 + -0x18),1);
    lVar7 = unaff_x22 + 0x78;
    FUN_100004594();
    FUN_10051b5ec();
    _swift_allocObject();
    *(long *)(unaff_x22 + 200) = lVar7;
    *(undefined1 *)(lVar7 + 0x10) = 0;
    puVar4 = &DAT_100fcdf50;
    FUN_100003a00(&DAT_100fcdf50,FUN_10051b60c,&TargetProtocolConformanceDescriptor_100c54548);
    puVar5 = &DAT_100edc418;
    _swift_allocObject(&DAT_100edc418,0x18,7);
    *(undefined **)(unaff_x22 + 0xd0) = puVar5;
    _swift_weakInit(puVar5 + 0x10,lVar12);
    *(undefined **)(unaff_x22 + 0x60) = puVar5;
    *(long *)(unaff_x22 + 0x68) = unaff_x22 + 0xa0;
    *(long *)(unaff_x22 + 0x70) = lVar7;
    bVar3 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
    pvVar13 = *(void **)(unaff_x22 + 0xc0);
    if ((bVar3 & 1) == 0) {
      _swift_getObjectType(pvVar13);
      UVar9 = Swift::Actor::get_unownedExecutor();
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
        _swift_task_switch(FUN_100513470,UVar9.unknown,puVar4);
        return;
      }
    }
    else {
      plVar8 = (long *)(ulong)*(uint *)(PTR__withCheckedThrowingContinuation_100eaefc8 + 4);
      _swift_task_alloc();
      *(long **)(unaff_x22 + 0xd8) = plVar8;
      *plVar8 = unaff_x22;
      plVar8[1] = (long)FUN_1005133b8;
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
        isolation.bridgeObject = pvVar13;
        isolation.str = (char *)plVar8;
        Swift::_withCheckedThrowingContinuation(isolation);
        return;
      }
    }
  }
  else {
    FUN_1004db3ac();
    _swift_allocError(&DAT_100eda9c8,param_1,0,0);
    *param_1 = 0xd000000000000017;
    param_1[1] = 0x8000000100dab6a0;
    param_1[2] = 0;
    *(undefined1 *)(param_1 + 3) = 4;
    _swift_willThrow();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
                    /* WARNING: Could not recover jumptable at 0x0001005131bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(unaff_x22 + 8))();
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005133b8 | FUN_1005133b8 */

void FUN_1005133b8(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar4 + 0xd8));
  if (unaff_x20 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    _swift_release(*(undefined8 *)(lVar4 + 0xd0));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_10051346c;
    pcVar1 = FUN_100513660;
  }
  else {
    *(long *)(lVar4 + 0xe0) = unaff_x20;
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_10051346c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1005136c8;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}



/* Address: 0x100513470 | FUN_100513470 */

void FUN_100513470(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long unaff_x22;
  long lVar6;
  String function;
  
  lVar5 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(unaff_x22 + 200);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xd0);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1005135a4;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,1);
  puVar3 = &DAT_100fcdf58;
  FUN_1000f7830(&DAT_100fcdf58,&DAT_100c54350);
  lVar6 = *(long *)(puVar3 + -8);
  uVar4 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc(uVar4);
  FUN_1000f7830(&DAT_100fcb578,&DAT_100c50390);
  function.bridgeObject = &DAT_e800000000000000;
  function.str = (char *)0x293a5f28646e6573;
  Swift::CheckedContinuation::init(continuation,function);
  FUN_100513738(uVar4,uVar2,unaff_x22 + 0xa0,uVar1);
  (**(code **)(lVar6 + 8))(uVar4,puVar3);
  _swift_task_dealloc(uVar4);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar5) {
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1005135a4 | FUN_1005135a4 */

void FUN_1005135a4(void)

{
  code *pcVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *unaff_x22;
  
  lVar3 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar4 = *unaff_x22;
  lVar5 = *(long *)(lVar4 + 0x30);
  if (lVar5 == 0) {
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    _swift_release(*(undefined8 *)(lVar4 + 0xd0));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) goto LAB_10051365c;
    pcVar1 = FUN_100513660;
  }
  else {
    _swift_willThrow();
    *(long *)(lVar4 + 0xe0) = lVar5;
    uVar2 = *(undefined8 *)(lVar4 + 0xc0);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar3) {
LAB_10051365c:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1005136c8;
  }
  _swift_task_switch(pcVar1,uVar2,0);
  return;
}


