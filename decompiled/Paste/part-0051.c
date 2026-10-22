/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10009abdc | FUN_10009abdc */

void FUN_10009abdc(void)

{
  FUN_1000973d8();
  return;
}



/* Address: 0x10009abe4 | FUN_10009abe4 */

void FUN_10009abe4(void)

{
  FUN_1000978a8();
  return;
}



/* Address: 0x10009abec | FUN_10009abec */

void FUN_10009abec(void)

{
  FUN_100097b60();
  return;
}



/* Address: 0x10009ac08 | FUN_10009ac08 */

void FUN_10009ac08(void)

{
  FUN_100097b60();
  return;
}



/* Address: 0x10009ac24 | FUN_10009ac24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10009ac24(ID param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100095a7c(*(undefined8 *)(unaff_x20 + 0x10));
  objc_stub::scrollRectToVisible_(param_1,uVar1,uVar2,uVar3,uVar4);
  return 0;
}



/* Address: 0x10009ac7c | FUN_10009ac7c */

void FUN_10009ac7c(void)

{
  long unaff_x20;
  
  FUN_100097828(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x10009ac88 | thunk_FUN_10009ac24 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 thunk_FUN_10009ac24(ID param_1)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x20);
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
  FUN_100095a7c(*(undefined8 *)(unaff_x20 + 0x10));
  objc_stub::scrollRectToVisible_(param_1,uVar1,uVar2,uVar3,uVar4);
  return 0;
}



/* Address: 0x10009ac8c | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  thunk_FUN_10002a438();
  return;
}



/* Address: 0x10009ac90 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  thunk_FUN_10002a438();
  return;
}



/* Address: 0x10009ac94 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  thunk_FUN_10002a438();
  return;
}



/* Address: 0x10009ac98 | thunk_FUN_10002a438 */

void thunk_FUN_10002a438(void)

{
  thunk_FUN_10002a438();
  return;
}



/* Address: 0x10009ac9c | FUN_10009ac9c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 ***
FUN_10009ac9c(CurrentValueSubject *param_1,undefined8 param_2,undefined8 param_3,void *param_4)

{
  undefined8 uVar1;
  undefined *puVar2;
  long lVar3;
  CurrentValueSubject *pCVar4;
  ID IVar5;
  undefined8 **ppuVar6;
  undefined8 ***pppuVar7;
  undefined8 ***pppuVar8;
  _StringGuts _Var9;
  undefined1 *puVar10;
  char *pcVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  char local_b8 [24];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 **local_80 [3];
  undefined *local_68;
  long lStack_60;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  pCVar4 = param_1;
  FUN_10009b080();
  local_80[0] = (undefined8 **)CONCAT71(local_80[0]._1_7_,(char)param_1);
  Combine::CurrentValueSubject::send(pCVar4,local_80);
  _swift_release(pCVar4);
  IVar5 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
  if (((ulong)param_1 & 1) == 0) {
    local_80[0] = (undefined8 ***)0x0;
    pppuVar8 = local_80;
    IVar5 = SMAppService::unregisterAndReturnError_(IVar5);
    if ((int)IVar5 == 0) {
      pcVar11 = (char *)0x656c6261736964;
      puVar10 = &DAT_e700000000000000;
      goto LAB_10009ae50;
    }
  }
  else {
    IVar5 = SMAppService::status(IVar5);
    if (IVar5 == 1) {
      IVar5 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
      local_80[0] = (undefined8 **)0x0;
      IVar5 = SMAppService::unregisterAndReturnError_(IVar5,local_80);
      if ((int)IVar5 == 0) {
        ppuVar6 = local_80[0];
        Foundation::__convertNSErrorToError();
        _swift_willThrow(0);
        _swift_errorRelease(ppuVar6);
      }
    }
    IVar5 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
    local_80[0] = (undefined8 ***)0x0;
    pppuVar8 = local_80;
    IVar5 = SMAppService::registerAndReturnError_(IVar5);
    if ((int)IVar5 == 0) {
      pcVar11 = (char *)0x656c62616e65;
      puVar10 = &DAT_e600000000000000;
LAB_10009ae50:
      pppuVar7 = (undefined8 ***)local_80[0];
      Foundation::__convertNSErrorToError();
      _swift_willThrow(0);
      FUN_1000d468c(local_80);
      lVar3 = lStack_60;
      puVar2 = local_68;
      _Var9.unknown = local_68;
      FUN_100004640(local_80);
      local_98 = 0;
      local_90 = 0xe000000000000000;
      Swift::_StringGuts::grow(0x1e,_Var9);
      _swift_bridgeObjectRelease(local_90);
      local_98 = 0x742064656c696146;
      local_90 = 0xea0000000000206f;
      SVar13.bridgeObject = puVar10;
      SVar13.str = pcVar11;
      SVar14.bridgeObject = param_4;
      SVar14.str = (char *)pppuVar8;
      Swift::String::append(SVar13,SVar14);
      _swift_bridgeObjectRelease(puVar10);
      SVar12.bridgeObject = (void *)0x8000000100d8f280;
      SVar12.str = (char *)0xd000000000000010;
      SVar15.bridgeObject = param_4;
      SVar15.str = (char *)pppuVar8;
      Swift::String::append(SVar12,SVar15);
      pcVar11 = local_b8;
      _swift_getErrorValue(pppuVar7,auStack_a0);
      SVar13 = (extension_Foundation)::Swift::Error::get_localizedDescription();
      SVar16.bridgeObject = param_4;
      SVar16.str = pcVar11;
      Swift::String::append(SVar13,SVar16);
      _swift_bridgeObjectRelease(SVar13.bridgeObject);
      uVar1 = local_90;
      FUN_1000d4e0c(local_98,local_90,puVar2,lVar3);
      _swift_bridgeObjectRelease(uVar1);
      FUN_100004594(local_80);
      FUN_1000da768(local_80);
      FUN_100004640(local_80,local_68);
      (**(code **)(lStack_60 + 0x20))(pppuVar7,local_68,lStack_60);
      _swift_errorRelease(pppuVar7);
      pppuVar8 = local_80;
      FUN_100004594(pppuVar8);
      if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
        return pppuVar8;
      }
      goto LAB_10009afd8;
    }
  }
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return (undefined8 ***)local_80[0];
  }
LAB_10009afd8:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x10009afdc | FUN_10009afdc */

undefined * FUN_10009afdc(void)

{
  undefined *puVar1;
  AnyPublisher<(extension_in_Combine):Combine_Publisher_eraseToAnyPublisher()__>_Combine_AnyPublisher<A_Output,A_Failure>__extension_in_Combine__Combine_Publisher_eraseToAnyPublisher____>_Combine_AnyPublisher<A_Output,A_Failure>>
  AVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  puVar1 = *(undefined **)(unaff_x20 + 0x10);
  AVar2.unknown = puVar1;
  if (puVar1 == (undefined *)0x0) {
    FUN_10009b080();
    FUN_1000037f0(&DAT_100faae30,&DAT_100c286c8);
    FUN_10009b1a0();
    AVar2 = (extension_Combine)::Combine::Publisher::_eraseToAnyPublisher();
    _swift_release(puVar1);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    *(undefined **)(unaff_x20 + 0x10) = AVar2.unknown;
    _swift_retain(AVar2.unknown);
    _swift_release(uVar3);
    puVar1 = (undefined *)0x0;
  }
  _swift_retain(puVar1);
  return AVar2.unknown;
}



/* Address: 0x10009b080 | FUN_10009b080 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1 * FUN_10009b080(void)

{
  undefined1 *puVar1;
  ID IVar2;
  CurrentValueSubject *pCVar3;
  undefined1 *puVar4;
  long unaff_x20;
  undefined8 uVar5;
  undefined1 local_31;
  
  puVar1 = *(undefined1 **)(unaff_x20 + 0x28);
  puVar4 = puVar1;
  if (puVar1 == (undefined1 *)0x0) {
    IVar2 = SMAppService::mainAppService((ID)&_OBJC_CLASS___SMAppService);
    IVar2 = SMAppService::status(IVar2);
    local_31 = IVar2 == 1;
    pCVar3 = (CurrentValueSubject *)&DAT_100faae30;
    FUN_1000037f0(&DAT_100faae30,&DAT_100c286c8);
    _swift_allocObject();
    puVar4 = &local_31;
    Combine::CurrentValueSubject::_init(pCVar3);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
    *(undefined1 **)(unaff_x20 + 0x28) = puVar4;
    _swift_retain();
    _swift_release(uVar5);
    puVar1 = (undefined1 *)0x0;
  }
  _swift_retain(puVar1);
  return puVar4;
}



/* Address: 0x10009b144 | FUN_10009b144 */

