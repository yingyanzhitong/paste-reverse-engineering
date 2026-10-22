/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000038d4 | FUN_1000038d4 */

long FUN_1000038d4(long *param_1,long *param_2)

{
  long lVar1;
  
  lVar1 = *param_2;
  *param_1 = lVar1;
  _swift_retain(lVar1);
  return lVar1 + 0x10;
}



/* Address: 0x100003900 | FUN_100003900 */

void FUN_100003900(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  return;
}



/* Address: 0x10000390c | FUN_10000390c */

int FUN_10000390c(int *param_1,int param_2)

{
  if ((param_2 != 0) && ((char)param_1[8] != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x10000392c | FUN_10000392c */

void FUN_10000392c(ulong *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 1);
    param_1[1] = 0;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)(param_1 + 4) = uVar1;
  return;
}



/* Address: 0x100003958 | FUN_100003958 */

void FUN_100003958(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6458,&DAT_100eafa68);
  return;
}



/* Address: 0x10000396c | FUN_10000396c */

void FUN_10000396c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6460,&DAT_100eafaf0);
  return;
}



/* Address: 0x100003980 | FUN_100003980 */

void FUN_100003980(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6468,&DAT_100eafb18);
  return;
}



/* Address: 0x100003994 | FUN_100003994 */

void FUN_100003994(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6470,&DAT_100eafb98);
  return;
}



/* Address: 0x1000039a8 | FUN_1000039a8 */

void FUN_1000039a8(void)

{
  FUN_100003a00(&DAT_100fa6478,FUN_100003980,&TargetProtocolConformanceDescriptor_100c22590);
  return;
}



/* Address: 0x1000039d4 | FUN_1000039d4 */

void FUN_1000039d4(void)

{
  FUN_100003a00(&DAT_100fa6480,FUN_100003980,&TargetProtocolConformanceDescriptor_100c22564);
  return;
}



/* Address: 0x100003a00 | FUN_100003a00 */

void FUN_100003a00(long *param_1,code *param_2,long param_3)

{
  undefined8 uVar1;
  
  if (*param_1 == 0) {
    uVar1 = 0xff;
    (*param_2)(0xff);
    _swift_getWitnessTable(param_3,uVar1);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100003a40 | FUN_100003a40 */

void FUN_100003a40(void)

{
  FUN_100003a00(&DAT_100fa6488,FUN_100003980,&TargetProtocolConformanceDescriptor_100c22600);
  return;
}



/* Address: 0x100003a6c | FUN_100003a6c */

void FUN_100003a6c(void)

{
  FUN_100003a00(&DAT_100fa6490,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c226f8);
  return;
}



/* Address: 0x100003a98 | FUN_100003a98 */

void FUN_100003a98(void)

{
  FUN_100003a00(&DAT_100fa6498,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c226c4);
  return;
}



/* Address: 0x100003ac4 | FUN_100003ac4 */

void FUN_100003ac4(void)

{
  FUN_100003a00(&DAT_100fa64a0,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c227f0);
  return;
}



/* Address: 0x100003af0 | FUN_100003af0 */

void FUN_100003af0(void)

{
  FUN_100003a00(&DAT_100fa64a8,FUN_1000038c0,&TargetProtocolConformanceDescriptor_100c22724);
  return;
}



/* Address: 0x100003b1c | FUN_100003b1c */

void FUN_100003b1c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa64b8,&DAT_100eafbc0);
  return;
}



/* Address: 0x100003b30 | FUN_100003b30 */

void FUN_100003b30(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa64c0,&DAT_100eafbe8);
  return;
}



/* Address: 0x100003b44 | FUN_100003b44 */

void FUN_100003b44(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa64c8,&DAT_100eafc10);
  return;
}



/* Address: 0x100003b58 | FUN_100003b58 */

void FUN_100003b58(void)

{
  FUN_100003a00(&DAT_100fa64d0,FUN_100003b30,&TargetProtocolConformanceDescriptor_100c22904);
  return;
}



