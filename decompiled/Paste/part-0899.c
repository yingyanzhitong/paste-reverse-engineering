/* REA 6.7.0 / Ghidra 12.1.4: arm64 decompiler pseudocode.
 * Generated analysis output; not original or buildable source. */

/* Address: 0x1009aa22c | FUN_1009aa22c */

ulong FUN_1009aa22c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4)

{
  code *pcVar1;
  NWEndpoint NVar2;
  __uint16 _Var3;
  undefined7 extraout_var;
  NWListener *pNVar5;
  NWParameters *this;
  NWParameters *pNVar6;
  long lVar7;
  Port PVar8;
  undefined6 extraout_var_00;
  ulong uVar9;
  undefined1 *puVar10;
  __uint64 _Var11;
  uint uVar12;
  __uint64 _Var13;
  NWListener *this_00;
  uint uVar14;
  long unaff_x20;
  long unaff_x21;
  undefined1 *puVar15;
  ulong unaff_x25;
  long lVar16;
  long lVar17;
  ulong uVar18;
  long lVar19;
  undefined1 auStack_b0 [12];
  uint local_a4;
  ulong local_a0;
  undefined4 local_94;
  __uint64 local_90;
  long local_88;
  __uint64 local_80;
  undefined1 *local_78;
  __uint64 local_70;
  undefined1 *local_68;
  long lVar4;
  
  this_00 = *(NWListener **)(unaff_x20 + 0x58);
  if (this_00 == (NWListener *)0x0) {
    FUN_100980638();
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 3;
    _swift_willThrow();
  }
  else {
    NVar2 = Network::NWEndpoint::typeMetadataAccessor();
    lVar4 = CONCAT71(extraout_var,NVar2.value);
    lVar16 = *(long *)(lVar4 + -8);
    uVar18 = *(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0;
    puVar15 = auStack_b0 + -uVar18;
    pNVar5 = this_00;
    _swift_retain();
    this = Network::NWListener::get_parameters(this_00,pNVar5);
    pNVar6 = (NWParameters *)&DAT_100ff25b0;
    FUN_1000f7830(&DAT_100ff25b0,&DAT_100c8b6e0);
    unaff_x25 = (long)puVar15 -
                (*(long *)(*(long *)(pNVar6 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
    Network::NWParameters::_get_requiredLocalEndpoint(this,pNVar6);
    _swift_release(this);
    uVar9 = unaff_x25;
    (**(code **)(lVar16 + 0x30))(unaff_x25,1,lVar4);
    if ((int)uVar9 == 1) {
      uVar9 = unaff_x25;
      FUN_1000fb4c4(unaff_x25,&DAT_100ff25b0,&DAT_100c8b6e0);
      FUN_1009921c0();
      _swift_allocError(&DAT_100f21b80,uVar9,0,0);
      _swift_willThrow();
      _swift_release(this_00);
    }
    else {
      local_68 = auStack_b0;
      (**(code **)(lVar16 + 0x20))(puVar15,unaff_x25,lVar4);
      unaff_x25 = (long)puVar15 - uVar18;
      puVar10 = puVar15;
      (**(code **)(lVar16 + 0x10))(unaff_x25,puVar15,lVar4);
      uVar12 = (uint)puVar10;
      FUN_1009a3bfc();
      if (unaff_x21 == 0) {
        uVar9 = unaff_x25;
        FUN_100666f78();
        if (((uVar12 & 0xff) == 1) || (uVar9 != 0)) {
          (**(code **)(lVar16 + 8))(puVar15,lVar4);
          _swift_release(this_00);
        }
        else {
          local_70 = (__uint64)Network::NWEndpoint::Port::typeMetadataAccessor();
          lVar17 = *(long *)(local_70 - 8);
          _Var13 = (long)puVar15 - (*(long *)(lVar17 + 0x40) + 0xfU & 0xfffffffffffffff0);
          pNVar5 = (NWListener *)&DAT_100ff0848;
          local_80 = _Var13;
          local_78 = puVar15;
          FUN_1000f7830(&DAT_100ff0848,&DAT_100c8a020);
          lVar19 = _Var13 - (*(long *)(*(long *)(pNVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
          Network::NWListener::_get_port(this_00,pNVar5);
          _Var13 = local_70;
          lVar7 = lVar19;
          (**(code **)(lVar17 + 0x30))(lVar19,1,local_70);
          if ((int)lVar7 == 1) {
            FUN_1000fb4c4(lVar19,&DAT_100ff0848,&DAT_100c8a020);
            FUN_1009921c0();
            _swift_allocError(&DAT_100f21b80,lVar19,0,0);
            _swift_willThrow();
            _swift_release(this_00);
            _swift_release(unaff_x25 & 0x3fffffffffffffff);
            (**(code **)(lVar16 + 8))(puVar15,lVar4);
          }
          else {
            PVar8._context = local_80;
            _Var11 = _Var13;
            local_88 = lVar17;
            (**(code **)(lVar17 + 0x20))();
            _Var3 = Network::NWEndpoint::Port::get_rawValue(PVar8);
            lVar7 = local_88;
            uVar12 = (uint)(unaff_x25 >> 0x3e);
            uVar14 = (uint)CONCAT62(extraout_var_00,_Var3);
            if (uVar12 == 0) {
              uVar9 = unaff_x25;
              FUN_100666b30();
              local_90 = uVar9;
              _swift_release(this_00);
              (**(code **)(local_88 + 8))(local_80,_Var13);
              (**(code **)(lVar16 + 8))(puVar15,lVar4);
              uVar9 = unaff_x25;
              FUN_100666b3c(unaff_x25);
              _swift_release(unaff_x25 & 0x3fffffffffffffff);
              unaff_x25 = local_90 & 0xffffffff0000ffff |
                          (ulong)(((uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8) << 0x10);
              FUN_100667770(unaff_x25,lVar19,uVar9,lVar4);
            }
            else {
              if (uVar12 != 1) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aa6e0);
                (*pcVar1)();
              }
              uVar9 = unaff_x25 & 0x3fffffffffffffff;
              FUN_100666b68();
              local_a0 = uVar9;
              local_94 = param_4;
              local_90 = _Var11;
              _swift_release(this_00);
              uVar12 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              local_a4 = uVar12 >> 0x10 | uVar12 << 0x10;
              (**(code **)(lVar7 + 8))(local_80,_Var13);
              (**(code **)(lVar16 + 8))(puVar15,lVar4);
              uVar9 = unaff_x25 & 0x3fffffffffffffff;
              FUN_100666b7c(uVar9);
              _swift_release(unaff_x25 & 0x3fffffffffffffff);
              unaff_x25 = local_a0 & 0xffffffff0000ffff | (ulong)(local_a4 & 0xffff0000);
              FUN_1006677c8(unaff_x25,lVar19,local_90,local_94,uVar9,lVar4);
            }
          }
        }
      }
      else {
        (**(code **)(lVar16 + 8))(puVar15,lVar4);
        _swift_release(this_00);
      }
    }
  }
  return unaff_x25;
}



/* Address: 0x1009aa6e0 | FUN_1009aa6e0 */

void FUN_1009aa6e0(undefined8 *param_1)

{
  FUN_100980638();
  _swift_allocError(&DAT_100eeb710,param_1,0,0);
  *param_1 = 1;
  *(undefined1 *)(param_1 + 1) = 3;
  _swift_willThrow();
  return;
}



/* Address: 0x1009aa734 | FUN_1009aa734 */

void FUN_1009aa734(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_1009ab6a0(param_1,param_2,*(undefined8 *)(param_3 + 0x50),*(undefined8 *)(param_3 + 0x58));
  return;
}



/* Address: 0x1009aa740 | thunk_FUN_1009aa744 */

void thunk_FUN_1009aa744(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 auStack_70 [4];
  
  lVar10 = *unaff_x20;
  lVar1 = 0;
  FUN_1009a2f9c();
  uVar8 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)auStack_70 - uVar8;
  puVar9 = (undefined8 *)(lVar7 - uVar8);
  FUN_10000cbfc(param_1,auStack_70);
  puVar2 = puVar9;
  _swift_dynamicCast(puVar9,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,lVar1,0);
  if ((int)puVar2 == 0) {
    if (param_2 != 0) {
      FUN_100980638();
      puVar4 = &DAT_100eeb710;
      uVar3 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar8 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar8;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar6 = &DAT_100f242a0;
        _swift_allocObject(&DAT_100f242a0,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        pcVar11 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar4);
        (*pcVar11)(thunk_FUN_1008d678c,puVar6,uVar8,lVar1);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar4;
        thunk_FUN_1005de8f4(puVar4);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar7);
        _swift_bridgeObjectRelease(uVar3);
      }
      _swift_errorRelease(puVar4);
    }
  }
  else {
    FUN_1009ab7e8(puVar9,lVar7);
    uVar3 = 0;
    FUN_1009a8f78(0,*(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58));
    FUN_1009a7108(lVar7,param_2,uVar3,&PTR_PTR_100ff2640);
    FUN_1009ab82c(lVar7);
  }
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x1009aa744 | FUN_1009aa744 */

void FUN_1009aa744(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  long *unaff_x20;
  undefined8 *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 auStack_70 [4];
  
  lVar10 = *unaff_x20;
  lVar1 = 0;
  FUN_1009a2f9c();
  uVar8 = *(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar7 = (long)auStack_70 - uVar8;
  puVar9 = (undefined8 *)(lVar7 - uVar8);
  FUN_10000cbfc(param_1,auStack_70);
  puVar2 = puVar9;
  _swift_dynamicCast(puVar9,auStack_70,PTR___type_metadata_for_Any_100eae0c0 + 8,lVar1,0);
  if ((int)puVar2 == 0) {
    if (param_2 != 0) {
      FUN_100980638();
      puVar4 = &DAT_100eeb710;
      uVar3 = 0;
      _swift_allocError(&DAT_100eeb710,puVar2,0,0);
      *puVar2 = 1;
      *(undefined1 *)(puVar2 + 1) = 3;
      uVar8 = *(ulong *)(param_2 + 0x20);
      lVar1 = *(long *)(param_2 + 0x28);
      _swift_getObjectType();
      uVar5 = uVar8;
      lVar7 = lVar1;
      (**(code **)(lVar1 + 0x10))();
      if ((uVar5 & 1) == 0) {
        puVar6 = &DAT_100f242a0;
        _swift_allocObject(&DAT_100f242a0,0x20,7);
        *(long *)(puVar6 + 0x10) = param_2;
        *(undefined **)(puVar6 + 0x18) = puVar4;
        pcVar11 = *(code **)(lVar1 + 0x18);
        _swift_retain(param_2);
        _swift_errorRetain(puVar4);
        (*pcVar11)(thunk_FUN_1008d678c,puVar6,uVar8,lVar1);
        _swift_release(puVar6);
      }
      else {
        puVar6 = puVar4;
        thunk_FUN_1005de8f4(puVar4);
        FUN_1006486f8();
        FUN_100004550(puVar6,lVar7);
        _swift_bridgeObjectRelease(uVar3);
      }
      _swift_errorRelease(puVar4);
    }
  }
  else {
    FUN_1009ab7e8(puVar9,lVar7);
    uVar3 = 0;
    FUN_1009a8f78(0,*(undefined8 *)(lVar10 + 0x50),*(undefined8 *)(lVar10 + 0x58));
    FUN_1009a7108(lVar7,param_2,uVar3,&PTR_PTR_100ff2640);
    FUN_1009ab82c(lVar7);
  }
  FUN_100004594(auStack_70);
  return;
}



/* Address: 0x1009aa910 | thunk_FUN_1009aa914 */

void thunk_FUN_1009aa914(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uStack_58;
  
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x58);
  uVar9 = *(undefined8 *)(lVar5 + 0x58);
  uVar8 = *(undefined8 *)(lVar5 + 0x50);
  uVar1 = 0;
  FUN_1009a8f78(0,uVar8,lVar6);
  FUN_1009a6744();
  _swift_unknownObjectRelease();
  FUN_10061d8d8(&uStack_58,param_1,uVar8,uVar1,uVar8,&PTR_PTR_100f23ff8);
  lVar6 = *(long *)(*(long *)(lVar6 + 8) + 8);
  pcVar7 = *(code **)(lVar6 + 0x50);
  uVar1 = uVar8;
  lVar5 = lVar6;
  (*pcVar7)(uVar8,lVar6);
  uVar2 = uVar1;
  _swift_getObjectType();
  puVar4 = PTR___type_metadata_for____100eae0c8;
  FUN_1000f4a44();
  FUN_100988f00(uVar2,puVar4 + 8,lVar5);
  _swift_unknownObjectRelease(uVar1);
  uVar1 = uVar8;
  (*pcVar7)(uVar8);
  uVar3 = uVar1;
  _swift_getObjectType();
  puVar4 = &DAT_100f24200;
  _swift_allocObject(&DAT_100f24200,0x30,7);
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = uStack_58;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  pcVar7 = *(code **)(lVar6 + 0x18);
  _swift_unknownObjectRetain(uStack_58);
  _swift_retain(uVar2);
  (*pcVar7)(FUN_1009ab660,puVar4,uVar3,lVar6);
  _swift_unknownObjectRelease(uVar1);
  _swift_release(puVar4);
  _swift_release(uVar2);
  _swift_unknownObjectRelease(uStack_58);
  return;
}



/* Address: 0x1009aa914 | FUN_1009aa914 */

void FUN_1009aa914(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  long *unaff_x20;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 local_58;
  
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x58);
  uVar9 = *(undefined8 *)(lVar5 + 0x58);
  uVar8 = *(undefined8 *)(lVar5 + 0x50);
  uVar1 = 0;
  FUN_1009a8f78(0,uVar8,lVar6);
  FUN_1009a6744();
  _swift_unknownObjectRelease();
  FUN_10061d8d8(&local_58,param_1,uVar8,uVar1,uVar8,&PTR_PTR_100f23ff8);
  lVar6 = *(long *)(*(long *)(lVar6 + 8) + 8);
  pcVar7 = *(code **)(lVar6 + 0x50);
  uVar1 = uVar8;
  lVar5 = lVar6;
  (*pcVar7)(uVar8,lVar6);
  uVar2 = uVar1;
  _swift_getObjectType();
  puVar4 = PTR___type_metadata_for____100eae0c8;
  FUN_1000f4a44();
  FUN_100988f00(uVar2,puVar4 + 8,lVar5);
  _swift_unknownObjectRelease(uVar1);
  uVar1 = uVar8;
  (*pcVar7)(uVar8);
  uVar3 = uVar1;
  _swift_getObjectType();
  puVar4 = &DAT_100f24200;
  _swift_allocObject(&DAT_100f24200,0x30,7);
  *(undefined8 *)(puVar4 + 0x18) = uVar9;
  *(undefined8 *)(puVar4 + 0x10) = uVar8;
  *(undefined8 *)(puVar4 + 0x20) = local_58;
  *(undefined8 *)(puVar4 + 0x28) = uVar2;
  pcVar7 = *(code **)(lVar6 + 0x18);
  _swift_unknownObjectRetain(local_58);
  _swift_retain(uVar2);
  (*pcVar7)(FUN_1009ab660,puVar4,uVar3,lVar6);
  _swift_unknownObjectRelease(uVar1);
  _swift_release(puVar4);
  _swift_release(uVar2);
  _swift_unknownObjectRelease(local_58);
  return;
}



/* Address: 0x1009aaaa0 | FUN_1009aaaa0 */

void FUN_1009aaaa0(undefined8 param_1,undefined8 param_2)

{
  FUN_10061d4f8(param_1,param_2,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x1009aaac8 | FUN_1009aaac8 */

void FUN_1009aaac8(void)

{
  FUN_10061d040();
  return;
}



/* Address: 0x1009aaaf0 | FUN_1009aaaf0 */

void FUN_1009aaaf0(void)

{
  FUN_10061d154();
  return;
}



/* Address: 0x1009aab18 | FUN_1009aab18 */

void FUN_1009aab18(void)

{
  FUN_10061d26c();
  return;
}



/* Address: 0x1009aab40 | FUN_1009aab40 */

void FUN_1009aab40(undefined8 param_1)

{
  FUN_10061d284(param_1,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x1009aab68 | FUN_1009aab68 */

void FUN_1009aab68(void)

{
  FUN_10061d298();
  return;
}



/* Address: 0x1009aab90 | FUN_1009aab90 */

void FUN_1009aab90(undefined8 param_1)

{
  FUN_10061d360(param_1,&PTR_PTR_100f24068);
  return;
}



/* Address: 0x1009aabb8 | FUN_1009aabb8 */

void FUN_1009aabb8(void)

{
  FUN_10061cf14();
  return;
}



/* Address: 0x1009aabe0 | FUN_1009aabe0 */

void FUN_1009aabe0(void)

{
  FUN_10061d704();
  return;
}



/* Address: 0x1009aac08 | FUN_1009aac08 */

undefined ** FUN_1009aac08(void)

{
  return &PTR_PTR_100f23f88;
}



/* Address: 0x1009aac14 | FUN_1009aac14 */

void FUN_1009aac14(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long lVar5;
  
  lVar11 = *unaff_x20;
  SVar2 = Network::NWListener::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar12 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + lVar8;
  (**(code **)(lVar12 + 0x10))(puVar9,param_1,lVar5);
  puVar6 = puVar9;
  (**(code **)(lVar12 + 0x58))(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
     )) {
    if ((PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
       )) {
      if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         )) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae08);
        (*pcVar1)();
      }
      if ((PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
           == (undefined *)0x0) ||
         (iVar4 != *(int *)
                    PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
         )) {
        if ((PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
             == (undefined *)0x0) ||
           (iVar4 != *(int *)
                      PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
           )) {
          *(undefined4 *)((long)auStack_58 + lVar8) = 0;
          *(undefined8 *)((long)&uStack_60 + lVar8) = 0x210;
          SVar14.bridgeObject = (void *)0x2;
          SVar14.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar14,(StaticString)0x6168636165726e55,
                     0xeb00000000656c62,0xdb7150);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae60);
          (*pcVar1)();
        }
        lVar8 = unaff_x20[0xb];
        unaff_x20[0xb] = 0;
        _swift_release(lVar8);
      }
      else {
        FUN_1009ab0d0();
      }
    }
    else {
      (**(code **)(lVar12 + 0x60))(puVar9,lVar5);
      NVar3 = Network::NWError::typeMetadataAccessor();
      lVar12 = CONCAT71(extraout_var_00,NVar3.value);
      lVar13 = *(long *)(lVar12 + -8);
      lVar10 = (long)puVar9 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar8 = lVar10;
      (**(code **)(lVar13 + 0x20))(lVar10,puVar9,lVar12);
      FUN_1009a8044();
      lVar5 = lVar12;
      _swift_allocError(lVar12,lVar8,0,0);
      (**(code **)(lVar13 + 0x10))(lVar8,lVar10,lVar12);
      uVar7 = 0;
      FUN_1009a8f78(0,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58));
      FUN_1009a61e4(lVar5,2,0,uVar7,&PTR_PTR_100ff2640);
      (**(code **)(lVar13 + 8))(lVar10,lVar12);
      _swift_errorRelease(lVar5);
    }
  }
  else {
    (**(code **)(lVar12 + 8))(puVar9,lVar5);
  }
  return;
}



