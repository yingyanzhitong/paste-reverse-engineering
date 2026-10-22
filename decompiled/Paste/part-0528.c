/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10060d1ac | FUN_10060d1ac */

ulong FUN_10060d1ac(long param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  ulong uVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined1 uVar12;
  undefined1 auStack_90 [24];
  ulong local_78;
  undefined4 local_70;
  uint local_6c;
  uint local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  uVar5 = *(ulong *)(param_1 + 0x10);
  if (uVar5 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar12 = DAT_101057be6;
    uVar11 = DAT_101057be4;
    uVar10 = DAT_101057be0;
    uVar6 = DAT_101057bd8._4_4_;
    uVar9 = (undefined4)DAT_101057bd8;
    uVar4 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
    uVar8 = 0;
  }
  else {
    if (uVar5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060d318);
      (*pcVar2)();
    }
    uVar4 = uVar5;
    FUN_100613fa8();
    _swift_beginAccess(uVar4 + 0x10,auStack_90,0,0);
    uVar9 = 0;
    uVar6 = 0;
    uVar11 = 0;
    uVar12 = 0;
    uVar10 = *(uint *)(uVar4 + 0x10);
    uVar8 = uVar5;
  }
  uVar7 = (uint)uVar8;
  local_78 = uVar4;
  local_70 = uVar9;
  local_6c = uVar6;
  local_68 = uVar10;
  local_64 = uVar11;
  local_62 = uVar12;
  if (!CARRY4(uVar6,uVar7)) {
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = (uint)uVar4;
    if ((uVar4 & 1) == 0) {
      iVar1 = 0;
      if (uVar10 <= uVar6 + uVar7) {
        iVar1 = (uVar6 + uVar7) - uVar10;
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar3 & 1);
    }
    FUN_100612380(uVar8,uVar6);
    FUN_10061258c(param_1 + 0x20,param_1 + 0x20 + uVar5,uVar6);
    if (!CARRY4(local_6c,uVar7)) {
      return local_78;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060d314);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060d310);
  (*pcVar2)();
}



/* Address: 0x10060d330 | FUN_10060d330 */

ulong FUN_10060d330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  uVar2 = Swift::Sequence::get_underestimatedCount();
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d464);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar5 = DAT_101057be6;
    uVar3 = DAT_101057be4;
    uVar4 = DAT_101057be0;
    uVar6 = DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d468);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_2,param_3,param_4,param_5);
    _swift_beginAccess(uVar2 + 0x10,auStack_80,0,0);
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = *(undefined4 *)(uVar2 + 0x10);
    uVar6 = 0;
  }
  local_68 = uVar2;
  local_60 = uVar6;
  local_58 = uVar4;
  local_54 = uVar3;
  local_52 = uVar5;
  FUN_10060a884(param_1,param_6,param_7);
  return local_68;
}



/* Address: 0x10060d480 | FUN_10060d480 */

undefined8 FUN_10060d480(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  
  uVar1 = param_1;
  FUN_10060d510();
  (**(code **)(*(long *)(param_4 + -8) + 8))(param_1,param_4);
  return uVar1;
}



/* Address: 0x10060d510 | FUN_10060d510 */

ulong FUN_10060d510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                   undefined8 param_9)

{
  code *pcVar1;
  ulong uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  undefined1 uVar5;
  undefined8 uVar6;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  uVar2 = *(ulong *)(*(long *)(param_8 + -8) + 0x40);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d638);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar5 = DAT_101057be6;
    uVar3 = DAT_101057be4;
    uVar4 = DAT_101057be0;
    uVar6 = DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d63c);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_4,param_5,param_6,param_7);
    _swift_beginAccess(uVar2 + 0x10,auStack_80,0,0);
    uVar3 = 0;
    uVar5 = 0;
    uVar4 = *(undefined4 *)(uVar2 + 0x10);
    uVar6 = 0;
  }
  local_68 = uVar2;
  local_60 = uVar6;
  local_58 = uVar4;
  local_54 = uVar3;
  local_52 = uVar5;
  FUN_1006161f4(param_1,param_2,param_3,param_8,param_9);
  return local_68;
}



/* Address: 0x10060d654 | FUN_10060d654 */

void FUN_10060d654(undefined8 param_1,undefined8 param_2)

{
  FUN_10060d68c(param_1,param_2,_malloc,FUN_100611bf8,_free,FUN_100611c04);
  return;
}



/* Address: 0x10060d68c | FUN_10060d68c */

ulong FUN_10060d68c(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d7b0);
    (*pcVar1)();
  }
  if (param_2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar6 = DAT_101057be6;
    uVar5 = DAT_101057be4;
    uVar7 = DAT_101057be0;
    uVar3 = DAT_101057bd8._4_4_;
    uVar4 = (undefined4)DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (param_2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d7b8);
      (*pcVar1)();
    }
    uVar2 = param_2;
    FUN_100613fa8(param_2,param_3,param_4,param_5,param_6);
    _swift_beginAccess(uVar2 + 0x10,auStack_80,0,0);
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = *(undefined4 *)(uVar2 + 0x10);
  }
  local_68 = uVar2;
  local_60 = uVar4;
  local_5c = uVar3;
  local_58 = uVar7;
  local_54 = uVar5;
  local_52 = uVar6;
  FUN_10060c5c4(param_1,param_2,uVar3);
  if (!CARRY4(local_5c,(uint)param_2)) {
    return local_68;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060d7b4);
  (*pcVar1)();
}



/* Address: 0x10060d7d0 | FUN_10060d7d0 */

long FUN_10060d7d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  void *pvVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined1 uVar9;
  undefined8 uVar10;
  undefined8 local_80;
  uint local_78;
  uint uStack_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  long local_68;
  undefined8 local_60;
  uint local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  uVar5 = (uint)param_2;
  uVar7 = (uint)((ulong)param_2 >> 0x20);
  if (uVar7 == uVar5) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar9 = DAT_101057be6;
    uVar8 = DAT_101057be4;
    uVar6 = DAT_101057be0;
    uVar10 = DAT_101057bd8;
    lVar4 = DAT_101057bd0;
    _swift_retain();
  }
  else {
    uVar1 = uVar7 + ~uVar5 | uVar7 + ~uVar5 >> 1;
    uVar1 = uVar1 | uVar1 >> 2;
    uVar1 = uVar1 | uVar1 >> 4;
    uVar1 = uVar1 | uVar1 >> 8;
    uVar1 = uVar1 | uVar1 >> 0x10;
    uVar6 = uVar1 + 1;
    if (uVar1 == 0xffffffff) {
      uVar6 = 0xffffffff;
    }
    pvVar3 = _malloc((ulong)uVar6);
    if (pvVar3 == (void *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060d958);
      (*pcVar2)();
    }
    lVar4 = 0;
    FUN_1006140ec();
    _swift_allocObject();
    uVar8 = 0;
    uVar9 = 0;
    *(uint *)(lVar4 + 0x10) = uVar6;
    *(void **)(lVar4 + 0x18) = pvVar3;
    *(code **)(lVar4 + 0x20) = _malloc;
    *(code **)(lVar4 + 0x28) = FUN_100611bf8;
    *(code **)(lVar4 + 0x30) = _free;
    *(code **)(lVar4 + 0x38) = FUN_100611c04;
    uVar10 = 0;
  }
  local_70 = (undefined4)param_3;
  local_6c = (undefined2)((ulong)param_3 >> 0x20);
  local_6a = (undefined1)((ulong)param_3 >> 0x30);
  local_80 = param_1;
  local_78 = uVar5;
  uStack_74 = uVar7;
  local_68 = lVar4;
  local_60 = uVar10;
  local_58 = uVar6;
  local_54 = uVar8;
  local_52 = uVar9;
  FUN_10060c3b0(&local_80);
  _swift_release(param_1);
  return local_68;
}



/* Address: 0x10060d958 | FUN_10060d958 */

ulong FUN_10060d958(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 auStack_98 [24];
  undefined8 local_80;
  int local_78;
  int iStack_74;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  iVar3 = (int)((ulong)param_2 >> 0x20);
  uVar1 = iVar3 - (int)param_2;
  uVar2 = (ulong)uVar1;
  if (uVar1 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar6 = DAT_101057be6;
    uVar4 = DAT_101057be4;
    uVar5 = DAT_101057be0;
    uVar7 = DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    FUN_100613fa8(uVar2,param_4,param_5,param_6,param_7);
    _swift_beginAccess(uVar2 + 0x10,auStack_98,0,0);
    uVar4 = 0;
    uVar6 = 0;
    uVar5 = *(undefined4 *)(uVar2 + 0x10);
    uVar7 = 0;
  }
  local_70 = (undefined4)param_3;
  local_6c = (undefined2)((ulong)param_3 >> 0x20);
  local_6a = (undefined1)((ulong)param_3 >> 0x30);
  local_80 = param_1;
  local_78 = (int)param_2;
  iStack_74 = iVar3;
  local_68 = uVar2;
  local_60 = uVar7;
  local_58 = uVar5;
  local_54 = uVar4;
  local_52 = uVar6;
  FUN_10060c3b0(&local_80);
  return local_68;
}



