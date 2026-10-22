/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1007dee58 | thunk_FUN_1007e56f0 */

void thunk_FUN_1007e56f0(void)

{
  FUN_1007e56f0();
  return;
}



/* Address: 0x1007dee5c | thunk_FUN_1007e023c */

void thunk_FUN_1007e023c(void)

{
  FUN_1007e023c();
  return;
}



/* Address: 0x1007dee60 | FUN_1007dee60 */

undefined1  [16] FUN_1007dee60(long param_1,ulong param_2,long param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 auVar3 [16];
  
  uVar1 = param_3 - param_1;
  if (SBORROW8(param_3,param_1)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007deeb0);
    (*pcVar2)();
  }
  if ((long)param_2 < 1) {
    if (((long)uVar1 < 1) && ((long)param_2 < (long)uVar1)) goto LAB_1007dee90;
  }
  else if ((-1 < (long)uVar1) && (uVar1 < param_2)) {
LAB_1007dee90:
    return ZEXT816(1) << 0x40;
  }
  if (SCARRY8(param_1,param_2)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1007deeb4);
    (*pcVar2)();
  }
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_1 + param_2;
  return auVar3;
}



/* Address: 0x1007deeb4 | FUN_1007deeb4 */

void FUN_1007deeb4(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c793e8,param_1);
  return;
}



/* Address: 0x1007deec4 | FUN_1007deec4 */

void FUN_1007deec4(void)

{
  FUN_1007defb0(&DAT_100fe66a0,
                PTR__Swift__Swift__Range<undefined>_>Swift__RandomAccessCollection_100eac960);
  return;
}



/* Address: 0x1007deee8 | FUN_1007deee8 */

void FUN_1007deee8(void)

{
  undefined *puVar1;
  
  if (DAT_100fe66b0 != (undefined *)0x0) {
    return;
  }
  puVar1 = PTR_Swift____int64_>Swift__SignedInteger_100eac720;
  _swift_getWitnessTable
            (PTR_Swift____int64_>Swift__SignedInteger_100eac720,
             PTR___type_metadata_for_Swift_Int_100eac6f8);
  DAT_100fe66b0 = puVar1;
  return;
}



/* Address: 0x1007def28 | FUN_1007def28 */

void FUN_1007def28(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79488,param_1);
  return;
}



/* Address: 0x1007def38 | FUN_1007def38 */

void FUN_1007def38(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79538,param_1);
  return;
}



/* Address: 0x1007def48 | FUN_1007def48 */

void FUN_1007def48(void)

{
  FUN_1007defb0(&DAT_100fe66b8,
                PTR__Swift__Swift__Range<undefined>_>Swift__BidirectionalCollection_100eac948);
  return;
}



/* Address: 0x1007def6c | FUN_1007def6c */

void FUN_1007def6c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c794d8,param_1);
  return;
}



/* Address: 0x1007def7c | FUN_1007def7c */

void FUN_1007def7c(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetResilientWitness_100c79418,param_1);
  return;
}



/* Address: 0x1007def8c | FUN_1007def8c */

void FUN_1007def8c(void)

{
  FUN_1007defb0(&DAT_100fe66c0,PTR__Swift__Swift__Range<undefined>_>Swift__Collection_100eac968);
  return;
}



/* Address: 0x1007defb0 | FUN_1007defb0 */

void FUN_1007defb0(long *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_40;
  undefined *puStack_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100fe66a8;
    FUN_1000f8b08(&DAT_100fe66a8,&TargetResilientWitness_100c79480);
    puVar2 = puVar1;
    FUN_1007deee8();
    local_40 = PTR___protocol_witness_table_for_Swift_Int___Swift_Strideable_in_Swift_100eac730;
    puStack_38 = puVar2;
    _swift_getWitnessTable(param_2,puVar1,&local_40);
    *param_1 = param_2;
  }
  return;
}



/* Address: 0x1007df024 | FUN_1007df024 */

undefined8 * FUN_1007df024(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar3;
  uVar1 = param_2[1];
  uVar2 = param_2[2];
  param_1[2] = uVar2;
  uVar4 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar4;
  _swift_retain(uVar3);
  _swift_retain(uVar1);
  _swift_retain(uVar2);
  return param_1;
}



/* Address: 0x1007df07c | FUN_1007df07c */

void FUN_1007df07c(undefined8 *param_1,undefined8 *param_2)

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



/* Address: 0x1007df090 | FUN_1007df090 */

