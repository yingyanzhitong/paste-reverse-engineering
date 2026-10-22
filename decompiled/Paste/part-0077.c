/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1000e78b4 | FUN_1000e78b4 */

void FUN_1000e78b4(undefined8 param_1)

{
  if (DAT_100fad870 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetEnumDescriptor_100ca2da8);
  return;
}



/* Address: 0x1000e78ec | FUN_1000e78ec */

void FUN_1000e78ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(param_2 + 1);
  *param_1 = uVar1;
  return;
}



/* Address: 0x1000e7900 | FUN_1000e7900 */

int FUN_1000e7900(int *param_1,int param_2)

{
  if ((param_2 != 0) && (*(char *)((long)param_1 + 9) != '\0')) {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1000e7920 | FUN_1000e7920 */

void FUN_1000e7920(int *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  
  if (param_2 == 0) {
    if (param_3 == 0) {
      return;
    }
    uVar1 = 0;
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    *param_1 = param_2 + -1;
    if (param_3 == 0) {
      return;
    }
    uVar1 = 1;
  }
  *(undefined1 *)((long)param_1 + 9) = uVar1;
  return;
}



/* Address: 0x1000e7950 | FUN_1000e7950 */

int FUN_1000e7950(int *param_1)

{
  if ((char)param_1[2] != '\0') {
    return *param_1 + 1;
  }
  return 0;
}



/* Address: 0x1000e796c | FUN_1000e796c */

void FUN_1000e796c(ulong *param_1,int param_2)

{
  if (param_2 != 0) {
    *param_1 = (ulong)(param_2 - 1);
    *(undefined1 *)(param_1 + 1) = 1;
    return;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  return;
}



/* Address: 0x1000e798c | FUN_1000e798c */

undefined1  [16] FUN_1000e798c(void)

{
  return ZEXT816(0x100eb6550);
}



/* Address: 0x1000e799c | FUN_1000e799c */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_1000e799c(void)

{
  return ZEXT816(0x100fad768);
}



/* Address: 0x1000e79bc | FUN_1000e79bc */

long * FUN_1000e79bc(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  Date DVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100fad488;
    FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
    lVar6 = *(long *)(puVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,3,puVar2);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
      return plVar3;
    }
    DVar4 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar4.unknown + -8) + 0x10))(param_1,param_2,DVar4.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar2 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar2 + 0x30));
    (**(code **)(lVar6 + 0x38))(param_1,0,3,puVar2);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000e7ab4 | FUN_1000e7ab4 */

void FUN_1000e7ab4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  Date DVar3;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  uVar2 = param_1;
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,3,puVar1);
  if ((int)uVar2 != 0) {
    return;
  }
  DVar3 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000e7b20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar3.unknown + -8) + 8))(param_1,DVar3.unknown);
  return;
}



/* Address: 0x1000e7b24 | FUN_1000e7b24 */

void * FUN_1000e7b24(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  Date DVar3;
  long lVar4;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  lVar4 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,3,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  DVar3 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,param_2,DVar3.unknown);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
  (**(code **)(lVar4 + 0x38))(param_1,0,3,puVar1);
  return param_1;
}



/* Address: 0x1000e7bf8 | FUN_1000e7bf8 */

void * FUN_1000e7bf8(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  Date DVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  lVar5 = *(long *)(puVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar4 = param_1;
  (*pcVar6)(param_1,3,puVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,3,puVar1);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar2 != 0) {
      FUN_100005808(param_1,&DAT_100fad488,&DAT_100c2d2b0);
      goto LAB_1000e7ccc;
    }
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x18))(param_1,param_2,DVar3.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1000e7ccc:
      pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar4;
    }
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x10))(param_1,param_2,DVar3.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    (**(code **)(lVar5 + 0x38))(param_1,0,3,puVar1);
  }
  return param_1;
}



/* Address: 0x1000e7d3c | FUN_1000e7d3c */

void * FUN_1000e7d3c(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  Date DVar3;
  long lVar4;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  lVar4 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,3,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  DVar3 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))(param_1,param_2,DVar3.unknown);
  *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
  (**(code **)(lVar4 + 0x38))(param_1,0,3,puVar1);
  return param_1;
}



/* Address: 0x1000e7e10 | FUN_1000e7e10 */

