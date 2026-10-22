/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005c46f4 | FUN_1005c46f4 */

void FUN_1005c46f4(undefined8 *param_1,ulong param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar5 = (void *)*param_1;
  pvVar1 = *(void **)((long)pvVar5 + 0x30);
  pvVar3 = *(void **)((long)pvVar5 + 0x38);
  if ((param_2 & 1) == 0) {
    FUN_1005c4220(pvVar3,param_2,*(undefined8 *)((long)pvVar5 + 8),
                  *(undefined8 *)((long)pvVar5 + 0x10));
  }
  else {
    uVar2 = *(undefined8 *)((long)pvVar5 + 0x20);
    lVar4 = *(long *)((long)pvVar5 + 0x28);
    (**(code **)(lVar4 + 0x10))(pvVar1,pvVar3,uVar2);
    FUN_1005c4220(pvVar1);
    (**(code **)(lVar4 + 8))(pvVar3,uVar2);
  }
  _free(pvVar3);
  _free(pvVar1);
  _free(pvVar5);
  return;
}



/* Address: 0x1005c4798 | FUN_1005c4798 */

undefined1  [16] FUN_1005c4798(ulong param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  ulong uVar4;
  undefined1 (*pauVar5) [16];
  ulong uVar6;
  ulong *unaff_x20;
  long lVar7;
  
  uVar6 = *unaff_x20;
  uVar4 = uVar6;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar4 & 1) == 0) {
    FUN_1005bdeec();
  }
  if (param_1 < *(ulong *)(uVar6 + 0x10)) {
    lVar7 = *(ulong *)(uVar6 + 0x10) - 1;
    lVar1 = uVar6 + param_1 * 0x10;
    pauVar5 = (undefined1 (*) [16])(lVar1 + 0x20);
    auVar2 = *pauVar5;
    _memmove(pauVar5,(void *)(lVar1 + 0x30),(lVar7 - param_1) * 0x10);
    *(long *)(uVar6 + 0x10) = lVar7;
    *unaff_x20 = uVar6;
    return auVar2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x1005c4820);
  (*pcVar3)();
}



/* Address: 0x1005c4820 | FUN_1005c4820 */

void FUN_1005c4820(long param_1,undefined8 param_2,long param_3)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  if (param_1 != 0) {
    FUN_1005c4368();
  }
  if ((param_3 != 0) && (lVar11 = *(long *)(param_3 + 0x10), lVar11 != 0)) {
    lVar12 = 0;
    do {
      plVar1 = (long *)(param_3 + 0x20 + lVar12 * 0x10);
      lVar2 = *plVar1;
      lVar3 = plVar1[1];
      lVar7 = *unaff_x20;
      if (lVar7 == 0 || lVar2 != lVar7) {
        uVar9 = unaff_x20[2];
        if (uVar9 == 0) {
          if (lVar7 == 0) goto LAB_1005c4878;
          puVar5 = &DAT_100fd4180;
          FUN_1000f7830(&DAT_100fd4180,&DAT_100c647c0);
          _swift_allocObject();
          *(undefined8 *)(puVar5 + 0x18) = 2;
          *(undefined8 *)(puVar5 + 0x10) = 1;
          *(long *)(puVar5 + 0x20) = lVar2;
          *(long *)(puVar5 + 0x28) = lVar3;
          unaff_x20[2] = (long)puVar5;
        }
        else {
          if (*(ulong *)(uVar9 + 0x10) != 0) {
            lVar10 = 0;
            uVar8 = 0;
            do {
              if (*(long *)(uVar9 + lVar10 + 0x20) == lVar2) {
                uVar6 = uVar9;
                _swift_isUniquelyReferenced_nonNull_native();
                if ((uVar6 & 1) == 0) {
                  FUN_1005bdeec();
                }
                if (*(ulong *)(uVar9 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x1005c49d4);
                  (*pcVar4)();
                }
                lVar10 = uVar9 + lVar10;
                goto LAB_1005c4954;
              }
              uVar8 = uVar8 + 1;
              lVar10 = lVar10 + 0x10;
            } while (*(ulong *)(uVar9 + 0x10) != uVar8);
          }
          if (lVar7 == 0) goto LAB_1005c4878;
          uVar8 = uVar9;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar6 = uVar9;
          if ((uVar8 & 1) == 0) {
            uVar6 = 0;
            FUN_1005be26c(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
          }
          uVar8 = *(ulong *)(uVar6 + 0x10);
          uVar9 = uVar6;
          if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar8) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
            FUN_1005be26c(uVar9,uVar8 + 1,1,uVar6);
          }
          *(ulong *)(uVar9 + 0x10) = uVar8 + 1;
          lVar10 = uVar9 + uVar8 * 0x10;
LAB_1005c4954:
          *(long *)(lVar10 + 0x20) = lVar2;
          *(long *)(lVar10 + 0x28) = lVar3;
          unaff_x20[2] = uVar9;
        }
      }
      else {
LAB_1005c4878:
        *unaff_x20 = lVar2;
        unaff_x20[1] = lVar3;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != lVar11);
  }
  return;
}



