/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x10047c8a0 | FUN_10047c8a0 */

void FUN_10047c8a0(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  long lVar3;
  
  lVar2 = *unaff_x22;
  uVar1 = *(undefined8 *)(lVar2 + 0x20);
  lVar3 = *unaff_x22;
  *(long *)(lVar2 + 0x30) = unaff_x20;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x28));
  _swift_release(uVar1);
  if (unaff_x20 != 0) {
    _swift_task_switch(FUN_10047c90c,0,0);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00010047c908. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047c90c | FUN_10047c90c */

void FUN_10047c90c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x18) + 0x10;
  _swift_weakLoadStrong();
  *(long *)(unaff_x22 + 0x38) = lVar1;
  if (lVar1 != 0) {
    _swift_task_switch(FUN_10047c980,lVar1,0);
    return;
  }
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010047c97c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047c980 | FUN_10047c980 */

void FUN_10047c980(void)

{
  long lVar1;
  undefined8 uVar2;
  long unaff_x22;
  
  lVar1 = *(long *)(unaff_x22 + 0x38);
  uVar2 = *(undefined8 *)(lVar1 + 0xb8);
  *(undefined8 *)(lVar1 + 0xb8) = *(undefined8 *)(unaff_x22 + 0x30);
  _swift_errorRetain();
  _swift_errorRelease(uVar2);
  _swift_release(lVar1);
  _swift_task_switch(FUN_10047c9d4,0,0);
  return;
}



/* Address: 0x10047c9d4 | FUN_10047c9d4 */

void FUN_10047c9d4(void)

{
  long unaff_x22;
  
  _swift_willThrow();
                    /* WARNING: Could not recover jumptable at 0x00010047ca0c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047ca10 | FUN_10047ca10 */

void FUN_10047ca10(char *param_1,void *param_2,undefined8 param_3,undefined8 param_4,
                  undefined *param_5)

{
  __uint8 _Var1;
  undefined *puVar2;
  TaskPriority TVar3;
  undefined1 *puVar4;
  TaskPriority TVar5;
  UnownedSerialExecutor UVar6;
  ContiguousArray<__int8> CVar7;
  undefined8 *puVar8;
  long extraout_x8;
  undefined1 *puVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  String SVar13;
  undefined1 auStack_c0 [8];
  undefined8 local_b8;
  undefined8 *puStack_b0;
  undefined *local_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  long lStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined *local_70;
  long lStack_68;
  
  puVar2 = &DAT_100fc8378;
  FUN_1000037f0(&DAT_100fc8378,&DAT_100c4cee8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar2 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = auStack_c0 + -extraout_x8;
  FUN_100011090(param_3,puVar9,&DAT_100fc8378,&DAT_100c4cee8);
  TVar3 = Swift::TaskPriority::typeMetadataAccessor();
  lVar12 = *(long *)(TVar3.unknown + -8);
  puVar4 = puVar9;
  (**(code **)(lVar12 + 0x30))(puVar9,1,TVar3.unknown);
  TVar5.unknown = param_5;
  _swift_retain();
  if ((int)puVar4 == 1) {
    FUN_100005808(puVar9,&DAT_100fc8378,&DAT_100c4cee8);
    uVar10 = 0x1c00;
  }
  else {
    _Var1 = Swift::TaskPriority::get_rawValue(TVar5);
    (**(code **)(lVar12 + 8))(puVar9,TVar3.unknown);
    uVar10 = (ulong)_Var1 | 0x1c00;
  }
  lVar12 = *(long *)(param_5 + 0x10);
  lVar11 = *(long *)(param_5 + 0x18);
  _swift_unknownObjectRetain(lVar12);
  _swift_release(param_5);
  if (lVar12 == 0) {
    UVar6.unknown = (undefined *)0x0;
    lVar11 = 0;
  }
  else {
    _swift_getObjectType(lVar12);
    UVar6 = Swift::Actor::get_unownedExecutor();
    _swift_unknownObjectRelease(lVar12);
  }
  if (param_2 == (void *)0x0) {
    FUN_100005808(param_3,&DAT_100fc8378,&DAT_100c4cee8);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puVar8 = (undefined8 *)0x0;
    }
    else {
      local_80 = 0;
      uStack_78 = 0;
      puVar8 = &local_80;
      local_70 = UVar6.unknown;
      lStack_68 = lVar11;
    }
    _swift_task_create(uVar10,puVar8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
  }
  else {
    SVar13.bridgeObject = param_2;
    SVar13.str = param_1;
    CVar7 = Swift::String::get_utf8CString(SVar13);
    _swift_bridgeObjectRelease(param_2);
    _swift_retain(param_5);
    if (lVar11 == 0 && UVar6.unknown == (undefined *)0x0) {
      puStack_b0 = (undefined8 *)0x0;
    }
    else {
      local_a0 = 0;
      uStack_98 = 0;
      puStack_b0 = &local_a0;
      local_90 = UVar6.unknown;
      lStack_88 = lVar11;
    }
    local_b8 = 7;
    local_a8 = CVar7.unknown + 0x20;
    _swift_task_create(uVar10,&local_b8,PTR___type_metadata_for____100eae0c8 + 8,param_4,param_5);
    _swift_release(CVar7.unknown);
    FUN_100005808(param_3,&DAT_100fc8378,&DAT_100c4cee8);
    _swift_release(param_5);
  }
  return;
}



/* Address: 0x10047cc70 | FUN_10047cc70 */

/* WARNING: Removing unreachable block (ram,0x00010047ce30) */

void FUN_10047cc70(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  OutputFormatting OVar3;
  JSONEncoder *pJVar4;
  OutputFormatting OVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Data DVar9;
  Data DVar10;
  ulong uVar11;
  undefined *puVar12;
  long extraout_x8;
  OutputFormatting OVar13;
  ulong uVar14;
  String SVar15;
  undefined8 local_160;
  undefined8 local_158;
  JSONEncoder *local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined *puStack_120;
  undefined *local_118;
  undefined *puStack_110;
  ulong local_108;
  undefined8 uStack_100;
  undefined1 local_f8;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_160 = param_3;
  local_158 = param_4;
  local_148 = param_5;
  OVar3 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100ea6a88;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar3.unknown + -8) + 0x40));
  OVar13.unknown = (undefined *)((long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  uStack_98 = param_2[9];
  local_a0 = param_2[8];
  uStack_88 = param_2[0xb];
  uStack_90 = param_2[10];
  uStack_78 = param_2[0xd];
  local_80 = param_2[0xc];
  local_70 = param_2[0xe];
  uStack_d8 = param_2[1];
  local_e0 = *param_2;
  uStack_c8 = param_2[3];
  uStack_d0 = param_2[2];
  uStack_b8 = param_2[5];
  local_c0 = param_2[4];
  uStack_a8 = param_2[7];
  uStack_b0 = param_2[6];
  pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONEncoder::init(pJVar4);
  OVar5.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar5.unknown + 0x18) = 2;
  *(undefined8 *)(OVar5.unknown + 0x10) = 1;
  Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar5);
  puVar6 = &DAT_100fc84d0;
  local_e8 = OVar5.unknown;
  FUN_100003a00(&DAT_100fc84d0,puVar7,
                PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
               );
  puVar7 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar8 = &DAT_100fc84e0;
  FUN_100016eac(&DAT_100fc84e0,&DAT_100fc84d8,&DAT_100c4d040,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(OVar13.unknown,&local_e8,puVar7,puVar8,OVar3.unknown,puVar6);
  Foundation::JSONEncoder::set_outputFormatting(pJVar4,OVar13);
  FUN_10047fdec();
  puVar7 = &DAT_100ed75a0;
  local_150 = pJVar4;
  DVar9 = Foundation::JSONEncoder::_encode();
  uVar14 = 0x2d746e65746e6f43;
  DVar10 = DVar9;
  thunk_FUN_10085c548();
  uVar11 = 0xd000000000000010;
  local_e8 = DVar10.unknown;
  FUN_10085c664(0xd000000000000010,0x8000000100d8fc90,0x2d746e65746e6f43,0xec00000065707954,
                0x2d746e65746e6f63,0xec00000065707974);
  puVar2 = local_e8;
  FUN_100611728();
  uVar1 = local_148;
  _swift_bridgeObjectRetain(local_148);
  _swift_retain(puVar2);
  FUN_1001037b4(DVar9.unknown,puVar7);
  DVar10 = DVar9;
  puVar12 = puVar7;
  FUN_100487db4();
  FUN_10003bf2c(DVar9.unknown,puVar7);
  local_108 = uVar11 & 0xffffffffffffff;
  local_138 = local_160;
  uStack_130 = local_158;
  local_128 = uVar1;
  puStack_120 = puVar2;
  uStack_100 = 0;
  local_f8 = 0;
  local_118 = DVar10.unknown;
  puStack_110 = puVar12;
  _swift_retain(puVar2);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar2);
  if ((uVar14 & 1) == 0) {
    local_140 = (ulong)(uint)((int)((ulong)puVar12 >> 0x20) - (int)puVar12);
    SVar15 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar15.str,SVar15.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(local_150);
  _swift_release(puVar2);
  FUN_10003bf2c(DVar9.unknown,puVar7);
  _swift_release(puVar2);
  param_1[5] = puStack_110;
  param_1[4] = local_118;
  param_1[7] = uStack_100;
  param_1[6] = local_108;
  *(undefined1 *)(param_1 + 8) = local_f8;
  param_1[1] = uStack_130;
  *param_1 = local_138;
  param_1[3] = puStack_120;
  param_1[2] = local_128;
  return;
}



