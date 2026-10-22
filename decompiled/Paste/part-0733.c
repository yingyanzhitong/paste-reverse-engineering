/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1008010cc | thunk_FUN_100800ecc */

void thunk_FUN_100800ecc(void)

{
  thunk_FUN_100800ecc();
  return;
}



/* Address: 0x1008010d0 | thunk_FUN_100800f98 */

void thunk_FUN_100800f98(void)

{
  thunk_FUN_100800f98();
  return;
}



/* Address: 0x1008010d4 | thunk_FUN_1001b6868 */

void thunk_FUN_1001b6868(void)

{
  thunk_FUN_1001b6868();
  return;
}



/* Address: 0x1008010d8 | thunk_FUN_1001b68a4 */

void thunk_FUN_1001b68a4(void)

{
  thunk_FUN_1001b68a4();
  return;
}



/* Address: 0x1008010dc | thunk_FUN_1001b6900 */

void thunk_FUN_1001b6900(void)

{
  thunk_FUN_1001b6900();
  return;
}



/* Address: 0x1008010e0 | thunk_FUN_1000d0d2c */

void thunk_FUN_1000d0d2c(void)

{
  thunk_FUN_1000d0d2c();
  return;
}



/* Address: 0x1008010e4 | thunk_FUN_10080002c */

void thunk_FUN_10080002c(void)

{
  FUN_10080002c();
  return;
}



/* Address: 0x1008010e8 | thunk_FUN_1007ffa68 */

void thunk_FUN_1007ffa68(void)

{
  FUN_1007ffa68();
  return;
}



/* Address: 0x1008010ec | thunk_FUN_1007ffc3c */

void thunk_FUN_1007ffc3c(void)

{
  FUN_1007ffc3c();
  return;
}



/* Address: 0x1008010f0 | thunk_FUN_1007ffcb4 */

void thunk_FUN_1007ffcb4(void)

{
  FUN_1007ffcb4();
  return;
}



/* Address: 0x1008010f4 | thunk_FUN_1007ffcd4 */

void thunk_FUN_1007ffcd4(void)

{
  FUN_1007ffcd4();
  return;
}



/* Address: 0x1008010f8 | thunk_FUN_1007ffbb8 */

void thunk_FUN_1007ffbb8(void)

{
  FUN_1007ffbb8();
  return;
}



/* Address: 0x1008010fc | thunk_FUN_1007ffbc0 */

void thunk_FUN_1007ffbc0(void)

{
  FUN_1007ffbc0();
  return;
}



/* Address: 0x100801100 | FUN_100801100 */

void FUN_100801100(String *param_1)

{
  String SVar1;
  
  FUN_1007fe458();
  SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  *param_1 = SVar1;
  return;
}



/* Address: 0x100801138 | FUN_100801138 */

bool FUN_100801138(long param_1,long param_2)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  char *pcVar6;
  long lVar7;
  char *pcVar8;
  
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 != *(long *)(param_2 + 0x10)) {
    return false;
  }
  if ((lVar2 == 0) || (param_1 == param_2)) {
    bVar1 = true;
  }
  else {
    lVar3 = 0;
    do {
      lVar5 = *(long *)(param_1 + 0x20 + lVar3 * 8);
      lVar7 = *(long *)(param_2 + 0x20 + lVar3 * 8);
      lVar4 = *(long *)(lVar5 + 0x10);
      bVar1 = lVar4 == *(long *)(lVar7 + 0x10);
      if (!bVar1) {
        return bVar1;
      }
      if (lVar4 != 0 && lVar5 != lVar7) {
        pcVar6 = (char *)(lVar5 + 0x20);
        pcVar8 = (char *)(lVar7 + 0x20);
        do {
          if (*pcVar6 != *pcVar8) {
            return false;
          }
          lVar4 = lVar4 + -1;
          pcVar6 = pcVar6 + 1;
          pcVar8 = pcVar8 + 1;
        } while (lVar4 != 0);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != lVar2);
  }
  return bVar1;
}



/* Address: 0x1008011cc | FUN_1008011cc */

undefined8 FUN_1008011cc(void)

{
  undefined8 uVar1;
  long unaff_x20;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  FUN_1007fb28c(uVar1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined2 *)(unaff_x20 + 0x20));
  return uVar1;
}



/* Address: 0x100801210 | FUN_100801210 */

void FUN_100801210(undefined8 param_1,undefined8 param_2,undefined2 param_3)

{
  long unaff_x20;
  
  FUN_1007fb2d8(*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined2 *)(unaff_x20 + 0x20));
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_2;
  *(undefined2 *)(unaff_x20 + 0x20) = param_3;
  return;
}



/* Address: 0x100801250 | FUN_100801250 */

void FUN_100801250(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined2 param_6)

{
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined2 *)(param_1 + 4) = param_6;
  return;
}



/* Address: 0x100801260 | switchD_10080298c::caseD_70 */

void switchD_10080298c::caseD_70(void)

{
  caseD_70();
  return;
}



/* Address: 0x100801264 | FUN_100801264 */

void FUN_100801264(Hasher param_1)

{
  void *pvVar1;
  ushort uVar2;
  byte bVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  
  HVar4.unknown = unaff_x20->str;
  Swift::String::hash(param_1,*unaff_x20);
  uVar2 = *(ushort *)&unaff_x20[2].str;
  if ((uVar2 & 0xff00) == 0x200) {
    bVar3 = 0;
    HVar5.unknown = HVar4.unknown;
  }
  else {
    HVar5.unknown = unaff_x20[1].str;
    pvVar1 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(1,HVar4);
    FUN_100802114(param_1.unknown,HVar5.unknown,pvVar1,uVar2);
    bVar3 = (byte)(uVar2 >> 8) & 1;
  }
  Swift::Hasher::_combine(bVar3,HVar5);
  return;
}



/* Address: 0x1008012e0 | FUN_1008012e0 */

void FUN_1008012e0(void)