void FUN_10009b144(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10009b180 | FUN_10009b180 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_10009b180(void)

{
  return ZEXT816(0x100faadb8);
}



/* Address: 0x10009b1a0 | FUN_10009b1a0 */

void FUN_10009b1a0(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100faae38 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faae30;
  FUN_100005c24(&DAT_100faae30,&DAT_100c286c8);
  puVar2 = 
  PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
  ;
  _swift_getWitnessTable
            (PTR__Combine__protocol_conformance_descriptor_for_Combine_CurrentValueSubject<A,B>___Combine_Publisher_in_Combine_>Combine__Publisher_100ea9830
             ,puVar1);
  DAT_100faae38 = puVar2;
  return;
}



/* Address: 0x10009b1f0 | FUN_10009b1f0 */

void FUN_10009b1f0(void)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined1 *puStack_98;
  undefined8 local_90;
  long lStack_88;
  
  puVar2 = (undefined8 *)&DAT_100c286d0;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100fa8360,&DAT_100c231b0);
  _swift_initStackObject();
  FUN_1000da6e0();
  puVar3 = puVar2;
  FUN_10019b654();
  plVar4 = (long *)*puVar3;
  local_a8[0] = 1;
  local_a0 = 0x65726f7453707041;
  puStack_98 = &DAT_e800000000000000;
  local_90 = 0;
  pcVar5 = *(code **)(*plVar4 + 0x88);
  _swift_retain(plVar4);
  (*pcVar5)(local_a8);
  _swift_release(plVar4);
  FUN_1000da768(local_a8);
  uVar1 = local_90;
  FUN_100004640(local_a8,local_90);
  (**(code **)(lStack_88 + 0x10))(uVar1,lStack_88);
  _swift_release(puVar2);
  FUN_100004594(local_a8);
  return;
}



/* Address: 0x10009b2e0 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x10009b2e4 | FUN_10009b2e4 */

undefined1  [16] FUN_10009b2e4(void)

{
  return ZEXT816(0x100eb3a20);
}



/* Address: 0x10009b2f4 | FUN_10009b2f4 */

void FUN_10009b2f4(undefined8 param_1)

{
  _swift_getOpaqueTypeConformance2(param_1,&DAT_100ca1f08,1);
  return;
}



/* Address: 0x10009b304 | FUN_10009b304 */

