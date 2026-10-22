/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100927bbc | FUN_100927bbc */

void FUN_100927bbc(void)

{
  FUN_100927e9c();
  return;
}



/* Address: 0x100927bec | FUN_100927bec */

void FUN_100927bec(void)

{
  FUN_100927fc8();
  return;
}



/* Address: 0x100927c2c | FUN_100927c2c */

undefined8 FUN_100927c2c(ulong param_1,long param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100927c68);
    (*pcVar2)();
  }
  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3 - param_2;
  }
  if (((param_1 == 0) || (param_1 <= uVar1)) && ((long)uVar1 < (long)param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100927c6c);
    (*pcVar2)();
  }
  return 0;
}



/* Address: 0x100927c6c | FUN_100927c6c */

void FUN_100927c6c(void)

{
  FUN_100927fc8();
  return;
}



/* Address: 0x100927cb0 | FUN_100927cb0 */

undefined8
FUN_100927cb0(undefined8 param_1,undefined8 param_2,undefined1 param_3,undefined2 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100f17e70;
  _swift_allocObject(&DAT_100f17e70,0x2a,7);
  puVar1[0x10] = param_3;
  *(undefined8 *)(puVar1 + 0x18) = param_1;
  *(undefined8 *)(puVar1 + 0x20) = param_2;
  *(undefined2 *)(puVar1 + 0x28) = param_4;
  _swift_getObjectType(param_5);
  FUN_1008f68cc();
  _swift_retain();
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_100914f7c(0,1,param_7,param_5,FUN_10092c04c,puVar1);
  _swift_release(param_5);
  _swift_release_n(puVar1,2);
  return param_5;
}



/* Address: 0x100927d90 | FUN_100927d90 */

undefined8
FUN_100927d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = &DAT_100f17e98;
  _swift_allocObject(&DAT_100f17e98,0x20,7);
  *(undefined8 *)(puVar1 + 0x10) = param_1;
  *(undefined8 *)(puVar1 + 0x18) = param_2;
  _swift_getObjectType(param_3);
  puVar2 = &DAT_100fecdd0;
  FUN_1000f7830(&DAT_100fecdd0,&DAT_100c84b48);
  FUN_1008f68cc(param_3,puVar2,param_4);
  _swift_retain();
  _swift_retain(puVar1);
  _swift_bridgeObjectRetain(param_2);
  FUN_1009150cc(0,1,param_5,param_3,FUN_10092c06c,puVar1);
  _swift_release(param_3);
  _swift_release_n(puVar1,2);
  return param_3;
}



/* Address: 0x100927e6c | FUN_100927e6c */

void FUN_100927e6c(void)

{
  FUN_100927e9c();
  return;
}



/* Address: 0x100927e9c | FUN_100927e9c */

undefined8
FUN_100927e9c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,long param_8,
             undefined8 param_9)

{
  _swift_allocObject(param_8,0x30,7);
  *(undefined8 *)(param_8 + 0x10) = param_1;
  *(undefined8 *)(param_8 + 0x18) = param_2;
  *(undefined8 *)(param_8 + 0x20) = param_3;
  *(undefined8 *)(param_8 + 0x28) = param_4;
  _swift_getObjectType(param_5);
  FUN_1008f68cc();
  _swift_retain();
  _swift_retain(param_8);
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRetain(param_4);
  FUN_100914f7c(0,1,param_7,param_5,param_9,param_8);
  _swift_release(param_5);
  _swift_release_n(param_8,2);
  return param_5;
}



/* Address: 0x100927f84 | FUN_100927f84 */

void FUN_100927f84(void)

{
  FUN_100927fc8();
  return;
}



/* Address: 0x100927fc8 | FUN_100927fc8 */

undefined8
FUN_100927fc8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,code *param_9)

{
  _swift_allocObject(param_6,0x20,7);
  *(undefined8 *)(param_6 + 0x10) = param_1;
  *(undefined8 *)(param_6 + 0x18) = param_2;
  _swift_getObjectType(param_3);
  FUN_1008f68cc();
  _swift_retain();
  _swift_retain(param_6);
  _swift_bridgeObjectRetain(param_2);
  (*param_9)(0,1,param_5,param_3,param_8,param_6);
  _swift_release(param_3);
  _swift_release_n(param_6,2);
  return param_3;
}



/* Address: 0x10092809c | FUN_10092809c */

void FUN_10092809c(undefined1 param_1)

{
  long unaff_x20;
  
  *(undefined1 *)(unaff_x20 + 8) = param_1;
  return;
}



/* Address: 0x1009280a4 | FUN_1009280a4 */

bool FUN_1009280a4(long param_1,char param_2,_StringGuts param_3,_StringGuts param_4,long param_5,
                  char param_6,undefined *param_7,undefined *param_8)

{
  bool bVar1;
  
  bVar1 = false;
  if ((param_1 == param_5) && (param_2 == param_6)) {
    if ((param_3.unknown != param_7) || (param_4.unknown != param_8)) {
      bVar1 = Swift::_stringCompareWithSmolCheck
                        (param_3,param_4,(_StringComparisonResult)(__int8)param_7);
      return bVar1;
    }
    bVar1 = true;
  }
  return bVar1;
}



