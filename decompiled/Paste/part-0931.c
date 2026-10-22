/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100a04f74 | FUN_100a04f74 */

void FUN_100a04f74(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a03658(param_1,param_2,param_3 & 0xffffffffffffff | 0x100000000000000);
  return;
}



/* Address: 0x100a04ffc | FUN_100a04ffc */

void FUN_100a04ffc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x50;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100a04cf8(param_1,param_2,param_3);
  return;
}



/* Address: 0x100a05068 | FUN_100a05068 */

void FUN_100a05068(undefined8 param_1)

{
  long *plVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = unaff_x20;
  plVar1 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_100a04f28;
  FUN_100a03658(param_1,0,0x200000000000000);
  return;
}



/* Address: 0x100a050e0 | FUN_100a050e0 */

void FUN_100a050e0(void)

{
  code *pcVar1;
  
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a050e4);
  (*pcVar1)();
}



/* Address: 0x100a050e4 | thunk_FUN_100a05240 */

void thunk_FUN_100a05240(void)

{
  FUN_100a05240();
  return;
}



/* Address: 0x100a050e8 | thunk_FUN_100a05428 */

void thunk_FUN_100a05428(void)

{
  FUN_100a05428();
  return;
}



/* Address: 0x100a050ec | thunk_FUN_100a054d8 */

void thunk_FUN_100a054d8(void)

{
  FUN_100a054d8();
  return;
}



/* Address: 0x100a050f0 | FUN_100a050f0 */

void FUN_100a050f0(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a050fc | thunk_FUN_100a055b4 */

void thunk_FUN_100a055b4(void)

{
  FUN_100a055b4();
  return;
}



/* Address: 0x100a05100 | FUN_100a05100 */

void FUN_100a05100(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a0510c | thunk_FUN_100a05608 */

void thunk_FUN_100a05608(void)

{
  FUN_100a05608();
  return;
}



/* Address: 0x100a05110 | thunk_FUN_100a05654 */

void thunk_FUN_100a05654(void)

{
  FUN_100a05654();
  return;
}



/* Address: 0x100a05114 | FUN_100a05114 */

void FUN_100a05114(undefined8 param_1)

{
  undefined *puVar1;
  
  if (DAT_100ff45f0 != 0) {
    return;
  }
  puVar1 = &DAT_100f082a8;
  FUN_1005e9588();
  if (puVar1 != (undefined *)0x0) {
    return;
  }
  DAT_100ff45f0 = param_1;
  return;
}



/* Address: 0x100a05164 | FUN_100a05164 */

long * FUN_100a05164(long *param_1,long *param_2)

{
  uint uVar1;
  bool bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  undefined *puVar6;
  ulong uVar7;
  
  puVar3 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  uVar1 = *(uint *)(*(long *)(puVar3 + -8) + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    plVar4 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar3);
    bVar2 = (int)plVar4 != 1;
    if (bVar2) {
      puVar6 = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      (**(code **)(*(long *)(puVar6 + -8) + 0x10))(param_1,param_2,puVar6);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar3,!bVar2);
  }
  else {
    lVar5 = *param_2;
    *param_1 = lVar5;
    uVar7 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar5 + (uVar7 + 0x10 & (uVar7 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x100a05240 | FUN_100a05240 */

void FUN_100a05240(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  
  puVar1 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  puVar2 = param_1;
  _swift_getEnumCaseMultiPayload(param_1,puVar1);
  if ((int)puVar2 == 1) {
    _swift_release(*param_1);
    return;
  }
  puVar1 = &DAT_100ff4580;
  FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
                    /* WARNING: Could not recover jumptable at 0x000100a052b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return;
}



/* Address: 0x100a052b8 | FUN_100a052b8 */

undefined8 * FUN_100a052b8(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar2 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  puVar3 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar2);
  bVar1 = (int)puVar3 != 1;
  if (bVar1) {
    puVar4 = &DAT_100ff4580;
    FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
    (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
  }
  else {
    *param_1 = *param_2;
    _swift_retain();
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  return param_1;
}



/* Address: 0x100a05360 | FUN_100a05360 */

undefined8 * FUN_100a05360(undefined8 *param_1,undefined8 *param_2)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  if (param_1 != param_2) {
    puVar2 = &DAT_100ff4578;
    FUN_1000fb4c4(param_1,&DAT_100ff4578,&DAT_100c8e0b0);
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    puVar3 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar2);
    bVar1 = (int)puVar3 != 1;
    if (bVar1) {
      puVar4 = &DAT_100ff4580;
      FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
      (**(code **)(*(long *)(puVar4 + -8) + 0x10))(param_1,param_2,puVar4);
    }
    else {
      *param_1 = *param_2;
      _swift_retain();
    }
    _swift_storeEnumTagMultiPayload(param_1,puVar2,!bVar1);
  }
  return param_1;
}



/* Address: 0x100a05428 | FUN_100a05428 */

void * FUN_100a05428(void *param_1,void *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100ff4578;
  FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
  pvVar2 = param_2;
  _swift_getEnumCaseMultiPayload(param_2,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
    return pvVar2;
  }
  puVar3 = &DAT_100ff4580;
  FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
  (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
  _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
  return param_1;
}



/* Address: 0x100a054d8 | FUN_100a054d8 */

void * FUN_100a054d8(void *param_1,void *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined *puVar3;
  
  if (param_1 != param_2) {
    puVar1 = &DAT_100ff4578;
    FUN_1000fb4c4(param_1,&DAT_100ff4578,&DAT_100c8e0b0);
    FUN_1000f7830(&DAT_100ff4578,&DAT_100c8e0b0);
    pvVar2 = param_2;
    _swift_getEnumCaseMultiPayload(param_2,puVar1);
    if ((int)pvVar2 != 0) {
      pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar1 + -8) + 0x40));
      return pvVar2;
    }
    puVar3 = &DAT_100ff4580;
    FUN_1000f7830(&DAT_100ff4580,&DAT_100c8dc90);
    (**(code **)(*(long *)(puVar3 + -8) + 0x20))(param_1,param_2,puVar3);
    _swift_storeEnumTagMultiPayload(param_1,puVar1,0);
  }
  return param_1;
}



/* Address: 0x100a055a8 | FUN_100a055a8 */

void FUN_100a055a8(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a055b4 | FUN_100a055b4 */

void FUN_100a055b4(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff4568;
  FUN_1000f7830(&DAT_100ff4568,&DAT_100c8dc00);
                    /* WARNING: Could not recover jumptable at 0x000100a055f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,param_2,puVar1);
  return;
}



/* Address: 0x100a055fc | FUN_100a055fc */

void FUN_100a055fc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x100a05608 | FUN_100a05608 */

void FUN_100a05608(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff4568;
  FUN_1000f7830(&DAT_100ff4568,&DAT_100c8dc00);
                    /* WARNING: Could not recover jumptable at 0x000100a05650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,param_2,puVar1);
  return;
}



/* Address: 0x100a05654 | FUN_100a05654 */

void FUN_100a05654(long param_1,ulong param_2)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  FUN_100a05114();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x100a056bc | FUN_100a056bc */

undefined ** FUN_100a056bc(void)

{
  return &PTR_PTR_100f27a30;
}



/* Address: 0x100a056c8 | FUN_100a056c8 */

void FUN_100a056c8(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  ulong *unaff_x20;
  ulong uVar10;
  
  uVar5 = *unaff_x20;
  lVar7 = *(long *)(uVar5 + 0x18);
  if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05874);
    (*pcVar3)();
  }
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = *unaff_x20;
  if ((*(long *)(uVar10 + 0x10) < lVar7 + 1) || ((uVar5 & 1) == 0)) {
    FUN_100a05908();
    uVar10 = *unaff_x20;
  }
  lVar7 = uVar10 + 0x10;
  lVar6 = uVar10 + 0x28;
  FUN_100a05e94();
  if (lVar7 != 0) {
    lVar8 = *(long *)(uVar10 + 0x18);
    if (SCARRY8(lVar8,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05878);
      (*pcVar3)();
    }
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar10 = *unaff_x20;
    if ((*(long *)(uVar10 + 0x10) < lVar8 + 1) || ((uVar5 & 1) == 0)) {
      FUN_100a05908();
      uVar10 = *unaff_x20;
    }
    lVar1 = *(long *)(uVar10 + 0x18);
    lVar2 = *(long *)(uVar10 + 0x20);
    lVar8 = lVar2 + lVar1;
    if (SCARRY8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0587c);
      (*pcVar3)();
    }
    if (lVar1 < 0) {
      if ((lVar8 < 0) &&
         (bVar4 = SCARRY8(lVar8,*(long *)(uVar10 + 0x10)), lVar8 = lVar8 + *(long *)(uVar10 + 0x10),
         bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05890);
        (*pcVar3)();
      }
    }
    else {
      lVar9 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar8,lVar9);
      if ((lVar9 <= lVar8) && (lVar8 = lVar8 - lVar9, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a057b0);
        (*pcVar3)();
      }
    }
    lVar8 = uVar10 + lVar8 * 0x18;
    *(long *)(lVar8 + 0x28) = lVar7;
    *(int *)(lVar8 + 0x30) = (int)lVar6;
    *(int *)(lVar8 + 0x34) = (int)((ulong)lVar6 >> 0x20);
    *(int *)(lVar8 + 0x38) = (int)param_1;
    *(short *)(lVar8 + 0x3c) = (short)((ulong)param_1 >> 0x20);
    *(char *)(lVar8 + 0x3e) = (char)((ulong)param_1 >> 0x30);
    lVar7 = lVar1 + 1;
    if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05880);
      (*pcVar3)();
    }
    lVar6 = lVar2 + lVar7;
    if (SCARRY8(lVar2,lVar7)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05884);
      (*pcVar3)();
    }
    if (lVar7 < 0) {
      lVar8 = *(long *)(uVar10 + 0x10);
      if ((lVar6 < 0) && (bVar4 = SCARRY8(lVar6,lVar8), lVar6 = lVar6 + lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05894);
        (*pcVar3)();
      }
    }
    else {
      lVar8 = *(long *)(uVar10 + 0x10);
      bVar4 = SBORROW8(lVar6,lVar8);
      if ((lVar8 <= lVar6) && (lVar6 = lVar6 - lVar8, bVar4)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05814);
        (*pcVar3)();
      }
    }
    if (lVar7 < lVar8) {
      if (lVar6 < lVar2) {
        if (SBORROW8(lVar2,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05840);
          (*pcVar3)();
        }
      }
      else {
        if (SBORROW8(lVar8,lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a05888);
          (*pcVar3)();
        }
        if ((lVar2 < 0) || (lVar8 < lVar6)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0588c);
          (*pcVar3)();
        }
      }
    }
    *(long *)(uVar10 + 0x18) = lVar7;
  }
  return;
}



/* Address: 0x100a05894 | FUN_100a05894 */

void FUN_100a05894(long param_1)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong *unaff_x20;
  
  lVar5 = *(long *)(param_1 + 0x10);
  uVar2 = *unaff_x20;
  lVar3 = *(long *)(uVar2 + 0x18);
  if (!SCARRY8(lVar3,lVar5)) {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = *unaff_x20;
    if ((*(long *)(uVar4 + 0x10) < lVar3 + lVar5) || ((uVar2 & 1) == 0)) {
      FUN_100a05cd0();
      uVar4 = *unaff_x20;
    }
    FUN_100a06888(param_1 + 0x20,lVar5,uVar4 + 0x10,uVar4 + 0x28);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100a05908);
  (*pcVar1)();
}



/* Address: 0x100a05908 | FUN_100a05908 */

void FUN_100a05908(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100eeaaa8);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100ff4290;
      FUN_1000f7830(&DAT_100ff4290,&DAT_100c8d718);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06564(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100ff4290;
      FUN_1000f7830(&DAT_100ff4290,&DAT_100c8d718);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06168(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100ff4290;
    FUN_1000f7830(&DAT_100ff4290,&DAT_100c8d718);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_1009ed678(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100a05acc | FUN_100a05acc */

void FUN_100a05acc(ulong param_1,long param_2,uint param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  lVar5 = *unaff_x20;
  puVar3 = &DAT_100ff3d48;
  FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
  plVar6 = (long *)(lVar5 + 0x10);
  lVar9 = *plVar6;
  lVar8 = *(long *)(puVar3 + -8);
  uVar7 = (ulong)*(byte *)(lVar8 + 0x50) + 0x28 &
          ((ulong)*(byte *)(lVar8 + 0x50) ^ 0xffffffffffffffff);
  if (lVar9 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar5,puVar3);
    if ((param_1 & 1) == 0) {
      puVar3 = &DAT_100ff4288;
      FUN_1000f7830(&DAT_100ff4288,&DAT_100c8d710);
      lVar8 = *(long *)(lVar8 + 0x48);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a05cc8);
        (*pcVar2)();
      }
      if ((long)puVar4 - uVar7 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a05cd0);
        (*pcVar2)();
      }
      lVar9 = 0;
      if (lVar8 != 0) {
        lVar9 = (long)((long)puVar4 - uVar7) / lVar8;
      }
      lVar8 = *(long *)(lVar5 + 0x18);
      *(long *)(puVar3 + 0x10) = lVar9;
      *(long *)(puVar3 + 0x18) = lVar8;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      if (0 < lVar8) {
        FUN_100a06650(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
      }
    }
    else {
      lVar9 = *(long *)(lVar5 + 0x18);
      puVar3 = &DAT_100ff4288;
      FUN_1000f7830(&DAT_100ff4288,&DAT_100c8d710);
      lVar8 = *(long *)(lVar8 + 0x48);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      if (lVar8 == 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a05cc4);
        (*pcVar2)();
      }
      if ((long)puVar4 - uVar7 == -0x8000000000000000 && lVar8 == -1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a05ccc);
        (*pcVar2)();
      }
      lVar1 = 0;
      if (lVar8 != 0) {
        lVar1 = (long)((long)puVar4 - uVar7) / lVar8;
      }
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = lVar9;
      *(undefined8 *)(puVar3 + 0x20) = 0;
      if (0 < lVar9) {
        FUN_100a06280(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
        *(undefined8 *)(lVar5 + 0x18) = 0;
      }
    }
  }
  else {
    puVar3 = &DAT_100ff4288;
    FUN_1000f7830(&DAT_100ff4288,&DAT_100c8d710);
    _swift_allocObject();
    uVar11 = *(undefined8 *)(lVar5 + 0x20);
    uVar10 = *(undefined8 *)(lVar5 + 0x18);
    lVar8 = *(long *)(lVar5 + 0x18);
    *(long *)(puVar3 + 0x10) = lVar9;
    *(undefined8 *)(puVar3 + 0x20) = uVar11;
    *(undefined8 *)(puVar3 + 0x18) = uVar10;
    if (0 < lVar8) {
      FUN_1009ed754(puVar3 + 0x10,puVar3 + uVar7,plVar6,lVar5 + uVar7);
    }
  }
  _swift_release(lVar5);
  *unaff_x20 = (long)puVar3;
  return;
}



