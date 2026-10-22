/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100947534 | FUN_100947534 */

undefined8 FUN_100947534(undefined8 param_1)

{
  FUN_10090e2e8();
  return param_1;
}



/* Address: 0x100947568 | thunk_FUN_100016e14 */

void thunk_FUN_100016e14(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10094756c | FUN_10094756c */

void FUN_10094756c(void)

{
  long unaff_x20;
  
  FUN_10093f9d0(*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                *(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100947588 | FUN_100947588 */

void FUN_100947588(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009475ac | FUN_1009475ac */

void FUN_1009475ac(void)

{
  long unaff_x20;
  
  FUN_10093f448(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009475b4 | FUN_1009475b4 */

undefined8 FUN_1009475b4(undefined8 param_1,undefined8 param_2)

{
  FUN_100947d20(param_2,param_1,&DAT_100f1a268);
  return param_2;
}



/* Address: 0x1009475e8 | FUN_1009475e8 */

undefined8 FUN_1009475e8(undefined8 param_1)

{
  FUN_100947924(param_1,&DAT_100f1a1d8);
  return param_1;
}



/* Address: 0x100947614 | FUN_100947614 */

undefined8 FUN_100947614(undefined8 param_1,undefined8 param_2)

{
  FUN_10090e244(param_2,param_1);
  return param_2;
}



/* Address: 0x100947650 | FUN_100947650 */

undefined8 FUN_100947650(undefined8 param_1)

{
  FUN_10083ed48();
  return param_1;
}



/* Address: 0x100947684 | FUN_100947684 */

void FUN_100947684(void)

{
  FUN_100940744();
  return;
}



/* Address: 0x10094768c | FUN_10094768c */

void FUN_10094768c(undefined8 *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))
            (*param_1,(ulong)*(ushort *)(param_1 + 1) |
                      (ulong)*(uint *)((long)param_1 + 0xc) << 0x20,*(undefined1 *)(param_1 + 2));
  return;
}



/* Address: 0x1009476c4 | FUN_1009476c4 */

void FUN_1009476c4(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009476e8 | FUN_1009476e8 */

void FUN_1009476e8(long param_1,long param_2)

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



/* Address: 0x1009476fc | FUN_1009476fc */

void FUN_1009476fc(long param_1)

{
  _swift_release(*(undefined8 *)(param_1 + 0x28));
  return;
}



/* Address: 0x100947704 | FUN_100947704 */

void FUN_100947704(void)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (DAT_100fec6e8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100fec6e0;
  FUN_1000f8b08(&DAT_100fec6e0,&DAT_100c84890);
  puVar2 = PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530;
  _swift_getWitnessTable(PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530,puVar1);
  DAT_100fec6e8 = puVar2;
  return;
}



/* Address: 0x100947754 | FUN_100947754 */

void FUN_100947754(undefined8 param_1,char param_2)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x18);
  FUN_10093e320(*(undefined8 *)(unaff_x20 + 0x10),0);
  if (param_2 != '\x01') {
    param_1 = 0;
  }
  (*pcVar1)(param_1);
  return;
}



/* Address: 0x1009477a8 | thunk_FUN_1009477ac */

void thunk_FUN_1009477ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed918 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85730;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85730,&DAT_100f1a130);
  DAT_100fed918 = pTVar1;
  return;
}



/* Address: 0x1009477ac | FUN_1009477ac */

void FUN_1009477ac(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fed918 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85730;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85730,&DAT_100f1a130);
  DAT_100fed918 = pTVar1;
  return;
}



/* Address: 0x1009477ec | FUN_1009477ec */

void FUN_1009477ec(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fed920;
  FUN_1003b6598(&DAT_100fed920,param_2,FUN_100947828,&TargetProtocolConformanceDescriptor_100c857f4)
  ;
  *(undefined **)(param_1 + 0x10) = puVar1;
  return;
}



/* Address: 0x100947828 | FUN_100947828 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100947828(void)

{
  return ZEXT816(0x100fed968);
}



/* Address: 0x100947848 | FUN_100947848 */

void FUN_100947848(undefined8 param_1,undefined8 param_2)

{
  FUN_1003b6598(&DAT_100fed830,param_2,FUN_100947828,&TargetProtocolConformanceDescriptor_100c85854)
  ;
  return;
}



/* Address: 0x100947874 | FUN_100947874 */

void FUN_100947874(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  param_1[4] = param_2[4];
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x100947888 | FUN_100947888 */

uint FUN_100947888(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[5] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Address: 0x1009478cc | FUN_1009478cc */

void FUN_1009478cc(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 2) {
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 5) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    param_1[2] = 0;
    param_1[1] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    *param_1 = (ulong)(param_2 - 2);
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  return;
}



/* Address: 0x100947914 | FUN_100947914 */

undefined1  [16] FUN_100947914(void)

{
  return ZEXT816(0x100f1a130);
}



/* Address: 0x100947924 | FUN_100947924 */

void FUN_100947924(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (2 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 3;
  }
  if ((uVar1 != 2) && (uVar1 != 1)) {
    _swift_release(*(undefined8 *)(param_1 + 2));
    return;
  }
  FUN_100004594();
  return;
}



/* Address: 0x100947968 | FUN_100947968 */

undefined8 * FUN_100947968(undefined8 *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  uVar4 = (uint)*(byte *)(param_2 + 10);
  if (2 < *(byte *)(param_2 + 10)) {
    uVar4 = *param_2 + 3;
  }
  if (uVar4 == 2) {
    lVar2 = *(long *)(param_2 + 6);
    param_1[4] = *(undefined8 *)(param_2 + 8);
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
    uVar3 = 2;
  }
  else {
    if (uVar4 != 1) {
      uVar1 = *(undefined8 *)(param_2 + 2);
      uVar5 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar5;
      *(undefined1 *)(param_1 + 5) = 0;
      _swift_retain(uVar1);
      return param_1;
    }
    lVar2 = *(long *)(param_2 + 6);
    param_1[3] = lVar2;
    (*(code *)**(undefined8 **)(lVar2 + -8))(param_1);
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 5) = uVar3;
  return param_1;
}



/* Address: 0x100947a08 | FUN_100947a08 */

int * FUN_100947a08(int *param_1,int *param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar4 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar4 = *param_1 + 3;
    }
    if ((uVar4 == 2) || (uVar4 == 1)) {
      FUN_100004594(param_1);
    }
    else {
      _swift_release(*(undefined8 *)(param_1 + 2));
    }
    uVar4 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar4 = *param_2 + 3;
    }
    if (uVar4 == 2) {
      lVar2 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar2;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      uVar3 = 2;
    }
    else {
      if (uVar4 != 1) {
        uVar1 = *(undefined8 *)(param_2 + 2);
        uVar5 = *(undefined8 *)param_2;
        *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
        *(undefined8 *)param_1 = uVar5;
        *(undefined1 *)(param_1 + 10) = 0;
        _swift_retain(uVar1);
        return param_1;
      }
      lVar2 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar2;
      (*(code *)**(undefined8 **)(lVar2 + -8))(param_1,param_2);
      uVar3 = 1;
    }
    *(undefined1 *)(param_1 + 10) = uVar3;
  }
  return param_1;
}