{
  void *pvVar1;
  ushort uVar2;
  Hasher HVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar4.unknown = unaff_x20->str;
  Swift::String::hash((Hasher)auStack_78,*unaff_x20);
  uVar2 = *(ushort *)&unaff_x20[2].str;
  if ((uVar2 & 0xff00) == 0x200) {
    HVar3.unknown = (undefined *)0x0;
    HVar5.unknown = HVar4.unknown;
  }
  else {
    HVar5.unknown = unaff_x20[1].str;
    pvVar1 = unaff_x20[1].bridgeObject;
    Swift::Hasher::_combine(1,HVar4);
    FUN_100802114(auStack_78,HVar5.unknown,pvVar1,uVar2);
    HVar3.unknown = (undefined *)(ulong)(uVar2 >> 8 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar3.unknown,HVar5);
  Swift::Hasher::_finalize(HVar3);
  return;
}



/* Address: 0x100801370 | FUN_100801370 */

uint FUN_100801370(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined2 local_50;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined2 local_20;
  
  uVar1 = 0;
  uStack_68 = param_1[1];
  local_70 = *param_1;
  uStack_58 = param_1[3];
  uStack_60 = param_1[2];
  local_50 = *(undefined2 *)(param_1 + 4);
  uStack_38 = param_2[1];
  local_40 = *param_2;
  uStack_28 = param_2[3];
  uStack_30 = param_2[2];
  local_20 = *(undefined2 *)(param_2 + 4);
  switchD_10080298c::caseD_70(&local_70,&local_40);
  return uVar1 & 1;
}



/* Address: 0x1008013b8 | FUN_1008013b8 */

void FUN_1008013b8(void)

{
  void *pvVar1;
  ushort uVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  Hasher HVar6;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar5.unknown = unaff_x20->str;
  SVar3 = *unaff_x20;
  HVar6.unknown = unaff_x20[1].str;
  pvVar1 = unaff_x20[1].bridgeObject;
  uVar2 = *(ushort *)&unaff_x20[2].str;
  Swift::Hasher::init(0);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  if ((uVar2 & 0xff00) == 0x200) {
    HVar4.unknown = (undefined *)0x0;
    HVar6.unknown = HVar5.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    FUN_100802114(auStack_88,HVar6.unknown,pvVar1,uVar2);
    HVar4.unknown = (undefined *)(ulong)(uVar2 >> 8 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar4.unknown,HVar6);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100801458 | FUN_100801458 */

void FUN_100801458(Hasher param_1)

{
  void *pvVar1;
  ushort uVar2;
  byte bVar3;
  Hasher HVar4;
  Hasher HVar5;
  String *unaff_x20;
  
  HVar4.unknown = unaff_x20->str;
  HVar5.unknown = unaff_x20[1].str;
  pvVar1 = unaff_x20[1].bridgeObject;
  uVar2 = *(ushort *)&unaff_x20[2].str;
  Swift::String::hash(param_1,*unaff_x20);
  if ((uVar2 & 0xff00) == 0x200) {
    bVar3 = 0;
    HVar5.unknown = HVar4.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar4);
    FUN_100802114(param_1.unknown,HVar5.unknown,pvVar1,uVar2);
    bVar3 = (byte)(uVar2 >> 8) & 1;
  }
  Swift::Hasher::_combine(bVar3,HVar5);
  return;
}



/* Address: 0x1008014d4 | FUN_1008014d4 */

void FUN_1008014d4(__int64 param_1)

{
  void *pvVar1;
  ushort uVar2;
  String SVar3;
  Hasher HVar4;
  Hasher HVar5;
  Hasher HVar6;
  String *unaff_x20;
  undefined1 auStack_88 [72];
  
  HVar5.unknown = unaff_x20->str;
  SVar3 = *unaff_x20;
  HVar6.unknown = unaff_x20[1].str;
  pvVar1 = unaff_x20[1].bridgeObject;
  uVar2 = *(ushort *)&unaff_x20[2].str;
  Swift::Hasher::init(param_1);
  Swift::String::hash((Hasher)auStack_88,SVar3);
  if ((uVar2 & 0xff00) == 0x200) {
    HVar4.unknown = (undefined *)0x0;
    HVar6.unknown = HVar5.unknown;
  }
  else {
    Swift::Hasher::_combine(1,HVar5);
    FUN_100802114(auStack_88,HVar6.unknown,pvVar1,uVar2);
    HVar4.unknown = (undefined *)(ulong)(uVar2 >> 8 & 1);
  }
  Swift::Hasher::_combine((__uint8)HVar4.unknown,HVar6);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100801570 | thunk_FUN_100802ccc */

void thunk_FUN_100802ccc(void)

{
  FUN_100802ccc();
  return;
}



/* Address: 0x100801574 | FUN_100801574 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

String FUN_100801574(ulong param_1,undefined8 param_2,char *param_3,byte *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  undefined1 in_CY;
  Hasher HVar5;
  ulong uVar6;
  Hasher into;
  __int64 _Var7;
  char *pcVar8;
  _StringGuts _Var9;
  char *pcVar10;
  byte *pbVar11;
  Hasher unaff_x19;
  byte *unaff_x20;
  long unaff_x22;
  long unaff_x23;
  char *unaff_x24;
  byte *unaff_x25;
  void *unaff_x26;
  ulong unaff_x27;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String SVar19;
  String SVar20;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  String SVar27;
  String SVar28;
  String SVar29;
  String SVar30;
  String SVar31;
  String SVar32;
  String SVar33;
  undefined8 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000020;
  undefined1 uStack0000000000000028;
  undefined1 auStack0000000000000029 [15];
  long in_stack_00000038;
  undefined1 auStack_70 [80];
  String separator;
  
  SVar27.bridgeObject = unaff_x26;
  SVar27.str = unaff_x19.unknown;
  pcVar8 = &DAT_e600000000000000;
  HVar5.unknown = &DAT_676e69727473;
  pcVar10 = (char *)(param_1 & 0xff);
  pbVar11 = &switchD_1008015a0::switchdataD_100c7b4a8;
  into.unknown = HVar5.unknown;
  switch(pcVar10) {
  default:
    pcVar8 = (char *)0xe300000000000000;
  case (char *)0x30:
  case (char *)0x3e:
  case (char *)0x7e:
  case (char *)0xb6:
  case (char *)0xd0:
  case (char *)0xde:
    HVar5.unknown = (char *)0x6e69;
  case (char *)0xd9:
    HVar5.unknown = (undefined *)(ulong)((uint)HVar5.unknown & 0xffff | 0x740000);
  case (char *)0x2e:
  case (char *)0x56:
  case (char *)0x96:
  case (char *)0x98:
  case (char *)0xce:
  case (char *)0xf6:
    SVar12.bridgeObject = pcVar8;
    SVar12.str = HVar5.unknown;
    return SVar12;
  case (char *)0x2:
    SVar15.bridgeObject = &DAT_e600000000000000;
    SVar15.str = (char *)0x656c62756f64;
    return SVar15;
  case (char *)0x3:
    pcVar8 = &DAT_e400000000000000;
  case (char *)0x13:
    SVar16.bridgeObject = pcVar8;
    SVar16.str = (char *)0x6c6f6f62;
    return SVar16;
  case (char *)0x4:
  case (char *)0x26:
  case (char *)0x4e:
  case (char *)0x58:
  case (char *)0x8e:
  case (char *)0xc6:
  case (char *)0xee:
  case (char *)0xf8:
    pcVar8 = &DAT_e500000000000000;
  case (char *)0xd4:
    HVar5.unknown = (char *)0x7365747962;
  case (char *)0x62:
  case (char *)0xa2:
    SVar13.bridgeObject = pcVar8;
    SVar13.str = HVar5.unknown;
    return SVar13;
  case (char *)0x5:
    HVar5.unknown = (char *)0x69727473;
  case (char *)0xc:
  case (char *)0xa8:
    uVar6 = (ulong)HVar5.unknown & 0xffff0000ffffffff | 0x676e00000000;
LAB_100801628:
    HVar5.unknown = (undefined *)(uVar6 | 0x7241000000000000);
    pcVar8 = (char *)0x6172;
switchD_1008015a0_caseD_1d:
    pcVar8 = (char *)((ulong)pcVar8 | 0x790000);
    goto switchD_1008015a0_caseD_c4;
  case (char *)0x6:
  case (char *)0xd:
    pcVar8 = &DAT_e800000000000000;
    HVar5.unknown = (char *)0x6e69;
  case (char *)0x22:
  case (char *)0x36:
  case (char *)0x4a:
  case (char *)0x5e:
  case (char *)0x66:
  case (char *)0x6e:
  case (char *)0x76:
  case (char *)0x8a:
  case (char *)0x9e:
  case (char *)0xa6:
  case (char *)0xae:
  case (char *)0xc2:
  case (char *)0xd6:
  case (char *)0xea:
  case (char *)0xfe:
    HVar5.unknown = (undefined *)((ulong)HVar5.unknown & 0xffff00000000ffff | 0x7961727241740000);
  case (char *)0x11:
  case (char *)0x16:
    SVar18.bridgeObject = pcVar8;
    SVar18.str = HVar5.unknown;
    return SVar18;
  case (char *)0x7:
    uVar6 = 0x656c62756f64;
    goto LAB_100801628;
  case (char *)0x8:
    SVar19.bridgeObject = (void *)0xe900000000000079;
    SVar19.str = (char *)0x617272416c6f6f62;
    return SVar19;
  case (char *)0x9:
    pcVar8 = (char *)0x7272416b;
  case (char *)0xe:
    pcVar8 = (char *)((ulong)pcVar8 & 0xffffffffffff | 0xee00796100000000);
  case (char *)0x18:
    HVar5.unknown = (char *)0x6e75684365747962;
  case (char *)0x0:
  case (char *)0xc0:
    SVar14.bridgeObject = pcVar8;
    SVar14.str = HVar5.unknown;
    return SVar14;
  case (char *)0xb:
  case (char *)0x17:
    HVar5.unknown = _DAT_676e69727473;
    pcVar8 = _DAT_676e6972747b;
    unaff_x19.unknown = pcVar10;
  case (char *)0xf:
    FUN_100802ccc(HVar5.unknown,pcVar8);
  case (char *)0x1b:
    *unaff_x19.unknown = (char)HVar5.unknown;
  case (char *)0xda:
    SVar20.bridgeObject = pcVar8;
    SVar20.str = HVar5.unknown;
    return SVar20;
  case (char *)0x10:
    Swift::Hasher::init(0);
  case (char *)0x15:
    FUN_100801574();
    into.unknown = (undefined *)&stack0x00000008;
    param_3 = unaff_x19.unknown;
    unaff_x19.unknown = pcVar8;
  case (char *)0x19:
    HVar5.unknown = unaff_x19.unknown;
    pcVar8 = param_3;
    SVar28.bridgeObject = HVar5.unknown;
    SVar28.str = pcVar8;
    Swift::String::hash(into,SVar28);
  case (char *)0x12:
    _swift_bridgeObjectRelease();
    HVar5.unknown = (undefined *)Swift::Hasher::_finalize(HVar5);
  case (char *)0x8c:
  case (char *)0x39:
  case (char *)0x69:
  case (char *)0x71:
  case (char *)0x79:
    SVar21.bridgeObject = pcVar8;
    SVar21.str = HVar5.unknown;
    return SVar21;
  case (char *)0x1a:
    register0x00000008 = (BADSPACEBASE *)auStack_70;
    unaff_x19.unknown = (undefined *)(ulong)*unaff_x20;
  case (char *)0x9c:
  case (char *)0xa4:
  case (char *)0xac:
    Swift::Hasher::init(0x676e69727473);
    HVar5.unknown = pcVar8;
    FUN_100801574();
    SVar30.bridgeObject = HVar5.unknown;
    SVar30.str = unaff_x19.unknown;
    Swift::String::hash((undefined *)((long)register0x00000008 + 8),SVar30);
    pcVar8 = unaff_x19.unknown;
  case (char *)0x4c:
    _swift_bridgeObjectRelease();
  case (char *)0x88:
    HVar5.unknown = (undefined *)Swift::Hasher::_finalize(HVar5);
  case (char *)0x1c:
    SVar23.bridgeObject = pcVar8;
    SVar23.str = HVar5.unknown;
    return SVar23;
  case (char *)0x1d:
    goto switchD_1008015a0_caseD_1d;
  case (char *)0x3a:
  case (char *)0x6a:
  case (char *)0x72:
  case (char *)0x7a:
  case (char *)0xaa:
  case (char *)0xb2:
    goto switchD_1008015a0_caseD_3a;
  case (char *)0x48:
    _swift_bridgeObjectRetain();
    break;
  case (char *)0x5c:
  case (char *)0x64:
  case (char *)0x6c:
  case (char *)0x74:
  case (char *)0xa0:
    pcVar10 = (char *)((ulong)param_3 & 0xff);
  case (char *)0x38:
  case (char *)0xe9:
  case (char *)0xfd:
    pbVar11 = (byte *)0x100801000;
  case (char *)0x21:
  case (char *)0x35:
  case (char *)0x49:
  case (char *)0x5d:
  case (char *)0x65:
  case (char *)0x6d:
  case (char *)0x75:
  case (char *)0x89:
  case (char *)0x9d:
  case (char *)0xa5:
  case (char *)0xad:
  case (char *)0xc1:
  case (char *)0xd5:
                    /* WARNING: Could not recover jumptable at 0x000100801800. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)((long)*(int *)(pbVar11 + (long)pcVar10 * 4 + 0xe94) + 0x1008017f4))();
    SVar24.bridgeObject = pcVar8;
    SVar24.str = HVar5.unknown;
    return SVar24;
  case (char *)0x60:
    goto switchD_1008015a0_caseD_60;
  case (char *)0x61:
    while( true ) {
      unaff_x27 = *(ulong *)(unaff_x22 + 0x10);
      pcVar10 = *(char **)(unaff_x22 + 0x18);
      unaff_x19.unknown = (undefined *)(unaff_x27 + 1);
      in_stack_00000038 = unaff_x22;
switchD_1008015a0_caseD_a1:
      in_CY = (ulong)pcVar10 >> 1 <= unaff_x27;
switchD_1008015a0_caseD_e8:
      if ((bool)in_CY) {
        FUN_10083547c(&DAT_00000001 < pcVar10,unaff_x19.unknown,1);
        unaff_x22 = in_stack_00000038;
      }
      *(undefined **)(unaff_x22 + 0x10) = unaff_x19.unknown;
      pcVar10 = (char *)(unaff_x22 + unaff_x27 * 0x10);
switchD_1008015a0_caseD_ec:
      *(byte **)(pcVar10 + 0x20) = unaff_x25;
      *(void **)(pcVar10 + 0x28) = unaff_x26;
      unaff_x23 = unaff_x23 + -1;
      pcVar10 = unaff_x24;
      if (unaff_x23 == 0) break;
LAB_100801960:
      unaff_x24 = pcVar10 + 8;
      in_stack_00000020 = *(undefined8 *)pcVar10;
      FUN_100801ebc(&stack0x00000028,&stack0x00000020);
      unaff_x25 = (byte *)_uStack0000000000000028;
      unaff_x26 = (void *)auStack0000000000000029._7_8_;
    }
  case (char *)0x3b:
  case (char *)0x6b:
  case (char *)0x73:
  case (char *)0x7b:
  case (char *)0xab:
  case (char *)0xb3:
  case (char *)0xdb:
    _uStack0000000000000028 = unaff_x22;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1007ff838();
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar27 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    _swift_bridgeObjectRelease(unaff_x22);
    break;
  case (char *)0x70:
    HVar5.unknown = (undefined *)(ulong)*unaff_x20;
    FUN_100801574();
    unaff_x19.unknown = pcVar10;
  case (char *)0x46:
  case (char *)0x86:
  case (char *)0xb0:
  case (char *)0xbe:
  case (char *)0xe4:
  case (char *)0xe6:
    *(undefined **)unaff_x19.unknown = HVar5.unknown;
    *(char **)(unaff_x19.unknown + 8) = pcVar8;
    SVar25.bridgeObject = pcVar8;
    SVar25.str = HVar5.unknown;
    return SVar25;
  case (char *)0x78:
    goto switchD_1008015a0_caseD_78;
  case (char *)0x84:
    unaff_x25 = unaff_x19.unknown + 0x20;
  case (char *)0x34:
    _swift_bridgeObjectRetain();
  case (char *)0x24:
  case (char *)0x68:
    HVar5.unknown = (char *)0x0;
    FUN_10083547c(0);
    unaff_x22 = in_stack_00000038;
  case (char *)0x45:
  case (char *)0x85:
  case (char *)0xbd:
    FUN_100803704();
  case (char *)0xe5:
    unaff_x20 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
    unaff_x24 = HVar5.unknown;
  case (char *)0x20:
    do {
      if (unaff_x23 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100801e94);
        (*pcVar4)();
      }
      pcVar10 = (char *)(ulong)*unaff_x25;
switchD_1008015a0_caseD_60:
      uStack0000000000000028 = (char)pcVar10;
switchD_1008015a0_caseD_78:
      param_4 = unaff_x20;
      HVar5.unknown = &stack0x00000028;
      pcVar8 = (char *)0x10;
      param_3 = (char *)0x0;
      unaff_x20 = param_4;
switchD_1008015a0_caseD_3a:
      SVar27 = Swift::String::_init(HVar5.unknown,pcVar8,param_3,param_4,unaff_x24);
      _Var7 = Swift::String::get_count(SVar27);
      if (_Var7 == 1) {
        auStack0000000000000029._7_8_ = (void *)0xe100000000000000;
        _uStack0000000000000028 = (long)&DAT_00000030;
        SVar31.bridgeObject = param_4;
        SVar31.str = param_3;
        Swift::String::append(SVar27,SVar31);
        _swift_bridgeObjectRelease(SVar27.bridgeObject);
        SVar27 = _uStack0000000000000028;
      }
      uVar6 = *(ulong *)(unaff_x22 + 0x10);
      in_stack_00000038 = unaff_x22;
      if (*(ulong *)(unaff_x22 + 0x18) >> 1 <= uVar6) {
        FUN_10083547c(1 < *(ulong *)(unaff_x22 + 0x18),uVar6 + 1,1);
      }
      lVar3 = in_stack_00000038;
      *(ulong *)(in_stack_00000038 + 0x10) = uVar6 + 1;
      *(String *)(in_stack_00000038 + uVar6 * 0x10 + 0x20) = SVar27;
      unaff_x25 = unaff_x25 + 1;
      unaff_x23 = unaff_x23 + -1;
      unaff_x22 = in_stack_00000038;
    } while (unaff_x23 != 0);
    FUN_1007fb2ec(in_stack_00000010);
    uVar1 = in_stack_00000008;
    pcVar10 = &DAT_100fe6f38;
    _uStack0000000000000028 = lVar3;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    pcVar8 = pcVar10;
    FUN_1007ff838();
    SVar27 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                       ((String)(ZEXT816(0xe000000000000000) << 0x40));
    _Var9.unknown = SVar27.bridgeObject;
    _swift_bridgeObjectRelease(lVar3);
    _uStack0000000000000028 = 0;
    auStack0000000000000029._7_8_ = 0xe000000000000000;
    Swift::_StringGuts::grow(0x14,_Var9);
    uVar2 = auStack0000000000000029._7_8_;
    in_stack_00000038 = uVar1;
    SVar25 = Swift::CustomStringConvertible::get_description();
    _swift_bridgeObjectRelease(uVar2);
    SVar26.bridgeObject = (void *)0x8000000100db1cc0;
    SVar26.str = (char *)0xd000000000000010;
    SVar32.bridgeObject = pcVar8;
    SVar32.str = pcVar10;
    _uStack0000000000000028 = SVar25;
    Swift::String::append(SVar26,SVar32);
    SVar33.bridgeObject = pcVar8;
    SVar33.str = pcVar10;
    Swift::String::append(SVar27,SVar33);
    _swift_bridgeObjectRelease(SVar27.bridgeObject);
    SVar27 = _uStack0000000000000028;
    break;
  case (char *)0xa1:
    goto switchD_1008015a0_caseD_a1;
  case (char *)0xa9:
  case (char *)0xb1:
    unaff_x19.unknown = HVar5.unknown;
  case (char *)0x44:
  case (char *)0xd8:
  case (char *)0xed:
    HVar5.unknown = (undefined *)(ulong)*unaff_x20;
  case (char *)0x25:
  case (char *)0x4d:
  case (char *)0x8d:
  case (char *)0xc5:
    FUN_100801574();
    SVar29.bridgeObject = pcVar8;
    SVar29.str = HVar5.unknown;
    Swift::String::hash(unaff_x19,SVar29);
    _swift_bridgeObjectRelease(pcVar8);
    SVar22.bridgeObject = HVar5.unknown;
    SVar22.str = pcVar8;
    return SVar22;
  case (char *)0xbc:
    FUN_10083547c();
  case (char *)0xfc:
    unaff_x22 = in_stack_00000038;
    pcVar10 = unaff_x19.unknown + 0x20;
    goto LAB_100801960;
  case (char *)0xc4:
switchD_1008015a0_caseD_c4:
    SVar17.bridgeObject = (void *)((ulong)pcVar8 & 0xffffffffffff | 0xeb00000000000000);
    SVar17.str = HVar5.unknown;
    return SVar17;
  case (char *)0xe8:
    goto switchD_1008015a0_caseD_e8;
  case (char *)0xec:
    goto switchD_1008015a0_caseD_ec;
  }
  return SVar27;
}



/* Address: 0x100801670 | FUN_100801670 */

void FUN_100801670(undefined1 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_2;
  FUN_100802ccc(uVar1,param_2[1]);
  *param_1 = (char)uVar1;
  return;
}



/* Address: 0x10080169c | FUN_10080169c */

void FUN_10080169c(ulong *param_1,undefined8 param_2,ulong param_3)

{
  ulong uVar1;
  byte *unaff_x20;
  
  uVar1 = (ulong)*unaff_x20;
  FUN_100801574();
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1008016c4 | FUN_1008016c4 */

void FUN_1008016c4(undefined8 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(0);
  FUN_100801574();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x100801724 | FUN_100801724 */

void FUN_100801724(Hasher param_1,void *param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  FUN_100801574();
  SVar2.bridgeObject = param_2;
  SVar2.str = pcVar1;
  Swift::String::hash(param_1,SVar2);
  _swift_bridgeObjectRelease(param_2);
  return;
}



/* Address: 0x100801764 | switchD_1008015a0::caseD_1a */

void switchD_1008015a0::caseD_1a(__int64 param_1,Hasher param_2)

{
  char *pcVar1;
  byte *unaff_x20;
  String SVar2;
  undefined1 auStack_68 [72];
  
  pcVar1 = (char *)(ulong)*unaff_x20;
  Swift::Hasher::init(param_1);
  FUN_100801574();
  SVar2.bridgeObject = param_2.unknown;
  SVar2.str = pcVar1;
  Swift::String::hash((Hasher)auStack_68,SVar2);
  _swift_bridgeObjectRelease();
  Swift::Hasher::_finalize(param_2);
  return;
}



/* Address: 0x1008017c0 | FUN_1008017c0 */

String FUN_1008017c0(char *param_1,void *param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  String SVar4;
  void *pvVar5;
  code *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  __int64 _Var9;
  undefined *puVar10;
  char *pcVar11;
  char *pcVar12;
  _StringGuts _Var13;
  char *pcVar14;
  undefined *puVar15;
  ulong uVar16;
  long lVar17;
  double *pdVar18;
  ulong uVar19;
  long lVar20;
  String separator;
  String SVar21;
  String SVar22;
  String SVar23;
  String SVar24;
  String SVar25;
  String SVar26;
  undefined8 local_80;
  String local_78;
  char *local_68;
  
  SVar23.bridgeObject = param_2;
  SVar23.str = param_1;
  pcVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_3) {
  case 0:
    _swift_bridgeObjectRetain(param_2);
    return SVar23;
  case 1:
    local_78.str = param_1;
    FUN_1007fe458();
    SVar23 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar23;
  case 2:
    SVar23 = double::get_description((double)param_1);
    return SVar23;
  case 3:
    bVar7 = ((ulong)param_1 & 1) == 0;
    pcVar12 = (char *)0x65757274;
    if (bVar7) {
      pcVar12 = (char *)0x65736c6166;
    }
    puVar1 = &DAT_e400000000000000;
    if (bVar7) {
      puVar1 = &DAT_e500000000000000;
    }
    SVar4.bridgeObject = puVar1;
    SVar4.str = pcVar12;
    return SVar4;
  case 4:
    uVar19 = *(ulong *)(param_1 + 0x10);
    uVar16 = uVar19;
    if (0x1f < uVar19) {
      uVar16 = 0x20;
    }
    if (uVar19 != 0) {
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      pcVar11 = param_1 + 0x20;
      _swift_bridgeObjectRetain(param_1);
      uVar8 = 0;
      FUN_10083547c(0,uVar16,0);
      pcVar12 = local_68;
      FUN_100803704();
      puVar10 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      do {
        if (uVar16 == 0) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100801e94);
          (*pcVar6)();
        }
        local_78.str._0_1_ = *pcVar11;
        pcVar14 = (char *)0x0;
        puVar15 = puVar10;
        SVar23 = Swift::String::_init(&local_78,0x10,0,puVar10,uVar8);
        _Var9 = Swift::String::get_count(SVar23);
        if (_Var9 == 1) {
          local_78.bridgeObject = (void *)0xe100000000000000;
          local_78.str = &DAT_00000030;
          SVar24.bridgeObject = puVar15;
          SVar24.str = pcVar14;
          Swift::String::append(SVar23,SVar24);
          _swift_bridgeObjectRelease(SVar23.bridgeObject);
          SVar23 = local_78;
        }
        uVar2 = *(ulong *)(pcVar12 + 0x10);
        local_68 = pcVar12;
        if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar2) {
          FUN_10083547c(1 < *(ulong *)(pcVar12 + 0x18),uVar2 + 1,1);
        }
        pcVar12 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar2 + 1;
        *(String *)(local_68 + uVar2 * 0x10 + 0x20) = SVar23;
        pcVar11 = pcVar11 + 1;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
      FUN_1007fb2ec(param_1,param_2,4);
    }
    pcVar11 = &DAT_100fe6f38;
    local_78.str = pcVar12;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    pcVar14 = pcVar11;
    FUN_1007ff838();
    SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                       ((String)(ZEXT816(0xe000000000000000) << 0x40));
    _Var13.unknown = SVar23.bridgeObject;
    _swift_bridgeObjectRelease(pcVar12);
    local_78.str = (char *)0x0;
    local_78.bridgeObject = (void *)0xe000000000000000;
    Swift::_StringGuts::grow(0x14,_Var13);
    pvVar5 = local_78.bridgeObject;
    local_68 = (char *)uVar19;
    SVar21 = Swift::CustomStringConvertible::get_description();
    _swift_bridgeObjectRelease(pvVar5);
    SVar22.bridgeObject = (void *)0x8000000100db1cc0;
    SVar22.str = (char *)0xd000000000000010;
    SVar25.bridgeObject = pcVar14;
    SVar25.str = pcVar11;
    local_78 = SVar21;
    Swift::String::append(SVar22,SVar25);
    SVar26.bridgeObject = pcVar14;
    SVar26.str = pcVar11;
    Swift::String::append(SVar23,SVar26);
    _swift_bridgeObjectRelease(SVar23.bridgeObject);
    return local_78;
  case 5:
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10083547c(0,lVar17,0);
      param_1 = param_1 + 0x28;
      pcVar12 = local_78.str;
      do {
        uVar8 = *(undefined8 *)(param_1 + -8);
        uVar3 = *(undefined8 *)param_1;
        local_78.str = pcVar12;
        uVar16 = *(ulong *)(pcVar12 + 0x10);
        uVar19 = *(ulong *)(pcVar12 + 0x18);
        _swift_bridgeObjectRetain(uVar3);
        if (uVar19 >> 1 <= uVar16) {
          FUN_10083547c(1 < uVar19,uVar16 + 1,1);
          pcVar12 = local_78.str;
        }
        param_1 = param_1 + 0x10;
        *(ulong *)(pcVar12 + 0x10) = uVar16 + 1;
        *(undefined8 *)(pcVar12 + uVar16 * 0x10 + 0x20) = uVar8;
        *(undefined8 *)(pcVar12 + uVar16 * 0x10 + 0x28) = uVar3;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    local_78.str = pcVar12;
    FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
    FUN_1007ff838();
    separator.bridgeObject = &SUB_e200000000000000;
    separator.str = (char *)0x202c;
    SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(separator);
    goto LAB_100801e64;
  case 6:
    puVar10 = &DAT_100c7ba38;
    _swift_getKeyPath(&DAT_100c7ba38);
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 == 0) {
      _swift_release(puVar10);
      pcVar12 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10083547c(0,lVar17,0);
      pcVar11 = param_1 + 0x20;
      do {
        pcVar12 = local_68;
        local_80 = *(undefined8 *)pcVar11;
        _swift_getAtKeyPath(&local_78,&local_80,puVar10);
        pcVar14 = local_78.str;
        pvVar5 = local_78.bridgeObject;
        uVar16 = *(ulong *)(pcVar12 + 0x10);
        local_68 = pcVar12;
        if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar16) {
          FUN_10083547c(1 < *(ulong *)(pcVar12 + 0x18),uVar16 + 1,1);
        }
        pcVar12 = local_68;
        *(ulong *)(local_68 + 0x10) = uVar16 + 1;
        *(char **)(local_68 + uVar16 * 0x10 + 0x20) = pcVar14;
        *(void **)(local_68 + uVar16 * 0x10 + 0x28) = pvVar5;
        lVar17 = lVar17 + -1;
        pcVar11 = pcVar11 + 8;
      } while (lVar17 != 0);
      _swift_release(puVar10);
    }
    break;
  case 7:
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10083547c(0,lVar17,0);
      pcVar12 = local_78.str;
      pdVar18 = (double *)(param_1 + 0x20);
      do {
        SVar23 = double::get_description(*pdVar18);
        local_78.str = pcVar12;
        uVar16 = *(ulong *)(pcVar12 + 0x10);
        if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar16) {
          FUN_10083547c(1 < *(ulong *)(pcVar12 + 0x18),uVar16 + 1,1);
          pcVar12 = local_78.str;
        }
        *(ulong *)(pcVar12 + 0x10) = uVar16 + 1;
        *(String *)(pcVar12 + uVar16 * 0x10 + 0x20) = SVar23;
        lVar17 = lVar17 + -1;
        pdVar18 = pdVar18 + 1;
      } while (lVar17 != 0);
    }
    break;
  case 8:
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      local_78.str = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10083547c(0,lVar17,0);
      param_1 = param_1 + 0x20;
      lVar20 = *(ulong *)(local_78.str + 0x10) << 4;
      uVar16 = *(ulong *)(local_78.str + 0x10);
      pcVar12 = local_78.str;
      do {
        uVar8 = 0x65757274;
        if (*param_1 == '\0') {
          uVar8 = 0x65736c6166;
        }
        puVar1 = &DAT_e400000000000000;
        if (*param_1 == '\0') {
          puVar1 = &DAT_e500000000000000;
        }
        local_78.str = pcVar12;
        uVar19 = uVar16 + 1;
        if (*(ulong *)(pcVar12 + 0x18) >> 1 <= uVar16) {
          FUN_10083547c(1 < *(ulong *)(pcVar12 + 0x18),uVar19,1);
          pcVar12 = local_78.str;
        }
        *(ulong *)(pcVar12 + 0x10) = uVar19;
        *(undefined8 *)(pcVar12 + lVar20 + 0x20) = uVar8;
        *(undefined1 **)(pcVar12 + lVar20 + 0x28) = puVar1;
        lVar20 = lVar20 + 0x10;
        param_1 = param_1 + 1;
        lVar17 = lVar17 + -1;
        uVar16 = uVar19;
      } while (lVar17 != 0);
    }
    break;
  case 9:
    lVar17 = *(long *)(param_1 + 0x10);
    if (lVar17 != 0) {
      local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
      FUN_10083547c(0,lVar17,0);
      pcVar11 = param_1 + 0x20;
      do {
        pcVar14 = local_68;
        local_80 = *(undefined8 *)pcVar11;
        FUN_100801ebc(&local_78,&local_80);
        pcVar12 = local_78.str;
        pvVar5 = local_78.bridgeObject;
        uVar16 = *(ulong *)(pcVar14 + 0x10);
        local_68 = pcVar14;
        if (*(ulong *)(pcVar14 + 0x18) >> 1 <= uVar16) {
          FUN_10083547c(1 < *(ulong *)(pcVar14 + 0x18),uVar16 + 1,1);
        }
        *(ulong *)(local_68 + 0x10) = uVar16 + 1;
        *(char **)(local_68 + uVar16 * 0x10 + 0x20) = pcVar12;
        *(void **)(local_68 + uVar16 * 0x10 + 0x28) = pvVar5;
        lVar17 = lVar17 + -1;
        pcVar12 = local_68;
        pcVar11 = pcVar11 + 8;
      } while (lVar17 != 0);
    }
  }
  local_78.str = pcVar12;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  FUN_1007ff838();
  SVar21.bridgeObject = &SUB_e200000000000000;
  SVar21.str = (char *)0x202c;
  SVar23 = (extension_Swift)::Swift::BidirectionalCollection::_joined(SVar21);
