/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008ae2fc | FUN_1008ae2fc */

undefined8 FUN_1008ae2fc(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fe90d8;
  FUN_1000f7830(&DAT_100fe90d8,&DAT_100c81b10);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1008ae344 | FUN_1008ae344 */

void FUN_1008ae344(ulong param_1,long param_2,uint param_3)

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
    FUN_1006841c8(param_2,param_3 & 1,lVar4,&DAT_100ef1a40);
    if ((param_1 & 1) == 0) {
      puVar1 = &DAT_100fea940;
      FUN_1000f7830(&DAT_100fea940,&DAT_100c82198);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      lVar6 = *(long *)(lVar4 + 0x18);
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x48;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_1008ae794(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
      }
    }
    else {
      lVar6 = *(long *)(lVar4 + 0x18);
      puVar1 = &DAT_100fea940;
      FUN_1000f7830(&DAT_100fea940,&DAT_100c82198);
      _swift_allocObject();
      puVar2 = puVar1;
      _malloc_size();
      *(long *)(puVar1 + 0x10) = (long)(puVar2 + -0x28) / 0x48;
      *(long *)(puVar1 + 0x18) = lVar6;
      *(undefined8 *)(puVar1 + 0x20) = 0;
      if (0 < lVar6) {
        FUN_1008ae67c(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
        *(undefined8 *)(lVar4 + 0x18) = 0;
      }
    }
  }
  else {
    puVar1 = &DAT_100fea940;
    FUN_1000f7830(&DAT_100fea940,&DAT_100c82198);
    _swift_allocObject();
    uVar8 = *(undefined8 *)(lVar4 + 0x20);
    uVar7 = *(undefined8 *)(lVar4 + 0x18);
    lVar3 = *(long *)(lVar4 + 0x18);
    *(long *)(puVar1 + 0x10) = lVar6;
    *(undefined8 *)(puVar1 + 0x20) = uVar8;
    *(undefined8 *)(puVar1 + 0x18) = uVar7;
    if (0 < lVar3) {
      FUN_1008ae5a0(puVar1 + 0x10,puVar1 + 0x28,plVar5,lVar4 + 0x28);
    }
  }
  _swift_release(lVar4);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1008ae518 | FUN_1008ae518 */

void FUN_1008ae518(long *param_1,long param_2,undefined8 param_3)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = param_1[1];
  lVar3 = param_1[2] + lVar4;
  if (SCARRY8(param_1[2],lVar4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ae598);
    (*pcVar1)();
  }
  if (lVar4 < 0) {
    if ((lVar3 < 0) && (bVar2 = SCARRY8(lVar3,*param_1), lVar3 = lVar3 + *param_1, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ae5a0);
      (*pcVar1)();
    }
  }
  else {
    lVar4 = *param_1;
    bVar2 = SBORROW8(lVar3,lVar4);
    if ((lVar4 <= lVar3) && (lVar3 = lVar3 - lVar4, bVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ae554);
      (*pcVar1)();
    }
  }
  FUN_1005e650c(param_3,param_2 + lVar3 * 0x48);
  if (!SCARRY8(param_1[1],1)) {
    param_1[1] = param_1[1] + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1008ae59c);
  (*pcVar1)();
}



/* Address: 0x1008ae5a0 | FUN_1008ae5a0 */

void FUN_1008ae5a0(undefined8 param_1,long param_2,long *param_3,long param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = param_3[2];
  lVar1 = *param_3 - lVar5;
  if (SBORROW8(*param_3,lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ae670);
    (*pcVar4)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar2 = lVar1;
    lVar3 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ae674);
      (*pcVar4)();
    }
  }
  else {
    lVar6 = 0;
    lVar2 = lVar7;
    lVar3 = 0;
  }
  if (0 < lVar2) {
    if (param_4 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ae678);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5 * 0x48,param_4 + lVar5 * 0x48,lVar2,&DAT_100ef1a40);
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1008ae67c);
      (*pcVar4)();
    }
    _swift_arrayInitWithCopy(param_2,lVar3,lVar6,&DAT_100ef1a40);
  }
  return;
}



/* Address: 0x1008ae67c | FUN_1008ae67c */

void FUN_1008ae67c(undefined8 param_1,void *param_2,long *param_3,void *param_4)

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
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ae788);
    (*pcVar2)();
  }
  lVar4 = param_3[1];
  if (lVar1 < lVar4) {
    lVar6 = lVar4 - lVar1;
    pvVar5 = param_4;
    lVar7 = lVar1;
    if (SBORROW8(lVar4,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ae78c);
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
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ae790);
      (*pcVar2)();
    }
    param_4 = (void *)((long)param_4 + lVar3 * 0x48);
    if (param_2 != param_4 || (void *)((long)param_4 + lVar7 * 0x48) <= param_2) {
      _memmove(param_2,param_4,lVar7 * 0x48);
    }
  }
  if (lVar1 < lVar4 && lVar6 != 0) {
    if (pvVar5 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1008ae794);
      (*pcVar2)();
    }
    param_2 = (void *)((long)param_2 + lVar7 * 0x48);
    if ((param_2 != pvVar5) || ((void *)((long)pvVar5 + lVar6 * 0x48) <= param_2)) {
      _memmove(param_2,pvVar5,lVar6 * 0x48);
      return;
    }
  }
  return;
}



/* Address: 0x1008ae794 | FUN_1008ae794 */

void FUN_1008ae794(undefined8 param_1,long param_2,long *param_3,long param_4)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ae874);
    (*pcVar3)();
  }
  lVar7 = param_3[1];
  if (lVar1 < lVar7) {
    lVar6 = lVar7 - lVar1;
    lVar5 = lVar1;
    lVar2 = param_4;
    if (SBORROW8(lVar7,lVar1)) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ae878);
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
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ae87c);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2,param_4 + lVar4 * 0x48,lVar5,&DAT_100ef1a40);
    lVar5 = lVar5 * 0x48;
  }
  if (lVar1 < lVar7 && lVar6 != 0) {
    if (lVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008ae880);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(param_2 + lVar5,lVar2,lVar6,&DAT_100ef1a40);
  }
  return;
}



/* Address: 0x1008ae880 | FUN_1008ae880 */

void FUN_1008ae880(void)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  lVar3 = *unaff_x20;
  uVar4 = *(undefined8 *)(lVar3 + 0x10);
  puVar1 = &DAT_100fea940;
  FUN_1000f7830(&DAT_100fea940,&DAT_100c82198);
  _swift_allocObject();
  uVar6 = *(undefined8 *)(lVar3 + 0x20);
  uVar5 = *(undefined8 *)(lVar3 + 0x18);
  lVar2 = *(long *)(lVar3 + 0x18);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  *(undefined8 *)(puVar1 + 0x20) = uVar6;
  *(undefined8 *)(puVar1 + 0x18) = uVar5;
  if (0 < lVar2) {
    FUN_1008ae5a0(puVar1 + 0x10,puVar1 + 0x28,(undefined8 *)(lVar3 + 0x10),lVar3 + 0x28);
  }
  _swift_release(lVar3);
  *unaff_x20 = (long)puVar1;
  return;
}



/* Address: 0x1008ae920 | FUN_1008ae920 */

void FUN_1008ae920(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ae92c | FUN_1008ae92c */

void FUN_1008ae92c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008ae938 | FUN_1008ae938 */

uint FUN_1008ae938(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_1008ae250(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x10));
  return (uint)param_1 & 1;
}



/* Address: 0x1008ae958 | FUN_1008ae958 */

void FUN_1008ae958(long param_1)

{
  long lVar1;
  ulong uVar2;
  undefined *local_40;
  long local_38;
  undefined *puStack_30;
  long local_28;
  
  local_40 = &DAT_100c821c0;
  uVar2 = *(ulong *)(param_1 + 0x10);
  lVar1 = 0x13f;
  _swift_checkMetadataState();
  if (uVar2 < 0x40) {
    local_38 = *(long *)(lVar1 + -8) + 0x40;
    puStack_30 = &DAT_100c821c0;
    local_28 = local_38;
    _swift_initEnumMetadataMultiPayload(param_1,0,4,&local_40);
  }
  return;
}



/* Address: 0x1008ae9d0 | FUN_1008ae9d0 */

long * FUN_1008ae9d0(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar3 = *(ulong *)(lVar1 + 0x40);
  if (uVar3 < 9) {
    uVar3 = 8;
  }
  if ((*(uint *)(lVar1 + 0x50) & 0x1000f8) == 0 && uVar3 + 1 < 0x19) {
    uVar2 = (uint)*(byte *)((long)param_2 + uVar3);
    if (3 < *(byte *)((long)param_2 + uVar3)) {
      uVar2 = (int)*param_2 + 4;
    }
    if ((int)uVar2 < 2) {
      if (uVar2 == 0) {
        lVar1 = *param_2;
        _swift_errorRetain(lVar1);
        *param_1 = lVar1;
        *(undefined1 *)((long)param_1 + uVar3) = 0;
      }
      else {
        (**(code **)(lVar1 + 0x10))(param_1);
        *(undefined1 *)((long)param_1 + uVar3) = 1;
      }
    }
    else if (uVar2 == 2) {
      lVar1 = *param_2;
      _swift_errorRetain(lVar1);
      *param_1 = lVar1;
      *(undefined1 *)((long)param_1 + uVar3) = 2;
    }
    else {
      (**(code **)(lVar1 + 0x10))(param_1);
      *(undefined1 *)((long)param_1 + uVar3) = 3;
    }
  }
  else {
    uVar2 = *(uint *)(lVar1 + 0x50) & 0xf8;
    lVar1 = *param_2;
    *param_1 = lVar1;
    param_1 = (long *)(lVar1 + ((ulong)(uVar2 + 0x17 & (uVar2 ^ 0xffffffff)) & 0x1f8));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x1008aead8 | FUN_1008aead8 */

void FUN_1008aead8(uint *param_1,long param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  
  lVar2 = *(long *)(*(long *)(param_2 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar2 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar3 = (uint)uVar4;
    uVar6 = 4;
    if (uVar3 < 4) {
      uVar6 = uVar3;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1008aeb64;
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
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar3 & 3) << 3);
    if (3 < uVar3) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1008aeb64:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      _swift_errorRelease(*(undefined8 *)param_1);
      return;
    }
  }
  else if (uVar5 == 2) {
    _swift_errorRelease(*(undefined8 *)param_1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001008aeb8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x1008aeb90 | FUN_1008aeb90 */

undefined8 * FUN_1008aeb90(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  uint uVar8;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar8 = (uint)uVar4;
    uVar6 = 4;
    if (uVar8 < 4) {
      uVar6 = uVar8;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1008aec30;
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
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar8 & 3) << 3);
    if (3 < uVar8) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1008aec30:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar7 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar7);
      uVar2 = 0;
      *param_1 = uVar7;
    }
    else {
      (**(code **)(lVar3 + 0x10))(param_1);
      uVar2 = 1;
    }
  }
  else if (uVar5 == 2) {
    uVar7 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar7);
    *param_1 = uVar7;
    uVar2 = 2;
  }
  else {
    (**(code **)(lVar3 + 0x10))(param_1);
    uVar2 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return param_1;
}



/* Address: 0x1008aecb0 | FUN_1008aecb0 */

