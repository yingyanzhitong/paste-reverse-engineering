/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100659214 | FUN_100659214 */

void FUN_100659214(uint *param_1)

{
  ulong uVar1;
  undefined8 *puVar2;
  long unaff_x20;
  
  puVar2 = *(undefined8 **)(unaff_x20 + 0x18);
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  FUN_100632ab0(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1,*puVar2,puVar2[1],puVar2[2],
                *(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x10065926c | FUN_10065926c */

bool FUN_10065926c(void)

{
  long unaff_x20;
  
  return *(char *)(unaff_x20 + 0x20) != '\x01';
}



/* Address: 0x10065927c | thunk_FUN_100632644 */

void thunk_FUN_100632644(void)

{
  FUN_100632644();
  return;
}



/* Address: 0x100659280 | FUN_100659280 */

void FUN_100659280(undefined8 param_1,undefined8 param_2)

{
  FUN_10065a21c(param_1,param_2,FUN_1006329e0);
  return;
}



/* Address: 0x10065928c | FUN_10065928c */

void FUN_10065928c(ulong param_1,long param_2)

{
  undefined8 *unaff_x20;
  
  FUN_100632ab0(param_1 & 0x1ffffffffffffff,*unaff_x20,unaff_x20[1],unaff_x20[2],
                *(undefined8 *)(param_2 + 0x10));
  return;
}



/* Address: 0x1006592a4 | FUN_1006592a4 */

void FUN_1006592a4(undefined8 param_1,ulong param_2,long param_3)

{
  FUN_10065a614(param_1,param_2 & 0x1ffffffffffffff);
                    /* WARNING: Could not recover jumptable at 0x0001006592e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x1006592e4 | FUN_1006592e4 */

undefined1  [16] FUN_1006592e4(undefined8 *param_1,ulong param_2,long param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *unaff_x20;
  ulong uVar5;
  void *pvVar6;
  undefined1 auVar7 [16];
  
  puVar1 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar2 = (ulong *)&DAT_00000030;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar2 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0xfc58);
  }
  *param_1 = puVar2;
  *puVar2 = param_2;
  puVar2[1] = (ulong)unaff_x20;
  uVar5 = *(ulong *)(param_3 + 0x10);
  puVar2[2] = uVar5;
  uVar4 = *(ulong *)(uVar5 - 8);
  puVar2[3] = uVar4;
  pvVar6 = *(void **)(uVar4 + 0x40);
  if (puVar1 == (undefined *)0x0) {
    pvVar3 = _malloc((size_t)pvVar6);
    puVar2[4] = (ulong)pvVar3;
    pvVar6 = _malloc((size_t)pvVar6);
  }
  else {
    pvVar3 = pvVar6;
    _swift_coroFrameAlloc(pvVar6,0xfc58);
    puVar2[4] = (ulong)pvVar3;
    _swift_coroFrameAlloc(pvVar6,0xfc58);
  }
  puVar2[5] = (ulong)pvVar6;
  FUN_100632ab0(pvVar6,param_2 & 0x1ffffffffffffff,*unaff_x20,unaff_x20[1],unaff_x20[2],uVar5);
  auVar7._8_8_ = pvVar6;
  auVar7._0_8_ = FUN_1006593b8;
  return auVar7;
}



/* Address: 0x1006593b8 | FUN_1006593b8 */

void FUN_1006593b8(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  ulong uVar2;
  ulong uVar3;
  void *pvVar4;
  ulong uVar5;
  undefined8 uVar6;
  ulong *puVar7;
  code *pcVar8;
  
  puVar7 = (ulong *)*param_1;
  pvVar1 = (void *)puVar7[4];
  pvVar4 = (void *)puVar7[5];
  uVar2 = puVar7[2];
  uVar5 = puVar7[3];
  uVar3 = *puVar7;
  if ((param_2 & 1) == 0) {
    uVar6 = 0;
    FUN_100637324(0,uVar2);
    FUN_100636f24(pvVar4,uVar3 & 0x1ffffffffffffff,uVar6);
    pcVar8 = *(code **)(uVar5 + 8);
  }
  else {
    (**(code **)(uVar5 + 0x10))(pvVar1,pvVar4,uVar2);
    uVar6 = 0;
    FUN_100637324(0,uVar2);
    FUN_100636f24(pvVar1,uVar3 & 0x1ffffffffffffff,uVar6);
    pcVar8 = *(code **)(uVar5 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar4,uVar2);
  _free(pvVar4);
  _free(pvVar1);
  _free(puVar7);
  return;
}



/* Address: 0x100659480 | FUN_100659480 */

void FUN_100659480(ulong param_1,ulong param_2)

{
  FUN_10065a5f8(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff);
  _swift_retain();
  return;
}



/* Address: 0x1006594b8 | FUN_1006594b8 */

void FUN_1006594b8(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,ulong param_5,
                  long param_6)

{
  undefined1 *puVar1;
  code *pcVar2;
  Optional OVar3;
  undefined7 extraout_var;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined8 *unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auStack_a0 [8];
  undefined1 *local_98;
  long local_90;
  long lStack_88;
  
  lVar8 = *(long *)(param_6 + 0x10);
  OVar3 = Swift::Optional::typeMetadataAccessor();
  lStack_88 = CONCAT71(extraout_var,OVar3.value);
  local_90 = *(long *)(lStack_88 + -8);
  local_98 = auStack_a0 + -(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar11 = *(long *)(lVar8 + -8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)local_98 - uVar6;
  lVar10 = lVar7 - uVar6;
  uVar9 = param_1;
  _swift_retain();
  FUN_100632d28();
  _swift_release(param_1);
  uVar6 = param_1;
  FUN_100632d60(param_1,param_2,param_3,lVar8);
  uVar9 = uVar9 & 0x1ffffffffffffff;
  uVar4 = uVar9;
  FUN_1006324f0(uVar9,uVar6 & 0x1ffffffffffffff,lVar8);
  uVar6 = param_4;
  do {
    uVar6 = uVar6 & 0x100000000000000;
    if ((uVar4 & 1) != 0) {
LAB_1006596e8:
      uVar4 = param_1;
      FUN_100632d60(param_1,param_2,param_3,lVar8);
      uVar12 = uVar9;
      FUN_1006324f0(uVar9,uVar4 & 0x1ffffffffffffff,lVar8);
      puVar1 = local_98;
      if ((uVar12 & 1) == 0) {
        FUN_100632ab0(local_98,uVar9,param_1,param_2,param_3,lVar8);
        FUN_1006329e0(uVar9,param_1,param_2,param_3,lVar8);
        _swift_release(param_1);
        (**(code **)(lVar11 + 0x38))(puVar1,0,1,lVar8);
        (**(code **)(local_90 + 8))(puVar1,lStack_88);
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006597f4);
        (*pcVar2)();
      }
      _swift_release(param_1);
      puVar1 = local_98;
      (**(code **)(lVar11 + 0x38))(local_98,1,1,lVar8);
      (**(code **)(local_90 + 8))(puVar1,lStack_88);
      uVar6 = uVar6 | param_4 & 0xffffffffffffff;
      FUN_1006324f0(uVar6,param_5 & 0x1ffffffffffffff,lVar8);
      if ((uVar6 & 1) != 0) {
        return;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100659788);
      (*pcVar2)();
    }
    FUN_100632ab0(lVar7,uVar9,param_1,param_2,param_3,lVar8);
    FUN_1006329e0(uVar9,param_1,param_2,param_3,lVar8);
    (**(code **)(lVar11 + 0x20))(lVar10,lVar7,lVar8);
    uVar12 = param_4 & 0xffffffffffffff;
    uVar4 = uVar6 | uVar12;
    FUN_1006324f0(uVar4,param_5 & 0x1ffffffffffffff,lVar8);
    if ((uVar4 & 1) != 0) {
      (**(code **)(lVar11 + 8))(lVar10,lVar8);
      uVar9 = uVar9 & 0x1ffffffffffffff;
      goto LAB_1006596e8;
    }
    uVar5 = 0;
    FUN_100637324(0,lVar8);
    FUN_100636f24(lVar10,uVar6 | uVar12,uVar5);
    uVar6 = uVar6 | uVar12;
    FUN_1006329e0(uVar6,*unaff_x20,unaff_x20[1],unaff_x20[2],lVar8);
    param_4 = uVar6 & 0x1ffffffffffffff;
    (**(code **)(lVar11 + 8))(lVar10,lVar8);
    uVar12 = param_1;
    FUN_100632d60(param_1,param_2,param_3,lVar8);
    uVar9 = uVar9 & 0x1ffffffffffffff;
    uVar4 = uVar9;
    FUN_1006324f0(uVar9,uVar12 & 0x1ffffffffffffff,lVar8);
  } while( true );
}



/* Address: 0x1006597f4 | FUN_1006597f4 */

undefined1  [16] FUN_1006597f4(undefined8 *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auVar3 [16];
  
  puVar1 = (ulong *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0x5716);
  }
  *param_1 = puVar1;
  puVar1[5] = param_4;
  puVar1[6] = (ulong)unaff_x20;
  puVar1[3] = param_2;
  puVar1[4] = param_3;
  uVar2 = *unaff_x20;
  param_2 = param_2 & 0x1ffffffffffffff;
  param_3 = param_3 & 0x1ffffffffffffff;
  FUN_100636e7c();
  *puVar1 = param_2;
  puVar1[1] = param_3;
  puVar1[2] = uVar2;
  _swift_retain();
  auVar3._8_8_ = puVar1;
  auVar3._0_8_ = FUN_100659890;
  return auVar3;
}



/* Address: 0x100659890 | FUN_100659890 */

void FUN_100659890(undefined8 *param_1,ulong param_2)

{
  param_1 = (undefined8 *)*param_1;
  if ((param_2 & 1) == 0) {
    FUN_1006594b8(*param_1,param_1[1],param_1[2],param_1[3] & 0x1ffffffffffffff,
                  param_1[4] & 0x1ffffffffffffff,param_1[5]);
  }
  else {
    _swift_retain();
    FUN_1006594b8();
    _swift_release(*param_1);
  }
  _free(param_1);
  return;
}



/* Address: 0x10065991c | FUN_10065991c */

void FUN_10065991c(undefined8 param_1,undefined8 param_2)

{
  FUN_100659934(param_1,param_2,FUN_100659090);
  return;
}



/* Address: 0x100659928 | FUN_100659928 */

void FUN_100659928(undefined8 param_1,undefined8 param_2)

{
  FUN_100659934(param_1,param_2,FUN_1006590b8);
  return;
}



/* Address: 0x100659934 | FUN_100659934 */

void FUN_100659934(undefined4 *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (uint)((ulong)param_2 >> 0x20);
  uVar1 = (undefined4)param_2;
  (*param_4)();
  *param_1 = uVar1;
  *(short *)(param_1 + 1) = (short)uVar2;
  *(char *)((long)param_1 + 6) = (char)(uVar2 >> 0x10);
  *(bool *)((long)param_1 + 7) = (uVar2 & 0xff000000) != 0;
  return;
}



/* Address: 0x100659974 | FUN_100659974 */

code * FUN_100659974(undefined8 *param_1,uint *param_2,undefined8 param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  uint uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  puVar6 = (undefined8 *)0x50;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar6 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0x4f63);
  }
  *param_1 = puVar6;
  uVar2 = *param_2;
  uVar5 = param_2[1];
  bVar3 = *(byte *)((long)param_2 + 6);
  cVar4 = *(char *)((long)param_2 + 7);
  uVar8 = *unaff_x20;
  uVar10 = unaff_x20[3];
  uVar9 = unaff_x20[2];
  puVar6[1] = unaff_x20[1];
  *puVar6 = uVar8;
  puVar6[3] = uVar10;
  puVar6[2] = uVar9;
  *(undefined1 *)(puVar6 + 4) = *(undefined1 *)(unaff_x20 + 4);
  uVar1 = 0x100000000000000;
  if (cVar4 == '\0') {
    uVar1 = 0;
  }
  puVar7 = puVar6 + 5;
  FUN_100659a50(puVar7,uVar1 | (ulong)bVar3 << 0x30 | (ulong)(ushort)uVar5 << 0x20 | (ulong)uVar2,
                param_3);
  puVar6[9] = puVar7;
  return FUN_100659a24;
}