void FUN_10009b304(long param_1,Color param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  MainActor *pMVar5;
  MainActor *pMVar6;
  UnownedSerialExecutor UVar7;
  char *pcVar8;
  HorizontalAlignment HVar9;
  VerticalAlignment VVar10;
  Color CVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *apuStack_3d0 [2];
  long local_3c0;
  undefined *local_3b8;
  MainActor *local_3b0;
  long local_3a8;
  long local_3a0;
  undefined1 auStack_398 [120];
  undefined7 uStack_320;
  undefined1 local_319;
  undefined7 uStack_318;
  undefined1 uStack_311;
  undefined7 uStack_310;
  undefined1 local_309;
  undefined7 uStack_308;
  undefined1 uStack_301;
  undefined7 uStack_300;
  undefined1 local_2f9;
  undefined7 uStack_2f8;
  undefined1 uStack_2f1;
  undefined7 uStack_2f0;
  undefined1 local_2e9;
  undefined7 uStack_2e8;
  undefined1 uStack_2e1;
  undefined7 uStack_2e0;
  undefined1 local_2d9;
  undefined7 uStack_2d8;
  undefined1 uStack_2d1;
  undefined7 uStack_2d0;
  undefined1 local_2c9;
  undefined7 uStack_2c8;
  undefined1 uStack_2c1;
  undefined7 uStack_2c0;
  undefined1 uStack_2b9;
  undefined8 uStack_2b8;
  undefined8 local_2b0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 uStack_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 uStack_268;
  undefined8 local_260;
  undefined8 uStack_258;
  undefined8 uStack_250;
  undefined8 uStack_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 uStack_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 uStack_1f0;
  undefined8 uStack_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined1 local_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 local_19f;
  undefined1 uStack_198;
  undefined7 uStack_197;
  undefined1 uStack_190;
  undefined7 local_18f;
  undefined1 uStack_188;
  undefined7 uStack_187;
  undefined1 uStack_180;
  undefined7 local_17f;
  undefined1 uStack_178;
  undefined7 uStack_177;
  undefined1 uStack_170;
  undefined7 uStack_16f;
  undefined *local_168;
  undefined8 local_160;
  undefined1 local_158;
  undefined8 local_157;
  undefined8 uStack_14f;
  undefined8 local_147;
  undefined8 uStack_13f;
  undefined8 local_137;
  undefined8 uStack_12f;
  undefined8 local_127;
  undefined8 uStack_11f;
  undefined8 local_117;
  undefined8 uStack_10f;
  undefined8 local_107;
  undefined7 uStack_ff;
  undefined1 uStack_f8;
  undefined7 uStack_f7;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  puVar4 = &DAT_100faae58;
  local_3a8 = param_1;
  FUN_1000037f0(&DAT_100faae58,&DAT_100c28778);
  local_3b8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = (long)apuStack_3d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_3a0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12);
  puVar4 = &DAT_100faae60;
  FUN_1000037f0(&DAT_100faae60,&DAT_100c28780);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar4 + -8) + 0x40));
  lVar12 = (long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_3c0 = lVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)(lVar12 - extraout_x12_00);
  pMVar5 = Swift::MainActor::typeMetadataAccessor();
  pMVar6 = Swift::MainActor::get_shared(pMVar5,pMVar5);
  pMVar5 = pMVar6;
  FUN_1000081a8();
  local_3b0 = pMVar6;
  UVar7 = Swift::Actor::get_unownedExecutor();
  pcVar8 = (char *)UVar7;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar8 & 1) == 0) {
    pcVar8 = "Paste/AboutView.swift";
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,9,UVar7.unknown,pMVar5);
  }
  HVar9 = SwiftUI::HorizontalAlignment::get_center((HorizontalAlignment)pcVar8);
  *puVar14 = HVar9.unknown;
  puVar14[1] = 0x4018000000000000;
  *(undefined1 *)(puVar14 + 2) = 0;
  puVar4 = &DAT_100faae68;
  FUN_1000037f0(&DAT_100faae68,&DAT_100c28788);
  VVar10.unknown = param_2.unknown;
  FUN_10009b804((long)puVar14 + (long)*(int *)(puVar4 + 0x2c),param_2.unknown,param_3);
  VVar10 = SwiftUI::VerticalAlignment::get_center(VVar10);
  FUN_10009c03c(&local_f0,param_2.unknown,param_3);
  uStack_278 = uStack_c8;
  local_280 = local_d0;
  uStack_268 = uStack_b8;
  uStack_270 = uStack_c0;
  uStack_258 = uStack_a8;
  local_260 = local_b0;
  uStack_248 = uStack_98;
  uStack_250 = uStack_a0;
  uStack_298 = uStack_e8;
  local_2a0 = local_f0;
  uStack_288 = uStack_d8;
  uStack_290 = uStack_e0;
  uStack_218 = uStack_c8;
  local_220 = local_d0;
  uStack_208 = uStack_b8;
  uStack_210 = uStack_c0;
  uStack_1f8 = uStack_a8;
  local_200 = local_b0;
  uStack_1e8 = uStack_98;
  uStack_1f0 = uStack_a0;
  uStack_238 = uStack_e8;
  local_240 = local_f0;
  uStack_228 = uStack_d8;
  uStack_230 = uStack_e0;
  apuStack_3d0[1] = puVar14;
  FUN_100011090(&local_2a0,&local_168,&DAT_100faae70,&DAT_100c28790);
  FUN_100005808(&local_240,&DAT_100faae70,&DAT_100c28790);
  uStack_311 = (undefined1)uStack_298;
  uStack_310 = (undefined7)((ulong)uStack_298 >> 8);
  local_319 = (undefined1)local_2a0;
  uStack_318 = (undefined7)((ulong)local_2a0 >> 8);
  uStack_301 = (undefined1)uStack_288;
  uStack_300 = (undefined7)((ulong)uStack_288 >> 8);
  local_309 = (undefined1)uStack_290;
  uStack_308 = (undefined7)((ulong)uStack_290 >> 8);
  uStack_2f1 = (undefined1)uStack_278;
  uStack_2f0 = (undefined7)((ulong)uStack_278 >> 8);
  local_2f9 = (undefined1)local_280;
  uStack_2f8 = (undefined7)((ulong)local_280 >> 8);
  uStack_2c1 = (undefined1)uStack_248;
  uStack_2c0 = (undefined7)((ulong)uStack_248 >> 8);
  local_2c9 = (undefined1)uStack_250;
  uStack_2c8 = (undefined7)((ulong)uStack_250 >> 8);
  uStack_2d1 = (undefined1)uStack_258;
  uStack_2d0 = (undefined7)((ulong)uStack_258 >> 8);
  local_2d9 = (undefined1)local_260;
  uStack_2d8 = (undefined7)((ulong)local_260 >> 8);
  uStack_2e1 = (undefined1)uStack_268;
  uStack_2e0 = (undefined7)((ulong)uStack_268 >> 8);
  local_2e9 = (undefined1)uStack_270;
  uStack_2e8 = (undefined7)((ulong)uStack_270 >> 8);
  uStack_13f = CONCAT17(uStack_301,uStack_308);
  local_147 = CONCAT17(local_309,uStack_310);
  uStack_12f = CONCAT17(uStack_2f1,uStack_2f8);
  local_137 = CONCAT17(local_2f9,uStack_300);
  uStack_1a7 = uStack_2f8;
  uStack_1a0 = uStack_2f1;
  local_1af = uStack_300;
  uStack_1a8 = local_2f9;
  uStack_1b7 = uStack_308;
  uStack_1b0 = uStack_301;
  local_1bf = uStack_310;
  uStack_1b8 = local_309;
  uStack_14f = CONCAT17(uStack_311,uStack_318);
  local_157 = CONCAT17(local_319,uStack_320);
  uStack_1c7 = uStack_318;
  uStack_1c0 = uStack_311;
  local_1cf = uStack_320;
  uStack_1c8 = local_319;
  uStack_10f = CONCAT17(uStack_2d1,uStack_2d8);
  local_117 = CONCAT17(local_2d9,uStack_2e0);
  uStack_177 = uStack_2c8;
  uStack_170 = uStack_2c1;
  local_17f = uStack_2d0;
  uStack_178 = local_2c9;
  uStack_11f = CONCAT17(uStack_2e1,uStack_2e8);
  local_127 = CONCAT17(local_2e9,uStack_2f0);
  uStack_187 = uStack_2d8;
  uStack_180 = uStack_2d1;
  local_18f = uStack_2e0;
  uStack_188 = local_2d9;
  uStack_197 = uStack_2e8;
  uStack_190 = uStack_2e1;
  local_19f = uStack_2f0;
  uStack_198 = local_2e9;
  uStack_1d8 = 0;
  local_1d0 = 1;
  local_160 = 0;
  local_158 = 1;
  local_107 = CONCAT17(local_2c9,uStack_2d0);
  uStack_ff = uStack_2c8;
  uStack_f8 = uStack_2c1;
  local_1e0 = VVar10.unknown;
  uStack_16f = uStack_2c0;
  local_168 = VVar10.unknown;
  uStack_f7 = uStack_2c0;
  FUN_100011090(&local_1e0,&local_f0,&DAT_100faae78,&DAT_100c28798);
  HVar9.unknown = (undefined *)&local_168;
  FUN_100005808(HVar9.unknown,&DAT_100faae78,&DAT_100c28798);
  HVar9 = SwiftUI::HorizontalAlignment::get_center(HVar9);
  *puVar13 = HVar9.unknown;
  puVar13[1] = 0x4020000000000000;
  *(undefined1 *)(puVar13 + 2) = 0;
  puVar4 = &DAT_100faae80;
  FUN_1000037f0(&DAT_100faae80,&DAT_100c287a0);
  FUN_10009c1dc((long)puVar13 + (long)*(int *)(puVar4 + 0x2c),param_2.unknown,param_3);
  CVar11 = SwiftUI::Color::get_secondary(param_2);
  puVar4 = &DAT_100c287a8;
  _swift_getKeyPath();
  iVar1 = *(int *)(local_3b8 + 0x24);
  *(undefined8 *)((long)puVar13 + (long)iVar1) = puVar4;
  ((undefined8 *)((long)puVar13 + (long)iVar1))[1] = CVar11.unknown;
  lVar12 = local_3c0;
  FUN_100011090(puVar14,local_3c0,&DAT_100faae60,&DAT_100c28780);
  lVar3 = local_3a0;
  uStack_2b8 = CONCAT71(uStack_177,uStack_178);
  uStack_2c8 = (undefined7)CONCAT71(uStack_187,uStack_188);
  uStack_2c1 = (undefined1)((uint7)uStack_187 >> 0x30);
  uStack_2d0 = (undefined7)CONCAT71(local_18f,uStack_190);
  local_2c9 = (undefined1)((uint7)local_18f >> 0x30);
  uStack_2c0 = (undefined7)CONCAT71(local_17f,uStack_180);
  uStack_2b9 = (undefined1)((uint7)local_17f >> 0x30);
  uStack_318 = (undefined7)uStack_1d8;
  uStack_311 = (undefined1)((ulong)uStack_1d8 >> 0x38);
  uStack_320 = SUB87(local_1e0,0);
  local_319 = (undefined1)((ulong)local_1e0 >> 0x38);
  uStack_308 = (undefined7)CONCAT71(uStack_1c7,uStack_1c8);
  uStack_301 = (undefined1)((uint7)uStack_1c7 >> 0x30);
  uStack_310 = (undefined7)CONCAT71(local_1cf,local_1d0);
  local_309 = (undefined1)((uint7)local_1cf >> 0x30);
  uStack_2f8 = (undefined7)CONCAT71(uStack_1b7,uStack_1b8);
  uStack_2f1 = (undefined1)((uint7)uStack_1b7 >> 0x30);
  uStack_300 = (undefined7)CONCAT71(local_1bf,uStack_1c0);
  local_2f9 = (undefined1)((uint7)local_1bf >> 0x30);
  local_2b0 = CONCAT71(uStack_16f,uStack_170);
  uStack_2e8 = (undefined7)CONCAT71(uStack_1a7,uStack_1a8);
  uStack_2e1 = (undefined1)((uint7)uStack_1a7 >> 0x30);
  uStack_2f0 = (undefined7)CONCAT71(local_1af,uStack_1b0);
  local_2e9 = (undefined1)((uint7)local_1af >> 0x30);
  uStack_2d8 = (undefined7)CONCAT71(uStack_197,uStack_198);
  uStack_2d1 = (undefined1)((uint7)uStack_197 >> 0x30);
  uStack_2e0 = (undefined7)CONCAT71(local_19f,uStack_1a0);
  local_2d9 = (undefined1)((uint7)local_19f >> 0x30);
  FUN_100011090(puVar13,local_3a0,&DAT_100faae58,&DAT_100c28778);
  lVar2 = local_3a8;
  FUN_100011090(lVar12,local_3a8,&DAT_100faae60,&DAT_100c28780);
  puVar4 = &DAT_100faae88;
  FUN_1000037f0(&DAT_100faae88,&DAT_100c287d8);
  puVar14 = (undefined8 *)(lVar2 + *(int *)(puVar4 + 0x30));
  uStack_98 = CONCAT17(uStack_2c1,uStack_2c8);
  uStack_a0 = CONCAT17(local_2c9,uStack_2d0);
  local_90 = CONCAT17(uStack_2b9,uStack_2c0);
  uStack_b8 = CONCAT17(uStack_2e1,uStack_2e8);
  uStack_c0 = CONCAT17(local_2e9,uStack_2f0);
  uStack_a8 = CONCAT17(uStack_2d1,uStack_2d8);
  local_b0 = CONCAT17(local_2d9,uStack_2e0);
  uStack_88 = uStack_2b8;
  local_80 = local_2b0;
  uStack_e8 = CONCAT17(uStack_311,uStack_318);
  local_f0 = CONCAT17(local_319,uStack_320);
  uStack_d8 = CONCAT17(uStack_301,uStack_308);
  uStack_e0 = CONCAT17(local_309,uStack_310);
  uStack_c8 = CONCAT17(uStack_2f1,uStack_2f8);
  local_d0 = CONCAT17(local_2f9,uStack_300);
  puVar14[5] = uStack_c8;
  puVar14[4] = local_d0;
  puVar14[7] = uStack_b8;
  puVar14[6] = uStack_c0;
  puVar14[1] = uStack_e8;
  *puVar14 = local_f0;
  puVar14[3] = uStack_d8;
  puVar14[2] = uStack_e0;
  puVar14[0xe] = local_2b0;
  puVar14[0xb] = uStack_98;
  puVar14[10] = uStack_a0;
  puVar14[0xd] = uStack_2b8;
  puVar14[0xc] = local_90;
  puVar14[9] = uStack_a8;
  puVar14[8] = local_b0;
  FUN_100011090(lVar3,lVar2 + *(int *)(puVar4 + 0x40),&DAT_100faae58,&DAT_100c28778);
  iVar1 = *(int *)(puVar4 + 0x50);
  *(undefined8 *)(lVar2 + iVar1) = 0;
  *(undefined1 *)((undefined8 *)(lVar2 + iVar1) + 1) = 1;
  FUN_100011090(&local_f0,auStack_398,&DAT_100faae78,&DAT_100c28798);
  FUN_100005808(puVar13,&DAT_100faae58,&DAT_100c28778);
  FUN_100005808(apuStack_3d0[1],&DAT_100faae60,&DAT_100c28780);
  FUN_100005808(lVar3,&DAT_100faae58,&DAT_100c28778);
  FUN_100005808(&uStack_320,&DAT_100faae78,&DAT_100c28798);
  FUN_100005808(lVar12,&DAT_100faae60,&DAT_100c28780);
  _swift_release(local_3b0);
  return;
}