/* Address: 0x1009280f0 | FUN_1009280f0 */

void FUN_1009280f0(Hasher param_1,Hasher param_2,__uint8 param_3,char *param_4,void *param_5)

{
  String SVar1;
  
  Swift::Hasher::_combine((__uint64)param_2.unknown,param_2);
  Swift::Hasher::_combine(param_3,param_2);
  SVar1.bridgeObject = param_5;
  SVar1.str = param_4;
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x10092813c | FUN_10092813c */

void FUN_10092813c(__uint64 param_1,undefined *param_2,char *param_3,void *param_4)

{
  Hasher HVar1;
  String SVar2;
  undefined1 auStack_88 [72];
  
  HVar1.unknown = param_2;
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(param_1,HVar1);
  Swift::Hasher::_combine((__uint8)param_2,HVar1);
  HVar1.unknown = auStack_88;
  SVar2.bridgeObject = param_4;
  SVar2.str = param_3;
  Swift::String::hash(HVar1,SVar2);
  Swift::Hasher::_finalize(HVar1);
  return;
}



/* Address: 0x1009281b8 | FUN_1009281b8 */

void FUN_1009281b8(undefined8 param_1,Hasher param_2)

{
  String SVar1;
  __uint64 _Var2;
  Hasher into;
  __uint64 _Var3;
  __uint64 *unaff_x20;
  undefined1 auStack_88 [72];
  
  _Var3 = *unaff_x20;
  SVar1 = *(String *)(unaff_x20 + 2);
  _Var2 = unaff_x20[1];
  Swift::Hasher::init(0);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine((__uint8)_Var2,param_2);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x100928230 | FUN_100928230 */

void FUN_100928230(Hasher param_1,Hasher param_2)

{
  String SVar1;
  __uint64 _Var2;
  __uint64 *unaff_x20;
  
  SVar1 = *(String *)(unaff_x20 + 2);
  _Var2 = unaff_x20[1];
  Swift::Hasher::_combine(*unaff_x20,param_2);
  Swift::Hasher::_combine((__uint8)_Var2,param_2);
  Swift::String::hash(param_1,SVar1);
  return;
}



/* Address: 0x100928284 | FUN_100928284 */

void FUN_100928284(__int64 param_1,Hasher param_2)

{
  String SVar1;
  __uint64 _Var2;
  Hasher into;
  __uint64 _Var3;
  __uint64 *unaff_x20;
  undefined1 auStack_88 [72];
  
  _Var3 = *unaff_x20;
  SVar1 = *(String *)(unaff_x20 + 2);
  _Var2 = unaff_x20[1];
  Swift::Hasher::init(param_1);
  Swift::Hasher::_combine(_Var3,param_2);
  Swift::Hasher::_combine((__uint8)_Var2,param_2);
  into.unknown = auStack_88;
  Swift::String::hash(into,SVar1);
  Swift::Hasher::_finalize(into);
  return;
}



/* Address: 0x1009282f8 | FUN_1009282f8 */

bool FUN_1009282f8(long *param_1,long *param_2)

{
  bool bVar1;
  
  if (*param_1 != *param_2 || (char)param_1[1] != (char)param_2[1]) {
    return false;
  }
  if ((undefined *)param_1[2] != (undefined *)param_2[2] ||
      (undefined *)param_1[3] != (undefined *)param_2[3]) {
    bVar1 = Swift::_stringCompareWithSmolCheck
                      ((undefined *)param_1[2],(undefined *)param_1[3],
                       (_StringComparisonResult)(__int8)(undefined *)param_2[2]);
    return bVar1;
  }
  return true;
}



/* Address: 0x10092834c | FUN_10092834c */

void FUN_10092834c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  _swift_task_switch(FUN_100928370,0,0);
  return;
}



/* Address: 0x100928370 | FUN_100928370 */

void FUN_100928370(void)

{
  ulong uVar1;
  undefined *puVar2;
  long *plVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar4;
  _StringGuts _Var5;
  char *pcVar6;
  void *in_x3;
  undefined8 uVar7;
  undefined8 *puVar8;
  undefined8 uVar9;
  long unaff_x22;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  String SVar16;
  String SVar17;
  
  _Var5.unknown = *(undefined **)(unaff_x22 + 0x20);
  uVar1 = *(ulong *)(unaff_x22 + 0x28);
  puVar8 = *(undefined8 **)(unaff_x22 + 0x18);
  puVar4 = puVar8;
  FUN_100654dbc(puVar8,_Var5.unknown,uVar1 & 0xffffffffffffff);
  pcVar6 = (char *)(uVar1 & 0xffffffffffffff);
  FUN_100611db0();
  if ((long)puVar4 < 1) {
    FUN_1006116e8();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    _swift_retain(*puVar8);
                    /* WARNING: Could not recover jumptable at 0x0001009284dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if ((ulong)puVar4 >> 0x20 == 0) {
    uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar2 = &DAT_100f17f10;
    _swift_allocObject(&DAT_100f17f10,0x58,7);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar12 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar11 = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(puVar2 + 0x40) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(puVar2 + 0x38) = uVar10;
    *(undefined8 **)(puVar2 + 0x20) = puVar8;
    *(undefined8 **)(puVar2 + 0x30) = puVar4;
    plVar3 = (long *)0xd0;
    *(undefined **)(unaff_x22 + 0x58) = puVar2;
    *(undefined8 *)(puVar2 + 0x10) = uVar7;
    *(undefined8 *)(puVar2 + 0x18) = uVar9;
    puVar2[0x28] = 0;
    *(undefined8 *)(puVar2 + 0x50) = uVar12;
    *(undefined8 *)(puVar2 + 0x48) = uVar11;
    _swift_retain(uVar7);
    _swift_retain(uVar9);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar3;
    *plVar3 = unaff_x22;
    plVar3[1] = (long)thunk_FUN_10092880c;
    FUN_100915ff8(FUN_10092c0b8,puVar2);
    return;
  }
  Swift::_StringGuts::grow(0x44,_Var5);
  SVar13.bridgeObject = (void *)0xeb00000000282074;
  SVar13.str = (char *)0x6e756f4365747962;
  SVar15.bridgeObject = in_x3;
  SVar15.str = pcVar6;
  Swift::String::append(SVar13,SVar15);
  *(undefined8 **)(unaff_x22 + 0x10) = puVar4;
  SVar13 = Swift::CustomStringConvertible::get_description();
  SVar16.bridgeObject = in_x3;
  SVar16.str = pcVar6;
  Swift::String::append(SVar13,SVar16);
  _swift_bridgeObjectRelease(SVar13.bridgeObject);
  puVar4 = (undefined8 *)0xd000000000000037;
  SVar14.bridgeObject = (void *)0x8000000100db4b30;
  SVar14.str = (char *)0xd000000000000037;
  SVar17.bridgeObject = in_x3;
  SVar17.str = pcVar6;
  Swift::String::append(SVar14,SVar17);
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar4,0,0);
  *puVar4 = 0;
  puVar4[1] = 0xe000000000000000;
  *(undefined4 *)(puVar4 + 2) = 0x16;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x0001009285c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009285c4 | FUN_1009285c4 */

void FUN_1009285c4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x50) = param_8;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  _swift_task_switch(FUN_1009285e8,0,0);
  return;
}



/* Address: 0x1009285e8 | FUN_1009285e8 */

void FUN_1009285e8(undefined8 *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar5;
  undefined8 uVar6;
  long unaff_x22;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  String SVar11;
  String SVar12;
  String SVar13;
  String SVar14;
  String SVar15;
  
  uVar7 = *(ulong *)(unaff_x22 + 0x28);
  if ((long)uVar7 < 1) {
    FUN_1006116e8();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    _swift_retain(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100928724. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (uVar7 >> 0x20 == 0) {
    uVar6 = *(undefined8 *)(unaff_x22 + 0x50);
    uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
    puVar3 = &DAT_100f17f38;
    _swift_allocObject(&DAT_100f17f38,0x58,7);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar10 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar9 = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(puVar3 + 0x40) = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(puVar3 + 0x38) = uVar8;
    *(undefined8 *)(puVar3 + 0x20) = uVar2;
    *(ulong *)(puVar3 + 0x30) = uVar7;
    plVar4 = (long *)0xd0;
    *(undefined **)(unaff_x22 + 0x58) = puVar3;
    *(undefined8 *)(puVar3 + 0x10) = uVar6;
    *(undefined8 *)(puVar3 + 0x18) = uVar1;
    puVar3[0x28] = 0;
    *(undefined8 *)(puVar3 + 0x50) = uVar10;
    *(undefined8 *)(puVar3 + 0x48) = uVar9;
    _swift_retain(uVar6);
    _swift_retain(uVar1);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x60) = plVar4;
    *plVar4 = unaff_x22;
    plVar4[1] = (long)FUN_10092880c;
    FUN_100915ff8(FUN_10092d308,puVar3);
    return;
  }
  Swift::_StringGuts::grow(0x44,param_2);
  SVar11.bridgeObject = (void *)0xeb00000000282074;
  SVar11.str = (char *)0x6e756f4365747962;
  SVar13.bridgeObject = param_4;
  SVar13.str = param_3;
  Swift::String::append(SVar11,SVar13);
  *(ulong *)(unaff_x22 + 0x10) = uVar7;
  SVar11 = Swift::CustomStringConvertible::get_description();
  SVar14.bridgeObject = param_4;
  SVar14.str = param_3;
  Swift::String::append(SVar11,SVar14);
  _swift_bridgeObjectRelease(SVar11.bridgeObject);
  puVar5 = (undefined8 *)0xd000000000000037;
  SVar12.bridgeObject = (void *)0x8000000100db4b30;
  SVar12.str = (char *)0xd000000000000037;
  SVar15.bridgeObject = param_4;
  SVar15.str = param_3;
  Swift::String::append(SVar12,SVar15);
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar5,0,0);
  *puVar5 = 0;
  puVar5[1] = 0xe000000000000000;
  *(undefined4 *)(puVar5 + 2) = 0x16;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100928808. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10092880c | FUN_10092880c */

void FUN_10092880c(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x58);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x60));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100928874. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010092889c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x1009288a0 | FUN_1009288a0 */

