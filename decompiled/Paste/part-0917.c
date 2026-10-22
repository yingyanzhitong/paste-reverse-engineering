/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009db64c | FUN_1009db64c */

byte * FUN_1009db64c(void)

{
  return &BYTE_100c8ce51;
}



/* Address: 0x1009db658 | FUN_1009db658 */

byte * FUN_1009db658(void)

{
  return &BYTE_100c8ce52;
}



/* Address: 0x1009db664 | FUN_1009db664 */

byte * FUN_1009db664(void)

{
  return &BYTE_100c8ce53;
}



/* Address: 0x1009db670 | FUN_1009db670 */

byte * FUN_1009db670(void)

{
  return &BYTE_100c8ce54;
}



/* Address: 0x1009db67c | FUN_1009db67c */

byte * FUN_1009db67c(void)

{
  return &BYTE_100c8ce55;
}



/* Address: 0x1009db688 | FUN_1009db688 */

byte * FUN_1009db688(void)

{
  return &BYTE_100c8ce56;
}



/* Address: 0x1009db694 | FUN_1009db694 */

byte * FUN_1009db694(void)

{
  return &BYTE_100c8ce57;
}



/* Address: 0x1009db6a0 | FUN_1009db6a0 */

byte * FUN_1009db6a0(void)

{
  return &BYTE_100c8ce58;
}



/* Address: 0x1009db6ac | FUN_1009db6ac */

byte * FUN_1009db6ac(void)

{
  return &BYTE_100c8ce59;
}



/* Address: 0x1009db6b8 | FUN_1009db6b8 */

void FUN_1009db6b8(void)

{
  undefined1 *unaff_x20;
  
  thunk_FUN_1009db6c0(*unaff_x20);
  return;
}



/* Address: 0x1009db6c0 | FUN_1009db6c0 */

undefined1  [16]
FUN_1009db6c0(ulong param_1,undefined8 param_2,undefined **param_3,Attributes param_4,
             class_rw_t *param_5)

{
  AutoreleaseFrequency AVar1;
  DispatchQoS DVar2;
  undefined7 extraout_var;
  OS_dispatch_queue *pOVar3;
  Cache *pCVar4;
  Cache *pCVar5;
  undefined8 uVar6;
  code *pcVar7;
  class_rw_t *unaff_x19;
  Attributes unaff_x20;
  class_rw_t *pcVar8;
  OS_dispatch_queue *unaff_x21;
  OS_dispatch_queue *unaff_x22;
  byte *pbVar9;
  OS_dispatch_queue *unaff_x23;
  long unaff_x24;
  OS_dispatch_queue *unaff_x25;
  Cache *unaff_x26;
  undefined *unaff_x27;
  Cache *unaff_x28;
  undefined8 *unaff_x29;
  undefined8 *puVar10;
  undefined8 unaff_x30;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  String label;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined8 *in_stack_00000050;
  undefined8 in_stack_00000058;
  
  AVar1.value = (__int8)param_5;
  pCVar4 = (Cache *)&DAT_e700000000000000;
  DVar2.unknown = &DAT_54524241474953;
  pcVar7 = (code *)(param_1 & 0xff);
  pbVar9 = &switchD_1009db6f0::switchdataD_100c8ce40;
  pOVar3 = (OS_dispatch_queue *)DVar2.unknown;
  pCVar5 = pCVar4;
  puVar10 = unaff_x29;
  switch(pcVar7) {
  default:
    pCVar4 = (Cache *)&DAT_e600000000000000;
  case (code *)0xe:
  case (code *)0x52:
  case (code *)0x6c:
  case (code *)0x7a:
  case (code *)0x94:
  case (code *)0xa2:
  case (code *)0xe0:
  case (code *)0xee:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0xf:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x48470000);
  case (code *)0x10:
  case (code *)0x22:
  case (code *)0x2a:
  case (code *)0x34:
  case (code *)0x62:
  case (code *)0x6a:
  case (code *)0x8a:
  case (code *)0x92:
  case (code *)0xd6:
  case (code *)0xde:
  case (code *)0xfe:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff0000ffffffff | 0x505500000000);
  case (code *)0x12:
  case (code *)0x2c:
  case (code *)0x74:
    auVar11._8_8_ = pCVar4;
    auVar11._0_8_ = DVar2.unknown;
    return auVar11;
  case (code *)0x2:
    auVar16._8_8_ = &DAT_e600000000000000;
    auVar16._0_8_ = 0x4c4c49474953;
    return auVar16;
  case (code *)0x3:
    pCVar4 = (Cache *)&DAT_e600000000000000;
    DVar2.unknown = (OS_dispatch_queue *)0x49474953;
  case (code *)0xf8:
    auVar17._0_8_ = (ulong)DVar2.unknown & 0xffff0000ffffffff | 0x544e00000000;
    auVar17._8_8_ = pCVar4;
    return auVar17;
  case (code *)0x4:
  case (code *)0x17:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x18:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x53470000);
  case (code *)0x19:
    auVar13._0_8_ = (ulong)DVar2.unknown & 0xffffffff | 0x56474500000000;
    auVar13._8_8_ = &DAT_e700000000000000;
    return auVar13;
  case (code *)0x5:
  case (code *)0x44:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x1e:
  case (code *)0x32:
  case (code *)0x3a:
  case (code *)0x42:
  case (code *)0x4a:
  case (code *)0x5e:
  case (code *)0x72:
  case (code *)0x86:
  case (code *)0x9a:
  case (code *)0xd2:
  case (code *)0xe6:
  case (code *)0xfa:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff00000000ffff | 0x524554470000);
  case (code *)0x9d:
  case (code *)0xe9:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffffffff | 0x4d000000000000);
  case (code *)0x3d:
  case (code *)0x45:
  case (code *)0x4d:
    auVar19._8_8_ = &DAT_e700000000000000;
    auVar19._0_8_ = DVar2.unknown;
    return auVar19;
  case (code *)0x6:
    auVar20._8_8_ = &DAT_e700000000000000;
    auVar20._0_8_ = 0x31525355474953;
    return auVar20;
  case (code *)0x7:
    auVar18._8_8_ = &DAT_e700000000000000;
    auVar18._0_8_ = 0x32525355474953;
    return auVar18;
  case (code *)0x8:
  case (code *)0x3c:
  case (code *)0xa8:
    auVar22._8_8_ = &DAT_e700000000000000;
    auVar22._0_8_ = 0x4d524c41474953;
    return auVar22;
  case (code *)0x9:
  case (code *)0x20:
    DVar2.unknown = (OS_dispatch_queue *)0x54495551474953;
  case (code *)0x4c:
    auVar15._8_8_ = &DAT_e700000000000000;
    auVar15._0_8_ = DVar2.unknown;
    return auVar15;
  case (code *)0xa:
    auVar21._8_8_ = &DAT_e800000000000000;
    auVar21._0_8_ = 0x48434e4957474953;
    return auVar21;
  case (code *)0xb:
  case (code *)0x13:
    DVar2.unknown = (OS_dispatch_queue *)0x4953;
  case (code *)0x14:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffff0000ffff | 0x43470000);
  case (code *)0x15:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffff0000ffffffff | 0x4e4f00000000);
  case (code *)0x16:
  case (code *)0x36:
    DVar2.unknown = (undefined *)((ulong)DVar2.unknown & 0xffffffffffff | 0x54000000000000);
  case (code *)0x11:
    auVar12._8_8_ = &DAT_e700000000000000;
    auVar12._0_8_ = DVar2.unknown;
    return auVar12;
  case (code *)0xc:
    DVar2.unknown = (OS_dispatch_queue *)0x45504950474953;
  case (code *)0x0:
    auVar14._8_8_ = &DAT_e700000000000000;
    auVar14._0_8_ = DVar2.unknown;
    return auVar14;
  case (code *)0x5a:
  case (code *)0x82:
  case (code *)0xaa:
  case (code *)0xf6:
    pcVar7 = (code *)&objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x3e:
  case (code *)0x46:
  case (code *)0x4e:
  case (code *)0x9e:
  case (code *)0xea:
    auVar23._0_8_ = *(long *)(pcVar7 + 0x6f0);
    if (auVar23._0_8_ != 0) {
      auVar23._8_8_ = &DAT_e700000000000000;
      return auVar23;
    }
  case (code *)0x35:
    DVar2.unknown = &DAT_100c8cec4;
    pCVar4 = (Cache *)&UNK_100f26000;
  case (code *)0xe4:
    pCVar4 = pCVar4 + 0x171;
    _swift_getWitnessTable(DVar2.unknown,pCVar4);
    DAT_100ff36f0 = (OS_dispatch_queue *)DVar2.unknown;
  case (code *)0xb4:
  case (code *)0xc0:
    auVar24._8_8_ = pCVar4;
    auVar24._0_8_ = DVar2.unknown;
    return auVar24;
  case (code *)0x75:
    pcVar8 = *(class_rw_t **)(unaff_x22 + 0x10);
    unaff_x19 = pcVar8;
    FUN_1009df740(pcVar8);
    _swift_bridgeObjectRelease(pcVar8);
    FUN_1009df7b0(0);
    pCVar4 = (Cache *)0x18;
    _swift_allocObject();
    DVar2.unknown = (OS_dispatch_queue *)0xc0;
    _swift_task_alloc();
    *(undefined **)(unaff_x22 + 0x18) = DVar2.unknown;
    pcVar7 = thunk_FUN_1009dbba4;
  case (code *)0x3f:
  case (code *)0x47:
  case (code *)0x4f:
  case (code *)0x77:
  case (code *)0x9f:
  case (code *)0xeb:
    *(OS_dispatch_queue **)DVar2.unknown = unaff_x22;
    *(code **)(DVar2.unknown + 8) = pcVar7;
    FUN_1009dbf18(unaff_x19);
    auVar33._8_8_ = pCVar4;
    auVar33._0_8_ = unaff_x19;
    return auVar33;
  case (code *)0x80:
    *(class_rw_t **)(unaff_x22 + 0x10) = (class_rw_t *)&DAT_54524241474953;
    pcVar7 = FUN_1009dba8c;
    uVar6 = 0;
    _swift_task_switch(FUN_1009dba8c,0,0);
    auVar32._8_8_ = uVar6;
    auVar32._0_8_ = pcVar7;
    return auVar32;
  case (code *)0xb3:
  case (code *)0xbf:
  case (code *)0xe8:
    puVar10 = &stack0x00000050;
    in_stack_00000050 = unaff_x29;
    in_stack_00000058 = unaff_x30;
  case (code *)0xd4:
    AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor
                      ();
    puVar10[-0xc] = CONCAT71(extraout_var,AVar1.value);
    unaff_x24 = *(long *)(CONCAT71(extraout_var,AVar1.value) + -8);
    register0x00000008 =
         (BADSPACEBASE *)
         (&stack0xffffffffffffffe0 + -(*(long *)(unaff_x24 + 0x40) + 0xfU & 0xfffffffffffffff0));
    unaff_x19 = (class_rw_t *)register0x00000008;
  case (code *)0x58:
    unaff_x20 = Attributes::_typeMetadataAccessor();
    unaff_x25 = (OS_dispatch_queue *)PTR__typeMetadataAccessor_100eae788;
    pbVar9 = (byte *)((long)register0x00000008 -
                     (*(long *)(*(long *)(unaff_x20.unknown + -8) + 0x40) + 0xfU &
                     0xfffffffffffffff0));
    DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
    pcVar7 = (code *)(*(long *)(*(long *)(DVar2.unknown + -8) + 0x40) + 0xf);
    unaff_x22 = (OS_dispatch_queue *)pbVar9;
  case (code *)0x98:
    unaff_x23 = (OS_dispatch_queue *)(pbVar9 + -((ulong)pcVar7 & 0xfffffffffffffff0));
    pCVar4 = &objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x1d:
  case (code *)0x31:
  case (code *)0x39:
  case (code *)0x41:
  case (code *)0x49:
  case (code *)0x5d:
  case (code *)0x71:
  case (code *)0x85:
  case (code *)0x99:
  case (code *)0xd1:
  case (code *)0xe5:
  case (code *)0xf9:
    DVar2.unknown = (undefined *)0x0;
    FUN_10000ec2c(0,pCVar4 + 0x13c,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
    puVar10[-0xd] = DVar2.unknown;
    pcVar7 = (code *)"com.service-lifecycle.unix-signals";
  case (code *)0x84:
    unaff_x21 = (OS_dispatch_queue *)(pcVar7 + -0x20);
    Dispatch::DispatchQoS::get_unspecified(DVar2);
    puVar10[-0xb] = PTR___swiftEmptyArrayStorage_100eae0d8;
    DVar2.unknown = (undefined *)&objc::class_t::_TtC16ServiceLifecycle18CancellationWaiter.cache;
  case (code *)0x88:
    DVar2.unknown = DVar2.unknown + 0x9e8;
    param_3 = &PTR_get_stringValue_100eae000;
  case (code *)0x59:
  case (code *)0x81:
    param_3 = *(undefined ***)((long)param_3 + 0x798);
  case (code *)0xa9:
  case (code *)0xf5:
    FUN_100003a00(DVar2.unknown,unaff_x25,param_3);
  case (code *)0x70:
    unaff_x27 = &DAT_100c8d150;
    unaff_x28 = (Cache *)&DAT_100ff39f0;
    FUN_1000f7830(&DAT_100ff39f0,&DAT_100c8d150);
    pOVar3 = (OS_dispatch_queue *)&DAT_100ff39f8;
    unaff_x25 = (OS_dispatch_queue *)DVar2.unknown;
    unaff_x26 = (Cache *)&DAT_100ff39f0;
  case (code *)0x61:
  case (code *)0x89:
  case (code *)0xd5:
  case (code *)0xfd:
    pCVar5 = unaff_x26;
  case (code *)0x21:
  case (code *)0x5c:
    pCVar4 = unaff_x28;
    pcVar7 = (code *)unaff_x22;
    param_4.unknown = unaff_x20.unknown;
    FUN_100155c48(pOVar3,pCVar5,unaff_x27);
    DVar2.unknown = (undefined *)(puVar10 + -0xb);
    param_3 = (undefined **)pOVar3;
    unaff_x22 = (OS_dispatch_queue *)pcVar7;
  case (code *)0x9c:
    Swift::SetAlgebra::_init(pcVar7,DVar2.unknown,pCVar4,param_3,param_4.unknown,unaff_x25);
    pCVar4 = (Cache *)(ulong)*(uint *)
                              PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
    ;
  case (code *)0x30:
  case (code *)0x38:
  case (code *)0x40:
  case (code *)0x48:
    param_3 = (undefined **)unaff_x23;
    param_4.unknown = unaff_x22;
    param_5 = unaff_x19;
    (**(code **)(unaff_x24 + 0x68))(param_5,pCVar4,puVar10[-0xc]);
    pCVar4 = (Cache *)((ulong)unaff_x21 | 0x8000000000000000);
    DVar2.unknown = (OS_dispatch_queue *)0xd000000000000022;
  case (code *)0x60:
  case (code *)0x76:
    AVar1.value = (__int8)param_5;
    unaff_x20.unknown = (undefined *)puVar10[-0xd];
  case (code *)0x1c:
    label.bridgeObject = pCVar4;
    label.str = DVar2.unknown;
    auVar31._0_8_ =
         (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                   ((OS_dispatch_queue *)unaff_x20.unknown,label,(DispatchQoS)param_3,param_4,AVar1)
    ;
    DAT_100ff39d0 = auVar31._0_8_;
    auVar31._8_8_ = pCVar4;
    return auVar31;
  case (code *)0xb8:
  case (code *)0xc4:
  case (code *)0xc9:
    auVar28._8_8_ = &DAT_e700000000000000;
    auVar28._0_8_ = &DAT_54524241474953;
    return auVar28;
  case (code *)0xba:
    FUN_100316d7c();
    auVar27._8_8_ = pCVar4;
    auVar27._0_8_ = DVar2.unknown;
    return auVar27;
  case (code *)0xc7:
    auVar26._8_8_ = &DAT_e700000000000000;
    auVar26._0_8_ = &DAT_54524241474953;
    return auVar26;
  case (code *)0xcd:
    DVar2.unknown = *(undefined **)(pcVar7 + 0x6f8);
  case (code *)0xcc:
    if ((OS_dispatch_queue *)DVar2.unknown != (OS_dispatch_queue *)0x0) {
      auVar29._8_8_ = &DAT_e700000000000000;
      auVar29._0_8_ = DVar2.unknown;
      return auVar29;
    }
  case (code *)0xb6:
  case (code *)0xc2:
  case (code *)0xb2:
  case (code *)0xb5:
  case (code *)0xbe:
  case (code *)0xc1:
    DVar2.unknown = &DAT_100c8cf10;
    pCVar4 = (Cache *)&UNK_100f26000;
  case (code *)0xb9:
  case (code *)0xc5:
  case (code *)0xf4:
    pCVar4 = pCVar4 + 0x184;
    _swift_getWitnessTable(DVar2.unknown,pCVar4);
  case (code *)0xb1:
  case (code *)0xb7:
  case (code *)0xbd:
  case (code *)0xc3:
    pcVar7 = (code *)&DAT_100ff36f8;
  case (code *)0xca:
  case (code *)0xcb:
    *(undefined **)pcVar7 = DVar2.unknown;
  case (code *)0xc8:
    auVar30._8_8_ = pCVar4;
    auVar30._0_8_ = DVar2.unknown;
    return auVar30;
  case (code *)0xd0:
    return ZEXT816(0x545242414754db);
  case (code *)0xfc:
    pcVar7 = (code *)(ulong)DAT_e700000000000000;
  case (code *)0xb0:
  case (code *)0xbc:
    DAT_54524241474953 = (char)pcVar7;
    auVar25._8_8_ = &DAT_e700000000000000;
    auVar25._0_8_ = &DAT_54524241474953;
    return auVar25;
  }
}