/* Address: 0x10009b804 | FUN_10009b804 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_10009b804(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  ResizingMode RVar2;
  undefined7 extraout_var;
  MainActor *pMVar4;
  MainActor *pMVar5;
  UnownedSerialExecutor UVar6;
  UnownedSerialExecutor UVar7;
  NSImage *nsImage;
  Image IVar8;
  Image IVar9;
  _FrameLayout _Var10;
  HorizontalAlignment HVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x12;
  undefined8 *puVar13;
  long lVar14;
  Alignment capInsets;
  undefined8 local_b0;
  uint local_a4;
  MainActor *local_a0 [3];
  undefined1 local_88;
  undefined8 local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined *puVar3;
  
  puVar3 = &DAT_100faaef0;
  local_a0[1] = (MainActor *)param_3;
  FUN_1000037f0(&DAT_100faaef0,&DAT_100c288c0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar3 + -8) + 0x40));
  lVar12 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar13 = (undefined8 *)(lVar12 - extraout_x12);
  RVar2 = SwiftUI::Image::ResizingMode::typeMetadataAccessor();
  puVar3 = (undefined *)CONCAT71(extraout_var,RVar2.value);
  lVar14 = *(long *)(puVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  capInsets.unknown = (undefined *)((long)puVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  pMVar4 = Swift::MainActor::typeMetadataAccessor();
  pMVar5 = Swift::MainActor::get_shared(pMVar4,pMVar4);
  pMVar4 = pMVar5;
  FUN_1000081a8();
  local_a0[0] = pMVar5;
  UVar6 = Swift::Actor::get_unownedExecutor();
  UVar7 = UVar6;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar7.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,10,UVar6.unknown,pMVar4);
  }
  nsImage = (NSImage *)
            NSImage::imageNamed_
                      ((ID)&_OBJC_CLASS___NSImage,
                       *(undefined8 *)PTR__NSImageNameApplicationIcon_100ea90d8);
  if (nsImage != (NSImage *)0x0) {
    IVar8 = SwiftUI::Image::init(nsImage);
    IVar9.unknown = puVar3;
    (**(code **)(lVar14 + 0x68))
              (capInsets.unknown,
               *(undefined4 *)
                PTR___enum_case_for_SwiftUI_Image_ResizingMode_stretch_SwiftUI_Image_ResizingMode_Type___>_SwiftUI_Image_ResizingMode_100eab750
              );
    IVar9 = SwiftUI::Image::resizable
                      ((EdgeInsets)capInsets.unknown,(ResizingMode)(__int8)IVar8.unknown,IVar9);
    _swift_release(IVar8.unknown);
    (**(code **)(lVar14 + 8))(capInsets.unknown,puVar3);
    SwiftUI::Alignment::get_center(capInsets);
    _Var10 = SwiftUI::_FrameLayout::_init((Alignment)0x405e000000000000);
    local_a4 = (uint)local_78;
    local_b0 = local_70;
    HVar11 = SwiftUI::HorizontalAlignment::get_center(_Var10.unknown);
    *puVar13 = HVar11.unknown;
    puVar13[1] = 0x4010000000000000;
    *(undefined1 *)(puVar13 + 2) = 0;
    puVar3 = &DAT_100faaef8;
    FUN_1000037f0(&DAT_100faaef8,&DAT_100c288c8);
    FUN_10009baec((long)puVar13 + (long)*(int *)(puVar3 + 0x2c),param_2,local_a0[1]);
    FUN_100011090(puVar13,lVar12,&DAT_100faaef0,&DAT_100c288c0);
    *param_1 = IVar9.unknown;
    param_1[1] = local_a0[2];
    *(undefined1 *)(param_1 + 2) = local_88;
    param_1[3] = local_80;
    *(char *)(param_1 + 4) = (char)local_a4;
    param_1[5] = local_b0;
    param_1[6] = uStack_68;
    puVar3 = &DAT_100faaf00;
    FUN_1000037f0(&DAT_100faaf00,&DAT_100c288d0);
    FUN_100011090(lVar12,(long)param_1 + (long)*(int *)(puVar3 + 0x30),&DAT_100faaef0,&DAT_100c288c0
                 );
    _swift_retain(IVar9.unknown);
    FUN_100005808(puVar13,&DAT_100faaef0,&DAT_100c288c0);
    FUN_100005808(lVar12,&DAT_100faaef0,&DAT_100c288c0);
    _swift_release(local_a0[0]);
    _swift_release(IVar9.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10009baec);
  (*pcVar1)();
}



/* Address: 0x10009baec | FUN_10009baec */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10009baec(long param_1,undefined8 param_2,undefined8 param_3,uint param_4,Font param_5)