/* Address: 0x1009aae60 | FUN_1009aae60 */

void FUN_1009aae60(undefined8 param_1,long param_2,undefined8 param_3,long param_4)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  char cVar7;
  undefined8 uVar8;
  code *pcVar9;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  (**(code **)(*(long *)(param_4 + 0x10) + 0x20))(param_2,param_3);
  puVar2 = &DAT_100f24228;
  _swift_allocObject(&DAT_100f24228,0x28,7);
  *(undefined8 *)(puVar2 + 0x10) = param_3;
  *(long *)(puVar2 + 0x18) = param_4;
  *(undefined8 *)(puVar2 + 0x20) = param_1;
  puVar3 = &DAT_100f24250;
  _swift_allocObject(&DAT_100f24250,0x28,7);
  *(long *)(puVar3 + 0x10) = param_2;
  *(code **)(puVar3 + 0x18) = FUN_1009ab690;
  *(undefined **)(puVar3 + 0x20) = puVar2;
  uVar4 = *(ulong *)(param_2 + 0x20);
  lVar1 = *(long *)(param_2 + 0x28);
  _swift_getObjectType();
  pcVar9 = *(code **)(lVar1 + 0x10);
  _swift_unknownObjectRetain_n(param_1,2);
  _swift_retain_n(param_2,2);
  _swift_retain_n(puVar2,2);
  uVar5 = uVar4;
  (*pcVar9)(uVar4,lVar1);
  if ((uVar5 & 1) == 0) {
    puVar6 = &DAT_100f24278;
    _swift_allocObject(&DAT_100f24278,0x28,7);
    *(long *)(puVar6 + 0x10) = param_2;
    *(code **)(puVar6 + 0x18) = FUN_1008db354;
    *(undefined **)(puVar6 + 0x20) = puVar3;
    pcVar9 = *(code **)(lVar1 + 0x18);
    _swift_retain(param_2);
    _swift_retain(puVar3);
    (*pcVar9)(FUN_1008db360,puVar6,uVar4,lVar1);
    _swift_unknownObjectRelease(param_1);
    _swift_release(puVar6);
    _swift_release_n(puVar2,2);
    _swift_release(param_2);
    _swift_release(puVar3);
    return;
  }
  _swift_beginAccess(param_2 + 0x10,auStack_78,0,0);
  uVar8 = *(undefined8 *)(param_2 + 0x10);
  cVar7 = *(char *)(param_2 + 0x18);
  if (cVar7 == '\x01') {
    FUN_1005dfeb4(uVar8);
    FUN_10061cf14(2,0,param_3,*(undefined8 *)(param_4 + 8));
    cVar7 = '\x01';
  }
  else if (cVar7 == -1) {
    _swift_beginAccess(param_2 + 0x30,auStack_90,0x21,0);
    FUN_10064967c(FUN_1008db354,puVar3);
    _swift_endAccess(auStack_90);
    goto LAB_1009ab068;
  }
  FUN_100308538(uVar8,cVar7);