/* Address: 0x1009db7e8 | FUN_1009db7e8 */

void FUN_1009db7e8(void)

{
  undefined1 *unaff_x20;
  
  FUN_1009db6c0(*unaff_x20);
  return;
}



/* Address: 0x1009db800 | switchD_1009db6f0::caseD_5a */

void switchD_1009db6f0::caseD_5a(void)

{
  undefined *puVar1;
  
  if (DAT_100ff36f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8cec4;
  _swift_getWitnessTable(&DAT_100c8cec4,&DAT_100f26b88);
  DAT_100ff36f0 = puVar1;
  return;
}



/* Address: 0x1009db804 | switchD_1009db6f0::caseD_5a */

void switchD_1009db6f0::caseD_5a(void)

{
  undefined *puVar1;
  
  if (DAT_100ff36f0 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8cec4;
  _swift_getWitnessTable(&DAT_100c8cec4,&DAT_100f26b88);
  DAT_100ff36f0 = puVar1;
  return;
}



/* Address: 0x1009db844 | switchD_1009db6f0::caseD_fc */

void switchD_1009db6f0::caseD_fc(undefined1 *param_1,undefined1 *param_2)

{
  *param_1 = *param_2;
  return;
}



/* Address: 0x1009db850 | switchD_1009db6f0::caseD_c7 */

void switchD_1009db6f0::caseD_c7(void)

{
  return;
}



/* Address: 0x1009db854 | FUN_1009db854 */

undefined1  [16] FUN_1009db854(void)

{
  return ZEXT816(0x100f26b88);
}



/* Address: 0x1009db864 | thunk_FUN_100316cec */

void thunk_FUN_100316cec(void)

{
  FUN_100316cec();
  return;
}



/* Address: 0x1009db868 | thunk_FUN_100316d7c */

void thunk_FUN_100316d7c(void)

{
  FUN_100316d7c();
  return;
}



/* Address: 0x1009db86c | FUN_1009db86c */

undefined1  [16] FUN_1009db86c(void)

{
  return ZEXT816(0x100f26c20);
}



/* Address: 0x1009db87c | thunk_FUN_1009db880 */

void thunk_FUN_1009db880(void)

{
  undefined *puVar1;
  
  if (DAT_100ff36f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8cf10;
  _swift_getWitnessTable(&DAT_100c8cf10,&DAT_100f26c20);
  DAT_100ff36f8 = puVar1;
  return;
}



/* Address: 0x1009db880 | FUN_1009db880 */

void FUN_1009db880(void)

{
  undefined *puVar1;
  
  if (DAT_100ff36f8 != (undefined *)0x0) {
    return;
  }
  puVar1 = &DAT_100c8cf10;
  _swift_getWitnessTable(&DAT_100c8cf10,&DAT_100f26c20);
  DAT_100ff36f8 = puVar1;
  return;
}



/* Address: 0x1009db8c0 | switchD_1009db6f0::caseD_ba */

void switchD_1009db6f0::caseD_ba(void)

{
  FUN_100316d7c();
  return;
}



/* Address: 0x1009db8c4 | thunk_FUN_100316cec */

void thunk_FUN_100316cec(void)

{
  FUN_100316cec();
  return;
}



/* Address: 0x1009db8c8 | FUN_1009db8c8 */

void FUN_1009db8c8(void)

{
  AutoreleaseFrequency AVar1;
  undefined7 extraout_var;
  Attributes AVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  Attributes attributes;
  long lVar9;
  String label;
  undefined1 auStack_80 [8];
  OS_dispatch_queue *local_78;
  long local_70;
  undefined *local_68;
  
  AVar1 = (extension_Dispatch)::__C::OS_dispatch_queue::AutoreleaseFrequency::typeMetadataAccessor()
  ;
  local_70 = CONCAT71(extraout_var,AVar1.value);
  lVar9 = *(long *)(local_70 + -8);
  puVar8 = auStack_80 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  AVar2 = Attributes::_typeMetadataAccessor();
  puVar5 = PTR__typeMetadataAccessor_100eae788;
  attributes.unknown =
       puVar8 + -(*(long *)(*(long *)(AVar2.unknown + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  DVar3 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar7 = *(long *)(*(long *)(DVar3.unknown + -8) + 0x40);
  DVar3.unknown = (undefined *)0x0;
  FUN_10000ec2c(0,&DAT_100ff39e0,&PTR__OBJC_CLASS___OS_dispatch_queue_100f8d6e8);
  local_78 = (OS_dispatch_queue *)DVar3.unknown;
  Dispatch::DispatchQoS::get_unspecified(DVar3);
  local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
  puVar4 = &DAT_100ff39e8;
  FUN_100003a00(&DAT_100ff39e8,puVar5,PTR__Dispatch__Attributes_>Swift__SetAlgebra_100eae798);
  puVar5 = &DAT_100ff39f0;
  FUN_1000f7830(&DAT_100ff39f0,&DAT_100c8d150);
  puVar6 = &DAT_100ff39f8;
  FUN_100155c48(&DAT_100ff39f8,&DAT_100ff39f0,&DAT_100c8d150);
  Swift::SetAlgebra::_init(attributes.unknown,&local_68,puVar5,puVar6,AVar2.unknown,puVar4);
  (**(code **)(lVar9 + 0x68))
            (puVar8,*(undefined4 *)
                     PTR___enum_case_for__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_inherit__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_Type___>__extension_in_Dispatch____C_OS_dispatch_queue_AutoreleaseFrequency_100eae7d0
             ,local_70);
  label.bridgeObject = (void *)0x8000000100db7c50;
  label.str = (char *)0xd000000000000022;
  DAT_100ff39d0 =
       (extension_Dispatch)::__C::OS_dispatch_queue::___allocating_init
                 (local_78,label,
                  (DispatchQoS)(attributes.unknown + -(lVar7 + 0xfU & 0xfffffffffffffff0)),
                  attributes,(AutoreleaseFrequency)(__int8)puVar8);
  return;
}



/* Address: 0x1009dba74 | switchD_1009db6f0::caseD_80 */

void switchD_1009db6f0::caseD_80(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009dba8c,0,0);
  return;
}



/* Address: 0x1009dba8c | FUN_1009dba8c */

void FUN_1009dba8c(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  FUN_1009df740(uVar3);
  _swift_bridgeObjectRelease(uVar3);
  FUN_1009df7b0(0);
  _swift_allocObject();
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)thunk_FUN_1009dbba4;
  FUN_1009dbf18(uVar1);
  return;
}



/* Address: 0x1009dbb0c | FUN_1009dbb0c */

void FUN_1009dbb0c(undefined8 param_1)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0x10) = param_1;
  _swift_task_switch(FUN_1009dbb24,0,0);
  return;
}



/* Address: 0x1009dbb24 | FUN_1009dbb24 */

void FUN_1009dbb24(void)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  long unaff_x22;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x10);
  uVar1 = uVar3;
  FUN_1009df740(uVar3);
  _swift_bridgeObjectRelease(uVar3);
  FUN_1009df7b0(0);
  _swift_allocObject();
  plVar2 = (long *)0xc0;
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x18) = plVar2;
  *plVar2 = unaff_x22;
  plVar2[1] = (long)FUN_1009dbba4;
  FUN_1009dbf18(uVar1);
  return;
}



