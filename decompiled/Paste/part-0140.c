/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1001aa560 | FUN_1001aa560 */

long FUN_1001aa560(long param_1,long param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x20))();
  lVar3 = *(long *)(lVar3 + 0x40);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  lVar3 = lVar3 + uVar2;
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x20))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff),DVar1.unknown);
  return param_1;
}



/* Address: 0x1001aa5d0 | FUN_1001aa5d0 */

long FUN_1001aa5d0(long param_1,long param_2,long param_3)

{
  Date DVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  (**(code **)(lVar3 + 0x28))();
  lVar3 = *(long *)(lVar3 + 0x40);
  DVar1 = Foundation::Date::typeMetadataAccessor();
  uVar2 = (ulong)*(byte *)(*(long *)(DVar1.unknown + -8) + 0x50);
  lVar3 = lVar3 + uVar2;
  (**(code **)(*(long *)(DVar1.unknown + -8) + 0x28))
            (lVar3 + param_1 & (uVar2 ^ 0xffffffffffffffff),
             lVar3 + param_2 & (uVar2 ^ 0xffffffffffffffff),DVar1.unknown);
  return param_1;
}



/* Address: 0x1001aa640 | FUN_1001aa640 */

uint * FUN_1001aa640(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  Date DVar6;
  code *UNRECOVERED_JUMPTABLE;
  long lVar7;
  uint uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  Date DVar12;
  long lVar13;
  
  DVar12.unknown = *(undefined **)(param_3 + 0x10);
  lVar13 = *(long *)(DVar12.unknown + -8);
  uVar8 = *(uint *)(lVar13 + 0x54);
  DVar6 = Foundation::Date::typeMetadataAccessor();
  lVar7 = *(long *)(DVar6.unknown + -8);
  uVar4 = *(uint *)(lVar7 + 0x54);
  uVar3 = uVar4;
  if (uVar4 <= uVar8) {
    uVar3 = uVar8;
  }
  if (param_2 == 0) {
    return (uint *)0x0;
  }
  uVar9 = (ulong)*(byte *)(lVar7 + 0x50);
  uVar1 = *(long *)(lVar13 + 0x40) + uVar9;
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1001aa720;
  lVar2 = (uVar1 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar7 + 0x40);
  uVar10 = (uint)lVar2;
  uVar5 = uVar10 << 3;
  if (uVar10 < 4) {
    uVar11 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
    if (0xff < uVar11) {
      if (uVar11 >> 0x10 == 0) {
        uVar11 = (uint)*(ushort *)((long)param_1 + lVar2);
      }
      else {
        uVar11 = *(uint *)((long)param_1 + lVar2);
      }
      goto LAB_1001aa6b8;
    }
    if (1 < uVar11) goto LAB_1001aa6b4;
  }
  else {
LAB_1001aa6b4:
    uVar11 = (uint)*(byte *)((long)param_1 + lVar2);
LAB_1001aa6b8:
    if (uVar11 != 0) {
      uVar4 = 0;
      if (uVar10 < 4) {
        uVar4 = uVar11 - 1 << (ulong)(uVar5 & 0x1f);
      }
      if (uVar10 == 0) {
        uVar8 = 0;
      }
      else {
        uVar8 = 4;
        if (uVar10 < 4) {
          uVar8 = uVar10;
        }
        if ((int)uVar8 < 3) {
          if (uVar8 == 1) {
            uVar8 = (uint)(byte)*param_1;
          }
          else {
            uVar8 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar8 == 3) {
          uVar8 = (uint)(uint3)*param_1;
        }
        else {
          uVar8 = *param_1;
        }
      }
      return (uint *)(ulong)(uVar3 + (uVar8 | uVar4) + 1);
    }
  }
  if (uVar3 == 0) {
    return (uint *)0x0;
  }
LAB_1001aa720:
  if (uVar8 < uVar4) {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar7 + 0x30);
    param_1 = (uint *)((ulong)(uVar1 + (long)param_1) & ~uVar9);
    DVar12 = DVar6;
    uVar8 = uVar4;
  }
  else {
    UNRECOVERED_JUMPTABLE = *(code **)(lVar13 + 0x30);
  }
                    /* WARNING: Could not recover jumptable at 0x0001001aa764. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(param_1,uVar8,DVar12.unknown);
  return param_1;
}



/* Address: 0x1001aa7cc | FUN_1001aa7cc */

void FUN_1001aa7cc(uint *param_1,undefined8 param_2,uint param_3,long param_4)

{
  ulong uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined2 uVar6;
  Date DVar7;
  code *UNRECOVERED_JUMPTABLE;
  long lVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  Date DVar13;
  byte bVar14;
  long lVar15;
  
  DVar13.unknown = *(undefined **)(param_4 + 0x10);
  lVar15 = *(long *)(DVar13.unknown + -8);
  uVar4 = *(uint *)(lVar15 + 0x54);
  DVar7 = Foundation::Date::typeMetadataAccessor();
  lVar8 = *(long *)(DVar7.unknown + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar3 = uVar5;
  if (uVar5 <= uVar4) {
    uVar3 = uVar4;
  }
  uVar9 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar1 = *(long *)(lVar15 + 0x40) + uVar9;
  sVar2 = (uVar1 & (uVar9 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar10 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    bVar14 = 0;
  }
  else if (uVar10 < 4) {
    uVar11 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar10 << 3 & 0x1f)) >>
             (ulong)(uVar10 << 3 & 0x1f)) + 1;
    bVar14 = 2;
    if (0xffff < uVar11) {
      bVar14 = 4;
    }
    if (uVar11 < 0x100) {
      bVar14 = 1 < uVar11;
    }
  }
  else {
    bVar14 = 1;
  }
  uVar11 = (uint)param_2;
  if (uVar3 < uVar11) {
    uVar11 = uVar11 + ~uVar3;
    if (uVar10 < 4) {
      iVar12 = (uVar11 >> (ulong)(uVar10 << 3 & 0x1f)) + 1;
      if (uVar10 != 0) {
        uVar3 = uVar11 & (-1 << (ulong)(uVar10 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar6 = (undefined2)uVar3;
        if (uVar10 == 3) {
          *(undefined2 *)param_1 = uVar6;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar10 == 2) {
          *(undefined2 *)param_1 = uVar6;
        }
        else {
          *(char *)param_1 = (char)uVar11;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *param_1 = uVar11;
      iVar12 = 1;
    }
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar12;
      }
    }
    else if (bVar14 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar12;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar12;
    }
  }
  else {
    if (bVar14 < 2) {
      if (bVar14 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (bVar14 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (uVar11 != 0) {
      if (uVar4 < uVar5) {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar8 + 0x38);
        param_1 = (uint *)(uVar1 + (long)param_1 & ~uVar9);
        DVar13 = DVar7;
        uVar4 = uVar5;
      }
      else {
        UNRECOVERED_JUMPTABLE = *(code **)(lVar15 + 0x38);
      }
                    /* WARNING: Could not recover jumptable at 0x0001001aa97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(param_1,param_2,uVar4,DVar13.unknown);
      return;
    }
  }
  return;
}



/* Address: 0x1001aa9e4 | FUN_1001aa9e4 */

void FUN_1001aa9e4(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1001aa9f0 | FUN_1001aa9f0 */

void FUN_1001aa9f0(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c328d8,param_1);
  return;
}



/* Address: 0x1001aaa00 | FUN_1001aaa00 */

void FUN_1001aaa00(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32870,param_1);
  return;
}



/* Address: 0x1001aaa10 | FUN_1001aaa10 */

void FUN_1001aaa10(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c32848,param_1);
  return;
}



/* Address: 0x1001aaa20 | FUN_1001aaa20 */

void FUN_1001aaa20(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_1010573b0);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_1010573b0);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001aab04);
  (*pcVar1)();
}



/* Address: 0x1001aab04 | FUN_1001aab04 */

void FUN_1001aab04(void)

{
  FUN_1001aac3c(&DAT_100fb46e0,&DAT_1010573b0,FUN_1001aaa20);
  return;
}



/* Address: 0x1001aab20 | FUN_1001aab20 */

void FUN_1001aab20(void)

{
  FUN_1001aac98(&DAT_100fb46e0,&DAT_1010573b0,FUN_1001aaa20);
  return;
}



/* Address: 0x1001aab3c | FUN_1001aab3c */

void FUN_1001aab3c(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_1010573c8);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_1010573c8);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001aac20);
  (*pcVar1)();
}