/* Address: 0x10047d040 | FUN_10047d040 */

/* WARNING: Removing unreachable block (ram,0x00010047d1d4) */

void FUN_10047d040(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined *puVar2;
  OutputFormatting OVar3;
  JSONEncoder *pJVar4;
  OutputFormatting OVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  Data DVar9;
  Data DVar10;
  ulong uVar11;
  undefined *puVar12;
  long extraout_x8;
  OutputFormatting OVar13;
  ulong uVar14;
  String SVar15;
  undefined8 local_100;
  undefined8 uStack_f8;
  JSONEncoder *local_f0;
  undefined8 local_e8;
  ulong local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  ulong local_a8;
  undefined8 uStack_a0;
  undefined1 local_98;
  undefined *local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_100 = param_5;
  uStack_f8 = param_6;
  local_e8 = param_7;
  OVar3 = Foundation::JSONEncoder::OutputFormatting::typeMetadataAccessor();
  puVar7 = PTR_typeMetadataAccessor_100ea6a88;
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(OVar3.unknown + -8) + 0x40));
  OVar13.unknown = (undefined *)((long)&local_100 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_80 = param_2;
  uStack_78 = param_3;
  local_70 = param_4;
  pJVar4 = Foundation::JSONEncoder::typeMetadataAccessor();
  _swift_allocObject(pJVar4,*(undefined4 *)(pJVar4 + 0x30),*(undefined2 *)(pJVar4 + 0x34));
  pJVar4 = Foundation::JSONEncoder::init(pJVar4);
  OVar5.unknown = &DAT_100fc84c8;
  FUN_1000037f0(&DAT_100fc84c8,&DAT_100c4d038);
  _swift_allocObject();
  *(undefined8 *)(OVar5.unknown + 0x18) = 2;
  *(undefined8 *)(OVar5.unknown + 0x10) = 1;
  Foundation::JSONEncoder::OutputFormatting::get_sortedKeys(OVar5);
  puVar6 = &DAT_100fc84d0;
  local_88 = OVar5.unknown;
  FUN_100003a00(&DAT_100fc84d0,puVar7,
                PTR_Foundation__Foundation__JSONEncoder__OutputFormatting_>Swift__SetAlgebra_100ea6a98
               );
  puVar7 = &DAT_100fc84d8;
  FUN_1000037f0(&DAT_100fc84d8,&DAT_100c4d040);
  puVar8 = &DAT_100fc84e0;
  FUN_100016eac(&DAT_100fc84e0,&DAT_100fc84d8,&DAT_100c4d040,
                PTR_Swift__Swift__Array<undefined>_>Swift__Sequence_100eac530);
  Swift::SetAlgebra::_init(OVar13.unknown,&local_88,puVar7,puVar8,OVar3.unknown,puVar6);
  Foundation::JSONEncoder::set_outputFormatting(pJVar4,OVar13);
  FUN_10047fe2c();
  puVar7 = &DAT_100ed7520;
  local_f0 = pJVar4;
  DVar9 = Foundation::JSONEncoder::_encode();
  uVar14 = 0x2d746e65746e6f43;
  DVar10 = DVar9;
  thunk_FUN_10085c548();
  uVar11 = 0xd000000000000010;
  local_88 = DVar10.unknown;
  FUN_10085c664(0xd000000000000010,0x8000000100d8fc90,0x2d746e65746e6f43,0xec00000065707954,
                0x2d746e65746e6f63,0xec00000065707974);
  puVar2 = local_88;
  FUN_100611728();
  uVar1 = local_e8;
  _swift_bridgeObjectRetain(local_e8);
  _swift_retain(puVar2);
  FUN_1001037b4(DVar9.unknown,puVar7);
  DVar10 = DVar9;
  puVar12 = puVar7;
  FUN_100487db4();
  FUN_10003bf2c(DVar9.unknown,puVar7);
  local_a8 = uVar11 & 0xffffffffffffff;
  local_d8 = local_100;
  uStack_d0 = uStack_f8;
  local_c8 = uVar1;
  puStack_c0 = puVar2;
  uStack_a0 = 0;
  local_98 = 0;
  local_b8 = DVar10.unknown;
  puStack_b0 = puVar12;
  _swift_retain(puVar2);
  FUN_10085d47c(0x2d746e65746e6f43,0xee006874676e654c,0x2d746e65746e6f63,0xee006874676e656c,puVar2);
  if ((uVar14 & 1) == 0) {
    local_e0 = (ulong)(uint)((int)((ulong)puVar12 >> 0x20) - (int)puVar12);
    SVar15 = Swift::CustomStringConvertible::get_description();
    FUN_10085c664(SVar15.str,SVar15.bridgeObject,0x2d746e65746e6f43,0xee006874676e654c,
                  0x2d746e65746e6f63,0xee006874676e656c);
  }
  _swift_release(local_f0);
  _swift_release(puVar2);
  FUN_10003bf2c(DVar9.unknown,puVar7);
  _swift_release(puVar2);
  param_1[5] = puStack_b0;
  param_1[4] = local_b8;
  param_1[7] = uStack_a0;
  param_1[6] = local_a8;
  *(undefined1 *)(param_1 + 8) = local_98;
  param_1[1] = uStack_d0;
  *param_1 = local_d8;
  param_1[3] = puStack_c0;
  param_1[2] = local_c8;
  return;
}