void FUN_1009288a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_6;
  *(undefined8 *)(unaff_x22 + 0x48) = param_7;
  *(undefined8 *)(unaff_x22 + 0x30) = param_4;
  *(undefined8 *)(unaff_x22 + 0x38) = param_5;
  *(undefined8 *)(unaff_x22 + 0x20) = param_2;
  *(undefined8 *)(unaff_x22 + 0x28) = param_3;
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  _swift_task_switch(FUN_1009288c4,0,0);
  return;
}



/* Address: 0x1009288c4 | FUN_1009288c4 */

void FUN_1009288c4(undefined8 *param_1,_StringGuts param_2,char *param_3,void *param_4)

{
  undefined *puVar1;
  long *plVar2;
  code *UNRECOVERED_JUMPTABLE;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long unaff_x22;
  ulong uVar6;
  undefined8 uVar7;
  String SVar8;
  String SVar9;
  String SVar10;
  String SVar11;
  String SVar12;
  
  uVar6 = *(ulong *)(unaff_x22 + 0x20);
  if ((long)uVar6 < 1) {
    FUN_1006116e8();
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
    _swift_retain(*param_1);
                    /* WARNING: Could not recover jumptable at 0x000100928a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  }
  if (uVar6 >> 0x20 == 0) {
    uVar5 = *(undefined8 *)(unaff_x22 + 0x48);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar1 = &DAT_100f17f60;
    _swift_allocObject(&DAT_100f17f60,0x58,7);
    puVar1[0x28] = 1;
    *(ulong *)(puVar1 + 0x30) = uVar6;
    plVar2 = (long *)0xd0;
    *(undefined **)(unaff_x22 + 0x50) = puVar1;
    *(undefined8 *)(puVar1 + 0x10) = uVar5;
    *(undefined8 *)(puVar1 + 0x18) = uVar4;
    *(undefined8 *)(puVar1 + 0x20) = 0;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x28);
    *(undefined8 *)(puVar1 + 0x40) = *(undefined8 *)(unaff_x22 + 0x30);
    *(undefined8 *)(puVar1 + 0x38) = uVar7;
    uVar7 = *(undefined8 *)(unaff_x22 + 0x38);
    *(undefined8 *)(puVar1 + 0x50) = *(undefined8 *)(unaff_x22 + 0x40);
    *(undefined8 *)(puVar1 + 0x48) = uVar7;
    _swift_retain(uVar5);
    _swift_retain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x58) = plVar2;
    *plVar2 = unaff_x22;
    plVar2[1] = (long)FUN_100928af0;
    FUN_100915ff8(FUN_10092d308,puVar1);
    return;
  }
  Swift::_StringGuts::grow(0x44,param_2);
  SVar8.bridgeObject = (void *)0xeb00000000282074;
  SVar8.str = (char *)0x6e756f4365747962;
  SVar10.bridgeObject = param_4;
  SVar10.str = param_3;
  Swift::String::append(SVar8,SVar10);
  *(ulong *)(unaff_x22 + 0x10) = uVar6;
  SVar8 = Swift::CustomStringConvertible::get_description();
  SVar11.bridgeObject = param_4;
  SVar11.str = param_3;
  Swift::String::append(SVar8,SVar11);
  _swift_bridgeObjectRelease(SVar8.bridgeObject);
  puVar3 = (undefined8 *)0xd000000000000037;
  SVar9.bridgeObject = (void *)0x8000000100db4b30;
  SVar9.str = (char *)0xd000000000000037;
  SVar12.bridgeObject = param_4;
  SVar12.str = param_3;
  Swift::String::append(SVar9,SVar12);
  FUN_1008d5300();
  _swift_allocError(&DAT_100ef11e8,puVar3,0,0);
  *puVar3 = 0;
  puVar3[1] = 0xe000000000000000;
  *(undefined4 *)(puVar3 + 2) = 0x16;
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x000100928aec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100928af0 | FUN_100928af0 */

void FUN_100928af0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  long unaff_x20;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x50);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x58));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
                    /* WARNING: Could not recover jumptable at 0x000100928b58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar2 + 8))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100928b80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))(param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100928b84 | FUN_100928b84 */

