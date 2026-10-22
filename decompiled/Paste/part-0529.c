/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1006101bc | FUN_1006101bc */

void FUN_1006101bc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,undefined8 param_7)

{
                    /* WARNING: Could not recover jumptable at 0x0001006101d4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_6 + 0x10))(param_1,param_3,param_5,param_7,param_4);
  return;
}



/* Address: 0x1006101d8 | FUN_1006101d8 */

void FUN_1006101d8(void)

{
  undefined8 in_x3;
  long in_x4;
  
  (**(code **)(in_x4 + 8))(in_x3);
  return;
}



/* Address: 0x10061021c | FUN_10061021c */

void FUN_10061021c(void)

{
  long in_x5;
  
  (**(code **)(in_x5 + 0x10))();
  return;
}



/* Address: 0x100610254 | FUN_100610254 */

/* WARNING: Removing unreachable block (ram,0x0001006105d0) */
/* WARNING: Removing unreachable block (ram,0x0001006105e0) */
/* WARNING: Removing unreachable block (ram,0x0001006105ec) */

void FUN_100610254(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,long param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  bool bVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long unaff_x20;
  long unaff_x21;
  long lVar9;
  long lVar10;
  uint uVar11;
  code *pcVar12;
  ulong uVar13;
  long lVar14;
  undefined8 local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined8 local_80;
  ulong local_78;
  undefined8 local_70;
  code *pcStack_68;
  
  lVar10 = *(long *)(param_5 + -8);
  uVar8 = *(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar14 = (long)&local_a0 - uVar8;
  lVar9 = (lVar14 - uVar8) - uVar8;
  uVar1 = *(uint *)(unaff_x20 + 0xc);
  local_a0 = param_1;
  local_98 = param_4;
  local_88 = param_7;
  local_80 = param_8;
  local_70 = param_3;
  pcStack_68 = param_2;
  (**(code **)(param_6 + 0x18))(param_4,param_6);
  uVar5 = 0;
  local_90 = param_4;
  local_78 = (ulong)uVar1;
  FUN_10060c5c4(0,param_4,(ulong)uVar1);
  if ((long)uVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100610588);
    (*pcVar12)();
  }
  if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x10061058c);
    (*pcVar12)();
  }
  uVar1 = *(uint *)(unaff_x20 + 0xc) + (uint)uVar5;
  uVar13 = (ulong)uVar1;
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar5)) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100610590);
    (*pcVar12)();
  }
  *(uint *)(unaff_x20 + 0xc) = uVar1;
  lVar6 = unaff_x20;
  (*pcStack_68)();
  lVar7 = local_90;
  if (unaff_x21 != 0) {
    (**(code **)(lVar10 + 0x20))(lVar9,lVar14 - uVar8,param_5);
    pcVar12 = *(code **)(lVar10 + 0x10);
    (*pcVar12)(lVar14,lVar9,param_5);
    FUN_100611284(local_78);
    uVar3 = local_80;
    (*pcVar12)(local_80,lVar14,param_5);
    FUN_1005c64f0(uVar3,param_5,local_88);
    pcVar12 = *(code **)(lVar10 + 8);
    (*pcVar12)(lVar14,param_5);
    (*pcVar12)(lVar9,param_5);
    return;
  }
  uVar2 = *(uint *)(unaff_x20 + 0xc);
  uVar5 = (ulong)uVar2;
  if (uVar5 - uVar13 != lVar6) {
                    /* WARNING: Does not return */
    pcVar12 = (code *)SoftwareBreakpoint(1,0x100610594);
    (*pcVar12)();
  }
  lVar9 = lVar6;
  (**(code **)(param_6 + 0x20))();
  uVar8 = local_78;
  uVar11 = (uint)local_78;
  if (lVar7 == lVar9) {
    if (uVar2 < *(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x100610598);
      (*pcVar12)();
    }
    if (SCARRY8(uVar5,lVar7)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x10061059c);
      (*pcVar12)();
    }
    if (((uVar2 < uVar11) || (*(uint *)(unaff_x20 + 0xc) <= uVar11)) ||
       ((long)(ulong)*(uint *)(unaff_x20 + 0xc) < (long)(uVar5 + lVar7))) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105a0);
      (*pcVar12)();
    }
  }
  else {
    lVar10 = lVar9 - lVar7;
    if (lVar9 < lVar7) {
      if (uVar2 < *(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105a4);
        (*pcVar12)();
      }
      if (SCARRY8(uVar5,lVar9)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105ac);
        (*pcVar12)();
      }
      if (((uVar2 < uVar11) || (*(uint *)(unaff_x20 + 0xc) <= uVar11)) ||
         ((long)(ulong)*(uint *)(unaff_x20 + 0xc) < (long)(uVar5 + lVar9))) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105b8);
        (*pcVar12)();
      }
      FUN_100611884(uVar5,local_78,lVar9);
      lVar10 = uVar8 + lVar9;
      if (SCARRY8(uVar8,lVar9)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105c0);
        (*pcVar12)();
      }
      if (uVar1 < *(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105c4);
        (*pcVar12)();
      }
      if ((((long)(ulong)*(uint *)(unaff_x20 + 0xc) < (long)(lVar6 + uVar13)) ||
          ((long)uVar13 < lVar10)) || ((long)(ulong)*(uint *)(unaff_x20 + 0xc) <= lVar10)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105cc);
        (*pcVar12)();
      }
      FUN_100611884(uVar13,lVar10,lVar6);
      uVar5 = lVar10 + lVar6;
      if (SCARRY8(lVar10,lVar6)) {
                    /* WARNING: Does not return */
        pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105d0);
        (*pcVar12)();
      }
      goto LAB_10061054c;
    }
    if (SBORROW8(lVar9,lVar7)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105a8);
      (*pcVar12)();
    }
    FUN_100610680(local_78,lVar10);
    bVar4 = SCARRY8(uVar5,lVar10);
    uVar5 = uVar5 + lVar10;
    if (bVar4) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105b0);
      (*pcVar12)();
    }
    if ((long)uVar5 < (long)(ulong)*(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105b4);
      (*pcVar12)();
    }
    if (SCARRY8(uVar5,lVar9)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105bc);
      (*pcVar12)();
    }
    lVar7 = lVar9;
    if ((uVar5 < uVar8 || *(uint *)(unaff_x20 + 0xc) <= uVar11) ||
        (long)(ulong)*(uint *)(unaff_x20 + 0xc) < (long)(uVar5 + lVar9)) {
                    /* WARNING: Does not return */
      pcVar12 = (code *)SoftwareBreakpoint(1,0x1006105c8);
      (*pcVar12)();
    }
  }
  FUN_100611884(uVar5,uVar8,lVar7);