LAB_1009ab068:
  FUN_1006486f8(0,0,0);
  FUN_100004550(0,0);
  _swift_unknownObjectRelease(param_1);
  _swift_release_n(puVar2,2);
  _swift_release(param_2);
  _swift_release(puVar3);
  _swift_bridgeObjectRelease(0);
  return;
}



/* Address: 0x1009ab0d0 | FUN_1009ab0d0 */

/* WARNING: Removing unreachable block (ram,0x0001009ab100) */
/* WARNING: Removing unreachable block (ram,0x0001009ab198) */

void FUN_1009ab0d0(undefined8 param_1)

{
  code *pcVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar5 = *unaff_x20;
  lVar4 = unaff_x20[0x10];
  unaff_x20[0x10] = 0;
  FUN_1009aa22c();
  lVar6 = *(long *)((long)unaff_x20 + DAT_101058280);
  iVar2 = _pthread_mutex_lock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ab194);
    (*pcVar1)();
  }
  FUN_1009ab19c();
  iVar2 = _pthread_mutex_unlock((pthread_mutex_t *)(lVar6 + 0x10));
  if (iVar2 != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ab198);
    (*pcVar1)();
  }
  uVar3 = 0;
  FUN_1009a8f78(0,*(undefined8 *)(lVar5 + 0x50),*(undefined8 *)(lVar5 + 0x58));
  FUN_1009a50c4(lVar4,uVar3,&PTR_PTR_100ff2640);
  FUN_1005d8534(param_1);
  _swift_release(lVar4);
  return;
}



/* Address: 0x1009ab19c | FUN_1009ab19c */

void FUN_1009ab19c(long param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  puVar1 = (undefined8 *)(param_1 + DAT_101058278);
  uVar2 = *puVar1;
  uVar3 = puVar1[1];
  *puVar1 = param_2;
  puVar1[1] = 0xf000000000000007;
  FUN_1005d84e8(param_2);
  FUN_1005d8534(uVar2);
  FUN_1005d8534(uVar3);
  return;
}



/* Address: 0x1009ab1f4 | FUN_1009ab1f4 */

void FUN_1009ab1f4(void)

{
  code *pcVar1;
  long unaff_x20;
  
  if (*(long *)(unaff_x20 + 0x48) != 0) {
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ab204);
  (*pcVar1)();
}



/* Address: 0x1009ab204 | FUN_1009ab204 */

void FUN_1009ab204(undefined8 *param_1)

{
  long lVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  ulong uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 uVar8;
  code *pcVar9;
  
  if (param_1 != (undefined8 *)0x0) {
    puVar2 = param_1;
    FUN_100980638();
    puVar3 = &DAT_100eeb710;
    uVar8 = 0;
    _swift_allocError(&DAT_100eeb710,puVar2,0,0);
    *puVar2 = 1;
    *(undefined1 *)(puVar2 + 1) = 3;
    uVar4 = param_1[4];
    lVar1 = param_1[5];
    _swift_getObjectType();
    uVar5 = uVar4;
    lVar7 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar5 & 1) == 0) {
      puVar6 = &DAT_100f24110;
      _swift_allocObject(&DAT_100f24110,0x20,7);
      *(undefined8 **)(puVar6 + 0x10) = param_1;
      *(undefined **)(puVar6 + 0x18) = puVar3;
      pcVar9 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_1);
      _swift_errorRetain(puVar3);
      (*pcVar9)(FUN_1008d678c,puVar6,uVar4,lVar1);
      _swift_release(puVar6);
    }
    else {
      puVar6 = puVar3;
      thunk_FUN_1005de8f4(puVar3);
      FUN_1006486f8();
      FUN_100004550(puVar6,lVar7);
      _swift_bridgeObjectRelease(uVar8);
    }
    _swift_errorRelease(puVar3);
    return;
  }
  return;
}



/* Address: 0x1009ab318 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  FUN_10061fa64();
  return;
}



/* Address: 0x1009ab31c | FUN_1009ab31c */

undefined8 FUN_1009ab31c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2508;
  FUN_1000f7830(&DAT_100ff2508,&DAT_100c8b360);
  (**(code **)(*(long *)(puVar1 + -8) + 0x20))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009ab36c | FUN_1009ab36c */

undefined8 FUN_1009ab36c(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  
  puVar1 = &DAT_100ff2508;
  FUN_1000f7830(&DAT_100ff2508,&DAT_100c8b360);
  (**(code **)(*(long *)(puVar1 + -8) + 0x10))(param_2,param_1,puVar1);
  return param_2;
}



