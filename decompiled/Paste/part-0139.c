/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001a7a70 | FUN_1001a7a70 */

undefined8 FUN_1001a7a70(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4488;
  FUN_1000037f0(&DAT_100fb4488,&DAT_100c326a0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001a7ac0 | FUN_1001a7ac0 */

void FUN_1001a7ac0(void)

{
  FUN_1001a7500();
  return;
}



/* Address: 0x1001a7ac8 | FUN_1001a7ac8 */

void FUN_1001a7ac8(void)

{
  undefined *puVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  puVar1 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  lVar2 = *(long *)(puVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x18 & (uVar3 ^ 0xffffffffffffffff)),puVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001a7b40 | FUN_1001a7b40 */

void FUN_1001a7b40(void)

{
  undefined *puVar1;
  long unaff_x20;
  
  puVar1 = &DAT_100fb43f0;
  FUN_1000037f0(&DAT_100fb43f0,&DAT_100c32678);
  FUN_1001a7778(*(undefined8 *)(unaff_x20 + 0x10),
                unaff_x20 +
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) + 0x18 &
                ((ulong)*(byte *)(*(long *)(puVar1 + -8) + 0x50) ^ 0xffffffffffffffff)));
  return;
}



/* Address: 0x1001a7b7c | FUN_1001a7b7c */

void FUN_1001a7b7c(long param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined8 *)(param_2 + 0x28);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x20) = uVar2;
  _swift_retain(uVar1);
  return;
}



/* Address: 0x1001a7b90 | FUN_1001a7b90 */

void FUN_1001a7b90(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001a7b98 | FUN_1001a7b98 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001a7b98(void)

{
  undefined *puVar1;
  
  if (DAT_100fb44b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fb44b0 = puVar1;
  return;
}



/* Address: 0x1001a7bdc | FUN_1001a7bdc */

void FUN_1001a7bdc(long *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  if (*param_1 == 0) {
    FUN_100005c24(param_2,param_3);
    puVar1 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
    _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,param_2);
    *param_1 = (long)puVar1;
  }
  return;
}



/* Address: 0x1001a7c20 | FUN_1001a7c20 */

void FUN_1001a7c20(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1001a7c44 | FUN_1001a7c44 */

void FUN_1001a7c44(void)

{
  FUN_1001a6ac0();
  return;
}



/* Address: 0x1001a7c4c | FUN_1001a7c4c */

undefined8 FUN_1001a7c4c(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  FUN_1000037f0(param_3,param_4);
  (**(code **)(*(long *)(param_3 + -8) + 0x28))(param_2,param_1,param_3);
  return param_2;
}



/* Address: 0x1001a7c94 | FUN_1001a7c94 */

double FUN_1001a7c94(double param_1)

{
  return param_1 * 86400.0;
}



/* Address: 0x1001a7ca8 | FUN_1001a7ca8 */

undefined4 FUN_1001a7ca8(long param_1,undefined1 *param_2)

{
  bool bVar1;
  
  if (param_1 != 0x6d657469 || param_2 != &DAT_e400000000000000) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x6d657469,(_StringGuts)0xe400000000000000,
                       (_StringComparisonResult)(__int8)param_1);
    if (!bVar1) {
      if ((param_1 == 0x6974617269707865) && (param_2 == (undefined1 *)0xee00657461446e6f)) {
        _swift_bridgeObjectRelease(0xee00657461446e6f);
        return 1;
      }
      bVar1 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)0x6974617269707865,(_StringGuts)0xee00657461446e6f,
                         (_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(param_2);
      if (bVar1) {
        return 1;
      }
      return 2;
    }
  }
  _swift_bridgeObjectRelease(param_2);
  return 0;
}



/* Address: 0x1001a7d78 | FUN_1001a7d78 */

bool FUN_1001a7d78(char param_1,char param_2)

{
  return param_1 == param_2;
}



/* Address: 0x1001a7d88 | FUN_1001a7d88 */

void FUN_1001a7d88(undefined8 param_1,Hasher param_2)

{
  Swift::Hasher::_combine((ulong)param_2.unknown & 0xff,param_2);
  return;
}



/* Address: 0x1001a7dac | FUN_1001a7dac */

void FUN_1001a7dac(ulong param_1,Hasher param_2)