LAB_10061054c:
  FUN_100611284(uVar5);
  return;
}



/* Address: 0x100610600 | FUN_100610600 */

/* WARNING: Removing unreachable block (ram,0x000100610660) */

void FUN_100610600(long param_1,long param_2,long param_3)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 < (long)(ulong)*(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610658);
    (*pcVar1)();
  }
  if (SCARRY8(param_1,param_3)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061065c);
    (*pcVar1)();
  }
  if (((long)(ulong)*(uint *)(unaff_x20 + 0xc) < param_1 + param_3 || param_1 < param_2) ||
      (long)(ulong)*(uint *)(unaff_x20 + 0xc) <= param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610660);
    (*pcVar1)();
  }
  FUN_100611884();
  return;
}



/* Address: 0x100610680 | FUN_100610680 */

/* WARNING: Removing unreachable block (ram,0x000100610718) */

void FUN_100610680(long param_1,long param_2)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long unaff_x20;
  
  if (param_1 < (long)(ulong)*(uint *)(unaff_x20 + 8)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100610708);
    (*pcVar2)();
  }
  uVar1 = *(uint *)(unaff_x20 + 0xc);
  uVar3 = 0;
  FUN_10060c5c4(0,param_2,(ulong)uVar1);
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061070c);
    (*pcVar2)();
  }
  if (uVar3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100610710);
    (*pcVar2)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)uVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100610714);
    (*pcVar2)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)uVar3;
  if (!SCARRY8(param_1,param_2)) {
    FUN_100611884(param_1,param_1 + param_2,(ulong)uVar1 - param_1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100610718);
  (*pcVar2)();
}



/* Address: 0x100610738 | FUN_100610738 */

void FUN_100610738(undefined8 param_1,undefined8 param_2,long param_3)

{
  uint uVar1;
  long unaff_x20;
  code *pcVar2;
  long local_50;
  char local_48;
  
  uVar1 = *(uint *)(unaff_x20 + 8);
  pcVar2 = *(code **)(param_3 + 8);
  FUN_100610c90();
  (*pcVar2)(&local_50);
  if ((local_48 != '\x01') && (FUN_10060c6b4(), local_50 != 0)) {
    return;
  }
  if (uVar1 <= *(uint *)(unaff_x20 + 0xc)) {
    *(uint *)(unaff_x20 + 8) = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006107e8);
  (*pcVar2)();
}



/* Address: 0x1006107e8 | FUN_1006107e8 */

long FUN_1006107e8(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,long param_6)

{
  code *pcVar1;
  ulong *puVar2;
  ulong *puVar3;
  int iVar4;
  ulong uVar5;
  ulong local_78;
  int local_70;
  int iStack_6c;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  iVar4 = (int)((ulong)param_2 >> 0x20);
  uVar5 = (ulong)(uint)(iVar4 - (int)param_2);
  (**(code **)(param_6 + 0x18))(param_5,param_6);
  if (SCARRY8(uVar5,param_5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006108e0);
    (*pcVar1)();
  }
  FUN_1006117fc(uVar5 + param_5);
  local_78 = uVar5;
  FUN_100610c90();
  puVar2 = &local_78;
  (**(code **)(param_6 + 0x10))();
  local_68 = (undefined4)param_3;
  local_64 = (undefined2)((ulong)param_3 >> 0x20);
  local_62 = (undefined1)((ulong)param_3 >> 0x30);
  puVar3 = &local_78;
  local_78 = param_1;
  local_70 = (int)param_2;
  iStack_6c = iVar4;
  FUN_10060c3b0();
  if (!SCARRY8((long)puVar2,(long)puVar3)) {
    return (long)puVar2 + (long)puVar3;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006108e4);
  (*pcVar1)();
}



/* Address: 0x1006108e4 | FUN_1006108e4 */

undefined *
FUN_1006108e4(UTF8View param_1,ulong param_2,undefined8 param_3,long param_4,long param_5)