{
  int iVar1;
  __int64 _Var2;
  code *pcVar3;
  LocalizedStringResource LVar4;
  long lVar5;
  EnabledTextSelectability EVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  UnownedSerialExecutor UVar11;
  LocalizedStringKey LVar12;
  Text TVar13;
  Font FVar14;
  Font FVar15;
  ID IVar16;
  char *pcVar17;
  Font FVar18;
  undefined1 *puVar19;
  undefined8 extraout_x1;
  undefined8 uVar20;
  ulong uVar22;
  undefined *puVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  void *pvVar27;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  StringInterpolation *pSVar28;
  long lVar29;
  long lVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  StringInterpolation SVar35;
  StringInterpolation SVar36;
  StringInterpolation SVar37;
  StringInterpolation SVar38;
  StringInterpolation SVar39;
  StringInterpolation stringInterpolation;
  undefined8 uStack_d0;
  undefined2 auStack_c8 [4];
  StringInterpolation local_c0;
  long local_90;
  undefined *local_88;
  undefined *local_80;
  undefined1 *puStack_78;
  undefined1 local_70;
  undefined *local_68;
  undefined8 uVar21;
  
  local_90 = param_1;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  pSVar28 = (StringInterpolation *)((long)&local_c0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar5 = 0;
  local_c0.message.bridgeObject = pSVar28;
  SwiftUI::LocalizedStringKey::StringInterpolation::typeMetadataAccessor(pSVar28);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  pSVar28 = (StringInterpolation *)((long)pSVar28 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  EVar6 = SwiftUI::EnabledTextSelectability::typeMetadataAccessor();
  lVar29 = *(long *)(EVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar29 + 0x40));
  lVar30 = (long)pSVar28 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100faaf08;
  FUN_1000037f0(&DAT_100faaf08,&DAT_100c288d8);
  local_88 = puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar5 = lVar30 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_c0.interpolationCount = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  pvVar27 = (void *)(lVar5 - extraout_x12);
  local_c0.template.bridgeObject = pvVar27;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = (long)pvVar27 - extraout_x12_00;
  local_c0._16_8_ = lVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar5 = lVar5 - extraout_x12_01;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  pMVar8 = pMVar9;
  FUN_1000081a8();
  local_c0.template.str = (char *)pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  UVar11 = UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar11.unknown & 1) == 0) {
    param_4 = 1;
    param_5.unknown = (undefined *)0xf;
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,0xf,UVar10.unknown,pMVar8);
  }
  SVar31.bridgeObject = &DAT_e500000000000000;
  SVar31.str = (char *)0x6574736150;
  puVar19 = &DAT_e500000000000000;
  LVar12 = SwiftUI::LocalizedStringKey::init(SVar31);
  *(undefined2 *)(lVar5 + -8) = 0x100;
  *(undefined8 *)(lVar5 + -0x10) = 0;
  uVar22 = (ulong)(param_4 & 1);
  uVar24 = 0;
  uVar25 = 0;
  uVar26 = 0;
  TVar13 = SwiftUI::Text::_init(LVar12);
  local_70 = (undefined1)uVar22;
  local_80 = TVar13.unknown;
  puStack_78 = puVar19;
  local_68 = param_5.unknown;
  SwiftUI::EnabledTextSelectability::init();
  FVar18.unknown = PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348
  ;
  puVar23 = 
  PTR___protocol_witness_table_for_SwiftUI_EnabledTextSelectability___SwiftUI_TextSelectability_in_SwiftUI_100eaafb8
  ;
  (extension_SwiftUI)::SwiftUI::View::_textSelection
            (lVar5,lVar30,PTR___type_metadata_for_SwiftUI_Text_100eab358,EVar6.unknown);
  local_c0.message.str = *(char **)(lVar29 + 8);
  (*(code *)local_c0.message.str)(lVar30,EVar6.unknown);
  FUN_100016d74(TVar13.unknown,puVar19);
  _swift_bridgeObjectRelease();
  FVar14 = SwiftUI::Font::get_title(param_5);
  FVar15 = SwiftUI::Font::bold(FVar14);
  _swift_release(FVar14.unknown);
  puVar7 = &DAT_100c28800;
  _swift_getKeyPath();
  iVar1 = *(int *)(local_88 + 0x24);
  *(undefined8 *)(lVar5 + iVar1) = puVar7;
  ((undefined8 *)(lVar5 + iVar1))[1] = FVar15.unknown;
  SwiftUI::LocalizedStringKey::StringInterpolation::init(pSVar28,3,2);
  SVar35.message.bridgeObject = FVar18.unknown;
  SVar35.message.str = (char *)uVar22;
  SVar35.template.bridgeObject = (void *)uVar25;
  SVar35.template.str = (char *)uVar24;
  SVar35._16_8_ = puVar23;
  SVar35.interpolationCount = uVar26;
  SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral
            ((String)(ZEXT816(0xe000000000000000) << 0x40),SVar35);
  IVar16 = NSBundle::mainBundle((ID)&_OBJC_CLASS___NSBundle);
  uVar20 = extraout_x1;
  FUN_1000f50ac(IVar16);
  if (((uint)FVar18.unknown & 0xff) != 1) {
    FUN_1000f4a7c(IVar16,uVar20);
    pvVar27 = local_c0.message.bridgeObject;
    thunk_FUN_1001e6c28(local_c0.message.bridgeObject);
    _swift_bridgeObjectRelease(uVar20);
    SVar31 = (extension_Foundation)::Swift::String::init((LocalizedStringResource)pvVar27);
    SVar36.message.bridgeObject = FVar18.unknown;
    SVar36.message.str = (char *)uVar22;
    SVar36.template.bridgeObject = (void *)uVar25;
    SVar36.template.str = (char *)uVar24;
    SVar36._16_8_ = puVar23;
    SVar36.interpolationCount = uVar26;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar31,SVar36);
    _swift_bridgeObjectRelease(SVar31.bridgeObject);
    SVar32.bridgeObject = &SUB_e200000000000000;
    SVar32.str = (char *)0x2820;
    puVar19 = &SUB_e200000000000000;
    pcVar17 = (char *)0x2820;
    SVar37.message.bridgeObject = FVar18.unknown;
    SVar37.message.str = (char *)uVar22;
    SVar37.template.bridgeObject = (void *)uVar25;
    SVar37.template.str = (char *)uVar24;
    SVar37._16_8_ = puVar23;
    SVar37.interpolationCount = uVar26;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar32,SVar37);
    FUN_10009f8c0();
    SVar33.bridgeObject = puVar19;
    SVar33.str = pcVar17;
    SVar38.message.bridgeObject = FVar18.unknown;
    SVar38.message.str = (char *)uVar22;
    SVar38.template.bridgeObject = (void *)uVar25;
    SVar38.template.str = (char *)uVar24;
    SVar38._16_8_ = puVar23;
    SVar38.interpolationCount = uVar26;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendInterpolation(SVar33,SVar38);
    _swift_bridgeObjectRelease(puVar19);
    SVar34.bridgeObject = (void *)0xe100000000000000;
    SVar34.str = (char *)0x29;
    uVar21 = 0xe100000000000000;
    SVar39.message.bridgeObject = FVar18.unknown;
    SVar39.message.str = (char *)uVar22;
    SVar39.template.bridgeObject = (void *)uVar25;
    SVar39.template.str = (char *)uVar24;
    SVar39._16_8_ = puVar23;
    SVar39.interpolationCount = uVar26;
    SwiftUI::LocalizedStringKey::StringInterpolation::appendLiteral(SVar34,SVar39);
    stringInterpolation.message.bridgeObject = (void *)uVar21;
    stringInterpolation.message.str = (char *)pSVar28;
    stringInterpolation.template.bridgeObject = puVar23;
    stringInterpolation.template.str = FVar18.unknown;
    stringInterpolation._16_8_ = uVar22;
    stringInterpolation.interpolationCount = uVar24;
    LVar12 = SwiftUI::LocalizedStringKey::init(stringInterpolation);
    *(undefined2 *)(lVar5 + -8) = 0x100;
    *(undefined8 *)(lVar5 + -0x10) = 0;
    uVar22 = (ulong)((uint)uVar22 & 1);
    TVar13 = SwiftUI::Text::_init(LVar12);
    local_70 = (undefined1)uVar22;
    local_80 = TVar13.unknown;
    puStack_78 = (undefined1 *)uVar21;
    local_68 = FVar18.unknown;
    SwiftUI::EnabledTextSelectability::init();
    uVar20 = local_c0._16_8_;
    (extension_SwiftUI)::SwiftUI::View::_textSelection
              (local_c0._16_8_,lVar30,PTR___type_metadata_for_SwiftUI_Text_100eab358,EVar6.unknown,
               PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348,
               PTR___protocol_witness_table_for_SwiftUI_EnabledTextSelectability___SwiftUI_TextSelectability_in_SwiftUI_100eaafb8
              );
    (*(code *)local_c0.message.str)(lVar30,EVar6.unknown);
    FUN_100016d74(TVar13.unknown,uVar21,uVar22);
    _swift_bridgeObjectRelease();
    FVar18 = SwiftUI::Font::get_body(FVar18);
    puVar7 = &DAT_100c28800;
    _swift_getKeyPath();
    pvVar27 = local_c0.template.bridgeObject;
    iVar1 = *(int *)(local_88 + 0x24);
    *(undefined8 *)(uVar20 + (long)iVar1) = puVar7;
    ((undefined8 *)(uVar20 + (long)iVar1))[1] = FVar18.unknown;
    FUN_100011090(lVar5,local_c0.template.bridgeObject,&DAT_100faaf08,&DAT_100c288d8);
    _Var2 = local_c0.interpolationCount;
    FUN_100011090(uVar20,local_c0.interpolationCount,&DAT_100faaf08,&DAT_100c288d8);
    lVar29 = local_90;
    FUN_100011090(pvVar27,local_90,&DAT_100faaf08,&DAT_100c288d8);
    puVar7 = &DAT_100faaf10;
    FUN_1000037f0(&DAT_100faaf10,&DAT_100c288e0);
    FUN_100011090(_Var2,lVar29 + *(int *)(puVar7 + 0x30),&DAT_100faaf08,&DAT_100c288d8);
    FUN_100005808(uVar20,&DAT_100faaf08,&DAT_100c288d8);
    FUN_100005808(lVar5,&DAT_100faaf08,&DAT_100c288d8);
    FUN_100005808(_Var2,&DAT_100faaf08,&DAT_100c288d8);
    FUN_100005808(pvVar27,&DAT_100faaf08,&DAT_100c288d8);
    _swift_release(local_c0.template.str);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c03c);
  (*pcVar3)();
}



/* Address: 0x10009c03c | FUN_10009c03c */

void FUN_10009c03c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  Image IVar5;
  Image IVar6;
  Image IVar7;
  Image IVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,0x1c,UVar3.unknown,pMVar1);
  }
  SVar9.bridgeObject = &DAT_e700000000000000;
  SVar9.str = (char *)0x72657474697774;
  IVar5 = SwiftUI::Image::_init(SVar9);
  _swift_retain(param_3);
  SVar10.bridgeObject = &DAT_e800000000000000;
  SVar10.str = (char *)0x6b6f6f6265636166;
  IVar6 = SwiftUI::Image::_init(SVar10);
  _swift_retain(param_3);
  SVar11.bridgeObject = &DAT_e800000000000000;
  SVar11.str = (char *)0x6e6f646f7473616d;
  IVar7 = SwiftUI::Image::_init(SVar11);
  _swift_retain(param_3);
  SVar12.bridgeObject = &DAT_e800000000000000;
  SVar12.str = (char *)0x6e6964656b6e696c;
  IVar8 = SwiftUI::Image::_init(SVar12);
  *param_1 = IVar5.unknown;
  param_1[1] = FUN_10009cf24;
  param_1[2] = param_3;
  param_1[3] = IVar6.unknown;
  param_1[4] = FUN_10009cf44;
  param_1[5] = param_3;
  param_1[6] = IVar7.unknown;
  param_1[7] = FUN_10009cf64;
  param_1[8] = param_3;
  param_1[9] = IVar8.unknown;
  param_1[10] = FUN_10009cf84;
  param_1[0xb] = param_3;
  _swift_retain_n(param_3,3);
  _swift_retain(IVar5.unknown);
  _swift_retain(IVar6.unknown);
  _swift_retain(IVar7.unknown);
  _swift_release(pMVar2);
  _swift_release(IVar5.unknown);
  _swift_release_n(param_3,2);
  _swift_release(IVar6.unknown);
  _swift_release(IVar7.unknown);
  return;
}



/* Address: 0x10009c1dc | FUN_10009c1dc */