/* Address: 0x100a05cd0 | FUN_100a05cd0 */

void FUN_100a05cd0(ulong param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  long *plVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  lVar4 = *unaff_x20;
  plVar5 = (long *)(lVar4 + 0x10);
  lVar6 = *plVar5;
  if (lVar6 < param_2) {
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100f082a8);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100ff46e8;
      FUN_1000f7830(&DAT_100ff46e8,&DAT_100c8dd48);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a067a0(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100ff46e8;
      FUN_1000f7830(&DAT_100ff46e8,&DAT_100c8dd48);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x18;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_100a06448(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100ff46e8;
    FUN_1000f7830(&DAT_100ff46e8,&DAT_100c8dd48);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_1009ed898(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x100a05e94 | FUN_100a05e94 */

long FUN_100a05e94(long param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined4 uVar7;
  long *local_68;
  long local_60;
  long *local_58;
  long lStack_50;
  char local_48;
  
  FUN_100a060b0(&local_68);
  uVar7 = (undefined4)((ulong)param_4 >> 0x20);
  uVar2 = (undefined2)((ulong)param_5 >> 0x20);
  uVar1 = (undefined1)((ulong)param_5 >> 0x30);
  lVar6 = param_3;
  if (local_48 == '\x01' || 0 < local_60) {
    if (local_68 == (long *)0x0) {
      uVar4 = 0;
      if (local_60 != 0) goto LAB_100a06060;
    }
    else if (local_60 == 0) {
      uVar4 = 0;
    }
    else {
      if (local_60 < 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100a060a8);
        (*pcVar3)();
      }
      *local_68 = param_3;
      *(int *)(local_68 + 1) = (int)param_4;
      *(undefined4 *)((long)local_68 + 0xc) = uVar7;
      *(int *)(local_68 + 2) = (int)param_5;
      uVar4 = 1;
      *(undefined2 *)((long)local_68 + 0x14) = uVar2;
      *(undefined1 *)((long)local_68 + 0x16) = uVar1;
      param_4 = 0;
      param_5 = 0;
      lVar6 = 0;
      if (local_60 != 1) goto LAB_100a06060;
    }
    if (local_48 != '\x01') {
      if (lStack_50 < 1) {
        lVar5 = 0;
      }
      else if (lVar6 == 0) {
        lVar5 = 0;
      }
      else {
        if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100a060b0);
          (*pcVar3)();
        }
        *local_58 = lVar6;
        *(int *)(local_58 + 1) = (int)param_4;
        *(int *)((long)local_58 + 0xc) = (int)((ulong)param_4 >> 0x20);
        *(int *)(local_58 + 2) = (int)param_5;
        lVar5 = 1;
        *(short *)((long)local_58 + 0x14) = (short)((ulong)param_5 >> 0x20);
        *(char *)((long)local_58 + 0x16) = (char)((ulong)param_5 >> 0x30);
        lVar6 = 0;
      }
      uVar4 = uVar4 + lVar5;
    }
    goto LAB_100a06060;
  }
  if (local_60 == 0) {
    if (lStack_50 < 1) {
      uVar4 = 0;
      goto LAB_100a06060;
    }
    lVar6 = lStack_50;
    if (param_3 != 0) goto LAB_100a05f68;
    uVar4 = 0;
  }
  else {
    lVar6 = local_60;
    local_58 = local_68;
    if (param_3 == 0) {
      uVar4 = 0;
LAB_100a06014:
      lVar6 = 0;
      goto LAB_100a06060;
    }
LAB_100a05f68:
    if (local_58 == (long *)0x0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a060ac);
      (*pcVar3)();
    }
    *local_58 = param_3;
    *(int *)(local_58 + 1) = (int)param_4;
    *(undefined4 *)((long)local_58 + 0xc) = uVar7;
    *(int *)(local_58 + 2) = (int)param_5;
    *(undefined2 *)((long)local_58 + 0x14) = uVar2;
    *(undefined1 *)((long)local_58 + 0x16) = uVar1;
    if (lVar6 == 1) {
      uVar4 = (ulong)(local_60 == 0);
      if ((local_60 != 0) && (lStack_50 < 1)) {
        uVar4 = 1;
        lVar6 = 0;
        goto LAB_100a06060;
      }
    }
    else {
      uVar4 = 1;
      if (local_60 != 0) goto LAB_100a06014;
    }
  }
  uVar4 = local_60 + uVar4;
  lVar6 = 0;
LAB_100a06060:
  if (SCARRY8(*(long *)(param_1 + 8),uVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a060a4);
    (*pcVar3)();
  }
  *(ulong *)(param_1 + 8) = *(long *)(param_1 + 8) + uVar4;
  _swift_retain(param_3);
  return lVar6;
}



/* Address: 0x100a060b0 | FUN_100a060b0 */

void FUN_100a060b0(long *param_1,long *param_2,long param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  lVar5 = param_2[1];
  lVar3 = param_2[2];
  lVar4 = lVar3 + lVar5;
  if (SCARRY8(lVar3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100a0615c);
    (*pcVar1)();
  }
  if (lVar5 < 0) {
    lVar6 = *param_2;
    if ((lVar4 < 0) && (bVar2 = SCARRY8(lVar4,lVar6), lVar4 = lVar4 + lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06168);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *param_2;
    bVar2 = SBORROW8(lVar4,lVar6);
    if ((lVar6 <= lVar4) && (lVar4 = lVar4 - lVar6, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a060d8);
      (*pcVar1)();
    }
  }
  if (lVar5 < lVar6) {
    if (lVar3 <= lVar4) {
      lVar5 = lVar6 - lVar4;
      if (SBORROW8(lVar6,lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06160);
        (*pcVar1)();
      }
      if ((lVar3 < 0) || (lVar6 < lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06164);
        (*pcVar1)();
      }
      bVar2 = lVar3 == 0;
      lVar6 = 0;
      if (!bVar2) {
        lVar6 = param_3;
      }
      goto LAB_100a06148;
    }
    lVar5 = lVar3 - lVar4;
    if (SBORROW8(lVar3,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a06104);
      (*pcVar1)();
    }
  }
  else {
    lVar5 = 0;
  }
  lVar3 = 0;
  bVar2 = true;
  lVar6 = 0;
LAB_100a06148:
  *param_1 = param_3 + lVar4 * 0x18;
  param_1[1] = lVar5;
  param_1[2] = lVar6;
  param_1[3] = lVar3;
  *(bool *)(param_1 + 4) = bVar2;
  return;
}



/* Address: 0x100a06168 | FUN_100a06168 */

void FUN_100a06168(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06274);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06278);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0627c);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x18);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x18) <= param_2) {
      _memmove(param_2,param_4,lVar7 * 0x18);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06280);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x18);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x18) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 * 0x18);
      return;
    }
  }
  return;
}



/* Address: 0x100a06280 | FUN_100a06280 */

void FUN_100a06280(undefined8 param_1,ulong param_2,long *param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  lVar7 = param_3[2];
  lVar1 = *param_3 - lVar7;
  if (SBORROW8(*param_3,lVar7)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0643c);
    (*pcVar2)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar4 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06440);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    uVar5 = param_4;
    lVar6 = lVar1;
  }
  else {
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    uVar5 = 0;
    lVar4 = 0;
    lVar6 = lVar8;
  }
  if (lVar6 < 1) {
    lVar6 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06444);
      (*pcVar2)();
    }
    param_4 = param_4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7;
    if (param_4 <= param_2) {
      puVar3 = &DAT_100ff3d48;
      FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
      if (param_2 < param_4 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar6) {
        if (param_2 != param_4) {
          _swift_arrayInitWithTakeBackToFront(param_2,param_4,lVar6,puVar3);
        }
        goto joined_r0x000100a063b8;
      }
    }
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    _swift_arrayInitWithTakeFrontToBack(param_2,param_4,lVar6,puVar3);
  }
joined_r0x000100a063b8:
  if (lVar1 < lVar8 && lVar4 != 0) {
    if (uVar5 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06448);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    param_2 = param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar6;
    if (param_2 < uVar5 || uVar5 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar4 <= param_2) {
      _swift_arrayInitWithTakeFrontToBack(param_2,uVar5,lVar4);
    }
    else if (param_2 != uVar5) {
      _swift_arrayInitWithTakeBackToFront(param_2,uVar5,lVar4,puVar3);
    }
  }
  return;
}



/* Address: 0x100a06448 | FUN_100a06448 */

void FUN_100a06448(undefined8 param_1,void *param_2,long *param_3,void *param_4)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  lVar3 = param_3[2];
  lVar1 = *param_3 - lVar3;
  if (SBORROW8(*param_3,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06558);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0655c);
      (*pcVar2)();
    }
  }
  else {
    lVar6 = 0;
    pvVar5 = (void *)0x0;
    lVar7 = lVar4;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06560);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x18);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x18) <= param_2) {
      _memmove(param_2,param_4,lVar7 * 0x18);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06564);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x18);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x18) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 * 0x18);
      return;
    }
  }
  return;
}



/* Address: 0x100a06564 | FUN_100a06564 */

void FUN_100a06564(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06644);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar5 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06648);
      (*pcVar3)();
    }
  }
  else {
    lVar6 = 0;
    lVar5 = lVar7;
    lVar2 = 0;
  }
  if (lVar5 < 1) {
    lVar5 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0664c);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x18,lVar5,&DAT_100eeaaa8);
    lVar5 = lVar5 * 0x18;
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06650);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5,lVar2,lVar6,&DAT_100eeaaa8);
  }
  return;
}



/* Address: 0x100a06650 | FUN_100a06650 */

void FUN_100a06650(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar9 = param_3[2];
  lVar1 = *param_3 - lVar9;
  if (SBORROW8(*param_3,lVar9)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06794);
    (*pcVar2)();
  }
  lVar8 = param_3[1];
  if (lVar1 < lVar8) {
    lVar5 = lVar8 - lVar1;
    if (SBORROW8(lVar8,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06798);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar7 = lVar1;
    lVar6 = param_4;
  }
  else {
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    lVar6 = 0;
    lVar5 = 0;
    lVar7 = lVar8;
  }
  if (lVar7 < 1) {
    lVar7 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0679c);
      (*pcVar2)();
    }
    lVar4 = *(long *)(*(long *)(puVar3 + -8) + 0x48);
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * lVar9,lVar7,puVar3);
  }
  if ((lVar1 < lVar8) && (lVar5 != 0)) {
    if (lVar6 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a067a0);
      (*pcVar2)();
    }
    puVar3 = &DAT_100ff3d48;
    FUN_1000f7830(&DAT_100ff3d48,&DAT_100c8d4d0);
    _swift_arrayInitWithCopy
              (param_2 + *(long *)(*(long *)(puVar3 + -8) + 0x48) * lVar7,lVar6,lVar5,puVar3);
  }
  return;
}



/* Address: 0x100a067a0 | FUN_100a067a0 */

void FUN_100a067a0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_3[2];
  lVar1 = *param_3 - lVar4;
  if (SBORROW8(*param_3,lVar4)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100a0687c);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar5 = lVar7 - lVar1;
    lVar6 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06880);
      (*pcVar3)();
    }
  }
  else {
    lVar5 = 0;
    lVar6 = lVar7;
    lVar2 = 0;
  }
  if (lVar6 < 1) {
    lVar6 = 0;
  }
  else {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06884);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x18,lVar6,&DAT_100f082a8);
  }
  if (lVar1 < lVar7 && lVar5 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100a06888);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar6 * 0x18,lVar2,lVar5,&DAT_100f082a8);
  }
  return;
}



/* Address: 0x100a06888 | FUN_100a06888 */

