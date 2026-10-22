/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005ebfc8 | FUN_1005ebfc8 */

void FUN_1005ebfc8(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb6aa4);
  return;
}



/* Address: 0x1005ebfd4 | FUN_1005ebfd4 */

void FUN_1005ebfd4(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb6aec);
  return;
}



/* Address: 0x1005ebfe0 | FUN_1005ebfe0 */

void FUN_1005ebfe0(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetStructDescriptor_100cb6b34);
  return;
}



/* Address: 0x1005ebfec | FUN_1005ebfec */

void FUN_1005ebfec(undefined8 param_1,undefined8 param_2)

{
  _swift_getGenericMetadata(param_1,param_2,&TargetEnumDescriptor_100cb6b7c);
  return;
}



/* Address: 0x1005ebff8 | _swift_retain */

void _swift_retain(void)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfc9e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR__swift_retain_100eae3f8)();
  return;
}



/* Address: 0x1005ebffc | thunk_FUN_1001f6938 */

void thunk_FUN_1001f6938(void)

{
  _swift_allocateGenericValueMetadata();
  return;
}



/* Address: 0x1005ec000 | FUN_1005ec000 */

void FUN_1005ec000(long param_1,long param_2)

{
  code *pcVar1;
  
  if (param_1 <= param_2) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ec014);
  (*pcVar1)();
}



/* Address: 0x1005ec014 | FUN_1005ec014 */

undefined1 FUN_1005ec014(long param_1)

{
  long unaff_x20;
  
  if (param_1 < *(long *)(unaff_x20 + 8)) {
    return *(undefined1 *)(unaff_x20 + 0x10);
  }
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  return 0;
}



/* Address: 0x1005ec034 | FUN_1005ec034 */

undefined1 FUN_1005ec034(long param_1)

{
  long *unaff_x20;
  
  if (param_1 < *unaff_x20) {
    *(undefined1 *)(unaff_x20 + 2) = 1;
    return 1;
  }
  return (char)unaff_x20[2];
}



/* Address: 0x1005ec054 | FUN_1005ec054 */

undefined1  [16] FUN_1005ec054(void)

{
  return ZEXT816(0x100ee93b8);
}



/* Address: 0x1005ec064 | FUN_1005ec064 */

int FUN_1005ec064(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x11) != '\0')) {
    return *param_1 + 0xff;
  }
  uVar1 = 0xffffffff;
  if (1 < *(byte *)(param_1 + 4)) {
    uVar1 = *(byte *)(param_1 + 4) + 0x7ffffffe & 0x7fffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005ec0b8 | FUN_1005ec0b8 */

void FUN_1005ec0b8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 2) = (char)param_2 + '\x01';
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = (ulong)(param_2 - 0xff);
    param_1[1] = 0;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x11) = 1;
    }
  }
  return;
}



/* Address: 0x1005ec0fc | FUN_1005ec0fc */

undefined1  [16] FUN_1005ec0fc(void)

{
  return ZEXT816(0x100ee9430);
}



/* Address: 0x1005ec10c | FUN_1005ec10c */

void FUN_1005ec10c(undefined8 param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  pcVar2 = *(code **)(*(long *)(param_3 + -8) + 0x20);
  (*pcVar2)(&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_1);
  (*pcVar2)(*(undefined8 *)(*(long *)(param_2 + 0x40) + 0x28),
            &stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3);
  _swift_continuation_throwingResume(param_2);
  return;
}



/* Address: 0x1005ec180 | FUN_1005ec180 */

void FUN_1005ec180(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = param_4;
  _swift_allocError(param_4,param_5,0,0);
  (**(code **)(*(long *)(param_4 + -8) + 0x20))(param_5,param_1,param_4);
  _swift_continuation_throwingResumeWithError(param_2,lVar1);
  return;
}



/* Address: 0x1005ec1e8 | FUN_1005ec1e8 */

void FUN_1005ec1e8(void)

{
  FUN_1005ed0e0();
  return;
}



/* Address: 0x1005ec1f4 | FUN_1005ec1f4 */

void FUN_1005ec1f4(void)

