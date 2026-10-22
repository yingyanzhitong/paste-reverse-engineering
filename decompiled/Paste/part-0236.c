/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1002d6ae8 | FUN_1002d6ae8 */

void FUN_1002d6ae8(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_30 = 0;
  uStack_28 = 0;
  puVar1 = &DAT_100fbcf88;
  FUN_1000037f0(&DAT_100fbcf88,&DAT_100c3e050);
  FUN_1002ccc34(param_1,0x5364657865646e69,0xee00444965726f74,&local_30,puVar1);
  return;
}



/* Address: 0x1002d6b54 | FUN_1002d6b54 */

void FUN_1002d6b54(void)

{
  FUN_100003a00(&DAT_100fbcf40,FUN_1002d6a18,&TargetProtocolConformanceDescriptor_100c3df80);
  FUN_100003a00(&DAT_100fbcf48,FUN_1002d6a18,&TargetProtocolConformanceDescriptor_100c3ded4);
  (extension_Swift)::Swift::_SwiftNewtypeWrapper::__toCustomAnyHashable();
  return;
}



/* Address: 0x1002d6bd8 | FUN_1002d6bd8 */

void FUN_1002d6bd8(void)

{
  FUN_100003a00(&DAT_100fbcf28,FUN_1002d6a18,&TargetProtocolConformanceDescriptor_100c3de98);
  return;
}



/* Address: 0x1002d6c04 | FUN_1002d6c04 */

void FUN_1002d6c04(void)

{
  FUN_100003a00(&DAT_100fbcf30,FUN_1002d6a18,&TargetProtocolConformanceDescriptor_100c3de6c);
  return;
}



/* Address: 0x1002d6c30 | FUN_1002d6c30 */

void FUN_1002d6c30(void)

{
  FUN_100003a00(&DAT_100fbcf38,FUN_1002d6a18,&TargetProtocolConformanceDescriptor_100c3df08);
  return;
}



/* Address: 0x1002d6c5c | FUN_1002d6c5c */

undefined8 FUN_1002d6c5c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1002d6cac | FUN_1002d6cac */

undefined8 FUN_1002d6cac(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fbd5a0;
  FUN_1000037f0(&DAT_100fbd5a0,&DAT_100c3de10);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1002d6cf4 | FUN_1002d6cf4 */

long FUN_1002d6cf4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 local_e8 [3];
  undefined8 local_d0;
  undefined **ppuStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  uVar1 = 0;
  FUN_1002e2f80();
  ppuStack_c8 = &PTR_PTR_100ec87d0;
  local_e8[0] = param_1;
  local_d0 = uVar1;
  _swift_defaultActor_initialize(param_5);
  *(undefined8 *)(param_5 + 200) = 2000000000000000000;
  *(undefined8 *)(param_5 + 0xc0) = 100;
  *(undefined8 *)(param_5 + 0xd8) = 3;
  *(undefined8 *)(param_5 + 0xd0) = 0;
  *(undefined1 *)(param_5 + 0xf0) = 0;
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  *(undefined8 *)(param_5 + 0xf8) = 0;
  *(undefined **)(param_5 + 0x100) = puVar2;
  *(undefined **)(param_5 + 0x108) = PTR___swiftEmptySetSingleton_100eae0e8;
  *(undefined8 *)(param_5 + 0x118) = 5;
  *(undefined8 *)(param_5 + 0x110) = 0;
  *(undefined8 *)(param_5 + 0x120) = 0;
  puVar2 = &DAT_100c3dff8;
  _swift_getKeyPath(&DAT_100c3dff8);
  puVar3 = &DAT_100fbcf58;
  FUN_1002d70c0(&DAT_100fbcf58,&DAT_100fbcf68,&TargetProtocolConformanceDescriptor_100c3e610,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar4 = &DAT_100fbcf70;
  FUN_1002d70c0(&DAT_100fbcf70,&DAT_100fbcf78,&TargetProtocolConformanceDescriptor_100c3e5e8,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_c0,puVar2,puVar3,puVar4);
  *(undefined8 *)(param_5 + 0x130) = uStack_b8;
  *(undefined8 *)(param_5 + 0x128) = local_c0;
  *(undefined8 *)(param_5 + 0x140) = uStack_a8;
  *(undefined8 *)(param_5 + 0x138) = uStack_b0;
  *(undefined8 *)(param_5 + 0x150) = uStack_98;
  *(undefined8 *)(param_5 + 0x148) = local_a0;
  *(undefined8 *)(param_5 + 0x158) = local_90;
  puVar2 = &DAT_100c3e028;
  _swift_getKeyPath(&DAT_100c3e028);
  puVar3 = puVar2;
  FUN_1002d714c();
  FUN_1002cb7e0(&local_88,puVar2,puVar3);
  *(undefined8 *)(param_5 + 0x168) = uStack_80;
  *(undefined8 *)(param_5 + 0x160) = local_88;
  *(undefined8 *)(param_5 + 0x178) = uStack_70;
  *(undefined8 *)(param_5 + 0x170) = local_78;
  *(undefined8 *)(param_5 + 0x188) = uStack_60;
  *(undefined8 *)(param_5 + 0x180) = local_68;
  *(undefined8 *)(param_5 + 400) = local_58;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar1 = 0xd000000000000010;
  FUN_1000d4624(0xd000000000000010,0x8000000100da0fa0);
  *(undefined8 *)(param_5 + 0x198) = uVar1;
  puVar2 = &DAT_100c3e058;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbcf90;
  FUN_1000037f0(&DAT_100fbcf90,&DAT_100c3e088);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_5 + 0x1a0) = puVar2;
  puVar2 = &DAT_100c3e090;
  _swift_getKeyPath();
  puVar3 = &DAT_100fbcf98;
  FUN_1000037f0(&DAT_100fbcf98,&DAT_100c3e0c0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(param_5 + 0x1a8) = puVar2;
  *(undefined8 *)(param_5 + 0x1b0) = 0;
  FUN_100076508(local_e8,param_5 + 0x70);
  FUN_100076508(param_2,param_5 + 0x98);
  *(undefined8 *)(param_5 + 0xe0) = param_3;
  *(undefined8 *)(param_5 + 0xe8) = param_4;
  return param_5;
}



/* Address: 0x1002d6f4c | FUN_1002d6f4c */

void FUN_1002d6f4c(undefined8 param_1)

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
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002d6fbc | FUN_1002d6fbc */

void FUN_1002d6fbc(undefined8 param_1)

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
  plVar3[1] = (long)FUN_100008284;
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002d702c | FUN_1002d702c */

void FUN_1002d702c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1002d7050 | FUN_1002d7050 */

void FUN_1002d7050(undefined8 param_1)

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
  FUN_10007493c(plVar3,param_1,uVar1,uVar2);
  return;
}



/* Address: 0x1002d70c0 | FUN_1002d70c0 */

void FUN_1002d70c0(long *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined *puVar1;
  undefined8 local_48;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fbcf60;
    FUN_100005c24(&DAT_100fbcf60,&DAT_100c3e020);
    FUN_100003a00(param_2,FUN_1002e35d4,param_3);
    local_48 = param_2;
    _swift_getWitnessTable(param_4,puVar1,&local_48);
    *param_1 = param_4;
  }
  return;
}



/* Address: 0x1002d714c | FUN_1002d714c */

void FUN_1002d714c(void)

{
  undefined *puVar1;
  TargetProtocolConformanceDescriptor *pTVar2;
  undefined **local_18;
  
  if (DAT_100fbcf80 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  puVar1 = &DAT_100fbcf88;
  FUN_100005c24(&DAT_100fbcf88,&DAT_100c3e050);
  local_18 = &PTR_PTR_100ec7078;
  pTVar2 = &TargetProtocolConformanceDescriptor_100c3ced4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c3ced4,puVar1,&local_18);
  DAT_100fbcf80 = pTVar2;
  return;
}



/* Address: 0x1002d71b4 | FUN_1002d71b4 */

void FUN_1002d71b4(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcfa0,&DAT_100ec8140);
  return;
}



/* Address: 0x1002d71c8 | FUN_1002d71c8 */

void FUN_1002d71c8(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100fbcfa8,&DAT_100ec81c0);
  return;
}



/* Address: 0x1002d71dc | thunk_FUN_1002d702c */

void thunk_FUN_1002d702c(void)

{
  FUN_1002d702c();
  return;
}



/* Address: 0x1002d71e0 | thunk_FUN_1002d702c */

void thunk_FUN_1002d702c(void)

{
  FUN_1002d702c();
  return;
}



/* Address: 0x1002d71e4 | thunk_FUN_1002d702c */

void thunk_FUN_1002d702c(void)

{
  FUN_1002d702c();
  return;
}



/* Address: 0x1002d71e8 | FUN_1002d71e8 */

undefined1  [16] FUN_1002d71e8(void)

{
  return ZEXT816(0x100ec8300);
}



/* Address: 0x1002d71f8 | FUN_1002d71f8 */

undefined8 * FUN_1002d71f8(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1002d722c | FUN_1002d722c */

undefined8 * FUN_1002d722c(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1002d726c | FUN_1002d726c */

void FUN_1002d726c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1002d7280 | FUN_1002d7280 */

undefined8 * FUN_1002d7280(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar1 = *(undefined1 *)(param_2 + 1);
  uVar2 = *param_1;
  *param_1 = *param_2;
  *(undefined1 *)(param_1 + 1) = uVar1;
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1002d72b8 | FUN_1002d72b8 */

int FUN_1002d72b8(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 0xfe;
  }
  uVar1 = *(byte *)(param_1 + 2) ^ 0xff;
  if (*(byte *)(param_1 + 2) < 3) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1002d7300 | FUN_1002d7300 */

void FUN_1002d7300(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 1) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (ulong)(param_2 - 0xfe);
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 9) = 1;
    }
  }
  return;
}



/* Address: 0x1002d7344 | FUN_1002d7344 */

undefined1 FUN_1002d7344(long param_1)

{
  return *(undefined1 *)(param_1 + 8);
}



/* Address: 0x1002d734c | FUN_1002d734c */

void FUN_1002d734c(long param_1,undefined1 param_2)

{
  *(undefined1 *)(param_1 + 8) = param_2;
  return;
}



/* Address: 0x1002d7354 | FUN_1002d7354 */

undefined1  [16] FUN_1002d7354(void)

{
  return ZEXT816(0x100ec8398);
}



/* Address: 0x1002d7364 | thunk_FUN_1002d71f8 */

void thunk_FUN_1002d71f8(void)

{
  FUN_1002d71f8();
  return;
}



/* Address: 0x1002d7368 | thunk_FUN_1002d9d2c */

undefined8 thunk_FUN_1002d9d2c(Date param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Date DVar2;
  double dVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  dVar3 = Foundation::Date::get_timeIntervalSince1970(param_1);
  dVar3 = (double)(long)dVar3;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e70);
    (*pcVar1)();
  }
  if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e74);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e78);
    (*pcVar1)();
  }
  DVar2.unknown = &DAT_100fbcfc8;
  FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
  dVar3 = Foundation::Date::get_timeIntervalSince1970(DVar2);
  dVar3 = (double)(long)dVar3;
  if ((ulong)ABS(dVar3) < 0x7ff0000000000000) {
    if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e80);
      (*pcVar1)();
    }
    if (dVar3 < 9.223372036854776e+18) {
      Swift::CustomStringConvertible::get_description();
      SVar4.bridgeObject = (void *)0xe100000000000000;
      SVar4.str = (char *)0x20;
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      Swift::String::append(SVar4,SVar5);
      SVar4 = Swift::CustomStringConvertible::get_description();
      SVar6.bridgeObject = param_4;
      SVar6.str = param_3;
      Swift::String::append(SVar4,SVar6);
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e84);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e7c);
  (*pcVar1)();
}



/* Address: 0x1002d736c | FUN_1002d736c */