void FUN_1007df090(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007df09c | thunk_FUN_1002d1538 */

void thunk_FUN_1002d1538(void)

{
  FUN_1002d1538();
  return;
}



/* Address: 0x1007df0a0 | thunk_FUN_1007df0a4 */

undefined8 * thunk_FUN_1007df0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1007df0a4 | FUN_1007df0a4 */

undefined8 * FUN_1007df0a4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[1];
  param_1[1] = param_2[1];
  _swift_retain();
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_retain();
  _swift_release(uVar1);
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  return param_1;
}



/* Address: 0x1007df128 | thunk_FUN_1007df12c */

undefined8 * thunk_FUN_1007df12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x1007df12c | FUN_1007df12c */

undefined8 * FUN_1007df12c(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar1 = param_1[1];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  _swift_release(uVar1);
  uVar1 = param_1[2];
  param_1[2] = param_2[2];
  _swift_release(uVar1);
  uVar1 = param_2[3];
  param_1[4] = param_2[4];
  param_1[3] = uVar1;
  return param_1;
}



/* Address: 0x1007df180 | thunk_FUN_10016b9e0 */

void thunk_FUN_10016b9e0(void)

{
  FUN_10016b9e0();
  return;
}



/* Address: 0x1007df184 | thunk_FUN_10016ba28 */

void thunk_FUN_10016ba28(void)

{
  FUN_10016ba28();
  return;
}



/* Address: 0x1007df188 | FUN_1007df188 */

void FUN_1007df188(void)

{
  FUN_100024ee0();
  return;
}



/* Address: 0x1007df194 | thunk_FUN_1005e02d4 */

void thunk_FUN_1005e02d4(void)

{
  FUN_1005e02d4();
  return;
}



/* Address: 0x1007df198 | thunk_FUN_1005e02e4 */

void thunk_FUN_1005e02e4(void)

{
  FUN_1005e02e4();
  return;
}



/* Address: 0x1007df19c | thunk_FUN_1007debc0 */

void thunk_FUN_1007debc0(void)

{
  FUN_1007debc0();
  return;
}



/* Address: 0x1007df1a0 | thunk_FUN_100619388 */

void thunk_FUN_100619388(void)

{
  FUN_100619388();
  return;
}



/* Address: 0x1007df1a4 | thunk_FUN_10016ba28 */

void thunk_FUN_10016ba28(void)

{
  FUN_10016ba28();
  return;
}



/* Address: 0x1007df1a8 | thunk_FUN_1007de878 */

void thunk_FUN_1007de878(void)

{
  thunk_FUN_1007de878();
  return;
}



/* Address: 0x1007df1ac | thunk_FUN_1007de82c */

void thunk_FUN_1007de82c(void)

{
  thunk_FUN_1007de82c();
  return;
}



/* Address: 0x1007df1b0 | thunk_FUN_1002d1538 */

void thunk_FUN_1002d1538(void)

{
  thunk_FUN_1002d1538();
  return;
}



/* Address: 0x1007df1b4 | thunk_FUN_1007def6c */

void thunk_FUN_1007def6c(void)

{
  FUN_1007def6c();
  return;
}



/* Address: 0x1007df1b8 | thunk_FUN_1007def38 */

void thunk_FUN_1007def38(void)

{
  FUN_1007def38();
  return;
}



/* Address: 0x1007df1bc | thunk_FUN_1007df0a4 */

void thunk_FUN_1007df0a4(void)

{
  thunk_FUN_1007df0a4();
  return;
}



/* Address: 0x1007df1c0 | thunk_FUN_1007df12c */

void thunk_FUN_1007df12c(void)

{
  thunk_FUN_1007df12c();
  return;
}



/* Address: 0x1007df1c4 | thunk_FUN_10016b9e0 */

void thunk_FUN_10016b9e0(void)

{
  FUN_10016b9e0();
  return;
}



/* Address: 0x1007df1c8 | thunk_FUN_1007df2b8 */

undefined8 thunk_FUN_1007df2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(param_3);
  return param_1;
}



/* Address: 0x1007df1cc | FUN_1007df1cc */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007df258 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007df1cc(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ContiguousArray<undefined> CVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xc906);
  }
  *param_1 = puVar1;
  puVar1[3] = unaff_x20;
  uVar4 = unaff_x20[2];
  uVar2 = unaff_x20[1];
  *puVar1 = *unaff_x20;
  puVar1[2] = uVar4;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[4] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar1[5] = uVar4;
  FUN_1007f61ec();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar1[6] = uVar5;
  Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  CVar3 = Swift::ContiguousArray::_init(uVar2,uVar5);
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar4;
  unaff_x20[2] = CVar3.unknown;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = thunk_FUN_1007df3c0;
  return auVar6;
}