{
  FUN_1005ec488();
  return;
}



/* Address: 0x1005ec200 | FUN_1005ec200 */

void FUN_1005ec200(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _swift_retain(uVar1);
  FUN_1005ed464(param_1,uVar1,param_3,param_4,param_5);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1005ec260 | FUN_1005ec260 */

undefined1  [16]
FUN_1005ec260(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_1005f4e98(param_2,param_3,param_4,param_5,param_6,param_7);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_1005f50bc(0,param_5,param_6,param_7);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(char *)(lVar1 + 0x18) = (char)param_3;
  _swift_retain(uVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Address: 0x1005ec2f8 | FUN_1005ec2f8 */

void FUN_1005ec2f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1005ec318,0,0);
  return;
}



/* Address: 0x1005ec318 | FUN_1005ec318 */

void FUN_1005ec318(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x38) = uVar2;
  plVar1 = (long *)0x50;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005ec390;
  FUN_1005ecf74(*(undefined8 *)(unaff_x22 + 0x10),uVar2,*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1005ec390 | FUN_1005ec390 */

void FUN_1005ec390(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x38);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x40));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001005ec3d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1005ec3dc | FUN_1005ec3dc */

void FUN_1005ec3dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1005ec400,0,0);
  return;
}



/* Address: 0x1005ec400 | FUN_1005ec400 */

void FUN_1005ec400(void)

