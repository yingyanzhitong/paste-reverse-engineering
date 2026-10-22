/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009e162c | FUN_1009e162c */

void FUN_1009e162c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1670. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
  return;
}



/* Address: 0x1009e1674 | FUN_1009e1674 */

void FUN_1009e1674(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e16c8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_3,puVar1);
  return;
}



/* Address: 0x1009e16cc | FUN_1009e16cc */

void FUN_1009e16cc(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_1009e112c();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_initEnumMetadataSingleCase(param_1,0x100,lVar1 + 0x40);
    *(undefined4 *)(*(long *)(param_1 + -8) + 0x54) = *(undefined4 *)(lVar1 + 0x54);
  }
  return;
}



/* Address: 0x1009e1728 | FUN_1009e1728 */

void FUN_1009e1728(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e1734 | thunk_FUN_1009e1c50 */

void thunk_FUN_1009e1c50(void)

{
  FUN_1009e1c50();
  return;
}



/* Address: 0x1009e1738 | FUN_1009e1738 */

void FUN_1009e1738(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e1744 | thunk_FUN_1009e1cb0 */

void thunk_FUN_1009e1cb0(void)

{
  FUN_1009e1cb0();
  return;
}



/* Address: 0x1009e1748 | thunk_FUN_1009e174c */

long * thunk_FUN_1009e174c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    lVar6 = *(long *)(puVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,1,puVar2);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar5 + 0x40));
      return plVar3;
    }
    (**(code **)(lVar6 + 0x10))(param_1,param_2,puVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,puVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009e174c | FUN_1009e174c */

long * FUN_1009e174c(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar5 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    lVar6 = *(long *)(puVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,1,puVar2);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar5 + 0x40));
      return plVar3;
    }
    (**(code **)(lVar6 + 0x10))(param_1,param_2,puVar2);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,puVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar4 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar4 + 0x10 & (uVar4 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1009e182c | thunk_FUN_1009e1830 */

void thunk_FUN_1009e1830(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,puVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e18a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,puVar1);
  return;
}



/* Address: 0x1009e1830 | FUN_1009e1830 */

void FUN_1009e1830(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  uVar2 = param_1;
  (**(code **)(lVar3 + 0x30))(param_1,1,puVar1);
  if ((int)uVar2 != 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009e18a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))(param_1,puVar1);
  return;
}



/* Address: 0x1009e18a4 | thunk_FUN_1009e18a8 */