void FUN_100a06888(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  undefined8 local_58;
  ulong uStack_50;
  undefined8 local_48;
  ulong local_40;
  char local_38;
  
  if (0 < (long)param_2) {
    lVar3 = *(long *)(param_3 + 8);
    if (SCARRY8(lVar3,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06980);
      (*pcVar2)();
    }
    *(ulong *)(param_3 + 8) = lVar3 + param_2;
    if ((long)(lVar3 + param_2) < lVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06984);
      (*pcVar2)();
    }
    FUN_100a06990(&local_58);
    if ((local_38 == '\x01') || (local_40 == 0)) {
      if (param_1 != 0) {
        local_48 = local_58;
        if ((long)uStack_50 < (long)param_2) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06988);
          (*pcVar2)();
        }
        goto LAB_100a06954;
      }
    }
    else {
      if ((long)uStack_50 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a0698c);
        (*pcVar2)();
      }
      if ((param_1 != 0) && (uStack_50 != 0)) {
        uVar1 = param_2;
        if (uStack_50 <= param_2) {
          uVar1 = uStack_50;
        }
        _swift_arrayInitWithCopy(local_58,param_1,uVar1,&DAT_100f082a8);
      }
      if ((long)local_40 < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06990);
        (*pcVar2)();
      }
      if (param_1 != 0) {
        uVar1 = param_2;
        if (local_40 <= param_2) {
          uVar1 = local_40;
        }
        param_1 = param_1 + (param_2 - uVar1) * 0x18;
        param_2 = uVar1;
LAB_100a06954:
        _swift_arrayInitWithCopy(local_48,param_1,param_2,&DAT_100f082a8);
        return;
      }
    }
  }
  return;
}



/* Address: 0x100a06990 | FUN_100a06990 */

void FUN_100a06990(long *param_1,long param_2,long param_3,long *param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  undefined1 uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  lVar7 = *param_4;
  lVar4 = param_4[2] + param_2;
  lVar9 = 0;
  if (lVar7 <= lVar4) {
    lVar9 = lVar7;
  }
  lVar8 = param_4[2] + param_3;
  lVar1 = 0;
  if (lVar7 <= lVar8) {
    lVar1 = lVar7;
  }
  lVar3 = param_3 - param_2;
  if (!SBORROW8(param_3,param_2)) {
    lVar6 = 0;
    lVar4 = lVar4 - lVar9;
    uVar5 = 1;
    if (lVar3 == 0) {
      lVar9 = 0;
    }
    else {
      lVar8 = lVar8 - lVar1;
      lVar9 = 0;
      if (lVar8 <= lVar4) {
        lVar3 = lVar7 - lVar4;
        if (SBORROW8(lVar7,lVar4)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06a14);
          (*pcVar2)();
        }
        uVar5 = 0;
        lVar6 = param_5;
        lVar9 = lVar8;
      }
    }
    *param_1 = param_5 + lVar4 * 0x18;
    param_1[1] = lVar3;
    param_1[2] = lVar6;
    param_1[3] = lVar9;
    *(undefined1 *)(param_1 + 4) = uVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a06a10);
  (*pcVar2)();
}



/* Address: 0x100a06a14 | FUN_100a06a14 */

void FUN_100a06a14(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  *(undefined8 *)(unaff_x22 + 0x128) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  *(undefined8 *)(unaff_x22 + 0x118) = param_2;
  _swift_task_switch(FUN_100a06a30,0,0);
  return;
}



/* Address: 0x100a06a30 | FUN_100a06a30 */

void FUN_100a06a30(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  FUN_1005ec520();
  (**(code **)(*(long *)*param_1 + 0x88))();
  lVar6 = *param_1;
  *param_1 = lVar6 + 1;
  *(long *)(unaff_x22 + 0x130) = lVar6;
  bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(byte *)(unaff_x22 + 0xbb) = bVar7 & 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar6 = *(long *)(unaff_x22 + 0x128);
  *(int *)(unaff_x22 + 0xf0) = (int)uVar1;
  *(char *)(unaff_x22 + 0xf6) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0xf4) = (short)((ulong)uVar1 >> 0x20);
  *(char *)(unaff_x22 + 0xf7) = (char)((ulong)uVar1 >> 0x38);
  *(long *)(unaff_x22 + 0x60) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 **)(unaff_x22 + 0x70) = (undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x130);
  if ((bVar7 & 1) != 0) {
    plVar9 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar9;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100a06e14;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar14 = thunk_FUN_100a0c438;
  _swift_task_addCancellationHandler(thunk_FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x140) = pcVar14;
  iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0xa8));
  if (iVar8 == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x128);
    FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x130),FUN_100a30620);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar18 = *(ulong *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    pcVar14 = *(code **)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0xa8));
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100a06e14);
      (*pcVar14)();
    }
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x110);
      *(int *)(unaff_x22 + 0x108) = (int)uVar13;
      *(char *)(unaff_x22 + 0x10e) = (char)((ulong)uVar13 >> 0x30);
      *(short *)(unaff_x22 + 0x10c) = (short)((ulong)uVar13 >> 0x20);
      *(char *)(unaff_x22 + 0x10f) = (char)((ulong)uVar13 >> 0x38);
      uVar10 = uVar18;
      _swift_getObjectType();
      uVar11 = uVar10;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar11 & 1) == 0) {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar11 = *(ulong *)(unaff_x22 + 0x120);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
        puVar12 = &DAT_100f27c40;
        _swift_allocObject(&DAT_100f27c40,0x68,7);
        *(undefined8 *)(puVar12 + 0x18) = uVar19;
        *(ulong *)(puVar12 + 0x10) = uVar18;
        *(undefined8 *)(puVar12 + 0x20) = uVar3;
        *(undefined8 *)(puVar12 + 0x30) = uVar17;
        *(undefined8 *)(puVar12 + 0x28) = uVar16;
        *(undefined8 *)(puVar12 + 0x38) = uVar4;
        *(undefined8 *)(puVar12 + 0x40) = uVar1;
        *(undefined8 *)(puVar12 + 0x48) = uVar5;
        *(undefined8 *)(puVar12 + 0x50) = uVar15;
        *(undefined8 *)(puVar12 + 0x58) = uVar13;
        puVar12[0x66] = (char)(uVar11 >> 0x30);
        *(short *)(puVar12 + 100) = (short)(uVar11 >> 0x20);
        *(int *)(puVar12 + 0x60) = (int)uVar11;
        puVar12[0x67] = (char)(uVar11 >> 0x38);
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_unknownObjectRetain(uVar18);
        _swift_retain(uVar16);
        _swift_retain(uVar4);
        _swift_retain(uVar5);
        FUN_1008758fc(uVar15,uVar13,uVar11,uVar11 >> 0x38);
        (*pcVar14)(thunk_FUN_100a0c6fc,puVar12,uVar10,lVar2);
        _swift_release(puVar12);
      }
      else {
        (*pcVar14)(unaff_x22 + 0xf8);
      }
      FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x128),&DAT_100f27b78,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar18);
      _swift_release(uVar16);
      _swift_release(uVar4);
      _swift_release(uVar5);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar14 = FUN_100a06f88;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a06e80;
        _swift_continuation_init(uVar18,unaff_x22 + 0x10,1);
        FUN_100a0824c();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow();
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(ulong *)(unaff_x22 + 0x150) = uVar18;
      pcVar14 = thunk_FUN_100548b8c;
    }
    _swift_task_switch(pcVar14,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100a06e10);
  (*pcVar14)();
}



/* Address: 0x100a06e14 | FUN_100a06e14 */

void FUN_100a06e14(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xbd) = *(undefined1 *)(lVar2 + 0xb9);
    pcVar1 = FUN_100a06f88;
  }
  else {
    *(long *)(lVar2 + 0x150) = unaff_x20;
    pcVar1 = thunk_FUN_100548b8c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a06e80 | FUN_100a06e80 */

void FUN_100a06e80(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined1 *)(lVar2 + 0xbc) = *(undefined1 *)(lVar2 + 0xba);
    pcVar1 = FUN_100a06ef4;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a06f40;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a06ef4 | FUN_100a06ef4 */

void FUN_100a06ef4(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xbc);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
  *(undefined1 *)(unaff_x22 + 0xbd) = uVar1;
  _swift_task_switch(FUN_100a06f88,0,0);
  return;
}



/* Address: 0x100a06f40 | FUN_100a06f40 */

void FUN_100a06f40(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
  *(undefined8 *)(unaff_x22 + 0x150) = uVar1;
  _swift_task_switch(thunk_FUN_100548b8c,0,0);
  return;
}



/* Address: 0x100a06f88 | FUN_100a06f88 */

void FUN_100a06f88(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  if (*(char *)(unaff_x22 + 0xbd) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a070ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(int *)(unaff_x22 + 0xf0) = (int)uVar12;
  *(char *)(unaff_x22 + 0xf6) = (char)((ulong)uVar12 >> 0x30);
  *(short *)(unaff_x22 + 0xf4) = (short)((ulong)uVar12 >> 0x20);
  *(char *)(unaff_x22 + 0xf7) = (char)((ulong)uVar12 >> 0x38);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x130);
  *(long *)(unaff_x22 + 0x70) = unaff_x22 + 0xe0;
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x130);
  if (*(char *)(unaff_x22 + 0xbb) == '\x01') {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar7;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a06e14;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar14 = thunk_FUN_100a0c438;
  _swift_task_addCancellationHandler(thunk_FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x140) = pcVar14;
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07350);
    (*pcVar14)();
  }
  lVar1 = *(long *)(unaff_x22 + 0x128);
  FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x130),FUN_100a30620);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar17 = *(ulong *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar14 = *(code **)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0xa8));
  if (iVar6 == 0) {
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x110);
      *(int *)(unaff_x22 + 0x108) = (int)uVar11;
      *(char *)(unaff_x22 + 0x10e) = (char)((ulong)uVar11 >> 0x30);
      *(short *)(unaff_x22 + 0x10c) = (short)((ulong)uVar11 >> 0x20);
      *(char *)(unaff_x22 + 0x10f) = (char)((ulong)uVar11 >> 0x38);
      uVar8 = uVar17;
      _swift_getObjectType();
      uVar9 = uVar8;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar9 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar9 = *(ulong *)(unaff_x22 + 0x120);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
        puVar10 = &DAT_100f27c40;
        _swift_allocObject(&DAT_100f27c40,0x68,7);
        *(undefined8 *)(puVar10 + 0x18) = uVar18;
        *(ulong *)(puVar10 + 0x10) = uVar17;
        *(undefined8 *)(puVar10 + 0x20) = uVar3;
        *(undefined8 *)(puVar10 + 0x30) = uVar16;
        *(undefined8 *)(puVar10 + 0x28) = uVar15;
        *(undefined8 *)(puVar10 + 0x38) = uVar4;
        *(undefined8 *)(puVar10 + 0x40) = uVar12;
        *(undefined8 *)(puVar10 + 0x48) = uVar5;
        *(undefined8 *)(puVar10 + 0x50) = uVar13;
        *(undefined8 *)(puVar10 + 0x58) = uVar11;
        puVar10[0x66] = (char)(uVar9 >> 0x30);
        *(short *)(puVar10 + 100) = (short)(uVar9 >> 0x20);
        *(int *)(puVar10 + 0x60) = (int)uVar9;
        puVar10[0x67] = (char)(uVar9 >> 0x38);
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_unknownObjectRetain(uVar17);
        _swift_retain(uVar15);
        _swift_retain(uVar4);
        _swift_retain(uVar5);
        FUN_1008758fc(uVar13,uVar11,uVar9,uVar9 >> 0x38);
        (*pcVar14)(thunk_FUN_100a0c6fc,puVar10,uVar8,lVar2);
        _swift_release(puVar10);
      }
      else {
        (*pcVar14)(unaff_x22 + 0xf8);
      }
      FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x128),&DAT_100f27b78,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar17);
      _swift_release(uVar15);
      _swift_release(uVar4);
      _swift_release(uVar5);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar14 = FUN_100a06f88;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a06e80;
        _swift_continuation_init(uVar17,unaff_x22 + 0x10,1);
        FUN_100a0824c();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow();
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(ulong *)(unaff_x22 + 0x150) = uVar17;
      pcVar14 = thunk_FUN_100548b8c;
    }
    _swift_task_switch(pcVar14,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07354);
  (*pcVar14)();
}



/* Address: 0x100a07354 | FUN_100a07354 */

void FUN_100a07354(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x120) = param_3;
  *(undefined8 *)(unaff_x22 + 0x128) = param_4;
  *(undefined8 *)(unaff_x22 + 0x110) = param_1;
  *(undefined8 *)(unaff_x22 + 0x118) = param_2;
  _swift_task_switch(FUN_100a07370,0,0);
  return;
}



/* Address: 0x100a07370 | FUN_100a07370 */