{
  code *pcVar1;
  ulong *puVar2;
  ulong uVar3;
  long unaff_x20;
  ulong uVar4;
  ulong local_68;
  
  uVar4 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar3 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar3 = uVar4;
    }
  }
  else {
    uVar3 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  (**(code **)(param_5 + 0x18))(param_4,param_5);
  if (SCARRY8(uVar3,param_4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610a18);
    (*pcVar1)();
  }
  FUN_1006117fc(uVar3 + param_4);
  if ((param_2 >> 0x3c & 1) == 0) {
    local_68 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      local_68 = uVar4;
    }
  }
  else {
    local_68 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  FUN_100610c90();
  puVar2 = &local_68;
  (**(code **)(param_5 + 0x10))();
  FUN_10060b1ac(param_1.unknown,param_2,*(undefined4 *)(unaff_x20 + 0xc));
  if ((long)param_1.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610a1c);
    (*pcVar1)();
  }
  if ((ulong)param_1.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610a20);
    (*pcVar1)();
  }
  if (CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1.unknown)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610a24);
    (*pcVar1)();
  }
  *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_1.unknown;
  if (SCARRY8((long)puVar2,(long)param_1.unknown)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100610a28);
    (*pcVar1)();
  }
  return (long)puVar2 + param_1.unknown;
}



/* Address: 0x100610a28 | FUN_100610a28 */

void FUN_100610a28(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6)

{
  code *pcVar1;
  long *plVar2;
  long local_a0;
  char local_98;
  undefined8 local_90;
  long lStack_88;
  undefined8 local_80;
  long lStack_78;
  long local_70;
  
  plVar2 = &local_a0;
  Swift::Sequence::_withContiguousStorageIfAvailable();
  if (local_98 == '\x01') {
    local_90 = param_3;
    lStack_88 = param_4;
    local_80 = param_5;
    lStack_78 = param_6;
    local_70 = param_1;
    FUN_100610254(param_2,FUN_100610cd0,&local_a0,param_4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,param_6,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  else {
    (**(code **)(param_6 + 0x18))(param_4,param_6);
    if (SCARRY8(local_a0,param_4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100610b74);
      (*pcVar1)();
    }
    FUN_1006117fc(local_a0 + param_4);
    FUN_100610c90();
    (**(code **)(param_6 + 0x10))();
    FUN_10060a884(param_1,param_3,param_5);
    if (SCARRY8((long)plVar2,param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100610b78);
      (*pcVar1)();
    }
  }
  return;
}



/* Address: 0x100610b78 | FUN_100610b78 */

void FUN_100610b78(undefined8 *param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  *param_1 = uVar1;
  return;
}



/* Address: 0x100610b88 | FUN_100610b88 */

undefined1  [16] FUN_100610b88(long param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  char *pcVar2;
  undefined1 auVar3 [16];
  String SVar4;
  tuple2_conflict1 tVar5;
  undefined1 auStack_58 [24];
  
  FUN_100610738();
  if (param_1 == 0) {
    pcVar2 = (char *)0x0;
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = (void *)0x0;
    _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
    SVar4.bridgeObject = pvVar1;
    SVar4.str = (char *)(ulong)(uint)((int)(param_2 >> 0x20) - (int)param_2);
    tVar5 = Swift::String::_fromUTF8Repairing
                      ((undefined *)
                       (*(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) +
                        (param_3 >> 0x30 & 0xff) + (param_2 & 0xffffffff)),SVar4);
    pvVar1 = tVar5.result.bridgeObject;
    pcVar2 = tVar5.result.str;
    _swift_release(param_1,pvVar1,tVar5._16_8_);
  }
  auVar3._8_8_ = pvVar1;
  auVar3._0_8_ = pcVar2;
  return auVar3;
}



/* Address: 0x100610c30 | FUN_100610c30 */

ulong FUN_100610c30(long param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  FUN_100610738();
  if (param_1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 & 0xffffffff;
    FUN_10060a944(uVar2,(int)(param_2 >> 0x20) - (int)param_2,param_1,param_2,
                  param_3 & 0xffffffffffffff);
    if (uVar2 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100610c90);
      (*pcVar1)();
    }
    _swift_release(param_1);
  }
  return uVar2;
}



/* Address: 0x100610c90 | FUN_100610c90 */

void FUN_100610c90(void)

{
  undefined *puVar1;
  
  if (DAT_100fd6f28 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__FixedWidthInteger_100eac740,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fd6f28 = puVar1;
  return;
}



/* Address: 0x100610cd0 | FUN_100610cd0 */

void FUN_100610cd0(undefined8 param_1)

{
  long unaff_x20;
  
  FUN_10060a884(param_1,*(undefined8 *)(unaff_x20 + 0x30),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x20));
  return;
}



/* Address: 0x100610d08 | FUN_100610d08 */

String FUN_100610d08(long param_1,ulong param_2,ulong param_3)

{
  void *pvVar1;
  String SVar2;
  tuple2_conflict1 tVar3;
  undefined1 auStack_58 [24];
  
  pvVar1 = (void *)0x0;
  _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
  SVar2.bridgeObject = pvVar1;
  SVar2.str = (char *)(ulong)(uint)((int)(param_2 >> 0x20) - (int)param_2);
  tVar3 = Swift::String::_fromUTF8Repairing
                    ((undefined *)
                     (*(long *)(param_1 + 0x18) + (param_3 >> 0x18 & 0xffff00) +
                      (param_3 >> 0x30 & 0xff) + (param_2 & 0xffffffff)),SVar2);
  _swift_release(param_1,tVar3.result.bridgeObject,tVar3._16_8_);
  return tVar3.result;
}



/* Address: 0x100610d9c | FUN_100610d9c */

ulong FUN_100610d9c(undefined8 param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  
  uVar2 = param_2 & 0xffffffff;
  FUN_10060a944(uVar2,(int)(param_2 >> 0x20) - (int)param_2,param_1,param_2,
                param_3 & 0xffffffffffffff);
  if (uVar2 != 0) {
    _swift_release(param_1);
    return uVar2;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100610dec);
  (*pcVar1)();
}



/* Address: 0x100610dec | FUN_100610dec */

String FUN_100610dec(undefined8 param_1,undefined8 param_2,long param_3,void *param_4,
                    undefined8 param_5)

{
  code *pcVar1;
  __int64 _Var2;
  char *count;
  void *pvVar4;
  long lVar5;
  long lVar6;
  String SVar7;
  String repeating;
  String SVar8;
  String local_60;
  void *pvVar3;
  
  lVar6 = *(long *)((long)param_4 + -8);
  lVar5 = (long)&local_60 - (*(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar6 + 0x10))(lVar5,param_1,param_4);
  pvVar4 = param_4;
  SVar7 = Swift::String::_init(lVar5,param_2,0,param_4,param_5);
  _Var2 = Swift::String::get_count(SVar7);
  count = (char *)(param_3 - _Var2);
  if (!SBORROW8(param_3,_Var2)) {
    repeating.bridgeObject = (void *)0xe100000000000000;
    repeating.str = &DAT_00000030;
    local_60 = Swift::String::init(repeating,(__int64)count);
    pvVar3 = local_60.bridgeObject;
    _swift_bridgeObjectRetain(pvVar3);
    SVar8.bridgeObject = pvVar4;
    SVar8.str = count;
    Swift::String::append(SVar7,SVar8);
    _swift_bridgeObjectRelease(SVar7.bridgeObject);
    _swift_bridgeObjectRelease(pvVar3);
    SVar7 = local_60;
    (**(code **)(lVar6 + 8))(param_1,param_4);
    return SVar7;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100610ef0);
  (*pcVar1)();
}



/* Address: 0x100610ef0 | FUN_100610ef0 */

void FUN_100610ef0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  code *pcVar1;
  undefined *puVar2;
  DispatchData DVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  undefined1 auStack_60 [8];
  undefined8 local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined2 local_44;
  undefined1 local_42;
  
  local_48 = (undefined4)param_4;
  local_42 = (undefined1)((ulong)param_4 >> 0x30);
  local_44 = (undefined2)((ulong)param_4 >> 0x20);
  puVar2 = &DAT_100fd6f30;
  local_58 = param_2;
  uStack_50 = param_3;
  FUN_1000f7830(&DAT_100fd6f30,&DAT_100c67958);
  puVar5 = auStack_60 + -(*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10060be3c(puVar5,(int)((ulong)param_3 >> 0x20) - (int)param_3);
  DVar3 = Dispatch::DispatchData::typeMetadataAccessor();
  lVar6 = *(long *)(DVar3.unknown + -8);
  puVar4 = puVar5;
  (**(code **)(lVar6 + 0x30))(puVar5,1,DVar3.unknown);
  if ((int)puVar4 != 1) {
    _swift_release(param_2);
    (**(code **)(lVar6 + 0x20))(param_1,puVar5,DVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100610fd4);
  (*pcVar1)();
}



/* Address: 0x100610fd4 | FUN_100610fd4 */

ulong FUN_100610fd4(ulong param_1)

{
  code *pcVar1;
  undefined1 auStack_58 [24];
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611094);
    (*pcVar1)();
  }
  if (param_1 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    param_1 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100611098);
      (*pcVar1)();
    }
    FUN_100613fa8();
    _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  }
  return param_1;
}