void FUN_100928b84(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x21;
  
  FUN_10092c370();
  if (unaff_x21 == 0) {
    *param_1 = param_3;
    *(int *)(param_1 + 1) = (int)param_4;
    *(int *)((long)param_1 + 0xc) = (int)((ulong)param_4 >> 0x20);
    *(int *)(param_1 + 2) = (int)param_5;
    *(short *)((long)param_1 + 0x14) = (short)((ulong)param_5 >> 0x20);
    *(char *)((long)param_1 + 0x16) = (char)((ulong)param_5 >> 0x30);
  }
  return;
}



/* Address: 0x100928bec | FUN_100928bec */

void FUN_100928bec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100928c08,0,0);
  return;
}



/* Address: 0x100928c08 | FUN_100928c08 */

void FUN_100928c08(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar3 = &DAT_100f17f88;
  _swift_allocObject(&DAT_100f17f88,0x20,7);
  *(undefined **)(unaff_x22 + 0x28) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xa0;
  _swift_retain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100928cb0;
  FUN_1009162e4(FUN_1009162e4,FUN_10092c0cc,puVar3);
  return;
}



/* Address: 0x100928cb0 | FUN_100928cb0 */

void FUN_100928cb0(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x28);
  *(long *)(lVar3 + 0x38) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x30));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100928d1c;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100928d1c | FUN_100928d1c */