void FUN_100a07370(long *param_1)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  byte bVar7;
  int iVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  undefined *puVar12;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  long unaff_x22;
  undefined8 uVar16;
  undefined8 uVar17;
  ulong uVar18;
  undefined8 uVar19;
  
  FUN_1005ec520();
  (**(code **)(*(long *)*param_1 + 0x88))();
  lVar6 = *param_1;
  *param_1 = lVar6 + 1;
  *(long *)(unaff_x22 + 0x130) = lVar6;
  bVar7 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(byte *)(unaff_x22 + 0xbb) = bVar7 & 1;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x120);
  lVar6 = *(long *)(unaff_x22 + 0x128);
  *(int *)(unaff_x22 + 0xf0) = (int)uVar1;
  *(char *)(unaff_x22 + 0xf6) = (char)((ulong)uVar1 >> 0x30);
  *(short *)(unaff_x22 + 0xf4) = (short)((ulong)uVar1 >> 0x20);
  *(char *)(unaff_x22 + 0xf7) = (char)((ulong)uVar1 >> 0x38);
  *(long *)(unaff_x22 + 0x60) = lVar6;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x130);
  *(undefined8 **)(unaff_x22 + 0x70) = (undefined8 *)(unaff_x22 + 0xe0);
  *(long *)(unaff_x22 + 0xd0) = lVar6;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x130);
  if ((bVar7 & 1) != 0) {
    plVar9 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar9;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar9 = unaff_x22;
    plVar9[1] = (long)FUN_100a07754;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar14 = FUN_100a0c438;
  _swift_task_addCancellationHandler(FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x140) = pcVar14;
  iVar8 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0xa8));
  if (iVar8 == 0) {
    lVar6 = *(long *)(unaff_x22 + 0x128);
    FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x130),FUN_100a30620);
    uVar19 = *(undefined8 *)(unaff_x22 + 0x80);
    uVar18 = *(ulong *)(unaff_x22 + 0x78);
    lVar2 = *(long *)(unaff_x22 + 0x80);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
    uVar17 = *(undefined8 *)(unaff_x22 + 0x98);
    uVar16 = *(undefined8 *)(unaff_x22 + 0x90);
    pcVar14 = *(code **)(unaff_x22 + 0x98);
    uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
    uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
    uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
    iVar8 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0xa8));
    if (iVar8 != 0) {
                    /* WARNING: Does not return */
      pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07754);
      (*pcVar14)();
    }
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar13 = *(undefined8 *)(unaff_x22 + 0x120);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x110);
      *(int *)(unaff_x22 + 0x108) = (int)uVar13;
      *(char *)(unaff_x22 + 0x10e) = (char)((ulong)uVar13 >> 0x30);
      *(short *)(unaff_x22 + 0x10c) = (short)((ulong)uVar13 >> 0x20);
      *(char *)(unaff_x22 + 0x10f) = (char)((ulong)uVar13 >> 0x38);
      uVar10 = uVar18;
      _swift_getObjectType();
      uVar11 = uVar10;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar11 & 1) == 0) {
        uVar13 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar11 = *(ulong *)(unaff_x22 + 0x120);
        uVar15 = *(undefined8 *)(unaff_x22 + 0x110);
        puVar12 = &DAT_100f27a60;
        _swift_allocObject(&DAT_100f27a60,0x68,7);
        *(undefined8 *)(puVar12 + 0x18) = uVar19;
        *(ulong *)(puVar12 + 0x10) = uVar18;
        *(undefined8 *)(puVar12 + 0x20) = uVar3;
        *(undefined8 *)(puVar12 + 0x30) = uVar17;
        *(undefined8 *)(puVar12 + 0x28) = uVar16;
        *(undefined8 *)(puVar12 + 0x38) = uVar4;
        *(undefined8 *)(puVar12 + 0x40) = uVar1;
        *(undefined8 *)(puVar12 + 0x48) = uVar5;
        *(undefined8 *)(puVar12 + 0x50) = uVar15;
        *(undefined8 *)(puVar12 + 0x58) = uVar13;
        puVar12[0x66] = (char)(uVar11 >> 0x30);
        *(short *)(puVar12 + 100) = (short)(uVar11 >> 0x20);
        *(int *)(puVar12 + 0x60) = (int)uVar11;
        puVar12[0x67] = (char)(uVar11 >> 0x38);
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_unknownObjectRetain(uVar18);
        _swift_retain(uVar16);
        _swift_retain(uVar4);
        _swift_retain(uVar5);
        FUN_1008758fc(uVar15,uVar13,uVar11,uVar11 >> 0x38);
        (*pcVar14)(thunk_FUN_100a0c6fc,puVar12,uVar10,lVar2);
        _swift_release(puVar12);
      }
      else {
        (*pcVar14)(unaff_x22 + 0xf8);
      }
      FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x128),&DAT_100f27a88,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar18);
      _swift_release(uVar16);
      _swift_release(uVar4);
      _swift_release(uVar5);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar14 = FUN_100a078c8;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a077c0;
        _swift_continuation_init(uVar18,unaff_x22 + 0x10,1);
        FUN_100a08560();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow();
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(ulong *)(unaff_x22 + 0x150) = uVar18;
      pcVar14 = FUN_100548b8c;
    }
    _swift_task_switch(pcVar14,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07750);
  (*pcVar14)();
}



/* Address: 0x100a07754 | FUN_100a07754 */

void FUN_100a07754(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x138));
  if (unaff_x20 == 0) {
    *(undefined1 *)(lVar2 + 0xbd) = *(undefined1 *)(lVar2 + 0xb9);
    pcVar1 = FUN_100a078c8;
  }
  else {
    *(long *)(lVar2 + 0x150) = unaff_x20;
    pcVar1 = FUN_100548b8c;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a077c0 | FUN_100a077c0 */

void FUN_100a077c0(void)

{
  code *pcVar1;
  long lVar2;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x148) = *(long *)(lVar2 + 0x30);
  if (*(long *)(lVar2 + 0x30) == 0) {
    *(undefined1 *)(lVar2 + 0xbc) = *(undefined1 *)(lVar2 + 0xba);
    pcVar1 = FUN_100a07834;
  }
  else {
    _swift_willThrow();
    pcVar1 = FUN_100a07880;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100a07834 | FUN_100a07834 */

void FUN_100a07834(void)

{
  undefined1 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined1 *)(unaff_x22 + 0xbc);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
  *(undefined1 *)(unaff_x22 + 0xbd) = uVar1;
  _swift_task_switch(FUN_100a078c8,0,0);
  return;
}



/* Address: 0x100a07880 | FUN_100a07880 */

void FUN_100a07880(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x148);
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
  *(undefined8 *)(unaff_x22 + 0x150) = uVar1;
  _swift_task_switch(FUN_100548b8c,0,0);
  return;
}



/* Address: 0x100a078c8 | FUN_100a078c8 */

void FUN_100a078c8(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long unaff_x22;
  undefined8 uVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  ulong uVar17;
  undefined8 uVar18;
  
  if (*(char *)(unaff_x22 + 0xbd) == '\0') {
                    /* WARNING: Could not recover jumptable at 0x000100a079ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar1 = *(long *)(unaff_x22 + 0x128);
  uVar12 = *(undefined8 *)(unaff_x22 + 0x120);
  *(undefined8 *)(unaff_x22 + 0xe8) = *(undefined8 *)(unaff_x22 + 0x118);
  *(undefined8 *)(unaff_x22 + 0xe0) = *(undefined8 *)(unaff_x22 + 0x110);
  *(int *)(unaff_x22 + 0xf0) = (int)uVar12;
  *(char *)(unaff_x22 + 0xf6) = (char)((ulong)uVar12 >> 0x30);
  *(short *)(unaff_x22 + 0xf4) = (short)((ulong)uVar12 >> 0x20);
  *(char *)(unaff_x22 + 0xf7) = (char)((ulong)uVar12 >> 0x38);
  *(long *)(unaff_x22 + 0x60) = lVar1;
  *(undefined8 *)(unaff_x22 + 0x68) = *(undefined8 *)(unaff_x22 + 0x130);
  *(long *)(unaff_x22 + 0x70) = unaff_x22 + 0xe0;
  *(long *)(unaff_x22 + 0xd0) = lVar1;
  *(undefined8 *)(unaff_x22 + 0xd8) = *(undefined8 *)(unaff_x22 + 0x130);
  if (*(char *)(unaff_x22 + 0xbb) == '\x01') {
    plVar7 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x138) = plVar7;
    FUN_1000f7830(&DAT_100ff46b8,&DAT_100c8dcf0);
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100a07754;
    Swift::_withTaskCancellationHandler();
    return;
  }
  pcVar14 = FUN_100a0c438;
  _swift_task_addCancellationHandler(FUN_100a0c438,unaff_x22 + 0xc0);
  *(code **)(unaff_x22 + 0x140) = pcVar14;
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar1 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07c90);
    (*pcVar14)();
  }
  lVar1 = *(long *)(unaff_x22 + 0x128);
  FUN_100a09950(unaff_x22 + 0x78,*(undefined8 *)(unaff_x22 + 0x130),FUN_100a30620);
  uVar18 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar17 = *(ulong *)(unaff_x22 + 0x78);
  lVar2 = *(long *)(unaff_x22 + 0x80);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x88);
  uVar16 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x90);
  pcVar14 = *(code **)(unaff_x22 + 0x98);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xb0);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar1 + 0xa8));
  if (iVar6 == 0) {
    if (*(char *)(unaff_x22 + 0xb8) == '\0') {
      uVar11 = *(undefined8 *)(unaff_x22 + 0x120);
      *(undefined8 *)(unaff_x22 + 0x100) = *(undefined8 *)(unaff_x22 + 0x118);
      *(undefined8 *)(unaff_x22 + 0xf8) = *(undefined8 *)(unaff_x22 + 0x110);
      *(int *)(unaff_x22 + 0x108) = (int)uVar11;
      *(char *)(unaff_x22 + 0x10e) = (char)((ulong)uVar11 >> 0x30);
      *(short *)(unaff_x22 + 0x10c) = (short)((ulong)uVar11 >> 0x20);
      *(char *)(unaff_x22 + 0x10f) = (char)((ulong)uVar11 >> 0x38);
      uVar8 = uVar17;
      _swift_getObjectType();
      uVar9 = uVar8;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar9 & 1) == 0) {
        uVar11 = *(undefined8 *)(unaff_x22 + 0x118);
        uVar9 = *(ulong *)(unaff_x22 + 0x120);
        uVar13 = *(undefined8 *)(unaff_x22 + 0x110);
        puVar10 = &DAT_100f27a60;
        _swift_allocObject(&DAT_100f27a60,0x68,7);
        *(undefined8 *)(puVar10 + 0x18) = uVar18;
        *(ulong *)(puVar10 + 0x10) = uVar17;
        *(undefined8 *)(puVar10 + 0x20) = uVar3;
        *(undefined8 *)(puVar10 + 0x30) = uVar16;
        *(undefined8 *)(puVar10 + 0x28) = uVar15;
        *(undefined8 *)(puVar10 + 0x38) = uVar4;
        *(undefined8 *)(puVar10 + 0x40) = uVar12;
        *(undefined8 *)(puVar10 + 0x48) = uVar5;
        *(undefined8 *)(puVar10 + 0x50) = uVar13;
        *(undefined8 *)(puVar10 + 0x58) = uVar11;
        puVar10[0x66] = (char)(uVar9 >> 0x30);
        *(short *)(puVar10 + 100) = (short)(uVar9 >> 0x20);
        *(int *)(puVar10 + 0x60) = (int)uVar9;
        puVar10[0x67] = (char)(uVar9 >> 0x38);
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_unknownObjectRetain(uVar17);
        _swift_retain(uVar15);
        _swift_retain(uVar4);
        _swift_retain(uVar5);
        FUN_1008758fc(uVar13,uVar11,uVar9,uVar9 >> 0x38);
        (*pcVar14)(thunk_FUN_100a0c6fc,puVar10,uVar8,lVar2);
        _swift_release(puVar10);
      }
      else {
        (*pcVar14)(unaff_x22 + 0xf8);
      }
      FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x128),&DAT_100f27a88,FUN_100a0c474);
      _swift_unknownObjectRelease(uVar17);
      _swift_release(uVar15);
      _swift_release(uVar4);
      _swift_release(uVar5);
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(undefined1 *)(unaff_x22 + 0xbd) = 0;
      pcVar14 = FUN_100a078c8;
    }
    else {
      if (*(char *)(unaff_x22 + 0xb8) != '\x01') {
        *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0xba;
        *(long *)(unaff_x22 + 0x10) = unaff_x22;
        *(code **)(unaff_x22 + 0x18) = FUN_100a077c0;
        _swift_continuation_init(uVar17,unaff_x22 + 0x10,1);
        FUN_100a08560();
        _swift_continuation_await(unaff_x22 + 0x10);
        return;
      }
      _swift_willThrow();
      _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0x140));
      *(ulong *)(unaff_x22 + 0x150) = uVar17;
      pcVar14 = FUN_100548b8c;
    }
    _swift_task_switch(pcVar14,0,0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar14 = (code *)SoftwareBreakpoint(1,0x100a07c94);
  (*pcVar14)();
}



/* Address: 0x100a07c94 | FUN_100a07c94 */

void FUN_100a07c94(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  _swift_task_switch(FUN_100a07cb4,0,0);
  return;
}



/* Address: 0x100a07cb4 | FUN_100a07cb4 */

void FUN_100a07cb4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  
  lVar11 = *(long *)(unaff_x22 + 0x98);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a07f6c);
    (*pcVar13)();
  }
  FUN_100a09950(unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0),FUN_100a30620);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar16 = *(ulong *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  pcVar13 = *(code **)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a07f70);
    (*pcVar13)();
  }
  if (*(char *)(unaff_x22 + 0x90) == '\0') {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    uStack_78 = *(undefined8 *)(unaff_x22 + 0xb0);
    local_80 = *(undefined8 *)(unaff_x22 + 0xa8);
    local_70 = (undefined4)uVar10;
    local_6a = (undefined1)((ulong)uVar10 >> 0x30);
    local_6c = (undefined2)((ulong)uVar10 >> 0x20);
    local_69 = (undefined1)((ulong)uVar10 >> 0x38);
    uVar7 = uVar16;
    _swift_getObjectType();
    uVar8 = uVar7;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar8 & 1) == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar8 = *(ulong *)(unaff_x22 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
      puVar9 = &DAT_100f27ce0;
      _swift_allocObject(&DAT_100f27ce0,0x68,7);
      *(undefined8 *)(puVar9 + 0x18) = uVar17;
      *(ulong *)(puVar9 + 0x10) = uVar16;
      *(undefined8 *)(puVar9 + 0x20) = uVar3;
      *(undefined8 *)(puVar9 + 0x30) = uVar15;
      *(undefined8 *)(puVar9 + 0x28) = uVar14;
      *(undefined8 *)(puVar9 + 0x38) = uVar4;
      *(undefined8 *)(puVar9 + 0x40) = uVar2;
      *(undefined8 *)(puVar9 + 0x48) = uVar5;
      *(undefined8 *)(puVar9 + 0x50) = uVar12;
      *(undefined8 *)(puVar9 + 0x58) = uVar10;
      puVar9[0x66] = (char)(uVar8 >> 0x30);
      *(short *)(puVar9 + 100) = (short)(uVar8 >> 0x20);
      *(int *)(puVar9 + 0x60) = (int)uVar8;
      puVar9[0x67] = (char)(uVar8 >> 0x38);
      pcVar13 = *(code **)(lVar1 + 0x18);
      _swift_unknownObjectRetain(uVar16);
      _swift_retain(uVar14);
      _swift_retain(uVar4);
      _swift_retain(uVar5);
      FUN_1008758fc(uVar12,uVar10,uVar8,uVar8 >> 0x38);
      (*pcVar13)(thunk_FUN_100a0c6fc,puVar9,uVar7,lVar1);
      _swift_release(puVar9);
    }
    else {
      (*pcVar13)(&local_80);
    }
    FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x98),&DAT_100f27b78,FUN_100a0c474);
    _swift_unknownObjectRelease(uVar16);
    _swift_release(uVar14);
    _swift_release(uVar4);
    _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a07f64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a07d6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x91;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = thunk_FUN_100a0bc10;
  _swift_continuation_init(uVar16,unaff_x22 + 0x10,1);
  FUN_100a0824c();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a07f70 | FUN_100a07f70 */

