/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009a3030 | FUN_1009a3030 */

undefined1  [16] FUN_1009a3030(void)

{
  return ZEXT816(0x100f23990);
}



/* Address: 0x1009a3040 | FUN_1009a3040 */

void FUN_1009a3040(void)

{
  FUN_1009a316c();
  return;
}



/* Address: 0x1009a304c | FUN_1009a304c */

void FUN_1009a304c(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a31b4(param_1,param_2,PTR_typeMetadataAccessor_100eaa338);
  return;
}



/* Address: 0x1009a3058 | FUN_1009a3058 */

void FUN_1009a3058(void)

{
  FUN_1009a31f4();
  return;
}



/* Address: 0x1009a3064 | FUN_1009a3064 */

void FUN_1009a3064(void)

{
  FUN_1009a3244();
  return;
}



/* Address: 0x1009a3070 | FUN_1009a3070 */

void FUN_1009a3070(void)

{
  FUN_1009a3294();
  return;
}



/* Address: 0x1009a307c | FUN_1009a307c */

void FUN_1009a307c(void)

{
  FUN_1009a32e4();
  return;
}



/* Address: 0x1009a3088 | FUN_1009a3088 */

void FUN_1009a3088(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a3094 | FUN_1009a3094 */

void FUN_1009a3094(void)

{
  FUN_1009a3340();
  return;
}



/* Address: 0x1009a30a0 | FUN_1009a30a0 */

void FUN_1009a30a0(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a30ac | FUN_1009a30ac */

void FUN_1009a30ac(void)

{
  FUN_1009a3394();
  return;
}



/* Address: 0x1009a30b8 | FUN_1009a30b8 */

void FUN_1009a30b8(void)

{
  FUN_1009a33e0();
  return;
}



/* Address: 0x1009a30c4 | FUN_1009a30c4 */

void FUN_1009a30c4(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a30d0 | FUN_1009a30d0 */

void FUN_1009a30d0(void)

{
  FUN_1009a3340();
  return;
}



/* Address: 0x1009a30dc | FUN_1009a30dc */

void FUN_1009a30dc(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a30e8 | FUN_1009a30e8 */

void FUN_1009a30e8(void)

{
  FUN_1009a3394();
  return;
}



/* Address: 0x1009a30f4 | FUN_1009a30f4 */

void FUN_1009a30f4(void)

{
  FUN_1009a316c();
  return;
}



/* Address: 0x1009a3100 | FUN_1009a3100 */

void FUN_1009a3100(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a31b4(param_1,param_2,PTR_typeMetadataAccessor_100ea9ef0);
  return;
}



/* Address: 0x1009a310c | FUN_1009a310c */

void FUN_1009a310c(void)

{
  FUN_1009a31f4();
  return;
}



/* Address: 0x1009a3118 | FUN_1009a3118 */

void FUN_1009a3118(void)

{
  FUN_1009a3244();
  return;
}



/* Address: 0x1009a3124 | FUN_1009a3124 */

void FUN_1009a3124(void)

{
  FUN_1009a3294();
  return;
}



/* Address: 0x1009a3130 | FUN_1009a3130 */

void FUN_1009a3130(void)

{
  FUN_1009a32e4();
  return;
}



/* Address: 0x1009a313c | FUN_1009a313c */

void FUN_1009a313c(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a3148 | FUN_1009a3148 */

void FUN_1009a3148(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a3154 | FUN_1009a3154 */

void FUN_1009a3154(void)

{
  FUN_1009a33e0();
  return;
}



/* Address: 0x1009a3160 | FUN_1009a3160 */

void FUN_1009a3160(void)

{
  FUN_1009a316c();
  return;
}



/* Address: 0x1009a316c | FUN_1009a316c */

void FUN_1009a316c(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x0001009a31a4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined8 **)(lVar1 + -8))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1009a31a8 | FUN_1009a31a8 */

void FUN_1009a31a8(undefined8 param_1,undefined8 param_2)

{
  FUN_1009a31b4(param_1,param_2,PTR_typeMetadataAccessor_100eaa350);
  return;
}



/* Address: 0x1009a31b4 | FUN_1009a31b4 */

void FUN_1009a31b4(undefined8 param_1,undefined8 param_2,code *param_3)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_3)();
                    /* WARNING: Could not recover jumptable at 0x0001009a31e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return;
}



/* Address: 0x1009a31e8 | FUN_1009a31e8 */

void FUN_1009a31e8(void)

{
  FUN_1009a31f4();
  return;
}



/* Address: 0x1009a31f4 | FUN_1009a31f4 */

undefined8 FUN_1009a31f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x1009a3238 | FUN_1009a3238 */

void FUN_1009a3238(void)

{
  FUN_1009a3244();
  return;
}



/* Address: 0x1009a3244 | FUN_1009a3244 */

undefined8 FUN_1009a3244(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x18))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x1009a3288 | FUN_1009a3288 */

void FUN_1009a3288(void)

{
  FUN_1009a3294();
  return;
}



/* Address: 0x1009a3294 | FUN_1009a3294 */

undefined8 FUN_1009a3294(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x1009a32d8 | FUN_1009a32d8 */

void FUN_1009a32d8(void)

{
  FUN_1009a32e4();
  return;
}



/* Address: 0x1009a32e4 | FUN_1009a32e4 */

undefined8 FUN_1009a32e4(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
  (**(code **)(*(long *)(lVar1 + -8) + 0x28))(param_1,param_2,lVar1);
  return param_1;
}



/* Address: 0x1009a3328 | FUN_1009a3328 */

void FUN_1009a3328(void)

{
  _swift_getEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a3334 | FUN_1009a3334 */

void FUN_1009a3334(void)

{
  FUN_1009a3340();
  return;
}



/* Address: 0x1009a3340 | FUN_1009a3340 */

void FUN_1009a3340(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_4)();
                    /* WARNING: Could not recover jumptable at 0x0001009a3378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x30))(param_1,param_2,lVar1);
  return;
}



/* Address: 0x1009a337c | FUN_1009a337c */

void FUN_1009a337c(void)

{
  _swift_storeEnumTagSinglePayloadGeneric();
  return;
}



/* Address: 0x1009a3388 | FUN_1009a3388 */

void FUN_1009a3388(void)

{
  FUN_1009a3394();
  return;
}



/* Address: 0x1009a3394 | FUN_1009a3394 */

void FUN_1009a3394(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  code *param_5)

{
  long lVar1;
  
  lVar1 = 0;
  (*param_5)();
                    /* WARNING: Could not recover jumptable at 0x0001009a33d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)(lVar1 + -8) + 0x38))(param_1,param_2,param_2,lVar1);
  return;
}



/* Address: 0x1009a33d4 | FUN_1009a33d4 */

void FUN_1009a33d4(void)

{
  FUN_1009a33e0();
  return;
}



/* Address: 0x1009a33e0 | FUN_1009a33e0 */

void FUN_1009a33e0(long param_1,ulong param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  long local_28;
  
  lVar1 = 0x13f;
  (*param_4)();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,1,&local_28,param_1 + 0x10);
  }
  return;
}



/* Address: 0x1009a3448 | thunk_FUN_1009a30e8 */

void thunk_FUN_1009a30e8(void)

{
  FUN_1009a30e8();
  return;
}



/* Address: 0x1009a344c | thunk_FUN_1009a2c9c */

void thunk_FUN_1009a2c9c(void)

{
  FUN_1009a2c9c();
  return;
}



/* Address: 0x1009a3450 | thunk_FUN_1009a2c54 */

void thunk_FUN_1009a2c54(void)

{
  FUN_1009a2c54();
  return;
}



/* Address: 0x1009a3454 | thunk_FUN_1009a2c90 */

void thunk_FUN_1009a2c90(void)

{
  FUN_1009a2c90();
  return;
}



/* Address: 0x1009a3458 | thunk_FUN_1009a3100 */

void thunk_FUN_1009a3100(void)

{
  FUN_1009a3100();
  return;
}



/* Address: 0x1009a345c | thunk_FUN_1009a30f4 */

void thunk_FUN_1009a30f4(void)

{
  FUN_1009a30f4();
  return;
}



/* Address: 0x1009a3460 | thunk_FUN_1009a310c */

void thunk_FUN_1009a310c(void)

{
  FUN_1009a310c();
  return;
}



/* Address: 0x1009a3464 | thunk_FUN_1009a3118 */

void thunk_FUN_1009a3118(void)

{
  FUN_1009a3118();
  return;
}



/* Address: 0x1009a3468 | thunk_FUN_1009a3124 */

void thunk_FUN_1009a3124(void)

{
  FUN_1009a3124();
  return;
}



/* Address: 0x1009a346c | thunk_FUN_1009a3130 */

void thunk_FUN_1009a3130(void)

{
  FUN_1009a3130();
  return;
}



/* Address: 0x1009a3470 | thunk_FUN_1009a30d0 */

void thunk_FUN_1009a30d0(void)

{
  FUN_1009a30d0();
  return;
}



/* Address: 0x1009a3474 | thunk_FUN_1009a3154 */

void thunk_FUN_1009a3154(void)

{
  FUN_1009a3154();
  return;
}



/* Address: 0x1009a3478 | thunk_FUN_1009a347c */

void thunk_FUN_1009a347c(void)

{
  if (DAT_100ff24f0 != -1) {
    _swift_once(&DAT_100ff24f0,FUN_1009a34bc);
  }
  _swift_retain(DAT_100ff24f8);
  return;
}



/* Address: 0x1009a347c | FUN_1009a347c */

void FUN_1009a347c(void)

{
  if (DAT_100ff24f0 != -1) {
    _swift_once(&DAT_100ff24f0,FUN_1009a34bc);
  }
  _swift_retain(DAT_100ff24f8);
  return;
}



/* Address: 0x1009a34bc | FUN_1009a34bc */

void FUN_1009a34bc(void)

{
  undefined *puVar1;
  DispatchQoS DVar2;
  DispatchQoS DVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  code *pcVar10;
  String SVar11;
  undefined8 uStack_80;
  undefined4 auStack_78 [2];
  long local_70;
  undefined *local_68;
  
  DVar2 = Dispatch::DispatchQoS::typeMetadataAccessor();
  lVar6 = *(long *)(DVar2.unknown + -8);
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar8 = (long)&local_70 - uVar5;
  lVar9 = lVar8 - uVar5;
  lVar7 = lVar9 - uVar5;
  DVar3 = DVar2;
  FUN_1006558c4();
  if (((ulong)DVar3.unknown & 1) == 0) {
    *(undefined4 *)(lVar7 + -8) = 0;
    *(undefined8 *)(lVar7 + -0x10) = 0x4f;
    SVar11.bridgeObject = (void *)0x2;
    SVar11.str = (char *)0xb;
    Swift::_assertionFailure
              ((StaticString)0x100d8deb0,SVar11,(StaticString)0xd00000000000009c,0x8000000100db4f70,
               0xdb7120);
                    /* WARNING: Does not return */
    pcVar10 = (code *)SoftwareBreakpoint(1,0x1009a36f0);
    (*pcVar10)();
  }
  FUN_100655238();
  Dispatch::DispatchQoS::get_default(DVar3);
  pcVar10 = *(code **)(lVar6 + 0x10);
  (*pcVar10)(lVar9,lVar7,DVar2.unknown);
  if (0 < (long)DVar3.unknown) {
    local_68 = PTR___swiftEmptyArrayStorage_100eae0d8;
    local_70 = lVar6;
    FUN_1009b4fc0(0,DVar3.unknown,0);
    do {
      puVar1 = local_68;
      (*pcVar10)(lVar8,lVar9,DVar2.unknown);
      FUN_1009943f8();
      _swift_allocObject();
      lVar6 = lVar8;
      FUN_1009929bc(lVar8,0);
      uVar5 = *(ulong *)(puVar1 + 0x10);
      local_68 = puVar1;
      if (*(ulong *)(puVar1 + 0x18) >> 1 <= uVar5) {
        FUN_1009b4fc0(1 < *(ulong *)(puVar1 + 0x18),uVar5 + 1,1);
      }
      puVar1 = local_68;
      *(ulong *)(local_68 + 0x10) = uVar5 + 1;
      *(long *)(local_68 + uVar5 * 8 + 0x20) = lVar6;
      DVar3.unknown = DVar3.unknown + -1;
    } while (DVar3.unknown != (undefined *)0x0);
    pcVar10 = *(code **)(local_70 + 8);
    (*pcVar10)(lVar9,DVar2.unknown);
    lVar6 = 0;
    FUN_10099a23c();
    _swift_allocObject();
    puVar4 = &DAT_100ff0720;
    FUN_1000f7830(&DAT_100ff0720,&DAT_100c89370);
    _swift_allocObject();
    *(undefined8 *)(puVar4 + 0x10) = 0;
    *(undefined **)(lVar6 + 0x10) = puVar4;
    *(undefined **)(lVar6 + 0x18) = puVar1;
    *(undefined1 *)(lVar6 + 0x20) = 0;
    (*pcVar10)(lVar7,DVar2.unknown);
    DAT_100ff24f8 = lVar6;
    _swift_retain(lVar6);
    return;
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x1009a369c);
  (*pcVar10)();
}



/* Address: 0x1009a36f0 | thunk_FUN_1009a347c */

void thunk_FUN_1009a347c(void)

{
  thunk_FUN_1009a347c();
  return;
}



/* Address: 0x1009a36f4 | FUN_1009a36f4 */

void FUN_1009a36f4(String *param_1,ulong param_2,ulong param_3,ulong param_4)

{
  undefined4 uVar1;
  code *pcVar2;
  Host HVar3;
  NWEndpoint NVar4;
  NWInterface NVar5;
  IPv6Address IVar6;
  Port PVar7;
  ulong uVar8;
  Data DVar9;
  undefined *puVar10;
  IPv4Address IVar11;
  long lVar12;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined1 *puVar13;
  ulong *puVar14;
  uint uVar15;
  long lVar16;
  undefined4 *puVar17;
  long lVar18;
  String SVar19;
  undefined8 local_d0;
  ulong uStack_c8;
  undefined1 auStack_c0 [104];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_100ea82f0;
  uVar15 = (uint)(param_2 >> 0x3e);
  if (uVar15 == 0) {
    uVar8 = param_2;
    FUN_100666b30();
    DVar9.unknown = (undefined *)((ulong)&local_d0 | 4);
    puVar14 = &uStack_c8;
    local_d0 = uVar8;
    uStack_c8 = param_3;
    FUN_10046be0c(DVar9.unknown,puVar14);
    puVar10 = &DAT_100ff2518;
    FUN_1000f7830(&DAT_100ff2518,&DAT_100c8b370);
    lVar12 = (long)&local_d0 -
             (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar10 = &DAT_100ff2508;
    FUN_1000f7830(&DAT_100ff2508,&DAT_100c8b360);
    lVar16 = *(long *)(*(long *)(puVar10 + -8) + 0x40);
    NVar5 = Network::NWInterface::typeMetadataAccessor();
    (**(code **)(*(long *)(NVar5.unknown + -8) + 0x38))
              (lVar12 - (lVar16 + 0xfU & 0xfffffffffffffff0),1,1,NVar5.unknown);
    FUN_1001037b4(DVar9.unknown,puVar14);
    Network::IPv4Address::_init(DVar9);
    IVar11 = Network::IPv4Address::typeMetadataAccessor();
    lVar18 = *(long *)(IVar11.unknown + -8);
    lVar16 = lVar12;
    (**(code **)(lVar18 + 0x30))(lVar12,1,IVar11.unknown);
    if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bec);
      (*pcVar2)();
    }
    FUN_10003bf2c(DVar9.unknown,puVar14);
    (**(code **)(lVar18 + 0x20))(param_1,lVar12,IVar11.unknown);
    puVar10 = &DAT_100ff0848;
    uVar15 = 0xc8a020;
    FUN_1000f7830();
    lVar16 = (long)&local_d0 -
             (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar8 = param_2;
    FUN_100666f78();
    if ((uVar15 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bf4);
      (*pcVar2)();
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bd8);
      (*pcVar2)();
    }
    if (uVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3be0);
      (*pcVar2)();
    }
    Network::NWEndpoint::Port::_init((__uint16)uVar8);
    PVar7 = Network::NWEndpoint::Port::typeMetadataAccessor();
    lVar18 = *(long *)(PVar7._context - 8);
    lVar12 = lVar16;
    (**(code **)(lVar18 + 0x30))(lVar16,1,PVar7._context);
    if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bfc);
      (*pcVar2)();
    }
    _swift_release(param_2 & 0x3fffffffffffffff);
    puVar10 = &DAT_100ff0858;
    FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
    (**(code **)(lVar18 + 0x20))
              ((long)&param_1->str + (long)*(int *)(puVar10 + 0x30),lVar16,PVar7._context);
    puVar17 = (undefined4 *)
              PTR___enum_case_for_Network_NWEndpoint_Host_ipv4_Network_NWEndpoint_Host_Type___>__Network_IPv4Address___>_Network_NWEndpoint_Host_100ea9e88
    ;
  }
  else {
    if (uVar15 != 1) {
      FUN_100666ba8(&local_d0,param_2 & 0x3fffffffffffffff);
      SVar19 = Swift::String::init((undefined *)((long)&local_d0 + 2));
      _swift_release(param_2 & 0x3fffffffffffffff);
      *param_1 = SVar19;
      puVar17 = (undefined4 *)
                PTR___enum_case_for_Network_NWEndpoint_unix_Network_NWEndpoint_Type___>__Swift_String___>_Network_NWEndpoint_100ea9ed8
      ;
      goto LAB_1009a3b78;
    }
    FUN_100666b68(param_2 & 0x3fffffffffffffff);
    DVar9.unknown = (undefined *)&local_d0;
    puVar13 = auStack_c0;
    local_d0 = param_3;
    uStack_c8 = param_4;
    FUN_10046be0c(DVar9.unknown,puVar13);
    puVar10 = &DAT_100ff2510;
    FUN_1000f7830(&DAT_100ff2510,&DAT_100c8b368);
    lVar12 = (long)&local_d0 -
             (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    puVar10 = &DAT_100ff2508;
    FUN_1000f7830(&DAT_100ff2508,&DAT_100c8b360);
    lVar16 = *(long *)(*(long *)(puVar10 + -8) + 0x40);
    NVar5 = Network::NWInterface::typeMetadataAccessor();
    (**(code **)(*(long *)(NVar5.unknown + -8) + 0x38))
              (lVar12 - (lVar16 + 0xfU & 0xfffffffffffffff0),1,1,NVar5.unknown);
    FUN_1001037b4(DVar9.unknown,puVar13);
    Network::IPv6Address::_init(DVar9);
    IVar6 = Network::IPv6Address::typeMetadataAccessor();
    lVar18 = *(long *)(IVar6.unknown + -8);
    lVar16 = lVar12;
    (**(code **)(lVar18 + 0x30))(lVar12,1,IVar6.unknown);
    if ((int)lVar16 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3be8);
      (*pcVar2)();
    }
    FUN_10003bf2c(DVar9.unknown,puVar13);
    (**(code **)(lVar18 + 0x20))(param_1,lVar12,IVar6.unknown);
    puVar10 = &DAT_100ff0848;
    uVar15 = 0xc8a020;
    FUN_1000f7830();
    lVar16 = (long)&local_d0 -
             (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    uVar8 = param_2;
    FUN_100666f78();
    if ((uVar15 & 0xff) == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bf0);
      (*pcVar2)();
    }
    if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bd4);
      (*pcVar2)();
    }
    if (uVar8 >> 0x10 != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bdc);
      (*pcVar2)();
    }
    Network::NWEndpoint::Port::_init((__uint16)uVar8);
    PVar7 = Network::NWEndpoint::Port::typeMetadataAccessor();
    lVar18 = *(long *)(PVar7._context - 8);
    lVar12 = lVar16;
    (**(code **)(lVar18 + 0x30))(lVar16,1,PVar7._context);
    if ((int)lVar12 == 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1009a3bf8);
      (*pcVar2)();
    }
    _swift_release(param_2 & 0x3fffffffffffffff);
    puVar10 = &DAT_100ff0858;
    FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
    (**(code **)(lVar18 + 0x20))
              ((long)&param_1->str + (long)*(int *)(puVar10 + 0x30),lVar16,PVar7._context);
    puVar17 = (undefined4 *)
              PTR___enum_case_for_Network_NWEndpoint_Host_ipv6_Network_NWEndpoint_Host_Type___>__Network_IPv6Address___>_Network_NWEndpoint_Host_100ea9e90
    ;
  }
  uVar1 = *puVar17;
  HVar3 = Network::NWEndpoint::Host::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var,HVar3.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var,HVar3.value));
  puVar17 = (undefined4 *)
            PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
  ;