/* Address: 0x1005c49d4 | FUN_1005c49d4 */

undefined8
FUN_1005c49d4(long param_1,long param_2,long param_3,long param_4,long param_5,long param_6)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  if (param_6 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(param_6 + 0x10);
  }
  if (param_3 == 0) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(param_3 + 0x10);
  }
  if (param_5 != 0 || param_4 != 0) {
    lVar4 = lVar4 + 1;
  }
  if (param_2 != 0 || param_1 != 0) {
    lVar5 = lVar5 + 1;
  }
  if (lVar4 != lVar5) {
    return 0;
  }
  if (lVar4 != 0) {
    if ((param_4 != 0) && (((param_1 == 0 || (param_1 != param_4)) || (param_2 != param_5)))) {
      if (param_3 == 0) {
        return 0;
      }
      plVar6 = (long *)(param_3 + 0x28);
      lVar4 = *(long *)(param_3 + 0x10) + 1;
      do {
        lVar4 = lVar4 + -1;
        if (lVar4 == 0) {
          return 0;
        }
        plVar1 = plVar6 + -1;
        lVar5 = *plVar6;
        plVar6 = plVar6 + 2;
      } while (*plVar1 != param_4 || lVar5 != param_5);
    }
    if ((param_6 != 0) && (*(long *)(param_6 + 0x10) != 0)) {
      lVar4 = 0;
      do {
        plVar6 = (long *)(param_6 + 0x20 + lVar4 * 0x10);
        lVar5 = *plVar6;
        lVar2 = plVar6[1];
        if ((param_1 == 0) || (lVar5 != param_1 || param_2 != lVar2)) {
          if (param_3 == 0) {
            return 0;
          }
          lVar7 = *(long *)(param_3 + 0x10) + 1;
          plVar6 = (long *)(param_3 + 0x28);
          do {
            lVar7 = lVar7 + -1;
            if (lVar7 == 0) {
              return 0;
            }
            plVar1 = plVar6 + -1;
            lVar3 = *plVar6;
            plVar6 = plVar6 + 2;
          } while (*plVar1 != lVar5 || lVar3 != lVar2);
        }
        lVar4 = lVar4 + 1;
      } while (lVar4 != *(long *)(param_6 + 0x10));
      return 1;
    }
  }
  return 1;
}



/* Address: 0x1005c4ae8 | FUN_1005c4ae8 */

bool FUN_1005c4ae8(long param_1,long param_2,long param_3,long param_4,long param_5)

{
  long *plVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  
  if (((param_3 != 0) && (param_1 == param_3)) && (param_4 == param_2)) {
    return true;
  }
  if (param_5 == 0) {
    return false;
  }
  plVar4 = (long *)(param_5 + 0x28);
  lVar3 = *(long *)(param_5 + 0x10) + 1;
  do {
    lVar3 = lVar3 + -1;
    if (lVar3 == 0) {
      return false;
    }
    plVar1 = plVar4 + -1;
    lVar2 = *plVar4;
    plVar4 = plVar4 + 2;
  } while (*plVar1 != param_1 || lVar2 != param_2);
  return lVar3 != 0;
}



/* Address: 0x1005c4b48 | FUN_1005c4b48 */

void FUN_1005c4b48(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  FUN_1005c49d4(param_4,param_5,param_6,param_1,param_2,param_3);
  return;
}



/* Address: 0x1005c4b70 | FUN_1005c4b70 */

void FUN_1005c4b70(undefined8 *param_1,undefined8 *param_2)

{
  FUN_1005c49d4(*param_2,param_2[1],param_2[2],*param_1,param_1[1],param_1[2]);
  return;
}



/* Address: 0x1005c4b88 | FUN_1005c4b88 */

undefined8 FUN_1005c4b88(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_1005c5c24();
  _swift_bridgeObjectRelease(param_1);
  return uVar1;
}



/* Address: 0x1005c4bd0 | FUN_1005c4bd0 */

void FUN_1005c4bd0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_2;
  FUN_1005c5c24();
  _swift_bridgeObjectRelease(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  param_1[2] = param_4;
  return;
}



/* Address: 0x1005c4c20 | FUN_1005c4c20 */

undefined8 FUN_1005c4c20(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 0x20));
  return uVar1;
}



/* Address: 0x1005c4c5c | FUN_1005c4c5c */

undefined8 FUN_1005c4c5c(void)

