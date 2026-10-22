/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x100037ec0 | FUN_100037ec0 */

void FUN_100037ec0(void)

{
  FUN_100036860();
  return;
}



/* Address: 0x100037ec8 | FUN_100037ec8 */

void FUN_100037ec8(void)

{
  long unaff_x20;
  
  FUN_1000368a4(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100037ed0 | FUN_100037ed0 */

void FUN_100037ed0(void)

{
  long unaff_x20;
  
  FUN_1000369fc(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100037ed8 | FUN_100037ed8 */

void FUN_100037ed8(void)

{
  long unaff_x20;
  
  _swift_unknownObjectWeakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x100037efc | FUN_100037efc */

void FUN_100037efc(void)

{
  FUN_100036ee0();
  return;
}



/* Address: 0x100037f04 | FUN_100037f04 */

void FUN_100037f04(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100244338();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100037f28 | FUN_100037f28 */

void FUN_100037f28(void)

{
  FUN_1000037f0(&DAT_100fa80f8,&DAT_100c25238);
  Swift::CheckedContinuation::resume();
  return;
}



/* Address: 0x100037f60 | FUN_100037f60 */

void FUN_100037f60(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined1 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined *puVar4;
  undefined *puVar5;
  long extraout_x8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_78;
  undefined8 local_68;
  
  puVar2 = &DAT_100faa890;
  FUN_1000037f0(&DAT_100faa890,&DAT_100c22f68);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1000da768(&local_b0);
  uVar1 = local_b0;
  FUN_1000adc6c(param_1);
  _swift_release(uVar1);
  FUN_1000da768(&local_b0);
  FUN_10009ac9c(param_1);
  _swift_release(local_b0);
  if ((param_2 & 1) != 0) {
    TVar3 = Swift::TaskPriority::typeMetadataAccessor();
    (**(code **)(*(long *)(TVar3.unknown + -8) + 0x38))
              ((long)&local_b0 - extraout_x8,1,1,TVar3.unknown);
    puVar2 = &DAT_100eb1778;
    _swift_allocObject(&DAT_100eb1778,0x28,7);
    *(undefined8 *)(puVar2 + 0x10) = 0;
    *(undefined8 *)(puVar2 + 0x18) = 0;
    *(undefined8 *)(puVar2 + 0x20) = param_8;
    _swift_retain(param_8);
    FUN_10006484c(0,0,(long)&local_b0 - extraout_x8,&DAT_100c25230,puVar2);
    _swift_release();
  }
  puVar2 = &DAT_100c251f0;
  _swift_getKeyPath(&DAT_100c251f0);
  puVar4 = &DAT_100fa80e0;
  FUN_100038704(&DAT_100fa80e0,FUN_1000386c4,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Decodable>_A____Swift_Decodable_in_Swift_>Swift__Decodable_100eae0b0
               );
  puVar5 = &DAT_100faa900;
  FUN_100038704(&DAT_100faa900,FUN_100038774,
                PTR__Swift__protocol_conformance_descriptor_for_<A_where_A:_Swift_Encodable>_A____Swift_Encodable_in_Swift_>Swift__Encodable_100eae098
               );
  FUN_1002cb88c(&local_98,puVar2,puVar4,puVar5);
  puVar2 = &DAT_100faa910;
  local_b0 = param_3;
  uStack_a8 = param_4;
  local_a0 = param_5;
  FUN_1000037f0(&DAT_100faa910,&DAT_100c25220);
  FUN_1002cac1c(&local_b0,puVar2);
  _swift_release(local_68);
  _swift_release(local_78);
  _swift_release(uStack_88);
  _swift_release(local_90);
  _swift_release(local_98);
  return;
}



/* Address: 0x10003816c | FUN_10003816c */

void FUN_10003816c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x18) = param_1;
  *(undefined8 *)(unaff_x22 + 0x20) = param_4;
  _swift_task_switch(FUN_100038184,0,0);
  return;
}



/* Address: 0x100038184 | FUN_100038184 */

void FUN_100038184(void)

{
  long *plVar1;
  long unaff_x22;
  
  FUN_1000da768(unaff_x22 + 0x10);
  *(undefined8 *)(unaff_x22 + 0x28) = *(undefined8 *)(unaff_x22 + 0x10);
  plVar1 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x30) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1000381e0;
  FUN_1003a2b14();
  return;
}



/* Address: 0x1000381e0 | FUN_1000381e0 */

void FUN_1000381e0(void)

{
  code *pcVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x30));
  if (unaff_x20 == 0) {
    _swift_release(*(undefined8 *)(lVar2 + 0x28));
    pcVar1 = FUN_100038254;
  }
  else {
    uVar3 = *(undefined8 *)(lVar2 + 0x28);
    _swift_errorRelease();
    _swift_release(uVar3);
    pcVar1 = FUN_100038264;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x100038254 | FUN_100038254 */

void FUN_100038254(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x18) = 0;
                    /* WARNING: Could not recover jumptable at 0x000100038260. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100038264 | FUN_100038264 */

void FUN_100038264(void)

{
  long unaff_x22;
  
  **(undefined1 **)(unaff_x22 + 0x18) = 1;
                    /* WARNING: Could not recover jumptable at 0x000100038274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x100038278 | FUN_100038278 */

void FUN_100038278(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined8 local_80 [8];
  
  puVar1 = &DAT_100c251b0;
  _swift_getKeyPath(&DAT_100c251b0);
  puVar2 = &DAT_100fa80d8;
  FUN_1000037f0(&DAT_100fa80d8,&DAT_100c251e0);
  _swift_initStackObject();
  FUN_1000da6e0(puVar1,puVar2);
  puVar2 = &DAT_100eb1750;
  _swift_allocObject(&DAT_100eb1750,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_3);
  FUN_1000da768(&local_90);
  local_a0 = FUN_1000386a0;
  puStack_98 = puVar2;
  (*local_90)(local_80,&local_a0);
  _swift_release(puVar2);
  _swift_release(uStack_88);
  _swift_release(puVar1);
  *param_1 = local_80[0];
  return;
}



/* Address: 0x100038360 | FUN_100038360 */

void FUN_100038360(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  code *local_a0;
  undefined *puStack_98;
  code *local_90;
  undefined8 uStack_88;
  undefined8 local_80 [8];
  
  puVar1 = &DAT_100c25178;
  _swift_getKeyPath(&DAT_100c25178);
  puVar2 = &DAT_100fa80d0;
  FUN_1000037f0(&DAT_100fa80d0,&DAT_100c251a8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar1,puVar2);
  puVar2 = &DAT_100eb1728;
  _swift_allocObject(&DAT_100eb1728,0x20,7);
  *(undefined8 *)(puVar2 + 0x10) = param_2;
  *(undefined8 *)(puVar2 + 0x18) = param_3;
  _swift_retain(param_3);
  FUN_1000da768(&local_90);
  local_a0 = thunk_FUN_1000386a0;
  puStack_98 = puVar2;
  (*local_90)(local_80,&local_a0);
  _swift_release(puVar2);
  _swift_release(uStack_88);
  _swift_release(puVar1);
  *param_1 = local_80[0];
  return;
}



/* Address: 0x100038448 | FUN_100038448 */

void FUN_100038448(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  code *local_f8;
  undefined8 uStack_f0;
  undefined1 auStack_e8 [48];
  undefined1 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined *puStack_98;
  undefined **local_90;
  undefined **ppuStack_88;
  undefined8 local_80 [8];
  
  puVar1 = &DAT_100c25148;
  _swift_getKeyPath(&DAT_100c25148);
  puVar2 = &DAT_100fa6f80;
  FUN_1000037f0(&DAT_100fa6f80,&DAT_100c23bc8);
  _swift_initStackObject();
  FUN_1000da6e0(puVar1,puVar2);
  uVar3 = 0;
  FUN_1001adcbc();
  _swift_allocObject();
  FUN_1001adb70();
  local_90 = &PTR_PTR_100eb1820;
  ppuStack_88 = &PTR_PTR_100eb1810;
  puStack_98 = &DAT_100eb17f8;
  local_b0 = uVar3;
  uStack_a8 = param_2;
  local_a0 = param_3;
  FUN_1000385d4(&local_b0,auStack_e8);
  local_b8 = 0;
  _swift_retain(param_3);
  FUN_1000da768(&local_f8);
  (*local_f8)(local_80,auStack_e8);
  _swift_release(uStack_f0);
  _swift_release(puVar1);
  FUN_1000385ec(auStack_e8);
  *param_1 = local_80[0];
  return;
}



/* Address: 0x100038558 | FUN_100038558 */

void FUN_100038558(long param_1,code *param_2)

{
  undefined8 uVar1;
  long lVar2;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_100004640(param_1,uVar1);
  (**(code **)(lVar2 + 0x10))(uVar1,lVar2);
  (*param_2)();
  return;
}



/* Address: 0x1000385b0 | FUN_1000385b0 */

void FUN_1000385b0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100244338();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000385d4 | FUN_1000385d4 */

undefined8 * FUN_1000385d4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  uVar2 = param_1[1];
  uVar1 = *param_1;
  uVar3 = param_1[2];
  uVar5 = param_1[5];
  uVar4 = param_1[4];
  param_2[3] = param_1[3];
  param_2[2] = uVar3;
  param_2[5] = uVar5;
  param_2[4] = uVar4;
  param_2[1] = uVar2;
  *param_2 = uVar1;
  return param_2;
}



/* Address: 0x1000385ec | FUN_1000385ec */

undefined8 FUN_1000385ec(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fa6f88;
  FUN_1000037f0(&DAT_100fa6f88,&DAT_100c23bd0);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}



/* Address: 0x100038634 | FUN_100038634 */

void FUN_100038634(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100ae6b28();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x100038658 | FUN_100038658 */

void FUN_100038658(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10003867c | FUN_10003867c */

void FUN_10003867c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_100ae6a14();
  *param_1 = param_2;
  param_1[1] = param_3;
  return;
}



/* Address: 0x1000386a0 | FUN_1000386a0 */

void FUN_1000386a0(void)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 0x10))();
  return;
}



/* Address: 0x1000386c0 | thunk_FUN_1000a1c44 */

void thunk_FUN_1000a1c44(void)

{
  FUN_1000a1c44();
  return;
}



/* Address: 0x1000386c4 | FUN_1000386c4 */

void FUN_1000386c4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa80e8 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c333c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c333c8,&DAT_100ebee48);
  DAT_100fa80e8 = pTVar1;
  return;
}