uint * FUN_1008aecb0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar6 = *(long *)(param_3 + 0x10);
  lVar8 = *(long *)(lVar6 + -8);
  uVar2 = *(ulong *)(lVar8 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar7 = (uint)uVar2;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1008aed60;
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
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1008aed60:
  if ((int)uVar3 < 2) {
    if (uVar3 != 0) goto LAB_1008aed80;
LAB_1008aed6c:
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    if (uVar3 == 2) goto LAB_1008aed6c;
LAB_1008aed80:
    (**(code **)(lVar8 + 8))(param_1,lVar6);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar7 < 4) {
      uVar4 = uVar7;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1008aee04;
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
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1008aee04:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      uVar5 = *(undefined8 *)param_2;
      _swift_errorRetain(uVar5);
      bVar1 = 0;
      *(undefined8 *)param_1 = uVar5;
    }
    else {
      (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
      bVar1 = 1;
    }
  }
  else if (uVar3 == 2) {
    uVar5 = *(undefined8 *)param_2;
    _swift_errorRetain(uVar5);
    *(undefined8 *)param_1 = uVar5;
    bVar1 = 2;
  }
  else {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar6);
    bVar1 = 3;
  }
  *(byte *)((long)param_1 + uVar2) = bVar1;
  return param_1;
}



/* Address: 0x1008aee98 | FUN_1008aee98 */