/* Address: 0x100659a24 | FUN_100659a24 */

void FUN_100659a24(undefined8 *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)*param_1;
  (**(code **)((long)pvVar1 + 0x48))((long)pvVar1 + 0x28);
  _free(pvVar1);
  return;
}



/* Address: 0x100659a50 | FUN_100659a50 */

undefined1  [16] FUN_100659a50(long *param_1,ulong param_2,long param_3)

{
  void *pvVar1;
  long lVar2;
  long lVar3;
  undefined8 *unaff_x20;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(lVar3 + -8);
  *param_1 = lVar3;
  param_1[1] = lVar2;
  pvVar1 = *(void **)(lVar2 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar1 = _malloc((size_t)pvVar1);
  }
  else {
    _swift_coroFrameAlloc(pvVar1,0x6902);
  }
  param_1[2] = (long)pvVar1;
  FUN_100632ab0(pvVar1,param_2 & 0x1ffffffffffffff,*unaff_x20,unaff_x20[1],unaff_x20[2],lVar3);
  auVar4._8_8_ = pvVar1;
  auVar4._0_8_ = FUN_1006333c4;
  return auVar4;
}



/* Address: 0x100659ad8 | FUN_100659ad8 */

void FUN_100659ad8(ulong *param_1,uint7 *param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  uVar1 = *param_2 | uVar1;
  uVar2 = param_2[1] | uVar2;
  FUN_10065a5f8();
  *param_1 = uVar1;
  param_1[1] = uVar2;
  param_1[2] = param_3;
  _swift_retain();
  return;
}