void FUN_10009c1dc(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  EnabledTextSelectability EVar6;
  undefined *puVar7;
  MainActor *pMVar8;
  MainActor *pMVar9;
  UnownedSerialExecutor UVar10;
  char *pcVar11;
  VerticalAlignment VVar12;
  undefined *puVar13;
  undefined *puVar14;
  Text TVar15;
  undefined *puVar16;
  Alignment AVar17;
  undefined *puVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar19;
  long lVar20;
  long extraout_x12;
  long extraout_x12_00;
  Font FVar21;
  long lVar22;
  long alStack_d0 [3];
  MainActor *local_b8 [2];
  long local_a8 [3];
  undefined *local_90;
  undefined *puStack_88;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined *local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  alStack_d0[1] = param_2;
  local_a8[2] = param_1;
  EVar6 = SwiftUI::EnabledTextSelectability::typeMetadataAccessor();
  alStack_d0[2] = *(long *)(EVar6.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_d0[2] + 0x40));
  lVar22 = (long)alStack_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = &DAT_100faae90;
  FUN_1000037f0(&DAT_100faae90,&DAT_100c287e0);
  local_b8[1] = (MainActor *)puVar7;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar19 = lVar22 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_a8[1] = lVar19;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = lVar19 - extraout_x12;
  puVar7 = &DAT_100faae98;
  FUN_1000037f0(&DAT_100faae98,&DAT_100c287e8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FVar21.unknown = (undefined *)(lVar19 - extraout_x8_01);
  puVar7 = &DAT_100faaea0;
  FUN_1000037f0(&DAT_100faaea0,&DAT_100c287f0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar7 + -8) + 0x40));
  lVar20 = (long)FVar21.unknown - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  local_a8[0] = lVar20;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = lVar20 - extraout_x12_00;
  pMVar8 = Swift::MainActor::typeMetadataAccessor();
  pMVar9 = Swift::MainActor::get_shared(pMVar8,pMVar8);
  pMVar8 = pMVar9;
  FUN_1000081a8();
  local_b8[0] = pMVar9;
  UVar10 = Swift::Actor::get_unownedExecutor();
  pcVar11 = (char *)UVar10;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar11 & 1) == 0) {
    pcVar11 = "Paste/AboutView.swift";
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,0x23,UVar10.unknown,pMVar8);
  }
  VVar12 = SwiftUI::VerticalAlignment::get_center((VerticalAlignment)pcVar11);
  *(undefined **)FVar21.unknown = VVar12.unknown;
  *(undefined8 *)((long)FVar21.unknown + 8) = 0x4020000000000000;
  *(undefined1 *)((long)FVar21.unknown + 0x10) = 0;
  puVar13 = &DAT_100faaea8;
  FUN_1000037f0(&DAT_100faaea8,&DAT_100c287f8);
  FUN_10009c700((long)FVar21.unknown + (long)*(int *)(puVar13 + 0x2c),alStack_d0[1],param_3);
  puVar13 = &DAT_100faaeb0;
  puVar18 = &DAT_100faae98;
  FUN_100016eac(&DAT_100faaeb0,&DAT_100faae98,&DAT_100c287e8,
                PTR_SwiftUI__SwiftUI__HStack<undefined>_>SwiftUI__View_100eab8b0);
  FUN_10009cd58();
  (extension_SwiftUI)::SwiftUI::View::_buttonStyle(lVar20);
  FUN_100005808(FVar21.unknown,&DAT_100faae98,&DAT_100c287e8);
  FVar21 = SwiftUI::Font::get_body(FVar21);
  puVar16 = &DAT_100c28800;
  puVar14 = puVar16;
  _swift_getKeyPath();
  iVar2 = *(int *)(puVar7 + 0x24);
  *(undefined8 *)(lVar20 + iVar2) = puVar14;
  ((undefined8 *)(lVar20 + iVar2))[1] = FVar21.unknown;
  FUN_10009f9a4();
  local_90 = puVar14;
  puStack_88 = puVar18;
  FUN_100008378();
  puVar7 = PTR___type_metadata_for_Swift_String_100eac208;
  TVar15 = SwiftUI::Text::_init();
  local_80 = SUB81(puVar14,0);
  local_90 = TVar15.unknown;
  puStack_88 = puVar7;
  local_78 = puVar13;
  SwiftUI::EnabledTextSelectability::init();
  (extension_SwiftUI)::SwiftUI::View::_textSelection
            (lVar19,lVar22,PTR___type_metadata_for_SwiftUI_Text_100eab358,EVar6.unknown,
             PTR___protocol_witness_table_for_SwiftUI_Text___SwiftUI_View_in_SwiftUI_100eab348,
             PTR___protocol_witness_table_for_SwiftUI_EnabledTextSelectability___SwiftUI_TextSelectability_in_SwiftUI_100eaafb8
            );
  (**(code **)(alStack_d0[2] + 8))(lVar22,EVar6.unknown);
  FUN_100016d74(TVar15.unknown,puVar7,puVar14);
  _swift_bridgeObjectRelease(puVar13);
  puVar7 = &DAT_100c28830;
  _swift_getKeyPath();
  puVar13 = &DAT_100faaec0;
  FUN_1000037f0(&DAT_100faaec0,&DAT_100c28860);
  puVar1 = (undefined8 *)(lVar19 + *(int *)(puVar13 + 0x24));
  *puVar1 = puVar7;
  puVar1[1] = 2;
  *(undefined1 *)(puVar1 + 2) = 0;
  puVar7 = &DAT_100c28868;
  _swift_getKeyPath();
  puVar13 = &DAT_100faaec8;
  FUN_1000037f0(&DAT_100faaec8,&DAT_100c28898);
  iVar2 = *(int *)(puVar13 + 0x24);
  *(undefined8 *)(lVar19 + iVar2) = puVar7;
  *(undefined1 *)((undefined8 *)(lVar19 + iVar2) + 1) = 1;
  FVar21.unknown = &DAT_100faaed0;
  FUN_1000037f0(&DAT_100faaed0,&DAT_100c288a0);
  *(undefined2 *)(lVar19 + *(int *)(FVar21.unknown + 0x24)) = 0x100;
  FVar21 = SwiftUI::Font::get_body(FVar21);
  _swift_getKeyPath();
  AVar17.unknown = &DAT_100faaed8;
  FUN_1000037f0(&DAT_100faaed8,&DAT_100c288a8);
  iVar2 = *(int *)(AVar17.unknown + 0x24);
  *(undefined8 *)(lVar19 + iVar2) = puVar16;
  ((undefined8 *)(lVar19 + iVar2))[1] = FVar21.unknown;
  SwiftUI::Alignment::get_center(AVar17);
  SwiftUI::_FrameLayout::_init((Alignment)0x4069000000000000);
  puVar13 = local_78;
  puVar7 = local_90;
  lVar22 = local_a8[0];
  puVar1 = (undefined8 *)(lVar19 + *(int *)(local_b8[1] + 0x24));
  uVar3 = CONCAT71(uStack_7f,local_80);
  puVar1[1] = puStack_88;
  *puVar1 = puVar7;
  puVar1[3] = puVar13;
  puVar1[2] = uVar3;
  puVar1[5] = uStack_68;
  puVar1[4] = local_70;
  FUN_100011090(lVar20,lVar22,&DAT_100faaea0,&DAT_100c287f0);
  lVar4 = local_a8[1];
  FUN_100011090(lVar19,local_a8[1],&DAT_100faae90,&DAT_100c287e0);
  lVar5 = local_a8[2];
  FUN_100011090(lVar22,local_a8[2],&DAT_100faaea0,&DAT_100c287f0);
  puVar7 = &DAT_100faaee0;
  FUN_1000037f0(&DAT_100faaee0,&DAT_100c288b0);
  FUN_100011090(lVar4,lVar5 + *(int *)(puVar7 + 0x30),&DAT_100faae90,&DAT_100c287e0);
  FUN_100005808(lVar19,&DAT_100faae90,&DAT_100c287e0);
  FUN_100005808(lVar20,&DAT_100faaea0,&DAT_100c287f0);
  FUN_100005808(lVar4,&DAT_100faae90,&DAT_100c287e0);
  FUN_100005808(lVar22,&DAT_100faaea0,&DAT_100c287f0);
  _swift_release(local_b8[0]);
  return;
}