/* Address: 0x10060da90 | FUN_10060da90 */

undefined8 FUN_10060da90(undefined8 param_1)

{
  undefined8 uVar1;
  DispatchData DVar2;
  
  uVar1 = param_1;
  FUN_10060db0c(param_1,_malloc,FUN_100611bf8,_free,FUN_100611c04);
  DVar2 = Dispatch::DispatchData::typeMetadataAccessor();
  (**(code **)(*(long *)(DVar2.unknown + -8) + 8))(param_1,DVar2.unknown);
  return uVar1;
}



/* Address: 0x10060db0c | FUN_10060db0c */

ulong FUN_10060db0c(DispatchData param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                   undefined8 param_5)

{
  code *pcVar1;
  ulong uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  uVar2 = Dispatch::DispatchData::get_count(param_1);
  if ((long)uVar2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dc48);
    (*pcVar1)();
  }
  if (uVar2 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar6 = DAT_101057be6;
    uVar5 = DAT_101057be4;
    uVar7 = DAT_101057be0;
    uVar3 = DAT_101057bd8._4_4_;
    uVar4 = (undefined4)DAT_101057bd8;
    uVar2 = DAT_101057bd0;
    _swift_retain(DAT_101057bd0);
  }
  else {
    if (uVar2 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dc58);
      (*pcVar1)();
    }
    FUN_100613fa8(uVar2,param_2,param_3,param_4,param_5);
    _swift_beginAccess(uVar2 + 0x10,auStack_80,0,0);
    uVar4 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = *(undefined4 *)(uVar2 + 0x10);
  }
  local_68 = uVar2;
  local_60 = uVar4;
  local_5c = uVar3;
  local_58 = uVar7;
  local_54 = uVar5;
  local_52 = uVar6;
  FUN_10060bc50(param_1.unknown,uVar3);
  if ((long)param_1.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dc4c);
    (*pcVar1)();
  }
  if ((ulong)param_1.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dc50);
    (*pcVar1)();
  }
  if (!CARRY4(local_5c,(uint)param_1.unknown)) {
    return local_68;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dc54);
  (*pcVar1)();
}



/* Address: 0x10060dc70 | FUN_10060dc70 */

void FUN_10060dc70(void)

{
  long lVar1;
  long in_x3;
  undefined8 in_x4;
  undefined8 in_x5;
  long unaff_x21;
  long lVar2;
  undefined8 auStack_40 [2];
  
  lVar2 = *(long *)(in_x3 + -8);
  lVar1 = -(*(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0);
  *(undefined8 *)((long)auStack_40 + lVar1) = in_x4;
  *(undefined1 **)((long)auStack_40 + lVar1 + 8) = &stack0xffffffffffffffd0 + lVar1;
  FUN_10060dd10();
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))(in_x5,&stack0xffffffffffffffd0 + lVar1,in_x3);
  }
  return;
}



/* Address: 0x10060dd10 | FUN_10060dd10 */

void FUN_10060dd10(ulong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
                  undefined8 param_9,undefined8 param_10)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  long unaff_x21;
  long lVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [24];
  ulong local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  
  lVar3 = *(long *)(param_8 + -8);
  lVar4 = (long)&local_a0 - (*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dea0);
    (*pcVar1)();
  }
  if (param_1 == 0) {
    if (DAT_100fd6f38 != -1) {
      _swift_once(&DAT_100fd6f38,FUN_100611c84);
    }
    uVar5 = DAT_101057be6;
    uVar6 = DAT_101057be4;
    uVar7 = DAT_101057be0;
    uVar2 = DAT_101057bd0;
    uStack_98 = 0;
    local_a0 = DAT_101057bd8;
    _swift_retain(DAT_101057bd0);
    local_70 = local_a0;
  }
  else {
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060dea4);
      (*pcVar1)();
    }
    uVar2 = param_1;
    FUN_100613fa8(param_1,param_4,param_5,param_6,param_7);
    _swift_beginAccess(uVar2 + 0x10,auStack_90,0,0);
    uVar6 = 0;
    uVar5 = 0;
    uVar7 = *(undefined4 *)(uVar2 + 0x10);
    local_70 = 0;
  }
  local_78 = uVar2;
  local_68 = uVar7;
  local_64 = uVar6;
  local_62 = uVar5;
  FUN_10061174c(param_1,param_2,param_3,param_8,param_9,lVar4);
  if (unaff_x21 != 0) {
    _swift_release(local_78);
    (**(code **)(lVar3 + 0x20))(param_10,lVar4,param_8);
  }
  return;
}



/* Address: 0x10060dec4 | FUN_10060dec4 */

ulong FUN_10060dec4(ulong param_1,undefined8 param_2,ulong param_3)

{
  long unaff_x21;
  
  FUN_10060fc38();
  if (unaff_x21 != 0) {
    param_1 = param_3 & 0xffffffffffffff;
  }
  return param_1;
}



/* Address: 0x10060deec | FUN_10060deec */

void FUN_10060deec(long param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  code *pcVar1;
  char *pcVar2;
  void *pvVar3;
  ulong uVar4;
  String SVar5;
  undefined1 auStack_a0 [24];
  undefined8 local_88;
  undefined8 local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined2 local_64;
  undefined1 local_62;
  ulong local_60;
  ulong uStack_58;
  
  uVar4 = param_3 >> 0x20;
  pvVar3 = *(void **)(param_1 + 0x20);
  FUN_100004640(param_1,*(undefined8 *)(param_1 + 0x18));
  Swift::Encoder::_singleValueContainer();
  local_60 = param_3 & 0xffffffff;
  if (uVar4 < local_60) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060e004);
    (*pcVar1)();
  }
  local_68 = (int)param_4;
  if (uVar4 <= local_68 -
               ((ushort)((ulong)param_4 >> 0x30) & 0xff |
               ((uint)((ulong)param_4 >> 0x20) & 0xffff) << 8)) {
    local_70 = (undefined4)param_3;
    uStack_6c = (undefined4)(param_3 >> 0x20);
    local_64 = (undefined2)((ulong)param_4 >> 0x20);
    local_62 = (undefined1)((ulong)param_4 >> 0x30);
    local_78 = param_2;
    uStack_58 = uVar4;
    _swift_retain(param_2);
    pcVar2 = (char *)&local_78;
    FUN_10060f320();
    FUN_10060fd58(&local_78);
    FUN_10007d048(auStack_a0,local_88);
    SVar5.bridgeObject = pvVar3;
    SVar5.str = pcVar2;
    Swift::SingleValueEncodingContainer::_encode(SVar5);
    _swift_bridgeObjectRelease(pvVar3);
    FUN_100004594(auStack_a0);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060e008);
  (*pcVar1)();
}



/* Address: 0x10060e008 | FUN_10060e008 */

void FUN_10060e008(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  long unaff_x21;
  
  uVar4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar3 = (undefined4)param_4;
  uVar2 = (undefined4)((ulong)param_3 >> 0x20);
  uVar1 = (undefined4)param_3;
  FUN_10060fc38();
  if (unaff_x21 == 0) {
    *param_1 = param_2;
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined4 *)((long)param_1 + 0xc) = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar3;
    *(short *)((long)param_1 + 0x14) = (short)uVar4;
    *(char *)((long)param_1 + 0x16) = (char)((uint)uVar4 >> 0x10);
  }
  return;
}



/* Address: 0x10060e04c | FUN_10060e04c */

void FUN_10060e04c(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10060deec(param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  return;
}



/* Address: 0x10060e078 | FUN_10060e078 */

void FUN_10060e078(UTF8View param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  undefined2 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined8 uVar7;
  undefined1 auStack_80 [24];
  ulong local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar2 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar2 = param_2 >> 0x38 & 0xf;
    }
    uVar3 = uVar2 >> 1;
    if (uVar2 < 2) {
LAB_10060e164:
      if (DAT_100fd6f38 != -1) {
        _swift_once(&DAT_100fd6f38,FUN_100611c84);
      }
      uVar6 = DAT_101057be6;
      uVar4 = DAT_101057be4;
      uVar5 = DAT_101057be0;
      uVar7 = DAT_101057bd8;
      uVar3 = DAT_101057bd0;
      _swift_retain(DAT_101057bd0);
      goto LAB_10060e1a0;
    }
  }
  else {
    uVar2 = Swift::String::UTF8View::_foreignCount(param_1);
    if ((long)uVar2 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060e13c);
      (*pcVar1)();
    }
    uVar3 = (long)uVar2 / 2;
    if ((long)uVar2 < 2) goto LAB_10060e164;
  }
  if (uVar2 >> 0x21 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060e140);
    (*pcVar1)();
  }
  FUN_100613fa8(uVar3,param_3,param_4,param_5,param_6);
  _swift_beginAccess(uVar3 + 0x10,auStack_80,0,0);
  uVar4 = 0;
  uVar6 = 0;
  uVar5 = *(undefined4 *)(uVar3 + 0x10);
  uVar7 = 0;