void * thunk_FUN_1009e18a8(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,param_2,puVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x1009e18a8 | FUN_1009e18a8 */

void * FUN_1009e18a8(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  (**(code **)(lVar3 + 0x10))(param_1,param_2,puVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x1009e1964 | thunk_FUN_1009e1968 */

void * thunk_FUN_1009e1968(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar4 = *(long *)(puVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  pvVar3 = param_1;
  (*pcVar5)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar5)(param_2,1,puVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,puVar1);
      goto LAB_1009e1a1c;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,puVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009e1a1c:
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,puVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x1009e1968 | FUN_1009e1968 */

void * FUN_1009e1968(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar4 = *(long *)(puVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  pvVar3 = param_1;
  (*pcVar5)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar5)(param_2,1,puVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,puVar1);
      goto LAB_1009e1a1c;
    }
    (**(code **)(lVar4 + 0x18))(param_1,param_2,puVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009e1a1c:
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    (**(code **)(lVar4 + 0x10))(param_1,param_2,puVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x1009e1a74 | thunk_FUN_1009e1a78 */

void * thunk_FUN_1009e1a78(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,puVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x1009e1a78 | FUN_1009e1a78 */

void * FUN_1009e1a78(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar3 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar3 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  (**(code **)(lVar3 + 0x20))(param_1,param_2,puVar1);
  (**(code **)(lVar3 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x1009e1b34 | thunk_FUN_1009e1b38 */

void * thunk_FUN_1009e1b38(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar4 = *(long *)(puVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  pvVar3 = param_1;
  (*pcVar5)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar5)(param_2,1,puVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,puVar1);
      goto LAB_1009e1bec;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,puVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009e1bec:
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,puVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x1009e1b38 | FUN_1009e1b38 */

void * FUN_1009e1b38(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  void *pvVar3;
  long lVar4;
  code *pcVar5;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar4 = *(long *)(puVar1 + -8);
  pcVar5 = *(code **)(lVar4 + 0x30);
  pvVar3 = param_1;
  (*pcVar5)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar5)(param_2,1,puVar1);
  if ((int)pvVar3 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar4 + 8))(param_1,puVar1);
      goto LAB_1009e1bec;
    }
    (**(code **)(lVar4 + 0x28))(param_1,param_2,puVar1);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_1009e1bec:
      pvVar3 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar3;
    }
    (**(code **)(lVar4 + 0x20))(param_1,param_2,puVar1);
    (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x1009e1c44 | FUN_1009e1c44 */

void FUN_1009e1c44(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e1c50 | FUN_1009e1c50 */

int FUN_1009e1c50(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  iVar1 = 0;
  if ((int)param_1 != 0) {
    iVar1 = (int)param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x1009e1ca4 | FUN_1009e1ca4 */

void FUN_1009e1ca4(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009e1cb0 | FUN_1009e1cb0 */

void FUN_1009e1cb0(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  puVar2 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1d08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}



/* Address: 0x1009e1d0c | thunk_FUN_1009e1d10 */

void thunk_FUN_1009e1d10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  return;
}



/* Address: 0x1009e1d10 | FUN_1009e1d10 */

void FUN_1009e1d10(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  return;
}



/* Address: 0x1009e1d54 | thunk_FUN_1009e1d58 */

void thunk_FUN_1009e1d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,1,puVar1);
  return;
}



/* Address: 0x1009e1d58 | FUN_1009e1d58 */

void FUN_1009e1d58(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
                    /* WARNING: Could not recover jumptable at 0x0001009e1da0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,1,puVar1);
  return;
}



/* Address: 0x1009e1da4 | thunk_FUN_1009e1da8 */

void thunk_FUN_1009e1da8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_1009e112c();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x1009e1da8 | FUN_1009e1da8 */

void FUN_1009e1da8(undefined8 param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = 0x13f;
  FUN_1009e112c();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(lVar1 + -8) + 0x40,1);
  }
  return;
}



/* Address: 0x1009e1dfc | thunk_FUN_1009e1248 */

void thunk_FUN_1009e1248(void)

{
  FUN_1009e1248();
  return;
}



/* Address: 0x1009e1e00 | thunk_FUN_1009e1248 */

void thunk_FUN_1009e1248(void)

{
  FUN_1009e1248();
  return;
}



/* Address: 0x1009e1e04 | thunk_FUN_1009e1248 */

void thunk_FUN_1009e1248(void)

{
  FUN_1009e1248();
  return;
}



/* Address: 0x1009e1e08 | thunk_FUN_1009e125c */

void thunk_FUN_1009e125c(void)

{
  FUN_1009e125c();
  return;
}



/* Address: 0x1009e1e0c | thunk_FUN_1009e125c */

void thunk_FUN_1009e125c(void)

{
  FUN_1009e125c();
  return;
}



/* Address: 0x1009e1e10 | thunk_FUN_1009e125c */

void thunk_FUN_1009e125c(void)

{
  FUN_1009e125c();
  return;
}



/* Address: 0x1009e1e14 | thunk_FUN_1009e1cb0 */

void thunk_FUN_1009e1cb0(void)

{
  thunk_FUN_1009e1cb0();
  return;
}



/* Address: 0x1009e1e18 | thunk_FUN_1009e0674 */

void thunk_FUN_1009e0674(void)

{
  FUN_1009e0674();
  return;
}



/* Address: 0x1009e1e1c | thunk_FUN_1009e1830 */

void thunk_FUN_1009e1830(void)

{
  thunk_FUN_1009e1830();
  return;
}



/* Address: 0x1009e1e20 | thunk_FUN_1009e1d10 */

void thunk_FUN_1009e1d10(void)

{
  thunk_FUN_1009e1d10();
  return;
}



/* Address: 0x1009e1e24 | thunk_FUN_1009e174c */

void thunk_FUN_1009e174c(void)

{
  thunk_FUN_1009e174c();
  return;
}



/* Address: 0x1009e1e28 | thunk_FUN_1009e18a8 */

void thunk_FUN_1009e18a8(void)

{
  thunk_FUN_1009e18a8();
  return;
}



/* Address: 0x1009e1e2c | thunk_FUN_1009e1968 */

void thunk_FUN_1009e1968(void)

{
  thunk_FUN_1009e1968();
  return;
}



/* Address: 0x1009e1e30 | thunk_FUN_1009e1a78 */

void thunk_FUN_1009e1a78(void)

{
  thunk_FUN_1009e1a78();
  return;
}



/* Address: 0x1009e1e34 | thunk_FUN_1009e1b38 */

void thunk_FUN_1009e1b38(void)

{
  thunk_FUN_1009e1b38();
  return;
}



/* Address: 0x1009e1e38 | thunk_FUN_1009e1c50 */

void thunk_FUN_1009e1c50(void)

{
  thunk_FUN_1009e1c50();
  return;
}



/* Address: 0x1009e1e3c | thunk_FUN_1009e1d58 */

void thunk_FUN_1009e1d58(void)

{
  thunk_FUN_1009e1d58();
  return;
}



/* Address: 0x1009e1e40 | thunk_FUN_1009e1da8 */

void thunk_FUN_1009e1da8(void)

{
  thunk_FUN_1009e1da8();
  return;
}



/* Address: 0x1009e1e44 | thunk_FUN_1009dbba4 */

void thunk_FUN_1009dbba4(undefined8 param_1)

{
  long lVar1;
  long *unaff_x22;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001009dbbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Address: 0x1009e1e48 | thunk_FUN_1009e1240 */

void thunk_FUN_1009e1240(void)

{
  FUN_1009de190();
  return;
}



/* Address: 0x1009e1e4c | FUN_1009e1e4c */

void FUN_1009e1e4c(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff3bd0,&DAT_100f26f38);
  return;
}



/* Address: 0x1009e1e60 | FUN_1009e1e60 */

void FUN_1009e1e60(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff3bd8,&DAT_100f26f68);
  return;
}



/* Address: 0x1009e1e74 | FUN_1009e1e74 */

void FUN_1009e1e74(undefined8 param_1)

{
  FUN_100003c74(param_1,&DAT_100ff3be0,&DAT_100f26f98);
  return;
}



/* Address: 0x1009e1e88 | FUN_1009e1e88 */

void FUN_1009e1e88(void)

{
  FUN_1006df8d8();
  return;
}



/* Address: 0x1009e1e94 | FUN_1009e1e94 */

undefined1  [16] FUN_1009e1e94(void)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0xb8);
  auVar2 = *(undefined1 (*) [16])(unaff_x20 + 0xb0);
  _swift_retain(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 0xb0));
  _swift_retain(uVar1);
  return auVar2;
}



/* Address: 0x1009e1ec8 | FUN_1009e1ec8 */

void FUN_1009e1ec8(void)

{
  long unaff_x20;
  
  FUN_100867ea8(*(undefined8 *)(unaff_x20 + 0xb0),*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Address: 0x1009e1ed0 | FUN_1009e1ed0 */

void FUN_1009e1ed0(void)

{
  long unaff_x20;
  
  _swift_retain(*(undefined8 *)(unaff_x20 + 0xb8));
  return;
}



/* Address: 0x1009e1ed8 | FUN_1009e1ed8 */

void FUN_1009e1ed8(undefined8 param_1)

{
  long lVar1;
  long unaff_x20;
  
  lVar1 = 0;
  FUN_1009e1f14();
  FUN_1000c495c(unaff_x20 + *(int *)(lVar1 + 0x18),param_1,FUN_1009eeb08);
  return;
}



/* Address: 0x1009e1f14 | FUN_1009e1f14 */

void FUN_1009e1f14(undefined8 param_1)

{
  if (DAT_100ff3c78 != 0) {
    return;
  }
  _swift_getSingletonMetadata(param_1,&TargetStructDescriptor_100cc8dd0);
  return;
}



/* Address: 0x1009e1f4c | FUN_1009e1f4c */

void FUN_1009e1f4c(undefined8 param_1)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  long extraout_x12_00;
  undefined8 *puVar10;
  long unaff_x20;
  undefined8 *puVar11;
  long lVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long local_70;
  
  lVar6 = 0;
  FUN_1009e8f94();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar6 + -8) + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)&local_70 + lVar5);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar10 = (undefined8 *)((long)puVar11 - extraout_x12);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  puVar14 = (undefined8 *)((long)puVar10 - extraout_x12_00);
  puVar7 = &DAT_100ff3be8;
  FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = (long)puVar14 - extraout_x8_00;
  lVar8 = 0;
  FUN_1009e1f14();
  local_70 = (long)*(int *)(lVar8 + 0x18);
  FUN_1000c495c(unaff_x20 + local_70,puVar14,FUN_1009e8f94);
  puVar9 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar6);
  if ((int)puVar9 == 0) {
    _swift_release(*puVar14);
    puVar7 = &DAT_100ff3bf8;
    FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
    FUN_1009e22b4((long)puVar14 + (long)*(int *)(puVar7 + 0x30),lVar12);
  }
  else if ((int)puVar9 == 1) {
    FUN_1000523d8(puVar14,lVar12,FUN_1009e908c);
    lVar8 = 0;
    FUN_1009e908c();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar12,0,1,lVar8);
  }
  else {
    _swift_release(puVar14[1]);
    puVar7 = &DAT_100ff3bf0;
    FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
    iVar4 = *(int *)(puVar7 + 0x30);
    lVar8 = 0;
    FUN_1009e908c();
    (**(code **)(*(long *)(lVar8 + -8) + 0x38))(lVar12,1,1,lVar8);
    FUN_1000fb4c4((long)puVar14 + (long)iVar4,&DAT_100ff3be8,&DAT_100c8d4b0);
  }
  FUN_1000523d8(param_1,puVar10,FUN_1009e8f94);
  puVar9 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar6);
  if ((int)puVar9 == 0) {
    uVar13 = *puVar10;
    uVar1 = *(undefined4 *)(puVar10 + 2);
    uVar3 = *(undefined2 *)((long)puVar10 + 0x14);
    uVar2 = *(undefined1 *)((long)puVar10 + 0x16);
    puVar7 = &DAT_100ff3bf8;
    FUN_1000f7830(&DAT_100ff3bf8,&DAT_100c8d470);
    lVar8 = (long)*(int *)(puVar7 + 0x30);
    *puVar11 = uVar13;
    *(undefined8 *)(&stack0xffffffffffffff98 + lVar5) = puVar10[1];
    *(undefined4 *)(&stack0xffffffffffffffa0 + lVar5) = uVar1;
    *(undefined2 *)(&stack0xffffffffffffffa4 + lVar5) = uVar3;
    (&stack0xffffffffffffffa6)[lVar5] = uVar2;
    FUN_1009e22b4(lVar12,(long)puVar11 + lVar8);
    _swift_storeEnumTagMultiPayload(puVar11,lVar6,0);
    lVar5 = local_70;
    FUN_10005241c(unaff_x20 + local_70,FUN_1009eeb08);
    FUN_1000523d8(puVar11,unaff_x20 + lVar5,FUN_1009e8f94);
  }
  else {
    if ((int)puVar9 == 1) {
      FUN_1000fb4c4(lVar12,&DAT_100ff3be8,&DAT_100c8d4b0);
      FUN_10005241c(puVar10,FUN_1009e8f94);
      return;
    }
    puVar7 = &DAT_100ff3bf0;
    FUN_1000f7830(&DAT_100ff3bf0,&DAT_100c8d490);
    lVar8 = (long)*(int *)(puVar7 + 0x30);
    uVar13 = *puVar10;
    *(undefined8 *)(&stack0xffffffffffffff98 + lVar5) = puVar10[1];
    *puVar11 = uVar13;
    FUN_1009e22b4(lVar12,(long)puVar11 + lVar8);
    _swift_storeEnumTagMultiPayload(puVar11,lVar6,2);
    lVar5 = local_70;
    FUN_10005241c(unaff_x20 + local_70,FUN_1009eeb08);
    FUN_1000523d8(puVar11,unaff_x20 + lVar5,FUN_1009e8f94);
  }
  FUN_1000fb4c4((long)puVar10 + lVar8,&DAT_100ff3be8,&DAT_100c8d4b0);
  return;
}



