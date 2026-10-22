/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10096075c | FUN_10096075c */

String FUN_10096075c(int param_1)

{
  String SVar1;
  
  if (param_1 != -1) {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar1;
  }
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x312d;
  return SVar1;
}



/* Address: 0x1009607ac | thunk_FUN_1009607b0 */

String thunk_FUN_1009607b0(void)

{
  int *unaff_x20;
  String SVar1;
  
  if (*unaff_x20 == -1) {
    SVar1.bridgeObject = &SUB_e200000000000000;
    SVar1.str = (char *)0x312d;
  }
  else {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  }
  return SVar1;
}



/* Address: 0x1009607b0 | FUN_1009607b0 */

String FUN_1009607b0(void)

{
  int *unaff_x20;
  String SVar1;
  
  if (*unaff_x20 == -1) {
    SVar1.bridgeObject = &SUB_e200000000000000;
    SVar1.str = (char *)0x312d;
  }
  else {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  }
  return SVar1;
}



/* Address: 0x100960804 | FUN_100960804 */

undefined1  [16] FUN_100960804(ulong param_1,undefined8 param_2,char *param_3,void *param_4)

{
  undefined1 auVar1 [16];
  String SVar2;
  String SVar3;
  String SVar4;
  String SVar5;
  String SVar6;
  String SVar7;
  
  if ((int)param_1 == -1) {
    SVar2.bridgeObject = &SUB_e200000000000000;
    SVar2.str = (char *)0x312d;
  }
  else {
    FUN_10090924c();
    SVar2 = (extension_Swift)::Swift::BinaryInteger::get_description();
  }
  SVar5.bridgeObject = param_4;
  SVar5.str = param_3;
  Swift::String::append(SVar2,SVar5);
  _swift_bridgeObjectRelease(SVar2.bridgeObject);
  SVar3.bridgeObject = (void *)0xe100000000000000;
  SVar3.str = &DAT_0000003a;
  SVar6.bridgeObject = param_4;
  SVar6.str = param_3;
  Swift::String::append(SVar3,SVar6);
  if (param_1 >> 0x20 == 0xffffffff) {
    SVar4.bridgeObject = &SUB_e200000000000000;
    SVar4.str = (char *)0x312d;
  }
  else {
    FUN_10090924c();
    SVar4 = (extension_Swift)::Swift::BinaryInteger::get_description();
  }
  SVar7.bridgeObject = param_4;
  SVar7.str = param_3;
  Swift::String::append(SVar4,SVar7);
  _swift_bridgeObjectRelease(SVar4.bridgeObject);
  auVar1._8_8_ = &DAT_e700000000000000;
  auVar1._0_8_ = 0x5d4b434f53565b;
  return auVar1;
}



/* Address: 0x1009608f0 | FUN_1009608f0 */

void FUN_1009608f0(void)

{
  undefined8 *unaff_x20;
  
  FUN_100960804(*unaff_x20);
  return;
}



/* Address: 0x1009608f8 | FUN_1009608f8 */

void FUN_1009608f8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined4 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined1 local_78 [8];
  undefined8 local_70;
  undefined4 local_68;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = 0;
  local_70 = param_4;
  local_68 = param_5;
  local_50 = param_6;
  uStack_48 = param_2;
  local_40 = param_3;
  FUN_1008d4e64(0);
  puVar2 = &DAT_100febaf0;
  FUN_1000f7830(&DAT_100febaf0,&DAT_100c83800);
  FUN_1006167fc(param_1,&local_70,FUN_100669818,auStack_60,uVar1,puVar2,param_6,
                PTR___protocol_self_conformance_witness_table_for_Swift_Error_100eadb90,local_78);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009609c4 | FUN_1009609c4 */

undefined * FUN_1009609c4(void)

{
  return 
  PTR___protocol_witness_table_for_Swift_UInt32___Swift__ExpressibleByBuiltinIntegerLiteral_in_Swift_100eade80
  ;
}