LAB_10060e1a0:
  local_68 = uVar3;
  local_60 = uVar7;
  local_58 = uVar5;
  local_54 = uVar4;
  local_52 = uVar6;
  FUN_10060affc(param_1.unknown,param_2);
  if (unaff_x21 != 0) {
    _swift_release(local_68);
  }
  return;
}



/* Address: 0x10060e230 | FUN_10060e230 */

void FUN_10060e230(void)

{
  FUN_10060e23c();
  return;
}



/* Address: 0x10060e23c | FUN_10060e23c */

void FUN_10060e23c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 local_28;
  undefined8 uStack_20;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  local_18 = (undefined4)param_3;
  local_12 = (undefined1)((ulong)param_3 >> 0x30);
  local_14 = (undefined2)((ulong)param_3 >> 0x20);
  local_28 = param_1;
  uStack_20 = param_2;
  (*param_4)(&local_28);
  return;
}



/* Address: 0x10060e274 | FUN_10060e274 */

long * FUN_10060e274(long *param_1)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long *unaff_x20;
  
  if (*unaff_x20 != 0) {
    FUN_10060c3b0();
    return param_1;
  }
  lVar5 = param_1[1];
  iVar1 = *(int *)((long)param_1 + 0xc);
  lVar4 = param_1[1];
  lVar7 = *param_1;
  lVar6 = param_1[2];
  uVar3 = *(undefined2 *)((long)param_1 + 0x14);
  uVar2 = *(undefined1 *)((long)param_1 + 0x16);
  *unaff_x20 = lVar7;
  unaff_x20[1] = lVar4;
  *(undefined1 *)((long)unaff_x20 + 0x16) = uVar2;
  *(undefined2 *)((long)unaff_x20 + 0x14) = uVar3;
  *(int *)(unaff_x20 + 2) = (int)lVar6;
  *(int *)(param_1 + 1) = iVar1;
  _swift_retain(lVar7);
  return (long *)(ulong)(uint)(iVar1 - (int)lVar5);
}



/* Address: 0x10060e2dc | FUN_10060e2dc */

undefined1  [16] FUN_10060e2dc(long param_1,ulong param_2,undefined8 param_3)

{
  uint uVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  UnsafeBufferPointer<static_Swift_String__validate<A_where_A:_Swift__UnicodeEncoding>(_:_Swift_UnsafeBufferPointer<A_CodeUnit>,as:_A_Type)__>_Swift_String_>
  UVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  String as;
  undefined1 auStack_58 [24];
  
  thunk_FUN_10061160c();
  if (param_1 == 0) {
    UVar5.unknown = (undefined *)0x0;
    pcVar6 = (char *)0x0;
  }
  else {
    uVar3 = param_2 >> 0x20;
    param_2 = param_2 & 0xffffffff;
    pcVar6 = (char *)(uVar3 - param_2);
    if (uVar3 < param_2) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060e400);
      (*pcVar2)();
    }
    uVar1 = (uint)((ulong)param_3 >> 0x18) & 0xffff00 | (ushort)((ulong)param_3 >> 0x30) & 0xff;
    if ((int)param_3 - uVar1 < uVar3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060e404);
      (*pcVar2)();
    }
    _swift_beginAccess(param_1 + 0x18,auStack_58,0,0);
    lVar4 = *(long *)(param_1 + 0x18);
    FUN_10060fd8c();
    _swift_retain(param_1);
    UVar5.unknown = (undefined *)(lVar4 + (ulong)uVar1 + param_2);
    as.bridgeObject = PTR___type_metadata_for_Swift_Unicode_UTF8_100eadf50;
    as.str = pcVar6;
    Swift::String::__validate(UVar5,as);
    lVar4 = param_1;
    _swift_release(param_1);
    if (pcVar6 == (char *)0x0) {
      FUN_10060fdcc();
      _swift_allocError(&DAT_100eea7f8,lVar4,0,0);
      _swift_willThrow();
      _swift_release(param_1);
    }
    else {
      _swift_release(param_1);
    }
  }
  auVar7._8_8_ = pcVar6;
  auVar7._0_8_ = UVar5.unknown;
  return auVar7;
}



/* Address: 0x10060e404 | FUN_10060e404 */

void FUN_10060e404(ulong param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  code *pcVar4;
  ulong uVar5;
  undefined8 *unaff_x20;
  long unaff_x21;
  
  uVar2 = *(uint *)(unaff_x20 + 1);
  uVar3 = *(uint *)((long)unaff_x20 + 0xc);
  uVar5 = param_1;
  FUN_10060e2dc(uVar2,param_1,*unaff_x20,unaff_x20[1],(ulong)*(uint7 *)(unaff_x20 + 2));
  if ((unaff_x21 == 0) && (uVar5 != 0)) {
    if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060e484);
      (*pcVar4)();
    }
    if (param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060e488);
      (*pcVar4)();
    }
    uVar1 = uVar2 + (uint)param_1;
    if (CARRY4(uVar2,(uint)param_1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060e48c);
      (*pcVar4)();
    }
    if (uVar3 < uVar1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10060e490);
      (*pcVar4)();
    }
    *(uint *)(unaff_x20 + 1) = uVar1;
  }
  return;
}



/* Address: 0x10060e490 | FUN_10060e490 */

void FUN_10060e490(undefined8 param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  FUN_10060e2dc(param_3 & 0xffffffff,param_1,param_2,param_3,param_4 & 0xffffffffffffff);
  return;
}



/* Address: 0x10060e4bc | FUN_10060e4bc */

ulong FUN_10060e4bc(long param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined1 uVar4;
  byte bVar5;
  ushort uVar6;
  code *pcVar7;
  uint uVar8;
  ulong uVar9;
  ulong *unaff_x20;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  long local_88;
  long lStack_80;
  ulong local_78;
  uint local_70;
  short local_6c;
  char local_6a;
  byte local_69;
  ulong local_68;
  
  uVar11 = param_3 - param_2;
  if (param_3 < param_2) {
    uVar11 = uVar11 + *(long *)(param_1 + 0x10);
  }
  if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6f8);
    (*pcVar7)();
  }
  if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6fc);
    (*pcVar7)();
  }
  uVar1 = param_4 + (uint)uVar11;
  if (CARRY4(param_4,(uint)uVar11)) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e700);
    (*pcVar7)();
  }
  uVar9 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar8 = (uint)uVar9;
  if ((uVar9 & 1) == 0) {
    iVar3 = 0;
    if ((uint)unaff_x20[2] <= uVar1) {
      iVar3 = uVar1 - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar3,uVar8 & 1);
  }
  FUN_100612a64(uVar11);
  FUN_10060ea90(&local_88);
  if ((long)local_78 < 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e704);
    (*pcVar7)();
  }
  if (local_78 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e708);
    (*pcVar7)();
  }
  uVar11 = (ulong)local_70;
  if ((((uVar11 == local_78) && (local_6c == -1)) && (local_6a == -1)) &&
     ((((long)local_78 < lStack_80 ^ local_69) & 1) != 0)) {
    _swift_release(local_88);
    if ((long)local_68 < 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e70c);
      (*pcVar7)();
    }
    uVar10 = local_68;
    if (local_68 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e5d4);
      (*pcVar7)();
    }
  }
  else {
    uVar9 = local_68;
    do {
      if (*(ulong *)(local_88 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6e4);
        (*pcVar7)();
      }
      puVar2 = (undefined1 *)(local_88 + 0x20 + uVar11 * 2);
      if (puVar2[1] == '\x01') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e710);
        (*pcVar7)();
      }
      uVar11 = *(ulong *)(local_88 + 0x10) + 0x1ffffffff & uVar11 + 1;
      if (uVar11 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6e8);
        (*pcVar7)();
      }
      uVar10 = uVar9 + 1;
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6ec);
        (*pcVar7)();
      }
      if ((long)uVar10 < 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6f0);
        (*pcVar7)();
      }
      if (uVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10060e6f4);
        (*pcVar7)();
      }
      uVar4 = *puVar2;
      FUN_100612380(uVar10,param_4);
      uVar12 = *unaff_x20;
      uVar6 = *(ushort *)((long)unaff_x20 + 0x14);
      bVar5 = *(byte *)((long)unaff_x20 + 0x16);
      _swift_beginAccess(uVar12 + 0x18,&local_88,0,0);
      *(undefined1 *)
       (*(long *)(uVar12 + 0x18) + (ulong)uVar6 * 0x100 + (ulong)bVar5 + (ulong)param_4 + uVar9) =
           uVar4;
      uVar9 = uVar9 + 1;
    } while ((uVar11 != local_78) || ((long)local_78 < lStack_80 == lStack_80 <= (long)uVar11));
    _swift_release(local_88);
  }
  return uVar10;
}