void FUN_100928d1c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100928d24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100928d28 | FUN_100928d28 */

void FUN_100928d28(undefined8 param_1,undefined8 param_2)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100928d40,0,0);
  return;
}



/* Address: 0x100928d40 | FUN_100928d40 */

void FUN_100928d40(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0xb0;
  _swift_retain(*(undefined8 *)(unaff_x22 + 0x10));
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x20) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_100928dbc;
  FUN_10091649c(FUN_10092bee0,*(undefined8 *)(unaff_x22 + 0x10));
  return;
}



/* Address: 0x100928dbc | FUN_100928dbc */

void FUN_100928dbc(void)

{
  undefined8 uVar1;
  long *unaff_x22;
  long lVar2;
  
  uVar1 = *(undefined8 *)(*unaff_x22 + 0x10);
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x20));
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x000100928e1c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar2 + 8))();
  return;
}



/* Address: 0x100928e20 | FUN_100928e20 */

void FUN_100928e20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long unaff_x21;
  
  uVar1 = param_2;
  FUN_10095f038(param_2,0,1);
  if (unaff_x21 == 0) {
    uVar2 = param_2;
    FUN_10095f038(param_2,0,2);
    FUN_10095f038(param_2,uVar1,0);
    *param_1 = uVar2;
  }
  return;
}



/* Address: 0x100928e8c | FUN_100928e8c */

void FUN_100928e8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_100928eac,0,0);
  return;
}



/* Address: 0x100928eac | FUN_100928eac */

void FUN_100928eac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  long unaff_x22;
  int iVar8;
  int iVar9;
  
  iVar9 = (int)*(undefined8 *)(unaff_x22 + 0x20);
  iVar8 = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x20) >> 0x20);
  uVar5 = iVar8 - iVar9;
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x28);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x18);
    puVar6 = &DAT_100f17fb0;
    _swift_allocObject(&DAT_100f17fb0,0x4f,7);
    *(undefined **)(unaff_x22 + 0x38) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = uVar3;
    *(undefined8 *)(puVar6 + 0x18) = uVar2;
    *(ulong *)(puVar6 + 0x20) = (ulong)uVar5;
    *(undefined8 *)(puVar6 + 0x28) = 0;
    puVar6[0x30] = 1;
    *(undefined8 *)(puVar6 + 0x38) = uVar4;
    *(int *)(puVar6 + 0x40) = iVar9;
    *(int *)(puVar6 + 0x44) = iVar8;
    *(int *)(puVar6 + 0x48) = (int)uVar1;
    *(short *)(puVar6 + 0x4c) = (short)((ulong)uVar1 >> 0x20);
    puVar6[0x4e] = (char)((ulong)uVar1 >> 0x30);
    plVar7 = (long *)0xa0;
    _swift_retain(uVar3);
    _swift_retain(uVar2);
    _swift_retain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x40) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_100928fe8;
    FUN_1009162e4(FUN_1009162e4,FUN_10092c128,puVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000100928fe4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100928fe8 | FUN_100928fe8 */

void FUN_100928fe8(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x38);
  *(long *)(lVar3 + 0x48) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x40));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100929054;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100929054 | FUN_100929054 */

void FUN_100929054(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x00010092905c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100929060 | FUN_100929060 */

void FUN_100929060(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  _swift_task_switch(FUN_100929080,0,0);
  return;
}



/* Address: 0x100929080 | FUN_100929080 */

void FUN_100929080(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  undefined8 uVar8;
  long unaff_x22;
  int iVar9;
  int iVar10;
  
  iVar10 = (int)*(undefined8 *)(unaff_x22 + 0x28);
  iVar9 = (int)((ulong)*(undefined8 *)(unaff_x22 + 0x28) >> 0x20);
  uVar5 = iVar9 - iVar10;
  if (uVar5 != 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x30);
    uVar3 = *(undefined8 *)(unaff_x22 + 0x38);
    uVar2 = *(undefined8 *)(unaff_x22 + 0x18);
    uVar4 = *(undefined8 *)(unaff_x22 + 0x20);
    uVar8 = *(undefined8 *)(unaff_x22 + 0x10);
    puVar6 = &DAT_100f17fd8;
    _swift_allocObject(&DAT_100f17fd8,0x4f,7);
    *(undefined **)(unaff_x22 + 0x40) = puVar6;
    *(undefined8 *)(puVar6 + 0x10) = uVar3;
    *(undefined8 *)(puVar6 + 0x18) = uVar8;
    *(ulong *)(puVar6 + 0x20) = (ulong)uVar5;
    *(undefined8 *)(puVar6 + 0x28) = uVar2;
    puVar6[0x30] = 0;
    *(undefined8 *)(puVar6 + 0x38) = uVar4;
    *(int *)(puVar6 + 0x40) = iVar10;
    *(int *)(puVar6 + 0x44) = iVar9;
    *(int *)(puVar6 + 0x48) = (int)uVar1;
    *(short *)(puVar6 + 0x4c) = (short)((ulong)uVar1 >> 0x20);
    puVar6[0x4e] = (char)((ulong)uVar1 >> 0x30);
    plVar7 = (long *)0xa0;
    _swift_retain(uVar3);
    _swift_retain(uVar8);
    _swift_retain(uVar4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0x48) = plVar7;
    *plVar7 = unaff_x22;
    plVar7[1] = (long)FUN_1009291bc;
    FUN_1009162e4(FUN_1009162e4,FUN_10092d344,puVar6);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0001009291b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x1009291bc | FUN_1009291bc */

void FUN_1009291bc(void)

{
  undefined8 uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar3 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar3 + 0x40);
  *(long *)(lVar3 + 0x50) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar3 + 0x48));
  _swift_release(uVar1);
  if (unaff_x20 == 0) {
    pcVar2 = thunk_FUN_1000e5808;
  }
  else {
    pcVar2 = FUN_100929228;
  }
  _swift_task_switch(pcVar2,0,0);
  return;
}