{
  undefined *puVar1;
  ulong uVar2;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined1 auStack_88 [40];
  char local_60;
  undefined1 auStack_58 [40];
  
  uVar2 = 0;
  FUN_1005bee50();
  if (local_60 == '\x01') {
    FUN_100076508(auStack_88,auStack_58);
    FUN_100076508(auStack_58,auStack_88);
    puVar1 = &DAT_100fd4358;
    FUN_1000f7830(&DAT_100fd4358,&DAT_100c64a38);
    _swift_dynamicCast(auStack_b0,auStack_88,puVar1,&DAT_100ee6bd8,6);
    if ((uVar2 & 1) != 0) {
      _swift_bridgeObjectRelease(local_a8);
      return uStack_a0;
    }
  }
  else {
    FUN_1005bee8c(auStack_88);
  }
  return 0;
}



/* Address: 0x1005c4d14 | FUN_1005c4d14 */

void FUN_1005c4d14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 *unaff_x20;
  String SVar4;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 local_80;
  undefined8 uStack_78;
  byte local_58;
  
  FUN_1005bee50();
  if (local_58 < 2) {
    if (local_58 == 0) {
      puVar1 = unaff_x20;
      FUN_1005bee8c();
      unaff_x20[3] = &DAT_100ee6bd8;
      FUN_1005c4ff8();
      unaff_x20[4] = puVar1;
      puVar3 = &DAT_100ee6a58;
      _swift_allocObject(&DAT_100ee6a58,0x38,7);
      *unaff_x20 = puVar3;
      *(undefined8 *)(puVar3 + 0x10) = local_80;
      *(undefined8 *)(puVar3 + 0x18) = uStack_78;
      *(undefined8 *)(puVar3 + 0x20) = param_1;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_3;
      *(undefined1 *)(unaff_x20 + 5) = 1;
    }
    else {
      FUN_1005bee8c();
      FUN_100076508(&local_80,auStack_a8);
      FUN_100004640(auStack_a8,local_90);
      SVar4 = Swift::CustomStringConvertible::get_description();
      pcVar2 = SVar4.str;
      unaff_x20[3] = &DAT_100ee6bd8;
      FUN_1005c4ff8();
      unaff_x20[4] = pcVar2;
      puVar3 = &DAT_100ee6a58;
      _swift_allocObject(&DAT_100ee6a58,0x38,7);
      *unaff_x20 = puVar3;
      *(String *)(puVar3 + 0x10) = SVar4;
      *(undefined8 *)(puVar3 + 0x20) = param_1;
      *(undefined8 *)(puVar3 + 0x28) = param_2;
      *(undefined8 *)(puVar3 + 0x30) = param_3;
      *(undefined1 *)(unaff_x20 + 5) = 1;
      FUN_100004594(auStack_a8);
    }
  }
  else {
    _swift_bridgeObjectRelease(param_3);
    FUN_1005bee8c(&local_80);
  }
  return;
}



/* Address: 0x1005c4e60 | FUN_1005c4e60 */

undefined1  [16] FUN_1005c4e60(long *param_1,long param_2,long param_3)

{
  long *plVar1;
  long unaff_x20;
  undefined1 auVar2 [16];
  
  param_1[3] = unaff_x20;
  plVar1 = param_1;
  FUN_1005c4c5c();
  *param_1 = (long)plVar1;
  param_1[1] = param_2;
  param_1[2] = param_3;
  auVar2._8_8_ = param_1;
  auVar2._0_8_ = FUN_1005c4e98;
  return auVar2;
}



/* Address: 0x1005c4e98 | FUN_1005c4e98 */

void FUN_1005c4e98(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  uVar3 = param_1[1];
  uVar2 = param_1[2];
  if ((param_2 & 1) != 0) {
    _swift_bridgeObjectRetain(uVar2);
    FUN_1005c4d14(uVar1,uVar3,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    return;
  }
  FUN_1005c4d14(uVar1,uVar3,uVar2);
  return;
}



/* Address: 0x1005c4f00 | FUN_1005c4f00 */

void FUN_1005c4f00(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  char *pcVar1;
  undefined *puVar2;
  String SVar3;
  
  SVar3 = Swift::CustomStringConvertible::get_description();
  pcVar1 = SVar3.str;
  param_1[3] = &DAT_100ee6bd8;
  FUN_1005c4ff8();
  param_1[4] = pcVar1;
  puVar2 = &DAT_100ee6a58;
  _swift_allocObject(&DAT_100ee6a58,0x38,7);
  *param_1 = puVar2;
  *(String *)(puVar2 + 0x10) = SVar3;
  *(undefined8 *)(puVar2 + 0x20) = param_3;
  *(undefined8 *)(puVar2 + 0x28) = param_4;
  *(undefined8 *)(puVar2 + 0x30) = param_5;
  *(undefined1 *)(param_1 + 5) = 1;
  _swift_bridgeObjectRetain(param_5);
  return;
}



/* Address: 0x1005c4f94 | FUN_1005c4f94 */

void FUN_1005c4f94(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x1005c4fd0 | FUN_1005c4fd0 */

long FUN_1005c4fd0(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x10));
  return param_1;
}