/* Address: 0x1009e22b4 | FUN_1009e22b4 */

undefined8 FUN_1009e22b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff3be8;
  FUN_1000f7830(&DAT_100ff3be8,&DAT_100c8d4b0);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009e2304 | FUN_1009e2304 */

undefined1  [16] FUN_1009e2304(long *param_1)

{
  long lVar1;
  void *pvVar2;
  long unaff_x20;
  void *pvVar3;
  undefined1 auVar4 [16];
  
  *param_1 = unaff_x20;
  lVar1 = 0;
  FUN_1009eeb08();
  pvVar3 = *(void **)(*(long *)(lVar1 + -8) + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar2 = _malloc((size_t)pvVar3);
    param_1[1] = (long)pvVar2;
    pvVar3 = _malloc((size_t)pvVar3);
  }
  else {
    pvVar2 = pvVar3;
    _swift_coroFrameAlloc(pvVar3,0xc1d4);
    param_1[1] = (long)pvVar2;
    _swift_coroFrameAlloc(pvVar3,0xc1d4);
  }
  param_1[2] = (long)pvVar3;
  lVar1 = 0;
  FUN_1009e1f14();
  FUN_1000c495c(unaff_x20 + *(int *)(lVar1 + 0x18),pvVar3,FUN_1009eeb08);
  auVar4._8_8_ = pvVar3;
  auVar4._0_8_ = FUN_1009e23ac;
  return auVar4;
}