/* Address: 0x100003b84 | FUN_100003b84 */

void FUN_100003b84(void)

{
  FUN_100003a00(&DAT_100fa64d8,FUN_100003b30,&TargetProtocolConformanceDescriptor_100c228d8);
  return;
}



/* Address: 0x100003bb0 | FUN_100003bb0 */

void FUN_100003bb0(void)

{
  FUN_100003a00(&DAT_100fa64e0,FUN_100003b30,&TargetProtocolConformanceDescriptor_100c22974);
  return;
}



/* Address: 0x100003bdc | FUN_100003bdc */

void FUN_100003bdc(void)

{
  FUN_100003a00(&DAT_100fa64e8,FUN_100003b1c,&TargetProtocolConformanceDescriptor_100c22a5c);
  return;
}



/* Address: 0x100003c08 | FUN_100003c08 */

void FUN_100003c08(void)

{
  FUN_100003a00(&DAT_100fa64f0,FUN_100003b1c,&TargetProtocolConformanceDescriptor_100c22a30);
  return;
}



/* Address: 0x100003c34 | FUN_100003c34 */

void FUN_100003c34(void)

{
  FUN_100003a00(&DAT_100fa64f8,FUN_100003b1c,&TargetProtocolConformanceDescriptor_100c22acc);
  return;
}



/* Address: 0x100003c60 | FUN_100003c60 */

void FUN_100003c60(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fa6520,&DAT_100eafc40);
  return;
}



/* Address: 0x100003c74 | FUN_100003c74 */

void FUN_100003c74(long param_1,long *param_2,long param_3)

{
  if (*param_2 != 0) {
    return;
  }
  _swift_getForeignTypeMetadata();
  if (param_3 == 0) {
    *param_2 = param_1;
  }
  return;
}



/* Address: 0x100003cb8 | FUN_100003cb8 */

void FUN_100003cb8(void)

{
  FUN_100003a00(&DAT_100fa6528,FUN_100003c60,&TargetProtocolConformanceDescriptor_100c22be0);
  return;
}



/* Address: 0x100003ce4 | FUN_100003ce4 */

void FUN_100003ce4(void)

{
  FUN_100003a00(&DAT_100fa6530,FUN_100003c60,&TargetProtocolConformanceDescriptor_100c22bb4);
  return;
}



/* Address: 0x100003d10 | FUN_100003d10 */

void FUN_100003d10(void)

{
  FUN_100003a00(&DAT_100fa6538,FUN_100003c60,&TargetProtocolConformanceDescriptor_100c22c50);
  return;
}



/* Address: 0x100003d3c | thunk_FUN_100003140 */

void thunk_FUN_100003140(void)

{
  FUN_100003140();
  return;
}



/* Address: 0x100003d40 | thunk_FUN_10000339c */

void thunk_FUN_10000339c(void)

{
  FUN_10000339c();
  return;
}



/* Address: 0x100003d44 | thunk_FUN_100003290 */

void thunk_FUN_100003290(void)

{
  FUN_100003290();
  return;
}



/* Address: 0x100003d48 | thunk_FUN_100002fe8 */

void thunk_FUN_100002fe8(void)

{
  FUN_100002fe8();
  return;
}



/* Address: 0x100003d4c | thunk_FUN_1000034c8 */

void thunk_FUN_1000034c8(void)

{
  FUN_1000034c8();
  return;
}



/* Address: 0x100003d50 | thunk_FUN_1000030dc */

void thunk_FUN_1000030dc(void)

{
  FUN_1000030dc();
  return;
}



/* Address: 0x100003d54 | thunk_FUN_1000032b8 */

void thunk_FUN_1000032b8(void)

{
  FUN_1000032b8();
  return;
}



/* Address: 0x100003d58 | thunk_FUN_10000312c */

void thunk_FUN_10000312c(void)

{
  FUN_10000312c();
  return;
}



/* Address: 0x100003d5c | thunk_FUN_1000036b8 */

void thunk_FUN_1000036b8(void)

{
  thunk_FUN_1000036b8();
  return;
}