/* Address: 0x1009dbba4 | FUN_1009dbba4 */

void FUN_1009dbba4(undefined8 param_1)

{
  long *unaff_x22;
  long lVar1;
  
  lVar1 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x18));
                    /* WARNING: Could not recover jumptable at 0x0001009dbbec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(lVar1 + 8))(param_1);
  return;
}



/* Address: 0x1009dbbf0 | FUN_1009dbbf0 */

/* WARNING: Removing unreachable block (ram,0x0001009dbc98) */

void FUN_1009dbbf0(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  
  plVar4 = *(long **)(param_2 + 0x10);
  lVar3 = *plVar4;
  lVar6 = *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  uVar5 = (ulong)*(uint *)(lVar3 + 0x30) + 7 & 0x1fffffff8;
  _swift_retain();
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar4 + uVar5));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009dbc94);
    (*pcVar1)();
  }
  FUN_1009debe0(param_1,(long)plVar4 + *(long *)(lVar3 + lVar6 + 0x10));
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar4 + uVar5));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009dbc98);
    (*pcVar1)();
  }
  lVar3 = 0;
  FUN_1009df7d0();
  *(long *)(param_1 + *(int *)(lVar3 + 0x14)) = param_2;
  return;
}



/* Address: 0x1009dbc9c | FUN_1009dbc9c */

void FUN_1009dbc9c(void)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1009dbd0c;
  Swift::AsyncStream::Iterator::_next((undefined *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009dbd0c | FUN_1009dbd0c */

void FUN_1009dbd0c(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0x10));
  _swift_task_switch(FUN_1009dbd5c,0,0);
  return;
}



/* Address: 0x1009dbd5c | FUN_1009dbd5c */

void FUN_1009dbd5c(void)

{
  long unaff_x22;
  
                    /* WARNING: Could not recover jumptable at 0x0001009dbd64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))(*(undefined1 *)(unaff_x22 + 0x18));
  return;
}



/* Address: 0x1009dbd68 | FUN_1009dbd68 */

void FUN_1009dbd68(Iterator param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)FUN_1005dfae0;
  Swift::AsyncStream::Iterator::_next(param_1);
  return;
}



/* Address: 0x1009dbde4 | FUN_1009dbde4 */

void FUN_1009dbde4(Iterator param_1)

{
  long *plVar1;
  long unaff_x22;
  
  plVar1 = (long *)(ulong)*(uint *)(PTR__next_100eaecc8 + 4);
  _swift_task_alloc();
  *(long **)(unaff_x22 + 0x10) = plVar1;
  FUN_1000f7830(&DAT_100ff3700,&DAT_100c8d000);
  *plVar1 = unaff_x22;
  plVar1[1] = (long)thunk_FUN_1005dfae0;
  Swift::AsyncStream::Iterator::_next(param_1);
  return;
}



/* Address: 0x1009dbe60 | FUN_1009dbe60 */

/* WARNING: Removing unreachable block (ram,0x0001009dbf14) */

void FUN_1009dbe60(long param_1)

{
  code *pcVar1;
  int iVar2;
  long *unaff_x20;
  long lVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  
  lVar3 = *unaff_x20;
  plVar5 = *(long **)(lVar3 + 0x10);
  lVar4 = *plVar5;
  lVar7 = *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  uVar6 = (ulong)*(uint *)(lVar4 + 0x30) + 7 & 0x1fffffff8;
  _swift_retain(lVar3);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar5 + uVar6));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009dbf10);
    (*pcVar1)();
  }
  FUN_1009debe0(param_1,(long)plVar5 + *(long *)(lVar4 + lVar7 + 0x10));
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar5 + uVar6));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009dbf14);
    (*pcVar1)();
  }
  _swift_release(lVar3);
  lVar4 = 0;
  FUN_1009df7d0();
  *(long *)(param_1 + *(int *)(lVar4 + 0x14)) = lVar3;
  return;
}



/* Address: 0x1009dbf18 | FUN_1009dbf18 */

void FUN_1009dbf18(undefined8 param_1)

{
  long lVar1;
  undefined8 unaff_x20;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  *(undefined8 *)(unaff_x22 + 0x78) = param_1;
  *(undefined8 *)(unaff_x22 + 0x80) = unaff_x20;
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1009dbf84,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009dbf84 | FUN_1009dbf84 */

/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_1009dbf84(void)

{
  ulong uVar1;
  uint uVar2;
  code *pcVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long *plVar10;
  long lVar11;
  ulong uVar12;
  undefined *puVar13;
  ulong uVar14;
  undefined8 uVar15;
  long unaff_x22;
  ulong *puVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  
  lVar11 = *(long *)PTR____stack_chk_guard_100ea82f0;
  puVar7 = *(undefined **)(unaff_x22 + 0x78);
  puVar16 = (ulong *)(puVar7 + 0x38);
  uVar12 = -1L << ((ulong)(byte)puVar7[0x20] & 0x3f);
  uVar18 = 0xffffffffffffffff;
  if (-uVar12 < 0x40) {
    uVar18 = ~(-1L << (-uVar12 & 0x3f));
  }
  uVar18 = uVar18 & *puVar16;
  puVar8 = puVar7;
  _swift_bridgeObjectRetain();
  puVar13 = PTR___swiftEmptyArrayStorage_100eae0d8;
  lVar19 = 0;
  do {
    *(undefined **)(unaff_x22 + 0x88) = puVar13;
    lVar17 = lVar19;
    while (uVar18 == 0) {
      bVar4 = SCARRY8(lVar17,1);
      lVar17 = lVar17 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1009dc48c);
        (*pcVar3)();
      }
      if ((long)(0x3f - uVar12 >> 6) <= lVar17) {
        uVar15 = *(undefined8 *)(unaff_x22 + 0x78);
        FUN_10000c650(puVar7,puVar16,~uVar12,lVar19,0);
        _swift_bridgeObjectRelease(uVar15);
        puVar7 = &DAT_100ff3850;
        FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
        *(undefined **)(unaff_x22 + 0x90) = puVar7;
        lVar17 = *(long *)(puVar7 + -8);
        *(long *)(unaff_x22 + 0x98) = lVar17;
        uVar18 = *(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc();
        *(ulong *)(unaff_x22 + 0xa0) = uVar18;
        *(undefined **)(unaff_x22 + 0x60) = puVar13;
        puVar8 = &DAT_100ff39b0;
        FUN_1000f7830(&DAT_100ff39b0,&DAT_100c8d128);
        lVar19 = *(long *)(puVar8 + -8);
        uVar12 = *(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0;
        _swift_task_alloc(uVar12);
        (**(code **)(lVar19 + 0x68))();
        Swift::AsyncStream::_init((BufferingPolicy)0x88);
        _swift_task_dealloc(uVar12);
        lVar19 = 0;
        FUN_1009e05f8();
        puVar9 = (undefined8 *)
                 (*(long *)(*(long *)(lVar19 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
        _swift_task_alloc();
        puVar8 = &DAT_100ff3848;
        FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
        (**(code **)(lVar17 + 0x10))((long)puVar9 + (long)*(int *)(puVar8 + 0x30),uVar18,puVar7);
        *puVar9 = puVar13;
        uVar15 = 0;
        FUN_1009dfe84(0);
        _swift_storeEnumTagMultiPayload(puVar9,uVar15,0);
        plVar10 = (long *)&DAT_100ff39b8;
        FUN_1000f7830(&DAT_100ff39b8,&DAT_100c8d130);
        _swift_allocObject();
        FUN_1000c495c(puVar9,(undefined *)
                             ((long)plVar10 +
                             *(long *)(*plVar10 +
                                       *(long *)
                                        PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8
                                      + 0x10)),FUN_1009e05f8);
        uVar2 = *(uint *)(*plVar10 + 0x30);
        *(undefined8 *)(unaff_x22 + 0x68) = 0;
        *(undefined8 *)(unaff_x22 + 0x70) = 0;
        _swift_bridgeObjectRetain(puVar13);
        _pthread_mutexattr_init((pthread_mutexattr_t *)(unaff_x22 + 0x68));
        iVar6 = _pthread_mutex_init((pthread_mutex_t *)
                                    ((long)plVar10 + ((ulong)uVar2 + 7 & 0x1fffffff8)),
                                    (pthread_mutexattr_t *)(unaff_x22 + 0x68));
        if (iVar6 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009dc490);
          (*pcVar3)();
        }
        lVar19 = *(long *)(unaff_x22 + 0x80);
        FUN_10005241c(puVar9,FUN_1009e05f8);
        _swift_task_dealloc(puVar9);
        *(long **)(lVar19 + 0x10) = plVar10;
        *(undefined **)(unaff_x22 + 0x20) = puVar13;
        *(long *)(unaff_x22 + 0x28) = lVar19;
        *(long *)(unaff_x22 + 0x40) = lVar19;
        *(undefined **)(unaff_x22 + 0x48) = puVar13;
        bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
        if ((bVar5 & 1) == 0) {
          pcVar3 = FUN_1009e1204;
          _swift_task_addCancellationHandler(FUN_1009e1204,unaff_x22 + 0x30);
          *(code **)(unaff_x22 + 0xb0) = pcVar3;
          plVar10 = (long *)0xf0;
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xb8) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_1009dc554;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
            FUN_1009dcc88();
            return;
          }
        }
        else {
          plVar10 = (long *)(ulong)*(uint *)(PTR__withTaskCancellationHandler_100eaefb8 + 4);
          _swift_task_alloc();
          *(long **)(unaff_x22 + 0xa8) = plVar10;
          *plVar10 = unaff_x22;
          plVar10[1] = (long)FUN_1009dc494;
          if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar11) {
            Swift::_withTaskCancellationHandler();
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        ___stack_chk_fail();
      }
      uVar18 = puVar16[lVar17];
    }
    uVar14 = (uVar18 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar18 & 0x5555555555555555) << 1;
    uVar14 = (uVar14 & 0xcccccccccccccccc) >> 2 | (uVar14 & 0x3333333333333333) << 2;
    uVar14 = (uVar14 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar14 & 0xf0f0f0f0f0f0f0f) << 4;
    uVar14 = (uVar14 & 0xff00ff00ff00ff00) >> 8 | (uVar14 & 0xff00ff00ff00ff) << 8;
    uVar14 = (uVar14 & 0xffff0000ffff0000) >> 0x10 | (uVar14 & 0xffff0000ffff) << 0x10;
    bVar5 = *(byte *)(*(long *)(puVar7 + 0x30) + LZCOUNT(uVar14 >> 0x20 | uVar14 << 0x20) +
                     lVar17 * 0x40);
    uVar2 = *(uint *)(&DAT_100c8d1e8 + (ulong)bVar5 * 4);
    uVar14 = (ulong)uVar2;
    Darwin::_get_SIG_IGN();
    _signal(uVar14,puVar8);
    FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
    if (DAT_100ff39c8 != -1) {
      _swift_once(&DAT_100ff39c8,FUN_1009db8c8);
    }
    (extension_Dispatch)::__C::OS_dispatch_source::_makeSignalSource(uVar2);
    _swift_dynamicCastObjCClassUnconditional(uVar14,&_OBJC_CLASS___OS_dispatch_source,0,0,0);
    puVar8 = puVar13;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar8 & 1) == 0) {
      puVar8 = (undefined *)0x0;
      FUN_1009df638(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13);
      puVar13 = puVar8;
    }
    uVar1 = *(ulong *)(puVar13 + 0x10);
    if (*(ulong *)(puVar13 + 0x18) >> 1 <= uVar1) {
      puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar13 + 0x18));
      FUN_1009df638(puVar8,uVar1 + 1,1,puVar13);
      puVar13 = puVar8;
    }
    uVar18 = uVar18 - 1 & uVar18;
    *(ulong *)(puVar13 + 0x10) = uVar1 + 1;
    *(ulong *)(puVar13 + uVar1 * 0x10 + 0x20) = uVar14;
    puVar13[uVar1 * 0x10 + 0x28] = bVar5;
    lVar19 = lVar17;
  } while( true );
}



/* Address: 0x1009dc494 | FUN_1009dc494 */

void FUN_1009dc494(void)