void FUN_1008aee98(undefined8 *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  undefined1 uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar4 = *(ulong *)(lVar3 + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_2 + uVar4);
  uVar5 = (uint)bVar1;
  if (3 < bVar1) {
    uVar7 = (uint)uVar4;
    uVar6 = 4;
    if (uVar7 < 4) {
      uVar6 = uVar7;
    }
    if ((int)uVar6 < 2) {
      if (uVar6 == 0) goto LAB_1008aef30;
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
    uVar5 = uVar6 | bVar1 - 4 << (ulong)((uVar7 & 3) << 3);
    if (3 < uVar7) {
      uVar5 = uVar6;
    }
    uVar5 = uVar5 + 4;
  }
LAB_1008aef30:
  if ((int)uVar5 < 2) {
    if (uVar5 == 0) {
      uVar2 = 0;
      *param_1 = *(undefined8 *)param_2;
    }
    else {
      (**(code **)(lVar3 + 0x20))();
      uVar2 = 1;
    }
  }
  else if (uVar5 == 2) {
    *param_1 = *(undefined8 *)param_2;
    uVar2 = 2;
  }
  else {
    (**(code **)(lVar3 + 0x20))();
    uVar2 = 3;
  }
  *(undefined1 *)((long)param_1 + uVar4) = uVar2;
  return;
}



/* Address: 0x1008aefa0 | FUN_1008aefa0 */

uint * FUN_1008aefa0(uint *param_1,uint *param_2,long param_3)

{
  byte bVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  lVar5 = *(long *)(param_3 + 0x10);
  lVar7 = *(long *)(lVar5 + -8);
  uVar2 = *(ulong *)(lVar7 + 0x40);
  if (uVar2 < 9) {
    uVar2 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar2);
  uVar3 = (uint)bVar1;
  uVar6 = (uint)uVar2;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1008af050;
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
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1008af050:
  if ((int)uVar3 < 2) {
    if (uVar3 != 0) goto LAB_1008af070;
LAB_1008af05c:
    _swift_errorRelease(*(undefined8 *)param_1);
  }
  else {
    if (uVar3 == 2) goto LAB_1008af05c;
LAB_1008af070:
    (**(code **)(lVar7 + 8))(param_1,lVar5);
  }
  bVar1 = *(byte *)((long)param_2 + uVar2);
  uVar3 = (uint)bVar1;
  if (3 < bVar1) {
    uVar4 = 4;
    if (uVar6 < 4) {
      uVar4 = uVar6;
    }
    if ((int)uVar4 < 2) {
      if (uVar4 == 0) goto LAB_1008af0f4;
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
    uVar3 = uVar4 | bVar1 - 4 << (ulong)((uVar6 & 3) << 3);
    if (3 < uVar6) {
      uVar3 = uVar4;
    }
    uVar3 = uVar3 + 4;
  }
LAB_1008af0f4:
  if ((int)uVar3 < 2) {
    if (uVar3 == 0) {
      bVar1 = 0;
      *(undefined8 *)param_1 = *(undefined8 *)param_2;
    }
    else {
      (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
      bVar1 = 1;
    }
  }
  else if (uVar3 == 2) {
    *(undefined8 *)param_1 = *(undefined8 *)param_2;
    bVar1 = 2;
  }
  else {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar5);
    bVar1 = 3;
  }
  *(byte *)((long)param_1 + uVar2) = bVar1;
  return param_1;
}



/* Address: 0x1008af178 | FUN_1008af178 */

int FUN_1008af178(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  uVar5 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (uVar5 < 9) {
    uVar5 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < 0xfd) goto LAB_1008af220;
  uVar6 = uVar5 + 1;
  uVar4 = (uint)uVar6;
  uVar3 = uVar4 << 3;
  if (uVar4 < 4) {
    uVar7 = ((param_2 + ~(-1 << (ulong)(uVar3 & 0x1f))) - 0xfc >> (ulong)(uVar3 & 0x1f)) + 1;
    if (uVar7 < 0x100) {
      if (uVar7 < 2) goto LAB_1008af220;
      goto LAB_1008af1ac;
    }
    if (uVar7 >> 0x10 == 0) {
      uVar7 = (uint)*(ushort *)((long)param_1 + uVar6);
    }
    else {
      uVar7 = *(uint *)((long)param_1 + uVar6);
    }
  }
  else {
LAB_1008af1ac:
    uVar7 = (uint)*(byte *)((long)param_1 + uVar6);
  }
  if (uVar7 != 0) {
    uVar1 = 0;
    if (uVar4 < 4) {
      uVar1 = uVar7 - 1 << (ulong)(uVar3 & 0x1f);
    }
    if (uVar4 != 0) {
      uVar3 = 4;
      if (uVar4 < 4) {
        uVar3 = uVar4;
      }
      if ((int)uVar3 < 3) {
        if (uVar3 == 1) {
          uVar6 = (ulong)(byte)*param_1;
        }
        else {
          uVar6 = (ulong)(ushort)*param_1;
        }
      }
      else if (uVar3 == 3) {
        uVar6 = (ulong)(uint3)*param_1;
      }
      else {
        uVar6 = (ulong)*param_1;
      }
    }
    return ((uint)uVar6 | uVar1) + 0xfd;
  }
LAB_1008af220:
  iVar2 = 0;
  if (3 < *(byte *)((long)param_1 + uVar5)) {
    iVar2 = (*(byte *)((long)param_1 + uVar5) ^ 0xff) + 1;
  }
  return iVar2;
}



/* Address: 0x1008af27c | FUN_1008af27c */

void FUN_1008af27c(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  undefined2 uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  int iVar7;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_4 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  sVar1 = uVar4 + 1;
  uVar5 = (uint)sVar1;
  if (param_3 < 0xfd) {
    bVar6 = 0;
  }
  else if (uVar5 < 4) {
    uVar2 = ((param_3 + ~(-1 << (ulong)(uVar5 << 3 & 0x1f))) - 0xfc >> (ulong)(uVar5 << 3 & 0x1f)) +
            1;
    bVar6 = 2;
    if (0xffff < uVar2) {
      bVar6 = 4;
    }
    if (uVar2 < 0x100) {
      bVar6 = 1 < uVar2;
    }
  }
  else {
    bVar6 = 1;
  }
  if (param_2 < 0xfd) {
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (bVar6 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      *(char *)((long)param_1 + uVar4) = -(char)param_2;
    }
  }
  else {
    param_2 = param_2 - 0xfd;
    if (uVar5 < 4) {
      iVar7 = (param_2 >> (ulong)(uVar5 << 3 & 0x1f)) + 1;
      if (uVar5 != 0) {
        uVar2 = param_2 & (-1 << (ulong)(uVar5 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar1);
        uVar3 = (undefined2)uVar2;
        if (uVar5 == 3) {
          *(undefined2 *)param_1 = uVar3;
          *(char *)((long)param_1 + 2) = (char)(uVar2 >> 0x10);
        }
        else if (uVar5 == 2) {
          *(undefined2 *)param_1 = uVar3;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar1);
      *param_1 = param_2;
      iVar7 = 1;
    }
    if (bVar6 < 2) {
      if (bVar6 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar7;
      }
    }
    else if (bVar6 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar7;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar7;
    }
  }
  return;
}



/* Address: 0x1008af420 | FUN_1008af420 */

uint FUN_1008af420(uint *param_1,long param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  uint uVar5;
  
  uVar4 = *(ulong *)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x40);
  if (uVar4 < 9) {
    uVar4 = 8;
  }
  bVar1 = *(byte *)((long)param_1 + uVar4);
  uVar2 = (uint)bVar1;
  if (3 < bVar1) {
    uVar5 = (uint)uVar4;
    uVar3 = 4;
    if (uVar5 < 4) {
      uVar3 = uVar5;
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
    uVar2 = uVar3 | bVar1 - 4 << (ulong)((uVar5 & 3) << 3);
    if (3 < uVar5) {
      uVar2 = uVar3;
    }
    uVar2 = uVar2 + 4;
  }
  return uVar2;
}



/* Address: 0x1008af4b4 | FUN_1008af4b4 */

void FUN_1008af4b4(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  undefined2 uVar2;
  size_t sVar3;
  uint uVar4;
  
  sVar3 = *(ulong *)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 0x40);
  if (sVar3 < 9) {
    sVar3 = 8;
  }
  if (param_2 < 4) {
    *(char *)((long)param_1 + sVar3) = (char)param_2;
  }
  else {
    param_2 = param_2 - 4;
    uVar4 = (uint)sVar3;
    if (uVar4 < 4) {
      *(char *)((long)param_1 + sVar3) = (char)(param_2 >> (ulong)(uVar4 << 3 & 0x1f)) + '\x04';
      if (uVar4 != 0) {
        uVar1 = param_2 & (-1 << (ulong)(uVar4 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar3);
        uVar2 = (undefined2)uVar1;
        if (uVar4 == 3) {
          *(undefined2 *)param_1 = uVar2;
          *(char *)((long)param_1 + 2) = (char)(uVar1 >> 0x10);
        }
        else if (uVar4 == 2) {
          *(undefined2 *)param_1 = uVar2;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      *(undefined1 *)((long)param_1 + sVar3) = 4;
      _bzero(param_1,sVar3);
      *param_1 = param_2;
    }
  }
  return;
}



/* Address: 0x1008af57c | FUN_1008af57c */

void FUN_1008af57c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008af588 | FUN_1008af588 */

void FUN_1008af588(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1008af594 | FUN_1008af594 */

void FUN_1008af594(long param_1)

{
  FUN_100004594();
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x30));
  return;
}



/* Address: 0x1008af5c0 | FUN_1008af5c0 */

long FUN_1008af5c0(long param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  
  lVar2 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar2;
  (*(code *)**(undefined8 **)(lVar2 + -8))();
  uVar1 = *(undefined8 *)(param_2 + 0x30);
  uVar3 = *(undefined8 *)(param_2 + 0x28);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  *(undefined8 *)(param_1 + 0x28) = uVar3;
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  _swift_retain(uVar3);
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1008af628 | FUN_1008af628 */

long FUN_1008af628(long param_1,long param_2)

{
  undefined8 uVar1;
  
  FUN_10008820c();
  uVar1 = *(undefined8 *)(param_1 + 0x28);
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(param_1 + 0x30);
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_2 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_2 + 0x38);
  return param_1;
}



/* Address: 0x1008af690 | FUN_1008af690 */

void FUN_1008af690(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar6 = param_2[5];
  uVar5 = param_2[4];
  uVar7 = *(undefined8 *)((long)param_2 + 0x29);
  *(undefined8 *)((long)param_1 + 0x31) = *(undefined8 *)((long)param_2 + 0x31);
  *(undefined8 *)((long)param_1 + 0x29) = uVar7;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  param_1[5] = uVar6;
  param_1[4] = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  return;
}



/* Address: 0x1008af6ac | FUN_1008af6ac */

undefined8 * FUN_1008af6ac(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar2 = *param_2;
  uVar3 = param_2[3];
  uVar1 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[3] = uVar3;
  param_1[2] = uVar1;
  uVar2 = param_2[5];
  uVar1 = param_1[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar2;
  _swift_release(uVar1);
  uVar2 = param_1[6];
  param_1[6] = param_2[6];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 7) = *(undefined1 *)(param_2 + 7);
  return param_1;
}



/* Address: 0x1008af704 | FUN_1008af704 */

int FUN_1008af704(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && (*(char *)((long)param_1 + 0x39) != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1008af74c | FUN_1008af74c */

void FUN_1008af74c(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[6] = 0;
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1008af79c | FUN_1008af79c */

undefined8 FUN_1008af79c(long param_1,long param_2)

{
  String *pSVar1;
  undefined8 *puVar2;
  char *pcVar3;
  _StringGuts _Var4;
  undefined *puVar5;
  _StringGuts _Var6;
  String SVar7;
  code *pcVar8;
  bool bVar9;
  Hasher into;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  undefined8 uVar13;
  long lVar14;
  ulong uVar15;
  undefined1 auStack_a8 [72];
  
  if (*(ulong *)(param_1 + 0x10) < *(ulong *)(param_2 + 0x10)) {
    uVar13 = 0;
  }
  else {
    uVar12 = 1L << ((ulong)*(byte *)(param_2 + 0x20) & 0x3f);
    uVar15 = 0xffffffffffffffff;
    if ((*(byte *)(param_2 + 0x20) & 0x3f) < 6) {
      uVar15 = ~(-1L << (uVar12 & 0x3f));
    }
    uVar15 = uVar15 & *(ulong *)(param_2 + 0x38);
    _swift_bridgeObjectRetain(param_2);
    lVar14 = 0;
joined_r0x0001008af838:
    while (uVar15 != 0) {
      if (*(long *)(param_1 + 0x10) == 0) {
        uVar13 = 0;
        goto LAB_1008af92c;
      }
      uVar10 = (uVar15 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar15 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      pSVar1 = (String *)
               (*(long *)(param_2 + 0x30) + LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) * 0x10 +
               lVar14 * 0x400);
      pcVar3 = pSVar1->str;
      puVar5 = pSVar1->bridgeObject;
      SVar7 = *pSVar1;
      Swift::Hasher::init(*(__int64 *)(param_1 + 0x28));
      _swift_bridgeObjectRetain(puVar5);
      into.unknown = auStack_a8;
      Swift::String::hash(into,SVar7);
      uVar10 = Swift::Hasher::_finalize(into);
      uVar11 = -1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      uVar10 = uVar10 & (uVar11 ^ 0xffffffffffffffff);
      if ((*(ulong *)(param_1 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) == 0) {
LAB_1008af914:
        _swift_bridgeObjectRelease(puVar5);
        uVar13 = 0;
        goto LAB_1008af92c;
      }
      uVar15 = uVar15 - 1 & uVar15;
      while( true ) {
        puVar2 = (undefined8 *)(*(long *)(param_1 + 0x30) + uVar10 * 0x10);
        _Var4.unknown = (undefined *)*puVar2;
        _Var6.unknown = (undefined *)puVar2[1];
        if ((_Var4.unknown == pcVar3 && _Var6.unknown == puVar5) ||
           (bVar9 = Swift::_stringCompareWithSmolCheck
                              (_Var4,_Var6,(_StringComparisonResult)(__int8)pcVar3), bVar9)) break;
        uVar10 = uVar10 + 1 & ~uVar11;
        if ((*(ulong *)(param_1 + 0x38 + (uVar10 >> 6) * 8) >> (uVar10 & 0x3f) & 1) == 0)
        goto LAB_1008af914;
      }
      _swift_bridgeObjectRelease(puVar5);
    }
    bVar9 = SCARRY8(lVar14,1);
    lVar14 = lVar14 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1008af964);
      (*pcVar8)();
    }
    if (lVar14 < (long)(uVar12 + 0x3f >> 6)) {
      uVar15 = ((ulong *)(param_2 + 0x38))[lVar14];
      goto joined_r0x0001008af838;
    }
    uVar13 = 1;
LAB_1008af92c:
    _swift_release(param_2);
  }
  return uVar13;
}



/* Address: 0x1008af964 | FUN_1008af964 */

ulong FUN_1008af964(ulong param_1)

{
  long lVar1;
  char cVar2;
  ulong uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  ulong unaff_x20;
  undefined8 uVar7;
  code *pcVar8;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  uVar5 = *(ulong *)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  uVar3 = uVar5;
  _swift_getObjectType();
  if (param_1 == uVar5) {
    _swift_retain();
  }
  else {
    _swift_getObjectType();
    FUN_100893ef4();
    puVar4 = &DAT_100f0c7f0;
    _swift_allocObject(&DAT_100f0c7f0,0x28,7);
    *(code **)(puVar4 + 0x10) = thunk_FUN_100888164;
    *(ulong *)(puVar4 + 0x18) = param_1;
    *(ulong *)(puVar4 + 0x20) = unaff_x20;
    pcVar8 = *(code **)(lVar1 + 0x10);
    _swift_retain_n();
    _swift_retain_n(param_1,4);
    uVar5 = uVar3;
    (*pcVar8)(uVar3,lVar1);
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f0c818;
      _swift_allocObject(&DAT_100f0c818,0x28,7);
      *(ulong *)(puVar6 + 0x10) = unaff_x20;
      *(code **)(puVar6 + 0x18) = thunk_FUN_1006225d4;
      *(undefined **)(puVar6 + 0x20) = puVar4;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain();
      _swift_retain(puVar4);
      (*pcVar8)(thunk_FUN_10088819c,puVar6,uVar3,lVar1);
      _swift_release(puVar6);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      unaff_x20 = param_1;
    }
    else {
      _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
      cVar2 = *(char *)(unaff_x20 + 0x18);
      if (cVar2 == -1) {
        _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
        FUN_10064967c(thunk_FUN_1006225d4,puVar4);
        _swift_endAccess(auStack_90);
      }
      else {
        uVar7 = *(undefined8 *)(unaff_x20 + 0x10);
        FUN_1005dfeb4(uVar7,cVar2);
        FUN_100892a8c(uVar7,cVar2,param_1);
        FUN_100308538(uVar7,cVar2);
      }
      FUN_1006486f8(0,0,0);
      FUN_100004550(0,0);
      _swift_release();
      _swift_release_n(param_1,3);
      _swift_release(puVar4);
      _swift_bridgeObjectRelease(0);
      unaff_x20 = param_1;
    }
  }
  return unaff_x20;
}



/* Address: 0x1008afb94 | FUN_1008afb94 */

undefined * FUN_1008afb94(undefined *param_1)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  puVar4 = *(undefined **)(unaff_x20 + 0x20);
  lVar1 = *(long *)(unaff_x20 + 0x28);
  puVar3 = puVar4;
  _swift_getObjectType();
  if (param_1 == puVar4) {
    _swift_retain();
    return unaff_x20;
  }
  _swift_getObjectType();
  FUN_100893ef4();
  puVar4 = &DAT_100f0c340;
  _swift_allocObject(&DAT_100f0c340,0x28,7);
  *(code **)(puVar4 + 0x10) = FUN_1008b47e0;
  *(undefined **)(puVar4 + 0x18) = param_1;
  *(undefined **)(puVar4 + 0x20) = unaff_x20;
  pcVar12 = *(code **)(lVar1 + 0x10);
  _swift_retain_n(param_1,5);
  _swift_retain_n();
  puVar5 = puVar3;
  (*pcVar12)(puVar3,lVar1);
  if (((ulong)puVar5 & 1) == 0) {
    _swift_release(param_1);
    puVar5 = &DAT_100f0c368;
    _swift_allocObject(&DAT_100f0c368,0x28,7);
    *(undefined **)(puVar5 + 0x10) = unaff_x20;
    *(code **)(puVar5 + 0x18) = FUN_1008b47f4;
    *(undefined **)(puVar5 + 0x20) = puVar4;
    pcVar12 = *(code **)(lVar1 + 0x18);
    _swift_retain();
    _swift_retain(puVar4);
    (*pcVar12)(FUN_1008b4800,puVar5,puVar3,lVar1);
    _swift_release(puVar5);
    _swift_release();
    _swift_release_n(param_1,3);
    _swift_release(puVar4);
    return param_1;
  }
  uVar10 = 0;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_78,0,0);
  uVar2 = *(ushort *)(unaff_x20 + 0x18);
  if (0xfe < uVar2 >> 8) {
    _swift_release(param_1);
    _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
    FUN_10064967c(FUN_1008b47f4,puVar4);
    _swift_endAccess(auStack_90);
    goto LAB_1008afe4c;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0x10);
  if ((uVar2 & 0xff00) == 0x100) {
    uVar6 = *(ulong *)(param_1 + 0x20);
    lVar1 = *(long *)(param_1 + 0x28);
    _swift_getObjectType();
    pcVar12 = *(code **)(lVar1 + 0x10);
    FUN_100899bf0(uVar11,uVar2);
    uVar7 = uVar6;
    lVar9 = lVar1;
    (*pcVar12)(uVar6,lVar1);
    if ((uVar7 & 1) == 0) {
      puVar3 = &DAT_100f0c390;
      _swift_allocObject(&DAT_100f0c390,0x20,7);
      *(undefined **)(puVar3 + 0x10) = param_1;
      *(undefined8 *)(puVar3 + 0x18) = uVar11;
      pcVar12 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_1);
      FUN_100899bf0(uVar11,uVar2);
      (*pcVar12)(FUN_100894ee4,puVar3,uVar6,lVar1);
      _swift_release(param_1);
      goto LAB_1008afe3c;
    }
    uVar8 = uVar11;
    FUN_1008853bc(uVar11);
    FUN_1006486f8();
    FUN_100004550(uVar8,lVar9);
    _swift_release(param_1);
    _swift_bridgeObjectRelease(uVar10);
  }
  else {
    FUN_100899bf0(uVar11,uVar2);
    FUN_1008b1de4(uVar11,uVar2,param_1);
    puVar3 = param_1;
LAB_1008afe3c:
    _swift_release(puVar3);
  }
  FUN_100899fd4(uVar11,uVar2);
LAB_1008afe4c:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_release();
  _swift_release_n(param_1,3);
  _swift_release(puVar4);
  _swift_bridgeObjectRelease(0);
  return param_1;
}



/* Address: 0x1008afeb0 | FUN_1008afeb0 */

undefined8
FUN_1008afeb0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined8 unaff_x20;
  
  _swift_allocObject();
  FUN_1008aff64(param_1,param_2,param_3,param_4,param_5);
  return unaff_x20;
}



/* Address: 0x1008aff1c | FUN_1008aff1c */

void FUN_1008aff1c(void)

{
  FUN_1008b4364();
  _swift_retain();
  return;
}



/* Address: 0x1008aff30 | FUN_1008aff30 */

void FUN_1008aff30(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x1008aff64 | FUN_1008aff64 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001008afff8 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1008aff64(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  Dictionary DVar4;
  __int64 _Var5;
  char *pcVar6;
  void *pvVar7;
  long *unaff_x20;
  undefined8 uVar8;
  long lVar9;
  String SVar10;
  String local_f8;
  undefined1 auStack_e8 [40];
  undefined1 auStack_c0 [24];
  char *local_a8;
  void *pvStack_a0;
  undefined8 local_98 [5];
  Dictionary local_70 [2];
  
  uVar8 = *(undefined8 *)(*unaff_x20 + 0x50);
  FUN_1008b5868(unaff_x20 + 7,uVar8);
  unaff_x20[0x15] = 0;
  puVar3 = &DAT_100c82290;
  local_98[0] = uVar8;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c82290,local_98);
  DVar4.unknown = (undefined *)Swift::Dictionary::init();
  local_70[0].unknown = DVar4.unknown;
  _swift_bridgeObjectRetain(param_3);
  _Var5 = Swift::Array<undefined>::get_endIndex(DVar4.unknown,puVar3);
  if (_Var5 == 0) {
    _swift_bridgeObjectRelease(param_3);
  }
  else {
    lVar9 = 0;
    do {
      Swift::Array<undefined>::get_subscript(local_98,lVar9,param_3,puVar3);
      lVar1 = lVar9 + 1;
      if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b0134);
        (*pcVar2)();
      }
      FUN_100076508(local_98,auStack_c0);
      pvVar7 = pvStack_a0;
      pcVar6 = local_a8;
      FUN_100004640(auStack_c0,local_a8);
      (**(code **)((long)pvVar7 + 0x10))();
      SVar10.bridgeObject = pvVar7;
      SVar10.str = pcVar6;
      SVar10 = Swift::String::lowercased(SVar10);
      _swift_bridgeObjectRelease(pvVar7);
      FUN_100076688(auStack_c0,auStack_e8);
      local_f8 = SVar10;
      DVar4 = Swift::Dictionary::typeMetadataAccessor();
      Swift::Dictionary::_set_subscript(local_70,auStack_e8,&local_f8,DVar4.unknown);
      FUN_100004594(auStack_c0);
      _Var5 = Swift::Array<undefined>::get_endIndex(DVar4.unknown,puVar3);
      lVar9 = lVar9 + 1;
    } while (lVar1 != _Var5);
    _swift_bridgeObjectRelease(param_3);
    DVar4.unknown = local_70[0].unknown;
  }
  unaff_x20[2] = (long)DVar4.unknown;
  unaff_x20[3] = param_4;
  unaff_x20[4] = param_5;
  _swift_bridgeObjectRelease(param_3);
  unaff_x20[5] = param_1;
  unaff_x20[6] = param_2;
  return;
}