/* Address: 0x10047d3a0 | FUN_10047d3a0 */

void FUN_10047d3a0(undefined8 param_1,long *param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_a8 [24];
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  
  puVar1 = (undefined8 *)(*param_2 + _TtC8PasteMCP9MCPServer::_storedMcpPort);
  _swift_beginAccess(puVar1,auStack_a8,0,0);
  uVar5 = puVar1[1];
  uVar3 = *puVar1;
  uStack_78 = puVar1[3];
  uVar6 = puVar1[2];
  uStack_68 = puVar1[5];
  uVar4 = puVar1[4];
  uVar2 = puVar1[6];
  local_90 = uVar3;
  uStack_88 = uVar5;
  local_80 = uVar6;
  local_70 = uVar4;
  local_60 = uVar2;
  _swift_retain(uVar3);
  _swift_retain(uVar5);
  _swift_retain(uVar6);
  _swift_retain(uVar4);
  _swift_retain(uVar2);
  FUN_1000037f0(&DAT_100fc86a0,&DAT_100c4d2f8);
  FUN_1002ca7e0(param_1);
  _swift_release(uVar2);
  _swift_release(uVar4);
  _swift_release(uVar6);
  _swift_release(uVar5);
  _swift_release(uVar3);
  return;
}



/* Address: 0x10047d494 | FUN_10047d494 */

void FUN_10047d494(undefined8 *param_1,undefined8 *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 local_38;
  
  uVar4 = *param_1;
  uVar3 = *param_2;
  puVar1 = &DAT_100c4d350;
  _swift_getKeyPath(&DAT_100c4d350);
  puVar2 = &DAT_100c4d378;
  _swift_getKeyPath(&DAT_100c4d378);
  local_38 = uVar4;
  _swift_retain(uVar3);
  FUN_1002cb5a0(&local_38,uVar3,puVar1,puVar2);
  return;
}



/* Address: 0x10047d504 | FUN_10047d504 */

void FUN_10047d504(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_4;
  *(undefined8 *)(unaff_x22 + 0x68) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_10047d520,0,0);
  return;
}



/* Address: 0x10047d520 | FUN_10047d520 */

void FUN_10047d520(void)

{
  undefined *puVar1;
  long unaff_x22;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x60);
  uVar4 = *(undefined8 *)(unaff_x22 + 0x68);
  puVar2 = *(undefined8 **)(unaff_x22 + 0x58);
  puVar1 = &DAT_100fc8330;
  FUN_1000037f0(&DAT_100fc8330,&BYTE_100c4dbf0);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 2;
  *(undefined8 *)(puVar1 + 0x10) = 1;
  *(undefined8 *)(puVar1 + 0x20) = uVar3;
  *(undefined8 *)(puVar1 + 0x28) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  FUN_10047d040(unaff_x22 + 0x10,uVar3,uVar4,puVar1,200,0x4b4f,&SUB_e200000000000000);
  _swift_release(puVar1);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  puVar2[1] = *(undefined8 *)(unaff_x22 + 0x18);
  *puVar2 = uVar3;
  uVar4 = *(undefined8 *)(unaff_x22 + 0x28);
  uVar3 = *(undefined8 *)(unaff_x22 + 0x20);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x38);
  uVar5 = *(undefined8 *)(unaff_x22 + 0x30);
  uVar8 = *(undefined8 *)(unaff_x22 + 0x48);
  uVar7 = *(undefined8 *)(unaff_x22 + 0x40);
  *(undefined1 *)(puVar2 + 8) = *(undefined1 *)(unaff_x22 + 0x50);
  puVar2[5] = uVar6;
  puVar2[4] = uVar5;
  puVar2[7] = uVar8;
  puVar2[6] = uVar7;
  puVar2[3] = uVar4;
  puVar2[2] = uVar3;
                    /* WARNING: Could not recover jumptable at 0x00010047d5dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047d5e0 | FUN_10047d5e0 */

void FUN_10047d5e0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xd8) = param_4;
  *(undefined8 *)(unaff_x22 + 0xe0) = param_5;
  *(undefined8 *)(unaff_x22 + 0xd0) = param_1;
  _swift_task_switch(FUN_10047d5fc,0,0);
  return;
}



/* Address: 0x10047d5fc | FUN_10047d5fc */

void FUN_10047d5fc(void)

{
  undefined8 *puVar1;
  long unaff_x22;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  
  puVar1 = *(undefined8 **)(unaff_x22 + 0xd0);
  FUN_1004865a8(unaff_x22 + 0x10,*(undefined8 *)(unaff_x22 + 0xd8),*(undefined8 *)(unaff_x22 + 0xe0)
               );
  FUN_10047cc70(unaff_x22 + 0x88,unaff_x22 + 0x10,200,0x4b4f,&SUB_e200000000000000);
  FUN_10047fdb8(unaff_x22 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x22 + 0x88);
  puVar1[1] = *(undefined8 *)(unaff_x22 + 0x90);
  *puVar1 = uVar2;
  uVar3 = *(undefined8 *)(unaff_x22 + 0xb0);
  uVar2 = *(undefined8 *)(unaff_x22 + 0xa8);
  uVar5 = *(undefined8 *)(unaff_x22 + 0xc0);
  uVar4 = *(undefined8 *)(unaff_x22 + 0xb8);
  uVar7 = *(undefined8 *)(unaff_x22 + 0xa0);
  uVar6 = *(undefined8 *)(unaff_x22 + 0x98);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(unaff_x22 + 200);
  puVar1[5] = uVar3;
  puVar1[4] = uVar2;
  puVar1[7] = uVar5;
  puVar1[6] = uVar4;
  puVar1[3] = uVar7;
  puVar1[2] = uVar6;
                    /* WARNING: Could not recover jumptable at 0x00010047d678. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}



/* Address: 0x10047d67c | FUN_10047d67c */

void FUN_10047d67c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_10047d698,0,0);
  return;
}