{
  Hasher HVar1;
  
  Swift::Hasher::init(0);
  HVar1.unknown = (undefined *)(param_1 & 0xff);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1001a7df0 | FUN_1001a7df0 */

undefined1  [16] FUN_1001a7df0(char param_1)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6974617269707865;
  if (param_1 != '\x01') {
    uVar1 = 0x6d657469;
  }
  puVar2 = (undefined1 *)0xee00657461446e6f;
  if (param_1 != '\x01') {
    puVar2 = &DAT_e400000000000000;
  }
  auVar3._8_8_ = puVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1001a7e30 | FUN_1001a7e30 */

void FUN_1001a7e30(long param_1,long param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined8 uVar3;
  KeyedEncodingContainer KVar4;
  Date DVar5;
  undefined *puVar6;
  long lVar7;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  undefined8 local_80;
  undefined1 local_52;
  undefined1 local_51;
  
  local_80 = *(undefined8 *)(param_2 + 0x10);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  uVar3 = 0xff;
  FUN_1001aa9e4(0xff,local_80,*(undefined8 *)(param_2 + 0x18),uVar1);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32900,uVar3);
  KVar4 = Swift::KeyedEncodingContainer::typeMetadataAccessor();
  lVar7 = *(long *)(KVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_container();
  local_51 = 0;
  Swift::KeyedEncodingContainer::_encode(unaff_x20,&local_51,KVar4.unknown,local_80,uVar1);
  if (unaff_x21 == 0) {
    iVar2 = *(int *)(param_2 + 0x2c);
    local_52 = 1;
    DVar5 = Foundation::Date::typeMetadataAccessor();
    puVar6 = &DAT_100fb4038;
    FUN_1000e8c70(&DAT_100fb4038,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
    Swift::KeyedEncodingContainer::_encode
              (unaff_x20 + iVar2,&local_52,KVar4.unknown,DVar5.unknown,puVar6);
  }
  (**(code **)(lVar7 + 8))((long)&local_80 - extraout_x8,KVar4.unknown);
  return;
}



/* Address: 0x1001a7fb4 | FUN_1001a7fb4 */

/* WARNING: Removing unreachable block (ram,0x0001001a8244) */
/* WARNING: Removing unreachable block (ram,0x0001001a8194) */

void FUN_1001a7fb4(undefined8 param_1,long param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  undefined *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long lVar8;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar9;
  long unaff_x21;
  long lVar10;
  long local_d0;
  long local_c8;
  long local_c0;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  long lStack_88;
  long local_80;
  long local_78;
  long local_70;
  undefined1 local_52;
  undefined1 local_51;
  
  local_b8 = param_1;
  local_a0 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_c0 = *(long *)(local_a0 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  lVar8 = (long)&local_d0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = *(long *)(param_3 + -8);
  local_a8 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  uVar5 = 0xff;
  local_78 = lVar8;
  FUN_1001aa9e4(0xff,param_3,param_4,param_5);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32900,uVar5);
  local_98 = (undefined *)Swift::KeyedDecodingContainer::typeMetadataAccessor();
  local_b0 = *(long *)(local_98 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = lVar8 - extraout_x8_01;
  lVar6 = 0;
  local_90 = param_4;
  lStack_88 = param_3;
  FUN_1001a8a18(0,param_3,param_4,param_5);
  lVar9 = *(long *)(lVar6 + -8);
  local_c8 = lVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar8 - extraout_x8_02;
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  local_70 = lVar8;
  Swift::Decoder::_container();
  lVar4 = local_80;
  lVar1 = lStack_88;
  puVar3 = local_98;
  puVar2 = local_a0;
  lVar8 = local_a8;
  lVar6 = local_b0;
  if (unaff_x21 == 0) {
    local_51 = 0;
    local_d0 = lVar9;
    Swift::KeyedDecodingContainer::_decode(local_78,lStack_88,&local_51,local_98,lStack_88,local_90)
    ;
    (**(code **)(lVar4 + 0x20))(lVar10,local_78,lVar1);
    local_52 = 1;
    puVar7 = &DAT_100fb4050;
    FUN_1000e8c70(&DAT_100fb4050,PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    lVar1 = local_70;
    Swift::KeyedDecodingContainer::_decode(lVar8,puVar2,&local_52,puVar3,puVar2,puVar7);
    (**(code **)(lVar6 + 8))(lVar1,puVar3);
    lVar1 = local_c8;
    (**(code **)(local_c0 + 0x20))(lVar10 + *(int *)(local_c8 + 0x2c),lVar8,puVar2);
    lVar6 = local_d0;
    (**(code **)(local_d0 + 0x10))(local_b8,lVar10,lVar1);
    FUN_100004594(param_2);
    (**(code **)(lVar6 + 8))(lVar10,lVar1);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1001a82b0 | FUN_1001a82b0 */

void FUN_1001a82b0(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  int iVar1;
  long lVar2;
  Date DVar3;
  
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_1,param_2);
  lVar2 = 0;
  FUN_1001a8a18(0,param_4,param_5,param_6);
  iVar1 = *(int *)(lVar2 + 0x2c);
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001001a8330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))(param_1 + iVar1,param_3,DVar3.unknown);
  return;
}



/* Address: 0x1001a8334 | FUN_1001a8334 */

void FUN_1001a8334(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  FUN_1001a7d78(*param_1,*param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18),
                *(undefined8 *)(param_3 + 0x20));
  return;
}



/* Address: 0x1001a834c | FUN_1001a834c */

void FUN_1001a834c(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7dac(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1001a835c | FUN_1001a835c */

void FUN_1001a835c(undefined8 param_1,long param_2)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7d88(param_1,*unaff_x20,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  return;
}



/* Address: 0x1001a836c | FUN_1001a836c */

void FUN_1001a836c(__int64 param_1,long param_2)

{
  Hasher HVar1;
  undefined1 *unaff_x20;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1001a7d88(HVar1.unknown,*unaff_x20,*(undefined8 *)(param_2 + 0x10),
                *(undefined8 *)(param_2 + 0x18),*(undefined8 *)(param_2 + 0x20));
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1001a83b4 | FUN_1001a83b4 */

void FUN_1001a83b4(long param_1)

{
  undefined1 *unaff_x20;
  
  FUN_1001a7df0(*unaff_x20,*(undefined8 *)(param_1 + 0x10),*(undefined8 *)(param_1 + 0x18),
                *(undefined8 *)(param_1 + 0x20));
  return;
}



/* Address: 0x1001a83c4 | FUN_1001a83c4 */

void FUN_1001a83c4(undefined1 *param_1,undefined4 param_2,undefined8 param_3,long param_4)

{
  FUN_1001a7ca8(param_2,param_3,*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18),
                *(undefined8 *)(param_4 + 0x20));
  *param_1 = (char)param_2;
  return;
}



/* Address: 0x1001a83f4 | FUN_1001a83f4 */

void FUN_1001a83f4(undefined1 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_3 + 0x10);
  FUN_1000f35d8(uVar1,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20));
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x1001a8424 | FUN_1001a8424 */

String FUN_1001a8424(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32900,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1001a8458 | FUN_1001a8458 */

String FUN_1001a8458(undefined8 param_1)

{
  String SVar1;
  
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32900,param_1);
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1001a848c | FUN_1001a848c */

void FUN_1001a848c(undefined8 param_1,long param_2)

{
  FUN_1001a7fb4(param_1,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                *(undefined8 *)(param_2 + 0x20));
  return;
}



/* Address: 0x1001a84ac | FUN_1001a84ac */

void FUN_1001a84ac(void)

{
  FUN_1001a7e30();
  return;
}



/* Address: 0x1001a84c0 | FUN_1001a84c0 */

undefined8 FUN_1001a84c0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x30);
}



/* Address: 0x1001a84c8 | FUN_1001a84c8 */

undefined8 FUN_1001a84c8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1001a8524(param_1,param_2,param_3);
  return unaff_x20;
}



/* Address: 0x1001a8524 | FUN_1001a8524 */

void FUN_1001a8524(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = 0xd000000000000011;
  *(undefined8 *)(unaff_x20 + 0x18) = 0x8000000100d97ae0;
  puVar1 = &DAT_100c326c0;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb4000;
  FUN_1000037f0(&DAT_100fb4000,&DAT_100c326f0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  puVar1 = &DAT_100c326f8;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb4008;
  FUN_1000037f0(&DAT_100fb4008,&DAT_100c321d0);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  *(undefined **)(unaff_x20 + 0x40) = puVar1;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar3 = 0x6143657275636553;
  FUN_1000d4624(0x6143657275636553,0xeb00000000656863);
  *(undefined8 *)(unaff_x20 + 0x48) = uVar3;
  *(undefined8 *)(unaff_x20 + 0x20) = param_2;
  *(undefined8 *)(unaff_x20 + 0x28) = param_3;
  *(undefined8 *)(unaff_x20 + 0x30) = param_1;
  return;
}



/* Address: 0x1001a8648 | thunk_FUN_10019d088 */

void thunk_FUN_10019d088(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100c31f10;
  _swift_getKeyPath();
  puVar2 = &DAT_100fb3f70;
  FUN_1000037f0(&DAT_100fb3f70,&DAT_100c31f40);
  _swift_allocObject();
  FUN_1000da6e0(puVar1,puVar2);
  param_1[3] = &DAT_100ebd880;
  param_1[4] = &PTR_PTR_100ebd898;
  *param_1 = puVar1;
  return;
}



/* Address: 0x1001a864c | thunk_FUN_10019d088 */

void thunk_FUN_10019d088(void)

{
  FUN_10019d088();
  return;
}



/* Address: 0x1001a8650 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  FUN_10019b694();
  return;
}



/* Address: 0x1001a8654 | FUN_1001a8654 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001001a87e0 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1001a8654(undefined8 param_1)

{
  undefined8 uVar1;
  char *pcVar2;
  undefined8 uVar3;
  long lVar4;
  Date DVar5;
  JSONEncoder *pJVar6;
  TargetProtocolConformanceDescriptor *pTVar7;
  undefined1 *puVar8;
  _StringGuts _Var9;
  char *pcVar10;
  void *pvVar11;
  long extraout_x8;
  long extraout_x8_00;
  long lVar12;
  long extraout_x8_01;
  long extraout_x12;
  long lVar13;
  long lVar14;
  long *unaff_x20;
  long unaff_x21;
  long lVar15;
  Date since;
  long lVar16;
  long lVar17;
  undefined *puVar18;
  double timeInterval;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  void *local_f0;
  code *local_e8;
  undefined1 *local_e0;
  long local_d8;
  undefined *local_d0;
  long lStack_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 auStack_88 [24];
  undefined *local_70;
  long lStack_68;
  
  lVar13 = *unaff_x20;
  local_b8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(local_b8 + -8) + 0x40));
  since.unknown = (undefined *)((long)&local_f0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar16 = (long)since.unknown - extraout_x12;
  lVar17 = *(long *)(lVar13 + 0x50);
  lVar15 = *(long *)(lVar17 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  puVar18 = (undefined *)(lVar16 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  uVar1 = *(undefined8 *)(lVar13 + 0x58);
  uVar3 = *(undefined8 *)(lVar13 + 0x60);
  lVar4 = 0;
  FUN_1001a8a18(0,lVar17,uVar1,uVar3);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = (long)puVar18 - extraout_x8_01;
  DVar5.unknown = puVar18;
  (**(code **)(lVar15 + 0x10))(puVar18,param_1,lVar17);
  timeInterval = (double)unaff_x20[6];
  Foundation::Date::get_now(DVar5);
  Foundation::Date::init(timeInterval,since);
  FUN_1001a82b0(lVar14,puVar18,lVar16,lVar17,uVar1,uVar3);
  pJVar6 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar6,*(undefined4 *)(pJVar6 + 0x30),*(undefined2 *)(pJVar6 + 0x34));
  pJVar6 = Foundation::JSONEncoder::init(pJVar6);
  pTVar7 = &TargetProtocolConformanceDescriptor_100c32800;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32800,lVar4);
  lVar13 = lVar4;
  local_d0 = (undefined *)Foundation::JSONEncoder::_encode(pJVar6,pTVar7,lVar4,pTVar7);
  if (unaff_x21 == 0) {
    local_c0 = lVar14;
    _swift_release(pJVar6);
    FUN_1000da768(auStack_88);
    lVar16 = lStack_68;
    puVar18 = local_70;
    puVar8 = auStack_88;
    local_d8 = unaff_x21;
    FUN_100004640(puVar8,local_70);
    pcVar2 = (char *)unaff_x20[4];
    pvVar11 = (void *)unaff_x20[5];
    lVar14 = unaff_x20[2];
    lVar15 = unaff_x20[3];
    local_e8 = *(code **)(lVar16 + 0x10);
    local_e0 = puVar8;
    FUN_1001037b4(local_d0,lVar13);
    pcVar10 = pcVar2;
    local_f0 = pvVar11;
    lStack_c8 = lVar13;
    (*local_e8)(local_d0,lVar13,pcVar2,pvVar11,lVar14,lVar15,puVar18,lVar16);
    lVar13 = lStack_c8;
    puVar18 = local_d0;
    if (local_d8 == 0) {
      FUN_10003bf2c(local_d0,lStack_c8);
      FUN_100004594(auStack_88);
      FUN_1000d468c(auStack_88);
      _Var9.unknown = local_70;
      FUN_100004640();
      Swift::_StringGuts::grow(0x2a,_Var9);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar20.bridgeObject = local_f0;
      SVar20.str = pcVar2;
      SVar22.bridgeObject = pvVar11;
      SVar22.str = pcVar10;
      Swift::String::append(SVar20,SVar22);
      SVar19.bridgeObject = (void *)0x8000000100d97da0;
      SVar19.str = (char *)0xd000000000000024;
      SVar23.bridgeObject = pvVar11;
      SVar23.str = pcVar10;
      Swift::String::append(SVar19,SVar23);
      FUN_1000e8c70(&DAT_100fb44d0,
                    PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8);
      lVar14 = local_c0;
      SVar20 = Swift::CustomStringConvertible::get_description();
      SVar24.bridgeObject = pvVar11;
      SVar24.str = pcVar10;
      Swift::String::append(SVar20,SVar24);
      _swift_bridgeObjectRelease(SVar20.bridgeObject);
      SVar21.bridgeObject = (void *)0xe100000000000000;
      SVar21.str = (char *)0x29;
      SVar25.bridgeObject = pvVar11;
      SVar25.str = pcVar10;
      Swift::String::append(SVar21,SVar25);
      FUN_1000d4db8(0x5b,0xe100000000000000,local_70,lStack_68);
      _swift_bridgeObjectRelease(0xe100000000000000);
      FUN_10003bf2c(puVar18,lVar13);
      (**(code **)(lVar12 + 8))(lVar14,lVar4);
    }
    else {
      (**(code **)(lVar12 + 8))(local_c0,lVar4);
      lVar13 = lStack_c8;
      puVar18 = local_d0;
      FUN_10003bf2c(local_d0,lStack_c8);
      FUN_10003bf2c(puVar18,lVar13);
    }
    FUN_100004594(auStack_88);
  }
  else {
    (**(code **)(lVar12 + 8))(lVar14,lVar4);
    _swift_release(pJVar6);
  }
  return;
}



/* Address: 0x1001a8a18 | FUN_1001a8a18 */

void FUN_1001a8a18(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001a8a24 | FUN_1001a8a24 */

/* WARNING: Removing unreachable block (ram,0x0001001a8fa4) */
/* WARNING: Removing unreachable block (ram,0x0001001a8b70) */
/* WARNING: Removing unreachable block (ram,0x0001001a8d6c) */

void FUN_1001a8a24(undefined8 param_1)

{
  String *pSVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  Optional OVar5;
  bool bVar6;
  Data DVar7;
  undefined7 extraout_var;
  char *pcVar8;
  undefined8 uVar9;
  JSONDecoder *pJVar10;
  Date DVar11;
  ulong uVar12;
  _StringGuts _Var13;
  char *pcVar14;
  Data DVar15;
  void *pvVar16;
  void *pvVar17;
  Data DVar18;
  long extraout_x8;
  Date DVar19;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar20;
  undefined8 uVar21;
  long *unaff_x20;
  long lVar22;
  long lVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  String SVar34;
  String SVar35;
  String SVar36;
  String SVar37;
  String SVar38;
  undefined1 auStack_150 [8];
  char *local_148;
  undefined *local_140;
  long local_138;
  undefined *local_130;
  long local_128;
  undefined1 auStack_90 [24];
  char *local_78;
  void *pvStack_70;
  
  lVar20 = *unaff_x20;
  local_130 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_128 = *(long *)(local_130 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_128 + 0x40));
  DVar19.unknown = auStack_150 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar2 = *(long *)(lVar20 + 0x50);
  DVar7.unknown = (undefined *)0xff;
  FUN_1001a8a18(0xff,lVar2,*(undefined8 *)(lVar20 + 0x58),*(undefined8 *)(lVar20 + 0x60));
  OVar5 = Swift::Optional::typeMetadataAccessor();
  lVar22 = *(long *)(CONCAT71(extraout_var,OVar5.value) + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar23 = (long)DVar19.unknown - extraout_x8_00;
  lVar20 = *(long *)(DVar7.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(auStack_90);
  pvVar17 = pvStack_70;
  FUN_100004640(auStack_90,local_78);
  pSVar1 = (String *)(unaff_x20 + 4);
  pcVar8 = pSVar1->str;
  uVar12 = unaff_x20[5];
  SVar25 = *pSVar1;
  SVar37 = *pSVar1;
  SVar36 = *pSVar1;
  SVar35 = *pSVar1;
  SVar26 = *pSVar1;
  pcVar14 = (char *)unaff_x20[2];
  pvVar16 = (void *)unaff_x20[3];
  (**(code **)((long)pvVar17 + 8))();
  FUN_100004594(auStack_90);
  local_140 = (undefined *)(lVar23 - extraout_x8_01);
  local_138 = lVar22;
  if (uVar12 >> 0x3c < 0xf) {
    pJVar10 = Foundation::JSONDecoder::typeMetadataAccessor();
    _swift_allocObject(pJVar10,*(undefined4 *)(pJVar10 + 0x30),*(undefined2 *)(pJVar10 + 0x34));
    pJVar10 = Foundation::JSONDecoder::init(pJVar10);
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c327d8,DVar7.unknown);
    local_148 = pcVar8;
    Foundation::JSONDecoder::_decode(pJVar10,DVar7);
    _swift_release(pJVar10);
    DVar18.unknown = DVar7.unknown;
    (**(code **)(lVar20 + 0x38))(lVar23,0,1);
    puVar4 = local_140;
    DVar11.unknown = local_140;
    DVar15.unknown = DVar7.unknown;
    (**(code **)(lVar20 + 0x20))(local_140,lVar23);
    iVar3 = *(int *)(DVar7.unknown + 0x2c);
    Foundation::Date::get_now(DVar11);
    bVar6 = Foundation::Date::>_infix((Date)(puVar4 + iVar3),DVar19,(Date)DVar15.unknown);
    (**(code **)(local_128 + 8))(DVar19.unknown,local_130);
    if (bVar6) {
      FUN_1000d468c(auStack_90);
      _Var13.unknown = local_78;
      FUN_100004640(auStack_90);
      Swift::_StringGuts::grow(0x30,_Var13);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar31.bridgeObject = DVar18.unknown;
      SVar31.str = DVar15.unknown;
      Swift::String::append(SVar36,SVar31);
      SVar25.bridgeObject = (void *)0x8000000100d97f00;
      SVar25.str = (char *)0xd00000000000002a;
      SVar32.bridgeObject = DVar18.unknown;
      SVar32.str = DVar15.unknown;
      Swift::String::append(SVar25,SVar32);
      FUN_1000e8c70(&DAT_100fb44d0,
                    PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8);
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar33.bridgeObject = DVar18.unknown;
      SVar33.str = DVar15.unknown;
      Swift::String::append(SVar26,SVar33);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      SVar27.bridgeObject = (void *)0xe100000000000000;
      SVar27.str = (char *)0x29;
      SVar34.bridgeObject = DVar18.unknown;
      SVar34.str = DVar15.unknown;
      Swift::String::append(SVar27,SVar34);
      FUN_1000d4db8(0x5b,0xe100000000000000,local_78,pvStack_70);
      FUN_10003bf18(local_148,uVar12);
      _swift_bridgeObjectRelease(0xe100000000000000);
      FUN_100004594(auStack_90);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,puVar4,lVar2);
      (**(code **)(lVar20 + 8))(puVar4,DVar7.unknown);
      uVar21 = 0;
    }
    else {
      FUN_1000d468c(auStack_90);
      pvVar16 = pvStack_70;
      pcVar8 = local_78;
      _Var13.unknown = local_78;
      FUN_100004640(auStack_90);
      Swift::_StringGuts::grow(0x1c,_Var13);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar35.bridgeObject = DVar18.unknown;
      SVar35.str = DVar15.unknown;
      Swift::String::append(SVar37,SVar35);
      SVar26.bridgeObject = (void *)0x8000000100d97ec0;
      SVar26.str = (char *)0xd000000000000017;
      SVar36.bridgeObject = DVar18.unknown;
      SVar36.str = DVar15.unknown;
      Swift::String::append(SVar26,SVar36);
      FUN_1000e8c70(&DAT_100fb44d0,
                    PTR_Foundation__Foundation__Date_>Swift__CustomStringConvertible_100ea74b8);
      SVar26 = Swift::CustomStringConvertible::get_description();
      SVar37.bridgeObject = DVar18.unknown;
      SVar37.str = DVar15.unknown;
      Swift::String::append(SVar26,SVar37);
      _swift_bridgeObjectRelease(SVar26.bridgeObject);
      FUN_1000d4db8(0x5b,0xe100000000000000);
      _swift_bridgeObjectRelease(0xe100000000000000);
      FUN_100004594(auStack_90);
      FUN_1000da768(auStack_90);
      _Var13.unknown = local_78;
      FUN_100004640(auStack_90);
      Swift::_StringGuts::grow(0x14,_Var13);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar38.bridgeObject = pvVar16;
      SVar38.str = pcVar8;
      Swift::String::append(SVar25,SVar38);
      (**(code **)((long)pvStack_70 + 0x30))
                (0x635f657275636573,0xec00000065686361,0xd000000000000012,0x8000000100d97ee0,
                 local_78,pvStack_70);
      FUN_10003bf18(local_148,uVar12);
      _swift_bridgeObjectRelease(0x8000000100d97ee0);
      FUN_100004594(auStack_90);
      (**(code **)(*(long *)(lVar2 + -8) + 0x10))(param_1,puVar4,lVar2);
      (**(code **)(lVar20 + 8))(puVar4,DVar7.unknown);
      uVar21 = 1;
    }
  }
  else {
    FUN_1000d468c(auStack_90);
    pvVar17 = pvStack_70;
    pcVar8 = local_78;
    _Var13.unknown = local_78;
    FUN_100004640(auStack_90);
    Swift::_StringGuts::grow(0x2d,_Var13);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar28.bridgeObject = pvVar16;
    SVar28.str = pcVar14;
    Swift::String::append(SVar26,SVar28);
    SVar24.bridgeObject = (void *)0x8000000100d97e20;
    SVar24.str = (char *)0x100000000000002a;
    SVar29.bridgeObject = pvVar16;
    SVar29.str = pcVar14;
    Swift::String::append(SVar24,SVar29);
    FUN_1000d4db8(0x5b,0xe100000000000000);
    _swift_bridgeObjectRelease(0xe100000000000000);
    FUN_100004594(auStack_90);
    FUN_1000da768(auStack_90);
    _Var13.unknown = local_78;
    FUN_100004640(auStack_90);
    Swift::_StringGuts::grow(0x15,_Var13);
    _swift_bridgeObjectRelease(0xe000000000000000);
    SVar30.bridgeObject = pvVar17;
    SVar30.str = pcVar8;
    Swift::String::append(SVar35,SVar30);
    (**(code **)((long)pvStack_70 + 0x30))
              (0x635f657275636573,0xec00000065686361,0xd000000000000013,0x8000000100d97e50,local_78,
               pvStack_70);
    _swift_bridgeObjectRelease(0x8000000100d97e50);
    FUN_100004594(auStack_90);
    uVar21 = 2;
  }
  uVar9 = 0;
  FUN_1001a94e0(0,lVar2);
  _swift_storeEnumTagMultiPayload(param_1,uVar9,uVar21);
  return;
}



/* Address: 0x1001a94e0 | FUN_1001a94e0 */

void FUN_1001a94e0(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001a94ec | FUN_1001a94ec */

void FUN_1001a94ec(undefined8 param_1,ulong param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long extraout_x8;
  long extraout_x8_00;
  long lVar4;
  long *unaff_x20;
  code *pcVar5;
  undefined1 *puVar6;
  long lVar7;
  long lVar8;
  
  lVar4 = *(long *)(*unaff_x20 + 0x50);
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar8 + 0x40));
  puVar6 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0;
  FUN_1001a94e0(0,lVar4);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)puVar6 - extraout_x8_00;
  FUN_1001a8a24(lVar7);
  lVar2 = lVar7;
  _swift_getEnumCaseMultiPayload(lVar7,lVar1);
  if ((int)lVar2 - 2U < 2) {
LAB_1001a9598:
    uVar3 = 1;
  }
  else {
    if ((int)lVar2 == 0) {
      (**(code **)(lVar8 + 0x20))(param_1,lVar7,lVar4);
    }
    else {
      pcVar5 = *(code **)(lVar8 + 0x20);
      (*pcVar5)(puVar6,lVar7,lVar4);
      if ((param_2 & 1) == 0) {
        (**(code **)(lVar8 + 8))(puVar6,lVar4);
        goto LAB_1001a9598;
      }
      (*pcVar5)(param_1,puVar6,lVar4);
    }
    uVar3 = 0;
  }
  (**(code **)(lVar8 + 0x38))(param_1,uVar3,1,lVar4);
  return;
}