/* Address: 0x1005c4ff8 | FUN_1005c4ff8 */

void FUN_1005c4ff8(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4350 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ac0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ac0,&DAT_100ee6bd8);
  DAT_100fd4350 = pTVar1;
  return;
}



/* Address: 0x1005c5038 | FUN_1005c5038 */

void FUN_1005c5038(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x30));
  _swift_deallocObject();
  return;
}



/* Address: 0x1005c5064 | FUN_1005c5064 */

void FUN_1005c5064(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 0x28) = param_1;
  return;
}



/* Address: 0x1005c506c | FUN_1005c506c */

void FUN_1005c506c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  undefined8 uVar1;
  
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    FUN_1005c4820();
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(param_3);
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)(unaff_x20 + 0x10) = param_1;
    *(undefined8 *)(unaff_x20 + 0x18) = param_2;
    *(undefined8 *)(unaff_x20 + 0x20) = param_3;
  }
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Address: 0x1005c50e0 | FUN_1005c50e0 */

void FUN_1005c50e0(void)

{
  undefined *unaff_x20;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  return;
}



/* Address: 0x1005c5120 | FUN_1005c5120 */

void FUN_1005c5120(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,undefined8 param_7,long param_8)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  undefined *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 local_70;
  long lVar2;
  
  lVar9 = (long)&local_80 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_3;
  pcStack_78 = param_2;
  local_70 = param_7;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + -8);
  lVar6 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(lVar10,param_1,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar8 + 0x30))(lVar10,1,param_4);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar7 + 8))(lVar10,lVar2);
    (*pcStack_78)(lVar9);
    pcVar4 = *(char **)(param_8 + 0x28);
    pvVar5 = *(void **)(*(long *)(*(long *)(param_8 + 8) + 8) + 8);
    SVar11 = Swift::String::_init(lVar9,param_5);
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar10,param_4);
    Swift::TextOutputStreamable::_write(unaff_x20);
    (**(code **)(lVar8 + 8))(lVar6,param_4);
  }
  return;
}



/* Address: 0x1005c529c | FUN_1005c529c */

void FUN_1005c529c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  undefined *unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 local_70;
  long lVar2;
  
  lVar9 = (long)&local_80 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_3;
  pcStack_78 = param_2;
  local_70 = param_6;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar7 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + -8);
  lVar6 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(lVar10,param_1,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar8 + 0x30))(lVar10,1,param_4);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar7 + 8))(lVar10,lVar2);
    (*pcStack_78)(lVar9);
    pcVar4 = *(char **)(param_7 + 0x28);
    pvVar5 = *(void **)(*(long *)(*(long *)(param_7 + 8) + 8) + 8);
    SVar11 = Swift::String::_init(lVar9,param_5);
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar6,lVar10,param_4);
    Swift::TextOutputStreamable::_write(unaff_x20);
    (**(code **)(lVar8 + 8))(lVar6,param_4);
  }
  return;
}



/* Address: 0x1005c5418 | FUN_1005c5418 */

void FUN_1005c5418(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  undefined8 param_6,long param_7)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined8 local_80;
  code *pcStack_78;
  undefined8 local_70;
  long local_68;
  long lVar2;
  
  lVar9 = (long)&local_80 - (*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_80 = param_3;
  pcStack_78 = param_2;
  local_70 = param_6;
  local_68 = param_7;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  lVar10 = lVar9 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(param_4 + -8);
  lVar7 = lVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar10,param_1,lVar2);
  lVar3 = lVar10;
  (**(code **)(lVar8 + 0x30))(lVar10,1,param_4);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar6 + 8))(lVar10,lVar2);
    (*pcStack_78)(lVar9);
    pcVar4 = *(char **)(local_68 + 0x28);
    pvVar5 = *(void **)(*(long *)(*(long *)(local_68 + 8) + 8) + 8);
    SVar11 = Swift::String::_init(lVar9,param_5);
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  else {
    (**(code **)(lVar8 + 0x20))(lVar7,lVar10,param_4);
    FUN_10052671c(lVar7,param_4,local_70);
    (**(code **)(lVar8 + 8))(lVar7,param_4);
  }
  return;
}



/* Address: 0x1005c558c | FUN_1005c558c */

void FUN_1005c558c(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6)