/* Address: 0x10009c700 | FUN_10009c700 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010009c8a4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_10009c700(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  LocalizedStringResource LVar4;
  undefined *puVar5;
  MainActor *pMVar6;
  MainActor *pMVar7;
  UnownedSerialExecutor UVar8;
  UnownedSerialExecutor UVar9;
  char *pcVar10;
  LocalizedStringKey LVar11;
  Text TVar12;
  undefined *puVar13;
  undefined8 uVar14;
  uint uVar15;
  undefined *puVar16;
  long extraout_x8;
  long extraout_x8_00;
  long lVar17;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long lVar18;
  code *pcVar19;
  long lVar20;
  String SVar21;
  undefined8 uStack_c0;
  undefined2 auStack_b8 [4];
  long local_b0;
  long local_a8;
  undefined *local_a0;
  uint local_94;
  MainActor *local_90;
  long local_88;
  long local_80;
  long local_78;
  String local_70;
  
  local_78 = param_1;
  LVar4 = Foundation::LocalizedStringResource::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(LVar4.unknown + -8) + 0x40));
  LVar4.unknown = (undefined *)((long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  puVar5 = &DAT_100fa6e58;
  FUN_1000037f0(&DAT_100fa6e58,&DAT_100c26330);
  local_88 = *(long *)(puVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar17 = (long)LVar4.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_80 = lVar17 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar20 = (lVar17 - extraout_x12) - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar18 = lVar20 - extraout_x12_01;
  pMVar6 = Swift::MainActor::typeMetadataAccessor();
  pMVar7 = Swift::MainActor::get_shared(pMVar6,pMVar6);
  pMVar6 = pMVar7;
  FUN_1000081a8();
  local_90 = pMVar7;
  UVar8 = Swift::Actor::get_unownedExecutor();
  UVar9 = UVar8;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar9.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor("Paste/AboutView.swift",0x15,1,0x24,UVar8.unknown,pMVar6);
  }
  FUN_1001c5d00(LVar4.unknown);
  SVar21 = (extension_Foundation)::Swift::String::init(LVar4);
  local_70 = SVar21;
  FUN_100008378();
  pcVar10 = SVar21.str;
  _swift_retain(param_3);
  puVar13 = PTR___type_metadata_for_Swift_String_100eac208;
  uVar14 = param_3;
  puVar16 = PTR___type_metadata_for_Swift_String_100eac208;
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar18,pcVar10,FUN_10009cee4,param_3,PTR___type_metadata_for_Swift_String_100eac208,
             pcVar10);
  uVar15 = (uint)uVar14;
  SVar21.bridgeObject = (void *)0xa200000000000000;
  SVar21.str = (char *)0xb7c2;
  uVar14 = 0xa200000000000000;
  LVar11 = SwiftUI::LocalizedStringKey::init(SVar21);
  *(undefined2 *)(lVar18 + -8) = 0x100;
  *(undefined8 *)(lVar18 + -0x10) = 0;
  local_94 = uVar15 & 1;
  TVar12 = SwiftUI::Text::_init(LVar11);
  local_a8 = lVar18;
  local_a0 = puVar16;
  FUN_1001c6624(LVar4.unknown);
  local_70 = (extension_Foundation)::Swift::String::init(LVar4);
  _swift_retain(param_3);
  (extension_SwiftUI)::SwiftUI::Button::_init
            (lVar20,TVar12.unknown,FUN_10009cf04,param_3,puVar13,pcVar10);
  lVar3 = local_80;
  lVar2 = local_88;
  pcVar19 = *(code **)(local_88 + 0x10);
  local_b0 = lVar20;
  (*pcVar19)(local_80,lVar18,puVar5);
  (*pcVar19)(lVar17,lVar20,puVar5);
  lVar18 = local_78;
  (*pcVar19)(local_78,lVar3,puVar5);
  puVar13 = &DAT_100faaee8;
  FUN_1000037f0(&DAT_100faaee8,&DAT_100c288b8);
  uVar15 = local_94;
  puVar16 = local_a0;
  puVar1 = (undefined8 *)(lVar18 + *(int *)(puVar13 + 0x30));
  *puVar1 = TVar12.unknown;
  puVar1[1] = uVar14;
  *(char *)(puVar1 + 2) = (char)local_94;
  puVar1[3] = local_a0;
  (*pcVar19)(lVar18 + *(int *)(puVar13 + 0x40),lVar17,puVar5);
  FUN_100016d5c(TVar12.unknown,uVar14,uVar15);
  pcVar19 = *(code **)(lVar2 + 8);
  _swift_bridgeObjectRetain(puVar16);
  (*pcVar19)(local_b0,puVar5);
  (*pcVar19)(local_a8,puVar5);
  (*pcVar19)(lVar17,puVar5);
  FUN_100016d74(TVar12.unknown,uVar14,uVar15);
  _swift_bridgeObjectRelease(puVar16);
  (*pcVar19)(lVar3,puVar5);
  _swift_release(local_90);
  return;
}



/* Address: 0x10009ca40 | FUN_10009ca40 */

void FUN_10009ca40(long param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  URL UVar3;
  long extraout_x8;
  undefined1 *puVar4;
  long lVar5;
  
  UVar3 = Foundation::URL::typeMetadataAccessor();
  lVar5 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  puVar4 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  lVar2 = *(long *)(param_1 + 0x30);
  param_1 = param_1 + 0x10;
  FUN_100004640(param_1,uVar1);
  (*param_2)();
  (**(code **)(lVar5 + 0x10))(puVar4,param_1,UVar3.unknown);
  (**(code **)(lVar2 + 8))(puVar4,uVar1,lVar2);
  (**(code **)(lVar5 + 8))(puVar4,UVar3.unknown);
  return;
}



/* Address: 0x10009cb04 | FUN_10009cb04 */

void FUN_10009cb04(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,HorizontalAlignment param_6)

{
  undefined1 *puVar1;
  HorizontalAlignment HVar2;
  undefined *puVar3;
  Set SVar4;
  Alignment AVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  SVar4.unknown = (undefined *)*unaff_x20;
  uVar6 = unaff_x20[1];
  HVar2 = SwiftUI::HorizontalAlignment::get_center(param_6);
  *param_1 = HVar2.unknown;
  param_1[1] = 0x402c000000000000;
  *(undefined1 *)(param_1 + 2) = 0;
  puVar3 = &DAT_100faae40;
  FUN_1000037f0(&DAT_100faae40,&DAT_100c28760);
  FUN_10009b304((long)param_1 + (long)*(int *)(puVar3 + 0x2c),SVar4.unknown,uVar6);
  SVar4 = SwiftUI::Edge::Set::get_all(SVar4);
  uVar6 = 0x4020000000000000;
  SwiftUI::EdgeInsets::init((CGFloat)SVar4.unknown);
  AVar5.unknown = &DAT_100faae48;
  FUN_1000037f0(&DAT_100faae48,&DAT_100c28768);
  puVar1 = (undefined1 *)((long)param_1 + (long)*(int *)(AVar5.unknown + 0x24));
  *puVar1 = (char)SVar4.unknown;
  *(undefined8 *)(puVar1 + 8) = uVar6;
  *(undefined8 *)(puVar1 + 0x10) = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_4;
  *(undefined8 *)(puVar1 + 0x20) = param_5;
  puVar1[0x28] = 0;
  SwiftUI::Alignment::get_center(AVar5);
  SwiftUI::_FrameLayout::_init((Alignment)0x4074000000000000);
  puVar3 = &DAT_100faae50;
  FUN_1000037f0(&DAT_100faae50,&DAT_100c28770);
  param_1 = (undefined8 *)((long)param_1 + (long)*(int *)(puVar3 + 0x24));
  param_1[1] = uStack_78;
  *param_1 = local_80;
  param_1[3] = uStack_68;
  param_1[2] = uStack_70;
  param_1[5] = uStack_58;
  param_1[4] = local_60;
  return;
}



/* Address: 0x10009cc1c | FUN_10009cc1c */

void FUN_10009cc1c(__int8 *param_1,EnvironmentValues param_2)

{
  TextAlignment TVar1;
  
  TVar1 = SwiftUI::EnvironmentValues::get_multilineTextAlignment(param_2);
  *param_1 = TVar1.value;
  return;
}



/* Address: 0x10009cc44 | FUN_10009cc44 */

void FUN_10009cc44(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_multilineTextAlignment(param_2,(TextAlignment)*param_1);
  return;
}



/* Address: 0x10009cc68 | FUN_10009cc68 */