/* Address: 0x1001a962c | FUN_1001a962c */

void FUN_1001a962c(void)

{
  long unaff_x20;
  undefined1 auStack_68 [24];
  undefined8 local_50;
  long lStack_48;
  
  FUN_1000da768(auStack_68);
  FUN_100004640(auStack_68,local_50);
  (**(code **)(lStack_48 + 0x10))
            (0,0xf000000000000000,*(undefined8 *)(unaff_x20 + 0x20),
             *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
             *(undefined8 *)(unaff_x20 + 0x18),local_50,lStack_48);
  FUN_100004594(auStack_68);
  return;
}



/* Address: 0x1001a96b8 | FUN_1001a96b8 */

void FUN_1001a96b8(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x38));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x40));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x48));
  return;
}



/* Address: 0x1001a96f4 | FUN_1001a96f4 */

void FUN_1001a96f4(void)

{
  FUN_1001a96b8();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001a9714 | FUN_1001a9714 */

void FUN_1001a9714(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x1001a971c | FUN_1001a971c */

void FUN_1001a971c(long param_1)

{
  long lVar1;
  ulong uVar2;
  long local_30;
  long lStack_28;
  
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    lStack_28 = local_30;
    _swift_initEnumMetadataMultiPayload(param_1,0,2,&local_30);
  }
  return;
}



/* Address: 0x1001a9784 | FUN_1001a9784 */

long * FUN_1001a9784(long *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar8 = *(long *)(lVar3 + 0x40);
  uVar4 = (ulong)*(uint *)(lVar3 + 0x50) & 0xff;
  if ((7 < (uint)uVar4 || 0x18 < lVar8 + 1U) || (*(uint *)(lVar3 + 0x50) & 0x100000) != 0) {
    lVar3 = *(long *)param_2;
    *param_1 = lVar3;
    _swift_retain();
    return (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
  }
  bVar1 = *(byte *)((long)param_2 + lVar8);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar7 = (uint)lVar8;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1001a9850;
      uVar6 = (uint)(byte)*param_2;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_2;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_2;
    }
    else {
      uVar6 = *param_2;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1001a9850:
  if (uVar5 == 1) {
    (**(code **)(lVar3 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + lVar8) = 1;
  }
  else {
    if (uVar5 != 0) {
      plVar2 = _memcpy(param_1,param_2,lVar8 + 1U);
      return plVar2;
    }
    (**(code **)(lVar3 + 0x10))(param_1);
    *(undefined1 *)((long)param_1 + lVar8) = 0;
  }
  return param_1;
}



/* Address: 0x1001a98a8 | FUN_1001a98a8 */

void FUN_1001a98a8(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  lVar4 = *(long *)(lVar2 + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar4);
  uVar5 = (uint)bVar1;
  if (1 < bVar1) {
    uVar3 = (uint)lVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1001a9928;
      uVar6 = (uint)(byte)*param_1;
    }
    else if (uVar6 == 2) {
      uVar6 = (uint)(ushort)*param_1;
    }
    else if (uVar6 == 3) {
      uVar6 = (uint)(uint3)*param_1;
    }
    else {
      uVar6 = *param_1;
    }
    uVar5 = uVar6 | bVar1 - 2 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 2;
  }
LAB_1001a9928:
  if (uVar5 < 2) {
                    /* WARNING: Could not recover jumptable at 0x0001001a9934. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
  return;
}



/* Address: 0x1001a993c | FUN_1001a993c */

void * FUN_1001a993c(void *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar3 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar7);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)lVar7;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1001a99c8;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1001a99c8:
  if (uVar4 == 1) {
    (**(code **)(lVar3 + 0x10))();
    *(undefined1 *)((long)param_1 + lVar7) = 1;
  }
  else {
    if (uVar4 != 0) {
      pvVar2 = _memcpy(param_1,param_2,lVar7 + 1);
      return pvVar2;
    }
    (**(code **)(lVar3 + 0x10))();
    *(undefined1 *)((long)param_1 + lVar7) = 0;
  }
  return param_1;
}



/* Address: 0x1001a9a1c | FUN_1001a9a1c */

uint * FUN_1001a9a1c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar6 = (uint)lVar7;
  bVar1 = *(byte *)((long)param_1 + lVar7);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1001a9ab8;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1001a9ab8:
  if (uVar3 < 2) {
    (**(code **)(lVar8 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + lVar7);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1001a9b4c;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1001a9b4c:
  if (uVar3 == 1) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + lVar7) = 1;
  }
  else {
    if (uVar3 != 0) {
      puVar2 = _memcpy(param_1,param_2,lVar7 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + lVar7) = 0;
  }
  return param_1;
}



/* Address: 0x1001a9bbc | FUN_1001a9bbc */

void * FUN_1001a9bbc(void *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  void *pvVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar7 = *(long *)(lVar3 + 0x40);
  bVar1 = *(byte *)((long)param_2 + lVar7);
  uVar4 = (uint)bVar1;
  if (1 < bVar1) {
    uVar6 = (uint)lVar7;
    uVar5 = 4;
    if (uVar6 < 4) {
      uVar5 = uVar6;
    }
    if ((int)uVar5 < 2) {
      if (uVar5 == 0) goto LAB_1001a9c48;
      uVar5 = (uint)(byte)*param_2;
    }
    else if (uVar5 == 2) {
      uVar5 = (uint)(ushort)*param_2;
    }
    else if (uVar5 == 3) {
      uVar5 = (uint)(uint3)*param_2;
    }
    else {
      uVar5 = *param_2;
    }
    uVar4 = uVar5 | bVar1 - 2 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar4 = uVar5;
    }
    uVar4 = uVar4 + 2;
  }
LAB_1001a9c48:
  if (uVar4 == 1) {
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + lVar7) = 1;
  }
  else {
    if (uVar4 != 0) {
      pvVar2 = _memcpy(param_1,param_2,lVar7 + 1);
      return pvVar2;
    }
    (**(code **)(lVar3 + 0x20))();
    *(undefined1 *)((long)param_1 + lVar7) = 0;
  }
  return param_1;
}