/* Address: 0x10047d698 | FUN_10047d698 */

void FUN_10047d698(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x460;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10047d6f0;
  FUN_1004886dc(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x10047d6f0 | FUN_10047d6f0 */

void FUN_10047d6f0(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x58);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x70));
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
  *puVar1 = uVar4;
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  uVar9 = *(undefined8 *)(lVar2 + 0x48);
  uVar8 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010047d750. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047d754 | FUN_10047d754 */

void FUN_10047d754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  _swift_task_switch(FUN_10047d770,0,0);
  return;
}



/* Address: 0x10047d770 | FUN_10047d770 */

void FUN_10047d770(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x4e0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x78) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10047d7cc;
  FUN_1004899ec(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70));
  return;
}



/* Address: 0x10047d7cc | FUN_10047d7cc */

void FUN_10047d7cc(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x58);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x78));
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
  *puVar1 = uVar4;
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  uVar9 = *(undefined8 *)(lVar2 + 0x48);
  uVar8 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010047d82c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047d830 | FUN_10047d830 */

void FUN_10047d830(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_10047d84c,0,0);
  return;
}



/* Address: 0x10047d84c | FUN_10047d84c */

void FUN_10047d84c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x280;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10047d6f0;
  FUN_10048c000(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x10047d8a4 | FUN_10047d8a4 */

void FUN_10047d8a4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x70) = param_5;
  *(undefined8 *)(unaff_x22 + 0x78) = param_6;
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_10047d8c4,0,0);
  return;
}



/* Address: 0x10047d8c4 | FUN_10047d8c4 */

void FUN_10047d8c4(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x510;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x80) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_10047d920;
  FUN_10048cd30(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68),*(undefined8 *)(unaff_x22 + 0x70),
                *(undefined8 *)(unaff_x22 + 0x78));
  return;
}



/* Address: 0x10047d920 | FUN_10047d920 */

void FUN_10047d920(void)

{
  undefined8 *puVar1;
  long lVar2;
  long *unaff_x22;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  
  lVar2 = *unaff_x22;
  puVar1 = *(undefined8 **)(lVar2 + 0x58);
  lVar3 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0x80));
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  puVar1[1] = *(undefined8 *)(lVar2 + 0x18);
  *puVar1 = uVar4;
  uVar5 = *(undefined8 *)(lVar2 + 0x28);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  uVar7 = *(undefined8 *)(lVar2 + 0x38);
  uVar6 = *(undefined8 *)(lVar2 + 0x30);
  uVar9 = *(undefined8 *)(lVar2 + 0x48);
  uVar8 = *(undefined8 *)(lVar2 + 0x40);
  *(undefined1 *)(puVar1 + 8) = *(undefined1 *)(lVar2 + 0x50);
  puVar1[5] = uVar7;
  puVar1[4] = uVar6;
  puVar1[7] = uVar9;
  puVar1[6] = uVar8;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
                    /* WARNING: Could not recover jumptable at 0x00010047d980. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar3 + 8))();
  return;
}



/* Address: 0x10047d984 | FUN_10047d984 */

void FUN_10047d984(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x60) = param_2;
  *(undefined8 *)(unaff_x22 + 0x68) = param_4;
  *(undefined8 *)(unaff_x22 + 0x58) = param_1;
  _swift_task_switch(FUN_10047d9a0,0,0);
  return;
}



/* Address: 0x10047d9a0 | FUN_10047d9a0 */

void FUN_10047d9a0(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)0x290;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x70) = plVar1;
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_10047d6f0;
  FUN_10048e58c(plVar1,unaff_x22 + 0x10,0,0,*(undefined8 *)(unaff_x22 + 0x60),
                *(undefined8 *)(unaff_x22 + 0x68));
  return;
}



/* Address: 0x10047d9f8 | FUN_10047d9f8 */