/* Address: 0x100659b6c | thunk_FUN_100658f7c */

void thunk_FUN_100658f7c(void)

{
  FUN_100658f7c();
  return;
}



/* Address: 0x100659b70 | thunk_FUN_10063348c */

void thunk_FUN_10063348c(void)

{
  FUN_10063348c();
  return;
}



/* Address: 0x100659b74 | FUN_100659b74 */

void FUN_100659b74(ulong param_1,ulong param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100632dac(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff,*unaff_x20,unaff_x20[1],
                unaff_x20[2],*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x100659b90 | FUN_100659b90 */

void FUN_100659b90(void)

{
  FUN_10065a454();
  return;
}



/* Address: 0x100659bb4 | FUN_100659bb4 */

void FUN_100659bb4(void)

{
  FUN_10065a454();
  return;
}



/* Address: 0x100659bd8 | thunk_FUN_10065a530 */

void thunk_FUN_10065a530(void)

{
  FUN_10065a530();
  return;
}



/* Address: 0x100659bdc | FUN_100659bdc */

void FUN_100659bdc(void)

{
  FUN_10065a260();
  return;
}



/* Address: 0x100659be8 | FUN_100659be8 */

void FUN_100659be8(void)

{
  FUN_10065a2d4();
  return;
}



/* Address: 0x100659bf4 | FUN_100659bf4 */

void FUN_100659bf4(undefined8 param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  FUN_10065a614(param_1,uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                        (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2);
                    /* WARNING: Could not recover jumptable at 0x000100659c54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_3 + 0x10) + -8) + 8))(param_1);
  return;
}



/* Address: 0x100659c58 | FUN_100659c58 */

undefined1  [16] FUN_100659c58(undefined8 *param_1,uint *param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  void *pvVar9;
  long lVar10;
  undefined8 *unaff_x20;
  void *pvVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  
  puVar7 = PTR__swift_coroFrameAlloc_100eae1a0;
  puVar8 = (undefined8 *)0x60;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar8 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0xb7e5);
  }
  *param_1 = puVar8;
  puVar8[5] = unaff_x20;
  puVar8[6] = param_3;
  lVar10 = *(long *)(param_3 + 0x10);
  puVar8[7] = lVar10;
  lVar10 = *(long *)(lVar10 + -8);
  puVar8[8] = lVar10;
  pvVar11 = *(void **)(lVar10 + 0x40);
  if (puVar7 == (undefined *)0x0) {
    pvVar9 = _malloc((size_t)pvVar11);
    puVar8[9] = pvVar9;
    pvVar11 = _malloc((size_t)pvVar11);
  }
  else {
    pvVar9 = pvVar11;
    _swift_coroFrameAlloc(pvVar11,0xb7e5);
    puVar8[9] = pvVar9;
    _swift_coroFrameAlloc(pvVar11,0xb7e5);
  }
  puVar8[10] = pvVar11;
  uVar2 = *param_2;
  *(uint *)((long)puVar8 + 0x24) = uVar2;
  uVar6 = param_2[1];
  *(ushort *)((long)puVar8 + 0x22) = (ushort)uVar6;
  bVar3 = *(byte *)((long)param_2 + 6);
  *(byte *)((long)puVar8 + 0x21) = bVar3;
  cVar4 = *(char *)((long)param_2 + 7);
  *(char *)(puVar8 + 0xb) = cVar4;
  uVar5 = *(undefined1 *)(unaff_x20 + 4);
  uVar14 = *unaff_x20;
  uVar13 = unaff_x20[3];
  uVar12 = unaff_x20[2];
  puVar8[1] = unaff_x20[1];
  *puVar8 = uVar14;
  puVar8[3] = uVar13;
  puVar8[2] = uVar12;
  *(undefined1 *)(puVar8 + 4) = uVar5;
  uVar1 = 0x100000000000000;
  if (cVar4 == '\0') {
    uVar1 = 0;
  }
  FUN_10065928c(pvVar11,uVar1 | (ulong)bVar3 << 0x30 | (ulong)(ushort)uVar6 << 0x20 | (ulong)uVar2,
                param_3);
  auVar15._8_8_ = pvVar11;
  auVar15._0_8_ = FUN_100659d6c;
  return auVar15;
}



/* Address: 0x100659d6c | FUN_100659d6c */

void FUN_100659d6c(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 uVar5;
  uint uVar6;
  void *pvVar7;
  code *pcVar8;
  ulong uVar9;
  
  pvVar7 = (void *)*param_1;
  uVar6 = *(uint *)((long)pvVar7 + 0x24);
  pvVar1 = *(void **)((long)pvVar7 + 0x48);
  pvVar3 = *(void **)((long)pvVar7 + 0x50);
  uVar2 = *(undefined8 *)((long)pvVar7 + 0x38);
  lVar4 = *(long *)((long)pvVar7 + 0x40);
  uVar5 = *(undefined8 *)((long)pvVar7 + 0x30);
  uVar9 = 0x100000000000000;
  if (*(char *)((long)pvVar7 + 0x58) == '\0') {
    uVar9 = 0;
  }
  uVar9 = uVar9 | (ulong)*(byte *)((long)pvVar7 + 0x21) << 0x30 |
          (ulong)*(ushort *)((long)pvVar7 + 0x22) << 0x20;
  if ((param_2 & 1) == 0) {
    FUN_10065a614(pvVar3,uVar9 | uVar6,uVar5);
    pcVar8 = *(code **)(lVar4 + 8);
  }
  else {
    (**(code **)(lVar4 + 0x10))(pvVar1,pvVar3,uVar2);
    FUN_10065a614(pvVar1,uVar9 | uVar6,uVar5);
    pcVar8 = *(code **)(lVar4 + 8);
    (*pcVar8)(pvVar1,uVar2);
  }
  (*pcVar8)(pvVar3,uVar2);
  _free(pvVar3);
  _free(pvVar1);
  _free(pvVar7);
  return;
}



/* Address: 0x100659e48 | FUN_100659e48 */

void FUN_100659e48(undefined8 *param_1,uint7 *param_2,undefined8 param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 7) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)param_2 + 0xf) & 1) == 0) {
    uVar2 = 0;
  }
  FUN_1006594b8(*param_1,param_1[1],param_1[2],*param_2 | uVar1,param_2[1] | uVar2,param_3);
  return;
}