/* Address: 0x10060e710 | FUN_10060e710 */

void FUN_10060e710(UTF8View param_1,ulong param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  ulong uVar6;
  _StringGuts into;
  ulong *unaff_x20;
  _StringGuts _Var7;
  
  puVar5 = &DAT_100fd6f00;
  FUN_1000f7830(&DAT_100fd6f00,&DAT_100c678f8);
  if (puVar5 == PTR___type_metadata_for_Swift_String_UTF8View_100eac1a0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e810);
    (*pcVar3)();
  }
  if ((param_2 >> 0x3c & 1) == 0) {
    if ((param_2 >> 0x3d & 1) != 0) {
      _Var7.unknown = (undefined *)(param_2 >> 0x38 & 0xf);
      goto LAB_10060e770;
    }
    _Var7.unknown = param_1.unknown & 0xffffffffffff;
  }
  else {
    _Var7.unknown = (undefined *)Swift::String::UTF8View::_foreignCount(param_1);
    if ((long)_Var7.unknown < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e800);
      (*pcVar3)();
    }
  }
  if ((ulong)_Var7.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e76c);
    (*pcVar3)();
  }
LAB_10060e770:
  uVar1 = param_3 + (uint)_Var7.unknown;
  if (CARRY4(param_3,(uint)_Var7.unknown)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e804);
    (*pcVar3)();
  }
  uVar6 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar4 = (uint)uVar6;
  if ((uVar6 & 1) == 0) {
    iVar2 = 0;
    if ((uint)unaff_x20[2] <= uVar1) {
      iVar2 = uVar1 - (uint)unaff_x20[2];
    }
    FUN_1000d2130();
    FUN_100612358(iVar2,uVar4 & 1);
  }
  into.unknown = _Var7.unknown;
  FUN_100612a64();
  Swift::_StringGuts::_copyUTF8((UnsafeMutableBufferPointer<__int8>)into.unknown,_Var7);
  if (((uint)_Var7.unknown & 0xff) == 1) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e814);
    (*pcVar3)();
  }
  if ((long)into.unknown < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e808);
    (*pcVar3)();
  }
  if ((ulong)into.unknown >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e80c);
    (*pcVar3)();
  }
  return;
}



/* Address: 0x10060e824 | FUN_10060e824 */

void * FUN_10060e824(void *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  code *pcVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  void *pvVar8;
  ulong *unaff_x20;
  
  puVar5 = &DAT_100fd6f10;
  FUN_1000f7830(&DAT_100fd6f10,&DAT_100c67908);
  puVar6 = &DAT_100fd6f00;
  FUN_1000f7830(&DAT_100fd6f00,&DAT_100c678f8);
  if (puVar5 == puVar6) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e8fc);
    (*pcVar3)();
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e8f0);
    (*pcVar3)();
  }
  if ((ulong)param_1 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e8f4);
    (*pcVar3)();
  }
  uVar1 = param_3 + (uint)param_1;
  if (!CARRY4(param_3,(uint)param_1)) {
    uVar7 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar4 = (uint)uVar7;
    if ((uVar7 & 1) == 0) {
      iVar2 = 0;
      if ((uint)unaff_x20[2] <= uVar1) {
        iVar2 = uVar1 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar2,uVar4 & 1);
    }
    pvVar8 = param_1;
    FUN_100612a64();
    if (param_1 != (void *)0x0) {
      _memset(pvVar8,param_2,(size_t)param_1);
    }
    return param_1;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060e8f8);
  (*pcVar3)();
}



/* Address: 0x10060e8fc | FUN_10060e8fc */

undefined8 FUN_10060e8fc(undefined1 param_1,int param_2)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  ulong *unaff_x20;
  
  puVar4 = &DAT_100fd6f08;
  FUN_1000f7830(&DAT_100fd6f08,&DAT_100c67900);
  puVar5 = &DAT_100fd6f00;
  FUN_1000f7830(&DAT_100fd6f00,&DAT_100c678f8);
  if (puVar4 == puVar5) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060e9a8);
    (*pcVar2)();
  }
  if (param_2 != -1) {
    uVar6 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = (uint)uVar6;
    if ((uVar6 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= param_2 + 1U) {
        iVar1 = (param_2 + 1U) - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar3 & 1);
    }
    puVar7 = &DAT_00000001;
    FUN_100612a64();
    *puVar7 = param_1;
    return 1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060e9a4);
  (*pcVar2)();
}



/* Address: 0x10060e9a8 | FUN_10060e9a8 */

undefined8 FUN_10060e9a8(uint param_1)

{
  int iVar1;
  code *pcVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  ulong *unaff_x20;
  
  puVar4 = &DAT_100fd6ef8;
  FUN_1000f7830(&DAT_100fd6ef8,&DAT_100c678f0);
  puVar5 = &DAT_100fd6f00;
  FUN_1000f7830(&DAT_100fd6f00,&DAT_100c678f8);
  if (puVar4 != puVar5) {
    uVar6 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar3 = (uint)uVar6;
    if ((uVar6 & 1) == 0) {
      iVar1 = 0;
      if ((uint)unaff_x20[2] <= param_1) {
        iVar1 = param_1 - (uint)unaff_x20[2];
      }
      FUN_1000d2130();
      FUN_100612358(iVar1,uVar3 & 1);
    }
    FUN_100612a64(0);
    return 0;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060ea40);
  (*pcVar2)();
}



/* Address: 0x10060ea40 | FUN_10060ea40 */

long FUN_10060ea40(ulong param_1,ulong param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if ((param_1 >> 0x38 & 1) != 0) {
    lVar1 = (*(long *)(param_3 + 0x10) - (param_1 & 0xffffffff)) + (param_2 & 0xffffffff);
    if ((param_2 & 0x100000000000000) != 0) {
      lVar1 = (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
    }
    return lVar1;
  }
  if (((uint)(param_2 >> 0x38) & 1) == 0) {
    return (param_2 & 0xffffffff) - (param_1 & 0xffffffff);
  }
  lVar1 = ((param_1 & 0xffffffff) - (param_2 & 0xffffffff)) + *(long *)(param_3 + 0x10);
  if (!SBORROW8(0,lVar1)) {
    return -lVar1;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060ea90);
  (*pcVar2)();
}



/* Address: 0x10060ea90 | FUN_10060ea90 */

void FUN_10060ea90(ulong *param_1,char *param_2,long param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  char *pcVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  char *pcVar7;
  ulong uVar8;
  
  lVar6 = param_6 - param_5;
  if ((long)param_6 < (long)param_5) {
    lVar6 = lVar6 + *(long *)(param_4 + 0x10);
  }
  if (param_3 < lVar6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec44);
    (*pcVar1)();
  }
  if (param_2 == (char *)0x0) {
    if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec54);
      (*pcVar1)();
    }
    if (param_5 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec58);
      (*pcVar1)();
    }
    uVar8 = 0;
    uVar4 = param_5;
    uVar3 = param_4;
    uVar5 = param_6;
    goto LAB_10060ec04;
  }
  if ((long)param_6 < (long)param_5) {
    lVar6 = *(long *)(param_4 + 0x10) - param_5;
    if (*(long *)(param_4 + 0x10) < (long)param_5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec5c);
      (*pcVar1)();
    }
    if (lVar6 != 0) {
      pcVar7 = (char *)(param_4 + param_5 * 2 + 0x21);
      pcVar2 = param_2;
      do {
        if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec38);
          (*pcVar1)();
        }
        if (*pcVar7 == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec68);
          (*pcVar1)();
        }
        param_2 = pcVar2 + 1;
        *pcVar2 = pcVar7[-1];
        pcVar7 = pcVar7 + 2;
        lVar6 = lVar6 + -1;
        pcVar2 = param_2;
      } while (lVar6 != 0);
    }
    if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec60);
      (*pcVar1)();
    }
    if (param_6 != 0) {
      uVar8 = param_6;
      pcVar7 = (char *)(param_4 + 0x21);
      do {
        if (*pcVar7 == '\x01') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec64);
          (*pcVar1)();
        }
        *param_2 = pcVar7[-1];
        uVar8 = uVar8 - 1;
        param_2 = param_2 + 1;
        pcVar7 = pcVar7 + 2;
      } while (uVar8 != 0);