{
  Optional OVar1;
  undefined7 extraout_var;
  long lVar3;
  char *pcVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long lVar10;
  String SVar11;
  String SVar12;
  undefined1 auStack_80 [8];
  undefined8 local_78;
  code *local_70;
  long local_68;
  long lVar2;
  
  puVar8 = auStack_80 + -(*(long *)(*(long *)(param_5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_78 = param_3;
  local_70 = param_2;
  local_68 = param_6;
  OVar1 = Swift::Optional::typeMetadataAccessor();
  lVar2 = CONCAT71(extraout_var,OVar1.value);
  lVar6 = *(long *)(lVar2 + -8);
  lVar9 = (long)puVar8 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = *(long *)(param_4 + -8);
  lVar10 = lVar9 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar9,param_1,lVar2);
  lVar3 = lVar9;
  (**(code **)(lVar7 + 0x30))(lVar9,1,param_4);
  if ((int)lVar3 == 1) {
    (**(code **)(lVar6 + 8))(lVar9,lVar2);
    (*local_70)(puVar8);
    pcVar4 = *(char **)(local_68 + 0x28);
    pvVar5 = *(void **)(*(long *)(*(long *)(local_68 + 8) + 8) + 8);
    SVar11 = Swift::String::_init(puVar8,param_5);
    SVar12.bridgeObject = pvVar5;
    SVar12.str = pcVar4;
    Swift::String::append(SVar11,SVar12);
    _swift_bridgeObjectRelease(SVar11.bridgeObject);
  }
  else {
    (**(code **)(lVar7 + 0x20))(lVar10,lVar9,param_4);
    FUN_1005c4024(lVar10,param_4);
    (**(code **)(lVar7 + 8))(lVar10,param_4);
  }
  return;
}



/* Address: 0x1005c56fc | FUN_1005c56fc */

void FUN_1005c56fc(undefined8 param_1,code *param_2)

{
  undefined *unaff_x20;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  (*param_2)(unaff_x20 + 0x10);
  unaff_x20[0x28] = 1;
  return;
}



/* Address: 0x1005c575c | FUN_1005c575c */

void FUN_1005c575c(undefined8 param_1,code *param_2)

{
  undefined *unaff_x20;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  (*param_2)(unaff_x20 + 0x10);
  unaff_x20[0x28] = 1;
  return;
}



/* Address: 0x1005c57b8 | FUN_1005c57b8 */

void FUN_1005c57b8(undefined8 param_1,code *param_2,char *param_3,void *param_4)

{
  long unaff_x20;
  String SVar1;
  String SVar2;
  
  SVar1 = Swift::CustomStringConvertible::get_description();
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::append(SVar1,SVar2);
  _swift_bridgeObjectRelease(SVar1.bridgeObject);
  (*param_2)(unaff_x20 + 0x10);
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Address: 0x1005c5824 | FUN_1005c5824 */

void FUN_1005c5824(undefined8 param_1,code *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char *pcVar2;
  long lVar3;
  long unaff_x20;
  String SVar4;
  String SVar5;
  
  lVar3 = *(long *)(*(long *)(param_4 + -8) + 0x40);
  pcVar1 = param_4;
  pcVar2 = param_4;
  (**(code **)(*(long *)(param_4 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1);
  SVar4 = Swift::String::_init
                    (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_4);
  SVar5.bridgeObject = pcVar2;
  SVar5.str = pcVar1;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  (*param_2)(unaff_x20 + 0x10);
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Address: 0x1005c58c4 | FUN_1005c58c4 */

void FUN_1005c58c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *unaff_x20;
  undefined8 uVar1;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  if (unaff_x20[0x28] == '\x01') {
    FUN_1005c4820(param_2,param_3,param_4);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)(unaff_x20 + 0x10) = param_2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  }
  unaff_x20[0x28] = 1;
  return;
}



/* Address: 0x1005c5968 | FUN_1005c5968 */

void FUN_1005c5968(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *unaff_x20;
  undefined8 uVar1;
  
  Swift::TextOutputStreamable::_write(unaff_x20);
  if (unaff_x20[0x28] == '\x01') {
    FUN_1005c4820(param_2,param_3,param_4);
  }
  else {
    uVar1 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(uVar1);
    *(undefined8 *)(unaff_x20 + 0x10) = param_2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    *(undefined8 *)(unaff_x20 + 0x20) = param_4;
  }
  unaff_x20[0x28] = 1;
  return;
}



/* Address: 0x1005c5a0c | FUN_1005c5a0c */

void FUN_1005c5a0c(undefined8 param_1,undefined8 param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  long unaff_x20;
  undefined8 uVar3;
  String SVar4;
  String SVar5;
  
  pcVar1 = param_3;
  pvVar2 = param_4;
  SVar4 = Swift::CustomStringConvertible::get_description();
  SVar5.bridgeObject = pvVar2;
  SVar5.str = pcVar1;
  Swift::String::append(SVar4,SVar5);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    FUN_1005c4820(param_2,param_3,param_4);
  }
  else {
    uVar3 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(uVar3);
    *(undefined8 *)(unaff_x20 + 0x10) = param_2;
    *(char **)(unaff_x20 + 0x18) = param_3;
    *(void **)(unaff_x20 + 0x20) = param_4;
  }
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Address: 0x1005c5ab0 | FUN_1005c5ab0 */

void FUN_1005c5ab0(undefined8 param_1,undefined8 param_2,undefined8 param_3,void *param_4,
                  char *param_5)

{
  char *pcVar1;
  void *pvVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  String SVar5;
  String SVar6;
  
  lVar3 = *(long *)(*(long *)(param_5 + -8) + 0x40);
  pcVar1 = param_5;
  pvVar2 = param_4;
  (**(code **)(*(long *)(param_5 + -8) + 0x10))
            (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_1);
  SVar5 = Swift::String::_init
                    (&stack0xffffffffffffffc0 + -(lVar3 + 0xfU & 0xfffffffffffffff0),param_5);
  SVar6.bridgeObject = pvVar2;
  SVar6.str = pcVar1;
  Swift::String::append(SVar5,SVar6);
  _swift_bridgeObjectRelease(SVar5.bridgeObject);
  if (*(char *)(unaff_x20 + 0x28) == '\x01') {
    FUN_1005c4820(param_2,param_3,param_4);
  }
  else {
    uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
    _swift_bridgeObjectRetain(param_4);
    _swift_bridgeObjectRelease(uVar4);
    *(undefined8 *)(unaff_x20 + 0x10) = param_2;
    *(undefined8 *)(unaff_x20 + 0x18) = param_3;
    *(void **)(unaff_x20 + 0x20) = param_4;
  }
  *(undefined1 *)(unaff_x20 + 0x28) = 1;
  return;
}



/* Address: 0x1005c5b88 | FUN_1005c5b88 */

void FUN_1005c5b88(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  
  puVar7 = (undefined *)*param_2;
  uVar2 = param_2[1];
  uVar6 = param_2[4];
  cVar4 = *(char *)(param_2 + 5);
  if (cVar4 != '\x01') {
    _swift_bridgeObjectRelease(uVar6);
    param_1[1] = uVar2;
  }
  else {
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    param_1[3] = &DAT_100ee6bd8;
    FUN_1005c4ff8();
    param_1[4] = param_2;
    puVar5 = &DAT_100ee6a58;
    _swift_allocObject(&DAT_100ee6a58,0x38,7);
    *(undefined **)(puVar5 + 0x10) = puVar7;
    *(undefined8 *)(puVar5 + 0x18) = uVar2;
    *(undefined8 *)(puVar5 + 0x20) = uVar1;
    *(undefined8 *)(puVar5 + 0x28) = uVar3;
    *(undefined8 *)(puVar5 + 0x30) = uVar6;
    puVar7 = puVar5;
  }
  *param_1 = puVar7;
  *(bool *)(param_1 + 5) = cVar4 == '\x01';
  return;
}



/* Address: 0x1005c5c24 | FUN_1005c5c24 */

undefined1 * FUN_1005c5c24(long param_1)

{
  code *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 local_b8;
  undefined1 auStack_b0 [24];
  undefined8 local_98;
  undefined1 auStack_88 [40];
  
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 == 0) {
    puVar5 = (undefined1 *)0x0;
  }
  else {
    puVar7 = (undefined *)0x0;
    lVar10 = 0;
    puVar4 = (undefined1 *)0x0;
    do {
      FUN_100076688(param_1 + 0x20 + lVar10 * 0x28,auStack_88);
      FUN_100076508(auStack_88,auStack_b0);
      puVar5 = auStack_b0;
      FUN_100004640(puVar5,local_98);
      _swift_getDynamicType();
      FUN_100004640(auStack_b0,local_98);
      Swift::RawRepresentable::_get_rawValue();
      if ((puVar4 == (undefined1 *)0x0) || (puVar5 != puVar4)) {
        if (puVar7 == (undefined *)0x0) {
          if (puVar4 != (undefined1 *)0x0) {
            puVar7 = &DAT_100fd4180;
            FUN_1000f7830(&DAT_100fd4180,&DAT_100c647c0);
            _swift_allocObject();
            *(undefined8 *)(puVar7 + 0x18) = 2;
            *(undefined8 *)(puVar7 + 0x10) = 1;
            *(undefined1 **)(puVar7 + 0x20) = puVar5;
            *(undefined8 *)(puVar7 + 0x28) = local_b8;
            puVar5 = puVar4;
          }
        }
        else {
          if (*(ulong *)(puVar7 + 0x10) != 0) {
            lVar8 = 0;
            uVar6 = 0;
            do {
              if (*(undefined1 **)(puVar7 + lVar8 + 0x20) == puVar5) {
                puVar2 = puVar7;
                _swift_isUniquelyReferenced_nonNull_native();
                if (((ulong)puVar2 & 1) == 0) {
                  FUN_1005bdeec();
                }
                if (*(ulong *)(puVar7 + 0x10) <= uVar6) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x1005c5e54);
                  (*pcVar1)();
                }
                puVar2 = puVar7 + lVar8;
                goto LAB_1005c5db8;
              }
              uVar6 = uVar6 + 1;
              lVar8 = lVar8 + 0x10;
            } while (*(ulong *)(puVar7 + 0x10) != uVar6);
          }
          if (puVar4 != (undefined1 *)0x0) {
            puVar2 = puVar7;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar3 = puVar7;
            if (((ulong)puVar2 & 1) == 0) {
              puVar3 = (undefined *)0x0;
              FUN_1005be26c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
            }
            uVar6 = *(ulong *)(puVar3 + 0x10);
            puVar7 = puVar3;
            if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar6) {
              puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
              FUN_1005be26c(puVar7,uVar6 + 1,1,puVar3);
            }
            *(ulong *)(puVar7 + 0x10) = uVar6 + 1;
            puVar2 = puVar7 + uVar6 * 0x10;
LAB_1005c5db8:
            *(undefined1 **)(puVar2 + 0x20) = puVar5;
            *(undefined8 *)(puVar2 + 0x28) = local_b8;
            puVar5 = puVar4;
          }
        }
      }
      lVar10 = lVar10 + 1;
      FUN_100004594(auStack_b0);
      puVar4 = puVar5;
    } while (lVar10 != lVar9);
  }
  return puVar5;
}