/* Address: 0x1000386d4 | FUN_1000386d4 */

void FUN_1000386d4(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c333c8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c333c8,&DAT_100ebee48);
  DAT_100fa80e8 = pTVar1;
  return;
}



/* Address: 0x100038704 | FUN_100038704 */

void FUN_100038704(long *param_1,code *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *local_38;
  
  if (*param_1 == 0) {
    puVar1 = &DAT_100faa8f0;
    FUN_100005c24(&DAT_100faa8f0,&DAT_100c26980);
    puVar2 = puVar1;
    (*param_2)();
    local_38 = puVar2;
    _swift_getWitnessTable(param_3,puVar1,&local_38);
    *param_1 = param_3;
  }
  return;
}



/* Address: 0x100038774 | FUN_100038774 */

void FUN_100038774(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fa80f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c333f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c333f0,&DAT_100ebee48);
  DAT_100fa80f0 = pTVar1;
  return;
}



/* Address: 0x100038784 | FUN_100038784 */

void FUN_100038784(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  pTVar1 = &TargetProtocolConformanceDescriptor_100c333f0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c333f0,&DAT_100ebee48);
  DAT_100fa80f0 = pTVar1;
  return;
}



/* Address: 0x1000387b4 | FUN_1000387b4 */

void FUN_1000387b4(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1000387e0 | FUN_1000387e0 */

void FUN_1000387e0(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  undefined8 uVar4;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x20);
  plVar3 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)FUN_100008284;
  FUN_10003816c(plVar3,param_1,uVar1,uVar2,uVar4);
  return;
}