/* Address: 0x1008b0134 | FUN_1008b0134 */

void FUN_1008b0134(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
  _swift_getObjectType();
  FUN_100893ef4();
  uVar2 = *(undefined8 *)(unaff_x20 + 0xa8);
  *(undefined8 *)(unaff_x20 + 0xa8) = uVar1;
  _swift_release(uVar2);
  return;
}



/* Address: 0x1008b0184 | thunk_FUN_1008b4374 */

void thunk_FUN_1008b4374(void)

{
  FUN_1008b4374();
  return;
}



/* Address: 0x1008b0188 | FUN_1008b0188 */

void FUN_1008b0188(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  
  lVar4 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 7,&local_68,0x21,0);
  uVar2 = 0;
  FUN_1008b5294(0,*(undefined8 *)(lVar4 + 0x50));
  uVar3 = param_2;
  FUN_1008b5a24(param_2,uVar2);
  _swift_endAccess(&local_68);
  uVar1 = (uint)uVar3 & 0xff;
  if (uVar1 == 1) {
    FUN_100626ce0(param_2);
  }
  else if (uVar1 != 2) {
    thunk_FUN_10066a0e4(&local_68,param_2,lVar4,&PTR_PTR_100feab48);
    FUN_1008b0290(param_1,local_68,uStack_60,CONCAT44(local_54,local_58));
    FUN_100877974(local_68,uStack_60,(ulong)CONCAT34((undefined3)local_54,local_58),local_54._3_1_);
  }
  return;
}



/* Address: 0x1008b0290 | FUN_1008b0290 */

void FUN_1008b0290(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  Optional OVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long *unaff_x20;
  long lVar9;
  undefined8 uVar10;
  undefined8 local_f8 [5];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined8 local_90;
  undefined1 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_70;
  
  lVar9 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 7,local_f8,0x21,0);
  uVar10 = *(undefined8 *)(lVar9 + 0x50);
  uVar3 = 0;
  FUN_1008b5294(0,uVar10);
  FUN_1008b6140(&local_d0,param_2,param_3,param_4,uVar3);
  puVar4 = local_f8;
  _swift_endAccess(puVar4);
  if (local_70 < 2) {
    if (local_70 == 0) {
      lVar9 = unaff_x20[0x15];
      if (lVar9 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b05ec);
        (*pcVar1)();
      }
      _swift_retain(lVar9);
      FUN_100646f54(local_d0,lVar9,uVar10);
      _swift_release(lVar9);
      _swift_errorRelease(local_d0);
    }
    else {
      FUN_100076508(&local_d0,local_f8);
      FUN_1008b1400(param_1,local_f8,local_a8,uStack_a0,local_98,local_90,local_88,local_80,
                    uStack_78);
      _swift_bridgeObjectRelease(local_90);
      _swift_bridgeObjectRelease(uStack_78);
      _swift_bridgeObjectRelease(uStack_a0);
      _swift_release(local_a8);
      FUN_100004594(local_f8);
    }
  }
  else if (local_70 == 2) {
    lVar9 = param_1;
    FUN_1008b0b48(param_1,local_b8,0,local_d0,uStack_c8,local_c0,uStack_b0,local_a8);
    _swift_bridgeObjectRelease(uStack_b0);
    _swift_bridgeObjectRelease(local_a8);
    _swift_bridgeObjectRelease(local_b8);
    puVar7 = &DAT_100f0c250;
    _swift_allocObject(&DAT_100f0c250,0x31,7);
    *(long **)(puVar7 + 0x10) = unaff_x20;
    *(long *)(puVar7 + 0x18) = param_1;
    *(undefined8 *)(puVar7 + 0x28) = uStack_c8;
    *(undefined8 *)(puVar7 + 0x20) = local_d0;
    puVar7[0x30] = local_c0;
    _swift_retain();
    _swift_retain(param_1);
    _swift_retain(local_d0);
    _swift_bridgeObjectRetain(uStack_c8);
    puVar8 = &DAT_100c82290;
    local_f8[0] = uVar10;
    _swift_getExtendedExistentialTypeMetadata(&DAT_100c82290,local_f8);
    _swift_getTupleTypeMetadata3
              (0xff,puVar8,&DAT_100f0ab18,PTR___type_metadata_for_Swift_String_100eac208,
               "upgrader responseHeaders proto ",0);
    OVar2 = Swift::Optional::typeMetadataAccessor();
    FUN_100642e24(FUN_1008b461c,puVar7,lVar9,OVar2.value);
    _swift_bridgeObjectRelease(uStack_c8);
    _swift_release(local_d0);
    _swift_release(lVar9);
    _swift_release(puVar7);
  }
  else if (local_70 == 3) {
    pcVar1 = (code *)unaff_x20[3];
    lVar9 = *(long *)(param_1 + 0x20);
    FUN_100627f08();
    puVar5 = puVar4;
    (*pcVar1)();
    _swift_unknownObjectRelease(puVar4);
    uVar3 = *(undefined8 *)(lVar9 + 0x30);
    uVar6 = uVar3;
    _swift_unknownObjectRetain(uVar3);
    FUN_100647054();
    _swift_release(puVar5);
    _swift_unknownObjectRelease(uVar3);
    FUN_10064311c();
    _swift_release(uVar6);
    puVar7 = &DAT_100f0c278;
    _swift_allocObject(&DAT_100f0c278,0x20,7);
    *(long **)(puVar7 + 0x10) = unaff_x20;
    *(long *)(puVar7 + 0x18) = param_1;
    _swift_retain();
    _swift_retain(param_1);
    FUN_100642e24(thunk_FUN_1008b46dc,puVar7,uVar3,uVar10);
    _swift_release(uVar3);
    _swift_release(puVar7);
  }
  return;
}



/* Address: 0x1008b05ec | FUN_1008b05ec */

void FUN_1008b05ec(undefined8 param_1,undefined8 param_2)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined *puVar5;
  long *unaff_x20;
  long lVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [31];
  char local_61;
  undefined1 auStack_60 [32];
  
  lVar6 = *unaff_x20;
  FUN_10000cbfc(param_2,auStack_60);
  pcVar2 = &local_61;
  _swift_dynamicCast(pcVar2,auStack_60,PTR___type_metadata_for_Any_100eae0c0 + 8,&DAT_100eeb880,0);
  if ((int)pcVar2 != 0 && local_61 == '\0') {
    _swift_beginAccess(unaff_x20 + 7,auStack_80,0x21,0);
    uVar7 = *(undefined8 *)(lVar6 + 0x50);
    uVar3 = 0;
    FUN_1008b5294(0,uVar7);
    FUN_1008b5dbc();
    _swift_endAccess(auStack_80);
    if ((uVar3 & 0xff) == 0) {
      puVar4 = (undefined8 *)0x2;
      FUN_100626d64(2,0);
      lVar6 = unaff_x20[0x15];
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b0740);
        (*pcVar1)();
      }
      FUN_1008ac4dc();
      puVar5 = &DAT_100eeb710;
      _swift_allocError(&DAT_100eeb710,puVar4,0,0);
      *puVar4 = 5;
      *(undefined1 *)(puVar4 + 1) = 3;
      _swift_retain(lVar6);
      FUN_100646f54(puVar5,lVar6,uVar7);
      _swift_release(lVar6);
      _swift_errorRelease(puVar5);
      goto LAB_1008b06a8;
    }
    if (((uint)uVar3 & 0xff) == 1) goto LAB_1008b06a8;
  }
  FUN_100626b98(param_2);
LAB_1008b06a8:
  FUN_100004594(auStack_60);
  return;
}



/* Address: 0x1008b0740 | FUN_1008b0740 */