/* Address: 0x1001a9c9c | FUN_1001a9c9c */

uint * FUN_1001a9c9c(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar5 + -8);
  lVar7 = *(long *)(lVar8 + 0x40);
  uVar6 = (uint)lVar7;
  bVar1 = *(byte *)((long)param_1 + lVar7);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1001a9d38;
      uVar4 = (uint)(byte)*param_1;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_1;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_1;
    }
    else {
      uVar4 = *param_1;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1001a9d38:
  if (uVar3 < 2) {
    (**(code **)(lVar8 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + lVar7);
  uVar3 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1001a9dcc;
      uVar4 = (uint)(byte)*param_2;
    }
    else if (uVar4 == 2) {
      uVar4 = (uint)(ushort)*param_2;
    }
    else if (uVar4 == 3) {
      uVar4 = (uint)(uint3)*param_2;
    }
    else {
      uVar4 = *param_2;
    }
    uVar3 = uVar4 | bVar1 - 2 << (ulong)(uVar6 << 3 & 0x1f);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 2;
  }
LAB_1001a9dcc:
  if (uVar3 == 1) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + lVar7) = 1;
  }
  else {
    if (uVar3 != 0) {
      puVar2 = _memcpy(param_1,param_2,lVar7 + 1);
      return puVar2;
    }
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar5);
    *(byte *)((long)param_1 + lVar7) = 0;
  }
  return param_1;
}