/* Address: 0x1006110b0 | FUN_1006110b0 */

int FUN_1006110b0(undefined8 param_1,undefined8 param_2)

{
  return (int)((ulong)param_2 >> 0x20) - (int)param_2;
}



/* Address: 0x1006110bc | FUN_1006110bc */

long FUN_1006110bc(long param_1,ulong param_2,undefined8 param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  
  lVar2 = param_1 - (param_4 & 0xffffffff);
  lVar1 = 0;
  if (lVar2 <= (long)((uint)((int)(param_4 >> 0x20) - (int)param_4) - param_2)) {
    lVar1 = lVar2;
  }
  lVar2 = 0;
  if ((param_2 & 0x8000000000000000) == 0) {
    lVar2 = lVar1;
  }
  lVar1 = 0;
  if ((long)(param_4 & 0xffffffff) <= param_1) {
    lVar1 = lVar2;
  }
  return lVar1;
}



/* Address: 0x100611110 | FUN_100611110 */

void FUN_100611110(undefined8 param_1,code *param_2,undefined8 param_3,long param_4,ulong param_5,
                  ulong param_6,undefined8 param_7,long param_8,undefined8 param_9,
                  undefined8 param_10)

{
  long lVar1;
  long lVar2;
  long unaff_x21;
  long lVar3;
  long local_80;
  undefined1 auStack_78 [24];
  
  lVar3 = *(long *)(param_8 + -8);
  lVar2 = *(long *)(lVar3 + 0x40);
  local_80 = param_8;
  _swift_beginAccess(param_4 + 0x18,auStack_78,0,0);
  lVar1 = *(long *)(param_4 + 0x18) + (param_6 >> 0x18 & 0xffff00) + (param_6 >> 0x30 & 0xff);
  (*param_2)(param_1,lVar1 + (param_5 & 0xffffffff),lVar1 + (param_5 >> 0x20),
             auStack_78 + (-8 - (lVar2 + 0xfU & 0xfffffffffffffff0)));
  if (unaff_x21 != 0) {
    (**(code **)(lVar3 + 0x20))
              (param_10,auStack_78 + (-8 - (lVar2 + 0xfU & 0xfffffffffffffff0)),local_80);
  }
  return;
}