/* Address: 0x1005c5e54 | thunk_FUN_1005c5e58 */

void thunk_FUN_1005c5e58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f98,&DAT_100ee6dc0);
  DAT_100fd4360 = pTVar1;
  return;
}



/* Address: 0x1005c5e58 | FUN_1005c5e58 */

void FUN_1005c5e58(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4360 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64f98;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64f98,&DAT_100ee6dc0);
  DAT_100fd4360 = pTVar1;
  return;
}



/* Address: 0x1005c5e98 | thunk_FUN_1005c5e9c */

void thunk_FUN_1005c5e9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ae8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ae8,&DAT_100ee6c58);
  DAT_100fd4368 = pTVar1;
  return;
}



/* Address: 0x1005c5e9c | FUN_1005c5e9c */

void FUN_1005c5e9c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd4368 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c64ae8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c64ae8,&DAT_100ee6c58);
  DAT_100fd4368 = pTVar1;
  return;
}



/* Address: 0x1005c5edc | FUN_1005c5edc */

undefined8 * FUN_1005c5edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005c5f10 | FUN_1005c5f10 */

undefined8 * FUN_1005c5f10(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005c5f50 | FUN_1005c5f50 */

void FUN_1005c5f50(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1005c5f64 | FUN_1005c5f64 */

undefined8 * FUN_1005c5f64(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005c5f9c | FUN_1005c5f9c */

int FUN_1005c5f9c(int *param_1,uint param_2)

{
  uint uVar1;
  ulong uVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x7ffffffe < param_2) && ((char)param_1[6] != '\0')) {
    return *param_1 + 0x7fffffff;
  }
  uVar2 = *(ulong *)(param_1 + 4);
  if (0xfffffffe < uVar2) {
    uVar2 = 0xffffffff;
  }
  uVar1 = (int)uVar2 - 1;
  if (0x7fffffff < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}



/* Address: 0x1005c5ff8 | FUN_1005c5ff8 */

void FUN_1005c5ff8(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 0x7fffffff) {
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      param_1[2] = (ulong)param_2;
      return;
    }
  }
  else {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 + 0x80000001);
    if (0x7ffffffe < param_3) {
      *(undefined1 *)(param_1 + 3) = 1;
    }
  }
  return;
}