bool FUN_10047d9f8(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  URL UVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  URL UVar6;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x12;
  URL UVar7;
  URL UVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  
  UVar2 = Foundation::URL::typeMetadataAccessor();
  lVar12 = *(long *)(UVar2.unknown + -8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(lVar12 + 0x40));
  UVar7.unknown = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100ea82c0)();
  UVar8.unknown = UVar7.unknown + -extraout_x12;
  lVar3 = 0;
  FUN_10047e424();
  (*(code *)PTR____chkstk_darwin_100ea82c0)(*(undefined8 *)(*(long *)(lVar3 + -8) + 0x40));
  lVar10 = (long)UVar8.unknown - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100fc8be8;
  FUN_1000037f0(&DAT_100fc8be8,&DAT_100c4d6d8);
  (*(code *)PTR____chkstk_darwin_100ea82c0)
            (*(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = lVar10 - extraout_x8_01;
  lVar3 = (long)*(int *)(puVar4 + 0x30);
  FUN_1000c495c(param_1,lVar9,FUN_10047e424);
  FUN_1000c495c(param_2,lVar9 + lVar3,FUN_10047e424);
  puVar4 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  pcVar11 = *(code **)(*(long *)(puVar4 + -8) + 0x30);
  lVar5 = lVar9;
  (*pcVar11)(lVar9,1,puVar4);
  if ((int)lVar5 == 1) {
    lVar3 = lVar9 + lVar3;
    (*pcVar11)(lVar3,1,puVar4);
    if ((int)lVar3 == 1) {
      FUN_10005241c(lVar9,FUN_10047e424);
      return true;
    }
  }
  else {
    FUN_1000c495c(lVar9,lVar10,FUN_10047e424);
    lVar5 = lVar9 + lVar3;
    (*pcVar11)(lVar5,1,puVar4);
    if ((int)lVar5 != 1) {
      pcVar11 = *(code **)(lVar12 + 0x20);
      (*pcVar11)(UVar8.unknown,lVar10,UVar2.unknown);
      UVar6 = UVar2;
      (*pcVar11)(UVar7.unknown,lVar9 + lVar3);
      bVar1 = Foundation::URL::___infix(UVar8,UVar7,UVar6);
      pcVar11 = *(code **)(lVar12 + 8);
      (*pcVar11)(UVar7.unknown,UVar2.unknown);
      (*pcVar11)(UVar8.unknown,UVar2.unknown);
      FUN_10005241c(lVar9,FUN_10047e424);
      return bVar1;
    }
    (**(code **)(lVar12 + 8))(lVar10,UVar2.unknown);
  }
  FUN_100005808(lVar9,&DAT_100fc8be8,&DAT_100c4d6d8);
  return false;
}



/* Address: 0x10047dc54 | FUN_10047dc54 */

void FUN_10047dc54(long param_1,undefined8 param_2)

{
  _HashTable _Var1;
  int iVar2;
  undefined8 uVar3;
  code *pcVar4;
  Bucket BVar5;
  undefined *puVar6;
  ulong *puVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  undefined1 auStack_1f8 [24];
  undefined8 local_1e0;
  long lStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined4 local_190;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined *local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined4 local_80;
  undefined8 local_78 [3];
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 == 0) {
    return;
  }
  local_128 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10046adcc(0,lVar8,0);
  puVar6 = local_128;
  _Var1.unknown = (undefined *)(param_1 + 0x40);
  BVar5 = Swift::_HashTable::get_startBucket(_Var1);
  if ((ulong)BVar5.offset >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) == 0) {
    iVar2 = *(int *)(param_1 + 0x24);
    lVar13 = 1;
    do {
      uVar11 = (ulong)BVar5.offset >> 6;
      uVar12 = 1L << (BVar5.offset & 0x3fU);
      if ((*(ulong *)(_Var1.unknown + uVar11 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10047df60);
        (*pcVar4)();
      }
      FUN_100076688(*(long *)(param_1 + 0x38) + BVar5.offset * 0x28,auStack_1f8);
      lVar10 = lStack_1d8;
      uVar3 = local_1e0;
      FUN_100004640(auStack_1f8,local_1e0);
      (**(code **)(lVar10 + 0x38))(&local_120,uVar3,lVar10);
      uStack_148 = uStack_e8;
      local_150 = uStack_f0;
      uStack_138 = uStack_d8;
      uStack_140 = local_e0;
      uStack_178 = uStack_118;
      local_180 = local_120;
      local_78[0] = uStack_c8;
      local_130 = local_d0;
      uStack_168 = uStack_108;
      local_170 = uStack_110;
      uStack_158 = uStack_f8;
      local_160 = local_100;
      uStack_1a8 = uStack_98;
      local_1b0 = local_a0;
      uStack_198 = uStack_88;
      local_1a0 = uStack_90;
      local_190 = local_80;
      uStack_1c8 = uStack_b8;
      local_1d0 = local_c0;
      uStack_1b8 = uStack_a8;
      local_1c0 = uStack_b0;
      _swift_bridgeObjectRetain(param_2);
      FUN_100005808(local_78,&DAT_100fc8be0,&DAT_100c4d698);
      FUN_100004594(auStack_1f8);
      uVar9 = *(ulong *)(puVar6 + 0x10);
      local_128 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar9) {
        FUN_10046adcc(1 < *(ulong *)(puVar6 + 0x18),uVar9 + 1,1);
      }
      puVar6 = local_128;
      *(ulong *)(local_128 + 0x10) = uVar9 + 1;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x28) = uStack_178;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x20) = local_180;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x38) = uStack_168;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x30) = local_170;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x48) = uStack_158;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x40) = local_160;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x58) = uStack_148;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x50) = local_150;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x68) = uStack_138;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x60) = uStack_140;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x70) = local_130;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x78) = param_2;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x88) = uStack_1c8;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x80) = local_1d0;
      *(undefined4 *)(local_128 + uVar9 * 0xa8 + 0xc0) = local_190;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0xa8) = uStack_1a8;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0xa0) = local_1b0;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0xb8) = uStack_198;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0xb0) = local_1a0;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x98) = uStack_1b8;
      *(undefined8 *)(local_128 + uVar9 * 0xa8 + 0x90) = local_1c0;
      uVar9 = 1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f);
      if (uVar9 <= (ulong)BVar5.offset) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10047df64);
        (*pcVar4)();
      }
      if ((*(ulong *)(_Var1.unknown + uVar11 * 8) & uVar12) == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10047df68);
        (*pcVar4)();
      }
      if (iVar2 != *(int *)(param_1 + 0x24)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10047df6c);
        (*pcVar4)();
      }
      uVar12 = *(ulong *)(_Var1.unknown + uVar11 * 8) & -2L << (BVar5.offset & 0x3fU);
      if (uVar12 == 0) {
        lVar10 = uVar11 << 6;
        puVar7 = (ulong *)(param_1 + 0x48 + uVar11 * 8);
        do {
          uVar11 = uVar11 + 1;
          if (uVar9 + 0x3f >> 6 <= uVar11) {
            FUN_10000cae0(BVar5.offset,iVar2,0);
            goto LAB_10047deec;
          }
          uVar12 = *puVar7;
          lVar10 = lVar10 + 0x40;
          puVar7 = puVar7 + 1;
        } while (uVar12 == 0);
        FUN_10000cae0(BVar5.offset,iVar2,0);
        uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) + lVar10;
      }
      else {
        uVar11 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
        uVar11 = (uVar11 & 0xcccccccccccccccc) >> 2 | (uVar11 & 0x3333333333333333) << 2;
        uVar11 = (uVar11 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar11 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar11 = (uVar11 & 0xff00ff00ff00ff00) >> 8 | (uVar11 & 0xff00ff00ff00ff) << 8;
        uVar11 = (uVar11 & 0xffff0000ffff0000) >> 0x10 | (uVar11 & 0xffff0000ffff) << 0x10;
        uVar9 = LZCOUNT(uVar11 >> 0x20 | uVar11 << 0x20) | BVar5.offset & 0x7fffffffffffffc0U;
      }
LAB_10047deec:
      if (lVar13 == lVar8) {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x24);
      lVar13 = lVar13 + 1;
      BVar5.offset = uVar9;
    } while (uVar9 >> ((ulong)*(byte *)(param_1 + 0x20) & 0x3f) == 0);
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10047df5c);
  (*pcVar4)();
}



/* Address: 0x10047df6c | FUN_10047df6c */