LAB_1009a3b78:
  uVar1 = *puVar17;
  NVar4 = Network::NWEndpoint::typeMetadataAccessor();
  (**(code **)(*(long *)(CONCAT71(extraout_var_00,NVar4.value) + -8) + 0x68))
            (param_1,uVar1,CONCAT71(extraout_var_00,NVar4.value));
  if (*(long *)PTR____stack_chk_guard_100ea82f0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}



/* Address: 0x1009a3bfc | FUN_1009a3bfc */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1009a3bfc(undefined8 param_1)

{
  undefined1 auVar1 [14];
  undefined1 auVar2 [14];
  code *pcVar3;
  NWEndpoint NVar4;
  Host HVar5;
  int iVar6;
  undefined7 extraout_var;
  undefined8 *puVar8;
  undefined7 extraout_var_00;
  IPv4Address IVar9;
  IPv4Address IVar10;
  undefined8 *puVar11;
  IPv6Address IVar12;
  Data DVar13;
  Port PVar14;
  __DataStorage *p_Var15;
  ulong uVar16;
  __DataStorage *p_Var17;
  ulong uVar18;
  uint uVar19;
  Data DVar20;
  uint uVar21;
  uint uVar22;
  __uint64 _Var23;
  long lVar24;
  __uint64 _Var25;
  long lVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined *puVar30;
  undefined2 uVar31;
  undefined2 uVar32;
  undefined4 uVar33;
  ulong uVar34;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  String SVar43;
  undefined *apuStack_110 [2];
  ulong local_100;
  ulong auStack_f8 [6];
  __DataStorage *local_c8;
  ulong local_c0;
  uint local_b4;
  undefined *local_b0;
  __uint64 local_a8;
  __uint64 local_a0;
  __uint64 local_98;
  __uint64 local_90;
  long local_88;
  undefined *local_80;
  undefined8 *local_78;
  long local_70;
  long lVar7;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  
  local_70 = *(long *)PTR____stack_chk_guard_100ea82f0;
  NVar4 = Network::NWEndpoint::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var,NVar4.value);
  lVar29 = *(long *)(lVar7 + -8);
  lVar26 = -(*(long *)(lVar29 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar11 = (undefined8 *)((long)apuStack_110 + lVar26);
  (**(code **)(lVar29 + 0x10))(puVar11,param_1,lVar7);
  puVar8 = puVar11;
  (**(code **)(lVar29 + 0x58))(puVar11,lVar7);
  iVar6 = (int)puVar8;
  if ((PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
       == (undefined *)0x0) ||
     (iVar6 != *(int *)
                PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
     )) {
    if ((PTR___enum_case_for_Network_NWEndpoint_service_Network_NWEndpoint_Type___>__Swift_String_Swift_String_Swift_String_Network_NWInterface____>_Network_NWEndpoint_100ea9ee0
         == (undefined *)0x0) ||
       (iVar6 != *(int *)
                  PTR___enum_case_for_Network_NWEndpoint_service_Network_NWEndpoint_Type___>__Swift_String_Swift_String_Swift_String_Network_NWInterface____>_Network_NWEndpoint_100ea9ee0
       )) {
      if ((PTR___enum_case_for_Network_NWEndpoint_unix_Network_NWEndpoint_Type___>__Swift_String___>_Network_NWEndpoint_100ea9ed8
           == (undefined *)0x0) ||
         (iVar6 != *(int *)
                    PTR___enum_case_for_Network_NWEndpoint_unix_Network_NWEndpoint_Type___>__Swift_String___>_Network_NWEndpoint_100ea9ed8
         )) {
        FUN_1009921c0();
        _swift_allocError(&DAT_100f21b80,puVar8,0,0);
        _swift_willThrow();
        pcVar3 = *(code **)(lVar29 + 8);
        (*pcVar3)(param_1,lVar7);
        (*pcVar3)(puVar11,lVar7);
      }
      else {
        (**(code **)(lVar29 + 0x60))(puVar11,lVar7);
        FUN_100667868(*puVar11,*(undefined8 *)((long)apuStack_110 + lVar26 + 8));
        (**(code **)(lVar29 + 8))(param_1,lVar7);
      }
      goto LAB_1009a40b4;
    }
    (**(code **)(lVar29 + 0x60))(puVar11,lVar7);
    _swift_bridgeObjectRelease(*(undefined8 *)((long)apuStack_110 + lVar26 + 8));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)auStack_f8 + lVar26));
    _swift_bridgeObjectRelease(*(undefined8 *)((long)auStack_f8 + lVar26 + 0x10));
    puVar30 = &DAT_100ff2500;
    FUN_1000f7830(&DAT_100ff2500,&DAT_100c8b6f0);
    puVar11 = (undefined8 *)((long)puVar11 + (long)*(int *)(puVar30 + 0x50));
    FUN_1009a4574(puVar11);
  }
  else {
    (**(code **)(lVar29 + 0x60))(puVar11,lVar7);
    puVar30 = &DAT_100ff0858;
    FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
    lVar27 = (long)*(int *)(puVar30 + 0x30);
    HVar5 = Network::NWEndpoint::Host::typeMetadataAccessor();
    lVar26 = CONCAT71(extraout_var_00,HVar5.value);
    lVar24 = *(long *)(lVar26 + -8);
    puVar8 = puVar11;
    (**(code **)(lVar24 + 0x58))(puVar11,lVar26);
    if ((PTR___enum_case_for_Network_NWEndpoint_Host_ipv4_Network_NWEndpoint_Host_Type___>__Network_IPv4Address___>_Network_NWEndpoint_Host_100ea9e88
         != (undefined *)0x0) &&
       ((int)puVar8 ==
        *(int *)
         PTR___enum_case_for_Network_NWEndpoint_Host_ipv4_Network_NWEndpoint_Host_Type___>__Network_IPv4Address___>_Network_NWEndpoint_Host_100ea9e88
       )) {
      (**(code **)(lVar24 + 0x60))(puVar11,lVar26);
      local_80 = (undefined *)Network::IPv4Address::typeMetadataAccessor();
      local_88 = *(long *)(local_80 + -8);
      _Var25 = (long)puVar11 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
      local_78 = puVar11;
      (**(code **)(local_88 + 0x20))(_Var25,puVar11);
      local_98 = (__uint64)Network::NWEndpoint::Port::typeMetadataAccessor();
      local_a0 = *(__uint64 *)(local_98 - 8);
      _Var23 = _Var25 - (*(long *)(local_a0 + 0x40) + 0xfU & 0xfffffffffffffff0);
      uVar18 = (long)puVar11 + lVar27;
      PVar14._context = _Var23;
      local_90 = _Var25;
      (**(code **)(local_a0 + 0x20))();
      local_a8 = _Var23;
      IVar9.unknown._0_2_ = Network::NWEndpoint::Port::get_rawValue(PVar14);
      IVar9.unknown._2_6_ = extraout_var_01;
      IVar10.unknown = (undefined *)Network::IPv4Address::get_rawValue(IVar9);
      uVar21 = (uint)(uVar18 >> 0x20);
      uVar19 = uVar21 >> 0x1e;
      uVar22 = (uint)IVar9.unknown;
      if (uVar21 >> 0x1e < 2) {
        if (uVar19 != 0) {
          local_b0 = (undefined *)(long)(int)IVar10.unknown;
          local_c0 = ((long)IVar10.unknown >> 0x20) - (long)local_b0;
          if ((long)IVar10.unknown >> 0x20 < (long)local_b0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4518);
            local_b4 = uVar22;
            (*pcVar3)();
          }
          DVar13 = (Data)IVar10.unknown;
          local_b4 = uVar22;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)IVar10.unknown)
          ;
          if ((__DataStorage *)DVar13.unknown == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_1009a4558:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a455c);
            (*pcVar3)();
          }
          p_Var15 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),
                               (__DataStorage *)DVar13.unknown);
          lVar26 = (long)local_b0 - (long)p_Var15;
          if (SBORROW8((long)local_b0,(long)p_Var15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4520);
            (*pcVar3)();
          }
          uVar16 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),p_Var15);
          if ((__DataStorage *)(DVar13.unknown + lVar26) == (__DataStorage *)0x0)
          goto LAB_1009a4558;
          if ((long)local_c0 <= (long)uVar16) {
            uVar16 = local_c0;
          }
          if (uVar16 != 4) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4528);
            (*pcVar3)();
          }
          uVar21 = *(uint *)(DVar13.unknown + lVar26);
          goto LAB_1009a42c8;
        }
        local_b0 = IVar10.unknown;
        if ((uVar18 & 0xff000000000000) != 0x4000000000000) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4514);
          (*pcVar3)();
        }
      }
      else {
        if (uVar19 != 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4550);
          local_b4 = uVar22;
          (*pcVar3)();
        }
        local_b0 = *(undefined **)(IVar10.unknown + 0x10);
        local_c0 = *(ulong *)(IVar10.unknown + 0x18);
        DVar13 = (Data)IVar10.unknown;
        local_b4 = uVar22;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)IVar10.unknown);
        if ((__DataStorage *)DVar13.unknown == (__DataStorage *)0x0) {
          local_c8 = (__DataStorage *)0x0;
          p_Var15 = (__DataStorage *)0x0;
        }
        else {
          p_Var15 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),
                               (__DataStorage *)DVar13.unknown);
          if (SBORROW8((long)local_b0,(long)p_Var15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4544);
            (*pcVar3)();
          }
          local_c8 = (__DataStorage *)(DVar13.unknown + ((long)local_b0 - (long)p_Var15));
        }
        lVar26 = local_c0 - (long)local_b0;
        if (SBORROW8(local_c0,(long)local_b0)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a451c);
          (*pcVar3)();
        }
        lVar24 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),p_Var15);
        if (local_c8 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4560);
          (*pcVar3)();
        }
        if (lVar26 <= lVar24) {
          lVar24 = lVar26;
        }
        if (lVar24 != 4) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4524);
          (*pcVar3)();
        }
        uVar21 = *(uint *)local_c8;