/* Address: 0x1005c604c | FUN_1005c604c */

undefined1  [16] FUN_1005c604c(void)

{
  return ZEXT816(0x100ee6ad8);
}



/* Address: 0x1005c605c | FUN_1005c605c */

uint FUN_1005c605c(long *param_1,int param_2)

{
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 != 1) && ((char)param_1[2] != '\0')) {
    return (int)*param_1 + 2;
  }
  return (uint)(*param_1 == 0);
}



/* Address: 0x1005c60a0 | FUN_1005c60a0 */

void FUN_1005c60a0(ulong *param_1,uint param_2,uint param_3)

{
  if (param_2 < 2) {
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 2) = 0;
    }
    if (param_2 != 0) {
      *param_1 = 0;
      return;
    }
  }
  else {
    *param_1 = (ulong)(param_2 - 2);
    param_1[1] = 0;
    if (1 < param_3) {
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}



/* Address: 0x1005c60dc | FUN_1005c60dc */

undefined1  [16] FUN_1005c60dc(void)

{
  return ZEXT816(0x100ee6b58);
}



/* Address: 0x1005c60ec | FUN_1005c60ec */

undefined8 * FUN_1005c60ec(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1005c6130 | FUN_1005c6130 */

undefined8 * FUN_1005c6130(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  return param_1;
}



/* Address: 0x1005c619c | FUN_1005c619c */

undefined8 * FUN_1005c619c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  return param_1;
}



/* Address: 0x1005c61e8 | FUN_1005c61e8 */

undefined1  [16] FUN_1005c61e8(void)

{
  return ZEXT816(0x100ee6bd8);
}



/* Address: 0x1005c61f8 | thunk_FUN_10033d9d0 */

void thunk_FUN_10033d9d0(void)

{
  FUN_10033d9d0();
  return;
}



/* Address: 0x1005c61fc | FUN_1005c61fc */

undefined8 * FUN_1005c61fc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_2[4];
  param_1[4] = uVar1;
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  return param_1;
}