/* Address: 0x100947af8 | FUN_100947af8 */

void FUN_100947af8(int *param_1,int *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 != param_2) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 3;
    }
    if ((uVar2 == 2) || (uVar2 == 1)) {
      FUN_100004594();
    }
    else {
      _swift_release(*(undefined8 *)(param_1 + 2));
    }
    uVar2 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar2 = *param_2 + 3;
    }
    if (uVar2 == 2) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar1 = 2;
    }
    else if (uVar2 == 1) {
      uVar3 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar1 = 1;
    }
    else {
      uVar1 = 0;
      uVar3 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar3;
    }
    *(undefined1 *)(param_1 + 10) = uVar1;
  }
  return;
}



/* Address: 0x100947bb4 | FUN_100947bb4 */

int FUN_100947bb4(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfd < param_2) && (*(char *)((long)param_1 + 0x29) != '\0')) {
    return *param_1 + 0xfe;
  }
  iVar1 = 0;
  if (2 < *(byte *)(param_1 + 10)) {
    iVar1 = (*(byte *)(param_1 + 10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x100947bf0 | FUN_100947bf0 */

void FUN_100947bf0(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xfe) {
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 10) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined8 *)((long)param_1 + 0x21) = 0;
    *(undefined8 *)((long)param_1 + 0x19) = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xfe;
    if (0xfd < param_3) {
      *(undefined1 *)((long)param_1 + 0x29) = 1;
    }
  }
  return;
}



