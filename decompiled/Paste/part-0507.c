/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1005d821c | thunk_FUN_1005d79d0 */

void thunk_FUN_1005d79d0(void)

{
  thunk_FUN_1005d79d0();
  return;
}



/* Address: 0x1005d8220 | thunk_FUN_1005d6008 */

void thunk_FUN_1005d6008(void)

{
  FUN_1005d6008();
  return;
}



/* Address: 0x1005d8224 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  thunk_FUN_1005d7508();
  return;
}



/* Address: 0x1005d8228 | thunk_FUN_1005d7508 */

void thunk_FUN_1005d7508(void)

{
  thunk_FUN_1005d7508();
  return;
}



/* Address: 0x1005d822c | thunk_FUN_1000aa754 */

void thunk_FUN_1000aa754(void)

{
  thunk_FUN_1000aa754();
  return;
}



/* Address: 0x1005d8230 | FUN_1005d8230 */

ulong FUN_1005d8230(void)

{
  ulong uVar1;
  ulong *unaff_x20;
  
  uVar1 = *unaff_x20;
  _swift_retain(uVar1 & 0x3fffffffffffffff);
  return uVar1;
}



/* Address: 0x1005d8258 | FUN_1005d8258 */

void FUN_1005d8258(ulong param_1)

{
  ulong *unaff_x20;
  
  _swift_release(*unaff_x20 & 0x3fffffffffffffff);
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x1005d8284 | FUN_1005d8284 */

void FUN_1005d8284(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001005d829c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x10))
            (param_1,unaff_x20 + *(int *)(param_2 + 0x1c));
  return;
}



/* Address: 0x1005d82a0 | FUN_1005d82a0 */

void FUN_1005d82a0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  
                    /* WARNING: Could not recover jumptable at 0x0001005d82bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(*(long *)(param_2 + 0x10) + -8) + 0x28))
            (unaff_x20 + *(int *)(param_2 + 0x1c),param_1);
  return;
}



/* Address: 0x1005d82c0 | FUN_1005d82c0 */

undefined1  [16] FUN_1005d82c0(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x1c);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005d82d4 | FUN_1005d82d4 */

void FUN_1005d82d4(undefined8 *param_1)

{
  *param_1 = 4;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  return;
}



/* Address: 0x1005d82e8 | FUN_1005d82e8 */

void FUN_1005d82e8(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x20);
  FUN_1005d833c(0xff,*(undefined8 *)(param_2 + 0x10));
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005d8338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x10))
            (param_1,unaff_x20 + iVar1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005d833c | FUN_1005d833c */

void FUN_1005d833c(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005d8348 | FUN_1005d8348 */

void FUN_1005d8348(undefined8 param_1,long param_2)

{
  int iVar1;
  Optional OVar2;
  undefined7 extraout_var;
  long unaff_x20;
  
  iVar1 = *(int *)(param_2 + 0x20);
  FUN_1005d833c(0xff,*(undefined8 *)(param_2 + 0x10));
  OVar2 = Swift::Optional::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x0001005d8398. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(CONCAT71(extraout_var,OVar2.value) + -8) + 0x28))
            (unaff_x20 + iVar1,param_1,CONCAT71(extraout_var,OVar2.value));
  return;
}



/* Address: 0x1005d839c | FUN_1005d839c */

undefined1  [16] FUN_1005d839c(undefined8 param_1,long param_2)

{
  long unaff_x20;
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = unaff_x20 + *(int *)(param_2 + 0x20);
  auVar1._0_8_ = FUN_100004520;
  return auVar1;
}



/* Address: 0x1005d83b0 | FUN_1005d83b0 */

void FUN_1005d83b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 *puVar1;
  long lVar2;
  
  lVar2 = 0;
  FUN_1005d8420(0,param_4);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x20));
  *puVar1 = 4;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  *(undefined1 *)(puVar1 + 4) = 0;
  *param_1 = param_2;
                    /* WARNING: Could not recover jumptable at 0x0001005d841c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(param_4 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar2 + 0x1c),param_3,param_4);
  return;
}



/* Address: 0x1005d8420 | FUN_1005d8420 */