/* Address: 0x1005c6248 | FUN_1005c6248 */

undefined8 * FUN_1005c6248(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  *param_1 = *param_2;
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  uVar1 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar1;
  uVar1 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar1);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1005c62bc | FUN_1005c62bc */

void FUN_1005c62bc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_2[1];
  uVar1 = *param_2;
  uVar4 = param_2[3];
  uVar3 = param_2[2];
  uVar5 = *(undefined8 *)((long)param_2 + 0x19);
  *(undefined8 *)((long)param_1 + 0x21) = *(undefined8 *)((long)param_2 + 0x21);
  *(undefined8 *)((long)param_1 + 0x19) = uVar5;
  param_1[1] = uVar2;
  *param_1 = uVar1;
  param_1[3] = uVar4;
  param_1[2] = uVar3;
  return;
}



/* Address: 0x1005c62d0 | FUN_1005c62d0 */

undefined8 * FUN_1005c62d0(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar2 = param_2[1];
  uVar1 = param_1[1];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar1);
  uVar2 = param_2[2];
  param_1[3] = param_2[3];
  param_1[2] = uVar2;
  uVar2 = param_1[4];
  param_1[4] = param_2[4];
  _swift_bridgeObjectRelease(uVar2);
  *(undefined1 *)(param_1 + 5) = *(undefined1 *)(param_2 + 5);
  return param_1;
}



/* Address: 0x1005c6324 | FUN_1005c6324 */

undefined1  [16] FUN_1005c6324(void)

{
  return ZEXT816(0x100ee6c58);
}



/* Address: 0x1005c6334 | thunk_FUN_10033d9d0 */

void thunk_FUN_10033d9d0(void)

{
  thunk_FUN_10033d9d0();
  return;
}



/* Address: 0x1005c6338 | thunk_FUN_1005c5edc */

undefined8 * thunk_FUN_1005c5edc(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[2] = param_2[2];
  _swift_bridgeObjectRetain();
  return param_1;
}



/* Address: 0x1005c633c | FUN_1005c633c */

void FUN_1005c633c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  long unaff_x21;
  undefined8 local_98;
  undefined8 local_90 [2];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  puVar1 = &DAT_100fd4370;
  local_80 = param_5;
  uStack_78 = param_6;
  local_70 = param_7;
  uStack_68 = param_3;
  local_60 = param_4;
  uStack_58 = param_2;
  FUN_1000f7830(&DAT_100fd4370,&DAT_100c64bd8);
  FUN_1005c8228(param_1,param_2,FUN_1005c64cc,local_90,param_5,puVar1,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,&local_98);
  if (unaff_x21 != 0) {
    local_90[0] = local_98;
    _swift_errorRetain(local_98);
    _swift_dynamicCast(param_8,local_90,puVar1,param_6,7);
    FUN_1005c64f0(param_8,param_6,param_7);
    _swift_errorRelease(local_98);
  }
  return;
}



/* Address: 0x1005c642c | FUN_1005c642c */

void FUN_1005c642c(code *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,long *param_7)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  
  lVar3 = *(long *)(param_5 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  (*param_1)(param_3,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    lVar1 = param_5;
    _swift_allocError(param_5,param_6,0,0);
    (**(code **)(lVar3 + 0x20))
              (param_6,&stack0xffffffffffffffc0 + -(lVar2 + 0xfU & 0xfffffffffffffff0),param_5);
    *param_7 = lVar1;
  }
  return;
}