/* Address: 0x100659eac | FUN_100659eac */

undefined1  [16] FUN_100659eac(undefined8 *param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined1 uVar5;
  byte bVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 *puVar9;
  ulong uVar10;
  ulong uVar11;
  undefined8 *unaff_x20;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined1 auVar16 [16];
  
  puVar9 = (undefined8 *)0x60;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar9 = _malloc(0x60);
  }
  else {
    _swift_coroFrameAlloc(0x60,0xd69);
  }
  *param_1 = puVar9;
  puVar9[8] = unaff_x20;
  puVar9[9] = param_3;
  uVar1 = *param_2;
  *(undefined4 *)((long)puVar9 + 0x24) = uVar1;
  uVar7 = *(undefined2 *)(param_2 + 1);
  *(undefined2 *)((long)puVar9 + 0x22) = uVar7;
  uVar3 = *(undefined1 *)((long)param_2 + 6);
  *(undefined1 *)((long)puVar9 + 0x21) = uVar3;
  bVar4 = *(byte *)((long)param_2 + 7);
  *(byte *)((long)puVar9 + 0x56) = bVar4;
  uVar2 = param_2[2];
  *(undefined4 *)(puVar9 + 10) = uVar2;
  uVar8 = *(undefined2 *)(param_2 + 3);
  *(undefined2 *)((long)puVar9 + 0x54) = uVar8;
  uVar5 = *(undefined1 *)((long)param_2 + 0xe);
  *(undefined1 *)((long)puVar9 + 0x57) = uVar5;
  bVar6 = *(byte *)((long)param_2 + 0xf);
  *(byte *)(puVar9 + 0xb) = bVar6;
  uVar10 = 0x100000000000000;
  if ((bVar4 & 1) == 0) {
    uVar10 = 0;
  }
  uVar13 = unaff_x20[1];
  uVar12 = *unaff_x20;
  uVar15 = unaff_x20[3];
  uVar14 = unaff_x20[2];
  *(undefined1 *)(puVar9 + 4) = *(undefined1 *)(unaff_x20 + 4);
  uVar11 = 0x100000000000000;
  if ((bVar6 & 1) == 0) {
    uVar11 = 0;
  }
  puVar9[1] = uVar13;
  *puVar9 = uVar12;
  puVar9[3] = uVar15;
  puVar9[2] = uVar14;
  uVar10 = CONCAT16(uVar3,CONCAT24(uVar7,uVar1)) | uVar10;
  uVar11 = CONCAT16(uVar5,CONCAT24(uVar8,uVar2)) | uVar11;
  FUN_10065a5f8();
  puVar9[5] = uVar10;
  puVar9[6] = uVar11;
  puVar9[7] = param_3;
  _swift_retain();
  auVar16._8_8_ = puVar9 + 5;
  auVar16._0_8_ = FUN_100659fb0;
  return auVar16;
}