/* Address: 0x100929228 | FUN_100929228 */

void FUN_100929228(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x000100929230. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100929234 | FUN_100929234 */

void FUN_100929234(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  undefined1 param_5,long param_6,ulong param_7,ulong param_8,undefined8 param_9)

{
  code *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long unaff_x21;
  uint uVar5;
  ulong uVar6;
  undefined1 auStack_d0 [16];
  undefined8 local_c0;
  undefined1 local_b8;
  long local_b0;
  long lStack_a8;
  long local_a0;
  long *plStack_98;
  ulong local_88;
  char local_80;
  undefined1 auStack_78 [24];
  long local_58;
  
  uVar6 = param_7 >> 0x20;
  local_58 = 0;
  _swift_retain(param_6);
  _swift_beginAccess(param_6 + 0x18,auStack_78,0,0);
  lVar4 = 0;
  while( true ) {
    if (SBORROW8(param_3,lVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293c0);
      (*pcVar1)();
    }
    if (uVar6 - (param_7 & 0xffffffff) != param_3 - lVar4) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293c4);
      (*pcVar1)();
    }
    lStack_a8 = *(long *)(param_6 + 0x18) + (param_8 >> 0x18 & 0xffff00) + (param_8 >> 0x30 & 0xff);
    local_b0 = lStack_a8 + (param_7 & 0xffffffff);
    lStack_a8 = lStack_a8 + uVar6;
    plStack_98 = &local_58;
    puVar2 = &DAT_100fece28;
    local_c0 = param_4;
    local_b8 = param_5;
    local_a0 = param_3;
    FUN_1000f7830(&DAT_100fece28,&DAT_100c84e30);
    uVar3 = param_9;
    FUN_1006541ac(&local_88,param_9,auStack_d0,puVar2);
    if (unaff_x21 != 0) goto LAB_100929390;
    if (local_80 != '\x01') break;
    if ((long)local_88 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293c8);
      (*pcVar1)();
    }
    if (local_88 >> 0x20 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293cc);
      (*pcVar1)();
    }
    uVar5 = (uint)param_7;
    param_7 = (ulong)(uVar5 + (uint)local_88);
    if (CARRY4(uVar5,(uint)local_88)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293d0);
      (*pcVar1)();
    }
    lVar4 = local_58 + local_88;
    if (SCARRY8(local_58,local_88)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009293d4);
      (*pcVar1)();
    }
    local_58 = lVar4;
    if (param_3 <= lVar4) {
LAB_100929390:
      _swift_release(param_6);
      return;
    }
  }
  FUN_10092cb50();
  _swift_allocError(&DAT_100f18228,uVar3,0,0);
  _swift_willThrow();
  goto LAB_100929390;
}



/* Address: 0x1009293d4 | FUN_1009293d4 */

void FUN_1009293d4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005c804c;
  FUN_100929474(plVar1,param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



/* Address: 0x100929474 | FUN_100929474 */

void FUN_100929474(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,long param_7)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x38) = param_6;
  *(long *)(unaff_x22 + 0x40) = param_7;
  *(undefined8 *)(unaff_x22 + 0x28) = param_4;
  *(undefined8 *)(unaff_x22 + 0x30) = param_5;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  lVar2 = *(long *)(param_7 + -8);
  *(long *)(unaff_x22 + 0x48) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x50) = uVar1;
  _swift_task_switch(FUN_1009294dc,0,0);
  return;
}



/* Address: 0x1009294dc | FUN_1009294dc */

void FUN_1009294dc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x18);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  puVar3 = &DAT_100f18000;
  _swift_allocObject(&DAT_100f18000,0x20,7);
  *(undefined **)(unaff_x22 + 0x58) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xd0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x60) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100929588;
  FUN_100916660(FUN_10092c1c0,puVar3);
  return;
}



/* Address: 0x100929588 | FUN_100929588 */