/* Address: 0x1006111f0 | FUN_1006111f0 */

undefined4 FUN_1006111f0(undefined8 param_1,undefined4 param_2)

{
  return param_2;
}



/* Address: 0x1006111f8 | FUN_1006111f8 */

void FUN_1006111f8(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10061121c);
    (*pcVar1)();
  }
  if ((int)((ulong)param_1 >> 0x20) == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 8),(uint)param_1)) {
      *(uint *)(unaff_x20 + 8) = *(uint *)(unaff_x20 + 8) + (uint)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611224);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611220);
  (*pcVar1)();
}



/* Address: 0x100611224 | FUN_100611224 */

ulong FUN_100611224(undefined8 param_1,ulong param_2)

{
  return param_2 >> 0x20;
}



/* Address: 0x10061122c | FUN_10061122c */

void FUN_10061122c(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611250);
    (*pcVar1)();
  }
  if ((int)((ulong)param_1 >> 0x20) == 0) {
    if (!CARRY4(*(uint *)(unaff_x20 + 0xc),(uint)param_1)) {
      *(uint *)(unaff_x20 + 0xc) = *(uint *)(unaff_x20 + 0xc) + (uint)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611258);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611254);
  (*pcVar1)();
}



/* Address: 0x100611258 | FUN_100611258 */

ulong FUN_100611258(ulong param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611280);
    (*pcVar1)();
  }
  if (param_3 >> 0x20 == 0) {
    FUN_1006124ec();
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611284);
  (*pcVar1)();
}



/* Address: 0x100611284 | FUN_100611284 */

void FUN_100611284(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006112b8);
    (*pcVar1)();
  }
  if ((int)((ulong)param_1 >> 0x20) == 0) {
    if ((uint)param_1 <=
        *(int *)(unaff_x20 + 0x10) -
        (uint)CONCAT21(*(undefined2 *)(unaff_x20 + 0x14),*(undefined1 *)(unaff_x20 + 0x16))) {
      *(uint *)(unaff_x20 + 0xc) = (uint)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006112c0);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006112bc);
  (*pcVar1)();
}



/* Address: 0x1006112c0 | FUN_1006112c0 */

ulong FUN_1006112c0(ulong param_1,ulong param_2)

{
  code *pcVar1;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006112e8);
    (*pcVar1)();
  }
  if (param_2 >> 0x20 == 0) {
    FUN_100612ae0();
    return param_1 & 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006112ec);
  (*pcVar1)();
}



/* Address: 0x1006112ec | FUN_1006112ec */

void FUN_1006112ec(long param_1)

{
  uint uVar1;
  code *pcVar2;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10061131c);
    (*pcVar2)();
  }
  if ((int)((ulong)param_1 >> 0x20) != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100611320);
    (*pcVar2)();
  }
  uVar1 = *(uint *)(unaff_x20 + 8) + (uint)param_1;
  if (CARRY4(*(uint *)(unaff_x20 + 8),(uint)param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100611324);
    (*pcVar2)();
  }
  if (uVar1 <= *(uint *)(unaff_x20 + 0xc)) {
    *(uint *)(unaff_x20 + 8) = uVar1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100611328);
  (*pcVar2)();
}



/* Address: 0x100611328 | FUN_100611328 */

void FUN_100611328(ulong param_1)

{
  code *pcVar1;
  uint uVar2;
  undefined8 *unaff_x20;
  
  if ((long)param_1 <=
      (long)(ulong)(*(int *)(unaff_x20 + 2) -
                   (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                                  *(undefined1 *)((long)unaff_x20 + 0x16)))) {
    return;
  }
  if (param_1 >> 0x20 == 0) {
    uVar2 = (uint)*unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    if (uVar2 != 0) {
      FUN_100612380(param_1,0);
      return;
    }
    FUN_1000d2130();
    FUN_100612224(param_1,uVar2 & 1);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006113a4);
  (*pcVar1)();
}



/* Address: 0x1006113a4 | FUN_1006113a4 */

void FUN_1006113a4(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined2 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long unaff_x21;
  long lVar7;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  code *local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_5 + -8);
  lVar5 = *(long *)(lVar7 + 0x40);
  local_88 = param_7;
  local_80 = param_2;
  FUN_100612cb0();
  lVar6 = *unaff_x20;
  lVar4 = unaff_x20[2];
  uVar2 = *(undefined2 *)((long)unaff_x20 + 0x14);
  uVar1 = *(undefined1 *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar6 + 0x18,auStack_78,0,0);
  uVar3 = (uint)CONCAT21(uVar2,uVar1);
  lVar6 = *(long *)(lVar6 + 0x18) + (ulong)uVar3;
  (*local_80)(param_1,lVar6,lVar6 + (ulong)((int)lVar4 - uVar3),
              auStack_90 + -(lVar5 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar7 + 0x20))(local_88,auStack_90 + -(lVar5 + 0xfU & 0xfffffffffffffff0),param_5);
  }
  return;
}