LAB_10060eb64:
      if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060eb6c);
        (*pcVar1)();
      }
      goto LAB_10060ebac;
    }
  }
  else {
    if (param_6 == param_5) goto LAB_10060eb64;
    pcVar7 = (char *)(param_4 + param_5 * 2 + 0x21);
    uVar8 = param_5;
    do {
      if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec3c);
        (*pcVar1)();
      }
      if (*(ulong *)(param_4 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec40);
        (*pcVar1)();
      }
      if (*pcVar7 == '\x01') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec6c);
        (*pcVar1)();
      }
      uVar8 = uVar8 + 1;
      *param_2 = pcVar7[-1];
      pcVar7 = pcVar7 + 2;
      param_2 = param_2 + 1;
    } while (param_6 != uVar8);
LAB_10060ebac:
    if (param_6 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec48);
      (*pcVar1)();
    }
  }
  uVar8 = 0;
  if ((long)param_5 <= (long)param_6) {
    uVar8 = 0x100000000000000;
  }
  uVar3 = param_6 | uVar8 | 0xffffff00000000;
  uVar4 = param_6 | uVar8 | 0xffffff00000000;
  uVar5 = param_4;
  FUN_10060f490();
  if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec4c);
    (*pcVar1)();
  }
  if (uVar4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ec50);
    (*pcVar1)();
  }
  uVar8 = param_6 - param_5;
  if ((long)param_6 < (long)param_5) {
    uVar8 = uVar8 + *(long *)(param_4 + 0x10);
  }
LAB_10060ec04:
  _swift_retain(uVar3);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  *(int *)(param_1 + 3) = (int)uVar4;
  *(undefined4 *)((long)param_1 + 0x1c) = 0x1ffffff;
  param_1[4] = uVar8;
  return;
}



/* Address: 0x10060ec6c | FUN_10060ec6c */

void FUN_10060ec6c(__int64 param_1,code *param_2,undefined8 param_3,long param_4,undefined8 param_5,
                  long param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  UnsafeMutableBufferPointer<undefined> UVar2;
  UnsafeMutableBufferPointer<undefined> UVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long unaff_x21;
  long lVar8;
  undefined8 local_80;
  undefined *local_78;
  long lStack_70;
  long local_68;
  
  lVar7 = *(long *)(param_6 + -8);
  lVar8 = (long)&local_80 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = param_4;
  local_80 = param_8;
  UVar2 = Swift::UnsafeMutableBufferPointer::_init(param_1);
  lVar6 = 0;
  UVar3 = UVar2;
  lVar5 = lVar4;
  FUN_10060ed88();
  local_78 = UVar3.unknown;
  lStack_70 = lVar5;
  local_68 = lVar6;
  (*param_2)(&local_78,lVar8);
  if (unaff_x21 == 0) {
    if (UVar2.unknown == (undefined *)0x0) {
      if (local_78 != (undefined *)0x0) goto LAB_10060ed84;
    }
    else {
      if (local_78 == (undefined *)0x0) {
LAB_10060ed84:
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ed88);
        (*pcVar1)();
      }
      if (UVar2.unknown != local_78) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ed48);
        (*pcVar1)();
      }
    }
    if (lVar4 != lStack_70) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ed80);
      (*pcVar1)();
    }
    if (param_4 != local_68) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ed84);
      (*pcVar1)();
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(local_80,lVar8,param_6);
    FUN_10060ee44(local_78,lStack_70,local_68,param_5);
  }
  return;
}



/* Address: 0x10060ed88 | FUN_10060ed88 */

undefined1  [16] FUN_10060ed88(long param_1,long param_2,long param_3,long param_4)

{
  code *pcVar1;
  bool bVar2;
  UnsafeMutablePointer UVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 auVar6 [16];
  long local_50;
  long lStack_48;
  
  if (param_1 != 0) {
    lVar5 = *(long *)(param_4 + -8);
    if ((*(uint *)(lVar5 + 0x50) & (uint)param_1 & 0xff) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ee3c);
      (*pcVar1)();
    }
    UVar3 = Swift::UnsafeMutablePointer::typeMetadataAccessor();
    lStack_48 = param_1 + *(long *)(lVar5 + 0x48) * param_2;
    puVar4 = PTR_Swift__Swift__UnsafeMutablePointer<undefined>_>Swift__Comparable_100eac9b8;
    local_50 = param_1;
    _swift_getWitnessTable
              (PTR_Swift__Swift__UnsafeMutablePointer<undefined>_>Swift__Comparable_100eac9b8,
               UVar3.unknown);
    bVar2 = (extension_Swift)::Swift::Comparable::>__infix
                      (&lStack_48,&local_50,UVar3.unknown,puVar4);
    if (!bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ee44);
      (*pcVar1)();
    }
  }
  if ((-1 < param_3) && (param_3 <= param_2)) {
    auVar6._8_8_ = param_2;
    auVar6._0_8_ = param_1;
    return auVar6;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10060ee40);
  (*pcVar1)();
}



/* Address: 0x10060ee44 | FUN_10060ee44 */

void FUN_10060ee44(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  undefined1 auStack_40 [16];
  undefined8 local_30;
  long lStack_28;
  
  if (0 < param_3) {
    local_30 = param_4;
    lStack_28 = param_3;
    FUN_10060eeb8(param_4,param_3,FUN_100610164,auStack_40,param_1,param_4,
                  PTR___type_metadata_for_Swift_Never_100eadc38,
                  PTR___type_metadata_for____100eae0c8 + 8,
                  PTR___protocol_witness_table_for_Swift_Never___Swift_Error_in_Swift_100eadc40);
  }
  return;
}



/* Address: 0x10060eeb8 | FUN_10060eeb8 */

void FUN_10060eeb8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  long lVar1;
  long unaff_x21;
  long lVar2;
  undefined8 in_stack_00000008;
  
  lVar2 = *(long *)(param_7 + -8);
  lVar1 = *(long *)(lVar2 + 0x40);
  (*param_3)(param_5,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0));
  if (unaff_x21 != 0) {
    (**(code **)(lVar2 + 0x20))
              (in_stack_00000008,&stack0xffffffffffffffd0 + -(lVar1 + 0xfU & 0xfffffffffffffff0),
               param_7);
  }
  return;
}



/* Address: 0x10060ef28 | FUN_10060ef28 */

undefined * FUN_10060ef28(UTF8View param_1,ulong param_2)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  __uint8 _Var4;
  Index position;
  UnsafeBufferPointer<__int8> UVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  Index after;
  undefined *local_70;
  ulong uStack_68;
  
  uVar8 = param_2 >> 0x38 & 0xf;
  if ((param_2 >> 0x3c & 1) == 0) {
    uVar6 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar6 = uVar8;
    }
  }
  else {
    uVar6 = Swift::String::UTF8View::_foreignCount(param_1);
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar6 != 0) {
    FUN_10060f200(0,uVar6 & ((long)uVar6 >> 0x3f ^ 0xffffffffffffffffU),0);
    if ((long)uVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10060f15c);
      (*pcVar3)();
    }
    uVar7 = (uint)((ulong)param_1.unknown >> 0x3b) & 1;
    if ((param_2 & 0x1000000000000000) == 0) {
      uVar7 = 1;
    }
    uVar1 = (ulong)param_1.unknown & 0xffffffffffff;
    if ((param_2 & 0x2000000000000000) != 0) {
      uVar1 = uVar8;
    }
    after.cmsgPointer.unknown = (UnsafeMutablePointer)(undefined *)0xf;
    do {
      while( true ) {
        position.cmsgPointer.unknown = after.cmsgPointer.unknown;
        if (((ulong)after.cmsgPointer.unknown & 0xc) == 4L << uVar7) {
          FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        }
        uVar8 = (ulong)position.cmsgPointer.unknown >> 0x10;
        if (uVar1 <= uVar8) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10060f134);
          (*pcVar3)();
        }
        if ((param_2 >> 0x3c & 1) == 0) {
          if ((param_2 >> 0x3d & 1) == 0) {
            UVar5.unknown = (undefined *)((param_2 & 0xfffffffffffffff) + 0x20);
            if (((ulong)param_1.unknown >> 0x3c & 1) == 0) {
              UVar5 = Swift::_StringObject::get_sharedUTF8(param_1.unknown);
            }
            _Var4 = UVar5.unknown[uVar8];
          }
          else {
            local_70 = param_1.unknown;
            uStack_68 = param_2 & 0xffffffffffffff;
            _Var4 = *(__uint8 *)((long)&local_70 + uVar8);
          }
        }
        else {
          _Var4 = Swift::String::UTF8View::_foreignSubscript(position,param_1);
        }
        uVar8 = *(ulong *)(puVar2 + 0x10);
        if (*(ulong *)(puVar2 + 0x18) >> 1 <= uVar8) {
          FUN_10060f200(1 < *(ulong *)(puVar2 + 0x18),uVar8 + 1,1);
        }
        *(ulong *)(puVar2 + 0x10) = uVar8 + 1;
        puVar2[uVar8 + 0x20] = _Var4;
        if (((ulong)after.cmsgPointer.unknown & 0xc) != 4L << uVar7) break;
        FUN_1000740a8(after.cmsgPointer.unknown,param_1.unknown,param_2);
        if ((param_2 >> 0x3c & 1) == 0) goto LAB_10060efd4;