/* Address: 0x10003884c | thunk_FUN_100038878 */

void thunk_FUN_100038878(void)

{
  FUN_100038878();
  return;
}



/* Address: 0x100038850 | FUN_100038850 */

void FUN_100038850(undefined8 *param_1)

{
  _swift_release(*param_1);
  _swift_release(param_1[2]);
  return;
}



/* Address: 0x100038878 | FUN_100038878 */

undefined8 * FUN_100038878(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = param_2[2];
  uVar2 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar2;
  param_1[2] = uVar1;
  _swift_retain(uVar2);
  _swift_retain(uVar1);
  return param_1;
}



/* Address: 0x1000388b8 | FUN_1000388b8 */

undefined8 * FUN_1000388b8(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = *param_1;
  *param_1 = *param_2;
  _swift_retain();
  _swift_release(uVar1);
  uVar2 = param_1[2];
  uVar1 = param_2[2];
  uVar3 = param_2[1];
  param_1[2] = param_2[2];
  param_1[1] = uVar3;
  _swift_retain(uVar1);
  _swift_release(uVar2);
  return param_1;
}



/* Address: 0x100038918 | FUN_100038918 */

undefined8 * FUN_100038918(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  _swift_release(*param_1);
  uVar2 = param_2[2];
  uVar1 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  uVar1 = param_1[2];
  param_1[2] = uVar2;
  _swift_release(uVar1);
  return param_1;
}