/* Address: 0x1009609d0 | thunk_FUN_1009609d4 */

void thunk_FUN_1009609d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86570;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86570,&DAT_100f1c0a8);
  DAT_100feee08 = pTVar1;
  return;
}



/* Address: 0x1009609d4 | FUN_1009609d4 */

void FUN_1009609d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee08 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86570;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86570,&DAT_100f1c0a8);
  DAT_100feee08 = pTVar1;
  return;
}



/* Address: 0x100960a14 | thunk_FUN_100960a18 */

void thunk_FUN_100960a18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86648,&DAT_100f1c0d0);
  DAT_100feee10 = pTVar1;
  return;
}



/* Address: 0x100960a18 | FUN_100960a18 */

void FUN_100960a18(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee10 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86648;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86648,&DAT_100f1c0d0);
  DAT_100feee10 = pTVar1;
  return;
}



/* Address: 0x100960a58 | thunk_FUN_100960a5c */

void thunk_FUN_100960a5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c866b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c866b0,&DAT_100f1c080);
  DAT_100feee18 = pTVar1;
  return;
}



/* Address: 0x100960a5c | FUN_100960a5c */

void FUN_100960a5c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee18 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c866b0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c866b0,&DAT_100f1c080);
  DAT_100feee18 = pTVar1;
  return;
}



/* Address: 0x100960a9c | FUN_100960a9c */

void FUN_100960a9c(long param_1)

{
  long lVar1;
  
  lVar1 = param_1;
  FUN_100960ac0();
  *(long *)(param_1 + 0x10) = lVar1;
  return;
}



/* Address: 0x100960ac0 | FUN_100960ac0 */

void FUN_100960ac0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee40 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c8676c;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c8676c,&DAT_100f1c0f8);
  DAT_100feee40 = pTVar1;
  return;
}



/* Address: 0x100960b00 | FUN_100960b00 */

undefined1  [16] FUN_100960b00(void)

{
  return ZEXT816(0x100f1c080);
}



/* Address: 0x100960b10 | FUN_100960b10 */

undefined1  [16] FUN_100960b10(void)

{
  return ZEXT816(0x100f1c0a8);
}



/* Address: 0x100960b20 | FUN_100960b20 */

undefined1  [16] FUN_100960b20(void)

{
  return ZEXT816(0x100f1c0d0);
}



/* Address: 0x100960b30 | FUN_100960b30 */

undefined1  [16] FUN_100960b30(void)

{
  return ZEXT816(0x100f1c0f8);
}



/* Address: 0x100960b40 | thunk_FUN_1009607b0 */

String thunk_FUN_1009607b0(void)

{
  int *unaff_x20;
  String SVar1;
  
  if (*unaff_x20 == -1) {
    SVar1.bridgeObject = &SUB_e200000000000000;
    SVar1.str = (char *)0x312d;
  }
  else {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
  }
  return SVar1;
}



/* Address: 0x100960b44 | thunk_FUN_10096075c */

String thunk_FUN_10096075c(int param_1)

{
  String SVar1;
  
  if (param_1 != -1) {
    FUN_10090924c();
    SVar1 = (extension_Swift)::Swift::BinaryInteger::get_description();
    return SVar1;
  }
  SVar1.bridgeObject = &SUB_e200000000000000;
  SVar1.str = (char *)0x312d;
  return SVar1;
}



/* Address: 0x100960b48 | thunk_FUN_100960618 */

void thunk_FUN_100960618(void)

{
  FUN_100960618();
  return;
}



/* Address: 0x100960b4c | thunk_FUN_100960674 */

void thunk_FUN_100960674(void)

{
  FUN_100960674();
  return;
}



/* Address: 0x100960b50 | thunk_FUN_100960704 */

void thunk_FUN_100960704(void)

{
  FUN_100960704();
  return;
}



/* Address: 0x100960b54 | FUN_100960b54 */