/* Address: 0x100003d60 | thunk_FUN_1000036f8 */

void thunk_FUN_1000036f8(void)

{
  thunk_FUN_1000036f8();
  return;
}



/* Address: 0x100003d64 | thunk_FUN_100003154 */

void thunk_FUN_100003154(void)

{
  thunk_FUN_100003154();
  return;
}



/* Address: 0x100003d68 | thunk_FUN_1000031c8 */

void thunk_FUN_1000031c8(void)

{
  thunk_FUN_1000031c8();
  return;
}



/* Address: 0x100003d6c | thunk_FUN_100003244 */

void thunk_FUN_100003244(void)

{
  thunk_FUN_100003244();
  return;
}



/* Address: 0x100003d70 | thunk_FUN_100003574 */

void thunk_FUN_100003574(void)

{
  thunk_FUN_100003574();
  return;
}



/* Address: 0x100003d74 | thunk_FUN_10000376c */

void thunk_FUN_10000376c(void)

{
  thunk_FUN_10000376c();
  return;
}



/* Address: 0x100003d78 | thunk_FUN_1000038d4 */

void thunk_FUN_1000038d4(void)

{
  FUN_1000038d4();
  return;
}



/* Address: 0x100003d7c | thunk_FUN_100003390 */

void thunk_FUN_100003390(void)

{
  FUN_100003390();
  return;
}



/* Address: 0x100003d80 | thunk_FUN_100003884 */

void thunk_FUN_100003884(void)

{
  FUN_100003884();
  return;
}



/* Address: 0x100003d84 | thunk_FUN_10000392c */

void thunk_FUN_10000392c(void)

{
  FUN_10000392c();
  return;
}



/* Address: 0x100003d88 | thunk_FUN_100003864 */

void thunk_FUN_100003864(void)

{
  FUN_100003864();
  return;
}



/* Address: 0x100003d8c | thunk_FUN_10000390c */

void thunk_FUN_10000390c(void)

{
  FUN_10000390c();
  return;
}



/* Address: 0x100003d90 | thunk_FUN_100003284 */

void thunk_FUN_100003284(void)

{
  FUN_100003284();
  return;
}



/* Address: 0x100003d94 | thunk_FUN_100003018 */

void thunk_FUN_100003018(void)

{
  FUN_100003018();
  return;
}



/* Address: 0x100003d98 | thunk_FUN_100003680 */

void thunk_FUN_100003680(void)

{
  thunk_FUN_100003680();
  return;
}



/* Address: 0x100003d9c | thunk_FUN_1000032a4 */

void thunk_FUN_1000032a4(void)

{
  FUN_1000032a4();
  return;
}