undefined8 FUN_1002d736c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Date DVar2;
  Date DVar3;
  long extraout_x8;
  long lVar4;
  double dVar5;
  double dVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  undefined1 auStack_60 [8];
  long local_58;
  String local_50;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar4 = *(long *)(DVar2.unknown + -8);
  DVar3 = DVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar4 + 0x40));
  dVar5 = Foundation::Date::get_timeIntervalSince1970(DVar3);
  dVar5 = (double)(long)dVar5;
  if (0x7fefffffffffffff < (ulong)ABS(dVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74e8);
    (*pcVar1)();
  }
  if (dVar5 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74ec);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74f0);
    (*pcVar1)();
  }
  DVar3 = Foundation::Date::get_distantFuture(DVar3);
  dVar6 = Foundation::Date::get_timeIntervalSince1970(DVar3);
  (**(code **)(lVar4 + 8))(auStack_60 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),DVar2.unknown);
  if ((ulong)ABS(dVar6) < 0x7ff0000000000000) {
    if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74f8);
      (*pcVar1)();
    }
    if (dVar6 < 9.223372036854776e+18) {
      local_58 = (long)dVar5;
      local_50 = Swift::CustomStringConvertible::get_description();
      SVar7.bridgeObject = (void *)0xe100000000000000;
      SVar7.str = (char *)0x20;
      SVar8.bridgeObject = param_4;
      SVar8.str = param_3;
      Swift::String::append(SVar7,SVar8);
      local_58 = (long)dVar6;
      SVar7 = Swift::CustomStringConvertible::get_description();
      SVar9.bridgeObject = param_4;
      SVar9.str = param_3;
      Swift::String::append(SVar7,SVar9);
      _swift_bridgeObjectRelease(SVar7.bridgeObject);
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d74f4);
  (*pcVar1)();
}



/* Address: 0x1002d74fc | FUN_1002d74fc */

undefined8 FUN_1002d74fc(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Date DVar2;
  Date DVar3;
  Date DVar4;
  long extraout_x8;
  long lVar5;
  double dVar6;
  double dVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined auStack_70 [8];
  long local_68;
  String local_60;
  
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar5 = *(long *)(DVar2.unknown + -8);
  DVar3 = DVar2;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar5 + 0x40));
  DVar4.unknown = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  DVar3 = Foundation::Date::get_distantPast(DVar3);
  dVar6 = Foundation::Date::get_timeIntervalSince1970(DVar3);
  (**(code **)(lVar5 + 8))(DVar4.unknown,DVar2.unknown);
  if (0x7fefffffffffffff < (ulong)ABS(dVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d7680);
    (*pcVar1)();
  }
  if (dVar6 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d7684);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d7688);
    (*pcVar1)();
  }
  dVar7 = Foundation::Date::get_timeIntervalSince1970(DVar4);
  dVar7 = (double)(long)dVar7;
  if ((ulong)ABS(dVar7) < 0x7ff0000000000000) {
    if (dVar7 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d7690);
      (*pcVar1)();
    }
    if (dVar7 < 9.223372036854776e+18) {
      local_68 = (long)dVar6;
      local_60 = Swift::CustomStringConvertible::get_description();
      SVar8.bridgeObject = (void *)0xe100000000000000;
      SVar8.str = (char *)0x20;
      SVar9.bridgeObject = param_4;
      SVar9.str = param_3;
      Swift::String::append(SVar8,SVar9);
      local_68 = (long)dVar7;
      SVar8 = Swift::CustomStringConvertible::get_description();
      SVar10.bridgeObject = param_4;
      SVar10.str = param_3;
      Swift::String::append(SVar8,SVar10);
      _swift_bridgeObjectRelease(SVar8.bridgeObject);
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d7694);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d768c);
  (*pcVar1)();
}



/* Address: 0x1002d7694 | FUN_1002d7694 */

void FUN_1002d7694(long param_1)

{
  int iVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  Calendar CVar4;
  Date DVar5;
  Date DVar6;
  Calendar CVar7;
  Calendar in_x4;
  long extraout_x8;
  long lVar8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x12;
  long extraout_x12_00;
  undefined *puVar9;
  long lVar10;
  Date for;
  code *pcVar11;
  code *pcVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  Date to;
  long local_90;
  code *local_88;
  long local_80;
  undefined *local_78;
  long local_70;
  long local_68;
  
  puVar9 = &DAT_100fbcfb0;
  local_70 = param_1;
  FUN_1000037f0(&DAT_100fbcfb0,&DAT_100c3e168);
  local_78 = puVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar9 + -8) + 0x40));
  lVar8 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_80 = lVar8;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = lVar8 - extraout_x12;
  local_90 = lVar8;
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  local_68 = CONCAT71(extraout_var,CVar2.value);
  lVar10 = *(long *)(local_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  lVar8 = lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar9 = &DAT_100fbcfb8;
  CVar7.unknown = &DAT_100c3e5d0;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar9 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar14 = lVar8 - extraout_x8_01;
  CVar4 = Foundation::Calendar::typeMetadataAccessor();
  lVar13 = *(long *)(CVar4.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  puVar9 = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  DVar5 = Foundation::Date::typeMetadataAccessor();
  lVar15 = *(long *)(DVar5.unknown + -8);
  DVar6 = DVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar15 + 0x40));
  for.unknown = puVar9 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = for.unknown + -extraout_x12_00;
  Foundation::Calendar::get_current((Calendar)DVar6.unknown);
  Foundation::Date::init();
  Foundation::Calendar::startOfDay(for,CVar7);
  local_88 = *(code **)(lVar15 + 8);
  (*local_88)(for.unknown,DVar5.unknown);
  pcVar11 = *(code **)(lVar13 + 8);
  CVar7.unknown = puVar9;
  (*pcVar11)(puVar9,CVar4.unknown);
  Foundation::Calendar::get_current(CVar7);
  lVar13 = local_68;
  (**(code **)(lVar10 + 0x68))
            (lVar8,*(undefined4 *)
                    PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,local_68);
  Foundation::Calendar::_date((Component)(__int8)lVar8,1,to,false,in_x4);
  (**(code **)(lVar10 + 8))(lVar8,lVar13);
  (*pcVar11)(puVar9,CVar4.unknown);
  lVar13 = lVar14;
  (**(code **)(lVar15 + 0x30))(lVar14,1,DVar5.unknown);
  if ((int)lVar13 == 1) {
                    /* WARNING: Does not return */
    pcVar11 = (code *)SoftwareBreakpoint(1,0x1002d7a14);
    (*pcVar11)();
  }
  puVar9 = &DAT_100fbcfc0;
  FUN_100003a00(&DAT_100fbcfc0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
  bVar3 = Swift::Comparable::<__infix(to.unknown,lVar14,DVar5.unknown,puVar9);
  lVar13 = local_90;
  if (bVar3) {
    pcVar12 = *(code **)(lVar15 + 0x20);
    (*pcVar12)(local_90,to.unknown,DVar5.unknown);
    puVar9 = local_78;
    (**(code **)(lVar15 + 0x10))(lVar13 + *(int *)(local_78 + 0x30),lVar14,DVar5.unknown);
    lVar8 = local_80;
    FUN_100011090(lVar13,local_80,&DAT_100fbcfb0,&DAT_100c3e168);
    lVar10 = local_70;
    iVar1 = *(int *)(puVar9 + 0x30);
    (*pcVar12)(local_70,lVar8,DVar5.unknown);
    pcVar11 = local_88;
    (*local_88)(lVar8 + iVar1,DVar5.unknown);
    FUN_10019ffdc(lVar13,lVar8,&DAT_100fbcfb0,&DAT_100c3e168);
    iVar1 = *(int *)(puVar9 + 0x30);
    puVar9 = &DAT_100fbcfc8;
    FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
    (*pcVar12)(lVar10 + *(int *)(puVar9 + 0x24),lVar8 + iVar1,DVar5.unknown);
    (*pcVar11)(lVar8,DVar5.unknown);
    (*pcVar11)(lVar14,DVar5.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar11 = (code *)SoftwareBreakpoint(1,0x1002d7a10);
  (*pcVar11)();
}



/* Address: 0x1002d7a14 | FUN_1002d7a14 */

void FUN_1002d7a14(long param_1)

{
  int iVar1;
  code *pcVar2;
  Component CVar3;
  bool bVar4;
  undefined7 extraout_var;
  Calendar CVar5;
  Date DVar6;
  Date DVar7;
  Calendar CVar8;
  Calendar in_x4;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  undefined *puVar11;
  long lVar12;
  code *pcVar13;
  Date for;
  long lVar14;
  long lVar15;
  Date to;
  code *local_a0;
  long local_98;
  undefined *local_90;
  long local_88;
  long local_80;
  long local_78;
  long local_70;
  long lStack_68;
  
  puVar11 = &DAT_100fbcfb0;
  local_80 = param_1;
  FUN_1000037f0(&DAT_100fbcfb0,&DAT_100c3e168);
  local_90 = puVar11;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar11 + -8) + 0x40));
  lVar9 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_88 = lVar9;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = lVar9 - extraout_x12;
  local_98 = lVar9;
  CVar3 = Foundation::Calendar::Component::typeMetadataAccessor();
  lStack_68 = CONCAT71(extraout_var,CVar3.value);
  local_70 = *(long *)(lStack_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_70 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar11 = &DAT_100fbcfb8;
  CVar8.unknown = &DAT_100c3e5d0;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar11 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar15 = lVar9 - extraout_x8_01;
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  lVar12 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = (undefined *)(lVar15 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar14 = *(long *)(DVar6.unknown + -8);
  DVar7 = DVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar14 + 0x40));
  lVar10 = (long)puVar11 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  for.unknown = (undefined *)(lVar10 - extraout_x12_00);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = for.unknown + -extraout_x12_01;
  Foundation::Calendar::get_current((Calendar)DVar7.unknown);
  Foundation::Date::init();
  Foundation::Calendar::startOfDay(for,CVar8);
  local_a0 = *(code **)(lVar14 + 8);
  (*local_a0)(for.unknown,DVar6.unknown);
  pcVar13 = *(code **)(lVar12 + 8);
  CVar8.unknown = puVar11;
  (*pcVar13)(puVar11,CVar5.unknown);
  Foundation::Calendar::get_current(CVar8);
  lVar12 = lStack_68;
  lVar10 = local_70;
  (**(code **)(local_70 + 0x68))
            (lVar9,*(undefined4 *)
                    PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,lStack_68);
  Foundation::Calendar::_date((Component)(__int8)lVar9,-1,to,false,in_x4);
  (**(code **)(lVar10 + 8))(lVar9,lVar12);
  (*pcVar13)(puVar11,CVar5.unknown);
  lVar12 = lVar15;
  (**(code **)(lVar14 + 0x30))(lVar15,1,DVar6.unknown);
  lVar10 = local_78;
  if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x1002d7db8);
    (*pcVar13)();
  }
  pcVar13 = *(code **)(lVar14 + 0x20);
  (*pcVar13)(local_78,lVar15,DVar6.unknown);
  puVar11 = &DAT_100fbcfc0;
  FUN_100003a00(&DAT_100fbcfc0,PTR_typeMetadataAccessor_100ea7480,
                PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
  bVar4 = Swift::Comparable::<__infix(lVar10,to.unknown,DVar6.unknown,puVar11);
  lVar12 = local_98;
  if (bVar4) {
    (*pcVar13)(local_98,lVar10,DVar6.unknown);
    puVar11 = local_90;
    (*pcVar13)(lVar12 + *(int *)(local_90 + 0x30),to.unknown,DVar6.unknown);
    lVar10 = local_88;
    FUN_100011090(lVar12,local_88,&DAT_100fbcfb0,&DAT_100c3e168);
    lVar9 = local_80;
    iVar1 = *(int *)(puVar11 + 0x30);
    (*pcVar13)(local_80,lVar10,DVar6.unknown);
    pcVar2 = local_a0;
    (*local_a0)(lVar10 + iVar1,DVar6.unknown);
    FUN_10019ffdc(lVar12,lVar10,&DAT_100fbcfb0,&DAT_100c3e168);
    iVar1 = *(int *)(puVar11 + 0x30);
    puVar11 = &DAT_100fbcfc8;
    FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
    (*pcVar13)(lVar9 + *(int *)(puVar11 + 0x24),lVar10 + iVar1,DVar6.unknown);
    (*pcVar2)(lVar10,DVar6.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x1002d7db4);
  (*pcVar13)();
}



/* Address: 0x1002d7db8 | FUN_1002d7db8 */

void FUN_1002d7db8(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  long lVar5;
  Component CVar6;
  bool bVar7;
  undefined7 extraout_var;
  Date DVar9;
  Date DVar10;
  Set<Component> SVar11;
  DateComponents DVar12;
  Calendar CVar13;
  Calendar in_x4;
  long extraout_x8;
  long lVar14;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar15;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  code *pcVar16;
  undefined *puVar17;
  code *pcVar18;
  Date DVar19;
  code *pcVar20;
  long lVar21;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  Date local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  long local_88;
  undefined *puStack_80;
  code *local_78;
  long local_70;
  undefined *local_68;
  long lVar8;
  
  puVar15 = &DAT_100fbcfb0;
  local_d0 = param_1;
  FUN_1000037f0(&DAT_100fbcfb0,&DAT_100c3e168);
  local_e0 = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  local_d8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_e8 = lVar14;
  CVar6 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar8 = CONCAT71(extraout_var,CVar6.value);
  lVar21 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar21 + 0x40));
  lVar14 = lVar14 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar15 = &DAT_100fbcfb8;
  local_b0 = lVar14;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar15 + -8) + 0x40));
  lVar14 = lVar14 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_70 = lVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar14 = lVar14 - extraout_x12_00;
  local_90 = lVar14;
  local_68 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_78 = *(code **)(local_68 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)((long)local_78 + 0x40));
  puVar17 = (undefined *)(lVar14 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_80 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_88 = *(long *)(puStack_80 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_88 + 0x40));
  lVar14 = (long)puVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  local_98 = lVar14;
  DVar9 = Foundation::Date::typeMetadataAccessor();
  local_a0 = *(long *)(DVar9.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_a0 + 0x40));
  puVar15 = (undefined *)(lVar14 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0));
  local_b8.unknown = puVar15;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar19.unknown = puVar15 + -extraout_x12_01;
  DVar10 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar10.unknown);
  puVar15 = &DAT_100fbcfd0;
  FUN_1000037f0(&DAT_100fbcfd0,&DAT_100c3e170);
  lVar14 = *(long *)(lVar21 + 0x48);
  bVar2 = *(byte *)(lVar21 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar15 + 0x18) = 6;
  *(undefined8 *)(puVar15 + 0x10) = 3;
  puVar1 = puVar15 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
  pcVar18 = *(code **)(lVar21 + 0x68);
  local_a8 = lVar21;
  (*pcVar18)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_calendar_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7660
             ,lVar8);
  (*pcVar18)(puVar1 + lVar14,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_yearForWeekOfYear_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7620
             ,lVar8);
  lVar21 = local_90;
  (*pcVar18)(puVar1 + lVar14 * 2,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_weekOfYear_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7618
             ,lVar8);
  SVar11.unknown = puVar15;
  FUN_1002d9e84();
  _swift_setDeallocating(puVar15);
  local_c0 = lVar8;
  _swift_arrayDestroy(puVar1,3,lVar8);
  CVar13.unknown = (undefined *)0x7;
  _swift_deallocClassInstance(puVar15,0x20);
  lVar14 = local_98;
  local_c8 = DVar19.unknown;
  Foundation::Calendar::dateComponents(SVar11,DVar19,CVar13);
  lVar8 = local_a0;
  _swift_bridgeObjectRelease(SVar11.unknown);
  pcVar16 = *(code **)((long)local_78 + 8);
  DVar12.unknown = puVar17;
  (*pcVar16)(puVar17,local_68);
  Foundation::DateComponents::_get_date(DVar12);
  (**(code **)(local_88 + 8))(lVar14,puStack_80);
  pcVar20 = *(code **)(lVar8 + 0x30);
  lVar14 = lVar21;
  (*pcVar20)(lVar21,1,DVar9.unknown);
  DVar10.unknown = local_b8.unknown;
  if ((int)lVar14 == 1) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d82fc);
    (*pcVar16)();
  }
  local_78 = *(code **)(lVar8 + 0x20);
  DVar19.unknown = local_b8.unknown;
  (*local_78)(local_b8.unknown,lVar21,DVar9.unknown);
  Foundation::Calendar::get_current((Calendar)DVar19.unknown);
  lVar21 = local_b0;
  lVar14 = local_c0;
  (*pcVar18)(local_b0,*(undefined4 *)
                       PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
             ,local_c0);
  lVar5 = local_70;
  Foundation::Calendar::_date((Component)(__int8)lVar21,7,DVar10,false,in_x4);
  (**(code **)(local_a8 + 8))(lVar21,lVar14);
  (*pcVar16)(puVar17,local_68);
  lVar14 = lVar5;
  (*pcVar20)(lVar5,1,DVar9.unknown);
  if ((int)lVar14 != 1) {
    puVar15 = &DAT_100fbcfc0;
    FUN_100003a00(&DAT_100fbcfc0,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar7 = Swift::Comparable::<__infix(DVar10.unknown,lVar5,DVar9.unknown,puVar15);
    pcVar18 = *(code **)(lVar8 + 8);
    (*pcVar18)(local_c8,DVar9.unknown);
    pcVar16 = local_78;
    lVar14 = local_e8;
    if (bVar7) {
      (*local_78)(local_e8,DVar10.unknown,DVar9.unknown);
      puVar15 = local_e0;
      (**(code **)(lVar8 + 0x10))(lVar14 + *(int *)(local_e0 + 0x30),lVar5,DVar9.unknown);
      puVar4 = local_d8;
      FUN_100011090(lVar14,local_d8,&DAT_100fbcfb0,&DAT_100c3e168);
      lVar8 = local_d0;
      iVar3 = *(int *)(puVar15 + 0x30);
      (*pcVar16)(local_d0,puVar4,DVar9.unknown);
      (*pcVar18)(puVar4 + iVar3,DVar9.unknown);
      FUN_10019ffdc(lVar14,puVar4,&DAT_100fbcfb0,&DAT_100c3e168);
      iVar3 = *(int *)(puVar15 + 0x30);
      puVar15 = &DAT_100fbcfc8;
      FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
      (*pcVar16)(lVar8 + *(int *)(puVar15 + 0x24),puVar4 + iVar3,DVar9.unknown);
      (*pcVar18)(puVar4,DVar9.unknown);
      (*pcVar18)(local_70,DVar9.unknown);
      return;
    }
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d82f8);
    (*pcVar16)();
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d8300);
  (*pcVar16)();
}