LAB_1009a42c8:
        uVar22 = local_b4;
        local_b0 = (undefined *)(ulong)uVar21;
      }
      FUN_10003bf2c(IVar10.unknown,uVar18);
      SVar43 = Network::IPv4Address::get_debugDescription(IVar10);
      (**(code **)(lVar29 + 8))(param_1,lVar7);
      (**(code **)(local_a0 + 8))(local_a8,local_98);
      (**(code **)(local_88 + 8))(_Var25,local_80);
      FUN_100667770((ulong)(((uVar22 & 0xff00ff00) >> 8 | (uVar22 & 0xff00ff) << 8) << 0x10) |
                    (long)local_b0 << 0x20 | 0x210,0,SVar43.str,SVar43.bridgeObject);
      goto LAB_1009a40b4;
    }
    if ((PTR___enum_case_for_Network_NWEndpoint_Host_ipv6_Network_NWEndpoint_Host_Type___>__Network_IPv6Address___>_Network_NWEndpoint_Host_100ea9e90
         != (undefined *)0x0) &&
       ((int)puVar8 ==
        *(int *)
         PTR___enum_case_for_Network_NWEndpoint_Host_ipv6_Network_NWEndpoint_Host_Type___>__Network_IPv6Address___>_Network_NWEndpoint_Host_100ea9e90
       )) {
      (**(code **)(lVar24 + 0x60))(puVar11,lVar26);
      local_80 = (undefined *)Network::IPv6Address::typeMetadataAccessor();
      local_88 = *(long *)(local_80 + -8);
      _Var23 = (long)puVar11 - (*(long *)(local_88 + 0x40) + 0xfU & 0xfffffffffffffff0);
      (**(code **)(local_88 + 0x20))(_Var23,puVar11);
      local_a0 = (__uint64)Network::NWEndpoint::Port::typeMetadataAccessor();
      local_a8 = *(__uint64 *)(local_a0 - 8);
      puVar30 = (undefined *)(_Var23 - (*(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0));
      uVar18 = (long)puVar11 + lVar27;
      PVar14._context = (__uint64)puVar30;
      local_90 = _Var23;
      (**(code **)(local_a8 + 0x20))();
      local_b0 = puVar30;
      IVar12.unknown._0_2_ = Network::NWEndpoint::Port::get_rawValue(PVar14);
      IVar12.unknown._2_6_ = extraout_var_02;
      local_b4 = (uint)IVar12.unknown;
      local_98 = _Var23;
      DVar13 = Network::IPv6Address::get_rawValue(IVar12);
      uVar21 = (uint)(uVar18 >> 0x20);
      uVar22 = uVar21 >> 0x1e;
      if (uVar21 >> 0x1e < 2) {
        if (uVar22 == 0) {
          if ((uVar18 & 0xff000000000000) != 0x10000000000000) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a452c);
            local_78 = puVar11;
            (*pcVar3)();
          }
          local_c0 = 0;
          auVar35._8_8_ = uVar18;
          auVar35._0_8_ = uVar18;
          auVar38 = NEON_ushl(auVar35,_DAT_100c8b860,8);
          auVar35 = NEON_ushl(auVar35,_DAT_100c8b870,8);
          local_100 = CONCAT26(auVar38._8_2_,
                               CONCAT24(auVar38._0_2_,CONCAT22(auVar35._8_2_,auVar35._0_2_)));
          uVar28 = uVar18 >> 8;
          local_c8 = (__DataStorage *)((ulong)DVar13.unknown >> 0x38);
          auStack_f8[2] = (ulong)DVar13.unknown >> 0x30;
          auStack_f8[5] = (ulong)DVar13.unknown >> 0x28;
          auVar38._8_8_ = DVar13.unknown;
          auVar38._0_8_ = DVar13.unknown;
          auVar39 = NEON_ushl(auVar38,_DAT_100c50110,8);
          auVar35 = NEON_ushl(auVar38,_DAT_100c8b880,8);
          auStack_f8[3] =
               CONCAT26(auVar39._8_2_,CONCAT24(auVar39._0_2_,CONCAT22(auVar35._8_2_,auVar35._0_2_)))
          ;
          uVar16 = uVar18;
          DVar20 = DVar13;
          local_78 = puVar11;
        }
        else {
          lVar26 = (long)(int)DVar13.unknown;
          local_c0 = ((long)DVar13.unknown >> 0x20) - lVar26;
          if ((long)DVar13.unknown >> 0x20 < lVar26) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4530);
            local_78 = puVar11;
            (*pcVar3)();
          }
          DVar20 = DVar13;
          local_78 = puVar11;
          Foundation::__DataStorage::_get__bytes
                    ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)DVar13.unknown)
          ;
          if ((__DataStorage *)DVar20.unknown == (__DataStorage *)0x0) {
            Foundation::__DataStorage::get__length
                      ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)0x0);