{
  long lVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  lVar2 = *unaff_x22;
  _swift_task_dealloc(*(undefined8 *)(lVar2 + 0xa8));
  if (unaff_x20 == 0) {
    _swift_bridgeObjectRelease(*(undefined8 *)(lVar2 + 0x88));
    if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
      _swift_task_switch(FUN_1009dc600,0,0);
      return;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_errorRelease();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009dc554 | FUN_1009dc554 */

void FUN_1009dc554(void)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  long *unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xb8));
  if (unaff_x20 == 0) {
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) goto LAB_1009dc5fc;
    pcVar1 = FUN_1009dc67c;
  }
  else {
    _swift_errorRelease();
    if (*(long *)PTR____stack_chk_guard_100ea82f0 != lVar2) {
LAB_1009dc5fc:
                    /* WARNING: Subroutine does not return */
      ___stack_chk_fail();
    }
    pcVar1 = FUN_1009dc6f4;
  }
  _swift_task_switch(pcVar1,0,0);
  return;
}



/* Address: 0x1009dc600 | FUN_1009dc600 */

void FUN_1009dc600(void)

{
  undefined8 uVar1;
  long lVar2;
  long unaff_x22;
  
  lVar2 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar1 = *(undefined8 *)(unaff_x22 + 0xa0);
  (**(code **)(*(long *)(unaff_x22 + 0x98) + 8))(uVar1,*(undefined8 *)(unaff_x22 + 0x90));
  _swift_task_dealloc(uVar1);
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar2) {
                    /* WARNING: Could not recover jumptable at 0x0001009dc674. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(*(undefined8 *)(unaff_x22 + 0x80));
}



/* Address: 0x1009dc67c | FUN_1009dc67c */

void FUN_1009dc67c(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x22 + 0x88));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    _swift_task_switch(FUN_1009dc600,0,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009dc6f4 | FUN_1009dc6f4 */

void FUN_1009dc6f4(void)

{
  long lVar1;
  long unaff_x22;
  
  lVar1 = *(long *)PTR____stack_chk_guard_100ea82f0;
  _swift_task_removeCancellationHandler(*(undefined8 *)(unaff_x22 + 0xb0));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == lVar1) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009dc754 | FUN_1009dc754 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009dc754(undefined8 param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  DispatchQoS qos;
  undefined1 *puVar3;
  DispatchWorkItemFlags DVar4;
  undefined *puVar5;
  undefined *puVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  Continuation_conflict CVar11;
  DispatchQoS DVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  code *pcVar17;
  ulong uVar18;
  ulong uVar19;
  long local_150;
  undefined *local_148;
  DispatchWorkItemFlags local_140;
  long local_138;
  undefined *local_130;
  DispatchQoS local_128;
  undefined8 local_120;
  code *local_118;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  code *local_f0;
  ulong local_e8;
  long local_e0;
  code *local_d8;
  ulong local_d0;
  undefined1 *local_c8;
  long local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  code *local_98;
  undefined *puStack_90;
  code *local_88;
  undefined *local_80;
  
  DVar4 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  lVar14 = *(long *)(DVar4.unknown + -8);
  puVar5 = (undefined *)((long)&local_150 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_148 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_150 = *(long *)(local_148 + -8);
  local_128.unknown = puVar5 + -(*(long *)(local_150 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_c0 = *(long *)(param_2 + 0x10);
  if (local_c0 == 0) {
    CVar11.unknown = &DAT_100ff3a28;
    FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
    Swift::AsyncStream::Continuation::finish(CVar11);
  }
  else {
    local_f8 = (undefined1 *)(param_2 + 0x28);
    puVar3 = local_128.unknown;
    local_140.unknown = puVar5;
    local_138 = lVar14;
    local_130 = DVar4.unknown;
    local_b8 = param_1;
    do {
      DVar12.unknown = *(undefined **)(local_f8 + -8);
      uVar1 = *local_f8;
      puVar5 = &DAT_100ff3a28;
      FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
      lVar15 = *(long *)(puVar5 + -8);
      lVar13 = *(long *)(lVar15 + 0x40);
      local_d0 = lVar13 + 0xfU & 0xfffffffffffffff0;
      lVar14 = (long)puVar3 - local_d0;
      local_d8 = *(code **)(lVar15 + 0x10);
      local_c8 = puVar3;
      (*local_d8)(lVar14,local_b8,puVar5);
      uVar18 = (ulong)*(byte *)(lVar15 + 0x50);
      uVar16 = uVar18 + 0x10 & (uVar18 ^ 0xffffffffffffffff);
      local_e0 = uVar16 + lVar13;
      uVar19 = local_e0 + 7U & 0xfffffffffffffff8;
      puVar6 = &DAT_100f26d80;
      local_e8 = uVar16;
      _swift_allocObject(&DAT_100f26d80,uVar19 + 9,uVar18 | 7);
      local_f0 = *(code **)(lVar15 + 0x20);
      (*local_f0)(puVar6 + uVar16,lVar14,puVar5);
      *(undefined **)(puVar6 + uVar19) = DVar12.unknown;
      *(undefined1 *)((long)(puVar6 + uVar19) + 8) = uVar1;
      local_88 = FUN_1009e12f0;
      local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
      local_a0 = 0x42000000;
      local_98 = FUN_100030410;
      puStack_90 = &DAT_100f26d98;
      local_80 = puVar6;
      pvVar7 = __Block_copy(&local_a8);
      qos.unknown = local_128.unknown;
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar6 = &DAT_100ff3a08;
      FUN_100003a00(&DAT_100ff3a08,PTR_typeMetadataAccessor_100eae670,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar8 = &DAT_100ff3a10;
      local_100 = puVar6;
      FUN_1000f7830(&DAT_100ff3a10,&DAT_100c8d160);
      puVar9 = &DAT_100ff3a18;
      local_108 = puVar8;
      FUN_100155c48(&DAT_100ff3a18,&DAT_100ff3a10,&DAT_100c8d160);
      puVar2 = local_130;
      DVar4.unknown = local_140.unknown;
      local_110 = puVar9;
      Swift::SetAlgebra::_init(local_140.unknown,&local_b0,puVar8,puVar9,local_130,puVar6);
      uVar10 = 0;
      FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
      local_120 = uVar10;
      (extension_Dispatch)::__C::OS_dispatch_source::_setEventHandler(qos,DVar4);
      __Block_release(pvVar7);
      local_118 = *(code **)(local_138 + 8);
      (*local_118)(DVar4.unknown,puVar2);
      puVar8 = local_148;
      pcVar17 = *(code **)(local_150 + 8);
      (*pcVar17)(qos.unknown,local_148);
      _swift_release(local_80);
      lVar14 = (long)local_c8 - local_d0;
      (*local_d8)(lVar14,local_b8,puVar5);
      puVar6 = &DAT_100f26dd0;
      _swift_allocObject(&DAT_100f26dd0,local_e0,uVar18 | 7);
      (*local_f0)(puVar6 + local_e8,lVar14,puVar5);
      local_88 = FUN_1009e13a8;
      local_a8 = PTR___NSConcreteStackBlock_100ea82a0;
      local_a0 = 0x42000000;
      local_98 = FUN_100030410;
      puStack_90 = &DAT_100f26de8;
      local_80 = puVar6;
      pvVar7 = __Block_copy(&local_a8);
      Dispatch::DispatchQoS::get_unspecified(DVar12);
      local_b0 = PTR___swiftEmptyArrayStorage_100eae0d8;
      Swift::SetAlgebra::_init(DVar4.unknown,&local_b0,local_108,local_110,puVar2,local_100);
      (extension_Dispatch)::__C::OS_dispatch_source::_setCancelHandler(qos,DVar4);
      __Block_release(pvVar7);
      (*local_118)(DVar4.unknown,puVar2);
      (*pcVar17)(qos.unknown,puVar8);
      _swift_release(local_80);
      local_f8 = local_f8 + 0x10;
      local_c0 = local_c0 + -1;
      puVar3 = local_c8;
    } while (local_c0 != 0);
  }
  return;
}



/* Address: 0x1009dcbe4 | FUN_1009dcbe4 */

void FUN_1009dcbe4(undefined8 param_1,undefined8 param_2,undefined1 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined1 auStack_50 [15];
  undefined1 local_41;
  
  puVar1 = &DAT_100ff3a30;
  FUN_1000f7830(&DAT_100ff3a30,&DAT_100c8d178);
  lVar4 = *(long *)(puVar1 + -8);
  lVar3 = *(long *)(lVar4 + 0x40);
  puVar2 = &DAT_100ff3a28;
  local_41 = param_3;
  FUN_1000f7830(&DAT_100ff3a28,&DAT_100c8d170);
  Swift::AsyncStream::Continuation::_yield
            (auStack_50 + -(lVar3 + 0xfU & 0xfffffffffffffff0),&local_41,puVar2);
  (**(code **)(lVar4 + 8))(auStack_50 + -(lVar3 + 0xfU & 0xfffffffffffffff0),puVar1);
  return;
}



/* Address: 0x1009dcc88 | FUN_1009dcc88 */

void FUN_1009dcc88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  long unaff_x22;
  
  *(undefined8 *)(unaff_x22 + 0xb0) = param_2;
  *(undefined8 *)(unaff_x22 + 0xb8) = param_3;
  _swift_task_switch(FUN_1009dcca0,0,0);
  return;
}



/* Address: 0x1009dcca0 | FUN_1009dcca0 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1009dcca0(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  byte bVar5;
  int iVar6;
  dispatch_object_t object;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  void *aBlock;
  DispatchQoS DVar16;
  DispatchQoS qos;
  DispatchWorkItemFlags DVar17;
  DispatchWorkItemFlags flags;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  long lVar23;
  code *pcVar24;
  DispatchQoS DVar25;
  long *plVar26;
  long unaff_x22;
  StaticString file;
  ulong uVar27;
  String isolation;
  String function;
  String SVar28;
  
  lVar20 = *(long *)(*(long *)(unaff_x22 + 0xb0) + 0x10);
  *(long *)(unaff_x22 + 0xc0) = lVar20;
  if (lVar20 == 0) {
                    /* WARNING: Could not recover jumptable at 0x0001009dcde4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar20 = *(long *)(unaff_x22 + 0xb8);
  bVar5 = Swift::_stdlib_isOSVersionAtLeastOrVariantVersionAtLeast(0xf,0,0,0x12,0,0);
  *(byte *)(unaff_x22 + 0x71) = bVar5 & 1;
  plVar26 = *(long **)(lVar20 + 0x10);
  *(long **)(unaff_x22 + 200) = plVar26;
  *(undefined8 *)(unaff_x22 + 0xd0) = 0;
  object = *(dispatch_object_t *)(*(long *)(unaff_x22 + 0xb0) + 0x20);
  *(dispatch_object_t *)(unaff_x22 + 0xd8) = object;
  uVar3 = *(undefined1 *)(*(long *)(unaff_x22 + 0xb0) + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(dispatch_object_t *)(unaff_x22 + 0x68) = object;
  *(undefined1 *)(unaff_x22 + 0x70) = uVar3;
  if ((bVar5 & 1) != 0) {
    plVar26 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar26;
    *plVar26 = unaff_x22;
    plVar26[1] = (long)FUN_1009dd3d0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar26;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009dd420;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar7 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar21 = *(long *)(puVar7 + -8);
  uVar19 = *(long *)(lVar21 + 0x40) + 0xf;
  uVar8 = uVar19 & 0xfffffffffffffff0;
  _swift_task_alloc();
  function.bridgeObject = (void *)0xee00293a736c616e;
  function.str = (char *)0x6769732874696e69;
  Swift::CheckedContinuation::init(continuation,function);
  lVar20 = 0;
  FUN_1009e122c();
  uVar15 = *(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xf;
  uVar9 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar20 = *(long *)(*plVar26 +
                     *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                    0x10);
  uVar27 = (ulong)*(uint *)(*plVar26 + 0x30) + 7 & 0x1fffffff8;
  iVar6 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar26 + uVar27));
  if (iVar6 != 0) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x1009dd3cc);
    (*pcVar24)();
  }
  puVar2 = (undefined8 *)((long)plVar26 + lVar20);
  file.unknown = (undefined *)0xd000000000000036;
  lVar20 = 0;
  FUN_1009dfe84();
  puVar10 = (undefined8 *)(*(long *)(*(long *)(lVar20 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  FUN_1000c495c(puVar2,puVar10,FUN_1009dfe84);
  puVar11 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar20);
  iVar6 = (int)puVar11;
  if (iVar6 < 2) {
    if (iVar6 != 0) {
      pcVar1 = "UnixSignals tried to register multiple signals at once";
LAB_1009dd05c:
      SVar28.bridgeObject = (void *)0x2;
      SVar28.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar28,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdb7bb0);
      return;
    }
    uVar22 = *puVar10;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    puVar14 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar23 = *(long *)(puVar14 + -8);
    uVar12 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar12);
    pcVar24 = *(code **)(lVar23 + 0x20);
    (*pcVar24)();
    FUN_10005241c(puVar2,FUN_1009dfe84);
    puVar13 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar6 = *(int *)(puVar13 + 0x30);
    iVar4 = *(int *)(puVar13 + 0x40);
    *puVar2 = uVar22;
    (*pcVar24)((long)puVar2 + (long)iVar6,uVar12,puVar14);
    (**(code **)(lVar21 + 0x10))((long)puVar2 + (long)iVar4,uVar8,puVar7);
    _swift_storeEnumTagMultiPayload(puVar2,lVar20,1);
    (**(code **)(lVar21 + 0x38))(uVar9,1,1,puVar7);
    _swift_task_dealloc(uVar12);
  }
  else {
    if (iVar6 == 2) {
      pcVar1 = "UnixSignals tried to create an iterator before the init was done";
      file.unknown = (undefined *)0xd000000000000040;
      goto LAB_1009dd05c;
    }
    (**(code **)(lVar21 + 0x10))(uVar9,uVar8,puVar7);
    (**(code **)(lVar21 + 0x38))(uVar9,0,1,puVar7);
    puVar14 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar14 + -8) + 8))(puVar10,puVar14);
  }
  _swift_task_dealloc(puVar10);
  iVar6 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar26 + uVar27));
  if (iVar6 == 0) {
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_1000c495c(uVar9,uVar15,FUN_1009e122c);
    uVar27 = uVar15;
    (**(code **)(lVar21 + 0x30))(uVar15,1,puVar7);
    if ((int)uVar27 == 1) {
      DVar25.unknown = *(undefined **)(unaff_x22 + 0xb8);
      *(code **)(unaff_x22 + 0x98) = FUN_1009e1240;
      *(undefined **)(unaff_x22 + 0xa0) = DVar25.unknown;
      *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_100ea82a0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
      *(code **)(unaff_x22 + 0x88) = FUN_100030410;
      *(undefined **)(unaff_x22 + 0x90) = &DAT_100f26d20;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x78));
      DVar16 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar20 = *(long *)(DVar16.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar20 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(DVar25);
      DVar17 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar13 = PTR_typeMetadataAccessor_100eae670;
      lVar23 = *(long *)(DVar17.unknown + -8);
      flags.unknown = (undefined *)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0xa8) = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar14 = &DAT_100ff3a08;
      FUN_100003a00(&DAT_100ff3a08,puVar13,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar13 = &DAT_100ff3a10;
      FUN_1000f7830(&DAT_100ff3a10,&DAT_100c8d160);
      puVar18 = &DAT_100ff3a18;
      FUN_100155c48(&DAT_100ff3a18,&DAT_100ff3a10,&DAT_100c8d160);
      Swift::SetAlgebra::_init
                (flags.unknown,unaff_x22 + 0xa8,puVar13,puVar18,DVar17.unknown,puVar14);
      FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
      (extension_Dispatch)::__C::OS_dispatch_source::_setRegistrationHandler(qos,flags);
      __Block_release(aBlock);
      (**(code **)(lVar23 + 8))(flags.unknown,DVar17.unknown);
      (**(code **)(lVar20 + 8))(qos.unknown,DVar16.unknown);
      _swift_task_dealloc(flags.unknown);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
      _dispatch_resume(object);
      FUN_10005241c(uVar9,FUN_1009e122c);
    }
    else {
      uVar19 = uVar19 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar19);
      (**(code **)(lVar21 + 0x20))();
      Swift::CheckedContinuation::resume();
      (**(code **)(lVar21 + 8))(uVar19,puVar7);
      FUN_10005241c(uVar9,FUN_1009e122c);
      _swift_task_dealloc(uVar19);
    }
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
    (**(code **)(lVar21 + 8))(uVar8,puVar7);
    _swift_task_dealloc(uVar8);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar24 = (code *)SoftwareBreakpoint(1,0x1009dd3d0);
  (*pcVar24)();
}



/* Address: 0x1009dd3d0 | FUN_1009dd3d0 */

void FUN_1009dd3d0(void)

{
  long *unaff_x22;
  
  _swift_task_dealloc(*(undefined8 *)(*unaff_x22 + 0xe0));
  _swift_task_switch(FUN_1009dd468,0,0);
  return;
}



/* Address: 0x1009dd420 | FUN_1009dd420 */

void FUN_1009dd420(void)

{
  _swift_task_switch(FUN_1009dd468,0,0);
  return;
}



/* Address: 0x1009dd468 | FUN_1009dd468 */

/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1009dd468(void)

{
  char *pcVar1;
  undefined8 *puVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  dispatch_object_t object;
  UnsafeContinuation<undefined,undefined> continuation;
  undefined *puVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  ulong uVar12;
  undefined *puVar13;
  undefined *puVar14;
  ulong uVar15;
  void *aBlock;
  DispatchQoS DVar16;
  DispatchQoS qos;
  DispatchWorkItemFlags DVar17;
  DispatchWorkItemFlags flags;
  undefined *puVar18;
  ulong uVar19;
  long lVar20;
  undefined8 uVar21;
  long *plVar22;
  long lVar23;
  code *pcVar24;
  DispatchQoS DVar25;
  ulong uVar26;
  long unaff_x22;
  StaticString file;
  String isolation;
  String function;
  String SVar27;
  
  if (*(long *)(unaff_x22 + 0xd0) + 1 == *(long *)(unaff_x22 + 0xc0)) {
                    /* WARNING: Could not recover jumptable at 0x0001009dd4d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(unaff_x22 + 8))();
    return;
  }
  lVar8 = *(long *)(unaff_x22 + 0xd0) + 1;
  *(long *)(unaff_x22 + 0xd0) = lVar8;
  lVar8 = *(long *)(unaff_x22 + 0xb0) + lVar8 * 0x10;
  object = *(dispatch_object_t *)(lVar8 + 0x20);
  *(dispatch_object_t *)(unaff_x22 + 0xd8) = object;
  uVar3 = *(undefined1 *)(lVar8 + 0x28);
  *(undefined8 *)(unaff_x22 + 0x60) = *(undefined8 *)(unaff_x22 + 0xb8);
  *(dispatch_object_t *)(unaff_x22 + 0x68) = object;
  *(undefined1 *)(unaff_x22 + 0x70) = uVar3;
  if ((*(byte *)(unaff_x22 + 0x71) & 1) != 0) {
    plVar22 = (long *)(ulong)*(uint *)(PTR__withCheckedContinuation_100eaef98 + 4);
    _swift_task_alloc();
    *(long **)(unaff_x22 + 0xe0) = plVar22;
    *plVar22 = unaff_x22;
    plVar22[1] = (long)FUN_1009dd3d0;
    isolation.bridgeObject = (void *)0x0;
    isolation.str = (char *)plVar22;
    Swift::_withCheckedContinuation(isolation);
    return;
  }
  plVar22 = *(long **)(unaff_x22 + 200);
  *(long *)(unaff_x22 + 0x10) = unaff_x22;
  *(code **)(unaff_x22 + 0x18) = FUN_1009dd420;
  continuation.unknown = (undefined *)(unaff_x22 + 0x10);
  _swift_continuation_init(continuation.unknown,0);
  puVar6 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar20 = *(long *)(puVar6 + -8);
  uVar19 = *(long *)(lVar20 + 0x40) + 0xf;
  uVar7 = uVar19 & 0xfffffffffffffff0;
  _swift_task_alloc();
  function.bridgeObject = (void *)0xee00293a736c616e;
  function.str = (char *)0x6769732874696e69;
  Swift::CheckedContinuation::init(continuation,function);
  lVar8 = 0;
  FUN_1009e122c();
  uVar15 = *(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xf;
  uVar9 = uVar15 & 0xfffffffffffffff0;
  _swift_task_alloc();
  lVar8 = *(long *)(*plVar22 +
                    *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8 +
                   0x10);
  uVar26 = (ulong)*(uint *)(*plVar22 + 0x30) + 7 & 0x1fffffff8;
  iVar5 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar22 + uVar26));
  if (iVar5 != 0) {
                    /* WARNING: Does not return */
    pcVar24 = (code *)SoftwareBreakpoint(1,0x1009ddb80);
    (*pcVar24)();
  }
  puVar2 = (undefined8 *)((long)plVar22 + lVar8);
  file.unknown = (undefined *)0xd000000000000036;
  lVar8 = 0;
  FUN_1009dfe84();
  puVar10 = (undefined8 *)(*(long *)(*(long *)(lVar8 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_task_alloc();
  FUN_1000c495c(puVar2,puVar10,FUN_1009dfe84);
  puVar11 = puVar10;
  _swift_getEnumCaseMultiPayload(puVar10,lVar8);
  iVar5 = (int)puVar11;
  if (iVar5 < 2) {
    if (iVar5 != 0) {
      pcVar1 = "UnixSignals tried to register multiple signals at once";
LAB_1009dd810:
      SVar27.bridgeObject = (void *)0x2;
      SVar27.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar27,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdb7bb0);
      return;
    }
    uVar21 = *puVar10;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    puVar14 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar23 = *(long *)(puVar14 + -8);
    uVar12 = *(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0;
    _swift_task_alloc(uVar12);
    pcVar24 = *(code **)(lVar23 + 0x20);
    (*pcVar24)();
    FUN_10005241c(puVar2,FUN_1009dfe84);
    puVar13 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar5 = *(int *)(puVar13 + 0x30);
    iVar4 = *(int *)(puVar13 + 0x40);
    *puVar2 = uVar21;
    (*pcVar24)((long)puVar2 + (long)iVar5,uVar12,puVar14);
    (**(code **)(lVar20 + 0x10))((long)puVar2 + (long)iVar4,uVar7,puVar6);
    _swift_storeEnumTagMultiPayload(puVar2,lVar8,1);
    (**(code **)(lVar20 + 0x38))(uVar9,1,1,puVar6);
    _swift_task_dealloc(uVar12);
  }
  else {
    if (iVar5 == 2) {
      pcVar1 = "UnixSignals tried to create an iterator before the init was done";
      file.unknown = (undefined *)0xd000000000000040;
      goto LAB_1009dd810;
    }
    (**(code **)(lVar20 + 0x10))(uVar9,uVar7,puVar6);
    (**(code **)(lVar20 + 0x38))(uVar9,0,1,puVar6);
    puVar14 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar14 + -8) + 8))(puVar10,puVar14);
  }
  _swift_task_dealloc(puVar10);
  iVar5 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar22 + uVar26));
  if (iVar5 == 0) {
    uVar15 = uVar15 & 0xfffffffffffffff0;
    _swift_task_alloc();
    FUN_1000c495c(uVar9,uVar15,FUN_1009e122c);
    uVar26 = uVar15;
    (**(code **)(lVar20 + 0x30))(uVar15,1,puVar6);
    if ((int)uVar26 == 1) {
      DVar25.unknown = *(undefined **)(unaff_x22 + 0xb8);
      *(code **)(unaff_x22 + 0x98) = FUN_1009e1240;
      *(undefined **)(unaff_x22 + 0xa0) = DVar25.unknown;
      *(undefined **)(unaff_x22 + 0x78) = PTR___NSConcreteStackBlock_100ea82a0;
      *(undefined8 *)(unaff_x22 + 0x80) = 0x42000000;
      *(code **)(unaff_x22 + 0x88) = FUN_100030410;
      *(undefined **)(unaff_x22 + 0x90) = &DAT_100f26d20;
      aBlock = __Block_copy((void *)(unaff_x22 + 0x78));
      DVar16 = Dispatch::DispatchQoS::typeMetadataAccessor();
      lVar8 = *(long *)(DVar16.unknown + -8);
      qos.unknown = (undefined *)(*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      _swift_retain();
      Dispatch::DispatchQoS::get_unspecified(DVar25);
      DVar17 = Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
      puVar13 = PTR_typeMetadataAccessor_100eae670;
      lVar23 = *(long *)(DVar17.unknown + -8);
      flags.unknown = (undefined *)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
      _swift_task_alloc();
      *(undefined **)(unaff_x22 + 0xa8) = PTR___swiftEmptyArrayStorage_100eae0d8;
      puVar14 = &DAT_100ff3a08;
      FUN_100003a00(&DAT_100ff3a08,puVar13,
                    PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
      puVar13 = &DAT_100ff3a10;
      FUN_1000f7830(&DAT_100ff3a10,&DAT_100c8d160);
      puVar18 = &DAT_100ff3a18;
      FUN_100155c48(&DAT_100ff3a18,&DAT_100ff3a10,&DAT_100c8d160);
      Swift::SetAlgebra::_init
                (flags.unknown,unaff_x22 + 0xa8,puVar13,puVar18,DVar17.unknown,puVar14);
      FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
      (extension_Dispatch)::__C::OS_dispatch_source::_setRegistrationHandler(qos,flags);
      __Block_release(aBlock);
      (**(code **)(lVar23 + 8))(flags.unknown,DVar17.unknown);
      (**(code **)(lVar8 + 8))(qos.unknown,DVar16.unknown);
      _swift_task_dealloc(flags.unknown);
      _swift_task_dealloc(qos.unknown);
      _swift_release(*(undefined8 *)(unaff_x22 + 0xa0));
      _dispatch_resume(object);
      FUN_10005241c(uVar9,FUN_1009e122c);
    }
    else {
      uVar19 = uVar19 & 0xfffffffffffffff0;
      _swift_task_alloc(uVar19);
      (**(code **)(lVar20 + 0x20))();
      Swift::CheckedContinuation::resume();
      (**(code **)(lVar20 + 8))(uVar19,puVar6);
      FUN_10005241c(uVar9,FUN_1009e122c);
      _swift_task_dealloc(uVar19);
    }
    _swift_task_dealloc(uVar15);
    _swift_task_dealloc(uVar9);
    (**(code **)(lVar20 + 8))(uVar7,puVar6);
    _swift_task_dealloc(uVar7);
    _swift_continuation_await(unaff_x22 + 0x10);
    return;
  }
                    /* WARNING: Does not return */
  pcVar24 = (code *)SoftwareBreakpoint(1,0x1009ddb84);
  (*pcVar24)();
}



/* Address: 0x1009ddb84 | FUN_1009ddb84 */

/* WARNING: Removing unreachable block (ram,0x0001009ddeb0) */

void FUN_1009ddb84(undefined8 param_1,DispatchQoS param_2,dispatch_object_t param_3)

{
  undefined *puVar1;
  dispatch_object_t object;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined *puVar5;
  void *aBlock;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  DispatchWorkItemFlags flags;
  long lVar11;
  DispatchQoS qos;
  long lVar12;
  undefined1 auStack_d0 [8];
  long local_c8;
  undefined *puStack_c0;
  long local_b8;
  undefined *local_b0;
  dispatch_object_t local_a8;
  undefined *local_a0;
  undefined *local_98;
  undefined8 local_90;
  code *local_88;
  undefined *puStack_80;
  code *local_78;
  undefined *local_70;
  
  local_a8 = param_3;
  local_b0 = (undefined *)Dispatch::DispatchWorkItemFlags::typeMetadataAccessor();
  local_b8 = *(long *)(local_b0 + -8);
  flags.unknown = auStack_d0 + -(*(long *)(local_b8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puStack_c0 = (undefined *)Dispatch::DispatchQoS::typeMetadataAccessor();
  local_c8 = *(long *)(puStack_c0 + -8);
  qos.unknown = flags.unknown + -(*(long *)(local_c8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  FUN_1009e122c();
  uVar8 = *(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar12 = (long)qos.unknown - uVar8;
  lVar4 = lVar12 - uVar8;
  plVar9 = *(long **)(param_2.unknown + 0x10);
  lVar11 = *plVar9;
  lVar10 = *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  uVar8 = (ulong)*(uint *)(lVar11 + 0x30) + 7 & 0x1fffffff8;
  iVar3 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar9 + uVar8));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ddeac);
    (*pcVar2)();
  }
  FUN_1009ddeb4(lVar4,(long)plVar9 + *(long *)(lVar11 + lVar10 + 0x10),param_1);
  iVar3 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar9 + uVar8));
  if (iVar3 != 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1009ddeb0);
    (*pcVar2)();
  }
  FUN_1000c495c(lVar4,lVar12,FUN_1009e122c);
  puVar5 = &DAT_100ff3860;
  FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
  lVar11 = *(long *)(puVar5 + -8);
  lVar10 = lVar12;
  (**(code **)(lVar11 + 0x30))(lVar12,1,puVar5);
  if ((int)lVar10 == 1) {
    local_78 = thunk_FUN_1009e1240;
    local_98 = PTR___NSConcreteStackBlock_100ea82a0;
    local_90 = 0x42000000;
    local_88 = FUN_100030410;
    puStack_80 = &DAT_100f26d48;
    local_70 = param_2.unknown;
    aBlock = __Block_copy(&local_98);
    _swift_retain();
    Dispatch::DispatchQoS::get_unspecified(param_2);
    local_a0 = PTR___swiftEmptyArrayStorage_100eae0d8;
    puVar5 = &DAT_100ff3a08;
    FUN_100003a00(&DAT_100ff3a08,PTR_typeMetadataAccessor_100eae670,
                  PTR_Dispatch__Dispatch__DispatchWorkItemFlags_>Swift__SetAlgebra_100eae680);
    puVar6 = &DAT_100ff3a10;
    FUN_1000f7830(&DAT_100ff3a10,&DAT_100c8d160);
    puVar7 = &DAT_100ff3a18;
    FUN_100155c48(&DAT_100ff3a18,&DAT_100ff3a10,&DAT_100c8d160);
    puVar1 = local_b0;
    Swift::SetAlgebra::_init(flags.unknown,&local_a0,puVar6,puVar7,local_b0,puVar5);
    FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
    object = local_a8;
    (extension_Dispatch)::__C::OS_dispatch_source::_setRegistrationHandler(qos,flags);
    __Block_release(aBlock);
    (**(code **)(local_b8 + 8))(flags.unknown,puVar1);
    (**(code **)(local_c8 + 8))(qos.unknown,puStack_c0);
    _swift_release(local_70);
    _dispatch_resume(object);
    FUN_10005241c(lVar4,FUN_1009e122c);
  }
  else {
    lVar10 = lVar4 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar11 + 0x20))(lVar10,lVar12,puVar5);
    Swift::CheckedContinuation::resume();
    (**(code **)(lVar11 + 8))(lVar10,puVar5);
    FUN_10005241c(lVar4,FUN_1009e122c);
  }
  return;
}