void FUN_100a07f70(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_4;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_5;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_3;
  *(undefined8 *)(unaff_x22 + 0x98) = param_1;
  _swift_task_switch(FUN_100a07f90,0,0);
  return;
}



/* Address: 0x100a07f90 | FUN_100a07f90 */

void FUN_100a07f90(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long unaff_x22;
  long lVar11;
  undefined8 uVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  ulong uVar16;
  undefined8 uVar17;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  
  lVar11 = *(long *)(unaff_x22 + 0x98);
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)(lVar11 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a08248);
    (*pcVar13)();
  }
  FUN_100a09950(unaff_x22 + 0x50,*(undefined8 *)(unaff_x22 + 0xa0),FUN_100a30620);
  uVar17 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar16 = *(ulong *)(unaff_x22 + 0x50);
  lVar1 = *(long *)(unaff_x22 + 0x58);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar15 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar14 = *(undefined8 *)(unaff_x22 + 0x68);
  pcVar13 = *(code **)(unaff_x22 + 0x70);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x88);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar11 + 0xa8));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a0824c);
    (*pcVar13)();
  }
  if (*(char *)(unaff_x22 + 0x90) == '\0') {
    uVar10 = *(undefined8 *)(unaff_x22 + 0xb8);
    uStack_78 = *(undefined8 *)(unaff_x22 + 0xb0);
    local_80 = *(undefined8 *)(unaff_x22 + 0xa8);
    local_70 = (undefined4)uVar10;
    local_6a = (undefined1)((ulong)uVar10 >> 0x30);
    local_6c = (undefined2)((ulong)uVar10 >> 0x20);
    local_69 = (undefined1)((ulong)uVar10 >> 0x38);
    uVar7 = uVar16;
    _swift_getObjectType();
    uVar8 = uVar7;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar8 & 1) == 0) {
      uVar10 = *(undefined8 *)(unaff_x22 + 0xb0);
      uVar8 = *(ulong *)(unaff_x22 + 0xb8);
      uVar12 = *(undefined8 *)(unaff_x22 + 0xa8);
      puVar9 = &DAT_100f27b28;
      _swift_allocObject(&DAT_100f27b28,0x68,7);
      *(undefined8 *)(puVar9 + 0x18) = uVar17;
      *(ulong *)(puVar9 + 0x10) = uVar16;
      *(undefined8 *)(puVar9 + 0x20) = uVar3;
      *(undefined8 *)(puVar9 + 0x30) = uVar15;
      *(undefined8 *)(puVar9 + 0x28) = uVar14;
      *(undefined8 *)(puVar9 + 0x38) = uVar4;
      *(undefined8 *)(puVar9 + 0x40) = uVar2;
      *(undefined8 *)(puVar9 + 0x48) = uVar5;
      *(undefined8 *)(puVar9 + 0x50) = uVar12;
      *(undefined8 *)(puVar9 + 0x58) = uVar10;
      puVar9[0x66] = (char)(uVar8 >> 0x30);
      *(short *)(puVar9 + 100) = (short)(uVar8 >> 0x20);
      *(int *)(puVar9 + 0x60) = (int)uVar8;
      puVar9[0x67] = (char)(uVar8 >> 0x38);
      pcVar13 = *(code **)(lVar1 + 0x18);
      _swift_unknownObjectRetain(uVar16);
      _swift_retain(uVar14);
      _swift_retain(uVar4);
      _swift_retain(uVar5);
      FUN_1008758fc(uVar12,uVar10,uVar8,uVar8 >> 0x38);
      (*pcVar13)(thunk_FUN_100a0c6fc,puVar9,uVar7,lVar1);
      _swift_release(puVar9);
    }
    else {
      (*pcVar13)(&local_80);
    }
    FUN_100a08874(*(undefined8 *)(unaff_x22 + 0x98),&DAT_100f27a88,FUN_100a0c474);
    _swift_unknownObjectRelease(uVar16);
    _swift_release(uVar14);
    _swift_release(uVar4);
    _swift_release(uVar5);
                    /* WARNING: Could not recover jumptable at 0x000100a08240. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))(0);
    return;
  }
  if (*(char *)(unaff_x22 + 0x90) == '\x01') {
    _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100a08048. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  *(long *)(unaff_x22 + 0x38) = unaff_x22 + 0x91;
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = thunk_FUN_100a0bc10;
  _swift_continuation_init(uVar16,unaff_x22 + 0x10,1);
  FUN_100a08560();
  _swift_continuation_await(unaff_x22 + 0x10);
  return;
}



/* Address: 0x100a0824c | FUN_100a0824c */

/* WARNING: Removing unreachable block (ram,0x000100a0855c) */

void FUN_100a0824c(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  ulong local_c8;
  long lStack_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  long local_80;
  undefined8 uStack_78;
  
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a08558);
    (*pcVar13)();
  }
  FUN_100a0a224(&local_c8,param_2 + 0x10,param_3,param_1);
  lVar6 = lStack_c0;
  uVar5 = local_c8;
  uVar4 = CONCAT17(uStack_b1,CONCAT16(uStack_b2,CONCAT24(uStack_b4,local_b8)));
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar7 == 0) {
    if (local_80 == 0) {
      pcVar13 = (code *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = &DAT_100f27c90;
      _swift_allocObject(&DAT_100f27c90,0x20,7);
      *(long *)(puVar14 + 0x10) = local_80;
      *(undefined8 *)(puVar14 + 0x18) = uStack_78;
      pcVar13 = thunk_FUN_100209b34;
    }
    if (local_88 == '\0') {
      uVar1 = (undefined1)(param_6 >> 0x30);
      uVar2 = (undefined2)(param_6 >> 0x20);
      uVar3 = (undefined1)(param_6 >> 0x38);
      uVar8 = uVar5;
      local_c8 = param_4;
      lStack_c0 = param_5;
      local_b8 = (int)param_6;
      uStack_b4 = uVar2;
      uStack_b2 = uVar1;
      uStack_b1 = uVar3;
      _swift_getObjectType();
      uVar9 = uVar8;
      (**(code **)(lVar6 + 0x10))();
      if ((uVar9 & 1) == 0) {
        puVar10 = &DAT_100f27c68;
        _swift_allocObject(&DAT_100f27c68,0x68,7);
        *(ulong *)(puVar10 + 0x10) = uVar5;
        *(long *)(puVar10 + 0x18) = lVar6;
        *(undefined8 *)(puVar10 + 0x20) = uVar4;
        *(undefined8 *)(puVar10 + 0x28) = uStack_b0;
        *(code **)(puVar10 + 0x30) = local_a8;
        *(undefined8 *)(puVar10 + 0x38) = uStack_a0;
        *(undefined8 *)(puVar10 + 0x40) = local_98;
        *(undefined8 *)(puVar10 + 0x48) = uStack_90;
        *(ulong *)(puVar10 + 0x50) = param_4;
        *(long *)(puVar10 + 0x58) = param_5;
        puVar10[0x66] = uVar1;
        *(undefined2 *)(puVar10 + 100) = uVar2;
        *(int *)(puVar10 + 0x60) = (int)param_6;
        puVar10[0x67] = uVar3;
        pcVar12 = *(code **)(lVar6 + 0x18);
        _swift_unknownObjectRetain(uVar5);
        _swift_retain(uStack_b0);
        _swift_retain(uStack_a0);
        _swift_retain(uStack_90);
        FUN_1008758fc(param_4,param_5,param_6,param_6 >> 0x38);
        (*pcVar12)(thunk_FUN_100a0c6fc,puVar10,uVar8,lVar6);
        _swift_release(puVar10);
      }
      else {
        (*local_a8)(&local_c8);
      }
      FUN_100a08874(param_2,&DAT_100f27b78,FUN_100a0c474);
      **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
      _swift_continuation_throwingResume();
      _swift_release(uStack_90);
      _swift_release(uStack_a0);
      _swift_release(uStack_b0);
      _swift_unknownObjectRelease(uVar5);
    }
    else if (local_88 == '\x01') {
      puVar10 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar11 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar11 = uVar5;
      _swift_continuation_throwingResumeWithError(param_1,puVar10);
    }
    else {
      if (local_80 == 0) {
        return;
      }
      _swift_retain(puVar14);
      (*pcVar13)();
      FUN_100004550(pcVar13,puVar14);
    }
    FUN_100004550(pcVar13,puVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100a0855c);
  (*pcVar13)();
}



/* Address: 0x100a08560 | FUN_100a08560 */

/* WARNING: Removing unreachable block (ram,0x000100a08870) */

void FUN_100a08560(long param_1,long param_2,undefined8 param_3,ulong param_4,long param_5,
                  ulong param_6)

{
  undefined1 uVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong *puVar11;
  code *pcVar12;
  code *pcVar13;
  undefined *puVar14;
  ulong local_c8;
  long lStack_c0;
  undefined4 local_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  undefined1 uStack_b1;
  undefined8 uStack_b0;
  code *local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  char local_88;
  long local_80;
  undefined8 uStack_78;
  
  iVar7 = _pthread_mutex_lock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar7 != 0) {
                    /* WARNING: Does not return */
    pcVar13 = (code *)SoftwareBreakpoint(1,0x100a0886c);
    (*pcVar13)();
  }
  FUN_100a0a378(&local_c8,param_2 + 0x10,param_3,param_1);
  lVar6 = lStack_c0;
  uVar5 = local_c8;
  uVar4 = CONCAT17(uStack_b1,CONCAT16(uStack_b2,CONCAT24(uStack_b4,local_b8)));
  iVar7 = _pthread_mutex_unlock((pthread_mutex_t *)(param_2 + 0xa8));
  if (iVar7 == 0) {
    if (local_80 == 0) {
      pcVar13 = (code *)0x0;
      puVar14 = (undefined *)0x0;
    }
    else {
      puVar14 = &DAT_100f27ad8;
      _swift_allocObject(&DAT_100f27ad8,0x20,7);
      *(long *)(puVar14 + 0x10) = local_80;
      *(undefined8 *)(puVar14 + 0x18) = uStack_78;
      pcVar13 = FUN_100209b34;
    }
    if (local_88 == '\0') {
      uVar1 = (undefined1)(param_6 >> 0x30);
      uVar2 = (undefined2)(param_6 >> 0x20);
      uVar3 = (undefined1)(param_6 >> 0x38);
      uVar8 = uVar5;
      local_c8 = param_4;
      lStack_c0 = param_5;
      local_b8 = (int)param_6;
      uStack_b4 = uVar2;
      uStack_b2 = uVar1;
      uStack_b1 = uVar3;
      _swift_getObjectType();
      uVar9 = uVar8;
      (**(code **)(lVar6 + 0x10))();
      if ((uVar9 & 1) == 0) {
        puVar10 = &DAT_100f27ab0;
        _swift_allocObject(&DAT_100f27ab0,0x68,7);
        *(ulong *)(puVar10 + 0x10) = uVar5;
        *(long *)(puVar10 + 0x18) = lVar6;
        *(undefined8 *)(puVar10 + 0x20) = uVar4;
        *(undefined8 *)(puVar10 + 0x28) = uStack_b0;
        *(code **)(puVar10 + 0x30) = local_a8;
        *(undefined8 *)(puVar10 + 0x38) = uStack_a0;
        *(undefined8 *)(puVar10 + 0x40) = local_98;
        *(undefined8 *)(puVar10 + 0x48) = uStack_90;
        *(ulong *)(puVar10 + 0x50) = param_4;
        *(long *)(puVar10 + 0x58) = param_5;
        puVar10[0x66] = uVar1;
        *(undefined2 *)(puVar10 + 100) = uVar2;
        *(int *)(puVar10 + 0x60) = (int)param_6;
        puVar10[0x67] = uVar3;
        pcVar12 = *(code **)(lVar6 + 0x18);
        _swift_unknownObjectRetain(uVar5);
        _swift_retain(uStack_b0);
        _swift_retain(uStack_a0);
        _swift_retain(uStack_90);
        FUN_1008758fc(param_4,param_5,param_6,param_6 >> 0x38);
        (*pcVar12)(thunk_FUN_100a0c6fc,puVar10,uVar8,lVar6);
        _swift_release(puVar10);
      }
      else {
        (*local_a8)(&local_c8);
      }
      FUN_100a08874(param_2,&DAT_100f27a88,FUN_100a0c474);
      **(undefined1 **)(*(long *)(param_1 + 0x40) + 0x28) = 0;
      _swift_continuation_throwingResume();
      _swift_release(uStack_90);
      _swift_release(uStack_a0);
      _swift_release(uStack_b0);
      _swift_unknownObjectRelease(uVar5);
    }
    else if (local_88 == '\x01') {
      puVar10 = &DAT_100ff3d20;
      FUN_1000f7830(&DAT_100ff3d20,&DAT_100c8d8b0);
      puVar11 = (ulong *)PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90;
      _swift_allocError();
      *puVar11 = uVar5;
      _swift_continuation_throwingResumeWithError(param_1,puVar10);
    }
    else {
      if (local_80 == 0) {
        return;
      }
      _swift_retain(puVar14);
      (*pcVar13)();
      FUN_100004550(pcVar13,puVar14);
    }
    FUN_100004550(pcVar13,puVar14);
    return;
  }
                    /* WARNING: Does not return */
  pcVar13 = (code *)SoftwareBreakpoint(1,0x100a08870);
  (*pcVar13)();
}