/* Address: 0x100659fb0 | FUN_100659fb0 */

void FUN_100659fb0(undefined8 *param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  void *pvVar3;
  
  pvVar3 = (void *)*param_1;
  uVar1 = 0x100000000000000;
  if ((*(byte *)((long)pvVar3 + 0x56) & 1) == 0) {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if ((*(byte *)((long)pvVar3 + 0x58) & 1) == 0) {
    uVar2 = 0;
  }
  if ((param_2 & 1) == 0) {
    FUN_1006594b8(*(undefined8 *)((long)pvVar3 + 0x28),*(undefined8 *)((long)pvVar3 + 0x30),
                  *(undefined8 *)((long)pvVar3 + 0x38),
                  uVar1 | (ulong)*(byte *)((long)pvVar3 + 0x21) << 0x30 |
                  (ulong)*(uint *)((long)pvVar3 + 0x24) |
                  (ulong)*(ushort *)((long)pvVar3 + 0x22) << 0x20,
                  uVar2 | (ulong)*(byte *)((long)pvVar3 + 0x57) << 0x30 |
                  (ulong)*(uint *)((long)pvVar3 + 0x50) |
                  (ulong)*(ushort *)((long)pvVar3 + 0x54) << 0x20,
                  *(undefined8 *)((long)pvVar3 + 0x48));
  }
  else {
    _swift_retain();
    FUN_1006594b8();
    _swift_release(*(undefined8 *)((long)pvVar3 + 0x28));
  }
  _free(pvVar3);
  return;
}



/* Address: 0x10065a088 | FUN_10065a088 */

void FUN_10065a088(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b7e0,param_3);
  (extension_Swift)::Swift::MutableCollection::_partition();
  return;
}