/* Address: 0x1007df284 | FUN_1007df284 */

undefined1  [16] FUN_1007df284(undefined8 param_1,undefined8 param_2)

{
  undefined1 auVar1 [16];
  
  _swift_retain();
  _swift_retain(param_2);
  auVar1._8_8_ = param_2;
  auVar1._0_8_ = param_1;
  return auVar1;
}



/* Address: 0x1007df2b8 | FUN_1007df2b8 */

undefined8 FUN_1007df2b8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(param_3);
  return param_1;
}



/* Address: 0x1007df304 | FUN_1007df304 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007df390 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined1  [16] FUN_1007df304(undefined8 *param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ContiguousArray<undefined> CVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auVar6 [16];
  
  puVar1 = (undefined8 *)&DAT_00000038;
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    puVar1 = _malloc(0x38);
  }
  else {
    _swift_coroFrameAlloc(0x38,0xdfc1);
  }
  *param_1 = puVar1;
  puVar1[3] = unaff_x20;
  uVar4 = unaff_x20[2];
  uVar2 = unaff_x20[1];
  *puVar1 = *unaff_x20;
  puVar1[2] = uVar4;
  puVar1[1] = uVar2;
  uVar2 = *(undefined8 *)(param_2 + 0x10);
  puVar1[4] = uVar2;
  uVar4 = *(undefined8 *)(param_2 + 0x20);
  puVar1[5] = uVar4;
  FUN_1007f61ec();
  uVar5 = *(undefined8 *)(param_2 + 0x18);
  puVar1[6] = uVar5;
  Swift::Array<undefined>::_allocateUninitialized(0,uVar5);
  CVar3 = Swift::ContiguousArray::_init(uVar2,uVar5);
  *unaff_x20 = uVar2;
  unaff_x20[1] = uVar4;
  unaff_x20[2] = CVar3.unknown;
  auVar6._8_8_ = puVar1;
  auVar6._0_8_ = thunk_FUN_1007df3c0;
  return auVar6;
}



/* Address: 0x1007df3bc | thunk_FUN_1007df3c0 */

void thunk_FUN_1007df3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1007df414(param_1[3],param_1,param_1[4],param_1[6],param_1[5]);
  uVar1 = *param_1;
  uVar2 = param_1[2];
  _swift_release(param_1[1]);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007df3c0 | FUN_1007df3c0 */

void FUN_1007df3c0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  param_1 = (undefined8 *)*param_1;
  FUN_1007df414(param_1[3],param_1,param_1[4],param_1[6],param_1[5]);
  uVar1 = *param_1;
  uVar2 = param_1[2];
  _swift_release(param_1[1]);
  _swift_release(uVar2);
  _swift_release(uVar1);
  _free(param_1);
  return;
}



/* Address: 0x1007df414 | FUN_1007df414 */

void FUN_1007df414(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar3 = *param_2;
  uVar1 = *param_1;
  uVar2 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_2[2];
  uVar7 = param_2[2];
  uVar6 = param_2[1];
  *param_1 = uVar3;
  param_1[2] = uVar7;
  param_1[1] = uVar6;
  _swift_retain(uVar3);
  _swift_retain(uVar6);
  _swift_retain(uVar5);
  _swift_release(uVar4);
  _swift_release(uVar2);
  _swift_release(uVar1);
  return;
}