/* Address: 0x100611484 | FUN_100611484 */

void FUN_100611484(undefined8 param_1,code *param_2,undefined8 param_3,undefined8 param_4,
                  long param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  uint uVar2;
  byte bVar3;
  ushort uVar4;
  long *unaff_x20;
  long unaff_x21;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_90;
  undefined8 local_88;
  code *local_80;
  undefined1 auStack_78 [24];
  
  lVar7 = *(long *)(param_5 + -8);
  lVar5 = (long)&local_90 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_90 = param_7;
  local_88 = param_3;
  local_80 = param_2;
  FUN_100612cb0();
  uVar1 = *(uint *)(unaff_x20 + 1);
  uVar2 = *(uint *)((long)unaff_x20 + 0xc);
  lVar6 = *unaff_x20;
  uVar4 = *(ushort *)((long)unaff_x20 + 0x14);
  bVar3 = *(byte *)((long)unaff_x20 + 0x16);
  _swift_beginAccess(lVar6 + 0x18,auStack_78,0,0);
  lVar6 = *(long *)(lVar6 + 0x18) + (ulong)uVar4 * 0x100 + (ulong)bVar3;
  (*local_80)(param_1,lVar6 + (ulong)uVar1,lVar6 + (ulong)uVar2,lVar5);
  if (unaff_x21 != 0) {
    (**(code **)(lVar7 + 0x20))(local_90,lVar5,param_5);
  }
  return;
}



/* Address: 0x100611560 | FUN_100611560 */

ulong FUN_100611560(undefined8 param_1,ulong param_2,ulong param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  ulong uVar5;
  ulong *unaff_x20;
  
  if ((long)param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006115fc);
    (*pcVar3)();
  }
  if (param_3 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100611600);
    (*pcVar3)();
  }
  if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100611604);
    (*pcVar3)();
  }
  uVar1 = (uint)param_3 + (uint)param_2;
  if (!CARRY4((uint)param_3,(uint)param_2)) {
    uVar5 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar5;
    if ((uVar5 & 1) == 0) {
      iVar2 = 0;
      if ((uint)unaff_x20[2] <= uVar1) {
        iVar2 = uVar1 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,uVar4 & 1);
    }
    FUN_100612380(param_2,param_3);
    FUN_100612720(param_1,param_2,param_3);
    return param_2;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100611608);
  (*pcVar3)();
}



/* Address: 0x100611608 | thunk_FUN_10061160c */

void thunk_FUN_10061160c(long param_1,ulong param_2,undefined8 param_3,ulong param_4,
                        undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  
  if ((((-1 < param_1) && (-1 < (long)param_2)) && ((long)(param_4 & 0xffffffff) <= param_1)) &&
     ((param_2 <= param_4 >> 0x20 && (param_1 <= (long)((param_4 >> 0x20) - param_2))))) {
    uVar1 = (uint)((ulong)param_5 >> 0x18) & 0xffff00 | (ushort)((ulong)param_5 >> 0x30) & 0xff;
    if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006116e8);
      (*pcVar2)();
    }
    if (uVar1 + (uint)param_1 >> 0x18 == 0) {
      _swift_retain(param_3);
    }
    else {
      FUN_1006135c8(param_1);
    }
  }
  return;
}



/* Address: 0x10061160c | FUN_10061160c */

void FUN_10061160c(long param_1,ulong param_2,undefined8 param_3,ulong param_4,undefined8 param_5)

{
  uint uVar1;
  code *pcVar2;
  
  if ((((-1 < param_1) && (-1 < (long)param_2)) && ((long)(param_4 & 0xffffffff) <= param_1)) &&
     ((param_2 <= param_4 >> 0x20 && (param_1 <= (long)((param_4 >> 0x20) - param_2))))) {
    uVar1 = (uint)((ulong)param_5 >> 0x18) & 0xffff00 | (ushort)((ulong)param_5 >> 0x30) & 0xff;
    if (CARRY4(uVar1,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006116e8);
      (*pcVar2)();
    }
    if (uVar1 + (uint)param_1 >> 0x18 == 0) {
      _swift_retain(param_3);
    }
    else {
      FUN_1006135c8(param_1);
    }
  }
  return;
}



/* Address: 0x1006116e8 | FUN_1006116e8 */

undefined8 * FUN_1006116e8(void)

{
  if (DAT_100fd6f38 != -1) {
    _swift_once(&DAT_100fd6f38,FUN_100611c84);
  }
  return &DAT_101057bd0;
}



/* Address: 0x100611728 | FUN_100611728 */

code * FUN_100611728(void)

{
  return _malloc;
}



/* Address: 0x10061174c | FUN_10061174c */