bool FUN_100960b54(int *param_1,int *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Address: 0x100960b6c | thunk_FUN_100960b70 */

void thunk_FUN_100960b70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86830;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86830,&DAT_100f1c228);
  DAT_100feee48 = pTVar1;
  return;
}



/* Address: 0x100960b70 | FUN_100960b70 */

void FUN_100960b70(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee48 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86830;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86830,&DAT_100f1c228);
  DAT_100feee48 = pTVar1;
  return;
}



/* Address: 0x100960bb0 | thunk_FUN_100960bb4 */

void thunk_FUN_100960bb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86898;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86898,&DAT_100f1c2a8);
  DAT_100feee50 = pTVar1;
  return;
}



/* Address: 0x100960bb4 | FUN_100960bb4 */

void FUN_100960bb4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100feee50 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c86898;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c86898,&DAT_100f1c2a8);
  DAT_100feee50 = pTVar1;
  return;
}



/* Address: 0x100960bf4 | FUN_100960bf4 */

undefined1  [16] FUN_100960bf4(void)

{
  return ZEXT816(0x100f1c1b0);
}



/* Address: 0x100960c04 | FUN_100960c04 */

undefined1  [16] FUN_100960c04(void)

{
  return ZEXT816(0x100f1c228);
}



/* Address: 0x100960c14 | FUN_100960c14 */

undefined1  [16] FUN_100960c14(void)

{
  return ZEXT816(0x100f1c2a8);
}



/* Address: 0x100960c24 | thunk_FUN_100960b54 */

bool thunk_FUN_100960b54(int *param_1,int *param_2)

{
  return *param_1 == *param_2 && param_1[1] == param_2[1];
}



/* Address: 0x100960c28 | thunk_FUN_100960704 */

void thunk_FUN_100960704(void)

{
  FUN_100960704();
  return;
}



/* Address: 0x100960c2c | thunk_FUN_1009606cc */

void thunk_FUN_1009606cc(void)

{
  FUN_1009606cc();
  return;
}



/* Address: 0x100960c30 | thunk_FUN_100960674 */

void thunk_FUN_100960674(void)

{
  FUN_100960674();
  return;
}



/* Address: 0x100960c34 | thunk_FUN_1009605e8 */

void thunk_FUN_1009605e8(void)

{
  FUN_1009605e8();
  return;
}



/* Address: 0x100960c38 | thunk_FUN_100960618 */

void thunk_FUN_100960618(void)

{
  FUN_100960618();
  return;
}



/* Address: 0x100960c3c | FUN_100960c3c */

void FUN_100960c3c(long param_1,undefined1 param_2,undefined8 param_3)

{
  FUN_1009614b8();
  *(undefined1 *)(param_1 + 0x48) = param_2;
  *(undefined8 *)(param_1 + 0x58) = param_3;
  return;
}



/* Address: 0x100960c74 | FUN_100960c74 */

void FUN_100960c74(undefined8 param_1,long param_2,long param_3)

{
  FUN_1009614d8(param_1,param_2,param_2 + param_3);
  return;
}



/* Address: 0x100960c7c | FUN_100960c7c */

void FUN_100960c7c(undefined8 *param_1)

{
  param_1[0x18] = 0;
  param_1[0x15] = 0;
  param_1[0x14] = 0;
  param_1[0x17] = 0;
  param_1[0x16] = 0;
  param_1[0x11] = 0;
  param_1[0x10] = 0;
  param_1[0x13] = 0;
  param_1[0x12] = 0;
  param_1[0xd] = 0;
  param_1[0xc] = 0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[0xb] = 0;
  param_1[10] = 0;
  param_1[5] = 0;
  param_1[4] = 0;
  param_1[7] = 0;
  param_1[6] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}



/* Address: 0x100960ca0 | FUN_100960ca0 */

void FUN_100960ca0(long param_1)