void * FUN_1000e7e10(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  Date DVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  lVar5 = *(long *)(puVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar4 = param_1;
  (*pcVar6)(param_1,3,puVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,3,puVar1);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar2 != 0) {
      FUN_100005808(param_1,&DAT_100fad488,&DAT_100c2d2b0);
      goto LAB_1000e7ee4;
    }
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x28))(param_1,param_2,DVar3.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1000e7ee4:
      pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar4;
    }
    DVar3 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar3.unknown + -8) + 0x20))(param_1,param_2,DVar3.unknown);
    *(undefined8 *)((long)param_1 + (long)*(int *)(puVar1 + 0x30)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(puVar1 + 0x30));
    (**(code **)(lVar5 + 0x38))(param_1,0,3,puVar1);
  }
  return param_1;
}



/* Address: 0x1000e7f54 | FUN_1000e7f54 */

void FUN_1000e7f54(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e7f60 | FUN_1000e7f60 */

int FUN_1000e7f60(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  iVar1 = 0;
  if (2 < (uint)param_1) {
    iVar1 = (uint)param_1 - 3;
  }
  return iVar1;
}



/* Address: 0x1000e7fb4 | FUN_1000e7fb4 */

void FUN_1000e7fb4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e7fc0 | FUN_1000e7fc0 */

void FUN_1000e7fc0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 3;
  }
  puVar2 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
                    /* WARNING: Could not recover jumptable at 0x0001000e801c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}



/* Address: 0x1000e8020 | FUN_1000e8020 */