/* Address: 0x100a08874 | FUN_100a08874 */

void FUN_100a08874(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  char cVar9;
  code *pcVar10;
  int iVar11;
  long lVar12;
  ulong uVar13;
  _StringGuts _Var14;
  char *pcVar15;
  undefined *puVar16;
  long *plVar17;
  ulong uVar18;
  code *pcVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  StaticString local_160;
  undefined1 *local_158;
  ulong local_110;
  long lStack_108;
  char local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  code *pcStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  char local_c8;
  undefined4 local_c0;
  undefined3 uStack_bc;
  ulong local_b8;
  long lStack_b0;
  char local_a8;
  undefined4 local_a7;
  undefined3 uStack_a3;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  code *local_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  char local_70;
  
  iVar11 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa8));
  while( true ) {
    if (iVar11 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100a08bdc);
      (*pcVar10)();
    }
    FUN_100a0a4cc(&local_b8);
    cVar9 = local_70;
    uVar8 = uStack_78;
    uVar7 = uStack_80;
    pcVar10 = local_88;
    uVar6 = uStack_90;
    uVar5 = uStack_98;
    uVar4 = local_a0;
    cVar3 = local_a8;
    lVar2 = lStack_b0;
    uVar1 = local_b8;
    local_c0 = local_a7;
    uStack_bc = uStack_a3;
    iVar11 = _pthread_mutex_unlock((pthread_mutex_t *)(param_1 + 0xa8));
    if (iVar11 != 0) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100a08be0);
      (*pcVar10)();
    }
    if (local_70 == -1) {
      return;
    }
    if (cVar9 != '\x01') break;
    uVar18 = uVar1;
    _swift_getObjectType();
    pcVar19 = *(code **)(lVar2 + 0x10);
    local_110 = uVar1;
    lStack_108 = lVar2;
    local_100 = cVar3;
    local_f8 = uVar4;
    local_f0 = uVar5;
    local_e8 = uVar6;
    uStack_d8 = uVar7;
    pcStack_e0 = pcVar10;
    local_d0 = uVar8;
    local_c8 = 1;
    FUN_1000f8cac(&local_110,&local_160,&DAT_100ff46c0,&DAT_100c8dcf8);
    uVar13 = uVar18;
    (*pcVar19)(uVar18,lVar2);
    if ((uVar13 & 1) == 0) {
      lVar12 = param_2;
      _swift_allocObject(param_2,0x58,7);
      *(ulong *)(lVar12 + 0x10) = uVar1;
      *(long *)(lVar12 + 0x18) = lVar2;
      *(char *)(lVar12 + 0x20) = cVar3;
      *(undefined4 *)(lVar12 + 0x21) = local_c0;
      *(uint *)(lVar12 + 0x24) = CONCAT31(uStack_bc,local_c0._3_1_);
      *(undefined8 *)(lVar12 + 0x30) = uVar5;
      *(undefined8 *)(lVar12 + 0x28) = uVar4;
      *(code **)(lVar12 + 0x40) = pcVar10;
      *(undefined8 *)(lVar12 + 0x38) = uVar6;
      *(undefined8 *)(lVar12 + 0x48) = uVar7;
      *(undefined8 *)(lVar12 + 0x50) = uVar8;
      pcVar10 = *(code **)(lVar2 + 0x18);
      _swift_unknownObjectRetain(uVar1);
      _swift_retain(uVar4);
      _swift_retain(uVar6);
      _swift_retain(uVar7);
      _swift_errorRetain(uVar8);
      (*pcVar10)(param_3,lVar12,uVar18,lVar2);
      _swift_release(uVar7);
      _swift_release(uVar6);
      _swift_release(uVar4);
      _swift_unknownObjectRelease(uVar1);
      _swift_errorRelease(uVar8);
      FUN_1000fb4c4(&local_b8,&DAT_100ff46c8,&DAT_100c8dd00);
      _swift_release(lVar12);
    }
    else {
      (*pcVar10)(uVar8);
      _swift_release(uVar7);
      _swift_release(uVar6);
      _swift_release(uVar4);
      _swift_unknownObjectRelease(uVar1);
      _swift_errorRelease(uVar8);
      FUN_1000fb4c4(&local_b8,&DAT_100ff46c8,&DAT_100c8dd00);
    }
    iVar11 = _pthread_mutex_lock((pthread_mutex_t *)(param_1 + 0xa8));
  }
  local_110 = uVar1;
  lStack_108 = lVar2;
  local_100 = cVar3;
  local_f8 = uVar4;
  pcStack_e0 = pcVar10;
  local_e8 = uVar6;
  local_f0 = uVar5;
  uStack_d8 = uVar7;
  local_d0 = uVar8;
  local_c8 = cVar9;
  pcVar15 = &DAT_100ff46c0;
  puVar16 = &DAT_100c8dcf8;
  _Var14.unknown = (undefined *)&local_160;
  FUN_1000f8cac(&local_110);
  uVar18 = 0;
  plVar17 = (long *)(uVar1 + 0x28);
  do {
    if (cVar3 == '\x01') {
      if (uVar18 == *(ulong *)(uVar1 + 0x10)) goto LAB_100a08b88;
      if (*(ulong *)(uVar1 + 0x10) <= uVar18) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100a08be4);
        (*pcVar10)();
      }
      lVar12 = *plVar17;
    }
    else {
      lVar12 = lVar2;
      if (uVar18 != 0) {
        if (uVar18 != 1) {
          local_160.unknown = (undefined *)0x0;
          local_158 = (undefined1 *)0xe000000000000000;
          Swift::_StringGuts::grow(0x16,_Var14);
          _swift_bridgeObjectRelease(local_158);
          local_160.unknown = (undefined *)0x207865646e69;
          local_158 = &DAT_e600000000000000;
          SVar20 = Swift::CustomStringConvertible::get_description();
          SVar22.bridgeObject = puVar16;
          SVar22.str = pcVar15;
          Swift::String::append(SVar20,SVar22);
          _swift_bridgeObjectRelease(SVar20.bridgeObject);
          SVar20.bridgeObject = (void *)0xee0073646e756f62;
          SVar20.str = (char *)0x20666f2074756f20;
          SVar23.bridgeObject = puVar16;
          SVar23.str = pcVar15;
          Swift::String::append(SVar20,SVar23);
          SVar21.bridgeObject = (void *)0x2;
          SVar21.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar21,local_160,(__uint64)local_158,0xdae790);
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100a08ca4);
          (*pcVar10)();
        }
LAB_100a08b88:
        FUN_1000fb4c4(&local_b8,&DAT_100ff46c8,&DAT_100c8dd00);
        FUN_1000fb4c4(&local_b8,&DAT_100ff46c8,&DAT_100c8dd00);
        return;
      }
    }
    uVar18 = uVar18 + 1;
    **(undefined1 **)(*(long *)(lVar12 + 0x40) + 0x28) = 1;
    _swift_continuation_throwingResume();
    plVar17 = plVar17 + 2;
  } while( true );
}



/* Address: 0x100a08ca4 | FUN_100a08ca4 */

undefined8 FUN_100a08ca4(undefined *param_1,undefined8 param_2,code *param_3)