/* Address: 0x1001aac20 | FUN_1001aac20 */

void FUN_1001aac20(void)

{
  FUN_1001aac3c(&DAT_100fb46e8,&DAT_1010573c8,FUN_1001aab3c);
  return;
}



/* Address: 0x1001aac3c | FUN_1001aac3c */

void FUN_1001aac3c(long *param_1,undefined8 param_2,undefined8 param_3)

{
  URL UVar1;
  
  if (*param_1 != -1) {
    _swift_once(param_1,param_3);
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000cd990(UVar1.unknown,param_2);
  return;
}



/* Address: 0x1001aac7c | FUN_1001aac7c */

void FUN_1001aac7c(void)

{
  FUN_1001aac98(&DAT_100fb46e8,&DAT_1010573c8,FUN_1001aab3c);
  return;
}



/* Address: 0x1001aac98 | FUN_1001aac98 */

void FUN_1001aac98(undefined8 param_1,long *param_2,undefined8 param_3,undefined8 param_4)

{
  URL UVar1;
  URL UVar2;
  
  if (*param_2 != -1) {
    _swift_once(param_2,param_4);
  }
  UVar1 = Foundation::URL::typeMetadataAccessor();
  UVar2 = UVar1;
  FUN_1000cd990(UVar1.unknown,param_3);
                    /* WARNING: Could not recover jumptable at 0x0001001aacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar1.unknown + -8) + 0x10))(param_1,UVar2.unknown,UVar1.unknown);
  return;
}



/* Address: 0x1001aad00 | FUN_1001aad00 */

void FUN_1001aad00(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_1010573e0);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_1010573e0);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001aade4);
  (*pcVar1)();
}