/* Address: 0x1002d8300 | FUN_1002d8300 */

void FUN_1002d8300(long param_1)

{
  undefined *puVar1;
  byte bVar2;
  int iVar3;
  undefined1 *puVar4;
  Component CVar5;
  bool bVar6;
  undefined7 extraout_var;
  Date DVar8;
  Date DVar9;
  Set<Component> SVar10;
  DateComponents DVar11;
  Calendar CVar12;
  Calendar in_x4;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long extraout_x8_04;
  undefined *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  code *pcVar15;
  code *pcVar16;
  undefined *puVar17;
  long lVar18;
  code *pcVar19;
  long lVar20;
  code *pcVar21;
  Date DVar22;
  undefined1 auStack_f0 [8];
  long local_e8;
  undefined *local_e0;
  undefined1 *local_d8;
  long local_d0;
  undefined *local_c8;
  long local_c0;
  undefined4 local_b4;
  Date local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined *puStack_88;
  long local_80;
  long local_78;
  undefined *local_70;
  long local_68;
  long lVar7;
  
  puVar14 = &DAT_100fbcfb0;
  local_d0 = param_1;
  FUN_1000037f0(&DAT_100fbcfb0,&DAT_100c3e168);
  local_e0 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  local_d8 = auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (long)(auStack_f0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_e8 = lVar13;
  CVar5 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,CVar5.value);
  lVar18 = *(long *)(lVar7 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar18 + 0x40));
  lVar13 = lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100fbcfb8;
  local_a8 = lVar13;
  FUN_1000037f0(&DAT_100fbcfb8,&DAT_100c3e5d0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar14 + -8) + 0x40));
  lVar13 = lVar13 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_a0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12_00;
  local_78 = lVar13;
  local_70 = (undefined *)Foundation::Calendar::typeMetadataAccessor();
  local_80 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  puVar17 = (undefined *)(lVar13 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  puStack_88 = (undefined *)Foundation::DateComponents::typeMetadataAccessor();
  local_90 = *(long *)(puStack_88 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_90 + 0x40));
  lVar20 = (long)puVar17 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  DVar8 = Foundation::Date::typeMetadataAccessor();
  local_68 = *(long *)(DVar8.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_68 + 0x40));
  lVar13 = lVar20 - (extraout_x8_04 + 0xfU & 0xfffffffffffffff0);
  local_c0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined *)(lVar13 - extraout_x12_01);
  local_b0.unknown = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  DVar22.unknown = puVar14 + -extraout_x12_02;
  DVar9 = Foundation::Date::init();
  Foundation::Calendar::get_current((Calendar)DVar9.unknown);
  puVar14 = &DAT_100fbcfd0;
  FUN_1000037f0(&DAT_100fbcfd0,&DAT_100c3e170);
  lVar13 = *(long *)(lVar18 + 0x48);
  bVar2 = *(byte *)(lVar18 + 0x50);
  _swift_allocObject();
  *(undefined8 *)(puVar14 + 0x18) = 6;
  *(undefined8 *)(puVar14 + 0x10) = 3;
  puVar1 = puVar14 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff));
  pcVar19 = *(code **)(lVar18 + 0x68);
  local_98 = lVar18;
  (*pcVar19)(puVar1,*(undefined4 *)
                     PTR___enum_case_for_Foundation_Calendar_Component_calendar_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7660
             ,lVar7);
  (*pcVar19)(puVar1 + lVar13,
             *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_yearForWeekOfYear_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7620
             ,lVar7);
  local_b4 = *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_weekOfYear_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7618
  ;
  (*pcVar19)(puVar1 + lVar13 * 2,local_b4,lVar7);
  SVar10.unknown = puVar14;
  FUN_1002d9e84();
  _swift_setDeallocating(puVar14);
  _swift_arrayDestroy(puVar1,3,lVar7);
  CVar12.unknown = (undefined *)0x7;
  _swift_deallocClassInstance(puVar14,0x20);
  local_c8 = DVar22.unknown;
  Foundation::Calendar::dateComponents(SVar10,DVar22,CVar12);
  _swift_bridgeObjectRelease(SVar10.unknown);
  pcVar16 = *(code **)(local_80 + 8);
  DVar11.unknown = puVar17;
  (*pcVar16)(puVar17,local_70);
  lVar13 = local_78;
  Foundation::DateComponents::_get_date(DVar11);
  (**(code **)(local_90 + 8))(lVar20,puStack_88);
  pcVar21 = *(code **)(local_68 + 0x30);
  lVar18 = lVar13;
  (*pcVar21)(lVar13,1,DVar8.unknown);
  DVar9.unknown = local_b0.unknown;
  if ((int)lVar18 == 1) {
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d885c);
    (*pcVar16)();
  }
  pcVar15 = *(code **)(local_68 + 0x20);
  DVar22.unknown = local_b0.unknown;
  (*pcVar15)(local_b0.unknown,lVar13,DVar8.unknown);
  Foundation::Calendar::get_current((Calendar)DVar22.unknown);
  lVar13 = local_a8;
  (*pcVar19)(local_a8,local_b4,lVar7);
  lVar18 = local_a0;
  Foundation::Calendar::_date((Component)(__int8)lVar13,-1,DVar9,false,in_x4);
  (**(code **)(local_98 + 8))(lVar13,lVar7);
  (*pcVar16)(puVar17,local_70);
  lVar7 = lVar18;
  (*pcVar21)(lVar18,1,DVar8.unknown);
  lVar13 = local_c0;
  if ((int)lVar7 != 1) {
    (*pcVar15)(local_c0,lVar18,DVar8.unknown);
    puVar14 = &DAT_100fbcfc0;
    FUN_100003a00(&DAT_100fbcfc0,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar6 = Swift::Comparable::<__infix(lVar13,DVar9.unknown,DVar8.unknown,puVar14);
    pcVar16 = *(code **)(local_68 + 8);
    (*pcVar16)(local_c8,DVar8.unknown);
    lVar18 = local_e8;
    if (bVar6) {
      (*pcVar15)(local_e8,lVar13,DVar8.unknown);
      puVar14 = local_e0;
      (*pcVar15)(lVar18 + *(int *)(local_e0 + 0x30),DVar9.unknown,DVar8.unknown);
      puVar4 = local_d8;
      FUN_100011090(lVar18,local_d8,&DAT_100fbcfb0,&DAT_100c3e168);
      lVar13 = local_d0;
      iVar3 = *(int *)(puVar14 + 0x30);
      (*pcVar15)(local_d0,puVar4,DVar8.unknown);
      (*pcVar16)(puVar4 + iVar3,DVar8.unknown);
      FUN_10019ffdc(lVar18,puVar4,&DAT_100fbcfb0,&DAT_100c3e168);
      iVar3 = *(int *)(puVar14 + 0x30);
      puVar14 = &DAT_100fbcfc8;
      FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
      (*pcVar15)(lVar13 + *(int *)(puVar14 + 0x24),puVar4 + iVar3,DVar8.unknown);
      (*pcVar16)(puVar4,DVar8.unknown);
      return;
    }
                    /* WARNING: Does not return */
    pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d8858);
    (*pcVar16)();
  }
                    /* WARNING: Does not return */
  pcVar16 = (code *)SoftwareBreakpoint(1,0x1002d8860);
  (*pcVar16)();
}