{
  undefined *puVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  char cVar7;
  byte bVar8;
  code *pcVar9;
  int iVar10;
  undefined **ppuVar11;
  undefined *puVar12;
  _StringGuts _Var13;
  char *pcVar14;
  undefined *puVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  ulong *unaff_x20;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  undefined *puVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  undefined *local_410;
  undefined *puStack_408;
  char local_400;
  undefined7 uStack_388;
  undefined1 local_381;
  undefined7 uStack_380;
  undefined1 uStack_379;
  undefined7 uStack_378;
  undefined1 local_371;
  undefined7 uStack_370;
  undefined1 uStack_369;
  undefined7 uStack_368;
  undefined1 local_361;
  undefined7 uStack_360;
  undefined1 uStack_359;
  undefined7 uStack_358;
  undefined1 local_351;
  undefined7 uStack_350;
  undefined1 uStack_349;
  undefined7 uStack_348;
  undefined *local_340;
  undefined *puStack_338;
  undefined *puStack_330;
  undefined *local_328;
  undefined1 local_320;
  undefined7 uStack_31f;
  undefined1 uStack_318;
  undefined7 uStack_317;
  undefined1 uStack_310;
  undefined7 local_30f;
  undefined1 uStack_308;
  undefined7 uStack_307;
  undefined1 uStack_300;
  undefined7 local_2ff;
  undefined1 uStack_2f8;
  undefined7 uStack_2f7;
  undefined1 uStack_2f0;
  undefined7 local_2ef;
  undefined1 uStack_2e8;
  undefined7 uStack_2e7;
  undefined1 uStack_2e0;
  undefined7 uStack_2df;
  ulong uStack_2d8;
  ulong uStack_2d0;
  ulong uStack_2c8;
  undefined1 local_2c0;
  undefined *local_2b0;
  undefined *puStack_2a8;
  undefined *local_2a0;
  ulong uStack_298;
  ulong local_290;
  ulong uStack_288;
  ulong uStack_280;
  ulong uStack_278;
  ulong local_270;
  ulong uStack_268;
  ulong uStack_260;
  ulong uStack_258;
  ulong local_250;
  ulong uStack_248;
  ulong uStack_240;
  ulong uStack_238;
  undefined1 local_230;
  StaticString local_220;
  undefined1 *puStack_218;
  ulong uStack_210;
  ulong uStack_208;
  ulong local_200;
  ulong uStack_1f8;
  ulong uStack_1f0;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  ulong uStack_1d0;
  ulong uStack_1c8;
  ulong local_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  ulong uStack_1a8;
  undefined1 local_1a0;
  undefined *local_190;
  ulong uStack_188;
  ulong uStack_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong uStack_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong uStack_120;
  ulong uStack_118;
  undefined1 local_110;
  ulong local_100;
  ulong uStack_f8;
  ulong uStack_f0;
  ulong uStack_e8;
  ulong local_e0;
  ulong uStack_d8;
  ulong uStack_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined1 local_80;
  
  uStack_138 = unaff_x20[0xb];
  uStack_140 = unaff_x20[10];
  uStack_98 = unaff_x20[0xd];
  local_a0 = unaff_x20[0xc];
  uStack_128 = unaff_x20[0xd];
  local_130 = unaff_x20[0xc];
  uStack_88 = unaff_x20[0xf];
  uStack_90 = unaff_x20[0xe];
  uStack_178 = unaff_x20[3];
  uStack_180 = unaff_x20[2];
  uStack_d8 = unaff_x20[5];
  local_e0 = unaff_x20[4];
  uStack_168 = unaff_x20[5];
  local_170 = unaff_x20[4];
  uStack_c8 = unaff_x20[7];
  uStack_d0 = unaff_x20[6];
  uStack_158 = unaff_x20[7];
  uStack_160 = unaff_x20[6];
  uStack_b8 = unaff_x20[9];
  local_c0 = unaff_x20[8];
  uStack_148 = unaff_x20[9];
  local_150 = unaff_x20[8];
  uStack_a8 = unaff_x20[0xb];
  uStack_b0 = unaff_x20[10];
  uStack_f8 = unaff_x20[1];
  local_100 = *unaff_x20;
  uStack_e8 = unaff_x20[3];
  uStack_f0 = unaff_x20[2];
  uStack_188 = unaff_x20[1];
  local_190 = (undefined *)*unaff_x20;
  uStack_118 = unaff_x20[0xf];
  uStack_120 = unaff_x20[0xe];
  local_80 = (undefined1)unaff_x20[0x10];
  local_110 = (undefined1)unaff_x20[0x10];
  iVar10 = (int)&local_190;
  FUN_1005e4694();
  if (iVar10 < 2) {
    if (iVar10 == 0) {
      ppuVar11 = &local_190;
      FUN_100004520();
      bVar8 = *(byte *)ppuVar11;
      puVar21 = &DAT_100ff4460;
      FUN_1000f7830(&DAT_100ff4460,&DAT_100c8dd20);
      _swift_allocObject();
      *(undefined8 *)(puVar21 + 0x18) = 2;
      *(undefined8 *)(puVar21 + 0x10) = 1;
      *(undefined **)(puVar21 + 0x20) = param_1;
      uStack_369 = SUB81(ppuVar11[4],0);
      uStack_368 = (undefined7)((ulong)ppuVar11[4] >> 8);
      local_371 = SUB81(ppuVar11[3],0);
      uStack_370 = (undefined7)((ulong)ppuVar11[3] >> 8);
      uStack_379 = SUB81(ppuVar11[2],0);
      uStack_378 = (undefined7)((ulong)ppuVar11[2] >> 8);
      local_381 = SUB81(ppuVar11[1],0);
      uStack_380 = (undefined7)((ulong)ppuVar11[1] >> 8);
      uStack_359 = SUB81(ppuVar11[6],0);
      uStack_358 = (undefined7)((ulong)ppuVar11[6] >> 8);
      local_361 = SUB81(ppuVar11[5],0);
      uStack_360 = (undefined7)((ulong)ppuVar11[5] >> 8);
      uStack_349 = SUB81(ppuVar11[8],0);
      uStack_348 = (undefined7)((ulong)ppuVar11[8] >> 8);
      local_351 = SUB81(ppuVar11[7],0);
      uStack_350 = (undefined7)((ulong)ppuVar11[7] >> 8);
      uStack_307 = uStack_370;
      uStack_300 = uStack_369;
      local_30f = uStack_378;
      uStack_308 = local_371;
      uStack_2f7 = uStack_360;
      uStack_2f0 = uStack_359;
      local_2ff = uStack_368;
      uStack_2f8 = local_361;
      uStack_2e7 = uStack_350;
      local_2ef = uStack_358;
      uStack_2e8 = local_351;
      local_340._0_2_ = (ushort)bVar8;
      puStack_330 = PTR___swiftEmptyArrayStorage_100eae0d8;
      local_328 = (undefined *)0x0;
      local_320 = 1;
      uStack_317 = uStack_380;
      uStack_310 = uStack_379;
      uStack_31f = uStack_388;
      uStack_318 = local_381;
      puStack_338 = puVar21;
      uStack_2e0 = uStack_349;
      uStack_2df = uStack_348;
      FUN_100a0c4a0(&local_340);
      local_250 = CONCAT71(uStack_2df,uStack_2e0);
      uStack_248 = uStack_2d8;
      uStack_238 = uStack_2c8;
      uStack_240 = uStack_2d0;
      local_230 = local_2c0;
      uStack_288 = CONCAT71(uStack_317,uStack_318);
      local_290 = CONCAT71(uStack_31f,local_320);
      uStack_278 = CONCAT71(uStack_307,uStack_308);
      uStack_280 = CONCAT71(local_30f,uStack_310);
      uStack_268 = CONCAT71(uStack_2f7,uStack_2f8);
      local_270 = CONCAT71(local_2ff,uStack_300);
      uStack_258 = CONCAT71(uStack_2e7,uStack_2e8);
      uStack_260 = CONCAT71(local_2ef,uStack_2f0);
      puStack_2a8 = puStack_338;
      local_2b0 = local_340;
      uStack_298 = (ulong)local_328;
      local_2a0 = puStack_330;
      uStack_1b8 = unaff_x20[0xd];
      local_1c0 = unaff_x20[0xc];
      uStack_1a8 = unaff_x20[0xf];
      uStack_1b0 = unaff_x20[0xe];
      local_1a0 = (undefined1)unaff_x20[0x10];
      uStack_1f8 = unaff_x20[5];
      local_200 = unaff_x20[4];
      uStack_1e8 = unaff_x20[7];
      uStack_1f0 = unaff_x20[6];
      uStack_1d8 = unaff_x20[9];
      local_1e0 = unaff_x20[8];
      uStack_1c8 = unaff_x20[0xb];
      uStack_1d0 = unaff_x20[10];
      puStack_218 = (undefined1 *)unaff_x20[1];
      local_220.unknown = (undefined *)*unaff_x20;
      uStack_208 = unaff_x20[3];
      uStack_210 = unaff_x20[2];
      FUN_1000f8cac(&local_100,&local_410,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_220,&DAT_100ff46d8,&DAT_100c8dd10);
      *(undefined1 *)(unaff_x20 + 0x10) = local_230;
      unaff_x20[0xd] = uStack_248;
      unaff_x20[0xc] = local_250;
      unaff_x20[0xf] = uStack_238;
      unaff_x20[0xe] = uStack_240;
      unaff_x20[5] = uStack_288;
      unaff_x20[4] = local_290;
      unaff_x20[7] = uStack_278;
      unaff_x20[6] = uStack_280;
      unaff_x20[9] = uStack_268;
      unaff_x20[8] = local_270;
      unaff_x20[0xb] = uStack_258;
      unaff_x20[10] = uStack_260;
      unaff_x20[1] = (ulong)puStack_2a8;
      *unaff_x20 = (ulong)local_2b0;
      unaff_x20[3] = uStack_298;
      unaff_x20[2] = (ulong)local_2a0;
    }
    else {
      ppuVar11 = &local_190;
      FUN_100004520();
      puVar21 = (undefined *)0x0;
      uVar5 = *(undefined1 *)ppuVar11;
      uVar6 = *(undefined1 *)((long)ppuVar11 + 1);
      puVar12 = ppuVar11[1];
      puVar1 = ppuVar11[2];
      puVar22 = ppuVar11[3];
      cVar7 = *(char *)(ppuVar11 + 4);
      puStack_338 = ppuVar11[6];
      local_340 = ppuVar11[5];
      local_328 = ppuVar11[8];
      puStack_330 = ppuVar11[7];
      puVar17 = (undefined8 *)(puVar1 + 0x20);
      uStack_318 = SUB81(ppuVar11[10],0);
      uStack_317 = (undefined7)((ulong)ppuVar11[10] >> 8);
      local_320 = SUB81(ppuVar11[9],0);
      uStack_31f = (undefined7)((ulong)ppuVar11[9] >> 8);
      uStack_308 = SUB81(ppuVar11[0xc],0);
      uStack_307 = (undefined7)((ulong)ppuVar11[0xc] >> 8);
      uStack_310 = SUB81(ppuVar11[0xb],0);
      local_30f = (undefined7)((ulong)ppuVar11[0xb] >> 8);
      local_410 = puVar1;
      puStack_408 = puVar22;
      local_400 = cVar7;
      if (cVar7 != '\x01') goto LAB_100a08f78;
      while( true ) {
        puVar18 = *(undefined **)(puVar1 + 0x10);
        if (puVar21 == puVar18) break;
        if (puVar18 <= puVar21) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a09508);
          (*pcVar9)();
        }
        if ((undefined *)*puVar17 == param_1) {
LAB_100a09220:
          uStack_248 = unaff_x20[0xd];
          local_250 = unaff_x20[0xc];
          uStack_238 = unaff_x20[0xf];
          uStack_240 = unaff_x20[0xe];
          local_230 = (undefined1)unaff_x20[0x10];
          uStack_288 = unaff_x20[5];
          local_290 = unaff_x20[4];
          uStack_278 = unaff_x20[7];
          uStack_280 = unaff_x20[6];
          uStack_268 = unaff_x20[9];
          local_270 = unaff_x20[8];
          uStack_258 = unaff_x20[0xb];
          uStack_260 = unaff_x20[10];
          puStack_2a8 = (undefined *)unaff_x20[1];
          local_2b0 = (undefined *)*unaff_x20;
          uStack_298 = unaff_x20[3];
          local_2a0 = (undefined *)unaff_x20[2];
          FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
          FUN_1000fb4c4(&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
          FUN_100a0c480(&local_220);
          unaff_x20[0xd] = uStack_1b8;
          unaff_x20[0xc] = local_1c0;
          unaff_x20[0xf] = uStack_1a8;
          unaff_x20[0xe] = uStack_1b0;
          *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
          unaff_x20[5] = uStack_1f8;
          unaff_x20[4] = local_200;
          unaff_x20[7] = uStack_1e8;
          unaff_x20[6] = uStack_1f0;
          unaff_x20[9] = uStack_1d8;
          unaff_x20[8] = local_1e0;
          unaff_x20[0xb] = uStack_1c8;
          unaff_x20[10] = uStack_1d0;
          unaff_x20[1] = (ulong)puStack_218;
          *unaff_x20 = (ulong)local_220.unknown;
          unaff_x20[3] = uStack_208;
          unaff_x20[2] = uStack_210;
          FUN_100a09820(puVar21,param_2);
          FUN_1000fb4c4();
          unaff_x20[3] = (ulong)puStack_408;
          unaff_x20[2] = (ulong)local_410;
          unaff_x20[6] = (ulong)puStack_338;
          unaff_x20[5] = (ulong)local_340;
          unaff_x20[8] = (ulong)local_328;
          unaff_x20[7] = (ulong)puStack_330;
          unaff_x20[10] = CONCAT71(uStack_317,uStack_318);
          unaff_x20[9] = CONCAT71(uStack_31f,local_320);
          *(undefined1 *)unaff_x20 = uVar5;
          *(undefined1 *)((long)unaff_x20 + 1) = uVar6;
          unaff_x20[1] = (ulong)puVar12;
          *(char *)(unaff_x20 + 4) = local_400;
          unaff_x20[0xc] = CONCAT71(uStack_307,uStack_308);
          unaff_x20[0xb] = CONCAT71(local_30f,uStack_310);
          FUN_100a0c4a0();
          return param_2;
        }
        while( true ) {
          if (puVar18 <= puVar21) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100a09504);
            (*pcVar9)();
          }
          puVar21 = puVar21 + 1;
          puVar17 = puVar17 + 2;
          if (cVar7 == '\x01') break;
LAB_100a08f78:
          if (puVar21 != (undefined *)0x0) {
            if (puVar21 == (undefined *)0x1) goto LAB_100a09100;
            local_2b0 = (undefined *)0x0;
            puStack_2a8 = (undefined *)0xe000000000000000;
            pcVar14 = &DAT_100ff46d0;
            puVar12 = &DAT_100c8dd08;
            _Var13.unknown = (undefined *)&local_220;
            FUN_1000f8cac(&local_100);
            Swift::_StringGuts::grow(0x16,_Var13);
            _swift_bridgeObjectRelease(puStack_2a8);
            local_2b0 = puVar21;
            goto LAB_100a09660;
          }
          if (puVar1 == param_1) {
            puVar21 = (undefined *)0x0;
            goto LAB_100a09220;
          }
          puVar18 = (undefined *)0x1;
          puVar21 = (undefined *)0x0;
        }
      }