void FUN_100929588(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar6 + 0x58);
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar6 + 0x68) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x60));
  _swift_release(uVar2);
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100929604. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 8))();
    return;
  }
  piVar4 = *(int **)(lVar6 + 0x28);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(lVar6 + 0x70) = plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)FUN_100929668;
                    /* WARNING: Could not recover jumptable at 0x000100929664. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))
            (plVar3,*(undefined8 *)(lVar6 + 0x50),param_1,param_2,param_3 & 0xffffffffffffff);
  return;
}



/* Address: 0x100929668 | FUN_100929668 */

void FUN_100929668(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x78) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_1009296cc;
  }
  else {
    pcVar1 = FUN_100929780;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009296cc | FUN_1009296cc */

void FUN_1009296cc(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x78);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  (**(code **)(*(long *)(unaff_x22 + 0x48) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x50),
             *(undefined8 *)(unaff_x22 + 0x40));
  _swift_retain(uVar2);
  FUN_100654460();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x68);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x50);
    _swift_release_n(uVar2,2);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x48) + 8))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x40));
    _swift_release_n(uVar2,2);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x00010092977c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100929780 | FUN_100929780 */

/* WARNING: Removing unreachable block (ram,0x0001009297d0) */

void FUN_100929780(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_retain(uVar1);
  FUN_100654460();
  _swift_release(uVar1);
  uVar1 = *(undefined8 *)(unaff_x22 + 0x68);
  _swift_willThrow();
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x50));
                    /* WARNING: Could not recover jumptable at 0x000100929810. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100929814 | FUN_100929814 */

/* WARNING: Removing unreachable block (ram,0x000100929884) */
/* WARNING: Removing unreachable block (ram,0x000100929878) */

void FUN_100929814(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long unaff_x21;
  
  FUN_100654ce4(0);
  _swift_bridgeObjectRetain(param_3);
  FUN_100654a5c();
  if (unaff_x21 == 0) {
    uVar1 = param_2;
    _swift_retain();
    FUN_100654e1c();
    _swift_release(param_2);
    *param_1 = uVar1;
    param_1[1] = param_3;
    *(int *)(param_1 + 2) = (int)param_4;
    *(short *)((long)param_1 + 0x14) = (short)((ulong)param_4 >> 0x20);
    *(char *)((long)param_1 + 0x16) = (char)((ulong)param_4 >> 0x30);
  }
  return;
}



/* Address: 0x1009298e4 | FUN_1009298e4 */

void FUN_1009298e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x90;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005c804c;
  FUN_10092998c(plVar1,param_1,param_2,param_3,param_4,param_5 & 0xffffffff0000ffff,param_6,param_7,
                param_8);
  return;
}



/* Address: 0x10092998c | FUN_10092998c */

void FUN_10092998c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined1 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  long param_9)

{
  ulong uVar1;
  long lVar2;
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x40) = param_8;
  *(long *)(unaff_x22 + 0x48) = param_9;
  *(undefined8 *)(unaff_x22 + 0x30) = param_6;
  *(undefined8 *)(unaff_x22 + 0x38) = param_7;
  *(undefined1 *)(unaff_x22 + 0x88) = param_4;
  *(undefined8 *)(unaff_x22 + 0x20) = param_3;
  *(undefined8 *)(unaff_x22 + 0x28) = param_5;
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  *(undefined8 *)(unaff_x22 + 0x18) = param_2;
  lVar2 = *(long *)(param_9 + -8);
  *(long *)(unaff_x22 + 0x50) = lVar2;
  uVar1 = *(long *)(lVar2 + 0x40) + 0xfU & 0xfffffffffffffff0;
  _swift_task_alloc();
  *(ulong *)(unaff_x22 + 0x58) = uVar1;
  _swift_task_switch(FUN_1009299fc,0,0);
  return;
}



/* Address: 0x1009299fc | FUN_1009299fc */

void FUN_1009299fc(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  long *plVar5;
  long unaff_x22;
  undefined8 uVar6;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined1 *)(unaff_x22 + 0x88);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x18);
  puVar4 = &DAT_100f18028;
  _swift_allocObject(&DAT_100f18028,0x2c,7);
  *(undefined **)(unaff_x22 + 0x60) = puVar4;
  *(undefined8 *)(puVar4 + 0x10) = uVar6;
  *(undefined8 *)(puVar4 + 0x18) = uVar1;
  puVar4[0x20] = uVar3;
  *(short *)(puVar4 + 0x24) = (short)uVar2;
  *(int *)(puVar4 + 0x28) = (int)((ulong)uVar2 >> 0x20);
  plVar5 = (long *)0xb0;
  _swift_bridgeObjectRetain(uVar1);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x68) = plVar5;
  *plVar5 = unaff_x22;
  plVar5[1] = (long)FUN_100929acc;
  FUN_1009168f4(FUN_10092d330,puVar4);
  return;
}



/* Address: 0x100929acc | FUN_100929acc */

void FUN_100929acc(undefined8 param_1)