/* Address: 0x1009e23ac | FUN_1009e23ac */

void FUN_1009e23ac(long param_1,ulong param_2)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = *(void **)(param_1 + 8);
  pvVar2 = *(void **)(param_1 + 0x10);
  if ((param_2 & 1) == 0) {
    FUN_1009e1f4c(pvVar2);
  }
  else {
    FUN_1000c495c(pvVar2,pvVar1,FUN_1009eeb08);
    FUN_1009e1f4c(pvVar1);
    FUN_10005241c(pvVar2,FUN_1009eeb08);
  }
  _free(pvVar2);
  _free(pvVar1);
  return;
}



/* Address: 0x1009e241c | FUN_1009e241c */

void FUN_1009e241c(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar3 = param_2;
  lVar4 = param_3;
  FUN_100867fec();
  uVar1 = 0;
  if (lVar4 != 0) {
    uVar1 = uVar3;
  }
  lVar2 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar2 = lVar4;
  }
  FUN_1009fe520(&local_e0,uVar1,lVar2);
  param_1[0x11] = uStack_58;
  param_1[0x10] = local_60;
  param_1[0x13] = uStack_48;
  param_1[0x12] = uStack_50;
  param_1[0x15] = uStack_38;
  param_1[0x14] = local_40;
  param_1[9] = uStack_98;
  param_1[8] = local_a0;
  param_1[0xb] = uStack_88;
  param_1[10] = uStack_90;
  param_1[0xd] = uStack_78;
  param_1[0xc] = local_80;
  param_1[0xf] = uStack_68;
  param_1[0xe] = uStack_70;
  param_1[1] = uStack_d8;
  *param_1 = local_e0;
  param_1[3] = uStack_c8;
  param_1[2] = uStack_d0;
  param_1[5] = uStack_b8;
  param_1[4] = local_c0;
  param_1[7] = uStack_a8;
  param_1[6] = uStack_b0;
  param_1[0x16] = param_2;
  param_1[0x17] = param_3;
  lVar4 = 0;
  FUN_1009e1f14();
  FUN_1000523d8(param_4,(long)param_1 + (long)*(int *)(lVar4 + 0x18),FUN_1009eeb08);
  return;
}