LAB_100a09100:
      uStack_248 = unaff_x20[0xd];
      local_250 = unaff_x20[0xc];
      uStack_238 = unaff_x20[0xf];
      uStack_240 = unaff_x20[0xe];
      local_230 = (undefined1)unaff_x20[0x10];
      uStack_288 = unaff_x20[5];
      local_290 = unaff_x20[4];
      uStack_278 = unaff_x20[7];
      uStack_280 = unaff_x20[6];
      uStack_268 = unaff_x20[9];
      local_270 = unaff_x20[8];
      uStack_258 = unaff_x20[0xb];
      uStack_260 = unaff_x20[10];
      puStack_2a8 = (undefined *)unaff_x20[1];
      local_2b0 = (undefined *)*unaff_x20;
      uStack_298 = unaff_x20[3];
      local_2a0 = (undefined *)unaff_x20[2];
      FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_1000fb4c4(&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
      FUN_100a0c480(&local_220);
      unaff_x20[0xd] = uStack_1b8;
      unaff_x20[0xc] = local_1c0;
      unaff_x20[0xf] = uStack_1a8;
      unaff_x20[0xe] = uStack_1b0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
      unaff_x20[5] = uStack_1f8;
      unaff_x20[4] = local_200;
      unaff_x20[7] = uStack_1e8;
      unaff_x20[6] = uStack_1f0;
      unaff_x20[9] = uStack_1d8;
      unaff_x20[8] = local_1e0;
      unaff_x20[0xb] = uStack_1c8;
      unaff_x20[10] = uStack_1d0;
      unaff_x20[1] = (ulong)puStack_218;
      *unaff_x20 = (ulong)local_220.unknown;
      unaff_x20[3] = uStack_208;
      unaff_x20[2] = uStack_210;
      puVar21 = puVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar18 = puVar12;
      if (((ulong)puVar21 & 1) == 0) {
        puVar18 = (undefined *)0x0;
        (*param_3)(0,*(long *)(puVar12 + 0x10) + 1,1,puVar12);
      }
      uVar2 = *(ulong *)(puVar18 + 0x10);
      puVar21 = puVar18;
      if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar2) {
        puVar21 = (undefined *)(ulong)(1 < *(ulong *)(puVar18 + 0x18));
        (*param_3)(puVar21,uVar2 + 1,1,puVar18);
      }
      *(ulong *)(puVar21 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar21 + uVar2 * 8 + 0x20) = param_1;
      FUN_1000fb4c4();
      *(undefined1 *)unaff_x20 = uVar5;
      *(undefined1 *)((long)unaff_x20 + 1) = uVar6;
      unaff_x20[1] = (ulong)puVar21;
      unaff_x20[2] = (ulong)puVar1;
      unaff_x20[3] = (ulong)puVar22;
      *(char *)(unaff_x20 + 4) = cVar7;
      unaff_x20[6] = (ulong)puStack_338;
      unaff_x20[5] = (ulong)local_340;
      unaff_x20[8] = (ulong)local_328;
      unaff_x20[7] = (ulong)puStack_330;
      unaff_x20[10] = CONCAT71(uStack_317,uStack_318);
      unaff_x20[9] = CONCAT71(uStack_31f,local_320);
      unaff_x20[0xc] = CONCAT71(uStack_307,uStack_308);
      unaff_x20[0xb] = CONCAT71(local_30f,uStack_310);
      FUN_100a0c4a0();
    }
  }
  else if (iVar10 == 2) {
    ppuVar11 = &local_190;
    FUN_100004520();
    uVar5 = *(undefined1 *)ppuVar11;
    uVar6 = *(undefined1 *)((long)ppuVar11 + 1);
    puVar21 = ppuVar11[1];
    puVar18 = ppuVar11[2];
    cVar7 = *(char *)(ppuVar11 + 3);
    puVar1 = ppuVar11[4];
    puVar3 = ppuVar11[5];
    bVar8 = *(byte *)(ppuVar11 + 6);
    local_2a0 = (undefined *)CONCAT71(local_2a0._1_7_,cVar7);
    puVar15 = ppuVar11[7];
    puStack_338 = ppuVar11[9];
    local_340 = ppuVar11[8];
    puVar28 = ppuVar11[0xb];
    puVar27 = ppuVar11[10];
    puVar16 = ppuVar11[0xb];
    puVar25 = ppuVar11[0xd];
    puVar23 = ppuVar11[0xc];
    puVar22 = ppuVar11[0xe];
    puVar4 = ppuVar11[0xf];
    puVar26 = ppuVar11[0xe];
    puVar24 = ppuVar11[0xd];
    puVar12 = &DAT_100c8dd08;
    local_2b0 = puVar21;
    puStack_2a8 = puVar18;
    FUN_1000f8cac(&local_100,&local_220,&DAT_100ff46d0);
    puVar20 = param_1;
    _Var13.unknown = puVar3;
    pcVar14 = (char *)(ulong)bVar8;
    FUN_100a096dc();
    if (((ulong)puVar20 & 1) == 0) {
      _swift_errorRelease(puVar4);
      FUN_1005e46ac(puVar3,(char *)(ulong)bVar8);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar22);
      _swift_release(puVar23);
      _swift_release(puVar27);
      _swift_unknownObjectRelease(puVar15);
      FUN_10000cae0(puVar21,puVar18,cVar7);
    }
    else {
      puVar20 = (undefined *)0x0;
      puVar17 = (undefined8 *)(puVar21 + 0x20);
      if (cVar7 != '\x01') goto LAB_100a09070;
      while( true ) {
        puVar19 = *(undefined **)(puVar21 + 0x10);
        if (puVar20 == puVar19) break;
        if (puVar19 <= puVar20) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x100a09510);
          (*pcVar9)();
        }
        if ((undefined *)*puVar17 == param_1) {
LAB_100a09400:
          FUN_1000fb4c4();
          FUN_100a0c480(&local_220);
          unaff_x20[0xd] = uStack_1b8;
          unaff_x20[0xc] = local_1c0;
          unaff_x20[0xf] = uStack_1a8;
          unaff_x20[0xe] = uStack_1b0;
          *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
          unaff_x20[5] = uStack_1f8;
          unaff_x20[4] = local_200;
          unaff_x20[7] = uStack_1e8;
          unaff_x20[6] = uStack_1f0;
          unaff_x20[9] = uStack_1d8;
          unaff_x20[8] = local_1e0;
          unaff_x20[0xb] = uStack_1c8;
          unaff_x20[10] = uStack_1d0;
          unaff_x20[1] = (ulong)puStack_218;
          *unaff_x20 = (ulong)local_220.unknown;
          unaff_x20[3] = uStack_208;
          unaff_x20[2] = uStack_210;
          FUN_100a09820(puVar20,param_2);
          FUN_1000fb4c4();
          *(undefined1 *)unaff_x20 = uVar5;
          *(undefined1 *)((long)unaff_x20 + 1) = uVar6;
          unaff_x20[2] = (ulong)puStack_2a8;
          unaff_x20[1] = (ulong)local_2b0;
          *(undefined1 *)(unaff_x20 + 3) = local_2a0._0_1_;
          unaff_x20[4] = (ulong)puVar1;
          unaff_x20[5] = (ulong)puVar3;
          *(byte *)(unaff_x20 + 6) = bVar8;
          unaff_x20[7] = (ulong)puVar15;
          unaff_x20[9] = (ulong)puStack_338;
          unaff_x20[8] = (ulong)local_340;
          unaff_x20[10] = (ulong)puVar27;
          unaff_x20[0xb] = (ulong)puVar16;
          unaff_x20[0xc] = (ulong)puVar23;
          unaff_x20[0xe] = (ulong)puVar26;
          unaff_x20[0xd] = (ulong)puVar24;
          unaff_x20[0xf] = (ulong)puVar4;
          FUN_1005e46c0();
          return param_2;
        }
        while( true ) {
          if (puVar19 <= puVar20) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x100a0950c);
            (*pcVar9)();
          }
          puVar20 = puVar20 + 1;
          puVar17 = puVar17 + 2;
          if (cVar7 == '\x01') break;
LAB_100a09070:
          if (puVar20 != (undefined *)0x0) {
            if (puVar20 != (undefined *)0x1) {
              local_220.unknown = (undefined *)0x0;
              puStack_218 = (undefined1 *)0xe000000000000000;
              Swift::_StringGuts::grow(0x16,_Var13);
              _swift_bridgeObjectRelease(puStack_218);
              local_410 = puVar20;
LAB_100a09660:
              puStack_218 = &DAT_e600000000000000;
              local_220.unknown = (undefined *)0x207865646e69;
              SVar29 = Swift::CustomStringConvertible::get_description();
              SVar31.bridgeObject = puVar12;
              SVar31.str = pcVar14;
              Swift::String::append(SVar29,SVar31);
              _swift_bridgeObjectRelease(SVar29.bridgeObject);
              SVar29.bridgeObject = (void *)0xee0073646e756f62;
              SVar29.str = (char *)0x20666f2074756f20;
              SVar32.bridgeObject = puVar12;
              SVar32.str = pcVar14;
              Swift::String::append(SVar29,SVar32);
              SVar30.bridgeObject = (void *)0x2;
              SVar30.str = (char *)0xb;
              Swift::_assertionFailure
                        ((StaticString)0x100d8deb0,SVar30,local_220,(__uint64)puStack_218,0xdae790);
                    /* WARNING: Does not return */
              pcVar9 = (code *)SoftwareBreakpoint(1,0x100a096dc);
              (*pcVar9)();
            }
            goto LAB_100a0931c;
          }
          if (puVar21 == param_1) {
            puVar20 = (undefined *)0x0;
            goto LAB_100a09400;
          }
          puVar19 = (undefined *)0x1;
          puVar20 = (undefined *)0x0;
        }
      }
LAB_100a0931c:
      FUN_1000fb4c4();
      FUN_100a0c480(&local_220);
      unaff_x20[0xd] = uStack_1b8;
      unaff_x20[0xc] = local_1c0;
      unaff_x20[0xf] = uStack_1a8;
      unaff_x20[0xe] = uStack_1b0;
      *(undefined1 *)(unaff_x20 + 0x10) = local_1a0;
      unaff_x20[5] = uStack_1f8;
      unaff_x20[4] = local_200;
      unaff_x20[7] = uStack_1e8;
      unaff_x20[6] = uStack_1f0;
      unaff_x20[9] = uStack_1d8;
      unaff_x20[8] = local_1e0;
      unaff_x20[0xb] = uStack_1c8;
      unaff_x20[10] = uStack_1d0;
      unaff_x20[1] = (ulong)puStack_218;
      *unaff_x20 = (ulong)local_220.unknown;
      unaff_x20[3] = uStack_208;
      unaff_x20[2] = uStack_210;
      puVar12 = puVar1;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar20 = puVar1;
      if (((ulong)puVar12 & 1) == 0) {
        puVar20 = (undefined *)0x0;
        (*param_3)(0,*(long *)(puVar1 + 0x10) + 1,1,puVar1);
      }
      uVar2 = *(ulong *)(puVar20 + 0x10);
      puVar12 = puVar20;
      if (*(ulong *)(puVar20 + 0x18) >> 1 <= uVar2) {
        puVar12 = (undefined *)(ulong)(1 < *(ulong *)(puVar20 + 0x18));
        (*param_3)(puVar12,uVar2 + 1,1,puVar20);
      }
      *(ulong *)(puVar12 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar12 + uVar2 * 8 + 0x20) = param_1;
      FUN_1000fb4c4();
      *(undefined1 *)unaff_x20 = uVar5;
      *(undefined1 *)((long)unaff_x20 + 1) = uVar6;
      unaff_x20[1] = (ulong)puVar21;
      unaff_x20[2] = (ulong)puVar18;
      *(char *)(unaff_x20 + 3) = cVar7;
      unaff_x20[4] = (ulong)puVar12;
      unaff_x20[5] = (ulong)puVar3;
      *(byte *)(unaff_x20 + 6) = bVar8;
      unaff_x20[7] = (ulong)puVar15;
      unaff_x20[9] = (ulong)puStack_338;
      unaff_x20[8] = (ulong)local_340;
      unaff_x20[0xb] = (ulong)puVar28;
      unaff_x20[10] = (ulong)puVar27;
      unaff_x20[0xd] = (ulong)puVar25;
      unaff_x20[0xc] = (ulong)puVar23;
      unaff_x20[0xe] = (ulong)puVar22;
      unaff_x20[0xf] = (ulong)puVar4;
      FUN_1005e46c0();
    }
  }
  else {
    if (iVar10 != 3) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x100a095a4);
      (*pcVar9)();
    }
    uStack_1b8 = uStack_128;
    local_1c0 = local_130;
    uStack_1a8 = uStack_118;
    uStack_1b0 = uStack_120;
    local_1a0 = local_110;
    uStack_1f8 = uStack_168;
    local_200 = local_170;
    uStack_1e8 = uStack_158;
    uStack_1f0 = uStack_160;
    uStack_1d8 = uStack_148;
    local_1e0 = local_150;
    uStack_1c8 = uStack_138;
    uStack_1d0 = uStack_140;
    puStack_218 = (undefined1 *)uStack_188;
    local_220.unknown = local_190;
    uStack_208 = uStack_178;
    uStack_210 = uStack_180;
    FUN_1000f8cac(&local_100,&local_2b0,&DAT_100ff46d0,&DAT_100c8dd08);
    FUN_1000fb4c4(&local_220,&DAT_100ff46d0,&DAT_100c8dd08);
  }
  return 0;
}



/* Address: 0x100a096dc | FUN_100a096dc */

undefined8 FUN_100a096dc(undefined *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  uint uVar1;
  code *pcVar2;
  _StringGuts _Var3;
  ulong uVar4;
  ulong uVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  
  uVar4 = 0;
  uVar1 = (uint)param_3 & 0xff;
  if (uVar1 != 1) goto LAB_100a09718;
  while( true ) {
    if (uVar4 == *(ulong *)(param_2.unknown + 0x10)) {
      return 0;
    }
    if (*(ulong *)(param_2.unknown + 0x10) <= uVar4) break;
    _Var3.unknown = *(undefined **)(param_2.unknown + uVar4 * 8 + 0x20);
    uVar5 = uVar4;
    while( true ) {
      if (_Var3.unknown == param_1) {
        return 1;
      }
      uVar4 = uVar5 + 1;
      if (uVar1 == 1) break;
LAB_100a09718:
      uVar5 = 0;
      _Var3.unknown = param_2.unknown;
      if (uVar4 != 0) {
        if (uVar4 == 1) {
          return 0;
        }
        Swift::_StringGuts::grow(0x16,param_2);
        _swift_bridgeObjectRelease(0xe000000000000000);
        SVar6 = Swift::CustomStringConvertible::get_description();
        SVar8.bridgeObject = param_4;
        SVar8.str = param_3;
        Swift::String::append(SVar6,SVar8);
        _swift_bridgeObjectRelease(SVar6.bridgeObject);
        SVar6.bridgeObject = (void *)0xee0073646e756f62;
        SVar6.str = (char *)0x20666f2074756f20;
        SVar9.bridgeObject = param_4;
        SVar9.str = param_3;
        Swift::String::append(SVar6,SVar9);
        SVar7.bridgeObject = (void *)0x2;
        SVar7.str = (char *)0xb;
        Swift::_assertionFailure
                  ((StaticString)0x100d8deb0,SVar7,(StaticString)0x207865646e69,0xe600000000000000,
                   0xdae790);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100a09820);
        (*pcVar2)();
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100a09760);
  (*pcVar2)();
}



/* Address: 0x100a09820 | FUN_100a09820 */

void FUN_100a09820(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 *unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  
  puVar2 = (undefined *)*unaff_x20;
  if (*(char *)(unaff_x20 + 2) == '\x01') {
    (*(code *)param_2.unknown)(param_1);
  }
  else {
    puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
    if (param_1 != 0) {
      Swift::_StringGuts::grow(0x16,param_2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      SVar3 = Swift::CustomStringConvertible::get_description();
      SVar5.bridgeObject = param_4;
      SVar5.str = param_3;
      Swift::String::append(SVar3,SVar5);
      _swift_bridgeObjectRelease(SVar3.bridgeObject);
      SVar3.bridgeObject = (void *)0xee0073646e756f62;
      SVar3.str = (char *)0x20666f2074756f20;
      SVar6.bridgeObject = param_4;
      SVar6.str = param_3;
      Swift::String::append(SVar3,SVar6);
      SVar4.bridgeObject = (void *)0x2;
      SVar4.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar4,(StaticString)0x207865646e69,0xe600000000000000,
                 0xdae790);
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100a09950);
      (*pcVar1)();
    }
  }
  *unaff_x20 = puVar2;
  unaff_x20[1] = 0;
  *(undefined1 *)(unaff_x20 + 2) = 1;
  return;
}