{
  char cVar1;
  code *pcVar2;
  
  if ((*(int *)(param_1 + 0x18) == 0) && (cVar1 = *(char *)(param_1 + 0x51), cVar1 != '\0')) {
    if (cVar1 == '\x02') {
      *(char **)(param_1 + 0x20) = "Invalid EOF state";
    }
    else {
      if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
        _abort();
      }
      if ((*(long *)(param_1 + 0x58) != 0) &&
         (pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x60), pcVar2 != (code *)0x0)) {
        (*pcVar2)();
      }
    }
  }
  return;
}



/* Address: 0x100960d08 | FUN_100960d08 */

void FUN_100960d08(long param_1)

{
  if (*(int *)(param_1 + 0x18) == 0x16) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}



/* Address: 0x100960d1c | FUN_100960d1c */

undefined8 FUN_100960d1c(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}



/* Address: 0x100960d24 | FUN_100960d24 */

undefined * FUN_100960d24(uint param_1)

{
  if (param_1 < 0x2f) {
    return (&PTR_s_DELETE_100f1c340)[param_1];
  }
                    /* WARNING: Subroutine does not return */
  _abort();
}



/* Address: 0x100960d48 | FUN_100960d48 */

long FUN_100960d48(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(undefined8 **)(param_1 + 0x58) != (undefined8 *)0x0) &&
     (UNRECOVERED_JUMPTABLE = (code *)**(undefined8 **)(param_1 + 0x58),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960d58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960d64 | FUN_100960d64 */

long FUN_100960d64(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 8);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_protocol";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100960dc0 | FUN_100960dc0 */

long FUN_100960dc0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x68),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960dd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960ddc | FUN_100960ddc */

long FUN_100960ddc(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x10);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_url";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100960e38 | FUN_100960e38 */

long FUN_100960e38(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x70),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960e54 | FUN_100960e54 */

long FUN_100960e54(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x18);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_status";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100960eb0 | FUN_100960eb0 */

long FUN_100960eb0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x78),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960ec0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960ecc | FUN_100960ecc */

long FUN_100960ecc(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x20);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_method";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100960f28 | FUN_100960f28 */

long FUN_100960f28(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x80),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960f38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960f44 | FUN_100960f44 */

long FUN_100960f44(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x28);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_version";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100960fa0 | FUN_100960fa0 */

long FUN_100960fa0(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x88),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100960fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100960fbc | FUN_100960fbc */

long FUN_100960fbc(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x30);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_header_field";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100961018 | FUN_100961018 */

long FUN_100961018(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x90),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100961028. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x100961034 | FUN_100961034 */

long FUN_100961034(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x38);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_header_value";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100961090 | FUN_100961090 */

long FUN_100961090(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x98),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001009610a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x1009610ac | FUN_1009610ac */

long FUN_1009610ac(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x50),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001009610bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x1009610c8 | FUN_1009610c8 */

long FUN_1009610c8(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0x60),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x0001009610d8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}



/* Address: 0x1009610e4 | FUN_1009610e4 */

long FUN_1009610e4(long param_1,long param_2,long param_3)

{
  long lVar1;
  code *pcVar2;
  
  if (*(long *)(param_1 + 0x58) != 0) {
    pcVar2 = *(code **)(*(long *)(param_1 + 0x58) + 0x58);
    if (pcVar2 == (code *)0x0) {
      lVar1 = 0;
    }
    else {
      lVar1 = param_1;
      (*pcVar2)(param_1,param_2,param_3 - param_2);
      if ((int)lVar1 == -1) {
        *(char **)(param_1 + 0x20) = "Span callback error in on_body";
        lVar1 = 0x18;
      }
    }
    return lVar1;
  }
  return 0;
}



/* Address: 0x100961140 | FUN_100961140 */

long FUN_100961140(long param_1)

{
  code *UNRECOVERED_JUMPTABLE;
  
  if ((*(long *)(param_1 + 0x58) != 0) &&
     (UNRECOVERED_JUMPTABLE = *(code **)(*(long *)(param_1 + 0x58) + 0xb0),
     UNRECOVERED_JUMPTABLE != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x000100961150. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return param_1;
  }
  return 0;
}