void FUN_1005d8420(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1005d842c | FUN_1005d842c */

void FUN_1005d842c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  lVar2 = 0;
  FUN_1005d8420(0,param_5);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(lVar2 + 0x20));
  *param_1 = param_2;
  (**(code **)(*(long *)(param_5 + -8) + 0x20))
            ((long)param_1 + (long)*(int *)(lVar2 + 0x1c),param_3,param_5);
  uVar3 = *param_4;
  uVar5 = param_4[3];
  uVar4 = param_4[2];
  puVar1[1] = param_4[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  *(undefined1 *)(puVar1 + 4) = *(undefined1 *)(param_4 + 4);
  return;
}



/* Address: 0x1005d84ac | FUN_1005d84ac */

undefined1  [16] FUN_1005d84ac(void)

{
  return ZEXT816(0xf000000000000007);
}



/* Address: 0x1005d84b8 | FUN_1005d84b8 */

undefined1  [16] FUN_1005d84b8(void)

{
  undefined1 auVar1 [16];
  long unaff_x20;
  
  auVar1 = *(undefined1 (*) [16])(unaff_x20 + 8);
  FUN_1005d84e8(*(undefined8 *)*(undefined1 (*) [16])(unaff_x20 + 8),
                *(undefined8 *)(unaff_x20 + 0x10));
  return auVar1;
}



/* Address: 0x1005d84e8 | FUN_1005d84e8 */

void FUN_1005d84e8(ulong param_1)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_retain(param_1 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1005d8500 | FUN_1005d8500 */

void FUN_1005d8500(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_1005d8534(*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 0x10));
  *(undefined8 *)(unaff_x20 + 8) = param_1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_2;
  return;
}



/* Address: 0x1005d8534 | FUN_1005d8534 */

void FUN_1005d8534(ulong param_1)

{
  if (((param_1 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    return;
  }
  _swift_release(param_1 & 0x3fffffffffffffff);
  return;
}



/* Address: 0x1005d854c | FUN_1005d854c */

void FUN_1005d854c(undefined8 param_1,undefined1 param_2)

{
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = param_1;
  *(undefined1 *)(unaff_x20 + 0x20) = param_2;
  return;
}



/* Address: 0x1005d8558 | FUN_1005d8558 */

void FUN_1005d8558(undefined1 *param_1,undefined1 param_2)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 0x10) = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 8) = 0xf000000000000007;
  param_1[0x20] = 1;
  return;
}



/* Address: 0x1005d8574 | FUN_1005d8574 */

void FUN_1005d8574(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = 0;
  param_1[0x20] = 1;
  return;
}



/* Address: 0x1005d858c | FUN_1005d858c */

void FUN_1005d858c(undefined1 *param_1,undefined1 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined1 param_6)

{
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 8) = param_3;
  *(undefined8 *)(param_1 + 0x10) = param_4;
  *(undefined8 *)(param_1 + 0x18) = param_5;
  param_1[0x20] = param_6;
  return;
}



/* Address: 0x1005d85a0 | FUN_1005d85a0 */