void FUN_1008b0740(long param_1,undefined8 param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  Optional OVar4;
  int iVar5;
  long lVar6;
  undefined7 extraout_var;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long *unaff_x20;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  long lVar15;
  long alStack_c0 [3];
  undefined1 auStack_a8 [40];
  undefined *local_80 [3];
  undefined *local_68;
  
  lVar11 = *(long *)(*unaff_x20 + 0x50);
  alStack_c0[2] = *(long *)(lVar11 + -8);
  uVar10 = *(long *)(alStack_c0[2] + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)alStack_c0 - uVar10;
  lVar13 = lVar12 - uVar10;
  lVar6 = 0xff;
  FUN_1008b7418(0xff,lVar11);
  OVar4 = Swift::Optional::typeMetadataAccessor();
  puVar14 = (undefined8 *)
            (lVar13 - (*(long *)(*(long *)(CONCAT71(extraout_var,OVar4.value) + -8) + 0x40) + 0xfU &
                      0xfffffffffffffff0));
  alStack_c0[1] = *(undefined8 *)(param_1 + 0x20);
  _swift_beginAccess(unaff_x20 + 7,auStack_a8,0x21,0);
  uVar7 = 0;
  FUN_1008b5294(0,lVar11);
  FUN_1008b68b4(puVar14,param_2,uVar7);
  _swift_endAccess(auStack_a8);
  puVar8 = puVar14;
  (**(code **)(*(long *)(lVar6 + -8) + 0x30))(puVar14,1,lVar6);
  if ((int)puVar8 == 1) {
    return;
  }
  puVar8 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar6);
  iVar5 = (int)puVar8;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      (**(code **)(alStack_c0[2] + 0x20))(lVar12,puVar14,lVar11);
      lVar13 = *param_3;
      if (lVar13 != 0) {
        lVar6 = param_3[3];
        lVar1 = param_3[4];
        lVar2 = param_3[2];
        lVar15 = param_3[1];
        local_68 = &DAT_100f0a420;
        puVar9 = &DAT_100f0c2a0;
        _swift_allocObject(&DAT_100f0c2a0,0x31,7);
        *(long *)(puVar9 + 0x10) = lVar6;
        *(long *)(puVar9 + 0x18) = lVar1;
        *(long *)(puVar9 + 0x20) = lVar13;
        *(long *)(puVar9 + 0x28) = lVar15;
        puVar9[0x30] = (char)lVar2;
        local_80[0] = puVar9;
        FUN_1008b4680(param_3,auStack_a8);
        _swift_bridgeObjectRetain(lVar1);
        _swift_retain(lVar13);
        _swift_bridgeObjectRetain(lVar15);
        FUN_100626b98(local_80);
        _swift_bridgeObjectRelease(lVar1);
        _swift_bridgeObjectRelease(lVar15);
        _swift_release(lVar13);
        FUN_100004594(local_80);
      }
      lVar13 = unaff_x20[0x15];
      if (lVar13 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b0b44);
        (*pcVar3)();
      }
      _swift_retain(lVar13);
      FUN_100646e88(lVar12,lVar13,lVar11);
      _swift_release(lVar13);
      lVar13 = alStack_c0[1];
      _swift_retain(alStack_c0[1]);
      FUN_1006287b8();
      _swift_release(lVar13);
      pcVar3 = *(code **)(alStack_c0[2] + 8);
      lVar13 = lVar12;
LAB_1008b0b10:
      (*pcVar3)(lVar13,lVar11);
      return;
    }
    lVar13 = unaff_x20[0x15];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b0b3c);
      (*pcVar3)();
    }
    uVar7 = *puVar14;
    _swift_retain(lVar13);
    FUN_100646f54(uVar7,lVar13,lVar11);
    _swift_release(lVar13);
    FUN_100626c9c(uVar7);
    FUN_1008b16cc(param_1);
  }
  else {
    if (iVar5 != 2) {
      (**(code **)(alStack_c0[2] + 0x20))(lVar13,puVar14,lVar11);
      lVar6 = *param_3;
      if (lVar6 != 0) {
        lVar12 = param_3[3];
        lVar1 = param_3[4];
        lVar2 = param_3[2];
        lVar15 = param_3[1];
        local_68 = &DAT_100f0a420;
        puVar9 = &DAT_100f0c2a0;
        _swift_allocObject(&DAT_100f0c2a0,0x31,7);
        *(long *)(puVar9 + 0x10) = lVar12;
        *(long *)(puVar9 + 0x18) = lVar1;
        *(long *)(puVar9 + 0x20) = lVar6;
        *(long *)(puVar9 + 0x28) = lVar15;
        puVar9[0x30] = (char)lVar2;
        local_80[0] = puVar9;
        FUN_1008b4680(param_3,auStack_a8);
        _swift_bridgeObjectRetain(lVar1);
        _swift_retain(lVar6);
        _swift_bridgeObjectRetain(lVar15);
        FUN_100626b98(local_80);
        _swift_bridgeObjectRelease(lVar1);
        _swift_bridgeObjectRelease(lVar15);
        _swift_release(lVar6);
        FUN_100004594(local_80);
      }
      lVar6 = unaff_x20[0x15];
      if (lVar6 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b0b48);
        (*pcVar3)();
      }
      _swift_retain(lVar6);
      FUN_100646e88(lVar13,lVar6,lVar11);
      _swift_release(lVar6);
      FUN_1008b16cc(param_1);
      pcVar3 = *(code **)(alStack_c0[2] + 8);
      goto LAB_1008b0b10;
    }
    lVar13 = unaff_x20[0x15];
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1008b0b40);
      (*pcVar3)();
    }
    uVar7 = *puVar14;
    _swift_retain(lVar13);
    FUN_100646f54(uVar7,lVar13,lVar11);
    _swift_release(lVar13);
    FUN_100626c9c(uVar7);
    lVar13 = alStack_c0[1];
    _swift_retain(alStack_c0[1]);
    FUN_1006287b8();
    _swift_release(lVar13);
  }
  _swift_errorRelease(uVar7);
  return;
}



/* Address: 0x1008b0b48 | FUN_1008b0b48 */

code * FUN_1008b0b48(code *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5,
                    undefined4 param_6,ulong param_7,ulong param_8)

{
  String *pSVar1;
  long lVar2;
  undefined8 uVar3;
  char *pcVar4;
  code *pcVar5;
  Optional OVar6;
  undefined *puVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  void *pvVar12;
  long *unaff_x20;
  long lVar13;
  undefined8 *puVar14;
  undefined *puVar15;
  long lVar16;
  undefined8 uVar17;
  String SVar18;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  long local_d8;
  long local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  String local_a0;
  undefined *local_90 [3];
  long local_78;
  
  lVar16 = *unaff_x20;
  if (param_3 == *(ulong *)(param_2 + 0x10)) {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x30);
    uVar17 = *(undefined8 *)(*(long *)(param_1 + 0x20) + 0x38);
    uVar10 = uVar3;
    _swift_getObjectType(uVar3);
    local_b0 = 0;
    uStack_c8 = 0;
    local_d0 = 0;
    uStack_b8 = 0;
    uStack_c0 = 0;
    uStack_e8 = 0;
    local_f0 = 0;
    local_d8 = 0;
    uStack_e0 = 0;
    puVar15 = *(undefined **)(lVar16 + 0x50);
    _swift_bridgeObjectRetain(param_2);
    _swift_unknownObjectRetain(uVar3);
    puVar7 = &DAT_100c82290;
    local_90[0] = puVar15;
    _swift_getExtendedExistentialTypeMetadata(&DAT_100c82290,local_90);
    _swift_getTupleTypeMetadata3
              (0xff,puVar7,&DAT_100f0ab18,PTR___type_metadata_for_Swift_String_100eac208,
               "upgrader responseHeaders proto ",0);
    OVar6 = Swift::Optional::typeMetadataAccessor();
    param_1 = (code *)&local_f0;
    FUN_1006412ac(param_1,uVar10,OVar6.value,uVar17);
    _swift_unknownObjectRelease(uVar3);
    if (local_d8 != 0) {
      FUN_100004594(&local_f0);
      _swift_bridgeObjectRelease(uStack_c8);
      _swift_bridgeObjectRelease(local_b0);
    }
LAB_1008b0e10:
    _swift_bridgeObjectRelease(param_2);
    return param_1;
  }
  if (*(ulong *)(param_2 + 0x10) <= param_3) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1008b115c);
    (*pcVar5)();
  }
  lVar2 = param_2 + param_3 * 0x10;
  pSVar1 = (String *)(lVar2 + 0x20);
  pcVar4 = pSVar1->str;
  uVar3 = *(undefined8 *)(lVar2 + 0x28);
  lVar2 = param_3 + 1;
  lVar13 = unaff_x20[2];
  local_a0 = Swift::String::lowercased(*pSVar1);
  pvVar12 = local_a0.bridgeObject;
  uVar17 = *(undefined8 *)(lVar16 + 0x50);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(uVar3);
  puVar7 = &DAT_100c82290;
  local_a8 = uVar17;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c82290,&local_a8);
  Swift::Dictionary::_get_subscript
            (local_90,&local_a0,lVar13,PTR___type_metadata_for_Swift_String_100eac208,puVar7,
             PTR___protocol_witness_table_for_Swift_String___Swift_Hashable_in_Swift_100eac218);
  _swift_bridgeObjectRelease(pvVar12);
  if (local_78 == 0) {
    _swift_bridgeObjectRelease(uVar3);
    if (local_78 != 0) {
      FUN_100004594(local_90);
    }
    FUN_1008b0b48(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8);
    goto LAB_1008b0e10;
  }
  FUN_100076508(local_90,&local_f0);
  lVar16 = local_d0;
  lVar13 = local_d8;
  FUN_100004640(&local_f0,local_d8);
  (**(code **)(lVar16 + 0x18))(lVar13,lVar16);
  lVar16 = *(long *)(lVar13 + 0x10);
  if (lVar16 == 0) {
    _swift_bridgeObjectRelease(lVar13);
    puVar15 = PTR___swiftEmptyArrayStorage_100eae0d8;
  }
  else {
    local_90[0] = PTR___swiftEmptyArrayStorage_100eae0d8;
    FUN_100892608(0,lVar16,0);
    puVar14 = (undefined8 *)(lVar13 + 0x28);
    do {
      puVar15 = local_90[0];
      SVar18.bridgeObject = (void *)*puVar14;
      SVar18.str = (char *)puVar14[-1];
      SVar18 = Swift::String::lowercased(SVar18);
      uVar9 = *(ulong *)(puVar15 + 0x10);
      local_90[0] = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar9) {
        FUN_100892608(1 < *(ulong *)(puVar15 + 0x18),uVar9 + 1,1);
      }
      puVar15 = local_90[0];
      puVar14 = puVar14 + 2;
      *(ulong *)(local_90[0] + 0x10) = uVar9 + 1;
      *(String *)(local_90[0] + uVar9 * 0x10 + 0x20) = SVar18;
      lVar16 = lVar16 + -1;
    } while (lVar16 != 0);
    _swift_bridgeObjectRelease(lVar13);
  }
  puVar8 = puVar15;
  FUN_1008b3d44(puVar15);
  _swift_bridgeObjectRelease(puVar15);
  uVar9 = param_7;
  FUN_1008af79c(param_7,puVar8);
  if ((uVar9 & 1) == 0) {
    _swift_bridgeObjectRelease(puVar8);
  }
  else {
    uVar9 = param_8;
    FUN_1008af79c(param_8,puVar8);
    _swift_bridgeObjectRelease(puVar8);
    if ((uVar9 & 1) != 0) {
      puVar15 = &DAT_100fe9538;
      FUN_1000f7830(&DAT_100fe9538,&DAT_100c82440);
      _swift_allocObject();
      *(undefined8 *)(puVar15 + 0x18) = 4;
      *(undefined8 *)(puVar15 + 0x10) = 2;
      *(undefined8 *)(puVar15 + 0x20) = 0x697463656e6e6f63;
      *(undefined8 *)(puVar15 + 0x28) = 0xea00000000006e6f;
      *(undefined8 *)(puVar15 + 0x30) = 0x65646172677075;
      *(undefined1 **)(puVar15 + 0x38) = &DAT_e700000000000000;
      *(undefined8 *)(puVar15 + 0x40) = 0x65646172677075;
      *(undefined1 **)(puVar15 + 0x48) = &DAT_e700000000000000;
      *(char **)(puVar15 + 0x50) = pcVar4;
      *(undefined8 *)(puVar15 + 0x58) = uVar3;
      FUN_100004640(&local_f0,local_d8);
      lVar16 = *(long *)(param_1 + 0x20);
      uVar10 = uVar3;
      _swift_bridgeObjectRetain(uVar3);
      FUN_100627f08();
      uVar11 = uVar10;
      (**(code **)(local_d0 + 0x20))();
      _swift_release(puVar15);
      _swift_unknownObjectRelease(uVar10);
      lVar16 = *(long *)(lVar16 + 0x30);
      lVar13 = lVar16;
      _swift_unknownObjectRetain();
      FUN_1008afb94();
      _swift_release(uVar11);
      _swift_unknownObjectRelease(lVar16);
      _swift_getObjectType(*(undefined8 *)(lVar13 + 0x20));
      FUN_100642338();
      FUN_100076688(&local_f0,local_90);
      puVar15 = &DAT_100f0c2f0;
      _swift_allocObject(&DAT_100f0c2f0,0x50,7);
      *(undefined8 *)(puVar15 + 0x10) = uVar17;
      FUN_100076508(local_90,puVar15 + 0x18);
      *(char **)(puVar15 + 0x40) = pcVar4;
      *(undefined8 *)(puVar15 + 0x48) = uVar3;
      _swift_getTupleTypeMetadata3
                (0xff,puVar7,&DAT_100f0ab18,PTR___type_metadata_for_Swift_String_100eac208,
                 "upgrader responseHeaders proto ",0);
      OVar6 = Swift::Optional::typeMetadataAccessor();
      pcVar5 = FUN_1008b4748;
      FUN_100644220(FUN_1008b4748,puVar15,lVar13,&DAT_100f0ab18,OVar6.value);
      _swift_release(lVar13);
      _swift_release(puVar15);
      puVar7 = &DAT_100f0c318;
      _swift_allocObject(&DAT_100f0c318,0x58,7);
      *(code **)(puVar7 + 0x10) = param_1;
      *(long **)(puVar7 + 0x18) = unaff_x20;
      *(long *)(puVar7 + 0x20) = param_2;
      *(long *)(puVar7 + 0x28) = lVar2;
      *(undefined8 *)(puVar7 + 0x30) = param_4;
      *(undefined8 *)(puVar7 + 0x38) = param_5;
      puVar7[0x40] = (char)param_6;
      *(ulong *)(puVar7 + 0x48) = param_7;
      *(ulong *)(puVar7 + 0x50) = param_8;
      _swift_bridgeObjectRetain(param_2);
      _swift_retain(param_1);
      _swift_retain(unaff_x20);
      _swift_retain(param_4);
      _swift_bridgeObjectRetain(param_5);
      _swift_bridgeObjectRetain(param_7);
      _swift_bridgeObjectRetain(param_8);
      param_1 = FUN_1008b47ac;
      FUN_100644570(FUN_1008b47ac,puVar7,pcVar5,OVar6.value);
      _swift_bridgeObjectRelease(param_2);
      _swift_release(pcVar5);
      _swift_release(puVar7);
      goto LAB_1008b112c;
    }
  }
  _swift_bridgeObjectRelease(uVar3);
  FUN_1008b0b48(param_1,param_2,lVar2,param_4,param_5,param_6,param_7,param_8);
  _swift_bridgeObjectRelease(param_2);