LAB_100801e64:
  _swift_bridgeObjectRelease(pcVar12);
  return SVar23;
}



/* Address: 0x100801ebc | FUN_100801ebc */

void FUN_100801ebc(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  code *pcVar3;
  undefined8 uVar4;
  __int64 _Var5;
  char *pcVar6;
  _StringGuts _Var7;
  char *pcVar8;
  undefined *puVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  String SVar18;
  String local_70;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar13 = *param_2;
  uVar10 = *(ulong *)(lVar13 + 0x10);
  uVar11 = uVar10;
  if (0x1f < uVar10) {
    uVar11 = 0x20;
  }
  if (uVar10 != 0) {
    _swift_bridgeObjectRetain(lVar13);
    uVar4 = 0;
    FUN_10083547c(0,uVar11,0);
    lVar12 = 0x20;
    FUN_100803704();
    do {
      if (uVar11 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100802110);
        (*pcVar3)();
      }
      local_70.str._0_1_ = *(undefined1 *)(lVar13 + lVar12);
      pcVar8 = (char *)0x0;
      puVar9 = PTR___type_metadata_for_Swift_UInt8_100eadcd0;
      SVar14 = Swift::String::_init
                         (&local_70,0x10,0,PTR___type_metadata_for_Swift_UInt8_100eadcd0,uVar4);
      _Var5 = Swift::String::get_count(SVar14);
      if (_Var5 == 1) {
        local_70.bridgeObject = (void *)0xe100000000000000;
        local_70.str = &DAT_00000030;
        SVar15.bridgeObject = puVar9;
        SVar15.str = pcVar8;
        Swift::String::append(SVar14,SVar15);
        _swift_bridgeObjectRelease(SVar14.bridgeObject);
        SVar14 = local_70;
      }
      uVar10 = *(ulong *)(puVar1 + 0x10);
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar10) {
        FUN_10083547c(1 < *(ulong *)(puVar1 + 0x18),uVar10 + 1,1);
      }
      *(ulong *)(puVar1 + 0x10) = uVar10 + 1;
      *(String *)(puVar1 + uVar10 * 0x10 + 0x20) = SVar14;
      lVar12 = lVar12 + 1;
      uVar11 = uVar11 - 1;
    } while (uVar11 != 0);
    _swift_bridgeObjectRelease(lVar13);
  }
  local_70.str = puVar1;
  pcVar8 = &DAT_100fe6f38;
  FUN_1000f7830(&DAT_100fe6f38,&DAT_100c7b090);
  pcVar6 = pcVar8;
  FUN_1007ff838();
  SVar14 = (extension_Swift)::Swift::BidirectionalCollection::_joined
                     ((String)(ZEXT816(0xe000000000000000) << 0x40));
  _Var7.unknown = SVar14.bridgeObject;
  _swift_bridgeObjectRelease(puVar1);
  local_70.str = (char *)0x0;
  local_70.bridgeObject = (void *)0xe000000000000000;
  Swift::_StringGuts::grow(0x14,_Var7);
  pvVar2 = local_70.bridgeObject;
  SVar15 = Swift::CustomStringConvertible::get_description();
  _swift_bridgeObjectRelease(pvVar2);
  SVar16.bridgeObject = (void *)0x8000000100db1cc0;
  SVar16.str = (char *)0xd000000000000010;
  SVar17.bridgeObject = pcVar6;
  SVar17.str = pcVar8;
  local_70 = SVar15;
  Swift::String::append(SVar16,SVar17);
  SVar18.bridgeObject = pcVar6;
  SVar18.str = pcVar8;
  Swift::String::append(SVar14,SVar18);
  _swift_bridgeObjectRelease(SVar14.bridgeObject);
  *param_1 = local_70.str;
  param_1[1] = local_70.bridgeObject;
  return;
}