undefined8 FUN_1005d85a0(char *param_1,char *param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  undefined1 auStack_88 [40];
  
  if (*param_1 != *param_2) {
    return 0;
  }
  uVar3 = *(ulong *)(param_1 + 8);
  uVar4 = *(ulong *)(param_2 + 8);
  uVar2 = uVar4 & 0xf000000000000007;
  if (((uVar3 ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    if (uVar2 != 0xf000000000000007) {
      return 0;
    }
  }
  else {
    if (uVar2 == 0xf000000000000007) {
      return 0;
    }
    lVar5 = *(long *)(param_1 + 0x10);
    lVar6 = *(long *)(param_2 + 0x10);
    lVar1 = 0;
    FUN_1005d833c(0,param_3);
    lVar7 = *(long *)(lVar1 + -8);
    pcVar8 = *(code **)(lVar7 + 0x10);
    (*pcVar8)(auStack_88,param_2,lVar1);
    (*pcVar8)(auStack_88,param_1,lVar1);
    FUN_1006689fc(uVar3,uVar4);
    pcVar8 = *(code **)(lVar7 + 8);
    if ((uVar3 & 1) == 0) {
      (*pcVar8)(param_2,lVar1);
      (*pcVar8)(param_1,lVar1);
      return 0;
    }
    (*pcVar8)(param_1,lVar1);
    (*pcVar8)(param_2,lVar1);
    if (lVar5 != lVar6) {
      return 0;
    }
  }
  if (param_1[0x20] == '\x01') {
    if (param_2[0x20] == '\x01') {
      return 1;
    }
  }
  else if ((param_2[0x20] != '\x01') && (*(long *)(param_1 + 0x18) == *(long *)(param_2 + 0x18))) {
    return 1;
  }
  return 0;
}



/* Address: 0x1005d8708 | FUN_1005d8708 */

void FUN_1005d8708(undefined8 param_1,Hasher param_2)

{
  __uint64 _Var1;
  byte *unaff_x20;
  Hasher HVar2;
  
  Swift::Hasher::_combine((ulong)*unaff_x20,param_2);
  HVar2.unknown = *(undefined **)(unaff_x20 + 8);
  if ((((ulong)HVar2.unknown ^ 0xffffffffffffffff) & 0xf000000000000007) == 0) {
    Swift::Hasher::_combine(0,param_2);
    HVar2.unknown = param_2.unknown;
  }
  else {
    _Var1 = *(__uint64 *)(unaff_x20 + 0x10);
    Swift::Hasher::_combine(1,param_2);
    FUN_1006682c4(param_1);
    Swift::Hasher::_combine(_Var1,HVar2);
  }
  if (unaff_x20[0x20] == 1) {
    Swift::Hasher::_combine(0,HVar2);
  }
  else {
    _Var1 = *(__uint64 *)(unaff_x20 + 0x18);
    Swift::Hasher::_combine(1,HVar2);
    Swift::Hasher::_combine(_Var1,HVar2);
  }
  return;
}



/* Address: 0x1005d87a0 | FUN_1005d87a0 */

void FUN_1005d87a0(void)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_68;
  FUN_1005d8708();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d87dc | thunk_FUN_1005d87a0 */

void thunk_FUN_1005d87a0(void)

{
  FUN_1005d87a0();
  return;
}



/* Address: 0x1005d87e0 | thunk_FUN_1005d8708 */

void thunk_FUN_1005d8708(void)

{
  FUN_1005d8708();
  return;
}



/* Address: 0x1005d87e4 | FUN_1005d87e4 */

void FUN_1005d87e4(__int64 param_1)

{
  Hasher HVar1;
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_68;
  FUN_1005d8708();
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d881c | FUN_1005d881c */

uint FUN_1005d881c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined1 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined1 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined1 *)(param_1 + 4);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = *(undefined1 *)(param_2 + 4);
  FUN_1005d85a0(&local_70,&local_40,*(undefined8 *)(param_3 + 0x10));
  return uVar1 & 1;
}



/* Address: 0x1005d8868 | FUN_1005d8868 */

undefined1  [16] FUN_1005d8868(long param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  char *pcVar1;
  void *pvVar2;
  undefined8 *unaff_x20;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  
  Swift::_StringGuts::grow(0x31,param_2);
  pvVar2 = (void *)0x8000000100dae720;
  SVar3.bridgeObject = (void *)0x8000000100dae720;
  SVar3.str = (char *)0xd000000000000023;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  pcVar1 = (char *)*unaff_x20;
  FUN_100666bcc();
  SVar4.bridgeObject = pvVar2;
  SVar4.str = pcVar1;
  SVar8.bridgeObject = param_4;
  SVar8.str = param_3;
  Swift::String::append(SVar4,SVar8);
  _swift_bridgeObjectRelease(pvVar2);
  SVar5.bridgeObject = &DAT_e800000000000000;
  SVar5.str = (char *)0x203a61746164202c;
  SVar9.bridgeObject = param_4;
  SVar9.str = param_3;
  Swift::String::append(SVar5,SVar9);
  Swift::DefaultStringInterpolation::_appendInterpolation
            ((long)unaff_x20 + (long)*(int *)(param_1 + 0x1c),*(undefined8 *)(param_1 + 0x10));
  SVar6.bridgeObject = &SUB_e200000000000000;
  SVar6.str = (char *)0x7d20;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar6,SVar10);
  return ZEXT816(0xe000000000000000) << 0x40;
}