/* Address: 0x1007df48c | thunk_FUN_1007df490 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007df4fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void thunk_FUN_1007df490(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ContiguousArray<undefined> CVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  FUN_1007f61ec();
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  Swift::Array<undefined>::_allocateUninitialized(0,uVar4);
  CVar3 = Swift::ContiguousArray::_init(uVar6,uVar4);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  *unaff_x20 = uVar6;
  unaff_x20[1] = uVar7;
  unaff_x20[2] = CVar3.unknown;
  FUN_1007df414();
  _swift_release(param_3);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007df490 | FUN_1007df490 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007df4fc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_1007df490(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ContiguousArray<undefined> CVar3;
  undefined8 *unaff_x20;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar5 = unaff_x20[2];
  uVar6 = *(undefined8 *)(param_4 + 0x10);
  uVar7 = *(undefined8 *)(param_4 + 0x20);
  FUN_1007f61ec();
  uVar4 = *(undefined8 *)(param_4 + 0x18);
  Swift::Array<undefined>::_allocateUninitialized(0,uVar4);
  CVar3 = Swift::ContiguousArray::_init(uVar6,uVar4);
  _swift_release(uVar5);
  _swift_release(uVar2);
  _swift_release(uVar1);
  *unaff_x20 = uVar6;
  unaff_x20[1] = uVar7;
  unaff_x20[2] = CVar3.unknown;
  FUN_1007df414();
  _swift_release(param_3);
  _swift_release(param_2);
  _swift_release(param_1);
  return;
}



/* Address: 0x1007df57c | FUN_1007df57c */

void FUN_1007df57c(void)

{
  FUN_1007f9250();
  return;
}



/* Address: 0x1007df588 | FUN_1007df588 */

void FUN_1007df588(undefined8 param_1,undefined8 param_2,ContiguousArray param_3)

{
  Swift::ContiguousArray::get_count(param_3);
  return;
}



/* Address: 0x1007df594 | FUN_1007df594 */

undefined8 FUN_1007df594(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  _swift_retain();
  _swift_retain(param_2);
  _swift_retain(param_3);
  return param_1;
}



/* Address: 0x1007df5e4 | FUN_1007df5e4 */

void FUN_1007df5e4(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar6 = unaff_x20[2];
  uVar3 = uVar1;
  uVar4 = uVar2;
  uVar5 = uVar6;
  FUN_1007df594();
  _swift_release(uVar6);
  _swift_release(uVar2);
  _swift_release(uVar1);
  *param_1 = uVar3;
  param_1[1] = uVar4;
  param_1[2] = uVar5;
  param_1[3] = 0;
  return;
}



/* Address: 0x1007df65c | FUN_1007df65c */

void FUN_1007df65c(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x20;
  
  FUN_1007df588(param_1,param_2,*(undefined8 *)(unaff_x20 + 0x10),param_4,
                *(undefined8 *)(param_1 + 0x18));
  return;
}



/* Address: 0x1007df668 | FUN_1007df668 */

/* WARNING: Heritage AFTER dead removal. Example location: x0 : 0x0001007df694 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined * FUN_1007df668(undefined8 param_1)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  ContiguousArray<Swift__copyCollectionToContiguousArray<A_where_A:_Swift_Collection>(A)__>_Swift_ContiguousArray<A_Element>>
  CVar2;
  undefined8 *unaff_x20;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c797a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c797a0,param_1);
  CVar2 = Swift::__copyCollectionToContiguousArray(pTVar1,param_1,pTVar1);
  _swift_release(*unaff_x20);
  _swift_release(unaff_x20[1]);
  _swift_release(unaff_x20[2]);
  return CVar2.unknown;
}



/* Address: 0x1007df6c4 | FUN_1007df6c4 */

void FUN_1007df6c4(undefined8 param_1,undefined8 param_2,__int64 param_3,undefined8 param_4,
                  ContiguousArray param_5,ContiguousArray param_6)

{
  Swift::ContiguousArray::get_subscript(param_3,param_5);
  Swift::ContiguousArray::get_subscript(param_3,param_6);
  return;
}



/* Address: 0x1007df718 | FUN_1007df718 */

void FUN_1007df718(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined *param_6)

{
  code *pcVar1;
  ContiguousArray CVar2;
  __int64 _Var3;
  
  _swift_retain(param_4);
  _swift_retain(param_5);
  CVar2.unknown = param_6;
  _swift_retain();
  _Var3 = Swift::ContiguousArray::get_count(CVar2);
  if (-1 < _Var3) {
    *param_1 = param_4;
    param_1[1] = param_5;
    param_1[2] = param_6;
    param_1[3] = param_2;
    param_1[4] = param_3;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1007df798);
  (*pcVar1)();
}



/* Address: 0x1007df798 | FUN_1007df798 */

bool FUN_1007df798(void)

{
  bool bVar1;
  ContiguousArray CVar2;
  
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  return bVar1;
}



/* Address: 0x1007df7f0 | FUN_1007df7f0 */