/* Address: 0x1009ddeb4 | FUN_1009ddeb4 */

void FUN_1009ddeb4(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  StaticString file;
  code *pcVar8;
  undefined8 *puVar9;
  long lVar10;
  String SVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 *local_70 [2];
  
  lVar4 = 0;
  FUN_1009dfe84();
  lVar10 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)local_70 + lVar10);
  FUN_1000c495c(param_2,puVar9,FUN_1009dfe84);
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    if (iVar3 != 0) {
      pcVar1 = "UnixSignals tried to register multiple signals at once";
      *(undefined4 *)((long)auStack_78 + lVar10) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar10) = 0xe9;
      file.unknown = (undefined *)0xd000000000000036;
LAB_1009de17c:
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar11,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdb7bb0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009de190);
      (*pcVar8)();
    }
    local_70[0] = (undefined8 *)*puVar9;
    puVar7 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar3 = *(int *)(puVar7 + 0x30);
    puVar7 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar10 = (long)puVar9 - (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    pcVar8 = *(code **)(*(long *)(puVar7 + -8) + 0x20);
    local_70[1] = puVar9;
    (*pcVar8)(lVar10,(long)puVar9 + (long)iVar3,puVar7);
    FUN_10005241c(param_2,FUN_1009dfe84);
    puVar6 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar3 = *(int *)(puVar6 + 0x30);
    iVar2 = *(int *)(puVar6 + 0x40);
    *param_2 = local_70[0];
    (*pcVar8)((long)param_2 + (long)iVar3,lVar10,puVar7);
    puVar7 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    lVar10 = *(long *)(puVar7 + -8);
    (**(code **)(lVar10 + 0x10))((long)param_2 + (long)iVar2,param_3,puVar7);
    _swift_storeEnumTagMultiPayload(param_2,lVar4,1);
    (**(code **)(lVar10 + 0x38))(param_1,1,1,puVar7);
  }
  else {
    if (iVar3 != 3) {
      pcVar1 = "UnixSignals tried to create an iterator before the init was done";
      *(undefined4 *)((long)auStack_78 + lVar10) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar10) = 0xec;
      file.unknown = (undefined *)0xd000000000000040;
      goto LAB_1009de17c;
    }
    puVar7 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    lVar10 = *(long *)(puVar7 + -8);
    (**(code **)(lVar10 + 0x10))(param_1,param_3,puVar7);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,puVar7);
    puVar7 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar7 + -8) + 8))(puVar9,puVar7);
  }
  return;
}