/* Address: 0x10003895c | FUN_10003895c */

int FUN_10003895c(ulong *param_1,int param_2)

{
  ulong uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((param_2 < 0) && ((char)param_1[3] != '\0')) {
    return (int)*param_1 + -0x80000000;
  }
  uVar1 = *param_1;
  if (0xfffffffe < uVar1) {
    uVar1 = 0xffffffff;
  }
  return (int)uVar1 + 1;
}



/* Address: 0x1000389a4 | FUN_1000389a4 */

void FUN_1000389a4(ulong *param_1,uint param_2,int param_3)

{
  if ((int)param_2 < 0) {
    param_1[1] = 0;
    param_1[2] = 0;
    *param_1 = (ulong)(param_2 & 0x7fffffff);
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 1;
      return;
    }
  }
  else {
    if (param_3 < 0) {
      *(undefined1 *)(param_1 + 3) = 0;
    }
    if (param_2 != 0) {
      *param_1 = (ulong)(param_2 - 1);
      return;
    }
  }
  return;
}



/* Address: 0x1000389e4 | FUN_1000389e4 */

undefined1  [16] FUN_1000389e4(void)

{
  return ZEXT816(0x100eb17f8);
}



/* Address: 0x1000389f4 | FUN_1000389f4 */

void FUN_1000389f4(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = 0;
  FUN_1001adcbc(0);
  FUN_1001ad0d8(param_1,uVar1,&PTR_PTR_100ebe0c0,&PTR_PTR_100ec6cd0);
  return;
}



/* Address: 0x100038a40 | FUN_100038a40 */

void FUN_100038a40(code *param_1)

{
  long unaff_x20;
  
  (**(code **)(unaff_x20 + 8))();
  if (param_1 != (code *)0x0) {
    (*param_1)();
  }
  return;
}



/* Address: 0x100038a7c | thunk_FUN_100038658 */

void thunk_FUN_100038658(void)

{
  FUN_100038658();
  return;
}



/* Address: 0x100038a80 | thunk_FUN_1000386a0 */

void thunk_FUN_1000386a0(void)

{
  FUN_1000386a0();
  return;
}



/* Address: 0x100038a84 | thunk_FUN_100038878 */

void thunk_FUN_100038878(void)

{
  FUN_100038878();
  return;
}