/* Address: 0x1002d8860 | FUN_1002d8860 */

void FUN_1002d8860(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  Component CVar3;
  bool bVar4;
  undefined7 extraout_var;
  Calendar CVar5;
  Date DVar6;
  Date DVar7;
  Calendar CVar8;
  Calendar in_x4;
  long extraout_x8;
  long lVar9;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long extraout_x8_03;
  long lVar10;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long lVar11;
  undefined *puVar12;
  long lVar13;
  Date to;
  code *pcVar14;
  Date for;
  code *pcVar15;
  long lVar16;
  code *pcVar17;
  undefined1 auStack_d0 [8];
  long local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  long local_a8;
  code *local_a0;
  undefined4 local_94;
  code *local_90;
  code *local_88;
  undefined *local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  
  puVar12 = &DAT_100fbcfb0;
  local_a8 = param_1;
  FUN_1000037f0(&DAT_100fbcfb0,&DAT_100c3e168);
  local_b8 = puVar12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  local_b0 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar9 = (long)(auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_c0 = lVar9;
  CVar3 = Foundation::Calendar::Component::typeMetadataAccessor();
  local_70 = CONCAT71(extraout_var,CVar3.value);
  lVar16 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar16 + 0x40));
  lVar9 = lVar9 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar12 = &DAT_100fbcfb8;
  CVar8.unknown = &DAT_100c3e5d0;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar12 + -8) + 0x40));
  lVar10 = lVar9 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  local_78 = lVar10;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar10 = lVar10 - extraout_x12_00;
  CVar5 = Foundation::Calendar::typeMetadataAccessor();
  lVar11 = *(long *)(CVar5.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar11 + 0x40));
  puVar12 = (undefined *)(lVar10 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0));
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar13 = *(long *)(DVar6.unknown + -8);
  DVar7 = DVar6;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar13 + 0x40));
  local_68 = puVar12 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  for.unknown = puVar12 + -(extraout_x8_03 + 0xfU & 0xfffffffffffffff0) + -extraout_x12_01;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  to.unknown = for.unknown + -extraout_x12_02;
  Foundation::Calendar::get_current((Calendar)DVar7.unknown);
  Foundation::Date::init();
  Foundation::Calendar::startOfDay(for,CVar8);
  local_a0 = *(code **)(lVar13 + 8);
  (*local_a0)(for.unknown,DVar6.unknown);
  pcVar15 = *(code **)(lVar11 + 8);
  CVar8.unknown = puVar12;
  (*pcVar15)(puVar12,CVar5.unknown);
  Foundation::Calendar::get_current(CVar8);
  lVar11 = local_70;
  local_94 = *(undefined4 *)
              PTR___enum_case_for_Foundation_Calendar_Component_day_Foundation_Calendar_Component_Type___>_Foundation_Calendar_Component_100ea7628
  ;
  local_88 = *(code **)(lVar16 + 0x68);
  (*local_88)(lVar9,local_94,local_70);
  Foundation::Calendar::_date((Component)(__int8)lVar9,-0x1e,to,false,in_x4);
  local_90 = *(code **)(lVar16 + 8);
  (*local_90)(lVar9,lVar11);
  local_80 = CVar5.unknown;
  (*pcVar15)(puVar12,CVar5.unknown);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = lVar10;
  (*pcVar14)(lVar10,1,DVar6.unknown);
  if ((int)lVar11 == 1) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1002d8cdc);
    (*pcVar14)();
  }
  pcVar17 = *(code **)(lVar13 + 0x20);
  CVar8.unknown = local_68;
  local_c8 = lVar13;
  (*pcVar17)(local_68,lVar10,DVar6.unknown);
  Foundation::Calendar::get_current(CVar8);
  lVar10 = local_70;
  (*local_88)(lVar9,local_94,local_70);
  lVar11 = local_78;
  Foundation::Calendar::_date((Component)(__int8)lVar9,1,to,false,in_x4);
  (*local_90)(lVar9,lVar10);
  (*pcVar15)(puVar12,local_80);
  lVar9 = lVar11;
  (*pcVar14)(lVar11,1,DVar6.unknown);
  if ((int)lVar9 != 1) {
    puVar12 = &DAT_100fbcfc0;
    FUN_100003a00(&DAT_100fbcfc0,PTR_typeMetadataAccessor_100ea7480,
                  PTR_Foundation__Foundation__Date_>Swift__Comparable_100ea7498);
    bVar4 = Swift::Comparable::<__infix(local_68,lVar11,DVar6.unknown,puVar12);
    pcVar14 = local_a0;
    (*local_a0)(to.unknown,DVar6.unknown);
    lVar9 = local_c0;
    if (bVar4) {
      (*pcVar17)(local_c0,local_68,DVar6.unknown);
      puVar12 = local_b8;
      (**(code **)(local_c8 + 0x10))(lVar9 + *(int *)(local_b8 + 0x30),lVar11,DVar6.unknown);
      puVar2 = local_b0;
      FUN_100011090(lVar9,local_b0,&DAT_100fbcfb0,&DAT_100c3e168);
      lVar11 = local_a8;
      iVar1 = *(int *)(puVar12 + 0x30);
      (*pcVar17)(local_a8,puVar2,DVar6.unknown);
      (*pcVar14)(puVar2 + iVar1,DVar6.unknown);
      FUN_10019ffdc(lVar9,puVar2,&DAT_100fbcfb0,&DAT_100c3e168);
      iVar1 = *(int *)(puVar12 + 0x30);
      puVar12 = &DAT_100fbcfc8;
      FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
      (*pcVar17)(lVar11 + *(int *)(puVar12 + 0x24),puVar2 + iVar1,DVar6.unknown);
      (*pcVar14)(puVar2,DVar6.unknown);
      (*pcVar14)(local_78,DVar6.unknown);
      return;
    }
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x1002d8cd8);
    (*pcVar14)();
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x1002d8ce0);
  (*pcVar14)();
}



/* Address: 0x1002d8ce0 | FUN_1002d8ce0 */

undefined * FUN_1002d8ce0(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  
  puVar4 = &DAT_100fbcfd8;
  FUN_1000037f0(&DAT_100fbcfd8,&DAT_100c3e178);
  puVar5 = &DAT_100fbcfe0;
  FUN_1000037f0(&DAT_100fbcfe0,&DAT_100c3e180);
  lVar7 = *(long *)(*(long *)(puVar5 + -8) + 0x48);
  uVar6 = (ulong)*(byte *)(*(long *)(puVar5 + -8) + 0x50);
  uVar8 = uVar6 + 0x20 & (uVar6 ^ 0xffffffffffffffff);
  _swift_allocObject(puVar4,uVar8 + lVar7 * 5,uVar6 | 7);
  *(undefined8 *)(puVar4 + 0x18) = 10;
  *(undefined8 *)(puVar4 + 0x10) = 5;
  puVar1 = (undefined8 *)(puVar4 + uVar8);
  iVar3 = *(int *)(puVar5 + 0x30);
  *puVar1 = 0x7961646f54;
  puVar1[1] = &DAT_e500000000000000;
  FUN_1002d7694((undefined *)((long)puVar1 + (long)iVar3));
  puVar2 = (undefined8 *)((long)puVar1 + lVar7);
  iVar3 = *(int *)(puVar5 + 0x30);
  *puVar2 = 0x6164726574736559;
  puVar2[1] = 0xe900000000000079;
  FUN_1002d7a14((undefined *)((long)puVar2 + (long)iVar3));
  puVar2 = (undefined8 *)((long)puVar1 + lVar7 * 2);
  iVar3 = *(int *)(puVar5 + 0x30);
  *puVar2 = 0x6565772073696854;
  puVar2[1] = 0xe90000000000006b;
  FUN_1002d7db8((undefined *)((long)puVar2 + (long)iVar3));
  puVar2 = (undefined8 *)((long)puVar1 + lVar7 * 3);
  iVar3 = *(int *)(puVar5 + 0x30);
  *puVar2 = 0x656577207473614c;
  puVar2[1] = 0xe90000000000006b;
  FUN_1002d8300((undefined *)((long)puVar2 + (long)iVar3));
  puVar1 = (undefined8 *)((long)puVar1 + lVar7 * 4);
  iVar3 = *(int *)(puVar5 + 0x30);
  *puVar1 = 0x203033207473614c;
  puVar1[1] = 0xec00000073796164;
  FUN_1002d8860((undefined *)((long)puVar1 + (long)iVar3));
  return puVar4;
}



/* Address: 0x1002d8e54 | FUN_1002d8e54 */

void FUN_1002d8e54(void)

{
  undefined *self;
  ID self_00;
  
  self = &_OBJC_CLASS___NSDateFormatter;
  _objc_allocWithZone();
  self_00 = objc_stub::init((ID)self);
  objc_stub::setDateStyle_(self_00,2);
  objc_stub::setTimeStyle_(self_00,0);
  DAT_100fbcff0 = self_00;
  return;
}