/* Address: 0x100947c3c | FUN_100947c3c */

uint FUN_100947c3c(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 10);
  if (2 < *(byte *)(param_1 + 10)) {
    uVar1 = *param_1 + 3;
  }
  return uVar1;
}



/* Address: 0x100947c58 | FUN_100947c58 */

void FUN_100947c58(int *param_1,uint param_2)

{
  if (2 < param_2) {
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 3;
    param_2 = 3;
  }
  *(char *)(param_1 + 10) = (char)param_2;
  return;
}



/* Address: 0x100947c80 | FUN_100947c80 */

undefined1  [16] FUN_100947c80(void)

{
  return ZEXT816(0x100f1a1d8);
}



/* Address: 0x100947c90 | FUN_100947c90 */

void FUN_100947c90(int *param_1)

{
  undefined8 uVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 0x10);
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar2 = *param_1 + 2;
  }
  if (uVar2 == 1) {
    uVar2 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar2 = *param_1 + 3;
    }
    if ((uVar2 == 2) || (uVar2 == 1)) {
LAB_100947cf0:
      FUN_100004594();
      return;
    }
    uVar1 = *(undefined8 *)(param_1 + 2);
  }
  else {
    if ((char)param_1[10] == '\x01') goto LAB_100947cf0;
    _swift_release(*(undefined8 *)(param_1 + 2));
    uVar1 = *(undefined8 *)(param_1 + 6);
  }
  _swift_release(uVar1);
  return;
}



/* Address: 0x100947d20 | FUN_100947d20 */

undefined8 * FUN_100947d20(undefined8 *param_1,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  uVar5 = (uint)*(byte *)(param_2 + 0x10);
  if (1 < *(byte *)(param_2 + 0x10)) {
    uVar5 = *param_2 + 2;
  }
  if (uVar5 == 1) {
    uVar5 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      lVar3 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
      *(undefined1 *)(param_1 + 5) = 2;
    }
    else {
      if (uVar5 == 1) {
        lVar3 = *(long *)(param_2 + 6);
        param_1[3] = lVar3;
        (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
        uVar4 = 1;
        *(undefined1 *)(param_1 + 5) = 1;
        goto LAB_100947e44;
      }
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(undefined8 *)param_2;
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar6;
      *(undefined1 *)(param_1 + 5) = 0;
      _swift_retain(uVar2);
    }
    uVar4 = 1;
  }
  else {
    bVar1 = (char)param_2[10] != '\x01';
    if (bVar1) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar7 = *(undefined8 *)param_2;
      uVar9 = *(undefined8 *)(param_2 + 6);
      uVar8 = *(undefined8 *)(param_2 + 4);
      uVar6 = *(undefined8 *)(param_2 + 6);
      param_1[1] = *(undefined8 *)(param_2 + 2);
      *param_1 = uVar7;
      param_1[3] = uVar9;
      param_1[2] = uVar8;
      _swift_retain(uVar2);
      _swift_retain(uVar6);
    }
    else {
      lVar3 = *(long *)(param_2 + 6);
      param_1[4] = *(undefined8 *)(param_2 + 8);
      param_1[3] = lVar3;
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1);
    }
    uVar4 = 0;
    *(bool *)(param_1 + 5) = !bVar1;
    uVar2 = *(undefined8 *)(param_2 + 0xc);
    param_1[7] = *(undefined8 *)(param_2 + 0xe);
    param_1[6] = uVar2;
  }