/* Address: 0x100038a88 | FUN_100038a88 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_100038a88(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  NSString *pNVar2;
  ID IVar3;
  undefined8 *puVar4;
  ID IVar5;
  undefined8 uVar6;
  long unaff_x20;
  undefined1 auStack_80 [16];
  ID local_70;
  
  lVar1 = _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::label;
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  IVar3 = NSTextField::labelWithString_((ID)&_OBJC_CLASS___NSTextField,pNVar2);
  puVar4 = (undefined8 *)0x0;
  FUN_1001fef10();
  NSTextField::setTextColor_(IVar3,*puVar4);
  IVar5 = NSFont::systemFontOfSize_((ID)&_OBJC_CLASS___NSFont,0x403a000000000000);
  NSTextField::setFont_(IVar3,IVar5);
  *(ID *)(unaff_x20 + lVar1) = IVar3;
  FUN_100038ea0();
  IVar3 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",0,0,0,0);
  lVar1 = _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::label;
  IVar5 = *(ID *)(IVar3 + _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::label);
  pNVar2 = (extension_Foundation)::Swift::String::_bridgeToObjectiveC();
  _swift_bridgeObjectRelease(param_2);
  objc_stub::setStringValue_(IVar5,pNVar2);
  uVar6 = *(undefined8 *)(IVar3 + lVar1);
  local_70 = IVar3;
  FUN_1001fa09c(uVar6,FUN_100038ec0,auStack_80);
  _swift_bridgeObjectRelease(uVar6);
  return IVar3;
}



/* Address: 0x100038c28 | FUN_100038c28 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_100038c28(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined8 local_58 [3];
  undefined8 local_40;
  undefined **ppuStack_38;
  
  uVar6 = param_1;
  FUN_100038ea0();
  ppuStack_38 = &PTR_PTR_100ec00e8;
  uVar1 = 0;
  local_58[0] = param_1;
  local_40 = uVar6;
  FUN_100038ec8(0);
  puVar2 = local_58;
  FUN_1001f9a0c(0,0xc031000000000000,puVar2,uVar1,&PTR_PTR_100ec00e8);
  FUN_100004594(local_58);
  puVar3 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 2;
  *(undefined8 *)(puVar3 + 0x10) = 1;
  puVar4 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar3 + 0x38) = puVar4;
  *(undefined ***)(puVar3 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 **)(puVar3 + 0x20) = puVar2;
  puVar5 = puVar3;
  FUN_1001f8d60(puVar3);
  _swift_setDeallocating(puVar3);
  uVar6 = *(undefined8 *)(puVar3 + 0x10);
  puVar4 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar3 + 0x20,uVar6,puVar4);
  return puVar5;
}



/* Address: 0x100038d40 | _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::init */

/* Function Stack Size: 0x10 bytes */

ID _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::init(ID param_1,SEL param_2)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.EmptyPlaceholderView.swift",0x33,1,5,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer("Paste.EmptyPlaceholderView",0x1a,"init()",6,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100038dc8);
  (*pcVar1)();
}



/* Address: 0x100038dc8 | _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::initWithFrame_
             (ID param_1,SEL param_2,CGRect param_3)

{
  code *pcVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  UnownedSerialExecutor UVar4;
  
  pMVar2 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar2,pMVar2);
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  UVar4 = UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar4.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/ItemCollectionView.EmptyPlaceholderView.swift",0x33,1,5,UVar3.unknown,pMVar2);
  }
  __swift_stdlib_reportUnimplementedInitializer
            ("Paste.EmptyPlaceholderView",0x1a,"init(frame:)",0xc,0);
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100038e50);
  (*pcVar1)();
}



/* Address: 0x100038e50 | FUN_100038e50 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100038e50(void)

{
  return 0;
}



/* Address: 0x100038e60 | FUN_100038e60 */

void FUN_100038e60(void)