/* Address: 0x1001aade4 | FUN_1001aade4 */

void FUN_1001aade4(void)

{
  FUN_1001aac3c(&DAT_100fb46f0,&DAT_1010573e0,FUN_1001aad00);
  return;
}



/* Address: 0x1001aae00 | FUN_1001aae00 */

void FUN_1001aae00(void)

{
  FUN_1001aac98(&DAT_100fb46f0,&DAT_1010573e0,FUN_1001aad00);
  return;
}



/* Address: 0x1001aae1c | FUN_1001aae1c */

void FUN_1001aae1c(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_1010573f8);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_1010573f8);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001aaf04);
  (*pcVar1)();
}



/* Address: 0x1001aaf04 | FUN_1001aaf04 */

void FUN_1001aaf04(void)

{
  FUN_1001aac3c(&DAT_100fb46f8,&DAT_1010573f8,FUN_1001aae1c);
  return;
}



/* Address: 0x1001aaf20 | FUN_1001aaf20 */

void FUN_1001aaf20(void)

{
  FUN_1001aac98(&DAT_100fb46f8,&DAT_1010573f8,FUN_1001aae1c);
  return;
}



/* Address: 0x1001aaf3c | FUN_1001aaf3c */

void FUN_1001aaf3c(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_101057410);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_101057410);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab020);
  (*pcVar1)();
}



/* Address: 0x1001ab020 | FUN_1001ab020 */

void FUN_1001ab020(void)

{
  FUN_1001aac3c(&DAT_100fb4700,&DAT_101057410,FUN_1001aaf3c);
  return;
}



/* Address: 0x1001ab03c | FUN_1001ab03c */

void FUN_1001ab03c(void)

{
  FUN_1001aac98(&DAT_100fb4700,&DAT_101057410,FUN_1001aaf3c);
  return;
}



/* Address: 0x1001ab058 | FUN_1001ab058 */

void FUN_1001ab058(void)

{
  code *pcVar1;
  undefined *puVar2;
  URL UVar3;
  URL UVar4;
  undefined1 *puVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long lVar7;
  
  puVar2 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  UVar3 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar3.unknown,&DAT_101057428);
  UVar4 = UVar3;
  FUN_1000cd990(UVar3.unknown,&DAT_101057428);
  Foundation::URL::_init();
  lVar7 = *(long *)(UVar3.unknown + -8);
  puVar5 = puVar6;
  (**(code **)(lVar7 + 0x30))(puVar6,1,UVar3.unknown);
  if ((int)puVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(UVar4.unknown,puVar6,UVar3.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab13c);
  (*pcVar1)();
}



/* Address: 0x1001ab13c | FUN_1001ab13c */

void FUN_1001ab13c(void)

{
  FUN_1001aac3c(&DAT_100fb4708,&DAT_101057428,FUN_1001ab058);
  return;
}



/* Address: 0x1001ab158 | FUN_1001ab158 */

void FUN_1001ab158(void)

{
  FUN_1001aac98(&DAT_100fb4708,&DAT_101057428,FUN_1001ab058);
  return;
}



/* Address: 0x1001ab174 | FUN_1001ab174 */