void FUN_10061174c(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined1 auStack_60 [16];
  long local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  lVar2 = *(long *)(param_4 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  local_50 = param_4;
  uStack_48 = param_5;
  local_40 = param_2;
  uStack_38 = param_3;
  FUN_100612f54(param_1,FUN_100614040,auStack_60,param_4,param_5,
                auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(param_6,auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_4);
  }
  return;
}



/* Address: 0x1006117d0 | FUN_1006117d0 */

void FUN_1006117d0(long param_1)

{
  code *pcVar1;
  long unaff_x20;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006117f4);
    (*pcVar1)();
  }
  if ((int)((ulong)param_1 >> 0x20) == 0) {
    if ((uint)param_1 <= *(uint *)(unaff_x20 + 0xc)) {
      *(uint *)(unaff_x20 + 8) = (uint)param_1;
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006117fc);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1006117f8);
  (*pcVar1)();
}



/* Address: 0x1006117fc | FUN_1006117fc */

void FUN_1006117fc(long param_1)

{
  ulong uVar1;
  code *pcVar2;
  uint uVar3;
  undefined8 *unaff_x20;
  
  uVar1 = (ulong)*(uint *)((long)unaff_x20 + 0xc) + param_1;
  if (SCARRY8((ulong)*(uint *)((long)unaff_x20 + 0xc),param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100611880);
    (*pcVar2)();
  }
  if ((long)uVar1 <=
      (long)(ulong)(*(int *)(unaff_x20 + 2) -
                   (uint)CONCAT21(*(undefined2 *)((long)unaff_x20 + 0x14),
                                  *(undefined1 *)((long)unaff_x20 + 0x16)))) {
    return;
  }
  if (uVar1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100611884);
    (*pcVar2)();
  }
  uVar3 = (uint)*unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  if (uVar3 != 0) {
    FUN_100612380(uVar1,0);
    return;
  }
  FUN_1000d2130();
  FUN_100612224(uVar1,uVar3 & 1);
  return;
}



/* Address: 0x100611884 | FUN_100611884 */

ulong FUN_100611884(undefined1 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  undefined2 uVar3;
  code *pcVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 uVar8;
  ulong *unaff_x20;
  ulong unaff_x22;
  ulong uVar9;
  undefined1 auStack_68 [24];
  
  if ((long)param_3 < 0) {
    uVar8 = 0;
  }
  else {
    if (param_3 == 0) {
      return 0;
    }
    if ((long)(ulong)(uint)unaff_x20[1] <= (long)param_1) {
      if (SCARRY8((long)param_1,param_3)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006119f0);
        (*pcVar4)();
      }
      uVar2 = *(uint *)((long)unaff_x20 + 0xc);
      if ((long)(param_1 + param_3) <= (long)(ulong)uVar2) {
        uVar6 = *unaff_x20;
        _swift_isUniquelyReferenced_nonNull_native();
        uVar5 = (uint)uVar6;
        if ((uVar6 & 1) == 0) {
          uVar6 = param_2 + param_3;
          if (SCARRY8(param_2,param_3)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x1006119fc);
            (*pcVar4)();
          }
          if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100611a00);
            (*pcVar4)();
          }
          if (uVar6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100611a04);
            (*pcVar4)();
          }
          if (uVar2 <= (uint)uVar6) {
            uVar2 = (uint)uVar6;
          }
          FUN_1000d2130();
          FUN_100612224(uVar2,uVar5 & 1);
        }
        if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1006119f4);
          (*pcVar4)();
        }
        if ((param_3 | param_2) >> 0x20 == 0) {
          FUN_100612380(param_3,param_2);
          FUN_100612cb0();
          uVar9 = *unaff_x20;
          uVar6 = unaff_x20[2];
          uVar3 = *(undefined2 *)((long)unaff_x20 + 0x14);
          uVar8 = *(undefined1 *)((long)unaff_x20 + 0x16);
          _swift_beginAccess(uVar9 + 0x18,auStack_68,0,0);
          uVar2 = (uint)CONCAT21(uVar3,uVar8);
          lVar1 = *(long *)(uVar9 + 0x18) + (ulong)uVar2;
          lVar7 = lVar1 + (ulong)((int)uVar6 - uVar2);
          FUN_1005de850(param_2,lVar1);
          if (lVar7 == 0) {
            return param_3;
          }
          _memmove((void *)(lVar7 + param_2),param_1 + lVar1,param_3);
          return param_3;
        }
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1006119f8);
        (*pcVar4)();
      }
    }
    uVar8 = 1;
    unaff_x22 = param_3;
  }
  FUN_100614060();
  _swift_allocError(&DAT_100eeab30,param_1,0,0);
  *param_1 = uVar8;
  _swift_willThrow();
  return unaff_x22;
}



/* Address: 0x100611a04 | FUN_100611a04 */

undefined ** FUN_100611a04(void)

{
  return &PTR__malloc_100eea928;
}



/* Address: 0x100611a10 | FUN_100611a10 */

undefined ** FUN_100611a10(void)

{
  return &PTR__realloc_100eea930;
}



/* Address: 0x100611a1c | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x100611a20 | FUN_100611a20 */

bool FUN_100611a20(ulong param_1,ulong param_2)

{
  return (param_1 & 0xffffffffffffff) == (param_2 & 0xffffffffffffff);
}



/* Address: 0x100611a34 | FUN_100611a34 */

bool FUN_100611a34(int *param_1,int *param_2)

{
  if (*param_1 == *param_2) {
    return (short)param_1[1] == (short)param_2[1] &&
           *(char *)((long)param_1 + 6) == *(char *)((long)param_2 + 6);
  }
  return false;
}



/* Address: 0x100611a74 | FUN_100611a74 */