/* Address: 0x1009ab3bc | thunk_FUN_1009aac14 */

void thunk_FUN_1009aac14(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long lVar5;
  
  lVar11 = *unaff_x20;
  SVar2 = Network::NWListener::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar12 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + lVar8;
  (**(code **)(lVar12 + 0x10))(puVar9,param_1,lVar5);
  puVar6 = puVar9;
  (**(code **)(lVar12 + 0x58))(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
     )) {
    if ((PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
       )) {
      if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         )) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae08);
        (*pcVar1)();
      }
      if ((PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
           == (undefined *)0x0) ||
         (iVar4 != *(int *)
                    PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
         )) {
        if ((PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
             == (undefined *)0x0) ||
           (iVar4 != *(int *)
                      PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
           )) {
          *(undefined4 *)((long)auStack_58 + lVar8) = 0;
          *(undefined8 *)((long)&uStack_60 + lVar8) = 0x210;
          SVar14.bridgeObject = (void *)0x2;
          SVar14.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar14,(StaticString)0x6168636165726e55,
                     0xeb00000000656c62,0xdb7150);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae60);
          (*pcVar1)();
        }
        lVar8 = unaff_x20[0xb];
        unaff_x20[0xb] = 0;
        _swift_release(lVar8);
      }
      else {
        FUN_1009ab0d0();
      }
    }
    else {
      (**(code **)(lVar12 + 0x60))(puVar9,lVar5);
      NVar3 = Network::NWError::typeMetadataAccessor();
      lVar12 = CONCAT71(extraout_var_00,NVar3.value);
      lVar13 = *(long *)(lVar12 + -8);
      lVar10 = (long)puVar9 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar8 = lVar10;
      (**(code **)(lVar13 + 0x20))(lVar10,puVar9,lVar12);
      FUN_1009a8044();
      lVar5 = lVar12;
      _swift_allocError(lVar12,lVar8,0,0);
      (**(code **)(lVar13 + 0x10))(lVar8,lVar10,lVar12);
      uVar7 = 0;
      FUN_1009a8f78(0,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58));
      FUN_1009a61e4(lVar5,2,0,uVar7,&PTR_PTR_100ff2640);
      (**(code **)(lVar13 + 8))(lVar10,lVar12);
      _swift_errorRelease(lVar5);
    }
  }
  else {
    (**(code **)(lVar12 + 8))(puVar9,lVar5);
  }
  return;
}



/* Address: 0x1009ab3c0 | FUN_1009ab3c0 */

undefined8 FUN_1009ab3c0(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + 0x50);
}



/* Address: 0x1009ab3c8 | FUN_1009ab3c8 */

undefined8 FUN_1009ab3c8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + DAT_101058278);
}



/* Address: 0x1009ab3d8 | FUN_1009ab3d8 */

undefined8 FUN_1009ab3d8(void)

{
  long unaff_x20;
  
  return *(undefined8 *)(unaff_x20 + DAT_101058278 + 8);
}



/* Address: 0x1009ab3ec | FUN_1009ab3ec */

void FUN_1009ab3ec(void)

{
  return;
}



/* Address: 0x1009ab3fc | FUN_1009ab3fc */

void FUN_1009ab3fc(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  ulong uVar3;
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  lVar2 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar2 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar2 + 8))(unaff_x20 + (uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff)),lVar1);
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ab460 | FUN_1009ab460 */

void FUN_1009ab460(void)

{
  ulong uVar1;
  long unaff_x20;
  
  uVar1 = (ulong)*(byte *)(*(long *)(*(long *)(unaff_x20 + 0x18) + -8) + 0x50);
  FUN_1009a8850(unaff_x20 + (uVar1 + 0x38 & (uVar1 ^ 0xffffffffffffffff)),
                *(long *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x28));
  return;
}



/* Address: 0x1009ab49c | FUN_1009ab49c */

void FUN_1009ab49c(long *param_1)

{
  long unaff_x20;
  long unaff_x21;
  
  FUN_1009a8850(*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  if (unaff_x21 != 0) {
    *param_1 = unaff_x21;
  }
  return;
}



/* Address: 0x1009ab4d4 | FUN_1009ab4d4 */

void FUN_1009ab4d4(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long unaff_x20;
  long lVar5;
  ulong uVar6;
  long lVar7;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  lVar5 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar5 + 0x50) + 0x38 &
          ((ulong)*(byte *)(lVar5 + 0x50) ^ 0xffffffffffffffff);
  lVar2 = *(long *)(lVar5 + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(unaff_x20 + 0x28),lVar4,0x100cb819c,
             &TargetProtocolRequirement_100cb81b4);
  lVar7 = *(long *)(lVar1 + -8);
  uVar3 = (ulong)*(byte *)(lVar7 + 0x50);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x30));
  (**(code **)(lVar5 + 8))(unaff_x20 + uVar6,lVar4);
  (**(code **)(lVar7 + 8))(unaff_x20 + (uVar6 + lVar2 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar1)
  ;
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ab598 | FUN_1009ab598 */

void FUN_1009ab598(void)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long unaff_x20;
  long lVar4;
  undefined8 uVar5;
  ulong uVar6;
  
  lVar4 = *(long *)(unaff_x20 + 0x18);
  uVar5 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar4 + -8) + 0x50);
  uVar6 = uVar3 + 0x38 & (uVar3 ^ 0xffffffffffffffff);
  lVar2 = *(long *)(*(long *)(lVar4 + -8) + 0x40);
  lVar1 = 0;
  _swift_getAssociatedTypeWitness(0,uVar5,lVar4,0x100cb819c,&TargetProtocolRequirement_100cb81b4);
  uVar3 = (ulong)*(byte *)(*(long *)(lVar1 + -8) + 0x50);
  FUN_1009a8228(*(undefined8 *)(unaff_x20 + 0x30),unaff_x20 + uVar6,
                unaff_x20 + (uVar6 + lVar2 + uVar3 & (uVar3 ^ 0xffffffffffffffff)),lVar4,uVar5);
  return;
}



/* Address: 0x1009ab634 | FUN_1009ab634 */