LAB_1009a456c:
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4570);
            (*pcVar3)();
          }
          p_Var15 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),
                               (__DataStorage *)DVar20.unknown);
          if (SBORROW8(lVar26,(long)p_Var15)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4538);
            (*pcVar3)();
          }
          p_Var17 = (__DataStorage *)(DVar20.unknown + (lVar26 - (long)p_Var15));
          uVar16 = Foundation::__DataStorage::get__length
                             ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),p_Var15);
          if (p_Var17 == (__DataStorage *)0x0) goto LAB_1009a456c;
          if ((long)local_c0 <= (long)uVar16) {
            uVar16 = local_c0;
          }
          if (uVar16 != 0x10) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4540);
            (*pcVar3)();
          }
          DVar20.unknown = (undefined *)(ulong)(byte)*p_Var17;
          uVar33 = *(undefined4 *)(p_Var17 + 1);
          auStack_f8[3] =
               (ulong)CONCAT16((char)((uint)uVar33 >> 0x18),
                               (uint6)CONCAT14((char)((uint)uVar33 >> 0x10),
                                               (uint)CONCAT12((char)((uint)uVar33 >> 8),
                                                              (ushort)(byte)uVar33)));
          auStack_f8[5] = (ulong)(byte)p_Var17[5];
          auStack_f8[2] = (ulong)(byte)p_Var17[6];
          local_c8 = (__DataStorage *)(ulong)(byte)p_Var17[7];
          uVar16 = (ulong)(byte)p_Var17[8];
          uVar28 = (ulong)(byte)p_Var17[9];
          uVar33 = *(undefined4 *)(p_Var17 + 10);
          local_100 = (ulong)CONCAT16((char)((uint)uVar33 >> 0x18),
                                      (uint6)CONCAT14((char)((uint)uVar33 >> 0x10),
                                                      (uint)CONCAT12((char)((uint)uVar33 >> 8),
                                                                     (ushort)(byte)uVar33)));
          local_c0 = (ulong)*(ushort *)(p_Var17 + 0xe);
        }
      }
      else {
        if (uVar22 != 2) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4564);
          local_78 = puVar11;
          (*pcVar3)();
        }
        lVar26 = *(long *)(DVar13.unknown + 0x10);
        local_c0 = *(ulong *)(DVar13.unknown + 0x18);
        apuStack_110[1] = DVar13.unknown;
        local_78 = puVar11;
        Foundation::__DataStorage::_get__bytes
                  ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),(__DataStorage *)DVar13.unknown);
        if ((__DataStorage *)DVar13.unknown == (__DataStorage *)0x0) {
          p_Var15 = (__DataStorage *)0x0;
          p_Var17 = (__DataStorage *)0x0;
        }
        else {
          p_Var17 = (__DataStorage *)
                    Foundation::__DataStorage::get__offset
                              ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),
                               (__DataStorage *)DVar13.unknown);
          if (SBORROW8(lVar26,(long)p_Var17)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4548);
            (*pcVar3)();
          }
          p_Var15 = (__DataStorage *)(DVar13.unknown + (lVar26 - (long)p_Var17));
        }
        lVar24 = local_c0 - lVar26;
        if (SBORROW8(local_c0,lVar26)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4534);
          (*pcVar3)();
        }
        lVar26 = Foundation::__DataStorage::get__length
                           ((__DataStorage *)(uVar18 & 0x3fffffffffffffff),p_Var17);
        if (p_Var15 == (__DataStorage *)0x0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a4574);
          (*pcVar3)();
        }
        if (lVar24 <= lVar26) {
          lVar26 = lVar24;
        }
        if (lVar26 != 0x10) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1009a453c);
          (*pcVar3)();
        }
        DVar20.unknown = (undefined *)(ulong)(byte)*p_Var15;
        uVar33 = *(undefined4 *)(p_Var15 + 1);
        auStack_f8[3] =
             (ulong)CONCAT16((char)((uint)uVar33 >> 0x18),
                             (uint6)CONCAT14((char)((uint)uVar33 >> 0x10),
                                             (uint)CONCAT12((char)((uint)uVar33 >> 8),
                                                            (ushort)(byte)uVar33)));
        auStack_f8[5] = (ulong)(byte)p_Var15[5];
        auStack_f8[2] = (ulong)(byte)p_Var15[6];
        local_c8 = (__DataStorage *)(ulong)(byte)p_Var15[7];
        uVar16 = (ulong)(byte)p_Var15[8];
        uVar28 = (ulong)(byte)p_Var15[9];
        uVar33 = *(undefined4 *)(p_Var15 + 10);
        local_100 = (ulong)CONCAT16((char)((uint)uVar33 >> 0x18),
                                    (uint6)CONCAT14((char)((uint)uVar33 >> 0x10),
                                                    (uint)CONCAT12((char)((uint)uVar33 >> 8),
                                                                   (ushort)(byte)uVar33)));
        local_c0 = (ulong)*(ushort *)(p_Var15 + 0xe);
        DVar13.unknown = apuStack_110[1];
      }
      auStack_f8[4] = 0;
      auStack_f8[0] = 0;
      local_b4 = (local_b4 & 0xff00ff00) >> 8 | (local_b4 & 0xff00ff) << 8;
      FUN_10003bf2c(DVar13.unknown,uVar18);
      _Var23 = local_98;
      uVar18 = local_100 & 0xff00ff00ff00ff;
      uVar31 = (undefined2)(uVar18 >> 0x10);
      uVar34 = CONCAT26(0,CONCAT24(uVar31,(uint)(ushort)uVar18));
      auVar1._8_2_ = (short)(uVar18 >> 0x20);
      auVar1._0_8_ = uVar34;
      uVar32 = (undefined2)(uVar18 >> 0x30);
      auVar1._10_2_ = 0;
      auVar1._12_2_ = uVar32;
      auVar42._0_8_ = uVar34 & 0xffffffff;
      auVar42._8_2_ = uVar31;
      auVar42._10_6_ = 0;
      auVar39._0_8_ = (ulong)auVar1._8_6_ & 0xffffffff;
      auVar39._8_2_ = uVar32;
      auVar39._10_6_ = 0;
      auVar35 = NEON_ushl(auVar39,_DAT_100c8b890,8);
      auVar38 = NEON_ushl(auVar42,_DAT_100c8b8a0,8);
      uVar21 = (uint)auStack_f8[2];
      uVar22 = (uint)auStack_f8[5];
      uVar18 = auStack_f8[3] & 0xff00ff00ff00ff;
      uVar31 = (undefined2)(uVar18 >> 0x10);
      uVar34 = CONCAT26(0,CONCAT24(uVar31,(uint)(ushort)uVar18));
      auVar2._8_2_ = (short)(uVar18 >> 0x20);
      auVar2._0_8_ = uVar34;
      uVar32 = (undefined2)(uVar18 >> 0x30);
      auVar2._10_2_ = 0;
      auVar2._12_2_ = uVar32;
      auVar41._0_8_ = uVar34 & 0xffffffff;
      auVar41._8_2_ = uVar31;
      auVar41._10_6_ = 0;
      auVar40._0_8_ = (ulong)auVar2._8_6_ & 0xffffffff;
      auVar40._8_2_ = uVar32;
      auVar40._10_6_ = 0;
      auVar39 = NEON_ushl(auVar40,_DAT_100c8b8b0,8);
      auVar42 = NEON_ushl(auVar41,_DAT_100c25620,8);
      auVar36[0] = auVar38[0] | auVar35[0];
      auVar36[1] = auVar38[1] | auVar35[1];
      auVar36[2] = auVar38[2] | auVar35[2];
      auVar36[3] = auVar38[3] | auVar35[3];
      auVar36[4] = auVar38[4] | auVar35[4];
      auVar36[5] = auVar38[5] | auVar35[5];
      auVar36[6] = auVar38[6] | auVar35[6];
      auVar36[7] = auVar38[7] | auVar35[7];
      auVar36[8] = auVar38[8] | auVar35[8];
      auVar36[9] = auVar38[9] | auVar35[9];
      auVar36[10] = auVar38[10] | auVar35[10];
      auVar36[0xb] = auVar38[0xb] | auVar35[0xb];
      auVar36[0xc] = auVar38[0xc] | auVar35[0xc];
      auVar36[0xd] = auVar38[0xd] | auVar35[0xd];
      auVar36[0xe] = auVar38[0xe] | auVar35[0xe];
      auVar36[0xf] = auVar38[0xf] | auVar35[0xf];
      auVar35 = NEON_ext(auVar36,auVar36,8,1);
      auStack_f8[5] =
           CONCAT17(auVar36[7] | auVar35[7],
                    CONCAT16(auVar36[6] | auVar35[6],
                             CONCAT15(auVar36[5] | auVar35[5],
                                      CONCAT14(auVar36[4] | auVar35[4],
                                               CONCAT13(auVar36[3] | auVar35[3],
                                                        CONCAT12(auVar36[2] | auVar35[2],
                                                                 CONCAT11(auVar36[1] | auVar35[1],
                                                                          auVar36[0] | auVar35[0])))
                                              )))) | (uVar28 & 0xff) << 8;
      uVar18 = local_c0 << 0x30;
      auVar37[0] = auVar42[0] | auVar39[0];
      auVar37[1] = auVar42[1] | auVar39[1];
      auVar37[2] = auVar42[2] | auVar39[2];
      auVar37[3] = auVar42[3] | auVar39[3];
      auVar37[4] = auVar42[4] | auVar39[4];
      auVar37[5] = auVar42[5] | auVar39[5];
      auVar37[6] = auVar42[6] | auVar39[6];
      auVar37[7] = auVar42[7] | auVar39[7];
      auVar37[8] = auVar42[8] | auVar39[8];
      auVar37[9] = auVar42[9] | auVar39[9];
      auVar37[10] = auVar42[10] | auVar39[10];
      auVar37[0xb] = auVar42[0xb] | auVar39[0xb];
      auVar37[0xc] = auVar42[0xc] | auVar39[0xc];
      auVar37[0xd] = auVar42[0xd] | auVar39[0xd];
      auVar37[0xe] = auVar42[0xe] | auVar39[0xe];
      auVar37[0xf] = auVar42[0xf] | auVar39[0xf];
      auVar35 = NEON_ext(auVar37,auVar37,8,1);
      lVar26 = (long)local_c8 << 0x38;
      SVar43 = Network::IPv6Address::get_debugDescription((IPv6Address)DVar13.unknown);
      (**(code **)(lVar29 + 8))(param_1,lVar7);
      (**(code **)(local_a8 + 8))(local_b0,local_a0);
      (**(code **)(local_88 + 8))(_Var23,local_80);
      FUN_1006677c8(local_b4 << 0x10 | 0x1e1c,
                    (CONCAT17(auVar37[7] | auVar35[7],
                              CONCAT16(auVar37[6] | auVar35[6],
                                       CONCAT15(auVar37[5] | auVar35[5],
                                                CONCAT14(auVar37[4] | auVar35[4],
                                                         CONCAT13(auVar37[3] | auVar35[3],
                                                                  CONCAT12(auVar37[2] | auVar35[2],
                                                                           CONCAT11(auVar37[1] |
                                                                                    auVar35[1],
                                                                                    auVar37[0] |
                                                                                    auVar35[0]))))))
                             ) | (ulong)(uVar22 & 0xff) << 0x28 | (ulong)DVar20.unknown & 0xff) +
                    ((ulong)(uVar21 & 0xff) << 0x30) + lVar26,auStack_f8[5] | uVar16 & 0xff | uVar18
                    ,0,SVar43.str,SVar43.bridgeObject);
      goto LAB_1009a40b4;
    }
    PVar14 = Network::NWEndpoint::Port::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar14._context - 8) + 8))((long)puVar11 + lVar27,PVar14._context);
    (**(code **)(lVar24 + 8))(puVar11,lVar26);
  }
  FUN_1009921c0();
  _swift_allocError(&DAT_100f21b80,puVar11,0,0);
  _swift_willThrow();
  (**(code **)(lVar29 + 8))(param_1,lVar7);
LAB_1009a40b4:
  if (*(long *)PTR____stack_chk_guard_100ea82f0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}



/* Address: 0x1009a4574 | FUN_1009a4574 */

undefined8 FUN_1009a4574(undefined8 param_1)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2508;
  FUN_1000f7830(&DAT_100ff2508,&DAT_100c8b360);
  (**(code **)(*(long *)(puVar1 + -8) + 8))(param_1,puVar1);
  return param_1;
}