{
  long *plVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  uVar2 = *(undefined8 *)(*(long *)(unaff_x22 + 0x18) + 0x10);
  *(undefined8 *)(unaff_x22 + 0x48) = uVar2;
  plVar1 = (long *)0x60;
  _swift_retain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dbf20;
  FUN_1005ece00(*(undefined8 *)(unaff_x22 + 0x10),uVar2,*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1005ec47c | FUN_1005ec47c */

void FUN_1005ec47c(void)

{
  FUN_1005ec488();
  return;
}



/* Address: 0x1005ec488 | FUN_1005ec488 */

void FUN_1005ec488(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  _swift_retain(uVar1);
  (*param_5)(0,uVar1,param_2,param_3,param_4);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1005ec4e8 | FUN_1005ec4e8 */

void FUN_1005ec4e8(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fd65b0;
  FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
  _swift_initStaticObject();
  DAT_101057bc8 = puVar1;
  return;
}



/* Address: 0x1005ec520 | FUN_1005ec520 */

undefined8 * FUN_1005ec520(void)

{
  if (DAT_100fd5ac0 != -1) {
    _swift_once(&DAT_100fd5ac0,FUN_1005ec4e8);
  }
  return &DAT_101057bc8;
}



/* Address: 0x1005ec560 | FUN_1005ec560 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005ec610 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005ec560(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  CollectionOfOne CVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100cb6c0c,&TargetProtocolRequirement_100cb6c14);
  lVar6 = *(long *)(lVar1 + -8);
  lVar4 = *(long *)(lVar6 + 0x40);
  CVar2 = Swift::CollectionOfOne::typeMetadataAccessor();
  lVar7 = *(long *)(CVar2.unknown + -8);
  lVar5 = (long)(&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0)) -
          (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))
            (&stack0xffffffffffffffa0 + -(lVar4 + 0xfU & 0xfffffffffffffff0),param_1,lVar1);
  Swift::CollectionOfOne::init(lVar5,CVar2.unknown,lVar1);
  puVar3 = PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Collection_100ead048;
  _swift_getWitnessTable
            (PTR_Swift__Swift__CollectionOfOne<undefined>_>Swift__Collection_100ead048,CVar2.unknown
            );
  lVar4 = lVar5;
  FUN_1005f4f4c(lVar5,lVar1,CVar2.unknown,puVar3);
  (**(code **)(lVar7 + 8))(lVar5,CVar2.unknown);
  (**(code **)(param_3 + 0x10))(lVar4,param_2,param_3);
  _swift_release(lVar4);
  return;
}



/* Address: 0x1005ec688 | FUN_1005ec688 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005ec6c4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

bool FUN_1005ec688(undefined8 param_1,undefined8 param_2)

{
  __int64 _Var1;
  
  FUN_1000f7830(&DAT_100fd5b08,&DAT_100c66900);
  _swift_initStaticObject();
  _Var1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  return _Var1 != 0;
}



/* Address: 0x1005ec6e8 | FUN_1005ec6e8 */

undefined1  [16] FUN_1005ec6e8(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = 0xef64656873696e69;
  auVar1._0_8_ = 0x4679646165726c61;
  return auVar1;
}



/* Address: 0x1005ec70c | FUN_1005ec70c */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001005ec74c */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1005ec70c(undefined8 param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  __int64 _Var3;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  FUN_1000f7830(&DAT_100fd5b08,&DAT_100c66900);
  _swift_initStaticObject();
  _Var3 = Swift::_findStringSwitchCase(param_2,uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  *(bool *)param_1 = _Var3 != 0;
  return;
}



/* Address: 0x1005ec778 | FUN_1005ec778 */

void FUN_1005ec778(undefined8 *param_1)

{
  *param_1 = 0x4679646165726c61;
  param_1[1] = 0xef64656873696e69;
  return;
}



/* Address: 0x1005ec7a0 | FUN_1005ec7a0 */

void FUN_1005ec7a0(void)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  into.unknown = auStack_68;
  SVar1.bridgeObject = (void *)0xef64656873696e69;
  SVar1.str = (char *)0x4679646165726c61;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1005ec7fc | FUN_1005ec7fc */

void FUN_1005ec7fc(Hasher param_1)

{
  String SVar1;
  
  SVar1.bridgeObject = (void *)0xef64656873696e69;
  SVar1.str = (char *)0x4679646165726c61;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x1005ec820 | FUN_1005ec820 */

void FUN_1005ec820(__int64 param_1)

{
  Hasher into;
  String SVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  into.unknown = auStack_68;
  SVar1.bridgeObject = (void *)0xef64656873696e69;
  SVar1.str = (char *)0x4679646165726c61;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1005ec878 | FUN_1005ec878 */

undefined8 FUN_1005ec878(undefined8 param_1,undefined8 param_2)

{
  _swift_bridgeObjectRetain(param_2);
  return param_1;
}



/* Address: 0x1005ec8b8 | FUN_1005ec8b8 */

undefined1  [16] FUN_1005ec8b8(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  Swift::_StringGuts::grow(0x1d,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar3.bridgeObject = param_2.unknown;
  SVar3.str = param_1;
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar3,SVar4);
  SVar2.bridgeObject = (void *)0xe100000000000000;
  SVar2.str = &DAT_0000003a;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar3 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar3,SVar6);
  _swift_bridgeObjectRelease(SVar3.bridgeObject);
  auVar1._8_8_ = 0x8000000100dae7b0;
  auVar1._0_8_ = 0xd000000000000025;
  return auVar1;
}



/* Address: 0x1005ec978 | FUN_1005ec978 */

void FUN_1005ec978(void)

{
  undefined8 *unaff_x20;
  
  FUN_1005ec8b8(*unaff_x20,unaff_x20[1],unaff_x20[2]);
  return;
}



/* Address: 0x1005ec984 | FUN_1005ec984 */

void FUN_1005ec984(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x1005ec98c | FUN_1005ec98c */

undefined1 FUN_1005ec98c(void)

{
  long unaff_x20;
  
  return *(undefined1 *)(unaff_x20 + 0x18);
}



/* Address: 0x1005ec994 | FUN_1005ec994 */

void FUN_1005ec994(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  _swift_allocObject();
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1005ec9d4 | FUN_1005ec9d4 */

void FUN_1005ec9d4(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined1 *)(unaff_x20 + 0x18) = param_2;
  return;
}



/* Address: 0x1005ec9e4 | FUN_1005ec9e4 */

void FUN_1005ec9e4(void)

{
  FUN_1005ed158(FUN_1005ec9f8,FUN_1005eca04);
  return;
}



/* Address: 0x1005ec9f8 | FUN_1005ec9f8 */

void FUN_1005ec9f8(void)

{
  FUN_1005ed20c();
  return;
}



/* Address: 0x1005eca04 | FUN_1005eca04 */

void FUN_1005eca04(long param_1,undefined8 param_2,ulong param_3,long param_4,long param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  code *pcVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long local_c0 [2];
  long local_b0 [2];
  undefined1 local_a0;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  long lStack_78;
  long local_70;
  long lStack_68;
  
  local_c0[0] = *(long *)(param_4 + -8);
  lVar12 = (long)local_c0 - (*(long *)(local_c0[0] + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar2 = 0;
  FUN_1005f507c(0,param_3,param_4,param_5);
  lVar9 = *(long *)(lVar2 + -8);
  uVar7 = *(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0;
  plVar13 = (long *)(lVar12 - uVar7);
  lVar11 = (long)plVar13 - uVar7;
  uVar3 = 0;
  local_c0[1] = param_1;
  local_80 = param_3;
  lStack_78 = param_4;
  local_70 = param_5;
  lStack_68 = param_1;
  FUN_1005f5070(0,param_3,param_4,param_5);
  FUN_10066ed6c(lVar11,FUN_1005f5088,&local_90,param_2,uVar3,lVar2);
  (**(code **)(lVar9 + 0x10))(plVar13,lVar11,lVar2);
  plVar4 = plVar13;
  _swift_getEnumCaseMultiPayload(plVar13,lVar2);
  lVar10 = local_c0[0];
  if ((int)plVar4 == 0) {
    (**(code **)(local_c0[0] + 0x20))(lVar12,plVar13,param_4);
    (**(code **)(param_5 + 0x20))(local_c0[1],param_4,param_5);
    (**(code **)(lVar10 + 8))(lVar12,param_4);
  }
  else if ((int)plVar4 == 1) {
    local_c0[1] = lVar9;
    lVar10 = *plVar13;
    lVar9 = plVar13[1];
    lVar12 = plVar13[2];
    uVar3 = 0xff;
    local_b0[0] = lVar10;
    local_b0[1] = lVar9;
    local_a0 = (char)lVar12;
    FUN_1005f50a4(0xff,param_3,param_4,param_5);
    FUN_100678b68(0,uVar3);
    FUN_1006754a0(&local_90);
    FUN_10000cae0(lVar10,lVar9,(char)lVar12);
    uVar5 = 0;
    FUN_100677810(0,uVar3);
    FUN_1006755cc(local_b0);
    lVar10 = local_b0[1];
    if (local_b0[1] != 0) {
      uVar3 = 0;
      FUN_1005f50b0(0,param_3,param_4,param_5);
      puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      do {
        local_b0[0] = CONCAT71(local_b0[0]._1_7_,1);
        puVar6 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        FUN_1005ec10c(local_b0,lVar10,uVar3,puVar6,puVar1);
        FUN_1006755cc(local_b0,uVar5);
        lVar10 = local_b0[1];
      } while (local_b0[1] != 0);
    }
    FUN_10000cae0(local_90,uStack_88,local_80 & 0xff);
    pcVar8 = *(code **)(local_c0[1] + 8);
    goto LAB_1005ecc54;
  }
  pcVar8 = *(code **)(lVar9 + 8);
LAB_1005ecc54:
  (*pcVar8)(lVar11,lVar2);
  return;
}



/* Address: 0x1005ecc80 | FUN_1005ecc80 */

void FUN_1005ecc80(void)

{
  FUN_1005ec9e4();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1005ecca0 | FUN_1005ecca0 */

undefined1  [16]
FUN_1005ecca0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  FUN_1005f4e98(param_2,1);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  lVar1 = 0;
  FUN_1005f50bc(0,param_4,param_5,param_6);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = uVar2;
  *(undefined1 *)(lVar1 + 0x18) = 1;
  _swift_retain(uVar2);
  auVar3._8_8_ = param_2;
  auVar3._0_8_ = lVar1;
  return auVar3;
}



/* Address: 0x1005ecd28 | FUN_1005ecd28 */

undefined8
FUN_1005ecd28(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5)

{
  FUN_1005f4e98();
  (**(code **)(*(long *)(param_5 + -8) + 8))(param_3,param_5);
  return param_1;
}



/* Address: 0x1005ecd70 | FUN_1005ecd70 */

void FUN_1005ecd70(undefined8 param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1005f50bc(0,param_3,param_4,param_5);
  _swift_allocObject();
  *(undefined8 *)(lVar1 + 0x10) = param_1;
  *(undefined1 *)(lVar1 + 0x18) = param_2;
  return;
}



/* Address: 0x1005ecdb8 | FUN_1005ecdb8 */

undefined8 FUN_1005ecdb8(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  FUN_1005f4d58();
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_2,param_4);
  return param_1;
}



/* Address: 0x1005ece00 | FUN_1005ece00 */

void FUN_1005ece00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1005ece24,0,0);
  return;
}



/* Address: 0x1005ece24 | FUN_1005ece24 */

void FUN_1005ece24(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar2 = &DAT_100fd65b0;
  FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
  _swift_initStaticObject();
  lVar1 = *(long *)(puVar2 + 0x10);
  *(long *)(puVar2 + 0x10) = lVar1 + 1;
  *(long *)(unaff_x22 + 0x48) = lVar1;
  plVar3 = (long *)0x100;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x50) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005ecebc;
  FUN_1005ee618(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48),0,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30),
                *(undefined8 *)(unaff_x22 + 0x38),*(undefined8 *)(unaff_x22 + 0x40));
  return;
}



/* Address: 0x1005ecebc | FUN_1005ecebc */

void FUN_1005ecebc(char param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x50));
  if (unaff_x20 == 0) {
    if (param_1 != '\0') {
      plVar1 = (long *)0x100;
      _swift_task_alloc();
      *(long **)(lVar2 + 0x50) = plVar1;
      *plVar1 = lVar3;
      plVar1[1] = (long)FUN_1005ecebc;
      FUN_1005ee618(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x48),0,
                    *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                    *(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30),
                    *(undefined8 *)(lVar2 + 0x38),*(undefined8 *)(lVar2 + 0x40));
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ecf0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005ecf74 | FUN_1005ecf74 */

void FUN_1005ecf74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1005ecf94,0,0);
  return;
}



/* Address: 0x1005ecf94 | FUN_1005ecf94 */

void FUN_1005ecf94(void)

{
  long lVar1;
  undefined *puVar2;
  long *plVar3;
  long unaff_x22;
  
  puVar2 = &DAT_100fd65b0;
  FUN_1000f7830(&DAT_100fd65b0,&DAT_100c66fe0);
  _swift_initStaticObject();
  lVar1 = *(long *)(puVar2 + 0x10);
  *(long *)(puVar2 + 0x10) = lVar1 + 1;
  *(long *)(unaff_x22 + 0x38) = lVar1;
  plVar3 = (long *)0xd0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x40) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_1005ed024;
  FUN_1005f18f0(*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x38),0,
                *(undefined8 *)(unaff_x22 + 0x18),*(undefined8 *)(unaff_x22 + 0x20),
                *(undefined8 *)(unaff_x22 + 0x28),*(undefined8 *)(unaff_x22 + 0x30));
  return;
}