void FUN_1009ab634(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_release(*(undefined8 *)(unaff_x20 + 0x28));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ab660 | FUN_1009ab660 */

void FUN_1009ab660(void)

{
  long unaff_x20;
  
  FUN_1009aae60(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                *(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009ab66c | FUN_1009ab66c */

void FUN_1009ab66c(void)

{
  long unaff_x20;
  
  _swift_unknownObjectRelease(*(undefined8 *)(unaff_x20 + 0x20));
  _swift_deallocObject();
  return;
}



/* Address: 0x1009ab690 | FUN_1009ab690 */

void FUN_1009ab690(void)

{
  long unaff_x20;
  
  FUN_1009ab7b4(*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x10),
                *(undefined8 *)(unaff_x20 + 0x18));
  return;
}



/* Address: 0x1009ab69c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  FUN_100049040();
  return;
}



/* Address: 0x1009ab6a0 | FUN_1009ab6a0 */

void FUN_1009ab6a0(undefined8 *param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 uVar7;
  code *pcVar8;
  
  if (param_2 != 0) {
    FUN_100980638();
    puVar2 = &DAT_100eeb710;
    uVar7 = 0;
    _swift_allocError(&DAT_100eeb710,param_1,0,0);
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = 3;
    uVar3 = *(ulong *)(param_2 + 0x20);
    lVar1 = *(long *)(param_2 + 0x28);
    _swift_getObjectType();
    uVar4 = uVar3;
    lVar6 = lVar1;
    (**(code **)(lVar1 + 0x10))();
    if ((uVar4 & 1) == 0) {
      puVar5 = &DAT_100f242c8;
      _swift_allocObject(&DAT_100f242c8,0x20,7);
      *(long *)(puVar5 + 0x10) = param_2;
      *(undefined **)(puVar5 + 0x18) = puVar2;
      pcVar8 = *(code **)(lVar1 + 0x18);
      _swift_retain(param_2);
      _swift_errorRetain(puVar2);
      (*pcVar8)(thunk_FUN_1008d678c,puVar5,uVar3,lVar1);
      _swift_release(puVar5);
    }
    else {
      puVar5 = puVar2;
      thunk_FUN_1005de8f4(puVar2);
      FUN_1006486f8();
      FUN_100004550(puVar5,lVar6);
      _swift_bridgeObjectRelease(uVar7);
    }
    _swift_errorRelease(puVar2);
    return;
  }
  return;
}



/* Address: 0x1009ab7b4 | FUN_1009ab7b4 */

void FUN_1009ab7b4(undefined8 param_1,undefined8 param_2,long param_3)

{
  FUN_10061cf14(2,0,param_2,*(undefined8 *)(param_3 + 8));
  return;
}



/* Address: 0x1009ab7e8 | FUN_1009ab7e8 */

undefined8 FUN_1009ab7e8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009a2f9c();
  (**(code **)(*(long *)(lVar1 + -8) + 0x20))(param_2,param_1,lVar1);
  return param_2;
}



/* Address: 0x1009ab82c | FUN_1009ab82c */

undefined8 FUN_1009ab82c(undefined8 param_1)

{
  long lVar1;
  
  lVar1 = 0;
  FUN_1009a2f9c();
  (**(code **)(*(long *)(lVar1 + -8) + 8))(param_1,lVar1);
  return param_1;
}



/* Address: 0x1009ab868 | thunk_FUN_1009a8fac */

void thunk_FUN_1009a8fac(void)

{
  FUN_1009a8fac();
  return;
}



/* Address: 0x1009ab86c | thunk_FUN_1009aac14 */

void thunk_FUN_1009aac14(undefined8 param_1)

{
  code *pcVar1;
  State SVar2;
  NWError NVar3;
  int iVar4;
  undefined7 extraout_var;
  undefined1 *puVar6;
  undefined7 extraout_var_00;
  undefined8 uVar7;
  long lVar8;
  undefined1 *puVar9;
  long *unaff_x20;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  String SVar14;
  undefined8 uStack_60;
  undefined4 auStack_58 [2];
  long lVar5;
  
  lVar11 = *unaff_x20;
  SVar2 = Network::NWListener::State::typeMetadataAccessor();
  lVar5 = CONCAT71(extraout_var,SVar2.value);
  lVar12 = *(long *)(lVar5 + -8);
  lVar8 = -(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar9 = &stack0xffffffffffffffb0 + lVar8;
  (**(code **)(lVar12 + 0x10))(puVar9,param_1,lVar5);
  puVar6 = puVar9;
  (**(code **)(lVar12 + 0x58))(puVar9,lVar5);
  iVar4 = (int)puVar6;
  if ((PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
       == (undefined *)0x0) ||
     (iVar4 != *(int *)
                PTR___enum_case_for_Network_NWListener_State_waiting_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f38
     )) {
    if ((PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
         == (undefined *)0x0) ||
       (iVar4 != *(int *)
                  PTR___enum_case_for_Network_NWListener_State_failed_Network_NWListener_State_Type___>__Network_NWError___>_Network_NWListener_State_100ea9f30
       )) {
      if ((PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
           != (undefined *)0x0) &&
         (iVar4 == *(int *)
                    PTR___enum_case_for_Network_NWListener_State_setup_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f28
         )) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae08);
        (*pcVar1)();
      }
      if ((PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
           == (undefined *)0x0) ||
         (iVar4 != *(int *)
                    PTR___enum_case_for_Network_NWListener_State_ready_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f20
         )) {
        if ((PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
             == (undefined *)0x0) ||
           (iVar4 != *(int *)
                      PTR___enum_case_for_Network_NWListener_State_cancelled_Network_NWListener_State_Type___>_Network_NWListener_State_100ea9f40
           )) {
          *(undefined4 *)((long)auStack_58 + lVar8) = 0;
          *(undefined8 *)((long)&uStack_60 + lVar8) = 0x210;
          SVar14.bridgeObject = (void *)0x2;
          SVar14.str = (char *)0xb;
          Swift::_assertionFailure
                    ((StaticString)0x100d8deb0,SVar14,(StaticString)0x6168636165726e55,
                     0xeb00000000656c62,0xdb7150);
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1009aae60);
          (*pcVar1)();
        }
        lVar8 = unaff_x20[0xb];
        unaff_x20[0xb] = 0;
        _swift_release(lVar8);
      }
      else {
        FUN_1009ab0d0();
      }
    }
    else {
      (**(code **)(lVar12 + 0x60))(puVar9,lVar5);
      NVar3 = Network::NWError::typeMetadataAccessor();
      lVar12 = CONCAT71(extraout_var_00,NVar3.value);
      lVar13 = *(long *)(lVar12 + -8);
      lVar10 = (long)puVar9 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
      lVar8 = lVar10;
      (**(code **)(lVar13 + 0x20))(lVar10,puVar9,lVar12);
      FUN_1009a8044();
      lVar5 = lVar12;
      _swift_allocError(lVar12,lVar8,0,0);
      (**(code **)(lVar13 + 0x10))(lVar8,lVar10,lVar12);
      uVar7 = 0;
      FUN_1009a8f78(0,*(undefined8 *)(lVar11 + 0x50),*(undefined8 *)(lVar11 + 0x58));
      FUN_1009a61e4(lVar5,2,0,uVar7,&PTR_PTR_100ff2640);
      (**(code **)(lVar13 + 8))(lVar10,lVar12);
      _swift_errorRelease(lVar5);
    }
  }
  else {
    (**(code **)(lVar12 + 8))(puVar9,lVar5);
  }
  return;
}



/* Address: 0x1009ab870 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1009ab874 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1009ab878 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1009ab87c | thunk_FUN_100049040 */

void thunk_FUN_100049040(void)

{
  thunk_FUN_100049040();
  return;
}



/* Address: 0x1009ab880 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1009ab884 | thunk_FUN_10061fa64 */

void thunk_FUN_10061fa64(void)

{
  thunk_FUN_10061fa64();
  return;
}



/* Address: 0x1009ab888 | thunk_FUN_1009ab88c */

void thunk_FUN_1009ab88c(void)

{
  FUN_1009ab88c();
  return;
}



/* Address: 0x1009ab88c | FUN_1009ab88c */

void FUN_1009ab88c(undefined8 param_1,long param_2)

{
  Options *dtls;
  int iVar1;
  Host HVar2;
  NWEndpoint NVar3;
  bool bVar4;
  undefined1 uVar5;
  MultipathServiceType MVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar8;
  Port PVar9;
  ulong uVar10;
  ulong uVar11;
  NWParameters *pNVar12;
  undefined7 extraout_var_01;
  NWConnection *pNVar13;
  undefined *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  NWParameters *this;
  long lVar19;
  long lVar20;
  long lVar21;
  code *pcVar22;
  undefined1 *puVar23;
  long lVar24;
  undefined1 auStack_80 [8];
  code *local_78;
  long local_70;
  undefined8 uStack_68;
  long lVar7;
  
  HVar2 = Network::NWEndpoint::Host::typeMetadataAccessor();
  lVar19 = CONCAT71(extraout_var,HVar2.value);
  lVar20 = *(long *)(lVar19 + -8);
  lVar24 = *(long *)(lVar20 + 0x40);
  puVar23 = auStack_80 + -(lVar24 + 0xfU & 0xfffffffffffffff0);
  NVar3 = Network::NWEndpoint::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,NVar3.value);
  lVar21 = *(long *)(lVar7 + -8);
  local_70 = *(long *)(lVar21 + 0x40);
  lVar17 = (long)puVar23 - (local_70 + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(code **)(lVar21 + 0x10);
  uStack_68 = param_1;
  (*pcVar16)(lVar17,param_1,lVar7);
  lVar18 = lVar17;
  (**(code **)(lVar21 + 0x58))(lVar17,lVar7);
  if ((PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
       == (undefined *)0x0) ||
     ((int)lVar18 !=
      *(int *)
       PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
     )) {
    (**(code **)(lVar21 + 8))(lVar17,lVar7);
  }
  else {
    local_78 = pcVar16;
    (**(code **)(lVar21 + 0x60))(lVar17,lVar7);
    puVar8 = &DAT_100ff0858;
    FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
    iVar1 = *(int *)(puVar8 + 0x30);
    lVar18 = lVar19;
    (**(code **)(lVar20 + 0x20))(puVar23,lVar17);
    HVar2.value = (__int8)lVar18;
    PVar9 = Network::NWEndpoint::Port::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9._context - 8) + 8))(lVar17 + iVar1,PVar9._context);
    lVar18 = lVar17 - (lVar24 + 0xfU & 0xfffffffffffffff0);
    Network::NWEndpoint::Host::init((String)(ZEXT816(0xe000000000000000) << 0x40));
    bVar4 = Network::NWEndpoint::Host::___infix((Host)(__int8)puVar23,(Host)(__int8)lVar18,HVar2);
    pcVar16 = *(code **)(lVar20 + 8);
    (*pcVar16)(lVar18,lVar19);
    if (bVar4) {
      FUN_1009922a8();
      puVar8 = &DAT_100f21bc8;
      _swift_allocError(&DAT_100f21bc8,lVar18,0,0);
      FUN_1009ae784();
      _swift_errorRelease(puVar8);
      if (param_2 != 0) {
        puVar8 = &DAT_100f21bc8;
        uVar15 = 0;
        _swift_allocError(&DAT_100f21bc8,lVar18,0,0);
        uVar10 = *(ulong *)(param_2 + 0x20);
        lVar18 = *(long *)(param_2 + 0x28);
        _swift_getObjectType();
        uVar11 = uVar10;
        lVar7 = lVar18;
        (**(code **)(lVar18 + 0x10))();
        if ((uVar11 & 1) == 0) {
          puVar14 = &DAT_100f24498;
          _swift_allocObject(&DAT_100f24498,0x20,7);
          *(long *)(puVar14 + 0x10) = param_2;
          *(undefined **)(puVar14 + 0x18) = puVar8;
          pcVar22 = *(code **)(lVar18 + 0x18);
          _swift_retain(param_2);
          _swift_errorRetain(puVar8);
          (*pcVar22)(thunk_FUN_1008d678c,puVar14,uVar10,lVar18);
          _swift_release(puVar14);
        }
        else {
          puVar14 = puVar8;
          thunk_FUN_1005de8f4(puVar8);
          FUN_1006486f8();
          FUN_100004550(puVar14,lVar7);
          _swift_bridgeObjectRelease(uVar15);
        }
        (*pcVar16)(puVar23,lVar19);
        _swift_errorRelease(puVar8);
        return;
      }
      (*pcVar16)(puVar23,lVar19);
      return;
    }
    (*pcVar16)(puVar23,lVar19);
    pcVar16 = local_78;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x80);
  *(long *)(unaff_x20 + 0x80) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar15);
  pNVar12 = Network::NWParameters::typeMetadataAccessor();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x88);
  dtls = *(Options **)(unaff_x20 + 0x90);
  _swift_retain(dtls);
  _swift_retain(uVar15);
  pNVar12 = Network::NWParameters::___allocating_init(pNVar12,dtls);
  if (*(code **)(unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::nwParametersConfigurator
                ) != (code *)0x0) {
    (**(code **)(unaff_x20 +
                _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::nwParametersConfigurator
                ))(pNVar12);
  }
  if (((*(byte *)(unaff_x20 + 0xe8) & 1) == 0) && (*(char *)(unaff_x20 + 0xe9) != '\x01')) {
    uVar5 = *(undefined1 *)(unaff_x20 + 0x108);
  }
  else {
    uVar5 = true;
  }
  this = pNVar12;
  Network::NWParameters::set_allowLocalEndpointReuse(pNVar12,(bool)uVar5);
  Network::NWParameters::set_includePeerToPeer(this,*(bool *)(unaff_x20 + 0xea));
  MVar6 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  lVar18 = *(long *)(CONCAT71(extraout_var_01,MVar6.value) + -8);
  lVar19 = lVar17 - (*(long *)(lVar18 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar18 + 0x10))
            (lVar19,unaff_x20 +
                    _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::multipathServiceType
             ,CONCAT71(extraout_var_01,MVar6.value));
  Network::NWParameters::set_multipathServiceType(pNVar12,(MultipathServiceType)(__int8)lVar19);
  lVar17 = lVar17 - (local_70 + 0xfU & 0xfffffffffffffff0);
  (*pcVar16)(lVar17,uStack_68,lVar7);
  pNVar13 = Network::NWConnection::typeMetadataAccessor();
  _swift_allocObject(pNVar13,*(undefined4 *)(pNVar13 + 0x30),*(undefined2 *)(pNVar13 + 0x34));
  _swift_retain(pNVar12);
  pNVar13 = Network::NWConnection::init(pNVar13,(NWEndpoint)(__int8)lVar17,pNVar12);
  _swift_retain();
  Network::NWConnection::_set_stateUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_betterPathUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_viabilityUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_pathUpdateHandler(pNVar13);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x60);
  *(NWConnection **)(unaff_x20 + 0x60) = pNVar13;
  _swift_retain(pNVar13);
  _swift_release(uVar15);
  Network::NWConnection::start(pNVar13,*(OS_dispatch_queue **)(unaff_x20 + 0x78));
  _swift_release(pNVar12);
  _swift_release(pNVar13);
  return;
}