undefined * FUN_10047df6c(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = &DAT_100fc8bf0;
  FUN_1000037f0(&DAT_100fc8bf0,&DAT_100c4d7b8);
  _swift_allocObject();
  *(undefined8 *)(puVar1 + 0x18) = 0x16;
  *(undefined8 *)(puVar1 + 0x10) = 0xb;
  puVar2 = &DAT_100c4d7c0;
  _swift_getKeyPath();
  puVar3 = &DAT_100fc8bf8;
  FUN_1000037f0(&DAT_100fc8bf8,&DAT_100c4d7f0);
  _swift_allocObject();
  FUN_1000da6e0(puVar2,puVar3);
  *(undefined **)(puVar1 + 0x38) = &DAT_100ed9238;
  puVar3 = puVar2;
  FUN_10048040c();
  *(undefined **)(puVar1 + 0x40) = puVar3;
  *(undefined **)(puVar1 + 0x20) = puVar2;
  *(undefined **)(puVar1 + 0x60) = &DAT_100ed8b60;
  FUN_10048044c();
  *(undefined **)(puVar1 + 0x68) = puVar3;
  *(undefined **)(puVar1 + 0x88) = &DAT_100ed7ab8;
  FUN_10048048c();
  *(undefined **)(puVar1 + 0x90) = puVar3;
  *(undefined **)(puVar1 + 0xb0) = &DAT_100ed95e0;
  FUN_1004804cc();
  *(undefined **)(puVar1 + 0xb8) = puVar3;
  *(undefined **)(puVar1 + 0xd8) = &DAT_100ed7e68;
  FUN_10048050c();
  *(undefined **)(puVar1 + 0xe0) = puVar3;
  *(undefined **)(puVar1 + 0x100) = &DAT_100ed8468;
  FUN_10048054c();
  *(undefined **)(puVar1 + 0x108) = puVar3;
  *(undefined **)(puVar1 + 0x128) = &DAT_100ed7c90;
  FUN_10048058c();
  *(undefined **)(puVar1 + 0x130) = puVar3;
  *(undefined **)(puVar1 + 0x150) = &DAT_100ed9060;
  FUN_1004805cc();
  *(undefined **)(puVar1 + 0x158) = puVar3;
  *(undefined **)(puVar1 + 0x178) = &DAT_100ed78e0;
  FUN_10048060c();
  *(undefined **)(puVar1 + 0x180) = puVar3;
  *(undefined **)(puVar1 + 0x1a0) = &DAT_100ed8e88;
  FUN_10048064c();
  *(undefined **)(puVar1 + 0x1a8) = puVar3;
  *(undefined **)(puVar1 + 0x1c8) = &DAT_100ed8168;
  FUN_10048068c();
  *(undefined **)(puVar1 + 0x1d0) = puVar3;
  return puVar1;
}



/* Address: 0x10047e0dc | FUN_10047e0dc */

void FUN_10047e0dc(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc8738,&TargetClassDescriptor_100cb12e8);
  return;
}



/* Address: 0x10047e0f0 | FUN_10047e0f0 */

void FUN_10047e0f0(undefined8 param_1,undefined1 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  long unaff_x20;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  _swift_defaultActor_initialize();
  *(undefined8 *)(unaff_x20 + 0x70) = 0x2e302e302e373231;
  *(undefined8 *)(unaff_x20 + 0x78) = 0xe900000000000031;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0xb8) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  lVar2 = _TtC8PasteMCP9MCPServer::currentState;
  puVar3 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  (**(code **)(*(long *)(puVar3 + -8) + 0x38))(unaff_x20 + lVar2,1,1,puVar3);
  lVar2 = _TtC8PasteMCP9MCPServer::stateObservers;
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  FUN_10045a660();
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC8PasteMCP9MCPServer::clientStore;
  puVar3 = &DAT_100c4d6e0;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c18;
  FUN_1000037f0(&DAT_100fc7c18,&DAT_100c4c5b8);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC8PasteMCP9MCPServer::dcrRegistry;
  puVar3 = &DAT_100c4d708;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c20;
  FUN_1000037f0(&DAT_100fc7c20,&DAT_100c4c5e8);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC8PasteMCP9MCPServer::authorizationCodeStore;
  puVar3 = &DAT_100c4d730;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c28;
  FUN_1000037f0(&DAT_100fc7c28,&DAT_100c4c618);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC8PasteMCP9MCPServer::logger;
  FUN_1000d4ca4(0);
  _swift_allocObject();
  uVar5 = 0x657672655350434d;
  FUN_1000d4624(0x657672655350434d,0xe900000000000072);
  *(undefined8 *)(unaff_x20 + lVar2) = uVar5;
  lVar2 = _TtC8PasteMCP9MCPServer::telemetry;
  puVar3 = &DAT_100c4d758;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c08;
  FUN_1000037f0(&DAT_100fc7c08,&DAT_100c4c580);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  lVar2 = _TtC8PasteMCP9MCPServer::analyticsInjected;
  puVar3 = &DAT_100c4d788;
  _swift_getKeyPath();
  puVar4 = &DAT_100fc7c30;
  FUN_1000037f0(&DAT_100fc7c30,&DAT_100c4c650);
  _swift_allocObject();
  FUN_1000da6e0(puVar3,puVar4);
  *(undefined **)(unaff_x20 + lVar2) = puVar3;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::_storedMcpPort);
  _swift_getKeyPath(&DAT_100c4d2d0);
  ppuVar6 = &PTR_PTR_100ec7030;
  FUN_1002cb7e0(&local_88);
  puVar1[1] = uStack_80;
  *puVar1 = local_88;
  puVar1[3] = uStack_70;
  puVar1[2] = local_78;
  puVar1[5] = uStack_60;
  puVar1[4] = local_68;
  puVar1[6] = local_58;
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8PasteMCP9MCPServer::analytics);
  puVar1[4] = 0;
  puVar1[1] = 0;
  *puVar1 = 0;
  puVar1[3] = 0;
  puVar1[2] = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = param_1;
  *(undefined1 *)(unaff_x20 + 0x88) = param_2;
  FUN_1004a25b8();
  *(undefined8 *)(unaff_x20 + 0x90) = param_3;
  *(undefined ***)(unaff_x20 + 0x98) = ppuVar6;
  return;
}



/* Address: 0x10047e3e0 | FUN_10047e3e0 */

void FUN_10047e3e0(void)

{
  undefined8 local_18;
  
  local_18 = 0x9b2d;
  FUN_1002ccc34(0x74726f5070636d,&DAT_e700000000000000,&local_18,
                PTR___type_metadata_for_Swift_Int_100eac6f8);
  return;
}



/* Address: 0x10047e424 | FUN_10047e424 */

void FUN_10047e424(undefined8 param_1)

{
  FUN_1000c99e4(param_1,&DAT_100fc89d8,&TargetEnumDescriptor_100cb1450);
  return;
}



/* Address: 0x10047e438 | FUN_10047e438 */

void FUN_10047e438(void)

{
  FUN_1004788a4();
  return;
}



/* Address: 0x10047e440 | FUN_10047e440 */

void FUN_10047e440(void)

{
  long unaff_x20;
  
  _swift_weakDestroy(unaff_x20 + 0x10);
  _swift_deallocObject();
  return;
}



/* Address: 0x10047e464 | FUN_10047e464 */