LAB_1008b112c:
  FUN_100004594(&local_f0);
  return param_1;
}



/* Address: 0x1008b115c | FUN_1008b115c */

void FUN_1008b115c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long *unaff_x20;
  long lVar7;
  undefined8 uVar8;
  undefined1 auStack_d8 [40];
  undefined8 local_b0 [5];
  undefined8 local_88;
  undefined1 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  byte local_68;
  
  lVar7 = *unaff_x20;
  _swift_beginAccess(unaff_x20 + 7,auStack_d8,0x21,0);
  uVar8 = *(undefined8 *)(lVar7 + 0x50);
  uVar2 = 0;
  FUN_1008b5294(0,uVar8);
  FUN_1008b6d58(local_b0,param_2,param_3,param_4,param_5,uVar2);
  puVar3 = auStack_d8;
  _swift_endAccess(puVar3);
  if (local_68 < 2) {
    if (local_68 == 0) {
      FUN_100076508(local_b0,auStack_d8);
      FUN_1008b1400(param_1,auStack_d8,param_2,param_3,param_4,local_88,local_80,local_78,uStack_70)
      ;
      _swift_bridgeObjectRelease(local_88);
      _swift_bridgeObjectRelease(uStack_70);
      FUN_100004594(auStack_d8);
      return;
    }
    lVar7 = unaff_x20[0x15];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b1400);
      (*pcVar1)();
    }
    _swift_retain(lVar7);
    FUN_100646f54(local_b0[0],lVar7,uVar8);
    _swift_release(lVar7);
    FUN_100626c9c(local_b0[0]);
    FUN_1008b16cc(param_1);
  }
  else {
    if (local_68 != 2) {
      if (local_68 != 3) {
        return;
      }
      pcVar1 = (code *)unaff_x20[3];
      lVar7 = *(long *)(param_1 + 0x20);
      FUN_100627f08();
      puVar4 = puVar3;
      (*pcVar1)();
      _swift_unknownObjectRelease(puVar3);
      uVar2 = *(undefined8 *)(lVar7 + 0x30);
      uVar5 = uVar2;
      _swift_unknownObjectRetain(uVar2);
      FUN_100647054();
      _swift_release(puVar4);
      _swift_unknownObjectRelease(uVar2);
      FUN_10064311c();
      _swift_release(uVar5);
      puVar6 = &DAT_100f0c2c8;
      _swift_allocObject(&DAT_100f0c2c8,0x20,7);
      *(long **)(puVar6 + 0x10) = unaff_x20;
      *(long *)(puVar6 + 0x18) = param_1;
      _swift_retain();
      _swift_retain(param_1);
      FUN_100642e24(FUN_1008b46dc,puVar6,uVar2,uVar8);
      _swift_release(uVar2);
      _swift_release(puVar6);
      return;
    }
    lVar7 = unaff_x20[0x15];
    if (lVar7 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1008b13fc);
      (*pcVar1)();
    }
    _swift_retain(lVar7);
    FUN_100646f54(local_b0[0],lVar7,uVar8);
    _swift_release(lVar7);
    FUN_100626c9c(local_b0[0]);
    uVar2 = *(undefined8 *)(param_1 + 0x20);
    _swift_retain(uVar2);
    FUN_1006287b8();
    _swift_release(uVar2);
  }
  _swift_errorRelease(local_b0[0]);
  return;
}



/* Address: 0x1008b1400 | FUN_1008b1400 */

void FUN_1008b1400(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined1 param_7,undefined8 param_8,
                  undefined8 param_9)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  code *pcVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_88 [40];
  
  lVar8 = *unaff_x20;
  lVar10 = *(long *)(param_1 + 0x20);
  lVar1 = param_1;
  uVar7 = param_2;
  FUN_100627f08();
  lVar2 = lVar10;
  FUN_1008b1960();
  _swift_getObjectType(*(undefined8 *)(lVar2 + 0x20));
  FUN_100642338();
  puVar3 = &DAT_100f0c3e0;
  _swift_allocObject(&DAT_100f0c3e0,0x29,7);
  *(long **)(puVar3 + 0x10) = unaff_x20;
  *(long *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_6;
  puVar3[0x28] = param_7;
  _swift_retain();
  _swift_retain();
  _swift_retain(param_1);
  _swift_bridgeObjectRetain(param_6);
  lVar4 = lVar2;
  FUN_1008b4194(lVar2,FUN_1008b4864,puVar3);
  _swift_release(lVar2);
  _swift_release_n(puVar3,2);
  puVar3 = &DAT_100f0c408;
  _swift_allocObject(&DAT_100f0c408,0x20,7);
  *(long *)(puVar3 + 0x10) = lVar10;
  *(long **)(puVar3 + 0x18) = unaff_x20;
  _swift_retain();
  _swift_retain(puVar3);
  _swift_retain(lVar10);
  lVar2 = lVar4;
  FUN_1008b4194(lVar4,FUN_100899c60,puVar3);
  _swift_release(lVar4);
  _swift_release_n(puVar3,2);
  FUN_100076688(param_2,auStack_88);
  puVar3 = &DAT_100f0c430;
  _swift_allocObject(&DAT_100f0c430,0x61,7);
  uVar9 = *(undefined8 *)(lVar8 + 0x50);
  *(undefined8 *)(puVar3 + 0x10) = uVar9;
  FUN_100076508(auStack_88,puVar3 + 0x18);
  *(long *)(puVar3 + 0x40) = lVar1;
  *(undefined8 *)(puVar3 + 0x48) = uVar7;
  *(undefined8 *)(puVar3 + 0x50) = param_3;
  *(undefined8 *)(puVar3 + 0x58) = param_4;
  puVar3[0x60] = param_5;
  puVar5 = &DAT_100f0c458;
  _swift_allocObject(&DAT_100f0c458,0x28,7);
  *(undefined8 *)(puVar5 + 0x10) = uVar9;
  *(code **)(puVar5 + 0x18) = FUN_1008b48b8;
  *(undefined **)(puVar5 + 0x20) = puVar3;
  _swift_unknownObjectRetain(lVar1);
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(param_4);
  pcVar6 = FUN_100645f18;
  FUN_100643734(FUN_100645f18,puVar5,lVar2,PTR___type_metadata_for____100eae0c8 + 8,uVar9);
  _swift_release(lVar2);
  _swift_release(puVar5);
  puVar3 = &DAT_100f0c480;
  _swift_allocObject(&DAT_100f0c480,0x48,7);
  *(long **)(puVar3 + 0x10) = unaff_x20;
  *(long *)(puVar3 + 0x18) = param_1;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  puVar3[0x30] = param_5;
  *(undefined8 *)(puVar3 + 0x38) = param_8;
  *(undefined8 *)(puVar3 + 0x40) = param_9;
  _swift_retain();
  _swift_retain(param_1);
  _swift_retain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_bridgeObjectRetain(param_9);
  FUN_100642e24(FUN_1008b4994,puVar3,pcVar6,uVar9);
  _swift_unknownObjectRelease(lVar1);
  _swift_release(pcVar6);
  _swift_release(puVar3);
  return;
}