/* Address: 0x1009abd4c | FUN_1009abd4c */

void FUN_1009abd4c(undefined8 param_1,long param_2)

{
  Options *tls;
  int iVar1;
  Host HVar2;
  NWEndpoint NVar3;
  bool bVar4;
  undefined1 uVar5;
  MultipathServiceType MVar6;
  undefined7 extraout_var;
  undefined7 extraout_var_00;
  undefined *puVar8;
  Port PVar9;
  ulong uVar10;
  ulong uVar11;
  NWParameters *pNVar12;
  undefined7 extraout_var_01;
  NWConnection *pNVar13;
  undefined *puVar14;
  undefined8 uVar15;
  code *pcVar16;
  long unaff_x20;
  long lVar17;
  long lVar18;
  NWParameters *this;
  long lVar19;
  long lVar20;
  code *pcVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  code *local_90;
  long local_88;
  undefined8 uStack_80;
  undefined1 auStack_78 [24];
  long lVar7;
  
  HVar2 = Network::NWEndpoint::Host::typeMetadataAccessor();
  lVar23 = CONCAT71(extraout_var,HVar2.value);
  lVar19 = *(long *)(lVar23 + -8);
  lVar24 = *(long *)(lVar19 + 0x40);
  lVar22 = (long)&local_90 - (lVar24 + 0xfU & 0xfffffffffffffff0);
  NVar3 = Network::NWEndpoint::typeMetadataAccessor();
  lVar7 = CONCAT71(extraout_var_00,NVar3.value);
  lVar20 = *(long *)(lVar7 + -8);
  local_88 = *(long *)(lVar20 + 0x40);
  lVar17 = lVar22 - (local_88 + 0xfU & 0xfffffffffffffff0);
  pcVar16 = *(code **)(lVar20 + 0x10);
  uStack_80 = param_1;
  (*pcVar16)(lVar17,param_1,lVar7);
  lVar18 = lVar17;
  (**(code **)(lVar20 + 0x58))(lVar17,lVar7);
  if ((PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
       == (undefined *)0x0) ||
     ((int)lVar18 !=
      *(int *)
       PTR___enum_case_for_Network_NWEndpoint_hostPort_Network_NWEndpoint_Type___>__Network_NWEndpoint_Host_Network_NWEndpoint_Port___>_Network_NWEndpoint_100ea9ee8
     )) {
    (**(code **)(lVar20 + 8))(lVar17,lVar7);
  }
  else {
    local_90 = pcVar16;
    (**(code **)(lVar20 + 0x60))(lVar17,lVar7);
    puVar8 = &DAT_100ff0858;
    FUN_1000f7830(&DAT_100ff0858,&DAT_100c89468);
    iVar1 = *(int *)(puVar8 + 0x30);
    lVar18 = lVar23;
    (**(code **)(lVar19 + 0x20))(lVar22,lVar17);
    HVar2.value = (__int8)lVar18;
    PVar9 = Network::NWEndpoint::Port::typeMetadataAccessor();
    (**(code **)(*(long *)(PVar9._context - 8) + 8))(lVar17 + iVar1,PVar9._context);
    lVar18 = lVar17 - (lVar24 + 0xfU & 0xfffffffffffffff0);
    Network::NWEndpoint::Host::init((String)(ZEXT816(0xe000000000000000) << 0x40));
    bVar4 = Network::NWEndpoint::Host::___infix((Host)(__int8)lVar22,(Host)(__int8)lVar18,HVar2);
    pcVar16 = *(code **)(lVar19 + 8);
    (*pcVar16)(lVar18,lVar23);
    if (bVar4) {
      FUN_1009922a8();
      puVar8 = &DAT_100f21bc8;
      _swift_allocError(&DAT_100f21bc8,lVar18,0,0);
      FUN_1009aeb18();
      _swift_errorRelease(puVar8);
      if (param_2 != 0) {
        puVar8 = &DAT_100f21bc8;
        uVar15 = 0;
        _swift_allocError(&DAT_100f21bc8,lVar18,0,0);
        uVar10 = *(ulong *)(param_2 + 0x20);
        lVar18 = *(long *)(param_2 + 0x28);
        _swift_getObjectType();
        uVar11 = uVar10;
        lVar7 = lVar18;
        (**(code **)(lVar18 + 0x10))();
        if ((uVar11 & 1) == 0) {
          puVar14 = &DAT_100f247e0;
          _swift_allocObject(&DAT_100f247e0,0x20,7);
          *(long *)(puVar14 + 0x10) = param_2;
          *(undefined **)(puVar14 + 0x18) = puVar8;
          pcVar21 = *(code **)(lVar18 + 0x18);
          _swift_retain(param_2);
          _swift_errorRetain(puVar8);
          (*pcVar21)(thunk_FUN_1008d678c,puVar14,uVar10,lVar18);
          _swift_release(puVar14);
        }
        else {
          puVar14 = puVar8;
          thunk_FUN_1005de8f4(puVar8);
          FUN_1006486f8();
          FUN_100004550(puVar14,lVar7);
          _swift_bridgeObjectRelease(uVar15);
        }
        (*pcVar16)(lVar22,lVar23);
        _swift_errorRelease(puVar8);
        return;
      }
      (*pcVar16)(lVar22,lVar23);
      return;
    }
    (*pcVar16)(lVar22,lVar23);
    pcVar16 = local_90;
  }
  uVar15 = *(undefined8 *)(unaff_x20 + 0x78);
  *(long *)(unaff_x20 + 0x78) = param_2;
  _swift_retain(param_2);
  _swift_release(uVar15);
  pNVar12 = Network::NWParameters::typeMetadataAccessor();
  uVar15 = *(undefined8 *)(unaff_x20 + 0x90);
  tls = *(Options **)(unaff_x20 + 0x98);
  _swift_retain(tls);
  _swift_retain(uVar15);
  pNVar12 = Network::NWParameters::___allocating_init(pNVar12,tls);
  if (*(code **)(unaff_x20 + 0x80) != (code *)0x0) {
    (**(code **)(unaff_x20 + 0x80))(pNVar12);
  }
  if (((*(byte *)(unaff_x20 + 0xf0) & 1) == 0) && (*(char *)(unaff_x20 + 0xf1) != '\x01')) {
    uVar5 = *(undefined1 *)(unaff_x20 + 0xf2);
  }
  else {
    uVar5 = true;
  }
  this = pNVar12;
  Network::NWParameters::set_allowLocalEndpointReuse(pNVar12,(bool)uVar5);
  Network::NWParameters::set_includePeerToPeer(this,*(bool *)(unaff_x20 + 0xf3));
  MVar6 = Network::NWParameters::MultipathServiceType::typeMetadataAccessor();
  lVar18 = _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType;
  lVar19 = *(long *)(CONCAT71(extraout_var_01,MVar6.value) + -8);
  lVar23 = lVar17 - (*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 +
                     _TtC20NIOTransportServices22NIOTSConnectionChannel::multipathServiceType,
                     auStack_78,0,0);
  (**(code **)(lVar19 + 0x10))(lVar23,unaff_x20 + lVar18,CONCAT71(extraout_var_01,MVar6.value));
  Network::NWParameters::set_multipathServiceType(pNVar12,(MultipathServiceType)(__int8)lVar23);
  lVar17 = lVar17 - (local_88 + 0xfU & 0xfffffffffffffff0);
  (*pcVar16)(lVar17,uStack_80,lVar7);
  pNVar13 = Network::NWConnection::typeMetadataAccessor();
  _swift_allocObject(pNVar13,*(undefined4 *)(pNVar13 + 0x30),*(undefined2 *)(pNVar13 + 0x34));
  _swift_retain(pNVar12);
  pNVar13 = Network::NWConnection::init(pNVar13,(NWEndpoint)(__int8)lVar17,pNVar12);
  _swift_retain();
  Network::NWConnection::_set_stateUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_betterPathUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_viabilityUpdateHandler(pNVar13);
  _swift_retain();
  Network::NWConnection::_set_pathUpdateHandler(pNVar13);
  uVar15 = *(undefined8 *)(unaff_x20 + 0x58);
  *(NWConnection **)(unaff_x20 + 0x58) = pNVar13;
  _swift_retain(pNVar13);
  _swift_release(uVar15);
  Network::NWConnection::start(pNVar13,*(OS_dispatch_queue **)(unaff_x20 + 0x70));
  _swift_release(pNVar12);
  _swift_release(pNVar13);
  return;
}