LAB_10060f070:
        if (uVar1 <= (ulong)after.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10060f138);
          (*pcVar3)();
        }
        after = Swift::String::UTF8View::_foreignIndex(after,param_1);
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) {
          return puVar2;
        }
      }
      if ((param_2 >> 0x3c & 1) != 0) goto LAB_10060f070;
LAB_10060efd4:
      after.cmsgPointer.unknown =
           (UnsafeMutablePointer)(((ulong)after.cmsgPointer.unknown & 0xffffffffffff0000) + 0x10004)
      ;
      uVar6 = uVar6 - 1;
    } while (uVar6 != 0);
  }
  return puVar2;
}



/* Address: 0x10060f15c | FUN_10060f15c */

undefined * FUN_10060f15c(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  
  if (param_2 <= param_1) {
    param_2 = param_1;
  }
  puVar1 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (param_2 != 0) {
    puVar1 = &DAT_100fd6f20;
    FUN_1000f7830(&DAT_100fd6f20,&DAT_100c67910);
    _swift_allocObject();
    puVar2 = puVar1;
    _malloc_size();
    *(long *)(puVar1 + 0x10) = param_1;
    *(long *)(puVar1 + 0x18) = (long)puVar2 * 2 + -0x40;
  }
  return puVar1;
}



/* Address: 0x10060f1cc | FUN_10060f1cc */

void FUN_10060f1cc(undefined8 param_1,undefined8 param_2)

{
  long unaff_x20;
  
  FUN_10060abb8(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x38),*(undefined1 *)(unaff_x20 + 0x40),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_2);
  return;
}



/* Address: 0x10060f200 | FUN_10060f200 */

void FUN_10060f200(undefined8 param_1)

{
  undefined8 *unaff_x20;
  
  FUN_10060f224();
  *unaff_x20 = param_1;
  return;
}



/* Address: 0x10060f224 | FUN_10060f224 */

undefined *
FUN_10060f224(ulong param_1,ulong param_2,ulong param_3,undefined *param_4,code *param_5)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  size_t sVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f320);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  sVar6 = *(size_t *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)sVar6) {
    uVar5 = sVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100fd6f20;
    FUN_1000f7830(&DAT_100fd6f20,&DAT_100c67910);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    *(size_t *)(puVar3 + 0x10) = sVar6;
    *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
  }
  puVar4 = puVar3 + 0x20;
  puVar1 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _memcpy(puVar4,puVar1,sVar6);
  }
  else {
    if (puVar3 != param_4 || puVar1 + sVar6 <= puVar4) {
      _memmove(puVar4,puVar1,sVar6);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  (*param_5)(param_4);
  return puVar3;
}



/* Address: 0x10060f320 | FUN_10060f320 */

/* WARNING: Removing unreachable block (ram,0x00010060f450) */

String FUN_10060f320(long param_1)

{
  code *pcVar1;
  byte bVar2;
  UnsafePointer<__int8> cString;
  UnsafePointer<__int8> UVar3;
  long lVar4;
  ulong unsafeUninitializedCapacity;
  String SVar5;
  
  lVar4 = *(long *)(param_1 + 0x20) - *(long *)(param_1 + 0x18);
  if (lVar4 == 0) {
    SVar5 = (String)(ZEXT816(0xe000000000000000) << 0x40);
  }
  else {
    if (SCARRY8(lVar4,2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060f448);
      (*pcVar1)();
    }
    lVar4 = SUB168(SEXT816(lVar4 + 2) * SEXT816(0x5555555555555556),8);
    lVar4 = lVar4 - (lVar4 >> 0x3f);
    if (lVar4 + 0xe000000000000000U >> 0x3e < 3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10060f44c);
      (*pcVar1)();
    }
    unsafeUninitializedCapacity = lVar4 * 4;
    FUN_1006725d8();
    bVar2 = Swift::_stdlib_isOSVersionAtLeast(0xb,0,0);
    if ((bVar2 & 1) == 0) {
      cString.unknown = (undefined *)(unsafeUninitializedCapacity | 1);
      _swift_slowAlloc(cString.unknown,0xffffffffffffffff);
      UVar3.unknown = cString.unknown;
      FUN_10060fea4();
      if ((long)unsafeUninitializedCapacity < (long)UVar3.unknown) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10060f450);
        (*pcVar1)();
      }
      cString.unknown[(long)UVar3.unknown] = 0;
      SVar5 = Swift::String::init(cString);
      _swift_slowDealloc(cString.unknown,0xffffffffffffffff,0xffffffffffffffff);
    }
    else {
      SVar5 = Swift::String::_init(unsafeUninitializedCapacity);
    }
  }
  return SVar5;
}



/* Address: 0x10060f464 | FUN_10060f464 */

long FUN_10060f464(ulong param_1,ulong param_2,long param_3,long param_4)

{
  ulong uVar1;
  code *pcVar2;
  
  uVar1 = 0;
  if (param_3 != 0) {
    uVar1 = param_4 - param_3;
  }
  if (param_1 <= uVar1) {
    if (param_2 <= uVar1) {
      return param_2 - param_1;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f490);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f48c);
  (*pcVar2)();
}



/* Address: 0x10060f490 | FUN_10060f490 */

long FUN_10060f490(ulong param_1,ulong param_2,long param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  code *pcVar2;
  long lVar3;
  
  if ((long)param_4 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f520);
    (*pcVar2)();
  }
  if (param_4 >> 0x20 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f524);
    (*pcVar2)();
  }
  lVar3 = *(long *)(param_3 + 0x10);
  if ((param_1 & 0x100000000000000) != 0) {
    lVar3 = 0;
  }
  if ((long)(((param_1 & 0xffffffff) - param_4) + lVar3) < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f528);
    (*pcVar2)();
  }
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f52c);
    (*pcVar2)();
  }
  if (param_5 >> 0x20 == 0) {
    uVar1 = 0xffffff00000000;
    if ((long)param_4 <= (long)param_5) {
      uVar1 = 0x1ffffff00000000;
    }
    param_2 = param_2 & 0x1ffffffffffffff;
    FUN_10060ea40(param_2,uVar1 | param_5,param_3);
    if (-1 < (long)param_2) {
      return param_3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f534);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f530);
  (*pcVar2)();
}



/* Address: 0x10060f534 | FUN_10060f534 */

void FUN_10060f534(ulong param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  code *pcVar3;
  uint uVar4;
  
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (param_1 >> 0xe <= uVar1 << 2) {
    uVar4 = (uint)(param_2 >> 0x3b) & 1;
    if ((param_3 & 0x1000000000000000) == 0) {
      uVar4 = 1;
    }
    uVar2 = 7;
    if (uVar4 == 0) {
      uVar2 = 0xb;
    }
    FUN_1005cdc80(param_1,uVar2 | uVar1 << 0x10,param_2,param_3);
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x10060f5a8);
  (*pcVar3)();
}



/* Address: 0x10060f5a8 | FUN_10060f5a8 */