{
  FUN_100038ea0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100038e90 | _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtCC5Paste18ItemCollectionView20EmptyPlaceholderView::_cxx_destruct(ID param_1,SEL param_2)

{
  return;
}



/* Address: 0x100038ea0 | FUN_100038ea0 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined1  [16] FUN_100038ea0(void)

{
  return ZEXT816(0x100f90200);
}



/* Address: 0x100038ec0 | FUN_100038ec0 */

void FUN_100038ec0(void)

{
  long unaff_x20;
  
  FUN_100038c28(*(undefined8 *)(unaff_x20 + 0x10));
  return;
}



/* Address: 0x100038ec8 | FUN_100038ec8 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_100038ec8(void)

{
  undefined *puVar1;
  
  if (DAT_100fa8130 != (undefined *)0x0) {
    return;
  }
  puVar1 = &_OBJC_CLASS___NSTextField;
  _swift_getObjCClassMetadata();
  DAT_100fa8130 = puVar1;
  return;
}



/* Address: 0x100038f0c | FUN_100038f0c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_100038f0c(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  long unaff_x20;
  
  lVar2 = _TtC5Paste15PauseStatusItem::___lazy_storage___pauseButton;
  puVar3 = *(undefined8 **)(unaff_x20 + _TtC5Paste15PauseStatusItem::___lazy_storage___pauseButton);
  if (puVar3 == (undefined8 *)0x0) {
    FUN_10020d5b8();
    puVar5 = (undefined8 *)*puVar3;
    uVar1 = puVar3[1];
    puVar4 = &DAT_100eb1870;
    _swift_allocObject(&DAT_100eb1870,0x18,7);
    _swift_unknownObjectWeakInit(puVar4 + 0x10);
    FUN_100240298(0);
    _objc_allocWithZone();
    _swift_bridgeObjectRetain(uVar1);
    FUN_10023e034(puVar5,uVar1,0,0xe000000000000000,0,0,1,0,0,1);
    *(undefined8 **)(unaff_x20 + lVar2) = puVar5;
    puVar3 = puVar5;
  }
  return puVar3;
}



/* Address: 0x100039000 | FUN_100039000 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100039000(long param_1)

{
  long lVar1;
  ID self;
  undefined8 local_38;
  
  lVar1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (lVar1 != 0) {
    self = *(ID *)(lVar1 + _TtC5Paste15PauseStatusItem::menuProvider);
    _swift_retain(self);
    FUN_1000da768(&local_38,0);
    _swift_release();
    FUN_10004c6bc();
    _swift_release(local_38);
    param_1 = param_1 + 0x10;
    _swift_unknownObjectWeakLoadStrong(param_1);
    objc_stub::popUpMenuPositioningItem_atLocation_inView_(self,0,0xc024000000000000,0,param_1);
  }
  return;
}



/* Address: 0x1000390b0 | FUN_1000390b0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_1000390b0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ID IVar4;
  ID IVar5;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  ID local_90;
  
  lVar1 = _TtC5Paste15PauseStatusItem::menuProvider;
  puVar2 = &DAT_100c252a0;
  _swift_getKeyPath();
  puVar3 = &DAT_100fa7840;
  FUN_1000037f0(&DAT_100fa7840,&DAT_100c27c70);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(unaff_x20 + lVar1) = puVar2;
  *(undefined8 *)(unaff_x20 + _TtC5Paste15PauseStatusItem::___lazy_storage___pauseButton) = 0;
  FUN_1000395c0();
  IVar4 = _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffa0,"initWithFrame:",param_1,
                              param_2,param_3,param_4);
  puVar2 = &DAT_100fa6b80;
  FUN_1000037f0(&DAT_100fa6b80,&DAT_100c23760);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 3;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  IVar5 = IVar4;
  FUN_100038f0c();
  *(ID *)(puVar2 + 0x20) = IVar5;
  local_90 = IVar4;
  FUN_1001fa150(puVar2,FUN_100039610,auStack_a0);
  _swift_bridgeObjectRelease();
  _swift_setDeallocating(puVar2);
  _swift_arrayDestroy(puVar2 + 0x20,*(undefined8 *)(puVar2 + 0x10),
                      PTR___type_metadata_for_Swift_AnyObject_100eae0b8 + 8);
  return IVar4;
}



/* Address: 0x10003920c | FUN_10003920c */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined * FUN_10003920c(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 **ppuVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *local_80 [3];
  undefined8 *local_68;
  undefined **ppuStack_60;
  undefined8 *local_58;
  
  puVar1 = param_1;
  FUN_100038f0c();
  local_58 = puVar1;
  FUN_1000395c0();
  ppuStack_60 = &PTR_PTR_100ec00e8;
  local_80[0] = param_1;
  local_68 = puVar1;
  FUN_1001f9774();
  uVar7 = *param_1;
  uVar8 = param_1[1];
  uVar9 = param_1[2];
  uVar10 = param_1[3];
  uVar2 = 0;
  FUN_100240298(0);
  ppuVar3 = local_80;
  FUN_1001f97b4(uVar7,uVar8,uVar9,uVar10,ppuVar3,uVar2,&PTR_PTR_100ec00e8);
  FUN_100004594(local_80);
  puVar4 = &DAT_100fa8830;
  FUN_1000037f0(&DAT_100fa8830,&DAT_100c24a20);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  puVar5 = &DAT_100fa8840;
  FUN_1000037f0(&DAT_100fa8840,&DAT_100c237d0);
  *(undefined **)(puVar4 + 0x38) = puVar5;
  *(undefined ***)(puVar4 + 0x40) = &PTR_PTR_100ec00b8;
  *(undefined8 ***)(puVar4 + 0x20) = ppuVar3;
  puVar6 = puVar4;
  FUN_1001f8d60(puVar4);
  _swift_setDeallocating(puVar4);
  uVar2 = *(undefined8 *)(puVar4 + 0x10);
  puVar5 = &DAT_100fa6bc0;
  FUN_1000037f0(&DAT_100fa6bc0,&DAT_100c24a30);
  _swift_arrayDestroy(puVar4 + 0x20,uVar2,puVar5);
  return puVar6;
}



/* Address: 0x100039350 | _TtC5Paste15PauseStatusItem::initWithFrame: */

/* Function Stack Size: 0x30 bytes */

ID __thiscall
_TtC5Paste15PauseStatusItem::initWithFrame_
          (_TtC5Paste15PauseStatusItem *this,ID param_1,SEL param_2,CGRect param_3)

{
  MainActor *pMVar1;
  MainActor *pMVar2;
  UnownedSerialExecutor UVar3;
  char *pcVar4;
  
  pMVar1 = Swift::MainActor::typeMetadataAccessor();
  pMVar2 = Swift::MainActor::get_shared(pMVar1,pMVar1);
  pMVar1 = pMVar2;
  FUN_1000081a8();
  UVar3 = Swift::Actor::get_unownedExecutor();
  pcVar4 = (char *)UVar3;
  _swift_task_isCurrentExecutor();
  if (((ulong)pcVar4 & 1) == 0) {
    pcVar4 = "Paste/PauseStatusItem.swift";
    _swift_task_reportUnexpectedExecutor
              ("Paste/PauseStatusItem.swift",0x1b,1,0xd,UVar3.unknown,pMVar1);
  }
  FUN_1000390b0();
  _swift_release(pMVar2);
  return (ID)pcVar4;
}



/* Address: 0x100039418 | _TtC5Paste15PauseStatusItem::initWithCoder: */

/* Function Stack Size: 0x18 bytes */

ID _TtC5Paste15PauseStatusItem::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  MainActor *pMVar3;
  UnownedSerialExecutor UVar4;
  UnownedSerialExecutor UVar5;
  undefined *puVar6;
  undefined *puVar7;
  String SVar8;
  
  pMVar3 = Swift::MainActor::typeMetadataAccessor();
  pMVar3 = Swift::MainActor::get_shared(pMVar3,pMVar3);
  FUN_1000081a8();
  UVar4 = Swift::Actor::get_unownedExecutor();
  UVar5 = UVar4;
  _swift_task_isCurrentExecutor();
  if (((ulong)UVar5.unknown & 1) == 0) {
    _swift_task_reportUnexpectedExecutor
              ("Paste/PauseStatusItem.swift",0x1b,1,0x16,UVar4.unknown,pMVar3);
  }
  lVar1 = menuProvider;
  puVar6 = &DAT_100c252a0;
  _swift_getKeyPath();
  puVar7 = &DAT_100fa7840;
  FUN_1000037f0(&DAT_100fa7840,&DAT_100c27c70);
  _swift_allocObject();
  FUN_1000da6e0(puVar6,puVar7);
  *(undefined **)(param_1 + lVar1) = puVar6;
  *(undefined8 *)(param_1 + ___lazy_storage___pauseButton) = 0;
  SVar8.bridgeObject = (void *)0x2;
  SVar8.str = (char *)0xb;
  Swift::_assertionFailure
            ((StaticString)0x100d8deb0,SVar8,(StaticString)0xd000000000000025,0x8000000100d8dc00,
             0xd8e530);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10003952c);
  (*pcVar2)();
}



/* Address: 0x10003952c | FUN_10003952c */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10003952c(void)

{
  long unaff_x20;
  
  _swift_release(*(undefined8 *)(unaff_x20 + _TtC5Paste15PauseStatusItem::menuProvider));
  return 0;
}



/* Address: 0x100039558 | FUN_100039558 */

void FUN_100039558(void)

{
  FUN_1000395c0();
  _objc_msgSendSuper2((objc_super *)&stack0xffffffffffffffe0,"dealloc");
  return;
}



/* Address: 0x100039588 | _TtC5Paste15PauseStatusItem::.cxx_destruct */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

void _TtC5Paste15PauseStatusItem::_cxx_destruct(ID param_1,SEL param_2)

{
  _swift_release(*(undefined8 *)(param_1 + menuProvider));
  return;
}