/* Address: 0x10065a0f8 | FUN_10065a0f8 */

void FUN_10065a0f8(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined8 *unaff_x20;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  
  uStack_68 = unaff_x20[1];
  local_70 = *unaff_x20;
  uStack_58 = unaff_x20[3];
  uStack_60 = unaff_x20[2];
  local_50 = *(undefined1 *)(unaff_x20 + 4);
  param_1[1] = uStack_68;
  *param_1 = local_70;
  param_1[3] = uStack_58;
  param_1[2] = uStack_60;
  *(undefined1 *)(param_1 + 4) = local_50;
  _swift_retain(local_70);
  lVar1 = param_2;
  FUN_100659090();
  (**(code **)(*(long *)(param_2 + -8) + 8))(&local_70,param_2);
  *(int *)((long)param_1 + 0x24) = (int)lVar1;
  *(short *)(param_1 + 5) = (short)((ulong)lVar1 >> 0x20);
  *(char *)((long)param_1 + 0x2a) = (char)((ulong)lVar1 >> 0x30);
  *(char *)((long)param_1 + 0x2b) = (char)((ulong)lVar1 >> 0x38);
  return;
}



/* Address: 0x10065a18c | FUN_10065a18c */

void FUN_10065a18c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b5d8,param_1);
  (extension_Swift)::Swift::Collection::get_underestimatedCount();
  return;
}



/* Address: 0x10065a1c0 | FUN_10065a1c0 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x00010065a1ec */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_10065a1c0(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b5d8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b5d8,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(pTVar1,param_1,pTVar1);
  _swift_release(*unaff_x20);
  return CVar2.unknown;
}



/* Address: 0x10065a20c | /usr/lib/swift/libswiftCore.dylib::(extension_Swift)::Swift::Sequence::$_copyContents */