/* Address: 0x100802110 | thunk_FUN_100802964 */

void thunk_FUN_100802964(void)

{
  FUN_100802964();
  return;
}



/* Address: 0x100802114 | FUN_100802114 */

Hasher FUN_100802114(Hasher param_1,Hasher param_2,undefined *param_3,undefined *param_4,
                    undefined8 param_5,ulong param_6)

{
  uint uVar1;
  undefined1 in_ZR;
  Hasher HVar2;
  undefined *puVar3;
  Hasher HVar4;
  byte *pbVar5;
  Hasher unaff_x21;
  undefined *unaff_x22;
  undefined8 *unaff_x23;
  String SVar6;
  String SVar7;
  
  HVar2.unknown = param_1.unknown;
  HVar4.unknown = param_2.unknown;
  puVar3 = (undefined *)((ulong)param_4 & 0xff);
  pbVar5 = &switchD_100802148::switchdataD_100c7b4b2;
  switch((undefined *)((ulong)param_4 & 0xff)) {
  default:
    HVar2.unknown = (undefined *)0x0;
  case (undefined *)0x26:
  case (undefined *)0x34:
  case (undefined *)0x74:
  case (undefined *)0xac:
  case (undefined *)0xc6:
  case (undefined *)0xd4:
    unaff_x21.unknown = param_3;
  case (undefined *)0xcf:
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
  case (undefined *)0x24:
  case (undefined *)0x4c:
  case (undefined *)0x8c:
  case (undefined *)0x8e:
  case (undefined *)0xc4:
  case (undefined *)0xec:
  case (undefined *)0x1c:
  case (undefined *)0x44:
  case (undefined *)0x4e:
  case (undefined *)0x84:
  case (undefined *)0xbc:
  case (undefined *)0xe4:
  case (undefined *)0xee:
  case (undefined *)0xca:
    param_3 = unaff_x21.unknown;
switchD_100802148_caseD_58:
    SVar6.bridgeObject = param_3;
    SVar6.str = param_2.unknown;
    Swift::String::hash(param_1,SVar6);
    return (Hasher)param_1.unknown;
  case (undefined *)0x1:
  case (undefined *)0xd:
    HVar2.unknown = param_2.unknown;
    Swift::Hasher::_combine(1,param_2);
    Swift::Hasher::_combine((__uint64)param_2.unknown,HVar2);
    HVar2.unknown = param_2.unknown;
    break;
  case (undefined *)0x2:
  case (undefined *)0x9e:
    Swift::Hasher::_combine(2,param_2);
    in_ZR = ((ulong)param_2.unknown & 0x7fffffffffffffff) == 0;
  case (undefined *)0x13:
    param_1.unknown = (undefined *)0x0;
    if (!(bool)in_ZR) {
      param_1.unknown = param_2.unknown;
    }
  case (undefined *)0xba:
    Swift::Hasher::_combine((__uint64)param_1.unknown,HVar4);
    HVar2.unknown = param_1.unknown;
    break;
  case (undefined *)0x3:
    Swift::Hasher::_combine(3,param_2);
  case (undefined *)0x18:
  case (undefined *)0x2c:
  case (undefined *)0x40:
  case (undefined *)0x54:
  case (undefined *)0x5c:
  case (undefined *)0x64:
  case (undefined *)0x6c:
  case (undefined *)0x80:
  case (undefined *)0x94:
  case (undefined *)0x9c:
  case (undefined *)0xa4:
  case (undefined *)0xb8:
  case (undefined *)0xcc:
  case (undefined *)0xe0:
  case (undefined *)0xf4:
  case (undefined *)0xfc:
    uVar1 = (uint)param_2.unknown & 1;
    HVar2.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::_combine((__uint8)uVar1,HVar4);
    break;
  case (undefined *)0x4:
    Swift::Hasher::_combine(4,param_2);
  case (undefined *)0xe:
                    /* WARNING: Load size is inaccurate */
    unaff_x21.unknown = param_2.unknown[0x10];
    HVar2.unknown = unaff_x21.unknown;
    Swift::Hasher::_combine((__uint64)unaff_x21.unknown,HVar4);
    if (unaff_x21.unknown != (undefined *)0x0) {
switchD_100802148_caseD_b6:
      pbVar5 = param_2.unknown + 0x20;
      param_2.unknown = HVar4.unknown;
      do {
        HVar4.unknown = pbVar5 + 1;
        HVar2.unknown = (undefined *)(ulong)*pbVar5;
        Swift::Hasher::_combine(*pbVar5,param_2);
switchD_100802148_caseD_fe:
        unaff_x21.unknown = unaff_x21.unknown + -1;
        pbVar5 = HVar4.unknown;
      } while (unaff_x21.unknown != (undefined *)0x0);
    }
    break;
  case (undefined *)0x5:
    HVar2.unknown = (undefined *)0x5;
  case (undefined *)0x11:
    Swift::Hasher::_combine((__uint64)HVar2.unknown,param_2);
switchD_100802148_caseD_d0:
                    /* WARNING: Load size is inaccurate */
    unaff_x21.unknown = param_2.unknown[0x10];
    HVar2.unknown = unaff_x21.unknown;
    Swift::Hasher::_combine((__uint64)unaff_x21.unknown,HVar4);
    if (unaff_x21.unknown != (undefined *)0x0) {
      unaff_x23 = (undefined8 *)(param_2.unknown + 0x28);
switchD_100802148_caseD_66:
      do {
        param_2.unknown = (undefined *)unaff_x23[-1];
        unaff_x22 = (undefined *)*unaff_x23;
        _swift_bridgeObjectRetain(unaff_x22);
switchD_100802148_caseD_3c:
        HVar2.unknown = unaff_x22;
        SVar7.bridgeObject = HVar2.unknown;
        SVar7.str = param_2.unknown;
        Swift::String::hash(param_1,SVar7);
        _swift_bridgeObjectRelease(HVar2.unknown);
        unaff_x23 = unaff_x23 + 2;
        unaff_x21.unknown = unaff_x21.unknown + -1;
      } while (unaff_x21.unknown != (undefined *)0x0);
    }
    break;
  case (undefined *)0x6:
    Swift::Hasher::_combine(6,param_2);
                    /* WARNING: Load size is inaccurate */
    unaff_x21.unknown = param_2.unknown[0x10];
  case (undefined *)0xb:
    HVar2.unknown = unaff_x21.unknown;
    Swift::Hasher::_combine((__uint64)unaff_x21.unknown,HVar4);
    if (unaff_x21.unknown != (undefined *)0x0) {
      param_2.unknown = param_2.unknown + 0x20;
      do {
                    /* WARNING: Load size is inaccurate */
        HVar2.unknown = *param_2.unknown;
        param_2.unknown = (undefined *)((long)param_2.unknown + 8);
switchD_100802148_caseD_f:
        Swift::Hasher::_combine((__uint64)HVar2.unknown,HVar4);
        unaff_x21.unknown = unaff_x21.unknown + -1;
      } while (unaff_x21.unknown != (undefined *)0x0);
    }
    break;
  case (undefined *)0x7:
  case (undefined *)0xc:
    Swift::Hasher::_combine(7,param_2);
    FUN_100802900(param_1.unknown,param_2.unknown);
    return (Hasher)param_1.unknown;
  case (undefined *)0x8:
    Swift::Hasher::_combine(8,param_2);
                    /* WARNING: Load size is inaccurate */
    unaff_x21.unknown = param_2.unknown[0x10];
  case (undefined *)0x82:
    param_1.unknown = unaff_x21.unknown;
    Swift::Hasher::_combine((__uint64)unaff_x21.unknown,HVar4);
switchD_100802148_caseD_2f:
    HVar2.unknown = param_1.unknown;
    if (unaff_x21.unknown != (undefined *)0x0) {
switchD_100802148_caseD_67:
      pbVar5 = param_2.unknown + 0x20;
      do {
        param_2.unknown = pbVar5 + 1;
        param_1.unknown = (undefined *)(ulong)*pbVar5;
switchD_100802148_caseD_9f:
        Swift::Hasher::_combine((__uint8)param_1.unknown,HVar4);
        unaff_x21.unknown = unaff_x21.unknown + -1;
        HVar2.unknown = param_1.unknown;
        pbVar5 = param_2.unknown;
      } while (unaff_x21.unknown != (undefined *)0x0);
    }
    break;
  case (undefined *)0x9:
    Swift::Hasher::_combine(9,param_2);
  case (undefined *)0xf6:
    FUN_10080287c(param_1.unknown,param_2.unknown);
    return (Hasher)param_1.unknown;
  case (undefined *)0xf:
    goto switchD_100802148_caseD_f;
  case (undefined *)0x10:
    Swift::Hasher::init(0);
    HVar2.unknown = &stack0xffffffffffffffc8;
    unaff_x21.unknown = param_1.unknown;
  case (undefined *)0x92:
  case (undefined *)0x9a:
  case (undefined *)0xa2:
    FUN_100802114(HVar2.unknown,unaff_x21.unknown,param_1.unknown,param_2.unknown);
    puVar3 = (undefined *)Swift::Hasher::_finalize(HVar2);
    return (Hasher)puVar3;
  case (undefined *)0x12:
    goto switchD_100802148_caseD_12;
  case (undefined *)0x16:
    goto switchD_100802148_caseD_16;
  case (undefined *)0x17:
  case (undefined *)0x2b:
  case (undefined *)0x3f:
  case (undefined *)0x53:
  case (undefined *)0x5b:
  case (undefined *)0x63:
  case (undefined *)0x6b:
  case (undefined *)0x7f:
  case (undefined *)0x93:
  case (undefined *)0x9b:
  case (undefined *)0xa3:
  case (undefined *)0xb7:
  case (undefined *)0xcb:
    goto switchD_100802148_caseD_17;
  case (undefined *)0x1a:
  case (undefined *)0x5e:
    goto switchD_100802148_caseD_1a;
  case (undefined *)0x1b:
  case (undefined *)0x43:
  case (undefined *)0x83:
  case (undefined *)0xbb:
    goto switchD_100802148_caseD_1b;
  case (undefined *)0x2f:
  case (undefined *)0x5f:
    goto switchD_100802148_caseD_2f;
  case (undefined *)0x30:
  case (undefined *)0x60:
  case (undefined *)0x68:
  case (undefined *)0x70:
  case (undefined *)0xa0:
  case (undefined *)0xa8:
    FUN_1007fb2a0();
    return (Hasher)param_1.unknown;
  case (undefined *)0x31:
  case (undefined *)0x61:
  case (undefined *)0x69:
  case (undefined *)0x71:
  case (undefined *)0xa1:
  case (undefined *)0xa9:
  case (undefined *)0xd1:
    goto switchD_100802148_caseD_31;
  case (undefined *)0x3a:
  case (undefined *)0xce:
  case (undefined *)0xe3:
    break;
  case (undefined *)0x3b:
  case (undefined *)0x7b:
  case (undefined *)0xb3:
    goto switchD_100802148_caseD_3b;
  case (undefined *)0x3c:
  case (undefined *)0x7c:
  case (undefined *)0xa6:
  case (undefined *)0xb4:
  case (undefined *)0xda:
  case (undefined *)0xdc:
    goto switchD_100802148_caseD_3c;
  case (undefined *)0x3e:
    goto switchD_100802148_caseD_3e;
  case (undefined *)0x42:
                    /* WARNING: Load size is inaccurate */
    puVar3 = *param_1.unknown;
    pbVar5 = *(byte **)(param_1.unknown + 8);
  case (undefined *)0x7e:
    HVar4.unknown = pbVar5;
    HVar2.unknown = puVar3;
                    /* WARNING: Load size is inaccurate */
    param_4 = *param_2.unknown;
    param_5 = *(undefined8 *)(param_2.unknown + 8);
    param_6 = (ulong)(byte)param_2.unknown[0x10];
    param_3 = (undefined *)(ulong)(byte)param_1.unknown[0x10];
switchD_100802148_caseD_12:
    FUN_100802964(HVar2.unknown,HVar4.unknown,param_3,param_4,param_5,param_6);
    return (Hasher)HVar2.unknown;
  case (undefined *)0x52:
  case (undefined *)0x5a:
  case (undefined *)0x62:
  case (undefined *)0x6a:
  case (undefined *)0x96:
    param_1.unknown = (undefined *)0x0;
  case (undefined *)0x2e:
    Swift::Hasher::init((__int64)param_1.unknown);
    param_1.unknown = &stack0xffffffffffffffc8;
switchD_100802148_caseD_df:
switchD_100802148_caseD_17:
    FUN_100802114(param_1.unknown,param_2.unknown);
    param_1.unknown = (undefined *)Swift::Hasher::_finalize(param_1);
switchD_100802148_caseD_3e:
    return (Hasher)param_1.unknown;
  case (undefined *)0x56:
    goto switchD_100802148_caseD_56;
  case (undefined *)0x57:
  case (undefined *)0xf7:
  case (undefined *)0x97:
switchD_100802148_caseD_de:
    HVar4.unknown = param_3;
    HVar2.unknown = param_2.unknown;
    unaff_x21.unknown = param_1.unknown;
switchD_100802148_caseD_e2:
    Swift::Hasher::init(0);
switchD_100802148_caseD_31:
    FUN_100802114(&stack0xffffffffffffffc8,unaff_x21.unknown,HVar2.unknown,HVar4.unknown);
    uVar1 = (uint)HVar4.unknown >> 8 & 1;
    HVar2.unknown = (undefined *)(ulong)uVar1;
    Swift::Hasher::_combine((__uint8)uVar1,unaff_x21);
    puVar3 = (undefined *)Swift::Hasher::_finalize(HVar2);
    return (Hasher)puVar3;
  case (undefined *)0x58:
  case (undefined *)0x98:
  case (undefined *)0xf8:
    goto switchD_100802148_caseD_58;
  case (undefined *)0x66:
    goto switchD_100802148_caseD_66;
  case (undefined *)0x67:
  case (undefined *)0x6f:
    goto switchD_100802148_caseD_67;
  case (undefined *)0x6e:
    goto switchD_100802148_caseD_6e;
  case (undefined *)0x7a:
  case (undefined *)0x2a:
                    /* WARNING: Load size is inaccurate */
    param_2.unknown = *param_1.unknown;
    HVar2.unknown = (undefined *)(ulong)(byte)param_1.unknown[0x10];
    unaff_x21.unknown = *(undefined **)(param_1.unknown + 8);
switchD_100802148_caseD_1a:
    param_3 = unaff_x21.unknown;
    param_4 = HVar2.unknown;
    Swift::Hasher::init((__int64)param_1.unknown);
    param_1.unknown = &stack0xffffffffffffffc8;
switchD_100802148_caseD_3b:
    FUN_100802114(param_1.unknown,param_2.unknown,param_3,param_4);
switchD_100802148_caseD_db:
    param_1.unknown = (undefined *)Swift::Hasher::_finalize(param_1);
switchD_100802148_caseD_16:
switchD_100802148_caseD_56:
switchD_100802148_caseD_6e:
    return (Hasher)param_1.unknown;
  case (undefined *)0x9f:
  case (undefined *)0xa7:
  case (undefined *)0xff:
    goto switchD_100802148_caseD_9f;
  case (undefined *)0xb2:
    HVar4.unknown = param_4;
  case (undefined *)0xf2:
  case (undefined *)0xfa:
    FUN_100802114();
    uVar1 = (uint)HVar4.unknown >> 8 & 1;
    puVar3 = (undefined *)(ulong)uVar1;
    Swift::Hasher::_combine((__uint8)uVar1,param_2);
    return (Hasher)puVar3;
  case (undefined *)0xb6:
    goto switchD_100802148_caseD_b6;
  case (undefined *)0xd0:
    goto switchD_100802148_caseD_d0;
  case (undefined *)0xdb:
    goto switchD_100802148_caseD_db;
  case (undefined *)0xde:
    goto switchD_100802148_caseD_de;
  case (undefined *)0xdf:
  case (undefined *)0xf3:
  case (undefined *)0xfb:
    goto switchD_100802148_caseD_df;
  case (undefined *)0xe2:
    goto switchD_100802148_caseD_e2;
  case (undefined *)0xfe:
    goto switchD_100802148_caseD_fe;
  }
switchD_100802148_caseD_1b:
  return (Hasher)HVar2.unknown;
}