/* Address: 0x1009de190 | FUN_1009de190 */

/* WARNING: Removing unreachable block (ram,0x0001009de340) */

void FUN_1009de190(long param_1)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  long lVar6;
  undefined1 *puVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  undefined1 auStack_50 [16];
  
  puVar3 = &DAT_100ff3a20;
  FUN_1000f7830(&DAT_100ff3a20,&DAT_100c8d168);
  uVar5 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar7 = auStack_50 + -uVar5;
  lVar6 = (long)puVar7 - uVar5;
  plVar9 = *(long **)(param_1 + 0x10);
  lVar8 = *plVar9;
  lVar10 = *(long *)PTR___class_metadata_base_offset_for_Swift_ManagedBuffer_100eacfd8;
  uVar5 = (ulong)*(uint *)(lVar8 + 0x30) + 7 & 0x1fffffff8;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar9 + uVar5));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009de33c);
    (*pcVar1)();
  }
  FUN_1009de344(lVar6,(long)plVar9 + *(long *)(lVar8 + lVar10 + 0x10));
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar9 + uVar5));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009de340);
    (*pcVar1)();
  }
  FUN_1000f8cac(lVar6,puVar7,&DAT_100ff3a20,&DAT_100c8d168);
  lVar8 = 0;
  FUN_1009e1264();
  puVar4 = puVar7;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(puVar7,1,lVar8);
  if ((int)puVar4 == 1) {
    FUN_1000fb4c4(lVar6,&DAT_100ff3a20,&DAT_100c8d168);
  }
  else {
    puVar3 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    lVar10 = *(long *)(puVar3 + -8);
    lVar8 = lVar6 - (*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar10 + 0x20))(lVar8,puVar7,puVar3);
    Swift::CheckedContinuation::resume();
    (**(code **)(lVar10 + 8))(lVar8,puVar3);
    FUN_1000fb4c4(lVar6,&DAT_100ff3a20,&DAT_100c8d168);
  }
  return;
}



/* Address: 0x1009de344 | FUN_1009de344 */

void FUN_1009de344(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  StaticString file;
  undefined8 *puVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 *local_70 [2];
  
  lVar4 = 0;
  FUN_1009dfe84();
  lVar9 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar8 = (undefined8 *)((long)local_70 + lVar9);
  FUN_1000c495c(param_2,puVar8,FUN_1009dfe84);
  puVar5 = puVar8;
  _swift_getEnumCaseMultiPayload(puVar8,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 3) {
    if (iVar3 != 1) {
      if (iVar3 == 0) {
        pcVar1 = "UnixSignals tried to register signals more than once";
        *(undefined4 *)((long)auStack_78 + lVar9) = 0;
        *(undefined8 *)((long)&uStack_80 + lVar9) = 0xfa;
        file.unknown = (undefined *)0xd000000000000034;
      }
      else {
        pcVar1 = "UnixSignals tried to create an iterator before the init was done";
        *(undefined4 *)((long)auStack_78 + lVar9) = 0;
        *(undefined8 *)((long)&uStack_80 + lVar9) = 0x102;
        file.unknown = (undefined *)0xd000000000000040;
      }
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar11,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdb7bb0);
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x1009de600);
      (*pcVar10)();
    }
    local_70[0] = (undefined8 *)*puVar8;
    puVar7 = &DAT_100ff3858;
    FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
    iVar3 = *(int *)(puVar7 + 0x30);
    iVar2 = *(int *)(puVar7 + 0x40);
    puVar7 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar9 = (long)puVar8 - (*(long *)(*(long *)(puVar7 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    pcVar10 = *(code **)(*(long *)(puVar7 + -8) + 0x20);
    local_70[1] = puVar8;
    (*pcVar10)(lVar9,(long)puVar8 + (long)iVar3,puVar7);
    puVar6 = &DAT_100ff3860;
    FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
    (**(code **)(*(long *)(puVar6 + -8) + 0x20))(param_1,(long)puVar8 + (long)iVar2,puVar6);
    FUN_10005241c(param_2,FUN_1009dfe84);
    puVar6 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar3 = *(int *)(puVar6 + 0x30);
    *param_2 = local_70[0];
    (*pcVar10)((long)param_2 + (long)iVar3,lVar9,puVar7);
    _swift_storeEnumTagMultiPayload(param_2,lVar4,0);
    lVar9 = 0;
    FUN_1009e1264();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,0,1,lVar9);
  }
  else {
    lVar9 = 0;
    FUN_1009e1264();
    (**(code **)(*(long *)(lVar9 + -8) + 0x38))(param_1,1,1,lVar9);
    puVar7 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar7 + -8) + 8))(puVar8,puVar7);
  }
  return;
}