tuple2_conflict2
(extension_Swift)::Swift::Sequence::__copyContents
          (UnsafeMutableBufferPointer<(extension_in_Swift):Swift_Sequence__copyContents(initializing:_Swift_UnsafeMutableBufferPointer<A_Element>)__>__A_Iterator_Swift_Int_>
           initializing)

{
  tuple2_conflict2 tVar1;
  
  tVar1 = __copyContents(initializing);
  return (tuple2_conflict2)tVar1._;
}



/* Address: 0x10065a210 | FUN_10065a210 */

void FUN_10065a210(undefined8 param_1,undefined8 param_2)

{
  FUN_10065a21c(param_1,param_2,FUN_100632a94);
  return;
}



/* Address: 0x10065a21c | FUN_10065a21c */

ulong FUN_10065a21c(ulong param_1,long param_2,code *param_3)

{
  undefined8 *unaff_x20;
  
  param_1 = param_1 & 0x1ffffffffffffff;
  (*param_3)(param_1,*unaff_x20,unaff_x20[1],unaff_x20[2],*(undefined8 *)(param_2 + 0x10));
  return param_1 & 0x1ffffffffffffff;
}



/* Address: 0x10065a24c | thunk_FUN_10065a33c */

void thunk_FUN_10065a33c(void)

{
  FUN_10065a33c();
  return;
}



/* Address: 0x10065a250 | thunk_FUN_10065a404 */

void thunk_FUN_10065a404(uint *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar2 = 0;
  }
  FUN_100659b74(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1,
                uVar2 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2);
  return;
}



/* Address: 0x10065a254 | FUN_10065a254 */

void FUN_10065a254(void)

{
  FUN_10065a260();
  return;
}



/* Address: 0x10065a260 | FUN_10065a260 */

void FUN_10065a260(undefined4 *param_1,uint *param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 | (ulong)(ushort)param_2[1] << 0x20 |
          (ulong)*param_2;
  (*param_5)();
  *param_1 = (int)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x10065a2c8 | FUN_10065a2c8 */

void FUN_10065a2c8(void)

{
  FUN_10065a2d4();
  return;
}



/* Address: 0x10065a2d4 | FUN_10065a2d4 */

void FUN_10065a2d4(uint *param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 | (ulong)(ushort)param_1[1] << 0x20 |
          (ulong)*param_1;
  (*param_4)();
  *param_1 = (uint)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(bool *)((long)param_1 + 7) = (uVar1 & 0xff00000000000000) != 0;
  return;
}



/* Address: 0x10065a33c | FUN_10065a33c */

void FUN_10065a33c(undefined4 *param_1,uint *param_2)

{
  ulong uVar1;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar1 = uVar1 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 | (ulong)(ushort)param_2[1] << 0x20 |
          (ulong)*param_2;
  FUN_1006590e0();
  *param_1 = (int)uVar1;
  *(short *)(param_1 + 1) = (short)(uVar1 >> 0x20);
  *(char *)((long)param_1 + 6) = (char)(uVar1 >> 0x30);
  *(char *)((long)param_1 + 7) = (char)(uVar1 >> 0x38);
  return;
}



/* Address: 0x10065a3a0 | FUN_10065a3a0 */

void FUN_10065a3a0(__int64 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b790,param_4);
  (extension_Swift)::Swift::RandomAccessCollection::_index(param_1);
  return;
}



/* Address: 0x10065a404 | FUN_10065a404 */

void FUN_10065a404(uint *param_1,uint *param_2)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar1 = 0x100000000000000;
  if (*(char *)((long)param_1 + 7) == '\0') {
    uVar1 = 0;
  }
  uVar2 = 0x100000000000000;
  if (*(char *)((long)param_2 + 7) == '\0') {
    uVar2 = 0;
  }
  FUN_100659b74(uVar1 | (ulong)*(byte *)((long)param_1 + 6) << 0x30 |
                (ulong)(ushort)param_1[1] << 0x20 | (ulong)*param_1,
                uVar2 | (ulong)*(byte *)((long)param_2 + 6) << 0x30 |
                (ulong)(ushort)param_2[1] << 0x20 | (ulong)*param_2);
  return;
}



/* Address: 0x10065a454 | FUN_10065a454 */