/* Address: 0x1002d8e9c | FUN_1002d8e9c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002d8e9c(undefined *param_1,undefined *param_2)

{
  ulong uVar1;
  ID self;
  long lVar2;
  bool bVar3;
  undefined *puVar4;
  Date DVar5;
  NSDate *pNVar6;
  String *pSVar7;
  String *pSVar8;
  UnsafeBufferPointer<__int8> UVar9;
  uint uVar10;
  undefined *puVar11;
  _StringObject _Var12;
  long extraout_x8;
  long lVar13;
  long extraout_x8_00;
  undefined8 *puVar14;
  long extraout_x12;
  long extraout_x12_00;
  long extraout_x12_01;
  long extraout_x12_02;
  long extraout_x12_03;
  char *pcVar15;
  void *pvVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  double dVar20;
  double dVar21;
  String SVar22;
  undefined1 auVar23 [16];
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  long alStack_110 [3];
  undefined *puStack_f8;
  long local_f0;
  long local_e8;
  long local_e0;
  undefined8 *local_d8;
  ulong local_d0;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined *local_b0;
  String local_a0;
  long *local_90;
  long local_88 [3];
  
  local_b0 = param_2;
  puStack_f8 = (undefined *)Foundation::Date::typeMetadataAccessor();
  alStack_110[2] = *(long *)(puStack_f8 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(alStack_110[2] + 0x40));
  lVar13 = (long)alStack_110 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = lVar13 - extraout_x12;
  puVar4 = &DAT_100fbcfe0;
  alStack_110[1] = lVar13;
  FUN_1000037f0(&DAT_100fbcfe0,&DAT_100c3e180);
  local_c0 = *(long *)(puVar4 + -8);
  local_b8 = puVar4;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_c0 + 0x40));
  puVar14 = (undefined8 *)(lVar13 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  local_d8 = puVar14;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar19 = (long)puVar14 - extraout_x12_00;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_c8 = (undefined *)(lVar19 - extraout_x12_01);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar13 = (lVar19 - extraout_x12_01) - extraout_x12_02;
  local_e0 = lVar13;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_e8 = lVar13 - extraout_x12_03;
  FUN_1002d8ce0();
  local_d0 = *(ulong *)(puVar4 + 0x10);
  if (local_d0 != 0) {
    uVar17 = 0;
    do {
      DVar5.unknown = local_c8;
      if (*(ulong *)(puVar4 + 0x10) <= uVar17) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d94f8);
        (*pcVar18)();
      }
      FUN_100011090(puVar4 + *(long *)(local_c0 + 0x48) * uVar17 +
                             ((ulong)*(byte *)(local_c0 + 0x50) + 0x20 &
                             ((ulong)*(byte *)(local_c0 + 0x50) ^ 0xffffffffffffffff)),local_c8,
                    &DAT_100fbcfe0,&DAT_100c3e180);
      pcVar15 = &DAT_100fbcfe0;
      puVar11 = &DAT_100c3e180;
      FUN_10019ffdc(DVar5.unknown,lVar19);
      dVar20 = Foundation::Date::get_timeIntervalSince1970(DVar5);
      dVar20 = (double)(long)dVar20;
      if (0x7fefffffffffffff < (ulong)ABS(dVar20)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d94fc);
        (*pcVar18)();
      }
      if (dVar20 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d9500);
        (*pcVar18)();
      }
      if (9.223372036854776e+18 <= dVar20) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d9504);
        (*pcVar18)();
      }
      DVar5.unknown = &DAT_100fbcfc8;
      FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
      dVar21 = Foundation::Date::get_timeIntervalSince1970(DVar5);
      dVar21 = (double)(long)dVar21;
      if (0x7fefffffffffffff < (ulong)ABS(dVar21)) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d9508);
        (*pcVar18)();
      }
      if (dVar21 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d950c);
        (*pcVar18)();
      }
      if (9.223372036854776e+18 <= dVar21) {
                    /* WARNING: Does not return */
        pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d9510);
        (*pcVar18)();
      }
      local_88[0] = (long)dVar20;
      local_a0 = Swift::CustomStringConvertible::get_description();
      SVar22.bridgeObject = (void *)0xe100000000000000;
      SVar22.str = (char *)0x20;
      SVar25.bridgeObject = puVar11;
      SVar25.str = pcVar15;
      Swift::String::append(SVar22,SVar25);
      local_88[0] = (long)dVar21;
      SVar22 = Swift::CustomStringConvertible::get_description();
      SVar26.bridgeObject = puVar11;
      SVar26.str = pcVar15;
      Swift::String::append(SVar22,SVar26);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      pvVar16 = local_a0.bridgeObject;
      if ((local_a0.str == param_1) && (local_a0.bridgeObject == local_b0)) {
        _swift_bridgeObjectRelease(puVar4);
        puVar4 = pvVar16;
LAB_1002d9270:
        _swift_bridgeObjectRelease(puVar4);
        lVar2 = local_e0;
        FUN_10019ffdc(lVar19,local_e0,&DAT_100fbcfe0,&DAT_100c3e180);
        lVar13 = local_e8;
        FUN_10019ffdc(lVar2,local_e8,&DAT_100fbcfe0,&DAT_100c3e180);
        puVar14 = local_d8;
        FUN_10019ffdc(lVar13,local_d8,&DAT_100fbcfe0,&DAT_100c3e180);
        pcVar15 = (char *)*puVar14;
        pvVar16 = (void *)puVar14[1];
        FUN_100005808((long)puVar14 + (long)*(int *)(local_b8 + 0x30),&DAT_100fbcfc8,&DAT_100c3e480)
        ;
        goto LAB_1002d9328;
      }
      bVar3 = Swift::_stringCompareWithSmolCheck
                        ((_StringGuts)local_a0.str,(_StringGuts)local_a0.bridgeObject,
                         (_StringComparisonResult)(__int8)param_1);
      _swift_bridgeObjectRelease(pvVar16);
      if (bVar3) goto LAB_1002d9270;
      uVar17 = uVar17 + 1;
      FUN_100005808(lVar19,&DAT_100fbcfe0,&DAT_100c3e180);
    } while (local_d0 != uVar17);
  }
  _swift_bridgeObjectRelease(puVar4);
  puVar4 = local_b0;
  local_88[0] = 0x20;
  local_88[1] = 0xe100000000000000;
  local_90 = local_88;
  _swift_bridgeObjectRetain(local_b0);
  lVar13 = 0x7fffffffffffffff;
  FUN_1002d95dc(0x7fffffffffffffff,1,FUN_1000f64a4,&local_a0,param_1,puVar4);
  if (*(long *)(lVar13 + 0x10) == 2) {
    pSVar7 = *(String **)(lVar13 + 0x20);
    uVar17 = *(ulong *)(lVar13 + 0x28);
    if ((uVar17 ^ (ulong)pSVar7) >> 0xe == 0) goto LAB_1002d931c;
    _Var12.unknown = *(undefined **)(lVar13 + 0x30);
    uVar1 = *(ulong *)(lVar13 + 0x38);
    if ((uVar1 >> 0x3c & 1) == 0) {
      if ((uVar1 >> 0x3d & 1) == 0) {
        if (((ulong)_Var12.unknown >> 0x3c & 1) == 0) {
          UVar9 = Swift::_StringObject::get_sharedUTF8(_Var12);
        }
        else {
          UVar9.unknown = (undefined *)((uVar1 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_a0.bridgeObject = (void *)(uVar1 & 0xffffffffffffff);
        local_a0.str = _Var12.unknown;
        UVar9.unknown = (undefined *)&local_a0;
      }
      FUN_1000f59d8(UVar9.unknown,pSVar7,uVar17,_Var12.unknown,uVar1);
      uVar10 = (uint)pSVar7;
      pSVar7 = (String *)UVar9.unknown;
    }
    else {
      _swift_bridgeObjectRetain(uVar1);
      FUN_1002d99c8(pSVar7,uVar17,_Var12.unknown,uVar1,10);
      _swift_bridgeObjectRelease(uVar1);
      uVar10 = (uint)uVar17;
    }
    if ((uVar10 & 0xff) == 1) goto LAB_1002d931c;
    if (*(ulong *)(lVar13 + 0x10) < 2) {
                    /* WARNING: Does not return */
      pcVar18 = (code *)SoftwareBreakpoint(1,0x1002d9560);
      (*pcVar18)();
    }
    pSVar8 = *(String **)(lVar13 + 0x40);
    uVar17 = *(ulong *)(lVar13 + 0x48);
    _Var12.unknown = *(undefined **)(lVar13 + 0x50);
    puVar4 = *(undefined **)(lVar13 + 0x58);
    _swift_bridgeObjectRetain(puVar4);
    _swift_bridgeObjectRelease(lVar13);
    if ((uVar17 ^ (ulong)pSVar8) >> 0xe == 0) goto LAB_1002d931c;
    if (((ulong)puVar4 >> 0x3c & 1) == 0) {
      if (((ulong)puVar4 >> 0x3d & 1) == 0) {
        if (((ulong)_Var12.unknown >> 0x3c & 1) == 0) {
          UVar9 = Swift::_StringObject::get_sharedUTF8(_Var12);
        }
        else {
          UVar9.unknown = (undefined *)(((ulong)puVar4 & 0xfffffffffffffff) + 0x20);
        }
      }
      else {
        local_a0.bridgeObject = (void *)((ulong)puVar4 & 0xffffffffffffff);
        local_a0.str = _Var12.unknown;
        UVar9.unknown = (undefined *)&local_a0;
      }
      FUN_1000f59d8(UVar9.unknown,pSVar8,uVar17,_Var12.unknown,puVar4);
      uVar10 = (uint)pSVar8;
      pSVar8 = (String *)UVar9.unknown;
      puVar11 = _Var12.unknown;
    }
    else {
      puVar11 = puVar4;
      FUN_1002d99c8(pSVar8,uVar17,_Var12.unknown,puVar4,10);
      uVar10 = (uint)uVar17;
    }
    _swift_bridgeObjectRelease(puVar4);
    lVar19 = local_f0;
    lVar13 = alStack_110[1];
    if ((uVar10 & 0xff) != 1) {
      Foundation::Date::init((double)(long)pSVar7);
      DVar5 = Foundation::Date::init((double)(long)pSVar8);
      if (DAT_100fbcfe8 != -1) {
        DVar5.unknown = (undefined *)&DAT_100fbcfe8;
        _swift_once(&DAT_100fbcfe8,FUN_1002d8e54);
      }
      self = DAT_100fbcff0;
      pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
      objc_stub::stringFromDate_(self);
      local_a0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      DVar5.unknown = (undefined *)0x206f7420;
      SVar24.bridgeObject = &DAT_e400000000000000;
      SVar24.str = (char *)0x206f7420;
      SVar27.bridgeObject = puVar11;
      SVar27.str = (char *)pNVar6;
      Swift::String::append(SVar24,SVar27);
      pNVar6 = Foundation::Date::_bridgeToObjectiveC(DVar5);
      objc_stub::stringFromDate_(self);
      SVar22 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
      SVar28.bridgeObject = puVar11;
      SVar28.str = (char *)pNVar6;
      Swift::String::append(SVar22,SVar28);
      _swift_bridgeObjectRelease(SVar22.bridgeObject);
      puVar4 = puStack_f8;
      pcVar15 = local_a0.str;
      pvVar16 = local_a0.bridgeObject;
      pcVar18 = *(code **)(alStack_110[2] + 8);
      (*pcVar18)(lVar19,puStack_f8);
      (*pcVar18)(lVar13,puVar4);
      goto LAB_1002d9328;
    }
  }
  else {
LAB_1002d931c:
    _swift_bridgeObjectRelease();
  }
  pcVar15 = (char *)0x0;
  pvVar16 = (void *)0x0;
LAB_1002d9328:
  auVar23._8_8_ = pvVar16;
  auVar23._0_8_ = pcVar15;
  return auVar23;
}



/* Address: 0x1002d95dc | FUN_1002d95dc */

UnsafeMutablePointer
FUN_1002d95dc(long param_1,ulong param_2,code *param_3,undefined8 param_4,char *param_5,
             void *param_6)

{
  long *plVar1;
  code *pcVar2;
  ulong uVar3;
  Index after;
  Substring SVar4;
  undefined *puVar5;
  undefined *puVar6;
  Index IVar7;
  void *pvVar9;
  uint uVar10;
  ulong uVar11;
  Index IVar12;
  long unaff_x21;
  ulong uVar13;
  Character CVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  undefined *local_80;
  char *pcVar8;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d9960);
    (*pcVar2)();
  }
  uVar11 = (ulong)param_6 >> 0x38 & 0xf;
  uVar10 = (uint)((ulong)param_5 >> 0x20);
  if (param_1 != 0) {
    uVar13 = (ulong)param_5 & 0xffffffffffff;
    if (((ulong)param_6 & 0x2000000000000000) != 0) {
      uVar13 = uVar11;
    }
    if (uVar13 != 0) {
      uVar10 = uVar10 >> 0x1b & 1;
      if (((ulong)param_6 & 0x1000000000000000) == 0) {
        uVar10 = 1;
      }
      uVar11 = 7;
      if (uVar10 == 0) {
        uVar11 = 0xb;
      }
      SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
      uVar13 = uVar13 * 4;
      IVar12.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
      local_80 = PTR___swiftEmptyArrayStorage_100eae0d8;
LAB_1002d9664:
      uVar11 = (ulong)IVar12.cmsgPointer.unknown >> 0xe;
      after.cmsgPointer.unknown = IVar12.cmsgPointer.unknown;
      if (uVar11 != uVar13) {
        do {
          SVar15.bridgeObject = param_6;
          SVar15.str = param_5;
          CVar14 = Swift::String::get_subscript(after,SVar15);
          uVar3 = 0;
          (*param_3)();
          if (unaff_x21 != 0) {
            _swift_bridgeObjectRelease(local_80);
            _swift_bridgeObjectRelease(param_6);
            _swift_bridgeObjectRelease(CVar14.bridgeObject);
            return (UnsafeMutablePointer)after.cmsgPointer.unknown.unknown;
          }
          _swift_bridgeObjectRelease(CVar14.bridgeObject);
          if ((uVar3 & 1) == 0) {
            SVar16.bridgeObject = param_6;
            SVar16.str = param_5;
            after = Swift::String::index(after,SVar16);
          }
          else {
            if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar11) || ((param_2 & 1) == 0))
            goto LAB_1002d9720;
            SVar17.bridgeObject = param_6;
            SVar17.str = param_5;
            after = Swift::String::index(after,SVar17);
            IVar12 = after;
          }
          uVar11 = (ulong)after.cmsgPointer.unknown >> 0xe;
          if (uVar11 == uVar13) break;
        } while( true );
      }
      goto LAB_1002d98ac;
    }
  }
  uVar13 = (ulong)param_5 & 0xffffffffffff;
  if (((ulong)param_6 & 0x2000000000000000) != 0) {
    uVar13 = uVar11;
  }
  if ((uVar13 == 0) && ((param_2 & 1) != 0)) {
    _swift_bridgeObjectRelease(param_6);
    return (UnsafeMutablePointer)PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  uVar10 = uVar10 >> 0x1b & 1;
  if (((ulong)param_6 & 0x1000000000000000) == 0) {
    uVar10 = 1;
  }
  uVar11 = 7;
  if (uVar10 == 0) {
    uVar11 = 0xb;
  }
  SVar20.str = (char *)(uVar11 | uVar13 << 0x10);
  SVar20.bridgeObject = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)0xf,SVar20);
  puVar6 = (undefined *)0x0;
  FUN_1002dabb0(0,1,1,PTR___swiftEmptyArrayStorage_100eae0d8);
  uVar11 = *(ulong *)(puVar6 + 0x10);
  local_80 = puVar6;
  if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar11) {
    local_80 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
    FUN_1002dabb0(local_80,uVar11 + 1,1,puVar6);
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x28) = SVar20.str;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = param_5;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
LAB_1002d98c0:
  _swift_bridgeObjectRelease(param_6);
  return (UnsafeMutablePointer)local_80;