/* Address: 0x1009e24c4 | FUN_1009e24c4 */

void FUN_1009e24c4(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  pthread_mutexattr_t local_108;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar3 = param_2;
  lVar4 = param_3;
  FUN_100867fec();
  uVar7 = 0;
  if (lVar4 != 0) {
    uVar7 = uVar3;
  }
  lVar6 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar6 = lVar4;
  }
  FUN_1009fe520(&local_f8,uVar7,lVar6);
  param_1[0x11] = uStack_70;
  param_1[0x10] = local_78;
  param_1[0x13] = uStack_60;
  param_1[0x12] = local_68;
  param_1[0x15] = uStack_50;
  param_1[0x14] = local_58;
  param_1[9] = uStack_b0;
  param_1[8] = local_b8;
  param_1[0xb] = uStack_a0;
  param_1[10] = local_a8;
  param_1[0xd] = uStack_90;
  param_1[0xc] = local_98;
  param_1[0xf] = uStack_80;
  param_1[0xe] = local_88;
  param_1[1] = uStack_f0;
  *param_1 = local_f8;
  param_1[3] = uStack_e0;
  param_1[2] = local_e8;
  param_1[5] = uStack_d0;
  param_1[4] = local_d8;
  param_1[7] = uStack_c0;
  param_1[6] = local_c8;
  param_1[0x16] = param_2;
  param_1[0x17] = param_3;
  lVar4 = 0;
  FUN_1009e1f14();
  lVar4 = (long)param_1 + (long)*(int *)(lVar4 + 0x18);
  FUN_1000f8cac(param_4,lVar4,&DAT_100ff3c00,&DAT_100c8d460);
  puVar5 = &DAT_100ff3c08;
  FUN_1000f7830(&DAT_100ff3c08,&DAT_100c8e0c0);
  _swift_allocObject();
  puVar5[0x10] = 0;
  local_108.__sig = 0;
  local_108.__opaque[0] = '\0';
  local_108.__opaque[1] = '\0';
  local_108.__opaque[2] = '\0';
  local_108.__opaque[3] = '\0';
  local_108.__opaque[4] = '\0';
  local_108.__opaque[5] = '\0';
  local_108.__opaque[6] = '\0';
  local_108.__opaque[7] = '\0';
  _swift_retain(param_2);
  _swift_retain(param_3);
  _pthread_mutexattr_init(&local_108);
  iVar2 = _pthread_mutex_init((pthread_mutex_t *)(puVar5 + 0x18),&local_108);
  if (iVar2 == 0) {
    _swift_release(param_3);
    _swift_release(param_2);
    FUN_1000fb4c4(param_4,&DAT_100ff3c00,&DAT_100c8d460);
    lVar6 = 0;
    FUN_1009e908c();
    *(undefined **)(lVar4 + *(int *)(lVar6 + 0x14)) = puVar5;
    uVar7 = 0;
    FUN_1009e8f94(0);
    _swift_storeEnumTagMultiPayload(lVar4,uVar7,1);
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_48) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009e2664);
  (*pcVar1)();
}