/* Address: 0x100003da0 | FUN_100003da0 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100003da0(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined **ppuVar3;
  undefined *puVar4;
  ID IVar5;
  long ***self;
  undefined8 uVar6;
  long ***ppplVar7;
  undefined8 uVar8;
  long ****pppplVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  long ****pppplVar13;
  undefined8 uVar14;
  long ***local_b8;
  long ***local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined **local_80;
  undefined1 auStack_78 [24];
  
  puVar4 = &DAT_100c22d10;
  _swift_getKeyPath();
  FUN_1000037f0(&DAT_100faa840,&DAT_100c22d38);
  _swift_allocObject();
  FUN_1000da6e0();
  IVar5 = 0;
  FUN_1000afc14();
  _objc_allocWithZone();
  self = (long ***)objc_stub::init(IVar5);
  objc_stub::setAnimationBehavior_((ID)self,3);
  FUN_1000da768(&local_b0);
  FUN_100086c10(self,param_1,param_3);
  uVar6 = 0;
  FUN_1001ae6a8();
  _objc_allocWithZone();
  ppplVar7 = self;
  FUN_1001ae04c();
  puVar1 = (undefined8 *)((long)ppplVar7 + _TtC12PasteRouting16WindowTransition::onPresented);
  _swift_beginAccess(puVar1,auStack_78,1,0);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100004444;
  puVar1[1] = puVar4;
  _swift_retain(puVar4);
  FUN_100004550(uVar14,uVar2);
  local_90 = &PTR_PTR_100ebe110;
  uVar8 = 0;
  local_b0 = ppplVar7;
  local_98 = uVar6;
  FUN_1001adc9c();
  _swift_allocObject();
  pppplVar9 = &local_b0;
  FUN_1001ad514();
  local_90 = &PTR_PTR_100eafe88;
  ppuStack_88 = &PTR_PTR_100ebe100;
  local_80 = &PTR_PTR_100ec6cd0;
  local_b0 = (long ***)pppplVar9;
  local_98 = uVar8;
  FUN_1003c41f0();
  _swift_allocObject();
  _swift_retain(pppplVar9);
  FUN_10000444c(param_2);
  lVar10 = param_1;
  FUN_1003c25dc(param_1,param_2,&local_b0);
  FUN_10007c86c(0);
  _objc_allocWithZone();
  lVar11 = lVar10;
  FUN_10007c994();
  puVar12 = &DAT_100eafe08;
  _swift_allocObject(&DAT_100eafe08,0x18,7);
  *(long ****)(puVar12 + 0x10) = self;
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste15ItemPreviewView::onEndEditing);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_100004548;
  puVar1[1] = puVar12;
  FUN_100004550(uVar14,uVar2);
  puVar12 = &DAT_100eafe30;
  _swift_allocObject(&DAT_100eafe30,0x20,7);
  *(undefined **)(puVar12 + 0x10) = puVar4;
  *(long *)(puVar12 + 0x18) = param_1;
  puVar1 = (undefined8 *)(lVar11 + _TtC5Paste15ItemPreviewView::onEditingStateChanged);
  uVar14 = *puVar1;
  uVar2 = puVar1[1];
  *puVar1 = FUN_10000458c;
  puVar1[1] = puVar12;
  _swift_retain(puVar4);
  FUN_100004550(uVar14,uVar2);
  if ((param_3 & 1) != 0) {
    FUN_10007be8c();
  }
  puVar12 = &_OBJC_CLASS___NSViewController;
  _objc_allocWithZone();
  IVar5 = objc_stub::init((ID)puVar12);
  objc_stub::setView_(IVar5,lVar11);
  (*(code *)(*pppplVar9)[0xd])(IVar5);
  local_90 = &PTR_PTR_100ebe0e8;
  local_b0 = (long ***)pppplVar9;
  local_98 = uVar8;
  _swift_retain(pppplVar9);
  FUN_1001ad32c(&local_b0,param_4,param_6);
  pppplVar13 = &local_b0;
  FUN_100004594();
  if ((param_3 & 1) == 0) {
    _swift_release(lVar10);
    _swift_release(pppplVar9);
    _swift_release(puVar4);
  }
  else {
    FUN_10007ac34();
    uVar14 = 0;
    local_b8 = (long ***)pppplVar13;
    FUN_1000045b4(0);
    puVar12 = &DAT_100fa6550;
    FUN_1000037f0(&DAT_100fa6550,&DAT_100c22d40);
    pppplVar13 = &local_b0;
    _swift_dynamicCast(pppplVar13,&local_b8,uVar14,puVar12,6);
    ppuVar3 = local_90;
    uVar14 = local_98;
    if ((int)pppplVar13 == 0) {
      _swift_release(puVar4);
      _swift_release(pppplVar9);
      _swift_release(lVar10);
      local_90 = (undefined **)0x0;
      uStack_a8 = 0;
      local_b0 = (long ***)0x0;
      local_98 = 0;
      uStack_a0 = 0;
      FUN_1000045f8(&local_b0);
    }
    else {
      FUN_100004640(&local_b0,local_98);
      (*(code *)ppuVar3[0xb])(uVar14,ppuVar3);
      _swift_release(puVar4);
      _swift_release(pppplVar9);
      _swift_release(lVar10);
      FUN_100004594(&local_b0);
    }
  }
  return;
}



/* Address: 0x100004214 | FUN_100004214 */