void FUN_1000e8020(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
                    /* WARNING: Could not recover jumptable at 0x0001000e8060. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,3,puVar1);
  return;
}



/* Address: 0x1000e8064 | FUN_1000e8064 */

void FUN_1000e8064(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad488;
  FUN_1000037f0(&DAT_100fad488,&DAT_100c2d2b0);
                    /* WARNING: Could not recover jumptable at 0x0001000e80ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,3,puVar1);
  return;
}



/* Address: 0x1000e80b0 | FUN_1000e80b0 */

undefined1  [16] FUN_1000e80b0(undefined8 param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_40 [32];
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    _swift_getTupleTypeLayout2
              (auStack_40,*(long *)(DVar1.unknown + -8) + 0x40,
               PTR___value_witness_table_for_Builtin_Int64_100eabd48 + 0x40);
    _swift_initEnumMetadataSinglePayload(param_1,0x100,auStack_40,3);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x1000e8124 | FUN_1000e8124 */

void FUN_1000e8124(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e8148 | FUN_1000e8148 */

void FUN_1000e8148(void)

{
  FUN_1000e7590();
  return;
}



/* Address: 0x1000e8150 | FUN_1000e8150 */

void FUN_1000e8150(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000e8174 | FUN_1000e8174 */

void FUN_1000e8174(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1000da5cc(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1000e817c | FUN_1000e817c */

undefined8 FUN_1000e817c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad880;
  FUN_1000037f0(&DAT_100fad880,&DAT_100c2c8f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000e81cc | FUN_1000e81cc */

undefined8 FUN_1000e81cc(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fad880;
  FUN_1000037f0(&DAT_100fad880,&DAT_100c2c8f0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1000e821c | thunk_FUN_1000dbcc0 */

void thunk_FUN_1000dbcc0(void)

{
  FUN_1000dbcc0();
  return;
}



/* Address: 0x1000e8220 | thunk_FUN_10019b694 */

void thunk_FUN_10019b694(void)

{
  thunk_FUN_10019b694();
  return;
}



/* Address: 0x1000e8224 | thunk_FUN_1001965a8 */

void thunk_FUN_1001965a8(void)

{
  thunk_FUN_1001965a8();
  return;
}



/* Address: 0x1000e8228 | FUN_1000e8228 */

long * FUN_1000e8228(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  Date DVar2;
  long lVar3;
  ulong uVar4;
  
  uVar1 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    DVar2 = Foundation::Date::typeMetadataAccessor();
    (**(code **)(*(long *)(DVar2.unknown + -8) + 0x10))(param_1,param_2,DVar2.unknown);
    *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
         *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  }
  else {
    lVar3 = *param_2;
    *param_1 = lVar3;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar3 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1000e82b0 | FUN_1000e82b0 */

void FUN_1000e82b0(undefined8 param_1)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001000e82e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(DVar1.unknown + -8) + 8))(param_1,DVar1.unknown);
  return;
}



/* Address: 0x1000e82e4 | FUN_1000e82e4 */

long FUN_1000e82e4(long param_1,long param_2,long param_3)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x10))(param_1,param_2,DVar1.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1000e8340 | FUN_1000e8340 */

long FUN_1000e8340(long param_1,long param_2,long param_3)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x18))(param_1,param_2,DVar1.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1000e839c | FUN_1000e839c */

long FUN_1000e839c(long param_1,long param_2,long param_3)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))(param_1,param_2,DVar1.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1000e83f8 | FUN_1000e83f8 */

long FUN_1000e83f8(long param_1,long param_2,long param_3)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x28))(param_1,param_2,DVar1.unknown);
  *(undefined1 *)(param_1 + *(int *)(param_3 + 0x14)) =
       *(undefined1 *)(param_2 + *(int *)(param_3 + 0x14));
  return param_1;
}



/* Address: 0x1000e8454 | FUN_1000e8454 */

void FUN_1000e8454(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e8460 | FUN_1000e8460 */

ulong FUN_1000e8460(ulong param_1,undefined8 param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  uint uVar3;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if ((int)param_2 == *(int *)(*(long *)(DVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001000e84b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x30))(param_1,param_2,DVar1.unknown);
    return param_1;
  }
  uVar3 = (uint)*(byte *)(param_1 + (long)*(int *)(param_3 + 0x14));
  if (uVar3 < 2) {
    uVar2 = 0;
  }
  else {
    uVar2 = (ulong)((uVar3 + 0x7ffffffe & 0x7fffffff) + 1);
  }
  return uVar2;
}



/* Address: 0x1000e84ec | FUN_1000e84ec */

void FUN_1000e84ec(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1000e84f8 | FUN_1000e84f8 */

void FUN_1000e84f8(long param_1,undefined8 param_2,int param_3,long param_4)

{
  Date DVar1;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_3 == *(int *)(*(long *)(DVar1.unknown + -8) + 0x54)) {
                    /* WARNING: Could not recover jumptable at 0x0001000e8550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(long *)(DVar1.unknown + -8) + 0x38))(param_1,param_2,param_2,DVar1.unknown);
    return;
  }
  *(char *)(param_1 + *(int *)(param_4 + 0x14)) = (char)param_2 + '\x01';
  return;
}



/* Address: 0x1000e8570 | FUN_1000e8570 */

void FUN_1000e8570(undefined8 param_1)

{
  if (DAT_100fad8f0 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100ca2dd0);
  return;
}



/* Address: 0x1000e85a8 | FUN_1000e85a8 */

undefined1  [16] FUN_1000e85a8(long param_1,ulong param_2)

{
  Date DVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long local_30;
  undefined *puStack_28;
  
  DVar1 = Foundation::Date::typeMetadataAccessor();
  if (param_2 < 0x40) {
    local_30 = *(long *)(DVar1.unknown + -8) + 0x40;
    puStack_28 = &DAT_100c2c9b8;
    _swift_initStructMetadata(param_1,0x100,2,&local_30,param_1 + 0x10);
    DVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = DVar1.unknown;
  return auVar3;
}



/* Address: 0x1000e8618 | FUN_1000e8618 */

/* WARNING: Removing unreachable block (ram,0x0001000e881c) */
/* WARNING: Removing unreachable block (ram,0x0001000e8794) */

void FUN_1000e8618(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined1 *puVar7;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long unaff_x21;
  long lVar8;
  long lVar9;
  long lVar10;
  long local_90;
  undefined8 local_88;
  long local_80;
  undefined *local_78;
  undefined *local_70;
  long local_68;
  undefined1 local_52;
  undefined1 local_51;
  
  local_88 = param_1;
  local_70 = (undefined *)Foundation::Date::typeMetadataAccessor();
  local_80 = *(long *)(local_70 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(local_80 + 0x40));
  lVar10 = (long)&local_90 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100fad928;
  local_68 = lVar10;
  FUN_1000037f0(&DAT_100fad928,&DAT_100c2ca48);
  lVar9 = *(long *)(puVar5 + -8);
  local_78 = puVar5;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar6 = 0;
  FUN_1000e8570();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar8 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_2,*(undefined8 *)(param_2 + 0x18));
  FUN_1000e8bb0();
  Swift::Decoder::_container();
  lVar2 = local_80;
  if (unaff_x21 == 0) {
    local_51 = 0;
    puVar5 = &DAT_100fad110;
    local_90 = lVar6;
    FUN_1000e8c70(&DAT_100fad110,PTR_Foundation__Foundation__Date_>Swift__Decodable_100ea74a8);
    puVar4 = local_70;
    puVar3 = local_78;
    Swift::KeyedDecodingContainer::_decode(local_68,local_70,&local_51,local_78,local_70,puVar5);
    (**(code **)(lVar2 + 0x20))(lVar8,local_68,puVar4);
    local_52 = 1;
    puVar7 = &local_52;
    Swift::KeyedDecodingContainer::_decodeIfPresent(puVar7,puVar3);
    (**(code **)(lVar9 + 8))(lVar10,puVar3);
    uVar1 = local_88;
    *(byte *)(lVar8 + *(int *)(local_90 + 0x14)) = (byte)puVar7 & 1;
    FUN_1000e8bf0(lVar8,uVar1);
    FUN_100004594(param_2);
    FUN_1000e8c34(lVar8);
  }
  else {
    FUN_100004594(param_2);
  }
  return;
}



/* Address: 0x1000e8864 | FUN_1000e8864 */

void FUN_1000e8864(long param_1)

{
  undefined *puVar1;
  long lVar2;
  long extraout_x8;
  long unaff_x20;
  long unaff_x21;
  long lVar3;
  undefined1 auStack_60 [14];
  undefined1 local_52;
  undefined1 local_51;
  
  puVar1 = &DAT_100fad938;
  FUN_1000037f0(&DAT_100fad938,&DAT_100c2ca50);
  lVar3 = *(long *)(puVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  FUN_1000e8bb0();
  Swift::Encoder::_container();
  local_51 = 0;
  Foundation::Date::typeMetadataAccessor();
  FUN_1000e8c70(&DAT_100fad100,PTR_Foundation__Foundation__Date_>Swift__Encodable_100ea7490);
  Swift::KeyedEncodingContainer::_encode();
  if (unaff_x21 == 0) {
    lVar2 = 0;
    FUN_1000e8570();
    local_52 = 1;
    Swift::KeyedEncodingContainer::_encode
              (*(undefined1 *)(unaff_x20 + *(int *)(lVar2 + 0x14)),&local_52,puVar1);
  }
  (**(code **)(lVar3 + 8))(auStack_60 + -extraout_x8,puVar1);
  return;
}



/* Address: 0x1000e89b0 | FUN_1000e89b0 */

undefined1  [16] FUN_1000e89b0(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  char *unaff_x20;
  undefined1 auVar3 [16];
  
  uVar1 = 0x6552797269707865;
  if (*unaff_x20 != '\x01') {
    uVar1 = 0x4164657472617473;
  }
  uVar2 = 0xee00646574726f70;
  if (*unaff_x20 != '\x01') {
    uVar2 = 0xe900000000000074;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}



/* Address: 0x1000e89fc | FUN_1000e89fc */

void FUN_1000e89fc(undefined1 *param_1,long param_2,long param_3)

{
  bool bVar1;
  undefined1 uVar2;
  
  if (param_2 != 0x4164657472617473 || param_3 != -0x16ffffffffffff8c) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((_StringGuts)0x4164657472617473,(_StringGuts)0xe900000000000074,
                       (_StringComparisonResult)(__int8)param_2);
    if (!bVar1) {
      if ((param_2 == 0x6552797269707865) && (param_3 == -0x11ff9b9a8b8d9090)) {
        _swift_bridgeObjectRelease(0xee00646574726f70);
        uVar2 = 1;
      }
      else {
        bVar1 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)0x6552797269707865,(_StringGuts)0xee00646574726f70,
                           (_StringComparisonResult)(__int8)param_2);
        _swift_bridgeObjectRelease(param_3);
        uVar2 = 1;
        if (!bVar1) {
          uVar2 = 2;
        }
      }
      goto LAB_1000e8a64;
    }
  }
  _swift_bridgeObjectRelease(param_3);
  uVar2 = 0;
LAB_1000e8a64:
  *param_1 = uVar2;
  return;
}



/* Address: 0x1000e8ae4 | FUN_1000e8ae4 */

String FUN_1000e8ae4(void)

{
  String SVar1;
  
  FUN_1000e8bb0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_debugDescription();
  return SVar1;
}



/* Address: 0x1000e8b0c | FUN_1000e8b0c */

String FUN_1000e8b0c(void)

{
  String SVar1;
  
  FUN_1000e8bb0();
  SVar1 = (extension_Swift)::Swift::CodingKey::get_description();
  return SVar1;
}



/* Address: 0x1000e8b34 | FUN_1000e8b34 */

void FUN_1000e8b34(void)

{
  FUN_1000e8618();
  return;
}



/* Address: 0x1000e8b48 | FUN_1000e8b48 */

void FUN_1000e8b48(void)

{
  FUN_1000e8864();
  return;
}



/* Address: 0x1000e8b5c | FUN_1000e8b5c */

byte FUN_1000e8b5c(Date param_1,Date param_2,Date param_3)

{
  bool bVar1;
  byte bVar2;
  
  bVar1 = Foundation::Date::___infix(param_1,param_2,param_3);
  if (bVar1) {
    bVar2 = param_1.unknown[*(int *)(param_3.unknown + 0x14)] ^
            param_2.unknown[*(int *)(param_3.unknown + 0x14)] ^ 1;
  }
  else {
    bVar2 = 0;
  }
  return bVar2 & 1;
}



/* Address: 0x1000e8bb0 | FUN_1000e8bb0 */

void FUN_1000e8bb0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad930 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2cb1c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2cb1c,&DAT_100eb6670);
  DAT_100fad930 = pTVar1;
  return;
}



/* Address: 0x1000e8bf0 | FUN_1000e8bf0 */

undefined8 FUN_1000e8bf0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000e8570();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1000e8c34 | FUN_1000e8c34 */

undefined8 FUN_1000e8c34(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1000e8570();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1000e8c70 | FUN_1000e8c70 */

void FUN_1000e8c70(long *param_1,long param_2)

{
  Date DVar1;
  
  if (*param_1 == 0) {
    DVar1 = Foundation::Date::typeMetadataAccessor();
    _swift_getWitnessTable(param_2,DVar1.unknown);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1000e8cb0 | FUN_1000e8cb0 */

undefined1  [16] FUN_1000e8cb0(void)

{
  return ZEXT816(0x100eb6670);
}



/* Address: 0x1000e8cc0 | thunk_FUN_1000e8cc4 */

void thunk_FUN_1000e8cc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2caf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2caf4,&DAT_100eb6670);
  DAT_100fad940 = pTVar1;
  return;
}



/* Address: 0x1000e8cc4 | FUN_1000e8cc4 */

void FUN_1000e8cc4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad940 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2caf4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2caf4,&DAT_100eb6670);
  DAT_100fad940 = pTVar1;
  return;
}



/* Address: 0x1000e8d04 | thunk_FUN_1000e8d08 */

void thunk_FUN_1000e8d08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ca8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ca8c,&DAT_100eb6670);
  DAT_100fad948 = pTVar1;
  return;
}