/* Address: 0x1009de600 | FUN_1009de600 */

/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1009de600(long param_1,long param_2)

{
  code *pcVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long lVar9;
  long *plVar10;
  long lVar11;
  
  puVar3 = &DAT_100ff3a00;
  FUN_1000f7830(&DAT_100ff3a00,&DAT_100c8d158);
  uVar6 = *(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar8 = &stack0xffffffffffffffa0 + -uVar6;
  lVar7 = (long)puVar8 - uVar6;
  plVar10 = *(long **)(param_1 + 0x10);
  uVar6 = (ulong)*(uint *)(*plVar10 + 0x30) + 7 & 0x1fffffff8;
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)((long)plVar10 + uVar6));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009de868);
    (*pcVar1)();
  }
  FUN_1009de86c(lVar7);
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)((long)plVar10 + uVar6));
  if (iVar2 == 0) {
    FUN_1000f8cac(lVar7,puVar8,&DAT_100ff3a00,&DAT_100c8d158);
    lVar4 = 0;
    FUN_1009e120c();
    puVar5 = puVar8;
    (**(code **)(*(long *)(lVar4 + -8) + 0x30))(puVar8,1,lVar4);
    if ((int)puVar5 != 1) {
      puVar3 = &DAT_100ff3860;
      FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
      lVar4 = *(long *)(puVar3 + -8);
      puVar5 = puVar8;
      (**(code **)(lVar4 + 0x30))(puVar8,1,puVar3);
      if ((int)puVar5 != 1) {
        lVar11 = lVar7 - (*(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0);
        (**(code **)(lVar4 + 0x20))(lVar11,puVar8,puVar3);
        Swift::CheckedContinuation::resume();
        lVar9 = *(long *)(param_2 + 0x10);
        if (lVar9 != 0) {
          FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
          do {
            (extension_Dispatch)::__C::OS_dispatch_source::cancel();
            lVar9 = lVar9 + -1;
          } while (lVar9 != 0);
        }
        (**(code **)(lVar4 + 8))(lVar11,puVar3);
        FUN_1000fb4c4(lVar7,&DAT_100ff3a00,&DAT_100c8d158);
        return;
      }
      lVar4 = *(long *)(param_2 + 0x10);
      if (lVar4 != 0) {
        FUN_10000ec2c(0,&DAT_100ff39c0,&PTR__OBJC_CLASS___OS_dispatch_source_100f8dcf0);
        do {
          (extension_Dispatch)::__C::OS_dispatch_source::cancel();
          lVar4 = lVar4 + -1;
        } while (lVar4 != 0);
      }
    }
    FUN_1000fb4c4(lVar7,&DAT_100ff3a00,&DAT_100c8d158);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009de86c);
  (*pcVar1)();
}



/* Address: 0x1009de86c | FUN_1009de86c */

void FUN_1009de86c(undefined8 param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  code *pcVar8;
  String SVar9;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 *apuStack_70 [2];
  
  lVar3 = 0;
  FUN_1009dfe84();
  lVar5 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)apuStack_70 + lVar5);
  FUN_1000c495c();
  puVar4 = puVar7;
  _swift_getEnumCaseMultiPayload(puVar7,lVar3);
  iVar2 = (int)puVar4;
  if (iVar2 < 2) {
    if (iVar2 == 0) {
      _swift_bridgeObjectRelease(*puVar7);
      puVar6 = &DAT_100ff3848;
      FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
      iVar2 = *(int *)(puVar6 + 0x30);
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar8 = *(code **)(*(long *)(puVar6 + -8) + 0x20);
      (*pcVar8)((long)puVar7 -
                (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),
                (long)puVar7 + (long)iVar2,puVar6);
      FUN_10005241c();
      (*pcVar8)();
      _swift_storeEnumTagMultiPayload();
      puVar6 = &DAT_100ff3860;
      FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
      (**(code **)(*(long *)(puVar6 + -8) + 0x38))(param_1,1,1,puVar6);
      lVar5 = 0;
      FUN_1009e120c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    }
    else {
      _swift_bridgeObjectRelease(*puVar7);
      puVar6 = &DAT_100ff3858;
      FUN_1000f7830(&DAT_100ff3858,&DAT_100c8d0f8);
      iVar2 = *(int *)(puVar6 + 0x30);
      iVar1 = *(int *)(puVar6 + 0x40);
      puVar6 = &DAT_100ff3850;
      FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
      pcVar8 = *(code **)(*(long *)(puVar6 + -8) + 0x20);
      apuStack_70[1] = puVar7;
      (*pcVar8)((long)puVar7 -
                (*(long *)(*(long *)(puVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0),
                (long)puVar7 + (long)iVar2,puVar6);
      puVar6 = &DAT_100ff3860;
      FUN_1000f7830(&DAT_100ff3860,&DAT_100c8d100);
      lVar5 = *(long *)(puVar6 + -8);
      (**(code **)(lVar5 + 0x20))(param_1,(long)puVar7 + (long)iVar1,puVar6);
      FUN_10005241c();
      (*pcVar8)();
      _swift_storeEnumTagMultiPayload();
      (**(code **)(lVar5 + 0x38))(param_1,0,1,puVar6);
      lVar5 = 0;
      FUN_1009e120c();
      (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,0,1,lVar5);
    }
  }
  else {
    if (iVar2 != 2) {
      *(undefined4 *)((long)auStack_78 + lVar5) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar5) = 0x124;
      SVar9.bridgeObject = (void *)0x2;
      SVar9.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar9,(StaticString)0xd000000000000031,0x8000000100db7c80
                 ,0xdb7bb0);
                    /* WARNING: Does not return */
      pcVar8 = (code *)SoftwareBreakpoint(1,0x1009debe0);
      (*pcVar8)();
    }
    _swift_bridgeObjectRelease(*puVar7);
    puVar6 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar2 = *(int *)(puVar6 + 0x30);
    lVar5 = 0;
    FUN_1009e120c();
    (**(code **)(*(long *)(lVar5 + -8) + 0x38))(param_1,1,1,lVar5);
    puVar6 = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    (**(code **)(*(long *)(puVar6 + -8) + 8))((long)puVar7 + (long)iVar2,puVar6);
  }
  return;
}



/* Address: 0x1009debe0 | FUN_1009debe0 */

void FUN_1009debe0(undefined8 param_1,undefined8 *param_2)

{
  char *pcVar1;
  code *pcVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  AsyncStream AVar7;
  StaticString file;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  String SVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  undefined8 local_70 [2];
  
  lVar4 = 0;
  FUN_1009dfe84();
  lVar8 = -(*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = (undefined8 *)((long)local_70 + lVar8);
  FUN_1000c495c(param_2,puVar9,FUN_1009dfe84);
  puVar5 = puVar9;
  _swift_getEnumCaseMultiPayload(puVar9,lVar4);
  iVar3 = (int)puVar5;
  if (iVar3 < 2) {
    local_70[1] = param_1;
    if (iVar3 != 0) {
      pcVar1 = "UnixSignals tried to create iterator before all handlers were installed";
      *(undefined4 *)((long)auStack_78 + lVar8) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar8) = 0x131;
      file.unknown = (undefined *)0xd000000000000047;
LAB_1009dee64:
      SVar11.bridgeObject = (void *)0x2;
      SVar11.str = (char *)0xb;
      Swift::_assertionFailure
                ((StaticString)0x100d8deb0,SVar11,file,(ulong)(pcVar1 + -0x20) | 0x8000000000000000,
                 0xdb7bb0);
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009dee78);
      (*pcVar2)();
    }
    local_70[0] = *puVar9;
    puVar6 = &DAT_100ff3848;
    FUN_1000f7830(&DAT_100ff3848,&DAT_100c8d0e8);
    iVar3 = *(int *)(puVar6 + 0x30);
    AVar7.unknown = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar8 = *(long *)(AVar7.unknown + -8);
    lVar10 = (long)puVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x20))(lVar10,(long)puVar9 + (long)iVar3,AVar7.unknown);
    FUN_10005241c(param_2,FUN_1009dfe84);
    iVar3 = *(int *)(puVar6 + 0x30);
    *param_2 = local_70[0];
    (**(code **)(lVar8 + 0x10))((long)param_2 + (long)iVar3,lVar10,AVar7.unknown);
    _swift_storeEnumTagMultiPayload(param_2,lVar4,2);
    Swift::AsyncStream::_makeAsyncIterator(AVar7);
    (**(code **)(lVar8 + 8))(lVar10,AVar7.unknown);
  }
  else {
    if (iVar3 != 3) {
      pcVar1 = "UnixSignals only allows a single iterator to be created";
      *(undefined4 *)((long)auStack_78 + lVar8) = 0;
      *(undefined8 *)((long)&uStack_80 + lVar8) = 0x134;
      file.unknown = (undefined *)0xd000000000000037;
      goto LAB_1009dee64;
    }
    AVar7.unknown = &DAT_100ff3850;
    FUN_1000f7830(&DAT_100ff3850,&DAT_100c8d0f0);
    lVar8 = *(long *)(AVar7.unknown + -8);
    lVar4 = (long)puVar9 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
    (**(code **)(lVar8 + 0x20))(lVar4,puVar9,AVar7.unknown);
    Swift::AsyncStream::_makeAsyncIterator(AVar7);
    (**(code **)(lVar8 + 8))(lVar4,AVar7.unknown);
  }
  return;
}



/* Address: 0x1009dee78 | FUN_1009dee78 */

undefined8 FUN_1009dee78(undefined1 *param_1,undefined *param_2)

{
  Hasher HVar1;
  ulong uVar2;
  undefined8 uVar3;
  Hasher HVar4;
  long lVar5;
  ulong uVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar7 = *unaff_x20;
  HVar4.unknown = param_2;
  Swift::Hasher::init(*(__int64 *)(lVar7 + 0x28));
  HVar1.unknown = param_2 & 0xff;
  Swift::Hasher::_combine((__uint64)HVar1.unknown,HVar4);
  uVar2 = Swift::Hasher::_finalize(HVar1);
  uVar6 = -1L << ((ulong)*(byte *)(lVar7 + 0x20) & 0x3f);
  uVar2 = uVar2 & (uVar6 ^ 0xffffffffffffffff);
  if ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0) {
    do {
      if ((uint)*(byte *)(*(long *)(lVar7 + 0x30) + uVar2) == ((uint)param_2 & 0xff)) {
        uVar3 = 0;
        goto LAB_1009def48;
      }
      uVar2 = uVar2 + 1 & ~uVar6;
    } while ((*(ulong *)(lVar7 + 0x38 + (uVar2 >> 6) * 8) >> (uVar2 & 0x3f) & 1) != 0);
  }
  lVar7 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(lVar7);
  lVar5 = *unaff_x20;
  FUN_1009def64(param_2,uVar2,lVar7);
  *unaff_x20 = lVar5;
  uVar3 = 1;
LAB_1009def48:
  *param_1 = (char)param_2;
  return uVar3;
}



/* Address: 0x1009def64 | FUN_1009def64 */

void FUN_1009def64(byte param_1,Hasher param_2,uint param_3)