/* Address: 0x1001a9e3c | FUN_1001a9e3c */

int FUN_1001a9e3c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  uVar1 = 0xfd;
  if ((uint)lVar5 < 4) {
    uVar1 = 1U >> (ulong)(((uint)lVar5 & 3) << 3) ^ 0xfd;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 <= uVar1) goto LAB_1001a9ef4;
  uVar7 = lVar5 + 1;
  uVar6 = (uint)uVar7;
  uVar3 = uVar6 << 3;
  if (uVar6 < 4) {
    uVar8 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - uVar1 >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar8 < 0x100) {
      if (uVar8 < 2) goto LAB_1001a9ef4;
      goto LAB_1001a9e80;
    }
    if (uVar8 >> 0x10 == 0) {
      uVar8 = (uint)*(ushort *)((long)param_1 + uVar7);
    }
    else {
      uVar8 = *(uint *)((long)param_1 + uVar7);
    }
  }
  else {
LAB_1001a9e80:
    uVar8 = (uint)*(byte *)((long)param_1 + uVar7);
  }
  if (uVar8 != 0) {
    uVar2 = 0;
    if (uVar6 < 4) {
      uVar2 = uVar8 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar6 != 0) {
      uVar3 = 4;
      if (uVar6 < 4) {
        uVar3 = uVar6;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar7 = (ulong)(byte)*param_1;
        }
        else {
          uVar7 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar7 = (ulong)(uint3)*param_1;
      }
      else {
        uVar7 = (ulong)*param_1;
      }
    }
    return uVar1 + ((uint)uVar7 | uVar2) + 1;
  }