ulong FUN_100611a74(ulong param_1)

{
  return param_1 >> 0x20 & 0xffffff;
}



/* Address: 0x100611a7c | FUN_100611a7c */

void FUN_100611a7c(undefined4 param_1)

{
  long unaff_x20;
  
  *(short *)(unaff_x20 + 4) = (short)param_1;
  *(char *)(unaff_x20 + 6) = (char)((uint)param_1 >> 0x10);
  return;
}



/* Address: 0x100611a8c | FUN_100611a8c */

uint FUN_100611a8c(undefined8 param_1)

{
  return (uint)((ulong)param_1 >> 0x18) & 0xffff00 | (ushort)((ulong)param_1 >> 0x30) & 0xff;
}



/* Address: 0x100611aa0 | FUN_100611aa0 */

int FUN_100611aa0(undefined8 param_1)

{
  return (int)param_1 -
         ((ushort)((ulong)param_1 >> 0x30) & 0xff | (uint)((ulong)param_1 >> 0x18) & 0xffff00);
}



/* Address: 0x100611ab8 | FUN_100611ab8 */

undefined8 FUN_100611ab8(void)

{
  return 0xffffff;
}



/* Address: 0x100611ac0 | FUN_100611ac0 */

ulong FUN_100611ac0(ulong param_1)

{
  return param_1 >> 0x20 | (param_1 >> 8 & 0xffff) << 0x20 | (param_1 & 0xff) << 0x30;
}



/* Address: 0x100611ad8 | FUN_100611ad8 */

undefined1  [16] FUN_100611ad8(undefined8 param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  Swift::_StringGuts::grow(0x1c,param_2);
  _swift_bridgeObjectRelease(0xe000000000000000);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar4.bridgeObject = param_4;
  SVar4.str = param_3;
  Swift::String::append(SVar2,SVar4);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar2.bridgeObject = (void *)0xe300000000000000;
  SVar2.str = (char *)0x3c2e2e;
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  SVar2 = Swift::CustomStringConvertible::get_description();
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar2,SVar6);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = &SUB_e200000000000000;
  SVar3.str = (char *)0x7d20;
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar3,SVar7);
  auVar1._8_8_ = 0x8000000100daec00;
  auVar1._0_8_ = 0xd000000000000013;
  return auVar1;
}



/* Address: 0x100611bdc | FUN_100611bdc */

void FUN_100611bdc(void)

{
  uint7 *unaff_x20;
  
  FUN_100611ad8((ulong)*unaff_x20);
  return;
}



/* Address: 0x100611bf4 | _malloc */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void * _malloc(size_t param_1)

{
  void *pvVar1;
  
  pvVar1 = _malloc(param_1);
  return pvVar1;
}



/* Address: 0x100611bf8 | FUN_100611bf8 */

void FUN_100611bf8(void *param_1,undefined8 param_2,size_t param_3)

{
  _realloc(param_1,param_3);
  return;
}



/* Address: 0x100611c00 | _free */

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void _free(void *param_1)

{
  _free(param_1);
  return;
}



/* Address: 0x100611c04 | FUN_100611c04 */

void FUN_100611c04(void *param_1,void *param_2,size_t param_3)

{
  code *pcVar1;
  
  if (-1 < (long)param_3) {
    _memmove(param_1,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611c10);
  (*pcVar1)();
}



/* Address: 0x100611c10 | FUN_100611c10 */

ulong FUN_100611c10(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   ulong param_5)

{
  code *pcVar1;
  undefined1 auStack_38 [24];
  
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100611c80);
    (*pcVar1)();
  }
  if (param_5 >> 0x20 == 0) {
    FUN_100613fa8(param_5,param_1,param_2,param_3,param_4);
    _swift_beginAccess(param_5 + 0x10,auStack_38,0,0);
    return param_5;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611c84);
  (*pcVar1)();
}



/* Address: 0x100611c84 | FUN_100611c84 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_100611c84(void)

{
  code *pcVar1;
  void *pvVar2;
  void *pvVar3;
  
  pvVar2 = _malloc(0);
  if (pvVar2 != (void *)0x0) {
    pvVar3 = pvVar2;
    FUN_1006140ec();
    _swift_allocObject();
    *(undefined4 *)((long)pvVar3 + 0x10) = 0;
    *(void **)((long)pvVar3 + 0x18) = pvVar2;
    *(code **)((long)pvVar3 + 0x20) = _malloc;
    *(code **)((long)pvVar3 + 0x28) = FUN_100611bf8;
    *(code **)((long)pvVar3 + 0x30) = _free;
    *(code **)((long)pvVar3 + 0x38) = FUN_100611c04;
    DAT_101057bd0 = pvVar3;
    DAT_101057bd8._0_7_ = 0;
    DAT_101057bd8._7_1_ = 0;
    _DAT_101057be0 = 0;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100611d00);
  (*pcVar1)();
}



/* Address: 0x100611d00 | FUN_100611d00 */

void FUN_100611d00(void)

{
  if (DAT_100fd6f38 != -1) {
    _swift_once(&DAT_100fd6f38,FUN_100611c84);
  }
  _swift_retain(DAT_101057bd0);
  return;
}



/* Address: 0x100611d6c | FUN_100611d6c */

undefined8 FUN_100611d6c(void)

{
  undefined8 in_x3;
  
  return in_x3;
}