/* Address: 0x1005d8934 | thunk_FUN_1005d8868 */

void thunk_FUN_1005d8868(void)

{
  FUN_1005d8868();
  return;
}



/* Address: 0x1005d8938 | FUN_1005d8938 */

undefined8 FUN_1005d8938(ulong *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong *puVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  bool bVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  undefined1 local_b0 [8];
  ulong local_a8;
  ulong uStack_a0;
  ulong local_98;
  undefined1 local_90;
  undefined1 local_88 [8];
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  undefined1 local_68;
  
  uVar12 = *param_1;
  FUN_1006689fc(uVar12,*param_2);
  if ((uVar12 & 1) != 0) {
    lVar13 = 0;
    FUN_1005d8420(0,param_3);
    bVar11 = Swift::Equatable::___infix
                       ((long)param_1 + (long)*(int *)(lVar13 + 0x1c),
                        (long)param_2 + (long)*(int *)(lVar13 + 0x1c),param_3,param_4);
    if (bVar11) {
      param_1 = (ulong *)((long)param_1 + (long)*(int *)(lVar13 + 0x20));
      uVar12 = *param_1;
      uVar5 = param_1[1];
      uVar2 = param_1[2];
      uVar6 = param_1[3];
      uVar9 = (undefined1)param_1[4];
      puVar1 = (ulong *)((long)param_2 + (long)*(int *)(lVar13 + 0x20));
      uVar3 = *puVar1;
      uVar7 = puVar1[1];
      uVar4 = puVar1[2];
      uVar8 = puVar1[3];
      uVar10 = (undefined1)puVar1[4];
      if ((uVar12 & 0xff) == 4) {
        if ((uVar3 & 0xff) == 4) {
          return 1;
        }
      }
      else if ((uVar3 & 0xff) != 4) {
        local_88[0] = (undefined1)uVar3;
        local_b0[0] = (undefined1)uVar12;
        local_a8 = uVar5;
        uStack_a0 = uVar2;
        local_98 = uVar6;
        local_90 = uVar9;
        local_80 = uVar7;
        uStack_78 = uVar4;
        local_70 = uVar8;
        local_68 = uVar10;
        FUN_1005d8f90(uVar3,uVar7,uVar4,uVar8,uVar10);
        FUN_1005d8f90(uVar12,uVar5,uVar2,uVar6,uVar9);
        puVar14 = local_b0;
        FUN_1005d85a0(puVar14,local_88,param_3);
        FUN_1005d8fac(uVar3,uVar7,uVar4,uVar8,uVar10);
        FUN_1005d8fac(uVar12,uVar5,uVar2,uVar6,uVar9);
        if (((ulong)puVar14 & 1) == 0) {
          return 0;
        }
        return 1;
      }
      FUN_1005d8f90(uVar3,uVar7,uVar4,uVar8,uVar10);
      FUN_1005d8f90(uVar12,uVar5,uVar2,uVar6,uVar9);
      FUN_1005d8fac(uVar12,uVar5,uVar2,uVar6,uVar9);
      FUN_1005d8fac(uVar3,uVar7,uVar4,uVar8,uVar10);
    }
  }
  return 0;
}



/* Address: 0x1005d8b1c | FUN_1005d8b1c */

void FUN_1005d8b1c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  FUN_1005d8938(param_1,param_2,*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_4 + -8));
  return;
}



/* Address: 0x1005d8b28 | FUN_1005d8b28 */

void FUN_1005d8b28(Hasher param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  undefined8 uVar2;
  
  FUN_1006682c4(param_1.unknown,*unaff_x20);
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  Swift::Hashable::hash(param_1);
  uVar1 = 0xff;
  FUN_1005d833c(0xff,uVar2);
  Swift::Optional::typeMetadataAccessor();
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c659e8,uVar1);
  (extension_Swift)::Swift::Optional::_hash(param_1);
  return;
}



/* Address: 0x1005d8bcc | FUN_1005d8bcc */