/* Address: 0x1009ac214 | FUN_1009ac214 */

void FUN_1009ac214(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + 0x98;
  _swift_beginAccess(lVar4,auStack_58,1,0);
  if (*(char *)(unaff_x20 + 0x98) == '\x04') {
    *(undefined1 *)(unaff_x20 + 0x98) = 0;
    plVar3 = *(long **)(unaff_x20 + 0xa0);
    pcVar5 = *(code **)(*plVar3 + 0x88);
    plVar1 = plVar3;
    _swift_retain();
    (*pcVar5)();
    *(undefined1 *)plVar1 = 1;
    _swift_release(plVar3);
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
    lVar4 = *(long *)(unaff_x20 + 0x50);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009ac350);
      (*pcVar5)();
    }
    _swift_retain(lVar4);
    FUN_100629564();
    _swift_release(lVar4);
    _swift_beginAccess(unaff_x20 + 0xa9,auStack_78,0,0);
    if (*(char *)(unaff_x20 + 0xa9) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + 0x50);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1009ac354);
        (*pcVar5)();
      }
      _swift_retain(lVar4);
      FUN_100627440();
      _swift_release(lVar4);
    }
  }
  else {
    FUN_100991e0c();
    puVar2 = &DAT_100f21a58;
    _swift_allocError(&DAT_100f21a58,lVar4,0,0);
    _swift_willThrow();
    FUN_1009ae784(puVar2,2,param_1);
    _swift_errorRelease(puVar2);
  }
  return;
}



/* Address: 0x1009ac354 | FUN_1009ac354 */

void FUN_1009ac354(long param_1)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  long unaff_x20;
  long lVar4;
  undefined1 auStack_78 [32];
  undefined1 auStack_58 [24];
  
  puVar2 = (undefined1 *)(unaff_x20 + 0xa0);
  _swift_beginAccess(puVar2,auStack_58,1,0);
  if (*(char *)(unaff_x20 + 0xa0) == '\x06') {
    *(undefined1 *)(unaff_x20 + 0xa0) = 0;
    (**(code **)(**(long **)(unaff_x20 + 0xa8) + 0x88))();
    *puVar2 = 1;
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
    lVar4 = *(long *)(unaff_x20 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ac480);
      (*pcVar1)();
    }
    _swift_retain(lVar4);
    FUN_100629564();
    _swift_release(lVar4);
    _swift_beginAccess(unaff_x20 + 0xb2,auStack_78,0,0);
    if (*(char *)(unaff_x20 + 0xb2) == '\x01') {
      lVar4 = *(long *)(unaff_x20 + 0x48);
      if (lVar4 == 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1009ac484);
        (*pcVar1)();
      }
      _swift_retain(lVar4);
      FUN_100627440();
      _swift_release(lVar4);
    }
  }
  else {
    FUN_100991e0c();
    puVar3 = &DAT_100f21a58;
    _swift_allocError(&DAT_100f21a58,puVar2,0,0);
    _swift_willThrow();
    FUN_1009aeb18(puVar3,2,param_1);
    _swift_errorRelease(puVar3);
  }
  return;
}



/* Address: 0x1009ac484 | FUN_1009ac484 */

void FUN_1009ac484(undefined8 param_1)

{
  FUN_1009ac49c(param_1,FUN_1009af2ac);
  return;
}



/* Address: 0x1009ac490 | FUN_1009ac490 */

void FUN_1009ac490(undefined8 param_1)

{
  FUN_1009ac49c(param_1,FUN_1009afacc);
  return;
}



/* Address: 0x1009ac49c | FUN_1009ac49c */

void FUN_1009ac49c(long param_1,code *param_2)

{
  long *plVar1;
  undefined *puVar2;
  long unaff_x20;
  long *plVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_58 [24];
  
  lVar4 = unaff_x20 + 0x88;
  _swift_beginAccess(lVar4,auStack_58,1,0);
  if (*(char *)(unaff_x20 + 0x88) == '\x03') {
    *(undefined1 *)(unaff_x20 + 0x88) = 0;
    plVar3 = *(long **)(unaff_x20 + 0x90);
    pcVar5 = *(code **)(*plVar3 + 0x88);
    plVar1 = plVar3;
    _swift_retain();
    (*pcVar5)();
    *(undefined1 *)plVar1 = 1;
    _swift_release(plVar3);
    if (param_1 != 0) {
      FUN_100988b88(0,0,param_1);
    }
    lVar4 = *(long *)(unaff_x20 + 0x48);
    if (lVar4 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1009ac59c);
      (*pcVar5)();
    }
    _swift_retain(lVar4);
    FUN_100629564();
    _swift_release(lVar4);
  }
  else {
    FUN_100991e0c();
    puVar2 = &DAT_100f21a58;
    _swift_allocError(&DAT_100f21a58,lVar4,0,0);
    _swift_willThrow();
    (*param_2)(puVar2,2,param_1);
    _swift_errorRelease(puVar2);
  }
  return;
}



/* Address: 0x1009ac59c | thunk_FUN_1009ac5a0 */

void thunk_FUN_1009ac5a0(void)

{
  FUN_1009ac5a0();
  return;
}



/* Address: 0x1009ac5a0 | FUN_1009ac5a0 */

void FUN_1009ac5a0(long param_1)