/* Address: 0x1008022f0 | FUN_1008022f0 */

void FUN_1008022f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  Hasher HVar1;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  HVar1.unknown = auStack_78;
  FUN_100802114(HVar1.unknown,param_1,param_2,param_3);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x10080234c | switchD_100802148::caseD_42 */

void switchD_100802148::caseD_42(undefined8 *param_1,undefined8 *param_2)

{
  FUN_100802964(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2));
  return;
}



/* Address: 0x100802368 | FUN_100802368 */

void FUN_100802368(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  Swift::Hasher::init(0);
  HVar4.unknown = auStack_78;
  FUN_100802114(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x1008023c0 | FUN_1008023c0 */

void FUN_1008023c0(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_100802114(param_1,*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x1008023cc | FUN_1008023cc */

void FUN_1008023cc(__int64 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  HVar4.unknown = auStack_78;
  FUN_100802114(HVar4.unknown,uVar1,uVar2,uVar3);
  Swift::Hasher::_finalize(HVar4);
  return;
}



/* Address: 0x100802420 | FUN_100802420 */

undefined8 FUN_100802420(undefined8 param_1)

{
  FUN_1007fb2a0();
  return param_1;
}



/* Address: 0x10080245c | FUN_10080245c */

void FUN_10080245c(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined8 *unaff_x20;
  
  FUN_1007fb2ec(*unaff_x20,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  *unaff_x20 = param_1;
  unaff_x20[1] = param_2;
  *(undefined1 *)(unaff_x20 + 2) = param_3;
  return;
}



/* Address: 0x10080249c | FUN_10080249c */

uint FUN_10080249c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  return param_3 >> 8 & 1;
}



/* Address: 0x1008024a4 | FUN_1008024a4 */

void FUN_1008024a4(void)

{
  return;
}



/* Address: 0x1008024bc | FUN_1008024bc */

uint FUN_1008024bc(uint param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                  undefined8 param_5,uint param_6)

{
  FUN_100802964();
  return param_1 & ((param_3 ^ param_6) & 0x100) == 0;
}



/* Address: 0x1008024f0 | FUN_1008024f0 */

void FUN_1008024f0(undefined8 param_1,Hasher param_2,undefined8 param_3,undefined8 param_4)

{
  FUN_100802114();
  Swift::Hasher::_combine((byte)((ulong)param_4 >> 8) & 1,param_2);
  return;
}



/* Address: 0x10080251c | FUN_10080251c */

void FUN_10080251c(Hasher param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  Hasher HVar2;
  undefined1 auStack_78 [72];
  
  Swift::Hasher::init(0);
  FUN_100802114(auStack_78,param_1.unknown,param_2,param_3);
  uVar1 = (uint)param_3 >> 8 & 1;
  HVar2.unknown = (undefined *)(ulong)uVar1;
  Swift::Hasher::_combine((__uint8)uVar1,param_1);
  Swift::Hasher::_finalize(HVar2);
  return;
}



/* Address: 0x100802584 | FUN_100802584 */

uint FUN_100802584(undefined8 *param_1,undefined8 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  
  uVar3 = *param_1;
  bVar1 = *(byte *)((long)param_1 + 0x11);
  bVar2 = *(byte *)((long)param_2 + 0x11);
  FUN_100802964(uVar3,param_1[1],*(undefined1 *)(param_1 + 2),*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2));
  return (uint)uVar3 & ((bVar1 ^ bVar2) ^ 0xffffffff) & 1;
}



/* Address: 0x1008025cc | FUN_1008025cc */

void FUN_1008025cc(void)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  Hasher HVar5;
  undefined1 auStack_78 [72];
  
  HVar4.unknown = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  bVar2 = *(byte *)((long)unaff_x20 + 0x11);
  HVar5.unknown = (undefined *)(ulong)bVar2;
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  Swift::Hasher::init(0);
  FUN_100802114(auStack_78,HVar4.unknown,uVar1,uVar3);
  Swift::Hasher::_combine(bVar2,HVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x100802634 | FUN_100802634 */

void FUN_100802634(undefined8 param_1)

{
  __uint8 _Var1;
  Hasher HVar2;
  undefined8 *unaff_x20;
  
  HVar2.unknown = (undefined *)*unaff_x20;
  _Var1 = *(__uint8 *)((long)unaff_x20 + 0x11);
  FUN_100802114(param_1,HVar2.unknown,unaff_x20[1],*(undefined1 *)(unaff_x20 + 2));
  Swift::Hasher::_combine(_Var1,HVar2);
  return;
}



/* Address: 0x100802674 | FUN_100802674 */

void FUN_100802674(__int64 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  undefined1 uVar3;
  Hasher HVar4;
  undefined8 *unaff_x20;
  Hasher HVar5;
  undefined1 auStack_78 [72];
  
  HVar4.unknown = (undefined *)*unaff_x20;
  uVar1 = unaff_x20[1];
  bVar2 = *(byte *)((long)unaff_x20 + 0x11);
  HVar5.unknown = (undefined *)(ulong)bVar2;
  uVar3 = *(undefined1 *)(unaff_x20 + 2);
  Swift::Hasher::init(param_1);
  FUN_100802114(auStack_78,HVar4.unknown,uVar1,uVar3);
  Swift::Hasher::_combine(bVar2,HVar4);
  Swift::Hasher::_finalize(HVar5);
  return;
}



/* Address: 0x1008026d8 | FUN_1008026d8 */

undefined1  [16] FUN_1008026d8(char *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  char *pcVar2;
  void *pvVar3;
  undefined *puVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  undefined1 local_41;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_41 = SUB81(param_3,0);
  if (((uint)param_3 >> 8 & 1) == 0) {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    SVar5.bridgeObject = (void *)0xe100000000000000;
    SVar5.str = (char *)0x5b;
    SVar10.bridgeObject = param_4;
    SVar10.str = param_3;
    Swift::String::append(SVar5,SVar10);
    pcVar2 = "\x01\x02";
    puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_41,&local_40,&DAT_100f046d8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    SVar6.bridgeObject = &SUB_e200000000000000;
    SVar6.str = (char *)0x203a;
    SVar11.bridgeObject = puVar4;
    SVar11.str = pcVar2;
    Swift::String::append(SVar6,SVar11);
    FUN_1008017c0();
    SVar7.bridgeObject = param_2.unknown;
    SVar7.str = param_1;
    SVar12.bridgeObject = puVar4;
    SVar12.str = param_3;
    Swift::String::append(SVar7,SVar12);
    _swift_bridgeObjectRelease(param_2.unknown);
    pcVar2 = (char *)0x5d;
    pvVar3 = (void *)0xe100000000000000;
  }
  else {
    local_40 = 0;
    uStack_38 = 0xe000000000000000;
    Swift::_StringGuts::grow(0x10,param_2);
    SVar8.bridgeObject = (void *)0xe100000000000000;
    SVar8.str = (char *)0x5b;
    SVar13.bridgeObject = param_4;
    SVar13.str = param_3;
    Swift::String::append(SVar8,SVar13);
    param_3 = "\x01\x02";
    puVar4 = PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860;
    Swift::__print_unlocked
              (&local_41,&local_40,&DAT_100f046d8,
               PTR___type_metadata_for_Swift_DefaultStringInterpolation_100ead860,
               PTR___protocol_witness_table_for_Swift_DefaultStringInterpolation___Swift_TextOutputStream_in_Swift_100ead870
              );
    pcVar2 = (char *)0x43414445523c203a;
    pvVar3 = (void *)0xed00005d3e444554;
  }
  SVar9.bridgeObject = pvVar3;
  SVar9.str = pcVar2;
  SVar14.bridgeObject = puVar4;
  SVar14.str = param_3;
  Swift::String::append(SVar9,SVar14);
  auVar1._8_8_ = uStack_38;
  auVar1._0_8_ = local_40;
  return auVar1;
}



/* Address: 0x100802810 | FUN_100802810 */

void FUN_100802810(void)

{
  uint uVar1;
  undefined8 *unaff_x20;
  
  uVar1 = 0x100;
  if (*(char *)((long)unaff_x20 + 0x11) == '\0') {
    uVar1 = 0;
  }
  FUN_1008026d8(*unaff_x20,unaff_x20[1],uVar1 | *(byte *)(unaff_x20 + 2));
  return;
}



/* Address: 0x100802830 | FUN_100802830 */

void FUN_100802830(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = param_2[1];
  *param_1 = *param_2;
  param_1[1] = uVar1;
  *(undefined2 *)(param_1 + 2) = 0;
  return;
}



/* Address: 0x100802840 | FUN_100802840 */

void FUN_100802840(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 1;
  return;
}



/* Address: 0x100802854 | FUN_100802854 */

void FUN_100802854(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 2;
  return;
}



/* Address: 0x100802868 | FUN_100802868 */

void FUN_100802868(ulong *param_1,byte *param_2)

{
  *param_1 = (ulong)*param_2;
  param_1[1] = 0;
  *(undefined2 *)(param_1 + 2) = 3;
  return;
}



/* Address: 0x10080287c | FUN_10080287c */

void FUN_10080287c(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  __uint64 _Var3;
  long lVar4;
  long lVar5;
  __uint8 *p_Var6;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    _Var3 = 0;
    do {
      lVar5 = *(long *)(param_2.unknown + _Var3 * 8 + 0x20);
      Swift::Hasher::_combine(*(__uint64 *)(lVar5 + 0x10),HVar1);
      lVar4 = *(long *)(lVar5 + 0x10);
      if (lVar4 != 0) {
        p_Var6 = (__uint8 *)(lVar5 + 0x20);
        do {
          Swift::Hasher::_combine(*p_Var6,HVar1);
          lVar4 = lVar4 + -1;
          p_Var6 = p_Var6 + 1;
        } while (lVar4 != 0);
      }
      _Var3 = _Var3 + 1;
    } while (_Var3 != _Var2);
  }
  return;
}



/* Address: 0x100802900 | FUN_100802900 */

void FUN_100802900(undefined8 param_1,Hasher param_2)

{
  Hasher HVar1;
  __uint64 _Var2;
  double *pdVar3;
  double dVar4;
  
  _Var2 = *(__uint64 *)(param_2.unknown + 0x10);
  HVar1.unknown = param_2.unknown;
  Swift::Hasher::_combine(_Var2,param_2);
  if (_Var2 != 0) {
    pdVar3 = (double *)(param_2.unknown + 0x20);
    do {
      dVar4 = 0.0;
      if (*pdVar3 != 0.0) {
        dVar4 = *pdVar3;
      }
      Swift::Hasher::_combine((__uint64)dVar4,HVar1);
      _Var2 = _Var2 - 1;
      pdVar3 = pdVar3 + 1;
    } while (_Var2 != 0);
  }
  return;
}



/* Address: 0x100802964 | FUN_100802964 */

byte * FUN_100802964(byte *param_1,_StringGuts param_2,undefined *param_3,undefined *param_4,
                    undefined *param_5,uint param_6)

{
  uint uVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  undefined1 in_ZR;
  byte in_CY;
  bool bVar5;
  _StringGuts _Var6;
  _StringGuts _Var7;
  ulong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  double *pdVar11;
  byte *pbVar12;
  double *pdVar13;
  byte *pbVar14;
  byte *pbVar15;
  byte *pbVar16;
  byte in_w12;
  byte *in_x13;
  _StringGuts unaff_x19;
  _StringGuts unaff_x20;
  long *unaff_x21;
  ulong unaff_x22;
  undefined8 unaff_x30;
  
  puVar4 = &stack0xffffffffffffffd0;
  pbVar9 = (byte *)((ulong)param_3 & 0xff);
  pbVar10 = &switchD_10080298c::switchdataD_100c7b4bc;
  pbVar16 = (byte *)(ulong)pbVar9[0x100c7b4bc];
  pbVar15 = (byte *)((long)pbVar16 * 4 + 0x100802990);
  _Var7.unknown = param_1;
  _Var6.unknown = param_2.unknown;
  pbVar12 = pbVar10;
  pbVar14 = pbVar15;
  switch(pbVar9) {
  default:
    in_ZR = (param_6 & 0xff) == 0;
  case (byte *)0x1c:
  case (byte *)0x2a:
  case (byte *)0x6a:
  case (byte *)0xa2:
  case (byte *)0xbc:
  case (byte *)0xca:
    if ((bool)in_ZR) {
switchD_10080298c_caseD_c5:
      in_ZR = param_1 == param_4;
switchD_10080298c_caseD_1a:
      param_3 = param_4;
      if (!(bool)in_ZR) {
switchD_10080298c_caseD_4e:
        _Var7.unknown._0_1_ =
             Swift::_stringCompareWithSmolCheck
                       ((_StringGuts)param_1,param_2,(_StringComparisonResult)(__int8)param_3);
        _Var7.unknown._1_7_ = 0;
        return _Var7.unknown;
      }
switchD_10080298c_caseD_12:
      in_ZR = param_2.unknown == param_5;
switchD_10080298c_caseD_c0:
      param_3 = param_4;
      if (!(bool)in_ZR) goto switchD_10080298c_caseD_4e;
      goto switchD_10080298c_caseD_24;
    }
    break;
  case (byte *)0x1:
    pbVar9 = (byte *)(ulong)((param_6 & 0xff) == 1 && param_1 == param_4);
    goto switchD_10080298c_caseD_d;
  case (byte *)0x2:
    uVar1 = (uint)((double)param_1 == (double)param_4);
    if ((param_6 & 0xff) != 2) {
      uVar1 = 0;
    }
    pbVar9 = (byte *)(ulong)uVar1;
    goto switchD_10080298c_caseD_d;
  case (byte *)0x3:
    uVar1 = (uint)param_4 ^ (uint)param_1 ^ 1;
    if ((param_6 & 0xff) != 3) {
      uVar1 = 0;
    }
    pbVar9 = (byte *)(ulong)uVar1;
    goto switchD_10080298c_caseD_d;
  case (byte *)0x4:
    if ((param_6 & 0xff) == 4) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      goto switchD_10080298c_caseD_ac;
    }
    break;
  case (byte *)0x5:
    if (((param_6 & 0xff) == 5) &&
       (unaff_x19.unknown = *(undefined **)(param_1 + 0x10),
       unaff_x19.unknown == *(undefined **)(param_4 + 0x10))) goto switchD_10080298c_caseD_78;
    break;
  case (byte *)0x6:
    if ((param_6 & 0xff) == 6) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      pbVar10 = *(byte **)(param_4 + 0x10);
      goto switchD_10080298c_caseD_88;
    }
    break;
  case (byte *)0x7:
    pbVar9 = (byte *)(ulong)(param_6 & 0xff);
  case (byte *)0xc6:
    if ((int)pbVar9 == 7) {
      pbVar9 = *(byte **)(param_1 + 0x10);
      in_ZR = pbVar9 == *(byte **)(param_4 + 0x10);
switchD_10080298c_caseD_5c:
      if ((bool)in_ZR) {
        if ((pbVar9 != (byte *)0x0) && (param_1 != param_4)) {
switchD_10080298c_caseD_32:
          pdVar11 = (double *)(param_1 + 0x20);
          pdVar13 = (double *)(param_4 + 0x20);
          pbVar10 = pbVar9;
          do {
            pbVar10 = pbVar10 + -1;
            pbVar9 = (byte *)(ulong)(*pdVar11 == *pdVar13);
            if (*pdVar11 != *pdVar13) break;
            pdVar11 = pdVar11 + 1;
            pdVar13 = pdVar13 + 1;
          } while (pbVar10 != (byte *)0x0);
          goto switchD_10080298c_caseD_d;
        }
        goto switchD_10080298c_caseD_24;
      }
    }
    break;
  case (byte *)0x8:
    if (((param_6 & 0xff) == 8) &&
       (pbVar15 = *(byte **)(param_1 + 0x10), pbVar15 == *(byte **)(param_4 + 0x10)))
    goto switchD_10080298c_caseD_48;
    break;
  case (byte *)0x9:
    pbVar9 = (byte *)(ulong)(param_6 & 0xff);
  case (byte *)0xb0:
    param_2.unknown = param_4;
    if ((int)pbVar9 == 9) {
switchD_10080298c_caseD_e:
      FUN_100801138(param_1,param_2.unknown);
      return param_1;
    }
    break;
  case (byte *)0xc:
    goto switchD_10080298c_caseD_c;
  case (byte *)0xd:
  case (byte *)0x21:
  case (byte *)0x35:
  case (byte *)0x49:
  case (byte *)0x51:
  case (byte *)0x59:
  case (byte *)0x61:
  case (byte *)0x75:
  case (byte *)0x89:
  case (byte *)0x91:
  case (byte *)0x99:
  case (byte *)0xad:
  case (byte *)0xc1:
    goto switchD_10080298c_caseD_d;
  case (byte *)0xe:
  case (byte *)0x22:
  case (byte *)0x36:
  case (byte *)0x4a:
  case (byte *)0x52:
  case (byte *)0x5a:
  case (byte *)0x62:
  case (byte *)0x76:
  case (byte *)0x8a:
  case (byte *)0x92:
  case (byte *)0x9a:
  case (byte *)0xae:
  case (byte *)0xc2:
  case (byte *)0xd6:
  case (byte *)0xea:
  case (byte *)0xf2:
  case (byte *)0xfa:
    goto switchD_10080298c_caseD_e;
  case (byte *)0x10:
  case (byte *)0x54:
    goto switchD_10080298c_caseD_10;
  case (byte *)0x11:
  case (byte *)0x39:
  case (byte *)0x79:
  case (byte *)0xb1:
    goto switchD_10080298c_caseD_11;
  case (byte *)0x12:
  case (byte *)0x3a:
  case (byte *)0x44:
  case (byte *)0x7a:
  case (byte *)0xb2:
  case (byte *)0xda:
  case (byte *)0xe4:
    goto switchD_10080298c_caseD_12;
  case (byte *)0x1a:
  case (byte *)0x42:
  case (byte *)0x82:
  case (byte *)0x84:
  case (byte *)0xba:
  case (byte *)0xe2:
    goto switchD_10080298c_caseD_1a;
  case (byte *)0x20:
    goto switchD_10080298c_caseD_20;
  case (byte *)0x24:
    goto switchD_10080298c_caseD_24;
  case (byte *)0x25:
  case (byte *)0x55:
switchD_10080298c_caseD_25:
    if (!(bool)in_ZR) goto switchD_10080298c_caseD_5d;
    goto switchD_10080298c_caseD_24;
  case (byte *)0x26:
  case (byte *)0x56:
  case (byte *)0x5e:
  case (byte *)0x66:
  case (byte *)0x96:
  case (byte *)0x9e:
  case (byte *)0xf6:
  case (byte *)0xfe:
    goto switchD_10080298c_caseD_26;
  case (byte *)0x27:
  case (byte *)0x57:
  case (byte *)0x5f:
  case (byte *)0x67:
  case (byte *)0x97:
  case (byte *)0x9f:
  case (byte *)0xc7:
  case (byte *)0xf7:
  case (byte *)0xff:
    goto switchD_10080298c_caseD_27;
  case (byte *)0x30:
  case (byte *)0xc4:
  case (byte *)0xd9:
    goto switchD_10080298c_caseD_30;
  case (byte *)0x31:
  case (byte *)0x71:
  case (byte *)0xa9:
    goto switchD_10080298c_caseD_31;
  case (byte *)0x32:
  case (byte *)0x72:
  case (byte *)0x9c:
  case (byte *)0xaa:
  case (byte *)0xd0:
  case (byte *)0xd2:
    goto switchD_10080298c_caseD_32;
  case (byte *)0x34:
switchD_10080298c_caseD_34:
    pbVar10 = param_4 + 0x20;
    do {
      pbVar15 = pbVar15 + -1;
      bVar2 = *pbVar9;
      bVar3 = *pbVar10;
      if (((bVar2 ^ bVar3) & 1) != 0) break;
      pbVar9 = pbVar9 + 1;
      pbVar10 = pbVar10 + 1;
    } while (pbVar15 != (byte *)0x0);
    pbVar9 = (byte *)(ulong)((bVar2 ^ bVar3) ^ 1);
    goto switchD_10080298c_caseD_d;
  case (byte *)0x38:
    goto switchD_10080298c_caseD_38;
  case (byte *)0x48:
  case (byte *)0x50:
  case (byte *)0x58:
  case (byte *)0x60:
  case (byte *)0x8c:
switchD_10080298c_caseD_48:
    if ((pbVar15 != (byte *)0x0) && (param_1 != param_4)) {
      pbVar9 = param_1 + 0x20;
      goto switchD_10080298c_caseD_34;
    }
    goto switchD_10080298c_caseD_24;
  case (byte *)0x4c:
    goto switchD_10080298c_caseD_4c;
  case (byte *)0x4d:
  case (byte *)0xed:
    goto switchD_10080298c_caseD_4d;
  case (byte *)0x4e:
  case (byte *)0x8e:
  case (byte *)0xee:
    goto switchD_10080298c_caseD_4e;
  case (byte *)0x5c:
    goto switchD_10080298c_caseD_5c;
  case (byte *)0x5d:
  case (byte *)0x65:
switchD_10080298c_caseD_5d:
    unaff_x20.unknown = param_4 + 0x28;
    unaff_x21 = (long *)(param_1 + 0x28);
  case (byte *)0x95:
  case (byte *)0x9d:
  case (byte *)0xf5:
  case (byte *)0xfd:
    do {
      param_1 = (byte *)unaff_x21[-1];
      param_2.unknown = (undefined *)*unaff_x21;
                    /* WARNING: Load size is inaccurate */
      param_3 = *(undefined **)((long)unaff_x20.unknown + -8);
      if (param_1 != param_3 || param_2.unknown != *unaff_x20.unknown) {
switchD_10080298c_caseD_fc:
        bVar5 = Swift::_stringCompareWithSmolCheck
                          ((_StringGuts)param_1,param_2,(_StringComparisonResult)(__int8)param_3);
        if (!bVar5) goto switchD_10080298c_caseD_d5;
      }
      unaff_x20.unknown = unaff_x20.unknown + 0x10;
      unaff_x21 = unaff_x21 + 2;
switchD_10080298c_caseD_30:
      pbVar9 = &DAT_00000001;
switchD_10080298c_caseD_11:
      unaff_x19.unknown = unaff_x19.unknown + -1;
    } while (unaff_x19.unknown != (undefined *)0x0);
    goto switchD_10080298c_caseD_d;
  case (byte *)0x64:
    goto switchD_10080298c_caseD_64;
  case (byte *)0x70:
    puVar4 = &stack0xffffffffffffffa0;
switchD_10080298c_caseD_20:
    *(undefined **)(puVar4 + 0x10) = unaff_x20.unknown;
    *(undefined **)(puVar4 + 0x18) = unaff_x19.unknown;
    *(undefined1 **)(puVar4 + 0x20) = &stack0xfffffffffffffff0;
    *(undefined8 *)(puVar4 + 0x28) = unaff_x30;
switchD_10080298c_caseD_10:
    _Var7.unknown = *(undefined **)param_1;
    _Var6.unknown = *(undefined **)(param_1 + 8);
                    /* WARNING: Load size is inaccurate */
    param_3 = *param_2.unknown;
    param_4 = *(undefined **)(param_2.unknown + 8);
    unaff_x19.unknown = param_2.unknown;
    unaff_x20.unknown = param_1;
switchD_10080298c_caseD_31:
    in_ZR = _Var7.unknown == param_3;
switchD_10080298c_caseD_d1:
    if (!(bool)in_ZR || _Var6.unknown != param_4) {
switchD_10080298c_caseD_c:
      bVar5 = Swift::_stringCompareWithSmolCheck
                        (_Var7,_Var6,(_StringComparisonResult)(__int8)param_3);
      pbVar9 = (byte *)(ulong)bVar5;
switchD_10080298c_caseD_4c:
      param_1 = (undefined *)0x0;
switchD_10080298c_caseD_64:
      if (((ulong)pbVar9 & 1) == 0) {
        return param_1;
      }
    }
    unaff_x21 = (long *)(ulong)*(ushort *)((long)unaff_x20.unknown + 0x20);
    unaff_x22 = (ulong)*(ushort *)(unaff_x19.unknown + 0x20);
    pbVar10 = (byte *)(ulong)(*(ushort *)((long)unaff_x20.unknown + 0x20) & 0xff00);
switchD_10080298c_caseD_26:
    uVar1 = (uint)unaff_x22 & 0xff00;
    if ((int)pbVar10 == 0x200) {
      if (uVar1 == 0x200) {
LAB_100802cb8:
        return &DAT_00000001;
      }
    }
    else if (uVar1 != 0x200) {
      uVar8 = *(ulong *)((long)unaff_x20.unknown + 0x10);
      FUN_100802964(uVar8,*(long *)((long)unaff_x20.unknown + 0x18),unaff_x21,
                    *(undefined8 *)(unaff_x19.unknown + 0x10),
                    *(undefined8 *)(unaff_x19.unknown + 0x18),unaff_x22);
      if (((uVar8 & 1) != 0) && ((((uint)unaff_x22 ^ (uint)unaff_x21) >> 8 & 1) == 0))
      goto LAB_100802cb8;
    }
    return (undefined *)0x0;
  case (byte *)0x74:
    goto switchD_10080298c_caseD_74;
  case (byte *)0x78:
switchD_10080298c_caseD_78:
    if (unaff_x19.unknown != (undefined *)0x0) {
      in_ZR = param_1 == param_4;
      goto switchD_10080298c_caseD_25;
    }
    goto switchD_10080298c_caseD_24;
  case (byte *)0x88:
  case (byte *)0x90:
  case (byte *)0x98:
switchD_10080298c_caseD_88:
    if (pbVar9 == pbVar10) {
      if ((pbVar9 != (byte *)0x0) && (param_1 != param_4)) {
        pbVar12 = param_1 + 0x20;
        pbVar14 = param_4 + 0x20;
        pbVar16 = pbVar9 + -1;
        do {
          pbVar10 = pbVar12 + 8;
          pbVar9 = *(byte **)pbVar12;
          pbVar15 = pbVar14 + 8;
          in_x13 = *(byte **)pbVar14;
          in_CY = pbVar16 != (byte *)0x0;
          pbVar16 = pbVar16 + -1;
switchD_10080298c_caseD_38:
          pbVar12 = pbVar10;
          pbVar14 = pbVar15;
          in_w12 = in_CY;
switchD_10080298c_caseD_74:
          bVar5 = pbVar9 == in_x13;
          pbVar9 = (byte *)(ulong)bVar5;
        } while ((bVar5) && ((in_w12 & 1) != 0));
        goto switchD_10080298c_caseD_d;
      }
      goto switchD_10080298c_caseD_24;
    }
    break;
  case (byte *)0x8d:
    goto switchD_10080298c_caseD_8d;
  case (byte *)0x94:
    goto switchD_10080298c_caseD_94;
  case (byte *)0xa8:
    return param_1;
  case (byte *)0xac:
switchD_10080298c_caseD_ac:
    if (pbVar9 == *(byte **)(param_4 + 0x10)) goto switchD_10080298c_caseD_f4;
    break;
  case (byte *)0xc0:
    goto switchD_10080298c_caseD_c0;
  case (byte *)0xc5:
    goto switchD_10080298c_caseD_c5;
  case (byte *)0xd1:
    goto switchD_10080298c_caseD_d1;
  case (byte *)0xd4:
    param_1 = DAT_100fe6ff8;
  case (byte *)0xd8:
    if (param_1 != (undefined *)0x0) {
      return param_1;
    }
switchD_10080298c_caseD_27:
    pbVar10 = &BYTE_100c7b568;
    _swift_getWitnessTable(&BYTE_100c7b568,&DAT_100f046d8);
    DAT_100fe6ff8 = pbVar10;
    return pbVar10;
  case (byte *)0xd5:
  case (byte *)0xe9:
  case (byte *)0xf1:
  case (byte *)0xf9:
    break;
  case (byte *)0xe8:
  case (byte *)0xf0:
  case (byte *)0xf8:
    param_1 = &BYTE_100c7b4c8;
    _swift_getWitnessTable(&BYTE_100c7b4c8,&DAT_100f04640);
    pbVar9 = (byte *)0x100fe6000;
switchD_10080298c_caseD_4d:
    *(byte **)(pbVar9 + 0xff0) = param_1;
switchD_10080298c_caseD_8d:
    return param_1;
  case (byte *)0xec:
    goto switchD_10080298c_caseD_ec;
  case (byte *)0xf4:
switchD_10080298c_caseD_f4:
    if ((pbVar9 != (byte *)0x0) && (param_1 != param_4)) {
      pbVar12 = param_1 + 0x20;
      pbVar15 = param_4 + 0x20;
      pbVar16 = pbVar9 + -1;
      do {
        pbVar10 = pbVar12 + 1;
        pbVar9 = (byte *)(ulong)*pbVar12;
switchD_10080298c_caseD_ec:
        in_w12 = pbVar16 != (byte *)0x0;
        pbVar16 = pbVar16 + -1;
        in_ZR = (uint)pbVar9 == (uint)*pbVar15;
        pbVar9 = (byte *)(ulong)(byte)in_ZR;
        pbVar12 = pbVar10;
        pbVar15 = pbVar15 + 1;
switchD_10080298c_caseD_94:
      } while (((bool)in_ZR) && ((in_w12 & 1) != 0));
      goto switchD_10080298c_caseD_d;
    }
switchD_10080298c_caseD_24:
    pbVar9 = &DAT_00000001;
    goto switchD_10080298c_caseD_d;
  case (byte *)0xfc:
    goto switchD_10080298c_caseD_fc;
  }
switchD_10080298c_caseD_d5:
  pbVar9 = (byte *)0x0;
switchD_10080298c_caseD_d:
  _Var6.unknown._4_4_ = 0;
  _Var6.unknown._0_4_ = (uint)pbVar9 & 1;
  return _Var6.unknown;
}



/* Address: 0x100802c20 | switchD_10080298c::caseD_70 */

undefined8 switchD_10080298c::caseD_70(undefined8 *param_1,long *param_2)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  ulong uVar4;
  
  if (((undefined *)*param_1 != (undefined *)*param_2 ||
       (undefined *)param_1[1] != (undefined *)param_2[1]) &&
     (bVar3 = Swift::_stringCompareWithSmolCheck
                        ((undefined *)*param_1,(undefined *)param_1[1],
                         (_StringComparisonResult)(__int8)(undefined *)*param_2), !bVar3)) {
    return 0;
  }
  uVar1 = *(ushort *)(param_1 + 4);
  uVar2 = *(ushort *)(param_2 + 4);
  if ((uVar1 & 0xff00) == 0x200) {
    if ((uVar2 & 0xff00) == 0x200) {
      return 1;
    }
  }
  else if ((uVar2 & 0xff00) != 0x200) {
    uVar4 = param_1[2];
    FUN_100802964(uVar4,param_1[3],uVar1,param_2[2],param_2[3],uVar2);
    if (((uVar4 & 1) != 0) && (((uVar2 ^ uVar1) >> 8 & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}



/* Address: 0x100802ccc | FUN_100802ccc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x000100802d08 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

ulong FUN_100802ccc(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  
  FUN_1000f7830(&DAT_100fe6dc8,&DAT_100c7aa80);
  _swift_initStaticObject();
  uVar1 = Swift::_findStringSwitchCase(param_1,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (9 < uVar1) {
    uVar1 = 10;
  }
  return uVar1;
}



/* Address: 0x100802d30 | thunk_FUN_100802d34 */

void thunk_FUN_100802d34(void)

{
  byte *pbVar1;
  
  if (DAT_100fe6ff0 != (byte *)0x0) {
    return;
  }
  pbVar1 = &BYTE_100c7b4c8;
  _swift_getWitnessTable(&BYTE_100c7b4c8,&DAT_100f04640);
  DAT_100fe6ff0 = pbVar1;
  return;
}