void FUN_1001ab174(void)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  FUN_1000ce204();
  FUN_1000cd990(puVar1,&DAT_101057440);
  Foundation::URL::_init();
  return;
}



/* Address: 0x1001ab1e0 | FUN_1001ab1e0 */

void FUN_1001ab1e0(void)

{
  if (DAT_100fb4710 != -1) {
    _swift_once(&DAT_100fb4710,FUN_1001ab174);
  }
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  FUN_1000cd990();
  return;
}



/* Address: 0x1001ab234 | FUN_1001ab234 */

void FUN_1001ab234(void)

{
  if (DAT_100fb4710 != -1) {
    _swift_once(&DAT_100fb4710,FUN_1001ab174);
  }
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  FUN_1000cd990();
  FUN_1001ab29c();
  return;
}



/* Address: 0x1001ab29c | FUN_1001ab29c */

undefined8 FUN_1001ab29c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1001ab2ec | FUN_1001ab2ec */

void FUN_1001ab2ec(undefined *param_1,char *param_2,void *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  URLComponents UVar3;
  URLQueryItem UVar4;
  URL UVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  ulong uVar7;
  long extraout_x12;
  URLComponents *this;
  long lVar8;
  URLComponents relativeTo;
  long lVar9;
  long lVar10;
  String SVar11;
  URLComponents local_70;
  undefined1 local_61;
  
  puVar2 = &DAT_100fb4718;
  local_70.unknown = param_1;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(puVar2 + -8) + 0x40));
  relativeTo.unknown = (undefined *)((long)&local_70 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  lVar8 = (long)relativeTo.unknown - extraout_x12;
  UVar3 = Foundation::URLComponents::typeMetadataAccessor();
  lVar10 = *(long *)(UVar3.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar10 + 0x40));
  this = (URLComponents *)(lVar8 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0));
  Foundation::URLComponents::init();
  _swift_bridgeObjectRetain(param_3);
  SVar11.bridgeObject = param_3;
  SVar11.str = param_2;
  Foundation::URLComponents::set_path(this,SVar11);
  puVar2 = &DAT_100fb4720;
  FUN_1000037f0(&DAT_100fb4720,&DAT_100c32968);
  UVar4 = Foundation::URLQueryItem::typeMetadataAccessor();
  uVar7 = (ulong)*(byte *)(*(long *)(UVar4.unknown + -8) + 0x50);
  _swift_allocObject(puVar2,(uVar7 + 0x20 & (uVar7 ^ 0xffffffffffffffff)) +
                            *(long *)(*(long *)(UVar4.unknown + -8) + 0x48) * 2,uVar7 | 7);
  *(undefined8 *)(puVar2 + 0x18) = 4;
  *(undefined8 *)(puVar2 + 0x10) = 2;
  Foundation::URLQueryItem::_init();
  FUN_1000f3588();
  local_61 = 0;
  SVar11 = Swift::String::_init(&local_61,&DAT_100eb6d88);
  Foundation::URLQueryItem::_init();
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  Foundation::URLComponents::_set_queryItems(this);
  Foundation::URL::_init();
  Foundation::URLComponents::_url(relativeTo);
  FUN_1001ab54c(relativeTo.unknown);
  UVar5 = Foundation::URL::typeMetadataAccessor();
  lVar9 = *(long *)(UVar5.unknown + -8);
  lVar6 = lVar8;
  (**(code **)(lVar9 + 0x30))(lVar8,1,UVar5.unknown);
  if ((int)lVar6 != 1) {
    (**(code **)(lVar10 + 8))(this,UVar3.unknown);
    (**(code **)(lVar9 + 0x20))(local_70.unknown,lVar8,UVar5.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1001ab54c);
  (*pcVar1)();
}



/* Address: 0x1001ab54c | FUN_1001ab54c */