void FUN_10009cc68(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x10009cc90 | FUN_10009cc90 */

void FUN_10009cc90(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x10009ccb8 | FUN_10009ccb8 */

void FUN_10009ccb8(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_foregroundColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x10009cce0 | FUN_10009cce0 */

void FUN_10009cce0(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_foregroundColor(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x10009cd08 | FUN_10009cd08 */

void FUN_10009cd08(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_foregroundColor(param_2);
  return;
}



/* Address: 0x10009cd30 | FUN_10009cd30 */

void FUN_10009cd30(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_foregroundColor(param_2);
  return;
}



/* Address: 0x10009cd58 | FUN_10009cd58 */

void FUN_10009cd58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100faaeb8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c354a8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c354a8,&DAT_100ec0628);
  DAT_100faaeb8 = pTVar1;
  return;
}



/* Address: 0x10009cd98 | FUN_10009cd98 */

void FUN_10009cd98(undefined8 *param_1,EnvironmentValues param_2)

{
  SwiftUI::EnvironmentValues::_get_font(param_2);
  *param_1 = param_2.unknown;
  return;
}



/* Address: 0x10009cdc0 | FUN_10009cdc0 */

void FUN_10009cdc0(undefined8 *param_1,EnvironmentValues *param_2)

{
  _swift_retain(*param_1);
  SwiftUI::EnvironmentValues::_set_font(param_2);
  return;
}



/* Address: 0x10009cde8 | FUN_10009cde8 */

void FUN_10009cde8(undefined8 *param_1,EnvironmentValues param_2,undefined1 param_3)

{
  SwiftUI::EnvironmentValues::_get_lineLimit(param_2);
  *param_1 = param_2.unknown;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Address: 0x10009ce14 | FUN_10009ce14 */

void FUN_10009ce14(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::_set_lineLimit(param_2);
  return;
}



/* Address: 0x10009ce40 | FUN_10009ce40 */

void FUN_10009ce40(undefined8 *param_1,EnvironmentValues param_2,undefined1 param_3)

{
  SwiftUI::EnvironmentValues::_get_lineLimit(param_2);
  *param_1 = param_2.unknown;
  *(undefined1 *)(param_1 + 1) = param_3;
  return;
}



/* Address: 0x10009ce6c | FUN_10009ce6c */

void FUN_10009ce6c(undefined8 param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::_set_lineLimit(param_2);
  return;
}



/* Address: 0x10009ce98 | FUN_10009ce98 */

void FUN_10009ce98(__int8 *param_1,EnvironmentValues param_2)

{
  TextAlignment TVar1;
  
  TVar1 = SwiftUI::EnvironmentValues::get_multilineTextAlignment(param_2);
  *param_1 = TVar1.value;
  return;
}



/* Address: 0x10009cec0 | FUN_10009cec0 */

void FUN_10009cec0(__int8 *param_1,EnvironmentValues *param_2)

{
  SwiftUI::EnvironmentValues::set_multilineTextAlignment(param_2,(TextAlignment)*param_1);
  return;
}



/* Address: 0x10009cee4 | FUN_10009cee4 */

void FUN_10009cee4(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cf04 | FUN_10009cf04 */

void FUN_10009cf04(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cf24 | FUN_10009cf24 */

void FUN_10009cf24(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cf44 | FUN_10009cf44 */

void FUN_10009cf44(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cf64 | FUN_10009cf64 */

void FUN_10009cf64(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cf84 | FUN_10009cf84 */

void FUN_10009cf84(void)

{
  FUN_10009ca40();
  return;
}



/* Address: 0x10009cfa4 | thunk_FUN_10009cfa8 */

void thunk_FUN_10009cfa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puStack_30;
  undefined *puStack_28;
  
  if (DAT_100faaf18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faae50;
  FUN_100005c24(&DAT_100faae50,&DAT_100c28770);
  puVar2 = puVar1;
  FUN_10009d020();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  puStack_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&puStack_30);
  DAT_100faaf18 = puVar3;
  return;
}



/* Address: 0x10009cfa8 | FUN_10009cfa8 */

void FUN_10009cfa8(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100faaf18 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faae50;
  FUN_100005c24(&DAT_100faae50,&DAT_100c28770);
  puVar2 = puVar1;
  FUN_10009d020();
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__FrameLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa6d0;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100faaf18 = puVar3;
  return;
}



/* Address: 0x10009d020 | FUN_10009d020 */

void FUN_10009d020(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *local_30;
  undefined *puStack_28;
  
  if (DAT_100faaf20 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100faae48;
  FUN_100005c24(&DAT_100faae48,&DAT_100c28768);
  puVar2 = &DAT_100faaf28;
  FUN_100016eac(&DAT_100faaf28,&DAT_100faaf30,&DAT_100c288e8,
                PTR_SwiftUI__SwiftUI__VStack<undefined>_>SwiftUI__View_100eab938);
  puStack_28 = 
  PTR___protocol_witness_table_for_SwiftUI__PaddingLayout___SwiftUI_ViewModifier_in_SwiftUI_100eaa8c8
  ;
  puVar3 = PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938;
  local_30 = puVar2;
  _swift_getWitnessTable
            (PTR__SwiftUI__SwiftUI__ModifiedContent<undefined,undefined>_>SwiftUI__View_100eaa938,
             puVar1,&local_30);
  DAT_100faaf20 = puVar3;
  return;
}



/* Address: 0x10009d0b8 | FUN_10009d0b8 */

void FUN_10009d0b8(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  AnyCancellable *this;
  code *pcVar5;
  long unaff_x20;
  long *plVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined *local_110 [14];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  FUN_100196568();
  plVar6 = (long *)*param_1;
  local_a0 = CONCAT71(local_a0._1_7_,1);
  uStack_98 = 0xd000000000000017;
  local_90 = 0x8000000100d8f2c0;
  pcVar5 = *(code **)(*plVar6 + 0x88);
  _swift_retain(plVar6);
  (*pcVar5)(&local_a0);
  _swift_release(plVar6);
  puVar2 = &DAT_100c288f0;
  _swift_getKeyPath(&DAT_100c288f0);
  FUN_1000037f0(&DAT_100faa818,&DAT_100c27e48);
  _swift_allocObject();
  FUN_1000da6e0(puVar2);
  FUN_1000da768(&local_a0);
  FUN_100004640(&local_a0,local_88);
  puVar3 = &DAT_100faa8b8;
  FUN_1000037f0(&DAT_100faa8b8,&DAT_100c281b8);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  *(undefined8 *)(puVar3 + 0x20) = 0xd000000000000015;
  *(undefined **)(puVar3 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar3 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar3 + 0x28) = 0x8000000100d8f2e0;
  *(undefined8 *)(puVar3 + 0x30) = 0x65726f7453707041;
  *(undefined1 **)(puVar3 + 0x38) = &DAT_e800000000000000;
  puVar4 = puVar3;
  FUN_100010850();
  _swift_setDeallocating(puVar3);
  FUN_10009d538(puVar3 + 0x20);
  (**(code **)(local_80 + 0x10))(puVar4,local_88,local_80);
  _swift_bridgeObjectRelease(puVar4);
  FUN_100004594(&local_a0);
  puVar1 = (undefined8 *)(unaff_x20 + _TtC5Paste11AppDelegate::_isDirectPasteEnabled);
  uVar10 = puVar1[1];
  uVar8 = *puVar1;
  local_88 = puVar1[3];
  uVar11 = puVar1[2];
  uStack_78 = puVar1[5];
  uVar9 = puVar1[4];
  uVar7 = puVar1[6];
  local_a0 = uVar8;
  uStack_98 = uVar10;
  local_90 = uVar11;
  local_80 = uVar9;
  local_70 = uVar7;
  _swift_retain(uVar8);
  _swift_retain(uVar10);
  _swift_retain(uVar11);
  _swift_retain(uVar9);
  _swift_retain(uVar7);
  puVar3 = &DAT_100faa2f0;
  FUN_1000037f0(&DAT_100faa2f0,&DAT_100c25940);
  FUN_1002cb1ec();
  _swift_release(uVar7);
  _swift_release(uVar9);
  _swift_release(uVar11);
  _swift_release(uVar10);
  _swift_release(uVar8);
  local_110[0] = puVar3;
  _swift_retain(puVar2);
  FUN_1000037f0(&DAT_100fa7ab0,&DAT_100c26e30);
  FUN_10004ff44();
  this = (extension_Combine)::Combine::Publisher::_sink();
  _swift_release(puVar3);
  _swift_release(puVar2);
  if (DAT_100faaf38 != -1) {
    _swift_once(&DAT_100faaf38,FUN_10009d3bc);
  }
  _swift_beginAccess(&DAT_100faaf40,local_110,0x21,0);
  Combine::AnyCancellable::store(this,(Set<AnyCancellable>)0x100faaf40);
  _swift_endAccess(local_110);
  _swift_release(puVar2);
  _swift_release(this);
  return;
}



/* Address: 0x10009d3b8 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x10009d3bc | FUN_10009d3bc */

void FUN_10009d3bc(void)

{
  DAT_100faaf40 = PTR___swiftEmptySetSingleton_100eae0e8;
  return;
}



/* Address: 0x10009d3d0 | FUN_10009d3d0 */

void FUN_10009d3d0(long param_1)

{
  undefined1 uVar1;
  MainActor *pMVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  uVar1 = *(undefined1 *)(param_1 + 1);
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  pMVar2 = pMVar3;
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/AppDelegate+Analytics.swift",0x21,1,0x1a,UVar4.unknown,pMVar2);
  }
  FUN_1000da768(auStack_78);
  FUN_100004640(auStack_78,local_60);
  puVar6 = &DAT_100faa8b8;
  FUN_1000037f0(&DAT_100faa8b8,&DAT_100c281b8);
  _swift_initStackObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(undefined8 *)(puVar6 + 0x20) = 0xd000000000000014;
  puVar7 = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined8 *)(puVar6 + 0x28) = 0x8000000100d8f330;
  *(undefined **)(puVar6 + 0x48) = puVar7;
  *(undefined ***)(puVar6 + 0x50) = &PTR_PTR_100ebcc70;
  puVar6[0x30] = uVar1;
  puVar7 = puVar6;
  FUN_100010850();
  _swift_setDeallocating(puVar6);
  FUN_10009d538(puVar6 + 0x20);
  (**(code **)(lStack_58 + 0x10))(puVar7,local_60,lStack_58);
  _swift_bridgeObjectRelease(puVar7);
  FUN_100004594(auStack_78);
  _swift_release(pMVar3);
  return;
}



/* Address: 0x10009d538 | FUN_10009d538 */

undefined8 FUN_10009d538(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100faa8c0;
  FUN_1000037f0(&DAT_100faa8c0,&DAT_100c237f0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x10009d580 | FUN_10009d580 */

void FUN_10009d580(void)

{
  FUN_10009d3d0();
  return;
}



/* Address: 0x10009d588 | FUN_10009d588 */

undefined8 FUN_10009d588(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 local_38;
  
  puVar1 = &DAT_100c28970;
  _swift_getKeyPath(&DAT_100c28970);
  puVar2 = &DAT_100c28998;
  _swift_getKeyPath(&DAT_100c28998);
  Combine::Published::_get_subscript(&local_38);
  _swift_release(puVar1);
  _swift_release(puVar2);
  return local_38;
}



/* Address: 0x10009d5f8 | FUN_10009d5f8 */

void FUN_10009d5f8(void)

{
  long lVar1;
  undefined *puVar2;
  long unaff_x20;
  
  lVar1 = _TtC5Paste18SearchBarViewModel::_searchQuery;
  puVar2 = &DAT_100fa67f8;
  FUN_1000037f0(&DAT_100fa67f8,&DAT_100c23010);
  (**(code **)(*(long *)(puVar2 + -8) + 8))(unaff_x20 + lVar1,puVar2);
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste18SearchBarViewModel::searchService));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x10009d660 | FUN_10009d660 */

void FUN_10009d660(void)

{
  FUN_10009d668(0);
  return;
}