/* Address: 0x1005ed024 | FUN_1005ed024 */

void FUN_1005ed024(char param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  long *plVar1;
  long unaff_x20;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x40));
  if (unaff_x20 == 0) {
    if (param_1 != '\0') {
      plVar1 = (long *)0xd0;
      _swift_task_alloc();
      *(long **)(lVar2 + 0x40) = plVar1;
      *plVar1 = lVar3;
      plVar1[1] = (long)FUN_1005ed024;
      FUN_1005f18f0(*(undefined8 *)(lVar2 + 0x10),*(undefined8 *)(lVar2 + 0x38),0,
                    *(undefined8 *)(lVar2 + 0x18),*(undefined8 *)(lVar2 + 0x20),
                    *(undefined8 *)(lVar2 + 0x28),*(undefined8 *)(lVar2 + 0x30));
      return;
    }
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar3 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x0001005ed074. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x1005ed0d4 | FUN_1005ed0d4 */

void FUN_1005ed0d4(void)

{
  FUN_1005ed0e0();
  return;
}



/* Address: 0x1005ed0e0 | FUN_1005ed0e0 */

void FUN_1005ed0e0(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,code *param_6)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)(param_2 + 0x10);
  _swift_retain(uVar1);
  (*param_6)(param_1,uVar1,param_3,param_4,param_5);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1005ed144 | FUN_1005ed144 */