{
  code *pcVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  Hasher HVar5;
  long *unaff_x20;
  long lVar6;
  
  HVar5.unknown = (undefined *)(ulong)(uint)param_1;
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 < *(ulong *)(*unaff_x20 + 0x18)) {
    if ((param_3 & 1) == 0) {
      FUN_1009df2a4();
    }
  }
  else {
    if ((param_3 & 1) == 0) {
      FUN_1009df094(uVar2 + 1);
    }
    else {
      FUN_1009df3e4();
    }
    lVar6 = *unaff_x20;
    Swift::Hasher::init(*(__int64 *)(lVar6 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar5.unknown,param_2);
    uVar2 = Swift::Hasher::_finalize(HVar5);
    uVar4 = -1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
    param_2.unknown = (undefined *)(uVar2 & (uVar4 ^ 0xffffffffffffffff));
    if ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
         ((ulong)param_2.unknown & 0x3f) & 1) != 0) {
      do {
        if ((uint)(byte)param_2.unknown[*(long *)(lVar6 + 0x30)] == (uint)param_1) {
          Swift::_ELEMENT_TYPE_OF_SET_VIOLATES_HASHABLE_REQUIREMENTS();
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009df094);
          (*pcVar1)();
        }
        param_2.unknown = param_2.unknown + 1 & ~uVar4;
      } while ((*(ulong *)(lVar6 + 0x38 + ((ulong)param_2.unknown >> 6) * 8) >>
                ((ulong)param_2.unknown & 0x3f) & 1) != 0);
    }
  }
  lVar3 = *unaff_x20;
  lVar6 = lVar3 + ((ulong)param_2.unknown >> 6) * 8;
  *(ulong *)(lVar6 + 0x38) = *(ulong *)(lVar6 + 0x38) | 1L << ((ulong)param_2.unknown & 0x3f);
  param_2.unknown[*(long *)(lVar3 + 0x30)] = param_1;
  if (!SCARRY8(*(long *)(lVar3 + 0x10),1)) {
    *(long *)(lVar3 + 0x10) = *(long *)(lVar3 + 0x10) + 1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009df084);
  (*pcVar1)();
}



/* Address: 0x1009df094 | FUN_1009df094 */

void FUN_1009df094(undefined *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  Hasher HVar12;
  long lVar13;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100ff3a40;
  FUN_1000f7830(&DAT_100ff3a40,&DAT_100c8d180);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,false);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009df26c:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(original + 0x38);
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar13 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009df2a0);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar13) goto LAB_1009df26c;
        uVar11 = *(ulong *)(original + 0x38 + lVar13 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar13 = lVar7;
    }
    bVar1 = *(byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar13 << 6));
    HVar12.unknown = (undefined *)(ulong)bVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar12.unknown,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar12);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009df2a4);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(byte *)(*(long *)(p_Var4 + 0x30) + uVar6) = bVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar13;
  } while( true );
}



/* Address: 0x1009df2a4 | FUN_1009df2a4 */

void FUN_1009df2a4(void)

{
  __RawSetStorage *p_Var1;
  code *pcVar2;
  _SetStorage *this;
  __RawSetStorage *p_Var3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  __RawSetStorage *original;
  
  this = (_SetStorage *)&DAT_100ff3a40;
  FUN_1000f7830(&DAT_100ff3a40,&DAT_100c8d180);
  original = (__RawSetStorage *)*unaff_x20;
  p_Var3 = original;
  Swift::_SetStorage::_copy(this,original);
  if (*(long *)(original + 0x10) != 0) {
    p_Var1 = original + 0x38;
    uVar4 = (1L << ((ulong)(byte)p_Var3[0x20] & 0x3f)) + 0x3fU >> 6;
    if (p_Var3 != original || p_Var1 + uVar4 * 8 <= p_Var3 + 0x38) {
      _memmove(p_Var3 + 0x38,p_Var1,uVar4 << 3);
    }
    lVar5 = 0;
    *(undefined8 *)(p_Var3 + 0x10) = *(undefined8 *)(original + 0x10);
    uVar6 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
    uVar4 = 0xffffffffffffffff;
    if (((byte)original[0x20] & 0x3f) < 6) {
      uVar4 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar4 = uVar4 & *(ulong *)(original + 0x38);
    do {
      lVar7 = lVar5;
      if (uVar4 == 0) {
        do {
          lVar5 = lVar7 + 1;
          if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x1009df3e4);
            (*pcVar2)();
          }
          if ((long)(uVar6 + 0x3f >> 6) <= lVar5) goto LAB_1009df3c4;
          uVar4 = *(ulong *)(p_Var1 + lVar5 * 8);
          lVar7 = lVar7 + 1;
        } while (uVar4 == 0);
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 * 0x40;
      }
      else {
        uVar8 = (uVar4 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar4 & 0x5555555555555555) << 1;
        uVar8 = (uVar8 & 0xcccccccccccccccc) >> 2 | (uVar8 & 0x3333333333333333) << 2;
        uVar8 = (uVar8 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar8 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar8 = (uVar8 & 0xff00ff00ff00ff00) >> 8 | (uVar8 & 0xff00ff00ff00ff) << 8;
        uVar8 = (uVar8 & 0xffff0000ffff0000) >> 0x10 | (uVar8 & 0xffff0000ffff) << 0x10;
        uVar4 = uVar4 - 1 & uVar4;
        uVar8 = LZCOUNT(uVar8 >> 0x20 | uVar8 << 0x20) | lVar5 << 6;
      }
      *(undefined1 *)(*(long *)(p_Var3 + 0x30) + uVar8) =
           *(undefined1 *)(*(long *)(original + 0x30) + uVar8);
    } while( true );
  }
LAB_1009df3c4:
  _swift_release(original);
  *unaff_x20 = (long)p_Var3;
  return;
}



/* Address: 0x1009df3e4 | FUN_1009df3e4 */

void FUN_1009df3e4(undefined *param_1)

{
  byte bVar1;
  bool bVar2;
  code *pcVar3;
  _SetStorage *this;
  __RawSetStorage *p_Var4;
  ulong uVar5;
  Hasher capacity;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long *unaff_x20;
  __RawSetStorage *original;
  __RawSetStorage *p_Var12;
  Hasher HVar13;
  long lVar14;
  
  original = (__RawSetStorage *)*unaff_x20;
  capacity.unknown = *(undefined **)(original + 0x18);
  if ((long)*(undefined **)(original + 0x18) <= (long)param_1) {
    capacity.unknown = param_1;
  }
  this = (_SetStorage *)&DAT_100ff3a40;
  FUN_1000f7830(&DAT_100ff3a40,&DAT_100c8d180);
  p_Var4 = original;
  Swift::_SetStorage::_resize(this,original,(__int64)capacity.unknown,true);
  if (*(long *)(original + 0x10) == 0) {
LAB_1009df604:
    _swift_release(original);
    *unaff_x20 = (long)p_Var4;
    return;
  }
  p_Var12 = original + 0x38;
  uVar9 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if (((byte)original[0x20] & 0x3f) < 6) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)p_Var12;
  lVar7 = 0;
  do {
    if (uVar11 == 0) {
      do {
        lVar14 = lVar7 + 1;
        if (SCARRY8(lVar7,1)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009df634);
          (*pcVar3)();
        }
        if ((long)(uVar9 + 0x3f >> 6) <= lVar14) {
          uVar11 = 1L << ((ulong)(byte)original[0x20] & 0x3f);
          if (((byte)original[0x20] & 0x3f) < 6) {
            *(long *)p_Var12 = -1L << (uVar11 & 0x3f);
          }
          else {
            _bzero(p_Var12,uVar11 + 0x3f >> 3 & 0xffffffffffffff8);
          }
          *(undefined8 *)(original + 0x10) = 0;
          goto LAB_1009df604;
        }
        uVar11 = *(ulong *)(p_Var12 + lVar14 * 8);
        lVar7 = lVar7 + 1;
      } while (uVar11 == 0);
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
    }
    else {
      uVar6 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = uVar6 >> 0x20 | uVar6 << 0x20;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = lVar7;
    }
    bVar1 = *(byte *)(*(long *)(original + 0x30) + (LZCOUNT(uVar6) | lVar14 << 6));
    HVar13.unknown = (undefined *)(ulong)bVar1;
    Swift::Hasher::init(*(__int64 *)(p_Var4 + 0x28));
    Swift::Hasher::_combine((__uint64)HVar13.unknown,capacity);
    uVar5 = Swift::Hasher::_finalize(HVar13);
    uVar10 = -1L << ((ulong)(byte)p_Var4[0x20] & 0x3f);
    uVar5 = uVar5 & (uVar10 ^ 0xffffffffffffffff);
    uVar8 = uVar5 >> 6;
    uVar6 = -1L << (uVar5 & 0x3f) & (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) ^ 0xffffffffffffffff);
    if (uVar6 == 0) {
      bVar2 = false;
      uVar6 = 0x3f - uVar10 >> 6;
      do {
        uVar5 = uVar8 + 1;
        if ((uVar5 == uVar6) && (bVar2)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009df638);
          (*pcVar3)();
        }
        uVar8 = 0;
        if (uVar5 != uVar6) {
          uVar8 = uVar5;
        }
        bVar2 = (bool)(uVar5 == uVar6 | bVar2);
      } while (*(ulong *)(p_Var4 + uVar8 * 8 + 0x38) == 0xffffffffffffffff);
      uVar6 = ~*(ulong *)(p_Var4 + uVar8 * 8 + 0x38);
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar8 << 6;
    }
    else {
      uVar6 = (uVar6 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar6 & 0x5555555555555555) << 1;
      uVar6 = (uVar6 & 0xcccccccccccccccc) >> 2 | (uVar6 & 0x3333333333333333) << 2;
      uVar6 = (uVar6 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar6 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar6 = (uVar6 & 0xff00ff00ff00ff00) >> 8 | (uVar6 & 0xff00ff00ff00ff) << 8;
      uVar6 = (uVar6 & 0xffff0000ffff0000) >> 0x10 | (uVar6 & 0xffff0000ffff) << 0x10;
      uVar6 = LZCOUNT(uVar6 >> 0x20 | uVar6 << 0x20) | uVar5 & 0x7fffffffffffffc0;
    }
    uVar8 = uVar6 >> 3 & 0x1ffffffffffffff8;
    *(ulong *)(p_Var4 + uVar8 + 0x38) = 1L << (uVar6 & 0x3f) | *(ulong *)(p_Var4 + uVar8 + 0x38);
    *(byte *)(*(long *)(p_Var4 + 0x30) + uVar6) = bVar1;
    *(long *)(p_Var4 + 0x10) = *(long *)(p_Var4 + 0x10) + 1;
    lVar7 = lVar14;
  } while( true );
}



/* Address: 0x1009df638 | FUN_1009df638 */

undefined * FUN_1009df638(ulong param_1,ulong param_2,ulong param_3,undefined *param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  uVar5 = param_2;
  if ((param_3 & 1) != 0) {
    uVar5 = *(ulong *)(param_4 + 0x18) >> 1;
    if ((long)uVar5 < (long)param_2) {
      if ((long)(uVar5 + 0x4000000000000000) < 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1009df740);
        (*pcVar2)();
      }
      uVar5 = *(ulong *)(param_4 + 0x18) & 0xfffffffffffffffe;
      if ((long)uVar5 <= (long)param_2) {
        uVar5 = param_2;
      }
    }
  }
  uVar6 = *(ulong *)(param_4 + 0x10);
  if ((long)uVar5 <= (long)uVar6) {
    uVar5 = uVar6;
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100eae0d8;
  if (uVar5 != 0) {
    puVar3 = &DAT_100ff39d8;
    FUN_1000f7830(&DAT_100ff39d8,&DAT_100c8d148);
    _swift_allocObject();
    puVar4 = puVar3;
    _malloc_size();
    puVar1 = puVar4 + -0x11;
    if (0x1f < (long)puVar4) {
      puVar1 = puVar4 + -0x20;
    }
    *(ulong *)(puVar3 + 0x10) = uVar6;
    *(long *)(puVar3 + 0x18) = ((long)puVar1 >> 4) << 1;
  }
  puVar1 = puVar3 + 0x20;
  puVar4 = param_4 + 0x20;
  if ((param_1 & 1) == 0) {
    _swift_arrayInitWithCopy(puVar1,puVar4,uVar6,&DAT_100f26d08);
  }
  else {
    if (puVar3 != param_4 || puVar4 + uVar6 * 0x10 <= puVar1) {
      _memmove(puVar1,puVar4,uVar6 * 0x10);
    }
    *(undefined8 *)(param_4 + 0x10) = 0;
  }
  _swift_bridgeObjectRelease(param_4);
  return puVar3;
}