LAB_1002d9720:
  if (uVar11 < (ulong)IVar12.cmsgPointer.unknown >> 0xe) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d99c8);
    (*pcVar2)();
  }
  SVar18.bridgeObject = param_5;
  SVar18.str = (char *)after.cmsgPointer.unknown;
  IVar7.cmsgPointer.unknown = after.cmsgPointer.unknown;
  pcVar8 = param_5;
  pvVar9 = param_6;
  SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar18);
  puVar6 = local_80;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar6 & 1) == 0) {
    plVar1 = (long *)(local_80 + 0x10);
    local_80 = (undefined *)0x0;
    FUN_1002dabb0(0,*plVar1 + 1,1);
  }
  uVar11 = *(ulong *)(local_80 + 0x10);
  if (*(ulong *)(local_80 + 0x18) >> 1 <= uVar11) {
    puVar6 = (undefined *)(ulong)(1 < *(ulong *)(local_80 + 0x18));
    FUN_1002dabb0(puVar6,uVar11 + 1,1,local_80);
    local_80 = puVar6;
  }
  *(ulong *)(local_80 + 0x10) = uVar11 + 1;
  *(undefined **)(local_80 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
  *(UnsafeMutablePointer *)(local_80 + uVar11 * 0x20 + 0x28) = IVar7.cmsgPointer.unknown;
  *(char **)(local_80 + uVar11 * 0x20 + 0x30) = pcVar8;
  *(void **)(local_80 + uVar11 * 0x20 + 0x38) = pvVar9;
  SVar19.bridgeObject = param_6;
  SVar19.str = param_5;
  IVar12 = Swift::String::index(after,SVar19);
  if (*(long *)(local_80 + 0x10) == param_1) goto LAB_1002d98ac;
  goto LAB_1002d9664;
LAB_1002d98ac:
  if (((ulong)IVar12.cmsgPointer.unknown >> 0xe != uVar13) || ((param_2 & 1) == 0)) {
    if ((ulong)IVar12.cmsgPointer.unknown >> 0xe <= uVar13) {
      SVar21.bridgeObject = param_5;
      SVar21.str = SVar20.str;
      pvVar9 = param_6;
      SVar4 = Swift::String::get_subscript((Range<Index>)IVar12.cmsgPointer.unknown,SVar21);
      _swift_bridgeObjectRelease(param_6);
      puVar6 = local_80;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar5 = local_80;
      if (((ulong)puVar6 & 1) == 0) {
        puVar5 = (undefined *)0x0;
        FUN_1002dabb0(0,*(long *)(local_80 + 0x10) + 1,1,local_80);
      }
      uVar11 = *(ulong *)(puVar5 + 0x10);
      puVar6 = puVar5;
      if (*(ulong *)(puVar5 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar5 + 0x18));
        FUN_1002dabb0(puVar6,uVar11 + 1,1,puVar5);
      }
      *(ulong *)(puVar6 + 0x10) = uVar11 + 1;
      *(undefined **)(puVar6 + uVar11 * 0x20 + 0x20) = SVar4.unknown;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x28) = SVar20.str;
      *(char **)(puVar6 + uVar11 * 0x20 + 0x30) = param_5;
      *(void **)(puVar6 + uVar11 * 0x20 + 0x38) = pvVar9;
      return (UnsafeMutablePointer)puVar6;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1002d9984);
    (*pcVar2)();
  }
  goto LAB_1002d98c0;
}



/* Address: 0x1002d99c8 | FUN_1002d99c8 */

/* WARNING: Removing unreachable block (ram,0x0001002d9ac8) */

undefined1  [16]
FUN_1002d99c8(undefined *param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  _StringObject _Var2;
  UnsafeBufferPointer<__int8> UVar3;
  void *pvVar4;
  void *pvVar5;
  String SVar6;
  undefined1 auVar7 [16];
  undefined *local_50;
  ulong uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_50 = param_1;
  uStack_48 = param_2;
  local_40 = param_3;
  uStack_38 = param_4;
  FUN_1002da12c();
  _swift_bridgeObjectRetain(param_4);
  SVar6 = Swift::String::_init
                    (&local_50,PTR___type_metadata_for_Swift_Substring_100eaca98,
                     PTR___protocol_witness_table_for_Swift_Substring___Swift_LosslessStringConvertible_in_Swift_100eacac8
                     ,param_1);
  pvVar4 = SVar6.bridgeObject;
  puVar1 = local_50;
  if (((ulong)pvVar4 >> 0x3c & 1) != 0) {
    FUN_1002d9ad4();
    _swift_bridgeObjectRelease(pvVar4);
    puVar1 = local_50;
    pvVar4 = SVar6.bridgeObject;
  }
  local_50 = SVar6.str;
  pvVar5 = SVar6.bridgeObject;
  if (((ulong)pvVar4 >> 0x3d & 1) == 0) {
    if (((ulong)local_50 >> 0x3c & 1) == 0) {
      pvVar4 = pvVar5;
      _Var2.unknown = local_50;
      local_50 = puVar1;
      UVar3 = Swift::_StringObject::get_sharedUTF8(_Var2);
    }
    else {
      UVar3.unknown = (undefined *)(((ulong)pvVar5 & 0xfffffffffffffff) + 0x20);
      pvVar4 = (void *)((ulong)local_50 & 0xffffffffffff);
      local_50 = puVar1;
    }
    FUN_1000c43a8(UVar3.unknown);
  }
  else {
    pvVar4 = (void *)((ulong)pvVar5 >> 0x38 & 0xf);
    uStack_48 = (ulong)pvVar5 & 0xffffffffffffff;
    UVar3.unknown = (undefined *)&local_50;
    FUN_1000c43a8(UVar3.unknown,pvVar4,param_5);
  }
  _swift_bridgeObjectRelease(pvVar5);
  auVar7._8_8_ = pvVar4;
  auVar7._0_8_ = UVar3.unknown;
  return auVar7;
}



/* Address: 0x1002d9ad4 | FUN_1002d9ad4 */

undefined1  [16]
FUN_1002d9ad4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  
  uVar1 = 0xf;
  FUN_1000102ac(0xf,param_1,param_2);
  FUN_1002d9b24();
  _swift_bridgeObjectRelease(param_4);
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = uVar1;
  return auVar2;
}



/* Address: 0x1002d9b24 | FUN_1002d9b24 */

String FUN_1002d9b24(Index param_1,Index param_2,_StringObject param_3,ulong param_4)

{
  code *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  UnsafeBufferPointer<__int8> UVar5;
  Index IVar6;
  ulong uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  undefined *local_68;
  ulong uStack_60;
  undefined8 local_50;
  
  if ((param_4 >> 0x3c & 1) != 0) {
    IVar6.cmsgPointer.unknown = param_1.cmsgPointer.unknown;
    ppuVar2 = (undefined **)
              Swift::Substring::UTF8View::distance
                        (param_1,param_2,(UTF8View)param_1.cmsgPointer.unknown);
    ppuVar3 = (undefined **)PTR___swiftEmptyArrayStorage_100eae0d8;
    if (ppuVar2 != (undefined **)0x0) {
      ppuVar3 = ppuVar2;
      FUN_1002d9c68(ppuVar2,0);
      ppuVar4 = &local_68;
      IVar6.cmsgPointer.unknown = (UnsafeMutablePointer)(UnsafeMutablePointer)ppuVar2;
      FUN_1000742b4(ppuVar4,ppuVar3 + 4,ppuVar2,param_1.cmsgPointer.unknown,
                    param_2.cmsgPointer.unknown,param_3.unknown,param_4);
      _swift_bridgeObjectRetain(param_4);
      _swift_bridgeObjectRelease(local_50);
      if (ppuVar4 != ppuVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9c24);
        (*pcVar1)();
      }
    }
    SVar8.str = ppuVar3[2];
    SVar8.bridgeObject = (void *)IVar6.cmsgPointer.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((UnsafeBufferPointer<__int8>)(ppuVar3 + 4),SVar8);
    _swift_release(ppuVar3);
    return SVar8;
  }
  uVar7 = (ulong)param_1.cmsgPointer.unknown >> 0x10;
  if ((param_4 >> 0x3d & 1) != 0) {
    uStack_60 = param_4 & 0xffffffffffffff;
    SVar10.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
    SVar10.bridgeObject = param_3.unknown;
    local_68 = param_3.unknown;
    SVar8 = Swift::String::_uncheckedFromUTF8((undefined *)((long)&local_68 + uVar7),SVar10);
    return SVar8;
  }
  if (((ulong)param_3.unknown >> 0x3c & 1) == 0) {
    UVar5 = Swift::_StringObject::get_sharedUTF8(param_3);
    if (UVar5.unknown == (undefined *)0x0) {
      UVar5.unknown = (undefined *)0x0;
      goto LAB_1002d9b5c;
    }
  }
  else {
    UVar5.unknown = (undefined *)((param_4 & 0xfffffffffffffff) + 0x20);
  }
  UVar5.unknown = UVar5.unknown + uVar7;
LAB_1002d9b5c:
  SVar9.str = (char *)(((ulong)param_2.cmsgPointer.unknown >> 0x10) - uVar7);
  SVar9.bridgeObject = param_3.unknown;
  SVar8 = Swift::String::_uncheckedFromUTF8(UVar5,SVar9);
  return SVar8;
}



/* Address: 0x1002d9c68 | FUN_1002d9c68 */

undefined * FUN_1002d9c68(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fbd000;
    FUN_1000037f0(&DAT_100fbd000,&DAT_100c3e190);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x1002d9cd8 | FUN_1002d9cd8 */

bool FUN_1002d9cd8(undefined8 *param_1,long *param_2)

{
  bool bVar1;
  
  if ((undefined *)*param_1 != (undefined *)*param_2 ||
      (undefined *)param_1[1] != (undefined *)param_2[1]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)*param_1,(undefined *)param_1[1],
                       (_StringComparisonResult)(__int8)(undefined *)*param_2);
    return bVar1;
  }
  return true;
}



/* Address: 0x1002d9d2c | FUN_1002d9d2c */

undefined8 FUN_1002d9d2c(Date param_1,undefined8 param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  Date DVar2;
  double dVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  dVar3 = Foundation::Date::get_timeIntervalSince1970(param_1);
  dVar3 = (double)(long)dVar3;
  if (0x7fefffffffffffff < (ulong)ABS(dVar3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e70);
    (*pcVar1)();
  }
  if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e74);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e78);
    (*pcVar1)();
  }
  DVar2.unknown = &DAT_100fbcfc8;
  FUN_1000037f0(&DAT_100fbcfc8,&DAT_100c3e480);
  dVar3 = Foundation::Date::get_timeIntervalSince1970(DVar2);
  dVar3 = (double)(long)dVar3;
  if ((ulong)ABS(dVar3) < 0x7ff0000000000000) {
    if (dVar3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e80);
      (*pcVar1)();
    }
    if (dVar3 < 9.223372036854776e+18) {
      Swift::CustomStringConvertible::get_description();
      SVar4.bridgeObject = (void *)0xe100000000000000;
      SVar4.str = (char *)0x20;
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      Swift::String::append(SVar4,SVar5);
      SVar4 = Swift::CustomStringConvertible::get_description();
      SVar6.bridgeObject = param_4;
      SVar6.str = param_3;
      Swift::String::append(SVar4,SVar6);
      _swift_bridgeObjectRelease(SVar4.bridgeObject);
      return 3;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e84);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1002d9e7c);
  (*pcVar1)();
}



/* Address: 0x1002d9e84 | FUN_1002d9e84 */

undefined * FUN_1002d9e84(long param_1)