void FUN_1005ed144(void)

{
  FUN_1005ed158(FUN_1005ed200,FUN_1005ed274);
  return;
}



/* Address: 0x1005ed158 | FUN_1005ed158 */

void FUN_1005ed158(code *param_1,code *param_2)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  if ((char)unaff_x20[3] == '\x01') {
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x60);
  }
  else {
    uVar2 = unaff_x20[2];
    uVar4 = *(undefined8 *)(lVar3 + 0x50);
    uVar5 = *(undefined8 *)(lVar3 + 0x58);
    uVar6 = *(undefined8 *)(lVar3 + 0x60);
    (*param_1)(uVar2,uVar4,uVar5,uVar6);
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1005ed200);
      (*pcVar1)();
    }
  }
  lVar3 = unaff_x20[2];
  _swift_retain(lVar3);
  (*param_2)(0,lVar3,uVar4,uVar5,uVar6);
  _swift_release(lVar3);
  _swift_release(unaff_x20[2]);
  return;
}



/* Address: 0x1005ed200 | FUN_1005ed200 */

void FUN_1005ed200(void)

{
  FUN_1005ed20c();
  return;
}



/* Address: 0x1005ed20c | FUN_1005ed20c */

undefined1
FUN_1005ed20c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined1 local_31;
  
  uVar1 = 0;
  local_50 = param_2;
  uStack_48 = param_3;
  local_40 = param_4;
  FUN_1005f5070(0);
  FUN_10066ed6c(&local_31,param_5,auStack_60,param_1,uVar1,
                PTR___type_metadata_for_Swift_Bool_100eac570);
  return local_31;
}