/* Address: 0x1000e8d08 | FUN_1000e8d08 */

void FUN_1000e8d08(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad948 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ca8c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ca8c,&DAT_100eb6670);
  DAT_100fad948 = pTVar1;
  return;
}



/* Address: 0x1000e8d48 | thunk_FUN_1000e8d4c */

void thunk_FUN_1000e8d4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ca64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ca64,&DAT_100eb6670);
  DAT_100fad950 = pTVar1;
  return;
}



/* Address: 0x1000e8d4c | FUN_1000e8d4c */

void FUN_1000e8d4c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fad950 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c2ca64;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c2ca64,&DAT_100eb6670);
  DAT_100fad950 = pTVar1;
  return;
}



/* Address: 0x1000e8d8c | FUN_1000e8d8c */

undefined8 * FUN_1000e8d8c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_2[3];
  param_1[3] = uVar1;
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  _swift_retain();
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1000e8dd8 | FUN_1000e8dd8 */

undefined8 * FUN_1000e8dd8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 2) = *(undefined1 *)(param_2 + 2);
  uVar1 = param_1[3];
  param_1[3] = param_2[3];
  _swift_retain();
  _swift_release(uVar1);
  *(undefined1 *)(param_1 + 4) = *(undefined1 *)(param_2 + 4);
  return param_1;
}