void FUN_100004214(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10008782c(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x30,0x13,FUN_1000091d8,0,uVar1);
  return;
}



/* Address: 0x100004264 | FUN_100004264 */

void FUN_100004264(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_10008782c(0);
  FUN_1000d80e0(param_1,"Paste/DI+App.swift",0x12,2,0x30,0x13,FUN_1000091d8,0,uVar1);
  return;
}



/* Address: 0x1000042b4 | FUN_1000042b4 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000042b4(undefined8 param_1,double param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5)

{
  ulong uVar1;
  code *pcVar2;
  ID self;
  long lVar3;
  double extraout_d0;
  double extraout_d0_00;
  double extraout_d0_01;
  double dVar4;
  double extraout_d0_02;
  double dVar5;
  double dVar6;
  double dVar7;
  undefined1 auStack_90 [24];
  long local_78;
  
  objc_stub::center(param_5);
  self = objc_stub::screen(param_5);
  if (self != 0) {
    objc_stub::frame(self);
    dVar6 = param_2;
    FUN_1000da768(&local_78,0);
    lVar3 = _TtC5Paste24ItemPreviewWindowManager::entries;
    _swift_beginAccess(local_78 + _TtC5Paste24ItemPreviewWindowManager::entries,auStack_90,0,0);
    lVar3 = *(long *)(*(long *)(local_78 + lVar3) + 0x10);
    uVar1 = lVar3 * 0x1e;
    if (SUB168(SEXT816(lVar3) * SEXT816(0x1e),8) != (long)uVar1 >> 0x3f) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100004444);
      (*pcVar2)();
    }
    dVar5 = (double)uVar1;
    objc_stub::frame(param_5);
    dVar7 = extraout_d0_00 + dVar5;
    objc_stub::frame(param_5);
    dVar6 = dVar6 - dVar5;
    objc_stub::frame(param_5);
    dVar5 = extraout_d0_01;
    _CGRectGetWidth();
    dVar4 = extraout_d0;
    _CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
    if (dVar4 < dVar7 + dVar5) {
      dVar7 = extraout_d0;
      _CGRectGetMaxX(extraout_d0,param_2,param_3,param_4);
      objc_stub::frame(param_5);
      dVar5 = extraout_d0_02;
      _CGRectGetWidth();
      dVar7 = dVar7 - dVar5;
    }
    dVar5 = extraout_d0;
    _CGRectGetMinY(extraout_d0,param_2,param_3,param_4);
    if (dVar6 < dVar5) {
      dVar6 = extraout_d0;
      _CGRectGetMinY(extraout_d0,param_2,param_3,param_4);
    }
    objc_stub::setFrameOrigin_(param_5,dVar7,dVar6);
  }
  return;
}



/* Address: 0x100004444 | FUN_100004444 */

void FUN_100004444(void)

{
  FUN_1000042b4();
  return;
}



/* Address: 0x10000444c | FUN_10000444c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ulong FUN_10000444c(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (uint)(param_1 >> 0x20);
  uVar2 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar2 == 0) {
      _swift_retain();
      return param_1;
    }
  }
  else if (uVar2 != 2) {
    return param_1;
  }
  return param_1 & 0x3fffffffffffffff;
}



/* Address: 0x100004474 | objc_stub::close */

ID __objc_msgSend_stub objc_stub::close(ID self,...)

{
  ID IVar1;
  
  IVar1 = close(self);
  return IVar1;
}



/* Address: 0x100004478 | FUN_100004478 */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100004478(undefined8 param_1,undefined8 param_2,ID param_3)

{
  String SVar1;
  undefined1 local_48 [8];
  
  FUN_1000da768(local_48);
  objc_stub::identifier(param_3);
  SVar1 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
  FUN_10008727c(param_1,SVar1.str,SVar1.bridgeObject);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  return;
}



/* Address: 0x100004508 | FUN_100004508 */

void FUN_100004508(void)

{
  FUN_100003da0();
  return;
}