{
  State SVar1;
  undefined7 extraout_var;
  NWConnection *pNVar3;
  undefined1 *puVar4;
  NWParameters *pNVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  NWConnection *this;
  long unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar2;
  
  this = *(NWConnection **)(unaff_x20 + 0x60);
  if (this == (NWConnection *)0x0) {
    if (param_1 != 0) {
      lVar2 = param_1;
      FUN_100991f1c();
      puVar7 = &DAT_100f21a78;
      uVar11 = 0;
      _swift_allocError(&DAT_100f21a78,lVar2,0,0);
      uVar8 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar9 = uVar8;
      lVar13 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar9 & 1) == 0) {
        puVar10 = &DAT_100f24448;
        _swift_allocObject(&DAT_100f24448,0x20,7);
        *(long *)(puVar10 + 0x10) = param_1;
        *(undefined **)(puVar10 + 0x18) = puVar7;
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar7);
        (*pcVar14)(thunk_FUN_1008d678c,puVar10,uVar8,lVar2);
        _swift_release(puVar10);
      }
      else {
        puVar10 = puVar7;
        thunk_FUN_1005de8f4(puVar7);
        FUN_1006486f8();
        FUN_100004550(puVar10,lVar13);
        _swift_bridgeObjectRelease(uVar11);
      }
      _swift_errorRelease(puVar7);
      return;
    }
  }
  else {
    SVar1 = Network::NWConnection::State::typeMetadataAccessor();
    lVar2 = CONCAT71(extraout_var,SVar1.value);
    lVar13 = *(long *)(lVar2 + -8);
    puVar6 = &stack0xffffffffffffffb0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pNVar3 = this;
    _swift_retain();
    Network::NWConnection::get_state(this,pNVar3);
    puVar4 = puVar6;
    (**(code **)(lVar13 + 0x58))(puVar6,lVar2);
    if ((PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
         == (undefined *)0x0) ||
       ((int)puVar4 !=
        *(int *)
         PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
       )) {
      (**(code **)(lVar13 + 8))(puVar6,lVar2);
      if (param_1 != 0) {
        FUN_100991f1c();
        puVar7 = &DAT_100f21a78;
        uVar11 = 0;
        _swift_allocError(&DAT_100f21a78,puVar6,0,0);
        uVar8 = *(ulong *)(param_1 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar9 = uVar8;
        lVar13 = lVar2;
        (**(code **)(lVar2 + 0x10))();
        if ((uVar9 & 1) == 0) {
          puVar10 = &DAT_100f24470;
          _swift_allocObject(&DAT_100f24470,0x20,7);
          *(long *)(puVar10 + 0x10) = param_1;
          *(undefined **)(puVar10 + 0x18) = puVar7;
          pcVar14 = *(code **)(lVar2 + 0x18);
          _swift_retain(param_1);
          _swift_errorRetain(puVar7);
          (*pcVar14)(thunk_FUN_1008d678c,puVar10,uVar8,lVar2);
          _swift_release(puVar10);
          _swift_release(this);
        }
        else {
          puVar10 = puVar7;
          thunk_FUN_1005de8f4(puVar7);
          FUN_1006486f8();
          _swift_release(this);
          FUN_100004550(puVar10,lVar13);
          _swift_bridgeObjectRelease(uVar11);
        }
        _swift_errorRelease(puVar7);
        return;
      }
    }
    else {
      (**(code **)(lVar13 + 8))(puVar6,lVar2);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x80);
      *(long *)(unaff_x20 + 0x80) = param_1;
      _swift_retain(param_1);
      _swift_release(uVar11);
      _swift_retain();
      pNVar3 = this;
      Network::NWConnection::_set_stateUpdateHandler(this);
      _swift_retain();
      Network::NWConnection::_set_betterPathUpdateHandler(pNVar3);
      _swift_retain();
      Network::NWConnection::_set_viabilityUpdateHandler(pNVar3);
      _swift_retain();
      pcVar14 = thunk_FUN_1009b5cc8;
      Network::NWConnection::_set_pathUpdateHandler(pNVar3);
      pcVar12 = *(code **)(unaff_x20 +
                          _TtC20NIOTransportServices30NIOTSDatagramConnectionChannel::
                          nwParametersConfigurator);
      if (pcVar12 != (code *)0x0) {
        pNVar5 = Network::NWConnection::get_parameters(this,(NWConnection *)pcVar14);
        (*pcVar12)();
        _swift_release(pNVar5);
      }
      Network::NWConnection::start(this,*(OS_dispatch_queue **)(unaff_x20 + 0x78));
    }
    _swift_release(this);
  }
  return;
}



/* Address: 0x1009ac90c | FUN_1009ac90c */

void FUN_1009ac90c(long param_1)

{
  State SVar1;
  undefined7 extraout_var;
  NWConnection *pNVar3;
  undefined1 *puVar4;
  NWParameters *pNVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  undefined *puVar10;
  NWConnection *this;
  long unaff_x20;
  undefined8 uVar11;
  code *pcVar12;
  long lVar13;
  code *pcVar14;
  long lVar2;
  
  this = *(NWConnection **)(unaff_x20 + 0x58);
  if (this == (NWConnection *)0x0) {
    if (param_1 != 0) {
      lVar2 = param_1;
      FUN_100991f1c();
      puVar7 = &DAT_100f21a78;
      uVar11 = 0;
      _swift_allocError(&DAT_100f21a78,lVar2,0,0);
      uVar8 = *(ulong *)(param_1 + 0x20);
      lVar2 = *(long *)(param_1 + 0x28);
      _swift_getObjectType();
      uVar9 = uVar8;
      lVar13 = lVar2;
      (**(code **)(lVar2 + 0x10))();
      if ((uVar9 & 1) == 0) {
        puVar10 = &DAT_100f24790;
        _swift_allocObject(&DAT_100f24790,0x20,7);
        *(long *)(puVar10 + 0x10) = param_1;
        *(undefined **)(puVar10 + 0x18) = puVar7;
        pcVar14 = *(code **)(lVar2 + 0x18);
        _swift_retain(param_1);
        _swift_errorRetain(puVar7);
        (*pcVar14)(thunk_FUN_1008d678c,puVar10,uVar8,lVar2);
        _swift_release(puVar10);
      }
      else {
        puVar10 = puVar7;
        thunk_FUN_1005de8f4(puVar7);
        FUN_1006486f8();
        FUN_100004550(puVar10,lVar13);
        _swift_bridgeObjectRelease(uVar11);
      }
      _swift_errorRelease(puVar7);
      return;
    }
  }
  else {
    SVar1 = Network::NWConnection::State::typeMetadataAccessor();
    lVar2 = CONCAT71(extraout_var,SVar1.value);
    lVar13 = *(long *)(lVar2 + -8);
    puVar6 = &stack0xffffffffffffffb0 + -(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
    pNVar3 = this;
    _swift_retain();
    Network::NWConnection::get_state(this,pNVar3);
    puVar4 = puVar6;
    (**(code **)(lVar13 + 0x58))(puVar6,lVar2);
    if ((PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
         == (undefined *)0x0) ||
       ((int)puVar4 !=
        *(int *)
         PTR___enum_case_for_Network_NWConnection_State_setup_Network_NWConnection_State_Type___>_Network_NWConnection_State_100eaa0a0
       )) {
      (**(code **)(lVar13 + 8))(puVar6,lVar2);
      if (param_1 != 0) {
        FUN_100991f1c();
        puVar7 = &DAT_100f21a78;
        uVar11 = 0;
        _swift_allocError(&DAT_100f21a78,puVar6,0,0);
        uVar8 = *(ulong *)(param_1 + 0x20);
        lVar2 = *(long *)(param_1 + 0x28);
        _swift_getObjectType();
        uVar9 = uVar8;
        lVar13 = lVar2;
        (**(code **)(lVar2 + 0x10))();
        if ((uVar9 & 1) == 0) {
          puVar10 = &DAT_100f247b8;
          _swift_allocObject(&DAT_100f247b8,0x20,7);
          *(long *)(puVar10 + 0x10) = param_1;
          *(undefined **)(puVar10 + 0x18) = puVar7;
          pcVar14 = *(code **)(lVar2 + 0x18);
          _swift_retain(param_1);
          _swift_errorRetain(puVar7);
          (*pcVar14)(thunk_FUN_1008d678c,puVar10,uVar8,lVar2);
          _swift_release(puVar10);
          _swift_release(this);
        }
        else {
          puVar10 = puVar7;
          thunk_FUN_1005de8f4(puVar7);
          FUN_1006486f8();
          _swift_release(this);
          FUN_100004550(puVar10,lVar13);
          _swift_bridgeObjectRelease(uVar11);
        }
        _swift_errorRelease(puVar7);
        return;
      }
    }
    else {
      (**(code **)(lVar13 + 8))(puVar6,lVar2);
      uVar11 = *(undefined8 *)(unaff_x20 + 0x78);
      *(long *)(unaff_x20 + 0x78) = param_1;
      _swift_retain(param_1);
      _swift_release(uVar11);
      _swift_retain();
      pNVar3 = this;
      Network::NWConnection::_set_stateUpdateHandler(this);
      _swift_retain();
      Network::NWConnection::_set_betterPathUpdateHandler(pNVar3);
      _swift_retain();
      Network::NWConnection::_set_viabilityUpdateHandler(pNVar3);
      _swift_retain();
      pcVar14 = thunk_FUN_1009b67c4;
      Network::NWConnection::_set_pathUpdateHandler(pNVar3);
      pcVar12 = *(code **)(unaff_x20 + 0x80);
      if (pcVar12 != (code *)0x0) {
        pNVar5 = Network::NWConnection::get_parameters(this,(NWConnection *)pcVar14);
        (*pcVar12)();
        _swift_release(pNVar5);
      }
      Network::NWConnection::start(this,*(OS_dispatch_queue **)(unaff_x20 + 0x70));
    }
    _swift_release(this);
  }
  return;
}