ulong FUN_10060f5a8(long param_1,Index param_2,Index param_3,UTF8View param_4,ulong param_5,
                   undefined8 param_6,ulong param_7)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  Index to;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar4 = (uint)((ulong)param_4.unknown >> 0x3b) & 1;
  if ((param_5 & 0x1000000000000000) == 0) {
    uVar4 = 1;
  }
  uVar6 = 4L << uVar4;
  to.cmsgPointer.unknown = param_2.cmsgPointer.unknown;
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    uVar5 = (ulong)to.cmsgPointer.unknown >> 0x10;
  }
  else {
    uVar5 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar5 = param_5 >> 0x38 & 0xf;
    }
    if (uVar5 < (ulong)to.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f7a8);
      (*pcVar2)();
    }
    uVar5 = Swift::String::UTF8View::_foreignDistance((Index)0xf,to,param_4);
  }
  if (((ulong)param_2.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_2.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if (((ulong)param_3.cmsgPointer.unknown & 0xc) == uVar6) {
    FUN_1000740a8(param_3.cmsgPointer.unknown,param_4.unknown,param_5);
  }
  if ((param_5 >> 0x3c & 1) == 0) {
    lVar3 = ((ulong)param_3.cmsgPointer.unknown >> 0x10) -
            ((ulong)param_2.cmsgPointer.unknown >> 0x10);
  }
  else {
    uVar6 = (ulong)param_4.unknown & 0xffffffffffff;
    if ((param_5 & 0x2000000000000000) != 0) {
      uVar6 = param_5 >> 0x38 & 0xf;
    }
    if (uVar6 < (ulong)param_2.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f7a0);
      (*pcVar2)();
    }
    if (uVar6 < (ulong)param_3.cmsgPointer.unknown >> 0x10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f7a4);
      (*pcVar2)();
    }
    lVar3 = Swift::String::UTF8View::_foreignDistance(param_2,param_3,param_4);
  }
  if (SCARRY8(uVar5,lVar3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f790);
    (*pcVar2)();
  }
  if ((long)uVar5 <= (long)(uVar5 + lVar3)) {
    if ((long)param_7 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f798);
      (*pcVar2)();
    }
    if (param_7 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f79c);
      (*pcVar2)();
    }
    uVar6 = 0;
    if (param_1 != 0) {
      uVar6 = uVar5 + param_1;
    }
    lVar1 = 0;
    if (uVar6 != 0) {
      lVar1 = ((uVar5 + lVar3) - uVar5) + uVar6;
    }
    FUN_1006124ec(uVar6,lVar1,param_7);
    return uVar6 & 0xffffffff;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10060f794);
  (*pcVar2)();
}



/* Address: 0x10060f7a8 | FUN_10060f7a8 */

void FUN_10060f7a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10060c234(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),param_3);
  return;
}



/* Address: 0x10060f7c8 | FUN_10060f7c8 */

void FUN_10060f7c8(void)

{
  FUN_10060f7dc();
  return;
}



/* Address: 0x10060f7dc | FUN_10060f7dc */

void FUN_10060f7dc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x20;
  
  FUN_10060ca54(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                *(undefined8 *)(unaff_x20 + 0x20),param_3);
  return;
}



/* Address: 0x10060f800 | FUN_10060f800 */

undefined * FUN_10060f800(long *param_1,void *param_2)

{
  ulong uVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 *puVar6;
  long *plVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  undefined *unaff_x21;
  long lVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  String SVar16;
  
  SVar16.bridgeObject = param_2;
  SVar16.str = (char *)param_1;
  puVar6 = (undefined1 *)Swift::String::get_count(SVar16);
  if (((ulong)puVar6 & 3) == 0) {
    FUN_10060ef28(param_1,param_2);
    lVar11 = param_1[2];
    if (lVar11 == 0) {
      _swift_bridgeObjectRelease(param_1);
      unaff_x21 = PTR___swiftEmptyArrayStorage_100eae0d8;
    }
    else {
      plVar7 = param_1;
      FUN_1006725d8();
      unaff_x21 = PTR___swiftEmptyArrayStorage_100eae0d8;
      uVar13 = 0;
      do {
        bVar5 = SCARRY8(uVar13,4);
        uVar1 = uVar13 + 4;
        if ((ulong)param_1[2] <= uVar13) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc20);
          (*pcVar4)();
        }
        uVar10 = *(ulong *)(*plVar7 + 0x10);
        puVar8 = unaff_x21;
        if (uVar10 == 0) {
LAB_10060fb94:
          _swift_bridgeObjectRelease();
          FUN_100610124();
          _swift_allocError(&DAT_100ef46d8,param_1,0,0);
          *(undefined1 *)param_1 = 1;
          _swift_willThrow();
          _swift_bridgeObjectRelease(puVar8);
          return puVar8;
        }
        uVar12 = 0;
        lVar2 = *plVar7 + 0x20;
        while (*(char *)(lVar2 + uVar12) != *(char *)((long)param_1 + uVar13 + 0x20)) {
          uVar12 = uVar12 + 1;
          if (uVar10 == uVar12) goto LAB_10060fb94;
        }
        if ((ulong)param_1[2] <= uVar13 + 1) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc24);
          (*pcVar4)();
        }
        uVar15 = 0;
        while (*(char *)(lVar2 + uVar15) != *(char *)((long)param_1 + uVar13 + 0x21)) {
          uVar15 = uVar15 + 1;
          if (uVar10 == uVar15) goto LAB_10060fb94;
        }
        if (0xff < (uVar12 | uVar15)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc28);
          (*pcVar4)();
        }
        _swift_isUniquelyReferenced_nonNull_native();
        puVar9 = unaff_x21;
        if (((ulong)puVar8 & 1) == 0) {
          puVar9 = (undefined *)0x0;
          FUN_10060f224(0,*(long *)(unaff_x21 + 0x10) + 1,1,unaff_x21,
                        PTR__swift_bridgeObjectRelease_100eae160);
        }
        uVar14 = *(ulong *)(puVar9 + 0x10);
        uVar10 = uVar14 + 1;
        puVar8 = puVar9;
        if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar14) {
          puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
          FUN_10060f224(puVar8,uVar10,1,puVar9,PTR__swift_bridgeObjectRelease_100eae160);
        }
        *(ulong *)(puVar8 + 0x10) = uVar10;
        puVar8[uVar14 + 0x20] = (byte)((uint)uVar15 >> 4) & 0xf | (byte)((int)uVar12 << 2);
        if ((ulong)param_1[2] <= uVar13 + 2) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc2c);
          (*pcVar4)();
        }
        cVar3 = *(char *)((long)param_1 + uVar13 + 0x22);
        if (cVar3 != '=') {
          uVar10 = *(ulong *)(*plVar7 + 0x10);
          if (uVar10 == 0) goto LAB_10060fb94;
          uVar12 = 0;
          while (*(char *)(*plVar7 + 0x20 + uVar12) != cVar3) {
            uVar12 = uVar12 + 1;
            if (uVar10 == uVar12) goto LAB_10060fb94;
          }
          if (0xff < uVar12) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc34);
            (*pcVar4)();
          }
          uVar10 = uVar14 + 2;
          puVar9 = puVar8;
          if ((long)(*(ulong *)(puVar8 + 0x18) >> 1) < (long)uVar10) {
            puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_10060f224(puVar9,uVar10,1,puVar8,PTR__swift_bridgeObjectRelease_100eae160);
          }
          *(ulong *)(puVar9 + 0x10) = uVar10;
          puVar9[uVar14 + 0x21] = (byte)((uint)uVar12 >> 2) & 0x3f | (byte)((uint)uVar15 << 4);
          puVar8 = puVar9;
        }
        if ((ulong)param_1[2] <= uVar13 + 3) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc30);
          (*pcVar4)();
        }
        cVar3 = *(char *)((long)param_1 + uVar13 + 0x23);
        unaff_x21 = puVar8;
        if (cVar3 != '=') {
          uVar12 = *(ulong *)(*plVar7 + 0x10);
          if (uVar12 == 0) goto LAB_10060fb94;
          uVar15 = 0;
          lVar2 = *plVar7 + 0x20;
          while (*(char *)(lVar2 + uVar15) != cVar3) {
            uVar15 = uVar15 + 1;
            if (uVar12 == uVar15) goto LAB_10060fb94;
          }
          uVar14 = 0;
          while (*(char *)(lVar2 + uVar14) != *(char *)((long)param_1 + uVar13 + 0x22)) {
            uVar14 = uVar14 + 1;
            if (uVar12 == uVar14) goto LAB_10060fb94;
          }
          if (0xff < (uVar15 | uVar14)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10060fc38);
            (*pcVar4)();
          }
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar10) {
            unaff_x21 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_10060f224(unaff_x21,uVar10 + 1,1,puVar8,PTR__swift_bridgeObjectRelease_100eae160);
          }
          *(ulong *)(unaff_x21 + 0x10) = uVar10 + 1;
          unaff_x21[uVar10 + 0x20] = (byte)uVar15 | (byte)((int)uVar14 << 6);
        }
        uVar13 = uVar1;
      } while ((long)uVar1 < lVar11 && !bVar5);
      _swift_bridgeObjectRelease(param_1);
    }
  }
  else {
    FUN_100610124();
    _swift_allocError(&DAT_100ef46d8,puVar6,0,0);
    *puVar6 = 0;
    _swift_willThrow();
  }
  return unaff_x21;
}



/* Address: 0x10060fc38 | FUN_10060fc38 */

/* WARNING: Removing unreachable block (ram,0x00010060fcd0) */

undefined1  [16] FUN_10060fc38(char *param_1)