/* Address: 0x1005ed274 | FUN_1005ed274 */

void FUN_1005ed274(undefined8 param_1,undefined8 param_2,ulong param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  long local_80;
  long local_78;
  undefined1 local_70;
  undefined7 uStack_6f;
  long local_68;
  
  uVar5 = 0;
  local_a0 = param_3;
  uStack_98 = param_4;
  local_90 = param_5;
  uStack_88 = param_1;
  FUN_1005f5070(0,param_3,param_4,param_5);
  uVar6 = 0;
  FUN_1005f5198(0,param_3,param_4,param_5);
  FUN_10066ed6c(&local_80,FUN_1005f5140,&local_b0,param_2,uVar5,uVar6);
  lVar3 = local_78;
  lVar2 = local_80;
  if (local_68 != 0) {
    uVar5 = 0xff;
    FUN_1005f50a4(0xff,param_3,param_4,param_5);
    FUN_100678b68(0,uVar5);
    FUN_1006754a0(&local_b0);
    uVar6 = 0;
    FUN_100677810(0,uVar5);
    FUN_1006755cc(&local_80);
    puVar1 = PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
    if (local_78 != 0) {
      do {
        lVar4 = local_78;
        local_80 = local_68;
        _swift_errorRetain(local_68);
        puVar7 = &DAT_100fd4f20;
        FUN_1000f7830(&DAT_100fd4f20,&DAT_100c660a0);
        puVar8 = puVar7;
        puVar9 = puVar1;
        _swift_allocError();
        (**(code **)(*(long *)(puVar7 + -8) + 0x20))(puVar9,&local_80,puVar7);
        _swift_continuation_throwingResumeWithError(lVar4,puVar8);
        FUN_1006755cc(&local_80,uVar6);
      } while (local_78 != 0);
    }
    FUN_1005f51a4(lVar2,lVar3,CONCAT71(uStack_6f,local_70),local_68);
    FUN_10000cae0(local_b0,uStack_a8,local_a0 & 0xff);
  }
  return;
}