{
  long lVar1;
  Component CVar2;
  bool bVar3;
  undefined7 extraout_var;
  _SetStorage *this;
  undefined *puVar5;
  ulong uVar6;
  long extraout_x8;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long extraout_x12;
  long extraout_x12_00;
  __int64 seed;
  undefined1 *puVar11;
  long lVar12;
  code *pcVar13;
  undefined *puVar14;
  undefined *puVar15;
  code *pcVar16;
  long lVar17;
  undefined1 auStack_a0 [8];
  undefined *local_98;
  long local_90;
  long local_88;
  undefined *local_80;
  code *local_78;
  undefined *local_70;
  long local_68;
  long lVar4;
  
  CVar2 = Foundation::Calendar::Component::typeMetadataAccessor();
  lVar4 = CONCAT71(extraout_var,CVar2.value);
  lVar12 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  puVar11 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_68 = (long)puVar11 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  local_88 = ((long)puVar11 - extraout_x12) - extraout_x12_00;
  puVar14 = *(undefined **)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptySetSingleton_100eae0e8;
  if (puVar14 != (undefined *)0x0) {
    this = (_SetStorage *)&DAT_100fbd008;
    FUN_1000037f0(&DAT_100fbd008,&DAT_100c3e198);
    puVar5 = puVar14;
    Swift::_SetStorage::_allocate(this,(__int64)puVar14);
    puVar15 = (undefined *)0x0;
    local_70 = puVar5 + 0x38;
    local_90 = param_1 + ((ulong)*(byte *)(lVar12 + 0x50) + 0x20 &
                         ((ulong)*(byte *)(lVar12 + 0x50) ^ 0xffffffffffffffff));
    lVar17 = *(long *)(lVar12 + 0x48);
    pcVar16 = *(code **)(lVar12 + 0x10);
    local_98 = puVar14;
    do {
      lVar1 = local_88;
      (*pcVar16)(local_88,local_90 + lVar17 * (long)puVar15,lVar4);
      local_78 = *(code **)(lVar12 + 0x20);
      (*local_78)(local_68,lVar1,lVar4);
      seed = *(__int64 *)(puVar5 + 0x28);
      FUN_100003a00(&DAT_100fbd010,PTR_typeMetadataAccessor_100ea7668,
                    PTR_Foundation__Foundation__Calendar__Component_>Swift__Hashable_100ea7678);
      uVar6 = Swift::Hashable::_rawHashValue(seed);
      uVar10 = -1L << ((ulong)(byte)puVar5[0x20] & 0x3f);
      uVar6 = uVar6 & (uVar10 ^ 0xffffffffffffffff);
      uVar7 = uVar6 >> 6;
      uVar8 = *(ulong *)(local_70 + uVar7 * 8);
      uVar9 = 1L << (uVar6 & 0x3f);
      if ((uVar9 & uVar8) != 0) {
        local_80 = puVar15;
        do {
          (*pcVar16)(puVar11,*(long *)(puVar5 + 0x30) + uVar6 * lVar17,lVar4);
          puVar14 = &DAT_100fbd018;
          FUN_100003a00(&DAT_100fbd018,PTR_typeMetadataAccessor_100ea7668,
                        PTR_Foundation__Foundation__Calendar__Component_>Swift__Equatable_100ea7680)
          ;
          bVar3 = Swift::Equatable::___infix(puVar11,local_68,lVar4,puVar14);
          pcVar13 = *(code **)(lVar12 + 8);
          (*pcVar13)(puVar11,lVar4);
          if (bVar3) {
            (*pcVar13)(local_68,lVar4);
            puVar14 = local_98;
            puVar15 = local_80;
            goto LAB_1002d9f90;
          }
          uVar6 = uVar6 + 1 & ~uVar10;
          uVar7 = uVar6 >> 6;
          uVar8 = *(ulong *)(local_70 + uVar7 * 8);
          uVar9 = 1L << (uVar6 & 0x3f);
          puVar14 = local_98;
          puVar15 = local_80;
        } while ((uVar9 & uVar8) != 0);
      }
      *(ulong *)(local_70 + uVar7 * 8) = uVar9 | uVar8;
      (*local_78)(*(long *)(puVar5 + 0x30) + uVar6 * lVar17,local_68,lVar4);
      if (SCARRY8(*(long *)(puVar5 + 0x10),1)) {
                    /* WARNING: Does not return */
        pcVar16 = (code *)SoftwareBreakpoint(1,0x1002da12c);
        (*pcVar16)();
      }
      *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + 1;
LAB_1002d9f90:
      puVar15 = puVar15 + 1;
    } while (puVar15 != puVar14);
  }
  return puVar5;
}



/* Address: 0x1002da12c | FUN_1002da12c */

void FUN_1002da12c(void)

{
  undefined *puVar1;
  
  if (DAT_100fbcff8 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Substring_>Swift__Sequence_100eacaa8,
             PTR___type_metadata_for_Swift_Substring_100eaca98);
  DAT_100fbcff8 = puVar1;
  return;
}



/* Address: 0x1002da16c | FUN_1002da16c */

undefined * FUN_1002da16c(uint param_1,undefined *param_2)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  CharacterSet CVar6;
  code *pcVar7;
  CharacterSet CVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  void *pvVar13;
  long extraout_x8;
  char *pcVar14;
  ulong uVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined *puVar19;
  String SVar20;
  ulong local_e0;
  undefined *local_d8;
  undefined *local_d0;
  undefined *local_c8;
  undefined *local_c0;
  uint local_b4;
  long local_b0;
  ulong local_a8;
  CharacterSet local_a0;
  long local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  
  local_b4 = param_1;
  puStack_90 = (undefined *)Foundation::CharacterSet::typeMetadataAccessor();
  local_98 = *(long *)(puStack_90 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_98 + 0x40));
  local_a0.unknown = (undefined *)((long)&local_e0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_68 = PTR___swiftEmptySetSingleton_100eae0e8;
  local_a8 = *(ulong *)(param_2 + 0x10);
  if (local_a8 != 0) {
    uVar17 = 0;
    puVar11 = param_2 + 0x38;
    local_b0 = -local_a8;
    local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_d8 = puVar11;
    local_d0 = param_2;
LAB_1002da208:
    local_c0 = local_68;
    uVar18 = uVar17;
    if (uVar17 <= local_a8) {
      uVar18 = local_a8;
    }
    pcVar14 = puVar11 + uVar17 * 0x20;
    uVar17 = uVar17 + 1;
    lVar16 = local_b0;
    uVar9 = local_a8;
    do {
      if (uVar17 - uVar18 == 1) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002da778);
        (*pcVar7)();
      }
      cVar4 = *pcVar14;
      if (cVar4 != '\x01') {
        uVar15 = *(ulong *)(pcVar14 + -0x18);
        uVar3 = *(undefined8 *)(pcVar14 + -0x10);
        puVar19 = *(undefined **)(pcVar14 + -8);
        local_80 = uVar3;
        puStack_78 = puVar19;
        FUN_100008310(uVar15,uVar3,puVar19,cVar4);
        FUN_100008310(uVar15,uVar3,puVar19,cVar4);
        CVar8.unknown = puVar19;
        _swift_bridgeObjectRetain();
        CVar6.unknown = local_a0.unknown;
        Foundation::CharacterSet::get_whitespaces(CVar8);
        FUN_1002da77c();
        SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar6);
        pvVar13 = SVar20.bridgeObject;
        (**(code **)(local_98 + 8))(CVar6.unknown,puStack_90);
        FUN_100008320(uVar15,uVar3,puVar19,cVar4);
        _swift_bridgeObjectRelease(pvVar13);
        uVar9 = (ulong)SVar20.str & 0xffffffffffff;
        if (((ulong)pvVar13 & 0x2000000000000000) != 0) {
          uVar9 = (ulong)pvVar13 >> 0x38 & 0xf;
        }
        if ((uVar9 != 0) &&
           (uVar9 = uVar15, FUN_1002da7bc(uVar15,uVar3,puVar19,local_c0), (uVar9 & 1) == 0))
        goto code_r0x0001002da344;
        FUN_100008320(uVar15,uVar3,puVar19,cVar4);
        FUN_100008320(uVar15,uVar3,puVar19,cVar4);
        lVar16 = local_b0;
        uVar9 = local_a8;
      }
      uVar17 = uVar17 + 1;
      pcVar14 = pcVar14 + 0x20;
      param_2 = local_d0;
      if (lVar16 + uVar17 == 1) goto LAB_1002da438;
    } while( true );
  }
  local_c8 = PTR___swiftEmptyArrayStorage_100eae0d8;
  uVar9 = local_a8;
LAB_1002da438:
  pcVar14 = param_2 + uVar9 * 0x20 + 0x18;
  uVar17 = uVar9;
  do {
    uVar18 = uVar17;
    uVar17 = uVar18;
    if (uVar18 == 0) break;
    uVar17 = uVar18 - 1;
    cVar4 = *pcVar14;
    pcVar14 = pcVar14 + -0x20;
  } while (cVar4 == '\x01');
  puVar19 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar11 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar9 != 0) {
    uVar15 = 0;
    param_2 = param_2 + 0x38;
    local_e0 = uVar9 - 1;
    local_d8 = param_2;
    local_d0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    do {
      uVar2 = uVar15;
      if (uVar15 <= uVar9) {
        uVar2 = uVar9;
      }
      pcVar14 = param_2 + uVar15 * 0x20;
      local_c0 = puVar11;
LAB_1002da4c0:
      if (uVar2 == uVar15) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1002da77c);
        (*pcVar7)();
      }
      if (*pcVar14 != '\x01') {
LAB_1002da4b0:
        uVar15 = uVar15 + 1;
        pcVar14 = pcVar14 + 0x20;
        puVar19 = local_d0;
        puVar11 = local_c0;
        if (uVar9 == uVar15) break;
        goto LAB_1002da4c0;
      }
      uVar3 = *(undefined8 *)(pcVar14 + -0x18);
      puVar19 = *(undefined **)(pcVar14 + -0x10);
      local_b0 = *(long *)(pcVar14 + -8);
      if ((local_b4 & 1) != 0) {
        CVar8.unknown = puVar19;
        local_80 = uVar3;
        puStack_78 = puVar19;
        _swift_bridgeObjectRetain();
        CVar6.unknown = local_a0.unknown;
        Foundation::CharacterSet::get_whitespaces(CVar8);
        FUN_1002da77c();
        SVar20 = (extension_Foundation)::Swift::StringProtocol::trimmingCharacters(CVar6);
        uVar9 = local_a8;
        pvVar13 = SVar20.bridgeObject;
        (**(code **)(local_98 + 8))(CVar6.unknown,puStack_90);
        _swift_bridgeObjectRelease(pvVar13);
        uVar1 = (ulong)SVar20.str & 0xffffffffffff;
        if (((ulong)pvVar13 & 0x2000000000000000) != 0) {
          uVar1 = (ulong)pvVar13 >> 0x38 & 0xf;
        }
        puVar12 = local_d0;
        puVar11 = local_c0;
        if (uVar1 != 0) goto joined_r0x0001002da564;
        FUN_100008320(uVar3,puVar19,local_b0,1);
        goto LAB_1002da4b0;
      }
      _swift_bridgeObjectRetain(puVar19);
      puVar12 = local_d0;
      puVar11 = local_c0;
joined_r0x0001002da564:
      local_d0 = puVar12;
      local_c0 = puVar11;
      if ((uVar18 == 0) || ((long)uVar15 <= (long)uVar17)) {
        puVar12 = puVar11;
        _swift_isUniquelyReferenced_nonNull_native();
        param_2 = local_d8;
        puVar10 = puVar11;
        if (((ulong)puVar12 & 1) == 0) {
          puVar10 = (undefined *)0x0;
          FUN_1000889c8(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11,&DAT_100fbd070,&DAT_100c3e1e8,
                        &DAT_100ec8508);
        }
        uVar2 = *(ulong *)(puVar10 + 0x10);
        puVar11 = puVar10;
        if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar2) {
          puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
          FUN_1000889c8(puVar11,uVar2 + 1,1,puVar10,&DAT_100fbd070,&DAT_100c3e1e8,&DAT_100ec8508);
        }
        *(ulong *)(puVar11 + 0x10) = uVar2 + 1;
        *(undefined8 *)(puVar11 + uVar2 * 0x20 + 0x20) = uVar3;
        *(undefined **)(puVar11 + uVar2 * 0x20 + 0x28) = puVar19;
        *(long *)(puVar11 + uVar2 * 0x20 + 0x30) = local_b0;
        puVar11[uVar2 * 0x20 + 0x38] = 1;
      }
      else {
        _swift_isUniquelyReferenced_nonNull_native();
        puVar11 = local_c0;
        param_2 = local_d8;
        if (((ulong)puVar12 & 1) == 0) {
          puVar12 = (undefined *)0x0;
          FUN_1000889c8(0,*(long *)(local_d0 + 0x10) + 1,1,local_d0,&DAT_100fbd070,&DAT_100c3e1e8,
                        &DAT_100ec8508);
          local_d0 = puVar12;
        }
        uVar2 = *(ulong *)(local_d0 + 0x10);
        if (*(ulong *)(local_d0 + 0x18) >> 1 <= uVar2) {
          puVar12 = (undefined *)(ulong)(1 < *(ulong *)(local_d0 + 0x18));
          FUN_1000889c8(puVar12,uVar2 + 1,1,local_d0,&DAT_100fbd070,&DAT_100c3e1e8,&DAT_100ec8508);
          local_d0 = puVar12;
        }
        *(ulong *)(local_d0 + 0x10) = uVar2 + 1;
        *(undefined8 *)(local_d0 + uVar2 * 0x20 + 0x20) = uVar3;
        *(undefined **)(local_d0 + uVar2 * 0x20 + 0x28) = puVar19;
        *(long *)(local_d0 + uVar2 * 0x20 + 0x30) = local_b0;
        local_d0[uVar2 * 0x20 + 0x38] = 1;
      }
      bVar5 = local_e0 != uVar15;
      uVar15 = uVar15 + 1;
      puVar19 = local_d0;
    } while (bVar5);
  }
  local_88 = local_c8;
  _swift_bridgeObjectRetain(puVar19);
  FUN_1002da9a8();
  FUN_1002da9a8(puVar11);
  _swift_bridgeObjectRelease(puVar19);
  puVar11 = local_88;
  _swift_bridgeObjectRelease(local_68);
  return puVar11;