void FUN_1007df7f0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  ContiguousArray CVar1;
  undefined *puVar2;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_38 = param_2;
  local_30 = param_3;
  uStack_28 = param_1;
  CVar1 = Swift::ContiguousArray::typeMetadataAccessor();
  puVar2 = PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148;
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar1.unknown
            );
  FUN_1007e023c(&uStack_28,&local_38,CVar1.unknown,puVar2);
  return;
}



/* Address: 0x1007df84c | FUN_1007df84c */

void FUN_1007df84c(__int64 *param_1)

{
  __int64 _Var1;
  long unaff_x20;
  
  _Var1 = Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
  *param_1 = _Var1;
  return;
}



/* Address: 0x1007df87c | FUN_1007df87c */

undefined1  [16] FUN_1007df87c(long *param_1,__int64 *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  ContiguousArray CVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  long lVar7;
  long unaff_x20;
  __int64 _Var8;
  void *pvVar9;
  undefined1 auVar10 [16];
  
  lVar1 = *(long *)(param_3 + 0x10);
  lVar2 = *(long *)(param_3 + 0x18);
  lVar5 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar2,"key value ",0);
  lVar7 = *(long *)(lVar5 + -8);
  *param_1 = lVar5;
  param_1[1] = lVar7;
  pvVar9 = *(void **)(lVar7 + 0x40);
  if (PTR__swift_coroFrameAlloc_100eae1a0 == (undefined *)0x0) {
    pvVar6 = _malloc((size_t)pvVar9);
    param_1[2] = (long)pvVar6;
    pvVar9 = _malloc((size_t)pvVar9);
  }
  else {
    pvVar6 = pvVar9;
    _swift_coroFrameAlloc(pvVar9,0xb966);
    param_1[2] = (long)pvVar6;
    _swift_coroFrameAlloc(pvVar9,0xb966);
  }
  param_1[3] = (long)pvVar9;
  _Var8 = *param_2;
  CVar3.unknown = *(undefined **)(unaff_x20 + 0x10);
  iVar4 = *(int *)(lVar5 + 0x30);
  Swift::ContiguousArray::get_subscript(_Var8,(ContiguousArray)*(undefined **)(unaff_x20 + 8));
  Swift::ContiguousArray::get_subscript(_Var8,CVar3);
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(pvVar6,pvVar9,lVar1);
  (**(code **)(*(long *)(lVar2 + -8) + 0x20))
            ((long)pvVar6 + (long)*(int *)(lVar5 + 0x30),(long)pvVar9 + (long)iVar4,lVar2);
  auVar10._8_8_ = pvVar6;
  auVar10._0_8_ = FUN_1007df9a0;
  return auVar10;
}



/* Address: 0x1007df9a0 | FUN_1007df9a0 */

void FUN_1007df9a0(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  
  pvVar1 = (void *)param_1[2];
  pvVar2 = (void *)param_1[3];
  (**(code **)(param_1[1] + 8))(pvVar1,*param_1);
  _free(pvVar2);
  _free(pvVar1);
  return;
}



/* Address: 0x1007df9d8 | FUN_1007df9d8 */

void FUN_1007df9d8(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 in_x5;
  undefined8 *unaff_x20;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_1007df718(&local_48,*param_2,param_2[1],*unaff_x20,unaff_x20[1],unaff_x20[2],in_x5,
                *(undefined8 *)(param_3 + 0x18));
  param_1[1] = uStack_40;
  *param_1 = local_48;
  param_1[3] = uStack_30;
  param_1[2] = local_38;
  param_1[4] = local_28;
  return;
}



/* Address: 0x1007dfa30 | FUN_1007dfa30 */

void FUN_1007dfa30(undefined8 param_1)

{
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c796f0,param_1);
  (extension_Swift)::Swift::RandomAccessCollection::_get_indices();
  return;
}



/* Address: 0x1007dfa7c | FUN_1007dfa7c */

bool FUN_1007dfa7c(void)

{
  bool bVar1;
  ContiguousArray CVar2;
  
  CVar2 = Swift::ContiguousArray::typeMetadataAccessor();
  _swift_getWitnessTable
            (PTR_Swift__Swift__ContiguousArray<undefined>_>Swift__Collection_100ead148,CVar2.unknown
            );
  bVar1 = (extension_Swift)::Swift::Collection::get_isEmpty();
  return bVar1;
}



/* Address: 0x1007dfad8 | FUN_1007dfad8 */

void FUN_1007dfad8(void)

{
  long unaff_x20;
  
  Swift::ContiguousArray::get_count((ContiguousArray)*(undefined **)(unaff_x20 + 0x10));
  return;
}