void FUN_10065a454(ulong param_1,long param_2,undefined8 param_3,undefined8 param_4,code *param_5,
                  code *param_6)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  bVar3 = Swift::Comparable::<__infix(param_2,param_1,uVar4,param_4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a528);
    (*pcVar2)();
  }
  lVar5 = 0;
  (*param_5)(0,uVar4,param_4);
  (*param_6)(param_1,param_2 + *(int *)(lVar5 + 0x24),uVar4,param_4);
  if ((param_1 & 1) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a52c);
  (*pcVar2)();
}



/* Address: 0x10065a52c | /usr/lib/swift/libswiftCore.dylib::Swift::$_copyCollectionToContiguousArray */

ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
 Swift::__copyCollectionToContiguousArray
           (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
            param_1)

{
                    /* WARNING: Could not recover jumptable at 0x000100bfa6f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR___copyCollectionToContiguousArray_100eadad8)();
  return (ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
          )param_1.unknown;
}



/* Address: 0x10065a530 | FUN_10065a530 */

void FUN_10065a530(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 uVar4;
  Range RVar5;
  
  puVar1 = PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828;
  uVar4 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_4,param_3,
             PTR___protocol_requirements_base_descriptor_for_Swift_Collection_100eac828,
             PTR___associated_type_descriptor_for_Swift_Collection_Index_100eabcf0);
  _swift_getAssociatedConformanceWitness
            (param_4,param_3,uVar4,puVar1,
             PTR___associated_conformance_descriptor_for_Swift_Collection_Swift_Collection_Index__Swift_Comparable_100eac7d0
            );
  bVar3 = Swift::Comparable::<__infix(param_2,param_1,uVar4,param_4);
  if (!bVar3) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a5f4);
    (*pcVar2)();
  }
  RVar5 = Swift::Range::typeMetadataAccessor();
  bVar3 = Swift::Comparable::<__infix
                    (param_1 + *(int *)(RVar5.unknown + 0x24),
                     param_2 + *(int *)(RVar5.unknown + 0x24),uVar4,param_4);
  if (bVar3) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10065a5f8);
  (*pcVar2)();
}



/* Address: 0x10065a5f8 | FUN_10065a5f8 */

void FUN_10065a5f8(ulong param_1,ulong param_2,long param_3)

{
  undefined8 *unaff_x20;
  
  FUN_100636e7c(param_1 & 0x1ffffffffffffff,param_2 & 0x1ffffffffffffff,*unaff_x20,unaff_x20[1],
                unaff_x20[2],*(undefined8 *)(param_3 + 0x10));
  return;
}



/* Address: 0x10065a614 | FUN_10065a614 */

void FUN_10065a614(undefined8 param_1,ulong param_2,long param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_100637324(0,*(undefined8 *)(param_3 + 0x10));
  FUN_100636f24(param_1,param_2 & 0x1ffffffffffffff,uVar1);
  return;
}



/* Address: 0x10065a654 | FUN_10065a654 */

void FUN_10065a654(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b728,param_1);
  return;
}



/* Address: 0x10065a664 | FUN_10065a664 */

void FUN_10065a664(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c697a8,param_1);
  return;
}



/* Address: 0x10065a674 | FUN_10065a674 */

void FUN_10065a674(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69840,param_1);
  return;
}



/* Address: 0x10065a684 | FUN_10065a684 */

void FUN_10065a684(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69920,param_1);
  return;
}



/* Address: 0x10065a694 | FUN_10065a694 */

void FUN_10065a694(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b7e0,param_1);
  return;
}



/* Address: 0x10065a6a4 | FUN_10065a6a4 */

void FUN_10065a6a4(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *local_28;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b790;
  _swift_getWitnessTable();
  local_28 = pTVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__RandomAccessCollection_100eabeb8,
             param_1,&local_28);
  return;
}



/* Address: 0x10065a6ec | FUN_10065a6ec */

void FUN_10065a6ec(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c699f8,param_1);
  return;
}



/* Address: 0x10065a6fc | FUN_10065a6fc */

void FUN_10065a6fc(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6b5d8,param_1);
  return;
}



/* Address: 0x10065a70c | FUN_10065a70c */

void FUN_10065a70c(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  TargetProtocolConformanceDescriptor *local_28;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6b7e0;
  _swift_getWitnessTable();
  local_28 = pTVar1;
  _swift_getWitnessTable
            (PTR__Swift__Swift__DefaultIndices<undefined>_>Swift__BidirectionalCollection_100eabea8,
             param_1,&local_28);
  return;
}



/* Address: 0x10065a754 | FUN_10065a754 */

void FUN_10065a754(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c69a48,param_1);
  return;
}


