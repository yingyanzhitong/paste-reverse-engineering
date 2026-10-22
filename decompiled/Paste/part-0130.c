/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001915f0 | FUN_1001915f0 */

void FUN_1001915f0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_78 [24];
  undefined8 local_60;
  long lStack_58;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x18) + 0x10);
  if (lVar4 != 0) {
    lVar3 = *(long *)(param_1 + 0x18) + 0x20;
    do {
      FUN_100076688(lVar3,auStack_78);
      lVar2 = lStack_58;
      uVar1 = local_60;
      FUN_100004640(auStack_78,local_60);
      (**(code **)(lVar2 + 0x18))(param_2,param_3,param_4,uVar1,lVar2);
      FUN_100004594(auStack_78);
      lVar3 = lVar3 + 0x28;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}



/* Address: 0x100191694 | FUN_100191694 */

void FUN_100191694(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1001916c0 | FUN_1001916c0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1001916c0(void)

{
  return ZEXT816(0x100fb3208);
}



/* Address: 0x1001916e0 | FUN_1001916e0 */

void FUN_1001916e0(void)

{
  FUN_1001911f4();
  return;
}



/* Address: 0x100191700 | FUN_100191700 */

void FUN_100191700(void)

{
  FUN_1001913fc();
  return;
}



/* Address: 0x100191720 | FUN_100191720 */

void FUN_100191720(void)

{
  FUN_100190dd8();
  return;
}



/* Address: 0x100191740 | FUN_100191740 */

void FUN_100191740(void)

{
  FUN_100197aac();
  return;
}



/* Address: 0x100191764 | FUN_100191764 */

void FUN_100191764(void)

{
  FUN_100197e68();
  return;
}



/* Address: 0x100191788 | thunk_FUN_10019190c */

void thunk_FUN_10019190c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10019178c | FUN_10019178c */

void FUN_10019178c(void)

{
  long unaff_x20;
  
  FUN_1001915f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100191798 | FUN_100191798 */

void FUN_100191798(long param_1,long param_2)

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



/* Address: 0x1001917ac | FUN_1001917ac */

void FUN_1001917ac(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x1001917b4 | FUN_1001917b4 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1001917b4(void)

{
  undefined *puVar1;
  
  if (DAT_100fb3288 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___OS_dispatch_queue;
  _swift_getObjCClassMetadata();
  DAT_100fb3288 = puVar1;
  return;
}



/* Address: 0x1001917f8 | FUN_1001917f8 */

void FUN_1001917f8(void)

{
  Attributes AVar1;
  undefined *puVar2;
  
  if (DAT_100fb3290 != (undefined *)0x0) {
    return;
  }
  AVar1 = Attributes::_typeMetadataAccessor();
  puVar2 = PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798;
  _swift_getWitnessTable(PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798,AVar1.unknown);
  DAT_100fb3290 = puVar2;
  return;
}



/* Address: 0x10019183c | FUN_10019183c */

void FUN_10019183c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fb32a0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fb3298;
  FUN_100005c24(&DAT_100fb3298,&DAT_100c31080);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fb32a0 = puVar2;
  return;
}



/* Address: 0x10019188c | FUN_10019188c */

void FUN_10019188c(void)

{
  long unaff_x20;
  
  FUN_100191564(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100191894 | FUN_100191894 */

void FUN_100191894(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1001918c0 | FUN_1001918c0 */

void FUN_1001918c0(void)

{
  long unaff_x20;
  
  FUN_100191360(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x1001918cc | FUN_1001918cc */

void FUN_1001918cc(void)

{
  _swift_deallocObject();
  return;
}



/* Address: 0x1001918dc | FUN_1001918dc */

void FUN_1001918dc(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100191900 | FUN_100191900 */

void FUN_100191900(void)

{
  FUN_100190c20();
  return;
}



/* Address: 0x100191908 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  FUN_1001344b4();
  return;
}



/* Address: 0x10019190c | FUN_10019190c */

void FUN_10019190c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x100191940 | thunk_FUN_100191798 */

void thunk_FUN_100191798(void)

{
  FUN_100191798();
  return;
}



/* Address: 0x100191944 | thunk_FUN_100191798 */

void thunk_FUN_100191798(void)

{
  FUN_100191798();
  return;
}



/* Address: 0x100191948 | thunk_FUN_100191798 */

void thunk_FUN_100191798(void)

{
  FUN_100191798();
  return;
}



/* Address: 0x10019194c | thunk_FUN_100191798 */

void thunk_FUN_100191798(void)

{
  FUN_100191798();
  return;
}



/* Address: 0x100191950 | thunk_FUN_10019178c */

void thunk_FUN_10019178c(void)

{
  long unaff_x20;
  
  FUN_1001915f0(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100191954 | thunk_FUN_1001917ac */

void thunk_FUN_1001917ac(void)

{
  FUN_1001917ac();
  return;
}



/* Address: 0x100191958 | thunk_FUN_1001917ac */

void thunk_FUN_1001917ac(void)

{
  FUN_1001917ac();
  return;
}



/* Address: 0x10019195c | thunk_FUN_1001917ac */

void thunk_FUN_1001917ac(void)

{
  FUN_1001917ac();
  return;
}



/* Address: 0x100191960 | thunk_FUN_1001917ac */

void thunk_FUN_1001917ac(void)

{
  FUN_1001917ac();
  return;
}



/* Address: 0x100191964 | thunk_FUN_10019188c */

void thunk_FUN_10019188c(void)

{
  long unaff_x20;
  
  FUN_100191564(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x100191968 | thunk_FUN_1001918cc */

void thunk_FUN_1001918cc(void)

{
  FUN_1001918cc();
  return;
}



/* Address: 0x10019196c | thunk_FUN_1001918cc */

void thunk_FUN_1001918cc(void)

{
  FUN_1001918cc();
  return;
}



/* Address: 0x100191970 | thunk_FUN_1001344b4 */

void thunk_FUN_1001344b4(void)

{
  thunk_FUN_1001344b4();
  return;
}



/* Address: 0x100191974 | thunk_FUN_1001918cc */

void thunk_FUN_1001918cc(void)

{
  FUN_1001918cc();
  return;
}



/* Address: 0x100191978 | thunk_FUN_10019190c */

void thunk_FUN_10019190c(void)

{
  thunk_FUN_10019190c();
  return;
}



/* Address: 0x10019197c | thunk_FUN_1001918cc */

void thunk_FUN_1001918cc(void)

{
  FUN_1001918cc();
  return;
}



/* Address: 0x100191980 | FUN_100191980 */

undefined8
FUN_100191980(undefined8 param_1,byte param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  FUN_100192cb4(param_1,param_3,param_4);
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6e656d6563616c70;
  *(undefined8 *)(puVar1 + 0x28) = 0xe900000000000074;
  if (param_2 < 2) {
    if (param_2 == 0) {
      puVar3 = (undefined1 *)0xea0000000000676e;
      uVar4 = 0x696472616f626e6f;
    }
    else {
      puVar3 = (undefined1 *)0xec00000065746167;
      uVar4 = 0x5f65727574616566;
    }
  }
  else if (param_2 == 2) {
    puVar3 = &DAT_e800000000000000;
    uVar4 = 0x73676e6974746573;
  }
  else if (param_2 == 3) {
    puVar3 = &DAT_e400000000000000;
    uVar4 = 0x756e656d;
  }
  else {
    puVar3 = &DAT_e500000000000000;
    uVar4 = 0x726568746f;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined1 **)(puVar1 + 0x38) = puVar3;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  uVar4 = param_1;
  FUN_1001940b0(param_1,puVar2);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(puVar2);
  FUN_100192e24(param_5,param_6,param_7);
  FUN_1001940b0(uVar4,param_5);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(param_5);
  return 0x5f6c6c6177796170;
}



/* Address: 0x100191b74 | FUN_100191b74 */

undefined8
FUN_100191b74(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9)

{
  undefined8 uVar1;
  
  FUN_100192cb4(param_1,param_5,param_6);
  FUN_100192fd4(param_2,param_3,param_4);
  uVar1 = param_1;
  FUN_1001940b0(param_1,param_2);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_100192e24(param_7,param_8,param_9);
  FUN_1001940b0(uVar1,param_7);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_7);
  return 0xd000000000000010;
}



/* Address: 0x100191c50 | FUN_100191c50 */

undefined8 FUN_100191c50(void)

{
  FUN_100192cb4();
  return 0xd000000000000012;
}



/* Address: 0x100191c80 | FUN_100191c80 */

undefined8 FUN_100191c80(undefined8 param_1,char param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  FUN_100192cb4(param_1,param_3,param_4);
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6e6f73616572;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e600000000000000;
  if (param_2 == '\0') {
    puVar3 = &DAT_e500000000000000;
    uVar4 = 0x726f727265;
  }
  else if (param_2 == '\x01') {
    puVar3 = &DAT_e800000000000000;
    uVar4 = 0x6465727265666564;
  }
  else {
    puVar3 = &DAT_e700000000000000;
    uVar4 = 0x676e69646e6570;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined1 **)(puVar1 + 0x38) = puVar3;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_1001940b0(param_1,puVar2);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(puVar2);
  return 0x74756f6b63656863;
}



/* Address: 0x100191dd8 | FUN_100191dd8 */

undefined8
FUN_100191dd8(undefined8 param_1,undefined8 param_2,char param_3,undefined8 param_4,char param_5,
             undefined8 param_6,undefined8 param_7,undefined8 param_8,undefined8 param_9,
             undefined8 param_10)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined *local_70;
  undefined **local_68;
  
  FUN_100192cb4(param_1,param_6,param_7);
  FUN_100192fd4(param_2,0,0);
  uVar1 = param_1;
  FUN_1001940b0(param_1,param_2);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_100192e24(param_8,param_9,param_10);
  uVar2 = uVar1;
  FUN_1001940b0(uVar1,param_8);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(param_8);
  local_88 = 0x616e616d5f707061;
  if (param_3 != '\x01') {
    local_88 = 0x74696b65726f7473;
  }
  uStack_80 = 0xeb00000000646567;
  if (param_3 != '\x01') {
    uStack_80 = 0xee006f72746e695f;
  }
  local_70 = PTR___type_metadata_for_Swift_String_100eac208;
  local_68 = &PTR_PTR_100ebcc60;
  uVar1 = uVar2;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  FUN_100192b98(&local_88,0x79745f6c61697274,0xea00000000006570,uVar1);
  if (param_5 != '\x01') {
    local_70 = PTR___type_metadata_for_Swift_Int_100eac6f8;
    local_68 = &PTR_PTR_100ebcc68;
    local_88 = param_4;
    _swift_isUniquelyReferenced_nonNull_native(uVar2);
    FUN_100192b98(&local_88,0x61645f6c61697274,0xea00000000007379,uVar2);
  }
  return 0x74735f6c61697274;
}



/* Address: 0x100191fc4 | FUN_100191fc4 */

undefined8 FUN_100191fc4(char param_1,char param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auStack_118 [184];
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e700000000000000;
  puVar4 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_1 == '\0') {
    puVar5 = (undefined1 *)0xe900000000000065;
    uVar6 = 0x726f74735f707061;
  }
  else if (param_1 == '\x01') {
    puVar5 = &DAT_e600000000000000;
    uVar6 = 0x746365726964;
  }
  else {
    puVar5 = &DAT_e600000000000000;
    uVar6 = 0x707061746573;
  }
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar2 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined1 **)(puVar2 + 0x38) = puVar5;
  puVar3 = puVar2;
  FUN_10019072c();
  _swift_setDeallocating(puVar2);
  FUN_100005808(puVar2 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_100192fd4(param_3,0,0);
  puVar2 = puVar3;
  FUN_1001940b0(puVar3,param_3);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(param_3);
  _swift_initStackObject(puVar1,auStack_118);
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6e6f73616572;
  uVar6 = 0xd000000000000017;
  if (param_2 != '\x01') {
    uVar6 = 0x64657269707865;
  }
  puVar5 = (undefined1 *)0x8000000100d974b0;
  *(undefined **)(puVar1 + 0x48) = puVar4;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  if (param_2 != '\x01') {
    puVar5 = &DAT_e700000000000000;
  }
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e600000000000000;
  *(undefined8 *)(puVar1 + 0x30) = uVar6;
  *(undefined1 **)(puVar1 + 0x38) = puVar5;
  puVar4 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_1001940b0(puVar2,puVar4);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(puVar4);
  return 0x6e655f6c61697274;
}



/* Address: 0x100192204 | FUN_100192204 */

undefined8
FUN_100192204(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             char param_5,byte param_6,undefined8 param_7,undefined8 param_8,byte param_9,
             undefined4 param_10,undefined8 param_11,undefined8 param_12)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  ulong uVar7;
  
  uVar7 = (ulong)param_9;
  FUN_100192cb4(param_1,param_7,param_8);
  FUN_100192fd4(param_2,param_3,param_4);
  uVar6 = param_1;
  FUN_1001940b0(param_1,param_2);
  _swift_bridgeObjectRelease(param_1);
  _swift_bridgeObjectRelease(param_2);
  FUN_100192e24(uVar7,param_11,param_12);
  uVar1 = uVar6;
  FUN_1001940b0(uVar6,uVar7);
  _swift_bridgeObjectRelease(uVar6);
  _swift_bridgeObjectRelease(uVar7);
  puVar2 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  *(undefined8 *)(puVar2 + 0x20) = 0x656372756f73;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e600000000000000;
  if (param_5 == '\0') {
    puVar5 = &DAT_e800000000000000;
    uVar6 = 0x74696b65726f7473;
  }
  else if (param_5 == '\x01') {
    puVar5 = (undefined1 *)0xeb0000000079656b;
    uVar6 = 0x5f65736e6563696c;
  }
  else {
    puVar5 = &DAT_e700000000000000;
    uVar6 = 0x65726f74736572;
  }
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar2 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0x30) = uVar6;
  *(undefined1 **)(puVar2 + 0x38) = puVar5;
  *(undefined8 *)(puVar2 + 0x58) = 0xd000000000000013;
  *(undefined8 *)(puVar2 + 0x60) = 0x8000000100d974d0;
  *(undefined **)(puVar2 + 0x80) = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined ***)(puVar2 + 0x88) = &PTR_PTR_100ebcc70;
  puVar2[0x68] = param_6 & 1;
  puVar3 = puVar2;
  FUN_10019072c();
  _swift_setDeallocating(puVar2);
  puVar4 = &DAT_100fb31b0;
  FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
  _swift_arrayDestroy(puVar2 + 0x20,2,puVar4);
  FUN_1001940b0(uVar1,puVar3);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRelease(puVar3);
  return 0xd000000000000012;
}



/* Address: 0x10019243c | FUN_10019243c */

/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10019243c(char param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  Date DVar2;
  undefined *puVar3;
  Date self;
  NSDate *pNVar4;
  long extraout_x8;
  long extraout_x8_00;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 *puVar7;
  long lVar8;
  long lVar9;
  undefined1 auStack_f0 [8];
  undefined *local_e8;
  String local_e0;
  undefined *local_c8;
  undefined **ppuStack_c0;
  
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = auStack_f0 + -extraout_x8;
  DVar2 = Foundation::Date::typeMetadataAccessor();
  lVar9 = *(long *)(DVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar9 + 0x40));
  lVar8 = (long)puVar7 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e700000000000000;
  if (param_1 == '\0') {
    puVar5 = (undefined1 *)0xe900000000000065;
    uVar6 = 0x726f74735f707061;
  }
  else if (param_1 == '\x01') {
    puVar5 = &DAT_e600000000000000;
    uVar6 = 0x746365726964;
  }
  else {
    puVar5 = &DAT_e600000000000000;
    uVar6 = 0x707061746573;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar6;
  *(undefined1 **)(puVar1 + 0x38) = puVar5;
  puVar3 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_100192fd4(param_2,0,0);
  puVar1 = puVar3;
  FUN_1001940b0(puVar3,param_2);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(param_2);
  FUN_100193110(param_3,puVar7);
  puVar5 = puVar7;
  (**(code **)(lVar9 + 0x30))(puVar7,1,DVar2.unknown);
  if ((int)puVar5 == 1) {
    FUN_100005808(puVar7,&DAT_100fb32a8,&DAT_100c31088);
  }
  else {
    (**(code **)(lVar9 + 0x20))(lVar8,puVar7,DVar2.unknown);
    puVar3 = &_OBJC_CLASS___NSISO8601DateFormatter;
    _objc_allocWithZone();
    self.unknown = (undefined *)objc_stub::init(puVar3);
    pNVar4 = Foundation::Date::_bridgeToObjectiveC(self);
    objc_stub::stringFromDate_((ID)self.unknown,pNVar4);
    local_e0 = (extension_Foundation)::Swift::String::__unconditionallyBridgeFromObjectiveC();
    local_c8 = PTR___type_metadata_for_Swift_String_100eac208;
    ppuStack_c0 = &PTR_PTR_100ebcc60;
    puVar3 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    local_e8 = puVar1;
    FUN_100192b98(&local_e0,0x5f73657269707865,0xea00000000007461,puVar3);
    (**(code **)(lVar9 + 8))(lVar8,DVar2.unknown);
  }
  return 0xd000000000000016;
}



/* Address: 0x100192738 | FUN_100192738 */

undefined8 FUN_100192738(char param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e700000000000000;
  if (param_1 == '\0') {
    puVar3 = (undefined1 *)0xe900000000000065;
    uVar4 = 0x726f74735f707061;
  }
  else if (param_1 == '\x01') {
    puVar3 = &DAT_e600000000000000;
    uVar4 = 0x746365726964;
  }
  else {
    puVar3 = &DAT_e600000000000000;
    uVar4 = 0x707061746573;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined1 **)(puVar1 + 0x38) = puVar3;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_100192fd4(param_2,0,0);
  FUN_1001940b0(puVar2,param_2);
  _swift_bridgeObjectRelease(puVar2);
  _swift_bridgeObjectRelease(param_2);
  return 0xd000000000000014;
}



/* Address: 0x100192894 | FUN_100192894 */

undefined8 FUN_100192894(char param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e700000000000000;
  if (param_1 == '\0') {
    puVar2 = (undefined1 *)0xe900000000000065;
    uVar3 = 0x726f74735f707061;
  }
  else {
    uVar3 = 0x746365726964;
    if (param_1 != '\x01') {
      uVar3 = 0x707061746573;
    }
    puVar2 = &DAT_e600000000000000;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar3;
  *(undefined1 **)(puVar1 + 0x38) = puVar2;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  return 0x5f65726f74736572;
}



/* Address: 0x1001929c0 | FUN_1001929c0 */

undefined8 FUN_1001929c0(char param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined1 auStack_100 [176];
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  puVar2 = puVar1;
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar2 + 0x28) = &DAT_e700000000000000;
  if (param_1 == '\0') {
    puVar4 = (undefined1 *)0xe900000000000065;
    uVar5 = 0x726f74735f707061;
  }
  else if (param_1 == '\x01') {
    puVar4 = &DAT_e600000000000000;
    uVar5 = 0x746365726964;
  }
  else {
    puVar4 = &DAT_e600000000000000;
    uVar5 = 0x707061746573;
  }
  *(undefined **)(puVar2 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar2 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar2 + 0x30) = uVar5;
  *(undefined1 **)(puVar2 + 0x38) = puVar4;
  puVar3 = puVar2;
  FUN_10019072c();
  _swift_setDeallocating(puVar2);
  FUN_100005808(puVar2 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  _swift_initStackObject(puVar1,auStack_100);
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x646e756f66;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e500000000000000;
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc70;
  puVar1[0x30] = param_2 & 1;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  FUN_1001940b0(puVar3,puVar2);
  _swift_bridgeObjectRelease(puVar3);
  _swift_bridgeObjectRelease(puVar2);
  return 0xd000000000000011;
}



/* Address: 0x100192b98 | FUN_100192b98 */

void FUN_100192b98(undefined8 param_1,long param_2,ulong param_3,uint param_4)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  lVar2 = param_2;
  uVar3 = param_3;
  FUN_100071370(param_2);
  lVar5 = *(long *)(lVar7 + 0x10);
  uVar6 = (ulong)~(uint)uVar3 & 1;
  lVar4 = lVar5 + uVar6;
  if (SCARRY8(lVar5,uVar6)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100192c70);
    (*pcVar1)();
  }
  if (*(long *)(lVar7 + 0x18) < lVar4) {
    FUN_10019a350(lVar4,param_4 & 1);
    uVar6 = param_3;
    FUN_100071370(param_2);
    lVar2 = param_2;
    if (((uint)uVar3 & 1) != ((uint)uVar6 & 1)) {
      Swift::_KEY_TYPE_OF_DICTIONARY_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100192c38);
      (*pcVar1)();
    }
  }
  else if ((param_4 & 1) == 0) {
    FUN_100199974();
    lVar4 = *unaff_x20;
    goto joined_r0x000100192c84;
  }
  lVar4 = *unaff_x20;
joined_r0x000100192c84:
  if ((uVar3 & 1) != 0) {
    FUN_100193160(param_1,*(long *)(lVar4 + 0x38) + lVar2 * 0x28);
    return;
  }
  FUN_1001906d0();
  _swift_bridgeObjectRetain(param_3);
  return;
}



/* Address: 0x100192cb4 | FUN_100192cb4 */

undefined * FUN_100192cb4(char param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 local_d0;
  long lStack_c8;
  undefined *local_b8;
  undefined **ppuStack_b0;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x6c656e6e616863;
  *(undefined1 **)(puVar1 + 0x28) = &DAT_e700000000000000;
  local_b8 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_1 == '\0') {
    puVar3 = (undefined1 *)0xe900000000000065;
    uVar4 = 0x726f74735f707061;
  }
  else {
    uVar4 = 0x746365726964;
    if (param_1 != '\x01') {
      uVar4 = 0x707061746573;
    }
    puVar3 = &DAT_e600000000000000;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined1 **)(puVar1 + 0x38) = puVar3;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  if (param_3 != 0) {
    ppuStack_b0 = &PTR_PTR_100ebcc60;
    local_d0 = param_2;
    lStack_c8 = param_3;
    _swift_bridgeObjectRetain(param_3);
    puVar1 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    FUN_100192b98(&local_d0,0x746e6169726176,&DAT_e700000000000000,puVar1);
  }
  return puVar2;
}



/* Address: 0x100192e24 | FUN_100192e24 */

undefined * FUN_100192e24(byte param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  undefined8 local_d0;
  long lStack_c8;
  undefined *local_b8;
  undefined **ppuStack_b0;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = 0x79745f726566666f;
  *(undefined8 *)(puVar1 + 0x28) = 0xea00000000006570;
  local_b8 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_1 < 2) {
    puVar3 = (undefined1 *)0xec00000079726f74;
    uVar4 = 0x6375646f72746e69;
    if (param_1 != 0) {
      puVar3 = (undefined1 *)0xeb000000006c616e;
      uVar4 = 0x6f69746f6d6f7270;
    }
  }
  else if (param_1 == 2) {
    puVar3 = (undefined1 *)0xed000065646f635f;
    uVar4 = 0x746e756f63736964;
  }
  else {
    puVar3 = &DAT_e400000000000000;
    uVar4 = 0x656e6f6e;
  }
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x30) = uVar4;
  *(undefined1 **)(puVar1 + 0x38) = puVar3;
  puVar2 = puVar1;
  FUN_10019072c();
  _swift_setDeallocating(puVar1);
  FUN_100005808(puVar1 + 0x20,&DAT_100fb31b0,&DAT_100c311b0);
  if (param_3 != 0) {
    ppuStack_b0 = &PTR_PTR_100ebcc60;
    local_d0 = param_2;
    lStack_c8 = param_3;
    _swift_bridgeObjectRetain(param_3);
    puVar1 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    FUN_100192b98(&local_d0,0x64695f726566666f,&DAT_e800000000000000,puVar1);
  }
  return puVar2;
}



/* Address: 0x100192fd4 | FUN_100192fd4 */

undefined * FUN_100192fd4(byte param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_68;
  undefined1 *puStack_60;
  undefined *local_50;
  undefined **ppuStack_48;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10019072c();
  puVar3 = PTR___type_metadata_for_Swift_String_100eac208;
  if (param_1 < 2) {
    local_68 = 0x796c68746e6f6d;
    if (param_1 != 0) {
      local_68 = 0x6c61756e6e61;
    }
    puStack_60 = &DAT_e700000000000000;
    if (param_1 != 0) {
      puStack_60 = &DAT_e600000000000000;
    }
  }
  else {
    if (param_1 != 2) goto LAB_1001930a8;
    puStack_60 = &DAT_e800000000000000;
    local_68 = 0x656d69746566696c;
  }
  local_50 = PTR___type_metadata_for_Swift_String_100eac208;
  ppuStack_48 = &PTR_PTR_100ebcc60;
  puVar2 = puVar1;
  _swift_isUniquelyReferenced_nonNull_native(puVar1);
  FUN_100192b98(&local_68,0x6e616c70,&DAT_e400000000000000,puVar2);
LAB_1001930a8:
  if (param_3 != 0) {
    local_50 = puVar3;
    ppuStack_48 = &PTR_PTR_100ebcc60;
    local_68 = param_2;
    puStack_60 = (undefined1 *)param_3;
    _swift_bridgeObjectRetain(param_3);
    puVar3 = puVar1;
    _swift_isUniquelyReferenced_nonNull_native(puVar1);
    FUN_100192b98(&local_68,0x5f746375646f7270,0xea00000000006469,puVar3);
  }
  return puVar1;
}



/* Address: 0x100193110 | FUN_100193110 */

undefined8 FUN_100193110(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb32a8;
  FUN_1000037f0(&DAT_100fb32a8,&DAT_100c31088);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x100193160 | FUN_100193160 */

undefined8 FUN_100193160(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb32b0;
  FUN_1000037f0(&DAT_100fb32b0,&DAT_100c31a50);
  (**(code **)(*(long *)(puVar1 + -8) + 0x28))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001931b0 | FUN_1001931b0 */

void FUN_1001931b0(void)

{
  DAT_101057368 = &DAT_74736e695f707061;
  DAT_101057370 = 0xed000064656c6c61;
  DAT_101057378 = PTR___swiftEmptyDictionarySingleton_100eae0e0;
  return;
}



/* Address: 0x1001931ec | FUN_1001931ec */

undefined8 * FUN_1001931ec(void)

{
  if (DAT_100fb32b8 != -1) {
    _swift_once(&DAT_100fb32b8,FUN_1001931b0);
  }
  return &DAT_101057368;
}



/* Address: 0x10019322c | FUN_10019322c */

undefined8 FUN_10019322c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_100fb32b8 != -1) {
    _swift_once(&DAT_100fb32b8,FUN_1001931b0);
  }
  uVar2 = DAT_101057378;
  uVar1 = DAT_101057368;
  _swift_bridgeObjectRetain(DAT_101057370);
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}



/* Address: 0x1001932a0 | FUN_1001932a0 */

undefined8 FUN_1001932a0(undefined1 param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  *(undefined8 *)(puVar2 + 0x20) = 0xd000000000000010;
  puVar1 = PTR___type_metadata_for_Swift_Bool_100eac570;
  *(undefined8 *)(puVar2 + 0x28) = 0x8000000100d97570;
  *(undefined **)(puVar2 + 0x48) = puVar1;
  *(undefined ***)(puVar2 + 0x50) = &PTR_PTR_100ebcc70;
  puVar2[0x30] = param_1;
  FUN_10019072c();
  _swift_setDeallocating(puVar2);
  FUN_100193448(puVar2 + 0x20);
  return 0x6e75616c5f707061;
}



/* Address: 0x10019336c | FUN_10019336c */

undefined8 FUN_10019336c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb3198;
  FUN_1000037f0(&DAT_100fb3198,&BYTE_100c311a0);
  _swift_initStackObject();
  *(undefined8 *)(puVar1 + 0x20) = 0xd000000000000014;
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined **)(puVar1 + 0x48) = PTR___type_metadata_for_Swift_String_100eac208;
  *(undefined ***)(puVar1 + 0x50) = &PTR_PTR_100ebcc60;
  *(undefined8 *)(puVar1 + 0x28) = 0x8000000100d97590;
  *(undefined8 *)(puVar1 + 0x30) = param_1;
  *(undefined8 *)(puVar1 + 0x38) = param_2;
  _swift_bridgeObjectRetain(param_2);
  FUN_10019072c(puVar1);
  _swift_setDeallocating(puVar1);
  FUN_100193448(puVar1 + 0x20);
  return 0x616470755f707061;
}



/* Address: 0x100193448 | FUN_100193448 */

undefined8 FUN_100193448(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb31b0;
  FUN_1000037f0(&DAT_100fb31b0,&DAT_100c311b0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100193490 | FUN_100193490 */

void FUN_100193490(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1001934a4 | FUN_1001934a4 */

undefined1  [16] FUN_1001934a4(void)

{
  return ZEXT816(0x100ebcb60);
}


