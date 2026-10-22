/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100b97ce4 | FUN_100b97ce4 */

void FUN_100b97ce4(void)

{
  undefined8 uVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  
  if (DAT_101044730 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  uVar1 = 0xff;
  FUN_100b65000(0xff);
  pTVar2 = &TargetProtocolConformanceDescriptor_100c98b08;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c98b08,uVar1);
  DAT_101044730 = pTVar2;
  return;
}



/* Address: 0x100b97d28 | FUN_100b97d28 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100b97d28(void)

{
  return ZEXT816(0x100fa15b8);
}



/* Address: 0x100b97d48 | FUN_100b97d48 */

void FUN_100b97d48(undefined8 param_1,undefined8 param_2)

{
  _swift_lookUpClassMethod(param_1,param_2,&TargetClassDescriptor_100cce324);
  return;
}



/* Address: 0x100b97d54 | FUN_100b97d54 */

void FUN_100b97d54(void)

{
  long unaff_x20;
  
  __Block_release(*(void **)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x100b97d78 | FUN_100b97d78 */

void FUN_100b97d78(void)

{
  FUN_100b979d4();
  return;
}



/* Address: 0x100b97d80 | FUN_100b97d80 */

void FUN_100b97d80(void)

{
  FUN_100b975a4();
  return;
}



/* Address: 0x100b97d88 | FUN_100b97d88 */

void FUN_100b97d88(void)

{
  FUN_100b97118();
  return;
}



/* Address: 0x100b97d90 | FUN_100b97d90 */

void FUN_100b97d90(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_100b96dac(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100b97d98 | FUN_100b97d98 */

void FUN_100b97d98(void)

{
  FUN_100b96a5c();
  return;
}



/* Address: 0x100b97da0 | FUN_100b97da0 */

void FUN_100b97da0(void)

{
  FUN_100b9660c();
  return;
}



/* Address: 0x100b97da8 | thunk_FUN_100b97448 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_100b97448(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  return uVar3;
}



/* Address: 0x100b97dac | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97db0 | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97db4 | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97db8 | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97dbc | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97dc0 | thunk_FUN_100b97b84 */

void thunk_FUN_100b97b84(void)

{
  FUN_100b97b84();
  return;
}



/* Address: 0x100b97dc4 | thunk_FUN_100b9623c */

void thunk_FUN_100b9623c(void)

{
  FUN_100b9623c();
  return;
}



/* Address: 0x100b97dc8 | thunk_FUN_100b97d54 */

void thunk_FUN_100b97d54(void)

{
  FUN_100b97d54();
  return;
}



/* Address: 0x100b97dcc | thunk_FUN_100b97d54 */

void thunk_FUN_100b97d54(void)

{
  FUN_100b97d54();
  return;
}



/* Address: 0x100b97dd0 | thunk_FUN_100b97d54 */

void thunk_FUN_100b97d54(void)

{
  FUN_100b97d54();
  return;
}



/* Address: 0x100b97dd4 | thunk_FUN_100b97d54 */

void thunk_FUN_100b97d54(void)

{
  FUN_100b97d54();
  return;
}



/* Address: 0x100b97dd8 | thunk_FUN_100b97d54 */

void thunk_FUN_100b97d54(void)

{
  FUN_100b97d54();
  return;
}



/* Address: 0x100b97ddc | thunk_FUN_100b97448 */

/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

undefined8 thunk_FUN_100b97448(long param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  pcVar1 = *(code **)(param_1 + 0x20);
  uVar2 = *(undefined8 *)(param_1 + 0x28);
  uVar3 = uVar2;
  _swift_retain(uVar2);
  (*pcVar1)();
  _swift_release(uVar2);
  return uVar3;
}



/* Address: 0x100b97de0 | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97de4 | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97de8 | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97dec | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97df0 | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97df4 | thunk_FUN_100b97b94 */

void thunk_FUN_100b97b94(void)

{
  FUN_100b97b94();
  return;
}



/* Address: 0x100b97df8 | FUN_100b97df8 */

void FUN_100b97df8(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b97e08 | FUN_100b97e08 */

void FUN_100b97e08(undefined8 param_1)

{
  _swift_allocObject(param_1,0x18,7);
  return;
}



/* Address: 0x100b97e14 | FUN_100b97e14 */

void FUN_100b97e14(void)

{
  return;
}



/* Address: 0x100b97e30 | FUN_100b97e30 */

void FUN_100b97e30(ID param_1,SEL param_2)

{
  _objc_msgSend(param_1,param_2);
  return;
}



/* Address: 0x100b97e44 | FUN_100b97e44 */

void FUN_100b97e44(void)

{
  void *unaff_x20;
  
  __Block_release(unaff_x20);
  return;
}



/* Address: 0x100b97e4c | FUN_100b97e4c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100b97e4c(void)

{
  return 0;
}



/* Address: 0x100b97e54 | FUN_100b97e54 */

void FUN_100b97e54(void)

{
  _swift_release();
  return;
}



/* Address: 0x100b97e5c | FUN_100b97e5c */

void FUN_100b97e5c(undefined8 param_1)

{
  undefined8 uStack0000000000000010;
  
  uStack0000000000000010 = param_1;
  __Block_copy(&stack0x00000000);
  return;
}



/* Address: 0x100b97e68 | FUN_100b97e68 */

void FUN_100b97e68(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b97e70 | FUN_100b97e70 */

void FUN_100b97e70(void)

{
  (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  return;
}



/* Address: 0x100b97e78 | FUN_100b97e78 */

void FUN_100b97e78(void)

{
  _swift_release();
  return;
}



/* Address: 0x100b97e80 | FUN_100b97e80 */

void FUN_100b97e80(void)

{
  _swift_retain();
  return;
}



/* Address: 0x100b97e88 | FUN_100b97e88 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100b97e88(void)

{
  undefined8 *unaff_x19;
  
  return *unaff_x19;
}



/* Address: 0x100b97e94 | FUN_100b97e94 */

bool FUN_100b97e94(double *param_1,double *param_2)

{
  bool bVar1;
  bool bVar2;
  char cVar3;
  double dVar4;
  double dVar5;
  
  dVar4 = *param_1;
  dVar5 = *param_2;
  cVar3 = *(char *)(param_2 + 1);
  bVar1 = cVar3 == '\x01' && dVar4 == dVar5;
  if (*(char *)(param_1 + 1) != '\x01') {
    bVar1 = cVar3 == '\x02' && dVar4 == dVar5;
  }
  bVar2 = cVar3 == '\0' && dVar4 == dVar5;
  if (*(char *)(param_1 + 1) != '\0') {
    bVar2 = bVar1;
  }
  return bVar2;
}



/* Address: 0x100b97ef4 | FUN_100b97ef4 */

void FUN_100b97ef4(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  ulong uVar2;
  ulong *unaff_x20;
  
  uVar2 = *unaff_x20;
  if ((char)unaff_x20[1] == '\0') {
    Swift::Hasher::_combine(0,param_2);
    Swift::Hasher::_combine(uVar2,param_2);
  }
  else {
    if ((char)unaff_x20[1] == '\x01') {
      _Var1 = 1;
    }
    else {
      _Var1 = 2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
    _Var1 = 0;
    if ((uVar2 & 0x7fffffffffffffff) != 0) {
      _Var1 = uVar2;
    }
    Swift::Hasher::_combine(_Var1,param_2);
  }
  return;
}



/* Address: 0x100b97f58 | FUN_100b97f58 */

void FUN_100b97f58(void)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = *unaff_x20;
  local_28 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_100b97ef4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100b97fa8 | FUN_100b97fa8 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100b97fdc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_100b97fa8(undefined8 param_1,undefined8 param_2)

{
  undefined4 uVar1;
  __int64 _Var2;
  undefined4 uVar3;
  
  FUN_100b6730c(&DAT_101045018);
  _swift_initStaticObject();
  _Var2 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  uVar3 = 1;
  if (_Var2 != 1) {
    uVar3 = 2;
  }
  uVar1 = 0;
  if (_Var2 != 0) {
    uVar1 = uVar3;
  }
  return uVar1;
}



/* Address: 0x100b9800c | FUN_100b9800c */

undefined1  [16] FUN_100b9800c(ulong param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  bool bVar3;
  undefined1 auVar4 [16];
  
  bVar3 = (param_1 & 1) == 0;
  puVar1 = &DAT_65756c6176;
  if (bVar3) {
    puVar1 = &DAT_65707974;
  }
  puVar2 = &DAT_e500000000000000;
  if (bVar3) {
    puVar2 = &DAT_e400000000000000;
  }
  auVar4._8_8_ = puVar2;
  auVar4._0_8_ = puVar1;
  return auVar4;
}



/* Address: 0x100b98038 | thunk_FUN_100b97e94 */

void thunk_FUN_100b97e94(void)

{
  FUN_100b97e94();
  return;
}



/* Address: 0x100b9803c | thunk_FUN_100b97f58 */

void thunk_FUN_100b97f58(void)

{
  FUN_100b97f58();
  return;
}



/* Address: 0x100b98040 | thunk_FUN_100b97ef4 */

void thunk_FUN_100b97ef4(void)

{
  FUN_100b97ef4();
  return;
}



/* Address: 0x100b98044 | FUN_100b98044 */

void FUN_100b98044(__int64 param_1)

{
  Hasher HVar1;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  undefined8 local_30;
  undefined1 local_28;
  
  local_30 = *unaff_x20;
  local_28 = *(undefined1 *)(unaff_x20 + 1);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_100b97ef4();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x100b98090 | FUN_100b98090 */

void FUN_100b98090(undefined1 *param_1,undefined1 *param_2)

{
  thunk_FUN_100bec780(*param_1,*param_2);
  return;
}



/* Address: 0x100b9809c | FUN_100b9809c */

void FUN_100b9809c(void)

{
  undefined1 *unaff_x20;
  
  FUN_100beeb40(*unaff_x20);
  return;
}



/* Address: 0x100b980a4 | FUN_100b980a4 */

void FUN_100b980a4(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_100bed128(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b980ac | FUN_100b980ac */

void FUN_100b980ac(undefined8 param_1)

{
  undefined1 *unaff_x20;
  
  FUN_100beeb38(param_1,*unaff_x20);
  return;
}



/* Address: 0x100b980b4 | FUN_100b980b4 */

void FUN_100b980b4(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100b97fa8(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x100b980e0 | FUN_100b980e0 */

void FUN_100b980e0(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100b9800c();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100b98108 | FUN_100b98108 */

void FUN_100b98108(void)

{
  undefined1 *unaff_x20;
  
  FUN_100b9800c(*unaff_x20);
  return;
}



/* Address: 0x100b98110 | FUN_100b98110 */

void FUN_100b98110(undefined1 *param_1,undefined1 param_2)

{
  FUN_100b97fa8();
  *param_1 = param_2;
  return;
}



/* Address: 0x100b98134 | FUN_100b98134 */

String FUN_100b98134(void)

{
  String SVar1;
  
  FUN_100b98334();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x100b9815c | FUN_100b9815c */

String FUN_100b9815c(void)

{
  String SVar1;
  
  FUN_100b98334();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x100b98184 | FUN_100b98184 */

void FUN_100b98184(long param_1)

{
  char cVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 *unaff_x20;
  long unaff_x21;
  long lVar5;
  undefined1 auStack_70 [8];
  undefined8 local_68;
  undefined1 local_56;
  undefined1 local_55;
  undefined1 local_54;
  undefined1 local_53;
  undefined1 local_52;
  undefined1 local_51;
  
  puVar3 = &DAT_101045fe8;
  FUN_100b6730c();
  lVar5 = *(long *)(puVar3 + -8);
  lVar4 = *(long *)(lVar5 + 0x40);
  local_68 = *unaff_x20;
  cVar1 = *(char *)(unaff_x20 + 1);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_100b98334();
  Swift::Encoder::_container();
  if (cVar1 == '\0') {
    local_55 = 0;
    FUN_100b985b4(0x7265746e756f63,&DAT_e700000000000000,&local_55);
    if (unaff_x21 == 0) {
      local_56 = 1;
      Swift::KeyedEncodingContainer::_encode(local_68,&local_56,puVar3);
    }
  }
  else {
    if (cVar1 == '\x01') {
      local_53 = 0;
      FUN_100b985b4(0x6567756167,&DAT_e500000000000000,&local_53);
      if (unaff_x21 != 0) goto LAB_100b98300;
      local_54 = 1;
      lVar2 = -0x44;
    }
    else {
      local_51 = 0;
      FUN_100b985b4(0x7562697274736964,0xec0000006e6f6974,&local_51);
      if (unaff_x21 != 0) goto LAB_100b98300;
      local_52 = 1;
      lVar2 = -0x42;
    }
    Swift::KeyedEncodingContainer::_encode(local_68,&stack0xfffffffffffffff0 + lVar2,puVar3);
  }
LAB_100b98300:
  (**(code **)(lVar5 + 8))(auStack_70 + -(lVar4 + 0xfU & 0xfffffffffffffff0),puVar3);
  return;
}



/* Address: 0x100b98334 | FUN_100b98334 */

void FUN_100b98334(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_101045ff0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c9b50c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c9b50c,&DAT_100f38f30);
  DAT_101045ff0 = pTVar1;
  return;
}