undefined8 FUN_1001ab54c(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x1001ab594 | FUN_1001ab594 */

char * FUN_1001ab594(void)

{
  return "paste";
}



/* Address: 0x1001ab5a0 | FUN_1001ab5a0 */

undefined1  [16] FUN_1001ab5a0(void)

{
  undefined1 auVar1 [16];
  
  auVar1._8_8_ = &DAT_e500000000000000;
  auVar1._0_8_ = 0x6574736170;
  return auVar1;
}



/* Address: 0x1001ab5b4 | FUN_1001ab5b4 */

void FUN_1001ab5b4(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined1 *puVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  long extraout_x8;
  long lVar6;
  long lVar7;
  String SVar8;
  String SVar9;
  undefined8 local_50;
  undefined1 *puStack_48;
  
  puVar3 = &DAT_100fb4718;
  FUN_1000037f0(&DAT_100fb4718,&DAT_100c32960);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar6 = (long)&local_50 - extraout_x8;
  local_50 = 0x2f2f3a6574736170;
  puStack_48 = &DAT_e800000000000000;
  SVar8.bridgeObject = param_3;
  SVar8.str = param_2;
  SVar9.bridgeObject = param_5;
  SVar9.str = param_4;
  Swift::String::append(SVar8,SVar9);
  puVar1 = puStack_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(puVar1);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar7 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar6;
  (**(code **)(lVar7 + 0x30))(lVar6,1,UVar4.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar7 + 0x20))(param_1,lVar6,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ab6b0);
  (*pcVar2)();
}



/* Address: 0x1001ab6b0 | FUN_1001ab6b0 */

void FUN_1001ab6b0(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  _StringGuts _Var6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar3 = &DAT_100fb4718;
  _Var6.unknown = &DAT_100c32960;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_50 - extraout_x8;
  local_50 = 0;
  local_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x1a,_Var6);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000018;
  local_48 = 0x8000000100d97f50;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar9,SVar10);
  uVar1 = local_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar1);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar8 + 0x20))(param_1,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ab7c8);
  (*pcVar2)();
}



/* Address: 0x1001ab7c8 | FUN_1001ab7c8 */

void FUN_1001ab7c8(undefined8 param_1,char *param_2,void *param_3,char *param_4,void *param_5)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined *puVar3;
  URL UVar4;
  long lVar5;
  _StringGuts _Var6;
  long extraout_x8;
  long lVar7;
  long lVar8;
  String SVar9;
  String SVar10;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar3 = &DAT_100fb4718;
  _Var6.unknown = &DAT_100c32960;
  FUN_1000037f0();
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = (long)&local_50 - extraout_x8;
  FUN_1000f3588();
  local_50 = 0;
  local_48 = 0xe000000000000000;
  Swift::_StringGuts::grow(0x2f,_Var6);
  _swift_bridgeObjectRelease(local_48);
  local_50 = 0xd000000000000030;
  local_48 = 0x8000000100d97f70;
  SVar9.bridgeObject = param_3;
  SVar9.str = param_2;
  SVar10.bridgeObject = param_5;
  SVar10.str = param_4;
  Swift::String::append(SVar9,SVar10);
  uVar1 = local_48;
  Foundation::URL::_init();
  _swift_bridgeObjectRelease(uVar1);
  UVar4 = Foundation::URL::typeMetadataAccessor();
  lVar8 = *(long *)(UVar4.unknown + -8);
  lVar5 = lVar7;
  (**(code **)(lVar8 + 0x30))(lVar7,1,UVar4.unknown);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar8 + 0x20))(param_1,lVar7,UVar4.unknown);
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1001ab8e4);
  (*pcVar2)();
}



/* Address: 0x1001ab8e4 | FUN_1001ab8e4 */

void FUN_1001ab8e4(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057458,0,0xe000000000000000);
  return;
}



/* Address: 0x1001ab8f8 | FUN_1001ab8f8 */

void FUN_1001ab8f8(void)

{
  FUN_1001aac3c(&DAT_100fb4728,&DAT_101057458,FUN_1001ab8e4);
  return;
}



/* Address: 0x1001ab914 | FUN_1001ab914 */

void FUN_1001ab914(void)

{
  FUN_1001aac98(&DAT_100fb4728,&DAT_101057458,FUN_1001ab8e4);
  return;
}



/* Address: 0x1001ab930 | FUN_1001ab930 */

void FUN_1001ab930(void)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,&DAT_101057470);
  FUN_1000cd990(UVar1.unknown,&DAT_101057470);
  FUN_1001ab2ec(UVar1.unknown,0xd000000000000018,0x8000000100d98110);
  return;
}



/* Address: 0x1001ab990 | FUN_1001ab990 */

void FUN_1001ab990(void)

{
  FUN_1001aac3c(&DAT_100fb4730,&DAT_101057470,FUN_1001ab930);
  return;
}



/* Address: 0x1001ab9ac | FUN_1001ab9ac */

void FUN_1001ab9ac(void)

{
  FUN_1001aac98(&DAT_100fb4730,&DAT_101057470,FUN_1001ab930);
  return;
}