LAB_100947e44:
  *(undefined1 *)(param_1 + 8) = uVar4;
  return param_1;
}



/* Address: 0x100947e5c | FUN_100947e5c */

int * FUN_100947e5c(int *param_1,int *param_2)

{
  bool bVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  if (param_1 == param_2) {
    return param_1;
  }
  uVar5 = (uint)*(byte *)(param_1 + 0x10);
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar5 = *param_1 + 2;
  }
  if (uVar5 == 1) {
    uVar5 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar5 = *param_1 + 3;
    }
    if ((uVar5 == 2) || (uVar5 == 1)) goto LAB_100947ed0;
    uVar2 = *(undefined8 *)(param_1 + 2);
LAB_100947ee8:
    _swift_release(uVar2);
  }
  else {
    if ((char)param_1[10] != '\x01') {
      _swift_release(*(undefined8 *)(param_1 + 2));
      uVar2 = *(undefined8 *)(param_1 + 6);
      goto LAB_100947ee8;
    }
LAB_100947ed0:
    FUN_100004594(param_1);
  }
  uVar5 = (uint)*(byte *)(param_2 + 0x10);
  if (1 < *(byte *)(param_2 + 0x10)) {
    uVar5 = *param_2 + 2;
  }
  if (uVar5 == 1) {
    uVar5 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar5 = *param_2 + 3;
    }
    if (uVar5 == 2) {
      lVar3 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
      *(undefined1 *)(param_1 + 10) = 2;
    }
    else {
      if (uVar5 == 1) {
        lVar3 = *(long *)(param_2 + 6);
        *(long *)(param_1 + 6) = lVar3;
        (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
        uVar4 = 1;
        *(undefined1 *)(param_1 + 10) = 1;
        goto LAB_100948018;
      }
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar6;
      *(undefined1 *)(param_1 + 10) = 0;
      _swift_retain(uVar2);
    }
    uVar4 = 1;
  }
  else {
    bVar1 = (char)param_2[10] != '\x01';
    if (bVar1) {
      uVar2 = *(undefined8 *)(param_2 + 2);
      uVar6 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar6;
      uVar6 = *(undefined8 *)(param_2 + 6);
      uVar7 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
      *(undefined8 *)(param_1 + 4) = uVar7;
      _swift_retain(uVar2);
      _swift_retain(uVar6);
    }
    else {
      lVar3 = *(long *)(param_2 + 6);
      *(long *)(param_1 + 6) = lVar3;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      (*(code *)**(undefined8 **)(lVar3 + -8))(param_1,param_2);
    }
    uVar4 = 0;
    *(bool *)(param_1 + 10) = !bVar1;
    *(undefined8 *)(param_1 + 0xc) = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 0xe) = *(undefined8 *)(param_2 + 0xe);
  }
LAB_100948018:
  *(undefined1 *)(param_1 + 0x10) = uVar4;
  return param_1;
}



/* Address: 0x100948030 | FUN_100948030 */

void FUN_100948030(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar2 = param_2[3];
  uVar1 = param_2[2];
  uVar4 = param_2[5];
  uVar3 = param_2[4];
  uVar6 = param_2[7];
  uVar5 = param_2[6];
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  param_1[5] = uVar4;
  param_1[4] = uVar3;
  param_1[7] = uVar6;
  param_1[6] = uVar5;
  param_1[3] = uVar2;
  param_1[2] = uVar1;
  return;
}



/* Address: 0x100948054 | FUN_100948054 */

void FUN_100948054(int *param_1,int *param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  if (param_1 == param_2) {
    return;
  }
  uVar3 = (uint)*(byte *)(param_1 + 0x10);
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar3 = *param_1 + 2;
  }
  if (uVar3 == 1) {
    uVar3 = (uint)*(byte *)(param_1 + 10);
    if (2 < *(byte *)(param_1 + 10)) {
      uVar3 = *param_1 + 3;
    }
    if ((uVar3 != 2) && (uVar3 != 1)) {
      uVar1 = *(undefined8 *)(param_1 + 2);
LAB_1009480ec:
      _swift_release(uVar1);
      goto LAB_1009480f0;
    }
  }
  else if ((char)param_1[10] != '\x01') {
    _swift_release(*(undefined8 *)(param_1 + 2));
    uVar1 = *(undefined8 *)(param_1 + 6);
    goto LAB_1009480ec;
  }
  FUN_100004594();