LAB_1001a9ef4:
  iVar4 = 0x100 - (uint)*(byte *)((long)param_1 + lVar5);
  if (uVar1 <= (*(byte *)((long)param_1 + lVar5) ^ 0xff)) {
    iVar4 = 0;
  }
  return iVar4;
}



/* Address: 0x1001a9f5c | FUN_1001a9f5c */

void FUN_1001a9f5c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  undefined2 uVar4;
  byte bVar5;
  long lVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  
  lVar6 = *(long *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  uVar3 = 0xfd;
  if ((uint)lVar6 < 4) {
    uVar3 = 1U >> (ulong)(((uint)lVar6 & 3) << 3) ^ 0xfd;
  }
  sVar2 = lVar6 + 1;
  uVar8 = (uint)sVar2;
  if (uVar3 < param_3) {
    uVar1 = ((param_3 + ~(-1 << (ulong)(uVar8 << 3 & 0x1f))) - uVar3 >> (ulong)(uVar8 << 3 & 0x1f))
            + 1;
    bVar7 = 2;
    if (0xffff < uVar1) {
      bVar7 = 4;
    }
    if (uVar1 < 0x100) {
      bVar7 = 1 < uVar1;
    }
    bVar5 = 1;
    if (uVar8 < 4) {
      bVar5 = bVar7;
    }
  }
  else {
    bVar5 = 0;
  }
  if (uVar3 < param_2) {
    param_2 = param_2 + ~uVar3;
    if (uVar8 < 4) {
      iVar9 = (param_2 >> (ulong)(uVar8 << 3 & 0x1f)) + 1;
      if (uVar8 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar8 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar4 = (undefined2)uVar3;
        if (uVar8 == 3) {
          *(undefined2 *)param_1 = uVar4;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar8 == 2) {
          *(undefined2 *)param_1 = uVar4;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = param_2;
      iVar9 = 1;
    }
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar9;
      }
    }
    else if (bVar5 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar9;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar9;
    }
  }
  else {
    if (bVar5 < 2) {
      if (bVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + lVar6) = -(char)param_2;
    }
  }
  return;
}