void FUN_10047e464(void)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long unaff_x20;
  ulong uVar5;
  long lVar6;
  
  puVar3 = &DAT_100fc86b8;
  FUN_1000037f0(&DAT_100fc86b8,&DAT_100c4d320);
  lVar6 = *(long *)(puVar3 + -8);
  uVar5 = (ulong)*(byte *)(lVar6 + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x10));
  puVar1 = (undefined8 *)(unaff_x20 + uVar5);
  _swift_unknownObjectRelease(*puVar1);
  _swift_release(puVar1[2]);
  FUN_100004594(puVar1 + 3);
  lVar2 = (long)puVar1 + (long)*(int *)(puVar3 + 0x30);
  lVar4 = 0;
  FUN_100a0e718();
  (**(code **)(*(long *)(lVar4 + -8) + 8))(lVar2,lVar4);
  lVar4 = 0;
  FUN_1006b7d9c();
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + *(int *)(lVar4 + 0x14) + 8));
  if (*(long *)(lVar2 + *(int *)(lVar4 + 0x20) + 0x18) != 0) {
    FUN_100004594();
  }
  lVar6 = *(long *)(lVar6 + 0x40);
  _swift_release(*(undefined8 *)(lVar2 + *(int *)(lVar4 + 0x24)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x34)));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x38) + 8));
  _swift_release(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x3c) + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x40)));
  _swift_bridgeObjectRelease(*(undefined8 *)((long)puVar1 + (long)*(int *)(puVar3 + 0x44)));
  _swift_release(*(undefined8 *)(unaff_x20 + (uVar5 + lVar6 + 7 & 0xfffffffffffffff8)));
  _swift_deallocObject();
  return;
}



/* Address: 0x10047e5a8 | FUN_10047e5a8 */

undefined8 FUN_10047e5a8(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc86b8;
  FUN_1000037f0(&DAT_100fc86b8,&DAT_100c4d320);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x10047e5f8 | FUN_10047e5f8 */

void FUN_10047e5f8(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  long unaff_x20;
  long unaff_x22;
  undefined8 uVar6;
  
  puVar3 = &DAT_100fc86b8;
  FUN_1000037f0(&DAT_100fc86b8,&DAT_100c4d320);
  uVar5 = (ulong)*(byte *)(*(long *)(puVar3 + -8) + 0x50);
  uVar5 = uVar5 + 0x20 & (uVar5 ^ 0xffffffffffffffff);
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  uVar6 = *(undefined8 *)
           (unaff_x20 + (*(long *)(*(long *)(puVar3 + -8) + 0x40) + uVar5 + 7 & 0xfffffffffffffff8))
  ;
  plVar4 = (long *)0x40;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar4;
  *plVar4 = unaff_x22;
  plVar4[1] = (long)thunk_FUN_100008284;
  FUN_10047c794(plVar4,param_1,uVar1,uVar2,unaff_x20 + uVar5,uVar6);
  return;
}



/* Address: 0x10047e6a4 | thunk_FUN_10047d3a0 */

void thunk_FUN_10047d3a0(void)

{
  FUN_10047d3a0();
  return;
}



/* Address: 0x10047e6a8 | thunk_FUN_10047d494 */

void thunk_FUN_10047d494(void)

{
  FUN_10047d494();
  return;
}



/* Address: 0x10047e6ac | thunk_FUN_10047e6b0 */

void thunk_FUN_10047e6b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d3e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d3e8,&DAT_100ed70c8);
  DAT_100fc8708 = pTVar1;
  return;
}



/* Address: 0x10047e6b0 | FUN_10047e6b0 */

void FUN_10047e6b0(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc8708 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d3e8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d3e8,&DAT_100ed70c8);
  DAT_100fc8708 = pTVar1;
  return;
}



/* Address: 0x10047e6f0 | FUN_10047e6f0 */

void FUN_10047e6f0(void)

{
  FUN_10047e0dc(0);
  return;
}



/* Address: 0x10047e6f8 | FUN_10047e6f8 */

void FUN_10047e6f8(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  long local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_b0 = &DAT_100c4d4e8;
  puStack_a8 = &DAT_100c4d500;
  local_a0 = &DAT_100c4d518;
  puStack_98 = &DAT_100c4d500;
  local_90 = &DAT_100c4d530;
  puStack_88 = &DAT_100c4d530;
  local_80 = &DAT_100c4d530;
  puStack_78 = &DAT_100c4d530;
  lVar1 = 0x13f;
  FUN_10047e424();
  if (param_2 < 0x40) {
    local_70 = *(long *)(lVar1 + -8) + 0x40;
    puStack_68 = PTR___value_witness_table_for_Builtin_BridgeObject_100eabd38 + 0x40;
    local_60 = PTR___value_witness_table_for_Builtin_NativeObject_100eabd58 + 0x40;
    local_30 = &DAT_100c4d548;
    puStack_28 = &DAT_100c4d560;
    puStack_58 = local_60;
    local_50 = local_60;
    puStack_48 = local_60;
    local_40 = local_60;
    puStack_38 = local_60;
    _swift_updateClassMetadata2(param_1,0x100,0x12,&local_b0,param_1 + 0x50);
  }
  return;
}



/* Address: 0x10047e7c8 | FUN_10047e7c8 */