LAB_1009480f0:
  uVar3 = (uint)*(byte *)(param_2 + 0x10);
  if (1 < *(byte *)(param_2 + 0x10)) {
    uVar3 = *param_2 + 2;
  }
  if (uVar3 == 1) {
    uVar3 = (uint)*(byte *)(param_2 + 10);
    if (2 < *(byte *)(param_2 + 10)) {
      uVar3 = *param_2 + 3;
    }
    if (uVar3 == 2) {
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
      uVar2 = 2;
    }
    else if (uVar3 == 1) {
      uVar1 = *(undefined8 *)param_2;
      uVar5 = *(undefined8 *)(param_2 + 6);
      uVar4 = *(undefined8 *)(param_2 + 4);
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
      *(undefined8 *)(param_1 + 6) = uVar5;
      *(undefined8 *)(param_1 + 4) = uVar4;
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
      uVar1 = *(undefined8 *)param_2;
      *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
      *(undefined8 *)param_1 = uVar1;
    }
    *(undefined1 *)(param_1 + 10) = uVar2;
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
    uVar1 = *(undefined8 *)param_2;
    uVar5 = *(undefined8 *)(param_2 + 6);
    uVar4 = *(undefined8 *)(param_2 + 4);
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)param_1 = uVar1;
    *(undefined8 *)(param_1 + 6) = uVar5;
    *(undefined8 *)(param_1 + 4) = uVar4;
    uVar1 = *(undefined8 *)(param_2 + 8);
    uVar5 = *(undefined8 *)(param_2 + 0xe);
    uVar4 = *(undefined8 *)(param_2 + 0xc);
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    *(undefined8 *)(param_1 + 8) = uVar1;
    *(undefined8 *)(param_1 + 0xe) = uVar5;
    *(undefined8 *)(param_1 + 0xc) = uVar4;
  }
  *(undefined1 *)(param_1 + 0x10) = uVar2;
  return;
}



/* Address: 0x100948198 | FUN_100948198 */

int FUN_100948198(int *param_1,uint param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0xfe < param_2) && (*(char *)((long)param_1 + 0x41) != '\0')) {
    return *param_1 + 0xff;
  }
  iVar1 = 0;
  if (1 < *(byte *)(param_1 + 0x10)) {
    iVar1 = (*(byte *)(param_1 + 0x10) ^ 0xff) + 1;
  }
  return iVar1;
}



/* Address: 0x1009481d4 | FUN_1009481d4 */

void FUN_1009481d4(int *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0xff) {
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 0;
    }
    if (param_2 != 0) {
      *(char *)(param_1 + 0x10) = -(char)param_2;
      return;
    }
  }
  else {
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 0xff;
    if (0xfe < param_3) {
      *(undefined1 *)((long)param_1 + 0x41) = 1;
    }
  }
  return;
}



/* Address: 0x100948224 | FUN_100948224 */

uint FUN_100948224(int *param_1)

{
  uint uVar1;
  
  uVar1 = (uint)*(byte *)(param_1 + 0x10);
  if (1 < *(byte *)(param_1 + 0x10)) {
    uVar1 = *param_1 + 2;
  }
  return uVar1;
}



/* Address: 0x100948240 | FUN_100948240 */

void FUN_100948240(int *param_1,uint param_2)

{
  if (1 < param_2) {
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    *param_1 = param_2 - 2;
    param_2 = 2;
  }
  *(char *)(param_1 + 0x10) = (char)param_2;
  return;
}



/* Address: 0x100948268 | FUN_100948268 */

undefined1  [16] FUN_100948268(void)