/* Address: 0x1001aa114 | FUN_1001aa114 */

uint FUN_1001aa114(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  
  lVar5 = *(long *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  bVar1 = *(byte *)((long)param_1 + lVar5);
  uVar2 = (uint)bVar1;
  if (1 < bVar1) {
    uVar4 = (uint)lVar5;
    uVar3 = 4;
    if (uVar4 < 4) {
      uVar3 = uVar4;
    }
    if ((int)uVar3 < 2) {
      if (uVar3 == 0) {
        return uVar2;
      }
      uVar3 = (uint)(byte)*param_1;
    }
    else if (uVar3 == 2) {
      uVar3 = (uint)(ushort)*param_1;
    }
    else if (uVar3 == 3) {
      uVar3 = (uint)(uint3)*param_1;
    }
    else {
      uVar3 = *param_1;
    }
    uVar2 = uVar3 | bVar1 - 2 << (ulong)((uVar4 & 3) << 3);
    if (3 < uVar4) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 2;
  }
  return uVar2;
}



/* Address: 0x1001aa19c | FUN_1001aa19c */

void FUN_1001aa19c(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  uint uVar3;
  size_t sVar4;
  
  sVar4 = *(size_t *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (param_2 < 2) {
    *(char *)((long)param_1 + sVar4) = (char)param_2;
  }
  else {
    param_2 = param_2 - 2;
    uVar3 = (uint)sVar4;
    if (uVar3 < 4) {
      *(char *)((long)param_1 + sVar4) = (char)(param_2 >> (ulong)(uVar3 << 3 & 0x1f)) + '\x02';
      if (uVar3 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar3 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar4);
        uVar2 = (undefined2)uVar1;
        if (uVar3 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar3 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar4) = 2;
      _bzero(param_1,sVar4);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1001aa258 | FUN_1001aa258 */

void FUN_1001aa258(long param_1)

{
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  undefined *local_20;
  undefined *puStack_18;
  
  local_40 = &DAT_100c327a8;
  puStack_38 = &DAT_100c327a8;
  local_30 = PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40;
  puStack_28 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
  local_20 = puStack_28;
  puStack_18 = puStack_28;
  _swift_initClassMetadata2(param_1,0,6,&local_40,param_1 + 0x68);
  return;
}



/* Address: 0x1001aa2b8 | FUN_1001aa2b8 */

void FUN_1001aa2b8(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001aa2c4 | FUN_1001aa2c4 */

void FUN_1001aa2c4(long param_1)

{
  long lVar1;
  Date DVar2;
  ulong uVar3;
  long local_30;
  long local_28;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar3 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    DVar2 = Foundation::Date::typeMetadataAccessor();
    if (uVar3 < 0x40) {
      local_28 = *(long *)(DVar2.unknown + -8) + 0x40;
      _swift_initStructMetadata(param_1,0,2,&local_30,param_1 + 0x28);
    }
  }
  return;
}



/* Address: 0x1001aa34c | FUN_1001aa34c */

long * FUN_1001aa34c(long *param_1,long *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  Date DVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  lVar9 = *(long *)(lVar8 + 0x40);
  DVar4 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar4.unknown + -8);
  uVar5 = (ulong)*(uint *)(lVar7 + 0x50) & 0xff;
  uVar1 = lVar9 + uVar5;
  uVar3 = *(uint *)(lVar8 + 0x50) | *(uint *)(lVar7 + 0x50);
  uVar2 = uVar3 & 0xff;
  if ((uVar2 < 8 && (uVar3 & 0x100000) == 0) &&
      (uVar1 & (uVar5 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40) < 0x19) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar7 + 0x10))
              (uVar1 + (long)param_1 & ~uVar5,uVar1 + (long)param_2 & ~uVar5,DVar4.unknown);
  }
  else {
    lVar6 = *param_2;
    *param_1 = lVar6;
    param_1 = (long *)(lVar6 + ((ulong)uVar2 + 0x10 & ((ulong)uVar2 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1001aa42c | FUN_1001aa42c */

void FUN_1001aa42c(long param_1,long param_2)

{
  Date DVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  (**(code **)(lVar3 + 8))();
  lVar3 = *(long *)(lVar3 + 0x40);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
                    /* WARNING: Could not recover jumptable at 0x0001001aa47c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 8))
            (lVar3 + param_1 + uVar2 & (uVar2 ^ 0xffffffffffffffff),DVar1.unknown);
  return;
}



/* Address: 0x1001aa480 | FUN_1001aa480 */

long FUN_1001aa480(long param_1,long param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x10))();
  lVar3 = *(long *)(lVar3 + 0x40);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  lVar3 = lVar3 + uVar2;
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff),DVar1.unknown);
  return param_1;
}



/* Address: 0x1001aa4f0 | FUN_1001aa4f0 */

long FUN_1001aa4f0(long param_1,long param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x18))();
  lVar3 = *(long *)(lVar3 + 0x40);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  lVar3 = lVar3 + uVar2;
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x18))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff),DVar1.unknown);
  return param_1;
}