{
  char *pcVar1;
  char *pcVar2;
  code *pcVar3;
  long unaff_x21;
  String SVar4;
  undefined1 auVar5 [16];
  undefined1 auStack_68 [24];
  undefined8 local_50;
  
  pcVar3 = *(code **)(param_1 + 0x18);
  pcVar1 = param_1;
  FUN_100004640(param_1,pcVar3);
  Swift::Decoder::_singleValueContainer();
  if (unaff_x21 == 0) {
    FUN_100004640(auStack_68,local_50);
    SVar4 = Swift::SingleValueDecodingContainer::_decode();
    pcVar2 = SVar4.str;
    FUN_10060f800(pcVar2);
    _swift_bridgeObjectRelease(SVar4.bridgeObject);
    pcVar3 = _malloc;
    pcVar1 = pcVar2;
    FUN_10060d1ac(pcVar2,_malloc,FUN_100611bf8,_free,FUN_100611c04);
    _swift_bridgeObjectRelease(pcVar2);
    FUN_100004594(auStack_68);
    FUN_100004594(param_1);
  }
  else {
    FUN_100004594(param_1);
  }
  auVar5._8_8_ = pcVar3;
  auVar5._0_8_ = pcVar1;
  return auVar5;
}



/* Address: 0x10060fd58 | FUN_10060fd58 */

undefined8 FUN_10060fd58(undefined8 param_1)

{
  FUN_10044b95c();
  return param_1;
}



/* Address: 0x10060fd8c | FUN_10060fd8c */

void FUN_10060fd8c(void)

{
  undefined *puVar1;
  
  if (DAT_100fd6ee0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift__Swift__Unicode__UTF8_>Swift___UnicodeEncoding_100eadf58;
  _swift_getWitnessTable
            (PTR_Swift__Swift__Unicode__UTF8_>Swift___UnicodeEncoding_100eadf58,
             PTR___type_metadata_for_Swift_Unicode_UTF8_100eadf50);
  DAT_100fd6ee0 = puVar1;
  return;
}



/* Address: 0x10060fdcc | FUN_10060fdcc */

void FUN_10060fdcc(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ee8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c677f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c677f0,&DAT_100eea7f8);
  DAT_100fd6ee8 = pTVar1;
  return;
}



/* Address: 0x10060fe0c | FUN_10060fe0c */

undefined1  [16] FUN_10060fe0c(void)

{
  return ZEXT816(0x100eea7f8);
}



/* Address: 0x10060fe1c | FUN_10060fe1c */

undefined1  [16] FUN_10060fe1c(void)

{
  return ZEXT816(0x100eea890);
}



/* Address: 0x10060fe2c | thunk_FUN_10060fe30 */

void thunk_FUN_10060fe30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ef0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c678c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c678c4,&DAT_100eea890);
  DAT_100fd6ef0 = pTVar1;
  return;
}



/* Address: 0x10060fe30 | FUN_10060fe30 */

void FUN_10060fe30(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6ef0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c678c4;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c678c4,&DAT_100eea890);
  DAT_100fd6ef0 = pTVar1;
  return;
}



/* Address: 0x10060fe70 | FUN_10060fe70 */

void FUN_10060fe70(undefined8 param_1)

{
  undefined8 *puVar1;
  long unaff_x20;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 local_20;
  
  puVar1 = *(undefined8 **)(unaff_x20 + 0x10);
  uStack_38 = puVar1[1];
  local_40 = *puVar1;
  uStack_28 = puVar1[3];
  uStack_30 = puVar1[2];
  local_20 = puVar1[4];
  FUN_10060fea4(param_1,&local_40,*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x10060fea4 | FUN_10060fea4 */

long FUN_10060fea4(long param_1,long *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  byte bVar6;
  undefined1 uVar7;
  ushort uVar8;
  code *pcVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined1 *puVar13;
  int iVar14;
  long lVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  int iVar20;
  undefined1 auStack_88 [40];
  
  lVar4 = param_2[3];
  lVar5 = param_2[4];
  lVar19 = *param_2;
  if (lVar4 == lVar5) {
    FUN_1006100e8(param_2,auStack_88);
    lVar15 = 0;
  }
  else {
    uVar3 = (ulong)*(uint *)(param_2 + 1);
    uVar8 = *(ushort *)((long)param_2 + 0x14);
    bVar6 = *(byte *)((long)param_2 + 0x16);
    uVar11 = (ulong)(*(int *)((long)param_2 + 0xc) - *(uint *)(param_2 + 1));
    FUN_1006100e8(param_2,auStack_88);
    _swift_beginAccess(lVar19 + 0x18,auStack_88,0,0);
    lVar12 = 0;
    puVar13 = (undefined1 *)(param_1 + 3);
    lVar17 = lVar4;
    do {
      if ((lVar17 < lVar4) || (lVar5 <= lVar17)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100c8);
        (*pcVar9)();
      }
      if (lVar17 < (long)uVar3) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100cc);
        (*pcVar9)();
      }
      if ((long)uVar11 <= (long)(lVar17 - uVar3)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100d0);
        (*pcVar9)();
      }
      lVar2 = *(long *)(lVar19 + 0x18) + (ulong)uVar8 * 0x100 + (ulong)bVar6;
      uVar7 = *(undefined1 *)(lVar2 + lVar17);
      lVar15 = lVar17 + 1;
      if (lVar15 == lVar5) {
        iVar14 = 1;
        uVar16 = 0;
LAB_10060ffdc:
        uVar18 = 0;
        iVar20 = 1;
        lVar17 = lVar5;
      }
      else {
        if (lVar5 <= lVar15) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100d8);
          (*pcVar9)();
        }
        if ((long)uVar11 <= (long)(lVar15 - uVar3)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100dc);
          (*pcVar9)();
        }
        uVar16 = (uint)*(byte *)(lVar2 + lVar15);
        lVar1 = lVar17 + 2;
        if (lVar1 == lVar5) {
          iVar14 = 0;
          uVar16 = (uint)*(byte *)(lVar2 + lVar15);
          goto LAB_10060ffdc;
        }
        if ((lVar1 < lVar4) || (lVar5 <= lVar1)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100e0);
          (*pcVar9)();
        }
        if (lVar1 < (long)uVar3) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100e4);
          (*pcVar9)();
        }
        if ((long)uVar11 <= (long)(lVar1 - uVar3)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100e8);
          (*pcVar9)();
        }
        iVar14 = 0;
        iVar20 = 0;
        uVar18 = (uint)*(byte *)(lVar2 + lVar1);
        lVar17 = lVar17 + 3;
      }
      uVar10 = param_3;
      FUN_100672858(param_3,uVar7);
      puVar13[-3] = (char)uVar10;
      uVar16 = uVar16 | iVar14 << 8;
      uVar10 = param_3;
      FUN_100672878(param_3,uVar7,uVar16);
      puVar13[-2] = (char)uVar10;
      uVar18 = uVar18 | iVar20 << 8;
      uVar10 = param_3;
      FUN_1006728a8(param_3,uVar16,uVar18);
      puVar13[-1] = (char)uVar10;
      uVar10 = param_3;
      FUN_1006728ec(param_3,uVar18);
      *puVar13 = (char)uVar10;
      lVar15 = lVar12 + 4;
      if (SCARRY8(lVar12,4)) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x1006100d4);
        (*pcVar9)();
      }
      lVar12 = lVar12 + 4;
      puVar13 = puVar13 + 4;
    } while (lVar17 != lVar5);
  }
  _swift_release(lVar19);
  return lVar15;
}



/* Address: 0x1006100e8 | FUN_1006100e8 */

undefined8 FUN_1006100e8(undefined8 param_1,undefined8 param_2)

{
  FUN_10061cce4(param_2,param_1);
  return param_2;
}



/* Address: 0x100610124 | FUN_100610124 */

void FUN_100610124(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fd6f18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c6ccf0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c6ccf0,&DAT_100ef46d8);
  DAT_100fd6f18 = pTVar1;
  return;
}



/* Address: 0x100610164 | FUN_100610164 */

void FUN_100610164(UnsafeMutablePointer param_1)

{
  long unaff_x20;
  
  Swift::UnsafeMutablePointer::deinitialize(*(__int64 *)(unaff_x20 + 0x18),param_1);
  return;
}



/* Address: 0x100610190 | FUN_100610190 */

void FUN_100610190(void)

{
  FUN_10060f7c8();
  return;
}



/* Address: 0x1006101a4 | FUN_1006101a4 */

void FUN_1006101a4(void)

{
  FUN_10060f7a8();
  return;
}



/* Address: 0x1006101b8 | thunk_FUN_10060c2c0 */

void thunk_FUN_10060c2c0(void)

{
  thunk_FUN_10060c2c0();
  return;
}