void FUN_1005d8bcc(undefined8 param_1,undefined8 param_2)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_1005d8b28(HVar1.unknown,param_1,param_2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d8c20 | FUN_1005d8c20 */

void FUN_1005d8c20(undefined8 param_1,long param_2)

{
  FUN_1005d8bcc(param_1,*(undefined8 *)(param_2 + -8));
  return;
}



/* Address: 0x1005d8c28 | FUN_1005d8c28 */

void FUN_1005d8c28(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1005d8b28(param_1,param_2,*(undefined8 *)(param_3 + -8));
  return;
}



/* Address: 0x1005d8c30 | FUN_1005d8c30 */

void FUN_1005d8c30(__int64 param_1,undefined8 param_2,long param_3)

{
  Hasher HVar1;
  undefined8 uVar2;
  undefined1 auStack_78 [72];
  
  uVar2 = *(undefined8 *)(param_3 + -8);
  Swift::Hasher::init(param_1);
  HVar1.unknown = auStack_78;
  FUN_1005d8b28(HVar1.unknown,param_2,uVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d8c80 | FUN_1005d8c80 */

ulong FUN_1005d8c80(ulong param_1)

{
  _swift_retain(param_1 & 0x3fffffffffffffff);
  return param_1;
}



/* Address: 0x1005d8ca8 | FUN_1005d8ca8 */

uint FUN_1005d8ca8(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  FUN_1006689fc(param_1,param_3);
  return (uint)param_1 & (uint)(param_2 == param_4);
}



/* Address: 0x1005d8cdc | FUN_1005d8cdc */

void FUN_1005d8cdc(undefined8 param_1,Hasher param_2,__uint64 param_3)

{
  FUN_1006682c4();
  Swift::Hasher::_combine(param_3,param_2);
  return;
}



/* Address: 0x1005d8d08 | FUN_1005d8d08 */

void FUN_1005d8d08(Hasher param_1,Hasher param_2)

{
  undefined1 auStack_68 [72];
  
  Swift::Hasher::init(0);
  FUN_1006682c4(auStack_68);
  Swift::Hasher::_combine((__uint64)param_2.unknown,param_1);
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1005d8d5c | FUN_1005d8d5c */

void FUN_1005d8d5c(void)

{
  Hasher HVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar2.unknown = (undefined *)*unaff_x20;
  HVar1.unknown = (undefined *)unaff_x20[1];
  Swift::Hasher::init(0);
  FUN_1006682c4(auStack_78);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d8db4 | FUN_1005d8db4 */

void FUN_1005d8db4(void)

{
  __uint64 _Var1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  _Var1 = unaff_x20[1];
  FUN_1006682c4();
  Swift::Hasher::_combine(_Var1,HVar2);
  return;
}



/* Address: 0x1005d8de4 | FUN_1005d8de4 */

void FUN_1005d8de4(__int64 param_1)

{
  Hasher HVar1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  HVar2.unknown = (undefined *)*unaff_x20;
  HVar1.unknown = (undefined *)unaff_x20[1];
  Swift::Hasher::init(param_1);
  FUN_1006682c4(auStack_78);
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1005d8e38 | FUN_1005d8e38 */

uint FUN_1005d8e38(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  lVar1 = param_1[1];
  lVar2 = param_2[1];
  FUN_1006689fc(uVar3,*param_2);
  return (uint)uVar3 & (uint)(lVar1 == lVar2);
}



/* Address: 0x1005d8e70 | FUN_1005d8e70 */

tuple2_conflict3 FUN_1005d8e70(void)

{
  tuple2_conflict3 tVar1;
  
  tVar1 = Swift::Array<undefined>::_allocateUninitialized(0);
  return tVar1;
}



/* Address: 0x1005d8e78 | FUN_1005d8e78 */

void FUN_1005d8e78(undefined8 param_1)

{
  long in_x3;
  
                    /* WARNING: Could not recover jumptable at 0x0001005d8e8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(in_x3 + -8) + 0x38))(param_1,1,1);
  return;
}



/* Address: 0x1005d8e90 | FUN_1005d8e90 */

undefined * FUN_1005d8e90(undefined8 param_1,long param_2)

{
  code *pcVar1;
  ContiguousArray CVar2;
  _ContiguousArrayBuffer<undefined> _Var3;
  undefined *puVar4;
  
  if (param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1005d8f20);
    (*pcVar1)();
  }
  _Var3.unknown = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    CVar2.unknown = &DAT_100fd4db0;
    FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
    _Var3 = Swift::ContiguousArray::_allocateBufferUninitialized(param_2,CVar2);
    *(long *)(_Var3.unknown + 0x10) = param_2;
    puVar4 = _Var3.unknown + 0x20;
    do {
      FUN_1005da13c(param_1,puVar4);
      puVar4 = puVar4 + 0x48;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  FUN_1005da18c(param_1);
  return _Var3.unknown;
}



/* Address: 0x1005d8f20 | FUN_1005d8f20 */

void FUN_1005d8f20(void)

{
  ContiguousArray CVar1;
  _ContiguousArrayBuffer<undefined> _Var2;
  
  CVar1.unknown = &DAT_100fd4db0;
  FUN_1000f7830(&DAT_100fd4db0,&DAT_100c659e0);
  _Var2 = Swift::ContiguousArray::_allocateBufferUninitialized(1,CVar1);
  *(undefined8 *)(_Var2.unknown + 0x10) = 1;
  *(undefined8 *)(_Var2.unknown + 0x28) = 0;
  *(undefined8 *)(_Var2.unknown + 0x20) = 0;
  *(undefined8 *)(_Var2.unknown + 0x38) = 0;
  *(undefined8 *)(_Var2.unknown + 0x30) = 0;
  *(undefined8 *)(_Var2.unknown + 0x48) = 0;
  *(undefined8 *)(_Var2.unknown + 0x40) = 0;
  *(undefined8 *)(_Var2.unknown + 0x58) = 0;
  *(undefined8 *)(_Var2.unknown + 0x50) = 0;
  *(undefined2 *)(_Var2.unknown + 0x60) = 0xff00;
  return;
}



/* Address: 0x1005d8f7c | FUN_1005d8f7c */

void FUN_1005d8f7c(undefined8 *param_1)

{
  *(undefined8 *)((long)param_1 + 0x2f) = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  return;
}



/* Address: 0x1005d8f90 | FUN_1005d8f90 */

void FUN_1005d8f90(char param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == '\x04') {
    return;
  }
  FUN_1005d84e8(param_2,param_3);
  return;
}



/* Address: 0x1005d8fac | FUN_1005d8fac */

void FUN_1005d8fac(char param_1,undefined8 param_2,undefined8 param_3)

{
  if (param_1 == '\x04') {
    return;
  }
  FUN_1005d8534(param_2,param_3);
  return;
}



/* Address: 0x1005d8fc8 | FUN_1005d8fc8 */

void FUN_1005d8fc8(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65a28,param_1);
  return;
}



/* Address: 0x1005d8fd8 | FUN_1005d8fd8 */

void FUN_1005d8fd8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 local_18;
  
  local_18 = *(undefined8 *)(*(long *)(param_3 + -8) + 8);
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c65a78,param_1,&local_18);
  return;
}



/* Address: 0x1005d9010 | thunk_FUN_1005d9014 */

void thunk_FUN_1005d9014(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4db8 != 0) {
    return;
  }
  uVar1 = 0x100c65af8;
  _swift_getWitnessTable(0x100c65af8,&DAT_100ee7b60);
  DAT_100fd4db8 = uVar1;
  return;
}



/* Address: 0x1005d9014 | FUN_1005d9014 */

void FUN_1005d9014(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4db8 != 0) {
    return;
  }
  uVar1 = 0x100c65af8;
  _swift_getWitnessTable(0x100c65af8,&DAT_100ee7b60);
  DAT_100fd4db8 = uVar1;
  return;
}



/* Address: 0x1005d9054 | thunk_FUN_1005d9058 */

void thunk_FUN_1005d9058(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4dc0 != 0) {
    return;
  }
  uVar1 = 0x100c65ba0;
  _swift_getWitnessTable(0x100c65ba0,&DAT_100ee7bd8);
  DAT_100fd4dc0 = uVar1;
  return;
}



/* Address: 0x1005d9058 | FUN_1005d9058 */

void FUN_1005d9058(void)

{
  undefined8 uVar1;
  
  if (DAT_100fd4dc0 != 0) {
    return;
  }
  uVar1 = 0x100c65ba0;
  _swift_getWitnessTable(0x100c65ba0,&DAT_100ee7bd8);
  DAT_100fd4dc0 = uVar1;
  return;
}