{
  int iVar1;
  undefined8 uVar2;
  long *plVar3;
  int *piVar4;
  long unaff_x20;
  long *unaff_x22;
  long lVar5;
  long lVar6;
  
  lVar6 = *unaff_x22;
  uVar2 = *(undefined8 *)(lVar6 + 0x60);
  lVar5 = *unaff_x22;
  *(undefined8 *)(lVar6 + 0x70) = param_1;
  _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x68));
  _swift_release(uVar2);
  if (unaff_x20 != 0) {
    _swift_task_dealloc(*(undefined8 *)(lVar6 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100929b38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar5 + 8))();
    return;
  }
  piVar4 = *(int **)(lVar6 + 0x30);
  iVar1 = *piVar4;
  plVar3 = (long *)(ulong)(uint)piVar4[1];
  _swift_task_alloc();
  *(long **)(lVar6 + 0x78) = plVar3;
  *plVar3 = lVar5;
  plVar3[1] = (long)FUN_100929b90;
                    /* WARNING: Could not recover jumptable at 0x000100929b8c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)((long)iVar1 + (long)piVar4))(plVar3,*(undefined8 *)(lVar6 + 0x58),param_1);
  return;
}



/* Address: 0x100929b90 | FUN_100929b90 */

void FUN_100929b90(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0x80) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100929bf4;
  }
  else {
    pcVar1 = FUN_100929c98;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100929bf4 | FUN_100929bf4 */

void FUN_100929bf4(void)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long unaff_x22;
  
  lVar3 = *(long *)(unaff_x22 + 0x80);
  (**(code **)(*(long *)(unaff_x22 + 0x50) + 0x20))
            (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x58),
             *(undefined8 *)(unaff_x22 + 0x48));
  FUN_100654460();
  uVar2 = *(undefined8 *)(unaff_x22 + 0x70);
  if (lVar3 == 0) {
    uVar1 = *(undefined8 *)(unaff_x22 + 0x58);
    _swift_release(uVar2);
    _swift_task_dealloc(uVar1);
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
  else {
    (**(code **)(*(long *)(unaff_x22 + 0x50) + 8))
              (*(undefined8 *)(unaff_x22 + 0x10),*(undefined8 *)(unaff_x22 + 0x48));
    _swift_release(uVar2);
    _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
    UNRECOVERED_JUMPTABLE = *(code **)(unaff_x22 + 8);
  }
                    /* WARNING: Could not recover jumptable at 0x000100929c94. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)();
  return;
}



/* Address: 0x100929c98 | FUN_100929c98 */

/* WARNING: Removing unreachable block (ram,0x000100929cd4) */

void FUN_100929c98(void)

{
  undefined8 uVar1;
  long unaff_x22;
  
  FUN_100654460();
  uVar1 = *(undefined8 *)(unaff_x22 + 0x70);
  _swift_willThrow();
  _swift_release(uVar1);
  _swift_task_dealloc(*(undefined8 *)(unaff_x22 + 0x58));
                    /* WARNING: Could not recover jumptable at 0x000100929d14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100929d18 | FUN_100929d18 */

void FUN_100929d18(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5)

{
  long unaff_x21;
  
  FUN_100654ce4(0);
  _swift_bridgeObjectRetain(param_3);
  FUN_100654988(param_2,param_3,param_4,param_5 & 0xffffffff0000ffff);
  if (unaff_x21 == 0) {
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x100929d90 | FUN_100929d90 */

void FUN_100929d90(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_3;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xa0) = param_1;
  *(undefined8 *)(unaff_x22 + 0xa8) = param_2;
  _swift_task_switch(FUN_100929dac,0,0);
  return;
}



/* Address: 0x100929dac | FUN_100929dac */

void FUN_100929dac(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xb0);
  puVar3 = &DAT_100f18050;
  _swift_allocObject(&DAT_100f18050,0x20,7);
  *(undefined **)(unaff_x22 + 0xc0) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = uVar1;
  *(undefined8 *)(puVar3 + 0x18) = uVar2;
  plVar4 = (long *)0xa0;
  _swift_bridgeObjectRetain(uVar2);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 200) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)FUN_100929e5c;
  FUN_100916b98(plVar4,unaff_x22 + 0x10,FUN_10092d358,puVar3);
  return;
}



/* Address: 0x100929e5c | FUN_100929e5c */

void FUN_100929e5c(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  *(long *)(lVar2 + 0xd0) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 200));
  _swift_release(*(undefined8 *)(lVar2 + 0xc0));
  if (unaff_x20 == 0) {
    pcVar1 = FUN_100929ec8;
  }
  else {
    pcVar1 = FUN_100929f00;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100929ec8 | FUN_100929ec8 */

void FUN_100929ec8(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xa0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x40);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x58);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x50);
  puVar1[7] = *(undefined8 *)(unaff_x22 + 0x48);
  puVar1[6] = uVar6;
  puVar1[9] = uVar8;
  puVar1[8] = uVar7;
  puVar1[3] = uVar3;
  puVar1[2] = uVar2;
  puVar1[5] = uVar5;
  puVar1[4] = uVar4;
  uVar3 = *(undefined8 *)(unaff_x22 + 0x68);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x78);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x70);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x80);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x98);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x90);
  puVar1[0xf] = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1[0xe] = uVar6;
  puVar1[0x11] = uVar8;
  puVar1[0x10] = uVar7;
  puVar1[0xb] = uVar3;
  puVar1[10] = uVar2;
  puVar1[0xd] = uVar5;
  puVar1[0xc] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x000100929efc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}