/* Address: 0x1001ab9c8 | FUN_1001ab9c8 */

void FUN_1001ab9c8(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057488,0x736574616470752f,&DAT_e800000000000000);
  return;
}



/* Address: 0x1001ab9e8 | FUN_1001ab9e8 */

void FUN_1001ab9e8(void)

{
  FUN_1001aac3c(&DAT_100fb4738,&DAT_101057488,FUN_1001ab9c8);
  return;
}



/* Address: 0x1001aba04 | FUN_1001aba04 */

void FUN_1001aba04(void)

{
  FUN_1001aac98(&DAT_100fb4738,&DAT_101057488,FUN_1001ab9c8);
  return;
}



/* Address: 0x1001aba20 | FUN_1001aba20 */

void FUN_1001aba20(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_1010574a0,0x676e69636972702f,&DAT_e800000000000000);
  return;
}



/* Address: 0x1001aba40 | FUN_1001aba40 */

void FUN_1001aba40(void)

{
  FUN_1001aac3c(&DAT_100fb4740,&DAT_1010574a0,FUN_1001aba20);
  return;
}



/* Address: 0x1001aba5c | FUN_1001aba5c */

void FUN_1001aba5c(void)

{
  FUN_1001aac98(&DAT_100fb4740,&DAT_1010574a0,FUN_1001aba20);
  return;
}



/* Address: 0x1001aba78 | FUN_1001aba78 */

void FUN_1001aba78(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_1010574b8,0x7463657269642f,&DAT_e700000000000000);
  return;
}



/* Address: 0x1001aba98 | FUN_1001aba98 */

void FUN_1001aba98(void)

{
  FUN_1001aac3c(&DAT_100fb4748,&DAT_1010574b8,FUN_1001aba78);
  return;
}



/* Address: 0x1001abab4 | FUN_1001abab4 */

void FUN_1001abab4(void)

{
  FUN_1001aac98(&DAT_100fb4748,&DAT_1010574b8,FUN_1001aba78);
  return;
}



/* Address: 0x1001abad0 | FUN_1001abad0 */

void FUN_1001abad0(void)

{
  URL UVar1;
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  FUN_1000ce204(UVar1.unknown,&DAT_1010574d0);
  FUN_1000cd990(UVar1.unknown,&DAT_1010574d0);
  FUN_1001ab2ec(UVar1.unknown,0xd000000000000011,0x8000000100d980f0);
  return;
}



/* Address: 0x1001abb30 | FUN_1001abb30 */

void FUN_1001abb30(void)

{
  FUN_1001aac3c(&DAT_100fb4750,&DAT_1010574d0,FUN_1001abad0);
  return;
}



/* Address: 0x1001abb4c | FUN_1001abb4c */

void FUN_1001abb4c(void)

{
  FUN_1001aac98(&DAT_100fb4750,&DAT_1010574d0,FUN_1001abad0);
  return;
}



/* Address: 0x1001abb68 | FUN_1001abb68 */

void FUN_1001abb68(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_1010574e8,0x746361746e6f632f,&DAT_e800000000000000);
  return;
}



/* Address: 0x1001abb88 | FUN_1001abb88 */

void FUN_1001abb88(void)

{
  FUN_1001aac3c(&DAT_100fb4758,&DAT_1010574e8,FUN_1001abb68);
  return;
}



/* Address: 0x1001abba4 | FUN_1001abba4 */

void FUN_1001abba4(void)

{
  FUN_1001aac98(&DAT_100fb4758,&DAT_1010574e8,FUN_1001abb68);
  return;
}



/* Address: 0x1001abbc0 | FUN_1001abbc0 */

void FUN_1001abbc0(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057500,0x676f6c622f,&DAT_e500000000000000);
  return;
}



/* Address: 0x1001abbdc | FUN_1001abbdc */

void FUN_1001abbdc(void)

{
  FUN_1001aac3c(&DAT_100fb4760,&DAT_101057500,FUN_1001abbc0);
  return;
}



/* Address: 0x1001abbf8 | FUN_1001abbf8 */

void FUN_1001abbf8(void)

{
  FUN_1001aac98(&DAT_100fb4760,&DAT_101057500,FUN_1001abbc0);
  return;
}



/* Address: 0x1001abc14 | FUN_1001abc14 */

void FUN_1001abc14(undefined8 param_1)

{
  FUN_1001abd90(param_1,&DAT_101057518,0x706c65682f,&DAT_e500000000000000);
  return;
}