long * FUN_10047e7c8(long *param_1,long *param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  URL UVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_3 + -8);
  uVar1 = *(uint *)(lVar7 + 0x50);
  if ((uVar1 >> 0x11 & 1) == 0) {
    puVar2 = &DAT_100fc7c10;
    FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
    lVar6 = *(long *)(puVar2 + -8);
    plVar3 = param_2;
    (**(code **)(lVar6 + 0x30))(param_2,1,puVar2);
    if ((int)plVar3 != 0) {
      plVar3 = _memcpy(param_1,param_2,*(size_t *)(lVar7 + 0x40));
      return plVar3;
    }
    UVar4 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar4.unknown + -8) + 0x10))(param_1,param_2,UVar4.unknown);
    (**(code **)(lVar6 + 0x38))(param_1,0,1,puVar2);
  }
  else {
    lVar7 = *param_2;
    *param_1 = lVar7;
    uVar5 = (ulong)uVar1 & 0xff;
    param_1 = (long *)(lVar7 + (uVar5 + 0x10 & (uVar5 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}



/* Address: 0x10047e8b4 | FUN_10047e8b4 */

void FUN_10047e8b4(undefined8 param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  URL UVar3;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  uVar2 = param_1;
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  if ((int)uVar2 != 0) {
    return;
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
                    /* WARNING: Could not recover jumptable at 0x00010047e920. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(UVar3.unknown + -8) + 8))(param_1,UVar3.unknown);
  return;
}



/* Address: 0x10047e924 | FUN_10047e924 */

void * FUN_10047e924(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  URL UVar3;
  long lVar4;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  lVar4 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x10047e9ec | FUN_10047e9ec */

void * FUN_10047e9ec(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  URL UVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  lVar5 = *(long *)(puVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar4 = param_1;
  (*pcVar6)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,puVar1);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar2 != 0) {
      FUN_100005808(param_1,&DAT_100fc7c10,&DAT_100c4c588);
      goto LAB_10047eab4;
    }
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x18))(param_1,param_2,UVar3.unknown);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_10047eab4:
      pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar4;
    }
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x10))(param_1,param_2,UVar3.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x10047eb18 | FUN_10047eb18 */

void * FUN_10047eb18(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  URL UVar3;
  long lVar4;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  lVar4 = *(long *)(puVar1 + -8);
  pvVar2 = param_2;
  (**(code **)(lVar4 + 0x30))(param_2,1,puVar1);
  if ((int)pvVar2 != 0) {
    pvVar2 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
    return pvVar2;
  }
  UVar3 = Foundation::URL::typeMetadataAccessor();
  (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))(param_1,param_2,UVar3.unknown);
  (**(code **)(lVar4 + 0x38))(param_1,0,1,puVar1);
  return param_1;
}



/* Address: 0x10047ebe0 | FUN_10047ebe0 */

void * FUN_10047ebe0(void *param_1,void *param_2,long param_3)

{
  undefined *puVar1;
  void *pvVar2;
  URL UVar3;
  void *pvVar4;
  long lVar5;
  code *pcVar6;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  lVar5 = *(long *)(puVar1 + -8);
  pcVar6 = *(code **)(lVar5 + 0x30);
  pvVar4 = param_1;
  (*pcVar6)(param_1,1,puVar1);
  pvVar2 = param_2;
  (*pcVar6)(param_2,1,puVar1);
  if ((int)pvVar4 == 0) {
    if ((int)pvVar2 != 0) {
      FUN_100005808(param_1,&DAT_100fc7c10,&DAT_100c4c588);
      goto LAB_10047eca8;
    }
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x28))(param_1,param_2,UVar3.unknown);
  }
  else {
    if ((int)pvVar2 != 0) {
LAB_10047eca8:
      pvVar4 = _memcpy(param_1,param_2,*(size_t *)(*(long *)(param_3 + -8) + 0x40));
      return pvVar4;
    }
    UVar3 = Foundation::URL::typeMetadataAccessor();
    (**(code **)(*(long *)(UVar3.unknown + -8) + 0x20))(param_1,param_2,UVar3.unknown);
    (**(code **)(lVar5 + 0x38))(param_1,0,1,puVar1);
  }
  return param_1;
}



/* Address: 0x10047ed0c | FUN_10047ed0c */

void FUN_10047ed0c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10047ed18 | FUN_10047ed18 */

int FUN_10047ed18(undefined8 param_1,undefined8 param_2)

{
  int iVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
  (**(code **)(*(long *)(puVar2 + -8) + 0x30))(param_1,param_2,puVar2);
  iVar1 = 0;
  if ((int)param_1 != 0) {
    iVar1 = (int)param_1 + -1;
  }
  return iVar1;
}



/* Address: 0x10047ed6c | FUN_10047ed6c */

void FUN_10047ed6c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x10047ed78 | FUN_10047ed78 */

void FUN_10047ed78(undefined8 param_1,int param_2,undefined8 param_3)

{
  int iVar1;
  undefined *puVar2;
  
  iVar1 = 0;
  if (param_2 != 0) {
    iVar1 = param_2 + 1;
  }
  puVar2 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
                    /* WARNING: Could not recover jumptable at 0x00010047edd0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar2 + -8) + 0x38))(param_1,iVar1,param_3,puVar2);
  return;
}



/* Address: 0x10047edd4 | FUN_10047edd4 */

void FUN_10047edd4(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
                    /* WARNING: Could not recover jumptable at 0x00010047ee14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x30))(param_1,1,puVar1);
  return;
}



/* Address: 0x10047ee18 | FUN_10047ee18 */

void FUN_10047ee18(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100fc7c10;
  FUN_1000037f0(&DAT_100fc7c10,&DAT_100c4c588);
                    /* WARNING: Could not recover jumptable at 0x00010047ee60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(puVar1 + -8) + 0x38))(param_1,param_2,1,puVar1);
  return;
}



/* Address: 0x10047ee64 | FUN_10047ee64 */

undefined1  [16] FUN_10047ee64(undefined8 param_1,ulong param_2)

{
  URL UVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  UVar1 = Foundation::URL::typeMetadataAccessor();
  if (param_2 < 0x40) {
    _swift_initEnumMetadataSinglePayload(param_1,0x100,*(long *)(UVar1.unknown + -8) + 0x40,1);
    UVar1.unknown = (undefined *)0x0;
    uVar2 = 0;
  }
  else {
    uVar2 = 0x3f;
  }
  auVar3._8_8_ = uVar2;
  auVar3._0_8_ = UVar1.unknown;
  return auVar3;
}



/* Address: 0x10047eeb8 | FUN_10047eeb8 */

undefined1  [16] FUN_10047eeb8(void)

{
  return ZEXT816(0x100ed70c8);
}



/* Address: 0x10047eec8 | FUN_10047eec8 */

undefined8 FUN_10047eec8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_10047e424();
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x10047ef0c | FUN_10047ef0c */

void FUN_10047ef0c(void)

{
  TargetProtocolConformanceDescriptor *pTVar1;
  
  if (DAT_100fc89f0 != (TargetProtocolConformanceDescriptor *)0x0) {
    return;
  }
  pTVar1 = &TargetProtocolConformanceDescriptor_100c4d450;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_100c4d450,&DAT_100ed70c8);
  DAT_100fc89f0 = pTVar1;
  return;
}



/* Address: 0x10047ef4c | FUN_10047ef4c */

void FUN_10047ef4c(void)

{
  FUN_10047ff24(PTR__swift_release_100eae3e8);
  return;
}



/* Address: 0x10047ef58 | FUN_10047ef58 */

void FUN_10047ef58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x80;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047c11c(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}



/* Address: 0x10047efd4 | FUN_10047efd4 */

void FUN_10047efd4(void)

{
  long unaff_x20;
  
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0x18));
  _swift_deallocObject();
  return;
}



/* Address: 0x10047eff8 | FUN_10047eff8 */

void FUN_10047eff8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *plVar3;
  long unaff_x20;
  long unaff_x22;
  
  uVar1 = *(undefined8 *)(unaff_x20 + 0x10);
  uVar2 = *(undefined8 *)(unaff_x20 + 0x18);
  plVar3 = (long *)0x70;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar3;
  *plVar3 = unaff_x22;
  plVar3[1] = (long)thunk_FUN_100008284;
  FUN_10047d504(plVar3,param_1,param_2,param_3,uVar1,uVar2);
  return;
}