{
  return ZEXT816(0x100f1a268);
}



/* Address: 0x100948278 | FUN_100948278 */

void FUN_100948278(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x100948284 | FUN_100948284 */

undefined1  [16] FUN_100948284(void)

{
  return ZEXT816(0x100f1a2e0);
}



/* Address: 0x100948294 | FUN_100948294 */

undefined1  [16] FUN_100948294(void)

{
  return ZEXT816(0x100f1a378);
}



/* Address: 0x1009482a4 | FUN_1009482a4 */

undefined1  [16] FUN_1009482a4(void)

{
  return ZEXT816(0x100f1a408);
}



/* Address: 0x1009482b4 | FUN_1009482b4 */

long FUN_1009482b4(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar1;
  (*(code *)**(undefined8 **)(lVar1 + -8))();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Address: 0x1009482f8 | FUN_1009482f8 */

long FUN_1009482f8(long param_1,long param_2)

{
  FUN_10008820c();
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return param_1;
}



/* Address: 0x100948328 | FUN_100948328 */

undefined8 * FUN_100948328(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_100004594();
  uVar1 = *param_2;
  uVar3 = param_2[3];
  uVar2 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar3;
  param_1[2] = uVar2;
  uVar1 = param_2[5];
  param_1[4] = param_2[4];
  param_1[5] = uVar1;
  return param_1;
}



/* Address: 0x100948360 | FUN_100948360 */

int FUN_100948360(int *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[0xc] != '\0')) {
    return *param_1 + -0x80000000;
  }
  uVar1 = *(ulong *)(param_1 + 6);
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1009483a8 | FUN_1009483a8 */

void FUN_1009483a8(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[5] = 0;
    param_1[4] = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    param_1[1] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 6) = 0;
    }
    if (param_2 != 0) {
      param_1[3] = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1009483f4 | FUN_1009483f4 */

undefined1  [16] FUN_1009483f4(void)

{
  return ZEXT816(0x100f1a480);
}



/* Address: 0x100948404 | thunk_FUN_100948408 */

void thunk_FUN_100948408(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feda60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85a38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85a38,&DAT_100f1a408);
  DAT_100feda60 = pTVar1;
  return;
}



/* Address: 0x100948408 | FUN_100948408 */

void FUN_100948408(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feda60 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85a38;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85a38,&DAT_100f1a408);
  DAT_100feda60 = pTVar1;
  return;
}



/* Address: 0x100948448 | thunk_FUN_10094844c */

void thunk_FUN_10094844c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feda68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85aa0,&DAT_100f1a378);
  DAT_100feda68 = pTVar1;
  return;
}



/* Address: 0x10094844c | FUN_10094844c */

void FUN_10094844c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feda68 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c85aa0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c85aa0,&DAT_100f1a378);
  DAT_100feda68 = pTVar1;
  return;
}



/* Address: 0x10094848c | FUN_10094848c */

undefined8 FUN_10094848c(undefined8 param_1,undefined8 param_2)

{
  FUN_10090e4ac(param_2,param_1);
  return param_2;
}



/* Address: 0x1009484c8 | FUN_1009484c8 */

undefined8 FUN_1009484c8(undefined8 param_1,undefined8 param_2)

{
  FUN_10090e3bc(param_2,param_1);
  return param_2;
}



/* Address: 0x100948504 | FUN_100948504 */

void FUN_100948504(void)

{
  code *pcVar1;
  long unaff_x20;
  
  pcVar1 = *(code **)(unaff_x20 + 0x10);
  if (DAT_100fec608 != -1) {
    _swift_once(&DAT_100fec608,FUN_100902068);
  }
  (*pcVar1)(DAT_1010581e8,1);
  return;
}



/* Address: 0x100948558 | thunk_FUN_100948590 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100948590(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x10094855c | FUN_10094855c */

void FUN_10094855c(void)

{
  long unaff_x20;
  
  FUN_100940e88(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x100948568 | FUN_100948568 */

void FUN_100948568(void)

{
  long unaff_x20;
  
  FUN_10093df44(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}