/* Address: 0x1008b16cc | FUN_1008b16cc */

void FUN_1008b16cc(long param_1)

{
  long *unaff_x20;
  undefined8 uVar1;
  long lVar2;
  ulong local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  ushort local_a0;
  ulong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  ushort local_58;
  
  lVar2 = *unaff_x20;
  while( true ) {
    while( true ) {
      while( true ) {
        _swift_beginAccess(unaff_x20 + 7,&local_e0,0x21,0);
        FUN_1008b5294(0,*(undefined8 *)(lVar2 + 0x50));
        FUN_1008b7168(&local_98);
        _swift_endAccess(&local_e0);
        if ((char)(local_58 >> 8) != -1) break;
        FUN_100626d64(2,0);
      }
      if ((local_58 & 0xff00) != 0xfd00) break;
      local_c8 = &DAT_100eeb880;
      local_e0 = local_e0 & 0xffffffffffffff00;
      FUN_100626b98(&local_e0);
      FUN_100004594(&local_e0);
    }
    if ((local_58 & 0xff00) == 0xfe00) break;
    uStack_b8 = uStack_70;
    local_c0 = local_78;
    uStack_a8 = uStack_60;
    uStack_b0 = local_68;
    local_a0 = local_58;
    uStack_d8 = uStack_90;
    local_e0 = local_98;
    local_c8 = puStack_80;
    uStack_d0 = local_88;
    FUN_100626ce0(&local_e0);
    FUN_1005e70f4(&local_e0);
  }
  FUN_100626d4c();
  uVar1 = *(undefined8 *)(param_1 + 0x20);
  _swift_retain(uVar1);
  FUN_1006287b8();
  _swift_release(uVar1);
  return;
}



/* Address: 0x1008b181c | FUN_1008b181c */

void FUN_1008b181c(long param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined1 uVar1;
  undefined8 uVar2;
  
  uVar2 = *param_2;
  uVar1 = *(undefined1 *)(param_2 + 1);
  FUN_100076688(param_3,param_1);
  *(undefined8 *)(param_1 + 0x28) = uVar2;
  *(undefined1 *)(param_1 + 0x30) = uVar1;
  *(undefined8 *)(param_1 + 0x38) = param_4;
  *(undefined8 *)(param_1 + 0x40) = param_5;
  _swift_bridgeObjectRetain(uVar2);
  _swift_bridgeObjectRetain(param_5);
  return;
}



/* Address: 0x1008b187c | FUN_1008b187c */

undefined8
FUN_1008b187c(undefined8 param_1,undefined8 param_2,long *param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             undefined8 param_9,undefined8 param_10)

{
  undefined *puVar1;
  long lVar2;
  undefined8 local_68;
  
  lVar2 = *param_3;
  FUN_100626c9c();
  FUN_1008b0b48(param_2,param_4,param_5,param_6,param_7,param_8,param_9,param_10);
  local_68 = *(undefined8 *)(lVar2 + 0x50);
  puVar1 = &DAT_100c82290;
  _swift_getExtendedExistentialTypeMetadata(&DAT_100c82290,&local_68);
  _swift_getTupleTypeMetadata3
            (0xff,puVar1,&DAT_100f0ab18,PTR___type_metadata_for_Swift_String_100eac208,
             "upgrader responseHeaders proto ",0);
  Swift::Optional::typeMetadataAccessor();
  return param_2;
}



/* Address: 0x1008b1960 | FUN_1008b1960 */

void FUN_1008b1960(long param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  code *pcVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar7 = *(long *)(unaff_x20 + 0x30);
  lVar6 = *(long *)(lVar7 + 0x10);
  if (lVar6 == 0) {
    _swift_getObjectType(*(undefined8 *)(param_1 + 0x30));
    FUN_10063dc68();
  }
  else {
    FUN_100892704(0,lVar6,0);
    lVar7 = lVar7 + 0x28;
    do {
      uVar10 = *(undefined8 *)(lVar7 + -8);
      uVar2 = uVar10;
      _swift_unknownObjectRetain();
      FUN_10062c4e4();
      _swift_unknownObjectRelease(uVar10);
      uVar3 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar3) {
        FUN_100892704(1 < *(ulong *)(puVar1 + 0x18),uVar3 + 1,1);
      }
      lVar7 = lVar7 + 0x10;
      *(ulong *)(puVar1 + 0x10) = uVar3 + 1;
      *(undefined8 *)(puVar1 + uVar3 * 8 + 0x20) = uVar2;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    lVar7 = *(long *)(param_1 + 0x30);
    _swift_getObjectType();
    FUN_100893ef4();
    lVar6 = *(long *)(lVar7 + 0x28);
    uVar10 = *(undefined8 *)(lVar7 + 0x28);
    uVar9 = *(ulong *)(lVar7 + 0x20);
    uVar3 = uVar9;
    _swift_getObjectType();
    uVar4 = uVar3;
    (**(code **)(lVar6 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f0c5e8;
      _swift_allocObject(&DAT_100f0c5e8,0x30,7);
      *(long *)(puVar5 + 0x10) = lVar7;
      *(undefined **)(puVar5 + 0x18) = puVar1;
      *(undefined8 *)(puVar5 + 0x28) = uVar10;
      *(ulong *)(puVar5 + 0x20) = uVar9;
      pcVar8 = *(code **)(lVar6 + 0x18);
      _swift_retain(lVar7);
      _swift_bridgeObjectRetain(puVar1);
      _swift_unknownObjectRetain(uVar9);
      (*pcVar8)(FUN_1008b4b80,puVar5,uVar3,lVar6);
      _swift_bridgeObjectRelease(puVar1);
      _swift_release(puVar5);
    }
    else {
      FUN_1008b2cb0(lVar7,puVar1,uVar9,lVar6);
      _swift_bridgeObjectRelease(puVar1);
    }
  }
  return;
}



/* Address: 0x1008b1b48 | FUN_1008b1b48 */

void FUN_1008b1b48(void)

{
  long lVar1;
  long lVar2;
  long *unaff_x20;
  
  lVar2 = *unaff_x20;
  _swift_bridgeObjectRelease(unaff_x20[2]);
  _swift_release(unaff_x20[4]);
  _swift_release(unaff_x20[5]);
  _swift_bridgeObjectRelease(unaff_x20[6]);
  lVar1 = 0;
  FUN_1008b5294(0,*(undefined8 *)(lVar2 + 0x50));
  (**(code **)(*(long *)(lVar1 + -8) + 8))(unaff_x20 + 7,lVar1);
  _swift_release(unaff_x20[0x15]);
  return;
}



/* Address: 0x1008b1bb0 | FUN_1008b1bb0 */

void FUN_1008b1bb0(void)

{
  FUN_1008b1b48();
  _swift_deallocClassInstance();
  return;
}



/* Address: 0x1008b1bd0 | thunk_FUN_1008b0188 */

void thunk_FUN_1008b0188(void)

{
  FUN_1008b0188();
  return;
}



/* Address: 0x1008b1bd4 | thunk_FUN_1008b05ec */

void thunk_FUN_1008b05ec(void)

{
  FUN_1008b05ec();
  return;
}



/* Address: 0x1008b1bd8 | thunk_FUN_1008b0134 */

void thunk_FUN_1008b0134(void)

{
  FUN_1008b0134();
  return;
}



/* Address: 0x1008b1bdc | FUN_1008b1bdc */

undefined * FUN_1008b1bdc(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

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
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1008b1ce4);
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
    puVar3 = &DAT_100feacb0;
    FUN_1000f7830(&DAT_100feacb0,&DAT_100c82460);
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
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100ef0a38);
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



/* Address: 0x1008b1ce4 | FUN_1008b1ce4 */

void FUN_1008b1ce4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  code *pcVar5;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    pcVar5 = FUN_100308524;
    FUN_100630334(param_1,param_2,FUN_100308524);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(pcVar5);
    return;
  }
  puVar4 = &DAT_100f0c7c8;
  _swift_allocObject(&DAT_100f0c7c8,0x21,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  pcVar5 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_100308524(param_1,param_2);
  (*pcVar5)(FUN_1008b4da8,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008b1de4 | FUN_1008b1de4 */

void FUN_1008b1de4(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  undefined *puVar4;
  long lVar5;
  code *pcVar6;
  
  uVar2 = *(ulong *)(param_3 + 0x20);
  lVar1 = *(long *)(param_3 + 0x28);
  lVar5 = param_3;
  _swift_getObjectType();
  uVar3 = uVar2;
  (**(code **)(lVar1 + 0x10))();
  if ((uVar3 & 1) != 0) {
    FUN_1008b1fb0(param_1,param_2);
    FUN_1006486f8();
    FUN_100004550(param_1,param_2);
    _swift_bridgeObjectRelease(lVar5);
    return;
  }
  puVar4 = &DAT_100f0c3b8;
  _swift_allocObject(&DAT_100f0c3b8,0x22,7);
  *(long *)(puVar4 + 0x10) = param_3;
  *(undefined8 *)(puVar4 + 0x18) = param_1;
  puVar4[0x20] = (char)param_2;
  puVar4[0x21] = (char)((ulong)param_2 >> 8);
  pcVar6 = *(code **)(lVar1 + 0x18);
  _swift_retain(param_3);
  FUN_10081c834(param_1,param_2,(uint)param_2 >> 8 & 0xff);
  (*pcVar6)(FUN_1008b4840,puVar4,uVar2,lVar1);
  _swift_release(puVar4);
  return;
}



/* Address: 0x1008b1ef8 | FUN_1008b1ef8 */

undefined8 FUN_1008b1ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x20) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(char *)(unaff_x20 + 0x20) = (char)param_3;
    _swift_beginAccess(unaff_x20 + 0x38,auStack_80,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x38);
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x48) = 0;
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    FUN_100899a30(param_1,param_2,param_3);
  }
  return uVar1;
}



/* Address: 0x1008b1fb0 | FUN_1008b1fb0 */

undefined8 FUN_1008b1fb0(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  undefined8 uVar1;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_68,1,0);
  uVar1 = 0;
  if (*(char *)(unaff_x20 + 0x19) == -1) {
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(short *)(unaff_x20 + 0x18) = (short)param_2;
    _swift_beginAccess(unaff_x20 + 0x30,auStack_80,1,0);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x30);
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
    *(undefined8 *)(unaff_x20 + 0x40) = 0;
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_10081c834(param_1,param_2,(uint)param_2 >> 8 & 0xff);
  }
  return uVar1;
}



/* Address: 0x1008b2068 | FUN_1008b2068 */