code_r0x0001002da344:
  FUN_1002db3b4(&local_80,uVar15,uVar3,puVar19);
  _swift_bridgeObjectRelease(local_70);
  puVar11 = local_c8;
  puVar12 = local_c8;
  _swift_isUniquelyReferenced_nonNull_native();
  puVar10 = puVar11;
  if (((ulong)puVar12 & 1) == 0) {
    puVar10 = (undefined *)0x0;
    FUN_1000889c8(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11,&DAT_100fbd070,&DAT_100c3e1e8,
                  &DAT_100ec8508);
  }
  puVar11 = local_d8;
  uVar18 = *(ulong *)(puVar10 + 0x10);
  puVar12 = puVar10;
  if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar18) {
    puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
    FUN_1000889c8(puVar12,uVar18 + 1,1,puVar10,&DAT_100fbd070,&DAT_100c3e1e8,&DAT_100ec8508);
  }
  *(ulong *)(puVar12 + 0x10) = uVar18 + 1;
  *(ulong *)(puVar12 + uVar18 * 0x20 + 0x20) = uVar15;
  *(undefined8 *)(puVar12 + uVar18 * 0x20 + 0x28) = uVar3;
  *(undefined **)(puVar12 + uVar18 * 0x20 + 0x30) = puVar19;
  puVar12[uVar18 * 0x20 + 0x38] = cVar4;
  param_2 = local_d0;
  uVar9 = local_a8;
  local_c8 = puVar12;
  if (local_b0 + uVar17 == 0) goto LAB_1002da438;
  goto LAB_1002da208;
}



/* Address: 0x1002da77c | FUN_1002da77c */

void FUN_1002da77c(void)

{
  undefined *puVar1;
  
  if (DAT_100fbd020 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258;
  _swift_getWitnessTable
            (PTR_Swift__Swift__String_>Swift__StringProtocol_100eac258,
             PTR___type_metadata_for_Swift_String_100eac208);
  DAT_100fbd020 = puVar1;
  return;
}



/* Address: 0x1002da7bc | FUN_1002da7bc */

undefined8 FUN_1002da7bc(byte param_1,char *param_2,undefined *param_3,long param_4)

{
  undefined1 *puVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  _StringGuts _Var7;
  _StringGuts _Var8;
  byte bVar9;
  bool bVar10;
  Hasher into;
  ulong uVar11;
  ulong uVar12;
  byte *pbVar13;
  String SVar14;
  String SVar15;
  undefined1 auStack_a8 [72];
  
  if (*(long *)(param_4 + 0x10) == 0) {
    return 0;
  }
  Swift::Hasher::init(*(__int64 *)(param_4 + 0x28));
  pcVar3 = (char *)0x656369766564;
  if (param_1 != 4) {
    pcVar3 = (char *)0x6472616f626e6970;
  }
  puVar1 = &DAT_e600000000000000;
  if (param_1 != 4) {
    puVar1 = &DAT_e800000000000000;
  }
  pcVar2 = (char *)0x65746164;
  if (param_1 != 3) {
    pcVar2 = pcVar3;
  }
  puVar6 = &DAT_e400000000000000;
  if (param_1 != 3) {
    puVar6 = puVar1;
  }
  pcVar3 = &DAT_65707974;
  if (param_1 != 1) {
    pcVar3 = (char *)0x656c746974;
  }
  puVar1 = &DAT_e400000000000000;
  if (param_1 != 1) {
    puVar1 = &DAT_e500000000000000;
  }
  pcVar4 = (char *)0x707061;
  if (param_1 != 0) {
    pcVar4 = pcVar3;
  }
  puVar5 = (undefined1 *)0xe300000000000000;
  if (param_1 != 0) {
    puVar5 = puVar1;
  }
  if (param_1 < 3) {
    puVar6 = puVar5;
    pcVar2 = pcVar4;
  }
  SVar14.bridgeObject = puVar6;
  SVar14.str = pcVar2;
  Swift::String::hash((Hasher)auStack_a8,SVar14);
  _swift_bridgeObjectRelease(puVar6);
  into.unknown = auStack_a8;
  SVar15.bridgeObject = param_3;
  SVar15.str = param_2;
  Swift::String::hash(into,SVar15);
  uVar11 = Swift::Hasher::_finalize(into);
  uVar12 = -1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f);
  uVar11 = uVar11 & (uVar12 ^ 0xffffffffffffffff);
  if ((*(ulong *)(param_4 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0) {
    do {
      pbVar13 = (byte *)(*(long *)(param_4 + 0x30) + uVar11 * 0x18);
      bVar9 = *pbVar13;
      _Var7.unknown = *(undefined **)(pbVar13 + 8);
      _Var8.unknown = *(undefined **)(pbVar13 + 0x10);
      _swift_bridgeObjectRetain(_Var8.unknown);
      if (bVar9 == param_1) {
        if (_Var7.unknown == param_2 && _Var8.unknown == param_3) {
          _swift_bridgeObjectRelease(_Var8.unknown);
          return 1;
        }
        bVar10 = Swift::_stringCompareWithSmolCheck
                           (_Var7,_Var8,(_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(_Var8.unknown);
        if (bVar10) {
          return 1;
        }
      }
      else {
        _swift_bridgeObjectRelease(_Var8.unknown);
      }
      uVar11 = uVar11 + 1 & ~uVar12;
    } while ((*(ulong *)(param_4 + 0x38 + (uVar11 >> 6) * 8) >> (uVar11 & 0x3f) & 1) != 0);
  }
  return 0;
}



/* Address: 0x1002da9a8 | FUN_1002da9a8 */

void FUN_1002da9a8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daaac);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1000889c8();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daab0);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daab4);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x20 + 0x20,param_1 + 0x20,uVar5,&DAT_100ec8508);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daab8);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1002daab8 | FUN_1002daab8 */

void FUN_1002daab8(long param_1)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long *unaff_x20;
  ulong uVar5;
  long lVar6;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,uVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daba4);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) ||
     (uVar3 = *(ulong *)(lVar4 + 0x18) >> 1, (long)uVar3 < (long)(lVar6 + uVar5))) {
    FUN_1002daf0c();
    uVar3 = *(ulong *)(lVar2 + 0x18) >> 1;
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002daba8);
      (*pcVar1)();
    }
  }
  else {
    if (uVar3 - *(long *)(lVar4 + 0x10) < uVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002dabac);
      (*pcVar1)();
    }
    _swift_arrayInitWithCopy
              (lVar4 + *(long *)(lVar4 + 0x10) * 0x10 + 0x20,param_1 + 0x20,uVar5,
               PTR___type_metadata_for_Swift_String_100eac208);
    _swift_bridgeObjectRelease(param_1);
    if (uVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),uVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1002dabb0);
        (*pcVar1)();
      }
      *(ulong *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + uVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}



/* Address: 0x1002dabb0 | FUN_1002dabb0 */

undefined * FUN_1002dabb0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dacb8);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd050;
    FUN_1000037f0(&DAT_100fbd050,&DAT_100c3e1c8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -1;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 5) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_Substring_100eaca98);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x20 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 5);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002dacb8 | FUN_1002dacb8 */

void FUN_1002dacb8(void)

{
  FUN_1000889c8();
  return;
}



/* Address: 0x1002dacd4 | FUN_1002dacd4 */

undefined * FUN_1002dacd4(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002dadf0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd068;
    FUN_1000037f0(&DAT_100fbd068,&DAT_100c3e1e0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ec8580);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002dadf0 | FUN_1002dadf0 */

undefined * FUN_1002dadf0(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002daef0);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd060;
    FUN_1000037f0(&DAT_100fbd060,&DAT_100c3e1d8);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar1,puVar4,uVar6 << 4);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002daef0 | FUN_1002daef0 */

void FUN_1002daef0(void)

{
  FUN_1000889c8();
  return;
}



/* Address: 0x1002daf0c | FUN_1002daf0c */

undefined * FUN_1002daf0c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002db014);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd038;
    FUN_1000037f0(&DAT_100fbd038,&DAT_100c3e1b0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,PTR___type_metadata_for_Swift_String_100eac208);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002db014 | FUN_1002db014 */

undefined * FUN_1002db014(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002db11c);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd028;
    FUN_1000037f0(&DAT_100fbd028,&DAT_100c3e1a0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ec8300);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 << 4);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}



/* Address: 0x1002db11c | FUN_1002db11c */

undefined * FUN_1002db11c(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  Date DVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  
  uVar7 = param_2;
  if ((param_3 & 1) != 0) {
    uVar7 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar7 < (long)param_2) {
      if ((long)(uVar7 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002db298);
        (*pcVar3)();
      }
      uVar7 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar7 <= (long)param_2) {
        uVar7 = param_2;
      }
    }
  }
  uVar10 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar7 <= (long)uVar10) {
    uVar7 = uVar10;
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar7 != 0) {
    puVar4 = &DAT_100fbd030;
    FUN_1000037f0(&DAT_100fbd030,&DAT_100c3e1a8);
    DVar5 = Foundation::Date::typeMetadataAccessor();
    lVar11 = *(long *)(*(long *)(DVar5.unknown + -8) + 0x48);
    uVar8 = (ulong)*(byte *)(*(long *)(DVar5.unknown + -8) + 0x50);
    uVar12 = uVar8 + 0x20 & (uVar8 ^ 0xffffffffffffffff);
    _swift_allocObject(puVar4,uVar12 + lVar11 * uVar7,uVar8 | 7);
    puVar6 = puVar4;
    _malloc_size();
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002db290);
      (*pcVar3)();
    }
    lVar9 = (long)puVar6 - uVar12;
    if (lVar9 == -0x8000000000000000 && lVar11 == -1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1002db294);
      (*pcVar3)();
    }
    lVar2 = 0;
    if (lVar11 != 0) {
      lVar2 = lVar9 / lVar11;
    }
    *(ulong *)(puVar4 + 0x10) = uVar10;
    *(long *)(puVar4 + 0x18) = lVar2 << 1;
  }
  DVar5 = Foundation::Date::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(DVar5.unknown + -8) + 0x50);
  uVar7 = uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff);
  puVar6 = puVar4 + uVar7;
  puVar1 = param_4 + uVar7;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar6,puVar1,uVar10,DVar5.unknown);
  }
  else {
    if ((puVar4 < param_4) ||
       (puVar1 + *(long *)(*(long *)(DVar5.unknown + -8) + 0x48) * uVar10 <= puVar6)) {
      _swift_arrayInitWithTakeFrontToBack(puVar6,puVar1,uVar10);
    }
    else if (puVar4 != param_4) {
      _swift_arrayInitWithTakeBackToFront(puVar6,puVar1,uVar10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar4;
}



/* Address: 0x1002db298 | FUN_1002db298 */

undefined * FUN_1002db298(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1002db3b4);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fbd048;
    FUN_1000037f0(&DAT_100fbd048,&DAT_100c3e1c0);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x18) * 2;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar4,puVar1,uVar6,&DAT_100ec8f08);
  }
  else {
    if (puVar3 != param_4 || puVar1 + uVar6 * 0x18 <= puVar4) {
      _memmove(puVar4,puVar1,uVar6 * 0x18);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}