undefined8 FUN_1008b2068(undefined8 *param_1,char *param_2,undefined *param_3)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  undefined8 uVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  ulong uVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  long local_98 [9];
  
  lVar8 = *unaff_x20;
  Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
  into.unknown = (undefined *)local_98;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  Swift::String::hash(into,SVar9);
  uVar6 = Swift::Hasher::_finalize(into);
  uVar7 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
  uVar6 = uVar6 & (uVar7 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0) {
    do {
      puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
      _Var2.unknown = (undefined *)*puVar1;
      _Var3.unknown = (undefined *)puVar1[1];
      if ((_Var2.unknown == param_2 && _Var3.unknown == param_3) ||
         (bVar5 = Swift::_stringCompareWithSmolCheck
                            (_Var2,_Var3,(_StringComparisonResult)(__int8)param_2), bVar5)) {
        _swift_bridgeObjectRelease(param_3);
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + uVar6 * 0x10);
        uVar4 = puVar1[1];
        *param_1 = *puVar1;
        param_1[1] = uVar4;
        _swift_bridgeObjectRetain();
        return 0;
      }
      uVar6 = uVar6 + 1 & ~uVar7;
    } while ((*(ulong *)(lVar8 + 0x38 + (uVar6 >> 6) * 8) >> (uVar6 & 0x3f) & 1) != 0);
  }
  lVar8 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar8);
  local_98[0] = *unaff_x20;
  _swift_bridgeObjectRetain(param_3);
  FUN_1008b21ac(param_2,param_3,uVar6,lVar8);
  *unaff_x20 = local_98[0];
  *param_1 = param_2;
  param_1[1] = param_3;
  return 1;
}



/* Address: 0x1008b21ac | FUN_1008b21ac */

void FUN_1008b21ac(char *param_1,undefined *param_2,ulong param_3,ulong param_4)

{
  undefined8 *puVar1;
  _StringGuts _Var2;
  _StringGuts _Var3;
  code *pcVar4;
  bool bVar5;
  Hasher into;
  ulong uVar6;
  long lVar7;
  long *unaff_x20;
  long lVar8;
  String SVar9;
  undefined1 auStack_98 [72];
  
  uVar6 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar6 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_4 & 1) == 0) {
      FUN_1008b2538();
    }
  }
  else {
    if ((param_4 & 1) == 0) {
      FUN_1008b2310(uVar6 + 1);
    }
    else {
      FUN_1008b2694();
    }
    lVar8 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar8 + 0x28));
    into.unknown = auStack_98;
    SVar9.bridgeObject = param_2;
    SVar9.str = param_1;
    Swift::String::hash(into,SVar9);
    param_3 = Swift::Hasher::_finalize(into);
    uVar6 = -1L << ((ulong)*(byte *)(lVar8 + 0x20) & 0x3f);
    param_3 = param_3 & (uVar6 ^ 0xffffffffffffffff);
    if ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0) {
      do {
        puVar1 = (undefined8 *)(*(long *)(lVar8 + 0x30) + param_3 * 0x10);
        _Var2.unknown = (undefined *)*puVar1;
        _Var3.unknown = (undefined *)puVar1[1];
        if ((_Var2.unknown == param_1 && _Var3.unknown == param_2) ||
           (bVar5 = Swift::_stringCompareWithSmolCheck
                              (_Var2,_Var3,(_StringComparisonResult)(__int8)param_1), bVar5)) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b2310);
          (*pcVar4)();
        }
        param_3 = param_3 + 1 & ~uVar6;
      } while ((*(ulong *)(lVar8 + 0x38 + (param_3 >> 6) * 8) >> (param_3 & 0x3f) & 1) != 0);
    }
  }
  lVar7 = *unaff_x20;
  lVar8 = lVar7 + (param_3 >> 6) * 8;
  *(ulong *)(lVar8 + 0x38) = *(ulong *)(lVar8 + 0x38) | 1L << (param_3 & 0x3f);
  puVar1 = (undefined8 *)(*(long *)(lVar7 + 0x30) + param_3 * 0x10);
  *puVar1 = param_1;
  puVar1[1] = param_2;
  if (!SCARRY8(*(long *)(lVar7 + 0x10),1)) {
    *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x1008b2300);
  (*pcVar4)();
}



/* Address: 0x1008b2310 | FUN_1008b2310 */

void FUN_1008b2310(long param_1)

{
  undefined8 *puVar1;
  String *pSVar2;
  __int64 capacity;
  char *pcVar3;
  void *pvVar4;
  String SVar5;
  bool bVar6;
  code *pcVar7;
  _SetStorage *this;
  __RawSetStorage *p_Var8;
  Hasher into;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar15;
  ulong uVar16;
  undefined1 auStack_a8 [72];
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity = *(long *)(original + 0x18);
  if (*(long *)(original + 0x18) <= param_1) {
    capacity = param_1;
  }
  this = (_SetStorage *)&DAT_100feaca0;
  FUN_1000f7830(&DAT_100feaca0,&DAT_100c82448);
  p_Var8 = original;
  Swift::_SetStorage::_resize(this,original,capacity,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1008b2500:
    _swift_release(original);
    *unaff_x20 = (long)p_Var8;
    return;
  }
  uVar13 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar16 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar16 = ~(-1L << (uVar13 & 0x3f));
  }
  uVar16 = uVar16 & *(ulong *)(original + 0x38);
  lVar11 = 0;
  do {
    if (uVar16 == 0) {
      do {
        lVar15 = lVar11 + 1;
        if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008b2534);
          (*pcVar7)();
        }
        if ((long)(uVar13 + 0x3f >> 6) <= lVar15) goto LAB_1008b2500;
        uVar16 = *(ulong *)(original + 0x38 + lVar15 * 8);
        lVar11 = lVar11 + 1;
      } while (uVar16 == 0);
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
    }
    else {
      uVar10 = (uVar16 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar16 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = uVar10 >> 0x20 | uVar10 << 0x20;
      uVar16 = uVar16 - 1 & uVar16;
      lVar15 = lVar11;
    }
    pSVar2 = (String *)(*(long *)(original + 0x30) + (LZCOUNT(uVar10) | lVar15 << 6) * 0x10);
    pcVar3 = pSVar2->str;
    pvVar4 = pSVar2->bridgeObject;
    SVar5 = *pSVar2;
    Swift::Hasher::init(*(__int64 *)(p_Var8 + 0x28));
    _swift_bridgeObjectRetain(pvVar4);
    into.unknown = auStack_a8;
    Swift::String::hash(into,SVar5);
    uVar9 = Swift::Hasher::_finalize(into);
    uVar14 = -1L << ((ulong)(byte)p_Var8[0x20] & 0x3f);
    uVar9 = uVar9 & (uVar14 ^ 0xffffffffffffffff);
    uVar12 = uVar9 >> 6;
    uVar10 = -1L << (uVar9 & 0x3f) & (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar10 == 0) {
      bVar6 = false;
      uVar10 = 0x3f - uVar14 >> 6;
      do {
        uVar9 = uVar12 + 1;
        if ((uVar9 == uVar10) && (bVar6)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1008b2538);
          (*pcVar7)();
        }
        uVar12 = 0;
        if (uVar9 != uVar10) {
          uVar12 = uVar9;
        }
        bVar6 = (bool)(uVar9 == uVar10 | bVar6);
      } while (*(ulong *)(p_Var8 + uVar12 * 8 + 0x38) == 0xffffffffffffffff);
      uVar10 = ~*(ulong *)(p_Var8 + uVar12 * 8 + 0x38);
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar12 << 6;
    }
    else {
      uVar10 = (uVar10 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar10 & 0x5555555555555555) << 1;
      uVar10 = (uVar10 & 0xcccccccccccccccc) >> 2 | (uVar10 & 0x3333333333333333) << 2;
      uVar10 = (uVar10 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar10 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar10 = (uVar10 & 0xff00ff00ff00ff00) >> 8 | (uVar10 & 0xff00ff00ff00ff) << 8;
      uVar10 = (uVar10 & 0xffff0000ffff0000) >> 0x10 | (uVar10 & 0xffff0000ffff) << 0x10;
      uVar10 = LZCOUNT(uVar10 >> 0x20 | uVar10 << 0x20) | uVar9 & 0x7fffffffffffffc0;
    }
    uVar12 = uVar10 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var8 + uVar12 + 0x38) = 1L << (uVar10 & 0x3f) | *(ulong *)(p_Var8 + uVar12 + 0x38);
    puVar1 = (undefined8 *)(*(long *)(p_Var8 + 0x30) + uVar10 * 0x10);
    *puVar1 = pcVar3;
    puVar1[1] = pvVar4;
    *(long *)(p_Var8 + 0x10) = *(long *)(p_Var8 + 0x10) + 1;
    lVar11 = lVar15;
  } while( true );
}



/* Address: 0x1008b2538 | FUN_1008b2538 */

void FUN_1008b2538(void)

{
  __RawSetStorage *p_Var1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  code *pcVar5;
  _SetStorage *this;
  __RawSetStorage *p_Var6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long *unaff_x20;
  __RawSetStorage *original;
  long lVar11;
  
  this = (_SetStorage *)&DAT_100feaca0;
  FUN_1000f7830(&DAT_100feaca0,&DAT_100c82448);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var6 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar7 = (1L << ((ulong)(byte)p_Var6[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var6 != original || p_Var1 + uVar7 * 8 <= p_Var6 + 0x38) {
      _memmove(p_Var6 + 0x38,p_Var1,uVar7 << 3);
    }
    lVar11 = 0;
    *(undefined8 *)(p_Var6 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar8 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar7 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar7 = ~(-1L << (uVar8 & 0x3f));
    }
    uVar7 = uVar7 & *(ulong *)(original + 0x38);
    if (uVar7 == 0) goto LAB_1008b2614;
    do {
      uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
      uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
      uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
      uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
      uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
      uVar7 = uVar7 - 1 & uVar7;
      while( true ) {
        lVar10 = (LZCOUNT(uVar9) | lVar11 << 6) * 0x10;
        puVar2 = (undefined8 *)(*(long *)(original + 0x30) + lVar10);
        uVar4 = puVar2[1];
        puVar3 = (undefined8 *)(*(long *)(p_Var6 + 0x30) + lVar10);
        *puVar3 = *puVar2;
        puVar3[1] = uVar4;
        _swift_bridgeObjectRetain();
        if (uVar7 != 0) break;
LAB_1008b2614:
        do {
          lVar10 = lVar11 + 1;
          if (SCARRY8(lVar11,1)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1008b2694);
            (*pcVar5)();
          }
          if ((long)(uVar8 + 0x3f >> 6) <= lVar10) goto LAB_1008b266c;
          uVar7 = *(ulong *)(p_Var1 + lVar10 * 8);
          lVar11 = lVar11 + 1;
        } while (uVar7 == 0);
        uVar9 = (uVar7 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar7 & 0x5555555555555555) << 1;
        uVar9 = (uVar9 & 0xcccccccccccccccc) >> 2 | (uVar9 & 0x3333333333333333) << 2;
        uVar9 = (uVar9 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar9 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar9 = (uVar9 & 0xff00ff00ff00ff00) >> 8 | (uVar9 & 0xff00ff00ff00ff) << 8;
        uVar9 = (uVar9 & 0xffff0000ffff0000) >> 0x10 | (uVar9 & 0xffff0000ffff) << 0x10;
        uVar9 = uVar9 >> 0x20 | uVar9 << 0x20;
        uVar7 = uVar7 - 1 & uVar7;
        lVar11 = lVar10;
      }
    } while( true );
  }
LAB_1008b266c:
  _swift_release(original);
  *unaff_x20 = (long)p_Var6;
  return;
}


